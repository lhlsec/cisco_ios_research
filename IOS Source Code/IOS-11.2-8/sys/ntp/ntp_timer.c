/* $Id: ntp_timer.c,v 3.2.62.2 1996/08/19 18:55:22 dkatz Exp $
 * $Source: /release/112/cvs/Xsys/ntp/ntp_timer.c,v $
 *------------------------------------------------------------------
 * NTP timer routines
 *
 * Dave Katz, November 1992
 *
 * Copyright (c) 1992-1996 by cisco Systems, Inc.
 * All rights reserved.
 *
 *------------------------------------------------------------------
 * $Log: ntp_timer.c,v $
 * Revision 3.2.62.2  1996/08/19  18:55:22  dkatz
 * CSCdi65483:  NTP needs modularity cleanup
 * Branch: California_branch
 * Break up NTP into separate subsystems.  Significantly reduce image size
 * and stack usage.  Clean up refclock interface.  Make all modules
 * compile cleanly with all error checking enabled (DUSTY is clean!)
 *
 * Revision 3.2.62.1  1996/04/16  19:03:30  rchandra
 * CSCdi54830:  IP features commit
 * Branch: California_branch
 *
 * Revision 3.2  1995/11/17  17:51:24  hampton
 * Remove old entries from the RCS header logs.
 *
 * Revision 3.1  1995/11/09  12:41:24  shaker
 * Bump version numbers from 2.x to 3.x.
 *
 * Revision 2.2  1995/08/08  16:48:10  hampton
 * Miscellaneous changes to eliminate direct references to the system
 * clock and to convert to always using the timer macros to access timers.
 * [CSCdi38391]
 *
 * Revision 2.1  1995/06/07 21:45:56  hampton
 * Bump version numbers from 1.x to 2.x.
 *
 *------------------------------------------------------------------
 * $Endlog$
 */

/*
 * Copyright 1992 David L. Mills
 *
 * Permission to use, copy, modify, and distribute this software and its
 * documentation for any purpose and without fee is hereby granted,
 * provided that the above copyright notice appears in all copies and
 * that both the copyright notice and this permission notice appear in
 * supporting documentation, and that the name University of Delaware
 * not be used in advertising or publicity pertaining to distribution of
 * the software without specific, written prior permission.  The
 * University of Delaware makes no representations about the suitability
 * of this software for any purpose.  It is provided "as is" without
 * express or implied warranty.
 *
 * Authors
 *
 * Dennis Ferguson <dennis@mrbill.canet.ca> (foundation code for NTP
 *      Version 2 as specified in RFC-1119)
 * Lars H. Mathiesen <thorinn@diku.dk> (adaptation of foundation code for
 *      Version 3 as specified in RFC01305)
 * Louis A. Mamakos <louie@ni.umd.edu> (support for md5-based 
 *      authentication)
 * Craig Leres <leres@ee.lbl.gov> (port to 4.4BSD operating system,
 *	ppsclock, Maganavox GPS clock driver)
 * Nick Sayer <mrapple@quack.sac.ca.us> (SunOS streams modules)
 * Frank Kardel <Frank.Kardel@informatik.uni-erlangen.de> (DCF77 clock
 *      driver, STREAMS module for DCF77, support scripts)
 * Rainer Pruy <Rainer.Pruy@informatik.uni-erlangen.de> (monitoring/trap
 *      scripts, statistics file handling)
 * Glenn Hollinger <glenn@herald.usask.ca> (GOES clock driver)
 * Kenneth Stone <ken@sdd.hp.com> (port to HPUX operating system)
 * Dave Katz <dkatz@cisco.com> (port to RS/6000 AIX operating system)
 * William L. Jones <jones@hermes.chpc.utexas.edu> (RS/6000 AIX
 *	modifications, HPUX modifications)
 * John A. Dundas III <dundas@salt.jpl.nasa.gov> (Apple A/UX port)
 * David L. Mills <mills@udel.edu> (WWVB and Austron GPS clock drivers,
 *	pps support)
 * Jeffrey Mogul <mogul@pa.dec.com> (ntptrace utility)
 * Steve Clift (clift@ml.csiro.au) OMEGA clock driver)
 */

/*
 * ntp_event.c - event timer support routines
 */
#define CISCO

#ifdef CISCO
#include "master.h"
#include "packet.h"
#include "../ip/ip.h"
#else
#include <signal.h>
#include <sys/types.h>
#include <sys/time.h>
#include <sys/signal.h>
#include <sys/socket.h>
#include <netinet/in.h>

#include "ntp_syslog.h"
#endif /* CISCO */
#include "ntpd.h"

/*
 * These routines provide support for the event timer.  The timer is
 * implemented by an interrupt routine which sets a flag once every
 * 2**EVENT_TIMEOUT seconds (currently 1), and a timer routine which
 * is called when the mainline code gets around to seeing the flag.
 * The timer routine dispatches the clock adjustment code if its time
 * has come, then searches the timer queue for expiries which are
 * dispatched to the transmit procedure.  Finally, we call the hourly
 * procedure to do cleanup and print a message.
 */

/*
 * Alarm flag.  The mainline code imports this.
 */
static int alarm_flag;

/*
 * adjust and hourly counters
 */
static u_long adjust_timer;
static u_long hourly_timer;
static u_long cal_update_timer;

/*
 * Imported from the leap module.  The leap timer.
 */
extern u_long leap_timer;

/*
 * Statistics counter for the interested.
 */
u_long alarm_overflow;

#define	HOUR	(60*60)

/*
 * Current_time holds the number of seconds since we started, in
 * increments of 2**EVENT_TIMEOUT seconds.  The timer queue is the
 * hash into which we sort timer entries.
 */
u_long current_time;
struct event timerqueue[TIMER_NSLOTS];

/*
 * Stats.  Number of overflows and number of calls to transmit().
 */
u_long timer_timereset;
u_long timer_overflows;
u_long timer_xmtcalls;


/*
 * init_timer - initialize the timer data structures
 */
void
init_timer()
{
	register int i;
#ifndef CISCO
	struct itimerval itimer;
	void alarming();
#endif /* CISCO */

	/*
	 * Initialize...
	 */
	alarm_flag = 0;
	alarm_overflow = 0;
	adjust_timer = (1<<CLOCK_ADJ);
	hourly_timer = HOUR;
	cal_update_timer = CALENDAR_UPDATE_INTERVAL;
	current_time = 0;
	timer_overflows = 0;
	timer_xmtcalls = 0;
	timer_timereset = 0;

	for (i = 0; i < TIMER_NSLOTS; i++) {
		/*
		 * Queue pointers should point at themselves.  Event
		 * times must be set to 0 since this is used to
		 * detect the queue end.
		 */
		timerqueue[i].next = &timerqueue[i];
		timerqueue[i].prev = &timerqueue[i];
		timerqueue[i].event_time = 0;
	}

	/*
	 * Set up the alarm interrupt.  The first comes 2**EVENT_TIMEOUT
	 * seconds from now and they continue on every 2**EVENT_TIMEOUT
	 * seconds.
	 */
#ifdef CISCO
	TIMER_START(ntp_sleep_timer, ONESEC * (1 << EVENT_TIMEOUT));
#else
	(void) signal(SIGALRM, alarming);
	itimer.it_interval.tv_sec = itimer.it_value.tv_sec = (1<<EVENT_TIMEOUT);
	itimer.it_interval.tv_usec = itimer.it_value.tv_usec = 0;
	setitimer(ITIMER_REAL, &itimer, (struct itimerval *)0);
#endif /* CISCO */
}



/*
 * timer - dispatch anyone who needs to be
 */
void
#ifdef CISCO
ntp_timer()
#else
timer()
#endif /* CISCO */
{
	register struct event *ev;
	register struct event *tq;

	current_time += (1<<EVENT_TIMEOUT);

	/*
	 * Adjustment timeout first
	 */
	if (adjust_timer <= current_time) {
		adjust_timer += (1<<CLOCK_ADJ);
		adj_host_clock();
	}

	/*
	 * Leap timer next.
	 */
	if (leap_timer != 0 && leap_timer <= current_time)
		leap_process();

	/*
	 * Now dispatch any peers whose event timer has expired.
	 */
	tq = &timerqueue[TIMER_SLOT(current_time)];
	ev = tq->next;
	while (ev->event_time != 0
	    && ev->event_time < (current_time + (1<<EVENT_TIMEOUT))) {
		tq->next = ev->next;
		tq->next->prev = tq;
		ev->prev = ev->next = 0;
		timer_xmtcalls++;
		ev->event_handler(ev->peer);
		ev = tq->next;
	}

	/*
	 * Now the calendar update routine
	 */
	if (cal_update_timer != 0 && cal_update_timer <= current_time) {
	    calendar_update_process();
	    cal_update_timer += CALENDAR_UPDATE_INTERVAL;
	}

#ifndef CISCO
	/*
	 * Finally, call the hourly routine
	 */
	if (hourly_timer <= current_time) {
		hourly_timer += HOUR;
		hourly_stats();
	}
#endif /* CISCO */
}


#ifndef CISCO
/*
 * alarming - tell the world we've been alarmed
 */
void
alarming()
{
	extern int initializing;	/* from main line code */

	if (initializing)
		return;
	if (alarm_flag)
		alarm_overflow++;
	else
		alarm_flag++;
}
#endif /* CISCO */

/*
 * timer_clr_stats - clear timer module stat counters
 */
void
timer_clr_stats()
{
	timer_overflows = 0;
	timer_xmtcalls = 0;
	timer_timereset = current_time;
}
