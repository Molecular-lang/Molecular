/* Generated automatically by the program `genrecog' from the target
   machine description file.  */

#define IN_TARGET_CODE 1

#include "config.h"
#include "system.h"
#include "coretypes.h"
#include "backend.h"
#include "predict.h"
#include "rtl.h"
#include "memmodel.h"
#include "tm_p.h"
#include "emit-rtl.h"
#include "insn-config.h"
#include "recog.h"
#include "output.h"
#include "flags.h"
#include "df.h"
#include "resource.h"
#include "diagnostic-core.h"
#include "reload.h"
#include "regs.h"
#include "tm-constrs.h"
#include "insn-recog.h"


/* `recog' contains a decision tree that recognizes whether the rtx
   X0 is a valid instruction.

   recog returns -1 if the rtx is not valid.  If the rtx is valid, recog
   returns a nonnegative number which is the insn code number for the
   pattern that matched.  This is the same as the order in the machine
   description of the entry that matched.  This number can be used as an
   index into `insn_data' and other tables.
   The third parameter to recog is an optional pointer to an int.  If
   present, recog will accept a pattern if it matches except for missing
   CLOBBER expressions at the end.  In that case, the value pointed to by
   the optional pointer will be set to the number of CLOBBERs that need
   to be added (it should be initialized to zero by the caller).  If it   is set nonzero, the caller should allocate a PARALLEL of the
   appropriate size, copy the initial entries, and call add_clobbers
   (found in insn-emit.cc) to fill in the CLOBBERs.

   The function split_insns returns 0 if the rtl could not
   be split or the split rtl as an INSN list if it can be.

   The function peephole2_insns returns 0 if the rtl could not
   be matched. If there was a match, the new rtl is returned in an INSN list,
   and LAST_INSN will point to the last recognized insn in the old sequence.
*/




int
pattern8 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1
      || !register_mmxmem_operand (operands[1], i1)
      || !register_mmxmem_operand (operands[2], i1))
    return -1;
  return 0;
}

int
pattern14 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1
      || !register_operand (operands[1], i1)
      || !nonimmediate_operand (operands[2], i1))
    return -1;
  return 0;
}

int
pattern17 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  operands[3] = x3;
  if (!const_int_operand (operands[3], E_QImode))
    return -1;
  return pattern16 (x1); /* [-1, 1] */
}

int
pattern21 (rtx x1, int *pnum_clobbers)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  int res ATTRIBUTE_UNUSED;
  if (pnum_clobbers == NULL)
    return -1;
  x2 = XEXP (x1, 0);
  operands[0] = x2;
  x3 = XEXP (x1, 1);
  x4 = XEXP (x3, 0);
  operands[1] = x4;
  x5 = XEXP (x3, 1);
  operands[2] = x5;
  switch (GET_MODE (operands[0]))
    {
    case E_DImode:
      return pattern6 (x3, 
E_DImode); /* [-1, 0] */

    case E_SImode:
      if (pattern6 (x3, 
E_SImode) != 0)
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern26 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  operands[0] = x2;
  x3 = XEXP (x1, 1);
  x4 = XEXP (x3, 0);
  operands[1] = x4;
  x5 = XEXP (x3, 1);
  operands[2] = x5;
  switch (GET_MODE (operands[0]))
    {
    case E_V32HFmode:
      return pattern25 (x3, 
E_V32HFmode); /* [-1, 0] */

    case E_V16HFmode:
      if (pattern25 (x3, 
E_V16HFmode) != 0)
        return -1;
      return 1;

    case E_V8HFmode:
      if (pattern25 (x3, 
E_V8HFmode) != 0)
        return -1;
      return 2;

    case E_V16SFmode:
      if (pattern25 (x3, 
E_V16SFmode) != 0)
        return -1;
      return 3;

    case E_V8SFmode:
      if (pattern25 (x3, 
E_V8SFmode) != 0)
        return -1;
      return 4;

    case E_V4SFmode:
      if (pattern25 (x3, 
E_V4SFmode) != 0)
        return -1;
      return 5;

    case E_V8DFmode:
      if (pattern25 (x3, 
E_V8DFmode) != 0)
        return -1;
      return 6;

    case E_V4DFmode:
      if (pattern25 (x3, 
E_V4DFmode) != 0)
        return -1;
      return 7;

    case E_V2DFmode:
      if (pattern25 (x3, 
E_V2DFmode) != 0)
        return -1;
      return 8;

    case E_V32QImode:
      if (!register_operand (operands[0], E_V32QImode)
          || GET_MODE (x3) != E_V32QImode
          || !nonimmediate_operand (operands[2], E_V32QImode))
        return -1;
      return 9;

    case E_V16HImode:
      if (!register_operand (operands[0], E_V16HImode)
          || GET_MODE (x3) != E_V16HImode
          || !nonimmediate_operand (operands[2], E_V16HImode))
        return -1;
      return 10;

    case E_V8SImode:
      if (pattern5 (x3, 
E_V8SImode) != 0)
        return -1;
      return 11;

    case E_V16SImode:
      if (pattern5 (x3, 
E_V16SImode) != 0)
        return -1;
      return 12;

    case E_V4SImode:
      if (!register_operand (operands[0], E_V4SImode)
          || GET_MODE (x3) != E_V4SImode)
        return -1;
      return 13;

    case E_V8DImode:
      if (pattern5 (x3, 
E_V8DImode) != 0)
        return -1;
      return 14;

    case E_V4DImode:
      if (pattern5 (x3, 
E_V4DImode) != 0)
        return -1;
      return 15;

    case E_V2DImode:
      if (pattern5 (x3, 
E_V2DImode) != 0)
        return -1;
      return 16;

    case E_V64QImode:
      if (pattern14 (x3, 
E_V64QImode) != 0)
        return -1;
      return 17;

    case E_V16QImode:
      if (!register_operand (operands[0], E_V16QImode)
          || GET_MODE (x3) != E_V16QImode)
        return -1;
      return 18;

    case E_V32HImode:
      if (pattern14 (x3, 
E_V32HImode) != 0)
        return -1;
      return 19;

    case E_V8HImode:
      if (!register_operand (operands[0], E_V8HImode)
          || GET_MODE (x3) != E_V8HImode)
        return -1;
      return 20;

    case E_V32BFmode:
      if (pattern14 (x3, 
E_V32BFmode) != 0)
        return -1;
      return 21;

    case E_V16BFmode:
      if (pattern14 (x3, 
E_V16BFmode) != 0)
        return -1;
      return 22;

    case E_V8BFmode:
      if (pattern14 (x3, 
E_V8BFmode) != 0)
        return -1;
      return 23;

    default:
      return -1;
    }
}

int
pattern55 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) != i1)
    return -1;
  x3 = XEXP (x1, 0);
  if (GET_CODE (x3) != REG
      || REGNO (x3) != 17
      || GET_MODE (x3) != i1)
    return -1;
  return 0;
}

int
pattern57 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  operands[0] = x2;
  x3 = XEXP (x1, 1);
  x4 = XVECEXP (x3, 0, 0);
  operands[1] = x4;
  switch (GET_MODE (operands[0]))
    {
    case E_SFmode:
      if (!register_operand (operands[0], E_SFmode)
          || GET_MODE (x3) != E_SFmode
          || !nonimmediate_operand (operands[1], E_SFmode))
        return -1;
      return 0;

    case E_HFmode:
      if (!register_operand (operands[0], E_HFmode)
          || GET_MODE (x3) != E_HFmode
          || !nonimmediate_operand (operands[1], E_HFmode))
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern67 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  operands[0] = x2;
  x3 = XEXP (x1, 1);
  x4 = XVECEXP (x3, 0, 0);
  operands[1] = x4;
  x5 = XVECEXP (x3, 0, 1);
  operands[2] = x5;
  return pattern66 (x3); /* [-1, 8] */
}

int
pattern72 (rtx x1, int *pnum_clobbers)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (pnum_clobbers == NULL
      || !nonimmediate_operand (operands[0], E_TImode)
      || GET_MODE (x1) != E_TImode
      || !nonimmediate_operand (operands[1], E_TImode)
      || !x86_64_hilo_general_operand (operands[2], E_TImode))
    return -1;
  return 0;
}

int
pattern79 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != E_QImode
      || !register_operand (operands[0], E_HImode)
      || GET_MODE (x1) != E_HImode)
    return -1;
  x3 = XEXP (x2, 0);
  operands[1] = x3;
  if (!nonimmediate_operand (operands[1], E_QImode))
    return -1;
  return 0;
}

int
pattern83 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  x5 = XEXP (x4, 0);
  operands[2] = x5;
  if (!nonimmediate_operand (operands[2], i2))
    return -1;
  x6 = XEXP (x3, 1);
  operands[3] = x6;
  if (!const_int_operand (operands[3], E_QImode))
    return -1;
  x7 = XEXP (x2, 1);
  x8 = XEXP (x7, 0);
  operands[4] = x8;
  if (!nonimmediate_operand (operands[4], i2))
    return -1;
  x9 = XEXP (x1, 1);
  switch (GET_CODE (x9))
    {
    case REG:
    case SUBREG:
      operands[1] = x9;
      if (!register_operand (operands[1], i1))
        return -1;
      return 0;

    case ZERO_EXTEND:
      if (GET_MODE (x9) != i1)
        return -1;
      x10 = XEXP (x9, 0);
      operands[1] = x10;
      if (!nonimmediate_operand (operands[1], i2))
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern98 ()
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  switch (GET_MODE (operands[1]))
    {
    case E_V8HImode:
      if (!register_operand (operands[1], E_V8HImode))
        return -1;
      return 0;

    case E_V8SImode:
      if (!register_operand (operands[1], E_V8SImode))
        return -1;
      return 1;

    case E_V8DImode:
      if (!register_operand (operands[1], E_V8DImode))
        return -1;
      return 2;

    default:
      return -1;
    }
}

int
pattern103 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (!nonimmediate_operand (operands[0], i1)
      || GET_MODE (x1) != i1)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != i1
      || !x86_64_general_operand (operands[1], i1))
    return -1;
  return 0;
}

int
pattern107 (rtx x1, int *pnum_clobbers)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  operands[1] = x3;
  x4 = XEXP (x2, 1);
  operands[2] = x4;
  return pattern106 (x1, pnum_clobbers); /* [-1, 4] */
}

int
pattern112 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != E_SImode)
    return -1;
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) != CONST_INT
      || XWINT (x3, 0) != -65536L)
    return -1;
  x4 = XEXP (x1, 1);
  if (GET_CODE (x4) != LSHIFTRT
      || GET_MODE (x4) != E_SImode)
    return -1;
  x5 = XEXP (x4, 0);
  if (GET_CODE (x5) != BSWAP
      || GET_MODE (x5) != E_SImode)
    return -1;
  x6 = XEXP (x4, 1);
  if (x6 != const_int_rtx[MAX_SAVED_CONST_INT + 16])
    return -1;
  return 0;
}

int
pattern119 (rtx x1, int *pnum_clobbers)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4;
  int res ATTRIBUTE_UNUSED;
  if (pnum_clobbers == NULL)
    return -1;
  x2 = XEXP (x1, 0);
  operands[0] = x2;
  x3 = XEXP (x1, 1);
  x4 = XVECEXP (x3, 0, 0);
  operands[1] = x4;
  if (!register_operand (operands[1], E_XFmode))
    return -1;
  switch (GET_MODE (operands[0]))
    {
    case E_SImode:
      if (!nonimmediate_operand (operands[0], E_SImode)
          || GET_MODE (x3) != E_SImode)
        return -1;
      return 0;

    case E_DImode:
      if (!nonimmediate_operand (operands[0], E_DImode)
          || GET_MODE (x3) != E_DImode)
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern132 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  operands[1] = x3;
  x4 = XEXP (x2, 1);
  operands[2] = x4;
  x5 = XEXP (x1, 2);
  switch (GET_CODE (x5))
    {
    case REG:
    case SUBREG:
      operands[4] = x5;
      x6 = XEXP (x1, 1);
      operands[3] = x6;
      switch (GET_MODE (operands[0]))
        {
        case E_V32HFmode:
          return pattern126 (x1, 
E_V32HFmode, 
E_SImode); /* [-1, 0] */

        case E_V16HFmode:
          if (pattern126 (x1, 
E_V16HFmode, 
E_HImode) != 0)
            return -1;
          return 1;

        case E_V8HFmode:
          if (pattern126 (x1, 
E_V8HFmode, 
E_QImode) != 0)
            return -1;
          return 2;

        case E_V16SFmode:
          if (pattern126 (x1, 
E_V16SFmode, 
E_HImode) != 0)
            return -1;
          return 3;

        case E_V8SFmode:
          if (pattern126 (x1, 
E_V8SFmode, 
E_QImode) != 0)
            return -1;
          return 4;

        case E_V4SFmode:
          if (pattern126 (x1, 
E_V4SFmode, 
E_QImode) != 0)
            return -1;
          return 5;

        case E_V8DFmode:
          if (pattern126 (x1, 
E_V8DFmode, 
E_QImode) != 0)
            return -1;
          return 6;

        case E_V4DFmode:
          if (pattern126 (x1, 
E_V4DFmode, 
E_QImode) != 0)
            return -1;
          return 7;

        case E_V2DFmode:
          if (pattern126 (x1, 
E_V2DFmode, 
E_QImode) != 0)
            return -1;
          return 8;

        case E_V16SImode:
          if (pattern127 (x1, 
E_V16SImode, 
E_HImode) != 0)
            return -1;
          return 9;

        case E_V8SImode:
          if (pattern127 (x1, 
E_V8SImode, 
E_QImode) != 0)
            return -1;
          return 10;

        case E_V4SImode:
          if (pattern128 (x1, 
E_QImode, 
E_V4SImode) != 0)
            return -1;
          return 11;

        case E_V8DImode:
          if (pattern127 (x1, 
E_V8DImode, 
E_QImode) != 0)
            return -1;
          return 12;

        case E_V4DImode:
          if (pattern127 (x1, 
E_V4DImode, 
E_QImode) != 0)
            return -1;
          return 13;

        case E_V2DImode:
          if (pattern127 (x1, 
E_V2DImode, 
E_QImode) != 0)
            return -1;
          return 14;

        case E_V64QImode:
          if (pattern129 (x1, 
E_V64QImode, 
E_DImode) != 0)
            return -1;
          return 15;

        case E_V16QImode:
          if (pattern128 (x1, 
E_HImode, 
E_V16QImode) != 0)
            return -1;
          return 16;

        case E_V32QImode:
          if (pattern129 (x1, 
E_V32QImode, 
E_SImode) != 0)
            return -1;
          return 17;

        case E_V32HImode:
          if (pattern129 (x1, 
E_V32HImode, 
E_SImode) != 0)
            return -1;
          return 18;

        case E_V16HImode:
          if (pattern129 (x1, 
E_V16HImode, 
E_HImode) != 0)
            return -1;
          return 19;

        case E_V8HImode:
          if (pattern129 (x1, 
E_V8HImode, 
E_QImode) != 0)
            return -1;
          return 20;

        case E_V32BFmode:
          if (pattern129 (x1, 
E_V32BFmode, 
E_SImode) != 0)
            return -1;
          return 21;

        case E_V16BFmode:
          if (pattern129 (x1, 
E_V16BFmode, 
E_HImode) != 0)
            return -1;
          return 22;

        case E_V8BFmode:
          if (pattern129 (x1, 
E_V8BFmode, 
E_QImode) != 0)
            return -1;
          return 23;

        default:
          return -1;
        }

    case CONST_INT:
      res = pattern131 (x1);
      if (res >= 0)
        return res + 24; /* [24, 26] */
      return -1;

    default:
      return -1;
    }
}

int
pattern170 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  operands[0] = x2;
  x3 = XEXP (x1, 1);
  x4 = XVECEXP (x3, 0, 0);
  operands[1] = x4;
  x5 = XVECEXP (x3, 0, 1);
  operands[2] = x5;
  x6 = XVECEXP (x3, 0, 2);
  operands[3] = x6;
  switch (GET_MODE (operands[0]))
    {
    case E_V8DImode:
      return pattern169 (x3, 
E_V8DImode); /* [-1, 0] */

    case E_V4DImode:
      if (pattern169 (x3, 
E_V4DImode) != 0)
        return -1;
      return 1;

    case E_V2DImode:
      if (pattern169 (x3, 
E_V2DImode) != 0)
        return -1;
      return 2;

    default:
      return -1;
    }
}

int
pattern178 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != E_DImode)
    return -1;
  x3 = XEXP (x1, 1);
  if (x3 != const_int_rtx[MAX_SAVED_CONST_INT + 0]
      || !register_operand (operands[0], E_V2DImode)
      || GET_MODE (x1) != E_V2DImode)
    return -1;
  x4 = XEXP (x2, 0);
  operands[1] = x4;
  switch (GET_MODE (operands[1]))
    {
    case E_HImode:
      if (!nonimmediate_operand (operands[1], E_HImode))
        return -1;
      return 0;

    case E_SImode:
      if (!nonimmediate_operand (operands[1], E_SImode))
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern189 (rtx x1, rtx_code i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12, x13, x14, x15, x16, x17;
  rtx x18, x19, x20, x21, x22, x23, x24, x25;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) != VEC_SELECT)
    return -1;
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) != PARALLEL)
    return -1;
  x5 = XEXP (x1, 1);
  if (GET_CODE (x5) != i1)
    return -1;
  x6 = XEXP (x5, 0);
  if (GET_CODE (x6) != VEC_SELECT)
    return -1;
  x7 = XEXP (x6, 1);
  if (GET_CODE (x7) != PARALLEL)
    return -1;
  x8 = XEXP (x3, 0);
  operands[1] = x8;
  x9 = XEXP (x6, 0);
  if (!rtx_equal_p (x9, operands[1]))
    return -1;
  switch (XVECLEN (x4, 0))
    {
    case 8:
      x10 = XVECEXP (x4, 0, 0);
      if (x10 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
        return -1;
      x11 = XVECEXP (x4, 0, 1);
      if (x11 != const_int_rtx[MAX_SAVED_CONST_INT + 2])
        return -1;
      x12 = XVECEXP (x4, 0, 2);
      if (x12 != const_int_rtx[MAX_SAVED_CONST_INT + 4])
        return -1;
      x13 = XVECEXP (x4, 0, 3);
      if (x13 != const_int_rtx[MAX_SAVED_CONST_INT + 6])
        return -1;
      x14 = XVECEXP (x4, 0, 4);
      if (x14 != const_int_rtx[MAX_SAVED_CONST_INT + 8])
        return -1;
      x15 = XVECEXP (x4, 0, 5);
      if (x15 != const_int_rtx[MAX_SAVED_CONST_INT + 10])
        return -1;
      x16 = XVECEXP (x4, 0, 6);
      if (x16 != const_int_rtx[MAX_SAVED_CONST_INT + 12])
        return -1;
      x17 = XVECEXP (x4, 0, 7);
      if (x17 != const_int_rtx[MAX_SAVED_CONST_INT + 14]
          || XVECLEN (x7, 0) != 8)
        return -1;
      x18 = XVECEXP (x7, 0, 0);
      if (x18 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
        return -1;
      x19 = XVECEXP (x7, 0, 1);
      if (x19 != const_int_rtx[MAX_SAVED_CONST_INT + 3])
        return -1;
      x20 = XVECEXP (x7, 0, 2);
      if (x20 != const_int_rtx[MAX_SAVED_CONST_INT + 5])
        return -1;
      x21 = XVECEXP (x7, 0, 3);
      if (x21 != const_int_rtx[MAX_SAVED_CONST_INT + 7])
        return -1;
      x22 = XVECEXP (x7, 0, 4);
      if (x22 != const_int_rtx[MAX_SAVED_CONST_INT + 9])
        return -1;
      x23 = XVECEXP (x7, 0, 5);
      if (x23 != const_int_rtx[MAX_SAVED_CONST_INT + 11])
        return -1;
      x24 = XVECEXP (x7, 0, 6);
      if (x24 != const_int_rtx[MAX_SAVED_CONST_INT + 13])
        return -1;
      x25 = XVECEXP (x7, 0, 7);
      if (x25 != const_int_rtx[MAX_SAVED_CONST_INT + 15]
          || pattern188 (x1, 
E_V8QImode, 
E_V8HImode, 
E_V16QImode) != 0)
        return -1;
      return 0;

    case 4:
      x10 = XVECEXP (x4, 0, 0);
      if (x10 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
        return -1;
      x11 = XVECEXP (x4, 0, 1);
      if (x11 != const_int_rtx[MAX_SAVED_CONST_INT + 2])
        return -1;
      x12 = XVECEXP (x4, 0, 2);
      if (x12 != const_int_rtx[MAX_SAVED_CONST_INT + 4])
        return -1;
      x13 = XVECEXP (x4, 0, 3);
      if (x13 != const_int_rtx[MAX_SAVED_CONST_INT + 6]
          || XVECLEN (x7, 0) != 4)
        return -1;
      x18 = XVECEXP (x7, 0, 0);
      if (x18 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
        return -1;
      x19 = XVECEXP (x7, 0, 1);
      if (x19 != const_int_rtx[MAX_SAVED_CONST_INT + 3])
        return -1;
      x20 = XVECEXP (x7, 0, 2);
      if (x20 != const_int_rtx[MAX_SAVED_CONST_INT + 5])
        return -1;
      x21 = XVECEXP (x7, 0, 3);
      if (x21 != const_int_rtx[MAX_SAVED_CONST_INT + 7]
          || pattern188 (x1, 
E_V4HImode, 
E_V4SImode, 
E_V8HImode) != 0)
        return -1;
      return 1;

    case 2:
      x10 = XVECEXP (x4, 0, 0);
      if (x10 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
        return -1;
      x11 = XVECEXP (x4, 0, 1);
      if (x11 != const_int_rtx[MAX_SAVED_CONST_INT + 2]
          || XVECLEN (x7, 0) != 2)
        return -1;
      x18 = XVECEXP (x7, 0, 0);
      if (x18 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
        return -1;
      x19 = XVECEXP (x7, 0, 1);
      if (x19 != const_int_rtx[MAX_SAVED_CONST_INT + 3]
          || pattern188 (x1, 
E_V2SImode, 
E_V2DImode, 
E_V4SImode) != 0)
        return -1;
      return 2;

    default:
      return -1;
    }
}

int
pattern215 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x2) != CLOBBER)
    return -1;
  x3 = XVECEXP (x1, 0, 2);
  if (GET_CODE (x3) != CLOBBER)
    return -1;
  x4 = XEXP (x3, 0);
  if (GET_CODE (x4) != REG
      || REGNO (x4) != 17
      || GET_MODE (x4) != E_CCmode)
    return -1;
  x5 = XVECEXP (x1, 0, 0);
  x6 = XEXP (x5, 0);
  operands[0] = x6;
  x7 = XEXP (x5, 1);
  x8 = XEXP (x7, 0);
  operands[1] = x8;
  x9 = XEXP (x7, 1);
  operands[2] = x9;
  x10 = XEXP (x2, 0);
  operands[3] = x10;
  switch (GET_MODE (operands[0]))
    {
    case E_SImode:
      return pattern214 (x7, 
E_SImode); /* [-1, 0] */

    case E_DImode:
      if (pattern214 (x7, 
E_DImode) != 0)
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern226 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) != MEM)
    return -1;
  x4 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x4) != SET)
    return -1;
  x5 = XEXP (x4, 1);
  if (GET_CODE (x5) != PLUS)
    return -1;
  x6 = XEXP (x5, 1);
  if (GET_CODE (x6) != CONST_INT)
    return -1;
  return 0;
}

int
pattern235 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1
      || !nonimmediate_operand (operands[1], i1)
      || !const_vector_duplicate_operand (operands[2], i1))
    return -1;
  return 0;
}

int
pattern241 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  switch (GET_MODE (operands[0]))
    {
    case E_DImode:
      if (!register_operand (operands[0], E_DImode)
          || GET_MODE (x1) != E_DImode
          || !register_operand (operands[1], E_DImode))
        return -1;
      return 0;

    case E_TImode:
      if (!register_operand (operands[0], E_TImode)
          || GET_MODE (x1) != E_TImode
          || !register_operand (operands[1], E_TImode))
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern248 (rtx x1, int *pnum_clobbers)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12;
  int res ATTRIBUTE_UNUSED;
  if (pnum_clobbers == NULL)
    return -1;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) != E_QImode)
    return -1;
  x4 = XEXP (x3, 0);
  if (GET_CODE (x4) != SUBREG
      || maybe_ne (SUBREG_BYTE (x4), 0)
      || GET_MODE (x4) != E_QImode)
    return -1;
  x5 = XEXP (x4, 0);
  switch (GET_CODE (x5))
    {
    case SIGN_EXTRACT:
    case ZERO_EXTRACT:
      operands[3] = x5;
      x6 = XEXP (x5, 1);
      if (x6 != const_int_rtx[MAX_SAVED_CONST_INT + 8])
        return -1;
      x7 = XEXP (x5, 2);
      if (x7 != const_int_rtx[MAX_SAVED_CONST_INT + 8])
        return -1;
      x8 = XEXP (x1, 0);
      if (GET_CODE (x8) != ZERO_EXTRACT)
        return -1;
      x9 = XEXP (x8, 1);
      if (x9 != const_int_rtx[MAX_SAVED_CONST_INT + 8])
        return -1;
      x10 = XEXP (x8, 2);
      if (x10 != const_int_rtx[MAX_SAVED_CONST_INT + 8])
        return -1;
      x11 = XEXP (x8, 0);
      operands[0] = x11;
      if (!int248_register_operand (operands[0], E_VOIDmode))
        return -1;
      x12 = XEXP (x5, 0);
      operands[1] = x12;
      if (!int248_register_operand (operands[1], E_VOIDmode))
        return -1;
      return 0;

    default:
      return -1;
    }
}

int
pattern272 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  if (XVECLEN (x2, 0) != 1
      || XINT (x2, 1) != 46
      || GET_MODE (x2) != E_V4SImode)
    return -1;
  x3 = XEXP (x1, 1);
  if (XVECLEN (x3, 0) != 2)
    return -1;
  x4 = XVECEXP (x3, 0, 0);
  if (x4 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
    return -1;
  x5 = XVECEXP (x3, 0, 1);
  if (x5 != const_int_rtx[MAX_SAVED_CONST_INT + 1]
      || !register_operand (operands[0], E_V2SImode)
      || GET_MODE (x1) != E_V2SImode)
    return -1;
  x6 = XVECEXP (x2, 0, 0);
  operands[1] = x6;
  if (!nonimmediate_operand (operands[1], E_V4SFmode))
    return -1;
  return 0;
}

int
pattern281 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7;
  int res ATTRIBUTE_UNUSED;
  if (!const_int_operand (operands[3], E_QImode))
    return -1;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  if (x3 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
    return -1;
  x4 = XEXP (x1, 0);
  operands[0] = x4;
  if (!flags_reg_operand (operands[0], E_VOIDmode))
    return -1;
  operands[1] = x2;
  if (!compare_operator (operands[1], E_VOIDmode))
    return -1;
  x5 = XEXP (x2, 0);
  x6 = XEXP (x5, 0);
  operands[2] = x6;
  if (!int_nonimmediate_operand (operands[2], E_VOIDmode))
    return -1;
  x7 = XEXP (x5, 2);
  operands[4] = x7;
  if (!const_int_operand (operands[4], E_QImode))
    return -1;
  switch (GET_MODE (x5))
    {
    case E_HImode:
      return 0;

    case E_SImode:
      return 1;

    case E_DImode:
      return 2;

    default:
      return -1;
    }
}

int
pattern294 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (!memory_operand (operands[0], E_DImode)
      || GET_MODE (x1) != E_DImode)
    return -1;
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case E_V8QImode:
      return pattern98 (); /* [-1, 2] */

    case E_V4HImode:
      switch (GET_MODE (operands[1]))
        {
        case E_V4SImode:
          if (!register_operand (operands[1], E_V4SImode))
            return -1;
          return 3;

        case E_V4DImode:
          if (!register_operand (operands[1], E_V4DImode))
            return -1;
          return 4;

        default:
          return -1;
        }

    case E_V2SImode:
      if (!register_operand (operands[1], E_V2DImode))
        return -1;
      return 5;

    default:
      return -1;
    }
}

int
pattern306 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i2)
      || GET_MODE (x1) != i2)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != i2)
    return -1;
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) != i1)
    return -1;
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) != i1
      || !register_operand (operands[1], i2)
      || !nonimmediate_operand (operands[2], i1))
    return -1;
  return 0;
}

int
pattern314 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1
      || !vector_all_ones_operand (operands[1], i1)
      || !const0_operand (operands[2], i1))
    return -1;
  x2 = XEXP (x1, 2);
  if (GET_MODE (x2) != i2)
    return -1;
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) != i2
      || !nonimmediate_operand (operands[3], i1)
      || !nonimmediate_operand (operands[4], i1)
      || !const_0_to_7_operand (operands[5], E_SImode))
    return -1;
  return 0;
}

int
pattern322 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  operands[1] = x2;
  switch (GET_MODE (operands[0]))
    {
    case E_V16QImode:
      if (!register_operand (operands[0], E_V16QImode)
          || GET_MODE (x1) != E_V16QImode
          || !nonimmediate_operand (operands[1], E_V16HFmode))
        return -1;
      return 0;

    case E_V32QImode:
      if (!register_operand (operands[0], E_V32QImode)
          || GET_MODE (x1) != E_V32QImode
          || !nonimmediate_operand (operands[1], E_V32HFmode))
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern326 (rtx x1, rtx_code i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12, x13, x14, x15, x16, x17;
  rtx x18, x19, x20, x21, x22, x23, x24, x25;
  rtx x26, x27, x28, x29, x30, x31, x32, x33;
  rtx x34, x35, x36, x37, x38, x39;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  if (GET_CODE (x4) != VEC_SELECT)
    return -1;
  x5 = XEXP (x4, 1);
  if (GET_CODE (x5) != PARALLEL
      || XVECLEN (x5, 0) != 1)
    return -1;
  x6 = XVECEXP (x5, 0, 0);
  if (x6 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
    return -1;
  x7 = XEXP (x3, 1);
  if (GET_CODE (x7) != VEC_SELECT)
    return -1;
  x8 = XEXP (x7, 1);
  if (GET_CODE (x8) != PARALLEL
      || XVECLEN (x8, 0) != 1)
    return -1;
  x9 = XVECEXP (x8, 0, 0);
  if (x9 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
    return -1;
  x10 = XEXP (x2, 1);
  if (GET_CODE (x10) != i1)
    return -1;
  x11 = XEXP (x10, 0);
  if (GET_CODE (x11) != VEC_SELECT)
    return -1;
  x12 = XEXP (x11, 1);
  if (GET_CODE (x12) != PARALLEL
      || XVECLEN (x12, 0) != 1)
    return -1;
  x13 = XVECEXP (x12, 0, 0);
  if (GET_CODE (x13) != CONST_INT)
    return -1;
  x14 = XEXP (x10, 1);
  if (GET_CODE (x14) != VEC_SELECT)
    return -1;
  x15 = XEXP (x14, 1);
  if (GET_CODE (x15) != PARALLEL
      || XVECLEN (x15, 0) != 1)
    return -1;
  x16 = XVECEXP (x15, 0, 0);
  if (GET_CODE (x16) != CONST_INT)
    return -1;
  x17 = XEXP (x1, 1);
  if (GET_CODE (x17) != VEC_CONCAT)
    return -1;
  x18 = XEXP (x17, 0);
  if (GET_CODE (x18) != i1)
    return -1;
  x19 = XEXP (x18, 0);
  if (GET_CODE (x19) != VEC_SELECT)
    return -1;
  x20 = XEXP (x19, 1);
  if (GET_CODE (x20) != PARALLEL
      || XVECLEN (x20, 0) != 1)
    return -1;
  x21 = XVECEXP (x20, 0, 0);
  if (GET_CODE (x21) != CONST_INT)
    return -1;
  x22 = XEXP (x18, 1);
  if (GET_CODE (x22) != VEC_SELECT)
    return -1;
  x23 = XEXP (x22, 1);
  if (GET_CODE (x23) != PARALLEL
      || XVECLEN (x23, 0) != 1)
    return -1;
  x24 = XVECEXP (x23, 0, 0);
  if (GET_CODE (x24) != CONST_INT)
    return -1;
  x25 = XEXP (x17, 1);
  if (GET_CODE (x25) != i1)
    return -1;
  x26 = XEXP (x25, 0);
  if (GET_CODE (x26) != VEC_SELECT)
    return -1;
  x27 = XEXP (x26, 1);
  if (GET_CODE (x27) != PARALLEL
      || XVECLEN (x27, 0) != 1)
    return -1;
  x28 = XVECEXP (x27, 0, 0);
  if (x28 != const_int_rtx[MAX_SAVED_CONST_INT + 2])
    return -1;
  x29 = XEXP (x25, 1);
  if (GET_CODE (x29) != VEC_SELECT)
    return -1;
  x30 = XEXP (x29, 1);
  if (GET_CODE (x30) != PARALLEL
      || XVECLEN (x30, 0) != 1)
    return -1;
  x31 = XVECEXP (x30, 0, 0);
  if (x31 != const_int_rtx[MAX_SAVED_CONST_INT + 3])
    return -1;
  x32 = XEXP (x4, 0);
  operands[1] = x32;
  x33 = XEXP (x7, 0);
  if (!rtx_equal_p (x33, operands[1]))
    return -1;
  switch (XWINT (x13, 0))
    {
    case 0L:
      if (XWINT (x16, 0) != 1L
          || XWINT (x21, 0) != 2L
          || XWINT (x24, 0) != 3L
          || !register_operand (operands[0], E_V4DFmode)
          || GET_MODE (x1) != E_V4DFmode
          || GET_MODE (x2) != E_V2DFmode
          || GET_MODE (x3) != E_DFmode
          || GET_MODE (x4) != E_DFmode
          || !register_operand (operands[1], E_V4DFmode)
          || GET_MODE (x7) != E_DFmode
          || GET_MODE (x10) != E_DFmode
          || GET_MODE (x11) != E_DFmode)
        return -1;
      x34 = XEXP (x11, 0);
      operands[2] = x34;
      if (!nonimmediate_operand (operands[2], E_V4DFmode)
          || GET_MODE (x14) != E_DFmode
          || GET_MODE (x17) != E_V2DFmode
          || GET_MODE (x18) != E_DFmode
          || GET_MODE (x19) != E_DFmode
          || GET_MODE (x22) != E_DFmode
          || GET_MODE (x25) != E_DFmode
          || GET_MODE (x26) != E_DFmode
          || GET_MODE (x29) != E_DFmode)
        return -1;
      x35 = XEXP (x14, 0);
      if (!rtx_equal_p (x35, operands[2]))
        return -1;
      x36 = XEXP (x19, 0);
      if (!rtx_equal_p (x36, operands[1]))
        return -1;
      x37 = XEXP (x22, 0);
      if (!rtx_equal_p (x37, operands[1]))
        return -1;
      x38 = XEXP (x26, 0);
      if (!rtx_equal_p (x38, operands[2]))
        return -1;
      x39 = XEXP (x29, 0);
      if (!rtx_equal_p (x39, operands[2]))
        return -1;
      return 0;

    case 2L:
      if (XWINT (x16, 0) != 3L
          || XWINT (x21, 0) != 0L
          || XWINT (x24, 0) != 1L
          || !register_operand (operands[0], E_V4SFmode)
          || GET_MODE (x1) != E_V4SFmode
          || GET_MODE (x2) != E_V2SFmode
          || GET_MODE (x3) != E_SFmode
          || GET_MODE (x4) != E_SFmode
          || !register_operand (operands[1], E_V4SFmode)
          || GET_MODE (x7) != E_SFmode
          || GET_MODE (x10) != E_SFmode
          || GET_MODE (x11) != E_SFmode
          || GET_MODE (x14) != E_SFmode
          || GET_MODE (x17) != E_V2SFmode
          || GET_MODE (x18) != E_SFmode
          || GET_MODE (x19) != E_SFmode)
        return -1;
      x36 = XEXP (x19, 0);
      operands[2] = x36;
      if (!vector_operand (operands[2], E_V4SFmode)
          || GET_MODE (x22) != E_SFmode
          || GET_MODE (x25) != E_SFmode
          || GET_MODE (x26) != E_SFmode
          || GET_MODE (x29) != E_SFmode)
        return -1;
      x34 = XEXP (x11, 0);
      if (!rtx_equal_p (x34, operands[1]))
        return -1;
      x35 = XEXP (x14, 0);
      if (!rtx_equal_p (x35, operands[1]))
        return -1;
      x37 = XEXP (x22, 0);
      if (!rtx_equal_p (x37, operands[2]))
        return -1;
      x38 = XEXP (x26, 0);
      if (!rtx_equal_p (x38, operands[2]))
        return -1;
      x39 = XEXP (x29, 0);
      if (!rtx_equal_p (x39, operands[2]))
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern371 (rtx x1, int i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  x4 = XEXP (x3, 0);
  x5 = XEXP (x4, 0);
  if (x5 != const_int_rtx[MAX_SAVED_CONST_INT + i1])
    return -1;
  x6 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x6) != CLOBBER)
    return -1;
  x7 = XEXP (x6, 0);
  if (GET_CODE (x7) != REG
      || REGNO (x7) != 17
      || GET_MODE (x7) != E_CCmode)
    return -1;
  x8 = XEXP (x2, 0);
  operands[0] = x8;
  return pattern370 (x3); /* [-1, 2] */
}

int
pattern379 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x2) != CLOBBER)
    return -1;
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) != REG
      || REGNO (x3) != 17
      || GET_MODE (x3) != E_CCmode)
    return -1;
  x4 = XVECEXP (x1, 0, 0);
  return pattern378 (x4); /* [-1, 1] */
}

int
pattern385 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  switch (GET_MODE (operands[0]))
    {
    case E_SFmode:
      if (!register_operand (operands[0], E_SFmode)
          || GET_MODE (x1) != E_SFmode)
        return -1;
      return 0;

    case E_DFmode:
      if (!register_operand (operands[0], E_DFmode)
          || GET_MODE (x1) != E_DFmode)
        return -1;
      return 1;

    case E_XFmode:
      if (!register_operand (operands[0], E_XFmode)
          || GET_MODE (x1) != E_XFmode)
        return -1;
      return 2;

    default:
      return -1;
    }
}

int
pattern394 ()
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  switch (GET_MODE (operands[0]))
    {
    case E_SImode:
      if (!register_operand (operands[0], E_SImode)
          || !memory_operand (operands[1], E_SImode))
        return -1;
      return 0;

    case E_DImode:
      if (!register_operand (operands[0], E_DImode)
          || !memory_operand (operands[1], E_DImode))
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern403 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x2) != CLOBBER)
    return -1;
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) != REG
      || REGNO (x3) != 17
      || GET_MODE (x3) != E_CCmode)
    return -1;
  x4 = XVECEXP (x1, 0, 0);
  x5 = XEXP (x4, 1);
  x6 = XEXP (x5, 1);
  switch (GET_CODE (x6))
    {
    case AND:
      if (GET_MODE (x6) != E_QImode)
        return -1;
      x7 = XEXP (x4, 0);
      operands[0] = x7;
      x8 = XEXP (x5, 0);
      operands[1] = x8;
      return pattern204 (x5); /* [-1, 3] */

    case PLUS:
      if (GET_MODE (x6) != E_QImode)
        return -1;
      x7 = XEXP (x4, 0);
      operands[0] = x7;
      x8 = XEXP (x5, 0);
      operands[1] = x8;
      res = pattern205 (x5);
      if (res >= 0)
        return res + 4; /* [4, 7] */
      return -1;

    case MINUS:
      if (GET_MODE (x6) != E_QImode)
        return -1;
      x7 = XEXP (x4, 0);
      operands[0] = x7;
      x8 = XEXP (x5, 0);
      operands[1] = x8;
      res = pattern206 (x5);
      if (res >= 0)
        return res + 8; /* [8, 11] */
      return -1;

    case CONST_INT:
    case CONST_WIDE_INT:
    case CONST_POLY_INT:
    case CONST_FIXED:
    case CONST_DOUBLE:
    case CONST_VECTOR:
    case CONST:
    case REG:
    case SUBREG:
    case LABEL_REF:
    case SYMBOL_REF:
    case HIGH:
      return 12;

    default:
      return -1;
    }
}

int
pattern421 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1
      || !register_operand (operands[1], i1))
    return -1;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  operands[2] = x4;
  if (!int248_register_operand (operands[2], E_VOIDmode))
    return -1;
  x5 = XEXP (x3, 1);
  operands[3] = x5;
  if (!const_int_operand (operands[3], E_VOIDmode))
    return -1;
  return 0;
}

int
pattern431 (rtx x1, int *pnum_clobbers)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7;
  int res ATTRIBUTE_UNUSED;
  if (pnum_clobbers == NULL)
    return -1;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  if (x4 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
    return -1;
  x5 = XEXP (x3, 0);
  operands[3] = x5;
  if (!int_nonimmediate_operand (operands[3], E_VOIDmode))
    return -1;
  x6 = XEXP (x2, 1);
  operands[1] = x6;
  x7 = XEXP (x1, 1);
  operands[2] = x7;
  switch (GET_MODE (operands[0]))
    {
    case E_QImode:
      return 0;

    case E_HImode:
      return 1;

    default:
      return -1;
    }
}

int
pattern442 (rtx x1, rtx_code i1, int i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  if (GET_CODE (x1) != MINUS
      || GET_MODE (x1) != E_SImode)
    return -1;
  x2 = XEXP (x1, 0);
  if (x2 != const_int_rtx[MAX_SAVED_CONST_INT + i2])
    return -1;
  x3 = XEXP (x1, 1);
  if (GET_CODE (x3) != i1)
    return -1;
  return 0;
}

int
pattern449 (rtx x1, int *pnum_clobbers)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  int res ATTRIBUTE_UNUSED;
  if (pnum_clobbers == NULL)
    return -1;
  x2 = XEXP (x1, 1);
  if (maybe_ne (SUBREG_BYTE (x2), 0)
      || GET_MODE (x2) != E_QImode)
    return -1;
  x3 = XEXP (x2, 0);
  switch (GET_CODE (x3))
    {
    case AND:
      return pattern448 (x1); /* [-1, 1] */

    case PLUS:
      x4 = XEXP (x3, 0);
      operands[2] = x4;
      if (!int_nonimmediate_operand (operands[2], E_VOIDmode))
        return -1;
      res = pattern447 (x1);
      if (res >= 0)
        return res + 2; /* [2, 3] */
      return -1;

    case MINUS:
      x4 = XEXP (x3, 0);
      operands[3] = x4;
      if (!const_int_operand (operands[3], E_VOIDmode))
        return -1;
      x5 = XEXP (x3, 1);
      operands[2] = x5;
      if (!int_nonimmediate_operand (operands[2], E_VOIDmode))
        return -1;
      res = pattern16 (x1);
      if (res >= 0)
        return res + 4; /* [4, 5] */
      return -1;

    default:
      return -1;
    }
}

int
pattern465 (rtx x1, machine_mode i1, machine_mode i2, machine_mode i3, machine_mode i4)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i2)
      || GET_MODE (x1) != i2)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != i2
      || !register_operand (operands[1], i4)
      || !nonimmediate_operand (operands[2], i3)
      || !nonimm_or_0_operand (operands[3], i2)
      || !register_operand (operands[4], i1))
    return -1;
  return 0;
}

int
pattern470 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i2)
      || GET_MODE (x1) != i2)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != i2
      || !vector_operand (operands[1], i2)
      || !vector_operand (operands[2], i2)
      || !vector_operand (operands[3], i2))
    return -1;
  x3 = XEXP (x1, 2);
  if (GET_MODE (x3) != i1
      || !register_operand (operands[4], E_QImode))
    return -1;
  return 0;
}

int
pattern478 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  x3 = XVECEXP (x2, 0, 0);
  operands[1] = x3;
  x4 = XVECEXP (x2, 0, 1);
  operands[2] = x4;
  x5 = XVECEXP (x2, 0, 2);
  operands[3] = x5;
  if (!const_0_to_255_operand (operands[3], E_SImode))
    return -1;
  x6 = XEXP (x1, 1);
  operands[4] = x6;
  x7 = XEXP (x1, 2);
  operands[5] = x7;
  switch (GET_MODE (operands[0]))
    {
    case E_V32HImode:
      return pattern477 (x1, 
E_V32HImode, 
E_SImode); /* [-1, 0] */

    case E_V16SImode:
      if (pattern477 (x1, 
E_V16SImode, 
E_HImode) != 0)
        return -1;
      return 1;

    case E_V8DImode:
      if (pattern477 (x1, 
E_V8DImode, 
E_QImode) != 0)
        return -1;
      return 2;

    case E_V16HImode:
      if (pattern477 (x1, 
E_V16HImode, 
E_HImode) != 0)
        return -1;
      return 3;

    case E_V8SImode:
      if (pattern477 (x1, 
E_V8SImode, 
E_QImode) != 0)
        return -1;
      return 4;

    case E_V4DImode:
      if (pattern477 (x1, 
E_V4DImode, 
E_QImode) != 0)
        return -1;
      return 5;

    case E_V8HImode:
      if (pattern477 (x1, 
E_V8HImode, 
E_QImode) != 0)
        return -1;
      return 6;

    case E_V4SImode:
      if (pattern477 (x1, 
E_V4SImode, 
E_QImode) != 0)
        return -1;
      return 7;

    case E_V2DImode:
      if (pattern477 (x1, 
E_V2DImode, 
E_QImode) != 0)
        return -1;
      return 8;

    default:
      return -1;
    }
}

int
pattern494 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1
      || !register_operand (operands[1], i1)
      || !nonimmediate_operand (operands[2], i1))
    return -1;
  return 0;
}

int
pattern495 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12, x13, x14, x15, x16, x17;
  rtx x18, x19, x20;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 1);
  operands[1] = x2;
  x3 = XVECEXP (x1, 0, 2);
  operands[2] = x3;
  x4 = XVECEXP (x1, 0, 0);
  switch (XVECLEN (x4, 0))
    {
    case 16:
      if (GET_MODE (x4) != E_V16QImode)
        return -1;
      x5 = XVECEXP (x4, 0, 0);
      if (x5 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
        return -1;
      x6 = XVECEXP (x4, 0, 1);
      if (x6 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
        return -1;
      x7 = XVECEXP (x4, 0, 2);
      if (x7 != const_int_rtx[MAX_SAVED_CONST_INT + 2])
        return -1;
      x8 = XVECEXP (x4, 0, 3);
      if (x8 != const_int_rtx[MAX_SAVED_CONST_INT + 3])
        return -1;
      x9 = XVECEXP (x4, 0, 4);
      if (x9 != const_int_rtx[MAX_SAVED_CONST_INT + 4])
        return -1;
      x10 = XVECEXP (x4, 0, 5);
      if (x10 != const_int_rtx[MAX_SAVED_CONST_INT + 5])
        return -1;
      x11 = XVECEXP (x4, 0, 6);
      if (x11 != const_int_rtx[MAX_SAVED_CONST_INT + 6])
        return -1;
      x12 = XVECEXP (x4, 0, 7);
      if (x12 != const_int_rtx[MAX_SAVED_CONST_INT + 7])
        return -1;
      x13 = XVECEXP (x4, 0, 8);
      if (x13 != const_int_rtx[MAX_SAVED_CONST_INT + 16])
        return -1;
      x14 = XVECEXP (x4, 0, 9);
      if (x14 != const_int_rtx[MAX_SAVED_CONST_INT + 17])
        return -1;
      x15 = XVECEXP (x4, 0, 10);
      if (x15 != const_int_rtx[MAX_SAVED_CONST_INT + 18])
        return -1;
      x16 = XVECEXP (x4, 0, 11);
      if (x16 != const_int_rtx[MAX_SAVED_CONST_INT + 19])
        return -1;
      x17 = XVECEXP (x4, 0, 12);
      if (x17 != const_int_rtx[MAX_SAVED_CONST_INT + 20])
        return -1;
      x18 = XVECEXP (x4, 0, 13);
      if (x18 != const_int_rtx[MAX_SAVED_CONST_INT + 21])
        return -1;
      x19 = XVECEXP (x4, 0, 14);
      if (x19 != const_int_rtx[MAX_SAVED_CONST_INT + 22])
        return -1;
      x20 = XVECEXP (x4, 0, 15);
      if (x20 != const_int_rtx[MAX_SAVED_CONST_INT + 23]
          || pattern494 (x1, 
E_V16QImode) != 0)
        return -1;
      return 0;

    case 8:
      if (GET_MODE (x4) != E_V8HImode)
        return -1;
      x5 = XVECEXP (x4, 0, 0);
      if (x5 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
        return -1;
      x6 = XVECEXP (x4, 0, 1);
      if (x6 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
        return -1;
      x7 = XVECEXP (x4, 0, 2);
      if (x7 != const_int_rtx[MAX_SAVED_CONST_INT + 2])
        return -1;
      x8 = XVECEXP (x4, 0, 3);
      if (x8 != const_int_rtx[MAX_SAVED_CONST_INT + 3])
        return -1;
      x9 = XVECEXP (x4, 0, 4);
      if (x9 != const_int_rtx[MAX_SAVED_CONST_INT + 8])
        return -1;
      x10 = XVECEXP (x4, 0, 5);
      if (x10 != const_int_rtx[MAX_SAVED_CONST_INT + 9])
        return -1;
      x11 = XVECEXP (x4, 0, 6);
      if (x11 != const_int_rtx[MAX_SAVED_CONST_INT + 10])
        return -1;
      x12 = XVECEXP (x4, 0, 7);
      if (x12 != const_int_rtx[MAX_SAVED_CONST_INT + 11]
          || pattern494 (x1, 
E_V8HImode) != 0)
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern528 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (!nonimmediate_operand (operands[0], i2)
      || GET_MODE (x1) != i2)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != i1
      || !register_operand (operands[1], i1)
      || !permvar_truncate_operand (operands[2], i1))
    return -1;
  return 0;
}

int
pattern533 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  operands[1] = x3;
  x4 = XEXP (x2, 1);
  operands[2] = x4;
  x5 = XEXP (x1, 1);
  switch (GET_CODE (x5))
    {
    case AND:
      return pattern531 (x1); /* [-1, 11] */

    case IOR:
      res = pattern531 (x1);
      if (res >= 0)
        return res + 12; /* [12, 23] */
      return -1;

    case XOR:
      res = pattern531 (x1);
      if (res >= 0)
        return res + 24; /* [24, 35] */
      return -1;

    case REG:
    case SUBREG:
    case MEM:
    case NOT:
      operands[3] = x5;
      switch (GET_MODE (operands[0]))
        {
        case E_V64QImode:
          if (pattern532 (x1, 
E_V64QImode) != 0)
            return -1;
          return 36;

        case E_V32QImode:
          if (pattern532 (x1, 
E_V32QImode) != 0)
            return -1;
          return 37;

        case E_V16QImode:
          if (pattern532 (x1, 
E_V16QImode) != 0)
            return -1;
          return 38;

        case E_V32HImode:
          if (pattern532 (x1, 
E_V32HImode) != 0)
            return -1;
          return 39;

        case E_V16HImode:
          if (pattern532 (x1, 
E_V16HImode) != 0)
            return -1;
          return 40;

        case E_V8HImode:
          if (pattern532 (x1, 
E_V8HImode) != 0)
            return -1;
          return 41;

        case E_V16SImode:
          if (pattern532 (x1, 
E_V16SImode) != 0)
            return -1;
          return 42;

        case E_V8SImode:
          if (pattern532 (x1, 
E_V8SImode) != 0)
            return -1;
          return 43;

        case E_V4SImode:
          if (pattern532 (x1, 
E_V4SImode) != 0)
            return -1;
          return 44;

        case E_V8DImode:
          if (pattern532 (x1, 
E_V8DImode) != 0)
            return -1;
          return 45;

        case E_V4DImode:
          if (pattern532 (x1, 
E_V4DImode) != 0)
            return -1;
          return 46;

        case E_V2DImode:
          if (pattern532 (x1, 
E_V2DImode) != 0)
            return -1;
          return 47;

        default:
          return -1;
        }

    default:
      return -1;
    }
}

int
pattern546 (rtx x1, int i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) != E_XFmode)
    return -1;
  x4 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x4) != SET)
    return -1;
  x5 = XEXP (x4, 1);
  if (GET_CODE (x5) != UNSPEC
      || XVECLEN (x5, 0) != 1
      || XINT (x5, 1) != i1
      || GET_MODE (x5) != E_XFmode)
    return -1;
  x6 = XEXP (x2, 0);
  operands[0] = x6;
  if (!register_operand (operands[0], E_XFmode))
    return -1;
  x7 = XVECEXP (x3, 0, 0);
  operands[2] = x7;
  if (!register_operand (operands[2], E_XFmode))
    return -1;
  x8 = XEXP (x4, 0);
  operands[1] = x8;
  if (!register_operand (operands[1], E_XFmode))
    return -1;
  x9 = XVECEXP (x5, 0, 0);
  if (!rtx_equal_p (x9, operands[2]))
    return -1;
  return 0;
}

int
pattern556 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  operands[0] = x3;
  switch (GET_MODE (operands[0]))
    {
    case E_QImode:
      x4 = XEXP (x1, 1);
      return pattern555 (x4, 
E_QImode); /* [-1, 0] */

    case E_HImode:
      x4 = XEXP (x1, 1);
      if (pattern555 (x4, 
E_HImode) != 0)
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern560 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8;
  int res ATTRIBUTE_UNUSED;
  if (!bt_comparison_operator (operands[1], E_QImode))
    return -1;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  x4 = XEXP (x3, 1);
  if (x4 != const_int_rtx[MAX_SAVED_CONST_INT + -1])
    return -1;
  x5 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x5) != CLOBBER)
    return -1;
  x6 = XEXP (x5, 0);
  if (GET_CODE (x6) != REG
      || REGNO (x6) != 17
      || GET_MODE (x6) != E_CCmode)
    return -1;
  x7 = XEXP (x2, 0);
  operands[0] = x7;
  if (!nonimmediate_operand (operands[0], E_QImode))
    return -1;
  x8 = XEXP (x3, 0);
  operands[2] = x8;
  switch (GET_MODE (operands[2]))
    {
    case E_QImode:
      if (!register_operand (operands[2], E_QImode))
        return -1;
      return 0;

    case E_HImode:
      if (!register_operand (operands[2], E_HImode))
        return -1;
      return 1;

    case E_SImode:
      if (!register_operand (operands[2], E_SImode))
        return -1;
      return 2;

    case E_DImode:
      if (!register_operand (operands[2], E_DImode))
        return -1;
      return 3;

    default:
      return -1;
    }
}

int
pattern578 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  operands[1] = x4;
  x5 = XEXP (x3, 1);
  operands[2] = x5;
  if (!const123_operand (operands[2], E_VOIDmode))
    return -1;
  return pattern429 (x1); /* [-1, 1] */
}

int
pattern583 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  operands[0] = x3;
  if (!int248_register_operand (operands[0], E_VOIDmode))
    return -1;
  x4 = XEXP (x1, 1);
  x5 = XEXP (x4, 0);
  x6 = XEXP (x5, 1);
  if (!rtx_equal_p (x6, operands[2]))
    return -1;
  switch (GET_MODE (operands[3]))
    {
    case E_HImode:
      if (!extract_operator (operands[3], E_HImode)
          || GET_MODE (x2) != E_HImode
          || GET_MODE (x4) != E_HImode)
        return -1;
      return 0;

    case E_SImode:
      if (!extract_operator (operands[3], E_SImode)
          || GET_MODE (x2) != E_SImode
          || GET_MODE (x4) != E_SImode)
        return -1;
      return 1;

    case E_DImode:
      if (!extract_operator (operands[3], E_DImode)
          || GET_MODE (x2) != E_DImode
          || GET_MODE (x4) != E_DImode)
        return -1;
      return 2;

    default:
      return -1;
    }
}

int
pattern592 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1
      || !vector_operand (operands[1], i1))
    return -1;
  x2 = XVECEXP (x1, 0, 1);
  if (GET_MODE (x2) != i1
      || !bcst_vector_operand (operands[2], i2)
      || !vector_operand (operands[3], i1))
    return -1;
  return 0;
}

int
pattern596 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) != NOT)
    return -1;
  x4 = XEXP (x3, 0);
  operands[1] = x4;
  x5 = XEXP (x1, 1);
  operands[2] = x5;
  switch (GET_MODE (operands[0]))
    {
    case E_V16SImode:
      return pattern595 (x1, 
E_V16SImode, 
E_SImode); /* [-1, 0] */

    case E_V8DImode:
      if (pattern595 (x1, 
E_V8DImode, 
E_DImode) != 0)
        return -1;
      return 1;

    case E_V64QImode:
      if (pattern595 (x1, 
E_V64QImode, 
E_QImode) != 0)
        return -1;
      return 2;

    case E_V32QImode:
      if (pattern595 (x1, 
E_V32QImode, 
E_QImode) != 0)
        return -1;
      return 3;

    case E_V16QImode:
      if (pattern595 (x1, 
E_V16QImode, 
E_QImode) != 0)
        return -1;
      return 4;

    case E_V32HImode:
      if (pattern595 (x1, 
E_V32HImode, 
E_HImode) != 0)
        return -1;
      return 5;

    case E_V16HImode:
      if (pattern595 (x1, 
E_V16HImode, 
E_HImode) != 0)
        return -1;
      return 6;

    case E_V8HImode:
      if (pattern595 (x1, 
E_V8HImode, 
E_HImode) != 0)
        return -1;
      return 7;

    case E_V8SImode:
      if (pattern595 (x1, 
E_V8SImode, 
E_SImode) != 0)
        return -1;
      return 8;

    case E_V4SImode:
      if (pattern595 (x1, 
E_V4SImode, 
E_SImode) != 0)
        return -1;
      return 9;

    case E_V4DImode:
      if (pattern595 (x1, 
E_V4DImode, 
E_DImode) != 0)
        return -1;
      return 10;

    case E_V2DImode:
      if (pattern595 (x1, 
E_V2DImode, 
E_DImode) != 0)
        return -1;
      return 11;

    default:
      return -1;
    }
}

int
pattern618 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != i2
      || !nonimmediate_operand (operands[1], i2))
    return -1;
  return 0;
}

int
pattern625 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (!memory_operand (operands[0], i1)
      || GET_MODE (x1) != i1)
    return -1;
  x2 = XVECEXP (x1, 0, 0);
  if (GET_MODE (x2) != i1
      || !register_operand (operands[1], i1))
    return -1;
  return 0;
}

int
pattern631 (rtx x1, machine_mode i1, machine_mode i2, machine_mode i3)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != i1
      || !nonimmediate_operand (operands[1], i3)
      || !nonimm_or_0_operand (operands[2], i1)
      || !register_operand (operands[3], i2))
    return -1;
  return 0;
}

int
pattern636 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  x3 = XVECEXP (x2, 0, 0);
  operands[1] = x3;
  x4 = XEXP (x1, 2);
  operands[3] = x4;
  switch (GET_MODE (operands[0]))
    {
    case E_V16SImode:
      return pattern633 (x1, 
E_V16SImode, 
E_HImode, 
E_V16SFmode); /* [-1, 0] */

    case E_V8SImode:
      if (!register_operand (operands[0], E_V8SImode)
          || GET_MODE (x1) != E_V8SImode
          || GET_MODE (x2) != E_V8SImode
          || !nonimm_or_0_operand (operands[2], E_V8SImode)
          || !register_operand (operands[3], E_QImode))
        return -1;
      switch (GET_MODE (operands[1]))
        {
        case E_V8SFmode:
          if (!vector_operand (operands[1], E_V8SFmode))
            return -1;
          return 1;

        case E_V8DFmode:
          if (!vector_operand (operands[1], E_V8DFmode))
            return -1;
          return 2;

        default:
          return -1;
        }

    case E_V4SImode:
      if (!register_operand (operands[0], E_V4SImode)
          || GET_MODE (x1) != E_V4SImode
          || GET_MODE (x2) != E_V4SImode
          || !nonimm_or_0_operand (operands[2], E_V4SImode)
          || !register_operand (operands[3], E_QImode))
        return -1;
      switch (GET_MODE (operands[1]))
        {
        case E_V4SFmode:
          if (!vector_operand (operands[1], E_V4SFmode))
            return -1;
          return 3;

        case E_V4DFmode:
          if (!vector_operand (operands[1], E_V4DFmode))
            return -1;
          return 4;

        case E_V2DFmode:
          if (!vector_operand (operands[1], E_V2DFmode))
            return -1;
          return 5;

        default:
          return -1;
        }

    case E_V8DImode:
      if (!register_operand (operands[0], E_V8DImode)
          || GET_MODE (x1) != E_V8DImode
          || GET_MODE (x2) != E_V8DImode
          || !nonimm_or_0_operand (operands[2], E_V8DImode)
          || !register_operand (operands[3], E_QImode))
        return -1;
      switch (GET_MODE (operands[1]))
        {
        case E_V8DFmode:
          if (!vector_operand (operands[1], E_V8DFmode))
            return -1;
          return 6;

        case E_V8SFmode:
          if (!vector_operand (operands[1], E_V8SFmode))
            return -1;
          return 7;

        default:
          return -1;
        }

    case E_V4DImode:
      if (!register_operand (operands[0], E_V4DImode)
          || GET_MODE (x1) != E_V4DImode
          || GET_MODE (x2) != E_V4DImode
          || !nonimm_or_0_operand (operands[2], E_V4DImode)
          || !register_operand (operands[3], E_QImode))
        return -1;
      switch (GET_MODE (operands[1]))
        {
        case E_V4DFmode:
          if (!vector_operand (operands[1], E_V4DFmode))
            return -1;
          return 8;

        case E_V4SFmode:
          if (!vector_operand (operands[1], E_V4SFmode))
            return -1;
          return 9;

        default:
          return -1;
        }

    case E_V2DImode:
      if (!register_operand (operands[0], E_V2DImode)
          || GET_MODE (x1) != E_V2DImode
          || GET_MODE (x2) != E_V2DImode
          || !nonimm_or_0_operand (operands[2], E_V2DImode)
          || !register_operand (operands[3], E_QImode))
        return -1;
      switch (GET_MODE (operands[1]))
        {
        case E_V2DFmode:
          if (!vector_operand (operands[1], E_V2DFmode))
            return -1;
          return 10;

        case E_V4SFmode:
          if (!vector_operand (operands[1], E_V4SFmode))
            return -1;
          return 11;

        default:
          return -1;
        }

    default:
      return -1;
    }
}

int
pattern674 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4;
  int res ATTRIBUTE_UNUSED;
  if (!const_0_to_3_operand (operands[2], E_VOIDmode))
    return -1;
  x2 = XVECEXP (x1, 0, 1);
  operands[3] = x2;
  if (!const_0_to_3_operand (operands[3], E_VOIDmode))
    return -1;
  x3 = XVECEXP (x1, 0, 2);
  operands[4] = x3;
  if (!const_0_to_3_operand (operands[4], E_VOIDmode))
    return -1;
  x4 = XVECEXP (x1, 0, 3);
  operands[5] = x4;
  if (!const_0_to_3_operand (operands[5], E_VOIDmode))
    return -1;
  return 0;
}

int
pattern682 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 1);
  if (XVECLEN (x2, 0) != 1
      || XINT (x2, 1) != 110)
    return -1;
  x3 = XVECEXP (x2, 0, 0);
  if (x3 != const_int_rtx[MAX_SAVED_CONST_INT + 0]
      || !register_operand (operands[0], i2))
    return -1;
  x4 = XVECEXP (x1, 0, 0);
  x5 = XEXP (x4, 1);
  if (GET_MODE (x5) != i2
      || !nonimmediate_operand (operands[1], i1))
    return -1;
  return 0;
}

int
pattern688 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (!nonimmediate_operand (operands[0], i1)
      || GET_MODE (x1) != i1
      || !general_operand (operands[1], i1))
    return -1;
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) != i1)
    return -1;
  return 0;
}

int
pattern692 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x2) != CLOBBER)
    return -1;
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) != REG
      || REGNO (x3) != 17
      || GET_MODE (x3) != E_CCmode)
    return -1;
  x4 = XVECEXP (x1, 0, 0);
  x5 = XEXP (x4, 1);
  x6 = XEXP (x5, 0);
  x7 = XEXP (x6, 0);
  switch (GET_CODE (x7))
    {
    case REG:
    case SUBREG:
      return 0;

    case ZERO_EXTRACT:
      return 1;

    default:
      return -1;
    }
}

int
pattern699 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  operands[2] = x4;
  if (!int248_register_operand (operands[2], E_VOIDmode))
    return -1;
  x5 = XEXP (x3, 1);
  operands[3] = x5;
  if (!const_int_operand (operands[3], E_VOIDmode))
    return -1;
  return pattern241 (x1); /* [-1, 1] */
}

int
pattern706 (rtx x1, machine_mode i1, int i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) != E_DImode)
    return -1;
  x4 = XVECEXP (x3, 0, 0);
  if (x4 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
    return -1;
  x5 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x5) != SET)
    return -1;
  x6 = XEXP (x5, 1);
  if (GET_CODE (x6) != UNSPEC_VOLATILE
      || XVECLEN (x6, 0) != 1
      || XINT (x6, 1) != i2
      || GET_MODE (x6) != i1)
    return -1;
  x7 = XVECEXP (x6, 0, 0);
  if (x7 != const_int_rtx[MAX_SAVED_CONST_INT + 0]
      || !register_operand (operands[0], E_DImode))
    return -1;
  x8 = XEXP (x5, 0);
  operands[1] = x8;
  if (!register_operand (operands[1], i1))
    return -1;
  return 0;
}

int
pattern713 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4;
  int res ATTRIBUTE_UNUSED;
  if (!nonimmediate_operand (operands[0], i2)
      || GET_MODE (x1) != i2)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != i2)
    return -1;
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) != i2
      || !nonimmediate_operand (operands[1], i1))
    return -1;
  x4 = XEXP (x1, 1);
  if (GET_MODE (x4) != i2
      || !nonimmediate_operand (operands[3], i1))
    return -1;
  return 0;
}

int
pattern721 (rtx x1, rtx_code i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12, x13, x14, x15, x16, x17;
  rtx x18;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  x4 = XEXP (x3, 0);
  x5 = XEXP (x4, 0);
  if (GET_CODE (x5) != SIGN_EXTEND)
    return -1;
  x6 = XEXP (x3, 1);
  if (GET_CODE (x6) != SIGN_EXTEND)
    return -1;
  x7 = XEXP (x6, 0);
  if (GET_CODE (x7) != i1)
    return -1;
  x8 = XEXP (x2, 0);
  if (GET_CODE (x8) != REG
      || REGNO (x8) != 17
      || GET_MODE (x8) != E_CCOmode)
    return -1;
  x9 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x9) != SET)
    return -1;
  x10 = XEXP (x9, 1);
  if (GET_CODE (x10) != i1
      || GET_MODE (x3) != E_CCOmode)
    return -1;
  x11 = XEXP (x5, 0);
  operands[1] = x11;
  x12 = XEXP (x9, 0);
  operands[0] = x12;
  x13 = XEXP (x7, 0);
  if (!rtx_equal_p (x13, operands[1]))
    return -1;
  x14 = XEXP (x10, 0);
  if (!rtx_equal_p (x14, operands[1]))
    return -1;
  x15 = XEXP (x4, 1);
  switch (GET_CODE (x15))
    {
    case SIGN_EXTEND:
      x16 = XEXP (x15, 0);
      operands[2] = x16;
      x17 = XEXP (x7, 1);
      if (!rtx_equal_p (x17, operands[2]))
        return -1;
      x18 = XEXP (x10, 1);
      if (!rtx_equal_p (x18, operands[2]))
        return -1;
      switch (GET_MODE (x4))
        {
        case E_TImode:
          return pattern719 (x1, 
E_DImode, 
E_TImode); /* [-1, 0] */

        case E_POImode:
          if (pattern719 (x1, 
E_TImode, 
E_POImode) != 0)
            return -1;
          return 1;

        default:
          return -1;
        }

    case CONST_INT:
    case CONST_WIDE_INT:
      operands[3] = x15;
      x17 = XEXP (x7, 1);
      operands[2] = x17;
      x18 = XEXP (x10, 1);
      if (!rtx_equal_p (x18, operands[2]))
        return -1;
      switch (GET_MODE (x4))
        {
        case E_TImode:
          if (pattern720 (x1, 
E_DImode, 
E_TImode) != 0)
            return -1;
          return 2;

        case E_POImode:
          if (pattern720 (x1, 
E_TImode, 
E_POImode) != 0)
            return -1;
          return 3;

        default:
          return -1;
        }

    default:
      return -1;
    }
}

int
pattern753 (rtx x1, int *pnum_clobbers)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  int res ATTRIBUTE_UNUSED;
  if (pnum_clobbers == NULL)
    return -1;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 1);
  x4 = XEXP (x3, 0);
  if (GET_CODE (x4) != REG
      || REGNO (x4) != 17)
    return -1;
  x5 = XEXP (x3, 1);
  if (x5 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
    return -1;
  return pattern276 (x1); /* [-1, 4] */
}

int
pattern760 (rtx x1, rtx_code i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) != i1)
    return -1;
  x5 = XEXP (x3, 0);
  x6 = XEXP (x5, 0);
  operands[1] = x6;
  x7 = XEXP (x4, 0);
  operands[2] = x7;
  x8 = XEXP (x2, 1);
  switch (XWINT (x8, 0))
    {
    case 64L:
      return pattern759 (x1, 
E_DImode, 
E_TImode); /* [-1, 0] */

    case 32L:
      if (pattern759 (x1, 
E_SImode, 
E_DImode) != 0)
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern770 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i2)
      || GET_MODE (x1) != i2)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != i2)
    return -1;
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) != i1)
    return -1;
  x4 = XVECEXP (x3, 0, 0);
  if (GET_MODE (x4) != i1
      || !register_operand (operands[1], i2)
      || !nonimmediate_operand (operands[2], i1))
    return -1;
  return 0;
}

int
pattern777 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1)
    return -1;
  x2 = XVECEXP (x1, 0, 0);
  if (GET_MODE (x2) != i1)
    return -1;
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) != i1)
    return -1;
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) != i1
      || !register_operand (operands[1], i1)
      || !nonimmediate_operand (operands[2], i1)
      || !nonimm_or_0_operand (operands[3], i1))
    return -1;
  return 0;
}

int
pattern786 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1
      || !register_operand (operands[2], i2)
      || !memory_operand (operands[1], i1))
    return -1;
  return 0;
}

int
pattern794 (rtx x1, machine_mode i1, machine_mode i2, machine_mode i3)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i3)
      || GET_MODE (x1) != i3
      || !nonimmediate_operand (operands[1], i2))
    return -1;
  x2 = XEXP (x1, 1);
  operands[2] = x2;
  if (!const0_operand (operands[2], i1))
    return -1;
  return 0;
}

int
pattern802 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != i2
      || !nonimmediate_operand (operands[1], i1)
      || !const0_operand (operands[2], i1)
      || !pmovzx_parallel (operands[3], E_VOIDmode))
    return -1;
  return 0;
}

int
pattern813 (rtx x1, machine_mode i1, int i2, int i3, rtx_code i4)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (GET_CODE (x1) != i4
      || XVECLEN (x1, 0) != i3
      || XINT (x1, 1) != i2
      || GET_MODE (x1) != i1)
    return -1;
  return 0;
}

int
pattern816 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12, x13, x14, x15, x16, x17;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  x4 = XEXP (x3, 0);
  x5 = XEXP (x4, 0);
  if (maybe_ne (SUBREG_BYTE (x5), 0)
      || GET_MODE (x5) != E_QImode)
    return -1;
  x6 = XEXP (x5, 0);
  switch (GET_CODE (x6))
    {
    case SIGN_EXTRACT:
    case ZERO_EXTRACT:
      operands[3] = x6;
      x7 = XEXP (x6, 1);
      if (x7 != const_int_rtx[MAX_SAVED_CONST_INT + 8])
        return -1;
      x8 = XEXP (x6, 2);
      if (x8 != const_int_rtx[MAX_SAVED_CONST_INT + 8])
        return -1;
      x9 = XVECEXP (x1, 0, 1);
      if (GET_CODE (x9) != SET)
        return -1;
      x10 = XEXP (x9, 1);
      if (GET_CODE (x10) != SUBREG
          || maybe_ne (SUBREG_BYTE (x10), 0))
        return -1;
      x11 = XEXP (x10, 0);
      if (GET_CODE (x11) != AND
          || GET_MODE (x11) != E_QImode)
        return -1;
      x12 = XEXP (x11, 0);
      if (GET_CODE (x12) != SUBREG
          || maybe_ne (SUBREG_BYTE (x12), 0)
          || GET_MODE (x12) != E_QImode)
        return -1;
      x13 = XEXP (x12, 0);
      switch (GET_CODE (x13))
        {
        case SIGN_EXTRACT:
        case ZERO_EXTRACT:
          if (!rtx_equal_p (x13, operands[3]))
            return -1;
          x14 = XEXP (x9, 0);
          if (GET_CODE (x14) != ZERO_EXTRACT)
            return -1;
          x15 = XEXP (x14, 1);
          if (x15 != const_int_rtx[MAX_SAVED_CONST_INT + 8])
            return -1;
          x16 = XEXP (x14, 2);
          if (x16 != const_int_rtx[MAX_SAVED_CONST_INT + 8])
            return -1;
          x17 = XEXP (x2, 0);
          operands[4] = x17;
          return 0;

        default:
          return -1;
        }

    default:
      return -1;
    }
}

int
pattern837 (rtx x1, int i1, int i2, int i3, int i4)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 8);
  if (x2 != const_int_rtx[MAX_SAVED_CONST_INT + i4])
    return -1;
  x3 = XVECEXP (x1, 0, 9);
  if (x3 != const_int_rtx[MAX_SAVED_CONST_INT + i3])
    return -1;
  x4 = XVECEXP (x1, 0, 10);
  if (x4 != const_int_rtx[MAX_SAVED_CONST_INT + i2])
    return -1;
  x5 = XVECEXP (x1, 0, 11);
  if (x5 != const_int_rtx[MAX_SAVED_CONST_INT + i1])
    return -1;
  return 0;
}

int
pattern844 ()
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  switch (GET_MODE (operands[0]))
    {
    case E_DImode:
      if (!nonimmediate_operand (operands[0], E_DImode)
          || !general_operand (operands[1], E_DImode))
        return -1;
      return 0;

    case E_TImode:
      if (!nonimmediate_operand (operands[0], E_TImode)
          || !general_operand (operands[1], E_TImode))
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern850 (machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || !ix86_comparison_int_operator (operands[1], i1)
      || !register_operand (operands[2], i1)
      || !register_operand (operands[3], i1))
    return -1;
  return 0;
}

int
pattern853 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i2)
      || GET_MODE (x1) != i2)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != i2)
    return -1;
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) != i1
      || !register_operand (operands[1], i2)
      || !register_mmxmem_operand (operands[2], i2))
    return -1;
  x4 = XEXP (x1, 1);
  if (GET_MODE (x4) != i2)
    return -1;
  x5 = XEXP (x4, 0);
  if (GET_MODE (x5) != i1)
    return -1;
  return 0;
}

int
pattern859 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  operands[1] = x3;
  x4 = XEXP (x2, 0);
  if (!rtx_equal_p (x4, operands[0]))
    return -1;
  switch (GET_MODE (operands[0]))
    {
    case E_QImode:
      return pattern858 (x1, 
E_QImode); /* [-1, 0] */

    case E_HImode:
      if (pattern858 (x1, 
E_HImode) != 0)
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern866 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != i1
      || !bcst_vector_operand (operands[1], i1)
      || !bcst_vector_operand (operands[2], i1)
      || !bcst_vector_operand (operands[3], i1))
    return -1;
  return 0;
}

int
pattern875 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XVECEXP (x2, 0, 0);
  if (GET_CODE (x3) != VEC_SELECT)
    return -1;
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) != PARALLEL
      || XVECLEN (x4, 0) != 1)
    return -1;
  x5 = XVECEXP (x4, 0, 0);
  if (x5 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
    return -1;
  x6 = XEXP (x3, 0);
  operands[1] = x6;
  if (!const_4_or_8_to_11_operand (operands[2], E_SImode))
    return -1;
  switch (GET_MODE (operands[0]))
    {
    case E_SImode:
      return pattern874 (x1, 
E_SImode); /* [-1, 2] */

    case E_DImode:
      res = pattern874 (x1, 
E_DImode);
      if (res >= 0)
        return res + 3; /* [3, 5] */
      return -1;

    default:
      return -1;
    }
}

int
pattern885 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != i1)
    return -1;
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) != i2
      || !register_operand (operands[1], i1))
    return -1;
  switch (GET_MODE (operands[2]))
    {
    case E_SImode:
      if (!nonimmediate_operand (operands[2], E_SImode))
        return -1;
      return 0;

    case E_DImode:
      if (!nonimmediate_operand (operands[2], E_DImode))
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern899 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12, x13, x14, x15, x16, x17;
  rtx x18, x19, x20, x21, x22, x23, x24, x25;
  rtx x26, x27, x28, x29, x30, x31, x32, x33;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  if (GET_CODE (x2) != CONST_INT)
    return -1;
  x3 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x3) != CONST_INT)
    return -1;
  x4 = XVECEXP (x1, 0, 2);
  if (GET_CODE (x4) != CONST_INT)
    return -1;
  x5 = XVECEXP (x1, 0, 3);
  if (GET_CODE (x5) != CONST_INT)
    return -1;
  x6 = XVECEXP (x1, 0, 4);
  if (GET_CODE (x6) != CONST_INT)
    return -1;
  x7 = XVECEXP (x1, 0, 5);
  if (GET_CODE (x7) != CONST_INT)
    return -1;
  x8 = XVECEXP (x1, 0, 6);
  if (GET_CODE (x8) != CONST_INT)
    return -1;
  x9 = XVECEXP (x1, 0, 7);
  if (GET_CODE (x9) != CONST_INT)
    return -1;
  x10 = XVECEXP (x1, 0, 8);
  if (GET_CODE (x10) != CONST_INT)
    return -1;
  x11 = XVECEXP (x1, 0, 9);
  if (GET_CODE (x11) != CONST_INT)
    return -1;
  x12 = XVECEXP (x1, 0, 10);
  if (GET_CODE (x12) != CONST_INT)
    return -1;
  x13 = XVECEXP (x1, 0, 11);
  if (GET_CODE (x13) != CONST_INT)
    return -1;
  x14 = XVECEXP (x1, 0, 12);
  if (GET_CODE (x14) != CONST_INT)
    return -1;
  x15 = XVECEXP (x1, 0, 13);
  if (GET_CODE (x15) != CONST_INT)
    return -1;
  x16 = XVECEXP (x1, 0, 14);
  if (GET_CODE (x16) != CONST_INT)
    return -1;
  x17 = XVECEXP (x1, 0, 15);
  if (GET_CODE (x17) != CONST_INT)
    return -1;
  x18 = XVECEXP (x1, 0, 16);
  if (GET_CODE (x18) != CONST_INT)
    return -1;
  x19 = XVECEXP (x1, 0, 17);
  if (GET_CODE (x19) != CONST_INT)
    return -1;
  x20 = XVECEXP (x1, 0, 18);
  if (GET_CODE (x20) != CONST_INT)
    return -1;
  x21 = XVECEXP (x1, 0, 19);
  if (GET_CODE (x21) != CONST_INT)
    return -1;
  x22 = XVECEXP (x1, 0, 20);
  if (GET_CODE (x22) != CONST_INT)
    return -1;
  x23 = XVECEXP (x1, 0, 21);
  if (GET_CODE (x23) != CONST_INT)
    return -1;
  x24 = XVECEXP (x1, 0, 22);
  if (GET_CODE (x24) != CONST_INT)
    return -1;
  x25 = XVECEXP (x1, 0, 23);
  if (GET_CODE (x25) != CONST_INT)
    return -1;
  x26 = XVECEXP (x1, 0, 24);
  if (GET_CODE (x26) != CONST_INT)
    return -1;
  x27 = XVECEXP (x1, 0, 25);
  if (GET_CODE (x27) != CONST_INT)
    return -1;
  x28 = XVECEXP (x1, 0, 26);
  if (GET_CODE (x28) != CONST_INT)
    return -1;
  x29 = XVECEXP (x1, 0, 27);
  if (GET_CODE (x29) != CONST_INT)
    return -1;
  x30 = XVECEXP (x1, 0, 28);
  if (GET_CODE (x30) != CONST_INT)
    return -1;
  x31 = XVECEXP (x1, 0, 29);
  if (GET_CODE (x31) != CONST_INT)
    return -1;
  x32 = XVECEXP (x1, 0, 30);
  if (GET_CODE (x32) != CONST_INT)
    return -1;
  x33 = XVECEXP (x1, 0, 31);
  if (GET_CODE (x33) != CONST_INT)
    return -1;
  return 0;
}

int
pattern928 (rtx x1, machine_mode i1, machine_mode i2, machine_mode i3)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i3)
      || GET_MODE (x1) != i3)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != i2
      || !nonimmediate_operand (operands[1], i1))
    return -1;
  return 0;
}

int
pattern933 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != i1
      || !bcst_vector_operand (operands[1], i1)
      || !bcst_vector_operand (operands[2], i1))
    return -1;
  return 0;
}

int
pattern939 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (!nonimmediate_operand (operands[0], i1)
      || GET_MODE (x1) != i1)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != i1
      || !nonimmediate_operand (operands[2], i2)
      || !nonimmediate_operand (operands[1], i1))
    return -1;
  return 0;
}

int
pattern946 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  operands[1] = x2;
  switch (GET_MODE (operands[0]))
    {
    case E_SImode:
      return pattern945 (x1, 
E_SImode); /* [-1, 0] */

    case E_DImode:
      if (pattern945 (x1, 
E_DImode) != 0)
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern953 (rtx x1, machine_mode i1, unsigned int i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (GET_CODE (x1) != CLOBBER)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_CODE (x2) != REG
      || REGNO (x2) != i2
      || GET_MODE (x2) != i1)
    return -1;
  return 0;
}

int
pattern957 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != i1
      || !vector_operand (operands[1], i1)
      || !vector_operand (operands[2], i1)
      || !const0_operand (operands[3], i1))
    return -1;
  return 0;
}

int
pattern964 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  operands[2] = x2;
  x3 = XEXP (x1, 1);
  operands[3] = x3;
  if (!general_gr_operand (operands[3], i1))
    return -1;
  x4 = PATTERN (peep2_next_insn (1));
  x5 = XEXP (x4, 1);
  return pattern963 (x5, 
i1); /* [-1, 0] */
}

int
pattern967 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  switch (GET_MODE (operands[0]))
    {
    case E_QImode:
      if (!register_operand (operands[0], E_QImode)
          || GET_MODE (x1) != E_QImode)
        return -1;
      return 0;

    case E_HImode:
      if (!register_operand (operands[0], E_HImode)
          || GET_MODE (x1) != E_HImode)
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern971 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1
      || !register_operand (operands[1], i1)
      || !register_operand (operands[2], i1))
    return -1;
  return 0;
}

int
pattern975 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 1);
  if (XVECLEN (x3, 0) != 1)
    return -1;
  x4 = XVECEXP (x3, 0, 0);
  if (x4 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
    return -1;
  x5 = XEXP (x1, 1);
  x6 = XEXP (x5, 1);
  if (XVECLEN (x6, 0) != 1)
    return -1;
  x7 = XVECEXP (x6, 0, 0);
  if (x7 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
    return -1;
  return 0;
}

int
pattern977 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!nonimmediate_operand (operands[0], E_HFmode)
      || GET_MODE (x1) != E_HFmode)
    return -1;
  switch (GET_MODE (operands[1]))
    {
    case E_V32HFmode:
      if (!nonimmediate_operand (operands[1], E_V32HFmode))
        return -1;
      return 0;

    case E_V16HFmode:
      if (!nonimmediate_operand (operands[1], E_V16HFmode))
        return -1;
      return 1;

    case E_V8HFmode:
      if (!nonimmediate_operand (operands[1], E_V8HFmode))
        return -1;
      return 2;

    default:
      return -1;
    }
}

int
pattern980 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  if (!const_0_to_3_operand (operands[3], E_VOIDmode))
    return -1;
  x2 = XEXP (x1, 1);
  x3 = XVECEXP (x2, 0, 1);
  operands[4] = x3;
  if (!const_0_to_3_operand (operands[4], E_VOIDmode))
    return -1;
  switch (GET_MODE (operands[0]))
    {
    case E_V2HFmode:
      return pattern269 (x1, 
E_V2HFmode, 
E_V4HFmode); /* [-1, 0] */

    case E_V2BFmode:
      if (pattern269 (x1, 
E_V2BFmode, 
E_V4BFmode) != 0)
        return -1;
      return 1;

    case E_V2HImode:
      if (pattern269 (x1, 
E_V2HImode, 
E_V4HImode) != 0)
        return -1;
      return 2;

    default:
      return -1;
    }
}

int
pattern987 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != i1)
    return -1;
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) != i1
      || !nonimmediate_operand (operands[1], i1))
    return -1;
  return 0;
}

int
pattern990 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], E_DImode)
      || GET_MODE (x1) != E_DImode)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != E_DImode
      || !register_operand (operands[1], E_V64QImode)
      || !nonimmediate_operand (operands[2], E_V64QImode)
      || !const_0_to_7_operand (operands[3], E_SImode))
    return -1;
  return 0;
}

int
pattern995 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], E_V16SImode)
      || GET_MODE (x1) != E_V16SImode)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != E_V16SImode
      || !nonimm_or_0_operand (operands[2], E_V16SImode)
      || !register_operand (operands[3], E_HImode))
    return -1;
  switch (GET_MODE (operands[1]))
    {
    case E_V16HFmode:
      if (!vector_operand (operands[1], E_V16HFmode))
        return -1;
      return 0;

    case E_V16SFmode:
      if (!vector_operand (operands[1], E_V16SFmode))
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern1003 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != i1)
    return -1;
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) != i1)
    return -1;
  return 0;
}

int
pattern1012 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1
      || !vector_operand (operands[1], i1)
      || !vector_operand (operands[2], i1))
    return -1;
  x2 = XEXP (x1, 2);
  if (GET_MODE (x2) != i2)
    return -1;
  x3 = XVECEXP (x2, 0, 0);
  if (GET_MODE (x3) != i1
      || !register_operand (operands[3], i1)
      || !const0_operand (operands[4], i1))
    return -1;
  return 0;
}

int
pattern1022 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], E_V16HFmode)
      || GET_MODE (x1) != E_V16HFmode)
    return -1;
  x2 = XVECEXP (x1, 0, 0);
  if (GET_MODE (x2) != E_V16HFmode)
    return -1;
  switch (GET_MODE (operands[1]))
    {
    case E_V16HImode:
      if (!register_operand (operands[1], E_V16HImode))
        return -1;
      return 0;

    case E_V16SImode:
      if (!register_operand (operands[1], E_V16SImode))
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern1033 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  x5 = XEXP (x4, 1);
  if (GET_CODE (x5) != CONST_VECTOR
      || XVECLEN (x5, 0) != 4
      || GET_MODE (x5) != E_V4SImode)
    return -1;
  x6 = XVECEXP (x5, 0, 0);
  if (x6 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
    return -1;
  x7 = XVECEXP (x5, 0, 1);
  if (x7 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
    return -1;
  x8 = XVECEXP (x5, 0, 2);
  if (x8 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
    return -1;
  x9 = XVECEXP (x5, 0, 3);
  if (x9 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
    return -1;
  x10 = XEXP (x4, 2);
  if (x10 != const_int_rtx[MAX_SAVED_CONST_INT + 1]
      || GET_MODE (x4) != E_V4SImode)
    return -1;
  return pattern680 (x1); /* [-1, 2] */
}

int
pattern1044 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  x4 = XEXP (x3, 0);
  x5 = XEXP (x4, 0);
  operands[2] = x5;
  if (!int248_register_operand (operands[2], E_VOIDmode))
    return -1;
  x6 = XEXP (x1, 0);
  switch (GET_CODE (x6))
    {
    case STRICT_LOW_PART:
      x7 = XEXP (x6, 0);
      operands[0] = x7;
      if (!register_operand (operands[0], E_QImode))
        return -1;
      return pattern1043 (); /* [-1, 2] */

    case REG:
    case SUBREG:
      operands[0] = x6;
      if (!register_operand (operands[0], E_QImode))
        return -1;
      res = pattern1043 ();
      if (res >= 0)
        return res + 3; /* [3, 5] */
      return -1;

    default:
      return -1;
    }
}

int
pattern1051 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != i1
      || !vector_operand (operands[1], i1)
      || !vector_operand (operands[2], i1))
    return -1;
  return 0;
}

int
pattern1054 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != i1
      || !register_operand (operands[1], i1)
      || !register_operand (operands[2], i1))
    return -1;
  return 0;
}

int
pattern1057 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  if (GET_CODE (x4) != ASHIFT)
    return -1;
  x5 = XEXP (x4, 0);
  if (GET_CODE (x5) != ZERO_EXTEND)
    return -1;
  x6 = XEXP (x3, 1);
  if (GET_CODE (x6) != ZERO_EXTEND)
    return -1;
  x7 = XEXP (x1, 0);
  operands[0] = x7;
  return pattern354 (x2); /* [-1, 3] */
}

int
pattern1063 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != i1)
    return -1;
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) != i2
      || !vector_operand (operands[2], i1))
    return -1;
  return 0;
}

int
pattern1069 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) != REG
      || REGNO (x3) != 17)
    return -1;
  x4 = XEXP (x2, 1);
  if (x4 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
    return -1;
  x5 = XEXP (x1, 1);
  operands[1] = x5;
  if (!nonimmediate_operand (operands[1], E_QImode))
    return -1;
  return 0;
}

int
pattern1075 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != i1
      || !register_no_SP_operand (operands[1], i1)
      || !const123_operand (operands[2], E_VOIDmode)
      || !nonmemory_operand (operands[3], i1))
    return -1;
  return 0;
}

int
pattern1085 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1)
    return -1;
  x2 = XEXP (x1, 0);
  return pattern1084 (x2); /* [-1, 20] */
}

int
pattern1091 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], E_SImode)
      || GET_MODE (x1) != E_SImode)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != E_SImode)
    return -1;
  return pattern869 (); /* [-1, 1] */
}

int
pattern1096 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1)
    return -1;
  x2 = XVECEXP (x1, 0, 0);
  switch (GET_MODE (x2))
    {
    case E_HFmode:
      if (!register_operand (operands[1], E_V8HFmode))
        return -1;
      return 0;

    case E_SFmode:
      if (!nonimmediate_operand (operands[1], E_V4SFmode))
        return -1;
      return 1;

    case E_DFmode:
      if (!nonimmediate_operand (operands[1], E_V2DFmode))
        return -1;
      return 2;

    default:
      return -1;
    }
}

int
pattern1099 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], E_V2DImode)
      || GET_MODE (x1) != E_V2DImode)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != E_V2DImode
      || !nonimm_or_0_operand (operands[2], E_V2DImode)
      || !register_operand (operands[3], E_QImode))
    return -1;
  switch (GET_MODE (operands[1]))
    {
    case E_V8HFmode:
      return 0;

    case E_V2DFmode:
      return 1;

    default:
      return -1;
    }
}

int
pattern1104 (rtx x1, machine_mode i1, machine_mode i2, machine_mode i3)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != i1
      || !register_operand (operands[1], i1)
      || !nonimmediate_operand (operands[2], i2)
      || !nonimm_or_0_operand (operands[3], i1)
      || !register_operand (operands[4], i3))
    return -1;
  return 0;
}

int
pattern1111 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != i1
      || !register_operand (operands[1], i1)
      || !vector_operand (operands[2], i1))
    return -1;
  x3 = XEXP (x1, 1);
  if (GET_MODE (x3) != i1)
    return -1;
  return 0;
}

int
pattern1118 (rtx x1, machine_mode i1, machine_mode i2, machine_mode i3)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i2)
      || GET_MODE (x1) != i2)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != i2)
    return -1;
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) != i3)
    return -1;
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) != i3)
    return -1;
  x5 = XEXP (x4, 0);
  if (GET_MODE (x5) != i3
      || !vector_operand (operands[1], i2))
    return -1;
  x6 = XEXP (x4, 1);
  if (GET_MODE (x6) != i3
      || !vector_operand (operands[2], i2)
      || !nonimm_or_0_operand (operands[3], i2)
      || !register_operand (operands[4], i1))
    return -1;
  return 0;
}

int
pattern1130 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 2);
  switch (GET_CODE (x3))
    {
    case REG:
    case SUBREG:
      operands[4] = x3;
      x4 = XVECEXP (x1, 0, 1);
      operands[5] = x4;
      switch (GET_MODE (operands[0]))
        {
        case E_V32HFmode:
          return 0;

        case E_V16HFmode:
          return 1;

        case E_V16SFmode:
          return 2;

        case E_V8SFmode:
          return 3;

        case E_V8DFmode:
          return 4;

        case E_V4DFmode:
          return 5;

        default:
          return -1;
        }

    case CONST_INT:
      if (XWINT (x3, 0) != 1L)
        return -1;
      x4 = XVECEXP (x1, 0, 1);
      operands[4] = x4;
      x5 = XEXP (x2, 1);
      if (!rtx_equal_p (x5, operands[1]))
        return -1;
      switch (GET_MODE (operands[0]))
        {
        case E_V8HFmode:
          return 6;

        case E_V4SFmode:
          return 7;

        case E_V2DFmode:
          return 8;

        default:
          return -1;
        }

    default:
      return -1;
    }
}

int
pattern1145 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != i1
      || !nonimmediate_operand (operands[2], i1))
    return -1;
  x3 = XEXP (x1, 1);
  if (GET_MODE (x3) != i1
      || !nonimmediate_operand (operands[1], i1))
    return -1;
  x4 = XEXP (x1, 2);
  if (GET_MODE (x4) != i1)
    return -1;
  x5 = XEXP (x4, 1);
  if (GET_MODE (x5) != i1)
    return -1;
  return 0;
}

int
pattern1153 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  operands[2] = x3;
  x4 = XEXP (x3, 0);
  if (GET_CODE (x4) != REG
      || REGNO (x4) != 17)
    return -1;
  x5 = XEXP (x3, 1);
  if (x5 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
    return -1;
  x6 = XEXP (x2, 1);
  operands[1] = x6;
  return pattern1152 (x1); /* [-1, 5] */
}

int
pattern1162 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (!nonimmediate_operand (operands[0], i2)
      || GET_MODE (x1) != i2
      || !nonimmediate_operand (operands[1], i2))
    return -1;
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) != i2
      || !nonimmediate_operand (operands[2], i1))
    return -1;
  return 0;
}

int
pattern1169 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  switch (GET_CODE (x3))
    {
    case AND:
      x4 = XEXP (x3, 0);
      operands[2] = x4;
      if (!int248_register_operand (operands[2], E_VOIDmode))
        return -1;
      return pattern1168 (x1); /* [-1, 3] */

    case PLUS:
      x4 = XEXP (x3, 0);
      operands[2] = x4;
      if (!int_nonimmediate_operand (operands[2], E_VOIDmode))
        return -1;
      res = pattern1168 (x1);
      if (res >= 0)
        return res + 4; /* [4, 7] */
      return -1;

    case MINUS:
      x4 = XEXP (x3, 0);
      operands[3] = x4;
      if (!const_int_operand (operands[3], E_VOIDmode))
        return -1;
      x5 = XEXP (x3, 1);
      operands[2] = x5;
      if (!int_nonimmediate_operand (operands[2], E_VOIDmode))
        return -1;
      res = pattern202 (x1);
      if (res >= 0)
        return res + 8; /* [8, 11] */
      return -1;

    default:
      return -1;
    }
}

int
pattern1186 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i2)
      || GET_MODE (x1) != i2
      || !const0_operand (operands[2], i2)
      || !vector_all_ones_operand (operands[3], i2)
      || !register_operand (operands[1], i1))
    return -1;
  return 0;
}

int
pattern1193 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) != i1)
    return -1;
  x4 = XEXP (x3, 0);
  if (GET_CODE (x4) != PLUS
      || GET_MODE (x4) != i1)
    return -1;
  x5 = XEXP (x4, 0);
  if (!ix86_carry_flag_operator (x5, i1))
    return -1;
  operands[4] = x5;
  x6 = XEXP (x5, 1);
  if (x6 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
    return -1;
  x7 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x7) != CLOBBER)
    return -1;
  x8 = XEXP (x7, 0);
  if (GET_CODE (x8) != REG
      || REGNO (x8) != 17
      || GET_MODE (x8) != E_CCmode)
    return -1;
  x9 = XEXP (x5, 0);
  operands[3] = x9;
  if (!flags_reg_operand (operands[3], E_VOIDmode))
    return -1;
  x10 = XEXP (x3, 1);
  operands[2] = x10;
  if (!memory_operand (operands[2], i1))
    return -1;
  x11 = XEXP (x4, 1);
  if (!rtx_equal_p (x11, operands[0]))
    return -1;
  x12 = XEXP (x2, 0);
  return pattern1192 (x12, 
i1); /* [-1, 1] */
}

int
pattern1204 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  if (!nonimmediate_operand (operands[0], i1)
      || GET_MODE (x1) != i1)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != i1)
    return -1;
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) != i1
      || !nonimmediate_operand (operands[1], i1)
      || !x86_64_immediate_operand (operands[2], i1))
    return -1;
  return 0;
}

int
pattern1212 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != i1)
    return -1;
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) != i1
      || !nonimmediate_operand (operands[1], i1)
      || !nonimm_or_0_operand (operands[3], i1)
      || !register_operand (operands[2], i1))
    return -1;
  return 0;
}

int
pattern1219 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!const48_operand (operands[3], E_SImode))
    return -1;
  switch (GET_MODE (operands[0]))
    {
    case E_V32HFmode:
      return pattern1218 (x1, 
E_V32HFmode); /* [-1, 0] */

    case E_V16HFmode:
      if (pattern1218 (x1, 
E_V16HFmode) != 0)
        return -1;
      return 1;

    case E_V16SFmode:
      if (pattern1218 (x1, 
E_V16SFmode) != 0)
        return -1;
      return 2;

    case E_V8SFmode:
      if (pattern1218 (x1, 
E_V8SFmode) != 0)
        return -1;
      return 3;

    case E_V8DFmode:
      if (pattern1218 (x1, 
E_V8DFmode) != 0)
        return -1;
      return 4;

    case E_V4DFmode:
      if (pattern1218 (x1, 
E_V4DFmode) != 0)
        return -1;
      return 5;

    default:
      return -1;
    }
}

int
pattern1231 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1
      || !nonimmediate_operand (operands[2], i2))
    return -1;
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) != i2
      || !register_operand (operands[1], i1))
    return -1;
  return 0;
}

int
pattern1236 (rtx x1, rtx_code i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 1);
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) != i1)
    return -1;
  x4 = XVECEXP (x1, 0, 0);
  x5 = XEXP (x4, 0);
  if (GET_MODE (x5) != E_CCGOCmode)
    return -1;
  return pattern362 (x1, 
E_CCGOCmode); /* [-1, 3] */
}

int
pattern1241 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4;
  int res ATTRIBUTE_UNUSED;
  if (GET_MODE (x1) != i1)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != i1)
    return -1;
  x3 = XEXP (x1, 1);
  if (GET_MODE (x3) != i1)
    return -1;
  x4 = XEXP (x3, 0);
  if (!register_operand (x4, i1))
    return -1;
  return 0;
}

int
pattern1243 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != i1)
    return -1;
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) != i1
      || !register_operand (operands[1], i1))
    return -1;
  return 0;
}

int
pattern1246 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  operands[2] = x4;
  if (!register_operand (operands[2], E_QImode))
    return -1;
  x5 = XEXP (x1, 1);
  operands[1] = x5;
  switch (GET_MODE (operands[0]))
    {
    case E_SImode:
      return pattern1245 (x1, 
E_SImode); /* [-1, 0] */

    case E_DImode:
      if (pattern1245 (x1, 
E_DImode) != 0)
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern1256 (rtx x1, int i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8;
  int res ATTRIBUTE_UNUSED;
  if (GET_CODE (x1) != SET)
    return -1;
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) != COMPARE
      || GET_MODE (x2) != E_CCZmode)
    return -1;
  x3 = XEXP (x2, 1);
  if (x3 != const_int_rtx[MAX_SAVED_CONST_INT + i1])
    return -1;
  x4 = XEXP (x1, 0);
  if (GET_CODE (x4) != REG
      || REGNO (x4) != 17
      || GET_MODE (x4) != E_CCZmode)
    return -1;
  x5 = XEXP (x2, 0);
  if (!rtx_equal_p (x5, operands[0]))
    return -1;
  x6 = PATTERN (peep2_next_insn (2));
  if (GET_CODE (x6) != SET)
    return -1;
  x7 = XEXP (x6, 1);
  if (GET_CODE (x7) != IF_THEN_ELSE)
    return -1;
  x8 = XEXP (x7, 0);
  if (!bt_comparison_operator (x8, E_VOIDmode))
    return -1;
  return 0;
}

int
pattern1267 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  x5 = XEXP (x4, 0);
  operands[1] = x5;
  if (!int248_register_operand (operands[1], E_VOIDmode))
    return -1;
  x6 = XEXP (x2, 1);
  x7 = XEXP (x6, 0);
  x8 = XEXP (x7, 0);
  operands[2] = x8;
  if (!int248_register_operand (operands[2], E_VOIDmode))
    return -1;
  x9 = XEXP (x1, 0);
  switch (GET_CODE (x9))
    {
    case STRICT_LOW_PART:
      x10 = XEXP (x9, 0);
      operands[0] = x10;
      if (!register_operand (operands[0], E_QImode))
        return -1;
      return pattern1266 (); /* [-1, 2] */

    case REG:
    case SUBREG:
      operands[0] = x9;
      if (!register_operand (operands[0], E_QImode))
        return -1;
      res = pattern1266 ();
      if (res >= 0)
        return res + 3; /* [3, 5] */
      return -1;

    default:
      return -1;
    }
}

int
pattern1285 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != i1)
    return -1;
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) != i1)
    return -1;
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) != i2
      || !nonimmediate_operand (operands[1], i2)
      || !nonimm_or_0_operand (operands[3], i1)
      || !register_operand (operands[2], i1))
    return -1;
  return 0;
}

int
pattern1295 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!nonimmediate_operand (operands[2], i2)
      || GET_MODE (x1) != i2
      || !nonimmediate_operand (operands[3], i2)
      || !register_operand (operands[4], i1))
    return -1;
  return 0;
}

int
pattern1301 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 4);
  if (GET_CODE (x2) != CONST_INT)
    return -1;
  x3 = XVECEXP (x1, 0, 5);
  if (GET_CODE (x3) != CONST_INT)
    return -1;
  x4 = XVECEXP (x1, 0, 6);
  if (GET_CODE (x4) != CONST_INT)
    return -1;
  x5 = XVECEXP (x1, 0, 7);
  if (GET_CODE (x5) != CONST_INT)
    return -1;
  x6 = XVECEXP (x1, 0, 8);
  if (GET_CODE (x6) != CONST_INT)
    return -1;
  x7 = XVECEXP (x1, 0, 9);
  if (GET_CODE (x7) != CONST_INT)
    return -1;
  x8 = XVECEXP (x1, 0, 10);
  if (GET_CODE (x8) != CONST_INT)
    return -1;
  x9 = XVECEXP (x1, 0, 11);
  if (GET_CODE (x9) != CONST_INT)
    return -1;
  return 0;
}

int
pattern1313 (rtx x1, int i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  int res ATTRIBUTE_UNUSED;
  if (XVECLEN (x1, 0) != i1)
    return -1;
  x2 = XVECEXP (x1, 0, 0);
  if (x2 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
    return -1;
  x3 = XVECEXP (x1, 0, 1);
  if (x3 != const_int_rtx[MAX_SAVED_CONST_INT + 2])
    return -1;
  x4 = XVECEXP (x1, 0, 2);
  if (x4 != const_int_rtx[MAX_SAVED_CONST_INT + 4])
    return -1;
  x5 = XVECEXP (x1, 0, 3);
  if (x5 != const_int_rtx[MAX_SAVED_CONST_INT + 6])
    return -1;
  x6 = XVECEXP (x1, 0, 4);
  if (x6 != const_int_rtx[MAX_SAVED_CONST_INT + 8])
    return -1;
  x7 = XVECEXP (x1, 0, 5);
  if (x7 != const_int_rtx[MAX_SAVED_CONST_INT + 10])
    return -1;
  x8 = XVECEXP (x1, 0, 6);
  if (x8 != const_int_rtx[MAX_SAVED_CONST_INT + 12])
    return -1;
  x9 = XVECEXP (x1, 0, 7);
  if (x9 != const_int_rtx[MAX_SAVED_CONST_INT + 14])
    return -1;
  return 0;
}

int
pattern1324 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1
      || !register_operand (operands[1], i1)
      || !general_operand (operands[2], i1))
    return -1;
  return 0;
}

int
pattern1330 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (!nonimmediate_operand (operands[0], i1)
      || GET_MODE (x1) != i1)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != i1
      || !nonimmediate_operand (operands[1], i1)
      || !general_operand (operands[2], i1))
    return -1;
  return 0;
}

int
pattern1336 (rtx x1, int *pnum_clobbers)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 2);
  switch (GET_CODE (x2))
    {
    case UNSPEC:
      if (pnum_clobbers == NULL)
        return -1;
      return pattern388 (x1); /* [-1, 1] */

    case CLOBBER:
      x3 = XEXP (x2, 0);
      if (GET_CODE (x3) != REG
          || REGNO (x3) != 17
          || GET_MODE (x3) != E_CCmode)
        return -1;
      switch (GET_MODE (operands[0]))
        {
        case E_HImode:
          if (pattern387 (x1, 
E_HImode) != 0)
            return -1;
          return 2;

        case E_SImode:
          if (pattern387 (x1, 
E_SImode) != 0)
            return -1;
          return 3;

        case E_DImode:
          if (pattern387 (x1, 
E_DImode) != 0)
            return -1;
          return 4;

        default:
          return -1;
        }

    case USE:
      res = pattern390 (x1);
      if (res >= 0)
        return res + 5; /* [5, 7] */
      return -1;

    default:
      return -1;
    }
}

int
pattern1355 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1)
    return -1;
  return pattern1354 (); /* [-1, 2] */
}

int
pattern1359 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  int res ATTRIBUTE_UNUSED;
  if (GET_MODE (x1) != i1)
    return -1;
  x2 = XVECEXP (x1, 0, 0);
  if (x2 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
    return -1;
  x3 = XVECEXP (x1, 0, 1);
  if (x3 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
    return -1;
  x4 = XVECEXP (x1, 0, 2);
  if (x4 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
    return -1;
  x5 = XVECEXP (x1, 0, 3);
  if (x5 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
    return -1;
  x6 = XVECEXP (x1, 0, 4);
  if (x6 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
    return -1;
  x7 = XVECEXP (x1, 0, 5);
  if (x7 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
    return -1;
  x8 = XVECEXP (x1, 0, 6);
  if (x8 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
    return -1;
  x9 = XVECEXP (x1, 0, 7);
  if (x9 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
    return -1;
  return 0;
}

int
pattern1374 (machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!nonimmediate_operand (operands[2], i2)
      || !nonimmediate_operand (operands[3], i2)
      || !const0_operand (operands[4], i2)
      || !register_operand (operands[5], i1))
    return -1;
  return 0;
}

int
pattern1380 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!nonimmediate_operand (operands[2], i2)
      || GET_MODE (x1) != i2
      || !nonimmediate_operand (operands[3], i2)
      || !const0_operand (operands[4], i2)
      || !register_operand (operands[5], i1))
    return -1;
  return 0;
}

int
pattern1388 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != i1)
    return -1;
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) != i1
      || !nonimmediate_operand (operands[1], i1)
      || !nonimmediate_operand (operands[2], i1)
      || !nonimmediate_operand (operands[3], i1))
    return -1;
  return 0;
}

int
pattern1396 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  operands[4] = x4;
  x5 = XEXP (x3, 2);
  operands[5] = x5;
  if (!register_operand (operands[5], E_QImode))
    return -1;
  x6 = XVECEXP (x1, 0, 1);
  operands[6] = x6;
  if (!const48_operand (operands[6], E_SImode))
    return -1;
  x7 = XEXP (x2, 1);
  if (!rtx_equal_p (x7, operands[1]))
    return -1;
  switch (GET_MODE (operands[0]))
    {
    case E_V8HFmode:
      return pattern1395 (x1, 
E_V8HFmode); /* [-1, 0] */

    case E_V4SFmode:
      if (pattern1395 (x1, 
E_V4SFmode) != 0)
        return -1;
      return 1;

    case E_V2DFmode:
      if (pattern1395 (x1, 
E_V2DFmode) != 0)
        return -1;
      return 2;

    default:
      return -1;
    }
}

int
pattern1410 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1)
    return -1;
  x2 = XVECEXP (x1, 0, 0);
  if (GET_MODE (x2) != i1)
    return -1;
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) != i1
      || !register_operand (operands[1], i1)
      || !register_operand (operands[2], i1)
      || !register_operand (operands[3], i1))
    return -1;
  return 0;
}

int
pattern1420 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  x4 = XVECEXP (x3, 0, 0);
  operands[2] = x4;
  if (!register_operand (operands[2], E_XFmode))
    return -1;
  x5 = XVECEXP (x3, 0, 1);
  operands[3] = x5;
  if (!register_operand (operands[3], E_XFmode))
    return -1;
  x6 = XVECEXP (x1, 0, 1);
  x7 = XEXP (x6, 0);
  operands[1] = x7;
  if (!register_operand (operands[1], E_XFmode))
    return -1;
  x8 = XEXP (x6, 1);
  x9 = XVECEXP (x8, 0, 0);
  if (!rtx_equal_p (x9, operands[2]))
    return -1;
  x10 = XVECEXP (x8, 0, 1);
  if (!rtx_equal_p (x10, operands[3]))
    return -1;
  return 0;
}

int
pattern1434 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != i1
      || !register_operand (operands[1], i1)
      || !nonimmediate_operand (operands[2], i1))
    return -1;
  return 0;
}

int
pattern1441 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!nonimmediate_operand (operands[0], i2)
      || GET_MODE (x1) != i2
      || !register_operand (operands[1], i1)
      || !scratch_operand (operands[2], i1))
    return -1;
  return 0;
}

int
pattern1448 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  if (GET_CODE (x2) != REG
      || REGNO (x2) != 17
      || GET_MODE (x2) != E_CCCmode)
    return -1;
  x3 = XEXP (x1, 1);
  if (x3 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
    return -1;
  return 0;
}

int
pattern1452 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != i1
      || !nonimmediate_operand (operands[1], i1))
    return -1;
  x3 = XEXP (x1, 1);
  if (GET_MODE (x3) != i1)
    return -1;
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) != i1)
    return -1;
  return 0;
}

int
pattern1460 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != i1)
    return -1;
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) != i1)
    return -1;
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) != i2
      || !nonimm_or_0_operand (operands[3], i1)
      || !register_operand (operands[2], i1))
    return -1;
  return 0;
}

int
pattern1469 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1
      || !vector_operand (operands[1], i1)
      || !vector_operand (operands[2], i1))
    return -1;
  x2 = XEXP (x1, 2);
  if (GET_MODE (x2) != i2)
    return -1;
  x3 = XVECEXP (x2, 0, 0);
  if (GET_MODE (x3) != i1
      || !register_operand (operands[3], E_VOIDmode)
      || !const0_operand (operands[4], i1))
    return -1;
  return 0;
}

int
pattern1478 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1)
    return -1;
  x2 = XVECEXP (x1, 0, 0);
  if (GET_MODE (x2) != i1)
    return -1;
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) != i1)
    return -1;
  return 0;
}

int
pattern1483 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1)
    return -1;
  x2 = XVECEXP (x1, 0, 0);
  if (GET_MODE (x2) != i1)
    return -1;
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) != i1
      || !register_operand (operands[1], i1)
      || !nonimm_or_0_operand (operands[2], i1)
      || !register_operand (operands[3], i2))
    return -1;
  return 0;
}

int
pattern1489 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != i2
      || !register_operand (operands[1], i1)
      || !vector_operand (operands[2], i1))
    return -1;
  return 0;
}

int
pattern1496 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], E_SImode))
    return -1;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) != E_SImode
      || !nonimmediate_operand (operands[3], E_SImode)
      || !register_operand (operands[1], E_SImode))
    return -1;
  x4 = XVECEXP (x1, 0, 1);
  x5 = XEXP (x4, 1);
  if (GET_MODE (x5) != E_SImode)
    return -1;
  return 0;
}

int
pattern1506 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (maybe_ne (SUBREG_BYTE (x1), 0)
      || GET_MODE (x1) != E_QImode
      || !nonimmediate_operand (operands[0], E_SImode))
    return -1;
  x2 = XEXP (x1, 0);
  return pattern1165 (x2); /* [-1, 2] */
}

int
pattern1511 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != i1
      || !register_operand (operands[1], i2))
    return -1;
  x3 = XEXP (x1, 1);
  if (GET_MODE (x3) != i1)
    return -1;
  return 0;
}

int
pattern1521 ()
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!const_0_to_3_operand (operands[3], E_VOIDmode)
      || !const_0_to_3_operand (operands[4], E_VOIDmode)
      || !const_4_to_7_operand (operands[5], E_VOIDmode)
      || !const_4_to_7_operand (operands[6], E_VOIDmode))
    return -1;
  return 0;
}

int
pattern1527 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], E_QImode)
      || GET_MODE (x1) != E_QImode)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != E_QImode)
    return -1;
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  x5 = XEXP (x4, 0);
  operands[1] = x5;
  x6 = XEXP (x4, 1);
  operands[2] = x6;
  if (!register_operand (operands[2], E_QImode))
    return -1;
  switch (GET_MODE (x4))
    {
    case E_SImode:
      if (!register_operand (operands[1], E_SImode))
        return -1;
      return 0;

    case E_DImode:
      if (!register_operand (operands[1], E_DImode))
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern1540 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (GET_MODE (x1) != i1
      || !nonimmediate_operand (operands[1], i1)
      || !ix86_carry_flag_operator (operands[3], i1)
      || !x86_64_general_operand (operands[2], i1))
    return -1;
  return 0;
}

int
pattern1546 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (!nonimmediate_operand (operands[0], i1)
      || GET_MODE (x1) != i1)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != i1
      || !register_operand (operands[1], i2)
      || !nonimm_or_0_operand (operands[4], i1))
    return -1;
  return 0;
}

int
pattern1551 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1)
    return -1;
  x2 = XVECEXP (x1, 0, 0);
  if (GET_MODE (x2) != i1)
    return -1;
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) != i1
      || !register_operand (operands[1], i1)
      || !nonimm_or_0_operand (operands[3], i1)
      || !register_operand (operands[4], i2))
    return -1;
  return 0;
}

int
pattern1557 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 2);
  if (XWINT (x2, 0) != 2L)
    return -1;
  x3 = XVECEXP (x1, 0, 3);
  if (XWINT (x3, 0) != 3L)
    return -1;
  x4 = XVECEXP (x1, 0, 4);
  if (XWINT (x4, 0) != 4L)
    return -1;
  x5 = XVECEXP (x1, 0, 5);
  if (XWINT (x5, 0) != 5L)
    return -1;
  x6 = XVECEXP (x1, 0, 6);
  if (XWINT (x6, 0) != 6L)
    return -1;
  x7 = XVECEXP (x1, 0, 7);
  if (XWINT (x7, 0) != 7L)
    return -1;
  return 0;
}

int
pattern1570 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1))
    return -1;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) != i1
      || !memory_operand (operands[1], i1))
    return -1;
  x4 = XVECEXP (x1, 0, 1);
  x5 = XEXP (x4, 1);
  if (GET_MODE (x5) != i1
      || !nonmemory_operand (operands[2], i1))
    return -1;
  return 0;
}

int
pattern1579 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], E_V4SFmode)
      || GET_MODE (x1) != E_V4SFmode)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != E_V4SFmode)
    return -1;
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) != E_V8SFmode
      || !vector_operand (operands[1], E_V4SFmode))
    return -1;
  x4 = XEXP (x1, 1);
  operands[2] = x4;
  if (!nonimm_or_0_operand (operands[2], E_V4SFmode))
    return -1;
  x5 = XEXP (x1, 2);
  operands[3] = x5;
  x6 = XEXP (x3, 1);
  if (!rtx_equal_p (x6, operands[1]))
    return -1;
  return 0;
}

int
pattern1588 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1)
    return -1;
  x2 = XVECEXP (x1, 0, 0);
  if (GET_MODE (x2) != i1)
    return -1;
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) != i1
      || !register_operand (operands[1], i1)
      || pattern1587 (
i1, 
i2) != 0)
    return -1;
  return 0;
}

int
pattern1596 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1)
    return -1;
  x2 = XVECEXP (x1, 0, 0);
  if (GET_MODE (x2) != i1)
    return -1;
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) != i1)
    return -1;
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) != i1)
    return -1;
  x5 = XEXP (x3, 2);
  if (GET_MODE (x5) != i1
      || !const0_operand (operands[4], i1)
      || !register_operand (operands[5], E_QImode))
    return -1;
  return 0;
}

int
pattern1605 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4;
  int res ATTRIBUTE_UNUSED;
  if (!vsib_mem_operator (operands[5], i1)
      || !register_operand (operands[6], E_QImode))
    return -1;
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) != i1
      || !register_operand (operands[3], i1))
    return -1;
  x3 = XEXP (x1, 0);
  x4 = XEXP (x3, 0);
  switch (GET_MODE (x4))
    {
    case E_SImode:
      return pattern1604 (
E_SImode); /* [-1, 1] */

    case E_DImode:
      res = pattern1604 (
E_DImode);
      if (res >= 0)
        return res + 2; /* [2, 3] */
      return -1;

    default:
      return -1;
    }
}

int
pattern1617 (rtx x1, int i1, int i2, int i3, int i4)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  int res ATTRIBUTE_UNUSED;
  if (XVECLEN (x1, 0) != 4)
    return -1;
  x2 = XVECEXP (x1, 0, 0);
  if (x2 != const_int_rtx[MAX_SAVED_CONST_INT + i4])
    return -1;
  x3 = XVECEXP (x1, 0, 1);
  if (x3 != const_int_rtx[MAX_SAVED_CONST_INT + i3])
    return -1;
  x4 = XVECEXP (x1, 0, 2);
  if (x4 != const_int_rtx[MAX_SAVED_CONST_INT + i2])
    return -1;
  x5 = XVECEXP (x1, 0, 3);
  if (x5 != const_int_rtx[MAX_SAVED_CONST_INT + i1])
    return -1;
  return 0;
}

int
pattern1627 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (!nonimmediate_operand (operands[0], i1)
      || GET_MODE (x1) != i1)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != i1
      || !nonimmediate_operand (operands[1], i1)
      || !ix86_carry_flag_operator (operands[4], i1)
      || !general_operand (operands[2], i1))
    return -1;
  return 0;
}

int
pattern1636 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != i1)
    return -1;
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) != i2
      || !register_operand (operands[1], i1))
    return -1;
  x4 = XEXP (x3, 1);
  operands[2] = x4;
  if (!nonimmediate_operand (operands[2], i1))
    return -1;
  x5 = XEXP (x1, 1);
  operands[3] = x5;
  if (!nonimm_or_0_operand (operands[3], i1))
    return -1;
  x6 = XEXP (x1, 2);
  operands[4] = x6;
  return 0;
}

int
pattern1647 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1)
    return -1;
  x2 = XVECEXP (x1, 0, 0);
  if (GET_MODE (x2) != i1)
    return -1;
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) != i1)
    return -1;
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) != i1
      || !nonimmediate_operand (operands[1], i1)
      || !register_operand (operands[2], i1)
      || !register_operand (operands[3], i1))
    return -1;
  return 0;
}

int
pattern1657 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!nonimmediate_operand (operands[1], i1)
      || !const_int_operand (operands[2], i1)
      || !nonimmediate_operand (operands[0], i1)
      || GET_MODE (x1) != i1)
    return -1;
  return 0;
}

int
pattern1663 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || !addsub_vs_operator (operands[7], i1)
      || GET_MODE (x1) != i2)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != i1
      || !vector_operand (operands[1], i1)
      || !vector_operand (operands[2], i1))
    return -1;
  x3 = XEXP (x1, 1);
  if (GET_MODE (x3) != i1
      || !register_operand (operands[3], i1)
      || !vector_operand (operands[4], i1))
    return -1;
  return 0;
}

int
pattern1675 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8;
  int res ATTRIBUTE_UNUSED;
  if (!nonimmediate_operand (operands[0], E_DImode))
    return -1;
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) != E_DImode)
    return -1;
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) != E_TImode)
    return -1;
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) != E_TImode)
    return -1;
  x5 = XEXP (x4, 0);
  operands[1] = x5;
  if (!register_operand (operands[1], E_DImode))
    return -1;
  x6 = XEXP (x3, 1);
  operands[3] = x6;
  if (!const_0_to_255_operand (operands[3], E_QImode))
    return -1;
  x7 = XEXP (x1, 0);
  x8 = XEXP (x7, 0);
  if (!rtx_equal_p (x8, operands[0]))
    return -1;
  return 0;
}

int
pattern1686 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (!bt_comparison_operator (operands[3], i1))
    return -1;
  x2 = XVECEXP (x1, 0, 0);
  switch (GET_MODE (x2))
    {
    case E_V16QImode:
      return pattern1685 (x1, 
E_V16QImode); /* [-1, 0] */

    case E_V8HImode:
      if (pattern1685 (x1, 
E_V8HImode) != 0)
        return -1;
      return 1;

    case E_V4SImode:
      if (pattern1685 (x1, 
E_V4SImode) != 0)
        return -1;
      return 2;

    case E_V2DImode:
      if (pattern1685 (x1, 
E_V2DImode) != 0)
        return -1;
      return 3;

    case E_V1TImode:
      if (pattern1685 (x1, 
E_V1TImode) != 0)
        return -1;
      return 4;

    case E_V4SFmode:
      if (pattern1685 (x1, 
E_V4SFmode) != 0)
        return -1;
      return 5;

    case E_V2DFmode:
      if (pattern1685 (x1, 
E_V2DFmode) != 0)
        return -1;
      return 6;

    case E_V32QImode:
      if (pattern1685 (x1, 
E_V32QImode) != 0)
        return -1;
      return 7;

    case E_V16HImode:
      if (pattern1685 (x1, 
E_V16HImode) != 0)
        return -1;
      return 8;

    case E_V8SImode:
      if (pattern1685 (x1, 
E_V8SImode) != 0)
        return -1;
      return 9;

    case E_V4DImode:
      if (pattern1685 (x1, 
E_V4DImode) != 0)
        return -1;
      return 10;

    case E_V2TImode:
      if (pattern1685 (x1, 
E_V2TImode) != 0)
        return -1;
      return 11;

    case E_V8SFmode:
      if (pattern1685 (x1, 
E_V8SFmode) != 0)
        return -1;
      return 12;

    case E_V4DFmode:
      if (pattern1685 (x1, 
E_V4DFmode) != 0)
        return -1;
      return 13;

    default:
      return -1;
    }
}

int
pattern1713 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4;
  int res ATTRIBUTE_UNUSED;
  if (!vsib_mem_operator (operands[5], i1)
      || !register_operand (operands[6], E_QImode))
    return -1;
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) != i1
      || !register_operand (operands[3], i1)
      || !scratch_operand (operands[1], E_QImode))
    return -1;
  x3 = XEXP (x1, 0);
  x4 = XEXP (x3, 0);
  switch (GET_MODE (x4))
    {
    case E_SImode:
      return pattern1712 (
E_SImode); /* [-1, 1] */

    case E_DImode:
      res = pattern1712 (
E_DImode);
      if (res >= 0)
        return res + 2; /* [2, 3] */
      return -1;

    default:
      return -1;
    }
}

int
pattern1726 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x2) != CLOBBER)
    return -1;
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) != REG
      || REGNO (x3) != 17
      || GET_MODE (x3) != E_CCmode)
    return -1;
  x4 = XVECEXP (x1, 0, 0);
  x5 = XEXP (x4, 0);
  operands[3] = x5;
  if (!any_QIreg_operand (operands[3], i1))
    return -1;
  return 0;
}

int
pattern1733 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1)
    return -1;
  x2 = XVECEXP (x1, 0, 0);
  if (GET_MODE (x2) != i1)
    return -1;
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) != i1)
    return -1;
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) != i1)
    return -1;
  x5 = XEXP (x4, 0);
  if (GET_MODE (x5) != i1
      || !register_operand (operands[2], i1)
      || !nonimmediate_operand (operands[1], i1))
    return -1;
  x6 = XEXP (x4, 2);
  if (GET_MODE (x6) != i1
      || !register_operand (operands[3], i1)
      || !const0_operand (operands[4], i1))
    return -1;
  return 0;
}

int
pattern1742 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i2)
      || GET_MODE (x1) != i2
      || !register_operand (operands[7], E_QImode)
      || !vsib_mem_operator (operands[6], i1)
      || !scratch_operand (operands[2], E_QImode))
    return -1;
  return 0;
}

int
pattern1748 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (GET_MODE (x1) != i1
      || !nonimmediate_operand (operands[1], i1)
      || !ix86_carry_flag_operator (operands[3], i1)
      || !x86_64_general_operand (operands[2], i1))
    return -1;
  return 0;
}

int
pattern1757 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) != i1
      || !register_operand (operands[1], i1)
      || !register_operand (operands[2], i1))
    return -1;
  x4 = XVECEXP (x1, 0, 1);
  if (GET_MODE (x4) != i1)
    return -1;
  x5 = XEXP (x4, 0);
  if (GET_MODE (x5) != i1)
    return -1;
  return 0;
}

int
pattern1765 (machine_mode i1, machine_mode i2, machine_mode i3)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[2], i3)
      || !register_operand (operands[6], i1)
      || !register_operand (operands[3], i2)
      || !scratch_operand (operands[1], i1))
    return -1;
  return 0;
}

int
pattern1768 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  switch (GET_MODE (operands[0]))
    {
    case E_SImode:
      if (!register_operand (operands[0], E_SImode)
          || GET_MODE (x1) != E_SImode)
        return -1;
      return 0;

    case E_V16QImode:
      if (!register_operand (operands[0], E_V16QImode)
          || GET_MODE (x1) != E_V16QImode)
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern1776 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  switch (GET_MODE (operands[0]))
    {
    case E_V16HImode:
      if (!nonimmediate_operand (operands[0], E_V16HImode)
          || GET_MODE (x1) != E_V16HImode
          || !nonimmediate_operand (operands[1], E_V32HImode))
        return -1;
      return 0;

    case E_V16HFmode:
      if (!nonimmediate_operand (operands[0], E_V16HFmode)
          || GET_MODE (x1) != E_V16HFmode
          || !nonimmediate_operand (operands[1], E_V32HFmode))
        return -1;
      return 1;

    case E_V16BFmode:
      if (!nonimmediate_operand (operands[0], E_V16BFmode)
          || GET_MODE (x1) != E_V16BFmode
          || !nonimmediate_operand (operands[1], E_V32BFmode))
        return -1;
      return 2;

    case E_V16QImode:
      if (!nonimmediate_operand (operands[0], E_V16QImode)
          || GET_MODE (x1) != E_V16QImode
          || !nonimmediate_operand (operands[1], E_V32QImode))
        return -1;
      return 3;

    default:
      return -1;
    }
}

int
pattern1793 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  x4 = XEXP (x3, 0);
  x5 = XEXP (x4, 0);
  if (GET_MODE (x5) != i2
      || !nonimmediate_operand (operands[1], i1))
    return -1;
  x6 = XEXP (x4, 1);
  if (GET_MODE (x6) != i2
      || !nonimmediate_operand (operands[2], i1)
      || pattern1791 (x1, 
i1, 
i2) != 0)
    return -1;
  return 0;
}

int
pattern1801 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[2], i1))
    return -1;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) != i1
      || !memory_operand (operands[3], i1)
      || !register_operand (operands[4], i1))
    return -1;
  x4 = XVECEXP (x1, 0, 1);
  x5 = XEXP (x4, 1);
  if (GET_MODE (x5) != i1)
    return -1;
  return 0;
}

int
pattern1809 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  x5 = XEXP (x4, 0);
  operands[2] = x5;
  if (!register_operand (operands[2], i1))
    return -1;
  x6 = XEXP (x3, 2);
  if (GET_MODE (x6) != i1
      || !nonimmediate_operand (operands[3], i1))
    return -1;
  x7 = XEXP (x2, 1);
  if (!rtx_equal_p (x7, operands[3]))
    return -1;
  x8 = XEXP (x1, 1);
  if (!rtx_equal_p (x8, operands[3]))
    return -1;
  return 0;
}

int
pattern1820 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[7], i1)
      || !register_operand (operands[3], i2)
      || !scratch_operand (operands[2], i1))
    return -1;
  switch (GET_MODE (x1))
    {
    case E_SImode:
      if (!vsib_address_operand (operands[4], E_SImode))
        return -1;
      return 0;

    case E_DImode:
      if (!vsib_address_operand (operands[4], E_DImode))
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern1826 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 4);
  if (XWINT (x2, 0) != 6L)
    return -1;
  x3 = XVECEXP (x1, 0, 5);
  if (XWINT (x3, 0) != 22L)
    return -1;
  x4 = XVECEXP (x1, 0, 6);
  if (XWINT (x4, 0) != 7L)
    return -1;
  x5 = XVECEXP (x1, 0, 7);
  if (XWINT (x5, 0) != 23L)
    return -1;
  return 0;
}

int
pattern1830 (machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!vsib_address_operand (operands[2], i1))
    return -1;
  switch (GET_MODE (operands[3]))
    {
    case E_V8SImode:
      if (!register_operand (operands[3], E_V8SImode)
          || !register_operand (operands[4], E_V8SImode))
        return -1;
      return 0;

    case E_V4DImode:
      if (!register_operand (operands[3], E_V4DImode)
          || !register_operand (operands[4], E_V4SImode))
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern1836 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[2], i1)
      || !register_operand (operands[4], i2))
    return -1;
  return pattern1835 (x1, 
i1); /* [-1, 1] */
}

int
pattern1841 ()
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!const_0_to_7_operand (operands[4], E_VOIDmode)
      || !const_0_to_7_operand (operands[5], E_VOIDmode)
      || !const_0_to_7_operand (operands[6], E_VOIDmode)
      || !const_8_to_15_operand (operands[7], E_VOIDmode)
      || !const_8_to_15_operand (operands[8], E_VOIDmode)
      || !const_8_to_15_operand (operands[9], E_VOIDmode)
      || !const_8_to_15_operand (operands[10], E_VOIDmode))
    return -1;
  return 0;
}

int
pattern1847 (rtx x1, machine_mode i1, machine_mode i2, machine_mode i3)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i2)
      || GET_MODE (x1) != i2)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != i1
      || !register_operand (operands[2], i2)
      || !vsib_mem_operator (operands[7], i3)
      || !register_operand (operands[5], i2)
      || !scratch_operand (operands[1], i1))
    return -1;
  x3 = XVECEXP (x2, 0, 1);
  x4 = XEXP (x3, 0);
  switch (GET_MODE (x4))
    {
    case E_SImode:
      if (!vsib_address_operand (operands[3], E_SImode))
        return -1;
      return 0;

    case E_DImode:
      if (!vsib_address_operand (operands[3], E_DImode))
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern1856 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8;
  int res ATTRIBUTE_UNUSED;
  if (!x86_64_general_operand (operands[1], i1))
    return -1;
  x2 = XVECEXP (x1, 0, 1);
  x3 = XEXP (x2, 1);
  if (XINT (x3, 1) != 112
      || GET_MODE (x3) != i1)
    return -1;
  x4 = XVECEXP (x1, 0, 2);
  x5 = XEXP (x4, 1);
  if (GET_CODE (x5) != COMPARE
      || GET_MODE (x5) != E_CCmode
      || !memory_operand (operands[2], i1)
      || !register_operand (operands[3], i1))
    return -1;
  x6 = XEXP (x4, 0);
  if (GET_MODE (x6) != E_CCmode)
    return -1;
  x7 = XEXP (x5, 0);
  if (!rtx_equal_p (x7, operands[2]))
    return -1;
  x8 = XEXP (x5, 1);
  if (!rtx_equal_p (x8, operands[0])
      || !register_operand (operands[5], i1)
      || !x86_64_general_operand (operands[6], i1))
    return -1;
  return 0;
}

int
pattern1863 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[4], E_SImode)
      || GET_MODE (x1) != E_SImode
      || !nonmemory_operand (operands[2], E_SImode))
    return -1;
  x2 = PATTERN (peep2_next_insn (3));
  x3 = XEXP (x2, 1);
  operands[5] = x3;
  if (!register_operand (operands[5], i1))
    return -1;
  x4 = PATTERN (peep2_next_insn (4));
  x5 = XEXP (x4, 1);
  x6 = XEXP (x5, 0);
  operands[6] = x6;
  x7 = XEXP (x5, 1);
  operands[7] = x7;
  return 0;
}

int
pattern1871 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  x4 = XEXP (x3, 0);
  x5 = XEXP (x4, 0);
  if (GET_MODE (x5) != i2
      || !ix86_carry_flag_operator (operands[4], i2))
    return -1;
  x6 = XEXP (x5, 1);
  if (GET_MODE (x6) != i2
      || !nonimmediate_operand (operands[1], i1)
      || !const_int_operand (operands[6], i2))
    return -1;
  x7 = XEXP (x3, 1);
  if (GET_MODE (x7) != i2)
    return -1;
  x8 = XEXP (x7, 0);
  if (GET_MODE (x8) != i1)
    return -1;
  x9 = XEXP (x8, 0);
  if (GET_MODE (x9) != i1
      || !ix86_carry_flag_operator (operands[5], i1))
    return -1;
  x10 = XVECEXP (x1, 0, 1);
  x11 = XEXP (x10, 1);
  return pattern1870 (x11, 
i1); /* [-1, 0] */
}

int
pattern1881 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 8);
  if (XWINT (x2, 0) != 12L)
    return -1;
  x3 = XVECEXP (x1, 0, 9);
  if (XWINT (x3, 0) != 44L)
    return -1;
  x4 = XVECEXP (x1, 0, 10);
  if (XWINT (x4, 0) != 13L)
    return -1;
  x5 = XVECEXP (x1, 0, 11);
  if (XWINT (x5, 0) != 45L)
    return -1;
  x6 = XVECEXP (x1, 0, 12);
  if (XWINT (x6, 0) != 14L)
    return -1;
  x7 = XVECEXP (x1, 0, 13);
  if (XWINT (x7, 0) != 46L)
    return -1;
  x8 = XVECEXP (x1, 0, 14);
  if (XWINT (x8, 0) != 15L)
    return -1;
  x9 = XVECEXP (x1, 0, 15);
  if (XWINT (x9, 0) != 47L)
    return -1;
  return 0;
}

 int
recog_4 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12, x13, x14, x15, x16, x17;
  rtx x18, x19, x20, x21, x22, x23, x24;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  if (GET_CODE (x2) != REG
      || REGNO (x2) != 17)
    return -1;
  x3 = XEXP (x1, 1);
  x4 = XEXP (x3, 0);
  switch (GET_CODE (x4))
    {
    case REG:
    case SUBREG:
    case MEM:
      operands[0] = x4;
      res = recog_3 (x1, insn, pnum_clobbers);
      if (res >= 0)
        return res;
      if (GET_CODE (x4) != SUBREG
          || pattern257 (x4) != 0)
        return -1;
      x5 = XEXP (x4, 0);
      x6 = XEXP (x5, 0);
      operands[0] = x6;
      if (!int248_register_operand (operands[0], E_VOIDmode))
        return -1;
      x7 = XEXP (x3, 1);
      operands[1] = x7;
      switch (pattern1354 ())
        {
        case 0:
          if (const0_operand (operands[1], E_QImode)
              && 
#line 1629 "../../gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)))
            return 24; /* *cmpqi_exthi_2 */
          if (general_operand (operands[1], E_QImode)
              && 
#line 1654 "../../gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCmode)))
            return 27; /* *cmpqi_exthi_3 */
          break;

        case 1:
          if (const0_operand (operands[1], E_QImode)
              && 
#line 1629 "../../gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)))
            return 25; /* *cmpqi_extsi_2 */
          if (general_operand (operands[1], E_QImode)
              && 
#line 1654 "../../gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCmode)))
            return 28; /* *cmpqi_extsi_3 */
          break;

        case 2:
          if (const0_operand (operands[1], E_QImode)
              && (
#line 1629 "../../gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)) && 
#line 1164 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return 26; /* *cmpqi_extdi_2 */
          if (general_operand (operands[1], E_QImode)
              && (
#line 1654 "../../gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCmode)) && 
#line 1164 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return 29; /* *cmpqi_extdi_3 */
          break;

        default:
          break;
        }
      if (GET_CODE (x7) != SUBREG
          || maybe_ne (SUBREG_BYTE (x7), 0)
          || GET_MODE (x7) != E_QImode)
        return -1;
      x8 = XEXP (x7, 0);
      switch (GET_CODE (x8))
        {
        case SIGN_EXTRACT:
        case ZERO_EXTRACT:
          operands[3] = x8;
          x9 = XEXP (x8, 1);
          if (x9 != const_int_rtx[MAX_SAVED_CONST_INT + 8])
            return -1;
          x10 = XEXP (x8, 2);
          if (x10 != const_int_rtx[MAX_SAVED_CONST_INT + 8])
            return -1;
          x11 = XEXP (x8, 0);
          operands[1] = x11;
          if (!int248_register_operand (operands[1], E_VOIDmode))
            return -1;
          switch (GET_MODE (operands[2]))
            {
            case E_HImode:
              if (!extract_operator (operands[2], E_HImode)
                  || !extract_operator (operands[3], E_HImode)
                  || !
#line 1673 "../../gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCmode)))
                return -1;
              return 30; /* *cmpqi_exthi_4 */

            case E_SImode:
              if (!extract_operator (operands[2], E_SImode)
                  || !extract_operator (operands[3], E_SImode)
                  || !
#line 1673 "../../gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCmode)))
                return -1;
              return 31; /* *cmpqi_extsi_4 */

            case E_DImode:
              if (!extract_operator (operands[2], E_DImode)
                  || !extract_operator (operands[3], E_DImode)
                  || !(
#line 1673 "../../gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCmode)) && 
#line 1164 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return -1;
              return 32; /* *cmpqi_extdi_4 */

            default:
              return -1;
            }

        default:
          return -1;
        }

    case MINUS:
      x7 = XEXP (x3, 1);
      if (x7 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
        return -1;
      x5 = XEXP (x4, 0);
      operands[0] = x5;
      x12 = XEXP (x4, 1);
      operands[1] = x12;
      switch (GET_MODE (x4))
        {
        case E_QImode:
          if (!nonimmediate_operand (operands[0], E_QImode)
              || !general_operand (operands[1], E_QImode)
              || !
#line 1600 "../../gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)))
            return -1;
          return 17; /* *cmpqi_minus_1 */

        case E_HImode:
          if (!nonimmediate_operand (operands[0], E_HImode)
              || !general_operand (operands[1], E_HImode)
              || !
#line 1600 "../../gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)))
            return -1;
          return 18; /* *cmphi_minus_1 */

        case E_SImode:
          if (!nonimmediate_operand (operands[0], E_SImode)
              || !x86_64_general_operand (operands[1], E_SImode)
              || !
#line 1600 "../../gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)))
            return -1;
          return 19; /* *cmpsi_minus_1 */

        case E_DImode:
          if (!nonimmediate_operand (operands[0], E_DImode)
              || !x86_64_general_operand (operands[1], E_DImode)
              || !(
#line 1600 "../../gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)) && 
#line 1161 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return -1;
          return 20; /* *cmpdi_minus_1 */

        default:
          return -1;
        }

    case NEG:
      if (GET_MODE (x4) != E_QImode
          || GET_MODE (x2) != E_CCCmode
          || GET_MODE (x3) != E_CCCmode)
        return -1;
      x5 = XEXP (x4, 0);
      if (GET_MODE (x5) != E_QImode)
        return -1;
      x7 = XEXP (x3, 1);
      if (GET_MODE (x7) != E_QImode)
        return -1;
      switch (GET_CODE (x5))
        {
        case LTU:
          x6 = XEXP (x5, 0);
          if (GET_CODE (x6) != REG
              || REGNO (x6) != 17
              || GET_MODE (x6) != E_CCCmode)
            return -1;
          x13 = XEXP (x5, 1);
          if (x13 != const_int_rtx[MAX_SAVED_CONST_INT + 0]
              || GET_CODE (x7) != GEU
              || pattern1448 (x7) != 0)
            return -1;
          return 64; /* *x86_cmc */

        case GEU:
          x6 = XEXP (x5, 0);
          if (GET_CODE (x6) != REG
              || REGNO (x6) != 17)
            return -1;
          x13 = XEXP (x5, 1);
          if (x13 != const_int_rtx[MAX_SAVED_CONST_INT + 0]
              || GET_CODE (x7) != LTU)
            return -1;
          x8 = XEXP (x7, 0);
          if (GET_CODE (x8) != REG
              || REGNO (x8) != 17)
            return -1;
          x14 = XEXP (x7, 1);
          if (x14 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
            return -1;
          switch (GET_MODE (x6))
            {
            case E_CCmode:
              if (GET_MODE (x8) != E_CCmode
                  || !
#line 9873 "../../gcc/config/i386/i386.md"
(ix86_pre_reload_split ()))
                return -1;
              return 527; /* *setcc_qi_addqi3_cconly_overflow_1_cc */

            case E_CCCmode:
              if (GET_MODE (x8) != E_CCCmode
                  || !
#line 9873 "../../gcc/config/i386/i386.md"
(ix86_pre_reload_split ()))
                return -1;
              return 528; /* *setcc_qi_addqi3_cconly_overflow_1_ccc */

            default:
              return -1;
            }

        default:
          return -1;
        }

    case ZERO_EXTEND:
      if (pnum_clobbers == NULL)
        return -1;
      x7 = XEXP (x3, 1);
      if (pattern415 (x7, 
E_CCmode, 
PLUS) != 0
          || GET_MODE (x2) != E_CCCmode
          || GET_MODE (x3) != E_CCCmode)
        return -1;
      x5 = XEXP (x4, 0);
      operands[1] = x5;
      x14 = XEXP (x7, 1);
      switch (GET_CODE (x14))
        {
        case ZERO_EXTEND:
          x15 = XEXP (x14, 0);
          operands[2] = x15;
          switch (GET_MODE (x4))
            {
            case E_DImode:
              if (pattern1577 (x7, 
E_SImode, 
E_DImode) != 0
                  || !
#line 1235 "../../gcc/config/i386/i386.md"
(!TARGET_64BIT))
                return -1;
              *pnum_clobbers = 1;
              return 517; /* subsi3_carry_ccc */

            case E_TImode:
              if (pattern1577 (x7, 
E_DImode, 
E_TImode) != 0
                  || !
#line 1236 "../../gcc/config/i386/i386.md"
(TARGET_64BIT))
                return -1;
              *pnum_clobbers = 1;
              return 518; /* subdi3_carry_ccc */

            default:
              return -1;
            }

        case CONST_INT:
        case CONST_WIDE_INT:
          operands[2] = x14;
          switch (GET_MODE (x4))
            {
            case E_DImode:
              if (pattern1578 (x7, 
E_DImode, 
E_SImode) != 0
                  || !
#line 1235 "../../gcc/config/i386/i386.md"
(!TARGET_64BIT))
                return -1;
              *pnum_clobbers = 1;
              return 519; /* *subsi3_carry_ccc_1 */

            case E_TImode:
              if (pattern1578 (x7, 
E_TImode, 
E_DImode) != 0
                  || !
#line 1236 "../../gcc/config/i386/i386.md"
(TARGET_64BIT))
                return -1;
              *pnum_clobbers = 1;
              return 520; /* *subdi3_carry_ccc_1 */

            default:
              return -1;
            }

        default:
          return -1;
        }

    case PLUS:
      if (pnum_clobbers == NULL
          || GET_MODE (x2) != E_CCCmode
          || GET_MODE (x3) != E_CCCmode)
        return -1;
      x5 = XEXP (x4, 0);
      operands[1] = x5;
      x12 = XEXP (x4, 1);
      operands[2] = x12;
      x7 = XEXP (x3, 1);
      if (!rtx_equal_p (x7, operands[1]))
        return -1;
      switch (pattern46 (x4))
        {
        case 0:
          if (!
#line 9931 "../../gcc/config/i386/i386.md"
(!(MEM_P (operands[1]) && MEM_P (operands[2]))))
            return -1;
          *pnum_clobbers = 1;
          return 534; /* *addqi3_cconly_overflow_1 */

        case 1:
          if (!
#line 9931 "../../gcc/config/i386/i386.md"
(!(MEM_P (operands[1]) && MEM_P (operands[2]))))
            return -1;
          *pnum_clobbers = 1;
          return 535; /* *addhi3_cconly_overflow_1 */

        case 2:
          if (!
#line 9931 "../../gcc/config/i386/i386.md"
(!(MEM_P (operands[1]) && MEM_P (operands[2]))))
            return -1;
          *pnum_clobbers = 1;
          return 536; /* *addsi3_cconly_overflow_1 */

        case 3:
          if (!(
#line 9931 "../../gcc/config/i386/i386.md"
(!(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 1161 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return -1;
          *pnum_clobbers = 1;
          return 537; /* *adddi3_cconly_overflow_1 */

        default:
          return -1;
        }

    case AND:
      x7 = XEXP (x3, 1);
      if (x7 != const_int_rtx[MAX_SAVED_CONST_INT + 0]
          || GET_MODE (x2) != E_CCZmode
          || GET_MODE (x3) != E_CCZmode)
        return -1;
      x5 = XEXP (x4, 0);
      switch (GET_CODE (x5))
        {
        case REG:
        case SUBREG:
          operands[0] = x5;
          if (!register_operand (operands[0], E_TImode)
              || GET_MODE (x4) != E_TImode)
            return -1;
          x12 = XEXP (x4, 1);
          operands[1] = x12;
          if (!general_operand (operands[1], E_TImode)
              || !
#line 12190 "../../gcc/config/i386/i386.md"
(TARGET_64BIT
   && ix86_pre_reload_split ()))
            return -1;
          return 693; /* *testti_doubleword */

        case NOT:
          switch (pattern845 (x4))
            {
            case 0:
              if (!
#line 12320 "../../gcc/config/i386/i386.md"
(ix86_pre_reload_split ()
   && (!TARGET_BMI || !REG_P (operands[1]))))
                return -1;
              return 697; /* *testqi_not */

            case 1:
              if (!
#line 12320 "../../gcc/config/i386/i386.md"
(ix86_pre_reload_split ()
   && (!TARGET_BMI || !REG_P (operands[1]))))
                return -1;
              return 698; /* *testhi_not */

            case 2:
              if (!
#line 12320 "../../gcc/config/i386/i386.md"
(ix86_pre_reload_split ()
   && (!TARGET_BMI || !REG_P (operands[1]))))
                return -1;
              return 699; /* *testsi_not */

            case 3:
              if (register_operand (operands[0], E_DImode)
                  && x86_64_szext_nonmemory_operand (operands[1], E_DImode)
                  && (
#line 12320 "../../gcc/config/i386/i386.md"
(ix86_pre_reload_split ()
   && (!TARGET_BMI || !REG_P (operands[1]))) && 
#line 1161 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return 700; /* *testdi_not */
              if (!nonimmediate_operand (operands[0], E_DImode)
                  || !nonimmediate_operand (operands[1], E_DImode)
                  || !(
#line 12338 "../../gcc/config/i386/i386.md"
(ix86_pre_reload_split ()) && 
#line 1195 "../../gcc/config/i386/i386.md"
(!TARGET_64BIT)))
                return -1;
              return 701; /* *testdi_not_doubleword */

            case 4:
              if (!(
#line 12338 "../../gcc/config/i386/i386.md"
(ix86_pre_reload_split ()) && 
#line 1196 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return -1;
              return 702; /* *testti_not_doubleword */

            default:
              return -1;
            }

        case PLUS:
          if (pnum_clobbers == NULL)
            return -1;
          x13 = XEXP (x5, 1);
          if (x13 != const_int_rtx[MAX_SAVED_CONST_INT + -1])
            return -1;
          switch (pattern754 (x4))
            {
            case 0:
              if (!
#line 21858 "../../gcc/config/i386/i386.md"
(TARGET_BMI))
                return -1;
              *pnum_clobbers = 1;
              return 1582; /* *bmi_blsr_si_ccz */

            case 1:
              if (!(
#line 21858 "../../gcc/config/i386/i386.md"
(TARGET_BMI) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return -1;
              *pnum_clobbers = 1;
              return 1583; /* *bmi_blsr_di_ccz */

            default:
              return -1;
            }

        default:
          return -1;
        }

    case UNSPEC:
      if (GET_MODE (x2) != E_CCZmode
          || GET_MODE (x3) != E_CCZmode)
        return -1;
      switch (XVECLEN (x4, 0))
        {
        case 2:
          if (pnum_clobbers == NULL
              || XINT (x4, 1) != 98)
            return -1;
          x7 = XEXP (x3, 1);
          if (x7 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
            return -1;
          x16 = XVECEXP (x4, 0, 0);
          operands[1] = x16;
          x17 = XVECEXP (x4, 0, 1);
          operands[2] = x17;
          switch (GET_MODE (x4))
            {
            case E_SImode:
              if (!nonimmediate_operand (operands[1], E_SImode)
                  || !register_operand (operands[2], E_SImode)
                  || !
#line 21751 "../../gcc/config/i386/i386.md"
(TARGET_BMI))
                return -1;
              *pnum_clobbers = 1;
              return 1568; /* *bmi_bextr_si_ccz */

            case E_DImode:
              if (!nonimmediate_operand (operands[1], E_DImode)
                  || !register_operand (operands[2], E_DImode)
                  || !(
#line 21751 "../../gcc/config/i386/i386.md"
(TARGET_BMI) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return -1;
              *pnum_clobbers = 1;
              return 1569; /* *bmi_bextr_di_ccz */

            default:
              return -1;
            }

        case 1:
          if (XINT (x4, 1) != 49
              || GET_MODE (x4) != E_SImode)
            return -1;
          x16 = XVECEXP (x4, 0, 0);
          if (GET_CODE (x16) != VEC_MERGE)
            return -1;
          x7 = XEXP (x3, 1);
          operands[2] = x7;
          if (!const_int_operand (operands[2], E_VOIDmode))
            return -1;
          switch (pattern1262 (x16))
            {
            case 0:
              if (!(
#line 22416 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL && UINTVAL (operands[2]) <= 0xffffffff) && 
#line 630 "../../gcc/config/i386/sse.md"
(TARGET_AVX2)))
                return -1;
              return 8572; /* *pmovsk_mask_cmp_v32qi_avx512 */

            case 1:
              if (!
#line 22416 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL && UINTVAL (operands[2]) <= 0xffff))
                return -1;
              return 8573; /* *pmovsk_mask_cmp_v16qi_avx512 */

            case 2:
              if (!(
#line 22439 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL && (INTVAL (operands[2]) == (int) (0xffffffff))) && 
#line 630 "../../gcc/config/i386/sse.md"
(TARGET_AVX2)))
                return -1;
              return 8574; /* *pmovsk_ptest_v32qi_avx512 */

            case 3:
              if (!
#line 22439 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL && (INTVAL (operands[2]) == (int) (0xffff))))
                return -1;
              return 8575; /* *pmovsk_ptest_v16qi_avx512 */

            default:
              return -1;
            }

        default:
          return -1;
        }

    case IF_THEN_ELSE:
      if (pnum_clobbers == NULL)
        return -1;
      x5 = XEXP (x4, 0);
      if (GET_CODE (x5) != NE
          || GET_MODE (x5) != E_QImode)
        return -1;
      x13 = XEXP (x5, 1);
      if (x13 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
        return -1;
      x12 = XEXP (x4, 1);
      if (GET_CODE (x12) != ZERO_EXTRACT)
        return -1;
      x18 = XEXP (x12, 1);
      if (GET_CODE (x18) != UMIN
          || GET_MODE (x18) != E_QImode)
        return -1;
      x19 = XEXP (x12, 2);
      if (x19 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
        return -1;
      x20 = XEXP (x4, 2);
      if (x20 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
        return -1;
      x7 = XEXP (x3, 1);
      if (x7 != const_int_rtx[MAX_SAVED_CONST_INT + 0]
          || GET_MODE (x2) != E_CCZmode
          || GET_MODE (x3) != E_CCZmode)
        return -1;
      x6 = XEXP (x5, 0);
      operands[2] = x6;
      if (!register_operand (operands[2], E_QImode))
        return -1;
      x21 = XEXP (x12, 0);
      operands[1] = x21;
      x22 = XEXP (x18, 1);
      operands[3] = x22;
      if (!const_int_operand (operands[3], E_QImode))
        return -1;
      x23 = XEXP (x18, 0);
      if (!rtx_equal_p (x23, operands[2]))
        return -1;
      switch (GET_MODE (x4))
        {
        case E_SImode:
          if (GET_MODE (x12) != E_SImode
              || !nonimmediate_operand (operands[1], E_SImode)
              || !
#line 21914 "../../gcc/config/i386/i386.md"
(TARGET_BMI2 && INTVAL (operands[3]) == 4 * BITS_PER_UNIT))
            return -1;
          *pnum_clobbers = 1;
          return 1586; /* *bmi2_bzhi_si3_1_ccz */

        case E_DImode:
          if (GET_MODE (x12) != E_DImode
              || !nonimmediate_operand (operands[1], E_DImode)
              || !(
#line 21914 "../../gcc/config/i386/i386.md"
(TARGET_BMI2 && INTVAL (operands[3]) == 8 * BITS_PER_UNIT) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return -1;
          *pnum_clobbers = 1;
          return 1587; /* *bmi2_bzhi_di3_1_ccz */

        default:
          return -1;
        }

    case VEC_SELECT:
      x12 = XEXP (x4, 1);
      if (GET_CODE (x12) != PARALLEL
          || XVECLEN (x12, 0) != 1)
        return -1;
      x24 = XVECEXP (x12, 0, 0);
      if (x24 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
        return -1;
      x7 = XEXP (x3, 1);
      if (pattern245 (x7) != 0
          || GET_MODE (x2) != E_CCFPmode
          || GET_MODE (x3) != E_CCFPmode)
        return -1;
      x5 = XEXP (x4, 0);
      operands[0] = x5;
      x8 = XEXP (x7, 0);
      operands[1] = x8;
      switch (GET_MODE (x4))
        {
        case E_HFmode:
          if (!register_operand (operands[0], E_V8HFmode)
              || GET_MODE (x7) != E_HFmode
              || !nonimmediate_operand (operands[1], E_V8HFmode)
              || !(
#line 4869 "../../gcc/config/i386/sse.md"
(SSE_FLOAT_MODE_P (HFmode) || HFmode == E_HFmode) && 
#line 1355 "../../gcc/config/i386/i386.md"
(TARGET_AVX512FP16)))
            return -1;
          return 3676; /* avx512fp16_comi */

        case E_SFmode:
          if (!register_operand (operands[0], E_V4SFmode)
              || GET_MODE (x7) != E_SFmode
              || !nonimmediate_operand (operands[1], E_V4SFmode)
              || !
#line 4869 "../../gcc/config/i386/sse.md"
(SSE_FLOAT_MODE_P (SFmode) || SFmode == E_HFmode))
            return -1;
          return 3680; /* sse_comi */

        case E_DFmode:
          if (!register_operand (operands[0], E_V2DFmode)
              || GET_MODE (x7) != E_DFmode
              || !nonimmediate_operand (operands[1], E_V2DFmode)
              || !
#line 4869 "../../gcc/config/i386/sse.md"
(SSE_FLOAT_MODE_P (DFmode) || DFmode == E_HFmode))
            return -1;
          return 3684; /* sse2_comi */

        default:
          return -1;
        }

    default:
      return -1;
    }
}

 int
recog_24 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12, x13, x14, x15, x16, x17;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  switch (GET_CODE (x3))
    {
    case AND:
      x4 = XEXP (x1, 0);
      operands[0] = x4;
      switch (pattern69 (x2))
        {
        case 0:
          if (!
#line 3704 "../../gcc/config/i386/i386.md"
(TARGET_64BIT
   && CONST_WIDE_INT_P (operands[3])
   && CONST_WIDE_INT_NUNITS (operands[3]) == 2
   && CONST_WIDE_INT_ELT (operands[3], 0) == -1
   && CONST_WIDE_INT_ELT (operands[3], 1) == 0))
            return -1;
          return 144; /* *insvti_highpart_1 */

        case 1:
          if (!
#line 3726 "../../gcc/config/i386/i386.md"
(TARGET_64BIT
   && CONST_WIDE_INT_P (operands[3])
   && CONST_WIDE_INT_NUNITS (operands[3]) == 2
   && CONST_WIDE_INT_ELT (operands[3], 0) == 0
   && CONST_WIDE_INT_ELT (operands[3], 1) == -1))
            return -1;
          return 147; /* *insvti_lowpart_1 */

        case 2:
          if (!
#line 3748 "../../gcc/config/i386/i386.md"
(!TARGET_64BIT
   && CONST_INT_P (operands[3])
   && UINTVAL (operands[3]) == 0xffffffff00000000ll))
            return -1;
          return 150; /* *insvdi_lowpart_1 */

        default:
          return -1;
        }

    case ASHIFT:
      x4 = XEXP (x1, 0);
      operands[0] = x4;
      x5 = XEXP (x3, 0);
      switch (GET_CODE (x5))
        {
        case REG:
        case SUBREG:
          operands[1] = x5;
          x6 = XEXP (x3, 1);
          operands[2] = x6;
          switch (pattern607 (x2))
            {
            case 0:
              if (!
#line 8015 "../../gcc/config/i386/i386.md"
((!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun))
   && ((unsigned HOST_WIDE_INT) INTVAL (operands[3])
       < (HOST_WIDE_INT_1U << INTVAL (operands[2])))))
                return -1;
              return 372; /* *leaqi_general_4 */

            case 1:
              if (!
#line 8015 "../../gcc/config/i386/i386.md"
((!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun))
   && ((unsigned HOST_WIDE_INT) INTVAL (operands[3])
       < (HOST_WIDE_INT_1U << INTVAL (operands[2])))))
                return -1;
              return 374; /* *leahi_general_4 */

            case 2:
              if (!(
#line 14137 "../../gcc/config/i386/i386.md"
(INTVAL (operands[2]) == 16 * BITS_PER_UNIT / 2
   && (TImode == DImode
       ? CONST_INT_P (operands[3])
	 && (UINTVAL (operands[3]) & ~GET_MODE_MASK (SImode)) == 0
       : CONST_INT_P (operands[3])
       ? INTVAL (operands[3]) >= 0
       : CONST_WIDE_INT_NUNITS (operands[3]) == 2
	 && CONST_WIDE_INT_ELT (operands[3], 1) == 0)
   && !(CONST_INT_P (operands[3])
	? ix86_endbr_immediate_operand (operands[3], VOIDmode)
	: ix86_endbr_immediate_operand (GEN_INT (CONST_WIDE_INT_ELT (operands[3],
								     0)),
					VOIDmode))) && 
#line 1196 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return -1;
              return 932; /* *concatditi3_5 */

            case 3:
              if (!(
#line 14060 "../../gcc/config/i386/i386.md"
(INTVAL (operands[2]) == 8 * BITS_PER_UNIT) && 
#line 1236 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return -1;
              return 896; /* *concatditi3_1 */

            default:
              return -1;
            }

        case ZERO_EXTEND:
          x7 = XEXP (x5, 0);
          switch (GET_CODE (x7))
            {
            case TRUNCATE:
              if (GET_MODE (x7) != E_QImode)
                return -1;
              x8 = XEXP (x7, 0);
              if (GET_CODE (x8) != MOD
                  || GET_MODE (x8) != E_HImode)
                return -1;
              x6 = XEXP (x3, 1);
              if (x6 != const_int_rtx[MAX_SAVED_CONST_INT + 8])
                return -1;
              x9 = XEXP (x2, 1);
              if (GET_CODE (x9) != ZERO_EXTEND
                  || GET_MODE (x9) != E_HImode)
                return -1;
              x10 = XEXP (x9, 0);
              if (pattern1201 (x10, 
E_HImode, 
DIV, 
E_QImode, 
TRUNCATE) != 0
                  || pattern1003 (x2, 
E_HImode) != 0)
                return -1;
              x11 = XEXP (x8, 0);
              operands[1] = x11;
              if (!register_operand (operands[1], E_HImode))
                return -1;
              x12 = XEXP (x8, 1);
              if (GET_MODE (x12) != E_HImode)
                return -1;
              x13 = XEXP (x10, 0);
              x14 = XEXP (x13, 1);
              if (GET_MODE (x14) != E_HImode)
                return -1;
              x15 = XEXP (x13, 0);
              if (!rtx_equal_p (x15, operands[1]))
                return -1;
              switch (GET_CODE (x12))
                {
                case SIGN_EXTEND:
                  if (GET_CODE (x14) != SIGN_EXTEND)
                    return -1;
                  x16 = XEXP (x12, 0);
                  operands[2] = x16;
                  if (!nonimmediate_operand (operands[2], E_QImode))
                    return -1;
                  x17 = XEXP (x14, 0);
                  if (!rtx_equal_p (x17, operands[2]))
                    return -1;
                  if (
#line 12017 "../../gcc/config/i386/i386.md"
(TARGET_QIMODE_MATH
   && TARGET_APX_NF))
                    return 678; /* divmodhiqi3_nf */
                  if (pnum_clobbers == NULL
                      || !
#line 12017 "../../gcc/config/i386/i386.md"
(TARGET_QIMODE_MATH
   && true))
                    return -1;
                  *pnum_clobbers = 1;
                  return 679; /* divmodhiqi3 */

                case ZERO_EXTEND:
                  if (GET_CODE (x14) != ZERO_EXTEND)
                    return -1;
                  x16 = XEXP (x12, 0);
                  operands[2] = x16;
                  if (!nonimmediate_operand (operands[2], E_QImode))
                    return -1;
                  x17 = XEXP (x14, 0);
                  if (!rtx_equal_p (x17, operands[2]))
                    return -1;
                  if (
#line 12017 "../../gcc/config/i386/i386.md"
(TARGET_QIMODE_MATH
   && TARGET_APX_NF))
                    return 680; /* udivmodhiqi3_nf */
                  if (pnum_clobbers == NULL
                      || !
#line 12017 "../../gcc/config/i386/i386.md"
(TARGET_QIMODE_MATH
   && true))
                    return -1;
                  *pnum_clobbers = 1;
                  return 681; /* udivmodhiqi3 */

                default:
                  return -1;
                }

            case REG:
            case SUBREG:
            case MEM:
              operands[1] = x7;
              if (!nonimmediate_operand (operands[1], E_DImode)
                  || !nonimmediate_operand (operands[0], E_TImode)
                  || GET_MODE (x2) != E_TImode
                  || GET_MODE (x3) != E_TImode
                  || GET_MODE (x5) != E_TImode)
                return -1;
              x6 = XEXP (x3, 1);
              operands[2] = x6;
              if (!const_int_operand (operands[2], E_QImode))
                return -1;
              x9 = XEXP (x2, 1);
              switch (pattern255 (x9, 
E_DImode, 
E_TImode))
                {
                case 0:
                  if (!(
#line 14096 "../../gcc/config/i386/i386.md"
(INTVAL (operands[2]) == 8 * BITS_PER_UNIT) && 
#line 1236 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                    return -1;
                  return 914; /* *concatditi3_3 */

                case 1:
                  if (!(
#line 14169 "../../gcc/config/i386/i386.md"
(INTVAL (operands[2]) == 8 * BITS_PER_UNIT
   && (TImode == DImode
       ? CONST_INT_P (operands[3])
	 && (UINTVAL (operands[3]) & ~GET_MODE_MASK (SImode)) == 0
       : CONST_INT_P (operands[3])
       ? INTVAL (operands[3]) >= 0
       : CONST_WIDE_INT_NUNITS (operands[3]) == 2
	 && CONST_WIDE_INT_ELT (operands[3], 1) == 0)
   && !(CONST_INT_P (operands[3])
	? ix86_endbr_immediate_operand (operands[3], VOIDmode)
	: ix86_endbr_immediate_operand (GEN_INT (CONST_WIDE_INT_ELT (operands[3],
								     0)),
					VOIDmode))) && 
#line 1236 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                    return -1;
                  return 944; /* *concatditi3_6 */

                default:
                  return -1;
                }

            default:
              return -1;
            }

        case SIGN_EXTEND:
          switch (pattern256 (x2, 
E_DImode, 
E_TImode))
            {
            case 0:
              if (!(
#line 14096 "../../gcc/config/i386/i386.md"
(INTVAL (operands[2]) == 8 * BITS_PER_UNIT) && 
#line 1236 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return -1;
              return 911; /* *concatditi3_3 */

            case 1:
              if (!(
#line 14169 "../../gcc/config/i386/i386.md"
(INTVAL (operands[2]) == 8 * BITS_PER_UNIT
   && (TImode == DImode
       ? CONST_INT_P (operands[3])
	 && (UINTVAL (operands[3]) & ~GET_MODE_MASK (SImode)) == 0
       : CONST_INT_P (operands[3])
       ? INTVAL (operands[3]) >= 0
       : CONST_WIDE_INT_NUNITS (operands[3]) == 2
	 && CONST_WIDE_INT_ELT (operands[3], 1) == 0)
   && !(CONST_INT_P (operands[3])
	? ix86_endbr_immediate_operand (operands[3], VOIDmode)
	: ix86_endbr_immediate_operand (GEN_INT (CONST_WIDE_INT_ELT (operands[3],
								     0)),
					VOIDmode))) && 
#line 1236 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return -1;
              return 941; /* *concatditi3_6 */

            default:
              return -1;
            }

        default:
          return -1;
        }

    case REG:
    case SUBREG:
    case MEM:
      operands[1] = x3;
      switch (pattern75 (x1, pnum_clobbers))
        {
        case 0:
          if (
#line 12741 "../../gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)))
            {
              *pnum_clobbers = 1;
              return 726; /* *iorqi_1_slp */
            }
          break;

        case 1:
          if (
#line 12741 "../../gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)))
            {
              *pnum_clobbers = 1;
              return 729; /* *iorhi_1_slp */
            }
          break;

        case 2:
          if ((
#line 13527 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (IOR, TImode, operands, TARGET_APX_NDD)) && 
#line 1236 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
            {
              *pnum_clobbers = 1;
              return 821; /* *iorti3_doubleword */
            }
          break;

        case 3:
          if (
#line 13585 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (IOR, HImode, operands, TARGET_APX_NDD)
   && TARGET_APX_NF))
            return 823; /* *iorhi_1_nf */
          if (pnum_clobbers != NULL
              && 
#line 13585 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (IOR, HImode, operands, TARGET_APX_NDD)
   && true))
            {
              *pnum_clobbers = 1;
              return 824; /* *iorhi_1 */
            }
          break;

        case 4:
          if (
#line 1357 "../../gcc/config/i386/mmx.md"
(TARGET_MMX_WITH_SSE))
            return 2072; /* iorv2sf3 */
          break;

        case 5:
          if (
#line 2582 "../../gcc/config/i386/mmx.md"
(TARGET_SSE))
            return 2106; /* iorv2bf3 */
          break;

        case 6:
          if ((
#line 2582 "../../gcc/config/i386/mmx.md"
(TARGET_SSE) && 
#line 2224 "../../gcc/config/i386/mmx.md"
(TARGET_MMX_WITH_SSE)))
            return 2109; /* iorv4bf3 */
          break;

        case 7:
          if (
#line 2582 "../../gcc/config/i386/mmx.md"
(TARGET_SSE))
            return 2112; /* iorv2hf3 */
          break;

        case 8:
          if ((
#line 2582 "../../gcc/config/i386/mmx.md"
(TARGET_SSE) && 
#line 2225 "../../gcc/config/i386/mmx.md"
(TARGET_MMX_WITH_SSE)))
            return 2115; /* iorv4hf3 */
          break;

        case 9:
          if (
#line 4687 "../../gcc/config/i386/mmx.md"
((TARGET_MMX || TARGET_MMX_WITH_SSE)
   && ix86_binary_operator_ok (IOR, V8QImode, operands)))
            return 2269; /* *mmx_iorv8qi3 */
          break;

        case 10:
          if (
#line 4687 "../../gcc/config/i386/mmx.md"
((TARGET_MMX || TARGET_MMX_WITH_SSE)
   && ix86_binary_operator_ok (IOR, V4HImode, operands)))
            return 2272; /* *mmx_iorv4hi3 */
          break;

        case 11:
          if (
#line 4687 "../../gcc/config/i386/mmx.md"
((TARGET_MMX || TARGET_MMX_WITH_SSE)
   && ix86_binary_operator_ok (IOR, V2SImode, operands)))
            return 2275; /* *mmx_iorv2si3 */
          break;

        case 12:
          if (
#line 4713 "../../gcc/config/i386/mmx.md"
(ix86_binary_operator_ok (IOR, V4QImode, operands)))
            {
              *pnum_clobbers = 1;
              return 2278; /* *iorv4qi3 */
            }
          break;

        case 13:
          if (
#line 4713 "../../gcc/config/i386/mmx.md"
(ix86_binary_operator_ok (IOR, V2QImode, operands)))
            {
              *pnum_clobbers = 1;
              return 2281; /* *iorv2qi3 */
            }
          break;

        case 14:
          if (
#line 4713 "../../gcc/config/i386/mmx.md"
(ix86_binary_operator_ok (IOR, V2HImode, operands)))
            {
              *pnum_clobbers = 1;
              return 2284; /* *iorv2hi3 */
            }
          break;

        case 15:
          if (
#line 5649 "../../gcc/config/i386/sse.md"
(TARGET_SSE))
            return 3779; /* iorbf3 */
          break;

        case 16:
          if (
#line 5649 "../../gcc/config/i386/sse.md"
(TARGET_SSE))
            return 3782; /* iorhf3 */
          break;

        case 17:
          if (
#line 5649 "../../gcc/config/i386/sse.md"
(TARGET_SSE))
            return 3785; /* iorsf3 */
          break;

        case 18:
          if ((
#line 5649 "../../gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 1352 "../../gcc/config/i386/i386.md"
(TARGET_SSE2)))
            return 3788; /* iordf3 */
          break;

        case 19:
          if (
#line 5723 "../../gcc/config/i386/sse.md"
(TARGET_SSE && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
            return 3791; /* *iortf3 */
          break;

        default:
          break;
        }
      if (pnum_clobbers != NULL
          && pattern76 (x2) == 0)
        {
          x5 = XEXP (x3, 0);
          x7 = XEXP (x5, 0);
          operands[2] = x7;
          switch (pattern1265 (x1))
            {
            case 0:
              if (
#line 12768 "../../gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)))
                {
                  *pnum_clobbers = 1;
                  return 732; /* *iorqi_exthi_1_slp */
                }
              break;

            case 1:
              if (
#line 12768 "../../gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)))
                {
                  *pnum_clobbers = 1;
                  return 735; /* *iorqi_extsi_1_slp */
                }
              break;

            case 2:
              if ((
#line 12768 "../../gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)) && 
#line 1164 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                {
                  *pnum_clobbers = 1;
                  return 738; /* *iorqi_extdi_1_slp */
                }
              break;

            case 3:
              *pnum_clobbers = 1;
              return 756; /* *iorqi_exthi_0 */

            case 4:
              *pnum_clobbers = 1;
              return 759; /* *iorqi_extsi_0 */

            case 5:
              if (
#line 1164 "../../gcc/config/i386/i386.md"
(TARGET_64BIT))
                {
                  *pnum_clobbers = 1;
                  return 762; /* *iorqi_extdi_0 */
                }
              break;

            default:
              break;
            }
          x9 = XEXP (x2, 1);
          if (GET_CODE (x9) == SUBREG)
            {
              switch (pattern1268 (x1))
                {
                case 0:
                  if (
#line 12801 "../../gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)))
                    {
                      *pnum_clobbers = 1;
                      return 741; /* *iorqi_exthi_2_slp */
                    }
                  break;

                case 1:
                  if (
#line 12801 "../../gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)))
                    {
                      *pnum_clobbers = 1;
                      return 744; /* *iorqi_extsi_2_slp */
                    }
                  break;

                case 2:
                  if ((
#line 12801 "../../gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)) && 
#line 1164 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                    {
                      *pnum_clobbers = 1;
                      return 747; /* *iorqi_extdi_2_slp */
                    }
                  break;

                case 3:
                  *pnum_clobbers = 1;
                  return 765; /* *iorqi_ext2hi_0 */

                case 4:
                  *pnum_clobbers = 1;
                  return 768; /* *iorqi_ext2si_0 */

                case 5:
                  if (
#line 1164 "../../gcc/config/i386/i386.md"
(TARGET_64BIT))
                    {
                      *pnum_clobbers = 1;
                      return 771; /* *iorqi_ext2di_0 */
                    }
                  break;

                default:
                  break;
                }
            }
        }
      operands[1] = x3;
      if (pattern77 (x1) != 0)
        return -1;
      if (
#line 13775 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (IOR, QImode, operands, TARGET_APX_NDD)
   && TARGET_APX_NF))
        return 867; /* *iorqi_1_nf */
      if (pnum_clobbers == NULL
          || !
#line 13775 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (IOR, QImode, operands, TARGET_APX_NDD)
   && true))
        return -1;
      *pnum_clobbers = 1;
      return 868; /* *iorqi_1 */

    case ZERO_EXTEND:
      switch (pattern38 (x1))
        {
        case 0:
          if (!(
#line 14077 "../../gcc/config/i386/i386.md"
(INTVAL (operands[3]) == 8 * BITS_PER_UNIT) && 
#line 1236 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return -1;
          return 902; /* *concatditi3_2 */

        case 1:
          if (!(
#line 14121 "../../gcc/config/i386/i386.md"
(INTVAL (operands[3]) == 8 * BITS_PER_UNIT) && 
#line 1236 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return -1;
          return 923; /* *concatditi3_4 */

        case 2:
          if (!(
#line 14121 "../../gcc/config/i386/i386.md"
(INTVAL (operands[3]) == 8 * BITS_PER_UNIT) && 
#line 1236 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return -1;
          return 926; /* *concatditi3_4 */

        case 3:
          if (!(
#line 14198 "../../gcc/config/i386/i386.md"
(TImode == DImode
   ? CONST_INT_P (operands[2])
     && (UINTVAL (operands[2]) & GET_MODE_MASK (SImode)) == 0
     && !ix86_endbr_immediate_operand (operands[2], VOIDmode)
   : CONST_WIDE_INT_P (operands[2])
     && CONST_WIDE_INT_NUNITS (operands[2]) == 2
     && CONST_WIDE_INT_ELT (operands[2], 0) == 0
     && !ix86_endbr_immediate_operand (GEN_INT (CONST_WIDE_INT_ELT (operands[2],
								    1)),
				       VOIDmode)) && 
#line 1236 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return -1;
          return 950; /* *concatditi3_7 */

        default:
          return -1;
        }

    default:
      return -1;
    }
}

 int
recog_44 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4;
  int res ATTRIBUTE_UNUSED;
  switch (pattern4 (x1, pnum_clobbers))
    {
    case 0:
      if (!
#line 18182 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATERT, QImode, operands)
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (QImode)-1))
      == GET_MODE_BITSIZE (QImode)-1
   && ix86_pre_reload_split ()))
        return -1;
      *pnum_clobbers = 1;
      return 1293; /* *rotrqi3_mask_1 */

    case 1:
      if (!
#line 18182 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATERT, HImode, operands)
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (HImode)-1))
      == GET_MODE_BITSIZE (HImode)-1
   && ix86_pre_reload_split ()))
        return -1;
      *pnum_clobbers = 1;
      return 1295; /* *rotrhi3_mask_1 */

    case 2:
      if (!
#line 18253 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATERT, QImode, operands)
   && (INTVAL (operands[3]) & (1 * BITS_PER_UNIT - 1)) == 0
   && ix86_pre_reload_split ()))
        return -1;
      *pnum_clobbers = 1;
      return 1309; /* *rotrqi3_add_1 */

    case 3:
      if (!
#line 18253 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATERT, HImode, operands)
   && (INTVAL (operands[3]) & (2 * BITS_PER_UNIT - 1)) == 0
   && ix86_pre_reload_split ()))
        return -1;
      *pnum_clobbers = 1;
      return 1311; /* *rotrhi3_add_1 */

    case 4:
      if (!
#line 18322 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATERT, QImode, operands)
   && (INTVAL (operands[3]) & (1 * BITS_PER_UNIT - 1)) == 0
   && ix86_pre_reload_split ()))
        return -1;
      *pnum_clobbers = 1;
      return 1325; /* *rotrqi3_sub_1 */

    case 5:
      if (!
#line 18322 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATERT, HImode, operands)
   && (INTVAL (operands[3]) & (2 * BITS_PER_UNIT - 1)) == 0
   && ix86_pre_reload_split ()))
        return -1;
      *pnum_clobbers = 1;
      return 1327; /* *rotrhi3_sub_1 */

    case 6:
      x2 = XEXP (x1, 0);
      operands[0] = x2;
      x3 = XEXP (x1, 1);
      switch (pattern265 (x3, pnum_clobbers))
        {
        case 0:
          if (
#line 18142 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATERT, QImode, operands)
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (QImode)-1))
      == GET_MODE_BITSIZE (QImode)-1
   && ix86_pre_reload_split ()))
            {
              *pnum_clobbers = 1;
              return 1285; /* *rotrqi3_mask */
            }
          break;

        case 1:
          if (
#line 18142 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATERT, HImode, operands)
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (HImode)-1))
      == GET_MODE_BITSIZE (HImode)-1
   && ix86_pre_reload_split ()))
            {
              *pnum_clobbers = 1;
              return 1287; /* *rotrhi3_mask */
            }
          break;

        case 2:
          if (
#line 18217 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATERT, QImode, operands)
   && (INTVAL (operands[3]) & (1 * BITS_PER_UNIT - 1)) == 0
   && ix86_pre_reload_split ()))
            {
              *pnum_clobbers = 1;
              return 1301; /* *rotrqi3_add */
            }
          break;

        case 3:
          if (
#line 18217 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATERT, HImode, operands)
   && (INTVAL (operands[3]) & (2 * BITS_PER_UNIT - 1)) == 0
   && ix86_pre_reload_split ()))
            {
              *pnum_clobbers = 1;
              return 1303; /* *rotrhi3_add */
            }
          break;

        case 4:
          if (
#line 18286 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATERT, QImode, operands)
   && (INTVAL (operands[3]) & (1 * BITS_PER_UNIT - 1)) == 0
   && ix86_pre_reload_split ()))
            {
              *pnum_clobbers = 1;
              return 1317; /* *rotrqi3_sub */
            }
          break;

        case 5:
          if (
#line 18286 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATERT, HImode, operands)
   && (INTVAL (operands[3]) & (2 * BITS_PER_UNIT - 1)) == 0
   && ix86_pre_reload_split ()))
            {
              *pnum_clobbers = 1;
              return 1319; /* *rotrhi3_sub */
            }
          break;

        case 6:
          if (pnum_clobbers != NULL
              && pattern616 (x3) == 0
              && 
#line 1236 "../../gcc/config/i386/i386.md"
(TARGET_64BIT))
            {
              *pnum_clobbers = 2;
              return 1335; /* ix86_rotrti3_doubleword */
            }
          x4 = XEXP (x3, 1);
          if (XWINT (x4, 0) == 64L
              && register_operand (operands[0], E_TImode)
              && GET_MODE (x3) == E_TImode
              && register_operand (operands[1], E_TImode)
              && 
#line 18445 "../../gcc/config/i386/i386.md"
(TARGET_64BIT))
            return 1339; /* rotr64ti2_doubleword */
          break;

        default:
          break;
        }
      x4 = XEXP (x3, 1);
      operands[2] = x4;
      switch (pattern266 (x1, pnum_clobbers))
        {
        case 0:
          if (
#line 18659 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATERT, QImode, operands, TARGET_APX_NDD)
   && TARGET_APX_NF))
            return 1375; /* *rotrqi3_1_nf */
          if (pnum_clobbers == NULL
              || !
#line 18659 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATERT, QImode, operands, TARGET_APX_NDD)
   && true))
            return -1;
          *pnum_clobbers = 1;
          return 1376; /* *rotrqi3_1 */

        case 1:
          if (
#line 18659 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATERT, HImode, operands, TARGET_APX_NDD)
   && TARGET_APX_NF))
            return 1379; /* *rotrhi3_1_nf */
          if (pnum_clobbers == NULL
              || !
#line 18659 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATERT, HImode, operands, TARGET_APX_NDD)
   && true))
            return -1;
          *pnum_clobbers = 1;
          return 1380; /* *rotrhi3_1 */

        case 2:
          if (!
#line 18690 "../../gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)))
            return -1;
          *pnum_clobbers = 1;
          return 1382; /* *rotrqi3_1_slp */

        case 3:
          if (!
#line 18690 "../../gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)))
            return -1;
          *pnum_clobbers = 1;
          return 1384; /* *rotrhi3_1_slp */

        default:
          return -1;
        }

    default:
      return -1;
    }
}

 int
recog_55 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  switch (GET_CODE (x3))
    {
    case CONST_INT:
    case CONST_WIDE_INT:
    case CONST_POLY_INT:
    case CONST_FIXED:
    case CONST_DOUBLE:
    case CONST_VECTOR:
    case CONST:
    case REG:
    case SUBREG:
    case MEM:
    case LABEL_REF:
    case SYMBOL_REF:
    case HIGH:
      operands[2] = x3;
      res = recog_54 (x1, insn, pnum_clobbers);
      if (res >= 0)
        return res;
      if (pnum_clobbers == NULL
          || GET_CODE (x3) != SUBREG
          || maybe_ne (SUBREG_BYTE (x3), 0)
          || GET_MODE (x3) != E_QImode)
        return -1;
      x4 = XEXP (x3, 0);
      switch (GET_CODE (x4))
        {
        case SIGN_EXTRACT:
        case ZERO_EXTRACT:
          operands[3] = x4;
          x5 = XEXP (x4, 1);
          if (x5 != const_int_rtx[MAX_SAVED_CONST_INT + 8])
            return -1;
          x6 = XEXP (x4, 2);
          if (x6 != const_int_rtx[MAX_SAVED_CONST_INT + 8]
              || GET_MODE (x2) != E_QImode
              || !nonimmediate_operand (operands[1], E_QImode))
            return -1;
          x7 = XEXP (x4, 0);
          operands[2] = x7;
          if (!int248_register_operand (operands[2], E_VOIDmode))
            return -1;
          x8 = XEXP (x1, 0);
          switch (GET_CODE (x8))
            {
            case STRICT_LOW_PART:
              x9 = XEXP (x8, 0);
              operands[0] = x9;
              if (!register_operand (operands[0], E_QImode))
                return -1;
              switch (pattern1691 ())
                {
                case 0:
                  if (!
#line 8215 "../../gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)))
                    return -1;
                  *pnum_clobbers = 1;
                  return 405; /* *subqi_exthi_1_slp */

                case 1:
                  if (!
#line 8215 "../../gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)))
                    return -1;
                  *pnum_clobbers = 1;
                  return 406; /* *subqi_extsi_1_slp */

                case 2:
                  if (!(
#line 8215 "../../gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)) && 
#line 1164 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                    return -1;
                  *pnum_clobbers = 1;
                  return 407; /* *subqi_extdi_1_slp */

                default:
                  return -1;
                }

            case REG:
            case SUBREG:
            case MEM:
              operands[0] = x8;
              if (!nonimmediate_operand (operands[0], E_QImode))
                return -1;
              switch (pattern1691 ())
                {
                case 0:
                  *pnum_clobbers = 1;
                  return 416; /* *subqi_exthi_0 */

                case 1:
                  *pnum_clobbers = 1;
                  return 417; /* *subqi_extsi_0 */

                case 2:
                  if (!
#line 1164 "../../gcc/config/i386/i386.md"
(TARGET_64BIT))
                    return -1;
                  *pnum_clobbers = 1;
                  return 418; /* *subqi_extdi_0 */

                default:
                  return -1;
                }

            default:
              return -1;
            }

        default:
          return -1;
        }

    case ZERO_EXTEND:
      if (pnum_clobbers == NULL
          || GET_MODE (x3) != E_TImode)
        return -1;
      x8 = XEXP (x1, 0);
      operands[0] = x8;
      if (pattern758 (x2, 
E_DImode, 
E_TImode) != 0
          || !(
#line 8103 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (UNKNOWN, TImode, operands, TARGET_APX_NDD)) && 
#line 1236 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
        return -1;
      *pnum_clobbers = 1;
      return 383; /* *subti3_doubleword_zext */

    case LTU:
    case UNLT:
      switch (pattern432 (x1, pnum_clobbers))
        {
        case 0:
          if (pattern1205 (x2, 
E_QImode) != 0
              || !
#line 9349 "../../gcc/config/i386/i386.md"
(!MEM_P (operands[0]) || rtx_equal_p (operands[0], operands[1])))
            return -1;
          *pnum_clobbers = 1;
          return 491; /* *subqi3_carry_0 */

        case 1:
          if (pattern1205 (x2, 
E_HImode) != 0
              || !
#line 9349 "../../gcc/config/i386/i386.md"
(!MEM_P (operands[0]) || rtx_equal_p (operands[0], operands[1])))
            return -1;
          *pnum_clobbers = 1;
          return 492; /* *subhi3_carry_0 */

        default:
          return -1;
        }

    case GE:
    case GEU:
      switch (pattern432 (x1, pnum_clobbers))
        {
        case 0:
          if (pattern1206 (x2, 
E_QImode) != 0
              || !
#line 9363 "../../gcc/config/i386/i386.md"
(!MEM_P (operands[0]) || rtx_equal_p (operands[0], operands[1])))
            return -1;
          *pnum_clobbers = 1;
          return 495; /* *subqi3_carry_0r */

        case 1:
          if (pattern1206 (x2, 
E_HImode) != 0
              || !
#line 9363 "../../gcc/config/i386/i386.md"
(!MEM_P (operands[0]) || rtx_equal_p (operands[0], operands[1])))
            return -1;
          *pnum_clobbers = 1;
          return 496; /* *subhi3_carry_0r */

        default:
          return -1;
        }

    case EQ:
      switch (pattern434 (x1, pnum_clobbers))
        {
        case 0:
          if (!
#line 10307 "../../gcc/config/i386/i386.md"
(ix86_unary_operator_ok (MINUS, QImode, operands)
   && ix86_pre_reload_split ()))
            return -1;
          *pnum_clobbers = 1;
          return 582; /* *subqi3_eq_0 */

        case 1:
          if (!
#line 10307 "../../gcc/config/i386/i386.md"
(ix86_unary_operator_ok (MINUS, HImode, operands)
   && ix86_pre_reload_split ()))
            return -1;
          *pnum_clobbers = 1;
          return 583; /* *subhi3_eq_0 */

        default:
          return -1;
        }

    case NE:
      switch (pattern434 (x1, pnum_clobbers))
        {
        case 0:
          if (!
#line 10328 "../../gcc/config/i386/i386.md"
(ix86_unary_operator_ok (MINUS, QImode, operands)
   && ix86_pre_reload_split ()))
            return -1;
          *pnum_clobbers = 1;
          return 586; /* *subqi3_ne_0 */

        case 1:
          if (!
#line 10328 "../../gcc/config/i386/i386.md"
(ix86_unary_operator_ok (MINUS, HImode, operands)
   && ix86_pre_reload_split ()))
            return -1;
          *pnum_clobbers = 1;
          return 587; /* *subhi3_ne_0 */

        default:
          return -1;
        }

    default:
      return -1;
    }
}

 int
recog_64 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  operands[0] = x2;
  x3 = XEXP (x1, 1);
  x4 = XEXP (x3, 0);
  switch (GET_CODE (x4))
    {
    case REG:
    case SUBREG:
      operands[1] = x4;
      switch (GET_MODE (operands[0]))
        {
        case E_V2SFmode:
          if (!register_operand (operands[0], E_V2SFmode)
              || GET_MODE (x3) != E_V2SFmode
              || !register_operand (operands[1], E_SFmode)
              || !
#line 1722 "../../gcc/config/i386/mmx.md"
(TARGET_MMX || TARGET_MMX_WITH_SSE))
            return -1;
          return 2083; /* *vec_dupv2sf */

        case E_V4HFmode:
          if (!register_operand (operands[0], E_V4HFmode)
              || GET_MODE (x3) != E_V4HFmode
              || !register_operand (operands[1], E_HFmode)
              || !
#line 5674 "../../gcc/config/i386/mmx.md"
(TARGET_MMX_WITH_SSE))
            return -1;
          return 2338; /* *vec_dupv4hf */

        case E_V4BFmode:
          if (!register_operand (operands[0], E_V4BFmode)
              || GET_MODE (x3) != E_V4BFmode
              || !register_operand (operands[1], E_BFmode)
              || !
#line 5674 "../../gcc/config/i386/mmx.md"
(TARGET_MMX_WITH_SSE))
            return -1;
          return 2339; /* *vec_dupv4bf */

        case E_V4HImode:
          if (!register_operand (operands[0], E_V4HImode)
              || GET_MODE (x3) != E_V4HImode
              || !register_operand (operands[1], E_HImode)
              || !
#line 5674 "../../gcc/config/i386/mmx.md"
(TARGET_MMX_WITH_SSE))
            return -1;
          return 2340; /* *vec_dupv4hi */

        case E_V2SImode:
          if (!register_operand (operands[0], E_V2SImode)
              || GET_MODE (x3) != E_V2SImode
              || !register_operand (operands[1], E_SImode)
              || !
#line 5685 "../../gcc/config/i386/mmx.md"
(TARGET_MMX || TARGET_MMX_WITH_SSE))
            return -1;
          return 2341; /* *vec_dupv2si */

        case E_V2HFmode:
          if (!register_operand (operands[0], E_V2HFmode)
              || GET_MODE (x3) != E_V2HFmode
              || !register_operand (operands[1], E_HFmode)
              || !
#line 6266 "../../gcc/config/i386/mmx.md"
(TARGET_SSE2))
            return -1;
          return 2369; /* *vec_dupv2hf */

        case E_V2BFmode:
          if (!register_operand (operands[0], E_V2BFmode)
              || GET_MODE (x3) != E_V2BFmode
              || !register_operand (operands[1], E_BFmode)
              || !
#line 6266 "../../gcc/config/i386/mmx.md"
(TARGET_SSE2))
            return -1;
          return 2370; /* *vec_dupv2bf */

        case E_V2HImode:
          if (!register_operand (operands[0], E_V2HImode)
              || GET_MODE (x3) != E_V2HImode
              || !register_operand (operands[1], E_HImode)
              || !
#line 6266 "../../gcc/config/i386/mmx.md"
(TARGET_SSE2))
            return -1;
          return 2371; /* *vec_dupv2hi */

        default:
          return -1;
        }

    case TRUNCATE:
      if (GET_MODE (x4) != E_HImode)
        return -1;
      x5 = XEXP (x4, 0);
      operands[1] = x5;
      if (!register_operand (operands[1], E_SImode))
        return -1;
      switch (GET_MODE (operands[0]))
        {
        case E_V4HImode:
          if (!register_operand (operands[0], E_V4HImode)
              || GET_MODE (x3) != E_V4HImode
              || !
#line 5659 "../../gcc/config/i386/mmx.md"
((TARGET_MMX || TARGET_MMX_WITH_SSE)
   && (TARGET_SSE || TARGET_3DNOW_A)))
            return -1;
          return 2337; /* *vec_dupv4hi */

        case E_V2HImode:
          if (!register_operand (operands[0], E_V2HImode)
              || GET_MODE (x3) != E_V2HImode
              || !
#line 6256 "../../gcc/config/i386/mmx.md"
(TARGET_SSE2))
            return -1;
          return 2368; /* *vec_dupv2hi */

        default:
          return -1;
        }

    default:
      return -1;
    }
}

 int
recog_68 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12, x13, x14, x15, x16;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  operands[0] = x2;
  x3 = XEXP (x1, 1);
  x4 = XEXP (x3, 0);
  switch (GET_CODE (x4))
    {
    case REG:
    case SUBREG:
    case MEM:
      operands[1] = x4;
      x5 = XEXP (x3, 1);
      operands[2] = x5;
      switch (pattern435 (x3))
        {
        case 0:
          if (pnum_clobbers != NULL
              && x86_64_hilo_general_operand (operands[2], E_DImode)
              && (
#line 6465 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (PLUS, DImode, operands, TARGET_APX_NDD)) && 
#line 1235 "../../gcc/config/i386/i386.md"
(!TARGET_64BIT)))
            {
              *pnum_clobbers = 1;
              return 266; /* *adddi3_doubleword */
            }
          if (x86_64_general_operand (operands[2], E_DImode))
            {
              if ((
#line 6615 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (PLUS, DImode, operands, TARGET_APX_NDD)
  && TARGET_APX_NF) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return 284; /* *adddi_1_nf */
              if (pnum_clobbers != NULL
                  && (
#line 6615 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (PLUS, DImode, operands, TARGET_APX_NDD)
  && true) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                {
                  *pnum_clobbers = 1;
                  return 285; /* *adddi_1 */
                }
            }
          break;

        case 1:
          if (
#line 6615 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (PLUS, SImode, operands, TARGET_APX_NDD)
  && TARGET_APX_NF))
            return 282; /* *addsi_1_nf */
          if (pnum_clobbers != NULL
              && 
#line 6615 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (PLUS, SImode, operands, TARGET_APX_NDD)
  && true))
            {
              *pnum_clobbers = 1;
              return 283; /* *addsi_1 */
            }
          break;

        default:
          break;
        }
      if (!register_operand (operands[1], E_SImode)
          || pattern436 (x3, 
22) != 0)
        return -1;
      x6 = XEXP (x5, 0);
      x7 = XVECEXP (x6, 0, 0);
      operands[2] = x7;
      if (!tls_symbolic_operand (operands[2], E_VOIDmode)
          || !
#line 23131 "../../gcc/config/i386/i386.md"
(!TARGET_64BIT && TARGET_GNU2_TLS))
        return -1;
      return 1658; /* *tls_dynamic_gnu2_lea_32 */

    case ZERO_EXTEND:
      if (GET_MODE (x4) != E_DImode)
        return -1;
      switch (pattern275 (x3, pnum_clobbers, 
E_DImode, 
E_SImode))
        {
        case 0:
          if (!(
#line 6511 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (UNKNOWN, DImode, operands, TARGET_APX_NDD)) && 
#line 1235 "../../gcc/config/i386/i386.md"
(!TARGET_64BIT)))
            return -1;
          *pnum_clobbers = 1;
          return 268; /* *adddi3_doubleword_zext */

        case 1:
          if (!(
#line 14077 "../../gcc/config/i386/i386.md"
(INTVAL (operands[3]) == 4 * BITS_PER_UNIT) && 
#line 1235 "../../gcc/config/i386/i386.md"
(!TARGET_64BIT)))
            return -1;
          return 898; /* *concatsidi3_2 */

        case 2:
          if (!(
#line 14121 "../../gcc/config/i386/i386.md"
(INTVAL (operands[3]) == 4 * BITS_PER_UNIT) && 
#line 1235 "../../gcc/config/i386/i386.md"
(!TARGET_64BIT)))
            return -1;
          return 916; /* *concatsidi3_4 */

        case 3:
          if (!(
#line 14121 "../../gcc/config/i386/i386.md"
(INTVAL (operands[3]) == 4 * BITS_PER_UNIT) && 
#line 1235 "../../gcc/config/i386/i386.md"
(!TARGET_64BIT)))
            return -1;
          return 919; /* *concatsidi3_4 */

        case 4:
          if (!(
#line 14198 "../../gcc/config/i386/i386.md"
(DImode == DImode
   ? CONST_INT_P (operands[2])
     && (UINTVAL (operands[2]) & GET_MODE_MASK (SImode)) == 0
     && !ix86_endbr_immediate_operand (operands[2], VOIDmode)
   : CONST_WIDE_INT_P (operands[2])
     && CONST_WIDE_INT_NUNITS (operands[2]) == 2
     && CONST_WIDE_INT_ELT (operands[2], 0) == 0
     && !ix86_endbr_immediate_operand (GEN_INT (CONST_WIDE_INT_ELT (operands[2],
								    1)),
				       VOIDmode)) && 
#line 1235 "../../gcc/config/i386/i386.md"
(!TARGET_64BIT)))
            return -1;
          return 946; /* *concatsidi3_7 */

        default:
          return -1;
        }

    case PLUS:
      if (pnum_clobbers == NULL)
        return -1;
      x8 = XEXP (x4, 0);
      switch (GET_CODE (x8))
        {
        case ASHIFT:
          if (GET_MODE (x8) != E_DImode)
            return -1;
          x9 = XEXP (x8, 0);
          if (GET_CODE (x9) != ZERO_EXTEND
              || GET_MODE (x9) != E_DImode)
            return -1;
          x10 = XEXP (x4, 1);
          if (GET_CODE (x10) != ZERO_EXTEND
              || GET_MODE (x10) != E_DImode
              || !register_operand (operands[0], E_DImode)
              || GET_MODE (x3) != E_DImode
              || GET_MODE (x4) != E_DImode)
            return -1;
          switch (pattern83 (x3, 
E_DImode, 
E_SImode))
            {
            case 0:
              if (!(
#line 6542 "../../gcc/config/i386/i386.md"
(INTVAL (operands[3]) == 4 * BITS_PER_UNIT) && 
#line 1235 "../../gcc/config/i386/i386.md"
(!TARGET_64BIT)))
                return -1;
              *pnum_clobbers = 1;
              return 270; /* *adddi3_doubleword_concat */

            case 1:
              if (!(
#line 6573 "../../gcc/config/i386/i386.md"
(INTVAL (operands[3]) == 4 * BITS_PER_UNIT) && 
#line 1235 "../../gcc/config/i386/i386.md"
(!TARGET_64BIT)))
                return -1;
              *pnum_clobbers = 1;
              return 276; /* *adddi3_doubleword_concat_zext */

            default:
              return -1;
            }

        case LTU:
        case UNLT:
          operands[4] = x8;
          x11 = XEXP (x8, 1);
          if (x11 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
            return -1;
          x9 = XEXP (x8, 0);
          operands[3] = x9;
          if (!flags_reg_operand (operands[3], E_VOIDmode))
            return -1;
          x10 = XEXP (x4, 1);
          operands[1] = x10;
          x5 = XEXP (x3, 1);
          operands[2] = x5;
          switch (GET_MODE (operands[0]))
            {
            case E_SImode:
              if (pattern1273 (x3, 
E_SImode) != 0
                  || !
#line 8793 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (PLUS, SImode, operands, TARGET_APX_NDD)))
                return -1;
              *pnum_clobbers = 1;
              return 455; /* addsi3_carry */

            case E_DImode:
              if (pattern1273 (x3, 
E_DImode) != 0
                  || !(
#line 8793 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (PLUS, DImode, operands, TARGET_APX_NDD)) && 
#line 1161 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return -1;
              *pnum_clobbers = 1;
              return 456; /* adddi3_carry */

            default:
              return -1;
            }

        case EQ:
          x11 = XEXP (x8, 1);
          if (x11 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
            return -1;
          x9 = XEXP (x8, 0);
          operands[3] = x9;
          if (!int_nonimmediate_operand (operands[3], E_VOIDmode))
            return -1;
          x10 = XEXP (x4, 1);
          operands[1] = x10;
          x5 = XEXP (x3, 1);
          operands[2] = x5;
          switch (GET_MODE (operands[0]))
            {
            case E_SImode:
              if (pattern1203 (x3, 
E_SImode) != 0
                  || !
#line 10136 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (PLUS, SImode, operands, TARGET_APX_NDD)
   && ix86_pre_reload_split ()))
                return -1;
              *pnum_clobbers = 1;
              return 556; /* *addsi3_eq */

            case E_DImode:
              if (pattern1203 (x3, 
E_DImode) != 0
                  || !(
#line 10136 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (PLUS, DImode, operands, TARGET_APX_NDD)
   && ix86_pre_reload_split ()) && 
#line 1161 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return -1;
              *pnum_clobbers = 1;
              return 557; /* *adddi3_eq */

            default:
              return -1;
            }

        case NE:
          x11 = XEXP (x8, 1);
          if (x11 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
            return -1;
          x9 = XEXP (x8, 0);
          operands[3] = x9;
          if (!int_nonimmediate_operand (operands[3], E_VOIDmode))
            return -1;
          x10 = XEXP (x4, 1);
          operands[1] = x10;
          x5 = XEXP (x3, 1);
          operands[2] = x5;
          switch (GET_MODE (operands[0]))
            {
            case E_SImode:
              if (pattern1204 (x3, 
E_SImode) != 0
                  || !
#line 10157 "../../gcc/config/i386/i386.md"
(CONST_INT_P (operands[2])
   && (SImode != DImode
       || INTVAL (operands[2]) != HOST_WIDE_INT_C (-0x80000000))
   && ix86_binary_operator_ok (PLUS, SImode, operands, TARGET_APX_NDD)
   && ix86_pre_reload_split ()))
                return -1;
              *pnum_clobbers = 1;
              return 560; /* *addsi3_ne */

            case E_DImode:
              if (pattern1204 (x3, 
E_DImode) != 0
                  || !(
#line 10157 "../../gcc/config/i386/i386.md"
(CONST_INT_P (operands[2])
   && (DImode != DImode
       || INTVAL (operands[2]) != HOST_WIDE_INT_C (-0x80000000))
   && ix86_binary_operator_ok (PLUS, DImode, operands, TARGET_APX_NDD)
   && ix86_pre_reload_split ()) && 
#line 1161 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return -1;
              *pnum_clobbers = 1;
              return 561; /* *adddi3_ne */

            default:
              return -1;
            }

        default:
          return -1;
        }

    case IOR:
      switch (pattern101 (x3, pnum_clobbers))
        {
        case 0:
          if (!(
#line 6542 "../../gcc/config/i386/i386.md"
(INTVAL (operands[3]) == 4 * BITS_PER_UNIT) && 
#line 1235 "../../gcc/config/i386/i386.md"
(!TARGET_64BIT)))
            return -1;
          *pnum_clobbers = 1;
          return 271; /* *adddi3_doubleword_concat */

        case 1:
          if (!(
#line 6573 "../../gcc/config/i386/i386.md"
(INTVAL (operands[3]) == 4 * BITS_PER_UNIT) && 
#line 1235 "../../gcc/config/i386/i386.md"
(!TARGET_64BIT)))
            return -1;
          *pnum_clobbers = 1;
          return 277; /* *adddi3_doubleword_concat_zext */

        default:
          return -1;
        }

    case XOR:
      switch (pattern101 (x3, pnum_clobbers))
        {
        case 0:
          if (!(
#line 6542 "../../gcc/config/i386/i386.md"
(INTVAL (operands[3]) == 4 * BITS_PER_UNIT) && 
#line 1235 "../../gcc/config/i386/i386.md"
(!TARGET_64BIT)))
            return -1;
          *pnum_clobbers = 1;
          return 272; /* *adddi3_doubleword_concat */

        case 1:
          if (!(
#line 6573 "../../gcc/config/i386/i386.md"
(INTVAL (operands[3]) == 4 * BITS_PER_UNIT) && 
#line 1235 "../../gcc/config/i386/i386.md"
(!TARGET_64BIT)))
            return -1;
          *pnum_clobbers = 1;
          return 278; /* *adddi3_doubleword_concat_zext */

        default:
          return -1;
        }

    case LTU:
    case UNLT:
      switch (pattern102 (x3, pnum_clobbers))
        {
        case 0:
          if (pattern1078 (x3, 
E_SImode) != 0
              || !
#line 8865 "../../gcc/config/i386/i386.md"
(!MEM_P (operands[0]) || rtx_equal_p (operands[0], operands[1])))
            return -1;
          *pnum_clobbers = 1;
          return 459; /* *addsi3_carry_0 */

        case 1:
          if (pattern1078 (x3, 
E_DImode) != 0
              || !(
#line 8865 "../../gcc/config/i386/i386.md"
(!MEM_P (operands[0]) || rtx_equal_p (operands[0], operands[1])) && 
#line 1161 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return -1;
          *pnum_clobbers = 1;
          return 460; /* *adddi3_carry_0 */

        default:
          return -1;
        }

    case GE:
    case GEU:
      switch (pattern102 (x3, pnum_clobbers))
        {
        case 0:
          if (pattern1079 (x3, 
E_SImode) != 0
              || !
#line 8879 "../../gcc/config/i386/i386.md"
(!MEM_P (operands[0]) || rtx_equal_p (operands[0], operands[1])))
            return -1;
          *pnum_clobbers = 1;
          return 463; /* *addsi3_carry_0r */

        case 1:
          if (pattern1079 (x3, 
E_DImode) != 0
              || !(
#line 8879 "../../gcc/config/i386/i386.md"
(!MEM_P (operands[0]) || rtx_equal_p (operands[0], operands[1])) && 
#line 1161 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return -1;
          *pnum_clobbers = 1;
          return 464; /* *adddi3_carry_0r */

        default:
          return -1;
        }

    case EQ:
      switch (pattern104 (x3, pnum_clobbers))
        {
        case 0:
          if (!
#line 10183 "../../gcc/config/i386/i386.md"
(ix86_unary_operator_ok (PLUS, SImode, operands)
   && ix86_pre_reload_split ()))
            return -1;
          *pnum_clobbers = 1;
          return 564; /* *addsi3_eq_0 */

        case 1:
          if (!(
#line 10183 "../../gcc/config/i386/i386.md"
(ix86_unary_operator_ok (PLUS, DImode, operands)
   && ix86_pre_reload_split ()) && 
#line 1161 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return -1;
          *pnum_clobbers = 1;
          return 565; /* *adddi3_eq_0 */

        default:
          return -1;
        }

    case NE:
      switch (pattern104 (x3, pnum_clobbers))
        {
        case 0:
          if (!
#line 10204 "../../gcc/config/i386/i386.md"
(ix86_unary_operator_ok (PLUS, SImode, operands)
   && ix86_pre_reload_split ()))
            return -1;
          *pnum_clobbers = 1;
          return 568; /* *addsi3_ne_0 */

        case 1:
          if (!(
#line 10204 "../../gcc/config/i386/i386.md"
(ix86_unary_operator_ok (PLUS, DImode, operands)
   && ix86_pre_reload_split ()) && 
#line 1161 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return -1;
          *pnum_clobbers = 1;
          return 569; /* *adddi3_ne_0 */

        default:
          return -1;
        }

    case MINUS:
      if (pnum_clobbers == NULL)
        return -1;
      x8 = XEXP (x4, 0);
      operands[1] = x8;
      x5 = XEXP (x3, 1);
      operands[2] = x5;
      x10 = XEXP (x4, 1);
      switch (GET_CODE (x10))
        {
        case NE:
          switch (pattern750 (x3))
            {
            case 0:
              if (!
#line 10252 "../../gcc/config/i386/i386.md"
(CONST_INT_P (operands[2])
   && (SImode != DImode
       || INTVAL (operands[2]) != HOST_WIDE_INT_C (-0x80000000))
   && ix86_binary_operator_ok (MINUS, SImode, operands, TARGET_APX_NDD)
   && ix86_pre_reload_split ()))
                return -1;
              *pnum_clobbers = 1;
              return 576; /* *subsi3_ne */

            case 1:
              if (!(
#line 10252 "../../gcc/config/i386/i386.md"
(CONST_INT_P (operands[2])
   && (DImode != DImode
       || INTVAL (operands[2]) != HOST_WIDE_INT_C (-0x80000000))
   && ix86_binary_operator_ok (MINUS, DImode, operands, TARGET_APX_NDD)
   && ix86_pre_reload_split ()) && 
#line 1161 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return -1;
              *pnum_clobbers = 1;
              return 577; /* *subdi3_ne */

            default:
              return -1;
            }

        case EQ:
          switch (pattern750 (x3))
            {
            case 0:
              if (!
#line 10281 "../../gcc/config/i386/i386.md"
(CONST_INT_P (operands[2])
   && (SImode != DImode
       || INTVAL (operands[2]) != HOST_WIDE_INT_C (-0x80000000))
   && ix86_binary_operator_ok (MINUS, SImode, operands, TARGET_APX_NDD)
   && ix86_pre_reload_split ()))
                return -1;
              *pnum_clobbers = 1;
              return 580; /* *subsi3_eq_1 */

            case 1:
              if (!(
#line 10281 "../../gcc/config/i386/i386.md"
(CONST_INT_P (operands[2])
   && (DImode != DImode
       || INTVAL (operands[2]) != HOST_WIDE_INT_C (-0x80000000))
   && ix86_binary_operator_ok (MINUS, DImode, operands, TARGET_APX_NDD)
   && ix86_pre_reload_split ()) && 
#line 1161 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return -1;
              *pnum_clobbers = 1;
              return 581; /* *subdi3_eq_1 */

            default:
              return -1;
            }

        default:
          return -1;
        }

    case ASHIFT:
      if (GET_MODE (x4) != E_DImode
          || !nonimmediate_operand (operands[0], E_DImode)
          || GET_MODE (x3) != E_DImode)
        return -1;
      x10 = XEXP (x4, 1);
      operands[2] = x10;
      if (!const_int_operand (operands[2], E_QImode))
        return -1;
      x8 = XEXP (x4, 0);
      switch (GET_CODE (x8))
        {
        case REG:
        case SUBREG:
          operands[1] = x8;
          if (!register_operand (operands[1], E_DImode))
            return -1;
          x5 = XEXP (x3, 1);
          switch (pattern255 (x5, 
E_SImode, 
E_DImode))
            {
            case 0:
              if (!(
#line 14060 "../../gcc/config/i386/i386.md"
(INTVAL (operands[2]) == 4 * BITS_PER_UNIT) && 
#line 1235 "../../gcc/config/i386/i386.md"
(!TARGET_64BIT)))
                return -1;
              return 892; /* *concatsidi3_1 */

            case 1:
              if (!(
#line 14137 "../../gcc/config/i386/i386.md"
(INTVAL (operands[2]) == 8 * BITS_PER_UNIT / 2
   && (DImode == DImode
       ? CONST_INT_P (operands[3])
	 && (UINTVAL (operands[3]) & ~GET_MODE_MASK (SImode)) == 0
       : CONST_INT_P (operands[3])
       ? INTVAL (operands[3]) >= 0
       : CONST_WIDE_INT_NUNITS (operands[3]) == 2
	 && CONST_WIDE_INT_ELT (operands[3], 1) == 0)
   && !(CONST_INT_P (operands[3])
	? ix86_endbr_immediate_operand (operands[3], VOIDmode)
	: ix86_endbr_immediate_operand (GEN_INT (CONST_WIDE_INT_ELT (operands[3],
								     0)),
					VOIDmode))) && 
#line 1195 "../../gcc/config/i386/i386.md"
(!TARGET_64BIT)))
                return -1;
              return 928; /* *concatsidi3_5 */

            default:
              return -1;
            }

        case SIGN_EXTEND:
          switch (pattern981 (x3))
            {
            case 0:
              if (!(
#line 14096 "../../gcc/config/i386/i386.md"
(INTVAL (operands[2]) == 4 * BITS_PER_UNIT) && 
#line 1235 "../../gcc/config/i386/i386.md"
(!TARGET_64BIT)))
                return -1;
              return 904; /* *concatsidi3_3 */

            case 1:
              if (!(
#line 14169 "../../gcc/config/i386/i386.md"
(INTVAL (operands[2]) == 4 * BITS_PER_UNIT
   && (DImode == DImode
       ? CONST_INT_P (operands[3])
	 && (UINTVAL (operands[3]) & ~GET_MODE_MASK (SImode)) == 0
       : CONST_INT_P (operands[3])
       ? INTVAL (operands[3]) >= 0
       : CONST_WIDE_INT_NUNITS (operands[3]) == 2
	 && CONST_WIDE_INT_ELT (operands[3], 1) == 0)
   && !(CONST_INT_P (operands[3])
	? ix86_endbr_immediate_operand (operands[3], VOIDmode)
	: ix86_endbr_immediate_operand (GEN_INT (CONST_WIDE_INT_ELT (operands[3],
								     0)),
					VOIDmode))) && 
#line 1235 "../../gcc/config/i386/i386.md"
(!TARGET_64BIT)))
                return -1;
              return 934; /* *concatsidi3_6 */

            default:
              return -1;
            }

        case ZERO_EXTEND:
          switch (pattern981 (x3))
            {
            case 0:
              if (!(
#line 14096 "../../gcc/config/i386/i386.md"
(INTVAL (operands[2]) == 4 * BITS_PER_UNIT) && 
#line 1235 "../../gcc/config/i386/i386.md"
(!TARGET_64BIT)))
                return -1;
              return 907; /* *concatsidi3_3 */

            case 1:
              if (!(
#line 14169 "../../gcc/config/i386/i386.md"
(INTVAL (operands[2]) == 4 * BITS_PER_UNIT
   && (DImode == DImode
       ? CONST_INT_P (operands[3])
	 && (UINTVAL (operands[3]) & ~GET_MODE_MASK (SImode)) == 0
       : CONST_INT_P (operands[3])
       ? INTVAL (operands[3]) >= 0
       : CONST_WIDE_INT_NUNITS (operands[3]) == 2
	 && CONST_WIDE_INT_ELT (operands[3], 1) == 0)
   && !(CONST_INT_P (operands[3])
	? ix86_endbr_immediate_operand (operands[3], VOIDmode)
	: ix86_endbr_immediate_operand (GEN_INT (CONST_WIDE_INT_ELT (operands[3],
								     0)),
					VOIDmode))) && 
#line 1235 "../../gcc/config/i386/i386.md"
(!TARGET_64BIT)))
                return -1;
              return 937; /* *concatsidi3_6 */

            default:
              return -1;
            }

        default:
          return -1;
        }

    case LSHIFTRT:
      if (pnum_clobbers == NULL)
        return -1;
      x10 = XEXP (x4, 1);
      if (x10 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
        return -1;
      x5 = XEXP (x3, 1);
      if (pattern415 (x5, 
E_CCCmode, 
ASHIFT) != 0)
        return -1;
      x12 = XEXP (x5, 1);
      if (GET_CODE (x12) != CONST_INT)
        return -1;
      x8 = XEXP (x4, 0);
      operands[1] = x8;
      switch (XWINT (x12, 0))
        {
        case 31L:
          if (pattern1452 (x3, 
E_SImode) != 0)
            return -1;
          *pnum_clobbers = 1;
          return 1385; /* rcrsi2 */

        case 63L:
          if (pattern1452 (x3, 
E_DImode) != 0
              || !
#line 18754 "../../gcc/config/i386/i386.md"
(TARGET_64BIT))
            return -1;
          *pnum_clobbers = 1;
          return 1386; /* rcrdi2 */

        default:
          return -1;
        }

    case UNSPEC:
      if (pnum_clobbers == NULL)
        return -1;
      switch (XVECLEN (x4, 0))
        {
        case 3:
          x13 = XVECEXP (x4, 0, 2);
          if (GET_CODE (x13) != REG
              || REGNO (x13) != 7)
            return -1;
          x5 = XEXP (x3, 1);
          if (GET_CODE (x5) != CONST)
            return -1;
          x6 = XEXP (x5, 0);
          if (GET_CODE (x6) != UNSPEC
              || XVECLEN (x6, 0) != 1
              || XINT (x6, 1) != 6)
            return -1;
          x7 = XVECEXP (x6, 0, 0);
          if (!tls_symbolic_operand (x7, E_VOIDmode))
            return -1;
          switch (XINT (x4, 1))
            {
            case 21:
              if (GET_MODE (x4) != E_SImode
                  || !register_operand (operands[0], E_SImode)
                  || GET_MODE (x3) != E_SImode)
                return -1;
              x14 = XVECEXP (x4, 0, 0);
              operands[1] = x14;
              if (!register_operand (operands[1], E_SImode))
                return -1;
              x15 = XVECEXP (x4, 0, 1);
              operands[2] = x15;
              if (!constant_call_address_operand (operands[2], E_VOIDmode)
                  || GET_MODE (x13) != E_SImode
                  || GET_MODE (x5) != E_SImode
                  || GET_MODE (x6) != E_SImode)
                return -1;
              operands[3] = x7;
              *pnum_clobbers = 3;
              return 1651; /* *tls_local_dynamic_32_once */

            case 22:
              x14 = XVECEXP (x4, 0, 0);
              operands[2] = x14;
              if (!tls_modbase_operand (operands[2], E_VOIDmode))
                return -1;
              x15 = XVECEXP (x4, 0, 1);
              operands[3] = x15;
              operands[1] = x7;
              switch (GET_MODE (operands[0]))
                {
                case E_SImode:
                  if (pattern1632 (x3, 
E_SImode) != 0
                      || !(
#line 23224 "../../gcc/config/i386/i386.md"
(TARGET_64BIT && TARGET_GNU2_TLS) && 
#line 1408 "../../gcc/config/i386/i386.md"
(ptr_mode == SImode)))
                    return -1;
                  *pnum_clobbers = 1;
                  return 1665; /* *tls_dynamic_gnu2_combine_64_si */

                case E_DImode:
                  if (pattern1632 (x3, 
E_DImode) != 0
                      || !(
#line 23224 "../../gcc/config/i386/i386.md"
(TARGET_64BIT && TARGET_GNU2_TLS) && 
#line 1408 "../../gcc/config/i386/i386.md"
(ptr_mode == DImode)))
                    return -1;
                  *pnum_clobbers = 1;
                  return 1666; /* *tls_dynamic_gnu2_combine_64_di */

                default:
                  return -1;
                }

            default:
              return -1;
            }

        case 1:
          if (XINT (x4, 1) != 19)
            return -1;
          x14 = XVECEXP (x4, 0, 0);
          if (x14 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
            return -1;
          switch (pattern752 (x3))
            {
            case 0:
              if (!
#line 1408 "../../gcc/config/i386/i386.md"
(ptr_mode == SImode))
                return -1;
              *pnum_clobbers = 1;
              return 1655; /* *add_tp_si */

            case 1:
              if (!
#line 1408 "../../gcc/config/i386/i386.md"
(ptr_mode == DImode))
                return -1;
              *pnum_clobbers = 1;
              return 1656; /* *add_tp_di */

            default:
              return -1;
            }

        case 4:
          if (XINT (x4, 1) != 22
              || GET_MODE (x4) != E_SImode)
            return -1;
          x16 = XVECEXP (x4, 0, 3);
          if (GET_CODE (x16) != REG
              || REGNO (x16) != 7
              || GET_MODE (x16) != E_SImode
              || pattern436 (x3, 
6) != 0)
            return -1;
          x14 = XVECEXP (x4, 0, 0);
          operands[3] = x14;
          if (!tls_modbase_operand (operands[3], E_VOIDmode))
            return -1;
          x15 = XVECEXP (x4, 0, 1);
          operands[4] = x15;
          x13 = XVECEXP (x4, 0, 2);
          operands[2] = x13;
          if (!register_operand (operands[2], E_SImode))
            return -1;
          x5 = XEXP (x3, 1);
          x6 = XEXP (x5, 0);
          x7 = XVECEXP (x6, 0, 0);
          operands[1] = x7;
          if (!tls_symbolic_operand (operands[1], E_VOIDmode)
              || !
#line 23165 "../../gcc/config/i386/i386.md"
(!TARGET_64BIT && TARGET_GNU2_TLS))
            return -1;
          *pnum_clobbers = 1;
          return 1660; /* *tls_dynamic_gnu2_combine_32 */

        default:
          return -1;
        }

    default:
      return -1;
    }
}

 int
recog_89 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7;
  int res ATTRIBUTE_UNUSED;
  if (pnum_clobbers == NULL)
    return -1;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) != LSHIFTRT)
    return -1;
  x4 = XEXP (x3, 0);
  if (GET_CODE (x4) != MULT)
    return -1;
  x5 = XEXP (x3, 1);
  if (GET_CODE (x5) != CONST_INT)
    return -1;
  x6 = XEXP (x1, 0);
  operands[0] = x6;
  x7 = XEXP (x4, 0);
  switch (GET_CODE (x7))
    {
    case SIGN_EXTEND:
      switch (pattern760 (x2, 
SIGN_EXTEND))
        {
        case 0:
          if (!
#line 11174 "../../gcc/config/i386/i386.md"
(TARGET_64BIT
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
            return -1;
          *pnum_clobbers = 2;
          return 633; /* *smuldi3_highpart_1 */

        case 1:
          if (!
#line 11223 "../../gcc/config/i386/i386.md"
(!(MEM_P (operands[1]) && MEM_P (operands[2]))))
            return -1;
          *pnum_clobbers = 2;
          return 637; /* *smulsi3_highpart_1 */

        default:
          return -1;
        }

    case ZERO_EXTEND:
      switch (pattern760 (x2, 
ZERO_EXTEND))
        {
        case 0:
          if (!
#line 11174 "../../gcc/config/i386/i386.md"
(TARGET_64BIT
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
            return -1;
          *pnum_clobbers = 2;
          return 634; /* *umuldi3_highpart_1 */

        case 1:
          if (!
#line 11223 "../../gcc/config/i386/i386.md"
(!(MEM_P (operands[1]) && MEM_P (operands[2]))))
            return -1;
          *pnum_clobbers = 2;
          return 638; /* *umulsi3_highpart_1 */

        default:
          return -1;
        }

    default:
      return -1;
    }
}

 int
recog_91 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12, x13;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  operands[0] = x2;
  x3 = XEXP (x1, 1);
  x4 = XEXP (x3, 0);
  switch (GET_CODE (x4))
    {
    case REG:
    case SUBREG:
    case MEM:
      operands[1] = x4;
      res = recog_90 (x1, insn, pnum_clobbers);
      if (res >= 0)
        return res;
      if (pnum_clobbers == NULL
          || GET_CODE (x4) != SUBREG
          || maybe_ne (SUBREG_BYTE (x4), 0)
          || GET_MODE (x4) != E_DImode)
        return -1;
      x5 = XEXP (x3, 1);
      if (x5 != const_int_rtx[MAX_SAVED_CONST_INT + 63]
          || !register_operand (operands[0], E_DImode)
          || GET_MODE (x3) != E_DImode)
        return -1;
      x6 = XEXP (x4, 0);
      if (GET_MODE (x6) != E_SImode)
        return -1;
      switch (GET_CODE (x6))
        {
        case CTZ:
          x7 = XEXP (x6, 0);
          operands[1] = x7;
          if (!nonimmediate_operand (operands[1], E_SImode)
              || !
#line 21123 "../../gcc/config/i386/i386.md"
(TARGET_BMI && TARGET_64BIT))
            return -1;
          *pnum_clobbers = 1;
          return 1518; /* *ctzsi2_zext */

        case CLZ:
          x7 = XEXP (x6, 0);
          operands[1] = x7;
          if (!nonimmediate_operand (operands[1], E_SImode)
              || !
#line 21560 "../../gcc/config/i386/i386.md"
(TARGET_LZCNT && TARGET_64BIT))
            return -1;
          *pnum_clobbers = 1;
          return 1540; /* *clzsi2_lzcnt_zext */

        case POPCOUNT:
          x7 = XEXP (x6, 0);
          operands[1] = x7;
          if (!nonimmediate_operand (operands[1], E_SImode)
              || !
#line 22241 "../../gcc/config/i386/i386.md"
(TARGET_POPCNT && TARGET_64BIT))
            return -1;
          *pnum_clobbers = 1;
          return 1626; /* *popcountsi2_zext */

        default:
          return -1;
        }

    case NOT:
      if (pnum_clobbers == NULL)
        return -1;
      x6 = XEXP (x4, 0);
      switch (GET_CODE (x6))
        {
        case REG:
        case SUBREG:
          operands[1] = x6;
          x5 = XEXP (x3, 1);
          operands[2] = x5;
          switch (GET_MODE (operands[0]))
            {
            case E_DImode:
              if (pattern739 (x3, 
E_DImode) != 0)
                return -1;
              if ((
#line 13312 "../../gcc/config/i386/i386.md"
(TARGET_BMI) && 
#line 1235 "../../gcc/config/i386/i386.md"
(!TARGET_64BIT)))
                {
                  *pnum_clobbers = 1;
                  return 809; /* *andndi3_doubleword_bmi */
                }
              if ((
#line 13330 "../../gcc/config/i386/i386.md"
(!TARGET_BMI
   && ix86_pre_reload_split ()) && 
#line 1195 "../../gcc/config/i386/i386.md"
(!TARGET_64BIT)))
                {
                  *pnum_clobbers = 1;
                  return 811; /* *andndi3_doubleword */
                }
              if (!(
#line 13346 "../../gcc/config/i386/i386.md"
(TARGET_BMI || TARGET_AVX512BW) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return -1;
              *pnum_clobbers = 1;
              return 814; /* *andndi_1 */

            case E_SImode:
              if (pattern739 (x3, 
E_SImode) != 0
                  || !
#line 13346 "../../gcc/config/i386/i386.md"
(TARGET_BMI || TARGET_AVX512BW))
                return -1;
              *pnum_clobbers = 1;
              return 813; /* *andnsi_1 */

            default:
              return -1;
            }

        case LSHIFTRT:
          x5 = XEXP (x3, 1);
          if (x5 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
            return -1;
          x7 = XEXP (x6, 0);
          operands[1] = x7;
          x8 = XEXP (x6, 1);
          operands[2] = x8;
          if (!register_operand (operands[2], E_QImode))
            return -1;
          switch (GET_MODE (operands[0]))
            {
            case E_SImode:
              if (pattern1089 (x3, 
E_SImode) != 0
                  || !
#line 19362 "../../gcc/config/i386/i386.md"
(TARGET_USE_BT && ix86_pre_reload_split ()))
                return -1;
              *pnum_clobbers = 1;
              return 1438; /* *btsi_setncsi */

            case E_DImode:
              if (pattern1089 (x3, 
E_DImode) != 0
                  || !(
#line 19362 "../../gcc/config/i386/i386.md"
(TARGET_USE_BT && ix86_pre_reload_split ()) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return -1;
              *pnum_clobbers = 1;
              return 1439; /* *btdi_setncdi */

            default:
              return -1;
            }

        case ASHIFT:
          x7 = XEXP (x6, 0);
          if (x7 != const_int_rtx[MAX_SAVED_CONST_INT + -1])
            return -1;
          switch (pattern621 (x3))
            {
            case 0:
              if (!
#line 21943 "../../gcc/config/i386/i386.md"
(TARGET_BMI2))
                return -1;
              *pnum_clobbers = 1;
              return 1590; /* *bmi2_bzhi_si3_3 */

            case 1:
              if (!(
#line 21943 "../../gcc/config/i386/i386.md"
(TARGET_BMI2) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return -1;
              *pnum_clobbers = 1;
              return 1591; /* *bmi2_bzhi_di3_3 */

            default:
              return -1;
            }

        default:
          return -1;
        }

    case ROTATE:
      if (pnum_clobbers == NULL)
        return -1;
      x6 = XEXP (x4, 0);
      if (x6 != const_int_rtx[MAX_SAVED_CONST_INT + -2])
        return -1;
      switch (pattern285 (x3))
        {
        case 0:
          x9 = XEXP (x4, 1);
          operands[2] = x9;
          if (register_operand (operands[2], E_QImode))
            {
              switch (pattern752 (x3))
                {
                case 0:
                  if (
#line 18873 "../../gcc/config/i386/i386.md"
(TARGET_USE_BT))
                    {
                      *pnum_clobbers = 1;
                      return 1403; /* *btrsi */
                    }
                  break;

                case 1:
                  if ((
#line 18873 "../../gcc/config/i386/i386.md"
(TARGET_USE_BT) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                    {
                      *pnum_clobbers = 1;
                      return 1404; /* *btrdi */
                    }
                  break;

                default:
                  break;
                }
            }
          if (GET_CODE (x9) != SUBREG)
            return -1;
          switch (pattern761 (x3))
            {
            case 0:
              if (!
#line 18892 "../../gcc/config/i386/i386.md"
(TARGET_USE_BT
   && (INTVAL (operands[2]) & (GET_MODE_BITSIZE (SImode)-1))
      == GET_MODE_BITSIZE (SImode)-1
   && ix86_pre_reload_split ()))
                return -1;
              *pnum_clobbers = 1;
              return 1405; /* *btrsi_mask */

            case 1:
              if (!(
#line 18892 "../../gcc/config/i386/i386.md"
(TARGET_USE_BT
   && (INTVAL (operands[2]) & (GET_MODE_BITSIZE (DImode)-1))
      == GET_MODE_BITSIZE (DImode)-1
   && ix86_pre_reload_split ()) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return -1;
              *pnum_clobbers = 1;
              return 1406; /* *btrdi_mask */

            default:
              return -1;
            }

        case 1:
          if (!
#line 18920 "../../gcc/config/i386/i386.md"
(TARGET_USE_BT
   && (INTVAL (operands[2]) & (GET_MODE_BITSIZE (SImode)-1))
      == GET_MODE_BITSIZE (SImode)-1
   && ix86_pre_reload_split ()))
            return -1;
          *pnum_clobbers = 1;
          return 1407; /* *btrsi_mask_1 */

        case 2:
          if (!(
#line 18920 "../../gcc/config/i386/i386.md"
(TARGET_USE_BT
   && (INTVAL (operands[2]) & (GET_MODE_BITSIZE (DImode)-1))
      == GET_MODE_BITSIZE (DImode)-1
   && ix86_pre_reload_split ()) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return -1;
          *pnum_clobbers = 1;
          return 1408; /* *btrdi_mask_1 */

        default:
          return -1;
        }

    case NEG:
      if (pnum_clobbers == NULL)
        return -1;
      x6 = XEXP (x4, 0);
      operands[1] = x6;
      x5 = XEXP (x3, 1);
      if (!rtx_equal_p (x5, operands[1]))
        return -1;
      switch (GET_MODE (operands[0]))
        {
        case E_SImode:
          if (pattern755 (x3, 
E_SImode) != 0
              || !
#line 21764 "../../gcc/config/i386/i386.md"
(TARGET_BMI))
            return -1;
          *pnum_clobbers = 1;
          return 1570; /* *bmi_blsi_si */

        case E_DImode:
          if (pattern755 (x3, 
E_DImode) != 0
              || !(
#line 21764 "../../gcc/config/i386/i386.md"
(TARGET_BMI) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return -1;
          *pnum_clobbers = 1;
          return 1571; /* *bmi_blsi_di */

        default:
          return -1;
        }

    case PLUS:
      if (pnum_clobbers == NULL)
        return -1;
      x9 = XEXP (x4, 1);
      if (GET_CODE (x9) != CONST_INT)
        return -1;
      x6 = XEXP (x4, 0);
      switch (GET_CODE (x6))
        {
        case REG:
        case SUBREG:
        case MEM:
          operands[1] = x6;
          switch (XWINT (x9, 0))
            {
            case -1L:
              switch (pattern757 (x3))
                {
                case 0:
                  if (!
#line 21821 "../../gcc/config/i386/i386.md"
(TARGET_BMI))
                    return -1;
                  *pnum_clobbers = 1;
                  return 1578; /* *bmi_blsr_si */

                case 1:
                  if (!(
#line 21821 "../../gcc/config/i386/i386.md"
(TARGET_BMI) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                    return -1;
                  *pnum_clobbers = 1;
                  return 1579; /* *bmi_blsr_di */

                case 2:
                  if (!
#line 22136 "../../gcc/config/i386/i386.md"
(TARGET_TBM))
                    return -1;
                  *pnum_clobbers = 1;
                  return 1616; /* *tbm_tzmsk_si */

                case 3:
                  if (!(
#line 22136 "../../gcc/config/i386/i386.md"
(TARGET_TBM) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                    return -1;
                  *pnum_clobbers = 1;
                  return 1617; /* *tbm_tzmsk_di */

                default:
                  return -1;
                }

            case 1L:
              switch (pattern757 (x3))
                {
                case 0:
                  if (!
#line 22027 "../../gcc/config/i386/i386.md"
(TARGET_TBM))
                    return -1;
                  *pnum_clobbers = 1;
                  return 1600; /* *tbm_blcfill_si */

                case 1:
                  if (!(
#line 22027 "../../gcc/config/i386/i386.md"
(TARGET_TBM) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                    return -1;
                  *pnum_clobbers = 1;
                  return 1601; /* *tbm_blcfill_di */

                case 2:
                  if (!
#line 22055 "../../gcc/config/i386/i386.md"
(TARGET_TBM))
                    return -1;
                  *pnum_clobbers = 1;
                  return 1604; /* *tbm_blcic_si */

                case 3:
                  if (!(
#line 22055 "../../gcc/config/i386/i386.md"
(TARGET_TBM) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                    return -1;
                  *pnum_clobbers = 1;
                  return 1605; /* *tbm_blcic_di */

                default:
                  return -1;
                }

            default:
              return -1;
            }

        case ASHIFT:
          x7 = XEXP (x6, 0);
          if (x7 != const_int_rtx[MAX_SAVED_CONST_INT + 1]
              || XWINT (x9, 0) != -1L)
            return -1;
          switch (pattern621 (x3))
            {
            case 0:
              if (!
#line 21929 "../../gcc/config/i386/i386.md"
(TARGET_BMI2))
                return -1;
              *pnum_clobbers = 1;
              return 1588; /* *bmi2_bzhi_si3_2 */

            case 1:
              if (!(
#line 21929 "../../gcc/config/i386/i386.md"
(TARGET_BMI2) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return -1;
              *pnum_clobbers = 1;
              return 1589; /* *bmi2_bzhi_di3_2 */

            default:
              return -1;
            }

        default:
          return -1;
        }

    case ZERO_EXTEND:
      if (pnum_clobbers == NULL
          || GET_MODE (x4) != E_DImode)
        return -1;
      x6 = XEXP (x4, 0);
      if (GET_CODE (x6) != PLUS
          || pattern437 (x6) != 0)
        return -1;
      x8 = XEXP (x6, 1);
      if (x8 != const_int_rtx[MAX_SAVED_CONST_INT + -1]
          || !register_operand (operands[0], E_DImode)
          || GET_MODE (x3) != E_DImode)
        return -1;
      x7 = XEXP (x6, 0);
      x10 = XEXP (x7, 1);
      operands[2] = x10;
      if (!register_operand (operands[2], E_QImode))
        return -1;
      x5 = XEXP (x3, 1);
      operands[1] = x5;
      if (!nonimmediate_operand (operands[1], E_DImode)
          || !
#line 21975 "../../gcc/config/i386/i386.md"
(TARGET_64BIT && TARGET_BMI2))
        return -1;
      *pnum_clobbers = 1;
      return 1593; /* *bmi2_bzhi_zero_extendsidi_5 */

    case UNSPEC:
      switch (XVECLEN (x4, 0))
        {
        case 3:
          x11 = XVECEXP (x4, 0, 2);
          if (GET_CODE (x11) != CONST_INT)
            return -1;
          x12 = XVECEXP (x4, 0, 0);
          operands[1] = x12;
          x13 = XVECEXP (x4, 0, 1);
          operands[2] = x13;
          switch (XINT (x4, 1))
            {
            case 59:
              operands[3] = x11;
              x5 = XEXP (x3, 1);
              operands[4] = x5;
              switch (GET_MODE (operands[0]))
                {
                case E_SImode:
                  if (pattern1070 (x3, 
E_SImode) == 0)
                    {
                      switch (GET_MODE (operands[1]))
                        {
                        case E_V32HFmode:
                          if (register_operand (operands[1], E_V32HFmode)
                              && nonimmediate_operand (operands[2], E_V32HFmode)
                              && const_0_to_31_operand (operands[3], E_SImode)
                              && (
#line 122 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 4395 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 310 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_EVEX512))))
                            return 3297; /* avx512bw_cmpv32hf3_mask */
                          break;

                        case E_V32QImode:
                          if (register_operand (operands[1], E_V32QImode)
                              && nonimmediate_operand (operands[2], E_V32QImode)
                              && const_0_to_7_operand (operands[3], E_SImode)
                              && (
#line 122 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 4487 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 318 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
                            return 3435; /* avx512vl_cmpv32qi3_mask */
                          break;

                        case E_V32HImode:
                          if (register_operand (operands[1], E_V32HImode)
                              && nonimmediate_operand (operands[2], E_V32HImode)
                              && const_0_to_7_operand (operands[3], E_SImode)
                              && (
#line 122 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 4487 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 319 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512))))
                            return 3437; /* avx512bw_cmpv32hi3_mask */
                          break;

                        case E_V32BFmode:
                          if (register_operand (operands[1], E_V32BFmode)
                              && nonimmediate_operand (operands[2], E_V32BFmode)
                              && const_0_to_31_operand (operands[3], E_VOIDmode)
                              && (
#line 122 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 32446 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256) && 
#line 565 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_512))))
                            return 10723; /* avx10_2_cmppbf16_v32bf_mask */
                          break;

                        default:
                          break;
                        }
                    }
                  break;

                case E_DImode:
                  if (pattern990 (x3) == 0
                      && register_operand (operands[4], E_DImode)
                      && (
#line 122 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 4487 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 318 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512))))
                    return 3431; /* avx512bw_cmpv64qi3_mask */
                  break;

                default:
                  break;
                }
              if (XWINT (x11, 0) != 0L)
                return -1;
              switch (pattern988 (x3))
                {
                case 0:
                  if (!(
#line 122 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 4582 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 318 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512))))
                    return -1;
                  return 3491; /* *avx512bw_eqv64qi3_mask_1 */

                case 1:
                  if (!(
#line 122 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 4582 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 318 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
                    return -1;
                  return 3499; /* *avx512vl_eqv32qi3_mask_1 */

                case 2:
                  if (!(
#line 122 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 4582 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 319 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512))))
                    return -1;
                  return 3503; /* *avx512bw_eqv32hi3_mask_1 */

                default:
                  return -1;
                }

            case 157:
              if (XWINT (x11, 0) == 0L)
                {
                  switch (pattern988 (x3))
                    {
                    case 0:
                      if ((
#line 122 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 4582 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 318 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512))))
                        return 3493; /* *avx512bw_eqv64qi3_mask_1 */
                      break;

                    case 1:
                      if ((
#line 122 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 4582 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 318 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
                        return 3501; /* *avx512vl_eqv32qi3_mask_1 */
                      break;

                    case 2:
                      if ((
#line 122 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 4582 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 319 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512))))
                        return 3505; /* *avx512bw_eqv32hi3_mask_1 */
                      break;

                    default:
                      break;
                    }
                }
              operands[3] = x11;
              if (!const_0_to_7_operand (operands[3], E_SImode))
                return -1;
              x5 = XEXP (x3, 1);
              operands[4] = x5;
              switch (GET_MODE (operands[0]))
                {
                case E_DImode:
                  if (pattern1090 (x3, 
E_V64QImode, 
E_DImode) != 0
                      || !register_operand (operands[4], E_DImode)
                      || !(
#line 122 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 4597 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 318 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512))))
                    return -1;
                  return 3515; /* avx512bw_ucmpv64qi3_mask */

                case E_SImode:
                  if (pattern1070 (x3, 
E_SImode) != 0)
                    return -1;
                  switch (pattern869 ())
                    {
                    case 0:
                      if (!(
#line 122 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 4597 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 318 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
                        return -1;
                      return 3519; /* avx512vl_ucmpv32qi3_mask */

                    case 1:
                      if (!(
#line 122 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 4597 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 319 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512))))
                        return -1;
                      return 3521; /* avx512bw_ucmpv32hi3_mask */

                    default:
                      return -1;
                    }

                default:
                  return -1;
                }

            default:
              return -1;
            }

        case 2:
          x12 = XVECEXP (x4, 0, 0);
          operands[1] = x12;
          x13 = XVECEXP (x4, 0, 1);
          operands[2] = x13;
          x5 = XEXP (x3, 1);
          operands[3] = x5;
          switch (XINT (x4, 1))
            {
            case 158:
              switch (pattern873 (x3))
                {
                case 0:
                  if (!(
#line 122 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 19052 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 505 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512))))
                    return -1;
                  return 8107; /* avx512bw_testmv64qi3_mask */

                case 1:
                  if (!(
#line 122 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 19052 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 506 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL && TARGET_AVX512BW))))
                    return -1;
                  return 8109; /* avx512vl_testmv32qi3_mask */

                case 2:
                  if (!(
#line 122 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 19052 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 508 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512))))
                    return -1;
                  return 8113; /* avx512bw_testmv32hi3_mask */

                default:
                  return -1;
                }

            case 159:
              switch (pattern873 (x3))
                {
                case 0:
                  if (!(
#line 122 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 19063 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 505 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512))))
                    return -1;
                  return 8131; /* avx512bw_testnmv64qi3_mask */

                case 1:
                  if (!(
#line 122 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 19063 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 506 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL && TARGET_AVX512BW))))
                    return -1;
                  return 8133; /* avx512vl_testnmv32qi3_mask */

                case 2:
                  if (!(
#line 122 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 19063 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 508 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512))))
                    return -1;
                  return 8137; /* avx512bw_testnmv32hi3_mask */

                default:
                  return -1;
                }

            case 193:
              if (GET_MODE (x4) != E_SImode
                  || !register_operand (operands[0], E_SImode)
                  || GET_MODE (x3) != E_SImode
                  || !vector_operand (operands[1], E_V32HFmode)
                  || !const_0_to_255_operand (operands[2], E_VOIDmode)
                  || !register_operand (operands[3], E_SImode)
                  || !(
#line 122 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 29854 "../../gcc/config/i386/sse.md"
(TARGET_AVX512DQ || VALID_AVX512FP16_REG_MODE(V32HFmode)) && 
#line 525 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_EVEX512))))
                return -1;
              return 9985; /* avx512dq_fpclassv32hf_mask */

            case 214:
              switch (GET_MODE (operands[0]))
                {
                case E_DImode:
                  if (pattern872 (x3, 
E_DImode, 
E_V64QImode) != 0
                      || !(
#line 122 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 30921 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BITALG) && 
#line 328 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512))))
                    return -1;
                  return 10321; /* avx512vl_vpshufbitqmbv64qi_mask */

                case E_SImode:
                  if (pattern872 (x3, 
E_SImode, 
E_V32QImode) != 0
                      || !(
#line 122 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 30921 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BITALG) && 
#line 328 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
                    return -1;
                  return 10325; /* avx512vl_vpshufbitqmbv32qi_mask */

                default:
                  return -1;
                }

            case 262:
              if (GET_MODE (x4) != E_SImode
                  || !register_operand (operands[0], E_SImode)
                  || GET_MODE (x3) != E_SImode
                  || !nonimmediate_operand (operands[1], E_V32BFmode)
                  || !const_0_to_255_operand (operands[2], E_VOIDmode)
                  || !register_operand (operands[3], E_SImode)
                  || !(
#line 122 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 32435 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256) && 
#line 565 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_512))))
                return -1;
              return 10717; /* avx10_2_fpclasspbf16_v32bf_mask */

            default:
              return -1;
            }

        default:
          return -1;
        }

    default:
      return -1;
    }
}

 int
recog_125 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XVECEXP (x3, 0, 0);
  operands[1] = x4;
  x5 = XEXP (x2, 2);
  operands[3] = x5;
  switch (GET_MODE (operands[0]))
    {
    case E_V8HImode:
      if (pattern633 (x2, 
E_V8HImode, 
E_QImode, 
E_V8HFmode) != 0
          || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 7855 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && 1) && 
#line 694 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
        return -1;
      return 4562; /* unspec_avx512fp16_fixuns_truncv8hi2_mask */

    case E_V16HImode:
      if (pattern633 (x2, 
E_V16HImode, 
E_HImode, 
E_V16HFmode) != 0
          || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 7855 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && 1) && 
#line 694 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
        return -1;
      return 4569; /* unspec_avx512fp16_fixuns_truncv16hi2_mask */

    case E_V32HImode:
      if (pattern633 (x2, 
E_V32HImode, 
E_SImode, 
E_V32HFmode) != 0
          || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 7855 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && 1) && 
#line 694 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512))))
        return -1;
      return 4577; /* unspec_avx512fp16_fixuns_truncv32hi2_mask */

    case E_V8SImode:
      switch (pattern996 (x2, 
E_V8SImode))
        {
        case 0:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 7855 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && 1) && 
#line 695 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
            return -1;
          return 4585; /* unspec_avx512fp16_fixuns_truncv8si2_mask */

        case 1:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 9558 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 5027; /* unspec_fixuns_truncv8dfv8si2_mask */

        case 2:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 9903 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL && 1) && 
#line 441 "../../gcc/config/i386/sse.md"
(TARGET_AVX))))
            return -1;
          return 5148; /* unspec_fixuns_truncv8sfv8si2_mask */

        default:
          return -1;
        }

    case E_V16SImode:
      switch (pattern995 (x2))
        {
        case 0:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 7855 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && 1) && 
#line 695 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512))))
            return -1;
          return 4593; /* unspec_avx512fp16_fixuns_truncv16si2_mask */

        case 1:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 8763 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 4874; /* unspec_fixuns_truncv16sfv16si2_mask */

        default:
          return -1;
        }

    case E_V8DImode:
      switch (pattern996 (x2, 
E_V8DImode))
        {
        case 0:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 7855 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && 1) && 
#line 696 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512))))
            return -1;
          return 4601; /* unspec_avx512fp16_fixuns_truncv8di2_mask */

        case 1:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 9689 "../../gcc/config/i386/sse.md"
(TARGET_AVX512DQ && 1) && 
#line 537 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512))))
            return -1;
          return 5060; /* unspec_fixuns_truncv8dfv8di2_mask */

        case 2:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 9732 "../../gcc/config/i386/sse.md"
(TARGET_AVX512DQ && 1) && 
#line 627 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512))))
            return -1;
          return 5120; /* unspec_fixuns_truncv8sfv8di2_mask */

        default:
          return -1;
        }

    case E_V4SImode:
      switch (pattern997 (x2, 
E_V4SImode))
        {
        case 0:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 7893 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL && 1)))
            return -1;
          return 4650; /* unspec_avx512fp16_fixuns_truncv4si2_mask */

        case 1:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 9668 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL && TARGET_AVX512F
  && (!false || TARGET_AVX10_2_256))))
            return -1;
          return 5050; /* unspec_fixuns_truncv4dfv4si2_mask */

        case 2:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 9903 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL && 1)))
            return -1;
          return 5151; /* unspec_fixuns_truncv4sfv4si2_mask */

        default:
          return -1;
        }

    case E_V4DImode:
      switch (pattern997 (x2, 
E_V4DImode))
        {
        case 0:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 7893 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL && 1)))
            return -1;
          return 4657; /* unspec_avx512fp16_fixuns_truncv4di2_mask */

        case 1:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 9689 "../../gcc/config/i386/sse.md"
(TARGET_AVX512DQ && 1) && 
#line 537 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
            return -1;
          return 5068; /* unspec_fixuns_truncv4dfv4di2_mask */

        case 2:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 9732 "../../gcc/config/i386/sse.md"
(TARGET_AVX512DQ && 1) && 
#line 627 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
            return -1;
          return 5128; /* unspec_fixuns_truncv4sfv4di2_mask */

        default:
          return -1;
        }

    case E_V2DImode:
      switch (pattern998 (x2))
        {
        case 0:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 7943 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL)))
            return -1;
          return 4678; /* unspec_avx512fp16_fixuns_truncv2di2_mask */

        case 1:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 9689 "../../gcc/config/i386/sse.md"
(TARGET_AVX512DQ && 1) && 
#line 537 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
            return -1;
          return 5073; /* unspec_fixuns_truncv2dfv2di2_mask */

        case 2:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 9753 "../../gcc/config/i386/sse.md"
(TARGET_AVX512DQ && TARGET_AVX512VL)))
            return -1;
          return 5141; /* unspec_avx512dq_fixuns_truncv2sfv2di2_mask */

        default:
          return -1;
        }

    default:
      return -1;
    }
}

 int
recog_135 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  switch (pattern482 (x2))
    {
    case 0:
      if (!(
#line 30490 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VBMI2) && 
#line 758 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 10251; /* vpshldv_v32hi_mask */

    case 1:
      if (!(
#line 30490 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VBMI2) && 
#line 758 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 10252; /* vpshldv_v16si_mask */

    case 2:
      if (!(
#line 30490 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VBMI2) && 
#line 758 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 10253; /* vpshldv_v8di_mask */

    case 3:
      if (!(
#line 30490 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VBMI2) && 
#line 759 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 10254; /* vpshldv_v16hi_mask */

    case 4:
      if (!(
#line 30490 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VBMI2) && 
#line 759 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 10255; /* vpshldv_v8si_mask */

    case 5:
      if (!(
#line 30490 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VBMI2) && 
#line 760 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 10256; /* vpshldv_v4di_mask */

    case 6:
      if (!(
#line 30490 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VBMI2) && 
#line 760 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 10257; /* vpshldv_v8hi_mask */

    case 7:
      if (!(
#line 30490 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VBMI2) && 
#line 761 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 10258; /* vpshldv_v4si_mask */

    case 8:
      if (!(
#line 30490 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VBMI2) && 
#line 761 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 10259; /* vpshldv_v2di_mask */

    case 9:
      if (!(
#line 30520 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VBMI2) && 
#line 758 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 10260; /* vpshldv_v32hi_maskz_1 */

    case 10:
      if (!(
#line 30520 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VBMI2) && 
#line 758 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 10261; /* vpshldv_v16si_maskz_1 */

    case 11:
      if (!(
#line 30520 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VBMI2) && 
#line 758 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 10262; /* vpshldv_v8di_maskz_1 */

    case 12:
      if (!(
#line 30520 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VBMI2) && 
#line 759 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 10263; /* vpshldv_v16hi_maskz_1 */

    case 13:
      if (!(
#line 30520 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VBMI2) && 
#line 759 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 10264; /* vpshldv_v8si_maskz_1 */

    case 14:
      if (!(
#line 30520 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VBMI2) && 
#line 760 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 10265; /* vpshldv_v4di_maskz_1 */

    case 15:
      if (!(
#line 30520 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VBMI2) && 
#line 760 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 10266; /* vpshldv_v8hi_maskz_1 */

    case 16:
      if (!(
#line 30520 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VBMI2) && 
#line 761 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 10267; /* vpshldv_v4si_maskz_1 */

    case 17:
      if (!(
#line 30520 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VBMI2) && 
#line 761 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 10268; /* vpshldv_v2di_maskz_1 */

    default:
      return -1;
    }
}

 int
recog_140 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XVECEXP (x3, 0, 0);
  operands[1] = x4;
  x5 = XVECEXP (x3, 0, 1);
  operands[2] = x5;
  x6 = XVECEXP (x3, 0, 2);
  operands[3] = x6;
  if (!const_0_to_255_operand (operands[3], E_SImode))
    return -1;
  x7 = XEXP (x2, 1);
  operands[4] = x7;
  x8 = XEXP (x2, 2);
  operands[5] = x8;
  switch (GET_MODE (operands[0]))
    {
    case E_V16SImode:
      if (pattern477 (x2, 
E_V16SImode, 
E_HImode) != 0
          || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 14056 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 501 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512))))
        return -1;
      return 7077; /* avx512f_alignv16si_mask */

    case E_V8SImode:
      if (pattern477 (x2, 
E_V8SImode, 
E_QImode) != 0
          || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 14056 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 501 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
        return -1;
      return 7079; /* avx512vl_alignv8si_mask */

    case E_V4SImode:
      if (pattern477 (x2, 
E_V4SImode, 
E_QImode) != 0
          || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 14056 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 501 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
        return -1;
      return 7081; /* avx512vl_alignv4si_mask */

    case E_V8DImode:
      if (pattern477 (x2, 
E_V8DImode, 
E_QImode) != 0
          || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 14056 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 502 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512))))
        return -1;
      return 7083; /* avx512f_alignv8di_mask */

    case E_V4DImode:
      if (pattern477 (x2, 
E_V4DImode, 
E_QImode) != 0
          || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 14056 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 502 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
        return -1;
      return 7085; /* avx512vl_alignv4di_mask */

    case E_V2DImode:
      if (pattern477 (x2, 
E_V2DImode, 
E_QImode) != 0
          || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 14056 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 502 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
        return -1;
      return 7087; /* avx512vl_alignv2di_mask */

    default:
      return -1;
    }
}

 int
recog_146 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12, x13;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 2);
  if (x3 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
    return -1;
  x4 = XEXP (x2, 0);
  x5 = XEXP (x4, 2);
  if (!register_operand (x5, E_QImode))
    return -1;
  x6 = XEXP (x4, 0);
  x7 = XEXP (x6, 0);
  switch (GET_CODE (x7))
    {
    case REG:
    case SUBREG:
    case MEM:
      operands[1] = x7;
      x8 = XEXP (x6, 1);
      operands[2] = x8;
      x9 = XEXP (x6, 2);
      switch (GET_CODE (x9))
        {
        case REG:
        case SUBREG:
        case MEM:
          operands[3] = x9;
          switch (pattern1213 (x2))
            {
            case 0:
              if (pattern1461 (x2, 
E_V8HFmode) != 0)
                return -1;
              x10 = XEXP (x4, 1);
              if (rtx_equal_p (x10, operands[1]))
                {
                  x11 = XEXP (x2, 1);
                  if (rtx_equal_p (x11, operands[1])
                      && (
#line 6658 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 479 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16)))
                    return 4241; /* avx512f_vmfmadd_v8hf_mask */
                }
              if (!rtx_equal_p (x10, operands[3]))
                return -1;
              x11 = XEXP (x2, 1);
              if (!rtx_equal_p (x11, operands[3])
                  || !(
#line 6678 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 479 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16)))
                return -1;
              return 4247; /* avx512f_vmfmadd_v8hf_mask3 */

            case 1:
              if (pattern1461 (x2, 
E_V4SFmode) != 0)
                return -1;
              x10 = XEXP (x4, 1);
              if (rtx_equal_p (x10, operands[1]))
                {
                  x11 = XEXP (x2, 1);
                  if (rtx_equal_p (x11, operands[1])
                      && 
#line 6658 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F))
                    return 4243; /* avx512f_vmfmadd_v4sf_mask */
                }
              if (!rtx_equal_p (x10, operands[3]))
                return -1;
              x11 = XEXP (x2, 1);
              if (!rtx_equal_p (x11, operands[3])
                  || !
#line 6678 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F))
                return -1;
              return 4249; /* avx512f_vmfmadd_v4sf_mask3 */

            case 2:
              if (pattern1461 (x2, 
E_V2DFmode) != 0)
                return -1;
              x10 = XEXP (x4, 1);
              if (rtx_equal_p (x10, operands[1]))
                {
                  x11 = XEXP (x2, 1);
                  if (rtx_equal_p (x11, operands[1])
                      && (
#line 6658 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 480 "../../gcc/config/i386/sse.md"
(TARGET_SSE2)))
                    return 4245; /* avx512f_vmfmadd_v2df_mask */
                }
              if (!rtx_equal_p (x10, operands[3]))
                return -1;
              x11 = XEXP (x2, 1);
              if (!rtx_equal_p (x11, operands[3])
                  || !(
#line 6678 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 480 "../../gcc/config/i386/sse.md"
(TARGET_SSE2)))
                return -1;
              return 4251; /* avx512f_vmfmadd_v2df_mask3 */

            case 3:
              if (pattern1542 (x2, 
E_V8HFmode) != 0
                  || !(
#line 6710 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 479 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16)))
                return -1;
              return 4253; /* avx512f_vmfmadd_v8hf_maskz_1 */

            case 4:
              if (pattern1542 (x2, 
E_V4SFmode) != 0
                  || !
#line 6710 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F))
                return -1;
              return 4255; /* avx512f_vmfmadd_v4sf_maskz_1 */

            case 5:
              if (pattern1542 (x2, 
E_V2DFmode) != 0
                  || !(
#line 6710 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 480 "../../gcc/config/i386/sse.md"
(TARGET_SSE2)))
                return -1;
              return 4257; /* avx512f_vmfmadd_v2df_maskz_1 */

            default:
              return -1;
            }

        case NEG:
          x12 = XEXP (x9, 0);
          operands[3] = x12;
          switch (pattern1213 (x2))
            {
            case 0:
              if (pattern1462 (x2, 
E_V8HFmode) != 0)
                return -1;
              x10 = XEXP (x4, 1);
              if (rtx_equal_p (x10, operands[1]))
                {
                  x11 = XEXP (x2, 1);
                  if (rtx_equal_p (x11, operands[1])
                      && (
#line 6731 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 479 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16)))
                    return 4259; /* *avx512f_vmfmsub_v8hf_mask */
                }
              if (!rtx_equal_p (x10, operands[3]))
                return -1;
              x11 = XEXP (x2, 1);
              if (!rtx_equal_p (x11, operands[3])
                  || !(
#line 6752 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 479 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16)))
                return -1;
              return 4265; /* avx512f_vmfmsub_v8hf_mask3 */

            case 1:
              if (pattern1462 (x2, 
E_V4SFmode) != 0)
                return -1;
              x10 = XEXP (x4, 1);
              if (rtx_equal_p (x10, operands[1]))
                {
                  x11 = XEXP (x2, 1);
                  if (rtx_equal_p (x11, operands[1])
                      && 
#line 6731 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F))
                    return 4261; /* *avx512f_vmfmsub_v4sf_mask */
                }
              if (!rtx_equal_p (x10, operands[3]))
                return -1;
              x11 = XEXP (x2, 1);
              if (!rtx_equal_p (x11, operands[3])
                  || !
#line 6752 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F))
                return -1;
              return 4267; /* avx512f_vmfmsub_v4sf_mask3 */

            case 2:
              if (pattern1462 (x2, 
E_V2DFmode) != 0)
                return -1;
              x10 = XEXP (x4, 1);
              if (rtx_equal_p (x10, operands[1]))
                {
                  x11 = XEXP (x2, 1);
                  if (rtx_equal_p (x11, operands[1])
                      && (
#line 6731 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 480 "../../gcc/config/i386/sse.md"
(TARGET_SSE2)))
                    return 4263; /* *avx512f_vmfmsub_v2df_mask */
                }
              if (!rtx_equal_p (x10, operands[3]))
                return -1;
              x11 = XEXP (x2, 1);
              if (!rtx_equal_p (x11, operands[3])
                  || !(
#line 6752 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 480 "../../gcc/config/i386/sse.md"
(TARGET_SSE2)))
                return -1;
              return 4269; /* avx512f_vmfmsub_v2df_mask3 */

            case 3:
              if (pattern1543 (x2, 
E_V8HFmode) != 0
                  || !(
#line 6771 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 479 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16)))
                return -1;
              return 4271; /* *avx512f_vmfmsub_v8hf_maskz_1 */

            case 4:
              if (pattern1543 (x2, 
E_V4SFmode) != 0
                  || !
#line 6771 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F))
                return -1;
              return 4273; /* *avx512f_vmfmsub_v4sf_maskz_1 */

            case 5:
              if (pattern1543 (x2, 
E_V2DFmode) != 0
                  || !(
#line 6771 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 480 "../../gcc/config/i386/sse.md"
(TARGET_SSE2)))
                return -1;
              return 4275; /* *avx512f_vmfmsub_v2df_maskz_1 */

            default:
              return -1;
            }

        default:
          return -1;
        }

    case NEG:
      x9 = XEXP (x6, 2);
      switch (GET_CODE (x9))
        {
        case REG:
        case SUBREG:
        case MEM:
          operands[3] = x9;
          switch (pattern1005 (x2))
            {
            case 0:
              x8 = XEXP (x6, 1);
              operands[2] = x8;
              x13 = XEXP (x7, 0);
              operands[1] = x13;
              if (nonimmediate_operand (operands[3], E_V8HFmode))
                {
                  x10 = XEXP (x4, 1);
                  if (rtx_equal_p (x10, operands[1]))
                    {
                      x11 = XEXP (x2, 1);
                      if (rtx_equal_p (x11, operands[1])
                          && (
#line 6792 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 479 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16)))
                        return 4277; /* avx512f_vmfnmadd_v8hf_mask */
                    }
                }
              operands[1] = x8;
              operands[2] = x13;
              if (!nonimmediate_operand (operands[3], E_V8HFmode))
                return -1;
              x10 = XEXP (x4, 1);
              if (!rtx_equal_p (x10, operands[3]))
                return -1;
              x11 = XEXP (x2, 1);
              if (!rtx_equal_p (x11, operands[3])
                  || !(
#line 6813 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 479 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16)))
                return -1;
              return 4283; /* avx512f_vmfnmadd_v8hf_mask3 */

            case 1:
              x8 = XEXP (x6, 1);
              operands[2] = x8;
              x13 = XEXP (x7, 0);
              operands[1] = x13;
              if (nonimmediate_operand (operands[3], E_V4SFmode))
                {
                  x10 = XEXP (x4, 1);
                  if (rtx_equal_p (x10, operands[1]))
                    {
                      x11 = XEXP (x2, 1);
                      if (rtx_equal_p (x11, operands[1])
                          && 
#line 6792 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F))
                        return 4279; /* avx512f_vmfnmadd_v4sf_mask */
                    }
                }
              operands[1] = x8;
              operands[2] = x13;
              if (!nonimmediate_operand (operands[3], E_V4SFmode))
                return -1;
              x10 = XEXP (x4, 1);
              if (!rtx_equal_p (x10, operands[3]))
                return -1;
              x11 = XEXP (x2, 1);
              if (!rtx_equal_p (x11, operands[3])
                  || !
#line 6813 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F))
                return -1;
              return 4285; /* avx512f_vmfnmadd_v4sf_mask3 */

            case 2:
              x8 = XEXP (x6, 1);
              operands[2] = x8;
              x13 = XEXP (x7, 0);
              operands[1] = x13;
              if (nonimmediate_operand (operands[3], E_V2DFmode))
                {
                  x10 = XEXP (x4, 1);
                  if (rtx_equal_p (x10, operands[1]))
                    {
                      x11 = XEXP (x2, 1);
                      if (rtx_equal_p (x11, operands[1])
                          && (
#line 6792 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 480 "../../gcc/config/i386/sse.md"
(TARGET_SSE2)))
                        return 4281; /* avx512f_vmfnmadd_v2df_mask */
                    }
                }
              operands[1] = x8;
              operands[2] = x13;
              if (!nonimmediate_operand (operands[3], E_V2DFmode))
                return -1;
              x10 = XEXP (x4, 1);
              if (!rtx_equal_p (x10, operands[3]))
                return -1;
              x11 = XEXP (x2, 1);
              if (!rtx_equal_p (x11, operands[3])
                  || !(
#line 6813 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 480 "../../gcc/config/i386/sse.md"
(TARGET_SSE2)))
                return -1;
              return 4287; /* avx512f_vmfnmadd_v2df_mask3 */

            case 3:
              if (pattern1544 (x2, 
E_V8HFmode) != 0
                  || !(
#line 6846 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 479 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16)))
                return -1;
              return 4289; /* avx512f_vmfnmadd_v8hf_maskz_1 */

            case 4:
              if (pattern1544 (x2, 
E_V4SFmode) != 0
                  || !
#line 6846 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F))
                return -1;
              return 4291; /* avx512f_vmfnmadd_v4sf_maskz_1 */

            case 5:
              if (pattern1544 (x2, 
E_V2DFmode) != 0
                  || !(
#line 6846 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 480 "../../gcc/config/i386/sse.md"
(TARGET_SSE2)))
                return -1;
              return 4293; /* avx512f_vmfnmadd_v2df_maskz_1 */

            default:
              return -1;
            }

        case NEG:
          x12 = XEXP (x9, 0);
          operands[3] = x12;
          switch (pattern1005 (x2))
            {
            case 0:
              x8 = XEXP (x6, 1);
              operands[2] = x8;
              if (pattern1692 (x2, 
E_V8HFmode) == 0
                  && (
#line 6868 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 479 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16)))
                return 4295; /* *avx512f_vmfnmsub_v8hf_mask */
              operands[1] = x8;
              if (pattern1693 (x2, 
E_V8HFmode) != 0
                  || !(
#line 6890 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 479 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16)))
                return -1;
              return 4301; /* *avx512f_vmfnmsub_v8hf_mask3 */

            case 1:
              x8 = XEXP (x6, 1);
              operands[2] = x8;
              if (pattern1692 (x2, 
E_V4SFmode) == 0
                  && 
#line 6868 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F))
                return 4297; /* *avx512f_vmfnmsub_v4sf_mask */
              operands[1] = x8;
              if (pattern1693 (x2, 
E_V4SFmode) != 0
                  || !
#line 6890 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F))
                return -1;
              return 4303; /* *avx512f_vmfnmsub_v4sf_mask3 */

            case 2:
              x8 = XEXP (x6, 1);
              operands[2] = x8;
              if (pattern1692 (x2, 
E_V2DFmode) == 0
                  && (
#line 6868 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 480 "../../gcc/config/i386/sse.md"
(TARGET_SSE2)))
                return 4299; /* *avx512f_vmfnmsub_v2df_mask */
              operands[1] = x8;
              if (pattern1693 (x2, 
E_V2DFmode) != 0
                  || !(
#line 6890 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 480 "../../gcc/config/i386/sse.md"
(TARGET_SSE2)))
                return -1;
              return 4305; /* *avx512f_vmfnmsub_v2df_mask3 */

            case 3:
              if (pattern1545 (x2, 
E_V8HFmode) != 0
                  || !(
#line 6910 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 479 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16)))
                return -1;
              return 4307; /* *avx512f_vmfnmsub_v8hf_maskz_1 */

            case 4:
              if (pattern1545 (x2, 
E_V4SFmode) != 0
                  || !
#line 6910 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F))
                return -1;
              return 4309; /* *avx512f_vmfnmsub_v4sf_maskz_1 */

            case 5:
              if (pattern1545 (x2, 
E_V2DFmode) != 0
                  || !(
#line 6910 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 480 "../../gcc/config/i386/sse.md"
(TARGET_SSE2)))
                return -1;
              return 4311; /* *avx512f_vmfnmsub_v2df_maskz_1 */

            default:
              return -1;
            }

        default:
          return -1;
        }

    default:
      return -1;
    }
}

 int
recog_158 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  switch (pattern638 (x2))
    {
    case 0:
      if (pattern1379 (x2, 
E_V32HFmode, 
E_SImode) != 0
          || !(
#line 6032 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && (64 == 64 || TARGET_AVX512VL) && 1) && 
#line 5914 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_EVEX512)))
        return -1;
      return 3869; /* fma_fmsub_v32hf_maskz_1 */

    case 1:
      if (pattern1379 (x2, 
E_V16HFmode, 
E_HImode) != 0
          || !(
#line 6032 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && (32 == 64 || TARGET_AVX512VL) && 1) && 
#line 5915 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL)))
        return -1;
      return 3873; /* fma_fmsub_v16hf_maskz_1 */

    case 2:
      if (pattern1379 (x2, 
E_V8HFmode, 
E_QImode) != 0
          || !(
#line 6032 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && (16 == 64 || TARGET_AVX512VL) && 1) && 
#line 5916 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL)))
        return -1;
      return 3877; /* fma_fmsub_v8hf_maskz_1 */

    case 3:
      if (pattern1379 (x2, 
E_V16SFmode, 
E_HImode) != 0
          || !(
#line 6032 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && (64 == 64 || TARGET_AVX512VL) && 1) && 
#line 5918 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 3881; /* fma_fmsub_v16sf_maskz_1 */

    case 4:
      if (pattern1379 (x2, 
E_V8SFmode, 
E_QImode) != 0
          || !(
#line 6032 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && (32 == 64 || TARGET_AVX512VL) && 1) && 
#line 5919 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 3885; /* fma_fmsub_v8sf_maskz_1 */

    case 5:
      if (pattern1379 (x2, 
E_V4SFmode, 
E_QImode) != 0
          || !(
#line 6032 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && (16 == 64 || TARGET_AVX512VL) && 1) && 
#line 5919 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 3889; /* fma_fmsub_v4sf_maskz_1 */

    case 6:
      if (pattern1379 (x2, 
E_V8DFmode, 
E_QImode) != 0
          || !(
#line 6032 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && (64 == 64 || TARGET_AVX512VL) && 1) && 
#line 5920 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 3892; /* fma_fmsub_v8df_maskz_1 */

    case 7:
      if (pattern1379 (x2, 
E_V4DFmode, 
E_QImode) != 0
          || !(
#line 6032 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && (32 == 64 || TARGET_AVX512VL) && 1) && 
#line 5921 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 3896; /* fma_fmsub_v4df_maskz_1 */

    case 8:
      if (pattern1379 (x2, 
E_V2DFmode, 
E_QImode) != 0
          || !(
#line 6032 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && (16 == 64 || TARGET_AVX512VL) && 1) && 
#line 5921 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 3900; /* fma_fmsub_v2df_maskz_1 */

    case 9:
      if (pattern1381 (x2, 
E_SImode, 
E_V32BFmode) != 0
          || !(
#line 32263 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256) && 
#line 565 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_512)))
        return -1;
      return 10651; /* avx10_2_fmsubnepbf16_v32bf_maskz_1 */

    case 10:
      if (pattern1381 (x2, 
E_HImode, 
E_V16BFmode) != 0
          || !
#line 32263 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
        return -1;
      return 10653; /* avx10_2_fmsubnepbf16_v16bf_maskz_1 */

    case 11:
      if (pattern1381 (x2, 
E_QImode, 
E_V8BFmode) != 0
          || !
#line 32263 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
        return -1;
      return 10655; /* avx10_2_fmsubnepbf16_v8bf_maskz_1 */

    case 12:
      if (pattern1383 (x2, 
E_V4SFmode) != 0
          || !
#line 6958 "../../gcc/config/i386/sse.md"
(TARGET_FMA4))
        return -1;
      return 4315; /* *fma4i_vmfmsub_v4sf */

    case 13:
      if (pattern1383 (x2, 
E_V2DFmode) != 0
          || !(
#line 6958 "../../gcc/config/i386/sse.md"
(TARGET_FMA4) && 
#line 475 "../../gcc/config/i386/sse.md"
(TARGET_SSE2)))
        return -1;
      return 4316; /* *fma4i_vmfmsub_v2df */

    case 14:
      if (pattern1294 (x2, 
E_V32HFmode, 
E_SImode) != 0)
        return -1;
      if (nonimmediate_operand (operands[1], E_V32HFmode)
          && vector_operand (operands[3], E_V32HFmode))
        {
          x3 = XEXP (x2, 1);
          if (rtx_equal_p (x3, operands[1])
              && (
#line 6075 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 525 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_EVEX512)))
            return 3901; /* avx512bw_fmsub_v32hf_mask */
        }
      if (!vector_operand (operands[1], E_V32HFmode)
          || !nonimmediate_operand (operands[3], E_V32HFmode))
        return -1;
      x3 = XEXP (x2, 1);
      if (!rtx_equal_p (x3, operands[3])
          || !(
#line 6093 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 525 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_EVEX512)))
        return -1;
      return 3916; /* avx512bw_fmsub_v32hf_mask3 */

    case 15:
      if (pattern1294 (x2, 
E_V16HFmode, 
E_HImode) != 0)
        return -1;
      if (nonimmediate_operand (operands[1], E_V16HFmode)
          && vector_operand (operands[3], E_V16HFmode))
        {
          x3 = XEXP (x2, 1);
          if (rtx_equal_p (x3, operands[1])
              && (
#line 6075 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 526 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL)))
            return 3903; /* avx512vl_fmsub_v16hf_mask */
        }
      if (!vector_operand (operands[1], E_V16HFmode)
          || !nonimmediate_operand (operands[3], E_V16HFmode))
        return -1;
      x3 = XEXP (x2, 1);
      if (!rtx_equal_p (x3, operands[3])
          || !(
#line 6093 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 526 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL)))
        return -1;
      return 3918; /* avx512vl_fmsub_v16hf_mask3 */

    case 16:
      if (pattern1294 (x2, 
E_V8HFmode, 
E_QImode) != 0)
        return -1;
      if (nonimmediate_operand (operands[1], E_V8HFmode)
          && vector_operand (operands[3], E_V8HFmode))
        {
          x3 = XEXP (x2, 1);
          if (rtx_equal_p (x3, operands[1])
              && (
#line 6075 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 527 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL)))
            return 3905; /* avx512fp16_fmsub_v8hf_mask */
        }
      if (!vector_operand (operands[1], E_V8HFmode)
          || !nonimmediate_operand (operands[3], E_V8HFmode))
        return -1;
      x3 = XEXP (x2, 1);
      if (!rtx_equal_p (x3, operands[3])
          || !(
#line 6093 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 527 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL)))
        return -1;
      return 3920; /* avx512fp16_fmsub_v8hf_mask3 */

    case 17:
      if (pattern1294 (x2, 
E_V16SFmode, 
E_HImode) != 0)
        return -1;
      if (nonimmediate_operand (operands[1], E_V16SFmode)
          && vector_operand (operands[3], E_V16SFmode))
        {
          x3 = XEXP (x2, 1);
          if (rtx_equal_p (x3, operands[1])
              && (
#line 6075 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 528 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return 3906; /* avx512f_fmsub_v16sf_mask */
        }
      if (!vector_operand (operands[1], E_V16SFmode)
          || !nonimmediate_operand (operands[3], E_V16SFmode))
        return -1;
      x3 = XEXP (x2, 1);
      if (!rtx_equal_p (x3, operands[3])
          || !(
#line 6093 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 528 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 3921; /* avx512f_fmsub_v16sf_mask3 */

    case 18:
      if (pattern1294 (x2, 
E_V8SFmode, 
E_QImode) != 0)
        return -1;
      if (nonimmediate_operand (operands[1], E_V8SFmode)
          && vector_operand (operands[3], E_V8SFmode))
        {
          x3 = XEXP (x2, 1);
          if (rtx_equal_p (x3, operands[1])
              && (
#line 6075 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 528 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return 3908; /* avx512vl_fmsub_v8sf_mask */
        }
      if (!vector_operand (operands[1], E_V8SFmode)
          || !nonimmediate_operand (operands[3], E_V8SFmode))
        return -1;
      x3 = XEXP (x2, 1);
      if (!rtx_equal_p (x3, operands[3])
          || !(
#line 6093 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 528 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 3923; /* avx512vl_fmsub_v8sf_mask3 */

    case 19:
      if (pattern1294 (x2, 
E_V4SFmode, 
E_QImode) != 0)
        return -1;
      if (nonimmediate_operand (operands[1], E_V4SFmode)
          && vector_operand (operands[3], E_V4SFmode))
        {
          x3 = XEXP (x2, 1);
          if (rtx_equal_p (x3, operands[1])
              && (
#line 6075 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 528 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return 3910; /* avx512vl_fmsub_v4sf_mask */
        }
      if (!vector_operand (operands[1], E_V4SFmode)
          || !nonimmediate_operand (operands[3], E_V4SFmode))
        return -1;
      x3 = XEXP (x2, 1);
      if (!rtx_equal_p (x3, operands[3])
          || !(
#line 6093 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 528 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 3925; /* avx512vl_fmsub_v4sf_mask3 */

    case 20:
      if (pattern1294 (x2, 
E_V8DFmode, 
E_QImode) != 0)
        return -1;
      if (nonimmediate_operand (operands[1], E_V8DFmode)
          && vector_operand (operands[3], E_V8DFmode))
        {
          x3 = XEXP (x2, 1);
          if (rtx_equal_p (x3, operands[1])
              && (
#line 6075 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 529 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return 3911; /* avx512f_fmsub_v8df_mask */
        }
      if (!vector_operand (operands[1], E_V8DFmode)
          || !nonimmediate_operand (operands[3], E_V8DFmode))
        return -1;
      x3 = XEXP (x2, 1);
      if (!rtx_equal_p (x3, operands[3])
          || !(
#line 6093 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 529 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 3926; /* avx512f_fmsub_v8df_mask3 */

    case 21:
      if (pattern1294 (x2, 
E_V4DFmode, 
E_QImode) != 0)
        return -1;
      if (nonimmediate_operand (operands[1], E_V4DFmode)
          && vector_operand (operands[3], E_V4DFmode))
        {
          x3 = XEXP (x2, 1);
          if (rtx_equal_p (x3, operands[1])
              && (
#line 6075 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 529 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return 3913; /* avx512vl_fmsub_v4df_mask */
        }
      if (!vector_operand (operands[1], E_V4DFmode)
          || !nonimmediate_operand (operands[3], E_V4DFmode))
        return -1;
      x3 = XEXP (x2, 1);
      if (!rtx_equal_p (x3, operands[3])
          || !(
#line 6093 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 529 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 3928; /* avx512vl_fmsub_v4df_mask3 */

    case 22:
      if (pattern1294 (x2, 
E_V2DFmode, 
E_QImode) != 0)
        return -1;
      if (nonimmediate_operand (operands[1], E_V2DFmode)
          && vector_operand (operands[3], E_V2DFmode))
        {
          x3 = XEXP (x2, 1);
          if (rtx_equal_p (x3, operands[1])
              && (
#line 6075 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 529 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return 3915; /* avx512vl_fmsub_v2df_mask */
        }
      if (!vector_operand (operands[1], E_V2DFmode)
          || !nonimmediate_operand (operands[3], E_V2DFmode))
        return -1;
      x3 = XEXP (x2, 1);
      if (!rtx_equal_p (x3, operands[3])
          || !(
#line 6093 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 529 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 3930; /* avx512vl_fmsub_v2df_mask3 */

    case 23:
      if (pattern1296 (x2, 
E_SImode, 
E_V32BFmode) != 0)
        return -1;
      x3 = XEXP (x2, 1);
      if (rtx_equal_p (x3, operands[1])
          && (
#line 32282 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256) && 
#line 565 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_512)))
        return 10656; /* avx10_2_fmsubnepbf16_v32bf_mask */
      if (!rtx_equal_p (x3, operands[3])
          || !(
#line 32300 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256) && 
#line 565 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_512)))
        return -1;
      return 10659; /* avx10_2_fmsubnepbf16_v32bf_mask3 */

    case 24:
      if (pattern1296 (x2, 
E_HImode, 
E_V16BFmode) != 0)
        return -1;
      x3 = XEXP (x2, 1);
      if (rtx_equal_p (x3, operands[1])
          && 
#line 32282 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
        return 10657; /* avx10_2_fmsubnepbf16_v16bf_mask */
      if (!rtx_equal_p (x3, operands[3])
          || !
#line 32300 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
        return -1;
      return 10660; /* avx10_2_fmsubnepbf16_v16bf_mask3 */

    case 25:
      if (pattern1296 (x2, 
E_QImode, 
E_V8BFmode) != 0)
        return -1;
      x3 = XEXP (x2, 1);
      if (rtx_equal_p (x3, operands[1])
          && 
#line 32282 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
        return 10658; /* avx10_2_fmsubnepbf16_v8bf_mask */
      if (!rtx_equal_p (x3, operands[3])
          || !
#line 32300 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
        return -1;
      return 10661; /* avx10_2_fmsubnepbf16_v8bf_mask3 */

    case 26:
      if (pattern1384 (x2, 
E_V8HFmode) != 0
          || !(
#line 6601 "../../gcc/config/i386/sse.md"
(TARGET_FMA || TARGET_AVX512F) && 
#line 479 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16)))
        return -1;
      return 4223; /* *fmai_fmsub_v8hf */

    case 27:
      if (pattern1384 (x2, 
E_V4SFmode) != 0
          || !
#line 6601 "../../gcc/config/i386/sse.md"
(TARGET_FMA || TARGET_AVX512F))
        return -1;
      return 4225; /* *fmai_fmsub_v4sf */

    case 28:
      if (pattern1384 (x2, 
E_V2DFmode) != 0
          || !(
#line 6601 "../../gcc/config/i386/sse.md"
(TARGET_FMA || TARGET_AVX512F) && 
#line 480 "../../gcc/config/i386/sse.md"
(TARGET_SSE2)))
        return -1;
      return 4227; /* *fmai_fmsub_v2df */

    default:
      return -1;
    }
}

 int
recog_162 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12, x13, x14, x15, x16;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  if (pattern929 (x4) != 0)
    return -1;
  x5 = XEXP (x2, 2);
  if (!register_operand (x5, E_QImode))
    return -1;
  x6 = XVECEXP (x4, 0, 0);
  switch (XWINT (x6, 0))
    {
    case 2L:
      x7 = XVECEXP (x4, 0, 1);
      if (XWINT (x7, 0) != 10L)
        return -1;
      x8 = XVECEXP (x4, 0, 2);
      if (XWINT (x8, 0) != 3L)
        return -1;
      x9 = XVECEXP (x4, 0, 3);
      if (XWINT (x9, 0) != 11L
          || pattern1728 (x2) != 0)
        return -1;
      switch (GET_MODE (operands[0]))
        {
        case E_V8SFmode:
          if (pattern1580 (x2, 
E_V8SFmode, 
E_V16SFmode) != 0
              || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 11169 "../../gcc/config/i386/sse.md"
(TARGET_AVX && TARGET_AVX512VL)))
            return -1;
          return 5247; /* avx_unpckhps256_mask */

        case E_V8SImode:
          if (pattern1580 (x2, 
E_V8SImode, 
E_V16SImode) != 0
              || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 19724 "../../gcc/config/i386/sse.md"
(TARGET_AVX2 && TARGET_AVX512VL)))
            return -1;
          return 8365; /* avx2_interleave_highv8si_mask */

        default:
          return -1;
        }

    case 0L:
      x7 = XVECEXP (x4, 0, 1);
      switch (XWINT (x7, 0))
        {
        case 8L:
          x8 = XVECEXP (x4, 0, 2);
          switch (XWINT (x8, 0))
            {
            case 1L:
              x9 = XVECEXP (x4, 0, 3);
              if (XWINT (x9, 0) != 9L)
                return -1;
              x10 = XEXP (x3, 0);
              x11 = XEXP (x10, 1);
              operands[2] = x11;
              x12 = XEXP (x2, 1);
              operands[3] = x12;
              operands[4] = x5;
              x13 = XVECEXP (x4, 0, 4);
              switch (XWINT (x13, 0))
                {
                case 4L:
                  x14 = XVECEXP (x4, 0, 5);
                  if (XWINT (x14, 0) != 12L)
                    return -1;
                  x15 = XVECEXP (x4, 0, 6);
                  if (XWINT (x15, 0) != 5L)
                    return -1;
                  x16 = XVECEXP (x4, 0, 7);
                  if (XWINT (x16, 0) != 13L)
                    return -1;
                  switch (GET_MODE (operands[0]))
                    {
                    case E_V8SFmode:
                      if (pattern1580 (x2, 
E_V8SFmode, 
E_V16SFmode) != 0
                          || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 11257 "../../gcc/config/i386/sse.md"
(TARGET_AVX && TARGET_AVX512VL)))
                        return -1;
                      return 5253; /* avx_unpcklps256_mask */

                    case E_V8SImode:
                      if (pattern1580 (x2, 
E_V8SImode, 
E_V16SImode) != 0
                          || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 19779 "../../gcc/config/i386/sse.md"
(TARGET_AVX2 && TARGET_AVX512VL)))
                        return -1;
                      return 8371; /* avx2_interleave_lowv8si_mask */

                    default:
                      return -1;
                    }

                case 2L:
                  x14 = XVECEXP (x4, 0, 5);
                  if (XWINT (x14, 0) != 10L)
                    return -1;
                  x15 = XVECEXP (x4, 0, 6);
                  if (XWINT (x15, 0) != 3L)
                    return -1;
                  x16 = XVECEXP (x4, 0, 7);
                  if (XWINT (x16, 0) != 11L)
                    return -1;
                  switch (GET_MODE (operands[0]))
                    {
                    case E_V8HImode:
                      if (pattern1581 (x2, 
E_V8HImode, 
E_V16HImode) != 0
                          || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 19704 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && TARGET_AVX512VL && TARGET_AVX512BW)))
                        return -1;
                      return 8359; /* vec_interleave_lowv8hi_mask */

                    case E_V8HFmode:
                      if (pattern1581 (x2, 
E_V8HFmode, 
E_V16HFmode) != 0
                          || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 19704 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && TARGET_AVX512VL && TARGET_AVX512BW)))
                        return -1;
                      return 8361; /* vec_interleave_lowv8hf_mask */

                    case E_V8BFmode:
                      if (pattern1581 (x2, 
E_V8BFmode, 
E_V16BFmode) != 0
                          || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 19704 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && TARGET_AVX512VL && TARGET_AVX512BW)))
                        return -1;
                      return 8363; /* vec_interleave_lowv8bf_mask */

                    default:
                      return -1;
                    }

                default:
                  return -1;
                }

            case 2L:
              x9 = XVECEXP (x4, 0, 3);
              if (XWINT (x9, 0) != 10L)
                return -1;
              x13 = XVECEXP (x4, 0, 4);
              if (XWINT (x13, 0) != 4L)
                return -1;
              x14 = XVECEXP (x4, 0, 5);
              if (XWINT (x14, 0) != 12L)
                return -1;
              x15 = XVECEXP (x4, 0, 6);
              if (XWINT (x15, 0) != 6L)
                return -1;
              x16 = XVECEXP (x4, 0, 7);
              if (XWINT (x16, 0) != 14L)
                return -1;
              switch (GET_MODE (operands[0]))
                {
                case E_V8DFmode:
                  if (pattern1635 (x2, 
E_V8DFmode, 
E_V16DFmode) != 0)
                    return -1;
                  x12 = XEXP (x2, 1);
                  operands[2] = x12;
                  if (nonimmediate_operand (operands[1], E_V8DFmode))
                    {
                      operands[3] = x5;
                      x10 = XEXP (x3, 0);
                      x11 = XEXP (x10, 1);
                      if (rtx_equal_p (x11, operands[1])
                          && (
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 13438 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
                        return 5405; /* avx512f_movddup512_mask */
                    }
                  operands[3] = x12;
                  if (!register_operand (operands[1], E_V8DFmode))
                    return -1;
                  x10 = XEXP (x3, 0);
                  x11 = XEXP (x10, 1);
                  operands[2] = x11;
                  if (!nonimmediate_operand (operands[2], E_V8DFmode))
                    return -1;
                  operands[4] = x5;
                  if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 13454 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
                    return -1;
                  return 5407; /* avx512f_unpcklpd512_mask */

                case E_V8DImode:
                  if (pattern1636 (x2, 
E_V8DImode, 
E_V16DImode) != 0
                      || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 14531 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
                    return -1;
                  return 7202; /* avx512f_interleave_lowv8di_mask */

                default:
                  return -1;
                }

            default:
              return -1;
            }

        case 0L:
          if (pattern1664 (x4) != 0
              || pattern1803 (x2, 
E_V8SFmode, 
E_V16SFmode) != 0
              || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 11396 "../../gcc/config/i386/sse.md"
(TARGET_AVX && TARGET_AVX512VL)))
            return -1;
          return 5263; /* avx_movsldup256_mask */

        default:
          return -1;
        }

    case 1L:
      x8 = XVECEXP (x4, 0, 2);
      if (XWINT (x8, 0) != 3L)
        return -1;
      x13 = XVECEXP (x4, 0, 4);
      if (XWINT (x13, 0) != 5L)
        return -1;
      x15 = XVECEXP (x4, 0, 6);
      if (XWINT (x15, 0) != 7L)
        return -1;
      x7 = XVECEXP (x4, 0, 1);
      switch (XWINT (x7, 0))
        {
        case 1L:
          x9 = XVECEXP (x4, 0, 3);
          if (XWINT (x9, 0) != 3L)
            return -1;
          x14 = XVECEXP (x4, 0, 5);
          if (XWINT (x14, 0) != 5L)
            return -1;
          x16 = XVECEXP (x4, 0, 7);
          if (XWINT (x16, 0) != 7L
              || pattern1803 (x2, 
E_V8SFmode, 
E_V16SFmode) != 0
              || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 11343 "../../gcc/config/i386/sse.md"
(TARGET_AVX && TARGET_AVX512VL)))
            return -1;
          return 5257; /* avx_movshdup256_mask */

        case 9L:
          x9 = XVECEXP (x4, 0, 3);
          if (XWINT (x9, 0) != 11L)
            return -1;
          x14 = XVECEXP (x4, 0, 5);
          if (XWINT (x14, 0) != 13L)
            return -1;
          x16 = XVECEXP (x4, 0, 7);
          if (XWINT (x16, 0) != 15L)
            return -1;
          x10 = XEXP (x3, 0);
          x11 = XEXP (x10, 1);
          operands[2] = x11;
          x12 = XEXP (x2, 1);
          operands[3] = x12;
          operands[4] = x5;
          switch (GET_MODE (operands[0]))
            {
            case E_V8DFmode:
              if (pattern1580 (x2, 
E_V8DFmode, 
E_V16DFmode) != 0
                  || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 13324 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
                return -1;
              return 5399; /* avx512f_unpckhpd512_mask */

            case E_V8DImode:
              if (pattern1580 (x2, 
E_V8DImode, 
E_V16DImode) != 0
                  || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 14481 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
                return -1;
              return 7196; /* avx512f_interleave_highv8di_mask */

            default:
              return -1;
            }

        default:
          return -1;
        }

    case 4L:
      x7 = XVECEXP (x4, 0, 1);
      if (XWINT (x7, 0) != 12L)
        return -1;
      x8 = XVECEXP (x4, 0, 2);
      if (XWINT (x8, 0) != 5L)
        return -1;
      x9 = XVECEXP (x4, 0, 3);
      if (XWINT (x9, 0) != 13L
          || pattern1728 (x2) != 0)
        return -1;
      switch (GET_MODE (operands[0]))
        {
        case E_V8HImode:
          if (pattern1581 (x2, 
E_V8HImode, 
E_V16HImode) != 0
              || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 19636 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && TARGET_AVX512VL && TARGET_AVX512BW)))
            return -1;
          return 8341; /* vec_interleave_highv8hi_mask */

        case E_V8HFmode:
          if (pattern1581 (x2, 
E_V8HFmode, 
E_V16HFmode) != 0
              || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 19636 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && TARGET_AVX512VL && TARGET_AVX512BW)))
            return -1;
          return 8343; /* vec_interleave_highv8hf_mask */

        case E_V8BFmode:
          if (pattern1581 (x2, 
E_V8BFmode, 
E_V16BFmode) != 0
              || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 19636 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && TARGET_AVX512VL && TARGET_AVX512BW)))
            return -1;
          return 8345; /* vec_interleave_highv8bf_mask */

        default:
          return -1;
        }

    default:
      return -1;
    }
}

 int
recog_180 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12, x13, x14, x15, x16, x17;
  rtx x18, x19, x20, x21, x22, x23, x24, x25;
  rtx x26, x27, x28, x29, x30, x31, x32, x33;
  rtx x34, x35, x36, x37, x38, x39, x40, x41;
  rtx x42, x43, x44, x45, x46, x47, x48, x49;
  rtx x50, x51, x52, x53, x54, x55, x56, x57;
  rtx x58, x59, x60, x61;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) != PARALLEL)
    return -1;
  x5 = XEXP (x3, 0);
  switch (GET_CODE (x5))
    {
    case VEC_CONCAT:
      x6 = XEXP (x5, 0);
      switch (GET_CODE (x6))
        {
        case REG:
        case SUBREG:
        case MEM:
          return recog_166 (x1, insn, pnum_clobbers);

        case SS_TRUNCATE:
          x7 = XEXP (x5, 1);
          if (GET_CODE (x7) != SS_TRUNCATE)
            return -1;
          x8 = XEXP (x6, 0);
          operands[1] = x8;
          x9 = XEXP (x7, 0);
          operands[2] = x9;
          x10 = XEXP (x2, 1);
          operands[3] = x10;
          x11 = XEXP (x2, 2);
          operands[4] = x11;
          switch (XVECLEN (x4, 0))
            {
            case 32:
              if (pattern672 (x4, 
3, 
2, 
1) != 0
                  || pattern1301 (x4) != 0
                  || pattern1781 (x4, 
23, 
22, 
21, 
20) != 0)
                return -1;
              x12 = XVECEXP (x4, 0, 20);
              if (GET_CODE (x12) != CONST_INT)
                return -1;
              x13 = XVECEXP (x4, 0, 21);
              if (GET_CODE (x13) != CONST_INT)
                return -1;
              x14 = XVECEXP (x4, 0, 22);
              if (GET_CODE (x14) != CONST_INT)
                return -1;
              x15 = XVECEXP (x4, 0, 23);
              if (GET_CODE (x15) != CONST_INT)
                return -1;
              x16 = XVECEXP (x4, 0, 24);
              if (GET_CODE (x16) != CONST_INT)
                return -1;
              x17 = XVECEXP (x4, 0, 25);
              if (GET_CODE (x17) != CONST_INT)
                return -1;
              x18 = XVECEXP (x4, 0, 26);
              if (GET_CODE (x18) != CONST_INT)
                return -1;
              x19 = XVECEXP (x4, 0, 27);
              if (GET_CODE (x19) != CONST_INT
                  || pattern1876 (x4, 
31, 
30, 
29, 
28) != 0
                  || !register_operand (operands[4], E_SImode))
                return -1;
              x20 = XVECEXP (x4, 0, 4);
              switch (XWINT (x20, 0))
                {
                case 4L:
                  x21 = XVECEXP (x4, 0, 5);
                  if (XWINT (x21, 0) != 5L)
                    return -1;
                  x22 = XVECEXP (x4, 0, 6);
                  if (XWINT (x22, 0) != 6L)
                    return -1;
                  x23 = XVECEXP (x4, 0, 7);
                  if (XWINT (x23, 0) != 7L)
                    return -1;
                  x24 = XVECEXP (x4, 0, 8);
                  if (XWINT (x24, 0) != 16L)
                    return -1;
                  x25 = XVECEXP (x4, 0, 9);
                  if (XWINT (x25, 0) != 17L)
                    return -1;
                  x26 = XVECEXP (x4, 0, 10);
                  if (XWINT (x26, 0) != 18L)
                    return -1;
                  x27 = XVECEXP (x4, 0, 11);
                  if (XWINT (x27, 0) != 19L
                      || XWINT (x12, 0) != 12L
                      || XWINT (x13, 0) != 13L
                      || XWINT (x14, 0) != 14L
                      || XWINT (x15, 0) != 15L
                      || XWINT (x16, 0) != 24L
                      || XWINT (x17, 0) != 25L
                      || XWINT (x18, 0) != 26L
                      || XWINT (x19, 0) != 27L
                      || pattern1884 (x2, 
E_V32QImode, 
E_V16HImode, 
E_V16QImode) != 0
                      || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 19246 "../../gcc/config/i386/sse.md"
(TARGET_AVX2 && TARGET_AVX512VL && TARGET_AVX512BW)))
                    return -1;
                  return 8301; /* avx2_packsswb_mask */

                case 16L:
                  x21 = XVECEXP (x4, 0, 5);
                  if (XWINT (x21, 0) != 17L)
                    return -1;
                  x22 = XVECEXP (x4, 0, 6);
                  if (XWINT (x22, 0) != 18L)
                    return -1;
                  x23 = XVECEXP (x4, 0, 7);
                  if (XWINT (x23, 0) != 19L)
                    return -1;
                  x24 = XVECEXP (x4, 0, 8);
                  if (XWINT (x24, 0) != 4L)
                    return -1;
                  x25 = XVECEXP (x4, 0, 9);
                  if (XWINT (x25, 0) != 5L)
                    return -1;
                  x26 = XVECEXP (x4, 0, 10);
                  if (XWINT (x26, 0) != 6L)
                    return -1;
                  x27 = XVECEXP (x4, 0, 11);
                  if (XWINT (x27, 0) != 7L
                      || XWINT (x12, 0) != 24L
                      || XWINT (x13, 0) != 25L
                      || XWINT (x14, 0) != 26L
                      || XWINT (x15, 0) != 27L
                      || XWINT (x16, 0) != 12L
                      || XWINT (x17, 0) != 13L
                      || XWINT (x18, 0) != 14L
                      || XWINT (x19, 0) != 15L
                      || pattern1884 (x2, 
E_V32HImode, 
E_V16SImode, 
E_V16HImode) != 0
                      || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 19362 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512)))
                    return -1;
                  return 8309; /* avx512bw_packssdw_mask */

                default:
                  return -1;
                }

            case 64:
              if (pattern671 (x4) != 0
                  || pattern1303 (x4, 
35, 
34, 
33, 
32) != 0
                  || pattern1781 (x4, 
39, 
38, 
37, 
36) != 0)
                return -1;
              x12 = XVECEXP (x4, 0, 20);
              if (x12 != const_int_rtx[MAX_SAVED_CONST_INT + 12])
                return -1;
              x13 = XVECEXP (x4, 0, 21);
              if (x13 != const_int_rtx[MAX_SAVED_CONST_INT + 13])
                return -1;
              x14 = XVECEXP (x4, 0, 22);
              if (x14 != const_int_rtx[MAX_SAVED_CONST_INT + 14])
                return -1;
              x15 = XVECEXP (x4, 0, 23);
              if (x15 != const_int_rtx[MAX_SAVED_CONST_INT + 15])
                return -1;
              x16 = XVECEXP (x4, 0, 24);
              if (x16 != const_int_rtx[MAX_SAVED_CONST_INT + 40])
                return -1;
              x17 = XVECEXP (x4, 0, 25);
              if (x17 != const_int_rtx[MAX_SAVED_CONST_INT + 41])
                return -1;
              x18 = XVECEXP (x4, 0, 26);
              if (x18 != const_int_rtx[MAX_SAVED_CONST_INT + 42])
                return -1;
              x19 = XVECEXP (x4, 0, 27);
              if (x19 != const_int_rtx[MAX_SAVED_CONST_INT + 43]
                  || pattern1876 (x4, 
47, 
46, 
45, 
44) != 0)
                return -1;
              x28 = XVECEXP (x4, 0, 32);
              if (x28 != const_int_rtx[MAX_SAVED_CONST_INT + 16])
                return -1;
              x29 = XVECEXP (x4, 0, 33);
              if (x29 != const_int_rtx[MAX_SAVED_CONST_INT + 17])
                return -1;
              x30 = XVECEXP (x4, 0, 34);
              if (x30 != const_int_rtx[MAX_SAVED_CONST_INT + 18])
                return -1;
              x31 = XVECEXP (x4, 0, 35);
              if (x31 != const_int_rtx[MAX_SAVED_CONST_INT + 19])
                return -1;
              x32 = XVECEXP (x4, 0, 36);
              if (x32 != const_int_rtx[MAX_SAVED_CONST_INT + 20])
                return -1;
              x33 = XVECEXP (x4, 0, 37);
              if (x33 != const_int_rtx[MAX_SAVED_CONST_INT + 21])
                return -1;
              x34 = XVECEXP (x4, 0, 38);
              if (x34 != const_int_rtx[MAX_SAVED_CONST_INT + 22])
                return -1;
              x35 = XVECEXP (x4, 0, 39);
              if (x35 != const_int_rtx[MAX_SAVED_CONST_INT + 23])
                return -1;
              x36 = XVECEXP (x4, 0, 40);
              if (x36 != const_int_rtx[MAX_SAVED_CONST_INT + 48])
                return -1;
              x37 = XVECEXP (x4, 0, 41);
              if (x37 != const_int_rtx[MAX_SAVED_CONST_INT + 49])
                return -1;
              x38 = XVECEXP (x4, 0, 42);
              if (x38 != const_int_rtx[MAX_SAVED_CONST_INT + 50])
                return -1;
              x39 = XVECEXP (x4, 0, 43);
              if (x39 != const_int_rtx[MAX_SAVED_CONST_INT + 51])
                return -1;
              x40 = XVECEXP (x4, 0, 44);
              if (x40 != const_int_rtx[MAX_SAVED_CONST_INT + 52])
                return -1;
              x41 = XVECEXP (x4, 0, 45);
              if (x41 != const_int_rtx[MAX_SAVED_CONST_INT + 53])
                return -1;
              x42 = XVECEXP (x4, 0, 46);
              if (x42 != const_int_rtx[MAX_SAVED_CONST_INT + 54])
                return -1;
              x43 = XVECEXP (x4, 0, 47);
              if (x43 != const_int_rtx[MAX_SAVED_CONST_INT + 55])
                return -1;
              x44 = XVECEXP (x4, 0, 48);
              if (x44 != const_int_rtx[MAX_SAVED_CONST_INT + 24])
                return -1;
              x45 = XVECEXP (x4, 0, 49);
              if (x45 != const_int_rtx[MAX_SAVED_CONST_INT + 25])
                return -1;
              x46 = XVECEXP (x4, 0, 50);
              if (x46 != const_int_rtx[MAX_SAVED_CONST_INT + 26])
                return -1;
              x47 = XVECEXP (x4, 0, 51);
              if (x47 != const_int_rtx[MAX_SAVED_CONST_INT + 27])
                return -1;
              x48 = XVECEXP (x4, 0, 52);
              if (x48 != const_int_rtx[MAX_SAVED_CONST_INT + 28])
                return -1;
              x49 = XVECEXP (x4, 0, 53);
              if (x49 != const_int_rtx[MAX_SAVED_CONST_INT + 29])
                return -1;
              x50 = XVECEXP (x4, 0, 54);
              if (x50 != const_int_rtx[MAX_SAVED_CONST_INT + 30])
                return -1;
              x51 = XVECEXP (x4, 0, 55);
              if (x51 != const_int_rtx[MAX_SAVED_CONST_INT + 31])
                return -1;
              x52 = XVECEXP (x4, 0, 56);
              if (x52 != const_int_rtx[MAX_SAVED_CONST_INT + 56])
                return -1;
              x53 = XVECEXP (x4, 0, 57);
              if (x53 != const_int_rtx[MAX_SAVED_CONST_INT + 57])
                return -1;
              x54 = XVECEXP (x4, 0, 58);
              if (x54 != const_int_rtx[MAX_SAVED_CONST_INT + 58])
                return -1;
              x55 = XVECEXP (x4, 0, 59);
              if (x55 != const_int_rtx[MAX_SAVED_CONST_INT + 59])
                return -1;
              x56 = XVECEXP (x4, 0, 60);
              if (x56 != const_int_rtx[MAX_SAVED_CONST_INT + 60])
                return -1;
              x57 = XVECEXP (x4, 0, 61);
              if (x57 != const_int_rtx[MAX_SAVED_CONST_INT + 61])
                return -1;
              x58 = XVECEXP (x4, 0, 62);
              if (x58 != const_int_rtx[MAX_SAVED_CONST_INT + 62])
                return -1;
              x59 = XVECEXP (x4, 0, 63);
              if (x59 != const_int_rtx[MAX_SAVED_CONST_INT + 63]
                  || pattern1825 (x2, 
E_DImode, 
E_V64QImode, 
E_V32HImode, 
E_V32QImode) != 0
                  || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 19293 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512)))
                return -1;
              return 8303; /* avx512bw_packsswb_mask */

            case 16:
              if (pattern791 (x4, 
10, 
9, 
8) != 0
                  || pattern1485 (x4, 
7, 
6, 
5, 
4, 
11) != 0
                  || pattern1825 (x2, 
E_HImode, 
E_V16HImode, 
E_V8SImode, 
E_V8HImode) != 0
                  || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 19332 "../../gcc/config/i386/sse.md"
(TARGET_AVX2 && TARGET_AVX512VL && TARGET_AVX512BW)))
                return -1;
              return 8307; /* avx2_packssdw_mask */

            default:
              return -1;
            }

        default:
          return -1;
        }

    case REG:
    case SUBREG:
    case MEM:
      operands[1] = x5;
      switch (XVECLEN (x4, 0))
        {
        case 2:
          res = recog_167 (x1, insn, pnum_clobbers);
          if (res >= 0)
            return res;
          break;

        case 4:
          res = recog_169 (x1, insn, pnum_clobbers);
          if (res >= 0)
            return res;
          break;

        case 8:
          res = recog_173 (x1, insn, pnum_clobbers);
          if (res >= 0)
            return res;
          break;

        case 16:
          res = recog_176 (x1, insn, pnum_clobbers);
          if (res >= 0)
            return res;
          break;

        default:
          break;
        }
      if (XVECLEN (x4, 0) >= 1)
        {
          operands[2] = x4;
          x60 = XVECEXP (x4, 0, 0);
          operands[3] = x60;
          if (const_int_operand (operands[3], E_VOIDmode))
            {
              x10 = XEXP (x2, 1);
              operands[4] = x10;
              x11 = XEXP (x2, 2);
              operands[5] = x11;
              switch (GET_MODE (operands[0]))
                {
                case E_V16SFmode:
                  if (pattern1394 (x2, 
E_V16SFmode, 
E_HImode) == 0
                      && (
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 27497 "../../gcc/config/i386/sse.md"
(TARGET_AVX && (64 == 64 || TARGET_AVX512VL)
   && avx_vpermilp_parallel (operands[2], V16SFmode)) && 
#line 375 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512))))
                    return 9155; /* *avx512f_vpermilpv16sf_mask */
                  break;

                case E_V8SFmode:
                  if (pattern1394 (x2, 
E_V8SFmode, 
E_QImode) == 0
                      && (
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 27497 "../../gcc/config/i386/sse.md"
(TARGET_AVX && (32 == 64 || TARGET_AVX512VL)
   && avx_vpermilp_parallel (operands[2], V8SFmode)) && 
#line 375 "../../gcc/config/i386/sse.md"
(TARGET_AVX))))
                    return 9157; /* *avx_vpermilpv8sf_mask */
                  break;

                case E_V4SFmode:
                  if (pattern1394 (x2, 
E_V4SFmode, 
E_QImode) == 0
                      && (
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 27497 "../../gcc/config/i386/sse.md"
(TARGET_AVX && (16 == 64 || TARGET_AVX512VL)
   && avx_vpermilp_parallel (operands[2], V4SFmode))))
                    return 9159; /* *avx_vpermilpv4sf_mask */
                  break;

                case E_V8DFmode:
                  if (pattern1394 (x2, 
E_V8DFmode, 
E_QImode) == 0
                      && (
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 27497 "../../gcc/config/i386/sse.md"
(TARGET_AVX && (64 == 64 || TARGET_AVX512VL)
   && avx_vpermilp_parallel (operands[2], V8DFmode)) && 
#line 376 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512))))
                    return 9161; /* *avx512f_vpermilpv8df_mask */
                  break;

                case E_V4DFmode:
                  if (pattern1394 (x2, 
E_V4DFmode, 
E_QImode) == 0
                      && (
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 27497 "../../gcc/config/i386/sse.md"
(TARGET_AVX && (32 == 64 || TARGET_AVX512VL)
   && avx_vpermilp_parallel (operands[2], V4DFmode)) && 
#line 376 "../../gcc/config/i386/sse.md"
(TARGET_AVX))))
                    return 9163; /* *avx_vpermilpv4df_mask */
                  break;

                case E_V2DFmode:
                  if (pattern1394 (x2, 
E_V2DFmode, 
E_QImode) == 0
                      && (
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 27497 "../../gcc/config/i386/sse.md"
(TARGET_AVX && (16 == 64 || TARGET_AVX512VL)
   && avx_vpermilp_parallel (operands[2], V2DFmode)) && 
#line 377 "../../gcc/config/i386/sse.md"
(TARGET_SSE2))))
                    return 9165; /* *avx_vpermilpv2df_mask */
                  break;

                default:
                  break;
                }
            }
        }
      x11 = XEXP (x2, 2);
      if (!register_operand (x11, E_QImode))
        return -1;
      switch (XVECLEN (x4, 0))
        {
        case 4:
          if (pattern901 (x2, 
E_V4DFmode) != 0)
            return -1;
          x10 = XEXP (x2, 1);
          operands[6] = x10;
          if (!nonimm_or_0_operand (operands[6], E_V4DFmode))
            return -1;
          operands[7] = x11;
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 27551 "../../gcc/config/i386/sse.md"
(TARGET_AVX2 && (32 == 64 || TARGET_AVX512VL))))
            return -1;
          return 9169; /* avx2_permv4df_1_mask */

        case 8:
          if (pattern901 (x2, 
E_V8DFmode) != 0)
            return -1;
          x20 = XVECEXP (x4, 0, 4);
          operands[6] = x20;
          if (!const_4_to_7_operand (operands[6], E_VOIDmode))
            return -1;
          x21 = XVECEXP (x4, 0, 5);
          operands[7] = x21;
          if (!const_4_to_7_operand (operands[7], E_VOIDmode))
            return -1;
          x22 = XVECEXP (x4, 0, 6);
          operands[8] = x22;
          if (!const_4_to_7_operand (operands[8], E_VOIDmode))
            return -1;
          x23 = XVECEXP (x4, 0, 7);
          operands[9] = x23;
          if (!const_4_to_7_operand (operands[9], E_VOIDmode))
            return -1;
          x10 = XEXP (x2, 1);
          operands[10] = x10;
          if (!nonimm_or_0_operand (operands[10], E_V8DFmode))
            return -1;
          operands[11] = x11;
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 27622 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && (64 == 64 || TARGET_AVX512VL)
   && (INTVAL (operands[2]) == (INTVAL (operands[6]) - 4)
       && INTVAL (operands[3]) == (INTVAL (operands[7]) - 4)
       && INTVAL (operands[4]) == (INTVAL (operands[8]) - 4)
       && INTVAL (operands[5]) == (INTVAL (operands[9]) - 4))) && 
#line 718 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512))))
            return -1;
          return 9171; /* avx512f_permv8df_1_mask */

        default:
          return -1;
        }

    case UNSPEC:
      if (XVECLEN (x5, 0) != 1
          || XINT (x5, 1) != 149
          || GET_MODE (x5) != E_V8SFmode
          || XVECLEN (x4, 0) != 4
          || pattern672 (x4, 
3, 
2, 
1) != 0
          || !register_operand (operands[0], E_V4SFmode)
          || GET_MODE (x2) != E_V4SFmode
          || GET_MODE (x3) != E_V4SFmode)
        return -1;
      x61 = XVECEXP (x5, 0, 0);
      operands[1] = x61;
      if (!register_operand (operands[1], E_V8HImode))
        return -1;
      x10 = XEXP (x2, 1);
      operands[2] = x10;
      if (!nonimm_or_0_operand (operands[2], E_V4SFmode))
        return -1;
      x11 = XEXP (x2, 2);
      operands[3] = x11;
      if (!register_operand (operands[3], E_QImode)
          || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 29076 "../../gcc/config/i386/sse.md"
(TARGET_F16C || TARGET_AVX512VL)))
        return -1;
      return 9644; /* vcvtph2ps_mask */

    default:
      return -1;
    }
}

 int
recog_193 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  switch (pattern148 (x2))
    {
    case 0:
      if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 24117 "../../gcc/config/i386/sse.md"
(TARGET_AVX2 && TARGET_AVX512BW && TARGET_AVX512VL)))
        return -1;
      return 8753; /* avx2_zero_extendv16qiv16hi2_mask */

    case 1:
      if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 24171 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512)))
        return -1;
      return 8761; /* avx512bw_zero_extendv32qiv32hi2_mask */

    case 2:
      if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 24241 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1 && TARGET_AVX512BW && TARGET_AVX512VL)))
        return -1;
      return 8773; /* *sse4_1_zero_extendv8qiv8hi2_mask_1 */

    case 3:
      if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 24366 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
        return -1;
      return 8785; /* avx512f_zero_extendv16qiv16si2_mask */

    case 4:
      if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 24509 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
        return -1;
      return 8813; /* avx512f_zero_extendv16hiv16si2_mask */

    case 5:
      if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 24398 "../../gcc/config/i386/sse.md"
(TARGET_AVX2 && TARGET_AVX512VL)))
        return -1;
      return 8793; /* *avx2_zero_extendv8qiv8si2_mask_1 */

    case 6:
      if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 24562 "../../gcc/config/i386/sse.md"
(TARGET_AVX2 && TARGET_AVX512VL)))
        return -1;
      return 8821; /* avx2_zero_extendv8hiv8si2_mask */

    case 7:
      if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 24459 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1 && TARGET_AVX512VL)))
        return -1;
      return 8805; /* *sse4_1_zero_extendv4qiv4si2_mask_1 */

    case 8:
      if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 24632 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1 && TARGET_AVX512VL)))
        return -1;
      return 8833; /* *sse4_1_zero_extendv4hiv4si2_mask_1 */

    case 9:
      if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 24763 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
        return -1;
      return 8849; /* *avx512f_zero_extendv8qiv8di2_mask_1 */

    case 10:
      if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 24934 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
        return -1;
      return 8880; /* avx512f_zero_extendv8hiv8di2_mask */

    case 11:
      if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 25071 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
        return -1;
      return 8908; /* avx512f_zero_extendv8siv8di2_mask */

    case 12:
      if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 24821 "../../gcc/config/i386/sse.md"
(TARGET_AVX2 && TARGET_AVX512VL)))
        return -1;
      return 8861; /* *avx2_zero_extendv4qiv4di2_mask_1 */

    case 13:
      if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 24964 "../../gcc/config/i386/sse.md"
(TARGET_AVX2 && TARGET_AVX512VL)))
        return -1;
      return 8888; /* *avx2_zero_extendv4hiv4di2_mask_1 */

    case 14:
      if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 25122 "../../gcc/config/i386/sse.md"
(TARGET_AVX2 && TARGET_AVX512VL)))
        return -1;
      return 8914; /* avx2_zero_extendv4siv4di2_mask */

    case 15:
      if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 24883 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1 && TARGET_AVX512VL)))
        return -1;
      return 8873; /* *sse4_1_zero_extendv2qiv2di2_mask_1 */

    case 16:
      if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 25022 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1 && TARGET_AVX512VL)))
        return -1;
      return 8900; /* *sse4_1_zero_extendv2hiv2di2_mask_1 */

    case 17:
      if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 25188 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1 && TARGET_AVX512VL)))
        return -1;
      return 8924; /* *sse4_1_zero_extendv2siv2di2_mask_1 */

    case 18:
      x3 = XEXP (x2, 0);
      x4 = XEXP (x3, 0);
      x5 = XEXP (x4, 0);
      operands[1] = x5;
      switch (pattern903 (x2))
        {
        case 0:
          if ((
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 24229 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1 && TARGET_AVX512BW && TARGET_AVX512VL)))
            return 8769; /* sse4_1_zero_extendv8qiv8hi2_mask */
          break;

        case 1:
          if ((
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 24387 "../../gcc/config/i386/sse.md"
(TARGET_AVX2 && TARGET_AVX512VL)))
            return 8789; /* avx2_zero_extendv8qiv8si2_mask */
          break;

        case 2:
          if ((
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 24753 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return 8845; /* avx512f_zero_extendv8qiv8di2_mask */
          break;

        case 3:
          if ((
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 24447 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1 && TARGET_AVX512VL)))
            return 8801; /* sse4_1_zero_extendv4qiv4si2_mask */
          break;

        case 4:
          if ((
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 24620 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1 && TARGET_AVX512VL)))
            return 8829; /* sse4_1_zero_extendv4hiv4si2_mask */
          break;

        case 5:
          if ((
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 24810 "../../gcc/config/i386/sse.md"
(TARGET_AVX2 && TARGET_AVX512VL)))
            return 8857; /* avx2_zero_extendv4qiv4di2_mask */
          break;

        case 6:
          if ((
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 24953 "../../gcc/config/i386/sse.md"
(TARGET_AVX2 && TARGET_AVX512VL)))
            return 8884; /* avx2_zero_extendv4hiv4di2_mask */
          break;

        case 7:
          if ((
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 24871 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1 && TARGET_AVX512VL)))
            return 8869; /* sse4_1_zero_extendv2qiv2di2_mask */
          break;

        case 8:
          if ((
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 25010 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1 && TARGET_AVX512VL)))
            return 8896; /* sse4_1_zero_extendv2hiv2di2_mask */
          break;

        case 9:
          if ((
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 25176 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1 && TARGET_AVX512VL)))
            return 8920; /* sse4_1_zero_extendv2siv2di2_mask */
          break;

        default:
          break;
        }
      if (GET_CODE (x5) != SUBREG)
        return -1;
      switch (pattern906 (x2))
        {
        case 0:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 24265 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1 && TARGET_AVX512BW && TARGET_AVX512VL
   && ix86_pre_reload_split ())))
            return -1;
          return 8777; /* *sse4_1_zero_extendv8qiv8hi2_mask_2 */

        case 1:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 24417 "../../gcc/config/i386/sse.md"
(TARGET_AVX2 && TARGET_AVX512VL
   && ix86_pre_reload_split ())))
            return -1;
          return 8797; /* *avx2_zero_extendv8qiv8si2_mask_2 */

        case 2:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 24781 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512 && ix86_pre_reload_split ())))
            return -1;
          return 8853; /* *avx512f_zero_extendv8qiv8di2_mask_2 */

        case 3:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 24651 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1 && TARGET_AVX512VL
   && ix86_pre_reload_split ())))
            return -1;
          return 8837; /* *sse4_1_zero_extendv4hiv4si2_mask_2 */

        case 4:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 24981 "../../gcc/config/i386/sse.md"
(TARGET_AVX2 && TARGET_AVX512VL
   && ix86_pre_reload_split ())))
            return -1;
          return 8892; /* *avx2_zero_extendv4hiv4di2_mask_2 */

        case 5:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 25206 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1 && TARGET_AVX512VL
   && ix86_pre_reload_split ())))
            return -1;
          return 8928; /* *sse4_1_zero_extendv2siv2di2_mask_2 */

        case 6:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 24482 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1 && TARGET_AVX512VL
   && ix86_pre_reload_split ())))
            return -1;
          return 8809; /* *sse4_1_zero_extendv4qiv4si2_mask_2 */

        case 7:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 24842 "../../gcc/config/i386/sse.md"
(TARGET_AVX2 && TARGET_AVX512VL
   && ix86_pre_reload_split ())))
            return -1;
          return 8865; /* *avx2_zero_extendv4qiv4di2_mask_2 */

        case 8:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 25044 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1 && TARGET_AVX512VL
   && ix86_pre_reload_split ())))
            return -1;
          return 8904; /* *sse4_1_zero_extendv2hiv2di2_mask_2 */

        default:
          return -1;
        }

    default:
      return -1;
    }
}

 int
recog_203 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  operands[1] = x4;
  x5 = XEXP (x3, 1);
  operands[2] = x5;
  x6 = XEXP (x2, 2);
  switch (GET_CODE (x6))
    {
    case CONST_INT:
      switch (pattern131 (x2))
        {
        case 0:
          if (!(
#line 2801 "../../gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 479 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16)))
            return -1;
          return 2825; /* avx512fp16_vmdivv8hf3 */

        case 1:
          if (!
#line 2801 "../../gcc/config/i386/sse.md"
(TARGET_SSE))
            return -1;
          return 2833; /* sse_vmdivv4sf3 */

        case 2:
          if (!(
#line 2801 "../../gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 480 "../../gcc/config/i386/sse.md"
(TARGET_SSE2)))
            return -1;
          return 2841; /* sse2_vmdivv2df3 */

        default:
          return -1;
        }

    case REG:
    case SUBREG:
      operands[4] = x6;
      x7 = XEXP (x2, 1);
      operands[3] = x7;
      switch (GET_MODE (operands[0]))
        {
        case E_V32HFmode:
          if (pattern1011 (x2, 
E_V32HFmode, 
E_SImode) != 0
              || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 2899 "../../gcc/config/i386/sse.md"
(TARGET_SSE && (64 == 64 || TARGET_AVX512VL) && 1) && 
#line 390 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_EVEX512))))
            return -1;
          return 2847; /* avx512fp16_divv32hf3_mask */

        case E_V16HFmode:
          if (pattern1011 (x2, 
E_V16HFmode, 
E_HImode) != 0
              || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 2899 "../../gcc/config/i386/sse.md"
(TARGET_SSE && (32 == 64 || TARGET_AVX512VL) && 1) && 
#line 391 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL))))
            return -1;
          return 2851; /* avx512fp16_divv16hf3_mask */

        case E_V8HFmode:
          if (pattern1011 (x2, 
E_V8HFmode, 
E_QImode) != 0
              || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 2899 "../../gcc/config/i386/sse.md"
(TARGET_SSE && (16 == 64 || TARGET_AVX512VL) && 1) && 
#line 392 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL))))
            return -1;
          return 2854; /* avx512fp16_divv8hf3_mask */

        case E_V16SFmode:
          if (pattern1011 (x2, 
E_V16SFmode, 
E_HImode) != 0
              || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 2899 "../../gcc/config/i386/sse.md"
(TARGET_SSE && (64 == 64 || TARGET_AVX512VL) && 1) && 
#line 393 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512))))
            return -1;
          return 2857; /* avx512f_divv16sf3_mask */

        case E_V8SFmode:
          if (pattern1011 (x2, 
E_V8SFmode, 
E_QImode) != 0
              || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 2899 "../../gcc/config/i386/sse.md"
(TARGET_SSE && (32 == 64 || TARGET_AVX512VL) && 1) && 
#line 393 "../../gcc/config/i386/sse.md"
(TARGET_AVX))))
            return -1;
          return 2861; /* avx_divv8sf3_mask */

        case E_V4SFmode:
          if (pattern1011 (x2, 
E_V4SFmode, 
E_QImode) != 0
              || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 2899 "../../gcc/config/i386/sse.md"
(TARGET_SSE && (16 == 64 || TARGET_AVX512VL) && 1)))
            return -1;
          return 2864; /* sse_divv4sf3_mask */

        case E_V8DFmode:
          if (pattern1011 (x2, 
E_V8DFmode, 
E_QImode) != 0
              || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 2899 "../../gcc/config/i386/sse.md"
(TARGET_SSE && (64 == 64 || TARGET_AVX512VL) && 1) && 
#line 394 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512))))
            return -1;
          return 2867; /* avx512f_divv8df3_mask */

        case E_V4DFmode:
          if (pattern1011 (x2, 
E_V4DFmode, 
E_QImode) != 0
              || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 2899 "../../gcc/config/i386/sse.md"
(TARGET_SSE && (32 == 64 || TARGET_AVX512VL) && 1) && 
#line 394 "../../gcc/config/i386/sse.md"
(TARGET_AVX))))
            return -1;
          return 2871; /* avx_divv4df3_mask */

        case E_V2DFmode:
          if (pattern1011 (x2, 
E_V2DFmode, 
E_QImode) != 0
              || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 2899 "../../gcc/config/i386/sse.md"
(TARGET_SSE && (16 == 64 || TARGET_AVX512VL) && 1) && 
#line 395 "../../gcc/config/i386/sse.md"
(TARGET_SSE2))))
            return -1;
          return 2874; /* sse2_divv2df3_mask */

        case E_V32BFmode:
          if (pattern129 (x2, 
E_V32BFmode, 
E_SImode) != 0
              || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 32110 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256) && 
#line 565 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_512))))
            return -1;
          return 10609; /* avx10_2_divnepbf16_v32bf_mask */

        case E_V16BFmode:
          if (pattern129 (x2, 
E_V16BFmode, 
E_HImode) != 0
              || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 32110 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256)))
            return -1;
          return 10617; /* avx10_2_divnepbf16_v16bf_mask */

        case E_V8BFmode:
          if (pattern129 (x2, 
E_V8BFmode, 
E_QImode) != 0
              || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 32110 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256)))
            return -1;
          return 10625; /* avx10_2_divnepbf16_v8bf_mask */

        default:
          return -1;
        }

    default:
      return -1;
    }
}

 int
recog_213 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XVECEXP (x2, 0, 0);
  operands[1] = x3;
  switch (GET_MODE (operands[0]))
    {
    case E_V8SFmode:
      if (!register_operand (operands[0], E_V8SFmode)
          || GET_MODE (x2) != E_V8SFmode
          || !vector_operand (operands[1], E_V8SFmode)
          || !(
#line 3135 "../../gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 441 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
        return -1;
      return 2958; /* avx_rsqrtv8sf2 */

    case E_V4SFmode:
      if (!register_operand (operands[0], E_V4SFmode)
          || GET_MODE (x2) != E_V4SFmode
          || !vector_operand (operands[1], E_V4SFmode)
          || !
#line 3135 "../../gcc/config/i386/sse.md"
(TARGET_SSE))
        return -1;
      return 2959; /* sse_rsqrtv4sf2 */

    case E_V32HFmode:
      if (!register_operand (operands[0], E_V32HFmode)
          || GET_MODE (x2) != E_V32HFmode
          || !vector_operand (operands[1], E_V32HFmode)
          || !(
#line 3147 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16) && 
#line 555 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 2960; /* avx512fp16_rsqrtv32hf2 */

    case E_V16HFmode:
      if (!register_operand (operands[0], E_V16HFmode)
          || GET_MODE (x2) != E_V16HFmode
          || !vector_operand (operands[1], E_V16HFmode)
          || !(
#line 3147 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16) && 
#line 555 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 2962; /* avx512fp16_rsqrtv16hf2 */

    case E_V8HFmode:
      if (!register_operand (operands[0], E_V8HFmode)
          || GET_MODE (x2) != E_V8HFmode
          || !vector_operand (operands[1], E_V8HFmode)
          || !(
#line 3147 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16) && 
#line 555 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 2964; /* avx512fp16_rsqrtv8hf2 */

    case E_V32BFmode:
      if (!register_operand (operands[0], E_V32BFmode)
          || GET_MODE (x2) != E_V32BFmode
          || !nonimmediate_operand (operands[1], E_V32BFmode)
          || !(
#line 32379 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256) && 
#line 565 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_512)))
        return -1;
      return 10674; /* avx10_2_rsqrtpbf16_v32bf */

    case E_V16BFmode:
      if (!register_operand (operands[0], E_V16BFmode)
          || GET_MODE (x2) != E_V16BFmode
          || !nonimmediate_operand (operands[1], E_V16BFmode)
          || !
#line 32379 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
        return -1;
      return 10676; /* avx10_2_rsqrtpbf16_v16bf */

    case E_V8BFmode:
      if (!register_operand (operands[0], E_V8BFmode)
          || GET_MODE (x2) != E_V8BFmode
          || !nonimmediate_operand (operands[1], E_V8BFmode)
          || !
#line 32379 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
        return -1;
      return 10678; /* avx10_2_rsqrtpbf16_v8bf */

    default:
      return -1;
    }
}

 int
recog_219 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XVECEXP (x2, 0, 0);
  x4 = XEXP (x3, 0);
  x5 = XVECEXP (x4, 0, 0);
  operands[1] = x5;
  x6 = XEXP (x3, 1);
  operands[2] = x6;
  x7 = XEXP (x3, 2);
  operands[3] = x7;
  x8 = XVECEXP (x2, 0, 1);
  operands[4] = x8;
  switch (XINT (x4, 1))
    {
    case 156:
      if (!const_4_or_8_to_11_operand (operands[4], E_SImode))
        return -1;
      switch (GET_MODE (operands[0]))
        {
        case E_V32HImode:
          if (pattern1304 (x2, 
E_SImode, 
E_V32HImode, 
E_V32HFmode) != 0
              || !(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 7617 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && ((V32HImode == V16SFmode
							       || V32HImode == V8DFmode
							       || V32HImode == V8DImode
							       || V32HImode == V16SImode
							       || V32HImode == V32HImode
							       || V32HImode == V32HFmode)
							       || (TARGET_AVX10_2_256
								   && (V32HImode == V8SFmode
								       || V32HImode == V4DFmode
								       || V32HImode == V4DImode
								       || V32HImode == V8SImode
								       || V32HImode == V16HImode
								       || V32HImode == V16HFmode)))) && 
#line 758 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))))
            return -1;
          return 4418; /* avx512fp16_vcvtph2uw_v32hi_mask_round */

        case E_V16SImode:
          if (pattern1310 (x2, 
E_HImode, 
E_V16SImode) != 0)
            return -1;
          switch (GET_MODE (operands[1]))
            {
            case E_V16HFmode:
              if (!register_operand (operands[1], E_V16HFmode)
                  || !(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 7617 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && ((V16SImode == V16SFmode
							       || V16SImode == V8DFmode
							       || V16SImode == V8DImode
							       || V16SImode == V16SImode
							       || V16SImode == V32HImode
							       || V16SImode == V32HFmode)
							       || (TARGET_AVX10_2_256
								   && (V16SImode == V8SFmode
								       || V16SImode == V4DFmode
								       || V16SImode == V4DImode
								       || V16SImode == V8SImode
								       || V16SImode == V16HImode
								       || V16SImode == V16HFmode)))) && 
#line 758 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))))
                return -1;
              return 4426; /* avx512fp16_vcvtph2udq_v16si_mask_round */

            case E_V16SFmode:
              if (!nonimmediate_operand (operands[1], E_V16SFmode)
                  || !(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 8706 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && ((V16SImode == V16SFmode
							       || V16SImode == V8DFmode
							       || V16SImode == V8DImode
							       || V16SImode == V16SImode
							       || V16SImode == V32HImode
							       || V16SImode == V32HFmode)
							       || (TARGET_AVX10_2_256
								   && (V16SImode == V8SFmode
								       || V16SImode == V4DFmode
								       || V16SImode == V4DImode
								       || V16SImode == V8SImode
								       || V16SImode == V16HImode
								       || V16SImode == V16HFmode)))) && 
#line 675 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))))
                return -1;
              return 4841; /* avx512f_fixuns_notruncv16sfv16si_mask_round */

            default:
              return -1;
            }

        case E_V8DImode:
          switch (pattern1476 (x2, 
E_V8DImode))
            {
            case 0:
              if (!(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 7617 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && ((V8DImode == V16SFmode
							       || V8DImode == V8DFmode
							       || V8DImode == V8DImode
							       || V8DImode == V16SImode
							       || V8DImode == V32HImode
							       || V8DImode == V32HFmode)
							       || (TARGET_AVX10_2_256
								   && (V8DImode == V8SFmode
								       || V8DImode == V4DFmode
								       || V8DImode == V4DImode
								       || V8DImode == V8SImode
								       || V8DImode == V16HImode
								       || V8DImode == V16HFmode)))) && 
#line 758 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))))
                return -1;
              return 4434; /* avx512fp16_vcvtph2uqq_v8di_mask_round */

            case 1:
              if (!(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 8739 "../../gcc/config/i386/sse.md"
(TARGET_AVX512DQ && ((V8DImode == V16SFmode
							       || V8DImode == V8DFmode
							       || V8DImode == V8DImode
							       || V8DImode == V16SImode
							       || V8DImode == V32HImode
							       || V8DImode == V32HFmode)
							       || (TARGET_AVX10_2_256
								   && (V8DImode == V8SFmode
								       || V8DImode == V4DFmode
								       || V8DImode == V4DImode
								       || V8DImode == V8SImode
								       || V8DImode == V16HImode
								       || V8DImode == V16HFmode)))) && 
#line 627 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))))
                return -1;
              return 4861; /* avx512dq_cvtps2uqqv8di_mask_round */

            case 2:
              if (!(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 9721 "../../gcc/config/i386/sse.md"
(TARGET_AVX512DQ && ((V8DFmode == V16SFmode
							       || V8DFmode == V8DFmode
							       || V8DFmode == V8DImode
							       || V8DFmode == V16SImode
							       || V8DFmode == V32HImode
							       || V8DFmode == V32HFmode)
							       || (TARGET_AVX10_2_256
								   && (V8DFmode == V8SFmode
								       || V8DFmode == V4DFmode
								       || V8DFmode == V4DImode
								       || V8DFmode == V8SImode
								       || V8DFmode == V16HImode
								       || V8DFmode == V16HFmode)))) && 
#line 537 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))))
                return -1;
              return 5107; /* fixuns_notruncv8dfv8di2_mask_round */

            default:
              return -1;
            }

        case E_V16HImode:
          if (pattern1304 (x2, 
E_HImode, 
E_V16HImode, 
E_V16HFmode) != 0
              || !(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 7617 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && ((V16HImode == V16SFmode
							       || V16HImode == V8DFmode
							       || V16HImode == V8DImode
							       || V16HImode == V16SImode
							       || V16HImode == V32HImode
							       || V16HImode == V32HFmode)
							       || (TARGET_AVX10_2_256
								   && (V16HImode == V8SFmode
								       || V16HImode == V4DFmode
								       || V16HImode == V4DImode
								       || V16HImode == V8SImode
								       || V16HImode == V16HImode
								       || V16HImode == V16HFmode)))) && 
#line 759 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))))
            return -1;
          return 4442; /* avx512fp16_vcvtph2uw_v16hi_mask_round */

        case E_V8SImode:
          switch (pattern1476 (x2, 
E_V8SImode))
            {
            case 0:
              if (!(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 7617 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && ((V8SImode == V16SFmode
							       || V8SImode == V8DFmode
							       || V8SImode == V8DImode
							       || V8SImode == V16SImode
							       || V8SImode == V32HImode
							       || V8SImode == V32HFmode)
							       || (TARGET_AVX10_2_256
								   && (V8SImode == V8SFmode
								       || V8SImode == V4DFmode
								       || V8SImode == V4DImode
								       || V8SImode == V8SImode
								       || V8SImode == V16HImode
								       || V8SImode == V16HFmode)))) && 
#line 759 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))))
                return -1;
              return 4450; /* avx512fp16_vcvtph2udq_v8si_mask_round */

            case 1:
              if (!(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 8706 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && ((V8SImode == V16SFmode
							       || V8SImode == V8DFmode
							       || V8SImode == V8DImode
							       || V8SImode == V16SImode
							       || V8SImode == V32HImode
							       || V8SImode == V32HFmode)
							       || (TARGET_AVX10_2_256
								   && (V8SImode == V8SFmode
								       || V8SImode == V4DFmode
								       || V8SImode == V4DImode
								       || V8SImode == V8SImode
								       || V8SImode == V16HImode
								       || V8SImode == V16HFmode)))) && 
#line 675 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))))
                return -1;
              return 4845; /* avx512vl_fixuns_notruncv8sfv8si_mask_round */

            case 2:
              if (!(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 9500 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && ((V8DFmode == V16SFmode
							       || V8DFmode == V8DFmode
							       || V8DFmode == V8DImode
							       || V8DFmode == V16SImode
							       || V8DFmode == V32HImode
							       || V8DFmode == V32HFmode)
							       || (TARGET_AVX10_2_256
								   && (V8DFmode == V8SFmode
								       || V8DFmode == V4DFmode
								       || V8DFmode == V4DImode
								       || V8DFmode == V8SImode
								       || V8DFmode == V16HImode
								       || V8DFmode == V16HFmode)))) && 
#line 471 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))))
                return -1;
              return 5013; /* fixuns_notruncv8dfv8si2_mask_round */

            default:
              return -1;
            }

        case E_V4DImode:
          switch (pattern1477 (x2))
            {
            case 0:
              if (!register_operand (operands[1], E_V8HFmode)
                  || !(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 7617 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && ((V4DImode == V16SFmode
							       || V4DImode == V8DFmode
							       || V4DImode == V8DImode
							       || V4DImode == V16SImode
							       || V4DImode == V32HImode
							       || V4DImode == V32HFmode)
							       || (TARGET_AVX10_2_256
								   && (V4DImode == V8SFmode
								       || V4DImode == V4DFmode
								       || V4DImode == V4DImode
								       || V4DImode == V8SImode
								       || V4DImode == V16HImode
								       || V4DImode == V16HFmode)))) && 
#line 760 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))))
                return -1;
              return 4458; /* avx512fp16_vcvtph2uqq_v4di_mask_round */

            case 1:
              if (!nonimmediate_operand (operands[1], E_V4SFmode)
                  || !(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 8739 "../../gcc/config/i386/sse.md"
(TARGET_AVX512DQ && ((V4DImode == V16SFmode
							       || V4DImode == V8DFmode
							       || V4DImode == V8DImode
							       || V4DImode == V16SImode
							       || V4DImode == V32HImode
							       || V4DImode == V32HFmode)
							       || (TARGET_AVX10_2_256
								   && (V4DImode == V8SFmode
								       || V4DImode == V4DFmode
								       || V4DImode == V4DImode
								       || V4DImode == V8SImode
								       || V4DImode == V16HImode
								       || V4DImode == V16HFmode)))) && 
#line 627 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))))
                return -1;
              return 4865; /* avx512dq_cvtps2uqqv4di_mask_round */

            case 2:
              if (!nonimmediate_operand (operands[1], E_V4DFmode)
                  || !(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 9721 "../../gcc/config/i386/sse.md"
(TARGET_AVX512DQ && ((V4DFmode == V16SFmode
							       || V4DFmode == V8DFmode
							       || V4DFmode == V8DImode
							       || V4DFmode == V16SImode
							       || V4DFmode == V32HImode
							       || V4DFmode == V32HFmode)
							       || (TARGET_AVX10_2_256
								   && (V4DFmode == V8SFmode
								       || V4DFmode == V4DFmode
								       || V4DFmode == V4DImode
								       || V4DFmode == V8SImode
								       || V4DFmode == V16HImode
								       || V4DFmode == V16HFmode)))) && 
#line 537 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))))
                return -1;
              return 5111; /* fixuns_notruncv4dfv4di2_mask_round */

            default:
              return -1;
            }

        case E_V4SImode:
          if (pattern1478 (x2, 
E_V4SImode) != 0
              || !nonimmediate_operand (operands[1], E_V4DFmode)
              || !nonimm_or_0_operand (operands[2], E_V4SImode)
              || !register_operand (operands[3], E_QImode)
              || !(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 9500 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && ((V4DFmode == V16SFmode
							       || V4DFmode == V8DFmode
							       || V4DFmode == V8DImode
							       || V4DFmode == V16SImode
							       || V4DFmode == V32HImode
							       || V4DFmode == V32HFmode)
							       || (TARGET_AVX10_2_256
								   && (V4DFmode == V8SFmode
								       || V4DFmode == V4DFmode
								       || V4DFmode == V4DImode
								       || V4DFmode == V8SImode
								       || V4DFmode == V16HImode
								       || V4DFmode == V16HFmode)))) && 
#line 471 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))))
            return -1;
          return 5017; /* fixuns_notruncv4dfv4si2_mask_round */

        default:
          return -1;
        }

    case 46:
      if (!const_4_or_8_to_11_operand (operands[4], E_SImode))
        return -1;
      switch (GET_MODE (operands[0]))
        {
        case E_V32HImode:
          if (pattern1304 (x2, 
E_SImode, 
E_V32HImode, 
E_V32HFmode) != 0
              || !(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 7617 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && ((V32HImode == V16SFmode
							       || V32HImode == V8DFmode
							       || V32HImode == V8DImode
							       || V32HImode == V16SImode
							       || V32HImode == V32HImode
							       || V32HImode == V32HFmode)
							       || (TARGET_AVX10_2_256
								   && (V32HImode == V8SFmode
								       || V32HImode == V4DFmode
								       || V32HImode == V4DImode
								       || V32HImode == V8SImode
								       || V32HImode == V16HImode
								       || V32HImode == V16HFmode)))) && 
#line 758 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))))
            return -1;
          return 4422; /* avx512fp16_vcvtph2w_v32hi_mask_round */

        case E_V16SImode:
          switch (pattern1479 (x2))
            {
            case 0:
              if (!(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 7617 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && ((V16SImode == V16SFmode
							       || V16SImode == V8DFmode
							       || V16SImode == V8DImode
							       || V16SImode == V16SImode
							       || V16SImode == V32HImode
							       || V16SImode == V32HFmode)
							       || (TARGET_AVX10_2_256
								   && (V16SImode == V8SFmode
								       || V16SImode == V4DFmode
								       || V16SImode == V4DImode
								       || V16SImode == V8SImode
								       || V16SImode == V16HImode
								       || V16SImode == V16HFmode)))) && 
#line 758 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))))
                return -1;
              return 4430; /* avx512fp16_vcvtph2dq_v16si_mask_round */

            case 1:
              if (!(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 8695 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512))))
                return -1;
              return 4837; /* avx512f_fix_notruncv16sfv16si_mask_round */

            default:
              return -1;
            }

        case E_V8DImode:
          if (pattern1310 (x2, 
E_QImode, 
E_V8DImode) != 0)
            return -1;
          switch (GET_MODE (operands[1]))
            {
            case E_V8HFmode:
              if (!register_operand (operands[1], E_V8HFmode)
                  || !(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 7617 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && ((V8DImode == V16SFmode
							       || V8DImode == V8DFmode
							       || V8DImode == V8DImode
							       || V8DImode == V16SImode
							       || V8DImode == V32HImode
							       || V8DImode == V32HFmode)
							       || (TARGET_AVX10_2_256
								   && (V8DImode == V8SFmode
								       || V8DImode == V4DFmode
								       || V8DImode == V4DImode
								       || V8DImode == V8SImode
								       || V8DImode == V16HImode
								       || V8DImode == V16HFmode)))) && 
#line 758 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))))
                return -1;
              return 4438; /* avx512fp16_vcvtph2qq_v8di_mask_round */

            case E_V8SFmode:
              if (!nonimmediate_operand (operands[1], E_V8SFmode)
                  || !(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 8716 "../../gcc/config/i386/sse.md"
(TARGET_AVX512DQ && ((V8DImode == V16SFmode
							       || V8DImode == V8DFmode
							       || V8DImode == V8DImode
							       || V8DImode == V16SImode
							       || V8DImode == V32HImode
							       || V8DImode == V32HFmode)
							       || (TARGET_AVX10_2_256
								   && (V8DImode == V8SFmode
								       || V8DImode == V4DFmode
								       || V8DImode == V4DImode
								       || V8DImode == V8SImode
								       || V8DImode == V16HImode
								       || V8DImode == V16HFmode)))) && 
#line 627 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))))
                return -1;
              return 4851; /* avx512dq_cvtps2qqv8di_mask_round */

            case E_V8DFmode:
              if (!register_operand (operands[1], E_V8DFmode)
                  || !(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 9710 "../../gcc/config/i386/sse.md"
(TARGET_AVX512DQ && ((V8DFmode == V16SFmode
							       || V8DFmode == V8DFmode
							       || V8DFmode == V8DImode
							       || V8DFmode == V16SImode
							       || V8DFmode == V32HImode
							       || V8DFmode == V32HFmode)
							       || (TARGET_AVX10_2_256
								   && (V8DFmode == V8SFmode
								       || V8DFmode == V4DFmode
								       || V8DFmode == V4DImode
								       || V8DFmode == V8SImode
								       || V8DFmode == V16HImode
								       || V8DFmode == V16HFmode)))) && 
#line 537 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))))
                return -1;
              return 5097; /* fix_notruncv8dfv8di2_mask_round */

            default:
              return -1;
            }

        case E_V16HImode:
          if (pattern1304 (x2, 
E_HImode, 
E_V16HImode, 
E_V16HFmode) != 0
              || !(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 7617 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && ((V16HImode == V16SFmode
							       || V16HImode == V8DFmode
							       || V16HImode == V8DImode
							       || V16HImode == V16SImode
							       || V16HImode == V32HImode
							       || V16HImode == V32HFmode)
							       || (TARGET_AVX10_2_256
								   && (V16HImode == V8SFmode
								       || V16HImode == V4DFmode
								       || V16HImode == V4DImode
								       || V16HImode == V8SImode
								       || V16HImode == V16HImode
								       || V16HImode == V16HFmode)))) && 
#line 759 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))))
            return -1;
          return 4446; /* avx512fp16_vcvtph2w_v16hi_mask_round */

        case E_V8SImode:
          switch (pattern1480 (x2))
            {
            case 0:
              if (!(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 7617 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && ((V8SImode == V16SFmode
							       || V8SImode == V8DFmode
							       || V8SImode == V8DImode
							       || V8SImode == V16SImode
							       || V8SImode == V32HImode
							       || V8SImode == V32HFmode)
							       || (TARGET_AVX10_2_256
								   && (V8SImode == V8SFmode
								       || V8SImode == V4DFmode
								       || V8SImode == V4DImode
								       || V8SImode == V8SImode
								       || V8SImode == V16HImode
								       || V8SImode == V16HFmode)))) && 
#line 759 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))))
                return -1;
              return 4454; /* avx512fp16_vcvtph2dq_v8si_mask_round */

            case 1:
              if (!(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 8679 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && (32 == 64 || TARGET_AVX512VL) && ((V8SImode == V16SFmode
							       || V8SImode == V8DFmode
							       || V8SImode == V8DImode
							       || V8SImode == V16SImode
							       || V8SImode == V32HImode
							       || V8SImode == V32HFmode)
							       || (TARGET_AVX10_2_256
								   && (V8SImode == V8SFmode
								       || V8SImode == V4DFmode
								       || V8SImode == V4DImode
								       || V8SImode == V8SImode
								       || V8SImode == V16HImode
								       || V8SImode == V16HFmode)))) && 
#line 666 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))))
                return -1;
              return 4831; /* avx_fix_notruncv8sfv8si_mask_round */

            case 2:
              if (!(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 9398 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512))))
                return -1;
              return 5001; /* avx512f_cvtpd2dq512_mask_round */

            default:
              return -1;
            }

        case E_V4DImode:
          switch (pattern1477 (x2))
            {
            case 0:
              if (!register_operand (operands[1], E_V8HFmode)
                  || !(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 7617 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && ((V4DImode == V16SFmode
							       || V4DImode == V8DFmode
							       || V4DImode == V8DImode
							       || V4DImode == V16SImode
							       || V4DImode == V32HImode
							       || V4DImode == V32HFmode)
							       || (TARGET_AVX10_2_256
								   && (V4DImode == V8SFmode
								       || V4DImode == V4DFmode
								       || V4DImode == V4DImode
								       || V4DImode == V8SImode
								       || V4DImode == V16HImode
								       || V4DImode == V16HFmode)))) && 
#line 760 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))))
                return -1;
              return 4462; /* avx512fp16_vcvtph2qq_v4di_mask_round */

            case 1:
              if (!nonimmediate_operand (operands[1], E_V4SFmode)
                  || !(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 8716 "../../gcc/config/i386/sse.md"
(TARGET_AVX512DQ && ((V4DImode == V16SFmode
							       || V4DImode == V8DFmode
							       || V4DImode == V8DImode
							       || V4DImode == V16SImode
							       || V4DImode == V32HImode
							       || V4DImode == V32HFmode)
							       || (TARGET_AVX10_2_256
								   && (V4DImode == V8SFmode
								       || V4DImode == V4DFmode
								       || V4DImode == V4DImode
								       || V4DImode == V8SImode
								       || V4DImode == V16HImode
								       || V4DImode == V16HFmode)))) && 
#line 627 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))))
                return -1;
              return 4855; /* avx512dq_cvtps2qqv4di_mask_round */

            case 2:
              if (!register_operand (operands[1], E_V4DFmode)
                  || !(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 9710 "../../gcc/config/i386/sse.md"
(TARGET_AVX512DQ && ((V4DFmode == V16SFmode
							       || V4DFmode == V8DFmode
							       || V4DFmode == V8DImode
							       || V4DFmode == V16SImode
							       || V4DFmode == V32HImode
							       || V4DFmode == V32HFmode)
							       || (TARGET_AVX10_2_256
								   && (V4DFmode == V8SFmode
								       || V4DFmode == V4DFmode
								       || V4DFmode == V4DImode
								       || V4DFmode == V8SImode
								       || V4DFmode == V16HImode
								       || V4DFmode == V16HFmode)))) && 
#line 537 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))))
                return -1;
              return 5101; /* fix_notruncv4dfv4di2_mask_round */

            default:
              return -1;
            }

        case E_V4SImode:
          if (pattern1304 (x2, 
E_QImode, 
E_V4SImode, 
E_V4DFmode) != 0
              || !(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 9408 "../../gcc/config/i386/sse.md"
(TARGET_AVX && TARGET_AVX512VL
   && (!true || TARGET_AVX10_2_256)))))
            return -1;
          return 5005; /* avx_cvtpd2dq256_mask_round */

        default:
          return -1;
        }

    case 172:
      if (!const48_operand (operands[4], E_SImode))
        return -1;
      switch (GET_MODE (operands[0]))
        {
        case E_V16HImode:
          if (pattern1304 (x2, 
E_HImode, 
E_V16HImode, 
E_V16HFmode) != 0
              || !(
#line 286 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 7855 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && ((V16HImode == V16SFmode
									       || V16HImode == V8DFmode
									       || V16HImode == V8DImode
									       || V16HImode == V16SImode
									       || V16HImode == V32HImode
									       || V16HImode == V32HFmode)
									       || (TARGET_AVX10_2_256
										   && (V16HImode == V8SFmode
										       || V16HImode == V4DFmode
										       || V16HImode == V4DImode
										       || V16HImode == V8SImode
										       || V16HImode == V16HImode
										       || V16HImode == V16HFmode)))) && 
#line 694 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))))
            return -1;
          return 4566; /* unspec_avx512fp16_fix_truncv16hi2_mask_round */

        case E_V32HImode:
          if (pattern1304 (x2, 
E_SImode, 
E_V32HImode, 
E_V32HFmode) != 0
              || !(
#line 286 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 7855 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && ((V32HImode == V16SFmode
									       || V32HImode == V8DFmode
									       || V32HImode == V8DImode
									       || V32HImode == V16SImode
									       || V32HImode == V32HImode
									       || V32HImode == V32HFmode)
									       || (TARGET_AVX10_2_256
										   && (V32HImode == V8SFmode
										       || V32HImode == V4DFmode
										       || V32HImode == V4DImode
										       || V32HImode == V8SImode
										       || V32HImode == V16HImode
										       || V32HImode == V16HFmode)))) && 
#line 694 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))))
            return -1;
          return 4574; /* unspec_avx512fp16_fix_truncv32hi2_mask_round */

        case E_V8SImode:
          switch (pattern1480 (x2))
            {
            case 0:
              if (!(
#line 286 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 7855 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && ((V8SImode == V16SFmode
									       || V8SImode == V8DFmode
									       || V8SImode == V8DImode
									       || V8SImode == V16SImode
									       || V8SImode == V32HImode
									       || V8SImode == V32HFmode)
									       || (TARGET_AVX10_2_256
										   && (V8SImode == V8SFmode
										       || V8SImode == V4DFmode
										       || V8SImode == V4DImode
										       || V8SImode == V8SImode
										       || V8SImode == V16HImode
										       || V8SImode == V16HFmode)))) && 
#line 695 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))))
                return -1;
              return 4582; /* unspec_avx512fp16_fix_truncv8si2_mask_round */

            case 1:
              if (!(
#line 286 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 8783 "../../gcc/config/i386/sse.md"
(TARGET_AVX && TARGET_AVX512VL
  && (!true || TARGET_AVX10_2_256)))))
                return -1;
              return 4887; /* unspec_fix_truncv8sfv8si2_mask_round */

            case 2:
              if (!(
#line 286 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 9558 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512))))
                return -1;
              return 5024; /* unspec_fix_truncv8dfv8si2_mask_round */

            default:
              return -1;
            }

        case E_V16SImode:
          switch (pattern1479 (x2))
            {
            case 0:
              if (!(
#line 286 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 7855 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && ((V16SImode == V16SFmode
									       || V16SImode == V8DFmode
									       || V16SImode == V8DImode
									       || V16SImode == V16SImode
									       || V16SImode == V32HImode
									       || V16SImode == V32HFmode)
									       || (TARGET_AVX10_2_256
										   && (V16SImode == V8SFmode
										       || V16SImode == V4DFmode
										       || V16SImode == V4DImode
										       || V16SImode == V8SImode
										       || V16SImode == V16HImode
										       || V16SImode == V16HFmode)))) && 
#line 695 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))))
                return -1;
              return 4590; /* unspec_avx512fp16_fix_truncv16si2_mask_round */

            case 1:
              if (!(
#line 286 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 8763 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512))))
                return -1;
              return 4871; /* unspec_fix_truncv16sfv16si2_mask_round */

            default:
              return -1;
            }

        case E_V8DImode:
          switch (pattern1481 (x2, 
E_V8DImode))
            {
            case 0:
              if (!(
#line 286 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 7855 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && ((V8DImode == V16SFmode
									       || V8DImode == V8DFmode
									       || V8DImode == V8DImode
									       || V8DImode == V16SImode
									       || V8DImode == V32HImode
									       || V8DImode == V32HFmode)
									       || (TARGET_AVX10_2_256
										   && (V8DImode == V8SFmode
										       || V8DImode == V4DFmode
										       || V8DImode == V4DImode
										       || V8DImode == V8SImode
										       || V8DImode == V16HImode
										       || V8DImode == V16HFmode)))) && 
#line 696 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))))
                return -1;
              return 4598; /* unspec_avx512fp16_fix_truncv8di2_mask_round */

            case 1:
              if (!(
#line 286 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 9689 "../../gcc/config/i386/sse.md"
(TARGET_AVX512DQ && ((V8DFmode == V16SFmode
									       || V8DFmode == V8DFmode
									       || V8DFmode == V8DImode
									       || V8DFmode == V16SImode
									       || V8DFmode == V32HImode
									       || V8DFmode == V32HFmode)
									       || (TARGET_AVX10_2_256
										   && (V8DFmode == V8SFmode
										       || V8DFmode == V4DFmode
										       || V8DFmode == V4DImode
										       || V8DFmode == V8SImode
										       || V8DFmode == V16HImode
										       || V8DFmode == V16HFmode)))) && 
#line 537 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))))
                return -1;
              return 5057; /* unspec_fix_truncv8dfv8di2_mask_round */

            case 2:
              if (!(
#line 286 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 9732 "../../gcc/config/i386/sse.md"
(TARGET_AVX512DQ && ((V8DImode == V16SFmode
									       || V8DImode == V8DFmode
									       || V8DImode == V8DImode
									       || V8DImode == V16SImode
									       || V8DImode == V32HImode
									       || V8DImode == V32HFmode)
									       || (TARGET_AVX10_2_256
										   && (V8DImode == V8SFmode
										       || V8DImode == V4DFmode
										       || V8DImode == V4DImode
										       || V8DImode == V8SImode
										       || V8DImode == V16HImode
										       || V8DImode == V16HFmode)))) && 
#line 627 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))))
                return -1;
              return 5117; /* unspec_fix_truncv8sfv8di2_mask_round */

            default:
              return -1;
            }

        case E_V4DImode:
          switch (pattern1482 (x2))
            {
            case 0:
              if (!(
#line 286 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 7893 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL && ((V4DImode == V16SFmode
									       || V4DImode == V8DFmode
									       || V4DImode == V8DImode
									       || V4DImode == V16SImode
									       || V4DImode == V32HImode
									       || V4DImode == V32HFmode)
									       || (TARGET_AVX10_2_256
										   && (V4DImode == V8SFmode
										       || V4DImode == V4DFmode
										       || V4DImode == V4DImode
										       || V4DImode == V8SImode
										       || V4DImode == V16HImode
										       || V4DImode == V16HFmode)))))))
                return -1;
              return 4654; /* unspec_avx512fp16_fix_truncv4di2_mask_round */

            case 1:
              if (!(
#line 286 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 9689 "../../gcc/config/i386/sse.md"
(TARGET_AVX512DQ && ((V4DFmode == V16SFmode
									       || V4DFmode == V8DFmode
									       || V4DFmode == V8DImode
									       || V4DFmode == V16SImode
									       || V4DFmode == V32HImode
									       || V4DFmode == V32HFmode)
									       || (TARGET_AVX10_2_256
										   && (V4DFmode == V8SFmode
										       || V4DFmode == V4DFmode
										       || V4DFmode == V4DImode
										       || V4DFmode == V8SImode
										       || V4DFmode == V16HImode
										       || V4DFmode == V16HFmode)))) && 
#line 537 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))))
                return -1;
              return 5065; /* unspec_fix_truncv4dfv4di2_mask_round */

            case 2:
              if (!(
#line 286 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 9732 "../../gcc/config/i386/sse.md"
(TARGET_AVX512DQ && ((V4DImode == V16SFmode
									       || V4DImode == V8DFmode
									       || V4DImode == V8DImode
									       || V4DImode == V16SImode
									       || V4DImode == V32HImode
									       || V4DImode == V32HFmode)
									       || (TARGET_AVX10_2_256
										   && (V4DImode == V8SFmode
										       || V4DImode == V4DFmode
										       || V4DImode == V4DImode
										       || V4DImode == V8SImode
										       || V4DImode == V16HImode
										       || V4DImode == V16HFmode)))) && 
#line 627 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))))
                return -1;
              return 5125; /* unspec_fix_truncv4sfv4di2_mask_round */

            default:
              return -1;
            }

        case E_V4SImode:
          if (pattern1304 (x2, 
E_QImode, 
E_V4SImode, 
E_V4DFmode) != 0
              || !(
#line 286 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 9648 "../../gcc/config/i386/sse.md"
(TARGET_AVX && TARGET_AVX512VL
   && (!true || TARGET_AVX10_2_256)))))
            return -1;
          return 5045; /* unspec_fix_truncv4dfv4si2_mask_round */

        default:
          return -1;
        }

    case 173:
      if (!const48_operand (operands[4], E_SImode))
        return -1;
      switch (GET_MODE (operands[0]))
        {
        case E_V16HImode:
          if (pattern1304 (x2, 
E_HImode, 
E_V16HImode, 
E_V16HFmode) != 0
              || !(
#line 286 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 7855 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && ((V16HImode == V16SFmode
									       || V16HImode == V8DFmode
									       || V16HImode == V8DImode
									       || V16HImode == V16SImode
									       || V16HImode == V32HImode
									       || V16HImode == V32HFmode)
									       || (TARGET_AVX10_2_256
										   && (V16HImode == V8SFmode
										       || V16HImode == V4DFmode
										       || V16HImode == V4DImode
										       || V16HImode == V8SImode
										       || V16HImode == V16HImode
										       || V16HImode == V16HFmode)))) && 
#line 694 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))))
            return -1;
          return 4570; /* unspec_avx512fp16_fixuns_truncv16hi2_mask_round */

        case E_V32HImode:
          if (pattern1304 (x2, 
E_SImode, 
E_V32HImode, 
E_V32HFmode) != 0
              || !(
#line 286 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 7855 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && ((V32HImode == V16SFmode
									       || V32HImode == V8DFmode
									       || V32HImode == V8DImode
									       || V32HImode == V16SImode
									       || V32HImode == V32HImode
									       || V32HImode == V32HFmode)
									       || (TARGET_AVX10_2_256
										   && (V32HImode == V8SFmode
										       || V32HImode == V4DFmode
										       || V32HImode == V4DImode
										       || V32HImode == V8SImode
										       || V32HImode == V16HImode
										       || V32HImode == V16HFmode)))) && 
#line 694 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))))
            return -1;
          return 4578; /* unspec_avx512fp16_fixuns_truncv32hi2_mask_round */

        case E_V8SImode:
          switch (pattern1481 (x2, 
E_V8SImode))
            {
            case 0:
              if (!(
#line 286 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 7855 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && ((V8SImode == V16SFmode
									       || V8SImode == V8DFmode
									       || V8SImode == V8DImode
									       || V8SImode == V16SImode
									       || V8SImode == V32HImode
									       || V8SImode == V32HFmode)
									       || (TARGET_AVX10_2_256
										   && (V8SImode == V8SFmode
										       || V8SImode == V4DFmode
										       || V8SImode == V4DImode
										       || V8SImode == V8SImode
										       || V8SImode == V16HImode
										       || V8SImode == V16HFmode)))) && 
#line 695 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))))
                return -1;
              return 4586; /* unspec_avx512fp16_fixuns_truncv8si2_mask_round */

            case 1:
              if (!(
#line 286 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 9558 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512))))
                return -1;
              return 5028; /* unspec_fixuns_truncv8dfv8si2_mask_round */

            case 2:
              if (!(
#line 286 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 9903 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL && ((V8SFmode == V16SFmode
									       || V8SFmode == V8DFmode
									       || V8SFmode == V8DImode
									       || V8SFmode == V16SImode
									       || V8SFmode == V32HImode
									       || V8SFmode == V32HFmode)
									       || (TARGET_AVX10_2_256
										   && (V8SFmode == V8SFmode
										       || V8SFmode == V4DFmode
										       || V8SFmode == V4DImode
										       || V8SFmode == V8SImode
										       || V8SFmode == V16HImode
										       || V8SFmode == V16HFmode)))) && 
#line 441 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))))
                return -1;
              return 5149; /* unspec_fixuns_truncv8sfv8si2_mask_round */

            default:
              return -1;
            }

        case E_V16SImode:
          switch (pattern1479 (x2))
            {
            case 0:
              if (!(
#line 286 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 7855 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && ((V16SImode == V16SFmode
									       || V16SImode == V8DFmode
									       || V16SImode == V8DImode
									       || V16SImode == V16SImode
									       || V16SImode == V32HImode
									       || V16SImode == V32HFmode)
									       || (TARGET_AVX10_2_256
										   && (V16SImode == V8SFmode
										       || V16SImode == V4DFmode
										       || V16SImode == V4DImode
										       || V16SImode == V8SImode
										       || V16SImode == V16HImode
										       || V16SImode == V16HFmode)))) && 
#line 695 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))))
                return -1;
              return 4594; /* unspec_avx512fp16_fixuns_truncv16si2_mask_round */

            case 1:
              if (!(
#line 286 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 8763 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512))))
                return -1;
              return 4875; /* unspec_fixuns_truncv16sfv16si2_mask_round */

            default:
              return -1;
            }

        case E_V8DImode:
          switch (pattern1481 (x2, 
E_V8DImode))
            {
            case 0:
              if (!(
#line 286 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 7855 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && ((V8DImode == V16SFmode
									       || V8DImode == V8DFmode
									       || V8DImode == V8DImode
									       || V8DImode == V16SImode
									       || V8DImode == V32HImode
									       || V8DImode == V32HFmode)
									       || (TARGET_AVX10_2_256
										   && (V8DImode == V8SFmode
										       || V8DImode == V4DFmode
										       || V8DImode == V4DImode
										       || V8DImode == V8SImode
										       || V8DImode == V16HImode
										       || V8DImode == V16HFmode)))) && 
#line 696 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))))
                return -1;
              return 4602; /* unspec_avx512fp16_fixuns_truncv8di2_mask_round */

            case 1:
              if (!(
#line 286 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 9689 "../../gcc/config/i386/sse.md"
(TARGET_AVX512DQ && ((V8DFmode == V16SFmode
									       || V8DFmode == V8DFmode
									       || V8DFmode == V8DImode
									       || V8DFmode == V16SImode
									       || V8DFmode == V32HImode
									       || V8DFmode == V32HFmode)
									       || (TARGET_AVX10_2_256
										   && (V8DFmode == V8SFmode
										       || V8DFmode == V4DFmode
										       || V8DFmode == V4DImode
										       || V8DFmode == V8SImode
										       || V8DFmode == V16HImode
										       || V8DFmode == V16HFmode)))) && 
#line 537 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))))
                return -1;
              return 5061; /* unspec_fixuns_truncv8dfv8di2_mask_round */

            case 2:
              if (!(
#line 286 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 9732 "../../gcc/config/i386/sse.md"
(TARGET_AVX512DQ && ((V8DImode == V16SFmode
									       || V8DImode == V8DFmode
									       || V8DImode == V8DImode
									       || V8DImode == V16SImode
									       || V8DImode == V32HImode
									       || V8DImode == V32HFmode)
									       || (TARGET_AVX10_2_256
										   && (V8DImode == V8SFmode
										       || V8DImode == V4DFmode
										       || V8DImode == V4DImode
										       || V8DImode == V8SImode
										       || V8DImode == V16HImode
										       || V8DImode == V16HFmode)))) && 
#line 627 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))))
                return -1;
              return 5121; /* unspec_fixuns_truncv8sfv8di2_mask_round */

            default:
              return -1;
            }

        case E_V4DImode:
          switch (pattern1482 (x2))
            {
            case 0:
              if (!(
#line 286 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 7893 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL && ((V4DImode == V16SFmode
									       || V4DImode == V8DFmode
									       || V4DImode == V8DImode
									       || V4DImode == V16SImode
									       || V4DImode == V32HImode
									       || V4DImode == V32HFmode)
									       || (TARGET_AVX10_2_256
										   && (V4DImode == V8SFmode
										       || V4DImode == V4DFmode
										       || V4DImode == V4DImode
										       || V4DImode == V8SImode
										       || V4DImode == V16HImode
										       || V4DImode == V16HFmode)))))))
                return -1;
              return 4658; /* unspec_avx512fp16_fixuns_truncv4di2_mask_round */

            case 1:
              if (!(
#line 286 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 9689 "../../gcc/config/i386/sse.md"
(TARGET_AVX512DQ && ((V4DFmode == V16SFmode
									       || V4DFmode == V8DFmode
									       || V4DFmode == V8DImode
									       || V4DFmode == V16SImode
									       || V4DFmode == V32HImode
									       || V4DFmode == V32HFmode)
									       || (TARGET_AVX10_2_256
										   && (V4DFmode == V8SFmode
										       || V4DFmode == V4DFmode
										       || V4DFmode == V4DImode
										       || V4DFmode == V8SImode
										       || V4DFmode == V16HImode
										       || V4DFmode == V16HFmode)))) && 
#line 537 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))))
                return -1;
              return 5069; /* unspec_fixuns_truncv4dfv4di2_mask_round */

            case 2:
              if (!(
#line 286 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 9732 "../../gcc/config/i386/sse.md"
(TARGET_AVX512DQ && ((V4DImode == V16SFmode
									       || V4DImode == V8DFmode
									       || V4DImode == V8DImode
									       || V4DImode == V16SImode
									       || V4DImode == V32HImode
									       || V4DImode == V32HFmode)
									       || (TARGET_AVX10_2_256
										   && (V4DImode == V8SFmode
										       || V4DImode == V4DFmode
										       || V4DImode == V4DImode
										       || V4DImode == V8SImode
										       || V4DImode == V16HImode
										       || V4DImode == V16HFmode)))) && 
#line 627 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))))
                return -1;
              return 5129; /* unspec_fixuns_truncv4sfv4di2_mask_round */

            default:
              return -1;
            }

        case E_V4SImode:
          if (pattern1304 (x2, 
E_QImode, 
E_V4SImode, 
E_V4DFmode) != 0
              || !(
#line 286 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 9668 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL && TARGET_AVX512F
  && (!true || TARGET_AVX10_2_256)))))
            return -1;
          return 5051; /* unspec_fixuns_truncv4dfv4si2_mask_round */

        default:
          return -1;
        }

    case 165:
      if (!const48_operand (operands[4], E_SImode))
        return -1;
      switch (GET_MODE (operands[0]))
        {
        case E_V32HFmode:
          if (pattern1483 (x2, 
E_V32HFmode, 
E_SImode) != 0
              || !(
#line 286 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 14031 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && ((V32HFmode == V16SFmode
									       || V32HFmode == V8DFmode
									       || V32HFmode == V8DImode
									       || V32HFmode == V16SImode
									       || V32HFmode == V32HImode
									       || V32HFmode == V32HFmode)
									       || (TARGET_AVX10_2_256
										   && (V32HFmode == V8SFmode
										       || V32HFmode == V4DFmode
										       || V32HFmode == V4DImode
										       || V32HFmode == V8SImode
										       || V32HFmode == V16HImode
										       || V32HFmode == V16HFmode)))) && 
#line 525 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_EVEX512)))))
            return -1;
          return 7037; /* avx512bw_getexpv32hf_mask_round */

        case E_V16HFmode:
          if (pattern1483 (x2, 
E_V16HFmode, 
E_HImode) != 0
              || !(
#line 286 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 14031 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && ((V16HFmode == V16SFmode
									       || V16HFmode == V8DFmode
									       || V16HFmode == V8DImode
									       || V16HFmode == V16SImode
									       || V16HFmode == V32HImode
									       || V16HFmode == V32HFmode)
									       || (TARGET_AVX10_2_256
										   && (V16HFmode == V8SFmode
										       || V16HFmode == V4DFmode
										       || V16HFmode == V4DImode
										       || V16HFmode == V8SImode
										       || V16HFmode == V16HImode
										       || V16HFmode == V16HFmode)))) && 
#line 526 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL)))))
            return -1;
          return 7041; /* avx512vl_getexpv16hf_mask_round */

        case E_V16SFmode:
          if (pattern1483 (x2, 
E_V16SFmode, 
E_HImode) != 0
              || !(
#line 286 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 14031 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && ((V16SFmode == V16SFmode
									       || V16SFmode == V8DFmode
									       || V16SFmode == V8DImode
									       || V16SFmode == V16SImode
									       || V16SFmode == V32HImode
									       || V16SFmode == V32HFmode)
									       || (TARGET_AVX10_2_256
										   && (V16SFmode == V8SFmode
										       || V16SFmode == V4DFmode
										       || V16SFmode == V4DImode
										       || V16SFmode == V8SImode
										       || V16SFmode == V16HImode
										       || V16SFmode == V16HFmode)))) && 
#line 528 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))))
            return -1;
          return 7047; /* avx512f_getexpv16sf_mask_round */

        case E_V8SFmode:
          if (pattern1483 (x2, 
E_V8SFmode, 
E_QImode) != 0
              || !(
#line 286 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 14031 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && ((V8SFmode == V16SFmode
									       || V8SFmode == V8DFmode
									       || V8SFmode == V8DImode
									       || V8SFmode == V16SImode
									       || V8SFmode == V32HImode
									       || V8SFmode == V32HFmode)
									       || (TARGET_AVX10_2_256
										   && (V8SFmode == V8SFmode
										       || V8SFmode == V4DFmode
										       || V8SFmode == V4DImode
										       || V8SFmode == V8SImode
										       || V8SFmode == V16HImode
										       || V8SFmode == V16HFmode)))) && 
#line 528 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))))
            return -1;
          return 7051; /* avx512vl_getexpv8sf_mask_round */

        case E_V8DFmode:
          if (pattern1483 (x2, 
E_V8DFmode, 
E_QImode) != 0
              || !(
#line 286 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 14031 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && ((V8DFmode == V16SFmode
									       || V8DFmode == V8DFmode
									       || V8DFmode == V8DImode
									       || V8DFmode == V16SImode
									       || V8DFmode == V32HImode
									       || V8DFmode == V32HFmode)
									       || (TARGET_AVX10_2_256
										   && (V8DFmode == V8SFmode
										       || V8DFmode == V4DFmode
										       || V8DFmode == V4DImode
										       || V8DFmode == V8SImode
										       || V8DFmode == V16HImode
										       || V8DFmode == V16HFmode)))) && 
#line 529 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))))
            return -1;
          return 7057; /* avx512f_getexpv8df_mask_round */

        case E_V4DFmode:
          if (pattern1483 (x2, 
E_V4DFmode, 
E_QImode) != 0
              || !(
#line 286 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 14031 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && ((V4DFmode == V16SFmode
									       || V4DFmode == V8DFmode
									       || V4DFmode == V8DImode
									       || V4DFmode == V16SImode
									       || V4DFmode == V32HImode
									       || V4DFmode == V32HFmode)
									       || (TARGET_AVX10_2_256
										   && (V4DFmode == V8SFmode
										       || V4DFmode == V4DFmode
										       || V4DFmode == V4DImode
										       || V4DFmode == V8SImode
										       || V4DFmode == V16HImode
										       || V4DFmode == V16HFmode)))) && 
#line 529 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))))
            return -1;
          return 7061; /* avx512vl_getexpv4df_mask_round */

        default:
          return -1;
        }

    case 149:
      if (!const48_operand (operands[4], E_SImode))
        return -1;
      switch (GET_MODE (operands[0]))
        {
        case E_V8SFmode:
          if (pattern1304 (x2, 
E_QImode, 
E_V8SFmode, 
E_V8HImode) != 0
              || !(
#line 286 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 29096 "../../gcc/config/i386/sse.md"
((TARGET_F16C || TARGET_AVX512VL)
   && (!true || TARGET_AVX10_2_256)))))
            return -1;
          return 9650; /* vcvtph2ps256_mask_round */

        case E_V16SFmode:
          if (pattern1304 (x2, 
E_HImode, 
E_V16SFmode, 
E_V16HImode) != 0
              || !(
#line 286 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 29109 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512))))
            return -1;
          return 9654; /* avx512f_vcvtph2ps512_mask_round */

        default:
          return -1;
        }

    case 266:
      if (!const_4_or_8_to_11_operand (operands[4], E_SImode))
        return -1;
      switch (GET_MODE (operands[0]))
        {
        case E_V32HImode:
          if (pattern1304 (x2, 
E_SImode, 
E_V32HImode, 
E_V32HFmode) != 0
              || !(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 32512 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256 && ((V32HFmode == V16SFmode
							       || V32HFmode == V8DFmode
							       || V32HFmode == V8DImode
							       || V32HFmode == V16SImode
							       || V32HFmode == V32HImode
							       || V32HFmode == V32HFmode)
							       || (TARGET_AVX10_2_256
								   && (V32HFmode == V8SFmode
								       || V32HFmode == V4DFmode
								       || V32HFmode == V4DImode
								       || V32HFmode == V8SImode
								       || V32HFmode == V16HImode
								       || V32HFmode == V16HFmode)))) && 
#line 562 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_512)))))
            return -1;
          return 10756; /* avx10_2_cvtph2ibsv32hf_mask_round */

        case E_V16HImode:
          if (pattern1304 (x2, 
E_HImode, 
E_V16HImode, 
E_V16HFmode) != 0
              || !(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 32512 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256 && ((V16HFmode == V16SFmode
							       || V16HFmode == V8DFmode
							       || V16HFmode == V8DImode
							       || V16HFmode == V16SImode
							       || V16HFmode == V32HImode
							       || V16HFmode == V32HFmode)
							       || (TARGET_AVX10_2_256
								   && (V16HFmode == V8SFmode
								       || V16HFmode == V4DFmode
								       || V16HFmode == V4DImode
								       || V16HFmode == V8SImode
								       || V16HFmode == V16HImode
								       || V16HFmode == V16HFmode)))))))
            return -1;
          return 10764; /* avx10_2_cvtph2ibsv16hf_mask_round */

        default:
          return -1;
        }

    case 267:
      if (!const_4_or_8_to_11_operand (operands[4], E_SImode))
        return -1;
      switch (GET_MODE (operands[0]))
        {
        case E_V32HImode:
          if (pattern1304 (x2, 
E_SImode, 
E_V32HImode, 
E_V32HFmode) != 0
              || !(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 32512 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256 && ((V32HFmode == V16SFmode
							       || V32HFmode == V8DFmode
							       || V32HFmode == V8DImode
							       || V32HFmode == V16SImode
							       || V32HFmode == V32HImode
							       || V32HFmode == V32HFmode)
							       || (TARGET_AVX10_2_256
								   && (V32HFmode == V8SFmode
								       || V32HFmode == V4DFmode
								       || V32HFmode == V4DImode
								       || V32HFmode == V8SImode
								       || V32HFmode == V16HImode
								       || V32HFmode == V16HFmode)))) && 
#line 562 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_512)))))
            return -1;
          return 10760; /* avx10_2_cvtph2iubsv32hf_mask_round */

        case E_V16HImode:
          if (pattern1304 (x2, 
E_HImode, 
E_V16HImode, 
E_V16HFmode) != 0
              || !(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 32512 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256 && ((V16HFmode == V16SFmode
							       || V16HFmode == V8DFmode
							       || V16HFmode == V8DImode
							       || V16HFmode == V16SImode
							       || V16HFmode == V32HImode
							       || V16HFmode == V32HFmode)
							       || (TARGET_AVX10_2_256
								   && (V16HFmode == V8SFmode
								       || V16HFmode == V4DFmode
								       || V16HFmode == V4DImode
								       || V16HFmode == V8SImode
								       || V16HFmode == V16HImode
								       || V16HFmode == V16HFmode)))))))
            return -1;
          return 10768; /* avx10_2_cvtph2iubsv16hf_mask_round */

        default:
          return -1;
        }

    case 272:
      if (!const48_operand (operands[4], E_SImode))
        return -1;
      switch (GET_MODE (operands[0]))
        {
        case E_V32HImode:
          if (pattern1304 (x2, 
E_SImode, 
E_V32HImode, 
E_V32HFmode) != 0
              || !(
#line 286 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 32527 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256 && ((V32HFmode == V16SFmode
									       || V32HFmode == V8DFmode
									       || V32HFmode == V8DImode
									       || V32HFmode == V16SImode
									       || V32HFmode == V32HImode
									       || V32HFmode == V32HFmode)
									       || (TARGET_AVX10_2_256
										   && (V32HFmode == V8SFmode
										       || V32HFmode == V4DFmode
										       || V32HFmode == V4DImode
										       || V32HFmode == V8SImode
										       || V32HFmode == V16HImode
										       || V32HFmode == V16HFmode)))) && 
#line 562 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_512)))))
            return -1;
          return 10776; /* avx10_2_cvttph2ibsv32hf_mask_round */

        case E_V16HImode:
          if (pattern1304 (x2, 
E_HImode, 
E_V16HImode, 
E_V16HFmode) != 0
              || !(
#line 286 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 32527 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256 && ((V16HFmode == V16SFmode
									       || V16HFmode == V8DFmode
									       || V16HFmode == V8DImode
									       || V16HFmode == V16SImode
									       || V16HFmode == V32HImode
									       || V16HFmode == V32HFmode)
									       || (TARGET_AVX10_2_256
										   && (V16HFmode == V8SFmode
										       || V16HFmode == V4DFmode
										       || V16HFmode == V4DImode
										       || V16HFmode == V8SImode
										       || V16HFmode == V16HImode
										       || V16HFmode == V16HFmode)))))))
            return -1;
          return 10784; /* avx10_2_cvttph2ibsv16hf_mask_round */

        default:
          return -1;
        }

    case 273:
      if (!const48_operand (operands[4], E_SImode))
        return -1;
      switch (GET_MODE (operands[0]))
        {
        case E_V32HImode:
          if (pattern1304 (x2, 
E_SImode, 
E_V32HImode, 
E_V32HFmode) != 0
              || !(
#line 286 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 32527 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256 && ((V32HFmode == V16SFmode
									       || V32HFmode == V8DFmode
									       || V32HFmode == V8DImode
									       || V32HFmode == V16SImode
									       || V32HFmode == V32HImode
									       || V32HFmode == V32HFmode)
									       || (TARGET_AVX10_2_256
										   && (V32HFmode == V8SFmode
										       || V32HFmode == V4DFmode
										       || V32HFmode == V4DImode
										       || V32HFmode == V8SImode
										       || V32HFmode == V16HImode
										       || V32HFmode == V16HFmode)))) && 
#line 562 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_512)))))
            return -1;
          return 10780; /* avx10_2_cvttph2iubsv32hf_mask_round */

        case E_V16HImode:
          if (pattern1304 (x2, 
E_HImode, 
E_V16HImode, 
E_V16HFmode) != 0
              || !(
#line 286 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 32527 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256 && ((V16HFmode == V16SFmode
									       || V16HFmode == V8DFmode
									       || V16HFmode == V8DImode
									       || V16HFmode == V16SImode
									       || V16HFmode == V32HImode
									       || V16HFmode == V32HFmode)
									       || (TARGET_AVX10_2_256
										   && (V16HFmode == V8SFmode
										       || V16HFmode == V4DFmode
										       || V16HFmode == V4DImode
										       || V16HFmode == V8SImode
										       || V16HFmode == V16HImode
										       || V16HFmode == V16HFmode)))))))
            return -1;
          return 10788; /* avx10_2_cvttph2iubsv16hf_mask_round */

        default:
          return -1;
        }

    case 268:
      if (!const_4_or_8_to_11_operand (operands[4], E_SImode))
        return -1;
      switch (GET_MODE (operands[0]))
        {
        case E_V16SImode:
          if (pattern1304 (x2, 
E_HImode, 
E_V16SImode, 
E_V16SFmode) != 0
              || !(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 32542 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256 && ((V16SFmode == V16SFmode
							       || V16SFmode == V8DFmode
							       || V16SFmode == V8DImode
							       || V16SFmode == V16SImode
							       || V16SFmode == V32HImode
							       || V16SFmode == V32HFmode)
							       || (TARGET_AVX10_2_256
								   && (V16SFmode == V8SFmode
								       || V16SFmode == V4DFmode
								       || V16SFmode == V4DImode
								       || V16SFmode == V8SImode
								       || V16SFmode == V16HImode
								       || V16SFmode == V16HFmode)))) && 
#line 546 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_512)))))
            return -1;
          return 10796; /* avx10_2_cvtps2ibsv16sf_mask_round */

        case E_V8SImode:
          if (pattern1304 (x2, 
E_QImode, 
E_V8SImode, 
E_V8SFmode) != 0
              || !(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 32542 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256 && ((V8SFmode == V16SFmode
							       || V8SFmode == V8DFmode
							       || V8SFmode == V8DImode
							       || V8SFmode == V16SImode
							       || V8SFmode == V32HImode
							       || V8SFmode == V32HFmode)
							       || (TARGET_AVX10_2_256
								   && (V8SFmode == V8SFmode
								       || V8SFmode == V4DFmode
								       || V8SFmode == V4DImode
								       || V8SFmode == V8SImode
								       || V8SFmode == V16HImode
								       || V8SFmode == V16HFmode)))))))
            return -1;
          return 10804; /* avx10_2_cvtps2ibsv8sf_mask_round */

        default:
          return -1;
        }

    case 269:
      if (!const_4_or_8_to_11_operand (operands[4], E_SImode))
        return -1;
      switch (GET_MODE (operands[0]))
        {
        case E_V16SImode:
          if (pattern1304 (x2, 
E_HImode, 
E_V16SImode, 
E_V16SFmode) != 0
              || !(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 32542 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256 && ((V16SFmode == V16SFmode
							       || V16SFmode == V8DFmode
							       || V16SFmode == V8DImode
							       || V16SFmode == V16SImode
							       || V16SFmode == V32HImode
							       || V16SFmode == V32HFmode)
							       || (TARGET_AVX10_2_256
								   && (V16SFmode == V8SFmode
								       || V16SFmode == V4DFmode
								       || V16SFmode == V4DImode
								       || V16SFmode == V8SImode
								       || V16SFmode == V16HImode
								       || V16SFmode == V16HFmode)))) && 
#line 546 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_512)))))
            return -1;
          return 10800; /* avx10_2_cvtps2iubsv16sf_mask_round */

        case E_V8SImode:
          if (pattern1304 (x2, 
E_QImode, 
E_V8SImode, 
E_V8SFmode) != 0
              || !(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 32542 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256 && ((V8SFmode == V16SFmode
							       || V8SFmode == V8DFmode
							       || V8SFmode == V8DImode
							       || V8SFmode == V16SImode
							       || V8SFmode == V32HImode
							       || V8SFmode == V32HFmode)
							       || (TARGET_AVX10_2_256
								   && (V8SFmode == V8SFmode
								       || V8SFmode == V4DFmode
								       || V8SFmode == V4DImode
								       || V8SFmode == V8SImode
								       || V8SFmode == V16HImode
								       || V8SFmode == V16HFmode)))))))
            return -1;
          return 10808; /* avx10_2_cvtps2iubsv8sf_mask_round */

        default:
          return -1;
        }

    case 274:
      if (!const48_operand (operands[4], E_SImode))
        return -1;
      switch (GET_MODE (operands[0]))
        {
        case E_V16SImode:
          if (pattern1304 (x2, 
E_HImode, 
E_V16SImode, 
E_V16SFmode) != 0
              || !(
#line 286 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 32557 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256 && ((V16SFmode == V16SFmode
									       || V16SFmode == V8DFmode
									       || V16SFmode == V8DImode
									       || V16SFmode == V16SImode
									       || V16SFmode == V32HImode
									       || V16SFmode == V32HFmode)
									       || (TARGET_AVX10_2_256
										   && (V16SFmode == V8SFmode
										       || V16SFmode == V4DFmode
										       || V16SFmode == V4DImode
										       || V16SFmode == V8SImode
										       || V16SFmode == V16HImode
										       || V16SFmode == V16HFmode)))) && 
#line 546 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_512)))))
            return -1;
          return 10816; /* avx10_2_cvttps2ibsv16sf_mask_round */

        case E_V8SImode:
          if (pattern1304 (x2, 
E_QImode, 
E_V8SImode, 
E_V8SFmode) != 0
              || !(
#line 286 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 32557 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256 && ((V8SFmode == V16SFmode
									       || V8SFmode == V8DFmode
									       || V8SFmode == V8DImode
									       || V8SFmode == V16SImode
									       || V8SFmode == V32HImode
									       || V8SFmode == V32HFmode)
									       || (TARGET_AVX10_2_256
										   && (V8SFmode == V8SFmode
										       || V8SFmode == V4DFmode
										       || V8SFmode == V4DImode
										       || V8SFmode == V8SImode
										       || V8SFmode == V16HImode
										       || V8SFmode == V16HFmode)))))))
            return -1;
          return 10824; /* avx10_2_cvttps2ibsv8sf_mask_round */

        default:
          return -1;
        }

    case 275:
      if (!const48_operand (operands[4], E_SImode))
        return -1;
      switch (GET_MODE (operands[0]))
        {
        case E_V16SImode:
          if (pattern1304 (x2, 
E_HImode, 
E_V16SImode, 
E_V16SFmode) != 0
              || !(
#line 286 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 32557 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256 && ((V16SFmode == V16SFmode
									       || V16SFmode == V8DFmode
									       || V16SFmode == V8DImode
									       || V16SFmode == V16SImode
									       || V16SFmode == V32HImode
									       || V16SFmode == V32HFmode)
									       || (TARGET_AVX10_2_256
										   && (V16SFmode == V8SFmode
										       || V16SFmode == V4DFmode
										       || V16SFmode == V4DImode
										       || V16SFmode == V8SImode
										       || V16SFmode == V16HImode
										       || V16SFmode == V16HFmode)))) && 
#line 546 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_512)))))
            return -1;
          return 10820; /* avx10_2_cvttps2iubsv16sf_mask_round */

        case E_V8SImode:
          if (pattern1304 (x2, 
E_QImode, 
E_V8SImode, 
E_V8SFmode) != 0
              || !(
#line 286 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 32557 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256 && ((V8SFmode == V16SFmode
									       || V8SFmode == V8DFmode
									       || V8SFmode == V8DImode
									       || V8SFmode == V16SImode
									       || V8SFmode == V32HImode
									       || V8SFmode == V32HFmode)
									       || (TARGET_AVX10_2_256
										   && (V8SFmode == V8SFmode
										       || V8SFmode == V4DFmode
										       || V8SFmode == V4DImode
										       || V8SFmode == V8SImode
										       || V8SFmode == V16HImode
										       || V8SFmode == V16HFmode)))))))
            return -1;
          return 10828; /* avx10_2_cvttps2iubsv8sf_mask_round */

        default:
          return -1;
        }

    case 276:
      switch (pattern1305 (x2))
        {
        case 0:
          if (!(
#line 286 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 32576 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256 && ((V16SFmode == V16SFmode
									       || V16SFmode == V8DFmode
									       || V16SFmode == V8DImode
									       || V16SFmode == V16SImode
									       || V16SFmode == V32HImode
									       || V16SFmode == V32HFmode)
									       || (TARGET_AVX10_2_256
										   && (V16SFmode == V8SFmode
										       || V16SFmode == V4DFmode
										       || V16SFmode == V4DImode
										       || V16SFmode == V8SImode
										       || V16SFmode == V16HImode
										       || V16SFmode == V16HFmode)))) && 
#line 386 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_512)))))
            return -1;
          return 10836; /* avx10_2_vcvttps2dqsv16sf_mask_round */

        case 1:
          if (!(
#line 286 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 32576 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256 && ((V8SFmode == V16SFmode
									       || V8SFmode == V8DFmode
									       || V8SFmode == V8DImode
									       || V8SFmode == V16SImode
									       || V8SFmode == V32HImode
									       || V8SFmode == V32HFmode)
									       || (TARGET_AVX10_2_256
										   && (V8SFmode == V8SFmode
										       || V8SFmode == V4DFmode
										       || V8SFmode == V4DImode
										       || V8SFmode == V8SImode
										       || V8SFmode == V16HImode
										       || V8SFmode == V16HFmode)))))))
            return -1;
          return 10844; /* avx10_2_vcvttps2dqsv8sf_mask_round */

        case 2:
          if (!(
#line 286 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 32576 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256 && ((V8DFmode == V16SFmode
									       || V8DFmode == V8DFmode
									       || V8DFmode == V8DImode
									       || V8DFmode == V16SImode
									       || V8DFmode == V32HImode
									       || V8DFmode == V32HFmode)
									       || (TARGET_AVX10_2_256
										   && (V8DFmode == V8SFmode
										       || V8DFmode == V4DFmode
										       || V8DFmode == V4DImode
										       || V8DFmode == V8SImode
										       || V8DFmode == V16HImode
										       || V8DFmode == V16HFmode)))) && 
#line 387 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_512)))))
            return -1;
          return 10856; /* avx10_2_vcvttpd2dqsv8df_mask_round */

        case 3:
          if (!(
#line 286 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 32576 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256 && ((V4DFmode == V16SFmode
									       || V4DFmode == V8DFmode
									       || V4DFmode == V8DImode
									       || V4DFmode == V16SImode
									       || V4DFmode == V32HImode
									       || V4DFmode == V32HFmode)
									       || (TARGET_AVX10_2_256
										   && (V4DFmode == V8SFmode
										       || V4DFmode == V4DFmode
										       || V4DFmode == V4DImode
										       || V4DFmode == V8SImode
										       || V4DFmode == V16HImode
										       || V4DFmode == V16HFmode)))))))
            return -1;
          return 10864; /* avx10_2_vcvttpd2dqsv4df_mask_round */

        case 4:
          if (!(
#line 286 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 32587 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256 && ((V8DFmode == V16SFmode
									       || V8DFmode == V8DFmode
									       || V8DFmode == V8DImode
									       || V8DFmode == V16SImode
									       || V8DFmode == V32HImode
									       || V8DFmode == V32HFmode)
									       || (TARGET_AVX10_2_256
										   && (V8DFmode == V8SFmode
										       || V8DFmode == V4DFmode
										       || V8DFmode == V4DImode
										       || V8DFmode == V8SImode
										       || V8DFmode == V16HImode
										       || V8DFmode == V16HFmode)))) && 
#line 451 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_512)))))
            return -1;
          return 10876; /* avx10_2_vcvttpd2qqsv8df_mask_round */

        case 5:
          if (!(
#line 286 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 32598 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256 && ((V8DImode == V16SFmode
									       || V8DImode == V8DFmode
									       || V8DImode == V8DImode
									       || V8DImode == V16SImode
									       || V8DImode == V32HImode
									       || V8DImode == V32HFmode)
									       || (TARGET_AVX10_2_256
										   && (V8DImode == V8SFmode
										       || V8DImode == V4DFmode
										       || V8DImode == V4DImode
										       || V8DImode == V8SImode
										       || V8DImode == V16HImode
										       || V8DImode == V16HFmode)))) && 
#line 618 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_512)))))
            return -1;
          return 10896; /* avx10_2_vcvttps2qqsv8di_mask_round */

        case 6:
          if (!(
#line 286 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 32587 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256 && ((V4DFmode == V16SFmode
									       || V4DFmode == V8DFmode
									       || V4DFmode == V8DImode
									       || V4DFmode == V16SImode
									       || V4DFmode == V32HImode
									       || V4DFmode == V32HFmode)
									       || (TARGET_AVX10_2_256
										   && (V4DFmode == V8SFmode
										       || V4DFmode == V4DFmode
										       || V4DFmode == V4DImode
										       || V4DFmode == V8SImode
										       || V4DFmode == V16HImode
										       || V4DFmode == V16HFmode)))))))
            return -1;
          return 10884; /* avx10_2_vcvttpd2qqsv4df_mask_round */

        case 7:
          if (!(
#line 286 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 32598 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256 && ((V4DImode == V16SFmode
									       || V4DImode == V8DFmode
									       || V4DImode == V8DImode
									       || V4DImode == V16SImode
									       || V4DImode == V32HImode
									       || V4DImode == V32HFmode)
									       || (TARGET_AVX10_2_256
										   && (V4DImode == V8SFmode
										       || V4DImode == V4DFmode
										       || V4DImode == V4DImode
										       || V4DImode == V8SImode
										       || V4DImode == V16HImode
										       || V4DImode == V16HFmode)))))))
            return -1;
          return 10904; /* avx10_2_vcvttps2qqsv4di_mask_round */

        default:
          return -1;
        }

    case 277:
      switch (pattern1305 (x2))
        {
        case 0:
          if (!(
#line 286 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 32576 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256 && ((V16SFmode == V16SFmode
									       || V16SFmode == V8DFmode
									       || V16SFmode == V8DImode
									       || V16SFmode == V16SImode
									       || V16SFmode == V32HImode
									       || V16SFmode == V32HFmode)
									       || (TARGET_AVX10_2_256
										   && (V16SFmode == V8SFmode
										       || V16SFmode == V4DFmode
										       || V16SFmode == V4DImode
										       || V16SFmode == V8SImode
										       || V16SFmode == V16HImode
										       || V16SFmode == V16HFmode)))) && 
#line 386 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_512)))))
            return -1;
          return 10840; /* avx10_2_vcvttps2udqsv16sf_mask_round */

        case 1:
          if (!(
#line 286 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 32576 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256 && ((V8SFmode == V16SFmode
									       || V8SFmode == V8DFmode
									       || V8SFmode == V8DImode
									       || V8SFmode == V16SImode
									       || V8SFmode == V32HImode
									       || V8SFmode == V32HFmode)
									       || (TARGET_AVX10_2_256
										   && (V8SFmode == V8SFmode
										       || V8SFmode == V4DFmode
										       || V8SFmode == V4DImode
										       || V8SFmode == V8SImode
										       || V8SFmode == V16HImode
										       || V8SFmode == V16HFmode)))))))
            return -1;
          return 10848; /* avx10_2_vcvttps2udqsv8sf_mask_round */

        case 2:
          if (!(
#line 286 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 32576 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256 && ((V8DFmode == V16SFmode
									       || V8DFmode == V8DFmode
									       || V8DFmode == V8DImode
									       || V8DFmode == V16SImode
									       || V8DFmode == V32HImode
									       || V8DFmode == V32HFmode)
									       || (TARGET_AVX10_2_256
										   && (V8DFmode == V8SFmode
										       || V8DFmode == V4DFmode
										       || V8DFmode == V4DImode
										       || V8DFmode == V8SImode
										       || V8DFmode == V16HImode
										       || V8DFmode == V16HFmode)))) && 
#line 387 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_512)))))
            return -1;
          return 10860; /* avx10_2_vcvttpd2udqsv8df_mask_round */

        case 3:
          if (!(
#line 286 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 32576 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256 && ((V4DFmode == V16SFmode
									       || V4DFmode == V8DFmode
									       || V4DFmode == V8DImode
									       || V4DFmode == V16SImode
									       || V4DFmode == V32HImode
									       || V4DFmode == V32HFmode)
									       || (TARGET_AVX10_2_256
										   && (V4DFmode == V8SFmode
										       || V4DFmode == V4DFmode
										       || V4DFmode == V4DImode
										       || V4DFmode == V8SImode
										       || V4DFmode == V16HImode
										       || V4DFmode == V16HFmode)))))))
            return -1;
          return 10868; /* avx10_2_vcvttpd2udqsv4df_mask_round */

        case 4:
          if (!(
#line 286 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 32587 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256 && ((V8DFmode == V16SFmode
									       || V8DFmode == V8DFmode
									       || V8DFmode == V8DImode
									       || V8DFmode == V16SImode
									       || V8DFmode == V32HImode
									       || V8DFmode == V32HFmode)
									       || (TARGET_AVX10_2_256
										   && (V8DFmode == V8SFmode
										       || V8DFmode == V4DFmode
										       || V8DFmode == V4DImode
										       || V8DFmode == V8SImode
										       || V8DFmode == V16HImode
										       || V8DFmode == V16HFmode)))) && 
#line 451 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_512)))))
            return -1;
          return 10880; /* avx10_2_vcvttpd2uqqsv8df_mask_round */

        case 5:
          if (!(
#line 286 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 32598 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256 && ((V8DImode == V16SFmode
									       || V8DImode == V8DFmode
									       || V8DImode == V8DImode
									       || V8DImode == V16SImode
									       || V8DImode == V32HImode
									       || V8DImode == V32HFmode)
									       || (TARGET_AVX10_2_256
										   && (V8DImode == V8SFmode
										       || V8DImode == V4DFmode
										       || V8DImode == V4DImode
										       || V8DImode == V8SImode
										       || V8DImode == V16HImode
										       || V8DImode == V16HFmode)))) && 
#line 618 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_512)))))
            return -1;
          return 10900; /* avx10_2_vcvttps2uqqsv8di_mask_round */

        case 6:
          if (!(
#line 286 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 32587 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256 && ((V4DFmode == V16SFmode
									       || V4DFmode == V8DFmode
									       || V4DFmode == V8DImode
									       || V4DFmode == V16SImode
									       || V4DFmode == V32HImode
									       || V4DFmode == V32HFmode)
									       || (TARGET_AVX10_2_256
										   && (V4DFmode == V8SFmode
										       || V4DFmode == V4DFmode
										       || V4DFmode == V4DImode
										       || V4DFmode == V8SImode
										       || V4DFmode == V16HImode
										       || V4DFmode == V16HFmode)))))))
            return -1;
          return 10888; /* avx10_2_vcvttpd2uqqsv4df_mask_round */

        case 7:
          if (!(
#line 286 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 32598 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256 && ((V4DImode == V16SFmode
									       || V4DImode == V8DFmode
									       || V4DImode == V8DImode
									       || V4DImode == V16SImode
									       || V4DImode == V32HImode
									       || V4DImode == V32HFmode)
									       || (TARGET_AVX10_2_256
										   && (V4DImode == V8SFmode
										       || V4DImode == V4DFmode
										       || V4DImode == V4DImode
										       || V4DImode == V8SImode
										       || V4DImode == V16HImode
										       || V4DImode == V16HFmode)))))))
            return -1;
          return 10908; /* avx10_2_vcvttps2uqqsv4di_mask_round */

        default:
          return -1;
        }

    default:
      return -1;
    }
}

 int
recog_269 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12, x13, x14, x15, x16, x17;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 2);
  if (!register_operand (x4, E_QImode))
    return -1;
  x5 = XEXP (x3, 0);
  switch (GET_CODE (x5))
    {
    case FLOAT:
      switch (pattern501 (x2))
        {
        case 0:
          if (!
#line 7707 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL && 1))
            return -1;
          return 4523; /* avx512fp16_vcvtdq2ph_v4si_mask_1 */

        case 1:
          if (!
#line 7707 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL && 1))
            return -1;
          return 4525; /* avx512fp16_vcvtqq2ph_v4di_mask_1 */

        case 2:
          if (!
#line 7783 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL))
            return -1;
          return 4535; /* *avx512fp16_vcvtqq2ph_v2di_mask */

        case 3:
          if (!
#line 9310 "../../gcc/config/i386/sse.md"
(TARGET_AVX512DQ && TARGET_AVX512VL))
            return -1;
          return 4984; /* *floatv2div2sf2_mask */

        case 4:
          if (!
#line 7722 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL))
            return -1;
          return 4529; /* *avx512fp16_vcvtdq2ph_v4si_mask_1 */

        case 5:
          if (!
#line 7722 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL))
            return -1;
          return 4531; /* *avx512fp16_vcvtqq2ph_v4di_mask_1 */

        case 6:
          if (!
#line 7798 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL))
            return -1;
          return 4537; /* *avx512fp16_vcvtqq2ph_v2di_mask_1 */

        case 7:
          if (!
#line 9325 "../../gcc/config/i386/sse.md"
(TARGET_AVX512DQ && TARGET_AVX512VL))
            return -1;
          return 4986; /* *floatv2div2sf2_mask_1 */

        default:
          return -1;
        }

    case UNSIGNED_FLOAT:
      switch (pattern501 (x2))
        {
        case 0:
          if (!
#line 7707 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL && 1))
            return -1;
          return 4524; /* avx512fp16_vcvtudq2ph_v4si_mask_1 */

        case 1:
          if (!
#line 7707 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL && 1))
            return -1;
          return 4527; /* avx512fp16_vcvtuqq2ph_v4di_mask_1 */

        case 2:
          if (!
#line 7783 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL))
            return -1;
          return 4536; /* *avx512fp16_vcvtuqq2ph_v2di_mask */

        case 3:
          if (!
#line 9310 "../../gcc/config/i386/sse.md"
(TARGET_AVX512DQ && TARGET_AVX512VL))
            return -1;
          return 4985; /* *floatunsv2div2sf2_mask */

        case 4:
          if (!
#line 7722 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL))
            return -1;
          return 4530; /* *avx512fp16_vcvtudq2ph_v4si_mask_1 */

        case 5:
          if (!
#line 7722 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL))
            return -1;
          return 4532; /* *avx512fp16_vcvtuqq2ph_v4di_mask_1 */

        case 6:
          if (!
#line 7798 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL))
            return -1;
          return 4538; /* *avx512fp16_vcvtuqq2ph_v2di_mask_1 */

        case 7:
          if (!
#line 9325 "../../gcc/config/i386/sse.md"
(TARGET_AVX512DQ && TARGET_AVX512VL))
            return -1;
          return 4987; /* *floatunsv2div2sf2_mask_1 */

        default:
          return -1;
        }

    case FLOAT_TRUNCATE:
      x6 = XEXP (x5, 0);
      operands[1] = x6;
      x7 = XEXP (x2, 1);
      operands[4] = x7;
      x8 = XEXP (x3, 1);
      switch (GET_CODE (x8))
        {
        case VEC_SELECT:
          x9 = XEXP (x8, 1);
          if (GET_CODE (x9) != PARALLEL)
            return -1;
          x10 = XEXP (x8, 0);
          operands[2] = x10;
          operands[3] = x4;
          switch (XVECLEN (x9, 0))
            {
            case 4:
              if (pattern1216 (x9, 
3, 
2, 
1, 
0) != 0)
                return -1;
              switch (GET_MODE (operands[0]))
                {
                case E_V8HFmode:
                  if (!register_operand (operands[0], E_V8HFmode)
                      || GET_MODE (x2) != E_V8HFmode
                      || GET_MODE (x3) != E_V4HFmode
                      || GET_MODE (x5) != E_V4HFmode
                      || GET_MODE (x8) != E_V4HFmode
                      || !nonimm_or_0_operand (operands[2], E_V8HFmode))
                    return -1;
                  switch (pattern1556 ())
                    {
                    case 0:
                      if (!
#line 8191 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL && 1))
                        return -1;
                      return 4747; /* avx512fp16_vcvtpd2ph_v4df_mask_1 */

                    case 1:
                      if (!
#line 8191 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL && 1))
                        return -1;
                      return 4749; /* avx512fp16_vcvtps2ph_v4sf_mask_1 */

                    default:
                      return -1;
                    }

                case E_V8BFmode:
                  if (pattern497 (x2, 
E_V4BFmode, 
E_V8BFmode, 
E_V4SFmode) != 0
                      || !
#line 31091 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BF16 && TARGET_AVX512VL))
                    return -1;
                  return 10341; /* avx512f_cvtneps2bf16_v4sf_mask_1 */

                default:
                  return -1;
                }

            case 2:
              switch (pattern498 (x2, 
E_V2DFmode))
                {
                case 0:
                  if (!
#line 8267 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL))
                    return -1;
                  return 4753; /* *avx512fp16_vcvtpd2ph_v2df_mask */

                case 1:
                  if (!
#line 10178 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))
                    return -1;
                  return 5181; /* *sse2_cvtpd2ps_mask */

                default:
                  return -1;
                }

            default:
              return -1;
            }

        case CONST_INT:
        case CONST_DOUBLE:
        case CONST_VECTOR:
          operands[3] = x8;
          operands[2] = x4;
          switch (GET_MODE (operands[0]))
            {
            case E_V8HFmode:
              if (!register_operand (operands[0], E_V8HFmode)
                  || GET_MODE (x2) != E_V8HFmode)
                return -1;
              switch (GET_MODE (x3))
                {
                case E_V4HFmode:
                  if (GET_MODE (x5) != E_V4HFmode
                      || !const0_operand (operands[3], E_V4HFmode))
                    return -1;
                  switch (pattern1556 ())
                    {
                    case 0:
                      if (!
#line 8206 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL))
                        return -1;
                      return 4750; /* *avx512fp16_vcvtpd2ph_v4df_mask_1 */

                    case 1:
                      if (!
#line 8206 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL))
                        return -1;
                      return 4751; /* *avx512fp16_vcvtps2ph_v4sf_mask_1 */

                    default:
                      return -1;
                    }

                case E_V2HFmode:
                  if (pattern499 (x5, 
E_V2DFmode) != 0
                      || !
#line 8282 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL))
                    return -1;
                  return 4754; /* *avx512fp16_vcvtpd2ph_v2df_mask_1 */

                default:
                  return -1;
                }

            case E_V4SFmode:
              if (pattern500 (x2, 
E_V2DFmode) != 0
                  || !
#line 10193 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))
                return -1;
              return 5182; /* *sse2_cvtpd2ps_mask_1 */

            default:
              return -1;
            }

        default:
          return -1;
        }

    case UNSPEC:
      switch (XVECLEN (x5, 0))
        {
        case 1:
          x11 = XVECEXP (x5, 0, 0);
          operands[1] = x11;
          switch (XINT (x5, 1))
            {
            case 46:
              switch (pattern920 (x2))
                {
                case 0:
                  if (!
#line 9470 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))
                    return -1;
                  return 5008; /* sse2_cvtpd2dq_mask */

                case 1:
                  if (!
#line 9485 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))
                    return -1;
                  return 5009; /* *sse2_cvtpd2dq_mask_1 */

                default:
                  return -1;
                }

            case 156:
              switch (pattern920 (x2))
                {
                case 0:
                  if (!
#line 9531 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))
                    return -1;
                  return 5019; /* fixuns_notruncv2dfv2si2_mask */

                case 1:
                  if (!
#line 9547 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))
                    return -1;
                  return 5020; /* *fixuns_notruncv2dfv2si2_mask_1 */

                default:
                  return -1;
                }

            case 173:
              if (GET_MODE (x5) != E_V2SImode)
                return -1;
              x8 = XEXP (x3, 1);
              if (pattern668 (x8, 
2, 
E_V2SImode) != 0)
                return -1;
              x9 = XEXP (x8, 1);
              x12 = XVECEXP (x9, 0, 0);
              if (x12 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
                return -1;
              x13 = XVECEXP (x9, 0, 1);
              if (x13 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
                return -1;
              x7 = XEXP (x2, 1);
              if (GET_CODE (x7) != CONST_VECTOR
                  || XVECLEN (x7, 0) != 2
                  || GET_MODE (x7) != E_V2SImode)
                return -1;
              x14 = XVECEXP (x7, 0, 0);
              if (x14 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
                return -1;
              x15 = XVECEXP (x7, 0, 1);
              if (x15 != const_int_rtx[MAX_SAVED_CONST_INT + 0]
                  || !register_operand (operands[0], E_V4SImode)
                  || GET_MODE (x2) != E_V4SImode
                  || GET_MODE (x3) != E_V2SImode
                  || !nonimmediate_operand (operands[1], E_V2DFmode))
                return -1;
              x10 = XEXP (x8, 0);
              operands[2] = x10;
              if (!nonimm_or_0_operand (operands[2], E_V4SImode))
                return -1;
              operands[3] = x4;
              if (!
#line 9608 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))
                return -1;
              return 5039; /* unspec_fixuns_truncv2dfv2si2_mask */

            case 253:
              if (pattern921 (x2) != 0
                  || !
#line 31892 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
                return -1;
              return 10495; /* *vcvtneph2bf8v8hf_mask */

            case 254:
              if (pattern921 (x2) != 0
                  || !
#line 31892 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
                return -1;
              return 10496; /* *vcvtneph2bf8sv8hf_mask */

            case 255:
              if (pattern921 (x2) != 0
                  || !
#line 31892 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
                return -1;
              return 10497; /* *vcvtneph2hf8v8hf_mask */

            case 256:
              if (pattern921 (x2) != 0
                  || !
#line 31892 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
                return -1;
              return 10498; /* *vcvtneph2hf8sv8hf_mask */

            default:
              return -1;
            }

        case 2:
          x8 = XEXP (x3, 1);
          if (pattern668 (x8, 
8, 
E_V8QImode) != 0)
            return -1;
          x9 = XEXP (x8, 1);
          x12 = XVECEXP (x9, 0, 0);
          if (x12 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
            return -1;
          x13 = XVECEXP (x9, 0, 1);
          if (x13 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
            return -1;
          x16 = XVECEXP (x9, 0, 2);
          if (x16 != const_int_rtx[MAX_SAVED_CONST_INT + 2]
              || pattern1413 (x9, 
7, 
6, 
5, 
4, 
3) != 0
              || !register_operand (operands[0], E_V16QImode)
              || GET_MODE (x2) != E_V16QImode
              || GET_MODE (x3) != E_V8QImode
              || GET_MODE (x5) != E_V8QImode)
            return -1;
          x11 = XVECEXP (x5, 0, 0);
          operands[1] = x11;
          if (!register_operand (operands[1], E_V16QImode))
            return -1;
          x17 = XVECEXP (x5, 0, 1);
          operands[2] = x17;
          if (!nonimmediate_operand (operands[2], E_V8HFmode))
            return -1;
          x10 = XEXP (x8, 0);
          operands[3] = x10;
          if (!nonimm_or_0_operand (operands[3], E_V16QImode))
            return -1;
          operands[4] = x4;
          x7 = XEXP (x2, 1);
          operands[5] = x7;
          if (!const0_operand (operands[5], E_V8QImode))
            return -1;
          switch (XINT (x5, 1))
            {
            case 245:
              if (!
#line 31804 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
                return -1;
              return 10471; /* *vcvtbiasph2bf8v8hf_mask */

            case 246:
              if (!
#line 31804 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
                return -1;
              return 10472; /* *vcvtbiasph2bf8sv8hf_mask */

            case 247:
              if (!
#line 31804 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
                return -1;
              return 10473; /* *vcvtbiasph2hf8v8hf_mask */

            case 248:
              if (!
#line 31804 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
                return -1;
              return 10474; /* *vcvtbiasph2hf8sv8hf_mask */

            default:
              return -1;
            }

        default:
          return -1;
        }

    case UNSIGNED_FIX:
      switch (pattern503 (x2))
        {
        case 0:
          if (!
#line 9624 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))
            return -1;
          return 5040; /* fixuns_truncv2dfv2si2_mask */

        case 1:
          if (!
#line 9638 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))
            return -1;
          return 5041; /* *fixuns_truncv2dfv2si2_mask_1 */

        default:
          return -1;
        }

    case FIX:
      switch (pattern503 (x2))
        {
        case 0:
          if (!
#line 9975 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))
            return -1;
          return 5159; /* sse2_cvttpd2dq_mask */

        case 1:
          if (!
#line 9989 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))
            return -1;
          return 5160; /* *sse2_cvttpd2dq_mask_1 */

        default:
          return -1;
        }

    case SS_TRUNCATE:
      switch (pattern509 (x2))
        {
        case 0:
          if (!
#line 15436 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))
            return -1;
          return 7298; /* avx512vl_ss_truncatev2div2qi2_mask */

        case 1:
          if (!
#line 15878 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))
            return -1;
          return 7413; /* avx512vl_ss_truncatev2div2hi2_mask */

        case 2:
          if (!
#line 16026 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))
            return -1;
          return 7432; /* avx512vl_ss_truncatev2div2si2_mask */

        case 3:
          if (!
#line 15531 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))
            return -1;
          return 7319; /* avx512vl_ss_truncatev4siv4qi2_mask */

        case 4:
          if (!
#line 15531 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))
            return -1;
          return 7322; /* avx512vl_ss_truncatev4div4qi2_mask */

        case 5:
          if (!
#line 15787 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))
            return -1;
          return 7389; /* avx512vl_ss_truncatev4siv4hi2_mask */

        case 6:
          if (!
#line 15787 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))
            return -1;
          return 7392; /* avx512vl_ss_truncatev4div4hi2_mask */

        case 7:
          if (!(
#line 15629 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL) && 
#line 15587 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW)))
            return -1;
          return 7349; /* avx512vl_ss_truncatev8hiv8qi2_mask */

        case 8:
          if (!
#line 15629 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))
            return -1;
          return 7352; /* avx512vl_ss_truncatev8siv8qi2_mask */

        case 9:
          if (!
#line 16145 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512))
            return -1;
          return 7450; /* avx512f_ss_truncatev8div16qi2_mask */

        case 10:
          if (!
#line 15457 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))
            return -1;
          return 7301; /* *avx512vl_ss_truncatev2div2qi2_mask_1 */

        case 11:
          if (!
#line 15895 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))
            return -1;
          return 7416; /* *avx512vl_ss_truncatev2div2hi2_mask_1 */

        case 12:
          if (!
#line 16041 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))
            return -1;
          return 7435; /* *avx512vl_ss_truncatev2div2si2_mask_1 */

        case 13:
          if (!
#line 15552 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))
            return -1;
          return 7325; /* *avx512vl_ss_truncatev4siv4qi2_mask_1 */

        case 14:
          if (!
#line 15552 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))
            return -1;
          return 7328; /* *avx512vl_ss_truncatev4div4qi2_mask_1 */

        case 15:
          if (!
#line 15804 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))
            return -1;
          return 7395; /* *avx512vl_ss_truncatev4siv4hi2_mask_1 */

        case 16:
          if (!
#line 15804 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))
            return -1;
          return 7398; /* *avx512vl_ss_truncatev4div4hi2_mask_1 */

        case 17:
          if (!(
#line 15650 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL) && 
#line 15587 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW)))
            return -1;
          return 7355; /* *avx512vl_ss_truncatev8hiv8qi2_mask_1 */

        case 18:
          if (!
#line 15650 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))
            return -1;
          return 7358; /* *avx512vl_ss_truncatev8siv8qi2_mask_1 */

        case 19:
          if (!
#line 16166 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512))
            return -1;
          return 7453; /* *avx512f_ss_truncatev8div16qi2_mask_1 */

        default:
          return -1;
        }

    case TRUNCATE:
      switch (pattern509 (x2))
        {
        case 0:
          if (!
#line 15436 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))
            return -1;
          return 7299; /* avx512vl_truncatev2div2qi2_mask */

        case 1:
          if (!
#line 15878 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))
            return -1;
          return 7414; /* avx512vl_truncatev2div2hi2_mask */

        case 2:
          if (!
#line 16026 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))
            return -1;
          return 7433; /* avx512vl_truncatev2div2si2_mask */

        case 3:
          if (!
#line 15531 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))
            return -1;
          return 7320; /* avx512vl_truncatev4siv4qi2_mask */

        case 4:
          if (!
#line 15531 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))
            return -1;
          return 7323; /* avx512vl_truncatev4div4qi2_mask */

        case 5:
          if (!
#line 15787 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))
            return -1;
          return 7390; /* avx512vl_truncatev4siv4hi2_mask */

        case 6:
          if (!
#line 15787 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))
            return -1;
          return 7393; /* avx512vl_truncatev4div4hi2_mask */

        case 7:
          if (!(
#line 15629 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL) && 
#line 15587 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW)))
            return -1;
          return 7350; /* avx512vl_truncatev8hiv8qi2_mask */

        case 8:
          if (!
#line 15629 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))
            return -1;
          return 7353; /* avx512vl_truncatev8siv8qi2_mask */

        case 9:
          if (!
#line 16145 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512))
            return -1;
          return 7451; /* avx512f_truncatev8div16qi2_mask */

        case 10:
          if (!
#line 15457 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))
            return -1;
          return 7302; /* *avx512vl_truncatev2div2qi2_mask_1 */

        case 11:
          if (!
#line 15895 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))
            return -1;
          return 7417; /* *avx512vl_truncatev2div2hi2_mask_1 */

        case 12:
          if (!
#line 16041 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))
            return -1;
          return 7436; /* *avx512vl_truncatev2div2si2_mask_1 */

        case 13:
          if (!
#line 15552 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))
            return -1;
          return 7326; /* *avx512vl_truncatev4siv4qi2_mask_1 */

        case 14:
          if (!
#line 15552 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))
            return -1;
          return 7329; /* *avx512vl_truncatev4div4qi2_mask_1 */

        case 15:
          if (!
#line 15804 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))
            return -1;
          return 7396; /* *avx512vl_truncatev4siv4hi2_mask_1 */

        case 16:
          if (!
#line 15804 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))
            return -1;
          return 7399; /* *avx512vl_truncatev4div4hi2_mask_1 */

        case 17:
          if (!(
#line 15650 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL) && 
#line 15587 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW)))
            return -1;
          return 7356; /* *avx512vl_truncatev8hiv8qi2_mask_1 */

        case 18:
          if (!
#line 15650 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))
            return -1;
          return 7359; /* *avx512vl_truncatev8siv8qi2_mask_1 */

        case 19:
          if (!
#line 16166 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512))
            return -1;
          return 7454; /* *avx512f_truncatev8div16qi2_mask_1 */

        default:
          return -1;
        }

    case US_TRUNCATE:
      switch (pattern509 (x2))
        {
        case 0:
          if (!
#line 15436 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))
            return -1;
          return 7300; /* avx512vl_us_truncatev2div2qi2_mask */

        case 1:
          if (!
#line 15878 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))
            return -1;
          return 7415; /* avx512vl_us_truncatev2div2hi2_mask */

        case 2:
          if (!
#line 16026 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))
            return -1;
          return 7434; /* avx512vl_us_truncatev2div2si2_mask */

        case 3:
          if (!
#line 15531 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))
            return -1;
          return 7321; /* avx512vl_us_truncatev4siv4qi2_mask */

        case 4:
          if (!
#line 15531 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))
            return -1;
          return 7324; /* avx512vl_us_truncatev4div4qi2_mask */

        case 5:
          if (!
#line 15787 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))
            return -1;
          return 7391; /* avx512vl_us_truncatev4siv4hi2_mask */

        case 6:
          if (!
#line 15787 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))
            return -1;
          return 7394; /* avx512vl_us_truncatev4div4hi2_mask */

        case 7:
          if (!(
#line 15629 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL) && 
#line 15587 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW)))
            return -1;
          return 7351; /* avx512vl_us_truncatev8hiv8qi2_mask */

        case 8:
          if (!
#line 15629 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))
            return -1;
          return 7354; /* avx512vl_us_truncatev8siv8qi2_mask */

        case 9:
          if (!
#line 16145 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512))
            return -1;
          return 7452; /* avx512f_us_truncatev8div16qi2_mask */

        case 10:
          if (!
#line 15457 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))
            return -1;
          return 7303; /* *avx512vl_us_truncatev2div2qi2_mask_1 */

        case 11:
          if (!
#line 15895 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))
            return -1;
          return 7418; /* *avx512vl_us_truncatev2div2hi2_mask_1 */

        case 12:
          if (!
#line 16041 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))
            return -1;
          return 7437; /* *avx512vl_us_truncatev2div2si2_mask_1 */

        case 13:
          if (!
#line 15552 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))
            return -1;
          return 7327; /* *avx512vl_us_truncatev4siv4qi2_mask_1 */

        case 14:
          if (!
#line 15552 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))
            return -1;
          return 7330; /* *avx512vl_us_truncatev4div4qi2_mask_1 */

        case 15:
          if (!
#line 15804 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))
            return -1;
          return 7397; /* *avx512vl_us_truncatev4siv4hi2_mask_1 */

        case 16:
          if (!
#line 15804 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))
            return -1;
          return 7400; /* *avx512vl_us_truncatev4div4hi2_mask_1 */

        case 17:
          if (!(
#line 15650 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL) && 
#line 15587 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW)))
            return -1;
          return 7357; /* *avx512vl_us_truncatev8hiv8qi2_mask_1 */

        case 18:
          if (!
#line 15650 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))
            return -1;
          return 7360; /* *avx512vl_us_truncatev8siv8qi2_mask_1 */

        case 19:
          if (!
#line 16166 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512))
            return -1;
          return 7455; /* *avx512f_us_truncatev8div16qi2_mask_1 */

        default:
          return -1;
        }

    default:
      return -1;
    }
}

 int
recog_284 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  switch (GET_CODE (x4))
    {
    case REG:
    case SUBREG:
    case MEM:
      x5 = XEXP (x2, 1);
      switch (XVECLEN (x5, 0))
        {
        case 4:
          res = recog_276 (x1, insn, pnum_clobbers);
          if (res >= 0)
            return res;
          break;

        case 8:
          res = recog_278 (x1, insn, pnum_clobbers);
          if (res >= 0)
            return res;
          break;

        case 16:
          res = recog_280 (x1, insn, pnum_clobbers);
          if (res >= 0)
            return res;
          break;

        case 2:
          res = recog_281 (x1, insn, pnum_clobbers);
          if (res >= 0)
            return res;
          break;

        case 64:
          res = recog_282 (x1, insn, pnum_clobbers);
          if (res >= 0)
            return res;
          break;

        case 32:
          res = recog_283 (x1, insn, pnum_clobbers);
          if (res >= 0)
            return res;
          break;

        default:
          break;
        }
      operands[2] = x4;
      if (XVECLEN (x5, 0) < 1)
        return -1;
      operands[3] = x5;
      x6 = XVECEXP (x5, 0, 0);
      operands[4] = x6;
      if (!const_int_operand (operands[4], E_VOIDmode))
        return -1;
      switch (GET_MODE (operands[0]))
        {
        case E_V8SImode:
          if (pattern1414 (x2, 
E_V8SImode, 
E_V16SImode) != 0
              || !
#line 28323 "../../gcc/config/i386/sse.md"
(TARGET_AVX
   && avx_vperm2f128_parallel (operands[3], V8SImode)))
            return -1;
          return 9447; /* *avx_vperm2f128v8si_nozero */

        case E_V8SFmode:
          if (pattern1414 (x2, 
E_V8SFmode, 
E_V16SFmode) != 0
              || !
#line 28323 "../../gcc/config/i386/sse.md"
(TARGET_AVX
   && avx_vperm2f128_parallel (operands[3], V8SFmode)))
            return -1;
          return 9448; /* *avx_vperm2f128v8sf_nozero */

        case E_V4DFmode:
          if (pattern1414 (x2, 
E_V4DFmode, 
E_V8DFmode) != 0
              || !
#line 28323 "../../gcc/config/i386/sse.md"
(TARGET_AVX
   && avx_vperm2f128_parallel (operands[3], V4DFmode)))
            return -1;
          return 9449; /* *avx_vperm2f128v4df_nozero */

        default:
          return -1;
        }

    case CONST_INT:
    case CONST_DOUBLE:
    case CONST_VECTOR:
      switch (pattern806 (x2))
        {
        case 0:
          if (!
#line 24132 "../../gcc/config/i386/sse.md"
(TARGET_AVX2))
            return -1;
          return 8754; /* *avx2_zero_extendv16qiv16hi2_1 */

        case 1:
          if (!
#line 24185 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512))
            return -1;
          return 8762; /* *avx512bw_zero_extendv32qiv32hi2_1 */

        case 2:
          if (!
#line 24281 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1))
            return -1;
          return 8778; /* *sse4_1_zero_extendv8qiv8hi2_3 */

        case 3:
          if (!
#line 24529 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512))
            return -1;
          return 8814; /* avx512f_zero_extendv16hiv16si2_1 */

        case 4:
          if (!
#line 24583 "../../gcc/config/i386/sse.md"
(TARGET_AVX2))
            return -1;
          return 8822; /* avx2_zero_extendv8hiv8si2_1 */

        case 5:
          if (!
#line 24688 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1))
            return -1;
          return 8838; /* *sse4_1_zero_extendv4hiv4si2_3 */

        case 6:
          if (pmovzx_parallel (operands[3], E_VOIDmode)
              && 
#line 25085 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512))
            return 8909; /* *avx512f_zero_extendv8siv8di2_1 */
          if (!movq_parallel (operands[3], E_VOIDmode)
              || !(
#line 29059 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_pre_reload_split ()) && 
#line 334 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 9625; /* *vec_concatv16si_0_1 */

        case 7:
          if (pmovzx_parallel (operands[3], E_VOIDmode)
              && 
#line 25137 "../../gcc/config/i386/sse.md"
(TARGET_AVX2))
            return 8915; /* *avx2_zero_extendv4siv4di2_1 */
          if (!movq_parallel (operands[3], E_VOIDmode)
              || !(
#line 29059 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_pre_reload_split ()) && 
#line 334 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 9626; /* *vec_concatv8si_0_1 */

        case 8:
          if (vector_operand (operands[1], E_V4SImode)
              && pmovzx_parallel (operands[3], E_VOIDmode)
              && 
#line 25222 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1))
            return 8929; /* *sse4_1_zero_extendv2siv2di2_3 */
          if (!nonimmediate_operand (operands[1], E_V4SImode)
              || !movq_parallel (operands[3], E_VOIDmode)
              || !
#line 29059 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_pre_reload_split ()))
            return -1;
          return 9627; /* *vec_concatv4si_0_1 */

        case 9:
          if (!(
#line 29059 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_pre_reload_split ()) && 
#line 335 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 9628; /* *vec_concatv8di_0_1 */

        case 10:
          if (!(
#line 29059 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_pre_reload_split ()) && 
#line 335 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 9629; /* *vec_concatv4di_0_1 */

        case 11:
          if (!
#line 29059 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_pre_reload_split ()))
            return -1;
          return 9630; /* *vec_concatv2di_0_1 */

        case 12:
          if (!(
#line 29059 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_pre_reload_split ()) && 
#line 336 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 9631; /* *vec_concatv32hf_0_1 */

        case 13:
          if (!(
#line 29059 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_pre_reload_split ()) && 
#line 336 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 9632; /* *vec_concatv16hf_0_1 */

        case 14:
          if (!
#line 29059 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_pre_reload_split ()))
            return -1;
          return 9633; /* *vec_concatv8hf_0_1 */

        case 15:
          if (!(
#line 29059 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_pre_reload_split ()) && 
#line 337 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 9634; /* *vec_concatv32bf_0_1 */

        case 16:
          if (!(
#line 29059 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_pre_reload_split ()) && 
#line 337 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 9635; /* *vec_concatv16bf_0_1 */

        case 17:
          if (!
#line 29059 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_pre_reload_split ()))
            return -1;
          return 9636; /* *vec_concatv8bf_0_1 */

        case 18:
          if (!(
#line 29059 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_pre_reload_split ()) && 
#line 338 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 9637; /* *vec_concatv16sf_0_1 */

        case 19:
          if (!(
#line 29059 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_pre_reload_split ()) && 
#line 338 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 9638; /* *vec_concatv8sf_0_1 */

        case 20:
          if (!
#line 29059 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_pre_reload_split ()))
            return -1;
          return 9639; /* *vec_concatv4sf_0_1 */

        case 21:
          if (!(
#line 29059 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_pre_reload_split ()) && 
#line 339 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 9640; /* *vec_concatv8df_0_1 */

        case 22:
          if (!(
#line 29059 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_pre_reload_split ()) && 
#line 339 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 9641; /* *vec_concatv4df_0_1 */

        case 23:
          if (!(
#line 29059 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_pre_reload_split ()) && 
#line 339 "../../gcc/config/i386/sse.md"
(TARGET_SSE2)))
            return -1;
          return 9642; /* *vec_concatv2df_0_1 */

        default:
          return -1;
        }

    default:
      return -1;
    }
}

 int
recog_300 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  operands[1] = x3;
  x4 = XEXP (x2, 1);
  operands[2] = x4;
  switch (GET_MODE (operands[0]))
    {
    case E_V16BFmode:
      if (GET_MODE (x2) != E_V16BFmode)
        return -1;
      if (register_operand (operands[0], E_V16BFmode)
          && vector_operand (operands[1], E_V16BFmode)
          && vector_operand (operands[2], E_V16BFmode)
          && (
#line 5349 "../../gcc/config/i386/sse.md"
(TARGET_SSE && 1
   && (!false || 16 != 16)
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 427 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
        return 3706; /* *andv16bf3 */
      if (!nonimmediate_operand (operands[0], E_V16BFmode)
          || !nonimmediate_operand (operands[1], E_V16BFmode)
          || !float_vector_all_ones_operand (operands[2], E_V16BFmode)
          || !(
#line 5457 "../../gcc/config/i386/sse.md"
(TARGET_SSE && ix86_pre_reload_split ()) && 
#line 413 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
        return -1;
      return 3761; /* *bit_and_float_vector_all_ones */

    case E_V8BFmode:
      if (GET_MODE (x2) != E_V8BFmode)
        return -1;
      if (register_operand (operands[0], E_V8BFmode)
          && vector_operand (operands[1], E_V8BFmode)
          && vector_operand (operands[2], E_V8BFmode)
          && (
#line 5349 "../../gcc/config/i386/sse.md"
(TARGET_SSE && 1
   && (!false || 16 != 16)
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 427 "../../gcc/config/i386/sse.md"
(TARGET_SSE2)))
        return 3709; /* *andv8bf3 */
      if (!nonimmediate_operand (operands[0], E_V8BFmode)
          || !nonimmediate_operand (operands[1], E_V8BFmode)
          || !float_vector_all_ones_operand (operands[2], E_V8BFmode)
          || !(
#line 5457 "../../gcc/config/i386/sse.md"
(TARGET_SSE && ix86_pre_reload_split ()) && 
#line 413 "../../gcc/config/i386/sse.md"
(TARGET_SSE2)))
        return -1;
      return 3762; /* *bit_and_float_vector_all_ones */

    case E_V16HFmode:
      if (GET_MODE (x2) != E_V16HFmode)
        return -1;
      if (register_operand (operands[0], E_V16HFmode)
          && vector_operand (operands[1], E_V16HFmode)
          && vector_operand (operands[2], E_V16HFmode)
          && (
#line 5349 "../../gcc/config/i386/sse.md"
(TARGET_SSE && 1
   && (!false || 16 != 16)
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 428 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
        return 3712; /* *andv16hf3 */
      if (!nonimmediate_operand (operands[0], E_V16HFmode)
          || !nonimmediate_operand (operands[1], E_V16HFmode)
          || !float_vector_all_ones_operand (operands[2], E_V16HFmode)
          || !(
#line 5457 "../../gcc/config/i386/sse.md"
(TARGET_SSE && ix86_pre_reload_split ()) && 
#line 415 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
        return -1;
      return 3764; /* *bit_and_float_vector_all_ones */

    case E_V8HFmode:
      if (GET_MODE (x2) != E_V8HFmode)
        return -1;
      if (register_operand (operands[0], E_V8HFmode)
          && vector_operand (operands[1], E_V8HFmode)
          && vector_operand (operands[2], E_V8HFmode)
          && (
#line 5349 "../../gcc/config/i386/sse.md"
(TARGET_SSE && 1
   && (!false || 16 != 16)
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 428 "../../gcc/config/i386/sse.md"
(TARGET_SSE2)))
        return 3715; /* *andv8hf3 */
      if (!nonimmediate_operand (operands[0], E_V8HFmode)
          || !nonimmediate_operand (operands[1], E_V8HFmode)
          || !float_vector_all_ones_operand (operands[2], E_V8HFmode)
          || !(
#line 5457 "../../gcc/config/i386/sse.md"
(TARGET_SSE && ix86_pre_reload_split ()) && 
#line 415 "../../gcc/config/i386/sse.md"
(TARGET_SSE2)))
        return -1;
      return 3765; /* *bit_and_float_vector_all_ones */

    case E_V8SFmode:
      if (GET_MODE (x2) != E_V8SFmode)
        return -1;
      if (register_operand (operands[0], E_V8SFmode)
          && vector_operand (operands[1], E_V8SFmode)
          && vector_operand (operands[2], E_V8SFmode)
          && (
#line 5349 "../../gcc/config/i386/sse.md"
(TARGET_SSE && 1
   && (!false || 32 != 16)
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 429 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
        return 3718; /* *andv8sf3 */
      if (!nonimmediate_operand (operands[0], E_V8SFmode)
          || !nonimmediate_operand (operands[1], E_V8SFmode)
          || !float_vector_all_ones_operand (operands[2], E_V8SFmode)
          || !(
#line 5457 "../../gcc/config/i386/sse.md"
(TARGET_SSE && ix86_pre_reload_split ()) && 
#line 416 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
        return -1;
      return 3767; /* *bit_and_float_vector_all_ones */

    case E_V4SFmode:
      if (GET_MODE (x2) != E_V4SFmode)
        return -1;
      if (register_operand (operands[0], E_V4SFmode)
          && vector_operand (operands[1], E_V4SFmode)
          && vector_operand (operands[2], E_V4SFmode)
          && 
#line 5349 "../../gcc/config/i386/sse.md"
(TARGET_SSE && 1
   && (!false || 32 != 16)
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
        return 3724; /* *andv4sf3 */
      if (!nonimmediate_operand (operands[0], E_V4SFmode)
          || !nonimmediate_operand (operands[1], E_V4SFmode)
          || !float_vector_all_ones_operand (operands[2], E_V4SFmode)
          || !
#line 5457 "../../gcc/config/i386/sse.md"
(TARGET_SSE && ix86_pre_reload_split ()))
        return -1;
      return 3768; /* *bit_and_float_vector_all_ones */

    case E_V4DFmode:
      if (GET_MODE (x2) != E_V4DFmode)
        return -1;
      if (register_operand (operands[0], E_V4DFmode)
          && vector_operand (operands[1], E_V4DFmode)
          && vector_operand (operands[2], E_V4DFmode)
          && (
#line 5349 "../../gcc/config/i386/sse.md"
(TARGET_SSE && 1
   && (!false || 64 != 16)
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 430 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
        return 3730; /* *andv4df3 */
      if (!nonimmediate_operand (operands[0], E_V4DFmode)
          || !nonimmediate_operand (operands[1], E_V4DFmode)
          || !float_vector_all_ones_operand (operands[2], E_V4DFmode)
          || !(
#line 5457 "../../gcc/config/i386/sse.md"
(TARGET_SSE && ix86_pre_reload_split ()) && 
#line 418 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
        return -1;
      return 3770; /* *bit_and_float_vector_all_ones */

    case E_V2DFmode:
      if (GET_MODE (x2) != E_V2DFmode)
        return -1;
      if (register_operand (operands[0], E_V2DFmode)
          && vector_operand (operands[1], E_V2DFmode)
          && vector_operand (operands[2], E_V2DFmode)
          && (
#line 5349 "../../gcc/config/i386/sse.md"
(TARGET_SSE && 1
   && (!false || 64 != 16)
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 430 "../../gcc/config/i386/sse.md"
(TARGET_SSE2)))
        return 3736; /* *andv2df3 */
      if (!nonimmediate_operand (operands[0], E_V2DFmode)
          || !nonimmediate_operand (operands[1], E_V2DFmode)
          || !float_vector_all_ones_operand (operands[2], E_V2DFmode)
          || !(
#line 5457 "../../gcc/config/i386/sse.md"
(TARGET_SSE && ix86_pre_reload_split ()) && 
#line 418 "../../gcc/config/i386/sse.md"
(TARGET_SSE2)))
        return -1;
      return 3771; /* *bit_and_float_vector_all_ones */

    case E_V32BFmode:
      if (GET_MODE (x2) != E_V32BFmode
          || !nonimmediate_operand (operands[1], E_V32BFmode))
        return -1;
      if (register_operand (operands[0], E_V32BFmode)
          && nonimmediate_operand (operands[2], E_V32BFmode)
          && (
#line 5419 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && !(MEM_P (operands[1]) && MEM_P (operands[2]))
   && (!false || 16 != 16)) && 
#line 492 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return 3742; /* *andv32bf3 */
      if (!nonimmediate_operand (operands[0], E_V32BFmode)
          || !float_vector_all_ones_operand (operands[2], E_V32BFmode)
          || !(
#line 5457 "../../gcc/config/i386/sse.md"
(TARGET_SSE && ix86_pre_reload_split ()) && 
#line 412 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
        return -1;
      return 3760; /* *bit_and_float_vector_all_ones */

    case E_V32HFmode:
      if (GET_MODE (x2) != E_V32HFmode
          || !nonimmediate_operand (operands[1], E_V32HFmode))
        return -1;
      if (register_operand (operands[0], E_V32HFmode)
          && nonimmediate_operand (operands[2], E_V32HFmode)
          && (
#line 5419 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && !(MEM_P (operands[1]) && MEM_P (operands[2]))
   && (!false || 16 != 16)) && 
#line 493 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return 3745; /* *andv32hf3 */
      if (!nonimmediate_operand (operands[0], E_V32HFmode)
          || !float_vector_all_ones_operand (operands[2], E_V32HFmode)
          || !(
#line 5457 "../../gcc/config/i386/sse.md"
(TARGET_SSE && ix86_pre_reload_split ()) && 
#line 414 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
        return -1;
      return 3763; /* *bit_and_float_vector_all_ones */

    case E_V16SFmode:
      if (GET_MODE (x2) != E_V16SFmode
          || !nonimmediate_operand (operands[1], E_V16SFmode))
        return -1;
      if (register_operand (operands[0], E_V16SFmode)
          && nonimmediate_operand (operands[2], E_V16SFmode)
          && (
#line 5419 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && !(MEM_P (operands[1]) && MEM_P (operands[2]))
   && (!false || 32 != 16)) && 
#line 494 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return 3748; /* *andv16sf3 */
      if (!nonimmediate_operand (operands[0], E_V16SFmode)
          || !float_vector_all_ones_operand (operands[2], E_V16SFmode)
          || !(
#line 5457 "../../gcc/config/i386/sse.md"
(TARGET_SSE && ix86_pre_reload_split ()) && 
#line 416 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
        return -1;
      return 3766; /* *bit_and_float_vector_all_ones */

    case E_V8DFmode:
      if (GET_MODE (x2) != E_V8DFmode
          || !nonimmediate_operand (operands[1], E_V8DFmode))
        return -1;
      if (register_operand (operands[0], E_V8DFmode)
          && nonimmediate_operand (operands[2], E_V8DFmode)
          && (
#line 5419 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && !(MEM_P (operands[1]) && MEM_P (operands[2]))
   && (!false || 64 != 16)) && 
#line 495 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return 3754; /* *andv8df3 */
      if (!nonimmediate_operand (operands[0], E_V8DFmode)
          || !float_vector_all_ones_operand (operands[2], E_V8DFmode)
          || !(
#line 5457 "../../gcc/config/i386/sse.md"
(TARGET_SSE && ix86_pre_reload_split ()) && 
#line 417 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
        return -1;
      return 3769; /* *bit_and_float_vector_all_ones */

    case E_V16SImode:
      if (pattern179 (x2, 
E_V16SImode) != 0
          || !(
#line 18731 "../../gcc/config/i386/sse.md"
(TARGET_SSE && 1
   && ix86_binary_operator_ok (AND, V16SImode, operands)) && 
#line 808 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
        return -1;
      return 8001; /* *andv16si3 */

    case E_V8SImode:
      if (pattern179 (x2, 
E_V8SImode) != 0
          || !(
#line 18731 "../../gcc/config/i386/sse.md"
(TARGET_SSE && 1
   && ix86_binary_operator_ok (AND, V8SImode, operands)) && 
#line 808 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
        return -1;
      return 8007; /* *andv8si3 */

    case E_V4SImode:
      if (pattern179 (x2, 
E_V4SImode) != 0
          || !
#line 18731 "../../gcc/config/i386/sse.md"
(TARGET_SSE && 1
   && ix86_binary_operator_ok (AND, V4SImode, operands)))
        return -1;
      return 8013; /* *andv4si3 */

    case E_V8DImode:
      if (pattern179 (x2, 
E_V8DImode) != 0
          || !(
#line 18731 "../../gcc/config/i386/sse.md"
(TARGET_SSE && 1
   && ix86_binary_operator_ok (AND, V8DImode, operands)) && 
#line 809 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
        return -1;
      return 8019; /* *andv8di3 */

    case E_V4DImode:
      if (pattern179 (x2, 
E_V4DImode) != 0
          || !(
#line 18731 "../../gcc/config/i386/sse.md"
(TARGET_SSE && 1
   && ix86_binary_operator_ok (AND, V4DImode, operands)) && 
#line 809 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
        return -1;
      return 8025; /* *andv4di3 */

    case E_V2DImode:
      if (pattern179 (x2, 
E_V2DImode) != 0
          || !
#line 18731 "../../gcc/config/i386/sse.md"
(TARGET_SSE && 1
   && ix86_binary_operator_ok (AND, V2DImode, operands)))
        return -1;
      return 8031; /* *andv2di3 */

    case E_V64QImode:
      if (pattern25 (x2, 
E_V64QImode) != 0
          || !(
#line 18833 "../../gcc/config/i386/sse.md"
(TARGET_SSE && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 812 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
        return -1;
      return 8037; /* *andv64qi3 */

    case E_V32QImode:
      if (pattern25 (x2, 
E_V32QImode) != 0
          || !(
#line 18833 "../../gcc/config/i386/sse.md"
(TARGET_SSE && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 812 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
        return -1;
      return 8040; /* *andv32qi3 */

    case E_V16QImode:
      if (pattern25 (x2, 
E_V16QImode) != 0
          || !
#line 18833 "../../gcc/config/i386/sse.md"
(TARGET_SSE && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
        return -1;
      return 8043; /* *andv16qi3 */

    case E_V32HImode:
      if (pattern25 (x2, 
E_V32HImode) != 0
          || !(
#line 18833 "../../gcc/config/i386/sse.md"
(TARGET_SSE && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 813 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
        return -1;
      return 8046; /* *andv32hi3 */

    case E_V16HImode:
      if (pattern25 (x2, 
E_V16HImode) != 0
          || !(
#line 18833 "../../gcc/config/i386/sse.md"
(TARGET_SSE && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 813 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
        return -1;
      return 8049; /* *andv16hi3 */

    case E_V8HImode:
      if (pattern25 (x2, 
E_V8HImode) != 0
          || !
#line 18833 "../../gcc/config/i386/sse.md"
(TARGET_SSE && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
        return -1;
      return 8052; /* *andv8hi3 */

    case E_V1TImode:
      if (pattern670 (x2, 
E_V1TImode) != 0
          || !
#line 18930 "../../gcc/config/i386/sse.md"
(TARGET_SSE2))
        return -1;
      return 8055; /* andv1ti3 */

    default:
      return -1;
    }
}

 int
recog_309 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  switch (GET_CODE (x4))
    {
    case REG:
    case SUBREG:
    case MEM:
    case NOT:
      switch (pattern537 (x2))
        {
        case 0:
          if (!(
#line 13777 "../../gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 336 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 5858; /* *avx512bw_vpternlogv32hf_1 */

        case 1:
          if (!(
#line 13777 "../../gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 336 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 5885; /* *avx512vl_vpternlogv16hf_1 */

        case 2:
          if (!
#line 13777 "../../gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))))
            return -1;
          return 5912; /* *avx512fp16_vpternlogv8hf_1 */

        case 3:
          if (!(
#line 13777 "../../gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 337 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 5939; /* *avx512bw_vpternlogv32bf_1 */

        case 4:
          if (!(
#line 13777 "../../gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 337 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 5966; /* *avx512vl_vpternlogv16bf_1 */

        case 5:
          if (!
#line 13777 "../../gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))))
            return -1;
          return 5993; /* *avx512vl_vpternlogv8bf_1 */

        case 6:
          if (!(
#line 13777 "../../gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 338 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 6020; /* *avx512f_vpternlogv16sf_1 */

        case 7:
          if (!(
#line 13777 "../../gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 338 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 6047; /* *avx512vl_vpternlogv8sf_1 */

        case 8:
          if (!
#line 13777 "../../gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))))
            return -1;
          return 6074; /* *avx512vl_vpternlogv4sf_1 */

        case 9:
          if (!(
#line 13777 "../../gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 339 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 6101; /* *avx512f_vpternlogv8df_1 */

        case 10:
          if (!(
#line 13777 "../../gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 339 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 6128; /* *avx512vl_vpternlogv4df_1 */

        case 11:
          if (!(
#line 13777 "../../gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 339 "../../gcc/config/i386/sse.md"
(TARGET_SSE2)))
            return -1;
          return 6155; /* *avx512vl_vpternlogv2df_1 */

        case 12:
          if (!(
#line 13777 "../../gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 336 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 5861; /* *avx512bw_vpternlogv32hf_1 */

        case 13:
          if (!(
#line 13777 "../../gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 336 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 5888; /* *avx512vl_vpternlogv16hf_1 */

        case 14:
          if (!
#line 13777 "../../gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))))
            return -1;
          return 5915; /* *avx512fp16_vpternlogv8hf_1 */

        case 15:
          if (!(
#line 13777 "../../gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 337 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 5942; /* *avx512bw_vpternlogv32bf_1 */

        case 16:
          if (!(
#line 13777 "../../gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 337 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 5969; /* *avx512vl_vpternlogv16bf_1 */

        case 17:
          if (!
#line 13777 "../../gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))))
            return -1;
          return 5996; /* *avx512vl_vpternlogv8bf_1 */

        case 18:
          if (!(
#line 13777 "../../gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 338 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 6023; /* *avx512f_vpternlogv16sf_1 */

        case 19:
          if (!(
#line 13777 "../../gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 338 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 6050; /* *avx512vl_vpternlogv8sf_1 */

        case 20:
          if (!
#line 13777 "../../gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))))
            return -1;
          return 6077; /* *avx512vl_vpternlogv4sf_1 */

        case 21:
          if (!(
#line 13777 "../../gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 339 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 6104; /* *avx512f_vpternlogv8df_1 */

        case 22:
          if (!(
#line 13777 "../../gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 339 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 6131; /* *avx512vl_vpternlogv4df_1 */

        case 23:
          if (!(
#line 13777 "../../gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 339 "../../gcc/config/i386/sse.md"
(TARGET_SSE2)))
            return -1;
          return 6158; /* *avx512vl_vpternlogv2df_1 */

        case 24:
          if (!(
#line 13777 "../../gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 336 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 5864; /* *avx512bw_vpternlogv32hf_1 */

        case 25:
          if (!(
#line 13777 "../../gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 336 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 5891; /* *avx512vl_vpternlogv16hf_1 */

        case 26:
          if (!
#line 13777 "../../gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))))
            return -1;
          return 5918; /* *avx512fp16_vpternlogv8hf_1 */

        case 27:
          if (!(
#line 13777 "../../gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 337 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 5945; /* *avx512bw_vpternlogv32bf_1 */

        case 28:
          if (!(
#line 13777 "../../gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 337 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 5972; /* *avx512vl_vpternlogv16bf_1 */

        case 29:
          if (!
#line 13777 "../../gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))))
            return -1;
          return 5999; /* *avx512vl_vpternlogv8bf_1 */

        case 30:
          if (!(
#line 13777 "../../gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 338 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 6026; /* *avx512f_vpternlogv16sf_1 */

        case 31:
          if (!(
#line 13777 "../../gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 338 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 6053; /* *avx512vl_vpternlogv8sf_1 */

        case 32:
          if (!
#line 13777 "../../gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))))
            return -1;
          return 6080; /* *avx512vl_vpternlogv4sf_1 */

        case 33:
          if (!(
#line 13777 "../../gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 339 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 6107; /* *avx512f_vpternlogv8df_1 */

        case 34:
          if (!(
#line 13777 "../../gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 339 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 6134; /* *avx512vl_vpternlogv4df_1 */

        case 35:
          if (!(
#line 13777 "../../gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 339 "../../gcc/config/i386/sse.md"
(TARGET_SSE2)))
            return -1;
          return 6161; /* *avx512vl_vpternlogv2df_1 */

        case 36:
          if (!(
#line 13946 "../../gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 336 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 6926; /* *avx512bw_vpternlogv32hf_3 */

        case 37:
          if (!(
#line 13946 "../../gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 336 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 6935; /* *avx512vl_vpternlogv16hf_3 */

        case 38:
          if (!
#line 13946 "../../gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()))
            return -1;
          return 6944; /* *avx512fp16_vpternlogv8hf_3 */

        case 39:
          if (!(
#line 13946 "../../gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 337 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 6953; /* *avx512bw_vpternlogv32bf_3 */

        case 40:
          if (!(
#line 13946 "../../gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 337 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 6962; /* *avx512vl_vpternlogv16bf_3 */

        case 41:
          if (!
#line 13946 "../../gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()))
            return -1;
          return 6971; /* *avx512vl_vpternlogv8bf_3 */

        case 42:
          if (!(
#line 13946 "../../gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 338 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 6980; /* *avx512f_vpternlogv16sf_3 */

        case 43:
          if (!(
#line 13946 "../../gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 338 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 6989; /* *avx512vl_vpternlogv8sf_3 */

        case 44:
          if (!
#line 13946 "../../gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()))
            return -1;
          return 6998; /* *avx512vl_vpternlogv4sf_3 */

        case 45:
          if (!(
#line 13946 "../../gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 339 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 7007; /* *avx512f_vpternlogv8df_3 */

        case 46:
          if (!(
#line 13946 "../../gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 339 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 7016; /* *avx512vl_vpternlogv4df_3 */

        case 47:
          if (!(
#line 13946 "../../gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 339 "../../gcc/config/i386/sse.md"
(TARGET_SSE2)))
            return -1;
          return 7025; /* *avx512vl_vpternlogv2df_3 */

        default:
          return -1;
        }

    case AND:
      switch (pattern538 (x2))
        {
        case 0:
          if (!(
#line 13862 "../../gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 336 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 6506; /* *avx512bw_vpternlogv32hf_2 */

        case 1:
          if (!(
#line 13862 "../../gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 336 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 6533; /* *avx512vl_vpternlogv16hf_2 */

        case 2:
          if (!
#line 13862 "../../gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))))
            return -1;
          return 6560; /* *avx512fp16_vpternlogv8hf_2 */

        case 3:
          if (!(
#line 13862 "../../gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 337 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 6587; /* *avx512bw_vpternlogv32bf_2 */

        case 4:
          if (!(
#line 13862 "../../gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 337 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 6614; /* *avx512vl_vpternlogv16bf_2 */

        case 5:
          if (!
#line 13862 "../../gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))))
            return -1;
          return 6641; /* *avx512vl_vpternlogv8bf_2 */

        case 6:
          if (!(
#line 13862 "../../gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 338 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 6668; /* *avx512f_vpternlogv16sf_2 */

        case 7:
          if (!(
#line 13862 "../../gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 338 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 6695; /* *avx512vl_vpternlogv8sf_2 */

        case 8:
          if (!
#line 13862 "../../gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))))
            return -1;
          return 6722; /* *avx512vl_vpternlogv4sf_2 */

        case 9:
          if (!(
#line 13862 "../../gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 339 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 6749; /* *avx512f_vpternlogv8df_2 */

        case 10:
          if (!(
#line 13862 "../../gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 339 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 6776; /* *avx512vl_vpternlogv4df_2 */

        case 11:
          if (!(
#line 13862 "../../gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 339 "../../gcc/config/i386/sse.md"
(TARGET_SSE2)))
            return -1;
          return 6803; /* *avx512vl_vpternlogv2df_2 */

        default:
          return -1;
        }

    case IOR:
      switch (pattern538 (x2))
        {
        case 0:
          if (!(
#line 13862 "../../gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 336 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 6509; /* *avx512bw_vpternlogv32hf_2 */

        case 1:
          if (!(
#line 13862 "../../gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 336 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 6536; /* *avx512vl_vpternlogv16hf_2 */

        case 2:
          if (!
#line 13862 "../../gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))))
            return -1;
          return 6563; /* *avx512fp16_vpternlogv8hf_2 */

        case 3:
          if (!(
#line 13862 "../../gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 337 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 6590; /* *avx512bw_vpternlogv32bf_2 */

        case 4:
          if (!(
#line 13862 "../../gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 337 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 6617; /* *avx512vl_vpternlogv16bf_2 */

        case 5:
          if (!
#line 13862 "../../gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))))
            return -1;
          return 6644; /* *avx512vl_vpternlogv8bf_2 */

        case 6:
          if (!(
#line 13862 "../../gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 338 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 6671; /* *avx512f_vpternlogv16sf_2 */

        case 7:
          if (!(
#line 13862 "../../gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 338 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 6698; /* *avx512vl_vpternlogv8sf_2 */

        case 8:
          if (!
#line 13862 "../../gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))))
            return -1;
          return 6725; /* *avx512vl_vpternlogv4sf_2 */

        case 9:
          if (!(
#line 13862 "../../gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 339 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 6752; /* *avx512f_vpternlogv8df_2 */

        case 10:
          if (!(
#line 13862 "../../gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 339 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 6779; /* *avx512vl_vpternlogv4df_2 */

        case 11:
          if (!(
#line 13862 "../../gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 339 "../../gcc/config/i386/sse.md"
(TARGET_SSE2)))
            return -1;
          return 6806; /* *avx512vl_vpternlogv2df_2 */

        default:
          return -1;
        }

    case XOR:
      switch (pattern538 (x2))
        {
        case 0:
          if (!(
#line 13862 "../../gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 336 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 6512; /* *avx512bw_vpternlogv32hf_2 */

        case 1:
          if (!(
#line 13862 "../../gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 336 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 6539; /* *avx512vl_vpternlogv16hf_2 */

        case 2:
          if (!
#line 13862 "../../gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))))
            return -1;
          return 6566; /* *avx512fp16_vpternlogv8hf_2 */

        case 3:
          if (!(
#line 13862 "../../gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 337 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 6593; /* *avx512bw_vpternlogv32bf_2 */

        case 4:
          if (!(
#line 13862 "../../gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 337 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 6620; /* *avx512vl_vpternlogv16bf_2 */

        case 5:
          if (!
#line 13862 "../../gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))))
            return -1;
          return 6647; /* *avx512vl_vpternlogv8bf_2 */

        case 6:
          if (!(
#line 13862 "../../gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 338 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 6674; /* *avx512f_vpternlogv16sf_2 */

        case 7:
          if (!(
#line 13862 "../../gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 338 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 6701; /* *avx512vl_vpternlogv8sf_2 */

        case 8:
          if (!
#line 13862 "../../gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))))
            return -1;
          return 6728; /* *avx512vl_vpternlogv4sf_2 */

        case 9:
          if (!(
#line 13862 "../../gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 339 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 6755; /* *avx512f_vpternlogv8df_2 */

        case 10:
          if (!(
#line 13862 "../../gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 339 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 6782; /* *avx512vl_vpternlogv4df_2 */

        case 11:
          if (!(
#line 13862 "../../gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 339 "../../gcc/config/i386/sse.md"
(TARGET_SSE2)))
            return -1;
          return 6809; /* *avx512vl_vpternlogv2df_2 */

        default:
          return -1;
        }

    default:
      return -1;
    }
}

 int
recog_318 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12, x13, x14, x15, x16, x17;
  rtx x18, x19, x20, x21, x22;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  operands[0] = x2;
  x3 = XEXP (x1, 1);
  x4 = XEXP (x3, 0);
  switch (GET_CODE (x4))
    {
    case VEC_SELECT:
      return recog_270 (x1, insn, pnum_clobbers);

    case VEC_CONCAT:
      x5 = XEXP (x4, 0);
      switch (GET_CODE (x5))
        {
        case PLUS:
          switch (pattern326 (x3, 
PLUS))
            {
            case 0:
              if (!
#line 3667 "../../gcc/config/i386/sse.md"
(TARGET_AVX))
                return -1;
              return 3179; /* avx_haddv4df3 */

            case 1:
              if (!
#line 3843 "../../gcc/config/i386/sse.md"
(TARGET_SSE3))
                return -1;
              return 3187; /* sse3_haddv4sf3 */

            default:
              return -1;
            }

        case MINUS:
          switch (pattern326 (x3, 
MINUS))
            {
            case 0:
              if (!
#line 3667 "../../gcc/config/i386/sse.md"
(TARGET_AVX))
                return -1;
              return 3180; /* avx_hsubv4df3 */

            case 1:
              if (!
#line 3843 "../../gcc/config/i386/sse.md"
(TARGET_SSE3))
                return -1;
              return 3188; /* sse3_hsubv4sf3 */

            default:
              return -1;
            }

        case VEC_CONCAT:
          if (GET_MODE (x5) != E_V2SFmode)
            return -1;
          x6 = XEXP (x4, 1);
          if (GET_CODE (x6) != VEC_CONCAT
              || GET_MODE (x6) != E_V2SFmode)
            return -1;
          x7 = XEXP (x3, 1);
          if (GET_CODE (x7) != VEC_CONCAT
              || GET_MODE (x7) != E_V4SFmode
              || pattern1031 (x7, 
E_V2SFmode, 
VEC_CONCAT) != 0
              || !register_operand (operands[0], E_V8SFmode)
              || GET_MODE (x3) != E_V8SFmode
              || GET_MODE (x4) != E_V4SFmode
              || pattern1554 (x3, 
E_SFmode) != 0)
            return -1;
          x8 = XEXP (x5, 0);
          switch (GET_CODE (x8))
            {
            case PLUS:
              if (pattern1812 (x3, 
PLUS) != 0
                  || !
#line 3815 "../../gcc/config/i386/sse.md"
(TARGET_AVX))
                return -1;
              return 3185; /* avx_haddv8sf3 */

            case MINUS:
              if (pattern1812 (x3, 
MINUS) != 0
                  || !
#line 3815 "../../gcc/config/i386/sse.md"
(TARGET_AVX))
                return -1;
              return 3186; /* avx_hsubv8sf3 */

            default:
              return -1;
            }

        case REG:
        case SUBREG:
        case MEM:
          operands[1] = x5;
          if (pattern408 (x3) != 0)
            return -1;
          switch (GET_MODE (operands[0]))
            {
            case E_V16SImode:
              if (pattern1486 (x3, 
E_V8SImode, 
E_V4SImode, 
E_V16SImode) != 0
                  || !(
#line 30138 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && !(MEM_P (operands[0]) && MEM_P (operands[1]))) && 
#line 1445 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                return -1;
              return 10099; /* avx512f_si512_si */

            case E_V16SFmode:
              if (pattern1486 (x3, 
E_V8SFmode, 
E_V4SFmode, 
E_V16SFmode) != 0
                  || !(
#line 30138 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && !(MEM_P (operands[0]) && MEM_P (operands[1]))) && 
#line 1445 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                return -1;
              return 10100; /* avx512f_ps512_ps */

            case E_V8DFmode:
              if (pattern1486 (x3, 
E_V4DFmode, 
E_V2DFmode, 
E_V8DFmode) != 0
                  || !(
#line 30138 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && !(MEM_P (operands[0]) && MEM_P (operands[1]))) && 
#line 1445 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                return -1;
              return 10101; /* avx512f_pd512_pd */

            default:
              return -1;
            }

        default:
          return -1;
        }

    case PLUS:
      if (pattern94 (x3, 
E_V2DFmode, 
E_DFmode) != 0)
        return -1;
      x7 = XEXP (x3, 1);
      x9 = XEXP (x7, 0);
      x10 = XEXP (x9, 0);
      operands[2] = x10;
      if (!vector_operand (operands[2], E_V2DFmode)
          || pattern1845 (x3) != 0
          || !
#line 3706 "../../gcc/config/i386/sse.md"
(TARGET_SSE3
   && INTVAL (operands[3]) != INTVAL (operands[4])
   && INTVAL (operands[5]) != INTVAL (operands[6])))
        return -1;
      return 3181; /* *sse3_haddv2df3 */

    case MINUS:
      if (pattern95 (x4, 
E_DFmode) != 0)
        return -1;
      x7 = XEXP (x3, 1);
      if (GET_CODE (x7) != MINUS
          || GET_MODE (x7) != E_DFmode
          || pattern1555 (x7, 
E_DFmode) != 0
          || !register_operand (operands[0], E_V2DFmode)
          || GET_MODE (x3) != E_V2DFmode)
        return -1;
      x5 = XEXP (x4, 0);
      x8 = XEXP (x5, 0);
      operands[1] = x8;
      if (!register_operand (operands[1], E_V2DFmode))
        return -1;
      x9 = XEXP (x7, 0);
      x10 = XEXP (x9, 0);
      operands[2] = x10;
      if (!vector_operand (operands[2], E_V2DFmode))
        return -1;
      x6 = XEXP (x4, 1);
      x11 = XEXP (x6, 0);
      if (!rtx_equal_p (x11, operands[1]))
        return -1;
      x12 = XEXP (x7, 1);
      x13 = XEXP (x12, 0);
      if (!rtx_equal_p (x13, operands[2])
          || !
#line 3731 "../../gcc/config/i386/sse.md"
(TARGET_SSE3))
        return -1;
      return 3182; /* sse3_hsubv2df3 */

    case FLOAT:
      switch (pattern177 (x3))
        {
        case 0:
          if (!
#line 7665 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL))
            return -1;
          return 4519; /* *avx512fp16_vcvtdq2ph_v4si */

        case 1:
          if (!
#line 7665 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL))
            return -1;
          return 4521; /* *avx512fp16_vcvtqq2ph_v4di */

        case 2:
          if (!
#line 7754 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL))
            return -1;
          return 4533; /* *avx512fp16_vcvtqq2ph_v2di */

        case 3:
          if (!
#line 9204 "../../gcc/config/i386/sse.md"
(TARGET_AVX512DQ && TARGET_AVX512VL))
            return -1;
          return 4982; /* *avx512dq_floatv2div2sf2 */

        default:
          return -1;
        }

    case UNSIGNED_FLOAT:
      switch (pattern177 (x3))
        {
        case 0:
          if (!
#line 7665 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL))
            return -1;
          return 4520; /* *avx512fp16_vcvtudq2ph_v4si */

        case 1:
          if (!
#line 7665 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL))
            return -1;
          return 4522; /* *avx512fp16_vcvtuqq2ph_v4di */

        case 2:
          if (!
#line 7754 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL))
            return -1;
          return 4534; /* *avx512fp16_vcvtuqq2ph_v2di */

        case 3:
          if (!
#line 9204 "../../gcc/config/i386/sse.md"
(TARGET_AVX512DQ && TARGET_AVX512VL))
            return -1;
          return 4983; /* *avx512dq_floatunsv2div2sf2 */

        default:
          return -1;
        }

    case VEC_MERGE:
      return recog_269 (x1, insn, pnum_clobbers);

    case FLOAT_TRUNCATE:
      x7 = XEXP (x3, 1);
      switch (GET_CODE (x7))
        {
        case CONST_INT:
        case CONST_DOUBLE:
        case CONST_VECTOR:
          operands[2] = x7;
          x5 = XEXP (x4, 0);
          operands[1] = x5;
          switch (GET_MODE (operands[0]))
            {
            case E_V8HFmode:
              if (!register_operand (operands[0], E_V8HFmode)
                  || GET_MODE (x3) != E_V8HFmode)
                return -1;
              switch (GET_MODE (x4))
                {
                case E_V4HFmode:
                  if (!const0_operand (operands[2], E_V4HFmode))
                    return -1;
                  switch (GET_MODE (operands[1]))
                    {
                    case E_V4DFmode:
                      if (!vector_operand (operands[1], E_V4DFmode)
                          || !
#line 8145 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL))
                        return -1;
                      return 4745; /* *avx512fp16_vcvtpd2ph_v4df */

                    case E_V4SFmode:
                      if (!vector_operand (operands[1], E_V4SFmode)
                          || !
#line 8145 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL))
                        return -1;
                      return 4746; /* *avx512fp16_vcvtps2ph_v4sf */

                    default:
                      return -1;
                    }

                case E_V2HFmode:
                  if (!vector_operand (operands[1], E_V2DFmode)
                      || !const0_operand (operands[2], E_V6HFmode)
                      || !
#line 8237 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL))
                    return -1;
                  return 4752; /* *avx512fp16_vcvtpd2ph_v2df */

                default:
                  return -1;
                }

            case E_V4SFmode:
              if (!register_operand (operands[0], E_V4SFmode)
                  || GET_MODE (x3) != E_V4SFmode
                  || GET_MODE (x4) != E_V2SFmode
                  || !vector_operand (operands[1], E_V2DFmode)
                  || !const0_operand (operands[2], E_V2SFmode)
                  || !
#line 10133 "../../gcc/config/i386/sse.md"
(TARGET_SSE2))
                return -1;
              return 5179; /* *sse2_cvtpd2ps */

            case E_V8BFmode:
              if (pattern176 (x3, 
E_V4BFmode, 
E_V4SFmode, 
E_V8BFmode) != 0
                  || !
#line 31048 "../../gcc/config/i386/sse.md"
(TARGET_AVXNECONVERT || (TARGET_AVX512BF16 && TARGET_AVX512VL)))
                return -1;
              return 10340; /* *vcvtneps2bf16_v4sf */

            default:
              return -1;
            }

        case FLOAT_TRUNCATE:
          x5 = XEXP (x4, 0);
          operands[2] = x5;
          x9 = XEXP (x7, 0);
          operands[1] = x9;
          switch (GET_MODE (operands[0]))
            {
            case E_V32BFmode:
              if (pattern792 (x3, 
E_V16SFmode, 
E_V16BFmode, 
E_V32BFmode) != 0
                  || !(
#line 31009 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BF16) && 
#line 30975 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                return -1;
              return 10334; /* avx512f_cvtne2ps2bf16_v32bf */

            case E_V16BFmode:
              if (pattern792 (x3, 
E_V8SFmode, 
E_V8BFmode, 
E_V16BFmode) != 0
                  || !(
#line 31009 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BF16) && 
#line 30975 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                return -1;
              return 10336; /* avx512f_cvtne2ps2bf16_v16bf */

            case E_V8BFmode:
              if (pattern792 (x3, 
E_V4SFmode, 
E_V4BFmode, 
E_V8BFmode) != 0
                  || !(
#line 31009 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BF16) && 
#line 30975 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                return -1;
              return 10338; /* avx512f_cvtne2ps2bf16_v8bf */

            case E_V32HFmode:
              if (pattern793 (x3, 
E_V16SFmode, 
E_V16HFmode, 
E_V32HFmode) != 0
                  || !(
#line 31706 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256 && 1) && 
#line 562 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_512)))
                return -1;
              return 10433; /* avx10_2_cvt2ps2phx_v32hf */

            case E_V16HFmode:
              if (pattern793 (x3, 
E_V8SFmode, 
E_V8HFmode, 
E_V16HFmode) != 0
                  || !
#line 31706 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256 && 1))
                return -1;
              return 10437; /* avx10_2_cvt2ps2phx_v16hf */

            case E_V8HFmode:
              if (pattern793 (x3, 
E_V4SFmode, 
E_V4HFmode, 
E_V8HFmode) != 0
                  || !
#line 31706 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256 && 1))
                return -1;
              return 10441; /* avx10_2_cvt2ps2phx_v8hf */

            default:
              return -1;
            }

        default:
          return -1;
        }

    case UNSPEC:
      return recog_271 (x1, insn, pnum_clobbers);

    case UNSIGNED_FIX:
      if (GET_MODE (x4) != E_V2SImode)
        return -1;
      x7 = XEXP (x3, 1);
      if (GET_CODE (x7) != CONST_VECTOR
          || XVECLEN (x7, 0) != 2
          || GET_MODE (x7) != E_V2SImode
          || pattern273 (x3, 
E_V2DFmode, 
E_V4SImode, 
0) != 0
          || !
#line 9591 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))
        return -1;
      return 5038; /* *fixuns_truncv2dfv2si2 */

    case FIX:
      if (GET_MODE (x4) != E_V2SImode)
        return -1;
      x7 = XEXP (x3, 1);
      if (GET_CODE (x7) != CONST_VECTOR
          || pattern510 (x7, 
E_V2SImode, 
2) != 0
          || !register_operand (operands[0], E_V4SImode)
          || GET_MODE (x3) != E_V4SImode)
        return -1;
      x5 = XEXP (x4, 0);
      operands[1] = x5;
      if (!vector_operand (operands[1], E_V2DFmode)
          || !
#line 9951 "../../gcc/config/i386/sse.md"
(TARGET_SSE2))
        return -1;
      return 5158; /* sse2_cvttpd2dq */

    case REG:
    case SUBREG:
    case MEM:
      x7 = XEXP (x3, 1);
      switch (GET_CODE (x7))
        {
        case VEC_SELECT:
          res = recog_267 (x1, insn, pnum_clobbers);
          if (res >= 0)
            return res;
          break;

        case CONST_INT:
        case CONST_DOUBLE:
        case CONST_VECTOR:
        case REG:
        case SUBREG:
        case MEM:
          res = recog_268 (x1, insn, pnum_clobbers);
          if (res >= 0)
            return res;
          break;

        case UNSPEC:
          if (XVECLEN (x7, 0) == 1
              && XINT (x7, 1) == 147)
            {
              x14 = XVECEXP (x7, 0, 0);
              if (x14 == const_int_rtx[MAX_SAVED_CONST_INT + 0])
                {
                  operands[1] = x4;
                  switch (GET_MODE (operands[0]))
                    {
                    case E_V8SImode:
                      if (pattern1032 (x3, 
E_V4SImode, 
E_V8SImode) == 0
                          && 
#line 28811 "../../gcc/config/i386/sse.md"
(TARGET_AVX && !(MEM_P (operands[0]) && MEM_P (operands[1]))))
                        return 9546; /* avx_si256_si */
                      break;

                    case E_V8SFmode:
                      if (pattern1032 (x3, 
E_V4SFmode, 
E_V8SFmode) == 0
                          && 
#line 28811 "../../gcc/config/i386/sse.md"
(TARGET_AVX && !(MEM_P (operands[0]) && MEM_P (operands[1]))))
                        return 9547; /* avx_ps256_ps */
                      break;

                    case E_V4DFmode:
                      if (pattern1032 (x3, 
E_V2DFmode, 
E_V4DFmode) == 0
                          && 
#line 28811 "../../gcc/config/i386/sse.md"
(TARGET_AVX && !(MEM_P (operands[0]) && MEM_P (operands[1]))))
                        return 9548; /* avx_pd256_pd */
                      break;

                    case E_V16SImode:
                      if (pattern1032 (x3, 
E_V8SImode, 
E_V16SImode) == 0
                          && (
#line 30155 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && !(MEM_P (operands[0]) && MEM_P (operands[1]))) && 
#line 1445 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                        return 10102; /* avx512f_si512_256si */
                      break;

                    case E_V16SFmode:
                      if (pattern1032 (x3, 
E_V8SFmode, 
E_V16SFmode) == 0
                          && (
#line 30155 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && !(MEM_P (operands[0]) && MEM_P (operands[1]))) && 
#line 1445 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                        return 10103; /* avx512f_ps512_256ps */
                      break;

                    case E_V8DFmode:
                      if (pattern1032 (x3, 
E_V4DFmode, 
E_V8DFmode) == 0
                          && (
#line 30155 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && !(MEM_P (operands[0]) && MEM_P (operands[1]))) && 
#line 1445 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                        return 10104; /* avx512f_pd512_256pd */
                      break;

                    default:
                      break;
                    }
                }
            }
          break;

        default:
          break;
        }
      if (!register_operand (operands[0], E_V4DImode)
          || GET_MODE (x3) != E_V4DImode)
        return -1;
      if (GET_CODE (x4) == SUBREG
          && pattern597 (x3) == 0)
        {
          x5 = XEXP (x4, 0);
          x15 = XVECEXP (x5, 0, 0);
          operands[1] = x15;
          if (memory_operand (operands[1], E_V16QImode))
            {
              x9 = XEXP (x7, 0);
              x16 = XVECEXP (x9, 0, 0);
              if (rtx_equal_p (x16, operands[1])
                  && 
#line 27908 "../../gcc/config/i386/sse.md"
(TARGET_AVX2 && ix86_pre_reload_split ()))
                return 9293; /* avx2_lddqu_inserti_to_bcasti */
            }
        }
      operands[1] = x4;
      if (!nonimmediate_operand (operands[1], E_V2DImode))
        return -1;
      if (rtx_equal_p (x7, operands[1])
          && 
#line 28000 "../../gcc/config/i386/sse.md"
(TARGET_AVX))
        return 9311; /* avx_vbroadcastf128_v4di */
      operands[2] = x7;
      if (!nonimm_or_0_operand (operands[2], E_V2DImode)
          || !
#line 28945 "../../gcc/config/i386/sse.md"
(TARGET_AVX
   && (operands[2] == CONST0_RTX (V2DImode)
       || !MEM_P (operands[1]))))
        return -1;
      return 9608; /* avx_vec_concatv4di */

    case ZERO_EXTEND:
      switch (pattern178 (x3))
        {
        case 0:
          if (!
#line 12097 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && ix86_pre_reload_split ()))
            return -1;
          return 5315; /* *vec_setv2di_0_zero_extendhi_1 */

        case 1:
          if (!
#line 12211 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_pre_reload_split ()))
            return -1;
          return 5327; /* *vec_setv2di_0_zero_extendsi_1 */

        default:
          return -1;
        }

    case SS_TRUNCATE:
      x5 = XEXP (x4, 0);
      operands[1] = x5;
      x7 = XEXP (x3, 1);
      switch (GET_CODE (x7))
        {
        case CONST_INT:
        case CONST_DOUBLE:
        case CONST_VECTOR:
          operands[2] = x7;
          switch (pattern512 (x3))
            {
            case 0:
              if (
#line 15367 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))
                return 7276; /* avx512vl_ss_truncatev4div4qi2 */
              break;

            case 1:
              if (
#line 15367 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))
                return 7285; /* avx512vl_ss_truncatev4siv4qi2 */
              break;

            case 2:
              if (
#line 15367 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))
                return 7279; /* avx512vl_ss_truncatev2div2qi2 */
              break;

            case 3:
              if (
#line 15367 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))
                return 7282; /* avx512vl_ss_truncatev8siv8qi2 */
              break;

            case 4:
              if ((
#line 15367 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL) && 
#line 15323 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW)))
                return 7288; /* avx512vl_ss_truncatev8hiv8qi2 */
              break;

            case 5:
              if ((
#line 15722 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL) && 
#line 15684 "../../gcc/config/i386/sse.md"
(TARGET_AVX2)))
                return 7367; /* avx512vl_ss_truncatev4div4hi2 */
              break;

            case 6:
              if (
#line 15722 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))
                return 7373; /* avx512vl_ss_truncatev4siv4hi2 */
              break;

            case 7:
              if (
#line 15722 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))
                return 7370; /* avx512vl_ss_truncatev2div2hi2 */
              break;

            case 8:
              if (
#line 15963 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))
                return 7422; /* avx512vl_ss_truncatev2div2si2 */
              break;

            default:
              break;
            }
          if (GET_CODE (x7) != CONST_VECTOR
              || pattern510 (x7, 
E_V8QImode, 
8) != 0)
            return -1;
          x17 = XVECEXP (x7, 0, 2);
          if (x17 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
            return -1;
          x18 = XVECEXP (x7, 0, 3);
          if (x18 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
            return -1;
          x19 = XVECEXP (x7, 0, 4);
          if (x19 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
            return -1;
          x20 = XVECEXP (x7, 0, 5);
          if (x20 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
            return -1;
          x21 = XVECEXP (x7, 0, 6);
          if (x21 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
            return -1;
          x22 = XVECEXP (x7, 0, 7);
          if (x22 != const_int_rtx[MAX_SAVED_CONST_INT + 0]
              || pattern608 (x3, 
E_V8DImode, 
E_V8QImode, 
E_V16QImode) != 0
              || !
#line 16099 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512))
            return -1;
          return 7441; /* avx512f_ss_truncatev8div16qi2 */

        case SS_TRUNCATE:
          x9 = XEXP (x7, 0);
          operands[2] = x9;
          switch (GET_MODE (operands[0]))
            {
            case E_V16QImode:
              if (pattern798 (x3, 
E_V8HImode, 
E_V8QImode, 
E_V16QImode) != 0
                  || !
#line 19212 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && 1 && 1))
                return -1;
              return 8298; /* sse2_packsswb */

            case E_V8HImode:
              if (pattern798 (x3, 
E_V4SImode, 
E_V4HImode, 
E_V8HImode) != 0
                  || !
#line 19306 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && 1 && 1))
                return -1;
              return 8304; /* sse2_packssdw */

            default:
              return -1;
            }

        default:
          return -1;
        }

    case TRUNCATE:
      x5 = XEXP (x4, 0);
      operands[1] = x5;
      x7 = XEXP (x3, 1);
      operands[2] = x7;
      switch (pattern512 (x3))
        {
        case 0:
          if (
#line 15367 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))
            return 7277; /* avx512vl_truncatev4div4qi2 */
          break;

        case 1:
          if (
#line 15367 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))
            return 7286; /* avx512vl_truncatev4siv4qi2 */
          break;

        case 2:
          if (
#line 15367 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))
            return 7280; /* avx512vl_truncatev2div2qi2 */
          break;

        case 3:
          if (
#line 15367 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))
            return 7283; /* avx512vl_truncatev8siv8qi2 */
          break;

        case 4:
          if ((
#line 15367 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL) && 
#line 15323 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW)))
            return 7289; /* avx512vl_truncatev8hiv8qi2 */
          break;

        case 5:
          if ((
#line 15722 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL) && 
#line 15684 "../../gcc/config/i386/sse.md"
(TARGET_AVX2)))
            return 7368; /* avx512vl_truncatev4div4hi2 */
          break;

        case 6:
          if (
#line 15722 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))
            return 7374; /* avx512vl_truncatev4siv4hi2 */
          break;

        case 7:
          if (
#line 15722 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))
            return 7371; /* avx512vl_truncatev2div2hi2 */
          break;

        case 8:
          if (
#line 15963 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))
            return 7423; /* avx512vl_truncatev2div2si2 */
          break;

        default:
          break;
        }
      if (!register_operand (operands[1], E_V8DImode)
          || pattern513 (x3) != 0
          || !
#line 16099 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512))
        return -1;
      return 7442; /* avx512f_truncatev8div16qi2 */

    case US_TRUNCATE:
      x5 = XEXP (x4, 0);
      operands[1] = x5;
      x7 = XEXP (x3, 1);
      operands[2] = x7;
      switch (pattern512 (x3))
        {
        case 0:
          if (
#line 15367 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))
            return 7278; /* avx512vl_us_truncatev4div4qi2 */
          break;

        case 1:
          if (
#line 15367 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))
            return 7287; /* avx512vl_us_truncatev4siv4qi2 */
          break;

        case 2:
          if (
#line 15367 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))
            return 7281; /* avx512vl_us_truncatev2div2qi2 */
          break;

        case 3:
          if (
#line 15367 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))
            return 7284; /* avx512vl_us_truncatev8siv8qi2 */
          break;

        case 4:
          if ((
#line 15367 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL) && 
#line 15323 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW)))
            return 7290; /* avx512vl_us_truncatev8hiv8qi2 */
          break;

        case 5:
          if ((
#line 15722 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL) && 
#line 15684 "../../gcc/config/i386/sse.md"
(TARGET_AVX2)))
            return 7369; /* avx512vl_us_truncatev4div4hi2 */
          break;

        case 6:
          if (
#line 15722 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))
            return 7375; /* avx512vl_us_truncatev4siv4hi2 */
          break;

        case 7:
          if (
#line 15722 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))
            return 7372; /* avx512vl_us_truncatev2div2hi2 */
          break;

        case 8:
          if (
#line 15963 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))
            return 7424; /* avx512vl_us_truncatev2div2si2 */
          break;

        default:
          break;
        }
      if (!register_operand (operands[1], E_V8DImode)
          || pattern513 (x3) != 0
          || !
#line 16099 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512))
        return -1;
      return 7443; /* avx512f_us_truncatev8div16qi2 */

    default:
      return -1;
    }
}

 int
recog_323 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12, x13, x14, x15, x16, x17;
  rtx x18, x19, x20, x21, x22, x23, x24, x25;
  rtx x26, x27, x28, x29, x30, x31, x32, x33;
  rtx x34, x35, x36, x37, x38, x39, x40, x41;
  rtx x42, x43, x44, x45, x46, x47, x48, x49;
  rtx x50, x51, x52, x53, x54, x55, x56, x57;
  rtx x58, x59, x60, x61, x62, x63, x64, x65;
  rtx x66, x67, x68, x69, x70, x71, x72, x73;
  rtx x74, x75, x76;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  operands[0] = x2;
  x3 = XEXP (x1, 1);
  x4 = XEXP (x3, 0);
  switch (GET_CODE (x4))
    {
    case REG:
    case SUBREG:
    case MEM:
      switch (pattern50 (x3))
        {
        case 0:
          if (!(
#line 16318 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && 1 && 1
   && ix86_binary_operator_ok (SS_PLUS, V64QImode, operands)) && 
#line 740 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512)))
            return -1;
          return 7507; /* *avx512bw_ssaddv64qi3 */

        case 1:
          if (!(
#line 16318 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && 1 && 1
   && ix86_binary_operator_ok (SS_PLUS, V32QImode, operands)) && 
#line 740 "../../gcc/config/i386/sse.md"
(TARGET_AVX2)))
            return -1;
          return 7515; /* *avx2_ssaddv32qi3 */

        case 2:
          if (!
#line 16318 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && 1 && 1
   && ix86_binary_operator_ok (SS_PLUS, V16QImode, operands)))
            return -1;
          return 7523; /* *sse2_ssaddv16qi3 */

        case 3:
          if (!(
#line 16318 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && 1 && 1
   && ix86_binary_operator_ok (SS_PLUS, V32HImode, operands)) && 
#line 741 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512)))
            return -1;
          return 7531; /* *avx512bw_ssaddv32hi3 */

        case 4:
          if (!(
#line 16318 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && 1 && 1
   && ix86_binary_operator_ok (SS_PLUS, V16HImode, operands)) && 
#line 741 "../../gcc/config/i386/sse.md"
(TARGET_AVX2)))
            return -1;
          return 7539; /* *avx2_ssaddv16hi3 */

        case 5:
          if (!
#line 16318 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && 1 && 1
   && ix86_binary_operator_ok (SS_PLUS, V8HImode, operands)))
            return -1;
          return 7547; /* *sse2_ssaddv8hi3 */

        default:
          return -1;
        }

    case VEC_SELECT:
      switch (pattern193 (x3))
        {
        case 0:
          if (!
#line 22567 "../../gcc/config/i386/sse.md"
(TARGET_AVX2))
            return -1;
          return 8585; /* avx2_phaddswv16hi3 */

        case 1:
          if (!
#line 22590 "../../gcc/config/i386/sse.md"
(TARGET_SSSE3))
            return -1;
          return 8589; /* ssse3_phaddswv8hi3 */

        default:
          return -1;
        }

    case MULT:
      x5 = XEXP (x4, 0);
      switch (GET_CODE (x5))
        {
        case ZERO_EXTEND:
          x6 = XEXP (x5, 0);
          if (GET_CODE (x6) != VEC_SELECT)
            return -1;
          x7 = XEXP (x6, 1);
          if (GET_CODE (x7) != PARALLEL)
            return -1;
          x8 = XEXP (x4, 1);
          if (GET_CODE (x8) != SIGN_EXTEND)
            return -1;
          x9 = XEXP (x8, 0);
          if (GET_CODE (x9) != VEC_SELECT)
            return -1;
          x10 = XEXP (x9, 1);
          if (GET_CODE (x10) != PARALLEL)
            return -1;
          x11 = XEXP (x3, 1);
          if (GET_CODE (x11) != MULT)
            return -1;
          x12 = XEXP (x11, 0);
          if (GET_CODE (x12) != ZERO_EXTEND)
            return -1;
          x13 = XEXP (x12, 0);
          if (GET_CODE (x13) != VEC_SELECT)
            return -1;
          x14 = XEXP (x13, 1);
          if (GET_CODE (x14) != PARALLEL)
            return -1;
          x15 = XEXP (x11, 1);
          if (GET_CODE (x15) != SIGN_EXTEND)
            return -1;
          x16 = XEXP (x15, 0);
          if (GET_CODE (x16) != VEC_SELECT)
            return -1;
          x17 = XEXP (x16, 1);
          if (GET_CODE (x17) != PARALLEL)
            return -1;
          x18 = XEXP (x6, 0);
          operands[1] = x18;
          x19 = XEXP (x9, 0);
          operands[2] = x19;
          x20 = XEXP (x13, 0);
          if (!rtx_equal_p (x20, operands[1]))
            return -1;
          x21 = XEXP (x16, 0);
          if (!rtx_equal_p (x21, operands[2]))
            return -1;
          switch (XVECLEN (x7, 0))
            {
            case 16:
              if (pattern1077 (x7, 
6, 
4, 
2, 
0) != 0)
                return -1;
              x22 = XVECEXP (x7, 0, 4);
              if (x22 != const_int_rtx[MAX_SAVED_CONST_INT + 8])
                return -1;
              x23 = XVECEXP (x7, 0, 5);
              if (x23 != const_int_rtx[MAX_SAVED_CONST_INT + 10])
                return -1;
              x24 = XVECEXP (x7, 0, 6);
              if (x24 != const_int_rtx[MAX_SAVED_CONST_INT + 12])
                return -1;
              x25 = XVECEXP (x7, 0, 7);
              if (x25 != const_int_rtx[MAX_SAVED_CONST_INT + 14])
                return -1;
              x26 = XVECEXP (x7, 0, 8);
              if (x26 != const_int_rtx[MAX_SAVED_CONST_INT + 16])
                return -1;
              x27 = XVECEXP (x7, 0, 9);
              if (x27 != const_int_rtx[MAX_SAVED_CONST_INT + 18])
                return -1;
              x28 = XVECEXP (x7, 0, 10);
              if (x28 != const_int_rtx[MAX_SAVED_CONST_INT + 20])
                return -1;
              x29 = XVECEXP (x7, 0, 11);
              if (x29 != const_int_rtx[MAX_SAVED_CONST_INT + 22])
                return -1;
              x30 = XVECEXP (x7, 0, 12);
              if (x30 != const_int_rtx[MAX_SAVED_CONST_INT + 24])
                return -1;
              x31 = XVECEXP (x7, 0, 13);
              if (x31 != const_int_rtx[MAX_SAVED_CONST_INT + 26])
                return -1;
              x32 = XVECEXP (x7, 0, 14);
              if (x32 != const_int_rtx[MAX_SAVED_CONST_INT + 28])
                return -1;
              x33 = XVECEXP (x7, 0, 15);
              if (x33 != const_int_rtx[MAX_SAVED_CONST_INT + 30]
                  || pattern1313 (x10, 
16) != 0)
                return -1;
              x34 = XVECEXP (x10, 0, 8);
              if (x34 != const_int_rtx[MAX_SAVED_CONST_INT + 16])
                return -1;
              x35 = XVECEXP (x10, 0, 9);
              if (x35 != const_int_rtx[MAX_SAVED_CONST_INT + 18])
                return -1;
              x36 = XVECEXP (x10, 0, 10);
              if (x36 != const_int_rtx[MAX_SAVED_CONST_INT + 20])
                return -1;
              x37 = XVECEXP (x10, 0, 11);
              if (x37 != const_int_rtx[MAX_SAVED_CONST_INT + 22])
                return -1;
              x38 = XVECEXP (x10, 0, 12);
              if (x38 != const_int_rtx[MAX_SAVED_CONST_INT + 24])
                return -1;
              x39 = XVECEXP (x10, 0, 13);
              if (x39 != const_int_rtx[MAX_SAVED_CONST_INT + 26])
                return -1;
              x40 = XVECEXP (x10, 0, 14);
              if (x40 != const_int_rtx[MAX_SAVED_CONST_INT + 28])
                return -1;
              x41 = XVECEXP (x10, 0, 15);
              if (x41 != const_int_rtx[MAX_SAVED_CONST_INT + 30]
                  || pattern1860 (x14, 
16) != 0)
                return -1;
              x42 = XVECEXP (x14, 0, 8);
              if (x42 != const_int_rtx[MAX_SAVED_CONST_INT + 17])
                return -1;
              x43 = XVECEXP (x14, 0, 9);
              if (x43 != const_int_rtx[MAX_SAVED_CONST_INT + 19])
                return -1;
              x44 = XVECEXP (x14, 0, 10);
              if (x44 != const_int_rtx[MAX_SAVED_CONST_INT + 21])
                return -1;
              x45 = XVECEXP (x14, 0, 11);
              if (x45 != const_int_rtx[MAX_SAVED_CONST_INT + 23])
                return -1;
              x46 = XVECEXP (x14, 0, 12);
              if (x46 != const_int_rtx[MAX_SAVED_CONST_INT + 25])
                return -1;
              x47 = XVECEXP (x14, 0, 13);
              if (x47 != const_int_rtx[MAX_SAVED_CONST_INT + 27])
                return -1;
              x48 = XVECEXP (x14, 0, 14);
              if (x48 != const_int_rtx[MAX_SAVED_CONST_INT + 29])
                return -1;
              x49 = XVECEXP (x14, 0, 15);
              if (x49 != const_int_rtx[MAX_SAVED_CONST_INT + 31]
                  || pattern1877 (x17, 
16) != 0)
                return -1;
              x50 = XVECEXP (x17, 0, 8);
              if (x50 != const_int_rtx[MAX_SAVED_CONST_INT + 17])
                return -1;
              x51 = XVECEXP (x17, 0, 9);
              if (x51 != const_int_rtx[MAX_SAVED_CONST_INT + 19])
                return -1;
              x52 = XVECEXP (x17, 0, 10);
              if (x52 != const_int_rtx[MAX_SAVED_CONST_INT + 21])
                return -1;
              x53 = XVECEXP (x17, 0, 11);
              if (x53 != const_int_rtx[MAX_SAVED_CONST_INT + 23])
                return -1;
              x54 = XVECEXP (x17, 0, 12);
              if (x54 != const_int_rtx[MAX_SAVED_CONST_INT + 25])
                return -1;
              x55 = XVECEXP (x17, 0, 13);
              if (x55 != const_int_rtx[MAX_SAVED_CONST_INT + 27])
                return -1;
              x56 = XVECEXP (x17, 0, 14);
              if (x56 != const_int_rtx[MAX_SAVED_CONST_INT + 29])
                return -1;
              x57 = XVECEXP (x17, 0, 15);
              if (x57 != const_int_rtx[MAX_SAVED_CONST_INT + 31]
                  || pattern1883 (x3, 
E_V32QImode, 
E_V16QImode, 
E_V16HImode) != 0
                  || GET_MODE (x8) != E_V16HImode
                  || GET_MODE (x9) != E_V16QImode
                  || !nonimmediate_operand (operands[2], E_V32QImode)
                  || pattern331 (x11, 
E_V16QImode, 
E_V16HImode) != 0
                  || !
#line 22777 "../../gcc/config/i386/sse.md"
(TARGET_AVX2))
                return -1;
              return 8602; /* avx2_pmaddubsw256 */

            case 8:
              if (pattern1314 (x4) != 0
                  || pattern1860 (x14, 
8) != 0
                  || pattern1877 (x17, 
8) != 0
                  || pattern1883 (x3, 
E_V16QImode, 
E_V8QImode, 
E_V8HImode) != 0
                  || GET_MODE (x8) != E_V8HImode
                  || GET_MODE (x9) != E_V8QImode
                  || !vector_operand (operands[2], E_V16QImode)
                  || pattern331 (x11, 
E_V8QImode, 
E_V8HImode) != 0
                  || !
#line 22864 "../../gcc/config/i386/sse.md"
(TARGET_SSSE3))
                return -1;
              return 8611; /* ssse3_pmaddubsw128 */

            default:
              return -1;
            }

        case REG:
        case SUBREG:
        case MEM:
          switch (pattern329 (x3))
            {
            case 0:
              if (!
#line 26105 "../../gcc/config/i386/sse.md"
(TARGET_XOP))
                return -1;
              return 8983; /* xop_pmacssww */

            case 1:
              if (!
#line 26105 "../../gcc/config/i386/sse.md"
(TARGET_XOP))
                return -1;
              return 8985; /* xop_pmacssdd */

            default:
              return -1;
            }

        case SIGN_EXTEND:
          if (pattern327 (x4) != 0)
            return -1;
          x11 = XEXP (x3, 1);
          operands[3] = x11;
          x6 = XEXP (x5, 0);
          x7 = XEXP (x6, 1);
          switch (XVECLEN (x7, 0))
            {
            case 2:
              if (pattern1315 (x3) != 0)
                return -1;
              x8 = XEXP (x4, 1);
              if (GET_MODE (x8) != E_V2DImode)
                return -1;
              x9 = XEXP (x8, 0);
              if (GET_MODE (x9) != E_V2SImode
                  || !nonimmediate_operand (operands[2], E_V4SImode))
                return -1;
              switch (pattern1824 (x4))
                {
                case 0:
                  if (!
#line 26124 "../../gcc/config/i386/sse.md"
(TARGET_XOP))
                    return -1;
                  return 8987; /* xop_pmacssdql */

                case 1:
                  if (!
#line 26143 "../../gcc/config/i386/sse.md"
(TARGET_XOP))
                    return -1;
                  return 8989; /* xop_pmacssdqh */

                default:
                  return -1;
                }

            case 4:
              if (pattern1077 (x7, 
7, 
5, 
3, 
1) != 0)
                return -1;
              x8 = XEXP (x4, 1);
              x9 = XEXP (x8, 0);
              x10 = XEXP (x9, 1);
              if (pattern1617 (x10, 
7, 
5, 
3, 
1) != 0
                  || !register_operand (operands[0], E_V4SImode)
                  || GET_MODE (x3) != E_V4SImode
                  || GET_MODE (x4) != E_V4SImode
                  || GET_MODE (x5) != E_V4SImode
                  || GET_MODE (x6) != E_V4HImode
                  || !nonimmediate_operand (operands[1], E_V8HImode)
                  || GET_MODE (x8) != E_V4SImode
                  || GET_MODE (x9) != E_V4HImode
                  || !nonimmediate_operand (operands[2], E_V8HImode)
                  || !register_operand (operands[3], E_V4SImode)
                  || !
#line 26165 "../../gcc/config/i386/sse.md"
(TARGET_XOP))
                return -1;
              return 8991; /* xop_pmacsswd */

            default:
              return -1;
            }

        default:
          return -1;
        }

    case PLUS:
      if (GET_MODE (x4) != E_V4SImode)
        return -1;
      x5 = XEXP (x4, 0);
      if (GET_CODE (x5) != MULT
          || pattern330 (x5) != 0)
        return -1;
      x58 = XEXP (x5, 1);
      if (GET_MODE (x58) != E_V4SImode)
        return -1;
      x59 = XEXP (x58, 0);
      if (GET_CODE (x59) != VEC_SELECT
          || GET_MODE (x59) != E_V4HImode)
        return -1;
      x60 = XEXP (x59, 1);
      if (GET_CODE (x60) != PARALLEL
          || XVECLEN (x60, 0) != 4)
        return -1;
      x61 = XVECEXP (x60, 0, 0);
      if (x61 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
        return -1;
      x62 = XVECEXP (x60, 0, 1);
      if (x62 != const_int_rtx[MAX_SAVED_CONST_INT + 2])
        return -1;
      x63 = XVECEXP (x60, 0, 2);
      if (x63 != const_int_rtx[MAX_SAVED_CONST_INT + 4])
        return -1;
      x64 = XVECEXP (x60, 0, 3);
      if (x64 != const_int_rtx[MAX_SAVED_CONST_INT + 6])
        return -1;
      x8 = XEXP (x4, 1);
      if (GET_CODE (x8) != MULT
          || GET_MODE (x8) != E_V4SImode)
        return -1;
      x9 = XEXP (x8, 0);
      if (GET_CODE (x9) != SIGN_EXTEND
          || GET_MODE (x9) != E_V4SImode)
        return -1;
      x19 = XEXP (x9, 0);
      if (GET_CODE (x19) != VEC_SELECT
          || GET_MODE (x19) != E_V4HImode)
        return -1;
      x65 = XEXP (x19, 1);
      if (GET_CODE (x65) != PARALLEL
          || XVECLEN (x65, 0) != 4)
        return -1;
      x66 = XVECEXP (x65, 0, 0);
      if (x66 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
        return -1;
      x67 = XVECEXP (x65, 0, 1);
      if (x67 != const_int_rtx[MAX_SAVED_CONST_INT + 3])
        return -1;
      x68 = XVECEXP (x65, 0, 2);
      if (x68 != const_int_rtx[MAX_SAVED_CONST_INT + 5])
        return -1;
      x69 = XVECEXP (x65, 0, 3);
      if (x69 != const_int_rtx[MAX_SAVED_CONST_INT + 7])
        return -1;
      x70 = XEXP (x8, 1);
      if (GET_CODE (x70) != SIGN_EXTEND
          || GET_MODE (x70) != E_V4SImode)
        return -1;
      x71 = XEXP (x70, 0);
      if (GET_CODE (x71) != VEC_SELECT
          || GET_MODE (x71) != E_V4HImode)
        return -1;
      x72 = XEXP (x71, 1);
      if (GET_CODE (x72) != PARALLEL
          || XVECLEN (x72, 0) != 4)
        return -1;
      x73 = XVECEXP (x72, 0, 0);
      if (x73 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
        return -1;
      x74 = XVECEXP (x72, 0, 1);
      if (x74 != const_int_rtx[MAX_SAVED_CONST_INT + 3])
        return -1;
      x75 = XVECEXP (x72, 0, 2);
      if (x75 != const_int_rtx[MAX_SAVED_CONST_INT + 5])
        return -1;
      x76 = XVECEXP (x72, 0, 3);
      if (x76 != const_int_rtx[MAX_SAVED_CONST_INT + 7]
          || !register_operand (operands[0], E_V4SImode)
          || GET_MODE (x3) != E_V4SImode
          || pattern1880 (x3) != 0
          || !
#line 26198 "../../gcc/config/i386/sse.md"
(TARGET_XOP))
        return -1;
      return 8993; /* xop_pmadcsswd */

    default:
      return -1;
    }
}

 int
recog_327 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  operands[0] = x2;
  x3 = XEXP (x1, 1);
  x4 = XEXP (x3, 0);
  operands[1] = x4;
  x5 = XEXP (x3, 1);
  operands[2] = x5;
  switch (GET_MODE (operands[0]))
    {
    case E_V16HImode:
      if (!register_operand (operands[0], E_V16HImode)
          || GET_MODE (x3) != E_V16HImode)
        return -1;
      if (nonimmediate_operand (operands[1], E_V16HImode)
          && nonmemory_operand (operands[2], E_DImode)
          && (
#line 17094 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL) && 
#line 794 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW)))
        return 7605; /* *ashrv16hi3 */
      if (!register_operand (operands[1], E_V16HImode))
        return -1;
      if (nonmemory_operand (operands[2], E_DImode)
          && (
#line 17108 "../../gcc/config/i386/sse.md"
(TARGET_SSE2) && 
#line 744 "../../gcc/config/i386/sse.md"
(TARGET_AVX2)))
        return 7615; /* ashrv16hi3 */
      if (!nonimmediate_operand (operands[2], E_V16HImode)
          || !(
#line 28912 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 686 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 9563; /* avx512vl_ashrvv16hi */

    case E_V8HImode:
      if (!register_operand (operands[0], E_V8HImode)
          || GET_MODE (x3) != E_V8HImode)
        return -1;
      if (nonimmediate_operand (operands[1], E_V8HImode)
          && nonmemory_operand (operands[2], E_DImode)
          && (
#line 17094 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL) && 
#line 794 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW)))
        return 7607; /* *ashrv8hi3 */
      if (!register_operand (operands[1], E_V8HImode))
        return -1;
      if (nonmemory_operand (operands[2], E_DImode)
          && 
#line 17108 "../../gcc/config/i386/sse.md"
(TARGET_SSE2))
        return 7616; /* ashrv8hi3 */
      if (!nonimmediate_operand (operands[2], E_V8HImode)
          || !(
#line 28912 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 686 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 9561; /* avx512vl_ashrvv8hi */

    case E_V8SImode:
      if (!register_operand (operands[0], E_V8SImode)
          || GET_MODE (x3) != E_V8SImode)
        return -1;
      if (nonimmediate_operand (operands[1], E_V8SImode)
          && nonmemory_operand (operands[2], E_DImode)
          && 
#line 17094 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))
        return 7609; /* *ashrv8si3 */
      if (!register_operand (operands[1], E_V8SImode))
        return -1;
      if (nonmemory_operand (operands[2], E_DImode)
          && (
#line 17108 "../../gcc/config/i386/sse.md"
(TARGET_SSE2) && 
#line 745 "../../gcc/config/i386/sse.md"
(TARGET_AVX2)))
        return 7617; /* ashrv8si3 */
      if (!nonimmediate_operand (operands[2], E_V8SImode)
          || !
#line 28901 "../../gcc/config/i386/sse.md"
(TARGET_AVX2 && 1))
        return -1;
      return 9551; /* avx2_ashrvv8si */

    case E_V4SImode:
      if (!register_operand (operands[0], E_V4SImode)
          || GET_MODE (x3) != E_V4SImode)
        return -1;
      if (nonimmediate_operand (operands[1], E_V4SImode)
          && nonmemory_operand (operands[2], E_DImode)
          && 
#line 17094 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))
        return 7611; /* *ashrv4si3 */
      if (!register_operand (operands[1], E_V4SImode))
        return -1;
      if (nonmemory_operand (operands[2], E_DImode)
          && 
#line 17108 "../../gcc/config/i386/sse.md"
(TARGET_SSE2))
        return 7618; /* ashrv4si3 */
      if (!nonimmediate_operand (operands[2], E_V4SImode)
          || !
#line 28901 "../../gcc/config/i386/sse.md"
(TARGET_AVX2 && 1))
        return -1;
      return 9549; /* avx2_ashrvv4si */

    case E_V2DImode:
      if (!register_operand (operands[0], E_V2DImode)
          || GET_MODE (x3) != E_V2DImode)
        return -1;
      if (nonimmediate_operand (operands[1], E_V2DImode)
          && nonmemory_operand (operands[2], E_DImode)
          && 
#line 17094 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))
        return 7613; /* *ashrv2di3 */
      if (!register_operand (operands[1], E_V2DImode))
        return -1;
      if (nonmemory_operand (operands[2], E_DImode)
          && 
#line 26979 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && !TARGET_AVX512VL && ix86_pre_reload_split ()))
        return 9049; /* *ashrv2di3 */
      if (!nonimmediate_operand (operands[2], E_V2DImode)
          || !(
#line 28901 "../../gcc/config/i386/sse.md"
(TARGET_AVX2 && 1) && 
#line 682 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 9555; /* avx2_ashrvv2di */

    case E_V32HImode:
      if (!register_operand (operands[0], E_V32HImode)
          || GET_MODE (x3) != E_V32HImode)
        return -1;
      if (nonimmediate_operand (operands[1], E_V32HImode)
          && nonmemory_operand (operands[2], E_DImode)
          && (
#line 17138 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 789 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512)))
        return 7623; /* *ashrv32hi3 */
      if (!register_operand (operands[1], E_V32HImode)
          || !nonimmediate_operand (operands[2], E_V32HImode)
          || !(
#line 28912 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 686 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 9565; /* avx512bw_ashrvv32hi */

    case E_V4DImode:
      if (!register_operand (operands[0], E_V4DImode)
          || GET_MODE (x3) != E_V4DImode)
        return -1;
      if (nonimmediate_operand (operands[1], E_V4DImode)
          && nonmemory_operand (operands[2], E_DImode)
          && (
#line 17138 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 790 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return 7625; /* *ashrv4di3 */
      if (!register_operand (operands[1], E_V4DImode)
          || !nonimmediate_operand (operands[2], E_V4DImode)
          || !(
#line 28901 "../../gcc/config/i386/sse.md"
(TARGET_AVX2 && 1) && 
#line 682 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 9557; /* avx2_ashrvv4di */

    case E_V16SImode:
      if (!register_operand (operands[0], E_V16SImode)
          || GET_MODE (x3) != E_V16SImode)
        return -1;
      if (nonimmediate_operand (operands[1], E_V16SImode)
          && nonmemory_operand (operands[2], E_DImode)
          && (
#line 17138 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 790 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return 7627; /* *ashrv16si3 */
      if (!register_operand (operands[1], E_V16SImode)
          || !nonimmediate_operand (operands[2], E_V16SImode)
          || !(
#line 28901 "../../gcc/config/i386/sse.md"
(TARGET_AVX2 && 1) && 
#line 681 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
        return -1;
      return 9553; /* avx512f_ashrvv16si */

    case E_V8DImode:
      if (!register_operand (operands[0], E_V8DImode)
          || GET_MODE (x3) != E_V8DImode)
        return -1;
      if (nonimmediate_operand (operands[1], E_V8DImode)
          && nonmemory_operand (operands[2], E_DImode)
          && (
#line 17138 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 790 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return 7629; /* *ashrv8di3 */
      if (!register_operand (operands[1], E_V8DImode)
          || !nonimmediate_operand (operands[2], E_V8DImode)
          || !(
#line 28901 "../../gcc/config/i386/sse.md"
(TARGET_AVX2 && 1) && 
#line 683 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
        return -1;
      return 9559; /* avx512f_ashrvv8di */

    case E_V1TImode:
      if (pattern30 (x3) != 0
          || !
#line 17512 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && TARGET_64BIT
   && ix86_pre_reload_split ()))
        return -1;
      return 7694; /* *ashrv1ti3_internal */

    default:
      return -1;
    }
}

 int
recog_332 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  operands[0] = x2;
  x3 = XEXP (x1, 1);
  x4 = XEXP (x3, 0);
  switch (GET_CODE (x4))
    {
    case REG:
    case SUBREG:
    case MEM:
    case VEC_DUPLICATE:
      operands[1] = x4;
      x5 = XEXP (x3, 1);
      operands[2] = x5;
      switch (GET_MODE (operands[0]))
        {
        case E_V32HFmode:
          if (pattern179 (x3, 
E_V32HFmode) != 0
              || !(
#line 2750 "../../gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (MULT, V32HFmode, operands)
   && 1 && 1) && 
#line 390 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_EVEX512)))
            return -1;
          return 2779; /* *mulv32hf3 */

        case E_V16HFmode:
          if (pattern179 (x3, 
E_V16HFmode) != 0
              || !(
#line 2750 "../../gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (MULT, V16HFmode, operands)
   && 1 && 1) && 
#line 391 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL)))
            return -1;
          return 2783; /* *mulv16hf3 */

        case E_V8HFmode:
          if (pattern179 (x3, 
E_V8HFmode) != 0
              || !(
#line 2750 "../../gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (MULT, V8HFmode, operands)
   && 1 && 1) && 
#line 392 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL)))
            return -1;
          return 2787; /* *mulv8hf3 */

        case E_V16SFmode:
          if (pattern179 (x3, 
E_V16SFmode) != 0
              || !(
#line 2750 "../../gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (MULT, V16SFmode, operands)
   && 1 && 1) && 
#line 393 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 2791; /* *mulv16sf3 */

        case E_V8SFmode:
          if (pattern179 (x3, 
E_V8SFmode) != 0
              || !(
#line 2750 "../../gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (MULT, V8SFmode, operands)
   && 1 && 1) && 
#line 393 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 2795; /* *mulv8sf3 */

        case E_V4SFmode:
          if (pattern179 (x3, 
E_V4SFmode) != 0
              || !
#line 2750 "../../gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (MULT, V4SFmode, operands)
   && 1 && 1))
            return -1;
          return 2799; /* *mulv4sf3 */

        case E_V8DFmode:
          if (pattern179 (x3, 
E_V8DFmode) != 0
              || !(
#line 2750 "../../gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (MULT, V8DFmode, operands)
   && 1 && 1) && 
#line 394 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 2803; /* *mulv8df3 */

        case E_V4DFmode:
          if (pattern179 (x3, 
E_V4DFmode) != 0
              || !(
#line 2750 "../../gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (MULT, V4DFmode, operands)
   && 1 && 1) && 
#line 394 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 2807; /* *mulv4df3 */

        case E_V2DFmode:
          if (pattern179 (x3, 
E_V2DFmode) != 0
              || !(
#line 2750 "../../gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (MULT, V2DFmode, operands)
   && 1 && 1) && 
#line 395 "../../gcc/config/i386/sse.md"
(TARGET_SSE2)))
            return -1;
          return 2811; /* *mulv2df3 */

        case E_V32HImode:
          if (pattern25 (x3, 
E_V32HImode) != 0
              || !(
#line 16385 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && !(MEM_P (operands[1]) && MEM_P (operands[2]))
   && 1 && 1) && 
#line 653 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512)))
            return -1;
          return 7555; /* *mulv32hi3 */

        case E_V16HImode:
          if (pattern25 (x3, 
E_V16HImode) != 0
              || !(
#line 16385 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && !(MEM_P (operands[1]) && MEM_P (operands[2]))
   && 1 && 1) && 
#line 653 "../../gcc/config/i386/sse.md"
(TARGET_AVX2)))
            return -1;
          return 7557; /* *mulv16hi3 */

        case E_V8HImode:
          if (pattern25 (x3, 
E_V8HImode) != 0
              || !
#line 16385 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && !(MEM_P (operands[1]) && MEM_P (operands[2]))
   && 1 && 1))
            return -1;
          return 7559; /* *mulv8hi3 */

        case E_V8DImode:
          if (pattern179 (x3, 
E_V8DImode) != 0
              || !(
#line 16839 "../../gcc/config/i386/sse.md"
(TARGET_AVX512DQ && 1
  && ix86_binary_operator_ok (MULT, V8DImode, operands)) && 
#line 624 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return -1;
          return 7593; /* *avx512dq_mulv8di3 */

        case E_V4DImode:
          if (pattern179 (x3, 
E_V4DImode) != 0
              || !(
#line 16839 "../../gcc/config/i386/sse.md"
(TARGET_AVX512DQ && 1
  && ix86_binary_operator_ok (MULT, V4DImode, operands)) && 
#line 624 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 7595; /* *avx512dq_mulv4di3 */

        case E_V2DImode:
          if (pattern179 (x3, 
E_V2DImode) != 0
              || !(
#line 16839 "../../gcc/config/i386/sse.md"
(TARGET_AVX512DQ && 1
  && ix86_binary_operator_ok (MULT, V2DImode, operands)) && 
#line 624 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 7597; /* *avx512dq_mulv2di3 */

        case E_V16SImode:
          if (pattern179 (x3, 
E_V16SImode) != 0
              || !(
#line 16898 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1 && ix86_binary_operator_ok (MULT, V16SImode, operands)
  && 1) && 
#line 672 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 7599; /* *avx512f_mulv16si3 */

        case E_V8SImode:
          if (pattern179 (x3, 
E_V8SImode) != 0
              || !(
#line 16898 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1 && ix86_binary_operator_ok (MULT, V8SImode, operands)
  && 1) && 
#line 672 "../../gcc/config/i386/sse.md"
(TARGET_AVX2)))
            return -1;
          return 7601; /* *avx2_mulv8si3 */

        case E_V4SImode:
          if (pattern179 (x3, 
E_V4SImode) != 0
              || !
#line 16898 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1 && ix86_binary_operator_ok (MULT, V4SImode, operands)
  && 1))
            return -1;
          return 7603; /* *sse4_1_mulv4si3 */

        case E_V32BFmode:
          if (pattern14 (x3, 
E_V32BFmode) != 0
              || !(
#line 32110 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256) && 
#line 565 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_512)))
            return -1;
          return 10606; /* avx10_2_mulnepbf16_v32bf */

        case E_V16BFmode:
          if (pattern14 (x3, 
E_V16BFmode) != 0
              || !
#line 32110 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
            return -1;
          return 10614; /* avx10_2_mulnepbf16_v16bf */

        case E_V8BFmode:
          if (pattern14 (x3, 
E_V8BFmode) != 0
              || !
#line 32110 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
            return -1;
          return 10622; /* avx10_2_mulnepbf16_v8bf */

        default:
          return -1;
        }

    case ZERO_EXTEND:
      switch (pattern191 (x3, 
ZERO_EXTEND))
        {
        case 0:
          if (!
#line 16468 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
            return -1;
          return 7573; /* *vec_widen_umult_even_v16si */

        case 1:
          if (!
#line 16504 "../../gcc/config/i386/sse.md"
(TARGET_AVX2 && 1
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
            return -1;
          return 7575; /* *vec_widen_umult_even_v8si */

        case 2:
          if (!
#line 16536 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && 1
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
            return -1;
          return 7577; /* *vec_widen_umult_even_v4si */

        default:
          return -1;
        }

    case SIGN_EXTEND:
      switch (pattern191 (x3, 
SIGN_EXTEND))
        {
        case 0:
          if (!
#line 16584 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
            return -1;
          return 7579; /* *vec_widen_smult_even_v16si */

        case 1:
          if (!
#line 16620 "../../gcc/config/i386/sse.md"
(TARGET_AVX2 && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
            return -1;
          return 7581; /* *vec_widen_smult_even_v8si */

        case 2:
          if (!
#line 16652 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1 && 1
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
            return -1;
          return 7583; /* *sse4_1_mulv2siv2di3 */

        default:
          return -1;
        }

    default:
      return -1;
    }
}

 int
recog_340 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  switch (pattern26 (x1))
    {
    case 0:
      if (!(
#line 3306 "../../gcc/config/i386/sse.md"
(TARGET_SSE
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))
   && 1
   && 1) && 
#line 390 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_EVEX512)))
        return -1;
      return 2988; /* *smaxv32hf3 */

    case 1:
      if (!(
#line 3306 "../../gcc/config/i386/sse.md"
(TARGET_SSE
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))
   && 1
   && 1) && 
#line 391 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL)))
        return -1;
      return 2996; /* *smaxv16hf3 */

    case 2:
      if (!(
#line 3306 "../../gcc/config/i386/sse.md"
(TARGET_SSE
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))
   && 1
   && 1) && 
#line 392 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL)))
        return -1;
      return 3004; /* *smaxv8hf3 */

    case 3:
      if (!(
#line 3306 "../../gcc/config/i386/sse.md"
(TARGET_SSE
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))
   && 1
   && 1) && 
#line 393 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
        return -1;
      return 3008; /* *smaxv16sf3 */

    case 4:
      if (!(
#line 3306 "../../gcc/config/i386/sse.md"
(TARGET_SSE
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))
   && 1
   && 1) && 
#line 393 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
        return -1;
      return 3016; /* *smaxv8sf3 */

    case 5:
      if (!
#line 3306 "../../gcc/config/i386/sse.md"
(TARGET_SSE
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))
   && 1
   && 1))
        return -1;
      return 3024; /* *smaxv4sf3 */

    case 6:
      if (!(
#line 3306 "../../gcc/config/i386/sse.md"
(TARGET_SSE
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))
   && 1
   && 1) && 
#line 394 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
        return -1;
      return 3028; /* *smaxv8df3 */

    case 7:
      if (!(
#line 3306 "../../gcc/config/i386/sse.md"
(TARGET_SSE
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))
   && 1
   && 1) && 
#line 394 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
        return -1;
      return 3036; /* *smaxv4df3 */

    case 8:
      if (!(
#line 3306 "../../gcc/config/i386/sse.md"
(TARGET_SSE
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))
   && 1
   && 1) && 
#line 395 "../../gcc/config/i386/sse.md"
(TARGET_SSE2)))
        return -1;
      return 3044; /* *smaxv2df3 */

    case 9:
      if (nonimmediate_operand (operands[1], E_V32QImode)
          && 
#line 17667 "../../gcc/config/i386/sse.md"
(TARGET_AVX2 && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
        return 7755; /* *avx2_smaxv32qi3 */
      if (!register_operand (operands[1], E_V32QImode)
          || !(
#line 17719 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 318 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 7831; /* *smaxv32qi3 */

    case 10:
      if (nonimmediate_operand (operands[1], E_V16HImode)
          && 
#line 17667 "../../gcc/config/i386/sse.md"
(TARGET_AVX2 && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
        return 7759; /* *avx2_smaxv16hi3 */
      if (!register_operand (operands[1], E_V16HImode)
          || !(
#line 17719 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 319 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 7847; /* *smaxv16hi3 */

    case 11:
      if (
#line 17667 "../../gcc/config/i386/sse.md"
(TARGET_AVX2 && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
        return 7763; /* *avx2_smaxv8si3 */
      if (!(
#line 17708 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 501 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 7775; /* *avx512f_smaxv8si3 */

    case 12:
      if (!(
#line 17708 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 501 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 7767; /* *avx512f_smaxv16si3 */

    case 13:
      if (nonimmediate_operand (operands[1], E_V4SImode)
          && nonimmediate_operand (operands[2], E_V4SImode)
          && (
#line 17708 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 501 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return 7783; /* *avx512f_smaxv4si3 */
      if (!vector_operand (operands[1], E_V4SImode)
          || !vector_operand (operands[2], E_V4SImode)
          || !
#line 17811 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1
   && 1
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
        return -1;
      return 7867; /* *sse4_1_smaxv4si3 */

    case 14:
      if (!(
#line 17708 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 502 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 7791; /* *avx512f_smaxv8di3 */

    case 15:
      if (!(
#line 17708 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 502 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 7799; /* *avx512f_smaxv4di3 */

    case 16:
      if (!(
#line 17708 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 502 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 7807; /* *avx512f_smaxv2di3 */

    case 17:
      if (!(
#line 17719 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 318 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 7815; /* *smaxv64qi3 */

    case 18:
      if (register_operand (operands[1], E_V16QImode)
          && nonimmediate_operand (operands[2], E_V16QImode)
          && (
#line 17719 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 318 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return 7823; /* *smaxv16qi3 */
      if (!vector_operand (operands[1], E_V16QImode)
          || !vector_operand (operands[2], E_V16QImode)
          || !
#line 17811 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1
   && 1
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
        return -1;
      return 7863; /* *sse4_1_smaxv16qi3 */

    case 19:
      if (!(
#line 17719 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 319 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 7839; /* *smaxv32hi3 */

    case 20:
      if (register_operand (operands[1], E_V8HImode)
          && nonimmediate_operand (operands[2], E_V8HImode)
          && (
#line 17719 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 319 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return 7855; /* *smaxv8hi3 */
      if (!vector_operand (operands[1], E_V8HImode)
          || !vector_operand (operands[2], E_V8HImode)
          || !
#line 17830 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
        return -1;
      return 7871; /* *smaxv8hi3 */

    case 21:
      if (!(
#line 32100 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256) && 
#line 565 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_512)))
        return -1;
      return 10590; /* avx10_2_smaxpbf16_v32bf */

    case 22:
      if (!
#line 32100 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
        return -1;
      return 10594; /* avx10_2_smaxpbf16_v16bf */

    case 23:
      if (!
#line 32100 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
        return -1;
      return 10598; /* avx10_2_smaxpbf16_v8bf */

    default:
      return -1;
    }
}

 int
recog_346 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  switch (pattern33 (x1))
    {
    case 0:
      if (nonimmediate_operand (operands[1], E_V32QImode)
          && 
#line 17667 "../../gcc/config/i386/sse.md"
(TARGET_AVX2 && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
        return 7757; /* *avx2_umaxv32qi3 */
      if (!register_operand (operands[1], E_V32QImode)
          || !(
#line 17719 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 318 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 7835; /* *umaxv32qi3 */

    case 1:
      if (nonimmediate_operand (operands[1], E_V16HImode)
          && 
#line 17667 "../../gcc/config/i386/sse.md"
(TARGET_AVX2 && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
        return 7761; /* *avx2_umaxv16hi3 */
      if (!register_operand (operands[1], E_V16HImode)
          || !(
#line 17719 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 319 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 7851; /* *umaxv16hi3 */

    case 2:
      if (
#line 17667 "../../gcc/config/i386/sse.md"
(TARGET_AVX2 && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
        return 7765; /* *avx2_umaxv8si3 */
      if (!(
#line 17708 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 501 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 7779; /* *avx512f_umaxv8si3 */

    case 3:
      if (!(
#line 17708 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 501 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 7771; /* *avx512f_umaxv16si3 */

    case 4:
      if (nonimmediate_operand (operands[1], E_V4SImode)
          && nonimmediate_operand (operands[2], E_V4SImode)
          && (
#line 17708 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 501 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return 7787; /* *avx512f_umaxv4si3 */
      if (!vector_operand (operands[1], E_V4SImode)
          || !vector_operand (operands[2], E_V4SImode)
          || !
#line 17895 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1
   && 1
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
        return -1;
      return 7877; /* *sse4_1_umaxv4si3 */

    case 5:
      if (!(
#line 17708 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 502 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 7795; /* *avx512f_umaxv8di3 */

    case 6:
      if (!(
#line 17708 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 502 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 7803; /* *avx512f_umaxv4di3 */

    case 7:
      if (!(
#line 17708 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 502 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 7811; /* *avx512f_umaxv2di3 */

    case 8:
      if (!(
#line 17719 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 318 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 7819; /* *umaxv64qi3 */

    case 9:
      if (register_operand (operands[1], E_V16QImode)
          && nonimmediate_operand (operands[2], E_V16QImode)
          && (
#line 17719 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 318 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return 7827; /* *umaxv16qi3 */
      if (!vector_operand (operands[1], E_V16QImode)
          || !vector_operand (operands[2], E_V16QImode)
          || !
#line 17914 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
        return -1;
      return 7881; /* *umaxv16qi3 */

    case 10:
      if (!(
#line 17719 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 319 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 7843; /* *umaxv32hi3 */

    case 11:
      if (register_operand (operands[1], E_V8HImode)
          && nonimmediate_operand (operands[2], E_V8HImode)
          && (
#line 17719 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 319 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return 7859; /* *umaxv8hi3 */
      if (!vector_operand (operands[1], E_V8HImode)
          || !vector_operand (operands[2], E_V8HImode)
          || !
#line 17895 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1
   && 1
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
        return -1;
      return 7873; /* *sse4_1_umaxv8hi3 */

    default:
      return -1;
    }
}

 int
recog_355 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  operands[0] = x2;
  x3 = XEXP (x1, 1);
  x4 = XEXP (x3, 0);
  operands[1] = x4;
  switch (GET_MODE (operands[0]))
    {
    case E_SImode:
      if (GET_MODE (x3) != E_SImode)
        return -1;
      if (nonimmediate_operand (operands[0], E_SImode)
          && nonimmediate_operand (operands[1], E_SImode)
          && 
#line 22421 "../../gcc/config/i386/i386.md"
(TARGET_MOVBE
   && !(MEM_P (operands[0]) && MEM_P (operands[1]))))
        return 1634; /* *bswapsi2_movbe */
      if (!register_operand (operands[0], E_SImode)
          || !register_operand (operands[1], E_SImode)
          || !
#line 22436 "../../gcc/config/i386/i386.md"
(TARGET_BSWAP))
        return -1;
      return 1636; /* *bswapsi2 */

    case E_DImode:
      if (GET_MODE (x3) != E_DImode)
        return -1;
      if (nonimmediate_operand (operands[0], E_DImode)
          && nonimmediate_operand (operands[1], E_DImode)
          && (
#line 22421 "../../gcc/config/i386/i386.md"
(TARGET_MOVBE
   && !(MEM_P (operands[0]) && MEM_P (operands[1]))) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
        return 1635; /* *bswapdi2_movbe */
      if (!register_operand (operands[0], E_DImode)
          || !register_operand (operands[1], E_DImode)
          || !(
#line 22436 "../../gcc/config/i386/i386.md"
(TARGET_BSWAP) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
        return -1;
      return 1637; /* *bswapdi2 */

    default:
      return -1;
    }
}

 int
recog_360 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) != CONST_INT)
    return -1;
  x5 = XVECEXP (x1, 0, 1);
  if (pattern227 (x5, 
E_CCmode, 
17) != 0)
    return -1;
  x6 = XEXP (x3, 0);
  operands[1] = x6;
  res = recog_359 (x1, insn, pnum_clobbers);
  if (res >= 0)
    return res;
  if (XWINT (x4, 0) != 8L
      || pattern717 (x2) != 0)
    return -1;
  switch (pattern1418 (x2))
    {
    case 0:
      if (!
#line 13228 "../../gcc/config/i386/i386.md"
(GET_MODE (operands[1]) == GET_MODE (operands[2])))
        return -1;
      return 800; /* *andqi_exthi_3 */

    case 1:
      if (!
#line 13228 "../../gcc/config/i386/i386.md"
(GET_MODE (operands[1]) == GET_MODE (operands[2])))
        return -1;
      return 803; /* *andqi_extsi_3 */

    case 2:
      if (!(
#line 13228 "../../gcc/config/i386/i386.md"
(GET_MODE (operands[1]) == GET_MODE (operands[2])) && 
#line 1164 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
        return -1;
      return 806; /* *andqi_extdi_3 */

    case 3:
      if (!
#line 13228 "../../gcc/config/i386/i386.md"
(GET_MODE (operands[1]) == GET_MODE (operands[2])))
        return -1;
      return 801; /* *iorqi_exthi_3 */

    case 4:
      if (!
#line 13228 "../../gcc/config/i386/i386.md"
(GET_MODE (operands[1]) == GET_MODE (operands[2])))
        return -1;
      return 804; /* *iorqi_extsi_3 */

    case 5:
      if (!(
#line 13228 "../../gcc/config/i386/i386.md"
(GET_MODE (operands[1]) == GET_MODE (operands[2])) && 
#line 1164 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
        return -1;
      return 807; /* *iorqi_extdi_3 */

    case 6:
      if (!
#line 13228 "../../gcc/config/i386/i386.md"
(GET_MODE (operands[1]) == GET_MODE (operands[2])))
        return -1;
      return 802; /* *xorqi_exthi_3 */

    case 7:
      if (!
#line 13228 "../../gcc/config/i386/i386.md"
(GET_MODE (operands[1]) == GET_MODE (operands[2])))
        return -1;
      return 805; /* *xorqi_extsi_3 */

    case 8:
      if (!(
#line 13228 "../../gcc/config/i386/i386.md"
(GET_MODE (operands[1]) == GET_MODE (operands[2])) && 
#line 1164 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
        return -1;
      return 808; /* *xorqi_extdi_3 */

    default:
      return -1;
    }
}

 int
recog_365 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  switch (XINT (x3, 1))
    {
    case 106:
      if (pattern542 (x1) != 0)
        return -1;
      x4 = XEXP (x2, 0);
      operands[0] = x4;
      if (!register_operand (operands[0], E_DImode))
        return -1;
      x5 = XVECEXP (x3, 0, 0);
      operands[1] = x5;
      if (!pop_operand (operands[1], E_TImode))
        return -1;
      x6 = XVECEXP (x1, 0, 1);
      x7 = XEXP (x6, 0);
      operands[2] = x7;
      if (!register_operand (operands[2], E_DImode)
          || !
#line 3901 "../../gcc/config/i386/i386.md"
(TARGET_APX_PUSH2POP2))
        return -1;
      return 160; /* pop2_di */

    case 14:
      if (GET_MODE (x3) != E_SImode)
        return -1;
      x6 = XVECEXP (x1, 0, 1);
      if (pattern351 (x6) != 0)
        return -1;
      x4 = XEXP (x2, 0);
      operands[0] = x4;
      if (!register_operand (operands[0], E_SImode))
        return -1;
      x5 = XVECEXP (x3, 0, 0);
      switch (GET_CODE (x5))
        {
        case CONST_INT:
          if (XWINT (x5, 0) != 0L
              || !
#line 20760 "../../gcc/config/i386/i386.md"
(!TARGET_64BIT))
            return -1;
          return 1498; /* *set_got */

        case LABEL_REF:
          x8 = XEXP (x5, 0);
          operands[1] = x8;
          if (!
#line 20782 "../../gcc/config/i386/i386.md"
(!TARGET_64BIT))
            return -1;
          return 1499; /* *set_got_labelled */

        default:
          return -1;
        }

    case 97:
      switch (pattern545 (x1))
        {
        case 0:
          if (!
#line 21631 "../../gcc/config/i386/i386.md"
(TARGET_BMI))
            return -1;
          return 1550; /* tzcnt_si */

        case 1:
          if (!(((
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT) && 
#line 21631 "../../gcc/config/i386/i386.md"
(TARGET_BMI)) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 21631 "../../gcc/config/i386/i386.md"
(TARGET_BMI)))
            return -1;
          return 1552; /* tzcnt_di */

        case 2:
          if (!(
#line 21721 "../../gcc/config/i386/i386.md"
(true) && 
#line 21631 "../../gcc/config/i386/i386.md"
(TARGET_BMI)))
            return -1;
          return 1563; /* tzcnt_hi */

        case 3:
          if ((
#line 21695 "../../gcc/config/i386/i386.md"
(TARGET_APX_NF) && 
#line 21631 "../../gcc/config/i386/i386.md"
(TARGET_BMI)))
            return 1554; /* *tzcnt_si_falsedep_nf */
          if (pnum_clobbers == NULL
              || !
#line 21631 "../../gcc/config/i386/i386.md"
(TARGET_BMI))
            return -1;
          *pnum_clobbers = 1;
          return 1558; /* *tzcnt_si_falsedep */

        case 4:
          if ((
#line 21695 "../../gcc/config/i386/i386.md"
(TARGET_APX_NF) && ((
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT) && 
#line 21631 "../../gcc/config/i386/i386.md"
(TARGET_BMI)) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT))))
            return 1556; /* *tzcnt_di_falsedep_nf */
          if (pnum_clobbers == NULL
              || !((
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT) && 
#line 21631 "../../gcc/config/i386/i386.md"
(TARGET_BMI)) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return -1;
          *pnum_clobbers = 1;
          return 1560; /* *tzcnt_di_falsedep */

        default:
          return -1;
        }

    case 96:
      switch (pattern545 (x1))
        {
        case 0:
          if (!
#line 21632 "../../gcc/config/i386/i386.md"
(TARGET_LZCNT))
            return -1;
          return 1551; /* lzcnt_si */

        case 1:
          if (!(((
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT) && 
#line 21632 "../../gcc/config/i386/i386.md"
(TARGET_LZCNT)) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 21632 "../../gcc/config/i386/i386.md"
(TARGET_LZCNT)))
            return -1;
          return 1553; /* lzcnt_di */

        case 2:
          if (!(
#line 21721 "../../gcc/config/i386/i386.md"
(true) && 
#line 21632 "../../gcc/config/i386/i386.md"
(TARGET_LZCNT)))
            return -1;
          return 1565; /* lzcnt_hi */

        case 3:
          if ((
#line 21695 "../../gcc/config/i386/i386.md"
(TARGET_APX_NF) && 
#line 21632 "../../gcc/config/i386/i386.md"
(TARGET_LZCNT)))
            return 1555; /* *lzcnt_si_falsedep_nf */
          if (pnum_clobbers == NULL
              || !
#line 21632 "../../gcc/config/i386/i386.md"
(TARGET_LZCNT))
            return -1;
          *pnum_clobbers = 1;
          return 1559; /* *lzcnt_si_falsedep */

        case 4:
          if ((
#line 21695 "../../gcc/config/i386/i386.md"
(TARGET_APX_NF) && ((
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT) && 
#line 21632 "../../gcc/config/i386/i386.md"
(TARGET_LZCNT)) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT))))
            return 1557; /* *lzcnt_di_falsedep_nf */
          if (pnum_clobbers == NULL
              || !((
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT) && 
#line 21632 "../../gcc/config/i386/i386.md"
(TARGET_LZCNT)) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return -1;
          *pnum_clobbers = 1;
          return 1561; /* *lzcnt_di_falsedep */

        default:
          return -1;
        }

    case 27:
      if (GET_MODE (x3) != E_CCmode)
        return -1;
      x4 = XEXP (x2, 0);
      if (GET_CODE (x4) != REG
          || REGNO (x4) != 17
          || GET_MODE (x4) != E_CCmode)
        return -1;
      x6 = XVECEXP (x1, 0, 1);
      if (GET_CODE (x6) != CLOBBER)
        return -1;
      x5 = XVECEXP (x3, 0, 0);
      operands[0] = x5;
      if (!register_operand (operands[0], E_HImode))
        return -1;
      x7 = XEXP (x6, 0);
      if (!rtx_equal_p (x7, operands[0]))
        return -1;
      return 1641; /* parityhi2_cmp */

    case 80:
      if (pattern546 (x1, 
81) != 0
          || !
#line 23911 "../../gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && flag_unsafe_math_optimizations))
        return -1;
      return 1713; /* sincosxf3 */

    case 82:
      if (pattern546 (x1, 
83) != 0
          || !
#line 24426 "../../gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && flag_unsafe_math_optimizations))
        return -1;
      return 1718; /* fxtractxf3_i387 */

    case 70:
      if (GET_MODE (x3) != E_DImode)
        return -1;
      x6 = XVECEXP (x1, 0, 1);
      if (GET_CODE (x6) != CLOBBER)
        return -1;
      x4 = XEXP (x2, 0);
      operands[0] = x4;
      if (!nonimmediate_operand (operands[0], E_DImode))
        return -1;
      x5 = XVECEXP (x3, 0, 0);
      operands[1] = x5;
      if (!register_operand (operands[1], E_XFmode))
        return -1;
      x7 = XEXP (x6, 0);
      operands[2] = x7;
      if (!scratch_operand (operands[2], E_XFmode)
          || !
#line 24972 "../../gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387))
        return -1;
      return 1727; /* lrintxfdi2 */

    case 74:
      if (pattern547 (x1) != 0
          || !
#line 25071 "../../gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && (flag_fp_int_builtin_inexact || !flag_trapping_math)
   && ix86_pre_reload_split ()))
        return -1;
      return 1730; /* frndintxf2_roundeven */

    case 75:
      if (pattern547 (x1) != 0
          || !
#line 25071 "../../gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && (flag_fp_int_builtin_inexact || !flag_trapping_math)
   && ix86_pre_reload_split ()))
        return -1;
      return 1731; /* frndintxf2_floor */

    case 76:
      if (pattern547 (x1) != 0
          || !
#line 25071 "../../gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && (flag_fp_int_builtin_inexact || !flag_trapping_math)
   && ix86_pre_reload_split ()))
        return -1;
      return 1732; /* frndintxf2_ceil */

    case 77:
      if (pattern547 (x1) != 0
          || !
#line 25071 "../../gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && (flag_fp_int_builtin_inexact || !flag_trapping_math)
   && ix86_pre_reload_split ()))
        return -1;
      return 1733; /* frndintxf2_trunc */

    case 78:
      switch (pattern549 (x1))
        {
        case 0:
          if (!
#line 25188 "../../gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && flag_unsafe_math_optimizations
   && ix86_pre_reload_split ()))
            return -1;
          return 1738; /* *fisthi2_floor_1 */

        case 1:
          if (!
#line 25188 "../../gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && flag_unsafe_math_optimizations
   && ix86_pre_reload_split ()))
            return -1;
          return 1740; /* *fistsi2_floor_1 */

        case 2:
          if (!
#line 25188 "../../gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && flag_unsafe_math_optimizations
   && ix86_pre_reload_split ()))
            return -1;
          return 1742; /* *fistdi2_floor_1 */

        default:
          return -1;
        }

    case 79:
      switch (pattern549 (x1))
        {
        case 0:
          if (!
#line 25188 "../../gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && flag_unsafe_math_optimizations
   && ix86_pre_reload_split ()))
            return -1;
          return 1739; /* *fisthi2_ceil_1 */

        case 1:
          if (!
#line 25188 "../../gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && flag_unsafe_math_optimizations
   && ix86_pre_reload_split ()))
            return -1;
          return 1741; /* *fistsi2_ceil_1 */

        case 2:
          if (!
#line 25188 "../../gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && flag_unsafe_math_optimizations
   && ix86_pre_reload_split ()))
            return -1;
          return 1743; /* *fistdi2_ceil_1 */

        default:
          return -1;
        }

    case 18:
      if (pattern550 (x1) != 0)
        return -1;
      x5 = XVECEXP (x3, 0, 0);
      operands[1] = x5;
      switch (GET_MODE (operands[0]))
        {
        case E_SImode:
          if (!memory_operand (operands[0], E_SImode)
              || GET_MODE (x3) != E_SImode
              || !const0_operand (operands[1], E_SImode)
              || !
#line 1403 "../../gcc/config/i386/i386.md"
(word_mode == SImode))
            return -1;
          return 1855; /* probe_stack_1_si */

        case E_DImode:
          if (!memory_operand (operands[0], E_DImode)
              || GET_MODE (x3) != E_DImode
              || !const0_operand (operands[1], E_DImode)
              || !
#line 1403 "../../gcc/config/i386/i386.md"
(word_mode == DImode))
            return -1;
          return 1856; /* probe_stack_1_di */

        default:
          return -1;
        }

    case 92:
      x6 = XVECEXP (x1, 0, 1);
      if (GET_CODE (x6) != SET)
        return -1;
      if (pnum_clobbers != NULL)
        {
          res = recog_361 (x1, insn, pnum_clobbers);
          if (res >= 0)
            return res;
        }
      x4 = XEXP (x2, 0);
      operands[0] = x4;
      x5 = XVECEXP (x3, 0, 0);
      operands[3] = x5;
      x7 = XEXP (x6, 0);
      operands[1] = x7;
      x9 = XEXP (x6, 1);
      operands[2] = x9;
      switch (GET_MODE (operands[0]))
        {
        case E_SImode:
          switch (pattern1235 (x3, 
E_SImode))
            {
            case 0:
              if (general_operand (operands[2], E_SImode)
                  && (
#line 27314 "../../gcc/config/i386/i386.md"
(reload_completed) && 
#line 1408 "../../gcc/config/i386/i386.md"
(ptr_mode == SImode)))
                return 1865; /* *stack_protect_set_2_si_si */
              if (address_no_seg_operand (operands[2], E_SImode)
                  && 
#line 1408 "../../gcc/config/i386/i386.md"
(ptr_mode == SImode))
                return 1869; /* *stack_protect_set_3_si_si */
              break;

            case 1:
              if (general_operand (operands[2], E_DImode)
                  && (
#line 27333 "../../gcc/config/i386/i386.md"
(TARGET_64BIT && reload_completed) && 
#line 1408 "../../gcc/config/i386/i386.md"
(ptr_mode == SImode)))
                return 1867; /* *stack_protect_set_2_si_di */
              if (address_no_seg_operand (operands[2], E_DImode)
                  && ((
#line 1408 "../../gcc/config/i386/i386.md"
(ptr_mode == SImode) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return 1870; /* *stack_protect_set_3_si_di */
              break;

            default:
              break;
            }
          break;

        case E_DImode:
          switch (pattern1235 (x3, 
E_DImode))
            {
            case 0:
              if (general_operand (operands[2], E_SImode)
                  && (
#line 27314 "../../gcc/config/i386/i386.md"
(reload_completed) && 
#line 1408 "../../gcc/config/i386/i386.md"
(ptr_mode == DImode)))
                return 1866; /* *stack_protect_set_2_di_si */
              if (address_no_seg_operand (operands[2], E_SImode)
                  && 
#line 1408 "../../gcc/config/i386/i386.md"
(ptr_mode == DImode))
                return 1871; /* *stack_protect_set_3_di_si */
              break;

            case 1:
              if (general_operand (operands[2], E_DImode)
                  && (
#line 27333 "../../gcc/config/i386/i386.md"
(TARGET_64BIT && reload_completed) && 
#line 1408 "../../gcc/config/i386/i386.md"
(ptr_mode == DImode)))
                return 1868; /* *stack_protect_set_2_di_di */
              if (address_no_seg_operand (operands[2], E_DImode)
                  && ((
#line 1408 "../../gcc/config/i386/i386.md"
(ptr_mode == DImode) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return 1872; /* *stack_protect_set_3_di_di */
              break;

            default:
              break;
            }
          break;

        default:
          break;
        }
      if (!register_operand (operands[1], E_DImode)
          || GET_MODE (x9) != E_DImode)
        return -1;
      switch (GET_CODE (x9))
        {
        case ZERO_EXTEND:
          switch (pattern1320 (x1))
            {
            case 0:
              if (!(
#line 27427 "../../gcc/config/i386/i386.md"
(TARGET_64BIT && reload_completed) && 
#line 1408 "../../gcc/config/i386/i386.md"
(ptr_mode == SImode)))
                return -1;
              return 1873; /* *stack_protect_set_4z_si_di */

            case 1:
              if (!(
#line 27427 "../../gcc/config/i386/i386.md"
(TARGET_64BIT && reload_completed) && 
#line 1408 "../../gcc/config/i386/i386.md"
(ptr_mode == DImode)))
                return -1;
              return 1874; /* *stack_protect_set_4z_di_di */

            default:
              return -1;
            }

        case SIGN_EXTEND:
          switch (pattern1320 (x1))
            {
            case 0:
              if (!(
#line 27445 "../../gcc/config/i386/i386.md"
(TARGET_64BIT && reload_completed) && 
#line 1408 "../../gcc/config/i386/i386.md"
(ptr_mode == SImode)))
                return -1;
              return 1875; /* *stack_protect_set_4s_si_di */

            case 1:
              if (!(
#line 27445 "../../gcc/config/i386/i386.md"
(TARGET_64BIT && reload_completed) && 
#line 1408 "../../gcc/config/i386/i386.md"
(ptr_mode == DImode)))
                return -1;
              return 1876; /* *stack_protect_set_4s_di_di */

            default:
              return -1;
            }

        default:
          return -1;
        }

    case 118:
      if (GET_MODE (x3) != E_V4SImode)
        return -1;
      x6 = XVECEXP (x1, 0, 1);
      if (GET_CODE (x6) != CLOBBER)
        return -1;
      x4 = XEXP (x2, 0);
      operands[0] = x4;
      if (!register_operand (operands[0], E_V4SImode))
        return -1;
      x5 = XVECEXP (x3, 0, 0);
      operands[1] = x5;
      if (!nonimmediate_operand (operands[1], E_DImode))
        return -1;
      x7 = XEXP (x6, 0);
      operands[2] = x7;
      if (!scratch_operand (operands[2], E_V4SImode)
          || !
#line 1878 "../../gcc/config/i386/sse.md"
(!TARGET_64BIT && TARGET_SSE2 && TARGET_INTER_UNIT_MOVES_TO_VEC))
        return -1;
      return 2552; /* movdi_to_sse */

    case 283:
      if (GET_MODE (x3) != E_BLKmode
          || pattern338 (x1) != 0)
        return -1;
      x5 = XVECEXP (x3, 0, 0);
      if (!rtx_equal_p (x5, operands[0]))
        return -1;
      return 11010; /* mfence_nosse */

    case 288:
      if (pnum_clobbers == NULL
          || GET_MODE (x3) != E_DImode)
        return -1;
      x6 = XVECEXP (x1, 0, 1);
      if (GET_CODE (x6) != CLOBBER)
        return -1;
      x4 = XEXP (x2, 0);
      operands[0] = x4;
      if (!nonimmediate_operand (operands[0], E_DImode))
        return -1;
      x5 = XVECEXP (x3, 0, 0);
      operands[1] = x5;
      if (!memory_operand (operands[1], E_DImode))
        return -1;
      x7 = XEXP (x6, 0);
      operands[2] = x7;
      if (!memory_operand (operands[2], E_DImode)
          || !
#line 196 "../../gcc/config/i386/sync.md"
(!TARGET_64BIT && (TARGET_80387 || TARGET_SSE)))
        return -1;
      *pnum_clobbers = 1;
      return 11011; /* atomic_loaddi_fpu */

    case 289:
      if (pnum_clobbers == NULL
          || GET_MODE (x3) != E_DImode)
        return -1;
      x6 = XVECEXP (x1, 0, 1);
      if (GET_CODE (x6) != CLOBBER)
        return -1;
      x4 = XEXP (x2, 0);
      operands[0] = x4;
      if (!memory_operand (operands[0], E_DImode))
        return -1;
      x5 = XVECEXP (x3, 0, 0);
      operands[1] = x5;
      if (!nonimmediate_operand (operands[1], E_DImode))
        return -1;
      x7 = XEXP (x6, 0);
      operands[2] = x7;
      if (!memory_operand (operands[2], E_DImode)
          || !
#line 295 "../../gcc/config/i386/sync.md"
(!TARGET_64BIT && (TARGET_80387 || TARGET_SSE)))
        return -1;
      *pnum_clobbers = 1;
      return 11016; /* atomic_storedi_fpu */

    default:
      return -1;
    }
}

 int
recog_373 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 0);
  operands[0] = x3;
  x4 = XEXP (x2, 1);
  x5 = XEXP (x4, 0);
  operands[1] = x5;
  x6 = XVECEXP (x1, 0, 1);
  switch (GET_CODE (x6))
    {
    case CLOBBER:
      if (pnum_clobbers == NULL
          || !register_operand (operands[1], E_DImode))
        return -1;
      switch (pattern938 (x1))
        {
        case 0:
          if (!
#line 6206 "../../gcc/config/i386/i386.md"
(!TARGET_64BIT && TARGET_INTER_UNIT_MOVES_TO_VEC
   && TARGET_80387 && X87_ENABLE_FLOAT (SFmode, DImode)
   && TARGET_SSE2 && optimize_function_for_speed_p (cfun)))
            return -1;
          *pnum_clobbers = 2;
          return 254; /* floatdisf2_i387_with_xmm */

        case 1:
          if (!
#line 6206 "../../gcc/config/i386/i386.md"
(!TARGET_64BIT && TARGET_INTER_UNIT_MOVES_TO_VEC
   && TARGET_80387 && X87_ENABLE_FLOAT (DFmode, DImode)
   && TARGET_SSE2 && optimize_function_for_speed_p (cfun)))
            return -1;
          *pnum_clobbers = 2;
          return 255; /* floatdidf2_i387_with_xmm */

        case 2:
          if (!
#line 6206 "../../gcc/config/i386/i386.md"
(!TARGET_64BIT && TARGET_INTER_UNIT_MOVES_TO_VEC
   && TARGET_80387 && X87_ENABLE_FLOAT (XFmode, DImode)
   && TARGET_SSE2 && optimize_function_for_speed_p (cfun)))
            return -1;
          *pnum_clobbers = 2;
          return 256; /* floatdixf2_i387_with_xmm */

        default:
          return -1;
        }

    case UNSPEC:
      if (pattern682 (x1, 
E_V2SImode, 
E_V2SFmode) != 0
          || !
#line 1600 "../../gcc/config/i386/mmx.md"
(TARGET_3DNOW))
        return -1;
      return 2075; /* mmx_floatv2siv2sf2 */

    default:
      return -1;
    }
}

 int
recog_377 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  x4 = XEXP (x3, 1);
  if (XWINT (x4, 0) != 0L)
    return -1;
  x5 = XVECEXP (x1, 0, 1);
  switch (GET_CODE (x5))
    {
    case SET:
      x6 = XEXP (x5, 0);
      operands[0] = x6;
      x7 = XEXP (x5, 1);
      switch (GET_CODE (x7))
        {
        case PLUS:
          switch (pattern1425 (x1))
            {
            case 0:
              if (!
#line 7128 "../../gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (PLUS, QImode, operands, TARGET_APX_NDD)))
                return -1;
              return 309; /* *addqi_2 */

            case 1:
              if (!
#line 7128 "../../gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (PLUS, HImode, operands, TARGET_APX_NDD)))
                return -1;
              return 310; /* *addhi_2 */

            case 2:
              if (!
#line 7128 "../../gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (PLUS, SImode, operands, TARGET_APX_NDD)))
                return -1;
              return 311; /* *addsi_2 */

            case 3:
              if (!(
#line 7128 "../../gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (PLUS, DImode, operands, TARGET_APX_NDD)) && 
#line 1161 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return -1;
              return 312; /* *adddi_2 */

            default:
              return -1;
            }

        case ZERO_EXTEND:
          if (pattern1426 (x1, 
PLUS) != 0
              || !
#line 7178 "../../gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (PLUS, SImode, operands, TARGET_APX_NDD)))
            return -1;
          return 313; /* *addsi_2_zext */

        default:
          return -1;
        }

    case CLOBBER:
      x6 = XEXP (x5, 0);
      operands[0] = x6;
      x8 = XEXP (x3, 0);
      switch (pattern951 (x8))
        {
        case 0:
          if (!
#line 7410 "../../gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
            return -1;
          return 323; /* *addqi_5 */

        case 1:
          if (!
#line 7410 "../../gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
            return -1;
          return 324; /* *addhi_5 */

        case 2:
          if (!
#line 7410 "../../gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
            return -1;
          return 325; /* *addsi_5 */

        case 3:
          if (!(
#line 7410 "../../gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 1161 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return -1;
          return 326; /* *adddi_5 */

        default:
          return -1;
        }

    default:
      return -1;
    }
}

 int
recog_380 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  x4 = XEXP (x3, 1);
  x5 = XEXP (x4, 0);
  x6 = XEXP (x5, 0);
  if (GET_CODE (x6) != REG
      || REGNO (x6) != 17
      || GET_MODE (x6) != E_CCmode)
    return -1;
  x7 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x7) != CLOBBER)
    return -1;
  x8 = XEXP (x7, 0);
  operands[0] = x8;
  x9 = XEXP (x4, 1);
  switch (GET_CODE (x9))
    {
    case ZERO_EXTEND:
      x10 = XEXP (x9, 0);
      operands[2] = x10;
      x11 = XEXP (x3, 0);
      switch (GET_MODE (x11))
        {
        case E_DImode:
          if (pattern1754 (x4, 
E_SImode, 
E_DImode) != 0
              || !
#line 1235 "../../gcc/config/i386/i386.md"
(!TARGET_64BIT))
            return -1;
          return 517; /* subsi3_carry_ccc */

        case E_TImode:
          if (pattern1754 (x4, 
E_DImode, 
E_TImode) != 0
              || !
#line 1236 "../../gcc/config/i386/i386.md"
(TARGET_64BIT))
            return -1;
          return 518; /* subdi3_carry_ccc */

        default:
          return -1;
        }

    case CONST_INT:
    case CONST_WIDE_INT:
      operands[2] = x9;
      x11 = XEXP (x3, 0);
      switch (GET_MODE (x11))
        {
        case E_DImode:
          if (pattern1755 (x4, 
E_SImode, 
E_DImode) != 0
              || !
#line 1235 "../../gcc/config/i386/i386.md"
(!TARGET_64BIT))
            return -1;
          return 519; /* *subsi3_carry_ccc_1 */

        case E_TImode:
          if (pattern1755 (x4, 
E_DImode, 
E_TImode) != 0
              || !
#line 1236 "../../gcc/config/i386/i386.md"
(TARGET_64BIT))
            return -1;
          return 520; /* *subdi3_carry_ccc_1 */

        default:
          return -1;
        }

    default:
      return -1;
    }
}

 int
recog_383 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12, x13, x14, x15;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) != REG
      || REGNO (x3) != 17)
    return -1;
  x4 = XEXP (x2, 1);
  x5 = XEXP (x4, 0);
  x6 = XEXP (x5, 0);
  switch (GET_CODE (x6))
    {
    case REG:
    case SUBREG:
    case MEM:
      operands[1] = x6;
      x7 = XEXP (x5, 1);
      operands[2] = x7;
      x8 = XEXP (x4, 1);
      switch (GET_CODE (x8))
        {
        case CONST_INT:
          res = recog_377 (x1, insn, pnum_clobbers);
          if (res >= 0)
            return res;
          break;

        case REG:
        case SUBREG:
        case MEM:
          res = recog_378 (x1, insn, pnum_clobbers);
          if (res >= 0)
            return res;
          break;

        default:
          break;
        }
      if (GET_MODE (x3) != E_CCCmode
          || GET_MODE (x4) != E_CCCmode)
        return -1;
      x9 = XVECEXP (x1, 0, 1);
      switch (GET_CODE (x9))
        {
        case CLOBBER:
          x10 = XEXP (x9, 0);
          operands[0] = x10;
          if (!rtx_equal_p (x8, operands[2]))
            return -1;
          switch (pattern951 (x5))
            {
            case 0:
              if (!
#line 10025 "../../gcc/config/i386/i386.md"
(!(MEM_P (operands[1]) && MEM_P (operands[2]))))
                return -1;
              return 543; /* *addqi3_cconly_overflow_2 */

            case 1:
              if (!
#line 10025 "../../gcc/config/i386/i386.md"
(!(MEM_P (operands[1]) && MEM_P (operands[2]))))
                return -1;
              return 544; /* *addhi3_cconly_overflow_2 */

            case 2:
              if (!
#line 10025 "../../gcc/config/i386/i386.md"
(!(MEM_P (operands[1]) && MEM_P (operands[2]))))
                return -1;
              return 545; /* *addsi3_cconly_overflow_2 */

            case 3:
              if (!(
#line 10025 "../../gcc/config/i386/i386.md"
(!(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 1161 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return -1;
              return 546; /* *adddi3_cconly_overflow_2 */

            default:
              return -1;
            }

        case SET:
          x10 = XEXP (x9, 0);
          operands[0] = x10;
          x11 = XEXP (x9, 1);
          switch (GET_CODE (x11))
            {
            case PLUS:
              x12 = XEXP (x11, 0);
              if (!rtx_equal_p (x12, operands[1]))
                return -1;
              x13 = XEXP (x11, 1);
              if (!rtx_equal_p (x13, operands[2]))
                return -1;
              switch (GET_MODE (x5))
                {
                case E_QImode:
                  if (pattern1625 (x1, 
E_QImode) != 0
                      || !
#line 10043 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (PLUS, QImode, operands, TARGET_APX_NDD)))
                    return -1;
                  return 547; /* *addqi3_cc_overflow_2 */

                case E_HImode:
                  if (pattern1625 (x1, 
E_HImode) != 0
                      || !
#line 10043 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (PLUS, HImode, operands, TARGET_APX_NDD)))
                    return -1;
                  return 548; /* *addhi3_cc_overflow_2 */

                case E_SImode:
                  if (!nonimmediate_operand (operands[1], E_SImode)
                      || !x86_64_general_operand (operands[2], E_SImode)
                      || !nonimmediate_operand (operands[0], E_SImode)
                      || GET_MODE (x11) != E_SImode
                      || !rtx_equal_p (x8, operands[2])
                      || !
#line 10043 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (PLUS, SImode, operands, TARGET_APX_NDD)))
                    return -1;
                  return 549; /* *addsi3_cc_overflow_2 */

                case E_DImode:
                  if (!nonimmediate_operand (operands[1], E_DImode)
                      || !nonimmediate_operand (operands[0], E_DImode)
                      || GET_MODE (x11) != E_DImode)
                    return -1;
                  if (x86_64_general_operand (operands[2], E_DImode)
                      && rtx_equal_p (x8, operands[2])
                      && (
#line 10043 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (PLUS, DImode, operands, TARGET_APX_NDD)) && 
#line 1161 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                    return 550; /* *adddi3_cc_overflow_2 */
                  if (!x86_64_hilo_general_operand (operands[2], E_DImode)
                      || !rtx_equal_p (x8, operands[1])
                      || !(
#line 10081 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (PLUS, DImode, operands, TARGET_APX_NDD)) && 
#line 1235 "../../gcc/config/i386/i386.md"
(!TARGET_64BIT)))
                    return -1;
                  return 552; /* *adddi3_doubleword_cc_overflow_1 */

                default:
                  return -1;
                }

            case ZERO_EXTEND:
              if (GET_MODE (x11) != E_DImode)
                return -1;
              x12 = XEXP (x11, 0);
              if (GET_CODE (x12) != PLUS
                  || GET_MODE (x12) != E_SImode
                  || GET_MODE (x5) != E_SImode
                  || !nonimmediate_operand (operands[1], E_SImode)
                  || !x86_64_general_operand (operands[2], E_SImode)
                  || !register_operand (operands[0], E_DImode)
                  || !rtx_equal_p (x8, operands[2]))
                return -1;
              x14 = XEXP (x12, 0);
              if (!rtx_equal_p (x14, operands[1]))
                return -1;
              x15 = XEXP (x12, 1);
              if (!rtx_equal_p (x15, operands[2])
                  || !
#line 10062 "../../gcc/config/i386/i386.md"
(TARGET_64BIT
   && ix86_binary_operator_ok (PLUS, SImode, operands, TARGET_APX_NDD)))
                return -1;
              return 551; /* *addsi3_zext_cc_overflow_2 */

            default:
              return -1;
            }

        default:
          return -1;
        }

    case UNSPEC_VOLATILE:
      if (XVECLEN (x6, 0) != 2
          || XINT (x6, 1) != 110)
        return -1;
      x8 = XEXP (x4, 1);
      if (x8 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
        return -1;
      x9 = XVECEXP (x1, 0, 1);
      if (GET_CODE (x9) != SET)
        return -1;
      switch (pattern1236 (x1, 
PLUS))
        {
        case 0:
          return 11076; /* atomic_add_fetch_cmp_0qi_1 */

        case 1:
          return 11077; /* atomic_add_fetch_cmp_0hi_1 */

        case 2:
          return 11078; /* atomic_add_fetch_cmp_0si_1 */

        case 3:
          if (!
#line 1161 "../../gcc/config/i386/i386.md"
(TARGET_64BIT))
            return -1;
          return 11079; /* atomic_add_fetch_cmp_0di_1 */

        default:
          return -1;
        }

    default:
      return -1;
    }
}

 int
recog_388 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12, x13, x14, x15, x16, x17;
  rtx x18, x19, x20, x21, x22, x23, x24, x25;
  rtx x26, x27, x28, x29, x30;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  x4 = XEXP (x3, 0);
  switch (GET_CODE (x4))
    {
    case PLUS:
      if (pattern685 (x1, 
PLUS) != 0)
        return -1;
      x5 = XEXP (x4, 0);
      switch (GET_CODE (x5))
        {
        case SIGN_EXTEND:
          switch (pattern1563 (x1))
            {
            case 0:
              if (!
#line 7660 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (PLUS, QImode, operands, TARGET_APX_NDD)))
                return -1;
              return 342; /* *addvqi4 */

            case 1:
              if (!
#line 7660 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (PLUS, HImode, operands, TARGET_APX_NDD)))
                return -1;
              return 343; /* *addvhi4 */

            case 2:
              if (!
#line 7660 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (PLUS, SImode, operands, TARGET_APX_NDD)))
                return -1;
              return 344; /* *addvsi4 */

            case 3:
              if (x86_64_sext_operand (operands[2], E_DImode)
                  && (
#line 7660 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (PLUS, DImode, operands, TARGET_APX_NDD)) && 
#line 1161 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return 345; /* *addvdi4 */
              if (!nonimmediate_operand (operands[2], E_DImode)
                  || !(
#line 7713 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (PLUS, DImode, operands, TARGET_APX_NDD)) && 
#line 1235 "../../gcc/config/i386/i386.md"
(!TARGET_64BIT)))
                return -1;
              return 350; /* *addvdi4_doubleword */

            case 4:
              if (!(
#line 7713 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (PLUS, TImode, operands, TARGET_APX_NDD)) && 
#line 1236 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return -1;
              return 351; /* *addvti4_doubleword */

            case 5:
              if (!
#line 7682 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (PLUS, QImode, operands, TARGET_APX_NDD)
   && CONST_INT_P (operands[2])
   && INTVAL (operands[2]) == INTVAL (operands[3])))
                return -1;
              return 346; /* addvqi4_1 */

            case 6:
              if (!
#line 7682 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (PLUS, HImode, operands, TARGET_APX_NDD)
   && CONST_INT_P (operands[2])
   && INTVAL (operands[2]) == INTVAL (operands[3])))
                return -1;
              return 347; /* addvhi4_1 */

            case 7:
              if (!
#line 7682 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (PLUS, SImode, operands, TARGET_APX_NDD)
   && CONST_INT_P (operands[2])
   && INTVAL (operands[2]) == INTVAL (operands[3])))
                return -1;
              return 348; /* addvsi4_1 */

            case 8:
              if (const_int_operand (operands[3], E_TImode)
                  && x86_64_immediate_operand (operands[2], E_DImode)
                  && (
#line 7682 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (PLUS, DImode, operands, TARGET_APX_NDD)
   && CONST_INT_P (operands[2])
   && INTVAL (operands[2]) == INTVAL (operands[3])) && 
#line 1161 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return 349; /* addvdi4_1 */
              if (!const_scalar_int_operand (operands[3], E_TImode)
                  || !x86_64_hilo_general_operand (operands[2], E_DImode)
                  || !(
#line 7759 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (PLUS, DImode, operands, TARGET_APX_NDD)
   && CONST_SCALAR_INT_P (operands[2])
   && rtx_equal_p (operands[2], operands[3])) && 
#line 1235 "../../gcc/config/i386/i386.md"
(!TARGET_64BIT)))
                return -1;
              return 352; /* *addvdi4_doubleword_1 */

            case 9:
              if (!(
#line 7759 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (PLUS, TImode, operands, TARGET_APX_NDD)
   && CONST_SCALAR_INT_P (operands[2])
   && rtx_equal_p (operands[2], operands[3])) && 
#line 1236 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return -1;
              return 353; /* *addvti4_doubleword_1 */

            default:
              return -1;
            }

        case PLUS:
          x6 = XEXP (x5, 0);
          switch (GET_CODE (x6))
            {
            case LTU:
            case UNLT:
              operands[4] = x6;
              x7 = XEXP (x6, 1);
              if (x7 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
                return -1;
              x8 = XEXP (x5, 1);
              if (GET_CODE (x8) != SIGN_EXTEND)
                return -1;
              x9 = XEXP (x3, 1);
              x10 = XEXP (x9, 0);
              x11 = XEXP (x10, 0);
              if (GET_CODE (x11) != PLUS)
                return -1;
              x12 = XEXP (x11, 0);
              switch (GET_CODE (x12))
                {
                case LTU:
                case UNLT:
                  operands[5] = x12;
                  x13 = XEXP (x12, 1);
                  if (x13 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
                    return -1;
                  x14 = XVECEXP (x1, 0, 1);
                  x15 = XEXP (x14, 1);
                  x16 = XEXP (x15, 0);
                  if (GET_CODE (x16) != PLUS)
                    return -1;
                  x17 = XEXP (x16, 0);
                  switch (GET_CODE (x17))
                    {
                    case LTU:
                    case UNLT:
                      if (!rtx_equal_p (x17, operands[5]))
                        return -1;
                      x18 = XEXP (x6, 0);
                      operands[3] = x18;
                      if (!flags_reg_operand (operands[3], E_VOIDmode))
                        return -1;
                      x19 = XEXP (x8, 0);
                      operands[1] = x19;
                      x20 = XEXP (x12, 0);
                      if (!rtx_equal_p (x20, operands[3]))
                        return -1;
                      x21 = XEXP (x11, 1);
                      if (!rtx_equal_p (x21, operands[1]))
                        return -1;
                      x22 = XEXP (x16, 1);
                      if (!rtx_equal_p (x22, operands[1]))
                        return -1;
                      switch (pattern1852 (x1))
                        {
                        case 0:
                          if (pattern1868 (x1, 
E_QImode, 
E_HImode) != 0
                              || !
#line 7826 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (PLUS, QImode, operands, TARGET_APX_NDD)))
                            return -1;
                          return 354; /* *addvqi4_overflow_1 */

                        case 1:
                          if (pattern1868 (x1, 
E_HImode, 
E_SImode) != 0
                              || !
#line 7826 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (PLUS, HImode, operands, TARGET_APX_NDD)))
                            return -1;
                          return 355; /* *addvhi4_overflow_1 */

                        case 2:
                          if (pattern1869 (x1, 
E_SImode, 
E_DImode) != 0
                              || !
#line 7826 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (PLUS, SImode, operands, TARGET_APX_NDD)))
                            return -1;
                          return 356; /* *addvsi4_overflow_1 */

                        case 3:
                          if (pattern1869 (x1, 
E_DImode, 
E_TImode) != 0
                              || !(
#line 7826 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (PLUS, DImode, operands, TARGET_APX_NDD)) && 
#line 1161 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                            return -1;
                          return 357; /* *addvdi4_overflow_1 */

                        case 4:
                          if (pattern1871 (x1, 
E_QImode, 
E_HImode) != 0
                              || !
#line 7859 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (PLUS, QImode, operands, TARGET_APX_NDD)
   && CONST_INT_P (operands[2])
   && INTVAL (operands[2]) == INTVAL (operands[6])))
                            return -1;
                          return 358; /* *addvqi4_overflow_2 */

                        case 5:
                          if (pattern1871 (x1, 
E_HImode, 
E_SImode) != 0
                              || !
#line 7859 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (PLUS, HImode, operands, TARGET_APX_NDD)
   && CONST_INT_P (operands[2])
   && INTVAL (operands[2]) == INTVAL (operands[6])))
                            return -1;
                          return 359; /* *addvhi4_overflow_2 */

                        case 6:
                          if (pattern1871 (x1, 
E_SImode, 
E_DImode) != 0
                              || !
#line 7859 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (PLUS, SImode, operands, TARGET_APX_NDD)
   && CONST_INT_P (operands[2])
   && INTVAL (operands[2]) == INTVAL (operands[6])))
                            return -1;
                          return 360; /* *addvsi4_overflow_2 */

                        case 7:
                          if (pattern1871 (x1, 
E_DImode, 
E_TImode) != 0
                              || !(
#line 7859 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (PLUS, DImode, operands, TARGET_APX_NDD)
   && CONST_INT_P (operands[2])
   && INTVAL (operands[2]) == INTVAL (operands[6])) && 
#line 1161 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                            return -1;
                          return 361; /* *addvdi4_overflow_2 */

                        default:
                          return -1;
                        }

                    default:
                      return -1;
                    }

                default:
                  return -1;
                }

            default:
              return -1;
            }

        default:
          return -1;
        }

    case MINUS:
      if (pattern685 (x1, 
MINUS) != 0)
        return -1;
      x5 = XEXP (x4, 0);
      switch (GET_CODE (x5))
        {
        case SIGN_EXTEND:
          switch (pattern1563 (x1))
            {
            case 0:
              if (!
#line 8435 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (MINUS, QImode, operands, TARGET_APX_NDD)))
                return -1;
              return 425; /* *subvqi4 */

            case 1:
              if (!
#line 8435 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (MINUS, HImode, operands, TARGET_APX_NDD)))
                return -1;
              return 426; /* *subvhi4 */

            case 2:
              if (!
#line 8435 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (MINUS, SImode, operands, TARGET_APX_NDD)))
                return -1;
              return 427; /* *subvsi4 */

            case 3:
              if (x86_64_sext_operand (operands[2], E_DImode)
                  && (
#line 8435 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (MINUS, DImode, operands, TARGET_APX_NDD)) && 
#line 1161 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return 428; /* *subvdi4 */
              if (!nonimmediate_operand (operands[2], E_DImode)
                  || !(
#line 8485 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (MINUS, SImode, operands, TARGET_APX_NDD)) && 
#line 1235 "../../gcc/config/i386/i386.md"
(!TARGET_64BIT)))
                return -1;
              return 433; /* *subvdi4_doubleword */

            case 4:
              if (!(
#line 8485 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (MINUS, DImode, operands, TARGET_APX_NDD)) && 
#line 1236 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return -1;
              return 434; /* *subvti4_doubleword */

            case 5:
              if (!
#line 8457 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (MINUS, QImode, operands, TARGET_APX_NDD)
   && CONST_INT_P (operands[2])
   && INTVAL (operands[2]) == INTVAL (operands[3])))
                return -1;
              return 429; /* subvqi4_1 */

            case 6:
              if (!
#line 8457 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (MINUS, HImode, operands, TARGET_APX_NDD)
   && CONST_INT_P (operands[2])
   && INTVAL (operands[2]) == INTVAL (operands[3])))
                return -1;
              return 430; /* subvhi4_1 */

            case 7:
              if (!
#line 8457 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (MINUS, SImode, operands, TARGET_APX_NDD)
   && CONST_INT_P (operands[2])
   && INTVAL (operands[2]) == INTVAL (operands[3])))
                return -1;
              return 431; /* subvsi4_1 */

            case 8:
              if (const_int_operand (operands[3], E_TImode)
                  && x86_64_immediate_operand (operands[2], E_DImode)
                  && (
#line 8457 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (MINUS, DImode, operands, TARGET_APX_NDD)
   && CONST_INT_P (operands[2])
   && INTVAL (operands[2]) == INTVAL (operands[3])) && 
#line 1161 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return 432; /* subvdi4_1 */
              if (!const_scalar_int_operand (operands[3], E_TImode)
                  || !x86_64_hilo_general_operand (operands[2], E_DImode)
                  || !(
#line 8529 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (MINUS, SImode, operands, TARGET_APX_NDD)
   && CONST_SCALAR_INT_P (operands[2])
   && rtx_equal_p (operands[2], operands[3])) && 
#line 1235 "../../gcc/config/i386/i386.md"
(!TARGET_64BIT)))
                return -1;
              return 435; /* *subvdi4_doubleword_1 */

            case 9:
              if (!(
#line 8529 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (MINUS, DImode, operands, TARGET_APX_NDD)
   && CONST_SCALAR_INT_P (operands[2])
   && rtx_equal_p (operands[2], operands[3])) && 
#line 1236 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return -1;
              return 436; /* *subvti4_doubleword_1 */

            default:
              return -1;
            }

        case MINUS:
          x6 = XEXP (x5, 0);
          if (GET_CODE (x6) != SIGN_EXTEND)
            return -1;
          x8 = XEXP (x5, 1);
          switch (GET_CODE (x8))
            {
            case LTU:
            case UNLT:
              operands[4] = x8;
              x23 = XEXP (x8, 1);
              if (x23 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
                return -1;
              x9 = XEXP (x3, 1);
              x10 = XEXP (x9, 0);
              x11 = XEXP (x10, 0);
              if (GET_CODE (x11) != MINUS)
                return -1;
              x21 = XEXP (x11, 1);
              switch (GET_CODE (x21))
                {
                case LTU:
                case UNLT:
                  operands[5] = x21;
                  x24 = XEXP (x21, 1);
                  if (x24 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
                    return -1;
                  x14 = XVECEXP (x1, 0, 1);
                  x15 = XEXP (x14, 1);
                  x16 = XEXP (x15, 0);
                  if (GET_CODE (x16) != MINUS)
                    return -1;
                  x22 = XEXP (x16, 1);
                  switch (GET_CODE (x22))
                    {
                    case LTU:
                    case UNLT:
                      if (!rtx_equal_p (x22, operands[5]))
                        return -1;
                      x18 = XEXP (x6, 0);
                      operands[1] = x18;
                      x19 = XEXP (x8, 0);
                      operands[3] = x19;
                      if (!flags_reg_operand (operands[3], E_VOIDmode))
                        return -1;
                      x12 = XEXP (x11, 0);
                      if (!rtx_equal_p (x12, operands[1]))
                        return -1;
                      x25 = XEXP (x21, 0);
                      if (!rtx_equal_p (x25, operands[3]))
                        return -1;
                      x17 = XEXP (x16, 0);
                      if (!rtx_equal_p (x17, operands[1]))
                        return -1;
                      switch (pattern1852 (x1))
                        {
                        case 0:
                          if (pattern1873 (x1, 
E_QImode, 
E_HImode) != 0
                              || !
#line 8594 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (MINUS, QImode, operands, TARGET_APX_NDD)))
                            return -1;
                          return 437; /* *subvqi4_overflow_1 */

                        case 1:
                          if (pattern1873 (x1, 
E_HImode, 
E_SImode) != 0
                              || !
#line 8594 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (MINUS, HImode, operands, TARGET_APX_NDD)))
                            return -1;
                          return 438; /* *subvhi4_overflow_1 */

                        case 2:
                          if (pattern1874 (x1, 
E_SImode, 
E_DImode) != 0
                              || !
#line 8594 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (MINUS, SImode, operands, TARGET_APX_NDD)))
                            return -1;
                          return 439; /* *subvsi4_overflow_1 */

                        case 3:
                          if (pattern1874 (x1, 
E_DImode, 
E_TImode) != 0
                              || !(
#line 8594 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (MINUS, DImode, operands, TARGET_APX_NDD)) && 
#line 1161 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                            return -1;
                          return 440; /* *subvdi4_overflow_1 */

                        case 4:
                          if (pattern1875 (x1, 
E_QImode, 
E_HImode) != 0
                              || !
#line 8627 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (MINUS, QImode, operands, TARGET_APX_NDD)
   && CONST_INT_P (operands[2])
   && INTVAL (operands[2]) == INTVAL (operands[6])))
                            return -1;
                          return 441; /* *subvqi4_overflow_2 */

                        case 5:
                          if (pattern1875 (x1, 
E_HImode, 
E_SImode) != 0
                              || !
#line 8627 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (MINUS, HImode, operands, TARGET_APX_NDD)
   && CONST_INT_P (operands[2])
   && INTVAL (operands[2]) == INTVAL (operands[6])))
                            return -1;
                          return 442; /* *subvhi4_overflow_2 */

                        case 6:
                          if (pattern1875 (x1, 
E_SImode, 
E_DImode) != 0
                              || !
#line 8627 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (MINUS, SImode, operands, TARGET_APX_NDD)
   && CONST_INT_P (operands[2])
   && INTVAL (operands[2]) == INTVAL (operands[6])))
                            return -1;
                          return 443; /* *subvsi4_overflow_2 */

                        case 7:
                          if (pattern1875 (x1, 
E_DImode, 
E_TImode) != 0
                              || !(
#line 8627 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (MINUS, DImode, operands, TARGET_APX_NDD)
   && CONST_INT_P (operands[2])
   && INTVAL (operands[2]) == INTVAL (operands[6])) && 
#line 1161 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                            return -1;
                          return 444; /* *subvdi4_overflow_2 */

                        default:
                          return -1;
                        }

                    default:
                      return -1;
                    }

                default:
                  return -1;
                }

            default:
              return -1;
            }

        default:
          return -1;
        }

    case MULT:
      if (pattern684 (x1, 
MULT) != 0)
        return -1;
      x5 = XEXP (x4, 0);
      switch (GET_CODE (x5))
        {
        case SIGN_EXTEND:
          x9 = XEXP (x3, 1);
          if (GET_CODE (x9) != SIGN_EXTEND)
            return -1;
          x10 = XEXP (x9, 0);
          if (GET_CODE (x10) != MULT)
            return -1;
          x6 = XEXP (x5, 0);
          operands[1] = x6;
          x11 = XEXP (x10, 0);
          if (!rtx_equal_p (x11, operands[1]))
            return -1;
          x14 = XVECEXP (x1, 0, 1);
          x15 = XEXP (x14, 1);
          x16 = XEXP (x15, 0);
          if (!rtx_equal_p (x16, operands[1]))
            return -1;
          x26 = XEXP (x4, 1);
          switch (GET_CODE (x26))
            {
            case SIGN_EXTEND:
              x27 = XEXP (x26, 0);
              operands[2] = x27;
              x28 = XEXP (x10, 1);
              if (!rtx_equal_p (x28, operands[2]))
                return -1;
              x29 = XEXP (x15, 1);
              if (!rtx_equal_p (x29, operands[2]))
                return -1;
              switch (GET_MODE (x4))
                {
                case E_DImode:
                  if (pattern1792 (x1, 
E_SImode, 
E_DImode) != 0
                      || !
#line 10742 "../../gcc/config/i386/i386.md"
(!(MEM_P (operands[1]) && MEM_P (operands[2]))))
                    return -1;
                  return 604; /* *mulvsi4 */

                case E_TImode:
                  if (pattern1792 (x1, 
E_DImode, 
E_TImode) != 0
                      || !(
#line 10742 "../../gcc/config/i386/i386.md"
(!(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                    return -1;
                  return 605; /* *mulvdi4 */

                case E_SImode:
                  if (pattern1793 (x1, 
E_HImode, 
E_SImode) != 0
                      || !
#line 10778 "../../gcc/config/i386/i386.md"
(!(MEM_P (operands[1]) && MEM_P (operands[2]))))
                    return -1;
                  return 606; /* *mulvhi4 */

                case E_HImode:
                  if (pattern1793 (x1, 
E_QImode, 
E_HImode) != 0
                      || !
#line 10916 "../../gcc/config/i386/i386.md"
(TARGET_QIMODE_MATH
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
                    return -1;
                  return 613; /* *mulvqi4 */

                default:
                  return -1;
                }

            case CONST_INT:
              operands[3] = x26;
              x28 = XEXP (x10, 1);
              operands[2] = x28;
              x29 = XEXP (x15, 1);
              if (!rtx_equal_p (x29, operands[2]))
                return -1;
              switch (GET_MODE (x4))
                {
                case E_SImode:
                  if (GET_MODE (x5) != E_SImode
                      || !nonimmediate_operand (operands[1], E_HImode)
                      || !const_int_operand (operands[3], E_SImode)
                      || GET_MODE (x9) != E_SImode
                      || GET_MODE (x10) != E_HImode
                      || !immediate_operand (operands[2], E_HImode)
                      || !register_operand (operands[0], E_HImode)
                      || GET_MODE (x15) != E_HImode
                      || !
#line 10802 "../../gcc/config/i386/i386.md"
(!(MEM_P (operands[1]) && MEM_P (operands[2]))
   && CONST_INT_P (operands[2])
   && INTVAL (operands[2]) == INTVAL (operands[3])))
                    return -1;
                  return 607; /* *mulvhi4_1 */

                case E_DImode:
                  if (pattern1794 (x1, 
E_SImode, 
E_DImode) != 0
                      || !
#line 10802 "../../gcc/config/i386/i386.md"
(!(MEM_P (operands[1]) && MEM_P (operands[2]))
   && CONST_INT_P (operands[2])
   && INTVAL (operands[2]) == INTVAL (operands[3])))
                    return -1;
                  return 608; /* *mulvsi4_1 */

                case E_TImode:
                  if (pattern1794 (x1, 
E_DImode, 
E_TImode) != 0
                      || !(
#line 10802 "../../gcc/config/i386/i386.md"
(!(MEM_P (operands[1]) && MEM_P (operands[2]))
   && CONST_INT_P (operands[2])
   && INTVAL (operands[2]) == INTVAL (operands[3])) && 
#line 1164 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                    return -1;
                  return 609; /* *mulvdi4_1 */

                default:
                  return -1;
                }

            default:
              return -1;
            }

        case ZERO_EXTEND:
          x26 = XEXP (x4, 1);
          if (GET_CODE (x26) != ZERO_EXTEND)
            return -1;
          x9 = XEXP (x3, 1);
          if (GET_CODE (x9) != ZERO_EXTEND)
            return -1;
          x10 = XEXP (x9, 0);
          if (GET_CODE (x10) != MULT)
            return -1;
          x6 = XEXP (x5, 0);
          operands[1] = x6;
          x27 = XEXP (x26, 0);
          operands[2] = x27;
          x11 = XEXP (x10, 0);
          if (!rtx_equal_p (x11, operands[1]))
            return -1;
          x28 = XEXP (x10, 1);
          if (!rtx_equal_p (x28, operands[2]))
            return -1;
          x14 = XVECEXP (x1, 0, 1);
          x15 = XEXP (x14, 1);
          x16 = XEXP (x15, 0);
          if (!rtx_equal_p (x16, operands[1]))
            return -1;
          x29 = XEXP (x15, 1);
          if (!rtx_equal_p (x29, operands[2]))
            return -1;
          switch (GET_MODE (x4))
            {
            case E_SImode:
              if (pnum_clobbers == NULL
                  || pattern1793 (x1, 
E_HImode, 
E_SImode) != 0
                  || !
#line 10872 "../../gcc/config/i386/i386.md"
(!(MEM_P (operands[1]) && MEM_P (operands[2]))))
                return -1;
              *pnum_clobbers = 1;
              return 610; /* *umulvhi4 */

            case E_DImode:
              if (pnum_clobbers == NULL
                  || pattern1793 (x1, 
E_SImode, 
E_DImode) != 0
                  || !
#line 10872 "../../gcc/config/i386/i386.md"
(!(MEM_P (operands[1]) && MEM_P (operands[2]))))
                return -1;
              *pnum_clobbers = 1;
              return 611; /* *umulvsi4 */

            case E_TImode:
              if (pnum_clobbers == NULL
                  || pattern1793 (x1, 
E_DImode, 
E_TImode) != 0
                  || !(
#line 10872 "../../gcc/config/i386/i386.md"
(!(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 1164 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return -1;
              *pnum_clobbers = 1;
              return 612; /* *umulvdi4 */

            case E_HImode:
              if (pattern1793 (x1, 
E_QImode, 
E_HImode) != 0
                  || !
#line 10916 "../../gcc/config/i386/i386.md"
(TARGET_QIMODE_MATH
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
                return -1;
              return 614; /* *umulvqi4 */

            default:
              return -1;
            }

        default:
          return -1;
        }

    case ZERO_EXTRACT:
      switch (pattern686 (x1))
        {
        case 0:
          if (!
#line 19384 "../../gcc/config/i386/i386.md"
(TARGET_USE_BT && ix86_pre_reload_split ()))
            return -1;
          return 1440; /* *btsi_setncqi_2 */

        case 1:
          if (!(
#line 19384 "../../gcc/config/i386/i386.md"
(TARGET_USE_BT && ix86_pre_reload_split ()) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return -1;
          return 1441; /* *btdi_setncqi_2 */

        default:
          return -1;
        }

    case REG:
    case SUBREG:
    case MEM:
      operands[1] = x4;
      if (!nonimmediate_operand (operands[1], E_V2SFmode))
        return -1;
      x14 = XVECEXP (x1, 0, 1);
      if (pattern380 (x14, 
110, 
0) != 0)
        return -1;
      x30 = XEXP (x2, 0);
      operands[0] = x30;
      if (!register_operand (operands[0], E_V2SImode)
          || GET_MODE (x3) != E_V2SImode)
        return -1;
      x9 = XEXP (x3, 1);
      operands[2] = x9;
      if (!nonimmediate_operand (operands[2], E_V2SFmode)
          || !
#line 1203 "../../gcc/config/i386/mmx.md"
(TARGET_3DNOW && ix86_binary_operator_ok (EQ, V2SFmode, operands)))
        return -1;
      return 2063; /* *mmx_eqv2sf3 */

    default:
      return -1;
    }
}

 int
recog_413 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 0);
  operands[0] = x3;
  x4 = XEXP (x2, 1);
  x5 = XEXP (x4, 0);
  operands[1] = x5;
  x6 = XVECEXP (x1, 0, 1);
  switch (GET_CODE (x6))
    {
    case CLOBBER:
      switch (pattern703 (x1))
        {
        case 0:
          if (!
#line 21507 "../../gcc/config/i386/i386.md"
(TARGET_LZCNT))
            return -1;
          return 1534; /* clzsi2_lzcnt */

        case 1:
          if (!(
#line 21507 "../../gcc/config/i386/i386.md"
(TARGET_LZCNT) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return -1;
          return 1535; /* clzdi2_lzcnt */

        default:
          return -1;
        }

    case UNSPEC:
      switch (pattern704 (x1))
        {
        case 0:
          if (
#line 21532 "../../gcc/config/i386/i386.md"
(TARGET_APX_NF && TARGET_LZCNT))
            return 1536; /* *clzsi2_lzcnt_falsedep_nf */
          if (pnum_clobbers == NULL
              || !
#line 21545 "../../gcc/config/i386/i386.md"
(TARGET_LZCNT))
            return -1;
          *pnum_clobbers = 1;
          return 1538; /* *clzsi2_lzcnt_falsedep */

        case 1:
          if ((
#line 21532 "../../gcc/config/i386/i386.md"
(TARGET_APX_NF && TARGET_LZCNT) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return 1537; /* *clzdi2_lzcnt_falsedep_nf */
          if (pnum_clobbers == NULL
              || !(
#line 21545 "../../gcc/config/i386/i386.md"
(TARGET_LZCNT) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return -1;
          *pnum_clobbers = 1;
          return 1539; /* *clzdi2_lzcnt_falsedep */

        default:
          return -1;
        }

    default:
      return -1;
    }
}

 int
recog_419 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 0);
  operands[0] = x3;
  x4 = XEXP (x2, 1);
  operands[1] = x4;
  x5 = XVECEXP (x1, 0, 1);
  x6 = XVECEXP (x5, 0, 0);
  operands[2] = x6;
  switch (GET_MODE (operands[0]))
    {
    case E_V64QImode:
      if (register_operand (operands[0], E_V64QImode)
          && int_float_vector_all_ones_operand (operands[1], E_V64QImode)
          && register_operand (operands[2], E_V64QImode)
          && (
#line 1572 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL || 64 == 64) && 
#line 283 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
        return 2416; /* *vmovv64qi_constm1_pternlog_false_dep */
      break;

    case E_V32QImode:
      if (register_operand (operands[0], E_V32QImode)
          && int_float_vector_all_ones_operand (operands[1], E_V32QImode)
          && register_operand (operands[2], E_V32QImode)
          && (
#line 1572 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL || 32 == 64) && 
#line 283 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
        return 2417; /* *vmovv32qi_constm1_pternlog_false_dep */
      break;

    case E_V16QImode:
      if (register_operand (operands[0], E_V16QImode)
          && int_float_vector_all_ones_operand (operands[1], E_V16QImode)
          && register_operand (operands[2], E_V16QImode)
          && 
#line 1572 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL || 16 == 64))
        return 2418; /* *vmovv16qi_constm1_pternlog_false_dep */
      break;

    case E_V32HImode:
      if (register_operand (operands[0], E_V32HImode)
          && int_float_vector_all_ones_operand (operands[1], E_V32HImode)
          && register_operand (operands[2], E_V32HImode)
          && (
#line 1572 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL || 64 == 64) && 
#line 284 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
        return 2419; /* *vmovv32hi_constm1_pternlog_false_dep */
      break;

    case E_V16HImode:
      if (register_operand (operands[0], E_V16HImode)
          && int_float_vector_all_ones_operand (operands[1], E_V16HImode)
          && register_operand (operands[2], E_V16HImode)
          && (
#line 1572 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL || 32 == 64) && 
#line 284 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
        return 2420; /* *vmovv16hi_constm1_pternlog_false_dep */
      break;

    case E_V8HImode:
      if (register_operand (operands[0], E_V8HImode)
          && int_float_vector_all_ones_operand (operands[1], E_V8HImode)
          && register_operand (operands[2], E_V8HImode)
          && 
#line 1572 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL || 16 == 64))
        return 2421; /* *vmovv8hi_constm1_pternlog_false_dep */
      break;

    case E_V16SImode:
      if (register_operand (operands[0], E_V16SImode)
          && int_float_vector_all_ones_operand (operands[1], E_V16SImode)
          && register_operand (operands[2], E_V16SImode)
          && (
#line 1572 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL || 64 == 64) && 
#line 285 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
        return 2422; /* *vmovv16si_constm1_pternlog_false_dep */
      break;

    case E_V8SImode:
      if (register_operand (operands[0], E_V8SImode)
          && int_float_vector_all_ones_operand (operands[1], E_V8SImode)
          && register_operand (operands[2], E_V8SImode)
          && (
#line 1572 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL || 32 == 64) && 
#line 285 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
        return 2423; /* *vmovv8si_constm1_pternlog_false_dep */
      break;

    case E_V4SImode:
      if (register_operand (operands[0], E_V4SImode)
          && int_float_vector_all_ones_operand (operands[1], E_V4SImode)
          && register_operand (operands[2], E_V4SImode)
          && 
#line 1572 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL || 16 == 64))
        return 2424; /* *vmovv4si_constm1_pternlog_false_dep */
      break;

    case E_V8DImode:
      if (register_operand (operands[0], E_V8DImode)
          && int_float_vector_all_ones_operand (operands[1], E_V8DImode)
          && register_operand (operands[2], E_V8DImode)
          && (
#line 1572 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL || 64 == 64) && 
#line 286 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
        return 2425; /* *vmovv8di_constm1_pternlog_false_dep */
      break;

    case E_V4DImode:
      if (register_operand (operands[0], E_V4DImode)
          && int_float_vector_all_ones_operand (operands[1], E_V4DImode)
          && register_operand (operands[2], E_V4DImode)
          && (
#line 1572 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL || 32 == 64) && 
#line 286 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
        return 2426; /* *vmovv4di_constm1_pternlog_false_dep */
      break;

    case E_V2DImode:
      if (register_operand (operands[0], E_V2DImode)
          && int_float_vector_all_ones_operand (operands[1], E_V2DImode)
          && register_operand (operands[2], E_V2DImode)
          && 
#line 1572 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL || 16 == 64))
        return 2427; /* *vmovv2di_constm1_pternlog_false_dep */
      break;

    case E_V4TImode:
      if (register_operand (operands[0], E_V4TImode)
          && int_float_vector_all_ones_operand (operands[1], E_V4TImode)
          && register_operand (operands[2], E_V4TImode)
          && (
#line 1572 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL || 64 == 64) && 
#line 287 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
        return 2428; /* *vmovv4ti_constm1_pternlog_false_dep */
      break;

    case E_V2TImode:
      if (register_operand (operands[0], E_V2TImode)
          && int_float_vector_all_ones_operand (operands[1], E_V2TImode)
          && register_operand (operands[2], E_V2TImode)
          && (
#line 1572 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL || 32 == 64) && 
#line 287 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
        return 2429; /* *vmovv2ti_constm1_pternlog_false_dep */
      break;

    case E_V1TImode:
      if (register_operand (operands[0], E_V1TImode)
          && int_float_vector_all_ones_operand (operands[1], E_V1TImode)
          && register_operand (operands[2], E_V1TImode)
          && 
#line 1572 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL || 16 == 64))
        return 2430; /* *vmovv1ti_constm1_pternlog_false_dep */
      break;

    case E_V32HFmode:
      if (register_operand (operands[0], E_V32HFmode)
          && int_float_vector_all_ones_operand (operands[1], E_V32HFmode)
          && register_operand (operands[2], E_V32HFmode)
          && (
#line 1572 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL || 64 == 64) && 
#line 288 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
        return 2431; /* *vmovv32hf_constm1_pternlog_false_dep */
      break;

    case E_V16HFmode:
      if (register_operand (operands[0], E_V16HFmode)
          && int_float_vector_all_ones_operand (operands[1], E_V16HFmode)
          && register_operand (operands[2], E_V16HFmode)
          && (
#line 1572 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL || 32 == 64) && 
#line 288 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
        return 2432; /* *vmovv16hf_constm1_pternlog_false_dep */
      break;

    case E_V8HFmode:
      if (register_operand (operands[0], E_V8HFmode)
          && int_float_vector_all_ones_operand (operands[1], E_V8HFmode)
          && register_operand (operands[2], E_V8HFmode)
          && 
#line 1572 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL || 16 == 64))
        return 2433; /* *vmovv8hf_constm1_pternlog_false_dep */
      break;

    case E_V32BFmode:
      if (register_operand (operands[0], E_V32BFmode)
          && int_float_vector_all_ones_operand (operands[1], E_V32BFmode)
          && register_operand (operands[2], E_V32BFmode)
          && (
#line 1572 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL || 64 == 64) && 
#line 289 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
        return 2434; /* *vmovv32bf_constm1_pternlog_false_dep */
      break;

    case E_V16BFmode:
      if (register_operand (operands[0], E_V16BFmode)
          && int_float_vector_all_ones_operand (operands[1], E_V16BFmode)
          && register_operand (operands[2], E_V16BFmode)
          && (
#line 1572 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL || 32 == 64) && 
#line 289 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
        return 2435; /* *vmovv16bf_constm1_pternlog_false_dep */
      break;

    case E_V8BFmode:
      if (register_operand (operands[0], E_V8BFmode)
          && int_float_vector_all_ones_operand (operands[1], E_V8BFmode)
          && register_operand (operands[2], E_V8BFmode)
          && 
#line 1572 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL || 16 == 64))
        return 2436; /* *vmovv8bf_constm1_pternlog_false_dep */
      break;

    case E_V16SFmode:
      if (register_operand (operands[0], E_V16SFmode)
          && int_float_vector_all_ones_operand (operands[1], E_V16SFmode)
          && register_operand (operands[2], E_V16SFmode)
          && (
#line 1572 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL || 64 == 64) && 
#line 290 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
        return 2437; /* *vmovv16sf_constm1_pternlog_false_dep */
      break;

    case E_V8SFmode:
      if (register_operand (operands[0], E_V8SFmode)
          && int_float_vector_all_ones_operand (operands[1], E_V8SFmode)
          && register_operand (operands[2], E_V8SFmode)
          && (
#line 1572 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL || 32 == 64) && 
#line 290 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
        return 2438; /* *vmovv8sf_constm1_pternlog_false_dep */
      break;

    case E_V4SFmode:
      if (register_operand (operands[0], E_V4SFmode)
          && int_float_vector_all_ones_operand (operands[1], E_V4SFmode)
          && register_operand (operands[2], E_V4SFmode)
          && 
#line 1572 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL || 16 == 64))
        return 2439; /* *vmovv4sf_constm1_pternlog_false_dep */
      break;

    case E_V8DFmode:
      if (register_operand (operands[0], E_V8DFmode)
          && int_float_vector_all_ones_operand (operands[1], E_V8DFmode)
          && register_operand (operands[2], E_V8DFmode)
          && (
#line 1572 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL || 64 == 64) && 
#line 291 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
        return 2440; /* *vmovv8df_constm1_pternlog_false_dep */
      break;

    case E_V4DFmode:
      if (register_operand (operands[0], E_V4DFmode)
          && int_float_vector_all_ones_operand (operands[1], E_V4DFmode)
          && register_operand (operands[2], E_V4DFmode)
          && (
#line 1572 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL || 32 == 64) && 
#line 291 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
        return 2441; /* *vmovv4df_constm1_pternlog_false_dep */
      break;

    case E_V2DFmode:
      if (register_operand (operands[0], E_V2DFmode)
          && int_float_vector_all_ones_operand (operands[1], E_V2DFmode)
          && register_operand (operands[2], E_V2DFmode)
          && 
#line 1572 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL || 16 == 64))
        return 2442; /* *vmovv2df_constm1_pternlog_false_dep */
      break;

    default:
      break;
    }
  switch (GET_CODE (x4))
    {
    case VEC_MERGE:
      x7 = XEXP (x4, 0);
      operands[2] = x7;
      x8 = XEXP (x4, 1);
      operands[3] = x8;
      x9 = XEXP (x4, 2);
      operands[1] = x9;
      operands[4] = x6;
      switch (GET_MODE (operands[0]))
        {
        case E_V16SImode:
          if (pattern1335 (x4, 
E_V16SImode, 
E_HImode) != 0
              || !(
#line 10361 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && !TARGET_AVX512DQ) && 
#line 501 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return -1;
          return 5229; /* *avx512f_cvtmask2dv16si_pternlog_false_dep */

        case E_V8SImode:
          if (pattern1335 (x4, 
E_V8SImode, 
E_QImode) != 0
              || !(
#line 10361 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && !TARGET_AVX512DQ) && 
#line 501 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 5230; /* *avx512vl_cvtmask2dv8si_pternlog_false_dep */

        case E_V4SImode:
          if (pattern1335 (x4, 
E_V4SImode, 
E_QImode) != 0
              || !(
#line 10361 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && !TARGET_AVX512DQ) && 
#line 501 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 5231; /* *avx512vl_cvtmask2dv4si_pternlog_false_dep */

        case E_V8DImode:
          if (pattern1335 (x4, 
E_V8DImode, 
E_QImode) != 0
              || !(
#line 10361 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && !TARGET_AVX512DQ) && 
#line 502 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return -1;
          return 5232; /* *avx512f_cvtmask2qv8di_pternlog_false_dep */

        case E_V4DImode:
          if (pattern1335 (x4, 
E_V4DImode, 
E_QImode) != 0
              || !(
#line 10361 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && !TARGET_AVX512DQ) && 
#line 502 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 5233; /* *avx512vl_cvtmask2qv4di_pternlog_false_dep */

        case E_V2DImode:
          if (pattern1335 (x4, 
E_V2DImode, 
E_QImode) != 0
              || !(
#line 10361 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && !TARGET_AVX512DQ) && 
#line 502 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 5234; /* *avx512vl_cvtmask2qv2di_pternlog_false_dep */

        default:
          return -1;
        }

    case XOR:
      x7 = XEXP (x4, 0);
      operands[1] = x7;
      x8 = XEXP (x4, 1);
      operands[2] = x8;
      operands[3] = x6;
      switch (GET_MODE (operands[0]))
        {
        case E_V16SImode:
          if (pattern1248 (x4, 
E_V16SImode) != 0
              || !(
#line 18426 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && (64 == 64 || TARGET_AVX512VL || TARGET_EVEX512)) && 
#line 569 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 7971; /* *one_cmplv16si2_pternlog_false_dep */

        case E_V8DImode:
          if (pattern1248 (x4, 
E_V8DImode) != 0
              || !(
#line 18426 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && (64 == 64 || TARGET_AVX512VL || TARGET_EVEX512)) && 
#line 570 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 7972; /* *one_cmplv8di2_pternlog_false_dep */

        case E_V64QImode:
          if (pattern1248 (x4, 
E_V64QImode) != 0
              || !(
#line 18426 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && (64 == 64 || TARGET_AVX512VL || TARGET_EVEX512)) && 
#line 571 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512)))
            return -1;
          return 7973; /* *one_cmplv64qi2_pternlog_false_dep */

        case E_V32QImode:
          if (pattern1248 (x4, 
E_V32QImode) != 0
              || !(
#line 18426 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && (32 == 64 || TARGET_AVX512VL || TARGET_EVEX512)) && 
#line 571 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 7974; /* *one_cmplv32qi2_pternlog_false_dep */

        case E_V16QImode:
          if (pattern1248 (x4, 
E_V16QImode) != 0
              || !
#line 18426 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && (16 == 64 || TARGET_AVX512VL || TARGET_EVEX512)))
            return -1;
          return 7975; /* *one_cmplv16qi2_pternlog_false_dep */

        case E_V32HImode:
          if (pattern1248 (x4, 
E_V32HImode) != 0
              || !(
#line 18426 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && (64 == 64 || TARGET_AVX512VL || TARGET_EVEX512)) && 
#line 572 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512)))
            return -1;
          return 7976; /* *one_cmplv32hi2_pternlog_false_dep */

        case E_V16HImode:
          if (pattern1248 (x4, 
E_V16HImode) != 0
              || !(
#line 18426 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && (32 == 64 || TARGET_AVX512VL || TARGET_EVEX512)) && 
#line 572 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 7977; /* *one_cmplv16hi2_pternlog_false_dep */

        case E_V8HImode:
          if (pattern1248 (x4, 
E_V8HImode) != 0
              || !
#line 18426 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && (16 == 64 || TARGET_AVX512VL || TARGET_EVEX512)))
            return -1;
          return 7978; /* *one_cmplv8hi2_pternlog_false_dep */

        case E_V8SImode:
          if (pattern1248 (x4, 
E_V8SImode) != 0
              || !(
#line 18426 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && (32 == 64 || TARGET_AVX512VL || TARGET_EVEX512)) && 
#line 573 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 7979; /* *one_cmplv8si2_pternlog_false_dep */

        case E_V4SImode:
          if (pattern1248 (x4, 
E_V4SImode) != 0
              || !
#line 18426 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && (16 == 64 || TARGET_AVX512VL || TARGET_EVEX512)))
            return -1;
          return 7980; /* *one_cmplv4si2_pternlog_false_dep */

        case E_V4DImode:
          if (pattern1248 (x4, 
E_V4DImode) != 0
              || !(
#line 18426 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && (32 == 64 || TARGET_AVX512VL || TARGET_EVEX512)) && 
#line 574 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 7981; /* *one_cmplv4di2_pternlog_false_dep */

        case E_V2DImode:
          if (pattern1248 (x4, 
E_V2DImode) != 0
              || !
#line 18426 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && (16 == 64 || TARGET_AVX512VL || TARGET_EVEX512)))
            return -1;
          return 7982; /* *one_cmplv2di2_pternlog_false_dep */

        default:
          return -1;
        }

    default:
      return -1;
    }
}

 rtx_insn *
split_6 (rtx x1 ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7;
  rtx_insn *res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  operands[0] = x2;
  x3 = XEXP (x1, 1);
  x4 = XEXP (x3, 0);
  switch (GET_CODE (x4))
    {
    case AND:
      switch (pattern69 (x3))
        {
        case 0:
          if (!(
#line 3704 "../../gcc/config/i386/i386.md"
(TARGET_64BIT
   && CONST_WIDE_INT_P (operands[3])
   && CONST_WIDE_INT_NUNITS (operands[3]) == 2
   && CONST_WIDE_INT_ELT (operands[3], 0) == -1
   && CONST_WIDE_INT_ELT (operands[3], 1) == 0) && 
#line 3710 "../../gcc/config/i386/i386.md"
( reload_completed)))
            return NULL;
          return gen_split_22 (insn, operands);

        case 1:
          if (!(
#line 3726 "../../gcc/config/i386/i386.md"
(TARGET_64BIT
   && CONST_WIDE_INT_P (operands[3])
   && CONST_WIDE_INT_NUNITS (operands[3]) == 2
   && CONST_WIDE_INT_ELT (operands[3], 0) == 0
   && CONST_WIDE_INT_ELT (operands[3], 1) == -1) && 
#line 3732 "../../gcc/config/i386/i386.md"
( reload_completed)))
            return NULL;
          return gen_split_25 (insn, operands);

        case 2:
          if (!(
#line 3748 "../../gcc/config/i386/i386.md"
(!TARGET_64BIT
   && CONST_INT_P (operands[3])
   && UINTVAL (operands[3]) == 0xffffffff00000000ll) && 
#line 3752 "../../gcc/config/i386/i386.md"
( reload_completed)))
            return NULL;
          return gen_split_28 (insn, operands);

        default:
          return NULL;
        }

    case REG:
    case SUBREG:
      operands[1] = x4;
      x5 = XEXP (x3, 1);
      operands[2] = x5;
      switch (GET_MODE (operands[0]))
        {
        case E_QImode:
          if (pattern829 (x3, 
E_QImode) != 0
              || !
#line 7095 "../../gcc/config/i386/i386.md"
(TARGET_APX_NF && reload_completed
   && ix86_lea_for_add_ok (insn, operands)))
            return NULL;
          return gen_split_129 (insn, operands);

        case E_HImode:
          if (pattern829 (x3, 
E_HImode) != 0
              || !
#line 7095 "../../gcc/config/i386/i386.md"
(TARGET_APX_NF && reload_completed
   && ix86_lea_for_add_ok (insn, operands)))
            return NULL;
          return gen_split_130 (insn, operands);

        case E_SImode:
          if (pattern830 (x3, 
E_SImode) != 0
              || !
#line 7095 "../../gcc/config/i386/i386.md"
(TARGET_APX_NF && reload_completed
   && ix86_lea_for_add_ok (insn, operands)))
            return NULL;
          return gen_split_131 (insn, operands);

        case E_DImode:
          if (pattern830 (x3, 
E_DImode) != 0
              || !(
#line 7095 "../../gcc/config/i386/i386.md"
(TARGET_APX_NF && reload_completed
   && ix86_lea_for_add_ok (insn, operands)) && 
#line 1161 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return NULL;
          return gen_split_132 (insn, operands);

        default:
          return NULL;
        }

    case PLUS:
      x6 = XEXP (x4, 0);
      switch (GET_CODE (x6))
        {
        case REG:
        case SUBREG:
          switch (pattern427 (x3))
            {
            case 0:
              if (!(
#line 7898 "../../gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)) && 
#line 7900 "../../gcc/config/i386/i386.md"
( reload_completed)))
                return NULL;
              return gen_split_150 (insn, operands);

            case 1:
              if (!(
#line 7898 "../../gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)) && 
#line 7900 "../../gcc/config/i386/i386.md"
( reload_completed)))
                return NULL;
              return gen_split_151 (insn, operands);

            default:
              return NULL;
            }

        case MULT:
          switch (pattern430 (x3))
            {
            case 0:
              if (!(
#line 7964 "../../gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)) && 
#line 7966 "../../gcc/config/i386/i386.md"
( reload_completed)))
                return NULL;
              return gen_split_156 (insn, operands);

            case 1:
              if (!(
#line 7964 "../../gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)) && 
#line 7966 "../../gcc/config/i386/i386.md"
( reload_completed)))
                return NULL;
              return gen_split_157 (insn, operands);

            default:
              return NULL;
            }

        case ASHIFT:
          switch (pattern578 (x3))
            {
            case 0:
              if (!(
#line 7990 "../../gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)) && 
#line 7992 "../../gcc/config/i386/i386.md"
( reload_completed)))
                return NULL;
              return gen_split_158 (insn, operands);

            case 1:
              if (!(
#line 7990 "../../gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)) && 
#line 7992 "../../gcc/config/i386/i386.md"
( reload_completed)))
                return NULL;
              return gen_split_159 (insn, operands);

            default:
              return NULL;
            }

        default:
          return NULL;
        }

    case MULT:
      switch (pattern396 (x3))
        {
        case 0:
          if (!(
#line 7920 "../../gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)) && 
#line 7922 "../../gcc/config/i386/i386.md"
( reload_completed)))
            return NULL;
          return gen_split_152 (insn, operands);

        case 1:
          if (!(
#line 7920 "../../gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)) && 
#line 7922 "../../gcc/config/i386/i386.md"
( reload_completed)))
            return NULL;
          return gen_split_153 (insn, operands);

        default:
          return NULL;
        }

    case ASHIFT:
      x7 = XEXP (x4, 1);
      operands[2] = x7;
      x6 = XEXP (x4, 0);
      switch (GET_CODE (x6))
        {
        case REG:
        case SUBREG:
          operands[1] = x6;
          x5 = XEXP (x3, 1);
          switch (GET_CODE (x5))
            {
            case CONST_INT:
            case CONST_WIDE_INT:
            case CONST_POLY_INT:
            case CONST_FIXED:
            case CONST_DOUBLE:
            case CONST_VECTOR:
            case CONST:
            case REG:
            case SUBREG:
            case LABEL_REF:
            case SYMBOL_REF:
            case HIGH:
              operands[3] = x5;
              switch (GET_MODE (operands[0]))
                {
                case E_QImode:
                  if (pattern1075 (x3, 
E_QImode) != 0
                      || !(
#line 7941 "../../gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)) && 
#line 7943 "../../gcc/config/i386/i386.md"
( reload_completed)))
                    return NULL;
                  return gen_split_154 (insn, operands);

                case E_HImode:
                  if (pattern1075 (x3, 
E_HImode) != 0
                      || !(
#line 7941 "../../gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)) && 
#line 7943 "../../gcc/config/i386/i386.md"
( reload_completed)))
                    return NULL;
                  return gen_split_155 (insn, operands);

                case E_DImode:
                  if (pattern605 (x3, 
E_DImode) != 0
                      || !((
#line 14137 "../../gcc/config/i386/i386.md"
(INTVAL (operands[2]) == 8 * BITS_PER_UNIT / 2
   && (DImode == DImode
       ? CONST_INT_P (operands[3])
	 && (UINTVAL (operands[3]) & ~GET_MODE_MASK (SImode)) == 0
       : CONST_INT_P (operands[3])
       ? INTVAL (operands[3]) >= 0
       : CONST_WIDE_INT_NUNITS (operands[3]) == 2
	 && CONST_WIDE_INT_ELT (operands[3], 1) == 0)
   && !(CONST_INT_P (operands[3])
	? ix86_endbr_immediate_operand (operands[3], VOIDmode)
	: ix86_endbr_immediate_operand (GEN_INT (CONST_WIDE_INT_ELT (operands[3],
								     0)),
					VOIDmode))) && 
#line 1195 "../../gcc/config/i386/i386.md"
(!TARGET_64BIT)) && 
#line 14151 "../../gcc/config/i386/i386.md"
( reload_completed)))
                    return NULL;
                  return gen_split_466 (insn, operands);

                case E_TImode:
                  if (pattern605 (x3, 
E_TImode) != 0
                      || !((
#line 14137 "../../gcc/config/i386/i386.md"
(INTVAL (operands[2]) == 16 * BITS_PER_UNIT / 2
   && (TImode == DImode
       ? CONST_INT_P (operands[3])
	 && (UINTVAL (operands[3]) & ~GET_MODE_MASK (SImode)) == 0
       : CONST_INT_P (operands[3])
       ? INTVAL (operands[3]) >= 0
       : CONST_WIDE_INT_NUNITS (operands[3]) == 2
	 && CONST_WIDE_INT_ELT (operands[3], 1) == 0)
   && !(CONST_INT_P (operands[3])
	? ix86_endbr_immediate_operand (operands[3], VOIDmode)
	: ix86_endbr_immediate_operand (GEN_INT (CONST_WIDE_INT_ELT (operands[3],
								     0)),
					VOIDmode))) && 
#line 1196 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 14151 "../../gcc/config/i386/i386.md"
( reload_completed)))
                    return NULL;
                  return gen_split_469 (insn, operands);

                default:
                  return NULL;
                }

            case ZERO_EXTEND:
              switch (pattern955 (x3))
                {
                case 0:
                  if (!((
#line 14060 "../../gcc/config/i386/i386.md"
(INTVAL (operands[2]) == 4 * BITS_PER_UNIT) && 
#line 1235 "../../gcc/config/i386/i386.md"
(!TARGET_64BIT)) && 
#line 14062 "../../gcc/config/i386/i386.md"
( reload_completed)))
                    return NULL;
                  return gen_split_430 (insn, operands);

                case 1:
                  if (!((
#line 14060 "../../gcc/config/i386/i386.md"
(INTVAL (operands[2]) == 8 * BITS_PER_UNIT) && 
#line 1236 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 14062 "../../gcc/config/i386/i386.md"
( reload_completed)))
                    return NULL;
                  return gen_split_433 (insn, operands);

                default:
                  return NULL;
                }

            default:
              return NULL;
            }

        case SIGN_EXTEND:
          switch (pattern715 (x3))
            {
            case 0:
              if (!((
#line 14096 "../../gcc/config/i386/i386.md"
(INTVAL (operands[2]) == 4 * BITS_PER_UNIT) && 
#line 1235 "../../gcc/config/i386/i386.md"
(!TARGET_64BIT)) && 
#line 14098 "../../gcc/config/i386/i386.md"
( reload_completed)))
                return NULL;
              return gen_split_442 (insn, operands);

            case 1:
              if (!((
#line 14096 "../../gcc/config/i386/i386.md"
(INTVAL (operands[2]) == 8 * BITS_PER_UNIT) && 
#line 1236 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 14098 "../../gcc/config/i386/i386.md"
( reload_completed)))
                return NULL;
              return gen_split_448 (insn, operands);

            case 2:
              if (!((
#line 14169 "../../gcc/config/i386/i386.md"
(INTVAL (operands[2]) == 4 * BITS_PER_UNIT
   && (DImode == DImode
       ? CONST_INT_P (operands[3])
	 && (UINTVAL (operands[3]) & ~GET_MODE_MASK (SImode)) == 0
       : CONST_INT_P (operands[3])
       ? INTVAL (operands[3]) >= 0
       : CONST_WIDE_INT_NUNITS (operands[3]) == 2
	 && CONST_WIDE_INT_ELT (operands[3], 1) == 0)
   && !(CONST_INT_P (operands[3])
	? ix86_endbr_immediate_operand (operands[3], VOIDmode)
	: ix86_endbr_immediate_operand (GEN_INT (CONST_WIDE_INT_ELT (operands[3],
								     0)),
					VOIDmode))) && 
#line 1235 "../../gcc/config/i386/i386.md"
(!TARGET_64BIT)) && 
#line 14183 "../../gcc/config/i386/i386.md"
( reload_completed)))
                return NULL;
              return gen_split_472 (insn, operands);

            case 3:
              if (!((
#line 14169 "../../gcc/config/i386/i386.md"
(INTVAL (operands[2]) == 8 * BITS_PER_UNIT
   && (TImode == DImode
       ? CONST_INT_P (operands[3])
	 && (UINTVAL (operands[3]) & ~GET_MODE_MASK (SImode)) == 0
       : CONST_INT_P (operands[3])
       ? INTVAL (operands[3]) >= 0
       : CONST_WIDE_INT_NUNITS (operands[3]) == 2
	 && CONST_WIDE_INT_ELT (operands[3], 1) == 0)
   && !(CONST_INT_P (operands[3])
	? ix86_endbr_immediate_operand (operands[3], VOIDmode)
	: ix86_endbr_immediate_operand (GEN_INT (CONST_WIDE_INT_ELT (operands[3],
								     0)),
					VOIDmode))) && 
#line 1236 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 14183 "../../gcc/config/i386/i386.md"
( reload_completed)))
                return NULL;
              return gen_split_478 (insn, operands);

            default:
              return NULL;
            }

        case ZERO_EXTEND:
          switch (pattern715 (x3))
            {
            case 0:
              if (!((
#line 14096 "../../gcc/config/i386/i386.md"
(INTVAL (operands[2]) == 4 * BITS_PER_UNIT) && 
#line 1235 "../../gcc/config/i386/i386.md"
(!TARGET_64BIT)) && 
#line 14098 "../../gcc/config/i386/i386.md"
( reload_completed)))
                return NULL;
              return gen_split_445 (insn, operands);

            case 1:
              if (!((
#line 14096 "../../gcc/config/i386/i386.md"
(INTVAL (operands[2]) == 8 * BITS_PER_UNIT) && 
#line 1236 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 14098 "../../gcc/config/i386/i386.md"
( reload_completed)))
                return NULL;
              return gen_split_451 (insn, operands);

            case 2:
              if (!((
#line 14169 "../../gcc/config/i386/i386.md"
(INTVAL (operands[2]) == 4 * BITS_PER_UNIT
   && (DImode == DImode
       ? CONST_INT_P (operands[3])
	 && (UINTVAL (operands[3]) & ~GET_MODE_MASK (SImode)) == 0
       : CONST_INT_P (operands[3])
       ? INTVAL (operands[3]) >= 0
       : CONST_WIDE_INT_NUNITS (operands[3]) == 2
	 && CONST_WIDE_INT_ELT (operands[3], 1) == 0)
   && !(CONST_INT_P (operands[3])
	? ix86_endbr_immediate_operand (operands[3], VOIDmode)
	: ix86_endbr_immediate_operand (GEN_INT (CONST_WIDE_INT_ELT (operands[3],
								     0)),
					VOIDmode))) && 
#line 1235 "../../gcc/config/i386/i386.md"
(!TARGET_64BIT)) && 
#line 14183 "../../gcc/config/i386/i386.md"
( reload_completed)))
                return NULL;
              return gen_split_475 (insn, operands);

            case 3:
              if (!((
#line 14169 "../../gcc/config/i386/i386.md"
(INTVAL (operands[2]) == 8 * BITS_PER_UNIT
   && (TImode == DImode
       ? CONST_INT_P (operands[3])
	 && (UINTVAL (operands[3]) & ~GET_MODE_MASK (SImode)) == 0
       : CONST_INT_P (operands[3])
       ? INTVAL (operands[3]) >= 0
       : CONST_WIDE_INT_NUNITS (operands[3]) == 2
	 && CONST_WIDE_INT_ELT (operands[3], 1) == 0)
   && !(CONST_INT_P (operands[3])
	? ix86_endbr_immediate_operand (operands[3], VOIDmode)
	: ix86_endbr_immediate_operand (GEN_INT (CONST_WIDE_INT_ELT (operands[3],
								     0)),
					VOIDmode))) && 
#line 1236 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 14183 "../../gcc/config/i386/i386.md"
( reload_completed)))
                return NULL;
              return gen_split_481 (insn, operands);

            default:
              return NULL;
            }

        default:
          return NULL;
        }

    case ZERO_EXTEND:
      switch (pattern401 (x3))
        {
        case 0:
          if (!((
#line 14077 "../../gcc/config/i386/i386.md"
(INTVAL (operands[3]) == 4 * BITS_PER_UNIT) && 
#line 1235 "../../gcc/config/i386/i386.md"
(!TARGET_64BIT)) && 
#line 14079 "../../gcc/config/i386/i386.md"
( reload_completed)))
            return NULL;
          return gen_split_436 (insn, operands);

        case 1:
          if (!((
#line 14077 "../../gcc/config/i386/i386.md"
(INTVAL (operands[3]) == 8 * BITS_PER_UNIT) && 
#line 1236 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 14079 "../../gcc/config/i386/i386.md"
( reload_completed)))
            return NULL;
          return gen_split_439 (insn, operands);

        case 2:
          if (!((
#line 14121 "../../gcc/config/i386/i386.md"
(INTVAL (operands[3]) == 4 * BITS_PER_UNIT) && 
#line 1235 "../../gcc/config/i386/i386.md"
(!TARGET_64BIT)) && 
#line 14123 "../../gcc/config/i386/i386.md"
( reload_completed)))
            return NULL;
          return gen_split_454 (insn, operands);

        case 3:
          if (!((
#line 14121 "../../gcc/config/i386/i386.md"
(INTVAL (operands[3]) == 8 * BITS_PER_UNIT) && 
#line 1236 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 14123 "../../gcc/config/i386/i386.md"
( reload_completed)))
            return NULL;
          return gen_split_460 (insn, operands);

        case 4:
          if (!((
#line 14121 "../../gcc/config/i386/i386.md"
(INTVAL (operands[3]) == 4 * BITS_PER_UNIT) && 
#line 1235 "../../gcc/config/i386/i386.md"
(!TARGET_64BIT)) && 
#line 14123 "../../gcc/config/i386/i386.md"
( reload_completed)))
            return NULL;
          return gen_split_457 (insn, operands);

        case 5:
          if (!((
#line 14121 "../../gcc/config/i386/i386.md"
(INTVAL (operands[3]) == 8 * BITS_PER_UNIT) && 
#line 1236 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 14123 "../../gcc/config/i386/i386.md"
( reload_completed)))
            return NULL;
          return gen_split_463 (insn, operands);

        case 6:
          if (!((
#line 14198 "../../gcc/config/i386/i386.md"
(DImode == DImode
   ? CONST_INT_P (operands[2])
     && (UINTVAL (operands[2]) & GET_MODE_MASK (SImode)) == 0
     && !ix86_endbr_immediate_operand (operands[2], VOIDmode)
   : CONST_WIDE_INT_P (operands[2])
     && CONST_WIDE_INT_NUNITS (operands[2]) == 2
     && CONST_WIDE_INT_ELT (operands[2], 0) == 0
     && !ix86_endbr_immediate_operand (GEN_INT (CONST_WIDE_INT_ELT (operands[2],
								    1)),
				       VOIDmode)) && 
#line 1235 "../../gcc/config/i386/i386.md"
(!TARGET_64BIT)) && 
#line 14209 "../../gcc/config/i386/i386.md"
( reload_completed)))
            return NULL;
          return gen_split_484 (insn, operands);

        case 7:
          if (!((
#line 14198 "../../gcc/config/i386/i386.md"
(TImode == DImode
   ? CONST_INT_P (operands[2])
     && (UINTVAL (operands[2]) & GET_MODE_MASK (SImode)) == 0
     && !ix86_endbr_immediate_operand (operands[2], VOIDmode)
   : CONST_WIDE_INT_P (operands[2])
     && CONST_WIDE_INT_NUNITS (operands[2]) == 2
     && CONST_WIDE_INT_ELT (operands[2], 0) == 0
     && !ix86_endbr_immediate_operand (GEN_INT (CONST_WIDE_INT_ELT (operands[2],
								    1)),
				       VOIDmode)) && 
#line 1236 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 14209 "../../gcc/config/i386/i386.md"
( reload_completed)))
            return NULL;
          return gen_split_487 (insn, operands);

        default:
          return NULL;
        }

    default:
      return NULL;
    }
}

 rtx_insn *
split_20 (rtx x1 ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12, x13;
  rtx_insn *res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 1);
  if (pattern227 (x2, 
E_CCmode, 
17) != 0)
    return NULL;
  x3 = XVECEXP (x1, 0, 0);
  x4 = XEXP (x3, 1);
  x5 = XEXP (x4, 0);
  switch (GET_CODE (x5))
    {
    case CONST_INT:
    case CONST_WIDE_INT:
    case CONST_POLY_INT:
    case CONST_FIXED:
    case CONST_DOUBLE:
    case CONST_VECTOR:
    case CONST:
    case REG:
    case SUBREG:
    case MEM:
    case LABEL_REF:
    case SYMBOL_REF:
    case HIGH:
      operands[1] = x5;
      switch (pattern1179 (x3))
        {
        case 0:
          if ((
#line 12741 "../../gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)) && 
#line 12745 "../../gcc/config/i386/i386.md"
( reload_completed
   && !(rtx_equal_p (operands[0], operands[1])
	|| rtx_equal_p (operands[0], operands[2])))))
            return gen_split_289 (insn, operands);
          break;

        case 1:
          if ((
#line 12741 "../../gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)) && 
#line 12745 "../../gcc/config/i386/i386.md"
( reload_completed
   && !(rtx_equal_p (operands[0], operands[1])
	|| rtx_equal_p (operands[0], operands[2])))))
            return gen_split_292 (insn, operands);
          break;

        case 2:
          if (nonimmediate_operand (operands[0], E_DImode)
              && nonimmediate_operand (operands[1], E_DImode))
            {
              if (x86_64_hilo_general_operand (operands[2], E_DImode)
                  && ((
#line 13527 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (XOR, DImode, operands, TARGET_APX_NDD)) && 
#line 1235 "../../gcc/config/i386/i386.md"
(!TARGET_64BIT)) && 
#line 13529 "../../gcc/config/i386/i386.md"
( reload_completed)))
                return gen_split_388 (insn, operands);
              if (const_int_operand (operands[2], E_DImode)
                  && (
#line 13655 "../../gcc/config/i386/i386.md"
(TARGET_64BIT && TARGET_USE_BT
   && ix86_binary_operator_ok (XOR, DImode, operands)
   && IN_RANGE (exact_log2 (INTVAL (operands[2])), 31, 63)) && 
#line 13659 "../../gcc/config/i386/i386.md"
( reload_completed)))
                return gen_split_395 (insn, operands);
            }
          if (const_int_operand (operands[2], E_DImode))
            {
              if (QIreg_operand (operands[0], E_DImode)
                  && register_operand (operands[1], E_DImode)
                  && (
#line 13952 "../../gcc/config/i386/i386.md"
(reload_completed
    && (!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun))
    && !(INTVAL (operands[2]) & ~(255 << 8))
    && !(TARGET_APX_NDD && REGNO (operands[0]) != REGNO (operands[1]))) && 
#line 1164 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return gen_split_423 (insn, operands);
              if (any_QIreg_operand (operands[0], E_DImode)
                  && general_operand (operands[1], E_DImode)
                  && (
#line 13990 "../../gcc/config/i386/i386.md"
(reload_completed
    && (!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun))
    && !(INTVAL (operands[2]) & ~255)
    && (INTVAL (operands[2]) & 128)
    && !(TARGET_APX_NDD
	 && !rtx_equal_p (operands[0], operands[1]))) && 
#line 1164 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return gen_split_429 (insn, operands);
            }
          break;

        case 3:
          if (((
#line 13527 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (XOR, TImode, operands, TARGET_APX_NDD)) && 
#line 1236 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 13529 "../../gcc/config/i386/i386.md"
( reload_completed)))
            return gen_split_390 (insn, operands);
          break;

        case 4:
          if (QIreg_operand (operands[0], E_HImode)
              && register_operand (operands[1], E_HImode)
              && 
#line 13952 "../../gcc/config/i386/i386.md"
(reload_completed
    && (!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun))
    && !(INTVAL (operands[2]) & ~(255 << 8))
    && !(TARGET_APX_NDD && REGNO (operands[0]) != REGNO (operands[1]))))
            return gen_split_419 (insn, operands);
          if (any_QIreg_operand (operands[0], E_HImode)
              && general_operand (operands[1], E_HImode)
              && 
#line 13990 "../../gcc/config/i386/i386.md"
(reload_completed
    && (!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun))
    && !(INTVAL (operands[2]) & ~255)
    && (INTVAL (operands[2]) & 128)
    && !(TARGET_APX_NDD
	 && !rtx_equal_p (operands[0], operands[1]))))
            return gen_split_425 (insn, operands);
          break;

        case 5:
          if (QIreg_operand (operands[0], E_SImode)
              && register_operand (operands[1], E_SImode)
              && 
#line 13952 "../../gcc/config/i386/i386.md"
(reload_completed
    && (!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun))
    && !(INTVAL (operands[2]) & ~(255 << 8))
    && !(TARGET_APX_NDD && REGNO (operands[0]) != REGNO (operands[1]))))
            return gen_split_421 (insn, operands);
          if (any_QIreg_operand (operands[0], E_SImode)
              && general_operand (operands[1], E_SImode)
              && 
#line 13990 "../../gcc/config/i386/i386.md"
(reload_completed
    && (!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun))
    && !(INTVAL (operands[2]) & ~255)
    && (INTVAL (operands[2]) & 128)
    && !(TARGET_APX_NDD
	 && !rtx_equal_p (operands[0], operands[1]))))
            return gen_split_427 (insn, operands);
          break;

        default:
          break;
        }
      if (GET_CODE (x5) != SUBREG
          || pattern1178 (x4) != 0)
        return NULL;
      x6 = XEXP (x5, 0);
      x7 = XEXP (x6, 0);
      operands[2] = x7;
      switch (pattern1680 (x3))
        {
        case 0:
          if ((
#line 12768 "../../gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)) && 
#line 12772 "../../gcc/config/i386/i386.md"
( reload_completed
   && !rtx_equal_p (operands[0], operands[1]))))
            return gen_split_295 (insn, operands);
          break;

        case 1:
          if ((
#line 12768 "../../gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)) && 
#line 12772 "../../gcc/config/i386/i386.md"
( reload_completed
   && !rtx_equal_p (operands[0], operands[1]))))
            return gen_split_298 (insn, operands);
          break;

        case 2:
          if (((
#line 12768 "../../gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)) && 
#line 1164 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 12772 "../../gcc/config/i386/i386.md"
( reload_completed
   && !rtx_equal_p (operands[0], operands[1]))))
            return gen_split_301 (insn, operands);
          break;

        default:
          break;
        }
      operands[1] = x7;
      switch (pattern1681 (x3))
        {
        case 0:
          if (!(
#line 12801 "../../gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)) && 
#line 12803 "../../gcc/config/i386/i386.md"
( reload_completed)))
            return NULL;
          return gen_split_304 (insn, operands);

        case 1:
          if (!(
#line 12801 "../../gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)) && 
#line 12803 "../../gcc/config/i386/i386.md"
( reload_completed)))
            return NULL;
          return gen_split_307 (insn, operands);

        case 2:
          if (!((
#line 12801 "../../gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)) && 
#line 1164 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 12803 "../../gcc/config/i386/i386.md"
( reload_completed)))
            return NULL;
          return gen_split_310 (insn, operands);

        case 3:
          if (!
#line 13044 "../../gcc/config/i386/i386.md"
( reload_completed))
            return NULL;
          return gen_split_324 (insn, operands);

        case 4:
          if (!
#line 13044 "../../gcc/config/i386/i386.md"
( reload_completed))
            return NULL;
          return gen_split_327 (insn, operands);

        case 5:
          if (!(
#line 1164 "../../gcc/config/i386/i386.md"
(TARGET_64BIT) && 
#line 13044 "../../gcc/config/i386/i386.md"
( reload_completed)))
            return NULL;
          return gen_split_330 (insn, operands);

        default:
          return NULL;
        }

    case XOR:
      x6 = XEXP (x5, 0);
      if (GET_CODE (x6) != IOR)
        return NULL;
      x8 = XEXP (x3, 0);
      operands[0] = x8;
      x7 = XEXP (x6, 0);
      operands[1] = x7;
      x9 = XEXP (x6, 1);
      operands[2] = x9;
      switch (GET_MODE (operands[0]))
        {
        case E_SImode:
          if (pattern1243 (x4, 
E_SImode) != 0)
            return NULL;
          x10 = XEXP (x4, 1);
          operands[3] = x10;
          if (nonimmediate_operand (operands[3], E_SImode))
            {
              if (nonimmediate_operand (operands[2], E_SImode))
                {
                  x11 = XEXP (x5, 1);
                  if (rtx_equal_p (x11, operands[1])
                      && 
#line 13436 "../../gcc/config/i386/i386.md"
(TARGET_BMI))
                    return gen_split_379 (insn, operands);
                }
              if (register_operand (operands[2], E_SImode))
                {
                  x11 = XEXP (x5, 1);
                  if (rtx_equal_p (x11, operands[2])
                      && 
#line 13455 "../../gcc/config/i386/i386.md"
(TARGET_BMI))
                    return gen_split_381 (insn, operands);
                }
            }
          x11 = XEXP (x5, 1);
          operands[3] = x11;
          if (!nonimmediate_operand (operands[3], E_SImode))
            return NULL;
          if (nonimmediate_operand (operands[2], E_SImode)
              && rtx_equal_p (x10, operands[1])
              && 
#line 13474 "../../gcc/config/i386/i386.md"
(TARGET_BMI))
            return gen_split_383 (insn, operands);
          if (!register_operand (operands[2], E_SImode)
              || !rtx_equal_p (x10, operands[2])
              || !
#line 13493 "../../gcc/config/i386/i386.md"
(TARGET_BMI))
            return NULL;
          return gen_split_385 (insn, operands);

        case E_DImode:
          if (pattern1243 (x4, 
E_DImode) != 0)
            return NULL;
          x10 = XEXP (x4, 1);
          operands[3] = x10;
          if (nonimmediate_operand (operands[3], E_DImode))
            {
              if (nonimmediate_operand (operands[2], E_DImode))
                {
                  x11 = XEXP (x5, 1);
                  if (rtx_equal_p (x11, operands[1])
                      && (
#line 13436 "../../gcc/config/i386/i386.md"
(TARGET_BMI) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                    return gen_split_380 (insn, operands);
                }
              if (register_operand (operands[2], E_DImode))
                {
                  x11 = XEXP (x5, 1);
                  if (rtx_equal_p (x11, operands[2])
                      && (
#line 13455 "../../gcc/config/i386/i386.md"
(TARGET_BMI) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                    return gen_split_382 (insn, operands);
                }
            }
          x11 = XEXP (x5, 1);
          operands[3] = x11;
          if (!nonimmediate_operand (operands[3], E_DImode))
            return NULL;
          if (nonimmediate_operand (operands[2], E_DImode)
              && rtx_equal_p (x10, operands[1])
              && (
#line 13474 "../../gcc/config/i386/i386.md"
(TARGET_BMI) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return gen_split_384 (insn, operands);
          if (!register_operand (operands[2], E_DImode)
              || !rtx_equal_p (x10, operands[2])
              || !(
#line 13493 "../../gcc/config/i386/i386.md"
(TARGET_BMI) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return NULL;
          return gen_split_386 (insn, operands);

        default:
          return NULL;
        }

    case AND:
      x6 = XEXP (x5, 0);
      if (GET_CODE (x6) != XOR)
        return NULL;
      switch (pattern1050 (x3))
        {
        case 0:
          if (!(
#line 13684 "../../gcc/config/i386/i386.md"
(TARGET_BMI && ix86_pre_reload_split ()) && 
#line 13686 "../../gcc/config/i386/i386.md"
( 1)))
            return NULL;
          return gen_split_396 (insn, operands);

        case 1:
          if (!(
#line 13684 "../../gcc/config/i386/i386.md"
(TARGET_BMI && ix86_pre_reload_split ()) && 
#line 13686 "../../gcc/config/i386/i386.md"
( 1)))
            return NULL;
          return gen_split_397 (insn, operands);

        case 2:
          if (!((
#line 13684 "../../gcc/config/i386/i386.md"
(TARGET_BMI && ix86_pre_reload_split ()) && 
#line 1164 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 13686 "../../gcc/config/i386/i386.md"
( 1)))
            return NULL;
          return gen_split_398 (insn, operands);

        default:
          return NULL;
        }

    case ASHIFT:
      switch (pattern1059 (x3, 
1))
        {
        case 0:
          if (!(
#line 18824 "../../gcc/config/i386/i386.md"
(TARGET_USE_BT
   && (INTVAL (operands[2]) & (GET_MODE_BITSIZE (SImode)-1))
      == GET_MODE_BITSIZE (SImode)-1
   && ix86_pre_reload_split ()) && 
#line 18829 "../../gcc/config/i386/i386.md"
( 1)))
            return NULL;
          return gen_split_797 (insn, operands);

        case 1:
          if (!((
#line 18824 "../../gcc/config/i386/i386.md"
(TARGET_USE_BT
   && (INTVAL (operands[2]) & (GET_MODE_BITSIZE (DImode)-1))
      == GET_MODE_BITSIZE (DImode)-1
   && ix86_pre_reload_split ()) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 18829 "../../gcc/config/i386/i386.md"
( 1)))
            return NULL;
          return gen_split_799 (insn, operands);

        case 2:
          if (!(
#line 18852 "../../gcc/config/i386/i386.md"
(TARGET_USE_BT
   && (INTVAL (operands[2]) & (GET_MODE_BITSIZE (SImode)-1))
      == GET_MODE_BITSIZE (SImode)-1
   && ix86_pre_reload_split ()) && 
#line 18857 "../../gcc/config/i386/i386.md"
( 1)))
            return NULL;
          return gen_split_801 (insn, operands);

        case 3:
          if (!((
#line 18852 "../../gcc/config/i386/i386.md"
(TARGET_USE_BT
   && (INTVAL (operands[2]) & (GET_MODE_BITSIZE (DImode)-1))
      == GET_MODE_BITSIZE (DImode)-1
   && ix86_pre_reload_split ()) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 18857 "../../gcc/config/i386/i386.md"
( 1)))
            return NULL;
          return gen_split_803 (insn, operands);

        default:
          return NULL;
        }

    case SIGN_EXTEND:
      if (GET_MODE (x5) != E_DImode)
        return NULL;
      x6 = XEXP (x5, 0);
      if (GET_CODE (x6) != MINUS
          || GET_MODE (x6) != E_SImode)
        return NULL;
      x7 = XEXP (x6, 0);
      if (x7 != const_int_rtx[MAX_SAVED_CONST_INT + 63])
        return NULL;
      x9 = XEXP (x6, 1);
      if (GET_CODE (x9) != SUBREG
          || maybe_ne (SUBREG_BYTE (x9), 0)
          || GET_MODE (x9) != E_SImode)
        return NULL;
      x12 = XEXP (x9, 0);
      if (GET_CODE (x12) != CLZ
          || GET_MODE (x12) != E_DImode)
        return NULL;
      x10 = XEXP (x4, 1);
      if (x10 != const_int_rtx[MAX_SAVED_CONST_INT + 63])
        return NULL;
      x8 = XEXP (x3, 0);
      operands[0] = x8;
      if (!register_operand (operands[0], E_DImode)
          || GET_MODE (x4) != E_DImode)
        return NULL;
      x13 = XEXP (x12, 0);
      operands[1] = x13;
      if (!nonimmediate_operand (operands[1], E_DImode)
          || !(
#line 21312 "../../gcc/config/i386/i386.md"
(!TARGET_LZCNT && TARGET_64BIT && ix86_pre_reload_split ()) && 
#line 21314 "../../gcc/config/i386/i386.md"
( 1)))
        return NULL;
      return gen_split_878 (insn, operands);

    default:
      return NULL;
    }
}

 rtx_insn *
split_29 (rtx x1 ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7;
  rtx_insn *res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 0);
  operands[0] = x3;
  x4 = XEXP (x2, 1);
  x5 = XEXP (x4, 0);
  operands[1] = x5;
  x6 = XVECEXP (x1, 0, 1);
  switch (GET_CODE (x6))
    {
    case CLOBBER:
      x7 = XEXP (x6, 0);
      switch (pattern694 (x7))
        {
        case 0:
          if (!register_operand (operands[0], E_DImode)
              || GET_MODE (x4) != E_DImode
              || !general_operand (operands[1], E_DImode))
            return NULL;
          if (((
#line 14600 "../../gcc/config/i386/i386.md"
(TARGET_CMOVE
   && ix86_pre_reload_split ()) && 
#line 1235 "../../gcc/config/i386/i386.md"
(!TARGET_64BIT)) && 
#line 14603 "../../gcc/config/i386/i386.md"
( 1)))
            return gen_split_497 (insn, operands);
          if (!((
#line 14687 "../../gcc/config/i386/i386.md"
(TARGET_CMOVE
   && (DImode != QImode || !TARGET_PARTIAL_REG_STALL)
   && ix86_pre_reload_split ()) && 
#line 1161 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 14691 "../../gcc/config/i386/i386.md"
( 1)))
            return NULL;
          return gen_split_504 (insn, operands);

        case 1:
          if (!register_operand (operands[0], E_TImode)
              || GET_MODE (x4) != E_TImode
              || !general_operand (operands[1], E_TImode)
              || !((
#line 14600 "../../gcc/config/i386/i386.md"
(TARGET_CMOVE
   && ix86_pre_reload_split ()) && 
#line 1236 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 14603 "../../gcc/config/i386/i386.md"
( 1)))
            return NULL;
          return gen_split_498 (insn, operands);

        case 2:
          if (!register_operand (operands[0], E_QImode)
              || GET_MODE (x4) != E_QImode
              || !general_operand (operands[1], E_QImode)
              || !(
#line 14687 "../../gcc/config/i386/i386.md"
(TARGET_CMOVE
   && (QImode != QImode || !TARGET_PARTIAL_REG_STALL)
   && ix86_pre_reload_split ()) && 
#line 14691 "../../gcc/config/i386/i386.md"
( 1)))
            return NULL;
          return gen_split_501 (insn, operands);

        case 3:
          if (!register_operand (operands[0], E_HImode)
              || GET_MODE (x4) != E_HImode
              || !general_operand (operands[1], E_HImode)
              || !(
#line 14687 "../../gcc/config/i386/i386.md"
(TARGET_CMOVE
   && (HImode != QImode || !TARGET_PARTIAL_REG_STALL)
   && ix86_pre_reload_split ()) && 
#line 14691 "../../gcc/config/i386/i386.md"
( 1)))
            return NULL;
          return gen_split_502 (insn, operands);

        case 4:
          if (!register_operand (operands[0], E_SImode)
              || GET_MODE (x4) != E_SImode
              || !general_operand (operands[1], E_SImode)
              || !(
#line 14687 "../../gcc/config/i386/i386.md"
(TARGET_CMOVE
   && (SImode != QImode || !TARGET_PARTIAL_REG_STALL)
   && ix86_pre_reload_split ()) && 
#line 14691 "../../gcc/config/i386/i386.md"
( 1)))
            return NULL;
          return gen_split_503 (insn, operands);

        case 5:
          if (GET_MODE (x4) != E_SFmode)
            return NULL;
          if (fp_register_operand (operands[0], E_SFmode)
              && fp_register_operand (operands[1], E_SFmode)
              && 
#line 14817 "../../gcc/config/i386/i386.md"
(TARGET_80387 && reload_completed))
            return gen_split_512 (insn, operands);
          if (!general_reg_operand (operands[0], E_SFmode)
              || !general_reg_operand (operands[1], E_SFmode)
              || !
#line 14824 "../../gcc/config/i386/i386.md"
(TARGET_80387 && reload_completed))
            return NULL;
          return gen_split_518 (insn, operands);

        case 6:
          if (GET_MODE (x4) != E_DFmode)
            return NULL;
          if (fp_register_operand (operands[0], E_DFmode)
              && fp_register_operand (operands[1], E_DFmode)
              && 
#line 14817 "../../gcc/config/i386/i386.md"
(TARGET_80387 && reload_completed))
            return gen_split_514 (insn, operands);
          if (!general_reg_operand (operands[0], E_DFmode)
              || !general_reg_operand (operands[1], E_DFmode)
              || !
#line 14824 "../../gcc/config/i386/i386.md"
(TARGET_80387 && reload_completed))
            return NULL;
          return gen_split_520 (insn, operands);

        case 7:
          if (GET_MODE (x4) != E_XFmode)
            return NULL;
          if (fp_register_operand (operands[0], E_XFmode)
              && fp_register_operand (operands[1], E_XFmode)
              && 
#line 14817 "../../gcc/config/i386/i386.md"
(TARGET_80387 && reload_completed))
            return gen_split_516 (insn, operands);
          if (!general_reg_operand (operands[0], E_XFmode)
              || !general_reg_operand (operands[1], E_XFmode)
              || !
#line 14824 "../../gcc/config/i386/i386.md"
(TARGET_80387 && reload_completed))
            return NULL;
          return gen_split_522 (insn, operands);

        default:
          return NULL;
        }

    case USE:
      if (pattern833 (x1) != 0
          || !(
#line 14748 "../../gcc/config/i386/i386.md"
(TARGET_SSE) && 
#line 14750 "../../gcc/config/i386/i386.md"
( reload_completed)))
        return NULL;
      return gen_split_509 (insn, operands);

    default:
      return NULL;
    }
}

 rtx_insn *
split_35 (rtx x1 ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12, x13, x14, x15, x16, x17;
  rtx_insn *res ATTRIBUTE_UNUSED;
  switch (XVECLEN (x1, 0))
    {
    case 2:
      return split_34 (x1, insn);

    case 3:
      x2 = XVECEXP (x1, 0, 0);
      if (GET_CODE (x2) != SET)
        return NULL;
      x3 = XVECEXP (x1, 0, 2);
      if (GET_CODE (x3) != CLOBBER)
        return NULL;
      x4 = XEXP (x2, 1);
      switch (GET_CODE (x4))
        {
        case SIGN_EXTEND:
          if (pattern240 (x1) != 0)
            return NULL;
          x5 = XEXP (x3, 0);
          operands[2] = x5;
          switch (GET_MODE (operands[0]))
            {
            case E_DImode:
              if (GET_MODE (x4) != E_DImode
                  || !register_operand (operands[1], E_SImode))
                return NULL;
              if (memory_operand (operands[0], E_DImode)
                  && register_operand (operands[2], E_SImode)
                  && (
#line 5003 "../../gcc/config/i386/i386.md"
(reload_completed) && 
#line 1235 "../../gcc/config/i386/i386.md"
(!TARGET_64BIT)))
                return gen_split_60 (insn, operands);
              if (!register_operand (operands[0], E_DImode)
                  || !scratch_operand (operands[2], E_SImode)
                  || !(
#line 5077 "../../gcc/config/i386/i386.md"
(reload_completed) && 
#line 1235 "../../gcc/config/i386/i386.md"
(!TARGET_64BIT)))
                return NULL;
              return gen_split_62 (insn, operands);

            case E_TImode:
              if (GET_MODE (x4) != E_TImode
                  || !register_operand (operands[1], E_DImode))
                return NULL;
              if (memory_operand (operands[0], E_TImode)
                  && register_operand (operands[2], E_DImode)
                  && (
#line 5003 "../../gcc/config/i386/i386.md"
(reload_completed) && 
#line 1236 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return gen_split_61 (insn, operands);
              if (!register_operand (operands[0], E_TImode)
                  || !scratch_operand (operands[2], E_DImode)
                  || !(
#line 5077 "../../gcc/config/i386/i386.md"
(reload_completed) && 
#line 1236 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return NULL;
              return gen_split_63 (insn, operands);

            default:
              return NULL;
            }

        case UNSIGNED_FLOAT:
          x6 = XVECEXP (x1, 0, 1);
          if (GET_CODE (x6) != CLOBBER)
            return NULL;
          switch (pattern573 (x1))
            {
            case 0:
              if (!(
#line 6297 "../../gcc/config/i386/i386.md"
(!TARGET_64BIT
   && TARGET_80387 && X87_ENABLE_FLOAT (SFmode, DImode)
   && TARGET_SSE2 && TARGET_INTER_UNIT_MOVES_TO_VEC) && 
#line 6301 "../../gcc/config/i386/i386.md"
( reload_completed)))
                return NULL;
              return gen_split_91 (insn, operands);

            case 1:
              if (!(
#line 6297 "../../gcc/config/i386/i386.md"
(!TARGET_64BIT
   && TARGET_80387 && X87_ENABLE_FLOAT (DFmode, DImode)
   && TARGET_SSE2 && TARGET_INTER_UNIT_MOVES_TO_VEC) && 
#line 6301 "../../gcc/config/i386/i386.md"
( reload_completed)))
                return NULL;
              return gen_split_92 (insn, operands);

            case 2:
              if (!(
#line 6297 "../../gcc/config/i386/i386.md"
(!TARGET_64BIT
   && TARGET_80387 && X87_ENABLE_FLOAT (XFmode, DImode)
   && TARGET_SSE2 && TARGET_INTER_UNIT_MOVES_TO_VEC) && 
#line 6301 "../../gcc/config/i386/i386.md"
( reload_completed)))
                return NULL;
              return gen_split_93 (insn, operands);

            default:
              return NULL;
            }

        case DIV:
          if (pattern586 (x1, 
MOD) != 0)
            return NULL;
          x7 = XEXP (x2, 0);
          operands[0] = x7;
          x8 = XEXP (x4, 0);
          operands[2] = x8;
          x9 = XEXP (x4, 1);
          operands[3] = x9;
          x6 = XVECEXP (x1, 0, 1);
          x10 = XEXP (x6, 0);
          operands[1] = x10;
          x11 = XEXP (x6, 1);
          x12 = XEXP (x11, 0);
          if (!rtx_equal_p (x12, operands[2]))
            return NULL;
          x13 = XEXP (x11, 1);
          if (!rtx_equal_p (x13, operands[3]))
            return NULL;
          switch (GET_CODE (operands[2]))
            {
            case REG:
            case SUBREG:
              switch (GET_MODE (operands[0]))
                {
                case E_SImode:
                  if (pattern387 (x1, 
E_SImode) != 0)
                    return NULL;
                  if (
#line 11380 "../../gcc/config/i386/i386.md"
(TARGET_USE_8BIT_IDIV
   && TARGET_QIMODE_MATH
   && can_create_pseudo_p ()
   && !optimize_insn_for_size_p ()))
                    return gen_split_240 (insn, operands);
                  if (!
#line 11604 "../../gcc/config/i386/i386.md"
(reload_completed))
                    return NULL;
                  return gen_split_257 (insn, operands);

                case E_DImode:
                  if (pattern387 (x1, 
E_DImode) != 0)
                    return NULL;
                  if ((
#line 11380 "../../gcc/config/i386/i386.md"
(TARGET_USE_8BIT_IDIV
   && TARGET_QIMODE_MATH
   && can_create_pseudo_p ()
   && !optimize_insn_for_size_p ()) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                    return gen_split_242 (insn, operands);
                  if (!(
#line 11604 "../../gcc/config/i386/i386.md"
(reload_completed) && 
#line 1192 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                    return NULL;
                  return gen_split_258 (insn, operands);

                case E_HImode:
                  if (pattern387 (x1, 
E_HImode) != 0
                      || !(
#line 11604 "../../gcc/config/i386/i386.md"
(reload_completed) && 
#line 1191 "../../gcc/config/i386/i386.md"
(TARGET_HIMODE_MATH)))
                    return NULL;
                  return gen_split_256 (insn, operands);

                default:
                  return NULL;
                }

            case CONST_INT:
              if (!const_int_operand (operands[2], E_SImode)
                  || pattern1496 (x1) != 0
                  || !(
#line 11907 "../../gcc/config/i386/i386.md"
(!optimize_function_for_size_p (cfun)) && 
#line 11909 "../../gcc/config/i386/i386.md"
( reload_completed)))
                return NULL;
              return gen_split_270 (insn, operands);

            default:
              return NULL;
            }

        case UDIV:
          if (pattern586 (x1, 
UMOD) != 0)
            return NULL;
          x7 = XEXP (x2, 0);
          operands[0] = x7;
          x8 = XEXP (x4, 0);
          operands[2] = x8;
          x9 = XEXP (x4, 1);
          operands[3] = x9;
          x6 = XVECEXP (x1, 0, 1);
          x10 = XEXP (x6, 0);
          operands[1] = x10;
          x11 = XEXP (x6, 1);
          x12 = XEXP (x11, 0);
          if (!rtx_equal_p (x12, operands[2]))
            return NULL;
          x13 = XEXP (x11, 1);
          if (!rtx_equal_p (x13, operands[3]))
            return NULL;
          switch (GET_CODE (operands[3]))
            {
            case REG:
            case SUBREG:
            case MEM:
              switch (GET_MODE (operands[0]))
                {
                case E_SImode:
                  if (pattern387 (x1, 
E_SImode) != 0)
                    return NULL;
                  if (
#line 11380 "../../gcc/config/i386/i386.md"
(TARGET_USE_8BIT_IDIV
   && TARGET_QIMODE_MATH
   && can_create_pseudo_p ()
   && !optimize_insn_for_size_p ()))
                    return gen_split_241 (insn, operands);
                  if (!
#line 11639 "../../gcc/config/i386/i386.md"
(reload_completed))
                    return NULL;
                  return gen_split_260 (insn, operands);

                case E_DImode:
                  if (pattern387 (x1, 
E_DImode) != 0)
                    return NULL;
                  if ((
#line 11380 "../../gcc/config/i386/i386.md"
(TARGET_USE_8BIT_IDIV
   && TARGET_QIMODE_MATH
   && can_create_pseudo_p ()
   && !optimize_insn_for_size_p ()) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                    return gen_split_243 (insn, operands);
                  if (!(
#line 11639 "../../gcc/config/i386/i386.md"
(reload_completed) && 
#line 1192 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                    return NULL;
                  return gen_split_261 (insn, operands);

                case E_HImode:
                  if (pattern387 (x1, 
E_HImode) != 0
                      || !(
#line 11639 "../../gcc/config/i386/i386.md"
(reload_completed) && 
#line 1191 "../../gcc/config/i386/i386.md"
(TARGET_HIMODE_MATH)))
                    return NULL;
                  return gen_split_259 (insn, operands);

                default:
                  return NULL;
                }

            case CONST_INT:
              switch (GET_MODE (operands[0]))
                {
                case E_SImode:
                  if (pattern1497 (x1, 
E_SImode) != 0
                      || !(
#line 11660 "../../gcc/config/i386/i386.md"
(IN_RANGE (exact_log2 (UINTVAL (operands[3])), 1, 31)) && 
#line 11662 "../../gcc/config/i386/i386.md"
( reload_completed)))
                    return NULL;
                  return gen_split_262 (insn, operands);

                case E_DImode:
                  if (pattern1497 (x1, 
E_DImode) != 0
                      || !((
#line 11660 "../../gcc/config/i386/i386.md"
(IN_RANGE (exact_log2 (UINTVAL (operands[3])), 1, 31)) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 11662 "../../gcc/config/i386/i386.md"
( reload_completed)))
                    return NULL;
                  return gen_split_263 (insn, operands);

                default:
                  return NULL;
                }

            default:
              return NULL;
            }

        case ZERO_EXTEND:
          if (GET_MODE (x4) != E_DImode)
            return NULL;
          x6 = XVECEXP (x1, 0, 1);
          if (GET_CODE (x6) != SET)
            return NULL;
          x5 = XEXP (x3, 0);
          if (GET_CODE (x5) != REG
              || REGNO (x5) != 17
              || GET_MODE (x5) != E_CCmode)
            return NULL;
          switch (pattern1055 (x1))
            {
            case 0:
              if (pattern1530 (x1, 
MOD) != 0)
                return NULL;
              if (
#line 11395 "../../gcc/config/i386/i386.md"
(TARGET_64BIT
   && TARGET_USE_8BIT_IDIV
   && TARGET_QIMODE_MATH
   && can_create_pseudo_p ()
   && !optimize_insn_for_size_p ()))
                return gen_split_244 (insn, operands);
              if (!(
#line 11684 "../../gcc/config/i386/i386.md"
(TARGET_64BIT) && 
#line 11686 "../../gcc/config/i386/i386.md"
( reload_completed)))
                return NULL;
              return gen_split_264 (insn, operands);

            case 1:
              x11 = XEXP (x6, 1);
              if (GET_CODE (x11) != UMOD)
                return NULL;
              x7 = XEXP (x2, 0);
              operands[0] = x7;
              x8 = XEXP (x4, 0);
              x14 = XEXP (x8, 0);
              operands[2] = x14;
              if (!register_operand (operands[2], E_SImode))
                return NULL;
              x15 = XEXP (x8, 1);
              operands[3] = x15;
              x10 = XEXP (x6, 0);
              operands[1] = x10;
              switch (pattern1619 (x11))
                {
                case 0:
                  if (
#line 11395 "../../gcc/config/i386/i386.md"
(TARGET_64BIT
   && TARGET_USE_8BIT_IDIV
   && TARGET_QIMODE_MATH
   && can_create_pseudo_p ()
   && !optimize_insn_for_size_p ()))
                    return gen_split_245 (insn, operands);
                  if (!(
#line 11719 "../../gcc/config/i386/i386.md"
(TARGET_64BIT) && 
#line 11721 "../../gcc/config/i386/i386.md"
( reload_completed)))
                    return NULL;
                  return gen_split_265 (insn, operands);

                case 1:
                  if (!(
#line 11741 "../../gcc/config/i386/i386.md"
(TARGET_64BIT
   && IN_RANGE (exact_log2 (UINTVAL (operands[3])), 1, 31)) && 
#line 11744 "../../gcc/config/i386/i386.md"
( reload_completed)))
                    return NULL;
                  return gen_split_266 (insn, operands);

                default:
                  return NULL;
                }

            case 2:
              if (pattern1531 (x1, 
DIV) != 0)
                return NULL;
              if (
#line 11411 "../../gcc/config/i386/i386.md"
(TARGET_64BIT
   && TARGET_USE_8BIT_IDIV
   && TARGET_QIMODE_MATH
   && can_create_pseudo_p ()
   && !optimize_insn_for_size_p ()))
                return gen_split_246 (insn, operands);
              if (!(
#line 11767 "../../gcc/config/i386/i386.md"
(TARGET_64BIT) && 
#line 11769 "../../gcc/config/i386/i386.md"
( reload_completed)))
                return NULL;
              return gen_split_267 (insn, operands);

            case 3:
              x11 = XEXP (x6, 1);
              if (GET_CODE (x11) != UDIV)
                return NULL;
              x7 = XEXP (x2, 0);
              operands[1] = x7;
              x8 = XEXP (x4, 0);
              x14 = XEXP (x8, 0);
              operands[2] = x14;
              if (!register_operand (operands[2], E_SImode))
                return NULL;
              x15 = XEXP (x8, 1);
              operands[3] = x15;
              x10 = XEXP (x6, 0);
              operands[0] = x10;
              switch (pattern1619 (x11))
                {
                case 0:
                  if (
#line 11411 "../../gcc/config/i386/i386.md"
(TARGET_64BIT
   && TARGET_USE_8BIT_IDIV
   && TARGET_QIMODE_MATH
   && can_create_pseudo_p ()
   && !optimize_insn_for_size_p ()))
                    return gen_split_247 (insn, operands);
                  if (!(
#line 11803 "../../gcc/config/i386/i386.md"
(TARGET_64BIT) && 
#line 11805 "../../gcc/config/i386/i386.md"
( reload_completed)))
                    return NULL;
                  return gen_split_268 (insn, operands);

                case 1:
                  if (!(
#line 11825 "../../gcc/config/i386/i386.md"
(TARGET_64BIT
   && IN_RANGE (exact_log2 (UINTVAL (operands[3])), 1, 31)) && 
#line 11828 "../../gcc/config/i386/i386.md"
( reload_completed)))
                    return NULL;
                  return gen_split_269 (insn, operands);

                default:
                  return NULL;
                }

            default:
              return NULL;
            }

        case ABS:
          switch (pattern587 (x1))
            {
            case 0:
              if (!(
#line 14834 "../../gcc/config/i386/i386.md"
(TARGET_AVX512FP16) && 
#line 14836 "../../gcc/config/i386/i386.md"
( reload_completed)))
                return NULL;
              return gen_split_524 (insn, operands);

            case 1:
              if (sse_reg_operand (operands[0], E_SFmode)
                  && sse_reg_operand (operands[1], E_SFmode)
                  && vector_operand (operands[2], E_V4SFmode)
                  && 
#line 14871 "../../gcc/config/i386/i386.md"
(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH
   && reload_completed))
                return gen_split_526 (insn, operands);
              if (fp_register_operand (operands[0], E_SFmode)
                  && fp_register_operand (operands[1], E_SFmode)
                  && 
#line 14891 "../../gcc/config/i386/i386.md"
(TARGET_80387 && reload_completed))
                return gen_split_530 (insn, operands);
              if (!general_reg_operand (operands[0], E_SFmode)
                  || !general_reg_operand (operands[1], E_SFmode)
                  || !
#line 14899 "../../gcc/config/i386/i386.md"
(TARGET_80387 && reload_completed))
                return NULL;
              return gen_split_534 (insn, operands);

            case 2:
              if (sse_reg_operand (operands[0], E_DFmode)
                  && sse_reg_operand (operands[1], E_DFmode)
                  && vector_operand (operands[2], E_V2DFmode)
                  && 
#line 14871 "../../gcc/config/i386/i386.md"
(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH
   && reload_completed))
                return gen_split_528 (insn, operands);
              if (fp_register_operand (operands[0], E_DFmode)
                  && fp_register_operand (operands[1], E_DFmode)
                  && 
#line 14891 "../../gcc/config/i386/i386.md"
(TARGET_80387 && reload_completed))
                return gen_split_532 (insn, operands);
              if (!general_reg_operand (operands[0], E_DFmode)
                  || !general_reg_operand (operands[1], E_DFmode)
                  || !
#line 14899 "../../gcc/config/i386/i386.md"
(TARGET_80387 && reload_completed))
                return NULL;
              return gen_split_536 (insn, operands);

            default:
              return NULL;
            }

        case NEG:
          switch (pattern587 (x1))
            {
            case 0:
              if (!(
#line 14834 "../../gcc/config/i386/i386.md"
(TARGET_AVX512FP16) && 
#line 14836 "../../gcc/config/i386/i386.md"
( reload_completed)))
                return NULL;
              return gen_split_525 (insn, operands);

            case 1:
              if (sse_reg_operand (operands[0], E_SFmode)
                  && sse_reg_operand (operands[1], E_SFmode)
                  && vector_operand (operands[2], E_V4SFmode)
                  && 
#line 14871 "../../gcc/config/i386/i386.md"
(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH
   && reload_completed))
                return gen_split_527 (insn, operands);
              if (fp_register_operand (operands[0], E_SFmode)
                  && fp_register_operand (operands[1], E_SFmode)
                  && 
#line 14891 "../../gcc/config/i386/i386.md"
(TARGET_80387 && reload_completed))
                return gen_split_531 (insn, operands);
              if (!general_reg_operand (operands[0], E_SFmode)
                  || !general_reg_operand (operands[1], E_SFmode)
                  || !
#line 14899 "../../gcc/config/i386/i386.md"
(TARGET_80387 && reload_completed))
                return NULL;
              return gen_split_535 (insn, operands);

            case 2:
              if (sse_reg_operand (operands[0], E_DFmode)
                  && sse_reg_operand (operands[1], E_DFmode)
                  && vector_operand (operands[2], E_V2DFmode)
                  && 
#line 14871 "../../gcc/config/i386/i386.md"
(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH
   && reload_completed))
                return gen_split_529 (insn, operands);
              if (fp_register_operand (operands[0], E_DFmode)
                  && fp_register_operand (operands[1], E_DFmode)
                  && 
#line 14891 "../../gcc/config/i386/i386.md"
(TARGET_80387 && reload_completed))
                return gen_split_533 (insn, operands);
              if (!general_reg_operand (operands[0], E_DFmode)
                  || !general_reg_operand (operands[1], E_DFmode)
                  || !
#line 14899 "../../gcc/config/i386/i386.md"
(TARGET_80387 && reload_completed))
                return NULL;
              return gen_split_537 (insn, operands);

            default:
              return NULL;
            }

        case ROTATE:
          switch (pattern588 (x1))
            {
            case 0:
              if (!(
#line 18357 "../../gcc/config/i386/i386.md"
(reload_completed) && 
#line 1235 "../../gcc/config/i386/i386.md"
(!TARGET_64BIT)))
                return NULL;
              return gen_split_774 (insn, operands);

            case 1:
              if (!(
#line 18357 "../../gcc/config/i386/i386.md"
(reload_completed) && 
#line 1236 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return NULL;
              return gen_split_775 (insn, operands);

            default:
              return NULL;
            }

        case ROTATERT:
          switch (pattern588 (x1))
            {
            case 0:
              if (!(
#line 18394 "../../gcc/config/i386/i386.md"
(reload_completed) && 
#line 1235 "../../gcc/config/i386/i386.md"
(!TARGET_64BIT)))
                return NULL;
              return gen_split_776 (insn, operands);

            case 1:
              if (!(
#line 18394 "../../gcc/config/i386/i386.md"
(reload_completed) && 
#line 1236 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return NULL;
              return gen_split_777 (insn, operands);

            default:
              return NULL;
            }

        case FFS:
          if (GET_MODE (x4) != E_SImode)
            return NULL;
          x6 = XVECEXP (x1, 0, 1);
          if (GET_CODE (x6) != CLOBBER
              || pattern711 (x1) != 0
              || !(
#line 20972 "../../gcc/config/i386/i386.md"
(!TARGET_CMOVE) && 
#line 20974 "../../gcc/config/i386/i386.md"
( reload_completed)))
            return NULL;
          return gen_split_870 (insn, operands);

        default:
          return NULL;
        }

    case 4:
      x2 = XVECEXP (x1, 0, 0);
      if (GET_CODE (x2) != SET)
        return NULL;
      x16 = XVECEXP (x1, 0, 3);
      if (GET_CODE (x16) != CLOBBER)
        return NULL;
      x4 = XEXP (x2, 1);
      switch (GET_CODE (x4))
        {
        case UNSIGNED_FIX:
          switch (pattern384 (x1))
            {
            case 0:
              if (!(
#line 5911 "../../gcc/config/i386/i386.md"
(!TARGET_64BIT && TARGET_SSE2 && TARGET_SSE_MATH
   && optimize_function_for_speed_p (cfun)) && 
#line 5914 "../../gcc/config/i386/i386.md"
( reload_completed)))
                return NULL;
              return gen_split_74 (insn, operands);

            case 1:
              if (!(
#line 5911 "../../gcc/config/i386/i386.md"
(!TARGET_64BIT && TARGET_SSE2 && TARGET_SSE_MATH
   && optimize_function_for_speed_p (cfun)) && 
#line 5914 "../../gcc/config/i386/i386.md"
( reload_completed)))
                return NULL;
              return gen_split_75 (insn, operands);

            default:
              return NULL;
            }

        case FLOAT:
          switch (pattern386 (x1))
            {
            case 0:
              if (!(
#line 6206 "../../gcc/config/i386/i386.md"
(!TARGET_64BIT && TARGET_INTER_UNIT_MOVES_TO_VEC
   && TARGET_80387 && X87_ENABLE_FLOAT (SFmode, DImode)
   && TARGET_SSE2 && optimize_function_for_speed_p (cfun)) && 
#line 6210 "../../gcc/config/i386/i386.md"
( reload_completed)))
                return NULL;
              return gen_split_84 (insn, operands);

            case 1:
              if (!(
#line 6206 "../../gcc/config/i386/i386.md"
(!TARGET_64BIT && TARGET_INTER_UNIT_MOVES_TO_VEC
   && TARGET_80387 && X87_ENABLE_FLOAT (DFmode, DImode)
   && TARGET_SSE2 && optimize_function_for_speed_p (cfun)) && 
#line 6210 "../../gcc/config/i386/i386.md"
( reload_completed)))
                return NULL;
              return gen_split_85 (insn, operands);

            case 2:
              if (!(
#line 6206 "../../gcc/config/i386/i386.md"
(!TARGET_64BIT && TARGET_INTER_UNIT_MOVES_TO_VEC
   && TARGET_80387 && X87_ENABLE_FLOAT (XFmode, DImode)
   && TARGET_SSE2 && optimize_function_for_speed_p (cfun)) && 
#line 6210 "../../gcc/config/i386/i386.md"
( reload_completed)))
                return NULL;
              return gen_split_86 (insn, operands);

            default:
              return NULL;
            }

        case DIV:
          switch (pattern590 (x1, 
MOD))
            {
            case 0:
              if (!
#line 11429 "../../gcc/config/i386/i386.md"
(reload_completed))
                return NULL;
              return gen_split_248 (insn, operands);

            case 1:
              if (!(
#line 11429 "../../gcc/config/i386/i386.md"
(reload_completed) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return NULL;
              return gen_split_249 (insn, operands);

            default:
              return NULL;
            }

        case UDIV:
          switch (pattern590 (x1, 
UMOD))
            {
            case 0:
              if (!
#line 11464 "../../gcc/config/i386/i386.md"
(reload_completed))
                return NULL;
              return gen_split_250 (insn, operands);

            case 1:
              if (!(
#line 11464 "../../gcc/config/i386/i386.md"
(reload_completed) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return NULL;
              return gen_split_251 (insn, operands);

            default:
              return NULL;
            }

        case ZERO_EXTEND:
          if (GET_MODE (x4) != E_DImode)
            return NULL;
          x6 = XVECEXP (x1, 0, 1);
          if (GET_CODE (x6) != SET)
            return NULL;
          x3 = XVECEXP (x1, 0, 2);
          if (pattern381 (x3, 
32) != 0)
            return NULL;
          x17 = XEXP (x16, 0);
          if (GET_CODE (x17) != REG
              || REGNO (x17) != 17
              || GET_MODE (x17) != E_CCmode)
            return NULL;
          x7 = XEXP (x2, 0);
          if (!register_operand (x7, E_DImode))
            return NULL;
          x8 = XEXP (x4, 0);
          if (GET_MODE (x8) != E_SImode)
            return NULL;
          x10 = XEXP (x6, 0);
          if (!register_operand (x10, E_SImode))
            return NULL;
          x11 = XEXP (x6, 1);
          if (GET_MODE (x11) != E_SImode)
            return NULL;
          switch (GET_CODE (x8))
            {
            case DIV:
              if (pattern1530 (x1, 
MOD) != 0
                  || !(
#line 11485 "../../gcc/config/i386/i386.md"
(TARGET_64BIT) && 
#line 11487 "../../gcc/config/i386/i386.md"
( reload_completed)))
                return NULL;
              return gen_split_252 (insn, operands);

            case UDIV:
              if (pattern1530 (x1, 
UMOD) != 0
                  || !(
#line 11521 "../../gcc/config/i386/i386.md"
(TARGET_64BIT) && 
#line 11523 "../../gcc/config/i386/i386.md"
( reload_completed)))
                return NULL;
              return gen_split_253 (insn, operands);

            case MOD:
              if (pattern1531 (x1, 
DIV) != 0
                  || !(
#line 11544 "../../gcc/config/i386/i386.md"
(TARGET_64BIT) && 
#line 11546 "../../gcc/config/i386/i386.md"
( reload_completed)))
                return NULL;
              return gen_split_254 (insn, operands);

            case UMOD:
              if (pattern1531 (x1, 
UDIV) != 0
                  || !(
#line 11581 "../../gcc/config/i386/i386.md"
(TARGET_64BIT) && 
#line 11583 "../../gcc/config/i386/i386.md"
( reload_completed)))
                return NULL;
              return gen_split_255 (insn, operands);

            default:
              return NULL;
            }

        case PLUS:
          if (pattern392 (x1) != 0)
            return NULL;
          return gen_split_906 (insn, operands);

        default:
          return NULL;
        }

    default:
      return NULL;
    }
}

 rtx_insn *
split_59 (rtx x1 ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7;
  rtx_insn *res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  switch (GET_CODE (x4))
    {
    case REG:
    case SUBREG:
    case MEM:
      if (!rtx_equal_p (x4, operands[1]))
        return NULL;
      x5 = XEXP (x2, 1);
      if (XVECLEN (x5, 0) != 2)
        return NULL;
      x6 = XVECEXP (x5, 0, 0);
      if (GET_CODE (x6) != CONST_INT
          || GET_MODE (x2) != E_V2DFmode
          || GET_MODE (x3) != E_V4DFmode)
        return NULL;
      if (XWINT (x6, 0) == 0L)
        {
          x7 = XVECEXP (x5, 0, 1);
          if (x7 == const_int_rtx[MAX_SAVED_CONST_INT + 2]
              && memory_operand (operands[0], E_V2DFmode)
              && register_operand (operands[1], E_V2DFmode)
              && 
#line 13579 "../../gcc/config/i386/sse.md"
(TARGET_SSE3 && reload_completed))
            return gen_split_1575 (insn, operands);
        }
      if (!register_operand (operands[0], E_V2DFmode)
          || !memory_operand (operands[1], E_V2DFmode))
        return NULL;
      operands[2] = x6;
      if (!const_0_to_1_operand (operands[2], E_SImode))
        return NULL;
      x7 = XVECEXP (x5, 0, 1);
      operands[3] = x7;
      if (!const_int_operand (operands[3], E_SImode)
          || !
#line 13597 "../../gcc/config/i386/sse.md"
(TARGET_SSE3 && INTVAL (operands[2]) + 2 == INTVAL (operands[3])))
        return NULL;
      return gen_split_1576 (insn, operands);

    case CONST_INT:
    case CONST_DOUBLE:
    case CONST_VECTOR:
      switch (pattern806 (x2))
        {
        case 0:
          if (!(
#line 24132 "../../gcc/config/i386/sse.md"
(TARGET_AVX2) && 
#line 24134 "../../gcc/config/i386/sse.md"
( reload_completed)))
            return NULL;
          return gen_split_3499 (insn, operands);

        case 1:
          if (!(
#line 24185 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512) && 
#line 24187 "../../gcc/config/i386/sse.md"
( reload_completed)))
            return NULL;
          return gen_split_3503 (insn, operands);

        case 2:
          if (!(
#line 24281 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1) && 
#line 24283 "../../gcc/config/i386/sse.md"
( reload_completed)))
            return NULL;
          return gen_split_3511 (insn, operands);

        case 3:
          if (!(
#line 24529 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512) && 
#line 24531 "../../gcc/config/i386/sse.md"
( reload_completed)))
            return NULL;
          return gen_split_3523 (insn, operands);

        case 4:
          if (!(
#line 24583 "../../gcc/config/i386/sse.md"
(TARGET_AVX2) && 
#line 24585 "../../gcc/config/i386/sse.md"
( reload_completed)))
            return NULL;
          return gen_split_3527 (insn, operands);

        case 5:
          if (!(
#line 24688 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1) && 
#line 24690 "../../gcc/config/i386/sse.md"
( reload_completed)))
            return NULL;
          return gen_split_3535 (insn, operands);

        case 6:
          if (pmovzx_parallel (operands[3], E_VOIDmode)
              && (
#line 25085 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512) && 
#line 25087 "../../gcc/config/i386/sse.md"
( reload_completed)))
            return gen_split_3558 (insn, operands);
          if (!movq_parallel (operands[3], E_VOIDmode)
              || !((
#line 29059 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_pre_reload_split ()) && 
#line 334 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)) && 
#line 29061 "../../gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_3765 (insn, operands);

        case 7:
          if (pmovzx_parallel (operands[3], E_VOIDmode)
              && (
#line 25137 "../../gcc/config/i386/sse.md"
(TARGET_AVX2) && 
#line 25139 "../../gcc/config/i386/sse.md"
( reload_completed)))
            return gen_split_3560 (insn, operands);
          if (!movq_parallel (operands[3], E_VOIDmode)
              || !((
#line 29059 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_pre_reload_split ()) && 
#line 334 "../../gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 29061 "../../gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_3766 (insn, operands);

        case 8:
          if (vector_operand (operands[1], E_V4SImode)
              && pmovzx_parallel (operands[3], E_VOIDmode)
              && (
#line 25222 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1) && 
#line 25224 "../../gcc/config/i386/sse.md"
( reload_completed)))
            return gen_split_3566 (insn, operands);
          if (!nonimmediate_operand (operands[1], E_V4SImode)
              || !movq_parallel (operands[3], E_VOIDmode)
              || !(
#line 29059 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_pre_reload_split ()) && 
#line 29061 "../../gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_3767 (insn, operands);

        case 9:
          if (!((
#line 29059 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_pre_reload_split ()) && 
#line 335 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)) && 
#line 29061 "../../gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_3768 (insn, operands);

        case 10:
          if (!((
#line 29059 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_pre_reload_split ()) && 
#line 335 "../../gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 29061 "../../gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_3769 (insn, operands);

        case 11:
          if (!(
#line 29059 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_pre_reload_split ()) && 
#line 29061 "../../gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_3770 (insn, operands);

        case 12:
          if (!((
#line 29059 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_pre_reload_split ()) && 
#line 336 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)) && 
#line 29061 "../../gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_3771 (insn, operands);

        case 13:
          if (!((
#line 29059 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_pre_reload_split ()) && 
#line 336 "../../gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 29061 "../../gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_3772 (insn, operands);

        case 14:
          if (!(
#line 29059 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_pre_reload_split ()) && 
#line 29061 "../../gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_3773 (insn, operands);

        case 15:
          if (!((
#line 29059 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_pre_reload_split ()) && 
#line 337 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)) && 
#line 29061 "../../gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_3774 (insn, operands);

        case 16:
          if (!((
#line 29059 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_pre_reload_split ()) && 
#line 337 "../../gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 29061 "../../gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_3775 (insn, operands);

        case 17:
          if (!(
#line 29059 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_pre_reload_split ()) && 
#line 29061 "../../gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_3776 (insn, operands);

        case 18:
          if (!((
#line 29059 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_pre_reload_split ()) && 
#line 338 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)) && 
#line 29061 "../../gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_3777 (insn, operands);

        case 19:
          if (!((
#line 29059 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_pre_reload_split ()) && 
#line 338 "../../gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 29061 "../../gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_3778 (insn, operands);

        case 20:
          if (!(
#line 29059 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_pre_reload_split ()) && 
#line 29061 "../../gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_3779 (insn, operands);

        case 21:
          if (!((
#line 29059 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_pre_reload_split ()) && 
#line 339 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)) && 
#line 29061 "../../gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_3780 (insn, operands);

        case 22:
          if (!((
#line 29059 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_pre_reload_split ()) && 
#line 339 "../../gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 29061 "../../gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_3781 (insn, operands);

        case 23:
          if (!((
#line 29059 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_pre_reload_split ()) && 
#line 339 "../../gcc/config/i386/sse.md"
(TARGET_SSE2)) && 
#line 29061 "../../gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_3782 (insn, operands);

        default:
          return NULL;
        }

    default:
      return NULL;
    }
}

 rtx_insn *
split_65 (rtx x1 ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4;
  rtx_insn *res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  switch (GET_CODE (x4))
    {
    case REG:
    case SUBREG:
    case MEM:
    case NOT:
      switch (pattern533 (x2))
        {
        case 0:
          if (!((
#line 13777 "../../gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 332 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)) && 
#line 13789 "../../gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1658 (insn, operands);

        case 1:
          if (!((
#line 13777 "../../gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 332 "../../gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 13789 "../../gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1685 (insn, operands);

        case 2:
          if (!(
#line 13777 "../../gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 13789 "../../gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1712 (insn, operands);

        case 3:
          if (!((
#line 13777 "../../gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 333 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)) && 
#line 13789 "../../gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1739 (insn, operands);

        case 4:
          if (!((
#line 13777 "../../gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 333 "../../gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 13789 "../../gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1766 (insn, operands);

        case 5:
          if (!(
#line 13777 "../../gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 13789 "../../gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1793 (insn, operands);

        case 6:
          if (!((
#line 13777 "../../gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 334 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)) && 
#line 13789 "../../gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1820 (insn, operands);

        case 7:
          if (!((
#line 13777 "../../gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 334 "../../gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 13789 "../../gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1847 (insn, operands);

        case 8:
          if (!(
#line 13777 "../../gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 13789 "../../gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1874 (insn, operands);

        case 9:
          if (!((
#line 13777 "../../gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 335 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)) && 
#line 13789 "../../gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1901 (insn, operands);

        case 10:
          if (!((
#line 13777 "../../gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 335 "../../gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 13789 "../../gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1928 (insn, operands);

        case 11:
          if (!(
#line 13777 "../../gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 13789 "../../gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1955 (insn, operands);

        case 12:
          if (!((
#line 13777 "../../gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 332 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)) && 
#line 13789 "../../gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1661 (insn, operands);

        case 13:
          if (!((
#line 13777 "../../gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 332 "../../gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 13789 "../../gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1688 (insn, operands);

        case 14:
          if (!(
#line 13777 "../../gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 13789 "../../gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1715 (insn, operands);

        case 15:
          if (!((
#line 13777 "../../gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 333 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)) && 
#line 13789 "../../gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1742 (insn, operands);

        case 16:
          if (!((
#line 13777 "../../gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 333 "../../gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 13789 "../../gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1769 (insn, operands);

        case 17:
          if (!(
#line 13777 "../../gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 13789 "../../gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1796 (insn, operands);

        case 18:
          if (!((
#line 13777 "../../gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 334 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)) && 
#line 13789 "../../gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1823 (insn, operands);

        case 19:
          if (!((
#line 13777 "../../gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 334 "../../gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 13789 "../../gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1850 (insn, operands);

        case 20:
          if (!(
#line 13777 "../../gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 13789 "../../gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1877 (insn, operands);

        case 21:
          if (!((
#line 13777 "../../gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 335 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)) && 
#line 13789 "../../gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1904 (insn, operands);

        case 22:
          if (!((
#line 13777 "../../gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 335 "../../gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 13789 "../../gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1931 (insn, operands);

        case 23:
          if (!(
#line 13777 "../../gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 13789 "../../gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1958 (insn, operands);

        case 24:
          if (!((
#line 13777 "../../gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 332 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)) && 
#line 13789 "../../gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1664 (insn, operands);

        case 25:
          if (!((
#line 13777 "../../gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 332 "../../gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 13789 "../../gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1691 (insn, operands);

        case 26:
          if (!(
#line 13777 "../../gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 13789 "../../gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1718 (insn, operands);

        case 27:
          if (!((
#line 13777 "../../gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 333 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)) && 
#line 13789 "../../gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1745 (insn, operands);

        case 28:
          if (!((
#line 13777 "../../gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 333 "../../gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 13789 "../../gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1772 (insn, operands);

        case 29:
          if (!(
#line 13777 "../../gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 13789 "../../gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1799 (insn, operands);

        case 30:
          if (!((
#line 13777 "../../gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 334 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)) && 
#line 13789 "../../gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1826 (insn, operands);

        case 31:
          if (!((
#line 13777 "../../gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 334 "../../gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 13789 "../../gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1853 (insn, operands);

        case 32:
          if (!(
#line 13777 "../../gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 13789 "../../gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1880 (insn, operands);

        case 33:
          if (!((
#line 13777 "../../gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 335 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)) && 
#line 13789 "../../gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1907 (insn, operands);

        case 34:
          if (!((
#line 13777 "../../gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 335 "../../gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 13789 "../../gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1934 (insn, operands);

        case 35:
          if (!(
#line 13777 "../../gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 13789 "../../gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1961 (insn, operands);

        case 36:
          if (!((
#line 13946 "../../gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 332 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)) && 
#line 13950 "../../gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_2948 (insn, operands);

        case 37:
          if (!((
#line 13946 "../../gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 332 "../../gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 13950 "../../gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_2957 (insn, operands);

        case 38:
          if (!(
#line 13946 "../../gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 13950 "../../gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_2966 (insn, operands);

        case 39:
          if (!((
#line 13946 "../../gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 333 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)) && 
#line 13950 "../../gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_2975 (insn, operands);

        case 40:
          if (!((
#line 13946 "../../gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 333 "../../gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 13950 "../../gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_2984 (insn, operands);

        case 41:
          if (!(
#line 13946 "../../gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 13950 "../../gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_2993 (insn, operands);

        case 42:
          if (!((
#line 13946 "../../gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 334 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)) && 
#line 13950 "../../gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_3002 (insn, operands);

        case 43:
          if (!((
#line 13946 "../../gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 334 "../../gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 13950 "../../gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_3011 (insn, operands);

        case 44:
          if (!(
#line 13946 "../../gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 13950 "../../gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_3020 (insn, operands);

        case 45:
          if (!((
#line 13946 "../../gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 335 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)) && 
#line 13950 "../../gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_3029 (insn, operands);

        case 46:
          if (!((
#line 13946 "../../gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 335 "../../gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 13950 "../../gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_3038 (insn, operands);

        case 47:
          if (!(
#line 13946 "../../gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 13950 "../../gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_3047 (insn, operands);

        default:
          return NULL;
        }

    case AND:
      switch (pattern535 (x2))
        {
        case 0:
          if (!((
#line 13862 "../../gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 332 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)) && 
#line 13874 "../../gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_2306 (insn, operands);

        case 1:
          if (!((
#line 13862 "../../gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 332 "../../gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 13874 "../../gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_2333 (insn, operands);

        case 2:
          if (!(
#line 13862 "../../gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 13874 "../../gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_2360 (insn, operands);

        case 3:
          if (!((
#line 13862 "../../gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 333 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)) && 
#line 13874 "../../gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_2387 (insn, operands);

        case 4:
          if (!((
#line 13862 "../../gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 333 "../../gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 13874 "../../gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_2414 (insn, operands);

        case 5:
          if (!(
#line 13862 "../../gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 13874 "../../gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_2441 (insn, operands);

        case 6:
          if (!((
#line 13862 "../../gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 334 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)) && 
#line 13874 "../../gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_2468 (insn, operands);

        case 7:
          if (!((
#line 13862 "../../gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 334 "../../gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 13874 "../../gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_2495 (insn, operands);

        case 8:
          if (!(
#line 13862 "../../gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 13874 "../../gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_2522 (insn, operands);

        case 9:
          if (!((
#line 13862 "../../gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 335 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)) && 
#line 13874 "../../gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_2549 (insn, operands);

        case 10:
          if (!((
#line 13862 "../../gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 335 "../../gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 13874 "../../gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_2576 (insn, operands);

        case 11:
          if (!(
#line 13862 "../../gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 13874 "../../gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_2603 (insn, operands);

        default:
          return NULL;
        }

    case IOR:
      switch (pattern535 (x2))
        {
        case 0:
          if (!((
#line 13862 "../../gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 332 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)) && 
#line 13874 "../../gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_2309 (insn, operands);

        case 1:
          if (!((
#line 13862 "../../gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 332 "../../gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 13874 "../../gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_2336 (insn, operands);

        case 2:
          if (!(
#line 13862 "../../gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 13874 "../../gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_2363 (insn, operands);

        case 3:
          if (!((
#line 13862 "../../gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 333 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)) && 
#line 13874 "../../gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_2390 (insn, operands);

        case 4:
          if (!((
#line 13862 "../../gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 333 "../../gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 13874 "../../gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_2417 (insn, operands);

        case 5:
          if (!(
#line 13862 "../../gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 13874 "../../gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_2444 (insn, operands);

        case 6:
          if (!((
#line 13862 "../../gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 334 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)) && 
#line 13874 "../../gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_2471 (insn, operands);

        case 7:
          if (!((
#line 13862 "../../gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 334 "../../gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 13874 "../../gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_2498 (insn, operands);

        case 8:
          if (!(
#line 13862 "../../gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 13874 "../../gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_2525 (insn, operands);

        case 9:
          if (!((
#line 13862 "../../gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 335 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)) && 
#line 13874 "../../gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_2552 (insn, operands);

        case 10:
          if (!((
#line 13862 "../../gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 335 "../../gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 13874 "../../gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_2579 (insn, operands);

        case 11:
          if (!(
#line 13862 "../../gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 13874 "../../gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_2606 (insn, operands);

        default:
          return NULL;
        }

    case XOR:
      switch (pattern535 (x2))
        {
        case 0:
          if (!((
#line 13862 "../../gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 332 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)) && 
#line 13874 "../../gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_2312 (insn, operands);

        case 1:
          if (!((
#line 13862 "../../gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 332 "../../gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 13874 "../../gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_2339 (insn, operands);

        case 2:
          if (!(
#line 13862 "../../gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 13874 "../../gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_2366 (insn, operands);

        case 3:
          if (!((
#line 13862 "../../gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 333 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)) && 
#line 13874 "../../gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_2393 (insn, operands);

        case 4:
          if (!((
#line 13862 "../../gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 333 "../../gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 13874 "../../gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_2420 (insn, operands);

        case 5:
          if (!(
#line 13862 "../../gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 13874 "../../gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_2447 (insn, operands);

        case 6:
          if (!((
#line 13862 "../../gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 334 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)) && 
#line 13874 "../../gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_2474 (insn, operands);

        case 7:
          if (!((
#line 13862 "../../gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 334 "../../gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 13874 "../../gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_2501 (insn, operands);

        case 8:
          if (!(
#line 13862 "../../gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 13874 "../../gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_2528 (insn, operands);

        case 9:
          if (!((
#line 13862 "../../gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 335 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)) && 
#line 13874 "../../gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_2555 (insn, operands);

        case 10:
          if (!((
#line 13862 "../../gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 335 "../../gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 13874 "../../gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_2582 (insn, operands);

        case 11:
          if (!(
#line 13862 "../../gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 13874 "../../gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_2609 (insn, operands);

        default:
          return NULL;
        }

    default:
      return NULL;
    }
}

 rtx_insn *
split_75 (rtx x1 ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4;
  rtx_insn *res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  switch (GET_CODE (x3))
    {
    case AND:
      x4 = XEXP (x3, 0);
      switch (GET_CODE (x4))
        {
        case REG:
        case SUBREG:
        case MEM:
        case NOT:
          switch (pattern537 (x2))
            {
            case 0:
              if (!((
#line 13777 "../../gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 336 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)) && 
#line 13789 "../../gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_1974 (insn, operands);

            case 1:
              if (!((
#line 13777 "../../gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 336 "../../gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 13789 "../../gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_2001 (insn, operands);

            case 2:
              if (!(
#line 13777 "../../gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 13789 "../../gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_2028 (insn, operands);

            case 3:
              if (!((
#line 13777 "../../gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 337 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)) && 
#line 13789 "../../gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_2055 (insn, operands);

            case 4:
              if (!((
#line 13777 "../../gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 337 "../../gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 13789 "../../gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_2082 (insn, operands);

            case 5:
              if (!(
#line 13777 "../../gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 13789 "../../gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_2109 (insn, operands);

            case 6:
              if (!((
#line 13777 "../../gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 338 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)) && 
#line 13789 "../../gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_2136 (insn, operands);

            case 7:
              if (!((
#line 13777 "../../gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 338 "../../gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 13789 "../../gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_2163 (insn, operands);

            case 8:
              if (!(
#line 13777 "../../gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 13789 "../../gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_2190 (insn, operands);

            case 9:
              if (!((
#line 13777 "../../gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 339 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)) && 
#line 13789 "../../gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_2217 (insn, operands);

            case 10:
              if (!((
#line 13777 "../../gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 339 "../../gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 13789 "../../gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_2244 (insn, operands);

            case 11:
              if (!((
#line 13777 "../../gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 339 "../../gcc/config/i386/sse.md"
(TARGET_SSE2)) && 
#line 13789 "../../gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_2271 (insn, operands);

            case 12:
              if (!((
#line 13777 "../../gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 336 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)) && 
#line 13789 "../../gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_1977 (insn, operands);

            case 13:
              if (!((
#line 13777 "../../gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 336 "../../gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 13789 "../../gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_2004 (insn, operands);

            case 14:
              if (!(
#line 13777 "../../gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 13789 "../../gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_2031 (insn, operands);

            case 15:
              if (!((
#line 13777 "../../gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 337 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)) && 
#line 13789 "../../gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_2058 (insn, operands);

            case 16:
              if (!((
#line 13777 "../../gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 337 "../../gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 13789 "../../gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_2085 (insn, operands);

            case 17:
              if (!(
#line 13777 "../../gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 13789 "../../gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_2112 (insn, operands);

            case 18:
              if (!((
#line 13777 "../../gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 338 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)) && 
#line 13789 "../../gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_2139 (insn, operands);

            case 19:
              if (!((
#line 13777 "../../gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 338 "../../gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 13789 "../../gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_2166 (insn, operands);

            case 20:
              if (!(
#line 13777 "../../gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 13789 "../../gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_2193 (insn, operands);

            case 21:
              if (!((
#line 13777 "../../gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 339 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)) && 
#line 13789 "../../gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_2220 (insn, operands);

            case 22:
              if (!((
#line 13777 "../../gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 339 "../../gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 13789 "../../gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_2247 (insn, operands);

            case 23:
              if (!((
#line 13777 "../../gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 339 "../../gcc/config/i386/sse.md"
(TARGET_SSE2)) && 
#line 13789 "../../gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_2274 (insn, operands);

            case 24:
              if (!((
#line 13777 "../../gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 336 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)) && 
#line 13789 "../../gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_1980 (insn, operands);

            case 25:
              if (!((
#line 13777 "../../gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 336 "../../gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 13789 "../../gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_2007 (insn, operands);

            case 26:
              if (!(
#line 13777 "../../gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 13789 "../../gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_2034 (insn, operands);

            case 27:
              if (!((
#line 13777 "../../gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 337 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)) && 
#line 13789 "../../gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_2061 (insn, operands);

            case 28:
              if (!((
#line 13777 "../../gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 337 "../../gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 13789 "../../gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_2088 (insn, operands);

            case 29:
              if (!(
#line 13777 "../../gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 13789 "../../gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_2115 (insn, operands);

            case 30:
              if (!((
#line 13777 "../../gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 338 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)) && 
#line 13789 "../../gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_2142 (insn, operands);

            case 31:
              if (!((
#line 13777 "../../gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 338 "../../gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 13789 "../../gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_2169 (insn, operands);

            case 32:
              if (!(
#line 13777 "../../gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 13789 "../../gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_2196 (insn, operands);

            case 33:
              if (!((
#line 13777 "../../gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 339 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)) && 
#line 13789 "../../gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_2223 (insn, operands);

            case 34:
              if (!((
#line 13777 "../../gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 339 "../../gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 13789 "../../gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_2250 (insn, operands);

            case 35:
              if (!((
#line 13777 "../../gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 339 "../../gcc/config/i386/sse.md"
(TARGET_SSE2)) && 
#line 13789 "../../gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_2277 (insn, operands);

            case 36:
              if (!((
#line 13946 "../../gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 336 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)) && 
#line 13950 "../../gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_3054 (insn, operands);

            case 37:
              if (!((
#line 13946 "../../gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 336 "../../gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 13950 "../../gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_3063 (insn, operands);

            case 38:
              if (!(
#line 13946 "../../gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 13950 "../../gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_3072 (insn, operands);

            case 39:
              if (!((
#line 13946 "../../gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 337 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)) && 
#line 13950 "../../gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_3081 (insn, operands);

            case 40:
              if (!((
#line 13946 "../../gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 337 "../../gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 13950 "../../gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_3090 (insn, operands);

            case 41:
              if (!(
#line 13946 "../../gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 13950 "../../gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_3099 (insn, operands);

            case 42:
              if (!((
#line 13946 "../../gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 338 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)) && 
#line 13950 "../../gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_3108 (insn, operands);

            case 43:
              if (!((
#line 13946 "../../gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 338 "../../gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 13950 "../../gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_3117 (insn, operands);

            case 44:
              if (!(
#line 13946 "../../gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 13950 "../../gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_3126 (insn, operands);

            case 45:
              if (!((
#line 13946 "../../gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 339 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)) && 
#line 13950 "../../gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_3135 (insn, operands);

            case 46:
              if (!((
#line 13946 "../../gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 339 "../../gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 13950 "../../gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_3144 (insn, operands);

            case 47:
              if (!((
#line 13946 "../../gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 339 "../../gcc/config/i386/sse.md"
(TARGET_SSE2)) && 
#line 13950 "../../gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_3153 (insn, operands);

            default:
              return NULL;
            }

        case AND:
          switch (pattern538 (x2))
            {
            case 0:
              if (!((
#line 13862 "../../gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 336 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)) && 
#line 13874 "../../gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_2622 (insn, operands);

            case 1:
              if (!((
#line 13862 "../../gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 336 "../../gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 13874 "../../gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_2649 (insn, operands);

            case 2:
              if (!(
#line 13862 "../../gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 13874 "../../gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_2676 (insn, operands);

            case 3:
              if (!((
#line 13862 "../../gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 337 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)) && 
#line 13874 "../../gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_2703 (insn, operands);

            case 4:
              if (!((
#line 13862 "../../gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 337 "../../gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 13874 "../../gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_2730 (insn, operands);

            case 5:
              if (!(
#line 13862 "../../gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 13874 "../../gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_2757 (insn, operands);

            case 6:
              if (!((
#line 13862 "../../gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 338 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)) && 
#line 13874 "../../gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_2784 (insn, operands);

            case 7:
              if (!((
#line 13862 "../../gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 338 "../../gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 13874 "../../gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_2811 (insn, operands);

            case 8:
              if (!(
#line 13862 "../../gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 13874 "../../gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_2838 (insn, operands);

            case 9:
              if (!((
#line 13862 "../../gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 339 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)) && 
#line 13874 "../../gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_2865 (insn, operands);

            case 10:
              if (!((
#line 13862 "../../gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 339 "../../gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 13874 "../../gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_2892 (insn, operands);

            case 11:
              if (!((
#line 13862 "../../gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 339 "../../gcc/config/i386/sse.md"
(TARGET_SSE2)) && 
#line 13874 "../../gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_2919 (insn, operands);

            default:
              return NULL;
            }

        case IOR:
          switch (pattern538 (x2))
            {
            case 0:
              if (!((
#line 13862 "../../gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 336 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)) && 
#line 13874 "../../gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_2625 (insn, operands);

            case 1:
              if (!((
#line 13862 "../../gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 336 "../../gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 13874 "../../gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_2652 (insn, operands);

            case 2:
              if (!(
#line 13862 "../../gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 13874 "../../gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_2679 (insn, operands);

            case 3:
              if (!((
#line 13862 "../../gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 337 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)) && 
#line 13874 "../../gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_2706 (insn, operands);

            case 4:
              if (!((
#line 13862 "../../gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 337 "../../gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 13874 "../../gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_2733 (insn, operands);

            case 5:
              if (!(
#line 13862 "../../gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 13874 "../../gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_2760 (insn, operands);

            case 6:
              if (!((
#line 13862 "../../gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 338 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)) && 
#line 13874 "../../gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_2787 (insn, operands);

            case 7:
              if (!((
#line 13862 "../../gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 338 "../../gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 13874 "../../gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_2814 (insn, operands);

            case 8:
              if (!(
#line 13862 "../../gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 13874 "../../gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_2841 (insn, operands);

            case 9:
              if (!((
#line 13862 "../../gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 339 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)) && 
#line 13874 "../../gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_2868 (insn, operands);

            case 10:
              if (!((
#line 13862 "../../gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 339 "../../gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 13874 "../../gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_2895 (insn, operands);

            case 11:
              if (!((
#line 13862 "../../gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 339 "../../gcc/config/i386/sse.md"
(TARGET_SSE2)) && 
#line 13874 "../../gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_2922 (insn, operands);

            default:
              return NULL;
            }

        case XOR:
          switch (pattern538 (x2))
            {
            case 0:
              if (!((
#line 13862 "../../gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 336 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)) && 
#line 13874 "../../gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_2628 (insn, operands);

            case 1:
              if (!((
#line 13862 "../../gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 336 "../../gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 13874 "../../gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_2655 (insn, operands);

            case 2:
              if (!(
#line 13862 "../../gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 13874 "../../gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_2682 (insn, operands);

            case 3:
              if (!((
#line 13862 "../../gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 337 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)) && 
#line 13874 "../../gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_2709 (insn, operands);

            case 4:
              if (!((
#line 13862 "../../gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 337 "../../gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 13874 "../../gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_2736 (insn, operands);

            case 5:
              if (!(
#line 13862 "../../gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 13874 "../../gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_2763 (insn, operands);

            case 6:
              if (!((
#line 13862 "../../gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 338 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)) && 
#line 13874 "../../gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_2790 (insn, operands);

            case 7:
              if (!((
#line 13862 "../../gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 338 "../../gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 13874 "../../gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_2817 (insn, operands);

            case 8:
              if (!(
#line 13862 "../../gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 13874 "../../gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_2844 (insn, operands);

            case 9:
              if (!((
#line 13862 "../../gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 339 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)) && 
#line 13874 "../../gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_2871 (insn, operands);

            case 10:
              if (!((
#line 13862 "../../gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 339 "../../gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 13874 "../../gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_2898 (insn, operands);

            case 11:
              if (!((
#line 13862 "../../gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 339 "../../gcc/config/i386/sse.md"
(TARGET_SSE2)) && 
#line 13874 "../../gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_2925 (insn, operands);

            default:
              return NULL;
            }

        default:
          return NULL;
        }

    case IOR:
      x4 = XEXP (x3, 0);
      switch (GET_CODE (x4))
        {
        case REG:
        case SUBREG:
        case MEM:
        case NOT:
          switch (pattern537 (x2))
            {
            case 0:
              if (!((
#line 13777 "../../gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 336 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)) && 
#line 13789 "../../gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_1983 (insn, operands);

            case 1:
              if (!((
#line 13777 "../../gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 336 "../../gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 13789 "../../gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_2010 (insn, operands);

            case 2:
              if (!(
#line 13777 "../../gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 13789 "../../gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_2037 (insn, operands);

            case 3:
              if (!((
#line 13777 "../../gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 337 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)) && 
#line 13789 "../../gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_2064 (insn, operands);

            case 4:
              if (!((
#line 13777 "../../gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 337 "../../gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 13789 "../../gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_2091 (insn, operands);

            case 5:
              if (!(
#line 13777 "../../gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 13789 "../../gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_2118 (insn, operands);

            case 6:
              if (!((
#line 13777 "../../gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 338 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)) && 
#line 13789 "../../gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_2145 (insn, operands);

            case 7:
              if (!((
#line 13777 "../../gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 338 "../../gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 13789 "../../gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_2172 (insn, operands);

            case 8:
              if (!(
#line 13777 "../../gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 13789 "../../gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_2199 (insn, operands);

            case 9:
              if (!((
#line 13777 "../../gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 339 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)) && 
#line 13789 "../../gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_2226 (insn, operands);

            case 10:
              if (!((
#line 13777 "../../gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 339 "../../gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 13789 "../../gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_2253 (insn, operands);

            case 11:
              if (!((
#line 13777 "../../gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 339 "../../gcc/config/i386/sse.md"
(TARGET_SSE2)) && 
#line 13789 "../../gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_2280 (insn, operands);

            case 12:
              if (!((
#line 13777 "../../gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 336 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)) && 
#line 13789 "../../gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_1986 (insn, operands);

            case 13:
              if (!((
#line 13777 "../../gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 336 "../../gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 13789 "../../gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_2013 (insn, operands);

            case 14:
              if (!(
#line 13777 "../../gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 13789 "../../gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_2040 (insn, operands);

            case 15:
              if (!((
#line 13777 "../../gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 337 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)) && 
#line 13789 "../../gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_2067 (insn, operands);

            case 16:
              if (!((
#line 13777 "../../gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 337 "../../gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 13789 "../../gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_2094 (insn, operands);

            case 17:
              if (!(
#line 13777 "../../gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 13789 "../../gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_2121 (insn, operands);

            case 18:
              if (!((
#line 13777 "../../gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 338 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)) && 
#line 13789 "../../gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_2148 (insn, operands);

            case 19:
              if (!((
#line 13777 "../../gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 338 "../../gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 13789 "../../gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_2175 (insn, operands);

            case 20:
              if (!(
#line 13777 "../../gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 13789 "../../gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_2202 (insn, operands);

            case 21:
              if (!((
#line 13777 "../../gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 339 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)) && 
#line 13789 "../../gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_2229 (insn, operands);

            case 22:
              if (!((
#line 13777 "../../gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 339 "../../gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 13789 "../../gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_2256 (insn, operands);

            case 23:
              if (!((
#line 13777 "../../gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 339 "../../gcc/config/i386/sse.md"
(TARGET_SSE2)) && 
#line 13789 "../../gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_2283 (insn, operands);

            case 24:
              if (!((
#line 13777 "../../gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 336 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)) && 
#line 13789 "../../gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_1989 (insn, operands);

            case 25:
              if (!((
#line 13777 "../../gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 336 "../../gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 13789 "../../gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_2016 (insn, operands);

            case 26:
              if (!(
#line 13777 "../../gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 13789 "../../gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_2043 (insn, operands);

            case 27:
              if (!((
#line 13777 "../../gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 337 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)) && 
#line 13789 "../../gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_2070 (insn, operands);

            case 28:
              if (!((
#line 13777 "../../gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 337 "../../gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 13789 "../../gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_2097 (insn, operands);

            case 29:
              if (!(
#line 13777 "../../gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 13789 "../../gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_2124 (insn, operands);

            case 30:
              if (!((
#line 13777 "../../gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 338 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)) && 
#line 13789 "../../gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_2151 (insn, operands);

            case 31:
              if (!((
#line 13777 "../../gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 338 "../../gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 13789 "../../gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_2178 (insn, operands);

            case 32:
              if (!(
#line 13777 "../../gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 13789 "../../gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_2205 (insn, operands);

            case 33:
              if (!((
#line 13777 "../../gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 339 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)) && 
#line 13789 "../../gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_2232 (insn, operands);

            case 34:
              if (!((
#line 13777 "../../gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 339 "../../gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 13789 "../../gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_2259 (insn, operands);

            case 35:
              if (!((
#line 13777 "../../gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 339 "../../gcc/config/i386/sse.md"
(TARGET_SSE2)) && 
#line 13789 "../../gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_2286 (insn, operands);

            case 36:
              if (!((
#line 13946 "../../gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 336 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)) && 
#line 13950 "../../gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_3057 (insn, operands);

            case 37:
              if (!((
#line 13946 "../../gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 336 "../../gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 13950 "../../gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_3066 (insn, operands);

            case 38:
              if (!(
#line 13946 "../../gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 13950 "../../gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_3075 (insn, operands);

            case 39:
              if (!((
#line 13946 "../../gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 337 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)) && 
#line 13950 "../../gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_3084 (insn, operands);

            case 40:
              if (!((
#line 13946 "../../gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 337 "../../gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 13950 "../../gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_3093 (insn, operands);

            case 41:
              if (!(
#line 13946 "../../gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 13950 "../../gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_3102 (insn, operands);

            case 42:
              if (!((
#line 13946 "../../gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 338 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)) && 
#line 13950 "../../gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_3111 (insn, operands);

            case 43:
              if (!((
#line 13946 "../../gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 338 "../../gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 13950 "../../gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_3120 (insn, operands);

            case 44:
              if (!(
#line 13946 "../../gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 13950 "../../gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_3129 (insn, operands);

            case 45:
              if (!((
#line 13946 "../../gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 339 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)) && 
#line 13950 "../../gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_3138 (insn, operands);

            case 46:
              if (!((
#line 13946 "../../gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 339 "../../gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 13950 "../../gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_3147 (insn, operands);

            case 47:
              if (!((
#line 13946 "../../gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 339 "../../gcc/config/i386/sse.md"
(TARGET_SSE2)) && 
#line 13950 "../../gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_3156 (insn, operands);

            default:
              return NULL;
            }

        case AND:
          switch (pattern538 (x2))
            {
            case 0:
              if (!((
#line 13862 "../../gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 336 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)) && 
#line 13874 "../../gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_2631 (insn, operands);

            case 1:
              if (!((
#line 13862 "../../gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 336 "../../gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 13874 "../../gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_2658 (insn, operands);

            case 2:
              if (!(
#line 13862 "../../gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 13874 "../../gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_2685 (insn, operands);

            case 3:
              if (!((
#line 13862 "../../gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 337 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)) && 
#line 13874 "../../gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_2712 (insn, operands);

            case 4:
              if (!((
#line 13862 "../../gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 337 "../../gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 13874 "../../gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_2739 (insn, operands);

            case 5:
              if (!(
#line 13862 "../../gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 13874 "../../gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_2766 (insn, operands);

            case 6:
              if (!((
#line 13862 "../../gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 338 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)) && 
#line 13874 "../../gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_2793 (insn, operands);

            case 7:
              if (!((
#line 13862 "../../gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 338 "../../gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 13874 "../../gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_2820 (insn, operands);

            case 8:
              if (!(
#line 13862 "../../gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 13874 "../../gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_2847 (insn, operands);

            case 9:
              if (!((
#line 13862 "../../gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 339 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)) && 
#line 13874 "../../gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_2874 (insn, operands);

            case 10:
              if (!((
#line 13862 "../../gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 339 "../../gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 13874 "../../gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_2901 (insn, operands);

            case 11:
              if (!((
#line 13862 "../../gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 339 "../../gcc/config/i386/sse.md"
(TARGET_SSE2)) && 
#line 13874 "../../gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_2928 (insn, operands);

            default:
              return NULL;
            }

        case IOR:
          switch (pattern538 (x2))
            {
            case 0:
              if (!((
#line 13862 "../../gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 336 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)) && 
#line 13874 "../../gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_2634 (insn, operands);

            case 1:
              if (!((
#line 13862 "../../gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 336 "../../gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 13874 "../../gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_2661 (insn, operands);

            case 2:
              if (!(
#line 13862 "../../gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 13874 "../../gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_2688 (insn, operands);

            case 3:
              if (!((
#line 13862 "../../gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 337 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)) && 
#line 13874 "../../gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_2715 (insn, operands);

            case 4:
              if (!((
#line 13862 "../../gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 337 "../../gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 13874 "../../gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_2742 (insn, operands);

            case 5:
              if (!(
#line 13862 "../../gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 13874 "../../gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_2769 (insn, operands);

            case 6:
              if (!((
#line 13862 "../../gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 338 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)) && 
#line 13874 "../../gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_2796 (insn, operands);

            case 7:
              if (!((
#line 13862 "../../gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 338 "../../gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 13874 "../../gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_2823 (insn, operands);

            case 8:
              if (!(
#line 13862 "../../gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 13874 "../../gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_2850 (insn, operands);

            case 9:
              if (!((
#line 13862 "../../gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 339 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)) && 
#line 13874 "../../gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_2877 (insn, operands);

            case 10:
              if (!((
#line 13862 "../../gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 339 "../../gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 13874 "../../gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_2904 (insn, operands);

            case 11:
              if (!((
#line 13862 "../../gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 339 "../../gcc/config/i386/sse.md"
(TARGET_SSE2)) && 
#line 13874 "../../gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_2931 (insn, operands);

            default:
              return NULL;
            }

        case XOR:
          switch (pattern538 (x2))
            {
            case 0:
              if (!((
#line 13862 "../../gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 336 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)) && 
#line 13874 "../../gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_2637 (insn, operands);

            case 1:
              if (!((
#line 13862 "../../gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 336 "../../gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 13874 "../../gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_2664 (insn, operands);

            case 2:
              if (!(
#line 13862 "../../gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 13874 "../../gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_2691 (insn, operands);

            case 3:
              if (!((
#line 13862 "../../gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 337 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)) && 
#line 13874 "../../gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_2718 (insn, operands);

            case 4:
              if (!((
#line 13862 "../../gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 337 "../../gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 13874 "../../gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_2745 (insn, operands);

            case 5:
              if (!(
#line 13862 "../../gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 13874 "../../gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_2772 (insn, operands);

            case 6:
              if (!((
#line 13862 "../../gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 338 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)) && 
#line 13874 "../../gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_2799 (insn, operands);

            case 7:
              if (!((
#line 13862 "../../gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 338 "../../gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 13874 "../../gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_2826 (insn, operands);

            case 8:
              if (!(
#line 13862 "../../gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 13874 "../../gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_2853 (insn, operands);

            case 9:
              if (!((
#line 13862 "../../gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 339 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)) && 
#line 13874 "../../gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_2880 (insn, operands);

            case 10:
              if (!((
#line 13862 "../../gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 339 "../../gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 13874 "../../gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_2907 (insn, operands);

            case 11:
              if (!((
#line 13862 "../../gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 339 "../../gcc/config/i386/sse.md"
(TARGET_SSE2)) && 
#line 13874 "../../gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_2934 (insn, operands);

            default:
              return NULL;
            }

        default:
          return NULL;
        }

    case XOR:
      return split_71 (x1, insn);

    default:
      return NULL;
    }
}
