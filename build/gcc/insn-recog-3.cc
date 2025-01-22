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
pattern2 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  switch (GET_MODE (operands[0]))
    {
    case E_QImode:
      if (!nonimmediate_operand (operands[0], E_QImode)
          || GET_MODE (x1) != E_QImode
          || !nonimmediate_operand (operands[1], E_QImode))
        return -1;
      return 0;

    case E_HImode:
      if (!nonimmediate_operand (operands[0], E_HImode)
          || GET_MODE (x1) != E_HImode
          || !nonimmediate_operand (operands[1], E_HImode))
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern15 (rtx x1, int *pnum_clobbers)
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
    case E_SImode:
      return pattern14 (x3, 
E_SImode); /* [-1, 0] */

    case E_DImode:
      if (pattern14 (x3, 
E_DImode) != 0)
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern24 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  operands[0] = x2;
  x3 = XEXP (x1, 1);
  x4 = XEXP (x3, 0);
  switch (GET_CODE (x4))
    {
    case VEC_SELECT:
      x5 = XEXP (x4, 1);
      if (GET_CODE (x5) != PARALLEL
          || XVECLEN (x5, 0) != 1)
        return -1;
      x6 = XVECEXP (x5, 0, 0);
      if (x6 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
        return -1;
      x7 = XEXP (x4, 0);
      operands[1] = x7;
      switch (GET_MODE (operands[0]))
        {
        case E_SImode:
          return pattern22 (x3, 
E_SImode); /* [-1, 2] */

        case E_DImode:
          res = pattern22 (x3, 
E_DImode);
          if (res >= 0)
            return res + 3; /* [3, 5] */
          return -1;

        default:
          return -1;
        }

    case SUBREG:
    case MEM:
      operands[1] = x4;
      if (!memory_operand (operands[1], E_HFmode))
        return -1;
      res = pattern23 (x3);
      if (res >= 0)
        return res + 6; /* [6, 7] */
      return -1;

    default:
      return -1;
    }
}

int
pattern37 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  operands[3] = x2;
  if (!const_int_operand (operands[3], E_QImode))
    return -1;
  x3 = XEXP (x1, 0);
  switch (GET_CODE (x3))
    {
    case REG:
    case SUBREG:
      operands[2] = x3;
      if (!register_operand (operands[2], i1))
        return -1;
      return 0;

    case SIGN_EXTEND:
      if (GET_MODE (x3) != i1)
        return -1;
      x4 = XEXP (x3, 0);
      operands[2] = x4;
      if (!nonimmediate_operand (operands[2], i2))
        return -1;
      return 1;

    case ZERO_EXTEND:
      if (GET_MODE (x3) != i1)
        return -1;
      x4 = XEXP (x3, 0);
      operands[2] = x4;
      if (!nonimmediate_operand (operands[2], i2))
        return -1;
      return 2;

    default:
      return -1;
    }
}

int
pattern40 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  operands[1] = x3;
  x4 = XEXP (x1, 0);
  switch (GET_CODE (x4))
    {
    case REG:
    case SUBREG:
    case MEM:
      operands[0] = x4;
      return 0;

    case STRICT_LOW_PART:
      x5 = XEXP (x4, 0);
      operands[0] = x5;
      res = pattern39 (x2);
      if (res >= 0)
        return res + 1; /* [1, 2] */
      return -1;

    default:
      return -1;
    }
}

int
pattern45 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  operands[1] = x2;
  x3 = XEXP (x1, 1);
  operands[2] = x3;
  switch (GET_MODE (operands[0]))
    {
    case E_V8QImode:
      return pattern8 (x1, 
E_V8QImode); /* [-1, 0] */

    case E_V4HImode:
      if (pattern8 (x1, 
E_V4HImode) != 0)
        return -1;
      return 1;

    case E_V4QImode:
      if (pattern7 (x1, 
E_V4QImode) != 0)
        return -1;
      return 2;

    case E_V2QImode:
      if (pattern7 (x1, 
E_V2QImode) != 0)
        return -1;
      return 3;

    case E_V2HImode:
      if (pattern7 (x1, 
E_V2HImode) != 0)
        return -1;
      return 4;

    default:
      return -1;
    }
}

int
pattern53 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12, x13, x14, x15, x16, x17;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) != E_V4HImode)
    return -1;
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) != VEC_SELECT
      || GET_MODE (x3) != E_V4HImode)
    return -1;
  x4 = XEXP (x3, 0);
  if (GET_CODE (x4) != VEC_CONCAT
      || GET_MODE (x4) != E_V8HImode)
    return -1;
  x5 = XEXP (x3, 1);
  if (GET_CODE (x5) != PARALLEL
      || XVECLEN (x5, 0) != 4)
    return -1;
  x6 = XVECEXP (x5, 0, 0);
  if (x6 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
    return -1;
  x7 = XVECEXP (x5, 0, 1);
  if (x7 != const_int_rtx[MAX_SAVED_CONST_INT + 2])
    return -1;
  x8 = XVECEXP (x5, 0, 2);
  if (x8 != const_int_rtx[MAX_SAVED_CONST_INT + 4])
    return -1;
  x9 = XVECEXP (x5, 0, 3);
  if (x9 != const_int_rtx[MAX_SAVED_CONST_INT + 6])
    return -1;
  x10 = XEXP (x2, 1);
  if (GET_CODE (x10) != VEC_SELECT
      || GET_MODE (x10) != E_V4HImode)
    return -1;
  x11 = XEXP (x10, 0);
  if (GET_CODE (x11) != VEC_CONCAT
      || GET_MODE (x11) != E_V8HImode)
    return -1;
  x12 = XEXP (x10, 1);
  if (GET_CODE (x12) != PARALLEL
      || XVECLEN (x12, 0) != 4)
    return -1;
  x13 = XVECEXP (x12, 0, 0);
  if (x13 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
    return -1;
  x14 = XVECEXP (x12, 0, 1);
  if (x14 != const_int_rtx[MAX_SAVED_CONST_INT + 3])
    return -1;
  x15 = XVECEXP (x12, 0, 2);
  if (x15 != const_int_rtx[MAX_SAVED_CONST_INT + 5])
    return -1;
  x16 = XVECEXP (x12, 0, 3);
  if (x16 != const_int_rtx[MAX_SAVED_CONST_INT + 7])
    return -1;
  x17 = XEXP (x1, 0);
  operands[0] = x17;
  if (!register_operand (operands[0], E_V4HImode)
      || pattern52 (x2) != 0)
    return -1;
  return 0;
}

int
pattern77 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4;
  int res ATTRIBUTE_UNUSED;
  if (!nonimmediate_operand (operands[1], E_QImode))
    return -1;
  x2 = XEXP (x1, 0);
  operands[0] = x2;
  if (!nonimmediate_operand (operands[0], E_QImode))
    return -1;
  x3 = XEXP (x1, 1);
  if (GET_MODE (x3) != E_QImode)
    return -1;
  x4 = XEXP (x3, 1);
  operands[2] = x4;
  if (!general_operand (operands[2], E_QImode))
    return -1;
  return 0;
}

int
pattern82 (rtx x1, machine_mode i1, int i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (GET_CODE (x1) != UNSPEC
      || XVECLEN (x1, 0) != 2
      || XINT (x1, 1) != i2
      || GET_MODE (x1) != i1)
    return -1;
  return 0;
}

int
pattern89 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) != PARALLEL)
    return -1;
  x5 = XEXP (x2, 1);
  if (GET_CODE (x5) != VEC_SELECT)
    return -1;
  x6 = XEXP (x5, 1);
  if (GET_CODE (x6) != PARALLEL)
    return -1;
  x7 = XEXP (x1, 0);
  operands[0] = x7;
  x8 = XEXP (x3, 0);
  switch (GET_CODE (x8))
    {
    case REG:
    case SUBREG:
    case MEM:
      return 0;

    case VEC_CONCAT:
      return 1;

    default:
      return -1;
    }
}

int
pattern94 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12, x13, x14;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != i2)
    return -1;
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) != VEC_SELECT
      || GET_MODE (x3) != i2)
    return -1;
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) != PARALLEL
      || XVECLEN (x4, 0) != 1)
    return -1;
  x5 = XEXP (x2, 1);
  if (GET_CODE (x5) != VEC_SELECT
      || GET_MODE (x5) != i2)
    return -1;
  x6 = XEXP (x5, 1);
  if (GET_CODE (x6) != PARALLEL
      || XVECLEN (x6, 0) != 1)
    return -1;
  x7 = XEXP (x1, 1);
  if (GET_CODE (x7) != PLUS
      || GET_MODE (x7) != i2)
    return -1;
  x8 = XEXP (x7, 0);
  if (GET_CODE (x8) != VEC_SELECT
      || GET_MODE (x8) != i2)
    return -1;
  x9 = XEXP (x8, 1);
  if (GET_CODE (x9) != PARALLEL
      || XVECLEN (x9, 0) != 1)
    return -1;
  x10 = XEXP (x7, 1);
  if (GET_CODE (x10) != VEC_SELECT
      || GET_MODE (x10) != i2)
    return -1;
  x11 = XEXP (x10, 1);
  if (GET_CODE (x11) != PARALLEL
      || XVECLEN (x11, 0) != 1
      || !register_operand (operands[0], i1)
      || GET_MODE (x1) != i1)
    return -1;
  x12 = XEXP (x3, 0);
  operands[1] = x12;
  if (!register_operand (operands[1], i1))
    return -1;
  x13 = XVECEXP (x4, 0, 0);
  operands[3] = x13;
  if (!const_0_to_1_operand (operands[3], E_SImode))
    return -1;
  x14 = XVECEXP (x6, 0, 0);
  operands[4] = x14;
  if (!const_0_to_1_operand (operands[4], E_SImode))
    return -1;
  return 0;
}

int
pattern116 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  operands[3] = x3;
  if (!const_int_operand (operands[3], E_QImode))
    return -1;
  x4 = XEXP (x2, 1);
  operands[2] = x4;
  if (!register_operand (operands[2], E_QImode))
    return -1;
  return pattern16 (x1); /* [-1, 1] */
}

int
pattern120 (rtx x1)
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
    case E_SImode:
      if (!memory_operand (operands[0], E_SImode)
          || GET_MODE (x3) != E_SImode
          || !register_operand (operands[1], E_SImode))
        return -1;
      return 0;

    case E_DImode:
      if (!memory_operand (operands[0], E_DImode)
          || GET_MODE (x3) != E_DImode
          || !register_operand (operands[1], E_DImode))
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern131 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 2);
  if (XWINT (x2, 0) != 1L)
    return -1;
  x3 = XEXP (x1, 1);
  if (!rtx_equal_p (x3, operands[1]))
    return -1;
  switch (GET_MODE (operands[0]))
    {
    case E_V8HFmode:
      return pattern130 (x1, 
E_V8HFmode); /* [-1, 0] */

    case E_V4SFmode:
      if (pattern130 (x1, 
E_V4SFmode) != 0)
        return -1;
      return 1;

    case E_V2DFmode:
      if (pattern130 (x1, 
E_V2DFmode) != 0)
        return -1;
      return 2;

    default:
      return -1;
    }
}

int
pattern142 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  operands[1] = x3;
  x4 = XEXP (x2, 1);
  operands[2] = x4;
  x5 = XEXP (x1, 1);
  operands[3] = x5;
  x6 = XEXP (x1, 2);
  operands[4] = x6;
  switch (GET_MODE (operands[0]))
    {
    case E_V16SImode:
      return pattern127 (x1, 
E_V16SImode, 
E_HImode); /* [-1, 0] */

    case E_V8SImode:
      if (pattern127 (x1, 
E_V8SImode, 
E_QImode) != 0)
        return -1;
      return 1;

    case E_V4SImode:
      if (pattern128 (x1, 
E_QImode, 
E_V4SImode) != 0)
        return -1;
      return 2;

    case E_V8DImode:
      if (pattern127 (x1, 
E_V8DImode, 
E_QImode) != 0)
        return -1;
      return 3;

    case E_V4DImode:
      if (pattern127 (x1, 
E_V4DImode, 
E_QImode) != 0)
        return -1;
      return 4;

    case E_V2DImode:
      if (pattern127 (x1, 
E_V2DImode, 
E_QImode) != 0)
        return -1;
      return 5;

    case E_V64QImode:
      if (pattern129 (x1, 
E_V64QImode, 
E_DImode) != 0)
        return -1;
      return 6;

    case E_V16QImode:
      if (pattern129 (x1, 
E_V16QImode, 
E_HImode) != 0)
        return -1;
      return 7;

    case E_V32QImode:
      if (pattern129 (x1, 
E_V32QImode, 
E_SImode) != 0)
        return -1;
      return 8;

    case E_V32HImode:
      if (pattern129 (x1, 
E_V32HImode, 
E_SImode) != 0)
        return -1;
      return 9;

    case E_V16HImode:
      if (pattern129 (x1, 
E_V16HImode, 
E_HImode) != 0)
        return -1;
      return 10;

    case E_V8HImode:
      if (pattern128 (x1, 
E_QImode, 
E_V8HImode) != 0)
        return -1;
      return 11;

    default:
      return -1;
    }
}

int
pattern154 (rtx x1)
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
  switch (GET_MODE (operands[0]))
    {
    case E_V64QImode:
      return pattern149 (x3, 
E_V64QImode); /* [-1, 0] */

    case E_V32QImode:
      if (pattern149 (x3, 
E_V32QImode) != 0)
        return -1;
      return 1;

    case E_V16QImode:
      if (pattern149 (x3, 
E_V16QImode) != 0)
        return -1;
      return 2;

    default:
      return -1;
    }
}

int
pattern160 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1
      || !register_operand (operands[1], i2)
      || !nonimmediate_operand (operands[2], i2))
    return -1;
  return 0;
}

int
pattern165 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1
      || !vector_operand (operands[1], i1)
      || !bcst_vector_operand (operands[2], i1)
      || !vector_operand (operands[3], i1))
    return -1;
  return 0;
}

int
pattern171 (rtx x1)
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
  if (!const_0_to_255_operand (operands[3], E_VOIDmode))
    return -1;
  switch (GET_MODE (operands[0]))
    {
    case E_V64QImode:
      return pattern149 (x3, 
E_V64QImode); /* [-1, 0] */

    case E_V32QImode:
      if (pattern149 (x3, 
E_V32QImode) != 0)
        return -1;
      return 1;

    case E_V16QImode:
      if (pattern149 (x3, 
E_V16QImode) != 0)
        return -1;
      return 2;

    default:
      return -1;
    }
}

int
pattern181 (rtx x1, machine_mode i1)
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
      || !vector_operand (operands[3], i1))
    return -1;
  return 0;
}

int
pattern185 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12, x13, x14, x15, x16, x17;
  rtx x18, x19, x20, x21, x22, x23, x24, x25;
  rtx x26, x27, x28, x29, x30, x31, x32, x33;
  rtx x34, x35, x36, x37;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 1);
  x4 = XVECEXP (x3, 0, 0);
  if (x4 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
    return -1;
  x5 = XVECEXP (x3, 0, 1);
  if (x5 != const_int_rtx[MAX_SAVED_CONST_INT + 2])
    return -1;
  x6 = XVECEXP (x3, 0, 2);
  if (x6 != const_int_rtx[MAX_SAVED_CONST_INT + 4])
    return -1;
  x7 = XVECEXP (x3, 0, 3);
  if (x7 != const_int_rtx[MAX_SAVED_CONST_INT + 6])
    return -1;
  x8 = XVECEXP (x3, 0, 4);
  if (x8 != const_int_rtx[MAX_SAVED_CONST_INT + 16])
    return -1;
  x9 = XVECEXP (x3, 0, 5);
  if (x9 != const_int_rtx[MAX_SAVED_CONST_INT + 18])
    return -1;
  x10 = XVECEXP (x3, 0, 6);
  if (x10 != const_int_rtx[MAX_SAVED_CONST_INT + 20])
    return -1;
  x11 = XVECEXP (x3, 0, 7);
  if (x11 != const_int_rtx[MAX_SAVED_CONST_INT + 22])
    return -1;
  x12 = XVECEXP (x3, 0, 8);
  if (x12 != const_int_rtx[MAX_SAVED_CONST_INT + 8])
    return -1;
  x13 = XVECEXP (x3, 0, 9);
  if (x13 != const_int_rtx[MAX_SAVED_CONST_INT + 10])
    return -1;
  x14 = XVECEXP (x3, 0, 10);
  if (x14 != const_int_rtx[MAX_SAVED_CONST_INT + 12])
    return -1;
  x15 = XVECEXP (x3, 0, 11);
  if (x15 != const_int_rtx[MAX_SAVED_CONST_INT + 14])
    return -1;
  x16 = XVECEXP (x3, 0, 12);
  if (x16 != const_int_rtx[MAX_SAVED_CONST_INT + 24])
    return -1;
  x17 = XVECEXP (x3, 0, 13);
  if (x17 != const_int_rtx[MAX_SAVED_CONST_INT + 26])
    return -1;
  x18 = XVECEXP (x3, 0, 14);
  if (x18 != const_int_rtx[MAX_SAVED_CONST_INT + 28])
    return -1;
  x19 = XVECEXP (x3, 0, 15);
  if (x19 != const_int_rtx[MAX_SAVED_CONST_INT + 30])
    return -1;
  x20 = XEXP (x1, 1);
  x21 = XEXP (x20, 1);
  if (XVECLEN (x21, 0) != 16)
    return -1;
  x22 = XVECEXP (x21, 0, 0);
  if (x22 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
    return -1;
  x23 = XVECEXP (x21, 0, 1);
  if (x23 != const_int_rtx[MAX_SAVED_CONST_INT + 3])
    return -1;
  x24 = XVECEXP (x21, 0, 2);
  if (x24 != const_int_rtx[MAX_SAVED_CONST_INT + 5])
    return -1;
  x25 = XVECEXP (x21, 0, 3);
  if (x25 != const_int_rtx[MAX_SAVED_CONST_INT + 7])
    return -1;
  x26 = XVECEXP (x21, 0, 4);
  if (x26 != const_int_rtx[MAX_SAVED_CONST_INT + 17])
    return -1;
  x27 = XVECEXP (x21, 0, 5);
  if (x27 != const_int_rtx[MAX_SAVED_CONST_INT + 19])
    return -1;
  x28 = XVECEXP (x21, 0, 6);
  if (x28 != const_int_rtx[MAX_SAVED_CONST_INT + 21])
    return -1;
  x29 = XVECEXP (x21, 0, 7);
  if (x29 != const_int_rtx[MAX_SAVED_CONST_INT + 23])
    return -1;
  x30 = XVECEXP (x21, 0, 8);
  if (x30 != const_int_rtx[MAX_SAVED_CONST_INT + 9])
    return -1;
  x31 = XVECEXP (x21, 0, 9);
  if (x31 != const_int_rtx[MAX_SAVED_CONST_INT + 11])
    return -1;
  x32 = XVECEXP (x21, 0, 10);
  if (x32 != const_int_rtx[MAX_SAVED_CONST_INT + 13])
    return -1;
  x33 = XVECEXP (x21, 0, 11);
  if (x33 != const_int_rtx[MAX_SAVED_CONST_INT + 15])
    return -1;
  x34 = XVECEXP (x21, 0, 12);
  if (x34 != const_int_rtx[MAX_SAVED_CONST_INT + 25])
    return -1;
  x35 = XVECEXP (x21, 0, 13);
  if (x35 != const_int_rtx[MAX_SAVED_CONST_INT + 27])
    return -1;
  x36 = XVECEXP (x21, 0, 14);
  if (x36 != const_int_rtx[MAX_SAVED_CONST_INT + 29])
    return -1;
  x37 = XVECEXP (x21, 0, 15);
  if (x37 != const_int_rtx[MAX_SAVED_CONST_INT + 31]
      || pattern184 (x1, 
E_V32HImode, 
E_V16HImode) != 0)
    return -1;
  return 0;
}

int
pattern205 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  operands[2] = x3;
  if (!nonimmediate_operand (operands[2], E_QImode))
    return -1;
  return pattern203 (x1); /* [-1, 3] */
}

int
pattern209 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1
      || !nonimmediate_operand (operands[1], i1)
      || !nonimmediate_operand (operands[2], i1))
    return -1;
  return 0;
}

int
pattern213 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) != E_V4SFmode)
    return -1;
  x4 = XEXP (x3, 0);
  if (GET_CODE (x4) != VEC_DUPLICATE
      || GET_MODE (x4) != E_V4SFmode)
    return -1;
  x5 = XEXP (x4, 0);
  if (GET_CODE (x5) != FLOAT
      || GET_MODE (x5) != E_V2SFmode)
    return -1;
  x6 = XEXP (x3, 2);
  if (x6 != const_int_rtx[MAX_SAVED_CONST_INT + 3])
    return -1;
  x7 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x7) != CLOBBER)
    return -1;
  x8 = XEXP (x2, 0);
  operands[0] = x8;
  if (!register_operand (operands[0], E_V4SFmode))
    return -1;
  x9 = XEXP (x5, 0);
  operands[2] = x9;
  if (!register_mmxmem_operand (operands[2], E_V2SImode))
    return -1;
  x10 = XEXP (x3, 1);
  operands[1] = x10;
  if (!register_operand (operands[1], E_V4SFmode))
    return -1;
  x11 = XEXP (x7, 0);
  operands[3] = x11;
  if (!scratch_operand (operands[3], E_V4SFmode))
    return -1;
  return 0;
}

int
pattern227 (rtx x1, machine_mode i1, unsigned int i2)
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
pattern233 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!mask_reg_operand (operands[0], i1)
      || GET_MODE (x1) != i1
      || !mask_reg_operand (operands[1], i1)
      || !mask_reg_operand (operands[2], i1))
    return -1;
  return 0;
}

int
pattern239 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  if (GET_CODE (x4) != REG
      || REGNO (x4) != 17)
    return -1;
  x5 = XEXP (x3, 1);
  if (x5 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
    return -1;
  x6 = XEXP (x1, 0);
  operands[0] = x6;
  x7 = XEXP (x2, 1);
  switch (GET_CODE (x7))
    {
    case REG:
    case SUBREG:
    case MEM:
      operands[2] = x7;
      x8 = XEXP (x2, 2);
      operands[3] = x8;
      return 0;

    case ZERO_EXTEND:
      if (GET_MODE (x7) != E_DImode)
        return -1;
      x8 = XEXP (x2, 2);
      if (GET_CODE (x8) != ZERO_EXTEND
          || GET_MODE (x8) != E_DImode)
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern252 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) != E_V2QImode)
    return -1;
  x4 = XEXP (x1, 0);
  operands[0] = x4;
  if (!memory_operand (operands[0], E_HImode)
      || GET_MODE (x2) != E_HImode)
    return -1;
  x5 = XEXP (x3, 0);
  operands[1] = x5;
  if (!register_operand (operands[1], E_V2DImode))
    return -1;
  return 0;
}

int
pattern258 (rtx x1, int *pnum_clobbers, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (pnum_clobbers == NULL
      || !nonimmediate_operand (operands[0], i2)
      || GET_MODE (x1) != i2
      || !register_operand (operands[1], i1))
    return -1;
  return 0;
}

int
pattern264 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  operands[3] = x4;
  if (!const_int_operand (operands[3], E_VOIDmode))
    return -1;
  return pattern2 (x1); /* [-1, 1] */
}

int
pattern270 (rtx x1, machine_mode i1, machine_mode i2)
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
      || !register_mmxmem_operand (operands[2], i1))
    return -1;
  return 0;
}

int
pattern275 (rtx x1, int *pnum_clobbers, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4;
  int res ATTRIBUTE_UNUSED;
  if (!nonimmediate_operand (operands[0], i1)
      || GET_MODE (x1) != i1)
    return -1;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  if (!nonimmediate_operand (x3, i2))
    return -1;
  x4 = XEXP (x1, 1);
  switch (GET_CODE (x4))
    {
    case REG:
    case SUBREG:
    case MEM:
      if (pnum_clobbers == NULL)
        return -1;
      operands[1] = x4;
      if (!nonimmediate_operand (operands[1], i1))
        return -1;
      operands[2] = x3;
      return 0;

    case ASHIFT:
      if (GET_MODE (x4) != i1)
        return -1;
      operands[1] = x3;
      res = pattern37 (x4, 
i1, 
i2);
      if (res >= 0)
        return res + 1; /* [1, 3] */
      return -1;

    case CONST_INT:
    case CONST_WIDE_INT:
      operands[2] = x4;
      if (!const_scalar_int_operand (operands[2], i1))
        return -1;
      operands[1] = x3;
      return 4;

    default:
      return -1;
    }
}

int
pattern291 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i2)
      || GET_MODE (x1) != i2)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != i1
      || !register_operand (operands[1], i1))
    return -1;
  return 0;
}

int
pattern296 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4;
  int res ATTRIBUTE_UNUSED;
  if (GET_MODE (x1) != E_SImode)
    return -1;
  x2 = XVECEXP (x1, 0, 0);
  if (!ix86_comparison_operator (x2, E_QImode))
    return -1;
  operands[1] = x2;
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) != REG
      || REGNO (x3) != 17)
    return -1;
  x4 = XEXP (x2, 1);
  if (x4 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
    return -1;
  return 0;
}

int
pattern304 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 2);
  if (x2 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
    return -1;
  x3 = XEXP (x1, 0);
  x4 = XEXP (x3, 0);
  x5 = XEXP (x4, 0);
  operands[1] = x5;
  x6 = XEXP (x4, 1);
  operands[2] = x6;
  x7 = XEXP (x3, 1);
  operands[3] = x7;
  x8 = XEXP (x3, 2);
  operands[4] = x8;
  if (!register_operand (operands[4], E_QImode))
    return -1;
  x9 = XEXP (x1, 1);
  if (!rtx_equal_p (x9, operands[1]))
    return -1;
  switch (GET_MODE (operands[0]))
    {
    case E_V8HFmode:
      return pattern303 (x1, 
E_V8HFmode); /* [-1, 0] */

    case E_V4SFmode:
      if (pattern303 (x1, 
E_V4SFmode) != 0)
        return -1;
      return 1;

    case E_V2DFmode:
      if (pattern303 (x1, 
E_V2DFmode) != 0)
        return -1;
      return 2;

    default:
      return -1;
    }
}

int
pattern315 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 2);
  switch (GET_CODE (x2))
    {
    case UNSPEC:
      if (XVECLEN (x2, 0) != 3)
        return -1;
      x3 = XEXP (x1, 0);
      operands[1] = x3;
      x4 = XEXP (x1, 1);
      operands[2] = x4;
      x5 = XVECEXP (x2, 0, 0);
      operands[3] = x5;
      x6 = XVECEXP (x2, 0, 1);
      operands[4] = x6;
      switch (XINT (x2, 1))
        {
        case 59:
          return 0;

        case 157:
          x7 = XVECEXP (x2, 0, 2);
          operands[5] = x7;
          if (!const_0_to_7_operand (operands[5], E_SImode))
            return -1;
          switch (GET_MODE (operands[0]))
            {
            case E_V16QImode:
              if (pattern313 (x1, 
E_V16QImode, 
E_HImode) != 0)
                return -1;
              return 1;

            case E_V8HImode:
              if (pattern313 (x1, 
E_V8HImode, 
E_QImode) != 0)
                return -1;
              return 2;

            case E_V4SImode:
              if (pattern313 (x1, 
E_V4SImode, 
E_QImode) != 0)
                return -1;
              return 3;

            case E_V2DImode:
              if (pattern313 (x1, 
E_V2DImode, 
E_QImode) != 0)
                return -1;
              return 4;

            case E_V32QImode:
              if (pattern313 (x1, 
E_V32QImode, 
E_SImode) != 0)
                return -1;
              return 5;

            case E_V16HImode:
              if (pattern313 (x1, 
E_V16HImode, 
E_HImode) != 0)
                return -1;
              return 6;

            case E_V8SImode:
              if (pattern313 (x1, 
E_V8SImode, 
E_QImode) != 0)
                return -1;
              return 7;

            case E_V4DImode:
              if (pattern313 (x1, 
E_V4DImode, 
E_QImode) != 0)
                return -1;
              return 8;

            default:
              return -1;
            }

        default:
          return -1;
        }

    case NOT:
      x8 = XEXP (x2, 0);
      if (GET_CODE (x8) != UNSPEC
          || XVECLEN (x8, 0) != 3
          || XINT (x8, 1) != 59)
        return -1;
      x3 = XEXP (x1, 0);
      operands[1] = x3;
      x4 = XEXP (x1, 1);
      operands[2] = x4;
      x9 = XVECEXP (x8, 0, 0);
      operands[3] = x9;
      x10 = XVECEXP (x8, 0, 1);
      operands[4] = x10;
      x11 = XVECEXP (x8, 0, 2);
      operands[5] = x11;
      switch (GET_MODE (operands[0]))
        {
        case E_V8SImode:
          if (!register_operand (operands[0], E_V8SImode)
              || GET_MODE (x1) != E_V8SImode
              || !vector_all_ones_operand (operands[1], E_V8SImode)
              || !const0_operand (operands[2], E_V8SImode)
              || GET_MODE (x2) != E_QImode
              || GET_MODE (x8) != E_QImode)
            return -1;
          switch (GET_MODE (operands[3]))
            {
            case E_V8SFmode:
              if (!register_operand (operands[3], E_V8SFmode)
                  || !nonimmediate_operand (operands[4], E_V8SFmode)
                  || !const_0_to_31_operand (operands[5], E_SImode))
                return -1;
              return 9;

            case E_V8SImode:
              if (!nonimmediate_operand (operands[3], E_V8SImode)
                  || !nonimmediate_operand (operands[4], E_V8SImode)
                  || !const_0_to_7_operand (operands[5], E_SImode))
                return -1;
              return 10;

            default:
              return -1;
            }

        case E_V4SImode:
          if (!register_operand (operands[0], E_V4SImode)
              || GET_MODE (x1) != E_V4SImode
              || !vector_all_ones_operand (operands[1], E_V4SImode)
              || !const0_operand (operands[2], E_V4SImode)
              || GET_MODE (x2) != E_QImode
              || GET_MODE (x8) != E_QImode)
            return -1;
          switch (GET_MODE (operands[3]))
            {
            case E_V4SFmode:
              if (!register_operand (operands[3], E_V4SFmode)
                  || !nonimmediate_operand (operands[4], E_V4SFmode)
                  || !const_0_to_31_operand (operands[5], E_SImode))
                return -1;
              return 11;

            case E_V4SImode:
              if (!nonimmediate_operand (operands[3], E_V4SImode)
                  || !nonimmediate_operand (operands[4], E_V4SImode)
                  || !const_0_to_7_operand (operands[5], E_SImode))
                return -1;
              return 12;

            default:
              return -1;
            }

        case E_V4DImode:
          if (!register_operand (operands[0], E_V4DImode)
              || GET_MODE (x1) != E_V4DImode
              || !vector_all_ones_operand (operands[1], E_V4DImode)
              || !const0_operand (operands[2], E_V4DImode)
              || GET_MODE (x2) != E_QImode
              || GET_MODE (x8) != E_QImode)
            return -1;
          switch (GET_MODE (operands[3]))
            {
            case E_V4DFmode:
              if (!register_operand (operands[3], E_V4DFmode)
                  || !nonimmediate_operand (operands[4], E_V4DFmode)
                  || !const_0_to_31_operand (operands[5], E_SImode))
                return -1;
              return 13;

            case E_V4DImode:
              if (!nonimmediate_operand (operands[3], E_V4DImode)
                  || !nonimmediate_operand (operands[4], E_V4DImode)
                  || !const_0_to_7_operand (operands[5], E_SImode))
                return -1;
              return 14;

            default:
              return -1;
            }

        case E_V2DImode:
          if (!register_operand (operands[0], E_V2DImode)
              || GET_MODE (x1) != E_V2DImode
              || !vector_all_ones_operand (operands[1], E_V2DImode)
              || !const0_operand (operands[2], E_V2DImode)
              || GET_MODE (x2) != E_QImode
              || GET_MODE (x8) != E_QImode)
            return -1;
          switch (GET_MODE (operands[3]))
            {
            case E_V2DFmode:
              if (!register_operand (operands[3], E_V2DFmode)
                  || !nonimmediate_operand (operands[4], E_V2DFmode)
                  || !const_0_to_31_operand (operands[5], E_SImode))
                return -1;
              return 15;

            case E_V2DImode:
              if (!nonimmediate_operand (operands[3], E_V2DImode)
                  || !nonimmediate_operand (operands[4], E_V2DImode)
                  || !const_0_to_7_operand (operands[5], E_SImode))
                return -1;
              return 16;

            default:
              return -1;
            }

        case E_V16QImode:
          if (pattern314 (x1, 
E_V16QImode, 
E_HImode) != 0)
            return -1;
          return 17;

        case E_V8HImode:
          if (pattern314 (x1, 
E_V8HImode, 
E_QImode) != 0)
            return -1;
          return 18;

        case E_V32QImode:
          if (pattern314 (x1, 
E_V32QImode, 
E_SImode) != 0)
            return -1;
          return 19;

        case E_V16HImode:
          if (pattern314 (x1, 
E_V16HImode, 
E_HImode) != 0)
            return -1;
          return 20;

        default:
          return -1;
        }

    case REG:
    case SUBREG:
      operands[1] = x2;
      x3 = XEXP (x1, 0);
      operands[2] = x3;
      x4 = XEXP (x1, 1);
      operands[3] = x4;
      return 21;

    default:
      return -1;
    }
}

int
pattern378 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  operands[0] = x2;
  x3 = XEXP (x1, 1);
  x4 = XEXP (x3, 0);
  x5 = XEXP (x4, 0);
  operands[1] = x5;
  x6 = XEXP (x3, 1);
  operands[2] = x6;
  if (!const_int_operand (operands[2], E_QImode))
    return -1;
  switch (GET_MODE (operands[0]))
    {
    case E_DImode:
      return pattern377 (x3, 
E_SImode, 
E_DImode); /* [-1, 0] */

    case E_TImode:
      if (pattern377 (x3, 
E_DImode, 
E_TImode) != 0)
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern388 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 2);
  if (XVECLEN (x2, 0) != 1
      || XINT (x2, 1) != 32)
    return -1;
  x3 = XVECEXP (x2, 0, 0);
  if (x3 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
    return -1;
  switch (GET_MODE (operands[0]))
    {
    case E_SImode:
      return pattern387 (x1, 
E_SImode); /* [-1, 0] */

    case E_DImode:
      if (pattern387 (x1, 
E_DImode) != 0)
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern396 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  operands[1] = x3;
  x4 = XEXP (x2, 1);
  operands[2] = x4;
  if (!const248_operand (operands[2], E_VOIDmode))
    return -1;
  x5 = XEXP (x1, 1);
  operands[3] = x5;
  switch (GET_MODE (operands[0]))
    {
    case E_QImode:
      return pattern395 (x1, 
E_QImode); /* [-1, 0] */

    case E_HImode:
      if (pattern395 (x1, 
E_HImode) != 0)
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern405 (rtx x1)
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
  x5 = XEXP (x4, 0);
  operands[0] = x5;
  x6 = XEXP (x4, 1);
  x7 = XEXP (x6, 0);
  operands[1] = x7;
  return pattern404 (x6); /* [-1, 1] */
}

int
pattern411 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11;
  int res ATTRIBUTE_UNUSED;
  operands[4] = x1;
  if (!general_gr_operand (operands[4], i1))
    return -1;
  x2 = PATTERN (peep2_next_insn (1));
  if (GET_CODE (x2) != PARALLEL
      || XVECLEN (x2, 0) != 3)
    return -1;
  x3 = XVECEXP (x2, 0, 0);
  if (GET_CODE (x3) != SET)
    return -1;
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) != UNSPEC
      || XVECLEN (x4, 0) != 1
      || XINT (x4, 1) != 92)
    return -1;
  x5 = XVECEXP (x2, 0, 1);
  if (GET_CODE (x5) != SET)
    return -1;
  x6 = XEXP (x5, 1);
  if (x6 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
    return -1;
  x7 = XVECEXP (x2, 0, 2);
  if (GET_CODE (x7) != CLOBBER)
    return -1;
  x8 = XEXP (x7, 0);
  if (GET_CODE (x8) != REG
      || REGNO (x8) != 17
      || GET_MODE (x8) != E_CCmode)
    return -1;
  x9 = XEXP (x3, 0);
  operands[0] = x9;
  x10 = XVECEXP (x4, 0, 0);
  operands[1] = x10;
  x11 = XEXP (x5, 0);
  operands[2] = x11;
  if (!general_reg_operand (operands[2], E_VOIDmode))
    return -1;
  switch (GET_MODE (operands[0]))
    {
    case E_SImode:
      if (!memory_operand (operands[0], E_SImode)
          || GET_MODE (x4) != E_SImode
          || !memory_operand (operands[1], E_SImode))
        return -1;
      return 0;

    case E_DImode:
      if (!memory_operand (operands[0], E_DImode)
          || GET_MODE (x4) != E_DImode
          || !memory_operand (operands[1], E_DImode))
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern434 (rtx x1, int *pnum_clobbers)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6;
  int res ATTRIBUTE_UNUSED;
  if (pnum_clobbers == NULL)
    return -1;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  x4 = XEXP (x3, 1);
  if (x4 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
    return -1;
  x5 = XEXP (x1, 0);
  operands[0] = x5;
  x6 = XEXP (x3, 0);
  operands[2] = x6;
  if (!int_nonimmediate_operand (operands[2], E_VOIDmode))
    return -1;
  switch (GET_MODE (operands[0]))
    {
    case E_QImode:
      return pattern433 (x2, 
E_QImode); /* [-1, 0] */

    case E_HImode:
      if (pattern433 (x2, 
E_HImode) != 0)
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern447 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  operands[3] = x4;
  if (!const_int_operand (operands[3], E_VOIDmode))
    return -1;
  return pattern16 (x1); /* [-1, 1] */
}

int
pattern452 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) != PARALLEL
      || XVECLEN (x2, 0) != 1)
    return -1;
  x3 = XVECEXP (x2, 0, 0);
  if (x3 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
    return -1;
  x4 = XEXP (x1, 0);
  operands[1] = x4;
  switch (GET_MODE (operands[0]))
    {
    case E_SImode:
      return 0;

    case E_DImode:
      return 1;

    default:
      return -1;
    }
}

int
pattern458 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  x3 = XVECEXP (x2, 0, 0);
  operands[1] = x3;
  x4 = XVECEXP (x2, 0, 1);
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
          return pattern455 (x1, 
E_V32HFmode, 
E_SImode); /* [-1, 0] */

        case E_V16HFmode:
          if (pattern455 (x1, 
E_V16HFmode, 
E_HImode) != 0)
            return -1;
          return 1;

        case E_V8HFmode:
          if (pattern455 (x1, 
E_V8HFmode, 
E_QImode) != 0)
            return -1;
          return 2;

        case E_V16SFmode:
          if (pattern455 (x1, 
E_V16SFmode, 
E_HImode) != 0)
            return -1;
          return 3;

        case E_V8SFmode:
          if (pattern455 (x1, 
E_V8SFmode, 
E_QImode) != 0)
            return -1;
          return 4;

        case E_V4SFmode:
          if (pattern455 (x1, 
E_V4SFmode, 
E_QImode) != 0)
            return -1;
          return 5;

        case E_V8DFmode:
          if (pattern455 (x1, 
E_V8DFmode, 
E_QImode) != 0)
            return -1;
          return 6;

        case E_V4DFmode:
          if (pattern455 (x1, 
E_V4DFmode, 
E_QImode) != 0)
            return -1;
          return 7;

        case E_V2DFmode:
          if (pattern455 (x1, 
E_V2DFmode, 
E_QImode) != 0)
            return -1;
          return 8;

        default:
          return -1;
        }

    case CONST_INT:
      if (XWINT (x5, 0) != 1L)
        return -1;
      res = pattern457 (x1);
      if (res >= 0)
        return res + 9; /* [9, 11] */
      return -1;

    default:
      return -1;
    }
}

int
pattern482 (rtx x1)
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
  x6 = XEXP (x1, 1);
  switch (GET_CODE (x6))
    {
    case REG:
    case SUBREG:
      if (!rtx_equal_p (x6, operands[1]))
        return -1;
      x7 = XEXP (x1, 2);
      operands[4] = x7;
      switch (GET_MODE (operands[0]))
        {
        case E_V32HImode:
          return pattern479 (x1, 
E_V32HImode, 
E_SImode); /* [-1, 0] */

        case E_V16SImode:
          if (pattern479 (x1, 
E_V16SImode, 
E_HImode) != 0)
            return -1;
          return 1;

        case E_V8DImode:
          if (pattern479 (x1, 
E_V8DImode, 
E_QImode) != 0)
            return -1;
          return 2;

        case E_V16HImode:
          if (pattern479 (x1, 
E_V16HImode, 
E_HImode) != 0)
            return -1;
          return 3;

        case E_V8SImode:
          if (pattern479 (x1, 
E_V8SImode, 
E_QImode) != 0)
            return -1;
          return 4;

        case E_V4DImode:
          if (pattern479 (x1, 
E_V4DImode, 
E_QImode) != 0)
            return -1;
          return 5;

        case E_V8HImode:
          if (pattern479 (x1, 
E_V8HImode, 
E_QImode) != 0)
            return -1;
          return 6;

        case E_V4SImode:
          if (pattern479 (x1, 
E_V4SImode, 
E_QImode) != 0)
            return -1;
          return 7;

        case E_V2DImode:
          if (pattern479 (x1, 
E_V2DImode, 
E_QImode) != 0)
            return -1;
          return 8;

        default:
          return -1;
        }

    case CONST_INT:
    case CONST_DOUBLE:
    case CONST_VECTOR:
      operands[4] = x6;
      x7 = XEXP (x1, 2);
      operands[5] = x7;
      switch (GET_MODE (operands[0]))
        {
        case E_V32HImode:
          if (pattern481 (x1, 
E_V32HImode, 
E_SImode) != 0)
            return -1;
          return 9;

        case E_V16SImode:
          if (pattern481 (x1, 
E_V16SImode, 
E_HImode) != 0)
            return -1;
          return 10;

        case E_V8DImode:
          if (pattern481 (x1, 
E_V8DImode, 
E_QImode) != 0)
            return -1;
          return 11;

        case E_V16HImode:
          if (pattern481 (x1, 
E_V16HImode, 
E_HImode) != 0)
            return -1;
          return 12;

        case E_V8SImode:
          if (pattern481 (x1, 
E_V8SImode, 
E_QImode) != 0)
            return -1;
          return 13;

        case E_V4DImode:
          if (pattern481 (x1, 
E_V4DImode, 
E_QImode) != 0)
            return -1;
          return 14;

        case E_V8HImode:
          if (pattern481 (x1, 
E_V8HImode, 
E_QImode) != 0)
            return -1;
          return 15;

        case E_V4SImode:
          if (pattern481 (x1, 
E_V4SImode, 
E_QImode) != 0)
            return -1;
          return 16;

        case E_V2DImode:
          if (pattern481 (x1, 
E_V2DImode, 
E_QImode) != 0)
            return -1;
          return 17;

        default:
          return -1;
        }

    default:
      return -1;
    }
}

int
pattern510 (rtx x1, machine_mode i1, int i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  if (XVECLEN (x1, 0) != i2
      || GET_MODE (x1) != i1)
    return -1;
  x2 = XVECEXP (x1, 0, 0);
  if (x2 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
    return -1;
  x3 = XVECEXP (x1, 0, 1);
  if (x3 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
    return -1;
  return 0;
}

int
pattern515 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], E_V8HFmode)
      || GET_MODE (x1) != E_V8HFmode)
    return -1;
  switch (GET_MODE (operands[1]))
    {
    case E_V8HImode:
      if (!vector_operand (operands[1], E_V8HImode))
        return -1;
      return 0;

    case E_V8SImode:
      if (!vector_operand (operands[1], E_V8SImode))
        return -1;
      return 1;

    case E_V8DImode:
      if (!vector_operand (operands[1], E_V8DImode))
        return -1;
      return 2;

    default:
      return -1;
    }
}

int
pattern522 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], E_V4DImode)
      || GET_MODE (x1) != E_V4DImode)
    return -1;
  switch (GET_MODE (operands[1]))
    {
    case E_V4HFmode:
      if (!memory_operand (operands[1], E_V4HFmode))
        return -1;
      return 0;

    case E_V4DFmode:
      if (!vector_operand (operands[1], E_V4DFmode))
        return -1;
      return 1;

    case E_V4SFmode:
      if (!nonimmediate_operand (operands[1], E_V4SFmode))
        return -1;
      return 2;

    default:
      return -1;
    }
}

int
pattern531 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  operands[3] = x3;
  x4 = XEXP (x2, 1);
  operands[4] = x4;
  switch (GET_MODE (operands[0]))
    {
    case E_V64QImode:
      return pattern530 (x1, 
E_V64QImode); /* [-1, 0] */

    case E_V32QImode:
      if (pattern530 (x1, 
E_V32QImode) != 0)
        return -1;
      return 1;

    case E_V16QImode:
      if (pattern530 (x1, 
E_V16QImode) != 0)
        return -1;
      return 2;

    case E_V32HImode:
      if (pattern530 (x1, 
E_V32HImode) != 0)
        return -1;
      return 3;

    case E_V16HImode:
      if (pattern530 (x1, 
E_V16HImode) != 0)
        return -1;
      return 4;

    case E_V8HImode:
      if (pattern530 (x1, 
E_V8HImode) != 0)
        return -1;
      return 5;

    case E_V16SImode:
      if (pattern530 (x1, 
E_V16SImode) != 0)
        return -1;
      return 6;

    case E_V8SImode:
      if (pattern530 (x1, 
E_V8SImode) != 0)
        return -1;
      return 7;

    case E_V4SImode:
      if (pattern530 (x1, 
E_V4SImode) != 0)
        return -1;
      return 8;

    case E_V8DImode:
      if (pattern530 (x1, 
E_V8DImode) != 0)
        return -1;
      return 9;

    case E_V4DImode:
      if (pattern530 (x1, 
E_V4DImode) != 0)
        return -1;
      return 10;

    case E_V2DImode:
      if (pattern530 (x1, 
E_V2DImode) != 0)
        return -1;
      return 11;

    default:
      return -1;
    }
}

int
pattern540 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1)
    return -1;
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case E_V4QImode:
      if (!register_operand (operands[1], E_V16QImode))
        return -1;
      return 0;

    case E_V4HImode:
      if (!register_operand (operands[1], E_V8HImode))
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern543 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1
      || !nonimmediate_operand (operands[1], i1)
      || !register_operand (operands[2], i1))
    return -1;
  return 0;
}

int
pattern545 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 0);
  operands[0] = x3;
  x4 = XEXP (x2, 1);
  x5 = XVECEXP (x4, 0, 0);
  operands[1] = x5;
  x6 = XVECEXP (x1, 0, 1);
  switch (GET_CODE (x6))
    {
    case CLOBBER:
      x7 = XEXP (x6, 0);
      if (GET_CODE (x7) != REG
          || REGNO (x7) != 17
          || GET_MODE (x7) != E_CCmode)
        return -1;
      switch (GET_MODE (operands[0]))
        {
        case E_SImode:
          if (!register_operand (operands[0], E_SImode)
              || GET_MODE (x4) != E_SImode
              || !nonimmediate_operand (operands[1], E_SImode))
            return -1;
          return 0;

        case E_DImode:
          if (!register_operand (operands[0], E_DImode)
              || GET_MODE (x4) != E_DImode
              || !nonimmediate_operand (operands[1], E_DImode))
            return -1;
          return 1;

        case E_HImode:
          if (!register_operand (operands[0], E_HImode)
              || GET_MODE (x4) != E_HImode
              || !nonimmediate_operand (operands[1], E_HImode))
            return -1;
          return 2;

        default:
          return -1;
        }

    case UNSPEC:
      if (XVECLEN (x6, 0) != 1
          || XINT (x6, 1) != 38)
        return -1;
      res = pattern544 (x1);
      if (res >= 0)
        return res + 3; /* [3, 4] */
      return -1;

    default:
      return -1;
    }
}

int
pattern559 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4;
  int res ATTRIBUTE_UNUSED;
  if (maybe_ne (SUBREG_BYTE (x1), 0)
      || GET_MODE (x1) != E_QImode)
    return -1;
  x2 = XEXP (x1, 0);
  switch (GET_CODE (x2))
    {
    case SIGN_EXTRACT:
    case ZERO_EXTRACT:
      operands[3] = x2;
      x3 = XEXP (x2, 1);
      if (x3 != const_int_rtx[MAX_SAVED_CONST_INT + 8])
        return -1;
      x4 = XEXP (x2, 2);
      if (x4 != const_int_rtx[MAX_SAVED_CONST_INT + 8])
        return -1;
      return 0;

    default:
      return -1;
    }
}

int
pattern568 (rtx x1, machine_mode i1)
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
pattern574 (rtx x1, rtx_code i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) != REG
      || REGNO (x3) != 17
      || GET_MODE (x3) != i2)
    return -1;
  x4 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x4) != SET)
    return -1;
  x5 = XEXP (x4, 1);
  if (GET_CODE (x5) != i1)
    return -1;
  return 0;
}

int
pattern579 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  switch (GET_MODE (operands[0]))
    {
    case E_QImode:
      if (!register_operand (operands[0], E_QImode)
          || GET_MODE (x1) != E_QImode
          || !const_int_operand (operands[1], E_QImode))
        return -1;
      return 0;

    case E_HImode:
      if (!register_operand (operands[0], E_HImode)
          || GET_MODE (x1) != E_HImode
          || !const_int_operand (operands[1], E_HImode))
        return -1;
      return 1;

    case E_SImode:
      if (!register_operand (operands[0], E_SImode)
          || GET_MODE (x1) != E_SImode
          || !const_int_operand (operands[1], E_SImode))
        return -1;
      return 2;

    case E_DImode:
      if (!register_operand (operands[0], E_DImode)
          || GET_MODE (x1) != E_DImode
          || !const_int_operand (operands[1], E_DImode))
        return -1;
      return 3;

    default:
      return -1;
    }
}

int
pattern590 (rtx x1, rtx_code i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x2) != SET)
    return -1;
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) != i1)
    return -1;
  x4 = XVECEXP (x1, 0, 2);
  if (GET_CODE (x4) != UNSPEC
      || XVECLEN (x4, 0) != 1
      || XINT (x4, 1) != 32)
    return -1;
  x5 = XVECEXP (x4, 0, 0);
  if (x5 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
    return -1;
  x6 = XVECEXP (x1, 0, 3);
  x7 = XEXP (x6, 0);
  if (GET_CODE (x7) != REG
      || REGNO (x7) != 17
      || GET_MODE (x7) != E_CCmode)
    return -1;
  x8 = XVECEXP (x1, 0, 0);
  x9 = XEXP (x8, 0);
  operands[0] = x9;
  return pattern589 (x1); /* [-1, 1] */
}

int
pattern598 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12, x13, x14, x15;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  operands[5] = x2;
  if (!memory_operand (operands[5], i1))
    return -1;
  x3 = XEXP (x1, 1);
  operands[0] = x3;
  if (!general_reg_operand (operands[0], i1))
    return -1;
  x4 = PATTERN (peep2_next_insn (1));
  if (GET_CODE (x4) != SET)
    return -1;
  x5 = XEXP (x4, 1);
  if (x5 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
    return -1;
  x6 = XEXP (x4, 0);
  operands[1] = x6;
  if (!memory_operand (operands[1], i1))
    return -1;
  x7 = PATTERN (peep2_next_insn (2));
  if (GET_CODE (x7) != SET)
    return -1;
  x8 = XEXP (x7, 1);
  if (x8 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
    return -1;
  x9 = XEXP (x7, 0);
  operands[2] = x9;
  if (!memory_operand (operands[2], i1))
    return -1;
  x10 = PATTERN (peep2_next_insn (3));
  if (GET_CODE (x10) != SET)
    return -1;
  x11 = XEXP (x10, 1);
  if (x11 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
    return -1;
  x12 = XEXP (x10, 0);
  operands[3] = x12;
  if (!memory_operand (operands[3], i1))
    return -1;
  x13 = PATTERN (peep2_next_insn (4));
  if (GET_CODE (x13) != SET)
    return -1;
  x14 = XEXP (x13, 1);
  if (x14 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
    return -1;
  x15 = XEXP (x13, 0);
  operands[4] = x15;
  if (!memory_operand (operands[4], i1))
    return -1;
  return 0;
}

int
pattern614 (rtx x1, int *pnum_clobbers, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (pnum_clobbers == NULL
      || !register_operand (operands[0], i1)
      || GET_MODE (x1) != i1
      || !register_operand (operands[1], i1))
    return -1;
  return 0;
}

int
pattern621 (rtx x1)
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
      return pattern620 (x1, 
E_SImode); /* [-1, 0] */

    case E_DImode:
      if (pattern620 (x1, 
E_DImode) != 0)
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern632 (rtx x1)
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
    case E_V16QImode:
      return pattern631 (x1, 
E_V16QImode, 
E_HImode, 
E_V16HFmode); /* [-1, 0] */

    case E_V32QImode:
      if (pattern631 (x1, 
E_V32QImode, 
E_SImode, 
E_V32HFmode) != 0)
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern638 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  switch (GET_CODE (x2))
    {
    case CONST_INT:
    case CONST_DOUBLE:
    case CONST_VECTOR:
      operands[4] = x2;
      x3 = XEXP (x1, 2);
      switch (GET_CODE (x3))
        {
        case REG:
        case SUBREG:
          operands[5] = x3;
          switch (GET_MODE (operands[0]))
            {
            case E_V32HFmode:
              return 0;

            case E_V16HFmode:
              return 1;

            case E_V8HFmode:
              return 2;

            case E_V16SFmode:
              return 3;

            case E_V8SFmode:
              return 4;

            case E_V4SFmode:
              return 5;

            case E_V8DFmode:
              return 6;

            case E_V4DFmode:
              return 7;

            case E_V2DFmode:
              return 8;

            case E_V32BFmode:
              return 9;

            case E_V16BFmode:
              return 10;

            case E_V8BFmode:
              return 11;

            default:
              return -1;
            }

        case CONST_INT:
          if (XWINT (x3, 0) != 1L)
            return -1;
          switch (GET_MODE (operands[0]))
            {
            case E_V4SFmode:
              return 12;

            case E_V2DFmode:
              return 13;

            default:
              return -1;
            }

        default:
          return -1;
        }

    case REG:
    case SUBREG:
    case MEM:
      res = pattern637 (x1);
      if (res >= 0)
        return res + 14; /* [14, 28] */
      return -1;

    default:
      return -1;
    }
}

int
pattern655 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1
      || !nonimmediate_operand (operands[1], i1)
      || !nonimmediate_operand (operands[2], i1))
    return -1;
  x2 = XVECEXP (x1, 0, 2);
  if (GET_MODE (x2) != i1
      || !nonimmediate_operand (operands[3], i1)
      || !nonimmediate_operand (operands[4], i1))
    return -1;
  return 0;
}

int
pattern659 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1
      || !vector_operand (operands[2], i1)
      || !register_operand (operands[1], i1))
    return -1;
  x2 = XVECEXP (x1, 0, 2);
  if (GET_MODE (x2) != i1)
    return -1;
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) != i1
      || !const0_operand (operands[4], i1))
    return -1;
  return 0;
}

int
pattern664 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1
      || !register_operand (operands[2], i1)
      || !vector_operand (operands[1], i1))
    return -1;
  x2 = XVECEXP (x1, 0, 2);
  if (GET_MODE (x2) != i1)
    return -1;
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) != i1
      || !vector_all_ones_operand (operands[4], i1))
    return -1;
  return 0;
}

int
pattern669 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != E_V2SImode)
    return -1;
  x3 = XEXP (x1, 1);
  if (GET_CODE (x3) != CONST_VECTOR
      || XVECLEN (x3, 0) != 2
      || GET_MODE (x3) != E_V2SImode)
    return -1;
  x4 = XVECEXP (x3, 0, 0);
  if (x4 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
    return -1;
  x5 = XVECEXP (x3, 0, 1);
  if (x5 != const_int_rtx[MAX_SAVED_CONST_INT + 0]
      || !register_operand (operands[0], E_V4SImode)
      || GET_MODE (x1) != E_V4SImode
      || !nonimmediate_operand (operands[1], E_V2DFmode))
    return -1;
  return 0;
}

int
pattern678 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 1);
  x4 = XVECEXP (x3, 0, 0);
  if (x4 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
    return -1;
  x5 = XVECEXP (x3, 0, 1);
  if (x5 != const_int_rtx[MAX_SAVED_CONST_INT + 1]
      || !register_operand (operands[0], E_V2DImode)
      || GET_MODE (x1) != E_V2DImode
      || GET_MODE (x2) != i1)
    return -1;
  x6 = XEXP (x2, 0);
  if (GET_MODE (x6) != i2)
    return -1;
  return 0;
}

int
pattern686 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  x4 = XEXP (x3, 0);
  x5 = XEXP (x4, 1);
  if (x5 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
    return -1;
  x6 = XEXP (x3, 1);
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
  x9 = XEXP (x2, 0);
  operands[0] = x9;
  if (!register_operand (operands[0], E_QImode)
      || GET_MODE (x3) != E_QImode)
    return -1;
  x10 = XEXP (x4, 0);
  operands[1] = x10;
  x11 = XEXP (x4, 2);
  operands[2] = x11;
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
pattern700 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  switch (GET_MODE (operands[0]))
    {
    case E_QImode:
      if (!register_operand (operands[0], E_QImode)
          || GET_MODE (x1) != E_QImode
          || !register_operand (operands[1], E_QImode))
        return -1;
      return 0;

    case E_HImode:
      if (!register_operand (operands[0], E_HImode)
          || GET_MODE (x1) != E_HImode
          || !register_operand (operands[1], E_HImode))
        return -1;
      return 1;

    case E_SImode:
      if (!register_operand (operands[0], E_SImode)
          || GET_MODE (x1) != E_SImode
          || !register_operand (operands[1], E_SImode))
        return -1;
      return 2;

    case E_DImode:
      if (!register_operand (operands[0], E_DImode)
          || GET_MODE (x1) != E_DImode
          || !register_operand (operands[1], E_DImode))
        return -1;
      return 3;

    default:
      return -1;
    }
}

int
pattern711 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 2);
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) != REG
      || REGNO (x3) != 17
      || GET_MODE (x3) != E_CCmode)
    return -1;
  x4 = XVECEXP (x1, 0, 0);
  x5 = XEXP (x4, 0);
  operands[0] = x5;
  if (!register_operand (operands[0], E_SImode))
    return -1;
  x6 = XEXP (x4, 1);
  x7 = XEXP (x6, 0);
  operands[1] = x7;
  if (!nonimmediate_operand (operands[1], E_SImode))
    return -1;
  x8 = XVECEXP (x1, 0, 1);
  x9 = XEXP (x8, 0);
  operands[2] = x9;
  if (!scratch_operand (operands[2], E_SImode))
    return -1;
  return 0;
}

int
pattern719 (rtx x1, machine_mode i1, machine_mode i2)
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
      || pattern718 (x1, 
i1, 
i2) != 0)
    return -1;
  return 0;
}

int
pattern727 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  if (!rtx_equal_p (x3, operands[0]))
    return -1;
  x4 = XEXP (x1, 0);
  if (!rtx_equal_p (x4, operands[0]))
    return -1;
  x5 = PATTERN (peep2_next_insn (2));
  if (GET_CODE (x5) != SET)
    return -1;
  x6 = XEXP (x5, 1);
  if (!rtx_equal_p (x6, operands[0]))
    return -1;
  x7 = PATTERN (peep2_next_insn (3));
  if (GET_CODE (x7) != SET)
    return -1;
  return 0;
}

int
pattern733 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i2)
      || GET_MODE (x1) != i2
      || !register_operand (operands[1], i1)
      || !vector_operand (operands[2], i1))
    return -1;
  return 0;
}

int
pattern737 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 2);
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) != EQ)
    return -1;
  x4 = XEXP (x3, 0);
  operands[3] = x4;
  x5 = XEXP (x3, 1);
  operands[4] = x5;
  x6 = XEXP (x2, 1);
  operands[5] = x6;
  switch (GET_MODE (operands[0]))
    {
    case E_V8QImode:
      return pattern736 (x1, 
E_V8QImode); /* [-1, 0] */

    case E_V4QImode:
      if (pattern736 (x1, 
E_V4QImode) != 0)
        return -1;
      return 1;

    case E_V2QImode:
      if (pattern736 (x1, 
E_V2QImode) != 0)
        return -1;
      return 2;

    case E_V2HImode:
      if (pattern736 (x1, 
E_V2HImode) != 0)
        return -1;
      return 3;

    default:
      return -1;
    }
}

int
pattern749 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  if (!nonimmediate_operand (operands[0], i1)
      || GET_MODE (x1) != i1)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != i1
      || !nonimmediate_operand (operands[1], i1))
    return -1;
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) != i1
      || !x86_64_immediate_operand (operands[2], i1))
    return -1;
  return 0;
}

int
pattern758 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  if (!nonimmediate_operand (operands[0], i2)
      || GET_MODE (x1) != i2
      || !nonimmediate_operand (operands[1], i2))
    return -1;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  operands[2] = x3;
  if (!nonimmediate_operand (operands[2], i1))
    return -1;
  return 0;
}

int
pattern766 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1)
    return -1;
  switch (GET_MODE (operands[1]))
    {
    case E_HFmode:
      if (!nonimmediate_operand (operands[1], E_HFmode))
        return -1;
      return 0;

    case E_SFmode:
      if (!nonimmediate_operand (operands[1], E_SFmode))
        return -1;
      return 1;

    case E_DFmode:
      if (!nonimmediate_operand (operands[1], E_DFmode))
        return -1;
      return 2;

    default:
      return -1;
    }
}

int
pattern774 (rtx x1, machine_mode i1, machine_mode i2, machine_mode i3)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != i1
      || !vector_operand (operands[1], i3)
      || !nonimm_or_0_operand (operands[2], i1)
      || !register_operand (operands[3], i2))
    return -1;
  return 0;
}

int
pattern780 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 2);
  if (x3 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
    return -1;
  x4 = XEXP (x2, 0);
  x5 = XEXP (x4, 0);
  x6 = XEXP (x5, 0);
  operands[1] = x6;
  x7 = XEXP (x5, 1);
  operands[2] = x7;
  x8 = XEXP (x4, 1);
  operands[3] = x8;
  x9 = XEXP (x4, 2);
  operands[4] = x9;
  if (!register_operand (operands[4], E_QImode))
    return -1;
  x10 = XVECEXP (x1, 0, 1);
  operands[5] = x10;
  if (!const48_operand (operands[5], E_SImode))
    return -1;
  return pattern778 (x1); /* [-1, 2] */
}

int
pattern797 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i2)
      || GET_MODE (x1) != i2
      || !nonimmediate_operand (operands[1], i1)
      || !nonimm_or_0_operand (operands[2], i1))
    return -1;
  return 0;
}

int
pattern800 (machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || !ix86_comparison_int_operator (operands[1], i1)
      || !register_operand (operands[2], i1)
      || !nonimmediate_operand (operands[3], i1))
    return -1;
  return 0;
}

int
pattern808 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6;
  int res ATTRIBUTE_UNUSED;
  if (!movq_parallel (operands[3], E_VOIDmode))
    return -1;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  operands[1] = x3;
  x4 = XEXP (x2, 1);
  operands[2] = x4;
  x5 = XEXP (x1, 1);
  x6 = XVECEXP (x5, 0, 0);
  operands[4] = x6;
  if (!const_int_operand (operands[4], E_VOIDmode))
    return -1;
  switch (GET_MODE (operands[0]))
    {
    case E_V64QImode:
      return pattern804 (x1, 
E_V64QImode, 
E_V128QImode); /* [-1, 0] */

    case E_V32QImode:
      if (pattern804 (x1, 
E_V32QImode, 
E_V64QImode) != 0)
        return -1;
      return 1;

    case E_V16QImode:
      if (pattern804 (x1, 
E_V16QImode, 
E_V32QImode) != 0)
        return -1;
      return 2;

    case E_V32HImode:
      if (pattern804 (x1, 
E_V32HImode, 
E_V64HImode) != 0)
        return -1;
      return 3;

    case E_V16HImode:
      if (pattern804 (x1, 
E_V16HImode, 
E_V32HImode) != 0)
        return -1;
      return 4;

    case E_V8HImode:
      if (pattern804 (x1, 
E_V8HImode, 
E_V16HImode) != 0)
        return -1;
      return 5;

    default:
      return -1;
    }
}

int
pattern823 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) != E_XFmode)
    return -1;
  x4 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x4) != USE)
    return -1;
  x5 = XVECEXP (x1, 0, 2);
  if (GET_CODE (x5) != USE
      || !register_operand (operands[0], E_XFmode)
      || !register_operand (operands[1], E_XFmode))
    return -1;
  x6 = XEXP (x4, 0);
  operands[2] = x6;
  if (!memory_operand (operands[2], E_HImode))
    return -1;
  x7 = XEXP (x5, 0);
  operands[3] = x7;
  if (!memory_operand (operands[3], E_HImode))
    return -1;
  return 0;
}

int
pattern830 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1
      || !register_operand (operands[1], i1)
      || !x86_64_nonmemory_operand (operands[2], i1))
    return -1;
  return 0;
}

int
pattern834 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 1);
  x3 = XEXP (x2, 0);
  operands[2] = x3;
  switch (GET_MODE (operands[0]))
    {
    case E_V2SFmode:
      x4 = XVECEXP (x1, 0, 0);
      x5 = XEXP (x4, 1);
      return pattern696 (x5); /* [-1, 0] */

    case E_V2BFmode:
      x4 = XVECEXP (x1, 0, 0);
      x5 = XEXP (x4, 1);
      if (pattern697 (x5, 
E_V2BFmode) != 0)
        return -1;
      return 1;

    case E_V4BFmode:
      x4 = XVECEXP (x1, 0, 0);
      x5 = XEXP (x4, 1);
      if (pattern697 (x5, 
E_V4BFmode) != 0)
        return -1;
      return 2;

    case E_V2HFmode:
      x4 = XVECEXP (x1, 0, 0);
      x5 = XEXP (x4, 1);
      if (pattern697 (x5, 
E_V2HFmode) != 0)
        return -1;
      return 3;

    case E_V4HFmode:
      x4 = XVECEXP (x1, 0, 0);
      x5 = XEXP (x4, 1);
      if (pattern697 (x5, 
E_V4HFmode) != 0)
        return -1;
      return 4;

    case E_V32BFmode:
      x4 = XVECEXP (x1, 0, 0);
      x5 = XEXP (x4, 1);
      if (pattern695 (x5, 
E_V32BFmode) != 0)
        return -1;
      return 5;

    case E_V16BFmode:
      x4 = XVECEXP (x1, 0, 0);
      x5 = XEXP (x4, 1);
      if (pattern695 (x5, 
E_V16BFmode) != 0)
        return -1;
      return 6;

    case E_V8BFmode:
      x4 = XVECEXP (x1, 0, 0);
      x5 = XEXP (x4, 1);
      if (pattern695 (x5, 
E_V8BFmode) != 0)
        return -1;
      return 7;

    case E_V32HFmode:
      x4 = XVECEXP (x1, 0, 0);
      x5 = XEXP (x4, 1);
      if (pattern695 (x5, 
E_V32HFmode) != 0)
        return -1;
      return 8;

    case E_V16HFmode:
      x4 = XVECEXP (x1, 0, 0);
      x5 = XEXP (x4, 1);
      if (pattern695 (x5, 
E_V16HFmode) != 0)
        return -1;
      return 9;

    case E_V8HFmode:
      x4 = XVECEXP (x1, 0, 0);
      x5 = XEXP (x4, 1);
      if (pattern695 (x5, 
E_V8HFmode) != 0)
        return -1;
      return 10;

    case E_V16SFmode:
      x4 = XVECEXP (x1, 0, 0);
      x5 = XEXP (x4, 1);
      if (pattern695 (x5, 
E_V16SFmode) != 0)
        return -1;
      return 11;

    case E_V8SFmode:
      x4 = XVECEXP (x1, 0, 0);
      x5 = XEXP (x4, 1);
      if (pattern695 (x5, 
E_V8SFmode) != 0)
        return -1;
      return 12;

    case E_V4SFmode:
      x4 = XVECEXP (x1, 0, 0);
      x5 = XEXP (x4, 1);
      if (pattern695 (x5, 
E_V4SFmode) != 0)
        return -1;
      return 13;

    case E_V8DFmode:
      x4 = XVECEXP (x1, 0, 0);
      x5 = XEXP (x4, 1);
      if (pattern695 (x5, 
E_V8DFmode) != 0)
        return -1;
      return 14;

    case E_V4DFmode:
      x4 = XVECEXP (x1, 0, 0);
      x5 = XEXP (x4, 1);
      if (pattern695 (x5, 
E_V4DFmode) != 0)
        return -1;
      return 15;

    case E_V2DFmode:
      x4 = XVECEXP (x1, 0, 0);
      x5 = XEXP (x4, 1);
      if (pattern695 (x5, 
E_V2DFmode) != 0)
        return -1;
      return 16;

    default:
      return -1;
    }
}

int
pattern870 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1)
    return -1;
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case E_DImode:
      if (!register_operand (operands[1], E_V64QImode)
          || !nonimmediate_operand (operands[2], E_V64QImode))
        return -1;
      return 0;

    case E_SImode:
      res = pattern869 ();
      if (res >= 0)
        return res + 1; /* [1, 2] */
      return -1;

    case E_HImode:
      res = pattern740 ();
      if (res >= 0)
        return res + 3; /* [3, 5] */
      return -1;

    case E_QImode:
      res = pattern741 ();
      if (res >= 0)
        return res + 6; /* [6, 11] */
      return -1;

    default:
      return -1;
    }
}

int
pattern881 (rtx x1)
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
    case E_SImode:
      return pattern858 (x1, 
E_SImode); /* [-1, 0] */

    case E_DImode:
      if (pattern858 (x1, 
E_DImode) != 0)
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern891 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], E_V8HFmode)
      || GET_MODE (x1) != E_V8HFmode)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != E_V8HFmode
      || !nonimm_or_0_operand (operands[2], E_V8HFmode)
      || !register_operand (operands[3], E_QImode))
    return -1;
  switch (GET_MODE (operands[1]))
    {
    case E_V8HImode:
      if (!vector_operand (operands[1], E_V8HImode))
        return -1;
      return 0;

    case E_V8SImode:
      if (!vector_operand (operands[1], E_V8SImode))
        return -1;
      return 1;

    case E_V8DImode:
      if (!vector_operand (operands[1], E_V8DImode))
        return -1;
      return 2;

    default:
      return -1;
    }
}

int
pattern903 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[3], E_QImode))
    return -1;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  switch (XVECLEN (x4, 0))
    {
    case 8:
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
      if (x12 != const_int_rtx[MAX_SAVED_CONST_INT + 7]
          || GET_MODE (x3) != E_V8QImode
          || !register_operand (operands[1], E_V16QImode))
        return -1;
      switch (GET_MODE (operands[0]))
        {
        case E_V8HImode:
          return pattern134 (x1, 
E_V8HImode); /* [-1, 0] */

        case E_V8SImode:
          if (pattern134 (x1, 
E_V8SImode) != 0)
            return -1;
          return 1;

        case E_V8DImode:
          if (pattern134 (x1, 
E_V8DImode) != 0)
            return -1;
          return 2;

        default:
          return -1;
        }

    case 4:
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
      switch (GET_MODE (operands[0]))
        {
        case E_V4SImode:
          res = pattern902 (x1, 
E_V4SImode);
          if (res >= 0)
            return res + 3; /* [3, 4] */
          return -1;

        case E_V4DImode:
          res = pattern902 (x1, 
E_V4DImode);
          if (res >= 0)
            return res + 5; /* [5, 6] */
          return -1;

        default:
          return -1;
        }

    case 2:
      x5 = XVECEXP (x4, 0, 0);
      if (x5 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
        return -1;
      x6 = XVECEXP (x4, 0, 1);
      if (x6 != const_int_rtx[MAX_SAVED_CONST_INT + 1]
          || !register_operand (operands[0], E_V2DImode)
          || GET_MODE (x1) != E_V2DImode
          || GET_MODE (x2) != E_V2DImode
          || !nonimm_or_0_operand (operands[2], E_V2DImode))
        return -1;
      switch (GET_MODE (x3))
        {
        case E_V2QImode:
          if (!register_operand (operands[1], E_V16QImode))
            return -1;
          return 7;

        case E_V2HImode:
          if (!register_operand (operands[1], E_V8HImode))
            return -1;
          return 8;

        case E_V2SImode:
          if (!register_operand (operands[1], E_V4SImode))
            return -1;
          return 9;

        default:
          return -1;
        }

    default:
      return -1;
    }
}

int
pattern943 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 1);
  x4 = XEXP (x3, 1);
  if (x4 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
    return -1;
  x5 = XEXP (x3, 0);
  operands[3] = x5;
  if (!int_nonimmediate_operand (operands[3], E_VOIDmode))
    return -1;
  switch (GET_MODE (operands[0]))
    {
    case E_QImode:
      return pattern941 (x1, 
E_QImode); /* [-1, 0] */

    case E_HImode:
      if (pattern941 (x1, 
E_HImode) != 0)
        return -1;
      return 1;

    case E_SImode:
      if (pattern942 (x1, 
E_SImode) != 0)
        return -1;
      return 2;

    case E_DImode:
      if (pattern942 (x1, 
E_DImode) != 0)
        return -1;
      return 3;

    default:
      return -1;
    }
}

int
pattern956 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!nonimmediate_operand (operands[0], i1)
      || GET_MODE (x1) != i1
      || !nonimmediate_operand (operands[1], i1)
      || !float_vector_all_ones_operand (operands[2], i1))
    return -1;
  return 0;
}

int
pattern961 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12, x13, x14, x15, x16, x17;
  rtx x18, x19, x20, x21, x22, x23, x24, x25;
  rtx x26, x27, x28, x29, x30, x31, x32, x33;
  rtx x34, x35, x36, x37, x38;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  operands[6] = x2;
  x3 = XEXP (x1, 1);
  operands[7] = x3;
  if (!memory_operand (operands[7], i1))
    return -1;
  x4 = PATTERN (peep2_next_insn (1));
  x5 = XEXP (x4, 1);
  operands[9] = x5;
  if (!memory_operand (operands[9], i1))
    return -1;
  x6 = PATTERN (peep2_next_insn (2));
  if (GET_CODE (x6) != PARALLEL
      || XVECLEN (x6, 0) != 2)
    return -1;
  x7 = XVECEXP (x6, 0, 0);
  if (GET_CODE (x7) != SET)
    return -1;
  x8 = XEXP (x7, 1);
  if (GET_CODE (x8) != COMPARE
      || GET_MODE (x8) != E_CCCmode)
    return -1;
  x9 = XEXP (x8, 0);
  if (GET_CODE (x9) != ZERO_EXTEND
      || GET_MODE (x9) != i2)
    return -1;
  x10 = XEXP (x8, 1);
  if (GET_CODE (x10) != PLUS
      || GET_MODE (x10) != i2)
    return -1;
  x11 = XEXP (x10, 0);
  if (!ix86_carry_flag_operator (x11, i2))
    return -1;
  operands[4] = x11;
  x12 = XEXP (x11, 1);
  if (x12 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
    return -1;
  x13 = XEXP (x10, 1);
  if (GET_CODE (x13) != ZERO_EXTEND
      || GET_MODE (x13) != i2)
    return -1;
  x14 = XEXP (x7, 0);
  if (GET_CODE (x14) != REG
      || REGNO (x14) != 17
      || GET_MODE (x14) != E_CCCmode)
    return -1;
  x15 = XVECEXP (x6, 0, 1);
  if (GET_CODE (x15) != SET)
    return -1;
  x16 = XEXP (x15, 1);
  if (GET_CODE (x16) != MINUS
      || GET_MODE (x16) != i1)
    return -1;
  x17 = XEXP (x16, 0);
  if (GET_CODE (x17) != MINUS
      || GET_MODE (x17) != i1)
    return -1;
  x18 = XEXP (x17, 1);
  if (!ix86_carry_flag_operator (x18, i1))
    return -1;
  operands[5] = x18;
  x19 = XEXP (x18, 1);
  if (x19 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
    return -1;
  x20 = XEXP (x9, 0);
  operands[0] = x20;
  if (!general_reg_operand (operands[0], i1))
    return -1;
  x21 = XEXP (x11, 0);
  operands[3] = x21;
  if (!flags_reg_operand (operands[3], E_VOIDmode))
    return -1;
  x22 = XEXP (x13, 0);
  operands[2] = x22;
  if (!general_reg_operand (operands[2], i1))
    return -1;
  x23 = XEXP (x17, 0);
  if (!rtx_equal_p (x23, operands[0]))
    return -1;
  x24 = XEXP (x18, 0);
  if (!rtx_equal_p (x24, operands[3]))
    return -1;
  x25 = XEXP (x16, 1);
  if (!rtx_equal_p (x25, operands[2]))
    return -1;
  x26 = XEXP (x15, 0);
  if (!rtx_equal_p (x26, operands[0]))
    return -1;
  x27 = PATTERN (peep2_next_insn (3));
  if (GET_CODE (x27) != SET)
    return -1;
  x28 = XEXP (x27, 1);
  switch (GET_CODE (x28))
    {
    case REG:
      if (!rtx_equal_p (x28, operands[0]))
        return -1;
      x29 = XEXP (x27, 0);
      operands[1] = x29;
      if (!memory_operand (operands[1], i1))
        return -1;
      return 0;

    case LTU:
      if (peep2_current_count < 5
          || peep2_current_count < 6
          || GET_MODE (x28) != E_QImode)
        return -1;
      x30 = XEXP (x28, 0);
      if (GET_CODE (x30) != REG
          || REGNO (x30) != 17
          || GET_MODE (x30) != E_CCCmode)
        return -1;
      x31 = XEXP (x28, 1);
      if (x31 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
        return -1;
      x29 = XEXP (x27, 0);
      operands[10] = x29;
      if (!general_reg_operand (operands[10], E_QImode))
        return -1;
      x32 = PATTERN (peep2_next_insn (4));
      if (GET_CODE (x32) != SET)
        return -1;
      x33 = XEXP (x32, 1);
      if (GET_CODE (x33) != ZERO_EXTEND
          || GET_MODE (x33) != i1)
        return -1;
      x34 = XEXP (x32, 0);
      operands[11] = x34;
      if (!general_reg_operand (operands[11], i1))
        return -1;
      x35 = XEXP (x33, 0);
      if (!rtx_equal_p (x35, operands[10]))
        return -1;
      x36 = PATTERN (peep2_next_insn (5));
      if (GET_CODE (x36) != SET)
        return -1;
      x37 = XEXP (x36, 0);
      operands[1] = x37;
      if (!memory_operand (operands[1], i1))
        return -1;
      x38 = XEXP (x36, 1);
      if (!rtx_equal_p (x38, operands[0]))
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern996 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != i1
      || !nonimm_or_0_operand (operands[2], i1)
      || !register_operand (operands[3], E_QImode))
    return -1;
  switch (GET_MODE (operands[1]))
    {
    case E_V8HFmode:
      if (!vector_operand (operands[1], E_V8HFmode))
        return -1;
      return 0;

    case E_V8DFmode:
      if (!vector_operand (operands[1], E_V8DFmode))
        return -1;
      return 1;

    case E_V8SFmode:
      if (!vector_operand (operands[1], E_V8SFmode))
        return -1;
      return 2;

    default:
      return -1;
    }
}

int
pattern1008 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != i1
      || !nonimmediate_operand (operands[2], i2)
      || !const0_operand (operands[1], i1))
    return -1;
  return 0;
}

int
pattern1017 (rtx x1, machine_mode i1, machine_mode i2)
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
      || !vector_all_ones_operand (operands[2], i1)
      || !nonimm_or_0_operand (operands[3], i1)
      || !register_operand (operands[4], i2))
    return -1;
  return 0;
}

int
pattern1024 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], E_V8SFmode)
      || GET_MODE (x1) != E_V8SFmode)
    return -1;
  x2 = XVECEXP (x1, 0, 0);
  if (GET_MODE (x2) != E_V8SFmode)
    return -1;
  switch (GET_MODE (operands[1]))
    {
    case E_V8SImode:
      return 0;

    case E_V8DImode:
      return 1;

    default:
      return -1;
    }
}

int
pattern1035 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12;
  int res ATTRIBUTE_UNUSED;
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
pattern1045 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  x5 = XEXP (x4, 0);
  operands[1] = x5;
  if (!int248_register_operand (operands[1], E_VOIDmode))
    return -1;
  return pattern1044 (x1); /* [-1, 5] */
}

int
pattern1050 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  operands[0] = x2;
  x3 = XEXP (x1, 1);
  x4 = XEXP (x3, 0);
  x5 = XEXP (x4, 0);
  x6 = XEXP (x5, 0);
  operands[1] = x6;
  x7 = XEXP (x5, 1);
  operands[2] = x7;
  x8 = XEXP (x4, 1);
  operands[3] = x8;
  x9 = XEXP (x3, 1);
  if (!rtx_equal_p (x9, operands[1]))
    return -1;
  switch (GET_MODE (operands[0]))
    {
    case E_HImode:
      return pattern1049 (x3, 
E_HImode); /* [-1, 0] */

    case E_SImode:
      if (pattern1049 (x3, 
E_SImode) != 0)
        return -1;
      return 1;

    case E_DImode:
      if (pattern1049 (x3, 
E_DImode) != 0)
        return -1;
      return 2;

    default:
      return -1;
    }
}

int
pattern1058 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) != E_QImode)
    return -1;
  x4 = XEXP (x1, 1);
  operands[3] = x4;
  switch (GET_CODE (x3))
    {
    case SUBREG:
      if (maybe_ne (SUBREG_BYTE (x3), 0))
        return -1;
      x5 = XEXP (x3, 0);
      if (GET_CODE (x5) != AND)
        return -1;
      x6 = XEXP (x5, 0);
      operands[1] = x6;
      if (!int248_register_operand (operands[1], E_VOIDmode))
        return -1;
      x7 = XEXP (x5, 1);
      operands[2] = x7;
      if (!const_int_operand (operands[2], E_VOIDmode))
        return -1;
      switch (GET_MODE (operands[0]))
        {
        case E_SImode:
          return pattern369 (x1, 
E_SImode); /* [-1, 0] */

        case E_DImode:
          if (pattern369 (x1, 
E_DImode) != 0)
            return -1;
          return 1;

        default:
          return -1;
        }

    case AND:
      x5 = XEXP (x3, 0);
      operands[1] = x5;
      if (!register_operand (operands[1], E_QImode))
        return -1;
      x8 = XEXP (x3, 1);
      operands[2] = x8;
      if (!const_int_operand (operands[2], E_QImode))
        return -1;
      switch (GET_MODE (operands[0]))
        {
        case E_SImode:
          if (pattern369 (x1, 
E_SImode) != 0)
            return -1;
          return 2;

        case E_DImode:
          if (pattern369 (x1, 
E_DImode) != 0)
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
pattern1082 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (GET_MODE (x1) != i1
      || !vector_all_ones_operand (operands[3], i1)
      || !const0_operand (operands[4], i1)
      || !register_operand (operands[1], i1)
      || !const0_operand (operands[2], i1))
    return -1;
  return 0;
}

int
pattern1089 (rtx x1, machine_mode i1)
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
pattern1093 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 2);
  if (GET_CODE (x3) != UNSPEC
      || XVECLEN (x3, 0) != 3
      || XINT (x3, 1) != 59
      || GET_MODE (x3) != E_QImode)
    return -1;
  x4 = XVECEXP (x3, 0, 2);
  if (x4 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
    return -1;
  x5 = XEXP (x2, 0);
  operands[3] = x5;
  x6 = XEXP (x2, 1);
  operands[4] = x6;
  x7 = XVECEXP (x3, 0, 0);
  operands[1] = x7;
  x8 = XVECEXP (x3, 0, 1);
  operands[2] = x8;
  switch (GET_MODE (x1))
    {
    case E_V8SFmode:
      return pattern1092 (x2, 
E_V8SImode); /* [-1, 0] */

    case E_V4SFmode:
      if (pattern1092 (x2, 
E_V4SImode) != 0)
        return -1;
      return 1;

    case E_V4DFmode:
      if (pattern1092 (x2, 
E_V4DImode) != 0)
        return -1;
      return 2;

    case E_V2DFmode:
      if (pattern1092 (x2, 
E_V2DImode) != 0)
        return -1;
      return 3;

    default:
      return -1;
    }
}

int
pattern1103 (rtx x1, machine_mode i1, machine_mode i2, machine_mode i3)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i2)
      || GET_MODE (x1) != i2)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != i2
      || !nonimmediate_operand (operands[1], i2)
      || !register_operand (operands[2], i3)
      || !nonimm_or_0_operand (operands[3], i2)
      || !register_operand (operands[4], i1))
    return -1;
  return 0;
}

int
pattern1110 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) != E_V8HFmode)
    return -1;
  x4 = XEXP (x2, 2);
  if (GET_CODE (x4) != UNSPEC
      || XVECLEN (x4, 0) != 1
      || XINT (x4, 1) != 223
      || GET_MODE (x4) != E_QImode)
    return -1;
  x5 = XEXP (x1, 2);
  if (XWINT (x5, 0) != 3L
      || !register_operand (operands[0], E_V8HFmode)
      || GET_MODE (x1) != E_V8HFmode
      || GET_MODE (x2) != E_V8HFmode
      || !vector_operand (operands[1], E_V8HFmode)
      || !vector_operand (operands[2], E_V8HFmode)
      || !vector_operand (operands[3], E_V8HFmode))
    return -1;
  x6 = XVECEXP (x4, 0, 0);
  if (!register_operand (x6, E_QImode))
    return -1;
  x7 = XEXP (x1, 1);
  if (!rtx_equal_p (x7, operands[2]))
    return -1;
  x8 = XEXP (x2, 1);
  switch (GET_CODE (x8))
    {
    case CONST_INT:
    case CONST_DOUBLE:
    case CONST_VECTOR:
      operands[4] = x8;
      if (!const0_operand (operands[4], E_V8HFmode))
        return -1;
      operands[5] = x6;
      return 0;

    case REG:
    case SUBREG:
    case MEM:
      if (!rtx_equal_p (x8, operands[1]))
        return -1;
      operands[4] = x6;
      return 1;

    default:
      return -1;
    }
}

int
pattern1127 (rtx x1, machine_mode i1, machine_mode i2, machine_mode i3)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i3)
      || GET_MODE (x1) != i3)
    return -1;
  x2 = XVECEXP (x1, 0, 0);
  if (GET_MODE (x2) != i3)
    return -1;
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) != i3
      || !register_operand (operands[1], i3)
      || !register_operand (operands[2], i3)
      || !register_operand (operands[3], i3)
      || !const0_operand (operands[4], i3))
    return -1;
  x4 = XEXP (x2, 2);
  if (GET_MODE (x4) != i2
      || !register_operand (operands[5], i1))
    return -1;
  return 0;
}

int
pattern1136 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XVECEXP (x2, 0, 2);
  operands[3] = x3;
  if (!const_4_or_8_to_11_operand (operands[4], E_SImode))
    return -1;
  switch (GET_MODE (operands[0]))
    {
    case E_V32HFmode:
      return pattern1135 (x1, 
E_V32HFmode); /* [-1, 0] */

    case E_V16HFmode:
      if (pattern1135 (x1, 
E_V16HFmode) != 0)
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern1144 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1
      || !register_operand (operands[1], i1)
      || !palignr_operand (operands[2], E_VOIDmode))
    return -1;
  return 0;
}

int
pattern1152 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  switch (GET_MODE (operands[0]))
    {
    case E_HImode:
      if (!register_operand (operands[0], E_HImode)
          || GET_MODE (x1) != E_HImode)
        return -1;
      x2 = XEXP (x1, 0);
      if (GET_MODE (x2) != E_QImode)
        return -1;
      return 0;

    case E_SImode:
      if (!register_operand (operands[0], E_SImode)
          || GET_MODE (x1) != E_SImode)
        return -1;
      x2 = XEXP (x1, 0);
      switch (GET_MODE (x2))
        {
        case E_QImode:
          return 1;

        case E_HImode:
          return 2;

        default:
          return -1;
        }

    case E_DImode:
      if (!register_operand (operands[0], E_DImode)
          || GET_MODE (x1) != E_DImode)
        return -1;
      x2 = XEXP (x1, 0);
      switch (GET_MODE (x2))
        {
        case E_QImode:
          return 3;

        case E_HImode:
          return 4;

        case E_SImode:
          return 5;

        default:
          return -1;
        }

    default:
      return -1;
    }
}

int
pattern1167 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  if (maybe_ne (SUBREG_BYTE (x3), 0)
      || GET_MODE (x3) != E_QImode)
    return -1;
  x4 = XEXP (x1, 0);
  operands[0] = x4;
  return pattern1166 (x2, 
i1); /* [-1, 2] */
}

int
pattern1175 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != E_SImode
      || !register_operand (operands[0], E_DImode)
      || GET_MODE (x1) != E_DImode)
    return -1;
  x3 = XEXP (x2, 0);
  operands[1] = x3;
  if (!nonimmediate_operand (operands[1], E_SImode))
    return -1;
  x4 = XEXP (x2, 1);
  operands[2] = x4;
  if (!const_int_operand (operands[2], E_QImode))
    return -1;
  return 0;
}

int
pattern1183 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1
      || !nonimmediate_operand (operands[2], i1)
      || !nonimmediate_operand (operands[3], i1))
    return -1;
  return pattern1182 (); /* [-1, 3] */
}

int
pattern1188 (rtx x1, machine_mode i1)
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
  if (GET_MODE (x3) != i1
      || !regmem_or_bitnot_regmem_operand (operands[1], i1)
      || !regmem_or_bitnot_regmem_operand (operands[2], i1)
      || !regmem_or_bitnot_regmem_operand (operands[3], i1))
    return -1;
  x4 = XEXP (x1, 1);
  operands[4] = x4;
  if (!regmem_or_bitnot_regmem_operand (operands[4], i1))
    return -1;
  return 0;
}

int
pattern1197 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11;
  int res ATTRIBUTE_UNUSED;
  if (!nonimmediate_gr_operand (operands[1], i1))
    return -1;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) != UNSPEC
      || XVECLEN (x3, 0) != 2
      || XINT (x3, 1) != 40
      || GET_MODE (x3) != E_CCCmode)
    return -1;
  x4 = XVECEXP (x3, 0, 1);
  if (x4 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
    return -1;
  x5 = XEXP (x2, 0);
  if (GET_CODE (x5) != REG
      || REGNO (x5) != 17
      || GET_MODE (x5) != E_CCCmode)
    return -1;
  x6 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x6) != SET)
    return -1;
  x7 = XEXP (x6, 1);
  if (GET_CODE (x7) != NEG
      || GET_MODE (x7) != i1)
    return -1;
  x8 = XVECEXP (x3, 0, 0);
  operands[2] = x8;
  if (!general_reg_operand (operands[2], i1))
    return -1;
  x9 = XEXP (x7, 0);
  if (!rtx_equal_p (x9, operands[2]))
    return -1;
  x10 = XEXP (x6, 0);
  if (!rtx_equal_p (x10, operands[2]))
    return -1;
  x11 = PATTERN (peep2_next_insn (2));
  return pattern1196 (x11, 
i1); /* [-1, 0] */
}

int
pattern1210 (rtx x1, machine_mode i1, machine_mode i2)
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
      || !nonimm_or_0_operand (operands[3], i1)
      || !register_operand (operands[4], i2))
    return -1;
  return 0;
}

int
pattern1218 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1)
    return -1;
  x2 = XVECEXP (x1, 0, 0);
  if (GET_MODE (x2) != i1
      || !nonimmediate_operand (operands[1], i1))
    return -1;
  return 0;
}

int
pattern1224 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1)
    return -1;
  x2 = XVECEXP (x1, 0, 0);
  if (GET_MODE (x2) != i1)
    return -1;
  switch (GET_MODE (operands[1]))
    {
    case E_V8HFmode:
      if (!register_operand (operands[1], E_V8HFmode))
        return -1;
      return 0;

    case E_V8DFmode:
      if (!register_operand (operands[1], E_V8DFmode))
        return -1;
      return 1;

    case E_V8SFmode:
      if (!register_operand (operands[1], E_V8SFmode))
        return -1;
      return 2;

    default:
      return -1;
    }
}

int
pattern1234 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  operands[1] = x3;
  x4 = XEXP (x2, 1);
  operands[2] = x4;
  if (!const_int_operand (operands[2], E_QImode))
    return -1;
  switch (GET_MODE (operands[0]))
    {
    case E_SImode:
      return pattern1233 (x1, 
E_DImode, 
E_SImode); /* [-1, 0] */

    case E_DImode:
      if (pattern1233 (x1, 
E_TImode, 
E_DImode) != 0)
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern1238 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 1);
  x3 = XEXP (x2, 1);
  x4 = XEXP (x3, 0);
  if (!rtx_equal_p (x4, operands[1]))
    return -1;
  x5 = XVECEXP (x1, 0, 0);
  x6 = XEXP (x5, 1);
  x7 = XEXP (x6, 0);
  switch (GET_MODE (x7))
    {
    case E_QImode:
      if (!nonimmediate_operand (operands[1], E_QImode)
          || !nonimmediate_operand (operands[0], E_QImode)
          || GET_MODE (x3) != E_QImode)
        return -1;
      return 0;

    case E_HImode:
      if (!nonimmediate_operand (operands[1], E_HImode)
          || !nonimmediate_operand (operands[0], E_HImode)
          || GET_MODE (x3) != E_HImode)
        return -1;
      return 1;

    case E_SImode:
      if (!nonimmediate_operand (operands[1], E_SImode)
          || !nonimmediate_operand (operands[0], E_SImode)
          || GET_MODE (x3) != E_SImode)
        return -1;
      return 2;

    case E_DImode:
      if (!nonimmediate_operand (operands[1], E_DImode)
          || !nonimmediate_operand (operands[0], E_DImode)
          || GET_MODE (x3) != E_DImode)
        return -1;
      return 3;

    default:
      return -1;
    }
}

int
pattern1249 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x2) != CLOBBER)
    return -1;
  x3 = XVECEXP (x1, 0, 2);
  if (GET_CODE (x3) != CLOBBER)
    return -1;
  x4 = XVECEXP (x1, 0, 3);
  x5 = XEXP (x4, 0);
  if (GET_CODE (x5) != REG
      || REGNO (x5) != 17
      || GET_MODE (x5) != E_CCmode
      || !register_operand (operands[0], E_SImode))
    return -1;
  x6 = XVECEXP (x1, 0, 0);
  x7 = XEXP (x6, 1);
  x8 = XVECEXP (x7, 0, 0);
  operands[1] = x8;
  if (!register_operand (operands[1], E_SImode))
    return -1;
  x9 = XVECEXP (x7, 0, 1);
  operands[2] = x9;
  return 0;
}

int
pattern1260 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (GET_MODE (x1) != i1
      || !fcmov_comparison_operator (operands[1], E_VOIDmode)
      || !nonimmediate_operand (operands[2], i1)
      || !nonimmediate_operand (operands[3], i1))
    return -1;
  return 0;
}

int
pattern1265 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  int res ATTRIBUTE_UNUSED;
  if (!int248_register_operand (operands[2], E_VOIDmode))
    return -1;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  operands[1] = x3;
  if (!nonimmediate_operand (operands[1], E_QImode))
    return -1;
  x4 = XEXP (x1, 0);
  switch (GET_CODE (x4))
    {
    case STRICT_LOW_PART:
      x5 = XEXP (x4, 0);
      operands[0] = x5;
      if (!register_operand (operands[0], E_QImode))
        return -1;
      return pattern1264 (); /* [-1, 2] */

    case REG:
    case SUBREG:
    case MEM:
      operands[0] = x4;
      if (!nonimmediate_operand (operands[0], E_QImode))
        return -1;
      res = pattern1264 ();
      if (res >= 0)
        return res + 3; /* [3, 5] */
      return -1;

    default:
      return -1;
    }
}

int
pattern1281 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i2)
      || GET_MODE (x1) != i2)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != i2
      || !register_operand (operands[1], i2)
      || !bcst_vector_operand (operands[2], i2)
      || !nonimm_or_0_operand (operands[4], i2)
      || !register_operand (operands[5], i1))
    return -1;
  return 0;
}

int
pattern1289 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i2)
      || GET_MODE (x1) != i2
      || !vector_all_ones_operand (operands[1], i2)
      || !const0_operand (operands[2], i2)
      || !register_operand (operands[3], i1)
      || !nonimmediate_operand (operands[4], i1))
    return -1;
  return 0;
}

int
pattern1297 (rtx x1, machine_mode i1, machine_mode i2)
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
      || !vector_operand (operands[2], i1)
      || !register_operand (operands[4], i2))
    return -1;
  return 0;
}

int
pattern1306 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], E_V16HFmode)
      || GET_MODE (x1) != E_V16HFmode)
    return -1;
  x2 = XVECEXP (x1, 0, 0);
  if (GET_MODE (x2) != E_V16HFmode)
    return -1;
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) != E_V16HFmode
      || !nonimm_or_0_operand (operands[2], E_V16HFmode)
      || !register_operand (operands[3], E_HImode))
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
pattern1317 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  if (maybe_ne (SUBREG_BYTE (x2), 0))
    return -1;
  x3 = XEXP (x2, 0);
  operands[0] = x3;
  if (!register_operand (operands[0], E_QImode))
    return -1;
  x4 = XEXP (x1, 1);
  x5 = XEXP (x4, 2);
  operands[2] = x5;
  if (!register_operand (operands[2], E_QImode))
    return -1;
  switch (GET_MODE (x2))
    {
    case E_SImode:
      if (GET_MODE (x4) != E_SImode
          || !register_operand (operands[1], E_SImode))
        return -1;
      return 0;

    case E_DImode:
      if (GET_MODE (x4) != E_DImode
          || !register_operand (operands[1], E_DImode))
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern1326 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1
      || !nonimmediate_operand (operands[1], i1)
      || !x86_64_general_operand (operands[2], i1))
    return -1;
  return 0;
}

int
pattern1331 (rtx x1, machine_mode i1)
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
      || !x86_64_general_operand (operands[2], i1))
    return -1;
  return 0;
}

int
pattern1338 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (!const_int_operand (operands[2], E_QImode))
    return -1;
  x2 = XEXP (x1, 0);
  operands[1] = x2;
  return pattern404 (x1); /* [-1, 1] */
}

int
pattern1343 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) != CALL)
    return -1;
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) != MEM
      || GET_MODE (x3) != E_QImode)
    return -1;
  x4 = XEXP (x1, 0);
  operands[2] = x4;
  x5 = XEXP (x2, 1);
  operands[3] = x5;
  x6 = XEXP (x3, 0);
  if (!rtx_equal_p (x6, operands[0]))
    return -1;
  return 0;
}

int
pattern1351 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1
      || !nonimmediate_operand (operands[1], i1)
      || !const_int_operand (operands[2], i1))
    return -1;
  return 0;
}

int
pattern1357 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (!nonimmediate_operand (operands[0], i1)
      || GET_MODE (x1) != i1)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != i1
      || !ix86_carry_flag_operator (operands[4], i1)
      || !nonimmediate_operand (operands[1], i1)
      || !general_operand (operands[2], i1))
    return -1;
  return 0;
}

int
pattern1365 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1
      || !nonimmediate_operand (operands[2], i1)
      || !nonimmediate_operand (operands[3], i1))
    return -1;
  return pattern1364 (); /* [-1, 3] */
}

int
pattern1368 (rtx x1, machine_mode i1, machine_mode i2)
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
      || !register_operand (operands[2], i2)
      || !nonimmediate_operand (operands[3], i2)
      || !const0_operand (operands[4], i1))
    return -1;
  return 0;
}

int
pattern1377 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != i1
      || !nonimmediate_operand (operands[1], i1)
      || !nonimmediate_operand (operands[2], i1)
      || !nonimmediate_operand (operands[3], i1))
    return -1;
  return 0;
}

int
pattern1385 (rtx x1, machine_mode i1, machine_mode i2)
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
      || !bcst_vector_operand (operands[1], i1)
      || pattern1372 (
i1, 
i2) != 0)
    return -1;
  return 0;
}

int
pattern1394 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != i1
      || !nonimmediate_operand (operands[1], i1)
      || !nonimm_or_0_operand (operands[4], i1)
      || !register_operand (operands[5], i2))
    return -1;
  return 0;
}

int
pattern1403 (rtx x1, machine_mode i1, machine_mode i2)
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
  if (GET_MODE (x4) != i2
      || !nonimmediate_operand (operands[1], i2)
      || !register_operand (operands[2], i1))
    return -1;
  return 0;
}

int
pattern1412 (rtx x1, machine_mode i1)
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
  if (GET_MODE (x3) != i1
      || !register_operand (operands[1], i1)
      || !register_operand (operands[2], i1))
    return -1;
  x4 = XEXP (x2, 2);
  if (GET_MODE (x4) != i1
      || !register_operand (operands[3], i1))
    return -1;
  return 0;
}

int
pattern1421 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 1);
  x4 = XEXP (x3, 0);
  if (GET_CODE (x4) != REG
      || REGNO (x4) != 17)
    return -1;
  x5 = XEXP (x3, 1);
  if (x5 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
    return -1;
  return pattern1152 (x1); /* [-1, 5] */
}

int
pattern1427 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (GET_MODE (x1) != i1
      || !register_operand (operands[1], i1)
      || !nonimmediate_operand (operands[2], i1)
      || !scratch_operand (operands[0], i1))
    return -1;
  return 0;
}

int
pattern1435 (rtx x1, machine_mode i1)
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
pattern1442 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[2], i1)
      || !register_operand (operands[0], i1))
    return -1;
  x2 = XVECEXP (x1, 0, 1);
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) != i1)
    return -1;
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) != i1
      || !register_operand (operands[5], i1)
      || !register_operand (operands[3], i1)
      || !register_operand (operands[1], i1))
    return -1;
  x5 = XVECEXP (x1, 0, 2);
  x6 = XEXP (x5, 1);
  if (GET_MODE (x6) != i1)
    return -1;
  x7 = XEXP (x6, 0);
  if (GET_MODE (x7) != i1
      || !register_operand (operands[4], i1))
    return -1;
  return 0;
}

int
pattern1454 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 2);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  operands[1] = x4;
  x5 = XEXP (x3, 1);
  operands[2] = x5;
  if (!const_int_operand (operands[2], E_VOIDmode))
    return -1;
  switch (GET_MODE (x1))
    {
    case E_SImode:
      return pattern1453 (x3, 
E_SImode); /* [-1, 2] */

    case E_DImode:
      res = pattern1453 (x3, 
E_DImode);
      if (res >= 0)
        return res + 3; /* [3, 5] */
      return -1;

    default:
      return -1;
    }
}

int
pattern1464 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1
      || !nonimmediate_operand (operands[1], i1)
      || !nonimmediate_operand (operands[2], i1))
    return -1;
  x2 = XEXP (x1, 2);
  if (GET_MODE (x2) != i2
      || !nonimmediate_operand (operands[3], i1)
      || !nonimmediate_operand (operands[4], i1))
    return -1;
  return 0;
}

int
pattern1473 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 12);
  if (x2 != const_int_rtx[MAX_SAVED_CONST_INT + 12])
    return -1;
  x3 = XVECEXP (x1, 0, 13);
  if (x3 != const_int_rtx[MAX_SAVED_CONST_INT + 13])
    return -1;
  x4 = XVECEXP (x1, 0, 14);
  if (x4 != const_int_rtx[MAX_SAVED_CONST_INT + 14])
    return -1;
  x5 = XVECEXP (x1, 0, 15);
  if (x5 != const_int_rtx[MAX_SAVED_CONST_INT + 15])
    return -1;
  return 0;
}

int
pattern1480 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], E_V8SImode)
      || GET_MODE (x1) != E_V8SImode)
    return -1;
  x2 = XVECEXP (x1, 0, 0);
  if (GET_MODE (x2) != E_V8SImode)
    return -1;
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) != E_V8SImode
      || !nonimm_or_0_operand (operands[2], E_V8SImode)
      || !register_operand (operands[3], E_QImode))
    return -1;
  switch (GET_MODE (operands[1]))
    {
    case E_V8HFmode:
      if (!register_operand (operands[1], E_V8HFmode))
        return -1;
      return 0;

    case E_V8SFmode:
      if (!register_operand (operands[1], E_V8SFmode))
        return -1;
      return 1;

    case E_V8DFmode:
      if (!register_operand (operands[1], E_V8DFmode))
        return -1;
      return 2;

    default:
      return -1;
    }
}

int
pattern1491 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 4);
  operands[2] = x2;
  if (!const_4_to_7_operand (operands[2], E_VOIDmode))
    return -1;
  x3 = XVECEXP (x1, 0, 5);
  operands[3] = x3;
  if (!const_4_to_7_operand (operands[3], E_VOIDmode))
    return -1;
  x4 = XVECEXP (x1, 0, 6);
  operands[4] = x4;
  if (!const_4_to_7_operand (operands[4], E_VOIDmode))
    return -1;
  x5 = XVECEXP (x1, 0, 7);
  operands[5] = x5;
  if (!const_4_to_7_operand (operands[5], E_VOIDmode))
    return -1;
  return 0;
}

int
pattern1503 (rtx x1, rtx_code i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 1);
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) != i1)
    return -1;
  x4 = XVECEXP (x1, 0, 0);
  x5 = XEXP (x4, 0);
  operands[0] = x5;
  x6 = XEXP (x4, 1);
  x7 = XEXP (x6, 0);
  x8 = XEXP (x7, 0);
  operands[2] = x8;
  if (!register_operand (operands[2], E_SImode))
    return -1;
  x9 = XEXP (x7, 1);
  operands[3] = x9;
  if (!nonimmediate_operand (operands[3], E_SImode))
    return -1;
  x10 = XEXP (x2, 0);
  operands[1] = x10;
  return pattern1502 (x1); /* [-1, 1] */
}

int
pattern1515 (rtx x1, machine_mode i1, machine_mode i2, machine_mode i3)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i2)
      || GET_MODE (x1) != i2)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != i2
      || !register_operand (operands[1], i2)
      || !register_operand (operands[2], i2)
      || !nonimmediate_operand (operands[3], i1)
      || !register_operand (operands[5], i3))
    return -1;
  return 0;
}

int
pattern1526 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!nonimmediate_operand (operands[0], i1)
      || GET_MODE (x1) != i1
      || !ix86_carry_flag_unset_operator (operands[2], i1)
      || !nonimmediate_operand (operands[1], i1))
    return -1;
  return 0;
}

int
pattern1533 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  switch (GET_MODE (operands[0]))
    {
    case E_V8SFmode:
      if (!nonimmediate_operand (operands[0], E_V8SFmode)
          || GET_MODE (x1) != E_V8SFmode
          || !nonimmediate_operand (operands[1], E_V16SFmode))
        return -1;
      return 0;

    case E_V8SImode:
      if (!nonimmediate_operand (operands[0], E_V8SImode)
          || GET_MODE (x1) != E_V8SImode
          || !nonimmediate_operand (operands[1], E_V16SImode))
        return -1;
      return 1;

    case E_V8HImode:
      if (!nonimmediate_operand (operands[0], E_V8HImode)
          || GET_MODE (x1) != E_V8HImode
          || !nonimmediate_operand (operands[1], E_V16HImode))
        return -1;
      return 2;

    case E_V8HFmode:
      if (!nonimmediate_operand (operands[0], E_V8HFmode)
          || GET_MODE (x1) != E_V8HFmode
          || !nonimmediate_operand (operands[1], E_V16HFmode))
        return -1;
      return 3;

    case E_V8BFmode:
      if (!nonimmediate_operand (operands[0], E_V8BFmode)
          || GET_MODE (x1) != E_V8BFmode
          || !nonimmediate_operand (operands[1], E_V16BFmode))
        return -1;
      return 4;

    default:
      return -1;
    }
}

int
pattern1550 (rtx x1, machine_mode i1)
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
      || !nonimm_or_0_operand (operands[3], i1)
      || !register_operand (operands[2], i1))
    return -1;
  return 0;
}

int
pattern1559 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], E_V4SFmode)
      || GET_MODE (x1) != E_V4SFmode)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != E_V8SFmode
      || !vector_operand (operands[1], E_V4SFmode))
    return -1;
  x3 = XEXP (x2, 1);
  if (!rtx_equal_p (x3, operands[1]))
    return -1;
  return 0;
}

int
pattern1568 (rtx x1)
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

    case E_DImode:
      if (!register_operand (operands[0], E_DImode)
          || GET_MODE (x1) != E_DImode)
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern1577 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[1], i1)
      || GET_MODE (x1) != i2)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != i2)
    return -1;
  x3 = XEXP (x1, 1);
  if (GET_MODE (x3) != i2
      || !x86_64_sext_operand (operands[2], i1))
    return -1;
  return 0;
}

int
pattern1581 (rtx x1, machine_mode i1, machine_mode i2)
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
      || !register_operand (operands[1], i1)
      || !vector_operand (operands[2], i1)
      || !nonimm_or_0_operand (operands[3], i1))
    return -1;
  return 0;
}

int
pattern1590 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[2], i2)
      || GET_MODE (x1) != i2
      || !register_operand (operands[3], i2)
      || !const0_operand (operands[4], i2)
      || !register_operand (operands[5], i1))
    return -1;
  return 0;
}

int
pattern1598 (rtx x1, machine_mode i1, machine_mode i2)
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
  if (GET_MODE (x4) != i1
      || !register_operand (operands[2], i1))
    return -1;
  x5 = XEXP (x3, 2);
  if (GET_MODE (x5) != i1
      || !register_operand (operands[4], i2))
    return -1;
  return 0;
}

int
pattern1608 (machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!vsib_address_operand (operands[3], i1))
    return -1;
  switch (GET_MODE (operands[2]))
    {
    case E_V8SImode:
      if (!register_operand (operands[2], E_V8SImode))
        return -1;
      return 0;

    case E_V8DImode:
      if (!register_operand (operands[2], E_V8DImode))
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern1616 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != i2
      || !register_operand (operands[1], i1))
    return -1;
  x3 = XEXP (x2, 1);
  operands[2] = x3;
  if (!nonimmediate_operand (operands[2], i1))
    return -1;
  return 0;
}

int
pattern1624 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (!nonimmediate_operand (operands[0], i1)
      || GET_MODE (x1) != i1)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != i1
      || !ix86_carry_flag_operator (operands[4], i1)
      || !nonimmediate_operand (operands[1], i1)
      || !x86_64_general_operand (operands[2], i1))
    return -1;
  return 0;
}

int
pattern1631 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != i2)
    return -1;
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) != i2)
    return -1;
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) != i2)
    return -1;
  x5 = XEXP (x4, 0);
  if (GET_MODE (x5) != i2
      || !register_mmxmem_operand (operands[1], i1))
    return -1;
  x6 = XEXP (x4, 1);
  if (GET_MODE (x6) != i2
      || !register_mmxmem_operand (operands[2], i1))
    return -1;
  return 0;
}

int
pattern1645 (rtx x1, machine_mode i1)
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
      || !nonimmediate_operand (operands[1], i1)
      || !register_operand (operands[2], i1)
      || !register_operand (operands[3], i1))
    return -1;
  return 0;
}

int
pattern1651 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i2)
      || GET_MODE (x1) != i2
      || !register_operand (operands[7], E_QImode)
      || !vsib_mem_operator (operands[6], i1))
    return -1;
  return 0;
}

int
pattern1659 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[2], i1)
      || !register_operand (operands[3], i1)
      || !register_operand (operands[0], i1))
    return -1;
  x2 = XVECEXP (x1, 0, 1);
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) != i1
      || !register_operand (operands[1], i1))
    return -1;
  x4 = XVECEXP (x1, 0, 2);
  x5 = XEXP (x4, 1);
  if (GET_MODE (x5) != i1)
    return -1;
  return 0;
}

int
pattern1670 ()
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
pattern1680 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  if (GET_CODE (x2) != STRICT_LOW_PART)
    return -1;
  x3 = XEXP (x2, 0);
  operands[0] = x3;
  if (!register_operand (operands[0], E_QImode))
    return -1;
  x4 = XEXP (x1, 1);
  x5 = XEXP (x4, 1);
  operands[1] = x5;
  if (!nonimmediate_operand (operands[1], E_QImode))
    return -1;
  return pattern1620 (); /* [-1, 2] */
}

int
pattern1685 (rtx x1, machine_mode i1)
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
pattern1694 ()
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!const_0_to_3_operand (operands[2], E_VOIDmode)
      || !const_0_to_3_operand (operands[3], E_VOIDmode)
      || !const_0_to_3_operand (operands[4], E_VOIDmode)
      || !const_0_to_3_operand (operands[5], E_VOIDmode))
    return -1;
  return 0;
}

int
pattern1700 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1
      || !vsib_mem_operator (operands[6], i2)
      || !register_operand (operands[4], i1))
    return -1;
  x2 = XVECEXP (x1, 0, 1);
  x3 = XEXP (x2, 0);
  switch (GET_MODE (x3))
    {
    case E_SImode:
      return pattern1699 (
E_SImode); /* [-1, 1] */

    case E_DImode:
      res = pattern1699 (
E_DImode);
      if (res >= 0)
        return res + 2; /* [2, 3] */
      return -1;

    default:
      return -1;
    }
}

int
pattern1711 (rtx x1, machine_mode i1)
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
      return pattern1710 (
E_SImode); /* [-1, 1] */

    case E_DImode:
      res = pattern1710 (
E_DImode);
      if (res >= 0)
        return res + 2; /* [2, 3] */
      return -1;

    default:
      return -1;
    }
}

int
pattern1722 (machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!vsib_address_operand (operands[3], i1))
    return -1;
  switch (GET_MODE (operands[2]))
    {
    case E_V4SImode:
      if (!register_operand (operands[2], E_V4SImode))
        return -1;
      return 0;

    case E_V2DImode:
      if (!register_operand (operands[2], E_V2DImode))
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern1731 (rtx x1, machine_mode i1)
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
  if (GET_MODE (x4) != i1
      || !nonimmediate_operand (operands[1], i1)
      || !register_operand (operands[2], i1))
    return -1;
  x5 = XEXP (x4, 2);
  if (GET_MODE (x5) != i1
      || !register_operand (operands[3], i1)
      || !const0_operand (operands[4], i1))
    return -1;
  return 0;
}

int
pattern1738 (machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!vsib_address_operand (operands[3], i1))
    return -1;
  switch (GET_MODE (operands[4]))
    {
    case E_V4SImode:
      if (!register_operand (operands[4], E_V4SImode))
        return -1;
      return 0;

    case E_V4DImode:
      if (!register_operand (operands[4], E_V4DImode))
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern1745 (machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!vsib_address_operand (operands[4], i1))
    return -1;
  switch (GET_MODE (operands[3]))
    {
    case E_V4SImode:
      if (!register_operand (operands[3], E_V4SImode))
        return -1;
      return 0;

    case E_V2DImode:
      if (!register_operand (operands[3], E_V2DImode))
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern1753 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], E_V8SFmode)
      || GET_MODE (x1) != E_V8SFmode)
    return -1;
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case E_V8HFmode:
      if (!memory_operand (operands[1], E_V16HFmode))
        return -1;
      return 0;

    case E_V8BFmode:
      if (!memory_operand (operands[1], E_V16BFmode))
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern1764 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12, x13, x14, x15, x16;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 1);
  if (XWINT (x2, 0) != 1L)
    return -1;
  x3 = XVECEXP (x1, 0, 2);
  if (XWINT (x3, 0) != 2L)
    return -1;
  x4 = XVECEXP (x1, 0, 3);
  if (XWINT (x4, 0) != 3L)
    return -1;
  x5 = XVECEXP (x1, 0, 4);
  if (XWINT (x5, 0) != 4L)
    return -1;
  x6 = XVECEXP (x1, 0, 5);
  if (XWINT (x6, 0) != 5L)
    return -1;
  x7 = XVECEXP (x1, 0, 6);
  if (XWINT (x7, 0) != 6L)
    return -1;
  x8 = XVECEXP (x1, 0, 7);
  if (XWINT (x8, 0) != 7L)
    return -1;
  x9 = XVECEXP (x1, 0, 8);
  if (XWINT (x9, 0) != 8L)
    return -1;
  x10 = XVECEXP (x1, 0, 9);
  if (XWINT (x10, 0) != 9L)
    return -1;
  x11 = XVECEXP (x1, 0, 10);
  if (XWINT (x11, 0) != 10L)
    return -1;
  x12 = XVECEXP (x1, 0, 11);
  if (XWINT (x12, 0) != 11L)
    return -1;
  x13 = XVECEXP (x1, 0, 12);
  if (XWINT (x13, 0) != 12L)
    return -1;
  x14 = XVECEXP (x1, 0, 13);
  if (XWINT (x14, 0) != 13L)
    return -1;
  x15 = XVECEXP (x1, 0, 14);
  if (XWINT (x15, 0) != 14L)
    return -1;
  x16 = XVECEXP (x1, 0, 15);
  if (XWINT (x16, 0) != 15L)
    return -1;
  return 0;
}

int
pattern1782 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[3], i1))
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
pattern1789 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1
      || !register_operand (operands[2], i1)
      || !vsib_mem_operator (operands[7], i2)
      || !register_operand (operands[5], i1)
      || !scratch_operand (operands[1], i1))
    return -1;
  x2 = XVECEXP (x1, 0, 1);
  x3 = XEXP (x2, 0);
  switch (GET_MODE (x3))
    {
    case E_SImode:
      return pattern1788 (
E_SImode); /* [-1, 1] */

    case E_DImode:
      res = pattern1788 (
E_DImode);
      if (res >= 0)
        return res + 2; /* [2, 3] */
      return -1;

    default:
      return -1;
    }
}

int
pattern1802 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12, x13, x14, x15, x16, x17;
  rtx x18, x19, x20;
  int res ATTRIBUTE_UNUSED;
  if (!const_int_operand (operands[1], i1))
    return -1;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  if (XVECLEN (x3, 0) != 4
      || XINT (x3, 1) != 109)
    return -1;
  x4 = XVECEXP (x1, 0, 1);
  x5 = XEXP (x4, 1);
  if (GET_CODE (x5) != UNSPEC_VOLATILE
      || XVECLEN (x5, 0) != 1
      || XINT (x5, 1) != 109)
    return -1;
  x6 = XVECEXP (x5, 0, 0);
  if (x6 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
    return -1;
  x7 = XVECEXP (x1, 0, 2);
  if (GET_CODE (x7) != SET)
    return -1;
  x8 = XEXP (x7, 1);
  if (GET_CODE (x8) != UNSPEC_VOLATILE
      || XVECLEN (x8, 0) != 1
      || XINT (x8, 1) != 109
      || GET_MODE (x8) != E_CCZmode)
    return -1;
  x9 = XVECEXP (x8, 0, 0);
  if (x9 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
    return -1;
  x10 = XEXP (x7, 0);
  if (GET_CODE (x10) != REG
      || REGNO (x10) != 17
      || GET_MODE (x10) != E_CCZmode)
    return -1;
  x11 = XEXP (x2, 0);
  operands[2] = x11;
  x12 = XVECEXP (x3, 0, 0);
  operands[3] = x12;
  x13 = XVECEXP (x3, 0, 2);
  operands[4] = x13;
  x14 = XVECEXP (x3, 0, 3);
  operands[5] = x14;
  if (!const_int_operand (operands[5], E_SImode))
    return -1;
  x15 = XVECEXP (x3, 0, 1);
  if (!rtx_equal_p (x15, operands[2]))
    return -1;
  x16 = XEXP (x4, 0);
  if (!rtx_equal_p (x16, operands[3]))
    return -1;
  x17 = PATTERN (peep2_next_insn (2));
  x18 = XEXP (x17, 1);
  x19 = XEXP (x18, 0);
  if (!rtx_equal_p (x19, operands[2]))
    return -1;
  x20 = XEXP (x18, 1);
  if (!rtx_equal_p (x20, operands[1]))
    return -1;
  switch (GET_MODE (operands[2]))
    {
    case E_QImode:
      return pattern1801 (x1, 
E_QImode); /* [-1, 0] */

    case E_HImode:
      if (pattern1801 (x1, 
E_HImode) != 0)
        return -1;
      return 1;

    case E_SImode:
      if (pattern1801 (x1, 
E_SImode) != 0)
        return -1;
      return 2;

    case E_DImode:
      if (pattern1801 (x1, 
E_DImode) != 0)
        return -1;
      return 3;

    default:
      return -1;
    }
}

int
pattern1831 (machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!vsib_address_operand (operands[2], i1))
    return -1;
  switch (GET_MODE (operands[3]))
    {
    case E_V8SImode:
      if (!register_operand (operands[3], E_V8SImode)
          || !register_operand (operands[4], E_V8SFmode))
        return -1;
      return 0;

    case E_V4DImode:
      if (!register_operand (operands[3], E_V4DImode)
          || !register_operand (operands[4], E_V4SFmode))
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern1838 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7;
  int res ATTRIBUTE_UNUSED;
  if (!nonimmediate_operand (operands[1], i1))
    return -1;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  x4 = XEXP (x3, 1);
  if (GET_MODE (x4) != i2
      || !ix86_carry_flag_operator (operands[4], i2)
      || !const_scalar_int_operand (operands[6], i2)
      || !nonimmediate_operand (operands[0], i1))
    return -1;
  x5 = XVECEXP (x1, 0, 1);
  x6 = XEXP (x5, 1);
  if (GET_MODE (x6) != i1)
    return -1;
  x7 = XEXP (x6, 0);
  if (GET_MODE (x7) != i1
      || !ix86_carry_flag_operator (operands[5], i1)
      || !x86_64_immediate_operand (operands[2], i1))
    return -1;
  return 0;
}

int
pattern1849 ()
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!const_0_to_15_operand (operands[2], E_VOIDmode)
      || !const_0_to_15_operand (operands[3], E_VOIDmode)
      || !const_0_to_15_operand (operands[4], E_VOIDmode)
      || !const_0_to_15_operand (operands[5], E_VOIDmode)
      || !const_0_to_15_operand (operands[6], E_VOIDmode)
      || !const_0_to_15_operand (operands[7], E_VOIDmode)
      || !const_0_to_15_operand (operands[8], E_VOIDmode)
      || !const_0_to_15_operand (operands[9], E_VOIDmode)
      || !const_0_to_15_operand (operands[10], E_VOIDmode)
      || !const_0_to_15_operand (operands[11], E_VOIDmode)
      || !const_0_to_15_operand (operands[12], E_VOIDmode)
      || !const_0_to_15_operand (operands[13], E_VOIDmode)
      || !const_0_to_15_operand (operands[14], E_VOIDmode)
      || !const_0_to_15_operand (operands[15], E_VOIDmode)
      || !const_0_to_15_operand (operands[16], E_VOIDmode)
      || !const_0_to_15_operand (operands[17], E_VOIDmode))
    return -1;
  return 0;
}

int
pattern1857 (rtx x1, int i1, int i2, int i3, int i4)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 28);
  if (x2 != const_int_rtx[MAX_SAVED_CONST_INT + i4])
    return -1;
  x3 = XVECEXP (x1, 0, 29);
  if (x3 != const_int_rtx[MAX_SAVED_CONST_INT + i3])
    return -1;
  x4 = XVECEXP (x1, 0, 30);
  if (x4 != const_int_rtx[MAX_SAVED_CONST_INT + i2])
    return -1;
  x5 = XVECEXP (x1, 0, 31);
  if (x5 != const_int_rtx[MAX_SAVED_CONST_INT + i1])
    return -1;
  return 0;
}

int
pattern1862 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[4], i1)
      || GET_MODE (x1) != i1
      || !nonmemory_operand (operands[2], i1))
    return -1;
  x2 = PATTERN (peep2_next_insn (3));
  x3 = XEXP (x2, 1);
  if (!rtx_equal_p (x3, operands[4]))
    return -1;
  x4 = PATTERN (peep2_next_insn (4));
  x5 = XEXP (x4, 1);
  x6 = XEXP (x5, 0);
  operands[5] = x6;
  x7 = XEXP (x5, 1);
  operands[6] = x7;
  return 0;
}

int
pattern1869 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7;
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
      || !nonimmediate_operand (operands[1], i1))
    return -1;
  x7 = XEXP (x4, 1);
  if (GET_MODE (x7) != i2
      || !x86_64_sext_operand (operands[2], i1)
      || pattern1867 (x1, 
i1, 
i2) != 0)
    return -1;
  return 0;
}

int
pattern1877 (rtx x1, int i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  int res ATTRIBUTE_UNUSED;
  if (XVECLEN (x1, 0) != i1)
    return -1;
  x2 = XVECEXP (x1, 0, 0);
  if (x2 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
    return -1;
  x3 = XVECEXP (x1, 0, 1);
  if (x3 != const_int_rtx[MAX_SAVED_CONST_INT + 3])
    return -1;
  x4 = XVECEXP (x1, 0, 2);
  if (x4 != const_int_rtx[MAX_SAVED_CONST_INT + 5])
    return -1;
  x5 = XVECEXP (x1, 0, 3);
  if (x5 != const_int_rtx[MAX_SAVED_CONST_INT + 7])
    return -1;
  x6 = XVECEXP (x1, 0, 4);
  if (x6 != const_int_rtx[MAX_SAVED_CONST_INT + 9])
    return -1;
  x7 = XVECEXP (x1, 0, 5);
  if (x7 != const_int_rtx[MAX_SAVED_CONST_INT + 11])
    return -1;
  x8 = XVECEXP (x1, 0, 6);
  if (x8 != const_int_rtx[MAX_SAVED_CONST_INT + 13])
    return -1;
  x9 = XVECEXP (x1, 0, 7);
  if (x9 != const_int_rtx[MAX_SAVED_CONST_INT + 15])
    return -1;
  return 0;
}

 int
recog_1 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12, x13;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  if (GET_CODE (x4) != REG
      || REGNO (x4) != 17)
    return -1;
  x5 = XEXP (x3, 1);
  if (x5 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
    return -1;
  x6 = XEXP (x2, 1);
  switch (GET_CODE (x6))
    {
    case COMPARE:
      if (GET_MODE (x6) != E_CCmode)
        return -1;
      x7 = XEXP (x6, 0);
      if (GET_CODE (x7) != MINUS)
        return -1;
      x8 = XEXP (x6, 1);
      if (x8 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
        return -1;
      x9 = XEXP (x2, 2);
      if (GET_CODE (x9) != UNSPEC
          || XVECLEN (x9, 0) != 1
          || XINT (x9, 1) != 109
          || GET_MODE (x9) != E_CCmode)
        return -1;
      x10 = XEXP (x1, 0);
      operands[0] = x10;
      if (!flags_reg_operand (operands[0], E_CCmode)
          || GET_MODE (x2) != E_CCmode
          || !comparison_operator (operands[1], E_VOIDmode)
          || GET_MODE (x4) != E_CCmode)
        return -1;
      x11 = XEXP (x7, 0);
      operands[2] = x11;
      x12 = XEXP (x7, 1);
      operands[3] = x12;
      x13 = XVECEXP (x9, 0, 0);
      operands[4] = x13;
      if (!const_0_to_15_operand (operands[4], E_SImode))
        return -1;
      switch (GET_MODE (x7))
        {
        case E_QImode:
          if (!nonimmediate_operand (operands[2], E_QImode)
              || !general_operand (operands[3], E_QImode)
              || !
#line 1539 "../../gcc/config/i386/i386.md"
(TARGET_APX_CCMP))
            return -1;
          return 1; /* ccmpqi */

        case E_HImode:
          if (!nonimmediate_operand (operands[2], E_HImode)
              || !general_operand (operands[3], E_HImode)
              || !
#line 1539 "../../gcc/config/i386/i386.md"
(TARGET_APX_CCMP))
            return -1;
          return 2; /* ccmphi */

        case E_SImode:
          if (!nonimmediate_operand (operands[2], E_SImode)
              || !x86_64_general_operand (operands[3], E_SImode)
              || !
#line 1539 "../../gcc/config/i386/i386.md"
(TARGET_APX_CCMP))
            return -1;
          return 3; /* ccmpsi */

        case E_DImode:
          if (!nonimmediate_operand (operands[2], E_DImode)
              || !x86_64_general_operand (operands[3], E_DImode)
              || !(
#line 1539 "../../gcc/config/i386/i386.md"
(TARGET_APX_CCMP) && 
#line 1161 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return -1;
          return 4; /* ccmpdi */

        default:
          return -1;
        }

    case LABEL_REF:
      x9 = XEXP (x2, 2);
      if (GET_CODE (x9) != PC)
        return -1;
      x10 = XEXP (x1, 0);
      if (GET_CODE (x10) != PC
          || !ix86_comparison_operator (operands[1], E_VOIDmode))
        return -1;
      x7 = XEXP (x6, 0);
      operands[0] = x7;
      return 1458; /* *jcc */

    case REG:
    case SUBREG:
    case MEM:
      operands[2] = x6;
      x10 = XEXP (x1, 0);
      operands[0] = x10;
      x9 = XEXP (x2, 2);
      operands[3] = x9;
      switch (GET_MODE (operands[0]))
        {
        case E_HImode:
          if (pattern1198 (x2, 
E_HImode) != 0
              || !
#line 26178 "../../gcc/config/i386/i386.md"
(TARGET_CMOVE && !(MEM_P (operands[2]) && MEM_P (operands[3]))))
            return -1;
          return 1797; /* *movhicc_noc */

        case E_QImode:
          if (pattern1199 (x2) != 0
              || !
#line 26252 "../../gcc/config/i386/i386.md"
(TARGET_CMOVE && !TARGET_PARTIAL_REG_STALL))
            return -1;
          return 1802; /* *movqicc_noc */

        case E_XFmode:
          if (!register_operand (operands[0], E_XFmode)
              || GET_MODE (x2) != E_XFmode
              || !fcmov_comparison_operator (operands[1], E_VOIDmode)
              || !register_operand (operands[2], E_XFmode)
              || !register_operand (operands[3], E_XFmode)
              || !
#line 26446 "../../gcc/config/i386/i386.md"
(TARGET_80387 && TARGET_CMOVE))
            return -1;
          return 1804; /* *movxfcc_1 */

        case E_DFmode:
          if (!register_operand (operands[0], E_DFmode)
              || pattern1260 (x2, 
E_DFmode) != 0
              || !
#line 26461 "../../gcc/config/i386/i386.md"
(TARGET_80387 && TARGET_CMOVE
   && !(MEM_P (operands[2]) && MEM_P (operands[3]))))
            return -1;
          return 1805; /* *movdfcc_1 */

        case E_SFmode:
          if (!register_operand (operands[0], E_SFmode)
              || pattern1260 (x2, 
E_SFmode) != 0
              || !
#line 26496 "../../gcc/config/i386/i386.md"
(TARGET_80387 && TARGET_CMOVE
   && !(MEM_P (operands[2]) && MEM_P (operands[3]))))
            return -1;
          return 1806; /* *movsfcc_1_387 */

        default:
          return -1;
        }

    default:
      return -1;
    }
}

 int
recog_13 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  switch (XINT (x2, 1))
    {
    case 24:
      return recog_6 (x1, insn, pnum_clobbers);

    case 25:
      if (pattern54 (x1, 
E_HImode) != 0
          || !
#line 1994 "../../gcc/config/i386/i386.md"
(TARGET_SAHF))
        return -1;
      return 47; /* x86_sahf_1 */

    case 26:
      return recog_5 (x1, insn, pnum_clobbers);

    case 44:
      if (GET_MODE (x2) != E_CCFPmode)
        return -1;
      x3 = XVECEXP (x2, 0, 0);
      if (GET_CODE (x3) != COMPARE
          || GET_MODE (x3) != E_CCFPmode)
        return -1;
      x4 = XEXP (x1, 0);
      if (GET_CODE (x4) != REG
          || REGNO (x4) != 17
          || GET_MODE (x4) != E_CCFPmode)
        return -1;
      x5 = XEXP (x3, 0);
      operands[0] = x5;
      x6 = XEXP (x3, 1);
      operands[1] = x6;
      switch (GET_MODE (operands[0]))
        {
        case E_SFmode:
          if (!register_operand (operands[0], E_SFmode)
              || !nonimmediate_operand (operands[1], E_SFmode)
              || !
#line 2045 "../../gcc/config/i386/i386.md"
(TARGET_AVX10_2_256))
            return -1;
          return 50; /* *cmpxsf */

        case E_DFmode:
          if (!register_operand (operands[0], E_DFmode)
              || !nonimmediate_operand (operands[1], E_DFmode)
              || !
#line 2045 "../../gcc/config/i386/i386.md"
(TARGET_AVX10_2_256))
            return -1;
          return 52; /* *cmpxdf */

        case E_HFmode:
          if (!register_operand (operands[0], E_HFmode)
              || !nonimmediate_operand (operands[1], E_HFmode)
              || !
#line 2058 "../../gcc/config/i386/i386.md"
(TARGET_AVX10_2_256))
            return -1;
          return 54; /* *cmpxhf */

        default:
          return -1;
        }

    case 41:
      if (pattern56 (x1, 
E_CCCmode) != 0)
        return -1;
      return 63; /* x86_stc */

    case 42:
      x4 = XEXP (x1, 0);
      operands[0] = x4;
      x3 = XVECEXP (x2, 0, 0);
      operands[1] = x3;
      if (!flags_reg_operand (operands[1], E_VOIDmode))
        return -1;
      switch (GET_MODE (operands[0]))
        {
        case E_SImode:
          if (!push_operand (operands[0], E_SImode)
              || GET_MODE (x2) != E_SImode
              || !(
#line 2323 "../../gcc/config/i386/i386.md"
(GET_MODE_CLASS (GET_MODE (operands[1])) == MODE_CC) && 
#line 1403 "../../gcc/config/i386/i386.md"
(word_mode == SImode)))
            return -1;
          return 80; /* pushflsi2 */

        case E_DImode:
          if (!push_operand (operands[0], E_DImode)
              || GET_MODE (x2) != E_DImode
              || !(
#line 2323 "../../gcc/config/i386/i386.md"
(GET_MODE_CLASS (GET_MODE (operands[1])) == MODE_CC) && 
#line 1403 "../../gcc/config/i386/i386.md"
(word_mode == DImode)))
            return -1;
          return 81; /* pushfldi2 */

        default:
          return -1;
        }

    case 43:
      if (GET_MODE (x2) != E_CCmode)
        return -1;
      x4 = XEXP (x1, 0);
      operands[0] = x4;
      if (!flags_reg_operand (operands[0], E_CCmode))
        return -1;
      x3 = XVECEXP (x2, 0, 0);
      operands[1] = x3;
      switch (GET_MODE (operands[1]))
        {
        case E_SImode:
          if (!pop_operand (operands[1], E_SImode)
              || !
#line 1403 "../../gcc/config/i386/i386.md"
(word_mode == SImode))
            return -1;
          return 82; /* popflsi1 */

        case E_DImode:
          if (!pop_operand (operands[1], E_DImode)
              || !
#line 1403 "../../gcc/config/i386/i386.md"
(word_mode == DImode))
            return -1;
          return 83; /* popfldi1 */

        default:
          return -1;
        }

    case 60:
      if (GET_MODE (x2) != E_SFmode)
        return -1;
      x4 = XEXP (x1, 0);
      operands[0] = x4;
      if (!register_operand (operands[0], E_SFmode))
        return -1;
      x3 = XVECEXP (x2, 0, 0);
      operands[1] = x3;
      if (!register_operand (operands[1], E_BFmode)
          || !
#line 5471 "../../gcc/config/i386/i386.md"
(TARGET_SSE2))
        return -1;
      return 203; /* extendbfsf2_1 */

    case 28:
      if (GET_MODE (x2) != E_HImode)
        return -1;
      x3 = XVECEXP (x2, 0, 0);
      if (x3 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
        return -1;
      x4 = XEXP (x1, 0);
      operands[0] = x4;
      if (!memory_operand (operands[0], E_HImode)
          || !
#line 6045 "../../gcc/config/i386/i386.md"
(TARGET_80387))
        return -1;
      return 238; /* x86_fnstcw_1 */

    case 97:
      if (GET_MODE (x2) != E_HImode)
        return -1;
      x4 = XEXP (x1, 0);
      operands[0] = x4;
      if (!register_operand (operands[0], E_HImode))
        return -1;
      x3 = XVECEXP (x2, 0, 0);
      operands[1] = x3;
      if (!nonimmediate_operand (operands[1], E_HImode))
        return -1;
      if ((
#line 21721 "../../gcc/config/i386/i386.md"
(TARGET_APX_NF) && 
#line 21631 "../../gcc/config/i386/i386.md"
(TARGET_BMI)))
        return 1562; /* tzcnt_hi_nf */
      if (pnum_clobbers == NULL
          || !(
#line 21721 "../../gcc/config/i386/i386.md"
(true) && 
#line 21631 "../../gcc/config/i386/i386.md"
(TARGET_BMI)))
        return -1;
      *pnum_clobbers = 1;
      return 1563; /* tzcnt_hi */

    case 96:
      if (GET_MODE (x2) != E_HImode)
        return -1;
      x4 = XEXP (x1, 0);
      operands[0] = x4;
      if (!register_operand (operands[0], E_HImode))
        return -1;
      x3 = XVECEXP (x2, 0, 0);
      operands[1] = x3;
      if (!nonimmediate_operand (operands[1], E_HImode))
        return -1;
      if ((
#line 21721 "../../gcc/config/i386/i386.md"
(TARGET_APX_NF) && 
#line 21632 "../../gcc/config/i386/i386.md"
(TARGET_LZCNT)))
        return 1564; /* lzcnt_hi_nf */
      if (pnum_clobbers == NULL
          || !(
#line 21721 "../../gcc/config/i386/i386.md"
(true) && 
#line 21632 "../../gcc/config/i386/i386.md"
(TARGET_LZCNT)))
        return -1;
      *pnum_clobbers = 1;
      return 1565; /* lzcnt_hi */

    case 27:
      if (pattern54 (x1, 
E_QImode) != 0)
        return -1;
      return 1642; /* parityqi2_cmp */

    case 54:
      switch (pattern57 (x1))
        {
        case 0:
          if (!
#line 23314 "../../gcc/config/i386/i386.md"
(TARGET_SSE && TARGET_SSE_MATH))
            return -1;
          return 1674; /* *rcpsf2_sse */

        case 1:
          if (!
#line 23340 "../../gcc/config/i386/i386.md"
(TARGET_AVX512FP16))
            return -1;
          return 1675; /* rcphf2 */

        default:
          return -1;
        }

    case 31:
      x4 = XEXP (x1, 0);
      operands[0] = x4;
      x3 = XVECEXP (x2, 0, 0);
      operands[1] = x3;
      if (!register_operand (operands[1], E_XFmode))
        return -1;
      switch (GET_MODE (operands[0]))
        {
        case E_SFmode:
          if (!nonimmediate_operand (operands[0], E_SFmode)
              || GET_MODE (x2) != E_SFmode
              || !
#line 23557 "../../gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387))
            return -1;
          return 1700; /* truncxfsf2_i387_noop_unspec */

        case E_DFmode:
          if (!nonimmediate_operand (operands[0], E_DFmode)
              || GET_MODE (x2) != E_DFmode
              || !
#line 23557 "../../gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387))
            return -1;
          return 1701; /* truncxfdf2_i387_noop_unspec */

        default:
          return -1;
        }

    case 55:
      switch (pattern57 (x1))
        {
        case 0:
          if (!
#line 23577 "../../gcc/config/i386/i386.md"
(TARGET_SSE))
            return -1;
          return 1703; /* *rsqrtsf2_sse */

        case 1:
          if (!
#line 23613 "../../gcc/config/i386/i386.md"
(TARGET_AVX512FP16))
            return -1;
          return 1704; /* rsqrthf2 */

        default:
          return -1;
        }

    case 64:
      if (GET_MODE (x2) != E_XFmode)
        return -1;
      x4 = XEXP (x1, 0);
      operands[0] = x4;
      if (!register_operand (operands[0], E_XFmode))
        return -1;
      x3 = XVECEXP (x2, 0, 0);
      operands[1] = x3;
      if (!register_operand (operands[1], E_XFmode)
          || !
#line 23880 "../../gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && flag_unsafe_math_optimizations))
        return -1;
      return 1711; /* sinxf2 */

    case 65:
      if (GET_MODE (x2) != E_XFmode)
        return -1;
      x4 = XEXP (x1, 0);
      operands[0] = x4;
      if (!register_operand (operands[0], E_XFmode))
        return -1;
      x3 = XVECEXP (x2, 0, 0);
      operands[1] = x3;
      if (!register_operand (operands[1], E_XFmode)
          || !
#line 23880 "../../gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && flag_unsafe_math_optimizations))
        return -1;
      return 1712; /* cosxf2 */

    case 71:
      if (GET_MODE (x2) != E_XFmode)
        return -1;
      x4 = XEXP (x1, 0);
      operands[0] = x4;
      if (!register_operand (operands[0], E_XFmode))
        return -1;
      x3 = XVECEXP (x2, 0, 0);
      operands[1] = x3;
      if (!register_operand (operands[1], E_XFmode)
          || !
#line 24506 "../../gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && flag_unsafe_math_optimizations))
        return -1;
      return 1719; /* *f2xm1xf2_i387 */

    case 69:
      if (GET_MODE (x2) != E_XFmode)
        return -1;
      x4 = XEXP (x1, 0);
      operands[0] = x4;
      if (!register_operand (operands[0], E_XFmode))
        return -1;
      x3 = XVECEXP (x2, 0, 0);
      operands[1] = x3;
      if (!register_operand (operands[1], E_XFmode)
          || !
#line 24840 "../../gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387))
        return -1;
      return 1726; /* rintxf2 */

    case 70:
      if (GET_MODE (x2) != E_HImode)
        return -1;
      x4 = XEXP (x1, 0);
      operands[0] = x4;
      if (!nonimmediate_operand (operands[0], E_HImode))
        return -1;
      x3 = XVECEXP (x2, 0, 0);
      operands[1] = x3;
      if (!register_operand (operands[1], E_XFmode)
          || !
#line 24981 "../../gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387))
        return -1;
      return 1728; /* lrintxfhi2 */

    case 74:
      if (pattern58 (x1, pnum_clobbers, 
E_XFmode) != 0
          || !
#line 25071 "../../gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && (flag_fp_int_builtin_inexact || !flag_trapping_math)
   && ix86_pre_reload_split ()))
        return -1;
      *pnum_clobbers = 1;
      return 1730; /* frndintxf2_roundeven */

    case 75:
      if (pattern58 (x1, pnum_clobbers, 
E_XFmode) != 0
          || !
#line 25071 "../../gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && (flag_fp_int_builtin_inexact || !flag_trapping_math)
   && ix86_pre_reload_split ()))
        return -1;
      *pnum_clobbers = 1;
      return 1731; /* frndintxf2_floor */

    case 76:
      if (pattern58 (x1, pnum_clobbers, 
E_XFmode) != 0
          || !
#line 25071 "../../gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && (flag_fp_int_builtin_inexact || !flag_trapping_math)
   && ix86_pre_reload_split ()))
        return -1;
      *pnum_clobbers = 1;
      return 1732; /* frndintxf2_ceil */

    case 77:
      if (pattern58 (x1, pnum_clobbers, 
E_XFmode) != 0
          || !
#line 25071 "../../gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && (flag_fp_int_builtin_inexact || !flag_trapping_math)
   && ix86_pre_reload_split ()))
        return -1;
      *pnum_clobbers = 1;
      return 1733; /* frndintxf2_trunc */

    case 78:
      if (pattern59 (x1, pnum_clobbers) != 0
          || !
#line 25188 "../../gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && flag_unsafe_math_optimizations
   && ix86_pre_reload_split ()))
        return -1;
      *pnum_clobbers = 1;
      return 1738; /* *fisthi2_floor_1 */

    case 79:
      if (pattern59 (x1, pnum_clobbers) != 0
          || !
#line 25188 "../../gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && flag_unsafe_math_optimizations
   && ix86_pre_reload_split ()))
        return -1;
      *pnum_clobbers = 1;
      return 1739; /* *fisthi2_ceil_1 */

    case 73:
      if (GET_MODE (x2) != E_HImode)
        return -1;
      x4 = XEXP (x1, 0);
      operands[0] = x4;
      if (!register_operand (operands[0], E_HImode))
        return -1;
      x3 = XVECEXP (x2, 0, 0);
      operands[1] = x3;
      switch (GET_MODE (operands[1]))
        {
        case E_SFmode:
          if (!register_operand (operands[1], E_SFmode)
              || !
#line 25290 "../../gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387))
            return -1;
          return 1750; /* fxamsf2_i387 */

        case E_DFmode:
          if (!register_operand (operands[1], E_DFmode)
              || !
#line 25290 "../../gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387))
            return -1;
          return 1751; /* fxamdf2_i387 */

        case E_XFmode:
          if (!register_operand (operands[1], E_XFmode)
              || !
#line 25290 "../../gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387))
            return -1;
          return 1752; /* fxamxf2_i387 */

        default:
          return -1;
        }

    case 112:
      if (GET_MODE (x2) != E_V2SFmode)
        return -1;
      x4 = XEXP (x1, 0);
      operands[0] = x4;
      if (!register_operand (operands[0], E_V2SFmode))
        return -1;
      x3 = XVECEXP (x2, 0, 0);
      operands[1] = x3;
      if (!nonimmediate_operand (operands[1], E_V2SFmode)
          || !
#line 900 "../../gcc/config/i386/mmx.md"
(TARGET_3DNOW))
        return -1;
      return 2053; /* mmx_rcpv2sf2 */

    case 115:
      if (GET_MODE (x2) != E_V2SFmode)
        return -1;
      x4 = XEXP (x1, 0);
      operands[0] = x4;
      if (!register_operand (operands[0], E_V2SFmode))
        return -1;
      x3 = XVECEXP (x2, 0, 0);
      operands[1] = x3;
      if (!nonimmediate_operand (operands[1], E_V2SFmode)
          || !
#line 948 "../../gcc/config/i386/mmx.md"
(TARGET_3DNOW))
        return -1;
      return 2056; /* mmx_rsqrtv2sf2 */

    case 172:
      if (GET_MODE (x2) != E_V2SImode)
        return -1;
      x4 = XEXP (x1, 0);
      operands[0] = x4;
      if (!register_operand (operands[0], E_V2SImode))
        return -1;
      x3 = XVECEXP (x2, 0, 0);
      operands[1] = x3;
      switch (GET_MODE (operands[1]))
        {
        case E_V4SFmode:
          if (!nonimmediate_operand (operands[1], E_V4SFmode)
              || !
#line 8450 "../../gcc/config/i386/sse.md"
((TARGET_MMX || TARGET_MMX_WITH_SSE) && TARGET_SSE))
            return -1;
          return 4781; /* unspec_sse_cvttps2pi */

        case E_V2DFmode:
          if (!vector_operand (operands[1], E_V2DFmode)
              || !
#line 8915 "../../gcc/config/i386/sse.md"
(TARGET_SSE2))
            return -1;
          return 4897; /* unspec_sse2_cvttpd2pi */

        default:
          return -1;
        }

    case 46:
      if (GET_MODE (x2) != E_V2SImode)
        return -1;
      x4 = XEXP (x1, 0);
      operands[0] = x4;
      if (!register_operand (operands[0], E_V2SImode))
        return -1;
      x3 = XVECEXP (x2, 0, 0);
      operands[1] = x3;
      if (!vector_operand (operands[1], E_V2DFmode)
          || !
#line 8897 "../../gcc/config/i386/sse.md"
(TARGET_SSE2))
        return -1;
      return 4896; /* sse2_cvtpd2pi */

    case 173:
      if (GET_MODE (x2) != E_V2SImode)
        return -1;
      x4 = XEXP (x1, 0);
      operands[0] = x4;
      if (!register_operand (operands[0], E_V2SImode))
        return -1;
      x3 = XVECEXP (x2, 0, 0);
      operands[1] = x3;
      if (!nonimmediate_operand (operands[1], E_V2DFmode)
          || !
#line 8956 "../../gcc/config/i386/sse.md"
(TARGET_MMX_WITH_SSE && TARGET_AVX512VL))
        return -1;
      return 4899; /* unspec_fixuns_truncv2dfv2si2 */

    case 191:
      x4 = XEXP (x1, 0);
      operands[0] = x4;
      x3 = XVECEXP (x2, 0, 0);
      operands[1] = x3;
      switch (GET_MODE (operands[0]))
        {
        case E_HImode:
          if (!register_operand (operands[0], E_HImode)
              || GET_MODE (x2) != E_HImode)
            return -1;
          switch (GET_MODE (operands[1]))
            {
            case E_V16QImode:
              if (!register_operand (operands[1], E_V16QImode)
                  || !(
#line 10260 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 318 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                return -1;
              return 5194; /* avx512vl_cvtb2maskv16qi */

            case E_V16HImode:
              if (!register_operand (operands[1], E_V16HImode)
                  || !(
#line 10260 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 319 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                return -1;
              return 5197; /* avx512vl_cvtw2maskv16hi */

            case E_V16SImode:
              if (!register_operand (operands[1], E_V16SImode)
                  || !(
#line 10270 "../../gcc/config/i386/sse.md"
(TARGET_AVX512DQ) && 
#line 501 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                return -1;
              return 5199; /* avx512f_cvtd2maskv16si */

            default:
              return -1;
            }

        case E_QImode:
          if (!register_operand (operands[0], E_QImode)
              || GET_MODE (x2) != E_QImode)
            return -1;
          switch (GET_MODE (operands[1]))
            {
            case E_V8HImode:
              if (!register_operand (operands[1], E_V8HImode)
                  || !(
#line 10260 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 319 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                return -1;
              return 5198; /* avx512vl_cvtw2maskv8hi */

            case E_V8SImode:
              if (!register_operand (operands[1], E_V8SImode)
                  || !(
#line 10270 "../../gcc/config/i386/sse.md"
(TARGET_AVX512DQ) && 
#line 501 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                return -1;
              return 5200; /* avx512vl_cvtd2maskv8si */

            case E_V4SImode:
              if (!register_operand (operands[1], E_V4SImode)
                  || !(
#line 10270 "../../gcc/config/i386/sse.md"
(TARGET_AVX512DQ) && 
#line 501 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                return -1;
              return 5201; /* avx512vl_cvtd2maskv4si */

            case E_V8DImode:
              if (!register_operand (operands[1], E_V8DImode)
                  || !(
#line 10270 "../../gcc/config/i386/sse.md"
(TARGET_AVX512DQ) && 
#line 502 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                return -1;
              return 5202; /* avx512f_cvtq2maskv8di */

            case E_V4DImode:
              if (!register_operand (operands[1], E_V4DImode)
                  || !(
#line 10270 "../../gcc/config/i386/sse.md"
(TARGET_AVX512DQ) && 
#line 502 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                return -1;
              return 5203; /* avx512vl_cvtq2maskv4di */

            case E_V2DImode:
              if (!register_operand (operands[1], E_V2DImode)
                  || !(
#line 10270 "../../gcc/config/i386/sse.md"
(TARGET_AVX512DQ) && 
#line 502 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                return -1;
              return 5204; /* avx512vl_cvtq2maskv2di */

            default:
              return -1;
            }

        default:
          return -1;
        }

    case 117:
      x4 = XEXP (x1, 0);
      operands[0] = x4;
      x3 = XVECEXP (x2, 0, 0);
      switch (GET_CODE (x3))
        {
        case REG:
        case SUBREG:
          operands[1] = x3;
          switch (GET_MODE (operands[0]))
            {
            case E_SFmode:
              if (!memory_operand (operands[0], E_SFmode)
                  || GET_MODE (x2) != E_SFmode
                  || !register_operand (operands[1], E_SFmode)
                  || !
#line 23412 "../../gcc/config/i386/sse.md"
(TARGET_SSE4A))
                return -1;
              return 8668; /* sse4a_movntsf */

            case E_DFmode:
              if (!memory_operand (operands[0], E_DFmode)
                  || GET_MODE (x2) != E_DFmode
                  || !register_operand (operands[1], E_DFmode)
                  || !
#line 23412 "../../gcc/config/i386/sse.md"
(TARGET_SSE4A))
                return -1;
              return 8669; /* sse4a_movntdf */

            default:
              return -1;
            }

        case VEC_SELECT:
          x6 = XEXP (x3, 1);
          if (GET_CODE (x6) != PARALLEL
              || XVECLEN (x6, 0) != 1)
            return -1;
          x7 = XVECEXP (x6, 0, 0);
          if (x7 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
            return -1;
          x5 = XEXP (x3, 0);
          operands[1] = x5;
          switch (GET_MODE (operands[0]))
            {
            case E_SFmode:
              if (pattern1067 (x2, 
E_V4SFmode, 
E_SFmode) != 0
                  || !
#line 23424 "../../gcc/config/i386/sse.md"
(TARGET_SSE4A))
                return -1;
              return 8670; /* sse4a_vmmovntv4sf */

            case E_DFmode:
              if (pattern1067 (x2, 
E_V2DFmode, 
E_DFmode) != 0
                  || !(
#line 23424 "../../gcc/config/i386/sse.md"
(TARGET_SSE4A) && 
#line 475 "../../gcc/config/i386/sse.md"
(TARGET_SSE2)))
                return -1;
              return 8671; /* sse4a_vmmovntv2df */

            default:
              return -1;
            }

        default:
          return -1;
        }

    case 136:
      x4 = XEXP (x1, 0);
      operands[0] = x4;
      x3 = XVECEXP (x2, 0, 0);
      operands[1] = x3;
      switch (GET_MODE (operands[0]))
        {
        case E_SFmode:
          if (!register_operand (operands[0], E_SFmode)
              || GET_MODE (x2) != E_SFmode
              || !nonimmediate_operand (operands[1], E_SFmode)
              || !
#line 26991 "../../gcc/config/i386/sse.md"
(TARGET_XOP))
            return -1;
          return 9050; /* xop_frczsf2 */

        case E_DFmode:
          if (!register_operand (operands[0], E_DFmode)
              || GET_MODE (x2) != E_DFmode
              || !nonimmediate_operand (operands[1], E_DFmode)
              || !
#line 26991 "../../gcc/config/i386/sse.md"
(TARGET_XOP))
            return -1;
          return 9051; /* xop_frczdf2 */

        default:
          return -1;
        }

    case 284:
      if (GET_MODE (x2) != E_DFmode)
        return -1;
      x4 = XEXP (x1, 0);
      operands[0] = x4;
      if (!register_operand (operands[0], E_DFmode))
        return -1;
      x3 = XVECEXP (x2, 0, 0);
      operands[1] = x3;
      if (!memory_operand (operands[1], E_DImode)
          || !
#line 346 "../../gcc/config/i386/sync.md"
(TARGET_80387))
        return -1;
      return 11017; /* loaddi_via_fpu */

    case 286:
      if (GET_MODE (x2) != E_DFmode)
        return -1;
      x4 = XEXP (x1, 0);
      operands[0] = x4;
      if (!register_operand (operands[0], E_DFmode))
        return -1;
      x3 = XVECEXP (x2, 0, 0);
      operands[1] = x3;
      if (!memory_operand (operands[1], E_DImode)
          || !
#line 369 "../../gcc/config/i386/sync.md"
(TARGET_SSE))
        return -1;
      return 11019; /* loaddi_via_sse */

    default:
      return -1;
    }
}

 int
recog_28 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7;
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
      switch (GET_MODE (operands[0]))
        {
        case E_DImode:
          if (GET_MODE (x3) == E_DImode)
            {
              if (register_operand (operands[0], E_DImode))
                {
                  switch (GET_MODE (operands[1]))
                    {
                    case E_SImode:
                      if (nonimmediate_operand (operands[1], E_SImode)
                          && 
#line 4971 "../../gcc/config/i386/i386.md"
(TARGET_64BIT))
                        return 184; /* *extendsidi2_rex64 */
                      break;

                    case E_QImode:
                      if (nonimmediate_operand (operands[1], E_QImode)
                          && 
#line 5130 "../../gcc/config/i386/i386.md"
(TARGET_64BIT))
                        return 187; /* extendqidi2 */
                      break;

                    case E_HImode:
                      if (nonimmediate_operand (operands[1], E_HImode)
                          && 
#line 5130 "../../gcc/config/i386/i386.md"
(TARGET_64BIT))
                        return 188; /* extendhidi2 */
                      break;

                    default:
                      break;
                    }
                }
              if (pnum_clobbers != NULL
                  && nonimmediate_operand (operands[0], E_DImode)
                  && register_operand (operands[1], E_SImode)
                  && 
#line 4985 "../../gcc/config/i386/i386.md"
(!TARGET_64BIT))
                {
                  *pnum_clobbers = 2;
                  return 185; /* extendsidi2_1 */
                }
            }
          break;

        case E_TImode:
          if (pattern258 (x3, pnum_clobbers, 
E_DImode, 
E_TImode) == 0
              && 
#line 4993 "../../gcc/config/i386/i386.md"
(TARGET_64BIT))
            {
              *pnum_clobbers = 2;
              return 186; /* extendditi2 */
            }
          break;

        case E_SImode:
          if (register_operand (operands[0], E_SImode)
              && GET_MODE (x3) == E_SImode)
            {
              switch (GET_MODE (operands[1]))
                {
                case E_HImode:
                  if (nonimmediate_operand (operands[1], E_HImode))
                    return 189; /* extendhisi2 */
                  break;

                case E_QImode:
                  if (nonimmediate_operand (operands[1], E_QImode))
                    return 191; /* extendqisi2 */
                  break;

                default:
                  break;
                }
            }
          break;

        case E_HImode:
          if (register_operand (operands[0], E_HImode)
              && GET_MODE (x3) == E_HImode
              && nonimmediate_operand (operands[1], E_QImode))
            return 193; /* extendqihi2 */
          break;

        default:
          break;
        }
      if (GET_CODE (x4) != SUBREG
          || pattern257 (x4) != 0)
        return -1;
      x5 = XEXP (x4, 0);
      x6 = XEXP (x5, 0);
      operands[1] = x6;
      if (!int248_register_operand (operands[1], E_VOIDmode))
        return -1;
      switch (GET_MODE (operands[0]))
        {
        case E_HImode:
          switch (pattern1355 (x3, 
E_HImode))
            {
            case 0:
              return 194; /* *extendqihi_ext_1 */

            case 1:
              return 195; /* *extendqihi_ext_1 */

            case 2:
              if (!
#line 1164 "../../gcc/config/i386/i386.md"
(TARGET_64BIT))
                return -1;
              return 196; /* *extendqihi_ext_1 */

            default:
              return -1;
            }

        case E_SImode:
          switch (pattern1355 (x3, 
E_SImode))
            {
            case 0:
              return 197; /* *extendqisi_ext_1 */

            case 1:
              return 198; /* *extendqisi_ext_1 */

            case 2:
              if (!
#line 1164 "../../gcc/config/i386/i386.md"
(TARGET_64BIT))
                return -1;
              return 199; /* *extendqisi_ext_1 */

            default:
              return -1;
            }

        default:
          return -1;
        }

    case SS_TRUNCATE:
      if (GET_MODE (x4) != E_V2HImode)
        return -1;
      x5 = XEXP (x4, 0);
      if (GET_CODE (x5) != FIX
          || GET_MODE (x5) != E_V2SImode
          || !register_operand (operands[0], E_V2SImode)
          || GET_MODE (x3) != E_V2SImode)
        return -1;
      x6 = XEXP (x5, 0);
      operands[1] = x6;
      if (!nonimmediate_operand (operands[1], E_V2SFmode)
          || !
#line 1612 "../../gcc/config/i386/mmx.md"
(TARGET_3DNOW_A))
        return -1;
      return 2076; /* mmx_pf2iw */

    case VEC_SELECT:
      x7 = XEXP (x4, 1);
      if (GET_CODE (x7) != PARALLEL)
        return -1;
      x5 = XEXP (x4, 0);
      operands[1] = x5;
      switch (XVECLEN (x7, 0))
        {
        case 4:
          if (pattern609 (x3) != 0
              || !
#line 5011 "../../gcc/config/i386/mmx.md"
(TARGET_SSE4_1 && TARGET_MMX_WITH_SSE))
            return -1;
          return 2298; /* sse4_1_sign_extendv4qiv4hi2 */

        case 2:
          switch (pattern610 (x3))
            {
            case 0:
              if (!
#line 5043 "../../gcc/config/i386/mmx.md"
(TARGET_SSE4_1 && TARGET_MMX_WITH_SSE))
                return -1;
              return 2300; /* sse4_1_sign_extendv2hiv2si2 */

            case 1:
              if (!
#line 5075 "../../gcc/config/i386/mmx.md"
(TARGET_SSE4_1 && TARGET_MMX_WITH_SSE))
                return -1;
              return 2302; /* sse4_1_sign_extendv2qiv2si2 */

            case 2:
              if (!
#line 5101 "../../gcc/config/i386/mmx.md"
(TARGET_SSE4_1))
                return -1;
              return 2304; /* sse4_1_sign_extendv2qiv2hi2 */

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
recog_39 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12, x13;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  switch (GET_CODE (x3))
    {
    case XOR:
      if (pnum_clobbers == NULL)
        return -1;
      x4 = XEXP (x1, 0);
      operands[0] = x4;
      x5 = XEXP (x3, 0);
      operands[1] = x5;
      x6 = XEXP (x3, 1);
      operands[2] = x6;
      switch (GET_MODE (operands[0]))
        {
        case E_HImode:
          if (pattern743 (x2, 
E_HImode) != 0
              || !
#line 13607 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (XOR, HImode, operands, TARGET_APX_NDD)))
            return -1;
          *pnum_clobbers = 1;
          return 835; /* *notxorhi_1 */

        case E_QImode:
          if (pattern743 (x2, 
E_QImode) != 0
              || !
#line 13807 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (XOR, QImode, operands, TARGET_APX_NDD)))
            return -1;
          *pnum_clobbers = 1;
          return 871; /* *notxorqi_1 */

        default:
          return -1;
        }

    case REG:
    case SUBREG:
    case MEM:
      switch (pattern40 (x1))
        {
        case 0:
          switch (GET_MODE (operands[0]))
            {
            case E_TImode:
              if (!nonimmediate_operand (operands[0], E_TImode)
                  || GET_MODE (x2) != E_TImode
                  || !nonimmediate_operand (operands[1], E_TImode)
                  || !(
#line 14976 "../../gcc/config/i386/i386.md"
(ix86_unary_operator_ok (NOT, TImode, operands, TARGET_APX_NDD)) && 
#line 1236 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return -1;
              return 1031; /* *one_cmplti2_doubleword */

            case E_HImode:
              if (!nonimmediate_operand (operands[0], E_HImode)
                  || GET_MODE (x2) != E_HImode
                  || !nonimmediate_operand (operands[1], E_HImode)
                  || !
#line 14989 "../../gcc/config/i386/i386.md"
(ix86_unary_operator_ok (NOT, HImode, operands, TARGET_APX_NDD)))
                return -1;
              return 1032; /* *one_cmplhi2_1 */

            case E_QImode:
              if (!nonimmediate_operand (operands[0], E_QImode)
                  || GET_MODE (x2) != E_QImode
                  || !nonimmediate_operand (operands[1], E_QImode)
                  || !
#line 15033 "../../gcc/config/i386/i386.md"
(ix86_unary_operator_ok (NOT, QImode, operands, TARGET_APX_NDD)))
                return -1;
              return 1041; /* *one_cmplqi2_1 */

            case E_V4QImode:
              if (!register_operand (operands[0], E_V4QImode)
                  || GET_MODE (x2) != E_V4QImode
                  || !register_operand (operands[1], E_V4QImode))
                return -1;
              return 2259; /* one_cmplv4qi2 */

            case E_V2QImode:
              if (!register_operand (operands[0], E_V2QImode)
                  || GET_MODE (x2) != E_V2QImode
                  || !register_operand (operands[1], E_V2QImode))
                return -1;
              return 2260; /* one_cmplv2qi2 */

            case E_V2HImode:
              if (!register_operand (operands[0], E_V2HImode)
                  || GET_MODE (x2) != E_V2HImode
                  || !register_operand (operands[1], E_V2HImode))
                return -1;
              return 2261; /* one_cmplv2hi2 */

            default:
              return -1;
            }

        case 1:
          if (!
#line 15059 "../../gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)))
            return -1;
          return 1042; /* *one_cmplqi_1_slp */

        case 2:
          if (!
#line 15059 "../../gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)))
            return -1;
          return 1043; /* *one_cmplhi_1_slp */

        default:
          return -1;
        }

    case ZERO_EXTRACT:
      if (pnum_clobbers == NULL
          || GET_MODE (x3) != E_DImode)
        return -1;
      x6 = XEXP (x3, 1);
      if (x6 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
        return -1;
      x4 = XEXP (x1, 0);
      if (GET_CODE (x4) != ZERO_EXTRACT
          || GET_MODE (x4) != E_DImode)
        return -1;
      x7 = XEXP (x4, 1);
      if (x7 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
        return -1;
      x8 = XEXP (x4, 0);
      operands[0] = x8;
      if (!nonimmediate_operand (operands[0], E_DImode))
        return -1;
      x9 = XEXP (x4, 2);
      operands[1] = x9;
      if (!const_0_to_63_operand (operands[1], E_QImode)
          || GET_MODE (x2) != E_DImode)
        return -1;
      x5 = XEXP (x3, 0);
      if (!rtx_equal_p (x5, operands[0]))
        return -1;
      x10 = XEXP (x3, 2);
      if (!rtx_equal_p (x10, operands[1])
          || !
#line 19040 "../../gcc/config/i386/i386.md"
(TARGET_64BIT && (TARGET_USE_BT || reload_completed)))
        return -1;
      *pnum_clobbers = 1;
      return 1415; /* *btcq_imm */

    case UNSPEC:
      if (XVECLEN (x3, 0) != 3)
        return -1;
      x4 = XEXP (x1, 0);
      operands[0] = x4;
      x11 = XVECEXP (x3, 0, 0);
      operands[1] = x11;
      x12 = XVECEXP (x3, 0, 1);
      operands[2] = x12;
      x13 = XVECEXP (x3, 0, 2);
      operands[3] = x13;
      switch (XINT (x3, 1))
        {
        case 59:
          switch (GET_MODE (operands[0]))
            {
            case E_HImode:
              switch (pattern973 (x2))
                {
                case 0:
                  if (!(
#line 4469 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && ix86_pre_reload_split ()) && 
#line 308 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                    return -1;
                  return 3415; /* *avx512f_cmpv16si3 */

                case 1:
                  if (!(
#line 4469 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && ix86_pre_reload_split ()) && 
#line 311 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL)))
                    return -1;
                  return 3422; /* *avx512vl_cmpv16hf3 */

                case 2:
                  if (!(
#line 4469 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && ix86_pre_reload_split ()) && 
#line 313 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                    return -1;
                  return 3424; /* *avx512f_cmpv16sf3 */

                case 3:
                  if (!(
#line 4564 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && ix86_pre_reload_split ()) && 
#line 318 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                    return -1;
                  return 3480; /* *avx512vl_cmpv16qi3 */

                case 4:
                  if (!(
#line 4564 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && ix86_pre_reload_split ()) && 
#line 319 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                    return -1;
                  return 3486; /* *avx512vl_cmpv16hi3 */

                default:
                  return -1;
                }

            case E_QImode:
              switch (pattern974 (x2))
                {
                case 0:
                  if (!(
#line 4469 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && ix86_pre_reload_split ()) && 
#line 308 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                    return -1;
                  return 3416; /* *avx512vl_cmpv8si3 */

                case 1:
                  if (!(
#line 4469 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && ix86_pre_reload_split ()) && 
#line 308 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                    return -1;
                  return 3417; /* *avx512vl_cmpv4si3 */

                case 2:
                  if (!(
#line 4469 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && ix86_pre_reload_split ()) && 
#line 309 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                    return -1;
                  return 3418; /* *avx512f_cmpv8di3 */

                case 3:
                  if (!(
#line 4469 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && ix86_pre_reload_split ()) && 
#line 309 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                    return -1;
                  return 3419; /* *avx512vl_cmpv4di3 */

                case 4:
                  if (!(
#line 4469 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && ix86_pre_reload_split ()) && 
#line 309 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                    return -1;
                  return 3420; /* *avx512vl_cmpv2di3 */

                case 5:
                  if (!(
#line 4469 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && ix86_pre_reload_split ()) && 
#line 312 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL)))
                    return -1;
                  return 3423; /* *avx512fp16_cmpv8hf3 */

                case 6:
                  if (!(
#line 4469 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && ix86_pre_reload_split ()) && 
#line 313 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                    return -1;
                  return 3425; /* *avx512vl_cmpv8sf3 */

                case 7:
                  if (!(
#line 4469 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && ix86_pre_reload_split ()) && 
#line 313 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                    return -1;
                  return 3426; /* *avx512vl_cmpv4sf3 */

                case 8:
                  if (!(
#line 4469 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && ix86_pre_reload_split ()) && 
#line 314 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                    return -1;
                  return 3427; /* *avx512f_cmpv8df3 */

                case 9:
                  if (!(
#line 4469 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && ix86_pre_reload_split ()) && 
#line 314 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                    return -1;
                  return 3428; /* *avx512vl_cmpv4df3 */

                case 10:
                  if (!(
#line 4469 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && ix86_pre_reload_split ()) && 
#line 314 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                    return -1;
                  return 3429; /* *avx512vl_cmpv2df3 */

                case 11:
                  if (!(
#line 4564 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && ix86_pre_reload_split ()) && 
#line 319 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                    return -1;
                  return 3488; /* *avx512vl_cmpv8hi3 */

                default:
                  return -1;
                }

            default:
              return -1;
            }

        case 157:
          if (!const_0_to_7_operand (operands[3], E_SImode))
            return -1;
          switch (GET_MODE (operands[0]))
            {
            case E_HImode:
              switch (pattern1073 (x2))
                {
                case 0:
                  if (!(
#line 4564 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && ix86_pre_reload_split ()) && 
#line 318 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                    return -1;
                  return 3481; /* *avx512vl_cmpv16qi3 */

                case 1:
                  if (!(
#line 4564 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && ix86_pre_reload_split ()) && 
#line 319 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                    return -1;
                  return 3487; /* *avx512vl_cmpv16hi3 */

                case 2:
                  if (!(
#line 4762 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && ix86_pre_reload_split ()) && 
#line 501 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                    return -1;
                  return 3634; /* *avx512f_ucmpv16si3 */

                default:
                  return -1;
                }

            case E_QImode:
              switch (pattern1074 (x2))
                {
                case 0:
                  if (!(
#line 4564 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && ix86_pre_reload_split ()) && 
#line 319 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                    return -1;
                  return 3489; /* *avx512vl_cmpv8hi3 */

                case 1:
                  if (!(
#line 4762 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && ix86_pre_reload_split ()) && 
#line 501 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                    return -1;
                  return 3635; /* *avx512vl_ucmpv8si3 */

                case 2:
                  if (!(
#line 4762 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && ix86_pre_reload_split ()) && 
#line 501 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                    return -1;
                  return 3636; /* *avx512vl_ucmpv4si3 */

                case 3:
                  if (!(
#line 4762 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && ix86_pre_reload_split ()) && 
#line 502 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                    return -1;
                  return 3637; /* *avx512f_ucmpv8di3 */

                case 4:
                  if (!(
#line 4762 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && ix86_pre_reload_split ()) && 
#line 502 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                    return -1;
                  return 3638; /* *avx512vl_ucmpv4di3 */

                case 5:
                  if (!(
#line 4762 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && ix86_pre_reload_split ()) && 
#line 502 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                    return -1;
                  return 3639; /* *avx512vl_ucmpv2di3 */

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
}

 int
recog_59 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  switch (XVECLEN (x2, 0))
    {
    case 1:
      switch (XINT (x2, 1))
        {
        case 20:
          if (GET_MODE (x2) != E_BLKmode)
            return -1;
          x3 = XVECEXP (x2, 0, 0);
          if (x3 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
            return -1;
          x4 = XEXP (x1, 0);
          operands[0] = x4;
          if (!memory_operand (operands[0], E_BLKmode)
              || !
#line 28993 "../../gcc/config/i386/i386.md"
(TARGET_FXSR))
            return -1;
          return 1895; /* fxsave */

        case 22:
          if (GET_MODE (x2) != E_BLKmode)
            return -1;
          x3 = XVECEXP (x2, 0, 0);
          if (x3 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
            return -1;
          x4 = XEXP (x1, 0);
          operands[0] = x4;
          if (!memory_operand (operands[0], E_BLKmode)
              || !
#line 29003 "../../gcc/config/i386/i386.md"
(TARGET_64BIT && TARGET_FXSR))
            return -1;
          return 1896; /* fxsave64 */

        case 24:
          if (GET_MODE (x2) != E_BLKmode)
            return -1;
          x4 = XEXP (x1, 0);
          operands[0] = x4;
          if (!memory_operand (operands[0], E_BLKmode))
            return -1;
          x3 = XVECEXP (x2, 0, 0);
          operands[1] = x3;
          if (!register_operand (operands[1], E_DImode)
              || !
#line 29073 "../../gcc/config/i386/i386.md"
(!TARGET_64BIT && TARGET_XSAVE))
            return -1;
          return 1899; /* xsave */

        case 28:
          if (GET_MODE (x2) != E_BLKmode)
            return -1;
          x4 = XEXP (x1, 0);
          operands[0] = x4;
          if (!memory_operand (operands[0], E_BLKmode))
            return -1;
          x3 = XVECEXP (x2, 0, 0);
          operands[1] = x3;
          if (!register_operand (operands[1], E_DImode)
              || !(
#line 29073 "../../gcc/config/i386/i386.md"
(!TARGET_64BIT && TARGET_XSAVE) && 
#line 29034 "../../gcc/config/i386/i386.md"
(TARGET_XSAVEOPT)))
            return -1;
          return 1900; /* xsaveopt */

        case 34:
          if (GET_MODE (x2) != E_BLKmode)
            return -1;
          x4 = XEXP (x1, 0);
          operands[0] = x4;
          if (!memory_operand (operands[0], E_BLKmode))
            return -1;
          x3 = XVECEXP (x2, 0, 0);
          operands[1] = x3;
          if (!register_operand (operands[1], E_DImode)
              || !(
#line 29073 "../../gcc/config/i386/i386.md"
(!TARGET_64BIT && TARGET_XSAVE) && 
#line 29035 "../../gcc/config/i386/i386.md"
(TARGET_XSAVEC)))
            return -1;
          return 1901; /* xsavec */

        case 30:
          if (GET_MODE (x2) != E_BLKmode)
            return -1;
          x4 = XEXP (x1, 0);
          operands[0] = x4;
          if (!memory_operand (operands[0], E_BLKmode))
            return -1;
          x3 = XVECEXP (x2, 0, 0);
          operands[1] = x3;
          if (!register_operand (operands[1], E_DImode)
              || !(
#line 29073 "../../gcc/config/i386/i386.md"
(!TARGET_64BIT && TARGET_XSAVE) && 
#line 29036 "../../gcc/config/i386/i386.md"
(TARGET_XSAVES)))
            return -1;
          return 1902; /* xsaves */

        case 40:
          if (pnum_clobbers == NULL
              || GET_MODE (x2) != E_BLKmode)
            return -1;
          x3 = XVECEXP (x2, 0, 0);
          if (x3 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
            return -1;
          x4 = XEXP (x1, 0);
          operands[0] = x4;
          if (!memory_operand (operands[0], E_BLKmode)
              || !
#line 29204 "../../gcc/config/i386/i386.md"
(TARGET_80387))
            return -1;
          *pnum_clobbers = 8;
          return 1921; /* fnstenv */

        case 42:
          if (GET_MODE (x2) != E_HImode)
            return -1;
          x3 = XVECEXP (x2, 0, 0);
          if (x3 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
            return -1;
          x4 = XEXP (x1, 0);
          operands[0] = x4;
          if (!nonimmediate_operand (operands[0], E_HImode)
              || !
#line 29232 "../../gcc/config/i386/i386.md"
(TARGET_80387))
            return -1;
          return 1923; /* fnstsw */

        case 49:
          if (pattern56 (x1, 
E_CCZmode) != 0
              || !
#line 29518 "../../gcc/config/i386/i386.md"
(TARGET_RTM))
            return -1;
          return 1966; /* xtest_1 */

        case 74:
          if (pattern56 (x1, 
E_CCCmode) != 0
              || !
#line 29703 "../../gcc/config/i386/i386.md"
(TARGET_UINTR && TARGET_64BIT))
            return -1;
          return 1992; /* testui */

        case 88:
          if (GET_MODE (x2) != E_BLKmode)
            return -1;
          x3 = XVECEXP (x2, 0, 0);
          if (x3 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
            return -1;
          x4 = XEXP (x1, 0);
          operands[0] = x4;
          if (!memory_operand (operands[0], E_BLKmode)
              || !
#line 29931 "../../gcc/config/i386/i386.md"
(TARGET_AMX_TILE))
            return -1;
          return 2008; /* sttilecfg */

        case 89:
          x4 = XEXP (x1, 0);
          operands[0] = x4;
          x3 = XVECEXP (x2, 0, 0);
          operands[1] = x3;
          switch (GET_MODE (operands[0]))
            {
            case E_QImode:
              if (!register_operand (operands[0], E_QImode)
                  || GET_MODE (x2) != E_QImode
                  || !memory_operand (operands[1], E_QImode)
                  || !
#line 29942 "../../gcc/config/i386/i386.md"
(TARGET_MOVRS && TARGET_64BIT))
                return -1;
              return 2009; /* movrsqi */

            case E_HImode:
              if (!register_operand (operands[0], E_HImode)
                  || GET_MODE (x2) != E_HImode
                  || !memory_operand (operands[1], E_HImode)
                  || !
#line 29942 "../../gcc/config/i386/i386.md"
(TARGET_MOVRS && TARGET_64BIT))
                return -1;
              return 2010; /* movrshi */

            default:
              return -1;
            }

        default:
          return -1;
        }

    case 2:
      switch (XINT (x2, 1))
        {
        case 24:
          if (pattern91 (x1) != 0
              || !
#line 29086 "../../gcc/config/i386/i386.md"
(TARGET_64BIT && TARGET_XSAVE))
            return -1;
          return 1903; /* xsave_rex64 */

        case 28:
          if (pattern91 (x1) != 0
              || !(
#line 29086 "../../gcc/config/i386/i386.md"
(TARGET_64BIT && TARGET_XSAVE) && 
#line 29034 "../../gcc/config/i386/i386.md"
(TARGET_XSAVEOPT)))
            return -1;
          return 1904; /* xsaveopt_rex64 */

        case 34:
          if (pattern91 (x1) != 0
              || !(
#line 29086 "../../gcc/config/i386/i386.md"
(TARGET_64BIT && TARGET_XSAVE) && 
#line 29035 "../../gcc/config/i386/i386.md"
(TARGET_XSAVEC)))
            return -1;
          return 1905; /* xsavec_rex64 */

        case 30:
          if (pattern91 (x1) != 0
              || !(
#line 29086 "../../gcc/config/i386/i386.md"
(TARGET_64BIT && TARGET_XSAVE) && 
#line 29036 "../../gcc/config/i386/i386.md"
(TARGET_XSAVES)))
            return -1;
          return 1906; /* xsaves_rex64 */

        case 26:
          if (pattern91 (x1) != 0
              || !
#line 29100 "../../gcc/config/i386/i386.md"
(TARGET_64BIT && TARGET_XSAVE))
            return -1;
          return 1907; /* xsave64 */

        case 29:
          if (pattern91 (x1) != 0
              || !(
#line 29100 "../../gcc/config/i386/i386.md"
(TARGET_64BIT && TARGET_XSAVE) && 
#line 29040 "../../gcc/config/i386/i386.md"
(TARGET_XSAVEOPT)))
            return -1;
          return 1908; /* xsaveopt64 */

        case 35:
          if (pattern91 (x1) != 0
              || !(
#line 29100 "../../gcc/config/i386/i386.md"
(TARGET_64BIT && TARGET_XSAVE) && 
#line 29041 "../../gcc/config/i386/i386.md"
(TARGET_XSAVEC)))
            return -1;
          return 1909; /* xsavec64 */

        case 32:
          if (pattern91 (x1) != 0
              || !(
#line 29100 "../../gcc/config/i386/i386.md"
(TARGET_64BIT && TARGET_XSAVE) && 
#line 29042 "../../gcc/config/i386/i386.md"
(TARGET_XSAVES)))
            return -1;
          return 1910; /* xsaves64 */

        case 79:
          switch (pattern92 (x1))
            {
            case 0:
              if (!(
#line 29685 "../../gcc/config/i386/i386.md"
(TARGET_ENQCMD) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode)))
                return -1;
              return 1986; /* enqcmd_si */

            case 1:
              if (!(
#line 29685 "../../gcc/config/i386/i386.md"
(TARGET_ENQCMD) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode)))
                return -1;
              return 1988; /* enqcmd_di */

            default:
              return -1;
            }

        case 80:
          switch (pattern92 (x1))
            {
            case 0:
              if (!(
#line 29685 "../../gcc/config/i386/i386.md"
(TARGET_ENQCMD) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode)))
                return -1;
              return 1987; /* enqcmds_si */

            case 1:
              if (!(
#line 29685 "../../gcc/config/i386/i386.md"
(TARGET_ENQCMD) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode)))
                return -1;
              return 1989; /* enqcmds_di */

            default:
              return -1;
            }

        case 69:
          if (pattern93 (x1) != 0
              || !
#line 29724 "../../gcc/config/i386/i386.md"
(!TARGET_64BIT && TARGET_WAITPKG))
            return -1;
          return 1994; /* umwait */

        case 71:
          if (pattern93 (x1) != 0
              || !
#line 29751 "../../gcc/config/i386/i386.md"
(!TARGET_64BIT && TARGET_WAITPKG))
            return -1;
          return 1998; /* tpause */

        case 111:
          if (pnum_clobbers == NULL)
            return -1;
          x4 = XEXP (x1, 0);
          operands[0] = x4;
          x5 = XVECEXP (x2, 0, 1);
          operands[2] = x5;
          if (!const_int_operand (operands[2], E_SImode))
            return -1;
          x3 = XVECEXP (x2, 0, 0);
          switch (GET_CODE (x3))
            {
            case PLUS:
              switch (pattern859 (x2))
                {
                case 0:
                  *pnum_clobbers = 1;
                  return 11047; /* atomic_addqi */

                case 1:
                  *pnum_clobbers = 1;
                  return 11048; /* atomic_addhi */

                default:
                  return -1;
                }

            case MINUS:
              switch (pattern859 (x2))
                {
                case 0:
                  *pnum_clobbers = 1;
                  return 11051; /* atomic_subqi */

                case 1:
                  *pnum_clobbers = 1;
                  return 11052; /* atomic_subhi */

                default:
                  return -1;
                }

            case AND:
              switch (pattern859 (x2))
                {
                case 0:
                  *pnum_clobbers = 1;
                  return 11055; /* atomic_andqi */

                case 1:
                  *pnum_clobbers = 1;
                  return 11058; /* atomic_andhi */

                default:
                  return -1;
                }

            case IOR:
              switch (pattern859 (x2))
                {
                case 0:
                  *pnum_clobbers = 1;
                  return 11056; /* atomic_orqi */

                case 1:
                  *pnum_clobbers = 1;
                  return 11059; /* atomic_orhi */

                default:
                  return -1;
                }

            case XOR:
              switch (pattern859 (x2))
                {
                case 0:
                  *pnum_clobbers = 1;
                  return 11057; /* atomic_xorqi */

                case 1:
                  *pnum_clobbers = 1;
                  return 11060; /* atomic_xorhi */

                default:
                  return -1;
                }

            default:
              return -1;
            }

        default:
          return -1;
        }

    case 3:
      if (pattern44 (x1, 
E_CCCmode) != 0)
        return -1;
      x3 = XVECEXP (x2, 0, 0);
      operands[0] = x3;
      x5 = XVECEXP (x2, 0, 1);
      operands[1] = x5;
      x6 = XVECEXP (x2, 0, 2);
      operands[2] = x6;
      switch (XINT (x2, 1))
        {
        case 15:
          if (!nonimmediate_operand (operands[1], E_SImode)
              || !const_int_operand (operands[2], E_SImode))
            return -1;
          switch (GET_MODE (operands[0]))
            {
            case E_SImode:
              if (!register_operand (operands[0], E_SImode)
                  || !
#line 29289 "../../gcc/config/i386/i386.md"
(TARGET_LWP))
                return -1;
              return 1931; /* lwp_lwpinssi */

            case E_DImode:
              if (!register_operand (operands[0], E_DImode)
                  || !(
#line 29289 "../../gcc/config/i386/i386.md"
(TARGET_LWP) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return -1;
              return 1932; /* lwp_lwpinsdi */

            default:
              return -1;
            }

        case 69:
          if (!register_operand (operands[0], E_SImode)
              || !register_operand (operands[1], E_SImode)
              || !register_operand (operands[2], E_SImode)
              || !
#line 29734 "../../gcc/config/i386/i386.md"
(TARGET_64BIT && TARGET_WAITPKG))
            return -1;
          return 1995; /* umwait_rex64 */

        case 71:
          if (!register_operand (operands[0], E_SImode)
              || !register_operand (operands[1], E_SImode)
              || !register_operand (operands[2], E_SImode)
              || !
#line 29761 "../../gcc/config/i386/i386.md"
(TARGET_64BIT && TARGET_WAITPKG))
            return -1;
          return 1999; /* tpause_rex64 */

        default:
          return -1;
        }

    default:
      return -1;
    }
}

 int
recog_71 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  switch (GET_CODE (x4))
    {
    case REG:
    case SUBREG:
    case MEM:
      operands[1] = x4;
      x5 = XEXP (x3, 1);
      operands[2] = x5;
      switch (pattern276 (x2))
        {
        case 0:
          if (!nonimmediate_operand (operands[1], E_QImode)
              || !general_operand (operands[2], E_QImode))
            return -1;
          if (
#line 6677 "../../gcc/config/i386/i386.md"
(TARGET_APX_NDD && TARGET_APX_NF
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
            return 288; /* *addqi_1_zextsi_nf */
          if (pnum_clobbers == NULL
              || !
#line 6677 "../../gcc/config/i386/i386.md"
(TARGET_APX_NDD && true
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
            return -1;
          *pnum_clobbers = 1;
          return 289; /* *addqi_1_zextsi */

        case 1:
          if (!nonimmediate_operand (operands[1], E_HImode)
              || !general_operand (operands[2], E_HImode))
            return -1;
          if (
#line 6715 "../../gcc/config/i386/i386.md"
(TARGET_APX_NDD && TARGET_APX_NF
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
            return 292; /* *addhi_1_zextsi_nf */
          if (pnum_clobbers == NULL
              || !
#line 6715 "../../gcc/config/i386/i386.md"
(TARGET_APX_NDD && true
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
            return -1;
          *pnum_clobbers = 1;
          return 293; /* *addhi_1_zextsi */

        case 2:
          if (!nonimmediate_operand (operands[1], E_QImode)
              || !general_operand (operands[2], E_QImode))
            return -1;
          if (
#line 6677 "../../gcc/config/i386/i386.md"
(TARGET_APX_NDD && TARGET_APX_NF
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
            return 290; /* *addqi_1_zextdi_nf */
          if (pnum_clobbers == NULL
              || !
#line 6677 "../../gcc/config/i386/i386.md"
(TARGET_APX_NDD && true
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
            return -1;
          *pnum_clobbers = 1;
          return 291; /* *addqi_1_zextdi */

        case 3:
          if (!nonimmediate_operand (operands[1], E_HImode)
              || !general_operand (operands[2], E_HImode))
            return -1;
          if (
#line 6715 "../../gcc/config/i386/i386.md"
(TARGET_APX_NDD && TARGET_APX_NF
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
            return 294; /* *addhi_1_zextdi_nf */
          if (pnum_clobbers == NULL
              || !
#line 6715 "../../gcc/config/i386/i386.md"
(TARGET_APX_NDD && true
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
            return -1;
          *pnum_clobbers = 1;
          return 295; /* *addhi_1_zextdi */

        case 4:
          if (pnum_clobbers == NULL
              || !nonimmediate_operand (operands[1], E_SImode)
              || !x86_64_general_operand (operands[2], E_SImode)
              || !
#line 6760 "../../gcc/config/i386/i386.md"
(TARGET_64BIT
   && ix86_binary_operator_ok (PLUS, SImode, operands, TARGET_APX_NDD)))
            return -1;
          *pnum_clobbers = 1;
          return 296; /* addsi_1_zext */

        default:
          return -1;
        }

    case PLUS:
      if (pnum_clobbers == NULL)
        return -1;
      x6 = XEXP (x4, 0);
      switch (GET_CODE (x6))
        {
        case LTU:
        case UNLT:
          operands[3] = x6;
          x7 = XEXP (x6, 0);
          if (GET_CODE (x7) != REG
              || REGNO (x7) != 17)
            return -1;
          x8 = XEXP (x6, 1);
          if (x8 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
            return -1;
          x9 = XEXP (x4, 1);
          operands[1] = x9;
          x5 = XEXP (x3, 1);
          operands[2] = x5;
          switch (pattern276 (x2))
            {
            case 0:
              if (pattern1539 (x4, 
E_QImode) != 0
                  || !
#line 8895 "../../gcc/config/i386/i386.md"
(TARGET_APX_NDD
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
                return -1;
              *pnum_clobbers = 1;
              return 466; /* *addqi3_carry_zextsi */

            case 1:
              if (pattern1539 (x4, 
E_HImode) != 0
                  || !
#line 8914 "../../gcc/config/i386/i386.md"
(TARGET_APX_NDD
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
                return -1;
              *pnum_clobbers = 1;
              return 468; /* *addhi3_carry_zextsi */

            case 2:
              if (pattern1539 (x4, 
E_QImode) != 0
                  || !
#line 8895 "../../gcc/config/i386/i386.md"
(TARGET_APX_NDD
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
                return -1;
              *pnum_clobbers = 1;
              return 467; /* *addqi3_carry_zextdi */

            case 3:
              if (pattern1539 (x4, 
E_HImode) != 0
                  || !
#line 8914 "../../gcc/config/i386/i386.md"
(TARGET_APX_NDD
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
                return -1;
              *pnum_clobbers = 1;
              return 469; /* *addhi3_carry_zextdi */

            case 4:
              if (pattern1539 (x4, 
E_SImode) != 0
                  || !
#line 8933 "../../gcc/config/i386/i386.md"
(TARGET_64BIT
   && ix86_binary_operator_ok (PLUS, SImode, operands, TARGET_APX_NDD)))
                return -1;
              *pnum_clobbers = 1;
              return 470; /* *addsi3_carry_zext */

            default:
              return -1;
            }

        default:
          return -1;
        }

    case LTU:
    case UNLT:
      switch (pattern277 (x2, pnum_clobbers))
        {
        case 0:
          if (!ix86_carry_flag_operator (operands[2], E_QImode)
              || !nonimmediate_operand (operands[1], E_QImode)
              || !
#line 8952 "../../gcc/config/i386/i386.md"
(TARGET_APX_NDD))
            return -1;
          *pnum_clobbers = 1;
          return 472; /* *addqi3_carry_zextsi_0 */

        case 1:
          if (!ix86_carry_flag_operator (operands[2], E_HImode)
              || !nonimmediate_operand (operands[1], E_HImode)
              || !
#line 8966 "../../gcc/config/i386/i386.md"
(TARGET_APX_NDD))
            return -1;
          *pnum_clobbers = 1;
          return 474; /* *addhi3_carry_zextsi_0 */

        case 2:
          if (!ix86_carry_flag_operator (operands[2], E_QImode)
              || !nonimmediate_operand (operands[1], E_QImode)
              || !
#line 8952 "../../gcc/config/i386/i386.md"
(TARGET_APX_NDD))
            return -1;
          *pnum_clobbers = 1;
          return 473; /* *addqi3_carry_zextdi_0 */

        case 3:
          if (!ix86_carry_flag_operator (operands[2], E_HImode)
              || !nonimmediate_operand (operands[1], E_HImode)
              || !
#line 8966 "../../gcc/config/i386/i386.md"
(TARGET_APX_NDD))
            return -1;
          *pnum_clobbers = 1;
          return 475; /* *addhi3_carry_zextdi_0 */

        case 4:
          if (!ix86_carry_flag_operator (operands[2], E_SImode)
              || !nonimmediate_operand (operands[1], E_SImode)
              || !
#line 8980 "../../gcc/config/i386/i386.md"
(TARGET_64BIT))
            return -1;
          *pnum_clobbers = 1;
          return 476; /* *addsi3_carry_zext_0 */

        default:
          return -1;
        }

    case GE:
    case GEU:
      switch (pattern277 (x2, pnum_clobbers))
        {
        case 0:
          if (!ix86_carry_flag_unset_operator (operands[2], E_QImode)
              || !nonimmediate_operand (operands[1], E_QImode)
              || !
#line 8997 "../../gcc/config/i386/i386.md"
(TARGET_APX_NDD))
            return -1;
          *pnum_clobbers = 1;
          return 478; /* *addqi3_carry_zextsi_0r */

        case 1:
          if (!ix86_carry_flag_unset_operator (operands[2], E_HImode)
              || !nonimmediate_operand (operands[1], E_HImode)
              || !
#line 9011 "../../gcc/config/i386/i386.md"
(TARGET_APX_NDD))
            return -1;
          *pnum_clobbers = 1;
          return 480; /* *addhi3_carry_zextsi_0r */

        case 2:
          if (!ix86_carry_flag_unset_operator (operands[2], E_QImode)
              || !nonimmediate_operand (operands[1], E_QImode)
              || !
#line 8997 "../../gcc/config/i386/i386.md"
(TARGET_APX_NDD))
            return -1;
          *pnum_clobbers = 1;
          return 479; /* *addqi3_carry_zextdi_0r */

        case 3:
          if (!ix86_carry_flag_unset_operator (operands[2], E_HImode)
              || !nonimmediate_operand (operands[1], E_HImode)
              || !
#line 9011 "../../gcc/config/i386/i386.md"
(TARGET_APX_NDD))
            return -1;
          *pnum_clobbers = 1;
          return 481; /* *addhi3_carry_zextdi_0r */

        case 4:
          if (!ix86_carry_flag_unset_operator (operands[2], E_SImode)
              || !nonimmediate_operand (operands[1], E_SImode)
              || !
#line 9025 "../../gcc/config/i386/i386.md"
(TARGET_64BIT))
            return -1;
          *pnum_clobbers = 1;
          return 482; /* *addsi3_carry_zext_0r */

        default:
          return -1;
        }

    case UNSPEC:
      if (pnum_clobbers == NULL
          || XVECLEN (x4, 0) != 1
          || XINT (x4, 1) != 19
          || GET_MODE (x4) != E_SImode)
        return -1;
      x10 = XVECEXP (x4, 0, 0);
      if (x10 != const_int_rtx[MAX_SAVED_CONST_INT + 0]
          || !register_operand (operands[0], E_DImode)
          || GET_MODE (x2) != E_DImode
          || GET_MODE (x3) != E_SImode)
        return -1;
      x5 = XEXP (x3, 1);
      operands[1] = x5;
      if (!register_operand (operands[1], E_SImode)
          || !
#line 23090 "../../gcc/config/i386/i386.md"
(TARGET_X32))
        return -1;
      *pnum_clobbers = 1;
      return 1657; /* *add_tp_x32_zext */

    default:
      return -1;
    }
}

 int
recog_78 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  x5 = XEXP (x4, 0);
  operands[2] = x5;
  x6 = XEXP (x3, 0);
  if (!rtx_equal_p (x6, operands[0]))
    return -1;
  x7 = XEXP (x2, 1);
  x8 = XEXP (x7, 0);
  x9 = XEXP (x8, 1);
  x10 = XEXP (x9, 1);
  x11 = XEXP (x10, 0);
  if (!rtx_equal_p (x11, operands[2]))
    return -1;
  if (
#line 15401 "../../gcc/config/i386/i386.md"
(TARGET_64BIT && TARGET_APX_NF))
    return 1062; /* x86_64_shld_nf */
  if (pnum_clobbers == NULL
      || !
#line 15401 "../../gcc/config/i386/i386.md"
(TARGET_64BIT && true))
    return -1;
  *pnum_clobbers = 1;
  return 1063; /* x86_64_shld */
}

 int
recog_79 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  x5 = XEXP (x4, 0);
  operands[2] = x5;
  x6 = XEXP (x3, 0);
  if (!rtx_equal_p (x6, operands[0]))
    return -1;
  x7 = XEXP (x2, 1);
  x8 = XEXP (x7, 0);
  x9 = XEXP (x8, 1);
  x10 = XEXP (x9, 1);
  x11 = XEXP (x10, 0);
  if (!rtx_equal_p (x11, operands[2]))
    return -1;
  if (
#line 16786 "../../gcc/config/i386/i386.md"
(TARGET_64BIT && TARGET_APX_NF))
    return 1142; /* x86_64_shrd_nf */
  if (pnum_clobbers == NULL
      || !
#line 16786 "../../gcc/config/i386/i386.md"
(TARGET_64BIT && true))
    return -1;
  *pnum_clobbers = 1;
  return 1143; /* x86_64_shrd */
}

 int
recog_82 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  operands[0] = x2;
  x3 = XEXP (x1, 1);
  x4 = XEXP (x3, 0);
  switch (GET_CODE (x4))
    {
    case ASHIFT:
      x5 = XEXP (x4, 0);
      switch (GET_CODE (x5))
        {
        case REG:
        case SUBREG:
          operands[1] = x5;
          x6 = XEXP (x4, 1);
          operands[2] = x6;
          x7 = XEXP (x3, 1);
          switch (GET_CODE (x7))
            {
            case CONST_INT:
            case CONST_WIDE_INT:
              operands[3] = x7;
              switch (GET_MODE (operands[0]))
                {
                case E_SImode:
                  if (pattern604 (x3, 
E_SImode) != 0
                      || !
#line 8039 "../../gcc/config/i386/i386.md"
((unsigned HOST_WIDE_INT) INTVAL (operands[3])
   < (HOST_WIDE_INT_1U << INTVAL (operands[2]))))
                    return -1;
                  return 377; /* *leasi_general_4 */

                case E_DImode:
                  if (GET_MODE (x3) != E_DImode
                      || GET_MODE (x4) != E_DImode)
                    return -1;
                  if (register_operand (operands[0], E_DImode)
                      && register_no_SP_operand (operands[1], E_DImode)
                      && const_0_to_3_operand (operands[2], E_VOIDmode)
                      && const_int_operand (operands[3], E_VOIDmode)
                      && (
#line 8039 "../../gcc/config/i386/i386.md"
((unsigned HOST_WIDE_INT) INTVAL (operands[3])
   < (HOST_WIDE_INT_1U << INTVAL (operands[2]))) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                    return 379; /* *leadi_general_4 */
                  if (!nonimmediate_operand (operands[0], E_DImode)
                      || !register_operand (operands[1], E_DImode)
                      || !const_int_operand (operands[2], E_QImode)
                      || !const_scalar_int_operand (operands[3], E_DImode)
                      || !(
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
                  return 930; /* *concatsidi3_5 */

                default:
                  return -1;
                }

            case ZERO_EXTEND:
              if (pattern606 (x3, 
E_SImode, 
E_DImode) != 0
                  || !(
#line 14060 "../../gcc/config/i386/i386.md"
(INTVAL (operands[2]) == 4 * BITS_PER_UNIT) && 
#line 1235 "../../gcc/config/i386/i386.md"
(!TARGET_64BIT)))
                return -1;
              return 894; /* *concatsidi3_1 */

            default:
              return -1;
            }

        case SIGN_EXTEND:
          switch (pattern256 (x3, 
E_SImode, 
E_DImode))
            {
            case 0:
              if (!(
#line 14096 "../../gcc/config/i386/i386.md"
(INTVAL (operands[2]) == 4 * BITS_PER_UNIT) && 
#line 1235 "../../gcc/config/i386/i386.md"
(!TARGET_64BIT)))
                return -1;
              return 906; /* *concatsidi3_3 */

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
              return 936; /* *concatsidi3_6 */

            default:
              return -1;
            }

        case ZERO_EXTEND:
          switch (pattern256 (x3, 
E_SImode, 
E_DImode))
            {
            case 0:
              if (!(
#line 14096 "../../gcc/config/i386/i386.md"
(INTVAL (operands[2]) == 4 * BITS_PER_UNIT) && 
#line 1235 "../../gcc/config/i386/i386.md"
(!TARGET_64BIT)))
                return -1;
              return 909; /* *concatsidi3_3 */

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
              return 939; /* *concatsidi3_6 */

            default:
              return -1;
            }

        case CONST_INT:
          switch (pattern286 (x3, pnum_clobbers))
            {
            case 0:
              x6 = XEXP (x4, 1);
              operands[2] = x6;
              if (register_operand (operands[2], E_QImode))
                {
                  switch (pattern752 (x3))
                    {
                    case 0:
                      if (
#line 18805 "../../gcc/config/i386/i386.md"
(TARGET_USE_BT))
                        {
                          *pnum_clobbers = 1;
                          return 1392; /* *btcsi */
                        }
                      break;

                    case 1:
                      if ((
#line 18805 "../../gcc/config/i386/i386.md"
(TARGET_USE_BT) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                        {
                          *pnum_clobbers = 1;
                          return 1394; /* *btcdi */
                        }
                      break;

                    default:
                      break;
                    }
                }
              if (GET_CODE (x6) != SUBREG)
                return -1;
              switch (pattern761 (x3))
                {
                case 0:
                  if (!
#line 18824 "../../gcc/config/i386/i386.md"
(TARGET_USE_BT
   && (INTVAL (operands[2]) & (GET_MODE_BITSIZE (SImode)-1))
      == GET_MODE_BITSIZE (SImode)-1
   && ix86_pre_reload_split ()))
                    return -1;
                  *pnum_clobbers = 1;
                  return 1396; /* *btcsi_mask */

                case 1:
                  if (!(
#line 18824 "../../gcc/config/i386/i386.md"
(TARGET_USE_BT
   && (INTVAL (operands[2]) & (GET_MODE_BITSIZE (DImode)-1))
      == GET_MODE_BITSIZE (DImode)-1
   && ix86_pre_reload_split ()) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                    return -1;
                  *pnum_clobbers = 1;
                  return 1398; /* *btcdi_mask */

                default:
                  return -1;
                }

            case 1:
              if (!
#line 18852 "../../gcc/config/i386/i386.md"
(TARGET_USE_BT
   && (INTVAL (operands[2]) & (GET_MODE_BITSIZE (SImode)-1))
      == GET_MODE_BITSIZE (SImode)-1
   && ix86_pre_reload_split ()))
                return -1;
              *pnum_clobbers = 1;
              return 1400; /* *btcsi_mask_1 */

            case 2:
              if (!(
#line 18852 "../../gcc/config/i386/i386.md"
(TARGET_USE_BT
   && (INTVAL (operands[2]) & (GET_MODE_BITSIZE (DImode)-1))
      == GET_MODE_BITSIZE (DImode)-1
   && ix86_pre_reload_split ()) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return -1;
              *pnum_clobbers = 1;
              return 1402; /* *btcdi_mask_1 */

            default:
              return -1;
            }

        default:
          return -1;
        }

    case REG:
    case SUBREG:
    case MEM:
      operands[1] = x4;
      x7 = XEXP (x3, 1);
      operands[2] = x7;
      switch (pattern435 (x3))
        {
        case 0:
          if (pnum_clobbers != NULL
              && x86_64_hilo_general_operand (operands[2], E_DImode)
              && (
#line 13527 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (XOR, DImode, operands, TARGET_APX_NDD)) && 
#line 1235 "../../gcc/config/i386/i386.md"
(!TARGET_64BIT)))
            {
              *pnum_clobbers = 1;
              return 820; /* *xordi3_doubleword */
            }
          if (x86_64_general_operand (operands[2], E_DImode))
            {
              if ((
#line 13585 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (XOR, DImode, operands, TARGET_APX_NDD)
   && TARGET_APX_NF) && 
#line 1164 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return 833; /* *xordi_1_nf */
              if (pnum_clobbers != NULL
                  && (
#line 13585 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (XOR, DImode, operands, TARGET_APX_NDD)
   && true) && 
#line 1164 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                {
                  *pnum_clobbers = 1;
                  return 834; /* *xordi_1 */
                }
            }
          if (pnum_clobbers == NULL
              || !const_int_operand (operands[2], E_DImode)
              || !
#line 13655 "../../gcc/config/i386/i386.md"
(TARGET_64BIT && TARGET_USE_BT
   && ix86_binary_operator_ok (XOR, DImode, operands)
   && IN_RANGE (exact_log2 (INTVAL (operands[2])), 31, 63)))
            return -1;
          *pnum_clobbers = 1;
          return 839; /* *xordi_1_btc */

        case 1:
          if (
#line 13585 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (XOR, SImode, operands, TARGET_APX_NDD)
   && TARGET_APX_NF))
            return 829; /* *xorsi_1_nf */
          if (pnum_clobbers == NULL
              || !
#line 13585 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (XOR, SImode, operands, TARGET_APX_NDD)
   && true))
            return -1;
          *pnum_clobbers = 1;
          return 830; /* *xorsi_1 */

        default:
          return -1;
        }

    case AND:
      if (pnum_clobbers == NULL)
        return -1;
      x5 = XEXP (x4, 0);
      if (GET_CODE (x5) != XOR)
        return -1;
      x8 = XEXP (x5, 0);
      operands[1] = x8;
      x9 = XEXP (x5, 1);
      operands[2] = x9;
      x6 = XEXP (x4, 1);
      operands[3] = x6;
      x7 = XEXP (x3, 1);
      if (!rtx_equal_p (x7, operands[1]))
        return -1;
      switch (GET_MODE (operands[0]))
        {
        case E_SImode:
          if (pattern1088 (x3, 
E_SImode) != 0
              || !
#line 13684 "../../gcc/config/i386/i386.md"
(TARGET_BMI && ix86_pre_reload_split ()))
            return -1;
          *pnum_clobbers = 1;
          return 841; /* *xor2andn */

        case E_DImode:
          if (pattern1088 (x3, 
E_DImode) != 0
              || !(
#line 13684 "../../gcc/config/i386/i386.md"
(TARGET_BMI && ix86_pre_reload_split ()) && 
#line 1164 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return -1;
          *pnum_clobbers = 1;
          return 842; /* *xor2andn */

        default:
          return -1;
        }

    case ZERO_EXTEND:
      switch (pattern111 (x3))
        {
        case 0:
          if (pnum_clobbers != NULL)
            {
              x7 = XEXP (x3, 1);
              operands[2] = x7;
              if (x86_64_zext_immediate_operand (operands[2], E_DImode)
                  && register_operand (operands[0], E_DImode)
                  && 
#line 13762 "../../gcc/config/i386/i386.md"
(TARGET_64BIT
   && ix86_binary_operator_ok (XOR, SImode, operands, TARGET_APX_NDD)))
                {
                  *pnum_clobbers = 1;
                  return 866; /* *xorsi_1_zext_imm */
                }
            }
          x7 = XEXP (x3, 1);
          operands[2] = x7;
          if (!const_scalar_int_operand (operands[2], E_DImode)
              || !nonimmediate_operand (operands[0], E_DImode)
              || !(
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
          return 948; /* *concatsidi3_7 */

        case 1:
          if (!(
#line 14077 "../../gcc/config/i386/i386.md"
(INTVAL (operands[3]) == 4 * BITS_PER_UNIT) && 
#line 1235 "../../gcc/config/i386/i386.md"
(!TARGET_64BIT)))
            return -1;
          return 900; /* *concatsidi3_2 */

        case 2:
          if (!(
#line 14121 "../../gcc/config/i386/i386.md"
(INTVAL (operands[3]) == 4 * BITS_PER_UNIT) && 
#line 1235 "../../gcc/config/i386/i386.md"
(!TARGET_64BIT)))
            return -1;
          return 918; /* *concatsidi3_4 */

        case 3:
          if (!(
#line 14121 "../../gcc/config/i386/i386.md"
(INTVAL (operands[3]) == 4 * BITS_PER_UNIT) && 
#line 1235 "../../gcc/config/i386/i386.md"
(!TARGET_64BIT)))
            return -1;
          return 921; /* *concatsidi3_4 */

        default:
          return -1;
        }

    case SIGN_EXTEND:
      if (pnum_clobbers == NULL
          || GET_MODE (x4) != E_DImode)
        return -1;
      x5 = XEXP (x4, 0);
      if (pattern442 (x5, 
SUBREG, 
63) != 0)
        return -1;
      x9 = XEXP (x5, 1);
      if (maybe_ne (SUBREG_BYTE (x9), 0)
          || GET_MODE (x9) != E_SImode)
        return -1;
      x10 = XEXP (x9, 0);
      if (GET_CODE (x10) != CLZ
          || GET_MODE (x10) != E_DImode)
        return -1;
      x7 = XEXP (x3, 1);
      if (x7 != const_int_rtx[MAX_SAVED_CONST_INT + 63]
          || !register_operand (operands[0], E_DImode)
          || GET_MODE (x3) != E_DImode)
        return -1;
      x11 = XEXP (x10, 0);
      operands[1] = x11;
      if (!nonimmediate_operand (operands[1], E_DImode)
          || !
#line 21312 "../../gcc/config/i386/i386.md"
(!TARGET_LZCNT && TARGET_64BIT && ix86_pre_reload_split ()))
        return -1;
      *pnum_clobbers = 1;
      return 1530; /* *bsr_rex64_2 */

    case PLUS:
      if (pnum_clobbers == NULL)
        return -1;
      x6 = XEXP (x4, 1);
      if (GET_CODE (x6) != CONST_INT)
        return -1;
      x5 = XEXP (x4, 0);
      operands[1] = x5;
      x7 = XEXP (x3, 1);
      if (!rtx_equal_p (x7, operands[1]))
        return -1;
      switch (XWINT (x6, 0))
        {
        case -1L:
          switch (GET_MODE (operands[0]))
            {
            case E_SImode:
              if (pattern755 (x3, 
E_SImode) != 0
                  || !
#line 21807 "../../gcc/config/i386/i386.md"
(TARGET_BMI))
                return -1;
              *pnum_clobbers = 1;
              return 1576; /* *bmi_blsmsk_si */

            case E_DImode:
              if (pattern755 (x3, 
E_DImode) != 0
                  || !(
#line 21807 "../../gcc/config/i386/i386.md"
(TARGET_BMI) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return -1;
              *pnum_clobbers = 1;
              return 1577; /* *bmi_blsmsk_di */

            default:
              return -1;
            }

        case 1L:
          switch (GET_MODE (operands[0]))
            {
            case E_SImode:
              if (pattern755 (x3, 
E_SImode) != 0
                  || !
#line 22068 "../../gcc/config/i386/i386.md"
(TARGET_TBM))
                return -1;
              *pnum_clobbers = 1;
              return 1606; /* *tbm_blcmsk_si */

            case E_DImode:
              if (pattern755 (x3, 
E_DImode) != 0
                  || !(
#line 22068 "../../gcc/config/i386/i386.md"
(TARGET_TBM) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return -1;
              *pnum_clobbers = 1;
              return 1607; /* *tbm_blcmsk_di */

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
recog_96 (rtx x1 ATTRIBUTE_UNUSED,
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
    case CONST_INT:
    case REG:
    case SUBREG:
    case MEM:
      switch (pattern117 (x3, pnum_clobbers))
        {
        case 0:
          if (pnum_clobbers != NULL
              && pattern622 (x3) == 0
              && (
#line 15203 "../../gcc/config/i386/i386.md"
(((INTVAL (operands[3]) & (4 * BITS_PER_UNIT)) == 0
    || ((INTVAL (operands[3]) & (2 * 4 * BITS_PER_UNIT - 1))
	 == (2 * 4 * BITS_PER_UNIT - 1)))
   && ix86_pre_reload_split ()) && 
#line 1235 "../../gcc/config/i386/i386.md"
(!TARGET_64BIT)))
            {
              *pnum_clobbers = 1;
              return 1052; /* *ashldi3_doubleword_mask */
            }
          x5 = XEXP (x3, 1);
          operands[2] = x5;
          res = recog_95 (x1, insn, pnum_clobbers);
          if (res >= 0)
            return res;
          if (pnum_clobbers == NULL)
            return -1;
          switch (pattern623 (x3))
            {
            case 0:
              if (!
#line 17840 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ASHIFT, SImode, operands)
   && (INTVAL (operands[3]) & (4 * BITS_PER_UNIT - 1))
      == 4 * BITS_PER_UNIT - 1
   && ix86_pre_reload_split ()))
                return -1;
              *pnum_clobbers = 1;
              return 1244; /* *ashlsi3_mask */

            case 1:
              if (!(
#line 17840 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ASHIFT, DImode, operands)
   && (INTVAL (operands[3]) & (8 * BITS_PER_UNIT - 1))
      == 8 * BITS_PER_UNIT - 1
   && ix86_pre_reload_split ()) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return -1;
              *pnum_clobbers = 1;
              return 1247; /* *ashldi3_mask */

            case 2:
              if (!
#line 17888 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ASHIFT, SImode, operands)
   && (INTVAL (operands[3]) & (4 * BITS_PER_UNIT - 1)) == 0
   && ix86_pre_reload_split ()))
                return -1;
              *pnum_clobbers = 1;
              return 1256; /* *ashlsi3_add */

            case 3:
              if (!(
#line 17888 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ASHIFT, DImode, operands)
   && (INTVAL (operands[3]) & (8 * BITS_PER_UNIT - 1)) == 0
   && ix86_pre_reload_split ()) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return -1;
              *pnum_clobbers = 1;
              return 1259; /* *ashldi3_add */

            case 4:
              if (!
#line 17934 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ASHIFT, SImode, operands)
   && (INTVAL (operands[3]) & (4 * BITS_PER_UNIT - 1)) == 0
   && ix86_pre_reload_split ()))
                return -1;
              *pnum_clobbers = 1;
              return 1268; /* *ashlsi3_sub */

            case 5:
              if (!(
#line 17934 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ASHIFT, DImode, operands)
   && (INTVAL (operands[3]) & (8 * BITS_PER_UNIT - 1)) == 0
   && ix86_pre_reload_split ()) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return -1;
              *pnum_clobbers = 1;
              return 1271; /* *ashldi3_sub */

            default:
              return -1;
            }

        case 1:
          if (register_operand (operands[0], E_DImode)
              && register_operand (operands[1], E_DImode)
              && (
#line 15264 "../../gcc/config/i386/i386.md"
(((INTVAL (operands[3]) & (4 * BITS_PER_UNIT)) == 0
    || ((INTVAL (operands[3]) & (2 * 4 * BITS_PER_UNIT - 1))
	 == (2 * 4 * BITS_PER_UNIT - 1)))
   && ix86_pre_reload_split ()) && 
#line 1235 "../../gcc/config/i386/i386.md"
(!TARGET_64BIT)))
            {
              *pnum_clobbers = 1;
              return 1054; /* *ashldi3_doubleword_mask_1 */
            }
          if (!nonimmediate_operand (operands[0], E_DImode)
              || !nonimmediate_operand (operands[1], E_DImode)
              || !(
#line 17865 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ASHIFT, DImode, operands)
   && (INTVAL (operands[3]) & (8 * BITS_PER_UNIT - 1))
      == 8 * BITS_PER_UNIT - 1
   && ix86_pre_reload_split ()) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return -1;
          *pnum_clobbers = 1;
          return 1253; /* *ashldi3_mask_1 */

        case 2:
          if (!
#line 17865 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ASHIFT, SImode, operands)
   && (INTVAL (operands[3]) & (4 * BITS_PER_UNIT - 1))
      == 4 * BITS_PER_UNIT - 1
   && ix86_pre_reload_split ()))
            return -1;
          *pnum_clobbers = 1;
          return 1250; /* *ashlsi3_mask_1 */

        case 3:
          if (!
#line 17912 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ASHIFT, SImode, operands)
   && (INTVAL (operands[3]) & (4 * BITS_PER_UNIT - 1)) == 0
   && ix86_pre_reload_split ()))
            return -1;
          *pnum_clobbers = 1;
          return 1262; /* *ashlsi3_add_1 */

        case 4:
          if (!(
#line 17912 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ASHIFT, DImode, operands)
   && (INTVAL (operands[3]) & (8 * BITS_PER_UNIT - 1)) == 0
   && ix86_pre_reload_split ()) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return -1;
          *pnum_clobbers = 1;
          return 1265; /* *ashldi3_add_1 */

        case 5:
          if (!
#line 17964 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ASHIFT, SImode, operands)
   && (INTVAL (operands[3]) & (4 * BITS_PER_UNIT - 1)) == 0
   && ix86_pre_reload_split ()))
            return -1;
          *pnum_clobbers = 1;
          return 1274; /* *ashlsi3_sub_1 */

        case 6:
          if (!(
#line 17964 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ASHIFT, DImode, operands)
   && (INTVAL (operands[3]) & (8 * BITS_PER_UNIT - 1)) == 0
   && ix86_pre_reload_split ()) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return -1;
          *pnum_clobbers = 1;
          return 1277; /* *ashldi3_sub_1 */

        default:
          return -1;
        }

    case SIGN_EXTEND:
      if (pattern118 (x3, pnum_clobbers) != 0
          || !(
#line 15365 "../../gcc/config/i386/i386.md"
(INTVAL (operands[2]) >= 4 * BITS_PER_UNIT
   && INTVAL (operands[2]) < 4 * BITS_PER_UNIT * 2) && 
#line 1235 "../../gcc/config/i386/i386.md"
(!TARGET_64BIT)))
        return -1;
      *pnum_clobbers = 1;
      return 1058; /* *ashldi3_doubleword_highpart */

    case ZERO_EXTEND:
      if (pattern118 (x3, pnum_clobbers) != 0
          || !(
#line 15365 "../../gcc/config/i386/i386.md"
(INTVAL (operands[2]) >= 4 * BITS_PER_UNIT
   && INTVAL (operands[2]) < 4 * BITS_PER_UNIT * 2) && 
#line 1235 "../../gcc/config/i386/i386.md"
(!TARGET_64BIT)))
        return -1;
      *pnum_clobbers = 1;
      return 1059; /* *ashldi3_doubleword_highpart */

    default:
      return -1;
    }
}

 int
recog_105 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6;
  int res ATTRIBUTE_UNUSED;
  if (pnum_clobbers == NULL)
    return -1;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) != CONST_INT)
    return -1;
  x4 = XEXP (x2, 0);
  operands[1] = x4;
  if (XWINT (x3, 0) == 1L)
    {
      res = recog_104 (x1, insn, pnum_clobbers);
      if (res >= 0)
        return res;
    }
  x5 = XEXP (x1, 0);
  operands[0] = x5;
  operands[2] = x3;
  if (!const_0_to_255_operand (operands[2], E_QImode))
    return -1;
  x6 = XEXP (x2, 2);
  operands[3] = x6;
  if (!const_0_to_255_operand (operands[3], E_QImode))
    return -1;
  switch (pattern125 (x2))
    {
    case 0:
      if (!
#line 22011 "../../gcc/config/i386/i386.md"
(TARGET_TBM))
        return -1;
      *pnum_clobbers = 1;
      return 1598; /* tbm_bextri_si */

    case 1:
      if (!(
#line 22011 "../../gcc/config/i386/i386.md"
(TARGET_TBM) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
        return -1;
      *pnum_clobbers = 1;
      return 1599; /* tbm_bextri_di */

    default:
      return -1;
    }
}

 int
recog_106 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  operands[1] = x2;
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) != REG
      || REGNO (x3) != 17)
    return -1;
  x4 = XEXP (x2, 1);
  if (x4 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
    return -1;
  x5 = XEXP (x1, 0);
  operands[0] = x5;
  switch (GET_MODE (operands[0]))
    {
    case E_SImode:
      if (!register_operand (operands[0], E_SImode)
          || !ix86_comparison_operator (operands[1], E_SImode))
        return -1;
      if (
#line 19473 "../../gcc/config/i386/i386.md"
(TARGET_APX_ZU))
        return 1445; /* *setcc_si_zu */
      if (pnum_clobbers != NULL
          && 
#line 19497 "../../gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL
   && TARGET_ZERO_EXTEND_WITH_AND && optimize_function_for_speed_p (cfun)))
        {
          *pnum_clobbers = 1;
          return 1449; /* *setcc_si_1_and */
        }
      if (!
#line 19514 "../../gcc/config/i386/i386.md"
(!TARGET_APX_ZU && !TARGET_PARTIAL_REG_STALL
   && (!TARGET_ZERO_EXTEND_WITH_AND || optimize_function_for_size_p (cfun))))
        return -1;
      return 1451; /* *setcc_si_1_movzbl */

    case E_DImode:
      if (!register_operand (operands[0], E_DImode)
          || !ix86_comparison_operator (operands[1], E_DImode))
        return -1;
      if ((
#line 19473 "../../gcc/config/i386/i386.md"
(TARGET_APX_ZU) && 
#line 1164 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
        return 1446; /* *setcc_di_zu */
      if (!
#line 19481 "../../gcc/config/i386/i386.md"
(!TARGET_APX_ZU && TARGET_64BIT && !TARGET_PARTIAL_REG_STALL))
        return -1;
      return 1447; /* *setcc_di_1 */

    default:
      return -1;
    }
}

 int
recog_108 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  switch (XINT (x2, 1))
    {
    case 17:
      if (GET_MODE (x2) != E_BLKmode)
        return -1;
      x3 = XEXP (x1, 0);
      operands[0] = x3;
      x4 = XVECEXP (x2, 0, 0);
      if (!rtx_equal_p (x4, operands[0]))
        return -1;
      return 1487; /* *memory_blockage */

    case 14:
      x3 = XEXP (x1, 0);
      operands[0] = x3;
      x4 = XVECEXP (x2, 0, 0);
      switch (GET_CODE (x4))
        {
        case CONST_INT:
          if (XWINT (x4, 0) != 0L)
            return -1;
          switch (GET_MODE (operands[0]))
            {
            case E_SImode:
              if (pnum_clobbers == NULL
                  || !register_operand (operands[0], E_SImode)
                  || GET_MODE (x2) != E_SImode
                  || !
#line 20760 "../../gcc/config/i386/i386.md"
(!TARGET_64BIT))
                return -1;
              *pnum_clobbers = 1;
              return 1498; /* *set_got */

            case E_DImode:
              if (!register_operand (operands[0], E_DImode)
                  || GET_MODE (x2) != E_DImode
                  || !
#line 20790 "../../gcc/config/i386/i386.md"
(TARGET_64BIT))
                return -1;
              return 1500; /* set_got_rex64 */

            default:
              return -1;
            }

        case LABEL_REF:
          if (pnum_clobbers == NULL
              || !register_operand (operands[0], E_SImode)
              || GET_MODE (x2) != E_SImode)
            return -1;
          x5 = XEXP (x4, 0);
          operands[1] = x5;
          if (!
#line 20782 "../../gcc/config/i386/i386.md"
(!TARGET_64BIT))
            return -1;
          *pnum_clobbers = 1;
          return 1499; /* *set_got_labelled */

        default:
          return -1;
        }

    case 15:
      if (GET_MODE (x2) != E_DImode)
        return -1;
      x4 = XVECEXP (x2, 0, 0);
      if (GET_CODE (x4) != LABEL_REF)
        return -1;
      x3 = XEXP (x1, 0);
      operands[0] = x3;
      if (!register_operand (operands[0], E_DImode))
        return -1;
      x5 = XEXP (x4, 0);
      operands[1] = x5;
      if (!
#line 20799 "../../gcc/config/i386/i386.md"
(TARGET_64BIT))
        return -1;
      return 1501; /* set_rip_rex64 */

    case 16:
      if (GET_MODE (x2) != E_DImode)
        return -1;
      x4 = XVECEXP (x2, 0, 0);
      if (GET_CODE (x4) != LABEL_REF)
        return -1;
      x3 = XEXP (x1, 0);
      operands[0] = x3;
      if (!register_operand (operands[0], E_DImode))
        return -1;
      x5 = XEXP (x4, 0);
      operands[1] = x5;
      if (!
#line 20810 "../../gcc/config/i386/i386.md"
(TARGET_LP64))
        return -1;
      return 1502; /* set_got_offset_rex64 */

    case 97:
      x3 = XEXP (x1, 0);
      operands[0] = x3;
      switch (pattern300 (x2))
        {
        case 0:
          if ((
#line 21649 "../../gcc/config/i386/i386.md"
(TARGET_APX_NF) && 
#line 21631 "../../gcc/config/i386/i386.md"
(TARGET_BMI)))
            return 1546; /* tzcnt_si_nf */
          if (pnum_clobbers == NULL
              || !
#line 21631 "../../gcc/config/i386/i386.md"
(TARGET_BMI))
            return -1;
          *pnum_clobbers = 1;
          return 1550; /* tzcnt_si */

        case 1:
          if ((
#line 21649 "../../gcc/config/i386/i386.md"
(TARGET_APX_NF) && (((
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT) && 
#line 21631 "../../gcc/config/i386/i386.md"
(TARGET_BMI)) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 21631 "../../gcc/config/i386/i386.md"
(TARGET_BMI))))
            return 1548; /* tzcnt_di_nf */
          if (pnum_clobbers == NULL
              || !(((
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT) && 
#line 21631 "../../gcc/config/i386/i386.md"
(TARGET_BMI)) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 21631 "../../gcc/config/i386/i386.md"
(TARGET_BMI)))
            return -1;
          *pnum_clobbers = 1;
          return 1552; /* tzcnt_di */

        default:
          return -1;
        }

    case 96:
      x3 = XEXP (x1, 0);
      operands[0] = x3;
      switch (pattern300 (x2))
        {
        case 0:
          if ((
#line 21649 "../../gcc/config/i386/i386.md"
(TARGET_APX_NF) && 
#line 21632 "../../gcc/config/i386/i386.md"
(TARGET_LZCNT)))
            return 1547; /* lzcnt_si_nf */
          if (pnum_clobbers == NULL
              || !
#line 21632 "../../gcc/config/i386/i386.md"
(TARGET_LZCNT))
            return -1;
          *pnum_clobbers = 1;
          return 1551; /* lzcnt_si */

        case 1:
          if ((
#line 21649 "../../gcc/config/i386/i386.md"
(TARGET_APX_NF) && (((
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT) && 
#line 21632 "../../gcc/config/i386/i386.md"
(TARGET_LZCNT)) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 21632 "../../gcc/config/i386/i386.md"
(TARGET_LZCNT))))
            return 1549; /* lzcnt_di_nf */
          if (pnum_clobbers == NULL
              || !(((
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT) && 
#line 21632 "../../gcc/config/i386/i386.md"
(TARGET_LZCNT)) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 21632 "../../gcc/config/i386/i386.md"
(TARGET_LZCNT)))
            return -1;
          *pnum_clobbers = 1;
          return 1553; /* lzcnt_di */

        default:
          return -1;
        }

    case 19:
      x4 = XVECEXP (x2, 0, 0);
      if (x4 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
        return -1;
      x3 = XEXP (x1, 0);
      operands[0] = x3;
      switch (pattern23 (x2))
        {
        case 0:
          if (!
#line 1408 "../../gcc/config/i386/i386.md"
(ptr_mode == SImode))
            return -1;
          return 1652; /* *load_tp_si */

        case 1:
          if (!
#line 1408 "../../gcc/config/i386/i386.md"
(ptr_mode == DImode))
            return -1;
          return 1653; /* *load_tp_di */

        default:
          return -1;
        }

    case 22:
      x3 = XEXP (x1, 0);
      operands[0] = x3;
      x4 = XVECEXP (x2, 0, 0);
      operands[1] = x4;
      if (!tls_symbolic_operand (operands[1], E_VOIDmode))
        return -1;
      switch (pattern23 (x2))
        {
        case 0:
          if (!(
#line 23193 "../../gcc/config/i386/i386.md"
(TARGET_64BIT && TARGET_GNU2_TLS) && 
#line 1408 "../../gcc/config/i386/i386.md"
(ptr_mode == SImode)))
            return -1;
          return 1661; /* *tls_dynamic_gnu2_lea_64_si */

        case 1:
          if (!(
#line 23193 "../../gcc/config/i386/i386.md"
(TARGET_64BIT && TARGET_GNU2_TLS) && 
#line 1408 "../../gcc/config/i386/i386.md"
(ptr_mode == DImode)))
            return -1;
          return 1662; /* *tls_dynamic_gnu2_lea_64_di */

        default:
          return -1;
        }

    case 70:
      x3 = XEXP (x1, 0);
      operands[0] = x3;
      x4 = XVECEXP (x2, 0, 0);
      operands[1] = x4;
      if (!register_operand (operands[1], E_XFmode))
        return -1;
      switch (GET_MODE (operands[0]))
        {
        case E_DImode:
          if (pnum_clobbers == NULL
              || !nonimmediate_operand (operands[0], E_DImode)
              || GET_MODE (x2) != E_DImode
              || !
#line 24972 "../../gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387))
            return -1;
          *pnum_clobbers = 1;
          return 1727; /* lrintxfdi2 */

        case E_SImode:
          if (!nonimmediate_operand (operands[0], E_SImode)
              || GET_MODE (x2) != E_SImode
              || !
#line 24981 "../../gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387))
            return -1;
          return 1729; /* lrintxfsi2 */

        default:
          return -1;
        }

    case 78:
      switch (pattern119 (x1, pnum_clobbers))
        {
        case 0:
          if (!
#line 25188 "../../gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && flag_unsafe_math_optimizations
   && ix86_pre_reload_split ()))
            return -1;
          *pnum_clobbers = 1;
          return 1740; /* *fistsi2_floor_1 */

        case 1:
          if (!
#line 25188 "../../gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && flag_unsafe_math_optimizations
   && ix86_pre_reload_split ()))
            return -1;
          *pnum_clobbers = 1;
          return 1742; /* *fistdi2_floor_1 */

        default:
          return -1;
        }

    case 79:
      switch (pattern119 (x1, pnum_clobbers))
        {
        case 0:
          if (!
#line 25188 "../../gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && flag_unsafe_math_optimizations
   && ix86_pre_reload_split ()))
            return -1;
          *pnum_clobbers = 1;
          return 1741; /* *fistsi2_ceil_1 */

        case 1:
          if (!
#line 25188 "../../gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && flag_unsafe_math_optimizations
   && ix86_pre_reload_split ()))
            return -1;
          *pnum_clobbers = 1;
          return 1743; /* *fistdi2_ceil_1 */

        default:
          return -1;
        }

    case 49:
      return recog_107 (x1, insn, pnum_clobbers);

    case 18:
      if (pnum_clobbers == NULL)
        return -1;
      x3 = XEXP (x1, 0);
      operands[0] = x3;
      x4 = XVECEXP (x2, 0, 0);
      operands[1] = x4;
      switch (GET_MODE (operands[0]))
        {
        case E_SImode:
          if (!memory_operand (operands[0], E_SImode)
              || GET_MODE (x2) != E_SImode
              || !const0_operand (operands[1], E_SImode)
              || !
#line 1403 "../../gcc/config/i386/i386.md"
(word_mode == SImode))
            return -1;
          *pnum_clobbers = 1;
          return 1855; /* probe_stack_1_si */

        case E_DImode:
          if (!memory_operand (operands[0], E_DImode)
              || GET_MODE (x2) != E_DImode
              || !const0_operand (operands[1], E_DImode)
              || !
#line 1403 "../../gcc/config/i386/i386.md"
(word_mode == DImode))
            return -1;
          *pnum_clobbers = 1;
          return 1856; /* probe_stack_1_di */

        default:
          return -1;
        }

    case 33:
      if (GET_MODE (x2) != E_BLKmode)
        return -1;
      x3 = XEXP (x1, 0);
      operands[0] = x3;
      x4 = XVECEXP (x2, 0, 0);
      if (!rtx_equal_p (x4, operands[0]))
        return -1;
      return 1949; /* *pause */

    case 102:
      switch (pattern120 (x1))
        {
        case 0:
          if (!
#line 29652 "../../gcc/config/i386/i386.md"
(TARGET_MOVDIRI))
            return -1;
          return 1980; /* movdirisi */

        case 1:
          if (!(
#line 29652 "../../gcc/config/i386/i386.md"
(TARGET_MOVDIRI) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return -1;
          return 1981; /* movdiridi */

        default:
          return -1;
        }

    case 103:
      if (GET_MODE (x2) != E_XImode)
        return -1;
      x3 = XEXP (x1, 0);
      if (GET_CODE (x3) != MEM
          || GET_MODE (x3) != E_XImode)
        return -1;
      x6 = XEXP (x3, 0);
      operands[0] = x6;
      x4 = XVECEXP (x2, 0, 0);
      operands[1] = x4;
      if (!memory_operand (operands[1], E_XImode))
        return -1;
      switch (GET_MODE (operands[0]))
        {
        case E_SImode:
          if (!register_operand (operands[0], E_SImode)
              || !(
#line 29660 "../../gcc/config/i386/i386.md"
(TARGET_MOVDIR64B) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode)))
            return -1;
          return 1982; /* movdir64b_si */

        case E_DImode:
          if (!register_operand (operands[0], E_DImode)
              || !(
#line 29660 "../../gcc/config/i386/i386.md"
(TARGET_MOVDIR64B) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode)))
            return -1;
          return 1983; /* movdir64b_di */

        default:
          return -1;
        }

    case 111:
      if (GET_MODE (x2) != E_DImode)
        return -1;
      x3 = XEXP (x1, 0);
      operands[0] = x3;
      if (!memory_operand (operands[0], E_DImode))
        return -1;
      x4 = XVECEXP (x2, 0, 0);
      operands[1] = x4;
      if (!register_operand (operands[1], E_DImode)
          || !
#line 636 "../../gcc/config/i386/mmx.md"
((TARGET_MMX || TARGET_MMX_WITH_SSE)
   && (TARGET_SSE || TARGET_3DNOW_A)))
        return -1;
      return 2042; /* sse_movntq */

    case 117:
      switch (pattern120 (x1))
        {
        case 0:
          if (!
#line 2009 "../../gcc/config/i386/sse.md"
(TARGET_SSE2))
            return -1;
          return 2555; /* sse2_movntisi */

        case 1:
          if (!(
#line 2009 "../../gcc/config/i386/sse.md"
(TARGET_SSE2) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return -1;
          return 2556; /* sse2_movntidi */

        default:
          return -1;
        }

    case 156:
      x3 = XEXP (x1, 0);
      operands[0] = x3;
      x4 = XVECEXP (x2, 0, 0);
      switch (GET_CODE (x4))
        {
        case VEC_SELECT:
          switch (pattern452 (x4))
            {
            case 0:
              switch (pattern1095 (x2, 
E_SImode))
                {
                case 0:
                  if (!
#line 7811 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16))
                    return -1;
                  return 4539; /* avx512fp16_vcvtsh2usi */

                case 1:
                  if (!
#line 9023 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F))
                    return -1;
                  return 4904; /* avx512f_vcvtss2usi */

                case 2:
                  if (!
#line 9059 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F))
                    return -1;
                  return 4916; /* avx512f_vcvtsd2usi */

                default:
                  return -1;
                }

            case 1:
              switch (pattern1095 (x2, 
E_DImode))
                {
                case 0:
                  if (!(
#line 7811 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                    return -1;
                  return 4543; /* avx512fp16_vcvtsh2usiq */

                case 1:
                  if (!(
#line 9023 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                    return -1;
                  return 4906; /* avx512f_vcvtss2usiq */

                case 2:
                  if (!(
#line 9059 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                    return -1;
                  return 4918; /* avx512f_vcvtsd2usiq */

                default:
                  return -1;
                }

            default:
              return -1;
            }

        case REG:
        case SUBREG:
        case MEM:
          operands[1] = x4;
          if (!nonimmediate_operand (operands[1], E_HFmode))
            return -1;
          switch (pattern23 (x2))
            {
            case 0:
              if (!
#line 7822 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16))
                return -1;
              return 4547; /* avx512fp16_vcvtsh2usi_2 */

            case 1:
              if (!(
#line 7822 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return -1;
              return 4549; /* avx512fp16_vcvtsh2usiq_2 */

            default:
              return -1;
            }

        default:
          return -1;
        }

    case 46:
      x3 = XEXP (x1, 0);
      operands[0] = x3;
      x4 = XVECEXP (x2, 0, 0);
      switch (GET_CODE (x4))
        {
        case VEC_SELECT:
          switch (pattern452 (x4))
            {
            case 0:
              switch (pattern1096 (x2, 
E_SImode))
                {
                case 0:
                  if (!
#line 7811 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16))
                    return -1;
                  return 4541; /* avx512fp16_vcvtsh2si */

                case 1:
                  if (!
#line 8551 "../../gcc/config/i386/sse.md"
(TARGET_SSE))
                    return -1;
                  return 4787; /* sse_cvtss2si */

                case 2:
                  if (!
#line 9095 "../../gcc/config/i386/sse.md"
(TARGET_SSE2))
                    return -1;
                  return 4928; /* sse2_cvtsd2si */

                default:
                  return -1;
                }

            case 1:
              switch (pattern1096 (x2, 
E_DImode))
                {
                case 0:
                  if (!(
#line 7811 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                    return -1;
                  return 4545; /* avx512fp16_vcvtsh2siq */

                case 1:
                  if (!(
#line 8551 "../../gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                    return -1;
                  return 4789; /* sse_cvtss2siq */

                case 2:
                  if (!(
#line 9095 "../../gcc/config/i386/sse.md"
(TARGET_SSE2) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                    return -1;
                  return 4930; /* sse2_cvtsd2siq */

                default:
                  return -1;
                }

            default:
              return -1;
            }

        case REG:
        case SUBREG:
        case MEM:
          operands[1] = x4;
          switch (GET_MODE (operands[0]))
            {
            case E_SImode:
              switch (pattern766 (x2, 
E_SImode))
                {
                case 0:
                  if (!
#line 7822 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16))
                    return -1;
                  return 4548; /* avx512fp16_vcvtsh2si_2 */

                case 1:
                  if (!
#line 8564 "../../gcc/config/i386/sse.md"
(TARGET_SSE))
                    return -1;
                  return 4791; /* sse_cvtss2si_2 */

                case 2:
                  if (!
#line 9109 "../../gcc/config/i386/sse.md"
(TARGET_SSE2))
                    return -1;
                  return 4932; /* sse2_cvtsd2si_2 */

                default:
                  return -1;
                }

            case E_DImode:
              switch (pattern766 (x2, 
E_DImode))
                {
                case 0:
                  if (!(
#line 7822 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                    return -1;
                  return 4550; /* avx512fp16_vcvtsh2siq_2 */

                case 1:
                  if (!(
#line 8564 "../../gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                    return -1;
                  return 4792; /* sse_cvtss2siq_2 */

                case 2:
                  if (!(
#line 9109 "../../gcc/config/i386/sse.md"
(TARGET_SSE2) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                    return -1;
                  return 4933; /* sse2_cvtsd2siq_2 */

                default:
                  return -1;
                }

            default:
              return -1;
            }

        default:
          return -1;
        }

    case 172:
      switch (pattern122 (x1))
        {
        case 0:
          if (!
#line 7976 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16))
            return -1;
          return 4687; /* unspec_avx512fp16_fix_truncsi2 */

        case 1:
          if (!
#line 8579 "../../gcc/config/i386/sse.md"
(TARGET_SSE))
            return -1;
          return 4793; /* unspec_sse_cvttss2si */

        case 2:
          if (!
#line 9124 "../../gcc/config/i386/sse.md"
(TARGET_SSE2))
            return -1;
          return 4934; /* unspec_sse2_cvttsd2si */

        case 3:
          if (!(
#line 7976 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return -1;
          return 4691; /* unspec_avx512fp16_fix_truncdi2 */

        case 4:
          if (!(
#line 8579 "../../gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return -1;
          return 4795; /* unspec_sse_cvttss2siq */

        case 5:
          if (!(
#line 9124 "../../gcc/config/i386/sse.md"
(TARGET_SSE2) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return -1;
          return 4936; /* unspec_sse2_cvttsd2siq */

        default:
          return -1;
        }

    case 173:
      switch (pattern122 (x1))
        {
        case 0:
          if (!
#line 7976 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16))
            return -1;
          return 4689; /* unspec_avx512fp16_fixuns_truncsi2 */

        case 1:
          if (!
#line 9034 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F))
            return -1;
          return 4908; /* unspec_avx512f_vcvttss2usi */

        case 2:
          if (!
#line 9070 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F))
            return -1;
          return 4920; /* unspec_avx512f_vcvttsd2usi */

        case 3:
          if (!(
#line 7976 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return -1;
          return 4693; /* unspec_avx512fp16_fixuns_truncdi2 */

        case 4:
          if (!(
#line 9034 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return -1;
          return 4910; /* unspec_avx512f_vcvttss2usiq */

        case 5:
          if (!(
#line 9070 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return -1;
          return 4922; /* unspec_avx512f_vcvttsd2usiq */

        default:
          return -1;
        }

    case 191:
      x3 = XEXP (x1, 0);
      operands[0] = x3;
      x4 = XVECEXP (x2, 0, 0);
      operands[1] = x4;
      switch (GET_MODE (operands[0]))
        {
        case E_DImode:
          if (!register_operand (operands[0], E_DImode)
              || GET_MODE (x2) != E_DImode
              || !register_operand (operands[1], E_V64QImode)
              || !(
#line 10260 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 318 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return -1;
          return 5193; /* avx512bw_cvtb2maskv64qi */

        case E_SImode:
          if (!register_operand (operands[0], E_SImode)
              || GET_MODE (x2) != E_SImode)
            return -1;
          switch (GET_MODE (operands[1]))
            {
            case E_V32QImode:
              if (!register_operand (operands[1], E_V32QImode)
                  || !(
#line 10260 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 318 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                return -1;
              return 5195; /* avx512vl_cvtb2maskv32qi */

            case E_V32HImode:
              if (!register_operand (operands[1], E_V32HImode)
                  || !(
#line 10260 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 319 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                return -1;
              return 5196; /* avx512bw_cvtw2maskv32hi */

            default:
              return -1;
            }

        default:
          return -1;
        }

    case 276:
      switch (pattern124 (x1))
        {
        case 0:
          if (!
#line 32611 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
            return -1;
          return 10913; /* avx10_2_vcvttsd2sissi */

        case 1:
          if (!
#line 32624 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
            return -1;
          return 10921; /* avx10_2_vcvttss2sissi */

        case 2:
          if (!(
#line 32611 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return -1;
          return 10917; /* avx10_2_vcvttsd2sisdi */

        case 3:
          if (!(
#line 32624 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return -1;
          return 10925; /* avx10_2_vcvttss2sisdi */

        default:
          return -1;
        }

    case 277:
      switch (pattern124 (x1))
        {
        case 0:
          if (!
#line 32611 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
            return -1;
          return 10915; /* avx10_2_vcvttsd2usissi */

        case 1:
          if (!
#line 32624 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
            return -1;
          return 10923; /* avx10_2_vcvttss2usissi */

        case 2:
          if (!(
#line 32611 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return -1;
          return 10919; /* avx10_2_vcvttsd2usisdi */

        case 3:
          if (!(
#line 32624 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return -1;
          return 10927; /* avx10_2_vcvttss2usisdi */

        default:
          return -1;
        }

    case 281:
      if (GET_MODE (x2) != E_BLKmode)
        return -1;
      x3 = XEXP (x1, 0);
      operands[0] = x3;
      x4 = XVECEXP (x2, 0, 0);
      if (!rtx_equal_p (x4, operands[0])
          || !
#line 60 "../../gcc/config/i386/sync.md"
(TARGET_SSE2))
        return -1;
      return 11007; /* *sse2_lfence */

    case 282:
      if (GET_MODE (x2) != E_BLKmode)
        return -1;
      x3 = XEXP (x1, 0);
      operands[0] = x3;
      x4 = XVECEXP (x2, 0, 0);
      if (!rtx_equal_p (x4, operands[0])
          || !
#line 79 "../../gcc/config/i386/sync.md"
(TARGET_SSE || TARGET_3DNOW_A))
        return -1;
      return 11008; /* *sse_sfence */

    case 283:
      if (GET_MODE (x2) != E_BLKmode)
        return -1;
      x3 = XEXP (x1, 0);
      operands[0] = x3;
      x4 = XVECEXP (x2, 0, 0);
      if (!rtx_equal_p (x4, operands[0]))
        return -1;
      if (
#line 98 "../../gcc/config/i386/sync.md"
(TARGET_64BIT || TARGET_SSE2))
        return 11009; /* mfence_sse2 */
      if (pnum_clobbers == NULL)
        return -1;
      *pnum_clobbers = 1;
      return 11010; /* mfence_nosse */

    case 285:
      if (GET_MODE (x2) != E_DImode)
        return -1;
      x3 = XEXP (x1, 0);
      operands[0] = x3;
      if (!memory_operand (operands[0], E_DImode))
        return -1;
      x4 = XVECEXP (x2, 0, 0);
      operands[1] = x4;
      if (!register_operand (operands[1], E_DFmode)
          || !
#line 356 "../../gcc/config/i386/sync.md"
(TARGET_80387))
        return -1;
      return 11018; /* storedi_via_fpu */

    case 287:
      if (GET_MODE (x2) != E_DImode)
        return -1;
      x3 = XEXP (x1, 0);
      operands[0] = x3;
      if (!memory_operand (operands[0], E_DImode))
        return -1;
      x4 = XVECEXP (x2, 0, 0);
      operands[1] = x4;
      if (!register_operand (operands[1], E_DFmode)
          || !
#line 382 "../../gcc/config/i386/sync.md"
(TARGET_SSE))
        return -1;
      return 11020; /* storedi_via_sse */

    default:
      return -1;
    }
}

 int
recog_148 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 2);
  switch (GET_CODE (x3))
    {
    case CONST_INT:
      x4 = XEXP (x2, 0);
      x5 = XEXP (x4, 0);
      operands[2] = x5;
      x6 = XEXP (x2, 1);
      operands[1] = x6;
      switch (XWINT (x3, 0))
        {
        case 3L:
          switch (GET_MODE (operands[0]))
            {
            case E_V8HFmode:
              if (pattern1006 (x2, 
E_V8HFmode, 
E_V2HFmode) == 0
                  && 
#line 11861 "../../gcc/config/i386/sse.md"
(TARGET_SSE))
                return 5292; /* *vec_concatv8hf_movss */
              break;

            case E_V8BFmode:
              if (pattern1006 (x2, 
E_V8BFmode, 
E_V2BFmode) == 0
                  && 
#line 11861 "../../gcc/config/i386/sse.md"
(TARGET_SSE))
                return 5293; /* *vec_concatv8bf_movss */
              break;

            case E_V8HImode:
              if (pattern1006 (x2, 
E_V8HImode, 
E_V2HImode) == 0
                  && 
#line 11861 "../../gcc/config/i386/sse.md"
(TARGET_SSE))
                return 5294; /* *vec_concatv8hi_movss */
              break;

            default:
              break;
            }
          break;

        case 1L:
          switch (GET_MODE (operands[0]))
            {
            case E_V4SImode:
              if (pattern1007 (x2, 
E_V4SImode, 
E_SImode) == 0
                  && 
#line 11883 "../../gcc/config/i386/sse.md"
(TARGET_SSE))
                return 5295; /* vec_setv4si_0 */
              break;

            case E_V4SFmode:
              if (pattern1007 (x2, 
E_V4SFmode, 
E_SFmode) == 0
                  && 
#line 11883 "../../gcc/config/i386/sse.md"
(TARGET_SSE))
                return 5296; /* vec_setv4sf_0 */
              break;

            case E_V8HImode:
              if (pattern1006 (x2, 
E_V8HImode, 
E_HImode) == 0
                  && 
#line 11964 "../../gcc/config/i386/sse.md"
(TARGET_SSE2))
                return 5297; /* vec_setv8hi_0 */
              break;

            case E_V8HFmode:
              if (pattern1006 (x2, 
E_V8HFmode, 
E_HFmode) == 0
                  && 
#line 11964 "../../gcc/config/i386/sse.md"
(TARGET_SSE2))
                return 5298; /* vec_setv8hf_0 */
              break;

            case E_V8BFmode:
              if (pattern1006 (x2, 
E_V8BFmode, 
E_BFmode) == 0
                  && 
#line 11964 "../../gcc/config/i386/sse.md"
(TARGET_SSE2))
                return 5299; /* vec_setv8bf_0 */
              break;

            case E_V16HImode:
              if (pattern1008 (x2, 
E_V16HImode, 
E_HImode) == 0
                  && 
#line 12059 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16))
                return 5303; /* vec_setv16hi_0 */
              break;

            case E_V32HImode:
              if (pattern1008 (x2, 
E_V32HImode, 
E_HImode) == 0
                  && (
#line 12059 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16) && 
#line 985 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                return 5304; /* vec_setv32hi_0 */
              break;

            case E_V16HFmode:
              if (pattern1008 (x2, 
E_V16HFmode, 
E_HFmode) == 0
                  && 
#line 12059 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16))
                return 5305; /* vec_setv16hf_0 */
              break;

            case E_V32HFmode:
              if (pattern1008 (x2, 
E_V32HFmode, 
E_HFmode) == 0
                  && (
#line 12059 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16) && 
#line 986 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                return 5306; /* vec_setv32hf_0 */
              break;

            case E_V16BFmode:
              if (pattern1008 (x2, 
E_V16BFmode, 
E_BFmode) == 0
                  && 
#line 12059 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16))
                return 5307; /* vec_setv16bf_0 */
              break;

            case E_V32BFmode:
              if (pattern1008 (x2, 
E_V32BFmode, 
E_BFmode) == 0
                  && (
#line 12059 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16) && 
#line 987 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                return 5308; /* vec_setv32bf_0 */
              break;

            case E_V8SImode:
              if (pattern1008 (x2, 
E_V8SImode, 
E_SImode) == 0
                  && 
#line 12166 "../../gcc/config/i386/sse.md"
(TARGET_AVX))
                return 5320; /* vec_setv8si_0 */
              break;

            case E_V8SFmode:
              if (pattern1008 (x2, 
E_V8SFmode, 
E_SFmode) == 0
                  && 
#line 12166 "../../gcc/config/i386/sse.md"
(TARGET_AVX))
                return 5321; /* vec_setv8sf_0 */
              break;

            case E_V16SImode:
              if (pattern1008 (x2, 
E_V16SImode, 
E_SImode) == 0
                  && (
#line 12166 "../../gcc/config/i386/sse.md"
(TARGET_AVX) && 
#line 994 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
                return 5322; /* vec_setv16si_0 */
              break;

            case E_V16SFmode:
              if (pattern1008 (x2, 
E_V16SFmode, 
E_SFmode) == 0
                  && (
#line 12166 "../../gcc/config/i386/sse.md"
(TARGET_AVX) && 
#line 995 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
                return 5323; /* vec_setv16sf_0 */
              break;

            case E_V2DFmode:
              if (pattern863 (x2, 
E_V2DFmode, 
E_DFmode) == 0
                  && 
#line 12280 "../../gcc/config/i386/sse.md"
(TARGET_SSE2))
                return 5330; /* vec_setv2df_0 */
              break;

            case E_V8DFmode:
              if (pattern1008 (x2, 
E_V8DFmode, 
E_DFmode) == 0
                  && (
#line 14958 "../../gcc/config/i386/sse.md"
(TARGET_AVX) && 
#line 468 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
                return 7218; /* vec_setv8df_0 */
              break;

            case E_V4DFmode:
              if (pattern1008 (x2, 
E_V4DFmode, 
E_DFmode) == 0
                  && 
#line 14958 "../../gcc/config/i386/sse.md"
(TARGET_AVX))
                return 7219; /* vec_setv4df_0 */
              break;

            case E_V8DImode:
              if (pattern1008 (x2, 
E_V8DImode, 
E_DImode) == 0
                  && (
#line 21746 "../../gcc/config/i386/sse.md"
(TARGET_AVX) && 
#line 711 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
                return 8488; /* vec_setv8di_0 */
              break;

            case E_V4DImode:
              if (pattern1008 (x2, 
E_V4DImode, 
E_DImode) == 0
                  && 
#line 21746 "../../gcc/config/i386/sse.md"
(TARGET_AVX))
                return 8489; /* vec_setv4di_0 */
              break;

            default:
              break;
            }
          break;

        default:
          break;
        }
      operands[3] = x3;
      if (const_int_operand (operands[3], E_SImode))
        {
          switch (GET_MODE (operands[0]))
            {
            case E_V4SFmode:
              if (pattern886 (x2, 
E_V4SFmode, 
E_SFmode) == 0
                  && 
#line 12133 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1
   && ((unsigned) exact_log2 (INTVAL (operands[3]))
       < GET_MODE_NUNITS (V4SFmode))))
                return 5319; /* *vec_setv4sf_sse4_1 */
              break;

            case E_V16QImode:
              if (pattern886 (x2, 
E_V16QImode, 
E_QImode) == 0
                  && (
#line 19881 "../../gcc/config/i386/sse.md"
(TARGET_SSE2
   && ((unsigned) exact_log2 (INTVAL (operands[3]))
       < GET_MODE_NUNITS (V16QImode))) && 
#line 19861 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1)))
                return 8376; /* sse4_1_pinsrb */
              break;

            case E_V8HImode:
              if (pattern886 (x2, 
E_V8HImode, 
E_HImode) == 0
                  && 
#line 19881 "../../gcc/config/i386/sse.md"
(TARGET_SSE2
   && ((unsigned) exact_log2 (INTVAL (operands[3]))
       < GET_MODE_NUNITS (V8HImode))))
                return 8377; /* sse2_pinsrw */
              break;

            case E_V8HFmode:
              if (pattern886 (x2, 
E_V8HFmode, 
E_HFmode) == 0
                  && 
#line 19881 "../../gcc/config/i386/sse.md"
(TARGET_SSE2
   && ((unsigned) exact_log2 (INTVAL (operands[3]))
       < GET_MODE_NUNITS (V8HFmode))))
                return 8378; /* sse2_pinsrph */
              break;

            case E_V8BFmode:
              if (pattern886 (x2, 
E_V8BFmode, 
E_BFmode) == 0
                  && 
#line 19881 "../../gcc/config/i386/sse.md"
(TARGET_SSE2
   && ((unsigned) exact_log2 (INTVAL (operands[3]))
       < GET_MODE_NUNITS (V8BFmode))))
                return 8379; /* sse2_pinsrbf */
              break;

            case E_V4SImode:
              if (pattern886 (x2, 
E_V4SImode, 
E_SImode) == 0
                  && (
#line 19881 "../../gcc/config/i386/sse.md"
(TARGET_SSE2
   && ((unsigned) exact_log2 (INTVAL (operands[3]))
       < GET_MODE_NUNITS (V4SImode))) && 
#line 19862 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1)))
                return 8380; /* sse4_1_pinsrd */
              break;

            case E_V2DImode:
              if (pattern886 (x2, 
E_V2DImode, 
E_DImode) == 0
                  && (
#line 19881 "../../gcc/config/i386/sse.md"
(TARGET_SSE2
   && ((unsigned) exact_log2 (INTVAL (operands[3]))
       < GET_MODE_NUNITS (V2DImode))) && 
#line 19863 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1 && TARGET_64BIT)))
                return 8381; /* sse4_1_pinsrq */
              break;

            case E_V8DFmode:
              if (pattern887 (x2, 
E_V8DFmode, 
E_V2DFmode) == 0
                  && (
#line 19985 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (INTVAL (operands[3])
       == (GET_MODE_UNIT_SIZE (V8DFmode) == 4 ? 0xF : 0x3))) && 
#line 12393 "../../gcc/config/i386/sse.md"
(TARGET_AVX512DQ && TARGET_EVEX512)))
                return 8382; /* *avx512dq_vinsertf64x2_0 */
              break;

            case E_V8DImode:
              if (pattern887 (x2, 
E_V8DImode, 
E_V2DImode) == 0
                  && (
#line 19985 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (INTVAL (operands[3])
       == (GET_MODE_UNIT_SIZE (V8DImode) == 4 ? 0xF : 0x3))) && 
#line 12394 "../../gcc/config/i386/sse.md"
(TARGET_AVX512DQ && TARGET_EVEX512)))
                return 8383; /* *avx512dq_vinserti64x2_0 */
              break;

            case E_V16SFmode:
              if (pattern887 (x2, 
E_V16SFmode, 
E_V4SFmode) == 0
                  && (
#line 19985 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (INTVAL (operands[3])
       == (GET_MODE_UNIT_SIZE (V16SFmode) == 4 ? 0xF : 0x3))) && 
#line 12395 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                return 8384; /* *avx512f_vinsertf32x4_0 */
              break;

            case E_V16SImode:
              if (pattern887 (x2, 
E_V16SImode, 
E_V4SImode) == 0
                  && (
#line 19985 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (INTVAL (operands[3])
       == (GET_MODE_UNIT_SIZE (V16SImode) == 4 ? 0xF : 0x3))) && 
#line 12395 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                return 8385; /* *avx512f_vinserti32x4_0 */
              break;

            default:
              break;
            }
        }
      if (XWINT (x3, 0) != 1L
          || !register_operand (operands[0], E_V4SImode)
          || GET_MODE (x2) != E_V4SImode
          || GET_MODE (x4) != E_V4SImode)
        return -1;
      operands[2] = x5;
      if (!nonimmediate_operand (operands[2], E_SImode))
        return -1;
      operands[1] = x6;
      if (!reg_or_0_operand (operands[1], E_V4SImode)
          || !
#line 21038 "../../gcc/config/i386/sse.md"
(TARGET_SSE))
        return -1;
      return 8452; /* sse2_loadld */

    case REG:
    case SUBREG:
      operands[3] = x3;
      x4 = XEXP (x2, 0);
      x5 = XEXP (x4, 0);
      operands[1] = x5;
      x6 = XEXP (x2, 1);
      operands[2] = x6;
      switch (GET_MODE (operands[0]))
        {
        case E_V2DFmode:
          if (pattern146 (x2, 
E_V2DFmode, 
E_DFmode, 
E_QImode) != 0)
            return -1;
          if ((
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 14886 "../../gcc/config/i386/sse.md"
(TARGET_SSE2)))
            return 7216; /* vec_dupv2df_mask */
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 27778 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 298 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
            return -1;
          return 9285; /* avx512vl_vec_dup_gprv2df_mask */

        case E_V16SFmode:
          if (pattern773 (x2, 
E_V16SFmode, 
E_HImode) != 0)
            return -1;
          switch (GET_MODE (operands[1]))
            {
            case E_V4SFmode:
              if (!nonimmediate_operand (operands[1], E_V4SFmode)
                  || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 27742 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 722 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512))))
                return -1;
              return 9231; /* avx512f_broadcastv16sf_mask */

            case E_SFmode:
              if (!nonimmediate_operand (operands[1], E_SFmode)
                  || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 27778 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 297 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512))))
                return -1;
              return 9275; /* avx512f_vec_dup_gprv16sf_mask */

            case E_V8SFmode:
              if (!nonimmediate_operand (operands[1], E_V8SFmode)
                  || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 28062 "../../gcc/config/i386/sse.md"
(TARGET_AVX512DQ) && 
#line 722 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512))))
                return -1;
              return 9331; /* avx512dq_broadcastv16sf_mask_1 */

            default:
              return -1;
            }

        case E_V16SImode:
          if (pattern773 (x2, 
E_V16SImode, 
E_HImode) != 0)
            return -1;
          switch (GET_MODE (operands[1]))
            {
            case E_V4SImode:
              if (!nonimmediate_operand (operands[1], E_V4SImode)
                  || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 27742 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 722 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512))))
                return -1;
              return 9233; /* avx512f_broadcastv16si_mask */

            case E_SImode:
              if (!nonimmediate_operand (operands[1], E_SImode)
                  || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 27778 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 295 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512))))
                return -1;
              return 9263; /* avx512f_vec_dup_gprv16si_mask */

            case E_V8SImode:
              if (!nonimmediate_operand (operands[1], E_V8SImode)
                  || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 28062 "../../gcc/config/i386/sse.md"
(TARGET_AVX512DQ) && 
#line 722 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512))))
                return -1;
              return 9333; /* avx512dq_broadcastv16si_mask_1 */

            default:
              return -1;
            }

        case E_V8DFmode:
          if (pattern773 (x2, 
E_V8DFmode, 
E_QImode) != 0)
            return -1;
          switch (GET_MODE (operands[1]))
            {
            case E_V4DFmode:
              if (!nonimmediate_operand (operands[1], E_V4DFmode)
                  || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 27754 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 718 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512))))
                return -1;
              return 9235; /* avx512f_broadcastv8df_mask */

            case E_DFmode:
              if (!nonimmediate_operand (operands[1], E_DFmode)
                  || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 27778 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 298 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512))))
                return -1;
              return 9281; /* avx512f_vec_dup_gprv8df_mask */

            case E_V2DFmode:
              if (!nonimmediate_operand (operands[1], E_V2DFmode)
                  || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 28080 "../../gcc/config/i386/sse.md"
(TARGET_AVX512DQ) && 
#line 28073 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512))))
                return -1;
              return 9337; /* avx512dq_broadcastv8df_mask_1 */

            default:
              return -1;
            }

        case E_V8DImode:
          if (pattern773 (x2, 
E_V8DImode, 
E_QImode) != 0)
            return -1;
          switch (GET_MODE (operands[1]))
            {
            case E_V4DImode:
              if (!nonimmediate_operand (operands[1], E_V4DImode)
                  || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 27754 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 718 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512))))
                return -1;
              return 9237; /* avx512f_broadcastv8di_mask */

            case E_DImode:
              if (!nonimmediate_operand (operands[1], E_DImode)
                  || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 27778 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 296 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512))))
                return -1;
              return 9269; /* avx512f_vec_dup_gprv8di_mask */

            case E_V2DImode:
              if (!nonimmediate_operand (operands[1], E_V2DImode)
                  || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 28080 "../../gcc/config/i386/sse.md"
(TARGET_AVX512DQ) && 
#line 28073 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512))))
                return -1;
              return 9335; /* avx512dq_broadcastv8di_mask_1 */

            default:
              return -1;
            }

        case E_V64QImode:
          if (pattern146 (x2, 
E_V64QImode, 
E_QImode, 
E_DImode) != 0
              || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 27766 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 322 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512))))
            return -1;
          return 9239; /* avx512bw_vec_dup_gprv64qi_mask */

        case E_V16QImode:
          if (pattern146 (x2, 
E_V16QImode, 
E_QImode, 
E_HImode) != 0
              || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 27766 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 322 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
            return -1;
          return 9241; /* avx512vl_vec_dup_gprv16qi_mask */

        case E_V32QImode:
          if (pattern146 (x2, 
E_V32QImode, 
E_QImode, 
E_SImode) != 0
              || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 27766 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 322 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
            return -1;
          return 9243; /* avx512vl_vec_dup_gprv32qi_mask */

        case E_V32HImode:
          if (pattern146 (x2, 
E_V32HImode, 
E_HImode, 
E_SImode) != 0
              || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 27766 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 323 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512))))
            return -1;
          return 9245; /* avx512bw_vec_dup_gprv32hi_mask */

        case E_V16HImode:
          if (pattern144 (x2, 
E_HImode) != 0
              || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 27766 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 323 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
            return -1;
          return 9247; /* avx512vl_vec_dup_gprv16hi_mask */

        case E_V8HImode:
          if (pattern146 (x2, 
E_V8HImode, 
E_HImode, 
E_QImode) != 0
              || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 27766 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 323 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
            return -1;
          return 9249; /* avx512vl_vec_dup_gprv8hi_mask */

        case E_V32HFmode:
          if (pattern146 (x2, 
E_V32HFmode, 
E_HFmode, 
E_SImode) != 0
              || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 27766 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 324 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512))))
            return -1;
          return 9251; /* avx512bw_vec_dup_gprv32hf_mask */

        case E_V16HFmode:
          if (pattern146 (x2, 
E_V16HFmode, 
E_HFmode, 
E_HImode) != 0
              || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 27766 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 324 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
            return -1;
          return 9253; /* avx512vl_vec_dup_gprv16hf_mask */

        case E_V8HFmode:
          if (pattern146 (x2, 
E_V8HFmode, 
E_HFmode, 
E_QImode) != 0
              || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 27766 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 324 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
            return -1;
          return 9255; /* avx512fp16_vec_dup_gprv8hf_mask */

        case E_V32BFmode:
          if (pattern146 (x2, 
E_V32BFmode, 
E_BFmode, 
E_SImode) != 0
              || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 27766 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 325 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512))))
            return -1;
          return 9257; /* avx512bw_vec_dup_gprv32bf_mask */

        case E_V16BFmode:
          if (pattern146 (x2, 
E_V16BFmode, 
E_BFmode, 
E_HImode) != 0
              || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 27766 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 325 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
            return -1;
          return 9259; /* avx512vl_vec_dup_gprv16bf_mask */

        case E_V8BFmode:
          if (pattern146 (x2, 
E_V8BFmode, 
E_BFmode, 
E_QImode) != 0
              || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 27766 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 325 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
            return -1;
          return 9261; /* avx512vl_vec_dup_gprv8bf_mask */

        case E_V8SImode:
          if (pattern773 (x2, 
E_V8SImode, 
E_QImode) != 0)
            return -1;
          switch (GET_MODE (operands[1]))
            {
            case E_SImode:
              if (!nonimmediate_operand (operands[1], E_SImode)
                  || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 27778 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 295 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
                return -1;
              return 9265; /* avx512vl_vec_dup_gprv8si_mask */

            case E_V4SImode:
              if (!nonimmediate_operand (operands[1], E_V4SImode)
                  || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 28049 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                return -1;
              return 9327; /* avx512vl_broadcastv8si_mask_1 */

            default:
              return -1;
            }

        case E_V4SImode:
          if (pattern146 (x2, 
E_V4SImode, 
E_SImode, 
E_QImode) != 0
              || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 27778 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 295 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
            return -1;
          return 9267; /* avx512vl_vec_dup_gprv4si_mask */

        case E_V4DImode:
          if (pattern773 (x2, 
E_V4DImode, 
E_QImode) != 0)
            return -1;
          switch (GET_MODE (operands[1]))
            {
            case E_DImode:
              if (!nonimmediate_operand (operands[1], E_DImode)
                  || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 27778 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 296 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
                return -1;
              return 9271; /* avx512vl_vec_dup_gprv4di_mask */

            case E_V2DImode:
              if (!nonimmediate_operand (operands[1], E_V2DImode)
                  || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 28080 "../../gcc/config/i386/sse.md"
(TARGET_AVX512DQ) && 
#line 28074 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
                return -1;
              return 9339; /* avx512dq_broadcastv4di_mask_1 */

            default:
              return -1;
            }

        case E_V2DImode:
          if (pattern146 (x2, 
E_V2DImode, 
E_DImode, 
E_QImode) != 0
              || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 27778 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 296 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
            return -1;
          return 9273; /* avx512vl_vec_dup_gprv2di_mask */

        case E_V8SFmode:
          if (pattern773 (x2, 
E_V8SFmode, 
E_QImode) != 0)
            return -1;
          switch (GET_MODE (operands[1]))
            {
            case E_SFmode:
              if (!nonimmediate_operand (operands[1], E_SFmode)
                  || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 27778 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 297 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
                return -1;
              return 9277; /* avx512vl_vec_dup_gprv8sf_mask */

            case E_V4SFmode:
              if (!nonimmediate_operand (operands[1], E_V4SFmode)
                  || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 28049 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                return -1;
              return 9329; /* avx512vl_broadcastv8sf_mask_1 */

            default:
              return -1;
            }

        case E_V4SFmode:
          if (pattern146 (x2, 
E_V4SFmode, 
E_SFmode, 
E_QImode) != 0
              || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 27778 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 297 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
            return -1;
          return 9279; /* avx512vl_vec_dup_gprv4sf_mask */

        case E_V4DFmode:
          if (pattern773 (x2, 
E_V4DFmode, 
E_QImode) != 0)
            return -1;
          switch (GET_MODE (operands[1]))
            {
            case E_DFmode:
              if (!nonimmediate_operand (operands[1], E_DFmode)
                  || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 27778 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 298 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
                return -1;
              return 9283; /* avx512vl_vec_dup_gprv4df_mask */

            case E_V2DFmode:
              if (!nonimmediate_operand (operands[1], E_V2DFmode)
                  || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 28080 "../../gcc/config/i386/sse.md"
(TARGET_AVX512DQ) && 
#line 28074 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
                return -1;
              return 9341; /* avx512dq_broadcastv4df_mask_1 */

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
recog_161 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12, x13, x14, x15, x16, x17;
  rtx x18, x19, x20, x21, x22, x23, x24;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  x5 = XVECEXP (x4, 0, 2);
  if (GET_CODE (x5) != CONST_INT)
    return -1;
  x6 = XVECEXP (x4, 0, 3);
  if (GET_CODE (x6) != CONST_INT
      || pattern1301 (x4) != 0)
    return -1;
  x7 = XVECEXP (x4, 0, 12);
  if (GET_CODE (x7) != CONST_INT)
    return -1;
  x8 = XVECEXP (x4, 0, 13);
  if (GET_CODE (x8) != CONST_INT)
    return -1;
  x9 = XVECEXP (x4, 0, 14);
  if (GET_CODE (x9) != CONST_INT)
    return -1;
  x10 = XVECEXP (x4, 0, 15);
  if (GET_CODE (x10) != CONST_INT)
    return -1;
  x11 = XEXP (x2, 2);
  if (!register_operand (x11, E_HImode))
    return -1;
  x12 = XVECEXP (x4, 0, 0);
  switch (XWINT (x12, 0))
    {
    case 2L:
      x13 = XVECEXP (x4, 0, 1);
      if (XWINT (x13, 0) != 18L
          || XWINT (x5, 0) != 3L
          || XWINT (x6, 0) != 19L
          || pattern1833 (x4) != 0)
        return -1;
      x14 = XVECEXP (x4, 0, 8);
      if (XWINT (x14, 0) != 10L)
        return -1;
      x15 = XVECEXP (x4, 0, 9);
      if (XWINT (x15, 0) != 26L)
        return -1;
      x16 = XVECEXP (x4, 0, 10);
      if (XWINT (x16, 0) != 11L)
        return -1;
      x17 = XVECEXP (x4, 0, 11);
      if (XWINT (x17, 0) != 27L
          || pattern1865 (x2) != 0)
        return -1;
      switch (GET_MODE (operands[0]))
        {
        case E_V16SFmode:
          if (pattern1580 (x2, 
E_V16SFmode, 
E_V32SFmode) != 0
              || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 11152 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 5245; /* avx512f_unpckhps512_mask */

        case E_V16SImode:
          if (pattern1580 (x2, 
E_V16SImode, 
E_V32SImode) != 0
              || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 19744 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 8367; /* avx512f_interleave_highv16si_mask */

        default:
          return -1;
        }

    case 0L:
      x13 = XVECEXP (x4, 0, 1);
      switch (XWINT (x13, 0))
        {
        case 16L:
          if (XWINT (x5, 0) != 1L
              || XWINT (x6, 0) != 17L)
            return -1;
          x18 = XEXP (x3, 0);
          x19 = XEXP (x18, 1);
          operands[2] = x19;
          x20 = XEXP (x2, 1);
          operands[3] = x20;
          operands[4] = x11;
          x21 = XVECEXP (x4, 0, 4);
          switch (XWINT (x21, 0))
            {
            case 4L:
              x22 = XVECEXP (x4, 0, 5);
              if (XWINT (x22, 0) != 20L)
                return -1;
              x23 = XVECEXP (x4, 0, 6);
              if (XWINT (x23, 0) != 5L)
                return -1;
              x24 = XVECEXP (x4, 0, 7);
              if (XWINT (x24, 0) != 21L)
                return -1;
              x14 = XVECEXP (x4, 0, 8);
              if (XWINT (x14, 0) != 8L)
                return -1;
              x15 = XVECEXP (x4, 0, 9);
              if (XWINT (x15, 0) != 24L)
                return -1;
              x16 = XVECEXP (x4, 0, 10);
              if (XWINT (x16, 0) != 9L)
                return -1;
              x17 = XVECEXP (x4, 0, 11);
              if (XWINT (x17, 0) != 25L
                  || XWINT (x7, 0) != 12L
                  || XWINT (x8, 0) != 28L
                  || XWINT (x9, 0) != 13L
                  || XWINT (x10, 0) != 29L)
                return -1;
              switch (GET_MODE (operands[0]))
                {
                case E_V16SFmode:
                  if (pattern1580 (x2, 
E_V16SFmode, 
E_V32SFmode) != 0
                      || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 11240 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
                    return -1;
                  return 5251; /* avx512f_unpcklps512_mask */

                case E_V16SImode:
                  if (pattern1580 (x2, 
E_V16SImode, 
E_V32SImode) != 0
                      || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 19799 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
                    return -1;
                  return 8373; /* avx512f_interleave_lowv16si_mask */

                default:
                  return -1;
                }

            case 2L:
              x22 = XVECEXP (x4, 0, 5);
              if (XWINT (x22, 0) != 18L)
                return -1;
              x23 = XVECEXP (x4, 0, 6);
              if (XWINT (x23, 0) != 3L)
                return -1;
              x24 = XVECEXP (x4, 0, 7);
              if (XWINT (x24, 0) != 19L)
                return -1;
              x14 = XVECEXP (x4, 0, 8);
              switch (XWINT (x14, 0))
                {
                case 4L:
                  x15 = XVECEXP (x4, 0, 9);
                  if (XWINT (x15, 0) != 20L)
                    return -1;
                  x16 = XVECEXP (x4, 0, 10);
                  if (XWINT (x16, 0) != 5L)
                    return -1;
                  x17 = XVECEXP (x4, 0, 11);
                  if (XWINT (x17, 0) != 21L
                      || XWINT (x7, 0) != 6L
                      || XWINT (x8, 0) != 22L
                      || XWINT (x9, 0) != 7L
                      || XWINT (x10, 0) != 23L
                      || pattern1581 (x2, 
E_V16QImode, 
E_V32QImode) != 0
                      || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 19568 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && TARGET_AVX512VL && TARGET_AVX512BW)))
                    return -1;
                  return 8327; /* vec_interleave_lowv16qi_mask */

                case 8L:
                  x15 = XVECEXP (x4, 0, 9);
                  if (XWINT (x15, 0) != 24L)
                    return -1;
                  x16 = XVECEXP (x4, 0, 10);
                  if (XWINT (x16, 0) != 9L)
                    return -1;
                  x17 = XVECEXP (x4, 0, 11);
                  if (XWINT (x17, 0) != 25L
                      || XWINT (x7, 0) != 10L
                      || XWINT (x8, 0) != 26L
                      || XWINT (x9, 0) != 11L
                      || XWINT (x10, 0) != 27L)
                    return -1;
                  switch (GET_MODE (operands[0]))
                    {
                    case E_V16HImode:
                      if (pattern1580 (x2, 
E_V16HImode, 
E_V32HImode) != 0
                          || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 19688 "../../gcc/config/i386/sse.md"
(TARGET_AVX2 && TARGET_AVX512VL && TARGET_AVX512BW)))
                        return -1;
                      return 8353; /* avx2_interleave_lowv16hi_mask */

                    case E_V16HFmode:
                      if (pattern1580 (x2, 
E_V16HFmode, 
E_V32HFmode) != 0
                          || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 19688 "../../gcc/config/i386/sse.md"
(TARGET_AVX2 && TARGET_AVX512VL && TARGET_AVX512BW)))
                        return -1;
                      return 8355; /* avx2_interleave_lowv16hf_mask */

                    case E_V16BFmode:
                      if (pattern1580 (x2, 
E_V16BFmode, 
E_V32BFmode) != 0
                          || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 19688 "../../gcc/config/i386/sse.md"
(TARGET_AVX2 && TARGET_AVX512VL && TARGET_AVX512BW)))
                        return -1;
                      return 8357; /* avx2_interleave_lowv16bf_mask */

                    default:
                      return -1;
                    }

                default:
                  return -1;
                }

            default:
              return -1;
            }

        case 0L:
          if (pattern1664 (x4) != 0)
            return -1;
          x14 = XVECEXP (x4, 0, 8);
          if (XWINT (x14, 0) != 8L)
            return -1;
          x15 = XVECEXP (x4, 0, 9);
          if (XWINT (x15, 0) != 8L)
            return -1;
          x16 = XVECEXP (x4, 0, 10);
          if (XWINT (x16, 0) != 10L)
            return -1;
          x17 = XVECEXP (x4, 0, 11);
          if (XWINT (x17, 0) != 10L
              || XWINT (x7, 0) != 12L
              || XWINT (x8, 0) != 12L
              || XWINT (x9, 0) != 14L
              || XWINT (x10, 0) != 14L
              || pattern1803 (x2, 
E_V16SFmode, 
E_V32SFmode) != 0
              || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 11433 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 5267; /* avx512f_movsldup512_mask */

        default:
          return -1;
        }

    case 1L:
      x13 = XVECEXP (x4, 0, 1);
      if (XWINT (x13, 0) != 1L
          || XWINT (x5, 0) != 3L
          || XWINT (x6, 0) != 3L)
        return -1;
      x21 = XVECEXP (x4, 0, 4);
      if (XWINT (x21, 0) != 5L)
        return -1;
      x22 = XVECEXP (x4, 0, 5);
      if (XWINT (x22, 0) != 5L)
        return -1;
      x23 = XVECEXP (x4, 0, 6);
      if (XWINT (x23, 0) != 7L)
        return -1;
      x24 = XVECEXP (x4, 0, 7);
      if (XWINT (x24, 0) != 7L)
        return -1;
      x14 = XVECEXP (x4, 0, 8);
      if (XWINT (x14, 0) != 9L)
        return -1;
      x15 = XVECEXP (x4, 0, 9);
      if (XWINT (x15, 0) != 9L)
        return -1;
      x16 = XVECEXP (x4, 0, 10);
      if (XWINT (x16, 0) != 11L)
        return -1;
      x17 = XVECEXP (x4, 0, 11);
      if (XWINT (x17, 0) != 11L
          || XWINT (x7, 0) != 13L
          || XWINT (x8, 0) != 13L
          || XWINT (x9, 0) != 15L
          || XWINT (x10, 0) != 15L
          || pattern1803 (x2, 
E_V16SFmode, 
E_V32SFmode) != 0
          || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 11380 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
        return -1;
      return 5261; /* avx512f_movshdup512_mask */

    case 8L:
      x13 = XVECEXP (x4, 0, 1);
      if (XWINT (x13, 0) != 24L
          || XWINT (x5, 0) != 9L
          || XWINT (x6, 0) != 25L)
        return -1;
      x21 = XVECEXP (x4, 0, 4);
      if (XWINT (x21, 0) != 10L)
        return -1;
      x22 = XVECEXP (x4, 0, 5);
      if (XWINT (x22, 0) != 26L)
        return -1;
      x23 = XVECEXP (x4, 0, 6);
      if (XWINT (x23, 0) != 11L)
        return -1;
      x24 = XVECEXP (x4, 0, 7);
      if (XWINT (x24, 0) != 27L
          || pattern1848 (x4) != 0
          || XWINT (x7, 0) != 14L
          || XWINT (x8, 0) != 30L
          || XWINT (x9, 0) != 15L
          || XWINT (x10, 0) != 31L
          || pattern772 (x2, 
E_V32QImode, 
E_V16QImode) != 0
          || !register_operand (operands[1], E_V16QImode))
        return -1;
      x18 = XEXP (x3, 0);
      x19 = XEXP (x18, 1);
      operands[2] = x19;
      if (!vector_operand (operands[2], E_V16QImode))
        return -1;
      x20 = XEXP (x2, 1);
      operands[3] = x20;
      if (!nonimm_or_0_operand (operands[3], E_V16QImode))
        return -1;
      operands[4] = x11;
      if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 19472 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && TARGET_AVX512VL && TARGET_AVX512BW)))
        return -1;
      return 8321; /* vec_interleave_highv16qi_mask */

    case 4L:
      x13 = XVECEXP (x4, 0, 1);
      if (XWINT (x13, 0) != 20L
          || XWINT (x5, 0) != 5L
          || XWINT (x6, 0) != 21L
          || pattern1833 (x4) != 0
          || pattern1848 (x4) != 0
          || pattern1865 (x2) != 0)
        return -1;
      switch (GET_MODE (operands[0]))
        {
        case E_V16HImode:
          if (pattern1580 (x2, 
E_V16HImode, 
E_V32HImode) != 0
              || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 19620 "../../gcc/config/i386/sse.md"
(TARGET_AVX2 && TARGET_AVX512VL && TARGET_AVX512BW)))
            return -1;
          return 8335; /* avx2_interleave_highv16hi_mask */

        case E_V16HFmode:
          if (pattern1580 (x2, 
E_V16HFmode, 
E_V32HFmode) != 0
              || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 19620 "../../gcc/config/i386/sse.md"
(TARGET_AVX2 && TARGET_AVX512VL && TARGET_AVX512BW)))
            return -1;
          return 8337; /* avx2_interleave_highv16hf_mask */

        case E_V16BFmode:
          if (pattern1580 (x2, 
E_V16BFmode, 
E_V32BFmode) != 0
              || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 19620 "../../gcc/config/i386/sse.md"
(TARGET_AVX2 && TARGET_AVX512VL && TARGET_AVX512BW)))
            return -1;
          return 8339; /* avx2_interleave_highv16bf_mask */

        default:
          return -1;
        }

    default:
      return -1;
    }
}

 int
recog_178 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  switch (GET_CODE (x3))
    {
    case REG:
    case SUBREG:
    case MEM:
      res = recog_156 (x1, insn, pnum_clobbers);
      if (res >= 0)
        return res;
      break;

    case CONST_INT:
    case CONST_DOUBLE:
    case CONST_VECTOR:
      switch (pattern315 (x2))
        {
        case 0:
          res = recog_157 (x1, insn, pnum_clobbers);
          if (res >= 0)
            return res;
          break;

        case 1:
          if (vector_all_ones_operand (operands[1], E_V16QImode)
              && const0_operand (operands[2], E_V16QImode)
              && 
#line 18120 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()
   && (INTVAL (operands[5]) == 2 || INTVAL (operands[5]) == 5)))
            return 7910; /* *avx2_pcmpv16qi3_6 */
          if (const0_operand (operands[1], E_V16QImode)
              && vector_all_ones_operand (operands[2], E_V16QImode)
              && 
#line 18178 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()
     /* NE is commutative.  */
   && INTVAL (operands[5]) == 4))
            return 7933; /* *avx2_pcmpv16qi3_8 */
          break;

        case 2:
          if (vector_all_ones_operand (operands[1], E_V8HImode)
              && const0_operand (operands[2], E_V8HImode)
              && 
#line 18120 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()
   && (INTVAL (operands[5]) == 2 || INTVAL (operands[5]) == 5)))
            return 7912; /* *avx2_pcmpv8hi3_6 */
          if (const0_operand (operands[1], E_V8HImode)
              && vector_all_ones_operand (operands[2], E_V8HImode)
              && 
#line 18178 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()
     /* NE is commutative.  */
   && INTVAL (operands[5]) == 4))
            return 7934; /* *avx2_pcmpv8hi3_8 */
          break;

        case 3:
          if (vector_all_ones_operand (operands[1], E_V4SImode)
              && const0_operand (operands[2], E_V4SImode)
              && 
#line 18120 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()
   && (INTVAL (operands[5]) == 2 || INTVAL (operands[5]) == 5)))
            return 7914; /* *avx2_pcmpv4si3_6 */
          if (const0_operand (operands[1], E_V4SImode)
              && vector_all_ones_operand (operands[2], E_V4SImode)
              && 
#line 18178 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()
     /* NE is commutative.  */
   && INTVAL (operands[5]) == 4))
            return 7935; /* *avx2_pcmpv4si3_8 */
          break;

        case 4:
          if (vector_all_ones_operand (operands[1], E_V2DImode)
              && const0_operand (operands[2], E_V2DImode)
              && 
#line 18120 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()
   && (INTVAL (operands[5]) == 2 || INTVAL (operands[5]) == 5)))
            return 7916; /* *avx2_pcmpv2di3_6 */
          if (const0_operand (operands[1], E_V2DImode)
              && vector_all_ones_operand (operands[2], E_V2DImode)
              && 
#line 18178 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()
     /* NE is commutative.  */
   && INTVAL (operands[5]) == 4))
            return 7936; /* *avx2_pcmpv2di3_8 */
          break;

        case 5:
          if (vector_all_ones_operand (operands[1], E_V32QImode)
              && const0_operand (operands[2], E_V32QImode)
              && 
#line 18120 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()
   && (INTVAL (operands[5]) == 2 || INTVAL (operands[5]) == 5)))
            return 7918; /* *avx2_pcmpv32qi3_6 */
          if (const0_operand (operands[1], E_V32QImode)
              && vector_all_ones_operand (operands[2], E_V32QImode)
              && 
#line 18178 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()
     /* NE is commutative.  */
   && INTVAL (operands[5]) == 4))
            return 7937; /* *avx2_pcmpv32qi3_8 */
          break;

        case 6:
          if (vector_all_ones_operand (operands[1], E_V16HImode)
              && const0_operand (operands[2], E_V16HImode)
              && 
#line 18120 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()
   && (INTVAL (operands[5]) == 2 || INTVAL (operands[5]) == 5)))
            return 7920; /* *avx2_pcmpv16hi3_6 */
          if (const0_operand (operands[1], E_V16HImode)
              && vector_all_ones_operand (operands[2], E_V16HImode)
              && 
#line 18178 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()
     /* NE is commutative.  */
   && INTVAL (operands[5]) == 4))
            return 7938; /* *avx2_pcmpv16hi3_8 */
          break;

        case 7:
          if (vector_all_ones_operand (operands[1], E_V8SImode)
              && const0_operand (operands[2], E_V8SImode)
              && 
#line 18120 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()
   && (INTVAL (operands[5]) == 2 || INTVAL (operands[5]) == 5)))
            return 7922; /* *avx2_pcmpv8si3_6 */
          if (const0_operand (operands[1], E_V8SImode)
              && vector_all_ones_operand (operands[2], E_V8SImode)
              && 
#line 18178 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()
     /* NE is commutative.  */
   && INTVAL (operands[5]) == 4))
            return 7939; /* *avx2_pcmpv8si3_8 */
          break;

        case 8:
          if (vector_all_ones_operand (operands[1], E_V4DImode)
              && const0_operand (operands[2], E_V4DImode)
              && 
#line 18120 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()
   && (INTVAL (operands[5]) == 2 || INTVAL (operands[5]) == 5)))
            return 7924; /* *avx2_pcmpv4di3_6 */
          if (const0_operand (operands[1], E_V4DImode)
              && vector_all_ones_operand (operands[2], E_V4DImode)
              && 
#line 18178 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()
     /* NE is commutative.  */
   && INTVAL (operands[5]) == 4))
            return 7940; /* *avx2_pcmpv4di3_8 */
          break;

        case 9:
          if ((
#line 4145 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()) && 
#line 422 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
            return 3239; /* *avx_cmpv8sf3_2 */
          break;

        case 10:
          if (
#line 17995 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()
   /* NE is commutative.  */
   && ((INTVAL (operands[5]) == 4
	&& !(MEM_P (operands[3]) && MEM_P (operands[4])))
	  /* LE, 3 must be register.  */
       || (INTVAL (operands[5]) == 2
	   && !MEM_P (operands[3]))
	  /* NLT aka GE, 4 must be register and we swap operands.  */
       || (INTVAL (operands[5]) == 5
	   && !MEM_P (operands[4])))))
            return 7901; /* *avx2_pcmpv8si3_2 */
          break;

        case 11:
          if (
#line 4145 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()))
            return 3240; /* *avx_cmpv4sf3_2 */
          break;

        case 12:
          if (
#line 17995 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()
   /* NE is commutative.  */
   && ((INTVAL (operands[5]) == 4
	&& !(MEM_P (operands[3]) && MEM_P (operands[4])))
	  /* LE, 3 must be register.  */
       || (INTVAL (operands[5]) == 2
	   && !MEM_P (operands[3]))
	  /* NLT aka GE, 4 must be register and we swap operands.  */
       || (INTVAL (operands[5]) == 5
	   && !MEM_P (operands[4])))))
            return 7897; /* *avx2_pcmpv4si3_2 */
          break;

        case 13:
          if ((
#line 4145 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()) && 
#line 423 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
            return 3241; /* *avx_cmpv4df3_2 */
          break;

        case 14:
          if (
#line 17995 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()
   /* NE is commutative.  */
   && ((INTVAL (operands[5]) == 4
	&& !(MEM_P (operands[3]) && MEM_P (operands[4])))
	  /* LE, 3 must be register.  */
       || (INTVAL (operands[5]) == 2
	   && !MEM_P (operands[3]))
	  /* NLT aka GE, 4 must be register and we swap operands.  */
       || (INTVAL (operands[5]) == 5
	   && !MEM_P (operands[4])))))
            return 7902; /* *avx2_pcmpv4di3_2 */
          break;

        case 15:
          if ((
#line 4145 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()) && 
#line 423 "../../gcc/config/i386/sse.md"
(TARGET_SSE2)))
            return 3242; /* *avx_cmpv2df3_2 */
          break;

        case 16:
          if (
#line 17995 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()
   /* NE is commutative.  */
   && ((INTVAL (operands[5]) == 4
	&& !(MEM_P (operands[3]) && MEM_P (operands[4])))
	  /* LE, 3 must be register.  */
       || (INTVAL (operands[5]) == 2
	   && !MEM_P (operands[3]))
	  /* NLT aka GE, 4 must be register and we swap operands.  */
       || (INTVAL (operands[5]) == 5
	   && !MEM_P (operands[4])))))
            return 7898; /* *avx2_pcmpv2di3_2 */
          break;

        case 17:
          if (
#line 17995 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()
   /* NE is commutative.  */
   && ((INTVAL (operands[5]) == 4
	&& !(MEM_P (operands[3]) && MEM_P (operands[4])))
	  /* LE, 3 must be register.  */
       || (INTVAL (operands[5]) == 2
	   && !MEM_P (operands[3]))
	  /* NLT aka GE, 4 must be register and we swap operands.  */
       || (INTVAL (operands[5]) == 5
	   && !MEM_P (operands[4])))))
            return 7895; /* *avx2_pcmpv16qi3_2 */
          break;

        case 18:
          if (
#line 17995 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()
   /* NE is commutative.  */
   && ((INTVAL (operands[5]) == 4
	&& !(MEM_P (operands[3]) && MEM_P (operands[4])))
	  /* LE, 3 must be register.  */
       || (INTVAL (operands[5]) == 2
	   && !MEM_P (operands[3]))
	  /* NLT aka GE, 4 must be register and we swap operands.  */
       || (INTVAL (operands[5]) == 5
	   && !MEM_P (operands[4])))))
            return 7896; /* *avx2_pcmpv8hi3_2 */
          break;

        case 19:
          if (
#line 17995 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()
   /* NE is commutative.  */
   && ((INTVAL (operands[5]) == 4
	&& !(MEM_P (operands[3]) && MEM_P (operands[4])))
	  /* LE, 3 must be register.  */
       || (INTVAL (operands[5]) == 2
	   && !MEM_P (operands[3]))
	  /* NLT aka GE, 4 must be register and we swap operands.  */
       || (INTVAL (operands[5]) == 5
	   && !MEM_P (operands[4])))))
            return 7899; /* *avx2_pcmpv32qi3_2 */
          break;

        case 20:
          if (
#line 17995 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()
   /* NE is commutative.  */
   && ((INTVAL (operands[5]) == 4
	&& !(MEM_P (operands[3]) && MEM_P (operands[4])))
	  /* LE, 3 must be register.  */
       || (INTVAL (operands[5]) == 2
	   && !MEM_P (operands[3]))
	  /* NLT aka GE, 4 must be register and we swap operands.  */
       || (INTVAL (operands[5]) == 5
	   && !MEM_P (operands[4])))))
            return 7900; /* *avx2_pcmpv16hi3_2 */
          break;

        case 21:
          switch (GET_MODE (operands[0]))
            {
            case E_V64QImode:
              if (register_operand (operands[0], E_V64QImode)
                  && GET_MODE (x2) == E_V64QImode
                  && register_operand (operands[1], E_DImode))
                {
                  if (vector_all_ones_operand (operands[2], E_V64QImode)
                      && const0_operand (operands[3], E_V64QImode)
                      && (
#line 10293 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 318 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                    return 5205; /* *avx512bw_cvtmask2bv64qi */
                  if (const0_operand (operands[2], E_V64QImode)
                      && vector_all_ones_operand (operands[3], E_V64QImode)
                      && (
#line 10342 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && ix86_pre_reload_split ()) && 
#line 505 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512)))
                    return 5217; /* *avx512bw_cvtmask2bv64qi_not */
                }
              break;

            case E_V16QImode:
              if (register_operand (operands[0], E_V16QImode)
                  && GET_MODE (x2) == E_V16QImode
                  && register_operand (operands[1], E_HImode))
                {
                  if (vector_all_ones_operand (operands[2], E_V16QImode)
                      && const0_operand (operands[3], E_V16QImode)
                      && (
#line 10293 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 318 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                    return 5206; /* *avx512vl_cvtmask2bv16qi */
                  if (const0_operand (operands[2], E_V16QImode)
                      && vector_all_ones_operand (operands[3], E_V16QImode)
                      && (
#line 10342 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && ix86_pre_reload_split ()) && 
#line 507 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL && TARGET_AVX512BW)))
                    return 5219; /* *avx512vl_cvtmask2bv16qi_not */
                }
              break;

            case E_V32QImode:
              if (register_operand (operands[0], E_V32QImode)
                  && GET_MODE (x2) == E_V32QImode
                  && register_operand (operands[1], E_SImode))
                {
                  if (vector_all_ones_operand (operands[2], E_V32QImode)
                      && const0_operand (operands[3], E_V32QImode)
                      && (
#line 10293 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 318 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                    return 5207; /* *avx512vl_cvtmask2bv32qi */
                  if (const0_operand (operands[2], E_V32QImode)
                      && vector_all_ones_operand (operands[3], E_V32QImode)
                      && (
#line 10342 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && ix86_pre_reload_split ()) && 
#line 506 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL && TARGET_AVX512BW)))
                    return 5218; /* *avx512vl_cvtmask2bv32qi_not */
                }
              break;

            case E_V32HImode:
              if (register_operand (operands[0], E_V32HImode)
                  && GET_MODE (x2) == E_V32HImode
                  && register_operand (operands[1], E_SImode))
                {
                  if (vector_all_ones_operand (operands[2], E_V32HImode)
                      && const0_operand (operands[3], E_V32HImode)
                      && (
#line 10293 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 319 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                    return 5208; /* *avx512bw_cvtmask2wv32hi */
                  if (const0_operand (operands[2], E_V32HImode)
                      && vector_all_ones_operand (operands[3], E_V32HImode)
                      && (
#line 10342 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && ix86_pre_reload_split ()) && 
#line 508 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512)))
                    return 5220; /* *avx512bw_cvtmask2wv32hi_not */
                }
              break;

            case E_V16HImode:
              if (register_operand (operands[0], E_V16HImode)
                  && GET_MODE (x2) == E_V16HImode
                  && register_operand (operands[1], E_HImode))
                {
                  if (vector_all_ones_operand (operands[2], E_V16HImode)
                      && const0_operand (operands[3], E_V16HImode)
                      && (
#line 10293 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 319 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                    return 5209; /* *avx512vl_cvtmask2wv16hi */
                  if (const0_operand (operands[2], E_V16HImode)
                      && vector_all_ones_operand (operands[3], E_V16HImode)
                      && (
#line 10342 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && ix86_pre_reload_split ()) && 
#line 509 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL && TARGET_AVX512BW)))
                    return 5221; /* *avx512vl_cvtmask2wv16hi_not */
                }
              break;

            case E_V8HImode:
              if (register_operand (operands[0], E_V8HImode)
                  && GET_MODE (x2) == E_V8HImode
                  && register_operand (operands[1], E_QImode))
                {
                  if (vector_all_ones_operand (operands[2], E_V8HImode)
                      && const0_operand (operands[3], E_V8HImode)
                      && (
#line 10293 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 319 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                    return 5210; /* *avx512vl_cvtmask2wv8hi */
                  if (const0_operand (operands[2], E_V8HImode)
                      && vector_all_ones_operand (operands[3], E_V8HImode)
                      && (
#line 10342 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && ix86_pre_reload_split ()) && 
#line 510 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL && TARGET_AVX512BW)))
                    return 5222; /* *avx512vl_cvtmask2wv8hi_not */
                }
              break;

            case E_V16SImode:
              if (register_operand (operands[0], E_V16SImode)
                  && GET_MODE (x2) == E_V16SImode
                  && register_operand (operands[1], E_HImode))
                {
                  if (vector_all_ones_operand (operands[2], E_V16SImode)
                      && const0_operand (operands[3], E_V16SImode)
                      && (
#line 10316 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 501 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                    return 5211; /* *avx512f_cvtmask2dv16si */
                  if (const0_operand (operands[2], E_V16SImode)
                      && vector_all_ones_operand (operands[3], E_V16SImode)
                      && (
#line 10342 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && ix86_pre_reload_split ()) && 
#line 511 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                    return 5223; /* *avx512f_cvtmask2dv16si_not */
                }
              break;

            case E_V8SImode:
              if (register_operand (operands[0], E_V8SImode)
                  && GET_MODE (x2) == E_V8SImode
                  && register_operand (operands[1], E_QImode))
                {
                  if (vector_all_ones_operand (operands[2], E_V8SImode)
                      && const0_operand (operands[3], E_V8SImode)
                      && (
#line 10316 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 501 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                    return 5212; /* *avx512vl_cvtmask2dv8si */
                  if (const0_operand (operands[2], E_V8SImode)
                      && vector_all_ones_operand (operands[3], E_V8SImode)
                      && (
#line 10342 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && ix86_pre_reload_split ()) && 
#line 511 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                    return 5224; /* *avx512vl_cvtmask2dv8si_not */
                }
              break;

            case E_V4SImode:
              if (register_operand (operands[0], E_V4SImode)
                  && GET_MODE (x2) == E_V4SImode
                  && register_operand (operands[1], E_QImode))
                {
                  if (vector_all_ones_operand (operands[2], E_V4SImode)
                      && const0_operand (operands[3], E_V4SImode)
                      && (
#line 10316 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 501 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                    return 5213; /* *avx512vl_cvtmask2dv4si */
                  if (const0_operand (operands[2], E_V4SImode)
                      && vector_all_ones_operand (operands[3], E_V4SImode)
                      && (
#line 10342 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && ix86_pre_reload_split ()) && 
#line 511 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                    return 5225; /* *avx512vl_cvtmask2dv4si_not */
                }
              break;

            case E_V8DImode:
              if (register_operand (operands[0], E_V8DImode)
                  && GET_MODE (x2) == E_V8DImode
                  && register_operand (operands[1], E_QImode))
                {
                  if (vector_all_ones_operand (operands[2], E_V8DImode)
                      && const0_operand (operands[3], E_V8DImode)
                      && (
#line 10316 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 502 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                    return 5214; /* *avx512f_cvtmask2qv8di */
                  if (const0_operand (operands[2], E_V8DImode)
                      && vector_all_ones_operand (operands[3], E_V8DImode)
                      && (
#line 10342 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && ix86_pre_reload_split ()) && 
#line 512 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                    return 5226; /* *avx512f_cvtmask2qv8di_not */
                }
              break;

            case E_V4DImode:
              if (register_operand (operands[0], E_V4DImode)
                  && GET_MODE (x2) == E_V4DImode
                  && register_operand (operands[1], E_QImode))
                {
                  if (vector_all_ones_operand (operands[2], E_V4DImode)
                      && const0_operand (operands[3], E_V4DImode)
                      && (
#line 10316 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 502 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                    return 5215; /* *avx512vl_cvtmask2qv4di */
                  if (const0_operand (operands[2], E_V4DImode)
                      && vector_all_ones_operand (operands[3], E_V4DImode)
                      && (
#line 10342 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && ix86_pre_reload_split ()) && 
#line 512 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                    return 5227; /* *avx512vl_cvtmask2qv4di_not */
                }
              break;

            case E_V2DImode:
              if (register_operand (operands[0], E_V2DImode)
                  && GET_MODE (x2) == E_V2DImode
                  && register_operand (operands[1], E_QImode))
                {
                  if (vector_all_ones_operand (operands[2], E_V2DImode)
                      && const0_operand (operands[3], E_V2DImode)
                      && (
#line 10316 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 502 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                    return 5216; /* *avx512vl_cvtmask2qv2di */
                  if (const0_operand (operands[2], E_V2DImode)
                      && vector_all_ones_operand (operands[3], E_V2DImode)
                      && (
#line 10342 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && ix86_pre_reload_split ()) && 
#line 512 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                    return 5228; /* *avx512vl_cvtmask2qv2di_not */
                }
              break;

            default:
              break;
            }
          break;

        default:
          break;
        }
      break;

    default:
      break;
    }
  operands[1] = x3;
  switch (pattern318 (x2))
    {
    case 0:
      if (!(
#line 4172 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()) && 
#line 422 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
        return -1;
      return 3243; /* *avx_cmpv8sf3_3 */

    case 1:
      if (!
#line 4172 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()))
        return -1;
      return 3244; /* *avx_cmpv4sf3_3 */

    case 2:
      if (!(
#line 4172 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()) && 
#line 423 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
        return -1;
      return 3245; /* *avx_cmpv4df3_3 */

    case 3:
      if (!(
#line 4172 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()) && 
#line 423 "../../gcc/config/i386/sse.md"
(TARGET_SSE2)))
        return -1;
      return 3246; /* *avx_cmpv2df3_3 */

    case 4:
      if (!(
#line 4193 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()) && 
#line 422 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
        return -1;
      return 3247; /* *avx_cmpv8sf3_4 */

    case 5:
      if (!
#line 4193 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()))
        return -1;
      return 3248; /* *avx_cmpv4sf3_4 */

    case 6:
      if (!(
#line 4193 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()) && 
#line 423 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
        return -1;
      return 3249; /* *avx_cmpv4df3_4 */

    case 7:
      if (!(
#line 4193 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()) && 
#line 423 "../../gcc/config/i386/sse.md"
(TARGET_SSE2)))
        return -1;
      return 3250; /* *avx_cmpv2df3_4 */

    default:
      return -1;
    }
}

 int
recog_199 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  switch (pattern135 (x2))
    {
    case 0:
      if (pattern774 (x2, 
E_V8HImode, 
E_QImode, 
E_V8HFmode) != 0
          || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 7865 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && 1) && 
#line 694 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
        return -1;
      return 4606; /* avx512fp16_fixuns_truncv8hi2_mask */

    case 1:
      if (pattern774 (x2, 
E_V16HImode, 
E_HImode, 
E_V16HFmode) != 0
          || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 7865 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && 1) && 
#line 694 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
        return -1;
      return 4613; /* avx512fp16_fixuns_truncv16hi2_mask */

    case 2:
      if (pattern774 (x2, 
E_V32HImode, 
E_SImode, 
E_V32HFmode) != 0
          || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 7865 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && 1) && 
#line 694 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512))))
        return -1;
      return 4621; /* avx512fp16_fixuns_truncv32hi2_mask */

    case 3:
      switch (pattern896 (x2, 
E_V8SImode))
        {
        case 0:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 7865 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && 1) && 
#line 695 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
            return -1;
          return 4629; /* avx512fp16_fixuns_truncv8si2_mask */

        case 1:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 9568 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 5035; /* fixuns_truncv8dfv8si2_mask */

        case 2:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 9913 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL) && 
#line 441 "../../gcc/config/i386/sse.md"
(TARGET_AVX))))
            return -1;
          return 5153; /* fixuns_truncv8sfv8si2_mask */

        default:
          return -1;
        }

    case 4:
      switch (pattern895 (x2))
        {
        case 0:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 7865 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && 1) && 
#line 695 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512))))
            return -1;
          return 4637; /* avx512fp16_fixuns_truncv16si2_mask */

        case 1:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 8773 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 4882; /* fixuns_truncv16sfv16si2_mask */

        default:
          return -1;
        }

    case 5:
      switch (pattern896 (x2, 
E_V8DImode))
        {
        case 0:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 7865 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && 1) && 
#line 696 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512))))
            return -1;
          return 4645; /* avx512fp16_fixuns_truncv8di2_mask */

        case 1:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 9699 "../../gcc/config/i386/sse.md"
(TARGET_AVX512DQ && 1) && 
#line 537 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512))))
            return -1;
          return 5080; /* fixuns_truncv8dfv8di2_mask */

        case 2:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 9742 "../../gcc/config/i386/sse.md"
(TARGET_AVX512DQ) && 
#line 627 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512))))
            return -1;
          return 5133; /* fixuns_truncv8sfv8di2_mask */

        default:
          return -1;
        }

    case 6:
      if (pattern773 (x2, 
E_V4SImode, 
E_QImode) != 0)
        return -1;
      switch (GET_MODE (operands[1]))
        {
        case E_V4HFmode:
          if (!memory_operand (operands[1], E_V4HFmode)
              || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 7915 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL)))
            return -1;
          return 4670; /* *avx512fp16_fixuns_truncv4si2_load_mask */

        case E_V4DFmode:
          if (!nonimmediate_operand (operands[1], E_V4DFmode)
              || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 9678 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL && TARGET_AVX512F)))
            return -1;
          return 5053; /* fixuns_truncv4dfv4si2_mask */

        case E_V4SFmode:
          if (!nonimmediate_operand (operands[1], E_V4SFmode)
              || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 9913 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 5155; /* fixuns_truncv4sfv4si2_mask */

        default:
          return -1;
        }

    case 7:
      switch (pattern897 (x2))
        {
        case 0:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 7915 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL)))
            return -1;
          return 4674; /* *avx512fp16_fixuns_truncv4di2_load_mask */

        case 1:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 9699 "../../gcc/config/i386/sse.md"
(TARGET_AVX512DQ && 1) && 
#line 537 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
            return -1;
          return 5088; /* fixuns_truncv4dfv4di2_mask */

        case 2:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 9742 "../../gcc/config/i386/sse.md"
(TARGET_AVX512DQ) && 
#line 627 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
            return -1;
          return 5137; /* fixuns_truncv4sfv4di2_mask */

        default:
          return -1;
        }

    case 8:
      switch (pattern898 (x2))
        {
        case 0:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 7965 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL)))
            return -1;
          return 4686; /* *avx512fp16_fixuns_truncv2di2_load_mask */

        case 1:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 9699 "../../gcc/config/i386/sse.md"
(TARGET_AVX512DQ && 1) && 
#line 537 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
            return -1;
          return 5093; /* fixuns_truncv2dfv2di2_mask */

        default:
          return -1;
        }

    case 9:
      if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 7905 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL)))
        return -1;
      return 4662; /* avx512fp16_fixuns_truncv4si2_mask */

    case 10:
      if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 7905 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL)))
        return -1;
      return 4666; /* avx512fp16_fixuns_truncv4di2_mask */

    case 11:
      if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 7955 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL)))
        return -1;
      return 4682; /* avx512fp16_fixuns_truncv2di2_mask */

    case 12:
      if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 9765 "../../gcc/config/i386/sse.md"
(TARGET_AVX512DQ && TARGET_AVX512VL)))
        return -1;
      return 5145; /* avx512dq_fixuns_truncv2sfv2di2_mask */

    default:
      return -1;
    }
}

 int
recog_207 (rtx x1 ATTRIBUTE_UNUSED,
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
    case E_V64QImode:
      if (!register_operand (operands[0], E_V64QImode)
          || GET_MODE (x2) != E_V64QImode
          || !memory_operand (operands[1], E_V64QImode)
          || !(
#line 32674 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256 && TARGET_MOVRS) && 
#line 515 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_512)))
        return -1;
      return 10983; /* avx10_2_vmovrsbv64qi */

    case E_V32QImode:
      if (!register_operand (operands[0], E_V32QImode)
          || GET_MODE (x2) != E_V32QImode
          || !memory_operand (operands[1], E_V32QImode)
          || !
#line 32674 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256 && TARGET_MOVRS))
        return -1;
      return 10985; /* avx10_2_vmovrsbv32qi */

    case E_V16QImode:
      if (!register_operand (operands[0], E_V16QImode)
          || GET_MODE (x2) != E_V16QImode
          || !memory_operand (operands[1], E_V16QImode)
          || !
#line 32674 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256 && TARGET_MOVRS))
        return -1;
      return 10987; /* avx10_2_vmovrsbv16qi */

    case E_V32HImode:
      if (!register_operand (operands[0], E_V32HImode)
          || GET_MODE (x2) != E_V32HImode
          || !memory_operand (operands[1], E_V32HImode)
          || !(
#line 32674 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256 && TARGET_MOVRS) && 
#line 516 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_512)))
        return -1;
      return 10989; /* avx10_2_vmovrswv32hi */

    case E_V16HImode:
      if (!register_operand (operands[0], E_V16HImode)
          || GET_MODE (x2) != E_V16HImode
          || !memory_operand (operands[1], E_V16HImode)
          || !
#line 32674 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256 && TARGET_MOVRS))
        return -1;
      return 10991; /* avx10_2_vmovrswv16hi */

    case E_V8HImode:
      if (!register_operand (operands[0], E_V8HImode)
          || GET_MODE (x2) != E_V8HImode
          || !memory_operand (operands[1], E_V8HImode)
          || !
#line 32674 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256 && TARGET_MOVRS))
        return -1;
      return 10993; /* avx10_2_vmovrswv8hi */

    case E_V16SImode:
      if (!register_operand (operands[0], E_V16SImode)
          || GET_MODE (x2) != E_V16SImode
          || !memory_operand (operands[1], E_V16SImode)
          || !(
#line 32674 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256 && TARGET_MOVRS) && 
#line 517 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_512)))
        return -1;
      return 10995; /* avx10_2_vmovrsdv16si */

    case E_V8SImode:
      if (!register_operand (operands[0], E_V8SImode)
          || GET_MODE (x2) != E_V8SImode
          || !memory_operand (operands[1], E_V8SImode)
          || !
#line 32674 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256 && TARGET_MOVRS))
        return -1;
      return 10997; /* avx10_2_vmovrsdv8si */

    case E_V4SImode:
      if (!register_operand (operands[0], E_V4SImode)
          || GET_MODE (x2) != E_V4SImode
          || !memory_operand (operands[1], E_V4SImode)
          || !
#line 32674 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256 && TARGET_MOVRS))
        return -1;
      return 10999; /* avx10_2_vmovrsdv4si */

    case E_V8DImode:
      if (!register_operand (operands[0], E_V8DImode)
          || GET_MODE (x2) != E_V8DImode
          || !memory_operand (operands[1], E_V8DImode)
          || !(
#line 32674 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256 && TARGET_MOVRS) && 
#line 518 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_512)))
        return -1;
      return 11001; /* avx10_2_vmovrsqv8di */

    case E_V4DImode:
      if (!register_operand (operands[0], E_V4DImode)
          || GET_MODE (x2) != E_V4DImode
          || !memory_operand (operands[1], E_V4DImode)
          || !
#line 32674 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256 && TARGET_MOVRS))
        return -1;
      return 11003; /* avx10_2_vmovrsqv4di */

    case E_V2DImode:
      if (!register_operand (operands[0], E_V2DImode)
          || GET_MODE (x2) != E_V2DImode
          || !memory_operand (operands[1], E_V2DImode)
          || !
#line 32674 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256 && TARGET_MOVRS))
        return -1;
      return 11005; /* avx10_2_vmovrsqv2di */

    default:
      return -1;
    }
}

 int
recog_215 (rtx x1 ATTRIBUTE_UNUSED,
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
    case E_V16SImode:
      if (!register_operand (operands[0], E_V16SImode)
          || GET_MODE (x2) != E_V16SImode
          || !nonimmediate_operand (operands[1], E_V16SImode)
          || !(
#line 29946 "../../gcc/config/i386/sse.md"
(TARGET_AVX512CD) && 
#line 501 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 10068; /* *conflictv16si */

    case E_V8SImode:
      if (!register_operand (operands[0], E_V8SImode)
          || GET_MODE (x2) != E_V8SImode
          || !nonimmediate_operand (operands[1], E_V8SImode)
          || !(
#line 29946 "../../gcc/config/i386/sse.md"
(TARGET_AVX512CD) && 
#line 501 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 10070; /* *conflictv8si */

    case E_V4SImode:
      if (!register_operand (operands[0], E_V4SImode)
          || GET_MODE (x2) != E_V4SImode
          || !nonimmediate_operand (operands[1], E_V4SImode)
          || !(
#line 29946 "../../gcc/config/i386/sse.md"
(TARGET_AVX512CD) && 
#line 501 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 10072; /* *conflictv4si */

    case E_V8DImode:
      if (!register_operand (operands[0], E_V8DImode)
          || GET_MODE (x2) != E_V8DImode
          || !nonimmediate_operand (operands[1], E_V8DImode)
          || !(
#line 29946 "../../gcc/config/i386/sse.md"
(TARGET_AVX512CD) && 
#line 502 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 10074; /* *conflictv8di */

    case E_V4DImode:
      if (!register_operand (operands[0], E_V4DImode)
          || GET_MODE (x2) != E_V4DImode
          || !nonimmediate_operand (operands[1], E_V4DImode)
          || !(
#line 29946 "../../gcc/config/i386/sse.md"
(TARGET_AVX512CD) && 
#line 502 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 10076; /* *conflictv4di */

    case E_V2DImode:
      if (!register_operand (operands[0], E_V2DImode)
          || GET_MODE (x2) != E_V2DImode
          || !nonimmediate_operand (operands[1], E_V2DImode)
          || !(
#line 29946 "../../gcc/config/i386/sse.md"
(TARGET_AVX512CD) && 
#line 502 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 10078; /* *conflictv2di */

    default:
      return -1;
    }
}

 int
recog_222 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12, x13, x14, x15, x16, x17;
  rtx x18, x19;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XVECEXP (x2, 0, 0);
  x4 = XEXP (x3, 0);
  x5 = XEXP (x4, 0);
  switch (GET_CODE (x5))
    {
    case PLUS:
      switch (pattern779 (x2))
        {
        case 0:
          if (!(
#line 444 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 378 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 2710 "../../gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 479 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16)))))
            return -1;
          return 2758; /* avx512fp16_vmaddv8hf3_mask_round */

        case 1:
          if (!(
#line 444 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 378 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 2710 "../../gcc/config/i386/sse.md"
(TARGET_SSE))))
            return -1;
          return 2766; /* sse_vmaddv4sf3_mask_round */

        case 2:
          if (!(
#line 444 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 378 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 2710 "../../gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 480 "../../gcc/config/i386/sse.md"
(TARGET_SSE2)))))
            return -1;
          return 2774; /* sse2_vmaddv2df3_mask_round */

        default:
          return -1;
        }

    case MINUS:
      switch (pattern779 (x2))
        {
        case 0:
          if (!(
#line 444 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 378 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 2710 "../../gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 479 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16)))))
            return -1;
          return 2762; /* avx512fp16_vmsubv8hf3_mask_round */

        case 1:
          if (!(
#line 444 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 378 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 2710 "../../gcc/config/i386/sse.md"
(TARGET_SSE))))
            return -1;
          return 2770; /* sse_vmsubv4sf3_mask_round */

        case 2:
          if (!(
#line 444 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 378 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 2710 "../../gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 480 "../../gcc/config/i386/sse.md"
(TARGET_SSE2)))))
            return -1;
          return 2778; /* sse2_vmsubv2df3_mask_round */

        default:
          return -1;
        }

    case MULT:
      switch (pattern779 (x2))
        {
        case 0:
          if (!(
#line 444 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 378 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 2801 "../../gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 479 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16)))))
            return -1;
          return 2824; /* avx512fp16_vmmulv8hf3_mask_round */

        case 1:
          if (!(
#line 444 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 378 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 2801 "../../gcc/config/i386/sse.md"
(TARGET_SSE))))
            return -1;
          return 2832; /* sse_vmmulv4sf3_mask_round */

        case 2:
          if (!(
#line 444 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 378 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 2801 "../../gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 480 "../../gcc/config/i386/sse.md"
(TARGET_SSE2)))))
            return -1;
          return 2840; /* sse2_vmmulv2df3_mask_round */

        default:
          return -1;
        }

    case DIV:
      switch (pattern779 (x2))
        {
        case 0:
          if (!(
#line 444 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 378 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 2801 "../../gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 479 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16)))))
            return -1;
          return 2828; /* avx512fp16_vmdivv8hf3_mask_round */

        case 1:
          if (!(
#line 444 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 378 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 2801 "../../gcc/config/i386/sse.md"
(TARGET_SSE))))
            return -1;
          return 2836; /* sse_vmdivv4sf3_mask_round */

        case 2:
          if (!(
#line 444 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 378 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 2801 "../../gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 480 "../../gcc/config/i386/sse.md"
(TARGET_SSE2)))))
            return -1;
          return 2844; /* sse2_vmdivv2df3_mask_round */

        default:
          return -1;
        }

    case SQRT:
      x6 = XEXP (x3, 2);
      if (x6 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
        return -1;
      x7 = XEXP (x5, 0);
      operands[1] = x7;
      x8 = XEXP (x4, 1);
      operands[3] = x8;
      x9 = XEXP (x4, 2);
      operands[4] = x9;
      if (!register_operand (operands[4], E_QImode))
        return -1;
      x10 = XEXP (x3, 1);
      operands[2] = x10;
      x11 = XVECEXP (x2, 0, 1);
      operands[5] = x11;
      if (!const_4_or_8_to_11_operand (operands[5], E_SImode))
        return -1;
      switch (GET_MODE (operands[0]))
        {
        case E_V8HFmode:
          if (pattern1550 (x2, 
E_V8HFmode) != 0
              || !(
#line 444 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 378 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 3083 "../../gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 479 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16)))))
            return -1;
          return 2937; /* avx512fp16_vmsqrtv8hf2_mask_round */

        case E_V4SFmode:
          if (pattern1550 (x2, 
E_V4SFmode) != 0
              || !(
#line 444 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 378 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 3083 "../../gcc/config/i386/sse.md"
(TARGET_SSE))))
            return -1;
          return 2941; /* sse_vmsqrtv4sf2_mask_round */

        case E_V2DFmode:
          if (pattern1550 (x2, 
E_V2DFmode) != 0
              || !(
#line 444 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 378 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 3083 "../../gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 480 "../../gcc/config/i386/sse.md"
(TARGET_SSE2)))))
            return -1;
          return 2945; /* sse2_vmsqrtv2df2_mask_round */

        default:
          return -1;
        }

    case VEC_DUPLICATE:
      x11 = XVECEXP (x2, 0, 1);
      operands[5] = x11;
      x7 = XEXP (x5, 0);
      switch (GET_CODE (x7))
        {
        case SQRT:
          x6 = XEXP (x3, 2);
          if (x6 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
            return -1;
          x12 = XEXP (x7, 0);
          operands[1] = x12;
          x8 = XEXP (x4, 1);
          operands[3] = x8;
          x9 = XEXP (x4, 2);
          operands[4] = x9;
          if (!register_operand (operands[4], E_QImode))
            return -1;
          x10 = XEXP (x3, 1);
          operands[2] = x10;
          if (!const_4_or_8_to_11_operand (operands[5], E_SImode))
            return -1;
          switch (GET_MODE (operands[0]))
            {
            case E_V8HFmode:
              if (pattern1582 (x2, 
E_V8HFmode, 
E_HFmode) != 0
                  || !(
#line 444 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 378 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 3102 "../../gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 479 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16)))))
                return -1;
              return 2949; /* *avx512fp16_vmsqrtv8hf2_mask_round */

            case E_V4SFmode:
              if (pattern1582 (x2, 
E_V4SFmode, 
E_SFmode) != 0
                  || !(
#line 444 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 378 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 3102 "../../gcc/config/i386/sse.md"
(TARGET_SSE))))
                return -1;
              return 2953; /* *sse_vmsqrtv4sf2_mask_round */

            case E_V2DFmode:
              if (pattern1582 (x2, 
E_V2DFmode, 
E_DFmode) != 0
                  || !(
#line 444 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 378 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 3102 "../../gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 480 "../../gcc/config/i386/sse.md"
(TARGET_SSE2)))))
                return -1;
              return 2957; /* *sse2_vmsqrtv2df2_mask_round */

            default:
              return -1;
            }

        case FLOAT_EXTEND:
          x12 = XEXP (x7, 0);
          if (GET_CODE (x12) != VEC_SELECT
              || GET_MODE (x12) != E_HFmode
              || pattern1217 (x3) != 0)
            return -1;
          x13 = XEXP (x12, 0);
          operands[1] = x13;
          if (!register_operand (operands[1], E_V8HFmode))
            return -1;
          x8 = XEXP (x4, 1);
          operands[3] = x8;
          x9 = XEXP (x4, 2);
          operands[4] = x9;
          if (!register_operand (operands[4], E_QImode))
            return -1;
          x10 = XEXP (x3, 1);
          operands[2] = x10;
          if (!const48_operand (operands[5], E_SImode))
            return -1;
          switch (GET_MODE (operands[0]))
            {
            case E_V2DFmode:
              if (pattern1761 (x2, 
E_V2DFmode, 
E_DFmode) != 0
                  || !(
#line 486 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 378 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 8298 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16))))
                return -1;
              return 4758; /* avx512fp16_vcvtsh2sd_mask_round */

            case E_V4SFmode:
              if (pattern1761 (x2, 
E_V4SFmode, 
E_SFmode) != 0
                  || !(
#line 486 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 378 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 8298 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16))))
                return -1;
              return 4762; /* avx512fp16_vcvtsh2ss_mask_round */

            default:
              return -1;
            }

        case FLOAT_TRUNCATE:
          if (!const_4_or_8_to_11_operand (operands[5], E_SImode))
            return -1;
          x12 = XEXP (x7, 0);
          switch (GET_CODE (x12))
            {
            case VEC_SELECT:
              if (pattern1217 (x3) != 0
                  || pattern1475 (x2, 
E_HFmode, 
E_V8HFmode) != 0)
                return -1;
              x13 = XEXP (x12, 0);
              operands[1] = x13;
              x8 = XEXP (x4, 1);
              operands[3] = x8;
              if (!nonimm_or_0_operand (operands[3], E_V8HFmode))
                return -1;
              x9 = XEXP (x4, 2);
              operands[4] = x9;
              if (!register_operand (operands[4], E_QImode))
                return -1;
              x10 = XEXP (x3, 1);
              operands[2] = x10;
              if (!register_operand (operands[2], E_V8HFmode))
                return -1;
              switch (GET_MODE (x12))
                {
                case E_DFmode:
                  if (!register_operand (operands[1], E_V2DFmode)
                      || !(
#line 444 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 378 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 8328 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16))))
                    return -1;
                  return 4770; /* avx512fp16_vcvtsd2sh_mask_round */

                case E_SFmode:
                  if (!register_operand (operands[1], E_V4SFmode)
                      || !(
#line 444 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 378 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 8328 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16))))
                    return -1;
                  return 4774; /* avx512fp16_vcvtss2sh_mask_round */

                default:
                  return -1;
                }

            case REG:
            case SUBREG:
            case MEM:
              operands[2] = x12;
              if (!nonimmediate_operand (operands[2], E_V2DFmode))
                return -1;
              x9 = XEXP (x4, 2);
              if (x9 != const_int_rtx[MAX_SAVED_CONST_INT + 1]
                  || pattern1475 (x2, 
E_V2SFmode, 
E_V4SFmode) != 0)
                return -1;
              x8 = XEXP (x4, 1);
              operands[1] = x8;
              if (!register_operand (operands[1], E_V4SFmode))
                return -1;
              x10 = XEXP (x3, 1);
              operands[3] = x10;
              if (!nonimm_or_0_operand (operands[3], E_V4SFmode))
                return -1;
              x6 = XEXP (x3, 2);
              operands[4] = x6;
              if (!register_operand (operands[4], E_QImode)
                  || !(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 10003 "../../gcc/config/i386/sse.md"
(TARGET_SSE2))))
                return -1;
              return 5164; /* sse2_cvtsd2ss_mask_round */

            default:
              return -1;
            }

        default:
          return -1;
        }

    case SMAX:
      switch (pattern780 (x2))
        {
        case 0:
          if (!(
#line 486 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 378 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 3467 "../../gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 479 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16)))))
            return -1;
          return 3130; /* *avx512fp16_vmsmaxv8hf3_mask_round */

        case 1:
          if (!(
#line 486 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 378 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 3467 "../../gcc/config/i386/sse.md"
(TARGET_SSE))))
            return -1;
          return 3138; /* *sse_vmsmaxv4sf3_mask_round */

        case 2:
          if (!(
#line 486 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 378 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 3467 "../../gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 480 "../../gcc/config/i386/sse.md"
(TARGET_SSE2)))))
            return -1;
          return 3146; /* *sse2_vmsmaxv2df3_mask_round */

        default:
          return -1;
        }

    case SMIN:
      switch (pattern780 (x2))
        {
        case 0:
          if (!(
#line 486 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 378 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 3467 "../../gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 479 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16)))))
            return -1;
          return 3134; /* *avx512fp16_vmsminv8hf3_mask_round */

        case 1:
          if (!(
#line 486 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 378 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 3467 "../../gcc/config/i386/sse.md"
(TARGET_SSE))))
            return -1;
          return 3142; /* *sse_vmsminv4sf3_mask_round */

        case 2:
          if (!(
#line 486 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 378 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 3467 "../../gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 480 "../../gcc/config/i386/sse.md"
(TARGET_SSE2)))))
            return -1;
          return 3150; /* *sse2_vmsminv2df3_mask_round */

        default:
          return -1;
        }

    case UNSPEC:
      switch (XVECLEN (x5, 0))
        {
        case 2:
          x6 = XEXP (x3, 2);
          if (GET_CODE (x6) != CONST_INT)
            return -1;
          switch (XINT (x5, 1))
            {
            case 63:
              switch (pattern1125 (x2))
                {
                case 0:
                  if (!(
#line 486 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 378 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 3486 "../../gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 479 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16)))))
                    return -1;
                  return 3154; /* avx512fp16_ieee_vmmaxv8hf3_mask_round */

                case 1:
                  if (!(
#line 486 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 378 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 3486 "../../gcc/config/i386/sse.md"
(TARGET_SSE))))
                    return -1;
                  return 3162; /* sse_ieee_vmmaxv4sf3_mask_round */

                case 2:
                  if (!(
#line 486 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 378 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 3486 "../../gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 480 "../../gcc/config/i386/sse.md"
(TARGET_SSE2)))))
                    return -1;
                  return 3170; /* sse2_ieee_vmmaxv2df3_mask_round */

                default:
                  return -1;
                }

            case 62:
              switch (pattern1125 (x2))
                {
                case 0:
                  if (!(
#line 486 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 378 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 3486 "../../gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 479 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16)))))
                    return -1;
                  return 3158; /* avx512fp16_ieee_vmminv8hf3_mask_round */

                case 1:
                  if (!(
#line 486 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 378 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 3486 "../../gcc/config/i386/sse.md"
(TARGET_SSE))))
                    return -1;
                  return 3166; /* sse_ieee_vmminv4sf3_mask_round */

                case 2:
                  if (!(
#line 486 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 378 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 3486 "../../gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 480 "../../gcc/config/i386/sse.md"
(TARGET_SSE2)))))
                    return -1;
                  return 3174; /* sse2_ieee_vmminv2df3_mask_round */

                default:
                  return -1;
                }

            case 221:
              if (pattern1126 (x2) != 0
                  || !(
#line 460 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 412 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 7509 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16))))
                return -1;
              return 4410; /* avx512fp16_fmulcsh_v8hf_mask_round */

            case 222:
              if (pattern1126 (x2) != 0
                  || !(
#line 460 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 412 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 7509 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16))))
                return -1;
              return 4414; /* avx512fp16_fcmulcsh_v8hf_mask_round */

            case 58:
              if (XWINT (x6, 0) != 1L)
                return -1;
              x14 = XVECEXP (x5, 0, 0);
              operands[1] = x14;
              x15 = XVECEXP (x5, 0, 1);
              operands[2] = x15;
              x8 = XEXP (x4, 1);
              operands[3] = x8;
              x9 = XEXP (x4, 2);
              operands[4] = x9;
              if (!register_operand (operands[4], E_QImode))
                return -1;
              x11 = XVECEXP (x2, 0, 1);
              operands[5] = x11;
              if (!const_4_or_8_to_11_operand (operands[5], E_SImode))
                return -1;
              switch (pattern1641 (x2))
                {
                case 0:
                  if (!(
#line 444 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 378 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 13612 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 479 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16)))))
                    return -1;
                  return 5417; /* avx512f_vmscalefv8hf_mask_round */

                case 1:
                  if (!
#line 444 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F))
                    return -1;
                  return 5421; /* avx512f_vmscalefv4sf_mask_round */

                case 2:
                  if (!(
#line 444 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 378 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 13612 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 480 "../../gcc/config/i386/sse.md"
(TARGET_SSE2)))))
                    return -1;
                  return 5425; /* avx512f_vmscalefv2df_mask_round */

                default:
                  return -1;
                }

            case 165:
              if (XWINT (x6, 0) != 1L)
                return -1;
              x14 = XVECEXP (x5, 0, 0);
              operands[1] = x14;
              x15 = XVECEXP (x5, 0, 1);
              operands[2] = x15;
              x8 = XEXP (x4, 1);
              operands[3] = x8;
              x9 = XEXP (x4, 2);
              operands[4] = x9;
              if (!register_operand (operands[4], E_QImode))
                return -1;
              x11 = XVECEXP (x2, 0, 1);
              operands[5] = x11;
              if (!const48_operand (operands[5], E_SImode))
                return -1;
              switch (pattern1641 (x2))
                {
                case 0:
                  if (!(
#line 486 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 378 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 14045 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 479 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16)))))
                    return -1;
                  return 7067; /* avx512f_sgetexpv8hf_mask_round */

                case 1:
                  if (!
#line 486 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F))
                    return -1;
                  return 7071; /* avx512f_sgetexpv4sf_mask_round */

                case 2:
                  if (!(
#line 486 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 378 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 14045 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 480 "../../gcc/config/i386/sse.md"
(TARGET_SSE2)))))
                    return -1;
                  return 7075; /* avx512f_sgetexpv2df_mask_round */

                default:
                  return -1;
                }

            case 94:
              if (XWINT (x6, 0) != 1L)
                return -1;
              x14 = XVECEXP (x5, 0, 0);
              operands[2] = x14;
              x15 = XVECEXP (x5, 0, 1);
              operands[3] = x15;
              if (!const_0_to_255_operand (operands[3], E_SImode))
                return -1;
              x8 = XEXP (x4, 1);
              operands[4] = x8;
              x9 = XEXP (x4, 2);
              operands[5] = x9;
              if (!register_operand (operands[5], E_QImode))
                return -1;
              x10 = XEXP (x3, 1);
              operands[1] = x10;
              x11 = XVECEXP (x2, 0, 1);
              operands[6] = x11;
              if (!const48_operand (operands[6], E_SImode))
                return -1;
              switch (GET_MODE (operands[0]))
                {
                case E_V8HFmode:
                  if (pattern1729 (x2, 
E_V8HFmode) != 0
                      || !(
#line 486 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 378 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 14239 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 479 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16)))))
                    return -1;
                  return 7171; /* avx512f_rndscalev8hf_mask_round */

                case E_V4SFmode:
                  if (pattern1729 (x2, 
E_V4SFmode) != 0
                      || !
#line 486 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F))
                    return -1;
                  return 7175; /* avx512f_rndscalev4sf_mask_round */

                case E_V2DFmode:
                  if (pattern1729 (x2, 
E_V2DFmode) != 0
                      || !(
#line 486 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 378 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 14239 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 480 "../../gcc/config/i386/sse.md"
(TARGET_SSE2)))))
                    return -1;
                  return 7179; /* avx512f_rndscalev2df_mask_round */

                default:
                  return -1;
                }

            default:
              return -1;
            }

        case 3:
          x6 = XEXP (x3, 2);
          if (GET_CODE (x6) != CONST_INT)
            return -1;
          x14 = XVECEXP (x5, 0, 0);
          operands[1] = x14;
          x15 = XVECEXP (x5, 0, 1);
          operands[2] = x15;
          x16 = XVECEXP (x5, 0, 2);
          operands[3] = x16;
          switch (XINT (x5, 1))
            {
            case 192:
              switch (pattern1397 (x2))
                {
                case 0:
                  if (!(
#line 486 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 378 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 4041 "../../gcc/config/i386/sse.md"
(TARGET_AVX512DQ || (VALID_AVX512FP16_REG_MODE (V8HFmode))) && 
#line 479 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16)))))
                    return -1;
                  return 3222; /* reducesv8hf_mask_round */

                case 1:
                  if (!(
#line 486 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 378 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 4041 "../../gcc/config/i386/sse.md"
(TARGET_AVX512DQ || (VALID_AVX512FP16_REG_MODE (V4SFmode))))))
                    return -1;
                  return 3226; /* reducesv4sf_mask_round */

                case 2:
                  if (!(
#line 486 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 378 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 4041 "../../gcc/config/i386/sse.md"
(TARGET_AVX512DQ || (VALID_AVX512FP16_REG_MODE (V2DFmode))) && 
#line 480 "../../gcc/config/i386/sse.md"
(TARGET_SSE2)))))
                    return -1;
                  return 3230; /* reducesv2df_mask_round */

                default:
                  return -1;
                }

            case 217:
              switch (pattern1398 (x2))
                {
                case 0:
                  if (!(
#line 460 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 394 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 7474 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16))))
                    return -1;
                  return 4398; /* avx512fp16_fma_fmaddcsh_v8hf_maskz_round */

                case 1:
                  if (!(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 7494 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16)))
                    return -1;
                  return 4404; /* avx512fp16_fmaddcsh_v8hf_mask_round */

                default:
                  return -1;
                }

            case 219:
              switch (pattern1398 (x2))
                {
                case 0:
                  if (!(
#line 460 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 394 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 7474 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16))))
                    return -1;
                  return 4402; /* avx512fp16_fma_fcmaddcsh_v8hf_maskz_round */

                case 1:
                  if (!(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 7494 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16)))
                    return -1;
                  return 4406; /* avx512fp16_fcmaddcsh_v8hf_mask_round */

                default:
                  return -1;
                }

            case 194:
              if (XWINT (x6, 0) != 1L
                  || !const_0_to_15_operand (operands[3], E_SImode))
                return -1;
              x8 = XEXP (x4, 1);
              operands[4] = x8;
              x9 = XEXP (x4, 2);
              operands[5] = x9;
              if (!register_operand (operands[5], E_QImode))
                return -1;
              x11 = XVECEXP (x2, 0, 1);
              operands[6] = x11;
              if (!const48_operand (operands[6], E_SImode))
                return -1;
              x10 = XEXP (x3, 1);
              if (!rtx_equal_p (x10, operands[1]))
                return -1;
              switch (GET_MODE (operands[0]))
                {
                case E_V4SFmode:
                  if (pattern1395 (x2, 
E_V4SFmode) != 0
                      || !(
#line 486 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 378 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 29835 "../../gcc/config/i386/sse.md"
(TARGET_AVX512DQ))))
                    return -1;
                  return 9979; /* avx512dq_rangesv4sf_mask_round */

                case E_V2DFmode:
                  if (pattern1395 (x2, 
E_V2DFmode) != 0
                      || !(
#line 486 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 378 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 29835 "../../gcc/config/i386/sse.md"
(TARGET_AVX512DQ) && 
#line 475 "../../gcc/config/i386/sse.md"
(TARGET_SSE2)))))
                    return -1;
                  return 9983; /* avx512dq_rangesv2df_mask_round */

                default:
                  return -1;
                }

            case 166:
              if (XWINT (x6, 0) != 1L
                  || !const_0_to_15_operand (operands[3], E_SImode))
                return -1;
              switch (pattern1396 (x2))
                {
                case 0:
                  if (!(
#line 486 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 378 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 29903 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 479 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16)))))
                    return -1;
                  return 10041; /* avx512f_vgetmantv8hf_mask_round */

                case 1:
                  if (!
#line 486 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F))
                    return -1;
                  return 10045; /* avx512f_vgetmantv4sf_mask_round */

                case 2:
                  if (!(
#line 486 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 378 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 29903 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 480 "../../gcc/config/i386/sse.md"
(TARGET_SSE2)))))
                    return -1;
                  return 10049; /* avx512f_vgetmantv2df_mask_round */

                default:
                  return -1;
                }

            case 279:
              switch (pattern1397 (x2))
                {
                case 0:
                  if (!(
#line 486 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 378 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 32664 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256) && 
#line 479 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16)))))
                    return -1;
                  return 10974; /* avx10_2_minmaxsv8hf_mask_round */

                case 1:
                  if (!(
#line 486 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 378 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 32664 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))))
                    return -1;
                  return 10978; /* avx10_2_minmaxsv4sf_mask_round */

                case 2:
                  if (!(
#line 486 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 378 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 32664 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256) && 
#line 480 "../../gcc/config/i386/sse.md"
(TARGET_SSE2)))))
                    return -1;
                  return 10982; /* avx10_2_minmaxsv2df_mask_round */

                default:
                  return -1;
                }

            default:
              return -1;
            }

        case 4:
          if (XINT (x5, 1) != 163)
            return -1;
          x14 = XVECEXP (x5, 0, 0);
          operands[1] = x14;
          x15 = XVECEXP (x5, 0, 1);
          operands[2] = x15;
          x16 = XVECEXP (x5, 0, 2);
          operands[3] = x16;
          x17 = XVECEXP (x5, 0, 3);
          operands[4] = x17;
          if (!const_0_to_255_operand (operands[4], E_SImode))
            return -1;
          x11 = XVECEXP (x2, 0, 1);
          if (!const48_operand (x11, E_SImode))
            return -1;
          x8 = XEXP (x4, 1);
          switch (GET_CODE (x8))
            {
            case CONST_INT:
            case CONST_DOUBLE:
            case CONST_VECTOR:
              operands[5] = x8;
              x6 = XEXP (x3, 2);
              if (x6 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
                return -1;
              x9 = XEXP (x4, 2);
              operands[6] = x9;
              if (!register_operand (operands[6], E_QImode))
                return -1;
              operands[7] = x11;
              x10 = XEXP (x3, 1);
              if (!rtx_equal_p (x10, operands[2]))
                return -1;
              switch (GET_MODE (operands[0]))
                {
                case E_V4SFmode:
                  if (pattern1762 (x2, 
E_V4SFmode, 
E_V4SImode) != 0
                      || !
#line 286 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F))
                    return -1;
                  return 7129; /* avx512f_sfixupimmv4sf_maskz_1_round */

                case E_V2DFmode:
                  if (pattern1762 (x2, 
E_V2DFmode, 
E_V2DImode) != 0
                      || !(
#line 286 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 154 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 14194 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 475 "../../gcc/config/i386/sse.md"
(TARGET_SSE2)))))
                    return -1;
                  return 7133; /* avx512f_sfixupimmv2df_maskz_1_round */

                default:
                  return -1;
                }

            case REG:
            case SUBREG:
              if (!rtx_equal_p (x8, operands[2]))
                return -1;
              x9 = XEXP (x4, 2);
              if (x9 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
                return -1;
              x6 = XEXP (x3, 2);
              operands[5] = x6;
              if (!register_operand (operands[5], E_QImode))
                return -1;
              operands[6] = x11;
              x10 = XEXP (x3, 1);
              if (!rtx_equal_p (x10, operands[1]))
                return -1;
              switch (GET_MODE (operands[0]))
                {
                case E_V4SFmode:
                  if (pattern1763 (x2, 
E_V4SImode, 
E_V4SFmode) != 0
                      || !
#line 286 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F))
                    return -1;
                  return 7135; /* avx512f_sfixupimmv4sf_mask_round */

                case E_V2DFmode:
                  if (pattern1763 (x2, 
E_V2DImode, 
E_V2DFmode) != 0
                      || !(
#line 286 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 14213 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 475 "../../gcc/config/i386/sse.md"
(TARGET_SSE2))))
                    return -1;
                  return 7137; /* avx512f_sfixupimmv2df_mask_round */

                default:
                  return -1;
                }

            default:
              return -1;
            }

        default:
          return -1;
        }

    case FMA:
      return recog_217 (x1, insn, pnum_clobbers);

    case FLOAT_EXTEND:
      if (GET_MODE (x5) != E_V2DFmode)
        return -1;
      x7 = XEXP (x5, 0);
      if (pattern907 (x7, 
2, 
E_V2SFmode) != 0)
        return -1;
      x18 = XEXP (x7, 1);
      x19 = XVECEXP (x18, 0, 1);
      if (x19 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
        return -1;
      x9 = XEXP (x4, 2);
      if (x9 != const_int_rtx[MAX_SAVED_CONST_INT + 1]
          || pattern1478 (x2, 
E_V2DFmode) != 0)
        return -1;
      x12 = XEXP (x7, 0);
      operands[2] = x12;
      if (!register_operand (operands[2], E_V4SFmode))
        return -1;
      x8 = XEXP (x4, 1);
      operands[1] = x8;
      if (!register_operand (operands[1], E_V2DFmode))
        return -1;
      x10 = XEXP (x3, 1);
      operands[3] = x10;
      if (!nonimm_or_0_operand (operands[3], E_V2DFmode))
        return -1;
      x6 = XEXP (x3, 2);
      operands[4] = x6;
      if (!register_operand (operands[4], E_QImode))
        return -1;
      x11 = XVECEXP (x2, 0, 1);
      operands[5] = x11;
      if (!const48_operand (operands[5], E_SImode)
          || !(
#line 286 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 10047 "../../gcc/config/i386/sse.md"
(TARGET_SSE2))))
        return -1;
      return 5169; /* sse2_cvtss2sd_mask_round */

    default:
      return -1;
    }
}

 int
recog_232 (rtx x1 ATTRIBUTE_UNUSED,
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
  x4 = XVECEXP (x3, 0, 0);
  switch (GET_CODE (x4))
    {
    case PLUS:
      switch (pattern489 (x3))
        {
        case 0:
          if (!(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 2661 "../../gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (PLUS, V32HFmode, operands)
   && 1 && ((V32HFmode == V16SFmode
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
#line 390 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_EVEX512))))
            return -1;
          return 2678; /* *addv32hf3_round */

        case 1:
          if (!(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 2661 "../../gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (PLUS, V16HFmode, operands)
   && 1 && ((V16HFmode == V16SFmode
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
#line 391 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL))))
            return -1;
          return 2686; /* *addv16hf3_round */

        case 2:
          if (!(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 2661 "../../gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (PLUS, V8HFmode, operands)
   && 1 && ((V8HFmode == V16SFmode
							       || V8HFmode == V8DFmode
							       || V8HFmode == V8DImode
							       || V8HFmode == V16SImode
							       || V8HFmode == V32HImode
							       || V8HFmode == V32HFmode)
							       || (TARGET_AVX10_2_256
								   && (V8HFmode == V8SFmode
								       || V8HFmode == V4DFmode
								       || V8HFmode == V4DImode
								       || V8HFmode == V8SImode
								       || V8HFmode == V16HImode
								       || V8HFmode == V16HFmode)))) && 
#line 392 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL))))
            return -1;
          return 2694; /* *addv8hf3_round */

        case 3:
          if (!(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 2661 "../../gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (PLUS, V16SFmode, operands)
   && 1 && ((V16SFmode == V16SFmode
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
#line 393 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512))))
            return -1;
          return 2702; /* *addv16sf3_round */

        case 4:
          if (!(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 2661 "../../gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (PLUS, V8SFmode, operands)
   && 1 && ((V8SFmode == V16SFmode
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
#line 393 "../../gcc/config/i386/sse.md"
(TARGET_AVX))))
            return -1;
          return 2710; /* *addv8sf3_round */

        case 5:
          if (!(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 2661 "../../gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (PLUS, V4SFmode, operands)
   && 1 && ((V4SFmode == V16SFmode
							       || V4SFmode == V8DFmode
							       || V4SFmode == V8DImode
							       || V4SFmode == V16SImode
							       || V4SFmode == V32HImode
							       || V4SFmode == V32HFmode)
							       || (TARGET_AVX10_2_256
								   && (V4SFmode == V8SFmode
								       || V4SFmode == V4DFmode
								       || V4SFmode == V4DImode
								       || V4SFmode == V8SImode
								       || V4SFmode == V16HImode
								       || V4SFmode == V16HFmode))))))
            return -1;
          return 2718; /* *addv4sf3_round */

        case 6:
          if (!(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 2661 "../../gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (PLUS, V8DFmode, operands)
   && 1 && ((V8DFmode == V16SFmode
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
#line 394 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512))))
            return -1;
          return 2726; /* *addv8df3_round */

        case 7:
          if (!(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 2661 "../../gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (PLUS, V4DFmode, operands)
   && 1 && ((V4DFmode == V16SFmode
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
#line 394 "../../gcc/config/i386/sse.md"
(TARGET_AVX))))
            return -1;
          return 2734; /* *addv4df3_round */

        case 8:
          if (!(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 2661 "../../gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (PLUS, V2DFmode, operands)
   && 1 && ((V2DFmode == V16SFmode
							       || V2DFmode == V8DFmode
							       || V2DFmode == V8DImode
							       || V2DFmode == V16SImode
							       || V2DFmode == V32HImode
							       || V2DFmode == V32HFmode)
							       || (TARGET_AVX10_2_256
								   && (V2DFmode == V8SFmode
								       || V2DFmode == V4DFmode
								       || V2DFmode == V4DImode
								       || V2DFmode == V8SImode
								       || V2DFmode == V16HImode
								       || V2DFmode == V16HFmode)))) && 
#line 395 "../../gcc/config/i386/sse.md"
(TARGET_SSE2))))
            return -1;
          return 2742; /* *addv2df3_round */

        default:
          return -1;
        }

    case VEC_MERGE:
      return recog_228 (x1, insn, pnum_clobbers);

    case MINUS:
      switch (pattern489 (x3))
        {
        case 0:
          if (!(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 2661 "../../gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (MINUS, V32HFmode, operands)
   && 1 && ((V32HFmode == V16SFmode
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
#line 390 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_EVEX512))))
            return -1;
          return 2682; /* *subv32hf3_round */

        case 1:
          if (!(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 2661 "../../gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (MINUS, V16HFmode, operands)
   && 1 && ((V16HFmode == V16SFmode
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
#line 391 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL))))
            return -1;
          return 2690; /* *subv16hf3_round */

        case 2:
          if (!(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 2661 "../../gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (MINUS, V8HFmode, operands)
   && 1 && ((V8HFmode == V16SFmode
							       || V8HFmode == V8DFmode
							       || V8HFmode == V8DImode
							       || V8HFmode == V16SImode
							       || V8HFmode == V32HImode
							       || V8HFmode == V32HFmode)
							       || (TARGET_AVX10_2_256
								   && (V8HFmode == V8SFmode
								       || V8HFmode == V4DFmode
								       || V8HFmode == V4DImode
								       || V8HFmode == V8SImode
								       || V8HFmode == V16HImode
								       || V8HFmode == V16HFmode)))) && 
#line 392 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL))))
            return -1;
          return 2698; /* *subv8hf3_round */

        case 3:
          if (!(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 2661 "../../gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (MINUS, V16SFmode, operands)
   && 1 && ((V16SFmode == V16SFmode
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
#line 393 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512))))
            return -1;
          return 2706; /* *subv16sf3_round */

        case 4:
          if (!(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 2661 "../../gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (MINUS, V8SFmode, operands)
   && 1 && ((V8SFmode == V16SFmode
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
#line 393 "../../gcc/config/i386/sse.md"
(TARGET_AVX))))
            return -1;
          return 2714; /* *subv8sf3_round */

        case 5:
          if (!(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 2661 "../../gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (MINUS, V4SFmode, operands)
   && 1 && ((V4SFmode == V16SFmode
							       || V4SFmode == V8DFmode
							       || V4SFmode == V8DImode
							       || V4SFmode == V16SImode
							       || V4SFmode == V32HImode
							       || V4SFmode == V32HFmode)
							       || (TARGET_AVX10_2_256
								   && (V4SFmode == V8SFmode
								       || V4SFmode == V4DFmode
								       || V4SFmode == V4DImode
								       || V4SFmode == V8SImode
								       || V4SFmode == V16HImode
								       || V4SFmode == V16HFmode))))))
            return -1;
          return 2722; /* *subv4sf3_round */

        case 6:
          if (!(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 2661 "../../gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (MINUS, V8DFmode, operands)
   && 1 && ((V8DFmode == V16SFmode
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
#line 394 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512))))
            return -1;
          return 2730; /* *subv8df3_round */

        case 7:
          if (!(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 2661 "../../gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (MINUS, V4DFmode, operands)
   && 1 && ((V4DFmode == V16SFmode
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
#line 394 "../../gcc/config/i386/sse.md"
(TARGET_AVX))))
            return -1;
          return 2738; /* *subv4df3_round */

        case 8:
          if (!(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 2661 "../../gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (MINUS, V2DFmode, operands)
   && 1 && ((V2DFmode == V16SFmode
							       || V2DFmode == V8DFmode
							       || V2DFmode == V8DImode
							       || V2DFmode == V16SImode
							       || V2DFmode == V32HImode
							       || V2DFmode == V32HFmode)
							       || (TARGET_AVX10_2_256
								   && (V2DFmode == V8SFmode
								       || V2DFmode == V4DFmode
								       || V2DFmode == V4DImode
								       || V2DFmode == V8SImode
								       || V2DFmode == V16HImode
								       || V2DFmode == V16HFmode)))) && 
#line 395 "../../gcc/config/i386/sse.md"
(TARGET_SSE2))))
            return -1;
          return 2746; /* *subv2df3_round */

        default:
          return -1;
        }

    case MULT:
      switch (pattern489 (x3))
        {
        case 0:
          if (!(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 2750 "../../gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (MULT, V32HFmode, operands)
   && 1 && ((V32HFmode == V16SFmode
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
#line 390 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_EVEX512))))
            return -1;
          return 2780; /* *mulv32hf3_round */

        case 1:
          if (!(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 2750 "../../gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (MULT, V16HFmode, operands)
   && 1 && ((V16HFmode == V16SFmode
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
#line 391 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL))))
            return -1;
          return 2784; /* *mulv16hf3_round */

        case 2:
          if (!(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 2750 "../../gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (MULT, V8HFmode, operands)
   && 1 && ((V8HFmode == V16SFmode
							       || V8HFmode == V8DFmode
							       || V8HFmode == V8DImode
							       || V8HFmode == V16SImode
							       || V8HFmode == V32HImode
							       || V8HFmode == V32HFmode)
							       || (TARGET_AVX10_2_256
								   && (V8HFmode == V8SFmode
								       || V8HFmode == V4DFmode
								       || V8HFmode == V4DImode
								       || V8HFmode == V8SImode
								       || V8HFmode == V16HImode
								       || V8HFmode == V16HFmode)))) && 
#line 392 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL))))
            return -1;
          return 2788; /* *mulv8hf3_round */

        case 3:
          if (!(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 2750 "../../gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (MULT, V16SFmode, operands)
   && 1 && ((V16SFmode == V16SFmode
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
#line 393 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512))))
            return -1;
          return 2792; /* *mulv16sf3_round */

        case 4:
          if (!(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 2750 "../../gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (MULT, V8SFmode, operands)
   && 1 && ((V8SFmode == V16SFmode
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
#line 393 "../../gcc/config/i386/sse.md"
(TARGET_AVX))))
            return -1;
          return 2796; /* *mulv8sf3_round */

        case 5:
          if (!(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 2750 "../../gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (MULT, V4SFmode, operands)
   && 1 && ((V4SFmode == V16SFmode
							       || V4SFmode == V8DFmode
							       || V4SFmode == V8DImode
							       || V4SFmode == V16SImode
							       || V4SFmode == V32HImode
							       || V4SFmode == V32HFmode)
							       || (TARGET_AVX10_2_256
								   && (V4SFmode == V8SFmode
								       || V4SFmode == V4DFmode
								       || V4SFmode == V4DImode
								       || V4SFmode == V8SImode
								       || V4SFmode == V16HImode
								       || V4SFmode == V16HFmode))))))
            return -1;
          return 2800; /* *mulv4sf3_round */

        case 6:
          if (!(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 2750 "../../gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (MULT, V8DFmode, operands)
   && 1 && ((V8DFmode == V16SFmode
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
#line 394 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512))))
            return -1;
          return 2804; /* *mulv8df3_round */

        case 7:
          if (!(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 2750 "../../gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (MULT, V4DFmode, operands)
   && 1 && ((V4DFmode == V16SFmode
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
#line 394 "../../gcc/config/i386/sse.md"
(TARGET_AVX))))
            return -1;
          return 2808; /* *mulv4df3_round */

        case 8:
          if (!(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 2750 "../../gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (MULT, V2DFmode, operands)
   && 1 && ((V2DFmode == V16SFmode
							       || V2DFmode == V8DFmode
							       || V2DFmode == V8DImode
							       || V2DFmode == V16SImode
							       || V2DFmode == V32HImode
							       || V2DFmode == V32HFmode)
							       || (TARGET_AVX10_2_256
								   && (V2DFmode == V8SFmode
								       || V2DFmode == V4DFmode
								       || V2DFmode == V4DImode
								       || V2DFmode == V8SImode
								       || V2DFmode == V16HImode
								       || V2DFmode == V16HFmode)))) && 
#line 395 "../../gcc/config/i386/sse.md"
(TARGET_SSE2))))
            return -1;
          return 2812; /* *mulv2df3_round */

        default:
          return -1;
        }

    case DIV:
      x5 = XEXP (x4, 0);
      operands[1] = x5;
      x6 = XEXP (x4, 1);
      operands[2] = x6;
      x7 = XVECEXP (x3, 0, 1);
      operands[3] = x7;
      if (!const_4_or_8_to_11_operand (operands[3], E_SImode))
        return -1;
      switch (GET_MODE (operands[0]))
        {
        case E_V32HFmode:
          if (pattern488 (x3, 
E_V32HFmode) != 0
              || !(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 2899 "../../gcc/config/i386/sse.md"
(TARGET_SSE && 1 && ((V32HFmode == V16SFmode
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
#line 390 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_EVEX512))))
            return -1;
          return 2846; /* avx512fp16_divv32hf3_round */

        case E_V16HFmode:
          if (pattern488 (x3, 
E_V16HFmode) != 0
              || !(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 2899 "../../gcc/config/i386/sse.md"
(TARGET_SSE && 1 && ((V16HFmode == V16SFmode
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
#line 391 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL))))
            return -1;
          return 2850; /* avx512fp16_divv16hf3_round */

        case E_V16SFmode:
          if (pattern488 (x3, 
E_V16SFmode) != 0
              || !(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 2899 "../../gcc/config/i386/sse.md"
(TARGET_SSE && 1 && ((V16SFmode == V16SFmode
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
#line 393 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512))))
            return -1;
          return 2856; /* avx512f_divv16sf3_round */

        case E_V8SFmode:
          if (pattern488 (x3, 
E_V8SFmode) != 0
              || !(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 2899 "../../gcc/config/i386/sse.md"
(TARGET_SSE && 1 && ((V8SFmode == V16SFmode
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
#line 393 "../../gcc/config/i386/sse.md"
(TARGET_AVX))))
            return -1;
          return 2860; /* avx_divv8sf3_round */

        case E_V8DFmode:
          if (pattern488 (x3, 
E_V8DFmode) != 0
              || !(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 2899 "../../gcc/config/i386/sse.md"
(TARGET_SSE && 1 && ((V8DFmode == V16SFmode
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
#line 394 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512))))
            return -1;
          return 2866; /* avx512f_divv8df3_round */

        case E_V4DFmode:
          if (pattern488 (x3, 
E_V4DFmode) != 0
              || !(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 2899 "../../gcc/config/i386/sse.md"
(TARGET_SSE && 1 && ((V4DFmode == V16SFmode
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
#line 394 "../../gcc/config/i386/sse.md"
(TARGET_AVX))))
            return -1;
          return 2870; /* avx_divv4df3_round */

        default:
          return -1;
        }

    case SQRT:
      x5 = XEXP (x4, 0);
      operands[1] = x5;
      x7 = XVECEXP (x3, 0, 1);
      operands[2] = x7;
      if (!const_4_or_8_to_11_operand (operands[2], E_SImode))
        return -1;
      switch (GET_MODE (operands[0]))
        {
        case E_V32HFmode:
          if (pattern1019 (x3, 
E_V32HFmode) != 0
              || !(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 3065 "../../gcc/config/i386/sse.md"
(TARGET_SSE && 1 && ((V32HFmode == V16SFmode
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
#line 390 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_EVEX512))))
            return -1;
          return 2905; /* avx512fp16_sqrtv32hf2_round */

        case E_V16HFmode:
          if (pattern1019 (x3, 
E_V16HFmode) != 0
              || !(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 3065 "../../gcc/config/i386/sse.md"
(TARGET_SSE && 1 && ((V16HFmode == V16SFmode
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
#line 391 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL))))
            return -1;
          return 2909; /* avx512fp16_sqrtv16hf2_round */

        case E_V16SFmode:
          if (pattern1019 (x3, 
E_V16SFmode) != 0
              || !(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 3065 "../../gcc/config/i386/sse.md"
(TARGET_SSE && 1 && ((V16SFmode == V16SFmode
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
#line 393 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512))))
            return -1;
          return 2915; /* avx512f_sqrtv16sf2_round */

        case E_V8SFmode:
          if (pattern1019 (x3, 
E_V8SFmode) != 0
              || !(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 3065 "../../gcc/config/i386/sse.md"
(TARGET_SSE && 1 && ((V8SFmode == V16SFmode
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
#line 393 "../../gcc/config/i386/sse.md"
(TARGET_AVX))))
            return -1;
          return 2919; /* avx_sqrtv8sf2_round */

        case E_V8DFmode:
          if (pattern1019 (x3, 
E_V8DFmode) != 0
              || !(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 3065 "../../gcc/config/i386/sse.md"
(TARGET_SSE && 1 && ((V8DFmode == V16SFmode
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
#line 394 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512))))
            return -1;
          return 2925; /* avx512f_sqrtv8df2_round */

        case E_V4DFmode:
          if (pattern1019 (x3, 
E_V4DFmode) != 0
              || !(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 3065 "../../gcc/config/i386/sse.md"
(TARGET_SSE && 1 && ((V4DFmode == V16SFmode
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
#line 394 "../../gcc/config/i386/sse.md"
(TARGET_AVX))))
            return -1;
          return 2929; /* avx_sqrtv4df2_round */

        default:
          return -1;
        }

    case SMAX:
      switch (pattern490 (x3))
        {
        case 0:
          if (!(
#line 286 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 3306 "../../gcc/config/i386/sse.md"
(TARGET_SSE
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))
   && 1
   && ((V32HFmode == V16SFmode
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
#line 390 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_EVEX512))))
            return -1;
          return 2989; /* *smaxv32hf3_round */

        case 1:
          if (!(
#line 286 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 3306 "../../gcc/config/i386/sse.md"
(TARGET_SSE
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))
   && 1
   && ((V16HFmode == V16SFmode
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
#line 391 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL))))
            return -1;
          return 2997; /* *smaxv16hf3_round */

        case 2:
          if (!(
#line 286 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 3306 "../../gcc/config/i386/sse.md"
(TARGET_SSE
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))
   && 1
   && ((V16SFmode == V16SFmode
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
#line 393 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512))))
            return -1;
          return 3009; /* *smaxv16sf3_round */

        case 3:
          if (!(
#line 286 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 3306 "../../gcc/config/i386/sse.md"
(TARGET_SSE
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))
   && 1
   && ((V8SFmode == V16SFmode
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
#line 393 "../../gcc/config/i386/sse.md"
(TARGET_AVX))))
            return -1;
          return 3017; /* *smaxv8sf3_round */

        case 4:
          if (!(
#line 286 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 3306 "../../gcc/config/i386/sse.md"
(TARGET_SSE
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))
   && 1
   && ((V8DFmode == V16SFmode
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
#line 394 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512))))
            return -1;
          return 3029; /* *smaxv8df3_round */

        case 5:
          if (!(
#line 286 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 3306 "../../gcc/config/i386/sse.md"
(TARGET_SSE
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))
   && 1
   && ((V4DFmode == V16SFmode
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
#line 394 "../../gcc/config/i386/sse.md"
(TARGET_AVX))))
            return -1;
          return 3037; /* *smaxv4df3_round */

        default:
          return -1;
        }

    case SMIN:
      switch (pattern490 (x3))
        {
        case 0:
          if (!(
#line 286 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 3306 "../../gcc/config/i386/sse.md"
(TARGET_SSE
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))
   && 1
   && ((V32HFmode == V16SFmode
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
#line 390 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_EVEX512))))
            return -1;
          return 2993; /* *sminv32hf3_round */

        case 1:
          if (!(
#line 286 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 3306 "../../gcc/config/i386/sse.md"
(TARGET_SSE
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))
   && 1
   && ((V16HFmode == V16SFmode
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
#line 391 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL))))
            return -1;
          return 3001; /* *sminv16hf3_round */

        case 2:
          if (!(
#line 286 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 3306 "../../gcc/config/i386/sse.md"
(TARGET_SSE
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))
   && 1
   && ((V16SFmode == V16SFmode
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
#line 393 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512))))
            return -1;
          return 3013; /* *sminv16sf3_round */

        case 3:
          if (!(
#line 286 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 3306 "../../gcc/config/i386/sse.md"
(TARGET_SSE
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))
   && 1
   && ((V8SFmode == V16SFmode
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
#line 393 "../../gcc/config/i386/sse.md"
(TARGET_AVX))))
            return -1;
          return 3021; /* *sminv8sf3_round */

        case 4:
          if (!(
#line 286 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 3306 "../../gcc/config/i386/sse.md"
(TARGET_SSE
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))
   && 1
   && ((V8DFmode == V16SFmode
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
#line 394 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512))))
            return -1;
          return 3033; /* *sminv8df3_round */

        case 5:
          if (!(
#line 286 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 3306 "../../gcc/config/i386/sse.md"
(TARGET_SSE
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))
   && 1
   && ((V4DFmode == V16SFmode
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
#line 394 "../../gcc/config/i386/sse.md"
(TARGET_AVX))))
            return -1;
          return 3041; /* *sminv4df3_round */

        default:
          return -1;
        }

    case UNSPEC:
      return recog_229 (x1, insn, pnum_clobbers);

    case FMA:
      return recog_230 (x1, insn, pnum_clobbers);

    case FLOAT:
      x5 = XEXP (x4, 0);
      operands[1] = x5;
      x7 = XVECEXP (x3, 0, 1);
      operands[2] = x7;
      if (!const_4_or_8_to_11_operand (operands[2], E_SImode))
        return -1;
      switch (GET_MODE (operands[0]))
        {
        case E_V16HFmode:
          switch (pattern1022 (x3))
            {
            case 0:
              if (!(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 7633 "../../gcc/config/i386/sse.md"
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
(TARGET_AVX512VL))))
                return -1;
              return 4480; /* avx512fp16_vcvtw2ph_v16hi_round */

            case 1:
              if (!(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 7633 "../../gcc/config/i386/sse.md"
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
(TARGET_EVEX512))))
                return -1;
              return 4504; /* avx512fp16_vcvtdq2ph_v16si_round */

            default:
              return -1;
            }

        case E_V32HFmode:
          if (pattern491 (x3, 
E_V32HImode, 
E_V32HFmode) != 0
              || !(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 7633 "../../gcc/config/i386/sse.md"
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
(TARGET_EVEX512))))
            return -1;
          return 4488; /* avx512fp16_vcvtw2ph_v32hi_round */

        case E_V8HFmode:
          switch (pattern1023 (x3))
            {
            case 0:
              if (!(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 7633 "../../gcc/config/i386/sse.md"
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
(TARGET_AVX512VL))))
                return -1;
              return 4496; /* avx512fp16_vcvtdq2ph_v8si_round */

            case 1:
              if (!(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 7633 "../../gcc/config/i386/sse.md"
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
(TARGET_EVEX512))))
                return -1;
              return 4512; /* avx512fp16_vcvtqq2ph_v8di_round */

            default:
              return -1;
            }

        case E_V16SFmode:
          if (pattern491 (x3, 
E_V16SImode, 
E_V16SFmode) != 0
              || !(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 8637 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && 1 && ((V16SFmode == V16SFmode
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
#line 434 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512))))
            return -1;
          return 4809; /* floatv16siv16sf2_round */

        case E_V8SFmode:
          switch (pattern1024 (x3))
            {
            case 0:
              if (!register_operand (operands[1], E_V8SImode)
                  || !(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 8637 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && 1 && ((V8SFmode == V16SFmode
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
#line 434 "../../gcc/config/i386/sse.md"
(TARGET_AVX))))
                return -1;
              return 4813; /* floatv8siv8sf2_round */

            case 1:
              if (!nonimmediate_operand (operands[1], E_V8DImode)
                  || !(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 9185 "../../gcc/config/i386/sse.md"
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
(TARGET_EVEX512))))
                return -1;
              return 4967; /* floatv8div8sf2_round */

            default:
              return -1;
            }

        case E_V8DFmode:
          if (pattern1025 (x3, 
E_V8DFmode, 
E_V8DImode) != 0
              || !(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 9171 "../../gcc/config/i386/sse.md"
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
(TARGET_EVEX512))))
            return -1;
          return 4947; /* floatv8div8df2_round */

        case E_V4DFmode:
          if (pattern1025 (x3, 
E_V4DFmode, 
E_V4DImode) != 0
              || !(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 9171 "../../gcc/config/i386/sse.md"
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
(TARGET_AVX512VL))))
            return -1;
          return 4955; /* floatv4div4df2_round */

        case E_V4SFmode:
          if (pattern1025 (x3, 
E_V4SFmode, 
E_V4DImode) != 0
              || !(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 9185 "../../gcc/config/i386/sse.md"
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
(TARGET_AVX512VL))))
            return -1;
          return 4975; /* floatv4div4sf2_round */

        default:
          return -1;
        }

    case UNSIGNED_FLOAT:
      x5 = XEXP (x4, 0);
      operands[1] = x5;
      x7 = XVECEXP (x3, 0, 1);
      operands[2] = x7;
      if (!const_4_or_8_to_11_operand (operands[2], E_SImode))
        return -1;
      switch (GET_MODE (operands[0]))
        {
        case E_V16HFmode:
          switch (pattern1022 (x3))
            {
            case 0:
              if (!(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 7633 "../../gcc/config/i386/sse.md"
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
(TARGET_AVX512VL))))
                return -1;
              return 4484; /* avx512fp16_vcvtuw2ph_v16hi_round */

            case 1:
              if (!(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 7633 "../../gcc/config/i386/sse.md"
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
(TARGET_EVEX512))))
                return -1;
              return 4508; /* avx512fp16_vcvtudq2ph_v16si_round */

            default:
              return -1;
            }

        case E_V32HFmode:
          if (pattern491 (x3, 
E_V32HImode, 
E_V32HFmode) != 0
              || !(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 7633 "../../gcc/config/i386/sse.md"
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
(TARGET_EVEX512))))
            return -1;
          return 4492; /* avx512fp16_vcvtuw2ph_v32hi_round */

        case E_V8HFmode:
          switch (pattern1023 (x3))
            {
            case 0:
              if (!(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 7633 "../../gcc/config/i386/sse.md"
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
(TARGET_AVX512VL))))
                return -1;
              return 4500; /* avx512fp16_vcvtudq2ph_v8si_round */

            case 1:
              if (!(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 7633 "../../gcc/config/i386/sse.md"
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
(TARGET_EVEX512))))
                return -1;
              return 4516; /* avx512fp16_vcvtuqq2ph_v8di_round */

            default:
              return -1;
            }

        case E_V16SFmode:
          if (pattern1025 (x3, 
E_V16SFmode, 
E_V16SImode) != 0
              || !(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 8650 "../../gcc/config/i386/sse.md"
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
#line 540 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512))))
            return -1;
          return 4819; /* *floatunsv16siv16sf2_round */

        case E_V8SFmode:
          switch (pattern1024 (x3))
            {
            case 0:
              if (!nonimmediate_operand (operands[1], E_V8SImode)
                  || !(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 8650 "../../gcc/config/i386/sse.md"
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
#line 540 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
                return -1;
              return 4823; /* *floatunsv8siv8sf2_round */

            case 1:
              if (!nonimmediate_operand (operands[1], E_V8DImode)
                  || !(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 9185 "../../gcc/config/i386/sse.md"
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
(TARGET_EVEX512))))
                return -1;
              return 4971; /* floatunsv8div8sf2_round */

            default:
              return -1;
            }

        case E_V8DFmode:
          if (pattern1025 (x3, 
E_V8DFmode, 
E_V8DImode) != 0
              || !(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 9171 "../../gcc/config/i386/sse.md"
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
(TARGET_EVEX512))))
            return -1;
          return 4951; /* floatunsv8div8df2_round */

        case E_V4DFmode:
          if (pattern1025 (x3, 
E_V4DFmode, 
E_V4DImode) != 0
              || !(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 9171 "../../gcc/config/i386/sse.md"
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
(TARGET_AVX512VL))))
            return -1;
          return 4959; /* floatunsv4div4df2_round */

        case E_V4SFmode:
          if (pattern1025 (x3, 
E_V4SFmode, 
E_V4DImode) != 0
              || !(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 9185 "../../gcc/config/i386/sse.md"
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
(TARGET_AVX512VL))))
            return -1;
          return 4979; /* floatunsv4div4sf2_round */

        default:
          return -1;
        }

    case VEC_CONCAT:
      return recog_231 (x1, insn, pnum_clobbers);

    case FIX:
      switch (pattern493 (x3))
        {
        case 0:
          if (!(
#line 286 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 7865 "../../gcc/config/i386/sse.md"
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
(TARGET_AVX512VL))))
            return -1;
          return 4608; /* avx512fp16_fix_truncv16hi2_round */

        case 1:
          if (!(
#line 286 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 7865 "../../gcc/config/i386/sse.md"
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
(TARGET_EVEX512))))
            return -1;
          return 4616; /* avx512fp16_fix_truncv32hi2_round */

        case 2:
          if (!(
#line 286 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 7865 "../../gcc/config/i386/sse.md"
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
(TARGET_AVX512VL))))
            return -1;
          return 4624; /* avx512fp16_fix_truncv8si2_round */

        case 3:
          if (!(
#line 286 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 9568 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 5030; /* fix_truncv8dfv8si2_round */

        case 4:
          if (!(
#line 286 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 7865 "../../gcc/config/i386/sse.md"
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
(TARGET_EVEX512))))
            return -1;
          return 4632; /* avx512fp16_fix_truncv16si2_round */

        case 5:
          if (!(
#line 286 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 8773 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 4877; /* fix_truncv16sfv16si2_round */

        case 6:
          if (!(
#line 286 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 7865 "../../gcc/config/i386/sse.md"
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
(TARGET_EVEX512))))
            return -1;
          return 4640; /* avx512fp16_fix_truncv8di2_round */

        case 7:
          if (!(
#line 286 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 9699 "../../gcc/config/i386/sse.md"
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
(TARGET_EVEX512))))
            return -1;
          return 5075; /* fix_truncv8dfv8di2_round */

        case 8:
          if (!(
#line 286 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 9699 "../../gcc/config/i386/sse.md"
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
(TARGET_AVX512VL))))
            return -1;
          return 5083; /* fix_truncv4dfv4di2_round */

        default:
          return -1;
        }

    case UNSIGNED_FIX:
      switch (pattern493 (x3))
        {
        case 0:
          if (!(
#line 286 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 7865 "../../gcc/config/i386/sse.md"
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
(TARGET_AVX512VL))))
            return -1;
          return 4612; /* avx512fp16_fixuns_truncv16hi2_round */

        case 1:
          if (!(
#line 286 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 7865 "../../gcc/config/i386/sse.md"
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
(TARGET_EVEX512))))
            return -1;
          return 4620; /* avx512fp16_fixuns_truncv32hi2_round */

        case 2:
          if (!(
#line 286 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 7865 "../../gcc/config/i386/sse.md"
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
(TARGET_AVX512VL))))
            return -1;
          return 4628; /* avx512fp16_fixuns_truncv8si2_round */

        case 3:
          if (!(
#line 286 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 9568 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 5034; /* fixuns_truncv8dfv8si2_round */

        case 4:
          if (!(
#line 286 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 7865 "../../gcc/config/i386/sse.md"
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
(TARGET_EVEX512))))
            return -1;
          return 4636; /* avx512fp16_fixuns_truncv16si2_round */

        case 5:
          if (!(
#line 286 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 8773 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 4881; /* fixuns_truncv16sfv16si2_round */

        case 6:
          if (!(
#line 286 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 7865 "../../gcc/config/i386/sse.md"
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
(TARGET_EVEX512))))
            return -1;
          return 4644; /* avx512fp16_fixuns_truncv8di2_round */

        case 7:
          if (!(
#line 286 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 9699 "../../gcc/config/i386/sse.md"
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
(TARGET_EVEX512))))
            return -1;
          return 5079; /* fixuns_truncv8dfv8di2_round */

        case 8:
          if (!(
#line 286 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 9699 "../../gcc/config/i386/sse.md"
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
(TARGET_AVX512VL))))
            return -1;
          return 5087; /* fixuns_truncv4dfv4di2_round */

        default:
          return -1;
        }

    case FLOAT_EXTEND:
      x7 = XVECEXP (x3, 0, 1);
      operands[2] = x7;
      if (!const48_operand (operands[2], E_SImode))
        return -1;
      x5 = XEXP (x4, 0);
      switch (GET_CODE (x5))
        {
        case REG:
        case SUBREG:
          operands[1] = x5;
          switch (GET_MODE (operands[0]))
            {
            case E_V8DFmode:
              if (!register_operand (operands[0], E_V8DFmode)
                  || GET_MODE (x3) != E_V8DFmode
                  || GET_MODE (x4) != E_V8DFmode)
                return -1;
              switch (GET_MODE (operands[1]))
                {
                case E_V8HFmode:
                  if (!register_operand (operands[1], E_V8HFmode)
                      || !(
#line 286 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 8018 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && ((V8DFmode == V16SFmode
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
#line 1004 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512))))
                    return -1;
                  return 4708; /* avx512fp16_float_extend_phv8df2_round */

                case E_V8SFmode:
                  if (!register_operand (operands[1], E_V8SFmode)
                      || !(
#line 286 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 10221 "../../gcc/config/i386/sse.md"
(TARGET_AVX && 1 && ((V8DFmode == V16SFmode
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
#line 468 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512))))
                    return -1;
                  return 5184; /* avx512f_cvtps2pd512_round */

                default:
                  return -1;
                }

            case E_V16SFmode:
              if (pattern491 (x3, 
E_V16HFmode, 
E_V16SFmode) != 0
                  || !(
#line 286 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 8018 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && ((V16SFmode == V16SFmode
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
#line 1004 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512))))
                return -1;
              return 4712; /* avx512fp16_float_extend_phv16sf2_round */

            case E_V8SFmode:
              if (pattern491 (x3, 
E_V8HFmode, 
E_V8SFmode) != 0
                  || !(
#line 286 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 8018 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && ((V8SFmode == V16SFmode
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
#line 1004 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
                return -1;
              return 4716; /* avx512fp16_float_extend_phv8sf2_round */

            case E_V4DFmode:
              if (pattern491 (x3, 
E_V4SFmode, 
E_V4DFmode) != 0
                  || !(
#line 286 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 10221 "../../gcc/config/i386/sse.md"
(TARGET_AVX && 1 && ((V4DFmode == V16SFmode
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
										       || V4DFmode == V16HFmode))))))
                return -1;
              return 5188; /* avx_cvtps2pd256_round */

            default:
              return -1;
            }

        case VEC_SELECT:
          if (GET_MODE (x5) != E_V4HFmode)
            return -1;
          x8 = XEXP (x5, 1);
          if (GET_CODE (x8) != PARALLEL
              || XVECLEN (x8, 0) != 4)
            return -1;
          x9 = XVECEXP (x8, 0, 0);
          if (x9 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
            return -1;
          x10 = XVECEXP (x8, 0, 1);
          if (x10 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
            return -1;
          x11 = XVECEXP (x8, 0, 2);
          if (x11 != const_int_rtx[MAX_SAVED_CONST_INT + 2])
            return -1;
          x12 = XVECEXP (x8, 0, 3);
          if (x12 != const_int_rtx[MAX_SAVED_CONST_INT + 3]
              || !register_operand (operands[0], E_V4DFmode)
              || GET_MODE (x3) != E_V4DFmode
              || GET_MODE (x4) != E_V4DFmode)
            return -1;
          x13 = XEXP (x5, 0);
          operands[1] = x13;
          if (!register_operand (operands[1], E_V8HFmode)
              || !(
#line 286 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 8047 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL && ((V4DFmode == V16SFmode
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
										       || V4DFmode == V16HFmode))))))
            return -1;
          return 4720; /* avx512fp16_float_extend_phv4df2_round */

        default:
          return -1;
        }

    case FLOAT_TRUNCATE:
      x5 = XEXP (x4, 0);
      operands[1] = x5;
      x7 = XVECEXP (x3, 0, 1);
      operands[2] = x7;
      if (!const_4_or_8_to_11_operand (operands[2], E_SImode))
        return -1;
      switch (GET_MODE (operands[0]))
        {
        case E_V8HFmode:
          if (!register_operand (operands[0], E_V8HFmode)
              || GET_MODE (x3) != E_V8HFmode
              || GET_MODE (x4) != E_V8HFmode)
            return -1;
          switch (GET_MODE (operands[1]))
            {
            case E_V8DFmode:
              if (!register_operand (operands[1], E_V8DFmode)
                  || !(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 8112 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && ((V8DFmode == V16SFmode
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
#line 1004 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512))))
                return -1;
              return 4734; /* avx512fp16_vcvtpd2ph_v8df_round */

            case E_V8SFmode:
              if (!register_operand (operands[1], E_V8SFmode)
                  || !(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 8112 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && ((V8SFmode == V16SFmode
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
#line 1004 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
                return -1;
              return 4742; /* avx512fp16_vcvtps2ph_v8sf_round */

            default:
              return -1;
            }

        case E_V16HFmode:
          if (pattern491 (x3, 
E_V16SFmode, 
E_V16HFmode) != 0
              || !(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 8112 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && ((V16SFmode == V16SFmode
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
#line 1004 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512))))
            return -1;
          return 4738; /* avx512fp16_vcvtps2ph_v16sf_round */

        case E_V8SFmode:
          if (pattern491 (x3, 
E_V8DFmode, 
E_V8SFmode) != 0
              || !(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 10086 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 5172; /* *avx512f_cvtpd2ps512_round */

        case E_V4SFmode:
          if (pattern491 (x3, 
E_V4DFmode, 
E_V4SFmode) != 0
              || !(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 10096 "../../gcc/config/i386/sse.md"
(TARGET_AVX && 1
   && (!true || TARGET_AVX10_2_256))))
            return -1;
          return 5176; /* avx_cvtpd2ps256_round */

        default:
          return -1;
        }

    default:
      return -1;
    }
}

 int
recog_306 (rtx x1 ATTRIBUTE_UNUSED,
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
      switch (pattern533 (x2))
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
#line 332 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 5536; /* *avx512bw_vpternlogv64qi_1 */

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
#line 332 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 5563; /* *avx512vl_vpternlogv32qi_1 */

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
          return 5590; /* *avx512vl_vpternlogv16qi_1 */

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
#line 333 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 5617; /* *avx512bw_vpternlogv32hi_1 */

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
#line 333 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 5644; /* *avx512vl_vpternlogv16hi_1 */

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
          return 5671; /* *avx512vl_vpternlogv8hi_1 */

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
#line 334 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 5698; /* *avx512f_vpternlogv16si_1 */

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
#line 334 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 5725; /* *avx512vl_vpternlogv8si_1 */

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
          return 5752; /* *avx512vl_vpternlogv4si_1 */

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
#line 335 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 5779; /* *avx512f_vpternlogv8di_1 */

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
#line 335 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 5806; /* *avx512vl_vpternlogv4di_1 */

        case 11:
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
          return 5833; /* *avx512vl_vpternlogv2di_1 */

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
#line 332 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 5539; /* *avx512bw_vpternlogv64qi_1 */

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
#line 332 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 5566; /* *avx512vl_vpternlogv32qi_1 */

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
          return 5593; /* *avx512vl_vpternlogv16qi_1 */

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
#line 333 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 5620; /* *avx512bw_vpternlogv32hi_1 */

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
#line 333 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 5647; /* *avx512vl_vpternlogv16hi_1 */

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
          return 5674; /* *avx512vl_vpternlogv8hi_1 */

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
#line 334 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 5701; /* *avx512f_vpternlogv16si_1 */

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
#line 334 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 5728; /* *avx512vl_vpternlogv8si_1 */

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
          return 5755; /* *avx512vl_vpternlogv4si_1 */

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
#line 335 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 5782; /* *avx512f_vpternlogv8di_1 */

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
#line 335 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 5809; /* *avx512vl_vpternlogv4di_1 */

        case 23:
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
          return 5836; /* *avx512vl_vpternlogv2di_1 */

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
#line 332 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 5542; /* *avx512bw_vpternlogv64qi_1 */

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
#line 332 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 5569; /* *avx512vl_vpternlogv32qi_1 */

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
          return 5596; /* *avx512vl_vpternlogv16qi_1 */

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
#line 333 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 5623; /* *avx512bw_vpternlogv32hi_1 */

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
#line 333 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 5650; /* *avx512vl_vpternlogv16hi_1 */

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
          return 5677; /* *avx512vl_vpternlogv8hi_1 */

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
#line 334 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 5704; /* *avx512f_vpternlogv16si_1 */

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
#line 334 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 5731; /* *avx512vl_vpternlogv8si_1 */

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
          return 5758; /* *avx512vl_vpternlogv4si_1 */

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
#line 335 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 5785; /* *avx512f_vpternlogv8di_1 */

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
#line 335 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 5812; /* *avx512vl_vpternlogv4di_1 */

        case 35:
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
          return 5839; /* *avx512vl_vpternlogv2di_1 */

        case 36:
          if (!(
#line 13946 "../../gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 332 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 6820; /* *avx512bw_vpternlogv64qi_3 */

        case 37:
          if (!(
#line 13946 "../../gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 332 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 6829; /* *avx512vl_vpternlogv32qi_3 */

        case 38:
          if (!
#line 13946 "../../gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()))
            return -1;
          return 6838; /* *avx512vl_vpternlogv16qi_3 */

        case 39:
          if (!(
#line 13946 "../../gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 333 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 6847; /* *avx512bw_vpternlogv32hi_3 */

        case 40:
          if (!(
#line 13946 "../../gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 333 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 6856; /* *avx512vl_vpternlogv16hi_3 */

        case 41:
          if (!
#line 13946 "../../gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()))
            return -1;
          return 6865; /* *avx512vl_vpternlogv8hi_3 */

        case 42:
          if (!(
#line 13946 "../../gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 334 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 6874; /* *avx512f_vpternlogv16si_3 */

        case 43:
          if (!(
#line 13946 "../../gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 334 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 6883; /* *avx512vl_vpternlogv8si_3 */

        case 44:
          if (!
#line 13946 "../../gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()))
            return -1;
          return 6892; /* *avx512vl_vpternlogv4si_3 */

        case 45:
          if (!(
#line 13946 "../../gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 335 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 6901; /* *avx512f_vpternlogv8di_3 */

        case 46:
          if (!(
#line 13946 "../../gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 335 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 6910; /* *avx512vl_vpternlogv4di_3 */

        case 47:
          if (!
#line 13946 "../../gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()))
            return -1;
          return 6919; /* *avx512vl_vpternlogv2di_3 */

        default:
          return -1;
        }

    case AND:
      switch (pattern535 (x2))
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
#line 332 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 6184; /* *avx512bw_vpternlogv64qi_2 */

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
#line 332 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 6211; /* *avx512vl_vpternlogv32qi_2 */

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
          return 6238; /* *avx512vl_vpternlogv16qi_2 */

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
#line 333 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 6265; /* *avx512bw_vpternlogv32hi_2 */

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
#line 333 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 6292; /* *avx512vl_vpternlogv16hi_2 */

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
          return 6319; /* *avx512vl_vpternlogv8hi_2 */

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
#line 334 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 6346; /* *avx512f_vpternlogv16si_2 */

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
#line 334 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 6373; /* *avx512vl_vpternlogv8si_2 */

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
          return 6400; /* *avx512vl_vpternlogv4si_2 */

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
#line 335 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 6427; /* *avx512f_vpternlogv8di_2 */

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
#line 335 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 6454; /* *avx512vl_vpternlogv4di_2 */

        case 11:
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
          return 6481; /* *avx512vl_vpternlogv2di_2 */

        default:
          return -1;
        }

    case IOR:
      switch (pattern535 (x2))
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
#line 332 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 6187; /* *avx512bw_vpternlogv64qi_2 */

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
#line 332 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 6214; /* *avx512vl_vpternlogv32qi_2 */

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
          return 6241; /* *avx512vl_vpternlogv16qi_2 */

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
#line 333 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 6268; /* *avx512bw_vpternlogv32hi_2 */

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
#line 333 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 6295; /* *avx512vl_vpternlogv16hi_2 */

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
          return 6322; /* *avx512vl_vpternlogv8hi_2 */

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
#line 334 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 6349; /* *avx512f_vpternlogv16si_2 */

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
#line 334 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 6376; /* *avx512vl_vpternlogv8si_2 */

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
          return 6403; /* *avx512vl_vpternlogv4si_2 */

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
#line 335 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 6430; /* *avx512f_vpternlogv8di_2 */

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
#line 335 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 6457; /* *avx512vl_vpternlogv4di_2 */

        case 11:
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
          return 6484; /* *avx512vl_vpternlogv2di_2 */

        default:
          return -1;
        }

    case XOR:
      switch (pattern535 (x2))
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
#line 332 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 6190; /* *avx512bw_vpternlogv64qi_2 */

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
#line 332 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 6217; /* *avx512vl_vpternlogv32qi_2 */

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
          return 6244; /* *avx512vl_vpternlogv16qi_2 */

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
#line 333 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 6271; /* *avx512bw_vpternlogv32hi_2 */

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
#line 333 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 6298; /* *avx512vl_vpternlogv16hi_2 */

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
          return 6325; /* *avx512vl_vpternlogv8hi_2 */

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
#line 334 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 6352; /* *avx512f_vpternlogv16si_2 */

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
#line 334 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 6379; /* *avx512vl_vpternlogv8si_2 */

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
          return 6406; /* *avx512vl_vpternlogv4si_2 */

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
#line 335 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 6433; /* *avx512f_vpternlogv8di_2 */

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
#line 335 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 6460; /* *avx512vl_vpternlogv4di_2 */

        case 11:
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
          return 6487; /* *avx512vl_vpternlogv2di_2 */

        default:
          return -1;
        }

    default:
      return -1;
    }
}

 int
recog_315 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  switch (GET_CODE (x3))
    {
    case REG:
    case SUBREG:
    case MEM:
    case VEC_DUPLICATE:
      operands[1] = x3;
      x4 = XEXP (x2, 1);
      operands[2] = x4;
      switch (GET_MODE (operands[0]))
        {
        case E_V16BFmode:
          if (pattern25 (x2, 
E_V16BFmode) != 0
              || !(
#line 5349 "../../gcc/config/i386/sse.md"
(TARGET_SSE && 1
   && (!false || 16 != 16)
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 427 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 3707; /* *iorv16bf3 */

        case E_V8BFmode:
          if (pattern25 (x2, 
E_V8BFmode) != 0
              || !(
#line 5349 "../../gcc/config/i386/sse.md"
(TARGET_SSE && 1
   && (!false || 16 != 16)
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 427 "../../gcc/config/i386/sse.md"
(TARGET_SSE2)))
            return -1;
          return 3710; /* *iorv8bf3 */

        case E_V16HFmode:
          if (pattern25 (x2, 
E_V16HFmode) != 0
              || !(
#line 5349 "../../gcc/config/i386/sse.md"
(TARGET_SSE && 1
   && (!false || 16 != 16)
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 428 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 3713; /* *iorv16hf3 */

        case E_V8HFmode:
          if (pattern25 (x2, 
E_V8HFmode) != 0
              || !(
#line 5349 "../../gcc/config/i386/sse.md"
(TARGET_SSE && 1
   && (!false || 16 != 16)
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 428 "../../gcc/config/i386/sse.md"
(TARGET_SSE2)))
            return -1;
          return 3716; /* *iorv8hf3 */

        case E_V8SFmode:
          if (pattern25 (x2, 
E_V8SFmode) != 0
              || !(
#line 5349 "../../gcc/config/i386/sse.md"
(TARGET_SSE && 1
   && (!false || 32 != 16)
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 429 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 3720; /* *iorv8sf3 */

        case E_V4SFmode:
          if (pattern25 (x2, 
E_V4SFmode) != 0
              || !
#line 5349 "../../gcc/config/i386/sse.md"
(TARGET_SSE && 1
   && (!false || 32 != 16)
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
            return -1;
          return 3726; /* *iorv4sf3 */

        case E_V4DFmode:
          if (pattern25 (x2, 
E_V4DFmode) != 0
              || !(
#line 5349 "../../gcc/config/i386/sse.md"
(TARGET_SSE && 1
   && (!false || 64 != 16)
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 430 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 3732; /* *iorv4df3 */

        case E_V2DFmode:
          if (pattern25 (x2, 
E_V2DFmode) != 0
              || !(
#line 5349 "../../gcc/config/i386/sse.md"
(TARGET_SSE && 1
   && (!false || 64 != 16)
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 430 "../../gcc/config/i386/sse.md"
(TARGET_SSE2)))
            return -1;
          return 3738; /* *iorv2df3 */

        case E_V32BFmode:
          if (pattern5 (x2, 
E_V32BFmode) != 0
              || !(
#line 5419 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && !(MEM_P (operands[1]) && MEM_P (operands[2]))
   && (!false || 16 != 16)) && 
#line 492 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return -1;
          return 3743; /* *iorv32bf3 */

        case E_V32HFmode:
          if (pattern5 (x2, 
E_V32HFmode) != 0
              || !(
#line 5419 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && !(MEM_P (operands[1]) && MEM_P (operands[2]))
   && (!false || 16 != 16)) && 
#line 493 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return -1;
          return 3746; /* *iorv32hf3 */

        case E_V16SFmode:
          if (pattern5 (x2, 
E_V16SFmode) != 0
              || !(
#line 5419 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && !(MEM_P (operands[1]) && MEM_P (operands[2]))
   && (!false || 32 != 16)) && 
#line 494 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return -1;
          return 3750; /* *iorv16sf3 */

        case E_V8DFmode:
          if (pattern5 (x2, 
E_V8DFmode) != 0
              || !(
#line 5419 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && !(MEM_P (operands[1]) && MEM_P (operands[2]))
   && (!false || 64 != 16)) && 
#line 495 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return -1;
          return 3756; /* *iorv8df3 */

        case E_V16SImode:
          if (pattern179 (x2, 
E_V16SImode) != 0
              || !(
#line 18731 "../../gcc/config/i386/sse.md"
(TARGET_SSE && 1
   && ix86_binary_operator_ok (IOR, V16SImode, operands)) && 
#line 808 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 8003; /* *iorv16si3 */

        case E_V8SImode:
          if (pattern179 (x2, 
E_V8SImode) != 0
              || !(
#line 18731 "../../gcc/config/i386/sse.md"
(TARGET_SSE && 1
   && ix86_binary_operator_ok (IOR, V8SImode, operands)) && 
#line 808 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 8009; /* *iorv8si3 */

        case E_V4SImode:
          if (pattern179 (x2, 
E_V4SImode) != 0
              || !
#line 18731 "../../gcc/config/i386/sse.md"
(TARGET_SSE && 1
   && ix86_binary_operator_ok (IOR, V4SImode, operands)))
            return -1;
          return 8015; /* *iorv4si3 */

        case E_V8DImode:
          if (pattern179 (x2, 
E_V8DImode) != 0
              || !(
#line 18731 "../../gcc/config/i386/sse.md"
(TARGET_SSE && 1
   && ix86_binary_operator_ok (IOR, V8DImode, operands)) && 
#line 809 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 8021; /* *iorv8di3 */

        case E_V4DImode:
          if (pattern179 (x2, 
E_V4DImode) != 0
              || !(
#line 18731 "../../gcc/config/i386/sse.md"
(TARGET_SSE && 1
   && ix86_binary_operator_ok (IOR, V4DImode, operands)) && 
#line 809 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 8027; /* *iorv4di3 */

        case E_V2DImode:
          if (pattern179 (x2, 
E_V2DImode) != 0
              || !
#line 18731 "../../gcc/config/i386/sse.md"
(TARGET_SSE && 1
   && ix86_binary_operator_ok (IOR, V2DImode, operands)))
            return -1;
          return 8033; /* *iorv2di3 */

        case E_V64QImode:
          if (pattern25 (x2, 
E_V64QImode) != 0
              || !(
#line 18833 "../../gcc/config/i386/sse.md"
(TARGET_SSE && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 812 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 8038; /* *iorv64qi3 */

        case E_V32QImode:
          if (pattern25 (x2, 
E_V32QImode) != 0
              || !(
#line 18833 "../../gcc/config/i386/sse.md"
(TARGET_SSE && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 812 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 8041; /* *iorv32qi3 */

        case E_V16QImode:
          if (pattern25 (x2, 
E_V16QImode) != 0
              || !
#line 18833 "../../gcc/config/i386/sse.md"
(TARGET_SSE && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
            return -1;
          return 8044; /* *iorv16qi3 */

        case E_V32HImode:
          if (pattern25 (x2, 
E_V32HImode) != 0
              || !(
#line 18833 "../../gcc/config/i386/sse.md"
(TARGET_SSE && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 813 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 8047; /* *iorv32hi3 */

        case E_V16HImode:
          if (pattern25 (x2, 
E_V16HImode) != 0
              || !(
#line 18833 "../../gcc/config/i386/sse.md"
(TARGET_SSE && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 813 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 8050; /* *iorv16hi3 */

        case E_V8HImode:
          if (pattern25 (x2, 
E_V8HImode) != 0
              || !
#line 18833 "../../gcc/config/i386/sse.md"
(TARGET_SSE && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
            return -1;
          return 8053; /* *iorv8hi3 */

        case E_V1TImode:
          if (pattern670 (x2, 
E_V1TImode) != 0
              || !
#line 18930 "../../gcc/config/i386/sse.md"
(TARGET_SSE2))
            return -1;
          return 8056; /* iorv1ti3 */

        default:
          return -1;
        }

    case AND:
      x5 = XEXP (x3, 0);
      switch (GET_CODE (x5))
        {
        case REG:
        case SUBREG:
        case MEM:
        case NOT:
          switch (pattern533 (x2))
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
#line 332 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
                return -1;
              return 5517; /* *avx512bw_vpternlogv64qi_1 */

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
#line 332 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
                return -1;
              return 5544; /* *avx512vl_vpternlogv32qi_1 */

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
              return 5571; /* *avx512vl_vpternlogv16qi_1 */

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
#line 333 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
                return -1;
              return 5598; /* *avx512bw_vpternlogv32hi_1 */

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
#line 333 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
                return -1;
              return 5625; /* *avx512vl_vpternlogv16hi_1 */

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
              return 5652; /* *avx512vl_vpternlogv8hi_1 */

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
#line 334 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
                return -1;
              return 5679; /* *avx512f_vpternlogv16si_1 */

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
#line 334 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
                return -1;
              return 5706; /* *avx512vl_vpternlogv8si_1 */

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
              return 5733; /* *avx512vl_vpternlogv4si_1 */

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
#line 335 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
                return -1;
              return 5760; /* *avx512f_vpternlogv8di_1 */

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
#line 335 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
                return -1;
              return 5787; /* *avx512vl_vpternlogv4di_1 */

            case 11:
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
              return 5814; /* *avx512vl_vpternlogv2di_1 */

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
#line 332 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
                return -1;
              return 5520; /* *avx512bw_vpternlogv64qi_1 */

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
#line 332 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
                return -1;
              return 5547; /* *avx512vl_vpternlogv32qi_1 */

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
              return 5574; /* *avx512vl_vpternlogv16qi_1 */

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
#line 333 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
                return -1;
              return 5601; /* *avx512bw_vpternlogv32hi_1 */

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
#line 333 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
                return -1;
              return 5628; /* *avx512vl_vpternlogv16hi_1 */

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
              return 5655; /* *avx512vl_vpternlogv8hi_1 */

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
#line 334 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
                return -1;
              return 5682; /* *avx512f_vpternlogv16si_1 */

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
#line 334 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
                return -1;
              return 5709; /* *avx512vl_vpternlogv8si_1 */

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
              return 5736; /* *avx512vl_vpternlogv4si_1 */

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
#line 335 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
                return -1;
              return 5763; /* *avx512f_vpternlogv8di_1 */

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
#line 335 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
                return -1;
              return 5790; /* *avx512vl_vpternlogv4di_1 */

            case 23:
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
              return 5817; /* *avx512vl_vpternlogv2di_1 */

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
#line 332 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
                return -1;
              return 5523; /* *avx512bw_vpternlogv64qi_1 */

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
#line 332 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
                return -1;
              return 5550; /* *avx512vl_vpternlogv32qi_1 */

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
              return 5577; /* *avx512vl_vpternlogv16qi_1 */

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
#line 333 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
                return -1;
              return 5604; /* *avx512bw_vpternlogv32hi_1 */

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
#line 333 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
                return -1;
              return 5631; /* *avx512vl_vpternlogv16hi_1 */

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
              return 5658; /* *avx512vl_vpternlogv8hi_1 */

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
#line 334 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
                return -1;
              return 5685; /* *avx512f_vpternlogv16si_1 */

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
#line 334 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
                return -1;
              return 5712; /* *avx512vl_vpternlogv8si_1 */

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
              return 5739; /* *avx512vl_vpternlogv4si_1 */

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
#line 335 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
                return -1;
              return 5766; /* *avx512f_vpternlogv8di_1 */

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
#line 335 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
                return -1;
              return 5793; /* *avx512vl_vpternlogv4di_1 */

            case 35:
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
              return 5820; /* *avx512vl_vpternlogv2di_1 */

            case 36:
              if (!(
#line 13946 "../../gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 332 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
                return -1;
              return 6813; /* *avx512bw_vpternlogv64qi_3 */

            case 37:
              if (!(
#line 13946 "../../gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 332 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
                return -1;
              return 6822; /* *avx512vl_vpternlogv32qi_3 */

            case 38:
              if (!
#line 13946 "../../gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()))
                return -1;
              return 6831; /* *avx512vl_vpternlogv16qi_3 */

            case 39:
              if (!(
#line 13946 "../../gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 333 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
                return -1;
              return 6840; /* *avx512bw_vpternlogv32hi_3 */

            case 40:
              if (!(
#line 13946 "../../gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 333 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
                return -1;
              return 6849; /* *avx512vl_vpternlogv16hi_3 */

            case 41:
              if (!
#line 13946 "../../gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()))
                return -1;
              return 6858; /* *avx512vl_vpternlogv8hi_3 */

            case 42:
              if (!(
#line 13946 "../../gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 334 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
                return -1;
              return 6867; /* *avx512f_vpternlogv16si_3 */

            case 43:
              if (!(
#line 13946 "../../gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 334 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
                return -1;
              return 6876; /* *avx512vl_vpternlogv8si_3 */

            case 44:
              if (!
#line 13946 "../../gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()))
                return -1;
              return 6885; /* *avx512vl_vpternlogv4si_3 */

            case 45:
              if (!(
#line 13946 "../../gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 335 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
                return -1;
              return 6894; /* *avx512f_vpternlogv8di_3 */

            case 46:
              if (!(
#line 13946 "../../gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 335 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
                return -1;
              return 6903; /* *avx512vl_vpternlogv4di_3 */

            case 47:
              if (!
#line 13946 "../../gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()))
                return -1;
              return 6912; /* *avx512vl_vpternlogv2di_3 */

            default:
              return -1;
            }

        case AND:
          switch (pattern535 (x2))
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
#line 332 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
                return -1;
              return 6165; /* *avx512bw_vpternlogv64qi_2 */

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
#line 332 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
                return -1;
              return 6192; /* *avx512vl_vpternlogv32qi_2 */

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
              return 6219; /* *avx512vl_vpternlogv16qi_2 */

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
#line 333 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
                return -1;
              return 6246; /* *avx512bw_vpternlogv32hi_2 */

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
#line 333 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
                return -1;
              return 6273; /* *avx512vl_vpternlogv16hi_2 */

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
              return 6300; /* *avx512vl_vpternlogv8hi_2 */

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
#line 334 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
                return -1;
              return 6327; /* *avx512f_vpternlogv16si_2 */

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
#line 334 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
                return -1;
              return 6354; /* *avx512vl_vpternlogv8si_2 */

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
              return 6381; /* *avx512vl_vpternlogv4si_2 */

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
#line 335 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
                return -1;
              return 6408; /* *avx512f_vpternlogv8di_2 */

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
#line 335 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
                return -1;
              return 6435; /* *avx512vl_vpternlogv4di_2 */

            case 11:
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
              return 6462; /* *avx512vl_vpternlogv2di_2 */

            default:
              return -1;
            }

        case IOR:
          switch (pattern535 (x2))
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
#line 332 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
                return -1;
              return 6168; /* *avx512bw_vpternlogv64qi_2 */

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
#line 332 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
                return -1;
              return 6195; /* *avx512vl_vpternlogv32qi_2 */

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
              return 6222; /* *avx512vl_vpternlogv16qi_2 */

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
#line 333 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
                return -1;
              return 6249; /* *avx512bw_vpternlogv32hi_2 */

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
#line 333 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
                return -1;
              return 6276; /* *avx512vl_vpternlogv16hi_2 */

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
              return 6303; /* *avx512vl_vpternlogv8hi_2 */

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
#line 334 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
                return -1;
              return 6330; /* *avx512f_vpternlogv16si_2 */

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
#line 334 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
                return -1;
              return 6357; /* *avx512vl_vpternlogv8si_2 */

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
              return 6384; /* *avx512vl_vpternlogv4si_2 */

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
#line 335 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
                return -1;
              return 6411; /* *avx512f_vpternlogv8di_2 */

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
#line 335 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
                return -1;
              return 6438; /* *avx512vl_vpternlogv4di_2 */

            case 11:
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
              return 6465; /* *avx512vl_vpternlogv2di_2 */

            default:
              return -1;
            }

        case XOR:
          switch (pattern535 (x2))
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
#line 332 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
                return -1;
              return 6171; /* *avx512bw_vpternlogv64qi_2 */

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
#line 332 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
                return -1;
              return 6198; /* *avx512vl_vpternlogv32qi_2 */

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
              return 6225; /* *avx512vl_vpternlogv16qi_2 */

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
#line 333 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
                return -1;
              return 6252; /* *avx512bw_vpternlogv32hi_2 */

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
#line 333 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
                return -1;
              return 6279; /* *avx512vl_vpternlogv16hi_2 */

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
              return 6306; /* *avx512vl_vpternlogv8hi_2 */

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
#line 334 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
                return -1;
              return 6333; /* *avx512f_vpternlogv16si_2 */

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
#line 334 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
                return -1;
              return 6360; /* *avx512vl_vpternlogv8si_2 */

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
              return 6387; /* *avx512vl_vpternlogv4si_2 */

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
#line 335 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
                return -1;
              return 6414; /* *avx512f_vpternlogv8di_2 */

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
#line 335 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
                return -1;
              return 6441; /* *avx512vl_vpternlogv4di_2 */

            case 11:
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
              return 6468; /* *avx512vl_vpternlogv2di_2 */

            default:
              return -1;
            }

        default:
          return -1;
        }

    case IOR:
      return recog_305 (x1, insn, pnum_clobbers);

    case XOR:
      return recog_304 (x1, insn, pnum_clobbers);

    case NOT:
      switch (pattern335 (x2))
        {
        case 0:
          switch (GET_MODE (operands[0]))
            {
            case E_V16SImode:
              if (pattern933 (x2, 
E_V16SImode) != 0
                  || !(
#line 18957 "../../gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && (register_operand (operands[1], V16SImode)
       || register_operand (operands[2], V16SImode))) && 
#line 569 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
                return -1;
              return 8058; /* *iornotv16si3 */

            case E_V8DImode:
              if (pattern933 (x2, 
E_V8DImode) != 0
                  || !(
#line 18957 "../../gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && (register_operand (operands[1], V8DImode)
       || register_operand (operands[2], V8DImode))) && 
#line 570 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
                return -1;
              return 8059; /* *iornotv8di3 */

            case E_V64QImode:
              if (pattern933 (x2, 
E_V64QImode) != 0
                  || !(
#line 18957 "../../gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && (register_operand (operands[1], V64QImode)
       || register_operand (operands[2], V64QImode))) && 
#line 571 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512)))
                return -1;
              return 8060; /* *iornotv64qi3 */

            case E_V32QImode:
              if (pattern933 (x2, 
E_V32QImode) != 0
                  || !(
#line 18957 "../../gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && (register_operand (operands[1], V32QImode)
       || register_operand (operands[2], V32QImode))) && 
#line 571 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
                return -1;
              return 8061; /* *iornotv32qi3 */

            case E_V16QImode:
              if (pattern933 (x2, 
E_V16QImode) != 0
                  || !
#line 18957 "../../gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && (register_operand (operands[1], V16QImode)
       || register_operand (operands[2], V16QImode))))
                return -1;
              return 8062; /* *iornotv16qi3 */

            case E_V32HImode:
              if (pattern933 (x2, 
E_V32HImode) != 0
                  || !(
#line 18957 "../../gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && (register_operand (operands[1], V32HImode)
       || register_operand (operands[2], V32HImode))) && 
#line 572 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512)))
                return -1;
              return 8063; /* *iornotv32hi3 */

            case E_V16HImode:
              if (pattern933 (x2, 
E_V16HImode) != 0
                  || !(
#line 18957 "../../gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && (register_operand (operands[1], V16HImode)
       || register_operand (operands[2], V16HImode))) && 
#line 572 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
                return -1;
              return 8064; /* *iornotv16hi3 */

            case E_V8HImode:
              if (pattern933 (x2, 
E_V8HImode) != 0
                  || !
#line 18957 "../../gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && (register_operand (operands[1], V8HImode)
       || register_operand (operands[2], V8HImode))))
                return -1;
              return 8065; /* *iornotv8hi3 */

            case E_V8SImode:
              if (pattern933 (x2, 
E_V8SImode) != 0
                  || !(
#line 18957 "../../gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && (register_operand (operands[1], V8SImode)
       || register_operand (operands[2], V8SImode))) && 
#line 573 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
                return -1;
              return 8066; /* *iornotv8si3 */

            case E_V4SImode:
              if (pattern933 (x2, 
E_V4SImode) != 0
                  || !
#line 18957 "../../gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && (register_operand (operands[1], V4SImode)
       || register_operand (operands[2], V4SImode))))
                return -1;
              return 8067; /* *iornotv4si3 */

            case E_V4DImode:
              if (pattern933 (x2, 
E_V4DImode) != 0
                  || !(
#line 18957 "../../gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && (register_operand (operands[1], V4DImode)
       || register_operand (operands[2], V4DImode))) && 
#line 574 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
                return -1;
              return 8068; /* *iornotv4di3 */

            case E_V2DImode:
              if (pattern933 (x2, 
E_V2DImode) != 0
                  || !
#line 18957 "../../gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && (register_operand (operands[1], V2DImode)
       || register_operand (operands[2], V2DImode))))
                return -1;
              return 8069; /* *iornotv2di3 */

            default:
              return -1;
            }

        case 1:
          if (!(
#line 19021 "../../gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && (register_operand (operands[1], V16SImode)
       || register_operand (operands[2], V16SImode))) && 
#line 569 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 8083; /* *nandv16si3 */

        case 2:
          if (!(
#line 19021 "../../gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && (register_operand (operands[1], V8DImode)
       || register_operand (operands[2], V8DImode))) && 
#line 570 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 8085; /* *nandv8di3 */

        case 3:
          if (!(
#line 19021 "../../gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && (register_operand (operands[1], V64QImode)
       || register_operand (operands[2], V64QImode))) && 
#line 571 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512)))
            return -1;
          return 8087; /* *nandv64qi3 */

        case 4:
          if (!(
#line 19021 "../../gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && (register_operand (operands[1], V32QImode)
       || register_operand (operands[2], V32QImode))) && 
#line 571 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 8089; /* *nandv32qi3 */

        case 5:
          if (!
#line 19021 "../../gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && (register_operand (operands[1], V16QImode)
       || register_operand (operands[2], V16QImode))))
            return -1;
          return 8091; /* *nandv16qi3 */

        case 6:
          if (!(
#line 19021 "../../gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && (register_operand (operands[1], V32HImode)
       || register_operand (operands[2], V32HImode))) && 
#line 572 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512)))
            return -1;
          return 8093; /* *nandv32hi3 */

        case 7:
          if (!(
#line 19021 "../../gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && (register_operand (operands[1], V16HImode)
       || register_operand (operands[2], V16HImode))) && 
#line 572 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 8095; /* *nandv16hi3 */

        case 8:
          if (!
#line 19021 "../../gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && (register_operand (operands[1], V8HImode)
       || register_operand (operands[2], V8HImode))))
            return -1;
          return 8097; /* *nandv8hi3 */

        case 9:
          if (!(
#line 19021 "../../gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && (register_operand (operands[1], V8SImode)
       || register_operand (operands[2], V8SImode))) && 
#line 573 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 8099; /* *nandv8si3 */

        case 10:
          if (!
#line 19021 "../../gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && (register_operand (operands[1], V4SImode)
       || register_operand (operands[2], V4SImode))))
            return -1;
          return 8101; /* *nandv4si3 */

        case 11:
          if (!(
#line 19021 "../../gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && (register_operand (operands[1], V4DImode)
       || register_operand (operands[2], V4DImode))) && 
#line 574 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 8103; /* *nandv4di3 */

        case 12:
          if (!
#line 19021 "../../gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && (register_operand (operands[1], V2DImode)
       || register_operand (operands[2], V2DImode))))
            return -1;
          return 8105; /* *nandv2di3 */

        default:
          return -1;
        }

    default:
      return -1;
    }
}

 int
recog_343 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4;
  int res ATTRIBUTE_UNUSED;
  switch (pattern34 (x1))
    {
    case 0:
      if (!
#line 24117 "../../gcc/config/i386/sse.md"
(TARGET_AVX2 && 1 && 1))
        return -1;
      return 8750; /* avx2_sign_extendv16qiv16hi2 */

    case 1:
      if (!
#line 24171 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512))
        return -1;
      return 8758; /* avx512bw_sign_extendv32qiv32hi2 */

    case 2:
      if (!
#line 24241 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1 && 1 && 1))
        return -1;
      return 8770; /* *sse4_1_sign_extendv8qiv8hi2_1 */

    case 3:
      if (!
#line 24366 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512))
        return -1;
      return 8782; /* *avx512f_sign_extendv16qiv16si2 */

    case 4:
      if (!
#line 24509 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512))
        return -1;
      return 8810; /* avx512f_sign_extendv16hiv16si2 */

    case 5:
      if (!
#line 24398 "../../gcc/config/i386/sse.md"
(TARGET_AVX2 && 1))
        return -1;
      return 8790; /* *avx2_sign_extendv8qiv8si2_1 */

    case 6:
      if (!
#line 24562 "../../gcc/config/i386/sse.md"
(TARGET_AVX2 && 1))
        return -1;
      return 8818; /* avx2_sign_extendv8hiv8si2 */

    case 7:
      if (!
#line 24459 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1 && 1))
        return -1;
      return 8802; /* *sse4_1_sign_extendv4qiv4si2_1 */

    case 8:
      if (!
#line 24632 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1 && 1))
        return -1;
      return 8830; /* *sse4_1_sign_extendv4hiv4si2_1 */

    case 9:
      if (!
#line 24763 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512))
        return -1;
      return 8846; /* *avx512f_sign_extendv8qiv8di2_1 */

    case 10:
      if (!
#line 24934 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512))
        return -1;
      return 8877; /* avx512f_sign_extendv8hiv8di2 */

    case 11:
      if (!
#line 25071 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512))
        return -1;
      return 8905; /* avx512f_sign_extendv8siv8di2 */

    case 12:
      if (!
#line 24821 "../../gcc/config/i386/sse.md"
(TARGET_AVX2 && 1))
        return -1;
      return 8858; /* *avx2_sign_extendv4qiv4di2_1 */

    case 13:
      if (!
#line 24964 "../../gcc/config/i386/sse.md"
(TARGET_AVX2 && 1))
        return -1;
      return 8885; /* *avx2_sign_extendv4hiv4di2_1 */

    case 14:
      if (!
#line 25122 "../../gcc/config/i386/sse.md"
(TARGET_AVX2 && 1))
        return -1;
      return 8911; /* avx2_sign_extendv4siv4di2 */

    case 15:
      if (!
#line 24883 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1 && 1))
        return -1;
      return 8870; /* *sse4_1_sign_extendv2qiv2di2_1 */

    case 16:
      if (!
#line 25022 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1 && 1))
        return -1;
      return 8897; /* *sse4_1_sign_extendv2hiv2di2_1 */

    case 17:
      if (!
#line 25188 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1 && 1))
        return -1;
      return 8921; /* *sse4_1_sign_extendv2siv2di2_1 */

    case 18:
      x2 = XEXP (x1, 1);
      x3 = XEXP (x2, 0);
      x4 = XEXP (x3, 0);
      operands[1] = x4;
      switch (pattern541 (x2))
        {
        case 0:
          if (
#line 24229 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1 && 1 && 1))
            return 8766; /* sse4_1_sign_extendv8qiv8hi2 */
          break;

        case 1:
          if (
#line 24387 "../../gcc/config/i386/sse.md"
(TARGET_AVX2 && 1))
            return 8786; /* avx2_sign_extendv8qiv8si2 */
          break;

        case 2:
          if (
#line 24753 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512))
            return 8842; /* avx512f_sign_extendv8qiv8di2 */
          break;

        case 3:
          if (
#line 24447 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1 && 1))
            return 8798; /* sse4_1_sign_extendv4qiv4si2 */
          break;

        case 4:
          if (
#line 24620 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1 && 1))
            return 8826; /* sse4_1_sign_extendv4hiv4si2 */
          break;

        case 5:
          if (
#line 24810 "../../gcc/config/i386/sse.md"
(TARGET_AVX2 && 1))
            return 8854; /* avx2_sign_extendv4qiv4di2 */
          break;

        case 6:
          if (
#line 24953 "../../gcc/config/i386/sse.md"
(TARGET_AVX2 && 1))
            return 8881; /* avx2_sign_extendv4hiv4di2 */
          break;

        case 7:
          if (
#line 24871 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1 && 1))
            return 8866; /* sse4_1_sign_extendv2qiv2di2 */
          break;

        case 8:
          if (
#line 25010 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1 && 1))
            return 8893; /* sse4_1_sign_extendv2hiv2di2 */
          break;

        case 9:
          if (
#line 25176 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1 && 1))
            return 8917; /* sse4_1_sign_extendv2siv2di2 */
          break;

        default:
          break;
        }
      if (GET_CODE (x4) != SUBREG
          || maybe_ne (SUBREG_BYTE (x4), 0))
        return -1;
      switch (pattern681 (x2))
        {
        case 0:
          if (!
#line 24265 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1 && 1 && 1
   && ix86_pre_reload_split ()))
            return -1;
          return 8774; /* *sse4_1_sign_extendv8qiv8hi2_2 */

        case 1:
          if (!
#line 24417 "../../gcc/config/i386/sse.md"
(TARGET_AVX2 && 1
   && ix86_pre_reload_split ()))
            return -1;
          return 8794; /* *avx2_sign_extendv8qiv8si2_2 */

        case 2:
          if (!
#line 24781 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512 && ix86_pre_reload_split ()))
            return -1;
          return 8850; /* *avx512f_sign_extendv8qiv8di2_2 */

        case 3:
          if (!
#line 24651 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1 && 1
   && ix86_pre_reload_split ()))
            return -1;
          return 8834; /* *sse4_1_sign_extendv4hiv4si2_2 */

        case 4:
          if (!
#line 24981 "../../gcc/config/i386/sse.md"
(TARGET_AVX2 && 1
   && ix86_pre_reload_split ()))
            return -1;
          return 8889; /* *avx2_sign_extendv4hiv4di2_2 */

        case 5:
          if (!
#line 25206 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1 && 1
   && ix86_pre_reload_split ()))
            return -1;
          return 8925; /* *sse4_1_sign_extendv2siv2di2_2 */

        case 6:
          if (!
#line 24482 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1 && 1
   && ix86_pre_reload_split ()))
            return -1;
          return 8806; /* *sse4_1_sign_extendv4qiv4si2_2 */

        case 7:
          if (!
#line 24842 "../../gcc/config/i386/sse.md"
(TARGET_AVX2 && 1
   && ix86_pre_reload_split ()))
            return -1;
          return 8862; /* *avx2_sign_extendv4qiv4di2_2 */

        case 8:
          if (!
#line 25044 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1 && 1
   && ix86_pre_reload_split ()))
            return -1;
          return 8901; /* *sse4_1_sign_extendv2hiv2di2_2 */

        default:
          return -1;
        }

    default:
      return -1;
    }
}

 int
recog_350 (rtx x1 ATTRIBUTE_UNUSED,
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
    case E_V32HFmode:
      if (pattern514 (x3, 
E_V32HFmode) != 0
          || !(
#line 2899 "../../gcc/config/i386/sse.md"
(TARGET_SSE && 1 && 1) && 
#line 390 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_EVEX512)))
        return -1;
      return 2845; /* avx512fp16_divv32hf3 */

    case E_V16HFmode:
      if (pattern514 (x3, 
E_V16HFmode) != 0
          || !(
#line 2899 "../../gcc/config/i386/sse.md"
(TARGET_SSE && 1 && 1) && 
#line 391 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL)))
        return -1;
      return 2849; /* avx512fp16_divv16hf3 */

    case E_V8HFmode:
      if (pattern514 (x3, 
E_V8HFmode) != 0
          || !(
#line 2899 "../../gcc/config/i386/sse.md"
(TARGET_SSE && 1 && 1) && 
#line 392 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL)))
        return -1;
      return 2853; /* avx512fp16_divv8hf3 */

    case E_V16SFmode:
      if (pattern514 (x3, 
E_V16SFmode) != 0
          || !(
#line 2899 "../../gcc/config/i386/sse.md"
(TARGET_SSE && 1 && 1) && 
#line 393 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
        return -1;
      return 2855; /* avx512f_divv16sf3 */

    case E_V8SFmode:
      if (pattern514 (x3, 
E_V8SFmode) != 0
          || !(
#line 2899 "../../gcc/config/i386/sse.md"
(TARGET_SSE && 1 && 1) && 
#line 393 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
        return -1;
      return 2859; /* avx_divv8sf3 */

    case E_V4SFmode:
      if (pattern514 (x3, 
E_V4SFmode) != 0
          || !
#line 2899 "../../gcc/config/i386/sse.md"
(TARGET_SSE && 1 && 1))
        return -1;
      return 2863; /* sse_divv4sf3 */

    case E_V8DFmode:
      if (pattern514 (x3, 
E_V8DFmode) != 0
          || !(
#line 2899 "../../gcc/config/i386/sse.md"
(TARGET_SSE && 1 && 1) && 
#line 394 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
        return -1;
      return 2865; /* avx512f_divv8df3 */

    case E_V4DFmode:
      if (pattern514 (x3, 
E_V4DFmode) != 0
          || !(
#line 2899 "../../gcc/config/i386/sse.md"
(TARGET_SSE && 1 && 1) && 
#line 394 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
        return -1;
      return 2869; /* avx_divv4df3 */

    case E_V2DFmode:
      if (pattern514 (x3, 
E_V2DFmode) != 0
          || !(
#line 2899 "../../gcc/config/i386/sse.md"
(TARGET_SSE && 1 && 1) && 
#line 395 "../../gcc/config/i386/sse.md"
(TARGET_SSE2)))
        return -1;
      return 2873; /* sse2_divv2df3 */

    case E_V32BFmode:
      if (pattern14 (x3, 
E_V32BFmode) != 0
          || !(
#line 32110 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256) && 
#line 565 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_512)))
        return -1;
      return 10608; /* avx10_2_divnepbf16_v32bf */

    case E_V16BFmode:
      if (pattern14 (x3, 
E_V16BFmode) != 0
          || !
#line 32110 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
        return -1;
      return 10616; /* avx10_2_divnepbf16_v16bf */

    case E_V8BFmode:
      if (pattern14 (x3, 
E_V8BFmode) != 0
          || !
#line 32110 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
        return -1;
      return 10624; /* avx10_2_divnepbf16_v8bf */

    default:
      return -1;
    }
}

 int
recog_354 (rtx x1 ATTRIBUTE_UNUSED,
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
    case E_XFmode:
      if (!register_operand (operands[0], E_XFmode)
          || GET_MODE (x3) != E_XFmode
          || !register_operand (operands[1], E_XFmode)
          || !
#line 23565 "../../gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387))
        return -1;
      return 1702; /* sqrtxf2 */

    case E_HFmode:
      if (!register_operand (operands[0], E_HFmode)
          || GET_MODE (x3) != E_HFmode
          || !nonimmediate_operand (operands[1], E_HFmode)
          || !
#line 23626 "../../gcc/config/i386/i386.md"
(TARGET_AVX512FP16))
        return -1;
      return 1705; /* sqrthf2 */

    case E_SFmode:
      if (!register_operand (operands[0], E_SFmode)
          || GET_MODE (x3) != E_SFmode
          || !nonimmediate_operand (operands[1], E_SFmode)
          || !
#line 23639 "../../gcc/config/i386/i386.md"
(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH))
        return -1;
      return 1706; /* *sqrtsf2_sse */

    case E_DFmode:
      if (!register_operand (operands[0], E_DFmode)
          || GET_MODE (x3) != E_DFmode
          || !nonimmediate_operand (operands[1], E_DFmode)
          || !
#line 23639 "../../gcc/config/i386/i386.md"
(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH))
        return -1;
      return 1707; /* *sqrtdf2_sse */

    default:
      return -1;
    }
}

 int
recog_357 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x2) != USE)
    return -1;
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) != LABEL_REF)
    return -1;
  x4 = XVECEXP (x1, 0, 0);
  x5 = XEXP (x4, 1);
  operands[0] = x5;
  x6 = XEXP (x3, 0);
  operands[1] = x6;
  switch (GET_MODE (operands[0]))
    {
    case E_SImode:
      if (!indirect_branch_operand (operands[0], E_SImode)
          || !
#line 1403 "../../gcc/config/i386/i386.md"
(word_mode == SImode))
        return -1;
      return 1462; /* *tablejump_1 */

    case E_DImode:
      if (!indirect_branch_operand (operands[0], E_DImode)
          || !
#line 1403 "../../gcc/config/i386/i386.md"
(word_mode == DImode))
        return -1;
      return 1463; /* *tablejump_1 */

    default:
      return -1;
    }
}

 int
recog_362 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) != E_CCCmode)
    return -1;
  x4 = XEXP (x2, 1);
  if (GET_MODE (x4) != E_CCCmode)
    return -1;
  x5 = XVECEXP (x1, 0, 1);
  switch (GET_CODE (x5))
    {
    case SET:
      x6 = XEXP (x5, 1);
      if (GET_CODE (x6) != NEG)
        return -1;
      x7 = XEXP (x5, 0);
      operands[0] = x7;
      x8 = XEXP (x6, 0);
      if (!rtx_equal_p (x8, operands[1]))
        return -1;
      switch (GET_MODE (operands[1]))
        {
        case E_QImode:
          if (!nonimmediate_operand (operands[1], E_QImode)
              || !nonimmediate_operand (operands[0], E_QImode)
              || GET_MODE (x6) != E_QImode)
            return -1;
          return 980; /* *negqi_ccc_1 */

        case E_HImode:
          if (!nonimmediate_operand (operands[1], E_HImode)
              || !nonimmediate_operand (operands[0], E_HImode)
              || GET_MODE (x6) != E_HImode)
            return -1;
          return 981; /* *neghi_ccc_1 */

        case E_SImode:
          if (!nonimmediate_operand (operands[1], E_SImode)
              || !nonimmediate_operand (operands[0], E_SImode)
              || GET_MODE (x6) != E_SImode)
            return -1;
          return 982; /* *negsi_ccc_1 */

        case E_DImode:
          if (!nonimmediate_operand (operands[1], E_DImode)
              || !nonimmediate_operand (operands[0], E_DImode)
              || GET_MODE (x6) != E_DImode
              || !
#line 1161 "../../gcc/config/i386/i386.md"
(TARGET_64BIT))
            return -1;
          return 983; /* *negdi_ccc_1 */

        default:
          return -1;
        }

    case CLOBBER:
      x7 = XEXP (x5, 0);
      operands[0] = x7;
      switch (GET_MODE (operands[1]))
        {
        case E_QImode:
          if (!nonimmediate_operand (operands[1], E_QImode)
              || !scratch_operand (operands[0], E_QImode))
            return -1;
          return 984; /* *negqi_ccc_2 */

        case E_HImode:
          if (!nonimmediate_operand (operands[1], E_HImode)
              || !scratch_operand (operands[0], E_HImode))
            return -1;
          return 985; /* *neghi_ccc_2 */

        case E_SImode:
          if (!nonimmediate_operand (operands[1], E_SImode)
              || !scratch_operand (operands[0], E_SImode))
            return -1;
          return 986; /* *negsi_ccc_2 */

        case E_DImode:
          if (!nonimmediate_operand (operands[1], E_DImode)
              || !scratch_operand (operands[0], E_DImode)
              || !
#line 1161 "../../gcc/config/i386/i386.md"
(TARGET_64BIT))
            return -1;
          return 987; /* *negdi_ccc_2 */

        default:
          return -1;
        }

    default:
      return -1;
    }
}

 int
recog_366 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12, x13, x14, x15, x16, x17;
  rtx x18, x19, x20, x21, x22;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  switch (XVECLEN (x3, 0))
    {
    case 1:
      return recog_365 (x1, insn, pnum_clobbers);

    case 2:
      return recog_364 (x1, insn, pnum_clobbers);

    case 3:
      return recog_363 (x1, insn, pnum_clobbers);

    case 4:
      x4 = XVECEXP (x1, 0, 1);
      if (GET_CODE (x4) != CLOBBER)
        return -1;
      x5 = XEXP (x2, 0);
      operands[0] = x5;
      switch (XINT (x3, 1))
        {
        case 22:
          if (pattern814 (x3) != 0)
            return -1;
          x6 = XEXP (x4, 0);
          if (GET_CODE (x6) != REG
              || REGNO (x6) != 17
              || GET_MODE (x6) != E_CCmode
              || !register_operand (operands[0], E_SImode))
            return -1;
          x7 = XVECEXP (x3, 0, 0);
          operands[1] = x7;
          if (!tls_symbolic_operand (operands[1], E_VOIDmode))
            return -1;
          x8 = XVECEXP (x3, 0, 1);
          operands[2] = x8;
          if (!register_operand (operands[2], E_SImode))
            return -1;
          x9 = XVECEXP (x3, 0, 2);
          operands[3] = x9;
          if (!register_operand (operands[3], E_SImode)
              || !
#line 23147 "../../gcc/config/i386/i386.md"
(!TARGET_64BIT && TARGET_GNU2_TLS))
            return -1;
          return 1659; /* *tls_dynamic_gnu2_call_32 */

        case 23:
          if (pnum_clobbers == NULL)
            return -1;
          x7 = XVECEXP (x3, 0, 0);
          if (GET_CODE (x7) != MEM
              || GET_MODE (x7) != E_BLKmode)
            return -1;
          switch (pattern1150 (x1))
            {
            case 0:
              if (!(
#line 25974 "../../gcc/config/i386/i386.md"
(!(fixed_regs[AX_REG] || fixed_regs[CX_REG] || fixed_regs[DI_REG])
   && ix86_check_no_addr_space (insn)) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode)))
                return -1;
              *pnum_clobbers = 1;
              return 1787; /* *strlenqi_1 */

            case 1:
              if (!(
#line 25974 "../../gcc/config/i386/i386.md"
(!(fixed_regs[AX_REG] || fixed_regs[CX_REG] || fixed_regs[DI_REG])
   && ix86_check_no_addr_space (insn)) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode)))
                return -1;
              *pnum_clobbers = 1;
              return 1788; /* *strlenqi_1 */

            default:
              return -1;
            }

        case 153:
          x8 = XVECEXP (x3, 0, 1);
          if (GET_CODE (x8) != MEM)
            return -1;
          x10 = XEXP (x8, 0);
          if (GET_CODE (x10) != UNSPEC
              || XVECLEN (x10, 0) != 3
              || XINT (x10, 1) != 154)
            return -1;
          x9 = XVECEXP (x3, 0, 2);
          if (GET_CODE (x9) != MEM
              || GET_MODE (x9) != E_BLKmode)
            return -1;
          x11 = XEXP (x9, 0);
          if (GET_CODE (x11) != SCRATCH)
            return -1;
          x12 = XVECEXP (x10, 0, 2);
          if (!const1248_operand (x12, E_SImode))
            return -1;
          x6 = XEXP (x4, 0);
          operands[1] = x6;
          x7 = XVECEXP (x3, 0, 0);
          switch (GET_CODE (x7))
            {
            case REG:
            case SUBREG:
              operands[2] = x7;
              operands[7] = x8;
              x13 = XVECEXP (x10, 0, 0);
              operands[3] = x13;
              x14 = XVECEXP (x10, 0, 1);
              operands[4] = x14;
              operands[6] = x12;
              x15 = XVECEXP (x3, 0, 3);
              operands[5] = x15;
              switch (GET_MODE (operands[0]))
                {
                case E_V2DImode:
                  switch (pattern1787 (x3, 
E_V2DImode, 
E_DImode))
                    {
                    case 0:
                      if (!(
#line 29292 "../../gcc/config/i386/sse.md"
(TARGET_AVX2) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode)))
                        return -1;
                      return 9668; /* *avx2_gathersiv2di */

                    case 1:
                      if (!(
#line 29355 "../../gcc/config/i386/sse.md"
(TARGET_AVX2) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode)))
                        return -1;
                      return 9700; /* *avx2_gatherdiv2di */

                    case 2:
                      if (!(
#line 29292 "../../gcc/config/i386/sse.md"
(TARGET_AVX2) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode)))
                        return -1;
                      return 9676; /* *avx2_gathersiv2di */

                    case 3:
                      if (!(
#line 29355 "../../gcc/config/i386/sse.md"
(TARGET_AVX2) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode)))
                        return -1;
                      return 9708; /* *avx2_gatherdiv2di */

                    default:
                      return -1;
                    }

                case E_V2DFmode:
                  switch (pattern1787 (x3, 
E_V2DFmode, 
E_DFmode))
                    {
                    case 0:
                      if (!(
#line 29292 "../../gcc/config/i386/sse.md"
(TARGET_AVX2) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode)))
                        return -1;
                      return 9669; /* *avx2_gathersiv2df */

                    case 1:
                      if (!(
#line 29355 "../../gcc/config/i386/sse.md"
(TARGET_AVX2) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode)))
                        return -1;
                      return 9701; /* *avx2_gatherdiv2df */

                    case 2:
                      if (!(
#line 29292 "../../gcc/config/i386/sse.md"
(TARGET_AVX2) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode)))
                        return -1;
                      return 9677; /* *avx2_gathersiv2df */

                    case 3:
                      if (!(
#line 29355 "../../gcc/config/i386/sse.md"
(TARGET_AVX2) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode)))
                        return -1;
                      return 9709; /* *avx2_gatherdiv2df */

                    default:
                      return -1;
                    }

                case E_V4DImode:
                  switch (pattern1789 (x3, 
E_V4DImode, 
E_DImode))
                    {
                    case 0:
                      if (!(
#line 29292 "../../gcc/config/i386/sse.md"
(TARGET_AVX2) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode)))
                        return -1;
                      return 9670; /* *avx2_gathersiv4di */

                    case 1:
                      if (!(
#line 29355 "../../gcc/config/i386/sse.md"
(TARGET_AVX2) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode)))
                        return -1;
                      return 9702; /* *avx2_gatherdiv4di */

                    case 2:
                      if (!(
#line 29292 "../../gcc/config/i386/sse.md"
(TARGET_AVX2) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode)))
                        return -1;
                      return 9678; /* *avx2_gathersiv4di */

                    case 3:
                      if (!(
#line 29355 "../../gcc/config/i386/sse.md"
(TARGET_AVX2) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode)))
                        return -1;
                      return 9710; /* *avx2_gatherdiv4di */

                    default:
                      return -1;
                    }

                case E_V4DFmode:
                  switch (pattern1789 (x3, 
E_V4DFmode, 
E_DFmode))
                    {
                    case 0:
                      if (!(
#line 29292 "../../gcc/config/i386/sse.md"
(TARGET_AVX2) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode)))
                        return -1;
                      return 9671; /* *avx2_gathersiv4df */

                    case 1:
                      if (!(
#line 29355 "../../gcc/config/i386/sse.md"
(TARGET_AVX2) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode)))
                        return -1;
                      return 9703; /* *avx2_gatherdiv4df */

                    case 2:
                      if (!(
#line 29292 "../../gcc/config/i386/sse.md"
(TARGET_AVX2) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode)))
                        return -1;
                      return 9679; /* *avx2_gathersiv4df */

                    case 3:
                      if (!(
#line 29355 "../../gcc/config/i386/sse.md"
(TARGET_AVX2) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode)))
                        return -1;
                      return 9711; /* *avx2_gatherdiv4df */

                    default:
                      return -1;
                    }

                case E_V4SImode:
                  switch (pattern1787 (x3, 
E_V4SImode, 
E_SImode))
                    {
                    case 0:
                      if (!(
#line 29292 "../../gcc/config/i386/sse.md"
(TARGET_AVX2) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode)))
                        return -1;
                      return 9672; /* *avx2_gathersiv4si */

                    case 1:
                      if (!(
#line 29355 "../../gcc/config/i386/sse.md"
(TARGET_AVX2) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode)))
                        return -1;
                      return 9704; /* *avx2_gatherdiv4si */

                    case 2:
                      if (!(
#line 29292 "../../gcc/config/i386/sse.md"
(TARGET_AVX2) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode)))
                        return -1;
                      return 9680; /* *avx2_gathersiv4si */

                    case 3:
                      if (!(
#line 29355 "../../gcc/config/i386/sse.md"
(TARGET_AVX2) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode)))
                        return -1;
                      return 9712; /* *avx2_gatherdiv4si */

                    default:
                      return -1;
                    }

                case E_V4SFmode:
                  switch (pattern1787 (x3, 
E_V4SFmode, 
E_SFmode))
                    {
                    case 0:
                      if (!(
#line 29292 "../../gcc/config/i386/sse.md"
(TARGET_AVX2) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode)))
                        return -1;
                      return 9673; /* *avx2_gathersiv4sf */

                    case 1:
                      if (!(
#line 29355 "../../gcc/config/i386/sse.md"
(TARGET_AVX2) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode)))
                        return -1;
                      return 9705; /* *avx2_gatherdiv4sf */

                    case 2:
                      if (!(
#line 29292 "../../gcc/config/i386/sse.md"
(TARGET_AVX2) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode)))
                        return -1;
                      return 9681; /* *avx2_gathersiv4sf */

                    case 3:
                      if (!(
#line 29355 "../../gcc/config/i386/sse.md"
(TARGET_AVX2) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode)))
                        return -1;
                      return 9713; /* *avx2_gatherdiv4sf */

                    default:
                      return -1;
                    }

                case E_V8SImode:
                  if (pattern1790 (x3, 
E_V8SImode, 
E_SImode) != 0)
                    return -1;
                  switch (GET_MODE (operands[2]))
                    {
                    case E_V8SImode:
                      if (!register_operand (operands[2], E_V8SImode)
                          || !register_operand (operands[4], E_V8SImode))
                        return -1;
                      switch (pattern1835 (x10, 
E_V8SImode))
                        {
                        case 0:
                          if (!(
#line 29292 "../../gcc/config/i386/sse.md"
(TARGET_AVX2) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode)))
                            return -1;
                          return 9674; /* *avx2_gathersiv8si */

                        case 1:
                          if (!(
#line 29292 "../../gcc/config/i386/sse.md"
(TARGET_AVX2) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode)))
                            return -1;
                          return 9682; /* *avx2_gathersiv8si */

                        default:
                          return -1;
                        }

                    case E_V4SImode:
                      switch (pattern1836 (x10, 
E_V4SImode, 
E_V4DImode))
                        {
                        case 0:
                          if (!(
#line 29355 "../../gcc/config/i386/sse.md"
(TARGET_AVX2) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode)))
                            return -1;
                          return 9706; /* *avx2_gatherdiv8si */

                        case 1:
                          if (!(
#line 29355 "../../gcc/config/i386/sse.md"
(TARGET_AVX2) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode)))
                            return -1;
                          return 9714; /* *avx2_gatherdiv8si */

                        default:
                          return -1;
                        }

                    default:
                      return -1;
                    }

                case E_V8SFmode:
                  if (pattern1790 (x3, 
E_V8SFmode, 
E_SFmode) != 0)
                    return -1;
                  switch (GET_MODE (operands[2]))
                    {
                    case E_V8SFmode:
                      switch (pattern1836 (x10, 
E_V8SFmode, 
E_V8SImode))
                        {
                        case 0:
                          if (!(
#line 29292 "../../gcc/config/i386/sse.md"
(TARGET_AVX2) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode)))
                            return -1;
                          return 9675; /* *avx2_gathersiv8sf */

                        case 1:
                          if (!(
#line 29292 "../../gcc/config/i386/sse.md"
(TARGET_AVX2) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode)))
                            return -1;
                          return 9683; /* *avx2_gathersiv8sf */

                        default:
                          return -1;
                        }

                    case E_V4SFmode:
                      switch (pattern1836 (x10, 
E_V4SFmode, 
E_V4DImode))
                        {
                        case 0:
                          if (!(
#line 29355 "../../gcc/config/i386/sse.md"
(TARGET_AVX2) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode)))
                            return -1;
                          return 9707; /* *avx2_gatherdiv8sf */

                        case 1:
                          if (!(
#line 29355 "../../gcc/config/i386/sse.md"
(TARGET_AVX2) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode)))
                            return -1;
                          return 9715; /* *avx2_gatherdiv8sf */

                        default:
                          return -1;
                        }

                    default:
                      return -1;
                    }

                default:
                  return -1;
                }

            case PC:
              operands[6] = x8;
              x13 = XVECEXP (x10, 0, 0);
              operands[2] = x13;
              x14 = XVECEXP (x10, 0, 1);
              operands[3] = x14;
              operands[5] = x12;
              x15 = XVECEXP (x3, 0, 3);
              operands[4] = x15;
              switch (GET_MODE (operands[0]))
                {
                case E_V2DImode:
                  switch (pattern1770 (x3, 
E_V2DImode, 
E_DImode))
                    {
                    case 0:
                      if (!(
#line 29313 "../../gcc/config/i386/sse.md"
(TARGET_AVX2) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode)))
                        return -1;
                      return 9684; /* *avx2_gathersiv2di_2 */

                    case 1:
                      if (!(
#line 29376 "../../gcc/config/i386/sse.md"
(TARGET_AVX2) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode)))
                        return -1;
                      return 9716; /* *avx2_gatherdiv2di_2 */

                    case 2:
                      if (!(
#line 29313 "../../gcc/config/i386/sse.md"
(TARGET_AVX2) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode)))
                        return -1;
                      return 9692; /* *avx2_gathersiv2di_2 */

                    case 3:
                      if (!(
#line 29376 "../../gcc/config/i386/sse.md"
(TARGET_AVX2) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode)))
                        return -1;
                      return 9724; /* *avx2_gatherdiv2di_2 */

                    default:
                      return -1;
                    }

                case E_V2DFmode:
                  switch (pattern1770 (x3, 
E_V2DFmode, 
E_DFmode))
                    {
                    case 0:
                      if (!(
#line 29313 "../../gcc/config/i386/sse.md"
(TARGET_AVX2) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode)))
                        return -1;
                      return 9685; /* *avx2_gathersiv2df_2 */

                    case 1:
                      if (!(
#line 29376 "../../gcc/config/i386/sse.md"
(TARGET_AVX2) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode)))
                        return -1;
                      return 9717; /* *avx2_gatherdiv2df_2 */

                    case 2:
                      if (!(
#line 29313 "../../gcc/config/i386/sse.md"
(TARGET_AVX2) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode)))
                        return -1;
                      return 9693; /* *avx2_gathersiv2df_2 */

                    case 3:
                      if (!(
#line 29376 "../../gcc/config/i386/sse.md"
(TARGET_AVX2) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode)))
                        return -1;
                      return 9725; /* *avx2_gatherdiv2df_2 */

                    default:
                      return -1;
                    }

                case E_V4DImode:
                  switch (pattern1772 (x3, 
E_V4DImode, 
E_DImode))
                    {
                    case 0:
                      if (!(
#line 29313 "../../gcc/config/i386/sse.md"
(TARGET_AVX2) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode)))
                        return -1;
                      return 9686; /* *avx2_gathersiv4di_2 */

                    case 1:
                      if (!(
#line 29376 "../../gcc/config/i386/sse.md"
(TARGET_AVX2) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode)))
                        return -1;
                      return 9718; /* *avx2_gatherdiv4di_2 */

                    case 2:
                      if (!(
#line 29313 "../../gcc/config/i386/sse.md"
(TARGET_AVX2) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode)))
                        return -1;
                      return 9694; /* *avx2_gathersiv4di_2 */

                    case 3:
                      if (!(
#line 29376 "../../gcc/config/i386/sse.md"
(TARGET_AVX2) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode)))
                        return -1;
                      return 9726; /* *avx2_gatherdiv4di_2 */

                    default:
                      return -1;
                    }

                case E_V4DFmode:
                  switch (pattern1772 (x3, 
E_V4DFmode, 
E_DFmode))
                    {
                    case 0:
                      if (!(
#line 29313 "../../gcc/config/i386/sse.md"
(TARGET_AVX2) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode)))
                        return -1;
                      return 9687; /* *avx2_gathersiv4df_2 */

                    case 1:
                      if (!(
#line 29376 "../../gcc/config/i386/sse.md"
(TARGET_AVX2) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode)))
                        return -1;
                      return 9719; /* *avx2_gatherdiv4df_2 */

                    case 2:
                      if (!(
#line 29313 "../../gcc/config/i386/sse.md"
(TARGET_AVX2) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode)))
                        return -1;
                      return 9695; /* *avx2_gathersiv4df_2 */

                    case 3:
                      if (!(
#line 29376 "../../gcc/config/i386/sse.md"
(TARGET_AVX2) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode)))
                        return -1;
                      return 9727; /* *avx2_gatherdiv4df_2 */

                    default:
                      return -1;
                    }

                case E_V4SImode:
                  switch (pattern1770 (x3, 
E_V4SImode, 
E_SImode))
                    {
                    case 0:
                      if (!(
#line 29313 "../../gcc/config/i386/sse.md"
(TARGET_AVX2) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode)))
                        return -1;
                      return 9688; /* *avx2_gathersiv4si_2 */

                    case 1:
                      if (!(
#line 29376 "../../gcc/config/i386/sse.md"
(TARGET_AVX2) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode)))
                        return -1;
                      return 9720; /* *avx2_gatherdiv4si_2 */

                    case 2:
                      if (!(
#line 29313 "../../gcc/config/i386/sse.md"
(TARGET_AVX2) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode)))
                        return -1;
                      return 9696; /* *avx2_gathersiv4si_2 */

                    case 3:
                      if (!(
#line 29376 "../../gcc/config/i386/sse.md"
(TARGET_AVX2) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode)))
                        return -1;
                      return 9728; /* *avx2_gatherdiv4si_2 */

                    default:
                      return -1;
                    }

                case E_V4SFmode:
                  switch (pattern1770 (x3, 
E_V4SFmode, 
E_SFmode))
                    {
                    case 0:
                      if (!(
#line 29313 "../../gcc/config/i386/sse.md"
(TARGET_AVX2) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode)))
                        return -1;
                      return 9689; /* *avx2_gathersiv4sf_2 */

                    case 1:
                      if (!(
#line 29376 "../../gcc/config/i386/sse.md"
(TARGET_AVX2) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode)))
                        return -1;
                      return 9721; /* *avx2_gatherdiv4sf_2 */

                    case 2:
                      if (!(
#line 29313 "../../gcc/config/i386/sse.md"
(TARGET_AVX2) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode)))
                        return -1;
                      return 9697; /* *avx2_gathersiv4sf_2 */

                    case 3:
                      if (!(
#line 29376 "../../gcc/config/i386/sse.md"
(TARGET_AVX2) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode)))
                        return -1;
                      return 9729; /* *avx2_gatherdiv4sf_2 */

                    default:
                      return -1;
                    }

                case E_V8SImode:
                  switch (pattern1773 (x3, 
E_V8SImode, 
E_SImode))
                    {
                    case 0:
                      switch (pattern1830 (
E_SImode))
                        {
                        case 0:
                          if (!(
#line 29313 "../../gcc/config/i386/sse.md"
(TARGET_AVX2) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode)))
                            return -1;
                          return 9690; /* *avx2_gathersiv8si_2 */

                        case 1:
                          if (!(
#line 29376 "../../gcc/config/i386/sse.md"
(TARGET_AVX2) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode)))
                            return -1;
                          return 9722; /* *avx2_gatherdiv8si_2 */

                        default:
                          return -1;
                        }

                    case 1:
                      switch (pattern1830 (
E_DImode))
                        {
                        case 0:
                          if (!(
#line 29313 "../../gcc/config/i386/sse.md"
(TARGET_AVX2) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode)))
                            return -1;
                          return 9698; /* *avx2_gathersiv8si_2 */

                        case 1:
                          if (!(
#line 29376 "../../gcc/config/i386/sse.md"
(TARGET_AVX2) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode)))
                            return -1;
                          return 9730; /* *avx2_gatherdiv8si_2 */

                        default:
                          return -1;
                        }

                    default:
                      return -1;
                    }

                case E_V8SFmode:
                  switch (pattern1773 (x3, 
E_V8SFmode, 
E_SFmode))
                    {
                    case 0:
                      switch (pattern1831 (
E_SImode))
                        {
                        case 0:
                          if (!(
#line 29313 "../../gcc/config/i386/sse.md"
(TARGET_AVX2) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode)))
                            return -1;
                          return 9691; /* *avx2_gathersiv8sf_2 */

                        case 1:
                          if (!(
#line 29376 "../../gcc/config/i386/sse.md"
(TARGET_AVX2) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode)))
                            return -1;
                          return 9723; /* *avx2_gatherdiv8sf_2 */

                        default:
                          return -1;
                        }

                    case 1:
                      switch (pattern1831 (
E_DImode))
                        {
                        case 0:
                          if (!(
#line 29313 "../../gcc/config/i386/sse.md"
(TARGET_AVX2) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode)))
                            return -1;
                          return 9699; /* *avx2_gathersiv8sf_2 */

                        case 1:
                          if (!(
#line 29376 "../../gcc/config/i386/sse.md"
(TARGET_AVX2) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode)))
                            return -1;
                          return 9731; /* *avx2_gatherdiv8sf_2 */

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

    case 5:
      if (XINT (x3, 1) != 131
          || pattern553 (x1, 
131, 
5) != 0)
        return -1;
      x7 = XVECEXP (x3, 0, 0);
      operands[1] = x7;
      if (!register_operand (operands[1], E_V16QImode))
        return -1;
      x8 = XVECEXP (x3, 0, 1);
      operands[2] = x8;
      if (!register_operand (operands[2], E_SImode))
        return -1;
      x9 = XVECEXP (x3, 0, 2);
      operands[3] = x9;
      if (!nonimmediate_operand (operands[3], E_V16QImode))
        return -1;
      x15 = XVECEXP (x3, 0, 3);
      operands[4] = x15;
      if (!register_operand (operands[4], E_SImode))
        return -1;
      x16 = XVECEXP (x3, 0, 4);
      operands[5] = x16;
      if (!const_0_to_255_operand (operands[5], E_SImode))
        return -1;
      x4 = XVECEXP (x1, 0, 1);
      x17 = XEXP (x4, 1);
      x18 = XVECEXP (x17, 0, 0);
      if (!rtx_equal_p (x18, operands[1]))
        return -1;
      x19 = XVECEXP (x17, 0, 1);
      if (!rtx_equal_p (x19, operands[2]))
        return -1;
      x20 = XVECEXP (x17, 0, 2);
      if (!rtx_equal_p (x20, operands[3]))
        return -1;
      x21 = XVECEXP (x17, 0, 3);
      if (!rtx_equal_p (x21, operands[4]))
        return -1;
      x22 = XVECEXP (x17, 0, 4);
      if (!rtx_equal_p (x22, operands[5]))
        return -1;
      switch (pattern1768 (x3))
        {
        case 0:
          if (!
#line 25895 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_2))
            return -1;
          return 8975; /* sse4_2_pcmpestri */

        case 1:
          if (!
#line 25923 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_2))
            return -1;
          return 8976; /* sse4_2_pcmpestrm */

        default:
          return -1;
        }

    default:
      return -1;
    }
}

 int
recog_387 (rtx x1 ATTRIBUTE_UNUSED,
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
      return recog_383 (x1, insn, pnum_clobbers);

    case NEG:
      return recog_386 (x1, insn, pnum_clobbers);

    case REG:
    case SUBREG:
    case MEM:
      operands[1] = x4;
      x5 = XEXP (x2, 0);
      if (GET_CODE (x5) != REG
          || REGNO (x5) != 17)
        return -1;
      x6 = XEXP (x3, 1);
      operands[2] = x6;
      res = recog_379 (x1, insn, pnum_clobbers);
      if (res >= 0)
        return res;
      if (x6 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
        return -1;
      x7 = XVECEXP (x1, 0, 1);
      if (GET_CODE (x7) != SET)
        return -1;
      x8 = XEXP (x7, 0);
      operands[0] = x8;
      x9 = XEXP (x7, 1);
      switch (GET_CODE (x9))
        {
        case CTZ:
          x10 = XEXP (x9, 0);
          if (!rtx_equal_p (x10, operands[1]))
            return -1;
          switch (GET_MODE (x5))
            {
            case E_CCCmode:
              if (GET_MODE (x3) != E_CCCmode)
                return -1;
              switch (pattern1495 (x9))
                {
                case 0:
                  if (!
#line 21001 "../../gcc/config/i386/i386.md"
(TARGET_BMI))
                    return -1;
                  return 1508; /* *tzcntsi_1 */

                case 1:
                  if (!(
#line 21001 "../../gcc/config/i386/i386.md"
(TARGET_BMI) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                    return -1;
                  return 1509; /* *tzcntdi_1 */

                default:
                  return -1;
                }

            case E_CCZmode:
              if (GET_MODE (x3) != E_CCZmode)
                return -1;
              switch (pattern1495 (x9))
                {
                case 0:
                  return 1512; /* *bsfsi_1 */

                case 1:
                  if (!
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT))
                    return -1;
                  return 1513; /* *bsfdi_1 */

                default:
                  return -1;
                }

            default:
              return -1;
            }

        case MINUS:
          x10 = XEXP (x9, 0);
          if (GET_CODE (x10) != CONST_INT)
            return -1;
          x11 = XEXP (x9, 1);
          if (GET_CODE (x11) != CLZ
              || GET_MODE (x5) != E_CCZmode
              || GET_MODE (x3) != E_CCZmode)
            return -1;
          x12 = XEXP (x11, 0);
          if (!rtx_equal_p (x12, operands[1]))
            return -1;
          switch (XWINT (x10, 0))
            {
            case 63L:
              if (pattern1626 (x9, 
E_DImode) != 0
                  || !
#line 21226 "../../gcc/config/i386/i386.md"
(TARGET_64BIT))
                return -1;
              return 1524; /* bsr_rex64 */

            case 31L:
              if (pattern1626 (x9, 
E_SImode) != 0)
                return -1;
              return 1527; /* bsr */

            default:
              return -1;
            }

        default:
          return -1;
        }

    case MINUS:
      x6 = XEXP (x3, 1);
      if (x6 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
        return -1;
      x5 = XEXP (x2, 0);
      if (GET_CODE (x5) != REG
          || REGNO (x5) != 17)
        return -1;
      x7 = XVECEXP (x1, 0, 1);
      if (GET_CODE (x7) != SET)
        return -1;
      x13 = XEXP (x4, 0);
      switch (GET_CODE (x13))
        {
        case REG:
        case SUBREG:
        case MEM:
          operands[1] = x13;
          x14 = XEXP (x4, 1);
          operands[2] = x14;
          x8 = XEXP (x7, 0);
          operands[0] = x8;
          x9 = XEXP (x7, 1);
          switch (GET_CODE (x9))
            {
            case MINUS:
              switch (pattern1425 (x1))
                {
                case 0:
                  if (!
#line 8276 "../../gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (MINUS, QImode, operands, TARGET_APX_NDD)))
                    return -1;
                  return 411; /* *subqi_2 */

                case 1:
                  if (!
#line 8276 "../../gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (MINUS, HImode, operands, TARGET_APX_NDD)))
                    return -1;
                  return 412; /* *subhi_2 */

                case 2:
                  if (!
#line 8276 "../../gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (MINUS, SImode, operands, TARGET_APX_NDD)))
                    return -1;
                  return 413; /* *subsi_2 */

                case 3:
                  if (!(
#line 8276 "../../gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (MINUS, DImode, operands, TARGET_APX_NDD)) && 
#line 1161 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                    return -1;
                  return 414; /* *subdi_2 */

                default:
                  return -1;
                }

            case ZERO_EXTEND:
              if (pattern1426 (x1, 
MINUS) != 0
                  || !
#line 8297 "../../gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (MINUS, SImode, operands, TARGET_APX_NDD)))
                return -1;
              return 415; /* *subsi_2_zext */

            default:
              return -1;
            }

        case UNSPEC_VOLATILE:
          if (XVECLEN (x13, 0) != 2
              || XINT (x13, 1) != 110)
            return -1;
          switch (pattern1236 (x1, 
MINUS))
            {
            case 0:
              return 11080; /* atomic_sub_fetch_cmp_0qi_1 */

            case 1:
              return 11081; /* atomic_sub_fetch_cmp_0hi_1 */

            case 2:
              return 11082; /* atomic_sub_fetch_cmp_0si_1 */

            case 3:
              if (!
#line 1161 "../../gcc/config/i386/i386.md"
(TARGET_64BIT))
                return -1;
              return 11083; /* atomic_sub_fetch_cmp_0di_1 */

            default:
              return -1;
            }

        default:
          return -1;
        }

    case ZERO_EXTEND:
      return recog_384 (x1, insn, pnum_clobbers);

    case AND:
      return recog_385 (x1, insn, pnum_clobbers);

    case IOR:
      switch (pattern364 (x1, 
IOR))
        {
        case 0:
          if (general_operand (operands[2], E_QImode))
            {
              switch (pattern950 (x1, 
IOR))
                {
                case 0:
                  if (
#line 13137 "../../gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)))
                    return 783; /* *iorqi_exthi_1_cc */
                  break;

                case 1:
                  if (
#line 13137 "../../gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)))
                    return 786; /* *iorqi_extsi_1_cc */
                  break;

                case 2:
                  if ((
#line 13137 "../../gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)) && 
#line 1164 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                    return 789; /* *iorqi_extdi_1_cc */
                  break;

                default:
                  break;
                }
            }
          x5 = XEXP (x2, 0);
          if (GET_CODE (x5) != REG)
            return -1;
          switch (pattern952 (x1))
            {
            case 0:
              x7 = XVECEXP (x1, 0, 1);
              x9 = XEXP (x7, 1);
              switch (GET_CODE (x9))
                {
                case IOR:
                  switch (pattern1430 (x1))
                    {
                    case 0:
                      if (!
#line 13881 "../../gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && ix86_binary_operator_ok (IOR, QImode, operands, TARGET_APX_NDD)))
                        return -1;
                      return 872; /* *iorqi_2 */

                    case 1:
                      if (!
#line 13881 "../../gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && ix86_binary_operator_ok (IOR, HImode, operands, TARGET_APX_NDD)))
                        return -1;
                      return 874; /* *iorhi_2 */

                    case 2:
                      if (!
#line 13881 "../../gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && ix86_binary_operator_ok (IOR, SImode, operands, TARGET_APX_NDD)))
                        return -1;
                      return 876; /* *iorsi_2 */

                    case 3:
                      if (!(
#line 13881 "../../gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && ix86_binary_operator_ok (IOR, DImode, operands, TARGET_APX_NDD)) && 
#line 1161 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                        return -1;
                      return 878; /* *iordi_2 */

                    case 4:
                      if (!
#line 13919 "../../gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_match_ccmode (insn, CCNOmode)
   && ix86_binary_operator_ok (IOR, SImode, operands, TARGET_APX_NDD)))
                        return -1;
                      return 882; /* *iorsi_2_zext_imm */

                    default:
                      return -1;
                    }

                case ZERO_EXTEND:
                  if (pattern1426 (x1, 
IOR) != 0
                      || !
#line 13901 "../../gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_match_ccmode (insn, CCNOmode)
   && ix86_binary_operator_ok (IOR, SImode, operands, TARGET_APX_NDD)))
                    return -1;
                  return 880; /* *iorsi_2_zext */

                default:
                  return -1;
                }

            case 1:
              if (!
#line 13935 "../../gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
                return -1;
              return 884; /* *iorqi_3 */

            case 2:
              if (!
#line 13935 "../../gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
                return -1;
              return 886; /* *iorhi_3 */

            case 3:
              if (!
#line 13935 "../../gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
                return -1;
              return 888; /* *iorsi_3 */

            case 4:
              if (!(
#line 13935 "../../gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 1161 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return -1;
              return 890; /* *iordi_3 */

            default:
              return -1;
            }

        case 1:
          return 11085; /* atomic_or_fetch_cmp_0qi_1 */

        case 2:
          return 11088; /* atomic_or_fetch_cmp_0hi_1 */

        case 3:
          return 11091; /* atomic_or_fetch_cmp_0si_1 */

        case 4:
          if (!
#line 1161 "../../gcc/config/i386/i386.md"
(TARGET_64BIT))
            return -1;
          return 11094; /* atomic_or_fetch_cmp_0di_1 */

        default:
          return -1;
        }

    case XOR:
      switch (pattern364 (x1, 
XOR))
        {
        case 0:
          if (general_operand (operands[2], E_QImode))
            {
              switch (pattern950 (x1, 
XOR))
                {
                case 0:
                  if (
#line 13137 "../../gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)))
                    return 784; /* *xorqi_exthi_1_cc */
                  break;

                case 1:
                  if (
#line 13137 "../../gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)))
                    return 787; /* *xorqi_extsi_1_cc */
                  break;

                case 2:
                  if ((
#line 13137 "../../gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)) && 
#line 1164 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                    return 790; /* *xorqi_extdi_1_cc */
                  break;

                default:
                  break;
                }
            }
          x5 = XEXP (x2, 0);
          if (GET_CODE (x5) != REG)
            return -1;
          switch (pattern952 (x1))
            {
            case 0:
              x7 = XVECEXP (x1, 0, 1);
              x9 = XEXP (x7, 1);
              switch (GET_CODE (x9))
                {
                case XOR:
                  switch (pattern1430 (x1))
                    {
                    case 0:
                      if (!
#line 13881 "../../gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && ix86_binary_operator_ok (XOR, QImode, operands, TARGET_APX_NDD)))
                        return -1;
                      return 873; /* *xorqi_2 */

                    case 1:
                      if (!
#line 13881 "../../gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && ix86_binary_operator_ok (XOR, HImode, operands, TARGET_APX_NDD)))
                        return -1;
                      return 875; /* *xorhi_2 */

                    case 2:
                      if (!
#line 13881 "../../gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && ix86_binary_operator_ok (XOR, SImode, operands, TARGET_APX_NDD)))
                        return -1;
                      return 877; /* *xorsi_2 */

                    case 3:
                      if (!(
#line 13881 "../../gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && ix86_binary_operator_ok (XOR, DImode, operands, TARGET_APX_NDD)) && 
#line 1161 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                        return -1;
                      return 879; /* *xordi_2 */

                    case 4:
                      if (!
#line 13919 "../../gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_match_ccmode (insn, CCNOmode)
   && ix86_binary_operator_ok (XOR, SImode, operands, TARGET_APX_NDD)))
                        return -1;
                      return 883; /* *xorsi_2_zext_imm */

                    default:
                      return -1;
                    }

                case ZERO_EXTEND:
                  if (pattern1426 (x1, 
XOR) != 0
                      || !
#line 13901 "../../gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_match_ccmode (insn, CCNOmode)
   && ix86_binary_operator_ok (XOR, SImode, operands, TARGET_APX_NDD)))
                    return -1;
                  return 881; /* *xorsi_2_zext */

                default:
                  return -1;
                }

            case 1:
              if (!
#line 13935 "../../gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
                return -1;
              return 885; /* *xorqi_3 */

            case 2:
              if (!
#line 13935 "../../gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
                return -1;
              return 887; /* *xorhi_3 */

            case 3:
              if (!
#line 13935 "../../gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
                return -1;
              return 889; /* *xorsi_3 */

            case 4:
              if (!(
#line 13935 "../../gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 1161 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return -1;
              return 891; /* *xordi_3 */

            default:
              return -1;
            }

        case 1:
          return 11086; /* atomic_xor_fetch_cmp_0qi_1 */

        case 2:
          return 11089; /* atomic_xor_fetch_cmp_0hi_1 */

        case 3:
          return 11092; /* atomic_xor_fetch_cmp_0si_1 */

        case 4:
          if (!
#line 1161 "../../gcc/config/i386/i386.md"
(TARGET_64BIT))
            return -1;
          return 11095; /* atomic_xor_fetch_cmp_0di_1 */

        default:
          return -1;
        }

    case NOT:
      x6 = XEXP (x3, 1);
      if (x6 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
        return -1;
      x5 = XEXP (x2, 0);
      if (GET_CODE (x5) != REG
          || REGNO (x5) != 17)
        return -1;
      x7 = XVECEXP (x1, 0, 1);
      if (GET_CODE (x7) != SET)
        return -1;
      x13 = XEXP (x4, 0);
      operands[1] = x13;
      x8 = XEXP (x7, 0);
      operands[0] = x8;
      x9 = XEXP (x7, 1);
      switch (GET_CODE (x9))
        {
        case NOT:
          switch (pattern1238 (x1))
            {
            case 0:
              if (!
#line 15078 "../../gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && ix86_unary_operator_ok (NOT, QImode, operands, TARGET_APX_NDD)))
                return -1;
              return 1044; /* *one_cmplqi2_2 */

            case 1:
              if (!
#line 15078 "../../gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && ix86_unary_operator_ok (NOT, HImode, operands, TARGET_APX_NDD)))
                return -1;
              return 1045; /* *one_cmplhi2_2 */

            case 2:
              if (!
#line 15078 "../../gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && ix86_unary_operator_ok (NOT, SImode, operands, TARGET_APX_NDD)))
                return -1;
              return 1046; /* *one_cmplsi2_2 */

            case 3:
              if (!(
#line 15078 "../../gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && ix86_unary_operator_ok (NOT, DImode, operands, TARGET_APX_NDD)) && 
#line 1161 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return -1;
              return 1047; /* *one_cmpldi2_2 */

            default:
              return -1;
            }

        case ZERO_EXTEND:
          if (pattern1239 (x1, 
NOT) != 0
              || !
#line 15105 "../../gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_match_ccmode (insn, CCNOmode)
   && ix86_unary_operator_ok (NOT, SImode, operands, TARGET_APX_NDD)))
            return -1;
          return 1048; /* *one_cmplsi2_2_zext */

        default:
          return -1;
        }

    case ASHIFT:
      switch (pattern365 (x1))
        {
        case 0:
          x7 = XVECEXP (x1, 0, 1);
          x9 = XEXP (x7, 1);
          switch (GET_CODE (x9))
            {
            case ASHIFT:
              switch (pattern1322 (x1))
                {
                case 0:
                  if (!
#line 16341 "../../gcc/config/i386/i386.md"
((optimize_function_for_size_p (cfun)
    || !TARGET_PARTIAL_FLAG_REG_STALL
    || (operands[2] == const1_rtx
	&& (TARGET_SHIFT1
	    || (TARGET_DOUBLE_WITH_ADD && REG_P (operands[0])))))
   && ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (ASHIFT, QImode, operands, TARGET_APX_NDD)))
                    return -1;
                  return 1110; /* *ashlqi3_cmp */

                case 1:
                  if (!
#line 16341 "../../gcc/config/i386/i386.md"
((optimize_function_for_size_p (cfun)
    || !TARGET_PARTIAL_FLAG_REG_STALL
    || (operands[2] == const1_rtx
	&& (TARGET_SHIFT1
	    || (TARGET_DOUBLE_WITH_ADD && REG_P (operands[0])))))
   && ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (ASHIFT, HImode, operands, TARGET_APX_NDD)))
                    return -1;
                  return 1111; /* *ashlhi3_cmp */

                case 2:
                  if (!
#line 16341 "../../gcc/config/i386/i386.md"
((optimize_function_for_size_p (cfun)
    || !TARGET_PARTIAL_FLAG_REG_STALL
    || (operands[2] == const1_rtx
	&& (TARGET_SHIFT1
	    || (TARGET_DOUBLE_WITH_ADD && REG_P (operands[0])))))
   && ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (ASHIFT, SImode, operands, TARGET_APX_NDD)))
                    return -1;
                  return 1112; /* *ashlsi3_cmp */

                case 3:
                  if (!(
#line 16341 "../../gcc/config/i386/i386.md"
((optimize_function_for_size_p (cfun)
    || !TARGET_PARTIAL_FLAG_REG_STALL
    || (operands[2] == const1_rtx
	&& (TARGET_SHIFT1
	    || (TARGET_DOUBLE_WITH_ADD && REG_P (operands[0])))))
   && ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (ASHIFT, DImode, operands, TARGET_APX_NDD)) && 
#line 1161 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                    return -1;
                  return 1113; /* *ashldi3_cmp */

                default:
                  return -1;
                }

            case ZERO_EXTEND:
              if (pattern1323 (x1, 
ASHIFT) != 0
                  || !
#line 16395 "../../gcc/config/i386/i386.md"
(TARGET_64BIT
   && (optimize_function_for_size_p (cfun)
       || !TARGET_PARTIAL_FLAG_REG_STALL
       || (operands[2] == const1_rtx
	   && (TARGET_SHIFT1
	       || TARGET_DOUBLE_WITH_ADD)))
   && ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (ASHIFT, SImode, operands, TARGET_APX_NDD)))
                return -1;
              return 1114; /* *ashlsi3_cmp_zext */

            default:
              return -1;
            }

        case 1:
          if (!
#line 16448 "../../gcc/config/i386/i386.md"
((optimize_function_for_size_p (cfun)
    || !TARGET_PARTIAL_FLAG_REG_STALL
    || (operands[2] == const1_rtx
	&& (TARGET_SHIFT1
	    || TARGET_DOUBLE_WITH_ADD)))
   && ix86_match_ccmode (insn, CCGOCmode)))
            return -1;
          return 1115; /* *ashlqi3_cconly */

        case 2:
          if (!
#line 16448 "../../gcc/config/i386/i386.md"
((optimize_function_for_size_p (cfun)
    || !TARGET_PARTIAL_FLAG_REG_STALL
    || (operands[2] == const1_rtx
	&& (TARGET_SHIFT1
	    || TARGET_DOUBLE_WITH_ADD)))
   && ix86_match_ccmode (insn, CCGOCmode)))
            return -1;
          return 1116; /* *ashlhi3_cconly */

        case 3:
          if (!
#line 16448 "../../gcc/config/i386/i386.md"
((optimize_function_for_size_p (cfun)
    || !TARGET_PARTIAL_FLAG_REG_STALL
    || (operands[2] == const1_rtx
	&& (TARGET_SHIFT1
	    || TARGET_DOUBLE_WITH_ADD)))
   && ix86_match_ccmode (insn, CCGOCmode)))
            return -1;
          return 1117; /* *ashlsi3_cconly */

        case 4:
          if (!(
#line 16448 "../../gcc/config/i386/i386.md"
((optimize_function_for_size_p (cfun)
    || !TARGET_PARTIAL_FLAG_REG_STALL
    || (operands[2] == const1_rtx
	&& (TARGET_SHIFT1
	    || TARGET_DOUBLE_WITH_ADD)))
   && ix86_match_ccmode (insn, CCGOCmode)) && 
#line 1161 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return -1;
          return 1118; /* *ashldi3_cconly */

        default:
          return -1;
        }

    case LSHIFTRT:
      switch (pattern365 (x1))
        {
        case 0:
          x7 = XVECEXP (x1, 0, 1);
          x9 = XEXP (x7, 1);
          switch (GET_CODE (x9))
            {
            case LSHIFTRT:
              switch (pattern1322 (x1))
                {
                case 0:
                  if (!
#line 17679 "../../gcc/config/i386/i386.md"
((optimize_function_for_size_p (cfun)
    || !TARGET_PARTIAL_FLAG_REG_STALL
    || (operands[2] == const1_rtx
	&& TARGET_SHIFT1))
   && ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (LSHIFTRT, QImode, operands, TARGET_APX_NDD)))
                    return -1;
                  return 1220; /* *lshrqi3_cmp */

                case 1:
                  if (!
#line 17679 "../../gcc/config/i386/i386.md"
((optimize_function_for_size_p (cfun)
    || !TARGET_PARTIAL_FLAG_REG_STALL
    || (operands[2] == const1_rtx
	&& TARGET_SHIFT1))
   && ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (LSHIFTRT, HImode, operands, TARGET_APX_NDD)))
                    return -1;
                  return 1222; /* *lshrhi3_cmp */

                case 2:
                  if (!
#line 17679 "../../gcc/config/i386/i386.md"
((optimize_function_for_size_p (cfun)
    || !TARGET_PARTIAL_FLAG_REG_STALL
    || (operands[2] == const1_rtx
	&& TARGET_SHIFT1))
   && ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (LSHIFTRT, SImode, operands, TARGET_APX_NDD)))
                    return -1;
                  return 1224; /* *lshrsi3_cmp */

                case 3:
                  if (!(
#line 17679 "../../gcc/config/i386/i386.md"
((optimize_function_for_size_p (cfun)
    || !TARGET_PARTIAL_FLAG_REG_STALL
    || (operands[2] == const1_rtx
	&& TARGET_SHIFT1))
   && ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (LSHIFTRT, DImode, operands, TARGET_APX_NDD)) && 
#line 1161 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                    return -1;
                  return 1226; /* *lshrdi3_cmp */

                default:
                  return -1;
                }

            case ZERO_EXTEND:
              if (pattern1323 (x1, 
LSHIFTRT) != 0
                  || !
#line 17714 "../../gcc/config/i386/i386.md"
(TARGET_64BIT
   && (optimize_function_for_size_p (cfun)
       || !TARGET_PARTIAL_FLAG_REG_STALL
       || (operands[2] == const1_rtx
	   && TARGET_SHIFT1))
   && ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (LSHIFTRT, SImode, operands, TARGET_APX_NDD)))
                return -1;
              return 1228; /* *lshrsi3_cmp_zext */

            default:
              return -1;
            }

        case 1:
          if (!
#line 17750 "../../gcc/config/i386/i386.md"
((optimize_function_for_size_p (cfun)
    || !TARGET_PARTIAL_FLAG_REG_STALL
    || (operands[2] == const1_rtx
	&& TARGET_SHIFT1))
   && ix86_match_ccmode (insn, CCGOCmode)))
            return -1;
          return 1230; /* *lshrqi3_cconly */

        case 2:
          if (!
#line 17750 "../../gcc/config/i386/i386.md"
((optimize_function_for_size_p (cfun)
    || !TARGET_PARTIAL_FLAG_REG_STALL
    || (operands[2] == const1_rtx
	&& TARGET_SHIFT1))
   && ix86_match_ccmode (insn, CCGOCmode)))
            return -1;
          return 1232; /* *lshrhi3_cconly */

        case 3:
          if (!
#line 17750 "../../gcc/config/i386/i386.md"
((optimize_function_for_size_p (cfun)
    || !TARGET_PARTIAL_FLAG_REG_STALL
    || (operands[2] == const1_rtx
	&& TARGET_SHIFT1))
   && ix86_match_ccmode (insn, CCGOCmode)))
            return -1;
          return 1234; /* *lshrsi3_cconly */

        case 4:
          if (!(
#line 17750 "../../gcc/config/i386/i386.md"
((optimize_function_for_size_p (cfun)
    || !TARGET_PARTIAL_FLAG_REG_STALL
    || (operands[2] == const1_rtx
	&& TARGET_SHIFT1))
   && ix86_match_ccmode (insn, CCGOCmode)) && 
#line 1161 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return -1;
          return 1236; /* *lshrdi3_cconly */

        default:
          return -1;
        }

    case ASHIFTRT:
      switch (pattern365 (x1))
        {
        case 0:
          x7 = XVECEXP (x1, 0, 1);
          x9 = XEXP (x7, 1);
          switch (GET_CODE (x9))
            {
            case ASHIFTRT:
              switch (pattern1322 (x1))
                {
                case 0:
                  if (!
#line 17679 "../../gcc/config/i386/i386.md"
((optimize_function_for_size_p (cfun)
    || !TARGET_PARTIAL_FLAG_REG_STALL
    || (operands[2] == const1_rtx
	&& TARGET_SHIFT1))
   && ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (ASHIFTRT, QImode, operands, TARGET_APX_NDD)))
                    return -1;
                  return 1221; /* *ashrqi3_cmp */

                case 1:
                  if (!
#line 17679 "../../gcc/config/i386/i386.md"
((optimize_function_for_size_p (cfun)
    || !TARGET_PARTIAL_FLAG_REG_STALL
    || (operands[2] == const1_rtx
	&& TARGET_SHIFT1))
   && ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (ASHIFTRT, HImode, operands, TARGET_APX_NDD)))
                    return -1;
                  return 1223; /* *ashrhi3_cmp */

                case 2:
                  if (!
#line 17679 "../../gcc/config/i386/i386.md"
((optimize_function_for_size_p (cfun)
    || !TARGET_PARTIAL_FLAG_REG_STALL
    || (operands[2] == const1_rtx
	&& TARGET_SHIFT1))
   && ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (ASHIFTRT, SImode, operands, TARGET_APX_NDD)))
                    return -1;
                  return 1225; /* *ashrsi3_cmp */

                case 3:
                  if (!(
#line 17679 "../../gcc/config/i386/i386.md"
((optimize_function_for_size_p (cfun)
    || !TARGET_PARTIAL_FLAG_REG_STALL
    || (operands[2] == const1_rtx
	&& TARGET_SHIFT1))
   && ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (ASHIFTRT, DImode, operands, TARGET_APX_NDD)) && 
#line 1161 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                    return -1;
                  return 1227; /* *ashrdi3_cmp */

                default:
                  return -1;
                }

            case ZERO_EXTEND:
              if (pattern1323 (x1, 
ASHIFTRT) != 0
                  || !
#line 17714 "../../gcc/config/i386/i386.md"
(TARGET_64BIT
   && (optimize_function_for_size_p (cfun)
       || !TARGET_PARTIAL_FLAG_REG_STALL
       || (operands[2] == const1_rtx
	   && TARGET_SHIFT1))
   && ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (ASHIFTRT, SImode, operands, TARGET_APX_NDD)))
                return -1;
              return 1229; /* *ashrsi3_cmp_zext */

            default:
              return -1;
            }

        case 1:
          if (!
#line 17750 "../../gcc/config/i386/i386.md"
((optimize_function_for_size_p (cfun)
    || !TARGET_PARTIAL_FLAG_REG_STALL
    || (operands[2] == const1_rtx
	&& TARGET_SHIFT1))
   && ix86_match_ccmode (insn, CCGOCmode)))
            return -1;
          return 1231; /* *ashrqi3_cconly */

        case 2:
          if (!
#line 17750 "../../gcc/config/i386/i386.md"
((optimize_function_for_size_p (cfun)
    || !TARGET_PARTIAL_FLAG_REG_STALL
    || (operands[2] == const1_rtx
	&& TARGET_SHIFT1))
   && ix86_match_ccmode (insn, CCGOCmode)))
            return -1;
          return 1233; /* *ashrhi3_cconly */

        case 3:
          if (!
#line 17750 "../../gcc/config/i386/i386.md"
((optimize_function_for_size_p (cfun)
    || !TARGET_PARTIAL_FLAG_REG_STALL
    || (operands[2] == const1_rtx
	&& TARGET_SHIFT1))
   && ix86_match_ccmode (insn, CCGOCmode)))
            return -1;
          return 1235; /* *ashrsi3_cconly */

        case 4:
          if (!(
#line 17750 "../../gcc/config/i386/i386.md"
((optimize_function_for_size_p (cfun)
    || !TARGET_PARTIAL_FLAG_REG_STALL
    || (operands[2] == const1_rtx
	&& TARGET_SHIFT1))
   && ix86_match_ccmode (insn, CCGOCmode)) && 
#line 1161 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return -1;
          return 1237; /* *ashrdi3_cconly */

        default:
          return -1;
        }

    case UNSPEC:
      if (XVECLEN (x4, 0) != 2
          || XINT (x4, 1) != 98
          || pattern683 (x1) != 0)
        return -1;
      x15 = XVECEXP (x4, 0, 0);
      operands[1] = x15;
      x16 = XVECEXP (x4, 0, 1);
      operands[2] = x16;
      x7 = XVECEXP (x1, 0, 1);
      x8 = XEXP (x7, 0);
      operands[0] = x8;
      switch (GET_MODE (x4))
        {
        case E_SImode:
          if (!nonimmediate_operand (operands[1], E_SImode)
              || !register_operand (operands[2], E_SImode)
              || !scratch_operand (operands[0], E_SImode)
              || !
#line 21751 "../../gcc/config/i386/i386.md"
(TARGET_BMI))
            return -1;
          return 1568; /* *bmi_bextr_si_ccz */

        case E_DImode:
          if (!nonimmediate_operand (operands[1], E_DImode)
              || !register_operand (operands[2], E_DImode)
              || !scratch_operand (operands[0], E_DImode)
              || !(
#line 21751 "../../gcc/config/i386/i386.md"
(TARGET_BMI) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return -1;
          return 1569; /* *bmi_bextr_di_ccz */

        default:
          return -1;
        }

    case IF_THEN_ELSE:
      x13 = XEXP (x4, 0);
      if (GET_CODE (x13) != NE
          || GET_MODE (x13) != E_QImode)
        return -1;
      x17 = XEXP (x13, 1);
      if (x17 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
        return -1;
      x14 = XEXP (x4, 1);
      if (GET_CODE (x14) != ZERO_EXTRACT)
        return -1;
      x18 = XEXP (x14, 1);
      if (GET_CODE (x18) != UMIN
          || GET_MODE (x18) != E_QImode)
        return -1;
      x19 = XEXP (x14, 2);
      if (x19 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
        return -1;
      x20 = XEXP (x4, 2);
      if (x20 != const_int_rtx[MAX_SAVED_CONST_INT + 0]
          || pattern683 (x1) != 0)
        return -1;
      x21 = XEXP (x13, 0);
      operands[2] = x21;
      if (!register_operand (operands[2], E_QImode))
        return -1;
      x22 = XEXP (x14, 0);
      operands[1] = x22;
      x23 = XEXP (x18, 1);
      operands[3] = x23;
      if (!const_int_operand (operands[3], E_QImode))
        return -1;
      x7 = XVECEXP (x1, 0, 1);
      x8 = XEXP (x7, 0);
      operands[0] = x8;
      x24 = XEXP (x18, 0);
      if (!rtx_equal_p (x24, operands[2]))
        return -1;
      switch (GET_MODE (x4))
        {
        case E_SImode:
          if (GET_MODE (x14) != E_SImode
              || !nonimmediate_operand (operands[1], E_SImode)
              || !scratch_operand (operands[0], E_SImode)
              || !
#line 21914 "../../gcc/config/i386/i386.md"
(TARGET_BMI2 && INTVAL (operands[3]) == 4 * BITS_PER_UNIT))
            return -1;
          return 1586; /* *bmi2_bzhi_si3_1_ccz */

        case E_DImode:
          if (GET_MODE (x14) != E_DImode
              || !nonimmediate_operand (operands[1], E_DImode)
              || !scratch_operand (operands[0], E_DImode)
              || !(
#line 21914 "../../gcc/config/i386/i386.md"
(TARGET_BMI2 && INTVAL (operands[3]) == 8 * BITS_PER_UNIT) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return -1;
          return 1587; /* *bmi2_bzhi_di3_1_ccz */

        default:
          return -1;
        }

    case UNSPEC_VOLATILE:
      if (XVECLEN (x4, 0) != 2
          || XINT (x4, 1) != 110)
        return -1;
      x6 = XEXP (x3, 1);
      if (GET_CODE (x6) != CONST_INT)
        return -1;
      operands[2] = x6;
      res = recog_382 (x1, insn, pnum_clobbers);
      if (res >= 0)
        return res;
      if (XWINT (x6, 0) != 0L)
        return -1;
      x5 = XEXP (x2, 0);
      if (GET_CODE (x5) != REG
          || REGNO (x5) != 17
          || GET_MODE (x5) != E_CCCmode)
        return -1;
      x7 = XVECEXP (x1, 0, 1);
      if (GET_CODE (x7) != SET)
        return -1;
      x8 = XEXP (x7, 0);
      if (GET_CODE (x8) != ZERO_EXTRACT)
        return -1;
      x25 = XEXP (x8, 1);
      if (x25 != const_int_rtx[MAX_SAVED_CONST_INT + 1]
          || GET_MODE (x3) != E_CCCmode)
        return -1;
      x15 = XVECEXP (x4, 0, 0);
      operands[0] = x15;
      x16 = XVECEXP (x4, 0, 1);
      operands[2] = x16;
      if (!const_int_operand (operands[2], E_SImode))
        return -1;
      x26 = XEXP (x8, 2);
      operands[1] = x26;
      x27 = XEXP (x8, 0);
      if (!rtx_equal_p (x27, operands[0]))
        return -1;
      x9 = XEXP (x7, 1);
      switch (GET_CODE (x9))
        {
        case CONST_INT:
          switch (XWINT (x9, 0))
            {
            case 1L:
              switch (pattern1756 (x1))
                {
                case 0:
                  return 11067; /* atomic_bit_test_and_sethi_1 */

                case 1:
                  return 11068; /* atomic_bit_test_and_setsi_1 */

                case 2:
                  if (!
#line 1164 "../../gcc/config/i386/i386.md"
(TARGET_64BIT))
                    return -1;
                  return 11069; /* atomic_bit_test_and_setdi_1 */

                default:
                  return -1;
                }

            case 0L:
              switch (pattern1756 (x1))
                {
                case 0:
                  return 11073; /* atomic_bit_test_and_resethi_1 */

                case 1:
                  return 11074; /* atomic_bit_test_and_resetsi_1 */

                case 2:
                  if (!
#line 1164 "../../gcc/config/i386/i386.md"
(TARGET_64BIT))
                    return -1;
                  return 11075; /* atomic_bit_test_and_resetdi_1 */

                default:
                  return -1;
                }

            default:
              return -1;
            }

        case NOT:
          x10 = XEXP (x9, 0);
          if (GET_CODE (x10) != ZERO_EXTRACT)
            return -1;
          x28 = XEXP (x10, 1);
          if (x28 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
            return -1;
          x29 = XEXP (x10, 0);
          if (!rtx_equal_p (x29, operands[0]))
            return -1;
          x30 = XEXP (x10, 2);
          if (!rtx_equal_p (x30, operands[1]))
            return -1;
          switch (GET_MODE (x4))
            {
            case E_HImode:
              if (pattern1821 (x7, 
E_HImode) != 0)
                return -1;
              return 11070; /* atomic_bit_test_and_complementhi_1 */

            case E_SImode:
              if (pattern1821 (x7, 
E_SImode) != 0)
                return -1;
              return 11071; /* atomic_bit_test_and_complementsi_1 */

            case E_DImode:
              if (pattern1821 (x7, 
E_DImode) != 0
                  || !
#line 1164 "../../gcc/config/i386/i386.md"
(TARGET_64BIT))
                return -1;
              return 11072; /* atomic_bit_test_and_complementdi_1 */

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
recog_429 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12, x13, x14, x15, x16;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  if (GET_CODE (x2) != SET)
    return -1;
  x3 = XVECEXP (x1, 0, 3);
  if (GET_CODE (x3) != CLOBBER)
    return -1;
  x4 = XEXP (x2, 1);
  switch (GET_CODE (x4))
    {
    case UNSIGNED_FIX:
      switch (pattern384 (x1))
        {
        case 0:
          if (!
#line 5911 "../../gcc/config/i386/i386.md"
(!TARGET_64BIT && TARGET_SSE2 && TARGET_SSE_MATH
   && optimize_function_for_speed_p (cfun)))
            return -1;
          return 223; /* *fixuns_truncsf_1 */

        case 1:
          if (!
#line 5911 "../../gcc/config/i386/i386.md"
(!TARGET_64BIT && TARGET_SSE2 && TARGET_SSE_MATH
   && optimize_function_for_speed_p (cfun)))
            return -1;
          return 224; /* *fixuns_truncdf_1 */

        default:
          return -1;
        }

    case FIX:
      if (GET_MODE (x4) != E_DImode)
        return -1;
      x5 = XVECEXP (x1, 0, 1);
      if (GET_CODE (x5) != USE)
        return -1;
      x6 = XVECEXP (x1, 0, 2);
      if (GET_CODE (x6) != USE)
        return -1;
      x7 = XEXP (x2, 0);
      operands[0] = x7;
      if (!nonimmediate_operand (operands[0], E_DImode))
        return -1;
      x8 = XEXP (x4, 0);
      operands[1] = x8;
      if (!register_operand (operands[1], E_VOIDmode))
        return -1;
      x9 = XEXP (x5, 0);
      operands[2] = x9;
      if (!memory_operand (operands[2], E_HImode))
        return -1;
      x10 = XEXP (x6, 0);
      operands[3] = x10;
      if (!memory_operand (operands[3], E_HImode))
        return -1;
      x11 = XEXP (x3, 0);
      operands[4] = x11;
      if (!scratch_operand (operands[4], E_XFmode)
          || !
#line 6021 "../../gcc/config/i386/i386.md"
(X87_FLOAT_MODE_P (GET_MODE (operands[1]))
   && !TARGET_FISTTP
   && !(TARGET_64BIT && SSE_FLOAT_MODE_P (GET_MODE (operands[1])))))
        return -1;
      return 235; /* fix_truncdi_i387 */

    case FLOAT:
      switch (pattern386 (x1))
        {
        case 0:
          if (!
#line 6206 "../../gcc/config/i386/i386.md"
(!TARGET_64BIT && TARGET_INTER_UNIT_MOVES_TO_VEC
   && TARGET_80387 && X87_ENABLE_FLOAT (SFmode, DImode)
   && TARGET_SSE2 && optimize_function_for_speed_p (cfun)))
            return -1;
          return 254; /* floatdisf2_i387_with_xmm */

        case 1:
          if (!
#line 6206 "../../gcc/config/i386/i386.md"
(!TARGET_64BIT && TARGET_INTER_UNIT_MOVES_TO_VEC
   && TARGET_80387 && X87_ENABLE_FLOAT (DFmode, DImode)
   && TARGET_SSE2 && optimize_function_for_speed_p (cfun)))
            return -1;
          return 255; /* floatdidf2_i387_with_xmm */

        case 2:
          if (!
#line 6206 "../../gcc/config/i386/i386.md"
(!TARGET_64BIT && TARGET_INTER_UNIT_MOVES_TO_VEC
   && TARGET_80387 && X87_ENABLE_FLOAT (XFmode, DImode)
   && TARGET_SSE2 && optimize_function_for_speed_p (cfun)))
            return -1;
          return 256; /* floatdixf2_i387_with_xmm */

        default:
          return -1;
        }

    case DIV:
      switch (pattern391 (x1, 
MOD))
        {
        case 0:
          return 639; /* divmodsi4_1 */

        case 1:
          if (!
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT))
            return -1;
          return 640; /* divmoddi4_1 */

        case 2:
          if (!
#line 1191 "../../gcc/config/i386/i386.md"
(TARGET_HIMODE_MATH))
            return -1;
          return 667; /* *divmodhi4_noext */

        case 3:
          return 669; /* *divmodsi4_noext */

        case 4:
          if (!
#line 1192 "../../gcc/config/i386/i386.md"
(TARGET_64BIT))
            return -1;
          return 671; /* *divmoddi4_noext */

        default:
          return -1;
        }

    case UDIV:
      switch (pattern391 (x1, 
UMOD))
        {
        case 0:
          return 641; /* udivmodsi4_1 */

        case 1:
          if (!
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT))
            return -1;
          return 642; /* udivmoddi4_1 */

        case 2:
          if (!
#line 1191 "../../gcc/config/i386/i386.md"
(TARGET_HIMODE_MATH))
            return -1;
          return 668; /* *udivmodhi4_noext */

        case 3:
          return 670; /* *udivmodsi4_noext */

        case 4:
          if (!
#line 1192 "../../gcc/config/i386/i386.md"
(TARGET_64BIT))
            return -1;
          return 672; /* *udivmoddi4_noext */

        default:
          return -1;
        }

    case ZERO_EXTEND:
      if (GET_MODE (x4) != E_DImode)
        return -1;
      x5 = XVECEXP (x1, 0, 1);
      if (GET_CODE (x5) != SET)
        return -1;
      x11 = XEXP (x3, 0);
      if (GET_CODE (x11) != REG
          || REGNO (x11) != 17
          || GET_MODE (x11) != E_CCmode)
        return -1;
      switch (pattern1055 (x1))
        {
        case 0:
          switch (pattern1503 (x1, 
MOD))
            {
            case 0:
              if (!
#line 11485 "../../gcc/config/i386/i386.md"
(TARGET_64BIT))
                return -1;
              return 643; /* divmodsi4_zext_1 */

            case 1:
              if (!
#line 11880 "../../gcc/config/i386/i386.md"
(TARGET_64BIT))
                return -1;
              return 673; /* *divmodsi4_noext_zext_1 */

            default:
              return -1;
            }

        case 1:
          switch (pattern1503 (x1, 
UMOD))
            {
            case 0:
              if (!
#line 11521 "../../gcc/config/i386/i386.md"
(TARGET_64BIT))
                return -1;
              return 644; /* udivmodsi4_zext_1 */

            case 1:
              if (!
#line 11880 "../../gcc/config/i386/i386.md"
(TARGET_64BIT))
                return -1;
              return 674; /* *udivmodsi4_noext_zext_1 */

            default:
              return -1;
            }

        case 2:
          switch (pattern1504 (x1, 
DIV))
            {
            case 0:
              if (!
#line 11544 "../../gcc/config/i386/i386.md"
(TARGET_64BIT))
                return -1;
              return 645; /* divmodsi4_zext_2 */

            case 1:
              if (!
#line 11894 "../../gcc/config/i386/i386.md"
(TARGET_64BIT))
                return -1;
              return 675; /* *divmodsi4_noext_zext_2 */

            default:
              return -1;
            }

        case 3:
          switch (pattern1504 (x1, 
UDIV))
            {
            case 0:
              if (!
#line 11581 "../../gcc/config/i386/i386.md"
(TARGET_64BIT))
                return -1;
              return 646; /* udivmodsi4_zext_2 */

            case 1:
              if (!
#line 11894 "../../gcc/config/i386/i386.md"
(TARGET_64BIT))
                return -1;
              return 676; /* *udivmodsi4_noext_zext_2 */

            default:
              return -1;
            }

        default:
          return -1;
        }

    case UNSPEC:
      x7 = XEXP (x2, 0);
      operands[0] = x7;
      switch (XVECLEN (x4, 0))
        {
        case 4:
          if (XINT (x4, 1) != 20
              || pattern814 (x4) != 0
              || pattern1249 (x1) != 0
              || !tls_symbolic_operand (operands[2], E_VOIDmode))
            return -1;
          x12 = XVECEXP (x4, 0, 2);
          operands[3] = x12;
          if (!constant_call_address_operand (operands[3], E_VOIDmode))
            return -1;
          x5 = XVECEXP (x1, 0, 1);
          x9 = XEXP (x5, 0);
          operands[4] = x9;
          if (!scratch_operand (operands[4], E_SImode))
            return -1;
          x6 = XVECEXP (x1, 0, 2);
          x10 = XEXP (x6, 0);
          operands[5] = x10;
          if (!scratch_operand (operands[5], E_SImode)
              || !
#line 22792 "../../gcc/config/i386/i386.md"
(!TARGET_64BIT && TARGET_GNU_TLS))
            return -1;
          return 1643; /* *tls_global_dynamic_32_gnu */

        case 3:
          if (XINT (x4, 1) != 21
              || GET_MODE (x4) != E_SImode)
            return -1;
          x12 = XVECEXP (x4, 0, 2);
          if (GET_CODE (x12) != REG
              || REGNO (x12) != 7
              || GET_MODE (x12) != E_SImode
              || pattern1249 (x1) != 0
              || !constant_call_address_operand (operands[2], E_VOIDmode))
            return -1;
          x5 = XVECEXP (x1, 0, 1);
          x9 = XEXP (x5, 0);
          operands[3] = x9;
          if (!scratch_operand (operands[3], E_SImode))
            return -1;
          x6 = XVECEXP (x1, 0, 2);
          x10 = XEXP (x6, 0);
          operands[4] = x10;
          if (!scratch_operand (operands[4], E_SImode)
              || !
#line 22912 "../../gcc/config/i386/i386.md"
(!TARGET_64BIT && TARGET_GNU_TLS))
            return -1;
          return 1647; /* *tls_local_dynamic_base_32_gnu */

        case 1:
          x5 = XVECEXP (x1, 0, 1);
          if (GET_CODE (x5) != USE)
            return -1;
          x6 = XVECEXP (x1, 0, 2);
          if (GET_CODE (x6) != USE
              || !nonimmediate_operand (operands[0], E_DImode)
              || GET_MODE (x4) != E_DImode)
            return -1;
          x13 = XVECEXP (x4, 0, 0);
          operands[1] = x13;
          if (!register_operand (operands[1], E_XFmode))
            return -1;
          x9 = XEXP (x5, 0);
          operands[2] = x9;
          if (!memory_operand (operands[2], E_HImode))
            return -1;
          x10 = XEXP (x6, 0);
          operands[3] = x10;
          if (!memory_operand (operands[3], E_HImode))
            return -1;
          x11 = XEXP (x3, 0);
          operands[4] = x11;
          if (!scratch_operand (operands[4], E_XFmode))
            return -1;
          switch (XINT (x4, 1))
            {
            case 78:
              if (!
#line 25215 "../../gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && flag_unsafe_math_optimizations))
                return -1;
              return 1744; /* fistdi2_floor */

            case 79:
              if (!
#line 25215 "../../gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && flag_unsafe_math_optimizations))
                return -1;
              return 1745; /* fistdi2_ceil */

            default:
              return -1;
            }

        default:
          return -1;
        }

    case PLUS:
      if (pattern392 (x1) != 0)
        return -1;
      return 1651; /* *tls_local_dynamic_32_once */

    case UNSPEC_VOLATILE:
      if (XVECLEN (x4, 0) != 1
          || XINT (x4, 1) != 3)
        return -1;
      x5 = XVECEXP (x1, 0, 1);
      if (pattern712 (x5, 
7, 
MINUS) != 0)
        return -1;
      x6 = XVECEXP (x1, 0, 2);
      if (pattern953 (x6, 
E_CCmode, 
17) != 0)
        return -1;
      x11 = XEXP (x3, 0);
      if (GET_CODE (x11) != MEM
          || GET_MODE (x11) != E_BLKmode)
        return -1;
      x14 = XEXP (x11, 0);
      if (GET_CODE (x14) != SCRATCH)
        return -1;
      x7 = XEXP (x2, 0);
      operands[0] = x7;
      x13 = XVECEXP (x4, 0, 0);
      operands[1] = x13;
      x15 = XEXP (x5, 1);
      x16 = XEXP (x15, 1);
      operands[2] = x16;
      switch (GET_MODE (operands[0]))
        {
        case E_SImode:
          if (pattern1774 (x1, 
E_SImode) != 0
              || !
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode))
            return -1;
          return 1857; /* adjust_stack_and_probe_si */

        case E_DImode:
          if (pattern1774 (x1, 
E_DImode) != 0
              || !
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode))
            return -1;
          return 1858; /* adjust_stack_and_probe_di */

        default:
          return -1;
        }

    default:
      return -1;
    }
}

 rtx_insn *
split_4 (rtx x1 ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6;
  rtx_insn *res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == LTU)
    {
      switch (pattern43 (x1))
        {
        case 0:
          if ((
#line 9893 "../../gcc/config/i386/i386.md"
(ix86_pre_reload_split ()) && 
#line 9895 "../../gcc/config/i386/i386.md"
( 1)))
            return gen_split_196 (insn, operands);
          break;

        case 1:
          if ((
#line 9893 "../../gcc/config/i386/i386.md"
(ix86_pre_reload_split ()) && 
#line 9895 "../../gcc/config/i386/i386.md"
( 1)))
            return gen_split_197 (insn, operands);
          break;

        default:
          break;
        }
    }
  operands[1] = x2;
  if (!add_comparison_operator (operands[1], E_QImode))
    return NULL;
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) != NOT)
    return NULL;
  x4 = XEXP (x1, 0);
  operands[0] = x4;
  if (!nonimmediate_operand (operands[0], E_QImode))
    return NULL;
  x5 = XEXP (x3, 0);
  operands[2] = x5;
  x6 = XEXP (x2, 1);
  operands[3] = x6;
  switch (GET_MODE (x3))
    {
    case E_QImode:
      if (!register_operand (operands[2], E_QImode)
          || !nonimmediate_operand (operands[3], E_QImode))
        return NULL;
      return gen_split_846 (insn, operands);

    case E_HImode:
      if (!register_operand (operands[2], E_HImode)
          || !nonimmediate_operand (operands[3], E_HImode))
        return NULL;
      return gen_split_847 (insn, operands);

    case E_SImode:
      if (!register_operand (operands[2], E_SImode)
          || !nonimmediate_operand (operands[3], E_SImode))
        return NULL;
      return gen_split_848 (insn, operands);

    case E_DImode:
      if (!register_operand (operands[2], E_DImode)
          || !nonimmediate_operand (operands[3], E_DImode)
          || !
#line 1161 "../../gcc/config/i386/i386.md"
(TARGET_64BIT))
        return NULL;
      return gen_split_849 (insn, operands);

    default:
      return NULL;
    }
}

 rtx_insn *
split_7 (rtx x1 ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
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
          return gen_split_23 (insn, operands);

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
          return gen_split_26 (insn, operands);

        case 2:
          if (!(
#line 3748 "../../gcc/config/i386/i386.md"
(!TARGET_64BIT
   && CONST_INT_P (operands[3])
   && UINTVAL (operands[3]) == 0xffffffff00000000ll) && 
#line 3752 "../../gcc/config/i386/i386.md"
( reload_completed)))
            return NULL;
          return gen_split_29 (insn, operands);

        default:
          return NULL;
        }

    case ASHIFT:
      x5 = XEXP (x4, 1);
      operands[2] = x5;
      x6 = XEXP (x4, 0);
      switch (GET_CODE (x6))
        {
        case REG:
        case SUBREG:
        case MEM:
          x7 = XEXP (x3, 1);
          switch (GET_CODE (x7))
            {
            case CONST_INT:
            case CONST_WIDE_INT:
              operands[3] = x7;
              operands[1] = x6;
              switch (GET_MODE (operands[0]))
                {
                case E_QImode:
                  if (pattern604 (x3, 
E_QImode) != 0
                      || !(
#line 8015 "../../gcc/config/i386/i386.md"
((!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun))
   && ((unsigned HOST_WIDE_INT) INTVAL (operands[3])
       < (HOST_WIDE_INT_1U << INTVAL (operands[2])))) && 
#line 8019 "../../gcc/config/i386/i386.md"
( reload_completed)))
                    return NULL;
                  return gen_split_160 (insn, operands);

                case E_HImode:
                  if (pattern604 (x3, 
E_HImode) != 0
                      || !(
#line 8015 "../../gcc/config/i386/i386.md"
((!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun))
   && ((unsigned HOST_WIDE_INT) INTVAL (operands[3])
       < (HOST_WIDE_INT_1U << INTVAL (operands[2])))) && 
#line 8019 "../../gcc/config/i386/i386.md"
( reload_completed)))
                    return NULL;
                  return gen_split_162 (insn, operands);

                case E_SImode:
                  if (pattern604 (x3, 
E_SImode) != 0
                      || !(
#line 8039 "../../gcc/config/i386/i386.md"
((unsigned HOST_WIDE_INT) INTVAL (operands[3])
   < (HOST_WIDE_INT_1U << INTVAL (operands[2]))) && 
#line 8042 "../../gcc/config/i386/i386.md"
( reload_completed)))
                    return NULL;
                  return gen_split_164 (insn, operands);

                case E_DImode:
                  if (GET_MODE (x3) != E_DImode
                      || GET_MODE (x4) != E_DImode)
                    return NULL;
                  if (register_operand (operands[0], E_DImode)
                      && register_no_SP_operand (operands[1], E_DImode)
                      && const_0_to_3_operand (operands[2], E_VOIDmode)
                      && const_int_operand (operands[3], E_VOIDmode)
                      && ((
#line 8039 "../../gcc/config/i386/i386.md"
((unsigned HOST_WIDE_INT) INTVAL (operands[3])
   < (HOST_WIDE_INT_1U << INTVAL (operands[2]))) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 8042 "../../gcc/config/i386/i386.md"
( reload_completed)))
                    return gen_split_166 (insn, operands);
                  if (!nonimmediate_operand (operands[0], E_DImode)
                      || !register_operand (operands[1], E_DImode)
                      || !const_int_operand (operands[2], E_QImode)
                      || !const_scalar_int_operand (operands[3], E_DImode)
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
                  return gen_split_467 (insn, operands);

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
                  return gen_split_470 (insn, operands);

                default:
                  return NULL;
                }

            case ZERO_EXTEND:
              operands[1] = x6;
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
                  return gen_split_431 (insn, operands);

                case 1:
                  if (!((
#line 14060 "../../gcc/config/i386/i386.md"
(INTVAL (operands[2]) == 8 * BITS_PER_UNIT) && 
#line 1236 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 14062 "../../gcc/config/i386/i386.md"
( reload_completed)))
                    return NULL;
                  return gen_split_434 (insn, operands);

                default:
                  return NULL;
                }

            case LSHIFTRT:
              operands[4] = x6;
              switch (pattern831 (x3))
                {
                case 0:
                  if (!(
#line 15475 "../../gcc/config/i386/i386.md"
(TARGET_64BIT && TARGET_APX_NF
   && INTVAL (operands[3]) == 64 - INTVAL (operands[2])
   && ix86_pre_reload_split ()) && 
#line 15479 "../../gcc/config/i386/i386.md"
( 1)))
                    return NULL;
                  return gen_split_562 (insn, operands);

                case 1:
                  if (!(
#line 15707 "../../gcc/config/i386/i386.md"
(TARGET_APX_NF
   && INTVAL (operands[3]) == 32 - INTVAL (operands[2])
   && ix86_pre_reload_split ()) && 
#line 15711 "../../gcc/config/i386/i386.md"
( 1)))
                    return NULL;
                  return gen_split_566 (insn, operands);

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
              return gen_split_443 (insn, operands);

            case 1:
              if (!((
#line 14096 "../../gcc/config/i386/i386.md"
(INTVAL (operands[2]) == 8 * BITS_PER_UNIT) && 
#line 1236 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 14098 "../../gcc/config/i386/i386.md"
( reload_completed)))
                return NULL;
              return gen_split_449 (insn, operands);

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
              return gen_split_473 (insn, operands);

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
              return gen_split_479 (insn, operands);

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
              return gen_split_446 (insn, operands);

            case 1:
              if (!((
#line 14096 "../../gcc/config/i386/i386.md"
(INTVAL (operands[2]) == 8 * BITS_PER_UNIT) && 
#line 1236 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 14098 "../../gcc/config/i386/i386.md"
( reload_completed)))
                return NULL;
              return gen_split_452 (insn, operands);

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
              return gen_split_476 (insn, operands);

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
              return gen_split_482 (insn, operands);

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
          return gen_split_437 (insn, operands);

        case 1:
          if (!((
#line 14077 "../../gcc/config/i386/i386.md"
(INTVAL (operands[3]) == 8 * BITS_PER_UNIT) && 
#line 1236 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 14079 "../../gcc/config/i386/i386.md"
( reload_completed)))
            return NULL;
          return gen_split_440 (insn, operands);

        case 2:
          if (!((
#line 14121 "../../gcc/config/i386/i386.md"
(INTVAL (operands[3]) == 4 * BITS_PER_UNIT) && 
#line 1235 "../../gcc/config/i386/i386.md"
(!TARGET_64BIT)) && 
#line 14123 "../../gcc/config/i386/i386.md"
( reload_completed)))
            return NULL;
          return gen_split_455 (insn, operands);

        case 3:
          if (!((
#line 14121 "../../gcc/config/i386/i386.md"
(INTVAL (operands[3]) == 8 * BITS_PER_UNIT) && 
#line 1236 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 14123 "../../gcc/config/i386/i386.md"
( reload_completed)))
            return NULL;
          return gen_split_461 (insn, operands);

        case 4:
          if (!((
#line 14121 "../../gcc/config/i386/i386.md"
(INTVAL (operands[3]) == 4 * BITS_PER_UNIT) && 
#line 1235 "../../gcc/config/i386/i386.md"
(!TARGET_64BIT)) && 
#line 14123 "../../gcc/config/i386/i386.md"
( reload_completed)))
            return NULL;
          return gen_split_458 (insn, operands);

        case 5:
          if (!((
#line 14121 "../../gcc/config/i386/i386.md"
(INTVAL (operands[3]) == 8 * BITS_PER_UNIT) && 
#line 1236 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 14123 "../../gcc/config/i386/i386.md"
( reload_completed)))
            return NULL;
          return gen_split_464 (insn, operands);

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
          return gen_split_485 (insn, operands);

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
          return gen_split_488 (insn, operands);

        default:
          return NULL;
        }

    case LSHIFTRT:
      x7 = XEXP (x3, 1);
      if (GET_CODE (x7) != ASHIFT)
        return NULL;
      x6 = XEXP (x4, 0);
      operands[4] = x6;
      x5 = XEXP (x4, 1);
      operands[2] = x5;
      switch (pattern831 (x3))
        {
        case 0:
          if (!(
#line 16860 "../../gcc/config/i386/i386.md"
(TARGET_64BIT && TARGET_APX_NF
   && INTVAL (operands[3]) == 64 - INTVAL (operands[2])
   && ix86_pre_reload_split ()) && 
#line 16864 "../../gcc/config/i386/i386.md"
( 1)))
            return NULL;
          return gen_split_609 (insn, operands);

        case 1:
          if (!(
#line 17091 "../../gcc/config/i386/i386.md"
(TARGET_APX_NF
   && INTVAL (operands[3]) == 32 - INTVAL (operands[2])
   && ix86_pre_reload_split ()) && 
#line 17095 "../../gcc/config/i386/i386.md"
( 1)))
            return NULL;
          return gen_split_613 (insn, operands);

        default:
          return NULL;
        }

    default:
      return NULL;
    }
}

 rtx_insn *
split_19 (rtx x1 ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4;
  rtx_insn *res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 0);
  switch (GET_CODE (x3))
    {
    case REG:
    case SUBREG:
      operands[0] = x3;
      switch (GET_MODE (operands[0]))
        {
        case E_DImode:
          x4 = XEXP (x2, 1);
          if (GET_MODE (x4) != E_DImode)
            return NULL;
          if (register_operand (operands[0], E_DImode))
            {
              if (nonmemory_operand (operands[1], E_DImode)
                  && nonmemory_operand (operands[2], E_QImode)
                  && (
#line 15323 "../../gcc/config/i386/i386.md"
(epilogue_completed) && 
#line 1195 "../../gcc/config/i386/i386.md"
(!TARGET_64BIT)))
                return gen_split_556 (insn, operands);
              if (nonimmediate_operand (operands[1], E_DImode)
                  && register_operand (operands[2], E_QImode)
                  && (
#line 15988 "../../gcc/config/i386/i386.md"
(TARGET_BMI2 && reload_completed) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return gen_split_573 (insn, operands);
            }
          if (!general_reg_operand (operands[0], E_DImode)
              || !index_reg_operand (operands[1], E_DImode)
              || !const_0_to_3_operand (operands[2], E_VOIDmode)
              || !(
#line 16283 "../../gcc/config/i386/i386.md"
(reload_completed
   && REGNO (operands[0]) != REGNO (operands[1])) && 
#line 1161 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return NULL;
          return gen_split_580 (insn, operands);

        case E_TImode:
          if (!register_operand (operands[0], E_TImode))
            return NULL;
          x4 = XEXP (x2, 1);
          if (GET_MODE (x4) != E_TImode
              || !nonmemory_operand (operands[1], E_TImode)
              || !nonmemory_operand (operands[2], E_QImode)
              || !(
#line 15323 "../../gcc/config/i386/i386.md"
(epilogue_completed) && 
#line 1196 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return NULL;
          return gen_split_557 (insn, operands);

        default:
          return NULL;
        }

    case STRICT_LOW_PART:
      switch (pattern1251 (x2))
        {
        case 0:
          if (!(
#line 16233 "../../gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)) && 
#line 16252 "../../gcc/config/i386/i386.md"
( reload_completed
   && !(rtx_equal_p (operands[0], operands[1])))))
            return NULL;
          return gen_split_575 (insn, operands);

        case 1:
          if (!(
#line 16233 "../../gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)) && 
#line 16252 "../../gcc/config/i386/i386.md"
( reload_completed
   && !(rtx_equal_p (operands[0], operands[1])))))
            return NULL;
          return gen_split_576 (insn, operands);

        default:
          return NULL;
        }

    default:
      return NULL;
    }
}

 rtx_insn *
split_23 (rtx x1 ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7;
  rtx_insn *res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  if (maybe_ne (SUBREG_BYTE (x3), 0))
    return NULL;
  x4 = XVECEXP (x1, 0, 1);
  if (pattern227 (x4, 
E_CCmode, 
17) != 0)
    return NULL;
  switch (pattern1038 (x2))
    {
    case 0:
      x5 = XEXP (x3, 0);
      x6 = XEXP (x5, 1);
      operands[2] = x6;
      if (general_operand (operands[2], E_QImode))
        {
          switch (pattern1036 (x2))
            {
            case 0:
              if (
#line 7549 "../../gcc/config/i386/i386.md"
(reload_completed
   && !rtx_equal_p (operands[0], operands[1])))
                return gen_split_137 (insn, operands);
              break;

            case 1:
              if (
#line 7549 "../../gcc/config/i386/i386.md"
(reload_completed
   && !rtx_equal_p (operands[0], operands[1])))
                return gen_split_138 (insn, operands);
              break;

            case 2:
              if ((
#line 7549 "../../gcc/config/i386/i386.md"
(reload_completed
   && !rtx_equal_p (operands[0], operands[1])) && 
#line 1164 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return gen_split_139 (insn, operands);
              break;

            default:
              break;
            }
        }
      if (GET_CODE (x6) != SUBREG)
        return NULL;
      switch (pattern1819 (x2))
        {
        case 0:
          if (!
#line 7596 "../../gcc/config/i386/i386.md"
(reload_completed
   && !(rtx_equal_p (operands[0], operands[1])
	|| (PLUS == PLUS && rtx_equal_p (operands[0], operands[2])))))
            return NULL;
          return gen_split_140 (insn, operands);

        case 1:
          if (!
#line 7596 "../../gcc/config/i386/i386.md"
(reload_completed
   && !(rtx_equal_p (operands[0], operands[1])
	|| (PLUS == PLUS && rtx_equal_p (operands[0], operands[2])))))
            return NULL;
          return gen_split_142 (insn, operands);

        case 2:
          if (!(
#line 7596 "../../gcc/config/i386/i386.md"
(reload_completed
   && !(rtx_equal_p (operands[0], operands[1])
	|| (PLUS == PLUS && rtx_equal_p (operands[0], operands[2])))) && 
#line 1164 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return NULL;
          return gen_split_144 (insn, operands);

        default:
          return NULL;
        }

    case 1:
      x5 = XEXP (x3, 0);
      x6 = XEXP (x5, 1);
      if (GET_CODE (x6) == SUBREG)
        {
          switch (pattern1819 (x2))
            {
            case 0:
              if (
#line 7596 "../../gcc/config/i386/i386.md"
(reload_completed
   && !(rtx_equal_p (operands[0], operands[1])
	|| (MINUS == PLUS && rtx_equal_p (operands[0], operands[2])))))
                return gen_split_141 (insn, operands);
              break;

            case 1:
              if (
#line 7596 "../../gcc/config/i386/i386.md"
(reload_completed
   && !(rtx_equal_p (operands[0], operands[1])
	|| (MINUS == PLUS && rtx_equal_p (operands[0], operands[2])))))
                return gen_split_143 (insn, operands);
              break;

            case 2:
              if ((
#line 7596 "../../gcc/config/i386/i386.md"
(reload_completed
   && !(rtx_equal_p (operands[0], operands[1])
	|| (MINUS == PLUS && rtx_equal_p (operands[0], operands[2])))) && 
#line 1164 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return gen_split_145 (insn, operands);
              break;

            default:
              break;
            }
        }
      operands[2] = x6;
      if (!general_operand (operands[2], E_QImode))
        return NULL;
      switch (pattern1036 (x2))
        {
        case 0:
          if (!
#line 8375 "../../gcc/config/i386/i386.md"
(reload_completed
   && !(rtx_equal_p (operands[0], operands[1]))))
            return NULL;
          return gen_split_183 (insn, operands);

        case 1:
          if (!
#line 8375 "../../gcc/config/i386/i386.md"
(reload_completed
   && !(rtx_equal_p (operands[0], operands[1]))))
            return NULL;
          return gen_split_184 (insn, operands);

        case 2:
          if (!(
#line 8375 "../../gcc/config/i386/i386.md"
(reload_completed
   && !(rtx_equal_p (operands[0], operands[1]))) && 
#line 1164 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return NULL;
          return gen_split_185 (insn, operands);

        default:
          return NULL;
        }

    case 2:
      x5 = XEXP (x3, 0);
      x6 = XEXP (x5, 1);
      operands[2] = x6;
      if (general_operand (operands[2], E_QImode))
        {
          switch (pattern1036 (x2))
            {
            case 0:
              if (
#line 13094 "../../gcc/config/i386/i386.md"
(reload_completed
   && !(rtx_equal_p (operands[0], operands[1]))))
                return gen_split_331 (insn, operands);
              break;

            case 1:
              if (
#line 13094 "../../gcc/config/i386/i386.md"
(reload_completed
   && !(rtx_equal_p (operands[0], operands[1]))))
                return gen_split_334 (insn, operands);
              break;

            case 2:
              if ((
#line 13094 "../../gcc/config/i386/i386.md"
(reload_completed
   && !(rtx_equal_p (operands[0], operands[1]))) && 
#line 1164 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return gen_split_337 (insn, operands);
              break;

            default:
              break;
            }
        }
      if (GET_CODE (x6) != SUBREG)
        return NULL;
      switch (pattern1819 (x2))
        {
        case 0:
          if (!
#line 13192 "../../gcc/config/i386/i386.md"
(reload_completed
   && !(rtx_equal_p (operands[0], operands[1])
	|| rtx_equal_p (operands[0], operands[2]))))
            return NULL;
          return gen_split_349 (insn, operands);

        case 1:
          if (!
#line 13192 "../../gcc/config/i386/i386.md"
(reload_completed
   && !(rtx_equal_p (operands[0], operands[1])
	|| rtx_equal_p (operands[0], operands[2]))))
            return NULL;
          return gen_split_352 (insn, operands);

        case 2:
          if (!(
#line 13192 "../../gcc/config/i386/i386.md"
(reload_completed
   && !(rtx_equal_p (operands[0], operands[1])
	|| rtx_equal_p (operands[0], operands[2]))) && 
#line 1164 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return NULL;
          return gen_split_355 (insn, operands);

        default:
          return NULL;
        }

    case 3:
      x5 = XEXP (x3, 0);
      x6 = XEXP (x5, 1);
      operands[2] = x6;
      if (general_operand (operands[2], E_QImode))
        {
          switch (pattern1036 (x2))
            {
            case 0:
              if (
#line 13094 "../../gcc/config/i386/i386.md"
(reload_completed
   && !(rtx_equal_p (operands[0], operands[1]))))
                return gen_split_332 (insn, operands);
              break;

            case 1:
              if (
#line 13094 "../../gcc/config/i386/i386.md"
(reload_completed
   && !(rtx_equal_p (operands[0], operands[1]))))
                return gen_split_335 (insn, operands);
              break;

            case 2:
              if ((
#line 13094 "../../gcc/config/i386/i386.md"
(reload_completed
   && !(rtx_equal_p (operands[0], operands[1]))) && 
#line 1164 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return gen_split_338 (insn, operands);
              break;

            default:
              break;
            }
        }
      if (GET_CODE (x6) != SUBREG)
        return NULL;
      switch (pattern1819 (x2))
        {
        case 0:
          if (!
#line 13192 "../../gcc/config/i386/i386.md"
(reload_completed
   && !(rtx_equal_p (operands[0], operands[1])
	|| rtx_equal_p (operands[0], operands[2]))))
            return NULL;
          return gen_split_350 (insn, operands);

        case 1:
          if (!
#line 13192 "../../gcc/config/i386/i386.md"
(reload_completed
   && !(rtx_equal_p (operands[0], operands[1])
	|| rtx_equal_p (operands[0], operands[2]))))
            return NULL;
          return gen_split_353 (insn, operands);

        case 2:
          if (!(
#line 13192 "../../gcc/config/i386/i386.md"
(reload_completed
   && !(rtx_equal_p (operands[0], operands[1])
	|| rtx_equal_p (operands[0], operands[2]))) && 
#line 1164 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return NULL;
          return gen_split_356 (insn, operands);

        default:
          return NULL;
        }

    case 4:
      x5 = XEXP (x3, 0);
      x6 = XEXP (x5, 1);
      operands[2] = x6;
      if (general_operand (operands[2], E_QImode))
        {
          switch (pattern1036 (x2))
            {
            case 0:
              if (
#line 13094 "../../gcc/config/i386/i386.md"
(reload_completed
   && !(rtx_equal_p (operands[0], operands[1]))))
                return gen_split_333 (insn, operands);
              break;

            case 1:
              if (
#line 13094 "../../gcc/config/i386/i386.md"
(reload_completed
   && !(rtx_equal_p (operands[0], operands[1]))))
                return gen_split_336 (insn, operands);
              break;

            case 2:
              if ((
#line 13094 "../../gcc/config/i386/i386.md"
(reload_completed
   && !(rtx_equal_p (operands[0], operands[1]))) && 
#line 1164 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return gen_split_339 (insn, operands);
              break;

            default:
              break;
            }
        }
      if (GET_CODE (x6) != SUBREG)
        return NULL;
      switch (pattern1819 (x2))
        {
        case 0:
          if (!
#line 13192 "../../gcc/config/i386/i386.md"
(reload_completed
   && !(rtx_equal_p (operands[0], operands[1])
	|| rtx_equal_p (operands[0], operands[2]))))
            return NULL;
          return gen_split_351 (insn, operands);

        case 1:
          if (!
#line 13192 "../../gcc/config/i386/i386.md"
(reload_completed
   && !(rtx_equal_p (operands[0], operands[1])
	|| rtx_equal_p (operands[0], operands[2]))))
            return NULL;
          return gen_split_354 (insn, operands);

        case 2:
          if (!(
#line 13192 "../../gcc/config/i386/i386.md"
(reload_completed
   && !(rtx_equal_p (operands[0], operands[1])
	|| rtx_equal_p (operands[0], operands[2]))) && 
#line 1164 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return NULL;
          return gen_split_357 (insn, operands);

        default:
          return NULL;
        }

    case 5:
      if (!
#line 14498 "../../gcc/config/i386/i386.md"
(reload_completed
   && !(rtx_equal_p (operands[0], operands[1]))))
        return NULL;
      return gen_split_494 (insn, operands);

    case 6:
      if (!
#line 14498 "../../gcc/config/i386/i386.md"
(reload_completed
   && !(rtx_equal_p (operands[0], operands[1]))))
        return NULL;
      return gen_split_495 (insn, operands);

    case 7:
      if (!(
#line 14498 "../../gcc/config/i386/i386.md"
(reload_completed
   && !(rtx_equal_p (operands[0], operands[1]))) && 
#line 1164 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
        return NULL;
      return gen_split_496 (insn, operands);

    case 8:
      if (!
#line 16527 "../../gcc/config/i386/i386.md"
(reload_completed
   && !(rtx_equal_p (operands[0], operands[1]))))
        return NULL;
      return gen_split_586 (insn, operands);

    case 9:
      if (!
#line 16527 "../../gcc/config/i386/i386.md"
(reload_completed
   && !(rtx_equal_p (operands[0], operands[1]))))
        return NULL;
      return gen_split_587 (insn, operands);

    case 10:
      if (!(
#line 16527 "../../gcc/config/i386/i386.md"
(reload_completed
   && !(rtx_equal_p (operands[0], operands[1]))) && 
#line 1164 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
        return NULL;
      return gen_split_588 (insn, operands);

    case 11:
      x7 = XEXP (x2, 0);
      operands[0] = x7;
      switch (pattern1234 (x3))
        {
        case 0:
          if (((
#line 16757 "../../gcc/config/i386/i386.md"
(UINTVAL (operands[2]) < 4 * BITS_PER_UNIT) && 
#line 1235 "../../gcc/config/i386/i386.md"
(!TARGET_64BIT)) && 
#line 16759 "../../gcc/config/i386/i386.md"
( reload_completed)))
            return gen_split_605 (insn, operands);
          break;

        case 1:
          if (((
#line 16757 "../../gcc/config/i386/i386.md"
(UINTVAL (operands[2]) < 8 * BITS_PER_UNIT) && 
#line 1236 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 16759 "../../gcc/config/i386/i386.md"
( reload_completed)))
            return gen_split_607 (insn, operands);
          break;

        default:
          break;
        }
      x5 = XEXP (x3, 0);
      if (GET_MODE (x5) != E_QImode)
        return NULL;
      switch (pattern1037 (x2))
        {
        case 0:
          if (!
#line 17803 "../../gcc/config/i386/i386.md"
(reload_completed
   && !(rtx_equal_p (operands[0], operands[1]))))
            return NULL;
          return gen_split_632 (insn, operands);

        case 1:
          if (!
#line 17803 "../../gcc/config/i386/i386.md"
(reload_completed
   && !(rtx_equal_p (operands[0], operands[1]))))
            return NULL;
          return gen_split_634 (insn, operands);

        case 2:
          if (!(
#line 17803 "../../gcc/config/i386/i386.md"
(reload_completed
   && !(rtx_equal_p (operands[0], operands[1]))) && 
#line 1164 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return NULL;
          return gen_split_636 (insn, operands);

        default:
          return NULL;
        }

    case 12:
      x7 = XEXP (x2, 0);
      operands[0] = x7;
      switch (pattern1234 (x3))
        {
        case 0:
          if (((
#line 16757 "../../gcc/config/i386/i386.md"
(UINTVAL (operands[2]) < 4 * BITS_PER_UNIT) && 
#line 1235 "../../gcc/config/i386/i386.md"
(!TARGET_64BIT)) && 
#line 16759 "../../gcc/config/i386/i386.md"
( reload_completed)))
            return gen_split_606 (insn, operands);
          break;

        case 1:
          if (((
#line 16757 "../../gcc/config/i386/i386.md"
(UINTVAL (operands[2]) < 8 * BITS_PER_UNIT) && 
#line 1236 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 16759 "../../gcc/config/i386/i386.md"
( reload_completed)))
            return gen_split_608 (insn, operands);
          break;

        default:
          break;
        }
      x5 = XEXP (x3, 0);
      if (GET_MODE (x5) != E_QImode)
        return NULL;
      switch (pattern1037 (x2))
        {
        case 0:
          if (!
#line 17803 "../../gcc/config/i386/i386.md"
(reload_completed
   && !(rtx_equal_p (operands[0], operands[1]))))
            return NULL;
          return gen_split_633 (insn, operands);

        case 1:
          if (!
#line 17803 "../../gcc/config/i386/i386.md"
(reload_completed
   && !(rtx_equal_p (operands[0], operands[1]))))
            return NULL;
          return gen_split_635 (insn, operands);

        case 2:
          if (!(
#line 17803 "../../gcc/config/i386/i386.md"
(reload_completed
   && !(rtx_equal_p (operands[0], operands[1]))) && 
#line 1164 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return NULL;
          return gen_split_637 (insn, operands);

        default:
          return NULL;
        }

    default:
      return NULL;
    }
}

 rtx_insn *
split_32 (rtx x1 ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6;
  rtx_insn *res ATTRIBUTE_UNUSED;
  switch (pattern403 (x1))
    {
    case 0:
      if (!(
#line 18182 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATERT, QImode, operands)
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (QImode)-1))
      == GET_MODE_BITSIZE (QImode)-1
   && ix86_pre_reload_split ()) && 
#line 18187 "../../gcc/config/i386/i386.md"
( 1)))
        return NULL;
      return gen_split_695 (insn, operands);

    case 1:
      if (!(
#line 18182 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATERT, HImode, operands)
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (HImode)-1))
      == GET_MODE_BITSIZE (HImode)-1
   && ix86_pre_reload_split ()) && 
#line 18187 "../../gcc/config/i386/i386.md"
( 1)))
        return NULL;
      return gen_split_697 (insn, operands);

    case 2:
      if (!(
#line 18182 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATERT, SImode, operands)
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (SImode)-1))
      == GET_MODE_BITSIZE (SImode)-1
   && ix86_pre_reload_split ()) && 
#line 18187 "../../gcc/config/i386/i386.md"
( 1)))
        return NULL;
      return gen_split_699 (insn, operands);

    case 3:
      if (!((
#line 18182 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATERT, DImode, operands)
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (DImode)-1))
      == GET_MODE_BITSIZE (DImode)-1
   && ix86_pre_reload_split ()) && 
#line 1161 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 18187 "../../gcc/config/i386/i386.md"
( 1)))
        return NULL;
      return gen_split_701 (insn, operands);

    case 4:
      if (!(
#line 18253 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATERT, QImode, operands)
   && (INTVAL (operands[3]) & (1 * BITS_PER_UNIT - 1)) == 0
   && ix86_pre_reload_split ()) && 
#line 18257 "../../gcc/config/i386/i386.md"
( 1)))
        return NULL;
      return gen_split_727 (insn, operands);

    case 5:
      if (!(
#line 18253 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATERT, HImode, operands)
   && (INTVAL (operands[3]) & (2 * BITS_PER_UNIT - 1)) == 0
   && ix86_pre_reload_split ()) && 
#line 18257 "../../gcc/config/i386/i386.md"
( 1)))
        return NULL;
      return gen_split_729 (insn, operands);

    case 6:
      if (!(
#line 18253 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATERT, SImode, operands)
   && (INTVAL (operands[3]) & (4 * BITS_PER_UNIT - 1)) == 0
   && ix86_pre_reload_split ()) && 
#line 18257 "../../gcc/config/i386/i386.md"
( 1)))
        return NULL;
      return gen_split_731 (insn, operands);

    case 7:
      if (!((
#line 18253 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATERT, DImode, operands)
   && (INTVAL (operands[3]) & (8 * BITS_PER_UNIT - 1)) == 0
   && ix86_pre_reload_split ()) && 
#line 1161 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 18257 "../../gcc/config/i386/i386.md"
( 1)))
        return NULL;
      return gen_split_733 (insn, operands);

    case 8:
      if (!(
#line 18322 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATERT, QImode, operands)
   && (INTVAL (operands[3]) & (1 * BITS_PER_UNIT - 1)) == 0
   && ix86_pre_reload_split ()) && 
#line 18326 "../../gcc/config/i386/i386.md"
( 1)))
        return NULL;
      return gen_split_759 (insn, operands);

    case 9:
      if (!(
#line 18322 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATERT, HImode, operands)
   && (INTVAL (operands[3]) & (2 * BITS_PER_UNIT - 1)) == 0
   && ix86_pre_reload_split ()) && 
#line 18326 "../../gcc/config/i386/i386.md"
( 1)))
        return NULL;
      return gen_split_761 (insn, operands);

    case 10:
      if (!(
#line 18322 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATERT, SImode, operands)
   && (INTVAL (operands[3]) & (4 * BITS_PER_UNIT - 1)) == 0
   && ix86_pre_reload_split ()) && 
#line 18326 "../../gcc/config/i386/i386.md"
( 1)))
        return NULL;
      return gen_split_763 (insn, operands);

    case 11:
      if (!((
#line 18322 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATERT, DImode, operands)
   && (INTVAL (operands[3]) & (8 * BITS_PER_UNIT - 1)) == 0
   && ix86_pre_reload_split ()) && 
#line 1161 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 18326 "../../gcc/config/i386/i386.md"
( 1)))
        return NULL;
      return gen_split_765 (insn, operands);

    case 12:
      x2 = XVECEXP (x1, 0, 0);
      x3 = XEXP (x2, 0);
      operands[0] = x3;
      x4 = XEXP (x2, 1);
      switch (pattern1180 (x4))
        {
        case 0:
          if ((
#line 18142 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATERT, QImode, operands)
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (QImode)-1))
      == GET_MODE_BITSIZE (QImode)-1
   && ix86_pre_reload_split ()) && 
#line 18147 "../../gcc/config/i386/i386.md"
( 1)))
            return gen_split_679 (insn, operands);
          break;

        case 1:
          if ((
#line 18142 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATERT, HImode, operands)
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (HImode)-1))
      == GET_MODE_BITSIZE (HImode)-1
   && ix86_pre_reload_split ()) && 
#line 18147 "../../gcc/config/i386/i386.md"
( 1)))
            return gen_split_681 (insn, operands);
          break;

        case 2:
          if ((
#line 18142 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATERT, SImode, operands)
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (SImode)-1))
      == GET_MODE_BITSIZE (SImode)-1
   && ix86_pre_reload_split ()) && 
#line 18147 "../../gcc/config/i386/i386.md"
( 1)))
            return gen_split_683 (insn, operands);
          break;

        case 3:
          if (((
#line 18142 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATERT, DImode, operands)
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (DImode)-1))
      == GET_MODE_BITSIZE (DImode)-1
   && ix86_pre_reload_split ()) && 
#line 1161 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 18147 "../../gcc/config/i386/i386.md"
( 1)))
            return gen_split_685 (insn, operands);
          break;

        case 4:
          if ((
#line 18217 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATERT, QImode, operands)
   && (INTVAL (operands[3]) & (1 * BITS_PER_UNIT - 1)) == 0
   && ix86_pre_reload_split ()) && 
#line 18221 "../../gcc/config/i386/i386.md"
( 1)))
            return gen_split_711 (insn, operands);
          break;

        case 5:
          if ((
#line 18217 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATERT, HImode, operands)
   && (INTVAL (operands[3]) & (2 * BITS_PER_UNIT - 1)) == 0
   && ix86_pre_reload_split ()) && 
#line 18221 "../../gcc/config/i386/i386.md"
( 1)))
            return gen_split_713 (insn, operands);
          break;

        case 6:
          if ((
#line 18217 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATERT, SImode, operands)
   && (INTVAL (operands[3]) & (4 * BITS_PER_UNIT - 1)) == 0
   && ix86_pre_reload_split ()) && 
#line 18221 "../../gcc/config/i386/i386.md"
( 1)))
            return gen_split_715 (insn, operands);
          break;

        case 7:
          if (((
#line 18217 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATERT, DImode, operands)
   && (INTVAL (operands[3]) & (8 * BITS_PER_UNIT - 1)) == 0
   && ix86_pre_reload_split ()) && 
#line 1161 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 18221 "../../gcc/config/i386/i386.md"
( 1)))
            return gen_split_717 (insn, operands);
          break;

        case 8:
          if ((
#line 18286 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATERT, QImode, operands)
   && (INTVAL (operands[3]) & (1 * BITS_PER_UNIT - 1)) == 0
   && ix86_pre_reload_split ()) && 
#line 18290 "../../gcc/config/i386/i386.md"
( 1)))
            return gen_split_743 (insn, operands);
          break;

        case 9:
          if ((
#line 18286 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATERT, HImode, operands)
   && (INTVAL (operands[3]) & (2 * BITS_PER_UNIT - 1)) == 0
   && ix86_pre_reload_split ()) && 
#line 18290 "../../gcc/config/i386/i386.md"
( 1)))
            return gen_split_745 (insn, operands);
          break;

        case 10:
          if ((
#line 18286 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATERT, SImode, operands)
   && (INTVAL (operands[3]) & (4 * BITS_PER_UNIT - 1)) == 0
   && ix86_pre_reload_split ()) && 
#line 18290 "../../gcc/config/i386/i386.md"
( 1)))
            return gen_split_747 (insn, operands);
          break;

        case 11:
          if (((
#line 18286 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATERT, DImode, operands)
   && (INTVAL (operands[3]) & (8 * BITS_PER_UNIT - 1)) == 0
   && ix86_pre_reload_split ()) && 
#line 1161 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 18290 "../../gcc/config/i386/i386.md"
( 1)))
            return gen_split_749 (insn, operands);
          break;

        case 12:
          x5 = XEXP (x4, 1);
          operands[2] = x5;
          switch (pattern1338 (x4))
            {
            case 0:
              if (
#line 18551 "../../gcc/config/i386/i386.md"
(TARGET_BMI2 && reload_completed && !optimize_function_for_size_p (cfun)))
                return gen_split_786 (insn, operands);
              break;

            case 1:
              if ((
#line 18551 "../../gcc/config/i386/i386.md"
(TARGET_BMI2 && reload_completed && !optimize_function_for_size_p (cfun)) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return gen_split_787 (insn, operands);
              break;

            default:
              break;
            }
          if (XWINT (x5, 0) == 8L
              && QIreg_operand (operands[0], E_HImode)
              && GET_MODE (x4) == E_HImode)
            {
              x6 = XEXP (x4, 0);
              if (rtx_equal_p (x6, operands[0])
                  && 
#line 18723 "../../gcc/config/i386/i386.md"
(reload_completed
  && (TARGET_USE_XCHGB || optimize_function_for_size_p (cfun))))
                return gen_split_795 (insn, operands);
            }
          break;

        default:
          break;
        }
      x5 = XEXP (x4, 1);
      operands[2] = x5;
      switch (pattern1181 (x2))
        {
        case 0:
          if (!(
#line 18690 "../../gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)) && 
#line 18701 "../../gcc/config/i386/i386.md"
( reload_completed
   && !(rtx_equal_p (operands[0], operands[1])))))
            return NULL;
          return gen_split_791 (insn, operands);

        case 1:
          if (!(
#line 18690 "../../gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)) && 
#line 18701 "../../gcc/config/i386/i386.md"
( reload_completed
   && !(rtx_equal_p (operands[0], operands[1])))))
            return NULL;
          return gen_split_793 (insn, operands);

        default:
          return NULL;
        }

    default:
      return NULL;
    }
}

 rtx_insn *
split_42 (rtx x1 ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8;
  rtx_insn *res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  switch (XVECLEN (x2, 0))
    {
    case 3:
      x3 = XEXP (x1, 0);
      operands[0] = x3;
      switch (XINT (x2, 1))
        {
        case 51:
          x4 = XVECEXP (x2, 0, 0);
          operands[1] = x4;
          x5 = XVECEXP (x2, 0, 1);
          operands[2] = x5;
          x6 = XVECEXP (x2, 0, 2);
          switch (GET_CODE (x6))
            {
            case LT:
              switch (pattern735 (x2))
                {
                case 0:
                  if ((
#line 26645 "../../gcc/config/i386/i386.md"
(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH
  && (rtx_equal_p (operands[1], operands[3])
      && rtx_equal_p (operands[2], operands[4]))
  && ix86_pre_reload_split ()) && 
#line 26650 "../../gcc/config/i386/i386.md"
( 1)))
                    return gen_split_945 (insn, operands);
                  if (!(
#line 26666 "../../gcc/config/i386/i386.md"
(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH
  && (rtx_equal_p (operands[1], operands[4])
      && rtx_equal_p (operands[2], operands[3]))
  && ix86_pre_reload_split ()) && 
#line 26671 "../../gcc/config/i386/i386.md"
( 1)))
                    return NULL;
                  return gen_split_947 (insn, operands);

                case 1:
                  if ((
#line 26645 "../../gcc/config/i386/i386.md"
(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH
  && (rtx_equal_p (operands[1], operands[3])
      && rtx_equal_p (operands[2], operands[4]))
  && ix86_pre_reload_split ()) && 
#line 26650 "../../gcc/config/i386/i386.md"
( 1)))
                    return gen_split_946 (insn, operands);
                  if (!(
#line 26666 "../../gcc/config/i386/i386.md"
(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH
  && (rtx_equal_p (operands[1], operands[4])
      && rtx_equal_p (operands[2], operands[3]))
  && ix86_pre_reload_split ()) && 
#line 26671 "../../gcc/config/i386/i386.md"
( 1)))
                    return NULL;
                  return gen_split_948 (insn, operands);

                default:
                  return NULL;
                }

            case EQ:
              switch (pattern737 (x2))
                {
                case 0:
                  if (!(
#line 4338 "../../gcc/config/i386/mmx.md"
(TARGET_MMX_WITH_SSE && ix86_pre_reload_split ()) && 
#line 4340 "../../gcc/config/i386/mmx.md"
( 1)))
                    return NULL;
                  return gen_split_1052 (insn, operands);

                case 1:
                  if (!(
#line 4414 "../../gcc/config/i386/mmx.md"
(TARGET_SSE2 && ix86_pre_reload_split ()) && 
#line 4416 "../../gcc/config/i386/mmx.md"
( 1)))
                    return NULL;
                  return gen_split_1055 (insn, operands);

                case 2:
                  if (!(
#line 4414 "../../gcc/config/i386/mmx.md"
(TARGET_SSE2 && ix86_pre_reload_split ()) && 
#line 4416 "../../gcc/config/i386/mmx.md"
( 1)))
                    return NULL;
                  return gen_split_1056 (insn, operands);

                case 3:
                  if (!(
#line 4414 "../../gcc/config/i386/mmx.md"
(TARGET_SSE2 && ix86_pre_reload_split ()) && 
#line 4416 "../../gcc/config/i386/mmx.md"
( 1)))
                    return NULL;
                  return gen_split_1057 (insn, operands);

                default:
                  return NULL;
                }

            case SUBREG:
              switch (pattern848 (x2))
                {
                case 0:
                  if (!(
#line 4366 "../../gcc/config/i386/mmx.md"
(TARGET_MMX_WITH_SSE && ix86_pre_reload_split ()) && 
#line 4368 "../../gcc/config/i386/mmx.md"
( 1)))
                    return NULL;
                  return gen_split_1053 (insn, operands);

                case 1:
                  if (!(
#line 4366 "../../gcc/config/i386/mmx.md"
(TARGET_MMX_WITH_SSE && ix86_pre_reload_split ()) && 
#line 4368 "../../gcc/config/i386/mmx.md"
( 1)))
                    return NULL;
                  return gen_split_1054 (insn, operands);

                case 2:
                  if (!(
#line 4442 "../../gcc/config/i386/mmx.md"
(TARGET_SSE2 && ix86_pre_reload_split ()) && 
#line 4444 "../../gcc/config/i386/mmx.md"
( 1)))
                    return NULL;
                  return gen_split_1058 (insn, operands);

                default:
                  return NULL;
                }

            default:
              return NULL;
            }

        case 59:
          switch (pattern591 (x2))
            {
            case 0:
              if (!((
#line 4789 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && ix86_pre_reload_split ()
  && ix86_binary_operator_ok (US_MINUS, V64QImode, operands)
  && (INTVAL (operands[4]) & 3) == 0) && 
#line 318 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)) && 
#line 4793 "../../gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_1466 (insn, operands);

            case 1:
              if (!((
#line 4789 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && ix86_pre_reload_split ()
  && ix86_binary_operator_ok (US_MINUS, V16QImode, operands)
  && (INTVAL (operands[4]) & 3) == 0) && 
#line 318 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 4793 "../../gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_1468 (insn, operands);

            case 2:
              if (!((
#line 4789 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && ix86_pre_reload_split ()
  && ix86_binary_operator_ok (US_MINUS, V16HImode, operands)
  && (INTVAL (operands[4]) & 3) == 0) && 
#line 319 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 4793 "../../gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_1474 (insn, operands);

            case 3:
              if (!((
#line 4789 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && ix86_pre_reload_split ()
  && ix86_binary_operator_ok (US_MINUS, V32QImode, operands)
  && (INTVAL (operands[4]) & 3) == 0) && 
#line 318 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 4793 "../../gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_1470 (insn, operands);

            case 4:
              if (!((
#line 4789 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && ix86_pre_reload_split ()
  && ix86_binary_operator_ok (US_MINUS, V32HImode, operands)
  && (INTVAL (operands[4]) & 3) == 0) && 
#line 319 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)) && 
#line 4793 "../../gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_1472 (insn, operands);

            case 5:
              if (!((
#line 4789 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && ix86_pre_reload_split ()
  && ix86_binary_operator_ok (US_MINUS, V8HImode, operands)
  && (INTVAL (operands[4]) & 3) == 0) && 
#line 319 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 4793 "../../gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_1476 (insn, operands);

            default:
              return NULL;
            }

        case 157:
          switch (pattern591 (x2))
            {
            case 0:
              if (!((
#line 4789 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && ix86_pre_reload_split ()
  && ix86_binary_operator_ok (US_MINUS, V64QImode, operands)
  && (INTVAL (operands[4]) & 1) == 0) && 
#line 318 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)) && 
#line 4793 "../../gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_1467 (insn, operands);

            case 1:
              if (!((
#line 4789 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && ix86_pre_reload_split ()
  && ix86_binary_operator_ok (US_MINUS, V16QImode, operands)
  && (INTVAL (operands[4]) & 1) == 0) && 
#line 318 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 4793 "../../gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_1469 (insn, operands);

            case 2:
              if (!((
#line 4789 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && ix86_pre_reload_split ()
  && ix86_binary_operator_ok (US_MINUS, V16HImode, operands)
  && (INTVAL (operands[4]) & 1) == 0) && 
#line 319 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 4793 "../../gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_1475 (insn, operands);

            case 3:
              if (!((
#line 4789 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && ix86_pre_reload_split ()
  && ix86_binary_operator_ok (US_MINUS, V32QImode, operands)
  && (INTVAL (operands[4]) & 1) == 0) && 
#line 318 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 4793 "../../gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_1471 (insn, operands);

            case 4:
              if (!((
#line 4789 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && ix86_pre_reload_split ()
  && ix86_binary_operator_ok (US_MINUS, V32HImode, operands)
  && (INTVAL (operands[4]) & 1) == 0) && 
#line 319 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)) && 
#line 4793 "../../gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_1473 (insn, operands);

            case 5:
              if (!((
#line 4789 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && ix86_pre_reload_split ()
  && ix86_binary_operator_ok (US_MINUS, V8HImode, operands)
  && (INTVAL (operands[4]) & 1) == 0) && 
#line 319 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 4793 "../../gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_1477 (insn, operands);

            default:
              return NULL;
            }

        case 121:
          if (pattern301 (x2) != 0
              || !
#line 23284 "../../gcc/config/i386/sse.md"
((TARGET_SSSE3 && reload_completed
    && SSE_REGNO_P (REGNO (operands[0])))
   || operands[3] == const0_rtx
   || INTVAL (operands[3]) == 64))
            return NULL;
          return gen_split_3462 (insn, operands);

        default:
          return NULL;
        }

    case 2:
      switch (XINT (x2, 1))
        {
        case 57:
          switch (pattern64 (x1))
            {
            case 0:
              if (!(
#line 4792 "../../gcc/config/i386/mmx.md"
(TARGET_MMX || TARGET_MMX_WITH_SSE) && 
#line 4797 "../../gcc/config/i386/mmx.md"
( reload_completed
   && SSE_REGNO_P (REGNO (operands[0])))))
                return NULL;
              return gen_split_1093 (insn, operands);

            case 1:
              if (!(
#line 4831 "../../gcc/config/i386/mmx.md"
(TARGET_SSE4_1 && TARGET_MMX_WITH_SSE) && 
#line 4833 "../../gcc/config/i386/mmx.md"
( reload_completed)))
                return NULL;
              return gen_split_1095 (insn, operands);

            default:
              return NULL;
            }

        case 130:
          x3 = XEXP (x1, 0);
          if (GET_CODE (x3) != REG
              || REGNO (x3) != 17)
            return NULL;
          x4 = XVECEXP (x2, 0, 0);
          switch (GET_CODE (x4))
            {
            case AND:
              switch (pattern603 (x1))
                {
                case 0:
                  if (!(
#line 25373 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1
   && ix86_pre_reload_split ()) && 
#line 25376 "../../gcc/config/i386/sse.md"
( 1)))
                    return NULL;
                  return gen_split_3568 (insn, operands);

                case 1:
                  if (!(
#line 25373 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1
   && ix86_pre_reload_split ()) && 
#line 25376 "../../gcc/config/i386/sse.md"
( 1)))
                    return NULL;
                  return gen_split_3569 (insn, operands);

                case 2:
                  if (!(
#line 25373 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1
   && ix86_pre_reload_split ()) && 
#line 25376 "../../gcc/config/i386/sse.md"
( 1)))
                    return NULL;
                  return gen_split_3570 (insn, operands);

                case 3:
                  if (!(
#line 25373 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1
   && ix86_pre_reload_split ()) && 
#line 25376 "../../gcc/config/i386/sse.md"
( 1)))
                    return NULL;
                  return gen_split_3571 (insn, operands);

                case 4:
                  if (!(
#line 25373 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1
   && ix86_pre_reload_split ()) && 
#line 25376 "../../gcc/config/i386/sse.md"
( 1)))
                    return NULL;
                  return gen_split_3572 (insn, operands);

                case 5:
                  if (!(
#line 25373 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1
   && ix86_pre_reload_split ()) && 
#line 25376 "../../gcc/config/i386/sse.md"
( 1)))
                    return NULL;
                  return gen_split_3573 (insn, operands);

                case 6:
                  if (!(
#line 25373 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1
   && ix86_pre_reload_split ()) && 
#line 25376 "../../gcc/config/i386/sse.md"
( 1)))
                    return NULL;
                  return gen_split_3574 (insn, operands);

                case 7:
                  if (!((
#line 25373 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1
   && ix86_pre_reload_split ()) && 
#line 606 "../../gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 25376 "../../gcc/config/i386/sse.md"
( 1)))
                    return NULL;
                  return gen_split_3575 (insn, operands);

                case 8:
                  if (!((
#line 25373 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1
   && ix86_pre_reload_split ()) && 
#line 606 "../../gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 25376 "../../gcc/config/i386/sse.md"
( 1)))
                    return NULL;
                  return gen_split_3576 (insn, operands);

                case 9:
                  if (!((
#line 25373 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1
   && ix86_pre_reload_split ()) && 
#line 607 "../../gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 25376 "../../gcc/config/i386/sse.md"
( 1)))
                    return NULL;
                  return gen_split_3577 (insn, operands);

                case 10:
                  if (!((
#line 25373 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1
   && ix86_pre_reload_split ()) && 
#line 607 "../../gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 25376 "../../gcc/config/i386/sse.md"
( 1)))
                    return NULL;
                  return gen_split_3578 (insn, operands);

                case 11:
                  if (!((
#line 25373 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1
   && ix86_pre_reload_split ()) && 
#line 607 "../../gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 25376 "../../gcc/config/i386/sse.md"
( 1)))
                    return NULL;
                  return gen_split_3579 (insn, operands);

                case 12:
                  if (!((
#line 25373 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1
   && ix86_pre_reload_split ()) && 
#line 608 "../../gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 25376 "../../gcc/config/i386/sse.md"
( 1)))
                    return NULL;
                  return gen_split_3580 (insn, operands);

                case 13:
                  if (!((
#line 25373 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1
   && ix86_pre_reload_split ()) && 
#line 608 "../../gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 25376 "../../gcc/config/i386/sse.md"
( 1)))
                    return NULL;
                  return gen_split_3581 (insn, operands);

                default:
                  return NULL;
                }

            case REG:
            case SUBREG:
              operands[0] = x4;
              if (GET_MODE (x3) != E_CCCmode
                  || GET_MODE (x2) != E_CCCmode)
                return NULL;
              x5 = XVECEXP (x2, 0, 1);
              operands[1] = x5;
              switch (GET_MODE (operands[0]))
                {
                case E_V16QImode:
                  if (!register_operand (operands[0], E_V16QImode)
                      || !register_operand (operands[1], E_V16QImode)
                      || !
#line 25386 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1
   && rtx_equal_p (operands[0], operands[1])))
                    return NULL;
                  return gen_split_3582 (insn, operands);

                case E_V8HImode:
                  if (!register_operand (operands[0], E_V8HImode)
                      || !register_operand (operands[1], E_V8HImode)
                      || !
#line 25386 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1
   && rtx_equal_p (operands[0], operands[1])))
                    return NULL;
                  return gen_split_3583 (insn, operands);

                case E_V4SImode:
                  if (!register_operand (operands[0], E_V4SImode)
                      || !register_operand (operands[1], E_V4SImode)
                      || !
#line 25386 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1
   && rtx_equal_p (operands[0], operands[1])))
                    return NULL;
                  return gen_split_3584 (insn, operands);

                case E_V2DImode:
                  if (!register_operand (operands[0], E_V2DImode)
                      || !register_operand (operands[1], E_V2DImode)
                      || !
#line 25386 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1
   && rtx_equal_p (operands[0], operands[1])))
                    return NULL;
                  return gen_split_3585 (insn, operands);

                case E_V1TImode:
                  if (!register_operand (operands[0], E_V1TImode)
                      || !register_operand (operands[1], E_V1TImode)
                      || !
#line 25386 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1
   && rtx_equal_p (operands[0], operands[1])))
                    return NULL;
                  return gen_split_3586 (insn, operands);

                case E_V4SFmode:
                  if (!register_operand (operands[0], E_V4SFmode)
                      || !register_operand (operands[1], E_V4SFmode)
                      || !
#line 25386 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1
   && rtx_equal_p (operands[0], operands[1])))
                    return NULL;
                  return gen_split_3587 (insn, operands);

                case E_V2DFmode:
                  if (!register_operand (operands[0], E_V2DFmode)
                      || !register_operand (operands[1], E_V2DFmode)
                      || !
#line 25386 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1
   && rtx_equal_p (operands[0], operands[1])))
                    return NULL;
                  return gen_split_3588 (insn, operands);

                case E_V32QImode:
                  if (!register_operand (operands[0], E_V32QImode)
                      || !register_operand (operands[1], E_V32QImode)
                      || !(
#line 25386 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1
   && rtx_equal_p (operands[0], operands[1])) && 
#line 606 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
                    return NULL;
                  return gen_split_3589 (insn, operands);

                case E_V16HImode:
                  if (!register_operand (operands[0], E_V16HImode)
                      || !register_operand (operands[1], E_V16HImode)
                      || !(
#line 25386 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1
   && rtx_equal_p (operands[0], operands[1])) && 
#line 606 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
                    return NULL;
                  return gen_split_3590 (insn, operands);

                case E_V8SImode:
                  if (!register_operand (operands[0], E_V8SImode)
                      || !register_operand (operands[1], E_V8SImode)
                      || !(
#line 25386 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1
   && rtx_equal_p (operands[0], operands[1])) && 
#line 607 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
                    return NULL;
                  return gen_split_3591 (insn, operands);

                case E_V4DImode:
                  if (!register_operand (operands[0], E_V4DImode)
                      || !register_operand (operands[1], E_V4DImode)
                      || !(
#line 25386 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1
   && rtx_equal_p (operands[0], operands[1])) && 
#line 607 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
                    return NULL;
                  return gen_split_3592 (insn, operands);

                case E_V2TImode:
                  if (!register_operand (operands[0], E_V2TImode)
                      || !register_operand (operands[1], E_V2TImode)
                      || !(
#line 25386 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1
   && rtx_equal_p (operands[0], operands[1])) && 
#line 607 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
                    return NULL;
                  return gen_split_3593 (insn, operands);

                case E_V8SFmode:
                  if (!register_operand (operands[0], E_V8SFmode)
                      || !register_operand (operands[1], E_V8SFmode)
                      || !(
#line 25386 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1
   && rtx_equal_p (operands[0], operands[1])) && 
#line 608 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
                    return NULL;
                  return gen_split_3594 (insn, operands);

                case E_V4DFmode:
                  if (!register_operand (operands[0], E_V4DFmode)
                      || !register_operand (operands[1], E_V4DFmode)
                      || !(
#line 25386 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1
   && rtx_equal_p (operands[0], operands[1])) && 
#line 608 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
                    return NULL;
                  return gen_split_3595 (insn, operands);

                default:
                  return NULL;
                }

            default:
              return NULL;
            }

        default:
          return NULL;
        }

    case 1:
      x3 = XEXP (x1, 0);
      operands[0] = x3;
      switch (XINT (x2, 1))
        {
        case 49:
          if (GET_MODE (x2) != E_SImode
              || !register_operand (operands[0], E_SImode))
            return NULL;
          x4 = XVECEXP (x2, 0, 0);
          switch (GET_CODE (x4))
            {
            case REG:
            case SUBREG:
              operands[1] = x4;
              if (register_operand (operands[1], E_V8QImode)
                  && 
#line 6829 "../../gcc/config/i386/mmx.md"
(TARGET_SSE2 && reload_completed
   && SSE_REGNO_P (REGNO (operands[1]))))
                return gen_split_1118 (insn, operands);
              if (GET_CODE (x4) != SUBREG
                  || maybe_ne (SUBREG_BYTE (x4), 0))
                return NULL;
              x7 = XEXP (x4, 0);
              switch (GET_CODE (x7))
                {
                case VEC_MERGE:
                  switch (pattern1093 (x4))
                    {
                    case 0:
                      if (!((
#line 21984 "../../gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 422 "../../gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 21986 "../../gcc/config/i386/sse.md"
( reload_completed)))
                        return NULL;
                      return gen_split_3398 (insn, operands);

                    case 1:
                      if (!(
#line 21984 "../../gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 21986 "../../gcc/config/i386/sse.md"
( reload_completed)))
                        return NULL;
                      return gen_split_3399 (insn, operands);

                    case 2:
                      if (!((
#line 21984 "../../gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 423 "../../gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 21986 "../../gcc/config/i386/sse.md"
( reload_completed)))
                        return NULL;
                      return gen_split_3400 (insn, operands);

                    case 3:
                      if (!((
#line 21984 "../../gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 423 "../../gcc/config/i386/sse.md"
(TARGET_SSE2)) && 
#line 21986 "../../gcc/config/i386/sse.md"
( reload_completed)))
                        return NULL;
                      return gen_split_3401 (insn, operands);

                    default:
                      return NULL;
                    }

                case ASHIFTRT:
                  switch (pattern1094 (x4))
                    {
                    case 0:
                      if (!((
#line 22047 "../../gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 422 "../../gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 22049 "../../gcc/config/i386/sse.md"
( reload_completed)))
                        return NULL;
                      return gen_split_3418 (insn, operands);

                    case 1:
                      if (!(
#line 22047 "../../gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 22049 "../../gcc/config/i386/sse.md"
( reload_completed)))
                        return NULL;
                      return gen_split_3419 (insn, operands);

                    case 2:
                      if (!((
#line 22047 "../../gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 423 "../../gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 22049 "../../gcc/config/i386/sse.md"
( reload_completed)))
                        return NULL;
                      return gen_split_3420 (insn, operands);

                    case 3:
                      if (!((
#line 22047 "../../gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 423 "../../gcc/config/i386/sse.md"
(TARGET_SSE2)) && 
#line 22049 "../../gcc/config/i386/sse.md"
( reload_completed)))
                        return NULL;
                      return gen_split_3421 (insn, operands);

                    default:
                      return NULL;
                    }

                case NOT:
                  x8 = XEXP (x7, 0);
                  operands[1] = x8;
                  if (!register_operand (operands[1], E_VOIDmode))
                    return NULL;
                  switch (GET_MODE (x4))
                    {
                    case E_V32QImode:
                      if (!(
#line 22186 "../../gcc/config/i386/sse.md"
(TARGET_SSE2
   && GET_MODE_CLASS (GET_MODE (operands[1])) == MODE_VECTOR_INT
   && GET_MODE_SIZE (GET_MODE (operands[1])) == 32) && 
#line 630 "../../gcc/config/i386/sse.md"
(TARGET_AVX2)))
                        return NULL;
                      return gen_split_3434 (insn, operands);

                    case E_V16QImode:
                      if (!
#line 22186 "../../gcc/config/i386/sse.md"
(TARGET_SSE2
   && GET_MODE_CLASS (GET_MODE (operands[1])) == MODE_VECTOR_INT
   && GET_MODE_SIZE (GET_MODE (operands[1])) == 16))
                        return NULL;
                      return gen_split_3435 (insn, operands);

                    default:
                      return NULL;
                    }

                default:
                  return NULL;
                }

            case LT:
              switch (pattern763 (x4))
                {
                case 0:
                  if (!((
#line 21960 "../../gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 422 "../../gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 21962 "../../gcc/config/i386/sse.md"
( reload_completed)))
                    return NULL;
                  return gen_split_3394 (insn, operands);

                case 1:
                  if (!(
#line 21960 "../../gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 21962 "../../gcc/config/i386/sse.md"
( reload_completed)))
                    return NULL;
                  return gen_split_3395 (insn, operands);

                case 2:
                  if (!((
#line 21960 "../../gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 423 "../../gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 21962 "../../gcc/config/i386/sse.md"
( reload_completed)))
                    return NULL;
                  return gen_split_3396 (insn, operands);

                case 3:
                  if (!((
#line 21960 "../../gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 423 "../../gcc/config/i386/sse.md"
(TARGET_SSE2)) && 
#line 21962 "../../gcc/config/i386/sse.md"
( reload_completed)))
                    return NULL;
                  return gen_split_3397 (insn, operands);

                case 4:
                  if (!((
#line 22212 "../../gcc/config/i386/sse.md"
(TARGET_SSE2) && 
#line 630 "../../gcc/config/i386/sse.md"
(TARGET_AVX2)) && 
#line 22214 "../../gcc/config/i386/sse.md"
( 1)))
                    return NULL;
                  return gen_split_3436 (insn, operands);

                case 5:
                  if (!(
#line 22212 "../../gcc/config/i386/sse.md"
(TARGET_SSE2) && 
#line 22214 "../../gcc/config/i386/sse.md"
( 1)))
                    return NULL;
                  return gen_split_3437 (insn, operands);

                default:
                  return NULL;
                }

            case NOT:
              x7 = XEXP (x4, 0);
              operands[1] = x7;
              switch (GET_MODE (x4))
                {
                case E_V32QImode:
                  if (!register_operand (operands[1], E_V32QImode)
                      || !(
#line 22164 "../../gcc/config/i386/sse.md"
(TARGET_SSE2) && 
#line 630 "../../gcc/config/i386/sse.md"
(TARGET_AVX2)))
                    return NULL;
                  return gen_split_3432 (insn, operands);

                case E_V16QImode:
                  if (!register_operand (operands[1], E_V16QImode)
                      || !
#line 22164 "../../gcc/config/i386/sse.md"
(TARGET_SSE2))
                    return NULL;
                  return gen_split_3433 (insn, operands);

                default:
                  return NULL;
                }

            case VEC_MERGE:
              switch (pattern765 (x4))
                {
                case 0:
                  if (!((
#line 22240 "../../gcc/config/i386/sse.md"
(TARGET_SSE2) && 
#line 630 "../../gcc/config/i386/sse.md"
(TARGET_AVX2)) && 
#line 22242 "../../gcc/config/i386/sse.md"
( 1)))
                    return NULL;
                  return gen_split_3438 (insn, operands);

                case 1:
                  if (!(
#line 22240 "../../gcc/config/i386/sse.md"
(TARGET_SSE2) && 
#line 22242 "../../gcc/config/i386/sse.md"
( 1)))
                    return NULL;
                  return gen_split_3439 (insn, operands);

                case 2:
                  if (!(
#line 22368 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_pre_reload_split ()) && 
#line 22370 "../../gcc/config/i386/sse.md"
( 1)))
                    return NULL;
                  return gen_split_3447 (insn, operands);

                case 3:
                  if (!(
#line 22382 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_pre_reload_split ()) && 
#line 22384 "../../gcc/config/i386/sse.md"
( 1)))
                    return NULL;
                  return gen_split_3448 (insn, operands);

                default:
                  return NULL;
                }

            default:
              return NULL;
            }

        case 172:
          if (GET_MODE (x2) != E_V2SImode
              || !register_operand (operands[0], E_V2SImode))
            return NULL;
          x4 = XVECEXP (x2, 0, 0);
          operands[1] = x4;
          if (!nonimmediate_operand (operands[1], E_V4SFmode)
              || !
#line 8454 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && reload_completed
   && SSE_REG_P (operands[0])))
            return NULL;
          return gen_split_1510 (insn, operands);

        default:
          return NULL;
        }

    default:
      return NULL;
    }
}

 rtx_insn *
split_69 (rtx x1 ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
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
          return gen_split_1660 (insn, operands);

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
          return gen_split_1687 (insn, operands);

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
          return gen_split_1714 (insn, operands);

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
          return gen_split_1741 (insn, operands);

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
          return gen_split_1768 (insn, operands);

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
          return gen_split_1795 (insn, operands);

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
          return gen_split_1822 (insn, operands);

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
          return gen_split_1849 (insn, operands);

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
          return gen_split_1876 (insn, operands);

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
          return gen_split_1903 (insn, operands);

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
          return gen_split_1930 (insn, operands);

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
          return gen_split_1957 (insn, operands);

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
          return gen_split_1663 (insn, operands);

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
          return gen_split_1690 (insn, operands);

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
          return gen_split_1717 (insn, operands);

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
          return gen_split_1744 (insn, operands);

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
          return gen_split_1771 (insn, operands);

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
          return gen_split_1798 (insn, operands);

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
          return gen_split_1825 (insn, operands);

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
          return gen_split_1852 (insn, operands);

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
          return gen_split_1879 (insn, operands);

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
          return gen_split_1906 (insn, operands);

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
          return gen_split_1933 (insn, operands);

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
          return gen_split_1960 (insn, operands);

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
          return gen_split_1666 (insn, operands);

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
          return gen_split_1693 (insn, operands);

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
          return gen_split_1720 (insn, operands);

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
          return gen_split_1747 (insn, operands);

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
          return gen_split_1774 (insn, operands);

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
          return gen_split_1801 (insn, operands);

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
          return gen_split_1828 (insn, operands);

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
          return gen_split_1855 (insn, operands);

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
          return gen_split_1882 (insn, operands);

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
          return gen_split_1909 (insn, operands);

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
          return gen_split_1936 (insn, operands);

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
          return gen_split_1963 (insn, operands);

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
          return gen_split_2950 (insn, operands);

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
          return gen_split_2959 (insn, operands);

        case 38:
          if (!(
#line 13946 "../../gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 13950 "../../gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_2968 (insn, operands);

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
          return gen_split_2977 (insn, operands);

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
          return gen_split_2986 (insn, operands);

        case 41:
          if (!(
#line 13946 "../../gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 13950 "../../gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_2995 (insn, operands);

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
          return gen_split_3004 (insn, operands);

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
          return gen_split_3013 (insn, operands);

        case 44:
          if (!(
#line 13946 "../../gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 13950 "../../gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_3022 (insn, operands);

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
          return gen_split_3031 (insn, operands);

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
          return gen_split_3040 (insn, operands);

        case 47:
          if (!(
#line 13946 "../../gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 13950 "../../gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_3049 (insn, operands);

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
          return gen_split_2308 (insn, operands);

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
          return gen_split_2335 (insn, operands);

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
          return gen_split_2362 (insn, operands);

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
          return gen_split_2389 (insn, operands);

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
          return gen_split_2416 (insn, operands);

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
          return gen_split_2443 (insn, operands);

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
          return gen_split_2470 (insn, operands);

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
          return gen_split_2497 (insn, operands);

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
          return gen_split_2524 (insn, operands);

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
          return gen_split_2551 (insn, operands);

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
          return gen_split_2578 (insn, operands);

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
          return gen_split_2605 (insn, operands);

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
          return gen_split_2311 (insn, operands);

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
          return gen_split_2338 (insn, operands);

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
          return gen_split_2365 (insn, operands);

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
          return gen_split_2392 (insn, operands);

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
          return gen_split_2419 (insn, operands);

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
          return gen_split_2446 (insn, operands);

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
          return gen_split_2473 (insn, operands);

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
          return gen_split_2500 (insn, operands);

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
          return gen_split_2527 (insn, operands);

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
          return gen_split_2554 (insn, operands);

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
          return gen_split_2581 (insn, operands);

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
          return gen_split_2608 (insn, operands);

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
          return gen_split_2314 (insn, operands);

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
          return gen_split_2341 (insn, operands);

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
          return gen_split_2368 (insn, operands);

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
          return gen_split_2395 (insn, operands);

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
          return gen_split_2422 (insn, operands);

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
          return gen_split_2449 (insn, operands);

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
          return gen_split_2476 (insn, operands);

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
          return gen_split_2503 (insn, operands);

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
          return gen_split_2530 (insn, operands);

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
          return gen_split_2557 (insn, operands);

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
          return gen_split_2584 (insn, operands);

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
          return gen_split_2611 (insn, operands);

        default:
          return NULL;
        }

    default:
      return NULL;
    }
}

 rtx_insn *
split_77 (rtx x1 ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7;
  rtx_insn *res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  switch (GET_CODE (x3))
    {
    case VEC_SELECT:
      if (GET_MODE (x3) != E_DFmode)
        return NULL;
      x4 = XEXP (x3, 1);
      if (GET_CODE (x4) != PARALLEL
          || XVECLEN (x4, 0) != 1)
        return NULL;
      x5 = XVECEXP (x4, 0, 0);
      if (x5 != const_int_rtx[MAX_SAVED_CONST_INT + 1]
          || !memory_operand (operands[0], E_V2DFmode)
          || GET_MODE (x2) != E_V2DFmode
          || !register_operand (operands[1], E_DFmode))
        return NULL;
      x6 = XEXP (x3, 0);
      if (!rtx_equal_p (x6, operands[0])
          || !
#line 14836 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && reload_completed))
        return NULL;
      return gen_split_3166 (insn, operands);

    case UNSPEC:
      if (XVECLEN (x3, 0) != 1
          || XINT (x3, 1) != 147)
        return NULL;
      x7 = XVECEXP (x3, 0, 0);
      if (x7 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
        return NULL;
      switch (GET_MODE (operands[0]))
        {
        case E_V8SImode:
          if (pattern1032 (x2, 
E_V4SImode, 
E_V8SImode) != 0
              || !(
#line 28811 "../../gcc/config/i386/sse.md"
(TARGET_AVX && !(MEM_P (operands[0]) && MEM_P (operands[1]))) && 
#line 28813 "../../gcc/config/i386/sse.md"
( reload_completed)))
            return NULL;
          return gen_split_3756 (insn, operands);

        case E_V8SFmode:
          if (pattern1032 (x2, 
E_V4SFmode, 
E_V8SFmode) != 0
              || !(
#line 28811 "../../gcc/config/i386/sse.md"
(TARGET_AVX && !(MEM_P (operands[0]) && MEM_P (operands[1]))) && 
#line 28813 "../../gcc/config/i386/sse.md"
( reload_completed)))
            return NULL;
          return gen_split_3757 (insn, operands);

        case E_V4DFmode:
          if (pattern1032 (x2, 
E_V2DFmode, 
E_V4DFmode) != 0
              || !(
#line 28811 "../../gcc/config/i386/sse.md"
(TARGET_AVX && !(MEM_P (operands[0]) && MEM_P (operands[1]))) && 
#line 28813 "../../gcc/config/i386/sse.md"
( reload_completed)))
            return NULL;
          return gen_split_3758 (insn, operands);

        case E_V16SImode:
          if (pattern1032 (x2, 
E_V8SImode, 
E_V16SImode) != 0
              || !((
#line 30155 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && !(MEM_P (operands[0]) && MEM_P (operands[1]))) && 
#line 1445 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)) && 
#line 30157 "../../gcc/config/i386/sse.md"
( reload_completed)))
            return NULL;
          return gen_split_3804 (insn, operands);

        case E_V16SFmode:
          if (pattern1032 (x2, 
E_V8SFmode, 
E_V16SFmode) != 0
              || !((
#line 30155 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && !(MEM_P (operands[0]) && MEM_P (operands[1]))) && 
#line 1445 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)) && 
#line 30157 "../../gcc/config/i386/sse.md"
( reload_completed)))
            return NULL;
          return gen_split_3805 (insn, operands);

        case E_V8DFmode:
          if (pattern1032 (x2, 
E_V4DFmode, 
E_V8DFmode) != 0
              || !((
#line 30155 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && !(MEM_P (operands[0]) && MEM_P (operands[1]))) && 
#line 1445 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)) && 
#line 30157 "../../gcc/config/i386/sse.md"
( reload_completed)))
            return NULL;
          return gen_split_3806 (insn, operands);

        default:
          return NULL;
        }

    default:
      return NULL;
    }
}

 rtx_insn *
split_80 (rtx x1 ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  rtx_insn *res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  switch (GET_CODE (x2))
    {
    case AND:
      res = split_66 (x1, insn);
      if (res != NULL_RTX)
        return res;
      break;

    case IOR:
      res = split_73 (x1, insn);
      if (res != NULL_RTX)
        return res;
      break;

    case XOR:
      x3 = XEXP (x2, 0);
      switch (GET_CODE (x3))
        {
        case AND:
          res = split_68 (x1, insn);
          if (res != NULL_RTX)
            return res;
          break;

        case IOR:
          res = split_69 (x1, insn);
          if (res != NULL_RTX)
            return res;
          break;

        case XOR:
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
                  if (((
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
                    return gen_split_1669 (insn, operands);
                  break;

                case 1:
                  if (((
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
                    return gen_split_1696 (insn, operands);
                  break;

                case 2:
                  if ((
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
                    return gen_split_1723 (insn, operands);
                  break;

                case 3:
                  if (((
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
                    return gen_split_1750 (insn, operands);
                  break;

                case 4:
                  if (((
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
                    return gen_split_1777 (insn, operands);
                  break;

                case 5:
                  if ((
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
                    return gen_split_1804 (insn, operands);
                  break;

                case 6:
                  if (((
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
                    return gen_split_1831 (insn, operands);
                  break;

                case 7:
                  if (((
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
                    return gen_split_1858 (insn, operands);
                  break;

                case 8:
                  if ((
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
                    return gen_split_1885 (insn, operands);
                  break;

                case 9:
                  if (((
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
                    return gen_split_1912 (insn, operands);
                  break;

                case 10:
                  if (((
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
                    return gen_split_1939 (insn, operands);
                  break;

                case 11:
                  if ((
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
                    return gen_split_1966 (insn, operands);
                  break;

                case 12:
                  if (((
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
                    return gen_split_1672 (insn, operands);
                  break;

                case 13:
                  if (((
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
                    return gen_split_1699 (insn, operands);
                  break;

                case 14:
                  if ((
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
                    return gen_split_1726 (insn, operands);
                  break;

                case 15:
                  if (((
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
                    return gen_split_1753 (insn, operands);
                  break;

                case 16:
                  if (((
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
                    return gen_split_1780 (insn, operands);
                  break;

                case 17:
                  if ((
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
                    return gen_split_1807 (insn, operands);
                  break;

                case 18:
                  if (((
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
                    return gen_split_1834 (insn, operands);
                  break;

                case 19:
                  if (((
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
                    return gen_split_1861 (insn, operands);
                  break;

                case 20:
                  if ((
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
                    return gen_split_1888 (insn, operands);
                  break;

                case 21:
                  if (((
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
                    return gen_split_1915 (insn, operands);
                  break;

                case 22:
                  if (((
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
                    return gen_split_1942 (insn, operands);
                  break;

                case 23:
                  if ((
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
                    return gen_split_1969 (insn, operands);
                  break;

                case 24:
                  if (((
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
                    return gen_split_1675 (insn, operands);
                  break;

                case 25:
                  if (((
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
                    return gen_split_1702 (insn, operands);
                  break;

                case 26:
                  if ((
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
                    return gen_split_1729 (insn, operands);
                  break;

                case 27:
                  if (((
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
                    return gen_split_1756 (insn, operands);
                  break;

                case 28:
                  if (((
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
                    return gen_split_1783 (insn, operands);
                  break;

                case 29:
                  if ((
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
                    return gen_split_1810 (insn, operands);
                  break;

                case 30:
                  if (((
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
                    return gen_split_1837 (insn, operands);
                  break;

                case 31:
                  if (((
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
                    return gen_split_1864 (insn, operands);
                  break;

                case 32:
                  if ((
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
                    return gen_split_1891 (insn, operands);
                  break;

                case 33:
                  if (((
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
                    return gen_split_1918 (insn, operands);
                  break;

                case 34:
                  if (((
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
                    return gen_split_1945 (insn, operands);
                  break;

                case 35:
                  if ((
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
                    return gen_split_1972 (insn, operands);
                  break;

                case 36:
                  if (((
#line 13946 "../../gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 332 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)) && 
#line 13950 "../../gcc/config/i386/sse.md"
( 1)))
                    return gen_split_2953 (insn, operands);
                  break;

                case 37:
                  if (((
#line 13946 "../../gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 332 "../../gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 13950 "../../gcc/config/i386/sse.md"
( 1)))
                    return gen_split_2962 (insn, operands);
                  break;

                case 38:
                  if ((
#line 13946 "../../gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 13950 "../../gcc/config/i386/sse.md"
( 1)))
                    return gen_split_2971 (insn, operands);
                  break;

                case 39:
                  if (((
#line 13946 "../../gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 333 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)) && 
#line 13950 "../../gcc/config/i386/sse.md"
( 1)))
                    return gen_split_2980 (insn, operands);
                  break;

                case 40:
                  if (((
#line 13946 "../../gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 333 "../../gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 13950 "../../gcc/config/i386/sse.md"
( 1)))
                    return gen_split_2989 (insn, operands);
                  break;

                case 41:
                  if ((
#line 13946 "../../gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 13950 "../../gcc/config/i386/sse.md"
( 1)))
                    return gen_split_2998 (insn, operands);
                  break;

                case 42:
                  if (((
#line 13946 "../../gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 334 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)) && 
#line 13950 "../../gcc/config/i386/sse.md"
( 1)))
                    return gen_split_3007 (insn, operands);
                  break;

                case 43:
                  if (((
#line 13946 "../../gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 334 "../../gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 13950 "../../gcc/config/i386/sse.md"
( 1)))
                    return gen_split_3016 (insn, operands);
                  break;

                case 44:
                  if ((
#line 13946 "../../gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 13950 "../../gcc/config/i386/sse.md"
( 1)))
                    return gen_split_3025 (insn, operands);
                  break;

                case 45:
                  if (((
#line 13946 "../../gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 335 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)) && 
#line 13950 "../../gcc/config/i386/sse.md"
( 1)))
                    return gen_split_3034 (insn, operands);
                  break;

                case 46:
                  if (((
#line 13946 "../../gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 335 "../../gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 13950 "../../gcc/config/i386/sse.md"
( 1)))
                    return gen_split_3043 (insn, operands);
                  break;

                case 47:
                  if ((
#line 13946 "../../gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 13950 "../../gcc/config/i386/sse.md"
( 1)))
                    return gen_split_3052 (insn, operands);
                  break;

                default:
                  break;
                }
              break;

            case AND:
              switch (pattern535 (x2))
                {
                case 0:
                  if (((
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
                    return gen_split_2317 (insn, operands);
                  break;

                case 1:
                  if (((
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
                    return gen_split_2344 (insn, operands);
                  break;

                case 2:
                  if ((
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
                    return gen_split_2371 (insn, operands);
                  break;

                case 3:
                  if (((
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
                    return gen_split_2398 (insn, operands);
                  break;

                case 4:
                  if (((
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
                    return gen_split_2425 (insn, operands);
                  break;

                case 5:
                  if ((
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
                    return gen_split_2452 (insn, operands);
                  break;

                case 6:
                  if (((
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
                    return gen_split_2479 (insn, operands);
                  break;

                case 7:
                  if (((
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
                    return gen_split_2506 (insn, operands);
                  break;

                case 8:
                  if ((
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
                    return gen_split_2533 (insn, operands);
                  break;

                case 9:
                  if (((
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
                    return gen_split_2560 (insn, operands);
                  break;

                case 10:
                  if (((
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
                    return gen_split_2587 (insn, operands);
                  break;

                case 11:
                  if ((
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
                    return gen_split_2614 (insn, operands);
                  break;

                default:
                  break;
                }
              break;

            case IOR:
              switch (pattern535 (x2))
                {
                case 0:
                  if (((
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
                    return gen_split_2320 (insn, operands);
                  break;

                case 1:
                  if (((
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
                    return gen_split_2347 (insn, operands);
                  break;

                case 2:
                  if ((
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
                    return gen_split_2374 (insn, operands);
                  break;

                case 3:
                  if (((
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
                    return gen_split_2401 (insn, operands);
                  break;

                case 4:
                  if (((
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
                    return gen_split_2428 (insn, operands);
                  break;

                case 5:
                  if ((
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
                    return gen_split_2455 (insn, operands);
                  break;

                case 6:
                  if (((
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
                    return gen_split_2482 (insn, operands);
                  break;

                case 7:
                  if (((
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
                    return gen_split_2509 (insn, operands);
                  break;

                case 8:
                  if ((
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
                    return gen_split_2536 (insn, operands);
                  break;

                case 9:
                  if (((
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
                    return gen_split_2563 (insn, operands);
                  break;

                case 10:
                  if (((
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
                    return gen_split_2590 (insn, operands);
                  break;

                case 11:
                  if ((
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
                    return gen_split_2617 (insn, operands);
                  break;

                default:
                  break;
                }
              break;

            case XOR:
              switch (pattern535 (x2))
                {
                case 0:
                  if (((
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
                    return gen_split_2323 (insn, operands);
                  break;

                case 1:
                  if (((
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
                    return gen_split_2350 (insn, operands);
                  break;

                case 2:
                  if ((
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
                    return gen_split_2377 (insn, operands);
                  break;

                case 3:
                  if (((
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
                    return gen_split_2404 (insn, operands);
                  break;

                case 4:
                  if (((
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
                    return gen_split_2431 (insn, operands);
                  break;

                case 5:
                  if ((
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
                    return gen_split_2458 (insn, operands);
                  break;

                case 6:
                  if (((
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
                    return gen_split_2485 (insn, operands);
                  break;

                case 7:
                  if (((
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
                    return gen_split_2512 (insn, operands);
                  break;

                case 8:
                  if ((
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
                    return gen_split_2539 (insn, operands);
                  break;

                case 9:
                  if (((
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
                    return gen_split_2566 (insn, operands);
                  break;

                case 10:
                  if (((
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
                    return gen_split_2593 (insn, operands);
                  break;

                case 11:
                  if ((
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
                    return gen_split_2620 (insn, operands);
                  break;

                default:
                  break;
                }
              break;

            default:
              break;
            }
          break;

        case REG:
        case SUBREG:
        case MEM:
        case VEC_DUPLICATE:
          operands[1] = x3;
          x5 = XEXP (x2, 1);
          operands[2] = x5;
          switch (GET_MODE (operands[0]))
            {
            case E_V16SImode:
              if (pattern935 (x2, 
E_V16SImode) == 0
                  && ((
#line 18358 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (64 == 64 || TARGET_AVX512VL || TARGET_EVEX512)
   && (!false
       || SImode == SImode
       || SImode == DImode)) && 
#line 569 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)) && 
#line 18369 "../../gcc/config/i386/sse.md"
( reload_completed && !REG_P (operands[1]) && !false
   && optimize_insn_for_speed_p ())))
                return gen_split_3318 (insn, operands);
              break;

            case E_V8DImode:
              if (pattern935 (x2, 
E_V8DImode) == 0
                  && ((
#line 18358 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (64 == 64 || TARGET_AVX512VL || TARGET_EVEX512)
   && (!false
       || DImode == SImode
       || DImode == DImode)) && 
#line 570 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)) && 
#line 18369 "../../gcc/config/i386/sse.md"
( reload_completed && !REG_P (operands[1]) && !false
   && optimize_insn_for_speed_p ())))
                return gen_split_3319 (insn, operands);
              break;

            case E_V64QImode:
              if (pattern935 (x2, 
E_V64QImode) == 0
                  && ((
#line 18358 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (64 == 64 || TARGET_AVX512VL || TARGET_EVEX512)
   && (!false
       || QImode == SImode
       || QImode == DImode)) && 
#line 571 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512)) && 
#line 18369 "../../gcc/config/i386/sse.md"
( reload_completed && !REG_P (operands[1]) && !false
   && optimize_insn_for_speed_p ())))
                return gen_split_3320 (insn, operands);
              break;

            case E_V32QImode:
              if (pattern935 (x2, 
E_V32QImode) == 0
                  && ((
#line 18358 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (32 == 64 || TARGET_AVX512VL || TARGET_EVEX512)
   && (!false
       || QImode == SImode
       || QImode == DImode)) && 
#line 571 "../../gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 18369 "../../gcc/config/i386/sse.md"
( reload_completed && !REG_P (operands[1]) && !false
   && optimize_insn_for_speed_p ())))
                return gen_split_3321 (insn, operands);
              break;

            case E_V16QImode:
              if (pattern935 (x2, 
E_V16QImode) == 0
                  && (
#line 18358 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (16 == 64 || TARGET_AVX512VL || TARGET_EVEX512)
   && (!false
       || QImode == SImode
       || QImode == DImode)) && 
#line 18369 "../../gcc/config/i386/sse.md"
( reload_completed && !REG_P (operands[1]) && !false
   && optimize_insn_for_speed_p ())))
                return gen_split_3322 (insn, operands);
              break;

            case E_V32HImode:
              if (pattern935 (x2, 
E_V32HImode) == 0
                  && ((
#line 18358 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (64 == 64 || TARGET_AVX512VL || TARGET_EVEX512)
   && (!false
       || HImode == SImode
       || HImode == DImode)) && 
#line 572 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512)) && 
#line 18369 "../../gcc/config/i386/sse.md"
( reload_completed && !REG_P (operands[1]) && !false
   && optimize_insn_for_speed_p ())))
                return gen_split_3323 (insn, operands);
              break;

            case E_V16HImode:
              if (pattern935 (x2, 
E_V16HImode) == 0
                  && ((
#line 18358 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (32 == 64 || TARGET_AVX512VL || TARGET_EVEX512)
   && (!false
       || HImode == SImode
       || HImode == DImode)) && 
#line 572 "../../gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 18369 "../../gcc/config/i386/sse.md"
( reload_completed && !REG_P (operands[1]) && !false
   && optimize_insn_for_speed_p ())))
                return gen_split_3324 (insn, operands);
              break;

            case E_V8HImode:
              if (pattern935 (x2, 
E_V8HImode) == 0
                  && (
#line 18358 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (16 == 64 || TARGET_AVX512VL || TARGET_EVEX512)
   && (!false
       || HImode == SImode
       || HImode == DImode)) && 
#line 18369 "../../gcc/config/i386/sse.md"
( reload_completed && !REG_P (operands[1]) && !false
   && optimize_insn_for_speed_p ())))
                return gen_split_3325 (insn, operands);
              break;

            case E_V8SImode:
              if (pattern935 (x2, 
E_V8SImode) == 0
                  && ((
#line 18358 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (32 == 64 || TARGET_AVX512VL || TARGET_EVEX512)
   && (!false
       || SImode == SImode
       || SImode == DImode)) && 
#line 573 "../../gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 18369 "../../gcc/config/i386/sse.md"
( reload_completed && !REG_P (operands[1]) && !false
   && optimize_insn_for_speed_p ())))
                return gen_split_3326 (insn, operands);
              break;

            case E_V4SImode:
              if (pattern935 (x2, 
E_V4SImode) == 0
                  && (
#line 18358 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (16 == 64 || TARGET_AVX512VL || TARGET_EVEX512)
   && (!false
       || SImode == SImode
       || SImode == DImode)) && 
#line 18369 "../../gcc/config/i386/sse.md"
( reload_completed && !REG_P (operands[1]) && !false
   && optimize_insn_for_speed_p ())))
                return gen_split_3327 (insn, operands);
              break;

            case E_V4DImode:
              if (pattern935 (x2, 
E_V4DImode) == 0
                  && ((
#line 18358 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (32 == 64 || TARGET_AVX512VL || TARGET_EVEX512)
   && (!false
       || DImode == SImode
       || DImode == DImode)) && 
#line 574 "../../gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 18369 "../../gcc/config/i386/sse.md"
( reload_completed && !REG_P (operands[1]) && !false
   && optimize_insn_for_speed_p ())))
                return gen_split_3328 (insn, operands);
              break;

            case E_V2DImode:
              if (pattern935 (x2, 
E_V2DImode) == 0
                  && (
#line 18358 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (16 == 64 || TARGET_AVX512VL || TARGET_EVEX512)
   && (!false
       || DImode == SImode
       || DImode == DImode)) && 
#line 18369 "../../gcc/config/i386/sse.md"
( reload_completed && !REG_P (operands[1]) && !false
   && optimize_insn_for_speed_p ())))
                return gen_split_3329 (insn, operands);
              break;

            default:
              break;
            }
          if (GET_CODE (x3) == VEC_DUPLICATE)
            {
              switch (pattern596 (x2))
                {
                case 0:
                  if ((
#line 18663 "../../gcc/config/i386/sse.md"
(64 == 64 || TARGET_AVX512VL
   || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256)) && 
#line 569 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
                    return gen_split_3362 (insn, operands);
                  break;

                case 1:
                  if ((
#line 18663 "../../gcc/config/i386/sse.md"
(64 == 64 || TARGET_AVX512VL
   || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256)) && 
#line 570 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
                    return gen_split_3363 (insn, operands);
                  break;

                case 2:
                  if ((
#line 18663 "../../gcc/config/i386/sse.md"
(64 == 64 || TARGET_AVX512VL
   || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256)) && 
#line 571 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512)))
                    return gen_split_3364 (insn, operands);
                  break;

                case 3:
                  if ((
#line 18663 "../../gcc/config/i386/sse.md"
(32 == 64 || TARGET_AVX512VL
   || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256)) && 
#line 571 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
                    return gen_split_3365 (insn, operands);
                  break;

                case 4:
                  if (
#line 18663 "../../gcc/config/i386/sse.md"
(16 == 64 || TARGET_AVX512VL
   || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256)))
                    return gen_split_3366 (insn, operands);
                  break;

                case 5:
                  if ((
#line 18663 "../../gcc/config/i386/sse.md"
(64 == 64 || TARGET_AVX512VL
   || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256)) && 
#line 572 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512)))
                    return gen_split_3367 (insn, operands);
                  break;

                case 6:
                  if ((
#line 18663 "../../gcc/config/i386/sse.md"
(32 == 64 || TARGET_AVX512VL
   || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256)) && 
#line 572 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
                    return gen_split_3368 (insn, operands);
                  break;

                case 7:
                  if (
#line 18663 "../../gcc/config/i386/sse.md"
(16 == 64 || TARGET_AVX512VL
   || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256)))
                    return gen_split_3369 (insn, operands);
                  break;

                case 8:
                  if ((
#line 18663 "../../gcc/config/i386/sse.md"
(32 == 64 || TARGET_AVX512VL
   || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256)) && 
#line 573 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
                    return gen_split_3370 (insn, operands);
                  break;

                case 9:
                  if (
#line 18663 "../../gcc/config/i386/sse.md"
(16 == 64 || TARGET_AVX512VL
   || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256)))
                    return gen_split_3371 (insn, operands);
                  break;

                case 10:
                  if ((
#line 18663 "../../gcc/config/i386/sse.md"
(32 == 64 || TARGET_AVX512VL
   || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256)) && 
#line 574 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
                    return gen_split_3372 (insn, operands);
                  break;

                case 11:
                  if (
#line 18663 "../../gcc/config/i386/sse.md"
(16 == 64 || TARGET_AVX512VL
   || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256)))
                    return gen_split_3373 (insn, operands);
                  break;

                default:
                  break;
                }
            }
          break;

        default:
          break;
        }
      break;

    default:
      break;
    }
  operands[1] = x2;
  switch (pattern192 ())
    {
    case 0:
      if (((
#line 13747 "../../gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 336 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)) && 
#line 13751 "../../gcc/config/i386/sse.md"
( 1)))
        return gen_split_1637 (insn, operands);
      break;

    case 1:
      if (((
#line 13747 "../../gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 336 "../../gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 13751 "../../gcc/config/i386/sse.md"
( 1)))
        return gen_split_1638 (insn, operands);
      break;

    case 2:
      if ((
#line 13747 "../../gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 13751 "../../gcc/config/i386/sse.md"
( 1)))
        return gen_split_1639 (insn, operands);
      break;

    case 3:
      if (((
#line 13747 "../../gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 337 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)) && 
#line 13751 "../../gcc/config/i386/sse.md"
( 1)))
        return gen_split_1640 (insn, operands);
      break;

    case 4:
      if (((
#line 13747 "../../gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 337 "../../gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 13751 "../../gcc/config/i386/sse.md"
( 1)))
        return gen_split_1641 (insn, operands);
      break;

    case 5:
      if ((
#line 13747 "../../gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 13751 "../../gcc/config/i386/sse.md"
( 1)))
        return gen_split_1642 (insn, operands);
      break;

    case 6:
      if (((
#line 13747 "../../gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 338 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)) && 
#line 13751 "../../gcc/config/i386/sse.md"
( 1)))
        return gen_split_1643 (insn, operands);
      break;

    case 7:
      if (((
#line 13747 "../../gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 338 "../../gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 13751 "../../gcc/config/i386/sse.md"
( 1)))
        return gen_split_1644 (insn, operands);
      break;

    case 8:
      if ((
#line 13747 "../../gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 13751 "../../gcc/config/i386/sse.md"
( 1)))
        return gen_split_1645 (insn, operands);
      break;

    case 9:
      if (((
#line 13747 "../../gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 339 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)) && 
#line 13751 "../../gcc/config/i386/sse.md"
( 1)))
        return gen_split_1646 (insn, operands);
      break;

    case 10:
      if (((
#line 13747 "../../gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 339 "../../gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 13751 "../../gcc/config/i386/sse.md"
( 1)))
        return gen_split_1647 (insn, operands);
      break;

    case 11:
      if (((
#line 13747 "../../gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 339 "../../gcc/config/i386/sse.md"
(TARGET_SSE2)) && 
#line 13751 "../../gcc/config/i386/sse.md"
( 1)))
        return gen_split_1648 (insn, operands);
      break;

    default:
      break;
    }
  switch (GET_CODE (x2))
    {
    case AND:
      return split_76 (x1, insn);

    case IOR:
      return split_75 (x1, insn);

    case XOR:
      return split_74 (x1, insn);

    default:
      return NULL;
    }
}

 rtx_insn *
peephole2_31 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pmatch_len_ ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6;
  rtx_insn *res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case E_SImode:
      if (!memory_operand (x2, E_SImode))
        return NULL;
      operands[1] = x2;
      res = peephole2_30 (x1, insn, pmatch_len_);
      if (res != NULL_RTX)
        return res;
      operands[0] = x2;
      if (!
#line 27661 "../../gcc/config/i386/i386.md"
(optimize_insn_for_speed_p ()
   && ((SImode == HImode
       && TARGET_LCP_STALL)
       || (!TARGET_USE_MOV0
          && TARGET_SPLIT_LONG_MOVES
          && get_attr_length (insn) >= ix86_cur_cost ()->large_insn))
   && peep2_regno_dead_p (0, FLAGS_REG)))
        return NULL;
      *pmatch_len_ = 0;
      return gen_peephole2_258 (insn, operands);

    case E_DImode:
      operands[1] = x2;
      if (!memory_operand (operands[1], E_DImode))
        return NULL;
      if (peep2_current_count >= 2)
        {
          x3 = PATTERN (peep2_next_insn (1));
          if (GET_CODE (x3) == SET)
            {
              x4 = XEXP (x3, 1);
              if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + 0])
                {
                  x5 = XEXP (x3, 0);
                  operands[2] = x5;
                  if (memory_operand (operands[2], E_DImode))
                    {
                      if (peep2_current_count >= 3)
                        {
                          x6 = PATTERN (peep2_next_insn (2));
                          if (pattern1259 (x6, 
E_DImode) == 0
                              && (
#line 26886 "../../gcc/config/i386/i386.md"
(optimize_insn_for_size_p () && peep2_regno_dead_p (0, FLAGS_REG)) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                            {
                              *pmatch_len_ = 3;
                              res = gen_peephole2_218 (insn, operands);
                              if (res != NULL_RTX)
                                return res;
                            }
                        }
                      if ((
#line 26902 "../../gcc/config/i386/i386.md"
(optimize_insn_for_size_p () && peep2_regno_dead_p (0, FLAGS_REG)) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                        {
                          *pmatch_len_ = 1;
                          res = gen_peephole2_220 (insn, operands);
                          if (res != NULL_RTX)
                            return res;
                        }
                    }
                }
            }
        }
      if (!(
#line 26915 "../../gcc/config/i386/i386.md"
(optimize_insn_for_size_p () && peep2_regno_dead_p (0, FLAGS_REG)) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
        return NULL;
      *pmatch_len_ = 0;
      return gen_peephole2_222 (insn, operands);

    default:
      return NULL;
    }
}

 rtx_insn *
peephole2_37 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pmatch_len_ ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12, x13, x14, x15, x16, x17;
  rtx x18, x19, x20, x21, x22, x23, x24, x25;
  rtx x26, x27, x28, x29, x30, x31, x32, x33;
  rtx_insn *res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  switch (GET_CODE (x2))
    {
    case COMPARE:
      operands[1] = x2;
      if (!compare_operator (operands[1], E_VOIDmode))
        return NULL;
      x3 = XEXP (x2, 1);
      if (GET_CODE (x3) != CONST_INT
          || !flags_reg_operand (operands[0], E_VOIDmode))
        return NULL;
      x4 = XEXP (x2, 0);
      switch (GET_CODE (x4))
        {
        case REG:
        case SUBREG:
        case MEM:
          operands[2] = x4;
          if (memory_operand (operands[2], E_SImode)
              && XWINT (x3, 0) == 0L
              && 
#line 27692 "../../gcc/config/i386/i386.md"
(optimize_insn_for_speed_p () && ix86_match_ccmode (insn, CCNOmode)))
            {
              *pmatch_len_ = 0;
              res = gen_peephole2_262 (insn, operands);
              if (res != NULL_RTX)
                return res;
            }
          if (!register_operand (operands[2], E_VOIDmode))
            return NULL;
          operands[3] = x3;
          if (!const_int_operand (operands[3], E_VOIDmode)
              || !
#line 28595 "../../gcc/config/i386/i386.md"
((((!TARGET_FUSE_CMP_AND_BRANCH || optimize_insn_for_size_p ())
     && incdec_operand (operands[3], GET_MODE (operands[3])))
    || (!TARGET_FUSE_CMP_AND_BRANCH
	&& INTVAL (operands[3]) == 128))
   && ix86_match_ccmode (insn, CCGCmode)
   && peep2_reg_dead_p (1, operands[2])))
            return NULL;
          *pmatch_len_ = 0;
          return gen_peephole2_387 (insn, operands);

        case AND:
          if (XWINT (x3, 0) != 0L)
            return NULL;
          x5 = XEXP (x4, 0);
          operands[2] = x5;
          x6 = XEXP (x4, 1);
          operands[3] = x6;
          switch (GET_MODE (x4))
            {
            case E_SImode:
              if (register_operand (operands[2], E_SImode)
                  && immediate_operand (operands[3], E_SImode)
                  && 
#line 27734 "../../gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && (REGNO (operands[2]) != AX_REG
       || satisfies_constraint_K (operands[3]))
   && peep2_reg_dead_p (1, operands[2])))
                {
                  *pmatch_len_ = 0;
                  res = gen_peephole2_266 (insn, operands);
                  if (res != NULL_RTX)
                    return res;
                }
              break;

            case E_QImode:
              if (register_operand (operands[2], E_QImode)
                  && immediate_operand (operands[3], E_QImode)
                  && 
#line 27754 "../../gcc/config/i386/i386.md"
(! TARGET_PARTIAL_REG_STALL
   && ix86_match_ccmode (insn, CCNOmode)
   && REGNO (operands[2]) != AX_REG
   && peep2_reg_dead_p (1, operands[2])))
                {
                  *pmatch_len_ = 0;
                  res = gen_peephole2_267 (insn, operands);
                  if (res != NULL_RTX)
                    return res;
                }
              break;

            default:
              break;
            }
          if (GET_CODE (x5) != SUBREG
              || maybe_ne (SUBREG_BYTE (x5), 0)
              || GET_MODE (x5) != E_QImode)
            return NULL;
          x7 = XEXP (x5, 0);
          switch (GET_CODE (x7))
            {
            case SIGN_EXTRACT:
            case ZERO_EXTRACT:
              operands[4] = x7;
              x8 = XEXP (x7, 1);
              if (x8 != const_int_rtx[MAX_SAVED_CONST_INT + 8])
                return NULL;
              x9 = XEXP (x7, 2);
              if (x9 != const_int_rtx[MAX_SAVED_CONST_INT + 8]
                  || GET_MODE (x4) != E_QImode)
                return NULL;
              x10 = XEXP (x7, 0);
              operands[2] = x10;
              if (!int248_register_operand (operands[2], E_VOIDmode))
                return NULL;
              operands[3] = x6;
              if (!const_int_operand (operands[3], E_VOIDmode))
                return NULL;
              switch (GET_MODE (operands[4]))
                {
                case E_HImode:
                  if (!extract_operator (operands[4], E_HImode)
                      || !
#line 27776 "../../gcc/config/i386/i386.md"
(! TARGET_PARTIAL_REG_STALL
   && ix86_match_ccmode (insn, CCNOmode)
   && REGNO (operands[2]) != AX_REG
   && peep2_reg_dead_p (1, operands[2])))
                    return NULL;
                  *pmatch_len_ = 0;
                  return gen_peephole2_268 (insn, operands);

                case E_SImode:
                  if (!extract_operator (operands[4], E_SImode)
                      || !
#line 27776 "../../gcc/config/i386/i386.md"
(! TARGET_PARTIAL_REG_STALL
   && ix86_match_ccmode (insn, CCNOmode)
   && REGNO (operands[2]) != AX_REG
   && peep2_reg_dead_p (1, operands[2])))
                    return NULL;
                  *pmatch_len_ = 0;
                  return gen_peephole2_269 (insn, operands);

                case E_DImode:
                  if (!extract_operator (operands[4], E_DImode)
                      || !(
#line 27776 "../../gcc/config/i386/i386.md"
(! TARGET_PARTIAL_REG_STALL
   && ix86_match_ccmode (insn, CCNOmode)
   && REGNO (operands[2]) != AX_REG
   && peep2_reg_dead_p (1, operands[2])) && 
#line 1164 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                    return NULL;
                  *pmatch_len_ = 0;
                  return gen_peephole2_270 (insn, operands);

                default:
                  return NULL;
                }

            default:
              return NULL;
            }

        default:
          return NULL;
        }

    case NOT:
      x4 = XEXP (x2, 0);
      operands[1] = x4;
      switch (GET_MODE (operands[0]))
        {
        case E_QImode:
          if (!nonimmediate_gr_operand (operands[0], E_QImode)
              || GET_MODE (x2) != E_QImode
              || !nonimmediate_gr_operand (operands[1], E_QImode)
              || !
#line 27710 "../../gcc/config/i386/i386.md"
(optimize_insn_for_speed_p ()
   && ((TARGET_NOT_UNPAIRABLE
	&& (!MEM_P (operands[0])
	    || !memory_displacement_operand (operands[0], QImode)))
       || (TARGET_NOT_VECTORMODE
	   && long_memory_operand (operands[0], QImode)))
   && peep2_regno_dead_p (0, FLAGS_REG)))
            return NULL;
          *pmatch_len_ = 0;
          return gen_peephole2_263 (insn, operands);

        case E_HImode:
          if (!nonimmediate_gr_operand (operands[0], E_HImode)
              || GET_MODE (x2) != E_HImode
              || !nonimmediate_gr_operand (operands[1], E_HImode)
              || !
#line 27710 "../../gcc/config/i386/i386.md"
(optimize_insn_for_speed_p ()
   && ((TARGET_NOT_UNPAIRABLE
	&& (!MEM_P (operands[0])
	    || !memory_displacement_operand (operands[0], HImode)))
       || (TARGET_NOT_VECTORMODE
	   && long_memory_operand (operands[0], HImode)))
   && peep2_regno_dead_p (0, FLAGS_REG)))
            return NULL;
          *pmatch_len_ = 0;
          return gen_peephole2_264 (insn, operands);

        case E_SImode:
          if (!nonimmediate_gr_operand (operands[0], E_SImode)
              || GET_MODE (x2) != E_SImode
              || !nonimmediate_gr_operand (operands[1], E_SImode)
              || !
#line 27710 "../../gcc/config/i386/i386.md"
(optimize_insn_for_speed_p ()
   && ((TARGET_NOT_UNPAIRABLE
	&& (!MEM_P (operands[0])
	    || !memory_displacement_operand (operands[0], SImode)))
       || (TARGET_NOT_VECTORMODE
	   && long_memory_operand (operands[0], SImode)))
   && peep2_regno_dead_p (0, FLAGS_REG)))
            return NULL;
          *pmatch_len_ = 0;
          return gen_peephole2_265 (insn, operands);

        default:
          return NULL;
        }

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
      if (GET_CODE (x2) == CONST_INT)
        {
          res = peephole2_36 (x1, insn, pmatch_len_);
          if (res != NULL_RTX)
            return res;
        }
      if (peep2_current_count < 2
          || peep2_current_count < 3)
        return NULL;
      operands[1] = x2;
      x11 = PATTERN (peep2_next_insn (1));
      if (pattern600 (x11, 
4) != 0)
        return NULL;
      x12 = XVECEXP (x11, 0, 1);
      if (GET_CODE (x12) != SET)
        return NULL;
      x13 = XEXP (x12, 1);
      if (GET_CODE (x13) != UNSPEC_VOLATILE
          || XVECLEN (x13, 0) != 1)
        return NULL;
      x14 = XVECEXP (x13, 0, 0);
      if (x14 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
        return NULL;
      x15 = XVECEXP (x11, 0, 2);
      if (GET_CODE (x15) != SET)
        return NULL;
      x16 = XEXP (x15, 0);
      if (GET_CODE (x16) != REG
          || REGNO (x16) != 17)
        return NULL;
      x17 = XVECEXP (x11, 0, 0);
      x18 = XEXP (x17, 1);
      x19 = XVECEXP (x18, 0, 0);
      operands[2] = x19;
      x20 = XVECEXP (x18, 0, 2);
      operands[3] = x20;
      if (pattern1689 (x11) != 0)
        return NULL;
      x21 = PATTERN (peep2_next_insn (2));
      if (GET_CODE (x21) != SET)
        return NULL;
      x22 = XEXP (x21, 1);
      if (GET_CODE (x22) != COMPARE)
        return NULL;
      x23 = XEXP (x21, 0);
      if (GET_CODE (x23) != REG
          || REGNO (x23) != 17)
        return NULL;
      x24 = XEXP (x22, 0);
      operands[5] = x24;
      x25 = XEXP (x22, 1);
      operands[6] = x25;
      switch (GET_MODE (operands[0]))
        {
        case E_HImode:
          if (!register_operand (operands[0], E_HImode)
              || !general_operand (operands[1], E_HImode)
              || XINT (x18, 1) != 109
              || GET_MODE (x18) != E_HImode
              || pattern1858 (x11, 
E_HImode) != 0
              || !
#line 521 "../../gcc/config/i386/sync.md"
((rtx_equal_p (operands[0], operands[5])
    && rtx_equal_p (operands[1], operands[6]))
   || (rtx_equal_p (operands[0], operands[6])
       && rtx_equal_p (operands[1], operands[5]))))
            return NULL;
          *pmatch_len_ = 2;
          return gen_peephole2_404 (insn, operands);

        case E_SImode:
          if (!register_operand (operands[0], E_SImode)
              || GET_MODE (x18) != E_SImode)
            return NULL;
          if (XINT (x18, 1) == 109
              && general_operand (operands[1], E_SImode)
              && pattern1858 (x11, 
E_SImode) == 0
              && 
#line 521 "../../gcc/config/i386/sync.md"
((rtx_equal_p (operands[0], operands[5])
    && rtx_equal_p (operands[1], operands[6]))
   || (rtx_equal_p (operands[0], operands[6])
       && rtx_equal_p (operands[1], operands[5]))))
            {
              *pmatch_len_ = 2;
              res = gen_peephole2_405 (insn, operands);
              if (res != NULL_RTX)
                return res;
            }
          if (XINT (x18, 1) != 112
              || pattern1856 (x11, 
E_SImode) != 0)
            return NULL;
          if (
#line 1149 "../../gcc/config/i386/sync.md"
(TARGET_CMPCCXADD && TARGET_64BIT
   && rtx_equal_p (operands[0], operands[5])
   && rtx_equal_p (operands[1], operands[6])))
            {
              *pmatch_len_ = 2;
              res = gen_peephole2_423 (insn, operands);
              if (res != NULL_RTX)
                return res;
            }
          if (peep2_current_count < 4)
            return NULL;
          x26 = PATTERN (peep2_next_insn (3));
          switch (pattern1878 (x26))
            {
            case 0:
              if (!
#line 1191 "../../gcc/config/i386/sync.md"
(TARGET_CMPCCXADD && TARGET_64BIT
   && rtx_equal_p (operands[0], operands[6])
   && rtx_equal_p (operands[1], operands[5])
   && peep2_regno_dead_p (4, FLAGS_REG)))
                return NULL;
              *pmatch_len_ = 3;
              return gen_peephole2_425 (insn, operands);

            case 1:
              if (!
#line 1249 "../../gcc/config/i386/sync.md"
(TARGET_CMPCCXADD && TARGET_64BIT
   && rtx_equal_p (operands[0], operands[6])
   && rtx_equal_p (operands[1], operands[5])
   && peep2_regno_dead_p (4, FLAGS_REG)))
                return NULL;
              *pmatch_len_ = 3;
              return gen_peephole2_427 (insn, operands);

            default:
              return NULL;
            }

        case E_DImode:
          if (!register_operand (operands[0], E_DImode)
              || GET_MODE (x18) != E_DImode)
            return NULL;
          if (XINT (x18, 1) == 109
              && general_operand (operands[1], E_DImode)
              && pattern1858 (x11, 
E_DImode) == 0
              && (
#line 521 "../../gcc/config/i386/sync.md"
((rtx_equal_p (operands[0], operands[5])
    && rtx_equal_p (operands[1], operands[6]))
   || (rtx_equal_p (operands[0], operands[6])
       && rtx_equal_p (operands[1], operands[5]))) && 
#line 1161 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
            {
              *pmatch_len_ = 2;
              res = gen_peephole2_406 (insn, operands);
              if (res != NULL_RTX)
                return res;
            }
          if (XINT (x18, 1) != 112
              || pattern1856 (x11, 
E_DImode) != 0)
            return NULL;
          if (
#line 1149 "../../gcc/config/i386/sync.md"
(TARGET_CMPCCXADD && TARGET_64BIT
   && rtx_equal_p (operands[0], operands[5])
   && rtx_equal_p (operands[1], operands[6])))
            {
              *pmatch_len_ = 2;
              res = gen_peephole2_424 (insn, operands);
              if (res != NULL_RTX)
                return res;
            }
          if (peep2_current_count < 4)
            return NULL;
          x26 = PATTERN (peep2_next_insn (3));
          switch (pattern1878 (x26))
            {
            case 0:
              if (!
#line 1191 "../../gcc/config/i386/sync.md"
(TARGET_CMPCCXADD && TARGET_64BIT
   && rtx_equal_p (operands[0], operands[6])
   && rtx_equal_p (operands[1], operands[5])
   && peep2_regno_dead_p (4, FLAGS_REG)))
                return NULL;
              *pmatch_len_ = 3;
              return gen_peephole2_426 (insn, operands);

            case 1:
              if (!
#line 1249 "../../gcc/config/i386/sync.md"
(TARGET_CMPCCXADD && TARGET_64BIT
   && rtx_equal_p (operands[0], operands[6])
   && rtx_equal_p (operands[1], operands[5])
   && peep2_regno_dead_p (4, FLAGS_REG)))
                return NULL;
              *pmatch_len_ = 3;
              return gen_peephole2_428 (insn, operands);

            default:
              return NULL;
            }

        default:
          return NULL;
        }

    case PLUS:
      switch (pattern23 (x2))
        {
        case 0:
          x3 = XEXP (x2, 1);
          operands[1] = x3;
          if (x86_64_nonmemory_operand (operands[1], E_SImode))
            {
              x4 = XEXP (x2, 0);
              if (rtx_equal_p (x4, operands[0])
                  && 
#line 28375 "../../gcc/config/i386/i386.md"
(!TARGET_OPT_AGU
   && peep2_regno_dead_p (0, FLAGS_REG)))
                {
                  *pmatch_len_ = 0;
                  res = gen_peephole2_338 (insn, operands);
                  if (res != NULL_RTX)
                    return res;
                }
            }
          x4 = XEXP (x2, 0);
          operands[1] = x4;
          if (!x86_64_nonmemory_operand (operands[1], E_SImode)
              || !rtx_equal_p (x3, operands[0])
              || !
#line 28384 "../../gcc/config/i386/i386.md"
(!TARGET_OPT_AGU
   && peep2_regno_dead_p (0, FLAGS_REG)))
            return NULL;
          *pmatch_len_ = 0;
          return gen_peephole2_340 (insn, operands);

        case 1:
          x3 = XEXP (x2, 1);
          operands[1] = x3;
          if (x86_64_nonmemory_operand (operands[1], E_DImode))
            {
              x4 = XEXP (x2, 0);
              if (rtx_equal_p (x4, operands[0])
                  && (
#line 28375 "../../gcc/config/i386/i386.md"
(!TARGET_OPT_AGU
   && peep2_regno_dead_p (0, FLAGS_REG)) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                {
                  *pmatch_len_ = 0;
                  res = gen_peephole2_339 (insn, operands);
                  if (res != NULL_RTX)
                    return res;
                }
            }
          x4 = XEXP (x2, 0);
          operands[1] = x4;
          if (!x86_64_nonmemory_operand (operands[1], E_DImode)
              || !rtx_equal_p (x3, operands[0])
              || !(
#line 28384 "../../gcc/config/i386/i386.md"
(!TARGET_OPT_AGU
   && peep2_regno_dead_p (0, FLAGS_REG)) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return NULL;
          *pmatch_len_ = 0;
          return gen_peephole2_341 (insn, operands);

        default:
          return NULL;
        }

    case ZERO_EXTEND:
      if (GET_MODE (x2) != E_DImode
          || !register_operand (operands[0], E_DImode))
        return NULL;
      x4 = XEXP (x2, 0);
      if (GET_MODE (x4) != E_SImode)
        return NULL;
      switch (GET_CODE (x4))
        {
        case PLUS:
          x5 = XEXP (x4, 0);
          operands[1] = x5;
          x6 = XEXP (x4, 1);
          operands[2] = x6;
          if (nonmemory_operand (operands[2], E_SImode)
              && register_operand (operands[1], E_SImode)
              && 
#line 28394 "../../gcc/config/i386/i386.md"
(TARGET_64BIT && !TARGET_OPT_AGU
   && REGNO (operands[0]) == REGNO (operands[1])
   && peep2_regno_dead_p (0, FLAGS_REG)))
            {
              *pmatch_len_ = 0;
              res = gen_peephole2_342 (insn, operands);
              if (res != NULL_RTX)
                return res;
            }
          if (!register_operand (operands[2], E_SImode)
              || !nonmemory_operand (operands[1], E_SImode)
              || !
#line 28406 "../../gcc/config/i386/i386.md"
(TARGET_64BIT && !TARGET_OPT_AGU
   && REGNO (operands[0]) == REGNO (operands[2])
   && peep2_regno_dead_p (0, FLAGS_REG)))
            return NULL;
          *pmatch_len_ = 0;
          return gen_peephole2_343 (insn, operands);

        case MULT:
          x5 = XEXP (x4, 0);
          operands[1] = x5;
          if (!register_operand (operands[1], E_SImode))
            return NULL;
          x6 = XEXP (x4, 1);
          operands[2] = x6;
          if (!const_int_operand (operands[2], E_SImode)
              || !
#line 28428 "../../gcc/config/i386/i386.md"
(TARGET_64BIT
   && pow2p_hwi (INTVAL (operands[2]))
   && REGNO (operands[0]) == REGNO (operands[1])
   && peep2_regno_dead_p (0, FLAGS_REG)))
            return NULL;
          *pmatch_len_ = 0;
          return gen_peephole2_346 (insn, operands);

        default:
          return NULL;
        }

    case MULT:
      x3 = XEXP (x2, 1);
      operands[1] = x3;
      x4 = XEXP (x2, 0);
      if (!rtx_equal_p (x4, operands[0]))
        return NULL;
      switch (GET_MODE (operands[0]))
        {
        case E_SImode:
          if (!register_operand (operands[0], E_SImode)
              || GET_MODE (x2) != E_SImode
              || !const_int_operand (operands[1], E_SImode)
              || !
#line 28417 "../../gcc/config/i386/i386.md"
(pow2p_hwi (INTVAL (operands[1]))
   && peep2_regno_dead_p (0, FLAGS_REG)))
            return NULL;
          *pmatch_len_ = 0;
          return gen_peephole2_344 (insn, operands);

        case E_DImode:
          if (!register_operand (operands[0], E_DImode)
              || GET_MODE (x2) != E_DImode
              || !const_int_operand (operands[1], E_DImode)
              || !(
#line 28417 "../../gcc/config/i386/i386.md"
(pow2p_hwi (INTVAL (operands[1]))
   && peep2_regno_dead_p (0, FLAGS_REG)) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return NULL;
          *pmatch_len_ = 0;
          return gen_peephole2_345 (insn, operands);

        default:
          return NULL;
        }

    case VEC_CONCAT:
      if (peep2_current_count < 2
          || GET_MODE (x2) != E_V2DFmode
          || !sse_reg_operand (operands[0], E_V2DFmode))
        return NULL;
      x4 = XEXP (x2, 0);
      operands[1] = x4;
      if (!memory_operand (operands[1], E_DFmode))
        return NULL;
      x3 = XEXP (x2, 1);
      operands[4] = x3;
      if (!const0_operand (operands[4], E_DFmode))
        return NULL;
      x11 = PATTERN (peep2_next_insn (1));
      if (GET_CODE (x11) != SET)
        return NULL;
      x27 = XEXP (x11, 1);
      if (GET_CODE (x27) != VEC_CONCAT
          || GET_MODE (x27) != E_V2DFmode)
        return NULL;
      x28 = XEXP (x27, 0);
      if (GET_CODE (x28) != VEC_SELECT
          || GET_MODE (x28) != E_DFmode)
        return NULL;
      x29 = XEXP (x28, 1);
      if (GET_CODE (x29) != PARALLEL
          || XVECLEN (x29, 0) != 1)
        return NULL;
      x30 = XVECEXP (x29, 0, 0);
      if (x30 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
        return NULL;
      x31 = XEXP (x11, 0);
      operands[2] = x31;
      if (!sse_reg_operand (operands[2], E_V2DFmode))
        return NULL;
      x32 = XEXP (x27, 1);
      operands[3] = x32;
      if (!memory_operand (operands[3], E_DFmode))
        return NULL;
      x33 = XEXP (x28, 0);
      if (!rtx_equal_p (x33, operands[2])
          || !
#line 1952 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && TARGET_SSE_UNALIGNED_LOAD_OPTIMAL
   && ix86_operands_ok_for_move_multiple (operands, true, DFmode)))
        return NULL;
      *pmatch_len_ = 1;
      return gen_peephole2_400 (insn, operands);

    default:
      return NULL;
    }
}
