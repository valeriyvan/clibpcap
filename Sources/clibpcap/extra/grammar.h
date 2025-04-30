/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton interface for Bison's Yacc-like parsers in C

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
/* Line 1529 of yacc.c.  */
#line 312 "grammar.h"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



