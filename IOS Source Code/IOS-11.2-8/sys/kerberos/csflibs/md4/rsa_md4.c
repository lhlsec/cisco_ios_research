/* $Id: rsa_md4.c,v 3.2 1995/11/17 17:46:44 hampton Exp $
 * $Source: /swtal/cherf.111/ios/sys/kerberos/csflibs/md4/rsa_md4.c,v $
 *------------------------------------------------------------------
 * rsa_md4.c - MD4 Engine
 *
 * September 1995, Che-lin Ho
 *
 * Copyright (c) 1995 by cisco Systems, Inc.
 * All rights reserved.
 *------------------------------------------------------------------
 * $Log: rsa_md4.c,v $
 * Revision 3.2  1995/11/17  17:46:44  hampton
 * Remove old entries from the RCS header logs.
 *
 * Revision 3.1  1995/11/09  12:20:31  shaker
 * Bump version numbers from 2.x to 3.x.
 *
 *------------------------------------------------------------------
 * $Endlog$
 */

#define csfSRCID "%W% %G%"
/*.original md4.c 3.1 12/29/93*/

/*
 **********************************************************************
 ** md4.c                                                            **
 ** RSA Data Security, Inc. MD4 Message Digest Algorithm             **
 ** Created: 2/17/90 RLR                                             **
 ** Revised: 1/91 SRD,AJ,BSK,JT Reference C Version                  **
 **********************************************************************
 */

/*
 **********************************************************************
 ** Copyright (C) 1990, RSA Data Security, Inc. All rights reserved. **
 **                                                                  **
 ** License to copy and use this software is granted provided that   **
 ** it is identified as the "RSA Data Security, Inc. MD4 Message     **
 ** Digest Algorithm" in all material mentioning or referencing this **
 ** software or this function.                                       **
 **                                                                  **
 ** License is also granted to make and use derivative works         **
 ** provided that such works are identified as "derived from the RSA **
 ** Data Security, Inc. MD4 Message Digest Algorithm" in all         **
 ** material mentioning or referencing the derived work.             **
 **                                                                  **
 ** RSA Data Security, Inc. makes no representations concerning      **
 ** either the merchantability of this software or the suitability   **
 ** of this software for any particular purpose.  It is provided "as **
 ** is" without express or implied warranty of any kind.             **
 **                                                                  **
 ** These notices must be retained in any copies of any part of this **
 ** documentation and/or software.                                   **
 **********************************************************************
 */

#include <csf/header.h>
#include "rsa_md4.h"

static void Transform (csf_ui32 *, csf_ui32 *);

static const unsigned char PADDING[64] = {
  0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};

/* F, G and H are basic MD4 functions: selection, majority, parity */
#define F(x, y, z) (((x) & (y)) | ((~x) & (z)))
#define G(x, y, z) (((x) & (y)) | ((x) & (z)) | ((y) & (z)))
#define H(x, y, z) ((x) ^ (y) ^ (z))

/* ROTATE_LEFT rotates x left n bits */
#define ROTATE_LEFT(x, n) (((x) << (n)) | ((x) >> (32-(n))))

/* FF, GG and HH are MD4 transformations for rounds 1, 2 and 3 */
/* Rotation is separate from addition to prevent recomputation */
#define FF(a, b, c, d, x, s) \
  {(a) += F ((b), (c), (d)) + (x); \
   (a) = ROTATE_LEFT ((a), (s));}
#define GG(a, b, c, d, x, s) \
  {(a) += G ((b), (c), (d)) + (x) + (csf_ui32)013240474631; \
   (a) = ROTATE_LEFT ((a), (s));}
#define HH(a, b, c, d, x, s) \
  {(a) += H ((b), (c), (d)) + (x) + (csf_ui32)015666365641; \
   (a) = ROTATE_LEFT ((a), (s));}

void csf_RSAMD4Init (
	csf_RSAMD4_CTX *mdContext
){
	mdContext->i[0] = mdContext->i[1] = (csf_ui32)0;

	/* Load magic initialization constants.
	 */
	mdContext->buf[0] = (csf_ui32)0x67452301;
	mdContext->buf[1] = (csf_ui32)0xefcdab89;
	mdContext->buf[2] = (csf_ui32)0x98badcfe;
	mdContext->buf[3] = (csf_ui32)0x10325476;
}

void csf_RSAMD4Update (
	csf_RSAMD4_CTX *mdContext,
	const unsigned char *inBuf,
	unsigned int inLen
){
	csf_ui32 in[16];
	int mdi;
	unsigned int i, ii;

	/* compute number of bytes mod 64 */
	mdi = (int)((mdContext->i[0] >> 3) & 0x3F);

	/* update number of bits */
	if ((mdContext->i[0] + ((csf_ui32)inLen << 3)) < mdContext->i[0])
		mdContext->i[1]++;
	mdContext->i[0] += ((csf_ui32)inLen << 3);
	mdContext->i[1] += ((csf_ui32)inLen >> 29);

	while (inLen--) {
		/* add new character to buffer, increment mdi */
		mdContext->in[mdi++] = *inBuf++;

		/* transform if necessary */
		if (mdi == 0x40) {
			for (i = 0, ii = 0; i < 16; i++, ii += 4)
				in[i] = (((csf_ui32)mdContext->in[ii+3]) << 24) |
				(((csf_ui32)mdContext->in[ii+2]) << 16) |
				(((csf_ui32)mdContext->in[ii+1]) << 8) |
				((csf_ui32)mdContext->in[ii]);
			Transform (mdContext->buf, in);
			mdi = 0;
		}
	}
}

void csf_RSAMD4Final (
	csf_RSAMD4_CTX *mdContext
){
	csf_ui32 in[16];
	int mdi;
	unsigned int i, ii;
	unsigned int padLen;

	/* save number of bits */
	in[14] = mdContext->i[0];
	in[15] = mdContext->i[1];

	/* compute number of bytes mod 64 */
	mdi = (int)((mdContext->i[0] >> 3) & 0x3F);

	/* pad out to 56 mod 64 */
	padLen = (mdi < 56) ? (56 - mdi) : (120 - mdi);
	csf_RSAMD4Update (mdContext, PADDING, padLen);

	/* append length in bits and transform */
	for (i = 0, ii = 0; i < 14; i++, ii += 4)
		in[i] = (((csf_ui32)mdContext->in[ii+3]) << 24) |
		(((csf_ui32)mdContext->in[ii+2]) << 16) |
		(((csf_ui32)mdContext->in[ii+1]) << 8) |
		((csf_ui32)mdContext->in[ii]);
	Transform (mdContext->buf, in);


	/* store buffer in digest */
	for (i = 0, ii = 0; i < 4; i++, ii += 4) {
		mdContext->digest[ii] = (unsigned char)(mdContext->buf[i] & 0xFF);
		mdContext->digest[ii+1] =
			(unsigned char)((mdContext->buf[i] >> 8) & 0xFF);
		mdContext->digest[ii+2] =
			(unsigned char)((mdContext->buf[i] >> 16) & 0xFF);
		mdContext->digest[ii+3] =
			(unsigned char)((mdContext->buf[i] >> 24) & 0xFF);
	}
}

/* Basic MD4 step. Transform buf based on in.
 */
static void Transform (
	csf_ui32 *buf,
	csf_ui32 *in
){
	csf_ui32 a = buf[0], b = buf[1], c = buf[2], d = buf[3];

	/* Round 1 */
	FF (a, b, c, d, in[ 0],  3);
	FF (d, a, b, c, in[ 1],  7);
	FF (c, d, a, b, in[ 2], 11);
	FF (b, c, d, a, in[ 3], 19);
	FF (a, b, c, d, in[ 4],  3);
	FF (d, a, b, c, in[ 5],  7);
	FF (c, d, a, b, in[ 6], 11);
	FF (b, c, d, a, in[ 7], 19);
	FF (a, b, c, d, in[ 8],  3);
	FF (d, a, b, c, in[ 9],  7);
	FF (c, d, a, b, in[10], 11);
	FF (b, c, d, a, in[11], 19);
	FF (a, b, c, d, in[12],  3);
	FF (d, a, b, c, in[13],  7);
	FF (c, d, a, b, in[14], 11);
	FF (b, c, d, a, in[15], 19);

	/* Round 2 */
	GG (a, b, c, d, in[ 0],  3);
	GG (d, a, b, c, in[ 4],  5);
	GG (c, d, a, b, in[ 8],  9);
	GG (b, c, d, a, in[12], 13);
	GG (a, b, c, d, in[ 1],  3);
	GG (d, a, b, c, in[ 5],  5);
	GG (c, d, a, b, in[ 9],  9);
	GG (b, c, d, a, in[13], 13);
	GG (a, b, c, d, in[ 2],  3);
	GG (d, a, b, c, in[ 6],  5);
	GG (c, d, a, b, in[10],  9);
	GG (b, c, d, a, in[14], 13);
	GG (a, b, c, d, in[ 3],  3);
	GG (d, a, b, c, in[ 7],  5);
	GG (c, d, a, b, in[11],  9);
	GG (b, c, d, a, in[15], 13);

	/* Round 3 */
	HH (a, b, c, d, in[ 0],  3);
	HH (d, a, b, c, in[ 8],  9);
	HH (c, d, a, b, in[ 4], 11);
	HH (b, c, d, a, in[12], 15);
	HH (a, b, c, d, in[ 2],  3);
	HH (d, a, b, c, in[10],  9);
	HH (c, d, a, b, in[ 6], 11);
	HH (b, c, d, a, in[14], 15);
	HH (a, b, c, d, in[ 1],  3);
	HH (d, a, b, c, in[ 9],  9);
	HH (c, d, a, b, in[ 5], 11);
	HH (b, c, d, a, in[13], 15);
	HH (a, b, c, d, in[ 3],  3);
	HH (d, a, b, c, in[11],  9);
	HH (c, d, a, b, in[ 7], 11);
	HH (b, c, d, a, in[15], 15);

	buf[0] += a;
	buf[1] += b;
	buf[2] += c;
	buf[3] += d;
}
