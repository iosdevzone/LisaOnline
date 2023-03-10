/*****************************************************************************/
/*     Generator - Sega Genesis emulation - (c) James Ponder 1997-2001       */
/*****************************************************************************/
/*                                                                           */
/* cpu68k-d.c                                                                */
/*                                                                           */
/*****************************************************************************/

#include <cpu68k-inline.h>



static uint8 b1,b2,b3,b4; static uint16 w1,w2,w3,w4; static uint32 l1, l2, l3, l4;

void cpu_op_1398a(t_ipc *ipc) /* ADD */ {
  /* mask f1f8, bits d000, mnemonic 10, priv 0, endblk 0, imm_notzero 0, used 0     set 31, size 1, stype 0, dtype 0, sbitpos 0, dbitpos 9, immvalue 0 */
//type:0 datatype: 0, iib->dtype:0, iib->stype:0
  int srcreg = (ipc->opcode >> 0) & 7;
//type:0 datatype: 0, iib->dtype:0, iib->stype:0
  uint8 srcdata = DATAREG(srcreg);
//type:1 datatype: 0, iib->dtype:0, iib->stype:0
  int dstreg = (ipc->opcode >> 9) & 7;
//type:1 datatype: 0, iib->dtype:0, iib->stype:0
  uint8 dstdata = DATAREG(dstreg);

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
//iib->dtype:0, iib->stype:0 init:(sint8)dstdata + (sint8)srcdata
  uint8 outdata = (sint8)dstdata + (sint8)srcdata;

ABORT_OPCODE_CHK();
//type:1  iib->dtype:0, iib->stype:0
  DATAREG(dstreg) = (DATAREG(dstreg) & ~0xff) | outdata;
  PC+= 2;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1398b(t_ipc *ipc) /* ADD */ {
  /* mask f1f8, bits d000, mnemonic 10, priv 0, endblk 0, imm_notzero 0, used 0     set 31, size 1, stype 0, dtype 0, sbitpos 0, dbitpos 9, immvalue 0 */
//type:0 datatype: 0, iib->dtype:0, iib->stype:0
  int srcreg = (ipc->opcode >> 0) & 7;
//type:0 datatype: 0, iib->dtype:0, iib->stype:0
  uint8 srcdata = DATAREG(srcreg);
//type:1 datatype: 0, iib->dtype:0, iib->stype:0
  int dstreg = (ipc->opcode >> 9) & 7;
//type:1 datatype: 0, iib->dtype:0, iib->stype:0
  uint8 dstdata = DATAREG(dstreg);

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
//iib->dtype:0, iib->stype:0 init:(sint8)dstdata + (sint8)srcdata
  uint8 outdata = (sint8)dstdata + (sint8)srcdata;

ABORT_OPCODE_CHK();
//type:1  iib->dtype:0, iib->stype:0
  DATAREG(dstreg) = (DATAREG(dstreg) & ~0xff) | outdata;

  VFLAG = (((sint8)srcdata < 0) == ((sint8)dstdata < 0)) &&
    (((sint8)dstdata < 0) != ((sint8)outdata < 0));
  XFLAG = CFLAG = srcdata > (0xFFu - (uint8)dstdata);
  NFLAG = ((sint8)outdata) < 0;
  ZFLAG = !outdata;
  PC+= 2;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1399a(t_ipc *ipc) /* ADD */ {
  /* mask f1f8, bits d008, mnemonic 10, priv 0, endblk 0, imm_notzero 0, used 0     set 31, size 1, stype 1, dtype 0, sbitpos 0, dbitpos 9, immvalue 0 */
//type:0 datatype: 1, iib->dtype:0, iib->stype:1
  int srcreg = (ipc->opcode >> 0) & 7;
//type:0 datatype: 1, iib->dtype:0, iib->stype:1
  uint8 srcdata = ADDRREG(srcreg);
//type:1 datatype: 0, iib->dtype:0, iib->stype:1
  int dstreg = (ipc->opcode >> 9) & 7;
//type:1 datatype: 0, iib->dtype:0, iib->stype:1
  uint8 dstdata = DATAREG(dstreg);

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
//iib->dtype:0, iib->stype:1 init:(sint8)dstdata + (sint8)srcdata
  uint8 outdata = (sint8)dstdata + (sint8)srcdata;

ABORT_OPCODE_CHK();
//type:1  iib->dtype:0, iib->stype:1
  DATAREG(dstreg) = (DATAREG(dstreg) & ~0xff) | outdata;
  PC+= 2;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1399b(t_ipc *ipc) /* ADD */ {
  /* mask f1f8, bits d008, mnemonic 10, priv 0, endblk 0, imm_notzero 0, used 0     set 31, size 1, stype 1, dtype 0, sbitpos 0, dbitpos 9, immvalue 0 */
//type:0 datatype: 1, iib->dtype:0, iib->stype:1
  int srcreg = (ipc->opcode >> 0) & 7;
//type:0 datatype: 1, iib->dtype:0, iib->stype:1
  uint8 srcdata = ADDRREG(srcreg);
//type:1 datatype: 0, iib->dtype:0, iib->stype:1
  int dstreg = (ipc->opcode >> 9) & 7;
//type:1 datatype: 0, iib->dtype:0, iib->stype:1
  uint8 dstdata = DATAREG(dstreg);

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
//iib->dtype:0, iib->stype:1 init:(sint8)dstdata + (sint8)srcdata
  uint8 outdata = (sint8)dstdata + (sint8)srcdata;

ABORT_OPCODE_CHK();
//type:1  iib->dtype:0, iib->stype:1
  DATAREG(dstreg) = (DATAREG(dstreg) & ~0xff) | outdata;

  VFLAG = (((sint8)srcdata < 0) == ((sint8)dstdata < 0)) &&
    (((sint8)dstdata < 0) != ((sint8)outdata < 0));
  XFLAG = CFLAG = srcdata > (0xFFu - (uint8)dstdata);
  NFLAG = ((sint8)outdata) < 0;
  ZFLAG = !outdata;
  PC+= 2;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1400a(t_ipc *ipc) /* ADD */ {
  /* mask f1f8, bits d010, mnemonic 10, priv 0, endblk 0, imm_notzero 0, used 0     set 31, size 1, stype 2, dtype 0, sbitpos 0, dbitpos 9, immvalue 0 */
//type:0 datatype: 2, iib->dtype:0, iib->stype:2
  int srcreg = (ipc->opcode >> 0) & 7;
  uint32 srcaddr = ADDRREG(srcreg);
//type:0 datatype: 2, iib->dtype:0, iib->stype:2
  uint8 srcdata = fetchbyte(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//type:1 datatype: 0, iib->dtype:0, iib->stype:2
  int dstreg = (ipc->opcode >> 9) & 7;
//type:1 datatype: 0, iib->dtype:0, iib->stype:2
  uint8 dstdata = DATAREG(dstreg);

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
//iib->dtype:0, iib->stype:2 init:(sint8)dstdata + (sint8)srcdata
  uint8 outdata = (sint8)dstdata + (sint8)srcdata;

ABORT_OPCODE_CHK();
//type:1  iib->dtype:0, iib->stype:2
  DATAREG(dstreg) = (DATAREG(dstreg) & ~0xff) | outdata;
  PC+= 2;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1400b(t_ipc *ipc) /* ADD */ {
  /* mask f1f8, bits d010, mnemonic 10, priv 0, endblk 0, imm_notzero 0, used 0     set 31, size 1, stype 2, dtype 0, sbitpos 0, dbitpos 9, immvalue 0 */
//type:0 datatype: 2, iib->dtype:0, iib->stype:2
  int srcreg = (ipc->opcode >> 0) & 7;
  uint32 srcaddr = ADDRREG(srcreg);
//type:0 datatype: 2, iib->dtype:0, iib->stype:2
  uint8 srcdata = fetchbyte(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//type:1 datatype: 0, iib->dtype:0, iib->stype:2
  int dstreg = (ipc->opcode >> 9) & 7;
//type:1 datatype: 0, iib->dtype:0, iib->stype:2
  uint8 dstdata = DATAREG(dstreg);

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
//iib->dtype:0, iib->stype:2 init:(sint8)dstdata + (sint8)srcdata
  uint8 outdata = (sint8)dstdata + (sint8)srcdata;

ABORT_OPCODE_CHK();
//type:1  iib->dtype:0, iib->stype:2
  DATAREG(dstreg) = (DATAREG(dstreg) & ~0xff) | outdata;

  VFLAG = (((sint8)srcdata < 0) == ((sint8)dstdata < 0)) &&
    (((sint8)dstdata < 0) != ((sint8)outdata < 0));
  XFLAG = CFLAG = srcdata > (0xFFu - (uint8)dstdata);
  NFLAG = ((sint8)outdata) < 0;
  ZFLAG = !outdata;
  PC+= 2;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1401a(t_ipc *ipc) /* ADD */ {
  /* mask f1f8, bits d018, mnemonic 10, priv 0, endblk 0, imm_notzero 0, used 0     set 31, size 1, stype 3, dtype 0, sbitpos 0, dbitpos 9, immvalue 0 */
//type:0 datatype: 3, iib->dtype:0, iib->stype:3
  int srcreg = (ipc->opcode >> 0) & 7;
  uint32 srcaddr = ADDRREG(srcreg);
  uint32 srcaddr_tmp = (ADDRREG(srcreg)+= (srcreg == 7 ? 2 : 1), 0);
//type:0 datatype: 3, iib->dtype:0, iib->stype:3
  uint8 srcdata = fetchbyte(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//type:1 datatype: 0, iib->dtype:0, iib->stype:3
  int dstreg = (ipc->opcode >> 9) & 7;
//type:1 datatype: 0, iib->dtype:0, iib->stype:3
  uint8 dstdata = DATAREG(dstreg);

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
//iib->dtype:0, iib->stype:3 init:(sint8)dstdata + (sint8)srcdata
  uint8 outdata = (sint8)dstdata + (sint8)srcdata;

ABORT_OPCODE_CHK();
//type:1  iib->dtype:0, iib->stype:3
  DATAREG(dstreg) = (DATAREG(dstreg) & ~0xff) | outdata;
  PC+= 2;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1401b(t_ipc *ipc) /* ADD */ {
  /* mask f1f8, bits d018, mnemonic 10, priv 0, endblk 0, imm_notzero 0, used 0     set 31, size 1, stype 3, dtype 0, sbitpos 0, dbitpos 9, immvalue 0 */
//type:0 datatype: 3, iib->dtype:0, iib->stype:3
  int srcreg = (ipc->opcode >> 0) & 7;
  uint32 srcaddr = ADDRREG(srcreg);
  uint32 srcaddr_tmp = (ADDRREG(srcreg)+= (srcreg == 7 ? 2 : 1), 0);
//type:0 datatype: 3, iib->dtype:0, iib->stype:3
  uint8 srcdata = fetchbyte(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//type:1 datatype: 0, iib->dtype:0, iib->stype:3
  int dstreg = (ipc->opcode >> 9) & 7;
//type:1 datatype: 0, iib->dtype:0, iib->stype:3
  uint8 dstdata = DATAREG(dstreg);

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
//iib->dtype:0, iib->stype:3 init:(sint8)dstdata + (sint8)srcdata
  uint8 outdata = (sint8)dstdata + (sint8)srcdata;

ABORT_OPCODE_CHK();
//type:1  iib->dtype:0, iib->stype:3
  DATAREG(dstreg) = (DATAREG(dstreg) & ~0xff) | outdata;

  VFLAG = (((sint8)srcdata < 0) == ((sint8)dstdata < 0)) &&
    (((sint8)dstdata < 0) != ((sint8)outdata < 0));
  XFLAG = CFLAG = srcdata > (0xFFu - (uint8)dstdata);
  NFLAG = ((sint8)outdata) < 0;
  ZFLAG = !outdata;
  PC+= 2;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1402a(t_ipc *ipc) /* ADD */ {
  /* mask f1f8, bits d020, mnemonic 10, priv 0, endblk 0, imm_notzero 0, used 0     set 31, size 1, stype 4, dtype 0, sbitpos 0, dbitpos 9, immvalue 0 */
//type:0 datatype: 4, iib->dtype:0, iib->stype:4
  int srcreg = (ipc->opcode >> 0) & 7;
  uint32 srcaddr = (ADDRREG(srcreg)-= (srcreg == 7 ? 2 : 1));
//type:0 datatype: 4, iib->dtype:0, iib->stype:4
  uint8 srcdata = fetchbyte(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//type:1 datatype: 0, iib->dtype:0, iib->stype:4
  int dstreg = (ipc->opcode >> 9) & 7;
//type:1 datatype: 0, iib->dtype:0, iib->stype:4
  uint8 dstdata = DATAREG(dstreg);

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
//iib->dtype:0, iib->stype:4 init:(sint8)dstdata + (sint8)srcdata
  uint8 outdata = (sint8)dstdata + (sint8)srcdata;

ABORT_OPCODE_CHK();
//type:1  iib->dtype:0, iib->stype:4
  DATAREG(dstreg) = (DATAREG(dstreg) & ~0xff) | outdata;
  PC+= 2;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1402b(t_ipc *ipc) /* ADD */ {
  /* mask f1f8, bits d020, mnemonic 10, priv 0, endblk 0, imm_notzero 0, used 0     set 31, size 1, stype 4, dtype 0, sbitpos 0, dbitpos 9, immvalue 0 */
//type:0 datatype: 4, iib->dtype:0, iib->stype:4
  int srcreg = (ipc->opcode >> 0) & 7;
  uint32 srcaddr = (ADDRREG(srcreg)-= (srcreg == 7 ? 2 : 1));
//type:0 datatype: 4, iib->dtype:0, iib->stype:4
  uint8 srcdata = fetchbyte(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//type:1 datatype: 0, iib->dtype:0, iib->stype:4
  int dstreg = (ipc->opcode >> 9) & 7;
//type:1 datatype: 0, iib->dtype:0, iib->stype:4
  uint8 dstdata = DATAREG(dstreg);

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
//iib->dtype:0, iib->stype:4 init:(sint8)dstdata + (sint8)srcdata
  uint8 outdata = (sint8)dstdata + (sint8)srcdata;

ABORT_OPCODE_CHK();
//type:1  iib->dtype:0, iib->stype:4
  DATAREG(dstreg) = (DATAREG(dstreg) & ~0xff) | outdata;

  VFLAG = (((sint8)srcdata < 0) == ((sint8)dstdata < 0)) &&
    (((sint8)dstdata < 0) != ((sint8)outdata < 0));
  XFLAG = CFLAG = srcdata > (0xFFu - (uint8)dstdata);
  NFLAG = ((sint8)outdata) < 0;
  ZFLAG = !outdata;
  PC+= 2;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1403a(t_ipc *ipc) /* ADD */ {
  /* mask f1f8, bits d028, mnemonic 10, priv 0, endblk 0, imm_notzero 0, used 0     set 31, size 1, stype 5, dtype 0, sbitpos 0, dbitpos 9, immvalue 0 */
//type:0 datatype: 5, iib->dtype:0, iib->stype:5
  int srcreg = (ipc->opcode >> 0) & 7;
  uint32 srcaddr = (sint32)ADDRREG(srcreg) + (sint32)(sint16)ipc->src;
//type:0 datatype: 5, iib->dtype:0, iib->stype:5
  uint8 srcdata = fetchbyte(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//type:1 datatype: 0, iib->dtype:0, iib->stype:5
  int dstreg = (ipc->opcode >> 9) & 7;
//type:1 datatype: 0, iib->dtype:0, iib->stype:5
  uint8 dstdata = DATAREG(dstreg);

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
//iib->dtype:0, iib->stype:5 init:(sint8)dstdata + (sint8)srcdata
  uint8 outdata = (sint8)dstdata + (sint8)srcdata;

ABORT_OPCODE_CHK();
//type:1  iib->dtype:0, iib->stype:5
  DATAREG(dstreg) = (DATAREG(dstreg) & ~0xff) | outdata;
  PC+= 4;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1403b(t_ipc *ipc) /* ADD */ {
  /* mask f1f8, bits d028, mnemonic 10, priv 0, endblk 0, imm_notzero 0, used 0     set 31, size 1, stype 5, dtype 0, sbitpos 0, dbitpos 9, immvalue 0 */
//type:0 datatype: 5, iib->dtype:0, iib->stype:5
  int srcreg = (ipc->opcode >> 0) & 7;
  uint32 srcaddr = (sint32)ADDRREG(srcreg) + (sint32)(sint16)ipc->src;
//type:0 datatype: 5, iib->dtype:0, iib->stype:5
  uint8 srcdata = fetchbyte(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//type:1 datatype: 0, iib->dtype:0, iib->stype:5
  int dstreg = (ipc->opcode >> 9) & 7;
//type:1 datatype: 0, iib->dtype:0, iib->stype:5
  uint8 dstdata = DATAREG(dstreg);

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
//iib->dtype:0, iib->stype:5 init:(sint8)dstdata + (sint8)srcdata
  uint8 outdata = (sint8)dstdata + (sint8)srcdata;

ABORT_OPCODE_CHK();
//type:1  iib->dtype:0, iib->stype:5
  DATAREG(dstreg) = (DATAREG(dstreg) & ~0xff) | outdata;

  VFLAG = (((sint8)srcdata < 0) == ((sint8)dstdata < 0)) &&
    (((sint8)dstdata < 0) != ((sint8)outdata < 0));
  XFLAG = CFLAG = srcdata > (0xFFu - (uint8)dstdata);
  NFLAG = ((sint8)outdata) < 0;
  ZFLAG = !outdata;
  PC+= 4;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1404a(t_ipc *ipc) /* ADD */ {
  /* mask f1f8, bits d030, mnemonic 10, priv 0, endblk 0, imm_notzero 0, used 0     set 31, size 1, stype 6, dtype 0, sbitpos 0, dbitpos 9, immvalue 0 */
//type:0 datatype: 6, iib->dtype:0, iib->stype:6
  int srcreg = (ipc->opcode >> 0) & 7;
  uint32 srcaddr = (sint32)ADDRREG(srcreg) + idxval_src(ipc);
//type:0 datatype: 6, iib->dtype:0, iib->stype:6
  uint8 srcdata = fetchbyte(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//type:1 datatype: 0, iib->dtype:0, iib->stype:6
  int dstreg = (ipc->opcode >> 9) & 7;
//type:1 datatype: 0, iib->dtype:0, iib->stype:6
  uint8 dstdata = DATAREG(dstreg);

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
//iib->dtype:0, iib->stype:6 init:(sint8)dstdata + (sint8)srcdata
  uint8 outdata = (sint8)dstdata + (sint8)srcdata;

ABORT_OPCODE_CHK();
//type:1  iib->dtype:0, iib->stype:6
  DATAREG(dstreg) = (DATAREG(dstreg) & ~0xff) | outdata;
  PC+= 4;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1404b(t_ipc *ipc) /* ADD */ {
  /* mask f1f8, bits d030, mnemonic 10, priv 0, endblk 0, imm_notzero 0, used 0     set 31, size 1, stype 6, dtype 0, sbitpos 0, dbitpos 9, immvalue 0 */
//type:0 datatype: 6, iib->dtype:0, iib->stype:6
  int srcreg = (ipc->opcode >> 0) & 7;
  uint32 srcaddr = (sint32)ADDRREG(srcreg) + idxval_src(ipc);
//type:0 datatype: 6, iib->dtype:0, iib->stype:6
  uint8 srcdata = fetchbyte(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//type:1 datatype: 0, iib->dtype:0, iib->stype:6
  int dstreg = (ipc->opcode >> 9) & 7;
//type:1 datatype: 0, iib->dtype:0, iib->stype:6
  uint8 dstdata = DATAREG(dstreg);

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
//iib->dtype:0, iib->stype:6 init:(sint8)dstdata + (sint8)srcdata
  uint8 outdata = (sint8)dstdata + (sint8)srcdata;

ABORT_OPCODE_CHK();
//type:1  iib->dtype:0, iib->stype:6
  DATAREG(dstreg) = (DATAREG(dstreg) & ~0xff) | outdata;

  VFLAG = (((sint8)srcdata < 0) == ((sint8)dstdata < 0)) &&
    (((sint8)dstdata < 0) != ((sint8)outdata < 0));
  XFLAG = CFLAG = srcdata > (0xFFu - (uint8)dstdata);
  NFLAG = ((sint8)outdata) < 0;
  ZFLAG = !outdata;
  PC+= 4;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1405a(t_ipc *ipc) /* ADD */ {
  /* mask f1ff, bits d038, mnemonic 10, priv 0, endblk 0, imm_notzero 0, used 0     set 31, size 1, stype 7, dtype 0, sbitpos 0, dbitpos 9, immvalue 0 */
//type:0 datatype: 7, iib->dtype:0, iib->stype:7
  uint32 srcaddr = ipc->src;
//type:0 datatype: 7, iib->dtype:0, iib->stype:7
  uint8 srcdata = fetchbyte(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//type:1 datatype: 0, iib->dtype:0, iib->stype:7
  int dstreg = (ipc->opcode >> 9) & 7;
//type:1 datatype: 0, iib->dtype:0, iib->stype:7
  uint8 dstdata = DATAREG(dstreg);

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
//iib->dtype:0, iib->stype:7 init:(sint8)dstdata + (sint8)srcdata
  uint8 outdata = (sint8)dstdata + (sint8)srcdata;

ABORT_OPCODE_CHK();
//type:1  iib->dtype:0, iib->stype:7
  DATAREG(dstreg) = (DATAREG(dstreg) & ~0xff) | outdata;
  PC+= 4;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1405b(t_ipc *ipc) /* ADD */ {
  /* mask f1ff, bits d038, mnemonic 10, priv 0, endblk 0, imm_notzero 0, used 0     set 31, size 1, stype 7, dtype 0, sbitpos 0, dbitpos 9, immvalue 0 */
//type:0 datatype: 7, iib->dtype:0, iib->stype:7
  uint32 srcaddr = ipc->src;
//type:0 datatype: 7, iib->dtype:0, iib->stype:7
  uint8 srcdata = fetchbyte(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//type:1 datatype: 0, iib->dtype:0, iib->stype:7
  int dstreg = (ipc->opcode >> 9) & 7;
//type:1 datatype: 0, iib->dtype:0, iib->stype:7
  uint8 dstdata = DATAREG(dstreg);

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
//iib->dtype:0, iib->stype:7 init:(sint8)dstdata + (sint8)srcdata
  uint8 outdata = (sint8)dstdata + (sint8)srcdata;

ABORT_OPCODE_CHK();
//type:1  iib->dtype:0, iib->stype:7
  DATAREG(dstreg) = (DATAREG(dstreg) & ~0xff) | outdata;

  VFLAG = (((sint8)srcdata < 0) == ((sint8)dstdata < 0)) &&
    (((sint8)dstdata < 0) != ((sint8)outdata < 0));
  XFLAG = CFLAG = srcdata > (0xFFu - (uint8)dstdata);
  NFLAG = ((sint8)outdata) < 0;
  ZFLAG = !outdata;
  PC+= 4;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1406a(t_ipc *ipc) /* ADD */ {
  /* mask f1ff, bits d039, mnemonic 10, priv 0, endblk 0, imm_notzero 0, used 0     set 31, size 1, stype 8, dtype 0, sbitpos 0, dbitpos 9, immvalue 0 */
//type:0 datatype: 8, iib->dtype:0, iib->stype:8
  uint32 srcaddr = ipc->src;
//type:0 datatype: 8, iib->dtype:0, iib->stype:8
  uint8 srcdata = fetchbyte(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//type:1 datatype: 0, iib->dtype:0, iib->stype:8
  int dstreg = (ipc->opcode >> 9) & 7;
//type:1 datatype: 0, iib->dtype:0, iib->stype:8
  uint8 dstdata = DATAREG(dstreg);

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
//iib->dtype:0, iib->stype:8 init:(sint8)dstdata + (sint8)srcdata
  uint8 outdata = (sint8)dstdata + (sint8)srcdata;

ABORT_OPCODE_CHK();
//type:1  iib->dtype:0, iib->stype:8
  DATAREG(dstreg) = (DATAREG(dstreg) & ~0xff) | outdata;
  PC+= 6;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1406b(t_ipc *ipc) /* ADD */ {
  /* mask f1ff, bits d039, mnemonic 10, priv 0, endblk 0, imm_notzero 0, used 0     set 31, size 1, stype 8, dtype 0, sbitpos 0, dbitpos 9, immvalue 0 */
//type:0 datatype: 8, iib->dtype:0, iib->stype:8
  uint32 srcaddr = ipc->src;
//type:0 datatype: 8, iib->dtype:0, iib->stype:8
  uint8 srcdata = fetchbyte(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//type:1 datatype: 0, iib->dtype:0, iib->stype:8
  int dstreg = (ipc->opcode >> 9) & 7;
//type:1 datatype: 0, iib->dtype:0, iib->stype:8
  uint8 dstdata = DATAREG(dstreg);

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
//iib->dtype:0, iib->stype:8 init:(sint8)dstdata + (sint8)srcdata
  uint8 outdata = (sint8)dstdata + (sint8)srcdata;

ABORT_OPCODE_CHK();
//type:1  iib->dtype:0, iib->stype:8
  DATAREG(dstreg) = (DATAREG(dstreg) & ~0xff) | outdata;

  VFLAG = (((sint8)srcdata < 0) == ((sint8)dstdata < 0)) &&
    (((sint8)dstdata < 0) != ((sint8)outdata < 0));
  XFLAG = CFLAG = srcdata > (0xFFu - (uint8)dstdata);
  NFLAG = ((sint8)outdata) < 0;
  ZFLAG = !outdata;
  PC+= 6;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1407a(t_ipc *ipc) /* ADD */ {
  /* mask f1ff, bits d03a, mnemonic 10, priv 0, endblk 0, imm_notzero 0, used 0     set 31, size 1, stype 9, dtype 0, sbitpos 0, dbitpos 9, immvalue 0 */
//type:0 datatype: 9, iib->dtype:0, iib->stype:9
  uint32 srcaddr = ipc->src;
//type:0 datatype: 9, iib->dtype:0, iib->stype:9
  uint8 srcdata = fetchbyte(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//type:1 datatype: 0, iib->dtype:0, iib->stype:9
  int dstreg = (ipc->opcode >> 9) & 7;
//type:1 datatype: 0, iib->dtype:0, iib->stype:9
  uint8 dstdata = DATAREG(dstreg);

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
//iib->dtype:0, iib->stype:9 init:(sint8)dstdata + (sint8)srcdata
  uint8 outdata = (sint8)dstdata + (sint8)srcdata;

ABORT_OPCODE_CHK();
//type:1  iib->dtype:0, iib->stype:9
  DATAREG(dstreg) = (DATAREG(dstreg) & ~0xff) | outdata;
  PC+= 4;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1407b(t_ipc *ipc) /* ADD */ {
  /* mask f1ff, bits d03a, mnemonic 10, priv 0, endblk 0, imm_notzero 0, used 0     set 31, size 1, stype 9, dtype 0, sbitpos 0, dbitpos 9, immvalue 0 */
//type:0 datatype: 9, iib->dtype:0, iib->stype:9
  uint32 srcaddr = ipc->src;
//type:0 datatype: 9, iib->dtype:0, iib->stype:9
  uint8 srcdata = fetchbyte(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//type:1 datatype: 0, iib->dtype:0, iib->stype:9
  int dstreg = (ipc->opcode >> 9) & 7;
//type:1 datatype: 0, iib->dtype:0, iib->stype:9
  uint8 dstdata = DATAREG(dstreg);

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
//iib->dtype:0, iib->stype:9 init:(sint8)dstdata + (sint8)srcdata
  uint8 outdata = (sint8)dstdata + (sint8)srcdata;

ABORT_OPCODE_CHK();
//type:1  iib->dtype:0, iib->stype:9
  DATAREG(dstreg) = (DATAREG(dstreg) & ~0xff) | outdata;

  VFLAG = (((sint8)srcdata < 0) == ((sint8)dstdata < 0)) &&
    (((sint8)dstdata < 0) != ((sint8)outdata < 0));
  XFLAG = CFLAG = srcdata > (0xFFu - (uint8)dstdata);
  NFLAG = ((sint8)outdata) < 0;
  ZFLAG = !outdata;
  PC+= 4;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1408a(t_ipc *ipc) /* ADD */ {
  /* mask f1ff, bits d03b, mnemonic 10, priv 0, endblk 0, imm_notzero 0, used 0     set 31, size 1, stype 10, dtype 0, sbitpos 0, dbitpos 9, immvalue 0 */
//type:0 datatype: 10, iib->dtype:0, iib->stype:10
  uint32 srcaddr = idxval_src(ipc);
//type:0 datatype: 10, iib->dtype:0, iib->stype:10
  uint8 srcdata = fetchbyte(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//type:1 datatype: 0, iib->dtype:0, iib->stype:10
  int dstreg = (ipc->opcode >> 9) & 7;
//type:1 datatype: 0, iib->dtype:0, iib->stype:10
  uint8 dstdata = DATAREG(dstreg);

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
//iib->dtype:0, iib->stype:10 init:(sint8)dstdata + (sint8)srcdata
  uint8 outdata = (sint8)dstdata + (sint8)srcdata;

ABORT_OPCODE_CHK();
//type:1  iib->dtype:0, iib->stype:10
  DATAREG(dstreg) = (DATAREG(dstreg) & ~0xff) | outdata;
  PC+= 4;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1408b(t_ipc *ipc) /* ADD */ {
  /* mask f1ff, bits d03b, mnemonic 10, priv 0, endblk 0, imm_notzero 0, used 0     set 31, size 1, stype 10, dtype 0, sbitpos 0, dbitpos 9, immvalue 0 */
//type:0 datatype: 10, iib->dtype:0, iib->stype:10
  uint32 srcaddr = idxval_src(ipc);
//type:0 datatype: 10, iib->dtype:0, iib->stype:10
  uint8 srcdata = fetchbyte(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//type:1 datatype: 0, iib->dtype:0, iib->stype:10
  int dstreg = (ipc->opcode >> 9) & 7;
//type:1 datatype: 0, iib->dtype:0, iib->stype:10
  uint8 dstdata = DATAREG(dstreg);

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
//iib->dtype:0, iib->stype:10 init:(sint8)dstdata + (sint8)srcdata
  uint8 outdata = (sint8)dstdata + (sint8)srcdata;

ABORT_OPCODE_CHK();
//type:1  iib->dtype:0, iib->stype:10
  DATAREG(dstreg) = (DATAREG(dstreg) & ~0xff) | outdata;

  VFLAG = (((sint8)srcdata < 0) == ((sint8)dstdata < 0)) &&
    (((sint8)dstdata < 0) != ((sint8)outdata < 0));
  XFLAG = CFLAG = srcdata > (0xFFu - (uint8)dstdata);
  NFLAG = ((sint8)outdata) < 0;
  ZFLAG = !outdata;
  PC+= 4;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1409a(t_ipc *ipc) /* ADD */ {
  /* mask f1ff, bits d03c, mnemonic 10, priv 0, endblk 0, imm_notzero 0, used 0     set 31, size 1, stype 11, dtype 0, sbitpos 0, dbitpos 9, immvalue 0 */
//type:0 datatype: 11, iib->dtype:0, iib->stype:11
//type:0 datatype: 11, iib->dtype:0, iib->stype:11
  uint8 srcdata = ipc->src;
//type:1 datatype: 0, iib->dtype:0, iib->stype:11
  int dstreg = (ipc->opcode >> 9) & 7;
//type:1 datatype: 0, iib->dtype:0, iib->stype:11
  uint8 dstdata = DATAREG(dstreg);

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
//iib->dtype:0, iib->stype:11 init:(sint8)dstdata + (sint8)srcdata
  uint8 outdata = (sint8)dstdata + (sint8)srcdata;

ABORT_OPCODE_CHK();
//type:1  iib->dtype:0, iib->stype:11
  DATAREG(dstreg) = (DATAREG(dstreg) & ~0xff) | outdata;
  PC+= 4;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1409b(t_ipc *ipc) /* ADD */ {
  /* mask f1ff, bits d03c, mnemonic 10, priv 0, endblk 0, imm_notzero 0, used 0     set 31, size 1, stype 11, dtype 0, sbitpos 0, dbitpos 9, immvalue 0 */
//type:0 datatype: 11, iib->dtype:0, iib->stype:11
//type:0 datatype: 11, iib->dtype:0, iib->stype:11
  uint8 srcdata = ipc->src;
//type:1 datatype: 0, iib->dtype:0, iib->stype:11
  int dstreg = (ipc->opcode >> 9) & 7;
//type:1 datatype: 0, iib->dtype:0, iib->stype:11
  uint8 dstdata = DATAREG(dstreg);

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
//iib->dtype:0, iib->stype:11 init:(sint8)dstdata + (sint8)srcdata
  uint8 outdata = (sint8)dstdata + (sint8)srcdata;

ABORT_OPCODE_CHK();
//type:1  iib->dtype:0, iib->stype:11
  DATAREG(dstreg) = (DATAREG(dstreg) & ~0xff) | outdata;

  VFLAG = (((sint8)srcdata < 0) == ((sint8)dstdata < 0)) &&
    (((sint8)dstdata < 0) != ((sint8)outdata < 0));
  XFLAG = CFLAG = srcdata > (0xFFu - (uint8)dstdata);
  NFLAG = ((sint8)outdata) < 0;
  ZFLAG = !outdata;
  PC+= 4;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1410a(t_ipc *ipc) /* ADD */ {
  /* mask f1f8, bits d040, mnemonic 10, priv 0, endblk 0, imm_notzero 0, used 0     set 31, size 2, stype 0, dtype 0, sbitpos 0, dbitpos 9, immvalue 0 */
//type:0 datatype: 0, iib->dtype:0, iib->stype:0
  int srcreg = (ipc->opcode >> 0) & 7;
//type:0 datatype: 0, iib->dtype:0, iib->stype:0
  uint16 srcdata = DATAREG(srcreg);
//type:1 datatype: 0, iib->dtype:0, iib->stype:0
  int dstreg = (ipc->opcode >> 9) & 7;
//type:1 datatype: 0, iib->dtype:0, iib->stype:0
  uint16 dstdata = DATAREG(dstreg);

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
//iib->dtype:0, iib->stype:0 init:(sint16)dstdata + (sint16)srcdata
  uint16 outdata = (sint16)dstdata + (sint16)srcdata;

ABORT_OPCODE_CHK();
//type:1  iib->dtype:0, iib->stype:0
  DATAREG(dstreg) = (DATAREG(dstreg) & ~0xffff) | outdata;
  PC+= 2;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1410b(t_ipc *ipc) /* ADD */ {
  /* mask f1f8, bits d040, mnemonic 10, priv 0, endblk 0, imm_notzero 0, used 0     set 31, size 2, stype 0, dtype 0, sbitpos 0, dbitpos 9, immvalue 0 */
//type:0 datatype: 0, iib->dtype:0, iib->stype:0
  int srcreg = (ipc->opcode >> 0) & 7;
//type:0 datatype: 0, iib->dtype:0, iib->stype:0
  uint16 srcdata = DATAREG(srcreg);
//type:1 datatype: 0, iib->dtype:0, iib->stype:0
  int dstreg = (ipc->opcode >> 9) & 7;
//type:1 datatype: 0, iib->dtype:0, iib->stype:0
  uint16 dstdata = DATAREG(dstreg);

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
//iib->dtype:0, iib->stype:0 init:(sint16)dstdata + (sint16)srcdata
  uint16 outdata = (sint16)dstdata + (sint16)srcdata;

ABORT_OPCODE_CHK();
//type:1  iib->dtype:0, iib->stype:0
  DATAREG(dstreg) = (DATAREG(dstreg) & ~0xffff) | outdata;

  VFLAG = (((sint16)srcdata < 0) == ((sint16)dstdata < 0)) &&
    (((sint16)dstdata < 0) != ((sint16)outdata < 0));
  XFLAG = CFLAG = srcdata > (0xFFFFu - (uint16)dstdata);
  NFLAG = ((sint16)outdata) < 0;
  ZFLAG = !outdata;
  PC+= 2;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1411a(t_ipc *ipc) /* ADD */ {
  /* mask f1f8, bits d048, mnemonic 10, priv 0, endblk 0, imm_notzero 0, used 0     set 31, size 2, stype 1, dtype 0, sbitpos 0, dbitpos 9, immvalue 0 */
//type:0 datatype: 1, iib->dtype:0, iib->stype:1
  int srcreg = (ipc->opcode >> 0) & 7;
//type:0 datatype: 1, iib->dtype:0, iib->stype:1
  uint16 srcdata = ADDRREG(srcreg);
//type:1 datatype: 0, iib->dtype:0, iib->stype:1
  int dstreg = (ipc->opcode >> 9) & 7;
//type:1 datatype: 0, iib->dtype:0, iib->stype:1
  uint16 dstdata = DATAREG(dstreg);

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
//iib->dtype:0, iib->stype:1 init:(sint16)dstdata + (sint16)srcdata
  uint16 outdata = (sint16)dstdata + (sint16)srcdata;

ABORT_OPCODE_CHK();
//type:1  iib->dtype:0, iib->stype:1
  DATAREG(dstreg) = (DATAREG(dstreg) & ~0xffff) | outdata;
  PC+= 2;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1411b(t_ipc *ipc) /* ADD */ {
  /* mask f1f8, bits d048, mnemonic 10, priv 0, endblk 0, imm_notzero 0, used 0     set 31, size 2, stype 1, dtype 0, sbitpos 0, dbitpos 9, immvalue 0 */
//type:0 datatype: 1, iib->dtype:0, iib->stype:1
  int srcreg = (ipc->opcode >> 0) & 7;
//type:0 datatype: 1, iib->dtype:0, iib->stype:1
  uint16 srcdata = ADDRREG(srcreg);
//type:1 datatype: 0, iib->dtype:0, iib->stype:1
  int dstreg = (ipc->opcode >> 9) & 7;
//type:1 datatype: 0, iib->dtype:0, iib->stype:1
  uint16 dstdata = DATAREG(dstreg);

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
//iib->dtype:0, iib->stype:1 init:(sint16)dstdata + (sint16)srcdata
  uint16 outdata = (sint16)dstdata + (sint16)srcdata;

ABORT_OPCODE_CHK();
//type:1  iib->dtype:0, iib->stype:1
  DATAREG(dstreg) = (DATAREG(dstreg) & ~0xffff) | outdata;

  VFLAG = (((sint16)srcdata < 0) == ((sint16)dstdata < 0)) &&
    (((sint16)dstdata < 0) != ((sint16)outdata < 0));
  XFLAG = CFLAG = srcdata > (0xFFFFu - (uint16)dstdata);
  NFLAG = ((sint16)outdata) < 0;
  ZFLAG = !outdata;
  PC+= 2;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1412a(t_ipc *ipc) /* ADD */ {
  /* mask f1f8, bits d050, mnemonic 10, priv 0, endblk 0, imm_notzero 0, used 0     set 31, size 2, stype 2, dtype 0, sbitpos 0, dbitpos 9, immvalue 0 */
//type:0 datatype: 2, iib->dtype:0, iib->stype:2
  int srcreg = (ipc->opcode >> 0) & 7;
  uint32 srcaddr = ADDRREG(srcreg);
//type:0 datatype: 2, iib->dtype:0, iib->stype:2
  uint16 srcdata = fetchword(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//type:1 datatype: 0, iib->dtype:0, iib->stype:2
  int dstreg = (ipc->opcode >> 9) & 7;
//type:1 datatype: 0, iib->dtype:0, iib->stype:2
  uint16 dstdata = DATAREG(dstreg);

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
//iib->dtype:0, iib->stype:2 init:(sint16)dstdata + (sint16)srcdata
  uint16 outdata = (sint16)dstdata + (sint16)srcdata;

ABORT_OPCODE_CHK();
//type:1  iib->dtype:0, iib->stype:2
  DATAREG(dstreg) = (DATAREG(dstreg) & ~0xffff) | outdata;
  PC+= 2;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1412b(t_ipc *ipc) /* ADD */ {
  /* mask f1f8, bits d050, mnemonic 10, priv 0, endblk 0, imm_notzero 0, used 0     set 31, size 2, stype 2, dtype 0, sbitpos 0, dbitpos 9, immvalue 0 */
//type:0 datatype: 2, iib->dtype:0, iib->stype:2
  int srcreg = (ipc->opcode >> 0) & 7;
  uint32 srcaddr = ADDRREG(srcreg);
//type:0 datatype: 2, iib->dtype:0, iib->stype:2
  uint16 srcdata = fetchword(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//type:1 datatype: 0, iib->dtype:0, iib->stype:2
  int dstreg = (ipc->opcode >> 9) & 7;
//type:1 datatype: 0, iib->dtype:0, iib->stype:2
  uint16 dstdata = DATAREG(dstreg);

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
//iib->dtype:0, iib->stype:2 init:(sint16)dstdata + (sint16)srcdata
  uint16 outdata = (sint16)dstdata + (sint16)srcdata;

ABORT_OPCODE_CHK();
//type:1  iib->dtype:0, iib->stype:2
  DATAREG(dstreg) = (DATAREG(dstreg) & ~0xffff) | outdata;

  VFLAG = (((sint16)srcdata < 0) == ((sint16)dstdata < 0)) &&
    (((sint16)dstdata < 0) != ((sint16)outdata < 0));
  XFLAG = CFLAG = srcdata > (0xFFFFu - (uint16)dstdata);
  NFLAG = ((sint16)outdata) < 0;
  ZFLAG = !outdata;
  PC+= 2;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1413a(t_ipc *ipc) /* ADD */ {
  /* mask f1f8, bits d058, mnemonic 10, priv 0, endblk 0, imm_notzero 0, used 0     set 31, size 2, stype 3, dtype 0, sbitpos 0, dbitpos 9, immvalue 0 */
//type:0 datatype: 3, iib->dtype:0, iib->stype:3
  int srcreg = (ipc->opcode >> 0) & 7;
  uint32 srcaddr = (ADDRREG(srcreg)+=2, ADDRREG(srcreg)-2);
//type:0 datatype: 3, iib->dtype:0, iib->stype:3
  uint16 srcdata = fetchword(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//type:1 datatype: 0, iib->dtype:0, iib->stype:3
  int dstreg = (ipc->opcode >> 9) & 7;
//type:1 datatype: 0, iib->dtype:0, iib->stype:3
  uint16 dstdata = DATAREG(dstreg);

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
//iib->dtype:0, iib->stype:3 init:(sint16)dstdata + (sint16)srcdata
  uint16 outdata = (sint16)dstdata + (sint16)srcdata;

ABORT_OPCODE_CHK();
//type:1  iib->dtype:0, iib->stype:3
  DATAREG(dstreg) = (DATAREG(dstreg) & ~0xffff) | outdata;
  PC+= 2;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1413b(t_ipc *ipc) /* ADD */ {
  /* mask f1f8, bits d058, mnemonic 10, priv 0, endblk 0, imm_notzero 0, used 0     set 31, size 2, stype 3, dtype 0, sbitpos 0, dbitpos 9, immvalue 0 */
//type:0 datatype: 3, iib->dtype:0, iib->stype:3
  int srcreg = (ipc->opcode >> 0) & 7;
  uint32 srcaddr = (ADDRREG(srcreg)+=2, ADDRREG(srcreg)-2);
//type:0 datatype: 3, iib->dtype:0, iib->stype:3
  uint16 srcdata = fetchword(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//type:1 datatype: 0, iib->dtype:0, iib->stype:3
  int dstreg = (ipc->opcode >> 9) & 7;
//type:1 datatype: 0, iib->dtype:0, iib->stype:3
  uint16 dstdata = DATAREG(dstreg);

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
//iib->dtype:0, iib->stype:3 init:(sint16)dstdata + (sint16)srcdata
  uint16 outdata = (sint16)dstdata + (sint16)srcdata;

ABORT_OPCODE_CHK();
//type:1  iib->dtype:0, iib->stype:3
  DATAREG(dstreg) = (DATAREG(dstreg) & ~0xffff) | outdata;

  VFLAG = (((sint16)srcdata < 0) == ((sint16)dstdata < 0)) &&
    (((sint16)dstdata < 0) != ((sint16)outdata < 0));
  XFLAG = CFLAG = srcdata > (0xFFFFu - (uint16)dstdata);
  NFLAG = ((sint16)outdata) < 0;
  ZFLAG = !outdata;
  PC+= 2;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1414a(t_ipc *ipc) /* ADD */ {
  /* mask f1f8, bits d060, mnemonic 10, priv 0, endblk 0, imm_notzero 0, used 0     set 31, size 2, stype 4, dtype 0, sbitpos 0, dbitpos 9, immvalue 0 */
//type:0 datatype: 4, iib->dtype:0, iib->stype:4
  int srcreg = (ipc->opcode >> 0) & 7;
  uint32 srcaddr = ADDRREG(srcreg)-=2;
//type:0 datatype: 4, iib->dtype:0, iib->stype:4
  uint16 srcdata = fetchword(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//type:1 datatype: 0, iib->dtype:0, iib->stype:4
  int dstreg = (ipc->opcode >> 9) & 7;
//type:1 datatype: 0, iib->dtype:0, iib->stype:4
  uint16 dstdata = DATAREG(dstreg);

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
//iib->dtype:0, iib->stype:4 init:(sint16)dstdata + (sint16)srcdata
  uint16 outdata = (sint16)dstdata + (sint16)srcdata;

ABORT_OPCODE_CHK();
//type:1  iib->dtype:0, iib->stype:4
  DATAREG(dstreg) = (DATAREG(dstreg) & ~0xffff) | outdata;
  PC+= 2;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1414b(t_ipc *ipc) /* ADD */ {
  /* mask f1f8, bits d060, mnemonic 10, priv 0, endblk 0, imm_notzero 0, used 0     set 31, size 2, stype 4, dtype 0, sbitpos 0, dbitpos 9, immvalue 0 */
//type:0 datatype: 4, iib->dtype:0, iib->stype:4
  int srcreg = (ipc->opcode >> 0) & 7;
  uint32 srcaddr = ADDRREG(srcreg)-=2;
//type:0 datatype: 4, iib->dtype:0, iib->stype:4
  uint16 srcdata = fetchword(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//type:1 datatype: 0, iib->dtype:0, iib->stype:4
  int dstreg = (ipc->opcode >> 9) & 7;
//type:1 datatype: 0, iib->dtype:0, iib->stype:4
  uint16 dstdata = DATAREG(dstreg);

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
//iib->dtype:0, iib->stype:4 init:(sint16)dstdata + (sint16)srcdata
  uint16 outdata = (sint16)dstdata + (sint16)srcdata;

ABORT_OPCODE_CHK();
//type:1  iib->dtype:0, iib->stype:4
  DATAREG(dstreg) = (DATAREG(dstreg) & ~0xffff) | outdata;

  VFLAG = (((sint16)srcdata < 0) == ((sint16)dstdata < 0)) &&
    (((sint16)dstdata < 0) != ((sint16)outdata < 0));
  XFLAG = CFLAG = srcdata > (0xFFFFu - (uint16)dstdata);
  NFLAG = ((sint16)outdata) < 0;
  ZFLAG = !outdata;
  PC+= 2;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1415a(t_ipc *ipc) /* ADD */ {
  /* mask f1f8, bits d068, mnemonic 10, priv 0, endblk 0, imm_notzero 0, used 0     set 31, size 2, stype 5, dtype 0, sbitpos 0, dbitpos 9, immvalue 0 */
//type:0 datatype: 5, iib->dtype:0, iib->stype:5
  int srcreg = (ipc->opcode >> 0) & 7;
  uint32 srcaddr = (sint32)ADDRREG(srcreg) + (sint32)(sint16)ipc->src;
//type:0 datatype: 5, iib->dtype:0, iib->stype:5
  uint16 srcdata = fetchword(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//type:1 datatype: 0, iib->dtype:0, iib->stype:5
  int dstreg = (ipc->opcode >> 9) & 7;
//type:1 datatype: 0, iib->dtype:0, iib->stype:5
  uint16 dstdata = DATAREG(dstreg);

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
//iib->dtype:0, iib->stype:5 init:(sint16)dstdata + (sint16)srcdata
  uint16 outdata = (sint16)dstdata + (sint16)srcdata;

ABORT_OPCODE_CHK();
//type:1  iib->dtype:0, iib->stype:5
  DATAREG(dstreg) = (DATAREG(dstreg) & ~0xffff) | outdata;
  PC+= 4;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1415b(t_ipc *ipc) /* ADD */ {
  /* mask f1f8, bits d068, mnemonic 10, priv 0, endblk 0, imm_notzero 0, used 0     set 31, size 2, stype 5, dtype 0, sbitpos 0, dbitpos 9, immvalue 0 */
//type:0 datatype: 5, iib->dtype:0, iib->stype:5
  int srcreg = (ipc->opcode >> 0) & 7;
  uint32 srcaddr = (sint32)ADDRREG(srcreg) + (sint32)(sint16)ipc->src;
//type:0 datatype: 5, iib->dtype:0, iib->stype:5
  uint16 srcdata = fetchword(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//type:1 datatype: 0, iib->dtype:0, iib->stype:5
  int dstreg = (ipc->opcode >> 9) & 7;
//type:1 datatype: 0, iib->dtype:0, iib->stype:5
  uint16 dstdata = DATAREG(dstreg);

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
//iib->dtype:0, iib->stype:5 init:(sint16)dstdata + (sint16)srcdata
  uint16 outdata = (sint16)dstdata + (sint16)srcdata;

ABORT_OPCODE_CHK();
//type:1  iib->dtype:0, iib->stype:5
  DATAREG(dstreg) = (DATAREG(dstreg) & ~0xffff) | outdata;

  VFLAG = (((sint16)srcdata < 0) == ((sint16)dstdata < 0)) &&
    (((sint16)dstdata < 0) != ((sint16)outdata < 0));
  XFLAG = CFLAG = srcdata > (0xFFFFu - (uint16)dstdata);
  NFLAG = ((sint16)outdata) < 0;
  ZFLAG = !outdata;
  PC+= 4;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1416a(t_ipc *ipc) /* ADD */ {
  /* mask f1f8, bits d070, mnemonic 10, priv 0, endblk 0, imm_notzero 0, used 0     set 31, size 2, stype 6, dtype 0, sbitpos 0, dbitpos 9, immvalue 0 */
//type:0 datatype: 6, iib->dtype:0, iib->stype:6
  int srcreg = (ipc->opcode >> 0) & 7;
  uint32 srcaddr = (sint32)ADDRREG(srcreg) + idxval_src(ipc);
//type:0 datatype: 6, iib->dtype:0, iib->stype:6
  uint16 srcdata = fetchword(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//type:1 datatype: 0, iib->dtype:0, iib->stype:6
  int dstreg = (ipc->opcode >> 9) & 7;
//type:1 datatype: 0, iib->dtype:0, iib->stype:6
  uint16 dstdata = DATAREG(dstreg);

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
//iib->dtype:0, iib->stype:6 init:(sint16)dstdata + (sint16)srcdata
  uint16 outdata = (sint16)dstdata + (sint16)srcdata;

ABORT_OPCODE_CHK();
//type:1  iib->dtype:0, iib->stype:6
  DATAREG(dstreg) = (DATAREG(dstreg) & ~0xffff) | outdata;
  PC+= 4;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1416b(t_ipc *ipc) /* ADD */ {
  /* mask f1f8, bits d070, mnemonic 10, priv 0, endblk 0, imm_notzero 0, used 0     set 31, size 2, stype 6, dtype 0, sbitpos 0, dbitpos 9, immvalue 0 */
//type:0 datatype: 6, iib->dtype:0, iib->stype:6
  int srcreg = (ipc->opcode >> 0) & 7;
  uint32 srcaddr = (sint32)ADDRREG(srcreg) + idxval_src(ipc);
//type:0 datatype: 6, iib->dtype:0, iib->stype:6
  uint16 srcdata = fetchword(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//type:1 datatype: 0, iib->dtype:0, iib->stype:6
  int dstreg = (ipc->opcode >> 9) & 7;
//type:1 datatype: 0, iib->dtype:0, iib->stype:6
  uint16 dstdata = DATAREG(dstreg);

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
//iib->dtype:0, iib->stype:6 init:(sint16)dstdata + (sint16)srcdata
  uint16 outdata = (sint16)dstdata + (sint16)srcdata;

ABORT_OPCODE_CHK();
//type:1  iib->dtype:0, iib->stype:6
  DATAREG(dstreg) = (DATAREG(dstreg) & ~0xffff) | outdata;

  VFLAG = (((sint16)srcdata < 0) == ((sint16)dstdata < 0)) &&
    (((sint16)dstdata < 0) != ((sint16)outdata < 0));
  XFLAG = CFLAG = srcdata > (0xFFFFu - (uint16)dstdata);
  NFLAG = ((sint16)outdata) < 0;
  ZFLAG = !outdata;
  PC+= 4;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1417a(t_ipc *ipc) /* ADD */ {
  /* mask f1ff, bits d078, mnemonic 10, priv 0, endblk 0, imm_notzero 0, used 0     set 31, size 2, stype 7, dtype 0, sbitpos 0, dbitpos 9, immvalue 0 */
//type:0 datatype: 7, iib->dtype:0, iib->stype:7
  uint32 srcaddr = ipc->src;
//type:0 datatype: 7, iib->dtype:0, iib->stype:7
  uint16 srcdata = fetchword(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//type:1 datatype: 0, iib->dtype:0, iib->stype:7
  int dstreg = (ipc->opcode >> 9) & 7;
//type:1 datatype: 0, iib->dtype:0, iib->stype:7
  uint16 dstdata = DATAREG(dstreg);

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
//iib->dtype:0, iib->stype:7 init:(sint16)dstdata + (sint16)srcdata
  uint16 outdata = (sint16)dstdata + (sint16)srcdata;

ABORT_OPCODE_CHK();
//type:1  iib->dtype:0, iib->stype:7
  DATAREG(dstreg) = (DATAREG(dstreg) & ~0xffff) | outdata;
  PC+= 4;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1417b(t_ipc *ipc) /* ADD */ {
  /* mask f1ff, bits d078, mnemonic 10, priv 0, endblk 0, imm_notzero 0, used 0     set 31, size 2, stype 7, dtype 0, sbitpos 0, dbitpos 9, immvalue 0 */
//type:0 datatype: 7, iib->dtype:0, iib->stype:7
  uint32 srcaddr = ipc->src;
//type:0 datatype: 7, iib->dtype:0, iib->stype:7
  uint16 srcdata = fetchword(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//type:1 datatype: 0, iib->dtype:0, iib->stype:7
  int dstreg = (ipc->opcode >> 9) & 7;
//type:1 datatype: 0, iib->dtype:0, iib->stype:7
  uint16 dstdata = DATAREG(dstreg);

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
//iib->dtype:0, iib->stype:7 init:(sint16)dstdata + (sint16)srcdata
  uint16 outdata = (sint16)dstdata + (sint16)srcdata;

ABORT_OPCODE_CHK();
//type:1  iib->dtype:0, iib->stype:7
  DATAREG(dstreg) = (DATAREG(dstreg) & ~0xffff) | outdata;

  VFLAG = (((sint16)srcdata < 0) == ((sint16)dstdata < 0)) &&
    (((sint16)dstdata < 0) != ((sint16)outdata < 0));
  XFLAG = CFLAG = srcdata > (0xFFFFu - (uint16)dstdata);
  NFLAG = ((sint16)outdata) < 0;
  ZFLAG = !outdata;
  PC+= 4;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1418a(t_ipc *ipc) /* ADD */ {
  /* mask f1ff, bits d079, mnemonic 10, priv 0, endblk 0, imm_notzero 0, used 0     set 31, size 2, stype 8, dtype 0, sbitpos 0, dbitpos 9, immvalue 0 */
//type:0 datatype: 8, iib->dtype:0, iib->stype:8
  uint32 srcaddr = ipc->src;
//type:0 datatype: 8, iib->dtype:0, iib->stype:8
  uint16 srcdata = fetchword(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//type:1 datatype: 0, iib->dtype:0, iib->stype:8
  int dstreg = (ipc->opcode >> 9) & 7;
//type:1 datatype: 0, iib->dtype:0, iib->stype:8
  uint16 dstdata = DATAREG(dstreg);

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
//iib->dtype:0, iib->stype:8 init:(sint16)dstdata + (sint16)srcdata
  uint16 outdata = (sint16)dstdata + (sint16)srcdata;

ABORT_OPCODE_CHK();
//type:1  iib->dtype:0, iib->stype:8
  DATAREG(dstreg) = (DATAREG(dstreg) & ~0xffff) | outdata;
  PC+= 6;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1418b(t_ipc *ipc) /* ADD */ {
  /* mask f1ff, bits d079, mnemonic 10, priv 0, endblk 0, imm_notzero 0, used 0     set 31, size 2, stype 8, dtype 0, sbitpos 0, dbitpos 9, immvalue 0 */
//type:0 datatype: 8, iib->dtype:0, iib->stype:8
  uint32 srcaddr = ipc->src;
//type:0 datatype: 8, iib->dtype:0, iib->stype:8
  uint16 srcdata = fetchword(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//type:1 datatype: 0, iib->dtype:0, iib->stype:8
  int dstreg = (ipc->opcode >> 9) & 7;
//type:1 datatype: 0, iib->dtype:0, iib->stype:8
  uint16 dstdata = DATAREG(dstreg);

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
//iib->dtype:0, iib->stype:8 init:(sint16)dstdata + (sint16)srcdata
  uint16 outdata = (sint16)dstdata + (sint16)srcdata;

ABORT_OPCODE_CHK();
//type:1  iib->dtype:0, iib->stype:8
  DATAREG(dstreg) = (DATAREG(dstreg) & ~0xffff) | outdata;

  VFLAG = (((sint16)srcdata < 0) == ((sint16)dstdata < 0)) &&
    (((sint16)dstdata < 0) != ((sint16)outdata < 0));
  XFLAG = CFLAG = srcdata > (0xFFFFu - (uint16)dstdata);
  NFLAG = ((sint16)outdata) < 0;
  ZFLAG = !outdata;
  PC+= 6;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1419a(t_ipc *ipc) /* ADD */ {
  /* mask f1ff, bits d07a, mnemonic 10, priv 0, endblk 0, imm_notzero 0, used 0     set 31, size 2, stype 9, dtype 0, sbitpos 0, dbitpos 9, immvalue 0 */
//type:0 datatype: 9, iib->dtype:0, iib->stype:9
  uint32 srcaddr = ipc->src;
//type:0 datatype: 9, iib->dtype:0, iib->stype:9
  uint16 srcdata = fetchword(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//type:1 datatype: 0, iib->dtype:0, iib->stype:9
  int dstreg = (ipc->opcode >> 9) & 7;
//type:1 datatype: 0, iib->dtype:0, iib->stype:9
  uint16 dstdata = DATAREG(dstreg);

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
//iib->dtype:0, iib->stype:9 init:(sint16)dstdata + (sint16)srcdata
  uint16 outdata = (sint16)dstdata + (sint16)srcdata;

ABORT_OPCODE_CHK();
//type:1  iib->dtype:0, iib->stype:9
  DATAREG(dstreg) = (DATAREG(dstreg) & ~0xffff) | outdata;
  PC+= 4;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1419b(t_ipc *ipc) /* ADD */ {
  /* mask f1ff, bits d07a, mnemonic 10, priv 0, endblk 0, imm_notzero 0, used 0     set 31, size 2, stype 9, dtype 0, sbitpos 0, dbitpos 9, immvalue 0 */
//type:0 datatype: 9, iib->dtype:0, iib->stype:9
  uint32 srcaddr = ipc->src;
//type:0 datatype: 9, iib->dtype:0, iib->stype:9
  uint16 srcdata = fetchword(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//type:1 datatype: 0, iib->dtype:0, iib->stype:9
  int dstreg = (ipc->opcode >> 9) & 7;
//type:1 datatype: 0, iib->dtype:0, iib->stype:9
  uint16 dstdata = DATAREG(dstreg);

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
//iib->dtype:0, iib->stype:9 init:(sint16)dstdata + (sint16)srcdata
  uint16 outdata = (sint16)dstdata + (sint16)srcdata;

ABORT_OPCODE_CHK();
//type:1  iib->dtype:0, iib->stype:9
  DATAREG(dstreg) = (DATAREG(dstreg) & ~0xffff) | outdata;

  VFLAG = (((sint16)srcdata < 0) == ((sint16)dstdata < 0)) &&
    (((sint16)dstdata < 0) != ((sint16)outdata < 0));
  XFLAG = CFLAG = srcdata > (0xFFFFu - (uint16)dstdata);
  NFLAG = ((sint16)outdata) < 0;
  ZFLAG = !outdata;
  PC+= 4;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1420a(t_ipc *ipc) /* ADD */ {
  /* mask f1ff, bits d07b, mnemonic 10, priv 0, endblk 0, imm_notzero 0, used 0     set 31, size 2, stype 10, dtype 0, sbitpos 0, dbitpos 9, immvalue 0 */
//type:0 datatype: 10, iib->dtype:0, iib->stype:10
  uint32 srcaddr = idxval_src(ipc);
//type:0 datatype: 10, iib->dtype:0, iib->stype:10
  uint16 srcdata = fetchword(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//type:1 datatype: 0, iib->dtype:0, iib->stype:10
  int dstreg = (ipc->opcode >> 9) & 7;
//type:1 datatype: 0, iib->dtype:0, iib->stype:10
  uint16 dstdata = DATAREG(dstreg);

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
//iib->dtype:0, iib->stype:10 init:(sint16)dstdata + (sint16)srcdata
  uint16 outdata = (sint16)dstdata + (sint16)srcdata;

ABORT_OPCODE_CHK();
//type:1  iib->dtype:0, iib->stype:10
  DATAREG(dstreg) = (DATAREG(dstreg) & ~0xffff) | outdata;
  PC+= 4;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1420b(t_ipc *ipc) /* ADD */ {
  /* mask f1ff, bits d07b, mnemonic 10, priv 0, endblk 0, imm_notzero 0, used 0     set 31, size 2, stype 10, dtype 0, sbitpos 0, dbitpos 9, immvalue 0 */
//type:0 datatype: 10, iib->dtype:0, iib->stype:10
  uint32 srcaddr = idxval_src(ipc);
//type:0 datatype: 10, iib->dtype:0, iib->stype:10
  uint16 srcdata = fetchword(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//type:1 datatype: 0, iib->dtype:0, iib->stype:10
  int dstreg = (ipc->opcode >> 9) & 7;
//type:1 datatype: 0, iib->dtype:0, iib->stype:10
  uint16 dstdata = DATAREG(dstreg);

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
//iib->dtype:0, iib->stype:10 init:(sint16)dstdata + (sint16)srcdata
  uint16 outdata = (sint16)dstdata + (sint16)srcdata;

ABORT_OPCODE_CHK();
//type:1  iib->dtype:0, iib->stype:10
  DATAREG(dstreg) = (DATAREG(dstreg) & ~0xffff) | outdata;

  VFLAG = (((sint16)srcdata < 0) == ((sint16)dstdata < 0)) &&
    (((sint16)dstdata < 0) != ((sint16)outdata < 0));
  XFLAG = CFLAG = srcdata > (0xFFFFu - (uint16)dstdata);
  NFLAG = ((sint16)outdata) < 0;
  ZFLAG = !outdata;
  PC+= 4;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1421a(t_ipc *ipc) /* ADD */ {
  /* mask f1ff, bits d07c, mnemonic 10, priv 0, endblk 0, imm_notzero 0, used 0     set 31, size 2, stype 12, dtype 0, sbitpos 0, dbitpos 9, immvalue 0 */
//type:0 datatype: 12, iib->dtype:0, iib->stype:12
//type:0 datatype: 12, iib->dtype:0, iib->stype:12
  uint16 srcdata = ipc->src;
//type:1 datatype: 0, iib->dtype:0, iib->stype:12
  int dstreg = (ipc->opcode >> 9) & 7;
//type:1 datatype: 0, iib->dtype:0, iib->stype:12
  uint16 dstdata = DATAREG(dstreg);

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
//iib->dtype:0, iib->stype:12 init:(sint16)dstdata + (sint16)srcdata
  uint16 outdata = (sint16)dstdata + (sint16)srcdata;

ABORT_OPCODE_CHK();
//type:1  iib->dtype:0, iib->stype:12
  DATAREG(dstreg) = (DATAREG(dstreg) & ~0xffff) | outdata;
  PC+= 4;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1421b(t_ipc *ipc) /* ADD */ {
  /* mask f1ff, bits d07c, mnemonic 10, priv 0, endblk 0, imm_notzero 0, used 0     set 31, size 2, stype 12, dtype 0, sbitpos 0, dbitpos 9, immvalue 0 */
//type:0 datatype: 12, iib->dtype:0, iib->stype:12
//type:0 datatype: 12, iib->dtype:0, iib->stype:12
  uint16 srcdata = ipc->src;
//type:1 datatype: 0, iib->dtype:0, iib->stype:12
  int dstreg = (ipc->opcode >> 9) & 7;
//type:1 datatype: 0, iib->dtype:0, iib->stype:12
  uint16 dstdata = DATAREG(dstreg);

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
//iib->dtype:0, iib->stype:12 init:(sint16)dstdata + (sint16)srcdata
  uint16 outdata = (sint16)dstdata + (sint16)srcdata;

ABORT_OPCODE_CHK();
//type:1  iib->dtype:0, iib->stype:12
  DATAREG(dstreg) = (DATAREG(dstreg) & ~0xffff) | outdata;

  VFLAG = (((sint16)srcdata < 0) == ((sint16)dstdata < 0)) &&
    (((sint16)dstdata < 0) != ((sint16)outdata < 0));
  XFLAG = CFLAG = srcdata > (0xFFFFu - (uint16)dstdata);
  NFLAG = ((sint16)outdata) < 0;
  ZFLAG = !outdata;
  PC+= 4;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1422a(t_ipc *ipc) /* ADD */ {
  /* mask f1f8, bits d080, mnemonic 10, priv 0, endblk 0, imm_notzero 0, used 0     set 31, size 3, stype 0, dtype 0, sbitpos 0, dbitpos 9, immvalue 0 */
//type:0 datatype: 0, iib->dtype:0, iib->stype:0
  int srcreg = (ipc->opcode >> 0) & 7;
//type:0 datatype: 0, iib->dtype:0, iib->stype:0
  uint32 srcdata = DATAREG(srcreg);
//type:1 datatype: 0, iib->dtype:0, iib->stype:0
  int dstreg = (ipc->opcode >> 9) & 7;
//type:1 datatype: 0, iib->dtype:0, iib->stype:0
  uint32 dstdata = DATAREG(dstreg);

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
//iib->dtype:0, iib->stype:0 init:(sint32)dstdata + (sint32)srcdata
  uint32 outdata = (sint32)dstdata + (sint32)srcdata;

ABORT_OPCODE_CHK();
//type:1  iib->dtype:0, iib->stype:0
  DATAREG(dstreg) = outdata;
  PC+= 2;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1422b(t_ipc *ipc) /* ADD */ {
  /* mask f1f8, bits d080, mnemonic 10, priv 0, endblk 0, imm_notzero 0, used 0     set 31, size 3, stype 0, dtype 0, sbitpos 0, dbitpos 9, immvalue 0 */
//type:0 datatype: 0, iib->dtype:0, iib->stype:0
  int srcreg = (ipc->opcode >> 0) & 7;
//type:0 datatype: 0, iib->dtype:0, iib->stype:0
  uint32 srcdata = DATAREG(srcreg);
//type:1 datatype: 0, iib->dtype:0, iib->stype:0
  int dstreg = (ipc->opcode >> 9) & 7;
//type:1 datatype: 0, iib->dtype:0, iib->stype:0
  uint32 dstdata = DATAREG(dstreg);

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
//iib->dtype:0, iib->stype:0 init:(sint32)dstdata + (sint32)srcdata
  uint32 outdata = (sint32)dstdata + (sint32)srcdata;

ABORT_OPCODE_CHK();
//type:1  iib->dtype:0, iib->stype:0
  DATAREG(dstreg) = outdata;

  VFLAG = (((sint32)srcdata < 0) == ((sint32)dstdata < 0)) &&
    (((sint32)dstdata < 0) != ((sint32)outdata < 0));
  XFLAG = CFLAG = srcdata > (uint32)~(uint32)dstdata;
  NFLAG = ((sint32)outdata) < 0;
  ZFLAG = !outdata;
  PC+= 2;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1423a(t_ipc *ipc) /* ADD */ {
  /* mask f1f8, bits d088, mnemonic 10, priv 0, endblk 0, imm_notzero 0, used 0     set 31, size 3, stype 1, dtype 0, sbitpos 0, dbitpos 9, immvalue 0 */
//type:0 datatype: 1, iib->dtype:0, iib->stype:1
  int srcreg = (ipc->opcode >> 0) & 7;
//type:0 datatype: 1, iib->dtype:0, iib->stype:1
  uint32 srcdata = ADDRREG(srcreg);
//type:1 datatype: 0, iib->dtype:0, iib->stype:1
  int dstreg = (ipc->opcode >> 9) & 7;
//type:1 datatype: 0, iib->dtype:0, iib->stype:1
  uint32 dstdata = DATAREG(dstreg);

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
//iib->dtype:0, iib->stype:1 init:(sint32)dstdata + (sint32)srcdata
  uint32 outdata = (sint32)dstdata + (sint32)srcdata;

ABORT_OPCODE_CHK();
//type:1  iib->dtype:0, iib->stype:1
  DATAREG(dstreg) = outdata;
  PC+= 2;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1423b(t_ipc *ipc) /* ADD */ {
  /* mask f1f8, bits d088, mnemonic 10, priv 0, endblk 0, imm_notzero 0, used 0     set 31, size 3, stype 1, dtype 0, sbitpos 0, dbitpos 9, immvalue 0 */
//type:0 datatype: 1, iib->dtype:0, iib->stype:1
  int srcreg = (ipc->opcode >> 0) & 7;
//type:0 datatype: 1, iib->dtype:0, iib->stype:1
  uint32 srcdata = ADDRREG(srcreg);
//type:1 datatype: 0, iib->dtype:0, iib->stype:1
  int dstreg = (ipc->opcode >> 9) & 7;
//type:1 datatype: 0, iib->dtype:0, iib->stype:1
  uint32 dstdata = DATAREG(dstreg);

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
//iib->dtype:0, iib->stype:1 init:(sint32)dstdata + (sint32)srcdata
  uint32 outdata = (sint32)dstdata + (sint32)srcdata;

ABORT_OPCODE_CHK();
//type:1  iib->dtype:0, iib->stype:1
  DATAREG(dstreg) = outdata;

  VFLAG = (((sint32)srcdata < 0) == ((sint32)dstdata < 0)) &&
    (((sint32)dstdata < 0) != ((sint32)outdata < 0));
  XFLAG = CFLAG = srcdata > (uint32)~(uint32)dstdata;
  NFLAG = ((sint32)outdata) < 0;
  ZFLAG = !outdata;
  PC+= 2;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1424a(t_ipc *ipc) /* ADD */ {
  /* mask f1f8, bits d090, mnemonic 10, priv 0, endblk 0, imm_notzero 0, used 0     set 31, size 3, stype 2, dtype 0, sbitpos 0, dbitpos 9, immvalue 0 */
//type:0 datatype: 2, iib->dtype:0, iib->stype:2
  int srcreg = (ipc->opcode >> 0) & 7;
  uint32 srcaddr = ADDRREG(srcreg);
//type:0 datatype: 2, iib->dtype:0, iib->stype:2
  uint32 srcdata = fetchlong(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//type:1 datatype: 0, iib->dtype:0, iib->stype:2
  int dstreg = (ipc->opcode >> 9) & 7;
//type:1 datatype: 0, iib->dtype:0, iib->stype:2
  uint32 dstdata = DATAREG(dstreg);

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
//iib->dtype:0, iib->stype:2 init:(sint32)dstdata + (sint32)srcdata
  uint32 outdata = (sint32)dstdata + (sint32)srcdata;

ABORT_OPCODE_CHK();
//type:1  iib->dtype:0, iib->stype:2
  DATAREG(dstreg) = outdata;
  PC+= 2;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1424b(t_ipc *ipc) /* ADD */ {
  /* mask f1f8, bits d090, mnemonic 10, priv 0, endblk 0, imm_notzero 0, used 0     set 31, size 3, stype 2, dtype 0, sbitpos 0, dbitpos 9, immvalue 0 */
//type:0 datatype: 2, iib->dtype:0, iib->stype:2
  int srcreg = (ipc->opcode >> 0) & 7;
  uint32 srcaddr = ADDRREG(srcreg);
//type:0 datatype: 2, iib->dtype:0, iib->stype:2
  uint32 srcdata = fetchlong(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//type:1 datatype: 0, iib->dtype:0, iib->stype:2
  int dstreg = (ipc->opcode >> 9) & 7;
//type:1 datatype: 0, iib->dtype:0, iib->stype:2
  uint32 dstdata = DATAREG(dstreg);

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
//iib->dtype:0, iib->stype:2 init:(sint32)dstdata + (sint32)srcdata
  uint32 outdata = (sint32)dstdata + (sint32)srcdata;

ABORT_OPCODE_CHK();
//type:1  iib->dtype:0, iib->stype:2
  DATAREG(dstreg) = outdata;

  VFLAG = (((sint32)srcdata < 0) == ((sint32)dstdata < 0)) &&
    (((sint32)dstdata < 0) != ((sint32)outdata < 0));
  XFLAG = CFLAG = srcdata > (uint32)~(uint32)dstdata;
  NFLAG = ((sint32)outdata) < 0;
  ZFLAG = !outdata;
  PC+= 2;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1425a(t_ipc *ipc) /* ADD */ {
  /* mask f1f8, bits d098, mnemonic 10, priv 0, endblk 0, imm_notzero 0, used 0     set 31, size 3, stype 3, dtype 0, sbitpos 0, dbitpos 9, immvalue 0 */
//type:0 datatype: 3, iib->dtype:0, iib->stype:3
  int srcreg = (ipc->opcode >> 0) & 7;
  uint32 srcaddr = (ADDRREG(srcreg)+=4, ADDRREG(srcreg)-4);
//type:0 datatype: 3, iib->dtype:0, iib->stype:3
  uint32 srcdata = fetchlong(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//type:1 datatype: 0, iib->dtype:0, iib->stype:3
  int dstreg = (ipc->opcode >> 9) & 7;
//type:1 datatype: 0, iib->dtype:0, iib->stype:3
  uint32 dstdata = DATAREG(dstreg);

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
//iib->dtype:0, iib->stype:3 init:(sint32)dstdata + (sint32)srcdata
  uint32 outdata = (sint32)dstdata + (sint32)srcdata;

ABORT_OPCODE_CHK();
//type:1  iib->dtype:0, iib->stype:3
  DATAREG(dstreg) = outdata;
  PC+= 2;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1425b(t_ipc *ipc) /* ADD */ {
  /* mask f1f8, bits d098, mnemonic 10, priv 0, endblk 0, imm_notzero 0, used 0     set 31, size 3, stype 3, dtype 0, sbitpos 0, dbitpos 9, immvalue 0 */
//type:0 datatype: 3, iib->dtype:0, iib->stype:3
  int srcreg = (ipc->opcode >> 0) & 7;
  uint32 srcaddr = (ADDRREG(srcreg)+=4, ADDRREG(srcreg)-4);
//type:0 datatype: 3, iib->dtype:0, iib->stype:3
  uint32 srcdata = fetchlong(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//type:1 datatype: 0, iib->dtype:0, iib->stype:3
  int dstreg = (ipc->opcode >> 9) & 7;
//type:1 datatype: 0, iib->dtype:0, iib->stype:3
  uint32 dstdata = DATAREG(dstreg);

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
//iib->dtype:0, iib->stype:3 init:(sint32)dstdata + (sint32)srcdata
  uint32 outdata = (sint32)dstdata + (sint32)srcdata;

ABORT_OPCODE_CHK();
//type:1  iib->dtype:0, iib->stype:3
  DATAREG(dstreg) = outdata;

  VFLAG = (((sint32)srcdata < 0) == ((sint32)dstdata < 0)) &&
    (((sint32)dstdata < 0) != ((sint32)outdata < 0));
  XFLAG = CFLAG = srcdata > (uint32)~(uint32)dstdata;
  NFLAG = ((sint32)outdata) < 0;
  ZFLAG = !outdata;
  PC+= 2;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1426a(t_ipc *ipc) /* ADD */ {
  /* mask f1f8, bits d0a0, mnemonic 10, priv 0, endblk 0, imm_notzero 0, used 0     set 31, size 3, stype 4, dtype 0, sbitpos 0, dbitpos 9, immvalue 0 */
//type:0 datatype: 4, iib->dtype:0, iib->stype:4
  int srcreg = (ipc->opcode >> 0) & 7;
  uint32 srcaddr = ADDRREG(srcreg)-=4;
//type:0 datatype: 4, iib->dtype:0, iib->stype:4
  uint32 srcdata = fetchlong(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//type:1 datatype: 0, iib->dtype:0, iib->stype:4
  int dstreg = (ipc->opcode >> 9) & 7;
//type:1 datatype: 0, iib->dtype:0, iib->stype:4
  uint32 dstdata = DATAREG(dstreg);

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
//iib->dtype:0, iib->stype:4 init:(sint32)dstdata + (sint32)srcdata
  uint32 outdata = (sint32)dstdata + (sint32)srcdata;

ABORT_OPCODE_CHK();
//type:1  iib->dtype:0, iib->stype:4
  DATAREG(dstreg) = outdata;
  PC+= 2;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1426b(t_ipc *ipc) /* ADD */ {
  /* mask f1f8, bits d0a0, mnemonic 10, priv 0, endblk 0, imm_notzero 0, used 0     set 31, size 3, stype 4, dtype 0, sbitpos 0, dbitpos 9, immvalue 0 */
//type:0 datatype: 4, iib->dtype:0, iib->stype:4
  int srcreg = (ipc->opcode >> 0) & 7;
  uint32 srcaddr = ADDRREG(srcreg)-=4;
//type:0 datatype: 4, iib->dtype:0, iib->stype:4
  uint32 srcdata = fetchlong(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//type:1 datatype: 0, iib->dtype:0, iib->stype:4
  int dstreg = (ipc->opcode >> 9) & 7;
//type:1 datatype: 0, iib->dtype:0, iib->stype:4
  uint32 dstdata = DATAREG(dstreg);

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
//iib->dtype:0, iib->stype:4 init:(sint32)dstdata + (sint32)srcdata
  uint32 outdata = (sint32)dstdata + (sint32)srcdata;

ABORT_OPCODE_CHK();
//type:1  iib->dtype:0, iib->stype:4
  DATAREG(dstreg) = outdata;

  VFLAG = (((sint32)srcdata < 0) == ((sint32)dstdata < 0)) &&
    (((sint32)dstdata < 0) != ((sint32)outdata < 0));
  XFLAG = CFLAG = srcdata > (uint32)~(uint32)dstdata;
  NFLAG = ((sint32)outdata) < 0;
  ZFLAG = !outdata;
  PC+= 2;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1427a(t_ipc *ipc) /* ADD */ {
  /* mask f1f8, bits d0a8, mnemonic 10, priv 0, endblk 0, imm_notzero 0, used 0     set 31, size 3, stype 5, dtype 0, sbitpos 0, dbitpos 9, immvalue 0 */
//type:0 datatype: 5, iib->dtype:0, iib->stype:5
  int srcreg = (ipc->opcode >> 0) & 7;
  uint32 srcaddr = (sint32)ADDRREG(srcreg) + (sint32)(sint16)ipc->src;
//type:0 datatype: 5, iib->dtype:0, iib->stype:5
  uint32 srcdata = fetchlong(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//type:1 datatype: 0, iib->dtype:0, iib->stype:5
  int dstreg = (ipc->opcode >> 9) & 7;
//type:1 datatype: 0, iib->dtype:0, iib->stype:5
  uint32 dstdata = DATAREG(dstreg);

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
//iib->dtype:0, iib->stype:5 init:(sint32)dstdata + (sint32)srcdata
  uint32 outdata = (sint32)dstdata + (sint32)srcdata;

ABORT_OPCODE_CHK();
//type:1  iib->dtype:0, iib->stype:5
  DATAREG(dstreg) = outdata;
  PC+= 4;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1427b(t_ipc *ipc) /* ADD */ {
  /* mask f1f8, bits d0a8, mnemonic 10, priv 0, endblk 0, imm_notzero 0, used 0     set 31, size 3, stype 5, dtype 0, sbitpos 0, dbitpos 9, immvalue 0 */
//type:0 datatype: 5, iib->dtype:0, iib->stype:5
  int srcreg = (ipc->opcode >> 0) & 7;
  uint32 srcaddr = (sint32)ADDRREG(srcreg) + (sint32)(sint16)ipc->src;
//type:0 datatype: 5, iib->dtype:0, iib->stype:5
  uint32 srcdata = fetchlong(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//type:1 datatype: 0, iib->dtype:0, iib->stype:5
  int dstreg = (ipc->opcode >> 9) & 7;
//type:1 datatype: 0, iib->dtype:0, iib->stype:5
  uint32 dstdata = DATAREG(dstreg);

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
//iib->dtype:0, iib->stype:5 init:(sint32)dstdata + (sint32)srcdata
  uint32 outdata = (sint32)dstdata + (sint32)srcdata;

ABORT_OPCODE_CHK();
//type:1  iib->dtype:0, iib->stype:5
  DATAREG(dstreg) = outdata;

  VFLAG = (((sint32)srcdata < 0) == ((sint32)dstdata < 0)) &&
    (((sint32)dstdata < 0) != ((sint32)outdata < 0));
  XFLAG = CFLAG = srcdata > (uint32)~(uint32)dstdata;
  NFLAG = ((sint32)outdata) < 0;
  ZFLAG = !outdata;
  PC+= 4;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1428a(t_ipc *ipc) /* ADD */ {
  /* mask f1f8, bits d0b0, mnemonic 10, priv 0, endblk 0, imm_notzero 0, used 0     set 31, size 3, stype 6, dtype 0, sbitpos 0, dbitpos 9, immvalue 0 */
//type:0 datatype: 6, iib->dtype:0, iib->stype:6
  int srcreg = (ipc->opcode >> 0) & 7;
  uint32 srcaddr = (sint32)ADDRREG(srcreg) + idxval_src(ipc);
//type:0 datatype: 6, iib->dtype:0, iib->stype:6
  uint32 srcdata = fetchlong(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//type:1 datatype: 0, iib->dtype:0, iib->stype:6
  int dstreg = (ipc->opcode >> 9) & 7;
//type:1 datatype: 0, iib->dtype:0, iib->stype:6
  uint32 dstdata = DATAREG(dstreg);

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
//iib->dtype:0, iib->stype:6 init:(sint32)dstdata + (sint32)srcdata
  uint32 outdata = (sint32)dstdata + (sint32)srcdata;

ABORT_OPCODE_CHK();
//type:1  iib->dtype:0, iib->stype:6
  DATAREG(dstreg) = outdata;
  PC+= 4;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1428b(t_ipc *ipc) /* ADD */ {
  /* mask f1f8, bits d0b0, mnemonic 10, priv 0, endblk 0, imm_notzero 0, used 0     set 31, size 3, stype 6, dtype 0, sbitpos 0, dbitpos 9, immvalue 0 */
//type:0 datatype: 6, iib->dtype:0, iib->stype:6
  int srcreg = (ipc->opcode >> 0) & 7;
  uint32 srcaddr = (sint32)ADDRREG(srcreg) + idxval_src(ipc);
//type:0 datatype: 6, iib->dtype:0, iib->stype:6
  uint32 srcdata = fetchlong(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//type:1 datatype: 0, iib->dtype:0, iib->stype:6
  int dstreg = (ipc->opcode >> 9) & 7;
//type:1 datatype: 0, iib->dtype:0, iib->stype:6
  uint32 dstdata = DATAREG(dstreg);

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
//iib->dtype:0, iib->stype:6 init:(sint32)dstdata + (sint32)srcdata
  uint32 outdata = (sint32)dstdata + (sint32)srcdata;

ABORT_OPCODE_CHK();
//type:1  iib->dtype:0, iib->stype:6
  DATAREG(dstreg) = outdata;

  VFLAG = (((sint32)srcdata < 0) == ((sint32)dstdata < 0)) &&
    (((sint32)dstdata < 0) != ((sint32)outdata < 0));
  XFLAG = CFLAG = srcdata > (uint32)~(uint32)dstdata;
  NFLAG = ((sint32)outdata) < 0;
  ZFLAG = !outdata;
  PC+= 4;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1429a(t_ipc *ipc) /* ADD */ {
  /* mask f1ff, bits d0b8, mnemonic 10, priv 0, endblk 0, imm_notzero 0, used 0     set 31, size 3, stype 7, dtype 0, sbitpos 0, dbitpos 9, immvalue 0 */
//type:0 datatype: 7, iib->dtype:0, iib->stype:7
  uint32 srcaddr = ipc->src;
//type:0 datatype: 7, iib->dtype:0, iib->stype:7
  uint32 srcdata = fetchlong(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//type:1 datatype: 0, iib->dtype:0, iib->stype:7
  int dstreg = (ipc->opcode >> 9) & 7;
//type:1 datatype: 0, iib->dtype:0, iib->stype:7
  uint32 dstdata = DATAREG(dstreg);

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
//iib->dtype:0, iib->stype:7 init:(sint32)dstdata + (sint32)srcdata
  uint32 outdata = (sint32)dstdata + (sint32)srcdata;

ABORT_OPCODE_CHK();
//type:1  iib->dtype:0, iib->stype:7
  DATAREG(dstreg) = outdata;
  PC+= 4;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1429b(t_ipc *ipc) /* ADD */ {
  /* mask f1ff, bits d0b8, mnemonic 10, priv 0, endblk 0, imm_notzero 0, used 0     set 31, size 3, stype 7, dtype 0, sbitpos 0, dbitpos 9, immvalue 0 */
//type:0 datatype: 7, iib->dtype:0, iib->stype:7
  uint32 srcaddr = ipc->src;
//type:0 datatype: 7, iib->dtype:0, iib->stype:7
  uint32 srcdata = fetchlong(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//type:1 datatype: 0, iib->dtype:0, iib->stype:7
  int dstreg = (ipc->opcode >> 9) & 7;
//type:1 datatype: 0, iib->dtype:0, iib->stype:7
  uint32 dstdata = DATAREG(dstreg);

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
//iib->dtype:0, iib->stype:7 init:(sint32)dstdata + (sint32)srcdata
  uint32 outdata = (sint32)dstdata + (sint32)srcdata;

ABORT_OPCODE_CHK();
//type:1  iib->dtype:0, iib->stype:7
  DATAREG(dstreg) = outdata;

  VFLAG = (((sint32)srcdata < 0) == ((sint32)dstdata < 0)) &&
    (((sint32)dstdata < 0) != ((sint32)outdata < 0));
  XFLAG = CFLAG = srcdata > (uint32)~(uint32)dstdata;
  NFLAG = ((sint32)outdata) < 0;
  ZFLAG = !outdata;
  PC+= 4;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1430a(t_ipc *ipc) /* ADD */ {
  /* mask f1ff, bits d0b9, mnemonic 10, priv 0, endblk 0, imm_notzero 0, used 0     set 31, size 3, stype 8, dtype 0, sbitpos 0, dbitpos 9, immvalue 0 */
//type:0 datatype: 8, iib->dtype:0, iib->stype:8
  uint32 srcaddr = ipc->src;
//type:0 datatype: 8, iib->dtype:0, iib->stype:8
  uint32 srcdata = fetchlong(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//type:1 datatype: 0, iib->dtype:0, iib->stype:8
  int dstreg = (ipc->opcode >> 9) & 7;
//type:1 datatype: 0, iib->dtype:0, iib->stype:8
  uint32 dstdata = DATAREG(dstreg);

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
//iib->dtype:0, iib->stype:8 init:(sint32)dstdata + (sint32)srcdata
  uint32 outdata = (sint32)dstdata + (sint32)srcdata;

ABORT_OPCODE_CHK();
//type:1  iib->dtype:0, iib->stype:8
  DATAREG(dstreg) = outdata;
  PC+= 6;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1430b(t_ipc *ipc) /* ADD */ {
  /* mask f1ff, bits d0b9, mnemonic 10, priv 0, endblk 0, imm_notzero 0, used 0     set 31, size 3, stype 8, dtype 0, sbitpos 0, dbitpos 9, immvalue 0 */
//type:0 datatype: 8, iib->dtype:0, iib->stype:8
  uint32 srcaddr = ipc->src;
//type:0 datatype: 8, iib->dtype:0, iib->stype:8
  uint32 srcdata = fetchlong(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//type:1 datatype: 0, iib->dtype:0, iib->stype:8
  int dstreg = (ipc->opcode >> 9) & 7;
//type:1 datatype: 0, iib->dtype:0, iib->stype:8
  uint32 dstdata = DATAREG(dstreg);

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
//iib->dtype:0, iib->stype:8 init:(sint32)dstdata + (sint32)srcdata
  uint32 outdata = (sint32)dstdata + (sint32)srcdata;

ABORT_OPCODE_CHK();
//type:1  iib->dtype:0, iib->stype:8
  DATAREG(dstreg) = outdata;

  VFLAG = (((sint32)srcdata < 0) == ((sint32)dstdata < 0)) &&
    (((sint32)dstdata < 0) != ((sint32)outdata < 0));
  XFLAG = CFLAG = srcdata > (uint32)~(uint32)dstdata;
  NFLAG = ((sint32)outdata) < 0;
  ZFLAG = !outdata;
  PC+= 6;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1431a(t_ipc *ipc) /* ADD */ {
  /* mask f1ff, bits d0ba, mnemonic 10, priv 0, endblk 0, imm_notzero 0, used 0     set 31, size 3, stype 9, dtype 0, sbitpos 0, dbitpos 9, immvalue 0 */
//type:0 datatype: 9, iib->dtype:0, iib->stype:9
  uint32 srcaddr = ipc->src;
//type:0 datatype: 9, iib->dtype:0, iib->stype:9
  uint32 srcdata = fetchlong(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//type:1 datatype: 0, iib->dtype:0, iib->stype:9
  int dstreg = (ipc->opcode >> 9) & 7;
//type:1 datatype: 0, iib->dtype:0, iib->stype:9
  uint32 dstdata = DATAREG(dstreg);

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
//iib->dtype:0, iib->stype:9 init:(sint32)dstdata + (sint32)srcdata
  uint32 outdata = (sint32)dstdata + (sint32)srcdata;

ABORT_OPCODE_CHK();
//type:1  iib->dtype:0, iib->stype:9
  DATAREG(dstreg) = outdata;
  PC+= 4;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1431b(t_ipc *ipc) /* ADD */ {
  /* mask f1ff, bits d0ba, mnemonic 10, priv 0, endblk 0, imm_notzero 0, used 0     set 31, size 3, stype 9, dtype 0, sbitpos 0, dbitpos 9, immvalue 0 */
//type:0 datatype: 9, iib->dtype:0, iib->stype:9
  uint32 srcaddr = ipc->src;
//type:0 datatype: 9, iib->dtype:0, iib->stype:9
  uint32 srcdata = fetchlong(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//type:1 datatype: 0, iib->dtype:0, iib->stype:9
  int dstreg = (ipc->opcode >> 9) & 7;
//type:1 datatype: 0, iib->dtype:0, iib->stype:9
  uint32 dstdata = DATAREG(dstreg);

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
//iib->dtype:0, iib->stype:9 init:(sint32)dstdata + (sint32)srcdata
  uint32 outdata = (sint32)dstdata + (sint32)srcdata;

ABORT_OPCODE_CHK();
//type:1  iib->dtype:0, iib->stype:9
  DATAREG(dstreg) = outdata;

  VFLAG = (((sint32)srcdata < 0) == ((sint32)dstdata < 0)) &&
    (((sint32)dstdata < 0) != ((sint32)outdata < 0));
  XFLAG = CFLAG = srcdata > (uint32)~(uint32)dstdata;
  NFLAG = ((sint32)outdata) < 0;
  ZFLAG = !outdata;
  PC+= 4;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1432a(t_ipc *ipc) /* ADD */ {
  /* mask f1ff, bits d0bb, mnemonic 10, priv 0, endblk 0, imm_notzero 0, used 0     set 31, size 3, stype 10, dtype 0, sbitpos 0, dbitpos 9, immvalue 0 */
//type:0 datatype: 10, iib->dtype:0, iib->stype:10
  uint32 srcaddr = idxval_src(ipc);
//type:0 datatype: 10, iib->dtype:0, iib->stype:10
  uint32 srcdata = fetchlong(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//type:1 datatype: 0, iib->dtype:0, iib->stype:10
  int dstreg = (ipc->opcode >> 9) & 7;
//type:1 datatype: 0, iib->dtype:0, iib->stype:10
  uint32 dstdata = DATAREG(dstreg);

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
//iib->dtype:0, iib->stype:10 init:(sint32)dstdata + (sint32)srcdata
  uint32 outdata = (sint32)dstdata + (sint32)srcdata;

ABORT_OPCODE_CHK();
//type:1  iib->dtype:0, iib->stype:10
  DATAREG(dstreg) = outdata;
  PC+= 4;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1432b(t_ipc *ipc) /* ADD */ {
  /* mask f1ff, bits d0bb, mnemonic 10, priv 0, endblk 0, imm_notzero 0, used 0     set 31, size 3, stype 10, dtype 0, sbitpos 0, dbitpos 9, immvalue 0 */
//type:0 datatype: 10, iib->dtype:0, iib->stype:10
  uint32 srcaddr = idxval_src(ipc);
//type:0 datatype: 10, iib->dtype:0, iib->stype:10
  uint32 srcdata = fetchlong(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//type:1 datatype: 0, iib->dtype:0, iib->stype:10
  int dstreg = (ipc->opcode >> 9) & 7;
//type:1 datatype: 0, iib->dtype:0, iib->stype:10
  uint32 dstdata = DATAREG(dstreg);

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
//iib->dtype:0, iib->stype:10 init:(sint32)dstdata + (sint32)srcdata
  uint32 outdata = (sint32)dstdata + (sint32)srcdata;

ABORT_OPCODE_CHK();
//type:1  iib->dtype:0, iib->stype:10
  DATAREG(dstreg) = outdata;

  VFLAG = (((sint32)srcdata < 0) == ((sint32)dstdata < 0)) &&
    (((sint32)dstdata < 0) != ((sint32)outdata < 0));
  XFLAG = CFLAG = srcdata > (uint32)~(uint32)dstdata;
  NFLAG = ((sint32)outdata) < 0;
  ZFLAG = !outdata;
  PC+= 4;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1433a(t_ipc *ipc) /* ADD */ {
  /* mask f1ff, bits d0bc, mnemonic 10, priv 0, endblk 0, imm_notzero 0, used 0     set 31, size 3, stype 13, dtype 0, sbitpos 0, dbitpos 9, immvalue 0 */
//type:0 datatype: 13, iib->dtype:0, iib->stype:13
//type:0 datatype: 13, iib->dtype:0, iib->stype:13
  uint32 srcdata = ipc->src;
//type:1 datatype: 0, iib->dtype:0, iib->stype:13
  int dstreg = (ipc->opcode >> 9) & 7;
//type:1 datatype: 0, iib->dtype:0, iib->stype:13
  uint32 dstdata = DATAREG(dstreg);

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
//iib->dtype:0, iib->stype:13 init:(sint32)dstdata + (sint32)srcdata
  uint32 outdata = (sint32)dstdata + (sint32)srcdata;

ABORT_OPCODE_CHK();
//type:1  iib->dtype:0, iib->stype:13
  DATAREG(dstreg) = outdata;
  PC+= 6;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1433b(t_ipc *ipc) /* ADD */ {
  /* mask f1ff, bits d0bc, mnemonic 10, priv 0, endblk 0, imm_notzero 0, used 0     set 31, size 3, stype 13, dtype 0, sbitpos 0, dbitpos 9, immvalue 0 */
//type:0 datatype: 13, iib->dtype:0, iib->stype:13
//type:0 datatype: 13, iib->dtype:0, iib->stype:13
  uint32 srcdata = ipc->src;
//type:1 datatype: 0, iib->dtype:0, iib->stype:13
  int dstreg = (ipc->opcode >> 9) & 7;
//type:1 datatype: 0, iib->dtype:0, iib->stype:13
  uint32 dstdata = DATAREG(dstreg);

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
//iib->dtype:0, iib->stype:13 init:(sint32)dstdata + (sint32)srcdata
  uint32 outdata = (sint32)dstdata + (sint32)srcdata;

ABORT_OPCODE_CHK();
//type:1  iib->dtype:0, iib->stype:13
  DATAREG(dstreg) = outdata;

  VFLAG = (((sint32)srcdata < 0) == ((sint32)dstdata < 0)) &&
    (((sint32)dstdata < 0) != ((sint32)outdata < 0));
  XFLAG = CFLAG = srcdata > (uint32)~(uint32)dstdata;
  NFLAG = ((sint32)outdata) < 0;
  ZFLAG = !outdata;
  PC+= 6;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1434a(t_ipc *ipc) /* ADD */ {
  /* mask f1f8, bits d110, mnemonic 10, priv 0, endblk 0, imm_notzero 0, used 0     set 31, size 1, stype 0, dtype 2, sbitpos 9, dbitpos 0, immvalue 0 */
//type:0 datatype: 0, iib->dtype:2, iib->stype:0
  int srcreg = (ipc->opcode >> 9) & 7;
//type:0 datatype: 0, iib->dtype:2, iib->stype:0
  uint8 srcdata = DATAREG(srcreg);
//type:1 datatype: 2, iib->dtype:2, iib->stype:0
  int dstreg = (ipc->opcode >> 0) & 7;
  uint32 dstaddr = ADDRREG(dstreg);
//type:1 datatype: 2, iib->dtype:2, iib->stype:0
  uint8 dstdata = fetchbyte(dstaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
//iib->dtype:2, iib->stype:0 init:(sint8)dstdata + (sint8)srcdata
  uint8 outdata = (sint8)dstdata + (sint8)srcdata;

ABORT_OPCODE_CHK();
//type:1  iib->dtype:2, iib->stype:0
  storebyte(dstaddr, outdata);

ABORT_OPCODE_CHK();
  PC+= 2;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1434b(t_ipc *ipc) /* ADD */ {
  /* mask f1f8, bits d110, mnemonic 10, priv 0, endblk 0, imm_notzero 0, used 0     set 31, size 1, stype 0, dtype 2, sbitpos 9, dbitpos 0, immvalue 0 */
//type:0 datatype: 0, iib->dtype:2, iib->stype:0
  int srcreg = (ipc->opcode >> 9) & 7;
//type:0 datatype: 0, iib->dtype:2, iib->stype:0
  uint8 srcdata = DATAREG(srcreg);
//type:1 datatype: 2, iib->dtype:2, iib->stype:0
  int dstreg = (ipc->opcode >> 0) & 7;
  uint32 dstaddr = ADDRREG(dstreg);
//type:1 datatype: 2, iib->dtype:2, iib->stype:0
  uint8 dstdata = fetchbyte(dstaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
//iib->dtype:2, iib->stype:0 init:(sint8)dstdata + (sint8)srcdata
  uint8 outdata = (sint8)dstdata + (sint8)srcdata;

ABORT_OPCODE_CHK();
//type:1  iib->dtype:2, iib->stype:0
  storebyte(dstaddr, outdata);

ABORT_OPCODE_CHK();

  VFLAG = (((sint8)srcdata < 0) == ((sint8)dstdata < 0)) &&
    (((sint8)dstdata < 0) != ((sint8)outdata < 0));
  XFLAG = CFLAG = srcdata > (0xFFu - (uint8)dstdata);
  NFLAG = ((sint8)outdata) < 0;
  ZFLAG = !outdata;
  PC+= 2;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1435a(t_ipc *ipc) /* ADD */ {
  /* mask f1f8, bits d118, mnemonic 10, priv 0, endblk 0, imm_notzero 0, used 0     set 31, size 1, stype 0, dtype 3, sbitpos 9, dbitpos 0, immvalue 0 */
//type:0 datatype: 0, iib->dtype:3, iib->stype:0
  int srcreg = (ipc->opcode >> 9) & 7;
//type:0 datatype: 0, iib->dtype:3, iib->stype:0
  uint8 srcdata = DATAREG(srcreg);
//type:1 datatype: 3, iib->dtype:3, iib->stype:0
  int dstreg = (ipc->opcode >> 0) & 7;
  uint32 dstaddr = ADDRREG(dstreg);
  uint32 dstaddr_tmp = (ADDRREG(dstreg)+= (dstreg == 7 ? 2 : 1), 0);
//type:1 datatype: 3, iib->dtype:3, iib->stype:0
  uint8 dstdata = fetchbyte(dstaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
//iib->dtype:3, iib->stype:0 init:(sint8)dstdata + (sint8)srcdata
  uint8 outdata = (sint8)dstdata + (sint8)srcdata;

ABORT_OPCODE_CHK();
//type:1  iib->dtype:3, iib->stype:0
  storebyte(dstaddr, outdata);

ABORT_OPCODE_CHK();
  PC+= 2;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1435b(t_ipc *ipc) /* ADD */ {
  /* mask f1f8, bits d118, mnemonic 10, priv 0, endblk 0, imm_notzero 0, used 0     set 31, size 1, stype 0, dtype 3, sbitpos 9, dbitpos 0, immvalue 0 */
//type:0 datatype: 0, iib->dtype:3, iib->stype:0
  int srcreg = (ipc->opcode >> 9) & 7;
//type:0 datatype: 0, iib->dtype:3, iib->stype:0
  uint8 srcdata = DATAREG(srcreg);
//type:1 datatype: 3, iib->dtype:3, iib->stype:0
  int dstreg = (ipc->opcode >> 0) & 7;
  uint32 dstaddr = ADDRREG(dstreg);
  uint32 dstaddr_tmp = (ADDRREG(dstreg)+= (dstreg == 7 ? 2 : 1), 0);
//type:1 datatype: 3, iib->dtype:3, iib->stype:0
  uint8 dstdata = fetchbyte(dstaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
//iib->dtype:3, iib->stype:0 init:(sint8)dstdata + (sint8)srcdata
  uint8 outdata = (sint8)dstdata + (sint8)srcdata;

ABORT_OPCODE_CHK();
//type:1  iib->dtype:3, iib->stype:0
  storebyte(dstaddr, outdata);

ABORT_OPCODE_CHK();

  VFLAG = (((sint8)srcdata < 0) == ((sint8)dstdata < 0)) &&
    (((sint8)dstdata < 0) != ((sint8)outdata < 0));
  XFLAG = CFLAG = srcdata > (0xFFu - (uint8)dstdata);
  NFLAG = ((sint8)outdata) < 0;
  ZFLAG = !outdata;
  PC+= 2;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1436a(t_ipc *ipc) /* ADD */ {
  /* mask f1f8, bits d120, mnemonic 10, priv 0, endblk 0, imm_notzero 0, used 0     set 31, size 1, stype 0, dtype 4, sbitpos 9, dbitpos 0, immvalue 0 */
//type:0 datatype: 0, iib->dtype:4, iib->stype:0
  int srcreg = (ipc->opcode >> 9) & 7;
//type:0 datatype: 0, iib->dtype:4, iib->stype:0
  uint8 srcdata = DATAREG(srcreg);
//type:1 datatype: 4, iib->dtype:4, iib->stype:0
  int dstreg = (ipc->opcode >> 0) & 7;
  uint32 dstaddr = (ADDRREG(dstreg)-= (dstreg == 7 ? 2 : 1));
//type:1 datatype: 4, iib->dtype:4, iib->stype:0
  uint8 dstdata = fetchbyte(dstaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
//iib->dtype:4, iib->stype:0 init:(sint8)dstdata + (sint8)srcdata
  uint8 outdata = (sint8)dstdata + (sint8)srcdata;

ABORT_OPCODE_CHK();
//type:1  iib->dtype:4, iib->stype:0
  storebyte(dstaddr, outdata);

ABORT_OPCODE_CHK();
  PC+= 2;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1436b(t_ipc *ipc) /* ADD */ {
  /* mask f1f8, bits d120, mnemonic 10, priv 0, endblk 0, imm_notzero 0, used 0     set 31, size 1, stype 0, dtype 4, sbitpos 9, dbitpos 0, immvalue 0 */
//type:0 datatype: 0, iib->dtype:4, iib->stype:0
  int srcreg = (ipc->opcode >> 9) & 7;
//type:0 datatype: 0, iib->dtype:4, iib->stype:0
  uint8 srcdata = DATAREG(srcreg);
//type:1 datatype: 4, iib->dtype:4, iib->stype:0
  int dstreg = (ipc->opcode >> 0) & 7;
  uint32 dstaddr = (ADDRREG(dstreg)-= (dstreg == 7 ? 2 : 1));
//type:1 datatype: 4, iib->dtype:4, iib->stype:0
  uint8 dstdata = fetchbyte(dstaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
//iib->dtype:4, iib->stype:0 init:(sint8)dstdata + (sint8)srcdata
  uint8 outdata = (sint8)dstdata + (sint8)srcdata;

ABORT_OPCODE_CHK();
//type:1  iib->dtype:4, iib->stype:0
  storebyte(dstaddr, outdata);

ABORT_OPCODE_CHK();

  VFLAG = (((sint8)srcdata < 0) == ((sint8)dstdata < 0)) &&
    (((sint8)dstdata < 0) != ((sint8)outdata < 0));
  XFLAG = CFLAG = srcdata > (0xFFu - (uint8)dstdata);
  NFLAG = ((sint8)outdata) < 0;
  ZFLAG = !outdata;
  PC+= 2;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1437a(t_ipc *ipc) /* ADD */ {
  /* mask f1f8, bits d128, mnemonic 10, priv 0, endblk 0, imm_notzero 0, used 0     set 31, size 1, stype 0, dtype 5, sbitpos 9, dbitpos 0, immvalue 0 */
//type:0 datatype: 0, iib->dtype:5, iib->stype:0
  int srcreg = (ipc->opcode >> 9) & 7;
//type:0 datatype: 0, iib->dtype:5, iib->stype:0
  uint8 srcdata = DATAREG(srcreg);
//type:1 datatype: 5, iib->dtype:5, iib->stype:0
  int dstreg = (ipc->opcode >> 0) & 7;
  uint32 dstaddr = (sint32)ADDRREG(dstreg) + (sint32)(sint16)ipc->dst;
//type:1 datatype: 5, iib->dtype:5, iib->stype:0
  uint8 dstdata = fetchbyte(dstaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
//iib->dtype:5, iib->stype:0 init:(sint8)dstdata + (sint8)srcdata
  uint8 outdata = (sint8)dstdata + (sint8)srcdata;

ABORT_OPCODE_CHK();
//type:1  iib->dtype:5, iib->stype:0
  storebyte(dstaddr, outdata);

ABORT_OPCODE_CHK();
  PC+= 4;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1437b(t_ipc *ipc) /* ADD */ {
  /* mask f1f8, bits d128, mnemonic 10, priv 0, endblk 0, imm_notzero 0, used 0     set 31, size 1, stype 0, dtype 5, sbitpos 9, dbitpos 0, immvalue 0 */
//type:0 datatype: 0, iib->dtype:5, iib->stype:0
  int srcreg = (ipc->opcode >> 9) & 7;
//type:0 datatype: 0, iib->dtype:5, iib->stype:0
  uint8 srcdata = DATAREG(srcreg);
//type:1 datatype: 5, iib->dtype:5, iib->stype:0
  int dstreg = (ipc->opcode >> 0) & 7;
  uint32 dstaddr = (sint32)ADDRREG(dstreg) + (sint32)(sint16)ipc->dst;
//type:1 datatype: 5, iib->dtype:5, iib->stype:0
  uint8 dstdata = fetchbyte(dstaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
//iib->dtype:5, iib->stype:0 init:(sint8)dstdata + (sint8)srcdata
  uint8 outdata = (sint8)dstdata + (sint8)srcdata;

ABORT_OPCODE_CHK();
//type:1  iib->dtype:5, iib->stype:0
  storebyte(dstaddr, outdata);

ABORT_OPCODE_CHK();

  VFLAG = (((sint8)srcdata < 0) == ((sint8)dstdata < 0)) &&
    (((sint8)dstdata < 0) != ((sint8)outdata < 0));
  XFLAG = CFLAG = srcdata > (0xFFu - (uint8)dstdata);
  NFLAG = ((sint8)outdata) < 0;
  ZFLAG = !outdata;
  PC+= 4;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1438a(t_ipc *ipc) /* ADD */ {
  /* mask f1f8, bits d130, mnemonic 10, priv 0, endblk 0, imm_notzero 0, used 0     set 31, size 1, stype 0, dtype 6, sbitpos 9, dbitpos 0, immvalue 0 */
//type:0 datatype: 0, iib->dtype:6, iib->stype:0
  int srcreg = (ipc->opcode >> 9) & 7;
//type:0 datatype: 0, iib->dtype:6, iib->stype:0
  uint8 srcdata = DATAREG(srcreg);
//type:1 datatype: 6, iib->dtype:6, iib->stype:0
  int dstreg = (ipc->opcode >> 0) & 7;
  uint32 dstaddr = (sint32)ADDRREG(dstreg) + idxval_dst(ipc);
//type:1 datatype: 6, iib->dtype:6, iib->stype:0
  uint8 dstdata = fetchbyte(dstaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
//iib->dtype:6, iib->stype:0 init:(sint8)dstdata + (sint8)srcdata
  uint8 outdata = (sint8)dstdata + (sint8)srcdata;

ABORT_OPCODE_CHK();
//type:1  iib->dtype:6, iib->stype:0
  storebyte(dstaddr, outdata);

ABORT_OPCODE_CHK();
  PC+= 4;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1438b(t_ipc *ipc) /* ADD */ {
  /* mask f1f8, bits d130, mnemonic 10, priv 0, endblk 0, imm_notzero 0, used 0     set 31, size 1, stype 0, dtype 6, sbitpos 9, dbitpos 0, immvalue 0 */
//type:0 datatype: 0, iib->dtype:6, iib->stype:0
  int srcreg = (ipc->opcode >> 9) & 7;
//type:0 datatype: 0, iib->dtype:6, iib->stype:0
  uint8 srcdata = DATAREG(srcreg);
//type:1 datatype: 6, iib->dtype:6, iib->stype:0
  int dstreg = (ipc->opcode >> 0) & 7;
  uint32 dstaddr = (sint32)ADDRREG(dstreg) + idxval_dst(ipc);
//type:1 datatype: 6, iib->dtype:6, iib->stype:0
  uint8 dstdata = fetchbyte(dstaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
//iib->dtype:6, iib->stype:0 init:(sint8)dstdata + (sint8)srcdata
  uint8 outdata = (sint8)dstdata + (sint8)srcdata;

ABORT_OPCODE_CHK();
//type:1  iib->dtype:6, iib->stype:0
  storebyte(dstaddr, outdata);

ABORT_OPCODE_CHK();

  VFLAG = (((sint8)srcdata < 0) == ((sint8)dstdata < 0)) &&
    (((sint8)dstdata < 0) != ((sint8)outdata < 0));
  XFLAG = CFLAG = srcdata > (0xFFu - (uint8)dstdata);
  NFLAG = ((sint8)outdata) < 0;
  ZFLAG = !outdata;
  PC+= 4;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1439a(t_ipc *ipc) /* ADD */ {
  /* mask f1ff, bits d138, mnemonic 10, priv 0, endblk 0, imm_notzero 0, used 0     set 31, size 1, stype 0, dtype 7, sbitpos 9, dbitpos 0, immvalue 0 */
//type:0 datatype: 0, iib->dtype:7, iib->stype:0
  int srcreg = (ipc->opcode >> 9) & 7;
//type:0 datatype: 0, iib->dtype:7, iib->stype:0
  uint8 srcdata = DATAREG(srcreg);
//type:1 datatype: 7, iib->dtype:7, iib->stype:0
  uint32 dstaddr = ipc->dst;
//type:1 datatype: 7, iib->dtype:7, iib->stype:0
  uint8 dstdata = fetchbyte(dstaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
//iib->dtype:7, iib->stype:0 init:(sint8)dstdata + (sint8)srcdata
  uint8 outdata = (sint8)dstdata + (sint8)srcdata;

ABORT_OPCODE_CHK();
//type:1  iib->dtype:7, iib->stype:0
  storebyte(dstaddr, outdata);

ABORT_OPCODE_CHK();
  PC+= 4;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1439b(t_ipc *ipc) /* ADD */ {
  /* mask f1ff, bits d138, mnemonic 10, priv 0, endblk 0, imm_notzero 0, used 0     set 31, size 1, stype 0, dtype 7, sbitpos 9, dbitpos 0, immvalue 0 */
//type:0 datatype: 0, iib->dtype:7, iib->stype:0
  int srcreg = (ipc->opcode >> 9) & 7;
//type:0 datatype: 0, iib->dtype:7, iib->stype:0
  uint8 srcdata = DATAREG(srcreg);
//type:1 datatype: 7, iib->dtype:7, iib->stype:0
  uint32 dstaddr = ipc->dst;
//type:1 datatype: 7, iib->dtype:7, iib->stype:0
  uint8 dstdata = fetchbyte(dstaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
//iib->dtype:7, iib->stype:0 init:(sint8)dstdata + (sint8)srcdata
  uint8 outdata = (sint8)dstdata + (sint8)srcdata;

ABORT_OPCODE_CHK();
//type:1  iib->dtype:7, iib->stype:0
  storebyte(dstaddr, outdata);

ABORT_OPCODE_CHK();

  VFLAG = (((sint8)srcdata < 0) == ((sint8)dstdata < 0)) &&
    (((sint8)dstdata < 0) != ((sint8)outdata < 0));
  XFLAG = CFLAG = srcdata > (0xFFu - (uint8)dstdata);
  NFLAG = ((sint8)outdata) < 0;
  ZFLAG = !outdata;
  PC+= 4;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1440a(t_ipc *ipc) /* ADD */ {
  /* mask f1ff, bits d139, mnemonic 10, priv 0, endblk 0, imm_notzero 0, used 0     set 31, size 1, stype 0, dtype 8, sbitpos 9, dbitpos 0, immvalue 0 */
//type:0 datatype: 0, iib->dtype:8, iib->stype:0
  int srcreg = (ipc->opcode >> 9) & 7;
//type:0 datatype: 0, iib->dtype:8, iib->stype:0
  uint8 srcdata = DATAREG(srcreg);
//type:1 datatype: 8, iib->dtype:8, iib->stype:0
  uint32 dstaddr = ipc->dst;
//type:1 datatype: 8, iib->dtype:8, iib->stype:0
  uint8 dstdata = fetchbyte(dstaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
//iib->dtype:8, iib->stype:0 init:(sint8)dstdata + (sint8)srcdata
  uint8 outdata = (sint8)dstdata + (sint8)srcdata;

ABORT_OPCODE_CHK();
//type:1  iib->dtype:8, iib->stype:0
  storebyte(dstaddr, outdata);

ABORT_OPCODE_CHK();
  PC+= 6;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1440b(t_ipc *ipc) /* ADD */ {
  /* mask f1ff, bits d139, mnemonic 10, priv 0, endblk 0, imm_notzero 0, used 0     set 31, size 1, stype 0, dtype 8, sbitpos 9, dbitpos 0, immvalue 0 */
//type:0 datatype: 0, iib->dtype:8, iib->stype:0
  int srcreg = (ipc->opcode >> 9) & 7;
//type:0 datatype: 0, iib->dtype:8, iib->stype:0
  uint8 srcdata = DATAREG(srcreg);
//type:1 datatype: 8, iib->dtype:8, iib->stype:0
  uint32 dstaddr = ipc->dst;
//type:1 datatype: 8, iib->dtype:8, iib->stype:0
  uint8 dstdata = fetchbyte(dstaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
//iib->dtype:8, iib->stype:0 init:(sint8)dstdata + (sint8)srcdata
  uint8 outdata = (sint8)dstdata + (sint8)srcdata;

ABORT_OPCODE_CHK();
//type:1  iib->dtype:8, iib->stype:0
  storebyte(dstaddr, outdata);

ABORT_OPCODE_CHK();

  VFLAG = (((sint8)srcdata < 0) == ((sint8)dstdata < 0)) &&
    (((sint8)dstdata < 0) != ((sint8)outdata < 0));
  XFLAG = CFLAG = srcdata > (0xFFu - (uint8)dstdata);
  NFLAG = ((sint8)outdata) < 0;
  ZFLAG = !outdata;
  PC+= 6;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1441a(t_ipc *ipc) /* ADD */ {
  /* mask f1f8, bits d150, mnemonic 10, priv 0, endblk 0, imm_notzero 0, used 0     set 31, size 2, stype 0, dtype 2, sbitpos 9, dbitpos 0, immvalue 0 */
//type:0 datatype: 0, iib->dtype:2, iib->stype:0
  int srcreg = (ipc->opcode >> 9) & 7;
//type:0 datatype: 0, iib->dtype:2, iib->stype:0
  uint16 srcdata = DATAREG(srcreg);
//type:1 datatype: 2, iib->dtype:2, iib->stype:0
  int dstreg = (ipc->opcode >> 0) & 7;
  uint32 dstaddr = ADDRREG(dstreg);
//type:1 datatype: 2, iib->dtype:2, iib->stype:0
  uint16 dstdata = fetchword(dstaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
//iib->dtype:2, iib->stype:0 init:(sint16)dstdata + (sint16)srcdata
  uint16 outdata = (sint16)dstdata + (sint16)srcdata;

ABORT_OPCODE_CHK();
//type:1  iib->dtype:2, iib->stype:0
  storeword(dstaddr, outdata);

ABORT_OPCODE_CHK();
  PC+= 2;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1441b(t_ipc *ipc) /* ADD */ {
  /* mask f1f8, bits d150, mnemonic 10, priv 0, endblk 0, imm_notzero 0, used 0     set 31, size 2, stype 0, dtype 2, sbitpos 9, dbitpos 0, immvalue 0 */
//type:0 datatype: 0, iib->dtype:2, iib->stype:0
  int srcreg = (ipc->opcode >> 9) & 7;
//type:0 datatype: 0, iib->dtype:2, iib->stype:0
  uint16 srcdata = DATAREG(srcreg);
//type:1 datatype: 2, iib->dtype:2, iib->stype:0
  int dstreg = (ipc->opcode >> 0) & 7;
  uint32 dstaddr = ADDRREG(dstreg);
//type:1 datatype: 2, iib->dtype:2, iib->stype:0
  uint16 dstdata = fetchword(dstaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
//iib->dtype:2, iib->stype:0 init:(sint16)dstdata + (sint16)srcdata
  uint16 outdata = (sint16)dstdata + (sint16)srcdata;

ABORT_OPCODE_CHK();
//type:1  iib->dtype:2, iib->stype:0
  storeword(dstaddr, outdata);

ABORT_OPCODE_CHK();

  VFLAG = (((sint16)srcdata < 0) == ((sint16)dstdata < 0)) &&
    (((sint16)dstdata < 0) != ((sint16)outdata < 0));
  XFLAG = CFLAG = srcdata > (0xFFFFu - (uint16)dstdata);
  NFLAG = ((sint16)outdata) < 0;
  ZFLAG = !outdata;
  PC+= 2;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1442a(t_ipc *ipc) /* ADD */ {
  /* mask f1f8, bits d158, mnemonic 10, priv 0, endblk 0, imm_notzero 0, used 0     set 31, size 2, stype 0, dtype 3, sbitpos 9, dbitpos 0, immvalue 0 */
//type:0 datatype: 0, iib->dtype:3, iib->stype:0
  int srcreg = (ipc->opcode >> 9) & 7;
//type:0 datatype: 0, iib->dtype:3, iib->stype:0
  uint16 srcdata = DATAREG(srcreg);
//type:1 datatype: 3, iib->dtype:3, iib->stype:0
  int dstreg = (ipc->opcode >> 0) & 7;
  uint32 dstaddr = (ADDRREG(dstreg)+=2, ADDRREG(dstreg)-2);
//type:1 datatype: 3, iib->dtype:3, iib->stype:0
  uint16 dstdata = fetchword(dstaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
//iib->dtype:3, iib->stype:0 init:(sint16)dstdata + (sint16)srcdata
  uint16 outdata = (sint16)dstdata + (sint16)srcdata;

ABORT_OPCODE_CHK();
//type:1  iib->dtype:3, iib->stype:0
  storeword(dstaddr, outdata);

ABORT_OPCODE_CHK();
  PC+= 2;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1442b(t_ipc *ipc) /* ADD */ {
  /* mask f1f8, bits d158, mnemonic 10, priv 0, endblk 0, imm_notzero 0, used 0     set 31, size 2, stype 0, dtype 3, sbitpos 9, dbitpos 0, immvalue 0 */
//type:0 datatype: 0, iib->dtype:3, iib->stype:0
  int srcreg = (ipc->opcode >> 9) & 7;
//type:0 datatype: 0, iib->dtype:3, iib->stype:0
  uint16 srcdata = DATAREG(srcreg);
//type:1 datatype: 3, iib->dtype:3, iib->stype:0
  int dstreg = (ipc->opcode >> 0) & 7;
  uint32 dstaddr = (ADDRREG(dstreg)+=2, ADDRREG(dstreg)-2);
//type:1 datatype: 3, iib->dtype:3, iib->stype:0
  uint16 dstdata = fetchword(dstaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
//iib->dtype:3, iib->stype:0 init:(sint16)dstdata + (sint16)srcdata
  uint16 outdata = (sint16)dstdata + (sint16)srcdata;

ABORT_OPCODE_CHK();
//type:1  iib->dtype:3, iib->stype:0
  storeword(dstaddr, outdata);

ABORT_OPCODE_CHK();

  VFLAG = (((sint16)srcdata < 0) == ((sint16)dstdata < 0)) &&
    (((sint16)dstdata < 0) != ((sint16)outdata < 0));
  XFLAG = CFLAG = srcdata > (0xFFFFu - (uint16)dstdata);
  NFLAG = ((sint16)outdata) < 0;
  ZFLAG = !outdata;
  PC+= 2;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1443a(t_ipc *ipc) /* ADD */ {
  /* mask f1f8, bits d160, mnemonic 10, priv 0, endblk 0, imm_notzero 0, used 0     set 31, size 2, stype 0, dtype 4, sbitpos 9, dbitpos 0, immvalue 0 */
//type:0 datatype: 0, iib->dtype:4, iib->stype:0
  int srcreg = (ipc->opcode >> 9) & 7;
//type:0 datatype: 0, iib->dtype:4, iib->stype:0
  uint16 srcdata = DATAREG(srcreg);
//type:1 datatype: 4, iib->dtype:4, iib->stype:0
  int dstreg = (ipc->opcode >> 0) & 7;
  uint32 dstaddr = ADDRREG(dstreg)-=2;
//type:1 datatype: 4, iib->dtype:4, iib->stype:0
  uint16 dstdata = fetchword(dstaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
//iib->dtype:4, iib->stype:0 init:(sint16)dstdata + (sint16)srcdata
  uint16 outdata = (sint16)dstdata + (sint16)srcdata;

ABORT_OPCODE_CHK();
//type:1  iib->dtype:4, iib->stype:0
  storeword(dstaddr, outdata);

ABORT_OPCODE_CHK();
  PC+= 2;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1443b(t_ipc *ipc) /* ADD */ {
  /* mask f1f8, bits d160, mnemonic 10, priv 0, endblk 0, imm_notzero 0, used 0     set 31, size 2, stype 0, dtype 4, sbitpos 9, dbitpos 0, immvalue 0 */
//type:0 datatype: 0, iib->dtype:4, iib->stype:0
  int srcreg = (ipc->opcode >> 9) & 7;
//type:0 datatype: 0, iib->dtype:4, iib->stype:0
  uint16 srcdata = DATAREG(srcreg);
//type:1 datatype: 4, iib->dtype:4, iib->stype:0
  int dstreg = (ipc->opcode >> 0) & 7;
  uint32 dstaddr = ADDRREG(dstreg)-=2;
//type:1 datatype: 4, iib->dtype:4, iib->stype:0
  uint16 dstdata = fetchword(dstaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
//iib->dtype:4, iib->stype:0 init:(sint16)dstdata + (sint16)srcdata
  uint16 outdata = (sint16)dstdata + (sint16)srcdata;

ABORT_OPCODE_CHK();
//type:1  iib->dtype:4, iib->stype:0
  storeword(dstaddr, outdata);

ABORT_OPCODE_CHK();

  VFLAG = (((sint16)srcdata < 0) == ((sint16)dstdata < 0)) &&
    (((sint16)dstdata < 0) != ((sint16)outdata < 0));
  XFLAG = CFLAG = srcdata > (0xFFFFu - (uint16)dstdata);
  NFLAG = ((sint16)outdata) < 0;
  ZFLAG = !outdata;
  PC+= 2;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1444a(t_ipc *ipc) /* ADD */ {
  /* mask f1f8, bits d168, mnemonic 10, priv 0, endblk 0, imm_notzero 0, used 0     set 31, size 2, stype 0, dtype 5, sbitpos 9, dbitpos 0, immvalue 0 */
//type:0 datatype: 0, iib->dtype:5, iib->stype:0
  int srcreg = (ipc->opcode >> 9) & 7;
//type:0 datatype: 0, iib->dtype:5, iib->stype:0
  uint16 srcdata = DATAREG(srcreg);
//type:1 datatype: 5, iib->dtype:5, iib->stype:0
  int dstreg = (ipc->opcode >> 0) & 7;
  uint32 dstaddr = (sint32)ADDRREG(dstreg) + (sint32)(sint16)ipc->dst;
//type:1 datatype: 5, iib->dtype:5, iib->stype:0
  uint16 dstdata = fetchword(dstaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
//iib->dtype:5, iib->stype:0 init:(sint16)dstdata + (sint16)srcdata
  uint16 outdata = (sint16)dstdata + (sint16)srcdata;

ABORT_OPCODE_CHK();
//type:1  iib->dtype:5, iib->stype:0
  storeword(dstaddr, outdata);

ABORT_OPCODE_CHK();
  PC+= 4;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1444b(t_ipc *ipc) /* ADD */ {
  /* mask f1f8, bits d168, mnemonic 10, priv 0, endblk 0, imm_notzero 0, used 0     set 31, size 2, stype 0, dtype 5, sbitpos 9, dbitpos 0, immvalue 0 */
//type:0 datatype: 0, iib->dtype:5, iib->stype:0
  int srcreg = (ipc->opcode >> 9) & 7;
//type:0 datatype: 0, iib->dtype:5, iib->stype:0
  uint16 srcdata = DATAREG(srcreg);
//type:1 datatype: 5, iib->dtype:5, iib->stype:0
  int dstreg = (ipc->opcode >> 0) & 7;
  uint32 dstaddr = (sint32)ADDRREG(dstreg) + (sint32)(sint16)ipc->dst;
//type:1 datatype: 5, iib->dtype:5, iib->stype:0
  uint16 dstdata = fetchword(dstaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
//iib->dtype:5, iib->stype:0 init:(sint16)dstdata + (sint16)srcdata
  uint16 outdata = (sint16)dstdata + (sint16)srcdata;

ABORT_OPCODE_CHK();
//type:1  iib->dtype:5, iib->stype:0
  storeword(dstaddr, outdata);

ABORT_OPCODE_CHK();

  VFLAG = (((sint16)srcdata < 0) == ((sint16)dstdata < 0)) &&
    (((sint16)dstdata < 0) != ((sint16)outdata < 0));
  XFLAG = CFLAG = srcdata > (0xFFFFu - (uint16)dstdata);
  NFLAG = ((sint16)outdata) < 0;
  ZFLAG = !outdata;
  PC+= 4;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1445a(t_ipc *ipc) /* ADD */ {
  /* mask f1f8, bits d170, mnemonic 10, priv 0, endblk 0, imm_notzero 0, used 0     set 31, size 2, stype 0, dtype 6, sbitpos 9, dbitpos 0, immvalue 0 */
//type:0 datatype: 0, iib->dtype:6, iib->stype:0
  int srcreg = (ipc->opcode >> 9) & 7;
//type:0 datatype: 0, iib->dtype:6, iib->stype:0
  uint16 srcdata = DATAREG(srcreg);
//type:1 datatype: 6, iib->dtype:6, iib->stype:0
  int dstreg = (ipc->opcode >> 0) & 7;
  uint32 dstaddr = (sint32)ADDRREG(dstreg) + idxval_dst(ipc);
//type:1 datatype: 6, iib->dtype:6, iib->stype:0
  uint16 dstdata = fetchword(dstaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
//iib->dtype:6, iib->stype:0 init:(sint16)dstdata + (sint16)srcdata
  uint16 outdata = (sint16)dstdata + (sint16)srcdata;

ABORT_OPCODE_CHK();
//type:1  iib->dtype:6, iib->stype:0
  storeword(dstaddr, outdata);

ABORT_OPCODE_CHK();
  PC+= 4;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1445b(t_ipc *ipc) /* ADD */ {
  /* mask f1f8, bits d170, mnemonic 10, priv 0, endblk 0, imm_notzero 0, used 0     set 31, size 2, stype 0, dtype 6, sbitpos 9, dbitpos 0, immvalue 0 */
//type:0 datatype: 0, iib->dtype:6, iib->stype:0
  int srcreg = (ipc->opcode >> 9) & 7;
//type:0 datatype: 0, iib->dtype:6, iib->stype:0
  uint16 srcdata = DATAREG(srcreg);
//type:1 datatype: 6, iib->dtype:6, iib->stype:0
  int dstreg = (ipc->opcode >> 0) & 7;
  uint32 dstaddr = (sint32)ADDRREG(dstreg) + idxval_dst(ipc);
//type:1 datatype: 6, iib->dtype:6, iib->stype:0
  uint16 dstdata = fetchword(dstaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
//iib->dtype:6, iib->stype:0 init:(sint16)dstdata + (sint16)srcdata
  uint16 outdata = (sint16)dstdata + (sint16)srcdata;

ABORT_OPCODE_CHK();
//type:1  iib->dtype:6, iib->stype:0
  storeword(dstaddr, outdata);

ABORT_OPCODE_CHK();

  VFLAG = (((sint16)srcdata < 0) == ((sint16)dstdata < 0)) &&
    (((sint16)dstdata < 0) != ((sint16)outdata < 0));
  XFLAG = CFLAG = srcdata > (0xFFFFu - (uint16)dstdata);
  NFLAG = ((sint16)outdata) < 0;
  ZFLAG = !outdata;
  PC+= 4;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1446a(t_ipc *ipc) /* ADD */ {
  /* mask f1ff, bits d178, mnemonic 10, priv 0, endblk 0, imm_notzero 0, used 0     set 31, size 2, stype 0, dtype 7, sbitpos 9, dbitpos 0, immvalue 0 */
//type:0 datatype: 0, iib->dtype:7, iib->stype:0
  int srcreg = (ipc->opcode >> 9) & 7;
//type:0 datatype: 0, iib->dtype:7, iib->stype:0
  uint16 srcdata = DATAREG(srcreg);
//type:1 datatype: 7, iib->dtype:7, iib->stype:0
  uint32 dstaddr = ipc->dst;
//type:1 datatype: 7, iib->dtype:7, iib->stype:0
  uint16 dstdata = fetchword(dstaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
//iib->dtype:7, iib->stype:0 init:(sint16)dstdata + (sint16)srcdata
  uint16 outdata = (sint16)dstdata + (sint16)srcdata;

ABORT_OPCODE_CHK();
//type:1  iib->dtype:7, iib->stype:0
  storeword(dstaddr, outdata);

ABORT_OPCODE_CHK();
  PC+= 4;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1446b(t_ipc *ipc) /* ADD */ {
  /* mask f1ff, bits d178, mnemonic 10, priv 0, endblk 0, imm_notzero 0, used 0     set 31, size 2, stype 0, dtype 7, sbitpos 9, dbitpos 0, immvalue 0 */
//type:0 datatype: 0, iib->dtype:7, iib->stype:0
  int srcreg = (ipc->opcode >> 9) & 7;
//type:0 datatype: 0, iib->dtype:7, iib->stype:0
  uint16 srcdata = DATAREG(srcreg);
//type:1 datatype: 7, iib->dtype:7, iib->stype:0
  uint32 dstaddr = ipc->dst;
//type:1 datatype: 7, iib->dtype:7, iib->stype:0
  uint16 dstdata = fetchword(dstaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
//iib->dtype:7, iib->stype:0 init:(sint16)dstdata + (sint16)srcdata
  uint16 outdata = (sint16)dstdata + (sint16)srcdata;

ABORT_OPCODE_CHK();
//type:1  iib->dtype:7, iib->stype:0
  storeword(dstaddr, outdata);

ABORT_OPCODE_CHK();

  VFLAG = (((sint16)srcdata < 0) == ((sint16)dstdata < 0)) &&
    (((sint16)dstdata < 0) != ((sint16)outdata < 0));
  XFLAG = CFLAG = srcdata > (0xFFFFu - (uint16)dstdata);
  NFLAG = ((sint16)outdata) < 0;
  ZFLAG = !outdata;
  PC+= 4;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1447a(t_ipc *ipc) /* ADD */ {
  /* mask f1ff, bits d179, mnemonic 10, priv 0, endblk 0, imm_notzero 0, used 0     set 31, size 2, stype 0, dtype 8, sbitpos 9, dbitpos 0, immvalue 0 */
//type:0 datatype: 0, iib->dtype:8, iib->stype:0
  int srcreg = (ipc->opcode >> 9) & 7;
//type:0 datatype: 0, iib->dtype:8, iib->stype:0
  uint16 srcdata = DATAREG(srcreg);
//type:1 datatype: 8, iib->dtype:8, iib->stype:0
  uint32 dstaddr = ipc->dst;
//type:1 datatype: 8, iib->dtype:8, iib->stype:0
  uint16 dstdata = fetchword(dstaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
//iib->dtype:8, iib->stype:0 init:(sint16)dstdata + (sint16)srcdata
  uint16 outdata = (sint16)dstdata + (sint16)srcdata;

ABORT_OPCODE_CHK();
//type:1  iib->dtype:8, iib->stype:0
  storeword(dstaddr, outdata);

ABORT_OPCODE_CHK();
  PC+= 6;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1447b(t_ipc *ipc) /* ADD */ {
  /* mask f1ff, bits d179, mnemonic 10, priv 0, endblk 0, imm_notzero 0, used 0     set 31, size 2, stype 0, dtype 8, sbitpos 9, dbitpos 0, immvalue 0 */
//type:0 datatype: 0, iib->dtype:8, iib->stype:0
  int srcreg = (ipc->opcode >> 9) & 7;
//type:0 datatype: 0, iib->dtype:8, iib->stype:0
  uint16 srcdata = DATAREG(srcreg);
//type:1 datatype: 8, iib->dtype:8, iib->stype:0
  uint32 dstaddr = ipc->dst;
//type:1 datatype: 8, iib->dtype:8, iib->stype:0
  uint16 dstdata = fetchword(dstaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
//iib->dtype:8, iib->stype:0 init:(sint16)dstdata + (sint16)srcdata
  uint16 outdata = (sint16)dstdata + (sint16)srcdata;

ABORT_OPCODE_CHK();
//type:1  iib->dtype:8, iib->stype:0
  storeword(dstaddr, outdata);

ABORT_OPCODE_CHK();

  VFLAG = (((sint16)srcdata < 0) == ((sint16)dstdata < 0)) &&
    (((sint16)dstdata < 0) != ((sint16)outdata < 0));
  XFLAG = CFLAG = srcdata > (0xFFFFu - (uint16)dstdata);
  NFLAG = ((sint16)outdata) < 0;
  ZFLAG = !outdata;
  PC+= 6;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1448a(t_ipc *ipc) /* ADD */ {
  /* mask f1f8, bits d190, mnemonic 10, priv 0, endblk 0, imm_notzero 0, used 0     set 31, size 3, stype 0, dtype 2, sbitpos 9, dbitpos 0, immvalue 0 */
//type:0 datatype: 0, iib->dtype:2, iib->stype:0
  int srcreg = (ipc->opcode >> 9) & 7;
//type:0 datatype: 0, iib->dtype:2, iib->stype:0
  uint32 srcdata = DATAREG(srcreg);
//type:1 datatype: 2, iib->dtype:2, iib->stype:0
  int dstreg = (ipc->opcode >> 0) & 7;
  uint32 dstaddr = ADDRREG(dstreg);
//type:1 datatype: 2, iib->dtype:2, iib->stype:0
  uint32 dstdata = fetchlong(dstaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
//iib->dtype:2, iib->stype:0 init:(sint32)dstdata + (sint32)srcdata
  uint32 outdata = (sint32)dstdata + (sint32)srcdata;

ABORT_OPCODE_CHK();
//type:1  iib->dtype:2, iib->stype:0
  storelong(dstaddr, outdata);

ABORT_OPCODE_CHK();
  PC+= 2;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1448b(t_ipc *ipc) /* ADD */ {
  /* mask f1f8, bits d190, mnemonic 10, priv 0, endblk 0, imm_notzero 0, used 0     set 31, size 3, stype 0, dtype 2, sbitpos 9, dbitpos 0, immvalue 0 */
//type:0 datatype: 0, iib->dtype:2, iib->stype:0
  int srcreg = (ipc->opcode >> 9) & 7;
//type:0 datatype: 0, iib->dtype:2, iib->stype:0
  uint32 srcdata = DATAREG(srcreg);
//type:1 datatype: 2, iib->dtype:2, iib->stype:0
  int dstreg = (ipc->opcode >> 0) & 7;
  uint32 dstaddr = ADDRREG(dstreg);
//type:1 datatype: 2, iib->dtype:2, iib->stype:0
  uint32 dstdata = fetchlong(dstaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
//iib->dtype:2, iib->stype:0 init:(sint32)dstdata + (sint32)srcdata
  uint32 outdata = (sint32)dstdata + (sint32)srcdata;

ABORT_OPCODE_CHK();
//type:1  iib->dtype:2, iib->stype:0
  storelong(dstaddr, outdata);

ABORT_OPCODE_CHK();

  VFLAG = (((sint32)srcdata < 0) == ((sint32)dstdata < 0)) &&
    (((sint32)dstdata < 0) != ((sint32)outdata < 0));
  XFLAG = CFLAG = srcdata > (uint32)~(uint32)dstdata;
  NFLAG = ((sint32)outdata) < 0;
  ZFLAG = !outdata;
  PC+= 2;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1449a(t_ipc *ipc) /* ADD */ {
  /* mask f1f8, bits d198, mnemonic 10, priv 0, endblk 0, imm_notzero 0, used 0     set 31, size 3, stype 0, dtype 3, sbitpos 9, dbitpos 0, immvalue 0 */
//type:0 datatype: 0, iib->dtype:3, iib->stype:0
  int srcreg = (ipc->opcode >> 9) & 7;
//type:0 datatype: 0, iib->dtype:3, iib->stype:0
  uint32 srcdata = DATAREG(srcreg);
//type:1 datatype: 3, iib->dtype:3, iib->stype:0
  int dstreg = (ipc->opcode >> 0) & 7;
  uint32 dstaddr = (ADDRREG(dstreg)+=4, ADDRREG(dstreg)-4);
//type:1 datatype: 3, iib->dtype:3, iib->stype:0
  uint32 dstdata = fetchlong(dstaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
//iib->dtype:3, iib->stype:0 init:(sint32)dstdata + (sint32)srcdata
  uint32 outdata = (sint32)dstdata + (sint32)srcdata;

ABORT_OPCODE_CHK();
//type:1  iib->dtype:3, iib->stype:0
  storelong(dstaddr, outdata);

ABORT_OPCODE_CHK();
  PC+= 2;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1449b(t_ipc *ipc) /* ADD */ {
  /* mask f1f8, bits d198, mnemonic 10, priv 0, endblk 0, imm_notzero 0, used 0     set 31, size 3, stype 0, dtype 3, sbitpos 9, dbitpos 0, immvalue 0 */
//type:0 datatype: 0, iib->dtype:3, iib->stype:0
  int srcreg = (ipc->opcode >> 9) & 7;
//type:0 datatype: 0, iib->dtype:3, iib->stype:0
  uint32 srcdata = DATAREG(srcreg);
//type:1 datatype: 3, iib->dtype:3, iib->stype:0
  int dstreg = (ipc->opcode >> 0) & 7;
  uint32 dstaddr = (ADDRREG(dstreg)+=4, ADDRREG(dstreg)-4);
//type:1 datatype: 3, iib->dtype:3, iib->stype:0
  uint32 dstdata = fetchlong(dstaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
//iib->dtype:3, iib->stype:0 init:(sint32)dstdata + (sint32)srcdata
  uint32 outdata = (sint32)dstdata + (sint32)srcdata;

ABORT_OPCODE_CHK();
//type:1  iib->dtype:3, iib->stype:0
  storelong(dstaddr, outdata);

ABORT_OPCODE_CHK();

  VFLAG = (((sint32)srcdata < 0) == ((sint32)dstdata < 0)) &&
    (((sint32)dstdata < 0) != ((sint32)outdata < 0));
  XFLAG = CFLAG = srcdata > (uint32)~(uint32)dstdata;
  NFLAG = ((sint32)outdata) < 0;
  ZFLAG = !outdata;
  PC+= 2;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1450a(t_ipc *ipc) /* ADD */ {
  /* mask f1f8, bits d1a0, mnemonic 10, priv 0, endblk 0, imm_notzero 0, used 0     set 31, size 3, stype 0, dtype 4, sbitpos 9, dbitpos 0, immvalue 0 */
//type:0 datatype: 0, iib->dtype:4, iib->stype:0
  int srcreg = (ipc->opcode >> 9) & 7;
//type:0 datatype: 0, iib->dtype:4, iib->stype:0
  uint32 srcdata = DATAREG(srcreg);
//type:1 datatype: 4, iib->dtype:4, iib->stype:0
  int dstreg = (ipc->opcode >> 0) & 7;
  uint32 dstaddr = ADDRREG(dstreg)-=4;
//type:1 datatype: 4, iib->dtype:4, iib->stype:0
  uint32 dstdata = fetchlong(dstaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
//iib->dtype:4, iib->stype:0 init:(sint32)dstdata + (sint32)srcdata
  uint32 outdata = (sint32)dstdata + (sint32)srcdata;

ABORT_OPCODE_CHK();
//type:1  iib->dtype:4, iib->stype:0
  storelong(dstaddr, outdata);

ABORT_OPCODE_CHK();
  PC+= 2;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1450b(t_ipc *ipc) /* ADD */ {
  /* mask f1f8, bits d1a0, mnemonic 10, priv 0, endblk 0, imm_notzero 0, used 0     set 31, size 3, stype 0, dtype 4, sbitpos 9, dbitpos 0, immvalue 0 */
//type:0 datatype: 0, iib->dtype:4, iib->stype:0
  int srcreg = (ipc->opcode >> 9) & 7;
//type:0 datatype: 0, iib->dtype:4, iib->stype:0
  uint32 srcdata = DATAREG(srcreg);
//type:1 datatype: 4, iib->dtype:4, iib->stype:0
  int dstreg = (ipc->opcode >> 0) & 7;
  uint32 dstaddr = ADDRREG(dstreg)-=4;
//type:1 datatype: 4, iib->dtype:4, iib->stype:0
  uint32 dstdata = fetchlong(dstaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
//iib->dtype:4, iib->stype:0 init:(sint32)dstdata + (sint32)srcdata
  uint32 outdata = (sint32)dstdata + (sint32)srcdata;

ABORT_OPCODE_CHK();
//type:1  iib->dtype:4, iib->stype:0
  storelong(dstaddr, outdata);

ABORT_OPCODE_CHK();

  VFLAG = (((sint32)srcdata < 0) == ((sint32)dstdata < 0)) &&
    (((sint32)dstdata < 0) != ((sint32)outdata < 0));
  XFLAG = CFLAG = srcdata > (uint32)~(uint32)dstdata;
  NFLAG = ((sint32)outdata) < 0;
  ZFLAG = !outdata;
  PC+= 2;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1451a(t_ipc *ipc) /* ADD */ {
  /* mask f1f8, bits d1a8, mnemonic 10, priv 0, endblk 0, imm_notzero 0, used 0     set 31, size 3, stype 0, dtype 5, sbitpos 9, dbitpos 0, immvalue 0 */
//type:0 datatype: 0, iib->dtype:5, iib->stype:0
  int srcreg = (ipc->opcode >> 9) & 7;
//type:0 datatype: 0, iib->dtype:5, iib->stype:0
  uint32 srcdata = DATAREG(srcreg);
//type:1 datatype: 5, iib->dtype:5, iib->stype:0
  int dstreg = (ipc->opcode >> 0) & 7;
  uint32 dstaddr = (sint32)ADDRREG(dstreg) + (sint32)(sint16)ipc->dst;
//type:1 datatype: 5, iib->dtype:5, iib->stype:0
  uint32 dstdata = fetchlong(dstaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
//iib->dtype:5, iib->stype:0 init:(sint32)dstdata + (sint32)srcdata
  uint32 outdata = (sint32)dstdata + (sint32)srcdata;

ABORT_OPCODE_CHK();
//type:1  iib->dtype:5, iib->stype:0
  storelong(dstaddr, outdata);

ABORT_OPCODE_CHK();
  PC+= 4;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1451b(t_ipc *ipc) /* ADD */ {
  /* mask f1f8, bits d1a8, mnemonic 10, priv 0, endblk 0, imm_notzero 0, used 0     set 31, size 3, stype 0, dtype 5, sbitpos 9, dbitpos 0, immvalue 0 */
//type:0 datatype: 0, iib->dtype:5, iib->stype:0
  int srcreg = (ipc->opcode >> 9) & 7;
//type:0 datatype: 0, iib->dtype:5, iib->stype:0
  uint32 srcdata = DATAREG(srcreg);
//type:1 datatype: 5, iib->dtype:5, iib->stype:0
  int dstreg = (ipc->opcode >> 0) & 7;
  uint32 dstaddr = (sint32)ADDRREG(dstreg) + (sint32)(sint16)ipc->dst;
//type:1 datatype: 5, iib->dtype:5, iib->stype:0
  uint32 dstdata = fetchlong(dstaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
//iib->dtype:5, iib->stype:0 init:(sint32)dstdata + (sint32)srcdata
  uint32 outdata = (sint32)dstdata + (sint32)srcdata;

ABORT_OPCODE_CHK();
//type:1  iib->dtype:5, iib->stype:0
  storelong(dstaddr, outdata);

ABORT_OPCODE_CHK();

  VFLAG = (((sint32)srcdata < 0) == ((sint32)dstdata < 0)) &&
    (((sint32)dstdata < 0) != ((sint32)outdata < 0));
  XFLAG = CFLAG = srcdata > (uint32)~(uint32)dstdata;
  NFLAG = ((sint32)outdata) < 0;
  ZFLAG = !outdata;
  PC+= 4;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1452a(t_ipc *ipc) /* ADD */ {
  /* mask f1f8, bits d1b0, mnemonic 10, priv 0, endblk 0, imm_notzero 0, used 0     set 31, size 3, stype 0, dtype 6, sbitpos 9, dbitpos 0, immvalue 0 */
//type:0 datatype: 0, iib->dtype:6, iib->stype:0
  int srcreg = (ipc->opcode >> 9) & 7;
//type:0 datatype: 0, iib->dtype:6, iib->stype:0
  uint32 srcdata = DATAREG(srcreg);
//type:1 datatype: 6, iib->dtype:6, iib->stype:0
  int dstreg = (ipc->opcode >> 0) & 7;
  uint32 dstaddr = (sint32)ADDRREG(dstreg) + idxval_dst(ipc);
//type:1 datatype: 6, iib->dtype:6, iib->stype:0
  uint32 dstdata = fetchlong(dstaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
//iib->dtype:6, iib->stype:0 init:(sint32)dstdata + (sint32)srcdata
  uint32 outdata = (sint32)dstdata + (sint32)srcdata;

ABORT_OPCODE_CHK();
//type:1  iib->dtype:6, iib->stype:0
  storelong(dstaddr, outdata);

ABORT_OPCODE_CHK();
  PC+= 4;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1452b(t_ipc *ipc) /* ADD */ {
  /* mask f1f8, bits d1b0, mnemonic 10, priv 0, endblk 0, imm_notzero 0, used 0     set 31, size 3, stype 0, dtype 6, sbitpos 9, dbitpos 0, immvalue 0 */
//type:0 datatype: 0, iib->dtype:6, iib->stype:0
  int srcreg = (ipc->opcode >> 9) & 7;
//type:0 datatype: 0, iib->dtype:6, iib->stype:0
  uint32 srcdata = DATAREG(srcreg);
//type:1 datatype: 6, iib->dtype:6, iib->stype:0
  int dstreg = (ipc->opcode >> 0) & 7;
  uint32 dstaddr = (sint32)ADDRREG(dstreg) + idxval_dst(ipc);
//type:1 datatype: 6, iib->dtype:6, iib->stype:0
  uint32 dstdata = fetchlong(dstaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
//iib->dtype:6, iib->stype:0 init:(sint32)dstdata + (sint32)srcdata
  uint32 outdata = (sint32)dstdata + (sint32)srcdata;

ABORT_OPCODE_CHK();
//type:1  iib->dtype:6, iib->stype:0
  storelong(dstaddr, outdata);

ABORT_OPCODE_CHK();

  VFLAG = (((sint32)srcdata < 0) == ((sint32)dstdata < 0)) &&
    (((sint32)dstdata < 0) != ((sint32)outdata < 0));
  XFLAG = CFLAG = srcdata > (uint32)~(uint32)dstdata;
  NFLAG = ((sint32)outdata) < 0;
  ZFLAG = !outdata;
  PC+= 4;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1453a(t_ipc *ipc) /* ADD */ {
  /* mask f1ff, bits d1b8, mnemonic 10, priv 0, endblk 0, imm_notzero 0, used 0     set 31, size 3, stype 0, dtype 7, sbitpos 9, dbitpos 0, immvalue 0 */
//type:0 datatype: 0, iib->dtype:7, iib->stype:0
  int srcreg = (ipc->opcode >> 9) & 7;
//type:0 datatype: 0, iib->dtype:7, iib->stype:0
  uint32 srcdata = DATAREG(srcreg);
//type:1 datatype: 7, iib->dtype:7, iib->stype:0
  uint32 dstaddr = ipc->dst;
//type:1 datatype: 7, iib->dtype:7, iib->stype:0
  uint32 dstdata = fetchlong(dstaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
//iib->dtype:7, iib->stype:0 init:(sint32)dstdata + (sint32)srcdata
  uint32 outdata = (sint32)dstdata + (sint32)srcdata;

ABORT_OPCODE_CHK();
//type:1  iib->dtype:7, iib->stype:0
  storelong(dstaddr, outdata);

ABORT_OPCODE_CHK();
  PC+= 4;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1453b(t_ipc *ipc) /* ADD */ {
  /* mask f1ff, bits d1b8, mnemonic 10, priv 0, endblk 0, imm_notzero 0, used 0     set 31, size 3, stype 0, dtype 7, sbitpos 9, dbitpos 0, immvalue 0 */
//type:0 datatype: 0, iib->dtype:7, iib->stype:0
  int srcreg = (ipc->opcode >> 9) & 7;
//type:0 datatype: 0, iib->dtype:7, iib->stype:0
  uint32 srcdata = DATAREG(srcreg);
//type:1 datatype: 7, iib->dtype:7, iib->stype:0
  uint32 dstaddr = ipc->dst;
//type:1 datatype: 7, iib->dtype:7, iib->stype:0
  uint32 dstdata = fetchlong(dstaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
//iib->dtype:7, iib->stype:0 init:(sint32)dstdata + (sint32)srcdata
  uint32 outdata = (sint32)dstdata + (sint32)srcdata;

ABORT_OPCODE_CHK();
//type:1  iib->dtype:7, iib->stype:0
  storelong(dstaddr, outdata);

ABORT_OPCODE_CHK();

  VFLAG = (((sint32)srcdata < 0) == ((sint32)dstdata < 0)) &&
    (((sint32)dstdata < 0) != ((sint32)outdata < 0));
  XFLAG = CFLAG = srcdata > (uint32)~(uint32)dstdata;
  NFLAG = ((sint32)outdata) < 0;
  ZFLAG = !outdata;
  PC+= 4;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1454a(t_ipc *ipc) /* ADD */ {
  /* mask f1ff, bits d1b9, mnemonic 10, priv 0, endblk 0, imm_notzero 0, used 0     set 31, size 3, stype 0, dtype 8, sbitpos 9, dbitpos 0, immvalue 0 */
//type:0 datatype: 0, iib->dtype:8, iib->stype:0
  int srcreg = (ipc->opcode >> 9) & 7;
//type:0 datatype: 0, iib->dtype:8, iib->stype:0
  uint32 srcdata = DATAREG(srcreg);
//type:1 datatype: 8, iib->dtype:8, iib->stype:0
  uint32 dstaddr = ipc->dst;
//type:1 datatype: 8, iib->dtype:8, iib->stype:0
  uint32 dstdata = fetchlong(dstaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
//iib->dtype:8, iib->stype:0 init:(sint32)dstdata + (sint32)srcdata
  uint32 outdata = (sint32)dstdata + (sint32)srcdata;

ABORT_OPCODE_CHK();
//type:1  iib->dtype:8, iib->stype:0
  storelong(dstaddr, outdata);

ABORT_OPCODE_CHK();
  PC+= 6;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1454b(t_ipc *ipc) /* ADD */ {
  /* mask f1ff, bits d1b9, mnemonic 10, priv 0, endblk 0, imm_notzero 0, used 0     set 31, size 3, stype 0, dtype 8, sbitpos 9, dbitpos 0, immvalue 0 */
//type:0 datatype: 0, iib->dtype:8, iib->stype:0
  int srcreg = (ipc->opcode >> 9) & 7;
//type:0 datatype: 0, iib->dtype:8, iib->stype:0
  uint32 srcdata = DATAREG(srcreg);
//type:1 datatype: 8, iib->dtype:8, iib->stype:0
  uint32 dstaddr = ipc->dst;
//type:1 datatype: 8, iib->dtype:8, iib->stype:0
  uint32 dstdata = fetchlong(dstaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
//iib->dtype:8, iib->stype:0 init:(sint32)dstdata + (sint32)srcdata
  uint32 outdata = (sint32)dstdata + (sint32)srcdata;

ABORT_OPCODE_CHK();
//type:1  iib->dtype:8, iib->stype:0
  storelong(dstaddr, outdata);

ABORT_OPCODE_CHK();

  VFLAG = (((sint32)srcdata < 0) == ((sint32)dstdata < 0)) &&
    (((sint32)dstdata < 0) != ((sint32)outdata < 0));
  XFLAG = CFLAG = srcdata > (uint32)~(uint32)dstdata;
  NFLAG = ((sint32)outdata) < 0;
  ZFLAG = !outdata;
  PC+= 6;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1455a(t_ipc *ipc) /* ADDA */ {
  /* mask f1f8, bits d0c0, mnemonic 11, priv 0, endblk 0, imm_notzero 0, used 0     set 0, size 2, stype 0, dtype 1, sbitpos 0, dbitpos 9, immvalue 0 */
//type:0 datatype: 0, iib->dtype:1, iib->stype:0
  int srcreg = (ipc->opcode >> 0) & 7;
//type:0 datatype: 0, iib->dtype:1, iib->stype:0
  uint16 srcdata = DATAREG(srcreg);
//type:1 datatype: 1, iib->dtype:1, iib->stype:0
  int dstreg = (ipc->opcode >> 9) & 7;
  uint32 dstdata = ADDRREG(dstreg);
  uint32 outdata = (sint32)dstdata + (sint16)srcdata;


#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
  ADDRREG(dstreg) = outdata;
  PC+= 2;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1456a(t_ipc *ipc) /* ADDA */ {
  /* mask f1f8, bits d0c8, mnemonic 11, priv 0, endblk 0, imm_notzero 0, used 0     set 0, size 2, stype 1, dtype 1, sbitpos 0, dbitpos 9, immvalue 0 */
//type:0 datatype: 1, iib->dtype:1, iib->stype:1
  int srcreg = (ipc->opcode >> 0) & 7;
//type:0 datatype: 1, iib->dtype:1, iib->stype:1
  uint16 srcdata = ADDRREG(srcreg);
//type:1 datatype: 1, iib->dtype:1, iib->stype:1
  int dstreg = (ipc->opcode >> 9) & 7;
  uint32 dstdata = ADDRREG(dstreg);
  uint32 outdata = (sint32)dstdata + (sint16)srcdata;


#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
  ADDRREG(dstreg) = outdata;
  PC+= 2;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1457a(t_ipc *ipc) /* ADDA */ {
  /* mask f1f8, bits d0d0, mnemonic 11, priv 0, endblk 0, imm_notzero 0, used 0     set 0, size 2, stype 2, dtype 1, sbitpos 0, dbitpos 9, immvalue 0 */
//type:0 datatype: 2, iib->dtype:1, iib->stype:2
  int srcreg = (ipc->opcode >> 0) & 7;
  uint32 srcaddr = ADDRREG(srcreg);
//type:0 datatype: 2, iib->dtype:1, iib->stype:2
  uint16 srcdata = fetchword(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//type:1 datatype: 1, iib->dtype:1, iib->stype:2
  int dstreg = (ipc->opcode >> 9) & 7;
  uint32 dstdata = ADDRREG(dstreg);
  uint32 outdata = (sint32)dstdata + (sint16)srcdata;


#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
  ADDRREG(dstreg) = outdata;
  PC+= 2;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1458a(t_ipc *ipc) /* ADDA */ {
  /* mask f1f8, bits d0d8, mnemonic 11, priv 0, endblk 0, imm_notzero 0, used 0     set 0, size 2, stype 3, dtype 1, sbitpos 0, dbitpos 9, immvalue 0 */
//type:0 datatype: 3, iib->dtype:1, iib->stype:3
  int srcreg = (ipc->opcode >> 0) & 7;
  uint32 srcaddr = (ADDRREG(srcreg)+=2, ADDRREG(srcreg)-2);
//type:0 datatype: 3, iib->dtype:1, iib->stype:3
  uint16 srcdata = fetchword(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//type:1 datatype: 1, iib->dtype:1, iib->stype:3
  int dstreg = (ipc->opcode >> 9) & 7;
  uint32 dstdata = ADDRREG(dstreg);
  uint32 outdata = (sint32)dstdata + (sint16)srcdata;


#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
  ADDRREG(dstreg) = outdata;
  PC+= 2;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1459a(t_ipc *ipc) /* ADDA */ {
  /* mask f1f8, bits d0e0, mnemonic 11, priv 0, endblk 0, imm_notzero 0, used 0     set 0, size 2, stype 4, dtype 1, sbitpos 0, dbitpos 9, immvalue 0 */
//type:0 datatype: 4, iib->dtype:1, iib->stype:4
  int srcreg = (ipc->opcode >> 0) & 7;
  uint32 srcaddr = ADDRREG(srcreg)-=2;
//type:0 datatype: 4, iib->dtype:1, iib->stype:4
  uint16 srcdata = fetchword(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//type:1 datatype: 1, iib->dtype:1, iib->stype:4
  int dstreg = (ipc->opcode >> 9) & 7;
  uint32 dstdata = ADDRREG(dstreg);
  uint32 outdata = (sint32)dstdata + (sint16)srcdata;


#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
  ADDRREG(dstreg) = outdata;
  PC+= 2;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1460a(t_ipc *ipc) /* ADDA */ {
  /* mask f1f8, bits d0e8, mnemonic 11, priv 0, endblk 0, imm_notzero 0, used 0     set 0, size 2, stype 5, dtype 1, sbitpos 0, dbitpos 9, immvalue 0 */
//type:0 datatype: 5, iib->dtype:1, iib->stype:5
  int srcreg = (ipc->opcode >> 0) & 7;
  uint32 srcaddr = (sint32)ADDRREG(srcreg) + (sint32)(sint16)ipc->src;
//type:0 datatype: 5, iib->dtype:1, iib->stype:5
  uint16 srcdata = fetchword(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//type:1 datatype: 1, iib->dtype:1, iib->stype:5
  int dstreg = (ipc->opcode >> 9) & 7;
  uint32 dstdata = ADDRREG(dstreg);
  uint32 outdata = (sint32)dstdata + (sint16)srcdata;


#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
  ADDRREG(dstreg) = outdata;
  PC+= 4;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1461a(t_ipc *ipc) /* ADDA */ {
  /* mask f1f8, bits d0f0, mnemonic 11, priv 0, endblk 0, imm_notzero 0, used 0     set 0, size 2, stype 6, dtype 1, sbitpos 0, dbitpos 9, immvalue 0 */
//type:0 datatype: 6, iib->dtype:1, iib->stype:6
  int srcreg = (ipc->opcode >> 0) & 7;
  uint32 srcaddr = (sint32)ADDRREG(srcreg) + idxval_src(ipc);
//type:0 datatype: 6, iib->dtype:1, iib->stype:6
  uint16 srcdata = fetchword(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//type:1 datatype: 1, iib->dtype:1, iib->stype:6
  int dstreg = (ipc->opcode >> 9) & 7;
  uint32 dstdata = ADDRREG(dstreg);
  uint32 outdata = (sint32)dstdata + (sint16)srcdata;


#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
  ADDRREG(dstreg) = outdata;
  PC+= 4;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1462a(t_ipc *ipc) /* ADDA */ {
  /* mask f1ff, bits d0f8, mnemonic 11, priv 0, endblk 0, imm_notzero 0, used 0     set 0, size 2, stype 7, dtype 1, sbitpos 0, dbitpos 9, immvalue 0 */
//type:0 datatype: 7, iib->dtype:1, iib->stype:7
  uint32 srcaddr = ipc->src;
//type:0 datatype: 7, iib->dtype:1, iib->stype:7
  uint16 srcdata = fetchword(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//type:1 datatype: 1, iib->dtype:1, iib->stype:7
  int dstreg = (ipc->opcode >> 9) & 7;
  uint32 dstdata = ADDRREG(dstreg);
  uint32 outdata = (sint32)dstdata + (sint16)srcdata;


#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
  ADDRREG(dstreg) = outdata;
  PC+= 4;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1463a(t_ipc *ipc) /* ADDA */ {
  /* mask f1ff, bits d0f9, mnemonic 11, priv 0, endblk 0, imm_notzero 0, used 0     set 0, size 2, stype 8, dtype 1, sbitpos 0, dbitpos 9, immvalue 0 */
//type:0 datatype: 8, iib->dtype:1, iib->stype:8
  uint32 srcaddr = ipc->src;
//type:0 datatype: 8, iib->dtype:1, iib->stype:8
  uint16 srcdata = fetchword(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//type:1 datatype: 1, iib->dtype:1, iib->stype:8
  int dstreg = (ipc->opcode >> 9) & 7;
  uint32 dstdata = ADDRREG(dstreg);
  uint32 outdata = (sint32)dstdata + (sint16)srcdata;


#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
  ADDRREG(dstreg) = outdata;
  PC+= 6;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1464a(t_ipc *ipc) /* ADDA */ {
  /* mask f1ff, bits d0fa, mnemonic 11, priv 0, endblk 0, imm_notzero 0, used 0     set 0, size 2, stype 9, dtype 1, sbitpos 0, dbitpos 9, immvalue 0 */
//type:0 datatype: 9, iib->dtype:1, iib->stype:9
  uint32 srcaddr = ipc->src;
//type:0 datatype: 9, iib->dtype:1, iib->stype:9
  uint16 srcdata = fetchword(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//type:1 datatype: 1, iib->dtype:1, iib->stype:9
  int dstreg = (ipc->opcode >> 9) & 7;
  uint32 dstdata = ADDRREG(dstreg);
  uint32 outdata = (sint32)dstdata + (sint16)srcdata;


#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
  ADDRREG(dstreg) = outdata;
  PC+= 4;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1465a(t_ipc *ipc) /* ADDA */ {
  /* mask f1ff, bits d0fb, mnemonic 11, priv 0, endblk 0, imm_notzero 0, used 0     set 0, size 2, stype 10, dtype 1, sbitpos 0, dbitpos 9, immvalue 0 */
//type:0 datatype: 10, iib->dtype:1, iib->stype:10
  uint32 srcaddr = idxval_src(ipc);
//type:0 datatype: 10, iib->dtype:1, iib->stype:10
  uint16 srcdata = fetchword(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//type:1 datatype: 1, iib->dtype:1, iib->stype:10
  int dstreg = (ipc->opcode >> 9) & 7;
  uint32 dstdata = ADDRREG(dstreg);
  uint32 outdata = (sint32)dstdata + (sint16)srcdata;


#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
  ADDRREG(dstreg) = outdata;
  PC+= 4;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1466a(t_ipc *ipc) /* ADDA */ {
  /* mask f1ff, bits d0fc, mnemonic 11, priv 0, endblk 0, imm_notzero 0, used 0     set 0, size 2, stype 12, dtype 1, sbitpos 0, dbitpos 9, immvalue 0 */
//type:0 datatype: 12, iib->dtype:1, iib->stype:12
//type:0 datatype: 12, iib->dtype:1, iib->stype:12
  uint16 srcdata = ipc->src;
//type:1 datatype: 1, iib->dtype:1, iib->stype:12
  int dstreg = (ipc->opcode >> 9) & 7;
  uint32 dstdata = ADDRREG(dstreg);
  uint32 outdata = (sint32)dstdata + (sint16)srcdata;


#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
  ADDRREG(dstreg) = outdata;
  PC+= 4;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1467a(t_ipc *ipc) /* ADDA */ {
  /* mask f1f8, bits d1c0, mnemonic 11, priv 0, endblk 0, imm_notzero 0, used 0     set 0, size 3, stype 0, dtype 1, sbitpos 0, dbitpos 9, immvalue 0 */
//type:0 datatype: 0, iib->dtype:1, iib->stype:0
  int srcreg = (ipc->opcode >> 0) & 7;
//type:0 datatype: 0, iib->dtype:1, iib->stype:0
  uint32 srcdata = DATAREG(srcreg);
//type:1 datatype: 1, iib->dtype:1, iib->stype:0
  int dstreg = (ipc->opcode >> 9) & 7;
  uint32 dstdata = ADDRREG(dstreg);
  uint32 outdata = (sint32)dstdata + (sint32)srcdata;


#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
  ADDRREG(dstreg) = outdata;
  PC+= 2;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1468a(t_ipc *ipc) /* ADDA */ {
  /* mask f1f8, bits d1c8, mnemonic 11, priv 0, endblk 0, imm_notzero 0, used 0     set 0, size 3, stype 1, dtype 1, sbitpos 0, dbitpos 9, immvalue 0 */
//type:0 datatype: 1, iib->dtype:1, iib->stype:1
  int srcreg = (ipc->opcode >> 0) & 7;
//type:0 datatype: 1, iib->dtype:1, iib->stype:1
  uint32 srcdata = ADDRREG(srcreg);
//type:1 datatype: 1, iib->dtype:1, iib->stype:1
  int dstreg = (ipc->opcode >> 9) & 7;
  uint32 dstdata = ADDRREG(dstreg);
  uint32 outdata = (sint32)dstdata + (sint32)srcdata;


#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
  ADDRREG(dstreg) = outdata;
  PC+= 2;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1469a(t_ipc *ipc) /* ADDA */ {
  /* mask f1f8, bits d1d0, mnemonic 11, priv 0, endblk 0, imm_notzero 0, used 0     set 0, size 3, stype 2, dtype 1, sbitpos 0, dbitpos 9, immvalue 0 */
//type:0 datatype: 2, iib->dtype:1, iib->stype:2
  int srcreg = (ipc->opcode >> 0) & 7;
  uint32 srcaddr = ADDRREG(srcreg);
//type:0 datatype: 2, iib->dtype:1, iib->stype:2
  uint32 srcdata = fetchlong(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//type:1 datatype: 1, iib->dtype:1, iib->stype:2
  int dstreg = (ipc->opcode >> 9) & 7;
  uint32 dstdata = ADDRREG(dstreg);
  uint32 outdata = (sint32)dstdata + (sint32)srcdata;


#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
  ADDRREG(dstreg) = outdata;
  PC+= 2;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1470a(t_ipc *ipc) /* ADDA */ {
  /* mask f1f8, bits d1d8, mnemonic 11, priv 0, endblk 0, imm_notzero 0, used 0     set 0, size 3, stype 3, dtype 1, sbitpos 0, dbitpos 9, immvalue 0 */
//type:0 datatype: 3, iib->dtype:1, iib->stype:3
  int srcreg = (ipc->opcode >> 0) & 7;
  uint32 srcaddr = (ADDRREG(srcreg)+=4, ADDRREG(srcreg)-4);
//type:0 datatype: 3, iib->dtype:1, iib->stype:3
  uint32 srcdata = fetchlong(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//type:1 datatype: 1, iib->dtype:1, iib->stype:3
  int dstreg = (ipc->opcode >> 9) & 7;
  uint32 dstdata = ADDRREG(dstreg);
  uint32 outdata = (sint32)dstdata + (sint32)srcdata;


#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
  ADDRREG(dstreg) = outdata;
  PC+= 2;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1471a(t_ipc *ipc) /* ADDA */ {
  /* mask f1f8, bits d1e0, mnemonic 11, priv 0, endblk 0, imm_notzero 0, used 0     set 0, size 3, stype 4, dtype 1, sbitpos 0, dbitpos 9, immvalue 0 */
//type:0 datatype: 4, iib->dtype:1, iib->stype:4
  int srcreg = (ipc->opcode >> 0) & 7;
  uint32 srcaddr = ADDRREG(srcreg)-=4;
//type:0 datatype: 4, iib->dtype:1, iib->stype:4
  uint32 srcdata = fetchlong(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//type:1 datatype: 1, iib->dtype:1, iib->stype:4
  int dstreg = (ipc->opcode >> 9) & 7;
  uint32 dstdata = ADDRREG(dstreg);
  uint32 outdata = (sint32)dstdata + (sint32)srcdata;


#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
  ADDRREG(dstreg) = outdata;
  PC+= 2;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1472a(t_ipc *ipc) /* ADDA */ {
  /* mask f1f8, bits d1e8, mnemonic 11, priv 0, endblk 0, imm_notzero 0, used 0     set 0, size 3, stype 5, dtype 1, sbitpos 0, dbitpos 9, immvalue 0 */
//type:0 datatype: 5, iib->dtype:1, iib->stype:5
  int srcreg = (ipc->opcode >> 0) & 7;
  uint32 srcaddr = (sint32)ADDRREG(srcreg) + (sint32)(sint16)ipc->src;
//type:0 datatype: 5, iib->dtype:1, iib->stype:5
  uint32 srcdata = fetchlong(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//type:1 datatype: 1, iib->dtype:1, iib->stype:5
  int dstreg = (ipc->opcode >> 9) & 7;
  uint32 dstdata = ADDRREG(dstreg);
  uint32 outdata = (sint32)dstdata + (sint32)srcdata;


#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
  ADDRREG(dstreg) = outdata;
  PC+= 4;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1473a(t_ipc *ipc) /* ADDA */ {
  /* mask f1f8, bits d1f0, mnemonic 11, priv 0, endblk 0, imm_notzero 0, used 0     set 0, size 3, stype 6, dtype 1, sbitpos 0, dbitpos 9, immvalue 0 */
//type:0 datatype: 6, iib->dtype:1, iib->stype:6
  int srcreg = (ipc->opcode >> 0) & 7;
  uint32 srcaddr = (sint32)ADDRREG(srcreg) + idxval_src(ipc);
//type:0 datatype: 6, iib->dtype:1, iib->stype:6
  uint32 srcdata = fetchlong(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//type:1 datatype: 1, iib->dtype:1, iib->stype:6
  int dstreg = (ipc->opcode >> 9) & 7;
  uint32 dstdata = ADDRREG(dstreg);
  uint32 outdata = (sint32)dstdata + (sint32)srcdata;


#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
  ADDRREG(dstreg) = outdata;
  PC+= 4;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1474a(t_ipc *ipc) /* ADDA */ {
  /* mask f1ff, bits d1f8, mnemonic 11, priv 0, endblk 0, imm_notzero 0, used 0     set 0, size 3, stype 7, dtype 1, sbitpos 0, dbitpos 9, immvalue 0 */
//type:0 datatype: 7, iib->dtype:1, iib->stype:7
  uint32 srcaddr = ipc->src;
//type:0 datatype: 7, iib->dtype:1, iib->stype:7
  uint32 srcdata = fetchlong(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//type:1 datatype: 1, iib->dtype:1, iib->stype:7
  int dstreg = (ipc->opcode >> 9) & 7;
  uint32 dstdata = ADDRREG(dstreg);
  uint32 outdata = (sint32)dstdata + (sint32)srcdata;


#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
  ADDRREG(dstreg) = outdata;
  PC+= 4;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1475a(t_ipc *ipc) /* ADDA */ {
  /* mask f1ff, bits d1f9, mnemonic 11, priv 0, endblk 0, imm_notzero 0, used 0     set 0, size 3, stype 8, dtype 1, sbitpos 0, dbitpos 9, immvalue 0 */
//type:0 datatype: 8, iib->dtype:1, iib->stype:8
  uint32 srcaddr = ipc->src;
//type:0 datatype: 8, iib->dtype:1, iib->stype:8
  uint32 srcdata = fetchlong(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//type:1 datatype: 1, iib->dtype:1, iib->stype:8
  int dstreg = (ipc->opcode >> 9) & 7;
  uint32 dstdata = ADDRREG(dstreg);
  uint32 outdata = (sint32)dstdata + (sint32)srcdata;


#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
  ADDRREG(dstreg) = outdata;
  PC+= 6;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1476a(t_ipc *ipc) /* ADDA */ {
  /* mask f1ff, bits d1fa, mnemonic 11, priv 0, endblk 0, imm_notzero 0, used 0     set 0, size 3, stype 9, dtype 1, sbitpos 0, dbitpos 9, immvalue 0 */
//type:0 datatype: 9, iib->dtype:1, iib->stype:9
  uint32 srcaddr = ipc->src;
//type:0 datatype: 9, iib->dtype:1, iib->stype:9
  uint32 srcdata = fetchlong(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//type:1 datatype: 1, iib->dtype:1, iib->stype:9
  int dstreg = (ipc->opcode >> 9) & 7;
  uint32 dstdata = ADDRREG(dstreg);
  uint32 outdata = (sint32)dstdata + (sint32)srcdata;


#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
  ADDRREG(dstreg) = outdata;
  PC+= 4;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1477a(t_ipc *ipc) /* ADDA */ {
  /* mask f1ff, bits d1fb, mnemonic 11, priv 0, endblk 0, imm_notzero 0, used 0     set 0, size 3, stype 10, dtype 1, sbitpos 0, dbitpos 9, immvalue 0 */
//type:0 datatype: 10, iib->dtype:1, iib->stype:10
  uint32 srcaddr = idxval_src(ipc);
//type:0 datatype: 10, iib->dtype:1, iib->stype:10
  uint32 srcdata = fetchlong(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//type:1 datatype: 1, iib->dtype:1, iib->stype:10
  int dstreg = (ipc->opcode >> 9) & 7;
  uint32 dstdata = ADDRREG(dstreg);
  uint32 outdata = (sint32)dstdata + (sint32)srcdata;


#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
  ADDRREG(dstreg) = outdata;
  PC+= 4;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1478a(t_ipc *ipc) /* ADDA */ {
  /* mask f1ff, bits d1fc, mnemonic 11, priv 0, endblk 0, imm_notzero 0, used 0     set 0, size 3, stype 13, dtype 1, sbitpos 0, dbitpos 9, immvalue 0 */
//type:0 datatype: 13, iib->dtype:1, iib->stype:13
//type:0 datatype: 13, iib->dtype:1, iib->stype:13
  uint32 srcdata = ipc->src;
//type:1 datatype: 1, iib->dtype:1, iib->stype:13
  int dstreg = (ipc->opcode >> 9) & 7;
  uint32 dstdata = ADDRREG(dstreg);
  uint32 outdata = (sint32)dstdata + (sint32)srcdata;


#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
  ADDRREG(dstreg) = outdata;
  PC+= 6;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1479a(t_ipc *ipc) /* ADDX */ {
  /* mask f1f8, bits d100, mnemonic 12, priv 0, endblk 0, imm_notzero 0, used 5     set 31, size 1, stype 0, dtype 0, sbitpos 0, dbitpos 9, immvalue 0 */
//type:0 datatype: 0, iib->dtype:0, iib->stype:0
  int srcreg = (ipc->opcode >> 0) & 7;
//type:0 datatype: 0, iib->dtype:0, iib->stype:0
  uint8 srcdata = DATAREG(srcreg);
//type:1 datatype: 0, iib->dtype:0, iib->stype:0
  int dstreg = (ipc->opcode >> 9) & 7;
//type:1 datatype: 0, iib->dtype:0, iib->stype:0
  uint8 dstdata = DATAREG(dstreg);

ABORT_OPCODE_CHK();
//iib->dtype:0, iib->stype:0 init:(sint8)dstdata + (sint8)srcdata + XFLAG
  uint8 outdata = (sint8)dstdata + (sint8)srcdata + XFLAG;

ABORT_OPCODE_CHK();
//type:1  iib->dtype:0, iib->stype:0
  DATAREG(dstreg) = (DATAREG(dstreg) & ~0xff) | outdata;
  PC+= 2;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1479b(t_ipc *ipc) /* ADDX */ {
  /* mask f1f8, bits d100, mnemonic 12, priv 0, endblk 0, imm_notzero 0, used 5     set 31, size 1, stype 0, dtype 0, sbitpos 0, dbitpos 9, immvalue 0 */
//type:0 datatype: 0, iib->dtype:0, iib->stype:0
  int srcreg = (ipc->opcode >> 0) & 7;
//type:0 datatype: 0, iib->dtype:0, iib->stype:0
  uint8 srcdata = DATAREG(srcreg);
//type:1 datatype: 0, iib->dtype:0, iib->stype:0
  int dstreg = (ipc->opcode >> 9) & 7;
//type:1 datatype: 0, iib->dtype:0, iib->stype:0
  uint8 dstdata = DATAREG(dstreg);

ABORT_OPCODE_CHK();
//iib->dtype:0, iib->stype:0 init:(sint8)dstdata + (sint8)srcdata + XFLAG
  uint8 outdata = (sint8)dstdata + (sint8)srcdata + XFLAG;

ABORT_OPCODE_CHK();
//type:1  iib->dtype:0, iib->stype:0
  DATAREG(dstreg) = (DATAREG(dstreg) & ~0xff) | outdata;

  VFLAG = (((sint8)srcdata < 0) == ((sint8)dstdata < 0)) &&
    (((sint8)dstdata < 0) != ((sint8)outdata < 0));
  {
    int Sm = (sint8)srcdata < 0;
    int Dm = (sint8)dstdata < 0;
    int Rm = (sint8)outdata < 0;
    XFLAG = CFLAG = (Sm && Dm) || (!Rm && (Dm || Sm));
  }
  NFLAG = ((sint8)outdata) < 0;
  if (outdata) ZFLAG = 0;
  PC+= 2;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1480a(t_ipc *ipc) /* ADDX */ {
  /* mask f1f8, bits d140, mnemonic 12, priv 0, endblk 0, imm_notzero 0, used 5     set 31, size 2, stype 0, dtype 0, sbitpos 0, dbitpos 9, immvalue 0 */
//type:0 datatype: 0, iib->dtype:0, iib->stype:0
  int srcreg = (ipc->opcode >> 0) & 7;
//type:0 datatype: 0, iib->dtype:0, iib->stype:0
  uint16 srcdata = DATAREG(srcreg);
//type:1 datatype: 0, iib->dtype:0, iib->stype:0
  int dstreg = (ipc->opcode >> 9) & 7;
//type:1 datatype: 0, iib->dtype:0, iib->stype:0
  uint16 dstdata = DATAREG(dstreg);

ABORT_OPCODE_CHK();
//iib->dtype:0, iib->stype:0 init:(sint16)dstdata + (sint16)srcdata+ XFLAG
  uint16 outdata = (sint16)dstdata + (sint16)srcdata+ XFLAG;

ABORT_OPCODE_CHK();
//type:1  iib->dtype:0, iib->stype:0
  DATAREG(dstreg) = (DATAREG(dstreg) & ~0xffff) | outdata;
  PC+= 2;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1480b(t_ipc *ipc) /* ADDX */ {
  /* mask f1f8, bits d140, mnemonic 12, priv 0, endblk 0, imm_notzero 0, used 5     set 31, size 2, stype 0, dtype 0, sbitpos 0, dbitpos 9, immvalue 0 */
//type:0 datatype: 0, iib->dtype:0, iib->stype:0
  int srcreg = (ipc->opcode >> 0) & 7;
//type:0 datatype: 0, iib->dtype:0, iib->stype:0
  uint16 srcdata = DATAREG(srcreg);
//type:1 datatype: 0, iib->dtype:0, iib->stype:0
  int dstreg = (ipc->opcode >> 9) & 7;
//type:1 datatype: 0, iib->dtype:0, iib->stype:0
  uint16 dstdata = DATAREG(dstreg);

ABORT_OPCODE_CHK();
//iib->dtype:0, iib->stype:0 init:(sint16)dstdata + (sint16)srcdata+ XFLAG
  uint16 outdata = (sint16)dstdata + (sint16)srcdata+ XFLAG;

ABORT_OPCODE_CHK();
//type:1  iib->dtype:0, iib->stype:0
  DATAREG(dstreg) = (DATAREG(dstreg) & ~0xffff) | outdata;

  VFLAG = (((sint16)srcdata < 0) == ((sint16)dstdata < 0)) &&
    (((sint16)dstdata < 0) != ((sint16)outdata < 0));
  {
    int Sm = (sint16)srcdata < 0;
    int Dm = (sint16)dstdata < 0;
    int Rm = (sint16)outdata < 0;
    XFLAG = CFLAG = (Sm && Dm) || (!Rm && (Dm || Sm));
  }
  NFLAG = ((sint16)outdata) < 0;
  if (outdata) ZFLAG = 0;
  PC+= 2;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1481a(t_ipc *ipc) /* ADDX */ {
  /* mask f1f8, bits d180, mnemonic 12, priv 0, endblk 0, imm_notzero 0, used 5     set 31, size 3, stype 0, dtype 0, sbitpos 0, dbitpos 9, immvalue 0 */
//type:0 datatype: 0, iib->dtype:0, iib->stype:0
  int srcreg = (ipc->opcode >> 0) & 7;
//type:0 datatype: 0, iib->dtype:0, iib->stype:0
  uint32 srcdata = DATAREG(srcreg);
//type:1 datatype: 0, iib->dtype:0, iib->stype:0
  int dstreg = (ipc->opcode >> 9) & 7;
//type:1 datatype: 0, iib->dtype:0, iib->stype:0
  uint32 dstdata = DATAREG(dstreg);

ABORT_OPCODE_CHK();
//iib->dtype:0, iib->stype:0 init:(sint32)dstdata + (sint32)srcdata+ XFLAG
  uint32 outdata = (sint32)dstdata + (sint32)srcdata+ XFLAG;

ABORT_OPCODE_CHK();
//type:1  iib->dtype:0, iib->stype:0
  DATAREG(dstreg) = outdata;
  PC+= 2;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1481b(t_ipc *ipc) /* ADDX */ {
  /* mask f1f8, bits d180, mnemonic 12, priv 0, endblk 0, imm_notzero 0, used 5     set 31, size 3, stype 0, dtype 0, sbitpos 0, dbitpos 9, immvalue 0 */
//type:0 datatype: 0, iib->dtype:0, iib->stype:0
  int srcreg = (ipc->opcode >> 0) & 7;
//type:0 datatype: 0, iib->dtype:0, iib->stype:0
  uint32 srcdata = DATAREG(srcreg);
//type:1 datatype: 0, iib->dtype:0, iib->stype:0
  int dstreg = (ipc->opcode >> 9) & 7;
//type:1 datatype: 0, iib->dtype:0, iib->stype:0
  uint32 dstdata = DATAREG(dstreg);

ABORT_OPCODE_CHK();
//iib->dtype:0, iib->stype:0 init:(sint32)dstdata + (sint32)srcdata+ XFLAG
  uint32 outdata = (sint32)dstdata + (sint32)srcdata+ XFLAG;

ABORT_OPCODE_CHK();
//type:1  iib->dtype:0, iib->stype:0
  DATAREG(dstreg) = outdata;

  VFLAG = (((sint32)srcdata < 0) == ((sint32)dstdata < 0)) &&
    (((sint32)dstdata < 0) != ((sint32)outdata < 0));
  {
    int Sm = (sint32)srcdata < 0;
    int Dm = (sint32)dstdata < 0;
    int Rm = (sint32)outdata < 0;
    XFLAG = CFLAG = (Sm && Dm) || (!Rm && (Dm || Sm));
  }
  NFLAG = ((sint32)outdata) < 0;
  if (outdata) ZFLAG = 0;
  PC+= 2;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1482a(t_ipc *ipc) /* ADDX */ {
  /* mask f1f8, bits d108, mnemonic 12, priv 0, endblk 0, imm_notzero 0, used 5     set 31, size 1, stype 4, dtype 4, sbitpos 0, dbitpos 9, immvalue 0 */
//type:0 datatype: 4, iib->dtype:4, iib->stype:4
  int srcreg = (ipc->opcode >> 0) & 7;
  uint32 srcaddr = (ADDRREG(srcreg)-= (srcreg == 7 ? 2 : 1));
//type:0 datatype: 4, iib->dtype:4, iib->stype:4
  uint8 srcdata = fetchbyte(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//type:1 datatype: 4, iib->dtype:4, iib->stype:4
  int dstreg = (ipc->opcode >> 9) & 7;
  uint32 dstaddr = (ADDRREG(dstreg)-= (dstreg == 7 ? 2 : 1));
//type:1 datatype: 4, iib->dtype:4, iib->stype:4
  uint8 dstdata = fetchbyte(dstaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif

ABORT_OPCODE_CHK();
//iib->dtype:4, iib->stype:4 init:(sint8)dstdata + (sint8)srcdata + XFLAG
  uint8 outdata = (sint8)dstdata + (sint8)srcdata + XFLAG;

ABORT_OPCODE_CHK();
//type:1  iib->dtype:4, iib->stype:4
  storebyte(dstaddr, outdata);

ABORT_OPCODE_CHK();
  PC+= 2;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1482b(t_ipc *ipc) /* ADDX */ {
  /* mask f1f8, bits d108, mnemonic 12, priv 0, endblk 0, imm_notzero 0, used 5     set 31, size 1, stype 4, dtype 4, sbitpos 0, dbitpos 9, immvalue 0 */
//type:0 datatype: 4, iib->dtype:4, iib->stype:4
  int srcreg = (ipc->opcode >> 0) & 7;
  uint32 srcaddr = (ADDRREG(srcreg)-= (srcreg == 7 ? 2 : 1));
//type:0 datatype: 4, iib->dtype:4, iib->stype:4
  uint8 srcdata = fetchbyte(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//type:1 datatype: 4, iib->dtype:4, iib->stype:4
  int dstreg = (ipc->opcode >> 9) & 7;
  uint32 dstaddr = (ADDRREG(dstreg)-= (dstreg == 7 ? 2 : 1));
//type:1 datatype: 4, iib->dtype:4, iib->stype:4
  uint8 dstdata = fetchbyte(dstaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif

ABORT_OPCODE_CHK();
//iib->dtype:4, iib->stype:4 init:(sint8)dstdata + (sint8)srcdata + XFLAG
  uint8 outdata = (sint8)dstdata + (sint8)srcdata + XFLAG;

ABORT_OPCODE_CHK();
//type:1  iib->dtype:4, iib->stype:4
  storebyte(dstaddr, outdata);

ABORT_OPCODE_CHK();

  VFLAG = (((sint8)srcdata < 0) == ((sint8)dstdata < 0)) &&
    (((sint8)dstdata < 0) != ((sint8)outdata < 0));
  {
    int Sm = (sint8)srcdata < 0;
    int Dm = (sint8)dstdata < 0;
    int Rm = (sint8)outdata < 0;
    XFLAG = CFLAG = (Sm && Dm) || (!Rm && (Dm || Sm));
  }
  NFLAG = ((sint8)outdata) < 0;
  if (outdata) ZFLAG = 0;
  PC+= 2;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1483a(t_ipc *ipc) /* ADDX */ {
  /* mask f1f8, bits d148, mnemonic 12, priv 0, endblk 0, imm_notzero 0, used 5     set 31, size 2, stype 4, dtype 4, sbitpos 0, dbitpos 9, immvalue 0 */
//type:0 datatype: 4, iib->dtype:4, iib->stype:4
  int srcreg = (ipc->opcode >> 0) & 7;
  uint32 srcaddr = ADDRREG(srcreg)-=2;
//type:0 datatype: 4, iib->dtype:4, iib->stype:4
  uint16 srcdata = fetchword(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//type:1 datatype: 4, iib->dtype:4, iib->stype:4
  int dstreg = (ipc->opcode >> 9) & 7;
  uint32 dstaddr = ADDRREG(dstreg)-=2;
//type:1 datatype: 4, iib->dtype:4, iib->stype:4
  uint16 dstdata = fetchword(dstaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif

ABORT_OPCODE_CHK();
//iib->dtype:4, iib->stype:4 init:(sint16)dstdata + (sint16)srcdata+ XFLAG
  uint16 outdata = (sint16)dstdata + (sint16)srcdata+ XFLAG;

ABORT_OPCODE_CHK();
//type:1  iib->dtype:4, iib->stype:4
  storeword(dstaddr, outdata);

ABORT_OPCODE_CHK();
  PC+= 2;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1483b(t_ipc *ipc) /* ADDX */ {
  /* mask f1f8, bits d148, mnemonic 12, priv 0, endblk 0, imm_notzero 0, used 5     set 31, size 2, stype 4, dtype 4, sbitpos 0, dbitpos 9, immvalue 0 */
//type:0 datatype: 4, iib->dtype:4, iib->stype:4
  int srcreg = (ipc->opcode >> 0) & 7;
  uint32 srcaddr = ADDRREG(srcreg)-=2;
//type:0 datatype: 4, iib->dtype:4, iib->stype:4
  uint16 srcdata = fetchword(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//type:1 datatype: 4, iib->dtype:4, iib->stype:4
  int dstreg = (ipc->opcode >> 9) & 7;
  uint32 dstaddr = ADDRREG(dstreg)-=2;
//type:1 datatype: 4, iib->dtype:4, iib->stype:4
  uint16 dstdata = fetchword(dstaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif

ABORT_OPCODE_CHK();
//iib->dtype:4, iib->stype:4 init:(sint16)dstdata + (sint16)srcdata+ XFLAG
  uint16 outdata = (sint16)dstdata + (sint16)srcdata+ XFLAG;

ABORT_OPCODE_CHK();
//type:1  iib->dtype:4, iib->stype:4
  storeword(dstaddr, outdata);

ABORT_OPCODE_CHK();

  VFLAG = (((sint16)srcdata < 0) == ((sint16)dstdata < 0)) &&
    (((sint16)dstdata < 0) != ((sint16)outdata < 0));
  {
    int Sm = (sint16)srcdata < 0;
    int Dm = (sint16)dstdata < 0;
    int Rm = (sint16)outdata < 0;
    XFLAG = CFLAG = (Sm && Dm) || (!Rm && (Dm || Sm));
  }
  NFLAG = ((sint16)outdata) < 0;
  if (outdata) ZFLAG = 0;
  PC+= 2;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1484a(t_ipc *ipc) /* ADDX */ {
  /* mask f1f8, bits d188, mnemonic 12, priv 0, endblk 0, imm_notzero 0, used 5     set 31, size 3, stype 4, dtype 4, sbitpos 0, dbitpos 9, immvalue 0 */
//type:0 datatype: 4, iib->dtype:4, iib->stype:4
  int srcreg = (ipc->opcode >> 0) & 7;
  uint32 srcaddr = ADDRREG(srcreg)-=4;
//type:0 datatype: 4, iib->dtype:4, iib->stype:4
  uint32 srcdata = fetchlong(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//type:1 datatype: 4, iib->dtype:4, iib->stype:4
  int dstreg = (ipc->opcode >> 9) & 7;
  uint32 dstaddr = ADDRREG(dstreg)-=4;
//type:1 datatype: 4, iib->dtype:4, iib->stype:4
  uint32 dstdata = fetchlong(dstaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif

ABORT_OPCODE_CHK();
//iib->dtype:4, iib->stype:4 init:(sint32)dstdata + (sint32)srcdata+ XFLAG
  uint32 outdata = (sint32)dstdata + (sint32)srcdata+ XFLAG;

ABORT_OPCODE_CHK();
//type:1  iib->dtype:4, iib->stype:4
  storelong(dstaddr, outdata);

ABORT_OPCODE_CHK();
  PC+= 2;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1484b(t_ipc *ipc) /* ADDX */ {
  /* mask f1f8, bits d188, mnemonic 12, priv 0, endblk 0, imm_notzero 0, used 5     set 31, size 3, stype 4, dtype 4, sbitpos 0, dbitpos 9, immvalue 0 */
//type:0 datatype: 4, iib->dtype:4, iib->stype:4
  int srcreg = (ipc->opcode >> 0) & 7;
  uint32 srcaddr = ADDRREG(srcreg)-=4;
//type:0 datatype: 4, iib->dtype:4, iib->stype:4
  uint32 srcdata = fetchlong(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//type:1 datatype: 4, iib->dtype:4, iib->stype:4
  int dstreg = (ipc->opcode >> 9) & 7;
  uint32 dstaddr = ADDRREG(dstreg)-=4;
//type:1 datatype: 4, iib->dtype:4, iib->stype:4
  uint32 dstdata = fetchlong(dstaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif

ABORT_OPCODE_CHK();
//iib->dtype:4, iib->stype:4 init:(sint32)dstdata + (sint32)srcdata+ XFLAG
  uint32 outdata = (sint32)dstdata + (sint32)srcdata+ XFLAG;

ABORT_OPCODE_CHK();
//type:1  iib->dtype:4, iib->stype:4
  storelong(dstaddr, outdata);

ABORT_OPCODE_CHK();

  VFLAG = (((sint32)srcdata < 0) == ((sint32)dstdata < 0)) &&
    (((sint32)dstdata < 0) != ((sint32)outdata < 0));
  {
    int Sm = (sint32)srcdata < 0;
    int Dm = (sint32)dstdata < 0;
    int Rm = (sint32)outdata < 0;
    XFLAG = CFLAG = (Sm && Dm) || (!Rm && (Dm || Sm));
  }
  NFLAG = ((sint32)outdata) < 0;
  if (outdata) ZFLAG = 0;
  PC+= 2;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

