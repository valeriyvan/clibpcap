/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.3"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 1

/* Using locations.  */
#define YYLSP_NEEDED 0

/* Substitute the variable and function names.  */
#define yyparse pcap_parse
#define yylex   pcap_lex
#define yyerror pcap_error
#define yylval  pcap_lval
#define yychar  pcap_char
#define yydebug pcap_debug
#define yynerrs pcap_nerrs


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     DST = 258,
     SRC = 259,
     HOST = 260,
     GATEWAY = 261,
     NET = 262,
     NETMASK = 263,
     PORT = 264,
     PORTRANGE = 265,
     LESS = 266,
     GREATER = 267,
     PROTO = 268,
     PROTOCHAIN = 269,
     CBYTE = 270,
     ARP = 271,
     RARP = 272,
     IP = 273,
     SCTP = 274,
     TCP = 275,
     UDP = 276,
     ICMP = 277,
     IGMP = 278,
     IGRP = 279,
     PIM = 280,
     VRRP = 281,
     CARP = 282,
     ATALK = 283,
     AARP = 284,
     DECNET = 285,
     LAT = 286,
     SCA = 287,
     MOPRC = 288,
     MOPDL = 289,
     TK_BROADCAST = 290,
     TK_MULTICAST = 291,
     NUM = 292,
     INBOUND = 293,
     OUTBOUND = 294,
     IFINDEX = 295,
     PF_IFNAME = 296,
     PF_RSET = 297,
     PF_RNR = 298,
     PF_SRNR = 299,
     PF_REASON = 300,
     PF_ACTION = 301,
     TYPE = 302,
     SUBTYPE = 303,
     DIR = 304,
     ADDR1 = 305,
     ADDR2 = 306,
     ADDR3 = 307,
     ADDR4 = 308,
     RA = 309,
     TA = 310,
     LINK = 311,
     GEQ = 312,
     LEQ = 313,
     NEQ = 314,
     ID = 315,
     EID = 316,
     HID = 317,
     HID6 = 318,
     AID = 319,
     LSH = 320,
     RSH = 321,
     LEN = 322,
     IPV6 = 323,
     ICMPV6 = 324,
     AH = 325,
     ESP = 326,
     VLAN = 327,
     MPLS = 328,
     PPPOED = 329,
     PPPOES = 330,
     GENEVE = 331,
     VXLAN = 332,
     ISO = 333,
     ESIS = 334,
     CLNP = 335,
     ISIS = 336,
     L1 = 337,
     L2 = 338,
     IIH = 339,
     LSP = 340,
     SNP = 341,
     CSNP = 342,
     PSNP = 343,
     STP = 344,
     IPX = 345,
     NETBEUI = 346,
     LANE = 347,
     LLC = 348,
     METAC = 349,
     BCC = 350,
     SC = 351,
     ILMIC = 352,
     OAMF4EC = 353,
     OAMF4SC = 354,
     OAM = 355,
     OAMF4 = 356,
     CONNECTMSG = 357,
     METACONNECT = 358,
     VPI = 359,
     VCI = 360,
     RADIO = 361,
     FISU = 362,
     LSSU = 363,
     MSU = 364,
     HFISU = 365,
     HLSSU = 366,
     HMSU = 367,
     SIO = 368,
     OPC = 369,
     DPC = 370,
     SLS = 371,
     HSIO = 372,
     HOPC = 373,
     HDPC = 374,
     HSLS = 375,
     LEX_ERROR = 376,
     AND = 377,
     OR = 378,
     UMINUS = 379
   };
#endif
/* Tokens.  */
#define DST 258
#define SRC 259
#define HOST 260
#define GATEWAY 261
#define NET 262
#define NETMASK 263
#define PORT 264
#define PORTRANGE 265
#define LESS 266
#define GREATER 267
#define PROTO 268
#define PROTOCHAIN 269
#define CBYTE 270
#define ARP 271
#define RARP 272
#define IP 273
#define SCTP 274
#define TCP 275
#define UDP 276
#define ICMP 277
#define IGMP 278
#define IGRP 279
#define PIM 280
#define VRRP 281
#define CARP 282
#define ATALK 283
#define AARP 284
#define DECNET 285
#define LAT 286
#define SCA 287
#define MOPRC 288
#define MOPDL 289
#define TK_BROADCAST 290
#define TK_MULTICAST 291
#define NUM 292
#define INBOUND 293
#define OUTBOUND 294
#define IFINDEX 295
#define PF_IFNAME 296
#define PF_RSET 297
#define PF_RNR 298
#define PF_SRNR 299
#define PF_REASON 300
#define PF_ACTION 301
#define TYPE 302
#define SUBTYPE 303
#define DIR 304
#define ADDR1 305
#define ADDR2 306
#define ADDR3 307
#define ADDR4 308
#define RA 309
#define TA 310
#define LINK 311
#define GEQ 312
#define LEQ 313
#define NEQ 314
#define ID 315
#define EID 316
#define HID 317
#define HID6 318
#define AID 319
#define LSH 320
#define RSH 321
#define LEN 322
#define IPV6 323
#define ICMPV6 324
#define AH 325
#define ESP 326
#define VLAN 327
#define MPLS 328
#define PPPOED 329
#define PPPOES 330
#define GENEVE 331
#define VXLAN 332
#define ISO 333
#define ESIS 334
#define CLNP 335
#define ISIS 336
#define L1 337
#define L2 338
#define IIH 339
#define LSP 340
#define SNP 341
#define CSNP 342
#define PSNP 343
#define STP 344
#define IPX 345
#define NETBEUI 346
#define LANE 347
#define LLC 348
#define METAC 349
#define BCC 350
#define SC 351
#define ILMIC 352
#define OAMF4EC 353
#define OAMF4SC 354
#define OAM 355
#define OAMF4 356
#define CONNECTMSG 357
#define METACONNECT 358
#define VPI 359
#define VCI 360
#define RADIO 361
#define FISU 362
#define LSSU 363
#define MSU 364
#define HFISU 365
#define HLSSU 366
#define HMSU 367
#define SIO 368
#define OPC 369
#define DPC 370
#define SLS 371
#define HSIO 372
#define HOPC 373
#define HDPC 374
#define HSLS 375
#define LEX_ERROR 376
#define AND 377
#define OR 378
#define UMINUS 379




/* Copy the first part of user declarations.  */
#line 47 "grammar.y"

/*
 * Copyright (c) 1988, 1989, 1990, 1991, 1992, 1993, 1994, 1995, 1996
 *	The Regents of the University of California.  All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that: (1) source code distributions
 * retain the above copyright notice and this paragraph in its entirety, (2)
 * distributions including binary code include the above copyright notice and
 * this paragraph in its entirety in the documentation or other materials
 * provided with the distribution, and (3) all advertising materials mentioning
 * features or use of this software display the following acknowledgement:
 * ``This product includes software developed by the University of California,
 * Lawrence Berkeley Laboratory and its contributors.'' Neither the name of
 * the University nor the names of its contributors may be used to endorse
 * or promote products derived from this software without specific prior
 * written permission.
 * THIS SOFTWARE IS PROVIDED ``AS IS'' AND WITHOUT ANY EXPRESS OR IMPLIED
 * WARRANTIES, INCLUDING, WITHOUT LIMITATION, THE IMPLIED WARRANTIES OF
 * MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.
 *
 */

#include <config.h>

/*
 * grammar.h requires gencode.h and sometimes breaks in a polluted namespace
 * (see ftmacros.h), so include it early.
 */
#include "gencode.h"
#include "grammar.h"

#include <stdlib.h>

#include <stdio.h>

#include "diag-control.h"

#include "pcap-int.h"

#include "scanner.h"

#include "llc.h"
#include "ieee80211.h"
#include "pflog.h"
#include <pcap/namedb.h>

#ifdef HAVE_OS_PROTO_H
#include "os-proto.h"
#endif

/*
 * Work around some bugs in Berkeley YACC prior to the 2017-07-09
 * release.
 *
 * The 2005-05-05 release was the first one to define YYPATCH, so
 * we treat any release that either 1) doesn't define YYPATCH or
 * 2) defines it to a value < 20170709 as being buggy.
 */
#if defined(YYBYACC) && (!defined(YYPATCH) || YYPATCH < 20170709)
/*
 * Both Berkeley YACC and Bison define yydebug (under whatever name
 * it has) as a global, but Bison does so only if YYDEBUG is defined.
 * Berkeley YACC, prior to the 2017-07-09 release, defines it even if
 * YYDEBUG isn't defined; declare it here to suppress a warning.  The
 * 2017-07-09 release fixes that.
 */
#if !defined(YYDEBUG)
extern int yydebug;
#endif

/*
 * In Berkeley YACC, prior to the 2017-07-09 release, yynerrs (under
 * whatever name it has) is global, even if it's building a reentrant
 * parser.  In Bison, and in the Berkeley YACC 2017-07-09 release and
 * later, it's local in reentrant parsers.
 *
 * Declare it to squelch a warning.
 */
extern int yynerrs;
#endif

#define QSET(q, p, d, a) (q).proto = (unsigned char)(p),\
			 (q).dir = (unsigned char)(d),\
			 (q).addr = (unsigned char)(a)

struct tok {
	int v;			/* value */
	const char *s;		/* string */
};

static const struct tok ieee80211_types[] = {
	{ IEEE80211_FC0_TYPE_DATA, "data" },
	{ IEEE80211_FC0_TYPE_MGT, "mgt" },
	{ IEEE80211_FC0_TYPE_MGT, "management" },
	{ IEEE80211_FC0_TYPE_CTL, "ctl" },
	{ IEEE80211_FC0_TYPE_CTL, "control" },
	{ 0, NULL }
};
static const struct tok ieee80211_mgt_subtypes[] = {
	{ IEEE80211_FC0_SUBTYPE_ASSOC_REQ, "assocreq" },
	{ IEEE80211_FC0_SUBTYPE_ASSOC_REQ, "assoc-req" },
	{ IEEE80211_FC0_SUBTYPE_ASSOC_RESP, "assocresp" },
	{ IEEE80211_FC0_SUBTYPE_ASSOC_RESP, "assoc-resp" },
	{ IEEE80211_FC0_SUBTYPE_REASSOC_REQ, "reassocreq" },
	{ IEEE80211_FC0_SUBTYPE_REASSOC_REQ, "reassoc-req" },
	{ IEEE80211_FC0_SUBTYPE_REASSOC_RESP, "reassocresp" },
	{ IEEE80211_FC0_SUBTYPE_REASSOC_RESP, "reassoc-resp" },
	{ IEEE80211_FC0_SUBTYPE_PROBE_REQ, "probereq" },
	{ IEEE80211_FC0_SUBTYPE_PROBE_REQ, "probe-req" },
	{ IEEE80211_FC0_SUBTYPE_PROBE_RESP, "proberesp" },
	{ IEEE80211_FC0_SUBTYPE_PROBE_RESP, "probe-resp" },
	{ IEEE80211_FC0_SUBTYPE_BEACON, "beacon" },
	{ IEEE80211_FC0_SUBTYPE_ATIM, "atim" },
	{ IEEE80211_FC0_SUBTYPE_DISASSOC, "disassoc" },
	{ IEEE80211_FC0_SUBTYPE_DISASSOC, "disassociation" },
	{ IEEE80211_FC0_SUBTYPE_AUTH, "auth" },
	{ IEEE80211_FC0_SUBTYPE_AUTH, "authentication" },
	{ IEEE80211_FC0_SUBTYPE_DEAUTH, "deauth" },
	{ IEEE80211_FC0_SUBTYPE_DEAUTH, "deauthentication" },
	{ 0, NULL }
};
static const struct tok ieee80211_ctl_subtypes[] = {
	{ IEEE80211_FC0_SUBTYPE_BAR, "bar" },
	{ IEEE80211_FC0_SUBTYPE_BA, "ba" },
	{ IEEE80211_FC0_SUBTYPE_PS_POLL, "ps-poll" },
	{ IEEE80211_FC0_SUBTYPE_RTS, "rts" },
	{ IEEE80211_FC0_SUBTYPE_CTS, "cts" },
	{ IEEE80211_FC0_SUBTYPE_ACK, "ack" },
	{ IEEE80211_FC0_SUBTYPE_CF_END, "cf-end" },
	{ IEEE80211_FC0_SUBTYPE_CF_END_ACK, "cf-end-ack" },
	{ 0, NULL }
};
static const struct tok ieee80211_data_subtypes[] = {
	{ IEEE80211_FC0_SUBTYPE_DATA, "data" },
	{ IEEE80211_FC0_SUBTYPE_CF_ACK, "data-cf-ack" },
	{ IEEE80211_FC0_SUBTYPE_CF_POLL, "data-cf-poll" },
	{ IEEE80211_FC0_SUBTYPE_CF_ACPL, "data-cf-ack-poll" },
	{ IEEE80211_FC0_SUBTYPE_NODATA, "null" },
	{ IEEE80211_FC0_SUBTYPE_NODATA_CF_ACK, "cf-ack" },
	{ IEEE80211_FC0_SUBTYPE_NODATA_CF_POLL, "cf-poll"  },
	{ IEEE80211_FC0_SUBTYPE_NODATA_CF_ACPL, "cf-ack-poll" },
	{ IEEE80211_FC0_SUBTYPE_QOS|IEEE80211_FC0_SUBTYPE_DATA, "qos-data" },
	{ IEEE80211_FC0_SUBTYPE_QOS|IEEE80211_FC0_SUBTYPE_CF_ACK, "qos-data-cf-ack" },
	{ IEEE80211_FC0_SUBTYPE_QOS|IEEE80211_FC0_SUBTYPE_CF_POLL, "qos-data-cf-poll" },
	{ IEEE80211_FC0_SUBTYPE_QOS|IEEE80211_FC0_SUBTYPE_CF_ACPL, "qos-data-cf-ack-poll" },
	{ IEEE80211_FC0_SUBTYPE_QOS|IEEE80211_FC0_SUBTYPE_NODATA, "qos" },
	{ IEEE80211_FC0_SUBTYPE_QOS|IEEE80211_FC0_SUBTYPE_NODATA_CF_POLL, "qos-cf-poll" },
	{ IEEE80211_FC0_SUBTYPE_QOS|IEEE80211_FC0_SUBTYPE_NODATA_CF_ACPL, "qos-cf-ack-poll" },
	{ 0, NULL }
};
static const struct tok llc_s_subtypes[] = {
	{ LLC_RR, "rr" },
	{ LLC_RNR, "rnr" },
	{ LLC_REJ, "rej" },
	{ 0, NULL }
};
static const struct tok llc_u_subtypes[] = {
	{ LLC_UI, "ui" },
	{ LLC_UA, "ua" },
	{ LLC_DISC, "disc" },
	{ LLC_DM, "dm" },
	{ LLC_SABME, "sabme" },
	{ LLC_TEST, "test" },
	{ LLC_XID, "xid" },
	{ LLC_FRMR, "frmr" },
	{ 0, NULL }
};
struct type2tok {
	int type;
	const struct tok *tok;
};
static const struct type2tok ieee80211_type_subtypes[] = {
	{ IEEE80211_FC0_TYPE_MGT, ieee80211_mgt_subtypes },
	{ IEEE80211_FC0_TYPE_CTL, ieee80211_ctl_subtypes },
	{ IEEE80211_FC0_TYPE_DATA, ieee80211_data_subtypes },
	{ 0, NULL }
};

static int
str2tok(const char *str, const struct tok *toks)
{
	int i;

	for (i = 0; toks[i].s != NULL; i++) {
		if (pcapint_strcasecmp(toks[i].s, str) == 0) {
			/*
			 * Just in case somebody is using this to
			 * generate values of -1/0xFFFFFFFF.
			 * That won't work, as it's indistinguishable
			 * from an error.
			 */
			if (toks[i].v == -1)
				abort();
			return (toks[i].v);
		}
	}
	return (-1);
}

static const struct qual qerr = { Q_UNDEF, Q_UNDEF, Q_UNDEF, Q_UNDEF };

static void
yyerror(void *yyscanner _U_, compiler_state_t *cstate, const char *msg)
{
	bpf_set_error(cstate, "can't parse filter expression: %s", msg);
}

static const struct tok pflog_reasons[] = {
	{ PFRES_MATCH,		"match" },
	{ PFRES_BADOFF,		"bad-offset" },
	{ PFRES_FRAG,		"fragment" },
	{ PFRES_SHORT,		"short" },
	{ PFRES_NORM,		"normalize" },
	{ PFRES_MEMORY,		"memory" },
	{ PFRES_TS,		"bad-timestamp" },
	{ PFRES_CONGEST,	"congestion" },
	{ PFRES_IPOPTIONS,	"ip-option" },
	{ PFRES_PROTCKSUM,	"proto-cksum" },
	{ PFRES_BADSTATE,	"state-mismatch" },
	{ PFRES_STATEINS,	"state-insert" },
	{ PFRES_MAXSTATES,	"state-limit" },
	{ PFRES_SRCLIMIT,	"src-limit" },
	{ PFRES_SYNPROXY,	"synproxy" },
#if defined(__FreeBSD__)
	{ PFRES_MAPFAILED,	"map-failed" },
#elif defined(__NetBSD__)
	{ PFRES_STATELOCKED,	"state-locked" },
#elif defined(__OpenBSD__)
	{ PFRES_TRANSLATE,	"translate" },
	{ PFRES_NOROUTE,	"no-route" },
#elif defined(__APPLE__)
	{ PFRES_DUMMYNET,	"dummynet" },
#endif
	{ 0, NULL }
};

static int
pfreason_to_num(compiler_state_t *cstate, const char *reason)
{
	int i;

	i = str2tok(reason, pflog_reasons);
	if (i == -1)
		bpf_set_error(cstate, "unknown PF reason \"%s\"", reason);
	return (i);
}

static const struct tok pflog_actions[] = {
	{ PF_PASS,		"pass" },
	{ PF_PASS,		"accept" },	/* alias for "pass" */
	{ PF_DROP,		"drop" },
	{ PF_DROP,		"block" },	/* alias for "drop" */
	{ PF_SCRUB,		"scrub" },
	{ PF_NOSCRUB,		"noscrub" },
	{ PF_NAT,		"nat" },
	{ PF_NONAT,		"nonat" },
	{ PF_BINAT,		"binat" },
	{ PF_NOBINAT,		"nobinat" },
	{ PF_RDR,		"rdr" },
	{ PF_NORDR,		"nordr" },
	{ PF_SYNPROXY_DROP,	"synproxy-drop" },
#if defined(__FreeBSD__)
	{ PF_DEFER,		"defer" },
#elif defined(__OpenBSD__)
	{ PF_DEFER,		"defer" },
	{ PF_MATCH,		"match" },
	{ PF_DIVERT,		"divert" },
	{ PF_RT,		"rt" },
	{ PF_AFRT,		"afrt" },
#elif defined(__APPLE__)
	{ PF_DUMMYNET,		"dummynet" },
	{ PF_NODUMMYNET,	"nodummynet" },
	{ PF_NAT64,		"nat64" },
	{ PF_NONAT64,		"nonat64" },
#endif
	{ 0, NULL },
};

static int
pfaction_to_num(compiler_state_t *cstate, const char *action)
{
	int i;

	i = str2tok(action, pflog_actions);
	if (i == -1)
		bpf_set_error(cstate, "unknown PF action \"%s\"", action);
	return (i);
}

/*
 * For calls that might return an "an error occurred" value.
 */
#define CHECK_INT_VAL(val)	if (val == -1) YYABORT
#define CHECK_PTR_VAL(val)	if (val == NULL) YYABORT

DIAG_OFF_BISON_BYACC


/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif

#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 346 "grammar.y"
{
	int i;
	bpf_u_int32 h;
	char *s;
	struct stmt *stmt;
	struct arth *a;
	struct {
		struct qual q;
		int atmfieldtype;
		int mtp3fieldtype;
		struct block *b;
	} blk;
	struct block *rblk;
}
/* Line 193 of yacc.c.  */
#line 666 "grammar.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 679 "grammar.c"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int i)
#else
static int
YYID (i)
    int i;
#endif
{
  return i;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss;
  YYSTYPE yyvs;
  };

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   773

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  142
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  47
/* YYNRULES -- Number of rules.  */
#define YYNRULES  223
/* YYNRULES -- Number of states.  */
#define YYNSTATES  298

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   379

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   124,     2,     2,     2,   140,   126,     2,
     133,   132,   129,   127,     2,   128,     2,   130,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,   139,     2,
     136,   135,   134,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,   137,     2,   138,   141,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,   125,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   131
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     6,     8,     9,    11,    15,    19,    23,
      27,    29,    31,    33,    35,    39,    41,    45,    49,    51,
      55,    57,    59,    61,    64,    66,    68,    70,    74,    78,
      80,    82,    84,    87,    91,    94,    97,   100,   103,   106,
     109,   113,   115,   119,   123,   125,   127,   129,   132,   134,
     137,   139,   140,   142,   144,   148,   152,   156,   160,   162,
     164,   166,   168,   170,   172,   174,   176,   178,   180,   182,
     184,   186,   188,   190,   192,   194,   196,   198,   200,   202,
     204,   206,   208,   210,   212,   214,   216,   218,   220,   222,
     224,   226,   228,   230,   232,   234,   236,   238,   240,   242,
     244,   246,   248,   250,   252,   254,   256,   258,   260,   263,
     266,   269,   272,   277,   279,   281,   284,   287,   289,   292,
     294,   296,   299,   301,   304,   306,   309,   311,   313,   316,
     318,   321,   324,   327,   330,   333,   336,   341,   344,   347,
     350,   352,   354,   356,   358,   360,   362,   365,   368,   370,
     372,   374,   376,   378,   380,   382,   384,   386,   388,   390,
     392,   394,   399,   406,   410,   414,   418,   422,   426,   430,
     434,   438,   442,   446,   449,   453,   455,   457,   459,   461,
     463,   465,   467,   471,   473,   475,   477,   479,   481,   483,
     485,   487,   489,   491,   493,   495,   497,   499,   502,   505,
     509,   511,   513,   517,   519,   521,   523,   525,   527,   529,
     531,   533,   535,   537,   539,   541,   543,   545,   547,   550,
     553,   557,   559,   561
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     143,     0,    -1,   144,   145,    -1,   144,    -1,    -1,   154,
      -1,   145,   146,   154,    -1,   145,   146,   148,    -1,   145,
     147,   154,    -1,   145,   147,   148,    -1,   122,    -1,   123,
      -1,   149,    -1,   177,    -1,   151,   152,   132,    -1,    60,
      -1,    62,   130,    37,    -1,    62,     8,    62,    -1,    62,
      -1,    63,   130,    37,    -1,    63,    -1,    61,    -1,    64,
      -1,   150,   148,    -1,   124,    -1,   133,    -1,   149,    -1,
     153,   146,   148,    -1,   153,   147,   148,    -1,   177,    -1,
     152,    -1,   156,    -1,   150,   154,    -1,   157,   158,   159,
      -1,   157,   158,    -1,   157,   159,    -1,   157,    13,    -1,
     157,    14,    -1,   157,   160,    -1,   155,   148,    -1,   151,
     145,   132,    -1,   161,    -1,   174,   172,   174,    -1,   174,
     173,   174,    -1,   162,    -1,   178,    -1,   179,    -1,   180,
     181,    -1,   184,    -1,   185,   186,    -1,   161,    -1,    -1,
       4,    -1,     3,    -1,     4,   123,     3,    -1,     3,   123,
       4,    -1,     4,   122,     3,    -1,     3,   122,     4,    -1,
      50,    -1,    51,    -1,    52,    -1,    53,    -1,    54,    -1,
      55,    -1,     5,    -1,     7,    -1,     9,    -1,    10,    -1,
       6,    -1,    56,    -1,    18,    -1,    16,    -1,    17,    -1,
      19,    -1,    20,    -1,    21,    -1,    22,    -1,    23,    -1,
      24,    -1,    25,    -1,    26,    -1,    27,    -1,    28,    -1,
      29,    -1,    30,    -1,    31,    -1,    32,    -1,    34,    -1,
      33,    -1,    68,    -1,    69,    -1,    70,    -1,    71,    -1,
      78,    -1,    79,    -1,    81,    -1,    82,    -1,    83,    -1,
      84,    -1,    85,    -1,    86,    -1,    88,    -1,    87,    -1,
      80,    -1,    89,    -1,    90,    -1,    91,    -1,   106,    -1,
     157,    35,    -1,   157,    36,    -1,    11,    37,    -1,    12,
      37,    -1,    15,    37,   176,    37,    -1,    38,    -1,    39,
      -1,    40,    37,    -1,    72,   177,    -1,    72,    -1,    73,
     177,    -1,    73,    -1,    74,    -1,    75,   177,    -1,    75,
      -1,    76,   177,    -1,    76,    -1,    77,   177,    -1,    77,
      -1,   163,    -1,   157,   164,    -1,   168,    -1,    41,    60,
      -1,    42,    60,    -1,    43,    37,    -1,    44,    37,    -1,
      45,   170,    -1,    46,   171,    -1,    47,   165,    48,   166,
      -1,    47,   165,    -1,    48,   167,    -1,    49,   169,    -1,
      37,    -1,    60,    -1,    37,    -1,    60,    -1,    60,    -1,
      93,    -1,    93,    60,    -1,    93,    43,    -1,    37,    -1,
      60,    -1,    37,    -1,    60,    -1,    60,    -1,   134,    -1,
      57,    -1,   135,    -1,    58,    -1,   136,    -1,    59,    -1,
     177,    -1,   175,    -1,   161,   137,   174,   138,    -1,   161,
     137,   174,   139,    37,   138,    -1,   174,   127,   174,    -1,
     174,   128,   174,    -1,   174,   129,   174,    -1,   174,   130,
     174,    -1,   174,   140,   174,    -1,   174,   126,   174,    -1,
     174,   125,   174,    -1,   174,   141,   174,    -1,   174,    65,
     174,    -1,   174,    66,   174,    -1,   128,   174,    -1,   151,
     175,   132,    -1,    67,    -1,   126,    -1,   125,    -1,   136,
      -1,   134,    -1,   135,    -1,    37,    -1,   151,   177,   132,
      -1,    92,    -1,    94,    -1,    95,    -1,    98,    -1,    99,
      -1,    96,    -1,    97,    -1,   100,    -1,   101,    -1,   102,
      -1,   103,    -1,   104,    -1,   105,    -1,   182,    -1,   172,
      37,    -1,   173,    37,    -1,   151,   183,   132,    -1,    37,
      -1,   182,    -1,   183,   147,   182,    -1,   107,    -1,   108,
      -1,   109,    -1,   110,    -1,   111,    -1,   112,    -1,   113,
      -1,   114,    -1,   115,    -1,   116,    -1,   117,    -1,   118,
      -1,   119,    -1,   120,    -1,   187,    -1,   172,    37,    -1,
     173,    37,    -1,   151,   188,   132,    -1,    37,    -1,   187,
      -1,   188,   147,   187,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   420,   420,   432,   434,   436,   437,   438,   439,   440,
     442,   444,   446,   447,   449,   451,   452,   472,   492,   511,
     537,   563,   564,   565,   567,   569,   571,   572,   573,   575,
     577,   579,   580,   582,   583,   584,   585,   586,   594,   596,
     597,   598,   599,   601,   603,   604,   605,   606,   607,   608,
     611,   612,   615,   616,   617,   618,   619,   620,   621,   622,
     623,   624,   625,   626,   629,   630,   631,   632,   635,   637,
     638,   639,   640,   641,   642,   643,   644,   645,   646,   647,
     648,   649,   650,   651,   652,   653,   654,   655,   656,   657,
     658,   659,   660,   661,   662,   663,   664,   665,   666,   667,
     668,   669,   670,   671,   672,   673,   674,   675,   677,   678,
     679,   680,   681,   682,   683,   684,   685,   686,   687,   688,
     689,   690,   691,   692,   693,   694,   695,   696,   697,   698,
     701,   702,   703,   704,   705,   706,   709,   714,   717,   721,
     724,   730,   739,   745,   768,   785,   786,   810,   813,   819,
     835,   836,   839,   842,   843,   844,   846,   847,   848,   850,
     851,   853,   854,   855,   856,   857,   858,   859,   860,   861,
     862,   863,   864,   865,   866,   867,   869,   870,   871,   872,
     873,   875,   876,   878,   879,   880,   881,   882,   883,   884,
     886,   887,   888,   889,   892,   893,   895,   896,   897,   898,
     900,   907,   908,   911,   912,   913,   914,   915,   916,   919,
     920,   921,   922,   923,   924,   925,   926,   928,   929,   930,
     931,   933,   946,   947
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "DST", "SRC", "HOST", "GATEWAY", "NET",
  "NETMASK", "PORT", "PORTRANGE", "LESS", "GREATER", "PROTO", "PROTOCHAIN",
  "CBYTE", "ARP", "RARP", "IP", "SCTP", "TCP", "UDP", "ICMP", "IGMP",
  "IGRP", "PIM", "VRRP", "CARP", "ATALK", "AARP", "DECNET", "LAT", "SCA",
  "MOPRC", "MOPDL", "TK_BROADCAST", "TK_MULTICAST", "NUM", "INBOUND",
  "OUTBOUND", "IFINDEX", "PF_IFNAME", "PF_RSET", "PF_RNR", "PF_SRNR",
  "PF_REASON", "PF_ACTION", "TYPE", "SUBTYPE", "DIR", "ADDR1", "ADDR2",
  "ADDR3", "ADDR4", "RA", "TA", "LINK", "GEQ", "LEQ", "NEQ", "ID", "EID",
  "HID", "HID6", "AID", "LSH", "RSH", "LEN", "IPV6", "ICMPV6", "AH", "ESP",
  "VLAN", "MPLS", "PPPOED", "PPPOES", "GENEVE", "VXLAN", "ISO", "ESIS",
  "CLNP", "ISIS", "L1", "L2", "IIH", "LSP", "SNP", "CSNP", "PSNP", "STP",
  "IPX", "NETBEUI", "LANE", "LLC", "METAC", "BCC", "SC", "ILMIC",
  "OAMF4EC", "OAMF4SC", "OAM", "OAMF4", "CONNECTMSG", "METACONNECT", "VPI",
  "VCI", "RADIO", "FISU", "LSSU", "MSU", "HFISU", "HLSSU", "HMSU", "SIO",
  "OPC", "DPC", "SLS", "HSIO", "HOPC", "HDPC", "HSLS", "LEX_ERROR", "AND",
  "OR", "'!'", "'|'", "'&'", "'+'", "'-'", "'*'", "'/'", "UMINUS", "')'",
  "'('", "'>'", "'='", "'<'", "'['", "']'", "':'", "'%'", "'^'", "$accept",
  "prog", "null", "expr", "and", "or", "id", "nid", "not", "paren", "pid",
  "qid", "term", "head", "rterm", "pqual", "dqual", "aqual", "ndaqual",
  "pname", "other", "pfvar", "p80211", "type", "subtype", "type_subtype",
  "pllc", "dir", "reason", "action", "relop", "irelop", "arth", "narth",
  "byteop", "pnum", "atmtype", "atmmultitype", "atmfield", "atmvalue",
  "atmfieldvalue", "atmlistvalue", "mtp2type", "mtp3field", "mtp3value",
  "mtp3fieldvalue", "mtp3listvalue", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366,   367,   368,   369,   370,   371,   372,   373,   374,
     375,   376,   377,   378,    33,   124,    38,    43,    45,    42,
      47,   379,    41,    40,    62,    61,    60,    91,    93,    58,
      37,    94
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   142,   143,   143,   144,   145,   145,   145,   145,   145,
     146,   147,   148,   148,   148,   149,   149,   149,   149,   149,
     149,   149,   149,   149,   150,   151,   152,   152,   152,   153,
     153,   154,   154,   155,   155,   155,   155,   155,   155,   156,
     156,   156,   156,   156,   156,   156,   156,   156,   156,   156,
     157,   157,   158,   158,   158,   158,   158,   158,   158,   158,
     158,   158,   158,   158,   159,   159,   159,   159,   160,   161,
     161,   161,   161,   161,   161,   161,   161,   161,   161,   161,
     161,   161,   161,   161,   161,   161,   161,   161,   161,   161,
     161,   161,   161,   161,   161,   161,   161,   161,   161,   161,
     161,   161,   161,   161,   161,   161,   161,   161,   162,   162,
     162,   162,   162,   162,   162,   162,   162,   162,   162,   162,
     162,   162,   162,   162,   162,   162,   162,   162,   162,   162,
     163,   163,   163,   163,   163,   163,   164,   164,   164,   164,
     165,   165,   166,   166,   167,   168,   168,   168,   169,   169,
     170,   170,   171,   172,   172,   172,   173,   173,   173,   174,
     174,   175,   175,   175,   175,   175,   175,   175,   175,   175,
     175,   175,   175,   175,   175,   175,   176,   176,   176,   176,
     176,   177,   177,   178,   178,   178,   178,   178,   178,   178,
     179,   179,   179,   179,   180,   180,   181,   181,   181,   181,
     182,   183,   183,   184,   184,   184,   184,   184,   184,   185,
     185,   185,   185,   185,   185,   185,   185,   186,   186,   186,
     186,   187,   188,   188
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     1,     0,     1,     3,     3,     3,     3,
       1,     1,     1,     1,     3,     1,     3,     3,     1,     3,
       1,     1,     1,     2,     1,     1,     1,     3,     3,     1,
       1,     1,     2,     3,     2,     2,     2,     2,     2,     2,
       3,     1,     3,     3,     1,     1,     1,     2,     1,     2,
       1,     0,     1,     1,     3,     3,     3,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     2,     2,
       2,     2,     4,     1,     1,     2,     2,     1,     2,     1,
       1,     2,     1,     2,     1,     2,     1,     1,     2,     1,
       2,     2,     2,     2,     2,     2,     4,     2,     2,     2,
       1,     1,     1,     1,     1,     1,     2,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     4,     6,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     2,     3,     1,     1,     1,     1,     1,
       1,     1,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     2,     2,     3,
       1,     1,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     2,     2,
       3,     1,     1,     3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       4,     0,    51,     1,     0,     0,     0,    71,    72,    70,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    88,    87,   181,   113,   114,     0,
       0,     0,     0,     0,     0,     0,    69,   175,    89,    90,
      91,    92,   117,   119,   120,   122,   124,   126,    93,    94,
     103,    95,    96,    97,    98,    99,   100,   102,   101,   104,
     105,   106,   183,   145,   184,   185,   188,   189,   186,   187,
     190,   191,   192,   193,   194,   195,   107,   203,   204,   205,
     206,   207,   208,   209,   210,   211,   212,   213,   214,   215,
     216,    24,     0,    25,     2,    51,    51,     5,     0,    31,
       0,    50,    44,   127,   129,     0,   160,   159,    45,    46,
       0,    48,     0,   110,   111,     0,   115,   130,   131,   132,
     133,   150,   151,   134,   152,   135,     0,   116,   118,   121,
     123,   125,   147,   146,     0,     0,   173,    10,    11,    51,
      51,    32,     0,   160,   159,    15,    21,    18,    20,    22,
      39,    12,     0,     0,    13,    53,    52,    64,    68,    65,
      66,    67,    36,    37,   108,   109,     0,     0,     0,    58,
      59,    60,    61,    62,    63,    34,    35,    38,   128,     0,
     154,   156,   158,     0,     0,     0,     0,     0,     0,     0,
       0,   153,   155,   157,     0,     0,     0,     0,   200,     0,
       0,     0,    47,   196,   221,     0,     0,     0,    49,   217,
     177,   176,   179,   180,   178,     0,     0,     0,     7,    51,
      51,     6,   159,     9,     8,    40,   174,   182,     0,     0,
       0,    23,    26,    30,     0,    29,     0,     0,     0,     0,
     140,   141,   137,   144,   138,   148,   149,   139,    33,     0,
     171,   172,   169,   168,   163,   164,   165,   166,   167,   170,
      42,    43,   201,     0,   197,   198,   222,     0,   218,   219,
     112,   159,    17,    16,    19,    14,     0,     0,    57,    55,
      56,    54,     0,   161,     0,   199,     0,   220,     0,    27,
      28,   142,   143,   136,     0,   202,   223,   162
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,   142,   139,   140,   231,   151,   152,   134,
     233,   234,    97,    98,    99,   100,   175,   176,   177,   135,
     102,   103,   178,   242,   293,   244,   104,   247,   123,   125,
     196,   197,   105,   106,   215,   107,   108,   109,   110,   202,
     203,   263,   111,   112,   208,   209,   267
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -215
static const yytype_int16 yypact[] =
{
    -215,    32,   224,  -215,   -16,     0,    11,  -215,  -215,  -215,
    -215,  -215,  -215,  -215,  -215,  -215,  -215,  -215,  -215,  -215,
    -215,  -215,  -215,  -215,  -215,  -215,  -215,  -215,  -215,    19,
       8,    13,    49,    69,   -24,    51,  -215,  -215,  -215,  -215,
    -215,  -215,   -26,   -26,  -215,   -26,   -26,   -26,  -215,  -215,
    -215,  -215,  -215,  -215,  -215,  -215,  -215,  -215,  -215,  -215,
    -215,  -215,  -215,   -27,  -215,  -215,  -215,  -215,  -215,  -215,
    -215,  -215,  -215,  -215,  -215,  -215,  -215,  -215,  -215,  -215,
    -215,  -215,  -215,  -215,  -215,  -215,  -215,  -215,  -215,  -215,
    -215,  -215,   580,  -215,   -68,   462,   462,  -215,   148,  -215,
     718,    12,  -215,  -215,  -215,   562,  -215,  -215,  -215,  -215,
      21,  -215,    25,  -215,  -215,   -65,  -215,  -215,  -215,  -215,
    -215,  -215,  -215,  -215,  -215,  -215,   -26,  -215,  -215,  -215,
    -215,  -215,  -215,  -215,   580,   -28,   -66,  -215,  -215,   343,
     343,  -215,    41,   -17,     1,  -215,  -215,     6,     9,  -215,
    -215,  -215,   148,   148,  -215,   -33,   -31,  -215,  -215,  -215,
    -215,  -215,  -215,  -215,  -215,  -215,   -22,    80,   -18,  -215,
    -215,  -215,  -215,  -215,  -215,   162,  -215,  -215,  -215,   580,
    -215,  -215,  -215,   580,   580,   580,   580,   580,   580,   580,
     580,  -215,  -215,  -215,   580,   580,   580,   580,  -215,   104,
     108,   111,  -215,  -215,  -215,   131,   133,   137,  -215,  -215,
    -215,  -215,  -215,  -215,  -215,   139,     1,   589,  -215,   343,
     343,  -215,    30,  -215,  -215,  -215,  -215,  -215,   115,   141,
     142,  -215,  -215,    50,   -68,     1,   179,   180,   183,   184,
    -215,  -215,   150,  -215,  -215,  -215,  -215,  -215,  -215,    66,
     -64,   -64,   607,   149,  -106,  -106,   -66,   -66,   589,   589,
     589,   589,  -215,   -51,  -215,  -215,  -215,   -35,  -215,  -215,
    -215,    43,  -215,  -215,  -215,  -215,   148,   148,  -215,  -215,
    -215,  -215,   -10,  -215,   153,  -215,   104,  -215,   131,  -215,
    -215,  -215,  -215,  -215,    59,  -215,  -215,  -215
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -215,  -215,  -215,   197,   -34,  -214,   -88,  -135,     3,    -2,
    -215,  -215,   -93,  -215,  -215,  -215,  -215,    26,  -215,     7,
    -215,  -215,  -215,  -215,  -215,  -215,  -215,  -215,  -215,  -215,
     -84,   -81,   -67,   -95,  -215,   -39,  -215,  -215,  -215,  -215,
    -182,  -215,  -215,  -215,  -215,  -183,  -215
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -42
static const yytype_int16 yytable[] =
{
      96,   143,   141,   127,   128,    95,   129,   130,   131,   101,
     150,    26,   -41,   121,   228,   240,   132,   262,   232,   245,
     277,   113,   266,   189,   190,   136,   200,   291,   206,   201,
     -13,   207,     3,   133,   194,   195,   122,   114,   241,   143,
     126,   126,   246,   126,   126,   126,   221,   224,   115,   286,
     292,   218,   223,   288,   137,   138,   116,   144,   198,   154,
     210,   211,   204,   187,   188,   189,   190,   217,   117,   212,
     213,   214,   138,   118,   194,   195,   194,   195,   180,   181,
     182,   285,   180,   181,   182,   232,   119,   216,   138,   236,
     237,   238,   239,    96,    96,   144,   153,   287,    95,    95,
     222,   222,   101,   101,   295,   296,   120,    93,   199,   179,
     205,   124,   249,   154,   235,   226,   250,   251,   252,   253,
     254,   255,   256,   257,   126,   143,   141,   258,   259,   260,
     261,   183,   184,   227,   -41,   -41,   229,   220,   220,   230,
     243,   198,   219,   219,   -41,   264,   101,   101,   265,   179,
     153,   126,   -13,   -13,    93,   191,   192,   193,    93,   191,
     192,   193,   -13,   137,   138,   -29,   -29,   157,   204,   159,
     268,   160,   161,   225,   269,   227,   270,   272,   273,   274,
     222,   271,   275,   278,   279,    26,   280,   281,   289,   290,
     294,   185,   186,   187,   188,   189,   190,   297,   282,    94,
     276,   248,     0,     0,   283,   284,   194,   195,   145,   146,
     147,   148,   149,     0,   183,   184,     0,   220,    96,     0,
       0,     0,   219,   219,    -3,     0,   101,   101,     0,     0,
       0,     0,     0,     0,     0,     4,     5,   154,   154,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,     0,
       0,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,     0,    91,     0,   153,   153,   187,   188,   189,   190,
      36,    93,     0,     0,     0,     0,     0,     0,     0,   194,
     195,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,     0,     0,     0,    91,     0,
       0,     0,    92,     0,     4,     5,     0,    93,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,     0,     0,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    36,
       0,     0,     0,   145,   146,   147,   148,   149,     0,     0,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,     0,     0,     0,    91,     0,     0,
       0,    92,     0,     4,     5,     0,    93,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,     0,     0,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    36,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,     0,     0,     0,    91,     0,     0,     0,
      92,     0,     0,     0,     0,    93,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,     0,     0,    26,     0,   180,
     181,   182,     0,     0,     0,     0,     0,   183,   184,     0,
       0,     0,     0,     0,     0,     0,    36,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    37,    38,    39,
      40,    41,     0,     0,   183,   184,     0,     0,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,   183,   184,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    76,   185,   186,   187,
     188,   189,   190,     0,     0,     0,   191,   192,   193,     0,
       0,     0,   194,   195,     0,     0,     0,     0,    92,     0,
       0,     0,     0,    93,   185,   186,   187,   188,   189,   190,
       0,   155,   156,   157,   158,   159,     0,   160,   161,   194,
     195,   162,   163,   186,   187,   188,   189,   190,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   194,   195,     0,
       0,     0,     0,   164,   165,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   166,   167,   168,   169,   170,
     171,   172,   173,   174
};

static const yytype_int16 yycheck[] =
{
       2,    96,    95,    42,    43,     2,    45,    46,    47,     2,
      98,    37,     0,    37,     8,    37,    43,   199,   153,    37,
     234,    37,   205,   129,   130,    92,   110,    37,   112,   110,
       0,   112,     0,    60,   140,   141,    60,    37,    60,   134,
      42,    43,    60,    45,    46,    47,   139,   140,    37,   263,
      60,   139,   140,   267,   122,   123,    37,    96,    37,    98,
     125,   126,    37,   127,   128,   129,   130,   134,    60,   134,
     135,   136,   123,    60,   140,   141,   140,   141,    57,    58,
      59,   132,    57,    58,    59,   220,    37,   126,   123,   122,
     123,   122,   123,    95,    96,   134,    98,   132,    95,    96,
     139,   140,    95,    96,   286,   288,    37,   133,   110,   137,
     112,    60,   179,   152,   153,   132,   183,   184,   185,   186,
     187,   188,   189,   190,   126,   220,   219,   194,   195,   196,
     197,    65,    66,   132,   122,   123,   130,   139,   140,   130,
      60,    37,   139,   140,   132,    37,   139,   140,    37,   137,
     152,   153,   122,   123,   133,   134,   135,   136,   133,   134,
     135,   136,   132,   122,   123,   122,   123,     5,    37,     7,
      37,     9,    10,   132,    37,   132,    37,    62,    37,    37,
     219,   220,   132,     4,     4,    37,     3,     3,   276,   277,
      37,   125,   126,   127,   128,   129,   130,   138,    48,     2,
     234,   175,    -1,    -1,   138,   139,   140,   141,    60,    61,
      62,    63,    64,    -1,    65,    66,    -1,   219,   220,    -1,
      -1,    -1,   219,   220,     0,    -1,   219,   220,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    11,    12,   276,   277,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    -1,
      -1,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    -1,   124,    -1,   276,   277,   127,   128,   129,   130,
      56,   133,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   140,
     141,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   113,   114,   115,
     116,   117,   118,   119,   120,    -1,    -1,    -1,   124,    -1,
      -1,    -1,   128,    -1,    11,    12,    -1,   133,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    -1,    -1,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    56,
      -1,    -1,    -1,    60,    61,    62,    63,    64,    -1,    -1,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   112,   113,   114,   115,   116,
     117,   118,   119,   120,    -1,    -1,    -1,   124,    -1,    -1,
      -1,   128,    -1,    11,    12,    -1,   133,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    -1,    -1,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    56,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,   113,   114,   115,   116,   117,
     118,   119,   120,    -1,    -1,    -1,   124,    -1,    -1,    -1,
     128,    -1,    -1,    -1,    -1,   133,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    -1,    -1,    37,    -1,    57,
      58,    59,    -1,    -1,    -1,    -1,    -1,    65,    66,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    56,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    67,    68,    69,
      70,    71,    -1,    -1,    65,    66,    -1,    -1,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    65,    66,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   106,   125,   126,   127,
     128,   129,   130,    -1,    -1,    -1,   134,   135,   136,    -1,
      -1,    -1,   140,   141,    -1,    -1,    -1,    -1,   128,    -1,
      -1,    -1,    -1,   133,   125,   126,   127,   128,   129,   130,
      -1,     3,     4,     5,     6,     7,    -1,     9,    10,   140,
     141,    13,    14,   126,   127,   128,   129,   130,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   140,   141,    -1,
      -1,    -1,    -1,    35,    36,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    47,    48,    49,    50,    51,
      52,    53,    54,    55
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,   143,   144,     0,    11,    12,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    56,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   113,   114,   115,   116,   117,   118,   119,
     120,   124,   128,   133,   145,   150,   151,   154,   155,   156,
     157,   161,   162,   163,   168,   174,   175,   177,   178,   179,
     180,   184,   185,    37,    37,    37,    37,    60,    60,    37,
      37,    37,    60,   170,    60,   171,   151,   177,   177,   177,
     177,   177,    43,    60,   151,   161,   174,   122,   123,   146,
     147,   154,   145,   175,   177,    60,    61,    62,    63,    64,
     148,   149,   150,   151,   177,     3,     4,     5,     6,     7,
       9,    10,    13,    14,    35,    36,    47,    48,    49,    50,
      51,    52,    53,    54,    55,   158,   159,   160,   164,   137,
      57,    58,    59,    65,    66,   125,   126,   127,   128,   129,
     130,   134,   135,   136,   140,   141,   172,   173,    37,   151,
     172,   173,   181,   182,    37,   151,   172,   173,   186,   187,
     125,   126,   134,   135,   136,   176,   177,   174,   148,   150,
     151,   154,   177,   148,   154,   132,   132,   132,     8,   130,
     130,   148,   149,   152,   153,   177,   122,   123,   122,   123,
      37,    60,   165,    60,   167,    37,    60,   169,   159,   174,
     174,   174,   174,   174,   174,   174,   174,   174,   174,   174,
     174,   174,   182,   183,    37,    37,   187,   188,    37,    37,
      37,   177,    62,    37,    37,   132,   146,   147,     4,     4,
       3,     3,    48,   138,   139,   132,   147,   132,   147,   148,
     148,    37,    60,   166,    37,   182,   187,   138
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (yyscanner, cstate, YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (&yylval, YYLEX_PARAM)
#else
# define YYLEX yylex (&yylval, yyscanner)
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value, yyscanner, cstate); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, void *yyscanner, compiler_state_t *cstate)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep, yyscanner, cstate)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    void *yyscanner;
    compiler_state_t *cstate;
#endif
{
  if (!yyvaluep)
    return;
  YYUSE (yyscanner);
  YYUSE (cstate);
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, void *yyscanner, compiler_state_t *cstate)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep, yyscanner, cstate)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    void *yyscanner;
    compiler_state_t *cstate;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep, yyscanner, cstate);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *bottom, yytype_int16 *top)
#else
static void
yy_stack_print (bottom, top)
    yytype_int16 *bottom;
    yytype_int16 *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule, void *yyscanner, compiler_state_t *cstate)
#else
static void
yy_reduce_print (yyvsp, yyrule, yyscanner, cstate)
    YYSTYPE *yyvsp;
    int yyrule;
    void *yyscanner;
    compiler_state_t *cstate;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      fprintf (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       , yyscanner, cstate);
      fprintf (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule, yyscanner, cstate); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif



#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
	switch (*++yyp)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++yyp != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (yyres)
	      yyres[yyn] = *yyp;
	    yyn++;
	    break;

	  case '"':
	    if (yyres)
	      yyres[yyn] = '\0';
	    return yyn;
	  }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, void *yyscanner, compiler_state_t *cstate)
#else
static void
yydestruct (yymsg, yytype, yyvaluep, yyscanner, cstate)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
    void *yyscanner;
    compiler_state_t *cstate;
#endif
{
  YYUSE (yyvaluep);
  YYUSE (yyscanner);
  YYUSE (cstate);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */

#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void *yyscanner, compiler_state_t *cstate);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */






/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *yyscanner, compiler_state_t *cstate)
#else
int
yyparse (yyscanner, cstate)
    void *yyscanner;
    compiler_state_t *cstate;
#endif
#endif
{
  /* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;

  int yystate;
  int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Look-ahead token as an internal (translated) token number.  */
  int yytoken = 0;
#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  yytype_int16 yyssa[YYINITDEPTH];
  yytype_int16 *yyss = yyssa;
  yytype_int16 *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  YYSTYPE *yyvsp;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;


	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),

		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);

#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;


      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     look-ahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to look-ahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a look-ahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid look-ahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 421 "grammar.y"
    {
	/*
	 * I'm not sure we have a reason to use yynerrs, but it's
	 * declared, and incremented, whether we need it or not,
	 * which means that Clang 15 will give a "set but not
	 * used" warning.  This should suppress the warning for
	 * yynerrs without suppressing it for other variables.
	 */
	(void) yynerrs;
	CHECK_INT_VAL(finish_parse(cstate, (yyvsp[(2) - (2)].blk).b));
;}
    break;

  case 4:
#line 434 "grammar.y"
    { (yyval.blk).q = qerr; ;}
    break;

  case 6:
#line 437 "grammar.y"
    { gen_and((yyvsp[(1) - (3)].blk).b, (yyvsp[(3) - (3)].blk).b); (yyval.blk) = (yyvsp[(3) - (3)].blk); ;}
    break;

  case 7:
#line 438 "grammar.y"
    { gen_and((yyvsp[(1) - (3)].blk).b, (yyvsp[(3) - (3)].blk).b); (yyval.blk) = (yyvsp[(3) - (3)].blk); ;}
    break;

  case 8:
#line 439 "grammar.y"
    { gen_or((yyvsp[(1) - (3)].blk).b, (yyvsp[(3) - (3)].blk).b); (yyval.blk) = (yyvsp[(3) - (3)].blk); ;}
    break;

  case 9:
#line 440 "grammar.y"
    { gen_or((yyvsp[(1) - (3)].blk).b, (yyvsp[(3) - (3)].blk).b); (yyval.blk) = (yyvsp[(3) - (3)].blk); ;}
    break;

  case 10:
#line 442 "grammar.y"
    { (yyval.blk) = (yyvsp[(0) - (1)].blk); ;}
    break;

  case 11:
#line 444 "grammar.y"
    { (yyval.blk) = (yyvsp[(0) - (1)].blk); ;}
    break;

  case 13:
#line 447 "grammar.y"
    { CHECK_PTR_VAL(((yyval.blk).b = gen_ncode(cstate, NULL, (yyvsp[(1) - (1)].h),
						   (yyval.blk).q = (yyvsp[(0) - (1)].blk).q))); ;}
    break;

  case 14:
#line 449 "grammar.y"
    { (yyval.blk) = (yyvsp[(2) - (3)].blk); ;}
    break;

  case 15:
#line 451 "grammar.y"
    { CHECK_PTR_VAL((yyvsp[(1) - (1)].s)); CHECK_PTR_VAL(((yyval.blk).b = gen_scode(cstate, (yyvsp[(1) - (1)].s), (yyval.blk).q = (yyvsp[(0) - (1)].blk).q))); ;}
    break;

  case 16:
#line 452 "grammar.y"
    {
				  CHECK_PTR_VAL((yyvsp[(1) - (3)].s));
				  /* Check whether HID/NUM is being used when appropriate */
				  (yyval.blk).q = (yyvsp[(0) - (3)].blk).q;
				  if ((yyval.blk).q.addr == Q_PORT) {
					bpf_set_error(cstate, "'port' qualifier applied to IPv4 address and prefix length");
					YYABORT;
				  } else if ((yyval.blk).q.addr == Q_PORTRANGE) {
					bpf_set_error(cstate, "'portrange' qualifier applied to IPv4 address and prefix length");
					YYABORT;
				  } else if ((yyval.blk).q.addr == Q_PROTO) {
					bpf_set_error(cstate, "'proto' qualifier applied to IPv4 address and prefix length");
					YYABORT;
				  } else if ((yyval.blk).q.addr == Q_PROTOCHAIN) {
					bpf_set_error(cstate, "'protochain' qualifier applied to IPv4 address and prefix length");
					YYABORT;
				  }
				  /* The default case in gen_mcode() catches Q_HOST and Q_GATEWAY. */
				  CHECK_PTR_VAL(((yyval.blk).b = gen_mcode(cstate, (yyvsp[(1) - (3)].s), NULL, (yyvsp[(3) - (3)].h), (yyval.blk).q)));
				;}
    break;

  case 17:
#line 472 "grammar.y"
    {
				  CHECK_PTR_VAL((yyvsp[(1) - (3)].s));
				  /* Check whether HID mask HID is being used when appropriate */
				  (yyval.blk).q = (yyvsp[(0) - (3)].blk).q;
				  if ((yyval.blk).q.addr == Q_PORT) {
					bpf_set_error(cstate, "'port' qualifier applied to IPv4 address and netmask");
					YYABORT;
				  } else if ((yyval.blk).q.addr == Q_PORTRANGE) {
					bpf_set_error(cstate, "'portrange' qualifier applied to IPv4 address and netmask");
					YYABORT;
				  } else if ((yyval.blk).q.addr == Q_PROTO) {
					bpf_set_error(cstate, "'proto' qualifier applied to IPv4 address and netmask");
					YYABORT;
				  } else if ((yyval.blk).q.addr == Q_PROTOCHAIN) {
					bpf_set_error(cstate, "'protochain' qualifier applied to IPv4 address and netmask");
					YYABORT;
				  }
				  /* The default case in gen_mcode() catches Q_HOST and Q_GATEWAY. */
				  CHECK_PTR_VAL(((yyval.blk).b = gen_mcode(cstate, (yyvsp[(1) - (3)].s), (yyvsp[(3) - (3)].s), 0, (yyval.blk).q)));
				;}
    break;

  case 18:
#line 492 "grammar.y"
    {
				  CHECK_PTR_VAL((yyvsp[(1) - (1)].s));
				  /* Check whether HID is being used when appropriate */
				  (yyval.blk).q = (yyvsp[(0) - (1)].blk).q;
				  if ((yyval.blk).q.addr == Q_PORT) {
					bpf_set_error(cstate, "'port' qualifier applied to IPv4 address");
					YYABORT;
				  } else if ((yyval.blk).q.addr == Q_PORTRANGE) {
					bpf_set_error(cstate, "'portrange' qualifier applied to IPv4 address");
					YYABORT;
				  } else if ((yyval.blk).q.addr == Q_PROTO) {
					bpf_set_error(cstate, "'proto' qualifier applied to IPv4 address");
					YYABORT;
				  } else if ((yyval.blk).q.addr == Q_PROTOCHAIN) {
					bpf_set_error(cstate, "'protochain' qualifier applied to IPv4 address");
					YYABORT;
				  }
				  CHECK_PTR_VAL(((yyval.blk).b = gen_ncode(cstate, (yyvsp[(1) - (1)].s), 0, (yyval.blk).q)));
				;}
    break;

  case 19:
#line 511 "grammar.y"
    {
				  CHECK_PTR_VAL((yyvsp[(1) - (3)].s));
#ifdef INET6
				  /* Check whether HID6/NUM is being used when appropriate */
				  (yyval.blk).q = (yyvsp[(0) - (3)].blk).q;
				  if ((yyval.blk).q.addr == Q_PORT) {
					bpf_set_error(cstate, "'port' qualifier applied to IPv6 address and prefix length");
					YYABORT;
				  } else if ((yyval.blk).q.addr == Q_PORTRANGE) {
					bpf_set_error(cstate, "'portrange' qualifier applied to IPv6 address and prefix length");
					YYABORT;
				  } else if ((yyval.blk).q.addr == Q_PROTO) {
					bpf_set_error(cstate, "'proto' qualifier applied to IPv6 address and prefix length ");
					YYABORT;
				  } else if ((yyval.blk).q.addr == Q_PROTOCHAIN) {
					bpf_set_error(cstate, "'protochain' qualifier applied to IPv6 address and prefix length");
					YYABORT;
				  }
				  /* The default case in gen_mcode6() catches Q_GATEWAY. */
				  CHECK_PTR_VAL(((yyval.blk).b = gen_mcode6(cstate, (yyvsp[(1) - (3)].s), (yyvsp[(3) - (3)].h), (yyval.blk).q)));
#else
				  bpf_set_error(cstate, "IPv6 addresses not supported "
					"in this configuration");
				  YYABORT;
#endif /*INET6*/
				;}
    break;

  case 20:
#line 537 "grammar.y"
    {
				  CHECK_PTR_VAL((yyvsp[(1) - (1)].s));
#ifdef INET6
				  /* Check whether HID6 is being used when appropriate */
				  (yyval.blk).q = (yyvsp[(0) - (1)].blk).q;
				  if ((yyval.blk).q.addr == Q_PORT) {
					bpf_set_error(cstate, "'port' qualifier applied to IPv6 address");
					YYABORT;
				  } else if ((yyval.blk).q.addr == Q_PORTRANGE) {
					bpf_set_error(cstate, "'portrange' qualifier applied to IPv6 address");
					YYABORT;
				  } else if ((yyval.blk).q.addr == Q_PROTO) {
					bpf_set_error(cstate, "'proto' qualifier applied to IPv6 address");
					YYABORT;
				  } else if ((yyval.blk).q.addr == Q_PROTOCHAIN) {
					bpf_set_error(cstate, "'protochain' qualifier applied to IPv6 address");
					YYABORT;
				  }
				  /* The default case in gen_mcode6() catches Q_GATEWAY. */
				  CHECK_PTR_VAL(((yyval.blk).b = gen_mcode6(cstate, (yyvsp[(1) - (1)].s), 128, (yyval.blk).q)));
#else
				  bpf_set_error(cstate, "IPv6 addresses not supported "
					"in this configuration");
				  YYABORT;
#endif /*INET6*/
				;}
    break;

  case 21:
#line 563 "grammar.y"
    { CHECK_PTR_VAL((yyvsp[(1) - (1)].s)); CHECK_PTR_VAL(((yyval.blk).b = gen_ecode(cstate, (yyvsp[(1) - (1)].s), (yyval.blk).q = (yyvsp[(0) - (1)].blk).q))); ;}
    break;

  case 22:
#line 564 "grammar.y"
    { CHECK_PTR_VAL((yyvsp[(1) - (1)].s)); CHECK_PTR_VAL(((yyval.blk).b = gen_acode(cstate, (yyvsp[(1) - (1)].s), (yyval.blk).q = (yyvsp[(0) - (1)].blk).q))); ;}
    break;

  case 23:
#line 565 "grammar.y"
    { gen_not((yyvsp[(2) - (2)].blk).b); (yyval.blk) = (yyvsp[(2) - (2)].blk); ;}
    break;

  case 24:
#line 567 "grammar.y"
    { (yyval.blk) = (yyvsp[(0) - (1)].blk); ;}
    break;

  case 25:
#line 569 "grammar.y"
    { (yyval.blk) = (yyvsp[(0) - (1)].blk); ;}
    break;

  case 27:
#line 572 "grammar.y"
    { gen_and((yyvsp[(1) - (3)].blk).b, (yyvsp[(3) - (3)].blk).b); (yyval.blk) = (yyvsp[(3) - (3)].blk); ;}
    break;

  case 28:
#line 573 "grammar.y"
    { gen_or((yyvsp[(1) - (3)].blk).b, (yyvsp[(3) - (3)].blk).b); (yyval.blk) = (yyvsp[(3) - (3)].blk); ;}
    break;

  case 29:
#line 575 "grammar.y"
    { CHECK_PTR_VAL(((yyval.blk).b = gen_ncode(cstate, NULL, (yyvsp[(1) - (1)].h),
						   (yyval.blk).q = (yyvsp[(0) - (1)].blk).q))); ;}
    break;

  case 32:
#line 580 "grammar.y"
    { gen_not((yyvsp[(2) - (2)].blk).b); (yyval.blk) = (yyvsp[(2) - (2)].blk); ;}
    break;

  case 33:
#line 582 "grammar.y"
    { QSET((yyval.blk).q, (yyvsp[(1) - (3)].i), (yyvsp[(2) - (3)].i), (yyvsp[(3) - (3)].i)); ;}
    break;

  case 34:
#line 583 "grammar.y"
    { QSET((yyval.blk).q, (yyvsp[(1) - (2)].i), (yyvsp[(2) - (2)].i), Q_DEFAULT); ;}
    break;

  case 35:
#line 584 "grammar.y"
    { QSET((yyval.blk).q, (yyvsp[(1) - (2)].i), Q_DEFAULT, (yyvsp[(2) - (2)].i)); ;}
    break;

  case 36:
#line 585 "grammar.y"
    { QSET((yyval.blk).q, (yyvsp[(1) - (2)].i), Q_DEFAULT, Q_PROTO); ;}
    break;

  case 37:
#line 586 "grammar.y"
    {
#ifdef NO_PROTOCHAIN
				  bpf_set_error(cstate, "protochain not supported");
				  YYABORT;
#else
				  QSET((yyval.blk).q, (yyvsp[(1) - (2)].i), Q_DEFAULT, Q_PROTOCHAIN);
#endif
				;}
    break;

  case 38:
#line 594 "grammar.y"
    { QSET((yyval.blk).q, (yyvsp[(1) - (2)].i), Q_DEFAULT, (yyvsp[(2) - (2)].i)); ;}
    break;

  case 39:
#line 596 "grammar.y"
    { (yyval.blk) = (yyvsp[(2) - (2)].blk); ;}
    break;

  case 40:
#line 597 "grammar.y"
    { (yyval.blk).b = (yyvsp[(2) - (3)].blk).b; (yyval.blk).q = (yyvsp[(1) - (3)].blk).q; ;}
    break;

  case 41:
#line 598 "grammar.y"
    { CHECK_PTR_VAL(((yyval.blk).b = gen_proto_abbrev(cstate, (yyvsp[(1) - (1)].i)))); (yyval.blk).q = qerr; ;}
    break;

  case 42:
#line 599 "grammar.y"
    { CHECK_PTR_VAL(((yyval.blk).b = gen_relation(cstate, (yyvsp[(2) - (3)].i), (yyvsp[(1) - (3)].a), (yyvsp[(3) - (3)].a), 0)));
				  (yyval.blk).q = qerr; ;}
    break;

  case 43:
#line 601 "grammar.y"
    { CHECK_PTR_VAL(((yyval.blk).b = gen_relation(cstate, (yyvsp[(2) - (3)].i), (yyvsp[(1) - (3)].a), (yyvsp[(3) - (3)].a), 1)));
				  (yyval.blk).q = qerr; ;}
    break;

  case 44:
#line 603 "grammar.y"
    { (yyval.blk).b = (yyvsp[(1) - (1)].rblk); (yyval.blk).q = qerr; ;}
    break;

  case 45:
#line 604 "grammar.y"
    { CHECK_PTR_VAL(((yyval.blk).b = gen_atmtype_abbrev(cstate, (yyvsp[(1) - (1)].i)))); (yyval.blk).q = qerr; ;}
    break;

  case 46:
#line 605 "grammar.y"
    { CHECK_PTR_VAL(((yyval.blk).b = gen_atmmulti_abbrev(cstate, (yyvsp[(1) - (1)].i)))); (yyval.blk).q = qerr; ;}
    break;

  case 47:
#line 606 "grammar.y"
    { (yyval.blk).b = (yyvsp[(2) - (2)].blk).b; (yyval.blk).q = qerr; ;}
    break;

  case 48:
#line 607 "grammar.y"
    { CHECK_PTR_VAL(((yyval.blk).b = gen_mtp2type_abbrev(cstate, (yyvsp[(1) - (1)].i)))); (yyval.blk).q = qerr; ;}
    break;

  case 49:
#line 608 "grammar.y"
    { (yyval.blk).b = (yyvsp[(2) - (2)].blk).b; (yyval.blk).q = qerr; ;}
    break;

  case 51:
#line 612 "grammar.y"
    { (yyval.i) = Q_DEFAULT; ;}
    break;

  case 52:
#line 615 "grammar.y"
    { (yyval.i) = Q_SRC; ;}
    break;

  case 53:
#line 616 "grammar.y"
    { (yyval.i) = Q_DST; ;}
    break;

  case 54:
#line 617 "grammar.y"
    { (yyval.i) = Q_OR; ;}
    break;

  case 55:
#line 618 "grammar.y"
    { (yyval.i) = Q_OR; ;}
    break;

  case 56:
#line 619 "grammar.y"
    { (yyval.i) = Q_AND; ;}
    break;

  case 57:
#line 620 "grammar.y"
    { (yyval.i) = Q_AND; ;}
    break;

  case 58:
#line 621 "grammar.y"
    { (yyval.i) = Q_ADDR1; ;}
    break;

  case 59:
#line 622 "grammar.y"
    { (yyval.i) = Q_ADDR2; ;}
    break;

  case 60:
#line 623 "grammar.y"
    { (yyval.i) = Q_ADDR3; ;}
    break;

  case 61:
#line 624 "grammar.y"
    { (yyval.i) = Q_ADDR4; ;}
    break;

  case 62:
#line 625 "grammar.y"
    { (yyval.i) = Q_RA; ;}
    break;

  case 63:
#line 626 "grammar.y"
    { (yyval.i) = Q_TA; ;}
    break;

  case 64:
#line 629 "grammar.y"
    { (yyval.i) = Q_HOST; ;}
    break;

  case 65:
#line 630 "grammar.y"
    { (yyval.i) = Q_NET; ;}
    break;

  case 66:
#line 631 "grammar.y"
    { (yyval.i) = Q_PORT; ;}
    break;

  case 67:
#line 632 "grammar.y"
    { (yyval.i) = Q_PORTRANGE; ;}
    break;

  case 68:
#line 635 "grammar.y"
    { (yyval.i) = Q_GATEWAY; ;}
    break;

  case 69:
#line 637 "grammar.y"
    { (yyval.i) = Q_LINK; ;}
    break;

  case 70:
#line 638 "grammar.y"
    { (yyval.i) = Q_IP; ;}
    break;

  case 71:
#line 639 "grammar.y"
    { (yyval.i) = Q_ARP; ;}
    break;

  case 72:
#line 640 "grammar.y"
    { (yyval.i) = Q_RARP; ;}
    break;

  case 73:
#line 641 "grammar.y"
    { (yyval.i) = Q_SCTP; ;}
    break;

  case 74:
#line 642 "grammar.y"
    { (yyval.i) = Q_TCP; ;}
    break;

  case 75:
#line 643 "grammar.y"
    { (yyval.i) = Q_UDP; ;}
    break;

  case 76:
#line 644 "grammar.y"
    { (yyval.i) = Q_ICMP; ;}
    break;

  case 77:
#line 645 "grammar.y"
    { (yyval.i) = Q_IGMP; ;}
    break;

  case 78:
#line 646 "grammar.y"
    { (yyval.i) = Q_IGRP; ;}
    break;

  case 79:
#line 647 "grammar.y"
    { (yyval.i) = Q_PIM; ;}
    break;

  case 80:
#line 648 "grammar.y"
    { (yyval.i) = Q_VRRP; ;}
    break;

  case 81:
#line 649 "grammar.y"
    { (yyval.i) = Q_CARP; ;}
    break;

  case 82:
#line 650 "grammar.y"
    { (yyval.i) = Q_ATALK; ;}
    break;

  case 83:
#line 651 "grammar.y"
    { (yyval.i) = Q_AARP; ;}
    break;

  case 84:
#line 652 "grammar.y"
    { (yyval.i) = Q_DECNET; ;}
    break;

  case 85:
#line 653 "grammar.y"
    { (yyval.i) = Q_LAT; ;}
    break;

  case 86:
#line 654 "grammar.y"
    { (yyval.i) = Q_SCA; ;}
    break;

  case 87:
#line 655 "grammar.y"
    { (yyval.i) = Q_MOPDL; ;}
    break;

  case 88:
#line 656 "grammar.y"
    { (yyval.i) = Q_MOPRC; ;}
    break;

  case 89:
#line 657 "grammar.y"
    { (yyval.i) = Q_IPV6; ;}
    break;

  case 90:
#line 658 "grammar.y"
    { (yyval.i) = Q_ICMPV6; ;}
    break;

  case 91:
#line 659 "grammar.y"
    { (yyval.i) = Q_AH; ;}
    break;

  case 92:
#line 660 "grammar.y"
    { (yyval.i) = Q_ESP; ;}
    break;

  case 93:
#line 661 "grammar.y"
    { (yyval.i) = Q_ISO; ;}
    break;

  case 94:
#line 662 "grammar.y"
    { (yyval.i) = Q_ESIS; ;}
    break;

  case 95:
#line 663 "grammar.y"
    { (yyval.i) = Q_ISIS; ;}
    break;

  case 96:
#line 664 "grammar.y"
    { (yyval.i) = Q_ISIS_L1; ;}
    break;

  case 97:
#line 665 "grammar.y"
    { (yyval.i) = Q_ISIS_L2; ;}
    break;

  case 98:
#line 666 "grammar.y"
    { (yyval.i) = Q_ISIS_IIH; ;}
    break;

  case 99:
#line 667 "grammar.y"
    { (yyval.i) = Q_ISIS_LSP; ;}
    break;

  case 100:
#line 668 "grammar.y"
    { (yyval.i) = Q_ISIS_SNP; ;}
    break;

  case 101:
#line 669 "grammar.y"
    { (yyval.i) = Q_ISIS_PSNP; ;}
    break;

  case 102:
#line 670 "grammar.y"
    { (yyval.i) = Q_ISIS_CSNP; ;}
    break;

  case 103:
#line 671 "grammar.y"
    { (yyval.i) = Q_CLNP; ;}
    break;

  case 104:
#line 672 "grammar.y"
    { (yyval.i) = Q_STP; ;}
    break;

  case 105:
#line 673 "grammar.y"
    { (yyval.i) = Q_IPX; ;}
    break;

  case 106:
#line 674 "grammar.y"
    { (yyval.i) = Q_NETBEUI; ;}
    break;

  case 107:
#line 675 "grammar.y"
    { (yyval.i) = Q_RADIO; ;}
    break;

  case 108:
#line 677 "grammar.y"
    { CHECK_PTR_VAL(((yyval.rblk) = gen_broadcast(cstate, (yyvsp[(1) - (2)].i)))); ;}
    break;

  case 109:
#line 678 "grammar.y"
    { CHECK_PTR_VAL(((yyval.rblk) = gen_multicast(cstate, (yyvsp[(1) - (2)].i)))); ;}
    break;

  case 110:
#line 679 "grammar.y"
    { CHECK_PTR_VAL(((yyval.rblk) = gen_less(cstate, (yyvsp[(2) - (2)].h)))); ;}
    break;

  case 111:
#line 680 "grammar.y"
    { CHECK_PTR_VAL(((yyval.rblk) = gen_greater(cstate, (yyvsp[(2) - (2)].h)))); ;}
    break;

  case 112:
#line 681 "grammar.y"
    { CHECK_PTR_VAL(((yyval.rblk) = gen_byteop(cstate, (yyvsp[(3) - (4)].i), (yyvsp[(2) - (4)].h), (yyvsp[(4) - (4)].h)))); ;}
    break;

  case 113:
#line 682 "grammar.y"
    { CHECK_PTR_VAL(((yyval.rblk) = gen_inbound_outbound(cstate, 0))); ;}
    break;

  case 114:
#line 683 "grammar.y"
    { CHECK_PTR_VAL(((yyval.rblk) = gen_inbound_outbound(cstate, 1))); ;}
    break;

  case 115:
#line 684 "grammar.y"
    { CHECK_PTR_VAL(((yyval.rblk) = gen_ifindex(cstate, (yyvsp[(2) - (2)].h)))); ;}
    break;

  case 116:
#line 685 "grammar.y"
    { CHECK_PTR_VAL(((yyval.rblk) = gen_vlan(cstate, (yyvsp[(2) - (2)].h), 1))); ;}
    break;

  case 117:
#line 686 "grammar.y"
    { CHECK_PTR_VAL(((yyval.rblk) = gen_vlan(cstate, 0, 0))); ;}
    break;

  case 118:
#line 687 "grammar.y"
    { CHECK_PTR_VAL(((yyval.rblk) = gen_mpls(cstate, (yyvsp[(2) - (2)].h), 1))); ;}
    break;

  case 119:
#line 688 "grammar.y"
    { CHECK_PTR_VAL(((yyval.rblk) = gen_mpls(cstate, 0, 0))); ;}
    break;

  case 120:
#line 689 "grammar.y"
    { CHECK_PTR_VAL(((yyval.rblk) = gen_pppoed(cstate))); ;}
    break;

  case 121:
#line 690 "grammar.y"
    { CHECK_PTR_VAL(((yyval.rblk) = gen_pppoes(cstate, (yyvsp[(2) - (2)].h), 1))); ;}
    break;

  case 122:
#line 691 "grammar.y"
    { CHECK_PTR_VAL(((yyval.rblk) = gen_pppoes(cstate, 0, 0))); ;}
    break;

  case 123:
#line 692 "grammar.y"
    { CHECK_PTR_VAL(((yyval.rblk) = gen_geneve(cstate, (yyvsp[(2) - (2)].h), 1))); ;}
    break;

  case 124:
#line 693 "grammar.y"
    { CHECK_PTR_VAL(((yyval.rblk) = gen_geneve(cstate, 0, 0))); ;}
    break;

  case 125:
#line 694 "grammar.y"
    { CHECK_PTR_VAL(((yyval.rblk) = gen_vxlan(cstate, (yyvsp[(2) - (2)].h), 1))); ;}
    break;

  case 126:
#line 695 "grammar.y"
    { CHECK_PTR_VAL(((yyval.rblk) = gen_vxlan(cstate, 0, 0))); ;}
    break;

  case 127:
#line 696 "grammar.y"
    { (yyval.rblk) = (yyvsp[(1) - (1)].rblk); ;}
    break;

  case 128:
#line 697 "grammar.y"
    { (yyval.rblk) = (yyvsp[(2) - (2)].rblk); ;}
    break;

  case 129:
#line 698 "grammar.y"
    { (yyval.rblk) = (yyvsp[(1) - (1)].rblk); ;}
    break;

  case 130:
#line 701 "grammar.y"
    { CHECK_PTR_VAL((yyvsp[(2) - (2)].s)); CHECK_PTR_VAL(((yyval.rblk) = gen_pf_ifname(cstate, (yyvsp[(2) - (2)].s)))); ;}
    break;

  case 131:
#line 702 "grammar.y"
    { CHECK_PTR_VAL((yyvsp[(2) - (2)].s)); CHECK_PTR_VAL(((yyval.rblk) = gen_pf_ruleset(cstate, (yyvsp[(2) - (2)].s)))); ;}
    break;

  case 132:
#line 703 "grammar.y"
    { CHECK_PTR_VAL(((yyval.rblk) = gen_pf_rnr(cstate, (yyvsp[(2) - (2)].h)))); ;}
    break;

  case 133:
#line 704 "grammar.y"
    { CHECK_PTR_VAL(((yyval.rblk) = gen_pf_srnr(cstate, (yyvsp[(2) - (2)].h)))); ;}
    break;

  case 134:
#line 705 "grammar.y"
    { CHECK_PTR_VAL(((yyval.rblk) = gen_pf_reason(cstate, (yyvsp[(2) - (2)].i)))); ;}
    break;

  case 135:
#line 706 "grammar.y"
    { CHECK_PTR_VAL(((yyval.rblk) = gen_pf_action(cstate, (yyvsp[(2) - (2)].i)))); ;}
    break;

  case 136:
#line 710 "grammar.y"
    { CHECK_PTR_VAL(((yyval.rblk) = gen_p80211_type(cstate, (yyvsp[(2) - (4)].i) | (yyvsp[(4) - (4)].i),
					IEEE80211_FC0_TYPE_MASK |
					IEEE80211_FC0_SUBTYPE_MASK)));
				;}
    break;

  case 137:
#line 714 "grammar.y"
    { CHECK_PTR_VAL(((yyval.rblk) = gen_p80211_type(cstate, (yyvsp[(2) - (2)].i),
					IEEE80211_FC0_TYPE_MASK)));
				;}
    break;

  case 138:
#line 717 "grammar.y"
    { CHECK_PTR_VAL(((yyval.rblk) = gen_p80211_type(cstate, (yyvsp[(2) - (2)].i),
					IEEE80211_FC0_TYPE_MASK |
					IEEE80211_FC0_SUBTYPE_MASK)));
				;}
    break;

  case 139:
#line 721 "grammar.y"
    { CHECK_PTR_VAL(((yyval.rblk) = gen_p80211_fcdir(cstate, (yyvsp[(2) - (2)].i)))); ;}
    break;

  case 140:
#line 724 "grammar.y"
    { if (((yyvsp[(1) - (1)].h) & (~IEEE80211_FC0_TYPE_MASK)) != 0) {
					bpf_set_error(cstate, "invalid 802.11 type value 0x%02x", (yyvsp[(1) - (1)].h));
					YYABORT;
				  }
				  (yyval.i) = (int)(yyvsp[(1) - (1)].h);
				;}
    break;

  case 141:
#line 730 "grammar.y"
    { CHECK_PTR_VAL((yyvsp[(1) - (1)].s));
				  (yyval.i) = str2tok((yyvsp[(1) - (1)].s), ieee80211_types);
				  if ((yyval.i) == -1) {
					bpf_set_error(cstate, "unknown 802.11 type name \"%s\"", (yyvsp[(1) - (1)].s));
					YYABORT;
				  }
				;}
    break;

  case 142:
#line 739 "grammar.y"
    { if (((yyvsp[(1) - (1)].h) & (~IEEE80211_FC0_SUBTYPE_MASK)) != 0) {
					bpf_set_error(cstate, "invalid 802.11 subtype value 0x%02x", (yyvsp[(1) - (1)].h));
					YYABORT;
				  }
				  (yyval.i) = (int)(yyvsp[(1) - (1)].h);
				;}
    break;

  case 143:
#line 745 "grammar.y"
    { const struct tok *types = NULL;
				  int i;
				  CHECK_PTR_VAL((yyvsp[(1) - (1)].s));
				  for (i = 0;; i++) {
					if (ieee80211_type_subtypes[i].tok == NULL) {
						/* Ran out of types */
						bpf_set_error(cstate, "unknown 802.11 type");
						YYABORT;
					}
					if ((yyvsp[(-1) - (1)].i) == ieee80211_type_subtypes[i].type) {
						types = ieee80211_type_subtypes[i].tok;
						break;
					}
				  }

				  (yyval.i) = str2tok((yyvsp[(1) - (1)].s), types);
				  if ((yyval.i) == -1) {
					bpf_set_error(cstate, "unknown 802.11 subtype name \"%s\"", (yyvsp[(1) - (1)].s));
					YYABORT;
				  }
				;}
    break;

  case 144:
#line 768 "grammar.y"
    { int i;
				  CHECK_PTR_VAL((yyvsp[(1) - (1)].s));
				  for (i = 0;; i++) {
					if (ieee80211_type_subtypes[i].tok == NULL) {
						/* Ran out of types */
						bpf_set_error(cstate, "unknown 802.11 type name");
						YYABORT;
					}
					(yyval.i) = str2tok((yyvsp[(1) - (1)].s), ieee80211_type_subtypes[i].tok);
					if ((yyval.i) != -1) {
						(yyval.i) |= ieee80211_type_subtypes[i].type;
						break;
					}
				  }
				;}
    break;

  case 145:
#line 785 "grammar.y"
    { CHECK_PTR_VAL(((yyval.rblk) = gen_llc(cstate))); ;}
    break;

  case 146:
#line 786 "grammar.y"
    { CHECK_PTR_VAL((yyvsp[(2) - (2)].s));
				  if (pcapint_strcasecmp((yyvsp[(2) - (2)].s), "i") == 0) {
					CHECK_PTR_VAL(((yyval.rblk) = gen_llc_i(cstate)));
				  } else if (pcapint_strcasecmp((yyvsp[(2) - (2)].s), "s") == 0) {
					CHECK_PTR_VAL(((yyval.rblk) = gen_llc_s(cstate)));
				  } else if (pcapint_strcasecmp((yyvsp[(2) - (2)].s), "u") == 0) {
					CHECK_PTR_VAL(((yyval.rblk) = gen_llc_u(cstate)));
				  } else {
					int subtype;

					subtype = str2tok((yyvsp[(2) - (2)].s), llc_s_subtypes);
					if (subtype != -1) {
						CHECK_PTR_VAL(((yyval.rblk) = gen_llc_s_subtype(cstate, subtype)));
					} else {
						subtype = str2tok((yyvsp[(2) - (2)].s), llc_u_subtypes);
						if (subtype == -1) {
							bpf_set_error(cstate, "unknown LLC type name \"%s\"", (yyvsp[(2) - (2)].s));
							YYABORT;
						}
						CHECK_PTR_VAL(((yyval.rblk) = gen_llc_u_subtype(cstate, subtype)));
					}
				  }
				;}
    break;

  case 147:
#line 810 "grammar.y"
    { CHECK_PTR_VAL(((yyval.rblk) = gen_llc_s_subtype(cstate, LLC_RNR))); ;}
    break;

  case 148:
#line 813 "grammar.y"
    { if (((yyvsp[(1) - (1)].h) & (~IEEE80211_FC1_DIR_MASK)) != 0) {
					bpf_set_error(cstate, "invalid 802.11 direction value 0x%x", (yyvsp[(1) - (1)].h));
					YYABORT;
				  }
				  (yyval.i) = (int)(yyvsp[(1) - (1)].h);
				;}
    break;

  case 149:
#line 819 "grammar.y"
    { CHECK_PTR_VAL((yyvsp[(1) - (1)].s));
				  if (pcapint_strcasecmp((yyvsp[(1) - (1)].s), "nods") == 0)
					(yyval.i) = IEEE80211_FC1_DIR_NODS;
				  else if (pcapint_strcasecmp((yyvsp[(1) - (1)].s), "tods") == 0)
					(yyval.i) = IEEE80211_FC1_DIR_TODS;
				  else if (pcapint_strcasecmp((yyvsp[(1) - (1)].s), "fromds") == 0)
					(yyval.i) = IEEE80211_FC1_DIR_FROMDS;
				  else if (pcapint_strcasecmp((yyvsp[(1) - (1)].s), "dstods") == 0)
					(yyval.i) = IEEE80211_FC1_DIR_DSTODS;
				  else {
					bpf_set_error(cstate, "unknown 802.11 direction");
					YYABORT;
				  }
				;}
    break;

  case 150:
#line 835 "grammar.y"
    { (yyval.i) = (yyvsp[(1) - (1)].h); ;}
    break;

  case 151:
#line 836 "grammar.y"
    { CHECK_PTR_VAL((yyvsp[(1) - (1)].s)); CHECK_INT_VAL(((yyval.i) = pfreason_to_num(cstate, (yyvsp[(1) - (1)].s)))); ;}
    break;

  case 152:
#line 839 "grammar.y"
    { CHECK_PTR_VAL((yyvsp[(1) - (1)].s)); CHECK_INT_VAL(((yyval.i) = pfaction_to_num(cstate, (yyvsp[(1) - (1)].s)))); ;}
    break;

  case 153:
#line 842 "grammar.y"
    { (yyval.i) = BPF_JGT; ;}
    break;

  case 154:
#line 843 "grammar.y"
    { (yyval.i) = BPF_JGE; ;}
    break;

  case 155:
#line 844 "grammar.y"
    { (yyval.i) = BPF_JEQ; ;}
    break;

  case 156:
#line 846 "grammar.y"
    { (yyval.i) = BPF_JGT; ;}
    break;

  case 157:
#line 847 "grammar.y"
    { (yyval.i) = BPF_JGE; ;}
    break;

  case 158:
#line 848 "grammar.y"
    { (yyval.i) = BPF_JEQ; ;}
    break;

  case 159:
#line 850 "grammar.y"
    { CHECK_PTR_VAL(((yyval.a) = gen_loadi(cstate, (yyvsp[(1) - (1)].h)))); ;}
    break;

  case 161:
#line 853 "grammar.y"
    { CHECK_PTR_VAL(((yyval.a) = gen_load(cstate, (yyvsp[(1) - (4)].i), (yyvsp[(3) - (4)].a), 1))); ;}
    break;

  case 162:
#line 854 "grammar.y"
    { CHECK_PTR_VAL(((yyval.a) = gen_load(cstate, (yyvsp[(1) - (6)].i), (yyvsp[(3) - (6)].a), (yyvsp[(5) - (6)].h)))); ;}
    break;

  case 163:
#line 855 "grammar.y"
    { CHECK_PTR_VAL(((yyval.a) = gen_arth(cstate, BPF_ADD, (yyvsp[(1) - (3)].a), (yyvsp[(3) - (3)].a)))); ;}
    break;

  case 164:
#line 856 "grammar.y"
    { CHECK_PTR_VAL(((yyval.a) = gen_arth(cstate, BPF_SUB, (yyvsp[(1) - (3)].a), (yyvsp[(3) - (3)].a)))); ;}
    break;

  case 165:
#line 857 "grammar.y"
    { CHECK_PTR_VAL(((yyval.a) = gen_arth(cstate, BPF_MUL, (yyvsp[(1) - (3)].a), (yyvsp[(3) - (3)].a)))); ;}
    break;

  case 166:
#line 858 "grammar.y"
    { CHECK_PTR_VAL(((yyval.a) = gen_arth(cstate, BPF_DIV, (yyvsp[(1) - (3)].a), (yyvsp[(3) - (3)].a)))); ;}
    break;

  case 167:
#line 859 "grammar.y"
    { CHECK_PTR_VAL(((yyval.a) = gen_arth(cstate, BPF_MOD, (yyvsp[(1) - (3)].a), (yyvsp[(3) - (3)].a)))); ;}
    break;

  case 168:
#line 860 "grammar.y"
    { CHECK_PTR_VAL(((yyval.a) = gen_arth(cstate, BPF_AND, (yyvsp[(1) - (3)].a), (yyvsp[(3) - (3)].a)))); ;}
    break;

  case 169:
#line 861 "grammar.y"
    { CHECK_PTR_VAL(((yyval.a) = gen_arth(cstate, BPF_OR, (yyvsp[(1) - (3)].a), (yyvsp[(3) - (3)].a)))); ;}
    break;

  case 170:
#line 862 "grammar.y"
    { CHECK_PTR_VAL(((yyval.a) = gen_arth(cstate, BPF_XOR, (yyvsp[(1) - (3)].a), (yyvsp[(3) - (3)].a)))); ;}
    break;

  case 171:
#line 863 "grammar.y"
    { CHECK_PTR_VAL(((yyval.a) = gen_arth(cstate, BPF_LSH, (yyvsp[(1) - (3)].a), (yyvsp[(3) - (3)].a)))); ;}
    break;

  case 172:
#line 864 "grammar.y"
    { CHECK_PTR_VAL(((yyval.a) = gen_arth(cstate, BPF_RSH, (yyvsp[(1) - (3)].a), (yyvsp[(3) - (3)].a)))); ;}
    break;

  case 173:
#line 865 "grammar.y"
    { CHECK_PTR_VAL(((yyval.a) = gen_neg(cstate, (yyvsp[(2) - (2)].a)))); ;}
    break;

  case 174:
#line 866 "grammar.y"
    { (yyval.a) = (yyvsp[(2) - (3)].a); ;}
    break;

  case 175:
#line 867 "grammar.y"
    { CHECK_PTR_VAL(((yyval.a) = gen_loadlen(cstate))); ;}
    break;

  case 176:
#line 869 "grammar.y"
    { (yyval.i) = '&'; ;}
    break;

  case 177:
#line 870 "grammar.y"
    { (yyval.i) = '|'; ;}
    break;

  case 178:
#line 871 "grammar.y"
    { (yyval.i) = '<'; ;}
    break;

  case 179:
#line 872 "grammar.y"
    { (yyval.i) = '>'; ;}
    break;

  case 180:
#line 873 "grammar.y"
    { (yyval.i) = '='; ;}
    break;

  case 182:
#line 876 "grammar.y"
    { (yyval.h) = (yyvsp[(2) - (3)].h); ;}
    break;

  case 183:
#line 878 "grammar.y"
    { (yyval.i) = A_LANE; ;}
    break;

  case 184:
#line 879 "grammar.y"
    { (yyval.i) = A_METAC;	;}
    break;

  case 185:
#line 880 "grammar.y"
    { (yyval.i) = A_BCC; ;}
    break;

  case 186:
#line 881 "grammar.y"
    { (yyval.i) = A_OAMF4EC; ;}
    break;

  case 187:
#line 882 "grammar.y"
    { (yyval.i) = A_OAMF4SC; ;}
    break;

  case 188:
#line 883 "grammar.y"
    { (yyval.i) = A_SC; ;}
    break;

  case 189:
#line 884 "grammar.y"
    { (yyval.i) = A_ILMIC; ;}
    break;

  case 190:
#line 886 "grammar.y"
    { (yyval.i) = A_OAM; ;}
    break;

  case 191:
#line 887 "grammar.y"
    { (yyval.i) = A_OAMF4; ;}
    break;

  case 192:
#line 888 "grammar.y"
    { (yyval.i) = A_CONNECTMSG; ;}
    break;

  case 193:
#line 889 "grammar.y"
    { (yyval.i) = A_METACONNECT; ;}
    break;

  case 194:
#line 892 "grammar.y"
    { (yyval.blk).atmfieldtype = A_VPI; ;}
    break;

  case 195:
#line 893 "grammar.y"
    { (yyval.blk).atmfieldtype = A_VCI; ;}
    break;

  case 197:
#line 896 "grammar.y"
    { CHECK_PTR_VAL(((yyval.blk).b = gen_atmfield_code(cstate, (yyvsp[(0) - (2)].blk).atmfieldtype, (yyvsp[(2) - (2)].h), (yyvsp[(1) - (2)].i), 0))); ;}
    break;

  case 198:
#line 897 "grammar.y"
    { CHECK_PTR_VAL(((yyval.blk).b = gen_atmfield_code(cstate, (yyvsp[(0) - (2)].blk).atmfieldtype, (yyvsp[(2) - (2)].h), (yyvsp[(1) - (2)].i), 1))); ;}
    break;

  case 199:
#line 898 "grammar.y"
    { (yyval.blk).b = (yyvsp[(2) - (3)].blk).b; (yyval.blk).q = qerr; ;}
    break;

  case 200:
#line 900 "grammar.y"
    {
	(yyval.blk).atmfieldtype = (yyvsp[(0) - (1)].blk).atmfieldtype;
	if ((yyval.blk).atmfieldtype == A_VPI ||
	    (yyval.blk).atmfieldtype == A_VCI)
		CHECK_PTR_VAL(((yyval.blk).b = gen_atmfield_code(cstate, (yyval.blk).atmfieldtype, (yyvsp[(1) - (1)].h), BPF_JEQ, 0)));
	;}
    break;

  case 202:
#line 908 "grammar.y"
    { gen_or((yyvsp[(1) - (3)].blk).b, (yyvsp[(3) - (3)].blk).b); (yyval.blk) = (yyvsp[(3) - (3)].blk); ;}
    break;

  case 203:
#line 911 "grammar.y"
    { (yyval.i) = M_FISU; ;}
    break;

  case 204:
#line 912 "grammar.y"
    { (yyval.i) = M_LSSU; ;}
    break;

  case 205:
#line 913 "grammar.y"
    { (yyval.i) = M_MSU; ;}
    break;

  case 206:
#line 914 "grammar.y"
    { (yyval.i) = MH_FISU; ;}
    break;

  case 207:
#line 915 "grammar.y"
    { (yyval.i) = MH_LSSU; ;}
    break;

  case 208:
#line 916 "grammar.y"
    { (yyval.i) = MH_MSU; ;}
    break;

  case 209:
#line 919 "grammar.y"
    { (yyval.blk).mtp3fieldtype = M_SIO; ;}
    break;

  case 210:
#line 920 "grammar.y"
    { (yyval.blk).mtp3fieldtype = M_OPC; ;}
    break;

  case 211:
#line 921 "grammar.y"
    { (yyval.blk).mtp3fieldtype = M_DPC; ;}
    break;

  case 212:
#line 922 "grammar.y"
    { (yyval.blk).mtp3fieldtype = M_SLS; ;}
    break;

  case 213:
#line 923 "grammar.y"
    { (yyval.blk).mtp3fieldtype = MH_SIO; ;}
    break;

  case 214:
#line 924 "grammar.y"
    { (yyval.blk).mtp3fieldtype = MH_OPC; ;}
    break;

  case 215:
#line 925 "grammar.y"
    { (yyval.blk).mtp3fieldtype = MH_DPC; ;}
    break;

  case 216:
#line 926 "grammar.y"
    { (yyval.blk).mtp3fieldtype = MH_SLS; ;}
    break;

  case 218:
#line 929 "grammar.y"
    { CHECK_PTR_VAL(((yyval.blk).b = gen_mtp3field_code(cstate, (yyvsp[(0) - (2)].blk).mtp3fieldtype, (yyvsp[(2) - (2)].h), (yyvsp[(1) - (2)].i), 0))); ;}
    break;

  case 219:
#line 930 "grammar.y"
    { CHECK_PTR_VAL(((yyval.blk).b = gen_mtp3field_code(cstate, (yyvsp[(0) - (2)].blk).mtp3fieldtype, (yyvsp[(2) - (2)].h), (yyvsp[(1) - (2)].i), 1))); ;}
    break;

  case 220:
#line 931 "grammar.y"
    { (yyval.blk).b = (yyvsp[(2) - (3)].blk).b; (yyval.blk).q = qerr; ;}
    break;

  case 221:
#line 933 "grammar.y"
    {
	(yyval.blk).mtp3fieldtype = (yyvsp[(0) - (1)].blk).mtp3fieldtype;
	if ((yyval.blk).mtp3fieldtype == M_SIO ||
	    (yyval.blk).mtp3fieldtype == M_OPC ||
	    (yyval.blk).mtp3fieldtype == M_DPC ||
	    (yyval.blk).mtp3fieldtype == M_SLS ||
	    (yyval.blk).mtp3fieldtype == MH_SIO ||
	    (yyval.blk).mtp3fieldtype == MH_OPC ||
	    (yyval.blk).mtp3fieldtype == MH_DPC ||
	    (yyval.blk).mtp3fieldtype == MH_SLS)
		CHECK_PTR_VAL(((yyval.blk).b = gen_mtp3field_code(cstate, (yyval.blk).mtp3fieldtype, (yyvsp[(1) - (1)].h), BPF_JEQ, 0)));
	;}
    break;

  case 223:
#line 947 "grammar.y"
    { gen_or((yyvsp[(1) - (3)].blk).b, (yyvsp[(3) - (3)].blk).b); (yyval.blk) = (yyvsp[(3) - (3)].blk); ;}
    break;


/* Line 1267 of yacc.c.  */
#line 3598 "grammar.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;


  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (yyscanner, cstate, YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yyscanner, cstate, yymsg);
	  }
	else
	  {
	    yyerror (yyscanner, cstate, YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse look-ahead token after an
	 error, discard it.  */

      if (yychar <= YYEOF)
	{
	  /* Return failure if at end of input.  */
	  if (yychar == YYEOF)
	    YYABORT;
	}
      else
	{
	  yydestruct ("Error: discarding",
		      yytoken, &yylval, yyscanner, cstate);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse look-ahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
	    {
	      yyn = yytable[yyn];
	      if (0 < yyn)
		break;
	    }
	}

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
	YYABORT;


      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp, yyscanner, cstate);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  *++yyvsp = yylval;


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#ifndef yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (yyscanner, cstate, YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval, yyscanner, cstate);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp, yyscanner, cstate);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}


#line 949 "grammar.y"


