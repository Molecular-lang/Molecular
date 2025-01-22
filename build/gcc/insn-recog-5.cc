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
pattern4 (rtx x1, int *pnum_clobbers)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  operands[1] = x3;
  x4 = XEXP (x2, 1);
  switch (GET_CODE (x4))
    {
    case AND:
      if (pnum_clobbers == NULL
          || GET_MODE (x4) != E_QImode)
        return -1;
      x5 = XEXP (x1, 0);
      operands[0] = x5;
      x6 = XEXP (x4, 0);
      operands[2] = x6;
      if (!register_operand (operands[2], E_QImode))
        return -1;
      return pattern3 (x2); /* [-1, 1] */

    case PLUS:
      if (pnum_clobbers == NULL
          || GET_MODE (x4) != E_QImode)
        return -1;
      x5 = XEXP (x1, 0);
      operands[0] = x5;
      x6 = XEXP (x4, 0);
      operands[2] = x6;
      if (!nonimmediate_operand (operands[2], E_QImode))
        return -1;
      res = pattern3 (x2);
      if (res >= 0)
        return res + 2; /* [2, 3] */
      return -1;

    case MINUS:
      if (pnum_clobbers == NULL
          || GET_MODE (x4) != E_QImode)
        return -1;
      x5 = XEXP (x1, 0);
      operands[0] = x5;
      x6 = XEXP (x4, 0);
      operands[3] = x6;
      if (!const_int_operand (operands[3], E_QImode))
        return -1;
      x7 = XEXP (x4, 1);
      operands[2] = x7;
      if (!nonimmediate_operand (operands[2], E_QImode))
        return -1;
      res = pattern2 (x2);
      if (res >= 0)
        return res + 4; /* [4, 5] */
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
      return 6;

    default:
      return -1;
    }
}

int
pattern33 (rtx x1)
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
    case E_V32QImode:
      if (!register_operand (operands[0], E_V32QImode)
          || GET_MODE (x3) != E_V32QImode
          || !nonimmediate_operand (operands[2], E_V32QImode))
        return -1;
      return 0;

    case E_V16HImode:
      if (!register_operand (operands[0], E_V16HImode)
          || GET_MODE (x3) != E_V16HImode
          || !nonimmediate_operand (operands[2], E_V16HImode))
        return -1;
      return 1;

    case E_V8SImode:
      if (pattern5 (x3, 
E_V8SImode) != 0)
        return -1;
      return 2;

    case E_V16SImode:
      if (pattern5 (x3, 
E_V16SImode) != 0)
        return -1;
      return 3;

    case E_V4SImode:
      if (!register_operand (operands[0], E_V4SImode)
          || GET_MODE (x3) != E_V4SImode)
        return -1;
      return 4;

    case E_V8DImode:
      if (pattern5 (x3, 
E_V8DImode) != 0)
        return -1;
      return 5;

    case E_V4DImode:
      if (pattern5 (x3, 
E_V4DImode) != 0)
        return -1;
      return 6;

    case E_V2DImode:
      if (pattern5 (x3, 
E_V2DImode) != 0)
        return -1;
      return 7;

    case E_V64QImode:
      if (pattern14 (x3, 
E_V64QImode) != 0)
        return -1;
      return 8;

    case E_V16QImode:
      if (!register_operand (operands[0], E_V16QImode)
          || GET_MODE (x3) != E_V16QImode)
        return -1;
      return 9;

    case E_V32HImode:
      if (pattern14 (x3, 
E_V32HImode) != 0)
        return -1;
      return 10;

    case E_V8HImode:
      if (!register_operand (operands[0], E_V8HImode)
          || GET_MODE (x3) != E_V8HImode)
        return -1;
      return 11;

    default:
      return -1;
    }
}

int
pattern43 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) != E_CCCmode)
    return -1;
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) != REG
      || REGNO (x3) != 17)
    return -1;
  x4 = XEXP (x2, 1);
  if (x4 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
    return -1;
  x5 = XEXP (x1, 0);
  if (GET_CODE (x5) != REG
      || REGNO (x5) != 17
      || GET_MODE (x5) != E_CCCmode)
    return -1;
  switch (GET_MODE (x3))
    {
    case E_CCmode:
      return 0;

    case E_CCCmode:
      return 1;

    default:
      return -1;
    }
}

int
pattern51 (rtx x1)
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
  if (!const_int_operand (operands[2], E_VOIDmode))
    return -1;
  switch (GET_MODE (operands[0]))
    {
    case E_QImode:
      if (!mask_reg_operand (operands[0], E_QImode)
          || GET_MODE (x3) != E_QImode
          || !mask_reg_operand (operands[1], E_QImode))
        return -1;
      return 0;

    case E_HImode:
      if (!mask_reg_operand (operands[0], E_HImode)
          || GET_MODE (x3) != E_HImode
          || !mask_reg_operand (operands[1], E_HImode))
        return -1;
      return 1;

    case E_SImode:
      if (!mask_reg_operand (operands[0], E_SImode)
          || GET_MODE (x3) != E_SImode
          || !mask_reg_operand (operands[1], E_SImode))
        return -1;
      return 2;

    case E_DImode:
      if (!mask_reg_operand (operands[0], E_DImode)
          || GET_MODE (x3) != E_DImode
          || !mask_reg_operand (operands[1], E_DImode))
        return -1;
      return 3;

    default:
      return -1;
    }
}

int
pattern65 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) != E_CCmode)
    return -1;
  x3 = XEXP (x1, 0);
  if (GET_CODE (x3) != REG
      || REGNO (x3) != 17
      || GET_MODE (x3) != E_CCmode)
    return -1;
  x4 = XVECEXP (x2, 0, 0);
  operands[0] = x4;
  x5 = XVECEXP (x2, 0, 1);
  operands[1] = x5;
  return 0;
}

int
pattern71 (rtx x1, int *pnum_clobbers)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4;
  int res ATTRIBUTE_UNUSED;
  if (pnum_clobbers == NULL)
    return -1;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  operands[0] = x3;
  switch (GET_MODE (operands[0]))
    {
    case E_QImode:
      x4 = XEXP (x1, 1);
      return pattern70 (x4, 
E_QImode); /* [-1, 0] */

    case E_HImode:
      x4 = XEXP (x1, 1);
      if (pattern70 (x4, 
E_HImode) != 0)
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern80 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4;
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
  x4 = XEXP (x2, 1);
  operands[2] = x4;
  if (!nonmemory_operand (operands[2], E_QImode))
    return -1;
  return 0;
}

int
pattern87 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (!nonimmediate_operand (operands[0], i1)
      || GET_MODE (x1) != i1)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != i1
      || !general_operand (operands[1], i1))
    return -1;
  return 0;
}

int
pattern91 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) != E_BLKmode)
    return -1;
  x3 = XEXP (x1, 0);
  operands[0] = x3;
  if (!memory_operand (operands[0], E_BLKmode))
    return -1;
  x4 = XVECEXP (x2, 0, 0);
  operands[1] = x4;
  if (!register_operand (operands[1], E_SImode))
    return -1;
  x5 = XVECEXP (x2, 0, 1);
  operands[2] = x5;
  if (!register_operand (operands[2], E_SImode))
    return -1;
  return 0;
}

int
pattern100 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12, x13, x14, x15;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != E_V4HImode)
    return -1;
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) != VEC_CONCAT
      || GET_MODE (x3) != E_V8HImode)
    return -1;
  x4 = XEXP (x2, 1);
  if (GET_CODE (x4) != PARALLEL
      || XVECLEN (x4, 0) != 4)
    return -1;
  x5 = XVECEXP (x4, 0, 0);
  if (x5 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
    return -1;
  x6 = XVECEXP (x4, 0, 1);
  if (x6 != const_int_rtx[MAX_SAVED_CONST_INT + 2])
    return -1;
  x7 = XVECEXP (x4, 0, 2);
  if (x7 != const_int_rtx[MAX_SAVED_CONST_INT + 4])
    return -1;
  x8 = XVECEXP (x4, 0, 3);
  if (x8 != const_int_rtx[MAX_SAVED_CONST_INT + 6])
    return -1;
  x9 = XEXP (x1, 1);
  if (GET_CODE (x9) != VEC_SELECT
      || GET_MODE (x9) != E_V4HImode)
    return -1;
  x10 = XEXP (x9, 0);
  if (GET_CODE (x10) != VEC_CONCAT
      || GET_MODE (x10) != E_V8HImode)
    return -1;
  x11 = XEXP (x9, 1);
  if (GET_CODE (x11) != PARALLEL
      || XVECLEN (x11, 0) != 4)
    return -1;
  x12 = XVECEXP (x11, 0, 0);
  if (x12 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
    return -1;
  x13 = XVECEXP (x11, 0, 1);
  if (x13 != const_int_rtx[MAX_SAVED_CONST_INT + 3])
    return -1;
  x14 = XVECEXP (x11, 0, 2);
  if (x14 != const_int_rtx[MAX_SAVED_CONST_INT + 5])
    return -1;
  x15 = XVECEXP (x11, 0, 3);
  if (x15 != const_int_rtx[MAX_SAVED_CONST_INT + 7]
      || !register_operand (operands[0], E_V4HImode)
      || GET_MODE (x1) != E_V4HImode
      || pattern52 (x1) != 0)
    return -1;
  return 0;
}

int
pattern118 (rtx x1, int *pnum_clobbers)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (pnum_clobbers == NULL)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != E_DImode
      || pattern41 (x1, 
E_SImode, 
E_DImode) != 0)
    return -1;
  return 0;
}

int
pattern124 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
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
  x6 = XEXP (x1, 0);
  operands[0] = x6;
  x7 = XEXP (x3, 0);
  operands[1] = x7;
  switch (GET_MODE (operands[0]))
    {
    case E_SImode:
      return pattern123 (x2, 
E_SImode); /* [-1, 1] */

    case E_DImode:
      res = pattern123 (x2, 
E_DImode);
      if (res >= 0)
        return res + 2; /* [2, 3] */
      return -1;

    default:
      return -1;
    }
}

int
pattern135 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  operands[2] = x2;
  x3 = XEXP (x1, 2);
  operands[3] = x3;
  x4 = XEXP (x1, 0);
  x5 = XEXP (x4, 0);
  switch (GET_CODE (x5))
    {
    case REG:
    case SUBREG:
    case MEM:
      operands[1] = x5;
      switch (GET_MODE (operands[0]))
        {
        case E_V8HImode:
          return 0;

        case E_V16HImode:
          return 1;

        case E_V32HImode:
          return 2;

        case E_V8SImode:
          return 3;

        case E_V16SImode:
          return 4;

        case E_V8DImode:
          return 5;

        case E_V4SImode:
          return 6;

        case E_V4DImode:
          return 7;

        case E_V2DImode:
          return 8;

        default:
          return -1;
        }

    case VEC_SELECT:
      x6 = XEXP (x5, 1);
      if (GET_CODE (x6) != PARALLEL)
        return -1;
      x7 = XEXP (x5, 0);
      operands[1] = x7;
      if (!register_operand (operands[3], E_QImode))
        return -1;
      switch (XVECLEN (x6, 0))
        {
        case 4:
          x8 = XVECEXP (x6, 0, 0);
          if (x8 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
            return -1;
          x9 = XVECEXP (x6, 0, 1);
          if (x9 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
            return -1;
          x10 = XVECEXP (x6, 0, 2);
          if (x10 != const_int_rtx[MAX_SAVED_CONST_INT + 2])
            return -1;
          x11 = XVECEXP (x6, 0, 3);
          if (x11 != const_int_rtx[MAX_SAVED_CONST_INT + 3]
              || GET_MODE (x5) != E_V4HFmode
              || !register_operand (operands[1], E_V8HFmode))
            return -1;
          switch (GET_MODE (operands[0]))
            {
            case E_V4SImode:
              if (pattern134 (x1, 
E_V4SImode) != 0)
                return -1;
              return 9;

            case E_V4DImode:
              if (pattern134 (x1, 
E_V4DImode) != 0)
                return -1;
              return 10;

            default:
              return -1;
            }

        case 2:
          x8 = XVECEXP (x6, 0, 0);
          if (x8 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
            return -1;
          x9 = XVECEXP (x6, 0, 1);
          if (x9 != const_int_rtx[MAX_SAVED_CONST_INT + 1]
              || !register_operand (operands[0], E_V2DImode)
              || GET_MODE (x1) != E_V2DImode
              || GET_MODE (x4) != E_V2DImode
              || !nonimm_or_0_operand (operands[2], E_V2DImode))
            return -1;
          switch (GET_MODE (x5))
            {
            case E_V2HFmode:
              if (!nonimmediate_operand (operands[1], E_V8HFmode))
                return -1;
              return 11;

            case E_V2SFmode:
              if (!nonimmediate_operand (operands[1], E_V4SFmode))
                return -1;
              return 12;

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
pattern166 (rtx x1)
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
    case E_V16SFmode:
      return pattern165 (x3, 
E_V16SFmode); /* [-1, 0] */

    case E_V8SFmode:
      if (pattern165 (x3, 
E_V8SFmode) != 0)
        return -1;
      return 1;

    case E_V4SFmode:
      if (pattern165 (x3, 
E_V4SFmode) != 0)
        return -1;
      return 2;

    default:
      return -1;
    }
}

int
pattern177 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  operands[1] = x3;
  x4 = XEXP (x1, 1);
  operands[2] = x4;
  switch (GET_MODE (operands[0]))
    {
    case E_V8HFmode:
      if (!register_operand (operands[0], E_V8HFmode)
          || GET_MODE (x1) != E_V8HFmode)
        return -1;
      switch (GET_MODE (x2))
        {
        case E_V4HFmode:
          if (!const0_operand (operands[2], E_V4HFmode))
            return -1;
          switch (GET_MODE (operands[1]))
            {
            case E_V4SImode:
              if (!vector_operand (operands[1], E_V4SImode))
                return -1;
              return 0;

            case E_V4DImode:
              if (!vector_operand (operands[1], E_V4DImode))
                return -1;
              return 1;

            default:
              return -1;
            }

        case E_V2HFmode:
          if (!vector_operand (operands[1], E_V2DImode)
              || !const0_operand (operands[2], E_V6HFmode))
            return -1;
          return 2;

        default:
          return -1;
        }

    case E_V4SFmode:
      if (pattern176 (x1, 
E_V2SFmode, 
E_V2DImode, 
E_V4SFmode) != 0)
        return -1;
      return 3;

    default:
      return -1;
    }
}

int
pattern191 (rtx x1, rtx_code i1)
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
  operands[2] = x9;
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
      if (x18 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
        return -1;
      x19 = XVECEXP (x7, 0, 1);
      if (x19 != const_int_rtx[MAX_SAVED_CONST_INT + 2])
        return -1;
      x20 = XVECEXP (x7, 0, 2);
      if (x20 != const_int_rtx[MAX_SAVED_CONST_INT + 4])
        return -1;
      x21 = XVECEXP (x7, 0, 3);
      if (x21 != const_int_rtx[MAX_SAVED_CONST_INT + 6])
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
      if (x25 != const_int_rtx[MAX_SAVED_CONST_INT + 14]
          || pattern190 (x1, 
E_V16SImode, 
E_V8SImode, 
E_V8DImode) != 0)
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
      if (x18 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
        return -1;
      x19 = XVECEXP (x7, 0, 1);
      if (x19 != const_int_rtx[MAX_SAVED_CONST_INT + 2])
        return -1;
      x20 = XVECEXP (x7, 0, 2);
      if (x20 != const_int_rtx[MAX_SAVED_CONST_INT + 4])
        return -1;
      x21 = XVECEXP (x7, 0, 3);
      if (x21 != const_int_rtx[MAX_SAVED_CONST_INT + 6]
          || pattern190 (x1, 
E_V8SImode, 
E_V4SImode, 
E_V4DImode) != 0)
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
      if (x18 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
        return -1;
      x19 = XVECEXP (x7, 0, 1);
      if (x19 != const_int_rtx[MAX_SAVED_CONST_INT + 2]
          || !register_operand (operands[0], E_V2DImode)
          || GET_MODE (x1) != E_V2DImode
          || GET_MODE (x2) != E_V2DImode
          || GET_MODE (x3) != E_V2SImode
          || !vector_operand (operands[1], E_V4SImode)
          || GET_MODE (x5) != E_V2DImode
          || GET_MODE (x6) != E_V2SImode
          || !vector_operand (operands[2], E_V4SImode))
        return -1;
      return 2;

    default:
      return -1;
    }
}

int
pattern220 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 0);
  operands[0] = x3;
  x4 = XEXP (x2, 1);
  x5 = XEXP (x4, 0);
  operands[1] = x5;
  x6 = XEXP (x4, 1);
  operands[2] = x6;
  x7 = XVECEXP (x1, 0, 2);
  x8 = XEXP (x7, 0);
  operands[3] = x8;
  switch (GET_MODE (operands[0]))
    {
    case E_DImode:
      if (!register_operand (operands[0], E_DImode)
          || GET_MODE (x4) != E_DImode
          || !register_operand (operands[1], E_DImode)
          || !const_1_to_31_operand (operands[2], E_QImode)
          || !scratch_operand (operands[3], E_SImode))
        return -1;
      return 0;

    case E_TImode:
      if (!register_operand (operands[0], E_TImode)
          || GET_MODE (x4) != E_TImode
          || !register_operand (operands[1], E_TImode)
          || !const_1_to_63_operand (operands[2], E_QImode)
          || !scratch_operand (operands[3], E_DImode))
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern240 (rtx x1)
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
  return 0;
}

int
pattern247 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) != E_CCmode)
    return -1;
  x3 = XEXP (x1, 0);
  if (GET_CODE (x3) != REG
      || REGNO (x3) != 17
      || GET_MODE (x3) != E_CCmode)
    return -1;
  x4 = XVECEXP (x2, 0, 0);
  operands[2] = x4;
  if (!register_operand (operands[2], E_V16QImode))
    return -1;
  x5 = XVECEXP (x2, 0, 1);
  operands[3] = x5;
  return 0;
}

int
pattern257 (rtx x1)
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
      operands[2] = x2;
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
pattern263 (rtx x1, int *pnum_clobbers, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (pnum_clobbers == NULL
      || !register_operand (operands[0], i1)
      || GET_MODE (x1) != i1
      || !general_operand (operands[1], i1))
    return -1;
  return 0;
}

int
pattern268 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  operands[1] = x3;
  x4 = XEXP (x1, 1);
  x5 = XEXP (x4, 0);
  operands[2] = x5;
  switch (GET_MODE (operands[0]))
    {
    case E_V8QImode:
      return pattern267 (x1, 
E_V4HImode, 
E_V4QImode, 
E_V8QImode); /* [-1, 0] */

    case E_V4HImode:
      if (pattern267 (x1, 
E_V2SImode, 
E_V2HImode, 
E_V4HImode) != 0)
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern278 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], E_SImode)
      || GET_MODE (x1) != E_SImode)
    return -1;
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case E_QImode:
      if (!nonimmediate_operand (operands[1], E_QImode))
        return -1;
      return 0;

    case E_HImode:
      if (!nonimmediate_operand (operands[1], E_HImode))
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern285 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 1);
  switch (GET_CODE (x3))
    {
    case REG:
    case SUBREG:
      return 0;

    case AND:
      if (GET_MODE (x3) != E_QImode)
        return -1;
      x4 = XEXP (x3, 0);
      operands[1] = x4;
      if (!register_operand (operands[1], E_QImode))
        return -1;
      x5 = XEXP (x3, 1);
      operands[2] = x5;
      if (!const_int_operand (operands[2], E_QImode))
        return -1;
      res = pattern284 (x1);
      if (res >= 0)
        return res + 1; /* [1, 2] */
      return -1;

    default:
      return -1;
    }
}

int
pattern295 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  operands[1] = x3;
  switch (GET_MODE (operands[0]))
    {
    case E_SImode:
      return pattern293 (x1); /* [-1, 2] */

    case E_DImode:
      res = pattern294 (x1);
      if (res >= 0)
        return res + 3; /* [3, 8] */
      return -1;

    default:
      return -1;
    }
}

int
pattern300 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  operands[1] = x2;
  switch (GET_MODE (operands[0]))
    {
    case E_SImode:
      if (!register_operand (operands[0], E_SImode)
          || GET_MODE (x1) != E_SImode
          || !nonimmediate_operand (operands[1], E_SImode))
        return -1;
      return 0;

    case E_DImode:
      if (!register_operand (operands[0], E_DImode)
          || GET_MODE (x1) != E_DImode
          || !nonimmediate_operand (operands[1], E_DImode))
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern309 (rtx x1, machine_mode i1)
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
  if (GET_MODE (x3) != E_DImode
      || !const0_operand (operands[2], i1))
    return -1;
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
pattern318 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  operands[2] = x2;
  x3 = XEXP (x1, 2);
  if (GET_MODE (x3) != E_QImode)
    return -1;
  switch (GET_CODE (x3))
    {
    case UNSPEC:
      if (XVECLEN (x3, 0) != 3
          || XINT (x3, 1) != 59)
        return -1;
      x4 = XVECEXP (x3, 0, 0);
      operands[3] = x4;
      x5 = XVECEXP (x3, 0, 1);
      operands[4] = x5;
      x6 = XVECEXP (x3, 0, 2);
      operands[5] = x6;
      if (!const_0_to_31_operand (operands[5], E_SImode))
        return -1;
      switch (GET_MODE (operands[0]))
        {
        case E_V8SFmode:
          return pattern316 (x1, 
E_V8SFmode); /* [-1, 0] */

        case E_V4SFmode:
          if (pattern316 (x1, 
E_V4SFmode) != 0)
            return -1;
          return 1;

        case E_V4DFmode:
          if (pattern316 (x1, 
E_V4DFmode) != 0)
            return -1;
          return 2;

        case E_V2DFmode:
          if (pattern316 (x1, 
E_V2DFmode) != 0)
            return -1;
          return 3;

        default:
          return -1;
        }

    case NOT:
      x7 = XEXP (x3, 0);
      if (GET_CODE (x7) != UNSPEC
          || XVECLEN (x7, 0) != 3
          || XINT (x7, 1) != 59
          || GET_MODE (x7) != E_QImode)
        return -1;
      x8 = XVECEXP (x7, 0, 0);
      operands[3] = x8;
      x9 = XVECEXP (x7, 0, 1);
      operands[4] = x9;
      x10 = XVECEXP (x7, 0, 2);
      operands[5] = x10;
      if (!const_0_to_31_operand (operands[5], E_SImode))
        return -1;
      switch (GET_MODE (operands[0]))
        {
        case E_V8SFmode:
          if (pattern317 (x1, 
E_V8SFmode) != 0)
            return -1;
          return 4;

        case E_V4SFmode:
          if (pattern317 (x1, 
E_V4SFmode) != 0)
            return -1;
          return 5;

        case E_V4DFmode:
          if (pattern317 (x1, 
E_V4DFmode) != 0)
            return -1;
          return 6;

        case E_V2DFmode:
          if (pattern317 (x1, 
E_V2DFmode) != 0)
            return -1;
          return 7;

        default:
          return -1;
        }

    default:
      return -1;
    }
}

int
pattern335 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  operands[1] = x3;
  x4 = XEXP (x1, 1);
  switch (GET_CODE (x4))
    {
    case REG:
    case SUBREG:
    case MEM:
    case VEC_DUPLICATE:
      operands[2] = x4;
      return 0;

    case NOT:
      x5 = XEXP (x4, 0);
      operands[2] = x5;
      switch (GET_MODE (operands[0]))
        {
        case E_V16SImode:
          if (pattern334 (x1, 
E_V16SImode) != 0)
            return -1;
          return 1;

        case E_V8DImode:
          if (pattern334 (x1, 
E_V8DImode) != 0)
            return -1;
          return 2;

        case E_V64QImode:
          if (pattern334 (x1, 
E_V64QImode) != 0)
            return -1;
          return 3;

        case E_V32QImode:
          if (pattern334 (x1, 
E_V32QImode) != 0)
            return -1;
          return 4;

        case E_V16QImode:
          if (pattern334 (x1, 
E_V16QImode) != 0)
            return -1;
          return 5;

        case E_V32HImode:
          if (pattern334 (x1, 
E_V32HImode) != 0)
            return -1;
          return 6;

        case E_V16HImode:
          if (pattern334 (x1, 
E_V16HImode) != 0)
            return -1;
          return 7;

        case E_V8HImode:
          if (pattern334 (x1, 
E_V8HImode) != 0)
            return -1;
          return 8;

        case E_V8SImode:
          if (pattern334 (x1, 
E_V8SImode) != 0)
            return -1;
          return 9;

        case E_V4SImode:
          if (pattern334 (x1, 
E_V4SImode) != 0)
            return -1;
          return 10;

        case E_V4DImode:
          if (pattern334 (x1, 
E_V4DImode) != 0)
            return -1;
          return 11;

        case E_V2DImode:
          if (pattern334 (x1, 
E_V2DImode) != 0)
            return -1;
          return 12;

        default:
          return -1;
        }

    default:
      return -1;
    }
}

int
pattern350 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  x4 = XEXP (x3, 0);
  if (XVECLEN (x4, 0) != 3)
    return -1;
  x5 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x5) != SET)
    return -1;
  x6 = XEXP (x5, 1);
  if (GET_CODE (x6) != UNSPEC
      || XVECLEN (x6, 0) != 3)
    return -1;
  return 0;
}

int
pattern354 (rtx x1)
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
  x6 = XEXP (x3, 1);
  operands[3] = x6;
  if (!const_int_operand (operands[3], E_QImode))
    return -1;
  x7 = XEXP (x2, 1);
  x8 = XEXP (x7, 0);
  operands[4] = x8;
  x9 = XEXP (x1, 1);
  switch (GET_CODE (x9))
    {
    case REG:
    case SUBREG:
      operands[1] = x9;
      switch (GET_MODE (operands[0]))
        {
        case E_DImode:
          return pattern352 (x1, 
E_DImode, 
E_SImode); /* [-1, 0] */

        case E_TImode:
          if (pattern352 (x1, 
E_TImode, 
E_DImode) != 0)
            return -1;
          return 1;

        default:
          return -1;
        }

    case ZERO_EXTEND:
      x10 = XEXP (x9, 0);
      operands[1] = x10;
      switch (GET_MODE (operands[0]))
        {
        case E_DImode:
          if (pattern353 (x1, 
E_SImode, 
E_DImode) != 0)
            return -1;
          return 2;

        case E_TImode:
          if (pattern353 (x1, 
E_DImode, 
E_TImode) != 0)
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
pattern364 (rtx x1, rtx_code i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  x4 = XEXP (x3, 1);
  if (x4 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
    return -1;
  x5 = XEXP (x3, 0);
  x6 = XEXP (x5, 0);
  switch (GET_CODE (x6))
    {
    case REG:
    case SUBREG:
    case MEM:
      x7 = XEXP (x5, 1);
      operands[2] = x7;
      return 0;

    case UNSPEC_VOLATILE:
      res = pattern363 (x1, 
i1);
      if (res >= 0)
        return res + 1; /* [1, 4] */
      return -1;

    default:
      return -1;
    }
}

int
pattern370 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 1);
  switch (GET_CODE (x3))
    {
    case REG:
    case SUBREG:
      return 0;

    case AND:
      if (GET_MODE (x3) != E_QImode)
        return -1;
      x4 = XEXP (x3, 0);
      operands[1] = x4;
      if (!register_operand (operands[1], E_QImode))
        return -1;
      x5 = XEXP (x3, 1);
      operands[2] = x5;
      if (!const_int_operand (operands[2], E_QImode))
        return -1;
      x6 = XEXP (x1, 1);
      operands[3] = x6;
      switch (GET_MODE (operands[0]))
        {
        case E_SImode:
          if (pattern369 (x1, 
E_SImode) != 0)
            return -1;
          return 1;

        case E_DImode:
          if (pattern369 (x1, 
E_DImode) != 0)
            return -1;
          return 2;

        default:
          return -1;
        }

    default:
      return -1;
    }
}

int
pattern383 (machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!nonimmediate_operand (operands[3], i2)
      || !nonimmediate_operand (operands[4], i1)
      || !scratch_operand (operands[1], i1)
      || !scratch_operand (operands[2], i1))
    return -1;
  return 0;
}

int
pattern391 (rtx x1, rtx_code i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12, x13, x14;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x2) != SET)
    return -1;
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) != i1)
    return -1;
  x4 = XVECEXP (x1, 0, 3);
  x5 = XEXP (x4, 0);
  if (GET_CODE (x5) != REG
      || REGNO (x5) != 17
      || GET_MODE (x5) != E_CCmode)
    return -1;
  x6 = XVECEXP (x1, 0, 0);
  x7 = XEXP (x6, 0);
  operands[0] = x7;
  x8 = XEXP (x6, 1);
  x9 = XEXP (x8, 0);
  operands[2] = x9;
  x10 = XEXP (x8, 1);
  operands[3] = x10;
  x11 = XEXP (x2, 0);
  operands[1] = x11;
  x12 = XEXP (x3, 0);
  if (!rtx_equal_p (x12, operands[2]))
    return -1;
  x13 = XEXP (x3, 1);
  if (!rtx_equal_p (x13, operands[3]))
    return -1;
  x14 = XVECEXP (x1, 0, 2);
  switch (GET_CODE (x14))
    {
    case UNSPEC:
      return pattern388 (x1); /* [-1, 1] */

    case USE:
      res = pattern390 (x1);
      if (res >= 0)
        return res + 2; /* [2, 4] */
      return -1;

    default:
      return -1;
    }
}

int
pattern409 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1)
    return -1;
  switch (GET_MODE (operands[1]))
    {
    case E_SFmode:
      if (!memory_operand (operands[1], E_SFmode))
        return -1;
      return 0;

    case E_DFmode:
      if (!memory_operand (operands[1], E_DFmode))
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern413 (rtx x1, rtx_code i1, int i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  if (GET_CODE (x1) != PARALLEL
      || XVECLEN (x1, 0) != i2)
    return -1;
  x2 = XVECEXP (x1, 0, 0);
  if (GET_CODE (x2) != SET)
    return -1;
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) != i1)
    return -1;
  return 0;
}

int
pattern416 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) != PARALLEL
      || XVECLEN (x3, 0) != 1)
    return -1;
  x4 = XVECEXP (x3, 0, 0);
  if (x4 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
    return -1;
  x5 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x5) != VEC_SELECT)
    return -1;
  return 0;
}

int
pattern422 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  if (maybe_ne (SUBREG_BYTE (x3), 0)
      || GET_MODE (x3) != E_QImode)
    return -1;
  x4 = XEXP (x3, 0);
  if (GET_CODE (x4) != AND)
    return -1;
  x5 = XEXP (x1, 0);
  operands[0] = x5;
  return pattern421 (x2, 
i1); /* [-1, 0] */
}

int
pattern429 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 1);
  operands[3] = x3;
  x4 = XEXP (x1, 1);
  operands[4] = x4;
  switch (GET_MODE (operands[0]))
    {
    case E_QImode:
      return pattern428 (x1, 
E_QImode); /* [-1, 0] */

    case E_HImode:
      if (pattern428 (x1, 
E_HImode) != 0)
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern440 (rtx x1, machine_mode i1)
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
pattern446 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  if (maybe_ne (SUBREG_BYTE (x3), 0)
      || GET_MODE (x3) != E_QImode)
    return -1;
  x4 = XEXP (x1, 0);
  operands[0] = x4;
  if (!nonimmediate_operand (operands[0], i1)
      || GET_MODE (x2) != i1
      || !nonimmediate_operand (operands[1], i1))
    return -1;
  x5 = XEXP (x3, 0);
  switch (GET_CODE (x5))
    {
    case AND:
      x6 = XEXP (x5, 0);
      operands[2] = x6;
      if (!int248_register_operand (operands[2], E_VOIDmode))
        return -1;
      x7 = XEXP (x5, 1);
      operands[3] = x7;
      if (!const_int_operand (operands[3], E_VOIDmode))
        return -1;
      return 0;

    case PLUS:
      x6 = XEXP (x5, 0);
      operands[2] = x6;
      if (!int248_register_operand (operands[2], E_VOIDmode))
        return -1;
      x7 = XEXP (x5, 1);
      operands[3] = x7;
      if (!const_int_operand (operands[3], E_VOIDmode))
        return -1;
      return 1;

    case MINUS:
      x6 = XEXP (x5, 0);
      operands[3] = x6;
      if (!const_int_operand (operands[3], E_VOIDmode))
        return -1;
      x7 = XEXP (x5, 1);
      operands[2] = x7;
      if (!int248_register_operand (operands[2], E_VOIDmode))
        return -1;
      return 2;

    default:
      return -1;
    }
}

int
pattern466 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  x3 = XVECEXP (x2, 0, 0);
  operands[1] = x3;
  x4 = XVECEXP (x2, 0, 1);
  operands[2] = x4;
  x5 = XEXP (x1, 1);
  operands[3] = x5;
  x6 = XEXP (x1, 2);
  operands[4] = x6;
  switch (GET_MODE (operands[0]))
    {
    case E_V32QImode:
      return pattern465 (x1, 
E_SImode, 
E_V32QImode, 
E_V32HFmode, 
E_V64QImode); /* [-1, 0] */

    case E_V16QImode:
      if (pattern465 (x1, 
E_HImode, 
E_V16QImode, 
E_V16HFmode, 
E_V32QImode) != 0)
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern475 (rtx x1, machine_mode i1)
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
      || !register_operand (operands[2], i1)
      || !nonimmediate_operand (operands[3], i1))
    return -1;
  return 0;
}

int
pattern481 (rtx x1, machine_mode i1, machine_mode i2)
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
      || pattern480 (
i1, 
i2) != 0)
    return -1;
  return 0;
}

int
pattern486 (rtx x1, machine_mode i1, machine_mode i2)
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
      || !nonimm_or_0_operand (operands[3], i1)
      || !register_operand (operands[4], i2))
    return -1;
  return 0;
}

int
pattern491 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i2)
      || GET_MODE (x1) != i2)
    return -1;
  x2 = XVECEXP (x1, 0, 0);
  if (GET_MODE (x2) != i2
      || !register_operand (operands[1], i1))
    return -1;
  return 0;
}

int
pattern492 (rtx x1, machine_mode i1)
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

    default:
      return -1;
    }
}

int
pattern498 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 1);
  x4 = XEXP (x3, 1);
  x5 = XVECEXP (x4, 0, 0);
  if (x5 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
    return -1;
  x6 = XVECEXP (x4, 0, 1);
  if (x6 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
    return -1;
  switch (GET_MODE (operands[0]))
    {
    case E_V8HFmode:
      if (!register_operand (operands[0], E_V8HFmode)
          || GET_MODE (x1) != E_V8HFmode
          || GET_MODE (x2) != E_V2HFmode)
        return -1;
      x7 = XEXP (x2, 0);
      if (GET_MODE (x7) != E_V2HFmode
          || !vector_operand (operands[1], i1)
          || GET_MODE (x3) != E_V2HFmode
          || !nonimm_or_0_operand (operands[2], E_V8HFmode)
          || !const0_operand (operands[4], E_V6HFmode))
        return -1;
      return 0;

    case E_V4SFmode:
      if (pattern497 (x1, 
E_V2SFmode, 
E_V4SFmode, 
i1) != 0)
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern507 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i2)
      || GET_MODE (x1) != i2)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != i1)
    return -1;
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) != i1)
    return -1;
  x4 = XEXP (x2, 1);
  if (GET_MODE (x4) != i1)
    return -1;
  return 0;
}

int
pattern512 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  switch (GET_MODE (operands[0]))
    {
    case E_V16QImode:
      if (!register_operand (operands[0], E_V16QImode)
          || GET_MODE (x1) != E_V16QImode)
        return -1;
      x2 = XEXP (x1, 0);
      switch (GET_MODE (x2))
        {
        case E_V4QImode:
          return pattern511 (
E_V12QImode); /* [-1, 1] */

        case E_V2QImode:
          if (!register_operand (operands[1], E_V2DImode)
              || !const0_operand (operands[2], E_V14QImode))
            return -1;
          return 2;

        case E_V8QImode:
          if (!const0_operand (operands[2], E_V8QImode))
            return -1;
          switch (GET_MODE (operands[1]))
            {
            case E_V8SImode:
              if (!register_operand (operands[1], E_V8SImode))
                return -1;
              return 3;

            case E_V8HImode:
              if (!register_operand (operands[1], E_V8HImode))
                return -1;
              return 4;

            default:
              return -1;
            }

        default:
          return -1;
        }

    case E_V8HImode:
      if (!register_operand (operands[0], E_V8HImode)
          || GET_MODE (x1) != E_V8HImode)
        return -1;
      x2 = XEXP (x1, 0);
      switch (GET_MODE (x2))
        {
        case E_V4HImode:
          res = pattern511 (
E_V4HImode);
          if (res >= 0)
            return res + 5; /* [5, 6] */
          return -1;

        case E_V2HImode:
          if (!register_operand (operands[1], E_V2DImode)
              || !const0_operand (operands[2], E_V6HImode))
            return -1;
          return 7;

        default:
          return -1;
        }

    case E_V4SImode:
      if (!register_operand (operands[0], E_V4SImode)
          || GET_MODE (x1) != E_V4SImode)
        return -1;
      x2 = XEXP (x1, 0);
      if (GET_MODE (x2) != E_V2SImode
          || !register_operand (operands[1], E_V2DImode)
          || !const0_operand (operands[2], E_V2SImode))
        return -1;
      return 8;

    default:
      return -1;
    }
}

int
pattern536 (rtx x1)
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
    case E_V32HFmode:
      return pattern530 (x1, 
E_V32HFmode); /* [-1, 0] */

    case E_V16HFmode:
      if (pattern530 (x1, 
E_V16HFmode) != 0)
        return -1;
      return 1;

    case E_V8HFmode:
      if (pattern530 (x1, 
E_V8HFmode) != 0)
        return -1;
      return 2;

    case E_V32BFmode:
      if (pattern530 (x1, 
E_V32BFmode) != 0)
        return -1;
      return 3;

    case E_V16BFmode:
      if (pattern530 (x1, 
E_V16BFmode) != 0)
        return -1;
      return 4;

    case E_V8BFmode:
      if (pattern530 (x1, 
E_V8BFmode) != 0)
        return -1;
      return 5;

    case E_V16SFmode:
      if (pattern530 (x1, 
E_V16SFmode) != 0)
        return -1;
      return 6;

    case E_V8SFmode:
      if (pattern530 (x1, 
E_V8SFmode) != 0)
        return -1;
      return 7;

    case E_V4SFmode:
      if (pattern530 (x1, 
E_V4SFmode) != 0)
        return -1;
      return 8;

    case E_V8DFmode:
      if (pattern530 (x1, 
E_V8DFmode) != 0)
        return -1;
      return 9;

    case E_V4DFmode:
      if (pattern530 (x1, 
E_V4DFmode) != 0)
        return -1;
      return 10;

    case E_V2DFmode:
      if (pattern530 (x1, 
E_V2DFmode) != 0)
        return -1;
      return 11;

    default:
      return -1;
    }
}

int
pattern542 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) != E_DImode)
    return -1;
  x4 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x4) != SET)
    return -1;
  x5 = XEXP (x4, 1);
  if (GET_CODE (x5) != UNSPEC
      || XVECLEN (x5, 0) != 1
      || XINT (x5, 1) != 107
      || GET_MODE (x5) != E_DImode)
    return -1;
  x6 = XVECEXP (x5, 0, 0);
  if (x6 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
    return -1;
  return 0;
}

int
pattern548 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  switch (GET_MODE (operands[0]))
    {
    case E_HImode:
      if (!nonimmediate_operand (operands[0], E_HImode)
          || GET_MODE (x1) != E_HImode)
        return -1;
      return 0;

    case E_SImode:
      if (!nonimmediate_operand (operands[0], E_SImode)
          || GET_MODE (x1) != E_SImode)
        return -1;
      return 1;

    case E_DImode:
      if (!nonimmediate_operand (operands[0], E_DImode)
          || GET_MODE (x1) != E_DImode)
        return -1;
      return 2;

    default:
      return -1;
    }
}

int
pattern552 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) != E_V2SFmode)
    return -1;
  x4 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x4) != UNSPEC
      || XVECLEN (x4, 0) != 1
      || XINT (x4, 1) != 110)
    return -1;
  x5 = XVECEXP (x4, 0, 0);
  if (x5 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
    return -1;
  x6 = XEXP (x2, 0);
  operands[0] = x6;
  if (!register_operand (operands[0], E_V2SFmode))
    return -1;
  x7 = XVECEXP (x3, 0, 0);
  operands[1] = x7;
  if (!register_operand (operands[1], E_V2SFmode))
    return -1;
  x8 = XVECEXP (x3, 0, 1);
  operands[2] = x8;
  if (!nonimmediate_operand (operands[2], E_V2SFmode))
    return -1;
  return 0;
}

int
pattern564 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!nonimmediate_operand (operands[0], i1)
      || GET_MODE (x1) != i1
      || !nonimmediate_operand (operands[1], i1)
      || !x86_64_hilo_general_operand (operands[2], i1))
    return -1;
  return 0;
}

int
pattern567 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!nonimmediate_operand (operands[0], i1)
      || GET_MODE (x1) != i1
      || !nonimmediate_operand (operands[1], i1)
      || !nonimmediate_or_x86_64_const_vector_operand (operands[2], i1))
    return -1;
  return 0;
}

int
pattern573 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 0);
  operands[0] = x3;
  x4 = XEXP (x2, 1);
  x5 = XEXP (x4, 0);
  operands[1] = x5;
  if (!nonimmediate_operand (operands[1], E_SImode))
    return -1;
  x6 = XVECEXP (x1, 0, 1);
  x7 = XEXP (x6, 0);
  operands[2] = x7;
  if (!memory_operand (operands[2], E_DImode))
    return -1;
  x8 = XVECEXP (x1, 0, 2);
  x9 = XEXP (x8, 0);
  operands[3] = x9;
  if (!scratch_operand (operands[3], E_DImode))
    return -1;
  return pattern385 (x4); /* [-1, 2] */
}

int
pattern582 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) != E_QImode)
    return -1;
  switch (GET_CODE (x2))
    {
    case SUBREG:
      if (maybe_ne (SUBREG_BYTE (x2), 0))
        return -1;
      x3 = XEXP (x2, 0);
      switch (GET_CODE (x3))
        {
        case AND:
          return pattern580 (x1); /* [-1, 3] */

        case PLUS:
          res = pattern580 (x1);
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
          if (!int248_register_operand (operands[2], E_VOIDmode))
            return -1;
          res = pattern579 (x1);
          if (res >= 0)
            return res + 8; /* [8, 11] */
          return -1;

        default:
          return -1;
        }

    case AND:
      res = pattern581 (x1);
      if (res >= 0)
        return res + 12; /* [12, 15] */
      return -1;

    case PLUS:
      res = pattern581 (x1);
      if (res >= 0)
        return res + 16; /* [16, 19] */
      return -1;

    case MINUS:
      x3 = XEXP (x2, 0);
      operands[3] = x3;
      if (!const_int_operand (operands[3], E_QImode))
        return -1;
      x6 = XEXP (x2, 1);
      operands[2] = x6;
      if (!register_operand (operands[2], E_QImode))
        return -1;
      res = pattern579 (x1);
      if (res >= 0)
        return res + 20; /* [20, 23] */
      return -1;

    default:
      return -1;
    }
}

int
pattern599 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  int res ATTRIBUTE_UNUSED;
  if (GET_CODE (x1) != SET)
    return -1;
  x2 = XEXP (x1, 1);
  if (!commutative_operator (x2, E_VOIDmode))
    return -1;
  operands[3] = x2;
  x3 = XEXP (x2, 1);
  operands[2] = x3;
  if (!memory_operand (operands[2], E_VOIDmode))
    return -1;
  x4 = XEXP (x2, 0);
  if (!rtx_equal_p (x4, operands[0]))
    return -1;
  x5 = XEXP (x1, 0);
  if (!rtx_equal_p (x5, operands[0]))
    return -1;
  return 0;
}

int
pattern603 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XVECEXP (x2, 0, 1);
  if (GET_CODE (x3) != AND)
    return -1;
  x4 = XEXP (x1, 0);
  if (GET_MODE (x4) != E_CCZmode
      || GET_MODE (x2) != E_CCZmode)
    return -1;
  x5 = XVECEXP (x2, 0, 0);
  x6 = XEXP (x5, 0);
  operands[0] = x6;
  x7 = XEXP (x5, 1);
  operands[1] = x7;
  x8 = XEXP (x3, 0);
  if (!rtx_equal_p (x8, operands[0]))
    return -1;
  x9 = XEXP (x3, 1);
  if (!rtx_equal_p (x9, operands[1]))
    return -1;
  switch (GET_MODE (x5))
    {
    case E_V16QImode:
      if (!register_operand (operands[0], E_V16QImode)
          || !vector_operand (operands[1], E_V16QImode)
          || GET_MODE (x3) != E_V16QImode)
        return -1;
      return 0;

    case E_V8HImode:
      if (!register_operand (operands[0], E_V8HImode)
          || !vector_operand (operands[1], E_V8HImode)
          || GET_MODE (x3) != E_V8HImode)
        return -1;
      return 1;

    case E_V4SImode:
      if (!register_operand (operands[0], E_V4SImode)
          || !vector_operand (operands[1], E_V4SImode)
          || GET_MODE (x3) != E_V4SImode)
        return -1;
      return 2;

    case E_V2DImode:
      if (!register_operand (operands[0], E_V2DImode)
          || !vector_operand (operands[1], E_V2DImode)
          || GET_MODE (x3) != E_V2DImode)
        return -1;
      return 3;

    case E_V1TImode:
      if (!register_operand (operands[0], E_V1TImode)
          || !vector_operand (operands[1], E_V1TImode)
          || GET_MODE (x3) != E_V1TImode)
        return -1;
      return 4;

    case E_V4SFmode:
      if (!register_operand (operands[0], E_V4SFmode)
          || !vector_operand (operands[1], E_V4SFmode)
          || GET_MODE (x3) != E_V4SFmode)
        return -1;
      return 5;

    case E_V2DFmode:
      if (!register_operand (operands[0], E_V2DFmode)
          || !vector_operand (operands[1], E_V2DFmode)
          || GET_MODE (x3) != E_V2DFmode)
        return -1;
      return 6;

    case E_V32QImode:
      if (!register_operand (operands[0], E_V32QImode)
          || !vector_operand (operands[1], E_V32QImode)
          || GET_MODE (x3) != E_V32QImode)
        return -1;
      return 7;

    case E_V16HImode:
      if (!register_operand (operands[0], E_V16HImode)
          || !vector_operand (operands[1], E_V16HImode)
          || GET_MODE (x3) != E_V16HImode)
        return -1;
      return 8;

    case E_V8SImode:
      if (!register_operand (operands[0], E_V8SImode)
          || !vector_operand (operands[1], E_V8SImode)
          || GET_MODE (x3) != E_V8SImode)
        return -1;
      return 9;

    case E_V4DImode:
      if (!register_operand (operands[0], E_V4DImode)
          || !vector_operand (operands[1], E_V4DImode)
          || GET_MODE (x3) != E_V4DImode)
        return -1;
      return 10;

    case E_V2TImode:
      if (!register_operand (operands[0], E_V2TImode)
          || !vector_operand (operands[1], E_V2TImode)
          || GET_MODE (x3) != E_V2TImode)
        return -1;
      return 11;

    case E_V8SFmode:
      if (!register_operand (operands[0], E_V8SFmode)
          || !vector_operand (operands[1], E_V8SFmode)
          || GET_MODE (x3) != E_V8SFmode)
        return -1;
      return 12;

    case E_V4DFmode:
      if (!register_operand (operands[0], E_V4DFmode)
          || !vector_operand (operands[1], E_V4DFmode)
          || GET_MODE (x3) != E_V4DFmode)
        return -1;
      return 13;

    default:
      return -1;
    }
}

int
pattern648 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 2);
  if (XWINT (x3, 0) != 1L)
    return -1;
  x4 = XVECEXP (x1, 0, 1);
  operands[3] = x4;
  x5 = XEXP (x2, 1);
  if (!rtx_equal_p (x5, operands[1]))
    return -1;
  switch (GET_MODE (operands[0]))
    {
    case E_V8HFmode:
      return pattern647 (x1, 
E_V8HFmode); /* [-1, 0] */

    case E_V4SFmode:
      if (pattern647 (x1, 
E_V4SFmode) != 0)
        return -1;
      return 1;

    case E_V2DFmode:
      if (pattern647 (x1, 
E_V2DFmode) != 0)
        return -1;
      return 2;

    default:
      return -1;
    }
}

int
pattern656 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i2)
      || GET_MODE (x1) != i2
      || !register_operand (operands[1], i2)
      || !vector_operand (operands[2], i2))
    return -1;
  x2 = XVECEXP (x1, 0, 2);
  if (GET_MODE (x2) != i2
      || !register_operand (operands[3], i1)
      || !const0_operand (operands[4], i1))
    return -1;
  return 0;
}

int
pattern661 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i2)
      || GET_MODE (x1) != i2
      || !vector_operand (operands[1], i2)
      || !register_operand (operands[2], i2))
    return -1;
  x2 = XVECEXP (x1, 0, 2);
  if (GET_MODE (x2) != i2
      || !register_operand (operands[3], i1)
      || !vector_all_ones_operand (operands[4], i1))
    return -1;
  return 0;
}

int
pattern665 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 2);
  x3 = XEXP (x2, 0);
  if (maybe_ne (SUBREG_BYTE (x3), 0))
    return -1;
  x4 = XEXP (x3, 0);
  if (GET_CODE (x4) != NOT)
    return -1;
  x5 = XVECEXP (x1, 0, 0);
  operands[2] = x5;
  x6 = XVECEXP (x1, 0, 1);
  operands[1] = x6;
  x7 = XEXP (x4, 0);
  operands[3] = x7;
  if (!register_operand (operands[3], E_VOIDmode))
    return -1;
  x8 = XEXP (x2, 1);
  operands[4] = x8;
  switch (GET_MODE (operands[0]))
    {
    case E_V32QImode:
      return pattern664 (x1, 
E_V32QImode); /* [-1, 0] */

    case E_V16QImode:
      if (pattern664 (x1, 
E_V16QImode) != 0)
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern677 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 1);
  x4 = XVECEXP (x3, 0, 0);
  if (x4 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
    return -1;
  x5 = XVECEXP (x3, 0, 1);
  if (x5 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
    return -1;
  x6 = XVECEXP (x3, 0, 2);
  if (x6 != const_int_rtx[MAX_SAVED_CONST_INT + 2])
    return -1;
  x7 = XVECEXP (x3, 0, 3);
  if (x7 != const_int_rtx[MAX_SAVED_CONST_INT + 3]
      || GET_MODE (x2) != i2)
    return -1;
  x8 = XEXP (x2, 0);
  if (GET_MODE (x8) != i1)
    return -1;
  return pattern27 (x1); /* [-1, 1] */
}

int
pattern685 (rtx x1, rtx_code i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) != SIGN_EXTEND)
    return -1;
  x5 = XEXP (x4, 0);
  if (GET_CODE (x5) != i1
      || pattern684 (x1, 
i1) != 0)
    return -1;
  return 0;
}

int
pattern690 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  operands[0] = x2;
  x3 = XEXP (x1, 1);
  x4 = XEXP (x3, 1);
  x5 = XEXP (x4, 0);
  operands[2] = x5;
  if (!int_nonimmediate_operand (operands[2], E_VOIDmode))
    return -1;
  switch (GET_MODE (operands[0]))
    {
    case E_QImode:
      return pattern688 (x3, 
E_QImode); /* [-1, 0] */

    case E_HImode:
      if (pattern688 (x3, 
E_HImode) != 0)
        return -1;
      return 1;

    case E_SImode:
      if (pattern689 (x3, 
E_SImode) != 0)
        return -1;
      return 2;

    case E_DImode:
      if (pattern689 (x3, 
E_DImode) != 0)
        return -1;
      return 3;

    default:
      return -1;
    }
}

int
pattern698 (rtx x1, int *pnum_clobbers)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 1);
  x3 = XEXP (x2, 0);
  operands[2] = x3;
  switch (GET_MODE (operands[0]))
    {
    case E_TFmode:
      x4 = XVECEXP (x1, 0, 0);
      x5 = XEXP (x4, 1);
      return pattern695 (x5, 
E_TFmode); /* [-1, 0] */

    case E_HFmode:
      if (pnum_clobbers == NULL)
        return -1;
      x4 = XVECEXP (x1, 0, 0);
      x5 = XEXP (x4, 1);
      if (pattern218 (x5, 
E_V8HFmode, 
E_HFmode) != 0)
        return -1;
      return 1;

    case E_SFmode:
      if (pnum_clobbers == NULL)
        return -1;
      x4 = XVECEXP (x1, 0, 0);
      x5 = XEXP (x4, 1);
      if (pattern218 (x5, 
E_V4SFmode, 
E_SFmode) != 0)
        return -1;
      return 2;

    case E_DFmode:
      if (pnum_clobbers == NULL)
        return -1;
      x4 = XVECEXP (x1, 0, 0);
      x5 = XEXP (x4, 1);
      if (pattern218 (x5, 
E_V2DFmode, 
E_DFmode) != 0)
        return -1;
      return 3;

    case E_V2SFmode:
      x4 = XVECEXP (x1, 0, 0);
      x5 = XEXP (x4, 1);
      if (pattern696 (x5) != 0)
        return -1;
      return 4;

    case E_V2BFmode:
      x4 = XVECEXP (x1, 0, 0);
      x5 = XEXP (x4, 1);
      if (pattern697 (x5, 
E_V2BFmode) != 0)
        return -1;
      return 5;

    case E_V4BFmode:
      x4 = XVECEXP (x1, 0, 0);
      x5 = XEXP (x4, 1);
      if (pattern697 (x5, 
E_V4BFmode) != 0)
        return -1;
      return 6;

    case E_V2HFmode:
      x4 = XVECEXP (x1, 0, 0);
      x5 = XEXP (x4, 1);
      if (pattern697 (x5, 
E_V2HFmode) != 0)
        return -1;
      return 7;

    case E_V4HFmode:
      x4 = XVECEXP (x1, 0, 0);
      x5 = XEXP (x4, 1);
      if (pattern697 (x5, 
E_V4HFmode) != 0)
        return -1;
      return 8;

    case E_V32BFmode:
      x4 = XVECEXP (x1, 0, 0);
      x5 = XEXP (x4, 1);
      if (pattern695 (x5, 
E_V32BFmode) != 0)
        return -1;
      return 9;

    case E_V16BFmode:
      x4 = XVECEXP (x1, 0, 0);
      x5 = XEXP (x4, 1);
      if (pattern695 (x5, 
E_V16BFmode) != 0)
        return -1;
      return 10;

    case E_V8BFmode:
      x4 = XVECEXP (x1, 0, 0);
      x5 = XEXP (x4, 1);
      if (pattern695 (x5, 
E_V8BFmode) != 0)
        return -1;
      return 11;

    case E_V32HFmode:
      x4 = XVECEXP (x1, 0, 0);
      x5 = XEXP (x4, 1);
      if (pattern695 (x5, 
E_V32HFmode) != 0)
        return -1;
      return 12;

    case E_V16HFmode:
      x4 = XVECEXP (x1, 0, 0);
      x5 = XEXP (x4, 1);
      if (pattern695 (x5, 
E_V16HFmode) != 0)
        return -1;
      return 13;

    case E_V8HFmode:
      x4 = XVECEXP (x1, 0, 0);
      x5 = XEXP (x4, 1);
      if (pattern695 (x5, 
E_V8HFmode) != 0)
        return -1;
      return 14;

    case E_V16SFmode:
      x4 = XVECEXP (x1, 0, 0);
      x5 = XEXP (x4, 1);
      if (pattern695 (x5, 
E_V16SFmode) != 0)
        return -1;
      return 15;

    case E_V8SFmode:
      x4 = XVECEXP (x1, 0, 0);
      x5 = XEXP (x4, 1);
      if (pattern695 (x5, 
E_V8SFmode) != 0)
        return -1;
      return 16;

    case E_V4SFmode:
      x4 = XVECEXP (x1, 0, 0);
      x5 = XEXP (x4, 1);
      if (pattern695 (x5, 
E_V4SFmode) != 0)
        return -1;
      return 17;

    case E_V8DFmode:
      x4 = XVECEXP (x1, 0, 0);
      x5 = XEXP (x4, 1);
      if (pattern695 (x5, 
E_V8DFmode) != 0)
        return -1;
      return 18;

    case E_V4DFmode:
      x4 = XVECEXP (x1, 0, 0);
      x5 = XEXP (x4, 1);
      if (pattern695 (x5, 
E_V4DFmode) != 0)
        return -1;
      return 19;

    case E_V2DFmode:
      x4 = XVECEXP (x1, 0, 0);
      x5 = XEXP (x4, 1);
      if (pattern695 (x5, 
E_V2DFmode) != 0)
        return -1;
      return 20;

    default:
      return -1;
    }
}

int
pattern746 ()
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  switch (GET_MODE (operands[0]))
    {
    case E_XFmode:
      if (!register_operand (operands[0], E_XFmode)
          || !binary_fp_operator (operands[3], E_XFmode))
        return -1;
      return 0;

    case E_DFmode:
      if (!register_operand (operands[0], E_DFmode)
          || !binary_fp_operator (operands[3], E_DFmode))
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern754 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  operands[1] = x3;
  x4 = XEXP (x1, 1);
  if (!rtx_equal_p (x4, operands[1]))
    return -1;
  switch (GET_MODE (x1))
    {
    case E_SImode:
      if (GET_MODE (x2) != E_SImode
          || !nonimmediate_operand (operands[1], E_SImode))
        return -1;
      return 0;

    case E_DImode:
      if (GET_MODE (x2) != E_DImode
          || !nonimmediate_operand (operands[1], E_DImode))
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern765 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 2);
  switch (GET_CODE (x2))
    {
    case UNSPEC:
      if (XVECLEN (x2, 0) != 3
          || XINT (x2, 1) != 59)
        return -1;
      x3 = XVECEXP (x2, 0, 2);
      if (x3 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
        return -1;
      x4 = XEXP (x1, 0);
      operands[3] = x4;
      x5 = XEXP (x1, 1);
      operands[4] = x5;
      x6 = XVECEXP (x2, 0, 0);
      operands[1] = x6;
      x7 = XVECEXP (x2, 0, 1);
      operands[2] = x7;
      switch (GET_MODE (x1))
        {
        case E_V32QImode:
          return pattern764 (x2, 
E_V32QImode, 
E_SImode); /* [-1, 0] */

        case E_V16QImode:
          if (pattern764 (x2, 
E_V16QImode, 
E_HImode) != 0)
            return -1;
          return 1;

        default:
          return -1;
        }

    case REG:
    case SUBREG:
      operands[1] = x2;
      x4 = XEXP (x1, 0);
      operands[2] = x4;
      x5 = XEXP (x1, 1);
      operands[3] = x5;
      switch (GET_MODE (x1))
        {
        case E_V16QImode:
          if (!vector_all_ones_operand (operands[2], E_V16QImode)
              || !const0_operand (operands[3], E_V16QImode)
              || !register_operand (operands[1], E_HImode))
            return -1;
          return 2;

        case E_V32QImode:
          if (!vector_all_ones_operand (operands[2], E_V32QImode)
              || !const0_operand (operands[3], E_V32QImode)
              || !register_operand (operands[1], E_SImode))
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
pattern791 (rtx x1, int i1, int i2, int i3)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  if (x2 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
    return -1;
  x3 = XVECEXP (x1, 0, 1);
  if (x3 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
    return -1;
  x4 = XVECEXP (x1, 0, 2);
  if (x4 != const_int_rtx[MAX_SAVED_CONST_INT + 2])
    return -1;
  x5 = XVECEXP (x1, 0, 3);
  if (x5 != const_int_rtx[MAX_SAVED_CONST_INT + 3])
    return -1;
  x6 = XVECEXP (x1, 0, 4);
  if (x6 != const_int_rtx[MAX_SAVED_CONST_INT + i3])
    return -1;
  x7 = XVECEXP (x1, 0, 5);
  if (x7 != const_int_rtx[MAX_SAVED_CONST_INT + i2])
    return -1;
  x8 = XVECEXP (x1, 0, 6);
  if (x8 != const_int_rtx[MAX_SAVED_CONST_INT + i1])
    return -1;
  return 0;
}

int
pattern810 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
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
  if (GET_MODE (x4) != i2
      || !vector_operand (operands[1], i1))
    return -1;
  x5 = XEXP (x3, 1);
  if (GET_MODE (x5) != i2
      || !vector_operand (operands[2], i1))
    return -1;
  return 0;
}

int
pattern819 (rtx x1, int *pnum_clobbers)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  x4 = XEXP (x3, 0);
  x5 = XEXP (x4, 0);
  if (GET_MODE (x5) != E_SImode)
    return -1;
  x6 = XEXP (x3, 1);
  if (x6 != const_int_rtx[MAX_SAVED_CONST_INT + 63])
    return -1;
  x7 = XEXP (x2, 0);
  operands[0] = x7;
  if (!register_operand (operands[0], E_DImode)
      || GET_MODE (x3) != E_DImode
      || GET_MODE (x4) != E_DImode)
    return -1;
  x8 = XEXP (x5, 0);
  operands[1] = x8;
  if (!nonimmediate_operand (operands[1], E_SImode))
    return -1;
  x9 = XVECEXP (x1, 0, 1);
  return pattern818 (x9, pnum_clobbers); /* [-1, 1] */
}

int
pattern826 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11;
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
  x9 = XEXP (x8, 0);
  operands[1] = x9;
  if (!register_operand (operands[1], E_SImode))
    return -1;
  x10 = XEXP (x8, 1);
  operands[2] = x10;
  if (!nonimmediate_operand (operands[2], E_SImode))
    return -1;
  x11 = XEXP (x2, 0);
  operands[3] = x11;
  if (!scratch_operand (operands[3], E_SImode))
    return -1;
  return 0;
}

int
pattern836 (rtx x1, int i1, int i2, int i3)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  if (x2 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
    return -1;
  x3 = XVECEXP (x1, 0, 1);
  if (x3 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
    return -1;
  x4 = XVECEXP (x1, 0, 2);
  if (x4 != const_int_rtx[MAX_SAVED_CONST_INT + 2])
    return -1;
  x5 = XVECEXP (x1, 0, 3);
  if (x5 != const_int_rtx[MAX_SAVED_CONST_INT + 3])
    return -1;
  x6 = XVECEXP (x1, 0, 4);
  if (x6 != const_int_rtx[MAX_SAVED_CONST_INT + i3])
    return -1;
  x7 = XVECEXP (x1, 0, 5);
  if (x7 != const_int_rtx[MAX_SAVED_CONST_INT + i2])
    return -1;
  x8 = XVECEXP (x1, 0, 6);
  if (x8 != const_int_rtx[MAX_SAVED_CONST_INT + i1])
    return -1;
  return 0;
}

int
pattern845 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  operands[0] = x3;
  x4 = XEXP (x1, 1);
  operands[1] = x4;
  switch (GET_MODE (x1))
    {
    case E_QImode:
      if (GET_MODE (x2) != E_QImode
          || !register_operand (operands[0], E_QImode)
          || !nonmemory_operand (operands[1], E_QImode))
        return -1;
      return 0;

    case E_HImode:
      if (GET_MODE (x2) != E_HImode
          || !register_operand (operands[0], E_HImode)
          || !nonmemory_operand (operands[1], E_HImode))
        return -1;
      return 1;

    case E_SImode:
      if (GET_MODE (x2) != E_SImode
          || !register_operand (operands[0], E_SImode)
          || !x86_64_szext_nonmemory_operand (operands[1], E_SImode))
        return -1;
      return 2;

    case E_DImode:
      if (GET_MODE (x2) != E_DImode)
        return -1;
      return 3;

    case E_TImode:
      if (GET_MODE (x2) != E_TImode
          || !nonimmediate_operand (operands[0], E_TImode)
          || !nonimmediate_operand (operands[1], E_TImode))
        return -1;
      return 4;

    default:
      return -1;
    }
}

int
pattern857 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || !binary_fp_operator (operands[3], i1)
      || !register_operand (operands[1], i1)
      || GET_MODE (x1) != i1)
    return -1;
  switch (GET_MODE (operands[2]))
    {
    case E_HImode:
      if (!nonimmediate_operand (operands[2], E_HImode))
        return -1;
      return 0;

    case E_SImode:
      if (!nonimmediate_operand (operands[2], E_SImode))
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern868 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != i1
      || !bcst_vector_operand (operands[1], i1)
      || !bcst_vector_operand (operands[2], i1))
    return -1;
  x3 = XEXP (x1, 2);
  if (GET_MODE (x3) != i1
      || !bcst_vector_operand (operands[3], i1))
    return -1;
  return 0;
}

int
pattern876 (rtx x1, machine_mode i1)
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

    case E_V4SFmode:
      if (!register_operand (operands[1], E_V4SFmode))
        return -1;
      return 1;

    case E_V2DFmode:
      if (!register_operand (operands[1], E_V2DFmode))
        return -1;
      return 2;

    default:
      return -1;
    }
}

int
pattern884 (rtx x1, machine_mode i1, machine_mode i2)
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
      || !nonimmediate_operand (operands[1], i2)
      || !register_operand (operands[2], i1))
    return -1;
  return 0;
}

int
pattern894 (rtx x1, machine_mode i1)
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
    case E_V4SImode:
      if (!nonimmediate_operand (operands[1], E_V4SImode))
        return -1;
      return 0;

    case E_V4DImode:
      if (!nonimmediate_operand (operands[1], E_V4DImode))
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern904 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
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
  if (x8 != const_int_rtx[MAX_SAVED_CONST_INT + 3]
      || GET_MODE (x3) != i2)
    return -1;
  x9 = XEXP (x3, 0);
  if (GET_MODE (x9) != i1)
    return -1;
  switch (GET_MODE (operands[0]))
    {
    case E_V4SImode:
      return pattern134 (x1, 
E_V4SImode); /* [-1, 0] */

    case E_V4DImode:
      if (pattern134 (x1, 
E_V4DImode) != 0)
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern916 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!memory_operand (operands[0], i2)
      || GET_MODE (x1) != i2
      || !register_operand (operands[1], i2)
      || !register_operand (operands[2], i1))
    return -1;
  return 0;
}

int
pattern919 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i2)
      || GET_MODE (x1) != i2
      || !register_operand (operands[1], i2)
      || !register_operand (operands[2], i1)
      || !nonimmediate_operand (operands[3], i1))
    return -1;
  return 0;
}

int
pattern923 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i2)
      || GET_MODE (x1) != i2
      || !nonimmediate_operand (operands[1], i1)
      || !const0_operand (operands[2], i1))
    return -1;
  return 0;
}

int
pattern925 (rtx x1, machine_mode i1)
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
  if (GET_MODE (x2) != i1
      || !nonimmediate_operand (operands[3], i1))
    return -1;
  return 0;
}

int
pattern930 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 2);
  if (GET_CODE (x2) != CONST_INT)
    return -1;
  x3 = XVECEXP (x1, 0, 3);
  if (GET_CODE (x3) != CONST_INT)
    return -1;
  x4 = XVECEXP (x1, 0, 4);
  if (GET_CODE (x4) != CONST_INT)
    return -1;
  x5 = XVECEXP (x1, 0, 5);
  if (GET_CODE (x5) != CONST_INT)
    return -1;
  x6 = XVECEXP (x1, 0, 6);
  if (GET_CODE (x6) != CONST_INT)
    return -1;
  x7 = XVECEXP (x1, 0, 7);
  if (GET_CODE (x7) != CONST_INT)
    return -1;
  return 0;
}

int
pattern938 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 1);
  x3 = XEXP (x2, 0);
  operands[2] = x3;
  if (!memory_operand (operands[2], E_DImode))
    return -1;
  x4 = XVECEXP (x1, 0, 0);
  x5 = XEXP (x4, 1);
  return pattern385 (x5); /* [-1, 2] */
}

int
pattern944 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  operands[0] = x2;
  x3 = XEXP (x1, 1);
  x4 = XEXP (x3, 0);
  x5 = XEXP (x4, 0);
  operands[1] = x5;
  x6 = XEXP (x3, 1);
  operands[2] = x6;
  x7 = XEXP (x4, 1);
  switch (GET_CODE (x7))
    {
    case NE:
      return pattern943 (x3); /* [-1, 3] */

    case EQ:
      res = pattern943 (x3);
      if (res >= 0)
        return res + 4; /* [4, 7] */
      return -1;

    default:
      return -1;
    }
}

int
pattern954 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  if (!nonimmediate_operand (operands[0], i2)
      || GET_MODE (x1) != i2)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != i2
      || !register_operand (operands[1], i2))
    return -1;
  x3 = XEXP (x1, 1);
  if (GET_MODE (x3) != i2
      || !nonimmediate_operand (operands[3], i1))
    return -1;
  return 0;
}

int
pattern959 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12, x13, x14, x15, x16, x17;
  rtx x18, x19, x20, x21, x22, x23;
  int res ATTRIBUTE_UNUSED;
  if (!memory_operand (operands[0], i1)
      || !general_reg_operand (operands[1], i1))
    return -1;
  switch (GET_CODE (x1))
    {
    case SET:
      if (peep2_current_count < 4)
        return -1;
      x2 = XEXP (x1, 0);
      operands[2] = x2;
      if (!general_reg_operand (operands[2], i1))
        return -1;
      x3 = XEXP (x1, 1);
      if (!rtx_equal_p (x3, operands[1]))
        return -1;
      x4 = PATTERN (peep2_next_insn (2));
      if (GET_CODE (x4) != PARALLEL
          || XVECLEN (x4, 0) != 2)
        return -1;
      x5 = XVECEXP (x4, 0, 0);
      if (GET_CODE (x5) != SET)
        return -1;
      x6 = XEXP (x5, 1);
      if (GET_CODE (x6) != ASHIFTRT
          || GET_MODE (x6) != i1)
        return -1;
      x7 = XVECEXP (x4, 0, 1);
      if (GET_CODE (x7) != CLOBBER)
        return -1;
      x8 = XEXP (x7, 0);
      if (GET_CODE (x8) != REG
          || REGNO (x8) != 17
          || GET_MODE (x8) != E_CCmode)
        return -1;
      x9 = XEXP (x6, 1);
      operands[4] = x9;
      if (!const_int_operand (operands[4], E_VOIDmode))
        return -1;
      x10 = XEXP (x6, 0);
      if (!rtx_equal_p (x10, operands[2]))
        return -1;
      x11 = XEXP (x5, 0);
      if (!rtx_equal_p (x11, operands[2]))
        return -1;
      x12 = PATTERN (peep2_next_insn (3));
      if (GET_CODE (x12) != SET)
        return -1;
      x13 = XEXP (x12, 0);
      operands[3] = x13;
      if (!memory_operand (operands[3], i1))
        return -1;
      x14 = XEXP (x12, 1);
      if (!rtx_equal_p (x14, operands[2]))
        return -1;
      return 0;

    case PARALLEL:
      if (XVECLEN (x1, 0) != 2)
        return -1;
      x15 = XVECEXP (x1, 0, 0);
      if (GET_CODE (x15) != SET)
        return -1;
      x16 = XEXP (x15, 1);
      if (GET_CODE (x16) != ASHIFTRT
          || GET_MODE (x16) != i1)
        return -1;
      x17 = XVECEXP (x1, 0, 1);
      if (GET_CODE (x17) != CLOBBER)
        return -1;
      x18 = XEXP (x17, 0);
      if (GET_CODE (x18) != REG
          || REGNO (x18) != 17
          || GET_MODE (x18) != E_CCmode)
        return -1;
      x19 = XEXP (x15, 0);
      operands[2] = x19;
      if (!general_reg_operand (operands[2], i1))
        return -1;
      x20 = XEXP (x16, 1);
      operands[4] = x20;
      if (!const_int_operand (operands[4], E_VOIDmode))
        return -1;
      x21 = XEXP (x16, 0);
      if (!rtx_equal_p (x21, operands[1]))
        return -1;
      x4 = PATTERN (peep2_next_insn (2));
      if (GET_CODE (x4) != SET)
        return -1;
      x22 = XEXP (x4, 0);
      operands[3] = x22;
      if (!memory_operand (operands[3], i1))
        return -1;
      x23 = XEXP (x4, 1);
      if (!rtx_equal_p (x23, operands[2]))
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern983 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!vector_all_ones_operand (operands[3], i1)
      || !const0_operand (operands[4], i1)
      || GET_MODE (x1) != i2
      || !register_operand (operands[1], i1)
      || !const0_operand (operands[2], i1))
    return -1;
  return 0;
}

int
pattern988 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  operands[3] = x2;
  switch (GET_MODE (operands[0]))
    {
    case E_DImode:
      if (!register_operand (operands[0], E_DImode)
          || GET_MODE (x1) != E_DImode)
        return -1;
      x3 = XEXP (x1, 0);
      if (GET_MODE (x3) != E_DImode
          || !nonimm_or_0_operand (operands[1], E_V64QImode)
          || !nonimm_or_0_operand (operands[2], E_V64QImode)
          || !register_operand (operands[3], E_DImode))
        return -1;
      return 0;

    case E_SImode:
      if (!register_operand (operands[0], E_SImode)
          || GET_MODE (x1) != E_SImode)
        return -1;
      x3 = XEXP (x1, 0);
      if (GET_MODE (x3) != E_SImode
          || !register_operand (operands[3], E_SImode))
        return -1;
      switch (GET_MODE (operands[1]))
        {
        case E_V32QImode:
          if (!nonimm_or_0_operand (operands[1], E_V32QImode)
              || !nonimm_or_0_operand (operands[2], E_V32QImode))
            return -1;
          return 1;

        case E_V32HImode:
          if (!nonimm_or_0_operand (operands[1], E_V32HImode)
              || !nonimm_or_0_operand (operands[2], E_V32HImode))
            return -1;
          return 2;

        default:
          return -1;
        }

    default:
      return -1;
    }
}

int
pattern1001 (rtx x1, machine_mode i1, machine_mode i2, machine_mode i3)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  if (GET_MODE (x1) != i3)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != i3
      || !register_operand (operands[1], i2))
    return -1;
  x3 = XEXP (x1, 2);
  if (!register_operand (x3, i1))
    return -1;
  return 0;
}

int
pattern1010 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  operands[2] = x4;
  x5 = XEXP (x1, 1);
  operands[1] = x5;
  switch (GET_MODE (operands[0]))
    {
    case E_V8HImode:
      return pattern1009 (x1, 
E_V8HImode, 
E_HImode); /* [-1, 0] */

    case E_V8HFmode:
      if (pattern1009 (x1, 
E_V8HFmode, 
E_HFmode) != 0)
        return -1;
      return 1;

    case E_V8BFmode:
      if (pattern1009 (x1, 
E_V8BFmode, 
E_BFmode) != 0)
        return -1;
      return 2;

    default:
      return -1;
    }
}

int
pattern1021 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (!const48_operand (operands[2], E_SImode))
    return -1;
  switch (GET_MODE (operands[0]))
    {
    case E_V16SImode:
      return pattern1020 (x1, 
E_V16SFmode, 
E_V16SImode); /* [-1, 0] */

    case E_V8SImode:
      if (!register_operand (operands[0], E_V8SImode)
          || GET_MODE (x1) != E_V8SImode)
        return -1;
      x2 = XVECEXP (x1, 0, 0);
      if (GET_MODE (x2) != E_V8SImode)
        return -1;
      switch (GET_MODE (operands[1]))
        {
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

    case E_V4SImode:
      if (pattern1020 (x1, 
E_V4DFmode, 
E_V4SImode) != 0)
        return -1;
      return 3;

    case E_V8DImode:
      if (!register_operand (operands[0], E_V8DImode)
          || GET_MODE (x1) != E_V8DImode)
        return -1;
      x2 = XVECEXP (x1, 0, 0);
      if (GET_MODE (x2) != E_V8DImode)
        return -1;
      switch (GET_MODE (operands[1]))
        {
        case E_V8DFmode:
          if (!register_operand (operands[1], E_V8DFmode))
            return -1;
          return 4;

        case E_V8SFmode:
          if (!register_operand (operands[1], E_V8SFmode))
            return -1;
          return 5;

        default:
          return -1;
        }

    case E_V4DImode:
      if (!register_operand (operands[0], E_V4DImode)
          || GET_MODE (x1) != E_V4DImode)
        return -1;
      x2 = XVECEXP (x1, 0, 0);
      if (GET_MODE (x2) != E_V4DImode)
        return -1;
      switch (GET_MODE (operands[1]))
        {
        case E_V4DFmode:
          if (!register_operand (operands[1], E_V4DFmode))
            return -1;
          return 6;

        case E_V4SFmode:
          if (!register_operand (operands[1], E_V4SFmode))
            return -1;
          return 7;

        default:
          return -1;
        }

    default:
      return -1;
    }
}

int
pattern1049 (rtx x1, machine_mode i1)
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
pattern1053 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], E_V2SFmode)
      || GET_MODE (x1) != E_V2SFmode)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != E_V2SFmode
      || !register_operand (operands[1], E_V2SFmode)
      || !nonimmediate_operand (operands[2], E_V2SFmode))
    return -1;
  return 0;
}

int
pattern1056 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1
      || !const_int_operand (operands[2], i1))
    return -1;
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) != i1)
    return -1;
  return 0;
}

int
pattern1061 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 1);
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) != REG
      || REGNO (x3) != 17
      || GET_MODE (x3) != E_CCmode
      || !register_operand (operands[1], E_XFmode))
    return -1;
  x4 = XVECEXP (x1, 0, 0);
  x5 = XEXP (x4, 1);
  return pattern548 (x5); /* [-1, 2] */
}

int
pattern1067 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (!memory_operand (operands[0], i2)
      || GET_MODE (x1) != i2)
    return -1;
  x2 = XVECEXP (x1, 0, 0);
  if (GET_MODE (x2) != i2
      || !register_operand (operands[1], i1))
    return -1;
  return 0;
}

int
pattern1071 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  operands[4] = x2;
  switch (GET_MODE (operands[0]))
    {
    case E_HImode:
      return pattern1070 (x1, 
E_HImode); /* [-1, 0] */

    case E_QImode:
      if (pattern1070 (x1, 
E_QImode) != 0)
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern1079 (rtx x1, machine_mode i1)
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
pattern1088 (rtx x1, machine_mode i1)
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
pattern1094 (rtx x1)
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
  switch (GET_MODE (x1))
    {
    case E_V8SFmode:
      if (GET_MODE (x2) != E_V8SImode
          || !register_operand (operands[1], E_V8SImode))
        return -1;
      return 0;

    case E_V4SFmode:
      if (GET_MODE (x2) != E_V4SImode
          || !register_operand (operands[1], E_V4SImode))
        return -1;
      return 1;

    case E_V4DFmode:
      if (GET_MODE (x2) != E_V4DImode
          || !register_operand (operands[1], E_V4DImode))
        return -1;
      return 2;

    case E_V2DFmode:
      if (GET_MODE (x2) != E_V2DImode
          || !register_operand (operands[1], E_V2DImode))
        return -1;
      return 3;

    default:
      return -1;
    }
}

int
pattern1102 (rtx x1, machine_mode i1, machine_mode i2)
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
      || !register_operand (operands[2], i2)
      || !nonimm_or_0_operand (operands[3], i2)
      || !register_operand (operands[4], i1))
    return -1;
  return 0;
}

int
pattern1108 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 1);
  operands[4] = x3;
  x4 = XEXP (x2, 2);
  operands[5] = x4;
  if (!register_operand (operands[5], E_QImode))
    return -1;
  x5 = XEXP (x1, 1);
  if (!rtx_equal_p (x5, operands[1]))
    return -1;
  switch (GET_MODE (operands[0]))
    {
    case E_V8HFmode:
      return pattern1107 (x1, 
E_V8HFmode); /* [-1, 0] */

    case E_V4SFmode:
      if (pattern1107 (x1, 
E_V4SFmode) != 0)
        return -1;
      return 1;

    case E_V2DFmode:
      if (pattern1107 (x1, 
E_V2DFmode) != 0)
        return -1;
      return 2;

    default:
      return -1;
    }
}

int
pattern1117 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i2)
      || GET_MODE (x1) != i2
      || !register_operand (operands[1], i2))
    return -1;
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) != i2
      || !nonimmediate_operand (operands[2], i1))
    return -1;
  return 0;
}

int
pattern1125 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 2);
  if (XWINT (x3, 0) != 1L)
    return -1;
  x4 = XEXP (x2, 0);
  x5 = XEXP (x4, 0);
  x6 = XVECEXP (x5, 0, 0);
  operands[1] = x6;
  x7 = XVECEXP (x5, 0, 1);
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
  x11 = XEXP (x2, 1);
  if (!rtx_equal_p (x11, operands[1]))
    return -1;
  switch (GET_MODE (operands[0]))
    {
    case E_V8HFmode:
      return pattern1124 (x1, 
E_V8HFmode); /* [-1, 0] */

    case E_V4SFmode:
      if (pattern1124 (x1, 
E_V4SFmode) != 0)
        return -1;
      return 1;

    case E_V2DFmode:
      if (pattern1124 (x1, 
E_V2DFmode) != 0)
        return -1;
      return 2;

    default:
      return -1;
    }
}

int
pattern1137 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1
      || !register_operand (operands[1], i1)
      || !register_operand (operands[2], i1)
      || !bcst_vector_operand (operands[3], i1))
    return -1;
  return 0;
}

int
pattern1143 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  switch (XWINT (x2, 0))
    {
    case 0L:
      x3 = XVECEXP (x1, 0, 1);
      switch (XWINT (x3, 0))
        {
        case 1L:
          return 0;

        case 2L:
          return 1;

        default:
          return -1;
        }

    case 1L:
      x3 = XVECEXP (x1, 0, 1);
      if (XWINT (x3, 0) != 3L)
        return -1;
      x4 = XVECEXP (x1, 0, 2);
      if (XWINT (x4, 0) != 5L)
        return -1;
      x5 = XVECEXP (x1, 0, 3);
      if (XWINT (x5, 0) != 7L)
        return -1;
      return 2;

    default:
      return -1;
    }
}

int
pattern1154 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (XVECLEN (x1, 0) != 1
      || XINT (x1, 1) != 19
      || GET_MODE (x1) != E_SImode)
    return -1;
  x2 = XVECEXP (x1, 0, 0);
  if (x2 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
    return -1;
  return 0;
}

int
pattern1159 (rtx x1, machine_mode i1)
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
      || !immediate_operand (operands[2], i1))
    return -1;
  return 0;
}

int
pattern1168 (rtx x1)
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
  return pattern202 (x1); /* [-1, 3] */
}

int
pattern1174 (rtx x1)
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
  if (!register_operand (operands[2], E_QImode))
    return -1;
  return 0;
}

int
pattern1182 ()
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  switch (GET_MODE (operands[4]))
    {
    case E_QImode:
      if (!register_operand (operands[4], E_QImode))
        return -1;
      return 0;

    case E_HImode:
      if (!register_operand (operands[4], E_HImode))
        return -1;
      return 1;

    case E_SImode:
      if (!register_operand (operands[4], E_SImode))
        return -1;
      return 2;

    case E_DImode:
      if (!register_operand (operands[4], E_DImode))
        return -1;
      return 3;

    default:
      return -1;
    }
}

int
pattern1192 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6;
  int res ATTRIBUTE_UNUSED;
  if (!rtx_equal_p (x1, operands[0]))
    return -1;
  x2 = PATTERN (peep2_next_insn (2));
  x3 = XEXP (x2, 0);
  switch (GET_CODE (x3))
    {
    case SUBREG:
    case MEM:
      if (!rtx_equal_p (x3, operands[1]))
        return -1;
      return 0;

    case REG:
      if (peep2_current_count < 4)
        return -1;
      operands[5] = x3;
      if (!general_reg_operand (operands[5], i1))
        return -1;
      x4 = PATTERN (peep2_next_insn (3));
      if (GET_CODE (x4) != SET)
        return -1;
      x5 = XEXP (x4, 1);
      if (!rtx_equal_p (x5, operands[5]))
        return -1;
      x6 = XEXP (x4, 0);
      if (!rtx_equal_p (x6, operands[1]))
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern1201 (rtx x1, machine_mode i1, rtx_code i2, machine_mode i3, rtx_code i4)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (GET_CODE (x1) != i4
      || GET_MODE (x1) != i3)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_CODE (x2) != i2
      || GET_MODE (x2) != i1)
    return -1;
  return 0;
}

int
pattern1206 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!nonimmediate_operand (operands[0], i1)
      || GET_MODE (x1) != i1
      || !nonimmediate_operand (operands[1], i1)
      || !ix86_carry_flag_unset_operator (operands[2], i1))
    return -1;
  return 0;
}

int
pattern1211 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != i1
      || !nonimmediate_operand (operands[2], i1)
      || !register_operand (operands[1], i1))
    return -1;
  return 0;
}

int
pattern1217 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  x5 = XEXP (x4, 0);
  x6 = XEXP (x5, 1);
  if (GET_CODE (x6) != PARALLEL
      || XVECLEN (x6, 0) != 1)
    return -1;
  x7 = XVECEXP (x6, 0, 0);
  if (x7 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
    return -1;
  x8 = XEXP (x1, 2);
  if (x8 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
    return -1;
  return 0;
}

int
pattern1225 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], E_V4DImode)
      || GET_MODE (x1) != E_V4DImode)
    return -1;
  x2 = XVECEXP (x1, 0, 0);
  if (GET_MODE (x2) != E_V4DImode)
    return -1;
  switch (GET_MODE (operands[1]))
    {
    case E_V8HFmode:
      if (!register_operand (operands[1], E_V8HFmode))
        return -1;
      return 0;

    case E_V4DFmode:
      if (!register_operand (operands[1], E_V4DFmode))
        return -1;
      return 1;

    case E_V4SFmode:
      if (!register_operand (operands[1], E_V4SFmode))
        return -1;
      return 2;

    default:
      return -1;
    }
}

int
pattern1235 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!memory_operand (operands[0], i1)
      || GET_MODE (x1) != i1
      || !memory_operand (operands[3], i1))
    return -1;
  switch (GET_MODE (operands[1]))
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
pattern1240 (rtx x1, rtx_code i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  if (maybe_ne (SUBREG_BYTE (x2), 0))
    return -1;
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) != i1)
    return -1;
  x4 = XEXP (x3, 0);
  if (GET_CODE (x4) != ZERO_EXTEND)
    return -1;
  switch (GET_MODE (operands[0]))
    {
    case E_DImode:
      if (GET_MODE (x1) != E_DImode)
        return -1;
      x5 = XEXP (x1, 0);
      if (GET_MODE (x5) != E_DImode)
        return -1;
      x6 = XEXP (x5, 1);
      if (!const_0_to_63_operand (x6, E_QImode))
        return -1;
      return 0;

    case E_SImode:
      if (GET_MODE (x1) != E_SImode)
        return -1;
      x5 = XEXP (x1, 0);
      if (GET_MODE (x5) != E_SImode)
        return -1;
      x6 = XEXP (x5, 1);
      if (!const_0_to_31_operand (x6, E_QImode))
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern1247 (rtx x1, machine_mode i1, machine_mode i2, machine_mode i3)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != i3
      || !register_operand (operands[1], i2))
    return -1;
  return 0;
}

int
pattern1254 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  operands[1] = x2;
  switch (GET_MODE (operands[0]))
    {
    case E_V4QImode:
      if (GET_MODE (x1) != E_V4QImode)
        return -1;
      return 0;

    case E_V2QImode:
      if (GET_MODE (x1) != E_V2QImode)
        return -1;
      return 1;

    case E_V2HImode:
      if (GET_MODE (x1) != E_V2HImode)
        return -1;
      return 2;

    case E_QImode:
      if (pattern1253 (x1, 
E_QImode) != 0)
        return -1;
      return 3;

    case E_HImode:
      if (pattern1253 (x1, 
E_HImode) != 0)
        return -1;
      return 4;

    case E_SImode:
      if (pattern1253 (x1, 
E_SImode) != 0)
        return -1;
      return 5;

    case E_DImode:
      if (pattern1253 (x1, 
E_DImode) != 0)
        return -1;
      return 6;

    default:
      return -1;
    }
}

int
pattern1268 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  if (maybe_ne (SUBREG_BYTE (x3), 0)
      || GET_MODE (x3) != E_QImode)
    return -1;
  x4 = XEXP (x3, 0);
  switch (GET_CODE (x4))
    {
    case SIGN_EXTRACT:
    case ZERO_EXTRACT:
      operands[4] = x4;
      x5 = XEXP (x4, 1);
      if (x5 != const_int_rtx[MAX_SAVED_CONST_INT + 8])
        return -1;
      x6 = XEXP (x4, 2);
      if (x6 != const_int_rtx[MAX_SAVED_CONST_INT + 8])
        return -1;
      return pattern1267 (x1); /* [-1, 5] */

    default:
      return -1;
    }
}

int
pattern1278 (rtx x1, machine_mode i1, machine_mode i2, machine_mode i3)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != i1
      || !register_operand (operands[1], i2)
      || !register_operand (operands[2], i1)
      || !nonimmediate_operand (operands[3], i1)
      || !register_operand (operands[4], i3))
    return -1;
  return 0;
}

int
pattern1288 (rtx x1, machine_mode i1, machine_mode i2, machine_mode i3)
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
      || !nonimmediate_operand (operands[1], i1)
      || !nonimm_or_0_operand (operands[2], i1)
      || !register_operand (operands[3], i3))
    return -1;
  return 0;
}

int
pattern1299 (rtx x1, machine_mode i1, machine_mode i2)
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
      || !vector_operand (operands[2], i1))
    return -1;
  x4 = XEXP (x2, 2);
  if (GET_MODE (x4) != i1
      || !register_operand (operands[4], i2))
    return -1;
  return 0;
}

int
pattern1308 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], E_V8SFmode)
      || GET_MODE (x1) != E_V8SFmode)
    return -1;
  x2 = XVECEXP (x1, 0, 0);
  if (GET_MODE (x2) != E_V8SFmode)
    return -1;
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) != E_V8SFmode
      || !nonimm_or_0_operand (operands[2], E_V8SFmode)
      || !register_operand (operands[3], E_QImode))
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
pattern1316 (rtx x1, machine_mode i1, machine_mode i2)
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
  if (!vector_operand (operands[2], i1))
    return -1;
  return 0;
}

int
pattern1321 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!nonimmediate_operand (operands[1], i1)
      || !const_1_to_31_operand (operands[2], E_QImode)
      || !nonimmediate_operand (operands[0], i1)
      || GET_MODE (x1) != i1)
    return -1;
  return 0;
}

int
pattern1325 (rtx x1)
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
      return pattern1324 (x4, 
E_QImode); /* [-1, 0] */

    case E_HImode:
      x4 = XEXP (x1, 1);
      if (pattern1324 (x4, 
E_HImode) != 0)
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern1334 (rtx x1, machine_mode i1, machine_mode i2, machine_mode i3)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i3)
      || GET_MODE (x1) != i3
      || pattern561 (x1, 
i1, 
i2) != 0)
    return -1;
  return 0;
}

int
pattern1339 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  switch (GET_MODE (operands[0]))
    {
    case E_SImode:
      if (!register_operand (operands[0], E_SImode)
          || GET_MODE (x1) != E_SImode
          || !nonimmediate_operand (operands[1], E_SImode))
        return -1;
      return 0;

    case E_DImode:
      if (!register_operand (operands[0], E_DImode)
          || GET_MODE (x1) != E_DImode
          || !nonimmediate_operand (operands[1], E_DImode))
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern1349 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12, x13, x14, x15, x16;
  int res ATTRIBUTE_UNUSED;
  if (!general_reg_operand (operands[0], i1))
    return -1;
  switch (GET_CODE (x1))
    {
    case SET:
      x2 = XEXP (x1, 1);
      switch (GET_CODE (x2))
        {
        case CONST_INT:
          if (XWINT (x2, 0) != 0L)
            return -1;
          x3 = XEXP (x1, 0);
          if (GET_CODE (x3) != ZERO_EXTRACT)
            return -1;
          x4 = XEXP (x3, 1);
          if (x4 != const_int_rtx[MAX_SAVED_CONST_INT + 8])
            return -1;
          x5 = XEXP (x3, 2);
          if (x5 != const_int_rtx[MAX_SAVED_CONST_INT + 8])
            return -1;
          x6 = XEXP (x3, 0);
          operands[1] = x6;
          if (!int248_register_operand (operands[1], E_VOIDmode))
            return -1;
          switch (GET_MODE (x3))
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

        case REG:
        case SUBREG:
        case MEM:
          operands[2] = x2;
          x3 = XEXP (x1, 0);
          if (GET_CODE (x3) != STRICT_LOW_PART)
            return -1;
          x6 = XEXP (x3, 0);
          operands[1] = x6;
          res = pattern1341 ();
          if (res >= 0)
            return res + 3; /* [3, 4] */
          return -1;

        default:
          return -1;
        }

    case PARALLEL:
      if (XVECLEN (x1, 0) != 2)
        return -1;
      x7 = XVECEXP (x1, 0, 0);
      if (GET_CODE (x7) != SET)
        return -1;
      x8 = XEXP (x7, 1);
      switch (GET_CODE (x8))
        {
        case PLUS:
          if (GET_MODE (x8) != i1
              || pattern1344 (x1) != 0)
            return -1;
          return 5;

        case IOR:
          if (GET_MODE (x8) != i1
              || pattern1344 (x1) != 0)
            return -1;
          return 6;

        case XOR:
          if (GET_MODE (x8) != i1
              || pattern1344 (x1) != 0)
            return -1;
          return 7;

        case UNSPEC:
          if (peep2_current_count < 3
              || peep2_current_count < 4
              || XVECLEN (x8, 0) != 2
              || XINT (x8, 1) != 40
              || GET_MODE (x8) != E_CCCmode)
            return -1;
          x9 = XVECEXP (x8, 0, 1);
          if (x9 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
            return -1;
          x10 = XEXP (x7, 0);
          if (GET_CODE (x10) != REG
              || REGNO (x10) != 17
              || GET_MODE (x10) != E_CCCmode)
            return -1;
          x11 = XVECEXP (x1, 0, 1);
          if (GET_CODE (x11) != SET)
            return -1;
          x12 = XEXP (x11, 1);
          if (GET_CODE (x12) != NEG
              || GET_MODE (x12) != i1)
            return -1;
          x13 = XVECEXP (x8, 0, 0);
          operands[1] = x13;
          if (!general_reg_operand (operands[1], i1))
            return -1;
          x14 = XEXP (x12, 0);
          if (!rtx_equal_p (x14, operands[1]))
            return -1;
          x15 = XEXP (x11, 0);
          if (!rtx_equal_p (x15, operands[1]))
            return -1;
          x16 = PATTERN (peep2_next_insn (2));
          if (pattern1196 (x16, 
i1) != 0)
            return -1;
          return 8;

        default:
          return -1;
        }

    default:
      return -1;
    }
}

int
pattern1408 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1)
    return -1;
  x2 = XVECEXP (x1, 0, 0);
  if (GET_MODE (x2) != i1
      || !register_operand (operands[1], i1)
      || !register_operand (operands[2], i1)
      || !register_operand (operands[3], i1))
    return -1;
  return 0;
}

int
pattern1415 (rtx x1)
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
pattern1425 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 1);
  x3 = XEXP (x2, 1);
  x4 = XEXP (x3, 0);
  if (!rtx_equal_p (x4, operands[1]))
    return -1;
  x5 = XEXP (x3, 1);
  if (!rtx_equal_p (x5, operands[2]))
    return -1;
  x6 = XVECEXP (x1, 0, 0);
  x7 = XEXP (x6, 1);
  x8 = XEXP (x7, 0);
  switch (GET_MODE (x8))
    {
    case E_QImode:
      return pattern1423 (x3, 
E_QImode); /* [-1, 0] */

    case E_HImode:
      if (pattern1423 (x3, 
E_HImode) != 0)
        return -1;
      return 1;

    case E_SImode:
      if (pattern1424 (x3, 
E_SImode) != 0)
        return -1;
      return 2;

    case E_DImode:
      if (pattern1424 (x3, 
E_DImode) != 0)
        return -1;
      return 3;

    default:
      return -1;
    }
}

int
pattern1439 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (!memory_operand (operands[0], i1)
      || GET_MODE (x1) != i1)
    return -1;
  x2 = XVECEXP (x1, 0, 0);
  if (GET_MODE (x2) != i1
      || !nonmemory_operand (operands[1], i1))
    return -1;
  return 0;
}

int
pattern1447 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || !addsub_vm_operator (operands[6], i1))
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
pattern1456 (rtx x1, machine_mode i1, machine_mode i2, machine_mode i3)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != i1
      || !register_operand (operands[2], i2)
      || !register_operand (operands[1], i1)
      || !nonimmediate_operand (operands[3], i1))
    return -1;
  x3 = XEXP (x1, 1);
  if (GET_MODE (x3) != i1
      || !register_operand (operands[4], i3))
    return -1;
  return 0;
}

int
pattern1465 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i2)
      || GET_MODE (x1) != i2
      || !vector_operand (operands[1], i2)
      || !vector_operand (operands[2], i2))
    return -1;
  x2 = XEXP (x1, 2);
  if (GET_MODE (x2) != E_QImode
      || !register_operand (operands[3], i1)
      || !const0_operand (operands[4], i1))
    return -1;
  return 0;
}

int
pattern1474 (rtx x1, machine_mode i1, machine_mode i2)
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
      || !nonimmediate_operand (operands[2], i2)
      || !nonimm_or_0_operand (operands[3], i1))
    return -1;
  return 0;
}

int
pattern1481 (rtx x1, machine_mode i1)
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
      || !nonimm_or_0_operand (operands[2], i1)
      || !register_operand (operands[3], E_QImode))
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
pattern1490 (machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[1], i1)
      || !const_0_to_15_operand (operands[2], E_VOIDmode)
      || !const_0_to_15_operand (operands[3], E_VOIDmode)
      || !const_0_to_15_operand (operands[4], E_VOIDmode)
      || !const_0_to_15_operand (operands[5], E_VOIDmode))
    return -1;
  return 0;
}

int
pattern1500 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
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
  if (GET_MODE (x4) != i2
      || !nonimmediate_operand (operands[1], i1))
    return -1;
  x5 = XEXP (x3, 1);
  if (GET_MODE (x5) != i2
      || !nonimmediate_operand (operands[2], i1)
      || !scratch_operand (operands[3], i1))
    return -1;
  return 0;
}

int
pattern1510 ()
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  switch (GET_MODE (operands[1]))
    {
    case E_V8HFmode:
      if (!register_operand (operands[1], E_V8HFmode)
          || !nonimmediate_operand (operands[2], E_V8HFmode))
        return -1;
      return 0;

    case E_V4SFmode:
      if (!register_operand (operands[1], E_V4SFmode)
          || !nonimmediate_operand (operands[2], E_V4SFmode))
        return -1;
      return 1;

    case E_V2DFmode:
      if (!register_operand (operands[1], E_V2DFmode)
          || !nonimmediate_operand (operands[2], E_V2DFmode))
        return -1;
      return 2;

    default:
      return -1;
    }
}

int
pattern1525 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!nonimmediate_operand (operands[0], i1)
      || GET_MODE (x1) != i1
      || !ix86_carry_flag_operator (operands[2], i1)
      || !nonimmediate_operand (operands[1], i1))
    return -1;
  return 0;
}

int
pattern1532 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1)
    return -1;
  x2 = XEXP (x1, 2);
  return pattern1471 (x2, 
i1, 
i2); /* [-1, 0] */
}

int
pattern1536 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  if (GET_CODE (x1) != SET)
    return -1;
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) != COMPARE
      || GET_MODE (x2) != E_CCZmode)
    return -1;
  x3 = XEXP (x1, 0);
  if (GET_CODE (x3) != REG
      || REGNO (x3) != 17
      || GET_MODE (x3) != E_CCZmode)
    return -1;
  return 0;
}

int
pattern1543 (rtx x1, machine_mode i1)
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
      || !nonimmediate_operand (operands[1], i1)
      || !nonimmediate_operand (operands[2], i1))
    return -1;
  x4 = XEXP (x3, 2);
  if (GET_MODE (x4) != i1
      || !nonimmediate_operand (operands[3], i1)
      || !const0_operand (operands[4], i1))
    return -1;
  return 0;
}

int
pattern1552 (rtx x1, machine_mode i1, machine_mode i2)
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
      || !nonimmediate_operand (operands[2], i1)
      || !nonimm_or_0_operand (operands[3], i1)
      || !register_operand (operands[4], i2))
    return -1;
  return 0;
}

int
pattern1560 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1
      || !register_operand (operands[2], i1))
    return -1;
  x2 = XVECEXP (x1, 0, 2);
  if (GET_MODE (x2) != i1)
    return -1;
  return 0;
}

int
pattern1565 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!nonimmediate_operand (operands[0], i1)
      || GET_MODE (x1) != i1
      || !nonimmediate_operand (operands[1], i1)
      || !ix86_carry_flag_unset_operator (operands[2], i1))
    return -1;
  return 0;
}

int
pattern1573 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) != i1
      || !register_operand (operands[2], i1))
    return -1;
  switch (GET_MODE (operands[1]))
    {
    case E_SImode:
      if (!register_operand (operands[1], E_SImode)
          || !register_operand (operands[0], E_SImode))
        return -1;
      x4 = XVECEXP (x1, 0, 1);
      x5 = XEXP (x4, 1);
      if (GET_MODE (x5) != E_SImode)
        return -1;
      return 0;

    case E_DImode:
      if (!register_operand (operands[1], E_DImode)
          || !register_operand (operands[0], E_DImode))
        return -1;
      x4 = XVECEXP (x1, 0, 1);
      x5 = XEXP (x4, 1);
      if (GET_MODE (x5) != E_DImode)
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern1587 (machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[2], i1)
      || !register_operand (operands[3], i1)
      || !const0_operand (operands[4], i1)
      || !register_operand (operands[5], i2))
    return -1;
  return 0;
}

int
pattern1592 (rtx x1, machine_mode i1, machine_mode i2)
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
      || !register_operand (operands[2], i1))
    return -1;
  x4 = XEXP (x3, 2);
  if (GET_MODE (x4) != i1
      || !register_operand (operands[4], i2))
    return -1;
  return 0;
}

int
pattern1601 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4;
  int res ATTRIBUTE_UNUSED;
  if (!vsib_mem_operator (operands[5], i1)
      || !register_operand (operands[6], E_QImode))
    return -1;
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) != i1)
    return -1;
  x3 = XEXP (x1, 0);
  x4 = XEXP (x3, 0);
  switch (GET_MODE (x4))
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
pattern1610 (machine_mode i1)
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

    case E_V4DImode:
      if (!register_operand (operands[2], E_V4DImode))
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern1619 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  if (!rtx_equal_p (x2, operands[2]))
    return -1;
  x3 = XEXP (x1, 1);
  if (!rtx_equal_p (x3, operands[3]))
    return -1;
  switch (GET_CODE (operands[3]))
    {
    case REG:
    case SUBREG:
    case MEM:
      if (!nonimmediate_operand (operands[3], E_SImode))
        return -1;
      return 0;

    case CONST_INT:
      if (!const_int_operand (operands[3], E_SImode))
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern1628 (rtx x1, machine_mode i1)
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
      || !x86_64_general_operand (operands[2], i1))
    return -1;
  return 0;
}

int
pattern1638 (rtx x1, machine_mode i1, machine_mode i2)
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
      || !nonimmediate_operand (operands[2], i1))
    return -1;
  return 0;
}

int
pattern1646 (rtx x1, machine_mode i1)
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
      || !nonimmediate_operand (operands[1], i1)
      || !register_operand (operands[2], i1))
    return -1;
  x4 = XEXP (x3, 2);
  if (GET_MODE (x4) != i1
      || !register_operand (operands[3], i1))
    return -1;
  return 0;
}

int
pattern1656 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 2);
  if (XWINT (x2, 0) != 2L)
    return -1;
  x3 = XVECEXP (x1, 0, 3);
  if (XWINT (x3, 0) != 2L)
    return -1;
  x4 = XVECEXP (x1, 0, 4);
  if (XWINT (x4, 0) != 4L)
    return -1;
  x5 = XVECEXP (x1, 0, 5);
  if (XWINT (x5, 0) != 4L)
    return -1;
  x6 = XVECEXP (x1, 0, 6);
  if (XWINT (x6, 0) != 6L)
    return -1;
  x7 = XVECEXP (x1, 0, 7);
  if (XWINT (x7, 0) != 6L)
    return -1;
  return 0;
}

int
pattern1666 (rtx x1, machine_mode i1)
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
      || !register_operand (operands[2], i1))
    return -1;
  return 0;
}

int
pattern1676 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], E_DImode))
    return -1;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  operands[1] = x3;
  if (!nonimmediate_operand (operands[1], E_DImode))
    return -1;
  x4 = XEXP (x1, 1);
  if (GET_MODE (x4) != E_DImode)
    return -1;
  x5 = XEXP (x4, 0);
  if (GET_MODE (x5) != E_TImode)
    return -1;
  x6 = XEXP (x5, 0);
  if (GET_MODE (x6) != E_TImode)
    return -1;
  x7 = XEXP (x6, 0);
  operands[2] = x7;
  if (!register_operand (operands[2], E_DImode))
    return -1;
  x8 = XEXP (x5, 1);
  operands[4] = x8;
  if (!const_0_to_255_operand (operands[4], E_QImode))
    return -1;
  return 0;
}

int
pattern1687 (rtx x1, int i1, int i2, int i3, int i4, int i5)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 12);
  if (x2 != const_int_rtx[MAX_SAVED_CONST_INT + i4])
    return -1;
  x3 = XVECEXP (x1, 0, 13);
  if (x3 != const_int_rtx[MAX_SAVED_CONST_INT + i3])
    return -1;
  x4 = XVECEXP (x1, 0, 14);
  if (x4 != const_int_rtx[MAX_SAVED_CONST_INT + i2])
    return -1;
  x5 = XVECEXP (x1, 0, 15);
  if (x5 != const_int_rtx[MAX_SAVED_CONST_INT + i1])
    return -1;
  x6 = XVECEXP (x1, 0, 16);
  if (x6 != const_int_rtx[MAX_SAVED_CONST_INT + i5])
    return -1;
  return 0;
}

int
pattern1698 (machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!vsib_address_operand (operands[0], i1))
    return -1;
  switch (GET_MODE (operands[2]))
    {
    case E_V16SImode:
      if (!register_operand (operands[2], E_V16SImode)
          || !register_operand (operands[6], E_HImode)
          || !register_operand (operands[3], E_V16SFmode))
        return -1;
      return 0;

    case E_V8DImode:
      if (!register_operand (operands[2], E_V8DImode)
          || !register_operand (operands[6], E_QImode)
          || !register_operand (operands[3], E_V8SFmode))
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern1710 (machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!vsib_address_operand (operands[0], i1))
    return -1;
  switch (GET_MODE (operands[2]))
    {
    case E_V4SImode:
      if (!register_operand (operands[2], E_V4SImode))
        return -1;
      return 0;

    case E_V4DImode:
      if (!register_operand (operands[2], E_V4DImode))
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern1718 (machine_mode i1)
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

    case E_V4DImode:
      if (!register_operand (operands[2], E_V4DImode))
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern1725 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12, x13, x14, x15, x16, x17;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], E_SImode))
    return -1;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  x4 = XVECEXP (x3, 0, 0);
  operands[2] = x4;
  if (!register_operand (operands[2], E_V16QImode))
    return -1;
  x5 = XVECEXP (x3, 0, 1);
  operands[3] = x5;
  if (!nonimmediate_operand (operands[3], E_V16QImode))
    return -1;
  x6 = XVECEXP (x3, 0, 2);
  operands[4] = x6;
  if (!const_0_to_255_operand (operands[4], E_SImode))
    return -1;
  x7 = XVECEXP (x1, 0, 1);
  x8 = XEXP (x7, 0);
  operands[1] = x8;
  if (!register_operand (operands[1], E_V16QImode))
    return -1;
  x9 = XEXP (x7, 1);
  x10 = XVECEXP (x9, 0, 0);
  if (!rtx_equal_p (x10, operands[2]))
    return -1;
  x11 = XVECEXP (x9, 0, 1);
  if (!rtx_equal_p (x11, operands[3]))
    return -1;
  x12 = XVECEXP (x9, 0, 2);
  if (!rtx_equal_p (x12, operands[4]))
    return -1;
  x13 = XVECEXP (x1, 0, 2);
  x14 = XEXP (x13, 1);
  x15 = XVECEXP (x14, 0, 0);
  if (!rtx_equal_p (x15, operands[2]))
    return -1;
  x16 = XVECEXP (x14, 0, 1);
  if (!rtx_equal_p (x16, operands[3]))
    return -1;
  x17 = XVECEXP (x14, 0, 2);
  if (!rtx_equal_p (x17, operands[4]))
    return -1;
  return 0;
}

int
pattern1744 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i2)
      || GET_MODE (x1) != i2
      || !register_operand (operands[1], i2)
      || !register_operand (operands[7], E_QImode)
      || !vsib_mem_operator (operands[6], i1)
      || !scratch_operand (operands[2], E_QImode))
    return -1;
  x2 = XVECEXP (x1, 0, 2);
  x3 = XEXP (x2, 0);
  switch (GET_MODE (x3))
    {
    case E_SImode:
      return pattern1743 (
E_SImode); /* [-1, 1] */

    case E_DImode:
      res = pattern1743 (
E_DImode);
      if (res >= 0)
        return res + 2; /* [2, 3] */
      return -1;

    default:
      return -1;
    }
}

int
pattern1758 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12, x13, x14, x15, x16, x17;
  int res ATTRIBUTE_UNUSED;
  if (!constm1_operand (operands[2], i1))
    return -1;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  if (XVECLEN (x3, 0) != 2
      || XINT (x3, 1) != 110
      || GET_MODE (x3) != i1)
    return -1;
  x4 = XVECEXP (x1, 0, 1);
  x5 = XEXP (x4, 1);
  if (GET_CODE (x5) != PLUS
      || GET_MODE (x5) != i1)
    return -1;
  x6 = XVECEXP (x1, 0, 2);
  if (GET_CODE (x6) != CLOBBER)
    return -1;
  x7 = XEXP (x6, 0);
  if (GET_CODE (x7) != REG
      || REGNO (x7) != 17
      || GET_MODE (x7) != E_CCmode)
    return -1;
  x8 = XVECEXP (x3, 0, 0);
  operands[1] = x8;
  if (!memory_operand (operands[1], i1))
    return -1;
  x9 = XVECEXP (x3, 0, 1);
  operands[4] = x9;
  if (!const_int_operand (operands[4], E_SImode))
    return -1;
  x10 = XEXP (x2, 0);
  if (!rtx_equal_p (x10, operands[0]))
    return -1;
  x11 = XEXP (x5, 0);
  if (!rtx_equal_p (x11, operands[1]))
    return -1;
  x12 = XEXP (x5, 1);
  if (!rtx_equal_p (x12, operands[0]))
    return -1;
  x13 = XEXP (x4, 0);
  if (!rtx_equal_p (x13, operands[1]))
    return -1;
  x14 = PATTERN (peep2_next_insn (2));
  x15 = XEXP (x14, 1);
  x16 = XEXP (x15, 1);
  operands[3] = x16;
  if (!const_int_operand (operands[3], i1))
    return -1;
  x17 = XEXP (x15, 0);
  if (!rtx_equal_p (x17, operands[0]))
    return -1;
  return 0;
}

int
pattern1779 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (GET_MODE (x1) != E_DImode)
    return -1;
  switch (GET_CODE (x1))
    {
    case SIGN_EXTEND:
      x2 = XEXP (x1, 0);
      operands[4] = x2;
      if (!nonimmediate_gr_operand (operands[4], E_SImode))
        return -1;
      return 0;

    case ZERO_EXTEND:
      x2 = XEXP (x1, 0);
      operands[4] = x2;
      if (!nonimmediate_gr_operand (operands[4], E_SImode))
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern1788 (machine_mode i1)
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
pattern1796 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10;
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
      || !nonimmediate_operand (operands[2], i1))
    return -1;
  x7 = XEXP (x3, 1);
  if (GET_MODE (x7) != i2)
    return -1;
  x8 = XEXP (x7, 0);
  if (GET_MODE (x8) != i1
      || !register_operand (operands[0], i1))
    return -1;
  x9 = XVECEXP (x1, 0, 1);
  x10 = XEXP (x9, 1);
  if (GET_MODE (x10) != i1
      || !scratch_operand (operands[3], i1))
    return -1;
  return 0;
}

int
pattern1810 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[5], i1))
    return -1;
  switch (GET_MODE (x1))
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
pattern1817 (machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[4], i1)
      || !register_operand (operands[5], i1)
      || !register_operand (operands[6], i1)
      || !register_operand (operands[0], i1)
      || !register_operand (operands[1], i1)
      || !register_operand (operands[2], i1))
    return -1;
  return 0;
}

int
pattern1821 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4;
  int res ATTRIBUTE_UNUSED;
  if (!memory_operand (operands[0], i1))
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != i1
      || !nonmemory_operand (operands[1], i1))
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
pattern1827 ()
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
pattern1840 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  if (GET_CODE (x1) != SIGN_EXTEND
      || GET_MODE (x1) != i2)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_CODE (x2) != VEC_SELECT
      || GET_MODE (x2) != i1)
    return -1;
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) != PARALLEL)
    return -1;
  return 0;
}

int
pattern1844 (machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[6], i1)
      || !register_operand (operands[4], i1)
      || !register_operand (operands[5], i1)
      || !register_operand (operands[0], i1)
      || !register_operand (operands[1], i1)
      || !register_operand (operands[2], i1))
    return -1;
  return 0;
}

int
pattern1850 ()
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!const_0_to_15_operand (operands[4], E_VOIDmode)
      || !const_0_to_15_operand (operands[5], E_VOIDmode)
      || !const_0_to_15_operand (operands[6], E_VOIDmode)
      || !const_0_to_15_operand (operands[7], E_VOIDmode)
      || !const_0_to_15_operand (operands[8], E_VOIDmode)
      || !const_0_to_15_operand (operands[9], E_VOIDmode)
      || !const_0_to_15_operand (operands[10], E_VOIDmode)
      || !const_16_to_31_operand (operands[11], E_VOIDmode)
      || !const_16_to_31_operand (operands[12], E_VOIDmode)
      || !const_16_to_31_operand (operands[13], E_VOIDmode)
      || !const_16_to_31_operand (operands[14], E_VOIDmode)
      || !const_16_to_31_operand (operands[15], E_VOIDmode)
      || !const_16_to_31_operand (operands[16], E_VOIDmode)
      || !const_16_to_31_operand (operands[17], E_VOIDmode)
      || !const_16_to_31_operand (operands[18], E_VOIDmode))
    return -1;
  return 0;
}

int
pattern1860 (rtx x1, int i1)
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
pattern1870 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (!x86_64_immediate_operand (operands[2], i1)
      || !nonimmediate_operand (operands[0], i1)
      || GET_MODE (x1) != i1)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != i1)
    return -1;
  return 0;
}

int
pattern1874 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  x4 = XEXP (x3, 0);
  x5 = XEXP (x4, 0);
  if (GET_MODE (x5) != i2)
    return -1;
  x6 = XEXP (x5, 0);
  if (GET_MODE (x6) != i2
      || !nonimmediate_operand (operands[1], i1)
      || !ix86_carry_flag_operator (operands[4], i2))
    return -1;
  x7 = XEXP (x4, 1);
  if (GET_MODE (x7) != i2
      || !x86_64_sext_operand (operands[2], i1)
      || pattern1872 (x1, 
i1, 
i2) != 0)
    return -1;
  return 0;
}

int
pattern1882 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 24);
  if (XWINT (x2, 0) != 24L)
    return -1;
  x3 = XVECEXP (x1, 0, 25);
  if (XWINT (x3, 0) != 25L)
    return -1;
  x4 = XVECEXP (x1, 0, 26);
  if (XWINT (x4, 0) != 26L)
    return -1;
  x5 = XVECEXP (x1, 0, 27);
  if (XWINT (x5, 0) != 27L)
    return -1;
  return 0;
}

int
pattern1884 (rtx x1, machine_mode i1, machine_mode i2, machine_mode i3)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
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
  if (GET_MODE (x4) != i3
      || !register_operand (operands[1], i2))
    return -1;
  x5 = XEXP (x3, 1);
  if (GET_MODE (x5) != i3
      || !vector_operand (operands[2], i2)
      || !nonimm_or_0_operand (operands[3], i1))
    return -1;
  return 0;
}

 int
recog_6 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) != E_HImode)
    return -1;
  x3 = XEXP (x1, 0);
  operands[0] = x3;
  if (!register_operand (operands[0], E_HImode))
    return -1;
  x4 = XVECEXP (x2, 0, 0);
  if (GET_MODE (x4) != E_CCFPmode)
    return -1;
  switch (GET_CODE (x4))
    {
    case COMPARE:
      x5 = XEXP (x4, 0);
      operands[1] = x5;
      x6 = XEXP (x4, 1);
      switch (GET_CODE (x6))
        {
        case CONST_INT:
        case CONST_DOUBLE:
        case CONST_VECTOR:
        case REG:
        case SUBREG:
        case MEM:
          operands[2] = x6;
          switch (GET_MODE (operands[1]))
            {
            case E_XFmode:
              if (!register_operand (operands[1], E_XFmode)
                  || !reg_or_0_operand (operands[2], E_XFmode)
                  || !
#line 1936 "../../gcc/config/i386/i386.md"
(TARGET_80387))
                return -1;
              return 35; /* *cmpxf_i387 */

            case E_SFmode:
              if (!register_operand (operands[1], E_SFmode)
                  || !nonimm_or_0_operand (operands[2], E_SFmode)
                  || !
#line 1949 "../../gcc/config/i386/i386.md"
(TARGET_80387))
                return -1;
              return 36; /* *cmpsf_i387 */

            case E_DFmode:
              if (!register_operand (operands[1], E_DFmode)
                  || !nonimm_or_0_operand (operands[2], E_DFmode)
                  || !
#line 1949 "../../gcc/config/i386/i386.md"
(TARGET_80387))
                return -1;
              return 37; /* *cmpdf_i387 */

            default:
              return -1;
            }

        case FLOAT:
          x7 = XEXP (x6, 0);
          operands[2] = x7;
          switch (GET_MODE (operands[1]))
            {
            case E_SFmode:
              switch (pattern1263 (x6, 
E_SFmode))
                {
                case 0:
                  if (!
#line 1963 "../../gcc/config/i386/i386.md"
(TARGET_80387
   && (TARGET_USE_HIMODE_FIOP
       || optimize_function_for_size_p (cfun))))
                    return -1;
                  return 38; /* *cmpsf_hi_i387 */

                case 1:
                  if (!
#line 1963 "../../gcc/config/i386/i386.md"
(TARGET_80387
   && (TARGET_USE_SIMODE_FIOP
       || optimize_function_for_size_p (cfun))))
                    return -1;
                  return 41; /* *cmpsf_si_i387 */

                default:
                  return -1;
                }

            case E_DFmode:
              switch (pattern1263 (x6, 
E_DFmode))
                {
                case 0:
                  if (!
#line 1963 "../../gcc/config/i386/i386.md"
(TARGET_80387
   && (TARGET_USE_HIMODE_FIOP
       || optimize_function_for_size_p (cfun))))
                    return -1;
                  return 39; /* *cmpdf_hi_i387 */

                case 1:
                  if (!
#line 1963 "../../gcc/config/i386/i386.md"
(TARGET_80387
   && (TARGET_USE_SIMODE_FIOP
       || optimize_function_for_size_p (cfun))))
                    return -1;
                  return 42; /* *cmpdf_si_i387 */

                default:
                  return -1;
                }

            case E_XFmode:
              switch (pattern1263 (x6, 
E_XFmode))
                {
                case 0:
                  if (!
#line 1963 "../../gcc/config/i386/i386.md"
(TARGET_80387
   && (TARGET_USE_HIMODE_FIOP
       || optimize_function_for_size_p (cfun))))
                    return -1;
                  return 40; /* *cmpxf_hi_i387 */

                case 1:
                  if (!
#line 1963 "../../gcc/config/i386/i386.md"
(TARGET_80387
   && (TARGET_USE_SIMODE_FIOP
       || optimize_function_for_size_p (cfun))))
                    return -1;
                  return 43; /* *cmpxf_si_i387 */

                default:
                  return -1;
                }

            default:
              return -1;
            }

        default:
          return -1;
        }

    case UNSPEC:
      if (XVECLEN (x4, 0) != 1
          || XINT (x4, 1) != 26)
        return -1;
      x8 = XVECEXP (x4, 0, 0);
      if (GET_CODE (x8) != COMPARE
          || GET_MODE (x8) != E_CCFPmode)
        return -1;
      x9 = XEXP (x8, 0);
      operands[1] = x9;
      x10 = XEXP (x8, 1);
      operands[2] = x10;
      switch (GET_MODE (operands[1]))
        {
        case E_SFmode:
          if (!register_operand (operands[1], E_SFmode)
              || !register_operand (operands[2], E_SFmode)
              || !
#line 1981 "../../gcc/config/i386/i386.md"
(TARGET_80387))
            return -1;
          return 44; /* *cmpusf_i387 */

        case E_DFmode:
          if (!register_operand (operands[1], E_DFmode)
              || !register_operand (operands[2], E_DFmode)
              || !
#line 1981 "../../gcc/config/i386/i386.md"
(TARGET_80387))
            return -1;
          return 45; /* *cmpudf_i387 */

        case E_XFmode:
          if (!register_operand (operands[1], E_XFmode)
              || !register_operand (operands[2], E_XFmode)
              || !
#line 1981 "../../gcc/config/i386/i386.md"
(TARGET_80387))
            return -1;
          return 46; /* *cmpuxf_i387 */

        default:
          return -1;
        }

    case REG:
      if (REGNO (x4) != 18
          || !
#line 23717 "../../gcc/config/i386/i386.md"
(TARGET_80387))
        return -1;
      return 1708; /* x86_fnstsw_1 */

    default:
      return -1;
    }
}

 int
recog_14 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  switch (XINT (x2, 1))
    {
    case 105:
      if (GET_MODE (x2) != E_TImode)
        return -1;
      x3 = XEXP (x1, 0);
      operands[0] = x3;
      if (!push_operand (operands[0], E_TImode))
        return -1;
      x4 = XVECEXP (x2, 0, 0);
      operands[1] = x4;
      if (!register_operand (operands[1], E_DImode))
        return -1;
      x5 = XVECEXP (x2, 0, 1);
      operands[2] = x5;
      if (!register_operand (operands[2], E_DImode)
          || !
#line 3889 "../../gcc/config/i386/i386.md"
(TARGET_APX_PUSH2POP2))
        return -1;
      return 159; /* push2_di */

    case 40:
      if (GET_MODE (x2) != E_CCCmode
          || pattern246 (x1) != 0)
        return -1;
      x4 = XVECEXP (x2, 0, 0);
      switch (GET_CODE (x4))
        {
        case LTU:
          if (pattern716 (x4) != 0)
            return -1;
          x6 = XEXP (x4, 0);
          switch (GET_MODE (x6))
            {
            case E_CCmode:
              if (!
#line 9904 "../../gcc/config/i386/i386.md"
(ix86_pre_reload_split ()))
                return -1;
              return 532; /* *setcc_qi_negqi_ccc_2_cc */

            case E_CCCmode:
              if (!
#line 9904 "../../gcc/config/i386/i386.md"
(ix86_pre_reload_split ()))
                return -1;
              return 533; /* *setcc_qi_negqi_ccc_2_ccc */

            default:
              return -1;
            }

        case REG:
        case SUBREG:
        case MEM:
          if (pnum_clobbers == NULL)
            return -1;
          operands[1] = x4;
          switch (GET_MODE (operands[1]))
            {
            case E_QImode:
              if (!nonimmediate_operand (operands[1], E_QImode))
                return -1;
              *pnum_clobbers = 1;
              return 984; /* *negqi_ccc_2 */

            case E_HImode:
              if (!nonimmediate_operand (operands[1], E_HImode))
                return -1;
              *pnum_clobbers = 1;
              return 985; /* *neghi_ccc_2 */

            case E_SImode:
              if (!nonimmediate_operand (operands[1], E_SImode))
                return -1;
              *pnum_clobbers = 1;
              return 986; /* *negsi_ccc_2 */

            case E_DImode:
              if (!nonimmediate_operand (operands[1], E_DImode)
                  || !
#line 1161 "../../gcc/config/i386/i386.md"
(TARGET_64BIT))
                return -1;
              *pnum_clobbers = 1;
              return 987; /* *negdi_ccc_2 */

            default:
              return -1;
            }

        default:
          return -1;
        }

    case 66:
      if (pnum_clobbers == NULL
          || GET_MODE (x2) != E_XFmode)
        return -1;
      x3 = XEXP (x1, 0);
      operands[0] = x3;
      if (!register_operand (operands[0], E_XFmode))
        return -1;
      x4 = XVECEXP (x2, 0, 0);
      operands[2] = x4;
      if (!register_operand (operands[2], E_XFmode))
        return -1;
      x5 = XVECEXP (x2, 0, 1);
      operands[1] = x5;
      if (!register_operand (operands[1], E_XFmode)
          || !
#line 23986 "../../gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && flag_unsafe_math_optimizations))
        return -1;
      *pnum_clobbers = 1;
      return 1715; /* atan2xf3 */

    case 67:
      if (pnum_clobbers == NULL
          || pattern156 (x1, 
E_XFmode) != 0
          || !
#line 24289 "../../gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && flag_unsafe_math_optimizations))
        return -1;
      *pnum_clobbers = 1;
      return 1716; /* fyl2xxf3_i387 */

    case 68:
      if (pnum_clobbers == NULL
          || pattern156 (x1, 
E_XFmode) != 0
          || !
#line 24386 "../../gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && flag_unsafe_math_optimizations))
        return -1;
      *pnum_clobbers = 1;
      return 1717; /* fyl2xp1xf3_i387 */

    case 58:
      x3 = XEXP (x1, 0);
      operands[0] = x3;
      x4 = XVECEXP (x2, 0, 0);
      operands[1] = x4;
      x5 = XVECEXP (x2, 0, 1);
      operands[2] = x5;
      switch (GET_MODE (operands[0]))
        {
        case E_SFmode:
          if (pattern60 (x2, 
E_SFmode) != 0
              || !
#line 24695 "../../gcc/config/i386/i386.md"
(TARGET_AVX512F))
            return -1;
          return 1721; /* avx512f_scalefsf2 */

        case E_DFmode:
          if (pattern60 (x2, 
E_DFmode) != 0
              || !
#line 24695 "../../gcc/config/i386/i386.md"
(TARGET_AVX512F))
            return -1;
          return 1722; /* avx512f_scalefdf2 */

        default:
          return -1;
        }

    case 94:
      x3 = XEXP (x1, 0);
      operands[0] = x3;
      x4 = XVECEXP (x2, 0, 0);
      operands[1] = x4;
      x5 = XVECEXP (x2, 0, 1);
      operands[2] = x5;
      if (!const_0_to_15_operand (operands[2], E_SImode))
        return -1;
      switch (GET_MODE (operands[0]))
        {
        case E_HFmode:
          if (!register_operand (operands[0], E_HFmode)
              || GET_MODE (x2) != E_HFmode
              || !nonimmediate_operand (operands[1], E_HFmode)
              || !(
#line 24813 "../../gcc/config/i386/i386.md"
(TARGET_SSE4_1) && 
#line 1355 "../../gcc/config/i386/i386.md"
(TARGET_AVX512FP16)))
            return -1;
          return 1723; /* sse4_1_roundhf2 */

        case E_SFmode:
          if (!register_operand (operands[0], E_SFmode)
              || GET_MODE (x2) != E_SFmode
              || !nonimmediate_operand (operands[1], E_SFmode)
              || !
#line 24813 "../../gcc/config/i386/i386.md"
(TARGET_SSE4_1))
            return -1;
          return 1724; /* sse4_1_roundsf2 */

        case E_DFmode:
          if (!register_operand (operands[0], E_DFmode)
              || GET_MODE (x2) != E_DFmode
              || !nonimmediate_operand (operands[1], E_DFmode)
              || !
#line 24813 "../../gcc/config/i386/i386.md"
(TARGET_SSE4_1))
            return -1;
          return 1725; /* sse4_1_rounddf2 */

        default:
          return -1;
        }

    case 63:
      switch (pattern61 (x1))
        {
        case 0:
          if (!
#line 26614 "../../gcc/config/i386/i386.md"
(TARGET_AVX512FP16))
            return -1;
          return 1815; /* *ieee_smaxhf3 */

        case 1:
          if (!
#line 26626 "../../gcc/config/i386/i386.md"
(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH))
            return -1;
          return 1817; /* *ieee_smaxsf3 */

        case 2:
          if (!
#line 26626 "../../gcc/config/i386/i386.md"
(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH))
            return -1;
          return 1819; /* *ieee_smaxdf3 */

        default:
          return -1;
        }

    case 62:
      switch (pattern61 (x1))
        {
        case 0:
          if (!
#line 26614 "../../gcc/config/i386/i386.md"
(TARGET_AVX512FP16))
            return -1;
          return 1816; /* *ieee_sminhf3 */

        case 1:
          if (!
#line 26626 "../../gcc/config/i386/i386.md"
(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH))
            return -1;
          return 1818; /* *ieee_sminsf3 */

        case 2:
          if (!
#line 26626 "../../gcc/config/i386/i386.md"
(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH))
            return -1;
          return 1820; /* *ieee_smindf3 */

        default:
          return -1;
        }

    case 113:
      if (pattern62 (x1, 
E_V2SFmode) != 0
          || !
#line 911 "../../gcc/config/i386/mmx.md"
(TARGET_3DNOW))
        return -1;
      return 2054; /* mmx_rcpit1v2sf3 */

    case 114:
      if (pattern62 (x1, 
E_V2SFmode) != 0
          || !
#line 922 "../../gcc/config/i386/mmx.md"
(TARGET_3DNOW))
        return -1;
      return 2055; /* mmx_rcpit2v2sf3 */

    case 116:
      if (pattern62 (x1, 
E_V2SFmode) != 0
          || !
#line 959 "../../gcc/config/i386/mmx.md"
(TARGET_3DNOW))
        return -1;
      return 2057; /* mmx_rsqit1v2sf3 */

    case 57:
      switch (pattern64 (x1))
        {
        case 0:
          if (!
#line 4792 "../../gcc/config/i386/mmx.md"
(TARGET_MMX || TARGET_MMX_WITH_SSE))
            return -1;
          return 2287; /* mmx_packuswb */

        case 1:
          if (!
#line 4831 "../../gcc/config/i386/mmx.md"
(TARGET_SSE4_1 && TARGET_MMX_WITH_SSE))
            return -1;
          return 2289; /* mmx_packusdw */

        default:
          return -1;
        }

    case 52:
      x3 = XEXP (x1, 0);
      operands[0] = x3;
      x4 = XVECEXP (x2, 0, 0);
      operands[1] = x4;
      x5 = XVECEXP (x2, 0, 1);
      operands[2] = x5;
      if (!vector_operand (operands[2], E_V16QImode))
        return -1;
      switch (GET_MODE (operands[0]))
        {
        case E_V8QImode:
          if (!register_operand (operands[0], E_V8QImode)
              || GET_MODE (x2) != E_V8QImode
              || !register_operand (operands[1], E_V8QImode)
              || !
#line 5489 "../../gcc/config/i386/mmx.md"
(TARGET_SSSE3 && TARGET_MMX_WITH_SSE))
            return -1;
          return 2324; /* mmx_pshufbv8qi3 */

        case E_V4QImode:
          if (!register_operand (operands[0], E_V4QImode)
              || GET_MODE (x2) != E_V4QImode
              || !register_operand (operands[1], E_V4QImode)
              || !
#line 5507 "../../gcc/config/i386/mmx.md"
(TARGET_SSSE3))
            return -1;
          return 2325; /* mmx_pshufbv4qi3 */

        default:
          return -1;
        }

    case 56:
      if (GET_MODE (x2) != E_V1DImode)
        return -1;
      x3 = XEXP (x1, 0);
      operands[0] = x3;
      if (!register_operand (operands[0], E_V1DImode))
        return -1;
      x4 = XVECEXP (x2, 0, 0);
      operands[1] = x4;
      if (!register_mmxmem_operand (operands[1], E_V8QImode))
        return -1;
      x5 = XVECEXP (x2, 0, 1);
      operands[2] = x5;
      if (!register_mmxmem_operand (operands[2], E_V8QImode)
          || !
#line 6477 "../../gcc/config/i386/mmx.md"
((TARGET_MMX || TARGET_MMX_WITH_SSE) && (TARGET_SSE || TARGET_3DNOW_A)
   && ix86_binary_operator_ok (PLUS, V8QImode, operands)))
        return -1;
      return 2377; /* *mmx_psadbw */

    case 176:
      if (pattern65 (x1) != 0)
        return -1;
      switch (pattern965 ())
        {
        case 0:
          if (!(
#line 2335 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 2079 "../../gcc/config/i386/sse.md"
(TARGET_AVX512DQ)))
            return -1;
          return 2604; /* ktestqi */

        case 1:
          if (!(
#line 2335 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 2079 "../../gcc/config/i386/sse.md"
(TARGET_AVX512DQ)))
            return -1;
          return 2605; /* ktesthi */

        case 2:
          if (!(
#line 2335 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 2080 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW)))
            return -1;
          return 2606; /* ktestsi */

        case 3:
          if (!(
#line 2335 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 2080 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW)))
            return -1;
          return 2607; /* ktestdi */

        default:
          return -1;
        }

    case 178:
      return recog_8 (x1, insn, pnum_clobbers);

    case 61:
      if (GET_MODE (x2) != E_CCFPmode)
        return -1;
      x4 = XVECEXP (x2, 0, 0);
      if (GET_CODE (x4) != VEC_SELECT
          || pattern416 (x2) != 0
          || pattern966 (x1) != 0)
        return -1;
      x5 = XVECEXP (x2, 0, 1);
      x7 = XEXP (x5, 0);
      operands[1] = x7;
      switch (GET_MODE (x4))
        {
        case E_HFmode:
          if (!register_operand (operands[0], E_V8HFmode)
              || GET_MODE (x5) != E_HFmode
              || !nonimmediate_operand (operands[1], E_V8HFmode)
              || !(
#line 4854 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256) && 
#line 1355 "../../gcc/config/i386/i386.md"
(TARGET_AVX512FP16)))
            return -1;
          return 3664; /* avx10_2_comxhf */

        case E_SFmode:
          if (!register_operand (operands[0], E_V4SFmode)
              || GET_MODE (x5) != E_SFmode
              || !nonimmediate_operand (operands[1], E_V4SFmode)
              || !
#line 4854 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
            return -1;
          return 3668; /* avx10_2_comxsf */

        case E_DFmode:
          if (!register_operand (operands[0], E_V2DFmode)
              || GET_MODE (x5) != E_DFmode
              || !nonimmediate_operand (operands[1], E_V2DFmode)
              || !
#line 4854 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
            return -1;
          return 3672; /* avx10_2_comxdf */

        default:
          return -1;
        }

    case 158:
      switch (pattern67 (x1))
        {
        case 0:
          if (!(
#line 19052 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 507 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL && TARGET_AVX512BW)))
            return -1;
          return 8110; /* avx512vl_testmv16qi3 */

        case 1:
          if (!(
#line 19052 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 509 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL && TARGET_AVX512BW)))
            return -1;
          return 8114; /* avx512vl_testmv16hi3 */

        case 2:
          if (!(
#line 19052 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 511 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return -1;
          return 8118; /* avx512f_testmv16si3 */

        case 3:
          if (!(
#line 19052 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 510 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL && TARGET_AVX512BW)))
            return -1;
          return 8116; /* avx512vl_testmv8hi3 */

        case 4:
          if (!(
#line 19052 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 511 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 8120; /* avx512vl_testmv8si3 */

        case 5:
          if (!(
#line 19052 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 511 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 8122; /* avx512vl_testmv4si3 */

        case 6:
          if (!(
#line 19052 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 512 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return -1;
          return 8124; /* avx512f_testmv8di3 */

        case 7:
          if (!(
#line 19052 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 512 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 8126; /* avx512vl_testmv4di3 */

        case 8:
          if (!(
#line 19052 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 512 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 8128; /* avx512vl_testmv2di3 */

        default:
          return -1;
        }

    case 159:
      switch (pattern67 (x1))
        {
        case 0:
          if (!(
#line 19063 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 507 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL && TARGET_AVX512BW)))
            return -1;
          return 8134; /* avx512vl_testnmv16qi3 */

        case 1:
          if (!(
#line 19063 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 509 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL && TARGET_AVX512BW)))
            return -1;
          return 8138; /* avx512vl_testnmv16hi3 */

        case 2:
          if (!(
#line 19063 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 511 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return -1;
          return 8142; /* avx512f_testnmv16si3 */

        case 3:
          if (!(
#line 19063 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 510 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL && TARGET_AVX512BW)))
            return -1;
          return 8140; /* avx512vl_testnmv8hi3 */

        case 4:
          if (!(
#line 19063 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 511 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 8144; /* avx512vl_testnmv8si3 */

        case 5:
          if (!(
#line 19063 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 511 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 8146; /* avx512vl_testnmv4si3 */

        case 6:
          if (!(
#line 19063 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 512 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return -1;
          return 8148; /* avx512f_testnmv8di3 */

        case 7:
          if (!(
#line 19063 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 512 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 8150; /* avx512vl_testnmv4di3 */

        case 8:
          if (!(
#line 19063 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 512 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 8152; /* avx512vl_testnmv2di3 */

        default:
          return -1;
        }

    case 120:
      x3 = XEXP (x1, 0);
      operands[0] = x3;
      x4 = XVECEXP (x2, 0, 0);
      operands[1] = x4;
      x5 = XVECEXP (x2, 0, 1);
      operands[2] = x5;
      switch (GET_MODE (operands[0]))
        {
        case E_V8QImode:
          if (pattern732 (x2, 
E_V8QImode) != 0
              || !
#line 23201 "../../gcc/config/i386/sse.md"
((TARGET_MMX || TARGET_MMX_WITH_SSE) && TARGET_SSSE3))
            return -1;
          return 8634; /* ssse3_psignv8qi3 */

        case E_V4HImode:
          if (pattern63 (x2, 
E_V4HImode) != 0
              || !
#line 23201 "../../gcc/config/i386/sse.md"
((TARGET_MMX || TARGET_MMX_WITH_SSE) && TARGET_SSSE3))
            return -1;
          return 8635; /* ssse3_psignv4hi3 */

        case E_V2SImode:
          if (pattern732 (x2, 
E_V2SImode) != 0
              || !
#line 23201 "../../gcc/config/i386/sse.md"
((TARGET_MMX || TARGET_MMX_WITH_SSE) && TARGET_SSSE3))
            return -1;
          return 8636; /* ssse3_psignv2si3 */

        default:
          return -1;
        }

    case 148:
      if (pattern65 (x1) != 0)
        return -1;
      switch (GET_MODE (operands[0]))
        {
        case E_V8SFmode:
          if (!register_operand (operands[0], E_V8SFmode)
              || !nonimmediate_operand (operands[1], E_V8SFmode)
              || !
#line 25300 "../../gcc/config/i386/sse.md"
(TARGET_AVX))
            return -1;
          return 8931; /* avx_vtestps256 */

        case E_V4SFmode:
          if (!register_operand (operands[0], E_V4SFmode)
              || !nonimmediate_operand (operands[1], E_V4SFmode)
              || !
#line 25300 "../../gcc/config/i386/sse.md"
(TARGET_AVX))
            return -1;
          return 8932; /* avx_vtestps */

        case E_V4DFmode:
          if (!register_operand (operands[0], E_V4DFmode)
              || !nonimmediate_operand (operands[1], E_V4DFmode)
              || !
#line 25300 "../../gcc/config/i386/sse.md"
(TARGET_AVX))
            return -1;
          return 8933; /* avx_vtestpd256 */

        case E_V2DFmode:
          if (!register_operand (operands[0], E_V2DFmode)
              || !nonimmediate_operand (operands[1], E_V2DFmode)
              || !(
#line 25300 "../../gcc/config/i386/sse.md"
(TARGET_AVX) && 
#line 423 "../../gcc/config/i386/sse.md"
(TARGET_SSE2)))
            return -1;
          return 8934; /* avx_vtestpd */

        default:
          return -1;
        }

    case 130:
      return recog_9 (x1, insn, pnum_clobbers);

    case 150:
      if (GET_MODE (x2) != E_V4HImode)
        return -1;
      x3 = XEXP (x1, 0);
      operands[0] = x3;
      if (!memory_operand (operands[0], E_V4HImode))
        return -1;
      x4 = XVECEXP (x2, 0, 0);
      operands[1] = x4;
      if (!register_operand (operands[1], E_V4SFmode))
        return -1;
      x5 = XVECEXP (x2, 0, 1);
      operands[2] = x5;
      if (!const_0_to_255_operand (operands[2], E_SImode)
          || !
#line 29156 "../../gcc/config/i386/sse.md"
(TARGET_F16C || TARGET_AVX512VL))
        return -1;
      return 9657; /* *vcvtps2ph_store */

    case 193:
      return recog_11 (x1, insn, pnum_clobbers);

    case 214:
      if (GET_MODE (x2) != E_HImode)
        return -1;
      x3 = XEXP (x1, 0);
      operands[0] = x3;
      if (!register_operand (operands[0], E_HImode))
        return -1;
      x4 = XVECEXP (x2, 0, 0);
      operands[1] = x4;
      if (!register_operand (operands[1], E_V16QImode))
        return -1;
      x5 = XVECEXP (x2, 0, 1);
      operands[2] = x5;
      if (!nonimmediate_operand (operands[2], E_V16QImode)
          || !(
#line 30921 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BITALG) && 
#line 328 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 10322; /* avx512vl_vpshufbitqmbv16qi */

    case 215:
      return recog_10 (x1, insn, pnum_clobbers);

    case 262:
      x3 = XEXP (x1, 0);
      operands[0] = x3;
      x4 = XVECEXP (x2, 0, 0);
      operands[1] = x4;
      x5 = XVECEXP (x2, 0, 1);
      operands[2] = x5;
      if (!const_0_to_255_operand (operands[2], E_VOIDmode))
        return -1;
      switch (GET_MODE (operands[0]))
        {
        case E_HImode:
          if (!register_operand (operands[0], E_HImode)
              || GET_MODE (x2) != E_HImode
              || !nonimmediate_operand (operands[1], E_V16BFmode)
              || !
#line 32435 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
            return -1;
          return 10718; /* avx10_2_fpclasspbf16_v16bf */

        case E_QImode:
          if (!register_operand (operands[0], E_QImode)
              || GET_MODE (x2) != E_QImode
              || !nonimmediate_operand (operands[1], E_V8BFmode)
              || !
#line 32435 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
            return -1;
          return 10720; /* avx10_2_fpclasspbf16_v8bf */

        default:
          return -1;
        }

    case 263:
      if (GET_MODE (x2) != E_CCFPmode)
        return -1;
      x4 = XVECEXP (x2, 0, 0);
      if (GET_CODE (x4) != VEC_SELECT
          || GET_MODE (x4) != E_BFmode
          || pattern416 (x2) != 0)
        return -1;
      x5 = XVECEXP (x2, 0, 1);
      if (GET_MODE (x5) != E_BFmode
          || pattern966 (x1) != 0
          || !register_operand (operands[0], E_V8BFmode))
        return -1;
      x7 = XEXP (x5, 0);
      operands[1] = x7;
      if (!nonimmediate_operand (operands[1], E_V8BFmode)
          || !
#line 32460 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
        return -1;
      return 10728; /* avx10_2_comsbf16_v8bf */

    case 289:
      x3 = XEXP (x1, 0);
      operands[0] = x3;
      x4 = XVECEXP (x2, 0, 0);
      operands[1] = x4;
      x5 = XVECEXP (x2, 0, 1);
      operands[2] = x5;
      if (!const_int_operand (operands[2], E_SImode))
        return -1;
      switch (GET_MODE (operands[0]))
        {
        case E_QImode:
          if (!memory_operand (operands[0], E_QImode)
              || GET_MODE (x2) != E_QImode
              || !nonmemory_operand (operands[1], E_QImode))
            return -1;
          return 11012; /* atomic_storeqi_1 */

        case E_HImode:
          if (!memory_operand (operands[0], E_HImode)
              || GET_MODE (x2) != E_HImode
              || !nonmemory_operand (operands[1], E_HImode))
            return -1;
          return 11013; /* atomic_storehi_1 */

        default:
          return -1;
        }

    default:
      return -1;
    }
}

 int
recog_32 (rtx x1 ATTRIBUTE_UNUSED,
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
      switch (pattern260 (x3, 
E_SImode))
        {
        case 0:
          if (!
#line 5769 "../../gcc/config/i386/i386.md"
(TARGET_AVX512FP16))
            return -1;
          return 213; /* fixuns_trunchfsi2 */

        case 1:
          if (!
#line 5876 "../../gcc/config/i386/i386.md"
(TARGET_AVX512F && TARGET_SSE_MATH))
            return -1;
          return 218; /* fixuns_truncsfsi2_avx512f */

        case 2:
          if (!
#line 5876 "../../gcc/config/i386/i386.md"
(TARGET_AVX512F && TARGET_SSE_MATH))
            return -1;
          return 219; /* fixuns_truncdfsi2_avx512f */

        default:
          return -1;
        }

    case E_DImode:
      switch (pattern260 (x3, 
E_DImode))
        {
        case 0:
          if (!(
#line 5769 "../../gcc/config/i386/i386.md"
(TARGET_AVX512FP16) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return -1;
          return 215; /* fixuns_trunchfdi2 */

        case 1:
          if (!
#line 5834 "../../gcc/config/i386/i386.md"
(TARGET_64BIT && TARGET_AVX512F && TARGET_SSE_MATH))
            return -1;
          return 216; /* fixuns_truncsfdi2 */

        case 2:
          if (!
#line 5834 "../../gcc/config/i386/i386.md"
(TARGET_64BIT && TARGET_AVX512F && TARGET_SSE_MATH))
            return -1;
          return 217; /* fixuns_truncdfdi2 */

        default:
          return -1;
        }

    case E_V2SImode:
      if (!register_operand (operands[0], E_V2SImode)
          || GET_MODE (x3) != E_V2SImode
          || !nonimmediate_operand (operands[1], E_V2DFmode)
          || !
#line 8966 "../../gcc/config/i386/sse.md"
(TARGET_MMX_WITH_SSE && TARGET_AVX512VL))
        return -1;
      return 4900; /* fixuns_truncv2dfv2si2 */

    default:
      return -1;
    }
}

 int
recog_36 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  operands[2] = x3;
  switch (GET_MODE (operands[0]))
    {
    case E_TImode:
      if (pnum_clobbers == NULL
          || pattern739 (x2, 
E_TImode) != 0)
        return -1;
      if ((
#line 13312 "../../gcc/config/i386/i386.md"
(TARGET_BMI) && 
#line 1236 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
        {
          *pnum_clobbers = 1;
          return 810; /* *andnti3_doubleword_bmi */
        }
      if (!(
#line 13330 "../../gcc/config/i386/i386.md"
(!TARGET_BMI
   && ix86_pre_reload_split ()) && 
#line 1196 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
        return -1;
      *pnum_clobbers = 1;
      return 812; /* *andnti3_doubleword */

    case E_QImode:
      if (pnum_clobbers == NULL
          || pattern611 (x2, 
E_QImode) != 0
          || !
#line 13362 "../../gcc/config/i386/i386.md"
(TARGET_BMI || TARGET_AVX512BW))
        return -1;
      *pnum_clobbers = 1;
      return 815; /* *andnqi_1 */

    case E_HImode:
      if (pnum_clobbers == NULL
          || pattern611 (x2, 
E_HImode) != 0
          || !
#line 13362 "../../gcc/config/i386/i386.md"
(TARGET_BMI || TARGET_AVX512BW))
        return -1;
      *pnum_clobbers = 1;
      return 816; /* *andnhi_1 */

    case E_V2SFmode:
      if (pattern611 (x2, 
E_V2SFmode) != 0
          || !
#line 1343 "../../gcc/config/i386/mmx.md"
(TARGET_MMX_WITH_SSE))
        return -1;
      return 2070; /* *mmx_andnotv2sf3 */

    case E_V2BFmode:
      if (pattern611 (x2, 
E_V2BFmode) != 0
          || !
#line 2568 "../../gcc/config/i386/mmx.md"
(TARGET_SSE))
        return -1;
      return 2101; /* *mmx_andnotv2bf3 */

    case E_V4BFmode:
      if (pattern611 (x2, 
E_V4BFmode) != 0
          || !(
#line 2568 "../../gcc/config/i386/mmx.md"
(TARGET_SSE) && 
#line 2224 "../../gcc/config/i386/mmx.md"
(TARGET_MMX_WITH_SSE)))
        return -1;
      return 2102; /* *mmx_andnotv4bf3 */

    case E_V2HFmode:
      if (pattern611 (x2, 
E_V2HFmode) != 0
          || !
#line 2568 "../../gcc/config/i386/mmx.md"
(TARGET_SSE))
        return -1;
      return 2103; /* *mmx_andnotv2hf3 */

    case E_V4HFmode:
      if (pattern611 (x2, 
E_V4HFmode) != 0
          || !(
#line 2568 "../../gcc/config/i386/mmx.md"
(TARGET_SSE) && 
#line 2225 "../../gcc/config/i386/mmx.md"
(TARGET_MMX_WITH_SSE)))
        return -1;
      return 2104; /* *mmx_andnotv4hf3 */

    case E_V8QImode:
      if (pattern612 (x2, 
E_V8QImode) != 0
          || !
#line 4592 "../../gcc/config/i386/mmx.md"
(TARGET_MMX || TARGET_MMX_WITH_SSE))
        return -1;
      return 2262; /* mmx_andnotv8qi3 */

    case E_V4HImode:
      if (pattern612 (x2, 
E_V4HImode) != 0
          || !
#line 4592 "../../gcc/config/i386/mmx.md"
(TARGET_MMX || TARGET_MMX_WITH_SSE))
        return -1;
      return 2263; /* mmx_andnotv4hi3 */

    case E_V2SImode:
      if (pattern612 (x2, 
E_V2SImode) != 0
          || !
#line 4592 "../../gcc/config/i386/mmx.md"
(TARGET_MMX || TARGET_MMX_WITH_SSE))
        return -1;
      return 2264; /* mmx_andnotv2si3 */

    case E_V4QImode:
      if (pnum_clobbers == NULL
          || pattern611 (x2, 
E_V4QImode) != 0)
        return -1;
      *pnum_clobbers = 1;
      return 2265; /* *andnotv4qi3 */

    case E_V2QImode:
      if (pnum_clobbers == NULL
          || pattern611 (x2, 
E_V2QImode) != 0)
        return -1;
      *pnum_clobbers = 1;
      return 2266; /* *andnotv2qi3 */

    case E_V2HImode:
      if (pnum_clobbers == NULL
          || pattern611 (x2, 
E_V2HImode) != 0)
        return -1;
      *pnum_clobbers = 1;
      return 2267; /* *andnotv2hi3 */

    case E_BFmode:
      if (pattern611 (x2, 
E_BFmode) != 0
          || !
#line 5518 "../../gcc/config/i386/sse.md"
(TARGET_SSE))
        return -1;
      return 3772; /* *andnotbf3 */

    case E_HFmode:
      if (pattern611 (x2, 
E_HFmode) != 0
          || !
#line 5518 "../../gcc/config/i386/sse.md"
(TARGET_SSE))
        return -1;
      return 3773; /* *andnothf3 */

    case E_SFmode:
      if (pattern611 (x2, 
E_SFmode) != 0
          || !
#line 5518 "../../gcc/config/i386/sse.md"
(TARGET_SSE))
        return -1;
      return 3774; /* *andnotsf3 */

    case E_DFmode:
      if (pattern611 (x2, 
E_DFmode) != 0
          || !(
#line 5518 "../../gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 1352 "../../gcc/config/i386/i386.md"
(TARGET_SSE2)))
        return -1;
      return 3775; /* *andnotdf3 */

    case E_TFmode:
      if (pattern613 (x2, 
E_TFmode) != 0
          || !
#line 5588 "../../gcc/config/i386/sse.md"
(TARGET_SSE))
        return -1;
      return 3776; /* *andnottf3 */

    default:
      return -1;
    }
}

 int
recog_41 (rtx x1 ATTRIBUTE_UNUSED,
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
    case E_TImode:
      if (pattern263 (x3, pnum_clobbers, 
E_TImode) != 0
          || !(
#line 14600 "../../gcc/config/i386/i386.md"
(TARGET_CMOVE
   && ix86_pre_reload_split ()) && 
#line 1236 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
        return -1;
      *pnum_clobbers = 1;
      return 996; /* *absti2_doubleword */

    case E_QImode:
      if (pattern263 (x3, pnum_clobbers, 
E_QImode) != 0
          || !
#line 14687 "../../gcc/config/i386/i386.md"
(TARGET_CMOVE
   && (QImode != QImode || !TARGET_PARTIAL_REG_STALL)
   && ix86_pre_reload_split ()))
        return -1;
      *pnum_clobbers = 1;
      return 999; /* *absqi2_1 */

    case E_HImode:
      if (pattern263 (x3, pnum_clobbers, 
E_HImode) != 0
          || !
#line 14687 "../../gcc/config/i386/i386.md"
(TARGET_CMOVE
   && (HImode != QImode || !TARGET_PARTIAL_REG_STALL)
   && ix86_pre_reload_split ()))
        return -1;
      *pnum_clobbers = 1;
      return 1000; /* *abshi2_1 */

    case E_SFmode:
      if (!register_operand (operands[0], E_SFmode)
          || GET_MODE (x3) != E_SFmode
          || !register_operand (operands[1], E_SFmode))
        return -1;
      if (pnum_clobbers != NULL
          && 
#line 14810 "../../gcc/config/i386/i386.md"
(TARGET_80387 && !(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)))
        {
          *pnum_clobbers = 1;
          return 1010; /* *abssf2_i387_1 */
        }
      if (!
#line 14932 "../../gcc/config/i386/i386.md"
(TARGET_80387 && reload_completed))
        return -1;
      return 1024; /* *abssf2_i387 */

    case E_DFmode:
      if (!register_operand (operands[0], E_DFmode)
          || GET_MODE (x3) != E_DFmode
          || !register_operand (operands[1], E_DFmode))
        return -1;
      if (pnum_clobbers != NULL
          && 
#line 14810 "../../gcc/config/i386/i386.md"
(TARGET_80387 && !(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)))
        {
          *pnum_clobbers = 1;
          return 1012; /* *absdf2_i387_1 */
        }
      if (!
#line 14932 "../../gcc/config/i386/i386.md"
(TARGET_80387 && reload_completed))
        return -1;
      return 1026; /* *absdf2_i387 */

    case E_XFmode:
      if (!register_operand (operands[0], E_XFmode)
          || GET_MODE (x3) != E_XFmode
          || !register_operand (operands[1], E_XFmode))
        return -1;
      if (pnum_clobbers != NULL
          && 
#line 14810 "../../gcc/config/i386/i386.md"
(TARGET_80387 && !(SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH)))
        {
          *pnum_clobbers = 1;
          return 1014; /* *absxf2_i387_1 */
        }
      if (!
#line 14932 "../../gcc/config/i386/i386.md"
(TARGET_80387 && reload_completed))
        return -1;
      return 1028; /* *absxf2_i387 */

    case E_V8QImode:
      if (!register_operand (operands[0], E_V8QImode)
          || GET_MODE (x3) != E_V8QImode
          || !register_mmxmem_operand (operands[1], E_V8QImode)
          || !
#line 3814 "../../gcc/config/i386/mmx.md"
((TARGET_MMX || TARGET_MMX_WITH_SSE) && TARGET_SSSE3))
        return -1;
      return 2186; /* ssse3_absv8qi2 */

    case E_V4HImode:
      if (!register_operand (operands[0], E_V4HImode)
          || GET_MODE (x3) != E_V4HImode
          || !register_mmxmem_operand (operands[1], E_V4HImode)
          || !
#line 3814 "../../gcc/config/i386/mmx.md"
((TARGET_MMX || TARGET_MMX_WITH_SSE) && TARGET_SSSE3))
        return -1;
      return 2187; /* ssse3_absv4hi2 */

    case E_V2SImode:
      if (!register_operand (operands[0], E_V2SImode)
          || GET_MODE (x3) != E_V2SImode
          || !register_mmxmem_operand (operands[1], E_V2SImode)
          || !
#line 3814 "../../gcc/config/i386/mmx.md"
((TARGET_MMX || TARGET_MMX_WITH_SSE) && TARGET_SSSE3))
        return -1;
      return 2188; /* ssse3_absv2si2 */

    case E_V4QImode:
      if (!register_operand (operands[0], E_V4QImode)
          || GET_MODE (x3) != E_V4QImode
          || !register_operand (operands[1], E_V4QImode)
          || !
#line 3835 "../../gcc/config/i386/mmx.md"
(TARGET_SSSE3))
        return -1;
      return 2189; /* absv4qi2 */

    case E_V2QImode:
      if (!register_operand (operands[0], E_V2QImode)
          || GET_MODE (x3) != E_V2QImode
          || !register_operand (operands[1], E_V2QImode)
          || !
#line 3835 "../../gcc/config/i386/mmx.md"
(TARGET_SSSE3))
        return -1;
      return 2190; /* absv2qi2 */

    case E_V2HImode:
      if (!register_operand (operands[0], E_V2HImode)
          || GET_MODE (x3) != E_V2HImode
          || !register_operand (operands[1], E_V2HImode)
          || !
#line 3835 "../../gcc/config/i386/mmx.md"
(TARGET_SSSE3))
        return -1;
      return 2191; /* absv2hi2 */

    default:
      return -1;
    }
}

 int
recog_45 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  switch (GET_CODE (x3))
    {
    case ZERO_EXTRACT:
      if (pnum_clobbers == NULL)
        return -1;
      x4 = XEXP (x3, 1);
      if (x4 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
        return -1;
      x5 = XEXP (x2, 1);
      if (x5 != const_int_rtx[MAX_SAVED_CONST_INT + 0]
          || !register_operand (operands[0], E_QImode)
          || GET_MODE (x2) != E_QImode)
        return -1;
      x6 = XEXP (x3, 0);
      operands[1] = x6;
      x7 = XEXP (x3, 2);
      operands[2] = x7;
      if (!register_operand (operands[2], E_QImode))
        return -1;
      switch (GET_MODE (x3))
        {
        case E_SImode:
          if (!register_operand (operands[1], E_SImode)
              || !
#line 19384 "../../gcc/config/i386/i386.md"
(TARGET_USE_BT && ix86_pre_reload_split ()))
            return -1;
          *pnum_clobbers = 1;
          return 1440; /* *btsi_setncqi_2 */

        case E_DImode:
          if (!register_operand (operands[1], E_DImode)
              || !(
#line 19384 "../../gcc/config/i386/i386.md"
(TARGET_USE_BT && ix86_pre_reload_split ()) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return -1;
          *pnum_clobbers = 1;
          return 1441; /* *btdi_setncqi_2 */

        default:
          return -1;
        }

    case REG:
    case SUBREG:
    case MEM:
      operands[1] = x3;
      x5 = XEXP (x2, 1);
      operands[2] = x5;
      switch (GET_MODE (operands[0]))
        {
        case E_V8QImode:
          if (pattern8 (x2, 
E_V8QImode) != 0
              || !
#line 4141 "../../gcc/config/i386/mmx.md"
((TARGET_MMX || TARGET_MMX_WITH_SSE)
   && ix86_binary_operator_ok (EQ, V8QImode, operands)))
            return -1;
          return 2211; /* *mmx_eqv8qi3 */

        case E_V4HImode:
          if (pattern8 (x2, 
E_V4HImode) != 0
              || !
#line 4141 "../../gcc/config/i386/mmx.md"
((TARGET_MMX || TARGET_MMX_WITH_SSE)
   && ix86_binary_operator_ok (EQ, V4HImode, operands)))
            return -1;
          return 2212; /* *mmx_eqv4hi3 */

        case E_V2SImode:
          if (pattern8 (x2, 
E_V2SImode) != 0
              || !
#line 4141 "../../gcc/config/i386/mmx.md"
((TARGET_MMX || TARGET_MMX_WITH_SSE)
   && ix86_binary_operator_ok (EQ, V2SImode, operands)))
            return -1;
          return 2213; /* *mmx_eqv2si3 */

        case E_V4QImode:
          if (pattern7 (x2, 
E_V4QImode) != 0
              || !
#line 4157 "../../gcc/config/i386/mmx.md"
(TARGET_SSE2))
            return -1;
          return 2214; /* *eqv4qi3 */

        case E_V2QImode:
          if (pattern7 (x2, 
E_V2QImode) != 0
              || !
#line 4157 "../../gcc/config/i386/mmx.md"
(TARGET_SSE2))
            return -1;
          return 2215; /* *eqv2qi3 */

        case E_V2HImode:
          if (pattern7 (x2, 
E_V2HImode) != 0
              || !
#line 4157 "../../gcc/config/i386/mmx.md"
(TARGET_SSE2))
            return -1;
          return 2216; /* *eqv2hi3 */

        default:
          return -1;
        }

    default:
      return -1;
    }
}

 int
recog_49 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  if (x3 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
    return -1;
  x4 = XEXP (x1, 0);
  switch (GET_CODE (x4))
    {
    case REG:
    case SUBREG:
    case MEM:
      operands[0] = x4;
      switch (GET_MODE (operands[0]))
        {
        case E_HImode:
          if (!register_operand (operands[0], E_HImode)
              || !ix86_comparison_operator (operands[1], E_HImode))
            return -1;
          if (
#line 19473 "../../gcc/config/i386/i386.md"
(TARGET_APX_ZU))
            return 1444; /* *setcc_hi_zu */
          if (pnum_clobbers != NULL
              && 
#line 19497 "../../gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL
   && TARGET_ZERO_EXTEND_WITH_AND && optimize_function_for_speed_p (cfun)))
            {
              *pnum_clobbers = 1;
              return 1448; /* *setcc_hi_1_and */
            }
          if (!
#line 19514 "../../gcc/config/i386/i386.md"
(!TARGET_APX_ZU && !TARGET_PARTIAL_REG_STALL
   && (!TARGET_ZERO_EXTEND_WITH_AND || optimize_function_for_size_p (cfun))))
            return -1;
          return 1450; /* *setcc_hi_1_movzbl */

        case E_QImode:
          if (!nonimmediate_operand (operands[0], E_QImode)
              || !ix86_comparison_operator (operands[1], E_QImode))
            return -1;
          return 1452; /* *setcc_qi */

        default:
          return -1;
        }

    case STRICT_LOW_PART:
      x5 = XEXP (x4, 0);
      operands[0] = x5;
      if (!register_operand (operands[0], E_QImode)
          || !ix86_comparison_operator (operands[1], E_QImode))
        return -1;
      return 1453; /* *setcc_qi_slp */

    default:
      return -1;
    }
}

 int
recog_54 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  switch (GET_CODE (x2))
    {
    case REG:
    case SUBREG:
    case MEM:
      operands[0] = x2;
      switch (GET_MODE (operands[0]))
        {
        case E_TImode:
          x3 = XEXP (x1, 1);
          if (pattern72 (x3, pnum_clobbers) != 0
              || !(
#line 8069 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (MINUS, DImode, operands, TARGET_APX_NDD)) && 
#line 1236 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return -1;
          *pnum_clobbers = 1;
          return 381; /* *subti3_doubleword */

        case E_QImode:
          x3 = XEXP (x1, 1);
          if (pattern73 (x3, 
E_QImode) != 0)
            return -1;
          if (
#line 8125 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (MINUS, QImode, operands, TARGET_APX_NDD)
  && TARGET_APX_NF))
            return 384; /* *subqi_1_nf */
          if (pnum_clobbers == NULL
              || !
#line 8125 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (MINUS, QImode, operands, TARGET_APX_NDD)
  && true))
            return -1;
          *pnum_clobbers = 1;
          return 385; /* *subqi_1 */

        case E_HImode:
          x3 = XEXP (x1, 1);
          if (pattern73 (x3, 
E_HImode) != 0)
            return -1;
          if (
#line 8125 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (MINUS, HImode, operands, TARGET_APX_NDD)
  && TARGET_APX_NF))
            return 386; /* *subhi_1_nf */
          if (pnum_clobbers == NULL
              || !
#line 8125 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (MINUS, HImode, operands, TARGET_APX_NDD)
  && true))
            return -1;
          *pnum_clobbers = 1;
          return 387; /* *subhi_1 */

        case E_HFmode:
          x3 = XEXP (x1, 1);
          if (pattern5 (x3, 
E_HFmode) != 0
              || !
#line 23304 "../../gcc/config/i386/i386.md"
(TARGET_AVX512FP16
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
            return -1;
          return 1671; /* *subhf */

        case E_V8QImode:
          x3 = XEXP (x1, 1);
          if (pattern8 (x3, 
E_V8QImode) != 0
              || !
#line 3211 "../../gcc/config/i386/mmx.md"
((TARGET_MMX || TARGET_MMX_WITH_SSE)
   && ix86_binary_operator_ok (MINUS, V8QImode, operands)))
            return -1;
          return 2119; /* *mmx_subv8qi3 */

        case E_V4HImode:
          x3 = XEXP (x1, 1);
          if (pattern8 (x3, 
E_V4HImode) != 0
              || !
#line 3211 "../../gcc/config/i386/mmx.md"
((TARGET_MMX || TARGET_MMX_WITH_SSE)
   && ix86_binary_operator_ok (MINUS, V4HImode, operands)))
            return -1;
          return 2121; /* *mmx_subv4hi3 */

        case E_V2SImode:
          x3 = XEXP (x1, 1);
          if (pattern8 (x3, 
E_V2SImode) != 0
              || !
#line 3211 "../../gcc/config/i386/mmx.md"
((TARGET_MMX || TARGET_MMX_WITH_SSE)
   && ix86_binary_operator_ok (MINUS, V2SImode, operands)))
            return -1;
          return 2123; /* *mmx_subv2si3 */

        case E_V1DImode:
          x3 = XEXP (x1, 1);
          if (pattern8 (x3, 
E_V1DImode) != 0
              || !(
#line 3211 "../../gcc/config/i386/mmx.md"
((TARGET_MMX || TARGET_MMX_WITH_SSE)
   && ix86_binary_operator_ok (MINUS, V1DImode, operands)) && 
#line 50 "../../gcc/config/i386/mmx.md"
(TARGET_SSE2)))
            return -1;
          return 2125; /* *mmx_subv1di3 */

        case E_V4QImode:
          x3 = XEXP (x1, 1);
          if (pattern7 (x3, 
E_V4QImode) != 0
              || !
#line 3227 "../../gcc/config/i386/mmx.md"
(TARGET_SSE2))
            return -1;
          return 2127; /* subv4qi3 */

        case E_V2HImode:
          x3 = XEXP (x1, 1);
          if (pattern7 (x3, 
E_V2HImode) != 0
              || !
#line 3227 "../../gcc/config/i386/mmx.md"
(TARGET_SSE2))
            return -1;
          return 2129; /* subv2hi3 */

        case E_V2QImode:
          if (pnum_clobbers == NULL)
            return -1;
          x3 = XEXP (x1, 1);
          if (pattern7 (x3, 
E_V2QImode) != 0
              || !
#line 3241 "../../gcc/config/i386/mmx.md"
(!TARGET_PARTIAL_REG_STALL || optimize_size || TARGET_SSE2))
            return -1;
          *pnum_clobbers = 1;
          return 2131; /* subv2qi3 */

        default:
          return -1;
        }

    case STRICT_LOW_PART:
      if (pnum_clobbers == NULL)
        return -1;
      x4 = XEXP (x2, 0);
      operands[0] = x4;
      switch (GET_MODE (operands[0]))
        {
        case E_QImode:
          x3 = XEXP (x1, 1);
          if (pattern1076 (x3, 
E_QImode) != 0
              || !
#line 8189 "../../gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)))
            return -1;
          *pnum_clobbers = 1;
          return 403; /* *subqi_1_slp */

        case E_HImode:
          x3 = XEXP (x1, 1);
          if (pattern1076 (x3, 
E_HImode) != 0
              || !
#line 8189 "../../gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)))
            return -1;
          *pnum_clobbers = 1;
          return 404; /* *subhi_1_slp */

        default:
          return -1;
        }

    default:
      return -1;
    }
}

 int
recog_62 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  operands[1] = x3;
  x4 = XEXP (x2, 1);
  switch (XVECLEN (x4, 0))
    {
    case 2:
      x5 = XVECEXP (x4, 0, 0);
      if (GET_CODE (x5) != CONST_INT)
        return -1;
      x6 = XVECEXP (x4, 0, 1);
      if (GET_CODE (x6) == CONST_INT
          && GET_MODE (x2) == E_V2SFmode)
        {
          switch (XWINT (x5, 0))
            {
            case 1L:
              if (register_operand (operands[0], E_V2SFmode))
                {
                  switch (XWINT (x6, 0))
                    {
                    case 0L:
                      if (register_mmxmem_operand (operands[1], E_V2SFmode)
                          && 
#line 1641 "../../gcc/config/i386/mmx.md"
(TARGET_3DNOW_A || TARGET_MMX_WITH_SSE))
                        return 2078; /* mmx_pswapdv2sf2 */
                      break;

                    case 1L:
                      if (register_operand (operands[1], E_V2SFmode)
                          && 
#line 1657 "../../gcc/config/i386/mmx.md"
(TARGET_MMX_WITH_SSE))
                        return 2079; /* *mmx_movshdup */
                      break;

                    default:
                      break;
                    }
                }
              break;

            case 0L:
              switch (XWINT (x6, 0))
                {
                case 0L:
                  if (register_operand (operands[0], E_V2SFmode)
                      && register_operand (operands[1], E_V2SFmode)
                      && 
#line 1673 "../../gcc/config/i386/mmx.md"
(TARGET_MMX_WITH_SSE))
                    return 2080; /* *mmx_movsldup */
                  break;

                case 1L:
                  if (nonimmediate_operand (operands[0], E_V2SFmode)
                      && nonimmediate_operand (operands[1], E_V4SFmode)
                      && 
#line 11639 "../../gcc/config/i386/sse.md"
(TARGET_SSE && !(MEM_P (operands[0]) && MEM_P (operands[1]))))
                    return 5275; /* sse_storelps */
                  break;

                default:
                  break;
                }
              break;

            case 2L:
              if (XWINT (x6, 0) == 3L
                  && nonimmediate_operand (operands[0], E_V2SFmode)
                  && nonimmediate_operand (operands[1], E_V4SFmode)
                  && 
#line 11586 "../../gcc/config/i386/sse.md"
(TARGET_SSE && !(MEM_P (operands[0]) && MEM_P (operands[1]))))
                return 5273; /* sse_storehps */
              break;

            default:
              break;
            }
        }
      operands[2] = x5;
      if (const_0_to_1_operand (operands[2], E_VOIDmode))
        {
          operands[3] = x6;
          if (const_0_to_1_operand (operands[3], E_VOIDmode))
            {
              switch (GET_MODE (operands[0]))
                {
                case E_V2SImode:
                  if (register_operand (operands[0], E_V2SImode)
                      && GET_MODE (x2) == E_V2SImode
                      && register_operand (operands[1], E_V2SImode)
                      && 
#line 5575 "../../gcc/config/i386/mmx.md"
(TARGET_MMX_WITH_SSE))
                    return 2329; /* *mmx_pshufd_1 */
                  break;

                case E_V2HFmode:
                  if (register_operand (operands[0], E_V2HFmode)
                      && GET_MODE (x2) == E_V2HFmode
                      && register_operand (operands[1], E_V2HFmode)
                      && 
#line 6236 "../../gcc/config/i386/mmx.md"
(TARGET_SSE2))
                    return 2365; /* *pshufwv2hf_1 */
                  break;

                case E_V2BFmode:
                  if (register_operand (operands[0], E_V2BFmode)
                      && GET_MODE (x2) == E_V2BFmode
                      && register_operand (operands[1], E_V2BFmode)
                      && 
#line 6236 "../../gcc/config/i386/mmx.md"
(TARGET_SSE2))
                    return 2366; /* *pshufwv2bf_1 */
                  break;

                case E_V2HImode:
                  if (register_operand (operands[0], E_V2HImode)
                      && GET_MODE (x2) == E_V2HImode
                      && register_operand (operands[1], E_V2HImode)
                      && 
#line 6236 "../../gcc/config/i386/mmx.md"
(TARGET_SSE2))
                    return 2367; /* *pshufwv2hi_1 */
                  break;

                default:
                  break;
                }
            }
        }
      if (XWINT (x5, 0) != 1L
          || x6 != const_int_rtx[MAX_SAVED_CONST_INT + 0]
          || !register_operand (operands[0], E_V2SImode)
          || GET_MODE (x2) != E_V2SImode
          || !register_mmxmem_operand (operands[1], E_V2SImode)
          || !
#line 5643 "../../gcc/config/i386/mmx.md"
(TARGET_3DNOW_A))
        return -1;
      return 2336; /* mmx_pswapdv2si2 */

    case 1:
      x5 = XVECEXP (x4, 0, 0);
      if (GET_CODE (x5) != CONST_INT)
        return -1;
      switch (XWINT (x5, 0))
        {
        case 0L:
          switch (GET_MODE (operands[0]))
            {
            case E_SFmode:
              switch (pattern976 (x2))
                {
                case 0:
                  if (
#line 1783 "../../gcc/config/i386/mmx.md"
((TARGET_MMX || TARGET_MMX_WITH_SSE)
   && !(MEM_P (operands[0]) && MEM_P (operands[1]))))
                    return 2087; /* *vec_extractv2sf_0 */
                  break;

                case 1:
                  if (
#line 12323 "../../gcc/config/i386/sse.md"
(TARGET_SSE && !(MEM_P (operands[0]) && MEM_P (operands[1]))))
                    return 5331; /* *vec_extractv4sf_0 */
                  break;

                default:
                  break;
                }
              break;

            case E_HFmode:
              switch (pattern977 (x2))
                {
                case 0:
                  if ((
#line 13232 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && !(MEM_P (operands[0]) && MEM_P (operands[1]))) && 
#line 549 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                    return 5390; /* *vec_extractv32hf_0 */
                  break;

                case 1:
                  if (
#line 13232 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && !(MEM_P (operands[0]) && MEM_P (operands[1]))))
                    return 5391; /* *vec_extractv16hf_0 */
                  break;

                case 2:
                  if (
#line 13232 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && !(MEM_P (operands[0]) && MEM_P (operands[1]))))
                    return 5392; /* *vec_extractv8hf_0 */
                  break;

                default:
                  break;
                }
              break;

            case E_BFmode:
              switch (pattern978 (x2))
                {
                case 0:
                  if ((
#line 13232 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && !(MEM_P (operands[0]) && MEM_P (operands[1]))) && 
#line 550 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                    return 5393; /* *vec_extractv32bf_0 */
                  break;

                case 1:
                  if (
#line 13232 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && !(MEM_P (operands[0]) && MEM_P (operands[1]))))
                    return 5394; /* *vec_extractv16bf_0 */
                  break;

                case 2:
                  if (
#line 13232 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && !(MEM_P (operands[0]) && MEM_P (operands[1]))))
                    return 5395; /* *vec_extractv8bf_0 */
                  break;

                default:
                  break;
                }
              break;

            case E_DFmode:
              if (nonimmediate_operand (operands[0], E_DFmode)
                  && GET_MODE (x2) == E_DFmode
                  && nonimmediate_operand (operands[1], E_V2DFmode))
                {
                  if (
#line 14650 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && !(MEM_P (operands[0]) && MEM_P (operands[1]))))
                    return 7209; /* sse2_storelpd */
                  if (
#line 14679 "../../gcc/config/i386/sse.md"
(!TARGET_SSE2 && TARGET_SSE
   && !(MEM_P (operands[0]) && MEM_P (operands[1]))))
                    return 7210; /* *vec_extractv2df_0_sse */
                }
              break;

            case E_QImode:
              if (memory_operand (operands[0], E_QImode)
                  && GET_MODE (x2) == E_QImode
                  && register_operand (operands[1], E_V16QImode)
                  && (
#line 21064 "../../gcc/config/i386/sse.md"
(TARGET_SSE2
   && !TARGET_SSE4_1
   && (TARGET_INTER_UNIT_MOVES_FROM_VEC
       || optimize_function_for_speed_p (cfun))
   && ix86_pre_reload_split ()) && 
#line 21057 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1)))
                return 8453; /* *vec_extractv16qi_0_mem */
              break;

            case E_HImode:
              if (memory_operand (operands[0], E_HImode)
                  && GET_MODE (x2) == E_HImode
                  && register_operand (operands[1], E_V8HImode)
                  && 
#line 21064 "../../gcc/config/i386/sse.md"
(TARGET_SSE2
   && !TARGET_SSE4_1
   && (TARGET_INTER_UNIT_MOVES_FROM_VEC
       || optimize_function_for_speed_p (cfun))
   && ix86_pre_reload_split ()))
                return 8454; /* *vec_extractv8hi_0_mem */
              break;

            default:
              break;
            }
          break;

        case 1L:
          switch (GET_MODE (operands[0]))
            {
            case E_SFmode:
              if (nonimmediate_operand (operands[0], E_SFmode)
                  && GET_MODE (x2) == E_SFmode
                  && nonimmediate_operand (operands[1], E_V2SFmode)
                  && 
#line 1798 "../../gcc/config/i386/mmx.md"
((TARGET_MMX || TARGET_MMX_WITH_SSE)
   && !(MEM_P (operands[0]) && MEM_P (operands[1]))))
                return 2088; /* *vec_extractv2sf_1 */
              break;

            case E_DFmode:
              if (nonimmediate_operand (operands[0], E_DFmode)
                  && GET_MODE (x2) == E_DFmode
                  && nonimmediate_operand (operands[1], E_V2DFmode))
                {
                  if (
#line 14593 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && !(MEM_P (operands[0]) && MEM_P (operands[1]))))
                    return 7207; /* sse2_storehpd */
                  if (
#line 14626 "../../gcc/config/i386/sse.md"
(!TARGET_SSE2 && TARGET_SSE
   && !(MEM_P (operands[0]) && MEM_P (operands[1]))))
                    return 7208; /* *vec_extractv2df_1_sse */
                }
              break;

            default:
              break;
            }
          break;

        default:
          break;
        }
      operands[2] = x5;
      switch (GET_MODE (operands[0]))
        {
        case E_HImode:
          if (GET_MODE (x2) != E_HImode)
            return -1;
          if (register_sse4nonimm_operand (operands[0], E_HImode))
            {
              switch (GET_MODE (operands[1]))
                {
                case E_V4HImode:
                  if (register_operand (operands[1], E_V4HImode)
                      && const_0_to_3_operand (operands[2], E_SImode)
                      && 
#line 5381 "../../gcc/config/i386/mmx.md"
((TARGET_MMX || TARGET_MMX_WITH_SSE)
   && (TARGET_SSE || TARGET_3DNOW_A)))
                    return 2315; /* *mmx_pextrw */
                  break;

                case E_V2HImode:
                  if (register_operand (operands[1], E_V2HImode)
                      && const_0_to_1_operand (operands[2], E_SImode)
                      && 
#line 6047 "../../gcc/config/i386/mmx.md"
(TARGET_SSE2))
                    return 2353; /* *pextrw */
                  break;

                case E_V8HImode:
                  if (register_operand (operands[1], E_V8HImode)
                      && const_0_to_7_operand (operands[2], E_SImode)
                      && 
#line 21088 "../../gcc/config/i386/sse.md"
(TARGET_SSE2))
                    return 8456; /* *vec_extractv8hi */
                  break;

                default:
                  break;
                }
            }
          if (!register_operand (operands[0], E_HImode)
              || !memory_operand (operands[1], E_V8HImode)
              || !const_0_to_7_operand (operands[2], E_VOIDmode)
              || !
#line 21149 "../../gcc/config/i386/sse.md"
(TARGET_SSE))
            return -1;
          return 8463; /* *vec_extractv8hi_mem */

        case E_HFmode:
          if (!register_sse4nonimm_operand (operands[0], E_HFmode)
              || GET_MODE (x2) != E_HFmode)
            return -1;
          switch (GET_MODE (operands[1]))
            {
            case E_V4HFmode:
              if (!register_operand (operands[1], E_V4HFmode)
                  || !const_0_to_3_operand (operands[2], E_SImode)
                  || !
#line 5401 "../../gcc/config/i386/mmx.md"
((TARGET_MMX || TARGET_MMX_WITH_SSE)
   && (TARGET_SSE || TARGET_3DNOW_A)))
                return -1;
              return 2316; /* *mmx_pextrwv4hf */

            case E_V2HFmode:
              if (!register_operand (operands[1], E_V2HFmode)
                  || !const_0_to_1_operand (operands[2], E_SImode)
                  || !
#line 6064 "../../gcc/config/i386/mmx.md"
(TARGET_SSE2))
                return -1;
              return 2354; /* *pextrwv2hf */

            case E_V8HFmode:
              if (!register_operand (operands[1], E_V8HFmode)
                  || !const_0_to_7_operand (operands[2], E_SImode)
                  || !
#line 13244 "../../gcc/config/i386/sse.md"
(TARGET_SSE2))
                return -1;
              return 5396; /* *vec_extracthf */

            default:
              return -1;
            }

        case E_BFmode:
          if (!register_sse4nonimm_operand (operands[0], E_BFmode)
              || GET_MODE (x2) != E_BFmode)
            return -1;
          switch (GET_MODE (operands[1]))
            {
            case E_V4BFmode:
              if (!register_operand (operands[1], E_V4BFmode)
                  || !const_0_to_3_operand (operands[2], E_SImode)
                  || !
#line 5401 "../../gcc/config/i386/mmx.md"
((TARGET_MMX || TARGET_MMX_WITH_SSE)
   && (TARGET_SSE || TARGET_3DNOW_A)))
                return -1;
              return 2317; /* *mmx_pextrwv4bf */

            case E_V2BFmode:
              if (!register_operand (operands[1], E_V2BFmode)
                  || !const_0_to_1_operand (operands[2], E_SImode)
                  || !
#line 6064 "../../gcc/config/i386/mmx.md"
(TARGET_SSE2))
                return -1;
              return 2355; /* *pextrwv2bf */

            case E_V8BFmode:
              if (!register_operand (operands[1], E_V8BFmode)
                  || !const_0_to_7_operand (operands[2], E_SImode)
                  || !
#line 13244 "../../gcc/config/i386/sse.md"
(TARGET_SSE2))
                return -1;
              return 5397; /* *vec_extractbf */

            default:
              return -1;
            }

        case E_QImode:
          if (GET_MODE (x2) != E_QImode)
            return -1;
          if (nonimmediate_operand (operands[0], E_QImode))
            {
              switch (GET_MODE (operands[1]))
                {
                case E_V8QImode:
                  if (register_operand (operands[1], E_V8QImode)
                      && const_0_to_7_operand (operands[2], E_SImode)
                      && 
#line 5454 "../../gcc/config/i386/mmx.md"
(TARGET_SSE4_1 && TARGET_MMX_WITH_SSE))
                    return 2320; /* *mmx_pextrb */
                  break;

                case E_V4QImode:
                  if (register_operand (operands[1], E_V4QImode)
                      && const_0_to_3_operand (operands[2], E_SImode)
                      && 
#line 6110 "../../gcc/config/i386/mmx.md"
(TARGET_SSE4_1))
                    return 2358; /* *pextrb */
                  break;

                default:
                  break;
                }
            }
          if (register_sse4nonimm_operand (operands[0], E_QImode)
              && register_operand (operands[1], E_V16QImode)
              && const_0_to_15_operand (operands[2], E_SImode)
              && (
#line 21088 "../../gcc/config/i386/sse.md"
(TARGET_SSE2) && 
#line 21057 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1)))
            return 8455; /* *vec_extractv16qi */
          if (!register_operand (operands[0], E_QImode)
              || !memory_operand (operands[1], E_V16QImode)
              || !const_0_to_15_operand (operands[2], E_VOIDmode)
              || !
#line 21149 "../../gcc/config/i386/sse.md"
(TARGET_SSE))
            return -1;
          return 8462; /* *vec_extractv16qi_mem */

        case E_SFmode:
          if (GET_MODE (x2) != E_SFmode)
            return -1;
          if (nonimmediate_operand (operands[0], E_SFmode)
              && register_operand (operands[1], E_V4SFmode)
              && const_0_to_3_operand (operands[2], E_SImode)
              && 
#line 12334 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1))
            return 5332; /* *sse4_1_extractps */
          if (!register_operand (operands[0], E_SFmode))
            return -1;
          switch (GET_MODE (operands[1]))
            {
            case E_V4SFmode:
              if (!memory_operand (operands[1], E_V4SFmode)
                  || !const_0_to_3_operand (operands[2], E_VOIDmode)
                  || !
#line 12377 "../../gcc/config/i386/sse.md"
(TARGET_SSE))
                return -1;
              return 5333; /* *vec_extractv4sf_mem */

            case E_V16SFmode:
              if (!register_operand (operands[1], E_V16SFmode)
                  || !const_0_to_15_operand (operands[2], E_VOIDmode)
                  || !(
#line 14072 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F
   && INTVAL(operands[2]) * GET_MODE_SIZE (SFmode) >= 16) && 
#line 303 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                return -1;
              return 7092; /* *vec_extractv16sfsf_valign */

            case E_V8SFmode:
              if (!register_operand (operands[1], E_V8SFmode)
                  || !const_0_to_7_operand (operands[2], E_VOIDmode)
                  || !(
#line 14072 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F
   && INTVAL(operands[2]) * GET_MODE_SIZE (SFmode) >= 16) && 
#line 303 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                return -1;
              return 7093; /* *vec_extractv8sfsf_valign */

            default:
              return -1;
            }

        case E_DFmode:
          if (!register_operand (operands[0], E_DFmode)
              || GET_MODE (x2) != E_DFmode)
            return -1;
          switch (GET_MODE (operands[1]))
            {
            case E_V8DFmode:
              if (!register_operand (operands[1], E_V8DFmode)
                  || !const_0_to_7_operand (operands[2], E_VOIDmode)
                  || !(
#line 14072 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F
   && INTVAL(operands[2]) * GET_MODE_SIZE (DFmode) >= 16) && 
#line 304 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                return -1;
              return 7094; /* *vec_extractv8dfdf_valign */

            case E_V4DFmode:
              if (!register_operand (operands[1], E_V4DFmode)
                  || !const_0_to_3_operand (operands[2], E_VOIDmode)
                  || !(
#line 14072 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F
   && INTVAL(operands[2]) * GET_MODE_SIZE (DFmode) >= 16) && 
#line 304 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                return -1;
              return 7095; /* *vec_extractv4dfdf_valign */

            default:
              return -1;
            }

        case E_TImode:
          if (!nonimmediate_operand (operands[0], E_TImode)
              || GET_MODE (x2) != E_TImode)
            return -1;
          switch (GET_MODE (operands[1]))
            {
            case E_V2TImode:
              if (!register_operand (operands[1], E_V2TImode)
                  || !const_0_to_1_operand (operands[2], E_SImode)
                  || !
#line 21405 "../../gcc/config/i386/sse.md"
(TARGET_AVX))
                return -1;
              return 8474; /* *vec_extractv2ti */

            case E_V4TImode:
              if (!register_operand (operands[1], E_V4TImode)
                  || !const_0_to_3_operand (operands[2], E_SImode)
                  || !
#line 21423 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512))
                return -1;
              return 8475; /* *vec_extractv4ti */

            default:
              return -1;
            }

        default:
          return -1;
        }

    case 4:
      x5 = XVECEXP (x4, 0, 0);
      operands[2] = x5;
      if (pattern674 (x4) != 0)
        return -1;
      switch (GET_MODE (operands[0]))
        {
        case E_V4HFmode:
          if (!register_operand (operands[0], E_V4HFmode)
              || GET_MODE (x2) != E_V4HFmode
              || !register_mmxmem_operand (operands[1], E_V4HFmode)
              || !
#line 5543 "../../gcc/config/i386/mmx.md"
((TARGET_MMX || TARGET_MMX_WITH_SSE)
   && (TARGET_SSE || TARGET_3DNOW_A)))
            return -1;
          return 2326; /* mmx_pshufwv4hf_1 */

        case E_V4BFmode:
          if (!register_operand (operands[0], E_V4BFmode)
              || GET_MODE (x2) != E_V4BFmode
              || !register_mmxmem_operand (operands[1], E_V4BFmode)
              || !
#line 5543 "../../gcc/config/i386/mmx.md"
((TARGET_MMX || TARGET_MMX_WITH_SSE)
   && (TARGET_SSE || TARGET_3DNOW_A)))
            return -1;
          return 2327; /* mmx_pshufwv4bf_1 */

        case E_V4HImode:
          if (!register_operand (operands[0], E_V4HImode)
              || GET_MODE (x2) != E_V4HImode
              || !register_mmxmem_operand (operands[1], E_V4HImode)
              || !
#line 5543 "../../gcc/config/i386/mmx.md"
((TARGET_MMX || TARGET_MMX_WITH_SSE)
   && (TARGET_SSE || TARGET_3DNOW_A)))
            return -1;
          return 2328; /* mmx_pshufwv4hi_1 */

        default:
          return -1;
        }

    default:
      return -1;
    }
}

 int
recog_81 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12, x13, x14, x15, x16, x17;
  rtx x18;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  operands[0] = x2;
  x3 = XEXP (x1, 1);
  x4 = XEXP (x3, 0);
  switch (GET_CODE (x4))
    {
    case ASHIFT:
      return recog_80 (x1, insn, pnum_clobbers);

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
#line 13527 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (IOR, DImode, operands, TARGET_APX_NDD)) && 
#line 1235 "../../gcc/config/i386/i386.md"
(!TARGET_64BIT)))
            {
              *pnum_clobbers = 1;
              return 819; /* *iordi3_doubleword */
            }
          if (x86_64_general_operand (operands[2], E_DImode))
            {
              if ((
#line 13585 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (IOR, DImode, operands, TARGET_APX_NDD)
   && TARGET_APX_NF) && 
#line 1164 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return 831; /* *iordi_1_nf */
              if (pnum_clobbers != NULL
                  && (
#line 13585 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (IOR, DImode, operands, TARGET_APX_NDD)
   && true) && 
#line 1164 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                {
                  *pnum_clobbers = 1;
                  return 832; /* *iordi_1 */
                }
            }
          if (pnum_clobbers == NULL
              || !const_int_operand (operands[2], E_DImode)
              || !
#line 13633 "../../gcc/config/i386/i386.md"
(TARGET_64BIT && TARGET_USE_BT
   && ix86_binary_operator_ok (IOR, DImode, operands)
   && IN_RANGE (exact_log2 (INTVAL (operands[2])), 31, 63)))
            return -1;
          *pnum_clobbers = 1;
          return 838; /* *iordi_1_bts */

        case 1:
          if (
#line 13585 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (IOR, SImode, operands, TARGET_APX_NDD)
   && TARGET_APX_NF))
            return 827; /* *iorsi_1_nf */
          if (pnum_clobbers == NULL
              || !
#line 13585 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (IOR, SImode, operands, TARGET_APX_NDD)
   && true))
            return -1;
          *pnum_clobbers = 1;
          return 828; /* *iorsi_1 */

        default:
          return -1;
        }

    case ZERO_EXTEND:
      switch (pattern111 (x3))
        {
        case 0:
          if (pnum_clobbers != NULL)
            {
              x5 = XEXP (x3, 1);
              operands[2] = x5;
              if (x86_64_zext_immediate_operand (operands[2], E_DImode)
                  && register_operand (operands[0], E_DImode)
                  && 
#line 13762 "../../gcc/config/i386/i386.md"
(TARGET_64BIT
   && ix86_binary_operator_ok (IOR, SImode, operands, TARGET_APX_NDD)))
                {
                  *pnum_clobbers = 1;
                  return 865; /* *iorsi_1_zext_imm */
                }
            }
          x5 = XEXP (x3, 1);
          operands[2] = x5;
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
          return 947; /* *concatsidi3_7 */

        case 1:
          if (!(
#line 14077 "../../gcc/config/i386/i386.md"
(INTVAL (operands[3]) == 4 * BITS_PER_UNIT) && 
#line 1235 "../../gcc/config/i386/i386.md"
(!TARGET_64BIT)))
            return -1;
          return 899; /* *concatsidi3_2 */

        case 2:
          if (!(
#line 14121 "../../gcc/config/i386/i386.md"
(INTVAL (operands[3]) == 4 * BITS_PER_UNIT) && 
#line 1235 "../../gcc/config/i386/i386.md"
(!TARGET_64BIT)))
            return -1;
          return 917; /* *concatsidi3_4 */

        case 3:
          if (!(
#line 14121 "../../gcc/config/i386/i386.md"
(INTVAL (operands[3]) == 4 * BITS_PER_UNIT) && 
#line 1235 "../../gcc/config/i386/i386.md"
(!TARGET_64BIT)))
            return -1;
          return 920; /* *concatsidi3_4 */

        default:
          return -1;
        }

    case LSHIFTRT:
      x6 = XEXP (x4, 1);
      switch (GET_CODE (x6))
        {
        case AND:
          switch (pattern288 (x3, 
ASHIFT))
            {
            case 0:
              x5 = XEXP (x3, 1);
              x7 = XEXP (x5, 0);
              x8 = XEXP (x7, 0);
              x9 = XEXP (x8, 0);
              operands[1] = x9;
              if (nonimmediate_operand (operands[0], E_DImode))
                {
                  res = recog_79 (x1, insn, pnum_clobbers);
                  if (res >= 0)
                    return res;
                }
              operands[2] = x9;
              if (!register_operand (operands[0], E_DImode))
                return -1;
              x10 = XEXP (x4, 0);
              operands[1] = x10;
              if (!nonimmediate_operand (operands[1], E_DImode))
                return -1;
              x11 = XEXP (x6, 0);
              operands[3] = x11;
              x12 = XEXP (x7, 1);
              x13 = XEXP (x12, 1);
              x14 = XEXP (x13, 0);
              if (!rtx_equal_p (x14, operands[3]))
                return -1;
              if (
#line 16807 "../../gcc/config/i386/i386.md"
(TARGET_APX_NDD && TARGET_APX_NF))
                return 1144; /* x86_64_shrd_ndd_nf */
              if (pnum_clobbers == NULL
                  || !
#line 16807 "../../gcc/config/i386/i386.md"
(TARGET_APX_NDD && true))
                return -1;
              *pnum_clobbers = 1;
              return 1145; /* x86_64_shrd_ndd */

            case 1:
              if (pattern287 (x3, 
E_SImode, 
E_DImode) != 0)
                return -1;
              x5 = XEXP (x3, 1);
              x7 = XEXP (x5, 0);
              x8 = XEXP (x7, 0);
              x9 = XEXP (x8, 0);
              operands[1] = x9;
              if (nonimmediate_operand (operands[0], E_SImode))
                {
                  x11 = XEXP (x6, 0);
                  operands[2] = x11;
                  x10 = XEXP (x4, 0);
                  if (rtx_equal_p (x10, operands[0]))
                    {
                      x12 = XEXP (x7, 1);
                      x13 = XEXP (x12, 1);
                      x14 = XEXP (x13, 0);
                      if (rtx_equal_p (x14, operands[2]))
                        {
                          if (
#line 17016 "../../gcc/config/i386/i386.md"
(TARGET_APX_NF))
                            return 1154; /* x86_shrd_nf */
                          if (pnum_clobbers != NULL)
                            {
                              *pnum_clobbers = 1;
                              return 1155; /* x86_shrd */
                            }
                        }
                    }
                }
              operands[2] = x9;
              if (!register_operand (operands[0], E_SImode))
                return -1;
              x10 = XEXP (x4, 0);
              operands[1] = x10;
              if (!nonimmediate_operand (operands[1], E_SImode))
                return -1;
              x11 = XEXP (x6, 0);
              operands[3] = x11;
              x12 = XEXP (x7, 1);
              x13 = XEXP (x12, 1);
              x14 = XEXP (x13, 0);
              if (!rtx_equal_p (x14, operands[3]))
                return -1;
              if (
#line 17038 "../../gcc/config/i386/i386.md"
(TARGET_APX_NDD && TARGET_APX_NF))
                return 1156; /* x86_shrd_ndd_nf */
              if (pnum_clobbers == NULL
                  || !
#line 17038 "../../gcc/config/i386/i386.md"
(TARGET_APX_NDD && true))
                return -1;
              *pnum_clobbers = 1;
              return 1157; /* x86_shrd_ndd */

            default:
              return -1;
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
        case LABEL_REF:
        case SYMBOL_REF:
        case HIGH:
          x5 = XEXP (x3, 1);
          switch (GET_CODE (x5))
            {
            case SUBREG:
              switch (pattern438 (x3, 
ASHIFT))
                {
                case 0:
                  operands[2] = x6;
                  if (pattern1360 (x3) == 0)
                    {
                      if (
#line 16822 "../../gcc/config/i386/i386.md"
(TARGET_64BIT
   && INTVAL (operands[3]) == 64 - INTVAL (operands[2])
   && TARGET_APX_NF))
                        return 1146; /* x86_64_shrd_1_nf */
                      if (pnum_clobbers != NULL
                          && 
#line 16822 "../../gcc/config/i386/i386.md"
(TARGET_64BIT
   && INTVAL (operands[3]) == 64 - INTVAL (operands[2])
   && true))
                        {
                          *pnum_clobbers = 1;
                          return 1147; /* x86_64_shrd_1 */
                        }
                    }
                  operands[3] = x6;
                  if (pattern1361 (x3) != 0)
                    return -1;
                  if (
#line 16844 "../../gcc/config/i386/i386.md"
(TARGET_APX_NDD
   && INTVAL (operands[4]) == 64 - INTVAL (operands[3])
   && TARGET_APX_NF))
                    return 1148; /* x86_64_shrd_ndd_1_nf */
                  if (pnum_clobbers == NULL
                      || !
#line 16844 "../../gcc/config/i386/i386.md"
(TARGET_APX_NDD
   && INTVAL (operands[4]) == 64 - INTVAL (operands[3])
   && true))
                    return -1;
                  *pnum_clobbers = 1;
                  return 1149; /* x86_64_shrd_ndd_1 */

                case 1:
                  operands[2] = x6;
                  if (pattern1362 (x3) == 0)
                    {
                      if (
#line 17053 "../../gcc/config/i386/i386.md"
(INTVAL (operands[3]) == 32 - INTVAL (operands[2])
   && TARGET_APX_NF))
                        return 1158; /* x86_shrd_1_nf */
                      if (pnum_clobbers != NULL
                          && 
#line 17053 "../../gcc/config/i386/i386.md"
(INTVAL (operands[3]) == 32 - INTVAL (operands[2])
   && true))
                        {
                          *pnum_clobbers = 1;
                          return 1159; /* x86_shrd_1 */
                        }
                    }
                  operands[3] = x6;
                  if (pattern1363 (x3) != 0)
                    return -1;
                  if (
#line 17075 "../../gcc/config/i386/i386.md"
(TARGET_APX_NDD
   && (INTVAL (operands[4]) == 32 - INTVAL (operands[3]))
   && TARGET_APX_NF))
                    return 1160; /* x86_shrd_ndd_1_nf */
                  if (pnum_clobbers == NULL
                      || !
#line 17075 "../../gcc/config/i386/i386.md"
(TARGET_APX_NDD
   && (INTVAL (operands[4]) == 32 - INTVAL (operands[3]))
   && true))
                    return -1;
                  *pnum_clobbers = 1;
                  return 1161; /* x86_shrd_ndd_1 */

                default:
                  return -1;
                }

            case ASHIFT:
              switch (pattern441 (x3, pnum_clobbers))
                {
                case 0:
                  if (
#line 16860 "../../gcc/config/i386/i386.md"
(TARGET_64BIT && TARGET_APX_NF
   && INTVAL (operands[3]) == 64 - INTVAL (operands[2])
   && ix86_pre_reload_split ()))
                    return 1150; /* *x86_64_shrd_shld_1_nozext_nf */
                  if (pnum_clobbers == NULL
                      || !
#line 16916 "../../gcc/config/i386/i386.md"
(TARGET_64BIT
   && INTVAL (operands[3]) == 64 - INTVAL (operands[2])
   && ix86_pre_reload_split ()))
                    return -1;
                  *pnum_clobbers = 1;
                  return 1151; /* *x86_64_shrd_shld_1_nozext */

                case 1:
                  if (
#line 17091 "../../gcc/config/i386/i386.md"
(TARGET_APX_NF
   && INTVAL (operands[3]) == 32 - INTVAL (operands[2])
   && ix86_pre_reload_split ()))
                    return 1162; /* *x86_shrd_shld_1_nozext_nf */
                  if (pnum_clobbers == NULL
                      || !
#line 17147 "../../gcc/config/i386/i386.md"
(INTVAL (operands[3]) == 32 - INTVAL (operands[2])
   && ix86_pre_reload_split ()))
                    return -1;
                  *pnum_clobbers = 1;
                  return 1163; /* *x86_shrd_shld_1_nozext */

                case 2:
                  x7 = XEXP (x5, 0);
                  operands[1] = x7;
                  if (nonimmediate_operand (operands[0], E_DImode))
                    {
                      operands[2] = x6;
                      x10 = XEXP (x4, 0);
                      if (rtx_equal_p (x10, operands[0]))
                        {
                          x15 = XEXP (x5, 1);
                          x16 = XEXP (x15, 1);
                          if (rtx_equal_p (x16, operands[2])
                              && 
#line 16969 "../../gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_pre_reload_split ()))
                            {
                              *pnum_clobbers = 1;
                              return 1152; /* *x86_64_shrd_2 */
                            }
                        }
                    }
                  operands[2] = x7;
                  if (!register_operand (operands[0], E_DImode))
                    return -1;
                  x10 = XEXP (x4, 0);
                  operands[1] = x10;
                  if (!nonimmediate_operand (operands[1], E_DImode))
                    return -1;
                  operands[3] = x6;
                  x15 = XEXP (x5, 1);
                  x16 = XEXP (x15, 1);
                  if (!rtx_equal_p (x16, operands[2])
                      || !
#line 16990 "../../gcc/config/i386/i386.md"
(TARGET_APX_NDD
  && ix86_pre_reload_split ()))
                    return -1;
                  *pnum_clobbers = 1;
                  return 1153; /* *x86_64_shrd_ndd_2 */

                case 3:
                  x7 = XEXP (x5, 0);
                  operands[1] = x7;
                  if (nonimmediate_operand (operands[0], E_SImode))
                    {
                      operands[2] = x6;
                      x10 = XEXP (x4, 0);
                      if (rtx_equal_p (x10, operands[0]))
                        {
                          x15 = XEXP (x5, 1);
                          x16 = XEXP (x15, 1);
                          if (rtx_equal_p (x16, operands[2])
                              && 
#line 17199 "../../gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_pre_reload_split ()))
                            {
                              *pnum_clobbers = 1;
                              return 1164; /* *x86_shrd_2 */
                            }
                        }
                    }
                  operands[2] = x7;
                  if (!register_operand (operands[0], E_SImode))
                    return -1;
                  x10 = XEXP (x4, 0);
                  operands[1] = x10;
                  if (!nonimmediate_operand (operands[1], E_SImode))
                    return -1;
                  operands[3] = x6;
                  x15 = XEXP (x5, 1);
                  x16 = XEXP (x15, 1);
                  if (!rtx_equal_p (x16, operands[3])
                      || !
#line 17220 "../../gcc/config/i386/i386.md"
(TARGET_APX_NDD
   && ix86_pre_reload_split ()))
                    return -1;
                  *pnum_clobbers = 1;
                  return 1165; /* *x86_shrd_ndd_2 */

                default:
                  return -1;
                }

            default:
              return -1;
            }

        default:
          return -1;
        }

    case NOT:
      if (pnum_clobbers == NULL)
        return -1;
      x10 = XEXP (x4, 0);
      if (GET_CODE (x10) != PLUS)
        return -1;
      x17 = XEXP (x10, 1);
      if (x17 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
        return -1;
      x18 = XEXP (x10, 0);
      operands[1] = x18;
      x5 = XEXP (x3, 1);
      if (!rtx_equal_p (x5, operands[1]))
        return -1;
      switch (GET_MODE (operands[0]))
        {
        case E_SImode:
          if (pattern987 (x3, 
E_SImode) != 0
              || !
#line 22041 "../../gcc/config/i386/i386.md"
(TARGET_TBM))
            return -1;
          *pnum_clobbers = 1;
          return 1602; /* *tbm_blci_si */

        case E_DImode:
          if (pattern987 (x3, 
E_DImode) != 0
              || !(
#line 22041 "../../gcc/config/i386/i386.md"
(TARGET_TBM) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return -1;
          *pnum_clobbers = 1;
          return 1603; /* *tbm_blci_di */

        default:
          return -1;
        }

    case PLUS:
      if (pnum_clobbers == NULL)
        return -1;
      x6 = XEXP (x4, 1);
      if (GET_CODE (x6) != CONST_INT)
        return -1;
      x10 = XEXP (x4, 0);
      operands[1] = x10;
      switch (XWINT (x6, 0))
        {
        case 1L:
          switch (pattern757 (x3))
            {
            case 0:
              if (!
#line 22081 "../../gcc/config/i386/i386.md"
(TARGET_TBM))
                return -1;
              *pnum_clobbers = 1;
              return 1608; /* *tbm_blcs_si */

            case 1:
              if (!(
#line 22081 "../../gcc/config/i386/i386.md"
(TARGET_TBM) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return -1;
              *pnum_clobbers = 1;
              return 1609; /* *tbm_blcs_di */

            case 2:
              if (!
#line 22122 "../../gcc/config/i386/i386.md"
(TARGET_TBM))
                return -1;
              *pnum_clobbers = 1;
              return 1614; /* *tbm_t1mskc_si */

            case 3:
              if (!(
#line 22122 "../../gcc/config/i386/i386.md"
(TARGET_TBM) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return -1;
              *pnum_clobbers = 1;
              return 1615; /* *tbm_t1mskc_di */

            default:
              return -1;
            }

        case -1L:
          switch (pattern757 (x3))
            {
            case 0:
              if (!
#line 22094 "../../gcc/config/i386/i386.md"
(TARGET_TBM))
                return -1;
              *pnum_clobbers = 1;
              return 1610; /* *tbm_blsfill_si */

            case 1:
              if (!(
#line 22094 "../../gcc/config/i386/i386.md"
(TARGET_TBM) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return -1;
              *pnum_clobbers = 1;
              return 1611; /* *tbm_blsfill_di */

            case 2:
              if (!
#line 22108 "../../gcc/config/i386/i386.md"
(TARGET_TBM))
                return -1;
              *pnum_clobbers = 1;
              return 1612; /* *tbm_blsic_si */

            case 3:
              if (!(
#line 22108 "../../gcc/config/i386/i386.md"
(TARGET_TBM) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return -1;
              *pnum_clobbers = 1;
              return 1613; /* *tbm_blsic_di */

            default:
              return -1;
            }

        default:
          return -1;
        }

    case AND:
      if (pattern112 (x3) != 0
          || !register_operand (operands[0], E_SImode)
          || GET_MODE (x3) != E_SImode)
        return -1;
      x10 = XEXP (x4, 0);
      operands[1] = x10;
      if (!register_operand (operands[1], E_SImode))
        return -1;
      x5 = XEXP (x3, 1);
      x7 = XEXP (x5, 0);
      x8 = XEXP (x7, 0);
      if (!rtx_equal_p (x8, operands[1]))
        return -1;
      return 1640; /* bswaphisi2_lowpart */

    default:
      return -1;
    }
}

 int
recog_102 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  switch (pattern20 (x1, pnum_clobbers))
    {
    case 0:
      if (!
#line 18182 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATE, SImode, operands)
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (SImode)-1))
      == GET_MODE_BITSIZE (SImode)-1
   && ix86_pre_reload_split ()))
        return -1;
      *pnum_clobbers = 1;
      return 1296; /* *rotlsi3_mask_1 */

    case 1:
      if (!(
#line 18182 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATE, DImode, operands)
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (DImode)-1))
      == GET_MODE_BITSIZE (DImode)-1
   && ix86_pre_reload_split ()) && 
#line 1161 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
        return -1;
      *pnum_clobbers = 1;
      return 1298; /* *rotldi3_mask_1 */

    case 2:
      if (!
#line 18253 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATE, SImode, operands)
   && (INTVAL (operands[3]) & (4 * BITS_PER_UNIT - 1)) == 0
   && ix86_pre_reload_split ()))
        return -1;
      *pnum_clobbers = 1;
      return 1312; /* *rotlsi3_add_1 */

    case 3:
      if (!(
#line 18253 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATE, DImode, operands)
   && (INTVAL (operands[3]) & (8 * BITS_PER_UNIT - 1)) == 0
   && ix86_pre_reload_split ()) && 
#line 1161 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
        return -1;
      *pnum_clobbers = 1;
      return 1314; /* *rotldi3_add_1 */

    case 4:
      if (!
#line 18322 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATE, SImode, operands)
   && (INTVAL (operands[3]) & (4 * BITS_PER_UNIT - 1)) == 0
   && ix86_pre_reload_split ()))
        return -1;
      *pnum_clobbers = 1;
      return 1328; /* *rotlsi3_sub_1 */

    case 5:
      if (!(
#line 18322 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATE, DImode, operands)
   && (INTVAL (operands[3]) & (8 * BITS_PER_UNIT - 1)) == 0
   && ix86_pre_reload_split ()) && 
#line 1161 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
        return -1;
      *pnum_clobbers = 1;
      return 1330; /* *rotldi3_sub_1 */

    case 6:
      x2 = XEXP (x1, 1);
      x3 = XEXP (x2, 1);
      switch (GET_CODE (x3))
        {
        case SUBREG:
          switch (pattern449 (x2, pnum_clobbers))
            {
            case 0:
              if (
#line 18142 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATE, SImode, operands)
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (SImode)-1))
      == GET_MODE_BITSIZE (SImode)-1
   && ix86_pre_reload_split ()))
                {
                  *pnum_clobbers = 1;
                  return 1288; /* *rotlsi3_mask */
                }
              break;

            case 1:
              if ((
#line 18142 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATE, DImode, operands)
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (DImode)-1))
      == GET_MODE_BITSIZE (DImode)-1
   && ix86_pre_reload_split ()) && 
#line 1161 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                {
                  *pnum_clobbers = 1;
                  return 1290; /* *rotldi3_mask */
                }
              break;

            case 2:
              if (
#line 18217 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATE, SImode, operands)
   && (INTVAL (operands[3]) & (4 * BITS_PER_UNIT - 1)) == 0
   && ix86_pre_reload_split ()))
                {
                  *pnum_clobbers = 1;
                  return 1304; /* *rotlsi3_add */
                }
              break;

            case 3:
              if ((
#line 18217 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATE, DImode, operands)
   && (INTVAL (operands[3]) & (8 * BITS_PER_UNIT - 1)) == 0
   && ix86_pre_reload_split ()) && 
#line 1161 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                {
                  *pnum_clobbers = 1;
                  return 1306; /* *rotldi3_add */
                }
              break;

            case 4:
              if (
#line 18286 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATE, SImode, operands)
   && (INTVAL (operands[3]) & (4 * BITS_PER_UNIT - 1)) == 0
   && ix86_pre_reload_split ()))
                {
                  *pnum_clobbers = 1;
                  return 1320; /* *rotlsi3_sub */
                }
              break;

            case 5:
              if ((
#line 18286 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATE, DImode, operands)
   && (INTVAL (operands[3]) & (8 * BITS_PER_UNIT - 1)) == 0
   && ix86_pre_reload_split ()) && 
#line 1161 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                {
                  *pnum_clobbers = 1;
                  return 1322; /* *rotldi3_sub */
                }
              break;

            default:
              break;
            }
          break;

        case CONST_INT:
          if (pnum_clobbers != NULL)
            {
              operands[2] = x3;
              if (const_1_to_31_operand (operands[2], E_QImode)
                  && register_operand (operands[0], E_DImode)
                  && GET_MODE (x2) == E_DImode
                  && register_operand (operands[1], E_DImode)
                  && 
#line 1235 "../../gcc/config/i386/i386.md"
(!TARGET_64BIT))
                {
                  *pnum_clobbers = 2;
                  return 1332; /* ix86_rotldi3_doubleword */
                }
            }
          if (XWINT (x3, 0) == 32L
              && register_operand (operands[0], E_DImode)
              && GET_MODE (x2) == E_DImode
              && register_operand (operands[1], E_DImode)
              && 
#line 18427 "../../gcc/config/i386/i386.md"
(!TARGET_64BIT))
            return 1336; /* rotl32di2_doubleword */
          break;

        default:
          break;
        }
      operands[2] = x3;
      if (!nonmemory_operand (operands[2], E_QImode))
        return -1;
      switch (pattern16 (x2))
        {
        case 0:
          if (
#line 18478 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATE, SImode, operands, TARGET_APX_NDD)
   && TARGET_APX_NF))
            return 1342; /* *rotlsi3_1_nf */
          if (pnum_clobbers == NULL
              || !
#line 18478 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATE, SImode, operands, TARGET_APX_NDD)
   && true))
            return -1;
          *pnum_clobbers = 1;
          return 1343; /* *rotlsi3_1 */

        case 1:
          if ((
#line 18478 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATE, DImode, operands, TARGET_APX_NDD)
   && TARGET_APX_NF) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return 1346; /* *rotldi3_1_nf */
          if (pnum_clobbers == NULL
              || !(
#line 18478 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATE, DImode, operands, TARGET_APX_NDD)
   && true) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return -1;
          *pnum_clobbers = 1;
          return 1347; /* *rotldi3_1 */

        default:
          return -1;
        }

    default:
      return -1;
    }
}

 int
recog_109 (rtx x1 ATTRIBUTE_UNUSED,
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
  switch (XINT (x3, 1))
    {
    case 45:
      if (pattern296 (x3) != 0
          || !register_operand (operands[0], E_SImode))
        return -1;
      x4 = XVECEXP (x3, 0, 1);
      operands[2] = x4;
      if (!register_operand (operands[2], E_SImode)
          || !
#line 19556 "../../gcc/config/i386/i386.md"
(ix86_pre_reload_split ()))
        return -1;
      return 1454; /* *setcc_si_slp */

    case 98:
      if (pnum_clobbers == NULL)
        return -1;
      x5 = XVECEXP (x3, 0, 0);
      operands[1] = x5;
      x4 = XVECEXP (x3, 0, 1);
      operands[2] = x4;
      switch (GET_MODE (operands[0]))
        {
        case E_SImode:
          if (pattern783 (x3, 
E_SImode) != 0
              || !
#line 21737 "../../gcc/config/i386/i386.md"
(TARGET_BMI))
            return -1;
          *pnum_clobbers = 1;
          return 1566; /* bmi_bextr_si */

        case E_DImode:
          if (pattern783 (x3, 
E_DImode) != 0
              || !(
#line 21737 "../../gcc/config/i386/i386.md"
(TARGET_BMI) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return -1;
          *pnum_clobbers = 1;
          return 1567; /* bmi_bextr_di */

        default:
          return -1;
        }

    case 99:
      switch (pattern297 (x3))
        {
        case 0:
          if (!
#line 21986 "../../gcc/config/i386/i386.md"
(TARGET_BMI2))
            return -1;
          return 1594; /* bmi2_pdep_si3 */

        case 1:
          if (!(
#line 21986 "../../gcc/config/i386/i386.md"
(TARGET_BMI2) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return -1;
          return 1595; /* bmi2_pdep_di3 */

        default:
          return -1;
        }

    case 100:
      switch (pattern297 (x3))
        {
        case 0:
          if (!
#line 21997 "../../gcc/config/i386/i386.md"
(TARGET_BMI2))
            return -1;
          return 1596; /* bmi2_pext_si3 */

        case 1:
          if (!(
#line 21997 "../../gcc/config/i386/i386.md"
(TARGET_BMI2) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return -1;
          return 1597; /* bmi2_pext_di3 */

        default:
          return -1;
        }

    case 93:
      if (pnum_clobbers == NULL
          || GET_MODE (x3) != E_CCZmode
          || !flags_reg_operand (operands[0], E_CCZmode))
        return -1;
      x5 = XVECEXP (x3, 0, 0);
      operands[1] = x5;
      x4 = XVECEXP (x3, 0, 1);
      operands[2] = x4;
      switch (GET_MODE (operands[1]))
        {
        case E_SImode:
          if (!memory_operand (operands[1], E_SImode)
              || !memory_operand (operands[2], E_SImode)
              || !
#line 1408 "../../gcc/config/i386/i386.md"
(ptr_mode == SImode))
            return -1;
          *pnum_clobbers = 1;
          return 1877; /* stack_protect_test_1_si */

        case E_DImode:
          if (!memory_operand (operands[1], E_DImode)
              || !memory_operand (operands[2], E_DImode)
              || !
#line 1408 "../../gcc/config/i386/i386.md"
(ptr_mode == DImode))
            return -1;
          *pnum_clobbers = 1;
          return 1878; /* stack_protect_test_1_di */

        default:
          return -1;
        }

    case 95:
      if (GET_MODE (x3) != E_SImode
          || !register_operand (operands[0], E_SImode))
        return -1;
      x5 = XVECEXP (x3, 0, 0);
      operands[1] = x5;
      if (!register_operand (operands[1], E_SImode))
        return -1;
      x4 = XVECEXP (x3, 0, 1);
      operands[2] = x4;
      switch (GET_MODE (operands[2]))
        {
        case E_QImode:
          if (!nonimmediate_operand (operands[2], E_QImode)
              || !
#line 28895 "../../gcc/config/i386/i386.md"
(TARGET_CRC32))
            return -1;
          return 1885; /* sse4_2_crc32qi */

        case E_HImode:
          if (!nonimmediate_operand (operands[2], E_HImode)
              || !
#line 28895 "../../gcc/config/i386/i386.md"
(TARGET_CRC32))
            return -1;
          return 1886; /* sse4_2_crc32hi */

        case E_SImode:
          if (!nonimmediate_operand (operands[2], E_SImode)
              || !
#line 28895 "../../gcc/config/i386/i386.md"
(TARGET_CRC32))
            return -1;
          return 1887; /* sse4_2_crc32si */

        default:
          return -1;
        }

    case 178:
      x5 = XVECEXP (x3, 0, 0);
      switch (GET_CODE (x5))
        {
        case UNSPEC:
          switch (XVECLEN (x5, 0))
            {
            case 3:
              if (XINT (x5, 1) != 59
                  || GET_MODE (x5) != E_SImode
                  || !register_operand (operands[0], E_SImode)
                  || GET_MODE (x3) != E_SImode)
                return -1;
              x6 = XVECEXP (x5, 0, 0);
              operands[1] = x6;
              if (!register_operand (operands[1], E_V32HFmode))
                return -1;
              x7 = XVECEXP (x5, 0, 1);
              operands[2] = x7;
              if (!nonimmediate_operand (operands[2], E_V32HFmode))
                return -1;
              x8 = XVECEXP (x5, 0, 2);
              operands[3] = x8;
              if (!const_0_to_31_operand (operands[3], E_SImode))
                return -1;
              x4 = XVECEXP (x3, 0, 1);
              operands[4] = x4;
              if (!const48_operand (operands[4], E_SImode)
                  || !(
#line 286 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 4395 "../../gcc/config/i386/sse.md"
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
#line 310 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_EVEX512))))
                return -1;
              return 3296; /* avx512bw_cmpv32hf3_round */

            case 1:
              x4 = XVECEXP (x3, 0, 1);
              operands[2] = x4;
              switch (XINT (x5, 1))
                {
                case 156:
                  switch (pattern875 (x3))
                    {
                    case 0:
                      if (!(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 7811 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16)))
                        return -1;
                      return 4540; /* avx512fp16_vcvtsh2usi_round */

                    case 1:
                      if (!
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F))
                        return -1;
                      return 4905; /* avx512f_vcvtss2usi_round */

                    case 2:
                      if (!
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F))
                        return -1;
                      return 4917; /* avx512f_vcvtsd2usi_round */

                    case 3:
                      if (!(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 7811 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT))))
                        return -1;
                      return 4544; /* avx512fp16_vcvtsh2usiq_round */

                    case 4:
                      if (!(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 9023 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT))))
                        return -1;
                      return 4907; /* avx512f_vcvtss2usiq_round */

                    case 5:
                      if (!(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 9059 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT))))
                        return -1;
                      return 4919; /* avx512f_vcvtsd2usiq_round */

                    default:
                      return -1;
                    }

                case 46:
                  switch (pattern875 (x3))
                    {
                    case 0:
                      if (!(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 7811 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16)))
                        return -1;
                      return 4542; /* avx512fp16_vcvtsh2si_round */

                    case 1:
                      if (!(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 8551 "../../gcc/config/i386/sse.md"
(TARGET_SSE)))
                        return -1;
                      return 4788; /* sse_cvtss2si_round */

                    case 2:
                      if (!(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 9095 "../../gcc/config/i386/sse.md"
(TARGET_SSE2)))
                        return -1;
                      return 4929; /* sse2_cvtsd2si_round */

                    case 3:
                      if (!(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 7811 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT))))
                        return -1;
                      return 4546; /* avx512fp16_vcvtsh2siq_round */

                    case 4:
                      if (!(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 8551 "../../gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT))))
                        return -1;
                      return 4790; /* sse_cvtss2siq_round */

                    case 5:
                      if (!(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 9095 "../../gcc/config/i386/sse.md"
(TARGET_SSE2) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT))))
                        return -1;
                      return 4931; /* sse2_cvtsd2siq_round */

                    default:
                      return -1;
                    }

                case 172:
                  switch (pattern877 (x3))
                    {
                    case 0:
                      if (!(
#line 286 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 7976 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16)))
                        return -1;
                      return 4688; /* unspec_avx512fp16_fix_truncsi2_round */

                    case 1:
                      if (!(
#line 286 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 8579 "../../gcc/config/i386/sse.md"
(TARGET_SSE)))
                        return -1;
                      return 4794; /* unspec_sse_cvttss2si_round */

                    case 2:
                      if (!(
#line 286 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 9124 "../../gcc/config/i386/sse.md"
(TARGET_SSE2)))
                        return -1;
                      return 4935; /* unspec_sse2_cvttsd2si_round */

                    case 3:
                      if (!(
#line 286 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 7976 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT))))
                        return -1;
                      return 4692; /* unspec_avx512fp16_fix_truncdi2_round */

                    case 4:
                      if (!(
#line 286 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 8579 "../../gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT))))
                        return -1;
                      return 4796; /* unspec_sse_cvttss2siq_round */

                    case 5:
                      if (!(
#line 286 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 9124 "../../gcc/config/i386/sse.md"
(TARGET_SSE2) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT))))
                        return -1;
                      return 4937; /* unspec_sse2_cvttsd2siq_round */

                    default:
                      return -1;
                    }

                case 173:
                  switch (pattern877 (x3))
                    {
                    case 0:
                      if (!(
#line 286 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 7976 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16)))
                        return -1;
                      return 4690; /* unspec_avx512fp16_fixuns_truncsi2_round */

                    case 1:
                      if (!
#line 286 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F))
                        return -1;
                      return 4909; /* unspec_avx512f_vcvttss2usi_round */

                    case 2:
                      if (!
#line 286 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F))
                        return -1;
                      return 4921; /* unspec_avx512f_vcvttsd2usi_round */

                    case 3:
                      if (!(
#line 286 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 7976 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT))))
                        return -1;
                      return 4694; /* unspec_avx512fp16_fixuns_truncdi2_round */

                    case 4:
                      if (!(
#line 286 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 9034 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT))))
                        return -1;
                      return 4911; /* unspec_avx512f_vcvttss2usiq_round */

                    case 5:
                      if (!(
#line 286 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 9070 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT))))
                        return -1;
                      return 4923; /* unspec_avx512f_vcvttsd2usiq_round */

                    default:
                      return -1;
                    }

                case 276:
                  switch (pattern879 (x3))
                    {
                    case 0:
                      if (!(
#line 286 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 32611 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256)))
                        return -1;
                      return 10914; /* avx10_2_vcvttsd2sissi_round */

                    case 1:
                      if (!(
#line 286 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 32624 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256)))
                        return -1;
                      return 10922; /* avx10_2_vcvttss2sissi_round */

                    case 2:
                      if (!(
#line 286 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 32611 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT))))
                        return -1;
                      return 10918; /* avx10_2_vcvttsd2sisdi_round */

                    case 3:
                      if (!(
#line 286 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 32624 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT))))
                        return -1;
                      return 10926; /* avx10_2_vcvttss2sisdi_round */

                    default:
                      return -1;
                    }

                case 277:
                  switch (pattern879 (x3))
                    {
                    case 0:
                      if (!(
#line 286 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 32611 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256)))
                        return -1;
                      return 10916; /* avx10_2_vcvttsd2usissi_round */

                    case 1:
                      if (!(
#line 286 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 32624 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256)))
                        return -1;
                      return 10924; /* avx10_2_vcvttss2usissi_round */

                    case 2:
                      if (!(
#line 286 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 32611 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT))))
                        return -1;
                      return 10920; /* avx10_2_vcvttsd2usisdi_round */

                    case 3:
                      if (!(
#line 286 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 32624 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT))))
                        return -1;
                      return 10928; /* avx10_2_vcvttss2usisdi_round */

                    default:
                      return -1;
                    }

                default:
                  return -1;
                }

            default:
              return -1;
            }

        case AND:
          if (GET_MODE (x5) != E_SImode)
            return -1;
          x9 = XEXP (x5, 0);
          if (GET_CODE (x9) != UNSPEC
              || XVECLEN (x9, 0) != 3
              || XINT (x9, 1) != 59
              || GET_MODE (x9) != E_SImode
              || !register_operand (operands[0], E_SImode)
              || GET_MODE (x3) != E_SImode)
            return -1;
          x10 = XVECEXP (x9, 0, 0);
          operands[1] = x10;
          if (!register_operand (operands[1], E_V32HFmode))
            return -1;
          x11 = XVECEXP (x9, 0, 1);
          operands[2] = x11;
          if (!nonimmediate_operand (operands[2], E_V32HFmode))
            return -1;
          x12 = XVECEXP (x9, 0, 2);
          operands[3] = x12;
          if (!const_0_to_31_operand (operands[3], E_SImode))
            return -1;
          x13 = XEXP (x5, 1);
          operands[4] = x13;
          if (!register_operand (operands[4], E_SImode))
            return -1;
          x4 = XVECEXP (x3, 0, 1);
          operands[5] = x4;
          if (!const48_operand (operands[5], E_SImode)
              || !(
#line 286 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 122 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 4395 "../../gcc/config/i386/sse.md"
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
#line 310 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_EVEX512)))))
            return -1;
          return 3298; /* avx512bw_cmpv32hf3_mask_round */

        case FIX:
          switch (pattern451 (x3))
            {
            case 0:
              if (!(
#line 286 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 7988 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16)))
                return -1;
              return 4696; /* avx512fp16_fix_truncsi2_round */

            case 1:
              if (!(
#line 286 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 8595 "../../gcc/config/i386/sse.md"
(TARGET_SSE)))
                return -1;
              return 4798; /* sse_cvttss2si_round */

            case 2:
              if (!(
#line 286 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 9141 "../../gcc/config/i386/sse.md"
(TARGET_SSE2)))
                return -1;
              return 4939; /* sse2_cvttsd2si_round */

            case 3:
              if (!(
#line 286 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 7988 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT))))
                return -1;
              return 4700; /* avx512fp16_fix_truncdi2_round */

            case 4:
              if (!(
#line 286 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 8595 "../../gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT))))
                return -1;
              return 4800; /* sse_cvttss2siq_round */

            case 5:
              if (!(
#line 286 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 9141 "../../gcc/config/i386/sse.md"
(TARGET_SSE2) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT))))
                return -1;
              return 4941; /* sse2_cvttsd2siq_round */

            default:
              return -1;
            }

        case UNSIGNED_FIX:
          switch (pattern451 (x3))
            {
            case 0:
              if (!(
#line 286 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 7988 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16)))
                return -1;
              return 4698; /* avx512fp16_fixuns_truncsi2_round */

            case 1:
              if (!
#line 286 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F))
                return -1;
              return 4913; /* avx512f_vcvttss2usi_round */

            case 2:
              if (!
#line 286 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F))
                return -1;
              return 4925; /* avx512f_vcvttsd2usi_round */

            case 3:
              if (!(
#line 286 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 7988 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT))))
                return -1;
              return 4702; /* avx512fp16_fixuns_truncdi2_round */

            case 4:
              if (!(
#line 286 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 9046 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT))))
                return -1;
              return 4915; /* avx512f_vcvttss2usiq_round */

            case 5:
              if (!(
#line 286 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 9082 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT))))
                return -1;
              return 4927; /* avx512f_vcvttsd2usiq_round */

            default:
              return -1;
            }

        default:
          return -1;
        }

    case 158:
      switch (pattern299 (x3))
        {
        case 0:
          if (!(
#line 19052 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 505 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512)))
            return -1;
          return 8106; /* avx512bw_testmv64qi3 */

        case 1:
          if (!(
#line 19052 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 506 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL && TARGET_AVX512BW)))
            return -1;
          return 8108; /* avx512vl_testmv32qi3 */

        case 2:
          if (!(
#line 19052 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 508 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512)))
            return -1;
          return 8112; /* avx512bw_testmv32hi3 */

        default:
          return -1;
        }

    case 159:
      switch (pattern299 (x3))
        {
        case 0:
          if (!(
#line 19063 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 505 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512)))
            return -1;
          return 8130; /* avx512bw_testnmv64qi3 */

        case 1:
          if (!(
#line 19063 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 506 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL && TARGET_AVX512BW)))
            return -1;
          return 8132; /* avx512vl_testnmv32qi3 */

        case 2:
          if (!(
#line 19063 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 508 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512)))
            return -1;
          return 8136; /* avx512bw_testnmv32hi3 */

        default:
          return -1;
        }

    case 193:
      if (GET_MODE (x3) != E_SImode
          || !register_operand (operands[0], E_SImode))
        return -1;
      x5 = XVECEXP (x3, 0, 0);
      operands[1] = x5;
      if (!vector_operand (operands[1], E_V32HFmode))
        return -1;
      x4 = XVECEXP (x3, 0, 1);
      operands[2] = x4;
      if (!const_0_to_255_operand (operands[2], E_VOIDmode)
          || !(
#line 29854 "../../gcc/config/i386/sse.md"
(TARGET_AVX512DQ || VALID_AVX512FP16_REG_MODE(V32HFmode)) && 
#line 525 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_EVEX512)))
        return -1;
      return 9984; /* avx512dq_fpclassv32hf */

    case 214:
      x5 = XVECEXP (x3, 0, 0);
      operands[1] = x5;
      x4 = XVECEXP (x3, 0, 1);
      operands[2] = x4;
      switch (GET_MODE (operands[0]))
        {
        case E_DImode:
          if (pattern160 (x3, 
E_DImode, 
E_V64QImode) != 0
              || !(
#line 30921 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BITALG) && 
#line 328 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return -1;
          return 10320; /* avx512vl_vpshufbitqmbv64qi */

        case E_SImode:
          if (pattern160 (x3, 
E_SImode, 
E_V32QImode) != 0
              || !(
#line 30921 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BITALG) && 
#line 328 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 10324; /* avx512vl_vpshufbitqmbv32qi */

        default:
          return -1;
        }

    case 262:
      if (GET_MODE (x3) != E_SImode
          || !register_operand (operands[0], E_SImode))
        return -1;
      x5 = XVECEXP (x3, 0, 0);
      operands[1] = x5;
      if (!nonimmediate_operand (operands[1], E_V32BFmode))
        return -1;
      x4 = XVECEXP (x3, 0, 1);
      operands[2] = x4;
      if (!const_0_to_255_operand (operands[2], E_VOIDmode)
          || !(
#line 32435 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256) && 
#line 565 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_512)))
        return -1;
      return 10716; /* avx10_2_fpclasspbf16_v32bf */

    case 289:
      x5 = XVECEXP (x3, 0, 0);
      operands[1] = x5;
      x4 = XVECEXP (x3, 0, 1);
      operands[2] = x4;
      if (!const_int_operand (operands[2], E_SImode))
        return -1;
      switch (GET_MODE (operands[0]))
        {
        case E_SImode:
          if (!memory_operand (operands[0], E_SImode)
              || GET_MODE (x3) != E_SImode
              || !x86_64_nonmemory_operand (operands[1], E_SImode))
            return -1;
          return 11014; /* atomic_storesi_1 */

        case E_DImode:
          if (!memory_operand (operands[0], E_DImode)
              || GET_MODE (x3) != E_DImode
              || !x86_64_nonmemory_operand (operands[1], E_DImode)
              || !
#line 1161 "../../gcc/config/i386/i386.md"
(TARGET_64BIT))
            return -1;
          return 11015; /* atomic_storedi_1 */

        default:
          return -1;
        }

    default:
      return -1;
    }
}

 int
recog_150 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) != E_V8BFmode)
    return -1;
  x3 = XEXP (x2, 2);
  if (!register_operand (x3, E_QImode))
    return -1;
  operands[3] = x3;
  if (register_operand (operands[0], E_V8BFmode))
    {
      x4 = XEXP (x2, 0);
      operands[2] = x4;
      if (nonimmediate_operand (operands[2], E_V8BFmode))
        {
          x5 = XEXP (x2, 1);
          operands[1] = x5;
          if (nonimm_or_0_operand (operands[1], E_V8BFmode)
              && (
#line 1781 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 325 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return 2523; /* avx512vl_blendmv8bf */
        }
    }
  operands[2] = x3;
  if (!memory_operand (operands[0], E_V8BFmode))
    return -1;
  x4 = XEXP (x2, 0);
  operands[1] = x4;
  if (!register_operand (operands[1], E_V8BFmode))
    return -1;
  x5 = XEXP (x2, 1);
  if (!rtx_equal_p (x5, operands[0])
      || !(
#line 1823 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 325 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
    return -1;
  return 2547; /* *avx512vl_storev8bf_mask */
}

 int
recog_151 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) != E_V16BFmode)
    return -1;
  x3 = XEXP (x2, 2);
  if (!register_operand (x3, E_HImode))
    return -1;
  operands[3] = x3;
  if (register_operand (operands[0], E_V16BFmode))
    {
      x4 = XEXP (x2, 0);
      operands[2] = x4;
      if (nonimmediate_operand (operands[2], E_V16BFmode))
        {
          x5 = XEXP (x2, 1);
          operands[1] = x5;
          if (nonimm_or_0_operand (operands[1], E_V16BFmode)
              && (
#line 1781 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 325 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return 2522; /* avx512vl_blendmv16bf */
        }
    }
  operands[2] = x3;
  if (!memory_operand (operands[0], E_V16BFmode))
    return -1;
  x4 = XEXP (x2, 0);
  operands[1] = x4;
  if (!register_operand (operands[1], E_V16BFmode))
    return -1;
  x5 = XEXP (x2, 1);
  if (!rtx_equal_p (x5, operands[0])
      || !(
#line 1823 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 325 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
    return -1;
  return 2546; /* *avx512vl_storev16bf_mask */
}

 int
recog_152 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) != E_V32BFmode)
    return -1;
  x3 = XEXP (x2, 2);
  if (!register_operand (x3, E_SImode))
    return -1;
  operands[3] = x3;
  if (register_operand (operands[0], E_V32BFmode))
    {
      x4 = XEXP (x2, 0);
      operands[2] = x4;
      if (nonimmediate_operand (operands[2], E_V32BFmode))
        {
          x5 = XEXP (x2, 1);
          operands[1] = x5;
          if (nonimm_or_0_operand (operands[1], E_V32BFmode)
              && (
#line 1781 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 325 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return 2521; /* avx512bw_blendmv32bf */
        }
    }
  operands[2] = x3;
  if (!memory_operand (operands[0], E_V32BFmode))
    return -1;
  x4 = XEXP (x2, 0);
  operands[1] = x4;
  if (!register_operand (operands[1], E_V32BFmode))
    return -1;
  x5 = XEXP (x2, 1);
  if (!rtx_equal_p (x5, operands[0])
      || !(
#line 1823 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 325 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
    return -1;
  return 2545; /* *avx512bw_storev32bf_mask */
}

 int
recog_153 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) != E_V8HFmode)
    return -1;
  x3 = XEXP (x2, 2);
  if (!register_operand (x3, E_QImode))
    return -1;
  operands[3] = x3;
  if (register_operand (operands[0], E_V8HFmode))
    {
      x4 = XEXP (x2, 0);
      operands[2] = x4;
      if (nonimmediate_operand (operands[2], E_V8HFmode))
        {
          x5 = XEXP (x2, 1);
          operands[1] = x5;
          if (nonimm_or_0_operand (operands[1], E_V8HFmode)
              && (
#line 1781 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 324 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return 2520; /* avx512fp16_blendmv8hf */
        }
    }
  operands[2] = x3;
  if (!memory_operand (operands[0], E_V8HFmode))
    return -1;
  x4 = XEXP (x2, 0);
  operands[1] = x4;
  if (!register_operand (operands[1], E_V8HFmode))
    return -1;
  x5 = XEXP (x2, 1);
  if (!rtx_equal_p (x5, operands[0])
      || !(
#line 1823 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 324 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
    return -1;
  return 2544; /* *avx512fp16_storev8hf_mask */
}

 int
recog_154 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) != E_V16HFmode)
    return -1;
  x3 = XEXP (x2, 2);
  if (!register_operand (x3, E_HImode))
    return -1;
  operands[3] = x3;
  if (register_operand (operands[0], E_V16HFmode))
    {
      x4 = XEXP (x2, 0);
      operands[2] = x4;
      if (nonimmediate_operand (operands[2], E_V16HFmode))
        {
          x5 = XEXP (x2, 1);
          operands[1] = x5;
          if (nonimm_or_0_operand (operands[1], E_V16HFmode)
              && (
#line 1781 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 324 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return 2519; /* avx512vl_blendmv16hf */
        }
    }
  operands[2] = x3;
  if (!memory_operand (operands[0], E_V16HFmode))
    return -1;
  x4 = XEXP (x2, 0);
  operands[1] = x4;
  if (!register_operand (operands[1], E_V16HFmode))
    return -1;
  x5 = XEXP (x2, 1);
  if (!rtx_equal_p (x5, operands[0])
      || !(
#line 1823 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 324 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
    return -1;
  return 2543; /* *avx512vl_storev16hf_mask */
}

 int
recog_155 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  int res ATTRIBUTE_UNUSED;
  switch (GET_MODE (operands[0]))
    {
    case E_V16SImode:
      x2 = XEXP (x1, 1);
      if (GET_MODE (x2) != E_V16SImode)
        return -1;
      x3 = XEXP (x2, 2);
      if (!register_operand (x3, E_HImode))
        return -1;
      operands[3] = x3;
      if (register_operand (operands[0], E_V16SImode))
        {
          x4 = XEXP (x2, 0);
          operands[2] = x4;
          if (nonimmediate_operand (operands[2], E_V16SImode))
            {
              x5 = XEXP (x2, 1);
              operands[1] = x5;
              if (nonimm_or_0_operand (operands[1], E_V16SImode)
                  && (
#line 1750 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 295 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                return 2500; /* avx512f_blendmv16si */
            }
        }
      operands[2] = x3;
      if (!memory_operand (operands[0], E_V16SImode))
        return -1;
      x4 = XEXP (x2, 0);
      operands[1] = x4;
      if (!register_operand (operands[1], E_V16SImode))
        return -1;
      x5 = XEXP (x2, 1);
      if (!rtx_equal_p (x5, operands[0])
          || !(
#line 1795 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 295 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 2524; /* *avx512f_storev16si_mask */

    case E_V8SImode:
      x2 = XEXP (x1, 1);
      if (GET_MODE (x2) != E_V8SImode)
        return -1;
      x3 = XEXP (x2, 2);
      if (!register_operand (x3, E_QImode))
        return -1;
      operands[3] = x3;
      if (register_operand (operands[0], E_V8SImode))
        {
          x4 = XEXP (x2, 0);
          operands[2] = x4;
          if (nonimmediate_operand (operands[2], E_V8SImode))
            {
              x5 = XEXP (x2, 1);
              operands[1] = x5;
              if (nonimm_or_0_operand (operands[1], E_V8SImode)
                  && (
#line 1750 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 295 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                return 2501; /* avx512vl_blendmv8si */
            }
        }
      operands[2] = x3;
      if (!memory_operand (operands[0], E_V8SImode))
        return -1;
      x4 = XEXP (x2, 0);
      operands[1] = x4;
      if (!register_operand (operands[1], E_V8SImode))
        return -1;
      x5 = XEXP (x2, 1);
      if (!rtx_equal_p (x5, operands[0])
          || !(
#line 1795 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 295 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 2525; /* *avx512vl_storev8si_mask */

    case E_V4SImode:
      x2 = XEXP (x1, 1);
      if (GET_MODE (x2) != E_V4SImode)
        return -1;
      x3 = XEXP (x2, 2);
      if (!register_operand (x3, E_QImode))
        return -1;
      operands[3] = x3;
      if (register_operand (operands[0], E_V4SImode))
        {
          x4 = XEXP (x2, 0);
          operands[2] = x4;
          if (nonimmediate_operand (operands[2], E_V4SImode))
            {
              x5 = XEXP (x2, 1);
              operands[1] = x5;
              if (nonimm_or_0_operand (operands[1], E_V4SImode)
                  && (
#line 1750 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 295 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                return 2502; /* avx512vl_blendmv4si */
            }
        }
      operands[2] = x3;
      if (!memory_operand (operands[0], E_V4SImode))
        return -1;
      x4 = XEXP (x2, 0);
      operands[1] = x4;
      if (!register_operand (operands[1], E_V4SImode))
        return -1;
      x5 = XEXP (x2, 1);
      if (!rtx_equal_p (x5, operands[0])
          || !(
#line 1795 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 295 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 2526; /* *avx512vl_storev4si_mask */

    case E_V8DImode:
      x2 = XEXP (x1, 1);
      if (GET_MODE (x2) != E_V8DImode)
        return -1;
      x3 = XEXP (x2, 2);
      if (!register_operand (x3, E_QImode))
        return -1;
      operands[3] = x3;
      if (register_operand (operands[0], E_V8DImode))
        {
          x4 = XEXP (x2, 0);
          operands[2] = x4;
          if (nonimmediate_operand (operands[2], E_V8DImode))
            {
              x5 = XEXP (x2, 1);
              operands[1] = x5;
              if (nonimm_or_0_operand (operands[1], E_V8DImode)
                  && (
#line 1750 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 296 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                return 2503; /* avx512f_blendmv8di */
            }
        }
      operands[2] = x3;
      if (!memory_operand (operands[0], E_V8DImode))
        return -1;
      x4 = XEXP (x2, 0);
      operands[1] = x4;
      if (!register_operand (operands[1], E_V8DImode))
        return -1;
      x5 = XEXP (x2, 1);
      if (!rtx_equal_p (x5, operands[0])
          || !(
#line 1795 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 296 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 2527; /* *avx512f_storev8di_mask */

    case E_V4DImode:
      x2 = XEXP (x1, 1);
      if (GET_MODE (x2) != E_V4DImode)
        return -1;
      x3 = XEXP (x2, 2);
      if (!register_operand (x3, E_QImode))
        return -1;
      operands[3] = x3;
      if (register_operand (operands[0], E_V4DImode))
        {
          x4 = XEXP (x2, 0);
          operands[2] = x4;
          if (nonimmediate_operand (operands[2], E_V4DImode))
            {
              x5 = XEXP (x2, 1);
              operands[1] = x5;
              if (nonimm_or_0_operand (operands[1], E_V4DImode)
                  && (
#line 1750 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 296 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                return 2504; /* avx512vl_blendmv4di */
            }
        }
      operands[2] = x3;
      if (!memory_operand (operands[0], E_V4DImode))
        return -1;
      x4 = XEXP (x2, 0);
      operands[1] = x4;
      if (!register_operand (operands[1], E_V4DImode))
        return -1;
      x5 = XEXP (x2, 1);
      if (!rtx_equal_p (x5, operands[0])
          || !(
#line 1795 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 296 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 2528; /* *avx512vl_storev4di_mask */

    case E_V2DImode:
      x2 = XEXP (x1, 1);
      if (GET_MODE (x2) != E_V2DImode)
        return -1;
      x3 = XEXP (x2, 2);
      if (!register_operand (x3, E_QImode))
        return -1;
      operands[3] = x3;
      if (register_operand (operands[0], E_V2DImode))
        {
          x4 = XEXP (x2, 0);
          operands[2] = x4;
          if (nonimmediate_operand (operands[2], E_V2DImode))
            {
              x5 = XEXP (x2, 1);
              operands[1] = x5;
              if (nonimm_or_0_operand (operands[1], E_V2DImode)
                  && (
#line 1750 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 296 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                return 2505; /* avx512vl_blendmv2di */
            }
        }
      operands[2] = x3;
      if (!memory_operand (operands[0], E_V2DImode))
        return -1;
      x4 = XEXP (x2, 0);
      operands[1] = x4;
      if (!register_operand (operands[1], E_V2DImode))
        return -1;
      x5 = XEXP (x2, 1);
      if (!rtx_equal_p (x5, operands[0])
          || !(
#line 1795 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 296 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 2529; /* *avx512vl_storev2di_mask */

    case E_V16SFmode:
      x2 = XEXP (x1, 1);
      if (GET_MODE (x2) != E_V16SFmode)
        return -1;
      x3 = XEXP (x2, 2);
      if (!register_operand (x3, E_HImode))
        return -1;
      operands[3] = x3;
      if (register_operand (operands[0], E_V16SFmode))
        {
          x4 = XEXP (x2, 0);
          operands[2] = x4;
          if (nonimmediate_operand (operands[2], E_V16SFmode))
            {
              x5 = XEXP (x2, 1);
              operands[1] = x5;
              if (nonimm_or_0_operand (operands[1], E_V16SFmode)
                  && (
#line 1750 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 297 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                return 2506; /* avx512f_blendmv16sf */
            }
        }
      operands[2] = x3;
      if (!memory_operand (operands[0], E_V16SFmode))
        return -1;
      x4 = XEXP (x2, 0);
      operands[1] = x4;
      if (!register_operand (operands[1], E_V16SFmode))
        return -1;
      x5 = XEXP (x2, 1);
      if (!rtx_equal_p (x5, operands[0])
          || !(
#line 1795 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 297 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 2530; /* *avx512f_storev16sf_mask */

    case E_V8SFmode:
      x2 = XEXP (x1, 1);
      if (GET_MODE (x2) != E_V8SFmode)
        return -1;
      x3 = XEXP (x2, 2);
      if (!register_operand (x3, E_QImode))
        return -1;
      operands[3] = x3;
      if (register_operand (operands[0], E_V8SFmode))
        {
          x4 = XEXP (x2, 0);
          operands[2] = x4;
          if (nonimmediate_operand (operands[2], E_V8SFmode))
            {
              x5 = XEXP (x2, 1);
              operands[1] = x5;
              if (nonimm_or_0_operand (operands[1], E_V8SFmode)
                  && (
#line 1750 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 297 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                return 2507; /* avx512vl_blendmv8sf */
            }
        }
      operands[2] = x3;
      if (!memory_operand (operands[0], E_V8SFmode))
        return -1;
      x4 = XEXP (x2, 0);
      operands[1] = x4;
      if (!register_operand (operands[1], E_V8SFmode))
        return -1;
      x5 = XEXP (x2, 1);
      if (!rtx_equal_p (x5, operands[0])
          || !(
#line 1795 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 297 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 2531; /* *avx512vl_storev8sf_mask */

    case E_V4SFmode:
      x2 = XEXP (x1, 1);
      if (GET_MODE (x2) != E_V4SFmode)
        return -1;
      x3 = XEXP (x2, 2);
      if (!register_operand (x3, E_QImode))
        return -1;
      operands[3] = x3;
      if (register_operand (operands[0], E_V4SFmode))
        {
          x4 = XEXP (x2, 0);
          operands[2] = x4;
          if (nonimmediate_operand (operands[2], E_V4SFmode))
            {
              x5 = XEXP (x2, 1);
              operands[1] = x5;
              if (nonimm_or_0_operand (operands[1], E_V4SFmode)
                  && (
#line 1750 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 297 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                return 2508; /* avx512vl_blendmv4sf */
            }
        }
      operands[2] = x3;
      if (!memory_operand (operands[0], E_V4SFmode))
        return -1;
      x4 = XEXP (x2, 0);
      operands[1] = x4;
      if (!register_operand (operands[1], E_V4SFmode))
        return -1;
      x5 = XEXP (x2, 1);
      if (!rtx_equal_p (x5, operands[0])
          || !(
#line 1795 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 297 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 2532; /* *avx512vl_storev4sf_mask */

    case E_V8DFmode:
      x2 = XEXP (x1, 1);
      if (GET_MODE (x2) != E_V8DFmode)
        return -1;
      x3 = XEXP (x2, 2);
      if (!register_operand (x3, E_QImode))
        return -1;
      operands[3] = x3;
      if (register_operand (operands[0], E_V8DFmode))
        {
          x4 = XEXP (x2, 0);
          operands[2] = x4;
          if (nonimmediate_operand (operands[2], E_V8DFmode))
            {
              x5 = XEXP (x2, 1);
              operands[1] = x5;
              if (nonimm_or_0_operand (operands[1], E_V8DFmode)
                  && (
#line 1750 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 298 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                return 2509; /* avx512f_blendmv8df */
            }
        }
      operands[2] = x3;
      if (!memory_operand (operands[0], E_V8DFmode))
        return -1;
      x4 = XEXP (x2, 0);
      operands[1] = x4;
      if (!register_operand (operands[1], E_V8DFmode))
        return -1;
      x5 = XEXP (x2, 1);
      if (!rtx_equal_p (x5, operands[0])
          || !(
#line 1795 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 298 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 2533; /* *avx512f_storev8df_mask */

    case E_V4DFmode:
      x2 = XEXP (x1, 1);
      if (GET_MODE (x2) != E_V4DFmode)
        return -1;
      x3 = XEXP (x2, 2);
      if (!register_operand (x3, E_QImode))
        return -1;
      operands[3] = x3;
      if (register_operand (operands[0], E_V4DFmode))
        {
          x4 = XEXP (x2, 0);
          operands[2] = x4;
          if (nonimmediate_operand (operands[2], E_V4DFmode))
            {
              x5 = XEXP (x2, 1);
              operands[1] = x5;
              if (nonimm_or_0_operand (operands[1], E_V4DFmode)
                  && (
#line 1750 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 298 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                return 2510; /* avx512vl_blendmv4df */
            }
        }
      operands[2] = x3;
      if (!memory_operand (operands[0], E_V4DFmode))
        return -1;
      x4 = XEXP (x2, 0);
      operands[1] = x4;
      if (!register_operand (operands[1], E_V4DFmode))
        return -1;
      x5 = XEXP (x2, 1);
      if (!rtx_equal_p (x5, operands[0])
          || !(
#line 1795 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 298 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 2534; /* *avx512vl_storev4df_mask */

    case E_V2DFmode:
      x2 = XEXP (x1, 1);
      if (GET_MODE (x2) != E_V2DFmode)
        return -1;
      x3 = XEXP (x2, 2);
      if (!register_operand (x3, E_QImode))
        return -1;
      operands[3] = x3;
      if (register_operand (operands[0], E_V2DFmode))
        {
          x4 = XEXP (x2, 0);
          operands[2] = x4;
          if (nonimmediate_operand (operands[2], E_V2DFmode))
            {
              x5 = XEXP (x2, 1);
              operands[1] = x5;
              if (nonimm_or_0_operand (operands[1], E_V2DFmode)
                  && (
#line 1750 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 298 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                return 2511; /* avx512vl_blendmv2df */
            }
        }
      operands[2] = x3;
      if (!memory_operand (operands[0], E_V2DFmode))
        return -1;
      x4 = XEXP (x2, 0);
      operands[1] = x4;
      if (!register_operand (operands[1], E_V2DFmode))
        return -1;
      x5 = XEXP (x2, 1);
      if (!rtx_equal_p (x5, operands[0])
          || !(
#line 1795 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 298 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 2535; /* *avx512vl_storev2df_mask */

    case E_V64QImode:
      x2 = XEXP (x1, 1);
      if (GET_MODE (x2) != E_V64QImode)
        return -1;
      x3 = XEXP (x2, 2);
      if (!register_operand (x3, E_DImode))
        return -1;
      operands[3] = x3;
      if (register_operand (operands[0], E_V64QImode))
        {
          x4 = XEXP (x2, 0);
          operands[2] = x4;
          if (nonimmediate_operand (operands[2], E_V64QImode))
            {
              x5 = XEXP (x2, 1);
              operands[1] = x5;
              if (nonimm_or_0_operand (operands[1], E_V64QImode)
                  && (
#line 1781 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 322 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                return 2512; /* avx512bw_blendmv64qi */
            }
        }
      operands[2] = x3;
      if (!memory_operand (operands[0], E_V64QImode))
        return -1;
      x4 = XEXP (x2, 0);
      operands[1] = x4;
      if (!register_operand (operands[1], E_V64QImode))
        return -1;
      x5 = XEXP (x2, 1);
      if (!rtx_equal_p (x5, operands[0])
          || !(
#line 1823 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 322 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 2536; /* *avx512bw_storev64qi_mask */

    case E_V16QImode:
      x2 = XEXP (x1, 1);
      if (GET_MODE (x2) != E_V16QImode)
        return -1;
      x3 = XEXP (x2, 2);
      if (!register_operand (x3, E_HImode))
        return -1;
      operands[3] = x3;
      if (register_operand (operands[0], E_V16QImode))
        {
          x4 = XEXP (x2, 0);
          operands[2] = x4;
          if (nonimmediate_operand (operands[2], E_V16QImode))
            {
              x5 = XEXP (x2, 1);
              operands[1] = x5;
              if (nonimm_or_0_operand (operands[1], E_V16QImode)
                  && (
#line 1781 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 322 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                return 2513; /* avx512vl_blendmv16qi */
            }
        }
      operands[2] = x3;
      if (!memory_operand (operands[0], E_V16QImode))
        return -1;
      x4 = XEXP (x2, 0);
      operands[1] = x4;
      if (!register_operand (operands[1], E_V16QImode))
        return -1;
      x5 = XEXP (x2, 1);
      if (!rtx_equal_p (x5, operands[0])
          || !(
#line 1823 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 322 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 2537; /* *avx512vl_storev16qi_mask */

    case E_V32QImode:
      x2 = XEXP (x1, 1);
      if (GET_MODE (x2) != E_V32QImode)
        return -1;
      x3 = XEXP (x2, 2);
      if (!register_operand (x3, E_SImode))
        return -1;
      operands[3] = x3;
      if (register_operand (operands[0], E_V32QImode))
        {
          x4 = XEXP (x2, 0);
          operands[2] = x4;
          if (nonimmediate_operand (operands[2], E_V32QImode))
            {
              x5 = XEXP (x2, 1);
              operands[1] = x5;
              if (nonimm_or_0_operand (operands[1], E_V32QImode)
                  && (
#line 1781 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 322 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                return 2514; /* avx512vl_blendmv32qi */
            }
        }
      operands[2] = x3;
      if (!memory_operand (operands[0], E_V32QImode))
        return -1;
      x4 = XEXP (x2, 0);
      operands[1] = x4;
      if (!register_operand (operands[1], E_V32QImode))
        return -1;
      x5 = XEXP (x2, 1);
      if (!rtx_equal_p (x5, operands[0])
          || !(
#line 1823 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 322 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 2538; /* *avx512vl_storev32qi_mask */

    case E_V32HImode:
      x2 = XEXP (x1, 1);
      if (GET_MODE (x2) != E_V32HImode)
        return -1;
      x3 = XEXP (x2, 2);
      if (!register_operand (x3, E_SImode))
        return -1;
      operands[3] = x3;
      if (register_operand (operands[0], E_V32HImode))
        {
          x4 = XEXP (x2, 0);
          operands[2] = x4;
          if (nonimmediate_operand (operands[2], E_V32HImode))
            {
              x5 = XEXP (x2, 1);
              operands[1] = x5;
              if (nonimm_or_0_operand (operands[1], E_V32HImode)
                  && (
#line 1781 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 323 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                return 2515; /* avx512bw_blendmv32hi */
            }
        }
      operands[2] = x3;
      if (!memory_operand (operands[0], E_V32HImode))
        return -1;
      x4 = XEXP (x2, 0);
      operands[1] = x4;
      if (!register_operand (operands[1], E_V32HImode))
        return -1;
      x5 = XEXP (x2, 1);
      if (!rtx_equal_p (x5, operands[0])
          || !(
#line 1823 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 323 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 2539; /* *avx512bw_storev32hi_mask */

    case E_V16HImode:
      x2 = XEXP (x1, 1);
      if (GET_MODE (x2) != E_V16HImode)
        return -1;
      x3 = XEXP (x2, 2);
      if (!register_operand (x3, E_HImode))
        return -1;
      operands[3] = x3;
      if (register_operand (operands[0], E_V16HImode))
        {
          x4 = XEXP (x2, 0);
          operands[2] = x4;
          if (nonimmediate_operand (operands[2], E_V16HImode))
            {
              x5 = XEXP (x2, 1);
              operands[1] = x5;
              if (nonimm_or_0_operand (operands[1], E_V16HImode)
                  && (
#line 1781 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 323 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                return 2516; /* avx512vl_blendmv16hi */
            }
        }
      operands[2] = x3;
      if (!memory_operand (operands[0], E_V16HImode))
        return -1;
      x4 = XEXP (x2, 0);
      operands[1] = x4;
      if (!register_operand (operands[1], E_V16HImode))
        return -1;
      x5 = XEXP (x2, 1);
      if (!rtx_equal_p (x5, operands[0])
          || !(
#line 1823 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 323 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 2540; /* *avx512vl_storev16hi_mask */

    case E_V8HImode:
      x2 = XEXP (x1, 1);
      if (GET_MODE (x2) != E_V8HImode)
        return -1;
      x3 = XEXP (x2, 2);
      if (!register_operand (x3, E_QImode))
        return -1;
      operands[3] = x3;
      if (register_operand (operands[0], E_V8HImode))
        {
          x4 = XEXP (x2, 0);
          operands[2] = x4;
          if (nonimmediate_operand (operands[2], E_V8HImode))
            {
              x5 = XEXP (x2, 1);
              operands[1] = x5;
              if (nonimm_or_0_operand (operands[1], E_V8HImode)
                  && (
#line 1781 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 323 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                return 2517; /* avx512vl_blendmv8hi */
            }
        }
      operands[2] = x3;
      if (!memory_operand (operands[0], E_V8HImode))
        return -1;
      x4 = XEXP (x2, 0);
      operands[1] = x4;
      if (!register_operand (operands[1], E_V8HImode))
        return -1;
      x5 = XEXP (x2, 1);
      if (!rtx_equal_p (x5, operands[0])
          || !(
#line 1823 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 323 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 2541; /* *avx512vl_storev8hi_mask */

    case E_V32HFmode:
      x2 = XEXP (x1, 1);
      if (GET_MODE (x2) != E_V32HFmode)
        return -1;
      x3 = XEXP (x2, 2);
      if (!register_operand (x3, E_SImode))
        return -1;
      operands[3] = x3;
      if (register_operand (operands[0], E_V32HFmode))
        {
          x4 = XEXP (x2, 0);
          operands[2] = x4;
          if (nonimmediate_operand (operands[2], E_V32HFmode))
            {
              x5 = XEXP (x2, 1);
              operands[1] = x5;
              if (nonimm_or_0_operand (operands[1], E_V32HFmode)
                  && (
#line 1781 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 324 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                return 2518; /* avx512bw_blendmv32hf */
            }
        }
      operands[2] = x3;
      if (!memory_operand (operands[0], E_V32HFmode))
        return -1;
      x4 = XEXP (x2, 0);
      operands[1] = x4;
      if (!register_operand (operands[1], E_V32HFmode))
        return -1;
      x5 = XEXP (x2, 1);
      if (!rtx_equal_p (x5, operands[0])
          || !(
#line 1823 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 324 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 2542; /* *avx512bw_storev32hf_mask */

    case E_V16HFmode:
      return recog_154 (x1, insn, pnum_clobbers);

    case E_V8HFmode:
      return recog_153 (x1, insn, pnum_clobbers);

    case E_V32BFmode:
      return recog_152 (x1, insn, pnum_clobbers);

    case E_V16BFmode:
      return recog_151 (x1, insn, pnum_clobbers);

    case E_V8BFmode:
      return recog_150 (x1, insn, pnum_clobbers);

    default:
      return -1;
    }
}

 int
recog_163 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  x5 = XVECEXP (x4, 0, 2);
  if (GET_CODE (x5) != CONST_INT)
    return -1;
  x6 = XVECEXP (x4, 0, 3);
  if (GET_CODE (x6) != CONST_INT)
    return -1;
  x7 = XEXP (x2, 2);
  if (!register_operand (x7, E_QImode))
    return -1;
  x8 = XVECEXP (x4, 0, 0);
  switch (XWINT (x8, 0))
    {
    case 2L:
      x9 = XVECEXP (x4, 0, 1);
      if (XWINT (x9, 0) != 6L
          || XWINT (x5, 0) != 3L
          || XWINT (x6, 0) != 7L)
        return -1;
      x10 = XEXP (x3, 0);
      x11 = XEXP (x10, 1);
      operands[2] = x11;
      x12 = XEXP (x2, 1);
      operands[3] = x12;
      operands[4] = x7;
      switch (GET_MODE (operands[0]))
        {
        case E_V4SFmode:
          if (pattern1581 (x2, 
E_V4SFmode, 
E_V8SFmode) != 0
              || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 11217 "../../gcc/config/i386/sse.md"
(TARGET_SSE && TARGET_AVX512VL)))
            return -1;
          return 5249; /* vec_interleave_highv4sf_mask */

        case E_V4SImode:
          if (pattern1581 (x2, 
E_V4SImode, 
E_V8SImode) != 0
              || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 19759 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && TARGET_AVX512VL)))
            return -1;
          return 8369; /* vec_interleave_highv4si_mask */

        default:
          return -1;
        }

    case 0L:
      x9 = XVECEXP (x4, 0, 1);
      switch (XWINT (x9, 0))
        {
        case 4L:
          switch (XWINT (x5, 0))
            {
            case 1L:
              if (XWINT (x6, 0) != 5L)
                return -1;
              x10 = XEXP (x3, 0);
              x11 = XEXP (x10, 1);
              operands[2] = x11;
              x12 = XEXP (x2, 1);
              operands[3] = x12;
              operands[4] = x7;
              switch (GET_MODE (operands[0]))
                {
                case E_V4SFmode:
                  if (pattern1580 (x2, 
E_V4SFmode, 
E_V8SFmode) != 0
                      || !
#line 11274 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))
                    return -1;
                  return 5254; /* unpcklps128_mask */

                case E_V4SImode:
                  if (pattern1581 (x2, 
E_V4SImode, 
E_V8SImode) != 0
                      || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 19813 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && TARGET_AVX512VL)))
                    return -1;
                  return 8375; /* vec_interleave_lowv4si_mask */

                default:
                  return -1;
                }

            case 2L:
              if (XWINT (x6, 0) != 6L)
                return -1;
              switch (GET_MODE (operands[0]))
                {
                case E_V4DFmode:
                  if (pattern1635 (x2, 
E_V4DFmode, 
E_V8DFmode) != 0)
                    return -1;
                  x12 = XEXP (x2, 1);
                  operands[2] = x12;
                  if (nonimmediate_operand (operands[1], E_V4DFmode))
                    {
                      operands[3] = x7;
                      x10 = XEXP (x3, 0);
                      x11 = XEXP (x10, 1);
                      if (rtx_equal_p (x11, operands[1])
                          && (
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 13469 "../../gcc/config/i386/sse.md"
(TARGET_AVX && TARGET_AVX512VL)))
                        return 5409; /* avx_movddup256_mask */
                    }
                  operands[3] = x12;
                  if (!register_operand (operands[1], E_V4DFmode))
                    return -1;
                  x10 = XEXP (x3, 0);
                  x11 = XEXP (x10, 1);
                  operands[2] = x11;
                  if (!nonimmediate_operand (operands[2], E_V4DFmode))
                    return -1;
                  operands[4] = x7;
                  if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 13483 "../../gcc/config/i386/sse.md"
(TARGET_AVX && TARGET_AVX512VL)))
                    return -1;
                  return 5411; /* avx_unpcklpd256_mask */

                case E_V4DImode:
                  if (pattern1636 (x2, 
E_V4DImode, 
E_V8DImode) != 0
                      || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 14515 "../../gcc/config/i386/sse.md"
(TARGET_AVX2 && TARGET_AVX512VL)))
                    return -1;
                  return 7200; /* avx2_interleave_lowv4di_mask */

                default:
                  return -1;
                }

            default:
              return -1;
            }

        case 0L:
          if (XWINT (x5, 0) != 6L
              || XWINT (x6, 0) != 6L
              || pattern1579 (x2) != 0
              || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 11412 "../../gcc/config/i386/sse.md"
(TARGET_SSE3 && TARGET_AVX512VL)))
            return -1;
          return 5265; /* sse3_movsldup_mask */

        default:
          return -1;
        }

    case 1L:
      if (XWINT (x6, 0) != 7L)
        return -1;
      x9 = XVECEXP (x4, 0, 1);
      switch (XWINT (x9, 0))
        {
        case 1L:
          if (XWINT (x5, 0) != 7L
              || pattern1579 (x2) != 0
              || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 11359 "../../gcc/config/i386/sse.md"
(TARGET_SSE3 && TARGET_AVX512VL)))
            return -1;
          return 5259; /* sse3_movshdup_mask */

        case 5L:
          if (XWINT (x5, 0) != 3L)
            return -1;
          x10 = XEXP (x3, 0);
          x11 = XEXP (x10, 1);
          operands[2] = x11;
          x12 = XEXP (x2, 1);
          operands[3] = x12;
          operands[4] = x7;
          switch (GET_MODE (operands[0]))
            {
            case E_V4DFmode:
              if (pattern1580 (x2, 
E_V4DFmode, 
E_V8DFmode) != 0
                  || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 13339 "../../gcc/config/i386/sse.md"
(TARGET_AVX && TARGET_AVX512VL)))
                return -1;
              return 5401; /* avx_unpckhpd256_mask */

            case E_V4DImode:
              if (pattern1580 (x2, 
E_V4DImode, 
E_V8DImode) != 0
                  || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 14465 "../../gcc/config/i386/sse.md"
(TARGET_AVX2 && TARGET_AVX512VL)))
                return -1;
              return 7194; /* avx2_interleave_highv4di_mask */

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
recog_172 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  x5 = XVECEXP (x4, 0, 4);
  if (GET_CODE (x5) != CONST_INT)
    return -1;
  operands[6] = x5;
  res = recog_171 (x1, insn, pnum_clobbers);
  if (res >= 0)
    return res;
  if (XWINT (x5, 0) != 4L)
    return -1;
  x6 = XVECEXP (x4, 0, 5);
  if (x6 != const_int_rtx[MAX_SAVED_CONST_INT + 5])
    return -1;
  x7 = XVECEXP (x4, 0, 6);
  if (x7 != const_int_rtx[MAX_SAVED_CONST_INT + 6])
    return -1;
  x8 = XVECEXP (x4, 0, 7);
  if (x8 != const_int_rtx[MAX_SAVED_CONST_INT + 7]
      || pattern1302 (x2, 
E_V8HImode) != 0
      || pattern900 (x4) != 0)
    return -1;
  x9 = XEXP (x2, 1);
  operands[6] = x9;
  if (!nonimm_or_0_operand (operands[6], E_V8HImode))
    return -1;
  x10 = XEXP (x2, 2);
  operands[7] = x10;
  if (!register_operand (operands[7], E_QImode)
      || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 20846 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && TARGET_AVX512BW && TARGET_AVX512VL)))
    return -1;
  return 8445; /* sse2_pshuflw_1_mask */
}

 int
recog_176 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12, x13, x14;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  x5 = XVECEXP (x4, 0, 0);
  if (GET_CODE (x5) != CONST_INT)
    return -1;
  operands[2] = x5;
  res = recog_175 (x1, insn, pnum_clobbers);
  if (res >= 0)
    return res;
  if (XWINT (x5, 0) != 0L)
    return -1;
  x6 = XVECEXP (x4, 0, 1);
  if (x6 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
    return -1;
  x7 = XVECEXP (x4, 0, 2);
  if (x7 != const_int_rtx[MAX_SAVED_CONST_INT + 2])
    return -1;
  x8 = XVECEXP (x4, 0, 3);
  if (x8 != const_int_rtx[MAX_SAVED_CONST_INT + 3]
      || pattern1303 (x4, 
11, 
10, 
9, 
8) != 0
      || pattern755 (x2, 
E_V16HImode) != 0
      || pattern1548 (x4) != 0)
    return -1;
  x9 = XVECEXP (x4, 0, 12);
  operands[6] = x9;
  if (!const_12_to_15_operand (operands[6], E_VOIDmode))
    return -1;
  x10 = XVECEXP (x4, 0, 13);
  operands[7] = x10;
  if (!const_12_to_15_operand (operands[7], E_VOIDmode))
    return -1;
  x11 = XVECEXP (x4, 0, 14);
  operands[8] = x11;
  if (!const_12_to_15_operand (operands[8], E_VOIDmode))
    return -1;
  x12 = XVECEXP (x4, 0, 15);
  operands[9] = x12;
  if (!const_12_to_15_operand (operands[9], E_VOIDmode))
    return -1;
  x13 = XEXP (x2, 1);
  operands[10] = x13;
  if (!nonimm_or_0_operand (operands[10], E_V16HImode))
    return -1;
  x14 = XEXP (x2, 2);
  operands[11] = x14;
  if (!register_operand (operands[11], E_HImode)
      || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 20937 "../../gcc/config/i386/sse.md"
(TARGET_AVX2
   && TARGET_AVX512BW && TARGET_AVX512VL
   && INTVAL (operands[2]) + 8 == INTVAL (operands[6])
   && INTVAL (operands[3]) + 8 == INTVAL (operands[7])
   && INTVAL (operands[4]) + 8 == INTVAL (operands[8])
   && INTVAL (operands[5]) + 8 == INTVAL (operands[9]))))
    return -1;
  return 8449; /* avx2_pshufhw_1_mask */
}

 int
recog_182 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  operands[2] = x4;
  x5 = XEXP (x3, 0);
  switch (GET_CODE (x5))
    {
    case REG:
    case SUBREG:
    case MEM:
    case VEC_DUPLICATE:
      operands[1] = x5;
      switch (pattern639 (x2))
        {
        case 0:
          if (pattern1373 (x2, 
E_V32HFmode, 
E_SImode) != 0
              || !(
#line 5929 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && (64 == 64 || TARGET_AVX512VL) && 1) && 
#line 5914 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_EVEX512)))
            return -1;
          return 3800; /* fma_fmadd_v32hf_maskz_1 */

        case 1:
          if (pattern1373 (x2, 
E_V16HFmode, 
E_HImode) != 0
              || !(
#line 5929 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && (32 == 64 || TARGET_AVX512VL) && 1) && 
#line 5915 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL)))
            return -1;
          return 3804; /* fma_fmadd_v16hf_maskz_1 */

        case 2:
          if (pattern1373 (x2, 
E_V8HFmode, 
E_QImode) != 0
              || !(
#line 5929 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && (16 == 64 || TARGET_AVX512VL) && 1) && 
#line 5916 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL)))
            return -1;
          return 3808; /* fma_fmadd_v8hf_maskz_1 */

        case 3:
          if (pattern1373 (x2, 
E_V16SFmode, 
E_HImode) != 0
              || !(
#line 5929 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && (64 == 64 || TARGET_AVX512VL) && 1) && 
#line 5918 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return -1;
          return 3812; /* fma_fmadd_v16sf_maskz_1 */

        case 4:
          if (pattern1373 (x2, 
E_V8SFmode, 
E_QImode) != 0
              || !(
#line 5929 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && (32 == 64 || TARGET_AVX512VL) && 1) && 
#line 5919 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 3816; /* fma_fmadd_v8sf_maskz_1 */

        case 5:
          if (pattern1373 (x2, 
E_V4SFmode, 
E_QImode) != 0
              || !(
#line 5929 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && (16 == 64 || TARGET_AVX512VL) && 1) && 
#line 5919 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 3820; /* fma_fmadd_v4sf_maskz_1 */

        case 6:
          if (pattern1373 (x2, 
E_V8DFmode, 
E_QImode) != 0
              || !(
#line 5929 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && (64 == 64 || TARGET_AVX512VL) && 1) && 
#line 5920 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return -1;
          return 3823; /* fma_fmadd_v8df_maskz_1 */

        case 7:
          if (pattern1373 (x2, 
E_V4DFmode, 
E_QImode) != 0
              || !(
#line 5929 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && (32 == 64 || TARGET_AVX512VL) && 1) && 
#line 5921 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 3827; /* fma_fmadd_v4df_maskz_1 */

        case 8:
          if (pattern1373 (x2, 
E_V2DFmode, 
E_QImode) != 0
              || !(
#line 5929 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && (16 == 64 || TARGET_AVX512VL) && 1) && 
#line 5921 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 3831; /* fma_fmadd_v2df_maskz_1 */

        case 9:
          if (pattern1375 (x2, 
E_SImode, 
E_V32BFmode) != 0
              || !(
#line 32135 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256) && 
#line 565 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_512)))
            return -1;
          return 10627; /* avx10_2_fmaddnepbf16_v32bf_maskz_1 */

        case 10:
          if (pattern1375 (x2, 
E_HImode, 
E_V16BFmode) != 0
              || !
#line 32135 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
            return -1;
          return 10629; /* avx10_2_fmaddnepbf16_v16bf_maskz_1 */

        case 11:
          if (pattern1375 (x2, 
E_QImode, 
E_V8BFmode) != 0
              || !
#line 32135 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
            return -1;
          return 10631; /* avx10_2_fmaddnepbf16_v8bf_maskz_1 */

        case 12:
          if (pattern1376 (x2, 
E_V4SFmode) != 0
              || !
#line 6942 "../../gcc/config/i386/sse.md"
(TARGET_FMA4))
            return -1;
          return 4313; /* *fma4i_vmfmadd_v4sf */

        case 13:
          if (pattern1376 (x2, 
E_V2DFmode) != 0
              || !(
#line 6942 "../../gcc/config/i386/sse.md"
(TARGET_FMA4) && 
#line 475 "../../gcc/config/i386/sse.md"
(TARGET_SSE2)))
            return -1;
          return 4314; /* *fma4i_vmfmadd_v2df */

        case 14:
          if (pattern1292 (x2, 
E_V32HFmode, 
E_SImode) != 0)
            return -1;
          if (nonimmediate_operand (operands[1], E_V32HFmode)
              && vector_operand (operands[3], E_V32HFmode))
            {
              x6 = XEXP (x2, 1);
              if (rtx_equal_p (x6, operands[1])
                  && (
#line 5970 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 525 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_EVEX512)))
                return 3832; /* avx512bw_fmadd_v32hf_mask */
            }
          if (!vector_operand (operands[1], E_V32HFmode)
              || !nonimmediate_operand (operands[3], E_V32HFmode))
            return -1;
          x6 = XEXP (x2, 1);
          if (!rtx_equal_p (x6, operands[3])
              || !(
#line 5987 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 525 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_EVEX512)))
            return -1;
          return 3847; /* avx512bw_fmadd_v32hf_mask3 */

        case 15:
          if (pattern1292 (x2, 
E_V16HFmode, 
E_HImode) != 0)
            return -1;
          if (nonimmediate_operand (operands[1], E_V16HFmode)
              && vector_operand (operands[3], E_V16HFmode))
            {
              x6 = XEXP (x2, 1);
              if (rtx_equal_p (x6, operands[1])
                  && (
#line 5970 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 526 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL)))
                return 3834; /* avx512vl_fmadd_v16hf_mask */
            }
          if (!vector_operand (operands[1], E_V16HFmode)
              || !nonimmediate_operand (operands[3], E_V16HFmode))
            return -1;
          x6 = XEXP (x2, 1);
          if (!rtx_equal_p (x6, operands[3])
              || !(
#line 5987 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 526 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL)))
            return -1;
          return 3849; /* avx512vl_fmadd_v16hf_mask3 */

        case 16:
          if (pattern1292 (x2, 
E_V8HFmode, 
E_QImode) != 0)
            return -1;
          if (nonimmediate_operand (operands[1], E_V8HFmode)
              && vector_operand (operands[3], E_V8HFmode))
            {
              x6 = XEXP (x2, 1);
              if (rtx_equal_p (x6, operands[1])
                  && (
#line 5970 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 527 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL)))
                return 3836; /* avx512fp16_fmadd_v8hf_mask */
            }
          if (!vector_operand (operands[1], E_V8HFmode)
              || !nonimmediate_operand (operands[3], E_V8HFmode))
            return -1;
          x6 = XEXP (x2, 1);
          if (!rtx_equal_p (x6, operands[3])
              || !(
#line 5987 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 527 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL)))
            return -1;
          return 3851; /* avx512fp16_fmadd_v8hf_mask3 */

        case 17:
          if (pattern1292 (x2, 
E_V16SFmode, 
E_HImode) != 0)
            return -1;
          if (nonimmediate_operand (operands[1], E_V16SFmode)
              && vector_operand (operands[3], E_V16SFmode))
            {
              x6 = XEXP (x2, 1);
              if (rtx_equal_p (x6, operands[1])
                  && (
#line 5970 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 528 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                return 3837; /* avx512f_fmadd_v16sf_mask */
            }
          if (!vector_operand (operands[1], E_V16SFmode)
              || !nonimmediate_operand (operands[3], E_V16SFmode))
            return -1;
          x6 = XEXP (x2, 1);
          if (!rtx_equal_p (x6, operands[3])
              || !(
#line 5987 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 528 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return -1;
          return 3852; /* avx512f_fmadd_v16sf_mask3 */

        case 18:
          if (pattern1292 (x2, 
E_V8SFmode, 
E_QImode) != 0)
            return -1;
          if (nonimmediate_operand (operands[1], E_V8SFmode)
              && vector_operand (operands[3], E_V8SFmode))
            {
              x6 = XEXP (x2, 1);
              if (rtx_equal_p (x6, operands[1])
                  && (
#line 5970 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 528 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                return 3839; /* avx512vl_fmadd_v8sf_mask */
            }
          if (!vector_operand (operands[1], E_V8SFmode)
              || !nonimmediate_operand (operands[3], E_V8SFmode))
            return -1;
          x6 = XEXP (x2, 1);
          if (!rtx_equal_p (x6, operands[3])
              || !(
#line 5987 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 528 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 3854; /* avx512vl_fmadd_v8sf_mask3 */

        case 19:
          if (pattern1292 (x2, 
E_V4SFmode, 
E_QImode) != 0)
            return -1;
          if (nonimmediate_operand (operands[1], E_V4SFmode)
              && vector_operand (operands[3], E_V4SFmode))
            {
              x6 = XEXP (x2, 1);
              if (rtx_equal_p (x6, operands[1])
                  && (
#line 5970 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 528 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                return 3841; /* avx512vl_fmadd_v4sf_mask */
            }
          if (!vector_operand (operands[1], E_V4SFmode)
              || !nonimmediate_operand (operands[3], E_V4SFmode))
            return -1;
          x6 = XEXP (x2, 1);
          if (!rtx_equal_p (x6, operands[3])
              || !(
#line 5987 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 528 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 3856; /* avx512vl_fmadd_v4sf_mask3 */

        case 20:
          if (pattern1292 (x2, 
E_V8DFmode, 
E_QImode) != 0)
            return -1;
          if (nonimmediate_operand (operands[1], E_V8DFmode)
              && vector_operand (operands[3], E_V8DFmode))
            {
              x6 = XEXP (x2, 1);
              if (rtx_equal_p (x6, operands[1])
                  && (
#line 5970 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 529 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                return 3842; /* avx512f_fmadd_v8df_mask */
            }
          if (!vector_operand (operands[1], E_V8DFmode)
              || !nonimmediate_operand (operands[3], E_V8DFmode))
            return -1;
          x6 = XEXP (x2, 1);
          if (!rtx_equal_p (x6, operands[3])
              || !(
#line 5987 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 529 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return -1;
          return 3857; /* avx512f_fmadd_v8df_mask3 */

        case 21:
          if (pattern1292 (x2, 
E_V4DFmode, 
E_QImode) != 0)
            return -1;
          if (nonimmediate_operand (operands[1], E_V4DFmode)
              && vector_operand (operands[3], E_V4DFmode))
            {
              x6 = XEXP (x2, 1);
              if (rtx_equal_p (x6, operands[1])
                  && (
#line 5970 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 529 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                return 3844; /* avx512vl_fmadd_v4df_mask */
            }
          if (!vector_operand (operands[1], E_V4DFmode)
              || !nonimmediate_operand (operands[3], E_V4DFmode))
            return -1;
          x6 = XEXP (x2, 1);
          if (!rtx_equal_p (x6, operands[3])
              || !(
#line 5987 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 529 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 3859; /* avx512vl_fmadd_v4df_mask3 */

        case 22:
          if (pattern1292 (x2, 
E_V2DFmode, 
E_QImode) != 0)
            return -1;
          if (nonimmediate_operand (operands[1], E_V2DFmode)
              && vector_operand (operands[3], E_V2DFmode))
            {
              x6 = XEXP (x2, 1);
              if (rtx_equal_p (x6, operands[1])
                  && (
#line 5970 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 529 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                return 3846; /* avx512vl_fmadd_v2df_mask */
            }
          if (!vector_operand (operands[1], E_V2DFmode)
              || !nonimmediate_operand (operands[3], E_V2DFmode))
            return -1;
          x6 = XEXP (x2, 1);
          if (!rtx_equal_p (x6, operands[3])
              || !(
#line 5987 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 529 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 3861; /* avx512vl_fmadd_v2df_mask3 */

        case 23:
          if (pattern1293 (x2, 
E_SImode, 
E_V32BFmode) != 0)
            return -1;
          x6 = XEXP (x2, 1);
          if (rtx_equal_p (x6, operands[1])
              && (
#line 32153 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256) && 
#line 565 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_512)))
            return 10632; /* avx10_2_fmaddnepbf16_v32bf_mask */
          if (!rtx_equal_p (x6, operands[3])
              || !(
#line 32170 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256) && 
#line 565 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_512)))
            return -1;
          return 10635; /* avx10_2_fmaddnepbf16_v32bf_mask3 */

        case 24:
          if (pattern1293 (x2, 
E_HImode, 
E_V16BFmode) != 0)
            return -1;
          x6 = XEXP (x2, 1);
          if (rtx_equal_p (x6, operands[1])
              && 
#line 32153 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
            return 10633; /* avx10_2_fmaddnepbf16_v16bf_mask */
          if (!rtx_equal_p (x6, operands[3])
              || !
#line 32170 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
            return -1;
          return 10636; /* avx10_2_fmaddnepbf16_v16bf_mask3 */

        case 25:
          if (pattern1293 (x2, 
E_QImode, 
E_V8BFmode) != 0)
            return -1;
          x6 = XEXP (x2, 1);
          if (rtx_equal_p (x6, operands[1])
              && 
#line 32153 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
            return 10634; /* avx10_2_fmaddnepbf16_v8bf_mask */
          if (!rtx_equal_p (x6, operands[3])
              || !
#line 32170 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
            return -1;
          return 10637; /* avx10_2_fmaddnepbf16_v8bf_mask3 */

        case 26:
          if (pattern1377 (x2, 
E_V8HFmode) != 0
              || !(
#line 6583 "../../gcc/config/i386/sse.md"
(TARGET_FMA || TARGET_AVX512F) && 
#line 479 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16)))
            return -1;
          return 4217; /* *fmai_fmadd_v8hf */

        case 27:
          if (pattern1377 (x2, 
E_V4SFmode) != 0
              || !
#line 6583 "../../gcc/config/i386/sse.md"
(TARGET_FMA || TARGET_AVX512F))
            return -1;
          return 4219; /* *fmai_fmadd_v4sf */

        case 28:
          if (pattern1377 (x2, 
E_V2DFmode) != 0
              || !(
#line 6583 "../../gcc/config/i386/sse.md"
(TARGET_FMA || TARGET_AVX512F) && 
#line 480 "../../gcc/config/i386/sse.md"
(TARGET_SSE2)))
            return -1;
          return 4221; /* *fmai_fmadd_v2df */

        case 29:
          return recog_158 (x1, insn, pnum_clobbers);

        default:
          return -1;
        }

    case NEG:
      return recog_160 (x1, insn, pnum_clobbers);

    default:
      return -1;
    }
}

 int
recog_191 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  operands[2] = x4;
  x5 = XEXP (x2, 1);
  operands[3] = x5;
  x6 = XEXP (x2, 2);
  operands[4] = x6;
  x7 = XEXP (x3, 0);
  switch (GET_CODE (x7))
    {
    case NOT:
      x8 = XEXP (x7, 0);
      operands[1] = x8;
      switch (GET_MODE (operands[0]))
        {
        case E_V8SFmode:
          if (pattern1015 (x2, 
E_V8SFmode) != 0
              || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 5222 "../../gcc/config/i386/sse.md"
(TARGET_SSE && TARGET_AVX512VL
   && (!true || 32 != 16)) && 
#line 429 "../../gcc/config/i386/sse.md"
(TARGET_AVX))))
            return -1;
          return 3693; /* avx_andnotv8sf3_mask */

        case E_V4SFmode:
          if (pattern1015 (x2, 
E_V4SFmode) != 0
              || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 5222 "../../gcc/config/i386/sse.md"
(TARGET_SSE && TARGET_AVX512VL
   && (!true || 32 != 16))))
            return -1;
          return 3695; /* sse_andnotv4sf3_mask */

        case E_V4DFmode:
          if (pattern1015 (x2, 
E_V4DFmode) != 0
              || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 5222 "../../gcc/config/i386/sse.md"
(TARGET_SSE && TARGET_AVX512VL
   && (!true || 64 != 16)) && 
#line 430 "../../gcc/config/i386/sse.md"
(TARGET_AVX))))
            return -1;
          return 3697; /* avx_andnotv4df3_mask */

        case E_V2DFmode:
          if (pattern1015 (x2, 
E_V2DFmode) != 0
              || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 5222 "../../gcc/config/i386/sse.md"
(TARGET_SSE && TARGET_AVX512VL
   && (!true || 64 != 16)) && 
#line 430 "../../gcc/config/i386/sse.md"
(TARGET_SSE2))))
            return -1;
          return 3699; /* sse2_andnotv2df3_mask */

        case E_V16SFmode:
          if (pattern1016 (x2, 
E_V16SFmode, 
E_HImode) != 0
              || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 5297 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && (!true || 32 != 16)) && 
#line 494 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512))))
            return -1;
          return 3703; /* avx512f_andnotv16sf3_mask */

        case E_V8DFmode:
          if (pattern1016 (x2, 
E_V8DFmode, 
E_QImode) != 0
              || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 5297 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && (!true || 64 != 16)) && 
#line 495 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512))))
            return -1;
          return 3705; /* avx512f_andnotv8df3_mask */

        case E_V16SImode:
          if (pattern1016 (x2, 
E_V16SImode, 
E_HImode) != 0
              || !(
#line 18680 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 501 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return -1;
          return 7995; /* *andnotv16si3_mask */

        case E_V8SImode:
          if (pattern1016 (x2, 
E_V8SImode, 
E_QImode) != 0
              || !(
#line 18680 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 501 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 7996; /* *andnotv8si3_mask */

        case E_V4SImode:
          if (pattern1016 (x2, 
E_V4SImode, 
E_QImode) != 0
              || !(
#line 18680 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 501 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 7997; /* *andnotv4si3_mask */

        case E_V8DImode:
          if (pattern1016 (x2, 
E_V8DImode, 
E_QImode) != 0
              || !(
#line 18680 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 502 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return -1;
          return 7998; /* *andnotv8di3_mask */

        case E_V4DImode:
          if (pattern1016 (x2, 
E_V4DImode, 
E_QImode) != 0
              || !(
#line 18680 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 502 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 7999; /* *andnotv4di3_mask */

        case E_V2DImode:
          if (pattern1016 (x2, 
E_V2DImode, 
E_QImode) != 0
              || !(
#line 18680 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 502 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 8000; /* *andnotv2di3_mask */

        default:
          return -1;
        }

    case REG:
    case SUBREG:
    case MEM:
    case VEC_DUPLICATE:
      operands[1] = x7;
      switch (GET_MODE (operands[0]))
        {
        case E_V8SFmode:
          if (pattern126 (x2, 
E_V8SFmode, 
E_QImode) != 0
              || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 5349 "../../gcc/config/i386/sse.md"
(TARGET_SSE && TARGET_AVX512VL
   && (!true || 32 != 16)
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 429 "../../gcc/config/i386/sse.md"
(TARGET_AVX))))
            return -1;
          return 3719; /* *andv8sf3_mask */

        case E_V4SFmode:
          if (pattern126 (x2, 
E_V4SFmode, 
E_QImode) != 0
              || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 5349 "../../gcc/config/i386/sse.md"
(TARGET_SSE && TARGET_AVX512VL
   && (!true || 32 != 16)
   && !(MEM_P (operands[1]) && MEM_P (operands[2])))))
            return -1;
          return 3725; /* *andv4sf3_mask */

        case E_V4DFmode:
          if (pattern126 (x2, 
E_V4DFmode, 
E_QImode) != 0
              || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 5349 "../../gcc/config/i386/sse.md"
(TARGET_SSE && TARGET_AVX512VL
   && (!true || 64 != 16)
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 430 "../../gcc/config/i386/sse.md"
(TARGET_AVX))))
            return -1;
          return 3731; /* *andv4df3_mask */

        case E_V2DFmode:
          if (pattern126 (x2, 
E_V2DFmode, 
E_QImode) != 0
              || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 5349 "../../gcc/config/i386/sse.md"
(TARGET_SSE && TARGET_AVX512VL
   && (!true || 64 != 16)
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 430 "../../gcc/config/i386/sse.md"
(TARGET_SSE2))))
            return -1;
          return 3737; /* *andv2df3_mask */

        case E_V16SFmode:
          if (pattern127 (x2, 
E_V16SFmode, 
E_HImode) != 0
              || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 5419 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && !(MEM_P (operands[1]) && MEM_P (operands[2]))
   && (!true || 32 != 16)) && 
#line 494 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512))))
            return -1;
          return 3749; /* *andv16sf3_mask */

        case E_V8DFmode:
          if (pattern127 (x2, 
E_V8DFmode, 
E_QImode) != 0
              || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 5419 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && !(MEM_P (operands[1]) && MEM_P (operands[2]))
   && (!true || 64 != 16)) && 
#line 495 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512))))
            return -1;
          return 3755; /* *andv8df3_mask */

        case E_V16SImode:
          if (pattern486 (x2, 
E_V16SImode, 
E_HImode) != 0
              || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 18731 "../../gcc/config/i386/sse.md"
(TARGET_SSE && (64 == 64 || TARGET_AVX512VL)
   && ix86_binary_operator_ok (AND, V16SImode, operands)) && 
#line 808 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512))))
            return -1;
          return 8002; /* *andv16si3_mask */

        case E_V8SImode:
          if (pattern486 (x2, 
E_V8SImode, 
E_QImode) != 0
              || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 18731 "../../gcc/config/i386/sse.md"
(TARGET_SSE && (32 == 64 || TARGET_AVX512VL)
   && ix86_binary_operator_ok (AND, V8SImode, operands)) && 
#line 808 "../../gcc/config/i386/sse.md"
(TARGET_AVX))))
            return -1;
          return 8008; /* *andv8si3_mask */

        case E_V4SImode:
          if (pattern486 (x2, 
E_V4SImode, 
E_QImode) != 0
              || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 18731 "../../gcc/config/i386/sse.md"
(TARGET_SSE && (16 == 64 || TARGET_AVX512VL)
   && ix86_binary_operator_ok (AND, V4SImode, operands))))
            return -1;
          return 8014; /* *andv4si3_mask */

        case E_V8DImode:
          if (pattern486 (x2, 
E_V8DImode, 
E_QImode) != 0
              || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 18731 "../../gcc/config/i386/sse.md"
(TARGET_SSE && (64 == 64 || TARGET_AVX512VL)
   && ix86_binary_operator_ok (AND, V8DImode, operands)) && 
#line 809 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512))))
            return -1;
          return 8020; /* *andv8di3_mask */

        case E_V4DImode:
          if (pattern486 (x2, 
E_V4DImode, 
E_QImode) != 0
              || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 18731 "../../gcc/config/i386/sse.md"
(TARGET_SSE && (32 == 64 || TARGET_AVX512VL)
   && ix86_binary_operator_ok (AND, V4DImode, operands)) && 
#line 809 "../../gcc/config/i386/sse.md"
(TARGET_AVX))))
            return -1;
          return 8026; /* *andv4di3_mask */

        case E_V2DImode:
          if (pattern486 (x2, 
E_V2DImode, 
E_QImode) != 0
              || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 18731 "../../gcc/config/i386/sse.md"
(TARGET_SSE && (16 == 64 || TARGET_AVX512VL)
   && ix86_binary_operator_ok (AND, V2DImode, operands))))
            return -1;
          return 8032; /* *andv2di3_mask */

        default:
          return -1;
        }

    default:
      return -1;
    }
}

 int
recog_200 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  operands[1] = x4;
  x5 = XEXP (x2, 1);
  operands[2] = x5;
  x6 = XEXP (x2, 2);
  switch (GET_CODE (x6))
    {
    case REG:
    case SUBREG:
      operands[3] = x6;
      switch (GET_MODE (operands[0]))
        {
        case E_V32HFmode:
          if (pattern888 (x2, 
E_V32HFmode, 
E_SImode) != 0
              || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 3065 "../../gcc/config/i386/sse.md"
(TARGET_SSE && (64 == 64 || TARGET_AVX512VL) && 1) && 
#line 390 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_EVEX512))))
            return -1;
          return 2906; /* avx512fp16_sqrtv32hf2_mask */

        case E_V16HFmode:
          if (pattern888 (x2, 
E_V16HFmode, 
E_HImode) != 0
              || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 3065 "../../gcc/config/i386/sse.md"
(TARGET_SSE && (32 == 64 || TARGET_AVX512VL) && 1) && 
#line 391 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL))))
            return -1;
          return 2910; /* avx512fp16_sqrtv16hf2_mask */

        case E_V8HFmode:
          if (pattern888 (x2, 
E_V8HFmode, 
E_QImode) != 0
              || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 3065 "../../gcc/config/i386/sse.md"
(TARGET_SSE && (16 == 64 || TARGET_AVX512VL) && 1) && 
#line 392 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL))))
            return -1;
          return 2913; /* avx512fp16_sqrtv8hf2_mask */

        case E_V16SFmode:
          if (pattern888 (x2, 
E_V16SFmode, 
E_HImode) != 0
              || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 3065 "../../gcc/config/i386/sse.md"
(TARGET_SSE && (64 == 64 || TARGET_AVX512VL) && 1) && 
#line 393 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512))))
            return -1;
          return 2916; /* avx512f_sqrtv16sf2_mask */

        case E_V8SFmode:
          if (pattern888 (x2, 
E_V8SFmode, 
E_QImode) != 0
              || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 3065 "../../gcc/config/i386/sse.md"
(TARGET_SSE && (32 == 64 || TARGET_AVX512VL) && 1) && 
#line 393 "../../gcc/config/i386/sse.md"
(TARGET_AVX))))
            return -1;
          return 2920; /* avx_sqrtv8sf2_mask */

        case E_V4SFmode:
          if (pattern888 (x2, 
E_V4SFmode, 
E_QImode) != 0
              || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 3065 "../../gcc/config/i386/sse.md"
(TARGET_SSE && (16 == 64 || TARGET_AVX512VL) && 1)))
            return -1;
          return 2923; /* sse_sqrtv4sf2_mask */

        case E_V8DFmode:
          if (pattern888 (x2, 
E_V8DFmode, 
E_QImode) != 0
              || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 3065 "../../gcc/config/i386/sse.md"
(TARGET_SSE && (64 == 64 || TARGET_AVX512VL) && 1) && 
#line 394 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512))))
            return -1;
          return 2926; /* avx512f_sqrtv8df2_mask */

        case E_V4DFmode:
          if (pattern888 (x2, 
E_V4DFmode, 
E_QImode) != 0
              || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 3065 "../../gcc/config/i386/sse.md"
(TARGET_SSE && (32 == 64 || TARGET_AVX512VL) && 1) && 
#line 394 "../../gcc/config/i386/sse.md"
(TARGET_AVX))))
            return -1;
          return 2930; /* avx_sqrtv4df2_mask */

        case E_V2DFmode:
          if (pattern888 (x2, 
E_V2DFmode, 
E_QImode) != 0
              || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 3065 "../../gcc/config/i386/sse.md"
(TARGET_SSE && (16 == 64 || TARGET_AVX512VL) && 1) && 
#line 395 "../../gcc/config/i386/sse.md"
(TARGET_SSE2))))
            return -1;
          return 2933; /* sse2_sqrtv2df2_mask */

        case E_V32BFmode:
          if (pattern143 (x2, 
E_V32BFmode, 
E_SImode) != 0
              || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 32387 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256) && 
#line 565 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_512))))
            return -1;
          return 10681; /* avx10_2_sqrtnepbf16_v32bf_mask */

        case E_V16BFmode:
          if (pattern143 (x2, 
E_V16BFmode, 
E_HImode) != 0
              || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 32387 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256)))
            return -1;
          return 10683; /* avx10_2_sqrtnepbf16_v16bf_mask */

        case E_V8BFmode:
          if (pattern143 (x2, 
E_V8BFmode, 
E_QImode) != 0
              || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 32387 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256)))
            return -1;
          return 10685; /* avx10_2_sqrtnepbf16_v8bf_mask */

        default:
          return -1;
        }

    case CONST_INT:
      if (XWINT (x6, 0) != 1L)
        return -1;
      switch (GET_MODE (operands[0]))
        {
        case E_V8HFmode:
          if (pattern889 (x2, 
E_V8HFmode) != 0
              || !(
#line 3083 "../../gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 479 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16)))
            return -1;
          return 2934; /* avx512fp16_vmsqrtv8hf2 */

        case E_V4SFmode:
          if (pattern889 (x2, 
E_V4SFmode) != 0
              || !
#line 3083 "../../gcc/config/i386/sse.md"
(TARGET_SSE))
            return -1;
          return 2938; /* sse_vmsqrtv4sf2 */

        case E_V2DFmode:
          if (pattern889 (x2, 
E_V2DFmode) != 0
              || !(
#line 3083 "../../gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 480 "../../gcc/config/i386/sse.md"
(TARGET_SSE2)))
            return -1;
          return 2942; /* sse2_vmsqrtv2df2 */

        default:
          return -1;
        }

    default:
      return -1;
    }
}

 int
recog_208 (rtx x1 ATTRIBUTE_UNUSED,
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
    case E_V32HFmode:
      if (!register_operand (operands[0], E_V32HFmode)
          || GET_MODE (x2) != E_V32HFmode
          || !vector_operand (operands[1], E_V32HFmode)
          || !(
#line 14031 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 525 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_EVEX512)))
        return -1;
      return 7034; /* avx512bw_getexpv32hf */

    case E_V16HFmode:
      if (!register_operand (operands[0], E_V16HFmode)
          || GET_MODE (x2) != E_V16HFmode
          || !vector_operand (operands[1], E_V16HFmode)
          || !(
#line 14031 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 526 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL)))
        return -1;
      return 7038; /* avx512vl_getexpv16hf */

    case E_V8HFmode:
      if (!register_operand (operands[0], E_V8HFmode)
          || GET_MODE (x2) != E_V8HFmode
          || !vector_operand (operands[1], E_V8HFmode)
          || !(
#line 14031 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 527 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL)))
        return -1;
      return 7042; /* avx512fp16_getexpv8hf */

    case E_V16SFmode:
      if (!register_operand (operands[0], E_V16SFmode)
          || GET_MODE (x2) != E_V16SFmode
          || !vector_operand (operands[1], E_V16SFmode)
          || !(
#line 14031 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 528 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 7044; /* avx512f_getexpv16sf */

    case E_V8SFmode:
      if (!register_operand (operands[0], E_V8SFmode)
          || GET_MODE (x2) != E_V8SFmode
          || !vector_operand (operands[1], E_V8SFmode)
          || !(
#line 14031 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 528 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 7048; /* avx512vl_getexpv8sf */

    case E_V4SFmode:
      if (!register_operand (operands[0], E_V4SFmode)
          || GET_MODE (x2) != E_V4SFmode
          || !vector_operand (operands[1], E_V4SFmode)
          || !(
#line 14031 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 528 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 7052; /* avx512vl_getexpv4sf */

    case E_V8DFmode:
      if (!register_operand (operands[0], E_V8DFmode)
          || GET_MODE (x2) != E_V8DFmode
          || !vector_operand (operands[1], E_V8DFmode)
          || !(
#line 14031 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 529 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 7054; /* avx512f_getexpv8df */

    case E_V4DFmode:
      if (!register_operand (operands[0], E_V4DFmode)
          || GET_MODE (x2) != E_V4DFmode
          || !vector_operand (operands[1], E_V4DFmode)
          || !(
#line 14031 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 529 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 7058; /* avx512vl_getexpv4df */

    case E_V2DFmode:
      if (!register_operand (operands[0], E_V2DFmode)
          || GET_MODE (x2) != E_V2DFmode
          || !vector_operand (operands[1], E_V2DFmode)
          || !(
#line 14031 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 529 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 7062; /* avx512vl_getexpv2df */

    case E_V32BFmode:
      if (!register_operand (operands[0], E_V32BFmode)
          || GET_MODE (x2) != E_V32BFmode
          || !nonimmediate_operand (operands[1], E_V32BFmode)
          || !(
#line 32405 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256) && 
#line 565 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_512)))
        return -1;
      return 10692; /* avx10_2_getexppbf16_v32bf */

    case E_V16BFmode:
      if (!register_operand (operands[0], E_V16BFmode)
          || GET_MODE (x2) != E_V16BFmode
          || !nonimmediate_operand (operands[1], E_V16BFmode)
          || !
#line 32405 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
        return -1;
      return 10694; /* avx10_2_getexppbf16_v16bf */

    case E_V8BFmode:
      if (!register_operand (operands[0], E_V8BFmode)
          || GET_MODE (x2) != E_V8BFmode
          || !nonimmediate_operand (operands[1], E_V8BFmode)
          || !
#line 32405 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
        return -1;
      return 10696; /* avx10_2_getexppbf16_v8bf */

    default:
      return -1;
    }
}

 int
recog_216 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  switch (pattern319 (x2))
    {
    case 0:
      if (!(
#line 1634 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 295 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 2455; /* *avx512f_loadv16si */

    case 1:
      if (!(
#line 1634 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 295 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 2456; /* *avx512vl_loadv8si */

    case 2:
      if (!(
#line 1634 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 295 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 2457; /* *avx512vl_loadv4si */

    case 3:
      if (!(
#line 1634 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 296 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 2458; /* *avx512f_loadv8di */

    case 4:
      if (!(
#line 1634 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 296 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 2459; /* *avx512vl_loadv4di */

    case 5:
      if (!(
#line 1634 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 296 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 2460; /* *avx512vl_loadv2di */

    case 6:
      if (!(
#line 1634 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 297 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 2461; /* *avx512f_loadv16sf */

    case 7:
      if (!(
#line 1634 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 297 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 2462; /* *avx512vl_loadv8sf */

    case 8:
      if (!(
#line 1634 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 297 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 2463; /* *avx512vl_loadv4sf */

    case 9:
      if (!(
#line 1634 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 298 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 2464; /* *avx512f_loadv8df */

    case 10:
      if (!(
#line 1634 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 298 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 2465; /* *avx512vl_loadv4df */

    case 11:
      if (!(
#line 1634 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 298 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 2466; /* *avx512vl_loadv2df */

    case 12:
      if (!(
#line 1678 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 322 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 2479; /* *avx512bw_loadv64qi */

    case 13:
      if (!(
#line 1678 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 322 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 2480; /* *avx512vl_loadv16qi */

    case 14:
      if (!(
#line 1678 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 322 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 2481; /* *avx512vl_loadv32qi */

    case 15:
      if (!(
#line 1678 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 323 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 2482; /* *avx512bw_loadv32hi */

    case 16:
      if (!(
#line 1678 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 323 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 2483; /* *avx512vl_loadv16hi */

    case 17:
      if (!(
#line 1678 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 323 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 2484; /* *avx512vl_loadv8hi */

    case 18:
      if (!(
#line 1678 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 324 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 2485; /* *avx512bw_loadv32hf */

    case 19:
      if (!(
#line 1678 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 324 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 2486; /* *avx512vl_loadv16hf */

    case 20:
      if (!(
#line 1678 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 324 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 2487; /* *avx512fp16_loadv8hf */

    case 21:
      if (!(
#line 1678 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 325 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 2488; /* *avx512bw_loadv32bf */

    case 22:
      if (!(
#line 1678 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 325 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 2489; /* *avx512vl_loadv16bf */

    case 23:
      if (!(
#line 1678 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 325 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 2490; /* *avx512vl_loadv8bf */

    default:
      return -1;
    }
}

 int
recog_226 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12, x13, x14;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XVECEXP (x2, 0, 1);
  if (!const48_operand (x3, E_SImode))
    return -1;
  x4 = XVECEXP (x2, 0, 0);
  x5 = XEXP (x4, 0);
  x6 = XEXP (x5, 0);
  switch (GET_CODE (x6))
    {
    case REG:
    case SUBREG:
      operands[1] = x6;
      x7 = XEXP (x4, 1);
      operands[2] = x7;
      x8 = XEXP (x4, 2);
      operands[3] = x8;
      operands[4] = x3;
      switch (GET_MODE (operands[0]))
        {
        case E_V8DFmode:
          if (pattern1310 (x2, 
E_QImode, 
E_V8DFmode) != 0)
            return -1;
          switch (GET_MODE (operands[1]))
            {
            case E_V8HFmode:
              if (!register_operand (operands[1], E_V8HFmode)
                  || !(
#line 286 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../gcc/config/i386/subst.md"
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
(TARGET_EVEX512)))))
                return -1;
              return 4710; /* avx512fp16_float_extend_phv8df2_mask_round */

            case E_V8SFmode:
              if (!register_operand (operands[1], E_V8SFmode)
                  || !(
#line 286 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 10221 "../../gcc/config/i386/sse.md"
(TARGET_AVX && (64 == 64 || TARGET_AVX512VL) && ((V8DFmode == V16SFmode
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
(TARGET_AVX512F && TARGET_EVEX512)))))
                return -1;
              return 5186; /* avx512f_cvtps2pd512_mask_round */

            default:
              return -1;
            }

        case E_V16SFmode:
          if (pattern652 (x2, 
E_V16SFmode, 
E_V16HFmode, 
E_HImode) != 0
              || !(
#line 286 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../gcc/config/i386/subst.md"
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
(TARGET_EVEX512)))))
            return -1;
          return 4714; /* avx512fp16_float_extend_phv16sf2_mask_round */

        case E_V8SFmode:
          if (pattern652 (x2, 
E_V8SFmode, 
E_V8HFmode, 
E_QImode) != 0
              || !(
#line 286 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../gcc/config/i386/subst.md"
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
(TARGET_AVX512VL)))))
            return -1;
          return 4718; /* avx512fp16_float_extend_phv8sf2_mask_round */

        case E_V4DFmode:
          if (pattern652 (x2, 
E_V4DFmode, 
E_V4SFmode, 
E_QImode) != 0
              || !(
#line 286 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 10221 "../../gcc/config/i386/sse.md"
(TARGET_AVX && (32 == 64 || TARGET_AVX512VL) && ((V4DFmode == V16SFmode
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
          return 5190; /* avx_cvtps2pd256_mask_round */

        default:
          return -1;
        }

    case VEC_SELECT:
      x9 = XEXP (x6, 1);
      if (GET_CODE (x9) != PARALLEL)
        return -1;
      switch (XVECLEN (x9, 0))
        {
        case 4:
          x10 = XVECEXP (x9, 0, 0);
          if (x10 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
            return -1;
          x11 = XVECEXP (x9, 0, 1);
          if (x11 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
            return -1;
          x12 = XVECEXP (x9, 0, 2);
          if (x12 != const_int_rtx[MAX_SAVED_CONST_INT + 2])
            return -1;
          x13 = XVECEXP (x9, 0, 3);
          if (x13 != const_int_rtx[MAX_SAVED_CONST_INT + 3]
              || pattern1404 (x2, 
E_V4HFmode, 
E_V4DFmode) != 0)
            return -1;
          x14 = XEXP (x6, 0);
          operands[1] = x14;
          if (!register_operand (operands[1], E_V8HFmode))
            return -1;
          x7 = XEXP (x4, 1);
          operands[2] = x7;
          if (!nonimm_or_0_operand (operands[2], E_V4DFmode))
            return -1;
          x8 = XEXP (x4, 2);
          operands[3] = x8;
          if (!register_operand (operands[3], E_QImode))
            return -1;
          operands[4] = x3;
          if (!(
#line 286 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../gcc/config/i386/subst.md"
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
										       || V4DFmode == V16HFmode)))))))
            return -1;
          return 4722; /* avx512fp16_float_extend_phv4df2_mask_round */

        case 2:
          x10 = XVECEXP (x9, 0, 0);
          if (x10 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
            return -1;
          x11 = XVECEXP (x9, 0, 1);
          if (x11 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
            return -1;
          x8 = XEXP (x4, 2);
          if (x8 != const_int_rtx[MAX_SAVED_CONST_INT + 1]
              || pattern1404 (x2, 
E_V2SFmode, 
E_V2DFmode) != 0)
            return -1;
          x14 = XEXP (x6, 0);
          operands[2] = x14;
          if (!register_operand (operands[2], E_V4SFmode))
            return -1;
          x7 = XEXP (x4, 1);
          operands[1] = x7;
          if (!register_operand (operands[1], E_V2DFmode))
            return -1;
          operands[3] = x3;
          if (!(
#line 286 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 10047 "../../gcc/config/i386/sse.md"
(TARGET_SSE2)))
            return -1;
          return 5167; /* sse2_cvtss2sd_round */

        default:
          return -1;
        }

    default:
      return -1;
    }
}

 int
recog_228 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XVECEXP (x2, 0, 0);
  x4 = XEXP (x3, 0);
  switch (GET_CODE (x4))
    {
    case PLUS:
      switch (pattern649 (x2))
        {
        case 0:
          if (!(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 2661 "../../gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (PLUS, V32HFmode, operands)
   && (64 == 64 || TARGET_AVX512VL) && ((V32HFmode == V16SFmode
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
(TARGET_AVX512FP16 && TARGET_EVEX512)))))
            return -1;
          return 2680; /* *addv32hf3_mask_round */

        case 1:
          if (!(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 2661 "../../gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (PLUS, V16HFmode, operands)
   && (32 == 64 || TARGET_AVX512VL) && ((V16HFmode == V16SFmode
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
(TARGET_AVX512FP16 && TARGET_AVX512VL)))))
            return -1;
          return 2688; /* *addv16hf3_mask_round */

        case 2:
          if (!(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 2661 "../../gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (PLUS, V8HFmode, operands)
   && (16 == 64 || TARGET_AVX512VL) && ((V8HFmode == V16SFmode
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
(TARGET_AVX512FP16 && TARGET_AVX512VL)))))
            return -1;
          return 2696; /* *addv8hf3_mask_round */

        case 3:
          if (!(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 2661 "../../gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (PLUS, V16SFmode, operands)
   && (64 == 64 || TARGET_AVX512VL) && ((V16SFmode == V16SFmode
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
(TARGET_AVX512F && TARGET_EVEX512)))))
            return -1;
          return 2704; /* *addv16sf3_mask_round */

        case 4:
          if (!(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 2661 "../../gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (PLUS, V8SFmode, operands)
   && (32 == 64 || TARGET_AVX512VL) && ((V8SFmode == V16SFmode
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
(TARGET_AVX)))))
            return -1;
          return 2712; /* *addv8sf3_mask_round */

        case 5:
          if (!(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 2661 "../../gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (PLUS, V4SFmode, operands)
   && (16 == 64 || TARGET_AVX512VL) && ((V4SFmode == V16SFmode
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
								       || V4SFmode == V16HFmode)))))))
            return -1;
          return 2720; /* *addv4sf3_mask_round */

        case 6:
          if (!(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 2661 "../../gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (PLUS, V8DFmode, operands)
   && (64 == 64 || TARGET_AVX512VL) && ((V8DFmode == V16SFmode
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
(TARGET_AVX512F && TARGET_EVEX512)))))
            return -1;
          return 2728; /* *addv8df3_mask_round */

        case 7:
          if (!(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 2661 "../../gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (PLUS, V4DFmode, operands)
   && (32 == 64 || TARGET_AVX512VL) && ((V4DFmode == V16SFmode
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
(TARGET_AVX)))))
            return -1;
          return 2736; /* *addv4df3_mask_round */

        case 8:
          if (!(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 2661 "../../gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (PLUS, V2DFmode, operands)
   && (16 == 64 || TARGET_AVX512VL) && ((V2DFmode == V16SFmode
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
(TARGET_SSE2)))))
            return -1;
          return 2744; /* *addv2df3_mask_round */

        case 9:
          if (!(
#line 444 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 2710 "../../gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 479 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16))))
            return -1;
          return 2756; /* avx512fp16_vmaddv8hf3_round */

        case 10:
          if (!(
#line 444 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 2710 "../../gcc/config/i386/sse.md"
(TARGET_SSE)))
            return -1;
          return 2764; /* sse_vmaddv4sf3_round */

        case 11:
          if (!(
#line 444 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 2710 "../../gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 480 "../../gcc/config/i386/sse.md"
(TARGET_SSE2))))
            return -1;
          return 2772; /* sse2_vmaddv2df3_round */

        default:
          return -1;
        }

    case MINUS:
      switch (pattern649 (x2))
        {
        case 0:
          if (!(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 2661 "../../gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (MINUS, V32HFmode, operands)
   && (64 == 64 || TARGET_AVX512VL) && ((V32HFmode == V16SFmode
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
(TARGET_AVX512FP16 && TARGET_EVEX512)))))
            return -1;
          return 2684; /* *subv32hf3_mask_round */

        case 1:
          if (!(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 2661 "../../gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (MINUS, V16HFmode, operands)
   && (32 == 64 || TARGET_AVX512VL) && ((V16HFmode == V16SFmode
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
(TARGET_AVX512FP16 && TARGET_AVX512VL)))))
            return -1;
          return 2692; /* *subv16hf3_mask_round */

        case 2:
          if (!(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 2661 "../../gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (MINUS, V8HFmode, operands)
   && (16 == 64 || TARGET_AVX512VL) && ((V8HFmode == V16SFmode
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
(TARGET_AVX512FP16 && TARGET_AVX512VL)))))
            return -1;
          return 2700; /* *subv8hf3_mask_round */

        case 3:
          if (!(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 2661 "../../gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (MINUS, V16SFmode, operands)
   && (64 == 64 || TARGET_AVX512VL) && ((V16SFmode == V16SFmode
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
(TARGET_AVX512F && TARGET_EVEX512)))))
            return -1;
          return 2708; /* *subv16sf3_mask_round */

        case 4:
          if (!(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 2661 "../../gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (MINUS, V8SFmode, operands)
   && (32 == 64 || TARGET_AVX512VL) && ((V8SFmode == V16SFmode
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
(TARGET_AVX)))))
            return -1;
          return 2716; /* *subv8sf3_mask_round */

        case 5:
          if (!(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 2661 "../../gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (MINUS, V4SFmode, operands)
   && (16 == 64 || TARGET_AVX512VL) && ((V4SFmode == V16SFmode
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
								       || V4SFmode == V16HFmode)))))))
            return -1;
          return 2724; /* *subv4sf3_mask_round */

        case 6:
          if (!(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 2661 "../../gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (MINUS, V8DFmode, operands)
   && (64 == 64 || TARGET_AVX512VL) && ((V8DFmode == V16SFmode
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
(TARGET_AVX512F && TARGET_EVEX512)))))
            return -1;
          return 2732; /* *subv8df3_mask_round */

        case 7:
          if (!(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 2661 "../../gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (MINUS, V4DFmode, operands)
   && (32 == 64 || TARGET_AVX512VL) && ((V4DFmode == V16SFmode
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
(TARGET_AVX)))))
            return -1;
          return 2740; /* *subv4df3_mask_round */

        case 8:
          if (!(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 2661 "../../gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (MINUS, V2DFmode, operands)
   && (16 == 64 || TARGET_AVX512VL) && ((V2DFmode == V16SFmode
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
(TARGET_SSE2)))))
            return -1;
          return 2748; /* *subv2df3_mask_round */

        case 9:
          if (!(
#line 444 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 2710 "../../gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 479 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16))))
            return -1;
          return 2760; /* avx512fp16_vmsubv8hf3_round */

        case 10:
          if (!(
#line 444 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 2710 "../../gcc/config/i386/sse.md"
(TARGET_SSE)))
            return -1;
          return 2768; /* sse_vmsubv4sf3_round */

        case 11:
          if (!(
#line 444 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 2710 "../../gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 480 "../../gcc/config/i386/sse.md"
(TARGET_SSE2))))
            return -1;
          return 2776; /* sse2_vmsubv2df3_round */

        default:
          return -1;
        }

    case VEC_MERGE:
      return recog_222 (x1, insn, pnum_clobbers);

    case MULT:
      switch (pattern649 (x2))
        {
        case 0:
          if (!(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 2750 "../../gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (MULT, V32HFmode, operands)
   && (64 == 64 || TARGET_AVX512VL) && ((V32HFmode == V16SFmode
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
(TARGET_AVX512FP16 && TARGET_EVEX512)))))
            return -1;
          return 2782; /* *mulv32hf3_mask_round */

        case 1:
          if (!(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 2750 "../../gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (MULT, V16HFmode, operands)
   && (32 == 64 || TARGET_AVX512VL) && ((V16HFmode == V16SFmode
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
(TARGET_AVX512FP16 && TARGET_AVX512VL)))))
            return -1;
          return 2786; /* *mulv16hf3_mask_round */

        case 2:
          if (!(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 2750 "../../gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (MULT, V8HFmode, operands)
   && (16 == 64 || TARGET_AVX512VL) && ((V8HFmode == V16SFmode
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
(TARGET_AVX512FP16 && TARGET_AVX512VL)))))
            return -1;
          return 2790; /* *mulv8hf3_mask_round */

        case 3:
          if (!(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 2750 "../../gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (MULT, V16SFmode, operands)
   && (64 == 64 || TARGET_AVX512VL) && ((V16SFmode == V16SFmode
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
(TARGET_AVX512F && TARGET_EVEX512)))))
            return -1;
          return 2794; /* *mulv16sf3_mask_round */

        case 4:
          if (!(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 2750 "../../gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (MULT, V8SFmode, operands)
   && (32 == 64 || TARGET_AVX512VL) && ((V8SFmode == V16SFmode
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
(TARGET_AVX)))))
            return -1;
          return 2798; /* *mulv8sf3_mask_round */

        case 5:
          if (!(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 2750 "../../gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (MULT, V4SFmode, operands)
   && (16 == 64 || TARGET_AVX512VL) && ((V4SFmode == V16SFmode
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
								       || V4SFmode == V16HFmode)))))))
            return -1;
          return 2802; /* *mulv4sf3_mask_round */

        case 6:
          if (!(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 2750 "../../gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (MULT, V8DFmode, operands)
   && (64 == 64 || TARGET_AVX512VL) && ((V8DFmode == V16SFmode
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
(TARGET_AVX512F && TARGET_EVEX512)))))
            return -1;
          return 2806; /* *mulv8df3_mask_round */

        case 7:
          if (!(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 2750 "../../gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (MULT, V4DFmode, operands)
   && (32 == 64 || TARGET_AVX512VL) && ((V4DFmode == V16SFmode
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
(TARGET_AVX)))))
            return -1;
          return 2810; /* *mulv4df3_mask_round */

        case 8:
          if (!(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 2750 "../../gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (MULT, V2DFmode, operands)
   && (16 == 64 || TARGET_AVX512VL) && ((V2DFmode == V16SFmode
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
(TARGET_SSE2)))))
            return -1;
          return 2814; /* *mulv2df3_mask_round */

        case 9:
          if (!(
#line 444 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 2801 "../../gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 479 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16))))
            return -1;
          return 2822; /* avx512fp16_vmmulv8hf3_round */

        case 10:
          if (!(
#line 444 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 2801 "../../gcc/config/i386/sse.md"
(TARGET_SSE)))
            return -1;
          return 2830; /* sse_vmmulv4sf3_round */

        case 11:
          if (!(
#line 444 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 2801 "../../gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 480 "../../gcc/config/i386/sse.md"
(TARGET_SSE2))))
            return -1;
          return 2838; /* sse2_vmmulv2df3_round */

        default:
          return -1;
        }

    case DIV:
      x5 = XEXP (x4, 0);
      operands[1] = x5;
      x6 = XEXP (x4, 1);
      operands[2] = x6;
      x7 = XVECEXP (x2, 0, 1);
      if (!const_4_or_8_to_11_operand (x7, E_SImode))
        return -1;
      x8 = XEXP (x3, 2);
      switch (GET_CODE (x8))
        {
        case CONST_INT:
          switch (pattern648 (x2))
            {
            case 0:
              if (!(
#line 444 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 2801 "../../gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 479 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16))))
                return -1;
              return 2826; /* avx512fp16_vmdivv8hf3_round */

            case 1:
              if (!(
#line 444 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 2801 "../../gcc/config/i386/sse.md"
(TARGET_SSE)))
                return -1;
              return 2834; /* sse_vmdivv4sf3_round */

            case 2:
              if (!(
#line 444 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 2801 "../../gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 480 "../../gcc/config/i386/sse.md"
(TARGET_SSE2))))
                return -1;
              return 2842; /* sse2_vmdivv2df3_round */

            default:
              return -1;
            }

        case REG:
        case SUBREG:
          switch (pattern650 (x2))
            {
            case 0:
              if (!(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 2899 "../../gcc/config/i386/sse.md"
(TARGET_SSE && (64 == 64 || TARGET_AVX512VL) && ((V32HFmode == V16SFmode
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
(TARGET_AVX512FP16 && TARGET_EVEX512)))))
                return -1;
              return 2848; /* avx512fp16_divv32hf3_mask_round */

            case 1:
              if (!(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 2899 "../../gcc/config/i386/sse.md"
(TARGET_SSE && (32 == 64 || TARGET_AVX512VL) && ((V16HFmode == V16SFmode
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
(TARGET_AVX512FP16 && TARGET_AVX512VL)))))
                return -1;
              return 2852; /* avx512fp16_divv16hf3_mask_round */

            case 2:
              if (!(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 2899 "../../gcc/config/i386/sse.md"
(TARGET_SSE && (64 == 64 || TARGET_AVX512VL) && ((V16SFmode == V16SFmode
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
(TARGET_AVX512F && TARGET_EVEX512)))))
                return -1;
              return 2858; /* avx512f_divv16sf3_mask_round */

            case 3:
              if (!(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 2899 "../../gcc/config/i386/sse.md"
(TARGET_SSE && (32 == 64 || TARGET_AVX512VL) && ((V8SFmode == V16SFmode
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
(TARGET_AVX)))))
                return -1;
              return 2862; /* avx_divv8sf3_mask_round */

            case 4:
              if (!(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 2899 "../../gcc/config/i386/sse.md"
(TARGET_SSE && (64 == 64 || TARGET_AVX512VL) && ((V8DFmode == V16SFmode
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
(TARGET_AVX512F && TARGET_EVEX512)))))
                return -1;
              return 2868; /* avx512f_divv8df3_mask_round */

            case 5:
              if (!(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 2899 "../../gcc/config/i386/sse.md"
(TARGET_SSE && (32 == 64 || TARGET_AVX512VL) && ((V4DFmode == V16SFmode
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
(TARGET_AVX)))))
                return -1;
              return 2872; /* avx_divv4df3_mask_round */

            default:
              return -1;
            }

        default:
          return -1;
        }

    case SQRT:
      x5 = XEXP (x4, 0);
      operands[1] = x5;
      x9 = XEXP (x3, 1);
      operands[2] = x9;
      x7 = XVECEXP (x2, 0, 1);
      if (!const_4_or_8_to_11_operand (x7, E_SImode))
        return -1;
      x8 = XEXP (x3, 2);
      switch (GET_CODE (x8))
        {
        case REG:
        case SUBREG:
          operands[3] = x8;
          operands[4] = x7;
          switch (GET_MODE (operands[0]))
            {
            case E_V32HFmode:
              if (pattern1401 (x2, 
E_V32HFmode, 
E_SImode) != 0
                  || !(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 3065 "../../gcc/config/i386/sse.md"
(TARGET_SSE && (64 == 64 || TARGET_AVX512VL) && ((V32HFmode == V16SFmode
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
(TARGET_AVX512FP16 && TARGET_EVEX512)))))
                return -1;
              return 2907; /* avx512fp16_sqrtv32hf2_mask_round */

            case E_V16HFmode:
              if (pattern1401 (x2, 
E_V16HFmode, 
E_HImode) != 0
                  || !(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 3065 "../../gcc/config/i386/sse.md"
(TARGET_SSE && (32 == 64 || TARGET_AVX512VL) && ((V16HFmode == V16SFmode
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
(TARGET_AVX512FP16 && TARGET_AVX512VL)))))
                return -1;
              return 2911; /* avx512fp16_sqrtv16hf2_mask_round */

            case E_V16SFmode:
              if (pattern1401 (x2, 
E_V16SFmode, 
E_HImode) != 0
                  || !(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 3065 "../../gcc/config/i386/sse.md"
(TARGET_SSE && (64 == 64 || TARGET_AVX512VL) && ((V16SFmode == V16SFmode
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
(TARGET_AVX512F && TARGET_EVEX512)))))
                return -1;
              return 2917; /* avx512f_sqrtv16sf2_mask_round */

            case E_V8SFmode:
              if (pattern1401 (x2, 
E_V8SFmode, 
E_QImode) != 0
                  || !(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 3065 "../../gcc/config/i386/sse.md"
(TARGET_SSE && (32 == 64 || TARGET_AVX512VL) && ((V8SFmode == V16SFmode
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
(TARGET_AVX)))))
                return -1;
              return 2921; /* avx_sqrtv8sf2_mask_round */

            case E_V8DFmode:
              if (pattern1401 (x2, 
E_V8DFmode, 
E_QImode) != 0
                  || !(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 3065 "../../gcc/config/i386/sse.md"
(TARGET_SSE && (64 == 64 || TARGET_AVX512VL) && ((V8DFmode == V16SFmode
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
(TARGET_AVX512F && TARGET_EVEX512)))))
                return -1;
              return 2927; /* avx512f_sqrtv8df2_mask_round */

            case E_V4DFmode:
              if (pattern1401 (x2, 
E_V4DFmode, 
E_QImode) != 0
                  || !(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 3065 "../../gcc/config/i386/sse.md"
(TARGET_SSE && (32 == 64 || TARGET_AVX512VL) && ((V4DFmode == V16SFmode
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
(TARGET_AVX)))))
                return -1;
              return 2931; /* avx_sqrtv4df2_mask_round */

            default:
              return -1;
            }

        case CONST_INT:
          if (XWINT (x8, 0) != 1L)
            return -1;
          operands[3] = x7;
          switch (GET_MODE (operands[0]))
            {
            case E_V8HFmode:
              if (pattern1402 (x2, 
E_V8HFmode) != 0
                  || !(
#line 444 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 3083 "../../gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 479 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16))))
                return -1;
              return 2935; /* avx512fp16_vmsqrtv8hf2_round */

            case E_V4SFmode:
              if (pattern1402 (x2, 
E_V4SFmode) != 0
                  || !(
#line 444 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 3083 "../../gcc/config/i386/sse.md"
(TARGET_SSE)))
                return -1;
              return 2939; /* sse_vmsqrtv4sf2_round */

            case E_V2DFmode:
              if (pattern1402 (x2, 
E_V2DFmode) != 0
                  || !(
#line 444 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 3083 "../../gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 480 "../../gcc/config/i386/sse.md"
(TARGET_SSE2))))
                return -1;
              return 2943; /* sse2_vmsqrtv2df2_round */

            default:
              return -1;
            }

        default:
          return -1;
        }

    case VEC_DUPLICATE:
      return recog_225 (x1, insn, pnum_clobbers);

    case SMAX:
      switch (pattern651 (x2))
        {
        case 0:
          if (!(
#line 286 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 3306 "../../gcc/config/i386/sse.md"
(TARGET_SSE
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))
   && (64 == 64 || TARGET_AVX512VL)
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
(TARGET_AVX512FP16 && TARGET_EVEX512)))))
            return -1;
          return 2991; /* *smaxv32hf3_mask_round */

        case 1:
          if (!(
#line 286 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 3306 "../../gcc/config/i386/sse.md"
(TARGET_SSE
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))
   && (32 == 64 || TARGET_AVX512VL)
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
(TARGET_AVX512FP16 && TARGET_AVX512VL)))))
            return -1;
          return 2999; /* *smaxv16hf3_mask_round */

        case 2:
          if (!(
#line 286 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 3306 "../../gcc/config/i386/sse.md"
(TARGET_SSE
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))
   && (64 == 64 || TARGET_AVX512VL)
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
(TARGET_AVX512F && TARGET_EVEX512)))))
            return -1;
          return 3011; /* *smaxv16sf3_mask_round */

        case 3:
          if (!(
#line 286 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 3306 "../../gcc/config/i386/sse.md"
(TARGET_SSE
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))
   && (32 == 64 || TARGET_AVX512VL)
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
(TARGET_AVX)))))
            return -1;
          return 3019; /* *smaxv8sf3_mask_round */

        case 4:
          if (!(
#line 286 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 3306 "../../gcc/config/i386/sse.md"
(TARGET_SSE
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))
   && (64 == 64 || TARGET_AVX512VL)
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
(TARGET_AVX512F && TARGET_EVEX512)))))
            return -1;
          return 3031; /* *smaxv8df3_mask_round */

        case 5:
          if (!(
#line 286 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 3306 "../../gcc/config/i386/sse.md"
(TARGET_SSE
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))
   && (32 == 64 || TARGET_AVX512VL)
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
(TARGET_AVX)))))
            return -1;
          return 3039; /* *smaxv4df3_mask_round */

        case 6:
          if (!(
#line 486 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 3467 "../../gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 479 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16))))
            return -1;
          return 3129; /* *avx512fp16_vmsmaxv8hf3_round */

        case 7:
          if (!(
#line 486 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 3467 "../../gcc/config/i386/sse.md"
(TARGET_SSE)))
            return -1;
          return 3137; /* *sse_vmsmaxv4sf3_round */

        case 8:
          if (!(
#line 486 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 3467 "../../gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 480 "../../gcc/config/i386/sse.md"
(TARGET_SSE2))))
            return -1;
          return 3145; /* *sse2_vmsmaxv2df3_round */

        default:
          return -1;
        }

    case SMIN:
      switch (pattern651 (x2))
        {
        case 0:
          if (!(
#line 286 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 3306 "../../gcc/config/i386/sse.md"
(TARGET_SSE
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))
   && (64 == 64 || TARGET_AVX512VL)
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
(TARGET_AVX512FP16 && TARGET_EVEX512)))))
            return -1;
          return 2995; /* *sminv32hf3_mask_round */

        case 1:
          if (!(
#line 286 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 3306 "../../gcc/config/i386/sse.md"
(TARGET_SSE
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))
   && (32 == 64 || TARGET_AVX512VL)
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
(TARGET_AVX512FP16 && TARGET_AVX512VL)))))
            return -1;
          return 3003; /* *sminv16hf3_mask_round */

        case 2:
          if (!(
#line 286 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 3306 "../../gcc/config/i386/sse.md"
(TARGET_SSE
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))
   && (64 == 64 || TARGET_AVX512VL)
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
(TARGET_AVX512F && TARGET_EVEX512)))))
            return -1;
          return 3015; /* *sminv16sf3_mask_round */

        case 3:
          if (!(
#line 286 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 3306 "../../gcc/config/i386/sse.md"
(TARGET_SSE
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))
   && (32 == 64 || TARGET_AVX512VL)
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
(TARGET_AVX)))))
            return -1;
          return 3023; /* *sminv8sf3_mask_round */

        case 4:
          if (!(
#line 286 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 3306 "../../gcc/config/i386/sse.md"
(TARGET_SSE
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))
   && (64 == 64 || TARGET_AVX512VL)
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
(TARGET_AVX512F && TARGET_EVEX512)))))
            return -1;
          return 3035; /* *sminv8df3_mask_round */

        case 5:
          if (!(
#line 286 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 3306 "../../gcc/config/i386/sse.md"
(TARGET_SSE
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))
   && (32 == 64 || TARGET_AVX512VL)
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
(TARGET_AVX)))))
            return -1;
          return 3043; /* *sminv4df3_mask_round */

        case 6:
          if (!(
#line 486 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 3467 "../../gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 479 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16))))
            return -1;
          return 3133; /* *avx512fp16_vmsminv8hf3_round */

        case 7:
          if (!(
#line 486 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 3467 "../../gcc/config/i386/sse.md"
(TARGET_SSE)))
            return -1;
          return 3141; /* *sse_vmsminv4sf3_round */

        case 8:
          if (!(
#line 486 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 3467 "../../gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 480 "../../gcc/config/i386/sse.md"
(TARGET_SSE2))))
            return -1;
          return 3149; /* *sse2_vmsminv2df3_round */

        default:
          return -1;
        }

    case UNSPEC:
      return recog_224 (x1, insn, pnum_clobbers);

    case FMA:
      return recog_223 (x1, insn, pnum_clobbers);

    case FLOAT:
      x5 = XEXP (x4, 0);
      operands[1] = x5;
      x9 = XEXP (x3, 1);
      operands[2] = x9;
      x8 = XEXP (x3, 2);
      operands[3] = x8;
      x7 = XVECEXP (x2, 0, 1);
      operands[4] = x7;
      if (!const_4_or_8_to_11_operand (operands[4], E_SImode))
        return -1;
      switch (GET_MODE (operands[0]))
        {
        case E_V16HFmode:
          switch (pattern1306 (x2))
            {
            case 0:
              if (!(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../gcc/config/i386/subst.md"
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
(TARGET_AVX512VL)))))
                return -1;
              return 4482; /* avx512fp16_vcvtw2ph_v16hi_mask_round */

            case 1:
              if (!(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../gcc/config/i386/subst.md"
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
(TARGET_EVEX512)))))
                return -1;
              return 4506; /* avx512fp16_vcvtdq2ph_v16si_mask_round */

            default:
              return -1;
            }

        case E_V32HFmode:
          if (pattern652 (x2, 
E_V32HFmode, 
E_V32HImode, 
E_SImode) != 0
              || !(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../gcc/config/i386/subst.md"
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
(TARGET_EVEX512)))))
            return -1;
          return 4490; /* avx512fp16_vcvtw2ph_v32hi_mask_round */

        case E_V8HFmode:
          switch (pattern1307 (x2))
            {
            case 0:
              if (!(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../gcc/config/i386/subst.md"
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
(TARGET_AVX512VL)))))
                return -1;
              return 4498; /* avx512fp16_vcvtdq2ph_v8si_mask_round */

            case 1:
              if (!(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../gcc/config/i386/subst.md"
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
(TARGET_EVEX512)))))
                return -1;
              return 4514; /* avx512fp16_vcvtqq2ph_v8di_mask_round */

            default:
              return -1;
            }

        case E_V16SFmode:
          if (pattern652 (x2, 
E_V16SFmode, 
E_V16SImode, 
E_HImode) != 0
              || !(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 8637 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && (64 == 64 || TARGET_AVX512VL) && ((V16SFmode == V16SFmode
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
(TARGET_AVX512F && TARGET_EVEX512)))))
            return -1;
          return 4811; /* floatv16siv16sf2_mask_round */

        case E_V8SFmode:
          switch (pattern1308 (x2))
            {
            case 0:
              if (!register_operand (operands[1], E_V8SImode)
                  || !(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 8637 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && (32 == 64 || TARGET_AVX512VL) && ((V8SFmode == V16SFmode
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
(TARGET_AVX)))))
                return -1;
              return 4815; /* floatv8siv8sf2_mask_round */

            case 1:
              if (!nonimmediate_operand (operands[1], E_V8DImode)
                  || !(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../gcc/config/i386/subst.md"
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
(TARGET_EVEX512)))))
                return -1;
              return 4969; /* floatv8div8sf2_mask_round */

            default:
              return -1;
            }

        case E_V8DFmode:
          if (pattern1309 (x2, 
E_V8DFmode, 
E_V8DImode, 
E_QImode) != 0
              || !(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../gcc/config/i386/subst.md"
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
(TARGET_EVEX512)))))
            return -1;
          return 4949; /* floatv8div8df2_mask_round */

        case E_V4DFmode:
          if (pattern1309 (x2, 
E_V4DFmode, 
E_V4DImode, 
E_QImode) != 0
              || !(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../gcc/config/i386/subst.md"
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
(TARGET_AVX512VL)))))
            return -1;
          return 4957; /* floatv4div4df2_mask_round */

        case E_V4SFmode:
          if (pattern1309 (x2, 
E_V4SFmode, 
E_V4DImode, 
E_QImode) != 0
              || !(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../gcc/config/i386/subst.md"
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
(TARGET_AVX512VL)))))
            return -1;
          return 4977; /* floatv4div4sf2_mask_round */

        default:
          return -1;
        }

    case UNSIGNED_FLOAT:
      x5 = XEXP (x4, 0);
      operands[1] = x5;
      x9 = XEXP (x3, 1);
      operands[2] = x9;
      x8 = XEXP (x3, 2);
      operands[3] = x8;
      x7 = XVECEXP (x2, 0, 1);
      operands[4] = x7;
      if (!const_4_or_8_to_11_operand (operands[4], E_SImode))
        return -1;
      switch (GET_MODE (operands[0]))
        {
        case E_V16HFmode:
          switch (pattern1306 (x2))
            {
            case 0:
              if (!(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../gcc/config/i386/subst.md"
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
(TARGET_AVX512VL)))))
                return -1;
              return 4486; /* avx512fp16_vcvtuw2ph_v16hi_mask_round */

            case 1:
              if (!(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../gcc/config/i386/subst.md"
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
(TARGET_EVEX512)))))
                return -1;
              return 4510; /* avx512fp16_vcvtudq2ph_v16si_mask_round */

            default:
              return -1;
            }

        case E_V32HFmode:
          if (pattern652 (x2, 
E_V32HFmode, 
E_V32HImode, 
E_SImode) != 0
              || !(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../gcc/config/i386/subst.md"
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
(TARGET_EVEX512)))))
            return -1;
          return 4494; /* avx512fp16_vcvtuw2ph_v32hi_mask_round */

        case E_V8HFmode:
          switch (pattern1307 (x2))
            {
            case 0:
              if (!(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../gcc/config/i386/subst.md"
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
(TARGET_AVX512VL)))))
                return -1;
              return 4502; /* avx512fp16_vcvtudq2ph_v8si_mask_round */

            case 1:
              if (!(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../gcc/config/i386/subst.md"
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
(TARGET_EVEX512)))))
                return -1;
              return 4518; /* avx512fp16_vcvtuqq2ph_v8di_mask_round */

            default:
              return -1;
            }

        case E_V16SFmode:
          if (pattern1309 (x2, 
E_V16SFmode, 
E_V16SImode, 
E_HImode) != 0
              || !(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../gcc/config/i386/subst.md"
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
(TARGET_EVEX512)))))
            return -1;
          return 4821; /* floatunsv16siv16sf2_mask_round */

        case E_V8SFmode:
          switch (pattern1308 (x2))
            {
            case 0:
              if (!nonimmediate_operand (operands[1], E_V8SImode)
                  || !(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../gcc/config/i386/subst.md"
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
(TARGET_AVX512VL)))))
                return -1;
              return 4825; /* floatunsv8siv8sf2_mask_round */

            case 1:
              if (!nonimmediate_operand (operands[1], E_V8DImode)
                  || !(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../gcc/config/i386/subst.md"
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
(TARGET_EVEX512)))))
                return -1;
              return 4973; /* floatunsv8div8sf2_mask_round */

            default:
              return -1;
            }

        case E_V8DFmode:
          if (pattern1309 (x2, 
E_V8DFmode, 
E_V8DImode, 
E_QImode) != 0
              || !(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../gcc/config/i386/subst.md"
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
(TARGET_EVEX512)))))
            return -1;
          return 4953; /* floatunsv8div8df2_mask_round */

        case E_V4DFmode:
          if (pattern1309 (x2, 
E_V4DFmode, 
E_V4DImode, 
E_QImode) != 0
              || !(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../gcc/config/i386/subst.md"
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
(TARGET_AVX512VL)))))
            return -1;
          return 4961; /* floatunsv4div4df2_mask_round */

        case E_V4SFmode:
          if (pattern1309 (x2, 
E_V4SFmode, 
E_V4DImode, 
E_QImode) != 0
              || !(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../gcc/config/i386/subst.md"
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
(TARGET_AVX512VL)))))
            return -1;
          return 4981; /* floatunsv4div4sf2_mask_round */

        default:
          return -1;
        }

    case FIX:
      switch (pattern654 (x2))
        {
        case 0:
          if (!(
#line 286 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../gcc/config/i386/subst.md"
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
(TARGET_AVX512VL)))))
            return -1;
          return 4610; /* avx512fp16_fix_truncv16hi2_mask_round */

        case 1:
          if (!(
#line 286 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../gcc/config/i386/subst.md"
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
(TARGET_EVEX512)))))
            return -1;
          return 4618; /* avx512fp16_fix_truncv32hi2_mask_round */

        case 2:
          if (!(
#line 286 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../gcc/config/i386/subst.md"
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
(TARGET_AVX512VL)))))
            return -1;
          return 4626; /* avx512fp16_fix_truncv8si2_mask_round */

        case 3:
          if (!(
#line 286 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 9568 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512))))
            return -1;
          return 5032; /* fix_truncv8dfv8si2_mask_round */

        case 4:
          if (!(
#line 286 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../gcc/config/i386/subst.md"
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
(TARGET_EVEX512)))))
            return -1;
          return 4634; /* avx512fp16_fix_truncv16si2_mask_round */

        case 5:
          if (!(
#line 286 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 8773 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512))))
            return -1;
          return 4879; /* fix_truncv16sfv16si2_mask_round */

        case 6:
          if (!(
#line 286 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../gcc/config/i386/subst.md"
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
(TARGET_EVEX512)))))
            return -1;
          return 4642; /* avx512fp16_fix_truncv8di2_mask_round */

        case 7:
          if (!(
#line 286 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../gcc/config/i386/subst.md"
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
(TARGET_EVEX512)))))
            return -1;
          return 5077; /* fix_truncv8dfv8di2_mask_round */

        case 8:
          if (!(
#line 286 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../gcc/config/i386/subst.md"
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
(TARGET_AVX512VL)))))
            return -1;
          return 5085; /* fix_truncv4dfv4di2_mask_round */

        default:
          return -1;
        }

    case UNSIGNED_FIX:
      switch (pattern654 (x2))
        {
        case 0:
          if (!(
#line 286 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../gcc/config/i386/subst.md"
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
(TARGET_AVX512VL)))))
            return -1;
          return 4614; /* avx512fp16_fixuns_truncv16hi2_mask_round */

        case 1:
          if (!(
#line 286 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../gcc/config/i386/subst.md"
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
(TARGET_EVEX512)))))
            return -1;
          return 4622; /* avx512fp16_fixuns_truncv32hi2_mask_round */

        case 2:
          if (!(
#line 286 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../gcc/config/i386/subst.md"
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
(TARGET_AVX512VL)))))
            return -1;
          return 4630; /* avx512fp16_fixuns_truncv8si2_mask_round */

        case 3:
          if (!(
#line 286 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 9568 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512))))
            return -1;
          return 5036; /* fixuns_truncv8dfv8si2_mask_round */

        case 4:
          if (!(
#line 286 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../gcc/config/i386/subst.md"
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
(TARGET_EVEX512)))))
            return -1;
          return 4638; /* avx512fp16_fixuns_truncv16si2_mask_round */

        case 5:
          if (!(
#line 286 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 8773 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512))))
            return -1;
          return 4883; /* fixuns_truncv16sfv16si2_mask_round */

        case 6:
          if (!(
#line 286 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../gcc/config/i386/subst.md"
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
(TARGET_EVEX512)))))
            return -1;
          return 4646; /* avx512fp16_fixuns_truncv8di2_mask_round */

        case 7:
          if (!(
#line 286 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../gcc/config/i386/subst.md"
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
(TARGET_EVEX512)))))
            return -1;
          return 5081; /* fixuns_truncv8dfv8di2_mask_round */

        case 8:
          if (!(
#line 286 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../gcc/config/i386/subst.md"
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
(TARGET_AVX512VL)))))
            return -1;
          return 5089; /* fixuns_truncv4dfv4di2_mask_round */

        default:
          return -1;
        }

    case FLOAT_EXTEND:
      return recog_226 (x1, insn, pnum_clobbers);

    case FLOAT_TRUNCATE:
      x5 = XEXP (x4, 0);
      operands[1] = x5;
      x9 = XEXP (x3, 1);
      operands[2] = x9;
      x8 = XEXP (x3, 2);
      operands[3] = x8;
      x7 = XVECEXP (x2, 0, 1);
      operands[4] = x7;
      if (!const_4_or_8_to_11_operand (operands[4], E_SImode))
        return -1;
      switch (GET_MODE (operands[0]))
        {
        case E_V8HFmode:
          if (pattern1310 (x2, 
E_QImode, 
E_V8HFmode) != 0)
            return -1;
          switch (GET_MODE (operands[1]))
            {
            case E_V8DFmode:
              if (!register_operand (operands[1], E_V8DFmode)
                  || !(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../gcc/config/i386/subst.md"
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
(TARGET_EVEX512)))))
                return -1;
              return 4736; /* avx512fp16_vcvtpd2ph_v8df_mask_round */

            case E_V8SFmode:
              if (!register_operand (operands[1], E_V8SFmode)
                  || !(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../gcc/config/i386/subst.md"
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
(TARGET_AVX512VL)))))
                return -1;
              return 4744; /* avx512fp16_vcvtps2ph_v8sf_mask_round */

            default:
              return -1;
            }

        case E_V16HFmode:
          if (pattern652 (x2, 
E_V16HFmode, 
E_V16SFmode, 
E_HImode) != 0
              || !(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../gcc/config/i386/subst.md"
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
(TARGET_EVEX512)))))
            return -1;
          return 4740; /* avx512fp16_vcvtps2ph_v16sf_mask_round */

        case E_V8SFmode:
          if (pattern652 (x2, 
E_V8SFmode, 
E_V8DFmode, 
E_QImode) != 0
              || !(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 10086 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512))))
            return -1;
          return 5174; /* avx512f_cvtpd2ps512_mask_round */

        case E_V4SFmode:
          if (pattern652 (x2, 
E_V4SFmode, 
E_V4DFmode, 
E_QImode) != 0
              || !(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 10096 "../../gcc/config/i386/sse.md"
(TARGET_AVX && TARGET_AVX512VL
   && (!true || TARGET_AVX10_2_256)))))
            return -1;
          return 5178; /* avx_cvtpd2ps256_mask_round */

        default:
          return -1;
        }

    case VEC_CONCAT:
      x5 = XEXP (x4, 0);
      if (GET_CODE (x5) != FLOAT_TRUNCATE)
        return -1;
      x6 = XEXP (x4, 1);
      if (GET_CODE (x6) != FLOAT_TRUNCATE)
        return -1;
      x10 = XEXP (x5, 0);
      operands[2] = x10;
      x11 = XEXP (x6, 0);
      operands[1] = x11;
      x9 = XEXP (x3, 1);
      operands[3] = x9;
      x8 = XEXP (x3, 2);
      operands[4] = x8;
      x7 = XVECEXP (x2, 0, 1);
      operands[5] = x7;
      if (!const_4_or_8_to_11_operand (operands[5], E_SImode))
        return -1;
      switch (GET_MODE (operands[0]))
        {
        case E_V32HFmode:
          if (pattern1519 (x2, 
E_SImode, 
E_V32HFmode, 
E_V16SFmode, 
E_V16HFmode) != 0
              || !(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 31706 "../../gcc/config/i386/sse.md"
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
          return 10436; /* avx10_2_cvt2ps2phx_v32hf_mask_round */

        case E_V16HFmode:
          if (pattern1519 (x2, 
E_HImode, 
E_V16HFmode, 
E_V8SFmode, 
E_V8HFmode) != 0
              || !(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 31706 "../../gcc/config/i386/sse.md"
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
          return 10440; /* avx10_2_cvt2ps2phx_v16hf_mask_round */

        default:
          return -1;
        }

    default:
      return -1;
    }
}

 int
recog_283 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12, x13, x14, x15, x16, x17;
  rtx x18, x19, x20, x21, x22, x23, x24, x25;
  rtx x26, x27, x28, x29, x30, x31, x32, x33;
  rtx x34, x35, x36, x37;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  if (pattern673 (x3) != 0)
    return -1;
  x4 = XEXP (x2, 0);
  x5 = XEXP (x4, 1);
  operands[2] = x5;
  x6 = XVECEXP (x3, 0, 0);
  switch (XWINT (x6, 0))
    {
    case 8L:
      x7 = XVECEXP (x3, 0, 1);
      if (XWINT (x7, 0) != 40L)
        return -1;
      x8 = XVECEXP (x3, 0, 2);
      if (XWINT (x8, 0) != 9L)
        return -1;
      x9 = XVECEXP (x3, 0, 3);
      if (XWINT (x9, 0) != 41L)
        return -1;
      x10 = XVECEXP (x3, 0, 4);
      if (XWINT (x10, 0) != 10L)
        return -1;
      x11 = XVECEXP (x3, 0, 5);
      if (XWINT (x11, 0) != 42L)
        return -1;
      x12 = XVECEXP (x3, 0, 6);
      if (XWINT (x12, 0) != 11L)
        return -1;
      x13 = XVECEXP (x3, 0, 7);
      if (XWINT (x13, 0) != 43L
          || pattern1879 (x3) != 0)
        return -1;
      x14 = XVECEXP (x3, 0, 16);
      if (XWINT (x14, 0) != 24L)
        return -1;
      x15 = XVECEXP (x3, 0, 17);
      if (XWINT (x15, 0) != 56L)
        return -1;
      x16 = XVECEXP (x3, 0, 18);
      if (XWINT (x16, 0) != 25L)
        return -1;
      x17 = XVECEXP (x3, 0, 19);
      if (XWINT (x17, 0) != 57L)
        return -1;
      x18 = XVECEXP (x3, 0, 20);
      if (XWINT (x18, 0) != 26L)
        return -1;
      x19 = XVECEXP (x3, 0, 21);
      if (XWINT (x19, 0) != 58L)
        return -1;
      x20 = XVECEXP (x3, 0, 22);
      if (XWINT (x20, 0) != 27L)
        return -1;
      x21 = XVECEXP (x3, 0, 23);
      if (XWINT (x21, 0) != 59L
          || pattern1885 (x3) != 0
          || pattern1414 (x2, 
E_V32QImode, 
E_V64QImode) != 0
          || !
#line 19452 "../../gcc/config/i386/sse.md"
(TARGET_AVX2 && 1 && 1))
        return -1;
      return 8318; /* avx2_interleave_highv32qi */

    case 0L:
      x7 = XVECEXP (x3, 0, 1);
      if (XWINT (x7, 0) != 32L)
        return -1;
      x8 = XVECEXP (x3, 0, 2);
      if (XWINT (x8, 0) != 1L)
        return -1;
      x9 = XVECEXP (x3, 0, 3);
      if (XWINT (x9, 0) != 33L)
        return -1;
      x10 = XVECEXP (x3, 0, 4);
      if (XWINT (x10, 0) != 2L)
        return -1;
      x11 = XVECEXP (x3, 0, 5);
      if (XWINT (x11, 0) != 34L)
        return -1;
      x12 = XVECEXP (x3, 0, 6);
      if (XWINT (x12, 0) != 3L)
        return -1;
      x13 = XVECEXP (x3, 0, 7);
      if (XWINT (x13, 0) != 35L)
        return -1;
      x14 = XVECEXP (x3, 0, 16);
      if (XWINT (x14, 0) != 16L)
        return -1;
      x15 = XVECEXP (x3, 0, 17);
      if (XWINT (x15, 0) != 48L)
        return -1;
      x16 = XVECEXP (x3, 0, 18);
      if (XWINT (x16, 0) != 17L)
        return -1;
      x17 = XVECEXP (x3, 0, 19);
      if (XWINT (x17, 0) != 49L)
        return -1;
      x18 = XVECEXP (x3, 0, 20);
      if (XWINT (x18, 0) != 18L)
        return -1;
      x19 = XVECEXP (x3, 0, 21);
      if (XWINT (x19, 0) != 50L)
        return -1;
      x20 = XVECEXP (x3, 0, 22);
      if (XWINT (x20, 0) != 19L)
        return -1;
      x21 = XVECEXP (x3, 0, 23);
      if (XWINT (x21, 0) != 51L)
        return -1;
      x22 = XVECEXP (x3, 0, 8);
      switch (XWINT (x22, 0))
        {
        case 4L:
          x23 = XVECEXP (x3, 0, 9);
          if (XWINT (x23, 0) != 36L)
            return -1;
          x24 = XVECEXP (x3, 0, 10);
          if (XWINT (x24, 0) != 5L)
            return -1;
          x25 = XVECEXP (x3, 0, 11);
          if (XWINT (x25, 0) != 37L)
            return -1;
          x26 = XVECEXP (x3, 0, 12);
          if (XWINT (x26, 0) != 6L)
            return -1;
          x27 = XVECEXP (x3, 0, 13);
          if (XWINT (x27, 0) != 38L)
            return -1;
          x28 = XVECEXP (x3, 0, 14);
          if (XWINT (x28, 0) != 7L)
            return -1;
          x29 = XVECEXP (x3, 0, 15);
          if (XWINT (x29, 0) != 39L)
            return -1;
          x30 = XVECEXP (x3, 0, 24);
          if (XWINT (x30, 0) != 20L)
            return -1;
          x31 = XVECEXP (x3, 0, 25);
          if (XWINT (x31, 0) != 52L)
            return -1;
          x32 = XVECEXP (x3, 0, 26);
          if (XWINT (x32, 0) != 21L)
            return -1;
          x33 = XVECEXP (x3, 0, 27);
          if (XWINT (x33, 0) != 53L)
            return -1;
          x34 = XVECEXP (x3, 0, 28);
          if (XWINT (x34, 0) != 22L)
            return -1;
          x35 = XVECEXP (x3, 0, 29);
          if (XWINT (x35, 0) != 54L)
            return -1;
          x36 = XVECEXP (x3, 0, 30);
          if (XWINT (x36, 0) != 23L)
            return -1;
          x37 = XVECEXP (x3, 0, 31);
          if (XWINT (x37, 0) != 55L
              || pattern1414 (x2, 
E_V32QImode, 
E_V64QImode) != 0
              || !
#line 19548 "../../gcc/config/i386/sse.md"
(TARGET_AVX2 && 1 && 1))
            return -1;
          return 8324; /* avx2_interleave_lowv32qi */

        case 8L:
          x23 = XVECEXP (x3, 0, 9);
          if (XWINT (x23, 0) != 40L)
            return -1;
          x24 = XVECEXP (x3, 0, 10);
          if (XWINT (x24, 0) != 9L)
            return -1;
          x25 = XVECEXP (x3, 0, 11);
          if (XWINT (x25, 0) != 41L)
            return -1;
          x26 = XVECEXP (x3, 0, 12);
          if (XWINT (x26, 0) != 10L)
            return -1;
          x27 = XVECEXP (x3, 0, 13);
          if (XWINT (x27, 0) != 42L)
            return -1;
          x28 = XVECEXP (x3, 0, 14);
          if (XWINT (x28, 0) != 11L)
            return -1;
          x29 = XVECEXP (x3, 0, 15);
          if (XWINT (x29, 0) != 43L)
            return -1;
          x30 = XVECEXP (x3, 0, 24);
          if (XWINT (x30, 0) != 24L)
            return -1;
          x31 = XVECEXP (x3, 0, 25);
          if (XWINT (x31, 0) != 56L)
            return -1;
          x32 = XVECEXP (x3, 0, 26);
          if (XWINT (x32, 0) != 25L)
            return -1;
          x33 = XVECEXP (x3, 0, 27);
          if (XWINT (x33, 0) != 57L)
            return -1;
          x34 = XVECEXP (x3, 0, 28);
          if (XWINT (x34, 0) != 26L)
            return -1;
          x35 = XVECEXP (x3, 0, 29);
          if (XWINT (x35, 0) != 58L)
            return -1;
          x36 = XVECEXP (x3, 0, 30);
          if (XWINT (x36, 0) != 27L)
            return -1;
          x37 = XVECEXP (x3, 0, 31);
          if (XWINT (x37, 0) != 59L)
            return -1;
          switch (GET_MODE (operands[0]))
            {
            case E_V32HImode:
              if (pattern1414 (x2, 
E_V32HImode, 
E_V64HImode) != 0
                  || !(
#line 19668 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 1033 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                return -1;
              return 8346; /* *avx512bw_interleave_lowv32hi */

            case E_V32HFmode:
              if (pattern1414 (x2, 
E_V32HFmode, 
E_V64HFmode) != 0
                  || !(
#line 19668 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 1033 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                return -1;
              return 8348; /* *avx512bw_interleave_lowv32hf */

            case E_V32BFmode:
              if (pattern1414 (x2, 
E_V32BFmode, 
E_V64BFmode) != 0
                  || !(
#line 19668 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 1033 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                return -1;
              return 8350; /* *avx512bw_interleave_lowv32bf */

            default:
              return -1;
            }

        default:
          return -1;
        }

    case 4L:
      x7 = XVECEXP (x3, 0, 1);
      if (XWINT (x7, 0) != 36L)
        return -1;
      x8 = XVECEXP (x3, 0, 2);
      if (XWINT (x8, 0) != 5L)
        return -1;
      x9 = XVECEXP (x3, 0, 3);
      if (XWINT (x9, 0) != 37L)
        return -1;
      x10 = XVECEXP (x3, 0, 4);
      if (XWINT (x10, 0) != 6L)
        return -1;
      x11 = XVECEXP (x3, 0, 5);
      if (XWINT (x11, 0) != 38L)
        return -1;
      x12 = XVECEXP (x3, 0, 6);
      if (XWINT (x12, 0) != 7L)
        return -1;
      x13 = XVECEXP (x3, 0, 7);
      if (XWINT (x13, 0) != 39L
          || pattern1879 (x3) != 0)
        return -1;
      x14 = XVECEXP (x3, 0, 16);
      if (XWINT (x14, 0) != 20L)
        return -1;
      x15 = XVECEXP (x3, 0, 17);
      if (XWINT (x15, 0) != 52L)
        return -1;
      x16 = XVECEXP (x3, 0, 18);
      if (XWINT (x16, 0) != 21L)
        return -1;
      x17 = XVECEXP (x3, 0, 19);
      if (XWINT (x17, 0) != 53L)
        return -1;
      x18 = XVECEXP (x3, 0, 20);
      if (XWINT (x18, 0) != 22L)
        return -1;
      x19 = XVECEXP (x3, 0, 21);
      if (XWINT (x19, 0) != 54L)
        return -1;
      x20 = XVECEXP (x3, 0, 22);
      if (XWINT (x20, 0) != 23L)
        return -1;
      x21 = XVECEXP (x3, 0, 23);
      if (XWINT (x21, 0) != 55L
          || pattern1885 (x3) != 0)
        return -1;
      switch (GET_MODE (operands[0]))
        {
        case E_V32HImode:
          if (pattern1414 (x2, 
E_V32HImode, 
E_V64HImode) != 0
              || !(
#line 19600 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 1033 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return -1;
          return 8328; /* avx512bw_interleave_highv32hi */

        case E_V32HFmode:
          if (pattern1414 (x2, 
E_V32HFmode, 
E_V64HFmode) != 0
              || !(
#line 19600 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 1033 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return -1;
          return 8330; /* avx512bw_interleave_highv32hf */

        case E_V32BFmode:
          if (pattern1414 (x2, 
E_V32BFmode, 
E_V64BFmode) != 0
              || !(
#line 19600 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 1033 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return -1;
          return 8332; /* avx512bw_interleave_highv32bf */

        default:
          return -1;
        }

    default:
      return -1;
    }
}

 int
recog_299 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) != PARALLEL)
    return -1;
  x5 = XEXP (x3, 0);
  operands[1] = x5;
  switch (XVECLEN (x4, 0))
    {
    case 1:
      x6 = XVECEXP (x4, 0, 0);
      if (x6 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
        return -1;
      switch (GET_MODE (operands[0]))
        {
        case E_V8SFmode:
          if (!register_operand (operands[0], E_V8SFmode)
              || GET_MODE (x2) != E_V8SFmode
              || GET_MODE (x3) != E_SFmode)
            return -1;
          switch (GET_MODE (operands[1]))
            {
            case E_V4SFmode:
              if (register_operand (operands[1], E_V4SFmode)
                  && (
#line 11713 "../../gcc/config/i386/sse.md"
(TARGET_AVX2) && 
#line 441 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
                return 5279; /* avx2_vec_dupv8sf */
              if (!nonimmediate_operand (operands[1], E_V4SFmode)
                  || !(
#line 27713 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 297 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                return -1;
              return 9196; /* avx512vl_vec_dupv8sf */

            case E_V8SFmode:
              if (!register_operand (operands[1], E_V8SFmode)
                  || !
#line 11725 "../../gcc/config/i386/sse.md"
(TARGET_AVX2))
                return -1;
              return 5281; /* avx2_vec_dupv8sf_1 */

            default:
              return -1;
            }

        case E_V4SFmode:
          if (!register_operand (operands[0], E_V4SFmode)
              || GET_MODE (x2) != E_V4SFmode
              || GET_MODE (x3) != E_SFmode)
            return -1;
          if (register_operand (operands[1], E_V4SFmode)
              && 
#line 11713 "../../gcc/config/i386/sse.md"
(TARGET_AVX2))
            return 5280; /* avx2_vec_dupv4sf */
          if (!nonimmediate_operand (operands[1], E_V4SFmode)
              || !(
#line 27713 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 297 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 9198; /* avx512vl_vec_dupv4sf */

        case E_V16SFmode:
          if (!register_operand (operands[0], E_V16SFmode)
              || GET_MODE (x2) != E_V16SFmode
              || GET_MODE (x3) != E_SFmode)
            return -1;
          switch (GET_MODE (operands[1]))
            {
            case E_V16SFmode:
              if (!register_operand (operands[1], E_V16SFmode)
                  || !(
#line 11737 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 488 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                return -1;
              return 5282; /* avx512f_vec_dupv16sf_1 */

            case E_V4SFmode:
              if (!nonimmediate_operand (operands[1], E_V4SFmode)
                  || !(
#line 27713 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 297 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                return -1;
              return 9194; /* avx512f_vec_dupv16sf */

            default:
              return -1;
            }

        case E_V8DFmode:
          if (!register_operand (operands[0], E_V8DFmode)
              || GET_MODE (x2) != E_V8DFmode
              || GET_MODE (x3) != E_DFmode)
            return -1;
          switch (GET_MODE (operands[1]))
            {
            case E_V8DFmode:
              if (!register_operand (operands[1], E_V8DFmode)
                  || !(
#line 11737 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 488 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                return -1;
              return 5283; /* avx512f_vec_dupv8df_1 */

            case E_V2DFmode:
              if (!nonimmediate_operand (operands[1], E_V2DFmode)
                  || !(
#line 27713 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 298 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                return -1;
              return 9200; /* avx512f_vec_dupv8df */

            default:
              return -1;
            }

        case E_V16SImode:
          if (!register_operand (operands[0], E_V16SImode)
              || GET_MODE (x2) != E_V16SImode
              || GET_MODE (x3) != E_SImode)
            return -1;
          switch (GET_MODE (operands[1]))
            {
            case E_V4SImode:
              if (!nonimmediate_operand (operands[1], E_V4SImode))
                return -1;
              if ((
#line 27282 "../../gcc/config/i386/sse.md"
(TARGET_AVX2) && 
#line 578 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
                return 9087; /* avx2_pbroadcastv16si */
              if (!(
#line 27713 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 295 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                return -1;
              return 9182; /* avx512f_vec_dupv16si */

            case E_V16SImode:
              if (!nonimmediate_operand (operands[1], E_V16SImode)
                  || !(
#line 27699 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 977 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                return -1;
              return 9176; /* avx512f_vec_dupv16si_1 */

            default:
              return -1;
            }

        case E_V8DImode:
          if (!register_operand (operands[0], E_V8DImode)
              || GET_MODE (x2) != E_V8DImode
              || GET_MODE (x3) != E_DImode)
            return -1;
          switch (GET_MODE (operands[1]))
            {
            case E_V2DImode:
              if (!nonimmediate_operand (operands[1], E_V2DImode))
                return -1;
              if ((
#line 27282 "../../gcc/config/i386/sse.md"
(TARGET_AVX2) && 
#line 579 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
                return 9088; /* avx2_pbroadcastv8di */
              if (!(
#line 27713 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 296 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                return -1;
              return 9188; /* avx512f_vec_dupv8di */

            case E_V8DImode:
              if (!nonimmediate_operand (operands[1], E_V8DImode)
                  || !(
#line 27699 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 977 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                return -1;
              return 9177; /* avx512f_vec_dupv8di_1 */

            default:
              return -1;
            }

        case E_V64QImode:
          if (!register_operand (operands[0], E_V64QImode)
              || GET_MODE (x2) != E_V64QImode
              || GET_MODE (x3) != E_QImode)
            return -1;
          switch (GET_MODE (operands[1]))
            {
            case E_V16QImode:
              if (!nonimmediate_operand (operands[1], E_V16QImode))
                return -1;
              if ((
#line 27282 "../../gcc/config/i386/sse.md"
(TARGET_AVX2) && 
#line 580 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512)))
                return 9089; /* avx2_pbroadcastv64qi */
              if (!(
#line 27732 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 322 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                return -1;
              return 9206; /* avx512bw_vec_dupv64qi */

            case E_V64QImode:
              if (!nonimmediate_operand (operands[1], E_V64QImode)
                  || !(
#line 27699 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 979 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512)))
                return -1;
              return 9179; /* avx512bw_vec_dupv64qi_1 */

            default:
              return -1;
            }

        case E_V32QImode:
          if (!register_operand (operands[0], E_V32QImode)
              || GET_MODE (x2) != E_V32QImode
              || GET_MODE (x3) != E_QImode)
            return -1;
          switch (GET_MODE (operands[1]))
            {
            case E_V16QImode:
              if (!nonimmediate_operand (operands[1], E_V16QImode))
                return -1;
              if ((
#line 27282 "../../gcc/config/i386/sse.md"
(TARGET_AVX2) && 
#line 580 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
                return 9090; /* avx2_pbroadcastv32qi */
              if (!(
#line 27732 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 322 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                return -1;
              return 9210; /* avx512vl_vec_dupv32qi */

            case E_V32QImode:
              if (!nonimmediate_operand (operands[1], E_V32QImode)
                  || !
#line 27296 "../../gcc/config/i386/sse.md"
(TARGET_AVX2))
                return -1;
              return 9105; /* avx2_pbroadcastv32qi_1 */

            default:
              return -1;
            }

        case E_V16QImode:
          if (pattern932 (x2, 
E_V16QImode, 
E_QImode) != 0)
            return -1;
          if (
#line 27282 "../../gcc/config/i386/sse.md"
(TARGET_AVX2))
            return 9091; /* avx2_pbroadcastv16qi */
          if (!(
#line 27732 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 322 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 9208; /* avx512vl_vec_dupv16qi */

        case E_V32HImode:
          if (!register_operand (operands[0], E_V32HImode)
              || GET_MODE (x2) != E_V32HImode
              || GET_MODE (x3) != E_HImode)
            return -1;
          switch (GET_MODE (operands[1]))
            {
            case E_V8HImode:
              if (!nonimmediate_operand (operands[1], E_V8HImode))
                return -1;
              if ((
#line 27282 "../../gcc/config/i386/sse.md"
(TARGET_AVX2) && 
#line 581 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512)))
                return 9092; /* avx2_pbroadcastv32hi */
              if (!(
#line 27732 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 323 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                return -1;
              return 9212; /* avx512bw_vec_dupv32hi */

            case E_V32HImode:
              if (!nonimmediate_operand (operands[1], E_V32HImode)
                  || !(
#line 27699 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 978 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512)))
                return -1;
              return 9178; /* avx512bw_vec_dupv32hi_1 */

            default:
              return -1;
            }

        case E_V16HImode:
          if (!register_operand (operands[0], E_V16HImode)
              || GET_MODE (x2) != E_V16HImode
              || GET_MODE (x3) != E_HImode)
            return -1;
          switch (GET_MODE (operands[1]))
            {
            case E_V8HImode:
              if (!nonimmediate_operand (operands[1], E_V8HImode))
                return -1;
              if ((
#line 27282 "../../gcc/config/i386/sse.md"
(TARGET_AVX2) && 
#line 581 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
                return 9093; /* avx2_pbroadcastv16hi */
              if (!(
#line 27732 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 323 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                return -1;
              return 9214; /* avx512vl_vec_dupv16hi */

            case E_V16HImode:
              if (!nonimmediate_operand (operands[1], E_V16HImode)
                  || !
#line 27296 "../../gcc/config/i386/sse.md"
(TARGET_AVX2))
                return -1;
              return 9106; /* avx2_pbroadcastv16hi_1 */

            default:
              return -1;
            }

        case E_V8HImode:
          if (pattern932 (x2, 
E_V8HImode, 
E_HImode) != 0)
            return -1;
          if (
#line 27282 "../../gcc/config/i386/sse.md"
(TARGET_AVX2))
            return 9094; /* avx2_pbroadcastv8hi */
          if (!(
#line 27732 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 323 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 9216; /* avx512vl_vec_dupv8hi */

        case E_V8SImode:
          if (!register_operand (operands[0], E_V8SImode)
              || GET_MODE (x2) != E_V8SImode
              || GET_MODE (x3) != E_SImode)
            return -1;
          switch (GET_MODE (operands[1]))
            {
            case E_V4SImode:
              if (!nonimmediate_operand (operands[1], E_V4SImode))
                return -1;
              if ((
#line 27282 "../../gcc/config/i386/sse.md"
(TARGET_AVX2) && 
#line 582 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
                return 9095; /* avx2_pbroadcastv8si */
              if (!(
#line 27713 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 295 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                return -1;
              return 9184; /* avx512vl_vec_dupv8si */

            case E_V8SImode:
              if (!nonimmediate_operand (operands[1], E_V8SImode)
                  || !
#line 27296 "../../gcc/config/i386/sse.md"
(TARGET_AVX2))
                return -1;
              return 9107; /* avx2_pbroadcastv8si_1 */

            default:
              return -1;
            }

        case E_V4SImode:
          if (pattern932 (x2, 
E_V4SImode, 
E_SImode) != 0)
            return -1;
          if (
#line 27282 "../../gcc/config/i386/sse.md"
(TARGET_AVX2))
            return 9096; /* avx2_pbroadcastv4si */
          if (!(
#line 27713 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 295 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 9186; /* avx512vl_vec_dupv4si */

        case E_V4DImode:
          if (!register_operand (operands[0], E_V4DImode)
              || GET_MODE (x2) != E_V4DImode
              || GET_MODE (x3) != E_DImode)
            return -1;
          switch (GET_MODE (operands[1]))
            {
            case E_V2DImode:
              if (!nonimmediate_operand (operands[1], E_V2DImode))
                return -1;
              if ((
#line 27282 "../../gcc/config/i386/sse.md"
(TARGET_AVX2) && 
#line 583 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
                return 9097; /* avx2_pbroadcastv4di */
              if (!(
#line 27713 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 296 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                return -1;
              return 9190; /* avx512vl_vec_dupv4di */

            case E_V4DImode:
              if (!nonimmediate_operand (operands[1], E_V4DImode)
                  || !
#line 27296 "../../gcc/config/i386/sse.md"
(TARGET_AVX2))
                return -1;
              return 9108; /* avx2_pbroadcastv4di_1 */

            default:
              return -1;
            }

        case E_V2DImode:
          if (pattern932 (x2, 
E_V2DImode, 
E_DImode) != 0)
            return -1;
          if (
#line 27282 "../../gcc/config/i386/sse.md"
(TARGET_AVX2))
            return 9098; /* avx2_pbroadcastv2di */
          if (!(
#line 27713 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 296 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 9192; /* avx512vl_vec_dupv2di */

        case E_V32HFmode:
          if (!register_operand (operands[0], E_V32HFmode)
              || GET_MODE (x2) != E_V32HFmode
              || GET_MODE (x3) != E_HFmode)
            return -1;
          switch (GET_MODE (operands[1]))
            {
            case E_V8HFmode:
              if (!nonimmediate_operand (operands[1], E_V8HFmode))
                return -1;
              if ((
#line 27282 "../../gcc/config/i386/sse.md"
(TARGET_AVX2) && 
#line 584 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512)))
                return 9099; /* avx2_pbroadcastv32hf */
              if (!(
#line 27732 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 324 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                return -1;
              return 9218; /* avx512bw_vec_dupv32hf */

            case E_V32HFmode:
              if (!nonimmediate_operand (operands[1], E_V32HFmode)
                  || !(
#line 27699 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 980 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512)))
                return -1;
              return 9180; /* avx512bw_vec_dupv32hf_1 */

            default:
              return -1;
            }

        case E_V16HFmode:
          if (!register_operand (operands[0], E_V16HFmode)
              || GET_MODE (x2) != E_V16HFmode
              || GET_MODE (x3) != E_HFmode)
            return -1;
          switch (GET_MODE (operands[1]))
            {
            case E_V8HFmode:
              if (!nonimmediate_operand (operands[1], E_V8HFmode))
                return -1;
              if ((
#line 27282 "../../gcc/config/i386/sse.md"
(TARGET_AVX2) && 
#line 584 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
                return 9100; /* avx2_pbroadcastv16hf */
              if (!(
#line 27732 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 324 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                return -1;
              return 9220; /* avx512vl_vec_dupv16hf */

            case E_V16HFmode:
              if (!nonimmediate_operand (operands[1], E_V16HFmode)
                  || !
#line 27296 "../../gcc/config/i386/sse.md"
(TARGET_AVX2))
                return -1;
              return 9109; /* avx2_pbroadcastv16hf_1 */

            default:
              return -1;
            }

        case E_V8HFmode:
          if (pattern932 (x2, 
E_V8HFmode, 
E_HFmode) != 0)
            return -1;
          if (
#line 27282 "../../gcc/config/i386/sse.md"
(TARGET_AVX2))
            return 9101; /* avx2_pbroadcastv8hf */
          if (!(
#line 27732 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 324 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 9222; /* avx512fp16_vec_dupv8hf */

        case E_V32BFmode:
          if (!register_operand (operands[0], E_V32BFmode)
              || GET_MODE (x2) != E_V32BFmode
              || GET_MODE (x3) != E_BFmode)
            return -1;
          switch (GET_MODE (operands[1]))
            {
            case E_V8BFmode:
              if (!nonimmediate_operand (operands[1], E_V8BFmode))
                return -1;
              if ((
#line 27282 "../../gcc/config/i386/sse.md"
(TARGET_AVX2) && 
#line 585 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512)))
                return 9102; /* avx2_pbroadcastv32bf */
              if (!(
#line 27732 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 325 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                return -1;
              return 9224; /* avx512bw_vec_dupv32bf */

            case E_V32BFmode:
              if (!nonimmediate_operand (operands[1], E_V32BFmode)
                  || !(
#line 27699 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 981 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512)))
                return -1;
              return 9181; /* avx512bw_vec_dupv32bf_1 */

            default:
              return -1;
            }

        case E_V16BFmode:
          if (!register_operand (operands[0], E_V16BFmode)
              || GET_MODE (x2) != E_V16BFmode
              || GET_MODE (x3) != E_BFmode)
            return -1;
          switch (GET_MODE (operands[1]))
            {
            case E_V8BFmode:
              if (!nonimmediate_operand (operands[1], E_V8BFmode))
                return -1;
              if ((
#line 27282 "../../gcc/config/i386/sse.md"
(TARGET_AVX2) && 
#line 585 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
                return 9103; /* avx2_pbroadcastv16bf */
              if (!(
#line 27732 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 325 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                return -1;
              return 9226; /* avx512vl_vec_dupv16bf */

            case E_V16BFmode:
              if (!nonimmediate_operand (operands[1], E_V16BFmode)
                  || !
#line 27296 "../../gcc/config/i386/sse.md"
(TARGET_AVX2))
                return -1;
              return 9110; /* avx2_pbroadcastv16bf_1 */

            default:
              return -1;
            }

        case E_V8BFmode:
          if (pattern932 (x2, 
E_V8BFmode, 
E_BFmode) != 0)
            return -1;
          if (
#line 27282 "../../gcc/config/i386/sse.md"
(TARGET_AVX2))
            return 9104; /* avx2_pbroadcastv8bf */
          if (!(
#line 27732 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 325 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 9228; /* avx512vl_vec_dupv8bf */

        case E_V4DFmode:
          if (!register_operand (operands[0], E_V4DFmode)
              || GET_MODE (x2) != E_V4DFmode
              || GET_MODE (x3) != E_DFmode)
            return -1;
          if (register_operand (operands[1], E_V2DFmode)
              && 
#line 27687 "../../gcc/config/i386/sse.md"
(TARGET_AVX2))
            return 9175; /* avx2_vec_dupv4df */
          if (!nonimmediate_operand (operands[1], E_V2DFmode)
              || !(
#line 27713 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 298 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 9202; /* avx512vl_vec_dupv4df */

        case E_V2DFmode:
          if (pattern932 (x2, 
E_V2DFmode, 
E_DFmode) != 0
              || !(
#line 27713 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 298 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 9204; /* avx512vl_vec_dupv2df */

        default:
          return -1;
        }

    case 2:
      x6 = XVECEXP (x4, 0, 0);
      if (x6 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
        return -1;
      x7 = XVECEXP (x4, 0, 1);
      if (x7 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
        return -1;
      switch (GET_MODE (operands[0]))
        {
        case E_V16SImode:
          if (pattern928 (x2, 
E_V4SImode, 
E_V2SImode, 
E_V16SImode) != 0
              || !(
#line 28038 "../../gcc/config/i386/sse.md"
(TARGET_AVX512DQ) && 
#line 28022 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return -1;
          return 9316; /* *avx512dq_broadcastv16si */

        case E_V8SImode:
          if (pattern928 (x2, 
E_V4SImode, 
E_V2SImode, 
E_V8SImode) != 0
              || !(
#line 28038 "../../gcc/config/i386/sse.md"
(TARGET_AVX512DQ) && 
#line 28022 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 9318; /* *avx512dq_broadcastv8si */

        case E_V4SImode:
          if (pattern932 (x2, 
E_V4SImode, 
E_V2SImode) != 0
              || !(
#line 28038 "../../gcc/config/i386/sse.md"
(TARGET_AVX512DQ) && 
#line 28022 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 9320; /* *avx512dq_broadcastv4si */

        case E_V16SFmode:
          if (pattern928 (x2, 
E_V4SFmode, 
E_V2SFmode, 
E_V16SFmode) != 0
              || !(
#line 28038 "../../gcc/config/i386/sse.md"
(TARGET_AVX512DQ) && 
#line 28023 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return -1;
          return 9322; /* *avx512dq_broadcastv16sf */

        case E_V8SFmode:
          if (pattern928 (x2, 
E_V4SFmode, 
E_V2SFmode, 
E_V8SFmode) != 0
              || !(
#line 28038 "../../gcc/config/i386/sse.md"
(TARGET_AVX512DQ) && 
#line 28023 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 9324; /* *avx512dq_broadcastv8sf */

        default:
          return -1;
        }

    default:
      return -1;
    }
}

 int
recog_310 (rtx x1 ATTRIBUTE_UNUSED,
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
          return 5859; /* *avx512bw_vpternlogv32hf_1 */

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
          return 5886; /* *avx512vl_vpternlogv16hf_1 */

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
          return 5913; /* *avx512fp16_vpternlogv8hf_1 */

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
          return 5940; /* *avx512bw_vpternlogv32bf_1 */

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
          return 5967; /* *avx512vl_vpternlogv16bf_1 */

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
          return 5994; /* *avx512vl_vpternlogv8bf_1 */

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
          return 6021; /* *avx512f_vpternlogv16sf_1 */

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
          return 6048; /* *avx512vl_vpternlogv8sf_1 */

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
          return 6075; /* *avx512vl_vpternlogv4sf_1 */

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
          return 6102; /* *avx512f_vpternlogv8df_1 */

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
          return 6129; /* *avx512vl_vpternlogv4df_1 */

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
          return 6156; /* *avx512vl_vpternlogv2df_1 */

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
          return 5862; /* *avx512bw_vpternlogv32hf_1 */

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
          return 5889; /* *avx512vl_vpternlogv16hf_1 */

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
          return 5916; /* *avx512fp16_vpternlogv8hf_1 */

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
          return 5943; /* *avx512bw_vpternlogv32bf_1 */

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
          return 5970; /* *avx512vl_vpternlogv16bf_1 */

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
          return 5997; /* *avx512vl_vpternlogv8bf_1 */

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
          return 6024; /* *avx512f_vpternlogv16sf_1 */

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
          return 6051; /* *avx512vl_vpternlogv8sf_1 */

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
          return 6078; /* *avx512vl_vpternlogv4sf_1 */

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
          return 6105; /* *avx512f_vpternlogv8df_1 */

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
          return 6132; /* *avx512vl_vpternlogv4df_1 */

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
          return 6159; /* *avx512vl_vpternlogv2df_1 */

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
          return 5865; /* *avx512bw_vpternlogv32hf_1 */

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
          return 5892; /* *avx512vl_vpternlogv16hf_1 */

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
          return 5919; /* *avx512fp16_vpternlogv8hf_1 */

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
          return 5946; /* *avx512bw_vpternlogv32bf_1 */

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
          return 5973; /* *avx512vl_vpternlogv16bf_1 */

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
          return 6000; /* *avx512vl_vpternlogv8bf_1 */

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
          return 6027; /* *avx512f_vpternlogv16sf_1 */

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
          return 6054; /* *avx512vl_vpternlogv8sf_1 */

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
          return 6081; /* *avx512vl_vpternlogv4sf_1 */

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
          return 6108; /* *avx512f_vpternlogv8df_1 */

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
          return 6135; /* *avx512vl_vpternlogv4df_1 */

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
          return 6162; /* *avx512vl_vpternlogv2df_1 */

        case 36:
          if (!(
#line 13946 "../../gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 336 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 6927; /* *avx512bw_vpternlogv32hf_3 */

        case 37:
          if (!(
#line 13946 "../../gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 336 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 6936; /* *avx512vl_vpternlogv16hf_3 */

        case 38:
          if (!
#line 13946 "../../gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()))
            return -1;
          return 6945; /* *avx512fp16_vpternlogv8hf_3 */

        case 39:
          if (!(
#line 13946 "../../gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 337 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 6954; /* *avx512bw_vpternlogv32bf_3 */

        case 40:
          if (!(
#line 13946 "../../gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 337 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 6963; /* *avx512vl_vpternlogv16bf_3 */

        case 41:
          if (!
#line 13946 "../../gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()))
            return -1;
          return 6972; /* *avx512vl_vpternlogv8bf_3 */

        case 42:
          if (!(
#line 13946 "../../gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 338 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 6981; /* *avx512f_vpternlogv16sf_3 */

        case 43:
          if (!(
#line 13946 "../../gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 338 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 6990; /* *avx512vl_vpternlogv8sf_3 */

        case 44:
          if (!
#line 13946 "../../gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()))
            return -1;
          return 6999; /* *avx512vl_vpternlogv4sf_3 */

        case 45:
          if (!(
#line 13946 "../../gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 339 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 7008; /* *avx512f_vpternlogv8df_3 */

        case 46:
          if (!(
#line 13946 "../../gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 339 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 7017; /* *avx512vl_vpternlogv4df_3 */

        case 47:
          if (!(
#line 13946 "../../gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 339 "../../gcc/config/i386/sse.md"
(TARGET_SSE2)))
            return -1;
          return 7026; /* *avx512vl_vpternlogv2df_3 */

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
          return 6507; /* *avx512bw_vpternlogv32hf_2 */

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
          return 6534; /* *avx512vl_vpternlogv16hf_2 */

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
          return 6561; /* *avx512fp16_vpternlogv8hf_2 */

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
          return 6588; /* *avx512bw_vpternlogv32bf_2 */

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
          return 6615; /* *avx512vl_vpternlogv16bf_2 */

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
          return 6642; /* *avx512vl_vpternlogv8bf_2 */

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
          return 6669; /* *avx512f_vpternlogv16sf_2 */

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
          return 6696; /* *avx512vl_vpternlogv8sf_2 */

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
          return 6723; /* *avx512vl_vpternlogv4sf_2 */

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
          return 6750; /* *avx512f_vpternlogv8df_2 */

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
          return 6777; /* *avx512vl_vpternlogv4df_2 */

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
          return 6804; /* *avx512vl_vpternlogv2df_2 */

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
          return 6510; /* *avx512bw_vpternlogv32hf_2 */

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
          return 6537; /* *avx512vl_vpternlogv16hf_2 */

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
          return 6564; /* *avx512fp16_vpternlogv8hf_2 */

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
          return 6591; /* *avx512bw_vpternlogv32bf_2 */

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
          return 6618; /* *avx512vl_vpternlogv16bf_2 */

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
          return 6645; /* *avx512vl_vpternlogv8bf_2 */

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
          return 6672; /* *avx512f_vpternlogv16sf_2 */

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
          return 6699; /* *avx512vl_vpternlogv8sf_2 */

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
          return 6726; /* *avx512vl_vpternlogv4sf_2 */

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
          return 6753; /* *avx512f_vpternlogv8df_2 */

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
          return 6780; /* *avx512vl_vpternlogv4df_2 */

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
          return 6807; /* *avx512vl_vpternlogv2df_2 */

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
          return 6513; /* *avx512bw_vpternlogv32hf_2 */

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
          return 6540; /* *avx512vl_vpternlogv16hf_2 */

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
          return 6567; /* *avx512fp16_vpternlogv8hf_2 */

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
          return 6594; /* *avx512bw_vpternlogv32bf_2 */

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
          return 6621; /* *avx512vl_vpternlogv16bf_2 */

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
          return 6648; /* *avx512vl_vpternlogv8bf_2 */

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
          return 6675; /* *avx512f_vpternlogv16sf_2 */

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
          return 6702; /* *avx512vl_vpternlogv8sf_2 */

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
          return 6729; /* *avx512vl_vpternlogv4sf_2 */

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
          return 6756; /* *avx512f_vpternlogv8df_2 */

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
          return 6783; /* *avx512vl_vpternlogv4df_2 */

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
          return 6810; /* *avx512vl_vpternlogv2df_2 */

        default:
          return -1;
        }

    default:
      return -1;
    }
}

 int
recog_321 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  operands[0] = x2;
  x3 = XEXP (x1, 1);
  x4 = XEXP (x3, 0);
  switch (GET_CODE (x4))
    {
    case UNSPEC:
      return recog_184 (x1, insn, pnum_clobbers);

    case VEC_MERGE:
      return recog_181 (x1, insn, pnum_clobbers);

    case PLUS:
      return recog_204 (x1, insn, pnum_clobbers);

    case MINUS:
      return recog_192 (x1, insn, pnum_clobbers);

    case VEC_DUPLICATE:
      return recog_179 (x1, insn, pnum_clobbers);

    case MULT:
      return recog_186 (x1, insn, pnum_clobbers);

    case DIV:
      return recog_203 (x1, insn, pnum_clobbers);

    case SQRT:
      return recog_200 (x1, insn, pnum_clobbers);

    case SMAX:
      return recog_197 (x1, insn, pnum_clobbers);

    case SMIN:
      return recog_198 (x1, insn, pnum_clobbers);

    case CONST_INT:
    case CONST_DOUBLE:
    case CONST_VECTOR:
    case REG:
    case SUBREG:
    case MEM:
      return recog_178 (x1, insn, pnum_clobbers);

    case NE:
    case EQ:
    case GE:
    case GT:
    case LE:
    case LT:
    case LTGT:
    case UNORDERED:
    case ORDERED:
    case UNEQ:
    case UNGE:
    case UNGT:
    case UNLE:
    case UNLT:
      operands[3] = x4;
      x5 = XEXP (x3, 2);
      if (x5 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
        return -1;
      x6 = XEXP (x4, 0);
      operands[1] = x6;
      x7 = XEXP (x4, 1);
      operands[2] = x7;
      x8 = XEXP (x3, 1);
      if (!rtx_equal_p (x8, operands[1]))
        return -1;
      switch (GET_MODE (operands[0]))
        {
        case E_V4SFmode:
          if (pattern1014 (x3, 
E_V4SFmode) != 0
              || !
#line 4366 "../../gcc/config/i386/sse.md"
(TARGET_SSE))
            return -1;
          return 3273; /* sse_vmmaskcmpv4sf3 */

        case E_V2DFmode:
          if (pattern1014 (x3, 
E_V2DFmode) != 0
              || !(
#line 4366 "../../gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 475 "../../gcc/config/i386/sse.md"
(TARGET_SSE2)))
            return -1;
          return 3274; /* sse2_vmmaskcmpv2df3 */

        default:
          return -1;
        }

    case AND:
      return recog_191 (x1, insn, pnum_clobbers);

    case IOR:
      return recog_205 (x1, insn, pnum_clobbers);

    case XOR:
      return recog_196 (x1, insn, pnum_clobbers);

    case FMA:
      return recog_182 (x1, insn, pnum_clobbers);

    case FLOAT:
      return recog_202 (x1, insn, pnum_clobbers);

    case UNSIGNED_FLOAT:
      return recog_201 (x1, insn, pnum_clobbers);

    case FIX:
      return recog_195 (x1, insn, pnum_clobbers);

    case UNSIGNED_FIX:
      return recog_199 (x1, insn, pnum_clobbers);

    case FLOAT_EXTEND:
      return recog_189 (x1, insn, pnum_clobbers);

    case FLOAT_TRUNCATE:
      x6 = XEXP (x4, 0);
      operands[1] = x6;
      x8 = XEXP (x3, 1);
      operands[2] = x8;
      x5 = XEXP (x3, 2);
      operands[3] = x5;
      switch (GET_MODE (operands[0]))
        {
        case E_V8HFmode:
          if (pattern773 (x3, 
E_V8HFmode, 
E_QImode) != 0)
            return -1;
          switch (GET_MODE (operands[1]))
            {
            case E_V8DFmode:
              if (!vector_operand (operands[1], E_V8DFmode)
                  || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 8112 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && 1) && 
#line 1004 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512))))
                return -1;
              return 4735; /* avx512fp16_vcvtpd2ph_v8df_mask */

            case E_V8SFmode:
              if (!vector_operand (operands[1], E_V8SFmode)
                  || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 8112 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && 1) && 
#line 1004 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
                return -1;
              return 4743; /* avx512fp16_vcvtps2ph_v8sf_mask */

            default:
              return -1;
            }

        case E_V16HFmode:
          if (pattern774 (x3, 
E_V16HFmode, 
E_HImode, 
E_V16SFmode) != 0
              || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 8112 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && 1) && 
#line 1004 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512))))
            return -1;
          return 4739; /* avx512fp16_vcvtps2ph_v16sf_mask */

        case E_V8SFmode:
          if (pattern774 (x3, 
E_V8SFmode, 
E_QImode, 
E_V8DFmode) != 0
              || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 10086 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 5173; /* avx512f_cvtpd2ps512_mask */

        case E_V4SFmode:
          if (pattern774 (x3, 
E_V4SFmode, 
E_QImode, 
E_V4DFmode) != 0
              || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 10096 "../../gcc/config/i386/sse.md"
(TARGET_AVX && TARGET_AVX512VL
   && (!false || TARGET_AVX10_2_256))))
            return -1;
          return 5177; /* avx_cvtpd2ps256_mask */

        case E_V16BFmode:
          if (pattern146 (x3, 
E_V16BFmode, 
E_V16SFmode, 
E_HImode) != 0
              || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 31167 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BF16) && 
#line 31095 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512))))
            return -1;
          return 10344; /* avx512f_cvtneps2bf16_v16sf_mask */

        case E_V8BFmode:
          if (pattern146 (x3, 
E_V8BFmode, 
E_V8SFmode, 
E_QImode) != 0
              || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 31167 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BF16) && 
#line 31095 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
            return -1;
          return 10346; /* avx512f_cvtneps2bf16_v8sf_mask */

        default:
          return -1;
        }

    case VEC_SELECT:
      return recog_180 (x1, insn, pnum_clobbers);

    case SS_TRUNCATE:
      switch (pattern137 (x3))
        {
        case 0:
          if (!
#line 15135 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512))
            return -1;
          return 7237; /* avx512f_ss_truncatev16siv16qi2_mask */

        case 1:
          if (!(
#line 15307 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL) && 
#line 15224 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW)))
            return -1;
          return 7273; /* avx512vl_ss_truncatev16hiv16qi2_mask */

        case 2:
          if (!
#line 15135 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512))
            return -1;
          return 7240; /* avx512f_ss_truncatev16siv16hi2_mask */

        case 3:
          if (!
#line 15135 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512))
            return -1;
          return 7243; /* avx512f_ss_truncatev8div8si2_mask */

        case 4:
          if (!
#line 15135 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512))
            return -1;
          return 7246; /* avx512f_ss_truncatev8div8hi2_mask */

        case 5:
          if (!
#line 15307 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))
            return -1;
          return 7270; /* avx512vl_ss_truncatev8siv8hi2_mask */

        case 6:
          if (!
#line 15207 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512))
            return -1;
          return 7253; /* avx512bw_ss_truncatev32hiv32qi2_mask */

        case 7:
          if (!
#line 15307 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))
            return -1;
          return 7267; /* avx512vl_ss_truncatev4div4si2_mask */

        default:
          return -1;
        }

    case TRUNCATE:
      return recog_190 (x1, insn, pnum_clobbers);

    case US_TRUNCATE:
      switch (pattern137 (x3))
        {
        case 0:
          if (!
#line 15135 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512))
            return -1;
          return 7239; /* avx512f_us_truncatev16siv16qi2_mask */

        case 1:
          if (!(
#line 15307 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL) && 
#line 15224 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW)))
            return -1;
          return 7275; /* avx512vl_us_truncatev16hiv16qi2_mask */

        case 2:
          if (!
#line 15135 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512))
            return -1;
          return 7242; /* avx512f_us_truncatev16siv16hi2_mask */

        case 3:
          if (!
#line 15135 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512))
            return -1;
          return 7245; /* avx512f_us_truncatev8div8si2_mask */

        case 4:
          if (!
#line 15135 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512))
            return -1;
          return 7248; /* avx512f_us_truncatev8div8hi2_mask */

        case 5:
          if (!
#line 15307 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))
            return -1;
          return 7272; /* avx512vl_us_truncatev8siv8hi2_mask */

        case 6:
          if (!
#line 15207 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512))
            return -1;
          return 7255; /* avx512bw_us_truncatev32hiv32qi2_mask */

        case 7:
          if (!
#line 15307 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))
            return -1;
          return 7269; /* avx512vl_us_truncatev4div4si2_mask */

        default:
          return -1;
        }

    case SS_PLUS:
      switch (pattern138 (x3))
        {
        case 0:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 16318 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && (64 == 64 || TARGET_AVX512VL) && TARGET_AVX512BW
   && ix86_binary_operator_ok (SS_PLUS, V64QImode, operands)) && 
#line 740 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512))))
            return -1;
          return 7508; /* *avx512bw_ssaddv64qi3_mask */

        case 1:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 16318 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && (32 == 64 || TARGET_AVX512VL) && TARGET_AVX512BW
   && ix86_binary_operator_ok (SS_PLUS, V32QImode, operands)) && 
#line 740 "../../gcc/config/i386/sse.md"
(TARGET_AVX2))))
            return -1;
          return 7516; /* *avx2_ssaddv32qi3_mask */

        case 2:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 16318 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && (16 == 64 || TARGET_AVX512VL) && TARGET_AVX512BW
   && ix86_binary_operator_ok (SS_PLUS, V16QImode, operands))))
            return -1;
          return 7524; /* *sse2_ssaddv16qi3_mask */

        case 3:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 16318 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && (64 == 64 || TARGET_AVX512VL) && TARGET_AVX512BW
   && ix86_binary_operator_ok (SS_PLUS, V32HImode, operands)) && 
#line 741 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512))))
            return -1;
          return 7532; /* *avx512bw_ssaddv32hi3_mask */

        case 4:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 16318 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && (32 == 64 || TARGET_AVX512VL) && TARGET_AVX512BW
   && ix86_binary_operator_ok (SS_PLUS, V16HImode, operands)) && 
#line 741 "../../gcc/config/i386/sse.md"
(TARGET_AVX2))))
            return -1;
          return 7540; /* *avx2_ssaddv16hi3_mask */

        case 5:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 16318 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && (16 == 64 || TARGET_AVX512VL) && TARGET_AVX512BW
   && ix86_binary_operator_ok (SS_PLUS, V8HImode, operands))))
            return -1;
          return 7548; /* *sse2_ssaddv8hi3_mask */

        default:
          return -1;
        }

    case US_PLUS:
      switch (pattern138 (x3))
        {
        case 0:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 16318 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && (64 == 64 || TARGET_AVX512VL) && TARGET_AVX512BW
   && ix86_binary_operator_ok (US_PLUS, V64QImode, operands)) && 
#line 740 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512))))
            return -1;
          return 7510; /* *avx512bw_usaddv64qi3_mask */

        case 1:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 16318 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && (32 == 64 || TARGET_AVX512VL) && TARGET_AVX512BW
   && ix86_binary_operator_ok (US_PLUS, V32QImode, operands)) && 
#line 740 "../../gcc/config/i386/sse.md"
(TARGET_AVX2))))
            return -1;
          return 7518; /* *avx2_usaddv32qi3_mask */

        case 2:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 16318 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && (16 == 64 || TARGET_AVX512VL) && TARGET_AVX512BW
   && ix86_binary_operator_ok (US_PLUS, V16QImode, operands))))
            return -1;
          return 7526; /* *sse2_usaddv16qi3_mask */

        case 3:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 16318 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && (64 == 64 || TARGET_AVX512VL) && TARGET_AVX512BW
   && ix86_binary_operator_ok (US_PLUS, V32HImode, operands)) && 
#line 741 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512))))
            return -1;
          return 7534; /* *avx512bw_usaddv32hi3_mask */

        case 4:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 16318 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && (32 == 64 || TARGET_AVX512VL) && TARGET_AVX512BW
   && ix86_binary_operator_ok (US_PLUS, V16HImode, operands)) && 
#line 741 "../../gcc/config/i386/sse.md"
(TARGET_AVX2))))
            return -1;
          return 7542; /* *avx2_usaddv16hi3_mask */

        case 5:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 16318 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && (16 == 64 || TARGET_AVX512VL) && TARGET_AVX512BW
   && ix86_binary_operator_ok (US_PLUS, V8HImode, operands))))
            return -1;
          return 7550; /* *sse2_usaddv8hi3_mask */

        default:
          return -1;
        }

    case SS_MINUS:
      switch (pattern138 (x3))
        {
        case 0:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 16318 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && (64 == 64 || TARGET_AVX512VL) && TARGET_AVX512BW
   && ix86_binary_operator_ok (SS_MINUS, V64QImode, operands)) && 
#line 740 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512))))
            return -1;
          return 7512; /* *avx512bw_sssubv64qi3_mask */

        case 1:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 16318 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && (32 == 64 || TARGET_AVX512VL) && TARGET_AVX512BW
   && ix86_binary_operator_ok (SS_MINUS, V32QImode, operands)) && 
#line 740 "../../gcc/config/i386/sse.md"
(TARGET_AVX2))))
            return -1;
          return 7520; /* *avx2_sssubv32qi3_mask */

        case 2:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 16318 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && (16 == 64 || TARGET_AVX512VL) && TARGET_AVX512BW
   && ix86_binary_operator_ok (SS_MINUS, V16QImode, operands))))
            return -1;
          return 7528; /* *sse2_sssubv16qi3_mask */

        case 3:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 16318 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && (64 == 64 || TARGET_AVX512VL) && TARGET_AVX512BW
   && ix86_binary_operator_ok (SS_MINUS, V32HImode, operands)) && 
#line 741 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512))))
            return -1;
          return 7536; /* *avx512bw_sssubv32hi3_mask */

        case 4:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 16318 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && (32 == 64 || TARGET_AVX512VL) && TARGET_AVX512BW
   && ix86_binary_operator_ok (SS_MINUS, V16HImode, operands)) && 
#line 741 "../../gcc/config/i386/sse.md"
(TARGET_AVX2))))
            return -1;
          return 7544; /* *avx2_sssubv16hi3_mask */

        case 5:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 16318 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && (16 == 64 || TARGET_AVX512VL) && TARGET_AVX512BW
   && ix86_binary_operator_ok (SS_MINUS, V8HImode, operands))))
            return -1;
          return 7552; /* *sse2_sssubv8hi3_mask */

        default:
          return -1;
        }

    case US_MINUS:
      switch (pattern138 (x3))
        {
        case 0:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 16318 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && (64 == 64 || TARGET_AVX512VL) && TARGET_AVX512BW
   && ix86_binary_operator_ok (US_MINUS, V64QImode, operands)) && 
#line 740 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512))))
            return -1;
          return 7514; /* *avx512bw_ussubv64qi3_mask */

        case 1:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 16318 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && (32 == 64 || TARGET_AVX512VL) && TARGET_AVX512BW
   && ix86_binary_operator_ok (US_MINUS, V32QImode, operands)) && 
#line 740 "../../gcc/config/i386/sse.md"
(TARGET_AVX2))))
            return -1;
          return 7522; /* *avx2_ussubv32qi3_mask */

        case 2:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 16318 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && (16 == 64 || TARGET_AVX512VL) && TARGET_AVX512BW
   && ix86_binary_operator_ok (US_MINUS, V16QImode, operands))))
            return -1;
          return 7530; /* *sse2_ussubv16qi3_mask */

        case 3:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 16318 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && (64 == 64 || TARGET_AVX512VL) && TARGET_AVX512BW
   && ix86_binary_operator_ok (US_MINUS, V32HImode, operands)) && 
#line 741 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512))))
            return -1;
          return 7538; /* *avx512bw_ussubv32hi3_mask */

        case 4:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 16318 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && (32 == 64 || TARGET_AVX512VL) && TARGET_AVX512BW
   && ix86_binary_operator_ok (US_MINUS, V16HImode, operands)) && 
#line 741 "../../gcc/config/i386/sse.md"
(TARGET_AVX2))))
            return -1;
          return 7546; /* *avx2_ussubv16hi3_mask */

        case 5:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 16318 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && (16 == 64 || TARGET_AVX512VL) && TARGET_AVX512BW
   && ix86_binary_operator_ok (US_MINUS, V8HImode, operands))))
            return -1;
          return 7554; /* *sse2_ussubv8hi3_mask */

        default:
          return -1;
        }

    case ASHIFTRT:
      return recog_185 (x1, insn, pnum_clobbers);

    case ASHIFT:
      return recog_188 (x1, insn, pnum_clobbers);

    case LSHIFTRT:
      return recog_187 (x1, insn, pnum_clobbers);

    case ROTATE:
      switch (pattern141 (x3))
        {
        case 0:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 17639 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 501 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512))))
            return -1;
          return 7708; /* avx512f_rolvv16si_mask */

        case 1:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 17639 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 501 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
            return -1;
          return 7712; /* avx512vl_rolvv8si_mask */

        case 2:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 17639 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 501 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
            return -1;
          return 7716; /* avx512vl_rolvv4si_mask */

        case 3:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 17639 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 502 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512))))
            return -1;
          return 7720; /* avx512f_rolvv8di_mask */

        case 4:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 17639 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 502 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
            return -1;
          return 7724; /* avx512vl_rolvv4di_mask */

        case 5:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 17639 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 502 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
            return -1;
          return 7728; /* avx512vl_rolvv2di_mask */

        case 6:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 17649 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 501 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512))))
            return -1;
          return 7732; /* avx512f_rolv16si_mask */

        case 7:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 17649 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 501 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
            return -1;
          return 7736; /* avx512vl_rolv8si_mask */

        case 8:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 17649 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 501 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
            return -1;
          return 7740; /* avx512vl_rolv4si_mask */

        case 9:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 17649 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 502 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512))))
            return -1;
          return 7744; /* avx512f_rolv8di_mask */

        case 10:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 17649 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 502 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
            return -1;
          return 7748; /* avx512vl_rolv4di_mask */

        case 11:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 17649 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 502 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
            return -1;
          return 7752; /* avx512vl_rolv2di_mask */

        default:
          return -1;
        }

    case ROTATERT:
      switch (pattern141 (x3))
        {
        case 0:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 17639 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 501 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512))))
            return -1;
          return 7710; /* avx512f_rorvv16si_mask */

        case 1:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 17639 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 501 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
            return -1;
          return 7714; /* avx512vl_rorvv8si_mask */

        case 2:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 17639 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 501 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
            return -1;
          return 7718; /* avx512vl_rorvv4si_mask */

        case 3:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 17639 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 502 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512))))
            return -1;
          return 7722; /* avx512f_rorvv8di_mask */

        case 4:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 17639 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 502 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
            return -1;
          return 7726; /* avx512vl_rorvv4di_mask */

        case 5:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 17639 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 502 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
            return -1;
          return 7730; /* avx512vl_rorvv2di_mask */

        case 6:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 17649 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 501 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512))))
            return -1;
          return 7734; /* avx512f_rorv16si_mask */

        case 7:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 17649 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 501 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
            return -1;
          return 7738; /* avx512vl_rorv8si_mask */

        case 8:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 17649 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 501 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
            return -1;
          return 7742; /* avx512vl_rorv4si_mask */

        case 9:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 17649 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 502 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512))))
            return -1;
          return 7746; /* avx512f_rorv8di_mask */

        case 10:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 17649 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 502 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
            return -1;
          return 7750; /* avx512vl_rorv4di_mask */

        case 11:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 17649 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 502 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
            return -1;
          return 7754; /* avx512vl_rorv2di_mask */

        default:
          return -1;
        }

    case UMAX:
      switch (pattern142 (x3))
        {
        case 0:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 17708 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 501 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512))))
            return -1;
          return 7772; /* *avx512f_umaxv16si3_mask */

        case 1:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 17708 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 501 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
            return -1;
          return 7780; /* *avx512f_umaxv8si3_mask */

        case 2:
          if (nonimmediate_operand (operands[1], E_V4SImode)
              && nonimmediate_operand (operands[2], E_V4SImode)
              && (
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 17708 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 501 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
            return 7788; /* *avx512f_umaxv4si3_mask */
          if (!vector_operand (operands[1], E_V4SImode)
              || !vector_operand (operands[2], E_V4SImode)
              || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 17895 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1
   && (16 == 64 || TARGET_AVX512VL)
   && !(MEM_P (operands[1]) && MEM_P (operands[2])))))
            return -1;
          return 7878; /* *sse4_1_umaxv4si3_mask */

        case 3:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 17708 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 502 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512))))
            return -1;
          return 7796; /* *avx512f_umaxv8di3_mask */

        case 4:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 17708 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 502 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
            return -1;
          return 7804; /* *avx512f_umaxv4di3_mask */

        case 5:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 17708 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 502 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
            return -1;
          return 7812; /* *avx512f_umaxv2di3_mask */

        case 6:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 17719 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 318 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512))))
            return -1;
          return 7820; /* umaxv64qi3_mask */

        case 7:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 17719 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 318 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
            return -1;
          return 7828; /* umaxv16qi3_mask */

        case 8:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 17719 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 318 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
            return -1;
          return 7836; /* umaxv32qi3_mask */

        case 9:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 17719 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 319 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512))))
            return -1;
          return 7844; /* umaxv32hi3_mask */

        case 10:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 17719 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 319 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
            return -1;
          return 7852; /* umaxv16hi3_mask */

        case 11:
          if (register_operand (operands[1], E_V8HImode)
              && nonimmediate_operand (operands[2], E_V8HImode)
              && (
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 17719 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 319 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
            return 7860; /* umaxv8hi3_mask */
          if (!vector_operand (operands[1], E_V8HImode)
              || !vector_operand (operands[2], E_V8HImode)
              || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 17895 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1
   && (16 == 64 || TARGET_AVX512VL)
   && !(MEM_P (operands[1]) && MEM_P (operands[2])))))
            return -1;
          return 7874; /* *sse4_1_umaxv8hi3_mask */

        default:
          return -1;
        }

    case UMIN:
      switch (pattern142 (x3))
        {
        case 0:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 17708 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 501 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512))))
            return -1;
          return 7774; /* *avx512f_uminv16si3_mask */

        case 1:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 17708 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 501 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
            return -1;
          return 7782; /* *avx512f_uminv8si3_mask */

        case 2:
          if (nonimmediate_operand (operands[1], E_V4SImode)
              && nonimmediate_operand (operands[2], E_V4SImode)
              && (
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 17708 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 501 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
            return 7790; /* *avx512f_uminv4si3_mask */
          if (!vector_operand (operands[1], E_V4SImode)
              || !vector_operand (operands[2], E_V4SImode)
              || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 17895 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1
   && (16 == 64 || TARGET_AVX512VL)
   && !(MEM_P (operands[1]) && MEM_P (operands[2])))))
            return -1;
          return 7880; /* *sse4_1_uminv4si3_mask */

        case 3:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 17708 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 502 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512))))
            return -1;
          return 7798; /* *avx512f_uminv8di3_mask */

        case 4:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 17708 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 502 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
            return -1;
          return 7806; /* *avx512f_uminv4di3_mask */

        case 5:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 17708 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 502 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
            return -1;
          return 7814; /* *avx512f_uminv2di3_mask */

        case 6:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 17719 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 318 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512))))
            return -1;
          return 7822; /* uminv64qi3_mask */

        case 7:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 17719 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 318 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
            return -1;
          return 7830; /* uminv16qi3_mask */

        case 8:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 17719 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 318 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
            return -1;
          return 7838; /* uminv32qi3_mask */

        case 9:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 17719 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 319 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512))))
            return -1;
          return 7846; /* uminv32hi3_mask */

        case 10:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 17719 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 319 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
            return -1;
          return 7854; /* uminv16hi3_mask */

        case 11:
          if (register_operand (operands[1], E_V8HImode)
              && nonimmediate_operand (operands[2], E_V8HImode)
              && (
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 17719 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 319 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
            return 7862; /* uminv8hi3_mask */
          if (!vector_operand (operands[1], E_V8HImode)
              || !vector_operand (operands[2], E_V8HImode)
              || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 17895 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1
   && (16 == 64 || TARGET_AVX512VL)
   && !(MEM_P (operands[1]) && MEM_P (operands[2])))))
            return -1;
          return 7876; /* *sse4_1_uminv8hi3_mask */

        default:
          return -1;
        }

    case VEC_CONCAT:
      return recog_183 (x1, insn, pnum_clobbers);

    case ABS:
      switch (pattern145 (x3))
        {
        case 0:
          if (!(
#line 23367 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 501 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return -1;
          return 8656; /* absv16si2_mask */

        case 1:
          if (!(
#line 23367 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 501 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 8657; /* absv8si2_mask */

        case 2:
          if (!(
#line 23367 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 501 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 8658; /* absv4si2_mask */

        case 3:
          if (!(
#line 23367 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 502 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return -1;
          return 8659; /* absv8di2_mask */

        case 4:
          if (!(
#line 23367 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 502 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 8660; /* absv4di2_mask */

        case 5:
          if (!(
#line 23367 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 502 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 8661; /* absv2di2_mask */

        case 6:
          if (!(
#line 23380 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 318 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return -1;
          return 8662; /* absv64qi2_mask */

        case 7:
          if (!(
#line 23380 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 318 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 8663; /* absv16qi2_mask */

        case 8:
          if (!(
#line 23380 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 318 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 8664; /* absv32qi2_mask */

        case 9:
          if (!(
#line 23380 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 319 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return -1;
          return 8665; /* absv32hi2_mask */

        case 10:
          if (!(
#line 23380 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 319 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 8666; /* absv16hi2_mask */

        case 11:
          if (!(
#line 23380 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 319 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 8667; /* absv8hi2_mask */

        default:
          return -1;
        }

    case SIGN_EXTEND:
      return recog_194 (x1, insn, pnum_clobbers);

    case ZERO_EXTEND:
      return recog_193 (x1, insn, pnum_clobbers);

    case CLZ:
      x6 = XEXP (x4, 0);
      operands[1] = x6;
      x8 = XEXP (x3, 1);
      operands[2] = x8;
      x5 = XEXP (x3, 2);
      operands[3] = x5;
      switch (GET_MODE (operands[0]))
        {
        case E_V16SImode:
          if (pattern143 (x3, 
E_V16SImode, 
E_HImode) != 0
              || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 29935 "../../gcc/config/i386/sse.md"
(TARGET_AVX512CD) && 
#line 501 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512))))
            return -1;
          return 10057; /* clzv16si2_mask */

        case E_V8SImode:
          if (pattern143 (x3, 
E_V8SImode, 
E_QImode) != 0
              || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 29935 "../../gcc/config/i386/sse.md"
(TARGET_AVX512CD) && 
#line 501 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
            return -1;
          return 10059; /* clzv8si2_mask */

        case E_V4SImode:
          if (pattern143 (x3, 
E_V4SImode, 
E_QImode) != 0
              || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 29935 "../../gcc/config/i386/sse.md"
(TARGET_AVX512CD) && 
#line 501 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
            return -1;
          return 10061; /* clzv4si2_mask */

        case E_V8DImode:
          if (pattern143 (x3, 
E_V8DImode, 
E_QImode) != 0
              || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 29935 "../../gcc/config/i386/sse.md"
(TARGET_AVX512CD) && 
#line 502 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512))))
            return -1;
          return 10063; /* clzv8di2_mask */

        case E_V4DImode:
          if (pattern143 (x3, 
E_V4DImode, 
E_QImode) != 0
              || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 29935 "../../gcc/config/i386/sse.md"
(TARGET_AVX512CD) && 
#line 502 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
            return -1;
          return 10065; /* clzv4di2_mask */

        case E_V2DImode:
          if (pattern143 (x3, 
E_V2DImode, 
E_QImode) != 0
              || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 29935 "../../gcc/config/i386/sse.md"
(TARGET_AVX512CD) && 
#line 502 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
            return -1;
          return 10067; /* clzv2di2_mask */

        default:
          return -1;
        }

    case POPCOUNT:
      switch (pattern145 (x3))
        {
        case 0:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 30286 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VPOPCNTDQ) && 
#line 501 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512))))
            return -1;
          return 10130; /* vpopcountv16si_mask */

        case 1:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 30286 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VPOPCNTDQ) && 
#line 501 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
            return -1;
          return 10132; /* vpopcountv8si_mask */

        case 2:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 30286 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VPOPCNTDQ) && 
#line 501 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
            return -1;
          return 10134; /* vpopcountv4si_mask */

        case 3:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 30286 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VPOPCNTDQ) && 
#line 502 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512))))
            return -1;
          return 10136; /* vpopcountv8di_mask */

        case 4:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 30286 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VPOPCNTDQ) && 
#line 502 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
            return -1;
          return 10138; /* vpopcountv4di_mask */

        case 5:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 30286 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VPOPCNTDQ) && 
#line 502 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
            return -1;
          return 10140; /* vpopcountv2di_mask */

        case 6:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 30336 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BITALG) && 
#line 318 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512))))
            return -1;
          return 10150; /* vpopcountv64qi_mask */

        case 7:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 30336 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BITALG) && 
#line 318 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
            return -1;
          return 10152; /* vpopcountv16qi_mask */

        case 8:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 30336 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BITALG) && 
#line 318 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
            return -1;
          return 10154; /* vpopcountv32qi_mask */

        case 9:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 30336 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BITALG) && 
#line 319 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512))))
            return -1;
          return 10156; /* vpopcountv32hi_mask */

        case 10:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 30336 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BITALG) && 
#line 319 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
            return -1;
          return 10158; /* vpopcountv16hi_mask */

        case 11:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 30336 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BITALG) && 
#line 319 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
            return -1;
          return 10160; /* vpopcountv8hi_mask */

        default:
          return -1;
        }

    default:
      return -1;
    }
}

 int
recog_336 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  switch (pattern28 (x1))
    {
    case 0:
      if (!register_operand (operands[0], E_V8HImode))
        return -1;
      x2 = XEXP (x1, 1);
      if (GET_MODE (x2) != E_V8HImode
          || !vector_operand (operands[1], E_V8HFmode)
          || !(
#line 7865 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && 1) && 
#line 694 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 4603; /* avx512fp16_fix_truncv8hi2 */

    case 1:
      if (!register_operand (operands[0], E_V16HImode))
        return -1;
      x2 = XEXP (x1, 1);
      if (GET_MODE (x2) != E_V16HImode
          || !vector_operand (operands[1], E_V16HFmode)
          || !(
#line 7865 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && 1) && 
#line 694 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 4607; /* avx512fp16_fix_truncv16hi2 */

    case 2:
      if (!register_operand (operands[0], E_V32HImode))
        return -1;
      x2 = XEXP (x1, 1);
      if (GET_MODE (x2) != E_V32HImode
          || !vector_operand (operands[1], E_V32HFmode)
          || !(
#line 7865 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && 1) && 
#line 694 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 4615; /* avx512fp16_fix_truncv32hi2 */

    case 3:
      if (!register_operand (operands[0], E_V8SImode))
        return -1;
      x2 = XEXP (x1, 1);
      if (GET_MODE (x2) != E_V8SImode)
        return -1;
      switch (GET_MODE (operands[1]))
        {
        case E_V8HFmode:
          if (!vector_operand (operands[1], E_V8HFmode)
              || !(
#line 7865 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && 1) && 
#line 695 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 4623; /* avx512fp16_fix_truncv8si2 */

        case E_V8SFmode:
          if (!nonimmediate_operand (operands[1], E_V8SFmode)
              || !
#line 8793 "../../gcc/config/i386/sse.md"
(TARGET_AVX && 1))
            return -1;
          return 4888; /* fix_truncv8sfv8si2 */

        case E_V8DFmode:
          if (!vector_operand (operands[1], E_V8DFmode)
              || !
#line 9568 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512))
            return -1;
          return 5029; /* fix_truncv8dfv8si2 */

        default:
          return -1;
        }

    case 4:
      x2 = XEXP (x1, 1);
      switch (pattern520 (x2))
        {
        case 0:
          if (!(
#line 7865 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && 1) && 
#line 695 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return -1;
          return 4631; /* avx512fp16_fix_truncv16si2 */

        case 1:
          if (!
#line 8773 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512))
            return -1;
          return 4876; /* fix_truncv16sfv16si2 */

        default:
          return -1;
        }

    case 5:
      x2 = XEXP (x1, 1);
      switch (pattern521 (x2, 
E_V8DImode))
        {
        case 0:
          if (!(
#line 7865 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && 1) && 
#line 696 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return -1;
          return 4639; /* avx512fp16_fix_truncv8di2 */

        case 1:
          if (!(
#line 9699 "../../gcc/config/i386/sse.md"
(TARGET_AVX512DQ && 1) && 
#line 537 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return -1;
          return 5074; /* fix_truncv8dfv8di2 */

        case 2:
          if (!(
#line 9742 "../../gcc/config/i386/sse.md"
(TARGET_AVX512DQ) && 
#line 627 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return -1;
          return 5130; /* fix_truncv8sfv8di2 */

        default:
          return -1;
        }

    case 6:
      if (!register_operand (operands[0], E_V4SImode))
        return -1;
      x2 = XEXP (x1, 1);
      if (GET_MODE (x2) != E_V4SImode)
        return -1;
      switch (GET_MODE (operands[1]))
        {
        case E_V4HFmode:
          if (!memory_operand (operands[1], E_V4HFmode)
              || !
#line 7915 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL))
            return -1;
          return 4667; /* *avx512fp16_fix_truncv4si2_load */

        case E_V4SFmode:
          if (!vector_operand (operands[1], E_V4SFmode)
              || !
#line 8823 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && 1))
            return -1;
          return 4892; /* fix_truncv4sfv4si2 */

        case E_V4DFmode:
          if (!nonimmediate_operand (operands[1], E_V4DFmode)
              || !
#line 9658 "../../gcc/config/i386/sse.md"
(TARGET_AVX || (TARGET_AVX512VL && TARGET_AVX512F)))
            return -1;
          return 5046; /* fix_truncv4dfv4si2 */

        default:
          return -1;
        }

    case 7:
      x2 = XEXP (x1, 1);
      switch (pattern522 (x2))
        {
        case 0:
          if (!
#line 7915 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL))
            return -1;
          return 4671; /* *avx512fp16_fix_truncv4di2_load */

        case 1:
          if (!(
#line 9699 "../../gcc/config/i386/sse.md"
(TARGET_AVX512DQ && 1) && 
#line 537 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 5082; /* fix_truncv4dfv4di2 */

        case 2:
          if (!(
#line 9742 "../../gcc/config/i386/sse.md"
(TARGET_AVX512DQ) && 
#line 627 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 5134; /* fix_truncv4sfv4di2 */

        default:
          return -1;
        }

    case 8:
      x2 = XEXP (x1, 1);
      switch (pattern523 (x2))
        {
        case 0:
          if (!
#line 7965 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL))
            return -1;
          return 4683; /* *avx512fp16_fix_truncv2di2_load */

        case 1:
          if (!(
#line 9699 "../../gcc/config/i386/sse.md"
(TARGET_AVX512DQ && 1) && 
#line 537 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 5090; /* fix_truncv2dfv2di2 */

        default:
          return -1;
        }

    case 9:
      if (!
#line 7905 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL))
        return -1;
      return 4659; /* avx512fp16_fix_truncv4si2 */

    case 10:
      if (!
#line 7905 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL))
        return -1;
      return 4663; /* avx512fp16_fix_truncv4di2 */

    case 11:
      if (!
#line 7955 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL))
        return -1;
      return 4679; /* avx512fp16_fix_truncv2di2 */

    case 12:
      if (!
#line 9765 "../../gcc/config/i386/sse.md"
(TARGET_AVX512DQ && TARGET_AVX512VL))
        return -1;
      return 5142; /* avx512dq_fix_truncv2sfv2di2 */

    default:
      return -1;
    }
}

 int
recog_342 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  switch (pattern28 (x1))
    {
    case 0:
      if (!register_operand (operands[0], E_V8HImode))
        return -1;
      x2 = XEXP (x1, 1);
      if (GET_MODE (x2) != E_V8HImode
          || !vector_operand (operands[1], E_V8HFmode)
          || !(
#line 7865 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && 1) && 
#line 694 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 4605; /* avx512fp16_fixuns_truncv8hi2 */

    case 1:
      if (!register_operand (operands[0], E_V16HImode))
        return -1;
      x2 = XEXP (x1, 1);
      if (GET_MODE (x2) != E_V16HImode
          || !vector_operand (operands[1], E_V16HFmode)
          || !(
#line 7865 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && 1) && 
#line 694 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 4611; /* avx512fp16_fixuns_truncv16hi2 */

    case 2:
      if (!register_operand (operands[0], E_V32HImode))
        return -1;
      x2 = XEXP (x1, 1);
      if (GET_MODE (x2) != E_V32HImode
          || !vector_operand (operands[1], E_V32HFmode)
          || !(
#line 7865 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && 1) && 
#line 694 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 4619; /* avx512fp16_fixuns_truncv32hi2 */

    case 3:
      x2 = XEXP (x1, 1);
      switch (pattern521 (x2, 
E_V8SImode))
        {
        case 0:
          if (!(
#line 7865 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && 1) && 
#line 695 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 4627; /* avx512fp16_fixuns_truncv8si2 */

        case 1:
          if (!
#line 9568 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512))
            return -1;
          return 5033; /* fixuns_truncv8dfv8si2 */

        case 2:
          if (!(
#line 9913 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL) && 
#line 441 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 5152; /* *fixuns_truncv8sfv8si2 */

        default:
          return -1;
        }

    case 4:
      x2 = XEXP (x1, 1);
      switch (pattern520 (x2))
        {
        case 0:
          if (!(
#line 7865 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && 1) && 
#line 695 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return -1;
          return 4635; /* avx512fp16_fixuns_truncv16si2 */

        case 1:
          if (!
#line 8773 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512))
            return -1;
          return 4880; /* fixuns_truncv16sfv16si2 */

        default:
          return -1;
        }

    case 5:
      x2 = XEXP (x1, 1);
      switch (pattern521 (x2, 
E_V8DImode))
        {
        case 0:
          if (!(
#line 7865 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && 1) && 
#line 696 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return -1;
          return 4643; /* avx512fp16_fixuns_truncv8di2 */

        case 1:
          if (!(
#line 9699 "../../gcc/config/i386/sse.md"
(TARGET_AVX512DQ && 1) && 
#line 537 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return -1;
          return 5078; /* fixuns_truncv8dfv8di2 */

        case 2:
          if (!(
#line 9742 "../../gcc/config/i386/sse.md"
(TARGET_AVX512DQ) && 
#line 627 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return -1;
          return 5132; /* fixuns_truncv8sfv8di2 */

        default:
          return -1;
        }

    case 6:
      if (!register_operand (operands[0], E_V4SImode))
        return -1;
      x2 = XEXP (x1, 1);
      if (GET_MODE (x2) != E_V4SImode)
        return -1;
      switch (GET_MODE (operands[1]))
        {
        case E_V4HFmode:
          if (!memory_operand (operands[1], E_V4HFmode)
              || !
#line 7915 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL))
            return -1;
          return 4669; /* *avx512fp16_fixuns_truncv4si2_load */

        case E_V4DFmode:
          if (!nonimmediate_operand (operands[1], E_V4DFmode)
              || !
#line 9678 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL && TARGET_AVX512F))
            return -1;
          return 5052; /* fixuns_truncv4dfv4si2 */

        case E_V4SFmode:
          if (!nonimmediate_operand (operands[1], E_V4SFmode)
              || !
#line 9913 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))
            return -1;
          return 5154; /* *fixuns_truncv4sfv4si2 */

        default:
          return -1;
        }

    case 7:
      x2 = XEXP (x1, 1);
      switch (pattern522 (x2))
        {
        case 0:
          if (!
#line 7915 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL))
            return -1;
          return 4673; /* *avx512fp16_fixuns_truncv4di2_load */

        case 1:
          if (!(
#line 9699 "../../gcc/config/i386/sse.md"
(TARGET_AVX512DQ && 1) && 
#line 537 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 5086; /* fixuns_truncv4dfv4di2 */

        case 2:
          if (!(
#line 9742 "../../gcc/config/i386/sse.md"
(TARGET_AVX512DQ) && 
#line 627 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 5136; /* fixuns_truncv4sfv4di2 */

        default:
          return -1;
        }

    case 8:
      x2 = XEXP (x1, 1);
      switch (pattern523 (x2))
        {
        case 0:
          if (!
#line 7965 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL))
            return -1;
          return 4685; /* *avx512fp16_fixuns_truncv2di2_load */

        case 1:
          if (!(
#line 9699 "../../gcc/config/i386/sse.md"
(TARGET_AVX512DQ && 1) && 
#line 537 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 5092; /* fixuns_truncv2dfv2di2 */

        default:
          return -1;
        }

    case 9:
      if (!
#line 7905 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL))
        return -1;
      return 4661; /* avx512fp16_fixuns_truncv4si2 */

    case 10:
      if (!
#line 7905 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL))
        return -1;
      return 4665; /* avx512fp16_fixuns_truncv4di2 */

    case 11:
      if (!
#line 7955 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL))
        return -1;
      return 4681; /* avx512fp16_fixuns_truncv2di2 */

    case 12:
      if (!
#line 9765 "../../gcc/config/i386/sse.md"
(TARGET_AVX512DQ && TARGET_AVX512VL))
        return -1;
      return 5144; /* avx512dq_fixuns_truncv2sfv2di2 */

    default:
      return -1;
    }
}

 int
recog_347 (rtx x1 ATTRIBUTE_UNUSED,
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
  switch (GET_CODE (x4))
    {
    case REG:
    case SUBREG:
    case MEM:
    case VEC_DUPLICATE:
      switch (pattern180 (x3))
        {
        case 0:
          if (!(
#line 2661 "../../gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (MINUS, V32HFmode, operands)
   && 1 && 1) && 
#line 390 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_EVEX512)))
            return -1;
          return 2681; /* *subv32hf3 */

        case 1:
          if (!(
#line 2661 "../../gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (MINUS, V16HFmode, operands)
   && 1 && 1) && 
#line 391 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL)))
            return -1;
          return 2689; /* *subv16hf3 */

        case 2:
          if (!(
#line 2661 "../../gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (MINUS, V8HFmode, operands)
   && 1 && 1) && 
#line 392 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL)))
            return -1;
          return 2697; /* *subv8hf3 */

        case 3:
          if (!(
#line 2661 "../../gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (MINUS, V16SFmode, operands)
   && 1 && 1) && 
#line 393 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 2705; /* *subv16sf3 */

        case 4:
          if (!(
#line 2661 "../../gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (MINUS, V8SFmode, operands)
   && 1 && 1) && 
#line 393 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 2713; /* *subv8sf3 */

        case 5:
          if (!
#line 2661 "../../gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (MINUS, V4SFmode, operands)
   && 1 && 1))
            return -1;
          return 2721; /* *subv4sf3 */

        case 6:
          if (!(
#line 2661 "../../gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (MINUS, V8DFmode, operands)
   && 1 && 1) && 
#line 394 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 2729; /* *subv8df3 */

        case 7:
          if (!(
#line 2661 "../../gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (MINUS, V4DFmode, operands)
   && 1 && 1) && 
#line 394 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 2737; /* *subv4df3 */

        case 8:
          if (!(
#line 2661 "../../gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (MINUS, V2DFmode, operands)
   && 1 && 1) && 
#line 395 "../../gcc/config/i386/sse.md"
(TARGET_SSE2)))
            return -1;
          return 2745; /* *subv2df3 */

        case 9:
          if (!(
#line 16267 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (MINUS, V64QImode, operands)) && 
#line 588 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512)))
            return -1;
          return 7460; /* *subv64qi3 */

        case 10:
          if (!(
#line 16267 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (MINUS, V32QImode, operands)) && 
#line 588 "../../gcc/config/i386/sse.md"
(TARGET_AVX2)))
            return -1;
          return 7462; /* *subv32qi3 */

        case 11:
          if (!
#line 16267 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (MINUS, V16QImode, operands)))
            return -1;
          return 7464; /* *subv16qi3 */

        case 12:
          if (!(
#line 16267 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (MINUS, V32HImode, operands)) && 
#line 589 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512)))
            return -1;
          return 7466; /* *subv32hi3 */

        case 13:
          if (!(
#line 16267 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (MINUS, V16HImode, operands)) && 
#line 589 "../../gcc/config/i386/sse.md"
(TARGET_AVX2)))
            return -1;
          return 7468; /* *subv16hi3 */

        case 14:
          if (!
#line 16267 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (MINUS, V8HImode, operands)))
            return -1;
          return 7470; /* *subv8hi3 */

        case 15:
          if (!(
#line 16267 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (MINUS, V16SImode, operands)) && 
#line 590 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 7472; /* *subv16si3 */

        case 16:
          if (!(
#line 16267 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (MINUS, V8SImode, operands)) && 
#line 590 "../../gcc/config/i386/sse.md"
(TARGET_AVX2)))
            return -1;
          return 7474; /* *subv8si3 */

        case 17:
          if (!
#line 16267 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (MINUS, V4SImode, operands)))
            return -1;
          return 7476; /* *subv4si3 */

        case 18:
          if (!(
#line 16267 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (MINUS, V8DImode, operands)) && 
#line 591 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 7478; /* *subv8di3 */

        case 19:
          if (!(
#line 16267 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (MINUS, V4DImode, operands)) && 
#line 591 "../../gcc/config/i386/sse.md"
(TARGET_AVX2)))
            return -1;
          return 7480; /* *subv4di3 */

        case 20:
          if (!
#line 16267 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (MINUS, V2DImode, operands)))
            return -1;
          return 7482; /* *subv2di3 */

        case 21:
          if (!(
#line 32110 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256) && 
#line 565 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_512)))
            return -1;
          return 10604; /* avx10_2_subnepbf16_v32bf */

        case 22:
          if (!
#line 32110 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
            return -1;
          return 10612; /* avx10_2_subnepbf16_v16bf */

        case 23:
          if (!
#line 32110 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
            return -1;
          return 10620; /* avx10_2_subnepbf16_v8bf */

        default:
          return -1;
        }

    case VEC_SELECT:
      switch (pattern187 (x3))
        {
        case 0:
          if (!
#line 22567 "../../gcc/config/i386/sse.md"
(TARGET_AVX2))
            return -1;
          return 8586; /* avx2_phsubwv16hi3 */

        case 1:
          if (!
#line 22590 "../../gcc/config/i386/sse.md"
(TARGET_SSSE3))
            return -1;
          return 8590; /* ssse3_phsubwv8hi3 */

        case 2:
          if (!
#line 22657 "../../gcc/config/i386/sse.md"
(TARGET_AVX2))
            return -1;
          return 8597; /* avx2_phsubdv8si3 */

        case 3:
          if (!
#line 22678 "../../gcc/config/i386/sse.md"
(TARGET_SSSE3))
            return -1;
          return 8599; /* ssse3_phsubdv4si3 */

        default:
          return -1;
        }

    case SIGN_EXTEND:
      switch (pattern189 (x3, 
SIGN_EXTEND))
        {
        case 0:
          if (!
#line 26430 "../../gcc/config/i386/sse.md"
(TARGET_XOP))
            return -1;
          return 9022; /* xop_phsubbw */

        case 1:
          if (!
#line 26450 "../../gcc/config/i386/sse.md"
(TARGET_XOP))
            return -1;
          return 9023; /* xop_phsubwd */

        case 2:
          if (!
#line 26468 "../../gcc/config/i386/sse.md"
(TARGET_XOP))
            return -1;
          return 9024; /* xop_phsubdq */

        default:
          return -1;
        }

    default:
      return -1;
    }
}

 int
recog_363 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12, x13, x14, x15, x16, x17;
  rtx x18;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  switch (XINT (x3, 1))
    {
    case 39:
      if (GET_MODE (x3) != E_CCGZmode)
        return -1;
      x4 = XVECEXP (x3, 0, 2);
      if (GET_CODE (x4) != LTU)
        return -1;
      x5 = XEXP (x4, 0);
      if (GET_CODE (x5) != REG
          || REGNO (x5) != 17
          || GET_MODE (x5) != E_CCmode)
        return -1;
      x6 = XEXP (x4, 1);
      if (x6 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
        return -1;
      x7 = XEXP (x2, 0);
      if (GET_CODE (x7) != REG
          || REGNO (x7) != 17
          || GET_MODE (x7) != E_CCGZmode)
        return -1;
      x8 = XVECEXP (x1, 0, 1);
      if (GET_CODE (x8) != CLOBBER)
        return -1;
      x9 = XVECEXP (x3, 0, 0);
      operands[1] = x9;
      x10 = XVECEXP (x3, 0, 1);
      operands[2] = x10;
      x11 = XEXP (x8, 0);
      operands[0] = x11;
      switch (GET_MODE (operands[1]))
        {
        case E_SImode:
          if (pattern1672 (x4, 
E_SImode) != 0
              || !
#line 1235 "../../gcc/config/i386/i386.md"
(!TARGET_64BIT))
            return -1;
          return 521; /* subsi3_carry_ccgz */

        case E_DImode:
          if (pattern1672 (x4, 
E_DImode) != 0
              || !
#line 1236 "../../gcc/config/i386/i386.md"
(TARGET_64BIT))
            return -1;
          return 522; /* subdi3_carry_ccgz */

        default:
          return -1;
        }

    case 22:
      x4 = XVECEXP (x3, 0, 2);
      if (GET_CODE (x4) != REG
          || REGNO (x4) != 7
          || pattern550 (x1) != 0)
        return -1;
      x9 = XVECEXP (x3, 0, 0);
      operands[1] = x9;
      if (!tls_symbolic_operand (operands[1], E_VOIDmode))
        return -1;
      x10 = XVECEXP (x3, 0, 1);
      operands[2] = x10;
      switch (GET_MODE (operands[0]))
        {
        case E_SImode:
          if (pattern1560 (x3, 
E_SImode) != 0
              || !(
#line 23207 "../../gcc/config/i386/i386.md"
(TARGET_64BIT && TARGET_GNU2_TLS) && 
#line 1408 "../../gcc/config/i386/i386.md"
(ptr_mode == SImode)))
            return -1;
          return 1663; /* *tls_dynamic_gnu2_call_64_si */

        case E_DImode:
          if (pattern1560 (x3, 
E_DImode) != 0
              || !(
#line 23207 "../../gcc/config/i386/i386.md"
(TARGET_64BIT && TARGET_GNU2_TLS) && 
#line 1408 "../../gcc/config/i386/i386.md"
(ptr_mode == DImode)))
            return -1;
          return 1664; /* *tls_dynamic_gnu2_call_64_di */

        default:
          return -1;
        }

    case 52:
      if (GET_MODE (x3) != E_V8QImode)
        return -1;
      x8 = XVECEXP (x1, 0, 1);
      if (GET_CODE (x8) != CLOBBER)
        return -1;
      x7 = XEXP (x2, 0);
      operands[0] = x7;
      if (pattern936 (x1) != 0
          || !
#line 23150 "../../gcc/config/i386/sse.md"
((TARGET_MMX || TARGET_MMX_WITH_SSE) && TARGET_SSSE3))
        return -1;
      return 8627; /* *ssse3_pshufbv8qi3 */

    case 132:
      if (pattern553 (x1, 
132, 
3) != 0)
        return -1;
      x9 = XVECEXP (x3, 0, 0);
      operands[1] = x9;
      if (!register_operand (operands[1], E_V16QImode))
        return -1;
      x10 = XVECEXP (x3, 0, 1);
      operands[2] = x10;
      if (!nonimmediate_operand (operands[2], E_V16QImode))
        return -1;
      x4 = XVECEXP (x3, 0, 2);
      operands[3] = x4;
      if (!const_0_to_255_operand (operands[3], E_SImode))
        return -1;
      x8 = XVECEXP (x1, 0, 1);
      x12 = XEXP (x8, 1);
      x13 = XVECEXP (x12, 0, 0);
      if (!rtx_equal_p (x13, operands[1]))
        return -1;
      x14 = XVECEXP (x12, 0, 1);
      if (!rtx_equal_p (x14, operands[2]))
        return -1;
      x15 = XVECEXP (x12, 0, 2);
      if (!rtx_equal_p (x15, operands[3]))
        return -1;
      switch (pattern1768 (x3))
        {
        case 0:
          if (!
#line 26026 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_2))
            return -1;
          return 8979; /* sse4_2_pcmpistri */

        case 1:
          if (!
#line 26050 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_2))
            return -1;
          return 8980; /* sse4_2_pcmpistrm */

        default:
          return -1;
        }

    case 153:
      x4 = XVECEXP (x3, 0, 2);
      if (GET_CODE (x4) != MEM)
        return -1;
      x5 = XEXP (x4, 0);
      if (GET_CODE (x5) != UNSPEC
          || XVECLEN (x5, 0) != 3
          || XINT (x5, 1) != 154)
        return -1;
      x8 = XVECEXP (x1, 0, 1);
      if (GET_CODE (x8) != CLOBBER)
        return -1;
      x7 = XEXP (x2, 0);
      operands[0] = x7;
      x16 = XVECEXP (x5, 0, 2);
      if (!const1248_operand (x16, E_SImode))
        return -1;
      x9 = XVECEXP (x3, 0, 0);
      switch (GET_CODE (x9))
        {
        case REG:
        case SUBREG:
          operands[1] = x9;
          x10 = XVECEXP (x3, 0, 1);
          operands[7] = x10;
          operands[6] = x4;
          x17 = XVECEXP (x5, 0, 0);
          operands[4] = x17;
          x18 = XVECEXP (x5, 0, 1);
          operands[3] = x18;
          operands[5] = x16;
          x11 = XEXP (x8, 0);
          operands[2] = x11;
          switch (GET_MODE (operands[0]))
            {
            case E_V16SImode:
              if (!register_operand (operands[0], E_V16SImode)
                  || GET_MODE (x3) != E_V16SImode
                  || !vsib_mem_operator (operands[6], E_SImode))
                return -1;
              switch (GET_MODE (operands[1]))
                {
                case E_V16SImode:
                  if (!register_operand (operands[1], E_V16SImode))
                    return -1;
                  switch (pattern1820 (x5, 
E_HImode, 
E_V16SImode))
                    {
                    case 0:
                      if (!(
#line 29467 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && ((
#line 1010 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode))))
                        return -1;
                      return 9740; /* *avx512f_gathersiv16si */

                    case 1:
                      if (!(
#line 29467 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && ((
#line 1010 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode))))
                        return -1;
                      return 9752; /* *avx512f_gathersiv16si */

                    default:
                      return -1;
                    }

                case E_V8SImode:
                  if (!register_operand (operands[1], E_V8SImode))
                    return -1;
                  switch (pattern1820 (x5, 
E_QImode, 
E_V8DImode))
                    {
                    case 0:
                      if (!(
#line 29529 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && ((
#line 1010 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode))))
                        return -1;
                      return 9788; /* *avx512f_gatherdiv16si */

                    case 1:
                      if (!(
#line 29529 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && ((
#line 1010 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode))))
                        return -1;
                      return 9800; /* *avx512f_gatherdiv16si */

                    default:
                      return -1;
                    }

                default:
                  return -1;
                }

            case E_V16SFmode:
              if (!register_operand (operands[0], E_V16SFmode)
                  || GET_MODE (x3) != E_V16SFmode
                  || !vsib_mem_operator (operands[6], E_SFmode))
                return -1;
              switch (GET_MODE (operands[1]))
                {
                case E_V16SFmode:
                  if (!register_operand (operands[1], E_V16SFmode))
                    return -1;
                  switch (pattern1820 (x5, 
E_HImode, 
E_V16SImode))
                    {
                    case 0:
                      if (!(
#line 29467 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && ((
#line 1010 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode))))
                        return -1;
                      return 9741; /* *avx512f_gathersiv16sf */

                    case 1:
                      if (!(
#line 29467 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && ((
#line 1010 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode))))
                        return -1;
                      return 9753; /* *avx512f_gathersiv16sf */

                    default:
                      return -1;
                    }

                case E_V8SFmode:
                  if (!register_operand (operands[1], E_V8SFmode))
                    return -1;
                  switch (pattern1820 (x5, 
E_QImode, 
E_V8DImode))
                    {
                    case 0:
                      if (!(
#line 29529 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && ((
#line 1010 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode))))
                        return -1;
                      return 9789; /* *avx512f_gatherdiv16sf */

                    case 1:
                      if (!(
#line 29529 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && ((
#line 1010 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode))))
                        return -1;
                      return 9801; /* *avx512f_gatherdiv16sf */

                    default:
                      return -1;
                    }

                default:
                  return -1;
                }

            case E_V8DImode:
              switch (pattern1741 (x3, 
E_DImode, 
E_V8DImode))
                {
                case 0:
                  if (!(
#line 29467 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && ((
#line 1011 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode))))
                    return -1;
                  return 9742; /* *avx512f_gathersiv8di */

                case 1:
                  if (!(
#line 29529 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && ((
#line 1011 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode))))
                    return -1;
                  return 9790; /* *avx512f_gatherdiv8di */

                case 2:
                  if (!(
#line 29467 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && ((
#line 1011 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode))))
                    return -1;
                  return 9754; /* *avx512f_gathersiv8di */

                case 3:
                  if (!(
#line 29529 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && ((
#line 1011 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode))))
                    return -1;
                  return 9802; /* *avx512f_gatherdiv8di */

                default:
                  return -1;
                }

            case E_V8DFmode:
              switch (pattern1741 (x3, 
E_DFmode, 
E_V8DFmode))
                {
                case 0:
                  if (!(
#line 29467 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && ((
#line 1011 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode))))
                    return -1;
                  return 9743; /* *avx512f_gathersiv8df */

                case 1:
                  if (!(
#line 29529 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && ((
#line 1011 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode))))
                    return -1;
                  return 9791; /* *avx512f_gatherdiv8df */

                case 2:
                  if (!(
#line 29467 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && ((
#line 1011 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode))))
                    return -1;
                  return 9755; /* *avx512f_gathersiv8df */

                case 3:
                  if (!(
#line 29529 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && ((
#line 1011 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode))))
                    return -1;
                  return 9803; /* *avx512f_gatherdiv8df */

                default:
                  return -1;
                }

            case E_V8SImode:
              if (pattern1742 (x3, 
E_SImode, 
E_V8SImode) != 0)
                return -1;
              switch (GET_MODE (operands[1]))
                {
                case E_V8SImode:
                  if (!register_operand (operands[1], E_V8SImode))
                    return -1;
                  switch (pattern1829 (x5, 
E_V8SImode))
                    {
                    case 0:
                      if (!(
#line 29467 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && ((
#line 1012 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode))))
                        return -1;
                      return 9744; /* *avx512f_gathersiv8si */

                    case 1:
                      if (!(
#line 29467 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && ((
#line 1012 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode))))
                        return -1;
                      return 9756; /* *avx512f_gathersiv8si */

                    default:
                      return -1;
                    }

                case E_V4SImode:
                  if (!register_operand (operands[1], E_V4SImode))
                    return -1;
                  switch (pattern1829 (x5, 
E_V4DImode))
                    {
                    case 0:
                      if (!(
#line 29529 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && ((
#line 1012 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode))))
                        return -1;
                      return 9792; /* *avx512f_gatherdiv8si */

                    case 1:
                      if (!(
#line 29529 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && ((
#line 1012 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode))))
                        return -1;
                      return 9804; /* *avx512f_gatherdiv8si */

                    default:
                      return -1;
                    }

                default:
                  return -1;
                }

            case E_V8SFmode:
              if (pattern1742 (x3, 
E_SFmode, 
E_V8SFmode) != 0)
                return -1;
              switch (GET_MODE (operands[1]))
                {
                case E_V8SFmode:
                  if (!register_operand (operands[1], E_V8SFmode))
                    return -1;
                  switch (pattern1829 (x5, 
E_V8SImode))
                    {
                    case 0:
                      if (!(
#line 29467 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && ((
#line 1012 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode))))
                        return -1;
                      return 9745; /* *avx512f_gathersiv8sf */

                    case 1:
                      if (!(
#line 29467 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && ((
#line 1012 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode))))
                        return -1;
                      return 9757; /* *avx512f_gathersiv8sf */

                    default:
                      return -1;
                    }

                case E_V4SFmode:
                  if (!register_operand (operands[1], E_V4SFmode))
                    return -1;
                  switch (pattern1829 (x5, 
E_V4DImode))
                    {
                    case 0:
                      if (!(
#line 29529 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && ((
#line 1012 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode))))
                        return -1;
                      return 9793; /* *avx512f_gatherdiv8sf */

                    case 1:
                      if (!(
#line 29529 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && ((
#line 1012 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode))))
                        return -1;
                      return 9805; /* *avx512f_gatherdiv8sf */

                    default:
                      return -1;
                    }

                default:
                  return -1;
                }

            case E_V4DImode:
              switch (pattern1744 (x3, 
E_DImode, 
E_V4DImode))
                {
                case 0:
                  if (!(
#line 29467 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && ((
#line 1013 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode))))
                    return -1;
                  return 9746; /* *avx512f_gathersiv4di */

                case 1:
                  if (!(
#line 29529 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && ((
#line 1013 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode))))
                    return -1;
                  return 9794; /* *avx512f_gatherdiv4di */

                case 2:
                  if (!(
#line 29467 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && ((
#line 1013 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode))))
                    return -1;
                  return 9758; /* *avx512f_gathersiv4di */

                case 3:
                  if (!(
#line 29529 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && ((
#line 1013 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode))))
                    return -1;
                  return 9806; /* *avx512f_gatherdiv4di */

                default:
                  return -1;
                }

            case E_V4DFmode:
              switch (pattern1744 (x3, 
E_DFmode, 
E_V4DFmode))
                {
                case 0:
                  if (!(
#line 29467 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && ((
#line 1013 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode))))
                    return -1;
                  return 9747; /* *avx512f_gathersiv4df */

                case 1:
                  if (!(
#line 29529 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && ((
#line 1013 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode))))
                    return -1;
                  return 9795; /* *avx512f_gatherdiv4df */

                case 2:
                  if (!(
#line 29467 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && ((
#line 1013 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode))))
                    return -1;
                  return 9759; /* *avx512f_gathersiv4df */

                case 3:
                  if (!(
#line 29529 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && ((
#line 1013 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode))))
                    return -1;
                  return 9807; /* *avx512f_gatherdiv4df */

                default:
                  return -1;
                }

            case E_V4SImode:
              switch (pattern1746 (x3, 
E_SImode, 
E_V4SImode))
                {
                case 0:
                  if (!(
#line 29467 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && ((
#line 1014 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode))))
                    return -1;
                  return 9748; /* *avx512f_gathersiv4si */

                case 1:
                  if (!(
#line 29529 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && ((
#line 1014 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode))))
                    return -1;
                  return 9796; /* *avx512f_gatherdiv4si */

                case 2:
                  if (!(
#line 29467 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && ((
#line 1014 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode))))
                    return -1;
                  return 9760; /* *avx512f_gathersiv4si */

                case 3:
                  if (!(
#line 29529 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && ((
#line 1014 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode))))
                    return -1;
                  return 9808; /* *avx512f_gatherdiv4si */

                default:
                  return -1;
                }

            case E_V4SFmode:
              switch (pattern1746 (x3, 
E_SFmode, 
E_V4SFmode))
                {
                case 0:
                  if (!(
#line 29467 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && ((
#line 1014 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode))))
                    return -1;
                  return 9749; /* *avx512f_gathersiv4sf */

                case 1:
                  if (!(
#line 29529 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && ((
#line 1014 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode))))
                    return -1;
                  return 9797; /* *avx512f_gatherdiv4sf */

                case 2:
                  if (!(
#line 29467 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && ((
#line 1014 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode))))
                    return -1;
                  return 9761; /* *avx512f_gathersiv4sf */

                case 3:
                  if (!(
#line 29529 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && ((
#line 1014 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode))))
                    return -1;
                  return 9809; /* *avx512f_gatherdiv4sf */

                default:
                  return -1;
                }

            case E_V2DImode:
              switch (pattern1746 (x3, 
E_DImode, 
E_V2DImode))
                {
                case 0:
                  if (!(
#line 29467 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && ((
#line 1015 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode))))
                    return -1;
                  return 9750; /* *avx512f_gathersiv2di */

                case 1:
                  if (!(
#line 29529 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && ((
#line 1015 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode))))
                    return -1;
                  return 9798; /* *avx512f_gatherdiv2di */

                case 2:
                  if (!(
#line 29467 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && ((
#line 1015 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode))))
                    return -1;
                  return 9762; /* *avx512f_gathersiv2di */

                case 3:
                  if (!(
#line 29529 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && ((
#line 1015 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode))))
                    return -1;
                  return 9810; /* *avx512f_gatherdiv2di */

                default:
                  return -1;
                }

            case E_V2DFmode:
              switch (pattern1746 (x3, 
E_DFmode, 
E_V2DFmode))
                {
                case 0:
                  if (!(
#line 29467 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && ((
#line 1015 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode))))
                    return -1;
                  return 9751; /* *avx512f_gathersiv2df */

                case 1:
                  if (!(
#line 29529 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && ((
#line 1015 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode))))
                    return -1;
                  return 9799; /* *avx512f_gatherdiv2df */

                case 2:
                  if (!(
#line 29467 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && ((
#line 1015 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode))))
                    return -1;
                  return 9763; /* *avx512f_gathersiv2df */

                case 3:
                  if (!(
#line 29529 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && ((
#line 1015 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode))))
                    return -1;
                  return 9811; /* *avx512f_gatherdiv2df */

                default:
                  return -1;
                }

            default:
              return -1;
            }

        case PC:
          x10 = XVECEXP (x3, 0, 1);
          operands[6] = x10;
          operands[5] = x4;
          x17 = XVECEXP (x5, 0, 0);
          operands[3] = x17;
          x18 = XVECEXP (x5, 0, 1);
          operands[2] = x18;
          operands[4] = x16;
          x11 = XEXP (x8, 0);
          operands[1] = x11;
          switch (GET_MODE (operands[0]))
            {
            case E_V16SImode:
              switch (pattern1715 (x3, 
E_SImode, 
E_V16SImode))
                {
                case 0:
                  if (!(
#line 29488 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && ((
#line 1010 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode))))
                    return -1;
                  return 9764; /* *avx512f_gathersiv16si_2 */

                case 1:
                  if (!(
#line 29488 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && ((
#line 1010 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode))))
                    return -1;
                  return 9776; /* *avx512f_gathersiv16si_2 */

                case 2:
                  if (!(
#line 29550 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && ((
#line 1010 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode))))
                    return -1;
                  return 9812; /* *avx512f_gatherdiv16si_2 */

                case 3:
                  if (!(
#line 29550 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && ((
#line 1010 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode))))
                    return -1;
                  return 9824; /* *avx512f_gatherdiv16si_2 */

                default:
                  return -1;
                }

            case E_V16SFmode:
              switch (pattern1715 (x3, 
E_SFmode, 
E_V16SFmode))
                {
                case 0:
                  if (!(
#line 29488 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && ((
#line 1010 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode))))
                    return -1;
                  return 9765; /* *avx512f_gathersiv16sf_2 */

                case 1:
                  if (!(
#line 29488 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && ((
#line 1010 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode))))
                    return -1;
                  return 9777; /* *avx512f_gathersiv16sf_2 */

                case 2:
                  if (!(
#line 29550 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && ((
#line 1010 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode))))
                    return -1;
                  return 9813; /* *avx512f_gatherdiv16sf_2 */

                case 3:
                  if (!(
#line 29550 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && ((
#line 1010 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode))))
                    return -1;
                  return 9825; /* *avx512f_gatherdiv16sf_2 */

                default:
                  return -1;
                }

            case E_V8DImode:
              switch (pattern1717 (x3, 
E_DImode, 
E_V8DImode))
                {
                case 0:
                  if (!(
#line 29488 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && ((
#line 1011 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode))))
                    return -1;
                  return 9766; /* *avx512f_gathersiv8di_2 */

                case 1:
                  if (!(
#line 29550 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && ((
#line 1011 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode))))
                    return -1;
                  return 9814; /* *avx512f_gatherdiv8di_2 */

                case 2:
                  if (!(
#line 29488 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && ((
#line 1011 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode))))
                    return -1;
                  return 9778; /* *avx512f_gathersiv8di_2 */

                case 3:
                  if (!(
#line 29550 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && ((
#line 1011 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode))))
                    return -1;
                  return 9826; /* *avx512f_gatherdiv8di_2 */

                default:
                  return -1;
                }

            case E_V8DFmode:
              switch (pattern1717 (x3, 
E_DFmode, 
E_V8DFmode))
                {
                case 0:
                  if (!(
#line 29488 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && ((
#line 1011 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode))))
                    return -1;
                  return 9767; /* *avx512f_gathersiv8df_2 */

                case 1:
                  if (!(
#line 29550 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && ((
#line 1011 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode))))
                    return -1;
                  return 9815; /* *avx512f_gatherdiv8df_2 */

                case 2:
                  if (!(
#line 29488 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && ((
#line 1011 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode))))
                    return -1;
                  return 9779; /* *avx512f_gathersiv8df_2 */

                case 3:
                  if (!(
#line 29550 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && ((
#line 1011 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode))))
                    return -1;
                  return 9827; /* *avx512f_gatherdiv8df_2 */

                default:
                  return -1;
                }

            case E_V8SImode:
              switch (pattern1719 (x3, 
E_SImode, 
E_V8SImode))
                {
                case 0:
                  if (!(
#line 29488 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && ((
#line 1012 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode))))
                    return -1;
                  return 9768; /* *avx512f_gathersiv8si_2 */

                case 1:
                  if (!(
#line 29550 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && ((
#line 1012 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode))))
                    return -1;
                  return 9816; /* *avx512f_gatherdiv8si_2 */

                case 2:
                  if (!(
#line 29488 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && ((
#line 1012 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode))))
                    return -1;
                  return 9780; /* *avx512f_gathersiv8si_2 */

                case 3:
                  if (!(
#line 29550 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && ((
#line 1012 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode))))
                    return -1;
                  return 9828; /* *avx512f_gatherdiv8si_2 */

                default:
                  return -1;
                }

            case E_V8SFmode:
              switch (pattern1719 (x3, 
E_SFmode, 
E_V8SFmode))
                {
                case 0:
                  if (!(
#line 29488 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && ((
#line 1012 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode))))
                    return -1;
                  return 9769; /* *avx512f_gathersiv8sf_2 */

                case 1:
                  if (!(
#line 29550 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && ((
#line 1012 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode))))
                    return -1;
                  return 9817; /* *avx512f_gatherdiv8sf_2 */

                case 2:
                  if (!(
#line 29488 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && ((
#line 1012 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode))))
                    return -1;
                  return 9781; /* *avx512f_gathersiv8sf_2 */

                case 3:
                  if (!(
#line 29550 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && ((
#line 1012 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode))))
                    return -1;
                  return 9829; /* *avx512f_gatherdiv8sf_2 */

                default:
                  return -1;
                }

            case E_V4DImode:
              switch (pattern1721 (x3, 
E_DImode, 
E_V4DImode))
                {
                case 0:
                  if (!(
#line 29488 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && ((
#line 1013 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode))))
                    return -1;
                  return 9770; /* *avx512f_gathersiv4di_2 */

                case 1:
                  if (!(
#line 29550 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && ((
#line 1013 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode))))
                    return -1;
                  return 9818; /* *avx512f_gatherdiv4di_2 */

                case 2:
                  if (!(
#line 29488 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && ((
#line 1013 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode))))
                    return -1;
                  return 9782; /* *avx512f_gathersiv4di_2 */

                case 3:
                  if (!(
#line 29550 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && ((
#line 1013 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode))))
                    return -1;
                  return 9830; /* *avx512f_gatherdiv4di_2 */

                default:
                  return -1;
                }

            case E_V4DFmode:
              switch (pattern1721 (x3, 
E_DFmode, 
E_V4DFmode))
                {
                case 0:
                  if (!(
#line 29488 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && ((
#line 1013 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode))))
                    return -1;
                  return 9771; /* *avx512f_gathersiv4df_2 */

                case 1:
                  if (!(
#line 29550 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && ((
#line 1013 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode))))
                    return -1;
                  return 9819; /* *avx512f_gatherdiv4df_2 */

                case 2:
                  if (!(
#line 29488 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && ((
#line 1013 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode))))
                    return -1;
                  return 9783; /* *avx512f_gathersiv4df_2 */

                case 3:
                  if (!(
#line 29550 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && ((
#line 1013 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode))))
                    return -1;
                  return 9831; /* *avx512f_gatherdiv4df_2 */

                default:
                  return -1;
                }

            case E_V4SImode:
              switch (pattern1723 (x3, 
E_SImode, 
E_V4SImode))
                {
                case 0:
                  if (!(
#line 29488 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && ((
#line 1014 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode))))
                    return -1;
                  return 9772; /* *avx512f_gathersiv4si_2 */

                case 1:
                  if (!(
#line 29550 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && ((
#line 1014 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode))))
                    return -1;
                  return 9820; /* *avx512f_gatherdiv4si_2 */

                case 2:
                  if (!(
#line 29488 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && ((
#line 1014 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode))))
                    return -1;
                  return 9784; /* *avx512f_gathersiv4si_2 */

                case 3:
                  if (!(
#line 29550 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && ((
#line 1014 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode))))
                    return -1;
                  return 9832; /* *avx512f_gatherdiv4si_2 */

                default:
                  return -1;
                }

            case E_V4SFmode:
              switch (pattern1723 (x3, 
E_SFmode, 
E_V4SFmode))
                {
                case 0:
                  if (!(
#line 29488 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && ((
#line 1014 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode))))
                    return -1;
                  return 9773; /* *avx512f_gathersiv4sf_2 */

                case 1:
                  if (!(
#line 29550 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && ((
#line 1014 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode))))
                    return -1;
                  return 9821; /* *avx512f_gatherdiv4sf_2 */

                case 2:
                  if (!(
#line 29488 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && ((
#line 1014 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode))))
                    return -1;
                  return 9785; /* *avx512f_gathersiv4sf_2 */

                case 3:
                  if (!(
#line 29550 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && ((
#line 1014 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode))))
                    return -1;
                  return 9833; /* *avx512f_gatherdiv4sf_2 */

                default:
                  return -1;
                }

            case E_V2DImode:
              switch (pattern1723 (x3, 
E_DImode, 
E_V2DImode))
                {
                case 0:
                  if (!(
#line 29488 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && ((
#line 1015 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode))))
                    return -1;
                  return 9774; /* *avx512f_gathersiv2di_2 */

                case 1:
                  if (!(
#line 29550 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && ((
#line 1015 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode))))
                    return -1;
                  return 9822; /* *avx512f_gatherdiv2di_2 */

                case 2:
                  if (!(
#line 29488 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && ((
#line 1015 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode))))
                    return -1;
                  return 9786; /* *avx512f_gathersiv2di_2 */

                case 3:
                  if (!(
#line 29550 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && ((
#line 1015 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode))))
                    return -1;
                  return 9834; /* *avx512f_gatherdiv2di_2 */

                default:
                  return -1;
                }

            case E_V2DFmode:
              switch (pattern1723 (x3, 
E_DFmode, 
E_V2DFmode))
                {
                case 0:
                  if (!(
#line 29488 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && ((
#line 1015 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode))))
                    return -1;
                  return 9775; /* *avx512f_gathersiv2df_2 */

                case 1:
                  if (!(
#line 29550 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && ((
#line 1015 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode))))
                    return -1;
                  return 9823; /* *avx512f_gatherdiv2df_2 */

                case 2:
                  if (!(
#line 29488 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && ((
#line 1015 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode))))
                    return -1;
                  return 9787; /* *avx512f_gathersiv2df_2 */

                case 3:
                  if (!(
#line 29550 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && ((
#line 1015 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode))))
                    return -1;
                  return 9835; /* *avx512f_gatherdiv2df_2 */

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
recog_405 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  int res ATTRIBUTE_UNUSED;
  switch (pattern198 (x1))
    {
    case 0:
      x2 = XVECEXP (x1, 0, 0);
      x3 = XEXP (x2, 0);
      operands[0] = x3;
      switch (pattern701 (x1))
        {
        case 0:
          if ((
#line 16582 "../../gcc/config/i386/i386.md"
(((INTVAL (operands[3]) & (4 * BITS_PER_UNIT)) == 0
    || ((INTVAL (operands[3]) & (2 * 4 * BITS_PER_UNIT - 1))
	 == (2 * 4 * BITS_PER_UNIT - 1)))
   && ix86_pre_reload_split ()) && 
#line 1235 "../../gcc/config/i386/i386.md"
(!TARGET_64BIT)))
            return 1122; /* *lshrdi3_doubleword_mask */
          break;

        case 1:
          if ((
#line 16582 "../../gcc/config/i386/i386.md"
(((INTVAL (operands[3]) & (8 * BITS_PER_UNIT)) == 0
    || ((INTVAL (operands[3]) & (2 * 8 * BITS_PER_UNIT - 1))
	 == (2 * 8 * BITS_PER_UNIT - 1)))
   && ix86_pre_reload_split ()) && 
#line 1236 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return 1124; /* *lshrti3_doubleword_mask */
          break;

        case 2:
          if ((
#line 2268 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 2070 "../../gcc/config/i386/sse.md"
(TARGET_AVX512DQ)))
            return 2596; /* klshiftrtqi */
          break;

        case 3:
          if (
#line 2268 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F))
            return 2598; /* klshiftrthi */
          break;

        case 4:
          if ((
#line 2268 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 2070 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW)))
            return 2600; /* klshiftrtsi */
          break;

        case 5:
          if ((
#line 2268 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 2070 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW)))
            return 2602; /* klshiftrtdi */
          break;

        default:
          break;
        }
      x4 = XEXP (x2, 1);
      x5 = XEXP (x4, 1);
      operands[2] = x5;
      switch (pattern702 (x1))
        {
        case 0:
          operands[0] = x3;
          switch (GET_MODE (operands[0]))
            {
            case E_DImode:
              if (register_operand (operands[0], E_DImode)
                  && GET_MODE (x4) == E_DImode
                  && register_operand (operands[1], E_DImode)
                  && 
#line 1195 "../../gcc/config/i386/i386.md"
(!TARGET_64BIT))
                return 1130; /* lshrdi3_doubleword */
              break;

            case E_TImode:
              if (register_operand (operands[0], E_TImode)
                  && GET_MODE (x4) == E_TImode
                  && register_operand (operands[1], E_TImode)
                  && 
#line 1196 "../../gcc/config/i386/i386.md"
(TARGET_64BIT))
                return 1132; /* lshrti3_doubleword */
              break;

            case E_SImode:
              if (nonimmediate_operand (operands[0], E_SImode)
                  && GET_MODE (x4) == E_SImode
                  && nonimmediate_operand (operands[1], E_SImode)
                  && 
#line 17385 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (LSHIFTRT, SImode, operands, TARGET_APX_NDD)
   && true))
                return 1181; /* *lshrsi3_1 */
              break;

            case E_QImode:
              if (nonimmediate_operand (operands[0], E_QImode)
                  && GET_MODE (x4) == E_QImode
                  && nonimmediate_operand (operands[1], E_QImode)
                  && 
#line 17561 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (LSHIFTRT, QImode, operands, TARGET_APX_NDD)
   && true))
                return 1213; /* *lshrqi3_1 */
              break;

            case E_HImode:
              if (nonimmediate_operand (operands[0], E_HImode)
                  && GET_MODE (x4) == E_HImode
                  && nonimmediate_operand (operands[1], E_HImode)
                  && 
#line 17599 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (LSHIFTRT, HImode, operands, TARGET_APX_NDD)
   && true))
                return 1215; /* *lshrhi3_1 */
              break;

            case E_V2QImode:
              if (register_operand (operands[0], E_V2QImode)
                  && GET_MODE (x4) == E_V2QImode
                  && register_operand (operands[1], E_V2QImode)
                  && 
#line 4007 "../../gcc/config/i386/mmx.md"
(!TARGET_PARTIAL_REG_STALL || optimize_size))
                return 2209; /* lshrv2qi3 */
              break;

            default:
              break;
            }
          break;

        case 1:
          x6 = XEXP (x3, 0);
          operands[0] = x6;
          switch (pattern373 (x4))
            {
            case 0:
              if (
#line 17638 "../../gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)))
                return 1216; /* *lshrqi3_1_slp */
              break;

            case 1:
              if (
#line 17638 "../../gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)))
                return 1218; /* *lshrhi3_1_slp */
              break;

            default:
              break;
            }
          break;

        default:
          break;
        }
      x7 = XVECEXP (x1, 0, 1);
      if (GET_CODE (x7) != CLOBBER)
        return -1;
      x8 = XEXP (x7, 0);
      if (GET_CODE (x8) != REG
          || REGNO (x8) != 17
          || GET_MODE (x8) != E_CCmode)
        return -1;
      switch (GET_CODE (x5))
        {
        case CONST_INT:
          if (pattern1164 (x2) == 0
              && GET_MODE (x4) == E_DImode
              && nonimmediate_operand (operands[1], E_DImode)
              && 
#line 17361 "../../gcc/config/i386/i386.md"
(TARGET_64BIT))
            return 1179; /* *highpartdisi2 */
          break;

        case SUBREG:
          switch (pattern1167 (x2, 
E_SImode))
            {
            case 0:
              if (
#line 17840 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (LSHIFTRT, SImode, operands)
   && (INTVAL (operands[3]) & (4 * BITS_PER_UNIT - 1))
      == 4 * BITS_PER_UNIT - 1
   && ix86_pre_reload_split ()))
                return 1245; /* *lshrsi3_mask */
              break;

            case 1:
              if (
#line 17888 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (LSHIFTRT, SImode, operands)
   && (INTVAL (operands[3]) & (4 * BITS_PER_UNIT - 1)) == 0
   && ix86_pre_reload_split ()))
                return 1257; /* *lshrsi3_add */
              break;

            case 2:
              if (
#line 17934 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (LSHIFTRT, SImode, operands)
   && (INTVAL (operands[3]) & (4 * BITS_PER_UNIT - 1)) == 0
   && ix86_pre_reload_split ()))
                return 1269; /* *lshrsi3_sub */
              break;

            default:
              break;
            }
          break;

        default:
          break;
        }
      operands[0] = x3;
      if (!nonimmediate_operand (operands[0], E_DImode)
          || GET_MODE (x4) != E_DImode
          || !nonimmediate_operand (operands[1], E_DImode))
        return -1;
      operands[2] = x5;
      if (nonmemory_operand (operands[2], E_QImode)
          && (
#line 17385 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (LSHIFTRT, DImode, operands, TARGET_APX_NDD)
   && true) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
        return 1183; /* *lshrdi3_1 */
      if (GET_CODE (x5) != SUBREG
          || maybe_ne (SUBREG_BYTE (x5), 0)
          || GET_MODE (x5) != E_QImode)
        return -1;
      x9 = XEXP (x5, 0);
      switch (pattern1165 (x9))
        {
        case 0:
          if (!(
#line 17840 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (LSHIFTRT, DImode, operands)
   && (INTVAL (operands[3]) & (8 * BITS_PER_UNIT - 1))
      == 8 * BITS_PER_UNIT - 1
   && ix86_pre_reload_split ()) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return -1;
          return 1248; /* *lshrdi3_mask */

        case 1:
          if (!(
#line 17888 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (LSHIFTRT, DImode, operands)
   && (INTVAL (operands[3]) & (8 * BITS_PER_UNIT - 1)) == 0
   && ix86_pre_reload_split ()) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return -1;
          return 1260; /* *lshrdi3_add */

        case 2:
          if (!(
#line 17934 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (LSHIFTRT, DImode, operands)
   && (INTVAL (operands[3]) & (8 * BITS_PER_UNIT - 1)) == 0
   && ix86_pre_reload_split ()) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return -1;
          return 1272; /* *lshrdi3_sub */

        default:
          return -1;
        }

    case 1:
      if (register_operand (operands[0], E_DImode)
          && register_operand (operands[1], E_DImode)
          && (
#line 16643 "../../gcc/config/i386/i386.md"
(((INTVAL (operands[3]) & (4 * BITS_PER_UNIT)) == 0
    || ((INTVAL (operands[3]) & (2 * 4 * BITS_PER_UNIT - 1))
	 == (2 * 4 * BITS_PER_UNIT - 1)))
   && ix86_pre_reload_split ()) && 
#line 1235 "../../gcc/config/i386/i386.md"
(!TARGET_64BIT)))
        return 1126; /* *lshrdi3_doubleword_mask_1 */
      if (!nonimmediate_operand (operands[0], E_DImode)
          || !nonimmediate_operand (operands[1], E_DImode)
          || !(
#line 17865 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (LSHIFTRT, DImode, operands)
   && (INTVAL (operands[3]) & (8 * BITS_PER_UNIT - 1))
      == 8 * BITS_PER_UNIT - 1
   && ix86_pre_reload_split ()) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
        return -1;
      return 1254; /* *lshrdi3_mask_1 */

    case 2:
      if (!(
#line 16643 "../../gcc/config/i386/i386.md"
(((INTVAL (operands[3]) & (8 * BITS_PER_UNIT)) == 0
    || ((INTVAL (operands[3]) & (2 * 8 * BITS_PER_UNIT - 1))
	 == (2 * 8 * BITS_PER_UNIT - 1)))
   && ix86_pre_reload_split ()) && 
#line 1236 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
        return -1;
      return 1128; /* *lshrti3_doubleword_mask_1 */

    case 3:
      if (!
#line 17865 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (LSHIFTRT, SImode, operands)
   && (INTVAL (operands[3]) & (4 * BITS_PER_UNIT - 1))
      == 4 * BITS_PER_UNIT - 1
   && ix86_pre_reload_split ()))
        return -1;
      return 1251; /* *lshrsi3_mask_1 */

    case 4:
      if (!
#line 17912 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (LSHIFTRT, SImode, operands)
   && (INTVAL (operands[3]) & (4 * BITS_PER_UNIT - 1)) == 0
   && ix86_pre_reload_split ()))
        return -1;
      return 1263; /* *lshrsi3_add_1 */

    case 5:
      if (!(
#line 17912 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (LSHIFTRT, DImode, operands)
   && (INTVAL (operands[3]) & (8 * BITS_PER_UNIT - 1)) == 0
   && ix86_pre_reload_split ()) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
        return -1;
      return 1266; /* *lshrdi3_add_1 */

    case 6:
      if (!
#line 17964 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (LSHIFTRT, SImode, operands)
   && (INTVAL (operands[3]) & (4 * BITS_PER_UNIT - 1)) == 0
   && ix86_pre_reload_split ()))
        return -1;
      return 1275; /* *lshrsi3_sub_1 */

    case 7:
      if (!(
#line 17964 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (LSHIFTRT, DImode, operands)
   && (INTVAL (operands[3]) & (8 * BITS_PER_UNIT - 1)) == 0
   && ix86_pre_reload_split ()) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
        return -1;
      return 1278; /* *lshrdi3_sub_1 */

    default:
      return -1;
    }
}

 int
recog_417 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  x4 = XEXP (x3, 0);
  if (GET_CODE (x4) != ZERO_EXTEND)
    return -1;
  x5 = XVECEXP (x1, 0, 1);
  if (pattern380 (x5, 
174, 
0) != 0)
    return -1;
  x6 = XEXP (x2, 0);
  operands[0] = x6;
  x7 = XEXP (x4, 0);
  operands[1] = x7;
  switch (GET_MODE (operands[0]))
    {
    case E_V8DImode:
      if (pattern1247 (x3, 
E_V8DImode, 
E_QImode, 
E_DImode) != 0
          || !(
#line 28097 "../../gcc/config/i386/sse.md"
(TARGET_AVX512CD) && 
#line 624 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 9342; /* avx512cd_maskb_vec_dupv8di */

    case E_V4DImode:
      if (pattern1247 (x3, 
E_V4DImode, 
E_QImode, 
E_DImode) != 0
          || !(
#line 28097 "../../gcc/config/i386/sse.md"
(TARGET_AVX512CD) && 
#line 624 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 9343; /* avx512cd_maskb_vec_dupv4di */

    case E_V2DImode:
      if (pattern1247 (x3, 
E_V2DImode, 
E_QImode, 
E_DImode) != 0
          || !(
#line 28097 "../../gcc/config/i386/sse.md"
(TARGET_AVX512CD) && 
#line 624 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 9344; /* avx512cd_maskb_vec_dupv2di */

    case E_V16SImode:
      if (pattern1247 (x3, 
E_V16SImode, 
E_HImode, 
E_SImode) != 0
          || !(
#line 28109 "../../gcc/config/i386/sse.md"
(TARGET_AVX512CD) && 
#line 675 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 9345; /* avx512cd_maskw_vec_dupv16si */

    case E_V8SImode:
      if (pattern1247 (x3, 
E_V8SImode, 
E_HImode, 
E_SImode) != 0
          || !(
#line 28109 "../../gcc/config/i386/sse.md"
(TARGET_AVX512CD) && 
#line 675 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 9346; /* avx512cd_maskw_vec_dupv8si */

    case E_V4SImode:
      if (pattern1247 (x3, 
E_V4SImode, 
E_HImode, 
E_SImode) != 0
          || !(
#line 28109 "../../gcc/config/i386/sse.md"
(TARGET_AVX512CD) && 
#line 675 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 9347; /* avx512cd_maskw_vec_dupv4si */

    default:
      return -1;
    }
}

 int
recog_423 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12, x13, x14, x15, x16, x17;
  rtx x18, x19;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) != E_DImode)
    return -1;
  x4 = XEXP (x2, 0);
  if (!register_operand (x4, E_DImode))
    return -1;
  x5 = XEXP (x3, 0);
  if (GET_MODE (x5) != E_SImode)
    return -1;
  switch (GET_CODE (x5))
    {
    case SMUL_HIGHPART:
      if (pattern826 (x1) != 0
          || !
#line 11150 "../../gcc/config/i386/i386.md"
(TARGET_64BIT))
        return -1;
      return 631; /* *smulsi3_highpart_zext */

    case UMUL_HIGHPART:
      if (pattern826 (x1) != 0
          || !
#line 11150 "../../gcc/config/i386/i386.md"
(TARGET_64BIT))
        return -1;
      return 632; /* *umulsi3_highpart_zext */

    case TRUNCATE:
      x6 = XEXP (x5, 0);
      if (GET_CODE (x6) != LSHIFTRT
          || GET_MODE (x6) != E_DImode)
        return -1;
      x7 = XEXP (x6, 0);
      if (GET_CODE (x7) != MULT
          || GET_MODE (x7) != E_DImode)
        return -1;
      x8 = XEXP (x6, 1);
      if (x8 != const_int_rtx[MAX_SAVED_CONST_INT + 32])
        return -1;
      x9 = XVECEXP (x1, 0, 1);
      if (GET_CODE (x9) != CLOBBER
          || pattern828 (x1) != 0)
        return -1;
      x10 = XEXP (x7, 0);
      if (GET_MODE (x10) != E_DImode)
        return -1;
      x11 = XEXP (x7, 1);
      if (GET_MODE (x11) != E_DImode)
        return -1;
      x12 = XEXP (x9, 0);
      operands[3] = x12;
      if (!scratch_operand (operands[3], E_SImode))
        return -1;
      switch (GET_CODE (x10))
        {
        case SIGN_EXTEND:
          if (GET_CODE (x11) != SIGN_EXTEND)
            return -1;
          x13 = XEXP (x10, 0);
          operands[1] = x13;
          if (!nonimmediate_operand (operands[1], E_SImode))
            return -1;
          x14 = XEXP (x11, 0);
          operands[2] = x14;
          if (!nonimmediate_operand (operands[2], E_SImode)
              || !
#line 11198 "../../gcc/config/i386/i386.md"
(TARGET_64BIT
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
            return -1;
          return 635; /* *smulsi3_highpart_zext */

        case ZERO_EXTEND:
          if (GET_CODE (x11) != ZERO_EXTEND)
            return -1;
          x13 = XEXP (x10, 0);
          operands[1] = x13;
          if (!nonimmediate_operand (operands[1], E_SImode))
            return -1;
          x14 = XEXP (x11, 0);
          operands[2] = x14;
          if (!nonimmediate_operand (operands[2], E_SImode)
              || !
#line 11198 "../../gcc/config/i386/i386.md"
(TARGET_64BIT
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
            return -1;
          return 636; /* *umulsi3_highpart_zext */

        default:
          return -1;
        }

    case DIV:
      x9 = XVECEXP (x1, 0, 1);
      if (GET_CODE (x9) != SET)
        return -1;
      x15 = XEXP (x9, 1);
      if (GET_CODE (x15) != MOD
          || GET_MODE (x15) != E_SImode)
        return -1;
      operands[0] = x4;
      x6 = XEXP (x5, 0);
      operands[2] = x6;
      if (!register_operand (operands[2], E_SImode))
        return -1;
      x16 = XEXP (x5, 1);
      operands[3] = x16;
      if (!nonimmediate_operand (operands[3], E_SImode))
        return -1;
      x12 = XEXP (x9, 0);
      operands[1] = x12;
      if (!register_operand (operands[1], E_SImode))
        return -1;
      switch (pattern1630 (x1, pnum_clobbers))
        {
        case 0:
          if (!
#line 11485 "../../gcc/config/i386/i386.md"
(TARGET_64BIT))
            return -1;
          *pnum_clobbers = 1;
          return 643; /* divmodsi4_zext_1 */

        case 1:
          if (!
#line 11684 "../../gcc/config/i386/i386.md"
(TARGET_64BIT))
            return -1;
          return 655; /* *divmodsi4_zext_1 */

        case 2:
          if (!
#line 11880 "../../gcc/config/i386/i386.md"
(TARGET_64BIT))
            return -1;
          *pnum_clobbers = 1;
          return 673; /* *divmodsi4_noext_zext_1 */

        default:
          return -1;
        }

    case UDIV:
      x9 = XVECEXP (x1, 0, 1);
      if (GET_CODE (x9) != SET)
        return -1;
      x15 = XEXP (x9, 1);
      if (GET_CODE (x15) != UMOD
          || GET_MODE (x15) != E_SImode)
        return -1;
      operands[0] = x4;
      x6 = XEXP (x5, 0);
      operands[2] = x6;
      if (!register_operand (operands[2], E_SImode))
        return -1;
      x16 = XEXP (x5, 1);
      operands[3] = x16;
      x12 = XEXP (x9, 0);
      operands[1] = x12;
      if (!register_operand (operands[1], E_SImode))
        return -1;
      switch (pattern1572 (x1, pnum_clobbers))
        {
        case 0:
          if (!
#line 11521 "../../gcc/config/i386/i386.md"
(TARGET_64BIT))
            return -1;
          *pnum_clobbers = 1;
          return 644; /* udivmodsi4_zext_1 */

        case 1:
          if (!
#line 11719 "../../gcc/config/i386/i386.md"
(TARGET_64BIT))
            return -1;
          return 656; /* *udivmodsi4_zext_1 */

        case 2:
          if (!
#line 11880 "../../gcc/config/i386/i386.md"
(TARGET_64BIT))
            return -1;
          *pnum_clobbers = 1;
          return 674; /* *udivmodsi4_noext_zext_1 */

        case 3:
          if (!
#line 11741 "../../gcc/config/i386/i386.md"
(TARGET_64BIT
   && IN_RANGE (exact_log2 (UINTVAL (operands[3])), 1, 31)))
            return -1;
          return 657; /* *udivmodsi4_pow2_zext_1 */

        default:
          return -1;
        }

    case MOD:
      x9 = XVECEXP (x1, 0, 1);
      if (GET_CODE (x9) != SET)
        return -1;
      x15 = XEXP (x9, 1);
      if (GET_CODE (x15) != DIV
          || GET_MODE (x15) != E_SImode)
        return -1;
      operands[1] = x4;
      x6 = XEXP (x5, 0);
      operands[2] = x6;
      if (!register_operand (operands[2], E_SImode))
        return -1;
      x16 = XEXP (x5, 1);
      operands[3] = x16;
      if (!nonimmediate_operand (operands[3], E_SImode))
        return -1;
      x12 = XEXP (x9, 0);
      operands[0] = x12;
      if (!register_operand (operands[0], E_SImode))
        return -1;
      switch (pattern1630 (x1, pnum_clobbers))
        {
        case 0:
          if (!
#line 11544 "../../gcc/config/i386/i386.md"
(TARGET_64BIT))
            return -1;
          *pnum_clobbers = 1;
          return 645; /* divmodsi4_zext_2 */

        case 1:
          if (!
#line 11767 "../../gcc/config/i386/i386.md"
(TARGET_64BIT))
            return -1;
          return 658; /* *divmodsi4_zext_2 */

        case 2:
          if (!
#line 11894 "../../gcc/config/i386/i386.md"
(TARGET_64BIT))
            return -1;
          *pnum_clobbers = 1;
          return 675; /* *divmodsi4_noext_zext_2 */

        default:
          return -1;
        }

    case UMOD:
      x9 = XVECEXP (x1, 0, 1);
      if (GET_CODE (x9) != SET)
        return -1;
      x15 = XEXP (x9, 1);
      if (GET_CODE (x15) != UDIV
          || GET_MODE (x15) != E_SImode)
        return -1;
      operands[1] = x4;
      x6 = XEXP (x5, 0);
      operands[2] = x6;
      if (!register_operand (operands[2], E_SImode))
        return -1;
      x16 = XEXP (x5, 1);
      operands[3] = x16;
      x12 = XEXP (x9, 0);
      operands[0] = x12;
      if (!register_operand (operands[0], E_SImode))
        return -1;
      switch (pattern1572 (x1, pnum_clobbers))
        {
        case 0:
          if (!
#line 11581 "../../gcc/config/i386/i386.md"
(TARGET_64BIT))
            return -1;
          *pnum_clobbers = 1;
          return 646; /* udivmodsi4_zext_2 */

        case 1:
          if (!
#line 11803 "../../gcc/config/i386/i386.md"
(TARGET_64BIT))
            return -1;
          return 659; /* *udivmodsi4_zext_2 */

        case 2:
          if (!
#line 11894 "../../gcc/config/i386/i386.md"
(TARGET_64BIT))
            return -1;
          *pnum_clobbers = 1;
          return 676; /* *udivmodsi4_noext_zext_2 */

        case 3:
          if (!
#line 11825 "../../gcc/config/i386/i386.md"
(TARGET_64BIT
   && IN_RANGE (exact_log2 (UINTVAL (operands[3])), 1, 31)))
            return -1;
          return 660; /* *udivmodsi4_pow2_zext_2 */

        default:
          return -1;
        }

    case CTZ:
      if (pattern827 (x1) != 0
          || !
#line 21204 "../../gcc/config/i386/i386.md"
(TARGET_64BIT))
        return -1;
      return 1523; /* *ctzsidi2_uext_falsedep */

    case CLZ:
      x9 = XVECEXP (x1, 0, 1);
      if (GET_CODE (x9) != UNSPEC
          || XVECLEN (x9, 0) != 1
          || XINT (x9, 1) != 38)
        return -1;
      x17 = XVECEXP (x1, 0, 2);
      if (GET_CODE (x17) != CLOBBER)
        return -1;
      x18 = XEXP (x17, 0);
      if (GET_CODE (x18) != REG
          || REGNO (x18) != 17
          || GET_MODE (x18) != E_CCmode)
        return -1;
      operands[0] = x4;
      x6 = XEXP (x5, 0);
      operands[1] = x6;
      x19 = XVECEXP (x9, 0, 0);
      switch (pattern1422 (x19))
        {
        case 0:
          if (!
#line 21624 "../../gcc/config/i386/i386.md"
(TARGET_LZCNT))
            return -1;
          return 1544; /* *clzsi2_lzcnt_zext_2_falsedep */

        case 1:
          if (!(
#line 21624 "../../gcc/config/i386/i386.md"
(TARGET_LZCNT) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return -1;
          return 1545; /* *clzsi2_lzcnt_zext_2_falsedep */

        default:
          return -1;
        }

    case POPCOUNT:
      if (pattern827 (x1) != 0
          || !
#line 22323 "../../gcc/config/i386/i386.md"
(TARGET_POPCNT && TARGET_64BIT))
        return -1;
      return 1629; /* *popcountsi2_zext_2_falsedep */

    default:
      return -1;
    }
}

 int
recog_435 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  switch (GET_CODE (x2))
    {
    case IF_THEN_ELSE:
      res = recog_2 (x1, insn, pnum_clobbers);
      if (res >= 0)
        return res;
      break;

    case COMPARE:
      res = recog_4 (x1, insn, pnum_clobbers);
      if (res >= 0)
        return res;
      break;

    case UNSPEC:
      res = recog_15 (x1, insn, pnum_clobbers);
      if (res >= 0)
        return res;
      break;

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
      res = recog_19 (x1, insn, pnum_clobbers);
      if (res >= 0)
        return res;
      break;

    case SIGN_EXTRACT:
    case ZERO_EXTRACT:
      res = recog_21 (x1, insn, pnum_clobbers);
      if (res >= 0)
        return res;
      break;

    case LSHIFTRT:
      res = recog_22 (x1, insn, pnum_clobbers);
      if (res >= 0)
        return res;
      break;

    case ASHIFTRT:
      res = recog_23 (x1, insn, pnum_clobbers);
      if (res >= 0)
        return res;
      break;

    case IOR:
      res = recog_24 (x1, insn, pnum_clobbers);
      if (res >= 0)
        return res;
      break;

    case XOR:
      res = recog_25 (x1, insn, pnum_clobbers);
      if (res >= 0)
        return res;
      break;

    case ZERO_EXTEND:
      res = recog_27 (x1, insn, pnum_clobbers);
      if (res >= 0)
        return res;
      break;

    case SIGN_EXTEND:
      res = recog_28 (x1, insn, pnum_clobbers);
      if (res >= 0)
        return res;
      break;

    case FLOAT_EXTEND:
      res = recog_29 (x1, insn, pnum_clobbers);
      if (res >= 0)
        return res;
      break;

    case FLOAT_TRUNCATE:
      res = recog_30 (x1, insn, pnum_clobbers);
      if (res >= 0)
        return res;
      break;

    case FIX:
      res = recog_31 (x1, insn, pnum_clobbers);
      if (res >= 0)
        return res;
      break;

    case UNSIGNED_FIX:
      res = recog_32 (x1, insn, pnum_clobbers);
      if (res >= 0)
        return res;
      break;

    case FLOAT:
      res = recog_33 (x1, insn, pnum_clobbers);
      if (res >= 0)
        return res;
      break;

    case UNSIGNED_FLOAT:
      res = recog_34 (x1, insn, pnum_clobbers);
      if (res >= 0)
        return res;
      break;

    case AND:
      res = recog_38 (x1, insn, pnum_clobbers);
      if (res >= 0)
        return res;
      break;

    case NOT:
      res = recog_39 (x1, insn, pnum_clobbers);
      if (res >= 0)
        return res;
      break;

    case NEG:
      res = recog_40 (x1, insn, pnum_clobbers);
      if (res >= 0)
        return res;
      break;

    case ABS:
      res = recog_41 (x1, insn, pnum_clobbers);
      if (res >= 0)
        return res;
      break;

    case ASHIFT:
      res = recog_42 (x1, insn, pnum_clobbers);
      if (res >= 0)
        return res;
      break;

    case ROTATE:
      res = recog_43 (x1, insn, pnum_clobbers);
      if (res >= 0)
        return res;
      break;

    case ROTATERT:
      res = recog_44 (x1, insn, pnum_clobbers);
      if (res >= 0)
        return res;
      break;

    case NE:
    case EQ:
    case GE:
    case GT:
    case LE:
    case LT:
    case LTGT:
    case GEU:
    case GTU:
    case LEU:
    case LTU:
    case UNORDERED:
    case ORDERED:
    case UNEQ:
    case UNGE:
    case UNGT:
    case UNLE:
    case UNLT:
      res = recog_50 (x1, insn, pnum_clobbers);
      if (res >= 0)
        return res;
      break;

    case POPCOUNT:
      res = recog_51 (x1, insn, pnum_clobbers);
      if (res >= 0)
        return res;
      break;

    case BSWAP:
      if (GET_MODE (x2) == E_HImode)
        {
          x3 = XEXP (x1, 0);
          operands[0] = x3;
          x4 = XEXP (x2, 0);
          operands[1] = x4;
          if (nonimmediate_operand (operands[1], E_HImode)
              && nonimmediate_operand (operands[0], E_HImode)
              && 
#line 22454 "../../gcc/config/i386/i386.md"
(TARGET_MOVBE
   && !(MEM_P (operands[0]) && MEM_P (operands[1]))))
            return 1638; /* *bswaphi2_movbe */
          if (register_operand (operands[1], E_HImode)
              && register_operand (operands[0], E_HImode)
              && 
#line 22473 "../../gcc/config/i386/i386.md"
(!TARGET_MOVBE))
            return 1639; /* *bswaphi2 */
        }
      break;

    case PLUS:
    case MINUS:
    case MULT:
    case DIV:
      res = recog_58 (x1, insn, pnum_clobbers);
      if (res >= 0)
        return res;
      break;

    case SQRT:
      res = recog_354 (x1, insn, pnum_clobbers);
      if (res >= 0)
        return res;
      break;

    case SMAX:
      switch (pattern9 (x1, pnum_clobbers))
        {
        case 0:
          if (
#line 26582 "../../gcc/config/i386/i386.md"
(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH))
            return 1809; /* smaxsf3 */
          break;

        case 1:
          if (
#line 26582 "../../gcc/config/i386/i386.md"
(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH))
            return 1811; /* smaxdf3 */
          break;

        case 2:
          if (
#line 26596 "../../gcc/config/i386/i386.md"
(TARGET_AVX512FP16))
            return 1813; /* smaxhf3 */
          break;

        case 3:
          if ((
#line 26759 "../../gcc/config/i386/i386.md"
(TARGET_CMOVE
   && ix86_pre_reload_split ()) && 
#line 1236 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
            {
              *pnum_clobbers = 1;
              return 1829; /* *smaxti3_doubleword */
            }
          break;

        case 4:
          if (
#line 26817 "../../gcc/config/i386/i386.md"
(TARGET_CMOVE
   && (QImode != QImode || !TARGET_PARTIAL_REG_STALL)
   && ix86_pre_reload_split ()))
            {
              *pnum_clobbers = 1;
              return 1833; /* *smaxqi3_1 */
            }
          break;

        case 5:
          if (
#line 26817 "../../gcc/config/i386/i386.md"
(TARGET_CMOVE
   && (HImode != QImode || !TARGET_PARTIAL_REG_STALL)
   && ix86_pre_reload_split ()))
            {
              *pnum_clobbers = 1;
              return 1837; /* *smaxhi3_1 */
            }
          break;

        case 6:
          if (
#line 3659 "../../gcc/config/i386/mmx.md"
(TARGET_SSE4_1 && TARGET_MMX_WITH_SSE))
            return 2162; /* smaxv8qi3 */
          break;

        case 7:
          if (
#line 3659 "../../gcc/config/i386/mmx.md"
(TARGET_SSE4_1 && TARGET_MMX_WITH_SSE))
            return 2164; /* smaxv2si3 */
          break;

        case 8:
          if (
#line 3684 "../../gcc/config/i386/mmx.md"
((TARGET_MMX || TARGET_MMX_WITH_SSE)
   && (TARGET_SSE || TARGET_3DNOW_A)
   && ix86_binary_operator_ok (SMAX, V4HImode, operands)))
            return 2166; /* *mmx_smaxv4hi3 */
          break;

        case 9:
          if (
#line 3708 "../../gcc/config/i386/mmx.md"
(TARGET_SSE4_1))
            return 2168; /* smaxv4qi3 */
          break;

        case 10:
          if (
#line 3708 "../../gcc/config/i386/mmx.md"
(TARGET_SSE4_1))
            return 2170; /* smaxv2qi3 */
          break;

        case 11:
          if (
#line 3724 "../../gcc/config/i386/mmx.md"
(TARGET_SSE2))
            return 2172; /* smaxv2hi3 */
          break;

        default:
          break;
        }
      break;

    case SMIN:
      switch (pattern9 (x1, pnum_clobbers))
        {
        case 0:
          if (
#line 26582 "../../gcc/config/i386/i386.md"
(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH))
            return 1810; /* sminsf3 */
          break;

        case 1:
          if (
#line 26582 "../../gcc/config/i386/i386.md"
(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH))
            return 1812; /* smindf3 */
          break;

        case 2:
          if (
#line 26596 "../../gcc/config/i386/i386.md"
(TARGET_AVX512FP16))
            return 1814; /* sminhf3 */
          break;

        case 3:
          if ((
#line 26759 "../../gcc/config/i386/i386.md"
(TARGET_CMOVE
   && ix86_pre_reload_split ()) && 
#line 1236 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
            {
              *pnum_clobbers = 1;
              return 1830; /* *sminti3_doubleword */
            }
          break;

        case 4:
          if (
#line 26817 "../../gcc/config/i386/i386.md"
(TARGET_CMOVE
   && (QImode != QImode || !TARGET_PARTIAL_REG_STALL)
   && ix86_pre_reload_split ()))
            {
              *pnum_clobbers = 1;
              return 1834; /* *sminqi3_1 */
            }
          break;

        case 5:
          if (
#line 26817 "../../gcc/config/i386/i386.md"
(TARGET_CMOVE
   && (HImode != QImode || !TARGET_PARTIAL_REG_STALL)
   && ix86_pre_reload_split ()))
            {
              *pnum_clobbers = 1;
              return 1838; /* *sminhi3_1 */
            }
          break;

        case 6:
          if (
#line 3659 "../../gcc/config/i386/mmx.md"
(TARGET_SSE4_1 && TARGET_MMX_WITH_SSE))
            return 2163; /* sminv8qi3 */
          break;

        case 7:
          if (
#line 3659 "../../gcc/config/i386/mmx.md"
(TARGET_SSE4_1 && TARGET_MMX_WITH_SSE))
            return 2165; /* sminv2si3 */
          break;

        case 8:
          if (
#line 3684 "../../gcc/config/i386/mmx.md"
((TARGET_MMX || TARGET_MMX_WITH_SSE)
   && (TARGET_SSE || TARGET_3DNOW_A)
   && ix86_binary_operator_ok (SMIN, V4HImode, operands)))
            return 2167; /* *mmx_sminv4hi3 */
          break;

        case 9:
          if (
#line 3708 "../../gcc/config/i386/mmx.md"
(TARGET_SSE4_1))
            return 2169; /* sminv4qi3 */
          break;

        case 10:
          if (
#line 3708 "../../gcc/config/i386/mmx.md"
(TARGET_SSE4_1))
            return 2171; /* sminv2qi3 */
          break;

        case 11:
          if (
#line 3724 "../../gcc/config/i386/mmx.md"
(TARGET_SSE2))
            return 2173; /* sminv2hi3 */
          break;

        default:
          break;
        }
      break;

    case UMAX:
      switch (pattern10 (x1, pnum_clobbers))
        {
        case 0:
          if ((
#line 26759 "../../gcc/config/i386/i386.md"
(TARGET_CMOVE
   && ix86_pre_reload_split ()) && 
#line 1236 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
            {
              *pnum_clobbers = 1;
              return 1831; /* *umaxti3_doubleword */
            }
          break;

        case 1:
          if (
#line 26817 "../../gcc/config/i386/i386.md"
(TARGET_CMOVE
   && (QImode != QImode || !TARGET_PARTIAL_REG_STALL)
   && ix86_pre_reload_split ()))
            {
              *pnum_clobbers = 1;
              return 1835; /* *umaxqi3_1 */
            }
          break;

        case 2:
          if (
#line 26817 "../../gcc/config/i386/i386.md"
(TARGET_CMOVE
   && (HImode != QImode || !TARGET_PARTIAL_REG_STALL)
   && ix86_pre_reload_split ()))
            {
              *pnum_clobbers = 1;
              return 1839; /* *umaxhi3_1 */
            }
          break;

        case 3:
          if (
#line 3737 "../../gcc/config/i386/mmx.md"
(TARGET_SSE4_1 && TARGET_MMX_WITH_SSE))
            return 2174; /* umaxv4hi3 */
          break;

        case 4:
          if (
#line 3737 "../../gcc/config/i386/mmx.md"
(TARGET_SSE4_1 && TARGET_MMX_WITH_SSE))
            return 2176; /* umaxv2si3 */
          break;

        case 5:
          if (
#line 3762 "../../gcc/config/i386/mmx.md"
((TARGET_MMX || TARGET_MMX_WITH_SSE)
   && (TARGET_SSE || TARGET_3DNOW_A)
   && ix86_binary_operator_ok (UMAX, V8QImode, operands)))
            return 2178; /* *mmx_umaxv8qi3 */
          break;

        case 6:
          if (
#line 3786 "../../gcc/config/i386/mmx.md"
(TARGET_SSE2))
            return 2180; /* umaxv4qi3 */
          break;

        case 7:
          if (
#line 3786 "../../gcc/config/i386/mmx.md"
(TARGET_SSE2))
            return 2182; /* umaxv2qi3 */
          break;

        case 8:
          if (
#line 3799 "../../gcc/config/i386/mmx.md"
(TARGET_SSE4_1))
            return 2184; /* umaxv2hi3 */
          break;

        default:
          break;
        }
      break;

    case UMIN:
      switch (pattern10 (x1, pnum_clobbers))
        {
        case 0:
          if ((
#line 26759 "../../gcc/config/i386/i386.md"
(TARGET_CMOVE
   && ix86_pre_reload_split ()) && 
#line 1236 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
            {
              *pnum_clobbers = 1;
              return 1832; /* *uminti3_doubleword */
            }
          break;

        case 1:
          if (
#line 26817 "../../gcc/config/i386/i386.md"
(TARGET_CMOVE
   && (QImode != QImode || !TARGET_PARTIAL_REG_STALL)
   && ix86_pre_reload_split ()))
            {
              *pnum_clobbers = 1;
              return 1836; /* *uminqi3_1 */
            }
          break;

        case 2:
          if (
#line 26817 "../../gcc/config/i386/i386.md"
(TARGET_CMOVE
   && (HImode != QImode || !TARGET_PARTIAL_REG_STALL)
   && ix86_pre_reload_split ()))
            {
              *pnum_clobbers = 1;
              return 1840; /* *uminhi3_1 */
            }
          break;

        case 3:
          if (
#line 3737 "../../gcc/config/i386/mmx.md"
(TARGET_SSE4_1 && TARGET_MMX_WITH_SSE))
            return 2175; /* uminv4hi3 */
          break;

        case 4:
          if (
#line 3737 "../../gcc/config/i386/mmx.md"
(TARGET_SSE4_1 && TARGET_MMX_WITH_SSE))
            return 2177; /* uminv2si3 */
          break;

        case 5:
          if (
#line 3762 "../../gcc/config/i386/mmx.md"
((TARGET_MMX || TARGET_MMX_WITH_SSE)
   && (TARGET_SSE || TARGET_3DNOW_A)
   && ix86_binary_operator_ok (UMIN, V8QImode, operands)))
            return 2179; /* *mmx_uminv8qi3 */
          break;

        case 6:
          if (
#line 3786 "../../gcc/config/i386/mmx.md"
(TARGET_SSE2))
            return 2181; /* uminv4qi3 */
          break;

        case 7:
          if (
#line 3786 "../../gcc/config/i386/mmx.md"
(TARGET_SSE2))
            return 2183; /* uminv2qi3 */
          break;

        case 8:
          if (
#line 3799 "../../gcc/config/i386/mmx.md"
(TARGET_SSE4_1))
            return 2185; /* uminv2hi3 */
          break;

        default:
          break;
        }
      break;

    case UNSPEC_VOLATILE:
      res = recog_59 (x1, insn, pnum_clobbers);
      if (res >= 0)
        return res;
      break;

    case VEC_CONCAT:
      res = recog_60 (x1, insn, pnum_clobbers);
      if (res >= 0)
        return res;
      break;

    case VEC_MERGE:
      res = recog_61 (x1, insn, pnum_clobbers);
      if (res >= 0)
        return res;
      break;

    case VEC_SELECT:
      res = recog_63 (x1, insn, pnum_clobbers);
      if (res >= 0)
        return res;
      break;

    case VEC_DUPLICATE:
      res = recog_64 (x1, insn, pnum_clobbers);
      if (res >= 0)
        return res;
      break;

    case SS_PLUS:
      res = recog_65 (x1, insn, pnum_clobbers);
      if (res >= 0)
        return res;
      break;

    case US_PLUS:
      x3 = XEXP (x1, 0);
      operands[0] = x3;
      switch (pattern45 (x2))
        {
        case 0:
          if (
#line 3323 "../../gcc/config/i386/mmx.md"
((TARGET_MMX || TARGET_MMX_WITH_SSE)
   && ix86_binary_operator_ok (US_PLUS, V8QImode, operands)))
            return 2133; /* *mmx_usaddv8qi3 */
          break;

        case 1:
          if (
#line 3323 "../../gcc/config/i386/mmx.md"
((TARGET_MMX || TARGET_MMX_WITH_SSE)
   && ix86_binary_operator_ok (US_PLUS, V4HImode, operands)))
            return 2137; /* *mmx_usaddv4hi3 */
          break;

        case 2:
          if (
#line 3339 "../../gcc/config/i386/mmx.md"
(TARGET_SSE2))
            return 2141; /* usaddv4qi3 */
          break;

        case 3:
          if (
#line 3339 "../../gcc/config/i386/mmx.md"
(TARGET_SSE2))
            return 2145; /* usaddv2qi3 */
          break;

        case 4:
          if (
#line 3339 "../../gcc/config/i386/mmx.md"
(TARGET_SSE2))
            return 2149; /* usaddv2hi3 */
          break;

        default:
          break;
        }
      break;

    case SS_MINUS:
      x3 = XEXP (x1, 0);
      operands[0] = x3;
      x4 = XEXP (x2, 0);
      switch (GET_CODE (x4))
        {
        case REG:
        case SUBREG:
        case MEM:
          switch (pattern45 (x2))
            {
            case 0:
              if (
#line 3323 "../../gcc/config/i386/mmx.md"
((TARGET_MMX || TARGET_MMX_WITH_SSE)
   && ix86_binary_operator_ok (SS_MINUS, V8QImode, operands)))
                return 2134; /* *mmx_sssubv8qi3 */
              break;

            case 1:
              if (
#line 3323 "../../gcc/config/i386/mmx.md"
((TARGET_MMX || TARGET_MMX_WITH_SSE)
   && ix86_binary_operator_ok (SS_MINUS, V4HImode, operands)))
                return 2138; /* *mmx_sssubv4hi3 */
              break;

            case 2:
              if (
#line 3339 "../../gcc/config/i386/mmx.md"
(TARGET_SSE2))
                return 2142; /* sssubv4qi3 */
              break;

            case 3:
              if (
#line 3339 "../../gcc/config/i386/mmx.md"
(TARGET_SSE2))
                return 2146; /* sssubv2qi3 */
              break;

            case 4:
              if (
#line 3339 "../../gcc/config/i386/mmx.md"
(TARGET_SSE2))
                return 2150; /* sssubv2hi3 */
              break;

            default:
              break;
            }
          break;

        case VEC_SELECT:
          if (pattern100 (x2) == 0
              && 
#line 22615 "../../gcc/config/i386/sse.md"
((TARGET_MMX || TARGET_MMX_WITH_SSE) && TARGET_SSSE3))
            return 8595; /* ssse3_phsubswv4hi3 */
          break;

        default:
          break;
        }
      break;

    case US_MINUS:
      x3 = XEXP (x1, 0);
      operands[0] = x3;
      switch (pattern45 (x2))
        {
        case 0:
          if (
#line 3323 "../../gcc/config/i386/mmx.md"
((TARGET_MMX || TARGET_MMX_WITH_SSE)
   && ix86_binary_operator_ok (US_MINUS, V8QImode, operands)))
            return 2135; /* *mmx_ussubv8qi3 */
          break;

        case 1:
          if (
#line 3323 "../../gcc/config/i386/mmx.md"
((TARGET_MMX || TARGET_MMX_WITH_SSE)
   && ix86_binary_operator_ok (US_MINUS, V4HImode, operands)))
            return 2139; /* *mmx_ussubv4hi3 */
          break;

        case 2:
          if (
#line 3339 "../../gcc/config/i386/mmx.md"
(TARGET_SSE2))
            return 2143; /* ussubv4qi3 */
          break;

        case 3:
          if (
#line 3339 "../../gcc/config/i386/mmx.md"
(TARGET_SSE2))
            return 2147; /* ussubv2qi3 */
          break;

        case 4:
          if (
#line 3339 "../../gcc/config/i386/mmx.md"
(TARGET_SSE2))
            return 2151; /* ussubv2hi3 */
          break;

        default:
          break;
        }
      break;

    case TRUNCATE:
      res = recog_66 (x1, insn, pnum_clobbers);
      if (res >= 0)
        return res;
      break;

    case FMA:
      res = recog_67 (x1, insn, pnum_clobbers);
      if (res >= 0)
        return res;
      break;

    case SS_TRUNCATE:
      switch (pattern13 (x1))
        {
        case 0:
          if (
#line 15400 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))
            return 7292; /* *avx512vl_ss_truncatev2div2qi2_store_1 */
          break;

        case 1:
          if (
#line 15495 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))
            return 7307; /* *avx512vl_ss_truncatev4siv4qi2_store_1 */
          break;

        case 2:
          if (
#line 15495 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))
            return 7310; /* *avx512vl_ss_truncatev4div4qi2_store_1 */
          break;

        case 3:
          if ((
#line 15593 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL) && 
#line 15587 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW)))
            return 7337; /* *avx512vl_ss_truncatev8hiv8qi2_store_1 */
          break;

        case 4:
          if (
#line 15593 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))
            return 7340; /* *avx512vl_ss_truncatev8siv8qi2_store_1 */
          break;

        case 5:
          if (
#line 16109 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512))
            return 7444; /* *avx512f_ss_truncatev8div16qi2_store_1 */
          break;

        case 6:
          if (
#line 15755 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))
            return 7377; /* *avx512vl_ss_truncatev4siv4hi2_store_1 */
          break;

        case 7:
          if (
#line 15755 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))
            return 7380; /* *avx512vl_ss_truncatev4div4hi2_store_1 */
          break;

        case 8:
          if (
#line 15846 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))
            return 7407; /* *avx512vl_ss_truncatev2div2hi2_store_1 */
          break;

        case 9:
          if (
#line 15996 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))
            return 7426; /* *avx512vl_ss_truncatev2div2si2_store_1 */
          break;

        default:
          break;
        }
      break;

    case US_TRUNCATE:
      switch (pattern13 (x1))
        {
        case 0:
          if (
#line 15400 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))
            return 7294; /* *avx512vl_us_truncatev2div2qi2_store_1 */
          break;

        case 1:
          if (
#line 15495 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))
            return 7309; /* *avx512vl_us_truncatev4siv4qi2_store_1 */
          break;

        case 2:
          if (
#line 15495 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))
            return 7312; /* *avx512vl_us_truncatev4div4qi2_store_1 */
          break;

        case 3:
          if ((
#line 15593 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL) && 
#line 15587 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW)))
            return 7339; /* *avx512vl_us_truncatev8hiv8qi2_store_1 */
          break;

        case 4:
          if (
#line 15593 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))
            return 7342; /* *avx512vl_us_truncatev8siv8qi2_store_1 */
          break;

        case 5:
          if (
#line 16109 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512))
            return 7446; /* *avx512f_us_truncatev8div16qi2_store_1 */
          break;

        case 6:
          if (
#line 15755 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))
            return 7379; /* *avx512vl_us_truncatev4siv4hi2_store_1 */
          break;

        case 7:
          if (
#line 15755 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))
            return 7382; /* *avx512vl_us_truncatev4div4hi2_store_1 */
          break;

        case 8:
          if (
#line 15846 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))
            return 7409; /* *avx512vl_us_truncatev2div2hi2_store_1 */
          break;

        case 9:
          if (
#line 15996 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))
            return 7428; /* *avx512vl_us_truncatev2div2si2_store_1 */
          break;

        default:
          break;
        }
      break;

    default:
      break;
    }
  x3 = XEXP (x1, 0);
  operands[0] = x3;
  operands[1] = x2;
  switch (GET_MODE (operands[0]))
    {
    case E_XImode:
      if (nonimmediate_operand (operands[0], E_XImode)
          && nonimmediate_or_sse_const_operand (operands[1], E_XImode)
          && 
#line 2453 "../../gcc/config/i386/i386.md"
(TARGET_AVX512F && TARGET_EVEX512
   && (register_operand (operands[0], XImode)
       || register_operand (operands[1], XImode))))
        return 92; /* *movxi_internal_avx512f */
      break;

    case E_OImode:
      if (nonimmediate_operand (operands[0], E_OImode)
          && nonimmediate_or_sse_const_operand (operands[1], E_OImode)
          && 
#line 2476 "../../gcc/config/i386/i386.md"
(TARGET_AVX
   && (register_operand (operands[0], OImode)
       || register_operand (operands[1], OImode))))
        return 93; /* *movoi_internal_avx */
      break;

    case E_SImode:
      if (register_operand (operands[0], E_SImode)
          && address_no_seg_operand (operands[1], E_SImode)
          && 
#line 6372 "../../gcc/config/i386/i386.md"
(ix86_hardreg_mov_ok (operands[0], operands[1])))
        return 264; /* *leasi */
      break;

    case E_DImode:
      if (register_operand (operands[0], E_DImode)
          && address_no_seg_operand (operands[1], E_DImode)
          && (
#line 6372 "../../gcc/config/i386/i386.md"
(ix86_hardreg_mov_ok (operands[0], operands[1])) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
        return 265; /* *leadi */
      break;

    default:
      break;
    }
  switch (GET_CODE (x2))
    {
    case PLUS:
      res = recog_68 (x1, insn, pnum_clobbers);
      if (res >= 0)
        return res;
      break;

    case ZERO_EXTEND:
      res = recog_76 (x1, insn, pnum_clobbers);
      if (res >= 0)
        return res;
      break;

    case COMPARE:
      res = recog_77 (x1, insn, pnum_clobbers);
      if (res >= 0)
        return res;
      break;

    case IOR:
      res = recog_81 (x1, insn, pnum_clobbers);
      if (res >= 0)
        return res;
      break;

    case XOR:
      res = recog_82 (x1, insn, pnum_clobbers);
      if (res >= 0)
        return res;
      break;

    case MINUS:
      res = recog_84 (x1, insn, pnum_clobbers);
      if (res >= 0)
        return res;
      break;

    case IF_THEN_ELSE:
      res = recog_87 (x1, insn, pnum_clobbers);
      if (res >= 0)
        return res;
      break;

    case MULT:
      res = recog_88 (x1, insn, pnum_clobbers);
      if (res >= 0)
        return res;
      break;

    case SMUL_HIGHPART:
      switch (pattern15 (x1, pnum_clobbers))
        {
        case 0:
          if (
#line 1235 "../../gcc/config/i386/i386.md"
(!TARGET_64BIT))
            {
              *pnum_clobbers = 2;
              return 627; /* smulsi3_highpart */
            }
          break;

        case 1:
          if (
#line 1236 "../../gcc/config/i386/i386.md"
(TARGET_64BIT))
            {
              *pnum_clobbers = 2;
              return 629; /* smuldi3_highpart */
            }
          break;

        default:
          break;
        }
      break;

    case UMUL_HIGHPART:
      switch (pattern15 (x1, pnum_clobbers))
        {
        case 0:
          if (
#line 1235 "../../gcc/config/i386/i386.md"
(!TARGET_64BIT))
            {
              *pnum_clobbers = 2;
              return 628; /* umulsi3_highpart */
            }
          break;

        case 1:
          if (
#line 1236 "../../gcc/config/i386/i386.md"
(TARGET_64BIT))
            {
              *pnum_clobbers = 2;
              return 630; /* umuldi3_highpart */
            }
          break;

        default:
          break;
        }
      break;

    case TRUNCATE:
      res = recog_89 (x1, insn, pnum_clobbers);
      if (res >= 0)
        return res;
      break;

    case AND:
      res = recog_91 (x1, insn, pnum_clobbers);
      if (res >= 0)
        return res;
      break;

    case NOT:
      res = recog_92 (x1, insn, pnum_clobbers);
      if (res >= 0)
        return res;
      break;

    case NEG:
      res = recog_93 (x1, insn, pnum_clobbers);
      if (res >= 0)
        return res;
      break;

    case ABS:
      res = recog_94 (x1, insn, pnum_clobbers);
      if (res >= 0)
        return res;
      break;

    case ASHIFT:
      res = recog_96 (x1, insn, pnum_clobbers);
      if (res >= 0)
        return res;
      break;

    case LSHIFTRT:
      res = recog_98 (x1, insn, pnum_clobbers);
      if (res >= 0)
        return res;
      break;

    case ASHIFTRT:
      res = recog_100 (x1, insn, pnum_clobbers);
      if (res >= 0)
        return res;
      break;

    case SUBREG:
      res = recog_101 (x1, insn, pnum_clobbers);
      if (res >= 0)
        return res;
      break;

    case ROTATE:
      res = recog_102 (x1, insn, pnum_clobbers);
      if (res >= 0)
        return res;
      break;

    case ROTATERT:
      res = recog_103 (x1, insn, pnum_clobbers);
      if (res >= 0)
        return res;
      break;

    case ZERO_EXTRACT:
      res = recog_105 (x1, insn, pnum_clobbers);
      if (res >= 0)
        return res;
      break;

    case NE:
    case EQ:
    case GE:
    case GT:
    case LE:
    case LT:
    case LTGT:
    case GEU:
    case GTU:
    case LEU:
    case LTU:
    case UNORDERED:
    case ORDERED:
    case UNEQ:
    case UNGE:
    case UNGT:
    case UNLE:
    case UNLT:
      res = recog_106 (x1, insn, pnum_clobbers);
      if (res >= 0)
        return res;
      break;

    case UNSPEC:
      res = recog_110 (x1, insn, pnum_clobbers);
      if (res >= 0)
        return res;
      break;

    case CALL:
      res = recog_111 (x1, insn, pnum_clobbers);
      if (res >= 0)
        return res;
      break;

    case FFS:
      if (pnum_clobbers != NULL
          && GET_MODE (x2) == E_SImode)
        {
          operands[0] = x3;
          if (register_operand (operands[0], E_SImode))
            {
              x4 = XEXP (x2, 0);
              operands[1] = x4;
              if (nonimmediate_operand (operands[1], E_SImode)
                  && 
#line 20972 "../../gcc/config/i386/i386.md"
(!TARGET_CMOVE))
                {
                  *pnum_clobbers = 2;
                  return 1507; /* ffssi2_no_cmove */
                }
            }
        }
      break;

    case CTZ:
      res = recog_112 (x1, insn, pnum_clobbers);
      if (res >= 0)
        return res;
      break;

    case SIGN_EXTEND:
      res = recog_113 (x1, insn, pnum_clobbers);
      if (res >= 0)
        return res;
      break;

    case CLZ:
      res = recog_114 (x1, insn, pnum_clobbers);
      if (res >= 0)
        return res;
      break;

    case POPCOUNT:
      res = recog_115 (x1, insn, pnum_clobbers);
      if (res >= 0)
        return res;
      break;

    case BSWAP:
      res = recog_355 (x1, insn, pnum_clobbers);
      if (res >= 0)
        return res;
      break;

    case SIGN_EXTRACT:
      res = recog_116 (x1, insn, pnum_clobbers);
      if (res >= 0)
        return res;
      break;

    case SMAX:
      switch (pattern21 (x1, pnum_clobbers))
        {
        case 0:
          if ((
#line 26759 "../../gcc/config/i386/i386.md"
(TARGET_CMOVE
   && ix86_pre_reload_split ()) && 
#line 1235 "../../gcc/config/i386/i386.md"
(!TARGET_64BIT)))
            {
              *pnum_clobbers = 1;
              return 1825; /* *smaxdi3_doubleword */
            }
          if ((
#line 26817 "../../gcc/config/i386/i386.md"
(TARGET_CMOVE
   && (DImode != QImode || !TARGET_PARTIAL_REG_STALL)
   && ix86_pre_reload_split ()) && 
#line 1161 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
            {
              *pnum_clobbers = 1;
              return 1845; /* *smaxdi3_1 */
            }
          break;

        case 1:
          if (
#line 26817 "../../gcc/config/i386/i386.md"
(TARGET_CMOVE
   && (SImode != QImode || !TARGET_PARTIAL_REG_STALL)
   && ix86_pre_reload_split ()))
            {
              *pnum_clobbers = 1;
              return 1841; /* *smaxsi3_1 */
            }
          break;

        default:
          break;
        }
      break;

    case SMIN:
      switch (pattern21 (x1, pnum_clobbers))
        {
        case 0:
          if ((
#line 26759 "../../gcc/config/i386/i386.md"
(TARGET_CMOVE
   && ix86_pre_reload_split ()) && 
#line 1235 "../../gcc/config/i386/i386.md"
(!TARGET_64BIT)))
            {
              *pnum_clobbers = 1;
              return 1826; /* *smindi3_doubleword */
            }
          if ((
#line 26817 "../../gcc/config/i386/i386.md"
(TARGET_CMOVE
   && (DImode != QImode || !TARGET_PARTIAL_REG_STALL)
   && ix86_pre_reload_split ()) && 
#line 1161 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
            {
              *pnum_clobbers = 1;
              return 1846; /* *smindi3_1 */
            }
          break;

        case 1:
          if (
#line 26817 "../../gcc/config/i386/i386.md"
(TARGET_CMOVE
   && (SImode != QImode || !TARGET_PARTIAL_REG_STALL)
   && ix86_pre_reload_split ()))
            {
              *pnum_clobbers = 1;
              return 1842; /* *sminsi3_1 */
            }
          break;

        default:
          break;
        }
      break;

    case UMAX:
      switch (pattern21 (x1, pnum_clobbers))
        {
        case 0:
          if ((
#line 26759 "../../gcc/config/i386/i386.md"
(TARGET_CMOVE
   && ix86_pre_reload_split ()) && 
#line 1235 "../../gcc/config/i386/i386.md"
(!TARGET_64BIT)))
            {
              *pnum_clobbers = 1;
              return 1827; /* *umaxdi3_doubleword */
            }
          if ((
#line 26817 "../../gcc/config/i386/i386.md"
(TARGET_CMOVE
   && (DImode != QImode || !TARGET_PARTIAL_REG_STALL)
   && ix86_pre_reload_split ()) && 
#line 1161 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
            {
              *pnum_clobbers = 1;
              return 1847; /* *umaxdi3_1 */
            }
          break;

        case 1:
          if (
#line 26817 "../../gcc/config/i386/i386.md"
(TARGET_CMOVE
   && (SImode != QImode || !TARGET_PARTIAL_REG_STALL)
   && ix86_pre_reload_split ()))
            {
              *pnum_clobbers = 1;
              return 1843; /* *umaxsi3_1 */
            }
          break;

        default:
          break;
        }
      break;

    case UMIN:
      switch (pattern21 (x1, pnum_clobbers))
        {
        case 0:
          if ((
#line 26759 "../../gcc/config/i386/i386.md"
(TARGET_CMOVE
   && ix86_pre_reload_split ()) && 
#line 1235 "../../gcc/config/i386/i386.md"
(!TARGET_64BIT)))
            {
              *pnum_clobbers = 1;
              return 1828; /* *umindi3_doubleword */
            }
          if ((
#line 26817 "../../gcc/config/i386/i386.md"
(TARGET_CMOVE
   && (DImode != QImode || !TARGET_PARTIAL_REG_STALL)
   && ix86_pre_reload_split ()) && 
#line 1161 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
            {
              *pnum_clobbers = 1;
              return 1848; /* *umindi3_1 */
            }
          break;

        case 1:
          if (
#line 26817 "../../gcc/config/i386/i386.md"
(TARGET_CMOVE
   && (SImode != QImode || !TARGET_PARTIAL_REG_STALL)
   && ix86_pre_reload_split ()))
            {
              *pnum_clobbers = 1;
              return 1844; /* *uminsi3_1 */
            }
          break;

        default:
          break;
        }
      break;

    case UNSPEC_VOLATILE:
      res = recog_117 (x1, insn, pnum_clobbers);
      if (res >= 0)
        return res;
      break;

    case VEC_SELECT:
      res = recog_120 (x1, insn, pnum_clobbers);
      if (res >= 0)
        return res;
      break;

    case FIX:
      switch (pattern24 (x1))
        {
        case 0:
          if (
#line 7988 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16))
            return 4695; /* avx512fp16_fix_truncsi2 */
          break;

        case 1:
          if (
#line 8595 "../../gcc/config/i386/sse.md"
(TARGET_SSE))
            return 4797; /* sse_cvttss2si */
          break;

        case 2:
          if (
#line 9141 "../../gcc/config/i386/sse.md"
(TARGET_SSE2))
            return 4938; /* sse2_cvttsd2si */
          break;

        case 3:
          if ((
#line 7988 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return 4699; /* avx512fp16_fix_truncdi2 */
          break;

        case 4:
          if ((
#line 8595 "../../gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return 4799; /* sse_cvttss2siq */
          break;

        case 5:
          if ((
#line 9141 "../../gcc/config/i386/sse.md"
(TARGET_SSE2) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return 4940; /* sse2_cvttsd2siq */
          break;

        case 6:
          if (
#line 7998 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16))
            return 4703; /* avx512fp16_fix_truncsi2_mem */
          break;

        case 7:
          if ((
#line 7998 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return 4705; /* avx512fp16_fix_truncdi2_mem */
          break;

        default:
          break;
        }
      break;

    case UNSIGNED_FIX:
      switch (pattern24 (x1))
        {
        case 0:
          if (
#line 7988 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16))
            return 4697; /* avx512fp16_fixuns_truncsi2 */
          break;

        case 1:
          if (
#line 9046 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F))
            return 4912; /* avx512f_vcvttss2usi */
          break;

        case 2:
          if (
#line 9082 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F))
            return 4924; /* avx512f_vcvttsd2usi */
          break;

        case 3:
          if ((
#line 7988 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return 4701; /* avx512fp16_fixuns_truncdi2 */
          break;

        case 4:
          if ((
#line 9046 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return 4914; /* avx512f_vcvttss2usiq */
          break;

        case 5:
          if ((
#line 9082 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return 4926; /* avx512f_vcvttsd2usiq */
          break;

        case 6:
          if (
#line 7998 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16))
            return 4704; /* avx512fp16_fixuns_truncsi2_mem */
          break;

        case 7:
          if ((
#line 7998 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return 4706; /* avx512fp16_fixuns_truncdi2_mem */
          break;

        default:
          break;
        }
      break;

    default:
      break;
    }
  operands[0] = x3;
  res = recog_324 (x1, insn, pnum_clobbers);
  if (res >= 0)
    return res;
  switch (GET_CODE (x2))
    {
    case VEC_MERGE:
      return recog_321 (x1, insn, pnum_clobbers);

    case UNSPEC:
      return recog_317 (x1, insn, pnum_clobbers);

    case VEC_CONCAT:
      return recog_318 (x1, insn, pnum_clobbers);

    case PLUS:
      return recog_319 (x1, insn, pnum_clobbers);

    case MINUS:
      return recog_347 (x1, insn, pnum_clobbers);

    case MULT:
      return recog_332 (x1, insn, pnum_clobbers);

    case DIV:
      return recog_350 (x1, insn, pnum_clobbers);

    case SQRT:
      return recog_338 (x1, insn, pnum_clobbers);

    case SMAX:
      return recog_340 (x1, insn, pnum_clobbers);

    case SMIN:
      return recog_341 (x1, insn, pnum_clobbers);

    case NE:
    case EQ:
    case GE:
    case GT:
    case LE:
    case LT:
    case LTGT:
    case GEU:
    case GTU:
    case LEU:
    case LTU:
    case UNORDERED:
    case ORDERED:
    case UNEQ:
    case UNGE:
    case UNGT:
    case UNLE:
    case UNLT:
      return recog_353 (x1, insn, pnum_clobbers);

    case FMA:
      return recog_325 (x1, insn, pnum_clobbers);

    case FLOAT:
      return recog_331 (x1, insn, pnum_clobbers);

    case UNSIGNED_FLOAT:
      return recog_337 (x1, insn, pnum_clobbers);

    case FIX:
      return recog_336 (x1, insn, pnum_clobbers);

    case UNSIGNED_FIX:
      return recog_342 (x1, insn, pnum_clobbers);

    case FLOAT_EXTEND:
      return recog_326 (x1, insn, pnum_clobbers);

    case FLOAT_TRUNCATE:
      return recog_348 (x1, insn, pnum_clobbers);

    case VEC_SELECT:
      return recog_320 (x1, insn, pnum_clobbers);

    case VEC_DUPLICATE:
      return recog_322 (x1, insn, pnum_clobbers);

    case AND:
    case IOR:
    case XOR:
    case NOT:
      return recog_344 (x1, insn, pnum_clobbers);

    case SS_TRUNCATE:
      operands[0] = x3;
      switch (pattern49 (x2))
        {
        case 0:
          if (!
#line 14988 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512))
            return -1;
          return 7220; /* *avx512f_ss_truncatev16siv16qi2 */

        case 1:
          if (!(
#line 15250 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL) && 
#line 15224 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW)))
            return -1;
          return 7262; /* *avx512vl_ss_truncatev16hiv16qi2 */

        case 2:
          if (!
#line 14988 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512))
            return -1;
          return 7223; /* *avx512f_ss_truncatev16siv16hi2 */

        case 3:
          if (!
#line 14988 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512))
            return -1;
          return 7226; /* *avx512f_ss_truncatev8div8si2 */

        case 4:
          if (!
#line 14988 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512))
            return -1;
          return 7229; /* *avx512f_ss_truncatev8div8hi2 */

        case 5:
          if (!
#line 15250 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))
            return -1;
          return 7259; /* *avx512vl_ss_truncatev8siv8hi2 */

        case 6:
          if (!
#line 15161 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512))
            return -1;
          return 7249; /* avx512bw_ss_truncatev32hiv32qi2 */

        case 7:
          if (!
#line 15250 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))
            return -1;
          return 7256; /* *avx512vl_ss_truncatev4div4si2 */

        default:
          return -1;
        }

    case TRUNCATE:
      return recog_339 (x1, insn, pnum_clobbers);

    case US_TRUNCATE:
      operands[0] = x3;
      switch (pattern49 (x2))
        {
        case 0:
          if (!
#line 14988 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512))
            return -1;
          return 7222; /* *avx512f_us_truncatev16siv16qi2 */

        case 1:
          if (!(
#line 15250 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL) && 
#line 15224 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW)))
            return -1;
          return 7264; /* *avx512vl_us_truncatev16hiv16qi2 */

        case 2:
          if (!
#line 14988 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512))
            return -1;
          return 7225; /* *avx512f_us_truncatev16siv16hi2 */

        case 3:
          if (!
#line 14988 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512))
            return -1;
          return 7228; /* *avx512f_us_truncatev8div8si2 */

        case 4:
          if (!
#line 14988 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512))
            return -1;
          return 7231; /* *avx512f_us_truncatev8div8hi2 */

        case 5:
          if (!
#line 15250 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))
            return -1;
          return 7261; /* *avx512vl_us_truncatev8siv8hi2 */

        case 6:
          if (!
#line 15161 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512))
            return -1;
          return 7251; /* avx512bw_us_truncatev32hiv32qi2 */

        case 7:
          if (!
#line 15250 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))
            return -1;
          return 7258; /* *avx512vl_us_truncatev4div4si2 */

        default:
          return -1;
        }

    case SS_PLUS:
      return recog_323 (x1, insn, pnum_clobbers);

    case US_PLUS:
      operands[0] = x3;
      switch (pattern50 (x2))
        {
        case 0:
          if (!(
#line 16318 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && 1 && 1
   && ix86_binary_operator_ok (US_PLUS, V64QImode, operands)) && 
#line 740 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512)))
            return -1;
          return 7509; /* *avx512bw_usaddv64qi3 */

        case 1:
          if (!(
#line 16318 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && 1 && 1
   && ix86_binary_operator_ok (US_PLUS, V32QImode, operands)) && 
#line 740 "../../gcc/config/i386/sse.md"
(TARGET_AVX2)))
            return -1;
          return 7517; /* *avx2_usaddv32qi3 */

        case 2:
          if (!
#line 16318 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && 1 && 1
   && ix86_binary_operator_ok (US_PLUS, V16QImode, operands)))
            return -1;
          return 7525; /* *sse2_usaddv16qi3 */

        case 3:
          if (!(
#line 16318 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && 1 && 1
   && ix86_binary_operator_ok (US_PLUS, V32HImode, operands)) && 
#line 741 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512)))
            return -1;
          return 7533; /* *avx512bw_usaddv32hi3 */

        case 4:
          if (!(
#line 16318 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && 1 && 1
   && ix86_binary_operator_ok (US_PLUS, V16HImode, operands)) && 
#line 741 "../../gcc/config/i386/sse.md"
(TARGET_AVX2)))
            return -1;
          return 7541; /* *avx2_usaddv16hi3 */

        case 5:
          if (!
#line 16318 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && 1 && 1
   && ix86_binary_operator_ok (US_PLUS, V8HImode, operands)))
            return -1;
          return 7549; /* *sse2_usaddv8hi3 */

        default:
          return -1;
        }

    case SS_MINUS:
      operands[0] = x3;
      x4 = XEXP (x2, 0);
      switch (GET_CODE (x4))
        {
        case REG:
        case SUBREG:
        case MEM:
          switch (pattern50 (x2))
            {
            case 0:
              if (!(
#line 16318 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && 1 && 1
   && ix86_binary_operator_ok (SS_MINUS, V64QImode, operands)) && 
#line 740 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512)))
                return -1;
              return 7511; /* *avx512bw_sssubv64qi3 */

            case 1:
              if (!(
#line 16318 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && 1 && 1
   && ix86_binary_operator_ok (SS_MINUS, V32QImode, operands)) && 
#line 740 "../../gcc/config/i386/sse.md"
(TARGET_AVX2)))
                return -1;
              return 7519; /* *avx2_sssubv32qi3 */

            case 2:
              if (!
#line 16318 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && 1 && 1
   && ix86_binary_operator_ok (SS_MINUS, V16QImode, operands)))
                return -1;
              return 7527; /* *sse2_sssubv16qi3 */

            case 3:
              if (!(
#line 16318 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && 1 && 1
   && ix86_binary_operator_ok (SS_MINUS, V32HImode, operands)) && 
#line 741 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512)))
                return -1;
              return 7535; /* *avx512bw_sssubv32hi3 */

            case 4:
              if (!(
#line 16318 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && 1 && 1
   && ix86_binary_operator_ok (SS_MINUS, V16HImode, operands)) && 
#line 741 "../../gcc/config/i386/sse.md"
(TARGET_AVX2)))
                return -1;
              return 7543; /* *avx2_sssubv16hi3 */

            case 5:
              if (!
#line 16318 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && 1 && 1
   && ix86_binary_operator_ok (SS_MINUS, V8HImode, operands)))
                return -1;
              return 7551; /* *sse2_sssubv8hi3 */

            default:
              return -1;
            }

        case VEC_SELECT:
          switch (pattern193 (x2))
            {
            case 0:
              if (!
#line 22567 "../../gcc/config/i386/sse.md"
(TARGET_AVX2))
                return -1;
              return 8587; /* avx2_phsubswv16hi3 */

            case 1:
              if (!
#line 22590 "../../gcc/config/i386/sse.md"
(TARGET_SSSE3))
                return -1;
              return 8591; /* ssse3_phsubswv8hi3 */

            default:
              return -1;
            }

        default:
          return -1;
        }

    case US_MINUS:
      operands[0] = x3;
      switch (pattern50 (x2))
        {
        case 0:
          if (!(
#line 16318 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && 1 && 1
   && ix86_binary_operator_ok (US_MINUS, V64QImode, operands)) && 
#line 740 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512)))
            return -1;
          return 7513; /* *avx512bw_ussubv64qi3 */

        case 1:
          if (!(
#line 16318 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && 1 && 1
   && ix86_binary_operator_ok (US_MINUS, V32QImode, operands)) && 
#line 740 "../../gcc/config/i386/sse.md"
(TARGET_AVX2)))
            return -1;
          return 7521; /* *avx2_ussubv32qi3 */

        case 2:
          if (!
#line 16318 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && 1 && 1
   && ix86_binary_operator_ok (US_MINUS, V16QImode, operands)))
            return -1;
          return 7529; /* *sse2_ussubv16qi3 */

        case 3:
          if (!(
#line 16318 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && 1 && 1
   && ix86_binary_operator_ok (US_MINUS, V32HImode, operands)) && 
#line 741 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512)))
            return -1;
          return 7537; /* *avx512bw_ussubv32hi3 */

        case 4:
          if (!(
#line 16318 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && 1 && 1
   && ix86_binary_operator_ok (US_MINUS, V16HImode, operands)) && 
#line 741 "../../gcc/config/i386/sse.md"
(TARGET_AVX2)))
            return -1;
          return 7545; /* *avx2_ussubv16hi3 */

        case 5:
          if (!
#line 16318 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && 1 && 1
   && ix86_binary_operator_ok (US_MINUS, V8HImode, operands)))
            return -1;
          return 7553; /* *sse2_ussubv8hi3 */

        default:
          return -1;
        }

    case ASHIFTRT:
      return recog_327 (x1, insn, pnum_clobbers);

    case ASHIFT:
      return recog_329 (x1, insn, pnum_clobbers);

    case LSHIFTRT:
      return recog_328 (x1, insn, pnum_clobbers);

    case ROTATE:
      return recog_352 (x1, insn, pnum_clobbers);

    case ROTATERT:
      return recog_351 (x1, insn, pnum_clobbers);

    case UMAX:
      return recog_346 (x1, insn, pnum_clobbers);

    case UMIN:
      return recog_345 (x1, insn, pnum_clobbers);

    case ABS:
      return recog_335 (x1, insn, pnum_clobbers);

    case SIGN_EXTEND:
      return recog_343 (x1, insn, pnum_clobbers);

    case ZERO_EXTEND:
      return recog_333 (x1, insn, pnum_clobbers);

    case IF_THEN_ELSE:
      return recog_330 (x1, insn, pnum_clobbers);

    case CLZ:
      return recog_349 (x1, insn, pnum_clobbers);

    case POPCOUNT:
      return recog_334 (x1, insn, pnum_clobbers);

    default:
      return -1;
    }
}

 rtx_insn *
split_38 (rtx x1 ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx_insn *res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 0);
  operands[0] = x3;
  x4 = XEXP (x2, 1);
  x5 = XEXP (x4, 0);
  switch (GET_CODE (x5))
    {
    case REG:
    case SUBREG:
    case MEM:
      operands[1] = x5;
      x6 = XVECEXP (x1, 0, 1);
      switch (GET_CODE (x6))
        {
        case CLOBBER:
          x7 = XEXP (x6, 0);
          if (GET_CODE (x7) != REG
              || REGNO (x7) != 17
              || GET_MODE (x7) != E_CCmode)
            return NULL;
          if (register_operand (operands[0], E_VOIDmode)
              && register_operand (operands[1], E_VOIDmode)
              && 
#line 27589 "../../gcc/config/i386/i386.md"
(! TARGET_PARTIAL_REG_STALL && reload_completed
   && (GET_MODE (operands[0]) == HImode
       || (GET_MODE (operands[0]) == QImode && TARGET_PROMOTE_QImode))))
            return gen_split_976 (insn, operands);
          if (GET_MODE (x4) != E_V2QImode)
            return NULL;
          if (general_reg_operand (operands[0], E_V2QImode)
              && general_reg_operand (operands[1], E_V2QImode)
              && 
#line 3152 "../../gcc/config/i386/mmx.md"
((!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun))
   && reload_completed))
            return gen_split_1036 (insn, operands);
          if (!sse_reg_operand (operands[0], E_V2QImode)
              || !sse_reg_operand (operands[1], E_V2QImode)
              || !
#line 3179 "../../gcc/config/i386/mmx.md"
(TARGET_SSE2 && reload_completed))
            return NULL;
          return gen_split_1037 (insn, operands);

        case USE:
          switch (pattern834 (x1))
            {
            case 0:
              if (!(
#line 683 "../../gcc/config/i386/mmx.md"
(TARGET_MMX_WITH_SSE) && 
#line 685 "../../gcc/config/i386/mmx.md"
( reload_completed)))
                return NULL;
              return gen_split_1016 (insn, operands);

            case 1:
              if (!(
#line 2239 "../../gcc/config/i386/mmx.md"
(TARGET_SSE) && 
#line 2241 "../../gcc/config/i386/mmx.md"
( reload_completed)))
                return NULL;
              return gen_split_1025 (insn, operands);

            case 2:
              if (!((
#line 2239 "../../gcc/config/i386/mmx.md"
(TARGET_SSE) && 
#line 2224 "../../gcc/config/i386/mmx.md"
(TARGET_MMX_WITH_SSE)) && 
#line 2241 "../../gcc/config/i386/mmx.md"
( reload_completed)))
                return NULL;
              return gen_split_1027 (insn, operands);

            case 3:
              if (!(
#line 2239 "../../gcc/config/i386/mmx.md"
(TARGET_SSE) && 
#line 2241 "../../gcc/config/i386/mmx.md"
( reload_completed)))
                return NULL;
              return gen_split_1029 (insn, operands);

            case 4:
              if (!((
#line 2239 "../../gcc/config/i386/mmx.md"
(TARGET_SSE) && 
#line 2225 "../../gcc/config/i386/mmx.md"
(TARGET_MMX_WITH_SSE)) && 
#line 2241 "../../gcc/config/i386/mmx.md"
( reload_completed)))
                return NULL;
              return gen_split_1031 (insn, operands);

            case 5:
              if (!((
#line 2586 "../../gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 412 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)) && 
#line 2588 "../../gcc/config/i386/sse.md"
( reload_completed)))
                return NULL;
              return gen_split_1248 (insn, operands);

            case 6:
              if (!((
#line 2586 "../../gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 413 "../../gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 2588 "../../gcc/config/i386/sse.md"
( reload_completed)))
                return NULL;
              return gen_split_1250 (insn, operands);

            case 7:
              if (!((
#line 2586 "../../gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 413 "../../gcc/config/i386/sse.md"
(TARGET_SSE2)) && 
#line 2588 "../../gcc/config/i386/sse.md"
( reload_completed)))
                return NULL;
              return gen_split_1252 (insn, operands);

            case 8:
              if (!((
#line 2586 "../../gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 414 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)) && 
#line 2588 "../../gcc/config/i386/sse.md"
( reload_completed)))
                return NULL;
              return gen_split_1254 (insn, operands);

            case 9:
              if (!((
#line 2586 "../../gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 415 "../../gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 2588 "../../gcc/config/i386/sse.md"
( reload_completed)))
                return NULL;
              return gen_split_1256 (insn, operands);

            case 10:
              if (!((
#line 2586 "../../gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 415 "../../gcc/config/i386/sse.md"
(TARGET_SSE2)) && 
#line 2588 "../../gcc/config/i386/sse.md"
( reload_completed)))
                return NULL;
              return gen_split_1258 (insn, operands);

            case 11:
              if (!((
#line 2586 "../../gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 416 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)) && 
#line 2588 "../../gcc/config/i386/sse.md"
( reload_completed)))
                return NULL;
              return gen_split_1260 (insn, operands);

            case 12:
              if (!((
#line 2586 "../../gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 416 "../../gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 2588 "../../gcc/config/i386/sse.md"
( reload_completed)))
                return NULL;
              return gen_split_1262 (insn, operands);

            case 13:
              if (!(
#line 2586 "../../gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 2588 "../../gcc/config/i386/sse.md"
( reload_completed)))
                return NULL;
              return gen_split_1264 (insn, operands);

            case 14:
              if (!((
#line 2586 "../../gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 417 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)) && 
#line 2588 "../../gcc/config/i386/sse.md"
( reload_completed)))
                return NULL;
              return gen_split_1266 (insn, operands);

            case 15:
              if (!((
#line 2586 "../../gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 418 "../../gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 2588 "../../gcc/config/i386/sse.md"
( reload_completed)))
                return NULL;
              return gen_split_1268 (insn, operands);

            case 16:
              if (!((
#line 2586 "../../gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 418 "../../gcc/config/i386/sse.md"
(TARGET_SSE2)) && 
#line 2588 "../../gcc/config/i386/sse.md"
( reload_completed)))
                return NULL;
              return gen_split_1270 (insn, operands);

            default:
              return NULL;
            }

        default:
          return NULL;
        }

    case LTU:
    case UNLT:
      operands[1] = x5;
      if (!ix86_carry_flag_operator (operands[1], E_VOIDmode))
        return NULL;
      x8 = XEXP (x5, 0);
      if (GET_CODE (x8) != REG
          || REGNO (x8) != 17)
        return NULL;
      x9 = XEXP (x5, 1);
      if (x9 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
        return NULL;
      x6 = XVECEXP (x1, 0, 1);
      if (pattern227 (x6, 
E_CCmode, 
17) != 0
          || !general_reg_operand (operands[0], E_VOIDmode)
          || !
#line 27619 "../../gcc/config/i386/i386.md"
(! TARGET_PARTIAL_REG_STALL && reload_completed
   && (GET_MODE (operands[0]) == HImode
       || (GET_MODE (operands[0]) == QImode && TARGET_PROMOTE_QImode))))
        return NULL;
      return gen_split_978 (insn, operands);

    case ABS:
      x6 = XVECEXP (x1, 0, 1);
      if (GET_CODE (x6) != USE)
        return NULL;
      x8 = XEXP (x5, 0);
      operands[1] = x8;
      x7 = XEXP (x6, 0);
      operands[2] = x7;
      switch (GET_MODE (operands[0]))
        {
        case E_V2SFmode:
          if (pattern1053 (x4) != 0
              || !(
#line 700 "../../gcc/config/i386/mmx.md"
(TARGET_MMX_WITH_SSE) && 
#line 702 "../../gcc/config/i386/mmx.md"
( reload_completed)))
            return NULL;
          return gen_split_1017 (insn, operands);

        case E_V2BFmode:
          if (pattern1054 (x4, 
E_V2BFmode) != 0
              || !(
#line 2256 "../../gcc/config/i386/mmx.md"
(TARGET_SSE) && 
#line 2258 "../../gcc/config/i386/mmx.md"
( reload_completed)))
            return NULL;
          return gen_split_1032 (insn, operands);

        case E_V4BFmode:
          if (pattern1054 (x4, 
E_V4BFmode) != 0
              || !((
#line 2256 "../../gcc/config/i386/mmx.md"
(TARGET_SSE) && 
#line 2224 "../../gcc/config/i386/mmx.md"
(TARGET_MMX_WITH_SSE)) && 
#line 2258 "../../gcc/config/i386/mmx.md"
( reload_completed)))
            return NULL;
          return gen_split_1033 (insn, operands);

        case E_V2HFmode:
          if (pattern1054 (x4, 
E_V2HFmode) != 0
              || !(
#line 2256 "../../gcc/config/i386/mmx.md"
(TARGET_SSE) && 
#line 2258 "../../gcc/config/i386/mmx.md"
( reload_completed)))
            return NULL;
          return gen_split_1034 (insn, operands);

        case E_V4HFmode:
          if (pattern1054 (x4, 
E_V4HFmode) != 0
              || !((
#line 2256 "../../gcc/config/i386/mmx.md"
(TARGET_SSE) && 
#line 2225 "../../gcc/config/i386/mmx.md"
(TARGET_MMX_WITH_SSE)) && 
#line 2258 "../../gcc/config/i386/mmx.md"
( reload_completed)))
            return NULL;
          return gen_split_1035 (insn, operands);

        case E_V16SFmode:
          if (pattern1051 (x4, 
E_V16SFmode) != 0
              || !((
#line 2611 "../../gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 375 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)) && 
#line 2613 "../../gcc/config/i386/sse.md"
( reload_completed)))
            return NULL;
          return gen_split_1271 (insn, operands);

        case E_V8SFmode:
          if (pattern1051 (x4, 
E_V8SFmode) != 0
              || !((
#line 2611 "../../gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 375 "../../gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 2613 "../../gcc/config/i386/sse.md"
( reload_completed)))
            return NULL;
          return gen_split_1272 (insn, operands);

        case E_V4SFmode:
          if (pattern1051 (x4, 
E_V4SFmode) != 0
              || !(
#line 2611 "../../gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 2613 "../../gcc/config/i386/sse.md"
( reload_completed)))
            return NULL;
          return gen_split_1273 (insn, operands);

        case E_V8DFmode:
          if (pattern1051 (x4, 
E_V8DFmode) != 0
              || !((
#line 2611 "../../gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 376 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)) && 
#line 2613 "../../gcc/config/i386/sse.md"
( reload_completed)))
            return NULL;
          return gen_split_1274 (insn, operands);

        case E_V4DFmode:
          if (pattern1051 (x4, 
E_V4DFmode) != 0
              || !((
#line 2611 "../../gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 376 "../../gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 2613 "../../gcc/config/i386/sse.md"
( reload_completed)))
            return NULL;
          return gen_split_1275 (insn, operands);

        case E_V2DFmode:
          if (pattern1051 (x4, 
E_V2DFmode) != 0
              || !((
#line 2611 "../../gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 377 "../../gcc/config/i386/sse.md"
(TARGET_SSE2)) && 
#line 2613 "../../gcc/config/i386/sse.md"
( reload_completed)))
            return NULL;
          return gen_split_1276 (insn, operands);

        default:
          return NULL;
        }

    default:
      return NULL;
    }
}

 rtx_insn *
split_50 (rtx x1 ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
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
    case LT:
      x5 = XEXP (x4, 0);
      operands[1] = x5;
      x6 = XEXP (x4, 1);
      operands[2] = x6;
      x7 = XEXP (x3, 1);
      operands[3] = x7;
      switch (GET_MODE (operands[0]))
        {
        case E_V4HImode:
          if (pattern934 (x3, 
E_V4HImode) != 0
              || !
#line 3912 "../../gcc/config/i386/mmx.md"
(TARGET_MMX_WITH_SSE && ix86_pre_reload_split ()))
            return NULL;
          return gen_split_1044 (insn, operands);

        case E_V2SImode:
          if (pattern934 (x3, 
E_V2SImode) != 0
              || !
#line 3912 "../../gcc/config/i386/mmx.md"
(TARGET_MMX_WITH_SSE && ix86_pre_reload_split ()))
            return NULL;
          return gen_split_1045 (insn, operands);

        case E_V1DImode:
          if (pattern934 (x3, 
E_V1DImode) != 0
              || !
#line 3912 "../../gcc/config/i386/mmx.md"
(TARGET_MMX_WITH_SSE && ix86_pre_reload_split ()))
            return NULL;
          return gen_split_1046 (insn, operands);

        case E_V2HImode:
          if (pattern934 (x3, 
E_V2HImode) != 0
              || !
#line 3975 "../../gcc/config/i386/mmx.md"
(TARGET_SSE2 && ix86_pre_reload_split ()))
            return NULL;
          return gen_split_1048 (insn, operands);

        default:
          return NULL;
        }

    case REG:
      switch (pattern234 (x3))
        {
        case 0:
          if (!
#line 2115 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && reload_completed))
            return NULL;
          return gen_split_1173 (insn, operands);

        case 1:
          if (!
#line 2115 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && reload_completed))
            return NULL;
          return gen_split_1176 (insn, operands);

        case 2:
          if (!(
#line 2115 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && reload_completed) && 
#line 2075 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW)))
            return NULL;
          return gen_split_1179 (insn, operands);

        case 3:
          if (!(
#line 2115 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && reload_completed) && 
#line 2075 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW)))
            return NULL;
          return gen_split_1182 (insn, operands);

        default:
          return NULL;
        }

    default:
      return NULL;
    }
}

 rtx_insn *
split_51 (rtx x1 ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  rtx_insn *res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) != SS_TRUNCATE)
    return NULL;
  x4 = XEXP (x2, 1);
  if (GET_CODE (x4) != SS_TRUNCATE)
    return NULL;
  x5 = XEXP (x1, 0);
  operands[0] = x5;
  switch (pattern268 (x2))
    {
    case 0:
      if (!(
#line 4771 "../../gcc/config/i386/mmx.md"
(TARGET_MMX || TARGET_MMX_WITH_SSE) && 
#line 4776 "../../gcc/config/i386/mmx.md"
( reload_completed
   && SSE_REGNO_P (REGNO (operands[0])))))
        return NULL;
      return gen_split_1092 (insn, operands);

    case 1:
      if (!(
#line 4812 "../../gcc/config/i386/mmx.md"
(TARGET_MMX || TARGET_MMX_WITH_SSE) && 
#line 4817 "../../gcc/config/i386/mmx.md"
( reload_completed
   && SSE_REGNO_P (REGNO (operands[0])))))
        return NULL;
      return gen_split_1094 (insn, operands);

    default:
      return NULL;
    }
}

 rtx_insn *
split_52 (rtx x1 ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7;
  rtx_insn *res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) != VEC_DUPLICATE)
    return NULL;
  x4 = XEXP (x1, 0);
  operands[0] = x4;
  x5 = XEXP (x3, 0);
  operands[2] = x5;
  x6 = XEXP (x2, 1);
  operands[1] = x6;
  x7 = XEXP (x2, 2);
  operands[3] = x7;
  if (!const_int_operand (operands[3], E_SImode))
    return NULL;
  switch (GET_MODE (operands[0]))
    {
    case E_V4HFmode:
      if (pattern1062 (x2, 
E_V4HFmode, 
E_HFmode) != 0
          || !
#line 5331 "../../gcc/config/i386/mmx.md"
(TARGET_MMX_WITH_SSE && TARGET_SSE4_1 && reload_completed
   && ((unsigned) exact_log2 (INTVAL (operands[3]))
       < GET_MODE_NUNITS (V4HFmode))))
        return NULL;
      return gen_split_1104 (insn, operands);

    case E_V4BFmode:
      if (pattern1062 (x2, 
E_V4BFmode, 
E_BFmode) != 0
          || !
#line 5331 "../../gcc/config/i386/mmx.md"
(TARGET_MMX_WITH_SSE && TARGET_SSE4_1 && reload_completed
   && ((unsigned) exact_log2 (INTVAL (operands[3]))
       < GET_MODE_NUNITS (V4BFmode))))
        return NULL;
      return gen_split_1105 (insn, operands);

    case E_V4HImode:
      if (pattern1062 (x2, 
E_V4HImode, 
E_HImode) != 0
          || !
#line 5331 "../../gcc/config/i386/mmx.md"
(TARGET_MMX_WITH_SSE && TARGET_SSE4_1 && reload_completed
   && ((unsigned) exact_log2 (INTVAL (operands[3]))
       < GET_MODE_NUNITS (V4HImode))))
        return NULL;
      return gen_split_1106 (insn, operands);

    case E_V2HFmode:
      if (pattern1062 (x2, 
E_V2HFmode, 
E_HFmode) != 0
          || !
#line 5996 "../../gcc/config/i386/mmx.md"
(TARGET_SSE4_1 && reload_completed
   && ((unsigned) exact_log2 (INTVAL (operands[3]))
       < GET_MODE_NUNITS (V2HFmode))))
        return NULL;
      return gen_split_1112 (insn, operands);

    case E_V2BFmode:
      if (pattern1062 (x2, 
E_V2BFmode, 
E_BFmode) != 0
          || !
#line 5996 "../../gcc/config/i386/mmx.md"
(TARGET_SSE4_1 && reload_completed
   && ((unsigned) exact_log2 (INTVAL (operands[3]))
       < GET_MODE_NUNITS (V2BFmode))))
        return NULL;
      return gen_split_1113 (insn, operands);

    case E_V2HImode:
      if (pattern1062 (x2, 
E_V2HImode, 
E_HImode) != 0
          || !
#line 5996 "../../gcc/config/i386/mmx.md"
(TARGET_SSE4_1 && reload_completed
   && ((unsigned) exact_log2 (INTVAL (operands[3]))
       < GET_MODE_NUNITS (V2HImode))))
        return NULL;
      return gen_split_1114 (insn, operands);

    default:
      return NULL;
    }
}

 rtx_insn *
split_54 (rtx x1 ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  rtx_insn *res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) != E_DImode)
    return NULL;
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) != UNSPEC
      || XVECLEN (x3, 0) != 1
      || XINT (x3, 1) != 49
      || GET_MODE (x3) != E_SImode)
    return NULL;
  x4 = XEXP (x1, 0);
  operands[0] = x4;
  if (!register_operand (operands[0], E_DImode))
    return NULL;
  x5 = XVECEXP (x3, 0, 0);
  switch (GET_CODE (x5))
    {
    case LT:
      switch (pattern992 (x5))
        {
        case 0:
          if (!((
#line 22003 "../../gcc/config/i386/sse.md"
(TARGET_64BIT && TARGET_SSE) && 
#line 422 "../../gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 22005 "../../gcc/config/i386/sse.md"
( reload_completed)))
            return NULL;
          return gen_split_3402 (insn, operands);

        case 1:
          if (!(
#line 22003 "../../gcc/config/i386/sse.md"
(TARGET_64BIT && TARGET_SSE) && 
#line 22005 "../../gcc/config/i386/sse.md"
( reload_completed)))
            return NULL;
          return gen_split_3404 (insn, operands);

        case 2:
          if (!((
#line 22003 "../../gcc/config/i386/sse.md"
(TARGET_64BIT && TARGET_SSE) && 
#line 423 "../../gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 22005 "../../gcc/config/i386/sse.md"
( reload_completed)))
            return NULL;
          return gen_split_3406 (insn, operands);

        case 3:
          if (!((
#line 22003 "../../gcc/config/i386/sse.md"
(TARGET_64BIT && TARGET_SSE) && 
#line 423 "../../gcc/config/i386/sse.md"
(TARGET_SSE2)) && 
#line 22005 "../../gcc/config/i386/sse.md"
( reload_completed)))
            return NULL;
          return gen_split_3408 (insn, operands);

        case 4:
          if (!(
#line 22315 "../../gcc/config/i386/sse.md"
(TARGET_64BIT && TARGET_SSE2) && 
#line 22317 "../../gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_3444 (insn, operands);

        default:
          return NULL;
        }

    case SUBREG:
      switch (pattern1083 (x5))
        {
        case 0:
          if (!((
#line 22028 "../../gcc/config/i386/sse.md"
(TARGET_64BIT && TARGET_SSE) && 
#line 422 "../../gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 22030 "../../gcc/config/i386/sse.md"
( reload_completed)))
            return NULL;
          return gen_split_3410 (insn, operands);

        case 1:
          if (!(
#line 22028 "../../gcc/config/i386/sse.md"
(TARGET_64BIT && TARGET_SSE) && 
#line 22030 "../../gcc/config/i386/sse.md"
( reload_completed)))
            return NULL;
          return gen_split_3412 (insn, operands);

        case 2:
          if (!((
#line 22028 "../../gcc/config/i386/sse.md"
(TARGET_64BIT && TARGET_SSE) && 
#line 423 "../../gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 22030 "../../gcc/config/i386/sse.md"
( reload_completed)))
            return NULL;
          return gen_split_3414 (insn, operands);

        case 3:
          if (!((
#line 22028 "../../gcc/config/i386/sse.md"
(TARGET_64BIT && TARGET_SSE) && 
#line 423 "../../gcc/config/i386/sse.md"
(TARGET_SSE2)) && 
#line 22030 "../../gcc/config/i386/sse.md"
( reload_completed)))
            return NULL;
          return gen_split_3416 (insn, operands);

        case 4:
          if (!((
#line 22067 "../../gcc/config/i386/sse.md"
(TARGET_64BIT && TARGET_SSE) && 
#line 422 "../../gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 22069 "../../gcc/config/i386/sse.md"
( reload_completed)))
            return NULL;
          return gen_split_3422 (insn, operands);

        case 5:
          if (!(
#line 22067 "../../gcc/config/i386/sse.md"
(TARGET_64BIT && TARGET_SSE) && 
#line 22069 "../../gcc/config/i386/sse.md"
( reload_completed)))
            return NULL;
          return gen_split_3424 (insn, operands);

        case 6:
          if (!((
#line 22067 "../../gcc/config/i386/sse.md"
(TARGET_64BIT && TARGET_SSE) && 
#line 423 "../../gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 22069 "../../gcc/config/i386/sse.md"
( reload_completed)))
            return NULL;
          return gen_split_3426 (insn, operands);

        case 7:
          if (!((
#line 22067 "../../gcc/config/i386/sse.md"
(TARGET_64BIT && TARGET_SSE) && 
#line 423 "../../gcc/config/i386/sse.md"
(TARGET_SSE2)) && 
#line 22069 "../../gcc/config/i386/sse.md"
( reload_completed)))
            return NULL;
          return gen_split_3428 (insn, operands);

        default:
          return NULL;
        }

    case VEC_MERGE:
      switch (pattern984 (x5))
        {
        case 0:
          if (!((
#line 22344 "../../gcc/config/i386/sse.md"
(TARGET_64BIT && TARGET_SSE2) && 
#line 630 "../../gcc/config/i386/sse.md"
(TARGET_AVX2)) && 
#line 22346 "../../gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_3445 (insn, operands);

        case 1:
          if (!(
#line 22344 "../../gcc/config/i386/sse.md"
(TARGET_64BIT && TARGET_SSE2) && 
#line 22346 "../../gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_3446 (insn, operands);

        default:
          return NULL;
        }

    default:
      return NULL;
    }
}

 rtx_insn *
split_57 (rtx x1 ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  rtx_insn *res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  operands[1] = x3;
  x4 = XEXP (x2, 2);
  if (GET_CODE (x4) != UNSPEC
      || XVECLEN (x4, 0) != 3
      || XINT (x4, 1) != 59)
    return NULL;
  switch (pattern1013 (x2))
    {
    case 0:
      x5 = XVECEXP (x4, 0, 0);
      operands[3] = x5;
      switch (pattern1467 (x2))
        {
        case 0:
          if (((
#line 3329 "../../gcc/config/i386/sse.md"
(TARGET_SSE && ix86_pre_reload_split ()
   && ((rtx_equal_p (operands[1], operands[3])
	&& rtx_equal_p (operands[2], operands[4]))
       || (rtx_equal_p (operands[1], operands[4])
	   && rtx_equal_p (operands[2], operands[3])))
   && (INTVAL (operands[5]) == 1 || INTVAL (operands[5]) == 14)) && 
#line 390 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_EVEX512)) && 
#line 3336 "../../gcc/config/i386/sse.md"
( 1)))
            return gen_split_1277 (insn, operands);
          break;

        case 1:
          if (((
#line 3329 "../../gcc/config/i386/sse.md"
(TARGET_SSE && ix86_pre_reload_split ()
   && ((rtx_equal_p (operands[1], operands[3])
	&& rtx_equal_p (operands[2], operands[4]))
       || (rtx_equal_p (operands[1], operands[4])
	   && rtx_equal_p (operands[2], operands[3])))
   && (INTVAL (operands[5]) == 1 || INTVAL (operands[5]) == 14)) && 
#line 391 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL)) && 
#line 3336 "../../gcc/config/i386/sse.md"
( 1)))
            return gen_split_1278 (insn, operands);
          break;

        case 2:
          if (((
#line 3329 "../../gcc/config/i386/sse.md"
(TARGET_SSE && ix86_pre_reload_split ()
   && ((rtx_equal_p (operands[1], operands[3])
	&& rtx_equal_p (operands[2], operands[4]))
       || (rtx_equal_p (operands[1], operands[4])
	   && rtx_equal_p (operands[2], operands[3])))
   && (INTVAL (operands[5]) == 1 || INTVAL (operands[5]) == 14)) && 
#line 392 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL)) && 
#line 3336 "../../gcc/config/i386/sse.md"
( 1)))
            return gen_split_1279 (insn, operands);
          break;

        case 3:
          if (((
#line 3329 "../../gcc/config/i386/sse.md"
(TARGET_SSE && ix86_pre_reload_split ()
   && ((rtx_equal_p (operands[1], operands[3])
	&& rtx_equal_p (operands[2], operands[4]))
       || (rtx_equal_p (operands[1], operands[4])
	   && rtx_equal_p (operands[2], operands[3])))
   && (INTVAL (operands[5]) == 1 || INTVAL (operands[5]) == 14)) && 
#line 393 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)) && 
#line 3336 "../../gcc/config/i386/sse.md"
( 1)))
            return gen_split_1280 (insn, operands);
          break;

        case 4:
          if (((
#line 3329 "../../gcc/config/i386/sse.md"
(TARGET_SSE && ix86_pre_reload_split ()
   && ((rtx_equal_p (operands[1], operands[3])
	&& rtx_equal_p (operands[2], operands[4]))
       || (rtx_equal_p (operands[1], operands[4])
	   && rtx_equal_p (operands[2], operands[3])))
   && (INTVAL (operands[5]) == 1 || INTVAL (operands[5]) == 14)) && 
#line 393 "../../gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 3336 "../../gcc/config/i386/sse.md"
( 1)))
            return gen_split_1281 (insn, operands);
          break;

        case 5:
          if ((
#line 3329 "../../gcc/config/i386/sse.md"
(TARGET_SSE && ix86_pre_reload_split ()
   && ((rtx_equal_p (operands[1], operands[3])
	&& rtx_equal_p (operands[2], operands[4]))
       || (rtx_equal_p (operands[1], operands[4])
	   && rtx_equal_p (operands[2], operands[3])))
   && (INTVAL (operands[5]) == 1 || INTVAL (operands[5]) == 14)) && 
#line 3336 "../../gcc/config/i386/sse.md"
( 1)))
            return gen_split_1282 (insn, operands);
          break;

        case 6:
          if (((
#line 3329 "../../gcc/config/i386/sse.md"
(TARGET_SSE && ix86_pre_reload_split ()
   && ((rtx_equal_p (operands[1], operands[3])
	&& rtx_equal_p (operands[2], operands[4]))
       || (rtx_equal_p (operands[1], operands[4])
	   && rtx_equal_p (operands[2], operands[3])))
   && (INTVAL (operands[5]) == 1 || INTVAL (operands[5]) == 14)) && 
#line 394 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)) && 
#line 3336 "../../gcc/config/i386/sse.md"
( 1)))
            return gen_split_1283 (insn, operands);
          break;

        case 7:
          if (((
#line 3329 "../../gcc/config/i386/sse.md"
(TARGET_SSE && ix86_pre_reload_split ()
   && ((rtx_equal_p (operands[1], operands[3])
	&& rtx_equal_p (operands[2], operands[4]))
       || (rtx_equal_p (operands[1], operands[4])
	   && rtx_equal_p (operands[2], operands[3])))
   && (INTVAL (operands[5]) == 1 || INTVAL (operands[5]) == 14)) && 
#line 394 "../../gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 3336 "../../gcc/config/i386/sse.md"
( 1)))
            return gen_split_1284 (insn, operands);
          break;

        case 8:
          if (((
#line 3329 "../../gcc/config/i386/sse.md"
(TARGET_SSE && ix86_pre_reload_split ()
   && ((rtx_equal_p (operands[1], operands[3])
	&& rtx_equal_p (operands[2], operands[4]))
       || (rtx_equal_p (operands[1], operands[4])
	   && rtx_equal_p (operands[2], operands[3])))
   && (INTVAL (operands[5]) == 1 || INTVAL (operands[5]) == 14)) && 
#line 395 "../../gcc/config/i386/sse.md"
(TARGET_SSE2)) && 
#line 3336 "../../gcc/config/i386/sse.md"
( 1)))
            return gen_split_1285 (insn, operands);
          break;

        case 9:
          if (((
#line 4214 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()
  /* LT or GE 0 */
  && ((INTVAL (operands[5]) == 1) || (INTVAL (operands[5]) == 5))) && 
#line 422 "../../gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 4218 "../../gcc/config/i386/sse.md"
( 1)))
            return gen_split_1322 (insn, operands);
          break;

        case 10:
          if ((
#line 4214 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()
  /* LT or GE 0 */
  && ((INTVAL (operands[5]) == 1) || (INTVAL (operands[5]) == 5))) && 
#line 4218 "../../gcc/config/i386/sse.md"
( 1)))
            return gen_split_1323 (insn, operands);
          break;

        case 11:
          if (((
#line 4214 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()
  /* LT or GE 0 */
  && ((INTVAL (operands[5]) == 1) || (INTVAL (operands[5]) == 5))) && 
#line 423 "../../gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 4218 "../../gcc/config/i386/sse.md"
( 1)))
            return gen_split_1324 (insn, operands);
          break;

        case 12:
          if (((
#line 4214 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()
  /* LT or GE 0 */
  && ((INTVAL (operands[5]) == 1) || (INTVAL (operands[5]) == 5))) && 
#line 423 "../../gcc/config/i386/sse.md"
(TARGET_SSE2)) && 
#line 4218 "../../gcc/config/i386/sse.md"
( 1)))
            return gen_split_1325 (insn, operands);
          break;

        case 13:
          if ((
#line 4243 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()
  /* LT or GE 0 */
  && ((INTVAL (operands[5]) == 1) || (INTVAL (operands[5]) == 5))) && 
#line 4247 "../../gcc/config/i386/sse.md"
( 1)))
            return gen_split_1326 (insn, operands);
          break;

        case 14:
          if ((
#line 4243 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()
  /* LT or GE 0 */
  && ((INTVAL (operands[5]) == 1) || (INTVAL (operands[5]) == 5))) && 
#line 4247 "../../gcc/config/i386/sse.md"
( 1)))
            return gen_split_1327 (insn, operands);
          break;

        case 15:
          if (((
#line 4243 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()
  /* LT or GE 0 */
  && ((INTVAL (operands[5]) == 1) || (INTVAL (operands[5]) == 5))) && 
#line 612 "../../gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 4247 "../../gcc/config/i386/sse.md"
( 1)))
            return gen_split_1328 (insn, operands);
          break;

        case 16:
          if (((
#line 4243 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()
  /* LT or GE 0 */
  && ((INTVAL (operands[5]) == 1) || (INTVAL (operands[5]) == 5))) && 
#line 612 "../../gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 4247 "../../gcc/config/i386/sse.md"
( 1)))
            return gen_split_1329 (insn, operands);
          break;

        case 17:
          if (((
#line 18027 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()
  /* LT or GE 0 */
  && ((INTVAL (operands[5]) == 1 && !MEM_P (operands[2]))
      || (INTVAL (operands[5]) == 5 && !MEM_P (operands[1])))) && 
#line 630 "../../gcc/config/i386/sse.md"
(TARGET_AVX2)) && 
#line 18032 "../../gcc/config/i386/sse.md"
( 1)))
            return gen_split_3280 (insn, operands);
          break;

        case 18:
          if ((
#line 18027 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()
  /* LT or GE 0 */
  && ((INTVAL (operands[5]) == 1 && !MEM_P (operands[2]))
      || (INTVAL (operands[5]) == 5 && !MEM_P (operands[1])))) && 
#line 18032 "../../gcc/config/i386/sse.md"
( 1)))
            return gen_split_3281 (insn, operands);
          break;

        default:
          break;
        }
      if (GET_CODE (x5) != SUBREG)
        return NULL;
      switch (pattern1470 (x2))
        {
        case 0:
          if (!(
#line 4278 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()
  /* not LT or GE 0 */
  && ((INTVAL (operands[5]) == 1) || (INTVAL (operands[5]) == 5))) && 
#line 4282 "../../gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1330 (insn, operands);

        case 1:
          if (!(
#line 4278 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()
  /* not LT or GE 0 */
  && ((INTVAL (operands[5]) == 1) || (INTVAL (operands[5]) == 5))) && 
#line 4282 "../../gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1331 (insn, operands);

        case 2:
          if (!((
#line 4278 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()
  /* not LT or GE 0 */
  && ((INTVAL (operands[5]) == 1) || (INTVAL (operands[5]) == 5))) && 
#line 612 "../../gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 4282 "../../gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1332 (insn, operands);

        case 3:
          if (!((
#line 4278 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()
  /* not LT or GE 0 */
  && ((INTVAL (operands[5]) == 1) || (INTVAL (operands[5]) == 5))) && 
#line 612 "../../gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 4282 "../../gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1333 (insn, operands);

        case 4:
          if (!((
#line 18056 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()
  && GET_MODE_CLASS (GET_MODE (operands[3])) == MODE_VECTOR_INT
  && GET_MODE_SIZE (GET_MODE (operands[3])) == 32
  /* LT or GE 0 */
  && ((INTVAL (operands[5]) == 1 && !MEM_P (operands[1]))
      || (INTVAL (operands[5]) == 5 && !MEM_P (operands[2])))) && 
#line 630 "../../gcc/config/i386/sse.md"
(TARGET_AVX2)) && 
#line 18063 "../../gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_3282 (insn, operands);

        case 5:
          if (!(
#line 18056 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()
  && GET_MODE_CLASS (GET_MODE (operands[3])) == MODE_VECTOR_INT
  && GET_MODE_SIZE (GET_MODE (operands[3])) == 16
  /* LT or GE 0 */
  && ((INTVAL (operands[5]) == 1 && !MEM_P (operands[1]))
      || (INTVAL (operands[5]) == 5 && !MEM_P (operands[2])))) && 
#line 18063 "../../gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_3283 (insn, operands);

        default:
          return NULL;
        }

    case 1:
      if (!((
#line 18088 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()
  /* LT or GE 0 */
  && ((INTVAL (operands[5]) == 1 && !MEM_P (operands[1]))
      || (INTVAL (operands[5]) == 5 && !MEM_P (operands[2])))) && 
#line 630 "../../gcc/config/i386/sse.md"
(TARGET_AVX2)) && 
#line 18093 "../../gcc/config/i386/sse.md"
( 1)))
        return NULL;
      return gen_split_3284 (insn, operands);

    case 2:
      if (!(
#line 18088 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()
  /* LT or GE 0 */
  && ((INTVAL (operands[5]) == 1 && !MEM_P (operands[1]))
      || (INTVAL (operands[5]) == 5 && !MEM_P (operands[2])))) && 
#line 18093 "../../gcc/config/i386/sse.md"
( 1)))
        return NULL;
      return gen_split_3285 (insn, operands);

    default:
      return NULL;
    }
}

 rtx_insn *
split_68 (rtx x1 ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8;
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
          return gen_split_1651 (insn, operands);

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
          return gen_split_1678 (insn, operands);

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
          return gen_split_1705 (insn, operands);

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
          return gen_split_1732 (insn, operands);

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
          return gen_split_1759 (insn, operands);

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
          return gen_split_1786 (insn, operands);

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
          return gen_split_1813 (insn, operands);

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
          return gen_split_1840 (insn, operands);

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
          return gen_split_1867 (insn, operands);

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
          return gen_split_1894 (insn, operands);

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
          return gen_split_1921 (insn, operands);

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
          return gen_split_1948 (insn, operands);

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
          return gen_split_1654 (insn, operands);

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
          return gen_split_1681 (insn, operands);

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
          return gen_split_1708 (insn, operands);

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
          return gen_split_1735 (insn, operands);

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
          return gen_split_1762 (insn, operands);

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
          return gen_split_1789 (insn, operands);

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
          return gen_split_1816 (insn, operands);

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
          return gen_split_1843 (insn, operands);

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
          return gen_split_1870 (insn, operands);

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
          return gen_split_1897 (insn, operands);

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
          return gen_split_1924 (insn, operands);

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
          return gen_split_1951 (insn, operands);

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
          return gen_split_1657 (insn, operands);

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
          return gen_split_1684 (insn, operands);

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
          return gen_split_1711 (insn, operands);

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
          return gen_split_1738 (insn, operands);

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
          return gen_split_1765 (insn, operands);

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
          return gen_split_1792 (insn, operands);

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
          return gen_split_1819 (insn, operands);

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
          return gen_split_1846 (insn, operands);

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
          return gen_split_1873 (insn, operands);

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
          return gen_split_1900 (insn, operands);

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
          return gen_split_1927 (insn, operands);

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
          return gen_split_1954 (insn, operands);

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
          return gen_split_2947 (insn, operands);

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
          return gen_split_2956 (insn, operands);

        case 38:
          if (!(
#line 13946 "../../gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 13950 "../../gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_2965 (insn, operands);

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
          return gen_split_2974 (insn, operands);

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
          return gen_split_2983 (insn, operands);

        case 41:
          if (!(
#line 13946 "../../gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 13950 "../../gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_2992 (insn, operands);

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
          return gen_split_3001 (insn, operands);

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
          return gen_split_3010 (insn, operands);

        case 44:
          if (!(
#line 13946 "../../gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 13950 "../../gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_3019 (insn, operands);

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
          return gen_split_3028 (insn, operands);

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
          return gen_split_3037 (insn, operands);

        case 47:
          if (!(
#line 13946 "../../gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 13950 "../../gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_3046 (insn, operands);

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
          return gen_split_2299 (insn, operands);

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
          return gen_split_2326 (insn, operands);

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
          return gen_split_2353 (insn, operands);

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
          return gen_split_2380 (insn, operands);

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
          return gen_split_2407 (insn, operands);

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
          return gen_split_2434 (insn, operands);

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
          return gen_split_2461 (insn, operands);

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
          return gen_split_2488 (insn, operands);

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
          return gen_split_2515 (insn, operands);

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
          return gen_split_2542 (insn, operands);

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
          return gen_split_2569 (insn, operands);

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
          return gen_split_2596 (insn, operands);

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
          return gen_split_2302 (insn, operands);

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
          return gen_split_2329 (insn, operands);

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
          return gen_split_2356 (insn, operands);

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
          return gen_split_2383 (insn, operands);

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
          return gen_split_2410 (insn, operands);

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
          return gen_split_2437 (insn, operands);

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
          return gen_split_2464 (insn, operands);

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
          return gen_split_2491 (insn, operands);

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
          return gen_split_2518 (insn, operands);

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
          return gen_split_2545 (insn, operands);

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
          return gen_split_2572 (insn, operands);

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
          return gen_split_2599 (insn, operands);

        default:
          return NULL;
        }

    case XOR:
      x5 = XEXP (x4, 0);
      operands[1] = x5;
      x6 = XEXP (x4, 1);
      operands[2] = x6;
      x7 = XEXP (x3, 1);
      operands[3] = x7;
      switch (GET_MODE (operands[0]))
        {
        case E_V64QImode:
          if (pattern1188 (x2, 
E_V64QImode) != 0
              || !((
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
          return gen_split_2305 (insn, operands);

        case E_V32QImode:
          if (pattern1003 (x2, 
E_V32QImode) != 0)
            return NULL;
          if (regmem_or_bitnot_regmem_operand (operands[1], E_V32QImode)
              && regmem_or_bitnot_regmem_operand (operands[2], E_V32QImode)
              && regmem_or_bitnot_regmem_operand (operands[3], E_V32QImode))
            {
              x8 = XEXP (x2, 1);
              operands[4] = x8;
              if (regmem_or_bitnot_regmem_operand (operands[4], E_V32QImode)
                  && ((
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
                return gen_split_2332 (insn, operands);
            }
          if (!register_operand (operands[1], E_V32QImode)
              || !register_operand (operands[2], E_V32QImode)
              || !nonimmediate_operand (operands[3], E_V32QImode))
            return NULL;
          x8 = XEXP (x2, 1);
          if (rtx_equal_p (x8, operands[1])
              && 
#line 26225 "../../gcc/config/i386/sse.md"
(TARGET_XOP))
            return gen_split_3682 (insn, operands);
          if (!rtx_equal_p (x8, operands[2])
              || !
#line 26237 "../../gcc/config/i386/sse.md"
(TARGET_XOP))
            return NULL;
          return gen_split_3698 (insn, operands);

        case E_V16QImode:
          if (pattern1003 (x2, 
E_V16QImode) != 0)
            return NULL;
          if (regmem_or_bitnot_regmem_operand (operands[1], E_V16QImode)
              && regmem_or_bitnot_regmem_operand (operands[2], E_V16QImode)
              && regmem_or_bitnot_regmem_operand (operands[3], E_V16QImode))
            {
              x8 = XEXP (x2, 1);
              operands[4] = x8;
              if (regmem_or_bitnot_regmem_operand (operands[4], E_V16QImode)
                  && (
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
                return gen_split_2359 (insn, operands);
            }
          if (!register_operand (operands[1], E_V16QImode)
              || !register_operand (operands[2], E_V16QImode)
              || !nonimmediate_operand (operands[3], E_V16QImode))
            return NULL;
          x8 = XEXP (x2, 1);
          if (rtx_equal_p (x8, operands[1])
              && 
#line 26225 "../../gcc/config/i386/sse.md"
(TARGET_XOP))
            return gen_split_3683 (insn, operands);
          if (!rtx_equal_p (x8, operands[2])
              || !
#line 26237 "../../gcc/config/i386/sse.md"
(TARGET_XOP))
            return NULL;
          return gen_split_3699 (insn, operands);

        case E_V32HImode:
          if (pattern1188 (x2, 
E_V32HImode) != 0
              || !((
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
          return gen_split_2386 (insn, operands);

        case E_V16HImode:
          if (pattern1003 (x2, 
E_V16HImode) != 0)
            return NULL;
          if (regmem_or_bitnot_regmem_operand (operands[1], E_V16HImode)
              && regmem_or_bitnot_regmem_operand (operands[2], E_V16HImode)
              && regmem_or_bitnot_regmem_operand (operands[3], E_V16HImode))
            {
              x8 = XEXP (x2, 1);
              operands[4] = x8;
              if (regmem_or_bitnot_regmem_operand (operands[4], E_V16HImode)
                  && ((
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
                return gen_split_2413 (insn, operands);
            }
          if (!register_operand (operands[1], E_V16HImode)
              || !register_operand (operands[2], E_V16HImode)
              || !nonimmediate_operand (operands[3], E_V16HImode))
            return NULL;
          x8 = XEXP (x2, 1);
          if (rtx_equal_p (x8, operands[1])
              && 
#line 26225 "../../gcc/config/i386/sse.md"
(TARGET_XOP))
            return gen_split_3684 (insn, operands);
          if (!rtx_equal_p (x8, operands[2])
              || !
#line 26237 "../../gcc/config/i386/sse.md"
(TARGET_XOP))
            return NULL;
          return gen_split_3700 (insn, operands);

        case E_V8HImode:
          if (pattern1003 (x2, 
E_V8HImode) != 0)
            return NULL;
          if (regmem_or_bitnot_regmem_operand (operands[1], E_V8HImode)
              && regmem_or_bitnot_regmem_operand (operands[2], E_V8HImode)
              && regmem_or_bitnot_regmem_operand (operands[3], E_V8HImode))
            {
              x8 = XEXP (x2, 1);
              operands[4] = x8;
              if (regmem_or_bitnot_regmem_operand (operands[4], E_V8HImode)
                  && (
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
                return gen_split_2440 (insn, operands);
            }
          if (!register_operand (operands[1], E_V8HImode)
              || !register_operand (operands[2], E_V8HImode)
              || !nonimmediate_operand (operands[3], E_V8HImode))
            return NULL;
          x8 = XEXP (x2, 1);
          if (rtx_equal_p (x8, operands[1])
              && 
#line 26225 "../../gcc/config/i386/sse.md"
(TARGET_XOP))
            return gen_split_3685 (insn, operands);
          if (!rtx_equal_p (x8, operands[2])
              || !
#line 26237 "../../gcc/config/i386/sse.md"
(TARGET_XOP))
            return NULL;
          return gen_split_3701 (insn, operands);

        case E_V16SImode:
          if (pattern1188 (x2, 
E_V16SImode) != 0
              || !((
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
          return gen_split_2467 (insn, operands);

        case E_V8SImode:
          if (pattern1003 (x2, 
E_V8SImode) != 0)
            return NULL;
          if (regmem_or_bitnot_regmem_operand (operands[1], E_V8SImode)
              && regmem_or_bitnot_regmem_operand (operands[2], E_V8SImode)
              && regmem_or_bitnot_regmem_operand (operands[3], E_V8SImode))
            {
              x8 = XEXP (x2, 1);
              operands[4] = x8;
              if (regmem_or_bitnot_regmem_operand (operands[4], E_V8SImode)
                  && ((
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
                return gen_split_2494 (insn, operands);
            }
          if (!register_operand (operands[1], E_V8SImode)
              || !register_operand (operands[2], E_V8SImode)
              || !nonimmediate_operand (operands[3], E_V8SImode))
            return NULL;
          x8 = XEXP (x2, 1);
          if (rtx_equal_p (x8, operands[1])
              && 
#line 26225 "../../gcc/config/i386/sse.md"
(TARGET_XOP))
            return gen_split_3686 (insn, operands);
          if (!rtx_equal_p (x8, operands[2])
              || !
#line 26237 "../../gcc/config/i386/sse.md"
(TARGET_XOP))
            return NULL;
          return gen_split_3702 (insn, operands);

        case E_V4SImode:
          if (pattern1003 (x2, 
E_V4SImode) != 0)
            return NULL;
          if (regmem_or_bitnot_regmem_operand (operands[1], E_V4SImode)
              && regmem_or_bitnot_regmem_operand (operands[2], E_V4SImode)
              && regmem_or_bitnot_regmem_operand (operands[3], E_V4SImode))
            {
              x8 = XEXP (x2, 1);
              operands[4] = x8;
              if (regmem_or_bitnot_regmem_operand (operands[4], E_V4SImode)
                  && (
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
                return gen_split_2521 (insn, operands);
            }
          if (!register_operand (operands[1], E_V4SImode)
              || !register_operand (operands[2], E_V4SImode)
              || !nonimmediate_operand (operands[3], E_V4SImode))
            return NULL;
          x8 = XEXP (x2, 1);
          if (rtx_equal_p (x8, operands[1])
              && 
#line 26225 "../../gcc/config/i386/sse.md"
(TARGET_XOP))
            return gen_split_3687 (insn, operands);
          if (!rtx_equal_p (x8, operands[2])
              || !
#line 26237 "../../gcc/config/i386/sse.md"
(TARGET_XOP))
            return NULL;
          return gen_split_3703 (insn, operands);

        case E_V8DImode:
          if (pattern1188 (x2, 
E_V8DImode) != 0
              || !((
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
          return gen_split_2548 (insn, operands);

        case E_V4DImode:
          if (pattern1003 (x2, 
E_V4DImode) != 0)
            return NULL;
          if (regmem_or_bitnot_regmem_operand (operands[1], E_V4DImode)
              && regmem_or_bitnot_regmem_operand (operands[2], E_V4DImode)
              && regmem_or_bitnot_regmem_operand (operands[3], E_V4DImode))
            {
              x8 = XEXP (x2, 1);
              operands[4] = x8;
              if (regmem_or_bitnot_regmem_operand (operands[4], E_V4DImode)
                  && ((
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
                return gen_split_2575 (insn, operands);
            }
          if (!register_operand (operands[1], E_V4DImode)
              || !register_operand (operands[2], E_V4DImode)
              || !nonimmediate_operand (operands[3], E_V4DImode))
            return NULL;
          x8 = XEXP (x2, 1);
          if (rtx_equal_p (x8, operands[1])
              && 
#line 26225 "../../gcc/config/i386/sse.md"
(TARGET_XOP))
            return gen_split_3688 (insn, operands);
          if (!rtx_equal_p (x8, operands[2])
              || !
#line 26237 "../../gcc/config/i386/sse.md"
(TARGET_XOP))
            return NULL;
          return gen_split_3704 (insn, operands);

        case E_V2DImode:
          if (pattern1003 (x2, 
E_V2DImode) != 0)
            return NULL;
          if (regmem_or_bitnot_regmem_operand (operands[1], E_V2DImode)
              && regmem_or_bitnot_regmem_operand (operands[2], E_V2DImode)
              && regmem_or_bitnot_regmem_operand (operands[3], E_V2DImode))
            {
              x8 = XEXP (x2, 1);
              operands[4] = x8;
              if (regmem_or_bitnot_regmem_operand (operands[4], E_V2DImode)
                  && (
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
                return gen_split_2602 (insn, operands);
            }
          if (!register_operand (operands[1], E_V2DImode)
              || !register_operand (operands[2], E_V2DImode)
              || !nonimmediate_operand (operands[3], E_V2DImode))
            return NULL;
          x8 = XEXP (x2, 1);
          if (rtx_equal_p (x8, operands[1])
              && 
#line 26225 "../../gcc/config/i386/sse.md"
(TARGET_XOP))
            return gen_split_3689 (insn, operands);
          if (!rtx_equal_p (x8, operands[2])
              || !
#line 26237 "../../gcc/config/i386/sse.md"
(TARGET_XOP))
            return NULL;
          return gen_split_3705 (insn, operands);

        case E_V2TImode:
          if (pattern1189 (x2, 
E_V2TImode) != 0)
            return NULL;
          x8 = XEXP (x2, 1);
          if (rtx_equal_p (x8, operands[1])
              && 
#line 26225 "../../gcc/config/i386/sse.md"
(TARGET_XOP))
            return gen_split_3690 (insn, operands);
          if (!rtx_equal_p (x8, operands[2])
              || !
#line 26237 "../../gcc/config/i386/sse.md"
(TARGET_XOP))
            return NULL;
          return gen_split_3706 (insn, operands);

        case E_V1TImode:
          if (pattern1189 (x2, 
E_V1TImode) != 0)
            return NULL;
          x8 = XEXP (x2, 1);
          if (rtx_equal_p (x8, operands[1])
              && 
#line 26225 "../../gcc/config/i386/sse.md"
(TARGET_XOP))
            return gen_split_3691 (insn, operands);
          if (!rtx_equal_p (x8, operands[2])
              || !
#line 26237 "../../gcc/config/i386/sse.md"
(TARGET_XOP))
            return NULL;
          return gen_split_3707 (insn, operands);

        default:
          return NULL;
        }

    default:
      return NULL;
    }
}

 rtx_insn *
split_81 (rtx x1 ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx_insn *res ATTRIBUTE_UNUSED;
  switch (GET_MODE (operands[0]))
    {
    case E_V64QImode:
      if (!register_operand (operands[0], E_V64QImode))
        return NULL;
      if (int_float_vector_all_ones_operand (operands[1], E_V64QImode)
          && (
#line 1559 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && reload_completed
  && (64 == 64 || EXT_REX_SSE_REG_P (operands[0]))
  && optimize_insn_for_speed_p ()) && 
#line 283 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
        return gen_split_1119 (insn, operands);
      if (!ternlog_operand (operands[1], E_V64QImode)
          || !((
#line 13747 "../../gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 332 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)) && 
#line 13751 "../../gcc/config/i386/sse.md"
( 1)))
        return NULL;
      return gen_split_1625 (insn, operands);

    case E_V32QImode:
      if (!register_operand (operands[0], E_V32QImode))
        return NULL;
      if (int_float_vector_all_ones_operand (operands[1], E_V32QImode)
          && (
#line 1559 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && reload_completed
  && (32 == 64 || EXT_REX_SSE_REG_P (operands[0]))
  && optimize_insn_for_speed_p ()) && 
#line 283 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
        return gen_split_1120 (insn, operands);
      if (!ternlog_operand (operands[1], E_V32QImode)
          || !((
#line 13747 "../../gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 332 "../../gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 13751 "../../gcc/config/i386/sse.md"
( 1)))
        return NULL;
      return gen_split_1626 (insn, operands);

    case E_V16QImode:
      if (!register_operand (operands[0], E_V16QImode))
        return NULL;
      if (int_float_vector_all_ones_operand (operands[1], E_V16QImode)
          && 
#line 1559 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && reload_completed
  && (16 == 64 || EXT_REX_SSE_REG_P (operands[0]))
  && optimize_insn_for_speed_p ()))
        return gen_split_1121 (insn, operands);
      if (!ternlog_operand (operands[1], E_V16QImode)
          || !(
#line 13747 "../../gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 13751 "../../gcc/config/i386/sse.md"
( 1)))
        return NULL;
      return gen_split_1627 (insn, operands);

    case E_V32HImode:
      if (!register_operand (operands[0], E_V32HImode))
        return NULL;
      if (int_float_vector_all_ones_operand (operands[1], E_V32HImode)
          && (
#line 1559 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && reload_completed
  && (64 == 64 || EXT_REX_SSE_REG_P (operands[0]))
  && optimize_insn_for_speed_p ()) && 
#line 284 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
        return gen_split_1122 (insn, operands);
      if (!ternlog_operand (operands[1], E_V32HImode)
          || !((
#line 13747 "../../gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 333 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)) && 
#line 13751 "../../gcc/config/i386/sse.md"
( 1)))
        return NULL;
      return gen_split_1628 (insn, operands);

    case E_V16HImode:
      if (!register_operand (operands[0], E_V16HImode))
        return NULL;
      if (int_float_vector_all_ones_operand (operands[1], E_V16HImode)
          && (
#line 1559 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && reload_completed
  && (32 == 64 || EXT_REX_SSE_REG_P (operands[0]))
  && optimize_insn_for_speed_p ()) && 
#line 284 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
        return gen_split_1123 (insn, operands);
      if (!ternlog_operand (operands[1], E_V16HImode)
          || !((
#line 13747 "../../gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 333 "../../gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 13751 "../../gcc/config/i386/sse.md"
( 1)))
        return NULL;
      return gen_split_1629 (insn, operands);

    case E_V8HImode:
      if (!register_operand (operands[0], E_V8HImode))
        return NULL;
      if (int_float_vector_all_ones_operand (operands[1], E_V8HImode)
          && 
#line 1559 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && reload_completed
  && (16 == 64 || EXT_REX_SSE_REG_P (operands[0]))
  && optimize_insn_for_speed_p ()))
        return gen_split_1124 (insn, operands);
      if (!ternlog_operand (operands[1], E_V8HImode)
          || !(
#line 13747 "../../gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 13751 "../../gcc/config/i386/sse.md"
( 1)))
        return NULL;
      return gen_split_1630 (insn, operands);

    case E_V16SImode:
      if (!register_operand (operands[0], E_V16SImode))
        return NULL;
      if (int_float_vector_all_ones_operand (operands[1], E_V16SImode)
          && (
#line 1559 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && reload_completed
  && (64 == 64 || EXT_REX_SSE_REG_P (operands[0]))
  && optimize_insn_for_speed_p ()) && 
#line 285 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
        return gen_split_1125 (insn, operands);
      if (!ternlog_operand (operands[1], E_V16SImode)
          || !((
#line 13747 "../../gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 334 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)) && 
#line 13751 "../../gcc/config/i386/sse.md"
( 1)))
        return NULL;
      return gen_split_1631 (insn, operands);

    case E_V8SImode:
      if (!register_operand (operands[0], E_V8SImode))
        return NULL;
      if (int_float_vector_all_ones_operand (operands[1], E_V8SImode)
          && (
#line 1559 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && reload_completed
  && (32 == 64 || EXT_REX_SSE_REG_P (operands[0]))
  && optimize_insn_for_speed_p ()) && 
#line 285 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
        return gen_split_1126 (insn, operands);
      if (!ternlog_operand (operands[1], E_V8SImode)
          || !((
#line 13747 "../../gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 334 "../../gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 13751 "../../gcc/config/i386/sse.md"
( 1)))
        return NULL;
      return gen_split_1632 (insn, operands);

    case E_V4SImode:
      if (!register_operand (operands[0], E_V4SImode))
        return NULL;
      if (int_float_vector_all_ones_operand (operands[1], E_V4SImode)
          && 
#line 1559 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && reload_completed
  && (16 == 64 || EXT_REX_SSE_REG_P (operands[0]))
  && optimize_insn_for_speed_p ()))
        return gen_split_1127 (insn, operands);
      if (!ternlog_operand (operands[1], E_V4SImode)
          || !(
#line 13747 "../../gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 13751 "../../gcc/config/i386/sse.md"
( 1)))
        return NULL;
      return gen_split_1633 (insn, operands);

    case E_V8DImode:
      if (!register_operand (operands[0], E_V8DImode))
        return NULL;
      if (int_float_vector_all_ones_operand (operands[1], E_V8DImode)
          && (
#line 1559 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && reload_completed
  && (64 == 64 || EXT_REX_SSE_REG_P (operands[0]))
  && optimize_insn_for_speed_p ()) && 
#line 286 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
        return gen_split_1128 (insn, operands);
      if (!ternlog_operand (operands[1], E_V8DImode)
          || !((
#line 13747 "../../gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 335 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)) && 
#line 13751 "../../gcc/config/i386/sse.md"
( 1)))
        return NULL;
      return gen_split_1634 (insn, operands);

    case E_V4DImode:
      if (!register_operand (operands[0], E_V4DImode))
        return NULL;
      if (int_float_vector_all_ones_operand (operands[1], E_V4DImode)
          && (
#line 1559 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && reload_completed
  && (32 == 64 || EXT_REX_SSE_REG_P (operands[0]))
  && optimize_insn_for_speed_p ()) && 
#line 286 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
        return gen_split_1129 (insn, operands);
      if (!ternlog_operand (operands[1], E_V4DImode)
          || !((
#line 13747 "../../gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 335 "../../gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 13751 "../../gcc/config/i386/sse.md"
( 1)))
        return NULL;
      return gen_split_1635 (insn, operands);

    case E_V2DImode:
      if (!register_operand (operands[0], E_V2DImode))
        return NULL;
      if (int_float_vector_all_ones_operand (operands[1], E_V2DImode)
          && 
#line 1559 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && reload_completed
  && (16 == 64 || EXT_REX_SSE_REG_P (operands[0]))
  && optimize_insn_for_speed_p ()))
        return gen_split_1130 (insn, operands);
      if (!ternlog_operand (operands[1], E_V2DImode)
          || !(
#line 13747 "../../gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 13751 "../../gcc/config/i386/sse.md"
( 1)))
        return NULL;
      return gen_split_1636 (insn, operands);

    case E_V4TImode:
      if (!register_operand (operands[0], E_V4TImode)
          || !int_float_vector_all_ones_operand (operands[1], E_V4TImode)
          || !(
#line 1559 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && reload_completed
  && (64 == 64 || EXT_REX_SSE_REG_P (operands[0]))
  && optimize_insn_for_speed_p ()) && 
#line 287 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
        return NULL;
      return gen_split_1131 (insn, operands);

    case E_V2TImode:
      if (!register_operand (operands[0], E_V2TImode)
          || !int_float_vector_all_ones_operand (operands[1], E_V2TImode)
          || !(
#line 1559 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && reload_completed
  && (32 == 64 || EXT_REX_SSE_REG_P (operands[0]))
  && optimize_insn_for_speed_p ()) && 
#line 287 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
        return NULL;
      return gen_split_1132 (insn, operands);

    case E_V1TImode:
      if (!register_operand (operands[0], E_V1TImode)
          || !int_float_vector_all_ones_operand (operands[1], E_V1TImode)
          || !
#line 1559 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && reload_completed
  && (16 == 64 || EXT_REX_SSE_REG_P (operands[0]))
  && optimize_insn_for_speed_p ()))
        return NULL;
      return gen_split_1133 (insn, operands);

    case E_V32HFmode:
      if (!register_operand (operands[0], E_V32HFmode)
          || !int_float_vector_all_ones_operand (operands[1], E_V32HFmode)
          || !(
#line 1559 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && reload_completed
  && (64 == 64 || EXT_REX_SSE_REG_P (operands[0]))
  && optimize_insn_for_speed_p ()) && 
#line 288 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
        return NULL;
      return gen_split_1134 (insn, operands);

    case E_V16HFmode:
      if (!register_operand (operands[0], E_V16HFmode)
          || !int_float_vector_all_ones_operand (operands[1], E_V16HFmode)
          || !(
#line 1559 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && reload_completed
  && (32 == 64 || EXT_REX_SSE_REG_P (operands[0]))
  && optimize_insn_for_speed_p ()) && 
#line 288 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
        return NULL;
      return gen_split_1135 (insn, operands);

    case E_V8HFmode:
      if (!register_operand (operands[0], E_V8HFmode)
          || !int_float_vector_all_ones_operand (operands[1], E_V8HFmode)
          || !
#line 1559 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && reload_completed
  && (16 == 64 || EXT_REX_SSE_REG_P (operands[0]))
  && optimize_insn_for_speed_p ()))
        return NULL;
      return gen_split_1136 (insn, operands);

    case E_V32BFmode:
      if (!register_operand (operands[0], E_V32BFmode)
          || !int_float_vector_all_ones_operand (operands[1], E_V32BFmode)
          || !(
#line 1559 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && reload_completed
  && (64 == 64 || EXT_REX_SSE_REG_P (operands[0]))
  && optimize_insn_for_speed_p ()) && 
#line 289 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
        return NULL;
      return gen_split_1137 (insn, operands);

    case E_V16BFmode:
      if (!register_operand (operands[0], E_V16BFmode)
          || !int_float_vector_all_ones_operand (operands[1], E_V16BFmode)
          || !(
#line 1559 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && reload_completed
  && (32 == 64 || EXT_REX_SSE_REG_P (operands[0]))
  && optimize_insn_for_speed_p ()) && 
#line 289 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
        return NULL;
      return gen_split_1138 (insn, operands);

    case E_V8BFmode:
      if (!register_operand (operands[0], E_V8BFmode)
          || !int_float_vector_all_ones_operand (operands[1], E_V8BFmode)
          || !
#line 1559 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && reload_completed
  && (16 == 64 || EXT_REX_SSE_REG_P (operands[0]))
  && optimize_insn_for_speed_p ()))
        return NULL;
      return gen_split_1139 (insn, operands);

    case E_V16SFmode:
      if (!register_operand (operands[0], E_V16SFmode)
          || !int_float_vector_all_ones_operand (operands[1], E_V16SFmode)
          || !(
#line 1559 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && reload_completed
  && (64 == 64 || EXT_REX_SSE_REG_P (operands[0]))
  && optimize_insn_for_speed_p ()) && 
#line 290 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
        return NULL;
      return gen_split_1140 (insn, operands);

    case E_V8SFmode:
      if (!register_operand (operands[0], E_V8SFmode)
          || !int_float_vector_all_ones_operand (operands[1], E_V8SFmode)
          || !(
#line 1559 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && reload_completed
  && (32 == 64 || EXT_REX_SSE_REG_P (operands[0]))
  && optimize_insn_for_speed_p ()) && 
#line 290 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
        return NULL;
      return gen_split_1141 (insn, operands);

    case E_V4SFmode:
      if (!register_operand (operands[0], E_V4SFmode))
        return NULL;
      if (int_float_vector_all_ones_operand (operands[1], E_V4SFmode)
          && 
#line 1559 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && reload_completed
  && (16 == 64 || EXT_REX_SSE_REG_P (operands[0]))
  && optimize_insn_for_speed_p ()))
        return gen_split_1142 (insn, operands);
      if (!zero_extended_scalar_load_operand (operands[1], E_V4SFmode)
          || !
#line 1913 "../../gcc/config/i386/sse.md"
(TARGET_SSE && reload_completed))
        return NULL;
      return gen_split_1171 (insn, operands);

    case E_V8DFmode:
      if (!register_operand (operands[0], E_V8DFmode)
          || !int_float_vector_all_ones_operand (operands[1], E_V8DFmode)
          || !(
#line 1559 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && reload_completed
  && (64 == 64 || EXT_REX_SSE_REG_P (operands[0]))
  && optimize_insn_for_speed_p ()) && 
#line 291 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
        return NULL;
      return gen_split_1143 (insn, operands);

    case E_V4DFmode:
      if (!register_operand (operands[0], E_V4DFmode)
          || !int_float_vector_all_ones_operand (operands[1], E_V4DFmode)
          || !(
#line 1559 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && reload_completed
  && (32 == 64 || EXT_REX_SSE_REG_P (operands[0]))
  && optimize_insn_for_speed_p ()) && 
#line 291 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
        return NULL;
      return gen_split_1144 (insn, operands);

    case E_V2DFmode:
      if (!register_operand (operands[0], E_V2DFmode))
        return NULL;
      if (int_float_vector_all_ones_operand (operands[1], E_V2DFmode)
          && 
#line 1559 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && reload_completed
  && (16 == 64 || EXT_REX_SSE_REG_P (operands[0]))
  && optimize_insn_for_speed_p ()))
        return gen_split_1145 (insn, operands);
      if (!zero_extended_scalar_load_operand (operands[1], E_V2DFmode)
          || !
#line 1927 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && reload_completed))
        return NULL;
      return gen_split_1172 (insn, operands);

    default:
      return NULL;
    }
}

 rtx_insn *
split_85 (rtx x1 ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12, x13, x14, x15, x16;
  rtx_insn *res ATTRIBUTE_UNUSED;
  switch (XVECLEN (x1, 0))
    {
    case 2:
      x2 = XVECEXP (x1, 0, 0);
      if (GET_CODE (x2) != SET)
        return NULL;
      x3 = XEXP (x2, 1);
      switch (GET_CODE (x3))
        {
        case UNSPEC:
          x4 = XVECEXP (x1, 0, 1);
          if (GET_CODE (x4) != CLOBBER)
            return NULL;
          x5 = XEXP (x2, 0);
          operands[0] = x5;
          switch (XVECLEN (x3, 0))
            {
            case 1:
              x6 = XVECEXP (x3, 0, 0);
              operands[1] = x6;
              switch (XINT (x3, 1))
                {
                case 74:
                  if (pattern1060 (x1) != 0
                      || !(
#line 25071 "../../gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && (flag_fp_int_builtin_inexact || !flag_trapping_math)
   && ix86_pre_reload_split ()) && 
#line 25075 "../../gcc/config/i386/i386.md"
( 1)))
                    return NULL;
                  return gen_split_917 (insn, operands);

                case 75:
                  if (pattern1060 (x1) != 0
                      || !(
#line 25071 "../../gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && (flag_fp_int_builtin_inexact || !flag_trapping_math)
   && ix86_pre_reload_split ()) && 
#line 25075 "../../gcc/config/i386/i386.md"
( 1)))
                    return NULL;
                  return gen_split_918 (insn, operands);

                case 76:
                  if (pattern1060 (x1) != 0
                      || !(
#line 25071 "../../gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && (flag_fp_int_builtin_inexact || !flag_trapping_math)
   && ix86_pre_reload_split ()) && 
#line 25075 "../../gcc/config/i386/i386.md"
( 1)))
                    return NULL;
                  return gen_split_919 (insn, operands);

                case 77:
                  if (pattern1060 (x1) != 0
                      || !(
#line 25071 "../../gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && (flag_fp_int_builtin_inexact || !flag_trapping_math)
   && ix86_pre_reload_split ()) && 
#line 25075 "../../gcc/config/i386/i386.md"
( 1)))
                    return NULL;
                  return gen_split_920 (insn, operands);

                case 78:
                  switch (pattern1061 (x1))
                    {
                    case 0:
                      if (!(
#line 25188 "../../gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && flag_unsafe_math_optimizations
   && ix86_pre_reload_split ()) && 
#line 25192 "../../gcc/config/i386/i386.md"
( 1)))
                        return NULL;
                      return gen_split_921 (insn, operands);

                    case 1:
                      if (!(
#line 25188 "../../gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && flag_unsafe_math_optimizations
   && ix86_pre_reload_split ()) && 
#line 25192 "../../gcc/config/i386/i386.md"
( 1)))
                        return NULL;
                      return gen_split_923 (insn, operands);

                    case 2:
                      if (!(
#line 25188 "../../gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && flag_unsafe_math_optimizations
   && ix86_pre_reload_split ()) && 
#line 25192 "../../gcc/config/i386/i386.md"
( 1)))
                        return NULL;
                      return gen_split_925 (insn, operands);

                    default:
                      return NULL;
                    }

                case 79:
                  switch (pattern1061 (x1))
                    {
                    case 0:
                      if (!(
#line 25188 "../../gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && flag_unsafe_math_optimizations
   && ix86_pre_reload_split ()) && 
#line 25192 "../../gcc/config/i386/i386.md"
( 1)))
                        return NULL;
                      return gen_split_922 (insn, operands);

                    case 1:
                      if (!(
#line 25188 "../../gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && flag_unsafe_math_optimizations
   && ix86_pre_reload_split ()) && 
#line 25192 "../../gcc/config/i386/i386.md"
( 1)))
                        return NULL;
                      return gen_split_924 (insn, operands);

                    case 2:
                      if (!(
#line 25188 "../../gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && flag_unsafe_math_optimizations
   && ix86_pre_reload_split ()) && 
#line 25192 "../../gcc/config/i386/i386.md"
( 1)))
                        return NULL;
                      return gen_split_926 (insn, operands);

                    default:
                      return NULL;
                    }

                case 118:
                  if (GET_MODE (x3) != E_V4SImode
                      || !register_operand (operands[0], E_V4SImode)
                      || !nonimmediate_operand (operands[1], E_DImode))
                    return NULL;
                  x7 = XEXP (x4, 0);
                  operands[2] = x7;
                  if (!scratch_operand (operands[2], E_V4SImode)
                      || !(
#line 1878 "../../gcc/config/i386/sse.md"
(!TARGET_64BIT && TARGET_SSE2 && TARGET_INTER_UNIT_MOVES_TO_VEC) && 
#line 1880 "../../gcc/config/i386/sse.md"
( reload_completed)))
                    return NULL;
                  return gen_split_1170 (insn, operands);

                default:
                  return NULL;
                }

            case 3:
              if (XINT (x3, 1) != 52
                  || GET_MODE (x3) != E_V8QImode
                  || pattern936 (x1) != 0
                  || !
#line 23155 "../../gcc/config/i386/sse.md"
(TARGET_SSSE3 && reload_completed
   && SSE_REGNO_P (REGNO (operands[0]))))
                return NULL;
              return gen_split_3461 (insn, operands);

            default:
              return NULL;
            }

        case SMAX:
          switch (pattern212 (x1))
            {
            case 0:
              if (((
#line 26759 "../../gcc/config/i386/i386.md"
(TARGET_CMOVE
   && ix86_pre_reload_split ()) && 
#line 1235 "../../gcc/config/i386/i386.md"
(!TARGET_64BIT)) && 
#line 26762 "../../gcc/config/i386/i386.md"
( 1)))
                return gen_split_949 (insn, operands);
              if (!((
#line 26817 "../../gcc/config/i386/i386.md"
(TARGET_CMOVE
   && (DImode != QImode || !TARGET_PARTIAL_REG_STALL)
   && ix86_pre_reload_split ()) && 
#line 1161 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 26821 "../../gcc/config/i386/i386.md"
( 1)))
                return NULL;
              return gen_split_969 (insn, operands);

            case 1:
              if (!((
#line 26759 "../../gcc/config/i386/i386.md"
(TARGET_CMOVE
   && ix86_pre_reload_split ()) && 
#line 1236 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 26762 "../../gcc/config/i386/i386.md"
( 1)))
                return NULL;
              return gen_split_953 (insn, operands);

            case 2:
              if (!(
#line 26817 "../../gcc/config/i386/i386.md"
(TARGET_CMOVE
   && (QImode != QImode || !TARGET_PARTIAL_REG_STALL)
   && ix86_pre_reload_split ()) && 
#line 26821 "../../gcc/config/i386/i386.md"
( 1)))
                return NULL;
              return gen_split_957 (insn, operands);

            case 3:
              if (!(
#line 26817 "../../gcc/config/i386/i386.md"
(TARGET_CMOVE
   && (HImode != QImode || !TARGET_PARTIAL_REG_STALL)
   && ix86_pre_reload_split ()) && 
#line 26821 "../../gcc/config/i386/i386.md"
( 1)))
                return NULL;
              return gen_split_961 (insn, operands);

            case 4:
              if (!(
#line 26817 "../../gcc/config/i386/i386.md"
(TARGET_CMOVE
   && (SImode != QImode || !TARGET_PARTIAL_REG_STALL)
   && ix86_pre_reload_split ()) && 
#line 26821 "../../gcc/config/i386/i386.md"
( 1)))
                return NULL;
              return gen_split_965 (insn, operands);

            default:
              return NULL;
            }

        case SMIN:
          switch (pattern212 (x1))
            {
            case 0:
              if (((
#line 26759 "../../gcc/config/i386/i386.md"
(TARGET_CMOVE
   && ix86_pre_reload_split ()) && 
#line 1235 "../../gcc/config/i386/i386.md"
(!TARGET_64BIT)) && 
#line 26762 "../../gcc/config/i386/i386.md"
( 1)))
                return gen_split_950 (insn, operands);
              if (!((
#line 26817 "../../gcc/config/i386/i386.md"
(TARGET_CMOVE
   && (DImode != QImode || !TARGET_PARTIAL_REG_STALL)
   && ix86_pre_reload_split ()) && 
#line 1161 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 26821 "../../gcc/config/i386/i386.md"
( 1)))
                return NULL;
              return gen_split_970 (insn, operands);

            case 1:
              if (!((
#line 26759 "../../gcc/config/i386/i386.md"
(TARGET_CMOVE
   && ix86_pre_reload_split ()) && 
#line 1236 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 26762 "../../gcc/config/i386/i386.md"
( 1)))
                return NULL;
              return gen_split_954 (insn, operands);

            case 2:
              if (!(
#line 26817 "../../gcc/config/i386/i386.md"
(TARGET_CMOVE
   && (QImode != QImode || !TARGET_PARTIAL_REG_STALL)
   && ix86_pre_reload_split ()) && 
#line 26821 "../../gcc/config/i386/i386.md"
( 1)))
                return NULL;
              return gen_split_958 (insn, operands);

            case 3:
              if (!(
#line 26817 "../../gcc/config/i386/i386.md"
(TARGET_CMOVE
   && (HImode != QImode || !TARGET_PARTIAL_REG_STALL)
   && ix86_pre_reload_split ()) && 
#line 26821 "../../gcc/config/i386/i386.md"
( 1)))
                return NULL;
              return gen_split_962 (insn, operands);

            case 4:
              if (!(
#line 26817 "../../gcc/config/i386/i386.md"
(TARGET_CMOVE
   && (SImode != QImode || !TARGET_PARTIAL_REG_STALL)
   && ix86_pre_reload_split ()) && 
#line 26821 "../../gcc/config/i386/i386.md"
( 1)))
                return NULL;
              return gen_split_966 (insn, operands);

            default:
              return NULL;
            }

        case UMAX:
          switch (pattern212 (x1))
            {
            case 0:
              if (((
#line 26759 "../../gcc/config/i386/i386.md"
(TARGET_CMOVE
   && ix86_pre_reload_split ()) && 
#line 1235 "../../gcc/config/i386/i386.md"
(!TARGET_64BIT)) && 
#line 26762 "../../gcc/config/i386/i386.md"
( 1)))
                return gen_split_951 (insn, operands);
              if (!((
#line 26817 "../../gcc/config/i386/i386.md"
(TARGET_CMOVE
   && (DImode != QImode || !TARGET_PARTIAL_REG_STALL)
   && ix86_pre_reload_split ()) && 
#line 1161 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 26821 "../../gcc/config/i386/i386.md"
( 1)))
                return NULL;
              return gen_split_971 (insn, operands);

            case 1:
              if (!((
#line 26759 "../../gcc/config/i386/i386.md"
(TARGET_CMOVE
   && ix86_pre_reload_split ()) && 
#line 1236 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 26762 "../../gcc/config/i386/i386.md"
( 1)))
                return NULL;
              return gen_split_955 (insn, operands);

            case 2:
              if (!(
#line 26817 "../../gcc/config/i386/i386.md"
(TARGET_CMOVE
   && (QImode != QImode || !TARGET_PARTIAL_REG_STALL)
   && ix86_pre_reload_split ()) && 
#line 26821 "../../gcc/config/i386/i386.md"
( 1)))
                return NULL;
              return gen_split_959 (insn, operands);

            case 3:
              if (!(
#line 26817 "../../gcc/config/i386/i386.md"
(TARGET_CMOVE
   && (HImode != QImode || !TARGET_PARTIAL_REG_STALL)
   && ix86_pre_reload_split ()) && 
#line 26821 "../../gcc/config/i386/i386.md"
( 1)))
                return NULL;
              return gen_split_963 (insn, operands);

            case 4:
              if (!(
#line 26817 "../../gcc/config/i386/i386.md"
(TARGET_CMOVE
   && (SImode != QImode || !TARGET_PARTIAL_REG_STALL)
   && ix86_pre_reload_split ()) && 
#line 26821 "../../gcc/config/i386/i386.md"
( 1)))
                return NULL;
              return gen_split_967 (insn, operands);

            default:
              return NULL;
            }

        case UMIN:
          switch (pattern212 (x1))
            {
            case 0:
              if (((
#line 26759 "../../gcc/config/i386/i386.md"
(TARGET_CMOVE
   && ix86_pre_reload_split ()) && 
#line 1235 "../../gcc/config/i386/i386.md"
(!TARGET_64BIT)) && 
#line 26762 "../../gcc/config/i386/i386.md"
( 1)))
                return gen_split_952 (insn, operands);
              if (!((
#line 26817 "../../gcc/config/i386/i386.md"
(TARGET_CMOVE
   && (DImode != QImode || !TARGET_PARTIAL_REG_STALL)
   && ix86_pre_reload_split ()) && 
#line 1161 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 26821 "../../gcc/config/i386/i386.md"
( 1)))
                return NULL;
              return gen_split_972 (insn, operands);

            case 1:
              if (!((
#line 26759 "../../gcc/config/i386/i386.md"
(TARGET_CMOVE
   && ix86_pre_reload_split ()) && 
#line 1236 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 26762 "../../gcc/config/i386/i386.md"
( 1)))
                return NULL;
              return gen_split_956 (insn, operands);

            case 2:
              if (!(
#line 26817 "../../gcc/config/i386/i386.md"
(TARGET_CMOVE
   && (QImode != QImode || !TARGET_PARTIAL_REG_STALL)
   && ix86_pre_reload_split ()) && 
#line 26821 "../../gcc/config/i386/i386.md"
( 1)))
                return NULL;
              return gen_split_960 (insn, operands);

            case 3:
              if (!(
#line 26817 "../../gcc/config/i386/i386.md"
(TARGET_CMOVE
   && (HImode != QImode || !TARGET_PARTIAL_REG_STALL)
   && ix86_pre_reload_split ()) && 
#line 26821 "../../gcc/config/i386/i386.md"
( 1)))
                return NULL;
              return gen_split_964 (insn, operands);

            case 4:
              if (!(
#line 26817 "../../gcc/config/i386/i386.md"
(TARGET_CMOVE
   && (SImode != QImode || !TARGET_PARTIAL_REG_STALL)
   && ix86_pre_reload_split ()) && 
#line 26821 "../../gcc/config/i386/i386.md"
( 1)))
                return NULL;
              return gen_split_968 (insn, operands);

            default:
              return NULL;
            }

        case PLUS:
        case MINUS:
        case MULT:
        case AND:
        case IOR:
        case XOR:
        case ASHIFT:
          return split_36 (x1, insn);

        case COMPARE:
          operands[2] = x3;
          if (!compare_operator (operands[2], E_VOIDmode))
            return NULL;
          x8 = XEXP (x3, 0);
          if (GET_CODE (x8) != AND)
            return NULL;
          x9 = XEXP (x3, 1);
          if (x9 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
            return NULL;
          x4 = XVECEXP (x1, 0, 1);
          if (GET_CODE (x4) != SET)
            return NULL;
          x10 = XEXP (x4, 1);
          if (GET_CODE (x10) != AND)
            return NULL;
          x5 = XEXP (x2, 0);
          operands[0] = x5;
          if (!flags_reg_operand (operands[0], E_VOIDmode))
            return NULL;
          x11 = XEXP (x8, 0);
          operands[3] = x11;
          if (!aligned_operand (operands[3], E_VOIDmode))
            return NULL;
          x12 = XEXP (x8, 1);
          operands[4] = x12;
          if (!const_int_operand (operands[4], E_VOIDmode))
            return NULL;
          x7 = XEXP (x4, 0);
          operands[1] = x7;
          if (!register_operand (operands[1], E_VOIDmode))
            return NULL;
          x13 = XEXP (x10, 0);
          if (!rtx_equal_p (x13, operands[3]))
            return NULL;
          x14 = XEXP (x10, 1);
          if (!rtx_equal_p (x14, operands[4])
              || !
#line 27541 "../../gcc/config/i386/i386.md"
(! TARGET_PARTIAL_REG_STALL && reload_completed
   && optimize_insn_for_speed_p ()
   && ((GET_MODE (operands[1]) == HImode && ! TARGET_FAST_PREFIX)
       || (GET_MODE (operands[1]) == QImode && TARGET_PROMOTE_QImode))
   /* Ensure that the operand will remain sign-extended immediate.  */
   && ix86_match_ccmode (insn, INTVAL (operands[4]) >= 0 ? CCNOmode : CCZmode)))
            return NULL;
          return gen_split_974 (insn, operands);

        case NEG:
          return split_38 (x1, insn);

        case ABS:
          x4 = XVECEXP (x1, 0, 1);
          if (GET_CODE (x4) != USE)
            return NULL;
          x5 = XEXP (x2, 0);
          operands[0] = x5;
          x8 = XEXP (x3, 0);
          operands[1] = x8;
          switch (pattern834 (x1))
            {
            case 0:
              if (!(
#line 683 "../../gcc/config/i386/mmx.md"
(TARGET_MMX_WITH_SSE) && 
#line 685 "../../gcc/config/i386/mmx.md"
( reload_completed)))
                return NULL;
              return gen_split_1015 (insn, operands);

            case 1:
              if (!(
#line 2239 "../../gcc/config/i386/mmx.md"
(TARGET_SSE) && 
#line 2241 "../../gcc/config/i386/mmx.md"
( reload_completed)))
                return NULL;
              return gen_split_1024 (insn, operands);

            case 2:
              if (!((
#line 2239 "../../gcc/config/i386/mmx.md"
(TARGET_SSE) && 
#line 2224 "../../gcc/config/i386/mmx.md"
(TARGET_MMX_WITH_SSE)) && 
#line 2241 "../../gcc/config/i386/mmx.md"
( reload_completed)))
                return NULL;
              return gen_split_1026 (insn, operands);

            case 3:
              if (!(
#line 2239 "../../gcc/config/i386/mmx.md"
(TARGET_SSE) && 
#line 2241 "../../gcc/config/i386/mmx.md"
( reload_completed)))
                return NULL;
              return gen_split_1028 (insn, operands);

            case 4:
              if (!((
#line 2239 "../../gcc/config/i386/mmx.md"
(TARGET_SSE) && 
#line 2225 "../../gcc/config/i386/mmx.md"
(TARGET_MMX_WITH_SSE)) && 
#line 2241 "../../gcc/config/i386/mmx.md"
( reload_completed)))
                return NULL;
              return gen_split_1030 (insn, operands);

            case 5:
              if (!((
#line 2586 "../../gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 412 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)) && 
#line 2588 "../../gcc/config/i386/sse.md"
( reload_completed)))
                return NULL;
              return gen_split_1247 (insn, operands);

            case 6:
              if (!((
#line 2586 "../../gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 413 "../../gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 2588 "../../gcc/config/i386/sse.md"
( reload_completed)))
                return NULL;
              return gen_split_1249 (insn, operands);

            case 7:
              if (!((
#line 2586 "../../gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 413 "../../gcc/config/i386/sse.md"
(TARGET_SSE2)) && 
#line 2588 "../../gcc/config/i386/sse.md"
( reload_completed)))
                return NULL;
              return gen_split_1251 (insn, operands);

            case 8:
              if (!((
#line 2586 "../../gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 414 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)) && 
#line 2588 "../../gcc/config/i386/sse.md"
( reload_completed)))
                return NULL;
              return gen_split_1253 (insn, operands);

            case 9:
              if (!((
#line 2586 "../../gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 415 "../../gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 2588 "../../gcc/config/i386/sse.md"
( reload_completed)))
                return NULL;
              return gen_split_1255 (insn, operands);

            case 10:
              if (!((
#line 2586 "../../gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 415 "../../gcc/config/i386/sse.md"
(TARGET_SSE2)) && 
#line 2588 "../../gcc/config/i386/sse.md"
( reload_completed)))
                return NULL;
              return gen_split_1257 (insn, operands);

            case 11:
              if (!((
#line 2586 "../../gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 416 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)) && 
#line 2588 "../../gcc/config/i386/sse.md"
( reload_completed)))
                return NULL;
              return gen_split_1259 (insn, operands);

            case 12:
              if (!((
#line 2586 "../../gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 416 "../../gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 2588 "../../gcc/config/i386/sse.md"
( reload_completed)))
                return NULL;
              return gen_split_1261 (insn, operands);

            case 13:
              if (!(
#line 2586 "../../gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 2588 "../../gcc/config/i386/sse.md"
( reload_completed)))
                return NULL;
              return gen_split_1263 (insn, operands);

            case 14:
              if (!((
#line 2586 "../../gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 417 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)) && 
#line 2588 "../../gcc/config/i386/sse.md"
( reload_completed)))
                return NULL;
              return gen_split_1265 (insn, operands);

            case 15:
              if (!((
#line 2586 "../../gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 418 "../../gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 2588 "../../gcc/config/i386/sse.md"
( reload_completed)))
                return NULL;
              return gen_split_1267 (insn, operands);

            case 16:
              if (!((
#line 2586 "../../gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 418 "../../gcc/config/i386/sse.md"
(TARGET_SSE2)) && 
#line 2588 "../../gcc/config/i386/sse.md"
( reload_completed)))
                return NULL;
              return gen_split_1269 (insn, operands);

            default:
              return NULL;
            }

        case LSHIFTRT:
          x4 = XVECEXP (x1, 0, 1);
          if (pattern406 (x4) != 0)
            return NULL;
          x5 = XEXP (x2, 0);
          operands[0] = x5;
          x8 = XEXP (x3, 0);
          operands[1] = x8;
          x9 = XEXP (x3, 1);
          operands[2] = x9;
          switch (GET_MODE (operands[0]))
            {
            case E_V2QImode:
              if (pattern1250 (x3, 
E_V2QImode) != 0
                  || !
#line 4009 "../../gcc/config/i386/mmx.md"
((!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun))
   && reload_completed))
                return NULL;
              return gen_split_1050 (insn, operands);

            case E_QImode:
              if (pattern1340 (x3, 
E_QImode) != 0
                  || !
#line 2293 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && reload_completed))
                return NULL;
              return gen_split_1215 (insn, operands);

            case E_HImode:
              if (pattern1340 (x3, 
E_HImode) != 0
                  || !
#line 2293 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && reload_completed))
                return NULL;
              return gen_split_1217 (insn, operands);

            case E_SImode:
              if (pattern1340 (x3, 
E_SImode) != 0
                  || !(
#line 2293 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && reload_completed) && 
#line 2075 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW)))
                return NULL;
              return gen_split_1219 (insn, operands);

            case E_DImode:
              if (pattern1340 (x3, 
E_DImode) != 0
                  || !(
#line 2293 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && reload_completed) && 
#line 2075 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW)))
                return NULL;
              return gen_split_1221 (insn, operands);

            default:
              return NULL;
            }

        case ASHIFTRT:
          if (GET_MODE (x3) != E_V2QImode)
            return NULL;
          x4 = XVECEXP (x1, 0, 1);
          if (pattern351 (x4) != 0)
            return NULL;
          x5 = XEXP (x2, 0);
          operands[0] = x5;
          if (!register_operand (operands[0], E_V2QImode))
            return NULL;
          x8 = XEXP (x3, 0);
          operands[1] = x8;
          if (!register_operand (operands[1], E_V2QImode))
            return NULL;
          x9 = XEXP (x3, 1);
          operands[2] = x9;
          if (!nonmemory_operand (operands[2], E_QImode)
              || !
#line 4009 "../../gcc/config/i386/mmx.md"
((!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun))
   && reload_completed))
            return NULL;
          return gen_split_1051 (insn, operands);

        case ZERO_EXTEND:
          return split_37 (x1, insn);

        case NE:
        case EQ:
          operands[1] = x3;
          switch (pattern560 (x1))
            {
            case 0:
              if (!((
#line 2384 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 1555 "../../gcc/config/i386/i386.md"
(TARGET_AVX512DQ)) && 
#line 2386 "../../gcc/config/i386/sse.md"
( reload_completed)))
                return NULL;
              return gen_split_1223 (insn, operands);

            case 1:
              if (!(
#line 2384 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 2386 "../../gcc/config/i386/sse.md"
( reload_completed)))
                return NULL;
              return gen_split_1224 (insn, operands);

            case 2:
              if (!(
#line 2384 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 2386 "../../gcc/config/i386/sse.md"
( reload_completed)))
                return NULL;
              return gen_split_1225 (insn, operands);

            case 3:
              if (!((
#line 2384 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 1556 "../../gcc/config/i386/i386.md"
(TARGET_AVX512BW && TARGET_64BIT)) && 
#line 2386 "../../gcc/config/i386/sse.md"
( reload_completed)))
                return NULL;
              return gen_split_1226 (insn, operands);

            default:
              return NULL;
            }

        case IF_THEN_ELSE:
          x8 = XEXP (x3, 0);
          if (!bt_comparison_operator (x8, E_VOIDmode))
            return NULL;
          x12 = XEXP (x8, 1);
          if (x12 != const_int_rtx[MAX_SAVED_CONST_INT + -1])
            return NULL;
          x4 = XVECEXP (x1, 0, 1);
          if (pattern227 (x4, 
E_CCmode, 
17) != 0)
            return NULL;
          switch (pattern1184 (x2))
            {
            case 0:
              if (!((
#line 2419 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 1555 "../../gcc/config/i386/i386.md"
(TARGET_AVX512DQ)) && 
#line 2421 "../../gcc/config/i386/sse.md"
( reload_completed)))
                return NULL;
              return gen_split_1227 (insn, operands);

            case 1:
              if (!(
#line 2419 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 2421 "../../gcc/config/i386/sse.md"
( reload_completed)))
                return NULL;
              return gen_split_1228 (insn, operands);

            case 2:
              if (!(
#line 2419 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 2421 "../../gcc/config/i386/sse.md"
( reload_completed)))
                return NULL;
              return gen_split_1229 (insn, operands);

            case 3:
              if (!((
#line 2419 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 1556 "../../gcc/config/i386/i386.md"
(TARGET_AVX512BW && TARGET_64BIT)) && 
#line 2421 "../../gcc/config/i386/sse.md"
( reload_completed)))
                return NULL;
              return gen_split_1230 (insn, operands);

            case 4:
              if (!((
#line 2455 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_CMOVE && !TARGET_PARTIAL_REG_STALL) && 
#line 1555 "../../gcc/config/i386/i386.md"
(TARGET_AVX512DQ)) && 
#line 2457 "../../gcc/config/i386/sse.md"
( reload_completed)))
                return NULL;
              return gen_split_1231 (insn, operands);

            case 5:
              if (!(
#line 2455 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_CMOVE && !TARGET_PARTIAL_REG_STALL) && 
#line 2457 "../../gcc/config/i386/sse.md"
( reload_completed)))
                return NULL;
              return gen_split_1232 (insn, operands);

            case 6:
              if (!((
#line 2455 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_CMOVE && !TARGET_PARTIAL_REG_STALL) && 
#line 1556 "../../gcc/config/i386/i386.md"
(TARGET_AVX512BW)) && 
#line 2457 "../../gcc/config/i386/sse.md"
( reload_completed)))
                return NULL;
              return gen_split_1233 (insn, operands);

            case 7:
              if (!((
#line 2455 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_CMOVE && !TARGET_PARTIAL_REG_STALL) && 
#line 1556 "../../gcc/config/i386/i386.md"
(TARGET_AVX512BW && TARGET_64BIT)) && 
#line 2457 "../../gcc/config/i386/sse.md"
( reload_completed)))
                return NULL;
              return gen_split_1234 (insn, operands);

            case 8:
              if (!((
#line 2498 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_CMOVE
   && !(MEM_P (operands[2]) && MEM_P (operands[3]))) && 
#line 1555 "../../gcc/config/i386/i386.md"
(TARGET_AVX512DQ)) && 
#line 2501 "../../gcc/config/i386/sse.md"
( reload_completed)))
                return NULL;
              return gen_split_1235 (insn, operands);

            case 9:
              if (!(
#line 2498 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_CMOVE
   && !(MEM_P (operands[2]) && MEM_P (operands[3]))) && 
#line 2501 "../../gcc/config/i386/sse.md"
( reload_completed)))
                return NULL;
              return gen_split_1238 (insn, operands);

            case 10:
              if (!((
#line 2498 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_CMOVE
   && !(MEM_P (operands[2]) && MEM_P (operands[3]))) && 
#line 1556 "../../gcc/config/i386/i386.md"
(TARGET_AVX512BW)) && 
#line 2501 "../../gcc/config/i386/sse.md"
( reload_completed)))
                return NULL;
              return gen_split_1241 (insn, operands);

            case 11:
              if (!((
#line 2498 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_CMOVE
   && !(MEM_P (operands[2]) && MEM_P (operands[3]))) && 
#line 1556 "../../gcc/config/i386/i386.md"
(TARGET_AVX512BW && TARGET_64BIT)) && 
#line 2501 "../../gcc/config/i386/sse.md"
( reload_completed)))
                return NULL;
              return gen_split_1244 (insn, operands);

            case 12:
              if (!((
#line 2498 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_CMOVE
   && !(MEM_P (operands[2]) && MEM_P (operands[3]))) && 
#line 1555 "../../gcc/config/i386/i386.md"
(TARGET_AVX512DQ)) && 
#line 2501 "../../gcc/config/i386/sse.md"
( reload_completed)))
                return NULL;
              return gen_split_1236 (insn, operands);

            case 13:
              if (!(
#line 2498 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_CMOVE
   && !(MEM_P (operands[2]) && MEM_P (operands[3]))) && 
#line 2501 "../../gcc/config/i386/sse.md"
( reload_completed)))
                return NULL;
              return gen_split_1239 (insn, operands);

            case 14:
              if (!((
#line 2498 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_CMOVE
   && !(MEM_P (operands[2]) && MEM_P (operands[3]))) && 
#line 1556 "../../gcc/config/i386/i386.md"
(TARGET_AVX512BW)) && 
#line 2501 "../../gcc/config/i386/sse.md"
( reload_completed)))
                return NULL;
              return gen_split_1242 (insn, operands);

            case 15:
              if (!((
#line 2498 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_CMOVE
   && !(MEM_P (operands[2]) && MEM_P (operands[3]))) && 
#line 1556 "../../gcc/config/i386/i386.md"
(TARGET_AVX512BW && TARGET_64BIT)) && 
#line 2501 "../../gcc/config/i386/sse.md"
( reload_completed)))
                return NULL;
              return gen_split_1245 (insn, operands);

            case 16:
              if (!((
#line 2498 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_CMOVE
   && !(MEM_P (operands[2]) && MEM_P (operands[3]))) && ((((
#line 1164 "../../gcc/config/i386/i386.md"
(TARGET_64BIT) && 
#line 1555 "../../gcc/config/i386/i386.md"
(TARGET_AVX512DQ)) && 
#line 1164 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 1164 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 1164 "../../gcc/config/i386/i386.md"
(TARGET_64BIT))) && 
#line 2501 "../../gcc/config/i386/sse.md"
( reload_completed)))
                return NULL;
              return gen_split_1237 (insn, operands);

            case 17:
              if (!((
#line 2498 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_CMOVE
   && !(MEM_P (operands[2]) && MEM_P (operands[3]))) && 
#line 1164 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 2501 "../../gcc/config/i386/sse.md"
( reload_completed)))
                return NULL;
              return gen_split_1240 (insn, operands);

            case 18:
              if (!((
#line 2498 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_CMOVE
   && !(MEM_P (operands[2]) && MEM_P (operands[3]))) && ((((
#line 1164 "../../gcc/config/i386/i386.md"
(TARGET_64BIT) && 
#line 1556 "../../gcc/config/i386/i386.md"
(TARGET_AVX512BW)) && 
#line 1164 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 1164 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 1164 "../../gcc/config/i386/i386.md"
(TARGET_64BIT))) && 
#line 2501 "../../gcc/config/i386/sse.md"
( reload_completed)))
                return NULL;
              return gen_split_1243 (insn, operands);

            case 19:
              if (!((
#line 2498 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_CMOVE
   && !(MEM_P (operands[2]) && MEM_P (operands[3]))) && ((((
#line 1164 "../../gcc/config/i386/i386.md"
(TARGET_64BIT) && 
#line 1556 "../../gcc/config/i386/i386.md"
(TARGET_AVX512BW && TARGET_64BIT)) && 
#line 1164 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 1164 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 1164 "../../gcc/config/i386/i386.md"
(TARGET_64BIT))) && 
#line 2501 "../../gcc/config/i386/sse.md"
( reload_completed)))
                return NULL;
              return gen_split_1246 (insn, operands);

            default:
              return NULL;
            }

        case VEC_MERGE:
          if (pattern213 (x1) != 0
              || !
#line 8367 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && reload_completed
   && SSE_REG_P (operands[2])))
            return NULL;
          return gen_split_1508 (insn, operands);

        default:
          return NULL;
        }

    case 3:
      x2 = XVECEXP (x1, 0, 0);
      if (GET_CODE (x2) != SET)
        return NULL;
      x3 = XEXP (x2, 1);
      if (GET_CODE (x3) != UNSPEC)
        return NULL;
      x5 = XEXP (x2, 0);
      operands[0] = x5;
      switch (XVECLEN (x3, 0))
        {
        case 5:
          if (pattern723 (x1, 
131, 
5) != 0
              || pattern1724 (x1) != 0
              || !(
#line 25842 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_2
   && ix86_pre_reload_split ()) && 
#line 25845 "../../gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_3680 (insn, operands);

        case 3:
          if (pattern723 (x1, 
132, 
3) != 0
              || pattern1725 (x1) != 0
              || !(
#line 25979 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_2
   && ix86_pre_reload_split ()) && 
#line 25982 "../../gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_3681 (insn, operands);

        case 1:
          x4 = XVECEXP (x1, 0, 1);
          if (GET_CODE (x4) != CLOBBER)
            return NULL;
          x15 = XVECEXP (x1, 0, 2);
          if (GET_CODE (x15) != CLOBBER
              || GET_MODE (x3) != E_DImode)
            return NULL;
          x6 = XVECEXP (x3, 0, 0);
          operands[1] = x6;
          x7 = XEXP (x4, 0);
          operands[2] = x7;
          if (!memory_operand (operands[2], E_DImode))
            return NULL;
          x16 = XEXP (x15, 0);
          operands[3] = x16;
          if (!scratch_operand (operands[3], E_DFmode))
            return NULL;
          switch (XINT (x3, 1))
            {
            case 288:
              if (!nonimmediate_operand (operands[0], E_DImode)
                  || !memory_operand (operands[1], E_DImode)
                  || !(
#line 196 "../../gcc/config/i386/sync.md"
(!TARGET_64BIT && (TARGET_80387 || TARGET_SSE)) && 
#line 198 "../../gcc/config/i386/sync.md"
( reload_completed)))
                return NULL;
              return gen_split_3809 (insn, operands);

            case 289:
              if (!memory_operand (operands[0], E_DImode)
                  || !nonimmediate_operand (operands[1], E_DImode)
                  || !(
#line 295 "../../gcc/config/i386/sync.md"
(!TARGET_64BIT && (TARGET_80387 || TARGET_SSE)) && 
#line 297 "../../gcc/config/i386/sync.md"
( reload_completed)))
                return NULL;
              return gen_split_3810 (insn, operands);

            default:
              return NULL;
            }

        default:
          return NULL;
        }

    default:
      return NULL;
    }
}

 rtx_insn *
peephole2_14 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pmatch_len_ ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6;
  rtx_insn *res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  operands[0] = x2;
  res = peephole2_12 (x1, insn, pmatch_len_);
  if (res != NULL_RTX)
    return res;
  if (peep2_current_count < 2)
    return NULL;
  if (peep2_current_count >= 3
      && peep2_current_count >= 4)
    {
      if (general_reg_operand (x2, E_SImode))
        {
          res = peephole2_13 (x1, insn, pmatch_len_);
          if (res != NULL_RTX)
            return res;
        }
      if (peep2_current_count >= 5
          && pattern598 (x1, 
E_SImode) == 0
          && 
#line 26931 "../../gcc/config/i386/i386.md"
(optimize_insn_for_size_p ()
   && INSN_UID (peep2_next_insn (0)) == ix86_last_zero_store_uid))
        {
          *pmatch_len_ = 4;
          res = gen_peephole2_223 (insn, operands);
          if (res != NULL_RTX)
            return res;
        }
    }
  operands[3] = x2;
  if (peep2_current_count >= 3)
    {
      x3 = XEXP (x1, 1);
      if (pattern410 (x3, 
E_SImode) == 0
          && 
#line 26949 "../../gcc/config/i386/i386.md"
(optimize_insn_for_size_p ()
   && INSN_UID (peep2_next_insn (0)) == ix86_last_zero_store_uid))
        {
          *pmatch_len_ = 2;
          res = gen_peephole2_225 (insn, operands);
          if (res != NULL_RTX)
            return res;
        }
    }
  if (general_reg_operand (operands[3], E_SImode))
    {
      x3 = XEXP (x1, 1);
      switch (pattern411 (x3, 
E_SImode))
        {
        case 0:
          if ((
#line 27374 "../../gcc/config/i386/i386.md"
(GET_MODE (operands[2]) == word_mode
   && peep2_reg_dead_p (0, operands[3])
   && peep2_reg_dead_p (2, operands[2])
   && !reg_mentioned_p (operands[3], operands[0])
   && !reg_mentioned_p (operands[3], operands[1])) && 
#line 1408 "../../gcc/config/i386/i386.md"
(ptr_mode == SImode)))
            {
              *pmatch_len_ = 1;
              res = gen_peephole2_239 (insn, operands);
              if (res != NULL_RTX)
                return res;
            }
          break;

        case 1:
          if ((
#line 27374 "../../gcc/config/i386/i386.md"
(GET_MODE (operands[2]) == word_mode
   && peep2_reg_dead_p (0, operands[3])
   && peep2_reg_dead_p (2, operands[2])
   && !reg_mentioned_p (operands[3], operands[0])
   && !reg_mentioned_p (operands[3], operands[1])) && 
#line 1408 "../../gcc/config/i386/i386.md"
(ptr_mode == DImode)))
            {
              *pmatch_len_ = 1;
              res = gen_peephole2_241 (insn, operands);
              if (res != NULL_RTX)
                return res;
            }
          break;

        default:
          break;
        }
    }
  x4 = PATTERN (peep2_next_insn (1));
  if (GET_CODE (x4) != SET)
    return NULL;
  operands[2] = x2;
  if (memory_operand (operands[2], E_SImode))
    {
      x3 = XEXP (x1, 1);
      operands[0] = x3;
      if (general_reg_operand (operands[0], E_SImode))
        {
          x5 = XEXP (x4, 1);
          if (x5 == const_int_rtx[MAX_SAVED_CONST_INT + 0])
            {
              x6 = XEXP (x4, 0);
              operands[1] = x6;
              if (memory_operand (operands[1], E_SImode)
                  && 
#line 26964 "../../gcc/config/i386/i386.md"
(optimize_insn_for_size_p ()
   && INSN_UID (peep2_next_insn (0)) == ix86_last_zero_store_uid))
                {
                  *pmatch_len_ = 1;
                  res = gen_peephole2_227 (insn, operands);
                  if (res != NULL_RTX)
                    return res;
                }
            }
        }
    }
  operands[0] = x2;
  if (!general_reg_operand (operands[0], E_SImode))
    return NULL;
  x3 = XEXP (x1, 1);
  operands[1] = x3;
  if (!x86_64_general_operand (operands[1], E_SImode))
    return NULL;
  x6 = XEXP (x4, 0);
  operands[2] = x6;
  if (!general_reg_operand (operands[2], E_SImode))
    return NULL;
  x5 = XEXP (x4, 1);
  if (!rtx_equal_p (x5, operands[0])
      || !
#line 26981 "../../gcc/config/i386/i386.md"
(peep2_reg_dead_p (2, operands[0])))
    return NULL;
  *pmatch_len_ = 1;
  return gen_peephole2_231 (insn, operands);
}

 rtx_insn *
peephole2_18 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pmatch_len_ ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11;
  rtx_insn *res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  operands[0] = x2;
  res = peephole2_16 (x1, insn, pmatch_len_);
  if (res != NULL_RTX)
    return res;
  if (peep2_current_count >= 2)
    {
      if (peep2_current_count >= 3
          && peep2_current_count >= 4)
        {
          if (general_reg_operand (x2, E_DImode))
            {
              res = peephole2_17 (x1, insn, pmatch_len_);
              if (res != NULL_RTX)
                return res;
            }
          if (peep2_current_count >= 5
              && pattern598 (x1, 
E_DImode) == 0
              && (
#line 26931 "../../gcc/config/i386/i386.md"
(optimize_insn_for_size_p ()
   && INSN_UID (peep2_next_insn (0)) == ix86_last_zero_store_uid) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
            {
              *pmatch_len_ = 4;
              res = gen_peephole2_224 (insn, operands);
              if (res != NULL_RTX)
                return res;
            }
        }
      operands[3] = x2;
      if (peep2_current_count >= 3)
        {
          x3 = XEXP (x1, 1);
          if (pattern410 (x3, 
E_DImode) == 0
              && (
#line 26949 "../../gcc/config/i386/i386.md"
(optimize_insn_for_size_p ()
   && INSN_UID (peep2_next_insn (0)) == ix86_last_zero_store_uid) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
            {
              *pmatch_len_ = 2;
              res = gen_peephole2_226 (insn, operands);
              if (res != NULL_RTX)
                return res;
            }
        }
      if (general_reg_operand (operands[3], E_DImode))
        {
          x3 = XEXP (x1, 1);
          switch (pattern411 (x3, 
E_DImode))
            {
            case 0:
              if ((
#line 27374 "../../gcc/config/i386/i386.md"
(GET_MODE (operands[2]) == word_mode
   && peep2_reg_dead_p (0, operands[3])
   && peep2_reg_dead_p (2, operands[2])
   && !reg_mentioned_p (operands[3], operands[0])
   && !reg_mentioned_p (operands[3], operands[1])) && ((((
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT) && 
#line 1408 "../../gcc/config/i386/i386.md"
(ptr_mode == SImode)) && 
#line 1408 "../../gcc/config/i386/i386.md"
(ptr_mode == SImode)) && 
#line 1408 "../../gcc/config/i386/i386.md"
(ptr_mode == SImode)) && 
#line 1408 "../../gcc/config/i386/i386.md"
(ptr_mode == SImode))))
                {
                  *pmatch_len_ = 1;
                  res = gen_peephole2_240 (insn, operands);
                  if (res != NULL_RTX)
                    return res;
                }
              break;

            case 1:
              if ((
#line 27374 "../../gcc/config/i386/i386.md"
(GET_MODE (operands[2]) == word_mode
   && peep2_reg_dead_p (0, operands[3])
   && peep2_reg_dead_p (2, operands[2])
   && !reg_mentioned_p (operands[3], operands[0])
   && !reg_mentioned_p (operands[3], operands[1])) && ((((
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT) && 
#line 1408 "../../gcc/config/i386/i386.md"
(ptr_mode == DImode)) && 
#line 1408 "../../gcc/config/i386/i386.md"
(ptr_mode == DImode)) && 
#line 1408 "../../gcc/config/i386/i386.md"
(ptr_mode == DImode)) && 
#line 1408 "../../gcc/config/i386/i386.md"
(ptr_mode == DImode))))
                {
                  *pmatch_len_ = 1;
                  res = gen_peephole2_242 (insn, operands);
                  if (res != NULL_RTX)
                    return res;
                }
              break;

            default:
              break;
            }
        }
      operands[2] = x2;
      if (memory_operand (operands[2], E_DImode))
        {
          x3 = XEXP (x1, 1);
          operands[0] = x3;
          if (general_reg_operand (operands[0], E_DImode))
            {
              x4 = PATTERN (peep2_next_insn (1));
              if (GET_CODE (x4) == SET)
                {
                  x5 = XEXP (x4, 1);
                  if (x5 == const_int_rtx[MAX_SAVED_CONST_INT + 0])
                    {
                      x6 = XEXP (x4, 0);
                      operands[1] = x6;
                      if (memory_operand (operands[1], E_DImode)
                          && (
#line 26964 "../../gcc/config/i386/i386.md"
(optimize_insn_for_size_p ()
   && INSN_UID (peep2_next_insn (0)) == ix86_last_zero_store_uid) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                        {
                          *pmatch_len_ = 1;
                          res = gen_peephole2_228 (insn, operands);
                          if (res != NULL_RTX)
                            return res;
                        }
                    }
                }
            }
        }
    }
  operands[0] = x2;
  if (peep2_current_count >= 2
      && general_reg_operand (operands[0], E_DImode))
    {
      x3 = XEXP (x1, 1);
      operands[1] = x3;
      if (x86_64_general_operand (operands[1], E_DImode))
        {
          x4 = PATTERN (peep2_next_insn (1));
          if (GET_CODE (x4) == SET)
            {
              x6 = XEXP (x4, 0);
              operands[2] = x6;
              if (general_reg_operand (operands[2], E_DImode))
                {
                  x5 = XEXP (x4, 1);
                  if (rtx_equal_p (x5, operands[0])
                      && (
#line 26981 "../../gcc/config/i386/i386.md"
(peep2_reg_dead_p (2, operands[0])) && 
#line 1161 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                    {
                      *pmatch_len_ = 1;
                      res = gen_peephole2_232 (insn, operands);
                      if (res != NULL_RTX)
                        return res;
                    }
                }
            }
        }
    }
  x3 = XEXP (x1, 1);
  operands[1] = x3;
  if (!memory_operand (operands[1], E_DImode))
    return NULL;
  if (push_operand (operands[0], E_DImode)
      && (
#line 27639 "../../gcc/config/i386/i386.md"
(!(TARGET_PUSH_MEMORY || optimize_insn_for_size_p ())
   && !RTX_FRAME_RELATED_P (peep2_next_insn (0))) && 
#line 1161 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
    {
      *pmatch_len_ = 0;
      res = gen_peephole2_254 (insn, operands);
      if (res != NULL_RTX)
        return res;
    }
  if (peep2_current_count < 2
      || peep2_current_count < 3
      || !register_operand (operands[0], E_DImode))
    return NULL;
  x4 = PATTERN (peep2_next_insn (1));
  switch (GET_CODE (x4))
    {
    case PARALLEL:
      if (XVECLEN (x4, 0) != 2)
        return NULL;
      x7 = XVECEXP (x4, 0, 0);
      if (GET_CODE (x7) != SET)
        return NULL;
      x8 = XEXP (x7, 1);
      if (GET_CODE (x8) != COMPARE
          || pattern1258 (x4, 
E_DImode) != 0)
        return NULL;
      x9 = PATTERN (peep2_next_insn (2));
      if (GET_CODE (x9) != SET)
        return NULL;
      x10 = XEXP (x9, 1);
      if (!rtx_equal_p (x10, operands[0]))
        return NULL;
      x11 = XEXP (x9, 0);
      if (rtx_equal_p (x11, operands[1])
          && (
#line 27966 "../../gcc/config/i386/i386.md"
((TARGET_READ_MODIFY_WRITE || optimize_insn_for_size_p ())
   && peep2_reg_dead_p (3, operands[0])
   && !reg_overlap_mentioned_p (operands[0], operands[1])
   && !reg_overlap_mentioned_p (operands[0], operands[2])
   && ix86_match_ccmode (peep2_next_insn (1),
			 (GET_CODE (operands[3]) == PLUS
			  || GET_CODE (operands[3]) == MINUS)
			 ? CCGOCmode : CCNOmode)) && 
#line 1161 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
        {
          *pmatch_len_ = 2;
          res = gen_peephole2_300 (insn, operands);
          if (res != NULL_RTX)
            return res;
        }
      if (peep2_current_count < 4
          || pattern1800 (x11, 
E_DImode) != 0
          || !(
#line 28206 "../../gcc/config/i386/i386.md"
((TARGET_READ_MODIFY_WRITE || optimize_insn_for_size_p ())
   && peep2_reg_dead_p (3, operands[0])
   && peep2_reg_dead_p (4, operands[4])
   && !reg_overlap_mentioned_p (operands[0], operands[1])
   && !reg_overlap_mentioned_p (operands[0], operands[2])
   && !reg_overlap_mentioned_p (operands[4], operands[1])
   && ix86_match_ccmode (peep2_next_insn (1),
			 (GET_CODE (operands[3]) == PLUS
			  || GET_CODE (operands[3]) == MINUS)
			 ? CCGOCmode : CCNOmode)) && 
#line 1161 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
        return NULL;
      *pmatch_len_ = 3;
      return gen_peephole2_324 (insn, operands);

    case SET:
      if (pattern843 (x4, 
E_DImode) != 0
          || !(
#line 28242 "../../gcc/config/i386/i386.md"
((TARGET_READ_MODIFY_WRITE || optimize_insn_for_size_p ())
   && (REGNO (operands[4]) == REGNO (operands[0])
       || REGNO (operands[4]) == REGNO (operands[3]))
   && (rtx_equal_p (operands[REGNO (operands[4]) == REGNO (operands[0])
			     ? 3 : 0], operands[5])
       ? rtx_equal_p (operands[2], operands[6])
       : rtx_equal_p (operands[2], operands[5])
	 && rtx_equal_p (operands[REGNO (operands[4]) == REGNO (operands[0])
				  ? 3 : 0], operands[6]))
   && peep2_reg_dead_p (4, operands[4])
   && peep2_reg_dead_p (5, operands[REGNO (operands[4]) == REGNO (operands[0])
				    ? 3 : 0])
   && !reg_overlap_mentioned_p (operands[0], operands[1])
   && !reg_overlap_mentioned_p (operands[0], operands[2])
   && !reg_overlap_mentioned_p (operands[3], operands[0])
   && !reg_overlap_mentioned_p (operands[3], operands[1])
   && !reg_overlap_mentioned_p (operands[3], operands[2])
   && (DImode != QImode
       || immediate_operand (operands[2], QImode)
       || any_QIreg_operand (operands[2], QImode))) && 
#line 1161 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
        return NULL;
      *pmatch_len_ = 4;
      return gen_peephole2_328 (insn, operands);

    default:
      return NULL;
    }
}

 rtx_insn *
peephole2_29 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pmatch_len_ ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7;
  rtx_insn *res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  switch (GET_CODE (x3))
    {
    case NE:
    case EQ:
    case GE:
    case GT:
    case LE:
    case LT:
    case LTGT:
    case GEU:
    case GTU:
    case LEU:
    case LTU:
    case UNORDERED:
    case ORDERED:
    case UNEQ:
    case UNGE:
    case UNGT:
    case UNLE:
    case UNLT:
      operands[1] = x3;
      switch (pattern239 (x1))
        {
        case 0:
          switch (GET_MODE (operands[0]))
            {
            case E_HImode:
              if (pattern1198 (x2, 
E_HImode) != 0
                  || !
#line 26282 "../../gcc/config/i386/i386.md"
(TARGET_CMOVE && TARGET_AVOID_MEM_OPND_FOR_CMOVE
   && (MEM_P (operands[2]) || MEM_P (operands[3]))
   && optimize_insn_for_speed_p ()))
                return NULL;
              *pmatch_len_ = 0;
              return gen_peephole2_199 (insn, operands);

            case E_SImode:
              if (pattern1198 (x2, 
E_SImode) != 0
                  || !
#line 26282 "../../gcc/config/i386/i386.md"
(TARGET_CMOVE && TARGET_AVOID_MEM_OPND_FOR_CMOVE
   && (MEM_P (operands[2]) || MEM_P (operands[3]))
   && optimize_insn_for_speed_p ()))
                return NULL;
              *pmatch_len_ = 0;
              return gen_peephole2_200 (insn, operands);

            case E_DImode:
              if (pattern1198 (x2, 
E_DImode) != 0
                  || !(
#line 26282 "../../gcc/config/i386/i386.md"
(TARGET_CMOVE && TARGET_AVOID_MEM_OPND_FOR_CMOVE
   && (MEM_P (operands[2]) || MEM_P (operands[3]))
   && optimize_insn_for_speed_p ()) && 
#line 1164 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return NULL;
              *pmatch_len_ = 0;
              return gen_peephole2_201 (insn, operands);

            case E_SFmode:
              if (!general_reg_operand (operands[0], E_SFmode)
                  || pattern1260 (x2, 
E_SFmode) != 0
                  || !
#line 26534 "../../gcc/config/i386/i386.md"
((SFmode != DFmode || TARGET_64BIT)
   && TARGET_80387 && TARGET_CMOVE
   && TARGET_AVOID_MEM_OPND_FOR_CMOVE
   && (MEM_P (operands[2]) || MEM_P (operands[3]))
   && optimize_insn_for_speed_p ()))
                return NULL;
              *pmatch_len_ = 0;
              return gen_peephole2_209 (insn, operands);

            case E_DFmode:
              if (!general_reg_operand (operands[0], E_DFmode)
                  || pattern1260 (x2, 
E_DFmode) != 0
                  || !
#line 26534 "../../gcc/config/i386/i386.md"
((DFmode != DFmode || TARGET_64BIT)
   && TARGET_80387 && TARGET_CMOVE
   && TARGET_AVOID_MEM_OPND_FOR_CMOVE
   && (MEM_P (operands[2]) || MEM_P (operands[3]))
   && optimize_insn_for_speed_p ()))
                return NULL;
              *pmatch_len_ = 0;
              return gen_peephole2_210 (insn, operands);

            default:
              return NULL;
            }

        case 1:
          if (!register_operand (operands[0], E_DImode)
              || GET_MODE (x2) != E_DImode
              || !ix86_comparison_operator (operands[1], E_VOIDmode))
            return NULL;
          x4 = XEXP (x2, 1);
          x5 = XEXP (x4, 0);
          operands[2] = x5;
          if (!nonimmediate_operand (operands[2], E_SImode))
            return NULL;
          x6 = XEXP (x2, 2);
          x7 = XEXP (x6, 0);
          operands[3] = x7;
          if (!nonimmediate_operand (operands[3], E_SImode)
              || !
#line 26312 "../../gcc/config/i386/i386.md"
(TARGET_64BIT
   && TARGET_CMOVE && TARGET_AVOID_MEM_OPND_FOR_CMOVE
   && (MEM_P (operands[2]) || MEM_P (operands[3]))
   && optimize_insn_for_speed_p ()))
            return NULL;
          *pmatch_len_ = 0;
          return gen_peephole2_202 (insn, operands);

        default:
          return NULL;
        }

    default:
      return NULL;
    }
}

 rtx_insn *
peephole2_38 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pmatch_len_ ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7;
  rtx_insn *res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  operands[1] = x3;
  x4 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x4) != SET)
    return NULL;
  x5 = XEXP (x2, 0);
  operands[0] = x5;
  x6 = XEXP (x4, 1);
  if (!rtx_equal_p (x6, operands[0]))
    return NULL;
  x7 = XEXP (x4, 0);
  if (!rtx_equal_p (x7, operands[1]))
    return NULL;
  switch (GET_MODE (operands[0]))
    {
    case E_QImode:
      if (!general_reg_operand (operands[0], E_QImode)
          || !general_reg_operand (operands[1], E_QImode))
        return NULL;
      if (
#line 3395 "../../gcc/config/i386/i386.md"
(((REGNO (operands[0]) != AX_REG
     && REGNO (operands[1]) != AX_REG)
    || optimize_size < 2
    || !optimize_insn_for_size_p ())
   && peep2_reg_dead_p (1, operands[0])))
        {
          *pmatch_len_ = 0;
          res = gen_peephole2_19 (insn, operands);
          if (res != NULL_RTX)
            return res;
        }
      if (!
#line 3407 "../../gcc/config/i386/i386.md"
(((REGNO (operands[0]) != AX_REG
     && REGNO (operands[1]) != AX_REG)
    || optimize_size < 2
    || !optimize_insn_for_size_p ())
   && peep2_reg_dead_p (1, operands[1])))
        return NULL;
      *pmatch_len_ = 0;
      return gen_peephole2_23 (insn, operands);

    case E_HImode:
      if (!general_reg_operand (operands[0], E_HImode)
          || !general_reg_operand (operands[1], E_HImode))
        return NULL;
      if (
#line 3395 "../../gcc/config/i386/i386.md"
(((REGNO (operands[0]) != AX_REG
     && REGNO (operands[1]) != AX_REG)
    || optimize_size < 2
    || !optimize_insn_for_size_p ())
   && peep2_reg_dead_p (1, operands[0])))
        {
          *pmatch_len_ = 0;
          res = gen_peephole2_20 (insn, operands);
          if (res != NULL_RTX)
            return res;
        }
      if (!
#line 3407 "../../gcc/config/i386/i386.md"
(((REGNO (operands[0]) != AX_REG
     && REGNO (operands[1]) != AX_REG)
    || optimize_size < 2
    || !optimize_insn_for_size_p ())
   && peep2_reg_dead_p (1, operands[1])))
        return NULL;
      *pmatch_len_ = 0;
      return gen_peephole2_24 (insn, operands);

    case E_SImode:
      if (!general_reg_operand (operands[0], E_SImode)
          || !general_reg_operand (operands[1], E_SImode))
        return NULL;
      if (
#line 3395 "../../gcc/config/i386/i386.md"
(((REGNO (operands[0]) != AX_REG
     && REGNO (operands[1]) != AX_REG)
    || optimize_size < 2
    || !optimize_insn_for_size_p ())
   && peep2_reg_dead_p (1, operands[0])))
        {
          *pmatch_len_ = 0;
          res = gen_peephole2_21 (insn, operands);
          if (res != NULL_RTX)
            return res;
        }
      if (!
#line 3407 "../../gcc/config/i386/i386.md"
(((REGNO (operands[0]) != AX_REG
     && REGNO (operands[1]) != AX_REG)
    || optimize_size < 2
    || !optimize_insn_for_size_p ())
   && peep2_reg_dead_p (1, operands[1])))
        return NULL;
      *pmatch_len_ = 0;
      return gen_peephole2_25 (insn, operands);

    case E_DImode:
      if (!general_reg_operand (operands[0], E_DImode)
          || !general_reg_operand (operands[1], E_DImode))
        return NULL;
      if ((
#line 3395 "../../gcc/config/i386/i386.md"
(((REGNO (operands[0]) != AX_REG
     && REGNO (operands[1]) != AX_REG)
    || optimize_size < 2
    || !optimize_insn_for_size_p ())
   && peep2_reg_dead_p (1, operands[0])) && 
#line 1161 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
        {
          *pmatch_len_ = 0;
          res = gen_peephole2_22 (insn, operands);
          if (res != NULL_RTX)
            return res;
        }
      if (!(
#line 3407 "../../gcc/config/i386/i386.md"
(((REGNO (operands[0]) != AX_REG
     && REGNO (operands[1]) != AX_REG)
    || optimize_size < 2
    || !optimize_insn_for_size_p ())
   && peep2_reg_dead_p (1, operands[1])) && 
#line 1161 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
        return NULL;
      *pmatch_len_ = 0;
      return gen_peephole2_26 (insn, operands);

    default:
      return NULL;
    }
}

 rtx_insn *
peephole2_45 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pmatch_len_ ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12, x13, x14, x15, x16, x17;
  rtx x18, x19, x20, x21, x22, x23, x24, x25;
  rtx x26, x27;
  rtx_insn *res ATTRIBUTE_UNUSED;
  if (peep2_current_count < 2
      || peep2_current_count < 3)
    return NULL;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) != E_HImode)
    return NULL;
  x4 = XVECEXP (x1, 0, 1);
  if (pattern227 (x4, 
E_CCmode, 
17) != 0)
    return NULL;
  x5 = XEXP (x2, 0);
  operands[1] = x5;
  if (!register_operand (operands[1], E_HImode))
    return NULL;
  x6 = XEXP (x3, 0);
  operands[2] = x6;
  if (!nonimmediate_operand (operands[2], E_HImode))
    return NULL;
  x7 = PATTERN (peep2_next_insn (1));
  if (GET_CODE (x7) != SET)
    return NULL;
  x8 = PATTERN (peep2_next_insn (2));
  if (GET_CODE (x8) != SET)
    return NULL;
  x9 = XEXP (x7, 1);
  switch (GET_CODE (x9))
    {
    case ZERO_EXTEND:
      if (peep2_current_count < 4)
        return NULL;
      x10 = XEXP (x7, 0);
      operands[3] = x10;
      if (!register_operand (operands[3], E_VOIDmode))
        return NULL;
      x11 = XEXP (x9, 0);
      if (!rtx_equal_p (x11, operands[1])
          || pattern1750 (x8) != 0)
        return NULL;
      x12 = XEXP (x8, 1);
      x13 = XEXP (x12, 0);
      x14 = XEXP (x13, 0);
      operands[4] = x14;
      if (!register_operand (operands[4], E_QImode))
        return NULL;
      x15 = PATTERN (peep2_next_insn (3));
      if (GET_CODE (x15) != SET)
        return NULL;
      x16 = XEXP (x15, 1);
      if (GET_CODE (x16) != IF_THEN_ELSE)
        return NULL;
      x17 = XEXP (x16, 0);
      if (!bt_comparison_operator (x17, E_VOIDmode))
        return NULL;
      operands[5] = x17;
      if (pattern1864 (x15) != 0)
        return NULL;
      x18 = XEXP (x16, 1);
      x19 = XEXP (x18, 0);
      operands[6] = x19;
      if (!
#line 22725 "../../gcc/config/i386/i386.md"
(REGNO (operands[3]) == REGNO (operands[4])
   && peep2_reg_dead_p (3, operands[1])
   && peep2_reg_dead_p (3, operands[3])
   && peep2_regno_dead_p (4, FLAGS_REG)))
        return NULL;
      *pmatch_len_ = 3;
      return gen_peephole2_195 (insn, operands);

    case COMPARE:
      if (GET_MODE (x9) != E_CCZmode)
        return NULL;
      x11 = XEXP (x9, 0);
      if (GET_CODE (x11) != AND
          || GET_MODE (x11) != E_QImode)
        return NULL;
      x20 = XEXP (x11, 1);
      if (x20 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
        return NULL;
      x21 = XEXP (x9, 1);
      if (x21 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
        return NULL;
      x10 = XEXP (x7, 0);
      if (GET_CODE (x10) != REG
          || REGNO (x10) != 17
          || GET_MODE (x10) != E_CCZmode)
        return NULL;
      x22 = XEXP (x11, 0);
      operands[3] = x22;
      if (!register_operand (operands[3], E_QImode))
        return NULL;
      x12 = XEXP (x8, 1);
      if (GET_CODE (x12) != IF_THEN_ELSE)
        return NULL;
      x13 = XEXP (x12, 0);
      if (!bt_comparison_operator (x13, E_VOIDmode))
        return NULL;
      operands[4] = x13;
      x14 = XEXP (x13, 0);
      if (GET_CODE (x14) != REG
          || REGNO (x14) != 17
          || GET_MODE (x14) != E_CCZmode)
        return NULL;
      x23 = XEXP (x13, 1);
      if (x23 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
        return NULL;
      x24 = XEXP (x12, 1);
      if (GET_CODE (x24) != LABEL_REF)
        return NULL;
      x25 = XEXP (x12, 2);
      if (GET_CODE (x25) != PC)
        return NULL;
      x26 = XEXP (x8, 0);
      if (GET_CODE (x26) != PC)
        return NULL;
      x27 = XEXP (x24, 0);
      operands[5] = x27;
      if (!
#line 22758 "../../gcc/config/i386/i386.md"
(REGNO (operands[1]) == REGNO (operands[3])
   && peep2_reg_dead_p (2, operands[1])
   && peep2_reg_dead_p (2, operands[3])
   && peep2_regno_dead_p (3, FLAGS_REG)))
        return NULL;
      *pmatch_len_ = 2;
      return gen_peephole2_196 (insn, operands);

    default:
      return NULL;
    }
}

 rtx_insn *
peephole2_insns (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pmatch_len_ ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12, x13, x14, x15, x16, x17;
  rtx x18, x19, x20, x21, x22, x23, x24, x25;
  rtx x26, x27, x28;
  rtx_insn *res ATTRIBUTE_UNUSED;
  recog_data.insn = NULL;
  switch (GET_CODE (x1))
    {
    case SET:
      x2 = XEXP (x1, 1);
      switch (GET_CODE (x2))
        {
        case UNSPEC:
          if (XVECLEN (x2, 0) == 1
              && XINT (x2, 1) == 41
              && pattern56 (x1, 
E_CCCmode) == 0
              && 
#line 2136 "../../gcc/config/i386/i386.md"
(TARGET_SLOW_STC && !optimize_insn_for_size_p ()))
            {
              *pmatch_len_ = 0;
              res = gen_peephole2_1 (insn, operands);
              if (res != NULL_RTX)
                return res;
            }
          break;

        case COMPARE:
          res = peephole2_1 (x1, insn, pmatch_len_);
          if (res != NULL_RTX)
            return res;
          break;

        case FLOAT_EXTEND:
          if (GET_MODE (x2) == E_DFmode)
            {
              x3 = XEXP (x1, 0);
              operands[0] = x3;
              if (sse_reg_operand (operands[0], E_DFmode))
                {
                  x4 = XEXP (x2, 0);
                  operands[1] = x4;
                  if (memory_operand (operands[1], E_SFmode)
                      && 
#line 5388 "../../gcc/config/i386/i386.md"
(TARGET_SPLIT_MEM_OPND_FOR_FP_CONVERTS
   && optimize_insn_for_speed_p ()))
                    {
                      *pmatch_len_ = 0;
                      res = gen_peephole2_54 (insn, operands);
                      if (res != NULL_RTX)
                        return res;
                    }
                }
            }
          break;

        case FLOAT_TRUNCATE:
          if (GET_MODE (x2) == E_SFmode)
            {
              x3 = XEXP (x1, 0);
              operands[0] = x3;
              if (sse_reg_operand (operands[0], E_SFmode))
                {
                  x4 = XEXP (x2, 0);
                  operands[1] = x4;
                  if (memory_operand (operands[1], E_DFmode)
                      && 
#line 5618 "../../gcc/config/i386/i386.md"
(TARGET_SPLIT_MEM_OPND_FOR_FP_CONVERTS
   && optimize_insn_for_speed_p ()))
                    {
                      *pmatch_len_ = 0;
                      res = gen_peephole2_55 (insn, operands);
                      if (res != NULL_RTX)
                        return res;
                    }
                }
            }
          break;

        case FIX:
          res = peephole2_2 (x1, insn, pmatch_len_);
          if (res != NULL_RTX)
            return res;
          break;

        case NE:
        case EQ:
          res = peephole2_3 (x1, insn, pmatch_len_);
          if (res != NULL_RTX)
            return res;
          break;

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
          res = peephole2_8 (x1, insn, pmatch_len_);
          if (res != NULL_RTX)
            return res;
          break;

        case VEC_SELECT:
          res = peephole2_9 (x1, insn, pmatch_len_);
          if (res != NULL_RTX)
            return res;
          break;

        default:
          break;
        }
      x3 = XEXP (x1, 0);
      switch (GET_MODE (x3))
        {
        case E_SImode:
          res = peephole2_14 (x1, insn, pmatch_len_);
          if (res != NULL_RTX)
            return res;
          break;

        case E_DImode:
          res = peephole2_18 (x1, insn, pmatch_len_);
          if (res != NULL_RTX)
            return res;
          break;

        default:
          break;
        }
      if (peep2_current_count >= 2)
        {
          res = peephole2_22 (x1, insn, pmatch_len_);
          if (res != NULL_RTX)
            return res;
        }
      operands[0] = x3;
      res = peephole2_26 (x1, insn, pmatch_len_);
      if (res != NULL_RTX)
        return res;
      switch (GET_CODE (x2))
        {
        case BSWAP:
          if (GET_MODE (x2) == E_HImode)
            {
              operands[0] = x3;
              if (general_reg_operand (operands[0], E_HImode))
                {
                  x4 = XEXP (x2, 0);
                  if (rtx_equal_p (x4, operands[0])
                      && 
#line 22485 "../../gcc/config/i386/i386.md"
(!(TARGET_USE_XCHGB ||
     TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun))
   && peep2_regno_dead_p (0, FLAGS_REG)))
                    {
                      *pmatch_len_ = 0;
                      res = gen_peephole2_190 (insn, operands);
                      if (res != NULL_RTX)
                        return res;
                    }
                }
            }
          break;

        case IOR:
          res = peephole2_27 (x1, insn, pmatch_len_);
          if (res != NULL_RTX)
            return res;
          break;

        case ZERO_EXTEND:
          res = peephole2_28 (x1, insn, pmatch_len_);
          if (res != NULL_RTX)
            return res;
          break;

        case IF_THEN_ELSE:
          res = peephole2_29 (x1, insn, pmatch_len_);
          if (res != NULL_RTX)
            return res;
          break;

        case CONST_INT:
        case CONST_WIDE_INT:
        case CONST_POLY_INT:
        case CONST_FIXED:
        case CONST_DOUBLE:
        case CONST_VECTOR:
        case CONST:
        case LABEL_REF:
        case SYMBOL_REF:
        case HIGH:
          if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + 0])
            {
              res = peephole2_31 (x1, insn, pmatch_len_);
              if (res != NULL_RTX)
                return res;
            }
          operands[1] = x2;
          if (immediate_operand (operands[1], E_SImode))
            {
              operands[0] = x3;
              if (memory_operand (operands[0], E_SImode)
                  && 
#line 27677 "../../gcc/config/i386/i386.md"
(optimize_insn_for_speed_p ()
   && ((SImode == HImode
       && TARGET_LCP_STALL)
       || (TARGET_SPLIT_LONG_MOVES
          && get_attr_length (insn) >= ix86_cur_cost ()->large_insn))))
                {
                  *pmatch_len_ = 0;
                  res = gen_peephole2_261 (insn, operands);
                  if (res != NULL_RTX)
                    return res;
                }
            }
          break;

        default:
          break;
        }
      if (GET_CODE (x3) == REG)
        {
          res = peephole2_33 (x1, insn, pmatch_len_);
          if (res != NULL_RTX)
            return res;
        }
      if (peep2_current_count >= 2)
        {
          res = peephole2_35 (x1, insn, pmatch_len_);
          if (res != NULL_RTX)
            return res;
        }
      operands[0] = x3;
      return peephole2_37 (x1, insn, pmatch_len_);

    case PARALLEL:
      switch (XVECLEN (x1, 0))
        {
        case 2:
          return peephole2_49 (x1, insn, pmatch_len_);

        case 6:
          if (peep2_current_count < 2
              || peep2_current_count < 3
              || peep2_current_count < 4
              || pattern35 (x1) != 0
              || !register_operand (operands[4], E_VOIDmode))
            return NULL;
          x5 = XVECEXP (x1, 0, 0);
          x6 = XEXP (x5, 1);
          x7 = XEXP (x6, 1);
          x8 = XEXP (x7, 0);
          operands[5] = x8;
          if (!register_operand (operands[5], E_VOIDmode))
            return NULL;
          x9 = XVECEXP (x1, 0, 1);
          x10 = XEXP (x9, 0);
          operands[6] = x10;
          if (!register_operand (operands[6], E_VOIDmode))
            return NULL;
          x11 = XVECEXP (x1, 0, 2);
          x12 = XEXP (x11, 0);
          operands[3] = x12;
          if (!immediate_operand (operands[3], E_SImode))
            return NULL;
          x13 = XVECEXP (x1, 0, 3);
          x14 = XEXP (x13, 0);
          operands[0] = x14;
          if (!register_operand (operands[0], E_VOIDmode))
            return NULL;
          x15 = XVECEXP (x1, 0, 4);
          x16 = XEXP (x15, 0);
          operands[1] = x16;
          if (!register_operand (operands[1], E_VOIDmode))
            return NULL;
          x17 = XVECEXP (x1, 0, 5);
          x18 = XEXP (x17, 0);
          operands[2] = x18;
          if (!register_operand (operands[2], E_VOIDmode))
            return NULL;
          x19 = PATTERN (peep2_next_insn (1));
          if (pattern1853 (x19) != 0
              || !
#line 26017 "../../gcc/config/i386/i386.md"
(peep2_reg_dead_p (4, operands[7]) && peep2_reg_dead_p (4, operands[8])))
            return NULL;
          *pmatch_len_ = 3;
          return gen_peephole2_197 (insn, operands);

        case 5:
          if (peep2_current_count < 2
              || peep2_current_count < 3
              || peep2_current_count < 4)
            return NULL;
          x5 = XVECEXP (x1, 0, 0);
          if (GET_CODE (x5) != SET)
            return NULL;
          x6 = XEXP (x5, 1);
          if (GET_CODE (x6) != IF_THEN_ELSE
              || pattern228 (x1) != 0
              || !register_operand (operands[6], E_VOIDmode))
            return NULL;
          x7 = XEXP (x6, 1);
          x8 = XEXP (x7, 0);
          x20 = XEXP (x8, 0);
          operands[4] = x20;
          if (!register_operand (operands[4], E_VOIDmode))
            return NULL;
          x21 = XEXP (x7, 1);
          x22 = XEXP (x21, 0);
          operands[5] = x22;
          if (!register_operand (operands[5], E_VOIDmode))
            return NULL;
          x9 = XVECEXP (x1, 0, 1);
          x10 = XEXP (x9, 0);
          operands[3] = x10;
          if (!immediate_operand (operands[3], E_SImode))
            return NULL;
          x11 = XVECEXP (x1, 0, 2);
          x12 = XEXP (x11, 0);
          operands[0] = x12;
          if (!register_operand (operands[0], E_VOIDmode))
            return NULL;
          x13 = XVECEXP (x1, 0, 3);
          x14 = XEXP (x13, 0);
          operands[1] = x14;
          if (!register_operand (operands[1], E_VOIDmode))
            return NULL;
          x15 = XVECEXP (x1, 0, 4);
          x16 = XEXP (x15, 0);
          operands[2] = x16;
          if (!register_operand (operands[2], E_VOIDmode))
            return NULL;
          x19 = PATTERN (peep2_next_insn (1));
          if (pattern1853 (x19) != 0
              || !
#line 26048 "../../gcc/config/i386/i386.md"
(peep2_reg_dead_p (4, operands[7]) && peep2_reg_dead_p (4, operands[8])))
            return NULL;
          *pmatch_len_ = 3;
          return gen_peephole2_198 (insn, operands);

        case 3:
          x5 = XVECEXP (x1, 0, 0);
          if (GET_CODE (x5) != SET)
            return NULL;
          x11 = XVECEXP (x1, 0, 2);
          if (GET_CODE (x11) != CLOBBER)
            return NULL;
          x6 = XEXP (x5, 1);
          switch (GET_CODE (x6))
            {
            case UNSPEC:
              if (peep2_current_count < 2
                  || XVECLEN (x6, 0) != 1
                  || XINT (x6, 1) != 92)
                return NULL;
              x9 = XVECEXP (x1, 0, 1);
              if (GET_CODE (x9) != SET)
                return NULL;
              x23 = XEXP (x9, 1);
              if (x23 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
                return NULL;
              x12 = XEXP (x11, 0);
              if (GET_CODE (x12) != REG
                  || REGNO (x12) != 17
                  || GET_MODE (x12) != E_CCmode)
                return NULL;
              x24 = XEXP (x5, 0);
              operands[0] = x24;
              x25 = XVECEXP (x6, 0, 0);
              operands[1] = x25;
              x10 = XEXP (x9, 0);
              operands[2] = x10;
              if (!general_reg_operand (operands[2], E_VOIDmode))
                return NULL;
              x19 = PATTERN (peep2_next_insn (1));
              if (GET_CODE (x19) != SET)
                return NULL;
              x26 = XEXP (x19, 0);
              operands[3] = x26;
              switch (GET_MODE (operands[0]))
                {
                case E_SImode:
                  if (!memory_operand (operands[0], E_SImode)
                      || GET_MODE (x6) != E_SImode
                      || !memory_operand (operands[1], E_SImode))
                    return NULL;
                  x27 = XEXP (x19, 1);
                  operands[4] = x27;
                  if (const0_operand (operands[4], E_VOIDmode)
                      && general_reg_operand (operands[3], E_VOIDmode)
                      && (
#line 27298 "../../gcc/config/i386/i386.md"
(GET_MODE (operands[2]) == word_mode
   && GET_MODE_SIZE (GET_MODE (operands[3])) <= UNITS_PER_WORD
   && peep2_reg_dead_p (0, operands[3])
   && peep2_reg_dead_p (1, operands[2])) && 
#line 1408 "../../gcc/config/i386/i386.md"
(ptr_mode == SImode)))
                    {
                      *pmatch_len_ = 1;
                      res = gen_peephole2_233 (insn, operands);
                      if (res != NULL_RTX)
                        return res;
                    }
                  if (general_gr_operand (operands[4], E_SImode)
                      && general_reg_operand (operands[3], E_SImode)
                      && (
#line 27359 "../../gcc/config/i386/i386.md"
(GET_MODE (operands[2]) == word_mode
   && peep2_reg_dead_p (0, operands[3])
   && peep2_reg_dead_p (1, operands[2])) && 
#line 1408 "../../gcc/config/i386/i386.md"
(ptr_mode == SImode)))
                    {
                      *pmatch_len_ = 1;
                      res = gen_peephole2_235 (insn, operands);
                      if (res != NULL_RTX)
                        return res;
                    }
                  if (general_gr_operand (operands[4], E_DImode)
                      && general_reg_operand (operands[3], E_DImode)
                      && (
#line 27359 "../../gcc/config/i386/i386.md"
(GET_MODE (operands[2]) == word_mode
   && peep2_reg_dead_p (0, operands[3])
   && peep2_reg_dead_p (1, operands[2])) && (((
#line 1408 "../../gcc/config/i386/i386.md"
(ptr_mode == SImode) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 1408 "../../gcc/config/i386/i386.md"
(ptr_mode == SImode))))
                    {
                      *pmatch_len_ = 1;
                      res = gen_peephole2_236 (insn, operands);
                      if (res != NULL_RTX)
                        return res;
                    }
                  if (address_no_seg_operand (operands[4], E_SImode)
                      && general_reg_operand (operands[3], E_SImode)
                      && (
#line 27414 "../../gcc/config/i386/i386.md"
(GET_MODE (operands[2]) == word_mode
   && peep2_reg_dead_p (0, operands[3])
   && peep2_reg_dead_p (1, operands[2])) && 
#line 1408 "../../gcc/config/i386/i386.md"
(ptr_mode == SImode)))
                    {
                      *pmatch_len_ = 1;
                      res = gen_peephole2_243 (insn, operands);
                      if (res != NULL_RTX)
                        return res;
                    }
                  if (address_no_seg_operand (operands[4], E_DImode)
                      && general_reg_operand (operands[3], E_DImode)
                      && (
#line 27414 "../../gcc/config/i386/i386.md"
(GET_MODE (operands[2]) == word_mode
   && peep2_reg_dead_p (0, operands[3])
   && peep2_reg_dead_p (1, operands[2])) && (((
#line 1408 "../../gcc/config/i386/i386.md"
(ptr_mode == SImode) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 1408 "../../gcc/config/i386/i386.md"
(ptr_mode == SImode))))
                    {
                      *pmatch_len_ = 1;
                      res = gen_peephole2_244 (insn, operands);
                      if (res != NULL_RTX)
                        return res;
                    }
                  if (!general_reg_operand (operands[3], E_DImode))
                    return NULL;
                  switch (pattern1779 (x27))
                    {
                    case 0:
                      if (!(
#line 27463 "../../gcc/config/i386/i386.md"
(TARGET_64BIT
   && GET_MODE (operands[2]) == word_mode
   && peep2_reg_dead_p (0, operands[3])
   && peep2_reg_dead_p (1, operands[2])) && 
#line 1408 "../../gcc/config/i386/i386.md"
(ptr_mode == SImode)))
                        return NULL;
                      *pmatch_len_ = 1;
                      return gen_peephole2_247 (insn, operands);

                    case 1:
                      if (!(
#line 27463 "../../gcc/config/i386/i386.md"
(TARGET_64BIT
   && GET_MODE (operands[2]) == word_mode
   && peep2_reg_dead_p (0, operands[3])
   && peep2_reg_dead_p (1, operands[2])) && 
#line 1408 "../../gcc/config/i386/i386.md"
(ptr_mode == SImode)))
                        return NULL;
                      *pmatch_len_ = 1;
                      return gen_peephole2_248 (insn, operands);

                    default:
                      return NULL;
                    }

                case E_DImode:
                  if (!memory_operand (operands[0], E_DImode)
                      || GET_MODE (x6) != E_DImode
                      || !memory_operand (operands[1], E_DImode))
                    return NULL;
                  x27 = XEXP (x19, 1);
                  operands[4] = x27;
                  if (const0_operand (operands[4], E_VOIDmode)
                      && general_reg_operand (operands[3], E_VOIDmode)
                      && (
#line 27298 "../../gcc/config/i386/i386.md"
(GET_MODE (operands[2]) == word_mode
   && GET_MODE_SIZE (GET_MODE (operands[3])) <= UNITS_PER_WORD
   && peep2_reg_dead_p (0, operands[3])
   && peep2_reg_dead_p (1, operands[2])) && 
#line 1408 "../../gcc/config/i386/i386.md"
(ptr_mode == DImode)))
                    {
                      *pmatch_len_ = 1;
                      res = gen_peephole2_234 (insn, operands);
                      if (res != NULL_RTX)
                        return res;
                    }
                  if (general_gr_operand (operands[4], E_SImode)
                      && general_reg_operand (operands[3], E_SImode)
                      && (
#line 27359 "../../gcc/config/i386/i386.md"
(GET_MODE (operands[2]) == word_mode
   && peep2_reg_dead_p (0, operands[3])
   && peep2_reg_dead_p (1, operands[2])) && 
#line 1408 "../../gcc/config/i386/i386.md"
(ptr_mode == DImode)))
                    {
                      *pmatch_len_ = 1;
                      res = gen_peephole2_237 (insn, operands);
                      if (res != NULL_RTX)
                        return res;
                    }
                  if (general_gr_operand (operands[4], E_DImode)
                      && general_reg_operand (operands[3], E_DImode)
                      && (
#line 27359 "../../gcc/config/i386/i386.md"
(GET_MODE (operands[2]) == word_mode
   && peep2_reg_dead_p (0, operands[3])
   && peep2_reg_dead_p (1, operands[2])) && (((
#line 1408 "../../gcc/config/i386/i386.md"
(ptr_mode == DImode) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 1408 "../../gcc/config/i386/i386.md"
(ptr_mode == DImode))))
                    {
                      *pmatch_len_ = 1;
                      res = gen_peephole2_238 (insn, operands);
                      if (res != NULL_RTX)
                        return res;
                    }
                  if (address_no_seg_operand (operands[4], E_SImode)
                      && general_reg_operand (operands[3], E_SImode)
                      && (
#line 27414 "../../gcc/config/i386/i386.md"
(GET_MODE (operands[2]) == word_mode
   && peep2_reg_dead_p (0, operands[3])
   && peep2_reg_dead_p (1, operands[2])) && 
#line 1408 "../../gcc/config/i386/i386.md"
(ptr_mode == DImode)))
                    {
                      *pmatch_len_ = 1;
                      res = gen_peephole2_245 (insn, operands);
                      if (res != NULL_RTX)
                        return res;
                    }
                  if (address_no_seg_operand (operands[4], E_DImode)
                      && general_reg_operand (operands[3], E_DImode)
                      && (
#line 27414 "../../gcc/config/i386/i386.md"
(GET_MODE (operands[2]) == word_mode
   && peep2_reg_dead_p (0, operands[3])
   && peep2_reg_dead_p (1, operands[2])) && (((
#line 1408 "../../gcc/config/i386/i386.md"
(ptr_mode == DImode) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 1408 "../../gcc/config/i386/i386.md"
(ptr_mode == DImode))))
                    {
                      *pmatch_len_ = 1;
                      res = gen_peephole2_246 (insn, operands);
                      if (res != NULL_RTX)
                        return res;
                    }
                  if (!general_reg_operand (operands[3], E_DImode))
                    return NULL;
                  switch (pattern1779 (x27))
                    {
                    case 0:
                      if (!(
#line 27463 "../../gcc/config/i386/i386.md"
(TARGET_64BIT
   && GET_MODE (operands[2]) == word_mode
   && peep2_reg_dead_p (0, operands[3])
   && peep2_reg_dead_p (1, operands[2])) && 
#line 1408 "../../gcc/config/i386/i386.md"
(ptr_mode == DImode)))
                        return NULL;
                      *pmatch_len_ = 1;
                      return gen_peephole2_249 (insn, operands);

                    case 1:
                      if (!(
#line 27463 "../../gcc/config/i386/i386.md"
(TARGET_64BIT
   && GET_MODE (operands[2]) == word_mode
   && peep2_reg_dead_p (0, operands[3])
   && peep2_reg_dead_p (1, operands[2])) && 
#line 1408 "../../gcc/config/i386/i386.md"
(ptr_mode == DImode)))
                        return NULL;
                      *pmatch_len_ = 1;
                      return gen_peephole2_250 (insn, operands);

                    default:
                      return NULL;
                    }

                default:
                  return NULL;
                }

            case PLUS:
              if (pattern414 (x5) != 0)
                return NULL;
              x9 = XVECEXP (x1, 0, 1);
              if (pattern227 (x9, 
E_CCmode, 
17) != 0)
                return NULL;
              x12 = XEXP (x11, 0);
              if (GET_CODE (x12) != MEM
                  || GET_MODE (x12) != E_BLKmode)
                return NULL;
              x28 = XEXP (x12, 0);
              if (GET_CODE (x28) != SCRATCH)
                return NULL;
              switch (pattern1449 (x5))
                {
                case 0:
                  if ((
#line 28464 "../../gcc/config/i386/i386.md"
((TARGET_SINGLE_PUSH || optimize_insn_for_size_p ())
   && INTVAL (operands[0]) == -GET_MODE_SIZE (word_mode)
   && !ix86_red_zone_used) && (((((((
#line 1403 "../../gcc/config/i386/i386.md"
(word_mode == SImode) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 1403 "../../gcc/config/i386/i386.md"
(word_mode == SImode)) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode))))
                    {
                      *pmatch_len_ = 0;
                      res = gen_peephole2_347 (insn, operands);
                      if (res != NULL_RTX)
                        return res;
                    }
                  if ((
#line 28464 "../../gcc/config/i386/i386.md"
((TARGET_SINGLE_PUSH || optimize_insn_for_size_p ())
   && INTVAL (operands[0]) == -GET_MODE_SIZE (word_mode)
   && !ix86_red_zone_used) && (((((((
#line 1403 "../../gcc/config/i386/i386.md"
(word_mode == DImode) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 1403 "../../gcc/config/i386/i386.md"
(word_mode == DImode)) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode))))
                    {
                      *pmatch_len_ = 0;
                      res = gen_peephole2_348 (insn, operands);
                      if (res != NULL_RTX)
                        return res;
                    }
                  if ((
#line 28478 "../../gcc/config/i386/i386.md"
((TARGET_DOUBLE_PUSH || optimize_insn_for_size_p ())
   && INTVAL (operands[0]) == -2*GET_MODE_SIZE (word_mode)
   && !ix86_red_zone_used) && ((((((((((
#line 1403 "../../gcc/config/i386/i386.md"
(word_mode == SImode) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 1403 "../../gcc/config/i386/i386.md"
(word_mode == SImode)) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 1403 "../../gcc/config/i386/i386.md"
(word_mode == SImode)) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode))))
                    {
                      *pmatch_len_ = 0;
                      res = gen_peephole2_351 (insn, operands);
                      if (res != NULL_RTX)
                        return res;
                    }
                  if ((
#line 28478 "../../gcc/config/i386/i386.md"
((TARGET_DOUBLE_PUSH || optimize_insn_for_size_p ())
   && INTVAL (operands[0]) == -2*GET_MODE_SIZE (word_mode)
   && !ix86_red_zone_used) && ((((((((((
#line 1403 "../../gcc/config/i386/i386.md"
(word_mode == DImode) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 1403 "../../gcc/config/i386/i386.md"
(word_mode == DImode)) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 1403 "../../gcc/config/i386/i386.md"
(word_mode == DImode)) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode))))
                    {
                      *pmatch_len_ = 0;
                      res = gen_peephole2_352 (insn, operands);
                      if (res != NULL_RTX)
                        return res;
                    }
                  if ((
#line 28520 "../../gcc/config/i386/i386.md"
((TARGET_SINGLE_POP || optimize_insn_for_size_p ())
   && INTVAL (operands[0]) == GET_MODE_SIZE (word_mode)) && (((((((
#line 1403 "../../gcc/config/i386/i386.md"
(word_mode == SImode) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 1403 "../../gcc/config/i386/i386.md"
(word_mode == SImode)) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode))))
                    {
                      *pmatch_len_ = 0;
                      res = gen_peephole2_363 (insn, operands);
                      if (res != NULL_RTX)
                        return res;
                    }
                  if ((
#line 28520 "../../gcc/config/i386/i386.md"
((TARGET_SINGLE_POP || optimize_insn_for_size_p ())
   && INTVAL (operands[0]) == GET_MODE_SIZE (word_mode)) && (((((((
#line 1403 "../../gcc/config/i386/i386.md"
(word_mode == DImode) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 1403 "../../gcc/config/i386/i386.md"
(word_mode == DImode)) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode))))
                    {
                      *pmatch_len_ = 0;
                      res = gen_peephole2_364 (insn, operands);
                      if (res != NULL_RTX)
                        return res;
                    }
                  if ((
#line 28535 "../../gcc/config/i386/i386.md"
((TARGET_DOUBLE_POP || optimize_insn_for_size_p ())
   && INTVAL (operands[0]) == 2*GET_MODE_SIZE (word_mode)) && ((((((((((
#line 1403 "../../gcc/config/i386/i386.md"
(word_mode == SImode) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 1403 "../../gcc/config/i386/i386.md"
(word_mode == SImode)) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 1403 "../../gcc/config/i386/i386.md"
(word_mode == SImode)) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode))))
                    {
                      *pmatch_len_ = 0;
                      res = gen_peephole2_367 (insn, operands);
                      if (res != NULL_RTX)
                        return res;
                    }
                  if ((
#line 28535 "../../gcc/config/i386/i386.md"
((TARGET_DOUBLE_POP || optimize_insn_for_size_p ())
   && INTVAL (operands[0]) == 2*GET_MODE_SIZE (word_mode)) && ((((((((((
#line 1403 "../../gcc/config/i386/i386.md"
(word_mode == DImode) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 1403 "../../gcc/config/i386/i386.md"
(word_mode == DImode)) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 1403 "../../gcc/config/i386/i386.md"
(word_mode == DImode)) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode))))
                    {
                      *pmatch_len_ = 0;
                      res = gen_peephole2_368 (insn, operands);
                      if (res != NULL_RTX)
                        return res;
                    }
                  if ((
#line 28548 "../../gcc/config/i386/i386.md"
(optimize_insn_for_size_p ()
   && INTVAL (operands[0]) == 2*GET_MODE_SIZE (word_mode)) && ((((((((((
#line 1403 "../../gcc/config/i386/i386.md"
(word_mode == SImode) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 1403 "../../gcc/config/i386/i386.md"
(word_mode == SImode)) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 1403 "../../gcc/config/i386/i386.md"
(word_mode == SImode)) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode))))
                    {
                      *pmatch_len_ = 0;
                      res = gen_peephole2_371 (insn, operands);
                      if (res != NULL_RTX)
                        return res;
                    }
                  if (!(
#line 28548 "../../gcc/config/i386/i386.md"
(optimize_insn_for_size_p ()
   && INTVAL (operands[0]) == 2*GET_MODE_SIZE (word_mode)) && ((((((((((
#line 1403 "../../gcc/config/i386/i386.md"
(word_mode == DImode) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 1403 "../../gcc/config/i386/i386.md"
(word_mode == DImode)) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 1403 "../../gcc/config/i386/i386.md"
(word_mode == DImode)) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode))))
                    return NULL;
                  *pmatch_len_ = 0;
                  return gen_peephole2_372 (insn, operands);

                case 1:
                  if ((
#line 28464 "../../gcc/config/i386/i386.md"
((TARGET_SINGLE_PUSH || optimize_insn_for_size_p ())
   && INTVAL (operands[0]) == -GET_MODE_SIZE (word_mode)
   && !ix86_red_zone_used) && (((((((
#line 1403 "../../gcc/config/i386/i386.md"
(word_mode == SImode) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 1403 "../../gcc/config/i386/i386.md"
(word_mode == SImode)) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode))))
                    {
                      *pmatch_len_ = 0;
                      res = gen_peephole2_349 (insn, operands);
                      if (res != NULL_RTX)
                        return res;
                    }
                  if ((
#line 28464 "../../gcc/config/i386/i386.md"
((TARGET_SINGLE_PUSH || optimize_insn_for_size_p ())
   && INTVAL (operands[0]) == -GET_MODE_SIZE (word_mode)
   && !ix86_red_zone_used) && (((((((
#line 1403 "../../gcc/config/i386/i386.md"
(word_mode == DImode) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 1403 "../../gcc/config/i386/i386.md"
(word_mode == DImode)) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode))))
                    {
                      *pmatch_len_ = 0;
                      res = gen_peephole2_350 (insn, operands);
                      if (res != NULL_RTX)
                        return res;
                    }
                  if ((
#line 28478 "../../gcc/config/i386/i386.md"
((TARGET_DOUBLE_PUSH || optimize_insn_for_size_p ())
   && INTVAL (operands[0]) == -2*GET_MODE_SIZE (word_mode)
   && !ix86_red_zone_used) && ((((((((((
#line 1403 "../../gcc/config/i386/i386.md"
(word_mode == SImode) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 1403 "../../gcc/config/i386/i386.md"
(word_mode == SImode)) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 1403 "../../gcc/config/i386/i386.md"
(word_mode == SImode)) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode))))
                    {
                      *pmatch_len_ = 0;
                      res = gen_peephole2_353 (insn, operands);
                      if (res != NULL_RTX)
                        return res;
                    }
                  if ((
#line 28478 "../../gcc/config/i386/i386.md"
((TARGET_DOUBLE_PUSH || optimize_insn_for_size_p ())
   && INTVAL (operands[0]) == -2*GET_MODE_SIZE (word_mode)
   && !ix86_red_zone_used) && ((((((((((
#line 1403 "../../gcc/config/i386/i386.md"
(word_mode == DImode) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 1403 "../../gcc/config/i386/i386.md"
(word_mode == DImode)) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 1403 "../../gcc/config/i386/i386.md"
(word_mode == DImode)) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode))))
                    {
                      *pmatch_len_ = 0;
                      res = gen_peephole2_354 (insn, operands);
                      if (res != NULL_RTX)
                        return res;
                    }
                  if ((
#line 28520 "../../gcc/config/i386/i386.md"
((TARGET_SINGLE_POP || optimize_insn_for_size_p ())
   && INTVAL (operands[0]) == GET_MODE_SIZE (word_mode)) && (((((((
#line 1403 "../../gcc/config/i386/i386.md"
(word_mode == SImode) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 1403 "../../gcc/config/i386/i386.md"
(word_mode == SImode)) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode))))
                    {
                      *pmatch_len_ = 0;
                      res = gen_peephole2_365 (insn, operands);
                      if (res != NULL_RTX)
                        return res;
                    }
                  if ((
#line 28520 "../../gcc/config/i386/i386.md"
((TARGET_SINGLE_POP || optimize_insn_for_size_p ())
   && INTVAL (operands[0]) == GET_MODE_SIZE (word_mode)) && (((((((
#line 1403 "../../gcc/config/i386/i386.md"
(word_mode == DImode) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 1403 "../../gcc/config/i386/i386.md"
(word_mode == DImode)) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode))))
                    {
                      *pmatch_len_ = 0;
                      res = gen_peephole2_366 (insn, operands);
                      if (res != NULL_RTX)
                        return res;
                    }
                  if ((
#line 28535 "../../gcc/config/i386/i386.md"
((TARGET_DOUBLE_POP || optimize_insn_for_size_p ())
   && INTVAL (operands[0]) == 2*GET_MODE_SIZE (word_mode)) && ((((((((((
#line 1403 "../../gcc/config/i386/i386.md"
(word_mode == SImode) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 1403 "../../gcc/config/i386/i386.md"
(word_mode == SImode)) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 1403 "../../gcc/config/i386/i386.md"
(word_mode == SImode)) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode))))
                    {
                      *pmatch_len_ = 0;
                      res = gen_peephole2_369 (insn, operands);
                      if (res != NULL_RTX)
                        return res;
                    }
                  if ((
#line 28535 "../../gcc/config/i386/i386.md"
((TARGET_DOUBLE_POP || optimize_insn_for_size_p ())
   && INTVAL (operands[0]) == 2*GET_MODE_SIZE (word_mode)) && ((((((((((
#line 1403 "../../gcc/config/i386/i386.md"
(word_mode == DImode) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 1403 "../../gcc/config/i386/i386.md"
(word_mode == DImode)) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 1403 "../../gcc/config/i386/i386.md"
(word_mode == DImode)) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode))))
                    {
                      *pmatch_len_ = 0;
                      res = gen_peephole2_370 (insn, operands);
                      if (res != NULL_RTX)
                        return res;
                    }
                  if ((
#line 28548 "../../gcc/config/i386/i386.md"
(optimize_insn_for_size_p ()
   && INTVAL (operands[0]) == 2*GET_MODE_SIZE (word_mode)) && ((((((((((
#line 1403 "../../gcc/config/i386/i386.md"
(word_mode == SImode) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 1403 "../../gcc/config/i386/i386.md"
(word_mode == SImode)) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 1403 "../../gcc/config/i386/i386.md"
(word_mode == SImode)) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode))))
                    {
                      *pmatch_len_ = 0;
                      res = gen_peephole2_373 (insn, operands);
                      if (res != NULL_RTX)
                        return res;
                    }
                  if (!(
#line 28548 "../../gcc/config/i386/i386.md"
(optimize_insn_for_size_p ()
   && INTVAL (operands[0]) == 2*GET_MODE_SIZE (word_mode)) && ((((((((((
#line 1403 "../../gcc/config/i386/i386.md"
(word_mode == DImode) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 1403 "../../gcc/config/i386/i386.md"
(word_mode == DImode)) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 1403 "../../gcc/config/i386/i386.md"
(word_mode == DImode)) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode))))
                    return NULL;
                  *pmatch_len_ = 0;
                  return gen_peephole2_374 (insn, operands);

                default:
                  return NULL;
                }

            default:
              return NULL;
            }

        default:
          return NULL;
        }

    default:
      return NULL;
    }
}
