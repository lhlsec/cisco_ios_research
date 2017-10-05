# $Id: rules.mk,v 1.1.4.1 1996/05/09 15:00:30 rbadri Exp $
# $Source: /release/112/cvs/Xwbu/cat5k/alc_sarpmon/rules.mk,v $
#------------------------------------------------------------------
# rules.mk -- rules sub-makefile for LSI Logic ATMizer PMON.
#
# 
#
# Copyright (c) 1996 by cisco Systems, Inc.
# All rights reserved.
#------------------------------------------------------------------
# $Log: rules.mk,v $
# Revision 1.1.4.1  1996/05/09  15:00:30  rbadri
# Branch: California_branch
# Synergy features to the mainline
#
# Revision 1.1.40.1  1996/04/27  06:16:27  cakyol
# non sync sync from V112_0_2 to ....
# Branch: LE_Cal_ATM_FR_California_Postsync_960425_branch
#
# Revision 1.1.28.1  1996/04/08  01:41:44  bbenson
# Branch: LE_Cal_V112_0_2_branch
# Sync of LE_Cal to new V112_0_2 sync point (post Port Ready).
#
# Revision 1.1.16.1  1996/03/22  09:12:39  rlowe
# Non-sync Synalc3_LE_Cal_V111_1_0_3_merge_branch to V111_1_3
# yielding LE_Syn_Cal_V111_1_3_branch.
# Branch: LE_Syn_Cal_V111_1_3_branch
#
# Revision 1.1.2.1  1996/03/13  02:38:13  rlowe
# Add file content from Synergy repository.
# Branch: Synalc3_LE_Cal_V111_1_0_3_merge_branch
#
# Revision 1.1  1996/03/11  07:44:08  rlowe
# Placeholders for California.
#
#
#------------------------------------------------------------------
# $Endlog$
#

##################################################
#          Do Not Edit This File                 #
#     Add any new modules to files.mk            #
##################################################
mips.o : ../mips.s
	pmcc -c $(ASFLAGS) ../mips.s
main.o : ../main.c
	pmcc -c $(CFLAGS) ../main.c
commands.o : ../commands.c
	pmcc -c $(CFLAGS) ../commands.c
dis.o : ../dis.c
	pmcc -c $(CFLAGS) ../dis.c
hist.o : ../hist.c
	pmcc -c $(CFLAGS) ../hist.c
machine.o : ../machine.c
	pmcc -c $(CFLAGS) ../machine.c
regs.o : ../regs.c
	pmcc -c $(CFLAGS) ../regs.c
sym.o : ../sym.c
	pmcc -c $(CFLAGS) ../sym.c
set.o : ../set.c
	pmcc -c $(CFLAGS) ../set.c
stty.o : ../stty.c
	pmcc -c $(CFLAGS) ../stty.c
more.o : ../more.c
	pmcc -c $(CFLAGS) ../more.c
memtst.o : ../memtst.c
	pmcc -c $(CFLAGS) ../memtst.c
load.o : ../load.c
	pmcc -c $(CFLAGS) ../load.c
go.o : ../go.c
	pmcc -c $(CFLAGS) ../go.c
debug.o : ../debug.c
	pmcc -c $(CFLAGS) ../debug.c
regdefs.o : ../regdefs.c
	pmcc -c $(CFLAGS) ../regdefs.c
cmdtable.o : ../cmdtable.c
	pmcc -c $(CFLAGS) ../cmdtable.c
sbrk.o : ../sbrk.c
	pmcc -c $(CFLAGS) ../sbrk.c
demo.o : ../demo.c
	pmcc -c $(CFLAGS) ../demo.c
date.o : ../date.c
	pmcc -c $(CFLAGS) ../date.c
vers.o : ../vers.c
	pmcc -c $(CFLAGS) ../vers.c
tools.o : ../tools.c
	pmcc -c $(CFLAGS) ../tools.c
devinfo.o : ../devinfo.c
	pmcc -c $(CFLAGS) ../devinfo.c
