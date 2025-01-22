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
pattern3 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  operands[3] = x3;
  if (!const_int_operand (operands[3], E_QImode))
    return -1;
  return pattern2 (x1); /* [-1, 1] */
}

int
pattern10 (rtx x1, int *pnum_clobbers)
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
    case E_TImode:
      if (pnum_clobbers == NULL
          || pattern6 (x3, 
E_TImode) != 0)
        return -1;
      return 0;

    case E_QImode:
      if (pnum_clobbers == NULL
          || pattern6 (x3, 
E_QImode) != 0)
        return -1;
      return 1;

    case E_HImode:
      if (pnum_clobbers == NULL
          || pattern6 (x3, 
E_HImode) != 0)
        return -1;
      return 2;

    case E_V4HImode:
      if (pattern7 (x3, 
E_V4HImode) != 0)
        return -1;
      return 3;

    case E_V2SImode:
      if (pattern7 (x3, 
E_V2SImode) != 0)
        return -1;
      return 4;

    case E_V8QImode:
      if (pattern8 (x3, 
E_V8QImode) != 0)
        return -1;
      return 5;

    case E_V4QImode:
      if (pattern7 (x3, 
E_V4QImode) != 0)
        return -1;
      return 6;

    case E_V2QImode:
      if (pattern7 (x3, 
E_V2QImode) != 0)
        return -1;
      return 7;

    case E_V2HImode:
      if (pattern7 (x3, 
E_V2HImode) != 0)
        return -1;
      return 8;

    default:
      return -1;
    }
}

int
pattern31 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1
      || !nonimmediate_operand (operands[1], i1)
      || !const_0_to_255_operand (operands[2], E_SImode))
    return -1;
  return 0;
}

int
pattern34 (rtx x1)
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
      operands[1] = x4;
      switch (GET_MODE (operands[0]))
        {
        case E_V16HImode:
          if (!register_operand (operands[0], E_V16HImode)
              || GET_MODE (x3) != E_V16HImode
              || !nonimmediate_operand (operands[1], E_V16QImode))
            return -1;
          return 0;

        case E_V32HImode:
          if (!register_operand (operands[0], E_V32HImode)
              || GET_MODE (x3) != E_V32HImode
              || !nonimmediate_operand (operands[1], E_V32QImode))
            return -1;
          return 1;

        case E_V8HImode:
          if (!register_operand (operands[0], E_V8HImode)
              || GET_MODE (x3) != E_V8HImode
              || !memory_operand (operands[1], E_V8QImode))
            return -1;
          return 2;

        case E_V16SImode:
          if (!register_operand (operands[0], E_V16SImode)
              || GET_MODE (x3) != E_V16SImode)
            return -1;
          switch (GET_MODE (operands[1]))
            {
            case E_V16QImode:
              if (!nonimmediate_operand (operands[1], E_V16QImode))
                return -1;
              return 3;

            case E_V16HImode:
              if (!nonimmediate_operand (operands[1], E_V16HImode))
                return -1;
              return 4;

            default:
              return -1;
            }

        case E_V8SImode:
          if (!register_operand (operands[0], E_V8SImode)
              || GET_MODE (x3) != E_V8SImode)
            return -1;
          switch (GET_MODE (operands[1]))
            {
            case E_V8QImode:
              if (!memory_operand (operands[1], E_V8QImode))
                return -1;
              return 5;

            case E_V8HImode:
              if (!nonimmediate_operand (operands[1], E_V8HImode))
                return -1;
              return 6;

            default:
              return -1;
            }

        case E_V4SImode:
          if (!register_operand (operands[0], E_V4SImode)
              || GET_MODE (x3) != E_V4SImode)
            return -1;
          switch (GET_MODE (operands[1]))
            {
            case E_V4QImode:
              if (!memory_operand (operands[1], E_V4QImode))
                return -1;
              return 7;

            case E_V4HImode:
              if (!memory_operand (operands[1], E_V4HImode))
                return -1;
              return 8;

            default:
              return -1;
            }

        case E_V8DImode:
          if (!register_operand (operands[0], E_V8DImode)
              || GET_MODE (x3) != E_V8DImode)
            return -1;
          switch (GET_MODE (operands[1]))
            {
            case E_V8QImode:
              if (!memory_operand (operands[1], E_V8QImode))
                return -1;
              return 9;

            case E_V8HImode:
              if (!nonimmediate_operand (operands[1], E_V8HImode))
                return -1;
              return 10;

            case E_V8SImode:
              if (!nonimmediate_operand (operands[1], E_V8SImode))
                return -1;
              return 11;

            default:
              return -1;
            }

        case E_V4DImode:
          if (!register_operand (operands[0], E_V4DImode)
              || GET_MODE (x3) != E_V4DImode)
            return -1;
          switch (GET_MODE (operands[1]))
            {
            case E_V4QImode:
              if (!memory_operand (operands[1], E_V4QImode))
                return -1;
              return 12;

            case E_V4HImode:
              if (!memory_operand (operands[1], E_V4HImode))
                return -1;
              return 13;

            case E_V4SImode:
              if (!nonimmediate_operand (operands[1], E_V4SImode))
                return -1;
              return 14;

            default:
              return -1;
            }

        case E_V2DImode:
          if (!register_operand (operands[0], E_V2DImode)
              || GET_MODE (x3) != E_V2DImode)
            return -1;
          switch (GET_MODE (operands[1]))
            {
            case E_V2QImode:
              if (!memory_operand (operands[1], E_V2QImode))
                return -1;
              return 15;

            case E_V2HImode:
              if (!memory_operand (operands[1], E_V2HImode))
                return -1;
              return 16;

            case E_V2SImode:
              if (!memory_operand (operands[1], E_V2SImode))
                return -1;
              return 17;

            default:
              return -1;
            }

        default:
          return -1;
        }

    case VEC_SELECT:
      x5 = XEXP (x4, 1);
      if (GET_CODE (x5) != PARALLEL)
        return -1;
      return 18;

    default:
      return -1;
    }
}

int
pattern86 (rtx x1, int *pnum_clobbers)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7;
  int res ATTRIBUTE_UNUSED;
  if (pnum_clobbers == NULL)
    return -1;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  operands[2] = x3;
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
  operands[1] = x7;
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
pattern93 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) != E_CCCmode)
    return -1;
  x3 = XEXP (x1, 0);
  if (GET_CODE (x3) != REG
      || REGNO (x3) != 17
      || GET_MODE (x3) != E_CCCmode)
    return -1;
  x4 = XVECEXP (x2, 0, 0);
  operands[0] = x4;
  if (!register_operand (operands[0], E_SImode))
    return -1;
  x5 = XVECEXP (x2, 0, 1);
  operands[1] = x5;
  if (!register_operand (operands[1], E_DImode))
    return -1;
  return 0;
}

int
pattern101 (rtx x1, int *pnum_clobbers)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  int res ATTRIBUTE_UNUSED;
  if (pnum_clobbers == NULL)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != E_DImode)
    return -1;
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) != ASHIFT
      || GET_MODE (x3) != E_DImode)
    return -1;
  x4 = XEXP (x3, 0);
  if (GET_CODE (x4) != ZERO_EXTEND
      || GET_MODE (x4) != E_DImode)
    return -1;
  x5 = XEXP (x2, 1);
  if (GET_CODE (x5) != ZERO_EXTEND
      || GET_MODE (x5) != E_DImode)
    return -1;
  return pattern84 (x1, 
E_DImode, 
E_SImode); /* [-1, 1] */
}

int
pattern110 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  if (maybe_ne (SUBREG_BYTE (x2), 0)
      || GET_MODE (x2) != E_HImode)
    return -1;
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) != UNSPEC
      || XVECLEN (x3, 0) != 1
      || XINT (x3, 1) != 49
      || GET_MODE (x3) != E_SImode
      || !register_operand (operands[0], E_SImode)
      || GET_MODE (x1) != E_SImode)
    return -1;
  x4 = XVECEXP (x3, 0, 0);
  operands[1] = x4;
  if (!register_operand (operands[1], E_V16QImode))
    return -1;
  return 0;
}

int
pattern117 (rtx x1, int *pnum_clobbers)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  operands[1] = x2;
  x3 = XEXP (x1, 1);
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
    case LABEL_REF:
    case SYMBOL_REF:
    case HIGH:
      return 0;

    case AND:
      if (pnum_clobbers == NULL
          || GET_MODE (x3) != E_QImode)
        return -1;
      res = pattern115 (x1);
      if (res >= 0)
        return res + 1; /* [1, 2] */
      return -1;

    case PLUS:
      res = pattern19 (x1, pnum_clobbers);
      if (res >= 0)
        return res + 3; /* [3, 4] */
      return -1;

    case MINUS:
      if (pnum_clobbers == NULL
          || GET_MODE (x3) != E_QImode)
        return -1;
      res = pattern116 (x1);
      if (res >= 0)
        return res + 5; /* [5, 6] */
      return -1;

    default:
      return -1;
    }
}

int
pattern133 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
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
        case E_V8HFmode:
          return 0;

        case E_V16HFmode:
          return 1;

        case E_V32HFmode:
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

        default:
          return -1;
        }

    case VEC_SELECT:
      if (GET_MODE (x5) != E_V2SImode)
        return -1;
      x6 = XEXP (x5, 1);
      if (GET_CODE (x6) != PARALLEL
          || XVECLEN (x6, 0) != 2)
        return -1;
      x7 = XVECEXP (x6, 0, 0);
      if (x7 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
        return -1;
      x8 = XVECEXP (x6, 0, 1);
      if (x8 != const_int_rtx[MAX_SAVED_CONST_INT + 1]
          || !register_operand (operands[0], E_V2DFmode)
          || GET_MODE (x1) != E_V2DFmode
          || GET_MODE (x4) != E_V2DFmode)
        return -1;
      x9 = XEXP (x5, 0);
      operands[1] = x9;
      if (!nonimmediate_operand (operands[1], E_V4SImode)
          || !nonimm_or_0_operand (operands[2], E_V2DFmode)
          || !register_operand (operands[3], E_QImode))
        return -1;
      return 9;

    default:
      return -1;
    }
}

int
pattern149 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1
      || !register_operand (operands[1], i1)
      || !vector_operand (operands[2], i1))
    return -1;
  return 0;
}

int
pattern152 (rtx x1)
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
    case E_V32HFmode:
      return pattern151 (x3, 
E_V32HFmode); /* [-1, 0] */

    case E_V16HFmode:
      if (pattern151 (x3, 
E_V16HFmode) != 0)
        return -1;
      return 1;

    case E_V8HFmode:
      if (pattern151 (x3, 
E_V8HFmode) != 0)
        return -1;
      return 2;

    default:
      return -1;
    }
}

int
pattern157 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) != i1)
    return -1;
  x3 = XEXP (x1, 0);
  operands[0] = x3;
  if (!register_operand (operands[0], i1))
    return -1;
  x4 = XVECEXP (x2, 0, 0);
  operands[1] = x4;
  if (!register_operand (operands[1], i1))
    return -1;
  x5 = XVECEXP (x2, 0, 1);
  operands[2] = x5;
  if (!vector_operand (operands[2], i1))
    return -1;
  return 0;
}

int
pattern164 (rtx x1)
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
  if (!const_0_to_255_operand (operands[2], E_SImode))
    return -1;
  switch (GET_MODE (operands[0]))
    {
    case E_V32BFmode:
      if (!register_operand (operands[0], E_V32BFmode)
          || GET_MODE (x3) != E_V32BFmode
          || !nonimmediate_operand (operands[1], E_V32BFmode))
        return -1;
      return 0;

    case E_V16BFmode:
      if (!register_operand (operands[0], E_V16BFmode)
          || GET_MODE (x3) != E_V16BFmode
          || !nonimmediate_operand (operands[1], E_V16BFmode))
        return -1;
      return 1;

    case E_V8BFmode:
      if (!register_operand (operands[0], E_V8BFmode)
          || GET_MODE (x3) != E_V8BFmode
          || !nonimmediate_operand (operands[1], E_V8BFmode))
        return -1;
      return 2;

    default:
      return -1;
    }
}

int
pattern179 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1
      || !bcst_vector_operand (operands[1], i1)
      || !bcst_vector_operand (operands[2], i1))
    return -1;
  return 0;
}

int
pattern184 (rtx x1, machine_mode i1, machine_mode i2)
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
      || !nonimmediate_operand (operands[2], i2))
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
pattern190 (rtx x1, machine_mode i1, machine_mode i2, machine_mode i3)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i3)
      || GET_MODE (x1) != i3)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != i3)
    return -1;
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) != i2
      || !nonimmediate_operand (operands[1], i1))
    return -1;
  x4 = XEXP (x1, 1);
  if (GET_MODE (x4) != i3)
    return -1;
  x5 = XEXP (x4, 0);
  if (GET_MODE (x5) != i2
      || !nonimmediate_operand (operands[2], i1))
    return -1;
  return 0;
}

int
pattern194 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  operands[0] = x2;
  x3 = XEXP (x1, 1);
  x4 = XEXP (x3, 1);
  x5 = XEXP (x4, 0);
  operands[2] = x5;
  if (!register_operand (operands[2], E_QImode))
    return -1;
  x6 = XEXP (x4, 1);
  operands[3] = x6;
  if (!const_int_operand (operands[3], E_QImode))
    return -1;
  switch (GET_MODE (operands[0]))
    {
    case E_DImode:
      if (GET_MODE (x3) != E_DImode)
        return -1;
      return 0;

    case E_TImode:
      if (!register_operand (operands[0], E_TImode)
          || GET_MODE (x3) != E_TImode
          || !register_operand (operands[1], E_TImode))
        return -1;
      return 1;

    case E_SImode:
      if (!nonimmediate_operand (operands[0], E_SImode)
          || GET_MODE (x3) != E_SImode
          || !nonimmediate_operand (operands[1], E_SImode))
        return -1;
      return 2;

    default:
      return -1;
    }
}

int
pattern195 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  switch (GET_MODE (operands[0]))
    {
    case E_SImode:
      if (!nonimmediate_operand (operands[0], E_SImode)
          || GET_MODE (x1) != E_SImode
          || !nonimmediate_operand (operands[1], E_SImode))
        return -1;
      return 0;

    case E_DImode:
      if (!nonimmediate_operand (operands[0], E_DImode)
          || GET_MODE (x1) != E_DImode
          || !nonimmediate_operand (operands[1], E_DImode))
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern199 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  operands[1] = x3;
  x4 = XEXP (x2, 1);
  switch (GET_CODE (x4))
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
      return 0;

    case AND:
      if (GET_MODE (x4) != E_QImode)
        return -1;
      res = pattern194 (x1);
      if (res >= 0)
        return res + 1; /* [1, 3] */
      return -1;

    case PLUS:
      if (GET_MODE (x4) != E_QImode)
        return -1;
      res = pattern196 (x1);
      if (res >= 0)
        return res + 4; /* [4, 5] */
      return -1;

    case MINUS:
      if (GET_MODE (x4) != E_QImode)
        return -1;
      res = pattern197 (x1);
      if (res >= 0)
        return res + 6; /* [6, 7] */
      return -1;

    default:
      return -1;
    }
}

int
pattern208 (rtx x1, machine_mode i1)
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
pattern211 (rtx x1)
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
  x7 = XVECEXP (x1, 0, 1);
  switch (GET_CODE (x7))
    {
    case CLOBBER:
      x8 = XEXP (x7, 0);
      if (GET_CODE (x8) != REG
          || REGNO (x8) != 17
          || GET_MODE (x8) != E_CCmode)
        return -1;
      switch (GET_MODE (operands[0]))
        {
        case E_DImode:
          return pattern208 (x4, 
E_DImode); /* [-1, 0] */

        case E_TImode:
          if (pattern208 (x4, 
E_TImode) != 0)
            return -1;
          return 1;

        case E_QImode:
          if (pattern208 (x4, 
E_QImode) != 0)
            return -1;
          return 2;

        case E_HImode:
          if (pattern208 (x4, 
E_HImode) != 0)
            return -1;
          return 3;

        case E_SImode:
          if (pattern208 (x4, 
E_SImode) != 0)
            return -1;
          return 4;

        default:
          return -1;
        }

    case UNSPEC:
      if (pattern210 (x1) != 0)
        return -1;
      return 5;

    default:
      return -1;
    }
}

int
pattern228 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12, x13, x14, x15;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) != E_CCmode)
    return -1;
  x4 = XEXP (x3, 0);
  if (GET_CODE (x4) != NE)
    return -1;
  x5 = XEXP (x4, 1);
  if (x5 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
    return -1;
  x6 = XEXP (x3, 1);
  if (GET_CODE (x6) != COMPARE
      || GET_MODE (x6) != E_CCmode)
    return -1;
  x7 = XEXP (x6, 0);
  if (GET_CODE (x7) != MEM
      || GET_MODE (x7) != E_BLKmode)
    return -1;
  x8 = XEXP (x6, 1);
  if (GET_CODE (x8) != MEM
      || GET_MODE (x8) != E_BLKmode)
    return -1;
  x9 = XEXP (x3, 2);
  if (GET_CODE (x9) != REG
      || REGNO (x9) != 17
      || GET_MODE (x9) != E_CCmode)
    return -1;
  x10 = XEXP (x2, 0);
  if (GET_CODE (x10) != REG
      || REGNO (x10) != 17
      || GET_MODE (x10) != E_CCmode)
    return -1;
  x11 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x11) != USE)
    return -1;
  x12 = XVECEXP (x1, 0, 2);
  if (GET_CODE (x12) != CLOBBER)
    return -1;
  x13 = XVECEXP (x1, 0, 3);
  if (GET_CODE (x13) != CLOBBER)
    return -1;
  x14 = XVECEXP (x1, 0, 4);
  if (GET_CODE (x14) != CLOBBER)
    return -1;
  x15 = XEXP (x4, 0);
  operands[6] = x15;
  return 0;
}

int
pattern249 (rtx x1)
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
      operands[2] = x5;
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
      switch (GET_MODE (x8))
        {
        case E_HImode:
          if (GET_MODE (x2) != E_HImode
              || !extract_operator (operands[2], E_HImode))
            return -1;
          return 0;

        case E_SImode:
          if (GET_MODE (x2) != E_SImode
              || !extract_operator (operands[2], E_SImode))
            return -1;
          return 1;

        case E_DImode:
          if (GET_MODE (x2) != E_DImode
              || !extract_operator (operands[2], E_DImode))
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
pattern279 (rtx x1, int *pnum_clobbers)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  switch (GET_MODE (operands[0]))
    {
    case E_SImode:
      return pattern278 (x1); /* [-1, 1] */

    case E_DImode:
      if (!register_operand (operands[0], E_DImode)
          || GET_MODE (x1) != E_DImode)
        return -1;
      x2 = XEXP (x1, 0);
      switch (GET_MODE (x2))
        {
        case E_QImode:
          if (!nonimmediate_operand (operands[1], E_QImode))
            return -1;
          return 2;

        case E_HImode:
          if (!nonimmediate_operand (operands[1], E_HImode))
            return -1;
          return 3;

        case E_SImode:
          if (pnum_clobbers == NULL
              || !nonimmediate_operand (operands[1], E_SImode))
            return -1;
          return 4;

        default:
          return -1;
        }

    default:
      return -1;
    }
}

int
pattern293 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (!memory_operand (operands[0], E_SImode)
      || GET_MODE (x1) != E_SImode)
    return -1;
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case E_V4QImode:
      switch (GET_MODE (operands[1]))
        {
        case E_V4SImode:
          if (!register_operand (operands[1], E_V4SImode))
            return -1;
          return 0;

        case E_V4DImode:
          if (!register_operand (operands[1], E_V4DImode))
            return -1;
          return 1;

        default:
          return -1;
        }

    case E_V2HImode:
      if (!register_operand (operands[1], E_V2DImode))
        return -1;
      return 2;

    default:
      return -1;
    }
}

int
pattern303 (rtx x1, machine_mode i1)
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
      || !register_operand (operands[1], i1)
      || !nonimmediate_operand (operands[2], i1)
      || !nonimm_or_0_operand (operands[3], i1))
    return -1;
  return 0;
}

int
pattern308 (rtx x1, machine_mode i1)
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
  if (GET_MODE (x3) != E_SImode
      || !nonimmediate_operand (operands[1], E_HImode)
      || !const0_operand (operands[2], i1))
    return -1;
  return 0;
}

int
pattern316 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1
      || !float_vector_all_ones_operand (operands[1], i1)
      || !const0_operand (operands[2], i1)
      || !register_operand (operands[3], i1)
      || !nonimmediate_operand (operands[4], i1))
    return -1;
  return 0;
}

int
pattern320 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  operands[1] = x2;
  switch (GET_MODE (operands[0]))
    {
    case E_V16SFmode:
      if (!register_operand (operands[0], E_V16SFmode)
          || GET_MODE (x1) != E_V16SFmode
          || !nonimmediate_operand (operands[1], E_V16SFmode))
        return -1;
      return 0;

    case E_V8SFmode:
      if (!register_operand (operands[0], E_V8SFmode)
          || GET_MODE (x1) != E_V8SFmode
          || !nonimmediate_operand (operands[1], E_V8SFmode))
        return -1;
      return 1;

    case E_V4SFmode:
      if (!register_operand (operands[0], E_V4SFmode)
          || GET_MODE (x1) != E_V4SFmode
          || !nonimmediate_operand (operands[1], E_V4SFmode))
        return -1;
      return 2;

    case E_V8DFmode:
      if (!register_operand (operands[0], E_V8DFmode)
          || GET_MODE (x1) != E_V8DFmode
          || !nonimmediate_operand (operands[1], E_V8DFmode))
        return -1;
      return 3;

    case E_V4DFmode:
      if (!register_operand (operands[0], E_V4DFmode)
          || GET_MODE (x1) != E_V4DFmode
          || !nonimmediate_operand (operands[1], E_V4DFmode))
        return -1;
      return 4;

    case E_V2DFmode:
      if (!register_operand (operands[0], E_V2DFmode)
          || GET_MODE (x1) != E_V2DFmode
          || !nonimmediate_operand (operands[1], E_V2DFmode))
        return -1;
      return 5;

    default:
      return -1;
    }
}

int
pattern331 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  int res ATTRIBUTE_UNUSED;
  if (GET_MODE (x1) != i2)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != i2)
    return -1;
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) != i1)
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
pattern334 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != i1
      || !bcst_vector_operand (operands[1], i1))
    return -1;
  x3 = XEXP (x1, 1);
  if (GET_MODE (x3) != i1
      || !bcst_vector_operand (operands[2], i1))
    return -1;
  return 0;
}

int
pattern338 (rtx x1)
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
  operands[0] = x5;
  return 0;
}

int
pattern340 (rtx x1, int *pnum_clobbers, rtx_code i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7;
  int res ATTRIBUTE_UNUSED;
  if (pnum_clobbers == NULL)
    return -1;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) != E_SImode)
    return -1;
  x5 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x5) != SET)
    return -1;
  x6 = XEXP (x5, 1);
  if (GET_CODE (x6) != i1
      || GET_MODE (x6) != E_SImode)
    return -1;
  x7 = XEXP (x2, 0);
  operands[0] = x7;
  if (!register_operand (operands[0], E_DImode)
      || GET_MODE (x3) != E_DImode)
    return -1;
  return 0;
}

int
pattern345 (rtx x1)
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
  x5 = XEXP (x4, 0);
  operands[0] = x5;
  x6 = XEXP (x4, 1);
  x7 = XEXP (x6, 0);
  x8 = XEXP (x7, 0);
  operands[1] = x8;
  return 0;
}

int
pattern351 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (GET_CODE (x1) != CLOBBER)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_CODE (x2) != REG
      || REGNO (x2) != 17
      || GET_MODE (x2) != E_CCmode)
    return -1;
  return 0;
}

int
pattern353 (rtx x1, machine_mode i1, machine_mode i2)
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
  if (GET_MODE (x3) != i2)
    return -1;
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) != i2
      || !nonimmediate_operand (operands[2], i1))
    return -1;
  x5 = XEXP (x2, 1);
  if (GET_MODE (x5) != i2
      || !nonimmediate_operand (operands[4], i1))
    return -1;
  x6 = XEXP (x1, 1);
  if (GET_MODE (x6) != i2
      || !nonimmediate_operand (operands[1], i1))
    return -1;
  return 0;
}

int
pattern357 (rtx x1, machine_mode i1)
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
pattern362 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12, x13;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) != i1)
    return -1;
  x4 = XEXP (x3, 0);
  x5 = XEXP (x4, 0);
  x6 = XVECEXP (x5, 0, 0);
  operands[0] = x6;
  x7 = XVECEXP (x5, 0, 1);
  operands[2] = x7;
  if (!const_int_operand (operands[2], E_SImode))
    return -1;
  x8 = XEXP (x4, 1);
  operands[1] = x8;
  x9 = XVECEXP (x1, 0, 1);
  x10 = XEXP (x9, 1);
  x11 = XEXP (x10, 0);
  if (!rtx_equal_p (x11, operands[0]))
    return -1;
  x12 = XEXP (x10, 1);
  if (!rtx_equal_p (x12, operands[1]))
    return -1;
  x13 = XEXP (x9, 0);
  if (!rtx_equal_p (x13, operands[0]))
    return -1;
  switch (GET_MODE (x4))
    {
    case E_QImode:
      return pattern361 (x1, 
E_QImode); /* [-1, 0] */

    case E_HImode:
      if (pattern361 (x1, 
E_HImode) != 0)
        return -1;
      return 1;

    case E_SImode:
      if (pattern361 (x1, 
E_SImode) != 0)
        return -1;
      return 2;

    case E_DImode:
      if (pattern361 (x1, 
E_DImode) != 0)
        return -1;
      return 3;

    default:
      return -1;
    }
}

int
pattern375 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != i1
      || !general_operand (operands[1], i1))
    return -1;
  return 0;
}

int
pattern380 (rtx x1, int i1, int i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (GET_CODE (x1) != UNSPEC
      || XVECLEN (x1, 0) != 1
      || XINT (x1, 1) != i1)
    return -1;
  x2 = XVECEXP (x1, 0, 0);
  if (x2 != const_int_rtx[MAX_SAVED_CONST_INT + i2])
    return -1;
  return 0;
}

int
pattern384 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) != E_SImode)
    return -1;
  x4 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x4) != USE)
    return -1;
  x5 = XVECEXP (x1, 0, 2);
  if (GET_CODE (x5) != CLOBBER)
    return -1;
  x6 = XEXP (x2, 0);
  operands[0] = x6;
  if (!register_operand (operands[0], E_SImode))
    return -1;
  x7 = XEXP (x3, 0);
  operands[3] = x7;
  x8 = XEXP (x4, 0);
  operands[4] = x8;
  x9 = XEXP (x5, 0);
  operands[1] = x9;
  x10 = XVECEXP (x1, 0, 3);
  x11 = XEXP (x10, 0);
  operands[2] = x11;
  switch (GET_MODE (operands[3]))
    {
    case E_SFmode:
      return pattern383 (
E_V4SFmode, 
E_SFmode); /* [-1, 0] */

    case E_DFmode:
      if (pattern383 (
E_V2DFmode, 
E_DFmode) != 0)
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern400 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (!nonimmediate_operand (operands[0], i1)
      || GET_MODE (x1) != i1)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != i1
      || !nonimmediate_operand (operands[1], i2)
      || !const_scalar_int_operand (operands[2], i1))
    return -1;
  return 0;
}

int
pattern407 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 1);
  if (x3 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
    return -1;
  x4 = XEXP (x2, 0);
  operands[1] = x4;
  if (!int_nonimmediate_operand (operands[1], E_VOIDmode))
    return -1;
  switch (GET_MODE (operands[0]))
    {
    case E_QImode:
      if (!register_operand (operands[0], E_QImode)
          || GET_MODE (x1) != E_QImode
          || GET_MODE (x2) != E_QImode)
        return -1;
      return 0;

    case E_HImode:
      if (!register_operand (operands[0], E_HImode)
          || GET_MODE (x1) != E_HImode
          || GET_MODE (x2) != E_HImode)
        return -1;
      return 1;

    case E_SImode:
      if (!register_operand (operands[0], E_SImode)
          || GET_MODE (x1) != E_SImode
          || GET_MODE (x2) != E_SImode)
        return -1;
      return 2;

    case E_DImode:
      if (!register_operand (operands[0], E_DImode)
          || GET_MODE (x1) != E_DImode
          || GET_MODE (x2) != E_DImode)
        return -1;
      return 3;

    default:
      return -1;
    }
}

int
pattern419 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 0);
  operands[1] = x3;
  x4 = XEXP (x2, 1);
  operands[2] = x4;
  x5 = XVECEXP (x1, 0, 1);
  operands[3] = x5;
  x6 = XVECEXP (x1, 0, 2);
  operands[4] = x6;
  if (!const_0_to_7_operand (operands[4], E_SImode))
    return -1;
  switch (GET_MODE (operands[0]))
    {
    case E_HImode:
      return pattern417 (x1); /* [-1, 1] */

    case E_QImode:
      if (pattern418 (x1, 
E_V8HImode, 
E_QImode) != 0)
        return -1;
      return 2;

    default:
      return -1;
    }
}

int
pattern430 (rtx x1)
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
  if (!const248_operand (operands[2], E_VOIDmode))
    return -1;
  return pattern429 (x1); /* [-1, 1] */
}

int
pattern436 (rtx x1, int i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) != CONST
      || GET_MODE (x2) != E_SImode)
    return -1;
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) != UNSPEC
      || XVECLEN (x3, 0) != 1
      || XINT (x3, 1) != i1
      || GET_MODE (x3) != E_SImode
      || !register_operand (operands[0], E_SImode)
      || GET_MODE (x1) != E_SImode)
    return -1;
  return 0;
}

int
pattern445 (rtx x1, int *pnum_clobbers)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4;
  int res ATTRIBUTE_UNUSED;
  if (pnum_clobbers == NULL)
    return -1;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  if (x3 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
    return -1;
  x4 = XEXP (x2, 0);
  operands[2] = x4;
  if (!int_nonimmediate_operand (operands[2], E_VOIDmode))
    return -1;
  switch (GET_MODE (operands[0]))
    {
    case E_SImode:
      return pattern444 (x1, 
E_SImode); /* [-1, 0] */

    case E_DImode:
      if (pattern444 (x1, 
E_DImode) != 0)
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern455 (rtx x1, machine_mode i1, machine_mode i2)
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
      || !vector_operand (operands[2], i1)
      || !nonimm_or_0_operand (operands[3], i1)
      || !register_operand (operands[4], i2))
    return -1;
  return 0;
}

int
pattern460 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  x3 = XVECEXP (x2, 0, 0);
  operands[1] = x3;
  x4 = XVECEXP (x2, 0, 1);
  operands[2] = x4;
  x5 = XEXP (x1, 2);
  switch (GET_CODE (x5))
    {
    case UNSPEC:
      if (XVECLEN (x5, 0) != 1
          || XINT (x5, 1) != 223)
        return -1;
      x6 = XEXP (x1, 1);
      operands[3] = x6;
      x7 = XVECEXP (x5, 0, 0);
      operands[4] = x7;
      switch (GET_MODE (operands[0]))
        {
        case E_V32HFmode:
          if (!register_operand (operands[0], E_V32HFmode)
              || GET_MODE (x1) != E_V32HFmode
              || GET_MODE (x2) != E_V32HFmode
              || !vector_operand (operands[1], E_V32HFmode)
              || !vector_operand (operands[2], E_V32HFmode)
              || !nonimm_or_0_operand (operands[3], E_V32HFmode)
              || GET_MODE (x5) != E_SImode
              || !register_operand (operands[4], E_HImode))
            return -1;
          return 0;

        case E_V16HFmode:
          if (pattern459 (x1, 
E_HImode, 
E_V16HFmode) != 0)
            return -1;
          return 1;

        case E_V8HFmode:
          if (pattern459 (x1, 
E_QImode, 
E_V8HFmode) != 0)
            return -1;
          return 2;

        default:
          return -1;
        }

    case CONST_INT:
      if (XWINT (x5, 0) != 3L
          || !register_operand (operands[0], E_V8HFmode)
          || GET_MODE (x1) != E_V8HFmode
          || GET_MODE (x2) != E_V8HFmode
          || !nonimmediate_operand (operands[1], E_V8HFmode)
          || !vector_operand (operands[2], E_V8HFmode))
        return -1;
      x6 = XEXP (x1, 1);
      if (!rtx_equal_p (x6, operands[1]))
        return -1;
      return 3;

    default:
      return -1;
    }
}

int
pattern488 (rtx x1, machine_mode i1)
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
      || !register_operand (operands[2], i1))
    return -1;
  return 0;
}

int
pattern490 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 0);
  operands[1] = x3;
  x4 = XEXP (x2, 1);
  operands[2] = x4;
  x5 = XVECEXP (x1, 0, 1);
  operands[3] = x5;
  if (!const48_operand (operands[3], E_SImode))
    return -1;
  switch (GET_MODE (operands[0]))
    {
    case E_V32HFmode:
      return pattern488 (x1, 
E_V32HFmode); /* [-1, 0] */

    case E_V16HFmode:
      if (pattern488 (x1, 
E_V16HFmode) != 0)
        return -1;
      return 1;

    case E_V16SFmode:
      if (pattern488 (x1, 
E_V16SFmode) != 0)
        return -1;
      return 2;

    case E_V8SFmode:
      if (pattern488 (x1, 
E_V8SFmode) != 0)
        return -1;
      return 3;

    case E_V8DFmode:
      if (pattern488 (x1, 
E_V8DFmode) != 0)
        return -1;
      return 4;

    case E_V4DFmode:
      if (pattern488 (x1, 
E_V4DFmode) != 0)
        return -1;
      return 5;

    default:
      return -1;
    }
}

int
pattern497 (rtx x1, machine_mode i1, machine_mode i2, machine_mode i3)
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
  if (GET_MODE (x3) != i1
      || !nonimmediate_operand (operands[1], i3))
    return -1;
  x4 = XEXP (x2, 1);
  if (GET_MODE (x4) != i1
      || !nonimm_or_0_operand (operands[2], i2)
      || !const0_operand (operands[4], i1))
    return -1;
  return 0;
}

int
pattern503 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) != E_V2SImode)
    return -1;
  x4 = XEXP (x1, 1);
  if (GET_CODE (x4) != CONST_VECTOR
      || XVECLEN (x4, 0) != 2
      || GET_MODE (x4) != E_V2SImode)
    return -1;
  x5 = XVECEXP (x4, 0, 0);
  if (x5 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
    return -1;
  x6 = XVECEXP (x4, 0, 1);
  if (x6 != const_int_rtx[MAX_SAVED_CONST_INT + 0]
      || !register_operand (operands[0], E_V4SImode)
      || GET_MODE (x1) != E_V4SImode
      || GET_MODE (x2) != E_V2SImode)
    return -1;
  x7 = XEXP (x3, 0);
  operands[1] = x7;
  if (!nonimmediate_operand (operands[1], E_V2DFmode))
    return -1;
  return pattern502 (x2); /* [-1, 1] */
}

int
pattern509 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12, x13, x14, x15, x16, x17;
  rtx x18, x19, x20, x21, x22, x23, x24, x25;
  rtx x26, x27, x28, x29, x30, x31, x32, x33;
  rtx x34, x35, x36, x37, x38, x39;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) != CONST_VECTOR)
    return -1;
  x3 = XEXP (x1, 0);
  x4 = XEXP (x3, 0);
  x5 = XEXP (x4, 0);
  operands[1] = x5;
  x6 = XEXP (x3, 1);
  switch (GET_CODE (x6))
    {
    case VEC_SELECT:
      x7 = XEXP (x6, 1);
      if (GET_CODE (x7) != PARALLEL)
        return -1;
      x8 = XEXP (x6, 0);
      operands[2] = x8;
      x9 = XEXP (x3, 2);
      operands[3] = x9;
      switch (XVECLEN (x7, 0))
        {
        case 2:
          x10 = XVECEXP (x7, 0, 0);
          if (x10 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
            return -1;
          x11 = XVECEXP (x7, 0, 1);
          if (x11 != const_int_rtx[MAX_SAVED_CONST_INT + 1]
              || !register_operand (operands[1], E_V2DImode))
            return -1;
          switch (XVECLEN (x2, 0))
            {
            case 14:
              if (GET_MODE (x2) != E_V14QImode)
                return -1;
              x12 = XVECEXP (x2, 0, 0);
              if (x12 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
                return -1;
              x13 = XVECEXP (x2, 0, 1);
              if (x13 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
                return -1;
              x14 = XVECEXP (x2, 0, 2);
              if (x14 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
                return -1;
              x15 = XVECEXP (x2, 0, 3);
              if (x15 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
                return -1;
              x16 = XVECEXP (x2, 0, 4);
              if (x16 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
                return -1;
              x17 = XVECEXP (x2, 0, 5);
              if (x17 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
                return -1;
              x18 = XVECEXP (x2, 0, 6);
              if (x18 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
                return -1;
              x19 = XVECEXP (x2, 0, 7);
              if (x19 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
                return -1;
              x20 = XVECEXP (x2, 0, 8);
              if (x20 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
                return -1;
              x21 = XVECEXP (x2, 0, 9);
              if (x21 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
                return -1;
              x22 = XVECEXP (x2, 0, 10);
              if (x22 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
                return -1;
              x23 = XVECEXP (x2, 0, 11);
              if (x23 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
                return -1;
              x24 = XVECEXP (x2, 0, 12);
              if (x24 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
                return -1;
              x25 = XVECEXP (x2, 0, 13);
              if (x25 != const_int_rtx[MAX_SAVED_CONST_INT + 0]
                  || pattern504 (x1, 
E_V16QImode, 
E_V2QImode) != 0)
                return -1;
              return 0;

            case 6:
              if (GET_MODE (x2) != E_V6HImode)
                return -1;
              x12 = XVECEXP (x2, 0, 0);
              if (x12 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
                return -1;
              x13 = XVECEXP (x2, 0, 1);
              if (x13 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
                return -1;
              x14 = XVECEXP (x2, 0, 2);
              if (x14 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
                return -1;
              x15 = XVECEXP (x2, 0, 3);
              if (x15 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
                return -1;
              x16 = XVECEXP (x2, 0, 4);
              if (x16 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
                return -1;
              x17 = XVECEXP (x2, 0, 5);
              if (x17 != const_int_rtx[MAX_SAVED_CONST_INT + 0]
                  || pattern504 (x1, 
E_V8HImode, 
E_V2HImode) != 0)
                return -1;
              return 1;

            case 2:
              if (GET_MODE (x2) != E_V2SImode)
                return -1;
              x12 = XVECEXP (x2, 0, 0);
              if (x12 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
                return -1;
              x13 = XVECEXP (x2, 0, 1);
              if (x13 != const_int_rtx[MAX_SAVED_CONST_INT + 0]
                  || pattern504 (x1, 
E_V4SImode, 
E_V2SImode) != 0)
                return -1;
              return 2;

            default:
              return -1;
            }

        case 4:
          x10 = XVECEXP (x7, 0, 0);
          if (x10 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
            return -1;
          x11 = XVECEXP (x7, 0, 1);
          if (x11 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
            return -1;
          x26 = XVECEXP (x7, 0, 2);
          if (x26 != const_int_rtx[MAX_SAVED_CONST_INT + 2])
            return -1;
          x27 = XVECEXP (x7, 0, 3);
          if (x27 != const_int_rtx[MAX_SAVED_CONST_INT + 3])
            return -1;
          switch (XVECLEN (x2, 0))
            {
            case 12:
              if (GET_MODE (x2) != E_V12QImode)
                return -1;
              x12 = XVECEXP (x2, 0, 0);
              if (x12 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
                return -1;
              x13 = XVECEXP (x2, 0, 1);
              if (x13 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
                return -1;
              x14 = XVECEXP (x2, 0, 2);
              if (x14 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
                return -1;
              x15 = XVECEXP (x2, 0, 3);
              if (x15 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
                return -1;
              x16 = XVECEXP (x2, 0, 4);
              if (x16 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
                return -1;
              x17 = XVECEXP (x2, 0, 5);
              if (x17 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
                return -1;
              x18 = XVECEXP (x2, 0, 6);
              if (x18 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
                return -1;
              x19 = XVECEXP (x2, 0, 7);
              if (x19 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
                return -1;
              x20 = XVECEXP (x2, 0, 8);
              if (x20 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
                return -1;
              x21 = XVECEXP (x2, 0, 9);
              if (x21 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
                return -1;
              x22 = XVECEXP (x2, 0, 10);
              if (x22 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
                return -1;
              x23 = XVECEXP (x2, 0, 11);
              if (x23 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
                return -1;
              res = pattern505 (x1, 
E_V16QImode, 
E_V4QImode);
              if (res >= 0)
                return res + 3; /* [3, 4] */
              return -1;

            case 4:
              if (GET_MODE (x2) != E_V4HImode)
                return -1;
              x12 = XVECEXP (x2, 0, 0);
              if (x12 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
                return -1;
              x13 = XVECEXP (x2, 0, 1);
              if (x13 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
                return -1;
              x14 = XVECEXP (x2, 0, 2);
              if (x14 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
                return -1;
              x15 = XVECEXP (x2, 0, 3);
              if (x15 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
                return -1;
              res = pattern505 (x1, 
E_V8HImode, 
E_V4HImode);
              if (res >= 0)
                return res + 5; /* [5, 6] */
              return -1;

            default:
              return -1;
            }

        case 8:
          x10 = XVECEXP (x7, 0, 0);
          if (x10 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
            return -1;
          x11 = XVECEXP (x7, 0, 1);
          if (x11 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
            return -1;
          x26 = XVECEXP (x7, 0, 2);
          if (x26 != const_int_rtx[MAX_SAVED_CONST_INT + 2])
            return -1;
          x27 = XVECEXP (x7, 0, 3);
          if (x27 != const_int_rtx[MAX_SAVED_CONST_INT + 3])
            return -1;
          x28 = XVECEXP (x7, 0, 4);
          if (x28 != const_int_rtx[MAX_SAVED_CONST_INT + 4])
            return -1;
          x29 = XVECEXP (x7, 0, 5);
          if (x29 != const_int_rtx[MAX_SAVED_CONST_INT + 5])
            return -1;
          x30 = XVECEXP (x7, 0, 6);
          if (x30 != const_int_rtx[MAX_SAVED_CONST_INT + 6])
            return -1;
          x31 = XVECEXP (x7, 0, 7);
          if (x31 != const_int_rtx[MAX_SAVED_CONST_INT + 7]
              || XVECLEN (x2, 0) != 8
              || GET_MODE (x2) != E_V8QImode)
            return -1;
          x12 = XVECEXP (x2, 0, 0);
          if (x12 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
            return -1;
          x13 = XVECEXP (x2, 0, 1);
          if (x13 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
            return -1;
          x14 = XVECEXP (x2, 0, 2);
          if (x14 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
            return -1;
          x15 = XVECEXP (x2, 0, 3);
          if (x15 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
            return -1;
          x16 = XVECEXP (x2, 0, 4);
          if (x16 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
            return -1;
          x17 = XVECEXP (x2, 0, 5);
          if (x17 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
            return -1;
          x18 = XVECEXP (x2, 0, 6);
          if (x18 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
            return -1;
          x19 = XVECEXP (x2, 0, 7);
          if (x19 != const_int_rtx[MAX_SAVED_CONST_INT + 0]
              || !register_operand (operands[0], E_V16QImode)
              || GET_MODE (x1) != E_V16QImode
              || GET_MODE (x3) != E_V8QImode
              || GET_MODE (x4) != E_V8QImode
              || GET_MODE (x6) != E_V8QImode
              || !nonimm_or_0_operand (operands[2], E_V16QImode))
            return -1;
          res = pattern506 ();
          if (res >= 0)
            return res + 7; /* [7, 9] */
          return -1;

        default:
          return -1;
        }

    case CONST_VECTOR:
      x9 = XEXP (x3, 2);
      operands[2] = x9;
      switch (XVECLEN (x6, 0))
        {
        case 2:
          x32 = XVECEXP (x6, 0, 0);
          if (x32 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
            return -1;
          x33 = XVECEXP (x6, 0, 1);
          if (x33 != const_int_rtx[MAX_SAVED_CONST_INT + 0]
              || !register_operand (operands[1], E_V2DImode))
            return -1;
          switch (XVECLEN (x2, 0))
            {
            case 14:
              if (GET_MODE (x2) != E_V14QImode)
                return -1;
              x12 = XVECEXP (x2, 0, 0);
              if (x12 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
                return -1;
              x13 = XVECEXP (x2, 0, 1);
              if (x13 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
                return -1;
              x14 = XVECEXP (x2, 0, 2);
              if (x14 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
                return -1;
              x15 = XVECEXP (x2, 0, 3);
              if (x15 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
                return -1;
              x16 = XVECEXP (x2, 0, 4);
              if (x16 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
                return -1;
              x17 = XVECEXP (x2, 0, 5);
              if (x17 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
                return -1;
              x18 = XVECEXP (x2, 0, 6);
              if (x18 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
                return -1;
              x19 = XVECEXP (x2, 0, 7);
              if (x19 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
                return -1;
              x20 = XVECEXP (x2, 0, 8);
              if (x20 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
                return -1;
              x21 = XVECEXP (x2, 0, 9);
              if (x21 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
                return -1;
              x22 = XVECEXP (x2, 0, 10);
              if (x22 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
                return -1;
              x23 = XVECEXP (x2, 0, 11);
              if (x23 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
                return -1;
              x24 = XVECEXP (x2, 0, 12);
              if (x24 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
                return -1;
              x25 = XVECEXP (x2, 0, 13);
              if (x25 != const_int_rtx[MAX_SAVED_CONST_INT + 0]
                  || pattern507 (x1, 
E_V2QImode, 
E_V16QImode) != 0)
                return -1;
              return 10;

            case 6:
              if (GET_MODE (x2) != E_V6HImode)
                return -1;
              x12 = XVECEXP (x2, 0, 0);
              if (x12 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
                return -1;
              x13 = XVECEXP (x2, 0, 1);
              if (x13 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
                return -1;
              x14 = XVECEXP (x2, 0, 2);
              if (x14 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
                return -1;
              x15 = XVECEXP (x2, 0, 3);
              if (x15 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
                return -1;
              x16 = XVECEXP (x2, 0, 4);
              if (x16 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
                return -1;
              x17 = XVECEXP (x2, 0, 5);
              if (x17 != const_int_rtx[MAX_SAVED_CONST_INT + 0]
                  || pattern507 (x1, 
E_V2HImode, 
E_V8HImode) != 0)
                return -1;
              return 11;

            case 2:
              if (GET_MODE (x2) != E_V2SImode)
                return -1;
              x12 = XVECEXP (x2, 0, 0);
              if (x12 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
                return -1;
              x13 = XVECEXP (x2, 0, 1);
              if (x13 != const_int_rtx[MAX_SAVED_CONST_INT + 0]
                  || pattern507 (x1, 
E_V2SImode, 
E_V4SImode) != 0)
                return -1;
              return 12;

            default:
              return -1;
            }

        case 4:
          x32 = XVECEXP (x6, 0, 0);
          if (x32 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
            return -1;
          x33 = XVECEXP (x6, 0, 1);
          if (x33 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
            return -1;
          x34 = XVECEXP (x6, 0, 2);
          if (x34 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
            return -1;
          x35 = XVECEXP (x6, 0, 3);
          if (x35 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
            return -1;
          switch (XVECLEN (x2, 0))
            {
            case 12:
              if (GET_MODE (x2) != E_V12QImode)
                return -1;
              x12 = XVECEXP (x2, 0, 0);
              if (x12 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
                return -1;
              x13 = XVECEXP (x2, 0, 1);
              if (x13 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
                return -1;
              x14 = XVECEXP (x2, 0, 2);
              if (x14 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
                return -1;
              x15 = XVECEXP (x2, 0, 3);
              if (x15 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
                return -1;
              x16 = XVECEXP (x2, 0, 4);
              if (x16 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
                return -1;
              x17 = XVECEXP (x2, 0, 5);
              if (x17 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
                return -1;
              x18 = XVECEXP (x2, 0, 6);
              if (x18 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
                return -1;
              x19 = XVECEXP (x2, 0, 7);
              if (x19 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
                return -1;
              x20 = XVECEXP (x2, 0, 8);
              if (x20 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
                return -1;
              x21 = XVECEXP (x2, 0, 9);
              if (x21 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
                return -1;
              x22 = XVECEXP (x2, 0, 10);
              if (x22 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
                return -1;
              x23 = XVECEXP (x2, 0, 11);
              if (x23 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
                return -1;
              res = pattern508 (x1, 
E_V4QImode, 
E_V16QImode);
              if (res >= 0)
                return res + 13; /* [13, 14] */
              return -1;

            case 4:
              if (GET_MODE (x2) != E_V4HImode)
                return -1;
              x12 = XVECEXP (x2, 0, 0);
              if (x12 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
                return -1;
              x13 = XVECEXP (x2, 0, 1);
              if (x13 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
                return -1;
              x14 = XVECEXP (x2, 0, 2);
              if (x14 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
                return -1;
              x15 = XVECEXP (x2, 0, 3);
              if (x15 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
                return -1;
              res = pattern508 (x1, 
E_V4HImode, 
E_V8HImode);
              if (res >= 0)
                return res + 15; /* [15, 16] */
              return -1;

            default:
              return -1;
            }

        case 8:
          if (GET_MODE (x6) != E_V8QImode)
            return -1;
          x32 = XVECEXP (x6, 0, 0);
          if (x32 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
            return -1;
          x33 = XVECEXP (x6, 0, 1);
          if (x33 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
            return -1;
          x34 = XVECEXP (x6, 0, 2);
          if (x34 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
            return -1;
          x35 = XVECEXP (x6, 0, 3);
          if (x35 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
            return -1;
          x36 = XVECEXP (x6, 0, 4);
          if (x36 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
            return -1;
          x37 = XVECEXP (x6, 0, 5);
          if (x37 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
            return -1;
          x38 = XVECEXP (x6, 0, 6);
          if (x38 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
            return -1;
          x39 = XVECEXP (x6, 0, 7);
          if (x39 != const_int_rtx[MAX_SAVED_CONST_INT + 0]
              || XVECLEN (x2, 0) != 8
              || GET_MODE (x2) != E_V8QImode)
            return -1;
          x12 = XVECEXP (x2, 0, 0);
          if (x12 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
            return -1;
          x13 = XVECEXP (x2, 0, 1);
          if (x13 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
            return -1;
          x14 = XVECEXP (x2, 0, 2);
          if (x14 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
            return -1;
          x15 = XVECEXP (x2, 0, 3);
          if (x15 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
            return -1;
          x16 = XVECEXP (x2, 0, 4);
          if (x16 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
            return -1;
          x17 = XVECEXP (x2, 0, 5);
          if (x17 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
            return -1;
          x18 = XVECEXP (x2, 0, 6);
          if (x18 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
            return -1;
          x19 = XVECEXP (x2, 0, 7);
          if (x19 != const_int_rtx[MAX_SAVED_CONST_INT + 0]
              || !register_operand (operands[0], E_V16QImode)
              || GET_MODE (x1) != E_V16QImode
              || GET_MODE (x3) != E_V8QImode
              || GET_MODE (x4) != E_V8QImode)
            return -1;
          res = pattern506 ();
          if (res >= 0)
            return res + 17; /* [17, 19] */
          return -1;

        default:
          return -1;
        }

    default:
      return -1;
    }
}

int
pattern728 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_CODE (x1) != PARALLEL
      || XVECLEN (x1, 0) != 2)
    return -1;
  x2 = XVECEXP (x1, 0, 0);
  if (GET_CODE (x2) != SET)
    return -1;
  x3 = XEXP (x2, 1);
  if (!plusminuslogic_operator (x3, i1))
    return -1;
  operands[3] = x3;
  x4 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x4) != CLOBBER)
    return -1;
  x5 = XEXP (x4, 0);
  if (GET_CODE (x5) != REG
      || REGNO (x5) != 17
      || GET_MODE (x5) != E_CCmode)
    return -1;
  x6 = XEXP (x3, 1);
  operands[2] = x6;
  if (!nonmemory_operand (operands[2], i1)
      || pattern727 (x2) != 0)
    return -1;
  return 0;
}

int
pattern738 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1
      || !register_operand (operands[1], i1)
      || !nonmemory_operand (operands[2], i2))
    return -1;
  return 0;
}

int
pattern744 (machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || !sse_comparison_operator (operands[3], i1)
      || !register_operand (operands[1], i1)
      || !nonimmediate_operand (operands[2], i1))
    return -1;
  return 0;
}

int
pattern748 (rtx x1, rtx_code i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7;
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
  switch (GET_MODE (operands[0]))
    {
    case E_V4HImode:
      if (!register_operand (operands[0], E_V4HImode)
          || GET_MODE (x1) != E_V4HImode
          || GET_MODE (x2) != E_V4SImode
          || GET_MODE (x3) != E_V4SImode
          || GET_MODE (x5) != E_V4SImode
          || !register_mmxmem_operand (operands[1], E_V4HImode)
          || GET_MODE (x4) != E_V4SImode
          || !register_mmxmem_operand (operands[2], E_V4HImode))
        return -1;
      return 0;

    case E_V2HImode:
      if (!register_operand (operands[0], E_V2HImode)
          || GET_MODE (x1) != E_V2HImode
          || GET_MODE (x2) != E_V2SImode
          || GET_MODE (x3) != E_V2SImode
          || GET_MODE (x5) != E_V2SImode
          || !register_operand (operands[1], E_V2HImode)
          || GET_MODE (x4) != E_V2SImode
          || !register_operand (operands[2], E_V2HImode))
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern772 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
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
  return 0;
}

int
pattern776 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1)
    return -1;
  switch (GET_MODE (operands[1]))
    {
    case E_V8HFmode:
      if (!vector_operand (operands[1], E_V8HFmode))
        return -1;
      return 0;

    case E_V4SFmode:
      if (!nonimmediate_operand (operands[1], E_V4SFmode))
        return -1;
      return 1;

    case E_V4DFmode:
      if (!nonimmediate_operand (operands[1], E_V4DFmode))
        return -1;
      return 2;

    default:
      return -1;
    }
}

int
pattern784 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i2)
      || GET_MODE (x1) != i2
      || !nonimmediate_operand (operands[1], i2)
      || !register_operand (operands[2], i1))
    return -1;
  return 0;
}

int
pattern792 (rtx x1, machine_mode i1, machine_mode i2, machine_mode i3)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i3)
      || GET_MODE (x1) != i3)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != i2
      || !nonimmediate_operand (operands[2], i1))
    return -1;
  x3 = XEXP (x1, 1);
  if (GET_MODE (x3) != i2
      || !register_operand (operands[1], i1))
    return -1;
  return 0;
}

int
pattern804 (rtx x1, machine_mode i1, machine_mode i2)
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
      || !const0_operand (operands[2], i1))
    return -1;
  return 0;
}

int
pattern812 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1
      || !nonimmediate_operand (operands[3], i1)
      || !register_operand (operands[1], i1)
      || !nonimmediate_operand (operands[2], i1))
    return -1;
  return 0;
}

int
pattern817 (rtx x1)
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
pattern822 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x2) != UNSPEC
      || XVECLEN (x2, 0) != 1
      || XINT (x2, 1) != 38)
    return -1;
  x3 = XVECEXP (x1, 0, 2);
  if (GET_CODE (x3) != CLOBBER)
    return -1;
  x4 = XEXP (x3, 0);
  if (GET_CODE (x4) != REG
      || REGNO (x4) != 17
      || GET_MODE (x4) != E_CCmode)
    return -1;
  return pattern544 (x1); /* [-1, 1] */
}

int
pattern828 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 2);
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
  return 0;
}

int
pattern832 (rtx x1, rtx_code i1, int i2, machine_mode i3)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4;
  int res ATTRIBUTE_UNUSED;
  if (GET_MODE (x1) != i3)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_CODE (x2) != MINUS
      || GET_MODE (x2) != E_SImode)
    return -1;
  x3 = XEXP (x2, 0);
  if (x3 != const_int_rtx[MAX_SAVED_CONST_INT + i2])
    return -1;
  x4 = XEXP (x2, 1);
  if (GET_CODE (x4) != i1)
    return -1;
  return 0;
}

int
pattern840 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (peep2_current_count < 3
      || XVECLEN (x1, 0) != 1
      || XINT (x1, 1) != 1)
    return -1;
  x2 = XVECEXP (x1, 0, 0);
  if (x2 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
    return -1;
  return 0;
}

int
pattern843 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12, x13, x14, x15, x16, x17;
  rtx x18, x19;
  int res ATTRIBUTE_UNUSED;
  if (peep2_current_count < 4
      || peep2_current_count < 5)
    return -1;
  x2 = XEXP (x1, 0);
  operands[3] = x2;
  if (!register_operand (operands[3], i1))
    return -1;
  x3 = XEXP (x1, 1);
  if (!rtx_equal_p (x3, operands[0]))
    return -1;
  x4 = PATTERN (peep2_next_insn (2));
  if (GET_CODE (x4) != PARALLEL
      || XVECLEN (x4, 0) != 2)
    return -1;
  x5 = XVECEXP (x4, 0, 0);
  if (GET_CODE (x5) != SET)
    return -1;
  x6 = XEXP (x5, 1);
  if (GET_CODE (x6) != XOR
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
  x9 = XEXP (x5, 0);
  operands[4] = x9;
  if (!register_operand (operands[4], i1))
    return -1;
  x10 = XEXP (x6, 1);
  operands[2] = x10;
  if (!x86_64_nonmemory_operand (operands[2], i1))
    return -1;
  x11 = XEXP (x6, 0);
  if (!rtx_equal_p (x11, operands[4]))
    return -1;
  x12 = PATTERN (peep2_next_insn (3));
  if (GET_CODE (x12) != SET)
    return -1;
  x13 = XEXP (x12, 1);
  if (!rtx_equal_p (x13, operands[4]))
    return -1;
  x14 = XEXP (x12, 0);
  if (!rtx_equal_p (x14, operands[1]))
    return -1;
  x15 = PATTERN (peep2_next_insn (4));
  if (GET_CODE (x15) != SET)
    return -1;
  x16 = XEXP (x15, 1);
  if (GET_CODE (x16) != COMPARE
      || GET_MODE (x16) != E_CCZmode)
    return -1;
  x17 = XEXP (x15, 0);
  if (GET_CODE (x17) != REG
      || REGNO (x17) != 17
      || GET_MODE (x17) != E_CCZmode)
    return -1;
  x18 = XEXP (x16, 0);
  operands[5] = x18;
  if (!register_operand (operands[5], i1))
    return -1;
  x19 = XEXP (x16, 1);
  operands[6] = x19;
  if (!x86_64_nonmemory_operand (operands[6], i1))
    return -1;
  return 0;
}

int
pattern864 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1
      || !bcst_vector_operand (operands[1], i1)
      || !bcst_vector_operand (operands[2], i1)
      || !bcst_vector_operand (operands[3], i1))
    return -1;
  return 0;
}

int
pattern872 (rtx x1, machine_mode i1, machine_mode i2)
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
      || !nonimmediate_operand (operands[2], i2)
      || !register_operand (operands[3], i1))
    return -1;
  return 0;
}

int
pattern879 (rtx x1)
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
  if (!const48_operand (operands[2], E_SImode))
    return -1;
  switch (GET_MODE (operands[0]))
    {
    case E_SImode:
      return pattern878 (x1, 
E_SImode); /* [-1, 1] */

    case E_DImode:
      res = pattern878 (x1, 
E_DImode);
      if (res >= 0)
        return res + 2; /* [2, 3] */
      return -1;

    default:
      return -1;
    }
}

int
pattern892 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], E_V16HFmode)
      || GET_MODE (x1) != E_V16HFmode)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != E_V16HFmode
      || !nonimm_or_0_operand (operands[2], E_V16HFmode)
      || !register_operand (operands[3], E_HImode))
    return -1;
  switch (GET_MODE (operands[1]))
    {
    case E_V16HImode:
      if (!vector_operand (operands[1], E_V16HImode))
        return -1;
      return 0;

    case E_V16SImode:
      if (!vector_operand (operands[1], E_V16SImode))
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern901 (rtx x1, machine_mode i1)
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
  x3 = XEXP (x2, 1);
  x4 = XVECEXP (x3, 0, 0);
  operands[2] = x4;
  return pattern900 (x3); /* [-1, 0] */
}

int
pattern910 (rtx x1, machine_mode i1, machine_mode i2)
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
      || !nonimm_or_0_operand (operands[3], i1)
      || !register_operand (operands[4], i2))
    return -1;
  return 0;
}

int
pattern914 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 0);
  x4 = XVECEXP (x3, 0, 0);
  operands[1] = x4;
  x5 = XVECEXP (x3, 0, 1);
  operands[2] = x5;
  x6 = XVECEXP (x1, 0, 1);
  if (!const_4_or_8_to_11_operand (x6, E_SImode))
    return -1;
  x7 = XEXP (x2, 2);
  switch (GET_CODE (x7))
    {
    case UNSPEC:
      if (XVECLEN (x7, 0) != 1
          || XINT (x7, 1) != 223)
        return -1;
      x8 = XEXP (x2, 1);
      operands[3] = x8;
      x9 = XVECEXP (x7, 0, 0);
      operands[4] = x9;
      operands[5] = x6;
      switch (GET_MODE (operands[0]))
        {
        case E_V32HFmode:
          return pattern913 (x1, 
E_HImode, 
E_SImode, 
E_V32HFmode); /* [-1, 0] */

        case E_V16HFmode:
          if (pattern913 (x1, 
E_QImode, 
E_HImode, 
E_V16HFmode) != 0)
            return -1;
          return 1;

        default:
          return -1;
        }

    case CONST_INT:
      if (XWINT (x7, 0) != 3L
          || !register_operand (operands[0], E_V8HFmode)
          || GET_MODE (x1) != E_V8HFmode
          || GET_MODE (x2) != E_V8HFmode
          || GET_MODE (x3) != E_V8HFmode
          || !nonimmediate_operand (operands[1], E_V8HFmode)
          || !register_operand (operands[2], E_V8HFmode))
        return -1;
      operands[3] = x6;
      x8 = XEXP (x2, 1);
      if (!rtx_equal_p (x8, operands[1]))
        return -1;
      return 2;

    default:
      return -1;
    }
}

int
pattern929 (rtx x1)
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
pattern936 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], E_V8QImode))
    return -1;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  x4 = XVECEXP (x3, 0, 0);
  operands[1] = x4;
  if (!register_operand (operands[1], E_V8QImode))
    return -1;
  x5 = XVECEXP (x3, 0, 1);
  operands[2] = x5;
  if (!register_mmxmem_operand (operands[2], E_V8QImode))
    return -1;
  x6 = XVECEXP (x3, 0, 2);
  operands[4] = x6;
  if (!reg_or_const_vector_operand (operands[4], E_V4SImode))
    return -1;
  x7 = XVECEXP (x1, 0, 1);
  x8 = XEXP (x7, 0);
  operands[3] = x8;
  if (!scratch_operand (operands[3], E_V4SImode))
    return -1;
  return 0;
}

int
pattern949 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  x4 = XEXP (x3, 0);
  x5 = XEXP (x4, 0);
  x6 = XEXP (x5, 0);
  operands[1] = x6;
  x7 = XEXP (x4, 1);
  if (!rtx_equal_p (x7, operands[1]))
    return -1;
  x8 = XVECEXP (x1, 0, 1);
  switch (GET_CODE (x8))
    {
    case SET:
      x9 = XEXP (x8, 1);
      if (GET_CODE (x9) != AND)
        return -1;
      return 0;

    case CLOBBER:
      x10 = XEXP (x8, 0);
      operands[0] = x10;
      switch (GET_MODE (x4))
        {
        case E_SImode:
          if (GET_MODE (x5) != E_SImode
              || !nonimmediate_operand (operands[1], E_SImode)
              || !scratch_operand (operands[0], E_SImode))
            return -1;
          return 1;

        case E_DImode:
          if (GET_MODE (x5) != E_DImode
              || !nonimmediate_operand (operands[1], E_DImode)
              || !scratch_operand (operands[0], E_DImode))
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
pattern966 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XVECEXP (x2, 0, 1);
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) != PARALLEL
      || XVECLEN (x4, 0) != 1)
    return -1;
  x5 = XVECEXP (x4, 0, 0);
  if (x5 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
    return -1;
  x6 = XEXP (x1, 0);
  if (GET_CODE (x6) != REG
      || REGNO (x6) != 17
      || GET_MODE (x6) != E_CCFPmode)
    return -1;
  x7 = XVECEXP (x2, 0, 0);
  x8 = XEXP (x7, 0);
  operands[0] = x8;
  return 0;
}

int
pattern970 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1
      || !nonimmediate_operand (operands[2], i1)
      || !register_operand (operands[1], i1))
    return -1;
  return 0;
}

int
pattern974 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], E_QImode)
      || GET_MODE (x1) != E_QImode)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != E_QImode)
    return -1;
  switch (GET_MODE (operands[1]))
    {
    case E_V8SImode:
      if (!register_operand (operands[1], E_V8SImode)
          || !nonimmediate_operand (operands[2], E_V8SImode)
          || !const_0_to_7_operand (operands[3], E_SImode))
        return -1;
      return 0;

    case E_V4SImode:
      if (!register_operand (operands[1], E_V4SImode)
          || !nonimmediate_operand (operands[2], E_V4SImode)
          || !const_0_to_7_operand (operands[3], E_SImode))
        return -1;
      return 1;

    case E_V8DImode:
      if (!register_operand (operands[1], E_V8DImode)
          || !nonimmediate_operand (operands[2], E_V8DImode)
          || !const_0_to_7_operand (operands[3], E_SImode))
        return -1;
      return 2;

    case E_V4DImode:
      if (!register_operand (operands[1], E_V4DImode)
          || !nonimmediate_operand (operands[2], E_V4DImode)
          || !const_0_to_7_operand (operands[3], E_SImode))
        return -1;
      return 3;

    case E_V2DImode:
      if (!register_operand (operands[1], E_V2DImode)
          || !nonimmediate_operand (operands[2], E_V2DImode)
          || !const_0_to_7_operand (operands[3], E_SImode))
        return -1;
      return 4;

    case E_V8HFmode:
      if (!register_operand (operands[1], E_V8HFmode)
          || !nonimmediate_operand (operands[2], E_V8HFmode)
          || !const_0_to_31_operand (operands[3], E_SImode))
        return -1;
      return 5;

    case E_V8SFmode:
      if (!register_operand (operands[1], E_V8SFmode)
          || !nonimmediate_operand (operands[2], E_V8SFmode)
          || !const_0_to_31_operand (operands[3], E_SImode))
        return -1;
      return 6;

    case E_V4SFmode:
      if (!register_operand (operands[1], E_V4SFmode)
          || !nonimmediate_operand (operands[2], E_V4SFmode)
          || !const_0_to_31_operand (operands[3], E_SImode))
        return -1;
      return 7;

    case E_V8DFmode:
      if (!register_operand (operands[1], E_V8DFmode)
          || !nonimmediate_operand (operands[2], E_V8DFmode)
          || !const_0_to_31_operand (operands[3], E_SImode))
        return -1;
      return 8;

    case E_V4DFmode:
      if (!register_operand (operands[1], E_V4DFmode)
          || !nonimmediate_operand (operands[2], E_V4DFmode)
          || !const_0_to_31_operand (operands[3], E_SImode))
        return -1;
      return 9;

    case E_V2DFmode:
      if (!register_operand (operands[1], E_V2DFmode)
          || !nonimmediate_operand (operands[2], E_V2DFmode)
          || !const_0_to_31_operand (operands[3], E_SImode))
        return -1;
      return 10;

    case E_V8HImode:
      if (!register_operand (operands[1], E_V8HImode)
          || !nonimmediate_operand (operands[2], E_V8HImode)
          || !const_0_to_7_operand (operands[3], E_SImode))
        return -1;
      return 11;

    default:
      return -1;
    }
}

int
pattern1000 (rtx x1, machine_mode i1)
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
      || !const0_operand (operands[2], i1))
    return -1;
  return 0;
}

int
pattern1006 (rtx x1, machine_mode i1, machine_mode i2)
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
      || !reg_or_0_operand (operands[1], i1))
    return -1;
  return 0;
}

int
pattern1014 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1
      || !sse_comparison_operator (operands[3], i1)
      || !register_operand (operands[1], i1)
      || !nonimmediate_operand (operands[2], i1))
    return -1;
  return 0;
}

int
pattern1020 (rtx x1, machine_mode i1, machine_mode i2)
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
pattern1028 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1
      || !register_operand (operands[1], i2)
      || !register_operand (operands[2], i1)
      || !nonimmediate_operand (operands[3], i1))
    return -1;
  return 0;
}

int
pattern1034 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 1);
  if (XVECLEN (x3, 0) != 2)
    return -1;
  x4 = XVECEXP (x3, 0, 0);
  if (x4 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
    return -1;
  x5 = XVECEXP (x3, 0, 1);
  if (x5 != const_int_rtx[MAX_SAVED_CONST_INT + 1]
      || !register_operand (operands[0], E_V2DImode)
      || GET_MODE (x1) != E_V2DImode
      || GET_MODE (x2) != E_V2QImode)
    return -1;
  x6 = XEXP (x2, 0);
  if (GET_MODE (x6) != E_V16QImode)
    return -1;
  x7 = XEXP (x6, 0);
  x8 = XEXP (x7, 0);
  x9 = XEXP (x8, 0);
  operands[1] = x9;
  x10 = XEXP (x7, 1);
  operands[2] = x10;
  switch (GET_MODE (x7))
    {
    case E_V8HImode:
      if (GET_MODE (x8) != E_V8HImode
          || !nonimmediate_operand (operands[1], E_HImode)
          || !const0_operand (operands[2], E_V8HImode))
        return -1;
      return 0;

    case E_V8HFmode:
      if (GET_MODE (x8) != E_V8HFmode
          || !nonimmediate_operand (operands[1], E_HFmode)
          || !const0_operand (operands[2], E_V8HFmode))
        return -1;
      return 1;

    case E_V8BFmode:
      if (GET_MODE (x8) != E_V8BFmode
          || !nonimmediate_operand (operands[1], E_BFmode)
          || !const0_operand (operands[2], E_V8BFmode))
        return -1;
      return 2;

    default:
      return -1;
    }
}

int
pattern1047 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6;
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
  if (GET_MODE (x4) != i2)
    return -1;
  x5 = XEXP (x4, 0);
  if (GET_MODE (x5) != i2)
    return -1;
  x6 = XEXP (x5, 0);
  if (!register_operand (x6, i1))
    return -1;
  return 0;
}

int
pattern1052 (rtx x1, machine_mode i1, machine_mode i2)
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
      || !vector_operand (operands[2], i1))
    return -1;
  return 0;
}

int
pattern1055 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 0);
  if (!register_operand (x3, E_DImode))
    return -1;
  x4 = XEXP (x2, 1);
  x5 = XEXP (x4, 0);
  if (GET_MODE (x5) != E_SImode)
    return -1;
  x6 = XVECEXP (x1, 0, 1);
  x7 = XEXP (x6, 0);
  if (!register_operand (x7, E_SImode))
    return -1;
  x8 = XEXP (x6, 1);
  if (GET_MODE (x8) != E_SImode)
    return -1;
  switch (GET_CODE (x5))
    {
    case DIV:
      return 0;

    case UDIV:
      return 1;

    case MOD:
      return 2;

    case UMOD:
      return 3;

    default:
      return -1;
    }
}

int
pattern1065 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6;
  int res ATTRIBUTE_UNUSED;
  if (peep2_current_count < 3
      || GET_CODE (x1) != SET)
    return -1;
  x2 = XEXP (x1, 1);
  operands[2] = x2;
  if (!general_reg_operand (operands[2], i1))
    return -1;
  x3 = XEXP (x1, 0);
  if (!rtx_equal_p (x3, operands[1]))
    return -1;
  x4 = PATTERN (peep2_next_insn (2));
  if (GET_CODE (x4) != SET)
    return -1;
  x5 = XEXP (x4, 1);
  if (!rtx_equal_p (x5, operands[0]))
    return -1;
  x6 = XEXP (x4, 0);
  if (!rtx_equal_p (x6, operands[2]))
    return -1;
  return 0;
}

int
pattern1074 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], E_QImode)
      || GET_MODE (x1) != E_QImode)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != E_QImode)
    return -1;
  return pattern741 (); /* [-1, 5] */
}

int
pattern1081 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1)
    return -1;
  x2 = XEXP (x1, 0);
  return pattern1080 (x2); /* [-1, 11] */
}

int
pattern1087 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1)
    return -1;
  x2 = XEXP (x1, 0);
  return pattern1086 (x2); /* [-1, 11] */
}

int
pattern1092 (rtx x1, machine_mode i1)
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
pattern1097 (rtx x1, machine_mode i1)
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

    case E_V8SFmode:
      if (!nonimmediate_operand (operands[1], E_V8SFmode))
        return -1;
      return 1;

    case E_V8DFmode:
      if (!nonimmediate_operand (operands[1], E_V8DFmode))
        return -1;
      return 2;

    default:
      return -1;
    }
}

int
pattern1101 (rtx x1, machine_mode i1, machine_mode i2, machine_mode i3)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i2)
      || GET_MODE (x1) != i2)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != i2
      || !register_operand (operands[1], i3)
      || !vector_operand (operands[2], i3)
      || !nonimm_or_0_operand (operands[3], i2)
      || !register_operand (operands[4], i1))
    return -1;
  return 0;
}

int
pattern1107 (rtx x1, machine_mode i1)
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
      || !register_operand (operands[1], i1)
      || !nonimmediate_operand (operands[2], i1)
      || !nonimm_or_0_operand (operands[4], i1))
    return -1;
  return 0;
}

int
pattern1115 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1
      || !nonimmediate_operand (operands[2], i1)
      || !register_operand (operands[1], i1)
      || !avx2_pblendw_operand (operands[3], E_SImode))
    return -1;
  return 0;
}

int
pattern1122 (rtx x1, machine_mode i1, machine_mode i2, machine_mode i3, machine_mode i4)
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
  if (GET_MODE (x3) != i4
      || !nonimmediate_operand (operands[2], i3))
    return -1;
  x4 = XEXP (x2, 1);
  return pattern1121 (x4, 
i1, 
i2, 
i3, 
i4); /* [-1, 0] */
}

int
pattern1128 (rtx x1, machine_mode i1, machine_mode i2, machine_mode i3)
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
      || !register_operand (operands[3], i3))
    return -1;
  x4 = XEXP (x2, 2);
  if (GET_MODE (x4) != i2
      || !register_operand (operands[4], i1))
    return -1;
  return 0;
}

int
pattern1135 (rtx x1, machine_mode i1)
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
pattern1141 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (!nonimmediate_operand (operands[0], i1)
      || GET_MODE (x1) != i1)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != i2
      || !nonimmediate_operand (operands[1], i1))
    return -1;
  return 0;
}

int
pattern1148 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 1);
  x3 = XEXP (x2, 0);
  operands[2] = x3;
  switch (GET_MODE (operands[0]))
    {
    case E_SImode:
      x4 = XVECEXP (x1, 0, 0);
      x5 = XEXP (x4, 1);
      return pattern1147 (x5, 
E_SImode); /* [-1, 1] */

    case E_DImode:
      x4 = XVECEXP (x1, 0, 0);
      x5 = XEXP (x4, 1);
      res = pattern1147 (x5, 
E_DImode);
      if (res >= 0)
        return res + 2; /* [2, 3] */
      return -1;

    default:
      return -1;
    }
}

int
pattern1157 (rtx x1, machine_mode i1)
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
      || !x86_64_general_operand (operands[2], i1))
    return -1;
  return 0;
}

int
pattern1166 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  if (!nonimmediate_operand (operands[0], i1)
      || GET_MODE (x1) != i1
      || !nonimmediate_operand (operands[1], i1))
    return -1;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  return pattern1165 (x3); /* [-1, 2] */
}

int
pattern1171 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4;
  int res ATTRIBUTE_UNUSED;
  if (!nonmemory_operand (operands[2], E_QImode))
    return -1;
  x2 = XEXP (x1, 0);
  switch (GET_CODE (x2))
    {
    case REG:
    case SUBREG:
    case MEM:
      operands[0] = x2;
      switch (GET_MODE (operands[0]))
        {
        case E_SImode:
          if (!nonimmediate_operand (operands[0], E_SImode))
            return -1;
          x3 = XEXP (x1, 1);
          if (GET_MODE (x3) != E_SImode
              || !nonimmediate_operand (operands[1], E_SImode))
            return -1;
          return 0;

        case E_DImode:
          if (!nonimmediate_operand (operands[0], E_DImode))
            return -1;
          x3 = XEXP (x1, 1);
          if (GET_MODE (x3) != E_DImode
              || !nonimmediate_operand (operands[1], E_DImode))
            return -1;
          return 1;

        case E_QImode:
          if (!nonimmediate_operand (operands[0], E_QImode))
            return -1;
          x3 = XEXP (x1, 1);
          if (GET_MODE (x3) != E_QImode
              || !nonimmediate_operand (operands[1], E_QImode))
            return -1;
          return 2;

        case E_HImode:
          if (!nonimmediate_operand (operands[0], E_HImode))
            return -1;
          x3 = XEXP (x1, 1);
          if (GET_MODE (x3) != E_HImode
              || !nonimmediate_operand (operands[1], E_HImode))
            return -1;
          return 3;

        default:
          return -1;
        }

    case STRICT_LOW_PART:
      x4 = XEXP (x2, 0);
      operands[0] = x4;
      x3 = XEXP (x1, 1);
      res = pattern373 (x3);
      if (res >= 0)
        return res + 4; /* [4, 5] */
      return -1;

    default:
      return -1;
    }
}

int
pattern1198 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1
      || !ix86_comparison_operator (operands[1], E_VOIDmode)
      || !nonimmediate_operand (operands[2], i1)
      || !nonimmediate_operand (operands[3], i1))
    return -1;
  return 0;
}

int
pattern1202 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], E_QImode)
      || GET_MODE (x1) != E_QImode)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != E_QImode
      || !const_0_to_31_operand (operands[3], E_SImode))
    return -1;
  return 0;
}

int
pattern1207 (rtx x1, machine_mode i1)
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
      || !x86_64_general_operand (operands[2], i1))
    return -1;
  return 0;
}

int
pattern1214 (rtx x1, machine_mode i1, machine_mode i2)
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
  return 0;
}

int
pattern1220 (rtx x1, machine_mode i1)
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

    case E_V8SFmode:
      if (!nonimmediate_operand (operands[1], E_V8SFmode))
        return -1;
      return 1;

    case E_V8DFmode:
      if (!nonimmediate_operand (operands[1], E_V8DFmode))
        return -1;
      return 2;

    default:
      return -1;
    }
}

int
pattern1229 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 2);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  operands[4] = x4;
  switch (GET_MODE (operands[0]))
    {
    case E_V16QImode:
      if (!register_operand (operands[0], E_V16QImode)
          || GET_MODE (x1) != E_V16QImode
          || !vector_operand (operands[1], E_V16QImode)
          || !register_operand (operands[2], E_V16QImode)
          || GET_MODE (x2) != E_V16QImode)
        return -1;
      switch (GET_MODE (x3))
        {
        case E_V4SImode:
          if (!register_operand (operands[3], E_V4SImode)
              || !vector_all_ones_operand (operands[4], E_V4SImode))
            return -1;
          return 0;

        case E_V2DImode:
          if (!register_operand (operands[3], E_V2DImode)
              || !vector_all_ones_operand (operands[4], E_V2DImode))
            return -1;
          return 1;

        default:
          return -1;
        }

    case E_V32QImode:
      if (!register_operand (operands[0], E_V32QImode)
          || GET_MODE (x1) != E_V32QImode
          || !vector_operand (operands[1], E_V32QImode)
          || !register_operand (operands[2], E_V32QImode)
          || GET_MODE (x2) != E_V32QImode)
        return -1;
      switch (GET_MODE (x3))
        {
        case E_V8SImode:
          if (!register_operand (operands[3], E_V8SImode)
              || !vector_all_ones_operand (operands[4], E_V8SImode))
            return -1;
          return 2;

        case E_V4DImode:
          if (!register_operand (operands[3], E_V4DImode)
              || !vector_all_ones_operand (operands[4], E_V4DImode))
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
pattern1248 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1
      || !bcst_vector_operand (operands[1], i1)
      || !vector_all_ones_operand (operands[2], i1)
      || !register_operand (operands[3], i1))
    return -1;
  return 0;
}

int
pattern1255 (rtx x1, machine_mode i1)
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
      || !register_operand (operands[1], i1)
      || !const0_operand (operands[3], i1)
      || !const0_operand (operands[4], i1))
    return -1;
  return 0;
}

int
pattern1261 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!vector_all_ones_operand (operands[3], i1)
      || !const0_operand (operands[4], i1)
      || GET_MODE (x1) != i2
      || !vector_operand (operands[0], i1)
      || !const0_operand (operands[1], i1))
    return -1;
  return 0;
}

int
pattern1266 ()
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  switch (GET_MODE (operands[3]))
    {
    case E_HImode:
      if (!extract_operator (operands[3], E_HImode)
          || !extract_operator (operands[4], E_HImode))
        return -1;
      return 0;

    case E_SImode:
      if (!extract_operator (operands[3], E_SImode)
          || !extract_operator (operands[4], E_SImode))
        return -1;
      return 1;

    case E_DImode:
      if (!extract_operator (operands[3], E_DImode)
          || !extract_operator (operands[4], E_DImode))
        return -1;
      return 2;

    default:
      return -1;
    }
}

int
pattern1277 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != i1
      || !nonimmediate_operand (operands[1], i1)
      || !vector_operand (operands[2], i1))
    return -1;
  x3 = XVECEXP (x2, 0, 2);
  if (GET_MODE (x3) != i1
      || !register_operand (operands[4], i2))
    return -1;
  return 0;
}

int
pattern1287 (rtx x1, machine_mode i1, machine_mode i2, machine_mode i3, machine_mode i4)
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
  if (GET_MODE (x3) != i4
      || !nonimmediate_operand (operands[1], i3)
      || !nonimm_or_0_operand (operands[2], i1)
      || !register_operand (operands[3], i2))
    return -1;
  return 0;
}

int
pattern1298 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i2)
      || GET_MODE (x1) != i2)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != i2)
    return -1;
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) != i2
      || !nonimmediate_operand (operands[1], i2)
      || !nonimmediate_operand (operands[2], i2)
      || !nonimmediate_operand (operands[3], i2)
      || !register_operand (operands[4], i1))
    return -1;
  return 0;
}

int
pattern1309 (rtx x1, machine_mode i1, machine_mode i2, machine_mode i3)
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
      || !nonimmediate_operand (operands[1], i2)
      || !nonimm_or_0_operand (operands[2], i1)
      || !register_operand (operands[3], i3))
    return -1;
  return 0;
}

int
pattern1315 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  x5 = XEXP (x4, 1);
  x6 = XVECEXP (x5, 0, 0);
  if (GET_CODE (x6) != CONST_INT)
    return -1;
  x7 = XVECEXP (x5, 0, 1);
  if (GET_CODE (x7) != CONST_INT)
    return -1;
  x8 = XEXP (x2, 1);
  x9 = XEXP (x8, 0);
  x10 = XEXP (x9, 1);
  if (XVECLEN (x10, 0) != 2)
    return -1;
  x11 = XVECEXP (x10, 0, 0);
  if (GET_CODE (x11) != CONST_INT)
    return -1;
  x12 = XVECEXP (x10, 0, 1);
  if (GET_CODE (x12) != CONST_INT
      || !register_operand (operands[0], E_V2DImode)
      || GET_MODE (x1) != E_V2DImode
      || GET_MODE (x2) != E_V2DImode
      || GET_MODE (x3) != E_V2DImode
      || GET_MODE (x4) != E_V2SImode
      || !nonimmediate_operand (operands[1], E_V4SImode))
    return -1;
  return 0;
}

int
pattern1327 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
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
  return 0;
}

int
pattern1335 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1
      || !vector_all_ones_operand (operands[2], i1)
      || !const0_operand (operands[3], i1)
      || !register_operand (operands[1], i2)
      || !register_operand (operands[4], i1))
    return -1;
  return 0;
}

int
pattern1342 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  operands[2] = x2;
  if (!general_reg_operand (operands[2], i1))
    return -1;
  x3 = XEXP (x1, 0);
  if (!rtx_equal_p (x3, operands[1]))
    return -1;
  x4 = PATTERN (peep2_next_insn (2));
  x5 = XEXP (x4, 1);
  if (!rtx_equal_p (x5, operands[0]))
    return -1;
  x6 = XEXP (x4, 0);
  if (!rtx_equal_p (x6, operands[2]))
    return -1;
  return 0;
}

int
pattern1350 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7;
  int res ATTRIBUTE_UNUSED;
  if (!general_reg_operand (operands[0], i1)
      || GET_CODE (x1) != PARALLEL
      || XVECLEN (x1, 0) != 2)
    return -1;
  x2 = XVECEXP (x1, 0, 0);
  if (GET_CODE (x2) != SET)
    return -1;
  x3 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x3) != CLOBBER)
    return -1;
  x4 = XEXP (x3, 0);
  if (GET_CODE (x4) != REG
      || REGNO (x4) != 17
      || GET_MODE (x4) != E_CCmode)
    return -1;
  x5 = XEXP (x2, 1);
  if (GET_MODE (x5) != i1)
    return -1;
  x6 = XEXP (x2, 0);
  if (!rtx_equal_p (x6, operands[0]))
    return -1;
  switch (GET_CODE (x5))
    {
    case PLUS:
      x7 = XEXP (x5, 0);
      if (!rtx_equal_p (x7, operands[0]))
        return -1;
      return 0;

    case IOR:
      x7 = XEXP (x5, 0);
      if (!rtx_equal_p (x7, operands[0]))
        return -1;
      return 1;

    case XOR:
      x7 = XEXP (x5, 0);
      if (!rtx_equal_p (x7, operands[0]))
        return -1;
      return 2;

    default:
      return -1;
    }
}

int
pattern1367 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != i1
      || !vector_operand (operands[1], i1)
      || !vector_operand (operands[2], i1))
    return -1;
  x3 = XVECEXP (x2, 0, 2);
  if (GET_MODE (x3) != i1
      || !vector_operand (operands[3], i1)
      || !const0_operand (operands[4], i1)
      || !register_operand (operands[5], i2))
    return -1;
  return 0;
}

int
pattern1376 (rtx x1, machine_mode i1)
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
      || !nonimmediate_operand (operands[3], i1)
      || !const0_operand (operands[4], i1))
    return -1;
  return 0;
}

int
pattern1386 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i2)
      || GET_MODE (x1) != i2)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != i2)
    return -1;
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) != i2
      || !nonimmediate_operand (operands[1], i2)
      || pattern1374 (
i1, 
i2) != 0)
    return -1;
  return 0;
}

int
pattern1395 (rtx x1, machine_mode i1)
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
      || !register_operand (operands[2], i1)
      || !nonimm_or_0_operand (operands[4], i1))
    return -1;
  return 0;
}

int
pattern1405 (rtx x1, machine_mode i1)
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
      || !register_operand (operands[2], i1))
    return -1;
  return 0;
}

int
pattern1414 (rtx x1, machine_mode i1, machine_mode i2)
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
      || !nonimmediate_operand (operands[2], i1))
    return -1;
  return 0;
}

int
pattern1419 (rtx x1, machine_mode i1)
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
pattern1426 (rtx x1, rtx_code i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 1);
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) != E_DImode)
    return -1;
  x4 = XEXP (x3, 0);
  if (GET_CODE (x4) != i1
      || GET_MODE (x4) != E_SImode)
    return -1;
  x5 = XVECEXP (x1, 0, 0);
  x6 = XEXP (x5, 1);
  x7 = XEXP (x6, 0);
  if (GET_MODE (x7) != E_SImode
      || !nonimmediate_operand (operands[1], E_SImode)
      || !x86_64_general_operand (operands[2], E_SImode)
      || !register_operand (operands[0], E_DImode))
    return -1;
  x8 = XEXP (x4, 0);
  if (!rtx_equal_p (x8, operands[1]))
    return -1;
  x9 = XEXP (x4, 1);
  if (!rtx_equal_p (x9, operands[2]))
    return -1;
  return 0;
}

int
pattern1440 (rtx x1)
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
      return pattern1439 (x1, 
E_QImode); /* [-1, 0] */

    case E_HImode:
      if (pattern1439 (x1, 
E_HImode) != 0)
        return -1;
      return 1;

    case E_SImode:
      if (pattern1439 (x1, 
E_SImode) != 0)
        return -1;
      return 2;

    case E_DImode:
      if (pattern1439 (x1, 
E_DImode) != 0)
        return -1;
      return 3;

    default:
      return -1;
    }
}

int
pattern1451 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], E_QImode)
      || GET_MODE (x1) != E_QImode)
    return -1;
  x2 = XVECEXP (x1, 0, 0);
  if (GET_MODE (x2) != E_QImode)
    return -1;
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) != E_QImode
      || !const_0_to_31_operand (operands[3], E_SImode))
    return -1;
  return 0;
}

int
pattern1459 (rtx x1, machine_mode i1, machine_mode i2, machine_mode i3)
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
      || !nonimmediate_operand (operands[3], i2)
      || !const0_operand (operands[5], i1)
      || !register_operand (operands[6], i3))
    return -1;
  return 0;
}

int
pattern1468 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1
      || !vector_operand (operands[1], i1)
      || !vector_operand (operands[2], i1))
    return -1;
  x2 = XEXP (x1, 2);
  if (GET_MODE (x2) != E_QImode)
    return -1;
  x3 = XVECEXP (x2, 0, 0);
  if (GET_MODE (x3) != i1)
    return -1;
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) != i2
      || !vector_operand (operands[3], i2)
      || !const0_operand (operands[4], i1))
    return -1;
  return 0;
}

int
pattern1479 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], E_V16SImode)
      || GET_MODE (x1) != E_V16SImode)
    return -1;
  x2 = XVECEXP (x1, 0, 0);
  if (GET_MODE (x2) != E_V16SImode)
    return -1;
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) != E_V16SImode
      || !nonimm_or_0_operand (operands[2], E_V16SImode)
      || !register_operand (operands[3], E_HImode))
    return -1;
  switch (GET_MODE (operands[1]))
    {
    case E_V16HFmode:
      if (!register_operand (operands[1], E_V16HFmode))
        return -1;
      return 0;

    case E_V16SFmode:
      if (!register_operand (operands[1], E_V16SFmode))
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern1487 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], E_V4SFmode)
      || GET_MODE (x1) != E_V4SFmode)
    return -1;
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case E_V4HFmode:
      if (!memory_operand (operands[1], E_V8HFmode))
        return -1;
      return 0;

    case E_V4BFmode:
      if (!memory_operand (operands[1], E_V8BFmode))
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern1498 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!nonimmediate_operand (operands[0], i1)
      || GET_MODE (x1) != i1
      || !nonimmediate_operand (operands[1], i1)
      || !nonmemory_operand (operands[2], E_QImode))
    return -1;
  return 0;
}

int
pattern1502 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 1);
  x3 = XEXP (x2, 1);
  x4 = XEXP (x3, 0);
  if (!rtx_equal_p (x4, operands[2]))
    return -1;
  x5 = XEXP (x3, 1);
  if (!rtx_equal_p (x5, operands[3]))
    return -1;
  x6 = XVECEXP (x1, 0, 2);
  switch (GET_CODE (x6))
    {
    case UNSPEC:
      if (XVECLEN (x6, 0) != 1
          || XINT (x6, 1) != 32)
        return -1;
      x7 = XVECEXP (x6, 0, 0);
      if (x7 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
        return -1;
      return 0;

    case USE:
      x8 = XEXP (x6, 0);
      operands[4] = x8;
      if (!register_operand (operands[4], E_SImode))
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern1517 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != i1
      || !nonimmediate_operand (operands[2], i2))
    return -1;
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) != i2
      || !register_operand (operands[1], i1)
      || !nonimm_or_0_operand (operands[3], i1))
    return -1;
  return 0;
}

int
pattern1528 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1))
    return -1;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) != i1)
    return -1;
  x4 = XVECEXP (x1, 0, 1);
  if (GET_MODE (x4) != i1)
    return -1;
  x5 = XVECEXP (x4, 0, 0);
  if (GET_MODE (x5) != i1)
    return -1;
  return 0;
}

int
pattern1535 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  switch (GET_CODE (x3))
    {
    case COMPARE:
      x4 = XEXP (x3, 0);
      if (!plusminuslogic_operator (x4, i1))
        return -1;
      operands[3] = x4;
      x5 = XEXP (x3, 1);
      if (x5 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
        return -1;
      x6 = XEXP (x2, 0);
      if (GET_CODE (x6) != REG
          || REGNO (x6) != 17)
        return -1;
      x7 = XVECEXP (x1, 0, 1);
      if (GET_CODE (x7) != SET)
        return -1;
      x8 = XEXP (x4, 1);
      operands[2] = x8;
      if (!nonmemory_operand (operands[2], i1))
        return -1;
      x9 = XEXP (x4, 0);
      if (!rtx_equal_p (x9, operands[0]))
        return -1;
      x10 = XEXP (x7, 1);
      if (!rtx_equal_p (x10, operands[3]))
        return -1;
      x11 = XEXP (x7, 0);
      if (!rtx_equal_p (x11, operands[0]))
        return -1;
      return 0;

    case PLUS:
    case MINUS:
    case AND:
    case IOR:
    case XOR:
      if (peep2_current_count < 4)
        return -1;
      operands[3] = x3;
      if (!plusminuslogic_operator (operands[3], E_SImode))
        return -1;
      x7 = XVECEXP (x1, 0, 1);
      if (GET_CODE (x7) != CLOBBER)
        return -1;
      x11 = XEXP (x7, 0);
      if (GET_CODE (x11) != REG
          || REGNO (x11) != 17
          || GET_MODE (x11) != E_CCmode)
        return -1;
      x6 = XEXP (x2, 0);
      operands[4] = x6;
      if (!register_operand (operands[4], E_SImode))
        return -1;
      x5 = XEXP (x3, 1);
      operands[2] = x5;
      if (!nonmemory_operand (operands[2], E_SImode))
        return -1;
      x4 = XEXP (x3, 0);
      if (!rtx_equal_p (x4, operands[4]))
        return -1;
      x12 = PATTERN (peep2_next_insn (3));
      if (GET_CODE (x12) != SET)
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern1564 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!nonimmediate_operand (operands[0], i1)
      || GET_MODE (x1) != i1
      || !nonimmediate_operand (operands[1], i1)
      || !ix86_carry_flag_operator (operands[2], i1))
    return -1;
  return 0;
}

int
pattern1572 (rtx x1, int *pnum_clobbers)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 1);
  x3 = XEXP (x2, 1);
  x4 = XEXP (x3, 0);
  if (!rtx_equal_p (x4, operands[2]))
    return -1;
  x5 = XEXP (x3, 1);
  if (!rtx_equal_p (x5, operands[3]))
    return -1;
  switch (GET_CODE (operands[3]))
    {
    case REG:
    case SUBREG:
    case MEM:
      if (!nonimmediate_operand (operands[3], E_SImode))
        return -1;
      x6 = XVECEXP (x1, 0, 2);
      return pattern1571 (x6, pnum_clobbers); /* [-1, 2] */

    case CONST_INT:
      if (!const_int_operand (operands[3], E_SImode))
        return -1;
      x6 = XVECEXP (x1, 0, 2);
      if (pattern953 (x6, 
E_CCmode, 
17) != 0)
        return -1;
      return 3;

    default:
      return -1;
    }
}

int
pattern1586 (rtx x1, machine_mode i1, machine_mode i2)
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
  x4 = XVECEXP (x3, 0, 2);
  if (GET_MODE (x4) != i1
      || !register_operand (operands[4], i2))
    return -1;
  return 0;
}

int
pattern1597 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i2)
      || GET_MODE (x1) != i2)
    return -1;
  x2 = XVECEXP (x1, 0, 0);
  if (GET_MODE (x2) != i2)
    return -1;
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) != i2)
    return -1;
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) != i2
      || !register_operand (operands[1], i2))
    return -1;
  x5 = XEXP (x3, 2);
  return pattern1590 (x5, 
i1, 
i2); /* [-1, 0] */
}

int
pattern1604 (machine_mode i1)
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

    case E_V2DImode:
      if (!register_operand (operands[2], E_V2DImode))
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern1613 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i2)
      || GET_MODE (x1) != i2
      || !register_operand (operands[6], E_QImode)
      || !vsib_mem_operator (operands[5], i1))
    return -1;
  x2 = XVECEXP (x1, 0, 2);
  x3 = XEXP (x2, 0);
  switch (GET_MODE (x3))
    {
    case E_SImode:
      return pattern1612 (
E_SImode); /* [-1, 1] */

    case E_DImode:
      res = pattern1612 (
E_DImode);
      if (res >= 0)
        return res + 2; /* [2, 3] */
      return -1;

    default:
      return -1;
    }
}

int
pattern1625 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6;
  int res ATTRIBUTE_UNUSED;
  if (!nonimmediate_operand (operands[1], i1)
      || !general_operand (operands[2], i1)
      || !nonimmediate_operand (operands[0], i1))
    return -1;
  x2 = XVECEXP (x1, 0, 1);
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) != i1)
    return -1;
  x4 = XVECEXP (x1, 0, 0);
  x5 = XEXP (x4, 1);
  x6 = XEXP (x5, 1);
  if (!rtx_equal_p (x6, operands[2]))
    return -1;
  return 0;
}

int
pattern1635 (rtx x1, machine_mode i1, machine_mode i2)
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
  if (GET_MODE (x3) != i2)
    return -1;
  x4 = XEXP (x1, 1);
  if (!nonimm_or_0_operand (x4, i1))
    return -1;
  return 0;
}

int
pattern1642 (rtx x1, machine_mode i1, machine_mode i2)
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
      || !register_operand (operands[3], i1)
      || !const0_operand (operands[4], i1)
      || !register_operand (operands[5], i2))
    return -1;
  return 0;
}

int
pattern1652 (machine_mode i1)
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

    case E_V4DImode:
      if (!register_operand (operands[3], E_V4DImode))
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern1661 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!nonimmediate_operand (operands[1], i1)
      || !x86_64_hilo_general_operand (operands[2], i1)
      || !nonimmediate_operand (operands[0], i1)
      || GET_MODE (x1) != i1)
    return -1;
  return 0;
}

int
pattern1668 (rtx x1, machine_mode i1, machine_mode i2)
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
      || !register_operand (operands[2], i1))
    return -1;
  return 0;
}

int
pattern1678 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], E_SImode))
    return -1;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  operands[1] = x3;
  if (!nonimmediate_operand (operands[1], E_SImode))
    return -1;
  x4 = XEXP (x1, 1);
  if (GET_MODE (x4) != E_SImode)
    return -1;
  x5 = XEXP (x4, 0);
  if (GET_MODE (x5) != E_DImode)
    return -1;
  x6 = XEXP (x5, 0);
  if (GET_MODE (x6) != E_DImode)
    return -1;
  x7 = XEXP (x6, 0);
  operands[2] = x7;
  if (!register_operand (operands[2], E_SImode))
    return -1;
  x8 = XEXP (x5, 1);
  operands[4] = x8;
  if (!const_0_to_63_operand (operands[4], E_QImode))
    return -1;
  return 0;
}

int
pattern1691 ()
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  switch (GET_MODE (operands[3]))
    {
    case E_HImode:
      if (!extract_operator (operands[3], E_HImode))
        return -1;
      return 0;

    case E_SImode:
      if (!extract_operator (operands[3], E_SImode))
        return -1;
      return 1;

    case E_DImode:
      if (!extract_operator (operands[3], E_DImode))
        return -1;
      return 2;

    default:
      return -1;
    }
}

int
pattern1696 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i2)
      || GET_MODE (x1) != i2)
    return -1;
  x2 = XVECEXP (x1, 0, 0);
  if (GET_MODE (x2) != i2)
    return -1;
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) != i2
      || !register_operand (operands[1], i2)
      || !register_operand (operands[2], i2)
      || !register_operand (operands[3], i1))
    return -1;
  return 0;
}

int
pattern1704 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XVECEXP (x2, 0, 4);
  if (XWINT (x3, 0) != 6L)
    return -1;
  x4 = XVECEXP (x2, 0, 5);
  if (XWINT (x4, 0) != 14L)
    return -1;
  x5 = XVECEXP (x2, 0, 6);
  if (XWINT (x5, 0) != 7L)
    return -1;
  x6 = XVECEXP (x2, 0, 7);
  if (XWINT (x6, 0) != 15L)
    return -1;
  x7 = XEXP (x1, 0);
  x8 = XEXP (x7, 1);
  operands[2] = x8;
  return 0;
}

int
pattern1714 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[6], i1)
      || !register_operand (operands[2], i2)
      || !scratch_operand (operands[1], i1))
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
pattern1724 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12, x13, x14, x15, x16, x17;
  rtx x18, x19, x20, x21, x22, x23;
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
  if (!register_operand (operands[3], E_SImode))
    return -1;
  x6 = XVECEXP (x3, 0, 2);
  operands[4] = x6;
  if (!nonimmediate_operand (operands[4], E_V16QImode))
    return -1;
  x7 = XVECEXP (x3, 0, 3);
  operands[5] = x7;
  if (!register_operand (operands[5], E_SImode))
    return -1;
  x8 = XVECEXP (x3, 0, 4);
  operands[6] = x8;
  if (!const_0_to_255_operand (operands[6], E_SImode))
    return -1;
  x9 = XVECEXP (x1, 0, 1);
  x10 = XEXP (x9, 0);
  operands[1] = x10;
  if (!register_operand (operands[1], E_V16QImode))
    return -1;
  x11 = XEXP (x9, 1);
  x12 = XVECEXP (x11, 0, 0);
  if (!rtx_equal_p (x12, operands[2]))
    return -1;
  x13 = XVECEXP (x11, 0, 1);
  if (!rtx_equal_p (x13, operands[3]))
    return -1;
  x14 = XVECEXP (x11, 0, 2);
  if (!rtx_equal_p (x14, operands[4]))
    return -1;
  x15 = XVECEXP (x11, 0, 3);
  if (!rtx_equal_p (x15, operands[5]))
    return -1;
  x16 = XVECEXP (x11, 0, 4);
  if (!rtx_equal_p (x16, operands[6]))
    return -1;
  x17 = XVECEXP (x1, 0, 2);
  x18 = XEXP (x17, 1);
  x19 = XVECEXP (x18, 0, 0);
  if (!rtx_equal_p (x19, operands[2]))
    return -1;
  x20 = XVECEXP (x18, 0, 1);
  if (!rtx_equal_p (x20, operands[3]))
    return -1;
  x21 = XVECEXP (x18, 0, 2);
  if (!rtx_equal_p (x21, operands[4]))
    return -1;
  x22 = XVECEXP (x18, 0, 3);
  if (!rtx_equal_p (x22, operands[5]))
    return -1;
  x23 = XVECEXP (x18, 0, 4);
  if (!rtx_equal_p (x23, operands[6]))
    return -1;
  return 0;
}

int
pattern1752 (rtx x1, machine_mode i1, machine_mode i2)
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
      || !nonimmediate_operand (operands[2], i1)
      || !const_0_to_7_operand (operands[3], E_VOIDmode)
      || !const_0_to_7_operand (operands[4], E_VOIDmode)
      || !const_0_to_7_operand (operands[5], E_VOIDmode)
      || !const_0_to_7_operand (operands[6], E_VOIDmode)
      || !const_8_to_15_operand (operands[7], E_VOIDmode)
      || !const_8_to_15_operand (operands[8], E_VOIDmode)
      || !const_8_to_15_operand (operands[9], E_VOIDmode)
      || !const_8_to_15_operand (operands[10], E_VOIDmode)
      || !nonimm_or_0_operand (operands[11], i1))
    return -1;
  return 0;
}

int
pattern1767 (machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!vsib_address_operand (operands[0], i1))
    return -1;
  switch (GET_MODE (operands[2]))
    {
    case E_V16SImode:
      return pattern1765 (
E_HImode, 
E_V16SFmode, 
E_V16SImode); /* [-1, 0] */

    case E_V8DImode:
      if (pattern1765 (
E_QImode, 
E_V8SFmode, 
E_V8DImode) != 0)
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern1775 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[1], i1)
      || !register_operand (operands[0], i1)
      || GET_MODE (x1) != i1
      || !register_operand (operands[3], i1)
      || !register_operand (operands[4], i1))
    return -1;
  return 0;
}

int
pattern1781 (rtx x1, int i1, int i2, int i3, int i4)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
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
  if (x6 != const_int_rtx[MAX_SAVED_CONST_INT + 8])
    return -1;
  x7 = XVECEXP (x1, 0, 17);
  if (x7 != const_int_rtx[MAX_SAVED_CONST_INT + 9])
    return -1;
  x8 = XVECEXP (x1, 0, 18);
  if (x8 != const_int_rtx[MAX_SAVED_CONST_INT + 10])
    return -1;
  x9 = XVECEXP (x1, 0, 19);
  if (x9 != const_int_rtx[MAX_SAVED_CONST_INT + 11])
    return -1;
  return 0;
}

int
pattern1795 ()
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  switch (GET_MODE (operands[3]))
    {
    case E_HImode:
      if (!extract_operator (operands[3], E_HImode))
        return -1;
      return 0;

    case E_SImode:
      if (!extract_operator (operands[3], E_SImode))
        return -1;
      return 1;

    case E_DImode:
      if (!extract_operator (operands[3], E_DImode))
        return -1;
      return 2;

    default:
      return -1;
    }
}

int
pattern1803 (rtx x1, machine_mode i1, machine_mode i2)
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
      || !nonimmediate_operand (operands[1], i1))
    return -1;
  x4 = XEXP (x1, 1);
  operands[2] = x4;
  if (!nonimm_or_0_operand (operands[2], i1))
    return -1;
  x5 = XEXP (x1, 2);
  operands[3] = x5;
  x6 = XEXP (x3, 1);
  if (!rtx_equal_p (x6, operands[1]))
    return -1;
  return 0;
}

int
pattern1815 (machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!vsib_address_operand (operands[0], i1))
    return -1;
  switch (GET_MODE (operands[2]))
    {
    case E_V8SImode:
      if (!register_operand (operands[2], E_V8SImode)
          || !register_operand (operands[3], E_V8SImode))
        return -1;
      return 0;

    case E_V4DImode:
      if (!register_operand (operands[2], E_V4DImode)
          || !register_operand (operands[3], E_V4SImode))
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern1823 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[2], i1)
      || !register_operand (operands[0], i1))
    return -1;
  x2 = XVECEXP (x1, 0, 1);
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) != i1
      || !register_operand (operands[3], i1)
      || !register_operand (operands[5], i1)
      || !register_operand (operands[1], i1))
    return -1;
  x4 = XVECEXP (x1, 0, 2);
  x5 = XEXP (x4, 1);
  if (GET_MODE (x5) != i1
      || !register_operand (operands[4], i1))
    return -1;
  return 0;
}

int
pattern1829 (rtx x1, machine_mode i1)
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
pattern1833 (rtx x1)
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
pattern1842 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  int res ATTRIBUTE_UNUSED;
  operands[5] = x1;
  if (!register_operand (operands[5], i1))
    return -1;
  x2 = PATTERN (peep2_next_insn (3));
  x3 = XEXP (x2, 1);
  if (!rtx_equal_p (x3, operands[5]))
    return -1;
  x4 = XEXP (x2, 0);
  if (!rtx_equal_p (x4, operands[1]))
    return -1;
  x5 = PATTERN (peep2_next_insn (4));
  if (GET_CODE (x5) != SET)
    return -1;
  x6 = XEXP (x5, 1);
  if (GET_CODE (x6) != COMPARE)
    return -1;
  x7 = XEXP (x6, 1);
  if (x7 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
    return -1;
  x8 = XEXP (x5, 0);
  if (GET_CODE (x8) != REG
      || REGNO (x8) != 17)
    return -1;
  x9 = XEXP (x6, 0);
  if (!rtx_equal_p (x9, operands[5]))
    return -1;
  return 0;
}

int
pattern1851 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  x4 = XEXP (x3, 0);
  x5 = XEXP (x4, 0);
  if (GET_MODE (x5) != i1)
    return -1;
  x6 = XEXP (x5, 0);
  if (GET_MODE (x6) != i1
      || !ix86_carry_flag_operator (operands[5], i1)
      || !nonimmediate_operand (operands[1], i1)
      || !x86_64_immediate_operand (operands[2], i1))
    return -1;
  x7 = XEXP (x3, 1);
  if (GET_MODE (x7) != i2
      || !ix86_carry_flag_operator (operands[4], i2)
      || !const_scalar_int_operand (operands[6], i2)
      || !nonimmediate_operand (operands[0], i1))
    return -1;
  x8 = XVECEXP (x1, 0, 1);
  x9 = XEXP (x8, 1);
  if (GET_MODE (x9) != i1)
    return -1;
  x10 = XEXP (x9, 0);
  if (GET_MODE (x10) != i1)
    return -1;
  return 0;
}

int
pattern1859 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12, x13, x14, x15, x16, x17;
  rtx x18, x19, x20, x21, x22, x23;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  x4 = XEXP (x3, 0);
  x5 = XEXP (x4, 0);
  if (GET_MODE (x5) != i1)
    return -1;
  x6 = XEXP (x5, 0);
  if (GET_MODE (x6) != i1
      || !ix86_carry_flag_operator (operands[4], i1)
      || !general_reg_operand (operands[0], i1)
      || !memory_operand (operands[1], i1))
    return -1;
  x7 = XEXP (x3, 1);
  if (GET_MODE (x7) != i2
      || !ix86_carry_flag_operator (operands[3], i2))
    return -1;
  x8 = XEXP (x7, 1);
  if (GET_MODE (x8) != i2)
    return -1;
  x9 = XVECEXP (x1, 0, 1);
  x10 = XEXP (x9, 1);
  if (GET_MODE (x10) != i1)
    return -1;
  x11 = XEXP (x10, 0);
  if (GET_MODE (x11) != i1)
    return -1;
  x12 = PATTERN (peep2_next_insn (1));
  x13 = XEXP (x12, 1);
  switch (GET_CODE (x13))
    {
    case REG:
      if (!rtx_equal_p (x13, operands[0]))
        return -1;
      x14 = XEXP (x12, 0);
      if (!rtx_equal_p (x14, operands[1]))
        return -1;
      return 0;

    case LTU:
      if (peep2_current_count < 3
          || peep2_current_count < 4
          || GET_MODE (x13) != E_QImode)
        return -1;
      x15 = XEXP (x13, 0);
      if (GET_CODE (x15) != REG
          || REGNO (x15) != 17
          || GET_MODE (x15) != E_CCCmode)
        return -1;
      x16 = XEXP (x13, 1);
      if (x16 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
        return -1;
      x14 = XEXP (x12, 0);
      operands[5] = x14;
      if (!general_reg_operand (operands[5], E_QImode))
        return -1;
      x17 = PATTERN (peep2_next_insn (2));
      if (GET_CODE (x17) != SET)
        return -1;
      x18 = XEXP (x17, 1);
      if (GET_CODE (x18) != ZERO_EXTEND
          || GET_MODE (x18) != i1)
        return -1;
      x19 = XEXP (x17, 0);
      operands[6] = x19;
      if (!general_reg_operand (operands[6], i1))
        return -1;
      x20 = XEXP (x18, 0);
      if (!rtx_equal_p (x20, operands[5]))
        return -1;
      x21 = PATTERN (peep2_next_insn (3));
      if (GET_CODE (x21) != SET)
        return -1;
      x22 = XEXP (x21, 1);
      if (!rtx_equal_p (x22, operands[0]))
        return -1;
      x23 = XEXP (x21, 0);
      if (!rtx_equal_p (x23, operands[1]))
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern1886 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 24);
  if (XWINT (x2, 0) != 28L)
    return -1;
  x3 = XVECEXP (x1, 0, 25);
  if (XWINT (x3, 0) != 60L)
    return -1;
  x4 = XVECEXP (x1, 0, 26);
  if (XWINT (x4, 0) != 29L)
    return -1;
  x5 = XVECEXP (x1, 0, 27);
  if (XWINT (x5, 0) != 61L)
    return -1;
  x6 = XVECEXP (x1, 0, 28);
  if (XWINT (x6, 0) != 30L)
    return -1;
  x7 = XVECEXP (x1, 0, 29);
  if (XWINT (x7, 0) != 62L)
    return -1;
  x8 = XVECEXP (x1, 0, 30);
  if (XWINT (x8, 0) != 31L)
    return -1;
  x9 = XVECEXP (x1, 0, 31);
  if (XWINT (x9, 0) != 63L)
    return -1;
  return 0;
}

 int
recog_9 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  if (GET_CODE (x2) != REG
      || REGNO (x2) != 17)
    return -1;
  x3 = XEXP (x1, 1);
  x4 = XVECEXP (x3, 0, 0);
  switch (GET_CODE (x4))
    {
    case REG:
    case SUBREG:
      operands[0] = x4;
      if (!register_operand (operands[0], E_TFmode)
          || GET_MODE (x2) != E_CCmode
          || GET_MODE (x3) != E_CCmode)
        return -1;
      x5 = XVECEXP (x3, 0, 1);
      operands[1] = x5;
      if (!vector_operand (operands[1], E_TFmode)
          || !
#line 25358 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1))
        return -1;
      return 8949; /* ptesttf2 */

    case AND:
      switch (pattern603 (x1))
        {
        case 0:
          if (!
#line 25373 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1
   && ix86_pre_reload_split ()))
            return -1;
          return 8950; /* *ptestv16qi_and */

        case 1:
          if (!
#line 25373 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1
   && ix86_pre_reload_split ()))
            return -1;
          return 8951; /* *ptestv8hi_and */

        case 2:
          if (!
#line 25373 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1
   && ix86_pre_reload_split ()))
            return -1;
          return 8952; /* *ptestv4si_and */

        case 3:
          if (!
#line 25373 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1
   && ix86_pre_reload_split ()))
            return -1;
          return 8953; /* *ptestv2di_and */

        case 4:
          if (!
#line 25373 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1
   && ix86_pre_reload_split ()))
            return -1;
          return 8954; /* *ptestv1ti_and */

        case 5:
          if (!
#line 25373 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1
   && ix86_pre_reload_split ()))
            return -1;
          return 8955; /* *ptestv4sf_and */

        case 6:
          if (!
#line 25373 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1
   && ix86_pre_reload_split ()))
            return -1;
          return 8956; /* *ptestv2df_and */

        case 7:
          if (!(
#line 25373 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1
   && ix86_pre_reload_split ()) && 
#line 606 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 8957; /* *ptestv32qi_and */

        case 8:
          if (!(
#line 25373 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1
   && ix86_pre_reload_split ()) && 
#line 606 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 8958; /* *ptestv16hi_and */

        case 9:
          if (!(
#line 25373 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1
   && ix86_pre_reload_split ()) && 
#line 607 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 8959; /* *ptestv8si_and */

        case 10:
          if (!(
#line 25373 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1
   && ix86_pre_reload_split ()) && 
#line 607 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 8960; /* *ptestv4di_and */

        case 11:
          if (!(
#line 25373 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1
   && ix86_pre_reload_split ()) && 
#line 607 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 8961; /* *ptestv2ti_and */

        case 12:
          if (!(
#line 25373 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1
   && ix86_pre_reload_split ()) && 
#line 608 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 8962; /* *ptestv8sf_and */

        case 13:
          if (!(
#line 25373 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1
   && ix86_pre_reload_split ()) && 
#line 608 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 8963; /* *ptestv4df_and */

        default:
          return -1;
        }

    default:
      return -1;
    }
}

 int
recog_12 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  operands[0] = x2;
  x3 = XEXP (x1, 1);
  x4 = XVECEXP (x3, 0, 0);
  switch (GET_CODE (x4))
    {
    case CONST_INT:
    case CONST_DOUBLE:
    case CONST_VECTOR:
    case REG:
    case SUBREG:
    case MEM:
      operands[1] = x4;
      x5 = XVECEXP (x3, 0, 2);
      if (GET_CODE (x5) != CONST_INT)
        return -1;
      operands[3] = x5;
      x6 = XVECEXP (x3, 0, 1);
      operands[2] = x6;
      switch (pattern967 (x3))
        {
        case 0:
          switch (GET_MODE (operands[1]))
            {
            case E_HFmode:
              if (register_operand (operands[1], E_HFmode)
                  && nonimmediate_operand (operands[2], E_HFmode)
                  && const_0_to_31_operand (operands[3], E_SImode)
                  && 
#line 19694 "../../gcc/config/i386/i386.md"
(TARGET_AVX512FP16))
                return 1457; /* setcc_hf_mask */
              break;

            case E_V8SImode:
              if (register_operand (operands[1], E_V8SImode)
                  && nonimmediate_operand (operands[2], E_V8SImode)
                  && const_0_to_7_operand (operands[3], E_SImode)
                  && (
#line 4395 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 308 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                return 3279; /* avx512vl_cmpv8si3 */
              break;

            case E_V4SImode:
              if (register_operand (operands[1], E_V4SImode)
                  && nonimmediate_operand (operands[2], E_V4SImode)
                  && const_0_to_7_operand (operands[3], E_SImode)
                  && (
#line 4395 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 308 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                return 3283; /* avx512vl_cmpv4si3 */
              break;

            case E_V8DImode:
              if (register_operand (operands[1], E_V8DImode)
                  && nonimmediate_operand (operands[2], E_V8DImode)
                  && const_0_to_7_operand (operands[3], E_SImode)
                  && (
#line 4395 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 309 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                return 3285; /* avx512f_cmpv8di3 */
              break;

            case E_V4DImode:
              if (register_operand (operands[1], E_V4DImode)
                  && nonimmediate_operand (operands[2], E_V4DImode)
                  && const_0_to_7_operand (operands[3], E_SImode)
                  && (
#line 4395 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 309 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                return 3289; /* avx512vl_cmpv4di3 */
              break;

            case E_V2DImode:
              if (register_operand (operands[1], E_V2DImode)
                  && nonimmediate_operand (operands[2], E_V2DImode)
                  && const_0_to_7_operand (operands[3], E_SImode)
                  && (
#line 4395 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 309 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                return 3293; /* avx512vl_cmpv2di3 */
              break;

            case E_V8HFmode:
              if (register_operand (operands[1], E_V8HFmode)
                  && nonimmediate_operand (operands[2], E_V8HFmode)
                  && const_0_to_31_operand (operands[3], E_SImode)
                  && (
#line 4395 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 312 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL)))
                return 3303; /* avx512fp16_cmpv8hf3 */
              break;

            case E_V8SFmode:
              if (register_operand (operands[1], E_V8SFmode)
                  && nonimmediate_operand (operands[2], E_V8SFmode)
                  && const_0_to_31_operand (operands[3], E_SImode)
                  && (
#line 4395 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 313 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                return 3309; /* avx512vl_cmpv8sf3 */
              break;

            case E_V4SFmode:
              if (register_operand (operands[1], E_V4SFmode)
                  && nonimmediate_operand (operands[2], E_V4SFmode)
                  && const_0_to_31_operand (operands[3], E_SImode)
                  && (
#line 4395 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 313 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                return 3313; /* avx512vl_cmpv4sf3 */
              break;

            case E_V8DFmode:
              if (register_operand (operands[1], E_V8DFmode)
                  && nonimmediate_operand (operands[2], E_V8DFmode)
                  && const_0_to_31_operand (operands[3], E_SImode)
                  && (
#line 4395 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 314 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                return 3315; /* avx512f_cmpv8df3 */
              break;

            case E_V4DFmode:
              if (register_operand (operands[1], E_V4DFmode)
                  && nonimmediate_operand (operands[2], E_V4DFmode)
                  && const_0_to_31_operand (operands[3], E_SImode)
                  && (
#line 4395 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 314 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                return 3319; /* avx512vl_cmpv4df3 */
              break;

            case E_V2DFmode:
              if (register_operand (operands[1], E_V2DFmode)
                  && nonimmediate_operand (operands[2], E_V2DFmode)
                  && const_0_to_31_operand (operands[3], E_SImode)
                  && (
#line 4395 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 314 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                return 3323; /* avx512vl_cmpv2df3 */
              break;

            case E_V8HImode:
              if (register_operand (operands[1], E_V8HImode)
                  && nonimmediate_operand (operands[2], E_V8HImode)
                  && const_0_to_7_operand (operands[3], E_SImode)
                  && (
#line 4487 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 319 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                return 3440; /* avx512vl_cmpv8hi3 */
              break;

            case E_V8BFmode:
              if (register_operand (operands[1], E_V8BFmode)
                  && nonimmediate_operand (operands[2], E_V8BFmode)
                  && const_0_to_31_operand (operands[3], E_VOIDmode)
                  && 
#line 32446 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
                return 10726; /* avx10_2_cmppbf16_v8bf */
              break;

            default:
              break;
            }
          break;

        case 1:
          switch (GET_MODE (operands[1]))
            {
            case E_V16SImode:
              if (register_operand (operands[1], E_V16SImode)
                  && nonimmediate_operand (operands[2], E_V16SImode)
                  && const_0_to_7_operand (operands[3], E_SImode)
                  && (
#line 4395 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 308 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                return 3275; /* avx512f_cmpv16si3 */
              break;

            case E_V16HFmode:
              if (register_operand (operands[1], E_V16HFmode)
                  && nonimmediate_operand (operands[2], E_V16HFmode)
                  && const_0_to_31_operand (operands[3], E_SImode)
                  && (
#line 4395 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 311 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL)))
                return 3299; /* avx512vl_cmpv16hf3 */
              break;

            case E_V16SFmode:
              if (register_operand (operands[1], E_V16SFmode)
                  && nonimmediate_operand (operands[2], E_V16SFmode)
                  && const_0_to_31_operand (operands[3], E_SImode)
                  && (
#line 4395 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 313 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                return 3305; /* avx512f_cmpv16sf3 */
              break;

            case E_V16QImode:
              if (register_operand (operands[1], E_V16QImode)
                  && nonimmediate_operand (operands[2], E_V16QImode)
                  && const_0_to_7_operand (operands[3], E_SImode)
                  && (
#line 4487 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 318 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                return 3432; /* avx512vl_cmpv16qi3 */
              break;

            case E_V16HImode:
              if (register_operand (operands[1], E_V16HImode)
                  && nonimmediate_operand (operands[2], E_V16HImode)
                  && const_0_to_7_operand (operands[3], E_SImode)
                  && (
#line 4487 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 319 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                return 3438; /* avx512vl_cmpv16hi3 */
              break;

            case E_V16BFmode:
              if (register_operand (operands[1], E_V16BFmode)
                  && nonimmediate_operand (operands[2], E_V16BFmode)
                  && const_0_to_31_operand (operands[3], E_VOIDmode)
                  && 
#line 32446 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
                return 10724; /* avx10_2_cmppbf16_v16bf */
              break;

            default:
              break;
            }
          break;

        default:
          break;
        }
      if (XWINT (x5, 0) != 0L)
        return -1;
      operands[2] = x6;
      switch (pattern968 (x3))
        {
        case 0:
          if (!(
#line 4582 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 318 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 3494; /* *avx512vl_eqv16qi3_1 */

        case 1:
          if (!(
#line 4582 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 319 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 3506; /* *avx512vl_eqv16hi3_1 */

        case 2:
          if (!(
#line 4671 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 501 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return -1;
          return 3562; /* *avx512f_eqv16si3_1 */

        case 3:
          if (!(
#line 4582 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 319 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 3510; /* *avx512vl_eqv8hi3_1 */

        case 4:
          if (!(
#line 4671 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 501 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 3566; /* *avx512vl_eqv8si3_1 */

        case 5:
          if (!(
#line 4671 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 501 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 3570; /* *avx512vl_eqv4si3_1 */

        case 6:
          if (!(
#line 4671 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 502 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return -1;
          return 3574; /* *avx512f_eqv8di3_1 */

        case 7:
          if (!(
#line 4671 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 502 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 3578; /* *avx512vl_eqv4di3_1 */

        case 8:
          if (!(
#line 4671 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 502 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 3582; /* *avx512vl_eqv2di3_1 */

        default:
          return -1;
        }

    case US_MINUS:
      switch (pattern419 (x3))
        {
        case 0:
          if (!(
#line 4789 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && ix86_pre_reload_split ()
  && ix86_binary_operator_ok (US_MINUS, V16QImode, operands)
  && (INTVAL (operands[4]) & 3) == 0) && 
#line 318 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 3642; /* *avx512vl_ucmpv16qi3_1 */

        case 1:
          if (!(
#line 4789 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && ix86_pre_reload_split ()
  && ix86_binary_operator_ok (US_MINUS, V16HImode, operands)
  && (INTVAL (operands[4]) & 3) == 0) && 
#line 319 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 3648; /* *avx512vl_ucmpv16hi3_1 */

        case 2:
          if (!(
#line 4789 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && ix86_pre_reload_split ()
  && ix86_binary_operator_ok (US_MINUS, V8HImode, operands)
  && (INTVAL (operands[4]) & 3) == 0) && 
#line 319 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 3650; /* *avx512vl_ucmpv8hi3_1 */

        default:
          return -1;
        }

    default:
      return -1;
    }
}

 int
recog_21 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) != CONST_INT)
    return -1;
  x4 = XEXP (x2, 2);
  if (GET_CODE (x4) != CONST_INT)
    return -1;
  x5 = XEXP (x1, 0);
  operands[0] = x5;
  res = recog_20 (x1, insn, pnum_clobbers);
  if (res >= 0)
    return res;
  if (XWINT (x4, 0) != 8L
      || XWINT (x3, 0) != 8L
      || pattern420 (x5) != 0)
    return -1;
  x6 = XEXP (x2, 0);
  switch (GET_CODE (x6))
    {
    case REG:
    case SUBREG:
      operands[1] = x6;
      if (!int248_register_operand (operands[1], E_VOIDmode))
        return -1;
      operands[2] = x2;
      switch (GET_MODE (x5))
        {
        case E_HImode:
          if (!extract_operator (operands[2], E_HImode))
            return -1;
          return 134; /* *insvqi_2 */

        case E_SImode:
          if (!extract_operator (operands[2], E_SImode))
            return -1;
          return 135; /* *insvqi_2 */

        case E_DImode:
          if (!extract_operator (operands[2], E_DImode)
              || !
#line 1164 "../../gcc/config/i386/i386.md"
(TARGET_64BIT))
            return -1;
          return 136; /* *insvqi_2 */

        default:
          return -1;
        }

    case AND:
      switch (pattern1200 (x1, pnum_clobbers))
        {
        case 0:
          if (!
#line 13228 "../../gcc/config/i386/i386.md"
(GET_MODE (operands[1]) == GET_MODE (operands[2])))
            return -1;
          *pnum_clobbers = 1;
          return 800; /* *andqi_exthi_3 */

        case 1:
          if (!
#line 13228 "../../gcc/config/i386/i386.md"
(GET_MODE (operands[1]) == GET_MODE (operands[2])))
            return -1;
          *pnum_clobbers = 1;
          return 803; /* *andqi_extsi_3 */

        case 2:
          if (!(
#line 13228 "../../gcc/config/i386/i386.md"
(GET_MODE (operands[1]) == GET_MODE (operands[2])) && 
#line 1164 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return -1;
          *pnum_clobbers = 1;
          return 806; /* *andqi_extdi_3 */

        default:
          return -1;
        }

    case IOR:
      switch (pattern1200 (x1, pnum_clobbers))
        {
        case 0:
          if (!
#line 13228 "../../gcc/config/i386/i386.md"
(GET_MODE (operands[1]) == GET_MODE (operands[2])))
            return -1;
          *pnum_clobbers = 1;
          return 801; /* *iorqi_exthi_3 */

        case 1:
          if (!
#line 13228 "../../gcc/config/i386/i386.md"
(GET_MODE (operands[1]) == GET_MODE (operands[2])))
            return -1;
          *pnum_clobbers = 1;
          return 804; /* *iorqi_extsi_3 */

        case 2:
          if (!(
#line 13228 "../../gcc/config/i386/i386.md"
(GET_MODE (operands[1]) == GET_MODE (operands[2])) && 
#line 1164 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return -1;
          *pnum_clobbers = 1;
          return 807; /* *iorqi_extdi_3 */

        default:
          return -1;
        }

    case XOR:
      switch (pattern1200 (x1, pnum_clobbers))
        {
        case 0:
          if (!
#line 13228 "../../gcc/config/i386/i386.md"
(GET_MODE (operands[1]) == GET_MODE (operands[2])))
            return -1;
          *pnum_clobbers = 1;
          return 802; /* *xorqi_exthi_3 */

        case 1:
          if (!
#line 13228 "../../gcc/config/i386/i386.md"
(GET_MODE (operands[1]) == GET_MODE (operands[2])))
            return -1;
          *pnum_clobbers = 1;
          return 805; /* *xorqi_extsi_3 */

        case 2:
          if (!(
#line 13228 "../../gcc/config/i386/i386.md"
(GET_MODE (operands[1]) == GET_MODE (operands[2])) && 
#line 1164 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return -1;
          *pnum_clobbers = 1;
          return 808; /* *xorqi_extdi_3 */

        default:
          return -1;
        }

    default:
      return -1;
    }
}

 int
recog_26 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], E_HImode))
    return -1;
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) != E_HImode)
    return -1;
  x3 = XEXP (x2, 0);
  switch (XVECLEN (x3, 0))
    {
    case 3:
      x4 = XVECEXP (x3, 0, 0);
      operands[1] = x4;
      x5 = XVECEXP (x3, 0, 1);
      operands[2] = x5;
      x6 = XVECEXP (x3, 0, 2);
      operands[3] = x6;
      if (!const_0_to_7_operand (operands[3], E_SImode))
        return -1;
      switch (XINT (x3, 1))
        {
        case 59:
          switch (pattern1084 (x3))
            {
            case 0:
              if (!(
#line 4412 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (HImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V16SImode)
      < GET_MODE_PRECISION (HImode))) && 
#line 308 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                return -1;
              return 3325; /* *avx512f_cmpv16si3_zero_extendhi */

            case 1:
              if (!(
#line 4412 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (HImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V16HFmode)
      < GET_MODE_PRECISION (HImode))) && 
#line 311 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL)))
                return -1;
              return 3346; /* *avx512vl_cmpv16hf3_zero_extendhi */

            case 2:
              if (!(
#line 4412 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (HImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V16SFmode)
      < GET_MODE_PRECISION (HImode))) && 
#line 313 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                return -1;
              return 3352; /* *avx512f_cmpv16sf3_zero_extendhi */

            case 3:
              if (!(
#line 4502 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW
   && (GET_MODE_NUNITS (V16QImode)
       < GET_MODE_PRECISION (HImode))) && 
#line 318 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                return -1;
              return 3445; /* *avx512vl_cmpv16qi3_zero_extendhi */

            case 4:
              if (!(
#line 4502 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW
   && (GET_MODE_NUNITS (V16HImode)
       < GET_MODE_PRECISION (HImode))) && 
#line 319 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                return -1;
              return 3454; /* *avx512vl_cmpv16hi3_zero_extendhi */

            case 5:
              if (!(
#line 4412 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (HImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V8SImode)
      < GET_MODE_PRECISION (HImode))) && 
#line 308 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                return -1;
              return 3328; /* *avx512vl_cmpv8si3_zero_extendhi */

            case 6:
              if (!(
#line 4412 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (HImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V4SImode)
      < GET_MODE_PRECISION (HImode))) && 
#line 308 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                return -1;
              return 3331; /* *avx512vl_cmpv4si3_zero_extendhi */

            case 7:
              if (!(
#line 4412 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (HImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V8DImode)
      < GET_MODE_PRECISION (HImode))) && 
#line 309 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                return -1;
              return 3334; /* *avx512f_cmpv8di3_zero_extendhi */

            case 8:
              if (!(
#line 4412 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (HImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V4DImode)
      < GET_MODE_PRECISION (HImode))) && 
#line 309 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                return -1;
              return 3337; /* *avx512vl_cmpv4di3_zero_extendhi */

            case 9:
              if (!(
#line 4412 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (HImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V2DImode)
      < GET_MODE_PRECISION (HImode))) && 
#line 309 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                return -1;
              return 3340; /* *avx512vl_cmpv2di3_zero_extendhi */

            case 10:
              if (!(
#line 4412 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (HImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V8HFmode)
      < GET_MODE_PRECISION (HImode))) && 
#line 312 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL)))
                return -1;
              return 3349; /* *avx512fp16_cmpv8hf3_zero_extendhi */

            case 11:
              if (!(
#line 4412 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (HImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V8SFmode)
      < GET_MODE_PRECISION (HImode))) && 
#line 313 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                return -1;
              return 3355; /* *avx512vl_cmpv8sf3_zero_extendhi */

            case 12:
              if (!(
#line 4412 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (HImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V4SFmode)
      < GET_MODE_PRECISION (HImode))) && 
#line 313 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                return -1;
              return 3358; /* *avx512vl_cmpv4sf3_zero_extendhi */

            case 13:
              if (!(
#line 4412 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (HImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V8DFmode)
      < GET_MODE_PRECISION (HImode))) && 
#line 314 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                return -1;
              return 3361; /* *avx512f_cmpv8df3_zero_extendhi */

            case 14:
              if (!(
#line 4412 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (HImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V4DFmode)
      < GET_MODE_PRECISION (HImode))) && 
#line 314 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                return -1;
              return 3364; /* *avx512vl_cmpv4df3_zero_extendhi */

            case 15:
              if (!(
#line 4412 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (HImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V2DFmode)
      < GET_MODE_PRECISION (HImode))) && 
#line 314 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                return -1;
              return 3367; /* *avx512vl_cmpv2df3_zero_extendhi */

            case 16:
              if (!(
#line 4502 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW
   && (GET_MODE_NUNITS (V8HImode)
       < GET_MODE_PRECISION (HImode))) && 
#line 319 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                return -1;
              return 3457; /* *avx512vl_cmpv8hi3_zero_extendhi */

            case 17:
              if (!(
#line 4412 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (HImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V32HFmode)
      < GET_MODE_PRECISION (HImode))) && 
#line 310 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_EVEX512)))
                return -1;
              return 3343; /* *avx512bw_cmpv32hf3_zero_extendhi */

            case 18:
              if (!(
#line 4502 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW
   && (GET_MODE_NUNITS (V32QImode)
       < GET_MODE_PRECISION (HImode))) && 
#line 318 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                return -1;
              return 3448; /* *avx512vl_cmpv32qi3_zero_extendhi */

            case 19:
              if (!(
#line 4502 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW
   && (GET_MODE_NUNITS (V32HImode)
       < GET_MODE_PRECISION (HImode))) && 
#line 319 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                return -1;
              return 3451; /* *avx512bw_cmpv32hi3_zero_extendhi */

            case 20:
              if (!(
#line 4502 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW
   && (GET_MODE_NUNITS (V64QImode)
       < GET_MODE_PRECISION (HImode))) && 
#line 318 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                return -1;
              return 3442; /* *avx512bw_cmpv64qi3_zero_extendhi */

            default:
              return -1;
            }

        case 157:
          switch (pattern1086 (x3))
            {
            case 0:
              if (!(
#line 4612 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW
  && (GET_MODE_NUNITS (V64QImode)
      < GET_MODE_PRECISION (HImode))) && 
#line 318 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                return -1;
              return 3526; /* *avx512bw_ucmpv64qi3_zero_extendhi */

            case 1:
              if (!(
#line 4612 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW
  && (GET_MODE_NUNITS (V16QImode)
      < GET_MODE_PRECISION (HImode))) && 
#line 318 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                return -1;
              return 3529; /* *avx512vl_ucmpv16qi3_zero_extendhi */

            case 2:
              if (!(
#line 4612 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW
  && (GET_MODE_NUNITS (V16HImode)
      < GET_MODE_PRECISION (HImode))) && 
#line 319 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                return -1;
              return 3538; /* *avx512vl_ucmpv16hi3_zero_extendhi */

            case 3:
              if (!(
#line 4701 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (HImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V16SImode)
      < GET_MODE_PRECISION (HImode))) && 
#line 501 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                return -1;
              return 3598; /* *avx512f_ucmpv16si3_zero_extendhi */

            case 4:
              if (!(
#line 4612 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW
  && (GET_MODE_NUNITS (V32QImode)
      < GET_MODE_PRECISION (HImode))) && 
#line 318 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                return -1;
              return 3532; /* *avx512vl_ucmpv32qi3_zero_extendhi */

            case 5:
              if (!(
#line 4612 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW
  && (GET_MODE_NUNITS (V32HImode)
      < GET_MODE_PRECISION (HImode))) && 
#line 319 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                return -1;
              return 3535; /* *avx512bw_ucmpv32hi3_zero_extendhi */

            case 6:
              if (!(
#line 4612 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW
  && (GET_MODE_NUNITS (V8HImode)
      < GET_MODE_PRECISION (HImode))) && 
#line 319 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                return -1;
              return 3541; /* *avx512vl_ucmpv8hi3_zero_extendhi */

            case 7:
              if (!(
#line 4701 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (HImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V8SImode)
      < GET_MODE_PRECISION (HImode))) && 
#line 501 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                return -1;
              return 3599; /* *avx512vl_ucmpv8si3_zero_extendhi */

            case 8:
              if (!(
#line 4701 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (HImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V4SImode)
      < GET_MODE_PRECISION (HImode))) && 
#line 501 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                return -1;
              return 3600; /* *avx512vl_ucmpv4si3_zero_extendhi */

            case 9:
              if (!(
#line 4701 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (HImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V8DImode)
      < GET_MODE_PRECISION (HImode))) && 
#line 502 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                return -1;
              return 3601; /* *avx512f_ucmpv8di3_zero_extendhi */

            case 10:
              if (!(
#line 4701 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (HImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V4DImode)
      < GET_MODE_PRECISION (HImode))) && 
#line 502 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                return -1;
              return 3602; /* *avx512vl_ucmpv4di3_zero_extendhi */

            case 11:
              if (!(
#line 4701 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (HImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V2DImode)
      < GET_MODE_PRECISION (HImode))) && 
#line 502 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                return -1;
              return 3603; /* *avx512vl_ucmpv2di3_zero_extendhi */

            default:
              return -1;
            }

        default:
          return -1;
        }

    case 2:
      x4 = XVECEXP (x3, 0, 0);
      operands[1] = x4;
      x5 = XVECEXP (x3, 0, 1);
      operands[2] = x5;
      switch (XINT (x3, 1))
        {
        case 158:
          switch (GET_MODE (x3))
            {
            case E_DImode:
              if (!register_operand (operands[1], E_V64QImode)
                  || !nonimmediate_operand (operands[2], E_V64QImode)
                  || !(
#line 19075 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW
   && (2
       > GET_MODE_SIZE (DImode))) && 
#line 505 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512)))
                return -1;
              return 8156; /* *avx512bw_testmv64qi3_zext */

            case E_SImode:
              switch (pattern869 ())
                {
                case 0:
                  if (!(
#line 19075 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW
   && (2
       > GET_MODE_SIZE (SImode))) && 
#line 506 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL && TARGET_AVX512BW)))
                    return -1;
                  return 8159; /* *avx512vl_testmv32qi3_zext */

                case 1:
                  if (!(
#line 19075 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW
   && (2
       > GET_MODE_SIZE (SImode))) && 
#line 508 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512)))
                    return -1;
                  return 8165; /* *avx512bw_testmv32hi3_zext */

                default:
                  return -1;
                }

            case E_HImode:
              switch (pattern740 ())
                {
                case 0:
                  if (!(
#line 19075 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW
   && (2
       > GET_MODE_SIZE (HImode))) && 
#line 507 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL && TARGET_AVX512BW)))
                    return -1;
                  return 8162; /* *avx512vl_testmv16qi3_zext */

                case 1:
                  if (!(
#line 19075 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW
   && (2
       > GET_MODE_SIZE (HImode))) && 
#line 509 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL && TARGET_AVX512BW)))
                    return -1;
                  return 8168; /* *avx512vl_testmv16hi3_zext */

                case 2:
                  if (!(
#line 19075 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW
   && (2
       > GET_MODE_SIZE (HImode))) && 
#line 511 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                    return -1;
                  return 8174; /* *avx512f_testmv16si3_zext */

                default:
                  return -1;
                }

            case E_QImode:
              switch (pattern741 ())
                {
                case 0:
                  if (!(
#line 19075 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW
   && (2
       > GET_MODE_SIZE (QImode))) && 
#line 510 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL && TARGET_AVX512BW)))
                    return -1;
                  return 8171; /* *avx512vl_testmv8hi3_zext */

                case 1:
                  if (!(
#line 19075 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW
   && (2
       > GET_MODE_SIZE (QImode))) && 
#line 511 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                    return -1;
                  return 8177; /* *avx512vl_testmv8si3_zext */

                case 2:
                  if (!(
#line 19075 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW
   && (2
       > GET_MODE_SIZE (QImode))) && 
#line 511 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                    return -1;
                  return 8180; /* *avx512vl_testmv4si3_zext */

                case 3:
                  if (!(
#line 19075 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW
   && (2
       > GET_MODE_SIZE (QImode))) && 
#line 512 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                    return -1;
                  return 8183; /* *avx512f_testmv8di3_zext */

                case 4:
                  if (!(
#line 19075 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW
   && (2
       > GET_MODE_SIZE (QImode))) && 
#line 512 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                    return -1;
                  return 8186; /* *avx512vl_testmv4di3_zext */

                case 5:
                  if (!(
#line 19075 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW
   && (2
       > GET_MODE_SIZE (QImode))) && 
#line 512 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                    return -1;
                  return 8189; /* *avx512vl_testmv2di3_zext */

                default:
                  return -1;
                }

            default:
              return -1;
            }

        case 159:
          switch (GET_MODE (x3))
            {
            case E_DImode:
              if (!register_operand (operands[1], E_V64QImode)
                  || !nonimmediate_operand (operands[2], E_V64QImode)
                  || !(
#line 19105 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW
   && (2
       > GET_MODE_SIZE (DImode))) && 
#line 505 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512)))
                return -1;
              return 8228; /* *avx512bw_testnmv64qi3_zext */

            case E_SImode:
              switch (pattern869 ())
                {
                case 0:
                  if (!(
#line 19105 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW
   && (2
       > GET_MODE_SIZE (SImode))) && 
#line 506 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL && TARGET_AVX512BW)))
                    return -1;
                  return 8231; /* *avx512vl_testnmv32qi3_zext */

                case 1:
                  if (!(
#line 19105 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW
   && (2
       > GET_MODE_SIZE (SImode))) && 
#line 508 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512)))
                    return -1;
                  return 8237; /* *avx512bw_testnmv32hi3_zext */

                default:
                  return -1;
                }

            case E_HImode:
              switch (pattern740 ())
                {
                case 0:
                  if (!(
#line 19105 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW
   && (2
       > GET_MODE_SIZE (HImode))) && 
#line 507 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL && TARGET_AVX512BW)))
                    return -1;
                  return 8234; /* *avx512vl_testnmv16qi3_zext */

                case 1:
                  if (!(
#line 19105 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW
   && (2
       > GET_MODE_SIZE (HImode))) && 
#line 509 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL && TARGET_AVX512BW)))
                    return -1;
                  return 8240; /* *avx512vl_testnmv16hi3_zext */

                case 2:
                  if (!(
#line 19105 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW
   && (2
       > GET_MODE_SIZE (HImode))) && 
#line 511 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                    return -1;
                  return 8246; /* *avx512f_testnmv16si3_zext */

                default:
                  return -1;
                }

            case E_QImode:
              switch (pattern741 ())
                {
                case 0:
                  if (!(
#line 19105 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW
   && (2
       > GET_MODE_SIZE (QImode))) && 
#line 510 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL && TARGET_AVX512BW)))
                    return -1;
                  return 8243; /* *avx512vl_testnmv8hi3_zext */

                case 1:
                  if (!(
#line 19105 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW
   && (2
       > GET_MODE_SIZE (QImode))) && 
#line 511 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                    return -1;
                  return 8249; /* *avx512vl_testnmv8si3_zext */

                case 2:
                  if (!(
#line 19105 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW
   && (2
       > GET_MODE_SIZE (QImode))) && 
#line 511 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                    return -1;
                  return 8252; /* *avx512vl_testnmv4si3_zext */

                case 3:
                  if (!(
#line 19105 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW
   && (2
       > GET_MODE_SIZE (QImode))) && 
#line 512 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                    return -1;
                  return 8255; /* *avx512f_testnmv8di3_zext */

                case 4:
                  if (!(
#line 19105 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW
   && (2
       > GET_MODE_SIZE (QImode))) && 
#line 512 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                    return -1;
                  return 8258; /* *avx512vl_testnmv4di3_zext */

                case 5:
                  if (!(
#line 19105 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW
   && (2
       > GET_MODE_SIZE (QImode))) && 
#line 512 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                    return -1;
                  return 8261; /* *avx512vl_testnmv2di3_zext */

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
recog_48 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  operands[0] = x2;
  x3 = XEXP (x1, 1);
  switch (GET_CODE (x3))
    {
    case NE:
    case EQ:
    case GE:
    case GT:
    case LE:
    case LT:
      res = recog_47 (x1, insn, pnum_clobbers);
      if (res >= 0)
        return res;
      break;

    default:
      break;
    }
  operands[3] = x3;
  x4 = XEXP (x3, 0);
  operands[1] = x4;
  x5 = XEXP (x3, 1);
  operands[2] = x5;
  switch (GET_MODE (operands[0]))
    {
    case E_SFmode:
      if (pattern744 (
E_SFmode) != 0
          || !
#line 19676 "../../gcc/config/i386/i386.md"
(SSE_FLOAT_MODE_P (SFmode)))
        return -1;
      return 1455; /* setcc_sf_sse */

    case E_DFmode:
      if (pattern744 (
E_DFmode) != 0
          || !
#line 19676 "../../gcc/config/i386/i386.md"
(SSE_FLOAT_MODE_P (DFmode)))
        return -1;
      return 1456; /* setcc_df_sse */

    default:
      return -1;
    }
}

 int
recog_53 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12, x13, x14, x15, x16, x17;
  rtx x18, x19, x20, x21, x22, x23, x24, x25;
  rtx x26, x27, x28, x29;
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
          return 143; /* *insvti_highpart_1 */

        case 1:
          if (!
#line 3726 "../../gcc/config/i386/i386.md"
(TARGET_64BIT
   && CONST_WIDE_INT_P (operands[3])
   && CONST_WIDE_INT_NUNITS (operands[3]) == 2
   && CONST_WIDE_INT_ELT (operands[3], 0) == 0
   && CONST_WIDE_INT_ELT (operands[3], 1) == -1))
            return -1;
          return 146; /* *insvti_lowpart_1 */

        case 2:
          if (!
#line 3748 "../../gcc/config/i386/i386.md"
(!TARGET_64BIT
   && CONST_INT_P (operands[3])
   && UINTVAL (operands[3]) == 0xffffffff00000000ll))
            return -1;
          return 149; /* *insvdi_lowpart_1 */

        default:
          return -1;
        }

    case REG:
    case SUBREG:
    case MEM:
      operands[1] = x3;
      res = recog_52 (x1, insn, pnum_clobbers);
      if (res >= 0)
        return res;
      if (pnum_clobbers == NULL
          || pattern76 (x2) != 0)
        return -1;
      x5 = XEXP (x3, 0);
      x6 = XEXP (x5, 0);
      operands[2] = x6;
      switch (pattern1265 (x1))
        {
        case 0:
          if (
#line 6995 "../../gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)))
            {
              *pnum_clobbers = 1;
              return 303; /* *addqi_exthi_1_slp */
            }
          break;

        case 1:
          if (
#line 6995 "../../gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)))
            {
              *pnum_clobbers = 1;
              return 304; /* *addqi_extsi_1_slp */
            }
          break;

        case 2:
          if ((
#line 6995 "../../gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)) && 
#line 1164 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
            {
              *pnum_clobbers = 1;
              return 305; /* *addqi_extdi_1_slp */
            }
          break;

        case 3:
          *pnum_clobbers = 1;
          return 327; /* *addqi_exthi_0 */

        case 4:
          *pnum_clobbers = 1;
          return 328; /* *addqi_extsi_0 */

        case 5:
          if (
#line 1164 "../../gcc/config/i386/i386.md"
(TARGET_64BIT))
            {
              *pnum_clobbers = 1;
              return 329; /* *addqi_extdi_0 */
            }
          break;

        default:
          break;
        }
      x7 = XEXP (x2, 1);
      if (GET_CODE (x7) != SUBREG)
        return -1;
      switch (pattern1268 (x1))
        {
        case 0:
          if (!
#line 7028 "../../gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)))
            return -1;
          *pnum_clobbers = 1;
          return 306; /* *addqi_exthi_2_slp */

        case 1:
          if (!
#line 7028 "../../gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)))
            return -1;
          *pnum_clobbers = 1;
          return 307; /* *addqi_extsi_2_slp */

        case 2:
          if (!(
#line 7028 "../../gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)) && 
#line 1164 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return -1;
          *pnum_clobbers = 1;
          return 308; /* *addqi_extdi_2_slp */

        case 3:
          *pnum_clobbers = 1;
          return 330; /* *addqi_ext2hi_0 */

        case 4:
          *pnum_clobbers = 1;
          return 331; /* *addqi_ext2si_0 */

        case 5:
          if (!
#line 1164 "../../gcc/config/i386/i386.md"
(TARGET_64BIT))
            return -1;
          *pnum_clobbers = 1;
          return 332; /* *addqi_ext2di_0 */

        default:
          return -1;
        }

    case ZERO_EXTEND:
      if (GET_MODE (x3) != E_TImode)
        return -1;
      x4 = XEXP (x1, 0);
      operands[0] = x4;
      switch (pattern275 (x2, pnum_clobbers, 
E_TImode, 
E_DImode))
        {
        case 0:
          if (!(
#line 6511 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (UNKNOWN, TImode, operands, TARGET_APX_NDD)) && 
#line 1236 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return -1;
          *pnum_clobbers = 1;
          return 269; /* *addti3_doubleword_zext */

        case 1:
          if (!(
#line 14077 "../../gcc/config/i386/i386.md"
(INTVAL (operands[3]) == 8 * BITS_PER_UNIT) && 
#line 1236 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return -1;
          return 901; /* *concatditi3_2 */

        case 2:
          if (!(
#line 14121 "../../gcc/config/i386/i386.md"
(INTVAL (operands[3]) == 8 * BITS_PER_UNIT) && 
#line 1236 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return -1;
          return 922; /* *concatditi3_4 */

        case 3:
          if (!(
#line 14121 "../../gcc/config/i386/i386.md"
(INTVAL (operands[3]) == 8 * BITS_PER_UNIT) && 
#line 1236 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return -1;
          return 925; /* *concatditi3_4 */

        case 4:
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
          return 949; /* *concatditi3_7 */

        default:
          return -1;
        }

    case PLUS:
      x4 = XEXP (x1, 0);
      operands[0] = x4;
      x5 = XEXP (x3, 0);
      switch (GET_CODE (x5))
        {
        case ASHIFT:
          x6 = XEXP (x5, 0);
          switch (GET_CODE (x6))
            {
            case ZERO_EXTEND:
              if (pnum_clobbers == NULL
                  || GET_MODE (x6) != E_TImode)
                return -1;
              x8 = XEXP (x3, 1);
              if (GET_CODE (x8) != ZERO_EXTEND
                  || GET_MODE (x8) != E_TImode
                  || pattern1003 (x2, 
E_TImode) != 0)
                return -1;
              switch (pattern83 (x2, 
E_TImode, 
E_DImode))
                {
                case 0:
                  if (!(
#line 6542 "../../gcc/config/i386/i386.md"
(INTVAL (operands[3]) == 8 * BITS_PER_UNIT) && 
#line 1236 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                    return -1;
                  *pnum_clobbers = 1;
                  return 273; /* *addti3_doubleword_concat */

                case 1:
                  if (!(
#line 6573 "../../gcc/config/i386/i386.md"
(INTVAL (operands[3]) == 8 * BITS_PER_UNIT) && 
#line 1236 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                    return -1;
                  *pnum_clobbers = 1;
                  return 279; /* *addti3_doubleword_concat_zext */

                default:
                  return -1;
                }

            case REG:
            case SUBREG:
              switch (pattern578 (x2))
                {
                case 0:
                  if (!
#line 7990 "../../gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)))
                    return -1;
                  return 370; /* *leaqi_general_3b */

                case 1:
                  if (!
#line 7990 "../../gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)))
                    return -1;
                  return 371; /* *leahi_general_3b */

                default:
                  return -1;
                }

            default:
              return -1;
            }

        case REG:
        case SUBREG:
          switch (pattern427 (x2))
            {
            case 0:
              if (!
#line 7898 "../../gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)))
                return -1;
              return 362; /* *leaqi_general_1 */

            case 1:
              if (!
#line 7898 "../../gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)))
                return -1;
              return 363; /* *leahi_general_1 */

            default:
              return -1;
            }

        case MULT:
          switch (pattern430 (x2))
            {
            case 0:
              if (!
#line 7964 "../../gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)))
                return -1;
              return 368; /* *leaqi_general_3 */

            case 1:
              if (!
#line 7964 "../../gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)))
                return -1;
              return 369; /* *leahi_general_3 */

            default:
              return -1;
            }

        case LTU:
        case UNLT:
          if (pnum_clobbers == NULL)
            return -1;
          operands[4] = x5;
          x9 = XEXP (x5, 1);
          if (x9 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
            return -1;
          x6 = XEXP (x5, 0);
          operands[3] = x6;
          if (!flags_reg_operand (operands[3], E_VOIDmode))
            return -1;
          x8 = XEXP (x3, 1);
          operands[1] = x8;
          x7 = XEXP (x2, 1);
          operands[2] = x7;
          switch (GET_MODE (operands[0]))
            {
            case E_QImode:
              if (pattern1357 (x2, 
E_QImode) != 0
                  || !
#line 8793 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (PLUS, QImode, operands, TARGET_APX_NDD)))
                return -1;
              *pnum_clobbers = 1;
              return 453; /* addqi3_carry */

            case E_HImode:
              if (pattern1357 (x2, 
E_HImode) != 0
                  || !
#line 8793 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (PLUS, HImode, operands, TARGET_APX_NDD)))
                return -1;
              *pnum_clobbers = 1;
              return 454; /* addhi3_carry */

            default:
              return -1;
            }

        case EQ:
          switch (pattern431 (x2, pnum_clobbers))
            {
            case 0:
              if (pattern1269 (x2, 
E_QImode) != 0
                  || !
#line 10136 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (PLUS, QImode, operands, TARGET_APX_NDD)
   && ix86_pre_reload_split ()))
                return -1;
              *pnum_clobbers = 1;
              return 554; /* *addqi3_eq */

            case 1:
              if (pattern1269 (x2, 
E_HImode) != 0
                  || !
#line 10136 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (PLUS, HImode, operands, TARGET_APX_NDD)
   && ix86_pre_reload_split ()))
                return -1;
              *pnum_clobbers = 1;
              return 555; /* *addhi3_eq */

            default:
              return -1;
            }

        case NE:
          switch (pattern431 (x2, pnum_clobbers))
            {
            case 0:
              if (pattern1270 (x2, 
E_QImode) != 0
                  || !
#line 10157 "../../gcc/config/i386/i386.md"
(CONST_INT_P (operands[2])
   && (QImode != DImode
       || INTVAL (operands[2]) != HOST_WIDE_INT_C (-0x80000000))
   && ix86_binary_operator_ok (PLUS, QImode, operands, TARGET_APX_NDD)
   && ix86_pre_reload_split ()))
                return -1;
              *pnum_clobbers = 1;
              return 558; /* *addqi3_ne */

            case 1:
              if (pattern1270 (x2, 
E_HImode) != 0
                  || !
#line 10157 "../../gcc/config/i386/i386.md"
(CONST_INT_P (operands[2])
   && (HImode != DImode
       || INTVAL (operands[2]) != HOST_WIDE_INT_C (-0x80000000))
   && ix86_binary_operator_ok (PLUS, HImode, operands, TARGET_APX_NDD)
   && ix86_pre_reload_split ()))
                return -1;
              *pnum_clobbers = 1;
              return 559; /* *addhi3_ne */

            default:
              return -1;
            }

        default:
          return -1;
        }

    case IOR:
      switch (pattern85 (x1, pnum_clobbers))
        {
        case 0:
          if (!(
#line 6542 "../../gcc/config/i386/i386.md"
(INTVAL (operands[3]) == 8 * BITS_PER_UNIT) && 
#line 1236 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return -1;
          *pnum_clobbers = 1;
          return 274; /* *addti3_doubleword_concat */

        case 1:
          if (!(
#line 6573 "../../gcc/config/i386/i386.md"
(INTVAL (operands[3]) == 8 * BITS_PER_UNIT) && 
#line 1236 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return -1;
          *pnum_clobbers = 1;
          return 280; /* *addti3_doubleword_concat_zext */

        default:
          return -1;
        }

    case XOR:
      switch (pattern85 (x1, pnum_clobbers))
        {
        case 0:
          if (!(
#line 6542 "../../gcc/config/i386/i386.md"
(INTVAL (operands[3]) == 8 * BITS_PER_UNIT) && 
#line 1236 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return -1;
          *pnum_clobbers = 1;
          return 275; /* *addti3_doubleword_concat */

        case 1:
          if (!(
#line 6573 "../../gcc/config/i386/i386.md"
(INTVAL (operands[3]) == 8 * BITS_PER_UNIT) && 
#line 1236 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return -1;
          *pnum_clobbers = 1;
          return 281; /* *addti3_doubleword_concat_zext */

        default:
          return -1;
        }

    case MULT:
      x4 = XEXP (x1, 0);
      operands[0] = x4;
      x5 = XEXP (x3, 0);
      switch (GET_CODE (x5))
        {
        case REG:
        case SUBREG:
          switch (pattern396 (x2))
            {
            case 0:
              if (!
#line 7920 "../../gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)))
                return -1;
              return 364; /* *leaqi_general_2 */

            case 1:
              if (!
#line 7920 "../../gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)))
                return -1;
              return 365; /* *leahi_general_2 */

            default:
              return -1;
            }

        case SIGN_EXTEND:
          if (pattern305 (x5, 
2, 
E_V2HImode, 
E_V2SImode) != 0)
            return -1;
          x8 = XEXP (x3, 1);
          if (pattern1271 (x8, 
E_V2HImode, 
E_V2SImode) != 0)
            return -1;
          x10 = XEXP (x8, 0);
          x11 = XEXP (x10, 1);
          if (XVECLEN (x11, 0) != 2)
            return -1;
          x12 = XVECEXP (x11, 0, 0);
          if (x12 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
            return -1;
          x13 = XVECEXP (x11, 0, 1);
          if (x13 != const_int_rtx[MAX_SAVED_CONST_INT + 2])
            return -1;
          x7 = XEXP (x2, 1);
          if (GET_CODE (x7) != MULT
              || GET_MODE (x7) != E_V2SImode)
            return -1;
          x14 = XEXP (x7, 0);
          if (pattern1201 (x14, 
E_V2HImode, 
VEC_SELECT, 
E_V2SImode, 
SIGN_EXTEND) != 0)
            return -1;
          x15 = XEXP (x14, 0);
          x16 = XEXP (x15, 1);
          if (GET_CODE (x16) != PARALLEL
              || XVECLEN (x16, 0) != 2)
            return -1;
          x17 = XVECEXP (x16, 0, 0);
          if (x17 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
            return -1;
          x18 = XVECEXP (x16, 0, 1);
          if (x18 != const_int_rtx[MAX_SAVED_CONST_INT + 3])
            return -1;
          x19 = XEXP (x7, 1);
          if (pattern1840 (x19, 
E_V2HImode, 
E_V2SImode) != 0)
            return -1;
          x20 = XEXP (x19, 0);
          x21 = XEXP (x20, 1);
          if (XVECLEN (x21, 0) != 2)
            return -1;
          x22 = XVECEXP (x21, 0, 0);
          if (x22 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
            return -1;
          x23 = XVECEXP (x21, 0, 1);
          if (x23 != const_int_rtx[MAX_SAVED_CONST_INT + 3]
              || !register_operand (operands[0], E_V2SImode)
              || GET_MODE (x2) != E_V2SImode
              || GET_MODE (x3) != E_V2SImode)
            return -1;
          x6 = XEXP (x5, 0);
          x24 = XEXP (x6, 0);
          operands[1] = x24;
          if (!register_mmxmem_operand (operands[1], E_V4HImode))
            return -1;
          x25 = XEXP (x10, 0);
          operands[2] = x25;
          if (!register_mmxmem_operand (operands[2], E_V4HImode))
            return -1;
          x26 = XEXP (x15, 0);
          if (!rtx_equal_p (x26, operands[1]))
            return -1;
          x27 = XEXP (x20, 0);
          if (!rtx_equal_p (x27, operands[2])
              || !
#line 3565 "../../gcc/config/i386/mmx.md"
((TARGET_MMX || TARGET_MMX_WITH_SSE)
   && ix86_binary_operator_ok (MULT, V4HImode, operands)))
            return -1;
          return 2159; /* *mmx_pmaddwd */

        default:
          return -1;
        }

    case ASHIFT:
      x4 = XEXP (x1, 0);
      operands[0] = x4;
      x8 = XEXP (x3, 1);
      operands[2] = x8;
      x5 = XEXP (x3, 0);
      switch (GET_CODE (x5))
        {
        case REG:
        case SUBREG:
          operands[1] = x5;
          x7 = XEXP (x2, 1);
          switch (GET_CODE (x7))
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
              operands[3] = x7;
              switch (GET_MODE (operands[0]))
                {
                case E_QImode:
                  if (pattern1075 (x2, 
E_QImode) != 0
                      || !
#line 7941 "../../gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)))
                    return -1;
                  return 366; /* *leaqi_general_2b */

                case E_HImode:
                  if (pattern1075 (x2, 
E_HImode) != 0
                      || !
#line 7941 "../../gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)))
                    return -1;
                  return 367; /* *leahi_general_2b */

                case E_TImode:
                  if (pattern605 (x2, 
E_TImode) != 0
                      || !(
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
                  return 931; /* *concatditi3_5 */

                default:
                  return -1;
                }

            case ZERO_EXTEND:
              if (pattern606 (x2, 
E_DImode, 
E_TImode) != 0
                  || !(
#line 14060 "../../gcc/config/i386/i386.md"
(INTVAL (operands[2]) == 8 * BITS_PER_UNIT) && 
#line 1236 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return -1;
              return 895; /* *concatditi3_1 */

            default:
              return -1;
            }

        case SIGN_EXTEND:
          switch (pattern423 (x2))
            {
            case 0:
              if (!(
#line 14096 "../../gcc/config/i386/i386.md"
(INTVAL (operands[2]) == 8 * BITS_PER_UNIT) && 
#line 1236 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return -1;
              return 910; /* *concatditi3_3 */

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
              return 940; /* *concatditi3_6 */

            default:
              return -1;
            }

        case ZERO_EXTEND:
          switch (pattern423 (x2))
            {
            case 0:
              if (!(
#line 14096 "../../gcc/config/i386/i386.md"
(INTVAL (operands[2]) == 8 * BITS_PER_UNIT) && 
#line 1236 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return -1;
              return 913; /* *concatditi3_3 */

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
              return 943; /* *concatditi3_6 */

            default:
              return -1;
            }

        default:
          return -1;
        }

    case LTU:
    case UNLT:
      switch (pattern86 (x1, pnum_clobbers))
        {
        case 0:
          if (pattern1078 (x2, 
E_QImode) != 0
              || !
#line 8865 "../../gcc/config/i386/i386.md"
(!MEM_P (operands[0]) || rtx_equal_p (operands[0], operands[1])))
            return -1;
          *pnum_clobbers = 1;
          return 457; /* *addqi3_carry_0 */

        case 1:
          if (pattern1078 (x2, 
E_HImode) != 0
              || !
#line 8865 "../../gcc/config/i386/i386.md"
(!MEM_P (operands[0]) || rtx_equal_p (operands[0], operands[1])))
            return -1;
          *pnum_clobbers = 1;
          return 458; /* *addhi3_carry_0 */

        default:
          return -1;
        }

    case GE:
    case GEU:
      switch (pattern86 (x1, pnum_clobbers))
        {
        case 0:
          if (pattern1079 (x2, 
E_QImode) != 0
              || !
#line 8879 "../../gcc/config/i386/i386.md"
(!MEM_P (operands[0]) || rtx_equal_p (operands[0], operands[1])))
            return -1;
          *pnum_clobbers = 1;
          return 461; /* *addqi3_carry_0r */

        case 1:
          if (pattern1079 (x2, 
E_HImode) != 0
              || !
#line 8879 "../../gcc/config/i386/i386.md"
(!MEM_P (operands[0]) || rtx_equal_p (operands[0], operands[1])))
            return -1;
          *pnum_clobbers = 1;
          return 462; /* *addhi3_carry_0r */

        default:
          return -1;
        }

    case EQ:
      switch (pattern88 (x1, pnum_clobbers))
        {
        case 0:
          if (!
#line 10183 "../../gcc/config/i386/i386.md"
(ix86_unary_operator_ok (PLUS, QImode, operands)
   && ix86_pre_reload_split ()))
            return -1;
          *pnum_clobbers = 1;
          return 562; /* *addqi3_eq_0 */

        case 1:
          if (!
#line 10183 "../../gcc/config/i386/i386.md"
(ix86_unary_operator_ok (PLUS, HImode, operands)
   && ix86_pre_reload_split ()))
            return -1;
          *pnum_clobbers = 1;
          return 563; /* *addhi3_eq_0 */

        default:
          return -1;
        }

    case NE:
      switch (pattern88 (x1, pnum_clobbers))
        {
        case 0:
          if (!
#line 10204 "../../gcc/config/i386/i386.md"
(ix86_unary_operator_ok (PLUS, QImode, operands)
   && ix86_pre_reload_split ()))
            return -1;
          *pnum_clobbers = 1;
          return 566; /* *addqi3_ne_0 */

        case 1:
          if (!
#line 10204 "../../gcc/config/i386/i386.md"
(ix86_unary_operator_ok (PLUS, HImode, operands)
   && ix86_pre_reload_split ()))
            return -1;
          *pnum_clobbers = 1;
          return 567; /* *addhi3_ne_0 */

        default:
          return -1;
        }

    case MINUS:
      if (pnum_clobbers == NULL)
        return -1;
      x4 = XEXP (x1, 0);
      operands[0] = x4;
      x5 = XEXP (x3, 0);
      operands[1] = x5;
      x7 = XEXP (x2, 1);
      operands[2] = x7;
      x8 = XEXP (x3, 1);
      switch (GET_CODE (x8))
        {
        case NE:
          switch (pattern852 (x2))
            {
            case 0:
              if (!
#line 10252 "../../gcc/config/i386/i386.md"
(CONST_INT_P (operands[2])
   && (QImode != DImode
       || INTVAL (operands[2]) != HOST_WIDE_INT_C (-0x80000000))
   && ix86_binary_operator_ok (MINUS, QImode, operands, TARGET_APX_NDD)
   && ix86_pre_reload_split ()))
                return -1;
              *pnum_clobbers = 1;
              return 574; /* *subqi3_ne */

            case 1:
              if (!
#line 10252 "../../gcc/config/i386/i386.md"
(CONST_INT_P (operands[2])
   && (HImode != DImode
       || INTVAL (operands[2]) != HOST_WIDE_INT_C (-0x80000000))
   && ix86_binary_operator_ok (MINUS, HImode, operands, TARGET_APX_NDD)
   && ix86_pre_reload_split ()))
                return -1;
              *pnum_clobbers = 1;
              return 575; /* *subhi3_ne */

            default:
              return -1;
            }

        case EQ:
          switch (pattern852 (x2))
            {
            case 0:
              if (!
#line 10281 "../../gcc/config/i386/i386.md"
(CONST_INT_P (operands[2])
   && (QImode != DImode
       || INTVAL (operands[2]) != HOST_WIDE_INT_C (-0x80000000))
   && ix86_binary_operator_ok (MINUS, QImode, operands, TARGET_APX_NDD)
   && ix86_pre_reload_split ()))
                return -1;
              *pnum_clobbers = 1;
              return 578; /* *subqi3_eq_1 */

            case 1:
              if (!
#line 10281 "../../gcc/config/i386/i386.md"
(CONST_INT_P (operands[2])
   && (HImode != DImode
       || INTVAL (operands[2]) != HOST_WIDE_INT_C (-0x80000000))
   && ix86_binary_operator_ok (MINUS, HImode, operands, TARGET_APX_NDD)
   && ix86_pre_reload_split ()))
                return -1;
              *pnum_clobbers = 1;
              return 579; /* *subhi3_eq_1 */

            default:
              return -1;
            }

        default:
          return -1;
        }

    case VEC_SELECT:
      switch (pattern89 (x1))
        {
        case 0:
          x5 = XEXP (x3, 0);
          operands[1] = x5;
          x8 = XEXP (x3, 1);
          if (XVECLEN (x8, 0) != 1)
            return -1;
          x7 = XEXP (x2, 1);
          x19 = XEXP (x7, 1);
          if (XVECLEN (x19, 0) != 1)
            return -1;
          x28 = XVECEXP (x8, 0, 0);
          operands[2] = x28;
          if (!const_0_to_1_operand (operands[2], E_SImode))
            return -1;
          x29 = XVECEXP (x19, 0, 0);
          operands[3] = x29;
          if (!const_0_to_1_operand (operands[3], E_SImode))
            return -1;
          x14 = XEXP (x7, 0);
          if (!rtx_equal_p (x14, operands[1]))
            return -1;
          switch (GET_MODE (operands[0]))
            {
            case E_SFmode:
              if (!register_operand (operands[0], E_SFmode)
                  || GET_MODE (x2) != E_SFmode
                  || GET_MODE (x3) != E_SFmode
                  || !nonimmediate_operand (operands[1], E_V2SFmode)
                  || GET_MODE (x7) != E_SFmode
                  || !
#line 1012 "../../gcc/config/i386/mmx.md"
(TARGET_SSE3 && TARGET_MMX_WITH_SSE && ix86_partial_vec_fp_math
   && INTVAL (operands[2]) != INTVAL (operands[3])
   && ix86_pre_reload_split ()))
                return -1;
              return 2059; /* *mmx_haddv2sf3_low */

            case E_DFmode:
              if (pattern1511 (x2, 
E_DFmode, 
E_V2DFmode) != 0
                  || !
#line 3750 "../../gcc/config/i386/sse.md"
(TARGET_SSE3 && TARGET_V2DF_REDUCTION_PREFER_HADDPD
   && INTVAL (operands[2]) != INTVAL (operands[3])))
                return -1;
              return 3183; /* *sse3_haddv2df3_low */

            default:
              return -1;
            }

        case 1:
          switch (pattern854 (x2))
            {
            case 0:
              if (!
#line 22615 "../../gcc/config/i386/sse.md"
((TARGET_MMX || TARGET_MMX_WITH_SSE) && TARGET_SSSE3))
                return -1;
              return 8592; /* ssse3_phaddwv4hi3 */

            case 1:
              if (!
#line 22702 "../../gcc/config/i386/sse.md"
((TARGET_MMX || TARGET_MMX_WITH_SSE) && TARGET_SSSE3))
                return -1;
              return 8600; /* ssse3_phadddv2si3 */

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
recog_84 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  operands[0] = x2;
  x3 = XEXP (x1, 1);
  x4 = XEXP (x3, 0);
  switch (GET_CODE (x4))
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
      operands[1] = x4;
      res = recog_83 (x1, insn, pnum_clobbers);
      if (res >= 0)
        return res;
      if (pnum_clobbers == NULL
          || GET_CODE (x4) != CONST_INT)
        return -1;
      x5 = XEXP (x3, 1);
      if (GET_CODE (x5) != CLZ)
        return -1;
      x6 = XEXP (x5, 0);
      operands[1] = x6;
      switch (XWINT (x4, 0))
        {
        case 63L:
          if (pattern871 (x3, 
E_DImode) != 0
              || !
#line 21238 "../../gcc/config/i386/i386.md"
(!TARGET_LZCNT && TARGET_64BIT))
            return -1;
          *pnum_clobbers = 1;
          return 1525; /* bsr_rex64_1 */

        case 31L:
          if (pattern871 (x3, 
E_SImode) != 0
              || !
#line 21279 "../../gcc/config/i386/i386.md"
(!TARGET_LZCNT))
            return -1;
          *pnum_clobbers = 1;
          return 1528; /* bsr_1 */

        default:
          return -1;
        }

    case MINUS:
      if (pnum_clobbers == NULL)
        return -1;
      switch (pattern289 (x3))
        {
        case 0:
          switch (GET_MODE (operands[0]))
            {
            case E_SImode:
              if (pattern1274 (x3, 
E_SImode) != 0
                  || !
#line 9277 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (MINUS, SImode, operands, TARGET_APX_NDD)))
                return -1;
              *pnum_clobbers = 1;
              return 489; /* subsi3_carry */

            case E_DImode:
              if (pattern1274 (x3, 
E_DImode) != 0
                  || !(
#line 9277 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (MINUS, DImode, operands, TARGET_APX_NDD)) && 
#line 1161 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return -1;
              *pnum_clobbers = 1;
              return 490; /* subdi3_carry */

            default:
              return -1;
            }

        case 1:
          switch (GET_MODE (operands[0]))
            {
            case E_SImode:
              if (pattern1207 (x3, 
E_SImode) != 0
                  || !
#line 10230 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (MINUS, SImode, operands, TARGET_APX_NDD)
   && ix86_pre_reload_split ()))
                return -1;
              *pnum_clobbers = 1;
              return 572; /* *subsi3_eq */

            case E_DImode:
              if (pattern1207 (x3, 
E_DImode) != 0
                  || !(
#line 10230 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (MINUS, DImode, operands, TARGET_APX_NDD)
   && ix86_pre_reload_split ()) && 
#line 1161 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return -1;
              *pnum_clobbers = 1;
              return 573; /* *subdi3_eq */

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
recog_85 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 2);
  operands[3] = x3;
  x4 = XEXP (x2, 0);
  x5 = XEXP (x4, 1);
  switch (XWINT (x5, 0))
    {
    case 0L:
      x6 = XEXP (x2, 1);
      if (GET_CODE (x6) != PLUS)
        return -1;
      x7 = XEXP (x6, 1);
      if (x7 != const_int_rtx[MAX_SAVED_CONST_INT + -1])
        return -1;
      x8 = XEXP (x4, 0);
      operands[2] = x8;
      x9 = XEXP (x6, 0);
      if (!rtx_equal_p (x9, operands[2]))
        return -1;
      switch (GET_MODE (operands[0]))
        {
        case E_SImode:
          if (pattern1514 (x2, 
E_SImode) != 0
              || !
#line 8750 "../../gcc/config/i386/i386.md"
(TARGET_CMOVE))
            return -1;
          *pnum_clobbers = 1;
          return 450; /* *dec_cmovsi */

        case E_DImode:
          if (pattern1514 (x2, 
E_DImode) != 0
              || !(
#line 8750 "../../gcc/config/i386/i386.md"
(TARGET_CMOVE) && 
#line 1164 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return -1;
          *pnum_clobbers = 1;
          return 451; /* *dec_cmovdi */

        default:
          return -1;
        }

    case -1L:
      x8 = XEXP (x4, 0);
      operands[4] = x8;
      x6 = XEXP (x2, 1);
      operands[2] = x6;
      switch (GET_MODE (operands[0]))
        {
        case E_SImode:
          switch (pattern1365 (x2, 
E_SImode))
            {
            case 0:
              if (!(
#line 2498 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_CMOVE
   && !(MEM_P (operands[2]) && MEM_P (operands[3]))) && 
#line 1555 "../../gcc/config/i386/i386.md"
(TARGET_AVX512DQ)))
                return -1;
              *pnum_clobbers = 1;
              return 2633; /* *kortest_cmpqi_movsicc */

            case 1:
              if (!
#line 2498 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_CMOVE
   && !(MEM_P (operands[2]) && MEM_P (operands[3]))))
                return -1;
              *pnum_clobbers = 1;
              return 2636; /* *kortest_cmphi_movsicc */

            case 2:
              if (!(
#line 2498 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_CMOVE
   && !(MEM_P (operands[2]) && MEM_P (operands[3]))) && 
#line 1556 "../../gcc/config/i386/i386.md"
(TARGET_AVX512BW)))
                return -1;
              *pnum_clobbers = 1;
              return 2639; /* *kortest_cmpsi_movsicc */

            case 3:
              if (!(
#line 2498 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_CMOVE
   && !(MEM_P (operands[2]) && MEM_P (operands[3]))) && 
#line 1556 "../../gcc/config/i386/i386.md"
(TARGET_AVX512BW && TARGET_64BIT)))
                return -1;
              *pnum_clobbers = 1;
              return 2642; /* *kortest_cmpdi_movsicc */

            default:
              return -1;
            }

        case E_DImode:
          switch (pattern1365 (x2, 
E_DImode))
            {
            case 0:
              if (!(
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
(TARGET_64BIT))))
                return -1;
              *pnum_clobbers = 1;
              return 2634; /* *kortest_cmpqi_movdicc */

            case 1:
              if (!(
#line 2498 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_CMOVE
   && !(MEM_P (operands[2]) && MEM_P (operands[3]))) && 
#line 1164 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return -1;
              *pnum_clobbers = 1;
              return 2637; /* *kortest_cmphi_movdicc */

            case 2:
              if (!(
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
(TARGET_64BIT))))
                return -1;
              *pnum_clobbers = 1;
              return 2640; /* *kortest_cmpsi_movdicc */

            case 3:
              if (!(
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
(TARGET_64BIT))))
                return -1;
              *pnum_clobbers = 1;
              return 2643; /* *kortest_cmpdi_movdicc */

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
recog_88 (rtx x1 ATTRIBUTE_UNUSED,
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
      operands[1] = x4;
      x5 = XEXP (x3, 1);
      operands[2] = x5;
      switch (GET_MODE (operands[0]))
        {
        case E_SImode:
          if (pattern619 (x3, 
E_SImode) != 0)
            return -1;
          if (
#line 10604 "../../gcc/config/i386/i386.md"
(!(MEM_P (operands[1]) && MEM_P (operands[2]))
   && TARGET_APX_NF))
            return 592; /* *mulsi3_1_nf */
          if (pnum_clobbers == NULL
              || !
#line 10604 "../../gcc/config/i386/i386.md"
(!(MEM_P (operands[1]) && MEM_P (operands[2]))
   && true))
            return -1;
          *pnum_clobbers = 1;
          return 593; /* *mulsi3_1 */

        case E_DImode:
          if (pattern619 (x3, 
E_DImode) != 0)
            return -1;
          if ((
#line 10604 "../../gcc/config/i386/i386.md"
(!(MEM_P (operands[1]) && MEM_P (operands[2]))
   && TARGET_APX_NF) && 
#line 1192 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return 594; /* *muldi3_1_nf */
          if (pnum_clobbers == NULL
              || !(
#line 10604 "../../gcc/config/i386/i386.md"
(!(MEM_P (operands[1]) && MEM_P (operands[2]))
   && true) && 
#line 1192 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return -1;
          *pnum_clobbers = 1;
          return 595; /* *muldi3_1 */

        default:
          return -1;
        }

    case ZERO_EXTEND:
      if (pnum_clobbers == NULL
          || pattern113 (x3, 
ZERO_EXTEND) != 0
          || !(
#line 10994 "../../gcc/config/i386/i386.md"
(!(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 1235 "../../gcc/config/i386/i386.md"
(!TARGET_64BIT)))
        return -1;
      *pnum_clobbers = 1;
      return 617; /* *umulsidi3_1 */

    case SIGN_EXTEND:
      if (pattern113 (x3, 
SIGN_EXTEND) != 0)
        return -1;
      if ((
#line 11040 "../../gcc/config/i386/i386.md"
(!(MEM_P (operands[1]) && MEM_P (operands[2]))
   && TARGET_APX_NF) && 
#line 1235 "../../gcc/config/i386/i386.md"
(!TARGET_64BIT)))
        return 619; /* *mulsidi3_1_nf */
      if (pnum_clobbers == NULL
          || !(
#line 11040 "../../gcc/config/i386/i386.md"
(!(MEM_P (operands[1]) && MEM_P (operands[2]))
   && true) && 
#line 1235 "../../gcc/config/i386/i386.md"
(!TARGET_64BIT)))
        return -1;
      *pnum_clobbers = 1;
      return 620; /* *mulsidi3_1 */

    default:
      return -1;
    }
}

 int
recog_92 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  operands[0] = x2;
  x3 = XEXP (x1, 1);
  x4 = XEXP (x3, 0);
  switch (GET_CODE (x4))
    {
    case XOR:
      if (pnum_clobbers == NULL)
        return -1;
      x5 = XEXP (x4, 0);
      operands[1] = x5;
      x6 = XEXP (x4, 1);
      operands[2] = x6;
      switch (GET_MODE (operands[0]))
        {
        case E_SImode:
          if (pattern762 (x3, 
E_SImode) != 0
              || !
#line 13607 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (XOR, SImode, operands, TARGET_APX_NDD)))
            return -1;
          *pnum_clobbers = 1;
          return 836; /* *notxorsi_1 */

        case E_DImode:
          if (pattern762 (x3, 
E_DImode) != 0
              || !(
#line 13607 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (XOR, DImode, operands, TARGET_APX_NDD)) && 
#line 1164 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return -1;
          *pnum_clobbers = 1;
          return 837; /* *notxordi_1 */

        default:
          return -1;
        }

    case REG:
    case SUBREG:
    case MEM:
      switch (pattern114 (x3))
        {
        case 0:
          if ((
#line 14976 "../../gcc/config/i386/i386.md"
(ix86_unary_operator_ok (NOT, DImode, operands, TARGET_APX_NDD)) && 
#line 1235 "../../gcc/config/i386/i386.md"
(!TARGET_64BIT)))
            return 1030; /* *one_cmpldi2_doubleword */
          if (!(
#line 14989 "../../gcc/config/i386/i386.md"
(ix86_unary_operator_ok (NOT, DImode, operands, TARGET_APX_NDD)) && 
#line 1164 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return -1;
          return 1034; /* *one_cmpldi2_1 */

        case 1:
          if (!
#line 14989 "../../gcc/config/i386/i386.md"
(ix86_unary_operator_ok (NOT, SImode, operands, TARGET_APX_NDD)))
            return -1;
          return 1033; /* *one_cmplsi2_1 */

        default:
          return -1;
        }

    case UNSPEC:
      if (XVECLEN (x4, 0) != 3)
        return -1;
      x7 = XVECEXP (x4, 0, 0);
      operands[1] = x7;
      x8 = XVECEXP (x4, 0, 1);
      operands[2] = x8;
      x9 = XVECEXP (x4, 0, 2);
      operands[3] = x9;
      switch (XINT (x4, 1))
        {
        case 59:
          switch (GET_MODE (operands[0]))
            {
            case E_SImode:
              switch (pattern989 (x3))
                {
                case 0:
                  if (!(
#line 4469 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && ix86_pre_reload_split ()) && 
#line 310 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_EVEX512)))
                    return -1;
                  return 3421; /* *avx512bw_cmpv32hf3 */

                case 1:
                  if (!(
#line 4564 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && ix86_pre_reload_split ()) && 
#line 318 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                    return -1;
                  return 3482; /* *avx512vl_cmpv32qi3 */

                case 2:
                  if (!(
#line 4564 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && ix86_pre_reload_split ()) && 
#line 319 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                    return -1;
                  return 3484; /* *avx512bw_cmpv32hi3 */

                default:
                  return -1;
                }

            case E_DImode:
              if (pattern990 (x3) != 0
                  || !(
#line 4564 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && ix86_pre_reload_split ()) && 
#line 318 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                return -1;
              return 3478; /* *avx512bw_cmpv64qi3 */

            default:
              return -1;
            }

        case 157:
          if (!const_0_to_7_operand (operands[3], E_SImode))
            return -1;
          switch (GET_MODE (operands[0]))
            {
            case E_DImode:
              if (pattern1090 (x3, 
E_V64QImode, 
E_DImode) != 0
                  || !(
#line 4564 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && ix86_pre_reload_split ()) && 
#line 318 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                return -1;
              return 3479; /* *avx512bw_cmpv64qi3 */

            case E_SImode:
              switch (pattern1091 (x3))
                {
                case 0:
                  if (!(
#line 4564 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && ix86_pre_reload_split ()) && 
#line 318 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                    return -1;
                  return 3483; /* *avx512vl_cmpv32qi3 */

                case 1:
                  if (!(
#line 4564 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && ix86_pre_reload_split ()) && 
#line 319 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                    return -1;
                  return 3485; /* *avx512bw_cmpv32hi3 */

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
recog_97 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  if (register_operand (operands[2], E_SImode))
    {
      x2 = XEXP (x1, 0);
      operands[0] = x2;
      if (register_operand (operands[0], E_SImode))
        {
          x3 = XEXP (x1, 1);
          if (GET_MODE (x3) == E_SImode
              && nonimmediate_operand (operands[1], E_SImode)
              && 
#line 17313 "../../gcc/config/i386/i386.md"
(TARGET_BMI2))
            return 1171; /* *bmi2_lshrsi3_1 */
        }
    }
  x2 = XEXP (x1, 0);
  operands[0] = x2;
  switch (GET_MODE (operands[0]))
    {
    case E_DImode:
      if (!register_operand (operands[0], E_DImode))
        return -1;
      x3 = XEXP (x1, 1);
      if (GET_MODE (x3) != E_DImode)
        return -1;
      if (pnum_clobbers != NULL
          && register_operand (operands[1], E_DImode)
          && nonmemory_operand (operands[2], E_QImode)
          && 
#line 1195 "../../gcc/config/i386/i386.md"
(!TARGET_64BIT))
        {
          *pnum_clobbers = 1;
          return 1130; /* lshrdi3_doubleword */
        }
      if (!nonimmediate_operand (operands[1], E_DImode)
          || !register_operand (operands[2], E_DImode)
          || !(
#line 17313 "../../gcc/config/i386/i386.md"
(TARGET_BMI2) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
        return -1;
      return 1173; /* *bmi2_lshrdi3_1 */

    case E_SImode:
      x3 = XEXP (x1, 1);
      if (pattern624 (x3, 
E_SImode) != 0)
        return -1;
      if (
#line 17385 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (LSHIFTRT, SImode, operands, TARGET_APX_NDD)
   && TARGET_APX_NF))
        return 1180; /* *lshrsi3_1_nf */
      if (pnum_clobbers == NULL
          || !
#line 17385 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (LSHIFTRT, SImode, operands, TARGET_APX_NDD)
   && true))
        return -1;
      *pnum_clobbers = 1;
      return 1181; /* *lshrsi3_1 */

    default:
      return -1;
    }
}

 int
recog_101 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  if (maybe_ne (SUBREG_BYTE (x2), 0))
    return -1;
  x3 = XEXP (x1, 0);
  operands[0] = x3;
  x4 = XEXP (x2, 0);
  switch (GET_CODE (x4))
    {
    case LSHIFTRT:
      switch (pattern292 (x2))
        {
        case 0:
          if ((
#line 16736 "../../gcc/config/i386/i386.md"
(TARGET_APX_NF && UINTVAL (operands[2]) < 4 * BITS_PER_UNIT) && 
#line 1235 "../../gcc/config/i386/i386.md"
(!TARGET_64BIT)))
            return 1134; /* lshrdi3_doubleword_lowpart_nf */
          if (pnum_clobbers == NULL
              || !(
#line 16757 "../../gcc/config/i386/i386.md"
(UINTVAL (operands[2]) < 4 * BITS_PER_UNIT) && 
#line 1235 "../../gcc/config/i386/i386.md"
(!TARGET_64BIT)))
            return -1;
          *pnum_clobbers = 1;
          return 1138; /* lshrdi3_doubleword_lowpart */

        case 1:
          if ((
#line 16736 "../../gcc/config/i386/i386.md"
(TARGET_APX_NF && UINTVAL (operands[2]) < 8 * BITS_PER_UNIT) && 
#line 1236 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return 1136; /* lshrti3_doubleword_lowpart_nf */
          if (pnum_clobbers == NULL
              || !(
#line 16757 "../../gcc/config/i386/i386.md"
(UINTVAL (operands[2]) < 8 * BITS_PER_UNIT) && 
#line 1236 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return -1;
          *pnum_clobbers = 1;
          return 1140; /* lshrti3_doubleword_lowpart */

        default:
          return -1;
        }

    case ASHIFTRT:
      switch (pattern292 (x2))
        {
        case 0:
          if ((
#line 16736 "../../gcc/config/i386/i386.md"
(TARGET_APX_NF && UINTVAL (operands[2]) < 4 * BITS_PER_UNIT) && 
#line 1235 "../../gcc/config/i386/i386.md"
(!TARGET_64BIT)))
            return 1135; /* ashrdi3_doubleword_lowpart_nf */
          if (pnum_clobbers == NULL
              || !(
#line 16757 "../../gcc/config/i386/i386.md"
(UINTVAL (operands[2]) < 4 * BITS_PER_UNIT) && 
#line 1235 "../../gcc/config/i386/i386.md"
(!TARGET_64BIT)))
            return -1;
          *pnum_clobbers = 1;
          return 1139; /* ashrdi3_doubleword_lowpart */

        case 1:
          if ((
#line 16736 "../../gcc/config/i386/i386.md"
(TARGET_APX_NF && UINTVAL (operands[2]) < 8 * BITS_PER_UNIT) && 
#line 1236 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return 1137; /* ashrti3_doubleword_lowpart_nf */
          if (pnum_clobbers == NULL
              || !(
#line 16757 "../../gcc/config/i386/i386.md"
(UINTVAL (operands[2]) < 8 * BITS_PER_UNIT) && 
#line 1236 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return -1;
          *pnum_clobbers = 1;
          return 1141; /* ashrti3_doubleword_lowpart */

        default:
          return -1;
        }

    case SS_TRUNCATE:
      switch (pattern295 (x2))
        {
        case 0:
          if (!
#line 15507 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()))
            return -1;
          return 7313; /* *avx512vl_ss_truncatev4siv4qi2_store_2 */

        case 1:
          if (!
#line 15507 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()))
            return -1;
          return 7316; /* *avx512vl_ss_truncatev4div4qi2_store_2 */

        case 2:
          if (!
#line 15858 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()))
            return -1;
          return 7410; /* *avx512vl_ss_truncatev2div2hi2_store_2 */

        case 3:
          if (!(
#line 15605 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()) && 
#line 15587 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW)))
            return -1;
          return 7343; /* *avx512vl_ss_truncatev8hiv8qi2_store_2 */

        case 4:
          if (!
#line 15605 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()))
            return -1;
          return 7346; /* *avx512vl_ss_truncatev8siv8qi2_store_2 */

        case 5:
          if (!
#line 16121 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512 && ix86_pre_reload_split ()))
            return -1;
          return 7447; /* *avx512f_ss_truncatev8div16qi2_store_2 */

        case 6:
          if (!
#line 15767 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()))
            return -1;
          return 7383; /* *avx512vl_ss_truncatev4siv4hi2_store_2 */

        case 7:
          if (!
#line 15767 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()))
            return -1;
          return 7386; /* *avx512vl_ss_truncatev4div4hi2_store_2 */

        case 8:
          if (!
#line 16008 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()))
            return -1;
          return 7429; /* *avx512vl_ss_truncatev2div2si2_store_2 */

        default:
          return -1;
        }

    case TRUNCATE:
      switch (pattern295 (x2))
        {
        case 0:
          if (!
#line 15507 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()))
            return -1;
          return 7314; /* *avx512vl_truncatev4siv4qi2_store_2 */

        case 1:
          if (!
#line 15507 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()))
            return -1;
          return 7317; /* *avx512vl_truncatev4div4qi2_store_2 */

        case 2:
          if (!
#line 15858 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()))
            return -1;
          return 7411; /* *avx512vl_truncatev2div2hi2_store_2 */

        case 3:
          if (!(
#line 15605 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()) && 
#line 15587 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW)))
            return -1;
          return 7344; /* *avx512vl_truncatev8hiv8qi2_store_2 */

        case 4:
          if (!
#line 15605 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()))
            return -1;
          return 7347; /* *avx512vl_truncatev8siv8qi2_store_2 */

        case 5:
          if (!
#line 16121 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512 && ix86_pre_reload_split ()))
            return -1;
          return 7448; /* *avx512f_truncatev8div16qi2_store_2 */

        case 6:
          if (!
#line 15767 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()))
            return -1;
          return 7384; /* *avx512vl_truncatev4siv4hi2_store_2 */

        case 7:
          if (!
#line 15767 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()))
            return -1;
          return 7387; /* *avx512vl_truncatev4div4hi2_store_2 */

        case 8:
          if (!
#line 16008 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()))
            return -1;
          return 7430; /* *avx512vl_truncatev2div2si2_store_2 */

        default:
          return -1;
        }

    case US_TRUNCATE:
      switch (pattern295 (x2))
        {
        case 0:
          if (!
#line 15507 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()))
            return -1;
          return 7315; /* *avx512vl_us_truncatev4siv4qi2_store_2 */

        case 1:
          if (!
#line 15507 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()))
            return -1;
          return 7318; /* *avx512vl_us_truncatev4div4qi2_store_2 */

        case 2:
          if (!
#line 15858 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()))
            return -1;
          return 7412; /* *avx512vl_us_truncatev2div2hi2_store_2 */

        case 3:
          if (!(
#line 15605 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()) && 
#line 15587 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW)))
            return -1;
          return 7345; /* *avx512vl_us_truncatev8hiv8qi2_store_2 */

        case 4:
          if (!
#line 15605 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()))
            return -1;
          return 7348; /* *avx512vl_us_truncatev8siv8qi2_store_2 */

        case 5:
          if (!
#line 16121 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512 && ix86_pre_reload_split ()))
            return -1;
          return 7449; /* *avx512f_us_truncatev8div16qi2_store_2 */

        case 6:
          if (!
#line 15767 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()))
            return -1;
          return 7385; /* *avx512vl_us_truncatev4siv4hi2_store_2 */

        case 7:
          if (!
#line 15767 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()))
            return -1;
          return 7388; /* *avx512vl_us_truncatev4div4hi2_store_2 */

        case 8:
          if (!
#line 16008 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()))
            return -1;
          return 7431; /* *avx512vl_us_truncatev2div2si2_store_2 */

        default:
          return -1;
        }

    default:
      return -1;
    }
}

 int
recog_114 (rtx x1 ATTRIBUTE_UNUSED,
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
  switch (pattern125 (x3))
    {
    case 0:
      if (
#line 21488 "../../gcc/config/i386/i386.md"
(TARGET_APX_NF && TARGET_LZCNT))
        return 1532; /* clzsi2_lzcnt_nf */
      if (pnum_clobbers == NULL
          || !
#line 21507 "../../gcc/config/i386/i386.md"
(TARGET_LZCNT))
        return -1;
      *pnum_clobbers = 1;
      return 1534; /* clzsi2_lzcnt */

    case 1:
      if ((
#line 21488 "../../gcc/config/i386/i386.md"
(TARGET_APX_NF && TARGET_LZCNT) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
        return 1533; /* clzdi2_lzcnt_nf */
      if (pnum_clobbers == NULL
          || !(
#line 21507 "../../gcc/config/i386/i386.md"
(TARGET_LZCNT) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
        return -1;
      *pnum_clobbers = 1;
      return 1535; /* clzdi2_lzcnt */

    default:
      return -1;
    }
}

 int
recog_116 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8;
  int res ATTRIBUTE_UNUSED;
  if (pnum_clobbers == NULL)
    return -1;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  if (!ix86_carry_flag_operator (x3, E_VOIDmode))
    return -1;
  operands[1] = x3;
  x4 = XEXP (x3, 0);
  if (GET_CODE (x4) != REG
      || REGNO (x4) != 17)
    return -1;
  x5 = XEXP (x3, 1);
  if (x5 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
    return -1;
  x6 = XEXP (x2, 1);
  if (x6 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
    return -1;
  x7 = XEXP (x2, 2);
  if (x7 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
    return -1;
  x8 = XEXP (x1, 0);
  operands[0] = x8;
  switch (pattern23 (x2))
    {
    case 0:
      *pnum_clobbers = 1;
      return 1791; /* *x86_movsicc_0_m1_se */

    case 1:
      if (!
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT))
        return -1;
      *pnum_clobbers = 1;
      return 1792; /* *x86_movdicc_0_m1_se */

    default:
      return -1;
    }
}

 int
recog_119 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) != SUBREG
      || maybe_ne (SUBREG_BYTE (x3), 0)
      || GET_MODE (x3) != E_V2DImode)
    return -1;
  x4 = XEXP (x2, 1);
  x5 = XVECEXP (x4, 0, 0);
  if (XWINT (x5, 0) != 0L
      || GET_MODE (x2) != E_DImode)
    return -1;
  x6 = XEXP (x3, 0);
  switch (pattern1209 (x6))
    {
    case 0:
      if (pshufb_truncv8hiv8qi_operand (operands[2], E_V16QImode)
          && 
#line 15382 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL && TARGET_AVX512BW && ix86_pre_reload_split ()))
        return 7291; /* *avx512f_pshufb_truncv8hiv8qi_1 */
      if (!pshufb_truncv4siv4hi_operand (operands[2], E_V16QImode)
          || !
#line 15737 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()))
        return -1;
      return 7376; /* *avx512f_pshufb_truncv4siv4hi_1 */

    case 1:
      if (!
#line 15978 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()))
        return -1;
      return 7425; /* *avx512f_pshufd_truncv2div2si_1 */

    default:
      return -1;
    }
}

 int
recog_121 (rtx x1 ATTRIBUTE_UNUSED,
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
    case E_V16SImode:
      if (pattern993 (x2, 
E_V16SImode, 
E_HImode) != 0
          || !(
#line 1608 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 295 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 2443; /* *avx512f_loadv16si_mask */

    case E_V8SImode:
      if (pattern993 (x2, 
E_V8SImode, 
E_QImode) != 0
          || !(
#line 1608 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 295 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 2444; /* *avx512vl_loadv8si_mask */

    case E_V4SImode:
      if (pattern993 (x2, 
E_V4SImode, 
E_QImode) != 0
          || !(
#line 1608 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 295 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 2445; /* *avx512vl_loadv4si_mask */

    case E_V8DImode:
      if (pattern993 (x2, 
E_V8DImode, 
E_QImode) != 0
          || !(
#line 1608 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 296 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 2446; /* *avx512f_loadv8di_mask */

    case E_V4DImode:
      if (pattern993 (x2, 
E_V4DImode, 
E_QImode) != 0
          || !(
#line 1608 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 296 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 2447; /* *avx512vl_loadv4di_mask */

    case E_V2DImode:
      if (pattern993 (x2, 
E_V2DImode, 
E_QImode) != 0
          || !(
#line 1608 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 296 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 2448; /* *avx512vl_loadv2di_mask */

    case E_V16SFmode:
      if (pattern993 (x2, 
E_V16SFmode, 
E_HImode) != 0
          || !(
#line 1608 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 297 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 2449; /* *avx512f_loadv16sf_mask */

    case E_V8SFmode:
      if (pattern993 (x2, 
E_V8SFmode, 
E_QImode) != 0
          || !(
#line 1608 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 297 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 2450; /* *avx512vl_loadv8sf_mask */

    case E_V4SFmode:
      if (pattern993 (x2, 
E_V4SFmode, 
E_QImode) != 0
          || !(
#line 1608 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 297 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 2451; /* *avx512vl_loadv4sf_mask */

    case E_V8DFmode:
      if (pattern993 (x2, 
E_V8DFmode, 
E_QImode) != 0
          || !(
#line 1608 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 298 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 2452; /* *avx512f_loadv8df_mask */

    case E_V4DFmode:
      if (pattern993 (x2, 
E_V4DFmode, 
E_QImode) != 0
          || !(
#line 1608 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 298 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 2453; /* *avx512vl_loadv4df_mask */

    case E_V2DFmode:
      if (pattern993 (x2, 
E_V2DFmode, 
E_QImode) != 0
          || !(
#line 1608 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 298 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 2454; /* *avx512vl_loadv2df_mask */

    case E_V64QImode:
      if (pattern993 (x2, 
E_V64QImode, 
E_DImode) != 0
          || !(
#line 1667 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 322 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 2467; /* *avx512bw_loadv64qi_mask */

    case E_V16QImode:
      if (pattern993 (x2, 
E_V16QImode, 
E_HImode) != 0
          || !(
#line 1667 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 322 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 2468; /* *avx512vl_loadv16qi_mask */

    case E_V32QImode:
      if (pattern993 (x2, 
E_V32QImode, 
E_SImode) != 0
          || !(
#line 1667 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 322 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 2469; /* *avx512vl_loadv32qi_mask */

    case E_V32HImode:
      if (pattern993 (x2, 
E_V32HImode, 
E_SImode) != 0
          || !(
#line 1667 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 323 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 2470; /* *avx512bw_loadv32hi_mask */

    case E_V16HImode:
      if (pattern993 (x2, 
E_V16HImode, 
E_HImode) != 0
          || !(
#line 1667 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 323 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 2471; /* *avx512vl_loadv16hi_mask */

    case E_V8HImode:
      if (pattern993 (x2, 
E_V8HImode, 
E_QImode) != 0
          || !(
#line 1667 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 323 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 2472; /* *avx512vl_loadv8hi_mask */

    case E_V32HFmode:
      if (pattern993 (x2, 
E_V32HFmode, 
E_SImode) != 0
          || !(
#line 1667 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 324 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 2473; /* *avx512bw_loadv32hf_mask */

    case E_V16HFmode:
      if (pattern993 (x2, 
E_V16HFmode, 
E_HImode) != 0
          || !(
#line 1667 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 324 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 2474; /* *avx512vl_loadv16hf_mask */

    case E_V8HFmode:
      if (pattern993 (x2, 
E_V8HFmode, 
E_QImode) != 0
          || !(
#line 1667 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 324 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 2475; /* *avx512fp16_loadv8hf_mask */

    case E_V32BFmode:
      if (pattern993 (x2, 
E_V32BFmode, 
E_SImode) != 0
          || !(
#line 1667 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 325 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 2476; /* *avx512bw_loadv32bf_mask */

    case E_V16BFmode:
      if (pattern993 (x2, 
E_V16BFmode, 
E_HImode) != 0
          || !(
#line 1667 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 325 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 2477; /* *avx512vl_loadv16bf_mask */

    case E_V8BFmode:
      if (pattern993 (x2, 
E_V8BFmode, 
E_QImode) != 0
          || !(
#line 1667 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 325 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 2478; /* *avx512vl_loadv8bf_mask */

    default:
      return -1;
    }
}

 int
recog_126 (rtx x1 ATTRIBUTE_UNUSED,
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
    case E_V64QImode:
      if (pattern993 (x2, 
E_V64QImode, 
E_DImode) != 0
          || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 32674 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256 && TARGET_MOVRS) && 
#line 515 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_512))))
        return -1;
      return 10984; /* avx10_2_vmovrsbv64qi_mask */

    case E_V32QImode:
      if (pattern993 (x2, 
E_V32QImode, 
E_SImode) != 0
          || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 32674 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256 && TARGET_MOVRS)))
        return -1;
      return 10986; /* avx10_2_vmovrsbv32qi_mask */

    case E_V16QImode:
      if (pattern993 (x2, 
E_V16QImode, 
E_HImode) != 0
          || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 32674 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256 && TARGET_MOVRS)))
        return -1;
      return 10988; /* avx10_2_vmovrsbv16qi_mask */

    case E_V32HImode:
      if (pattern993 (x2, 
E_V32HImode, 
E_SImode) != 0
          || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 32674 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256 && TARGET_MOVRS) && 
#line 516 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_512))))
        return -1;
      return 10990; /* avx10_2_vmovrswv32hi_mask */

    case E_V16HImode:
      if (pattern993 (x2, 
E_V16HImode, 
E_HImode) != 0
          || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 32674 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256 && TARGET_MOVRS)))
        return -1;
      return 10992; /* avx10_2_vmovrswv16hi_mask */

    case E_V8HImode:
      if (pattern993 (x2, 
E_V8HImode, 
E_QImode) != 0
          || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 32674 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256 && TARGET_MOVRS)))
        return -1;
      return 10994; /* avx10_2_vmovrswv8hi_mask */

    case E_V16SImode:
      if (pattern993 (x2, 
E_V16SImode, 
E_HImode) != 0
          || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 32674 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256 && TARGET_MOVRS) && 
#line 517 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_512))))
        return -1;
      return 10996; /* avx10_2_vmovrsdv16si_mask */

    case E_V8SImode:
      if (pattern993 (x2, 
E_V8SImode, 
E_QImode) != 0
          || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 32674 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256 && TARGET_MOVRS)))
        return -1;
      return 10998; /* avx10_2_vmovrsdv8si_mask */

    case E_V4SImode:
      if (pattern993 (x2, 
E_V4SImode, 
E_QImode) != 0
          || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 32674 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256 && TARGET_MOVRS)))
        return -1;
      return 11000; /* avx10_2_vmovrsdv4si_mask */

    case E_V8DImode:
      if (pattern993 (x2, 
E_V8DImode, 
E_QImode) != 0
          || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 32674 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256 && TARGET_MOVRS) && 
#line 518 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_512))))
        return -1;
      return 11002; /* avx10_2_vmovrsqv8di_mask */

    case E_V4DImode:
      if (pattern993 (x2, 
E_V4DImode, 
E_QImode) != 0
          || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 32674 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256 && TARGET_MOVRS)))
        return -1;
      return 11004; /* avx10_2_vmovrsqv4di_mask */

    case E_V2DImode:
      if (pattern993 (x2, 
E_V2DImode, 
E_QImode) != 0
          || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 32674 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256 && TARGET_MOVRS)))
        return -1;
      return 11006; /* avx10_2_vmovrsqv2di_mask */

    default:
      return -1;
    }
}

 int
recog_132 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XVECEXP (x3, 0, 2);
  operands[3] = x4;
  x5 = XEXP (x2, 1);
  switch (GET_CODE (x5))
    {
    case REG:
    case SUBREG:
      x6 = XEXP (x2, 2);
      operands[4] = x6;
      switch (GET_MODE (operands[0]))
        {
        case E_V16SImode:
          if (pattern1002 (x2, 
E_V16SImode) == 0)
            {
              x7 = XVECEXP (x3, 0, 1);
              operands[1] = x7;
              x8 = XVECEXP (x3, 0, 0);
              operands[2] = x8;
              if (nonimmediate_operand (operands[3], E_V16SImode)
                  && register_operand (operands[4], E_HImode)
                  && rtx_equal_p (x5, operands[2])
                  && (
#line 28180 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 28144 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                return 9360; /* *avx512f_vpermi2varv16si3_mask */
              operands[2] = x7;
              operands[1] = x8;
              if (nonimmediate_operand (operands[3], E_V16SImode)
                  && register_operand (operands[4], E_HImode)
                  && rtx_equal_p (x5, operands[2])
                  && (
#line 28256 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 28130 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                return 9426; /* avx512f_vpermt2varv16si3_mask */
            }
          break;

        case E_V8DImode:
          if (pattern1002 (x2, 
E_V8DImode) == 0)
            {
              x7 = XVECEXP (x3, 0, 1);
              operands[1] = x7;
              x8 = XVECEXP (x3, 0, 0);
              operands[2] = x8;
              if (nonimmediate_operand (operands[3], E_V8DImode)
                  && register_operand (operands[4], E_QImode)
                  && rtx_equal_p (x5, operands[2])
                  && (
#line 28180 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 28144 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                return 9361; /* *avx512f_vpermi2varv8di3_mask */
              operands[2] = x7;
              operands[1] = x8;
              if (nonimmediate_operand (operands[3], E_V8DImode)
                  && register_operand (operands[4], E_QImode)
                  && rtx_equal_p (x5, operands[2])
                  && (
#line 28256 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 28131 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                return 9428; /* avx512f_vpermt2varv8di3_mask */
            }
          break;

        case E_V8SImode:
          if (pattern1002 (x2, 
E_V8SImode) == 0)
            {
              x7 = XVECEXP (x3, 0, 1);
              operands[1] = x7;
              x8 = XVECEXP (x3, 0, 0);
              operands[2] = x8;
              if (nonimmediate_operand (operands[3], E_V8SImode)
                  && register_operand (operands[4], E_QImode)
                  && rtx_equal_p (x5, operands[2])
                  && (
#line 28180 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 28145 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                return 9362; /* *avx512vl_vpermi2varv8si3_mask */
              operands[2] = x7;
              operands[1] = x8;
              if (nonimmediate_operand (operands[3], E_V8SImode)
                  && register_operand (operands[4], E_QImode)
                  && rtx_equal_p (x5, operands[2])
                  && (
#line 28256 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 28132 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                return 9430; /* avx512vl_vpermt2varv8si3_mask */
            }
          break;

        case E_V4SImode:
          if (pattern1002 (x2, 
E_V4SImode) == 0)
            {
              x7 = XVECEXP (x3, 0, 1);
              operands[1] = x7;
              x8 = XVECEXP (x3, 0, 0);
              operands[2] = x8;
              if (nonimmediate_operand (operands[3], E_V4SImode)
                  && register_operand (operands[4], E_QImode)
                  && rtx_equal_p (x5, operands[2])
                  && (
#line 28180 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 28145 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                return 9363; /* *avx512vl_vpermi2varv4si3_mask */
              operands[2] = x7;
              operands[1] = x8;
              if (nonimmediate_operand (operands[3], E_V4SImode)
                  && register_operand (operands[4], E_QImode)
                  && rtx_equal_p (x5, operands[2])
                  && (
#line 28256 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 28134 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                return 9434; /* avx512vl_vpermt2varv4si3_mask */
            }
          break;

        case E_V4DImode:
          if (pattern1002 (x2, 
E_V4DImode) == 0)
            {
              x7 = XVECEXP (x3, 0, 1);
              operands[1] = x7;
              x8 = XVECEXP (x3, 0, 0);
              operands[2] = x8;
              if (nonimmediate_operand (operands[3], E_V4DImode)
                  && register_operand (operands[4], E_QImode)
                  && rtx_equal_p (x5, operands[2])
                  && (
#line 28180 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 28146 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                return 9364; /* *avx512vl_vpermi2varv4di3_mask */
              operands[2] = x7;
              operands[1] = x8;
              if (nonimmediate_operand (operands[3], E_V4DImode)
                  && register_operand (operands[4], E_QImode)
                  && rtx_equal_p (x5, operands[2])
                  && (
#line 28256 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 28133 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                return 9432; /* avx512vl_vpermt2varv4di3_mask */
            }
          break;

        case E_V2DImode:
          if (pattern1002 (x2, 
E_V2DImode) == 0)
            {
              x7 = XVECEXP (x3, 0, 1);
              operands[1] = x7;
              x8 = XVECEXP (x3, 0, 0);
              operands[2] = x8;
              if (nonimmediate_operand (operands[3], E_V2DImode)
                  && register_operand (operands[4], E_QImode)
                  && rtx_equal_p (x5, operands[2])
                  && (
#line 28180 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 28146 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                return 9365; /* *avx512vl_vpermi2varv2di3_mask */
              operands[2] = x7;
              operands[1] = x8;
              if (nonimmediate_operand (operands[3], E_V2DImode)
                  && register_operand (operands[4], E_QImode)
                  && rtx_equal_p (x5, operands[2])
                  && (
#line 28256 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 28135 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                return 9436; /* avx512vl_vpermt2varv2di3_mask */
            }
          break;

        case E_V32HImode:
          if (pattern1002 (x2, 
E_V32HImode) == 0)
            {
              x7 = XVECEXP (x3, 0, 1);
              operands[1] = x7;
              x8 = XVECEXP (x3, 0, 0);
              operands[2] = x8;
              if (nonimmediate_operand (operands[3], E_V32HImode)
                  && register_operand (operands[4], E_SImode)
                  && rtx_equal_p (x5, operands[2])
                  && (
#line 28180 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 28147 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512)))
                return 9366; /* *avx512bw_vpermi2varv32hi3_mask */
              operands[2] = x7;
              operands[1] = x8;
              if (nonimmediate_operand (operands[3], E_V32HImode)
                  && register_operand (operands[4], E_SImode)
                  && rtx_equal_p (x5, operands[2])
                  && (
#line 28256 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 28136 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512)))
                return 9438; /* avx512bw_vpermt2varv32hi3_mask */
            }
          break;

        case E_V16HImode:
          if (pattern1002 (x2, 
E_V16HImode) == 0)
            {
              x7 = XVECEXP (x3, 0, 1);
              operands[1] = x7;
              x8 = XVECEXP (x3, 0, 0);
              operands[2] = x8;
              if (nonimmediate_operand (operands[3], E_V16HImode)
                  && register_operand (operands[4], E_HImode)
                  && rtx_equal_p (x5, operands[2])
                  && (
#line 28180 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 28148 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_AVX512VL)))
                return 9367; /* *avx512vl_vpermi2varv16hi3_mask */
              operands[2] = x7;
              operands[1] = x8;
              if (nonimmediate_operand (operands[3], E_V16HImode)
                  && register_operand (operands[4], E_HImode)
                  && rtx_equal_p (x5, operands[2])
                  && (
#line 28256 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 28137 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_AVX512VL)))
                return 9439; /* avx512vl_vpermt2varv16hi3_mask */
            }
          break;

        case E_V8HImode:
          if (pattern1002 (x2, 
E_V8HImode) == 0)
            {
              x7 = XVECEXP (x3, 0, 1);
              operands[1] = x7;
              x8 = XVECEXP (x3, 0, 0);
              operands[2] = x8;
              if (nonimmediate_operand (operands[3], E_V8HImode)
                  && register_operand (operands[4], E_QImode)
                  && rtx_equal_p (x5, operands[2])
                  && (
#line 28180 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 28149 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_AVX512VL)))
                return 9368; /* *avx512vl_vpermi2varv8hi3_mask */
              operands[2] = x7;
              operands[1] = x8;
              if (nonimmediate_operand (operands[3], E_V8HImode)
                  && register_operand (operands[4], E_QImode)
                  && rtx_equal_p (x5, operands[2])
                  && (
#line 28256 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 28138 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_AVX512VL)))
                return 9440; /* avx512vl_vpermt2varv8hi3_mask */
            }
          break;

        case E_V64QImode:
          if (pattern1002 (x2, 
E_V64QImode) == 0)
            {
              x7 = XVECEXP (x3, 0, 1);
              operands[1] = x7;
              x8 = XVECEXP (x3, 0, 0);
              operands[2] = x8;
              if (nonimmediate_operand (operands[3], E_V64QImode)
                  && register_operand (operands[4], E_DImode)
                  && rtx_equal_p (x5, operands[2])
                  && (
#line 28180 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 28150 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VBMI && TARGET_EVEX512)))
                return 9369; /* *avx512bw_vpermi2varv64qi3_mask */
              operands[2] = x7;
              operands[1] = x8;
              if (nonimmediate_operand (operands[3], E_V64QImode)
                  && register_operand (operands[4], E_DImode)
                  && rtx_equal_p (x5, operands[2])
                  && (
#line 28256 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 28139 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VBMI && TARGET_EVEX512)))
                return 9441; /* avx512bw_vpermt2varv64qi3_mask */
            }
          break;

        case E_V32QImode:
          if (pattern1002 (x2, 
E_V32QImode) == 0)
            {
              x7 = XVECEXP (x3, 0, 1);
              operands[1] = x7;
              x8 = XVECEXP (x3, 0, 0);
              operands[2] = x8;
              if (nonimmediate_operand (operands[3], E_V32QImode)
                  && register_operand (operands[4], E_SImode)
                  && rtx_equal_p (x5, operands[2])
                  && (
#line 28180 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 28151 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VBMI && TARGET_AVX512VL)))
                return 9370; /* *avx512vl_vpermi2varv32qi3_mask */
              operands[2] = x7;
              operands[1] = x8;
              if (nonimmediate_operand (operands[3], E_V32QImode)
                  && register_operand (operands[4], E_SImode)
                  && rtx_equal_p (x5, operands[2])
                  && (
#line 28256 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 28140 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VBMI && TARGET_AVX512VL)))
                return 9442; /* avx512vl_vpermt2varv32qi3_mask */
            }
          break;

        case E_V16QImode:
          if (pattern1002 (x2, 
E_V16QImode) == 0)
            {
              x7 = XVECEXP (x3, 0, 1);
              operands[1] = x7;
              x8 = XVECEXP (x3, 0, 0);
              operands[2] = x8;
              if (nonimmediate_operand (operands[3], E_V16QImode)
                  && register_operand (operands[4], E_HImode)
                  && rtx_equal_p (x5, operands[2])
                  && (
#line 28180 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 28152 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VBMI && TARGET_AVX512VL)))
                return 9371; /* *avx512vl_vpermi2varv16qi3_mask */
              operands[2] = x7;
              operands[1] = x8;
              if (nonimmediate_operand (operands[3], E_V16QImode)
                  && register_operand (operands[4], E_HImode)
                  && rtx_equal_p (x5, operands[2])
                  && (
#line 28256 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 28141 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VBMI && TARGET_AVX512VL)))
                return 9443; /* avx512vl_vpermt2varv16qi3_mask */
            }
          break;

        default:
          break;
        }
      if (GET_CODE (x5) == SUBREG
          && known_eq (SUBREG_BYTE (x5), 0))
        {
          x8 = XVECEXP (x3, 0, 0);
          operands[2] = x8;
          x7 = XVECEXP (x3, 0, 1);
          operands[1] = x7;
          x9 = XEXP (x5, 0);
          if (rtx_equal_p (x9, operands[2]))
            {
              switch (GET_MODE (operands[0]))
                {
                case E_V16SFmode:
                  if (pattern1456 (x2, 
E_V16SFmode, 
E_V16SImode, 
E_HImode) == 0
                      && (
#line 28196 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 521 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                    return 9372; /* *avx512f_vpermi2varv16sf3_mask */
                  break;

                case E_V8SFmode:
                  if (pattern1456 (x2, 
E_V8SFmode, 
E_V8SImode, 
E_QImode) == 0
                      && (
#line 28196 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 521 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                    return 9373; /* *avx512vl_vpermi2varv8sf3_mask */
                  break;

                case E_V4SFmode:
                  if (pattern1456 (x2, 
E_V4SFmode, 
E_V4SImode, 
E_QImode) == 0
                      && (
#line 28196 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 521 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                    return 9374; /* *avx512vl_vpermi2varv4sf3_mask */
                  break;

                case E_V8DFmode:
                  if (pattern1456 (x2, 
E_V8DFmode, 
E_V8DImode, 
E_QImode) == 0
                      && (
#line 28196 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 522 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                    return 9375; /* *avx512f_vpermi2varv8df3_mask */
                  break;

                case E_V4DFmode:
                  if (pattern1456 (x2, 
E_V4DFmode, 
E_V4DImode, 
E_QImode) == 0
                      && (
#line 28196 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 522 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                    return 9376; /* *avx512vl_vpermi2varv4df3_mask */
                  break;

                case E_V2DFmode:
                  if (pattern1456 (x2, 
E_V2DFmode, 
E_V2DImode, 
E_QImode) == 0
                      && (
#line 28196 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 522 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                    return 9377; /* *avx512vl_vpermi2varv2df3_mask */
                  break;

                default:
                  break;
                }
            }
        }
      x8 = XVECEXP (x3, 0, 0);
      operands[1] = x8;
      x7 = XVECEXP (x3, 0, 1);
      operands[2] = x7;
      if (!rtx_equal_p (x5, operands[2]))
        return -1;
      switch (GET_MODE (operands[0]))
        {
        case E_V16SFmode:
          if (pattern1278 (x2, 
E_V16SFmode, 
E_V16SImode, 
E_HImode) != 0
              || !(
#line 28256 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 28130 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return -1;
          return 9427; /* avx512f_vpermt2varv16sf3_mask */

        case E_V8DFmode:
          if (pattern1278 (x2, 
E_V8DFmode, 
E_V8DImode, 
E_QImode) != 0
              || !(
#line 28256 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 28131 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return -1;
          return 9429; /* avx512f_vpermt2varv8df3_mask */

        case E_V8SFmode:
          if (pattern1278 (x2, 
E_V8SFmode, 
E_V8SImode, 
E_QImode) != 0
              || !(
#line 28256 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 28132 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 9431; /* avx512vl_vpermt2varv8sf3_mask */

        case E_V4DFmode:
          if (pattern1278 (x2, 
E_V4DFmode, 
E_V4DImode, 
E_QImode) != 0
              || !(
#line 28256 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 28133 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 9433; /* avx512vl_vpermt2varv4df3_mask */

        case E_V4SFmode:
          if (pattern1278 (x2, 
E_V4SFmode, 
E_V4SImode, 
E_QImode) != 0
              || !(
#line 28256 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 28134 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 9435; /* avx512vl_vpermt2varv4sf3_mask */

        case E_V2DFmode:
          if (pattern1278 (x2, 
E_V2DFmode, 
E_V2DImode, 
E_QImode) != 0
              || !(
#line 28256 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 28135 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 9437; /* avx512vl_vpermt2varv2df3_mask */

        default:
          return -1;
        }

    case CONST_INT:
    case CONST_DOUBLE:
    case CONST_VECTOR:
      operands[4] = x5;
      x8 = XVECEXP (x3, 0, 0);
      operands[1] = x8;
      x7 = XVECEXP (x3, 0, 1);
      operands[2] = x7;
      x6 = XEXP (x2, 2);
      operands[5] = x6;
      switch (GET_MODE (operands[0]))
        {
        case E_V16SImode:
          if (pattern481 (x2, 
E_V16SImode, 
E_HImode) != 0
              || !(
#line 28223 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 28130 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return -1;
          return 9379; /* avx512f_vpermt2varv16si3_maskz_1 */

        case E_V16SFmode:
          if (pattern1279 (x2, 
E_V16SFmode, 
E_HImode, 
E_V16SImode) != 0
              || !(
#line 28223 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 28130 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return -1;
          return 9381; /* avx512f_vpermt2varv16sf3_maskz_1 */

        case E_V8DImode:
          if (pattern481 (x2, 
E_V8DImode, 
E_QImode) != 0
              || !(
#line 28223 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 28131 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return -1;
          return 9383; /* avx512f_vpermt2varv8di3_maskz_1 */

        case E_V8DFmode:
          if (pattern1279 (x2, 
E_V8DFmode, 
E_QImode, 
E_V8DImode) != 0
              || !(
#line 28223 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 28131 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return -1;
          return 9385; /* avx512f_vpermt2varv8df3_maskz_1 */

        case E_V8SImode:
          if (pattern481 (x2, 
E_V8SImode, 
E_QImode) != 0
              || !(
#line 28223 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 28132 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 9387; /* avx512vl_vpermt2varv8si3_maskz_1 */

        case E_V8SFmode:
          if (pattern1279 (x2, 
E_V8SFmode, 
E_QImode, 
E_V8SImode) != 0
              || !(
#line 28223 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 28132 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 9389; /* avx512vl_vpermt2varv8sf3_maskz_1 */

        case E_V4DImode:
          if (pattern481 (x2, 
E_V4DImode, 
E_QImode) != 0
              || !(
#line 28223 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 28133 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 9391; /* avx512vl_vpermt2varv4di3_maskz_1 */

        case E_V4DFmode:
          if (pattern1279 (x2, 
E_V4DFmode, 
E_QImode, 
E_V4DImode) != 0
              || !(
#line 28223 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 28133 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 9393; /* avx512vl_vpermt2varv4df3_maskz_1 */

        case E_V4SImode:
          if (pattern481 (x2, 
E_V4SImode, 
E_QImode) != 0
              || !(
#line 28223 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 28134 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 9395; /* avx512vl_vpermt2varv4si3_maskz_1 */

        case E_V4SFmode:
          if (pattern1279 (x2, 
E_V4SFmode, 
E_QImode, 
E_V4SImode) != 0
              || !(
#line 28223 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 28134 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 9397; /* avx512vl_vpermt2varv4sf3_maskz_1 */

        case E_V2DImode:
          if (pattern481 (x2, 
E_V2DImode, 
E_QImode) != 0
              || !(
#line 28223 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 28135 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 9399; /* avx512vl_vpermt2varv2di3_maskz_1 */

        case E_V2DFmode:
          if (pattern1279 (x2, 
E_V2DFmode, 
E_QImode, 
E_V2DImode) != 0
              || !(
#line 28223 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 28135 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 9401; /* avx512vl_vpermt2varv2df3_maskz_1 */

        case E_V32HImode:
          if (pattern481 (x2, 
E_V32HImode, 
E_SImode) != 0
              || !(
#line 28223 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 28136 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512)))
            return -1;
          return 9403; /* avx512bw_vpermt2varv32hi3_maskz_1 */

        case E_V16HImode:
          if (pattern481 (x2, 
E_V16HImode, 
E_HImode) != 0
              || !(
#line 28223 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 28137 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_AVX512VL)))
            return -1;
          return 9405; /* avx512vl_vpermt2varv16hi3_maskz_1 */

        case E_V8HImode:
          if (pattern481 (x2, 
E_V8HImode, 
E_QImode) != 0
              || !(
#line 28223 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 28138 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_AVX512VL)))
            return -1;
          return 9407; /* avx512vl_vpermt2varv8hi3_maskz_1 */

        case E_V64QImode:
          if (pattern481 (x2, 
E_V64QImode, 
E_DImode) != 0
              || !(
#line 28223 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 28139 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VBMI && TARGET_EVEX512)))
            return -1;
          return 9409; /* avx512bw_vpermt2varv64qi3_maskz_1 */

        case E_V32QImode:
          if (pattern481 (x2, 
E_V32QImode, 
E_SImode) != 0
              || !(
#line 28223 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 28140 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VBMI && TARGET_AVX512VL)))
            return -1;
          return 9411; /* avx512vl_vpermt2varv32qi3_maskz_1 */

        case E_V16QImode:
          if (pattern481 (x2, 
E_V16QImode, 
E_HImode) != 0
              || !(
#line 28223 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 28141 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VBMI && TARGET_AVX512VL)))
            return -1;
          return 9413; /* avx512vl_vpermt2varv16qi3_maskz_1 */

        case E_V32HFmode:
          if (pattern1279 (x2, 
E_V32HFmode, 
E_SImode, 
E_V32HImode) != 0
              || !(
#line 28238 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 558 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return -1;
          return 9415; /* avx512bw_vpermt2varv32hf3_maskz_1 */

        case E_V16HFmode:
          if (pattern1279 (x2, 
E_V16HFmode, 
E_HImode, 
E_V16HImode) != 0
              || !(
#line 28238 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 558 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 9417; /* avx512vl_vpermt2varv16hf3_maskz_1 */

        case E_V8HFmode:
          if (pattern1279 (x2, 
E_V8HFmode, 
E_QImode, 
E_V8HImode) != 0
              || !(
#line 28238 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 558 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 9419; /* avx512fp16_vpermt2varv8hf3_maskz_1 */

        case E_V32BFmode:
          if (pattern1279 (x2, 
E_V32BFmode, 
E_SImode, 
E_V32HImode) != 0
              || !(
#line 28238 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 559 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return -1;
          return 9421; /* avx512bw_vpermt2varv32bf3_maskz_1 */

        case E_V16BFmode:
          if (pattern1279 (x2, 
E_V16BFmode, 
E_HImode, 
E_V16HImode) != 0
              || !(
#line 28238 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 559 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 9423; /* avx512vl_vpermt2varv16bf3_maskz_1 */

        case E_V8BFmode:
          if (pattern1279 (x2, 
E_V8BFmode, 
E_QImode, 
E_V8HImode) != 0
              || !(
#line 28238 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 559 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 9425; /* avx512vl_vpermt2varv8bf3_maskz_1 */

        default:
          return -1;
        }

    default:
      return -1;
    }
}

 int
recog_160 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  x5 = XEXP (x4, 0);
  operands[1] = x5;
  switch (pattern639 (x2))
    {
    case 0:
      if (pattern1385 (x2, 
E_V32HFmode, 
E_SImode) != 0
          || !(
#line 6138 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && (64 == 64 || TARGET_AVX512VL) && 1) && 
#line 5914 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_EVEX512)))
        return -1;
      return 3938; /* fma_fnmadd_v32hf_maskz_1 */

    case 1:
      if (pattern1385 (x2, 
E_V16HFmode, 
E_HImode) != 0
          || !(
#line 6138 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && (32 == 64 || TARGET_AVX512VL) && 1) && 
#line 5915 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL)))
        return -1;
      return 3942; /* fma_fnmadd_v16hf_maskz_1 */

    case 2:
      if (pattern1385 (x2, 
E_V8HFmode, 
E_QImode) != 0
          || !(
#line 6138 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && (16 == 64 || TARGET_AVX512VL) && 1) && 
#line 5916 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL)))
        return -1;
      return 3946; /* fma_fnmadd_v8hf_maskz_1 */

    case 3:
      if (pattern1385 (x2, 
E_V16SFmode, 
E_HImode) != 0
          || !(
#line 6138 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && (64 == 64 || TARGET_AVX512VL) && 1) && 
#line 5918 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 3950; /* fma_fnmadd_v16sf_maskz_1 */

    case 4:
      if (pattern1385 (x2, 
E_V8SFmode, 
E_QImode) != 0
          || !(
#line 6138 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && (32 == 64 || TARGET_AVX512VL) && 1) && 
#line 5919 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 3954; /* fma_fnmadd_v8sf_maskz_1 */

    case 5:
      if (pattern1385 (x2, 
E_V4SFmode, 
E_QImode) != 0
          || !(
#line 6138 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && (16 == 64 || TARGET_AVX512VL) && 1) && 
#line 5919 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 3958; /* fma_fnmadd_v4sf_maskz_1 */

    case 6:
      if (pattern1385 (x2, 
E_V8DFmode, 
E_QImode) != 0
          || !(
#line 6138 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && (64 == 64 || TARGET_AVX512VL) && 1) && 
#line 5920 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 3961; /* fma_fnmadd_v8df_maskz_1 */

    case 7:
      if (pattern1385 (x2, 
E_V4DFmode, 
E_QImode) != 0
          || !(
#line 6138 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && (32 == 64 || TARGET_AVX512VL) && 1) && 
#line 5921 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 3965; /* fma_fnmadd_v4df_maskz_1 */

    case 8:
      if (pattern1385 (x2, 
E_V2DFmode, 
E_QImode) != 0
          || !(
#line 6138 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && (16 == 64 || TARGET_AVX512VL) && 1) && 
#line 5921 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 3969; /* fma_fnmadd_v2df_maskz_1 */

    case 9:
      if (pattern1386 (x2, 
E_SImode, 
E_V32BFmode) != 0
          || !(
#line 32198 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256) && 
#line 565 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_512)))
        return -1;
      return 10639; /* avx10_2_fnmaddnepbf16_v32bf_maskz_1 */

    case 10:
      if (pattern1386 (x2, 
E_HImode, 
E_V16BFmode) != 0
          || !
#line 32198 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
        return -1;
      return 10641; /* avx10_2_fnmaddnepbf16_v16bf_maskz_1 */

    case 11:
      if (pattern1386 (x2, 
E_QImode, 
E_V8BFmode) != 0
          || !
#line 32198 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
        return -1;
      return 10643; /* avx10_2_fnmaddnepbf16_v8bf_maskz_1 */

    case 12:
      if (pattern1387 (x2, 
E_V4SFmode) != 0
          || !
#line 6974 "../../gcc/config/i386/sse.md"
(TARGET_FMA4))
        return -1;
      return 4317; /* *fma4i_vmfnmadd_v4sf */

    case 13:
      if (pattern1387 (x2, 
E_V2DFmode) != 0
          || !(
#line 6974 "../../gcc/config/i386/sse.md"
(TARGET_FMA4) && 
#line 475 "../../gcc/config/i386/sse.md"
(TARGET_SSE2)))
        return -1;
      return 4318; /* *fma4i_vmfnmadd_v2df */

    case 14:
      if (pattern1297 (x2, 
E_V32HFmode, 
E_SImode) != 0)
        return -1;
      if (nonimmediate_operand (operands[1], E_V32HFmode)
          && vector_operand (operands[3], E_V32HFmode))
        {
          x6 = XEXP (x2, 1);
          if (rtx_equal_p (x6, operands[1])
              && (
#line 6181 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 525 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_EVEX512)))
            return 3970; /* avx512bw_fnmadd_v32hf_mask */
        }
      if (!vector_operand (operands[1], E_V32HFmode)
          || !nonimmediate_operand (operands[3], E_V32HFmode))
        return -1;
      x6 = XEXP (x2, 1);
      if (!rtx_equal_p (x6, operands[3])
          || !(
#line 6199 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 525 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_EVEX512)))
        return -1;
      return 3985; /* avx512bw_fnmadd_v32hf_mask3 */

    case 15:
      if (pattern1297 (x2, 
E_V16HFmode, 
E_HImode) != 0)
        return -1;
      if (nonimmediate_operand (operands[1], E_V16HFmode)
          && vector_operand (operands[3], E_V16HFmode))
        {
          x6 = XEXP (x2, 1);
          if (rtx_equal_p (x6, operands[1])
              && (
#line 6181 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 526 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL)))
            return 3972; /* avx512vl_fnmadd_v16hf_mask */
        }
      if (!vector_operand (operands[1], E_V16HFmode)
          || !nonimmediate_operand (operands[3], E_V16HFmode))
        return -1;
      x6 = XEXP (x2, 1);
      if (!rtx_equal_p (x6, operands[3])
          || !(
#line 6199 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 526 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL)))
        return -1;
      return 3987; /* avx512vl_fnmadd_v16hf_mask3 */

    case 16:
      if (pattern1297 (x2, 
E_V8HFmode, 
E_QImode) != 0)
        return -1;
      if (nonimmediate_operand (operands[1], E_V8HFmode)
          && vector_operand (operands[3], E_V8HFmode))
        {
          x6 = XEXP (x2, 1);
          if (rtx_equal_p (x6, operands[1])
              && (
#line 6181 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 527 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL)))
            return 3974; /* avx512fp16_fnmadd_v8hf_mask */
        }
      if (!vector_operand (operands[1], E_V8HFmode)
          || !nonimmediate_operand (operands[3], E_V8HFmode))
        return -1;
      x6 = XEXP (x2, 1);
      if (!rtx_equal_p (x6, operands[3])
          || !(
#line 6199 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 527 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL)))
        return -1;
      return 3989; /* avx512fp16_fnmadd_v8hf_mask3 */

    case 17:
      if (pattern1297 (x2, 
E_V16SFmode, 
E_HImode) != 0)
        return -1;
      if (nonimmediate_operand (operands[1], E_V16SFmode)
          && vector_operand (operands[3], E_V16SFmode))
        {
          x6 = XEXP (x2, 1);
          if (rtx_equal_p (x6, operands[1])
              && (
#line 6181 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 528 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return 3975; /* avx512f_fnmadd_v16sf_mask */
        }
      if (!vector_operand (operands[1], E_V16SFmode)
          || !nonimmediate_operand (operands[3], E_V16SFmode))
        return -1;
      x6 = XEXP (x2, 1);
      if (!rtx_equal_p (x6, operands[3])
          || !(
#line 6199 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 528 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 3990; /* avx512f_fnmadd_v16sf_mask3 */

    case 18:
      if (pattern1297 (x2, 
E_V8SFmode, 
E_QImode) != 0)
        return -1;
      if (nonimmediate_operand (operands[1], E_V8SFmode)
          && vector_operand (operands[3], E_V8SFmode))
        {
          x6 = XEXP (x2, 1);
          if (rtx_equal_p (x6, operands[1])
              && (
#line 6181 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 528 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return 3977; /* avx512vl_fnmadd_v8sf_mask */
        }
      if (!vector_operand (operands[1], E_V8SFmode)
          || !nonimmediate_operand (operands[3], E_V8SFmode))
        return -1;
      x6 = XEXP (x2, 1);
      if (!rtx_equal_p (x6, operands[3])
          || !(
#line 6199 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 528 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 3992; /* avx512vl_fnmadd_v8sf_mask3 */

    case 19:
      if (pattern1297 (x2, 
E_V4SFmode, 
E_QImode) != 0)
        return -1;
      if (nonimmediate_operand (operands[1], E_V4SFmode)
          && vector_operand (operands[3], E_V4SFmode))
        {
          x6 = XEXP (x2, 1);
          if (rtx_equal_p (x6, operands[1])
              && (
#line 6181 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 528 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return 3979; /* avx512vl_fnmadd_v4sf_mask */
        }
      if (!vector_operand (operands[1], E_V4SFmode)
          || !nonimmediate_operand (operands[3], E_V4SFmode))
        return -1;
      x6 = XEXP (x2, 1);
      if (!rtx_equal_p (x6, operands[3])
          || !(
#line 6199 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 528 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 3994; /* avx512vl_fnmadd_v4sf_mask3 */

    case 20:
      if (pattern1297 (x2, 
E_V8DFmode, 
E_QImode) != 0)
        return -1;
      if (nonimmediate_operand (operands[1], E_V8DFmode)
          && vector_operand (operands[3], E_V8DFmode))
        {
          x6 = XEXP (x2, 1);
          if (rtx_equal_p (x6, operands[1])
              && (
#line 6181 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 529 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return 3980; /* avx512f_fnmadd_v8df_mask */
        }
      if (!vector_operand (operands[1], E_V8DFmode)
          || !nonimmediate_operand (operands[3], E_V8DFmode))
        return -1;
      x6 = XEXP (x2, 1);
      if (!rtx_equal_p (x6, operands[3])
          || !(
#line 6199 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 529 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 3995; /* avx512f_fnmadd_v8df_mask3 */

    case 21:
      if (pattern1297 (x2, 
E_V4DFmode, 
E_QImode) != 0)
        return -1;
      if (nonimmediate_operand (operands[1], E_V4DFmode)
          && vector_operand (operands[3], E_V4DFmode))
        {
          x6 = XEXP (x2, 1);
          if (rtx_equal_p (x6, operands[1])
              && (
#line 6181 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 529 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return 3982; /* avx512vl_fnmadd_v4df_mask */
        }
      if (!vector_operand (operands[1], E_V4DFmode)
          || !nonimmediate_operand (operands[3], E_V4DFmode))
        return -1;
      x6 = XEXP (x2, 1);
      if (!rtx_equal_p (x6, operands[3])
          || !(
#line 6199 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 529 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 3997; /* avx512vl_fnmadd_v4df_mask3 */

    case 22:
      if (pattern1297 (x2, 
E_V2DFmode, 
E_QImode) != 0)
        return -1;
      if (nonimmediate_operand (operands[1], E_V2DFmode)
          && vector_operand (operands[3], E_V2DFmode))
        {
          x6 = XEXP (x2, 1);
          if (rtx_equal_p (x6, operands[1])
              && (
#line 6181 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 529 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return 3984; /* avx512vl_fnmadd_v2df_mask */
        }
      if (!vector_operand (operands[1], E_V2DFmode)
          || !nonimmediate_operand (operands[3], E_V2DFmode))
        return -1;
      x6 = XEXP (x2, 1);
      if (!rtx_equal_p (x6, operands[3])
          || !(
#line 6199 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 529 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 3999; /* avx512vl_fnmadd_v2df_mask3 */

    case 23:
      if (pattern1298 (x2, 
E_SImode, 
E_V32BFmode) != 0)
        return -1;
      x6 = XEXP (x2, 1);
      if (rtx_equal_p (x6, operands[1])
          && (
#line 32217 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256) && 
#line 565 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_512)))
        return 10644; /* avx10_2_fnmaddnepbf16_v32bf_mask */
      if (!rtx_equal_p (x6, operands[3])
          || !(
#line 32235 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256) && 
#line 565 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_512)))
        return -1;
      return 10647; /* avx10_2_fnmaddnepbf16_v32bf_mask3 */

    case 24:
      if (pattern1298 (x2, 
E_HImode, 
E_V16BFmode) != 0)
        return -1;
      x6 = XEXP (x2, 1);
      if (rtx_equal_p (x6, operands[1])
          && 
#line 32217 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
        return 10645; /* avx10_2_fnmaddnepbf16_v16bf_mask */
      if (!rtx_equal_p (x6, operands[3])
          || !
#line 32235 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
        return -1;
      return 10648; /* avx10_2_fnmaddnepbf16_v16bf_mask3 */

    case 25:
      if (pattern1298 (x2, 
E_QImode, 
E_V8BFmode) != 0)
        return -1;
      x6 = XEXP (x2, 1);
      if (rtx_equal_p (x6, operands[1])
          && 
#line 32217 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
        return 10646; /* avx10_2_fnmaddnepbf16_v8bf_mask */
      if (!rtx_equal_p (x6, operands[3])
          || !
#line 32235 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
        return -1;
      return 10649; /* avx10_2_fnmaddnepbf16_v8bf_mask3 */

    case 26:
      if (pattern1388 (x2, 
E_V8HFmode) != 0
          || !(
#line 6619 "../../gcc/config/i386/sse.md"
(TARGET_FMA || TARGET_AVX512F) && 
#line 479 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16)))
        return -1;
      return 4229; /* *fmai_fnmadd_v8hf */

    case 27:
      if (pattern1388 (x2, 
E_V4SFmode) != 0
          || !
#line 6619 "../../gcc/config/i386/sse.md"
(TARGET_FMA || TARGET_AVX512F))
        return -1;
      return 4231; /* *fmai_fnmadd_v4sf */

    case 28:
      if (pattern1388 (x2, 
E_V2DFmode) != 0
          || !(
#line 6619 "../../gcc/config/i386/sse.md"
(TARGET_FMA || TARGET_AVX512F) && 
#line 480 "../../gcc/config/i386/sse.md"
(TARGET_SSE2)))
        return -1;
      return 4233; /* *fmai_fnmadd_v2df */

    case 29:
      return recog_159 (x1, insn, pnum_clobbers);

    default:
      return -1;
    }
}

 int
recog_164 (rtx x1 ATTRIBUTE_UNUSED,
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
  x5 = XEXP (x4, 1);
  operands[2] = x5;
  x6 = XEXP (x2, 1);
  operands[3] = x6;
  x7 = XEXP (x2, 2);
  operands[4] = x7;
  if (!register_operand (operands[4], E_QImode))
    return -1;
  x8 = XEXP (x3, 1);
  x9 = XVECEXP (x8, 0, 0);
  switch (XWINT (x9, 0))
    {
    case 1L:
      x10 = XVECEXP (x8, 0, 1);
      if (XWINT (x10, 0) != 3L)
        return -1;
      switch (GET_MODE (operands[0]))
        {
        case E_V2DFmode:
          if (pattern1580 (x2, 
E_V2DFmode, 
E_V4DFmode) != 0
              || !
#line 13384 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))
            return -1;
          return 5402; /* avx512vl_unpckhpd128_mask */

        case E_V2DImode:
          if (pattern1581 (x2, 
E_V2DImode, 
E_V4DImode) != 0
              || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 14495 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && TARGET_AVX512VL)))
            return -1;
          return 7198; /* vec_interleave_highv2di_mask */

        default:
          return -1;
        }

    case 0L:
      x10 = XVECEXP (x8, 0, 1);
      if (XWINT (x10, 0) != 2L)
        return -1;
      switch (GET_MODE (operands[0]))
        {
        case E_V2DFmode:
          if (pattern1580 (x2, 
E_V2DFmode, 
E_V4DFmode) != 0
              || !
#line 13527 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))
            return -1;
          return 5412; /* avx512vl_unpcklpd128_mask */

        case E_V2DImode:
          if (pattern1581 (x2, 
E_V2DImode, 
E_V4DImode) != 0
              || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 14545 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && TARGET_AVX512VL)))
            return -1;
          return 7204; /* vec_interleave_lowv2di_mask */

        default:
          return -1;
        }

    default:
      return -1;
    }
}

 int
recog_166 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12, x13, x14, x15, x16, x17;
  rtx x18, x19, x20, x21, x22, x23, x24, x25;
  rtx x26, x27, x28, x29, x30, x31, x32, x33;
  rtx x34, x35, x36, x37, x38, x39, x40, x41;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  x5 = XEXP (x4, 0);
  operands[1] = x5;
  x6 = XEXP (x3, 1);
  switch (XVECLEN (x6, 0))
    {
    case 16:
      x7 = XVECEXP (x6, 0, 0);
      if (GET_CODE (x7) != CONST_INT)
        return -1;
      x8 = XVECEXP (x6, 0, 1);
      if (GET_CODE (x8) == CONST_INT)
        {
          res = recog_161 (x1, insn, pnum_clobbers);
          if (res >= 0)
            return res;
        }
      operands[3] = x7;
      x9 = XEXP (x4, 1);
      operands[2] = x9;
      operands[4] = x8;
      x10 = XVECEXP (x6, 0, 2);
      operands[5] = x10;
      x11 = XVECEXP (x6, 0, 3);
      operands[6] = x11;
      x12 = XVECEXP (x6, 0, 4);
      operands[7] = x12;
      x13 = XVECEXP (x6, 0, 5);
      operands[8] = x13;
      x14 = XVECEXP (x6, 0, 6);
      operands[9] = x14;
      x15 = XVECEXP (x6, 0, 7);
      operands[10] = x15;
      x16 = XVECEXP (x6, 0, 8);
      operands[11] = x16;
      x17 = XVECEXP (x6, 0, 9);
      operands[12] = x17;
      x18 = XVECEXP (x6, 0, 10);
      operands[13] = x18;
      x19 = XVECEXP (x6, 0, 11);
      operands[14] = x19;
      x20 = XVECEXP (x6, 0, 12);
      operands[15] = x20;
      x21 = XVECEXP (x6, 0, 13);
      operands[16] = x21;
      x22 = XVECEXP (x6, 0, 14);
      operands[17] = x22;
      x23 = XVECEXP (x6, 0, 15);
      operands[18] = x23;
      x24 = XEXP (x2, 1);
      operands[19] = x24;
      x25 = XEXP (x2, 2);
      operands[20] = x25;
      if (!register_operand (operands[20], E_HImode))
        return -1;
      switch (GET_MODE (operands[0]))
        {
        case E_V16SFmode:
          if (pattern1638 (x2, 
E_V16SFmode, 
E_V32SFmode) != 0
              || !nonimm_or_0_operand (operands[19], E_V16SFmode))
            return -1;
          if (const_0_to_3_operand (operands[3], E_VOIDmode)
              && const_0_to_3_operand (operands[4], E_VOIDmode)
              && const_16_to_19_operand (operands[5], E_VOIDmode)
              && const_16_to_19_operand (operands[6], E_VOIDmode)
              && const_4_to_7_operand (operands[7], E_VOIDmode)
              && const_4_to_7_operand (operands[8], E_VOIDmode)
              && const_20_to_23_operand (operands[9], E_VOIDmode)
              && const_20_to_23_operand (operands[10], E_VOIDmode)
              && const_8_to_11_operand (operands[11], E_VOIDmode)
              && const_8_to_11_operand (operands[12], E_VOIDmode)
              && const_24_to_27_operand (operands[13], E_VOIDmode)
              && const_24_to_27_operand (operands[14], E_VOIDmode)
              && const_12_to_15_operand (operands[15], E_VOIDmode)
              && const_12_to_15_operand (operands[16], E_VOIDmode)
              && const_28_to_31_operand (operands[17], E_VOIDmode)
              && const_28_to_31_operand (operands[18], E_VOIDmode)
              && (
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 14284 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512
   && (INTVAL (operands[3]) == (INTVAL (operands[7]) - 4)
       && INTVAL (operands[4]) == (INTVAL (operands[8]) - 4)
       && INTVAL (operands[5]) == (INTVAL (operands[9]) - 4)
       && INTVAL (operands[6]) == (INTVAL (operands[10]) - 4)
       && INTVAL (operands[3]) == (INTVAL (operands[11]) - 8)
       && INTVAL (operands[4]) == (INTVAL (operands[12]) - 8)
       && INTVAL (operands[5]) == (INTVAL (operands[13]) - 8)
       && INTVAL (operands[6]) == (INTVAL (operands[14]) - 8)
       && INTVAL (operands[3]) == (INTVAL (operands[15]) - 12)
       && INTVAL (operands[4]) == (INTVAL (operands[16]) - 12)
       && INTVAL (operands[5]) == (INTVAL (operands[17]) - 12)
       && INTVAL (operands[6]) == (INTVAL (operands[18]) - 12)))))
            return 7187; /* avx512f_shufps512_1_mask */
          if (!const_0_to_15_operand (operands[3], E_VOIDmode)
              || pattern1866 () != 0
              || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 20413 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (INTVAL (operands[3]) & 3) == 0
   && INTVAL (operands[3]) == INTVAL (operands[4]) - 1
   && INTVAL (operands[3]) == INTVAL (operands[5]) - 2
   && INTVAL (operands[3]) == INTVAL (operands[6]) - 3
   && (INTVAL (operands[7]) & 3) == 0
   && INTVAL (operands[7]) == INTVAL (operands[8]) - 1
   && INTVAL (operands[7]) == INTVAL (operands[9]) - 2
   && INTVAL (operands[7]) == INTVAL (operands[10]) - 3
   && (INTVAL (operands[11]) & 3) == 0
   && INTVAL (operands[11]) == INTVAL (operands[12]) - 1
   && INTVAL (operands[11]) == INTVAL (operands[13]) - 2
   && INTVAL (operands[11]) == INTVAL (operands[14]) - 3
   && (INTVAL (operands[15]) & 3) == 0
   && INTVAL (operands[15]) == INTVAL (operands[16]) - 1
   && INTVAL (operands[15]) == INTVAL (operands[17]) - 2
   && INTVAL (operands[15]) == INTVAL (operands[18]) - 3) && 
#line 722 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512))))
            return -1;
          return 8427; /* avx512f_shuf_f32x4_1_mask */

        case E_V16SImode:
          if (pattern1638 (x2, 
E_V16SImode, 
E_V32SImode) != 0
              || !const_0_to_15_operand (operands[3], E_VOIDmode)
              || pattern1866 () != 0
              || !nonimm_or_0_operand (operands[19], E_V16SImode)
              || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 20413 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (INTVAL (operands[3]) & 3) == 0
   && INTVAL (operands[3]) == INTVAL (operands[4]) - 1
   && INTVAL (operands[3]) == INTVAL (operands[5]) - 2
   && INTVAL (operands[3]) == INTVAL (operands[6]) - 3
   && (INTVAL (operands[7]) & 3) == 0
   && INTVAL (operands[7]) == INTVAL (operands[8]) - 1
   && INTVAL (operands[7]) == INTVAL (operands[9]) - 2
   && INTVAL (operands[7]) == INTVAL (operands[10]) - 3
   && (INTVAL (operands[11]) & 3) == 0
   && INTVAL (operands[11]) == INTVAL (operands[12]) - 1
   && INTVAL (operands[11]) == INTVAL (operands[13]) - 2
   && INTVAL (operands[11]) == INTVAL (operands[14]) - 3
   && (INTVAL (operands[15]) & 3) == 0
   && INTVAL (operands[15]) == INTVAL (operands[16]) - 1
   && INTVAL (operands[15]) == INTVAL (operands[17]) - 2
   && INTVAL (operands[15]) == INTVAL (operands[18]) - 3) && 
#line 722 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512))))
            return -1;
          return 8429; /* avx512f_shuf_i32x4_1_mask */

        default:
          return -1;
        }

    case 8:
      x7 = XVECEXP (x6, 0, 0);
      if (GET_CODE (x7) != CONST_INT)
        return -1;
      x8 = XVECEXP (x6, 0, 1);
      if (GET_CODE (x8) == CONST_INT)
        {
          res = recog_162 (x1, insn, pnum_clobbers);
          if (res >= 0)
            return res;
        }
      operands[3] = x7;
      x9 = XEXP (x4, 1);
      operands[2] = x9;
      operands[4] = x8;
      x10 = XVECEXP (x6, 0, 2);
      operands[5] = x10;
      x11 = XVECEXP (x6, 0, 3);
      operands[6] = x11;
      x12 = XVECEXP (x6, 0, 4);
      operands[7] = x12;
      x13 = XVECEXP (x6, 0, 5);
      operands[8] = x13;
      x14 = XVECEXP (x6, 0, 6);
      operands[9] = x14;
      x15 = XVECEXP (x6, 0, 7);
      operands[10] = x15;
      x24 = XEXP (x2, 1);
      operands[11] = x24;
      x25 = XEXP (x2, 2);
      operands[12] = x25;
      if (!register_operand (operands[12], E_QImode))
        return -1;
      switch (GET_MODE (operands[0]))
        {
        case E_V8SFmode:
          if (pattern1751 (x2, 
E_V8SFmode, 
E_V16SFmode) != 0)
            return -1;
          if (const_0_to_3_operand (operands[3], E_VOIDmode)
              && const_0_to_3_operand (operands[4], E_VOIDmode)
              && const_8_to_11_operand (operands[5], E_VOIDmode)
              && const_8_to_11_operand (operands[6], E_VOIDmode)
              && const_4_to_7_operand (operands[7], E_VOIDmode)
              && const_4_to_7_operand (operands[8], E_VOIDmode)
              && const_12_to_15_operand (operands[9], E_VOIDmode)
              && const_12_to_15_operand (operands[10], E_VOIDmode)
              && (
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 11477 "../../gcc/config/i386/sse.md"
(TARGET_AVX
   && TARGET_AVX512VL
   && (INTVAL (operands[3]) == (INTVAL (operands[7]) - 4)
       && INTVAL (operands[4]) == (INTVAL (operands[8]) - 4)
       && INTVAL (operands[5]) == (INTVAL (operands[9]) - 4)
       && INTVAL (operands[6]) == (INTVAL (operands[10]) - 4)))))
            return 5269; /* avx_shufps256_1_mask */
          if (!const_0_to_7_operand (operands[3], E_VOIDmode)
              || pattern1841 () != 0
              || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 20334 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL
   && (INTVAL (operands[3]) & 3) == 0
   && INTVAL (operands[3]) == INTVAL (operands[4]) - 1
   && INTVAL (operands[3]) == INTVAL (operands[5]) - 2
   && INTVAL (operands[3]) == INTVAL (operands[6]) - 3
   && (INTVAL (operands[7]) & 3) == 0
   && INTVAL (operands[7]) == INTVAL (operands[8]) - 1
   && INTVAL (operands[7]) == INTVAL (operands[9]) - 2
   && INTVAL (operands[7]) == INTVAL (operands[10]) - 3)))
            return -1;
          return 8425; /* avx512vl_shuf_f32x4_1_mask */

        case E_V8DFmode:
          if (pattern1751 (x2, 
E_V8DFmode, 
E_V16DFmode) != 0)
            return -1;
          if (const_0_to_1_operand (operands[3], E_VOIDmode)
              && const_8_to_9_operand (operands[4], E_VOIDmode)
              && const_2_to_3_operand (operands[5], E_VOIDmode)
              && const_10_to_11_operand (operands[6], E_VOIDmode)
              && const_4_to_5_operand (operands[7], E_VOIDmode)
              && const_12_to_13_operand (operands[8], E_VOIDmode)
              && const_6_to_7_operand (operands[9], E_VOIDmode)
              && const_14_to_15_operand (operands[10], E_VOIDmode)
              && (
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 14349 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return 7189; /* avx512f_shufpd512_1_mask */
          if (!const_0_to_7_operand (operands[3], E_VOIDmode)
              || pattern1841 () != 0
              || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 20236 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (INTVAL (operands[3]) & 1) == 0
   && INTVAL (operands[3]) == INTVAL (operands[4]) - 1
   && (INTVAL (operands[5]) & 1) == 0
   && INTVAL (operands[5]) == INTVAL (operands[6]) - 1
   && (INTVAL (operands[7]) & 1) == 0
   && INTVAL (operands[7]) == INTVAL (operands[8]) - 1
   && (INTVAL (operands[9]) & 1) == 0
   && INTVAL (operands[9]) == INTVAL (operands[10]) - 1) && 
#line 718 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512))))
            return -1;
          return 8415; /* avx512f_shuf_f64x2_1_mask */

        case E_V8DImode:
          if (pattern1752 (x2, 
E_V8DImode, 
E_V16DImode) != 0
              || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 20236 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (INTVAL (operands[3]) & 1) == 0
   && INTVAL (operands[3]) == INTVAL (operands[4]) - 1
   && (INTVAL (operands[5]) & 1) == 0
   && INTVAL (operands[5]) == INTVAL (operands[6]) - 1
   && (INTVAL (operands[7]) & 1) == 0
   && INTVAL (operands[7]) == INTVAL (operands[8]) - 1
   && (INTVAL (operands[9]) & 1) == 0
   && INTVAL (operands[9]) == INTVAL (operands[10]) - 1) && 
#line 718 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512))))
            return -1;
          return 8417; /* avx512f_shuf_i64x2_1_mask */

        case E_V8SImode:
          if (pattern1752 (x2, 
E_V8SImode, 
E_V16SImode) != 0
              || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 20334 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL
   && (INTVAL (operands[3]) & 3) == 0
   && INTVAL (operands[3]) == INTVAL (operands[4]) - 1
   && INTVAL (operands[3]) == INTVAL (operands[5]) - 2
   && INTVAL (operands[3]) == INTVAL (operands[6]) - 3
   && (INTVAL (operands[7]) & 3) == 0
   && INTVAL (operands[7]) == INTVAL (operands[8]) - 1
   && INTVAL (operands[7]) == INTVAL (operands[9]) - 2
   && INTVAL (operands[7]) == INTVAL (operands[10]) - 3)))
            return -1;
          return 8423; /* avx512vl_shuf_i32x4_1_mask */

        default:
          return -1;
        }

    case 4:
      x7 = XVECEXP (x6, 0, 0);
      if (GET_CODE (x7) != CONST_INT)
        return -1;
      x8 = XVECEXP (x6, 0, 1);
      if (GET_CODE (x8) == CONST_INT)
        {
          res = recog_163 (x1, insn, pnum_clobbers);
          if (res >= 0)
            return res;
        }
      operands[3] = x7;
      x9 = XEXP (x4, 1);
      operands[2] = x9;
      operands[4] = x8;
      x10 = XVECEXP (x6, 0, 2);
      operands[5] = x10;
      x11 = XVECEXP (x6, 0, 3);
      operands[6] = x11;
      x24 = XEXP (x2, 1);
      operands[7] = x24;
      x25 = XEXP (x2, 2);
      operands[8] = x25;
      if (!register_operand (operands[8], E_QImode))
        return -1;
      switch (GET_MODE (operands[0]))
        {
        case E_V4SFmode:
          if (pattern1637 (x2, 
E_V4SFmode, 
E_V8SFmode) != 0
              || !
#line 11530 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))
            return -1;
          return 5270; /* sse_shufps_v4sf_mask */

        case E_V4DFmode:
          if (pattern1638 (x2, 
E_V4DFmode, 
E_V8DFmode) != 0
              || !nonimm_or_0_operand (operands[7], E_V4DFmode))
            return -1;
          if (const_0_to_1_operand (operands[3], E_VOIDmode)
              && const_4_to_5_operand (operands[4], E_VOIDmode)
              && const_2_to_3_operand (operands[5], E_VOIDmode)
              && const_6_to_7_operand (operands[6], E_VOIDmode)
              && (
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 14398 "../../gcc/config/i386/sse.md"
(TARGET_AVX && TARGET_AVX512VL)))
            return 7191; /* avx_shufpd256_1_mask */
          if (!const_0_to_3_operand (operands[3], E_VOIDmode)
              || !const_0_to_3_operand (operands[4], E_VOIDmode)
              || !const_4_to_7_operand (operands[5], E_VOIDmode)
              || !const_4_to_7_operand (operands[6], E_VOIDmode)
              || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 20179 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL
   && (INTVAL (operands[3]) & 1) == 0
   && INTVAL (operands[3]) == INTVAL (operands[4]) - 1
   && (INTVAL (operands[5]) & 1) == 0
   && INTVAL (operands[5]) == INTVAL (operands[6]) - 1)))
            return -1;
          return 8413; /* avx512dq_shuf_f64x2_1_mask */

        case E_V4DImode:
          if (pattern1637 (x2, 
E_V4DImode, 
E_V8DImode) != 0
              || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 20179 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL
   && (INTVAL (operands[3]) & 1) == 0
   && INTVAL (operands[3]) == INTVAL (operands[4]) - 1
   && (INTVAL (operands[5]) & 1) == 0
   && INTVAL (operands[5]) == INTVAL (operands[6]) - 1)))
            return -1;
          return 8411; /* avx512dq_shuf_i64x2_1_mask */

        default:
          return -1;
        }

    case 2:
      x7 = XVECEXP (x6, 0, 0);
      if (GET_CODE (x7) != CONST_INT)
        return -1;
      x8 = XVECEXP (x6, 0, 1);
      if (GET_CODE (x8) == CONST_INT)
        {
          res = recog_164 (x1, insn, pnum_clobbers);
          if (res >= 0)
            return res;
        }
      operands[3] = x7;
      if (!const_0_to_1_operand (operands[3], E_VOIDmode)
          || pattern1215 (x2, 
E_V2DFmode, 
E_V4DFmode) != 0)
        return -1;
      operands[4] = x8;
      if (!const_2_to_3_operand (operands[4], E_VOIDmode))
        return -1;
      x24 = XEXP (x2, 1);
      operands[5] = x24;
      if (!nonimm_or_0_operand (operands[5], E_V2DFmode))
        return -1;
      x25 = XEXP (x2, 2);
      operands[6] = x25;
      if (!register_operand (operands[6], E_QImode)
          || !
#line 14440 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))
        return -1;
      return 7192; /* sse2_shufpd_v2df_mask */

    case 64:
      return recog_165 (x1, insn, pnum_clobbers);

    case 32:
      if (pattern899 (x6) != 0)
        return -1;
      x9 = XEXP (x4, 1);
      operands[2] = x9;
      x24 = XEXP (x2, 1);
      operands[3] = x24;
      x25 = XEXP (x2, 2);
      operands[4] = x25;
      if (!register_operand (operands[4], E_SImode))
        return -1;
      x7 = XVECEXP (x6, 0, 0);
      switch (XWINT (x7, 0))
        {
        case 8L:
          x8 = XVECEXP (x6, 0, 1);
          if (XWINT (x8, 0) != 40L)
            return -1;
          x10 = XVECEXP (x6, 0, 2);
          if (XWINT (x10, 0) != 9L)
            return -1;
          x11 = XVECEXP (x6, 0, 3);
          if (XWINT (x11, 0) != 41L)
            return -1;
          x12 = XVECEXP (x6, 0, 4);
          if (XWINT (x12, 0) != 10L)
            return -1;
          x13 = XVECEXP (x6, 0, 5);
          if (XWINT (x13, 0) != 42L)
            return -1;
          x14 = XVECEXP (x6, 0, 6);
          if (XWINT (x14, 0) != 11L)
            return -1;
          x15 = XVECEXP (x6, 0, 7);
          if (XWINT (x15, 0) != 43L
              || pattern1881 (x6) != 0)
            return -1;
          x26 = XVECEXP (x6, 0, 16);
          if (XWINT (x26, 0) != 24L)
            return -1;
          x27 = XVECEXP (x6, 0, 17);
          if (XWINT (x27, 0) != 56L)
            return -1;
          x28 = XVECEXP (x6, 0, 18);
          if (XWINT (x28, 0) != 25L)
            return -1;
          x29 = XVECEXP (x6, 0, 19);
          if (XWINT (x29, 0) != 57L)
            return -1;
          x30 = XVECEXP (x6, 0, 20);
          if (XWINT (x30, 0) != 26L)
            return -1;
          x31 = XVECEXP (x6, 0, 21);
          if (XWINT (x31, 0) != 58L)
            return -1;
          x32 = XVECEXP (x6, 0, 22);
          if (XWINT (x32, 0) != 27L)
            return -1;
          x33 = XVECEXP (x6, 0, 23);
          if (XWINT (x33, 0) != 59L
              || pattern1886 (x6) != 0
              || pattern1580 (x2, 
E_V32QImode, 
E_V64QImode) != 0
              || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 19452 "../../gcc/config/i386/sse.md"
(TARGET_AVX2 && TARGET_AVX512VL && TARGET_AVX512BW)))
            return -1;
          return 8319; /* avx2_interleave_highv32qi_mask */

        case 0L:
          x8 = XVECEXP (x6, 0, 1);
          if (XWINT (x8, 0) != 32L)
            return -1;
          x10 = XVECEXP (x6, 0, 2);
          if (XWINT (x10, 0) != 1L)
            return -1;
          x11 = XVECEXP (x6, 0, 3);
          if (XWINT (x11, 0) != 33L)
            return -1;
          x12 = XVECEXP (x6, 0, 4);
          if (XWINT (x12, 0) != 2L)
            return -1;
          x13 = XVECEXP (x6, 0, 5);
          if (XWINT (x13, 0) != 34L)
            return -1;
          x14 = XVECEXP (x6, 0, 6);
          if (XWINT (x14, 0) != 3L)
            return -1;
          x15 = XVECEXP (x6, 0, 7);
          if (XWINT (x15, 0) != 35L)
            return -1;
          x26 = XVECEXP (x6, 0, 16);
          if (XWINT (x26, 0) != 16L)
            return -1;
          x27 = XVECEXP (x6, 0, 17);
          if (XWINT (x27, 0) != 48L)
            return -1;
          x28 = XVECEXP (x6, 0, 18);
          if (XWINT (x28, 0) != 17L)
            return -1;
          x29 = XVECEXP (x6, 0, 19);
          if (XWINT (x29, 0) != 49L)
            return -1;
          x30 = XVECEXP (x6, 0, 20);
          if (XWINT (x30, 0) != 18L)
            return -1;
          x31 = XVECEXP (x6, 0, 21);
          if (XWINT (x31, 0) != 50L)
            return -1;
          x32 = XVECEXP (x6, 0, 22);
          if (XWINT (x32, 0) != 19L)
            return -1;
          x33 = XVECEXP (x6, 0, 23);
          if (XWINT (x33, 0) != 51L)
            return -1;
          x16 = XVECEXP (x6, 0, 8);
          switch (XWINT (x16, 0))
            {
            case 4L:
              x17 = XVECEXP (x6, 0, 9);
              if (XWINT (x17, 0) != 36L)
                return -1;
              x18 = XVECEXP (x6, 0, 10);
              if (XWINT (x18, 0) != 5L)
                return -1;
              x19 = XVECEXP (x6, 0, 11);
              if (XWINT (x19, 0) != 37L)
                return -1;
              x20 = XVECEXP (x6, 0, 12);
              if (XWINT (x20, 0) != 6L)
                return -1;
              x21 = XVECEXP (x6, 0, 13);
              if (XWINT (x21, 0) != 38L)
                return -1;
              x22 = XVECEXP (x6, 0, 14);
              if (XWINT (x22, 0) != 7L)
                return -1;
              x23 = XVECEXP (x6, 0, 15);
              if (XWINT (x23, 0) != 39L)
                return -1;
              x34 = XVECEXP (x6, 0, 24);
              if (XWINT (x34, 0) != 20L)
                return -1;
              x35 = XVECEXP (x6, 0, 25);
              if (XWINT (x35, 0) != 52L)
                return -1;
              x36 = XVECEXP (x6, 0, 26);
              if (XWINT (x36, 0) != 21L)
                return -1;
              x37 = XVECEXP (x6, 0, 27);
              if (XWINT (x37, 0) != 53L)
                return -1;
              x38 = XVECEXP (x6, 0, 28);
              if (XWINT (x38, 0) != 22L)
                return -1;
              x39 = XVECEXP (x6, 0, 29);
              if (XWINT (x39, 0) != 54L)
                return -1;
              x40 = XVECEXP (x6, 0, 30);
              if (XWINT (x40, 0) != 23L)
                return -1;
              x41 = XVECEXP (x6, 0, 31);
              if (XWINT (x41, 0) != 55L
                  || pattern1580 (x2, 
E_V32QImode, 
E_V64QImode) != 0
                  || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 19548 "../../gcc/config/i386/sse.md"
(TARGET_AVX2 && TARGET_AVX512VL && TARGET_AVX512BW)))
                return -1;
              return 8325; /* avx2_interleave_lowv32qi_mask */

            case 8L:
              x17 = XVECEXP (x6, 0, 9);
              if (XWINT (x17, 0) != 40L)
                return -1;
              x18 = XVECEXP (x6, 0, 10);
              if (XWINT (x18, 0) != 9L)
                return -1;
              x19 = XVECEXP (x6, 0, 11);
              if (XWINT (x19, 0) != 41L)
                return -1;
              x20 = XVECEXP (x6, 0, 12);
              if (XWINT (x20, 0) != 10L)
                return -1;
              x21 = XVECEXP (x6, 0, 13);
              if (XWINT (x21, 0) != 42L)
                return -1;
              x22 = XVECEXP (x6, 0, 14);
              if (XWINT (x22, 0) != 11L)
                return -1;
              x23 = XVECEXP (x6, 0, 15);
              if (XWINT (x23, 0) != 43L)
                return -1;
              x34 = XVECEXP (x6, 0, 24);
              if (XWINT (x34, 0) != 24L)
                return -1;
              x35 = XVECEXP (x6, 0, 25);
              if (XWINT (x35, 0) != 56L)
                return -1;
              x36 = XVECEXP (x6, 0, 26);
              if (XWINT (x36, 0) != 25L)
                return -1;
              x37 = XVECEXP (x6, 0, 27);
              if (XWINT (x37, 0) != 57L)
                return -1;
              x38 = XVECEXP (x6, 0, 28);
              if (XWINT (x38, 0) != 26L)
                return -1;
              x39 = XVECEXP (x6, 0, 29);
              if (XWINT (x39, 0) != 58L)
                return -1;
              x40 = XVECEXP (x6, 0, 30);
              if (XWINT (x40, 0) != 27L)
                return -1;
              x41 = XVECEXP (x6, 0, 31);
              if (XWINT (x41, 0) != 59L)
                return -1;
              switch (GET_MODE (operands[0]))
                {
                case E_V32HImode:
                  if (pattern1580 (x2, 
E_V32HImode, 
E_V64HImode) != 0
                      || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 19668 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 1033 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512))))
                    return -1;
                  return 8347; /* avx512bw_interleave_lowv32hi_mask */

                case E_V32HFmode:
                  if (pattern1580 (x2, 
E_V32HFmode, 
E_V64HFmode) != 0
                      || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 19668 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 1033 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512))))
                    return -1;
                  return 8349; /* avx512bw_interleave_lowv32hf_mask */

                case E_V32BFmode:
                  if (pattern1580 (x2, 
E_V32BFmode, 
E_V64BFmode) != 0
                      || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 19668 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 1033 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512))))
                    return -1;
                  return 8351; /* avx512bw_interleave_lowv32bf_mask */

                default:
                  return -1;
                }

            default:
              return -1;
            }

        case 4L:
          x8 = XVECEXP (x6, 0, 1);
          if (XWINT (x8, 0) != 36L)
            return -1;
          x10 = XVECEXP (x6, 0, 2);
          if (XWINT (x10, 0) != 5L)
            return -1;
          x11 = XVECEXP (x6, 0, 3);
          if (XWINT (x11, 0) != 37L)
            return -1;
          x12 = XVECEXP (x6, 0, 4);
          if (XWINT (x12, 0) != 6L)
            return -1;
          x13 = XVECEXP (x6, 0, 5);
          if (XWINT (x13, 0) != 38L)
            return -1;
          x14 = XVECEXP (x6, 0, 6);
          if (XWINT (x14, 0) != 7L)
            return -1;
          x15 = XVECEXP (x6, 0, 7);
          if (XWINT (x15, 0) != 39L
              || pattern1881 (x6) != 0)
            return -1;
          x26 = XVECEXP (x6, 0, 16);
          if (XWINT (x26, 0) != 20L)
            return -1;
          x27 = XVECEXP (x6, 0, 17);
          if (XWINT (x27, 0) != 52L)
            return -1;
          x28 = XVECEXP (x6, 0, 18);
          if (XWINT (x28, 0) != 21L)
            return -1;
          x29 = XVECEXP (x6, 0, 19);
          if (XWINT (x29, 0) != 53L)
            return -1;
          x30 = XVECEXP (x6, 0, 20);
          if (XWINT (x30, 0) != 22L)
            return -1;
          x31 = XVECEXP (x6, 0, 21);
          if (XWINT (x31, 0) != 54L)
            return -1;
          x32 = XVECEXP (x6, 0, 22);
          if (XWINT (x32, 0) != 23L)
            return -1;
          x33 = XVECEXP (x6, 0, 23);
          if (XWINT (x33, 0) != 55L
              || pattern1886 (x6) != 0)
            return -1;
          switch (GET_MODE (operands[0]))
            {
            case E_V32HImode:
              if (pattern1580 (x2, 
E_V32HImode, 
E_V64HImode) != 0
                  || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 19600 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 1033 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512))))
                return -1;
              return 8329; /* avx512bw_interleave_highv32hi_mask */

            case E_V32HFmode:
              if (pattern1580 (x2, 
E_V32HFmode, 
E_V64HFmode) != 0
                  || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 19600 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 1033 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512))))
                return -1;
              return 8331; /* avx512bw_interleave_highv32hf_mask */

            case E_V32BFmode:
              if (pattern1580 (x2, 
E_V32BFmode, 
E_V64BFmode) != 0
                  || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 19600 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 1033 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512))))
                return -1;
              return 8333; /* avx512bw_interleave_highv32bf_mask */

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
recog_194 (rtx x1 ATTRIBUTE_UNUSED,
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
      return 8751; /* avx2_sign_extendv16qiv16hi2_mask */

    case 1:
      if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 24171 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512)))
        return -1;
      return 8759; /* avx512bw_sign_extendv32qiv32hi2_mask */

    case 2:
      if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 24241 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1 && TARGET_AVX512BW && TARGET_AVX512VL)))
        return -1;
      return 8771; /* *sse4_1_sign_extendv8qiv8hi2_mask_1 */

    case 3:
      if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 24366 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
        return -1;
      return 8783; /* avx512f_sign_extendv16qiv16si2_mask */

    case 4:
      if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 24509 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
        return -1;
      return 8811; /* avx512f_sign_extendv16hiv16si2_mask */

    case 5:
      if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 24398 "../../gcc/config/i386/sse.md"
(TARGET_AVX2 && TARGET_AVX512VL)))
        return -1;
      return 8791; /* *avx2_sign_extendv8qiv8si2_mask_1 */

    case 6:
      if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 24562 "../../gcc/config/i386/sse.md"
(TARGET_AVX2 && TARGET_AVX512VL)))
        return -1;
      return 8819; /* avx2_sign_extendv8hiv8si2_mask */

    case 7:
      if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 24459 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1 && TARGET_AVX512VL)))
        return -1;
      return 8803; /* *sse4_1_sign_extendv4qiv4si2_mask_1 */

    case 8:
      if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 24632 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1 && TARGET_AVX512VL)))
        return -1;
      return 8831; /* *sse4_1_sign_extendv4hiv4si2_mask_1 */

    case 9:
      if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 24763 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
        return -1;
      return 8847; /* *avx512f_sign_extendv8qiv8di2_mask_1 */

    case 10:
      if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 24934 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
        return -1;
      return 8878; /* avx512f_sign_extendv8hiv8di2_mask */

    case 11:
      if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 25071 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
        return -1;
      return 8906; /* avx512f_sign_extendv8siv8di2_mask */

    case 12:
      if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 24821 "../../gcc/config/i386/sse.md"
(TARGET_AVX2 && TARGET_AVX512VL)))
        return -1;
      return 8859; /* *avx2_sign_extendv4qiv4di2_mask_1 */

    case 13:
      if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 24964 "../../gcc/config/i386/sse.md"
(TARGET_AVX2 && TARGET_AVX512VL)))
        return -1;
      return 8886; /* *avx2_sign_extendv4hiv4di2_mask_1 */

    case 14:
      if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 25122 "../../gcc/config/i386/sse.md"
(TARGET_AVX2 && TARGET_AVX512VL)))
        return -1;
      return 8912; /* avx2_sign_extendv4siv4di2_mask */

    case 15:
      if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 24883 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1 && TARGET_AVX512VL)))
        return -1;
      return 8871; /* *sse4_1_sign_extendv2qiv2di2_mask_1 */

    case 16:
      if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 25022 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1 && TARGET_AVX512VL)))
        return -1;
      return 8898; /* *sse4_1_sign_extendv2hiv2di2_mask_1 */

    case 17:
      if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 25188 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1 && TARGET_AVX512VL)))
        return -1;
      return 8922; /* *sse4_1_sign_extendv2siv2di2_mask_1 */

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
            return 8767; /* sse4_1_sign_extendv8qiv8hi2_mask */
          break;

        case 1:
          if ((
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 24387 "../../gcc/config/i386/sse.md"
(TARGET_AVX2 && TARGET_AVX512VL)))
            return 8787; /* avx2_sign_extendv8qiv8si2_mask */
          break;

        case 2:
          if ((
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 24753 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return 8843; /* avx512f_sign_extendv8qiv8di2_mask */
          break;

        case 3:
          if ((
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 24447 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1 && TARGET_AVX512VL)))
            return 8799; /* sse4_1_sign_extendv4qiv4si2_mask */
          break;

        case 4:
          if ((
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 24620 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1 && TARGET_AVX512VL)))
            return 8827; /* sse4_1_sign_extendv4hiv4si2_mask */
          break;

        case 5:
          if ((
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 24810 "../../gcc/config/i386/sse.md"
(TARGET_AVX2 && TARGET_AVX512VL)))
            return 8855; /* avx2_sign_extendv4qiv4di2_mask */
          break;

        case 6:
          if ((
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 24953 "../../gcc/config/i386/sse.md"
(TARGET_AVX2 && TARGET_AVX512VL)))
            return 8882; /* avx2_sign_extendv4hiv4di2_mask */
          break;

        case 7:
          if ((
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 24871 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1 && TARGET_AVX512VL)))
            return 8867; /* sse4_1_sign_extendv2qiv2di2_mask */
          break;

        case 8:
          if ((
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 25010 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1 && TARGET_AVX512VL)))
            return 8894; /* sse4_1_sign_extendv2hiv2di2_mask */
          break;

        case 9:
          if ((
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 25176 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1 && TARGET_AVX512VL)))
            return 8918; /* sse4_1_sign_extendv2siv2di2_mask */
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
          return 8775; /* *sse4_1_sign_extendv8qiv8hi2_mask_2 */

        case 1:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 24417 "../../gcc/config/i386/sse.md"
(TARGET_AVX2 && TARGET_AVX512VL
   && ix86_pre_reload_split ())))
            return -1;
          return 8795; /* *avx2_sign_extendv8qiv8si2_mask_2 */

        case 2:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 24781 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512 && ix86_pre_reload_split ())))
            return -1;
          return 8851; /* *avx512f_sign_extendv8qiv8di2_mask_2 */

        case 3:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 24651 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1 && TARGET_AVX512VL
   && ix86_pre_reload_split ())))
            return -1;
          return 8835; /* *sse4_1_sign_extendv4hiv4si2_mask_2 */

        case 4:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 24981 "../../gcc/config/i386/sse.md"
(TARGET_AVX2 && TARGET_AVX512VL
   && ix86_pre_reload_split ())))
            return -1;
          return 8890; /* *avx2_sign_extendv4hiv4di2_mask_2 */

        case 5:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 25206 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1 && TARGET_AVX512VL
   && ix86_pre_reload_split ())))
            return -1;
          return 8926; /* *sse4_1_sign_extendv2siv2di2_mask_2 */

        case 6:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 24482 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1 && TARGET_AVX512VL
   && ix86_pre_reload_split ())))
            return -1;
          return 8807; /* *sse4_1_sign_extendv4qiv4si2_mask_2 */

        case 7:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 24842 "../../gcc/config/i386/sse.md"
(TARGET_AVX2 && TARGET_AVX512VL
   && ix86_pre_reload_split ())))
            return -1;
          return 8863; /* *avx2_sign_extendv4qiv4di2_mask_2 */

        case 8:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 25044 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1 && TARGET_AVX512VL
   && ix86_pre_reload_split ())))
            return -1;
          return 8902; /* *sse4_1_sign_extendv2hiv2di2_mask_2 */

        default:
          return -1;
        }

    default:
      return -1;
    }
}

 int
recog_205 (rtx x1 ATTRIBUTE_UNUSED,
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
  x6 = XEXP (x2, 1);
  operands[3] = x6;
  x7 = XEXP (x2, 2);
  operands[4] = x7;
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
      return 3721; /* *iorv8sf3_mask */

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
      return 3727; /* *iorv4sf3_mask */

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
      return 3733; /* *iorv4df3_mask */

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
      return 3739; /* *iorv2df3_mask */

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
      return 3751; /* *iorv16sf3_mask */

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
      return 3757; /* *iorv8df3_mask */

    case E_V16SImode:
      if (pattern486 (x2, 
E_V16SImode, 
E_HImode) != 0
          || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 18731 "../../gcc/config/i386/sse.md"
(TARGET_SSE && (64 == 64 || TARGET_AVX512VL)
   && ix86_binary_operator_ok (IOR, V16SImode, operands)) && 
#line 808 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512))))
        return -1;
      return 8004; /* *iorv16si3_mask */

    case E_V8SImode:
      if (pattern486 (x2, 
E_V8SImode, 
E_QImode) != 0
          || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 18731 "../../gcc/config/i386/sse.md"
(TARGET_SSE && (32 == 64 || TARGET_AVX512VL)
   && ix86_binary_operator_ok (IOR, V8SImode, operands)) && 
#line 808 "../../gcc/config/i386/sse.md"
(TARGET_AVX))))
        return -1;
      return 8010; /* *iorv8si3_mask */

    case E_V4SImode:
      if (pattern486 (x2, 
E_V4SImode, 
E_QImode) != 0
          || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 18731 "../../gcc/config/i386/sse.md"
(TARGET_SSE && (16 == 64 || TARGET_AVX512VL)
   && ix86_binary_operator_ok (IOR, V4SImode, operands))))
        return -1;
      return 8016; /* *iorv4si3_mask */

    case E_V8DImode:
      if (pattern486 (x2, 
E_V8DImode, 
E_QImode) != 0
          || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 18731 "../../gcc/config/i386/sse.md"
(TARGET_SSE && (64 == 64 || TARGET_AVX512VL)
   && ix86_binary_operator_ok (IOR, V8DImode, operands)) && 
#line 809 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512))))
        return -1;
      return 8022; /* *iorv8di3_mask */

    case E_V4DImode:
      if (pattern486 (x2, 
E_V4DImode, 
E_QImode) != 0
          || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 18731 "../../gcc/config/i386/sse.md"
(TARGET_SSE && (32 == 64 || TARGET_AVX512VL)
   && ix86_binary_operator_ok (IOR, V4DImode, operands)) && 
#line 809 "../../gcc/config/i386/sse.md"
(TARGET_AVX))))
        return -1;
      return 8028; /* *iorv4di3_mask */

    case E_V2DImode:
      if (pattern486 (x2, 
E_V2DImode, 
E_QImode) != 0
          || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 18731 "../../gcc/config/i386/sse.md"
(TARGET_SSE && (16 == 64 || TARGET_AVX512VL)
   && ix86_binary_operator_ok (IOR, V2DImode, operands))))
        return -1;
      return 8034; /* *iorv2di3_mask */

    default:
      return -1;
    }
}

 int
recog_214 (rtx x1 ATTRIBUTE_UNUSED,
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
#line 2912 "../../gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 441 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
        return -1;
      return 2875; /* avx_rcpv8sf2 */

    case E_V4SFmode:
      if (!register_operand (operands[0], E_V4SFmode)
          || GET_MODE (x2) != E_V4SFmode
          || !vector_operand (operands[1], E_V4SFmode)
          || !
#line 2912 "../../gcc/config/i386/sse.md"
(TARGET_SSE))
        return -1;
      return 2876; /* sse_rcpv4sf2 */

    case E_V32HFmode:
      if (!register_operand (operands[0], E_V32HFmode)
          || GET_MODE (x2) != E_V32HFmode
          || !nonimmediate_operand (operands[1], E_V32HFmode)
          || !(
#line 2966 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16) && 
#line 555 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 2879; /* avx512fp16_rcpv32hf2 */

    case E_V16HFmode:
      if (!register_operand (operands[0], E_V16HFmode)
          || GET_MODE (x2) != E_V16HFmode
          || !nonimmediate_operand (operands[1], E_V16HFmode)
          || !(
#line 2966 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16) && 
#line 555 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 2881; /* avx512fp16_rcpv16hf2 */

    case E_V8HFmode:
      if (!register_operand (operands[0], E_V8HFmode)
          || GET_MODE (x2) != E_V8HFmode
          || !nonimmediate_operand (operands[1], E_V8HFmode)
          || !(
#line 2966 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16) && 
#line 555 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 2883; /* avx512fp16_rcpv8hf2 */

    case E_V32BFmode:
      if (!register_operand (operands[0], E_V32BFmode)
          || GET_MODE (x2) != E_V32BFmode
          || !nonimmediate_operand (operands[1], E_V32BFmode)
          || !(
#line 32396 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256) && 
#line 565 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_512)))
        return -1;
      return 10686; /* avx10_2_rcppbf16_v32bf */

    case E_V16BFmode:
      if (!register_operand (operands[0], E_V16BFmode)
          || GET_MODE (x2) != E_V16BFmode
          || !nonimmediate_operand (operands[1], E_V16BFmode)
          || !
#line 32396 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
        return -1;
      return 10688; /* avx10_2_rcppbf16_v16bf */

    case E_V8BFmode:
      if (!register_operand (operands[0], E_V8BFmode)
          || GET_MODE (x2) != E_V8BFmode
          || !nonimmediate_operand (operands[1], E_V8BFmode)
          || !
#line 32396 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
        return -1;
      return 10690; /* avx10_2_rcppbf16_v8bf */

    default:
      return -1;
    }
}

 int
recog_221 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XVECEXP (x2, 0, 0);
  x4 = XEXP (x3, 0);
  x5 = XEXP (x4, 0);
  x6 = XEXP (x5, 0);
  operands[1] = x6;
  switch (pattern1131 (x2))
    {
    case 0:
      if (pattern1593 (x2, 
E_V32HFmode, 
E_SImode) != 0
          || !(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 6138 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && (64 == 64 || TARGET_AVX512VL) && ((V32HFmode == V16SFmode
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
#line 5914 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_EVEX512))))
        return -1;
      return 3940; /* fma_fnmadd_v32hf_maskz_1_round */

    case 1:
      if (pattern1593 (x2, 
E_V16HFmode, 
E_HImode) != 0
          || !(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 6138 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && (32 == 64 || TARGET_AVX512VL) && ((V16HFmode == V16SFmode
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
#line 5915 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL))))
        return -1;
      return 3944; /* fma_fnmadd_v16hf_maskz_1_round */

    case 2:
      if (pattern1593 (x2, 
E_V16SFmode, 
E_HImode) != 0
          || !(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 6138 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && (64 == 64 || TARGET_AVX512VL) && ((V16SFmode == V16SFmode
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
#line 5918 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512))))
        return -1;
      return 3952; /* fma_fnmadd_v16sf_maskz_1_round */

    case 3:
      if (pattern1593 (x2, 
E_V8SFmode, 
E_QImode) != 0
          || !(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 6138 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && (32 == 64 || TARGET_AVX512VL) && ((V8SFmode == V16SFmode
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
#line 5919 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
        return -1;
      return 3956; /* fma_fnmadd_v8sf_maskz_1_round */

    case 4:
      if (pattern1593 (x2, 
E_V8DFmode, 
E_QImode) != 0
          || !(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 6138 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && (64 == 64 || TARGET_AVX512VL) && ((V8DFmode == V16SFmode
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
#line 5920 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512))))
        return -1;
      return 3963; /* fma_fnmadd_v8df_maskz_1_round */

    case 5:
      if (pattern1593 (x2, 
E_V4DFmode, 
E_QImode) != 0
          || !(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 6138 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && (32 == 64 || TARGET_AVX512VL) && ((V4DFmode == V16SFmode
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
#line 5921 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
        return -1;
      return 3967; /* fma_fnmadd_v4df_maskz_1_round */

    case 6:
      if (pattern1594 (x2, 
E_V32HFmode, 
E_SImode) != 0)
        return -1;
      if (nonimmediate_operand (operands[1], E_V32HFmode)
          && register_operand (operands[3], E_V32HFmode))
        {
          x7 = XEXP (x3, 1);
          if (rtx_equal_p (x7, operands[1])
              && (
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 6181 "../../gcc/config/i386/sse.md"
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
(TARGET_AVX512FP16 && TARGET_EVEX512))))
            return 3971; /* avx512bw_fnmadd_v32hf_mask_round */
        }
      if (!register_operand (operands[1], E_V32HFmode)
          || !nonimmediate_operand (operands[3], E_V32HFmode))
        return -1;
      x7 = XEXP (x3, 1);
      if (!rtx_equal_p (x7, operands[3])
          || !(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 6199 "../../gcc/config/i386/sse.md"
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
(TARGET_AVX512FP16 && TARGET_EVEX512))))
        return -1;
      return 3986; /* avx512bw_fnmadd_v32hf_mask3_round */

    case 7:
      if (pattern1594 (x2, 
E_V16HFmode, 
E_HImode) != 0)
        return -1;
      if (nonimmediate_operand (operands[1], E_V16HFmode)
          && register_operand (operands[3], E_V16HFmode))
        {
          x7 = XEXP (x3, 1);
          if (rtx_equal_p (x7, operands[1])
              && (
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 6181 "../../gcc/config/i386/sse.md"
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
(TARGET_AVX512FP16 && TARGET_AVX512VL))))
            return 3973; /* avx512vl_fnmadd_v16hf_mask_round */
        }
      if (!register_operand (operands[1], E_V16HFmode)
          || !nonimmediate_operand (operands[3], E_V16HFmode))
        return -1;
      x7 = XEXP (x3, 1);
      if (!rtx_equal_p (x7, operands[3])
          || !(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 6199 "../../gcc/config/i386/sse.md"
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
(TARGET_AVX512FP16 && TARGET_AVX512VL))))
        return -1;
      return 3988; /* avx512vl_fnmadd_v16hf_mask3_round */

    case 8:
      if (pattern1594 (x2, 
E_V16SFmode, 
E_HImode) != 0)
        return -1;
      if (nonimmediate_operand (operands[1], E_V16SFmode)
          && register_operand (operands[3], E_V16SFmode))
        {
          x7 = XEXP (x3, 1);
          if (rtx_equal_p (x7, operands[1])
              && (
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 6181 "../../gcc/config/i386/sse.md"
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
(TARGET_EVEX512))))
            return 3976; /* avx512f_fnmadd_v16sf_mask_round */
        }
      if (!register_operand (operands[1], E_V16SFmode)
          || !nonimmediate_operand (operands[3], E_V16SFmode))
        return -1;
      x7 = XEXP (x3, 1);
      if (!rtx_equal_p (x7, operands[3])
          || !(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 6199 "../../gcc/config/i386/sse.md"
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
(TARGET_EVEX512))))
        return -1;
      return 3991; /* avx512f_fnmadd_v16sf_mask3_round */

    case 9:
      if (pattern1594 (x2, 
E_V8SFmode, 
E_QImode) != 0)
        return -1;
      if (nonimmediate_operand (operands[1], E_V8SFmode)
          && register_operand (operands[3], E_V8SFmode))
        {
          x7 = XEXP (x3, 1);
          if (rtx_equal_p (x7, operands[1])
              && (
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 6181 "../../gcc/config/i386/sse.md"
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
(TARGET_AVX512VL))))
            return 3978; /* avx512vl_fnmadd_v8sf_mask_round */
        }
      if (!register_operand (operands[1], E_V8SFmode)
          || !nonimmediate_operand (operands[3], E_V8SFmode))
        return -1;
      x7 = XEXP (x3, 1);
      if (!rtx_equal_p (x7, operands[3])
          || !(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 6199 "../../gcc/config/i386/sse.md"
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
(TARGET_AVX512VL))))
        return -1;
      return 3993; /* avx512vl_fnmadd_v8sf_mask3_round */

    case 10:
      if (pattern1594 (x2, 
E_V8DFmode, 
E_QImode) != 0)
        return -1;
      if (nonimmediate_operand (operands[1], E_V8DFmode)
          && register_operand (operands[3], E_V8DFmode))
        {
          x7 = XEXP (x3, 1);
          if (rtx_equal_p (x7, operands[1])
              && (
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 6181 "../../gcc/config/i386/sse.md"
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
(TARGET_EVEX512))))
            return 3981; /* avx512f_fnmadd_v8df_mask_round */
        }
      if (!register_operand (operands[1], E_V8DFmode)
          || !nonimmediate_operand (operands[3], E_V8DFmode))
        return -1;
      x7 = XEXP (x3, 1);
      if (!rtx_equal_p (x7, operands[3])
          || !(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 6199 "../../gcc/config/i386/sse.md"
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
(TARGET_EVEX512))))
        return -1;
      return 3996; /* avx512f_fnmadd_v8df_mask3_round */

    case 11:
      if (pattern1594 (x2, 
E_V4DFmode, 
E_QImode) != 0)
        return -1;
      if (nonimmediate_operand (operands[1], E_V4DFmode)
          && register_operand (operands[3], E_V4DFmode))
        {
          x7 = XEXP (x3, 1);
          if (rtx_equal_p (x7, operands[1])
              && (
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 6181 "../../gcc/config/i386/sse.md"
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
(TARGET_AVX512VL))))
            return 3983; /* avx512vl_fnmadd_v4df_mask_round */
        }
      if (!register_operand (operands[1], E_V4DFmode)
          || !nonimmediate_operand (operands[3], E_V4DFmode))
        return -1;
      x7 = XEXP (x3, 1);
      if (!rtx_equal_p (x7, operands[3])
          || !(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 6199 "../../gcc/config/i386/sse.md"
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
(TARGET_AVX512VL))))
        return -1;
      return 3998; /* avx512vl_fnmadd_v4df_mask3_round */

    case 12:
      if (pattern1647 (x2, 
E_V8HFmode) != 0
          || !(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 6619 "../../gcc/config/i386/sse.md"
(TARGET_FMA || TARGET_AVX512F) && 
#line 479 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16))))
        return -1;
      return 4230; /* *fmai_fnmadd_v8hf_round */

    case 13:
      if (pattern1647 (x2, 
E_V4SFmode) != 0
          || !(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 6619 "../../gcc/config/i386/sse.md"
(TARGET_FMA || TARGET_AVX512F)))
        return -1;
      return 4232; /* *fmai_fnmadd_v4sf_round */

    case 14:
      if (pattern1647 (x2, 
E_V2DFmode) != 0
          || !(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 6619 "../../gcc/config/i386/sse.md"
(TARGET_FMA || TARGET_AVX512F) && 
#line 480 "../../gcc/config/i386/sse.md"
(TARGET_SSE2))))
        return -1;
      return 4234; /* *fmai_fnmadd_v2df_round */

    case 15:
      x7 = XEXP (x3, 1);
      switch (GET_CODE (x7))
        {
        case CONST_INT:
        case CONST_DOUBLE:
        case CONST_VECTOR:
          operands[4] = x7;
          x8 = XEXP (x3, 2);
          operands[5] = x8;
          x9 = XVECEXP (x2, 0, 1);
          operands[6] = x9;
          switch (GET_MODE (operands[0]))
            {
            case E_V4SFmode:
              if (pattern1595 (x2, 
E_V4SFmode) != 0
                  || !(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 6213 "../../gcc/config/i386/sse.md"
(TARGET_FMA || TARGET_FMA4)))
                return -1;
              return 4007; /* *fma_fnmsub_v4sf */

            case E_V2DFmode:
              if (pattern1595 (x2, 
E_V2DFmode) != 0
                  || !(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 6213 "../../gcc/config/i386/sse.md"
(TARGET_FMA || TARGET_FMA4)))
                return -1;
              return 4011; /* *fma_fnmsub_v2df */

            case E_V8SFmode:
              if (pattern1596 (x2, 
E_V8SFmode) != 0)
                return -1;
              if (nonimmediate_operand (operands[1], E_V8SFmode)
                  && nonimmediate_operand (operands[2], E_V8SFmode)
                  && nonimmediate_operand (operands[3], E_V8SFmode)
                  && (
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 6213 "../../gcc/config/i386/sse.md"
(TARGET_FMA || TARGET_FMA4)))
                return 4015; /* *fma_fnmsub_v8sf */
              if (!register_operand (operands[1], E_V8SFmode)
                  || !register_operand (operands[2], E_V8SFmode)
                  || !register_operand (operands[3], E_V8SFmode)
                  || !(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 6246 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && (32 == 64 || TARGET_AVX512VL) && ((V8SFmode == V16SFmode
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
#line 5919 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
                return -1;
              return 4039; /* fma_fnmsub_v8sf_maskz_1_round */

            case E_V4DFmode:
              if (pattern1596 (x2, 
E_V4DFmode) != 0)
                return -1;
              if (nonimmediate_operand (operands[1], E_V4DFmode)
                  && nonimmediate_operand (operands[2], E_V4DFmode)
                  && nonimmediate_operand (operands[3], E_V4DFmode)
                  && (
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 6213 "../../gcc/config/i386/sse.md"
(TARGET_FMA || TARGET_FMA4)))
                return 4019; /* *fma_fnmsub_v4df */
              if (!register_operand (operands[1], E_V4DFmode)
                  || !register_operand (operands[2], E_V4DFmode)
                  || !register_operand (operands[3], E_V4DFmode)
                  || !(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 6246 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && (32 == 64 || TARGET_AVX512VL) && ((V4DFmode == V16SFmode
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
#line 5921 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
                return -1;
              return 4050; /* fma_fnmsub_v4df_maskz_1_round */

            case E_V32HFmode:
              if (pattern1597 (x2, 
E_SImode, 
E_V32HFmode) != 0
                  || !(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 6246 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && (64 == 64 || TARGET_AVX512VL) && ((V32HFmode == V16SFmode
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
#line 5914 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_EVEX512))))
                return -1;
              return 4023; /* fma_fnmsub_v32hf_maskz_1_round */

            case E_V16HFmode:
              if (pattern1597 (x2, 
E_HImode, 
E_V16HFmode) != 0
                  || !(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 6246 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && (32 == 64 || TARGET_AVX512VL) && ((V16HFmode == V16SFmode
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
#line 5915 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL))))
                return -1;
              return 4027; /* fma_fnmsub_v16hf_maskz_1_round */

            case E_V16SFmode:
              if (pattern1597 (x2, 
E_HImode, 
E_V16SFmode) != 0
                  || !(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 6246 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && (64 == 64 || TARGET_AVX512VL) && ((V16SFmode == V16SFmode
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
#line 5918 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512))))
                return -1;
              return 4035; /* fma_fnmsub_v16sf_maskz_1_round */

            case E_V8DFmode:
              if (pattern1597 (x2, 
E_QImode, 
E_V8DFmode) != 0
                  || !(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 6246 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && (64 == 64 || TARGET_AVX512VL) && ((V8DFmode == V16SFmode
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
#line 5920 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512))))
                return -1;
              return 4046; /* fma_fnmsub_v8df_maskz_1_round */

            default:
              return -1;
            }

        case REG:
        case SUBREG:
        case MEM:
          switch (pattern1130 (x2))
            {
            case 0:
              if (pattern1598 (x2, 
E_V32HFmode, 
E_SImode) != 0)
                return -1;
              if (nonimmediate_operand (operands[1], E_V32HFmode)
                  && register_operand (operands[3], E_V32HFmode)
                  && rtx_equal_p (x7, operands[1])
                  && (
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 6291 "../../gcc/config/i386/sse.md"
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
(TARGET_AVX512FP16 && TARGET_EVEX512))))
                return 4054; /* avx512bw_fnmsub_v32hf_mask_round */
              if (!register_operand (operands[1], E_V32HFmode)
                  || !nonimmediate_operand (operands[3], E_V32HFmode)
                  || !rtx_equal_p (x7, operands[3])
                  || !(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 6310 "../../gcc/config/i386/sse.md"
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
(TARGET_AVX512FP16 && TARGET_EVEX512))))
                return -1;
              return 4069; /* avx512bw_fnmsub_v32hf_mask3_round */

            case 1:
              if (pattern1598 (x2, 
E_V16HFmode, 
E_HImode) != 0)
                return -1;
              if (nonimmediate_operand (operands[1], E_V16HFmode)
                  && register_operand (operands[3], E_V16HFmode)
                  && rtx_equal_p (x7, operands[1])
                  && (
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 6291 "../../gcc/config/i386/sse.md"
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
(TARGET_AVX512FP16 && TARGET_AVX512VL))))
                return 4056; /* avx512vl_fnmsub_v16hf_mask_round */
              if (!register_operand (operands[1], E_V16HFmode)
                  || !nonimmediate_operand (operands[3], E_V16HFmode)
                  || !rtx_equal_p (x7, operands[3])
                  || !(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 6310 "../../gcc/config/i386/sse.md"
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
(TARGET_AVX512FP16 && TARGET_AVX512VL))))
                return -1;
              return 4071; /* avx512vl_fnmsub_v16hf_mask3_round */

            case 2:
              if (pattern1598 (x2, 
E_V16SFmode, 
E_HImode) != 0)
                return -1;
              if (nonimmediate_operand (operands[1], E_V16SFmode)
                  && register_operand (operands[3], E_V16SFmode)
                  && rtx_equal_p (x7, operands[1])
                  && (
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 6291 "../../gcc/config/i386/sse.md"
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
(TARGET_EVEX512))))
                return 4059; /* avx512f_fnmsub_v16sf_mask_round */
              if (!register_operand (operands[1], E_V16SFmode)
                  || !nonimmediate_operand (operands[3], E_V16SFmode)
                  || !rtx_equal_p (x7, operands[3])
                  || !(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 6310 "../../gcc/config/i386/sse.md"
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
(TARGET_EVEX512))))
                return -1;
              return 4074; /* avx512f_fnmsub_v16sf_mask3_round */

            case 3:
              if (pattern1598 (x2, 
E_V8SFmode, 
E_QImode) != 0)
                return -1;
              if (nonimmediate_operand (operands[1], E_V8SFmode)
                  && register_operand (operands[3], E_V8SFmode)
                  && rtx_equal_p (x7, operands[1])
                  && (
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 6291 "../../gcc/config/i386/sse.md"
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
(TARGET_AVX512VL))))
                return 4061; /* avx512vl_fnmsub_v8sf_mask_round */
              if (!register_operand (operands[1], E_V8SFmode)
                  || !nonimmediate_operand (operands[3], E_V8SFmode)
                  || !rtx_equal_p (x7, operands[3])
                  || !(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 6310 "../../gcc/config/i386/sse.md"
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
(TARGET_AVX512VL))))
                return -1;
              return 4076; /* avx512vl_fnmsub_v8sf_mask3_round */

            case 4:
              if (pattern1598 (x2, 
E_V8DFmode, 
E_QImode) != 0)
                return -1;
              if (nonimmediate_operand (operands[1], E_V8DFmode)
                  && register_operand (operands[3], E_V8DFmode)
                  && rtx_equal_p (x7, operands[1])
                  && (
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 6291 "../../gcc/config/i386/sse.md"
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
(TARGET_EVEX512))))
                return 4064; /* avx512f_fnmsub_v8df_mask_round */
              if (!register_operand (operands[1], E_V8DFmode)
                  || !nonimmediate_operand (operands[3], E_V8DFmode)
                  || !rtx_equal_p (x7, operands[3])
                  || !(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 6310 "../../gcc/config/i386/sse.md"
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
(TARGET_EVEX512))))
                return -1;
              return 4079; /* avx512f_fnmsub_v8df_mask3_round */

            case 5:
              if (pattern1598 (x2, 
E_V4DFmode, 
E_QImode) != 0)
                return -1;
              if (nonimmediate_operand (operands[1], E_V4DFmode)
                  && register_operand (operands[3], E_V4DFmode)
                  && rtx_equal_p (x7, operands[1])
                  && (
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 6291 "../../gcc/config/i386/sse.md"
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
(TARGET_AVX512VL))))
                return 4066; /* avx512vl_fnmsub_v4df_mask_round */
              if (!register_operand (operands[1], E_V4DFmode)
                  || !nonimmediate_operand (operands[3], E_V4DFmode)
                  || !rtx_equal_p (x7, operands[3])
                  || !(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 6310 "../../gcc/config/i386/sse.md"
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
(TARGET_AVX512VL))))
                return -1;
              return 4081; /* avx512vl_fnmsub_v4df_mask3_round */

            case 6:
              if (pattern1648 (x2, 
E_V8HFmode) != 0
                  || !(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 6638 "../../gcc/config/i386/sse.md"
(TARGET_FMA || TARGET_AVX512F) && 
#line 479 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16))))
                return -1;
              return 4236; /* *fmai_fnmsub_v8hf_round */

            case 7:
              if (pattern1648 (x2, 
E_V4SFmode) != 0
                  || !(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 6638 "../../gcc/config/i386/sse.md"
(TARGET_FMA || TARGET_AVX512F)))
                return -1;
              return 4238; /* *fmai_fnmsub_v4sf_round */

            case 8:
              if (pattern1648 (x2, 
E_V2DFmode) != 0
                  || !(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 6638 "../../gcc/config/i386/sse.md"
(TARGET_FMA || TARGET_AVX512F) && 
#line 480 "../../gcc/config/i386/sse.md"
(TARGET_SSE2))))
                return -1;
              return 4240; /* *fmai_fnmsub_v2df_round */

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
recog_234 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  if (GET_CODE (x2) != REG
      || REGNO (x2) != 17)
    return -1;
  x3 = XEXP (x1, 1);
  x4 = XVECEXP (x3, 0, 0);
  operands[0] = x4;
  x5 = XVECEXP (x3, 0, 1);
  operands[1] = x5;
  switch (GET_MODE (operands[0]))
    {
    case E_V16QImode:
      if (!register_operand (operands[0], E_V16QImode)
          || !vector_operand (operands[1], E_V16QImode)
          || !
#line 25315 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1 && ix86_match_ptest_ccmode (insn)))
        return -1;
      return 8935; /* *sse4_1_ptestv16qi */

    case E_V8HImode:
      if (!register_operand (operands[0], E_V8HImode)
          || !vector_operand (operands[1], E_V8HImode)
          || !
#line 25315 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1 && ix86_match_ptest_ccmode (insn)))
        return -1;
      return 8936; /* *sse4_1_ptestv8hi */

    case E_V4SImode:
      if (!register_operand (operands[0], E_V4SImode)
          || !vector_operand (operands[1], E_V4SImode)
          || !
#line 25315 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1 && ix86_match_ptest_ccmode (insn)))
        return -1;
      return 8937; /* *sse4_1_ptestv4si */

    case E_V2DImode:
      if (!register_operand (operands[0], E_V2DImode)
          || !vector_operand (operands[1], E_V2DImode)
          || !
#line 25315 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1 && ix86_match_ptest_ccmode (insn)))
        return -1;
      return 8938; /* *sse4_1_ptestv2di */

    case E_V1TImode:
      if (!register_operand (operands[0], E_V1TImode)
          || !vector_operand (operands[1], E_V1TImode)
          || !
#line 25315 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1 && ix86_match_ptest_ccmode (insn)))
        return -1;
      return 8939; /* *sse4_1_ptestv1ti */

    case E_V4SFmode:
      if (!register_operand (operands[0], E_V4SFmode)
          || !vector_operand (operands[1], E_V4SFmode)
          || !
#line 25315 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1 && ix86_match_ptest_ccmode (insn)))
        return -1;
      return 8940; /* *sse4_1_ptestv4sf */

    case E_V2DFmode:
      if (!register_operand (operands[0], E_V2DFmode)
          || !vector_operand (operands[1], E_V2DFmode)
          || !
#line 25315 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1 && ix86_match_ptest_ccmode (insn)))
        return -1;
      return 8941; /* *sse4_1_ptestv2df */

    case E_V32QImode:
      if (!register_operand (operands[0], E_V32QImode)
          || !vector_operand (operands[1], E_V32QImode)
          || !(
#line 25315 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1 && ix86_match_ptest_ccmode (insn)) && 
#line 606 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
        return -1;
      return 8942; /* *avx_ptestv32qi */

    case E_V16HImode:
      if (!register_operand (operands[0], E_V16HImode)
          || !vector_operand (operands[1], E_V16HImode)
          || !(
#line 25315 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1 && ix86_match_ptest_ccmode (insn)) && 
#line 606 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
        return -1;
      return 8943; /* *avx_ptestv16hi */

    case E_V8SImode:
      if (!register_operand (operands[0], E_V8SImode)
          || !vector_operand (operands[1], E_V8SImode)
          || !(
#line 25315 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1 && ix86_match_ptest_ccmode (insn)) && 
#line 607 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
        return -1;
      return 8944; /* *avx_ptestv8si */

    case E_V4DImode:
      if (!register_operand (operands[0], E_V4DImode)
          || !vector_operand (operands[1], E_V4DImode)
          || !(
#line 25315 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1 && ix86_match_ptest_ccmode (insn)) && 
#line 607 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
        return -1;
      return 8945; /* *avx_ptestv4di */

    case E_V2TImode:
      if (!register_operand (operands[0], E_V2TImode)
          || !vector_operand (operands[1], E_V2TImode)
          || !(
#line 25315 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1 && ix86_match_ptest_ccmode (insn)) && 
#line 607 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
        return -1;
      return 8946; /* *avx_ptestv2ti */

    case E_V8SFmode:
      if (!register_operand (operands[0], E_V8SFmode)
          || !vector_operand (operands[1], E_V8SFmode)
          || !(
#line 25315 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1 && ix86_match_ptest_ccmode (insn)) && 
#line 608 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
        return -1;
      return 8947; /* *avx_ptestv8sf */

    case E_V4DFmode:
      if (!register_operand (operands[0], E_V4DFmode)
          || !vector_operand (operands[1], E_V4DFmode)
          || !(
#line 25315 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1 && ix86_match_ptest_ccmode (insn)) && 
#line 608 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
        return -1;
      return 8948; /* *avx_ptestv4df */

    default:
      return -1;
    }
}

 int
recog_237 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
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
  if (!const_0_to_15_operand (operands[2], E_SImode))
    return -1;
  switch (GET_MODE (operands[0]))
    {
    case E_V32HFmode:
      if (!register_operand (operands[0], E_V32HFmode)
          || GET_MODE (x3) != E_V32HFmode
          || !nonimmediate_operand (operands[1], E_V32HFmode)
          || !(
#line 29882 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 525 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_EVEX512)))
        return -1;
      return 10008; /* avx512bw_getmantv32hf */

    case E_V16HFmode:
      if (!register_operand (operands[0], E_V16HFmode)
          || GET_MODE (x3) != E_V16HFmode
          || !nonimmediate_operand (operands[1], E_V16HFmode)
          || !(
#line 29882 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 526 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL)))
        return -1;
      return 10012; /* avx512vl_getmantv16hf */

    case E_V8HFmode:
      if (!register_operand (operands[0], E_V8HFmode)
          || GET_MODE (x3) != E_V8HFmode
          || !nonimmediate_operand (operands[1], E_V8HFmode)
          || !(
#line 29882 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 527 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL)))
        return -1;
      return 10016; /* avx512fp16_getmantv8hf */

    case E_V16SFmode:
      if (!register_operand (operands[0], E_V16SFmode)
          || GET_MODE (x3) != E_V16SFmode
          || !nonimmediate_operand (operands[1], E_V16SFmode)
          || !(
#line 29882 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 528 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 10018; /* avx512f_getmantv16sf */

    case E_V8SFmode:
      if (!register_operand (operands[0], E_V8SFmode)
          || GET_MODE (x3) != E_V8SFmode
          || !nonimmediate_operand (operands[1], E_V8SFmode)
          || !(
#line 29882 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 528 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 10022; /* avx512vl_getmantv8sf */

    case E_V4SFmode:
      if (!register_operand (operands[0], E_V4SFmode)
          || GET_MODE (x3) != E_V4SFmode
          || !nonimmediate_operand (operands[1], E_V4SFmode)
          || !(
#line 29882 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 528 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 10026; /* avx512vl_getmantv4sf */

    case E_V8DFmode:
      if (!register_operand (operands[0], E_V8DFmode)
          || GET_MODE (x3) != E_V8DFmode
          || !nonimmediate_operand (operands[1], E_V8DFmode)
          || !(
#line 29882 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 529 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 10028; /* avx512f_getmantv8df */

    case E_V4DFmode:
      if (!register_operand (operands[0], E_V4DFmode)
          || GET_MODE (x3) != E_V4DFmode
          || !nonimmediate_operand (operands[1], E_V4DFmode)
          || !(
#line 29882 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 529 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 10032; /* avx512vl_getmantv4df */

    case E_V2DFmode:
      if (!register_operand (operands[0], E_V2DFmode)
          || GET_MODE (x3) != E_V2DFmode
          || !nonimmediate_operand (operands[1], E_V2DFmode)
          || !(
#line 29882 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 529 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 10036; /* avx512vl_getmantv2df */

    default:
      return -1;
    }
}

 int
recog_239 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  if (GET_CODE (x2) != REG
      || REGNO (x2) != 17)
    return -1;
  x3 = XEXP (x1, 1);
  x4 = XVECEXP (x3, 0, 0);
  operands[0] = x4;
  x5 = XVECEXP (x3, 0, 1);
  operands[1] = x5;
  switch (GET_MODE (operands[0]))
    {
    case E_QImode:
      if (register_operand (operands[0], E_QImode)
          && register_operand (operands[1], E_QImode)
          && (
#line 2347 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 2070 "../../gcc/config/i386/sse.md"
(TARGET_AVX512DQ)))
        return 2608; /* *kortestqi */
      break;

    case E_HImode:
      if (register_operand (operands[0], E_HImode)
          && register_operand (operands[1], E_HImode)
          && 
#line 2347 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F))
        return 2609; /* *kortesthi */
      break;

    case E_SImode:
      if (register_operand (operands[0], E_SImode)
          && register_operand (operands[1], E_SImode)
          && (
#line 2347 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 2070 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW)))
        return 2610; /* *kortestsi */
      break;

    case E_DImode:
      if (register_operand (operands[0], E_DImode)
          && register_operand (operands[1], E_DImode)
          && (
#line 2347 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 2070 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW)))
        return 2611; /* *kortestdi */
      break;

    default:
      break;
    }
  switch (GET_MODE (x2))
    {
    case E_CCCmode:
      if (GET_MODE (x3) != E_CCCmode)
        return -1;
      switch (pattern965 ())
        {
        case 0:
          if (!(
#line 2359 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 2070 "../../gcc/config/i386/sse.md"
(TARGET_AVX512DQ)))
            return -1;
          return 2612; /* kortestqi_ccc */

        case 1:
          if (!
#line 2359 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F))
            return -1;
          return 2613; /* kortesthi_ccc */

        case 2:
          if (!(
#line 2359 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 2070 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW)))
            return -1;
          return 2614; /* kortestsi_ccc */

        case 3:
          if (!(
#line 2359 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 2070 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW)))
            return -1;
          return 2615; /* kortestdi_ccc */

        default:
          return -1;
        }

    case E_CCZmode:
      if (GET_MODE (x3) != E_CCZmode)
        return -1;
      switch (pattern965 ())
        {
        case 0:
          if (!(
#line 2367 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 2070 "../../gcc/config/i386/sse.md"
(TARGET_AVX512DQ)))
            return -1;
          return 2616; /* kortestqi_ccz */

        case 1:
          if (!
#line 2367 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F))
            return -1;
          return 2617; /* kortesthi_ccz */

        case 2:
          if (!(
#line 2367 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 2070 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW)))
            return -1;
          return 2618; /* kortestsi_ccz */

        case 3:
          if (!(
#line 2367 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 2070 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW)))
            return -1;
          return 2619; /* kortestdi_ccz */

        default:
          return -1;
        }

    default:
      return -1;
    }
}

 int
recog_242 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
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
  if (!const_0_to_255_operand (operands[2], E_SImode))
    return -1;
  switch (GET_MODE (operands[0]))
    {
    case E_V8HImode:
      if (GET_MODE (x3) != E_V8HImode
          || !register_operand (operands[1], E_V8SFmode))
        return -1;
      if (register_operand (operands[0], E_V8HImode)
          && 
#line 29167 "../../gcc/config/i386/sse.md"
(TARGET_F16C || TARGET_AVX512VL))
        return 9658; /* vcvtps2ph256 */
      if (!memory_operand (operands[0], E_V8HImode)
          || !
#line 29179 "../../gcc/config/i386/sse.md"
(TARGET_F16C || TARGET_AVX512VL))
        return -1;
      return 9660; /* *vcvtps2ph256 */

    case E_V16HImode:
      if (GET_MODE (x3) != E_V16HImode
          || !register_operand (operands[1], E_V16SFmode))
        return -1;
      if (register_operand (operands[0], E_V16HImode)
          && 
#line 29218 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512))
        return 9662; /* *avx512f_vcvtps2ph512 */
      if (!memory_operand (operands[0], E_V16HImode)
          || !
#line 29230 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512))
        return -1;
      return 9666; /* *avx512f_vcvtps2ph512 */

    default:
      return -1;
    }
}

 int
recog_245 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10;
  int res ATTRIBUTE_UNUSED;
  if (pnum_clobbers == NULL)
    return -1;
  x2 = XEXP (x1, 1);
  x3 = XVECEXP (x2, 0, 2);
  if (GET_CODE (x3) != MEM)
    return -1;
  x4 = XEXP (x3, 0);
  if (GET_CODE (x4) != UNSPEC
      || XVECLEN (x4, 0) != 3
      || XINT (x4, 1) != 154)
    return -1;
  x5 = XEXP (x1, 0);
  operands[0] = x5;
  x6 = XVECEXP (x4, 0, 2);
  if (!const1248_operand (x6, E_SImode))
    return -1;
  x7 = XVECEXP (x2, 0, 0);
  switch (GET_CODE (x7))
    {
    case REG:
    case SUBREG:
      operands[1] = x7;
      x8 = XVECEXP (x2, 0, 1);
      operands[7] = x8;
      operands[6] = x3;
      x9 = XVECEXP (x4, 0, 0);
      operands[4] = x9;
      x10 = XVECEXP (x4, 0, 1);
      operands[3] = x10;
      operands[5] = x6;
      switch (GET_MODE (operands[0]))
        {
        case E_V16SImode:
          if (!register_operand (operands[0], E_V16SImode)
              || GET_MODE (x2) != E_V16SImode
              || !vsib_mem_operator (operands[6], E_SImode))
            return -1;
          switch (GET_MODE (operands[1]))
            {
            case E_V16SImode:
              if (!register_operand (operands[1], E_V16SImode)
                  || !register_operand (operands[7], E_HImode))
                return -1;
              switch (pattern1782 (x4, 
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
                  *pnum_clobbers = 1;
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
                  *pnum_clobbers = 1;
                  return 9752; /* *avx512f_gathersiv16si */

                default:
                  return -1;
                }

            case E_V8SImode:
              if (!register_operand (operands[1], E_V8SImode)
                  || !register_operand (operands[7], E_QImode))
                return -1;
              switch (pattern1782 (x4, 
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
                  *pnum_clobbers = 1;
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
                  *pnum_clobbers = 1;
                  return 9800; /* *avx512f_gatherdiv16si */

                default:
                  return -1;
                }

            default:
              return -1;
            }

        case E_V16SFmode:
          if (!register_operand (operands[0], E_V16SFmode)
              || GET_MODE (x2) != E_V16SFmode
              || !vsib_mem_operator (operands[6], E_SFmode))
            return -1;
          switch (GET_MODE (operands[1]))
            {
            case E_V16SFmode:
              if (!register_operand (operands[1], E_V16SFmode)
                  || !register_operand (operands[7], E_HImode))
                return -1;
              switch (pattern1782 (x4, 
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
                  *pnum_clobbers = 1;
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
                  *pnum_clobbers = 1;
                  return 9753; /* *avx512f_gathersiv16sf */

                default:
                  return -1;
                }

            case E_V8SFmode:
              if (!register_operand (operands[1], E_V8SFmode)
                  || !register_operand (operands[7], E_QImode))
                return -1;
              switch (pattern1782 (x4, 
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
                  *pnum_clobbers = 1;
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
                  *pnum_clobbers = 1;
                  return 9801; /* *avx512f_gatherdiv16sf */

                default:
                  return -1;
                }

            default:
              return -1;
            }

        case E_V8DImode:
          switch (pattern1650 (x2, 
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
              *pnum_clobbers = 1;
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
              *pnum_clobbers = 1;
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
              *pnum_clobbers = 1;
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
              *pnum_clobbers = 1;
              return 9802; /* *avx512f_gatherdiv8di */

            default:
              return -1;
            }

        case E_V8DFmode:
          switch (pattern1650 (x2, 
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
              *pnum_clobbers = 1;
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
              *pnum_clobbers = 1;
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
              *pnum_clobbers = 1;
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
              *pnum_clobbers = 1;
              return 9803; /* *avx512f_gatherdiv8df */

            default:
              return -1;
            }

        case E_V8SImode:
          if (pattern1651 (x2, 
E_SImode, 
E_V8SImode) != 0)
            return -1;
          switch (GET_MODE (operands[1]))
            {
            case E_V8SImode:
              if (!register_operand (operands[1], E_V8SImode))
                return -1;
              switch (pattern1782 (x4, 
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
                  *pnum_clobbers = 1;
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
                  *pnum_clobbers = 1;
                  return 9756; /* *avx512f_gathersiv8si */

                default:
                  return -1;
                }

            case E_V4SImode:
              if (!register_operand (operands[1], E_V4SImode))
                return -1;
              switch (pattern1782 (x4, 
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
                  *pnum_clobbers = 1;
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
                  *pnum_clobbers = 1;
                  return 9804; /* *avx512f_gatherdiv8si */

                default:
                  return -1;
                }

            default:
              return -1;
            }

        case E_V8SFmode:
          if (pattern1651 (x2, 
E_SFmode, 
E_V8SFmode) != 0)
            return -1;
          switch (GET_MODE (operands[1]))
            {
            case E_V8SFmode:
              if (!register_operand (operands[1], E_V8SFmode))
                return -1;
              switch (pattern1782 (x4, 
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
                  *pnum_clobbers = 1;
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
                  *pnum_clobbers = 1;
                  return 9757; /* *avx512f_gathersiv8sf */

                default:
                  return -1;
                }

            case E_V4SFmode:
              if (!register_operand (operands[1], E_V4SFmode))
                return -1;
              switch (pattern1782 (x4, 
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
                  *pnum_clobbers = 1;
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
                  *pnum_clobbers = 1;
                  return 9805; /* *avx512f_gatherdiv8sf */

                default:
                  return -1;
                }

            default:
              return -1;
            }

        case E_V4DImode:
          switch (pattern1653 (x2, 
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
              *pnum_clobbers = 1;
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
              *pnum_clobbers = 1;
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
              *pnum_clobbers = 1;
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
              *pnum_clobbers = 1;
              return 9806; /* *avx512f_gatherdiv4di */

            default:
              return -1;
            }

        case E_V4DFmode:
          switch (pattern1653 (x2, 
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
              *pnum_clobbers = 1;
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
              *pnum_clobbers = 1;
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
              *pnum_clobbers = 1;
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
              *pnum_clobbers = 1;
              return 9807; /* *avx512f_gatherdiv4df */

            default:
              return -1;
            }

        case E_V4SImode:
          switch (pattern1655 (x2, 
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
              *pnum_clobbers = 1;
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
              *pnum_clobbers = 1;
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
              *pnum_clobbers = 1;
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
              *pnum_clobbers = 1;
              return 9808; /* *avx512f_gatherdiv4si */

            default:
              return -1;
            }

        case E_V4SFmode:
          switch (pattern1655 (x2, 
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
              *pnum_clobbers = 1;
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
              *pnum_clobbers = 1;
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
              *pnum_clobbers = 1;
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
              *pnum_clobbers = 1;
              return 9809; /* *avx512f_gatherdiv4sf */

            default:
              return -1;
            }

        case E_V2DImode:
          switch (pattern1655 (x2, 
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
              *pnum_clobbers = 1;
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
              *pnum_clobbers = 1;
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
              *pnum_clobbers = 1;
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
              *pnum_clobbers = 1;
              return 9810; /* *avx512f_gatherdiv2di */

            default:
              return -1;
            }

        case E_V2DFmode:
          switch (pattern1655 (x2, 
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
              *pnum_clobbers = 1;
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
              *pnum_clobbers = 1;
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
              *pnum_clobbers = 1;
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
              *pnum_clobbers = 1;
              return 9811; /* *avx512f_gatherdiv2df */

            default:
              return -1;
            }

        default:
          return -1;
        }

    case PC:
      x8 = XVECEXP (x2, 0, 1);
      operands[6] = x8;
      operands[5] = x3;
      x9 = XVECEXP (x4, 0, 0);
      operands[3] = x9;
      x10 = XVECEXP (x4, 0, 1);
      operands[2] = x10;
      operands[4] = x6;
      switch (GET_MODE (operands[0]))
        {
        case E_V16SImode:
          switch (pattern1607 (x2, 
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
              *pnum_clobbers = 1;
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
              *pnum_clobbers = 1;
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
              *pnum_clobbers = 1;
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
              *pnum_clobbers = 1;
              return 9824; /* *avx512f_gatherdiv16si_2 */

            default:
              return -1;
            }

        case E_V16SFmode:
          switch (pattern1607 (x2, 
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
              *pnum_clobbers = 1;
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
              *pnum_clobbers = 1;
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
              *pnum_clobbers = 1;
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
              *pnum_clobbers = 1;
              return 9825; /* *avx512f_gatherdiv16sf_2 */

            default:
              return -1;
            }

        case E_V8DImode:
          switch (pattern1609 (x2, 
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
              *pnum_clobbers = 1;
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
              *pnum_clobbers = 1;
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
              *pnum_clobbers = 1;
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
              *pnum_clobbers = 1;
              return 9826; /* *avx512f_gatherdiv8di_2 */

            default:
              return -1;
            }

        case E_V8DFmode:
          switch (pattern1609 (x2, 
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
              *pnum_clobbers = 1;
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
              *pnum_clobbers = 1;
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
              *pnum_clobbers = 1;
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
              *pnum_clobbers = 1;
              return 9827; /* *avx512f_gatherdiv8df_2 */

            default:
              return -1;
            }

        case E_V8SImode:
          switch (pattern1611 (x2, 
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
              *pnum_clobbers = 1;
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
              *pnum_clobbers = 1;
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
              *pnum_clobbers = 1;
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
              *pnum_clobbers = 1;
              return 9828; /* *avx512f_gatherdiv8si_2 */

            default:
              return -1;
            }

        case E_V8SFmode:
          switch (pattern1611 (x2, 
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
              *pnum_clobbers = 1;
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
              *pnum_clobbers = 1;
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
              *pnum_clobbers = 1;
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
              *pnum_clobbers = 1;
              return 9829; /* *avx512f_gatherdiv8sf_2 */

            default:
              return -1;
            }

        case E_V4DImode:
          switch (pattern1613 (x2, 
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
              *pnum_clobbers = 1;
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
              *pnum_clobbers = 1;
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
              *pnum_clobbers = 1;
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
              *pnum_clobbers = 1;
              return 9830; /* *avx512f_gatherdiv4di_2 */

            default:
              return -1;
            }

        case E_V4DFmode:
          switch (pattern1613 (x2, 
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
              *pnum_clobbers = 1;
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
              *pnum_clobbers = 1;
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
              *pnum_clobbers = 1;
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
              *pnum_clobbers = 1;
              return 9831; /* *avx512f_gatherdiv4df_2 */

            default:
              return -1;
            }

        case E_V4SImode:
          switch (pattern1615 (x2, 
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
              *pnum_clobbers = 1;
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
              *pnum_clobbers = 1;
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
              *pnum_clobbers = 1;
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
              *pnum_clobbers = 1;
              return 9832; /* *avx512f_gatherdiv4si_2 */

            default:
              return -1;
            }

        case E_V4SFmode:
          switch (pattern1615 (x2, 
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
              *pnum_clobbers = 1;
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
              *pnum_clobbers = 1;
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
              *pnum_clobbers = 1;
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
              *pnum_clobbers = 1;
              return 9833; /* *avx512f_gatherdiv4sf_2 */

            default:
              return -1;
            }

        case E_V2DImode:
          switch (pattern1615 (x2, 
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
              *pnum_clobbers = 1;
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
              *pnum_clobbers = 1;
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
              *pnum_clobbers = 1;
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
              *pnum_clobbers = 1;
              return 9834; /* *avx512f_gatherdiv2di_2 */

            default:
              return -1;
            }

        case E_V2DFmode:
          switch (pattern1615 (x2, 
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
              *pnum_clobbers = 1;
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
              *pnum_clobbers = 1;
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
              *pnum_clobbers = 1;
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
              *pnum_clobbers = 1;
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
}

 int
recog_276 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  x4 = XVECEXP (x3, 0, 0);
  if (GET_CODE (x4) != CONST_INT)
    return -1;
  x5 = XVECEXP (x3, 0, 1);
  if (GET_CODE (x5) == CONST_INT)
    {
      res = recog_274 (x1, insn, pnum_clobbers);
      if (res >= 0)
        return res;
    }
  operands[3] = x4;
  res = recog_275 (x1, insn, pnum_clobbers);
  if (res >= 0)
    return res;
  if (GET_CODE (x5) != CONST_INT)
    return -1;
  x6 = XVECEXP (x3, 0, 2);
  if (GET_CODE (x6) != CONST_INT)
    return -1;
  x7 = XVECEXP (x3, 0, 3);
  if (GET_CODE (x7) != CONST_INT
      || pattern1316 (x2, 
E_V4SImode, 
E_V8SImode) != 0)
    return -1;
  switch (XWINT (x4, 0))
    {
    case 2L:
      if (XWINT (x5, 0) != 6L
          || XWINT (x6, 0) != 3L
          || XWINT (x7, 0) != 7L
          || !
#line 19759 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && 1))
        return -1;
      return 8368; /* vec_interleave_highv4si */

    case 0L:
      if (XWINT (x5, 0) != 4L
          || XWINT (x6, 0) != 1L
          || XWINT (x7, 0) != 5L
          || !
#line 19813 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && 1))
        return -1;
      return 8374; /* vec_interleave_lowv4si */

    default:
      return -1;
    }
}

 int
recog_279 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12, x13, x14, x15, x16, x17;
  rtx x18, x19, x20, x21;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  if (pattern931 (x3) != 0)
    return -1;
  x4 = XVECEXP (x3, 0, 0);
  switch (XWINT (x4, 0))
    {
    case 2L:
      x5 = XVECEXP (x3, 0, 1);
      if (XWINT (x5, 0) != 18L)
        return -1;
      x6 = XVECEXP (x3, 0, 2);
      if (XWINT (x6, 0) != 3L)
        return -1;
      x7 = XVECEXP (x3, 0, 3);
      if (XWINT (x7, 0) != 19L
          || pattern1826 (x3) != 0)
        return -1;
      x8 = XVECEXP (x3, 0, 8);
      if (XWINT (x8, 0) != 10L)
        return -1;
      x9 = XVECEXP (x3, 0, 9);
      if (XWINT (x9, 0) != 26L)
        return -1;
      x10 = XVECEXP (x3, 0, 10);
      if (XWINT (x10, 0) != 11L)
        return -1;
      x11 = XVECEXP (x3, 0, 11);
      if (XWINT (x11, 0) != 27L
          || pattern1861 (x2) != 0)
        return -1;
      switch (GET_MODE (operands[0]))
        {
        case E_V16SFmode:
          if (pattern1414 (x2, 
E_V16SFmode, 
E_V32SFmode) != 0
              || !
#line 11152 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512))
            return -1;
          return 5244; /* *avx512f_unpckhps512 */

        case E_V16SImode:
          if (pattern1414 (x2, 
E_V16SImode, 
E_V32SImode) != 0
              || !
#line 19744 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512))
            return -1;
          return 8366; /* *avx512f_interleave_highv16si */

        default:
          return -1;
        }

    case 0L:
      x5 = XVECEXP (x3, 0, 1);
      switch (XWINT (x5, 0))
        {
        case 16L:
          x6 = XVECEXP (x3, 0, 2);
          if (XWINT (x6, 0) != 1L)
            return -1;
          x7 = XVECEXP (x3, 0, 3);
          if (XWINT (x7, 0) != 17L)
            return -1;
          x12 = XEXP (x2, 0);
          x13 = XEXP (x12, 1);
          operands[2] = x13;
          x14 = XVECEXP (x3, 0, 4);
          switch (XWINT (x14, 0))
            {
            case 4L:
              x15 = XVECEXP (x3, 0, 5);
              if (XWINT (x15, 0) != 20L)
                return -1;
              x16 = XVECEXP (x3, 0, 6);
              if (XWINT (x16, 0) != 5L)
                return -1;
              x17 = XVECEXP (x3, 0, 7);
              if (XWINT (x17, 0) != 21L)
                return -1;
              x8 = XVECEXP (x3, 0, 8);
              if (XWINT (x8, 0) != 8L)
                return -1;
              x9 = XVECEXP (x3, 0, 9);
              if (XWINT (x9, 0) != 24L)
                return -1;
              x10 = XVECEXP (x3, 0, 10);
              if (XWINT (x10, 0) != 9L)
                return -1;
              x11 = XVECEXP (x3, 0, 11);
              if (XWINT (x11, 0) != 25L)
                return -1;
              x18 = XVECEXP (x3, 0, 12);
              if (XWINT (x18, 0) != 12L)
                return -1;
              x19 = XVECEXP (x3, 0, 13);
              if (XWINT (x19, 0) != 28L)
                return -1;
              x20 = XVECEXP (x3, 0, 14);
              if (XWINT (x20, 0) != 13L)
                return -1;
              x21 = XVECEXP (x3, 0, 15);
              if (XWINT (x21, 0) != 29L)
                return -1;
              switch (GET_MODE (operands[0]))
                {
                case E_V16SFmode:
                  if (pattern1414 (x2, 
E_V16SFmode, 
E_V32SFmode) != 0
                      || !
#line 11240 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512))
                    return -1;
                  return 5250; /* *avx512f_unpcklps512 */

                case E_V16SImode:
                  if (pattern1414 (x2, 
E_V16SImode, 
E_V32SImode) != 0
                      || !
#line 19799 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512))
                    return -1;
                  return 8372; /* *avx512f_interleave_lowv16si */

                default:
                  return -1;
                }

            case 2L:
              x15 = XVECEXP (x3, 0, 5);
              if (XWINT (x15, 0) != 18L)
                return -1;
              x16 = XVECEXP (x3, 0, 6);
              if (XWINT (x16, 0) != 3L)
                return -1;
              x17 = XVECEXP (x3, 0, 7);
              if (XWINT (x17, 0) != 19L)
                return -1;
              x8 = XVECEXP (x3, 0, 8);
              switch (XWINT (x8, 0))
                {
                case 4L:
                  x9 = XVECEXP (x3, 0, 9);
                  if (XWINT (x9, 0) != 20L)
                    return -1;
                  x10 = XVECEXP (x3, 0, 10);
                  if (XWINT (x10, 0) != 5L)
                    return -1;
                  x11 = XVECEXP (x3, 0, 11);
                  if (XWINT (x11, 0) != 21L)
                    return -1;
                  x18 = XVECEXP (x3, 0, 12);
                  if (XWINT (x18, 0) != 6L)
                    return -1;
                  x19 = XVECEXP (x3, 0, 13);
                  if (XWINT (x19, 0) != 22L)
                    return -1;
                  x20 = XVECEXP (x3, 0, 14);
                  if (XWINT (x20, 0) != 7L)
                    return -1;
                  x21 = XVECEXP (x3, 0, 15);
                  if (XWINT (x21, 0) != 23L
                      || pattern1489 (x2, 
E_V16QImode, 
E_V32QImode) != 0
                      || !
#line 19568 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && 1 && 1))
                    return -1;
                  return 8326; /* vec_interleave_lowv16qi */

                case 8L:
                  x9 = XVECEXP (x3, 0, 9);
                  if (XWINT (x9, 0) != 24L)
                    return -1;
                  x10 = XVECEXP (x3, 0, 10);
                  if (XWINT (x10, 0) != 9L)
                    return -1;
                  x11 = XVECEXP (x3, 0, 11);
                  if (XWINT (x11, 0) != 25L)
                    return -1;
                  x18 = XVECEXP (x3, 0, 12);
                  if (XWINT (x18, 0) != 10L)
                    return -1;
                  x19 = XVECEXP (x3, 0, 13);
                  if (XWINT (x19, 0) != 26L)
                    return -1;
                  x20 = XVECEXP (x3, 0, 14);
                  if (XWINT (x20, 0) != 11L)
                    return -1;
                  x21 = XVECEXP (x3, 0, 15);
                  if (XWINT (x21, 0) != 27L)
                    return -1;
                  switch (GET_MODE (operands[0]))
                    {
                    case E_V16HImode:
                      if (pattern1414 (x2, 
E_V16HImode, 
E_V32HImode) != 0
                          || !
#line 19688 "../../gcc/config/i386/sse.md"
(TARGET_AVX2 && 1 && 1))
                        return -1;
                      return 8352; /* avx2_interleave_lowv16hi */

                    case E_V16HFmode:
                      if (pattern1414 (x2, 
E_V16HFmode, 
E_V32HFmode) != 0
                          || !
#line 19688 "../../gcc/config/i386/sse.md"
(TARGET_AVX2 && 1 && 1))
                        return -1;
                      return 8354; /* avx2_interleave_lowv16hf */

                    case E_V16BFmode:
                      if (pattern1414 (x2, 
E_V16BFmode, 
E_V32BFmode) != 0
                          || !
#line 19688 "../../gcc/config/i386/sse.md"
(TARGET_AVX2 && 1 && 1))
                        return -1;
                      return 8356; /* avx2_interleave_lowv16bf */

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
          if (pattern1656 (x3) != 0)
            return -1;
          x8 = XVECEXP (x3, 0, 8);
          if (XWINT (x8, 0) != 8L)
            return -1;
          x9 = XVECEXP (x3, 0, 9);
          if (XWINT (x9, 0) != 8L)
            return -1;
          x10 = XVECEXP (x3, 0, 10);
          if (XWINT (x10, 0) != 10L)
            return -1;
          x11 = XVECEXP (x3, 0, 11);
          if (XWINT (x11, 0) != 10L)
            return -1;
          x18 = XVECEXP (x3, 0, 12);
          if (XWINT (x18, 0) != 12L)
            return -1;
          x19 = XVECEXP (x3, 0, 13);
          if (XWINT (x19, 0) != 12L)
            return -1;
          x20 = XVECEXP (x3, 0, 14);
          if (XWINT (x20, 0) != 14L)
            return -1;
          x21 = XVECEXP (x3, 0, 15);
          if (XWINT (x21, 0) != 14L
              || pattern1785 (x2, 
E_V16SFmode, 
E_V32SFmode) != 0
              || !
#line 11433 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512))
            return -1;
          return 5266; /* *avx512f_movsldup512 */

        default:
          return -1;
        }

    case 1L:
      x5 = XVECEXP (x3, 0, 1);
      if (XWINT (x5, 0) != 1L)
        return -1;
      x6 = XVECEXP (x3, 0, 2);
      if (XWINT (x6, 0) != 3L)
        return -1;
      x7 = XVECEXP (x3, 0, 3);
      if (XWINT (x7, 0) != 3L)
        return -1;
      x14 = XVECEXP (x3, 0, 4);
      if (XWINT (x14, 0) != 5L)
        return -1;
      x15 = XVECEXP (x3, 0, 5);
      if (XWINT (x15, 0) != 5L)
        return -1;
      x16 = XVECEXP (x3, 0, 6);
      if (XWINT (x16, 0) != 7L)
        return -1;
      x17 = XVECEXP (x3, 0, 7);
      if (XWINT (x17, 0) != 7L)
        return -1;
      x8 = XVECEXP (x3, 0, 8);
      if (XWINT (x8, 0) != 9L)
        return -1;
      x9 = XVECEXP (x3, 0, 9);
      if (XWINT (x9, 0) != 9L)
        return -1;
      x10 = XVECEXP (x3, 0, 10);
      if (XWINT (x10, 0) != 11L)
        return -1;
      x11 = XVECEXP (x3, 0, 11);
      if (XWINT (x11, 0) != 11L)
        return -1;
      x18 = XVECEXP (x3, 0, 12);
      if (XWINT (x18, 0) != 13L)
        return -1;
      x19 = XVECEXP (x3, 0, 13);
      if (XWINT (x19, 0) != 13L)
        return -1;
      x20 = XVECEXP (x3, 0, 14);
      if (XWINT (x20, 0) != 15L)
        return -1;
      x21 = XVECEXP (x3, 0, 15);
      if (XWINT (x21, 0) != 15L
          || pattern1785 (x2, 
E_V16SFmode, 
E_V32SFmode) != 0
          || !
#line 11380 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512))
        return -1;
      return 5260; /* *avx512f_movshdup512 */

    case 8L:
      x5 = XVECEXP (x3, 0, 1);
      if (XWINT (x5, 0) != 24L)
        return -1;
      x6 = XVECEXP (x3, 0, 2);
      if (XWINT (x6, 0) != 9L)
        return -1;
      x7 = XVECEXP (x3, 0, 3);
      if (XWINT (x7, 0) != 25L)
        return -1;
      x14 = XVECEXP (x3, 0, 4);
      if (XWINT (x14, 0) != 10L)
        return -1;
      x15 = XVECEXP (x3, 0, 5);
      if (XWINT (x15, 0) != 26L)
        return -1;
      x16 = XVECEXP (x3, 0, 6);
      if (XWINT (x16, 0) != 11L)
        return -1;
      x17 = XVECEXP (x3, 0, 7);
      if (XWINT (x17, 0) != 27L
          || pattern1846 (x3) != 0)
        return -1;
      x18 = XVECEXP (x3, 0, 12);
      if (XWINT (x18, 0) != 14L)
        return -1;
      x19 = XVECEXP (x3, 0, 13);
      if (XWINT (x19, 0) != 30L)
        return -1;
      x20 = XVECEXP (x3, 0, 14);
      if (XWINT (x20, 0) != 15L)
        return -1;
      x21 = XVECEXP (x3, 0, 15);
      if (XWINT (x21, 0) != 31L
          || pattern1316 (x2, 
E_V16QImode, 
E_V32QImode) != 0
          || !
#line 19472 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && 1 && 1))
        return -1;
      return 8320; /* vec_interleave_highv16qi */

    case 4L:
      x5 = XVECEXP (x3, 0, 1);
      if (XWINT (x5, 0) != 20L)
        return -1;
      x6 = XVECEXP (x3, 0, 2);
      if (XWINT (x6, 0) != 5L)
        return -1;
      x7 = XVECEXP (x3, 0, 3);
      if (XWINT (x7, 0) != 21L
          || pattern1826 (x3) != 0
          || pattern1846 (x3) != 0
          || pattern1861 (x2) != 0)
        return -1;
      switch (GET_MODE (operands[0]))
        {
        case E_V16HImode:
          if (pattern1414 (x2, 
E_V16HImode, 
E_V32HImode) != 0
              || !
#line 19620 "../../gcc/config/i386/sse.md"
(TARGET_AVX2 && 1 && 1))
            return -1;
          return 8334; /* avx2_interleave_highv16hi */

        case E_V16HFmode:
          if (pattern1414 (x2, 
E_V16HFmode, 
E_V32HFmode) != 0
              || !
#line 19620 "../../gcc/config/i386/sse.md"
(TARGET_AVX2 && 1 && 1))
            return -1;
          return 8336; /* avx2_interleave_highv16hf */

        case E_V16BFmode:
          if (pattern1414 (x2, 
E_V16BFmode, 
E_V32BFmode) != 0
              || !
#line 19620 "../../gcc/config/i386/sse.md"
(TARGET_AVX2 && 1 && 1))
            return -1;
          return 8338; /* avx2_interleave_highv16bf */

        default:
          return -1;
        }

    default:
      return -1;
    }
}

 int
recog_289 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  x4 = XVECEXP (x3, 0, 1);
  operands[3] = x4;
  x5 = XVECEXP (x3, 0, 2);
  operands[4] = x5;
  x6 = XVECEXP (x3, 0, 3);
  operands[5] = x6;
  x7 = XVECEXP (x3, 0, 5);
  operands[7] = x7;
  x8 = XVECEXP (x3, 0, 6);
  operands[8] = x8;
  x9 = XVECEXP (x3, 0, 7);
  operands[9] = x9;
  switch (GET_MODE (operands[0]))
    {
    case E_V8DFmode:
      if (!register_operand (operands[0], E_V8DFmode)
          || GET_MODE (x2) != E_V8DFmode
          || !register_operand (operands[1], E_V8DFmode)
          || pattern1705 () != 0
          || !(
#line 20272 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (INTVAL (operands[2]) & 1) == 0
   && INTVAL (operands[2]) == INTVAL (operands[3]) - 1
   && (INTVAL (operands[4]) & 1) == 0
   && INTVAL (operands[4]) == INTVAL (operands[5]) - 1
   && (INTVAL (operands[6]) & 1) == 0
   && INTVAL (operands[6]) == INTVAL (operands[7]) - 1
   && (INTVAL (operands[8]) & 1) == 0
   && INTVAL (operands[8]) == INTVAL (operands[9]) - 1) && 
#line 718 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 8418; /* *avx512f_shuf_f64x2_1_1 */

    case E_V8DImode:
      if (!register_operand (operands[0], E_V8DImode)
          || GET_MODE (x2) != E_V8DImode)
        return -1;
      if (register_operand (operands[1], E_V8DImode)
          && pattern1705 () == 0
          && (
#line 20272 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (INTVAL (operands[2]) & 1) == 0
   && INTVAL (operands[2]) == INTVAL (operands[3]) - 1
   && (INTVAL (operands[4]) & 1) == 0
   && INTVAL (operands[4]) == INTVAL (operands[5]) - 1
   && (INTVAL (operands[6]) & 1) == 0
   && INTVAL (operands[6]) == INTVAL (operands[7]) - 1
   && (INTVAL (operands[8]) & 1) == 0
   && INTVAL (operands[8]) == INTVAL (operands[9]) - 1) && 
#line 718 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return 8420; /* *avx512f_shuf_i64x2_1_1 */
      if (!nonimmediate_operand (operands[1], E_V8DImode)
          || pattern1706 () != 0
          || !(
#line 27622 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && 1
   && (INTVAL (operands[2]) == (INTVAL (operands[6]) - 4)
       && INTVAL (operands[3]) == (INTVAL (operands[7]) - 4)
       && INTVAL (operands[4]) == (INTVAL (operands[8]) - 4)
       && INTVAL (operands[5]) == (INTVAL (operands[9]) - 4))) && 
#line 718 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 9172; /* avx512f_permv8di_1 */

    case E_V8SImode:
      if (!register_operand (operands[0], E_V8SImode)
          || GET_MODE (x2) != E_V8SImode
          || !nonimmediate_operand (operands[1], E_V8SImode)
          || pattern1706 () != 0
          || !
#line 20628 "../../gcc/config/i386/sse.md"
(TARGET_AVX2
   && 1
   && INTVAL (operands[2]) + 4 == INTVAL (operands[6])
   && INTVAL (operands[3]) + 4 == INTVAL (operands[7])
   && INTVAL (operands[4]) + 4 == INTVAL (operands[8])
   && INTVAL (operands[5]) + 4 == INTVAL (operands[9])))
        return -1;
      return 8436; /* avx2_pshufd_1 */

    default:
      return -1;
    }
}

 int
recog_295 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  x4 = XVECEXP (x3, 0, 0);
  if (GET_CODE (x4) != CONST_INT)
    return -1;
  x5 = XVECEXP (x3, 0, 1);
  if (GET_CODE (x5) == CONST_INT)
    {
      res = recog_292 (x1, insn, pnum_clobbers);
      if (res >= 0)
        return res;
    }
  operands[2] = x4;
  res = recog_294 (x1, insn, pnum_clobbers);
  if (res >= 0)
    return res;
  if (XWINT (x4, 0) != 0L
      || x5 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
    return -1;
  x6 = XVECEXP (x3, 0, 2);
  if (x6 != const_int_rtx[MAX_SAVED_CONST_INT + 2])
    return -1;
  x7 = XVECEXP (x3, 0, 3);
  if (x7 != const_int_rtx[MAX_SAVED_CONST_INT + 3]
      || pattern837 (x3, 
11, 
10, 
9, 
8) != 0
      || !register_operand (operands[0], E_V16HImode)
      || GET_MODE (x2) != E_V16HImode
      || !nonimmediate_operand (operands[1], E_V16HImode)
      || pattern1491 (x3) != 0)
    return -1;
  x8 = XVECEXP (x3, 0, 12);
  operands[6] = x8;
  if (!const_12_to_15_operand (operands[6], E_VOIDmode))
    return -1;
  x9 = XVECEXP (x3, 0, 13);
  operands[7] = x9;
  if (!const_12_to_15_operand (operands[7], E_VOIDmode))
    return -1;
  x10 = XVECEXP (x3, 0, 14);
  operands[8] = x10;
  if (!const_12_to_15_operand (operands[8], E_VOIDmode))
    return -1;
  x11 = XVECEXP (x3, 0, 15);
  operands[9] = x11;
  if (!const_12_to_15_operand (operands[9], E_VOIDmode)
      || !
#line 20937 "../../gcc/config/i386/sse.md"
(TARGET_AVX2
   && 1 && 1
   && INTVAL (operands[2]) + 8 == INTVAL (operands[6])
   && INTVAL (operands[3]) + 8 == INTVAL (operands[7])
   && INTVAL (operands[4]) + 8 == INTVAL (operands[8])
   && INTVAL (operands[5]) + 8 == INTVAL (operands[9])))
    return -1;
  return 8448; /* avx2_pshufhw_1 */
}

 int
recog_298 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  switch (XVECLEN (x3, 0))
    {
    case 2:
      res = recog_285 (x1, insn, pnum_clobbers);
      if (res >= 0)
        return res;
      break;

    case 4:
      res = recog_287 (x1, insn, pnum_clobbers);
      if (res >= 0)
        return res;
      break;

    case 8:
      res = recog_291 (x1, insn, pnum_clobbers);
      if (res >= 0)
        return res;
      break;

    case 16:
      res = recog_295 (x1, insn, pnum_clobbers);
      if (res >= 0)
        return res;
      break;

    case 32:
      res = recog_296 (x1, insn, pnum_clobbers);
      if (res >= 0)
        return res;
      break;

    default:
      break;
    }
  if (XVECLEN (x3, 0) >= 1)
    {
      operands[2] = x3;
      res = recog_297 (x1, insn, pnum_clobbers);
      if (res >= 0)
        return res;
    }
  switch (XVECLEN (x3, 0))
    {
    case 4:
      if (pattern675 (x2, 
E_V4DFmode) != 0
          || !
#line 27551 "../../gcc/config/i386/sse.md"
(TARGET_AVX2 && 1))
        return -1;
      return 9168; /* avx2_permv4df_1 */

    case 8:
      if (pattern675 (x2, 
E_V8DFmode) != 0)
        return -1;
      x4 = XVECEXP (x3, 0, 4);
      operands[6] = x4;
      if (!const_4_to_7_operand (operands[6], E_VOIDmode))
        return -1;
      x5 = XVECEXP (x3, 0, 5);
      operands[7] = x5;
      if (!const_4_to_7_operand (operands[7], E_VOIDmode))
        return -1;
      x6 = XVECEXP (x3, 0, 6);
      operands[8] = x6;
      if (!const_4_to_7_operand (operands[8], E_VOIDmode))
        return -1;
      x7 = XVECEXP (x3, 0, 7);
      operands[9] = x7;
      if (!const_4_to_7_operand (operands[9], E_VOIDmode)
          || !(
#line 27622 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && 1
   && (INTVAL (operands[2]) == (INTVAL (operands[6]) - 4)
       && INTVAL (operands[3]) == (INTVAL (operands[7]) - 4)
       && INTVAL (operands[4]) == (INTVAL (operands[8]) - 4)
       && INTVAL (operands[5]) == (INTVAL (operands[9]) - 4))) && 
#line 718 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 9170; /* avx512f_permv8df_1 */

    default:
      return -1;
    }
}

 int
recog_304 (rtx x1 ATTRIBUTE_UNUSED,
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
          return 5535; /* *avx512bw_vpternlogv64qi_1 */

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
          return 5562; /* *avx512vl_vpternlogv32qi_1 */

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
          return 5589; /* *avx512vl_vpternlogv16qi_1 */

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
          return 5616; /* *avx512bw_vpternlogv32hi_1 */

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
          return 5643; /* *avx512vl_vpternlogv16hi_1 */

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
          return 5670; /* *avx512vl_vpternlogv8hi_1 */

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
          return 5697; /* *avx512f_vpternlogv16si_1 */

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
          return 5724; /* *avx512vl_vpternlogv8si_1 */

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
          return 5751; /* *avx512vl_vpternlogv4si_1 */

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
          return 5778; /* *avx512f_vpternlogv8di_1 */

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
          return 5805; /* *avx512vl_vpternlogv4di_1 */

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
          return 5832; /* *avx512vl_vpternlogv2di_1 */

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
          return 5538; /* *avx512bw_vpternlogv64qi_1 */

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
          return 5565; /* *avx512vl_vpternlogv32qi_1 */

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
          return 5592; /* *avx512vl_vpternlogv16qi_1 */

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
          return 5619; /* *avx512bw_vpternlogv32hi_1 */

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
          return 5646; /* *avx512vl_vpternlogv16hi_1 */

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
          return 5673; /* *avx512vl_vpternlogv8hi_1 */

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
          return 5700; /* *avx512f_vpternlogv16si_1 */

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
          return 5727; /* *avx512vl_vpternlogv8si_1 */

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
          return 5754; /* *avx512vl_vpternlogv4si_1 */

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
          return 5781; /* *avx512f_vpternlogv8di_1 */

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
          return 5808; /* *avx512vl_vpternlogv4di_1 */

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
          return 5835; /* *avx512vl_vpternlogv2di_1 */

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
          return 5541; /* *avx512bw_vpternlogv64qi_1 */

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
          return 5568; /* *avx512vl_vpternlogv32qi_1 */

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
          return 5595; /* *avx512vl_vpternlogv16qi_1 */

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
          return 5622; /* *avx512bw_vpternlogv32hi_1 */

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
          return 5649; /* *avx512vl_vpternlogv16hi_1 */

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
          return 5676; /* *avx512vl_vpternlogv8hi_1 */

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
          return 5703; /* *avx512f_vpternlogv16si_1 */

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
          return 5730; /* *avx512vl_vpternlogv8si_1 */

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
          return 5757; /* *avx512vl_vpternlogv4si_1 */

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
          return 5784; /* *avx512f_vpternlogv8di_1 */

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
          return 5811; /* *avx512vl_vpternlogv4di_1 */

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
          return 5838; /* *avx512vl_vpternlogv2di_1 */

        case 36:
          if (!(
#line 13946 "../../gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 332 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 6819; /* *avx512bw_vpternlogv64qi_3 */

        case 37:
          if (!(
#line 13946 "../../gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 332 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 6828; /* *avx512vl_vpternlogv32qi_3 */

        case 38:
          if (!
#line 13946 "../../gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()))
            return -1;
          return 6837; /* *avx512vl_vpternlogv16qi_3 */

        case 39:
          if (!(
#line 13946 "../../gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 333 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 6846; /* *avx512bw_vpternlogv32hi_3 */

        case 40:
          if (!(
#line 13946 "../../gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 333 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 6855; /* *avx512vl_vpternlogv16hi_3 */

        case 41:
          if (!
#line 13946 "../../gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()))
            return -1;
          return 6864; /* *avx512vl_vpternlogv8hi_3 */

        case 42:
          if (!(
#line 13946 "../../gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 334 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 6873; /* *avx512f_vpternlogv16si_3 */

        case 43:
          if (!(
#line 13946 "../../gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 334 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 6882; /* *avx512vl_vpternlogv8si_3 */

        case 44:
          if (!
#line 13946 "../../gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()))
            return -1;
          return 6891; /* *avx512vl_vpternlogv4si_3 */

        case 45:
          if (!(
#line 13946 "../../gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 335 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 6900; /* *avx512f_vpternlogv8di_3 */

        case 46:
          if (!(
#line 13946 "../../gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 335 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 6909; /* *avx512vl_vpternlogv4di_3 */

        case 47:
          if (!
#line 13946 "../../gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()))
            return -1;
          return 6918; /* *avx512vl_vpternlogv2di_3 */

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
          return 6183; /* *avx512bw_vpternlogv64qi_2 */

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
          return 6210; /* *avx512vl_vpternlogv32qi_2 */

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
          return 6237; /* *avx512vl_vpternlogv16qi_2 */

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
          return 6264; /* *avx512bw_vpternlogv32hi_2 */

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
          return 6291; /* *avx512vl_vpternlogv16hi_2 */

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
          return 6318; /* *avx512vl_vpternlogv8hi_2 */

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
          return 6345; /* *avx512f_vpternlogv16si_2 */

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
          return 6372; /* *avx512vl_vpternlogv8si_2 */

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
          return 6399; /* *avx512vl_vpternlogv4si_2 */

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
          return 6426; /* *avx512f_vpternlogv8di_2 */

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
          return 6453; /* *avx512vl_vpternlogv4di_2 */

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
          return 6480; /* *avx512vl_vpternlogv2di_2 */

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
          return 6186; /* *avx512bw_vpternlogv64qi_2 */

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
          return 6213; /* *avx512vl_vpternlogv32qi_2 */

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
          return 6240; /* *avx512vl_vpternlogv16qi_2 */

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
          return 6267; /* *avx512bw_vpternlogv32hi_2 */

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
          return 6294; /* *avx512vl_vpternlogv16hi_2 */

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
          return 6321; /* *avx512vl_vpternlogv8hi_2 */

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
          return 6348; /* *avx512f_vpternlogv16si_2 */

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
          return 6375; /* *avx512vl_vpternlogv8si_2 */

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
          return 6402; /* *avx512vl_vpternlogv4si_2 */

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
          return 6429; /* *avx512f_vpternlogv8di_2 */

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
          return 6456; /* *avx512vl_vpternlogv4di_2 */

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
          return 6483; /* *avx512vl_vpternlogv2di_2 */

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
          return 6189; /* *avx512bw_vpternlogv64qi_2 */

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
          return 6216; /* *avx512vl_vpternlogv32qi_2 */

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
          return 6243; /* *avx512vl_vpternlogv16qi_2 */

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
          return 6270; /* *avx512bw_vpternlogv32hi_2 */

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
          return 6297; /* *avx512vl_vpternlogv16hi_2 */

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
          return 6324; /* *avx512vl_vpternlogv8hi_2 */

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
          return 6351; /* *avx512f_vpternlogv16si_2 */

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
          return 6378; /* *avx512vl_vpternlogv8si_2 */

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
          return 6405; /* *avx512vl_vpternlogv4si_2 */

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
          return 6432; /* *avx512f_vpternlogv8di_2 */

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
          return 6459; /* *avx512vl_vpternlogv4di_2 */

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
          return 6486; /* *avx512vl_vpternlogv2di_2 */

        default:
          return -1;
        }

    default:
      return -1;
    }
}

 int
recog_313 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4;
  int res ATTRIBUTE_UNUSED;
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
              return 5841; /* *avx512bw_vpternlogv32hf_1 */

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
              return 5868; /* *avx512vl_vpternlogv16hf_1 */

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
              return 5895; /* *avx512fp16_vpternlogv8hf_1 */

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
              return 5922; /* *avx512bw_vpternlogv32bf_1 */

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
              return 5949; /* *avx512vl_vpternlogv16bf_1 */

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
              return 5976; /* *avx512vl_vpternlogv8bf_1 */

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
              return 6003; /* *avx512f_vpternlogv16sf_1 */

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
              return 6030; /* *avx512vl_vpternlogv8sf_1 */

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
              return 6057; /* *avx512vl_vpternlogv4sf_1 */

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
              return 6084; /* *avx512f_vpternlogv8df_1 */

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
              return 6111; /* *avx512vl_vpternlogv4df_1 */

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
              return 6138; /* *avx512vl_vpternlogv2df_1 */

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
              return 5844; /* *avx512bw_vpternlogv32hf_1 */

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
              return 5871; /* *avx512vl_vpternlogv16hf_1 */

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
              return 5898; /* *avx512fp16_vpternlogv8hf_1 */

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
              return 5925; /* *avx512bw_vpternlogv32bf_1 */

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
              return 5952; /* *avx512vl_vpternlogv16bf_1 */

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
              return 5979; /* *avx512vl_vpternlogv8bf_1 */

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
              return 6006; /* *avx512f_vpternlogv16sf_1 */

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
              return 6033; /* *avx512vl_vpternlogv8sf_1 */

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
              return 6060; /* *avx512vl_vpternlogv4sf_1 */

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
              return 6087; /* *avx512f_vpternlogv8df_1 */

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
              return 6114; /* *avx512vl_vpternlogv4df_1 */

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
              return 6141; /* *avx512vl_vpternlogv2df_1 */

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
              return 5847; /* *avx512bw_vpternlogv32hf_1 */

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
              return 5874; /* *avx512vl_vpternlogv16hf_1 */

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
              return 5901; /* *avx512fp16_vpternlogv8hf_1 */

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
              return 5928; /* *avx512bw_vpternlogv32bf_1 */

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
              return 5955; /* *avx512vl_vpternlogv16bf_1 */

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
              return 5982; /* *avx512vl_vpternlogv8bf_1 */

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
              return 6009; /* *avx512f_vpternlogv16sf_1 */

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
              return 6036; /* *avx512vl_vpternlogv8sf_1 */

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
              return 6063; /* *avx512vl_vpternlogv4sf_1 */

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
              return 6090; /* *avx512f_vpternlogv8df_1 */

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
              return 6117; /* *avx512vl_vpternlogv4df_1 */

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
              return 6144; /* *avx512vl_vpternlogv2df_1 */

            case 36:
              if (!(
#line 13946 "../../gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 336 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
                return -1;
              return 6921; /* *avx512bw_vpternlogv32hf_3 */

            case 37:
              if (!(
#line 13946 "../../gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 336 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
                return -1;
              return 6930; /* *avx512vl_vpternlogv16hf_3 */

            case 38:
              if (!
#line 13946 "../../gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()))
                return -1;
              return 6939; /* *avx512fp16_vpternlogv8hf_3 */

            case 39:
              if (!(
#line 13946 "../../gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 337 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
                return -1;
              return 6948; /* *avx512bw_vpternlogv32bf_3 */

            case 40:
              if (!(
#line 13946 "../../gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 337 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
                return -1;
              return 6957; /* *avx512vl_vpternlogv16bf_3 */

            case 41:
              if (!
#line 13946 "../../gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()))
                return -1;
              return 6966; /* *avx512vl_vpternlogv8bf_3 */

            case 42:
              if (!(
#line 13946 "../../gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 338 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
                return -1;
              return 6975; /* *avx512f_vpternlogv16sf_3 */

            case 43:
              if (!(
#line 13946 "../../gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 338 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
                return -1;
              return 6984; /* *avx512vl_vpternlogv8sf_3 */

            case 44:
              if (!
#line 13946 "../../gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()))
                return -1;
              return 6993; /* *avx512vl_vpternlogv4sf_3 */

            case 45:
              if (!(
#line 13946 "../../gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 339 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
                return -1;
              return 7002; /* *avx512f_vpternlogv8df_3 */

            case 46:
              if (!(
#line 13946 "../../gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 339 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
                return -1;
              return 7011; /* *avx512vl_vpternlogv4df_3 */

            case 47:
              if (!(
#line 13946 "../../gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 339 "../../gcc/config/i386/sse.md"
(TARGET_SSE2)))
                return -1;
              return 7020; /* *avx512vl_vpternlogv2df_3 */

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
              return 6489; /* *avx512bw_vpternlogv32hf_2 */

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
              return 6516; /* *avx512vl_vpternlogv16hf_2 */

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
              return 6543; /* *avx512fp16_vpternlogv8hf_2 */

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
              return 6570; /* *avx512bw_vpternlogv32bf_2 */

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
              return 6597; /* *avx512vl_vpternlogv16bf_2 */

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
              return 6624; /* *avx512vl_vpternlogv8bf_2 */

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
              return 6651; /* *avx512f_vpternlogv16sf_2 */

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
              return 6678; /* *avx512vl_vpternlogv8sf_2 */

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
              return 6705; /* *avx512vl_vpternlogv4sf_2 */

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
              return 6732; /* *avx512f_vpternlogv8df_2 */

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
              return 6759; /* *avx512vl_vpternlogv4df_2 */

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
              return 6786; /* *avx512vl_vpternlogv2df_2 */

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
              return 6492; /* *avx512bw_vpternlogv32hf_2 */

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
              return 6519; /* *avx512vl_vpternlogv16hf_2 */

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
              return 6546; /* *avx512fp16_vpternlogv8hf_2 */

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
              return 6573; /* *avx512bw_vpternlogv32bf_2 */

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
              return 6600; /* *avx512vl_vpternlogv16bf_2 */

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
              return 6627; /* *avx512vl_vpternlogv8bf_2 */

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
              return 6654; /* *avx512f_vpternlogv16sf_2 */

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
              return 6681; /* *avx512vl_vpternlogv8sf_2 */

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
              return 6708; /* *avx512vl_vpternlogv4sf_2 */

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
              return 6735; /* *avx512f_vpternlogv8df_2 */

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
              return 6762; /* *avx512vl_vpternlogv4df_2 */

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
              return 6789; /* *avx512vl_vpternlogv2df_2 */

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
              return 6495; /* *avx512bw_vpternlogv32hf_2 */

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
              return 6522; /* *avx512vl_vpternlogv16hf_2 */

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
              return 6549; /* *avx512fp16_vpternlogv8hf_2 */

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
              return 6576; /* *avx512bw_vpternlogv32bf_2 */

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
              return 6603; /* *avx512vl_vpternlogv16bf_2 */

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
              return 6630; /* *avx512vl_vpternlogv8bf_2 */

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
              return 6657; /* *avx512f_vpternlogv16sf_2 */

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
              return 6684; /* *avx512vl_vpternlogv8sf_2 */

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
              return 6711; /* *avx512vl_vpternlogv4sf_2 */

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
              return 6738; /* *avx512f_vpternlogv8df_2 */

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
              return 6765; /* *avx512vl_vpternlogv4df_2 */

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
              return 6792; /* *avx512vl_vpternlogv2df_2 */

            default:
              return -1;
            }

        default:
          return -1;
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
              return 5850; /* *avx512bw_vpternlogv32hf_1 */

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
              return 5877; /* *avx512vl_vpternlogv16hf_1 */

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
              return 5904; /* *avx512fp16_vpternlogv8hf_1 */

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
              return 5931; /* *avx512bw_vpternlogv32bf_1 */

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
              return 5958; /* *avx512vl_vpternlogv16bf_1 */

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
              return 5985; /* *avx512vl_vpternlogv8bf_1 */

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
              return 6012; /* *avx512f_vpternlogv16sf_1 */

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
              return 6039; /* *avx512vl_vpternlogv8sf_1 */

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
              return 6066; /* *avx512vl_vpternlogv4sf_1 */

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
              return 6093; /* *avx512f_vpternlogv8df_1 */

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
              return 6120; /* *avx512vl_vpternlogv4df_1 */

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
              return 6147; /* *avx512vl_vpternlogv2df_1 */

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
              return 5853; /* *avx512bw_vpternlogv32hf_1 */

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
              return 5880; /* *avx512vl_vpternlogv16hf_1 */

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
              return 5907; /* *avx512fp16_vpternlogv8hf_1 */

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
              return 5934; /* *avx512bw_vpternlogv32bf_1 */

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
              return 5961; /* *avx512vl_vpternlogv16bf_1 */

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
              return 5988; /* *avx512vl_vpternlogv8bf_1 */

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
              return 6015; /* *avx512f_vpternlogv16sf_1 */

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
              return 6042; /* *avx512vl_vpternlogv8sf_1 */

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
              return 6069; /* *avx512vl_vpternlogv4sf_1 */

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
              return 6096; /* *avx512f_vpternlogv8df_1 */

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
              return 6123; /* *avx512vl_vpternlogv4df_1 */

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
              return 6150; /* *avx512vl_vpternlogv2df_1 */

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
              return 5856; /* *avx512bw_vpternlogv32hf_1 */

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
              return 5883; /* *avx512vl_vpternlogv16hf_1 */

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
              return 5910; /* *avx512fp16_vpternlogv8hf_1 */

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
              return 5937; /* *avx512bw_vpternlogv32bf_1 */

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
              return 5964; /* *avx512vl_vpternlogv16bf_1 */

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
              return 5991; /* *avx512vl_vpternlogv8bf_1 */

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
              return 6018; /* *avx512f_vpternlogv16sf_1 */

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
              return 6045; /* *avx512vl_vpternlogv8sf_1 */

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
              return 6072; /* *avx512vl_vpternlogv4sf_1 */

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
              return 6099; /* *avx512f_vpternlogv8df_1 */

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
              return 6126; /* *avx512vl_vpternlogv4df_1 */

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
              return 6153; /* *avx512vl_vpternlogv2df_1 */

            case 36:
              if (!(
#line 13946 "../../gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 336 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
                return -1;
              return 6924; /* *avx512bw_vpternlogv32hf_3 */

            case 37:
              if (!(
#line 13946 "../../gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 336 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
                return -1;
              return 6933; /* *avx512vl_vpternlogv16hf_3 */

            case 38:
              if (!
#line 13946 "../../gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()))
                return -1;
              return 6942; /* *avx512fp16_vpternlogv8hf_3 */

            case 39:
              if (!(
#line 13946 "../../gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 337 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
                return -1;
              return 6951; /* *avx512bw_vpternlogv32bf_3 */

            case 40:
              if (!(
#line 13946 "../../gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 337 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
                return -1;
              return 6960; /* *avx512vl_vpternlogv16bf_3 */

            case 41:
              if (!
#line 13946 "../../gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()))
                return -1;
              return 6969; /* *avx512vl_vpternlogv8bf_3 */

            case 42:
              if (!(
#line 13946 "../../gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 338 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
                return -1;
              return 6978; /* *avx512f_vpternlogv16sf_3 */

            case 43:
              if (!(
#line 13946 "../../gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 338 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
                return -1;
              return 6987; /* *avx512vl_vpternlogv8sf_3 */

            case 44:
              if (!
#line 13946 "../../gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()))
                return -1;
              return 6996; /* *avx512vl_vpternlogv4sf_3 */

            case 45:
              if (!(
#line 13946 "../../gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 339 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
                return -1;
              return 7005; /* *avx512f_vpternlogv8df_3 */

            case 46:
              if (!(
#line 13946 "../../gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 339 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
                return -1;
              return 7014; /* *avx512vl_vpternlogv4df_3 */

            case 47:
              if (!(
#line 13946 "../../gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 339 "../../gcc/config/i386/sse.md"
(TARGET_SSE2)))
                return -1;
              return 7023; /* *avx512vl_vpternlogv2df_3 */

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
              return 6498; /* *avx512bw_vpternlogv32hf_2 */

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
              return 6525; /* *avx512vl_vpternlogv16hf_2 */

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
              return 6552; /* *avx512fp16_vpternlogv8hf_2 */

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
              return 6579; /* *avx512bw_vpternlogv32bf_2 */

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
              return 6606; /* *avx512vl_vpternlogv16bf_2 */

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
              return 6633; /* *avx512vl_vpternlogv8bf_2 */

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
              return 6660; /* *avx512f_vpternlogv16sf_2 */

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
              return 6687; /* *avx512vl_vpternlogv8sf_2 */

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
              return 6714; /* *avx512vl_vpternlogv4sf_2 */

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
              return 6741; /* *avx512f_vpternlogv8df_2 */

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
              return 6768; /* *avx512vl_vpternlogv4df_2 */

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
              return 6795; /* *avx512vl_vpternlogv2df_2 */

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
              return 6501; /* *avx512bw_vpternlogv32hf_2 */

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
              return 6528; /* *avx512vl_vpternlogv16hf_2 */

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
              return 6555; /* *avx512fp16_vpternlogv8hf_2 */

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
              return 6582; /* *avx512bw_vpternlogv32bf_2 */

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
              return 6609; /* *avx512vl_vpternlogv16bf_2 */

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
              return 6636; /* *avx512vl_vpternlogv8bf_2 */

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
              return 6663; /* *avx512f_vpternlogv16sf_2 */

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
              return 6690; /* *avx512vl_vpternlogv8sf_2 */

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
              return 6717; /* *avx512vl_vpternlogv4sf_2 */

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
              return 6744; /* *avx512f_vpternlogv8df_2 */

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
              return 6771; /* *avx512vl_vpternlogv4df_2 */

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
              return 6798; /* *avx512vl_vpternlogv2df_2 */

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
              return 6504; /* *avx512bw_vpternlogv32hf_2 */

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
              return 6531; /* *avx512vl_vpternlogv16hf_2 */

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
              return 6558; /* *avx512fp16_vpternlogv8hf_2 */

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
              return 6585; /* *avx512bw_vpternlogv32bf_2 */

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
              return 6612; /* *avx512vl_vpternlogv16bf_2 */

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
              return 6639; /* *avx512vl_vpternlogv8bf_2 */

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
              return 6666; /* *avx512f_vpternlogv16sf_2 */

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
              return 6693; /* *avx512vl_vpternlogv8sf_2 */

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
              return 6720; /* *avx512vl_vpternlogv4sf_2 */

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
              return 6747; /* *avx512f_vpternlogv8df_2 */

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
              return 6774; /* *avx512vl_vpternlogv4df_2 */

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
              return 6801; /* *avx512vl_vpternlogv2df_2 */

            default:
              return -1;
            }

        default:
          return -1;
        }

    case XOR:
      return recog_310 (x1, insn, pnum_clobbers);

    default:
      return -1;
    }
}

 int
recog_372 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7;
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
      if (!register_operand (operands[1], E_VOIDmode))
        return -1;
      x7 = XEXP (x6, 0);
      operands[2] = x7;
      if (scratch_operand (operands[2], E_XFmode))
        {
          switch (pattern548 (x4))
            {
            case 0:
              if (
#line 5975 "../../gcc/config/i386/i386.md"
(X87_FLOAT_MODE_P (GET_MODE (operands[1]))
   && TARGET_FISTTP
   && !((SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	 && (TARGET_64BIT || HImode != DImode))
	&& TARGET_SSE_MATH)))
                return 229; /* fix_trunchi_i387_fisttp */
              break;

            case 1:
              if (
#line 5975 "../../gcc/config/i386/i386.md"
(X87_FLOAT_MODE_P (GET_MODE (operands[1]))
   && TARGET_FISTTP
   && !((SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	 && (TARGET_64BIT || SImode != DImode))
	&& TARGET_SSE_MATH)))
                return 230; /* fix_truncsi_i387_fisttp */
              break;

            case 2:
              if (
#line 5975 "../../gcc/config/i386/i386.md"
(X87_FLOAT_MODE_P (GET_MODE (operands[1]))
   && TARGET_FISTTP
   && !((SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	 && (TARGET_64BIT || DImode != DImode))
	&& TARGET_SSE_MATH)))
                return 231; /* fix_truncdi_i387_fisttp */
              break;

            default:
              break;
            }
        }
      if (GET_CODE (x7) != REG
          || REGNO (x7) != 17
          || GET_MODE (x7) != E_CCmode)
        return -1;
      switch (pattern548 (x4))
        {
        case 0:
          if (!
#line 5993 "../../gcc/config/i386/i386.md"
(X87_FLOAT_MODE_P (GET_MODE (operands[1]))
   && !TARGET_FISTTP
   && !(SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	 && (TARGET_64BIT || HImode != DImode))
   && ix86_pre_reload_split ()))
            return -1;
          return 232; /* *fix_trunchi_i387_1 */

        case 1:
          if (!
#line 5993 "../../gcc/config/i386/i386.md"
(X87_FLOAT_MODE_P (GET_MODE (operands[1]))
   && !TARGET_FISTTP
   && !(SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	 && (TARGET_64BIT || SImode != DImode))
   && ix86_pre_reload_split ()))
            return -1;
          return 233; /* *fix_truncsi_i387_1 */

        case 2:
          if (!
#line 5993 "../../gcc/config/i386/i386.md"
(X87_FLOAT_MODE_P (GET_MODE (operands[1]))
   && !TARGET_FISTTP
   && !(SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	 && (TARGET_64BIT || DImode != DImode))
   && ix86_pre_reload_split ()))
            return -1;
          return 234; /* *fix_truncdi_i387_1 */

        default:
          return -1;
        }

    case UNSPEC:
      if (pattern682 (x1, 
E_V2SFmode, 
E_V2SImode) != 0
          || !
#line 1558 "../../gcc/config/i386/mmx.md"
(TARGET_3DNOW))
        return -1;
      return 2074; /* mmx_fix_truncv2sfv2si2 */

    default:
      return -1;
    }
}

 int
recog_379 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 1);
  switch (GET_CODE (x2))
    {
    case CLOBBER:
      x3 = XEXP (x2, 0);
      operands[0] = x3;
      switch (GET_MODE (operands[1]))
        {
        case E_DImode:
          if (!nonimmediate_operand (operands[1], E_DImode)
              || !x86_64_immediate_operand (operands[2], E_DImode)
              || !scratch_operand (operands[0], E_DImode)
              || !
#line 7326 "../../gcc/config/i386/i386.md"
(TARGET_64BIT
   && ix86_match_ccmode (insn, CCGCmode)))
            return -1;
          return 319; /* *adddi_4 */

        case E_QImode:
          if (!nonimmediate_operand (operands[1], E_QImode)
              || !const_int_operand (operands[2], E_QImode)
              || !scratch_operand (operands[0], E_QImode)
              || !
#line 7371 "../../gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGCmode)))
            return -1;
          return 320; /* *addqi_4 */

        case E_HImode:
          if (!nonimmediate_operand (operands[1], E_HImode)
              || !const_int_operand (operands[2], E_HImode)
              || !scratch_operand (operands[0], E_HImode)
              || !
#line 7371 "../../gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGCmode)))
            return -1;
          return 321; /* *addhi_4 */

        case E_SImode:
          if (!nonimmediate_operand (operands[1], E_SImode)
              || !const_int_operand (operands[2], E_SImode)
              || !scratch_operand (operands[0], E_SImode)
              || !
#line 7371 "../../gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGCmode)))
            return -1;
          return 322; /* *addsi_4 */

        default:
          return -1;
        }

    case SET:
      x3 = XEXP (x2, 0);
      operands[0] = x3;
      x4 = XEXP (x2, 1);
      switch (GET_CODE (x4))
        {
        case MINUS:
          x5 = XEXP (x4, 0);
          if (!rtx_equal_p (x5, operands[1]))
            return -1;
          x6 = XEXP (x4, 1);
          if (!rtx_equal_p (x6, operands[2]))
            return -1;
          switch (GET_MODE (operands[1]))
            {
            case E_QImode:
              if (pattern1493 (x4, 
E_QImode) != 0
                  || !
#line 8670 "../../gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCmode)
   && ix86_binary_operator_ok (MINUS, QImode, operands, TARGET_APX_NDD)))
                return -1;
              return 445; /* *subqi_3 */

            case E_HImode:
              if (pattern1493 (x4, 
E_HImode) != 0
                  || !
#line 8670 "../../gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCmode)
   && ix86_binary_operator_ok (MINUS, HImode, operands, TARGET_APX_NDD)))
                return -1;
              return 446; /* *subhi_3 */

            case E_SImode:
              if (pattern1494 (x4, 
E_SImode) != 0
                  || !
#line 8670 "../../gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCmode)
   && ix86_binary_operator_ok (MINUS, SImode, operands, TARGET_APX_NDD)))
                return -1;
              return 447; /* *subsi_3 */

            case E_DImode:
              if (pattern1494 (x4, 
E_DImode) != 0
                  || !(
#line 8670 "../../gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCmode)
   && ix86_binary_operator_ok (MINUS, DImode, operands, TARGET_APX_NDD)) && 
#line 1161 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return -1;
              return 448; /* *subdi_3 */

            default:
              return -1;
            }

        case ZERO_EXTEND:
          if (GET_MODE (x4) != E_DImode)
            return -1;
          x5 = XEXP (x4, 0);
          if (GET_CODE (x5) != MINUS
              || GET_MODE (x5) != E_SImode
              || !nonimmediate_operand (operands[1], E_SImode)
              || !x86_64_general_operand (operands[2], E_SImode)
              || !register_operand (operands[0], E_DImode))
            return -1;
          x7 = XEXP (x5, 0);
          if (!rtx_equal_p (x7, operands[1]))
            return -1;
          x8 = XEXP (x5, 1);
          if (!rtx_equal_p (x8, operands[2])
              || !
#line 8772 "../../gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_match_ccmode (insn, CCmode)
   && ix86_binary_operator_ok (MINUS, SImode, operands, TARGET_APX_NDD)))
            return -1;
          return 452; /* *subsi_3_zext */

        default:
          return -1;
        }

    default:
      return -1;
    }
}

 int
recog_384 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12, x13, x14, x15, x16, x17;
  rtx x18, x19, x20, x21, x22, x23, x24, x25;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) != PLUS)
    return -1;
  x5 = XEXP (x4, 0);
  switch (GET_CODE (x5))
    {
    case LTU:
    case UNLT:
      x6 = XEXP (x5, 1);
      if (x6 != const_int_rtx[MAX_SAVED_CONST_INT + 0]
          || pattern815 (x2, 
E_CCCmode) != 0)
        return -1;
      x7 = XEXP (x3, 0);
      x8 = XEXP (x7, 0);
      switch (GET_CODE (x8))
        {
        case PLUS:
          x9 = XEXP (x8, 0);
          if (GET_CODE (x9) != PLUS)
            return -1;
          x10 = XEXP (x9, 0);
          switch (GET_CODE (x10))
            {
            case LTU:
            case UNLT:
              operands[5] = x10;
              x11 = XEXP (x10, 1);
              if (x11 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
                return -1;
              x12 = XVECEXP (x1, 0, 1);
              if (GET_CODE (x12) != SET)
                return -1;
              x13 = XEXP (x12, 1);
              if (GET_CODE (x13) != PLUS)
                return -1;
              x14 = XEXP (x13, 0);
              if (GET_CODE (x14) != PLUS)
                return -1;
              x15 = XEXP (x14, 0);
              switch (GET_CODE (x15))
                {
                case LTU:
                case UNLT:
                  if (!rtx_equal_p (x15, operands[5]))
                    return -1;
                  x16 = XEXP (x10, 0);
                  operands[3] = x16;
                  if (!flags_reg_operand (operands[3], E_VOIDmode))
                    return -1;
                  x17 = XEXP (x9, 1);
                  operands[1] = x17;
                  x18 = XEXP (x8, 1);
                  operands[2] = x18;
                  operands[4] = x5;
                  x19 = XEXP (x12, 0);
                  operands[0] = x19;
                  x20 = XEXP (x5, 0);
                  if (!rtx_equal_p (x20, operands[3]))
                    return -1;
                  x21 = XEXP (x14, 1);
                  if (!rtx_equal_p (x21, operands[1]))
                    return -1;
                  x22 = XEXP (x13, 1);
                  if (!rtx_equal_p (x22, operands[2]))
                    return -1;
                  switch (GET_CODE (operands[2]))
                    {
                    case REG:
                    case SUBREG:
                    case MEM:
                      x23 = XEXP (x4, 1);
                      if (GET_CODE (x23) != ZERO_EXTEND)
                        return -1;
                      x24 = XEXP (x23, 0);
                      if (!rtx_equal_p (x24, operands[2]))
                        return -1;
                      switch (GET_MODE (x7))
                        {
                        case E_DImode:
                          if (pattern1854 (x1, 
E_SImode, 
E_DImode) != 0
                              || !
#line 9056 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (PLUS, SImode, operands, TARGET_APX_NDD)))
                            return -1;
                          return 483; /* addcarrysi */

                        case E_TImode:
                          if (pattern1854 (x1, 
E_DImode, 
E_TImode) != 0
                              || !(
#line 9056 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (PLUS, DImode, operands, TARGET_APX_NDD)) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                            return -1;
                          return 484; /* addcarrydi */

                        default:
                          return -1;
                        }

                    case CONST_INT:
                    case CONST:
                    case LABEL_REF:
                    case SYMBOL_REF:
                      x23 = XEXP (x4, 1);
                      operands[6] = x23;
                      switch (GET_MODE (x7))
                        {
                        case E_DImode:
                          if (pattern1851 (x1, 
E_SImode, 
E_DImode) != 0
                              || !
#line 9242 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (PLUS, SImode, operands, TARGET_APX_NDD)
   && CONST_INT_P (operands[2])
   /* Check that operands[6] is operands[2] zero extended from
      SImode to DImode.  */
   && ((SImode == SImode || INTVAL (operands[2]) >= 0)
       ? (CONST_INT_P (operands[6])
	  && UINTVAL (operands[6]) == (UINTVAL (operands[2])
				       & GET_MODE_MASK (SImode)))
       : (CONST_WIDE_INT_P (operands[6])
	  && CONST_WIDE_INT_NUNITS (operands[6]) == 2
	  && ((unsigned HOST_WIDE_INT) CONST_WIDE_INT_ELT (operands[6], 0)
	      == UINTVAL (operands[2]))
	  && CONST_WIDE_INT_ELT (operands[6], 1) == 0))))
                            return -1;
                          return 485; /* *addcarrysi_1 */

                        case E_TImode:
                          if (pattern1851 (x1, 
E_DImode, 
E_TImode) != 0
                              || !(
#line 9242 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (PLUS, DImode, operands, TARGET_APX_NDD)
   && CONST_INT_P (operands[2])
   /* Check that operands[6] is operands[2] zero extended from
      DImode to TImode.  */
   && ((DImode == SImode || INTVAL (operands[2]) >= 0)
       ? (CONST_INT_P (operands[6])
	  && UINTVAL (operands[6]) == (UINTVAL (operands[2])
				       & GET_MODE_MASK (DImode)))
       : (CONST_WIDE_INT_P (operands[6])
	  && CONST_WIDE_INT_NUNITS (operands[6]) == 2
	  && ((unsigned HOST_WIDE_INT) CONST_WIDE_INT_ELT (operands[6], 0)
	      == UINTVAL (operands[2]))
	  && CONST_WIDE_INT_ELT (operands[6], 1) == 0))) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                            return -1;
                          return 486; /* *addcarrydi_1 */

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

        case REG:
        case SUBREG:
        case MEM:
          operands[1] = x8;
          if (GET_CODE (x5) == LTU)
            {
              res = recog_380 (x1, insn, pnum_clobbers);
              if (res >= 0)
                return res;
            }
          x12 = XVECEXP (x1, 0, 1);
          if (GET_CODE (x12) != SET)
            return -1;
          operands[4] = x5;
          x20 = XEXP (x5, 0);
          operands[3] = x20;
          if (!flags_reg_operand (operands[3], E_VOIDmode))
            return -1;
          x19 = XEXP (x12, 0);
          operands[0] = x19;
          x23 = XEXP (x4, 1);
          switch (GET_CODE (x23))
            {
            case ZERO_EXTEND:
              x13 = XEXP (x12, 1);
              if (pattern1674 (x13, 
MINUS) != 0)
                return -1;
              x24 = XEXP (x23, 0);
              operands[2] = x24;
              x14 = XEXP (x13, 0);
              x15 = XEXP (x14, 0);
              if (!rtx_equal_p (x15, operands[1]))
                return -1;
              x21 = XEXP (x14, 1);
              x25 = XEXP (x21, 0);
              if (!rtx_equal_p (x25, operands[3]))
                return -1;
              x22 = XEXP (x13, 1);
              if (!rtx_equal_p (x22, operands[2]))
                return -1;
              switch (GET_MODE (x7))
                {
                case E_DImode:
                  if (pattern1837 (x1, 
E_SImode, 
E_DImode) != 0
                      || !
#line 9590 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (MINUS, SImode, operands, TARGET_APX_NDD)))
                    return -1;
                  return 523; /* subborrowsi */

                case E_TImode:
                  if (pattern1837 (x1, 
E_DImode, 
E_TImode) != 0
                      || !(
#line 9590 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (MINUS, DImode, operands, TARGET_APX_NDD)) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                    return -1;
                  return 524; /* subborrowdi */

                default:
                  return -1;
                }

            case CONST_INT:
            case CONST_WIDE_INT:
              operands[6] = x23;
              x13 = XEXP (x12, 1);
              if (pattern1674 (x13, 
PLUS) != 0)
                return -1;
              x22 = XEXP (x13, 1);
              operands[2] = x22;
              x14 = XEXP (x13, 0);
              x15 = XEXP (x14, 0);
              if (!rtx_equal_p (x15, operands[1]))
                return -1;
              x21 = XEXP (x14, 1);
              x25 = XEXP (x21, 0);
              if (!rtx_equal_p (x25, operands[3]))
                return -1;
              switch (GET_MODE (x7))
                {
                case E_DImode:
                  if (pattern1838 (x1, 
E_SImode, 
E_DImode) != 0
                      || !
#line 9775 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (MINUS, SImode, operands, TARGET_APX_NDD)
   && CONST_INT_P (operands[2])
   /* Check that operands[6] is -operands[2] zero extended from
      SImode to DImode.  */
   && ((SImode == SImode || -INTVAL (operands[2]) >= 0)
       ? (CONST_INT_P (operands[6])
	  && (UINTVAL (operands[6])
	      == ((unsigned HOST_WIDE_INT) -INTVAL (operands[2])
		  & GET_MODE_MASK (SImode))))
       : (CONST_WIDE_INT_P (operands[6])
	  && CONST_WIDE_INT_NUNITS (operands[6]) == 2
	  && ((unsigned HOST_WIDE_INT) CONST_WIDE_INT_ELT (operands[6], 0)
	      == (unsigned HOST_WIDE_INT) -INTVAL (operands[2]))
	  && CONST_WIDE_INT_ELT (operands[6], 1) == 0))))
                    return -1;
                  return 525; /* *subborrowsi_1 */

                case E_TImode:
                  if (pattern1838 (x1, 
E_DImode, 
E_TImode) != 0
                      || !(
#line 9775 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (MINUS, DImode, operands, TARGET_APX_NDD)
   && CONST_INT_P (operands[2])
   /* Check that operands[6] is -operands[2] zero extended from
      DImode to TImode.  */
   && ((DImode == SImode || -INTVAL (operands[2]) >= 0)
       ? (CONST_INT_P (operands[6])
	  && (UINTVAL (operands[6])
	      == ((unsigned HOST_WIDE_INT) -INTVAL (operands[2])
		  & GET_MODE_MASK (DImode))))
       : (CONST_WIDE_INT_P (operands[6])
	  && CONST_WIDE_INT_NUNITS (operands[6]) == 2
	  && ((unsigned HOST_WIDE_INT) CONST_WIDE_INT_ELT (operands[6], 0)
	      == (unsigned HOST_WIDE_INT) -INTVAL (operands[2]))
	  && CONST_WIDE_INT_ELT (operands[6], 1) == 0))) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                    return -1;
                  return 526; /* *subborrowdi_1 */

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
recog_392 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  x4 = XEXP (x3, 0);
  x5 = XEXP (x4, 1);
  if (GET_CODE (x5) != CONST_INT)
    return -1;
  switch (pattern692 (x1))
    {
    case 0:
      switch (XWINT (x5, 0))
        {
        case 0L:
          x6 = XEXP (x3, 1);
          if (GET_CODE (x6) != PLUS)
            return -1;
          x7 = XEXP (x6, 1);
          if (x7 != const_int_rtx[MAX_SAVED_CONST_INT + -1])
            return -1;
          x8 = XEXP (x2, 0);
          operands[0] = x8;
          operands[1] = x4;
          x9 = XEXP (x4, 0);
          operands[2] = x9;
          switch (pattern1575 (x3))
            {
            case 0:
              if (!
#line 8750 "../../gcc/config/i386/i386.md"
(TARGET_CMOVE))
                return -1;
              return 449; /* *dec_cmovhi */

            case 1:
              if (!
#line 8750 "../../gcc/config/i386/i386.md"
(TARGET_CMOVE))
                return -1;
              return 450; /* *dec_cmovsi */

            case 2:
              if (!(
#line 8750 "../../gcc/config/i386/i386.md"
(TARGET_CMOVE) && 
#line 1164 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return -1;
              return 451; /* *dec_cmovdi */

            default:
              return -1;
            }

        case -1L:
          switch (pattern1184 (x2))
            {
            case 0:
              if (!(
#line 2419 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 1555 "../../gcc/config/i386/i386.md"
(TARGET_AVX512DQ)))
                return -1;
              return 2624; /* *kortest_cmpqi_jcc */

            case 1:
              if (!
#line 2419 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW))
                return -1;
              return 2625; /* *kortest_cmphi_jcc */

            case 2:
              if (!
#line 2419 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW))
                return -1;
              return 2626; /* *kortest_cmpsi_jcc */

            case 3:
              if (!(
#line 2419 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 1556 "../../gcc/config/i386/i386.md"
(TARGET_AVX512BW && TARGET_64BIT)))
                return -1;
              return 2627; /* *kortest_cmpdi_jcc */

            case 4:
              if (!(
#line 2455 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_CMOVE && !TARGET_PARTIAL_REG_STALL) && 
#line 1555 "../../gcc/config/i386/i386.md"
(TARGET_AVX512DQ)))
                return -1;
              return 2628; /* *kortest_cmpqi_movqicc */

            case 5:
              if (!
#line 2455 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_CMOVE && !TARGET_PARTIAL_REG_STALL))
                return -1;
              return 2629; /* *kortest_cmphi_movqicc */

            case 6:
              if (!(
#line 2455 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_CMOVE && !TARGET_PARTIAL_REG_STALL) && 
#line 1556 "../../gcc/config/i386/i386.md"
(TARGET_AVX512BW)))
                return -1;
              return 2630; /* *kortest_cmpsi_movqicc */

            case 7:
              if (!(
#line 2455 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_CMOVE && !TARGET_PARTIAL_REG_STALL) && 
#line 1556 "../../gcc/config/i386/i386.md"
(TARGET_AVX512BW && TARGET_64BIT)))
                return -1;
              return 2631; /* *kortest_cmpdi_movqicc */

            case 8:
              if (!(
#line 2498 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_CMOVE
   && !(MEM_P (operands[2]) && MEM_P (operands[3]))) && 
#line 1555 "../../gcc/config/i386/i386.md"
(TARGET_AVX512DQ)))
                return -1;
              return 2632; /* *kortest_cmpqi_movhicc */

            case 9:
              if (!
#line 2498 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_CMOVE
   && !(MEM_P (operands[2]) && MEM_P (operands[3]))))
                return -1;
              return 2635; /* *kortest_cmphi_movhicc */

            case 10:
              if (!(
#line 2498 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_CMOVE
   && !(MEM_P (operands[2]) && MEM_P (operands[3]))) && 
#line 1556 "../../gcc/config/i386/i386.md"
(TARGET_AVX512BW)))
                return -1;
              return 2638; /* *kortest_cmpsi_movhicc */

            case 11:
              if (!(
#line 2498 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_CMOVE
   && !(MEM_P (operands[2]) && MEM_P (operands[3]))) && 
#line 1556 "../../gcc/config/i386/i386.md"
(TARGET_AVX512BW && TARGET_64BIT)))
                return -1;
              return 2641; /* *kortest_cmpdi_movhicc */

            case 12:
              if (!(
#line 2498 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_CMOVE
   && !(MEM_P (operands[2]) && MEM_P (operands[3]))) && 
#line 1555 "../../gcc/config/i386/i386.md"
(TARGET_AVX512DQ)))
                return -1;
              return 2633; /* *kortest_cmpqi_movsicc */

            case 13:
              if (!
#line 2498 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_CMOVE
   && !(MEM_P (operands[2]) && MEM_P (operands[3]))))
                return -1;
              return 2636; /* *kortest_cmphi_movsicc */

            case 14:
              if (!(
#line 2498 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_CMOVE
   && !(MEM_P (operands[2]) && MEM_P (operands[3]))) && 
#line 1556 "../../gcc/config/i386/i386.md"
(TARGET_AVX512BW)))
                return -1;
              return 2639; /* *kortest_cmpsi_movsicc */

            case 15:
              if (!(
#line 2498 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_CMOVE
   && !(MEM_P (operands[2]) && MEM_P (operands[3]))) && 
#line 1556 "../../gcc/config/i386/i386.md"
(TARGET_AVX512BW && TARGET_64BIT)))
                return -1;
              return 2642; /* *kortest_cmpdi_movsicc */

            case 16:
              if (!(
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
(TARGET_64BIT))))
                return -1;
              return 2634; /* *kortest_cmpqi_movdicc */

            case 17:
              if (!(
#line 2498 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_CMOVE
   && !(MEM_P (operands[2]) && MEM_P (operands[3]))) && 
#line 1164 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return -1;
              return 2637; /* *kortest_cmphi_movdicc */

            case 18:
              if (!(
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
(TARGET_64BIT))))
                return -1;
              return 2640; /* *kortest_cmpsi_movdicc */

            case 19:
              if (!(
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
(TARGET_64BIT))))
                return -1;
              return 2643; /* *kortest_cmpdi_movdicc */

            default:
              return -1;
            }

        default:
          return -1;
        }

    case 1:
      x9 = XEXP (x4, 0);
      x10 = XEXP (x9, 1);
      if (x10 != const_int_rtx[MAX_SAVED_CONST_INT + 1]
          || XWINT (x5, 0) != 0L)
        return -1;
      switch (pattern1337 (x2))
        {
        case 0:
          x11 = XEXP (x9, 2);
          operands[2] = x11;
          switch (pattern1682 (x3))
            {
            case 0:
              if (
#line 19189 "../../gcc/config/i386/i386.md"
((TARGET_USE_BT || optimize_function_for_size_p (cfun))
   && (CONST_INT_P (operands[2])
       ? (INTVAL (operands[2]) < GET_MODE_BITSIZE (SImode)
	  && INTVAL (operands[2])
	       >= (optimize_function_for_size_p (cfun) ? 8 : 32))
       : !memory_operand (operands[1], SImode))
   && ix86_pre_reload_split ()))
                return 1424; /* *jcc_btsi */
              break;

            case 1:
              if ((
#line 19189 "../../gcc/config/i386/i386.md"
((TARGET_USE_BT || optimize_function_for_size_p (cfun))
   && (CONST_INT_P (operands[2])
       ? (INTVAL (operands[2]) < GET_MODE_BITSIZE (DImode)
	  && INTVAL (operands[2])
	       >= (optimize_function_for_size_p (cfun) ? 8 : 32))
       : !memory_operand (operands[1], DImode))
   && ix86_pre_reload_split ()) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return 1425; /* *jcc_btdi */
              break;

            default:
              break;
            }
          if (GET_CODE (x11) != SUBREG)
            return -1;
          switch (pattern1684 (x3))
            {
            case 0:
              if (!
#line 19265 "../../gcc/config/i386/i386.md"
((TARGET_USE_BT || optimize_function_for_size_p (cfun))
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (SImode)-1))
      == GET_MODE_BITSIZE (SImode)-1
   && ix86_pre_reload_split ()))
                return -1;
              return 1428; /* *jcc_btsi_mask_1 */

            case 1:
              if (!
#line 19265 "../../gcc/config/i386/i386.md"
((TARGET_USE_BT || optimize_function_for_size_p (cfun))
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (SImode)-1))
      == GET_MODE_BITSIZE (SImode)-1
   && ix86_pre_reload_split ()))
                return -1;
              return 1430; /* *jcc_btsi_mask_1 */

            case 2:
              if (!(
#line 19265 "../../gcc/config/i386/i386.md"
((TARGET_USE_BT || optimize_function_for_size_p (cfun))
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (SImode)-1))
      == GET_MODE_BITSIZE (SImode)-1
   && ix86_pre_reload_split ()) && 
#line 1164 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return -1;
              return 1432; /* *jcc_btsi_mask_1 */

            case 3:
              if (!(
#line 19265 "../../gcc/config/i386/i386.md"
((TARGET_USE_BT || optimize_function_for_size_p (cfun))
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (DImode)-1))
      == GET_MODE_BITSIZE (DImode)-1
   && ix86_pre_reload_split ()) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return -1;
              return 1429; /* *jcc_btdi_mask_1 */

            case 4:
              if (!(
#line 19265 "../../gcc/config/i386/i386.md"
((TARGET_USE_BT || optimize_function_for_size_p (cfun))
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (DImode)-1))
      == GET_MODE_BITSIZE (DImode)-1
   && ix86_pre_reload_split ()) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return -1;
              return 1431; /* *jcc_btdi_mask_1 */

            case 5:
              if (!(
#line 19265 "../../gcc/config/i386/i386.md"
((TARGET_USE_BT || optimize_function_for_size_p (cfun))
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (DImode)-1))
      == GET_MODE_BITSIZE (DImode)-1
   && ix86_pre_reload_split ()) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return -1;
              return 1433; /* *jcc_btdi_mask_1 */

            default:
              return -1;
            }

        case 1:
          if (!
#line 19228 "../../gcc/config/i386/i386.md"
((TARGET_USE_BT || optimize_function_for_size_p (cfun))
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (SImode)-1))
      == GET_MODE_BITSIZE (SImode)-1
   && ix86_pre_reload_split ()))
            return -1;
          return 1426; /* *jcc_btsi_mask */

        case 2:
          if (!(
#line 19228 "../../gcc/config/i386/i386.md"
((TARGET_USE_BT || optimize_function_for_size_p (cfun))
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (DImode)-1))
      == GET_MODE_BITSIZE (DImode)-1
   && ix86_pre_reload_split ()) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return -1;
          return 1427; /* *jcc_btdi_mask */

        default:
          return -1;
        }

    default:
      return -1;
    }
}

 int
recog_403 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7;
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
      x7 = XEXP (x6, 0);
      switch (pattern694 (x7))
        {
        case 0:
          if (!register_operand (operands[0], E_DImode)
              || GET_MODE (x4) != E_DImode
              || !general_operand (operands[1], E_DImode))
            return -1;
          if ((
#line 14600 "../../gcc/config/i386/i386.md"
(TARGET_CMOVE
   && ix86_pre_reload_split ()) && 
#line 1235 "../../gcc/config/i386/i386.md"
(!TARGET_64BIT)))
            return 995; /* *absdi2_doubleword */
          if (!(
#line 14687 "../../gcc/config/i386/i386.md"
(TARGET_CMOVE
   && (DImode != QImode || !TARGET_PARTIAL_REG_STALL)
   && ix86_pre_reload_split ()) && 
#line 1161 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return -1;
          return 1002; /* *absdi2_1 */

        case 1:
          if (!register_operand (operands[0], E_TImode)
              || GET_MODE (x4) != E_TImode
              || !general_operand (operands[1], E_TImode)
              || !(
#line 14600 "../../gcc/config/i386/i386.md"
(TARGET_CMOVE
   && ix86_pre_reload_split ()) && 
#line 1236 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return -1;
          return 996; /* *absti2_doubleword */

        case 2:
          if (!register_operand (operands[0], E_QImode)
              || GET_MODE (x4) != E_QImode
              || !general_operand (operands[1], E_QImode)
              || !
#line 14687 "../../gcc/config/i386/i386.md"
(TARGET_CMOVE
   && (QImode != QImode || !TARGET_PARTIAL_REG_STALL)
   && ix86_pre_reload_split ()))
            return -1;
          return 999; /* *absqi2_1 */

        case 3:
          if (!register_operand (operands[0], E_HImode)
              || GET_MODE (x4) != E_HImode
              || !general_operand (operands[1], E_HImode)
              || !
#line 14687 "../../gcc/config/i386/i386.md"
(TARGET_CMOVE
   && (HImode != QImode || !TARGET_PARTIAL_REG_STALL)
   && ix86_pre_reload_split ()))
            return -1;
          return 1000; /* *abshi2_1 */

        case 4:
          if (!register_operand (operands[0], E_SImode)
              || GET_MODE (x4) != E_SImode
              || !general_operand (operands[1], E_SImode)
              || !
#line 14687 "../../gcc/config/i386/i386.md"
(TARGET_CMOVE
   && (SImode != QImode || !TARGET_PARTIAL_REG_STALL)
   && ix86_pre_reload_split ()))
            return -1;
          return 1001; /* *abssi2_1 */

        case 5:
          if (!register_operand (operands[0], E_SFmode)
              || GET_MODE (x4) != E_SFmode
              || !register_operand (operands[1], E_SFmode)
              || !
#line 14810 "../../gcc/config/i386/i386.md"
(TARGET_80387 && !(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)))
            return -1;
          return 1010; /* *abssf2_i387_1 */

        case 6:
          if (!register_operand (operands[0], E_DFmode)
              || GET_MODE (x4) != E_DFmode
              || !register_operand (operands[1], E_DFmode)
              || !
#line 14810 "../../gcc/config/i386/i386.md"
(TARGET_80387 && !(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)))
            return -1;
          return 1012; /* *absdf2_i387_1 */

        case 7:
          if (!register_operand (operands[0], E_XFmode)
              || GET_MODE (x4) != E_XFmode
              || !register_operand (operands[1], E_XFmode)
              || !
#line 14810 "../../gcc/config/i386/i386.md"
(TARGET_80387 && !(SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH)))
            return -1;
          return 1014; /* *absxf2_i387_1 */

        default:
          return -1;
        }

    case USE:
      switch (pattern698 (x1, pnum_clobbers))
        {
        case 0:
          if (!
#line 14748 "../../gcc/config/i386/i386.md"
(TARGET_SSE))
            return -1;
          return 1007; /* *abstf2_1 */

        case 1:
          if (!
#line 14834 "../../gcc/config/i386/i386.md"
(TARGET_AVX512FP16))
            return -1;
          *pnum_clobbers = 1;
          return 1016; /* *abshf2_1 */

        case 2:
          if (!
#line 14850 "../../gcc/config/i386/i386.md"
(TARGET_80387 || (SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)))
            return -1;
          *pnum_clobbers = 1;
          return 1018; /* *abssf2_1 */

        case 3:
          if (!
#line 14850 "../../gcc/config/i386/i386.md"
(TARGET_80387 || (SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)))
            return -1;
          *pnum_clobbers = 1;
          return 1020; /* *absdf2_1 */

        case 4:
          if (!
#line 683 "../../gcc/config/i386/mmx.md"
(TARGET_MMX_WITH_SSE))
            return -1;
          return 2043; /* *mmx_absv2sf2 */

        case 5:
          if (!
#line 2239 "../../gcc/config/i386/mmx.md"
(TARGET_SSE))
            return -1;
          return 2089; /* *mmx_absv2bf */

        case 6:
          if (!(
#line 2239 "../../gcc/config/i386/mmx.md"
(TARGET_SSE) && 
#line 2224 "../../gcc/config/i386/mmx.md"
(TARGET_MMX_WITH_SSE)))
            return -1;
          return 2091; /* *mmx_absv4bf */

        case 7:
          if (!
#line 2239 "../../gcc/config/i386/mmx.md"
(TARGET_SSE))
            return -1;
          return 2093; /* *mmx_absv2hf */

        case 8:
          if (!(
#line 2239 "../../gcc/config/i386/mmx.md"
(TARGET_SSE) && 
#line 2225 "../../gcc/config/i386/mmx.md"
(TARGET_MMX_WITH_SSE)))
            return -1;
          return 2095; /* *mmx_absv4hf */

        case 9:
          if (!(
#line 2586 "../../gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 412 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 2647; /* *absv32bf2 */

        case 10:
          if (!(
#line 2586 "../../gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 413 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 2649; /* *absv16bf2 */

        case 11:
          if (!(
#line 2586 "../../gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 413 "../../gcc/config/i386/sse.md"
(TARGET_SSE2)))
            return -1;
          return 2651; /* *absv8bf2 */

        case 12:
          if (!(
#line 2586 "../../gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 414 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 2653; /* *absv32hf2 */

        case 13:
          if (!(
#line 2586 "../../gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 415 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 2655; /* *absv16hf2 */

        case 14:
          if (!(
#line 2586 "../../gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 415 "../../gcc/config/i386/sse.md"
(TARGET_SSE2)))
            return -1;
          return 2657; /* *absv8hf2 */

        case 15:
          if (!(
#line 2586 "../../gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 416 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 2659; /* *absv16sf2 */

        case 16:
          if (!(
#line 2586 "../../gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 416 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 2661; /* *absv8sf2 */

        case 17:
          if (!
#line 2586 "../../gcc/config/i386/sse.md"
(TARGET_SSE))
            return -1;
          return 2663; /* *absv4sf2 */

        case 18:
          if (!(
#line 2586 "../../gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 417 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 2665; /* *absv8df2 */

        case 19:
          if (!(
#line 2586 "../../gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 418 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 2667; /* *absv4df2 */

        case 20:
          if (!(
#line 2586 "../../gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 418 "../../gcc/config/i386/sse.md"
(TARGET_SSE2)))
            return -1;
          return 2669; /* *absv2df2 */

        default:
          return -1;
        }

    default:
      return -1;
    }
}

 int
recog_408 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 1);
  switch (XVECLEN (x2, 0))
    {
    case 1:
      x3 = XVECEXP (x1, 0, 0);
      x4 = XEXP (x3, 1);
      x5 = XEXP (x4, 0);
      x6 = XEXP (x5, 0);
      operands[1] = x6;
      x7 = XEXP (x4, 1);
      operands[2] = x7;
      switch (XINT (x2, 1))
        {
        case 37:
          x8 = XVECEXP (x2, 0, 0);
          if (x8 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
            return -1;
          switch (GET_MODE (operands[1]))
            {
            case E_SImode:
              if (!memory_operand (operands[1], E_SImode)
                  || !(
#line 20381 "../../gcc/config/i386/i386.md"
(!TARGET_X32 && !TARGET_INDIRECT_BRANCH_REGISTER) && 
#line 1403 "../../gcc/config/i386/i386.md"
(word_mode == SImode)))
                return -1;
              return 1481; /* *sibcall_value_memory */

            case E_DImode:
              if (!memory_operand (operands[1], E_DImode)
                  || !(
#line 20381 "../../gcc/config/i386/i386.md"
(!TARGET_X32 && !TARGET_INDIRECT_BRANCH_REGISTER) && 
#line 1403 "../../gcc/config/i386/i386.md"
(word_mode == DImode)))
                return -1;
              return 1482; /* *sibcall_value_memory */

            default:
              return -1;
            }

        case 21:
          x8 = XVECEXP (x2, 0, 0);
          if (GET_CODE (x8) != REG
              || REGNO (x8) != 7
              || !constant_call_address_operand (operands[1], E_VOIDmode))
            return -1;
          switch (GET_MODE (operands[0]))
            {
            case E_SImode:
              if (pattern1528 (x1, 
E_SImode) != 0
                  || !(
#line 22950 "../../gcc/config/i386/i386.md"
(TARGET_64BIT) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode)))
                return -1;
              return 1648; /* *tls_local_dynamic_base_64_si */

            case E_DImode:
              if (pattern1528 (x1, 
E_DImode) != 0
                  || !(
#line 22950 "../../gcc/config/i386/i386.md"
(TARGET_64BIT) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode)))
                return -1;
              return 1649; /* *tls_local_dynamic_base_64_di */

            default:
              return -1;
            }

        default:
          return -1;
        }

    case 2:
      if (XINT (x2, 1) != 20)
        return -1;
      x9 = XVECEXP (x2, 0, 1);
      if (GET_CODE (x9) != REG
          || REGNO (x9) != 7)
        return -1;
      x3 = XVECEXP (x1, 0, 0);
      x4 = XEXP (x3, 1);
      x5 = XEXP (x4, 0);
      x6 = XEXP (x5, 0);
      operands[2] = x6;
      if (!constant_call_address_operand (operands[2], E_VOIDmode))
        return -1;
      x7 = XEXP (x4, 1);
      operands[3] = x7;
      x8 = XVECEXP (x2, 0, 0);
      operands[1] = x8;
      if (!tls_symbolic_operand (operands[1], E_VOIDmode))
        return -1;
      switch (GET_MODE (operands[0]))
        {
        case E_SImode:
          if (pattern1629 (x1, 
E_SImode) != 0
              || !(
#line 22835 "../../gcc/config/i386/i386.md"
(TARGET_64BIT) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode)))
            return -1;
          return 1644; /* *tls_global_dynamic_64_si */

        case E_DImode:
          if (pattern1629 (x1, 
E_DImode) != 0
              || !(
#line 22835 "../../gcc/config/i386/i386.md"
(TARGET_64BIT) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode)))
            return -1;
          return 1645; /* *tls_global_dynamic_64_di */

        default:
          return -1;
        }

    default:
      return -1;
    }
}

 int
recog_415 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 0);
  operands[0] = x3;
  x4 = XEXP (x2, 1);
  switch (XVECLEN (x4, 0))
    {
    case 1:
      switch (XINT (x4, 1))
        {
        case 2:
          x5 = XVECEXP (x1, 0, 1);
          if (pattern227 (x5, 
E_CCmode, 
17) != 0)
            return -1;
          x6 = XVECEXP (x4, 0, 0);
          operands[1] = x6;
          switch (GET_MODE (operands[0]))
            {
            case E_SImode:
              if (!register_operand (operands[0], E_SImode)
                  || GET_MODE (x4) != E_SImode
                  || !register_operand (operands[1], E_SImode)
                  || !(
#line 27055 "../../gcc/config/i386/i386.md"
(ix86_target_stack_probe ()) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode)))
                return -1;
              return 1853; /* allocate_stack_worker_probe_si */

            case E_DImode:
              if (!register_operand (operands[0], E_DImode)
                  || GET_MODE (x4) != E_DImode
                  || !register_operand (operands[1], E_DImode)
                  || !(
#line 27055 "../../gcc/config/i386/i386.md"
(ix86_target_stack_probe ()) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode)))
                return -1;
              return 1854; /* allocate_stack_worker_probe_di */

            default:
              return -1;
            }

        case 11:
          if (pattern705 (x1, 
11) != 0
              || !
#line 28939 "../../gcc/config/i386/i386.md"
(TARGET_64BIT))
            return -1;
          return 1890; /* rdpmc_rex64 */

        case 9:
          if (pattern706 (x1, 
E_DImode, 
9) != 0
              || !
#line 28957 "../../gcc/config/i386/i386.md"
(TARGET_64BIT))
            return -1;
          return 1892; /* rdtsc_rex64 */

        case 10:
          if (pattern706 (x1, 
E_SImode, 
10) != 0
              || !
#line 28967 "../../gcc/config/i386/i386.md"
(!TARGET_64BIT))
            return -1;
          return 1893; /* rdtscp */

        case 36:
          if (pattern705 (x1, 
36) != 0
              || !
#line 29181 "../../gcc/config/i386/i386.md"
(TARGET_64BIT && TARGET_XSAVE))
            return -1;
          return 1920; /* xgetbv_rex64 */

        case 44:
          switch (pattern707 (x1, 
44))
            {
            case 0:
              if (!
#line 29342 "../../gcc/config/i386/i386.md"
(TARGET_RDRND))
                return -1;
              return 1943; /* rdrandhi */

            case 1:
              if (!
#line 29342 "../../gcc/config/i386/i386.md"
(TARGET_RDRND))
                return -1;
              return 1944; /* rdrandsi */

            case 2:
              if (!(
#line 29342 "../../gcc/config/i386/i386.md"
(TARGET_RDRND) && 
#line 1164 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return -1;
              return 1945; /* rdranddi */

            default:
              return -1;
            }

        case 45:
          switch (pattern707 (x1, 
45))
            {
            case 0:
              if (!
#line 29352 "../../gcc/config/i386/i386.md"
(TARGET_RDSEED))
                return -1;
              return 1946; /* rdseedhi */

            case 1:
              if (!
#line 29352 "../../gcc/config/i386/i386.md"
(TARGET_RDSEED))
                return -1;
              return 1947; /* rdseedsi */

            case 2:
              if (!(
#line 29352 "../../gcc/config/i386/i386.md"
(TARGET_RDSEED) && 
#line 1164 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return -1;
              return 1948; /* rdseeddi */

            default:
              return -1;
            }

        case 56:
          if (GET_MODE (x4) != E_SImode)
            return -1;
          x5 = XVECEXP (x1, 0, 1);
          if (GET_CODE (x5) != SET)
            return -1;
          x7 = XEXP (x5, 1);
          if (x7 != const_int_rtx[MAX_SAVED_CONST_INT + 0]
              || !register_operand (operands[0], E_SImode))
            return -1;
          x6 = XVECEXP (x4, 0, 0);
          operands[2] = x6;
          if (!register_operand (operands[2], E_SImode))
            return -1;
          x8 = XEXP (x5, 0);
          operands[1] = x8;
          if (!register_operand (operands[1], E_SImode)
              || !
#line 29595 "../../gcc/config/i386/i386.md"
(TARGET_PKU))
            return -1;
          return 1974; /* *rdpkru */

        default:
          return -1;
        }

    case 2:
      switch (XINT (x4, 1))
        {
        case 3:
          x5 = XVECEXP (x1, 0, 1);
          if (pattern227 (x5, 
E_CCmode, 
17) != 0)
            return -1;
          x6 = XVECEXP (x4, 0, 0);
          operands[1] = x6;
          x9 = XVECEXP (x4, 0, 1);
          operands[2] = x9;
          switch (GET_MODE (operands[0]))
            {
            case E_SImode:
              if (pattern1438 (x4, 
E_SImode) != 0
                  || !
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode))
                return -1;
              return 1859; /* probe_stack_range_si */

            case E_DImode:
              if (pattern1438 (x4, 
E_DImode) != 0
                  || !
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode))
                return -1;
              return 1860; /* probe_stack_range_di */

            default:
              return -1;
            }

        case 99:
          if (pattern708 (x1, 
99) != 0
              || !
#line 31348 "../../gcc/config/i386/sse.md"
(TARGET_KL))
            return -1;
          return 10359; /* aesdec128klu8 */

        case 101:
          if (pattern708 (x1, 
101) != 0
              || !
#line 31348 "../../gcc/config/i386/sse.md"
(TARGET_KL))
            return -1;
          return 10360; /* aesdec256klu8 */

        case 100:
          if (pattern708 (x1, 
100) != 0
              || !
#line 31348 "../../gcc/config/i386/sse.md"
(TARGET_KL))
            return -1;
          return 10361; /* aesenc128klu8 */

        case 102:
          if (pattern708 (x1, 
102) != 0
              || !
#line 31348 "../../gcc/config/i386/sse.md"
(TARGET_KL))
            return -1;
          return 10362; /* aesenc256klu8 */

        case 110:
          x5 = XVECEXP (x1, 0, 1);
          if (GET_CODE (x5) != SET)
            return -1;
          x6 = XVECEXP (x4, 0, 0);
          operands[1] = x6;
          x9 = XVECEXP (x4, 0, 1);
          operands[3] = x9;
          if (!const_int_operand (operands[3], E_SImode))
            return -1;
          x8 = XEXP (x5, 0);
          if (!rtx_equal_p (x8, operands[1]))
            return -1;
          x7 = XEXP (x5, 1);
          switch (GET_CODE (x7))
            {
            case PLUS:
              if (pnum_clobbers == NULL)
                return -1;
              x10 = XEXP (x7, 1);
              operands[2] = x10;
              x11 = XEXP (x7, 0);
              if (!rtx_equal_p (x11, operands[1]))
                return -1;
              switch (GET_MODE (operands[0]))
                {
                case E_QImode:
                  if (pattern1570 (x1, 
E_QImode) != 0
                      || !
#line 703 "../../gcc/config/i386/sync.md"
(TARGET_XADD))
                    return -1;
                  *pnum_clobbers = 1;
                  return 11027; /* atomic_fetch_addqi */

                case E_HImode:
                  if (pattern1570 (x1, 
E_HImode) != 0
                      || !
#line 703 "../../gcc/config/i386/sync.md"
(TARGET_XADD))
                    return -1;
                  *pnum_clobbers = 1;
                  return 11028; /* atomic_fetch_addhi */

                case E_SImode:
                  if (pattern1570 (x1, 
E_SImode) != 0
                      || !
#line 703 "../../gcc/config/i386/sync.md"
(TARGET_XADD))
                    return -1;
                  *pnum_clobbers = 1;
                  return 11029; /* atomic_fetch_addsi */

                case E_DImode:
                  if (pattern1570 (x1, 
E_DImode) != 0
                      || !(
#line 703 "../../gcc/config/i386/sync.md"
(TARGET_XADD) && 
#line 1161 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                    return -1;
                  *pnum_clobbers = 1;
                  return 11030; /* atomic_fetch_adddi */

                default:
                  return -1;
                }

            case REG:
            case SUBREG:
              operands[2] = x7;
              switch (GET_MODE (operands[0]))
                {
                case E_QImode:
                  if (pattern1499 (x4, 
E_QImode) != 0)
                    return -1;
                  return 11035; /* atomic_exchangeqi */

                case E_HImode:
                  if (pattern1499 (x4, 
E_HImode) != 0)
                    return -1;
                  return 11036; /* atomic_exchangehi */

                case E_SImode:
                  if (pattern1499 (x4, 
E_SImode) != 0)
                    return -1;
                  return 11037; /* atomic_exchangesi */

                case E_DImode:
                  if (pattern1499 (x4, 
E_DImode) != 0
                      || !
#line 1161 "../../gcc/config/i386/i386.md"
(TARGET_64BIT))
                    return -1;
                  return 11038; /* atomic_exchangedi */

                default:
                  return -1;
                }

            default:
              return -1;
            }

        case 111:
          x5 = XVECEXP (x1, 0, 1);
          if (pattern227 (x5, 
E_CCmode, 
17) != 0)
            return -1;
          x9 = XVECEXP (x4, 0, 1);
          operands[2] = x9;
          if (!const_int_operand (operands[2], E_SImode))
            return -1;
          x6 = XVECEXP (x4, 0, 0);
          switch (GET_CODE (x6))
            {
            case PLUS:
              switch (pattern1440 (x4))
                {
                case 0:
                  return 11047; /* atomic_addqi */

                case 1:
                  return 11048; /* atomic_addhi */

                case 2:
                  return 11049; /* atomic_addsi */

                case 3:
                  if (!
#line 1161 "../../gcc/config/i386/i386.md"
(TARGET_64BIT))
                    return -1;
                  return 11050; /* atomic_adddi */

                default:
                  return -1;
                }

            case MINUS:
              switch (pattern1440 (x4))
                {
                case 0:
                  return 11051; /* atomic_subqi */

                case 1:
                  return 11052; /* atomic_subhi */

                case 2:
                  return 11053; /* atomic_subsi */

                case 3:
                  if (!
#line 1161 "../../gcc/config/i386/i386.md"
(TARGET_64BIT))
                    return -1;
                  return 11054; /* atomic_subdi */

                default:
                  return -1;
                }

            case AND:
              switch (pattern1440 (x4))
                {
                case 0:
                  return 11055; /* atomic_andqi */

                case 1:
                  return 11058; /* atomic_andhi */

                case 2:
                  return 11061; /* atomic_andsi */

                case 3:
                  if (!
#line 1161 "../../gcc/config/i386/i386.md"
(TARGET_64BIT))
                    return -1;
                  return 11064; /* atomic_anddi */

                default:
                  return -1;
                }

            case IOR:
              switch (pattern1440 (x4))
                {
                case 0:
                  return 11056; /* atomic_orqi */

                case 1:
                  return 11059; /* atomic_orhi */

                case 2:
                  return 11062; /* atomic_orsi */

                case 3:
                  if (!
#line 1161 "../../gcc/config/i386/i386.md"
(TARGET_64BIT))
                    return -1;
                  return 11065; /* atomic_ordi */

                default:
                  return -1;
                }

            case XOR:
              switch (pattern1440 (x4))
                {
                case 0:
                  return 11057; /* atomic_xorqi */

                case 1:
                  return 11060; /* atomic_xorhi */

                case 2:
                  return 11063; /* atomic_xorsi */

                case 3:
                  if (!
#line 1161 "../../gcc/config/i386/i386.md"
(TARGET_64BIT))
                    return -1;
                  return 11066; /* atomic_xordi */

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
recog_436 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  int res ATTRIBUTE_UNUSED;
  switch (XVECLEN (x1, 0))
    {
    case 1:
      switch (XINT (x1, 1))
        {
        case 1:
          x2 = XVECEXP (x1, 0, 0);
          if (x2 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
            return -1;
          return 1486; /* blockage */

        case 5:
          x2 = XVECEXP (x1, 0, 0);
          operands[0] = x2;
          return 1488; /* prologue_use */

        case 8:
          x2 = XVECEXP (x1, 0, 0);
          operands[0] = x2;
          if (!const_int_operand (operands[0], E_VOIDmode)
              || !
#line 20703 "../../gcc/config/i386/i386.md"
(reload_completed))
            return -1;
          return 1496; /* nops */

        case 6:
          x2 = XVECEXP (x1, 0, 0);
          operands[0] = x2;
          if (!const_int_operand (operands[0], E_SImode))
            return -1;
          return 1506; /* split_stack_return */

        case 7:
          x2 = XVECEXP (x1, 0, 0);
          if (x2 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
            return -1;
          return 1754; /* cld */

        case 0:
          x2 = XVECEXP (x1, 0, 0);
          if (x2 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
            return -1;
          return 1880; /* ud2 */

        case 21:
          x2 = XVECEXP (x1, 0, 0);
          operands[0] = x2;
          if (!memory_operand (operands[0], E_BLKmode)
              || !
#line 29014 "../../gcc/config/i386/i386.md"
(TARGET_FXSR))
            return -1;
          return 1897; /* fxrstor */

        case 23:
          x2 = XVECEXP (x1, 0, 0);
          operands[0] = x2;
          if (!memory_operand (operands[0], E_BLKmode)
              || !
#line 29024 "../../gcc/config/i386/i386.md"
(TARGET_64BIT && TARGET_FXSR))
            return -1;
          return 1898; /* fxrstor64 */

        case 41:
          if (pnum_clobbers == NULL)
            return -1;
          x2 = XVECEXP (x1, 0, 0);
          operands[0] = x2;
          if (!memory_operand (operands[0], E_BLKmode)
              || !
#line 29222 "../../gcc/config/i386/i386.md"
(TARGET_80387))
            return -1;
          *pnum_clobbers = 8;
          return 1922; /* fldenv */

        case 43:
          x2 = XVECEXP (x1, 0, 0);
          if (x2 != const_int_rtx[MAX_SAVED_CONST_INT + 0]
              || !
#line 29241 "../../gcc/config/i386/i386.md"
(TARGET_80387))
            return -1;
          return 1924; /* fnclex */

        case 12:
          x2 = XVECEXP (x1, 0, 0);
          operands[0] = x2;
          switch (GET_MODE (operands[0]))
            {
            case E_SImode:
              if (!register_operand (operands[0], E_SImode)
                  || !(
#line 29256 "../../gcc/config/i386/i386.md"
(TARGET_LWP) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode)))
                return -1;
              return 1925; /* lwp_llwpcbsi */

            case E_DImode:
              if (!register_operand (operands[0], E_DImode)
                  || !(
#line 29256 "../../gcc/config/i386/i386.md"
(TARGET_LWP) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode)))
                return -1;
              return 1926; /* lwp_llwpcbdi */

            default:
              return -1;
            }

        case 18:
          x2 = XVECEXP (x1, 0, 0);
          operands[0] = x2;
          switch (GET_MODE (operands[0]))
            {
            case E_SImode:
              if (!register_operand (operands[0], E_SImode)
                  || !
#line 29322 "../../gcc/config/i386/i386.md"
(TARGET_64BIT && TARGET_FSGSBASE))
                return -1;
              return 1937; /* wrfsbasesi */

            case E_DImode:
              if (!register_operand (operands[0], E_DImode)
                  || !(
#line 29322 "../../gcc/config/i386/i386.md"
(TARGET_64BIT && TARGET_FSGSBASE) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return -1;
              return 1939; /* wrfsbasedi */

            default:
              return -1;
            }

        case 19:
          x2 = XVECEXP (x1, 0, 0);
          operands[0] = x2;
          switch (GET_MODE (operands[0]))
            {
            case E_SImode:
              if (!register_operand (operands[0], E_SImode)
                  || !
#line 29322 "../../gcc/config/i386/i386.md"
(TARGET_64BIT && TARGET_FSGSBASE))
                return -1;
              return 1938; /* wrgsbasesi */

            case E_DImode:
              if (!register_operand (operands[0], E_DImode)
                  || !(
#line 29322 "../../gcc/config/i386/i386.md"
(TARGET_64BIT && TARGET_FSGSBASE) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return -1;
              return 1940; /* wrgsbasedi */

            default:
              return -1;
            }

        case 78:
          x2 = XVECEXP (x1, 0, 0);
          operands[0] = x2;
          switch (GET_MODE (operands[0]))
            {
            case E_SImode:
              if (!nonimmediate_operand (operands[0], E_SImode)
                  || !
#line 29331 "../../gcc/config/i386/i386.md"
(TARGET_PTWRITE))
                return -1;
              return 1941; /* ptwritesi */

            case E_DImode:
              if (!nonimmediate_operand (operands[0], E_DImode)
                  || !(
#line 29331 "../../gcc/config/i386/i386.md"
(TARGET_PTWRITE) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return -1;
              return 1942; /* ptwritedi */

            default:
              return -1;
            }

        case 60:
          x2 = XVECEXP (x1, 0, 0);
          operands[0] = x2;
          switch (GET_MODE (operands[0]))
            {
            case E_SImode:
              if (!register_operand (operands[0], E_SImode)
                  || !
#line 29389 "../../gcc/config/i386/i386.md"
(TARGET_SHSTK || (flag_cf_protection & CF_RETURN)))
                return -1;
              return 1952; /* incsspsi */

            case E_DImode:
              if (!register_operand (operands[0], E_DImode)
                  || !(
#line 29389 "../../gcc/config/i386/i386.md"
(TARGET_SHSTK || (flag_cf_protection & CF_RETURN)) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return -1;
              return 1953; /* incsspdi */

            default:
              return -1;
            }

        case 61:
          x2 = XVECEXP (x1, 0, 0);
          if (x2 != const_int_rtx[MAX_SAVED_CONST_INT + 0]
              || !
#line 29396 "../../gcc/config/i386/i386.md"
(TARGET_SHSTK))
            return -1;
          return 1954; /* saveprevssp */

        case 62:
          x2 = XVECEXP (x1, 0, 0);
          operands[0] = x2;
          if (!memory_operand (operands[0], E_DImode)
              || !
#line 29404 "../../gcc/config/i386/i386.md"
(TARGET_SHSTK))
            return -1;
          return 1955; /* rstorssp */

        case 65:
          x2 = XVECEXP (x1, 0, 0);
          if (x2 != const_int_rtx[MAX_SAVED_CONST_INT + 0]
              || !
#line 29429 "../../gcc/config/i386/i386.md"
(TARGET_SHSTK))
            return -1;
          return 1960; /* setssbsy */

        case 66:
          x2 = XVECEXP (x1, 0, 0);
          operands[0] = x2;
          if (!memory_operand (operands[0], E_DImode)
              || !
#line 29437 "../../gcc/config/i386/i386.md"
(TARGET_SHSTK))
            return -1;
          return 1961; /* clrssbsy */

        case 58:
          x2 = XVECEXP (x1, 0, 0);
          if (x2 != const_int_rtx[MAX_SAVED_CONST_INT + 0]
              || !
#line 29444 "../../gcc/config/i386/i386.md"
((flag_cf_protection & CF_BRANCH)))
            return -1;
          return 1962; /* nop_endbr */

        case 47:
          x2 = XVECEXP (x1, 0, 0);
          if (x2 != const_int_rtx[MAX_SAVED_CONST_INT + 0]
              || !
#line 29490 "../../gcc/config/i386/i386.md"
(TARGET_RTM))
            return -1;
          return 1964; /* xend */

        case 48:
          x2 = XVECEXP (x1, 0, 0);
          operands[0] = x2;
          if (!const_0_to_255_operand (operands[0], E_SImode)
              || !
#line 29498 "../../gcc/config/i386/i386.md"
(TARGET_RTM))
            return -1;
          return 1965; /* xabort */

        case 51:
          x2 = XVECEXP (x1, 0, 0);
          operands[0] = x2;
          if (!address_operand (operands[0], E_VOIDmode)
              || !
#line 29526 "../../gcc/config/i386/i386.md"
(TARGET_CLWB))
            return -1;
          return 1967; /* clwb */

        case 52:
          x2 = XVECEXP (x1, 0, 0);
          operands[0] = x2;
          if (!address_operand (operands[0], E_VOIDmode)
              || !
#line 29535 "../../gcc/config/i386/i386.md"
(TARGET_CLFLUSHOPT))
            return -1;
          return 1968; /* clflushopt */

        case 55:
          x2 = XVECEXP (x1, 0, 0);
          operands[0] = x2;
          switch (GET_MODE (operands[0]))
            {
            case E_SImode:
              if (!register_operand (operands[0], E_SImode)
                  || !(
#line 29571 "../../gcc/config/i386/i386.md"
(TARGET_CLZERO) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode)))
                return -1;
              return 1972; /* clzero_si */

            case E_DImode:
              if (!register_operand (operands[0], E_DImode)
                  || !(
#line 29571 "../../gcc/config/i386/i386.md"
(TARGET_CLZERO) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode)))
                return -1;
              return 1973; /* clzero_di */

            default:
              return -1;
            }

        case 38:
          x2 = XVECEXP (x1, 0, 0);
          if (x2 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
            return -1;
          return 1978; /* wbinvd */

        case 39:
          x2 = XVECEXP (x1, 0, 0);
          if (x2 != const_int_rtx[MAX_SAVED_CONST_INT + 0]
              || !
#line 29642 "../../gcc/config/i386/i386.md"
(TARGET_WBNOINVD))
            return -1;
          return 1979; /* wbnoinvd */

        case 67:
          x2 = XVECEXP (x1, 0, 0);
          if (x2 != const_int_rtx[MAX_SAVED_CONST_INT + 0]
              || !
#line 29670 "../../gcc/config/i386/i386.md"
(TARGET_TSXLDTRK))
            return -1;
          return 1984; /* xsusldtrk */

        case 68:
          x2 = XVECEXP (x1, 0, 0);
          if (x2 != const_int_rtx[MAX_SAVED_CONST_INT + 0]
              || !
#line 29670 "../../gcc/config/i386/i386.md"
(TARGET_TSXLDTRK))
            return -1;
          return 1985; /* xresldtrk */

        case 72:
          x2 = XVECEXP (x1, 0, 0);
          if (x2 != const_int_rtx[MAX_SAVED_CONST_INT + 0]
              || !
#line 29695 "../../gcc/config/i386/i386.md"
(TARGET_UINTR && TARGET_64BIT))
            return -1;
          return 1990; /* clui */

        case 73:
          x2 = XVECEXP (x1, 0, 0);
          if (x2 != const_int_rtx[MAX_SAVED_CONST_INT + 0]
              || !
#line 29695 "../../gcc/config/i386/i386.md"
(TARGET_UINTR && TARGET_64BIT))
            return -1;
          return 1991; /* stui */

        case 75:
          x2 = XVECEXP (x1, 0, 0);
          operands[0] = x2;
          if (!register_operand (operands[0], E_DImode)
              || !
#line 29712 "../../gcc/config/i386/i386.md"
(TARGET_UINTR && TARGET_64BIT))
            return -1;
          return 1993; /* senduipi */

        case 70:
          x2 = XVECEXP (x1, 0, 0);
          operands[0] = x2;
          switch (GET_MODE (operands[0]))
            {
            case E_SImode:
              if (!register_operand (operands[0], E_SImode)
                  || !(
#line 29741 "../../gcc/config/i386/i386.md"
(TARGET_WAITPKG) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode)))
                return -1;
              return 1996; /* umonitor_si */

            case E_DImode:
              if (!register_operand (operands[0], E_DImode)
                  || !(
#line 29741 "../../gcc/config/i386/i386.md"
(TARGET_WAITPKG) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode)))
                return -1;
              return 1997; /* umonitor_di */

            default:
              return -1;
            }

        case 76:
          x2 = XVECEXP (x1, 0, 0);
          operands[0] = x2;
          if (!address_operand (operands[0], E_VOIDmode)
              || !
#line 29768 "../../gcc/config/i386/i386.md"
(TARGET_CLDEMOTE))
            return -1;
          return 2000; /* cldemote */

        case 77:
          x2 = XVECEXP (x1, 0, 0);
          if (x2 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
            return -1;
          return 2001; /* speculation_barrier */

        case 81:
          x2 = XVECEXP (x1, 0, 0);
          if (x2 != const_int_rtx[MAX_SAVED_CONST_INT + 0]
              || !
#line 29782 "../../gcc/config/i386/i386.md"
(TARGET_SERIALIZE))
            return -1;
          return 2002; /* serialize */

        case 83:
          x2 = XVECEXP (x1, 0, 0);
          operands[0] = x2;
          if (!register_operand (operands[0], E_SImode)
              || !
#line 29804 "../../gcc/config/i386/i386.md"
(TARGET_HRESET))
            return -1;
          return 2004; /* hreset */

        case 87:
          x2 = XVECEXP (x1, 0, 0);
          operands[0] = x2;
          if (!memory_operand (operands[0], E_BLKmode)
              || !
#line 29922 "../../gcc/config/i386/i386.md"
(TARGET_AMX_TILE))
            return -1;
          return 2007; /* ldtilecfg */

        case 90:
          if (pnum_clobbers == NULL)
            return -1;
          x2 = XVECEXP (x1, 0, 0);
          if (x2 != const_int_rtx[MAX_SAVED_CONST_INT + 0]
              || !
#line 6868 "../../gcc/config/i386/mmx.md"
(TARGET_MMX))
            return -1;
          *pnum_clobbers = 16;
          return 2381; /* *mmx_emms */

        case 91:
          if (pnum_clobbers == NULL)
            return -1;
          x2 = XVECEXP (x1, 0, 0);
          if (x2 != const_int_rtx[MAX_SAVED_CONST_INT + 0]
              || !
#line 6869 "../../gcc/config/i386/mmx.md"
(TARGET_3DNOW))
            return -1;
          *pnum_clobbers = 16;
          return 2382; /* *mmx_femms */

        case 92:
          x2 = XVECEXP (x1, 0, 0);
          operands[0] = x2;
          if (!memory_operand (operands[0], E_SImode)
              || !
#line 22483 "../../gcc/config/i386/sse.md"
(TARGET_SSE))
            return -1;
          return 8578; /* sse_ldmxcsr */

        case 94:
          x2 = XVECEXP (x1, 0, 0);
          operands[0] = x2;
          if (!address_operand (operands[0], E_VOIDmode)
              || !
#line 22507 "../../gcc/config/i386/sse.md"
(TARGET_SSE2))
            return -1;
          return 8580; /* sse2_clflush */

        default:
          return -1;
        }

    case 2:
      x2 = XVECEXP (x1, 0, 0);
      operands[0] = x2;
      x3 = XVECEXP (x1, 0, 1);
      operands[1] = x3;
      switch (XINT (x1, 1))
        {
        case 4:
          return 1497; /* max_skip_align */

        case 84:
          if (!local_func_symbolic_operand (operands[0], E_VOIDmode)
              || !const_int_operand (operands[1], E_SImode)
              || !
#line 28861 "../../gcc/config/i386/i386.md"
(TARGET_PREFETCHI && TARGET_64BIT))
            return -1;
          return 1883; /* prefetchi */

        case 25:
          if (GET_MODE (x1) != E_BLKmode
              || !memory_operand (operands[0], E_BLKmode)
              || !register_operand (operands[1], E_DImode)
              || !
#line 29113 "../../gcc/config/i386/i386.md"
(!TARGET_64BIT && TARGET_XSAVE))
            return -1;
          return 1911; /* xrstor */

        case 31:
          if (GET_MODE (x1) != E_BLKmode
              || !memory_operand (operands[0], E_BLKmode)
              || !register_operand (operands[1], E_DImode)
              || !(
#line 29113 "../../gcc/config/i386/i386.md"
(!TARGET_64BIT && TARGET_XSAVE) && 
#line 29056 "../../gcc/config/i386/i386.md"
(TARGET_XSAVES)))
            return -1;
          return 1912; /* xrstors */

        case 37:
          if (GET_MODE (x1) != E_SImode
              || !register_operand (operands[0], E_SImode)
              || !register_operand (operands[1], E_DImode)
              || !
#line 29153 "../../gcc/config/i386/i386.md"
(!TARGET_64BIT && TARGET_XSAVE))
            return -1;
          return 1917; /* xsetbv */

        case 63:
          switch (pattern394 ())
            {
            case 0:
              if (!
#line 29413 "../../gcc/config/i386/i386.md"
(TARGET_SHSTK))
                return -1;
              return 1956; /* wrsssi */

            case 1:
              if (!(
#line 29413 "../../gcc/config/i386/i386.md"
(TARGET_SHSTK) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return -1;
              return 1957; /* wrssdi */

            default:
              return -1;
            }

        case 64:
          switch (pattern394 ())
            {
            case 0:
              if (!
#line 29422 "../../gcc/config/i386/i386.md"
(TARGET_SHSTK))
                return -1;
              return 1958; /* wrusssi */

            case 1:
              if (!(
#line 29422 "../../gcc/config/i386/i386.md"
(TARGET_SHSTK) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return -1;
              return 1959; /* wrussdi */

            default:
              return -1;
            }

        case 82:
          if (!const_int_operand (operands[0], E_VOIDmode)
              || !const_int_operand (operands[1], E_VOIDmode))
            return -1;
          return 2003; /* patchable_area */

        case 86:
          if (!x86_64_szext_nonmemory_operand (operands[0], E_DImode)
              || !register_operand (operands[1], E_DImode)
              || !
#line 29914 "../../gcc/config/i386/i386.md"
(TARGET_USER_MSR && TARGET_64BIT))
            return -1;
          return 2006; /* uwrmsr */

        case 96:
          if (!register_operand (operands[0], E_SImode)
              || !register_operand (operands[1], E_SImode)
              || !
#line 22520 "../../gcc/config/i386/sse.md"
(TARGET_MWAIT))
            return -1;
          return 8581; /* sse3_mwait */

        default:
          return -1;
        }

    case 3:
      x2 = XVECEXP (x1, 0, 0);
      operands[0] = x2;
      x3 = XVECEXP (x1, 0, 1);
      operands[1] = x3;
      x4 = XVECEXP (x1, 0, 2);
      operands[2] = x4;
      switch (XINT (x1, 1))
        {
        case 25:
          if (pattern575 (x1) != 0
              || !
#line 29126 "../../gcc/config/i386/i386.md"
(TARGET_64BIT && TARGET_XSAVE))
            return -1;
          return 1913; /* xrstor_rex64 */

        case 31:
          if (pattern575 (x1) != 0
              || !(
#line 29126 "../../gcc/config/i386/i386.md"
(TARGET_64BIT && TARGET_XSAVE) && 
#line 29056 "../../gcc/config/i386/i386.md"
(TARGET_XSAVES)))
            return -1;
          return 1914; /* xrstors_rex64 */

        case 27:
          if (pattern575 (x1) != 0
              || !
#line 29140 "../../gcc/config/i386/i386.md"
(TARGET_64BIT && TARGET_XSAVE))
            return -1;
          return 1915; /* xrstor64 */

        case 33:
          if (pattern575 (x1) != 0
              || !(
#line 29140 "../../gcc/config/i386/i386.md"
(TARGET_64BIT && TARGET_XSAVE) && 
#line 29060 "../../gcc/config/i386/i386.md"
(TARGET_XSAVES)))
            return -1;
          return 1916; /* xrstors64 */

        case 37:
          if (pattern576 (x1) != 0
              || !
#line 29163 "../../gcc/config/i386/i386.md"
(TARGET_64BIT && TARGET_XSAVE))
            return -1;
          return 1918; /* xsetbv_rex64 */

        case 14:
          if (!nonimmediate_operand (operands[1], E_SImode)
              || !const_int_operand (operands[2], E_SImode))
            return -1;
          switch (GET_MODE (operands[0]))
            {
            case E_SImode:
              if (!register_operand (operands[0], E_SImode)
                  || !
#line 29276 "../../gcc/config/i386/i386.md"
(TARGET_LWP))
                return -1;
              return 1929; /* lwp_lwpvalsi */

            case E_DImode:
              if (!register_operand (operands[0], E_DImode)
                  || !(
#line 29276 "../../gcc/config/i386/i386.md"
(TARGET_LWP) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return -1;
              return 1930; /* lwp_lwpvaldi */

            default:
              return -1;
            }

        case 54:
          if (!register_operand (operands[0], E_SImode)
              || !register_operand (operands[1], E_SImode)
              || !register_operand (operands[2], E_SImode)
              || !
#line 29547 "../../gcc/config/i386/i386.md"
(TARGET_MWAITX))
            return -1;
          return 1969; /* mwaitx */

        case 53:
          switch (pattern577 ())
            {
            case 0:
              if (!(
#line 29559 "../../gcc/config/i386/i386.md"
(TARGET_MWAITX) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode)))
                return -1;
              return 1970; /* monitorx_si */

            case 1:
              if (!(
#line 29559 "../../gcc/config/i386/i386.md"
(TARGET_MWAITX) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode)))
                return -1;
              return 1971; /* monitorx_di */

            default:
              return -1;
            }

        case 56:
          if (pattern576 (x1) != 0
              || !
#line 29614 "../../gcc/config/i386/i386.md"
(TARGET_PKU))
            return -1;
          return 1975; /* *wrpkru */

        case 95:
          switch (pattern577 ())
            {
            case 0:
              if (!(
#line 22532 "../../gcc/config/i386/sse.md"
(TARGET_MWAIT) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode)))
                return -1;
              return 8582; /* sse3_monitor_si */

            case 1:
              if (!(
#line 22532 "../../gcc/config/i386/sse.md"
(TARGET_MWAIT) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode)))
                return -1;
              return 8583; /* sse3_monitor_di */

            default:
              return -1;
            }

        default:
          return -1;
        }

    case 4:
      if (pnum_clobbers == NULL
          || XINT (x1, 1) != 98
          || GET_MODE (x1) != E_V2DImode)
        return -1;
      x2 = XVECEXP (x1, 0, 0);
      operands[0] = x2;
      if (!register_operand (operands[0], E_V2DImode))
        return -1;
      x3 = XVECEXP (x1, 0, 1);
      operands[1] = x3;
      if (!register_operand (operands[1], E_V2DImode))
        return -1;
      x4 = XVECEXP (x1, 0, 2);
      operands[2] = x4;
      if (!register_operand (operands[2], E_V2DImode))
        return -1;
      x5 = XVECEXP (x1, 0, 3);
      operands[3] = x5;
      if (!register_operand (operands[3], E_SImode)
          || !
#line 31214 "../../gcc/config/i386/sse.md"
(TARGET_KL))
        return -1;
      *pnum_clobbers = 1;
      return 10356; /* loadiwkey */

    default:
      return -1;
    }
}

 rtx_insn *
split_15 (rtx x1 ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  rtx_insn *res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  switch (pattern1177 (x2))
    {
    case 0:
      switch (GET_MODE (operands[0]))
        {
        case E_DImode:
          x3 = XEXP (x2, 1);
          if (GET_MODE (x3) != E_DImode)
            return NULL;
          if (nonimmediate_operand (operands[0], E_DImode)
              && nonimmediate_operand (operands[1], E_DImode)
              && x86_64_hilo_general_operand (operands[2], E_DImode)
              && ((
#line 6465 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (PLUS, DImode, operands, TARGET_APX_NDD)) && 
#line 1235 "../../gcc/config/i386/i386.md"
(!TARGET_64BIT)) && 
#line 6467 "../../gcc/config/i386/i386.md"
( reload_completed)))
            return gen_split_98 (insn, operands);
          if (!register_operand (operands[0], E_DImode)
              || !register_operand (operands[1], E_DImode)
              || !x86_64_nonmemory_operand (operands[2], E_DImode))
            return NULL;
          if ((
#line 7053 "../../gcc/config/i386/i386.md"
(reload_completed && ix86_avoid_lea_for_add (insn, operands)) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return gen_split_123 (insn, operands);
          if (!(
#line 7079 "../../gcc/config/i386/i386.md"
(reload_completed && ix86_lea_for_add_ok (insn, operands)) && 
#line 1161 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return NULL;
          return gen_split_128 (insn, operands);

        case E_TImode:
          x3 = XEXP (x2, 1);
          if (pattern564 (x3, 
E_TImode) != 0
              || !((
#line 6465 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (PLUS, TImode, operands, TARGET_APX_NDD)) && 
#line 1236 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 6467 "../../gcc/config/i386/i386.md"
( reload_completed)))
            return NULL;
          return gen_split_99 (insn, operands);

        case E_SImode:
          x3 = XEXP (x2, 1);
          if (pattern1505 (x3, 
E_SImode) != 0)
            return NULL;
          if (
#line 7053 "../../gcc/config/i386/i386.md"
(reload_completed && ix86_avoid_lea_for_add (insn, operands)))
            return gen_split_122 (insn, operands);
          if (!
#line 7079 "../../gcc/config/i386/i386.md"
(reload_completed && ix86_lea_for_add_ok (insn, operands)))
            return NULL;
          return gen_split_127 (insn, operands);

        case E_QImode:
          x3 = XEXP (x2, 1);
          if (pattern1250 (x3, 
E_QImode) != 0
              || !
#line 7079 "../../gcc/config/i386/i386.md"
(reload_completed && ix86_lea_for_add_ok (insn, operands)))
            return NULL;
          return gen_split_125 (insn, operands);

        case E_HImode:
          if (!register_operand (operands[0], E_HImode))
            return NULL;
          x3 = XEXP (x2, 1);
          if (GET_MODE (x3) != E_HImode
              || !register_operand (operands[1], E_HImode)
              || !nonmemory_operand (operands[2], E_HImode)
              || !
#line 7079 "../../gcc/config/i386/i386.md"
(reload_completed && ix86_lea_for_add_ok (insn, operands)))
            return NULL;
          return gen_split_126 (insn, operands);

        default:
          return NULL;
        }

    case 1:
      if (!(
#line 6946 "../../gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)) && 
#line 6969 "../../gcc/config/i386/i386.md"
( reload_completed
   && !(rtx_equal_p (operands[0], operands[1])
	|| rtx_equal_p (operands[0], operands[2])))))
        return NULL;
      return gen_split_114 (insn, operands);

    case 2:
      if (!(
#line 6946 "../../gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)) && 
#line 6969 "../../gcc/config/i386/i386.md"
( reload_completed
   && !(rtx_equal_p (operands[0], operands[1])
	|| rtx_equal_p (operands[0], operands[2])))))
        return NULL;
      return gen_split_115 (insn, operands);

    default:
      return NULL;
    }
}

 rtx_insn *
split_22 (rtx x1 ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
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
      switch (pattern1177 (x3))
        {
        case 0:
          switch (GET_MODE (operands[0]))
            {
            case E_DImode:
              if (nonimmediate_operand (operands[0], E_DImode)
                  && GET_MODE (x4) == E_DImode
                  && nonimmediate_operand (operands[1], E_DImode))
                {
                  if (x86_64_hilo_general_operand (operands[2], E_DImode)
                      && ((
#line 12501 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (AND, DImode, operands, TARGET_APX_NDD)) && 
#line 1235 "../../gcc/config/i386/i386.md"
(!TARGET_64BIT)) && 
#line 12503 "../../gcc/config/i386/i386.md"
( reload_completed)))
                    return gen_split_283 (insn, operands);
                  if (const_int_operand (operands[2], E_DImode)
                      && (
#line 12576 "../../gcc/config/i386/i386.md"
(TARGET_64BIT && TARGET_USE_BT
   && ix86_binary_operator_ok (AND, DImode, operands)
   && IN_RANGE (exact_log2 (~INTVAL (operands[2])), 31, 63)) && 
#line 12580 "../../gcc/config/i386/i386.md"
( reload_completed)))
                    return gen_split_285 (insn, operands);
                }
              break;

            case E_TImode:
              if (pattern564 (x4, 
E_TImode) == 0
                  && ((
#line 12501 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (AND, TImode, operands, TARGET_APX_NDD)) && 
#line 1236 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 12503 "../../gcc/config/i386/i386.md"
( reload_completed)))
                return gen_split_284 (insn, operands);
              break;

            case E_HImode:
              if (pattern1351 (x4, 
E_HImode) == 0
                  && 
#line 12825 "../../gcc/config/i386/i386.md"
(reload_completed
   && (!REG_P (operands[1])
       || REGNO (operands[0]) != REGNO (operands[1]))
   && (UINTVAL (operands[2]) == GET_MODE_MASK (SImode)
       || UINTVAL (operands[2]) == GET_MODE_MASK (HImode)
       || UINTVAL (operands[2]) == GET_MODE_MASK (QImode))))
                return gen_split_311 (insn, operands);
              break;

            case E_SImode:
              if (pattern1351 (x4, 
E_SImode) == 0
                  && 
#line 12825 "../../gcc/config/i386/i386.md"
(reload_completed
   && (!REG_P (operands[1])
       || REGNO (operands[0]) != REGNO (operands[1]))
   && (UINTVAL (operands[2]) == GET_MODE_MASK (SImode)
       || UINTVAL (operands[2]) == GET_MODE_MASK (HImode)
       || UINTVAL (operands[2]) == GET_MODE_MASK (QImode))))
                return gen_split_312 (insn, operands);
              break;

            default:
              break;
            }
          break;

        case 1:
          if ((
#line 12741 "../../gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)) && 
#line 12745 "../../gcc/config/i386/i386.md"
( reload_completed
   && !(rtx_equal_p (operands[0], operands[1])
	|| rtx_equal_p (operands[0], operands[2])))))
            return gen_split_287 (insn, operands);
          break;

        case 2:
          if ((
#line 12741 "../../gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)) && 
#line 12745 "../../gcc/config/i386/i386.md"
( reload_completed
   && !(rtx_equal_p (operands[0], operands[1])
	|| rtx_equal_p (operands[0], operands[2])))))
            return gen_split_290 (insn, operands);
          break;

        default:
          break;
        }
      x6 = XEXP (x4, 1);
      if (GET_CODE (x6) == CONST_INT)
        {
          res = split_17 (x1, insn);
          if (res != NULL_RTX)
            return res;
        }
      if (GET_CODE (x5) == SUBREG
          && known_eq (SUBREG_BYTE (x5), 0))
        {
          res = split_18 (x1, insn);
          if (res != NULL_RTX)
            return res;
        }
      if (GET_CODE (x6) != CONST_INT)
        return NULL;
      operands[2] = x6;
      if (const_int_operand (operands[2], E_DImode))
        {
          x7 = XEXP (x3, 0);
          operands[0] = x7;
          if (register_operand (operands[0], E_DImode)
              && GET_MODE (x4) == E_DImode)
            {
              operands[1] = x5;
              if (nonimmediate_operand (operands[1], E_DImode)
                  && (
#line 12825 "../../gcc/config/i386/i386.md"
(reload_completed
   && (!REG_P (operands[1])
       || REGNO (operands[0]) != REGNO (operands[1]))
   && (UINTVAL (operands[2]) == GET_MODE_MASK (SImode)
       || UINTVAL (operands[2]) == GET_MODE_MASK (HImode)
       || UINTVAL (operands[2]) == GET_MODE_MASK (QImode))) && 
#line 1164 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return gen_split_313 (insn, operands);
            }
        }
      x7 = XEXP (x3, 0);
      operands[0] = x7;
      if (GET_MODE (x4) != E_DImode)
        return NULL;
      if (rtx_equal_p (x5, operands[0]))
        {
          switch (XWINT (x6, 0))
            {
            case -65536L:
              if (register_operand (operands[0], E_DImode)
                  && (
#line 12860 "../../gcc/config/i386/i386.md"
((TARGET_FAST_PREFIX && !TARGET_PARTIAL_REG_STALL)
    || optimize_function_for_size_p (cfun)) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return gen_split_315 (insn, operands);
              break;

            case -256L:
              if (any_QIreg_operand (operands[0], E_DImode)
                  && (
#line 12870 "../../gcc/config/i386/i386.md"
((!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun))
   && reload_completed) && 
#line 1164 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return gen_split_318 (insn, operands);
              break;

            case -65281L:
              if (QIreg_operand (operands[0], E_DImode)
                  && (
#line 12880 "../../gcc/config/i386/i386.md"
((!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun))
   && reload_completed) && 
#line 1164 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return gen_split_321 (insn, operands);
              break;

            default:
              break;
            }
        }
      operands[1] = x5;
      if (register_operand (operands[1], E_DImode)
          && QIreg_operand (operands[0], E_DImode))
        {
          operands[2] = x6;
          if (const_int_operand (operands[2], E_DImode)
              && (
#line 13261 "../../gcc/config/i386/i386.md"
(reload_completed
    && (!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun))
    && !(~INTVAL (operands[2]) & ~(255 << 8))
    && !(TARGET_APX_NDD && REGNO (operands[0]) != REGNO (operands[1]))) && 
#line 1164 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return gen_split_369 (insn, operands);
        }
      if (general_operand (operands[1], E_DImode)
          && any_QIreg_operand (operands[0], E_DImode))
        {
          operands[2] = x6;
          if (const_int_operand (operands[2], E_DImode)
              && (
#line 13290 "../../gcc/config/i386/i386.md"
(reload_completed
    && (!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun))
    && !(~INTVAL (operands[2]) & ~255)
    && !(INTVAL (operands[2]) & 128)
    && !(TARGET_APX_NDD
	 && !rtx_equal_p (operands[0], operands[1]))) && 
#line 1164 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return gen_split_372 (insn, operands);
        }
      if (GET_CODE (x5) != SUBREG
          || maybe_ne (SUBREG_BYTE (x5), 0)
          || GET_MODE (x5) != E_DImode
          || XWINT (x6, 0) != 63L
          || !register_operand (operands[0], E_DImode))
        return NULL;
      x8 = XEXP (x5, 0);
      if (GET_MODE (x8) != E_SImode)
        return NULL;
      switch (GET_CODE (x8))
        {
        case CTZ:
          x9 = XEXP (x8, 0);
          operands[1] = x9;
          if (!nonimmediate_operand (operands[1], E_SImode)
              || !(
#line 21123 "../../gcc/config/i386/i386.md"
(TARGET_BMI && TARGET_64BIT) && 
#line 21125 "../../gcc/config/i386/i386.md"
( TARGET_AVOID_FALSE_DEP_FOR_BMI && epilogue_completed
   && optimize_function_for_speed_p (cfun)
   && !reg_mentioned_p (operands[0], operands[1]))))
            return NULL;
          return gen_split_875 (insn, operands);

        case CLZ:
          x9 = XEXP (x8, 0);
          operands[1] = x9;
          if (!nonimmediate_operand (operands[1], E_SImode)
              || !(
#line 21560 "../../gcc/config/i386/i386.md"
(TARGET_LZCNT && TARGET_64BIT) && 
#line 21562 "../../gcc/config/i386/i386.md"
( TARGET_AVOID_FALSE_DEP_FOR_BMI && epilogue_completed
   && optimize_function_for_speed_p (cfun)
   && !reg_mentioned_p (operands[0], operands[1]))))
            return NULL;
          return gen_split_888 (insn, operands);

        case POPCOUNT:
          x9 = XEXP (x8, 0);
          operands[1] = x9;
          if (!nonimmediate_operand (operands[1], E_SImode)
              || !(
#line 22241 "../../gcc/config/i386/i386.md"
(TARGET_POPCNT && TARGET_64BIT) && 
#line 22249 "../../gcc/config/i386/i386.md"
( TARGET_AVOID_FALSE_DEP_FOR_BMI && epilogue_completed
   && optimize_function_for_speed_p (cfun)
   && !reg_mentioned_p (operands[0], operands[1]))))
            return NULL;
          return gen_split_902 (insn, operands);

        default:
          return NULL;
        }

    case NOT:
      x7 = XEXP (x3, 0);
      operands[0] = x7;
      x8 = XEXP (x5, 0);
      switch (GET_CODE (x8))
        {
        case REG:
        case SUBREG:
          operands[1] = x8;
          x6 = XEXP (x4, 1);
          operands[2] = x6;
          switch (GET_MODE (operands[0]))
            {
            case E_DImode:
              if (pattern1434 (x4, 
E_DImode) == 0)
                {
                  if (((
#line 13312 "../../gcc/config/i386/i386.md"
(TARGET_BMI) && 
#line 1235 "../../gcc/config/i386/i386.md"
(!TARGET_64BIT)) && 
#line 13314 "../../gcc/config/i386/i386.md"
( reload_completed)))
                    return gen_split_373 (insn, operands);
                  if (((
#line 13330 "../../gcc/config/i386/i386.md"
(!TARGET_BMI
   && ix86_pre_reload_split ()) && 
#line 1195 "../../gcc/config/i386/i386.md"
(!TARGET_64BIT)) && 
#line 13333 "../../gcc/config/i386/i386.md"
( 1)))
                    return gen_split_375 (insn, operands);
                }
              break;

            case E_TImode:
              if (pattern1434 (x4, 
E_TImode) == 0)
                {
                  if (((
#line 13312 "../../gcc/config/i386/i386.md"
(TARGET_BMI) && 
#line 1236 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 13314 "../../gcc/config/i386/i386.md"
( reload_completed)))
                    return gen_split_374 (insn, operands);
                  if (((
#line 13330 "../../gcc/config/i386/i386.md"
(!TARGET_BMI
   && ix86_pre_reload_split ()) && 
#line 1196 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 13333 "../../gcc/config/i386/i386.md"
( 1)))
                    return gen_split_376 (insn, operands);
                }
              break;

            case E_SImode:
              if (pattern1434 (x4, 
E_SImode) == 0
                  && 
#line 13398 "../../gcc/config/i386/i386.md"
(reload_completed
   && optimize_insn_for_size_p () && optimize_size > 1
   && REGNO (operands[0]) == REGNO (operands[1])
   && LEGACY_INT_REG_P (operands[0])
   && !REX_INT_REG_P (operands[2])
   && !reg_overlap_mentioned_p (operands[0], operands[2])))
                return gen_split_377 (insn, operands);
              break;

            default:
              break;
            }
          if (GET_CODE (x8) != SUBREG
              || maybe_ne (SUBREG_BYTE (x8), 0)
              || GET_MODE (x8) != E_QImode)
            return NULL;
          x9 = XEXP (x8, 0);
          if (GET_CODE (x9) != LSHIFTRT
              || x6 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
            return NULL;
          switch (pattern1527 (x4))
            {
            case 0:
              if (!(
#line 19344 "../../gcc/config/i386/i386.md"
(TARGET_USE_BT && ix86_pre_reload_split ()) && 
#line 19346 "../../gcc/config/i386/i386.md"
( 1)))
                return NULL;
              return gen_split_838 (insn, operands);

            case 1:
              if (!((
#line 19344 "../../gcc/config/i386/i386.md"
(TARGET_USE_BT && ix86_pre_reload_split ()) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 19346 "../../gcc/config/i386/i386.md"
( 1)))
                return NULL;
              return gen_split_839 (insn, operands);

            default:
              return NULL;
            }

        case LSHIFTRT:
          x6 = XEXP (x4, 1);
          if (x6 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
            return NULL;
          switch (pattern1244 (x4))
            {
            case 0:
              if (!(
#line 19362 "../../gcc/config/i386/i386.md"
(TARGET_USE_BT && ix86_pre_reload_split ()) && 
#line 19364 "../../gcc/config/i386/i386.md"
( 1)))
                return NULL;
              return gen_split_840 (insn, operands);

            case 1:
              if (!((
#line 19362 "../../gcc/config/i386/i386.md"
(TARGET_USE_BT && ix86_pre_reload_split ()) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 19364 "../../gcc/config/i386/i386.md"
( 1)))
                return NULL;
              return gen_split_841 (insn, operands);

            default:
              return NULL;
            }

        default:
          return NULL;
        }

    case ROTATE:
      switch (pattern1059 (x3, 
-2))
        {
        case 0:
          if (!(
#line 18892 "../../gcc/config/i386/i386.md"
(TARGET_USE_BT
   && (INTVAL (operands[2]) & (GET_MODE_BITSIZE (SImode)-1))
      == GET_MODE_BITSIZE (SImode)-1
   && ix86_pre_reload_split ()) && 
#line 18897 "../../gcc/config/i386/i386.md"
( 1)))
            return NULL;
          return gen_split_804 (insn, operands);

        case 1:
          if (!((
#line 18892 "../../gcc/config/i386/i386.md"
(TARGET_USE_BT
   && (INTVAL (operands[2]) & (GET_MODE_BITSIZE (DImode)-1))
      == GET_MODE_BITSIZE (DImode)-1
   && ix86_pre_reload_split ()) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 18897 "../../gcc/config/i386/i386.md"
( 1)))
            return NULL;
          return gen_split_805 (insn, operands);

        case 2:
          if (!(
#line 18920 "../../gcc/config/i386/i386.md"
(TARGET_USE_BT
   && (INTVAL (operands[2]) & (GET_MODE_BITSIZE (SImode)-1))
      == GET_MODE_BITSIZE (SImode)-1
   && ix86_pre_reload_split ()) && 
#line 18925 "../../gcc/config/i386/i386.md"
( 1)))
            return NULL;
          return gen_split_806 (insn, operands);

        case 3:
          if (!((
#line 18920 "../../gcc/config/i386/i386.md"
(TARGET_USE_BT
   && (INTVAL (operands[2]) & (GET_MODE_BITSIZE (DImode)-1))
      == GET_MODE_BITSIZE (DImode)-1
   && ix86_pre_reload_split ()) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 18925 "../../gcc/config/i386/i386.md"
( 1)))
            return NULL;
          return gen_split_807 (insn, operands);

        default:
          return NULL;
        }

    default:
      return NULL;
    }
}

 rtx_insn *
split_31 (rtx x1 ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  rtx_insn *res ATTRIBUTE_UNUSED;
  switch (pattern201 (x1))
    {
    case 0:
      x2 = XVECEXP (x1, 0, 0);
      x3 = XEXP (x2, 0);
      operands[0] = x3;
      x4 = XEXP (x2, 1);
      x5 = XEXP (x4, 1);
      if (GET_CODE (x5) == SUBREG)
        {
          switch (pattern1333 (x4))
            {
            case 0:
              if (((
#line 16582 "../../gcc/config/i386/i386.md"
(((INTVAL (operands[3]) & (4 * BITS_PER_UNIT)) == 0
    || ((INTVAL (operands[3]) & (2 * 4 * BITS_PER_UNIT - 1))
	 == (2 * 4 * BITS_PER_UNIT - 1)))
   && ix86_pre_reload_split ()) && 
#line 1235 "../../gcc/config/i386/i386.md"
(!TARGET_64BIT)) && 
#line 16587 "../../gcc/config/i386/i386.md"
( 1)))
                return gen_split_590 (insn, operands);
              break;

            case 1:
              if (((
#line 16582 "../../gcc/config/i386/i386.md"
(((INTVAL (operands[3]) & (8 * BITS_PER_UNIT)) == 0
    || ((INTVAL (operands[3]) & (2 * 8 * BITS_PER_UNIT - 1))
	 == (2 * 8 * BITS_PER_UNIT - 1)))
   && ix86_pre_reload_split ()) && 
#line 1236 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 16587 "../../gcc/config/i386/i386.md"
( 1)))
                return gen_split_592 (insn, operands);
              break;

            default:
              break;
            }
        }
      if (GET_MODE (x4) == E_SImode
          && nonimmediate_operand (operands[1], E_SImode))
        {
          if (register_operand (operands[0], E_SImode))
            {
              operands[2] = x5;
              if (register_operand (operands[2], E_QImode)
                  && 
#line 17435 "../../gcc/config/i386/i386.md"
(TARGET_BMI2 && reload_completed))
                return gen_split_623 (insn, operands);
            }
          if (GET_CODE (x5) == SUBREG)
            {
              switch (pattern1506 (x5))
                {
                case 0:
                  if ((
#line 17840 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ASHIFTRT, SImode, operands)
   && (INTVAL (operands[3]) & (4 * BITS_PER_UNIT - 1))
      == 4 * BITS_PER_UNIT - 1
   && ix86_pre_reload_split ()) && 
#line 17845 "../../gcc/config/i386/i386.md"
( 1)))
                    return gen_split_640 (insn, operands);
                  break;

                case 1:
                  if ((
#line 17888 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ASHIFTRT, SImode, operands)
   && (INTVAL (operands[3]) & (4 * BITS_PER_UNIT - 1)) == 0
   && ix86_pre_reload_split ()) && 
#line 17892 "../../gcc/config/i386/i386.md"
( 1)))
                    return gen_split_652 (insn, operands);
                  break;

                case 2:
                  if ((
#line 17934 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ASHIFTRT, SImode, operands)
   && (INTVAL (operands[3]) & (4 * BITS_PER_UNIT - 1)) == 0
   && ix86_pre_reload_split ()) && 
#line 17938 "../../gcc/config/i386/i386.md"
( 1)))
                    return gen_split_664 (insn, operands);
                  break;

                default:
                  break;
                }
            }
        }
      operands[2] = x5;
      switch (pattern1252 (x2))
        {
        case 0:
          if (register_operand (operands[1], E_DImode)
              && nonmemory_operand (operands[2], E_QImode)
              && (
#line 16694 "../../gcc/config/i386/i386.md"
(epilogue_completed) && 
#line 1195 "../../gcc/config/i386/i386.md"
(!TARGET_64BIT)))
            return gen_split_598 (insn, operands);
          if (nonimmediate_operand (operands[1], E_DImode)
              && register_operand (operands[2], E_QImode)
              && (
#line 17435 "../../gcc/config/i386/i386.md"
(TARGET_BMI2 && reload_completed) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return gen_split_625 (insn, operands);
          break;

        case 1:
          if ((
#line 16694 "../../gcc/config/i386/i386.md"
(epilogue_completed) && 
#line 1196 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return gen_split_600 (insn, operands);
          break;

        case 2:
          if ((
#line 17638 "../../gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)) && 
#line 17649 "../../gcc/config/i386/i386.md"
( reload_completed
   && !(rtx_equal_p (operands[0], operands[1])))))
            return gen_split_629 (insn, operands);
          break;

        case 3:
          if ((
#line 17638 "../../gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)) && 
#line 17649 "../../gcc/config/i386/i386.md"
( reload_completed
   && !(rtx_equal_p (operands[0], operands[1])))))
            return gen_split_631 (insn, operands);
          break;

        default:
          break;
        }
      if (GET_CODE (x5) != SUBREG)
        return NULL;
      switch (pattern1167 (x2, 
E_DImode))
        {
        case 0:
          if (!((
#line 17840 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ASHIFTRT, DImode, operands)
   && (INTVAL (operands[3]) & (8 * BITS_PER_UNIT - 1))
      == 8 * BITS_PER_UNIT - 1
   && ix86_pre_reload_split ()) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 17845 "../../gcc/config/i386/i386.md"
( 1)))
            return NULL;
          return gen_split_643 (insn, operands);

        case 1:
          if (!((
#line 17888 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ASHIFTRT, DImode, operands)
   && (INTVAL (operands[3]) & (8 * BITS_PER_UNIT - 1)) == 0
   && ix86_pre_reload_split ()) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 17892 "../../gcc/config/i386/i386.md"
( 1)))
            return NULL;
          return gen_split_655 (insn, operands);

        case 2:
          if (!((
#line 17934 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ASHIFTRT, DImode, operands)
   && (INTVAL (operands[3]) & (8 * BITS_PER_UNIT - 1)) == 0
   && ix86_pre_reload_split ()) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 17938 "../../gcc/config/i386/i386.md"
( 1)))
            return NULL;
          return gen_split_667 (insn, operands);

        default:
          return NULL;
        }

    case 1:
      if (register_operand (operands[0], E_DImode)
          && register_operand (operands[1], E_DImode)
          && ((
#line 16643 "../../gcc/config/i386/i386.md"
(((INTVAL (operands[3]) & (4 * BITS_PER_UNIT)) == 0
    || ((INTVAL (operands[3]) & (2 * 4 * BITS_PER_UNIT - 1))
	 == (2 * 4 * BITS_PER_UNIT - 1)))
   && ix86_pre_reload_split ()) && 
#line 1235 "../../gcc/config/i386/i386.md"
(!TARGET_64BIT)) && 
#line 16648 "../../gcc/config/i386/i386.md"
( 1)))
        return gen_split_594 (insn, operands);
      if (!nonimmediate_operand (operands[0], E_DImode)
          || !nonimmediate_operand (operands[1], E_DImode)
          || !((
#line 17865 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ASHIFTRT, DImode, operands)
   && (INTVAL (operands[3]) & (8 * BITS_PER_UNIT - 1))
      == 8 * BITS_PER_UNIT - 1
   && ix86_pre_reload_split ()) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 17870 "../../gcc/config/i386/i386.md"
( 1)))
        return NULL;
      return gen_split_649 (insn, operands);

    case 2:
      if (!((
#line 16643 "../../gcc/config/i386/i386.md"
(((INTVAL (operands[3]) & (8 * BITS_PER_UNIT)) == 0
    || ((INTVAL (operands[3]) & (2 * 8 * BITS_PER_UNIT - 1))
	 == (2 * 8 * BITS_PER_UNIT - 1)))
   && ix86_pre_reload_split ()) && 
#line 1236 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 16648 "../../gcc/config/i386/i386.md"
( 1)))
        return NULL;
      return gen_split_596 (insn, operands);

    case 3:
      if (!(
#line 17865 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ASHIFTRT, SImode, operands)
   && (INTVAL (operands[3]) & (4 * BITS_PER_UNIT - 1))
      == 4 * BITS_PER_UNIT - 1
   && ix86_pre_reload_split ()) && 
#line 17870 "../../gcc/config/i386/i386.md"
( 1)))
        return NULL;
      return gen_split_646 (insn, operands);

    case 4:
      if (!(
#line 17912 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ASHIFTRT, SImode, operands)
   && (INTVAL (operands[3]) & (4 * BITS_PER_UNIT - 1)) == 0
   && ix86_pre_reload_split ()) && 
#line 17916 "../../gcc/config/i386/i386.md"
( 1)))
        return NULL;
      return gen_split_658 (insn, operands);

    case 5:
      if (!((
#line 17912 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ASHIFTRT, DImode, operands)
   && (INTVAL (operands[3]) & (8 * BITS_PER_UNIT - 1)) == 0
   && ix86_pre_reload_split ()) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 17916 "../../gcc/config/i386/i386.md"
( 1)))
        return NULL;
      return gen_split_661 (insn, operands);

    case 6:
      if (!(
#line 17964 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ASHIFTRT, SImode, operands)
   && (INTVAL (operands[3]) & (4 * BITS_PER_UNIT - 1)) == 0
   && ix86_pre_reload_split ()) && 
#line 17968 "../../gcc/config/i386/i386.md"
( 1)))
        return NULL;
      return gen_split_670 (insn, operands);

    case 7:
      if (!((
#line 17964 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ASHIFTRT, DImode, operands)
   && (INTVAL (operands[3]) & (8 * BITS_PER_UNIT - 1)) == 0
   && ix86_pre_reload_split ()) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 17968 "../../gcc/config/i386/i386.md"
( 1)))
        return NULL;
      return gen_split_673 (insn, operands);

    case 8:
      if (!((
#line 17988 "../../gcc/config/i386/i386.md"
(INTVAL (operands[2]) == INTVAL (operands[3])
   && UINTVAL (operands[2]) < 4 * BITS_PER_UNIT) && 
#line 1235 "../../gcc/config/i386/i386.md"
(!TARGET_64BIT)) && 
#line 17991 "../../gcc/config/i386/i386.md"
( reload_completed)))
        return NULL;
      return gen_split_674 (insn, operands);

    case 9:
      if (!((
#line 17988 "../../gcc/config/i386/i386.md"
(INTVAL (operands[2]) == INTVAL (operands[3])
   && UINTVAL (operands[2]) < 8 * BITS_PER_UNIT) && 
#line 1236 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 17991 "../../gcc/config/i386/i386.md"
( reload_completed)))
        return NULL;
      return gen_split_675 (insn, operands);

    default:
      return NULL;
    }
}

 rtx_insn *
split_41 (rtx x1 ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12, x13, x14, x15, x16;
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
      res = split_40 (x1, insn);
      if (res != NULL_RTX)
        return res;
      if (!bt_comparison_operator (x3, E_VOIDmode))
        return NULL;
      operands[3] = x3;
      x4 = XEXP (x3, 0);
      if (pattern82 (x4, 
E_CCZmode, 
130) != 0)
        return NULL;
      x5 = XVECEXP (x4, 0, 0);
      if (GET_CODE (x5) != AND)
        return NULL;
      x6 = XEXP (x5, 0);
      if (GET_CODE (x6) != NOT)
        return NULL;
      x7 = XVECEXP (x4, 0, 1);
      if (GET_CODE (x7) != AND)
        return NULL;
      x8 = XEXP (x7, 0);
      if (GET_CODE (x8) != NOT)
        return NULL;
      x9 = XEXP (x3, 1);
      if (x9 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
        return NULL;
      x10 = XEXP (x2, 2);
      if (GET_CODE (x10) != PC)
        return NULL;
      x11 = XEXP (x1, 0);
      if (GET_CODE (x11) != PC)
        return NULL;
      x12 = XEXP (x6, 0);
      operands[1] = x12;
      x13 = XEXP (x5, 1);
      operands[2] = x13;
      x14 = XEXP (x2, 1);
      operands[0] = x14;
      x15 = XEXP (x8, 0);
      if (!rtx_equal_p (x15, operands[1]))
        return NULL;
      x16 = XEXP (x7, 1);
      if (!rtx_equal_p (x16, operands[2]))
        return NULL;
      switch (GET_MODE (x5))
        {
        case E_V16QImode:
          if (pattern1757 (x4, 
E_V16QImode) != 0
              || !
#line 25437 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1))
            return NULL;
          return gen_split_3666 (insn, operands);

        case E_V8HImode:
          if (pattern1757 (x4, 
E_V8HImode) != 0
              || !
#line 25437 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1))
            return NULL;
          return gen_split_3667 (insn, operands);

        case E_V4SImode:
          if (pattern1757 (x4, 
E_V4SImode) != 0
              || !
#line 25437 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1))
            return NULL;
          return gen_split_3668 (insn, operands);

        case E_V2DImode:
          if (pattern1757 (x4, 
E_V2DImode) != 0
              || !
#line 25437 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1))
            return NULL;
          return gen_split_3669 (insn, operands);

        case E_V1TImode:
          if (pattern1757 (x4, 
E_V1TImode) != 0
              || !
#line 25437 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1))
            return NULL;
          return gen_split_3670 (insn, operands);

        case E_V4SFmode:
          if (pattern1757 (x4, 
E_V4SFmode) != 0
              || !
#line 25437 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1))
            return NULL;
          return gen_split_3671 (insn, operands);

        case E_V2DFmode:
          if (pattern1757 (x4, 
E_V2DFmode) != 0
              || !
#line 25437 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1))
            return NULL;
          return gen_split_3672 (insn, operands);

        case E_V32QImode:
          if (pattern1757 (x4, 
E_V32QImode) != 0
              || !(
#line 25437 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1) && 
#line 606 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
            return NULL;
          return gen_split_3673 (insn, operands);

        case E_V16HImode:
          if (pattern1757 (x4, 
E_V16HImode) != 0
              || !(
#line 25437 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1) && 
#line 606 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
            return NULL;
          return gen_split_3674 (insn, operands);

        case E_V8SImode:
          if (pattern1757 (x4, 
E_V8SImode) != 0
              || !(
#line 25437 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1) && 
#line 607 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
            return NULL;
          return gen_split_3675 (insn, operands);

        case E_V4DImode:
          if (pattern1757 (x4, 
E_V4DImode) != 0
              || !(
#line 25437 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1) && 
#line 607 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
            return NULL;
          return gen_split_3676 (insn, operands);

        case E_V2TImode:
          if (pattern1757 (x4, 
E_V2TImode) != 0
              || !(
#line 25437 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1) && 
#line 607 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
            return NULL;
          return gen_split_3677 (insn, operands);

        case E_V8SFmode:
          if (pattern1757 (x4, 
E_V8SFmode) != 0
              || !(
#line 25437 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1) && 
#line 608 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
            return NULL;
          return gen_split_3678 (insn, operands);

        case E_V4DFmode:
          if (pattern1757 (x4, 
E_V4DFmode) != 0
              || !(
#line 25437 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1) && 
#line 608 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
            return NULL;
          return gen_split_3679 (insn, operands);

        default:
          return NULL;
        }

    default:
      return NULL;
    }
}

 rtx_insn *
split_46 (rtx x1 ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10;
  rtx_insn *res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) != VEC_SELECT)
    return NULL;
  switch (pattern89 (x1))
    {
    case 0:
      x4 = XEXP (x3, 0);
      operands[1] = x4;
      if (!nonimmediate_operand (operands[1], E_V2SFmode))
        return NULL;
      x5 = XEXP (x3, 1);
      if (XVECLEN (x5, 0) != 1)
        return NULL;
      x6 = XEXP (x2, 1);
      x7 = XEXP (x6, 1);
      if (XVECLEN (x7, 0) != 1
          || !register_operand (operands[0], E_SFmode)
          || GET_MODE (x2) != E_SFmode
          || GET_MODE (x3) != E_SFmode)
        return NULL;
      x8 = XVECEXP (x5, 0, 0);
      operands[2] = x8;
      if (!const_0_to_1_operand (operands[2], E_SImode)
          || GET_MODE (x6) != E_SFmode)
        return NULL;
      x9 = XVECEXP (x7, 0, 0);
      operands[3] = x9;
      if (!const_0_to_1_operand (operands[3], E_SImode))
        return NULL;
      x10 = XEXP (x6, 0);
      if (!rtx_equal_p (x10, operands[1])
          || !(
#line 1012 "../../gcc/config/i386/mmx.md"
(TARGET_SSE3 && TARGET_MMX_WITH_SSE && ix86_partial_vec_fp_math
   && INTVAL (operands[2]) != INTVAL (operands[3])
   && ix86_pre_reload_split ()) && 
#line 1016 "../../gcc/config/i386/mmx.md"
( 1)))
        return NULL;
      return gen_split_1018 (insn, operands);

    case 1:
      switch (pattern854 (x2))
        {
        case 0:
          if (!
#line 22620 "../../gcc/config/i386/sse.md"
(TARGET_SSSE3 && reload_completed
   && SSE_REGNO_P (REGNO (operands[0]))))
            return NULL;
          return gen_split_3455 (insn, operands);

        case 1:
          if (!
#line 22707 "../../gcc/config/i386/sse.md"
(TARGET_SSSE3 && reload_completed
   && SSE_REGNO_P (REGNO (operands[0]))))
            return NULL;
          return gen_split_3459 (insn, operands);

        default:
          return NULL;
        }

    default:
      return NULL;
    }
}

 rtx_insn *
split_49 (rtx x1 ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8;
  rtx_insn *res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) != PARALLEL)
    return NULL;
  x4 = XEXP (x1, 0);
  operands[0] = x4;
  x5 = XEXP (x2, 0);
  switch (GET_CODE (x5))
    {
    case VEC_CONCAT:
      switch (pattern271 (x2))
        {
        case 0:
          x6 = XVECEXP (x3, 0, 1);
          if (GET_CODE (x6) == CONST_INT)
            {
              switch (pattern979 (x2))
                {
                case 0:
                  if ((
#line 1691 "../../gcc/config/i386/mmx.md"
(TARGET_MMX_WITH_SSE) && 
#line 1693 "../../gcc/config/i386/mmx.md"
( reload_completed)))
                    return gen_split_1020 (insn, operands);
                  break;

                case 1:
                  if ((
#line 4991 "../../gcc/config/i386/mmx.md"
(TARGET_MMX || TARGET_MMX_WITH_SSE) && 
#line 4996 "../../gcc/config/i386/mmx.md"
( reload_completed
   && SSE_REGNO_P (REGNO (operands[0])))))
                    return gen_split_1103 (insn, operands);
                  break;

                case 2:
                  if ((
#line 1708 "../../gcc/config/i386/mmx.md"
(TARGET_MMX_WITH_SSE) && 
#line 1710 "../../gcc/config/i386/mmx.md"
( reload_completed)))
                    return gen_split_1021 (insn, operands);
                  break;

                case 3:
                  if ((
#line 4970 "../../gcc/config/i386/mmx.md"
(TARGET_MMX || TARGET_MMX_WITH_SSE) && 
#line 4975 "../../gcc/config/i386/mmx.md"
( reload_completed
   && SSE_REGNO_P (REGNO (operands[0])))))
                    return gen_split_1102 (insn, operands);
                  break;

                default:
                  break;
                }
            }
          x7 = XVECEXP (x3, 0, 0);
          operands[3] = x7;
          switch (pattern980 (x2))
            {
            case 0:
              if (!(
#line 6197 "../../gcc/config/i386/mmx.md"
(TARGET_SSE2) && 
#line 6199 "../../gcc/config/i386/mmx.md"
( reload_completed)))
                return NULL;
              return gen_split_1115 (insn, operands);

            case 1:
              if (!(
#line 6197 "../../gcc/config/i386/mmx.md"
(TARGET_SSE2) && 
#line 6199 "../../gcc/config/i386/mmx.md"
( reload_completed)))
                return NULL;
              return gen_split_1116 (insn, operands);

            case 2:
              if (!(
#line 6197 "../../gcc/config/i386/mmx.md"
(TARGET_SSE2) && 
#line 6199 "../../gcc/config/i386/mmx.md"
( reload_completed)))
                return NULL;
              return gen_split_1117 (insn, operands);

            default:
              return NULL;
            }

        case 1:
          if (!(
#line 4850 "../../gcc/config/i386/mmx.md"
(TARGET_MMX || TARGET_MMX_WITH_SSE) && 
#line 4855 "../../gcc/config/i386/mmx.md"
( reload_completed
   && SSE_REGNO_P (REGNO (operands[0])))))
            return NULL;
          return gen_split_1096 (insn, operands);

        case 2:
          if (!(
#line 4890 "../../gcc/config/i386/mmx.md"
(TARGET_MMX || TARGET_MMX_WITH_SSE) && 
#line 4895 "../../gcc/config/i386/mmx.md"
( reload_completed
   && SSE_REGNO_P (REGNO (operands[0])))))
            return NULL;
          return gen_split_1098 (insn, operands);

        case 3:
          if (!(
#line 4871 "../../gcc/config/i386/mmx.md"
(TARGET_SSE2) && 
#line 4873 "../../gcc/config/i386/mmx.md"
( reload_completed)))
            return NULL;
          return gen_split_1097 (insn, operands);

        case 4:
          if (!(
#line 4928 "../../gcc/config/i386/mmx.md"
(TARGET_MMX || TARGET_MMX_WITH_SSE) && 
#line 4933 "../../gcc/config/i386/mmx.md"
( reload_completed
   && SSE_REGNO_P (REGNO (operands[0])))))
            return NULL;
          return gen_split_1100 (insn, operands);

        case 5:
          if (!(
#line 4911 "../../gcc/config/i386/mmx.md"
(TARGET_SSE2) && 
#line 4913 "../../gcc/config/i386/mmx.md"
( reload_completed)))
            return NULL;
          return gen_split_1099 (insn, operands);

        case 6:
          if (!(
#line 4949 "../../gcc/config/i386/mmx.md"
(TARGET_MMX || TARGET_MMX_WITH_SSE) && 
#line 4954 "../../gcc/config/i386/mmx.md"
( reload_completed
   && SSE_REGNO_P (REGNO (operands[0])))))
            return NULL;
          return gen_split_1101 (insn, operands);

        default:
          return NULL;
        }

    case REG:
    case SUBREG:
    case MEM:
      switch (XVECLEN (x3, 0))
        {
        case 1:
          res = split_48 (x1, insn);
          if (res != NULL_RTX)
            return res;
          break;

        case 2:
          x7 = XVECEXP (x3, 0, 0);
          if (x7 == const_int_rtx[MAX_SAVED_CONST_INT + 1])
            {
              x6 = XVECEXP (x3, 0, 1);
              if (x6 == const_int_rtx[MAX_SAVED_CONST_INT + 0]
                  && memory_operand (operands[0], E_V2SImode)
                  && GET_MODE (x2) == E_V2SImode
                  && rtx_equal_p (x5, operands[0])
                  && 
#line 5633 "../../gcc/config/i386/mmx.md"
(TARGET_64BIT && (TARGET_READ_MODIFY_WRITE || optimize_insn_for_size_p ())))
                return gen_split_1107 (insn, operands);
            }
          break;

        default:
          break;
        }
      if (XVECLEN (x3, 0) != 1)
        return NULL;
      x7 = XVECEXP (x3, 0, 0);
      if (x7 == const_int_rtx[MAX_SAVED_CONST_INT + 0]
          && GET_MODE (x2) == E_DImode)
        {
          if (GET_CODE (x5) == SUBREG
              && known_eq (SUBREG_BYTE (x5), 0)
              && GET_MODE (x5) == E_V2DImode
              && register_operand (operands[0], E_DImode))
            {
              x8 = XEXP (x5, 0);
              switch (pattern1209 (x8))
                {
                case 0:
                  if (pshufb_truncv8hiv8qi_operand (operands[2], E_V16QImode)
                      && (
#line 15382 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL && TARGET_AVX512BW && ix86_pre_reload_split ()) && 
#line 15384 "../../gcc/config/i386/sse.md"
( 1)))
                    return gen_split_3175 (insn, operands);
                  if (pshufb_truncv4siv4hi_operand (operands[2], E_V16QImode)
                      && (
#line 15737 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()) && 
#line 15739 "../../gcc/config/i386/sse.md"
( 1)))
                    return gen_split_3191 (insn, operands);
                  break;

                case 1:
                  if ((
#line 15978 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()) && 
#line 15980 "../../gcc/config/i386/sse.md"
( 1)))
                    return gen_split_3201 (insn, operands);
                  break;

                default:
                  break;
                }
            }
          operands[1] = x5;
          if (register_operand (operands[1], E_V2DImode))
            {
              if (general_reg_operand (operands[0], E_DImode)
                  && 
#line 21186 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1 && !TARGET_64BIT
   && reload_completed))
                return gen_split_3379 (insn, operands);
              if (nonimmediate_operand (operands[0], E_DImode)
                  && 
#line 21204 "../../gcc/config/i386/sse.md"
(TARGET_SSE && reload_completed))
                return gen_split_3381 (insn, operands);
            }
        }
      if (!register_operand (operands[0], E_DImode)
          || GET_MODE (x2) != E_DImode)
        return NULL;
      operands[1] = x5;
      if (!memory_operand (operands[1], E_V2DImode))
        return NULL;
      operands[2] = x7;
      if (!const_0_to_1_operand (operands[2], E_VOIDmode)
          || !
#line 21391 "../../gcc/config/i386/sse.md"
(TARGET_SSE && reload_completed))
        return NULL;
      return gen_split_3387 (insn, operands);

    case UNSPEC:
      if (pattern272 (x2) != 0
          || !
#line 8422 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && reload_completed
   && SSE_REG_P (operands[0])))
        return NULL;
      return gen_split_1509 (insn, operands);

    case FIX:
      if (pattern274 (x2) != 0
          || !
#line 8486 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && reload_completed
   && SSE_REG_P (operands[0])))
        return NULL;
      return gen_split_1511 (insn, operands);

    default:
      return NULL;
    }
}

 rtx_insn *
split_55 (rtx x1 ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12, x13, x14;
  rtx_insn *res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  operands[3] = x2;
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) != UNSPEC
      || XVECLEN (x3, 0) != 2
      || XINT (x3, 1) != 130
      || GET_MODE (x3) != E_CCZmode)
    return NULL;
  x4 = XVECEXP (x3, 0, 0);
  if (GET_CODE (x4) != AND)
    return NULL;
  x5 = XEXP (x4, 0);
  if (GET_CODE (x5) != NOT)
    return NULL;
  x6 = XVECEXP (x3, 0, 1);
  if (GET_CODE (x6) != AND)
    return NULL;
  x7 = XEXP (x6, 0);
  if (GET_CODE (x7) != NOT)
    return NULL;
  x8 = XEXP (x2, 1);
  if (x8 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
    return NULL;
  x9 = XEXP (x5, 0);
  operands[1] = x9;
  x10 = XEXP (x4, 1);
  operands[2] = x10;
  x11 = XEXP (x7, 0);
  if (!rtx_equal_p (x11, operands[1]))
    return NULL;
  x12 = XEXP (x6, 1);
  if (!rtx_equal_p (x12, operands[2]))
    return NULL;
  x13 = XEXP (x1, 0);
  switch (GET_CODE (x13))
    {
    case REG:
    case SUBREG:
      operands[0] = x13;
      switch (GET_MODE (operands[0]))
        {
        case E_QImode:
          if (!register_operand (operands[0], E_QImode))
            return NULL;
          switch (pattern1686 (x3, 
E_QImode))
            {
            case 0:
              if (!
#line 25402 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1))
                return NULL;
              return gen_split_3596 (insn, operands);

            case 1:
              if (!
#line 25402 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1))
                return NULL;
              return gen_split_3597 (insn, operands);

            case 2:
              if (!
#line 25402 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1))
                return NULL;
              return gen_split_3598 (insn, operands);

            case 3:
              if (!
#line 25402 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1))
                return NULL;
              return gen_split_3599 (insn, operands);

            case 4:
              if (!
#line 25402 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1))
                return NULL;
              return gen_split_3600 (insn, operands);

            case 5:
              if (!
#line 25402 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1))
                return NULL;
              return gen_split_3601 (insn, operands);

            case 6:
              if (!
#line 25402 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1))
                return NULL;
              return gen_split_3602 (insn, operands);

            case 7:
              if (!(
#line 25402 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1) && 
#line 606 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
                return NULL;
              return gen_split_3603 (insn, operands);

            case 8:
              if (!(
#line 25402 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1) && 
#line 606 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
                return NULL;
              return gen_split_3604 (insn, operands);

            case 9:
              if (!(
#line 25402 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1) && 
#line 607 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
                return NULL;
              return gen_split_3605 (insn, operands);

            case 10:
              if (!(
#line 25402 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1) && 
#line 607 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
                return NULL;
              return gen_split_3606 (insn, operands);

            case 11:
              if (!(
#line 25402 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1) && 
#line 607 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
                return NULL;
              return gen_split_3607 (insn, operands);

            case 12:
              if (!(
#line 25402 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1) && 
#line 608 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
                return NULL;
              return gen_split_3608 (insn, operands);

            case 13:
              if (!(
#line 25402 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1) && 
#line 608 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
                return NULL;
              return gen_split_3609 (insn, operands);

            default:
              return NULL;
            }

        case E_HImode:
          if (!register_operand (operands[0], E_HImode))
            return NULL;
          switch (pattern1686 (x3, 
E_HImode))
            {
            case 0:
              if (!
#line 25402 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1))
                return NULL;
              return gen_split_3610 (insn, operands);

            case 1:
              if (!
#line 25402 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1))
                return NULL;
              return gen_split_3611 (insn, operands);

            case 2:
              if (!
#line 25402 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1))
                return NULL;
              return gen_split_3612 (insn, operands);

            case 3:
              if (!
#line 25402 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1))
                return NULL;
              return gen_split_3613 (insn, operands);

            case 4:
              if (!
#line 25402 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1))
                return NULL;
              return gen_split_3614 (insn, operands);

            case 5:
              if (!
#line 25402 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1))
                return NULL;
              return gen_split_3615 (insn, operands);

            case 6:
              if (!
#line 25402 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1))
                return NULL;
              return gen_split_3616 (insn, operands);

            case 7:
              if (!(
#line 25402 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1) && 
#line 606 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
                return NULL;
              return gen_split_3617 (insn, operands);

            case 8:
              if (!(
#line 25402 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1) && 
#line 606 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
                return NULL;
              return gen_split_3618 (insn, operands);

            case 9:
              if (!(
#line 25402 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1) && 
#line 607 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
                return NULL;
              return gen_split_3619 (insn, operands);

            case 10:
              if (!(
#line 25402 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1) && 
#line 607 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
                return NULL;
              return gen_split_3620 (insn, operands);

            case 11:
              if (!(
#line 25402 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1) && 
#line 607 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
                return NULL;
              return gen_split_3621 (insn, operands);

            case 12:
              if (!(
#line 25402 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1) && 
#line 608 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
                return NULL;
              return gen_split_3622 (insn, operands);

            case 13:
              if (!(
#line 25402 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1) && 
#line 608 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
                return NULL;
              return gen_split_3623 (insn, operands);

            default:
              return NULL;
            }

        case E_SImode:
          if (!register_operand (operands[0], E_SImode))
            return NULL;
          switch (pattern1686 (x3, 
E_SImode))
            {
            case 0:
              if (!
#line 25402 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1))
                return NULL;
              return gen_split_3624 (insn, operands);

            case 1:
              if (!
#line 25402 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1))
                return NULL;
              return gen_split_3625 (insn, operands);

            case 2:
              if (!
#line 25402 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1))
                return NULL;
              return gen_split_3626 (insn, operands);

            case 3:
              if (!
#line 25402 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1))
                return NULL;
              return gen_split_3627 (insn, operands);

            case 4:
              if (!
#line 25402 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1))
                return NULL;
              return gen_split_3628 (insn, operands);

            case 5:
              if (!
#line 25402 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1))
                return NULL;
              return gen_split_3629 (insn, operands);

            case 6:
              if (!
#line 25402 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1))
                return NULL;
              return gen_split_3630 (insn, operands);

            case 7:
              if (!(
#line 25402 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1) && 
#line 606 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
                return NULL;
              return gen_split_3631 (insn, operands);

            case 8:
              if (!(
#line 25402 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1) && 
#line 606 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
                return NULL;
              return gen_split_3632 (insn, operands);

            case 9:
              if (!(
#line 25402 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1) && 
#line 607 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
                return NULL;
              return gen_split_3633 (insn, operands);

            case 10:
              if (!(
#line 25402 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1) && 
#line 607 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
                return NULL;
              return gen_split_3634 (insn, operands);

            case 11:
              if (!(
#line 25402 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1) && 
#line 607 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
                return NULL;
              return gen_split_3635 (insn, operands);

            case 12:
              if (!(
#line 25402 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1) && 
#line 608 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
                return NULL;
              return gen_split_3636 (insn, operands);

            case 13:
              if (!(
#line 25402 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1) && 
#line 608 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
                return NULL;
              return gen_split_3637 (insn, operands);

            default:
              return NULL;
            }

        case E_DImode:
          if (!register_operand (operands[0], E_DImode))
            return NULL;
          switch (pattern1686 (x3, 
E_DImode))
            {
            case 0:
              if (!(
#line 25402 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1) && 
#line 1161 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return NULL;
              return gen_split_3638 (insn, operands);

            case 1:
              if (!(
#line 25402 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1) && 
#line 1161 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return NULL;
              return gen_split_3639 (insn, operands);

            case 2:
              if (!(
#line 25402 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1) && 
#line 1161 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return NULL;
              return gen_split_3640 (insn, operands);

            case 3:
              if (!(
#line 25402 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1) && 
#line 1161 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return NULL;
              return gen_split_3641 (insn, operands);

            case 4:
              if (!(
#line 25402 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1) && 
#line 1161 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return NULL;
              return gen_split_3642 (insn, operands);

            case 5:
              if (!(
#line 25402 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1) && 
#line 1161 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return NULL;
              return gen_split_3643 (insn, operands);

            case 6:
              if (!(
#line 25402 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1) && 
#line 1161 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return NULL;
              return gen_split_3644 (insn, operands);

            case 7:
              if (!(
#line 25402 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1) && ((((((
#line 1161 "../../gcc/config/i386/i386.md"
(TARGET_64BIT) && 
#line 606 "../../gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 606 "../../gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 606 "../../gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 606 "../../gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 606 "../../gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 606 "../../gcc/config/i386/sse.md"
(TARGET_AVX))))
                return NULL;
              return gen_split_3645 (insn, operands);

            case 8:
              if (!(
#line 25402 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1) && ((((((
#line 1161 "../../gcc/config/i386/i386.md"
(TARGET_64BIT) && 
#line 606 "../../gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 606 "../../gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 606 "../../gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 606 "../../gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 606 "../../gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 606 "../../gcc/config/i386/sse.md"
(TARGET_AVX))))
                return NULL;
              return gen_split_3646 (insn, operands);

            case 9:
              if (!(
#line 25402 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1) && ((((((
#line 1161 "../../gcc/config/i386/i386.md"
(TARGET_64BIT) && 
#line 607 "../../gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 607 "../../gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 607 "../../gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 607 "../../gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 607 "../../gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 607 "../../gcc/config/i386/sse.md"
(TARGET_AVX))))
                return NULL;
              return gen_split_3647 (insn, operands);

            case 10:
              if (!(
#line 25402 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1) && ((((((
#line 1161 "../../gcc/config/i386/i386.md"
(TARGET_64BIT) && 
#line 607 "../../gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 607 "../../gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 607 "../../gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 607 "../../gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 607 "../../gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 607 "../../gcc/config/i386/sse.md"
(TARGET_AVX))))
                return NULL;
              return gen_split_3648 (insn, operands);

            case 11:
              if (!(
#line 25402 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1) && ((((((
#line 1161 "../../gcc/config/i386/i386.md"
(TARGET_64BIT) && 
#line 607 "../../gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 607 "../../gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 607 "../../gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 607 "../../gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 607 "../../gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 607 "../../gcc/config/i386/sse.md"
(TARGET_AVX))))
                return NULL;
              return gen_split_3649 (insn, operands);

            case 12:
              if (!(
#line 25402 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1) && ((((((
#line 1161 "../../gcc/config/i386/i386.md"
(TARGET_64BIT) && 
#line 608 "../../gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 608 "../../gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 608 "../../gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 608 "../../gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 608 "../../gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 608 "../../gcc/config/i386/sse.md"
(TARGET_AVX))))
                return NULL;
              return gen_split_3650 (insn, operands);

            case 13:
              if (!(
#line 25402 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1) && ((((((
#line 1161 "../../gcc/config/i386/i386.md"
(TARGET_64BIT) && 
#line 608 "../../gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 608 "../../gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 608 "../../gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 608 "../../gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 608 "../../gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 608 "../../gcc/config/i386/sse.md"
(TARGET_AVX))))
                return NULL;
              return gen_split_3651 (insn, operands);

            default:
              return NULL;
            }

        default:
          return NULL;
        }

    case STRICT_LOW_PART:
      x14 = XEXP (x13, 0);
      operands[0] = x14;
      if (!register_operand (operands[0], E_QImode))
        return NULL;
      switch (pattern1686 (x3, 
E_QImode))
        {
        case 0:
          if (!
#line 25417 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1))
            return NULL;
          return gen_split_3652 (insn, operands);

        case 1:
          if (!
#line 25417 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1))
            return NULL;
          return gen_split_3653 (insn, operands);

        case 2:
          if (!
#line 25417 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1))
            return NULL;
          return gen_split_3654 (insn, operands);

        case 3:
          if (!
#line 25417 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1))
            return NULL;
          return gen_split_3655 (insn, operands);

        case 4:
          if (!
#line 25417 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1))
            return NULL;
          return gen_split_3656 (insn, operands);

        case 5:
          if (!
#line 25417 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1))
            return NULL;
          return gen_split_3657 (insn, operands);

        case 6:
          if (!
#line 25417 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1))
            return NULL;
          return gen_split_3658 (insn, operands);

        case 7:
          if (!(
#line 25417 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1) && 
#line 606 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
            return NULL;
          return gen_split_3659 (insn, operands);

        case 8:
          if (!(
#line 25417 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1) && 
#line 606 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
            return NULL;
          return gen_split_3660 (insn, operands);

        case 9:
          if (!(
#line 25417 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1) && 
#line 607 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
            return NULL;
          return gen_split_3661 (insn, operands);

        case 10:
          if (!(
#line 25417 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1) && 
#line 607 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
            return NULL;
          return gen_split_3662 (insn, operands);

        case 11:
          if (!(
#line 25417 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1) && 
#line 607 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
            return NULL;
          return gen_split_3663 (insn, operands);

        case 12:
          if (!(
#line 25417 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1) && 
#line 608 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
            return NULL;
          return gen_split_3664 (insn, operands);

        case 13:
          if (!(
#line 25417 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1) && 
#line 608 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
            return NULL;
          return gen_split_3665 (insn, operands);

        default:
          return NULL;
        }

    default:
      return NULL;
    }
}

 rtx_insn *
split_71 (rtx x1 ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
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
          return gen_split_1992 (insn, operands);

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
          return gen_split_2019 (insn, operands);

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
          return gen_split_2046 (insn, operands);

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
          return gen_split_2073 (insn, operands);

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
          return gen_split_2100 (insn, operands);

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
          return gen_split_2127 (insn, operands);

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
          return gen_split_2154 (insn, operands);

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
          return gen_split_2181 (insn, operands);

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
          return gen_split_2208 (insn, operands);

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
          return gen_split_2235 (insn, operands);

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
          return gen_split_2262 (insn, operands);

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
          return gen_split_2289 (insn, operands);

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
          return gen_split_1995 (insn, operands);

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
          return gen_split_2022 (insn, operands);

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
          return gen_split_2049 (insn, operands);

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
          return gen_split_2076 (insn, operands);

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
          return gen_split_2103 (insn, operands);

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
          return gen_split_2130 (insn, operands);

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
          return gen_split_2157 (insn, operands);

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
          return gen_split_2184 (insn, operands);

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
          return gen_split_2211 (insn, operands);

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
          return gen_split_2238 (insn, operands);

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
          return gen_split_2265 (insn, operands);

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
          return gen_split_2292 (insn, operands);

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
          return gen_split_1998 (insn, operands);

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
          return gen_split_2025 (insn, operands);

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
          return gen_split_2052 (insn, operands);

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
          return gen_split_2079 (insn, operands);

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
          return gen_split_2106 (insn, operands);

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
          return gen_split_2133 (insn, operands);

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
          return gen_split_2160 (insn, operands);

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
          return gen_split_2187 (insn, operands);

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
          return gen_split_2214 (insn, operands);

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
          return gen_split_2241 (insn, operands);

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
          return gen_split_2268 (insn, operands);

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
          return gen_split_2295 (insn, operands);

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
          return gen_split_3060 (insn, operands);

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
          return gen_split_3069 (insn, operands);

        case 38:
          if (!(
#line 13946 "../../gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 13950 "../../gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_3078 (insn, operands);

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
          return gen_split_3087 (insn, operands);

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
          return gen_split_3096 (insn, operands);

        case 41:
          if (!(
#line 13946 "../../gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 13950 "../../gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_3105 (insn, operands);

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
          return gen_split_3114 (insn, operands);

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
          return gen_split_3123 (insn, operands);

        case 44:
          if (!(
#line 13946 "../../gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 13950 "../../gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_3132 (insn, operands);

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
          return gen_split_3141 (insn, operands);

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
          return gen_split_3150 (insn, operands);

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
          return gen_split_3159 (insn, operands);

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
          return gen_split_2640 (insn, operands);

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
          return gen_split_2667 (insn, operands);

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
          return gen_split_2694 (insn, operands);

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
          return gen_split_2721 (insn, operands);

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
          return gen_split_2748 (insn, operands);

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
          return gen_split_2775 (insn, operands);

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
          return gen_split_2802 (insn, operands);

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
          return gen_split_2829 (insn, operands);

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
          return gen_split_2856 (insn, operands);

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
          return gen_split_2883 (insn, operands);

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
          return gen_split_2910 (insn, operands);

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
          return gen_split_2937 (insn, operands);

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
          return gen_split_2643 (insn, operands);

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
          return gen_split_2670 (insn, operands);

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
          return gen_split_2697 (insn, operands);

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
          return gen_split_2724 (insn, operands);

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
          return gen_split_2751 (insn, operands);

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
          return gen_split_2778 (insn, operands);

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
          return gen_split_2805 (insn, operands);

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
          return gen_split_2832 (insn, operands);

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
          return gen_split_2859 (insn, operands);

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
          return gen_split_2886 (insn, operands);

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
          return gen_split_2913 (insn, operands);

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
          return gen_split_2940 (insn, operands);

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
          return gen_split_2646 (insn, operands);

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
          return gen_split_2673 (insn, operands);

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
          return gen_split_2700 (insn, operands);

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
          return gen_split_2727 (insn, operands);

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
          return gen_split_2754 (insn, operands);

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
          return gen_split_2781 (insn, operands);

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
          return gen_split_2808 (insn, operands);

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
          return gen_split_2835 (insn, operands);

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
          return gen_split_2862 (insn, operands);

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
          return gen_split_2889 (insn, operands);

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
          return gen_split_2916 (insn, operands);

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
          return gen_split_2943 (insn, operands);

        default:
          return NULL;
        }

    default:
      return NULL;
    }
}

 rtx_insn *
split_79 (rtx x1 ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7;
  rtx_insn *res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  switch (XVECLEN (x2, 0))
    {
    case 1:
      if (XINT (x2, 1) != 177)
        return NULL;
      switch (pattern319 (x2))
        {
        case 0:
          if (!((
#line 1634 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 295 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)) && 
#line 1636 "../../gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1146 (insn, operands);

        case 1:
          if (!((
#line 1634 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 295 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 1636 "../../gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1147 (insn, operands);

        case 2:
          if (!((
#line 1634 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 295 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 1636 "../../gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1148 (insn, operands);

        case 3:
          if (!((
#line 1634 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 296 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)) && 
#line 1636 "../../gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1149 (insn, operands);

        case 4:
          if (!((
#line 1634 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 296 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 1636 "../../gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1150 (insn, operands);

        case 5:
          if (!((
#line 1634 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 296 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 1636 "../../gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1151 (insn, operands);

        case 6:
          if (!((
#line 1634 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 297 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)) && 
#line 1636 "../../gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1152 (insn, operands);

        case 7:
          if (!((
#line 1634 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 297 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 1636 "../../gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1153 (insn, operands);

        case 8:
          if (!((
#line 1634 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 297 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 1636 "../../gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1154 (insn, operands);

        case 9:
          if (!((
#line 1634 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 298 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)) && 
#line 1636 "../../gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1155 (insn, operands);

        case 10:
          if (!((
#line 1634 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 298 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 1636 "../../gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1156 (insn, operands);

        case 11:
          if (!((
#line 1634 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 298 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 1636 "../../gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1157 (insn, operands);

        case 12:
          if (!((
#line 1678 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 322 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)) && 
#line 1680 "../../gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1158 (insn, operands);

        case 13:
          if (!((
#line 1678 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 322 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 1680 "../../gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1159 (insn, operands);

        case 14:
          if (!((
#line 1678 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 322 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 1680 "../../gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1160 (insn, operands);

        case 15:
          if (!((
#line 1678 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 323 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)) && 
#line 1680 "../../gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1161 (insn, operands);

        case 16:
          if (!((
#line 1678 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 323 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 1680 "../../gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1162 (insn, operands);

        case 17:
          if (!((
#line 1678 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 323 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 1680 "../../gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1163 (insn, operands);

        case 18:
          if (!((
#line 1678 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 324 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)) && 
#line 1680 "../../gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1164 (insn, operands);

        case 19:
          if (!((
#line 1678 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 324 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 1680 "../../gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1165 (insn, operands);

        case 20:
          if (!((
#line 1678 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 324 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 1680 "../../gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1166 (insn, operands);

        case 21:
          if (!((
#line 1678 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 325 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)) && 
#line 1680 "../../gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1167 (insn, operands);

        case 22:
          if (!((
#line 1678 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 325 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 1680 "../../gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1168 (insn, operands);

        case 23:
          if (!((
#line 1678 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 325 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 1680 "../../gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1169 (insn, operands);

        default:
          return NULL;
        }

    case 3:
      switch (XINT (x2, 1))
        {
        case 51:
          x3 = XVECEXP (x2, 0, 2);
          switch (GET_CODE (x3))
            {
            case LT:
              x4 = XVECEXP (x2, 0, 0);
              operands[1] = x4;
              switch (pattern658 (x2))
                {
                case 0:
                  if (((
#line 3361 "../../gcc/config/i386/sse.md"
(TARGET_SSE && ix86_pre_reload_split ()
   && ((rtx_equal_p (operands[1], operands[3])
	&& rtx_equal_p (operands[2], operands[4]))
       || (rtx_equal_p (operands[1], operands[4])
	   && rtx_equal_p (operands[2], operands[3])))) && 
#line 422 "../../gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 3367 "../../gcc/config/i386/sse.md"
( 1)))
                    return gen_split_1286 (insn, operands);
                  break;

                case 1:
                  if ((
#line 3361 "../../gcc/config/i386/sse.md"
(TARGET_SSE && ix86_pre_reload_split ()
   && ((rtx_equal_p (operands[1], operands[3])
	&& rtx_equal_p (operands[2], operands[4]))
       || (rtx_equal_p (operands[1], operands[4])
	   && rtx_equal_p (operands[2], operands[3])))) && 
#line 3367 "../../gcc/config/i386/sse.md"
( 1)))
                    return gen_split_1287 (insn, operands);
                  break;

                case 2:
                  if (((
#line 3361 "../../gcc/config/i386/sse.md"
(TARGET_SSE && ix86_pre_reload_split ()
   && ((rtx_equal_p (operands[1], operands[3])
	&& rtx_equal_p (operands[2], operands[4]))
       || (rtx_equal_p (operands[1], operands[4])
	   && rtx_equal_p (operands[2], operands[3])))) && 
#line 423 "../../gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 3367 "../../gcc/config/i386/sse.md"
( 1)))
                    return gen_split_1288 (insn, operands);
                  break;

                case 3:
                  if (((
#line 3361 "../../gcc/config/i386/sse.md"
(TARGET_SSE && ix86_pre_reload_split ()
   && ((rtx_equal_p (operands[1], operands[3])
	&& rtx_equal_p (operands[2], operands[4]))
       || (rtx_equal_p (operands[1], operands[4])
	   && rtx_equal_p (operands[2], operands[3])))) && 
#line 423 "../../gcc/config/i386/sse.md"
(TARGET_SSE2)) && 
#line 3367 "../../gcc/config/i386/sse.md"
( 1)))
                    return gen_split_1289 (insn, operands);
                  break;

                case 4:
                  if (((
#line 23581 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1) && 
#line 422 "../../gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 23583 "../../gcc/config/i386/sse.md"
( reload_completed)))
                    return gen_split_3463 (insn, operands);
                  break;

                case 5:
                  if ((
#line 23581 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1) && 
#line 23583 "../../gcc/config/i386/sse.md"
( reload_completed)))
                    return gen_split_3464 (insn, operands);
                  break;

                case 6:
                  if (((
#line 23581 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1) && 
#line 423 "../../gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 23583 "../../gcc/config/i386/sse.md"
( reload_completed)))
                    return gen_split_3465 (insn, operands);
                  break;

                case 7:
                  if (((
#line 23581 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1) && 
#line 423 "../../gcc/config/i386/sse.md"
(TARGET_SSE2)) && 
#line 23583 "../../gcc/config/i386/sse.md"
( reload_completed)))
                    return gen_split_3466 (insn, operands);
                  break;

                case 8:
                  if (((
#line 23911 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1) && 
#line 630 "../../gcc/config/i386/sse.md"
(TARGET_AVX2)) && 
#line 23913 "../../gcc/config/i386/sse.md"
( 1)))
                    return gen_split_3491 (insn, operands);
                  break;

                case 9:
                  if ((
#line 23911 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1) && 
#line 23913 "../../gcc/config/i386/sse.md"
( 1)))
                    return gen_split_3492 (insn, operands);
                  break;

                default:
                  break;
                }
              x5 = XEXP (x3, 0);
              if (GET_CODE (x5) != SUBREG)
                return NULL;
              switch (pattern660 (x2))
                {
                case 0:
                  if (!((
#line 23961 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1
   && GET_MODE_CLASS (GET_MODE (operands[3])) == MODE_VECTOR_INT
   && GET_MODE_SIZE (GET_MODE (operands[3])) == 32
   && ix86_pre_reload_split ()) && 
#line 630 "../../gcc/config/i386/sse.md"
(TARGET_AVX2)) && 
#line 23966 "../../gcc/config/i386/sse.md"
( 1)))
                    return NULL;
                  return gen_split_3495 (insn, operands);

                case 1:
                  if (!(
#line 23961 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1
   && GET_MODE_CLASS (GET_MODE (operands[3])) == MODE_VECTOR_INT
   && GET_MODE_SIZE (GET_MODE (operands[3])) == 16
   && ix86_pre_reload_split ()) && 
#line 23966 "../../gcc/config/i386/sse.md"
( 1)))
                    return NULL;
                  return gen_split_3496 (insn, operands);

                default:
                  return NULL;
                }

            case GT:
              x4 = XVECEXP (x2, 0, 0);
              operands[1] = x4;
              switch (pattern663 (x2))
                {
                case 0:
                  if (((
#line 23607 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1) && 
#line 422 "../../gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 23609 "../../gcc/config/i386/sse.md"
( reload_completed)))
                    return gen_split_3467 (insn, operands);
                  break;

                case 1:
                  if ((
#line 23607 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1) && 
#line 23609 "../../gcc/config/i386/sse.md"
( reload_completed)))
                    return gen_split_3468 (insn, operands);
                  break;

                case 2:
                  if (((
#line 23607 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1) && 
#line 423 "../../gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 23609 "../../gcc/config/i386/sse.md"
( reload_completed)))
                    return gen_split_3469 (insn, operands);
                  break;

                case 3:
                  if (((
#line 23607 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1) && 
#line 423 "../../gcc/config/i386/sse.md"
(TARGET_SSE2)) && 
#line 23609 "../../gcc/config/i386/sse.md"
( reload_completed)))
                    return gen_split_3470 (insn, operands);
                  break;

                case 4:
                  if (((
#line 23935 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1) && 
#line 630 "../../gcc/config/i386/sse.md"
(TARGET_AVX2)) && 
#line 23937 "../../gcc/config/i386/sse.md"
( 1)))
                    return gen_split_3493 (insn, operands);
                  break;

                case 5:
                  if ((
#line 23935 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1) && 
#line 23937 "../../gcc/config/i386/sse.md"
( 1)))
                    return gen_split_3494 (insn, operands);
                  break;

                default:
                  break;
                }
              x5 = XEXP (x3, 0);
              if (GET_CODE (x5) != SUBREG)
                return NULL;
              switch (pattern665 (x2))
                {
                case 0:
                  if (!((
#line 23983 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1
   && GET_MODE_CLASS (GET_MODE (operands[3])) == MODE_VECTOR_INT
   && GET_MODE_SIZE (GET_MODE (operands[3])) == 32
   && ix86_pre_reload_split ()) && 
#line 630 "../../gcc/config/i386/sse.md"
(TARGET_AVX2)) && 
#line 23988 "../../gcc/config/i386/sse.md"
( 1)))
                    return NULL;
                  return gen_split_3497 (insn, operands);

                case 1:
                  if (!(
#line 23983 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1
   && GET_MODE_CLASS (GET_MODE (operands[3])) == MODE_VECTOR_INT
   && GET_MODE_SIZE (GET_MODE (operands[3])) == 16
   && ix86_pre_reload_split ()) && 
#line 23988 "../../gcc/config/i386/sse.md"
( 1)))
                    return NULL;
                  return gen_split_3498 (insn, operands);

                default:
                  return NULL;
                }

            case SUBREG:
              if (maybe_ne (SUBREG_BYTE (x3), 0))
                return NULL;
              x4 = XVECEXP (x2, 0, 0);
              operands[1] = x4;
              x6 = XVECEXP (x2, 0, 1);
              operands[2] = x6;
              x5 = XEXP (x3, 0);
              switch (GET_CODE (x5))
                {
                case LT:
                  x7 = XEXP (x5, 0);
                  operands[3] = x7;
                  switch (pattern1227 (x2))
                    {
                    case 0:
                      if ((
#line 23641 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1) && 
#line 23643 "../../gcc/config/i386/sse.md"
( reload_completed)))
                        return gen_split_3471 (insn, operands);
                      break;

                    case 1:
                      if ((
#line 23641 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1) && 
#line 23643 "../../gcc/config/i386/sse.md"
( reload_completed)))
                        return gen_split_3472 (insn, operands);
                      break;

                    case 2:
                      if (((
#line 23641 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1) && 
#line 612 "../../gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 23643 "../../gcc/config/i386/sse.md"
( reload_completed)))
                        return gen_split_3473 (insn, operands);
                      break;

                    case 3:
                      if (((
#line 23641 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1) && 
#line 612 "../../gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 23643 "../../gcc/config/i386/sse.md"
( reload_completed)))
                        return gen_split_3474 (insn, operands);
                      break;

                    default:
                      break;
                    }
                  if (GET_CODE (x7) != SUBREG)
                    return NULL;
                  switch (pattern1228 (x2))
                    {
                    case 0:
                      if (!(
#line 23708 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1 && ix86_pre_reload_split ()) && 
#line 23710 "../../gcc/config/i386/sse.md"
( 1)))
                        return NULL;
                      return gen_split_3479 (insn, operands);

                    case 1:
                      if (!(
#line 23708 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1 && ix86_pre_reload_split ()) && 
#line 23710 "../../gcc/config/i386/sse.md"
( 1)))
                        return NULL;
                      return gen_split_3480 (insn, operands);

                    case 2:
                      if (!((
#line 23708 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1 && ix86_pre_reload_split ()) && 
#line 612 "../../gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 23710 "../../gcc/config/i386/sse.md"
( 1)))
                        return NULL;
                      return gen_split_3481 (insn, operands);

                    case 3:
                      if (!((
#line 23708 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1 && ix86_pre_reload_split ()) && 
#line 612 "../../gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 23710 "../../gcc/config/i386/sse.md"
( 1)))
                        return NULL;
                      return gen_split_3482 (insn, operands);

                    default:
                      return NULL;
                    }

                case GT:
                  x7 = XEXP (x5, 0);
                  operands[3] = x7;
                  switch (pattern1229 (x2))
                    {
                    case 0:
                      if ((
#line 23673 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1) && 
#line 23675 "../../gcc/config/i386/sse.md"
( reload_completed)))
                        return gen_split_3475 (insn, operands);
                      break;

                    case 1:
                      if ((
#line 23673 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1) && 
#line 23675 "../../gcc/config/i386/sse.md"
( reload_completed)))
                        return gen_split_3476 (insn, operands);
                      break;

                    case 2:
                      if (((
#line 23673 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1) && 
#line 612 "../../gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 23675 "../../gcc/config/i386/sse.md"
( reload_completed)))
                        return gen_split_3477 (insn, operands);
                      break;

                    case 3:
                      if (((
#line 23673 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1) && 
#line 612 "../../gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 23675 "../../gcc/config/i386/sse.md"
( reload_completed)))
                        return gen_split_3478 (insn, operands);
                      break;

                    default:
                      break;
                    }
                  if (GET_CODE (x7) != SUBREG)
                    return NULL;
                  switch (pattern1230 (x2))
                    {
                    case 0:
                      if (!(
#line 23734 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1 && ix86_pre_reload_split ()) && 
#line 23736 "../../gcc/config/i386/sse.md"
( 1)))
                        return NULL;
                      return gen_split_3483 (insn, operands);

                    case 1:
                      if (!(
#line 23734 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1 && ix86_pre_reload_split ()) && 
#line 23736 "../../gcc/config/i386/sse.md"
( 1)))
                        return NULL;
                      return gen_split_3484 (insn, operands);

                    case 2:
                      if (!((
#line 23734 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1 && ix86_pre_reload_split ()) && 
#line 612 "../../gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 23736 "../../gcc/config/i386/sse.md"
( 1)))
                        return NULL;
                      return gen_split_3485 (insn, operands);

                    case 3:
                      if (!((
#line 23734 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1 && ix86_pre_reload_split ()) && 
#line 612 "../../gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 23736 "../../gcc/config/i386/sse.md"
( 1)))
                        return NULL;
                      return gen_split_3486 (insn, operands);

                    default:
                      return NULL;
                    }

                case NOT:
                  x7 = XEXP (x5, 0);
                  operands[3] = x7;
                  if (!register_operand (operands[3], E_VOIDmode))
                    return NULL;
                  switch (GET_MODE (operands[0]))
                    {
                    case E_V32QImode:
                      if (pattern1445 (x2, 
E_V32QImode) != 0
                          || !(
#line 23894 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1
   && GET_MODE_CLASS (GET_MODE (operands[3])) == MODE_VECTOR_INT
   && GET_MODE_SIZE (GET_MODE (operands[3])) == 32) && 
#line 630 "../../gcc/config/i386/sse.md"
(TARGET_AVX2)))
                        return NULL;
                      return gen_split_3489 (insn, operands);

                    case E_V16QImode:
                      if (pattern1445 (x2, 
E_V16QImode) != 0
                          || !
#line 23894 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1
   && GET_MODE_CLASS (GET_MODE (operands[3])) == MODE_VECTOR_INT
   && GET_MODE_SIZE (GET_MODE (operands[3])) == 16))
                        return NULL;
                      return gen_split_3490 (insn, operands);

                    default:
                      return NULL;
                    }

                default:
                  return NULL;
                }

            case NOT:
              x4 = XVECEXP (x2, 0, 0);
              operands[1] = x4;
              x6 = XVECEXP (x2, 0, 1);
              operands[2] = x6;
              x5 = XEXP (x3, 0);
              operands[3] = x5;
              switch (GET_MODE (operands[0]))
                {
                case E_V32QImode:
                  if (pattern1185 (x2, 
E_V32QImode) != 0
                      || !(
#line 23881 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1) && 
#line 630 "../../gcc/config/i386/sse.md"
(TARGET_AVX2)))
                    return NULL;
                  return gen_split_3487 (insn, operands);

                case E_V16QImode:
                  if (pattern1185 (x2, 
E_V16QImode) != 0
                      || !
#line 23881 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1))
                    return NULL;
                  return gen_split_3488 (insn, operands);

                default:
                  return NULL;
                }

            default:
              return NULL;
            }

        case 217:
          switch (pattern594 (x2))
            {
            case 0:
              if (!((
#line 7226 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && ix86_pre_reload_split ()) && 
#line 555 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)) && 
#line 7228 "../../gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_1502 (insn, operands);

            case 1:
              if (!((
#line 7226 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && ix86_pre_reload_split ()) && 
#line 555 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 7228 "../../gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_1503 (insn, operands);

            case 2:
              if (!((
#line 7226 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && ix86_pre_reload_split ()) && 
#line 555 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 7228 "../../gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_1504 (insn, operands);

            default:
              return NULL;
            }

        case 219:
          switch (pattern594 (x2))
            {
            case 0:
              if (!((
#line 7253 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && ix86_pre_reload_split ()) && 
#line 555 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)) && 
#line 7255 "../../gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_1505 (insn, operands);

            case 1:
              if (!((
#line 7253 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && ix86_pre_reload_split ()) && 
#line 555 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 7255 "../../gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_1506 (insn, operands);

            case 2:
              if (!((
#line 7253 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && ix86_pre_reload_split ()) && 
#line 555 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 7255 "../../gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_1507 (insn, operands);

            default:
              return NULL;
            }

        case 155:
          x4 = XVECEXP (x2, 0, 0);
          if (GET_CODE (x4) != CONST_VECTOR)
            return NULL;
          switch (pattern495 (x2))
            {
            case 0:
              if (!(
#line 21598 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL && TARGET_AVX512VBMI
   && ix86_pre_reload_split ()) && 
#line 21601 "../../gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_3392 (insn, operands);

            case 1:
              if (!(
#line 21623 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL && TARGET_AVX512BW
   && ix86_pre_reload_split ()) && 
#line 21626 "../../gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_3393 (insn, operands);

            default:
              return NULL;
            }

        case 47:
          x4 = XVECEXP (x2, 0, 0);
          operands[1] = x4;
          x3 = XVECEXP (x2, 0, 2);
          operands[2] = x3;
          switch (pattern790 (x2))
            {
            case 0:
              if (!((
#line 28776 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && ix86_pre_reload_split ()) && 
#line 332 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)) && 
#line 28778 "../../gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_3732 (insn, operands);

            case 1:
              if (!((
#line 28776 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && ix86_pre_reload_split ()) && 
#line 332 "../../gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 28778 "../../gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_3733 (insn, operands);

            case 2:
              if (!(
#line 28776 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && ix86_pre_reload_split ()) && 
#line 28778 "../../gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_3734 (insn, operands);

            case 3:
              if (!((
#line 28776 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && ix86_pre_reload_split ()) && 
#line 333 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)) && 
#line 28778 "../../gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_3735 (insn, operands);

            case 4:
              if (!((
#line 28776 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && ix86_pre_reload_split ()) && 
#line 333 "../../gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 28778 "../../gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_3736 (insn, operands);

            case 5:
              if (!(
#line 28776 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && ix86_pre_reload_split ()) && 
#line 28778 "../../gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_3737 (insn, operands);

            case 6:
              if (!((
#line 28776 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && ix86_pre_reload_split ()) && 
#line 334 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)) && 
#line 28778 "../../gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_3738 (insn, operands);

            case 7:
              if (!((
#line 28776 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && ix86_pre_reload_split ()) && 
#line 334 "../../gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 28778 "../../gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_3739 (insn, operands);

            case 8:
              if (!(
#line 28776 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && ix86_pre_reload_split ()) && 
#line 28778 "../../gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_3740 (insn, operands);

            case 9:
              if (!((
#line 28776 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && ix86_pre_reload_split ()) && 
#line 335 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)) && 
#line 28778 "../../gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_3741 (insn, operands);

            case 10:
              if (!((
#line 28776 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && ix86_pre_reload_split ()) && 
#line 335 "../../gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 28778 "../../gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_3742 (insn, operands);

            case 11:
              if (!(
#line 28776 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && ix86_pre_reload_split ()) && 
#line 28778 "../../gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_3743 (insn, operands);

            case 12:
              if (!((
#line 28776 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && ix86_pre_reload_split ()) && 
#line 336 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)) && 
#line 28778 "../../gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_3744 (insn, operands);

            case 13:
              if (!((
#line 28776 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && ix86_pre_reload_split ()) && 
#line 336 "../../gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 28778 "../../gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_3745 (insn, operands);

            case 14:
              if (!(
#line 28776 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && ix86_pre_reload_split ()) && 
#line 28778 "../../gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_3746 (insn, operands);

            case 15:
              if (!((
#line 28776 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && ix86_pre_reload_split ()) && 
#line 337 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)) && 
#line 28778 "../../gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_3747 (insn, operands);

            case 16:
              if (!((
#line 28776 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && ix86_pre_reload_split ()) && 
#line 337 "../../gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 28778 "../../gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_3748 (insn, operands);

            case 17:
              if (!(
#line 28776 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && ix86_pre_reload_split ()) && 
#line 28778 "../../gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_3749 (insn, operands);

            case 18:
              if (!((
#line 28776 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && ix86_pre_reload_split ()) && 
#line 338 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)) && 
#line 28778 "../../gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_3750 (insn, operands);

            case 19:
              if (!((
#line 28776 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && ix86_pre_reload_split ()) && 
#line 338 "../../gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 28778 "../../gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_3751 (insn, operands);

            case 20:
              if (!(
#line 28776 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && ix86_pre_reload_split ()) && 
#line 28778 "../../gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_3752 (insn, operands);

            case 21:
              if (!((
#line 28776 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && ix86_pre_reload_split ()) && 
#line 339 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)) && 
#line 28778 "../../gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_3753 (insn, operands);

            case 22:
              if (!((
#line 28776 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && ix86_pre_reload_split ()) && 
#line 339 "../../gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 28778 "../../gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_3754 (insn, operands);

            case 23:
              if (!((
#line 28776 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && ix86_pre_reload_split ()) && 
#line 339 "../../gcc/config/i386/sse.md"
(TARGET_SSE2)) && 
#line 28778 "../../gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_3755 (insn, operands);

            default:
              return NULL;
            }

        case 171:
          x4 = XVECEXP (x2, 0, 0);
          operands[1] = x4;
          x6 = XVECEXP (x2, 0, 1);
          operands[2] = x6;
          x3 = XVECEXP (x2, 0, 2);
          operands[3] = x3;
          switch (pattern918 (x2))
            {
            case 0:
              if (!((
#line 29746 "../../gcc/config/i386/sse.md"
(ix86_pre_reload_split ()
   && (TARGET_AVX512VBMI2 || GET_MODE_SIZE (GET_MODE_INNER (V16SImode)) >= 4)) && 
#line 1017 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)) && 
#line 29749 "../../gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_3783 (insn, operands);

            case 1:
              if (!((
#line 29746 "../../gcc/config/i386/sse.md"
(ix86_pre_reload_split ()
   && (TARGET_AVX512VBMI2 || GET_MODE_SIZE (GET_MODE_INNER (V16SFmode)) >= 4)) && 
#line 1018 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)) && 
#line 29749 "../../gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_3784 (insn, operands);

            case 2:
              if (!((
#line 29746 "../../gcc/config/i386/sse.md"
(ix86_pre_reload_split ()
   && (TARGET_AVX512VBMI2 || GET_MODE_SIZE (GET_MODE_INNER (V8DImode)) >= 4)) && 
#line 1019 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)) && 
#line 29749 "../../gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_3785 (insn, operands);

            case 3:
              if (!((
#line 29746 "../../gcc/config/i386/sse.md"
(ix86_pre_reload_split ()
   && (TARGET_AVX512VBMI2 || GET_MODE_SIZE (GET_MODE_INNER (V8DFmode)) >= 4)) && 
#line 1020 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)) && 
#line 29749 "../../gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_3786 (insn, operands);

            case 4:
              if (!((
#line 29746 "../../gcc/config/i386/sse.md"
(ix86_pre_reload_split ()
   && (TARGET_AVX512VBMI2 || GET_MODE_SIZE (GET_MODE_INNER (V8SImode)) >= 4)) && 
#line 1021 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 29749 "../../gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_3787 (insn, operands);

            case 5:
              if (!((
#line 29746 "../../gcc/config/i386/sse.md"
(ix86_pre_reload_split ()
   && (TARGET_AVX512VBMI2 || GET_MODE_SIZE (GET_MODE_INNER (V8SFmode)) >= 4)) && 
#line 1021 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 29749 "../../gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_3788 (insn, operands);

            case 6:
              if (!((
#line 29746 "../../gcc/config/i386/sse.md"
(ix86_pre_reload_split ()
   && (TARGET_AVX512VBMI2 || GET_MODE_SIZE (GET_MODE_INNER (V4DImode)) >= 4)) && 
#line 1022 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 29749 "../../gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_3789 (insn, operands);

            case 7:
              if (!((
#line 29746 "../../gcc/config/i386/sse.md"
(ix86_pre_reload_split ()
   && (TARGET_AVX512VBMI2 || GET_MODE_SIZE (GET_MODE_INNER (V4DFmode)) >= 4)) && 
#line 1022 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 29749 "../../gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_3790 (insn, operands);

            case 8:
              if (!((
#line 29746 "../../gcc/config/i386/sse.md"
(ix86_pre_reload_split ()
   && (TARGET_AVX512VBMI2 || GET_MODE_SIZE (GET_MODE_INNER (V4SImode)) >= 4)) && 
#line 1023 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 29749 "../../gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_3791 (insn, operands);

            case 9:
              if (!((
#line 29746 "../../gcc/config/i386/sse.md"
(ix86_pre_reload_split ()
   && (TARGET_AVX512VBMI2 || GET_MODE_SIZE (GET_MODE_INNER (V4SFmode)) >= 4)) && 
#line 1023 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 29749 "../../gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_3792 (insn, operands);

            case 10:
              if (!((
#line 29746 "../../gcc/config/i386/sse.md"
(ix86_pre_reload_split ()
   && (TARGET_AVX512VBMI2 || GET_MODE_SIZE (GET_MODE_INNER (V2DImode)) >= 4)) && 
#line 1024 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 29749 "../../gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_3793 (insn, operands);

            case 11:
              if (!((
#line 29746 "../../gcc/config/i386/sse.md"
(ix86_pre_reload_split ()
   && (TARGET_AVX512VBMI2 || GET_MODE_SIZE (GET_MODE_INNER (V2DFmode)) >= 4)) && 
#line 1024 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 29749 "../../gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_3794 (insn, operands);

            case 12:
              if (!((
#line 29746 "../../gcc/config/i386/sse.md"
(ix86_pre_reload_split ()
   && (TARGET_AVX512VBMI2 || GET_MODE_SIZE (GET_MODE_INNER (V64QImode)) >= 4)) && 
#line 1025 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)) && 
#line 29749 "../../gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_3795 (insn, operands);

            case 13:
              if (!((
#line 29746 "../../gcc/config/i386/sse.md"
(ix86_pre_reload_split ()
   && (TARGET_AVX512VBMI2 || GET_MODE_SIZE (GET_MODE_INNER (V16QImode)) >= 4)) && 
#line 1025 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 29749 "../../gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_3796 (insn, operands);

            case 14:
              if (!((
#line 29746 "../../gcc/config/i386/sse.md"
(ix86_pre_reload_split ()
   && (TARGET_AVX512VBMI2 || GET_MODE_SIZE (GET_MODE_INNER (V32QImode)) >= 4)) && 
#line 1025 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 29749 "../../gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_3797 (insn, operands);

            case 15:
              if (!((
#line 29746 "../../gcc/config/i386/sse.md"
(ix86_pre_reload_split ()
   && (TARGET_AVX512VBMI2 || GET_MODE_SIZE (GET_MODE_INNER (V32HImode)) >= 4)) && 
#line 1026 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)) && 
#line 29749 "../../gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_3798 (insn, operands);

            case 16:
              if (!((
#line 29746 "../../gcc/config/i386/sse.md"
(ix86_pre_reload_split ()
   && (TARGET_AVX512VBMI2 || GET_MODE_SIZE (GET_MODE_INNER (V16HImode)) >= 4)) && 
#line 1026 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 29749 "../../gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_3799 (insn, operands);

            case 17:
              if (!((
#line 29746 "../../gcc/config/i386/sse.md"
(ix86_pre_reload_split ()
   && (TARGET_AVX512VBMI2 || GET_MODE_SIZE (GET_MODE_INNER (V8HImode)) >= 4)) && 
#line 1026 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 29749 "../../gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_3800 (insn, operands);

            default:
              return NULL;
            }

        default:
          return NULL;
        }

    case 4:
      return split_56 (x1, insn);

    default:
      return NULL;
    }
}

 rtx_insn *
peephole2_4 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pmatch_len_ ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  rtx_insn *res ATTRIBUTE_UNUSED;
  switch (GET_MODE (operands[0]))
    {
    case E_DImode:
      if (register_operand (operands[0], E_DImode)
          && const_int_operand (operands[1], E_DImode)
          && 
#line 2799 "../../gcc/config/i386/i386.md"
(TARGET_64BIT
   && optimize_insn_for_size_p ()
   && LEGACY_INT_REG_P (operands[0])
   && !x86_64_immediate_operand (operands[1], DImode)
   && !x86_64_zext_immediate_operand (operands[1], DImode)
   && !((UINTVAL (operands[1]) >> ctz_hwi (UINTVAL (operands[1])))
	& ~HOST_WIDE_INT_C (0xffffffff))
   && peep2_regno_dead_p (0, FLAGS_REG)))
        {
          *pmatch_len_ = 0;
          res = gen_peephole2_4 (insn, operands);
          if (res != NULL_RTX)
            return res;
        }
      if (!general_reg_operand (operands[0], E_DImode))
        return NULL;
      if (const_int_operand (operands[1], E_DImode))
        {
          if ((
#line 2948 "../../gcc/config/i386/i386.md"
(optimize_insn_for_size_p () && optimize_size > 1
   && operands[1] != const0_rtx
   && IN_RANGE (INTVAL (operands[1]), -128, 127)
   && !ix86_red_zone_used
   && REGNO (operands[0]) != SP_REG) && 
#line 1164 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
            {
              *pmatch_len_ = 0;
              res = gen_peephole2_7 (insn, operands);
              if (res != NULL_RTX)
                return res;
            }
          if (peep2_current_count >= 2)
            {
              x2 = PATTERN (peep2_next_insn (1));
              switch (pattern1064 (x2))
                {
                case 0:
                  if ((
#line 3656 "../../gcc/config/i386/i386.md"
(REGNO (operands[0]) == REGNO (operands[2])) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                    {
                      *pmatch_len_ = 1;
                      res = gen_peephole2_36 (insn, operands);
                      if (res != NULL_RTX)
                        return res;
                    }
                  break;

                case 1:
                  if ((
#line 3656 "../../gcc/config/i386/i386.md"
(REGNO (operands[0]) == REGNO (operands[2])) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                    {
                      *pmatch_len_ = 1;
                      res = gen_peephole2_38 (insn, operands);
                      if (res != NULL_RTX)
                        return res;
                    }
                  break;

                case 2:
                  if ((
#line 3656 "../../gcc/config/i386/i386.md"
(REGNO (operands[0]) == REGNO (operands[2])) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                    {
                      *pmatch_len_ = 1;
                      res = gen_peephole2_40 (insn, operands);
                      if (res != NULL_RTX)
                        return res;
                    }
                  break;

                default:
                  break;
                }
            }
        }
      if (peep2_current_count < 2)
        return NULL;
      x2 = PATTERN (peep2_next_insn (1));
      if (pattern958 (x2, 
E_DImode) != 0
          || !(
#line 3283 "../../gcc/config/i386/i386.md"
(peep2_reg_dead_p (2, operands[0])
   && (const0_operand (operands[1], DImode)
       || (constm1_operand (operands[1], DImode)
	   && (8 > 1 || TARGET_AVX512DQ)))) && 
#line 1161 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
        return NULL;
      *pmatch_len_ = 1;
      return gen_peephole2_14 (insn, operands);

    case E_HImode:
      if (!general_reg_operand (operands[0], E_HImode))
        return NULL;
      if (const_int_operand (operands[1], E_HImode)
          && 
#line 2948 "../../gcc/config/i386/i386.md"
(optimize_insn_for_size_p () && optimize_size > 1
   && operands[1] != const0_rtx
   && IN_RANGE (INTVAL (operands[1]), -128, 127)
   && !ix86_red_zone_used
   && REGNO (operands[0]) != SP_REG))
        {
          *pmatch_len_ = 0;
          res = gen_peephole2_5 (insn, operands);
          if (res != NULL_RTX)
            return res;
        }
      if (peep2_current_count < 2)
        return NULL;
      x2 = PATTERN (peep2_next_insn (1));
      if (pattern958 (x2, 
E_HImode) != 0
          || !
#line 3283 "../../gcc/config/i386/i386.md"
(peep2_reg_dead_p (2, operands[0])
   && (const0_operand (operands[1], HImode)
       || (constm1_operand (operands[1], HImode)
	   && (2 > 1 || TARGET_AVX512DQ)))))
        return NULL;
      *pmatch_len_ = 1;
      return gen_peephole2_12 (insn, operands);

    case E_SImode:
      if (!general_reg_operand (operands[0], E_SImode))
        return NULL;
      if (const_int_operand (operands[1], E_SImode))
        {
          if (
#line 2948 "../../gcc/config/i386/i386.md"
(optimize_insn_for_size_p () && optimize_size > 1
   && operands[1] != const0_rtx
   && IN_RANGE (INTVAL (operands[1]), -128, 127)
   && !ix86_red_zone_used
   && REGNO (operands[0]) != SP_REG))
            {
              *pmatch_len_ = 0;
              res = gen_peephole2_6 (insn, operands);
              if (res != NULL_RTX)
                return res;
            }
          if (peep2_current_count >= 2)
            {
              x2 = PATTERN (peep2_next_insn (1));
              switch (pattern1064 (x2))
                {
                case 0:
                  if (
#line 3656 "../../gcc/config/i386/i386.md"
(REGNO (operands[0]) == REGNO (operands[2])))
                    {
                      *pmatch_len_ = 1;
                      res = gen_peephole2_35 (insn, operands);
                      if (res != NULL_RTX)
                        return res;
                    }
                  break;

                case 1:
                  if (
#line 3656 "../../gcc/config/i386/i386.md"
(REGNO (operands[0]) == REGNO (operands[2])))
                    {
                      *pmatch_len_ = 1;
                      res = gen_peephole2_37 (insn, operands);
                      if (res != NULL_RTX)
                        return res;
                    }
                  break;

                case 2:
                  if ((
#line 3656 "../../gcc/config/i386/i386.md"
(REGNO (operands[0]) == REGNO (operands[2])) && 
#line 1164 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                    {
                      *pmatch_len_ = 1;
                      res = gen_peephole2_39 (insn, operands);
                      if (res != NULL_RTX)
                        return res;
                    }
                  break;

                default:
                  break;
                }
            }
        }
      if (peep2_current_count < 2)
        return NULL;
      x2 = PATTERN (peep2_next_insn (1));
      if (pattern958 (x2, 
E_SImode) != 0
          || !
#line 3283 "../../gcc/config/i386/i386.md"
(peep2_reg_dead_p (2, operands[0])
   && (const0_operand (operands[1], SImode)
       || (constm1_operand (operands[1], SImode)
	   && (4 > 1 || TARGET_AVX512DQ)))))
        return NULL;
      *pmatch_len_ = 1;
      return gen_peephole2_13 (insn, operands);

    case E_QImode:
      if (peep2_current_count < 2
          || !general_reg_operand (operands[0], E_QImode))
        return NULL;
      x2 = PATTERN (peep2_next_insn (1));
      if (pattern958 (x2, 
E_QImode) != 0
          || !
#line 3283 "../../gcc/config/i386/i386.md"
(peep2_reg_dead_p (2, operands[0])
   && (const0_operand (operands[1], QImode)
       || (constm1_operand (operands[1], QImode)
	   && (1 > 1 || TARGET_AVX512DQ)))))
        return NULL;
      *pmatch_len_ = 1;
      return gen_peephole2_11 (insn, operands);

    default:
      return NULL;
    }
}

 rtx_insn *
peephole2_8 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pmatch_len_ ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx_insn *res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  switch (GET_CODE (x2))
    {
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
      operands[1] = x2;
      x3 = XEXP (x1, 0);
      operands[0] = x3;
      switch (GET_CODE (operands[0]))
        {
        case MEM:
          if (push_operand (operands[0], E_DImode)
              && immediate_operand (operands[1], E_DImode)
              && 
#line 2223 "../../gcc/config/i386/i386.md"
(TARGET_64BIT
   && !symbolic_operand (operands[1], DImode)
   && !x86_64_immediate_operand (operands[1], DImode)))
            {
              *pmatch_len_ = 0;
              res = gen_peephole2_3 (insn, operands);
              if (res != NULL_RTX)
                return res;
            }
          break;

        case REG:
        case SUBREG:
          res = peephole2_4 (x1, insn, pmatch_len_);
          if (res != NULL_RTX)
            return res;
          break;

        default:
          break;
        }
      switch (GET_MODE (operands[0]))
        {
        case E_HImode:
          if (memory_operand (operands[0], E_HImode)
              && const_int_operand (operands[1], E_HImode)
              && 
#line 2970 "../../gcc/config/i386/i386.md"
((operands[1] == const0_rtx || operands[1] == constm1_rtx)
   && optimize_insn_for_size_p () && optimize_size > 1
   && peep2_regno_dead_p (0, FLAGS_REG)))
            {
              *pmatch_len_ = 0;
              res = gen_peephole2_8 (insn, operands);
              if (res != NULL_RTX)
                return res;
            }
          break;

        case E_SImode:
          if (memory_operand (operands[0], E_SImode)
              && const_int_operand (operands[1], E_SImode)
              && 
#line 2970 "../../gcc/config/i386/i386.md"
((operands[1] == const0_rtx || operands[1] == constm1_rtx)
   && optimize_insn_for_size_p () && optimize_size > 1
   && peep2_regno_dead_p (0, FLAGS_REG)))
            {
              *pmatch_len_ = 0;
              res = gen_peephole2_9 (insn, operands);
              if (res != NULL_RTX)
                return res;
            }
          break;

        case E_DImode:
          if (memory_operand (operands[0], E_DImode)
              && const_int_operand (operands[1], E_DImode)
              && (
#line 2970 "../../gcc/config/i386/i386.md"
((operands[1] == const0_rtx || operands[1] == constm1_rtx)
   && optimize_insn_for_size_p () && optimize_size > 1
   && peep2_regno_dead_p (0, FLAGS_REG)) && 
#line 1164 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
            {
              *pmatch_len_ = 0;
              res = gen_peephole2_10 (insn, operands);
              if (res != NULL_RTX)
                return res;
            }
          break;

        default:
          break;
        }
      if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + 0])
        {
          res = peephole2_5 (x1, insn, pmatch_len_);
          if (res != NULL_RTX)
            return res;
        }
      operands[1] = x2;
      operands[0] = x3;
      switch (GET_MODE (operands[0]))
        {
        case E_QImode:
          if (memory_operand (operands[0], E_QImode)
              && immediate_operand (operands[1], E_QImode)
              && 
#line 27677 "../../gcc/config/i386/i386.md"
(optimize_insn_for_speed_p ()
   && ((QImode == HImode
       && TARGET_LCP_STALL)
       || (TARGET_SPLIT_LONG_MOVES
          && get_attr_length (insn) >= ix86_cur_cost ()->large_insn))))
            {
              *pmatch_len_ = 0;
              res = gen_peephole2_259 (insn, operands);
              if (res != NULL_RTX)
                return res;
            }
          break;

        case E_HImode:
          if (memory_operand (operands[0], E_HImode)
              && immediate_operand (operands[1], E_HImode)
              && 
#line 27677 "../../gcc/config/i386/i386.md"
(optimize_insn_for_speed_p ()
   && ((HImode == HImode
       && TARGET_LCP_STALL)
       || (TARGET_SPLIT_LONG_MOVES
          && get_attr_length (insn) >= ix86_cur_cost ()->large_insn))))
            {
              *pmatch_len_ = 0;
              res = gen_peephole2_260 (insn, operands);
              if (res != NULL_RTX)
                return res;
            }
          break;

        default:
          break;
        }
      break;

    case REG:
      res = peephole2_6 (x1, insn, pmatch_len_);
      if (res != NULL_RTX)
        return res;
      break;

    case SUBREG:
    case MEM:
      res = peephole2_7 (x1, insn, pmatch_len_);
      if (res != NULL_RTX)
        return res;
      break;

    default:
      break;
    }
  if (peep2_current_count < 2)
    return NULL;
  x4 = PATTERN (peep2_next_insn (1));
  if (GET_CODE (x4) != SET)
    return NULL;
  x3 = XEXP (x1, 0);
  switch (GET_MODE (x3))
    {
    case E_HImode:
      if (peep2_current_count >= 3
          && peep2_current_count >= 4)
        {
          operands[2] = x3;
          if (general_reg_operand (operands[2], E_HImode))
            {
              operands[3] = x2;
              if (general_gr_operand (operands[3], E_HImode))
                {
                  x5 = XEXP (x4, 0);
                  operands[0] = x5;
                  if (general_reg_operand (operands[0], E_HImode))
                    {
                      x6 = XEXP (x4, 1);
                      if (pattern963 (x6, 
E_HImode) == 0
                          && 
#line 26384 "../../gcc/config/i386/i386.md"
(TARGET_CMOVE
  && REGNO (operands[2]) != REGNO (operands[0])
  && REGNO (operands[2]) != REGNO (operands[1])
  && peep2_reg_dead_p (2, operands[1])
  && peep2_reg_dead_p (4, operands[2])
  && !reg_overlap_mentioned_p (operands[0], operands[3])
  && !reg_mentioned_p (operands[2], operands[6])))
                        {
                          *pmatch_len_ = 3;
                          res = gen_peephole2_206 (insn, operands);
                          if (res != NULL_RTX)
                            return res;
                        }
                    }
                }
            }
        }
      operands[0] = x3;
      operands[1] = x2;
      if (x86_64_general_operand (operands[1], E_HImode)
          && general_reg_operand (operands[0], E_HImode))
        {
          x5 = XEXP (x4, 0);
          operands[2] = x5;
          if (general_reg_operand (operands[2], E_HImode))
            {
              x6 = XEXP (x4, 1);
              if (rtx_equal_p (x6, operands[0])
                  && 
#line 26981 "../../gcc/config/i386/i386.md"
(peep2_reg_dead_p (2, operands[0])))
                {
                  *pmatch_len_ = 1;
                  res = gen_peephole2_230 (insn, operands);
                  if (res != NULL_RTX)
                    return res;
                }
            }
        }
      if (peep2_current_count < 3
          || pattern839 (x4, 
E_HImode) != 0)
        return NULL;
      switch (GET_MODE (operands[4]))
        {
        case E_HImode:
          x7 = PATTERN (peep2_next_insn (2));
          x8 = XVECEXP (x7, 0, 0);
          x9 = XEXP (x8, 1);
          if (pattern1862 (x9, 
E_HImode) != 0
              || !
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
   && (HImode != QImode
       || immediate_operand (operands[2], QImode)
       || any_QIreg_operand (operands[2], QImode))))
            return NULL;
          *pmatch_len_ = 4;
          return gen_peephole2_326 (insn, operands);

        case E_SImode:
          x7 = PATTERN (peep2_next_insn (2));
          x8 = XVECEXP (x7, 0, 0);
          x9 = XEXP (x8, 1);
          if (pattern1863 (x9, 
E_HImode) != 0
              || !
#line 28286 "../../gcc/config/i386/i386.md"
((TARGET_READ_MODIFY_WRITE || optimize_insn_for_size_p ())
   && (REGNO (operands[5]) == REGNO (operands[0])
       || REGNO (operands[5]) == REGNO (operands[3]))
   && REGNO (operands[5]) == REGNO (operands[4])
   && (rtx_equal_p (operands[REGNO (operands[5]) == REGNO (operands[0])
			     ? 3 : 0], operands[6])
       ? (REG_P (operands[2])
	  ? REG_P (operands[7]) && REGNO (operands[2]) == REGNO (operands[7])
	  : rtx_equal_p (operands[2], operands[7]))
       : (rtx_equal_p (operands[REGNO (operands[5]) == REGNO (operands[0])
				? 3 : 0], operands[7])
	  && REG_P (operands[2])
	  && REGNO (operands[2]) == REGNO (operands[6])))
   && peep2_reg_dead_p (4, operands[5])
   && peep2_reg_dead_p (5, operands[REGNO (operands[5]) == REGNO (operands[0])
				    ? 3 : 0])
   && !reg_overlap_mentioned_p (operands[0], operands[1])
   && !reg_overlap_mentioned_p (operands[0], operands[2])
   && !reg_overlap_mentioned_p (operands[3], operands[0])
   && !reg_overlap_mentioned_p (operands[3], operands[1])
   && !reg_overlap_mentioned_p (operands[3], operands[2])
   && (HImode != QImode
       || immediate_operand (operands[2], SImode)
       || any_QIreg_operand (operands[2], SImode))))
            return NULL;
          *pmatch_len_ = 4;
          return gen_peephole2_330 (insn, operands);

        default:
          return NULL;
        }

    case E_QImode:
      operands[0] = x3;
      operands[1] = x2;
      if (x86_64_general_operand (operands[1], E_QImode)
          && general_reg_operand (operands[0], E_QImode))
        {
          x5 = XEXP (x4, 0);
          operands[2] = x5;
          if (general_reg_operand (operands[2], E_QImode))
            {
              x6 = XEXP (x4, 1);
              if (rtx_equal_p (x6, operands[0])
                  && 
#line 26981 "../../gcc/config/i386/i386.md"
(peep2_reg_dead_p (2, operands[0])))
                {
                  *pmatch_len_ = 1;
                  res = gen_peephole2_229 (insn, operands);
                  if (res != NULL_RTX)
                    return res;
                }
            }
        }
      if (peep2_current_count < 3
          || pattern839 (x4, 
E_QImode) != 0)
        return NULL;
      switch (GET_MODE (operands[4]))
        {
        case E_QImode:
          x7 = PATTERN (peep2_next_insn (2));
          x8 = XVECEXP (x7, 0, 0);
          x9 = XEXP (x8, 1);
          if (pattern1862 (x9, 
E_QImode) != 0
              || !
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
   && (QImode != QImode
       || immediate_operand (operands[2], QImode)
       || any_QIreg_operand (operands[2], QImode))))
            return NULL;
          *pmatch_len_ = 4;
          return gen_peephole2_325 (insn, operands);

        case E_SImode:
          x7 = PATTERN (peep2_next_insn (2));
          x8 = XVECEXP (x7, 0, 0);
          x9 = XEXP (x8, 1);
          if (pattern1863 (x9, 
E_QImode) != 0
              || !
#line 28286 "../../gcc/config/i386/i386.md"
((TARGET_READ_MODIFY_WRITE || optimize_insn_for_size_p ())
   && (REGNO (operands[5]) == REGNO (operands[0])
       || REGNO (operands[5]) == REGNO (operands[3]))
   && REGNO (operands[5]) == REGNO (operands[4])
   && (rtx_equal_p (operands[REGNO (operands[5]) == REGNO (operands[0])
			     ? 3 : 0], operands[6])
       ? (REG_P (operands[2])
	  ? REG_P (operands[7]) && REGNO (operands[2]) == REGNO (operands[7])
	  : rtx_equal_p (operands[2], operands[7]))
       : (rtx_equal_p (operands[REGNO (operands[5]) == REGNO (operands[0])
				? 3 : 0], operands[7])
	  && REG_P (operands[2])
	  && REGNO (operands[2]) == REGNO (operands[6])))
   && peep2_reg_dead_p (4, operands[5])
   && peep2_reg_dead_p (5, operands[REGNO (operands[5]) == REGNO (operands[0])
				    ? 3 : 0])
   && !reg_overlap_mentioned_p (operands[0], operands[1])
   && !reg_overlap_mentioned_p (operands[0], operands[2])
   && !reg_overlap_mentioned_p (operands[3], operands[0])
   && !reg_overlap_mentioned_p (operands[3], operands[1])
   && !reg_overlap_mentioned_p (operands[3], operands[2])
   && (QImode != QImode
       || immediate_operand (operands[2], SImode)
       || any_QIreg_operand (operands[2], SImode))))
            return NULL;
          *pmatch_len_ = 4;
          return gen_peephole2_329 (insn, operands);

        default:
          return NULL;
        }

    default:
      return NULL;
    }
}

 rtx_insn *
peephole2_16 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pmatch_len_ ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12;
  rtx_insn *res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  operands[1] = x2;
  if (register_operand (operands[0], E_DImode))
    {
      res = peephole2_15 (x1, insn, pmatch_len_);
      if (res != NULL_RTX)
        return res;
    }
  if (peep2_current_count < 2
      || peep2_current_count < 3
      || !general_reg_operand (operands[0], E_DImode))
    return NULL;
  x3 = PATTERN (peep2_next_insn (1));
  if (GET_CODE (x3) == PARALLEL
      && XVECLEN (x3, 0) == 2)
    {
      x4 = XVECEXP (x3, 0, 0);
      if (GET_CODE (x4) == SET)
        {
          if (memory_operand (operands[1], E_DImode))
            {
              switch (pattern1195 (x3, 
E_DImode, 
E_TImode))
                {
                case 0:
                  if ((
#line 8701 "../../gcc/config/i386/i386.md"
((TARGET_READ_MODIFY_WRITE || optimize_insn_for_size_p ())
   && peep2_reg_dead_p (3, operands[0])
   && !reg_overlap_mentioned_p (operands[0], operands[1])
   && !reg_overlap_mentioned_p (operands[0], operands[2])) && 
#line 1161 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                    {
                      *pmatch_len_ = 2;
                      res = gen_peephole2_71 (insn, operands);
                      if (res != NULL_RTX)
                        return res;
                    }
                  break;

                case 1:
                  if ((
#line 9134 "../../gcc/config/i386/i386.md"
((TARGET_READ_MODIFY_WRITE || optimize_insn_for_size_p ())
   && peep2_reg_dead_p (3, operands[0])
   && !reg_overlap_mentioned_p (operands[0], operands[1])
   && !reg_overlap_mentioned_p (operands[0], operands[2])) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                    {
                      *pmatch_len_ = 2;
                      res = gen_peephole2_87 (insn, operands);
                      if (res != NULL_RTX)
                        return res;
                    }
                  break;

                case 2:
                  if ((
#line 9621 "../../gcc/config/i386/i386.md"
((TARGET_READ_MODIFY_WRITE || optimize_insn_for_size_p ())
   && peep2_reg_dead_p (3, operands[0])
   && !reg_overlap_mentioned_p (operands[0], operands[1])
   && !reg_overlap_mentioned_p (operands[0], operands[2])) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                    {
                      *pmatch_len_ = 2;
                      res = gen_peephole2_99 (insn, operands);
                      if (res != NULL_RTX)
                        return res;
                    }
                  break;

                case 3:
                  if ((
#line 9987 "../../gcc/config/i386/i386.md"
((TARGET_READ_MODIFY_WRITE || optimize_insn_for_size_p ())
   && peep2_reg_dead_p (3, operands[0])
   && !reg_overlap_mentioned_p (operands[0], operands[1])
   && !reg_overlap_mentioned_p (operands[0], operands[2])) && 
#line 1161 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                    {
                      *pmatch_len_ = 2;
                      res = gen_peephole2_111 (insn, operands);
                      if (res != NULL_RTX)
                        return res;
                    }
                  break;

                case 4:
                  if ((
#line 8818 "../../gcc/config/i386/i386.md"
((TARGET_READ_MODIFY_WRITE || optimize_insn_for_size_p ())
   && peep2_reg_dead_p (3, operands[0])
   && !reg_overlap_mentioned_p (operands[0], operands[1])
   && !reg_overlap_mentioned_p (operands[0], operands[2])) && 
#line 1161 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                    {
                      *pmatch_len_ = 2;
                      res = gen_peephole2_79 (insn, operands);
                      if (res != NULL_RTX)
                        return res;
                    }
                  break;

                case 5:
                  if ((
#line 8844 "../../gcc/config/i386/i386.md"
((TARGET_READ_MODIFY_WRITE || optimize_insn_for_size_p ())
   && peep2_reg_dead_p (3, operands[0])
   && peep2_reg_dead_p (4, operands[5])
   && !reg_overlap_mentioned_p (operands[0], operands[1])
   && !reg_overlap_mentioned_p (operands[0], operands[2])
   && !reg_overlap_mentioned_p (operands[5], operands[1])) && 
#line 1161 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                    {
                      *pmatch_len_ = 3;
                      res = gen_peephole2_83 (insn, operands);
                      if (res != NULL_RTX)
                        return res;
                    }
                  break;

                case 6:
                  if ((
#line 9302 "../../gcc/config/i386/i386.md"
((TARGET_READ_MODIFY_WRITE || optimize_insn_for_size_p ())
   && peep2_reg_dead_p (3, operands[0])
   && !reg_overlap_mentioned_p (operands[0], operands[1])
   && !reg_overlap_mentioned_p (operands[0], operands[2])) && 
#line 1161 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                    {
                      *pmatch_len_ = 2;
                      res = gen_peephole2_93 (insn, operands);
                      if (res != NULL_RTX)
                        return res;
                    }
                  break;

                case 7:
                  if ((
#line 9328 "../../gcc/config/i386/i386.md"
((TARGET_READ_MODIFY_WRITE || optimize_insn_for_size_p ())
   && peep2_reg_dead_p (3, operands[0])
   && peep2_reg_dead_p (4, operands[5])
   && !reg_overlap_mentioned_p (operands[0], operands[1])
   && !reg_overlap_mentioned_p (operands[0], operands[2])
   && !reg_overlap_mentioned_p (operands[5], operands[1])) && 
#line 1161 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                    {
                      *pmatch_len_ = 3;
                      res = gen_peephole2_97 (insn, operands);
                      if (res != NULL_RTX)
                        return res;
                    }
                  break;

                default:
                  break;
                }
            }
          if (peep2_current_count >= 4
              && pattern1197 (x3, 
E_DImode) == 0
              && (
#line 14286 "../../gcc/config/i386/i386.md"
(REGNO (operands[0]) != REGNO (operands[2])
   && !reg_mentioned_p (operands[0], operands[1])
   && !reg_mentioned_p (operands[2], operands[1])) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
            {
              *pmatch_len_ = 3;
              res = gen_peephole2_152 (insn, operands);
              if (res != NULL_RTX)
                return res;
            }
          if (general_reg_operand (operands[1], E_DImode))
            {
              x5 = PATTERN (peep2_next_insn (2));
              if (GET_CODE (x5) == SET)
                {
                  x6 = XEXP (x4, 1);
                  if (GET_CODE (x6) == NEG
                      && pattern1346 (x3, 
E_DImode) == 0
                      && 
#line 1161 "../../gcc/config/i386/i386.md"
(TARGET_64BIT))
                    {
                      *pmatch_len_ = 2;
                      res = gen_peephole2_158 (insn, operands);
                      if (res != NULL_RTX)
                        return res;
                    }
                  if (peep2_current_count >= 4
                      && pattern1348 (x3, 
E_DImode) == 0
                      && (
#line 26350 "../../gcc/config/i386/i386.md"
(TARGET_CMOVE
  && REGNO (operands[2]) != REGNO (operands[0])
  && REGNO (operands[2]) != REGNO (operands[1])
  && peep2_reg_dead_p (1, operands[1])
  && peep2_reg_dead_p (4, operands[2])
  && !reg_overlap_mentioned_p (operands[0], operands[3])) && 
#line 1164 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                    {
                      *pmatch_len_ = 3;
                      res = gen_peephole2_205 (insn, operands);
                      if (res != NULL_RTX)
                        return res;
                    }
                }
            }
        }
    }
  if (!immediate_operand (operands[1], E_DImode)
      || GET_CODE (x3) != SET)
    return NULL;
  switch (pattern960 (x3, 
E_TImode, 
E_DImode))
    {
    case 0:
      if (!(
#line 11085 "../../gcc/config/i386/i386.md"
(REGNO (operands[3]) != AX_REG
   && REGNO (operands[0]) != REGNO (operands[2])
   && REGNO (operands[0]) != REGNO (operands[3])
   && (REGNO (operands[0]) == REGNO (operands[4])
       || REGNO (operands[0]) == DX_REG
       || peep2_reg_dead_p (3, operands[0]))) && 
#line 1236 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
        return NULL;
      *pmatch_len_ = 2;
      return gen_peephole2_115 (insn, operands);

    case 1:
      if (!(
#line 11107 "../../gcc/config/i386/i386.md"
(REGNO (operands[3]) != DX_REG
   && REGNO (operands[0]) != REGNO (operands[2])
   && REGNO (operands[0]) != REGNO (operands[3])
   && (REGNO (operands[0]) == REGNO (operands[4])
       || REGNO (operands[0]) == REGNO (operands[5])
       || peep2_reg_dead_p (3, operands[0]))
   && (REGNO (operands[2]) == REGNO (operands[4])
       || REGNO (operands[2]) == REGNO (operands[5])
       || peep2_reg_dead_p (3, operands[2]))) && 
#line 1236 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
        return NULL;
      *pmatch_len_ = 2;
      return gen_peephole2_117 (insn, operands);

    case 2:
      if (!general_reg_operand (operands[4], E_DImode))
        return NULL;
      x5 = PATTERN (peep2_next_insn (2));
      x7 = XVECEXP (x5, 0, 0);
      x8 = XEXP (x7, 1);
      if (GET_MODE (x8) != E_DImode)
        return NULL;
      x9 = XVECEXP (x5, 0, 1);
      x10 = XEXP (x9, 0);
      if (!rtx_equal_p (x10, operands[2]))
        return NULL;
      switch (GET_CODE (x8))
        {
        case SMUL_HIGHPART:
          x11 = XEXP (x8, 0);
          if (!rtx_equal_p (x11, operands[2]))
            return NULL;
          x12 = XEXP (x8, 1);
          if (!rtx_equal_p (x12, operands[0])
              || !(
#line 11246 "../../gcc/config/i386/i386.md"
(REGNO (operands[3]) != AX_REG
   && REGNO (operands[0]) != REGNO (operands[2])
   && REGNO (operands[0]) != REGNO (operands[3])
   && (REGNO (operands[0]) == REGNO (operands[4])
       || peep2_reg_dead_p (3, operands[0]))) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return NULL;
          *pmatch_len_ = 2;
          return gen_peephole2_120 (insn, operands);

        case UMUL_HIGHPART:
          x11 = XEXP (x8, 0);
          if (!rtx_equal_p (x11, operands[2]))
            return NULL;
          x12 = XEXP (x8, 1);
          if (!rtx_equal_p (x12, operands[0])
              || !(
#line 11246 "../../gcc/config/i386/i386.md"
(REGNO (operands[3]) != AX_REG
   && REGNO (operands[0]) != REGNO (operands[2])
   && REGNO (operands[0]) != REGNO (operands[3])
   && (REGNO (operands[0]) == REGNO (operands[4])
       || peep2_reg_dead_p (3, operands[0]))) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return NULL;
          *pmatch_len_ = 2;
          return gen_peephole2_121 (insn, operands);

        default:
          return NULL;
        }

    default:
      return NULL;
    }
}

 rtx_insn *
peephole2_30 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pmatch_len_ ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  rtx_insn *res ATTRIBUTE_UNUSED;
  if (peep2_current_count >= 2)
    {
      x2 = PATTERN (peep2_next_insn (1));
      if (GET_CODE (x2) == SET)
        {
          x3 = XEXP (x2, 1);
          if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + 0])
            {
              x4 = XEXP (x2, 0);
              operands[2] = x4;
              if (memory_operand (operands[2], E_SImode))
                {
                  if (peep2_current_count >= 3)
                    {
                      x5 = PATTERN (peep2_next_insn (2));
                      if (pattern1259 (x5, 
E_SImode) == 0
                          && 
#line 26886 "../../gcc/config/i386/i386.md"
(optimize_insn_for_size_p () && peep2_regno_dead_p (0, FLAGS_REG)))
                        {
                          *pmatch_len_ = 3;
                          res = gen_peephole2_217 (insn, operands);
                          if (res != NULL_RTX)
                            return res;
                        }
                    }
                  if (
#line 26902 "../../gcc/config/i386/i386.md"
(optimize_insn_for_size_p () && peep2_regno_dead_p (0, FLAGS_REG)))
                    {
                      *pmatch_len_ = 1;
                      res = gen_peephole2_219 (insn, operands);
                      if (res != NULL_RTX)
                        return res;
                    }
                }
            }
        }
    }
  if (!
#line 26915 "../../gcc/config/i386/i386.md"
(optimize_insn_for_size_p () && peep2_regno_dead_p (0, FLAGS_REG)))
    return NULL;
  *pmatch_len_ = 0;
  return gen_peephole2_221 (insn, operands);
}

 rtx_insn *
peephole2_33 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pmatch_len_ ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8;
  rtx_insn *res ATTRIBUTE_UNUSED;
  if (peep2_current_count >= 2)
    {
      res = peephole2_32 (x1, insn, pmatch_len_);
      if (res != NULL_RTX)
        return res;
    }
  x2 = XEXP (x1, 0);
  operands[0] = x2;
  x3 = XEXP (x1, 1);
  operands[1] = x3;
  if (const0_operand (operands[1], E_VOIDmode)
      && general_reg_operand (operands[0], E_VOIDmode)
      && 
#line 28338 "../../gcc/config/i386/i386.md"
(GET_MODE_SIZE (GET_MODE (operands[0])) <= UNITS_PER_WORD
   && (! TARGET_USE_MOV0 || optimize_insn_for_size_p ())
   && peep2_regno_dead_p (0, FLAGS_REG)))
    {
      *pmatch_len_ = 0;
      res = gen_peephole2_332 (insn, operands);
      if (res != NULL_RTX)
        return res;
    }
  if (peep2_current_count < 2
      || !memory_operand (operands[1], E_DFmode)
      || !sse_reg_operand (operands[0], E_DFmode))
    return NULL;
  x4 = PATTERN (peep2_next_insn (1));
  if (GET_CODE (x4) != SET)
    return NULL;
  x5 = XEXP (x4, 1);
  if (GET_CODE (x5) != VEC_CONCAT
      || GET_MODE (x5) != E_V2DFmode)
    return NULL;
  x6 = XEXP (x4, 0);
  operands[2] = x6;
  if (!sse_reg_operand (operands[2], E_V2DFmode))
    return NULL;
  x7 = XEXP (x5, 0);
  operands[4] = x7;
  if (!sse_reg_operand (operands[4], E_DFmode))
    return NULL;
  x8 = XEXP (x5, 1);
  operands[3] = x8;
  if (!memory_operand (operands[3], E_DFmode)
      || !
#line 1963 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && TARGET_SSE_UNALIGNED_LOAD_OPTIMAL
   && REGNO (operands[4]) == REGNO (operands[2])
   && ix86_operands_ok_for_move_multiple (operands, true, DFmode)))
    return NULL;
  *pmatch_len_ = 1;
  return gen_peephole2_401 (insn, operands);
}

 rtx_insn *
peephole2_39 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pmatch_len_ ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7;
  rtx_insn *res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 0);
  switch (GET_CODE (x3))
    {
    case REG:
      if (peep2_current_count < 2)
        return NULL;
      operands[0] = x3;
      switch (GET_MODE (operands[0]))
        {
        case E_SImode:
          x4 = PATTERN (peep2_next_insn (1));
          switch (pattern1349 (x4, 
E_SImode))
            {
            case 0:
              if (!
#line 3643 "../../gcc/config/i386/i386.md"
(REGNO (operands[0]) == REGNO (operands[1])))
                return NULL;
              *pmatch_len_ = 1;
              return gen_peephole2_29 (insn, operands);

            case 1:
              if (!
#line 3643 "../../gcc/config/i386/i386.md"
(REGNO (operands[0]) == REGNO (operands[1])))
                return NULL;
              *pmatch_len_ = 1;
              return gen_peephole2_31 (insn, operands);

            case 2:
              if (!(
#line 3643 "../../gcc/config/i386/i386.md"
(REGNO (operands[0]) == REGNO (operands[1])) && 
#line 1164 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return NULL;
              *pmatch_len_ = 1;
              return gen_peephole2_33 (insn, operands);

            case 3:
              if (!
#line 4937 "../../gcc/config/i386/i386.md"
(REGNO (operands[0]) == REGNO (operands[1])
   && (SImode != SImode
       || !TARGET_ZERO_EXTEND_WITH_AND
       || !optimize_function_for_speed_p (cfun))))
                return NULL;
              *pmatch_len_ = 1;
              return gen_peephole2_41 (insn, operands);

            case 4:
              if (!
#line 4937 "../../gcc/config/i386/i386.md"
(REGNO (operands[0]) == REGNO (operands[1])
   && (SImode != SImode
       || !TARGET_ZERO_EXTEND_WITH_AND
       || !optimize_function_for_speed_p (cfun))))
                return NULL;
              *pmatch_len_ = 1;
              return gen_peephole2_43 (insn, operands);

            case 5:
              x5 = XVECEXP (x4, 0, 0);
              x6 = XEXP (x5, 1);
              x7 = XEXP (x6, 1);
              operands[1] = x7;
              if (x86_64_general_operand (operands[1], E_SImode)
                  && 
#line 14037 "../../gcc/config/i386/i386.md"
(!reg_mentioned_p (operands[0], operands[1])))
                {
                  *pmatch_len_ = 1;
                  res = gen_peephole2_133 (insn, operands);
                  if (res != NULL_RTX)
                    return res;
                }
              if (!rtx_equal_p (x7, operands[0]))
                return NULL;
              *pmatch_len_ = 1;
              return gen_peephole2_145 (insn, operands);

            case 6:
              x5 = XVECEXP (x4, 0, 0);
              x6 = XEXP (x5, 1);
              x7 = XEXP (x6, 1);
              operands[1] = x7;
              if (x86_64_general_operand (operands[1], E_SImode)
                  && 
#line 14037 "../../gcc/config/i386/i386.md"
(!reg_mentioned_p (operands[0], operands[1])))
                {
                  *pmatch_len_ = 1;
                  res = gen_peephole2_134 (insn, operands);
                  if (res != NULL_RTX)
                    return res;
                }
              if (!rtx_equal_p (x7, operands[0]))
                return NULL;
              *pmatch_len_ = 1;
              return gen_peephole2_146 (insn, operands);

            case 7:
              x5 = XVECEXP (x4, 0, 0);
              x6 = XEXP (x5, 1);
              x7 = XEXP (x6, 1);
              operands[1] = x7;
              if (x86_64_general_operand (operands[1], E_SImode)
                  && 
#line 14037 "../../gcc/config/i386/i386.md"
(!reg_mentioned_p (operands[0], operands[1])))
                {
                  *pmatch_len_ = 1;
                  res = gen_peephole2_135 (insn, operands);
                  if (res != NULL_RTX)
                    return res;
                }
              if (!rtx_equal_p (x7, operands[0]))
                return NULL;
              *pmatch_len_ = 1;
              return gen_peephole2_147 (insn, operands);

            case 8:
              if (!
#line 14331 "../../gcc/config/i386/i386.md"
(REGNO (operands[0]) != REGNO (operands[1])))
                return NULL;
              *pmatch_len_ = 3;
              return gen_peephole2_153 (insn, operands);

            default:
              return NULL;
            }

        case E_DImode:
          x4 = PATTERN (peep2_next_insn (1));
          switch (pattern1349 (x4, 
E_DImode))
            {
            case 0:
              if (!(
#line 3643 "../../gcc/config/i386/i386.md"
(REGNO (operands[0]) == REGNO (operands[1])) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return NULL;
              *pmatch_len_ = 1;
              return gen_peephole2_30 (insn, operands);

            case 1:
              if (!(
#line 3643 "../../gcc/config/i386/i386.md"
(REGNO (operands[0]) == REGNO (operands[1])) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return NULL;
              *pmatch_len_ = 1;
              return gen_peephole2_32 (insn, operands);

            case 2:
              if (!(
#line 3643 "../../gcc/config/i386/i386.md"
(REGNO (operands[0]) == REGNO (operands[1])) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return NULL;
              *pmatch_len_ = 1;
              return gen_peephole2_34 (insn, operands);

            case 3:
              if (!(
#line 4937 "../../gcc/config/i386/i386.md"
(REGNO (operands[0]) == REGNO (operands[1])
   && (DImode != SImode
       || !TARGET_ZERO_EXTEND_WITH_AND
       || !optimize_function_for_speed_p (cfun))) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return NULL;
              *pmatch_len_ = 1;
              return gen_peephole2_42 (insn, operands);

            case 4:
              if (!(
#line 4937 "../../gcc/config/i386/i386.md"
(REGNO (operands[0]) == REGNO (operands[1])
   && (DImode != SImode
       || !TARGET_ZERO_EXTEND_WITH_AND
       || !optimize_function_for_speed_p (cfun))) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return NULL;
              *pmatch_len_ = 1;
              return gen_peephole2_44 (insn, operands);

            case 5:
              x5 = XVECEXP (x4, 0, 0);
              x6 = XEXP (x5, 1);
              x7 = XEXP (x6, 1);
              operands[1] = x7;
              if (x86_64_general_operand (operands[1], E_DImode)
                  && (
#line 14037 "../../gcc/config/i386/i386.md"
(!reg_mentioned_p (operands[0], operands[1])) && 
#line 1161 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                {
                  *pmatch_len_ = 1;
                  res = gen_peephole2_136 (insn, operands);
                  if (res != NULL_RTX)
                    return res;
                }
              if (!rtx_equal_p (x7, operands[0])
                  || !
#line 1161 "../../gcc/config/i386/i386.md"
(TARGET_64BIT))
                return NULL;
              *pmatch_len_ = 1;
              return gen_peephole2_148 (insn, operands);

            case 6:
              x5 = XVECEXP (x4, 0, 0);
              x6 = XEXP (x5, 1);
              x7 = XEXP (x6, 1);
              operands[1] = x7;
              if (x86_64_general_operand (operands[1], E_DImode)
                  && (
#line 14037 "../../gcc/config/i386/i386.md"
(!reg_mentioned_p (operands[0], operands[1])) && 
#line 1161 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                {
                  *pmatch_len_ = 1;
                  res = gen_peephole2_137 (insn, operands);
                  if (res != NULL_RTX)
                    return res;
                }
              if (!rtx_equal_p (x7, operands[0])
                  || !
#line 1161 "../../gcc/config/i386/i386.md"
(TARGET_64BIT))
                return NULL;
              *pmatch_len_ = 1;
              return gen_peephole2_149 (insn, operands);

            case 7:
              x5 = XVECEXP (x4, 0, 0);
              x6 = XEXP (x5, 1);
              x7 = XEXP (x6, 1);
              operands[1] = x7;
              if (x86_64_general_operand (operands[1], E_DImode)
                  && (
#line 14037 "../../gcc/config/i386/i386.md"
(!reg_mentioned_p (operands[0], operands[1])) && 
#line 1161 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                {
                  *pmatch_len_ = 1;
                  res = gen_peephole2_138 (insn, operands);
                  if (res != NULL_RTX)
                    return res;
                }
              if (!rtx_equal_p (x7, operands[0])
                  || !
#line 1161 "../../gcc/config/i386/i386.md"
(TARGET_64BIT))
                return NULL;
              *pmatch_len_ = 1;
              return gen_peephole2_150 (insn, operands);

            case 8:
              if (!(
#line 14331 "../../gcc/config/i386/i386.md"
(REGNO (operands[0]) != REGNO (operands[1])) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return NULL;
              *pmatch_len_ = 3;
              return gen_peephole2_154 (insn, operands);

            default:
              return NULL;
            }

        case E_QImode:
          x4 = PATTERN (peep2_next_insn (1));
          switch (pattern1350 (x4, 
E_QImode))
            {
            case 0:
              x5 = XVECEXP (x4, 0, 0);
              x6 = XEXP (x5, 1);
              x7 = XEXP (x6, 1);
              operands[1] = x7;
              if (general_operand (operands[1], E_QImode)
                  && 
#line 14037 "../../gcc/config/i386/i386.md"
(!reg_mentioned_p (operands[0], operands[1])))
                {
                  *pmatch_len_ = 1;
                  res = gen_peephole2_127 (insn, operands);
                  if (res != NULL_RTX)
                    return res;
                }
              if (!rtx_equal_p (x7, operands[0]))
                return NULL;
              *pmatch_len_ = 1;
              return gen_peephole2_139 (insn, operands);

            case 1:
              x5 = XVECEXP (x4, 0, 0);
              x6 = XEXP (x5, 1);
              x7 = XEXP (x6, 1);
              operands[1] = x7;
              if (general_operand (operands[1], E_QImode)
                  && 
#line 14037 "../../gcc/config/i386/i386.md"
(!reg_mentioned_p (operands[0], operands[1])))
                {
                  *pmatch_len_ = 1;
                  res = gen_peephole2_128 (insn, operands);
                  if (res != NULL_RTX)
                    return res;
                }
              if (!rtx_equal_p (x7, operands[0]))
                return NULL;
              *pmatch_len_ = 1;
              return gen_peephole2_140 (insn, operands);

            case 2:
              x5 = XVECEXP (x4, 0, 0);
              x6 = XEXP (x5, 1);
              x7 = XEXP (x6, 1);
              operands[1] = x7;
              if (general_operand (operands[1], E_QImode)
                  && 
#line 14037 "../../gcc/config/i386/i386.md"
(!reg_mentioned_p (operands[0], operands[1])))
                {
                  *pmatch_len_ = 1;
                  res = gen_peephole2_129 (insn, operands);
                  if (res != NULL_RTX)
                    return res;
                }
              if (!rtx_equal_p (x7, operands[0]))
                return NULL;
              *pmatch_len_ = 1;
              return gen_peephole2_141 (insn, operands);

            default:
              return NULL;
            }

        case E_HImode:
          x4 = PATTERN (peep2_next_insn (1));
          switch (pattern1350 (x4, 
E_HImode))
            {
            case 0:
              x5 = XVECEXP (x4, 0, 0);
              x6 = XEXP (x5, 1);
              x7 = XEXP (x6, 1);
              operands[1] = x7;
              if (general_operand (operands[1], E_HImode)
                  && 
#line 14037 "../../gcc/config/i386/i386.md"
(!reg_mentioned_p (operands[0], operands[1])))
                {
                  *pmatch_len_ = 1;
                  res = gen_peephole2_130 (insn, operands);
                  if (res != NULL_RTX)
                    return res;
                }
              if (!rtx_equal_p (x7, operands[0]))
                return NULL;
              *pmatch_len_ = 1;
              return gen_peephole2_142 (insn, operands);

            case 1:
              x5 = XVECEXP (x4, 0, 0);
              x6 = XEXP (x5, 1);
              x7 = XEXP (x6, 1);
              operands[1] = x7;
              if (general_operand (operands[1], E_HImode)
                  && 
#line 14037 "../../gcc/config/i386/i386.md"
(!reg_mentioned_p (operands[0], operands[1])))
                {
                  *pmatch_len_ = 1;
                  res = gen_peephole2_131 (insn, operands);
                  if (res != NULL_RTX)
                    return res;
                }
              if (!rtx_equal_p (x7, operands[0]))
                return NULL;
              *pmatch_len_ = 1;
              return gen_peephole2_143 (insn, operands);

            case 2:
              x5 = XVECEXP (x4, 0, 0);
              x6 = XEXP (x5, 1);
              x7 = XEXP (x6, 1);
              operands[1] = x7;
              if (general_operand (operands[1], E_HImode)
                  && 
#line 14037 "../../gcc/config/i386/i386.md"
(!reg_mentioned_p (operands[0], operands[1])))
                {
                  *pmatch_len_ = 1;
                  res = gen_peephole2_132 (insn, operands);
                  if (res != NULL_RTX)
                    return res;
                }
              if (!rtx_equal_p (x7, operands[0]))
                return NULL;
              *pmatch_len_ = 1;
              return gen_peephole2_144 (insn, operands);

            default:
              return NULL;
            }

        default:
          return NULL;
        }

    case ZERO_EXTRACT:
      if (pattern1066 (x3) != 0
          || !
#line 19081 "../../gcc/config/i386/i386.md"
(TARGET_64BIT && !TARGET_USE_BT))
        return NULL;
      *pmatch_len_ = 0;
      return gen_peephole2_166 (insn, operands);

    default:
      return NULL;
    }
}
