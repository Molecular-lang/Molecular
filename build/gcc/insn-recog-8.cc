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
pattern7 (rtx x1, machine_mode i1)
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
pattern12 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!memory_operand (operands[0], E_V8QImode)
      || GET_MODE (x1) != E_V8QImode)
    return -1;
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
pattern20 (rtx x1, int *pnum_clobbers)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  operands[0] = x2;
  x3 = XEXP (x1, 1);
  x4 = XEXP (x3, 0);
  operands[1] = x4;
  x5 = XEXP (x3, 1);
  switch (GET_CODE (x5))
    {
    case AND:
      return pattern19 (x3, pnum_clobbers); /* [-1, 1] */

    case PLUS:
      if (pnum_clobbers == NULL
          || GET_MODE (x5) != E_QImode)
        return -1;
      x6 = XEXP (x5, 0);
      operands[2] = x6;
      if (!nonimmediate_operand (operands[2], E_QImode))
        return -1;
      res = pattern17 (x3);
      if (res >= 0)
        return res + 2; /* [2, 3] */
      return -1;

    case MINUS:
      if (pnum_clobbers == NULL
          || GET_MODE (x5) != E_QImode)
        return -1;
      x6 = XEXP (x5, 0);
      operands[3] = x6;
      if (!const_int_operand (operands[3], E_QImode))
        return -1;
      x7 = XEXP (x5, 1);
      operands[2] = x7;
      if (!nonimmediate_operand (operands[2], E_QImode))
        return -1;
      res = pattern16 (x3);
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
pattern38 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) != E_TImode)
    return -1;
  x4 = XEXP (x1, 0);
  operands[0] = x4;
  if (!nonimmediate_operand (operands[0], E_TImode)
      || GET_MODE (x2) != E_TImode)
    return -1;
  x5 = XEXP (x3, 0);
  operands[1] = x5;
  if (!nonimmediate_operand (operands[1], E_DImode))
    return -1;
  x6 = XEXP (x2, 1);
  switch (GET_CODE (x6))
    {
    case ASHIFT:
      if (GET_MODE (x6) != E_TImode)
        return -1;
      return pattern37 (x6, 
E_TImode, 
E_DImode); /* [-1, 2] */

    case CONST_INT:
    case CONST_WIDE_INT:
      operands[2] = x6;
      if (!const_scalar_int_operand (operands[2], E_TImode))
        return -1;
      return 3;

    default:
      return -1;
    }
}

int
pattern41 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i2)
      || GET_MODE (x1) != i2)
    return -1;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  operands[1] = x3;
  if (!nonimmediate_operand (operands[1], i1))
    return -1;
  x4 = XEXP (x1, 1);
  operands[2] = x4;
  if (!const_int_operand (operands[2], E_QImode))
    return -1;
  return 0;
}

int
pattern44 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  if (GET_CODE (x2) != REG
      || REGNO (x2) != 17
      || GET_MODE (x2) != i1)
    return -1;
  x3 = XEXP (x1, 1);
  if (GET_MODE (x3) != i1)
    return -1;
  return 0;
}

int
pattern49 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  operands[1] = x2;
  switch (GET_MODE (operands[0]))
    {
    case E_V16QImode:
      if (!nonimmediate_operand (operands[0], E_V16QImode)
          || GET_MODE (x1) != E_V16QImode)
        return -1;
      switch (GET_MODE (operands[1]))
        {
        case E_V16SImode:
          if (!register_operand (operands[1], E_V16SImode))
            return -1;
          return 0;

        case E_V16HImode:
          if (!register_operand (operands[1], E_V16HImode))
            return -1;
          return 1;

        default:
          return -1;
        }

    case E_V16HImode:
      if (!nonimmediate_operand (operands[0], E_V16HImode)
          || GET_MODE (x1) != E_V16HImode
          || !register_operand (operands[1], E_V16SImode))
        return -1;
      return 2;

    case E_V8SImode:
      if (!nonimmediate_operand (operands[0], E_V8SImode)
          || GET_MODE (x1) != E_V8SImode
          || !register_operand (operands[1], E_V8DImode))
        return -1;
      return 3;

    case E_V8HImode:
      if (!nonimmediate_operand (operands[0], E_V8HImode)
          || GET_MODE (x1) != E_V8HImode)
        return -1;
      switch (GET_MODE (operands[1]))
        {
        case E_V8DImode:
          if (!register_operand (operands[1], E_V8DImode))
            return -1;
          return 4;

        case E_V8SImode:
          if (!register_operand (operands[1], E_V8SImode))
            return -1;
          return 5;

        default:
          return -1;
        }

    case E_V32QImode:
      if (!nonimmediate_operand (operands[0], E_V32QImode)
          || GET_MODE (x1) != E_V32QImode
          || !register_operand (operands[1], E_V32HImode))
        return -1;
      return 6;

    case E_V4SImode:
      if (!nonimmediate_operand (operands[0], E_V4SImode)
          || GET_MODE (x1) != E_V4SImode
          || !register_operand (operands[1], E_V4DImode))
        return -1;
      return 7;

    default:
      return -1;
    }
}

int
pattern75 (rtx x1, int *pnum_clobbers)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  operands[2] = x3;
  x4 = XEXP (x1, 0);
  switch (GET_CODE (x4))
    {
    case STRICT_LOW_PART:
      return pattern71 (x1, pnum_clobbers); /* [-1, 1] */

    case REG:
    case SUBREG:
    case MEM:
      operands[0] = x4;
      switch (GET_MODE (operands[0]))
        {
        case E_TImode:
          if (pattern72 (x2, pnum_clobbers) != 0)
            return -1;
          return 2;

        case E_HImode:
          if (pattern73 (x2, 
E_HImode) != 0)
            return -1;
          return 3;

        case E_V2SFmode:
          if (pattern7 (x2, 
E_V2SFmode) != 0)
            return -1;
          return 4;

        case E_V2BFmode:
          if (pattern7 (x2, 
E_V2BFmode) != 0)
            return -1;
          return 5;

        case E_V4BFmode:
          if (pattern7 (x2, 
E_V4BFmode) != 0)
            return -1;
          return 6;

        case E_V2HFmode:
          if (pattern7 (x2, 
E_V2HFmode) != 0)
            return -1;
          return 7;

        case E_V4HFmode:
          if (pattern7 (x2, 
E_V4HFmode) != 0)
            return -1;
          return 8;

        case E_V8QImode:
          if (pattern8 (x2, 
E_V8QImode) != 0)
            return -1;
          return 9;

        case E_V4HImode:
          if (pattern8 (x2, 
E_V4HImode) != 0)
            return -1;
          return 10;

        case E_V2SImode:
          if (pattern8 (x2, 
E_V2SImode) != 0)
            return -1;
          return 11;

        case E_V4QImode:
          if (pattern74 (x2, pnum_clobbers, 
E_V4QImode) != 0)
            return -1;
          return 12;

        case E_V2QImode:
          if (pattern74 (x2, pnum_clobbers, 
E_V2QImode) != 0)
            return -1;
          return 13;

        case E_V2HImode:
          if (pattern74 (x2, pnum_clobbers, 
E_V2HImode) != 0)
            return -1;
          return 14;

        case E_BFmode:
          if (pattern7 (x2, 
E_BFmode) != 0)
            return -1;
          return 15;

        case E_HFmode:
          if (pattern7 (x2, 
E_HFmode) != 0)
            return -1;
          return 16;

        case E_SFmode:
          if (pattern7 (x2, 
E_SFmode) != 0)
            return -1;
          return 17;

        case E_DFmode:
          if (pattern7 (x2, 
E_DFmode) != 0)
            return -1;
          return 18;

        case E_TFmode:
          if (pattern25 (x2, 
E_TFmode) != 0)
            return -1;
          return 19;

        default:
          return -1;
        }

    default:
      return -1;
    }
}

int
pattern108 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  operands[1] = x3;
  x4 = XEXP (x2, 1);
  operands[2] = x4;
  switch (GET_MODE (operands[0]))
    {
    case E_DImode:
      if (!register_operand (operands[0], E_DImode)
          || GET_MODE (x1) != E_DImode)
        return -1;
      switch (GET_MODE (x2))
        {
        case E_SImode:
          if (!nonimmediate_operand (operands[1], E_SImode))
            return -1;
          return 0;

        case E_QImode:
          if (!nonimmediate_operand (operands[1], E_QImode)
              || !nonmemory_operand (operands[2], E_QImode))
            return -1;
          return 1;

        case E_HImode:
          if (!nonimmediate_operand (operands[1], E_HImode)
              || !nonmemory_operand (operands[2], E_QImode))
            return -1;
          return 2;

        default:
          return -1;
        }

    case E_SImode:
      if (!register_operand (operands[0], E_SImode)
          || GET_MODE (x1) != E_SImode
          || !nonmemory_operand (operands[2], E_QImode))
        return -1;
      switch (GET_MODE (x2))
        {
        case E_QImode:
          if (!nonimmediate_operand (operands[1], E_QImode))
            return -1;
          return 3;

        case E_HImode:
          if (!nonimmediate_operand (operands[1], E_HImode))
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
pattern127 (rtx x1, machine_mode i1, machine_mode i2)
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
      || !nonimm_or_0_operand (operands[3], i1)
      || !register_operand (operands[4], i2))
    return -1;
  return 0;
}

int
pattern139 (rtx x1)
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
    case E_V16HImode:
      return pattern128 (x1, 
E_HImode, 
E_V16HImode); /* [-1, 0] */

    case E_V8HImode:
      if (pattern128 (x1, 
E_QImode, 
E_V8HImode) != 0)
        return -1;
      return 1;

    case E_V8SImode:
      if (pattern128 (x1, 
E_QImode, 
E_V8SImode) != 0)
        return -1;
      return 2;

    case E_V4SImode:
      if (pattern128 (x1, 
E_QImode, 
E_V4SImode) != 0)
        return -1;
      return 3;

    case E_V4DImode:
      if (pattern128 (x1, 
E_QImode, 
E_V4DImode) != 0)
        return -1;
      return 4;

    case E_V2DImode:
      if (pattern128 (x1, 
E_QImode, 
E_V2DImode) != 0)
        return -1;
      return 5;

    case E_V32HImode:
      if (pattern128 (x1, 
E_SImode, 
E_V32HImode) != 0)
        return -1;
      return 6;

    case E_V16SImode:
      if (pattern128 (x1, 
E_HImode, 
E_V16SImode) != 0)
        return -1;
      return 7;

    case E_V8DImode:
      if (pattern128 (x1, 
E_QImode, 
E_V8DImode) != 0)
        return -1;
      return 8;

    default:
      return -1;
    }
}

int
pattern148 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6;
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
        case E_V16HImode:
          return pattern146 (x1, 
E_V16HImode, 
E_V16QImode, 
E_HImode); /* [-1, 0] */

        case E_V32HImode:
          if (pattern146 (x1, 
E_V32HImode, 
E_V32QImode, 
E_SImode) != 0)
            return -1;
          return 1;

        case E_V8HImode:
          if (pattern147 (x1, 
E_V8HImode, 
E_V8QImode) != 0)
            return -1;
          return 2;

        case E_V16SImode:
          if (!register_operand (operands[0], E_V16SImode)
              || GET_MODE (x1) != E_V16SImode
              || GET_MODE (x4) != E_V16SImode
              || !nonimm_or_0_operand (operands[2], E_V16SImode)
              || !register_operand (operands[3], E_HImode))
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
              || GET_MODE (x1) != E_V8SImode
              || GET_MODE (x4) != E_V8SImode
              || !nonimm_or_0_operand (operands[2], E_V8SImode)
              || !register_operand (operands[3], E_QImode))
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
              || GET_MODE (x1) != E_V4SImode
              || GET_MODE (x4) != E_V4SImode
              || !nonimm_or_0_operand (operands[2], E_V4SImode)
              || !register_operand (operands[3], E_QImode))
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
              || GET_MODE (x1) != E_V8DImode
              || GET_MODE (x4) != E_V8DImode
              || !nonimm_or_0_operand (operands[2], E_V8DImode)
              || !register_operand (operands[3], E_QImode))
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
              || GET_MODE (x1) != E_V4DImode
              || GET_MODE (x4) != E_V4DImode
              || !nonimm_or_0_operand (operands[2], E_V4DImode)
              || !register_operand (operands[3], E_QImode))
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
              || GET_MODE (x1) != E_V2DImode
              || GET_MODE (x4) != E_V2DImode
              || !nonimm_or_0_operand (operands[2], E_V2DImode)
              || !register_operand (operands[3], E_QImode))
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
      x6 = XEXP (x5, 1);
      if (GET_CODE (x6) != PARALLEL)
        return -1;
      return 18;

    default:
      return -1;
    }
}

int
pattern197 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  operands[0] = x2;
  x3 = XEXP (x1, 1);
  x4 = XEXP (x3, 1);
  x5 = XEXP (x4, 0);
  operands[3] = x5;
  if (!const_int_operand (operands[3], E_QImode))
    return -1;
  x6 = XEXP (x4, 1);
  operands[2] = x6;
  if (!register_operand (operands[2], E_QImode))
    return -1;
  return pattern195 (x3); /* [-1, 1] */
}

int
pattern203 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  operands[3] = x3;
  if (!const_int_operand (operands[3], E_QImode))
    return -1;
  return pattern202 (x1); /* [-1, 3] */
}

int
pattern204 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  operands[2] = x3;
  if (!register_operand (operands[2], E_QImode))
    return -1;
  return pattern203 (x1); /* [-1, 3] */
}

int
pattern207 (rtx x1)
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
  x6 = XEXP (x5, 0);
  operands[1] = x6;
  x7 = XEXP (x5, 1);
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
      return 0;

    case AND:
      if (GET_MODE (x7) != E_QImode)
        return -1;
      x8 = XEXP (x4, 0);
      operands[0] = x8;
      res = pattern204 (x5);
      if (res >= 0)
        return res + 1; /* [1, 4] */
      return -1;

    case PLUS:
      if (GET_MODE (x7) != E_QImode)
        return -1;
      x8 = XEXP (x4, 0);
      operands[0] = x8;
      res = pattern205 (x5);
      if (res >= 0)
        return res + 5; /* [5, 8] */
      return -1;

    case MINUS:
      if (GET_MODE (x7) != E_QImode)
        return -1;
      x8 = XEXP (x4, 0);
      operands[0] = x8;
      res = pattern206 (x5);
      if (res >= 0)
        return res + 9; /* [9, 12] */
      return -1;

    default:
      return -1;
    }
}

int
pattern223 (rtx x1, machine_mode i1)
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
pattern230 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) != E_QImode)
    return -1;
  x3 = XEXP (x2, 0);
  if (!ix86_comparison_operator (x3, E_VOIDmode))
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
  if (x6 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
    return -1;
  x7 = XEXP (x1, 0);
  switch (GET_CODE (x7))
    {
    case REG:
    case SUBREG:
    case MEM:
      operands[0] = x7;
      if (!nonimmediate_operand (operands[0], E_QImode))
        return -1;
      return 0;

    case STRICT_LOW_PART:
      x8 = XEXP (x7, 0);
      operands[0] = x8;
      if (!register_operand (operands[0], E_QImode))
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern246 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XVECEXP (x2, 0, 1);
  if (x3 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
    return -1;
  x4 = XEXP (x1, 0);
  if (GET_CODE (x4) != REG
      || REGNO (x4) != 17
      || GET_MODE (x4) != E_CCCmode)
    return -1;
  return 0;
}

int
pattern256 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) != i2
      || !nonimmediate_operand (operands[0], i2)
      || GET_MODE (x1) != i2
      || GET_MODE (x2) != i2)
    return -1;
  x4 = XEXP (x3, 0);
  operands[1] = x4;
  if (!nonimmediate_operand (operands[1], i1))
    return -1;
  x5 = XEXP (x2, 1);
  operands[2] = x5;
  if (!const_int_operand (operands[2], E_QImode))
    return -1;
  x6 = XEXP (x1, 1);
  return pattern255 (x6, 
i1, 
i2); /* [-1, 1] */
}

int
pattern262 (rtx x1, int *pnum_clobbers)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4;
  int res ATTRIBUTE_UNUSED;
  if (pnum_clobbers == NULL)
    return -1;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  operands[0] = x3;
  x4 = XEXP (x1, 1);
  return pattern39 (x4); /* [-1, 1] */
}

int
pattern266 (rtx x1, int *pnum_clobbers)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
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
      x3 = XEXP (x1, 1);
      return pattern2 (x3); /* [-1, 1] */

    case STRICT_LOW_PART:
      res = pattern262 (x1, pnum_clobbers);
      if (res >= 0)
        return res + 2; /* [2, 3] */
      return -1;

    default:
      return -1;
    }
}

int
pattern276 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  switch (GET_MODE (operands[0]))
    {
    case E_SImode:
      if (!register_operand (operands[0], E_SImode)
          || GET_MODE (x1) != E_SImode)
        return -1;
      x2 = XEXP (x1, 0);
      switch (GET_MODE (x2))
        {
        case E_QImode:
          return 0;

        case E_HImode:
          return 1;

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
          return 2;

        case E_HImode:
          return 3;

        case E_SImode:
          return 4;

        default:
          return -1;
        }

    default:
      return -1;
    }
}

int
pattern288 (rtx x1, rtx_code i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) != E_QImode)
    return -1;
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) != CONST_INT)
    return -1;
  x5 = XEXP (x1, 1);
  if (GET_CODE (x5) != SUBREG
      || maybe_ne (SUBREG_BYTE (x5), 0))
    return -1;
  x6 = XEXP (x5, 0);
  if (GET_CODE (x6) != i1)
    return -1;
  x7 = XEXP (x6, 0);
  if (GET_CODE (x7) != ZERO_EXTEND)
    return -1;
  x8 = XEXP (x6, 1);
  if (GET_CODE (x8) != MINUS
      || GET_MODE (x8) != E_QImode)
    return -1;
  x9 = XEXP (x8, 0);
  if (GET_CODE (x9) != CONST_INT)
    return -1;
  x10 = XEXP (x8, 1);
  if (GET_CODE (x10) != AND
      || GET_MODE (x10) != E_QImode)
    return -1;
  x11 = XEXP (x10, 1);
  if (GET_CODE (x11) != CONST_INT)
    return -1;
  x12 = XEXP (x3, 0);
  if (!nonmemory_operand (x12, E_QImode))
    return -1;
  switch (XWINT (x4, 0))
    {
    case 63L:
      if (XWINT (x9, 0) != 64L
          || XWINT (x11, 0) != 63L
          || pattern287 (x1, 
E_DImode, 
E_TImode) != 0)
        return -1;
      return 0;

    case 31L:
      if (XWINT (x9, 0) != 32L
          || XWINT (x11, 0) != 31L)
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern307 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10;
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
  x7 = XEXP (x1, 2);
  if (x7 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
    return -1;
  x8 = XEXP (x4, 0);
  operands[1] = x8;
  x9 = XEXP (x3, 1);
  operands[2] = x9;
  x10 = XEXP (x1, 1);
  if (!rtx_equal_p (x10, operands[1]))
    return -1;
  switch (GET_MODE (operands[0]))
    {
    case E_V8HFmode:
      return pattern306 (x1, 
E_HFmode, 
E_V8HFmode); /* [-1, 0] */

    case E_V4SFmode:
      if (pattern306 (x1, 
E_SFmode, 
E_V4SFmode) != 0)
        return -1;
      return 1;

    case E_V2DFmode:
      if (pattern306 (x1, 
E_DFmode, 
E_V2DFmode) != 0)
        return -1;
      return 2;

    default:
      return -1;
    }
}

int
pattern323 (rtx x1, machine_mode i1, machine_mode i2, machine_mode i3)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  operands[1] = x2;
  switch (GET_MODE (operands[0]))
    {
    case E_V32HImode:
      if (!register_operand (operands[0], E_V32HImode)
          || GET_MODE (x1) != E_V32HImode
          || !vector_operand (operands[1], i1))
        return -1;
      return 0;

    case E_V16HImode:
      if (!register_operand (operands[0], E_V16HImode)
          || GET_MODE (x1) != E_V16HImode
          || !vector_operand (operands[1], i2))
        return -1;
      return 1;

    case E_V8HImode:
      if (!register_operand (operands[0], E_V8HImode)
          || GET_MODE (x1) != E_V8HImode
          || !vector_operand (operands[1], i3))
        return -1;
      return 2;

    default:
      return -1;
    }
}

int
pattern327 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) != VEC_SELECT)
    return -1;
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) != PARALLEL)
    return -1;
  x5 = XEXP (x1, 1);
  if (GET_CODE (x5) != SIGN_EXTEND)
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
  return 0;
}

int
pattern332 (rtx x1, machine_mode i1, machine_mode i2, machine_mode i3)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7;
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
  if (GET_MODE (x4) != i1
      || !nonimmediate_operand (operands[1], i3))
    return -1;
  x5 = XEXP (x2, 1);
  if (GET_MODE (x5) != i2)
    return -1;
  x6 = XEXP (x5, 0);
  if (GET_MODE (x6) != i1)
    return -1;
  x7 = XEXP (x1, 1);
  return pattern331 (x7, 
i1, 
i2); /* [-1, 0] */
}

int
pattern336 (rtx x1, machine_mode i1)
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
      || !const1_operand (operands[3], i1))
    return -1;
  return 0;
}

int
pattern339 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
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
  x9 = XEXP (x7, 1);
  operands[2] = x9;
  return 0;
}

int
pattern343 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  operands[1] = x3;
  x4 = XEXP (x2, 1);
  operands[2] = x4;
  return pattern342 (x1); /* [-1, 5] */
}

int
pattern344 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6;
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
  return pattern343 (x6); /* [-1, 5] */
}

int
pattern349 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
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
  x9 = XEXP (x7, 1);
  operands[2] = x9;
  return pattern348 (x6); /* [-1, 5] */
}

int
pattern355 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  x4 = XEXP (x3, 0);
  x5 = XEXP (x4, 0);
  if (GET_CODE (x5) != ASHIFT)
    return -1;
  x6 = XEXP (x5, 0);
  if (GET_CODE (x6) != ZERO_EXTEND)
    return -1;
  x7 = XEXP (x4, 1);
  if (GET_CODE (x7) != ZERO_EXTEND)
    return -1;
  x8 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x8) != CLOBBER)
    return -1;
  x9 = XEXP (x8, 0);
  if (GET_CODE (x9) != REG
      || REGNO (x9) != 17
      || GET_MODE (x9) != E_CCmode)
    return -1;
  x10 = XEXP (x2, 0);
  operands[0] = x10;
  return pattern354 (x3); /* [-1, 3] */
}

int
pattern360 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  x4 = XEXP (x3, 0);
  x5 = XEXP (x4, 1);
  if (x5 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
    return -1;
  x6 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x6) != CLOBBER)
    return -1;
  x7 = XEXP (x6, 0);
  if (GET_CODE (x7) != REG
      || REGNO (x7) != 17
      || GET_MODE (x7) != E_CCmode)
    return -1;
  return pattern359 (x2); /* [-1, 3] */
}

int
pattern366 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) != E_V2SImode)
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
  if (!register_operand (operands[0], E_V2SImode))
    return -1;
  x7 = XEXP (x3, 0);
  operands[1] = x7;
  if (!register_operand (operands[1], E_V2SFmode))
    return -1;
  x8 = XEXP (x3, 1);
  operands[2] = x8;
  if (!nonimmediate_operand (operands[2], E_V2SFmode))
    return -1;
  return 0;
}

int
pattern374 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  x4 = XEXP (x3, 0);
  operands[1] = x4;
  x5 = XEXP (x2, 0);
  switch (GET_CODE (x5))
    {
    case REG:
    case SUBREG:
    case MEM:
      operands[0] = x5;
      x6 = XVECEXP (x1, 0, 1);
      switch (GET_CODE (x6))
        {
        case CLOBBER:
          return 0;

        case USE:
          return 1;

        default:
          return -1;
        }

    case STRICT_LOW_PART:
      x6 = XVECEXP (x1, 0, 1);
      if (GET_CODE (x6) != CLOBBER)
        return -1;
      x7 = XEXP (x6, 0);
      if (GET_CODE (x7) != REG
          || REGNO (x7) != 17
          || GET_MODE (x7) != E_CCmode)
        return -1;
      x8 = XEXP (x5, 0);
      operands[0] = x8;
      res = pattern373 (x3);
      if (res >= 0)
        return res + 2; /* [2, 3] */
      return -1;

    default:
      return -1;
    }
}

int
pattern390 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 2);
  x3 = XEXP (x2, 0);
  operands[4] = x3;
  switch (GET_MODE (operands[0]))
    {
    case E_HImode:
      return pattern389 (x1, 
E_HImode); /* [-1, 0] */

    case E_SImode:
      if (pattern389 (x1, 
E_SImode) != 0)
        return -1;
      return 1;

    case E_DImode:
      if (pattern389 (x1, 
E_DImode) != 0)
        return -1;
      return 2;

    default:
      return -1;
    }
}

int
pattern397 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  if (!nonimmediate_operand (operands[0], i1)
      || GET_MODE (x1) != i1)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != i1
      || !nonimmediate_operand (operands[1], i2))
    return -1;
  x3 = XEXP (x1, 1);
  if (GET_MODE (x3) != i1
      || !register_operand (operands[2], i1))
    return -1;
  return 0;
}

int
pattern404 (rtx x1)
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
pattern412 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8;
  int res ATTRIBUTE_UNUSED;
  if (!general_reg_operand (operands[0], i1)
      || GET_CODE (x1) != PARALLEL
      || XVECLEN (x1, 0) != 2)
    return -1;
  x2 = XVECEXP (x1, 0, 0);
  if (GET_CODE (x2) != SET)
    return -1;
  x3 = XEXP (x2, 1);
  if (!commutative_operator (x3, i1))
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
  if (!memory_operand (operands[2], i1))
    return -1;
  x7 = XEXP (x3, 0);
  if (!rtx_equal_p (x7, operands[0]))
    return -1;
  x8 = XEXP (x2, 0);
  if (!rtx_equal_p (x8, operands[0]))
    return -1;
  return 0;
}

int
pattern424 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (GET_MODE (x1) != i1)
    return -1;
  switch (GET_MODE (operands[1]))
    {
    case E_SFmode:
      if (!nonimmediate_operand (operands[1], E_SFmode))
        return -1;
      return 0;

    case E_DFmode:
      if (!nonimmediate_operand (operands[1], E_DFmode))
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern432 (rtx x1, int *pnum_clobbers)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6;
  int res ATTRIBUTE_UNUSED;
  if (pnum_clobbers == NULL)
    return -1;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
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
pattern443 (rtx x1, int *pnum_clobbers)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  if (pnum_clobbers == NULL)
    return -1;
  operands[2] = x1;
  x2 = XEXP (x1, 0);
  if (GET_CODE (x2) != REG
      || REGNO (x2) != 17)
    return -1;
  x3 = XEXP (x1, 1);
  if (x3 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
    return -1;
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
pattern451 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 0);
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
  x7 = XVECEXP (x1, 0, 1);
  operands[2] = x7;
  if (!const48_operand (operands[2], E_SImode))
    return -1;
  switch (GET_MODE (operands[0]))
    {
    case E_SImode:
      return pattern450 (x1, 
E_SImode); /* [-1, 2] */

    case E_DImode:
      res = pattern450 (x1, 
E_DImode);
      if (res >= 0)
        return res + 3; /* [3, 5] */
      return -1;

    default:
      return -1;
    }
}

int
pattern463 (rtx x1, machine_mode i1, machine_mode i2, machine_mode i3)
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
      || !nonimmediate_operand (operands[2], i3)
      || !nonimm_or_0_operand (operands[3], i2)
      || !register_operand (operands[4], i1))
    return -1;
  return 0;
}

int
pattern469 (rtx x1, machine_mode i1, machine_mode i2)
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
      || !vector_operand (operands[3], i2)
      || !const0_operand (operands[4], i2))
    return -1;
  x3 = XEXP (x1, 2);
  if (GET_MODE (x3) != i1
      || !register_operand (operands[5], E_QImode))
    return -1;
  return 0;
}

int
pattern477 (rtx x1, machine_mode i1, machine_mode i2)
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
      || !nonimmediate_operand (operands[2], i1)
      || !nonimm_or_0_operand (operands[4], i1)
      || !register_operand (operands[5], i2))
    return -1;
  return 0;
}

int
pattern485 (rtx x1)
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
  x6 = XEXP (x1, 2);
  operands[4] = x6;
  x7 = XEXP (x1, 1);
  switch (GET_CODE (x7))
    {
    case REG:
    case SUBREG:
      if (!rtx_equal_p (x7, operands[1]))
        return -1;
      switch (GET_MODE (operands[0]))
        {
        case E_V16SImode:
          return pattern479 (x1, 
E_V16SImode, 
E_HImode); /* [-1, 0] */

        case E_V8SImode:
          if (pattern479 (x1, 
E_V8SImode, 
E_QImode) != 0)
            return -1;
          return 1;

        case E_V4SImode:
          if (pattern479 (x1, 
E_V4SImode, 
E_QImode) != 0)
            return -1;
          return 2;

        default:
          return -1;
        }

    case CONST_INT:
    case CONST_DOUBLE:
    case CONST_VECTOR:
      operands[5] = x7;
      switch (GET_MODE (operands[0]))
        {
        case E_V16SImode:
          if (pattern484 (x1, 
E_V16SImode, 
E_HImode) != 0)
            return -1;
          return 3;

        case E_V8SImode:
          if (pattern484 (x1, 
E_V8SImode, 
E_QImode) != 0)
            return -1;
          return 4;

        case E_V4SImode:
          if (pattern484 (x1, 
E_V4SImode, 
E_QImode) != 0)
            return -1;
          return 5;

        default:
          return -1;
        }

    default:
      return -1;
    }
}

int
pattern496 ()
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!const0_operand (operands[4], E_V4HFmode))
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
}

int
pattern502 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) != E_V2SImode)
    return -1;
  switch (GET_CODE (x2))
    {
    case VEC_SELECT:
      x3 = XEXP (x2, 1);
      if (GET_CODE (x3) != PARALLEL
          || XVECLEN (x3, 0) != 2)
        return -1;
      x4 = XVECEXP (x3, 0, 0);
      if (x4 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
        return -1;
      x5 = XVECEXP (x3, 0, 1);
      if (x5 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
        return -1;
      x6 = XEXP (x2, 0);
      operands[2] = x6;
      if (!nonimm_or_0_operand (operands[2], E_V4SImode))
        return -1;
      x7 = XEXP (x1, 2);
      operands[3] = x7;
      return 0;

    case CONST_VECTOR:
      if (XVECLEN (x2, 0) != 2)
        return -1;
      x8 = XVECEXP (x2, 0, 0);
      if (x8 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
        return -1;
      x9 = XVECEXP (x2, 0, 1);
      if (x9 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
        return -1;
      x7 = XEXP (x1, 2);
      operands[2] = x7;
      return 1;

    default:
      return -1;
    }
}

int
pattern513 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) != CONST_VECTOR
      || XVECLEN (x2, 0) != 8
      || GET_MODE (x2) != E_V8QImode)
    return -1;
  x3 = XVECEXP (x2, 0, 0);
  if (x3 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
    return -1;
  x4 = XVECEXP (x2, 0, 1);
  if (x4 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
    return -1;
  x5 = XVECEXP (x2, 0, 2);
  if (x5 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
    return -1;
  x6 = XVECEXP (x2, 0, 3);
  if (x6 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
    return -1;
  x7 = XVECEXP (x2, 0, 4);
  if (x7 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
    return -1;
  x8 = XVECEXP (x2, 0, 5);
  if (x8 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
    return -1;
  x9 = XVECEXP (x2, 0, 6);
  if (x9 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
    return -1;
  x10 = XVECEXP (x2, 0, 7);
  if (x10 != const_int_rtx[MAX_SAVED_CONST_INT + 0]
      || !register_operand (operands[0], E_V16QImode)
      || GET_MODE (x1) != E_V16QImode)
    return -1;
  x11 = XEXP (x1, 0);
  if (GET_MODE (x11) != E_V8QImode)
    return -1;
  return 0;
}

int
pattern525 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  if (XVECLEN (x2, 0) < 1)
    return -1;
  operands[4] = x2;
  if (!pmovzx_parallel (operands[4], E_VOIDmode))
    return -1;
  x3 = XEXP (x1, 0);
  x4 = XEXP (x3, 0);
  x5 = XEXP (x4, 0);
  operands[1] = x5;
  x6 = XEXP (x4, 1);
  operands[2] = x6;
  x7 = XEXP (x3, 1);
  operands[3] = x7;
  x8 = XVECEXP (x2, 0, 0);
  operands[5] = x8;
  if (!const_int_operand (operands[5], E_VOIDmode))
    return -1;
  switch (GET_MODE (operands[0]))
    {
    case E_V16SImode:
      return pattern524 (x1, 
E_V16SImode, 
E_V8SImode, 
E_V32SImode); /* [-1, 0] */

    case E_V8SImode:
      if (pattern524 (x1, 
E_V8SImode, 
E_V4SImode, 
E_V16SImode) != 0)
        return -1;
      return 1;

    case E_V4SImode:
      if (!register_operand (operands[0], E_V4SImode)
          || GET_MODE (x1) != E_V4SImode
          || GET_MODE (x3) != E_V8SImode
          || GET_MODE (x4) != E_V4SImode
          || !vector_operand (operands[1], E_V2SImode)
          || !const0_operand (operands[2], E_V2SImode)
          || !const0_operand (operands[3], E_V4SImode))
        return -1;
      return 2;

    default:
      return -1;
    }
}

int
pattern538 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  operands[1] = x4;
  x5 = XEXP (x3, 1);
  operands[2] = x5;
  x6 = XEXP (x2, 1);
  operands[3] = x6;
  x7 = XEXP (x1, 1);
  operands[4] = x7;
  switch (GET_MODE (operands[0]))
    {
    case E_V32HFmode:
      return pattern534 (x1, 
E_V32HFmode); /* [-1, 0] */

    case E_V16HFmode:
      if (pattern534 (x1, 
E_V16HFmode) != 0)
        return -1;
      return 1;

    case E_V8HFmode:
      if (pattern534 (x1, 
E_V8HFmode) != 0)
        return -1;
      return 2;

    case E_V32BFmode:
      if (pattern534 (x1, 
E_V32BFmode) != 0)
        return -1;
      return 3;

    case E_V16BFmode:
      if (pattern534 (x1, 
E_V16BFmode) != 0)
        return -1;
      return 4;

    case E_V8BFmode:
      if (pattern534 (x1, 
E_V8BFmode) != 0)
        return -1;
      return 5;

    case E_V16SFmode:
      if (pattern534 (x1, 
E_V16SFmode) != 0)
        return -1;
      return 6;

    case E_V8SFmode:
      if (pattern534 (x1, 
E_V8SFmode) != 0)
        return -1;
      return 7;

    case E_V4SFmode:
      if (pattern534 (x1, 
E_V4SFmode) != 0)
        return -1;
      return 8;

    case E_V8DFmode:
      if (pattern534 (x1, 
E_V8DFmode) != 0)
        return -1;
      return 9;

    case E_V4DFmode:
      if (pattern534 (x1, 
E_V4DFmode) != 0)
        return -1;
      return 10;

    case E_V2DFmode:
      if (pattern534 (x1, 
E_V2DFmode) != 0)
        return -1;
      return 11;

    default:
      return -1;
    }
}

int
pattern547 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) != E_XFmode)
    return -1;
  x4 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x4) != CLOBBER)
    return -1;
  x5 = XEXP (x4, 0);
  if (GET_CODE (x5) != REG
      || REGNO (x5) != 17
      || GET_MODE (x5) != E_CCmode)
    return -1;
  x6 = XEXP (x2, 0);
  operands[0] = x6;
  if (!register_operand (operands[0], E_XFmode))
    return -1;
  x7 = XVECEXP (x3, 0, 0);
  operands[1] = x7;
  if (!register_operand (operands[1], E_XFmode))
    return -1;
  return 0;
}

int
pattern554 (rtx x1, int *pnum_clobbers)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  x4 = XEXP (x3, 0);
  x5 = XEXP (x4, 0);
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
      return 0;

    case UNSPEC:
      if (pnum_clobbers == NULL
          || XVECLEN (x6, 0) != 1
          || XINT (x6, 1) != 38)
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern561 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != i2
      || !register_operand (operands[1], i1))
    return -1;
  x3 = XEXP (x1, 1);
  if (GET_MODE (x3) != i2
      || !nonimmediate_operand (operands[2], i1))
    return -1;
  return 0;
}

int
pattern566 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!nonimmediate_operand (operands[0], E_SImode)
      || GET_MODE (x1) != E_SImode
      || !nonimmediate_operand (operands[1], E_SImode)
      || !x86_64_general_operand (operands[2], E_SImode))
    return -1;
  return 0;
}

int
pattern572 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  if (!ix86_carry_flag_operator (operands[1], E_VOIDmode))
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_CODE (x2) != REG
      || REGNO (x2) != 17)
    return -1;
  x3 = XEXP (x1, 1);
  if (x3 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
    return -1;
  return 0;
}

int
pattern577 ()
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[1], E_SImode)
      || !register_operand (operands[2], E_SImode))
    return -1;
  switch (GET_MODE (operands[0]))
    {
    case E_SImode:
      if (!register_operand (operands[0], E_SImode))
        return -1;
      return 0;

    case E_DImode:
      if (!register_operand (operands[0], E_DImode))
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern585 (rtx x1, rtx_code i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12, x13, x14, x15, x16, x17;
  rtx x18;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) != E_QImode)
    return -1;
  x5 = XEXP (x4, 0);
  if (GET_CODE (x5) != SUBREG
      || maybe_ne (SUBREG_BYTE (x5), 0)
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
      x9 = XEXP (x3, 1);
      if (x9 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
        return -1;
      x10 = XVECEXP (x1, 0, 1);
      if (GET_CODE (x10) != SET)
        return -1;
      x11 = XEXP (x10, 1);
      if (GET_CODE (x11) != SUBREG
          || maybe_ne (SUBREG_BYTE (x11), 0))
        return -1;
      x12 = XEXP (x11, 0);
      if (GET_CODE (x12) != i1
          || GET_MODE (x12) != E_QImode)
        return -1;
      x13 = XEXP (x12, 0);
      if (GET_CODE (x13) != SUBREG
          || maybe_ne (SUBREG_BYTE (x13), 0)
          || GET_MODE (x13) != E_QImode)
        return -1;
      x14 = XEXP (x13, 0);
      switch (GET_CODE (x14))
        {
        case SIGN_EXTRACT:
        case ZERO_EXTRACT:
          if (!rtx_equal_p (x14, operands[3]))
            return -1;
          x15 = XEXP (x10, 0);
          if (GET_CODE (x15) != ZERO_EXTRACT)
            return -1;
          x16 = XEXP (x15, 1);
          if (x16 != const_int_rtx[MAX_SAVED_CONST_INT + 8])
            return -1;
          x17 = XEXP (x15, 2);
          if (x17 != const_int_rtx[MAX_SAVED_CONST_INT + 8])
            return -1;
          x18 = XEXP (x2, 0);
          operands[4] = x18;
          if (!flags_reg_operand (operands[4], E_VOIDmode))
            return -1;
          operands[5] = x3;
          if (!compare_operator (operands[5], E_VOIDmode))
            return -1;
          return pattern584 (x1); /* [-1, 2] */

        default:
          return -1;
        }

    default:
      return -1;
    }
}

int
pattern608 (rtx x1, machine_mode i1, machine_mode i2, machine_mode i3)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i3)
      || GET_MODE (x1) != i3)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != i2
      || !register_operand (operands[1], i1))
    return -1;
  return 0;
}

int
pattern612 (rtx x1, machine_mode i1)
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
      || !register_mmxmem_operand (operands[2], i1))
    return -1;
  return 0;
}

int
pattern617 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  if (GET_CODE (x2) != MULT)
    return -1;
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) != SIGN_EXTEND)
    return -1;
  x4 = XEXP (x2, 1);
  if (GET_CODE (x4) != SIGN_EXTEND)
    return -1;
  x5 = XEXP (x1, 1);
  if (x5 != const_int_rtx[MAX_SAVED_CONST_INT + 14])
    return -1;
  return 0;
}

int
pattern626 (rtx x1)
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
      return pattern625 (x1, 
E_SImode); /* [-1, 0] */

    case E_DImode:
      if (pattern625 (x1, 
E_DImode) != 0)
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern635 (rtx x1)
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
      if (pattern633 (x1, 
E_V8SImode, 
E_QImode, 
E_V8SFmode) != 0)
        return -1;
      return 1;

    case E_V4SImode:
      if (pattern633 (x1, 
E_V4SImode, 
E_QImode, 
E_V4SFmode) != 0)
        return -1;
      return 2;

    default:
      return -1;
    }
}

int
pattern640 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
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
  return 0;
}

int
pattern643 (rtx x1, machine_mode i1)
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
pattern650 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 2);
  operands[4] = x3;
  x4 = XEXP (x2, 1);
  operands[3] = x4;
  x5 = XVECEXP (x1, 0, 1);
  operands[5] = x5;
  switch (GET_MODE (operands[0]))
    {
    case E_V32HFmode:
      return pattern646 (x1, 
E_V32HFmode, 
E_SImode); /* [-1, 0] */

    case E_V16HFmode:
      if (pattern646 (x1, 
E_V16HFmode, 
E_HImode) != 0)
        return -1;
      return 1;

    case E_V16SFmode:
      if (pattern646 (x1, 
E_V16SFmode, 
E_HImode) != 0)
        return -1;
      return 2;

    case E_V8SFmode:
      if (pattern646 (x1, 
E_V8SFmode, 
E_QImode) != 0)
        return -1;
      return 3;

    case E_V8DFmode:
      if (pattern646 (x1, 
E_V8DFmode, 
E_QImode) != 0)
        return -1;
      return 4;

    case E_V4DFmode:
      if (pattern646 (x1, 
E_V4DFmode, 
E_QImode) != 0)
        return -1;
      return 5;

    default:
      return -1;
    }
}

int
pattern662 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1
      || !vector_operand (operands[1], i1)
      || !register_operand (operands[2], i1))
    return -1;
  x2 = XVECEXP (x1, 0, 2);
  if (GET_MODE (x2) != i1
      || !register_operand (operands[3], i1)
      || !vector_all_ones_operand (operands[4], i1))
    return -1;
  return 0;
}

int
pattern666 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1
      || !vector_operand (operands[1], i1)
      || !vector_operand (operands[2], i1)
      || !vector_operand (operands[3], i1))
    return -1;
  return 0;
}

int
pattern670 (rtx x1, machine_mode i1)
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
pattern675 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1
      || !nonimmediate_operand (operands[1], i1))
    return -1;
  x2 = XEXP (x1, 1);
  x3 = XVECEXP (x2, 0, 0);
  operands[2] = x3;
  return pattern674 (x2); /* [-1, 0] */
}

int
pattern681 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  switch (GET_CODE (x4))
    {
    case VEC_CONCAT:
      return pattern679 (x1); /* [-1, 5] */

    case VEC_MERGE:
      if (GET_MODE (x4) != E_V4SImode)
        return -1;
      x5 = XEXP (x4, 0);
      if (GET_CODE (x5) != VEC_DUPLICATE
          || GET_MODE (x5) != E_V4SImode)
        return -1;
      x6 = XEXP (x4, 1);
      if (GET_CODE (x6) != CONST_VECTOR
          || XVECLEN (x6, 0) != 4
          || GET_MODE (x6) != E_V4SImode)
        return -1;
      x7 = XVECEXP (x6, 0, 0);
      if (x7 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
        return -1;
      x8 = XVECEXP (x6, 0, 1);
      if (x8 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
        return -1;
      x9 = XVECEXP (x6, 0, 2);
      if (x9 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
        return -1;
      x10 = XVECEXP (x6, 0, 3);
      if (x10 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
        return -1;
      x11 = XEXP (x4, 2);
      if (x11 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
        return -1;
      res = pattern680 (x1);
      if (res >= 0)
        return res + 6; /* [6, 8] */
      return -1;

    default:
      return -1;
    }
}

int
pattern694 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (GET_CODE (x1) != REG
      || REGNO (x1) != 17
      || GET_MODE (x1) != E_CCmode)
    return -1;
  switch (GET_MODE (operands[0]))
    {
    case E_DImode:
      return 0;

    case E_TImode:
      return 1;

    case E_QImode:
      return 2;

    case E_HImode:
      return 3;

    case E_SImode:
      return 4;

    case E_SFmode:
      return 5;

    case E_DFmode:
      return 6;

    case E_XFmode:
      return 7;

    default:
      return -1;
    }
}

int
pattern705 (rtx x1, int i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) != E_DImode)
    return -1;
  x4 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x4) != SET)
    return -1;
  x5 = XEXP (x4, 1);
  if (GET_CODE (x5) != UNSPEC_VOLATILE
      || XVECLEN (x5, 0) != 1
      || XINT (x5, 1) != i1
      || GET_MODE (x5) != E_DImode
      || !register_operand (operands[0], E_DImode))
    return -1;
  x6 = XVECEXP (x3, 0, 0);
  operands[2] = x6;
  if (!register_operand (operands[2], E_SImode))
    return -1;
  x7 = XEXP (x4, 0);
  operands[1] = x7;
  if (!register_operand (operands[1], E_DImode))
    return -1;
  x8 = XVECEXP (x5, 0, 0);
  if (!rtx_equal_p (x8, operands[2]))
    return -1;
  return 0;
}

int
pattern712 (rtx x1, unsigned int i1, rtx_code i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4;
  int res ATTRIBUTE_UNUSED;
  if (GET_CODE (x1) != SET)
    return -1;
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) != i2)
    return -1;
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) != REG
      || REGNO (x3) != i1)
    return -1;
  x4 = XEXP (x1, 0);
  if (GET_CODE (x4) != REG
      || REGNO (x4) != i1)
    return -1;
  return 0;
}

int
pattern717 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 2);
  if (x3 != const_int_rtx[MAX_SAVED_CONST_INT + 8])
    return -1;
  x4 = XEXP (x1, 0);
  if (GET_CODE (x4) != ZERO_EXTRACT)
    return -1;
  x5 = XEXP (x4, 1);
  if (x5 != const_int_rtx[MAX_SAVED_CONST_INT + 8])
    return -1;
  x6 = XEXP (x4, 2);
  if (x6 != const_int_rtx[MAX_SAVED_CONST_INT + 8])
    return -1;
  return 0;
}

int
pattern724 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  operands[1] = x3;
  switch (GET_MODE (operands[0]))
    {
    case E_HImode:
      if (!memory_operand (operands[0], E_HImode)
          || GET_MODE (x1) != E_HImode
          || GET_MODE (x2) != E_V2QImode
          || !register_operand (operands[1], E_V2DImode))
        return -1;
      return 0;

    case E_SImode:
      res = pattern293 (x1);
      if (res >= 0)
        return res + 1; /* [1, 3] */
      return -1;

    case E_DImode:
      res = pattern294 (x1);
      if (res >= 0)
        return res + 4; /* [4, 9] */
      return -1;

    default:
      return -1;
    }
}

int
pattern734 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1
      || !register_operand (operands[1], i1)
      || !register_operand (operands[2], i1))
    return -1;
  x2 = XVECEXP (x1, 0, 2);
  if (GET_MODE (x2) != i1
      || !register_operand (operands[3], i1)
      || !register_operand (operands[4], i1))
    return -1;
  return 0;
}

int
pattern742 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  operands[3] = x2;
  switch (GET_MODE (operands[0]))
    {
    case E_HImode:
      if (!register_operand (operands[0], E_HImode)
          || GET_MODE (x1) != E_HImode)
        return -1;
      x3 = XEXP (x1, 0);
      if (GET_MODE (x3) != E_HImode
          || !register_operand (operands[3], E_HImode))
        return -1;
      return pattern740 (); /* [-1, 2] */

    case E_QImode:
      if (!register_operand (operands[0], E_QImode)
          || GET_MODE (x1) != E_QImode)
        return -1;
      x3 = XEXP (x1, 0);
      if (GET_MODE (x3) != E_QImode
          || !register_operand (operands[3], E_QImode))
        return -1;
      res = pattern741 ();
      if (res >= 0)
        return res + 3; /* [3, 8] */
      return -1;

    default:
      return -1;
    }
}

int
pattern755 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != i1
      || !nonimmediate_operand (operands[1], i1))
    return -1;
  return 0;
}

int
pattern763 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  operands[1] = x2;
  x3 = XEXP (x1, 1);
  operands[2] = x3;
  switch (GET_MODE (x1))
    {
    case E_V8SFmode:
      if (!register_operand (operands[1], E_V8SImode)
          || !const0_operand (operands[2], E_V8SImode))
        return -1;
      return 0;

    case E_V4SFmode:
      if (!register_operand (operands[1], E_V4SImode)
          || !const0_operand (operands[2], E_V4SImode))
        return -1;
      return 1;

    case E_V4DFmode:
      if (!register_operand (operands[1], E_V4DImode)
          || !const0_operand (operands[2], E_V4DImode))
        return -1;
      return 2;

    case E_V2DFmode:
      if (!register_operand (operands[1], E_V2DImode)
          || !const0_operand (operands[2], E_V2DImode))
        return -1;
      return 3;

    case E_V32QImode:
      if (!register_operand (operands[1], E_V32QImode)
          || !const0_operand (operands[2], E_V32QImode))
        return -1;
      return 4;

    case E_V16QImode:
      if (!register_operand (operands[1], E_V16QImode)
          || !const0_operand (operands[2], E_V16QImode))
        return -1;
      return 5;

    default:
      return -1;
    }
}

int
pattern779 (rtx x1)
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
  if (!const_4_or_8_to_11_operand (operands[5], E_SImode))
    return -1;
  return pattern778 (x1); /* [-1, 2] */
}

int
pattern795 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i2)
      || GET_MODE (x1) != i2
      || !register_operand (operands[1], i1))
    return -1;
  x2 = XEXP (x1, 1);
  operands[2] = x2;
  if (!nonimmediate_operand (operands[2], i1))
    return -1;
  return 0;
}

int
pattern803 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != i2
      || !vector_operand (operands[1], i1)
      || !const0_operand (operands[2], i1)
      || !pmovzx_parallel (operands[3], E_VOIDmode))
    return -1;
  return 0;
}

int
pattern811 (rtx x1, rtx_code i1)
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
    case E_V32HImode:
      return pattern810 (x1, 
E_V32HImode, 
E_V32SImode); /* [-1, 0] */

    case E_V16HImode:
      if (pattern810 (x1, 
E_V16HImode, 
E_V16SImode) != 0)
        return -1;
      return 1;

    case E_V8HImode:
      if (pattern810 (x1, 
E_V8HImode, 
E_V8SImode) != 0)
        return -1;
      return 2;

    default:
      return -1;
    }
}

int
pattern821 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (GET_CODE (x1) != PLUS
      || GET_MODE (x1) != E_SImode)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_CODE (x2) != REG
      || REGNO (x2) != 7
      || GET_MODE (x2) != E_SImode)
    return -1;
  return 0;
}

int
pattern825 (rtx x1, int *pnum_clobbers)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x2) != USE)
    return -1;
  x3 = XVECEXP (x1, 0, 2);
  if (GET_CODE (x3) != USE
      || !register_operand (operands[1], E_XFmode))
    return -1;
  return pattern824 (x1, pnum_clobbers); /* [-1, 2] */
}

int
pattern829 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1
      || !register_operand (operands[1], i1)
      || !nonmemory_operand (operands[2], i1))
    return -1;
  return 0;
}

int
pattern831 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  operands[1] = x3;
  x4 = XEXP (x2, 1);
  operands[3] = x4;
  return pattern439 (x1); /* [-1, 1] */
}

int
pattern835 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
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
  return 0;
}

int
pattern842 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4;
  int res ATTRIBUTE_UNUSED;
  if (XVECLEN (x1, 0) != 2)
    return -1;
  x2 = XVECEXP (x1, 0, 0);
  if (GET_CODE (x2) != SET)
    return -1;
  x3 = PATTERN (peep2_next_insn (2));
  if (GET_CODE (x3) != SET)
    return -1;
  x4 = XEXP (x3, 1);
  if (!rtx_equal_p (x4, operands[0]))
    return -1;
  return 0;
}

int
pattern846 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  if (GET_CODE (x2) != VEC_SELECT)
    return -1;
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
  x6 = XEXP (x5, 1);
  if (GET_CODE (x6) != PARALLEL
      || XVECLEN (x6, 0) != 1)
    return -1;
  x7 = XVECEXP (x6, 0, 0);
  if (x7 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
    return -1;
  return 0;
}

int
pattern854 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12, x13, x14, x15, x16, x17;
  rtx x18, x19;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) != VEC_CONCAT)
    return -1;
  x4 = XEXP (x1, 0);
  x5 = XEXP (x4, 0);
  x6 = XEXP (x5, 0);
  operands[1] = x6;
  x7 = XEXP (x5, 1);
  operands[2] = x7;
  x8 = XEXP (x3, 0);
  if (!rtx_equal_p (x8, operands[1]))
    return -1;
  x9 = XEXP (x3, 1);
  if (!rtx_equal_p (x9, operands[2]))
    return -1;
  x10 = XEXP (x4, 1);
  switch (XVECLEN (x10, 0))
    {
    case 4:
      x11 = XVECEXP (x10, 0, 0);
      if (x11 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
        return -1;
      x12 = XVECEXP (x10, 0, 1);
      if (x12 != const_int_rtx[MAX_SAVED_CONST_INT + 2])
        return -1;
      x13 = XVECEXP (x10, 0, 2);
      if (x13 != const_int_rtx[MAX_SAVED_CONST_INT + 4])
        return -1;
      x14 = XVECEXP (x10, 0, 3);
      if (x14 != const_int_rtx[MAX_SAVED_CONST_INT + 6])
        return -1;
      x15 = XEXP (x2, 1);
      if (XVECLEN (x15, 0) != 4)
        return -1;
      x16 = XVECEXP (x15, 0, 0);
      if (x16 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
        return -1;
      x17 = XVECEXP (x15, 0, 1);
      if (x17 != const_int_rtx[MAX_SAVED_CONST_INT + 3])
        return -1;
      x18 = XVECEXP (x15, 0, 2);
      if (x18 != const_int_rtx[MAX_SAVED_CONST_INT + 5])
        return -1;
      x19 = XVECEXP (x15, 0, 3);
      if (x19 != const_int_rtx[MAX_SAVED_CONST_INT + 7]
          || pattern853 (x1, 
E_V8HImode, 
E_V4HImode) != 0)
        return -1;
      return 0;

    case 2:
      x11 = XVECEXP (x10, 0, 0);
      if (x11 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
        return -1;
      x12 = XVECEXP (x10, 0, 1);
      if (x12 != const_int_rtx[MAX_SAVED_CONST_INT + 2])
        return -1;
      x15 = XEXP (x2, 1);
      if (XVECLEN (x15, 0) != 2)
        return -1;
      x16 = XVECEXP (x15, 0, 0);
      if (x16 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
        return -1;
      x17 = XVECEXP (x15, 0, 1);
      if (x17 != const_int_rtx[MAX_SAVED_CONST_INT + 3]
          || pattern853 (x1, 
E_V4SImode, 
E_V2SImode) != 0)
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern886 (rtx x1, machine_mode i1, machine_mode i2)
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
  operands[2] = x3;
  if (!nonimmediate_operand (operands[2], i2))
    return -1;
  x4 = XEXP (x1, 1);
  operands[1] = x4;
  if (!register_operand (operands[1], i1))
    return -1;
  return 0;
}

int
pattern897 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], E_V4DImode)
      || GET_MODE (x1) != E_V4DImode)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != E_V4DImode
      || !nonimm_or_0_operand (operands[2], E_V4DImode)
      || !register_operand (operands[3], E_QImode))
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
pattern909 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  x5 = XEXP (x4, 0);
  operands[2] = x5;
  x6 = XEXP (x2, 1);
  operands[1] = x6;
  x7 = XVECEXP (x1, 0, 1);
  operands[3] = x7;
  if (!const_4_or_8_to_11_operand (operands[3], E_SImode))
    return -1;
  switch (GET_MODE (operands[0]))
    {
    case E_V8HFmode:
      return pattern908 (x1, 
E_V8HFmode, 
E_HFmode); /* [-1, 1] */

    case E_V4SFmode:
      res = pattern908 (x1, 
E_V4SFmode, 
E_SFmode);
      if (res >= 0)
        return res + 2; /* [2, 3] */
      return -1;

    case E_V2DFmode:
      if (!register_operand (operands[0], E_V2DFmode)
          || GET_MODE (x1) != E_V2DFmode
          || GET_MODE (x2) != E_V2DFmode
          || GET_MODE (x3) != E_V2DFmode
          || GET_MODE (x4) != E_DFmode
          || !register_operand (operands[2], E_DImode)
          || !register_operand (operands[1], E_V2DFmode))
        return -1;
      return 4;

    default:
      return -1;
    }
}

int
pattern918 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!const_int_operand (operands[3], E_VOIDmode))
    return -1;
  switch (GET_MODE (operands[0]))
    {
    case E_V16SImode:
      return pattern917 (x1, 
E_V16SImode); /* [-1, 0] */

    case E_V16SFmode:
      if (pattern917 (x1, 
E_V16SFmode) != 0)
        return -1;
      return 1;

    case E_V8DImode:
      if (pattern917 (x1, 
E_V8DImode) != 0)
        return -1;
      return 2;

    case E_V8DFmode:
      if (pattern917 (x1, 
E_V8DFmode) != 0)
        return -1;
      return 3;

    case E_V8SImode:
      if (pattern917 (x1, 
E_V8SImode) != 0)
        return -1;
      return 4;

    case E_V8SFmode:
      if (pattern917 (x1, 
E_V8SFmode) != 0)
        return -1;
      return 5;

    case E_V4DImode:
      if (pattern917 (x1, 
E_V4DImode) != 0)
        return -1;
      return 6;

    case E_V4DFmode:
      if (pattern917 (x1, 
E_V4DFmode) != 0)
        return -1;
      return 7;

    case E_V4SImode:
      if (pattern917 (x1, 
E_V4SImode) != 0)
        return -1;
      return 8;

    case E_V4SFmode:
      if (pattern917 (x1, 
E_V4SFmode) != 0)
        return -1;
      return 9;

    case E_V2DImode:
      if (pattern917 (x1, 
E_V2DImode) != 0)
        return -1;
      return 10;

    case E_V2DFmode:
      if (pattern917 (x1, 
E_V2DFmode) != 0)
        return -1;
      return 11;

    case E_V64QImode:
      if (pattern917 (x1, 
E_V64QImode) != 0)
        return -1;
      return 12;

    case E_V16QImode:
      if (pattern917 (x1, 
E_V16QImode) != 0)
        return -1;
      return 13;

    case E_V32QImode:
      if (pattern917 (x1, 
E_V32QImode) != 0)
        return -1;
      return 14;

    case E_V32HImode:
      if (pattern917 (x1, 
E_V32HImode) != 0)
        return -1;
      return 15;

    case E_V16HImode:
      if (pattern917 (x1, 
E_V16HImode) != 0)
        return -1;
      return 16;

    case E_V8HImode:
      if (pattern917 (x1, 
E_V8HImode) != 0)
        return -1;
      return 17;

    default:
      return -1;
    }
}

int
pattern942 (rtx x1, machine_mode i1)
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
pattern951 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  switch (GET_MODE (x1))
    {
    case E_QImode:
      if (!nonimmediate_operand (operands[1], E_QImode)
          || !general_operand (operands[2], E_QImode)
          || !scratch_operand (operands[0], E_QImode))
        return -1;
      return 0;

    case E_HImode:
      if (!nonimmediate_operand (operands[1], E_HImode)
          || !general_operand (operands[2], E_HImode)
          || !scratch_operand (operands[0], E_HImode))
        return -1;
      return 1;

    case E_SImode:
      if (!nonimmediate_operand (operands[1], E_SImode)
          || !x86_64_general_operand (operands[2], E_SImode)
          || !scratch_operand (operands[0], E_SImode))
        return -1;
      return 2;

    case E_DImode:
      if (!nonimmediate_operand (operands[1], E_DImode)
          || !x86_64_general_operand (operands[2], E_DImode)
          || !scratch_operand (operands[0], E_DImode))
        return -1;
      return 3;

    default:
      return -1;
    }
}

int
pattern965 ()
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  switch (GET_MODE (operands[0]))
    {
    case E_QImode:
      if (!register_operand (operands[0], E_QImode)
          || !register_operand (operands[1], E_QImode))
        return -1;
      return 0;

    case E_HImode:
      if (!register_operand (operands[0], E_HImode)
          || !register_operand (operands[1], E_HImode))
        return -1;
      return 1;

    case E_SImode:
      if (!register_operand (operands[0], E_SImode)
          || !register_operand (operands[1], E_SImode))
        return -1;
      return 2;

    case E_DImode:
      if (!register_operand (operands[0], E_DImode)
          || !register_operand (operands[1], E_DImode))
        return -1;
      return 3;

    default:
      return -1;
    }
}

int
pattern972 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  operands[3] = x2;
  switch (GET_MODE (operands[0]))
    {
    case E_HImode:
      if (!register_operand (operands[0], E_HImode)
          || GET_MODE (x1) != E_HImode)
        return -1;
      x3 = XEXP (x1, 0);
      if (GET_MODE (x3) != E_HImode
          || !register_operand (operands[3], E_HImode))
        return -1;
      switch (GET_MODE (operands[1]))
        {
        case E_V16QImode:
          if (!nonimm_or_0_operand (operands[1], E_V16QImode)
              || !nonimm_or_0_operand (operands[2], E_V16QImode))
            return -1;
          return 0;

        case E_V16HImode:
          if (!nonimm_or_0_operand (operands[1], E_V16HImode)
              || !nonimm_or_0_operand (operands[2], E_V16HImode))
            return -1;
          return 1;

        case E_V16SImode:
          if (!nonimm_or_0_operand (operands[1], E_V16SImode)
              || !nonimm_or_0_operand (operands[2], E_V16SImode))
            return -1;
          return 2;

        default:
          return -1;
        }

    case E_QImode:
      if (!register_operand (operands[0], E_QImode)
          || GET_MODE (x1) != E_QImode)
        return -1;
      x3 = XEXP (x1, 0);
      if (GET_MODE (x3) != E_QImode
          || !register_operand (operands[3], E_QImode))
        return -1;
      switch (GET_MODE (operands[1]))
        {
        case E_V8HImode:
          if (!nonimm_or_0_operand (operands[1], E_V8HImode)
              || !nonimm_or_0_operand (operands[2], E_V8HImode))
            return -1;
          return 3;

        case E_V8SImode:
          if (!nonimm_or_0_operand (operands[1], E_V8SImode)
              || !nonimm_or_0_operand (operands[2], E_V8SImode))
            return -1;
          return 4;

        case E_V4SImode:
          if (!nonimm_or_0_operand (operands[1], E_V4SImode)
              || !nonimm_or_0_operand (operands[2], E_V4SImode))
            return -1;
          return 5;

        case E_V8DImode:
          if (!nonimm_or_0_operand (operands[1], E_V8DImode)
              || !nonimm_or_0_operand (operands[2], E_V8DImode))
            return -1;
          return 6;

        case E_V4DImode:
          if (!nonimm_or_0_operand (operands[1], E_V4DImode)
              || !nonimm_or_0_operand (operands[2], E_V4DImode))
            return -1;
          return 7;

        case E_V2DImode:
          if (!nonimm_or_0_operand (operands[1], E_V2DImode)
              || !nonimm_or_0_operand (operands[2], E_V2DImode))
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
pattern993 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != i1
      || !memory_operand (operands[1], i1)
      || !nonimm_or_0_operand (operands[2], i1)
      || !register_operand (operands[3], i2))
    return -1;
  return 0;
}

int
pattern997 (rtx x1, machine_mode i1)
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
      if (!register_operand (operands[1], E_V8HFmode))
        return -1;
      return 0;

    case E_V4DFmode:
      if (!vector_operand (operands[1], E_V4DFmode))
        return -1;
      return 1;

    case E_V4SFmode:
      if (!vector_operand (operands[1], E_V4SFmode))
        return -1;
      return 2;

    default:
      return -1;
    }
}

int
pattern1009 (rtx x1, machine_mode i1, machine_mode i2)
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
      || !nonimmediate_operand (operands[2], i1)
      || !reg_or_0_operand (operands[1], i1))
    return -1;
  return 0;
}

int
pattern1018 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1
      || !ix86_comparison_uns_operator (operands[1], i1)
      || !register_operand (operands[2], i1)
      || !nonimmediate_operand (operands[3], i1))
    return -1;
  return 0;
}

int
pattern1025 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1)
    return -1;
  x2 = XVECEXP (x1, 0, 0);
  if (GET_MODE (x2) != i1
      || !nonimmediate_operand (operands[1], i2))
    return -1;
  return 0;
}

int
pattern1031 (rtx x1, machine_mode i1, rtx_code i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  if (GET_CODE (x2) != i2
      || GET_MODE (x2) != i1)
    return -1;
  x3 = XEXP (x1, 1);
  if (GET_CODE (x3) != i2
      || GET_MODE (x3) != i1)
    return -1;
  return 0;
}

int
pattern1040 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1))
    return -1;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) != i1)
    return -1;
  x4 = XEXP (x3, 0);
  switch (GET_MODE (x4))
    {
    case E_HImode:
      if (!register_operand (operands[4], E_HImode))
        return -1;
      x5 = XVECEXP (x1, 0, 1);
      x6 = XEXP (x5, 1);
      if (GET_MODE (x6) != E_HImode)
        return -1;
      switch (GET_MODE (operands[1]))
        {
        case E_V16SImode:
          if (!nonimmediate_operand (operands[1], E_V16SImode)
              || !nonimmediate_operand (operands[2], E_V16SImode))
            return -1;
          return 0;

        case E_V16HFmode:
          if (!nonimmediate_operand (operands[1], E_V16HFmode)
              || !nonimmediate_operand (operands[2], E_V16HFmode))
            return -1;
          return 1;

        case E_V16SFmode:
          if (!nonimmediate_operand (operands[1], E_V16SFmode)
              || !nonimmediate_operand (operands[2], E_V16SFmode))
            return -1;
          return 2;

        case E_V16QImode:
          if (!nonimmediate_operand (operands[1], E_V16QImode)
              || !nonimmediate_operand (operands[2], E_V16QImode))
            return -1;
          return 3;

        case E_V16HImode:
          if (!nonimmediate_operand (operands[1], E_V16HImode)
              || !nonimmediate_operand (operands[2], E_V16HImode))
            return -1;
          return 4;

        default:
          return -1;
        }

    case E_QImode:
      if (!register_operand (operands[4], E_QImode))
        return -1;
      x5 = XVECEXP (x1, 0, 1);
      x6 = XEXP (x5, 1);
      if (GET_MODE (x6) != E_QImode)
        return -1;
      switch (GET_MODE (operands[1]))
        {
        case E_V8SImode:
          if (!nonimmediate_operand (operands[1], E_V8SImode)
              || !nonimmediate_operand (operands[2], E_V8SImode))
            return -1;
          return 5;

        case E_V4SImode:
          if (!nonimmediate_operand (operands[1], E_V4SImode)
              || !nonimmediate_operand (operands[2], E_V4SImode))
            return -1;
          return 6;

        case E_V8DImode:
          if (!nonimmediate_operand (operands[1], E_V8DImode)
              || !nonimmediate_operand (operands[2], E_V8DImode))
            return -1;
          return 7;

        case E_V4DImode:
          if (!nonimmediate_operand (operands[1], E_V4DImode)
              || !nonimmediate_operand (operands[2], E_V4DImode))
            return -1;
          return 8;

        case E_V2DImode:
          if (!nonimmediate_operand (operands[1], E_V2DImode)
              || !nonimmediate_operand (operands[2], E_V2DImode))
            return -1;
          return 9;

        case E_V8HFmode:
          if (!nonimmediate_operand (operands[1], E_V8HFmode)
              || !nonimmediate_operand (operands[2], E_V8HFmode))
            return -1;
          return 10;

        case E_V8SFmode:
          if (!nonimmediate_operand (operands[1], E_V8SFmode)
              || !nonimmediate_operand (operands[2], E_V8SFmode))
            return -1;
          return 11;

        case E_V4SFmode:
          if (!nonimmediate_operand (operands[1], E_V4SFmode)
              || !nonimmediate_operand (operands[2], E_V4SFmode))
            return -1;
          return 12;

        case E_V8DFmode:
          if (!nonimmediate_operand (operands[1], E_V8DFmode)
              || !nonimmediate_operand (operands[2], E_V8DFmode))
            return -1;
          return 13;

        case E_V4DFmode:
          if (!nonimmediate_operand (operands[1], E_V4DFmode)
              || !nonimmediate_operand (operands[2], E_V4DFmode))
            return -1;
          return 14;

        case E_V2DFmode:
          if (!nonimmediate_operand (operands[1], E_V2DFmode)
              || !nonimmediate_operand (operands[2], E_V2DFmode))
            return -1;
          return 15;

        case E_V8HImode:
          if (!nonimmediate_operand (operands[1], E_V8HImode)
              || !nonimmediate_operand (operands[2], E_V8HImode))
            return -1;
          return 16;

        default:
          return -1;
        }

    case E_SImode:
      if (!register_operand (operands[4], E_SImode))
        return -1;
      x5 = XVECEXP (x1, 0, 1);
      x6 = XEXP (x5, 1);
      if (GET_MODE (x6) != E_SImode)
        return -1;
      switch (GET_MODE (operands[1]))
        {
        case E_V32HFmode:
          if (!nonimmediate_operand (operands[1], E_V32HFmode)
              || !nonimmediate_operand (operands[2], E_V32HFmode))
            return -1;
          return 17;

        case E_V32QImode:
          if (!nonimmediate_operand (operands[1], E_V32QImode)
              || !nonimmediate_operand (operands[2], E_V32QImode))
            return -1;
          return 18;

        case E_V32HImode:
          if (!nonimmediate_operand (operands[1], E_V32HImode)
              || !nonimmediate_operand (operands[2], E_V32HImode))
            return -1;
          return 19;

        default:
          return -1;
        }

    case E_DImode:
      x5 = XVECEXP (x1, 0, 1);
      x6 = XEXP (x5, 1);
      if (pattern1039 (x6) != 0)
        return -1;
      return 20;

    default:
      return -1;
    }
}

int
pattern1100 (rtx x1, machine_mode i1)
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
      return 0;

    case E_V4SFmode:
      return 1;

    case E_V4DFmode:
      return 2;

    default:
      return -1;
    }
}

int
pattern1105 (rtx x1, machine_mode i1, machine_mode i2)
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
      || !nonimmediate_operand (operands[2], i1)
      || !nonimm_or_0_operand (operands[3], i1)
      || !register_operand (operands[4], i2))
    return -1;
  return 0;
}

int
pattern1112 (rtx x1, machine_mode i1, machine_mode i2)
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
pattern1119 (rtx x1, rtx_code i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  x5 = XEXP (x4, 1);
  if (GET_CODE (x5) != i1)
    return -1;
  x6 = XEXP (x4, 0);
  x7 = XEXP (x6, 0);
  operands[1] = x7;
  x8 = XEXP (x5, 0);
  operands[2] = x8;
  switch (GET_MODE (operands[0]))
    {
    case E_V32HImode:
      return pattern1118 (x1, 
E_SImode, 
E_V32HImode, 
E_V32SImode); /* [-1, 0] */

    case E_V16HImode:
      if (pattern1118 (x1, 
E_HImode, 
E_V16HImode, 
E_V16SImode) != 0)
        return -1;
      return 1;

    case E_V8HImode:
      if (pattern1118 (x1, 
E_QImode, 
E_V8HImode, 
E_V8SImode) != 0)
        return -1;
      return 2;

    default:
      return -1;
    }
}

int
pattern1132 (rtx x1, machine_mode i1)
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
pattern1134 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!const_4_or_8_to_11_operand (operands[3], E_SImode))
    return -1;
  switch (GET_MODE (operands[0]))
    {
    case E_V32HFmode:
      return pattern1132 (x1, 
E_V32HFmode); /* [-1, 0] */

    case E_V16HFmode:
      if (pattern1132 (x1, 
E_V16HFmode) != 0)
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern1139 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i2)
      || GET_MODE (x1) != i2
      || !register_operand (operands[1], i2)
      || !nonimmediate_operand (operands[2], i2)
      || !nonimmediate_operand (operands[3], i1))
    return -1;
  return 0;
}

int
pattern1147 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!memory_operand (operands[0], i1)
      || GET_MODE (x1) != i1
      || !memory_operand (operands[1], i1))
    return -1;
  switch (GET_MODE (operands[2]))
    {
    case E_SImode:
      if (!register_operand (operands[2], E_SImode))
        return -1;
      return 0;

    case E_DImode:
      if (!register_operand (operands[2], E_DImode))
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern1156 (rtx x1, machine_mode i1)
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
      || !general_operand (operands[2], i1))
    return -1;
  return 0;
}

int
pattern1164 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  if (XWINT (x3, 0) != 32L)
    return -1;
  x4 = XEXP (x1, 0);
  if (GET_CODE (x4) != SUBREG
      || maybe_ne (SUBREG_BYTE (x4), 0)
      || GET_MODE (x4) != E_DImode)
    return -1;
  x5 = XEXP (x4, 0);
  operands[0] = x5;
  if (!register_operand (operands[0], E_SImode))
    return -1;
  return 0;
}

int
pattern1173 (rtx x1, machine_mode i1, int i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 1);
  x3 = XEXP (x2, 1);
  x4 = XVECEXP (x3, 0, 0);
  if (x4 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
    return -1;
  x5 = XVECEXP (x1, 0, 2);
  if (GET_CODE (x5) != SET)
    return -1;
  x6 = XEXP (x5, 1);
  return pattern1172 (x6, 
i1, 
i2); /* [-1, 0] */
}

int
pattern1180 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  switch (GET_CODE (x2))
    {
    case SUBREG:
      if (maybe_ne (SUBREG_BYTE (x2), 0)
          || GET_MODE (x2) != E_QImode)
        return -1;
      x3 = XEXP (x1, 0);
      operands[1] = x3;
      return pattern1169 (x1); /* [-1, 11] */

    case CONST_INT:
      return 12;

    default:
      return -1;
    }
}

int
pattern1187 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (!memory_operand (operands[0], i2)
      || GET_MODE (x1) != i2)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != i2
      || !nonmemory_operand (operands[1], i1))
    return -1;
  return 0;
}

int
pattern1194 (rtx x1, machine_mode i1)
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
  if (GET_CODE (x4) != MINUS
      || GET_MODE (x4) != i1)
    return -1;
  x5 = XEXP (x4, 1);
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
  x11 = XEXP (x4, 0);
  if (!rtx_equal_p (x11, operands[0]))
    return -1;
  x12 = XEXP (x2, 0);
  return pattern1192 (x12, 
i1); /* [-1, 1] */
}

int
pattern1205 (rtx x1, machine_mode i1)
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
pattern1209 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  int res ATTRIBUTE_UNUSED;
  switch (GET_CODE (x1))
    {
    case UNSPEC:
      if (XVECLEN (x1, 0) != 2
          || XINT (x1, 1) != 52
          || GET_MODE (x1) != E_V16QImode)
        return -1;
      x2 = XVECEXP (x1, 0, 0);
      operands[1] = x2;
      if (!register_operand (operands[1], E_V16QImode))
        return -1;
      x3 = XVECEXP (x1, 0, 1);
      operands[2] = x3;
      return 0;

    case VEC_SELECT:
      if (GET_MODE (x1) != E_V4SImode)
        return -1;
      x4 = XEXP (x1, 1);
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
      if (x7 != const_int_rtx[MAX_SAVED_CONST_INT + 2])
        return -1;
      x8 = XVECEXP (x4, 0, 3);
      if (x8 != const_int_rtx[MAX_SAVED_CONST_INT + 3])
        return -1;
      x9 = XEXP (x1, 0);
      operands[1] = x9;
      if (!register_operand (operands[1], E_V4SImode))
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern1228 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 2);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  if (maybe_ne (SUBREG_BYTE (x4), 0))
    return -1;
  x5 = XEXP (x4, 0);
  if (GET_CODE (x5) != NOT)
    return -1;
  x6 = XEXP (x5, 0);
  operands[3] = x6;
  x7 = XEXP (x3, 1);
  operands[4] = x7;
  switch (GET_MODE (operands[0]))
    {
    case E_V16QImode:
      if (!register_operand (operands[0], E_V16QImode)
          || GET_MODE (x1) != E_V16QImode
          || !register_operand (operands[1], E_V16QImode)
          || !vector_operand (operands[2], E_V16QImode)
          || GET_MODE (x2) != E_V16QImode
          || GET_MODE (x5) != E_V16QImode
          || !register_operand (operands[3], E_V16QImode))
        return -1;
      switch (GET_MODE (x3))
        {
        case E_V4SImode:
          if (GET_MODE (x4) != E_V4SImode
              || !const0_operand (operands[4], E_V4SImode))
            return -1;
          return 0;

        case E_V2DImode:
          if (GET_MODE (x4) != E_V2DImode
              || !const0_operand (operands[4], E_V2DImode))
            return -1;
          return 1;

        default:
          return -1;
        }

    case E_V32QImode:
      if (!register_operand (operands[0], E_V32QImode)
          || GET_MODE (x1) != E_V32QImode
          || !register_operand (operands[1], E_V32QImode)
          || !vector_operand (operands[2], E_V32QImode)
          || GET_MODE (x2) != E_V32QImode
          || GET_MODE (x5) != E_V32QImode
          || !register_operand (operands[3], E_V32QImode))
        return -1;
      switch (GET_MODE (x3))
        {
        case E_V8SImode:
          if (GET_MODE (x4) != E_V8SImode
              || !const0_operand (operands[4], E_V8SImode))
            return -1;
          return 2;

        case E_V4DImode:
          if (GET_MODE (x4) != E_V4DImode
              || !const0_operand (operands[4], E_V4DImode))
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
pattern1250 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1
      || !register_operand (operands[1], i1)
      || !nonmemory_operand (operands[2], E_QImode))
    return -1;
  return 0;
}

int
pattern1258 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
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
  if (!x86_64_nonmemory_operand (operands[2], i1))
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
}

int
pattern1271 (rtx x1, machine_mode i1, machine_mode i2)
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
pattern1276 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != i1
      || !vector_operand (operands[2], i1)
      || !register_operand (operands[4], i2))
    return -1;
  return 0;
}

int
pattern1284 (rtx x1, machine_mode i1, machine_mode i2)
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
      || !memory_operand (operands[1], i2)
      || !nonimm_or_0_operand (operands[2], i1)
      || !const0_operand (operands[4], i1))
    return -1;
  return 0;
}

int
pattern1293 (rtx x1, machine_mode i1, machine_mode i2)
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
      || !nonimmediate_operand (operands[2], i2)
      || !nonimmediate_operand (operands[3], i2)
      || !register_operand (operands[4], i1))
    return -1;
  return 0;
}

int
pattern1302 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != i1
      || !vector_operand (operands[1], i1))
    return -1;
  return 0;
}

int
pattern1310 (rtx x1, machine_mode i1, machine_mode i2)
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
      || !nonimm_or_0_operand (operands[2], i2)
      || !register_operand (operands[3], i1))
    return -1;
  return 0;
}

int
pattern1314 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12, x13, x14, x15;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
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
  x9 = XVECEXP (x4, 0, 4);
  if (x9 != const_int_rtx[MAX_SAVED_CONST_INT + 8])
    return -1;
  x10 = XVECEXP (x4, 0, 5);
  if (x10 != const_int_rtx[MAX_SAVED_CONST_INT + 10])
    return -1;
  x11 = XVECEXP (x4, 0, 6);
  if (x11 != const_int_rtx[MAX_SAVED_CONST_INT + 12])
    return -1;
  x12 = XVECEXP (x4, 0, 7);
  if (x12 != const_int_rtx[MAX_SAVED_CONST_INT + 14])
    return -1;
  x13 = XEXP (x1, 1);
  x14 = XEXP (x13, 0);
  x15 = XEXP (x14, 1);
  return pattern1313 (x15, 
8); /* [-1, 0] */
}

int
pattern1329 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 1);
  if (maybe_ne (SUBREG_BYTE (x3), 0)
      || GET_MODE (x3) != E_QImode)
    return -1;
  x4 = XEXP (x3, 0);
  if (GET_CODE (x4) != AND)
    return -1;
  x5 = XEXP (x4, 0);
  operands[1] = x5;
  if (!int248_register_operand (operands[1], E_VOIDmode))
    return -1;
  x6 = XEXP (x4, 1);
  operands[2] = x6;
  if (!const_int_operand (operands[2], E_VOIDmode))
    return -1;
  x7 = XEXP (x1, 1);
  operands[3] = x7;
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
}

int
pattern1344 (rtx x1)
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
  if (!rtx_equal_p (x6, operands[0]))
    return -1;
  x7 = XEXP (x4, 0);
  if (!rtx_equal_p (x7, operands[0]))
    return -1;
  return 0;
}

int
pattern1353 ()
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  switch (GET_MODE (operands[2]))
    {
    case E_HImode:
      if (!extract_operator (operands[2], E_HImode))
        return -1;
      return 0;

    case E_SImode:
      if (!extract_operator (operands[2], E_SImode))
        return -1;
      return 1;

    case E_DImode:
      if (!extract_operator (operands[2], E_DImode))
        return -1;
      return 2;

    default:
      return -1;
    }
}

int
pattern1360 (rtx x1)
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
pattern1370 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  x5 = XEXP (x4, 0);
  operands[2] = x5;
  if (!nonimmediate_operand (operands[2], i2))
    return -1;
  x6 = XEXP (x2, 1);
  operands[1] = x6;
  if (!register_operand (operands[1], i1))
    return -1;
  x7 = XEXP (x1, 1);
  operands[3] = x7;
  if (!nonimm_or_0_operand (operands[3], i1))
    return -1;
  x8 = XEXP (x1, 2);
  operands[4] = x8;
  if (!register_operand (operands[4], E_QImode))
    return -1;
  return 0;
}

int
pattern1384 (rtx x1, machine_mode i1)
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
      || !nonimmediate_operand (operands[2], i1))
    return -1;
  x3 = XEXP (x2, 2);
  if (GET_MODE (x3) != i1
      || !nonimmediate_operand (operands[3], i1))
    return -1;
  return 0;
}

int
pattern1393 (rtx x1, machine_mode i1)
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
  x4 = XEXP (x2, 2);
  if (GET_MODE (x4) != i1
      || !nonimmediate_operand (operands[3], i1))
    return -1;
  return 0;
}

int
pattern1404 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4;
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
  if (GET_MODE (x4) != i1)
    return -1;
  return 0;
}

int
pattern1411 (rtx x1, machine_mode i1)
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
  x4 = XEXP (x2, 2);
  if (GET_MODE (x4) != i1)
    return -1;
  return 0;
}

int
pattern1418 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  operands[0] = x3;
  if (!int248_register_operand (operands[0], E_VOIDmode))
    return -1;
  x4 = XEXP (x1, 1);
  operands[3] = x4;
  x5 = XEXP (x4, 0);
  switch (GET_CODE (x5))
    {
    case AND:
      return pattern1417 (x1); /* [-1, 2] */

    case IOR:
      res = pattern1417 (x1);
      if (res >= 0)
        return res + 3; /* [3, 5] */
      return -1;

    case XOR:
      res = pattern1417 (x1);
      if (res >= 0)
        return res + 6; /* [6, 8] */
      return -1;

    default:
      return -1;
    }
}

int
pattern1431 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1)
    return -1;
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) != i1
      || !nonimmediate_operand (operands[1], i1))
    return -1;
  return 0;
}

int
pattern1436 (rtx x1)
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
  return pattern195 (x1); /* [-1, 1] */
}

int
pattern1446 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || !addsub_vm_operator (operands[6], i1))
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != i1
      || !register_operand (operands[1], i1)
      || !vector_operand (operands[2], i1))
    return -1;
  x3 = XEXP (x1, 1);
  if (GET_MODE (x3) != i1
      || !vector_operand (operands[3], i1)
      || !vector_operand (operands[4], i1))
    return -1;
  return 0;
}

int
pattern1455 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1
      || !register_operand (operands[1], i1))
    return -1;
  x2 = XEXP (x1, 2);
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) != i1
      || !register_operand (operands[2], i1))
    return -1;
  return 0;
}

int
pattern1461 (rtx x1, machine_mode i1)
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
pattern1471 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!const0_operand (operands[2], i1)
      || GET_MODE (x1) != i2
      || !nonimmediate_operand (operands[3], i1)
      || !const0_operand (operands[4], i1))
    return -1;
  return 0;
}

int
pattern1476 (rtx x1, machine_mode i1)
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
pattern1486 (rtx x1, machine_mode i1, machine_mode i2, machine_mode i3)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4;
  int res ATTRIBUTE_UNUSED;
  if (!nonimmediate_operand (operands[0], i3)
      || GET_MODE (x1) != i3)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != i1
      || !nonimmediate_operand (operands[1], i2))
    return -1;
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) != i2)
    return -1;
  x4 = XEXP (x1, 1);
  if (GET_MODE (x4) != i1)
    return -1;
  return 0;
}

int
pattern1494 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!nonimmediate_operand (operands[1], i1)
      || !x86_64_general_operand (operands[2], i1)
      || !nonimmediate_operand (operands[0], i1)
      || GET_MODE (x1) != i1)
    return -1;
  return 0;
}

int
pattern1501 (rtx x1, rtx_code i1)
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
      return pattern1500 (x1, 
E_DImode, 
E_TImode); /* [-1, 0] */

    case 32L:
      if (pattern1500 (x1, 
E_SImode, 
E_DImode) != 0)
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern1512 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4;
  int res ATTRIBUTE_UNUSED;
  if (GET_MODE (x1) != i1)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != i1)
    return -1;
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) != i1)
    return -1;
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) != i1)
    return -1;
  return 0;
}

int
pattern1519 (rtx x1, machine_mode i1, machine_mode i2, machine_mode i3, machine_mode i4)
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
  if (GET_MODE (x4) != i4
      || !register_operand (operands[2], i3))
    return -1;
  x5 = XEXP (x3, 1);
  if (GET_MODE (x5) != i4
      || !register_operand (operands[1], i3)
      || !nonimm_or_0_operand (operands[3], i2)
      || !register_operand (operands[4], i1))
    return -1;
  return 0;
}

int
pattern1534 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  switch (GET_CODE (x3))
    {
    case COMPARE:
      x4 = XEXP (x2, 0);
      if (GET_CODE (x4) != REG
          || REGNO (x4) != 17)
        return -1;
      x5 = XVECEXP (x1, 0, 1);
      if (GET_CODE (x5) != SET)
        return -1;
      x6 = XEXP (x5, 1);
      if (GET_MODE (x6) != i1)
        return -1;
      x7 = XEXP (x5, 0);
      if (!rtx_equal_p (x7, operands[0]))
        return -1;
      x8 = PATTERN (peep2_next_insn (2));
      x9 = XEXP (x8, 0);
      if (!rtx_equal_p (x9, operands[1]))
        return -1;
      x10 = XEXP (x3, 0);
      switch (GET_CODE (x10))
        {
        case REG:
          return pattern1190 (x1, 
i1); /* [-1, 0] */

        case PLUS:
          if (pattern1191 (x1, 
i1) != 0)
            return -1;
          return 1;

        default:
          return -1;
        }

    case PLUS:
      res = pattern1193 (x1, 
i1);
      if (res >= 0)
        return res + 2; /* [2, 3] */
      return -1;

    case MINUS:
      res = pattern1194 (x1, 
i1);
      if (res >= 0)
        return res + 4; /* [4, 5] */
      return -1;

    default:
      return -1;
    }
}

int
pattern1553 (rtx x1, machine_mode i1, machine_mode i2)
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
      || !nonimm_or_0_operand (operands[3], i1)
      || !register_operand (operands[4], i2))
    return -1;
  return 0;
}

int
pattern1561 (rtx x1, machine_mode i1, machine_mode i2)
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
      || !sext_operand (operands[2], i1)
      || pattern718 (x1, 
i1, 
i2) != 0)
    return -1;
  return 0;
}

int
pattern1571 (rtx x1, int *pnum_clobbers)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  switch (GET_CODE (x1))
    {
    case UNSPEC:
      if (pnum_clobbers == NULL
          || XVECLEN (x1, 0) != 1
          || XINT (x1, 1) != 32)
        return -1;
      x2 = XVECEXP (x1, 0, 0);
      if (x2 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
        return -1;
      return 0;

    case CLOBBER:
      x3 = XEXP (x1, 0);
      if (GET_CODE (x3) != REG
          || REGNO (x3) != 17
          || GET_MODE (x3) != E_CCmode)
        return -1;
      return 1;

    case USE:
      if (pnum_clobbers == NULL)
        return -1;
      x3 = XEXP (x1, 0);
      operands[4] = x3;
      if (!register_operand (operands[4], E_SImode))
        return -1;
      return 2;

    default:
      return -1;
    }
}

int
pattern1583 (rtx x1, machine_mode i1, machine_mode i2)
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
      || !register_operand (operands[2], i2)
      || !register_operand (operands[1], i1))
    return -1;
  return 0;
}

int
pattern1593 (rtx x1, machine_mode i1, machine_mode i2)
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
      || pattern1587 (
i1, 
i2) != 0)
    return -1;
  return 0;
}

int
pattern1602 (machine_mode i1)
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
pattern1609 (rtx x1, machine_mode i1, machine_mode i2)
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
      return pattern1608 (
E_SImode); /* [-1, 1] */

    case E_DImode:
      res = pattern1608 (
E_DImode);
      if (res >= 0)
        return res + 2; /* [2, 3] */
      return -1;

    default:
      return -1;
    }
}

int
pattern1621 (rtx x1)
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
      return pattern1620 (); /* [-1, 2] */

    case REG:
    case SUBREG:
    case MEM:
      operands[0] = x4;
      if (!nonimmediate_operand (operands[0], E_QImode))
        return -1;
      res = pattern1620 ();
      if (res >= 0)
        return res + 3; /* [3, 5] */
      return -1;

    default:
      return -1;
    }
}

int
pattern1637 (rtx x1, machine_mode i1, machine_mode i2)
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
      || !const_0_to_3_operand (operands[3], E_VOIDmode)
      || !const_0_to_3_operand (operands[4], E_VOIDmode)
      || !const_4_to_7_operand (operands[5], E_VOIDmode)
      || !const_4_to_7_operand (operands[6], E_VOIDmode)
      || !nonimm_or_0_operand (operands[7], i1))
    return -1;
  return 0;
}

int
pattern1649 (machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!vsib_address_operand (operands[4], i1))
    return -1;
  switch (GET_MODE (operands[3]))
    {
    case E_V8SImode:
      if (!register_operand (operands[3], E_V8SImode))
        return -1;
      return 0;

    case E_V8DImode:
      if (!register_operand (operands[3], E_V8DImode))
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern1658 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!nonimmediate_operand (operands[1], i1)
      || !register_operand (operands[0], i1)
      || GET_MODE (x1) != i1
      || !register_operand (operands[2], i1))
    return -1;
  return 0;
}

int
pattern1664 (rtx x1)
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
pattern1674 (rtx x1, rtx_code i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4;
  int res ATTRIBUTE_UNUSED;
  if (GET_CODE (x1) != i1)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_CODE (x2) != MINUS)
    return -1;
  x3 = XEXP (x2, 1);
  switch (GET_CODE (x3))
    {
    case LTU:
    case UNLT:
      operands[5] = x3;
      x4 = XEXP (x3, 1);
      if (x4 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
        return -1;
      return 0;

    default:
      return -1;
    }
}

int
pattern1684 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 2);
  if (maybe_ne (SUBREG_BYTE (x4), 0)
      || GET_MODE (x4) != E_QImode)
    return -1;
  x5 = XEXP (x4, 0);
  if (GET_CODE (x5) != AND)
    return -1;
  x6 = XEXP (x5, 0);
  operands[2] = x6;
  x7 = XEXP (x5, 1);
  operands[3] = x7;
  if (!const_int_operand (operands[3], E_VOIDmode))
    return -1;
  x8 = XEXP (x1, 1);
  x9 = XEXP (x8, 0);
  operands[4] = x9;
  switch (GET_MODE (x3))
    {
    case E_SImode:
      return pattern1683 (x5, 
E_SImode); /* [-1, 2] */

    case E_DImode:
      res = pattern1683 (x5, 
E_DImode);
      if (res >= 0)
        return res + 3; /* [3, 5] */
      return -1;

    default:
      return -1;
    }
}

int
pattern1695 (rtx x1, machine_mode i1, machine_mode i2, machine_mode i3)
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
      || !nonimmediate_operand (operands[3], i1)
      || !register_operand (operands[5], i3))
    return -1;
  return 0;
}

int
pattern1705 ()
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!const_0_to_7_operand (operands[2], E_VOIDmode)
      || !const_0_to_7_operand (operands[3], E_VOIDmode)
      || !const_0_to_7_operand (operands[4], E_VOIDmode)
      || !const_0_to_7_operand (operands[5], E_VOIDmode)
      || !const_0_to_7_operand (operands[6], E_VOIDmode)
      || !const_0_to_7_operand (operands[7], E_VOIDmode)
      || !const_0_to_7_operand (operands[8], E_VOIDmode)
      || !const_0_to_7_operand (operands[9], E_VOIDmode))
    return -1;
  return 0;
}

int
pattern1716 (machine_mode i1)
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
pattern1723 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i2)
      || GET_MODE (x1) != i2
      || !register_operand (operands[6], E_QImode)
      || !vsib_mem_operator (operands[5], i1)
      || !scratch_operand (operands[1], E_QImode))
    return -1;
  x2 = XVECEXP (x1, 0, 2);
  x3 = XEXP (x2, 0);
  switch (GET_MODE (x3))
    {
    case E_SImode:
      return pattern1722 (
E_SImode); /* [-1, 1] */

    case E_DImode:
      res = pattern1722 (
E_DImode);
      if (res >= 0)
        return res + 2; /* [2, 3] */
      return -1;

    default:
      return -1;
    }
}

int
pattern1734 (machine_mode i1)
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
pattern1740 (machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!vsib_address_operand (operands[4], i1))
    return -1;
  switch (GET_MODE (operands[3]))
    {
    case E_V8SImode:
      if (!register_operand (operands[3], E_V8SImode))
        return -1;
      return 0;

    case E_V8DImode:
      if (!register_operand (operands[3], E_V8DImode))
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern1749 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!memory_operand (operands[0], i1)
      || !const_int_operand (operands[2], i1)
      || GET_MODE (x1) != i1
      || !const_int_operand (operands[1], i1))
    return -1;
  return 0;
}

int
pattern1756 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  x4 = XEXP (x3, 0);
  switch (GET_MODE (x4))
    {
    case E_HImode:
      if (!memory_operand (operands[0], E_HImode))
        return -1;
      x5 = XVECEXP (x1, 0, 1);
      x6 = XEXP (x5, 0);
      if (GET_MODE (x6) != E_HImode
          || !nonmemory_operand (operands[1], E_HImode))
        return -1;
      return 0;

    case E_SImode:
      if (!memory_operand (operands[0], E_SImode))
        return -1;
      x5 = XVECEXP (x1, 0, 1);
      x6 = XEXP (x5, 0);
      if (GET_MODE (x6) != E_SImode
          || !nonmemory_operand (operands[1], E_SImode))
        return -1;
      return 1;

    case E_DImode:
      if (!memory_operand (operands[0], E_DImode))
        return -1;
      x5 = XVECEXP (x1, 0, 1);
      x6 = XEXP (x5, 0);
      if (GET_MODE (x6) != E_DImode
          || !nonmemory_operand (operands[1], E_DImode))
        return -1;
      return 2;

    default:
      return -1;
    }
}

int
pattern1773 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1
      || !vsib_mem_operator (operands[6], i2)
      || !scratch_operand (operands[1], i1))
    return -1;
  x2 = XVECEXP (x1, 0, 1);
  x3 = XEXP (x2, 0);
  switch (GET_MODE (x3))
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
pattern1780 (rtx x1, machine_mode i1, machine_mode i2, rtx_code i3)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12, x13, x14, x15;
  int res ATTRIBUTE_UNUSED;
  if (GET_CODE (x1) != MULT
      || GET_MODE (x1) != i2)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_CODE (x2) != i3
      || GET_MODE (x2) != i2)
    return -1;
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) != VEC_SELECT
      || GET_MODE (x3) != i1)
    return -1;
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) != PARALLEL
      || XVECLEN (x4, 0) != 4)
    return -1;
  x5 = XVECEXP (x4, 0, 0);
  if (x5 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
    return -1;
  x6 = XVECEXP (x4, 0, 1);
  if (x6 != const_int_rtx[MAX_SAVED_CONST_INT + 3])
    return -1;
  x7 = XVECEXP (x4, 0, 2);
  if (x7 != const_int_rtx[MAX_SAVED_CONST_INT + 5])
    return -1;
  x8 = XVECEXP (x4, 0, 3);
  if (x8 != const_int_rtx[MAX_SAVED_CONST_INT + 7])
    return -1;
  x9 = XEXP (x1, 1);
  if (GET_CODE (x9) != SIGN_EXTEND
      || GET_MODE (x9) != i2)
    return -1;
  x10 = XEXP (x9, 0);
  if (GET_CODE (x10) != VEC_SELECT
      || GET_MODE (x10) != i1)
    return -1;
  x11 = XEXP (x10, 1);
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
  if (x15 != const_int_rtx[MAX_SAVED_CONST_INT + 7])
    return -1;
  return 0;
}

int
pattern1806 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  x5 = XEXP (x4, 0);
  operands[1] = x5;
  if (!nonimmediate_operand (operands[1], i1)
      || !register_operand (operands[3], i1))
    return -1;
  x6 = XEXP (x2, 1);
  if (!rtx_equal_p (x6, operands[1]))
    return -1;
  x7 = XEXP (x1, 1);
  if (!rtx_equal_p (x7, operands[1]))
    return -1;
  return 0;
}

int
pattern1814 (rtx x1, machine_mode i1, machine_mode i2, machine_mode i3)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i3)
      || GET_MODE (x1) != i3)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != i3)
    return -1;
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) != i2
      || !register_operand (operands[1], i1))
    return -1;
  x4 = XEXP (x2, 1);
  if (GET_MODE (x4) != i2
      || !vector_operand (operands[2], i1))
    return -1;
  return 0;
}

int
pattern1822 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1))
    return -1;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) != i1
      || !memory_operand (operands[1], i1)
      || !register_operand (operands[2], i1)
      || !register_operand (operands[3], i1))
    return -1;
  x4 = XVECEXP (x1, 0, 1);
  x5 = XEXP (x4, 1);
  if (GET_MODE (x5) != i1)
    return -1;
  return 0;
}

int
pattern1828 (rtx x1, machine_mode i1, machine_mode i2, machine_mode i3)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != i3
      || !vsib_mem_operator (operands[6], i2)
      || !register_operand (operands[4], i1))
    return -1;
  x3 = XVECEXP (x2, 0, 1);
  x4 = XEXP (x3, 0);
  switch (GET_MODE (x4))
    {
    case E_SImode:
      if (!vsib_address_operand (operands[2], E_SImode))
        return -1;
      return 0;

    case E_DImode:
      if (!vsib_address_operand (operands[2], E_DImode))
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern1837 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8;
  int res ATTRIBUTE_UNUSED;
  if (!nonimmediate_operand (operands[1], i1))
    return -1;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  x4 = XEXP (x3, 1);
  if (GET_MODE (x4) != i2
      || !ix86_carry_flag_operator (operands[4], i2))
    return -1;
  x5 = XEXP (x4, 1);
  if (GET_MODE (x5) != i2
      || !nonimmediate_operand (operands[2], i1)
      || !nonimmediate_operand (operands[0], i1))
    return -1;
  x6 = XVECEXP (x1, 0, 1);
  x7 = XEXP (x6, 1);
  if (GET_MODE (x7) != i1)
    return -1;
  x8 = XEXP (x7, 0);
  if (GET_MODE (x8) != i1
      || !ix86_carry_flag_operator (operands[5], i1))
    return -1;
  return 0;
}

int
pattern1846 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 8);
  if (XWINT (x2, 0) != 12L)
    return -1;
  x3 = XVECEXP (x1, 0, 9);
  if (XWINT (x3, 0) != 28L)
    return -1;
  x4 = XVECEXP (x1, 0, 10);
  if (XWINT (x4, 0) != 13L)
    return -1;
  x5 = XVECEXP (x1, 0, 11);
  if (XWINT (x5, 0) != 29L)
    return -1;
  return 0;
}

int
pattern1853 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12, x13, x14, x15;
  int res ATTRIBUTE_UNUSED;
  if (GET_CODE (x1) != SET)
    return -1;
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) != GTU
      || GET_MODE (x2) != E_QImode)
    return -1;
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) != REG
      || REGNO (x3) != 17
      || GET_MODE (x3) != E_CCmode)
    return -1;
  x4 = XEXP (x2, 1);
  if (x4 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
    return -1;
  x5 = XEXP (x1, 0);
  operands[7] = x5;
  if (!register_operand (operands[7], E_QImode))
    return -1;
  x6 = PATTERN (peep2_next_insn (2));
  if (GET_CODE (x6) != SET)
    return -1;
  x7 = XEXP (x6, 1);
  if (GET_CODE (x7) != LTU
      || GET_MODE (x7) != E_QImode)
    return -1;
  x8 = XEXP (x7, 0);
  if (GET_CODE (x8) != REG
      || REGNO (x8) != 17
      || GET_MODE (x8) != E_CCmode)
    return -1;
  x9 = XEXP (x7, 1);
  if (x9 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
    return -1;
  x10 = XEXP (x6, 0);
  operands[8] = x10;
  if (!register_operand (operands[8], E_QImode))
    return -1;
  x11 = PATTERN (peep2_next_insn (3));
  if (GET_CODE (x11) != SET)
    return -1;
  x12 = XEXP (x11, 1);
  if (GET_CODE (x12) != COMPARE)
    return -1;
  x13 = XEXP (x11, 0);
  if (GET_CODE (x13) != REG
      || REGNO (x13) != 17)
    return -1;
  x14 = XEXP (x12, 0);
  if (!rtx_equal_p (x14, operands[7]))
    return -1;
  x15 = XEXP (x12, 1);
  if (!rtx_equal_p (x15, operands[8]))
    return -1;
  return 0;
}

int
pattern1866 ()
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
pattern1878 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  int res ATTRIBUTE_UNUSED;
  if (GET_CODE (x1) != SET)
    return -1;
  x2 = XEXP (x1, 1);
  switch (GET_CODE (x2))
    {
    case NE:
    case EQ:
    case GE:
    case GT:
    case LE:
    case LT:
      operands[8] = x2;
      if (!ix86_comparison_int_operator (operands[8], E_QImode))
        return -1;
      x3 = XEXP (x2, 0);
      if (GET_CODE (x3) != REG
          || REGNO (x3) != 17)
        return -1;
      x4 = XEXP (x2, 1);
      if (x4 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
        return -1;
      x5 = XEXP (x1, 0);
      operands[7] = x5;
      if (!nonimmediate_operand (operands[7], E_QImode))
        return -1;
      return 0;

    case IF_THEN_ELSE:
      x3 = XEXP (x2, 0);
      if (!ix86_comparison_int_operator (x3, E_VOIDmode))
        return -1;
      operands[7] = x3;
      x6 = XEXP (x3, 0);
      if (GET_CODE (x6) != REG
          || REGNO (x6) != 17)
        return -1;
      x7 = XEXP (x3, 1);
      if (x7 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
        return -1;
      x4 = XEXP (x2, 1);
      if (GET_CODE (x4) != LABEL_REF)
        return -1;
      x8 = XEXP (x2, 2);
      if (GET_CODE (x8) != PC)
        return -1;
      x5 = XEXP (x1, 0);
      if (GET_CODE (x5) != PC)
        return -1;
      x9 = XEXP (x4, 0);
      operands[8] = x9;
      return 1;

    default:
      return -1;
    }
}

 int
recog_8 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12, x13, x14, x15;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XVECEXP (x2, 0, 0);
  switch (GET_CODE (x3))
    {
    case UNSPEC:
      return recog_7 (x1, insn, pnum_clobbers);

    case AND:
      x4 = XEXP (x3, 0);
      if (GET_CODE (x4) != UNSPEC
          || XVECLEN (x4, 0) != 3
          || XINT (x4, 1) != 59)
        return -1;
      x5 = XEXP (x1, 0);
      operands[0] = x5;
      x6 = XVECEXP (x4, 0, 0);
      operands[1] = x6;
      x7 = XVECEXP (x4, 0, 1);
      operands[2] = x7;
      x8 = XVECEXP (x4, 0, 2);
      operands[3] = x8;
      x9 = XVECEXP (x2, 0, 1);
      if (!const48_operand (x9, E_SImode))
        return -1;
      x10 = XEXP (x3, 1);
      switch (GET_CODE (x10))
        {
        case REG:
        case SUBREG:
          operands[4] = x10;
          operands[5] = x9;
          switch (GET_MODE (operands[0]))
            {
            case E_HImode:
              if (pattern1537 (x2, 
E_HImode) != 0)
                return -1;
              switch (GET_MODE (operands[1]))
                {
                case E_V16SImode:
                  if (!register_operand (operands[1], E_V16SImode)
                      || !nonimmediate_operand (operands[2], E_V16SImode)
                      || !const_0_to_7_operand (operands[3], E_SImode)
                      || !(
#line 286 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 122 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 4395 "../../gcc/config/i386/sse.md"
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
#line 308 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))))
                    return -1;
                  return 3278; /* avx512f_cmpv16si3_mask_round */

                case E_V16HFmode:
                  if (!register_operand (operands[1], E_V16HFmode)
                      || !nonimmediate_operand (operands[2], E_V16HFmode)
                      || !const_0_to_31_operand (operands[3], E_SImode)
                      || !(
#line 286 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 122 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 4395 "../../gcc/config/i386/sse.md"
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
#line 311 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL)))))
                    return -1;
                  return 3302; /* avx512vl_cmpv16hf3_mask_round */

                case E_V16SFmode:
                  if (!register_operand (operands[1], E_V16SFmode)
                      || !nonimmediate_operand (operands[2], E_V16SFmode)
                      || !const_0_to_31_operand (operands[3], E_SImode)
                      || !(
#line 286 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 122 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 4395 "../../gcc/config/i386/sse.md"
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
#line 313 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))))
                    return -1;
                  return 3308; /* avx512f_cmpv16sf3_mask_round */

                default:
                  return -1;
                }

            case E_QImode:
              if (pattern1537 (x2, 
E_QImode) != 0)
                return -1;
              switch (GET_MODE (operands[1]))
                {
                case E_V8SImode:
                  if (!register_operand (operands[1], E_V8SImode)
                      || !nonimmediate_operand (operands[2], E_V8SImode)
                      || !const_0_to_7_operand (operands[3], E_SImode)
                      || !(
#line 286 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 122 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 4395 "../../gcc/config/i386/sse.md"
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
#line 308 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))))
                    return -1;
                  return 3282; /* avx512vl_cmpv8si3_mask_round */

                case E_V8DImode:
                  if (!register_operand (operands[1], E_V8DImode)
                      || !nonimmediate_operand (operands[2], E_V8DImode)
                      || !const_0_to_7_operand (operands[3], E_SImode)
                      || !(
#line 286 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 122 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 4395 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && ((V8DImode == V16SFmode
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
#line 309 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))))
                    return -1;
                  return 3288; /* avx512f_cmpv8di3_mask_round */

                case E_V4DImode:
                  if (!register_operand (operands[1], E_V4DImode)
                      || !nonimmediate_operand (operands[2], E_V4DImode)
                      || !const_0_to_7_operand (operands[3], E_SImode)
                      || !(
#line 286 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 122 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 4395 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && ((V4DImode == V16SFmode
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
#line 309 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))))
                    return -1;
                  return 3292; /* avx512vl_cmpv4di3_mask_round */

                case E_V8SFmode:
                  if (!register_operand (operands[1], E_V8SFmode)
                      || !nonimmediate_operand (operands[2], E_V8SFmode)
                      || !const_0_to_31_operand (operands[3], E_SImode)
                      || !(
#line 286 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 122 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 4395 "../../gcc/config/i386/sse.md"
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
#line 313 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))))
                    return -1;
                  return 3312; /* avx512vl_cmpv8sf3_mask_round */

                case E_V8DFmode:
                  if (!register_operand (operands[1], E_V8DFmode)
                      || !nonimmediate_operand (operands[2], E_V8DFmode)
                      || !const_0_to_31_operand (operands[3], E_SImode)
                      || !(
#line 286 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 122 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 4395 "../../gcc/config/i386/sse.md"
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
#line 314 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))))
                    return -1;
                  return 3318; /* avx512f_cmpv8df3_mask_round */

                case E_V4DFmode:
                  if (!register_operand (operands[1], E_V4DFmode)
                      || !nonimmediate_operand (operands[2], E_V4DFmode)
                      || !const_0_to_31_operand (operands[3], E_SImode)
                      || !(
#line 286 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 122 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 4395 "../../gcc/config/i386/sse.md"
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
#line 314 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))))
                    return -1;
                  return 3322; /* avx512vl_cmpv4df3_mask_round */

                default:
                  return -1;
                }

            default:
              return -1;
            }

        case CONST_INT:
          if (XWINT (x10, 0) != 1L
              || pattern1451 (x2) != 0)
            return -1;
          operands[4] = x9;
          switch (pattern1690 ())
            {
            case 0:
              if (!(
#line 286 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 4819 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 479 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16))))
                return -1;
              return 3653; /* avx512f_vmcmpv8hf3_round */

            case 1:
              if (!
#line 286 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F))
                return -1;
              return 3655; /* avx512f_vmcmpv4sf3_round */

            case 2:
              if (!(
#line 286 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 4819 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 480 "../../gcc/config/i386/sse.md"
(TARGET_SSE2))))
                return -1;
              return 3657; /* avx512f_vmcmpv2df3_round */

            default:
              return -1;
            }

        case AND:
          if (GET_MODE (x10) != E_QImode)
            return -1;
          x11 = XEXP (x10, 1);
          if (x11 != const_int_rtx[MAX_SAVED_CONST_INT + 1]
              || pattern1451 (x2) != 0)
            return -1;
          x12 = XEXP (x10, 0);
          operands[4] = x12;
          if (!register_operand (operands[4], E_QImode))
            return -1;
          operands[5] = x9;
          switch (pattern1690 ())
            {
            case 0:
              if (!(
#line 286 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 4837 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 479 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16))))
                return -1;
              return 3659; /* avx512f_vmcmpv8hf3_mask_round */

            case 1:
              if (!
#line 286 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F))
                return -1;
              return 3661; /* avx512f_vmcmpv4sf3_mask_round */

            case 2:
              if (!(
#line 286 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 4837 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 480 "../../gcc/config/i386/sse.md"
(TARGET_SSE2))))
                return -1;
              return 3663; /* avx512f_vmcmpv2df3_mask_round */

            default:
              return -1;
            }

        default:
          return -1;
        }

    case COMPARE:
      if (GET_MODE (x3) != E_CCFPmode)
        return -1;
      x4 = XEXP (x3, 0);
      if (GET_CODE (x4) != VEC_SELECT
          || pattern602 (x3) != 0
          || pattern44 (x1, 
E_CCFPmode) != 0)
        return -1;
      x13 = XEXP (x4, 0);
      operands[0] = x13;
      x10 = XEXP (x3, 1);
      x12 = XEXP (x10, 0);
      operands[1] = x12;
      x9 = XVECEXP (x2, 0, 1);
      operands[2] = x9;
      if (!const48_operand (operands[2], E_SImode))
        return -1;
      switch (GET_MODE (x4))
        {
        case E_HFmode:
          if (!register_operand (operands[0], E_V8HFmode)
              || GET_MODE (x10) != E_HFmode
              || !register_operand (operands[1], E_V8HFmode)
              || !(
#line 296 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 4869 "../../gcc/config/i386/sse.md"
(SSE_FLOAT_MODE_P (HFmode) || HFmode == E_HFmode) && 
#line 1355 "../../gcc/config/i386/i386.md"
(TARGET_AVX512FP16))))
            return -1;
          return 3677; /* avx512fp16_comi_round */

        case E_SFmode:
          if (!register_operand (operands[0], E_V4SFmode)
              || GET_MODE (x10) != E_SFmode
              || !register_operand (operands[1], E_V4SFmode)
              || !(
#line 296 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 4869 "../../gcc/config/i386/sse.md"
(SSE_FLOAT_MODE_P (SFmode) || SFmode == E_HFmode)))
            return -1;
          return 3681; /* sse_comi_round */

        case E_DFmode:
          if (!register_operand (operands[0], E_V2DFmode)
              || GET_MODE (x10) != E_DFmode
              || !register_operand (operands[1], E_V2DFmode)
              || !(
#line 296 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 4869 "../../gcc/config/i386/sse.md"
(SSE_FLOAT_MODE_P (DFmode) || DFmode == E_HFmode)))
            return -1;
          return 3685; /* sse2_comi_round */

        default:
          return -1;
        }

    case FMA:
      x4 = XEXP (x3, 0);
      if (GET_CODE (x4) != NEG)
        return -1;
      x14 = XEXP (x3, 2);
      if (GET_CODE (x14) != NEG)
        return -1;
      x5 = XEXP (x1, 0);
      operands[0] = x5;
      x13 = XEXP (x4, 0);
      operands[1] = x13;
      x10 = XEXP (x3, 1);
      operands[2] = x10;
      x15 = XEXP (x14, 0);
      operands[3] = x15;
      x9 = XVECEXP (x2, 0, 1);
      operands[4] = x9;
      if (!const_4_or_8_to_11_operand (operands[4], E_SImode))
        return -1;
      switch (GET_MODE (operands[0]))
        {
        case E_SFmode:
          if (pattern1352 (x2, 
E_SFmode) != 0
              || !(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 6213 "../../gcc/config/i386/sse.md"
(TARGET_FMA || TARGET_FMA4)))
            return -1;
          return 4001; /* *fma_fnmsub_sf */

        case E_DFmode:
          if (pattern1352 (x2, 
E_DFmode) != 0
              || !(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 6213 "../../gcc/config/i386/sse.md"
(TARGET_FMA || TARGET_FMA4)))
            return -1;
          return 4003; /* *fma_fnmsub_df */

        default:
          return -1;
        }

    default:
      return -1;
    }
}

 int
recog_20 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  operands[1] = x3;
  switch (GET_CODE (x2))
    {
    case SIGN_EXTRACT:
      x4 = XEXP (x2, 1);
      switch (XWINT (x4, 0))
        {
        case 8L:
          x5 = XEXP (x2, 2);
          if (XWINT (x5, 0) != 8L
              || !int248_register_operand (operands[1], E_VOIDmode))
            return -1;
          switch (GET_MODE (operands[0]))
            {
            case E_HImode:
              if (!register_operand (operands[0], E_HImode)
                  || GET_MODE (x2) != E_HImode)
                return -1;
              return 118; /* *extvhi */

            case E_SImode:
              if (!register_operand (operands[0], E_SImode)
                  || GET_MODE (x2) != E_SImode)
                return -1;
              return 119; /* *extvsi */

            default:
              return -1;
            }

        case 1L:
          if (pnum_clobbers == NULL)
            return -1;
          x5 = XEXP (x2, 2);
          if (XWINT (x5, 0) != 0L)
            return -1;
          switch (GET_MODE (operands[0]))
            {
            case E_SImode:
              if (!register_operand (operands[0], E_SImode)
                  || GET_MODE (x2) != E_SImode
                  || !register_operand (operands[1], E_SImode))
                return -1;
              *pnum_clobbers = 1;
              return 120; /* *extvsi_1_0 */

            case E_DImode:
              if (!register_operand (operands[0], E_DImode)
                  || GET_MODE (x2) != E_DImode
                  || !register_operand (operands[1], E_DImode)
                  || !
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT))
                return -1;
              *pnum_clobbers = 1;
              return 121; /* *extvdi_1_0 */

            default:
              return -1;
            }

        default:
          return -1;
        }

    case ZERO_EXTRACT:
      x4 = XEXP (x2, 1);
      if (XWINT (x4, 0) != 8L)
        return -1;
      x5 = XEXP (x2, 2);
      if (XWINT (x5, 0) != 8L
          || !int248_register_operand (operands[1], E_VOIDmode))
        return -1;
      switch (GET_MODE (operands[0]))
        {
        case E_HImode:
          if (!register_operand (operands[0], E_HImode)
              || GET_MODE (x2) != E_HImode)
            return -1;
          return 122; /* *extzvhi */

        case E_SImode:
          if (!register_operand (operands[0], E_SImode)
              || GET_MODE (x2) != E_SImode)
            return -1;
          return 123; /* *extzvsi */

        case E_DImode:
          if (!register_operand (operands[0], E_DImode)
              || GET_MODE (x2) != E_DImode
              || !
#line 1164 "../../gcc/config/i386/i386.md"
(TARGET_64BIT))
            return -1;
          return 124; /* *extzvdi */

        default:
          return -1;
        }

    default:
      return -1;
    }
}

 int
recog_23 (rtx x1 ATTRIBUTE_UNUSED,
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
    case REG:
    case SUBREG:
    case MEM:
      switch (pattern1 (x1, pnum_clobbers))
        {
        case 0:
          if (!(
#line 16643 "../../gcc/config/i386/i386.md"
(((INTVAL (operands[3]) & (8 * BITS_PER_UNIT)) == 0
    || ((INTVAL (operands[3]) & (2 * 8 * BITS_PER_UNIT - 1))
	 == (2 * 8 * BITS_PER_UNIT - 1)))
   && ix86_pre_reload_split ()) && 
#line 1236 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return -1;
          *pnum_clobbers = 1;
          return 1129; /* *ashrti3_doubleword_mask_1 */

        case 1:
          x4 = XEXP (x2, 1);
          switch (GET_CODE (x4))
            {
            case CONST_INT:
              switch (pattern253 (x1))
                {
                case 0:
                  return 138; /* *insvqi_3 */

                case 1:
                  return 140; /* *insvqi_3 */

                case 2:
                  if (
#line 1164 "../../gcc/config/i386/i386.md"
(TARGET_64BIT))
                    return 142; /* *insvqi_3 */
                  break;

                default:
                  break;
                }
              break;

            case SUBREG:
              if (pnum_clobbers != NULL
                  && pattern422 (x1, 
E_TImode) == 0
                  && (
#line 16582 "../../gcc/config/i386/i386.md"
(((INTVAL (operands[3]) & (8 * BITS_PER_UNIT)) == 0
    || ((INTVAL (operands[3]) & (2 * 8 * BITS_PER_UNIT - 1))
	 == (2 * 8 * BITS_PER_UNIT - 1)))
   && ix86_pre_reload_split ()) && 
#line 1236 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                {
                  *pnum_clobbers = 1;
                  return 1125; /* *ashrti3_doubleword_mask */
                }
              break;

            default:
              break;
            }
          operands[2] = x4;
          switch (pattern254 (x1, pnum_clobbers))
            {
            case 0:
              switch (GET_MODE (operands[0]))
                {
                case E_TImode:
                  if (pnum_clobbers == NULL
                      || pattern738 (x2, 
E_TImode, 
E_QImode) != 0
                      || !
#line 1196 "../../gcc/config/i386/i386.md"
(TARGET_64BIT))
                    return -1;
                  *pnum_clobbers = 1;
                  return 1133; /* ashrti3_doubleword */

                case E_QImode:
                  if (pattern624 (x2, 
E_QImode) != 0)
                    return -1;
                  if (
#line 17532 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ASHIFTRT, QImode, operands, TARGET_APX_NDD)
   && TARGET_APX_NF))
                    return 1208; /* *ashrqi3_1_nf */
                  if (pnum_clobbers == NULL
                      || !
#line 17532 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ASHIFTRT, QImode, operands, TARGET_APX_NDD)
   && true))
                    return -1;
                  *pnum_clobbers = 1;
                  return 1209; /* *ashrqi3_1 */

                case E_HImode:
                  if (pattern624 (x2, 
E_HImode) != 0)
                    return -1;
                  if (
#line 17532 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ASHIFTRT, HImode, operands, TARGET_APX_NDD)
   && TARGET_APX_NF))
                    return 1210; /* *ashrhi3_1_nf */
                  if (pnum_clobbers == NULL
                      || !
#line 17532 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ASHIFTRT, HImode, operands, TARGET_APX_NDD)
   && true))
                    return -1;
                  *pnum_clobbers = 1;
                  return 1211; /* *ashrhi3_1 */

                case E_V4HImode:
                  if (pattern738 (x2, 
E_V4HImode, 
E_DImode) != 0
                      || !
#line 3854 "../../gcc/config/i386/mmx.md"
(TARGET_MMX || TARGET_MMX_WITH_SSE))
                    return -1;
                  return 2192; /* mmx_ashrv4hi3 */

                case E_V2SImode:
                  if (pattern738 (x2, 
E_V2SImode, 
E_DImode) != 0
                      || !
#line 3854 "../../gcc/config/i386/mmx.md"
(TARGET_MMX || TARGET_MMX_WITH_SSE))
                    return -1;
                  return 2193; /* mmx_ashrv2si3 */

                case E_V2HImode:
                  if (pattern738 (x2, 
E_V2HImode, 
E_DImode) != 0
                      || !
#line 3945 "../../gcc/config/i386/mmx.md"
(TARGET_SSE2))
                    return -1;
                  return 2206; /* ashrv2hi3 */

                case E_V2QImode:
                  if (pnum_clobbers == NULL
                      || pattern738 (x2, 
E_V2QImode, 
E_QImode) != 0
                      || !
#line 4007 "../../gcc/config/i386/mmx.md"
(!TARGET_PARTIAL_REG_STALL || optimize_size))
                    return -1;
                  *pnum_clobbers = 1;
                  return 2210; /* ashrv2qi3 */

                default:
                  return -1;
                }

            case 1:
              if (!
#line 17638 "../../gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)))
                return -1;
              *pnum_clobbers = 1;
              return 1217; /* *ashrqi3_1_slp */

            case 2:
              if (!
#line 17638 "../../gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)))
                return -1;
              *pnum_clobbers = 1;
              return 1219; /* *ashrhi3_1_slp */

            default:
              return -1;
            }

        default:
          return -1;
        }

    case ASHIFT:
      x5 = XEXP (x1, 0);
      operands[0] = x5;
      x6 = XEXP (x3, 0);
      operands[1] = x6;
      x7 = XEXP (x3, 1);
      operands[2] = x7;
      if (!const_int_operand (operands[2], E_QImode))
        return -1;
      x4 = XEXP (x2, 1);
      operands[3] = x4;
      if (!const_int_operand (operands[3], E_QImode))
        return -1;
      switch (GET_MODE (operands[0]))
        {
        case E_TImode:
          if (pnum_clobbers == NULL
              || pattern755 (x2, 
E_TImode) != 0
              || !(
#line 17988 "../../gcc/config/i386/i386.md"
(INTVAL (operands[2]) == INTVAL (operands[3])
   && UINTVAL (operands[2]) < 8 * BITS_PER_UNIT) && 
#line 1236 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return -1;
          *pnum_clobbers = 1;
          return 1281; /* *extendti2_doubleword_highpart */

        case E_V2DImode:
          if (pattern755 (x2, 
E_V2DImode) != 0)
            return -1;
          if (
#line 18006 "../../gcc/config/i386/i386.md"
(!TARGET_64BIT && TARGET_STV && TARGET_AVX512VL
   && INTVAL (operands[2]) == INTVAL (operands[3])
   && UINTVAL (operands[2]) < 32))
            return 1282; /* *extendv2di2_highpart_stv */
          if (!
#line 18023 "../../gcc/config/i386/i386.md"
(!TARGET_AVX512VL
   && INTVAL (operands[2]) == INTVAL (operands[3])
   && UINTVAL (operands[2]) < 32
   && ix86_pre_reload_split ()))
            return -1;
          return 1283; /* *extendv2di2_highpart_stv_noavx512vl */

        default:
          return -1;
        }

    default:
      return -1;
    }
}

 int
recog_30 (rtx x1 ATTRIBUTE_UNUSED,
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
    case E_SFmode:
      if (GET_MODE (x3) != E_SFmode)
        return -1;
      if (nonimm_ssenomem_operand (operands[0], E_SFmode)
          && register_ssemem_operand (operands[1], E_DFmode)
          && 
#line 5530 "../../gcc/config/i386/i386.md"
(TARGET_80387 || (TARGET_SSE2 && TARGET_SSE_MATH)))
        return 206; /* truncdfsf2 */
      if (!nonimmediate_operand (operands[0], E_SFmode)
          || !register_operand (operands[1], E_XFmode)
          || !
#line 5658 "../../gcc/config/i386/i386.md"
(TARGET_80387))
        return -1;
      return 207; /* truncxfsf2 */

    case E_DFmode:
      if (!nonimmediate_operand (operands[0], E_DFmode)
          || GET_MODE (x3) != E_DFmode
          || !register_operand (operands[1], E_XFmode)
          || !
#line 5658 "../../gcc/config/i386/i386.md"
(TARGET_80387))
        return -1;
      return 208; /* truncxfdf2 */

    case E_HFmode:
      if (!register_operand (operands[0], E_HFmode))
        return -1;
      switch (pattern424 (x3, 
E_HFmode))
        {
        case 0:
          if (!
#line 5699 "../../gcc/config/i386/i386.md"
(TARGET_AVX512FP16))
            return -1;
          return 209; /* *truncsfhf2 */

        case 1:
          if (!
#line 5699 "../../gcc/config/i386/i386.md"
(TARGET_AVX512FP16))
            return -1;
          return 210; /* *truncdfhf2 */

        default:
          return -1;
        }

    case E_BFmode:
      if (!register_operand (operands[0], E_BFmode)
          || GET_MODE (x3) != E_BFmode
          || !register_operand (operands[1], E_SFmode)
          || !
#line 5715 "../../gcc/config/i386/i386.md"
(TARGET_SSE2 && !HONOR_NANS (BFmode) && !flag_rounding_math
   && (flag_unsafe_math_optimizations
       || TARGET_AVXNECONVERT
       || (TARGET_AVX512BF16 && TARGET_AVX512VL))))
        return -1;
      return 211; /* truncsfbf2 */

    case E_V2SFmode:
      if (!register_operand (operands[0], E_V2SFmode)
          || GET_MODE (x3) != E_V2SFmode
          || !vector_operand (operands[1], E_V2DFmode)
          || !
#line 10152 "../../gcc/config/i386/sse.md"
(TARGET_MMX_WITH_SSE))
        return -1;
      return 5180; /* truncv2dfv2sf2 */

    default:
      return -1;
    }
}

 int
recog_34 (rtx x1 ATTRIBUTE_UNUSED,
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
    case E_HFmode:
      switch (pattern261 (x3, 
E_HFmode))
        {
        case 0:
          if (!
#line 6136 "../../gcc/config/i386/i386.md"
(TARGET_AVX512FP16))
            return -1;
          return 249; /* floatunssihf2 */

        case 1:
          if (!(
#line 6136 "../../gcc/config/i386/i386.md"
(TARGET_AVX512FP16) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return -1;
          return 251; /* floatunsdihf2 */

        default:
          return -1;
        }

    case E_SFmode:
      switch (pattern261 (x3, 
E_SFmode))
        {
        case 0:
          if (!
#line 6280 "../../gcc/config/i386/i386.md"
(TARGET_AVX512F && TARGET_SSE_MATH))
            return -1;
          return 257; /* *floatunssisf2_avx512 */

        case 1:
          if (!(
#line 6280 "../../gcc/config/i386/i386.md"
(TARGET_AVX512F && TARGET_SSE_MATH) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return -1;
          return 258; /* *floatunsdisf2_avx512 */

        default:
          return -1;
        }

    case E_DFmode:
      switch (pattern261 (x3, 
E_DFmode))
        {
        case 0:
          if (!
#line 6280 "../../gcc/config/i386/i386.md"
(TARGET_AVX512F && TARGET_SSE_MATH))
            return -1;
          return 259; /* *floatunssidf2_avx512 */

        case 1:
          if (!(
#line 6280 "../../gcc/config/i386/i386.md"
(TARGET_AVX512F && TARGET_SSE_MATH) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return -1;
          return 260; /* *floatunsdidf2_avx512 */

        default:
          return -1;
        }

    default:
      return -1;
    }
}

 int
recog_37 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  switch (GET_CODE (x3))
    {
    case REG:
    case SUBREG:
      switch (pattern1071 (x2))
        {
        case 0:
          switch (GET_MODE (operands[1]))
            {
            case E_V16SImode:
              if (!register_operand (operands[1], E_V16SImode)
                  || !nonimmediate_operand (operands[2], E_V16SImode)
                  || !const_0_to_7_operand (operands[3], E_SImode)
                  || !(
#line 122 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 4395 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 308 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512))))
                return -1;
              return 3277; /* avx512f_cmpv16si3_mask */

            case E_V16HFmode:
              if (!register_operand (operands[1], E_V16HFmode)
                  || !nonimmediate_operand (operands[2], E_V16HFmode)
                  || !const_0_to_31_operand (operands[3], E_SImode)
                  || !(
#line 122 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 4395 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 311 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL))))
                return -1;
              return 3301; /* avx512vl_cmpv16hf3_mask */

            case E_V16SFmode:
              if (!register_operand (operands[1], E_V16SFmode)
                  || !nonimmediate_operand (operands[2], E_V16SFmode)
                  || !const_0_to_31_operand (operands[3], E_SImode)
                  || !(
#line 122 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 4395 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 313 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512))))
                return -1;
              return 3307; /* avx512f_cmpv16sf3_mask */

            case E_V16QImode:
              if (!register_operand (operands[1], E_V16QImode)
                  || !nonimmediate_operand (operands[2], E_V16QImode)
                  || !const_0_to_7_operand (operands[3], E_SImode)
                  || !(
#line 122 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 4487 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 318 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
                return -1;
              return 3433; /* avx512vl_cmpv16qi3_mask */

            case E_V16HImode:
              if (!register_operand (operands[1], E_V16HImode)
                  || !nonimmediate_operand (operands[2], E_V16HImode)
                  || !const_0_to_7_operand (operands[3], E_SImode)
                  || !(
#line 122 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 4487 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 319 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
                return -1;
              return 3439; /* avx512vl_cmpv16hi3_mask */

            case E_V16BFmode:
              if (!register_operand (operands[1], E_V16BFmode)
                  || !nonimmediate_operand (operands[2], E_V16BFmode)
                  || !const_0_to_31_operand (operands[3], E_VOIDmode)
                  || !(
#line 122 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 32446 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256)))
                return -1;
              return 10725; /* avx10_2_cmppbf16_v16bf_mask */

            default:
              return -1;
            }

        case 1:
          switch (GET_MODE (operands[1]))
            {
            case E_V8SImode:
              if (!register_operand (operands[1], E_V8SImode)
                  || !nonimmediate_operand (operands[2], E_V8SImode)
                  || !const_0_to_7_operand (operands[3], E_SImode)
                  || !(
#line 122 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 4395 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 308 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
                return -1;
              return 3281; /* avx512vl_cmpv8si3_mask */

            case E_V4SImode:
              if (!register_operand (operands[1], E_V4SImode)
                  || !nonimmediate_operand (operands[2], E_V4SImode)
                  || !const_0_to_7_operand (operands[3], E_SImode)
                  || !(
#line 122 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 4395 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 308 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
                return -1;
              return 3284; /* avx512vl_cmpv4si3_mask */

            case E_V8DImode:
              if (!register_operand (operands[1], E_V8DImode)
                  || !nonimmediate_operand (operands[2], E_V8DImode)
                  || !const_0_to_7_operand (operands[3], E_SImode)
                  || !(
#line 122 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 4395 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 309 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512))))
                return -1;
              return 3287; /* avx512f_cmpv8di3_mask */

            case E_V4DImode:
              if (!register_operand (operands[1], E_V4DImode)
                  || !nonimmediate_operand (operands[2], E_V4DImode)
                  || !const_0_to_7_operand (operands[3], E_SImode)
                  || !(
#line 122 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 4395 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 309 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
                return -1;
              return 3291; /* avx512vl_cmpv4di3_mask */

            case E_V2DImode:
              if (!register_operand (operands[1], E_V2DImode)
                  || !nonimmediate_operand (operands[2], E_V2DImode)
                  || !const_0_to_7_operand (operands[3], E_SImode)
                  || !(
#line 122 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 4395 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 309 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
                return -1;
              return 3294; /* avx512vl_cmpv2di3_mask */

            case E_V8HFmode:
              if (!register_operand (operands[1], E_V8HFmode)
                  || !nonimmediate_operand (operands[2], E_V8HFmode)
                  || !const_0_to_31_operand (operands[3], E_SImode)
                  || !(
#line 122 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 4395 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 312 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL))))
                return -1;
              return 3304; /* avx512fp16_cmpv8hf3_mask */

            case E_V8SFmode:
              if (!register_operand (operands[1], E_V8SFmode)
                  || !nonimmediate_operand (operands[2], E_V8SFmode)
                  || !const_0_to_31_operand (operands[3], E_SImode)
                  || !(
#line 122 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 4395 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 313 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
                return -1;
              return 3311; /* avx512vl_cmpv8sf3_mask */

            case E_V4SFmode:
              if (!register_operand (operands[1], E_V4SFmode)
                  || !nonimmediate_operand (operands[2], E_V4SFmode)
                  || !const_0_to_31_operand (operands[3], E_SImode)
                  || !(
#line 122 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 4395 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 313 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
                return -1;
              return 3314; /* avx512vl_cmpv4sf3_mask */

            case E_V8DFmode:
              if (!register_operand (operands[1], E_V8DFmode)
                  || !nonimmediate_operand (operands[2], E_V8DFmode)
                  || !const_0_to_31_operand (operands[3], E_SImode)
                  || !(
#line 122 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 4395 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 314 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512))))
                return -1;
              return 3317; /* avx512f_cmpv8df3_mask */

            case E_V4DFmode:
              if (!register_operand (operands[1], E_V4DFmode)
                  || !nonimmediate_operand (operands[2], E_V4DFmode)
                  || !const_0_to_31_operand (operands[3], E_SImode)
                  || !(
#line 122 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 4395 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 314 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
                return -1;
              return 3321; /* avx512vl_cmpv4df3_mask */

            case E_V2DFmode:
              if (!register_operand (operands[1], E_V2DFmode)
                  || !nonimmediate_operand (operands[2], E_V2DFmode)
                  || !const_0_to_31_operand (operands[3], E_SImode)
                  || !(
#line 122 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 4395 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 314 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
                return -1;
              return 3324; /* avx512vl_cmpv2df3_mask */

            case E_V8HImode:
              if (!register_operand (operands[1], E_V8HImode)
                  || !nonimmediate_operand (operands[2], E_V8HImode)
                  || !const_0_to_7_operand (operands[3], E_SImode)
                  || !(
#line 122 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 4487 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 319 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
                return -1;
              return 3441; /* avx512vl_cmpv8hi3_mask */

            case E_V8BFmode:
              if (!register_operand (operands[1], E_V8BFmode)
                  || !nonimmediate_operand (operands[2], E_V8BFmode)
                  || !const_0_to_31_operand (operands[3], E_VOIDmode)
                  || !(
#line 122 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 32446 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256)))
                return -1;
              return 10727; /* avx10_2_cmppbf16_v8bf_mask */

            default:
              return -1;
            }

        default:
          return -1;
        }

    case CONST_INT:
      if (XWINT (x3, 0) != 1L
          || pattern1202 (x2) != 0)
        return -1;
      switch (pattern1510 ())
        {
        case 0:
          if (!(
#line 4819 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 479 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16)))
            return -1;
          return 3652; /* avx512f_vmcmpv8hf3 */

        case 1:
          if (!
#line 4819 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F))
            return -1;
          return 3654; /* avx512f_vmcmpv4sf3 */

        case 2:
          if (!(
#line 4819 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 480 "../../gcc/config/i386/sse.md"
(TARGET_SSE2)))
            return -1;
          return 3656; /* avx512f_vmcmpv2df3 */

        default:
          return -1;
        }

    case AND:
      if (GET_MODE (x3) != E_QImode)
        return -1;
      x4 = XEXP (x3, 1);
      if (x4 != const_int_rtx[MAX_SAVED_CONST_INT + 1]
          || pattern1202 (x2) != 0)
        return -1;
      x5 = XEXP (x3, 0);
      operands[4] = x5;
      if (!register_operand (operands[4], E_QImode))
        return -1;
      switch (pattern1510 ())
        {
        case 0:
          if (!(
#line 4837 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 479 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16)))
            return -1;
          return 3658; /* avx512f_vmcmpv8hf3_mask */

        case 1:
          if (!
#line 4837 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F))
            return -1;
          return 3660; /* avx512f_vmcmpv4sf3_mask */

        case 2:
          if (!(
#line 4837 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 480 "../../gcc/config/i386/sse.md"
(TARGET_SSE2)))
            return -1;
          return 3662; /* avx512f_vmcmpv2df3_mask */

        default:
          return -1;
        }

    default:
      return -1;
    }
}

 int
recog_52 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  switch (pattern81 (x1, pnum_clobbers))
    {
    case 0:
      switch (GET_MODE (operands[0]))
        {
        case E_TImode:
          x2 = XEXP (x1, 1);
          if (pattern72 (x2, pnum_clobbers) != 0
              || !(
#line 6465 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (PLUS, TImode, operands, TARGET_APX_NDD)) && 
#line 1236 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return -1;
          *pnum_clobbers = 1;
          return 267; /* *addti3_doubleword */

        case E_HImode:
          x2 = XEXP (x1, 1);
          if (pattern73 (x2, 
E_HImode) != 0)
            return -1;
          if (
#line 6813 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (PLUS, HImode, operands, TARGET_APX_NDD)
  && TARGET_APX_NF))
            return 297; /* *addhi_1_nf */
          if (pnum_clobbers == NULL
              || !
#line 6813 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (PLUS, HImode, operands, TARGET_APX_NDD)
  && true))
            return -1;
          *pnum_clobbers = 1;
          return 298; /* *addhi_1 */

        case E_QImode:
          x2 = XEXP (x1, 1);
          if (pattern73 (x2, 
E_QImode) != 0)
            return -1;
          if (
#line 6870 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (PLUS, QImode, operands, TARGET_APX_NDD)
  && TARGET_APX_NF))
            return 299; /* *addqi_1_nf */
          if (pnum_clobbers == NULL
              || !
#line 6870 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (PLUS, QImode, operands, TARGET_APX_NDD)
  && true))
            return -1;
          *pnum_clobbers = 1;
          return 300; /* *addqi_1 */

        case E_HFmode:
          x2 = XEXP (x1, 1);
          if (pattern5 (x2, 
E_HFmode) != 0
              || !
#line 23304 "../../gcc/config/i386/i386.md"
(TARGET_AVX512FP16
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
            return -1;
          return 1670; /* *addhf */

        case E_V8QImode:
          x2 = XEXP (x1, 1);
          if (pattern8 (x2, 
E_V8QImode) != 0
              || !
#line 3211 "../../gcc/config/i386/mmx.md"
((TARGET_MMX || TARGET_MMX_WITH_SSE)
   && ix86_binary_operator_ok (PLUS, V8QImode, operands)))
            return -1;
          return 2118; /* *mmx_addv8qi3 */

        case E_V4HImode:
          x2 = XEXP (x1, 1);
          if (pattern8 (x2, 
E_V4HImode) != 0
              || !
#line 3211 "../../gcc/config/i386/mmx.md"
((TARGET_MMX || TARGET_MMX_WITH_SSE)
   && ix86_binary_operator_ok (PLUS, V4HImode, operands)))
            return -1;
          return 2120; /* *mmx_addv4hi3 */

        case E_V2SImode:
          x2 = XEXP (x1, 1);
          if (pattern8 (x2, 
E_V2SImode) != 0
              || !
#line 3211 "../../gcc/config/i386/mmx.md"
((TARGET_MMX || TARGET_MMX_WITH_SSE)
   && ix86_binary_operator_ok (PLUS, V2SImode, operands)))
            return -1;
          return 2122; /* *mmx_addv2si3 */

        case E_V1DImode:
          x2 = XEXP (x1, 1);
          if (pattern8 (x2, 
E_V1DImode) != 0
              || !(
#line 3211 "../../gcc/config/i386/mmx.md"
((TARGET_MMX || TARGET_MMX_WITH_SSE)
   && ix86_binary_operator_ok (PLUS, V1DImode, operands)) && 
#line 50 "../../gcc/config/i386/mmx.md"
(TARGET_SSE2)))
            return -1;
          return 2124; /* *mmx_addv1di3 */

        case E_V4QImode:
          x2 = XEXP (x1, 1);
          if (pattern7 (x2, 
E_V4QImode) != 0
              || !
#line 3227 "../../gcc/config/i386/mmx.md"
(TARGET_SSE2))
            return -1;
          return 2126; /* addv4qi3 */

        case E_V2HImode:
          x2 = XEXP (x1, 1);
          if (pattern7 (x2, 
E_V2HImode) != 0
              || !
#line 3227 "../../gcc/config/i386/mmx.md"
(TARGET_SSE2))
            return -1;
          return 2128; /* addv2hi3 */

        case E_V2QImode:
          if (pnum_clobbers == NULL)
            return -1;
          x2 = XEXP (x1, 1);
          if (pattern7 (x2, 
E_V2QImode) != 0
              || !
#line 3241 "../../gcc/config/i386/mmx.md"
(!TARGET_PARTIAL_REG_STALL || optimize_size || TARGET_SSE2))
            return -1;
          *pnum_clobbers = 1;
          return 2130; /* addv2qi3 */

        default:
          return -1;
        }

    case 1:
      if (!
#line 6946 "../../gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)))
        return -1;
      *pnum_clobbers = 1;
      return 301; /* *addqi_1_slp */

    case 2:
      if (!
#line 6946 "../../gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)))
        return -1;
      *pnum_clobbers = 1;
      return 302; /* *addhi_1_slp */

    default:
      return -1;
    }
}

 int
recog_60 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12, x13, x14, x15, x16, x17;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  operands[0] = x2;
  x3 = XEXP (x1, 1);
  x4 = XEXP (x3, 0);
  switch (GET_CODE (x4))
    {
    case PLUS:
      if (pattern94 (x3, 
E_V2SFmode, 
E_SFmode) != 0)
        return -1;
      x5 = XEXP (x3, 1);
      x6 = XEXP (x5, 0);
      x7 = XEXP (x6, 0);
      operands[2] = x7;
      if (!nonimmediate_operand (operands[2], E_V2SFmode)
          || pattern1845 (x3) != 0
          || !
#line 995 "../../gcc/config/i386/mmx.md"
(TARGET_3DNOW
   && INTVAL (operands[3]) != INTVAL (operands[4])
   && INTVAL (operands[5]) != INTVAL (operands[6])))
        return -1;
      return 2058; /* *mmx_haddv2sf3 */

    case MINUS:
      if (pattern95 (x4, 
E_SFmode) != 0
          || !register_operand (operands[0], E_V2SFmode)
          || GET_MODE (x3) != E_V2SFmode)
        return -1;
      x8 = XEXP (x4, 0);
      x9 = XEXP (x8, 0);
      operands[1] = x9;
      if (!register_operand (operands[1], E_V2SFmode))
        return -1;
      x5 = XEXP (x3, 1);
      if (GET_MODE (x5) != E_SFmode)
        return -1;
      x10 = XEXP (x4, 1);
      x11 = XEXP (x10, 0);
      if (!rtx_equal_p (x11, operands[1]))
        return -1;
      switch (GET_CODE (x5))
        {
        case MINUS:
          if (pattern1555 (x5, 
E_SFmode) != 0)
            return -1;
          x6 = XEXP (x5, 0);
          x7 = XEXP (x6, 0);
          operands[2] = x7;
          if (!nonimmediate_operand (operands[2], E_V2SFmode))
            return -1;
          x12 = XEXP (x5, 1);
          x13 = XEXP (x12, 0);
          if (!rtx_equal_p (x13, operands[2])
              || !
#line 1043 "../../gcc/config/i386/mmx.md"
(TARGET_3DNOW_A))
            return -1;
          return 2060; /* mmx_hsubv2sf3 */

        case PLUS:
          x6 = XEXP (x5, 0);
          if (GET_CODE (x6) != VEC_SELECT
              || GET_MODE (x6) != E_SFmode)
            return -1;
          x14 = XEXP (x6, 1);
          if (GET_CODE (x14) != PARALLEL
              || XVECLEN (x14, 0) != 1)
            return -1;
          x12 = XEXP (x5, 1);
          if (GET_CODE (x12) != VEC_SELECT
              || GET_MODE (x12) != E_SFmode)
            return -1;
          x15 = XEXP (x12, 1);
          if (GET_CODE (x15) != PARALLEL
              || XVECLEN (x15, 0) != 1)
            return -1;
          x7 = XEXP (x6, 0);
          operands[2] = x7;
          if (!nonimmediate_operand (operands[2], E_V2SFmode))
            return -1;
          x16 = XVECEXP (x14, 0, 0);
          operands[3] = x16;
          if (!const_0_to_1_operand (operands[3], E_SImode))
            return -1;
          x17 = XVECEXP (x15, 0, 0);
          operands[4] = x17;
          if (!const_0_to_1_operand (operands[4], E_SImode))
            return -1;
          x13 = XEXP (x12, 0);
          if (!rtx_equal_p (x13, operands[2])
              || !
#line 1105 "../../gcc/config/i386/mmx.md"
(TARGET_3DNOW_A
   && INTVAL (operands[3]) != INTVAL (operands[4])))
            return -1;
          return 2062; /* *mmx_haddsubv2sf3 */

        default:
          return -1;
        }

    case REG:
    case SUBREG:
    case MEM:
      operands[1] = x4;
      x5 = XEXP (x3, 1);
      operands[2] = x5;
      switch (GET_MODE (operands[0]))
        {
        case E_V2SFmode:
          if (!register_operand (operands[0], E_V2SFmode)
              || GET_MODE (x3) != E_V2SFmode
              || !nonimmediate_operand (operands[1], E_SFmode))
            return -1;
          if (nonimm_or_0_operand (operands[2], E_SFmode))
            {
              if (
#line 1755 "../../gcc/config/i386/mmx.md"
(TARGET_MMX && !TARGET_SSE))
                return 2086; /* *mmx_concatv2sf */
              if (
#line 11753 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1 && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
                return 5284; /* *vec_concatv2sf_sse4_1 */
            }
          if (!reg_or_0_operand (operands[2], E_SFmode)
              || !
#line 11817 "../../gcc/config/i386/sse.md"
(TARGET_SSE))
            return -1;
          return 5285; /* *vec_concatv2sf_sse */

        case E_V2SImode:
          if (!register_operand (operands[0], E_V2SImode)
              || GET_MODE (x3) != E_V2SImode
              || !nonimmediate_operand (operands[1], E_SImode))
            return -1;
          if (nonimm_or_0_operand (operands[2], E_SImode))
            {
              if (
#line 5701 "../../gcc/config/i386/mmx.md"
(TARGET_MMX && !TARGET_SSE))
                return 2342; /* *mmx_concatv2si */
              if (
#line 21505 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1 && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
                return 8476; /* *vec_concatv2si_sse4_1 */
            }
          if (!reg_or_0_operand (operands[2], E_SImode)
              || !
#line 21554 "../../gcc/config/i386/sse.md"
(TARGET_SSE && !TARGET_SSE4_1))
            return -1;
          return 8477; /* *vec_concatv2si */

        default:
          return -1;
        }

    case SS_TRUNCATE:
      x5 = XEXP (x3, 1);
      if (GET_CODE (x5) != SS_TRUNCATE)
        return -1;
      switch (pattern268 (x3))
        {
        case 0:
          if (!
#line 4771 "../../gcc/config/i386/mmx.md"
(TARGET_MMX || TARGET_MMX_WITH_SSE))
            return -1;
          return 2286; /* mmx_packsswb */

        case 1:
          if (!
#line 4812 "../../gcc/config/i386/mmx.md"
(TARGET_MMX || TARGET_MMX_WITH_SSE))
            return -1;
          return 2288; /* mmx_packssdw */

        default:
          return -1;
        }

    default:
      return -1;
    }
}

 int
recog_66 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12, x13, x14, x15, x16, x17;
  rtx x18, x19;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  operands[0] = x2;
  x3 = XEXP (x1, 1);
  x4 = XEXP (x3, 0);
  switch (GET_CODE (x4))
    {
    case LSHIFTRT:
      x5 = XEXP (x4, 1);
      if (GET_CODE (x5) != CONST_INT)
        return -1;
      x6 = XEXP (x4, 0);
      switch (GET_CODE (x6))
        {
        case MULT:
          if (XWINT (x5, 0) != 16L)
            return -1;
          x7 = XEXP (x6, 0);
          switch (GET_CODE (x7))
            {
            case SIGN_EXTEND:
              switch (pattern748 (x3, 
SIGN_EXTEND))
                {
                case 0:
                  if (!
#line 3447 "../../gcc/config/i386/mmx.md"
((TARGET_MMX || TARGET_MMX_WITH_SSE)
   && ix86_binary_operator_ok (MULT, V4HImode, operands)))
                    return -1;
                  return 2155; /* *mmx_smulv4hi3_highpart */

                case 1:
                  if (!
#line 3516 "../../gcc/config/i386/mmx.md"
(TARGET_SSE2))
                    return -1;
                  return 2157; /* smulv2hi3_highpart */

                default:
                  return -1;
                }

            case ZERO_EXTEND:
              switch (pattern748 (x3, 
ZERO_EXTEND))
                {
                case 0:
                  if (!
#line 3482 "../../gcc/config/i386/mmx.md"
((TARGET_MMX || TARGET_MMX_WITH_SSE)
   && (TARGET_SSE || TARGET_3DNOW_A)
   && ix86_binary_operator_ok (MULT, V4HImode, operands)))
                    return -1;
                  return 2156; /* *mmx_umulv4hi3_highpart */

                case 1:
                  if (!
#line 3516 "../../gcc/config/i386/mmx.md"
(TARGET_SSE2))
                    return -1;
                  return 2158; /* umulv2hi3_highpart */

                default:
                  return -1;
                }

            default:
              return -1;
            }

        case PLUS:
          x7 = XEXP (x6, 0);
          switch (GET_CODE (x7))
            {
            case MULT:
              if (GET_MODE (x7) != E_V4SImode)
                return -1;
              x8 = XEXP (x7, 0);
              if (GET_CODE (x8) != SIGN_EXTEND
                  || GET_MODE (x8) != E_V4SImode)
                return -1;
              x9 = XEXP (x7, 1);
              if (GET_CODE (x9) != SIGN_EXTEND
                  || GET_MODE (x9) != E_V4SImode)
                return -1;
              x10 = XEXP (x6, 1);
              if (GET_CODE (x10) != CONST_VECTOR
                  || XVECLEN (x10, 0) != 4
                  || GET_MODE (x10) != E_V4SImode)
                return -1;
              x11 = XVECEXP (x10, 0, 0);
              if (GET_CODE (x11) != CONST_INT
                  || XWINT (x11, 0) != 32768L)
                return -1;
              x12 = XVECEXP (x10, 0, 1);
              if (GET_CODE (x12) != CONST_INT
                  || XWINT (x12, 0) != 32768L)
                return -1;
              x13 = XVECEXP (x10, 0, 2);
              if (GET_CODE (x13) != CONST_INT
                  || XWINT (x13, 0) != 32768L)
                return -1;
              x14 = XVECEXP (x10, 0, 3);
              if (GET_CODE (x14) != CONST_INT
                  || XWINT (x14, 0) != 32768L
                  || XWINT (x5, 0) != 16L
                  || !register_operand (operands[0], E_V4HImode)
                  || GET_MODE (x3) != E_V4HImode
                  || GET_MODE (x4) != E_V4SImode
                  || GET_MODE (x6) != E_V4SImode)
                return -1;
              x15 = XEXP (x8, 0);
              operands[1] = x15;
              if (!nonimmediate_operand (operands[1], E_V4HImode))
                return -1;
              x16 = XEXP (x9, 0);
              operands[2] = x16;
              if (!nonimmediate_operand (operands[2], E_V4HImode)
                  || !
#line 3605 "../../gcc/config/i386/mmx.md"
(TARGET_3DNOW && ix86_binary_operator_ok (MULT, V4HImode, operands)))
                return -1;
              return 2160; /* *mmx_pmulhrwv4hi3 */

            case PLUS:
              x8 = XEXP (x7, 0);
              if (GET_CODE (x8) != ZERO_EXTEND)
                return -1;
              x9 = XEXP (x7, 1);
              if (GET_CODE (x9) != ZERO_EXTEND)
                return -1;
              x10 = XEXP (x6, 1);
              if (GET_CODE (x10) != CONST_VECTOR
                  || XWINT (x5, 0) != 1L)
                return -1;
              x15 = XEXP (x8, 0);
              operands[1] = x15;
              x16 = XEXP (x9, 0);
              operands[2] = x16;
              switch (XVECLEN (x10, 0))
                {
                case 8:
                  if (pattern1359 (x10, 
E_V8HImode) != 0
                      || pattern1631 (x3, 
E_V8QImode, 
E_V8HImode) != 0
                      || !
#line 6332 "../../gcc/config/i386/mmx.md"
((TARGET_MMX || TARGET_MMX_WITH_SSE)
   && (TARGET_SSE || TARGET_3DNOW)
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
                    return -1;
                  return 2372; /* *mmx_uavgv8qi3 */

                case 4:
                  x11 = XVECEXP (x10, 0, 0);
                  if (x11 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
                    return -1;
                  x12 = XVECEXP (x10, 0, 1);
                  if (x12 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
                    return -1;
                  x13 = XVECEXP (x10, 0, 2);
                  if (x13 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
                    return -1;
                  x14 = XVECEXP (x10, 0, 3);
                  if (x14 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
                    return -1;
                  switch (GET_MODE (operands[0]))
                    {
                    case E_V4HImode:
                      if (pattern1631 (x3, 
E_V4HImode, 
E_V4SImode) != 0
                          || GET_MODE (x10) != E_V4SImode
                          || !
#line 6376 "../../gcc/config/i386/mmx.md"
((TARGET_MMX || TARGET_MMX_WITH_SSE)
   && (TARGET_SSE || TARGET_3DNOW_A)
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
                        return -1;
                      return 2373; /* *mmx_uavgv4hi3 */

                    case E_V4QImode:
                      if (pattern1538 (x3, 
E_V4HImode, 
E_V4QImode) != 0
                          || !
#line 6416 "../../gcc/config/i386/mmx.md"
(TARGET_SSE2))
                        return -1;
                      return 2374; /* uavgv4qi3_ceil */

                    default:
                      return -1;
                    }

                case 2:
                  x11 = XVECEXP (x10, 0, 0);
                  if (x11 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
                    return -1;
                  x12 = XVECEXP (x10, 0, 1);
                  if (x12 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
                    return -1;
                  switch (GET_MODE (operands[0]))
                    {
                    case E_V2QImode:
                      if (pattern1538 (x3, 
E_V2HImode, 
E_V2QImode) != 0
                          || !
#line 6436 "../../gcc/config/i386/mmx.md"
(TARGET_SSE2))
                        return -1;
                      return 2375; /* uavgv2qi3_ceil */

                    case E_V2HImode:
                      if (pattern1538 (x3, 
E_V2SImode, 
E_V2HImode) != 0
                          || !
#line 6456 "../../gcc/config/i386/mmx.md"
(TARGET_SSE2))
                        return -1;
                      return 2376; /* uavgv2hi3_ceil */

                    default:
                      return -1;
                    }

                default:
                  return -1;
                }

            case LSHIFTRT:
              if (pattern617 (x7) != 0
                  || XWINT (x5, 0) != 1L)
                return -1;
              x8 = XEXP (x7, 0);
              x15 = XEXP (x8, 0);
              x17 = XEXP (x15, 0);
              operands[1] = x17;
              x18 = XEXP (x8, 1);
              x19 = XEXP (x18, 0);
              operands[2] = x19;
              x10 = XEXP (x6, 1);
              operands[3] = x10;
              switch (GET_MODE (operands[0]))
                {
                case E_V4HImode:
                  if (pattern1513 (x3, 
E_V4SImode, 
E_V4HImode) != 0
                      || !register_mmxmem_operand (operands[1], E_V4HImode)
                      || GET_MODE (x18) != E_V4SImode
                      || !register_mmxmem_operand (operands[2], E_V4HImode)
                      || !const1_operand (operands[3], E_V4HImode)
                      || !
#line 23055 "../../gcc/config/i386/sse.md"
((TARGET_MMX || TARGET_MMX_WITH_SSE)
   && TARGET_SSSE3
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
                    return -1;
                  return 8619; /* *ssse3_pmulhrswv4hi3 */

                case E_V2HImode:
                  if (pattern1513 (x3, 
E_V2SImode, 
E_V2HImode) != 0
                      || !register_operand (operands[1], E_V2HImode)
                      || GET_MODE (x18) != E_V2SImode
                      || !register_operand (operands[2], E_V2HImode)
                      || !const1_operand (operands[3], E_V2HImode)
                      || !
#line 23100 "../../gcc/config/i386/sse.md"
(TARGET_SSSE3
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
                    return -1;
                  return 8620; /* *smulhrsv2hi3 */

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
      operands[1] = x4;
      switch (GET_MODE (operands[0]))
        {
        case E_V4QImode:
          if (GET_MODE (x3) != E_V4QImode)
            return -1;
          if (register_operand (operands[0], E_V4QImode)
              && register_operand (operands[1], E_V4HImode)
              && (
#line 5144 "../../gcc/config/i386/mmx.md"
(TARGET_AVX512VL && TARGET_AVX512BW) && 
#line 73 "../../gcc/config/i386/mmx.md"
(TARGET_MMX_WITH_SSE)))
            return 2306; /* avx512vl_truncv4hiv4qi2 */
          if (!memory_operand (operands[0], E_V4QImode))
            return -1;
          switch (GET_MODE (operands[1]))
            {
            case E_V4SImode:
              if (!register_operand (operands[1], E_V4SImode)
                  || !
#line 15495 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))
                return -1;
              return 7308; /* *avx512vl_truncatev4siv4qi2_store_1 */

            case E_V4DImode:
              if (!register_operand (operands[1], E_V4DImode)
                  || !
#line 15495 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))
                return -1;
              return 7311; /* *avx512vl_truncatev4div4qi2_store_1 */

            default:
              return -1;
            }

        case E_V2QImode:
          if (GET_MODE (x3) != E_V2QImode)
            return -1;
          if (register_operand (operands[0], E_V2QImode))
            {
              switch (GET_MODE (operands[1]))
                {
                case E_V2HImode:
                  if (register_operand (operands[1], E_V2HImode)
                      && 
#line 5144 "../../gcc/config/i386/mmx.md"
(TARGET_AVX512VL && TARGET_AVX512BW))
                    return 2307; /* avx512vl_truncv2hiv2qi2 */
                  break;

                case E_V2SImode:
                  if (register_operand (operands[1], E_V2SImode)
                      && 
#line 5170 "../../gcc/config/i386/mmx.md"
(TARGET_AVX512VL && TARGET_MMX_WITH_SSE))
                    return 2308; /* avx512vl_truncv2siv2qi2 */
                  break;

                default:
                  break;
                }
            }
          if (!memory_operand (operands[0], E_V2QImode)
              || !register_operand (operands[1], E_V2DImode)
              || !
#line 15400 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))
            return -1;
          return 7293; /* *avx512vl_truncatev2div2qi2_store_1 */

        case E_V2HImode:
          if (GET_MODE (x3) != E_V2HImode)
            return -1;
          if (register_operand (operands[0], E_V2HImode)
              && register_operand (operands[1], E_V2SImode)
              && 
#line 5170 "../../gcc/config/i386/mmx.md"
(TARGET_AVX512VL && TARGET_MMX_WITH_SSE))
            return 2309; /* avx512vl_truncv2siv2hi2 */
          if (!memory_operand (operands[0], E_V2HImode)
              || !register_operand (operands[1], E_V2DImode)
              || !
#line 15846 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))
            return -1;
          return 7408; /* *avx512vl_truncatev2div2hi2_store_1 */

        case E_V8QImode:
          switch (pattern12 (x3))
            {
            case 0:
              if (!(
#line 15593 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL) && 
#line 15587 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW)))
                return -1;
              return 7338; /* *avx512vl_truncatev8hiv8qi2_store_1 */

            case 1:
              if (!
#line 15593 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))
                return -1;
              return 7341; /* *avx512vl_truncatev8siv8qi2_store_1 */

            case 2:
              if (!
#line 16109 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512))
                return -1;
              return 7445; /* *avx512f_truncatev8div16qi2_store_1 */

            default:
              return -1;
            }

        case E_V4HImode:
          switch (pattern11 (x3, 
E_V4HImode))
            {
            case 0:
              if (!
#line 15755 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))
                return -1;
              return 7378; /* *avx512vl_truncatev4siv4hi2_store_1 */

            case 1:
              if (!
#line 15755 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))
                return -1;
              return 7381; /* *avx512vl_truncatev4div4hi2_store_1 */

            default:
              return -1;
            }

        case E_V2SImode:
          if (!memory_operand (operands[0], E_V2SImode)
              || GET_MODE (x3) != E_V2SImode
              || !register_operand (operands[1], E_V2DImode)
              || !
#line 15996 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))
            return -1;
          return 7427; /* *avx512vl_truncatev2div2si2_store_1 */

        default:
          return -1;
        }

    default:
      return -1;
    }
}

 int
recog_76 (rtx x1 ATTRIBUTE_UNUSED,
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
    case PLUS:
      return recog_71 (x1, insn, pnum_clobbers);

    case MINUS:
      return recog_73 (x1, insn, pnum_clobbers);

    case MULT:
      return recog_75 (x1, insn, pnum_clobbers);

    case SMUL_HIGHPART:
      if (pattern105 (x3, pnum_clobbers) != 0
          || !
#line 11150 "../../gcc/config/i386/i386.md"
(TARGET_64BIT))
        return -1;
      *pnum_clobbers = 2;
      return 631; /* *smulsi3_highpart_zext */

    case UMUL_HIGHPART:
      if (pattern105 (x3, pnum_clobbers) != 0
          || !
#line 11150 "../../gcc/config/i386/i386.md"
(TARGET_64BIT))
        return -1;
      *pnum_clobbers = 2;
      return 632; /* *umulsi3_highpart_zext */

    case TRUNCATE:
      if (pnum_clobbers == NULL
          || GET_MODE (x4) != E_SImode)
        return -1;
      x5 = XEXP (x4, 0);
      if (GET_CODE (x5) != LSHIFTRT
          || GET_MODE (x5) != E_DImode)
        return -1;
      x6 = XEXP (x5, 0);
      if (GET_CODE (x6) != MULT
          || GET_MODE (x6) != E_DImode)
        return -1;
      x7 = XEXP (x5, 1);
      if (x7 != const_int_rtx[MAX_SAVED_CONST_INT + 32]
          || !register_operand (operands[0], E_DImode)
          || GET_MODE (x3) != E_DImode)
        return -1;
      x8 = XEXP (x6, 0);
      if (GET_MODE (x8) != E_DImode)
        return -1;
      x9 = XEXP (x6, 1);
      if (GET_MODE (x9) != E_DImode)
        return -1;
      switch (GET_CODE (x8))
        {
        case SIGN_EXTEND:
          if (GET_CODE (x9) != SIGN_EXTEND)
            return -1;
          x10 = XEXP (x8, 0);
          operands[1] = x10;
          if (!nonimmediate_operand (operands[1], E_SImode))
            return -1;
          x11 = XEXP (x9, 0);
          operands[2] = x11;
          if (!nonimmediate_operand (operands[2], E_SImode)
              || !
#line 11198 "../../gcc/config/i386/i386.md"
(TARGET_64BIT
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
            return -1;
          *pnum_clobbers = 2;
          return 635; /* *smulsi3_highpart_zext */

        case ZERO_EXTEND:
          if (GET_CODE (x9) != ZERO_EXTEND)
            return -1;
          x10 = XEXP (x8, 0);
          operands[1] = x10;
          if (!nonimmediate_operand (operands[1], E_SImode))
            return -1;
          x11 = XEXP (x9, 0);
          operands[2] = x11;
          if (!nonimmediate_operand (operands[2], E_SImode)
              || !
#line 11198 "../../gcc/config/i386/i386.md"
(TARGET_64BIT
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
            return -1;
          *pnum_clobbers = 2;
          return 636; /* *umulsi3_highpart_zext */

        default:
          return -1;
        }

    case AND:
      return recog_72 (x1, insn, pnum_clobbers);

    case IOR:
      switch (pattern107 (x3, pnum_clobbers))
        {
        case 0:
          if (
#line 13715 "../../gcc/config/i386/i386.md"
(TARGET_APX_NDD && TARGET_APX_NF
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
            return 847; /* *iorqi_1_zextsi_nf */
          if (pnum_clobbers == NULL
              || !
#line 13715 "../../gcc/config/i386/i386.md"
(TARGET_APX_NDD && true
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
            return -1;
          *pnum_clobbers = 1;
          return 848; /* *iorqi_1_zextsi */

        case 1:
          if (
#line 13729 "../../gcc/config/i386/i386.md"
(TARGET_APX_NDD && TARGET_APX_NF
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
            return 855; /* *iorhi_1_zextsi_nf */
          if (pnum_clobbers == NULL
              || !
#line 13729 "../../gcc/config/i386/i386.md"
(TARGET_APX_NDD && true
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
            return -1;
          *pnum_clobbers = 1;
          return 856; /* *iorhi_1_zextsi */

        case 2:
          if (
#line 13715 "../../gcc/config/i386/i386.md"
(TARGET_APX_NDD && TARGET_APX_NF
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
            return 851; /* *iorqi_1_zextdi_nf */
          if (pnum_clobbers == NULL
              || !
#line 13715 "../../gcc/config/i386/i386.md"
(TARGET_APX_NDD && true
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
            return -1;
          *pnum_clobbers = 1;
          return 852; /* *iorqi_1_zextdi */

        case 3:
          if (
#line 13729 "../../gcc/config/i386/i386.md"
(TARGET_APX_NDD && TARGET_APX_NF
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
            return 859; /* *iorhi_1_zextdi_nf */
          if (pnum_clobbers == NULL
              || !
#line 13729 "../../gcc/config/i386/i386.md"
(TARGET_APX_NDD && true
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
            return -1;
          *pnum_clobbers = 1;
          return 860; /* *iorhi_1_zextdi */

        case 4:
          if (!
#line 13745 "../../gcc/config/i386/i386.md"
(TARGET_64BIT
   && ix86_binary_operator_ok (IOR, SImode, operands, TARGET_APX_NDD)))
            return -1;
          *pnum_clobbers = 1;
          return 863; /* *iorsi_1_zext */

        default:
          return -1;
        }

    case XOR:
      switch (pattern107 (x3, pnum_clobbers))
        {
        case 0:
          if (
#line 13715 "../../gcc/config/i386/i386.md"
(TARGET_APX_NDD && TARGET_APX_NF
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
            return 849; /* *xorqi_1_zextsi_nf */
          if (pnum_clobbers == NULL
              || !
#line 13715 "../../gcc/config/i386/i386.md"
(TARGET_APX_NDD && true
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
            return -1;
          *pnum_clobbers = 1;
          return 850; /* *xorqi_1_zextsi */

        case 1:
          if (
#line 13729 "../../gcc/config/i386/i386.md"
(TARGET_APX_NDD && TARGET_APX_NF
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
            return 857; /* *xorhi_1_zextsi_nf */
          if (pnum_clobbers == NULL
              || !
#line 13729 "../../gcc/config/i386/i386.md"
(TARGET_APX_NDD && true
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
            return -1;
          *pnum_clobbers = 1;
          return 858; /* *xorhi_1_zextsi */

        case 2:
          if (
#line 13715 "../../gcc/config/i386/i386.md"
(TARGET_APX_NDD && TARGET_APX_NF
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
            return 853; /* *xorqi_1_zextdi_nf */
          if (pnum_clobbers == NULL
              || !
#line 13715 "../../gcc/config/i386/i386.md"
(TARGET_APX_NDD && true
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
            return -1;
          *pnum_clobbers = 1;
          return 854; /* *xorqi_1_zextdi */

        case 3:
          if (
#line 13729 "../../gcc/config/i386/i386.md"
(TARGET_APX_NDD && TARGET_APX_NF
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
            return 861; /* *xorhi_1_zextdi_nf */
          if (pnum_clobbers == NULL
              || !
#line 13729 "../../gcc/config/i386/i386.md"
(TARGET_APX_NDD && true
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
            return -1;
          *pnum_clobbers = 1;
          return 862; /* *xorhi_1_zextdi */

        case 4:
          if (!
#line 13745 "../../gcc/config/i386/i386.md"
(TARGET_64BIT
   && ix86_binary_operator_ok (XOR, SImode, operands, TARGET_APX_NDD)))
            return -1;
          *pnum_clobbers = 1;
          return 864; /* *xorsi_1_zext */

        default:
          return -1;
        }

    case NEG:
      x5 = XEXP (x4, 0);
      operands[1] = x5;
      switch (pattern279 (x3, pnum_clobbers))
        {
        case 0:
          if (
#line 14360 "../../gcc/config/i386/i386.md"
(TARGET_APX_NDD && TARGET_APX_NF))
            return 964; /* *negqi_1_zextsi_nf */
          if (pnum_clobbers == NULL
              || !
#line 14360 "../../gcc/config/i386/i386.md"
(TARGET_APX_NDD && true))
            return -1;
          *pnum_clobbers = 1;
          return 965; /* *negqi_1_zextsi */

        case 1:
          if (
#line 14370 "../../gcc/config/i386/i386.md"
(TARGET_APX_NDD && TARGET_APX_NF))
            return 968; /* *neghi_1_zextsi_nf */
          if (pnum_clobbers == NULL
              || !
#line 14370 "../../gcc/config/i386/i386.md"
(TARGET_APX_NDD && true))
            return -1;
          *pnum_clobbers = 1;
          return 969; /* *neghi_1_zextsi */

        case 2:
          if (
#line 14360 "../../gcc/config/i386/i386.md"
(TARGET_APX_NDD && TARGET_APX_NF))
            return 966; /* *negqi_1_zextdi_nf */
          if (pnum_clobbers == NULL
              || !
#line 14360 "../../gcc/config/i386/i386.md"
(TARGET_APX_NDD && true))
            return -1;
          *pnum_clobbers = 1;
          return 967; /* *negqi_1_zextdi */

        case 3:
          if (
#line 14370 "../../gcc/config/i386/i386.md"
(TARGET_APX_NDD && TARGET_APX_NF))
            return 970; /* *neghi_1_zextdi_nf */
          if (pnum_clobbers == NULL
              || !
#line 14370 "../../gcc/config/i386/i386.md"
(TARGET_APX_NDD && true))
            return -1;
          *pnum_clobbers = 1;
          return 971; /* *neghi_1_zextdi */

        case 4:
          if (!
#line 14381 "../../gcc/config/i386/i386.md"
(TARGET_64BIT
   && ix86_unary_operator_ok (NEG, SImode, operands, TARGET_APX_NDD)))
            return -1;
          *pnum_clobbers = 1;
          return 972; /* *negsi_1_zext */

        default:
          return -1;
        }

    case NOT:
      x5 = XEXP (x4, 0);
      operands[1] = x5;
      switch (GET_MODE (operands[0]))
        {
        case E_SImode:
          switch (pattern278 (x3))
            {
            case 0:
              if (!
#line 15002 "../../gcc/config/i386/i386.md"
(TARGET_APX_NDD))
                return -1;
              return 1036; /* *one_cmplqi2_1_zextsi */

            case 1:
              if (!
#line 15011 "../../gcc/config/i386/i386.md"
(TARGET_APX_NDD))
                return -1;
              return 1038; /* *one_cmplhi2_1_zextsi */

            default:
              return -1;
            }

        case E_DImode:
          if (!register_operand (operands[0], E_DImode)
              || GET_MODE (x3) != E_DImode)
            return -1;
          switch (GET_MODE (x4))
            {
            case E_QImode:
              if (!nonimmediate_operand (operands[1], E_QImode)
                  || !
#line 15002 "../../gcc/config/i386/i386.md"
(TARGET_APX_NDD))
                return -1;
              return 1037; /* *one_cmplqi2_1_zextdi */

            case E_HImode:
              if (!nonimmediate_operand (operands[1], E_HImode)
                  || !
#line 15011 "../../gcc/config/i386/i386.md"
(TARGET_APX_NDD))
                return -1;
              return 1039; /* *one_cmplhi2_1_zextdi */

            case E_SImode:
              if (!nonimmediate_operand (operands[1], E_SImode)
                  || !
#line 15020 "../../gcc/config/i386/i386.md"
(TARGET_64BIT
   && ix86_unary_operator_ok (NOT, SImode, operands, TARGET_APX_NDD)))
                return -1;
              return 1040; /* *one_cmplsi2_1_zext */

            default:
              return -1;
            }

        default:
          return -1;
        }

    case ASHIFT:
      switch (pattern108 (x3))
        {
        case 0:
          if (register_operand (operands[2], E_SImode)
              && 
#line 15998 "../../gcc/config/i386/i386.md"
(TARGET_64BIT && TARGET_BMI2))
            return 1092; /* *bmi2_ashlsi3_1_zext */
          if (pnum_clobbers == NULL
              || !nonmemory_operand (operands[2], E_QImode)
              || !
#line 16031 "../../gcc/config/i386/i386.md"
(TARGET_64BIT
   && ix86_binary_operator_ok (ASHIFT, SImode, operands, TARGET_APX_NDD)))
            return -1;
          *pnum_clobbers = 1;
          return 1103; /* *ashlsi3_1_zext */

        case 1:
          if (
#line 16008 "../../gcc/config/i386/i386.md"
(TARGET_APX_NDD && TARGET_APX_NF))
            return 1097; /* *ashlqi3_1_zextdi_nf */
          if (pnum_clobbers == NULL
              || !
#line 16008 "../../gcc/config/i386/i386.md"
(TARGET_APX_NDD && true))
            return -1;
          *pnum_clobbers = 1;
          return 1098; /* *ashlqi3_1_zextdi */

        case 2:
          if (
#line 16019 "../../gcc/config/i386/i386.md"
(TARGET_APX_NDD && TARGET_APX_NF))
            return 1101; /* *ashlhi3_1_zextdi_nf */
          if (pnum_clobbers == NULL
              || !
#line 16019 "../../gcc/config/i386/i386.md"
(TARGET_APX_NDD && true))
            return -1;
          *pnum_clobbers = 1;
          return 1102; /* *ashlhi3_1_zextdi */

        case 3:
          if (
#line 16008 "../../gcc/config/i386/i386.md"
(TARGET_APX_NDD && TARGET_APX_NF))
            return 1095; /* *ashlqi3_1_zextsi_nf */
          if (pnum_clobbers == NULL
              || !
#line 16008 "../../gcc/config/i386/i386.md"
(TARGET_APX_NDD && true))
            return -1;
          *pnum_clobbers = 1;
          return 1096; /* *ashlqi3_1_zextsi */

        case 4:
          if (
#line 16019 "../../gcc/config/i386/i386.md"
(TARGET_APX_NDD && TARGET_APX_NF))
            return 1099; /* *ashlhi3_1_zextsi_nf */
          if (pnum_clobbers == NULL
              || !
#line 16019 "../../gcc/config/i386/i386.md"
(TARGET_APX_NDD && true))
            return -1;
          *pnum_clobbers = 1;
          return 1100; /* *ashlhi3_1_zextsi */

        default:
          return -1;
        }

    case ASHIFTRT:
      if (GET_MODE (x4) == E_SImode
          && register_operand (operands[0], E_DImode))
        {
          res = recog_69 (x1, insn, pnum_clobbers);
          if (res >= 0)
            return res;
        }
      x5 = XEXP (x4, 0);
      operands[1] = x5;
      switch (pattern280 (x3, pnum_clobbers))
        {
        case 0:
          if (
#line 17455 "../../gcc/config/i386/i386.md"
(TARGET_APX_NDD && TARGET_APX_NF))
            return 1192; /* *ashrqi3_1_zextsi_nf */
          if (pnum_clobbers == NULL
              || !
#line 17455 "../../gcc/config/i386/i386.md"
(TARGET_APX_NDD && true))
            return -1;
          *pnum_clobbers = 1;
          return 1193; /* *ashrqi3_1_zextsi */

        case 1:
          if (
#line 17466 "../../gcc/config/i386/i386.md"
(TARGET_APX_NDD && TARGET_APX_NF))
            return 1200; /* *ashrhi3_1_zextsi_nf */
          if (pnum_clobbers == NULL
              || !
#line 17466 "../../gcc/config/i386/i386.md"
(TARGET_APX_NDD && true))
            return -1;
          *pnum_clobbers = 1;
          return 1201; /* *ashrhi3_1_zextsi */

        case 2:
          if (
#line 17455 "../../gcc/config/i386/i386.md"
(TARGET_APX_NDD && TARGET_APX_NF))
            return 1196; /* *ashrqi3_1_zextdi_nf */
          if (pnum_clobbers == NULL
              || !
#line 17455 "../../gcc/config/i386/i386.md"
(TARGET_APX_NDD && true))
            return -1;
          *pnum_clobbers = 1;
          return 1197; /* *ashrqi3_1_zextdi */

        case 3:
          if (
#line 17466 "../../gcc/config/i386/i386.md"
(TARGET_APX_NDD && TARGET_APX_NF))
            return 1204; /* *ashrhi3_1_zextdi_nf */
          if (pnum_clobbers == NULL
              || !
#line 17466 "../../gcc/config/i386/i386.md"
(TARGET_APX_NDD && true))
            return -1;
          *pnum_clobbers = 1;
          return 1205; /* *ashrhi3_1_zextdi */

        case 4:
          if (!
#line 17478 "../../gcc/config/i386/i386.md"
(TARGET_64BIT
   && ix86_binary_operator_ok (ASHIFTRT, SImode, operands, TARGET_APX_NDD)))
            return -1;
          *pnum_clobbers = 1;
          return 1207; /* *ashrsi3_1_zext */

        default:
          return -1;
        }

    case LSHIFTRT:
      switch (pattern108 (x3))
        {
        case 0:
          if (register_operand (operands[2], E_SImode)
              && 
#line 17445 "../../gcc/config/i386/i386.md"
(TARGET_64BIT && TARGET_BMI2))
            return 1184; /* *bmi2_lshrsi3_1_zext */
          if (pnum_clobbers == NULL
              || !nonmemory_operand (operands[2], E_QImode)
              || !
#line 17478 "../../gcc/config/i386/i386.md"
(TARGET_64BIT
   && ix86_binary_operator_ok (LSHIFTRT, SImode, operands, TARGET_APX_NDD)))
            return -1;
          *pnum_clobbers = 1;
          return 1206; /* *lshrsi3_1_zext */

        case 1:
          if (
#line 17455 "../../gcc/config/i386/i386.md"
(TARGET_APX_NDD && TARGET_APX_NF))
            return 1194; /* *lshrqi3_1_zextdi_nf */
          if (pnum_clobbers == NULL
              || !
#line 17455 "../../gcc/config/i386/i386.md"
(TARGET_APX_NDD && true))
            return -1;
          *pnum_clobbers = 1;
          return 1195; /* *lshrqi3_1_zextdi */

        case 2:
          if (
#line 17466 "../../gcc/config/i386/i386.md"
(TARGET_APX_NDD && TARGET_APX_NF))
            return 1202; /* *lshrhi3_1_zextdi_nf */
          if (pnum_clobbers == NULL
              || !
#line 17466 "../../gcc/config/i386/i386.md"
(TARGET_APX_NDD && true))
            return -1;
          *pnum_clobbers = 1;
          return 1203; /* *lshrhi3_1_zextdi */

        case 3:
          if (
#line 17455 "../../gcc/config/i386/i386.md"
(TARGET_APX_NDD && TARGET_APX_NF))
            return 1190; /* *lshrqi3_1_zextsi_nf */
          if (pnum_clobbers == NULL
              || !
#line 17455 "../../gcc/config/i386/i386.md"
(TARGET_APX_NDD && true))
            return -1;
          *pnum_clobbers = 1;
          return 1191; /* *lshrqi3_1_zextsi */

        case 4:
          if (
#line 17466 "../../gcc/config/i386/i386.md"
(TARGET_APX_NDD && TARGET_APX_NF))
            return 1198; /* *lshrhi3_1_zextsi_nf */
          if (pnum_clobbers == NULL
              || !
#line 17466 "../../gcc/config/i386/i386.md"
(TARGET_APX_NDD && true))
            return -1;
          *pnum_clobbers = 1;
          return 1199; /* *lshrhi3_1_zextsi */

        default:
          return -1;
        }

    case ROTATERT:
      switch (pattern108 (x3))
        {
        case 0:
          if (const_0_to_31_operand (operands[2], E_QImode)
              && 
#line 18560 "../../gcc/config/i386/i386.md"
(TARGET_64BIT && TARGET_BMI2 && !optimize_function_for_size_p (cfun)))
            return 1350; /* *bmi2_rorxsi3_1_zext */
          if (pnum_clobbers == NULL
              || !nonmemory_operand (operands[2], E_QImode)
              || !
#line 18593 "../../gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (ROTATERT, SImode, operands)))
            return -1;
          *pnum_clobbers = 1;
          return 1372; /* *rotrsi3_1_zext */

        case 1:
          if (
#line 18570 "../../gcc/config/i386/i386.md"
(TARGET_APX_NDD && TARGET_APX_NF))
            return 1361; /* *rotrqi3_1_zextdi_nf */
          if (pnum_clobbers == NULL
              || !
#line 18570 "../../gcc/config/i386/i386.md"
(TARGET_APX_NDD && true))
            return -1;
          *pnum_clobbers = 1;
          return 1362; /* *rotrqi3_1_zextdi */

        case 2:
          if (
#line 18581 "../../gcc/config/i386/i386.md"
(TARGET_APX_NDD && TARGET_APX_NF))
            return 1369; /* *rotrhi3_1_zextdi_nf */
          if (pnum_clobbers == NULL
              || !
#line 18581 "../../gcc/config/i386/i386.md"
(TARGET_APX_NDD && true))
            return -1;
          *pnum_clobbers = 1;
          return 1370; /* *rotrhi3_1_zextdi */

        case 3:
          if (
#line 18570 "../../gcc/config/i386/i386.md"
(TARGET_APX_NDD && TARGET_APX_NF))
            return 1357; /* *rotrqi3_1_zextsi_nf */
          if (pnum_clobbers == NULL
              || !
#line 18570 "../../gcc/config/i386/i386.md"
(TARGET_APX_NDD && true))
            return -1;
          *pnum_clobbers = 1;
          return 1358; /* *rotrqi3_1_zextsi */

        case 4:
          if (
#line 18581 "../../gcc/config/i386/i386.md"
(TARGET_APX_NDD && TARGET_APX_NF))
            return 1365; /* *rotrhi3_1_zextsi_nf */
          if (pnum_clobbers == NULL
              || !
#line 18581 "../../gcc/config/i386/i386.md"
(TARGET_APX_NDD && true))
            return -1;
          *pnum_clobbers = 1;
          return 1366; /* *rotrhi3_1_zextsi */

        default:
          return -1;
        }

    case ROTATE:
      x5 = XEXP (x4, 0);
      operands[1] = x5;
      switch (pattern280 (x3, pnum_clobbers))
        {
        case 0:
          if (
#line 18570 "../../gcc/config/i386/i386.md"
(TARGET_APX_NDD && TARGET_APX_NF))
            return 1355; /* *rotlqi3_1_zextsi_nf */
          if (pnum_clobbers == NULL
              || !
#line 18570 "../../gcc/config/i386/i386.md"
(TARGET_APX_NDD && true))
            return -1;
          *pnum_clobbers = 1;
          return 1356; /* *rotlqi3_1_zextsi */

        case 1:
          if (
#line 18581 "../../gcc/config/i386/i386.md"
(TARGET_APX_NDD && TARGET_APX_NF))
            return 1363; /* *rotlhi3_1_zextsi_nf */
          if (pnum_clobbers == NULL
              || !
#line 18581 "../../gcc/config/i386/i386.md"
(TARGET_APX_NDD && true))
            return -1;
          *pnum_clobbers = 1;
          return 1364; /* *rotlhi3_1_zextsi */

        case 2:
          if (
#line 18570 "../../gcc/config/i386/i386.md"
(TARGET_APX_NDD && TARGET_APX_NF))
            return 1359; /* *rotlqi3_1_zextdi_nf */
          if (pnum_clobbers == NULL
              || !
#line 18570 "../../gcc/config/i386/i386.md"
(TARGET_APX_NDD && true))
            return -1;
          *pnum_clobbers = 1;
          return 1360; /* *rotlqi3_1_zextdi */

        case 3:
          if (
#line 18581 "../../gcc/config/i386/i386.md"
(TARGET_APX_NDD && TARGET_APX_NF))
            return 1367; /* *rotlhi3_1_zextdi_nf */
          if (pnum_clobbers == NULL
              || !
#line 18581 "../../gcc/config/i386/i386.md"
(TARGET_APX_NDD && true))
            return -1;
          *pnum_clobbers = 1;
          return 1368; /* *rotlhi3_1_zextdi */

        case 4:
          if (!
#line 18593 "../../gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (ROTATE, SImode, operands)))
            return -1;
          *pnum_clobbers = 1;
          return 1371; /* *rotlsi3_1_zext */

        default:
          return -1;
        }

    case CTZ:
      if (pattern109 (x3, pnum_clobbers, 
E_SImode, 
E_DImode) != 0
          || !
#line 21165 "../../gcc/config/i386/i386.md"
(TARGET_64BIT))
        return -1;
      *pnum_clobbers = 1;
      return 1521; /* *ctzsidi2_uext */

    case CLZ:
      if (pattern109 (x3, pnum_clobbers, 
E_SImode, 
E_DImode) != 0
          || !
#line 21599 "../../gcc/config/i386/i386.md"
(TARGET_LZCNT && TARGET_64BIT))
        return -1;
      *pnum_clobbers = 1;
      return 1543; /* *clzsi2_lzcnt_zext_2 */

    case POPCOUNT:
      if (pnum_clobbers == NULL)
        return -1;
      x5 = XEXP (x4, 0);
      operands[1] = x5;
      switch (GET_MODE (operands[0]))
        {
        case E_DImode:
          if (pattern618 (x3, 
E_DImode, 
E_SImode) != 0
              || !
#line 22292 "../../gcc/config/i386/i386.md"
(TARGET_POPCNT && TARGET_64BIT))
            return -1;
          *pnum_clobbers = 1;
          return 1628; /* *popcountsi2_zext_2 */

        case E_SImode:
          if (pattern618 (x3, 
E_SImode, 
E_HImode) != 0
              || !
#line 22358 "../../gcc/config/i386/i386.md"
(TARGET_POPCNT
   && ix86_pre_reload_split ()))
            return -1;
          *pnum_clobbers = 1;
          return 1631; /* *popcounthi2_2 */

        default:
          return -1;
        }

    case UNSPEC:
      return recog_70 (x1, insn, pnum_clobbers);

    case IF_THEN_ELSE:
      if (GET_MODE (x4) != E_SImode)
        return -1;
      x5 = XEXP (x4, 0);
      if (!ix86_comparison_operator (x5, E_VOIDmode))
        return -1;
      operands[1] = x5;
      x6 = XEXP (x5, 0);
      if (GET_CODE (x6) != REG
          || REGNO (x6) != 17)
        return -1;
      x7 = XEXP (x5, 1);
      if (x7 != const_int_rtx[MAX_SAVED_CONST_INT + 0]
          || !nonimmediate_operand (operands[0], E_DImode)
          || GET_MODE (x3) != E_DImode)
        return -1;
      x12 = XEXP (x4, 1);
      operands[2] = x12;
      if (!nonimmediate_operand (operands[2], E_SImode))
        return -1;
      x13 = XEXP (x4, 2);
      operands[3] = x13;
      if (!nonimmediate_operand (operands[3], E_SImode)
          || !
#line 26214 "../../gcc/config/i386/i386.md"
(TARGET_64BIT
   && TARGET_CMOVE && !(MEM_P (operands[2]) && MEM_P (operands[3]))))
        return -1;
      return 1801; /* *movsicc_noc_zext_1 */

    case VEC_SELECT:
      return recog_74 (x1, insn, pnum_clobbers);

    case SUBREG:
      if (pattern110 (x3) != 0
          || !
#line 22138 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_pre_reload_split ()))
        return -1;
      return 8558; /* *sse2_pmovskb_zexthisi */

    default:
      return -1;
    }
}

 int
recog_103 (rtx x1 ATTRIBUTE_UNUSED,
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
(ix86_binary_operator_ok (ROTATERT, SImode, operands)
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (SImode)-1))
      == GET_MODE_BITSIZE (SImode)-1
   && ix86_pre_reload_split ()))
        return -1;
      *pnum_clobbers = 1;
      return 1297; /* *rotrsi3_mask_1 */

    case 1:
      if (!(
#line 18182 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATERT, DImode, operands)
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (DImode)-1))
      == GET_MODE_BITSIZE (DImode)-1
   && ix86_pre_reload_split ()) && 
#line 1161 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
        return -1;
      *pnum_clobbers = 1;
      return 1299; /* *rotrdi3_mask_1 */

    case 2:
      if (!
#line 18253 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATERT, SImode, operands)
   && (INTVAL (operands[3]) & (4 * BITS_PER_UNIT - 1)) == 0
   && ix86_pre_reload_split ()))
        return -1;
      *pnum_clobbers = 1;
      return 1313; /* *rotrsi3_add_1 */

    case 3:
      if (!(
#line 18253 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATERT, DImode, operands)
   && (INTVAL (operands[3]) & (8 * BITS_PER_UNIT - 1)) == 0
   && ix86_pre_reload_split ()) && 
#line 1161 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
        return -1;
      *pnum_clobbers = 1;
      return 1315; /* *rotrdi3_add_1 */

    case 4:
      if (!
#line 18322 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATERT, SImode, operands)
   && (INTVAL (operands[3]) & (4 * BITS_PER_UNIT - 1)) == 0
   && ix86_pre_reload_split ()))
        return -1;
      *pnum_clobbers = 1;
      return 1329; /* *rotrsi3_sub_1 */

    case 5:
      if (!(
#line 18322 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATERT, DImode, operands)
   && (INTVAL (operands[3]) & (8 * BITS_PER_UNIT - 1)) == 0
   && ix86_pre_reload_split ()) && 
#line 1161 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
        return -1;
      *pnum_clobbers = 1;
      return 1331; /* *rotrdi3_sub_1 */

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
(ix86_binary_operator_ok (ROTATERT, SImode, operands)
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (SImode)-1))
      == GET_MODE_BITSIZE (SImode)-1
   && ix86_pre_reload_split ()))
                {
                  *pnum_clobbers = 1;
                  return 1289; /* *rotrsi3_mask */
                }
              break;

            case 1:
              if ((
#line 18142 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATERT, DImode, operands)
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (DImode)-1))
      == GET_MODE_BITSIZE (DImode)-1
   && ix86_pre_reload_split ()) && 
#line 1161 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                {
                  *pnum_clobbers = 1;
                  return 1291; /* *rotrdi3_mask */
                }
              break;

            case 2:
              if (
#line 18217 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATERT, SImode, operands)
   && (INTVAL (operands[3]) & (4 * BITS_PER_UNIT - 1)) == 0
   && ix86_pre_reload_split ()))
                {
                  *pnum_clobbers = 1;
                  return 1305; /* *rotrsi3_add */
                }
              break;

            case 3:
              if ((
#line 18217 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATERT, DImode, operands)
   && (INTVAL (operands[3]) & (8 * BITS_PER_UNIT - 1)) == 0
   && ix86_pre_reload_split ()) && 
#line 1161 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                {
                  *pnum_clobbers = 1;
                  return 1307; /* *rotrdi3_add */
                }
              break;

            case 4:
              if (
#line 18286 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATERT, SImode, operands)
   && (INTVAL (operands[3]) & (4 * BITS_PER_UNIT - 1)) == 0
   && ix86_pre_reload_split ()))
                {
                  *pnum_clobbers = 1;
                  return 1321; /* *rotrsi3_sub */
                }
              break;

            case 5:
              if ((
#line 18286 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATERT, DImode, operands)
   && (INTVAL (operands[3]) & (8 * BITS_PER_UNIT - 1)) == 0
   && ix86_pre_reload_split ()) && 
#line 1161 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                {
                  *pnum_clobbers = 1;
                  return 1323; /* *rotrdi3_sub */
                }
              break;

            default:
              break;
            }
          break;

        case CONST_INT:
          operands[2] = x3;
          switch (GET_MODE (operands[0]))
            {
            case E_DImode:
              if (pattern614 (x2, pnum_clobbers, 
E_DImode) == 0
                  && const_1_to_31_operand (operands[2], E_QImode)
                  && 
#line 1235 "../../gcc/config/i386/i386.md"
(!TARGET_64BIT))
                {
                  *pnum_clobbers = 2;
                  return 1334; /* ix86_rotrdi3_doubleword */
                }
              break;

            case E_SImode:
              if (register_operand (operands[0], E_SImode)
                  && GET_MODE (x2) == E_SImode
                  && nonimmediate_operand (operands[1], E_SImode)
                  && const_0_to_31_operand (operands[2], E_QImode)
                  && 
#line 18468 "../../gcc/config/i386/i386.md"
(TARGET_BMI2 && !optimize_function_for_size_p (cfun)))
                return 1340; /* *bmi2_rorxsi3_1 */
              break;

            default:
              break;
            }
          if (register_operand (operands[0], E_DImode)
              && GET_MODE (x2) == E_DImode)
            {
              if (XWINT (x3, 0) == 32L
                  && register_operand (operands[1], E_DImode)
                  && 
#line 18427 "../../gcc/config/i386/i386.md"
(!TARGET_64BIT))
                return 1337; /* rotr32di2_doubleword */
              if (nonimmediate_operand (operands[1], E_DImode))
                {
                  operands[2] = x3;
                  if (const_0_to_63_operand (operands[2], E_QImode)
                      && (
#line 18468 "../../gcc/config/i386/i386.md"
(TARGET_BMI2 && !optimize_function_for_size_p (cfun)) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                    return 1341; /* *bmi2_rorxdi3_1 */
                }
            }
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
(ix86_binary_operator_ok (ROTATERT, SImode, operands, TARGET_APX_NDD)
   && TARGET_APX_NF))
            return 1344; /* *rotrsi3_1_nf */
          if (pnum_clobbers == NULL
              || !
#line 18478 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATERT, SImode, operands, TARGET_APX_NDD)
   && true))
            return -1;
          *pnum_clobbers = 1;
          return 1345; /* *rotrsi3_1 */

        case 1:
          if ((
#line 18478 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATERT, DImode, operands, TARGET_APX_NDD)
   && TARGET_APX_NF) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return 1348; /* *rotrdi3_1_nf */
          if (pnum_clobbers == NULL
              || !(
#line 18478 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATERT, DImode, operands, TARGET_APX_NDD)
   && true) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return -1;
          *pnum_clobbers = 1;
          return 1349; /* *rotrdi3_1 */

        default:
          return -1;
        }

    default:
      return -1;
    }
}

 int
recog_113 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) != E_DImode)
    return -1;
  x3 = XEXP (x1, 0);
  operands[0] = x3;
  if (!register_operand (operands[0], E_DImode))
    return -1;
  x4 = XEXP (x2, 0);
  if (GET_MODE (x4) != E_SImode)
    return -1;
  switch (GET_CODE (x4))
    {
    case CTZ:
      if (pnum_clobbers == NULL)
        return -1;
      x5 = XEXP (x4, 0);
      operands[1] = x5;
      if (!nonimmediate_operand (operands[1], E_SImode)
          || !
#line 21165 "../../gcc/config/i386/i386.md"
(TARGET_64BIT))
        return -1;
      *pnum_clobbers = 1;
      return 1520; /* *ctzsidi2_sext */

    case XOR:
      if (pnum_clobbers == NULL)
        return -1;
      x5 = XEXP (x4, 0);
      if (pattern442 (x5, 
CLZ, 
31) != 0)
        return -1;
      x6 = XEXP (x5, 1);
      if (GET_MODE (x6) != E_SImode)
        return -1;
      x7 = XEXP (x4, 1);
      if (x7 != const_int_rtx[MAX_SAVED_CONST_INT + 31])
        return -1;
      x8 = XEXP (x6, 0);
      operands[1] = x8;
      if (!nonimmediate_operand (operands[1], E_SImode)
          || !
#line 21336 "../../gcc/config/i386/i386.md"
(!TARGET_LZCNT && TARGET_64BIT && ix86_pre_reload_split ()))
        return -1;
      *pnum_clobbers = 1;
      return 1531; /* *bsr_2 */

    case UNSPEC:
      if (XVECLEN (x4, 0) != 1
          || XINT (x4, 1) != 49)
        return -1;
      x9 = XVECEXP (x4, 0, 0);
      switch (GET_CODE (x9))
        {
        case REG:
        case SUBREG:
          operands[1] = x9;
          switch (GET_MODE (operands[1]))
            {
            case E_V8SFmode:
              if (register_operand (operands[1], E_V8SFmode)
                  && (
#line 21946 "../../gcc/config/i386/sse.md"
(TARGET_64BIT && TARGET_SSE) && 
#line 422 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
                return 8509; /* *avx_movmskps256_ext */
              break;

            case E_V4SFmode:
              if (register_operand (operands[1], E_V4SFmode)
                  && 
#line 21946 "../../gcc/config/i386/sse.md"
(TARGET_64BIT && TARGET_SSE))
                return 8511; /* *sse_movmskps_ext */
              break;

            case E_V4DFmode:
              if (register_operand (operands[1], E_V4DFmode)
                  && (
#line 21946 "../../gcc/config/i386/sse.md"
(TARGET_64BIT && TARGET_SSE) && 
#line 423 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
                return 8513; /* *avx_movmskpd256_ext */
              break;

            case E_V2DFmode:
              if (register_operand (operands[1], E_V2DFmode)
                  && (
#line 21946 "../../gcc/config/i386/sse.md"
(TARGET_64BIT && TARGET_SSE) && 
#line 423 "../../gcc/config/i386/sse.md"
(TARGET_SSE2)))
                return 8515; /* *sse2_movmskpd_ext */
              break;

            case E_V16QImode:
              if (register_operand (operands[1], E_V16QImode)
                  && 
#line 22119 "../../gcc/config/i386/sse.md"
(TARGET_64BIT && TARGET_SSE2))
                return 8557; /* *sse2_pmovmskb_ext */
              break;

            default:
              break;
            }
          if (GET_CODE (x9) != SUBREG)
            return -1;
          switch (pattern1083 (x9))
            {
            case 0:
              if (!(
#line 22028 "../../gcc/config/i386/sse.md"
(TARGET_64BIT && TARGET_SSE) && 
#line 422 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
                return -1;
              return 8533; /* *avx_movmskps256_ext_lt_avx512 */

            case 1:
              if (!
#line 22028 "../../gcc/config/i386/sse.md"
(TARGET_64BIT && TARGET_SSE))
                return -1;
              return 8535; /* *sse_movmskps_ext_lt_avx512 */

            case 2:
              if (!(
#line 22028 "../../gcc/config/i386/sse.md"
(TARGET_64BIT && TARGET_SSE) && 
#line 423 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
                return -1;
              return 8537; /* *avx_movmskpd256_ext_lt_avx512 */

            case 3:
              if (!(
#line 22028 "../../gcc/config/i386/sse.md"
(TARGET_64BIT && TARGET_SSE) && 
#line 423 "../../gcc/config/i386/sse.md"
(TARGET_SSE2)))
                return -1;
              return 8539; /* *sse2_movmskpd_ext_lt_avx512 */

            case 4:
              if (!(
#line 22067 "../../gcc/config/i386/sse.md"
(TARGET_64BIT && TARGET_SSE) && 
#line 422 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
                return -1;
              return 8545; /* *avx_movmskps256_ext_shift */

            case 5:
              if (!
#line 22067 "../../gcc/config/i386/sse.md"
(TARGET_64BIT && TARGET_SSE))
                return -1;
              return 8547; /* *sse_movmskps_ext_shift */

            case 6:
              if (!(
#line 22067 "../../gcc/config/i386/sse.md"
(TARGET_64BIT && TARGET_SSE) && 
#line 423 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
                return -1;
              return 8549; /* *avx_movmskpd256_ext_shift */

            case 7:
              if (!(
#line 22067 "../../gcc/config/i386/sse.md"
(TARGET_64BIT && TARGET_SSE) && 
#line 423 "../../gcc/config/i386/sse.md"
(TARGET_SSE2)))
                return -1;
              return 8551; /* *sse2_movmskpd_ext_shift */

            default:
              return -1;
            }

        case LT:
          switch (pattern992 (x9))
            {
            case 0:
              if (!(
#line 22003 "../../gcc/config/i386/sse.md"
(TARGET_64BIT && TARGET_SSE) && 
#line 422 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
                return -1;
              return 8525; /* *avx_movmskps256_ext_lt */

            case 1:
              if (!
#line 22003 "../../gcc/config/i386/sse.md"
(TARGET_64BIT && TARGET_SSE))
                return -1;
              return 8527; /* *sse_movmskps_ext_lt */

            case 2:
              if (!(
#line 22003 "../../gcc/config/i386/sse.md"
(TARGET_64BIT && TARGET_SSE) && 
#line 423 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
                return -1;
              return 8529; /* *avx_movmskpd256_ext_lt */

            case 3:
              if (!(
#line 22003 "../../gcc/config/i386/sse.md"
(TARGET_64BIT && TARGET_SSE) && 
#line 423 "../../gcc/config/i386/sse.md"
(TARGET_SSE2)))
                return -1;
              return 8531; /* *sse2_movmskpd_ext_lt */

            case 4:
              if (!
#line 22315 "../../gcc/config/i386/sse.md"
(TARGET_64BIT && TARGET_SSE2))
                return -1;
              return 8567; /* *sse2_pmovmskb_ext_lt */

            default:
              return -1;
            }

        case VEC_MERGE:
          switch (pattern984 (x9))
            {
            case 0:
              if (!(
#line 22344 "../../gcc/config/i386/sse.md"
(TARGET_64BIT && TARGET_SSE2) && 
#line 630 "../../gcc/config/i386/sse.md"
(TARGET_AVX2)))
                return -1;
              return 8568; /* *sse2_pmovmskb_ext_lt_avx512 */

            case 1:
              if (!
#line 22344 "../../gcc/config/i386/sse.md"
(TARGET_64BIT && TARGET_SSE2))
                return -1;
              return 8569; /* *sse2_pmovmskb_ext_lt_avx512 */

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
recog_124 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  switch (pattern630 (x2))
    {
    case 0:
      if (pattern633 (x2, 
E_V32HImode, 
E_SImode, 
E_V32HFmode) != 0
          || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 7617 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && 1) && 
#line 758 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512))))
        return -1;
      return 4417; /* avx512fp16_vcvtph2uw_v32hi_mask */

    case 1:
      if (pattern773 (x2, 
E_V16SImode, 
E_HImode) != 0)
        return -1;
      switch (GET_MODE (operands[1]))
        {
        case E_V16HFmode:
          if (!vector_operand (operands[1], E_V16HFmode)
              || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 7617 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && 1) && 
#line 758 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512))))
            return -1;
          return 4425; /* avx512fp16_vcvtph2udq_v16si_mask */

        case E_V16SFmode:
          if (!nonimmediate_operand (operands[1], E_V16SFmode)
              || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 8706 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 675 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512))))
            return -1;
          return 4840; /* avx512f_fixuns_notruncv16sfv16si_mask */

        default:
          return -1;
        }

    case 2:
      switch (pattern1097 (x2, 
E_V8DImode))
        {
        case 0:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 7617 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && 1) && 
#line 758 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512))))
            return -1;
          return 4433; /* avx512fp16_vcvtph2uqq_v8di_mask */

        case 1:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 8739 "../../gcc/config/i386/sse.md"
(TARGET_AVX512DQ && 1) && 
#line 627 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512))))
            return -1;
          return 4860; /* avx512dq_cvtps2uqqv8di_mask */

        case 2:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 9721 "../../gcc/config/i386/sse.md"
(TARGET_AVX512DQ && 1) && 
#line 537 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512))))
            return -1;
          return 5106; /* fixuns_notruncv8dfv8di2_mask */

        default:
          return -1;
        }

    case 3:
      if (pattern633 (x2, 
E_V16HImode, 
E_HImode, 
E_V16HFmode) != 0
          || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 7617 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && 1) && 
#line 759 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
        return -1;
      return 4441; /* avx512fp16_vcvtph2uw_v16hi_mask */

    case 4:
      switch (pattern1097 (x2, 
E_V8SImode))
        {
        case 0:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 7617 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && 1) && 
#line 759 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
            return -1;
          return 4449; /* avx512fp16_vcvtph2udq_v8si_mask */

        case 1:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 8706 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 675 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
            return -1;
          return 4844; /* avx512vl_fixuns_notruncv8sfv8si_mask */

        case 2:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 9500 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 471 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512))))
            return -1;
          return 5012; /* fixuns_notruncv8dfv8si2_mask */

        default:
          return -1;
        }

    case 5:
      switch (pattern1098 (x2, 
E_V4DImode))
        {
        case 0:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 7617 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && 1) && 
#line 760 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
            return -1;
          return 4457; /* avx512fp16_vcvtph2uqq_v4di_mask */

        case 1:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 8739 "../../gcc/config/i386/sse.md"
(TARGET_AVX512DQ && 1) && 
#line 627 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
            return -1;
          return 4864; /* avx512dq_cvtps2uqqv4di_mask */

        case 2:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 9721 "../../gcc/config/i386/sse.md"
(TARGET_AVX512DQ && 1) && 
#line 537 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
            return -1;
          return 5110; /* fixuns_notruncv4dfv4di2_mask */

        default:
          return -1;
        }

    case 6:
      if (pattern633 (x2, 
E_V8HImode, 
E_QImode, 
E_V8HFmode) != 0
          || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 7617 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && 1) && 
#line 760 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
        return -1;
      return 4464; /* avx512fp16_vcvtph2uw_v8hi_mask */

    case 7:
      switch (pattern1098 (x2, 
E_V4SImode))
        {
        case 0:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 7617 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && 1) && 
#line 761 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
            return -1;
          return 4468; /* avx512fp16_vcvtph2udq_v4si_mask */

        case 1:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 8706 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 675 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
            return -1;
          return 4847; /* avx512vl_fixuns_notruncv4sfv4si_mask */

        case 2:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 9500 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 471 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
            return -1;
          return 5016; /* fixuns_notruncv4dfv4si2_mask */

        default:
          return -1;
        }

    case 8:
      switch (pattern1099 (x2))
        {
        case 0:
          if (!vector_operand (operands[1], E_V8HFmode)
              || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 7617 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && 1) && 
#line 761 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
            return -1;
          return 4472; /* avx512fp16_vcvtph2uqq_v2di_mask */

        case 1:
          if (!nonimmediate_operand (operands[1], E_V2DFmode)
              || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 9721 "../../gcc/config/i386/sse.md"
(TARGET_AVX512DQ && 1) && 
#line 537 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
            return -1;
          return 5113; /* fixuns_notruncv2dfv2di2_mask */

        default:
          return -1;
        }

    case 9:
      if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 8752 "../../gcc/config/i386/sse.md"
(TARGET_AVX512DQ && TARGET_AVX512VL)))
        return -1;
      return 4867; /* avx512dq_cvtps2uqqv2di_mask */

    default:
      return -1;
    }
}

 int
recog_130 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XVECEXP (x3, 0, 0);
  operands[1] = x4;
  x5 = XVECEXP (x3, 0, 1);
  operands[2] = x5;
  x6 = XEXP (x2, 2);
  switch (GET_CODE (x6))
    {
    case CONST_INT:
      if (XWINT (x6, 0) != 1L)
        return -1;
      switch (pattern457 (x2))
        {
        case 0:
          if (!(
#line 13612 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 479 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16)))
            return -1;
          return 5414; /* avx512f_vmscalefv8hf */

        case 1:
          if (!
#line 13612 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F))
            return -1;
          return 5418; /* avx512f_vmscalefv4sf */

        case 2:
          if (!(
#line 13612 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 480 "../../gcc/config/i386/sse.md"
(TARGET_SSE2)))
            return -1;
          return 5422; /* avx512f_vmscalefv2df */

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
          if (pattern1105 (x2, 
E_V32HFmode, 
E_SImode) != 0
              || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 13623 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 525 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_EVEX512))))
            return -1;
          return 5428; /* avx512bw_scalefv32hf_mask */

        case E_V16HFmode:
          if (pattern1105 (x2, 
E_V16HFmode, 
E_HImode) != 0
              || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 13623 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 526 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL))))
            return -1;
          return 5432; /* avx512vl_scalefv16hf_mask */

        case E_V8HFmode:
          if (pattern1105 (x2, 
E_V8HFmode, 
E_QImode) != 0
              || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 13623 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 527 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL))))
            return -1;
          return 5435; /* avx512fp16_scalefv8hf_mask */

        case E_V16SFmode:
          if (pattern1105 (x2, 
E_V16SFmode, 
E_HImode) != 0
              || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 13623 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 528 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512))))
            return -1;
          return 5438; /* avx512f_scalefv16sf_mask */

        case E_V8SFmode:
          if (pattern1105 (x2, 
E_V8SFmode, 
E_QImode) != 0
              || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 13623 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 528 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
            return -1;
          return 5442; /* avx512vl_scalefv8sf_mask */

        case E_V4SFmode:
          if (pattern1105 (x2, 
E_V4SFmode, 
E_QImode) != 0
              || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 13623 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 528 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
            return -1;
          return 5445; /* avx512vl_scalefv4sf_mask */

        case E_V8DFmode:
          if (pattern1105 (x2, 
E_V8DFmode, 
E_QImode) != 0
              || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 13623 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 529 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512))))
            return -1;
          return 5448; /* avx512f_scalefv8df_mask */

        case E_V4DFmode:
          if (pattern1105 (x2, 
E_V4DFmode, 
E_QImode) != 0
              || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 13623 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 529 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
            return -1;
          return 5452; /* avx512vl_scalefv4df_mask */

        case E_V2DFmode:
          if (pattern1105 (x2, 
E_V2DFmode, 
E_QImode) != 0
              || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 13623 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 529 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
            return -1;
          return 5455; /* avx512vl_scalefv2df_mask */

        default:
          return -1;
        }

    default:
      return -1;
    }
}

 int
recog_137 (rtx x1 ATTRIBUTE_UNUSED,
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
  if (!const_0_to_15_operand (operands[3], E_SImode))
    return -1;
  x7 = XEXP (x2, 2);
  switch (GET_CODE (x7))
    {
    case REG:
    case SUBREG:
      operands[5] = x7;
      x8 = XEXP (x2, 1);
      operands[4] = x8;
      switch (GET_MODE (operands[0]))
        {
        case E_V16SFmode:
          if (pattern472 (x2, 
E_V16SFmode, 
E_HImode) != 0
              || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 29812 "../../gcc/config/i386/sse.md"
(TARGET_AVX512DQ && 1) && 
#line 521 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512))))
            return -1;
          return 9958; /* avx512dq_rangepv16sf_mask */

        case E_V8SFmode:
          if (pattern472 (x2, 
E_V8SFmode, 
E_QImode) != 0
              || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 29812 "../../gcc/config/i386/sse.md"
(TARGET_AVX512DQ && 1) && 
#line 521 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
            return -1;
          return 9962; /* avx512dq_rangepv8sf_mask */

        case E_V4SFmode:
          if (pattern472 (x2, 
E_V4SFmode, 
E_QImode) != 0
              || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 29812 "../../gcc/config/i386/sse.md"
(TARGET_AVX512DQ && 1) && 
#line 521 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
            return -1;
          return 9965; /* avx512dq_rangepv4sf_mask */

        case E_V8DFmode:
          if (pattern472 (x2, 
E_V8DFmode, 
E_QImode) != 0
              || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 29812 "../../gcc/config/i386/sse.md"
(TARGET_AVX512DQ && 1) && 
#line 522 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512))))
            return -1;
          return 9968; /* avx512dq_rangepv8df_mask */

        case E_V4DFmode:
          if (pattern472 (x2, 
E_V4DFmode, 
E_QImode) != 0
              || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 29812 "../../gcc/config/i386/sse.md"
(TARGET_AVX512DQ && 1) && 
#line 522 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
            return -1;
          return 9972; /* avx512dq_rangepv4df_mask */

        case E_V2DFmode:
          if (pattern472 (x2, 
E_V2DFmode, 
E_QImode) != 0
              || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 29812 "../../gcc/config/i386/sse.md"
(TARGET_AVX512DQ && 1) && 
#line 522 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
            return -1;
          return 9975; /* avx512dq_rangepv2df_mask */

        default:
          return -1;
        }

    case CONST_INT:
      if (XWINT (x7, 0) != 1L)
        return -1;
      switch (pattern1106 (x2))
        {
        case 0:
          if (!
#line 29835 "../../gcc/config/i386/sse.md"
(TARGET_AVX512DQ))
            return -1;
          return 9976; /* avx512dq_rangesv4sf */

        case 1:
          if (!(
#line 29835 "../../gcc/config/i386/sse.md"
(TARGET_AVX512DQ) && 
#line 475 "../../gcc/config/i386/sse.md"
(TARGET_SSE2)))
            return -1;
          return 9980; /* avx512dq_rangesv2df */

        default:
          return -1;
        }

    default:
      return -1;
    }
}

 int
recog_143 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  switch (XINT (x3, 1))
    {
    case 192:
      x4 = XEXP (x2, 2);
      if (x4 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
        return -1;
      x5 = XVECEXP (x3, 0, 0);
      operands[1] = x5;
      x6 = XVECEXP (x3, 0, 1);
      operands[2] = x6;
      x7 = XVECEXP (x3, 0, 2);
      operands[3] = x7;
      if (!const_0_to_255_operand (operands[3], E_SImode))
        return -1;
      switch (pattern457 (x2))
        {
        case 0:
          if (!(
#line 4041 "../../gcc/config/i386/sse.md"
(TARGET_AVX512DQ || (VALID_AVX512FP16_REG_MODE (V8HFmode))) && 
#line 479 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16)))
            return -1;
          return 3219; /* reducesv8hf */

        case 1:
          if (!
#line 4041 "../../gcc/config/i386/sse.md"
(TARGET_AVX512DQ || (VALID_AVX512FP16_REG_MODE (V4SFmode))))
            return -1;
          return 3223; /* reducesv4sf */

        case 2:
          if (!(
#line 4041 "../../gcc/config/i386/sse.md"
(TARGET_AVX512DQ || (VALID_AVX512FP16_REG_MODE (V2DFmode))) && 
#line 480 "../../gcc/config/i386/sse.md"
(TARGET_SSE2)))
            return -1;
          return 3227; /* reducesv2df */

        default:
          return -1;
        }

    case 59:
      x4 = XEXP (x2, 2);
      if (x4 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
        return -1;
      x5 = XVECEXP (x3, 0, 0);
      operands[1] = x5;
      x6 = XVECEXP (x3, 0, 1);
      operands[2] = x6;
      x7 = XVECEXP (x3, 0, 2);
      operands[3] = x7;
      if (!cmpps_imm_operand (operands[3], E_SImode))
        return -1;
      switch (pattern1106 (x2))
        {
        case 0:
          if (!
#line 4314 "../../gcc/config/i386/sse.md"
(TARGET_SSE))
            return -1;
          return 3263; /* avx_vmcmpv4sf3 */

        case 1:
          if (!(
#line 4314 "../../gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 475 "../../gcc/config/i386/sse.md"
(TARGET_SSE2)))
            return -1;
          return 3264; /* avx_vmcmpv2df3 */

        default:
          return -1;
        }

    case 133:
      return recog_133 (x1, insn, pnum_clobbers);

    case 217:
      switch (pattern471 (x2))
        {
        case 0:
          if (!(
#line 7147 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && (64 == 64 || TARGET_AVX512VL) && 1) && 
#line 555 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return -1;
          return 4323; /* fma_fmaddc_v32hf_maskz_1 */

        case 1:
          if (!(
#line 7147 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && (32 == 64 || TARGET_AVX512VL) && 1) && 
#line 555 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 4331; /* fma_fmaddc_v16hf_maskz_1 */

        case 2:
          if (!(
#line 7147 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && (16 == 64 || TARGET_AVX512VL) && 1) && 
#line 555 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 4338; /* fma_fmaddc_v8hf_maskz_1 */

        case 3:
          if (!(
#line 7285 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && 1) && 
#line 555 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return -1;
          return 4365; /* avx512bw_fmaddc_v32hf_mask */

        case 4:
          if (!(
#line 7285 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && 1) && 
#line 555 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 4369; /* avx512vl_fmaddc_v16hf_mask */

        case 5:
          if (!(
#line 7285 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && 1) && 
#line 555 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 4373; /* avx512fp16_fmaddc_v8hf_mask */

        case 6:
          if (!
#line 7474 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16))
            return -1;
          return 4395; /* avx512fp16_fma_fmaddcsh_v8hf */

        default:
          return -1;
        }

    case 219:
      switch (pattern471 (x2))
        {
        case 0:
          if (!(
#line 7147 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && (64 == 64 || TARGET_AVX512VL) && 1) && 
#line 555 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return -1;
          return 4327; /* fma_fcmaddc_v32hf_maskz_1 */

        case 1:
          if (!(
#line 7147 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && (32 == 64 || TARGET_AVX512VL) && 1) && 
#line 555 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 4335; /* fma_fcmaddc_v16hf_maskz_1 */

        case 2:
          if (!(
#line 7147 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && (16 == 64 || TARGET_AVX512VL) && 1) && 
#line 555 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 4340; /* fma_fcmaddc_v8hf_maskz_1 */

        case 3:
          if (!(
#line 7285 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && 1) && 
#line 555 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return -1;
          return 4367; /* avx512bw_fcmaddc_v32hf_mask */

        case 4:
          if (!(
#line 7285 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && 1) && 
#line 555 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 4371; /* avx512vl_fcmaddc_v16hf_mask */

        case 5:
          if (!(
#line 7285 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && 1) && 
#line 555 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 4374; /* avx512fp16_fcmaddc_v8hf_mask */

        case 6:
          if (!
#line 7474 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16))
            return -1;
          return 4399; /* avx512fp16_fma_fcmaddcsh_v8hf */

        default:
          return -1;
        }

    case 167:
      return recog_140 (x1, insn, pnum_clobbers);

    case 121:
      x5 = XVECEXP (x3, 0, 0);
      operands[1] = x5;
      x6 = XVECEXP (x3, 0, 1);
      operands[2] = x6;
      x7 = XVECEXP (x3, 0, 2);
      operands[3] = x7;
      if (!const_0_to_255_mul_8_operand (operands[3], E_SImode))
        return -1;
      x8 = XEXP (x2, 1);
      operands[4] = x8;
      x4 = XEXP (x2, 2);
      operands[5] = x4;
      switch (GET_MODE (operands[0]))
        {
        case E_V64QImode:
          if (pattern477 (x2, 
E_V64QImode, 
E_DImode) != 0
              || !(
#line 23223 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && (64 == 64 || TARGET_AVX512VL)) && 
#line 633 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512)))
            return -1;
          return 8637; /* avx512bw_palignrv64qi_mask */

        case E_V32QImode:
          if (pattern477 (x2, 
E_V32QImode, 
E_SImode) != 0
              || !(
#line 23223 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && (32 == 64 || TARGET_AVX512VL)) && 
#line 633 "../../gcc/config/i386/sse.md"
(TARGET_AVX2)))
            return -1;
          return 8638; /* avx2_palignrv32qi_mask */

        case E_V16QImode:
          if (pattern477 (x2, 
E_V16QImode, 
E_HImode) != 0
              || !
#line 23223 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && (16 == 64 || TARGET_AVX512VL)))
            return -1;
          return 8639; /* ssse3_palignrv16qi_mask */

        default:
          return -1;
        }

    case 128:
      switch (pattern473 (x2, 
E_SImode))
        {
        case 0:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 23817 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_512)))
            return -1;
          return 8720; /* avx10_2_mpsadbw_mask */

        case 1:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 23829 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256) && 
#line 601 "../../gcc/config/i386/sse.md"
(TARGET_AVX))))
            return -1;
          return 8722; /* avx2_mpsadbw_mask */

        case 2:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 23829 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256)))
            return -1;
          return 8724; /* sse4_1_mpsadbw_mask */

        default:
          return -1;
        }

    case 155:
      return recog_132 (x1, insn, pnum_clobbers);

    case 194:
      return recog_137 (x1, insn, pnum_clobbers);

    case 166:
      x4 = XEXP (x2, 2);
      if (x4 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
        return -1;
      x5 = XVECEXP (x3, 0, 0);
      operands[1] = x5;
      x6 = XVECEXP (x3, 0, 1);
      operands[2] = x6;
      x7 = XVECEXP (x3, 0, 2);
      operands[3] = x7;
      if (!const_0_to_15_operand (operands[3], E_SImode))
        return -1;
      switch (pattern457 (x2))
        {
        case 0:
          if (!(
#line 29903 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 479 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16)))
            return -1;
          return 10038; /* avx512f_vgetmantv8hf */

        case 1:
          if (!
#line 29903 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F))
            return -1;
          return 10042; /* avx512f_vgetmantv4sf */

        case 2:
          if (!(
#line 29903 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 480 "../../gcc/config/i386/sse.md"
(TARGET_SSE2)))
            return -1;
          return 10046; /* avx512f_vgetmantv2df */

        default:
          return -1;
        }

    case 186:
      x5 = XVECEXP (x3, 0, 0);
      operands[1] = x5;
      x6 = XVECEXP (x3, 0, 1);
      operands[2] = x6;
      x7 = XVECEXP (x3, 0, 2);
      operands[3] = x7;
      if (!const_0_to_255_operand (operands[3], E_SImode))
        return -1;
      x8 = XEXP (x2, 1);
      operands[4] = x8;
      x4 = XEXP (x2, 2);
      operands[5] = x4;
      switch (GET_MODE (operands[0]))
        {
        case E_V8HImode:
          if (pattern1280 (x2, 
E_QImode, 
E_V8HImode, 
E_V16QImode) != 0
              || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 29924 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 686 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
            return -1;
          return 10051; /* avx512bw_dbpsadbwv8hi_mask */

        case E_V16HImode:
          if (pattern1280 (x2, 
E_HImode, 
E_V16HImode, 
E_V32QImode) != 0
              || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 29924 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 686 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
            return -1;
          return 10053; /* avx512bw_dbpsadbwv16hi_mask */

        case E_V32HImode:
          if (pattern1280 (x2, 
E_SImode, 
E_V32HImode, 
E_V64QImode) != 0
              || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 29924 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 686 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512))))
            return -1;
          return 10055; /* avx512bw_dbpsadbwv32hi_mask */

        default:
          return -1;
        }

    case 195:
      switch (pattern476 (x2))
        {
        case 0:
          if (!(
#line 30242 "../../gcc/config/i386/sse.md"
(TARGET_AVX512IFMA) && 
#line 624 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return -1;
          return 10111; /* vpmadd52luqv8di_maskz_1 */

        case 1:
          if (!(
#line 30242 "../../gcc/config/i386/sse.md"
(TARGET_AVX512IFMA) && 
#line 624 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 10113; /* vpmadd52luqv4di_maskz_1 */

        case 2:
          if (!(
#line 30242 "../../gcc/config/i386/sse.md"
(TARGET_AVX512IFMA) && 
#line 624 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 10115; /* vpmadd52luqv2di_maskz_1 */

        case 3:
          if (!(
#line 30258 "../../gcc/config/i386/sse.md"
(TARGET_AVX512IFMA) && 
#line 624 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return -1;
          return 10117; /* vpmadd52luqv8di_mask */

        case 4:
          if (!(
#line 30258 "../../gcc/config/i386/sse.md"
(TARGET_AVX512IFMA) && 
#line 624 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 10119; /* vpmadd52luqv4di_mask */

        case 5:
          if (!(
#line 30258 "../../gcc/config/i386/sse.md"
(TARGET_AVX512IFMA) && 
#line 624 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 10121; /* vpmadd52luqv2di_mask */

        default:
          return -1;
        }

    case 196:
      switch (pattern476 (x2))
        {
        case 0:
          if (!(
#line 30242 "../../gcc/config/i386/sse.md"
(TARGET_AVX512IFMA) && 
#line 624 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return -1;
          return 10112; /* vpmadd52huqv8di_maskz_1 */

        case 1:
          if (!(
#line 30242 "../../gcc/config/i386/sse.md"
(TARGET_AVX512IFMA) && 
#line 624 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 10114; /* vpmadd52huqv4di_maskz_1 */

        case 2:
          if (!(
#line 30242 "../../gcc/config/i386/sse.md"
(TARGET_AVX512IFMA) && 
#line 624 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 10116; /* vpmadd52huqv2di_maskz_1 */

        case 3:
          if (!(
#line 30258 "../../gcc/config/i386/sse.md"
(TARGET_AVX512IFMA) && 
#line 624 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return -1;
          return 10118; /* vpmadd52huqv8di_mask */

        case 4:
          if (!(
#line 30258 "../../gcc/config/i386/sse.md"
(TARGET_AVX512IFMA) && 
#line 624 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 10120; /* vpmadd52huqv4di_mask */

        case 5:
          if (!(
#line 30258 "../../gcc/config/i386/sse.md"
(TARGET_AVX512IFMA) && 
#line 624 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 10122; /* vpmadd52huqv2di_mask */

        default:
          return -1;
        }

    case 198:
      switch (pattern473 (x2, 
E_VOIDmode))
        {
        case 0:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 30346 "../../gcc/config/i386/sse.md"
(TARGET_GFNI) && 
#line 636 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512))))
            return -1;
          return 10162; /* vgf2p8affineinvqb_v64qi_mask */

        case 1:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 30346 "../../gcc/config/i386/sse.md"
(TARGET_GFNI) && 
#line 636 "../../gcc/config/i386/sse.md"
(TARGET_AVX))))
            return -1;
          return 10164; /* vgf2p8affineinvqb_v32qi_mask */

        case 2:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 30346 "../../gcc/config/i386/sse.md"
(TARGET_GFNI)))
            return -1;
          return 10166; /* vgf2p8affineinvqb_v16qi_mask */

        default:
          return -1;
        }

    case 199:
      switch (pattern473 (x2, 
E_VOIDmode))
        {
        case 0:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 30363 "../../gcc/config/i386/sse.md"
(TARGET_GFNI) && 
#line 636 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512))))
            return -1;
          return 10168; /* vgf2p8affineqb_v64qi_mask */

        case 1:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 30363 "../../gcc/config/i386/sse.md"
(TARGET_GFNI) && 
#line 636 "../../gcc/config/i386/sse.md"
(TARGET_AVX))))
            return -1;
          return 10170; /* vgf2p8affineqb_v32qi_mask */

        case 2:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 30363 "../../gcc/config/i386/sse.md"
(TARGET_GFNI)))
            return -1;
          return 10172; /* vgf2p8affineqb_v16qi_mask */

        default:
          return -1;
        }

    case 202:
      return recog_141 (x1, insn, pnum_clobbers);

    case 201:
      return recog_142 (x1, insn, pnum_clobbers);

    case 203:
      return recog_136 (x1, insn, pnum_clobbers);

    case 204:
      return recog_135 (x1, insn, pnum_clobbers);

    case 205:
      switch (pattern483 (x2))
        {
        case 0:
          if (!(
#line 30609 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VNNI) && 
#line 675 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return -1;
          return 10272; /* vpdpbusd_v16si_mask */

        case 1:
          if (!(
#line 30609 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VNNI) && 
#line 675 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 10273; /* vpdpbusd_v8si_mask */

        case 2:
          if (!(
#line 30609 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VNNI) && 
#line 675 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 10274; /* vpdpbusd_v4si_mask */

        case 3:
          if (!(
#line 30638 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VNNI) && 
#line 675 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return -1;
          return 10275; /* vpdpbusd_v16si_maskz_1 */

        case 4:
          if (!(
#line 30638 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VNNI) && 
#line 675 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 10276; /* vpdpbusd_v8si_maskz_1 */

        case 5:
          if (!(
#line 30638 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VNNI) && 
#line 675 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 10277; /* vpdpbusd_v4si_maskz_1 */

        default:
          return -1;
        }

    case 206:
      switch (pattern483 (x2))
        {
        case 0:
          if (!(
#line 30678 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VNNI) && 
#line 675 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return -1;
          return 10281; /* vpdpbusds_v16si_mask */

        case 1:
          if (!(
#line 30678 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VNNI) && 
#line 675 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 10282; /* vpdpbusds_v8si_mask */

        case 2:
          if (!(
#line 30678 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VNNI) && 
#line 675 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 10283; /* vpdpbusds_v4si_mask */

        case 3:
          if (!(
#line 30707 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VNNI) && 
#line 675 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return -1;
          return 10284; /* vpdpbusds_v16si_maskz_1 */

        case 4:
          if (!(
#line 30707 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VNNI) && 
#line 675 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 10285; /* vpdpbusds_v8si_maskz_1 */

        case 5:
          if (!(
#line 30707 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VNNI) && 
#line 675 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 10286; /* vpdpbusds_v4si_maskz_1 */

        default:
          return -1;
        }

    case 207:
      switch (pattern483 (x2))
        {
        case 0:
          if (!(
#line 30747 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VNNI) && 
#line 675 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return -1;
          return 10290; /* vpdpwssd_v16si_mask */

        case 1:
          if (!(
#line 30747 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VNNI) && 
#line 675 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 10291; /* vpdpwssd_v8si_mask */

        case 2:
          if (!(
#line 30747 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VNNI) && 
#line 675 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 10292; /* vpdpwssd_v4si_mask */

        case 3:
          if (!(
#line 30776 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VNNI) && 
#line 675 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return -1;
          return 10293; /* vpdpwssd_v16si_maskz_1 */

        case 4:
          if (!(
#line 30776 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VNNI) && 
#line 675 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 10294; /* vpdpwssd_v8si_maskz_1 */

        case 5:
          if (!(
#line 30776 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VNNI) && 
#line 675 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 10295; /* vpdpwssd_v4si_maskz_1 */

        default:
          return -1;
        }

    case 208:
      switch (pattern483 (x2))
        {
        case 0:
          if (!(
#line 30816 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VNNI) && 
#line 675 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return -1;
          return 10299; /* vpdpwssds_v16si_mask */

        case 1:
          if (!(
#line 30816 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VNNI) && 
#line 675 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 10300; /* vpdpwssds_v8si_mask */

        case 2:
          if (!(
#line 30816 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VNNI) && 
#line 675 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 10301; /* vpdpwssds_v4si_mask */

        case 3:
          if (!(
#line 30845 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VNNI) && 
#line 675 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return -1;
          return 10302; /* vpdpwssds_v16si_maskz_1 */

        case 4:
          if (!(
#line 30845 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VNNI) && 
#line 675 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 10303; /* vpdpwssds_v8si_maskz_1 */

        case 5:
          if (!(
#line 30845 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VNNI) && 
#line 675 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 10304; /* vpdpwssds_v4si_maskz_1 */

        default:
          return -1;
        }

    case 216:
      return recog_138 (x1, insn, pnum_clobbers);

    case 227:
      switch (pattern485 (x2))
        {
        case 0:
          if (!(
#line 31586 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256) && 
#line 678 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_512)))
            return -1;
          return 10385; /* vpdpbssd_v16si_mask */

        case 1:
          if (!
#line 31586 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
            return -1;
          return 10391; /* vpdpbssd_v8si_mask */

        case 2:
          if (!
#line 31586 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
            return -1;
          return 10397; /* vpdpbssd_v4si_mask */

        case 3:
          if (!(
#line 31613 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256) && 
#line 678 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_512)))
            return -1;
          return 10403; /* *vpdpbssd_v16si_maskz */

        case 4:
          if (!
#line 31613 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
            return -1;
          return 10409; /* *vpdpbssd_v8si_maskz */

        case 5:
          if (!
#line 31613 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
            return -1;
          return 10415; /* *vpdpbssd_v4si_maskz */

        default:
          return -1;
        }

    case 228:
      switch (pattern485 (x2))
        {
        case 0:
          if (!(
#line 31586 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256) && 
#line 678 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_512)))
            return -1;
          return 10386; /* vpdpbssds_v16si_mask */

        case 1:
          if (!
#line 31586 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
            return -1;
          return 10392; /* vpdpbssds_v8si_mask */

        case 2:
          if (!
#line 31586 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
            return -1;
          return 10398; /* vpdpbssds_v4si_mask */

        case 3:
          if (!(
#line 31613 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256) && 
#line 678 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_512)))
            return -1;
          return 10404; /* *vpdpbssds_v16si_maskz */

        case 4:
          if (!
#line 31613 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
            return -1;
          return 10410; /* *vpdpbssds_v8si_maskz */

        case 5:
          if (!
#line 31613 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
            return -1;
          return 10416; /* *vpdpbssds_v4si_maskz */

        default:
          return -1;
        }

    case 229:
      switch (pattern485 (x2))
        {
        case 0:
          if (!(
#line 31586 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256) && 
#line 678 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_512)))
            return -1;
          return 10387; /* vpdpbsud_v16si_mask */

        case 1:
          if (!
#line 31586 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
            return -1;
          return 10393; /* vpdpbsud_v8si_mask */

        case 2:
          if (!
#line 31586 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
            return -1;
          return 10399; /* vpdpbsud_v4si_mask */

        case 3:
          if (!(
#line 31613 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256) && 
#line 678 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_512)))
            return -1;
          return 10405; /* *vpdpbsud_v16si_maskz */

        case 4:
          if (!
#line 31613 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
            return -1;
          return 10411; /* *vpdpbsud_v8si_maskz */

        case 5:
          if (!
#line 31613 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
            return -1;
          return 10417; /* *vpdpbsud_v4si_maskz */

        default:
          return -1;
        }

    case 230:
      switch (pattern485 (x2))
        {
        case 0:
          if (!(
#line 31586 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256) && 
#line 678 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_512)))
            return -1;
          return 10388; /* vpdpbsuds_v16si_mask */

        case 1:
          if (!
#line 31586 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
            return -1;
          return 10394; /* vpdpbsuds_v8si_mask */

        case 2:
          if (!
#line 31586 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
            return -1;
          return 10400; /* vpdpbsuds_v4si_mask */

        case 3:
          if (!(
#line 31613 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256) && 
#line 678 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_512)))
            return -1;
          return 10406; /* *vpdpbsuds_v16si_maskz */

        case 4:
          if (!
#line 31613 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
            return -1;
          return 10412; /* *vpdpbsuds_v8si_maskz */

        case 5:
          if (!
#line 31613 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
            return -1;
          return 10418; /* *vpdpbsuds_v4si_maskz */

        default:
          return -1;
        }

    case 231:
      switch (pattern485 (x2))
        {
        case 0:
          if (!(
#line 31586 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256) && 
#line 678 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_512)))
            return -1;
          return 10389; /* vpdpbuud_v16si_mask */

        case 1:
          if (!
#line 31586 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
            return -1;
          return 10395; /* vpdpbuud_v8si_mask */

        case 2:
          if (!
#line 31586 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
            return -1;
          return 10401; /* vpdpbuud_v4si_mask */

        case 3:
          if (!(
#line 31613 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256) && 
#line 678 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_512)))
            return -1;
          return 10407; /* *vpdpbuud_v16si_maskz */

        case 4:
          if (!
#line 31613 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
            return -1;
          return 10413; /* *vpdpbuud_v8si_maskz */

        case 5:
          if (!
#line 31613 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
            return -1;
          return 10419; /* *vpdpbuud_v4si_maskz */

        default:
          return -1;
        }

    case 232:
      switch (pattern485 (x2))
        {
        case 0:
          if (!(
#line 31586 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256) && 
#line 678 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_512)))
            return -1;
          return 10390; /* vpdpbuuds_v16si_mask */

        case 1:
          if (!
#line 31586 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
            return -1;
          return 10396; /* vpdpbuuds_v8si_mask */

        case 2:
          if (!
#line 31586 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
            return -1;
          return 10402; /* vpdpbuuds_v4si_mask */

        case 3:
          if (!(
#line 31613 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256) && 
#line 678 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_512)))
            return -1;
          return 10408; /* *vpdpbuuds_v16si_maskz */

        case 4:
          if (!
#line 31613 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
            return -1;
          return 10414; /* *vpdpbuuds_v8si_maskz */

        case 5:
          if (!
#line 31613 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
            return -1;
          return 10420; /* *vpdpbuuds_v4si_maskz */

        default:
          return -1;
        }

    case 233:
      switch (pattern485 (x2))
        {
        case 0:
          if (!(
#line 31995 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256) && 
#line 678 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_512)))
            return -1;
          return 10539; /* vpdpwusd_v16si_mask */

        case 1:
          if (!
#line 31995 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
            return -1;
          return 10545; /* vpdpwusd_v8si_mask */

        case 2:
          if (!
#line 31995 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
            return -1;
          return 10551; /* vpdpwusd_v4si_mask */

        case 3:
          if (!(
#line 32022 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256) && 
#line 678 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_512)))
            return -1;
          return 10557; /* *vpdpwusd_v16si_maskz */

        case 4:
          if (!
#line 32022 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
            return -1;
          return 10563; /* *vpdpwusd_v8si_maskz */

        case 5:
          if (!
#line 32022 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
            return -1;
          return 10569; /* *vpdpwusd_v4si_maskz */

        default:
          return -1;
        }

    case 234:
      switch (pattern485 (x2))
        {
        case 0:
          if (!(
#line 31995 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256) && 
#line 678 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_512)))
            return -1;
          return 10540; /* vpdpwusds_v16si_mask */

        case 1:
          if (!
#line 31995 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
            return -1;
          return 10546; /* vpdpwusds_v8si_mask */

        case 2:
          if (!
#line 31995 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
            return -1;
          return 10552; /* vpdpwusds_v4si_mask */

        case 3:
          if (!(
#line 32022 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256) && 
#line 678 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_512)))
            return -1;
          return 10558; /* *vpdpwusds_v16si_maskz */

        case 4:
          if (!
#line 32022 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
            return -1;
          return 10564; /* *vpdpwusds_v8si_maskz */

        case 5:
          if (!
#line 32022 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
            return -1;
          return 10570; /* *vpdpwusds_v4si_maskz */

        default:
          return -1;
        }

    case 235:
      switch (pattern485 (x2))
        {
        case 0:
          if (!(
#line 31995 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256) && 
#line 678 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_512)))
            return -1;
          return 10541; /* vpdpwsud_v16si_mask */

        case 1:
          if (!
#line 31995 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
            return -1;
          return 10547; /* vpdpwsud_v8si_mask */

        case 2:
          if (!
#line 31995 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
            return -1;
          return 10553; /* vpdpwsud_v4si_mask */

        case 3:
          if (!(
#line 32022 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256) && 
#line 678 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_512)))
            return -1;
          return 10559; /* *vpdpwsud_v16si_maskz */

        case 4:
          if (!
#line 32022 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
            return -1;
          return 10565; /* *vpdpwsud_v8si_maskz */

        case 5:
          if (!
#line 32022 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
            return -1;
          return 10571; /* *vpdpwsud_v4si_maskz */

        default:
          return -1;
        }

    case 236:
      switch (pattern485 (x2))
        {
        case 0:
          if (!(
#line 31995 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256) && 
#line 678 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_512)))
            return -1;
          return 10542; /* vpdpwsuds_v16si_mask */

        case 1:
          if (!
#line 31995 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
            return -1;
          return 10548; /* vpdpwsuds_v8si_mask */

        case 2:
          if (!
#line 31995 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
            return -1;
          return 10554; /* vpdpwsuds_v4si_mask */

        case 3:
          if (!(
#line 32022 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256) && 
#line 678 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_512)))
            return -1;
          return 10560; /* *vpdpwsuds_v16si_maskz */

        case 4:
          if (!
#line 32022 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
            return -1;
          return 10566; /* *vpdpwsuds_v8si_maskz */

        case 5:
          if (!
#line 32022 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
            return -1;
          return 10572; /* *vpdpwsuds_v4si_maskz */

        default:
          return -1;
        }

    case 237:
      switch (pattern485 (x2))
        {
        case 0:
          if (!(
#line 31995 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256) && 
#line 678 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_512)))
            return -1;
          return 10543; /* vpdpwuud_v16si_mask */

        case 1:
          if (!
#line 31995 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
            return -1;
          return 10549; /* vpdpwuud_v8si_mask */

        case 2:
          if (!
#line 31995 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
            return -1;
          return 10555; /* vpdpwuud_v4si_mask */

        case 3:
          if (!(
#line 32022 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256) && 
#line 678 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_512)))
            return -1;
          return 10561; /* *vpdpwuud_v16si_maskz */

        case 4:
          if (!
#line 32022 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
            return -1;
          return 10567; /* *vpdpwuud_v8si_maskz */

        case 5:
          if (!
#line 32022 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
            return -1;
          return 10573; /* *vpdpwuud_v4si_maskz */

        default:
          return -1;
        }

    case 238:
      switch (pattern485 (x2))
        {
        case 0:
          if (!(
#line 31995 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256) && 
#line 678 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_512)))
            return -1;
          return 10544; /* vpdpwuuds_v16si_mask */

        case 1:
          if (!
#line 31995 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
            return -1;
          return 10550; /* vpdpwuuds_v8si_mask */

        case 2:
          if (!
#line 31995 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
            return -1;
          return 10556; /* vpdpwuuds_v4si_mask */

        case 3:
          if (!(
#line 32022 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256) && 
#line 678 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_512)))
            return -1;
          return 10562; /* *vpdpwuuds_v16si_maskz */

        case 4:
          if (!
#line 32022 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
            return -1;
          return 10568; /* *vpdpwuuds_v8si_maskz */

        case 5:
          if (!
#line 32022 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
            return -1;
          return 10574; /* *vpdpwuuds_v4si_maskz */

        default:
          return -1;
        }

    case 244:
      return recog_139 (x1, insn, pnum_clobbers);

    case 278:
      x5 = XVECEXP (x3, 0, 0);
      operands[1] = x5;
      x6 = XVECEXP (x3, 0, 1);
      operands[2] = x6;
      x7 = XVECEXP (x3, 0, 2);
      operands[3] = x7;
      if (!const_0_to_255_operand (operands[3], E_SImode))
        return -1;
      x8 = XEXP (x2, 1);
      operands[4] = x8;
      x4 = XEXP (x2, 2);
      operands[5] = x4;
      switch (GET_MODE (operands[0]))
        {
        case E_V32BFmode:
          if (pattern1281 (x2, 
E_SImode, 
E_V32BFmode) != 0
              || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 32637 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256) && 
#line 565 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_512))))
            return -1;
          return 10930; /* avx10_2_minmaxnepbf16_v32bf_mask */

        case E_V16BFmode:
          if (pattern1281 (x2, 
E_HImode, 
E_V16BFmode) != 0
              || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 32637 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256)))
            return -1;
          return 10932; /* avx10_2_minmaxnepbf16_v16bf_mask */

        case E_V8BFmode:
          if (pattern1281 (x2, 
E_QImode, 
E_V8BFmode) != 0
              || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 32637 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256)))
            return -1;
          return 10934; /* avx10_2_minmaxnepbf16_v8bf_mask */

        default:
          return -1;
        }

    case 279:
      return recog_134 (x1, insn, pnum_clobbers);

    default:
      return -1;
    }
}

 int
recog_170 (rtx x1 ATTRIBUTE_UNUSED,
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
  if (pattern929 (x4) != 0)
    return -1;
  x5 = XEXP (x2, 1);
  operands[2] = x5;
  x6 = XEXP (x2, 2);
  operands[3] = x6;
  if (!register_operand (operands[3], E_QImode))
    return -1;
  x7 = XVECEXP (x4, 0, 0);
  switch (XWINT (x7, 0))
    {
    case 8L:
      x8 = XVECEXP (x4, 0, 1);
      if (XWINT (x8, 0) != 9L)
        return -1;
      x9 = XVECEXP (x4, 0, 2);
      if (XWINT (x9, 0) != 10L)
        return -1;
      x10 = XVECEXP (x4, 0, 3);
      if (XWINT (x10, 0) != 11L)
        return -1;
      x11 = XVECEXP (x4, 0, 4);
      if (XWINT (x11, 0) != 12L)
        return -1;
      x12 = XVECEXP (x4, 0, 5);
      if (XWINT (x12, 0) != 13L)
        return -1;
      x13 = XVECEXP (x4, 0, 6);
      if (XWINT (x13, 0) != 14L)
        return -1;
      x14 = XVECEXP (x4, 0, 7);
      if (XWINT (x14, 0) != 15L)
        return -1;
      switch (pattern1818 (x2))
        {
        case 0:
          if (!(
#line 12691 "../../gcc/config/i386/sse.md"
(TARGET_AVX512DQ
   && (!MEM_P (operands[0]) || rtx_equal_p (operands[0], operands[2]))) && 
#line 722 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return -1;
          return 5350; /* vec_extract_hi_v16sf_mask */

        case 1:
          if (!(
#line 12691 "../../gcc/config/i386/sse.md"
(TARGET_AVX512DQ
   && (!MEM_P (operands[0]) || rtx_equal_p (operands[0], operands[2]))) && 
#line 722 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return -1;
          return 5351; /* vec_extract_hi_v16si_mask */

        default:
          return -1;
        }

    case 0L:
      x8 = XVECEXP (x4, 0, 1);
      if (XWINT (x8, 0) != 1L
          || pattern1557 (x4) != 0)
        return -1;
      switch (pattern1818 (x2))
        {
        case 0:
          if (!(
#line 12795 "../../gcc/config/i386/sse.md"
(TARGET_AVX512DQ
   && (!MEM_P (operands[0]) || rtx_equal_p (operands[0], operands[2]))) && 
#line 722 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return -1;
          return 5354; /* vec_extract_lo_v16sf_mask */

        case 1:
          if (!(
#line 12795 "../../gcc/config/i386/sse.md"
(TARGET_AVX512DQ
   && (!MEM_P (operands[0]) || rtx_equal_p (operands[0], operands[2]))) && 
#line 722 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return -1;
          return 5355; /* vec_extract_lo_v16si_mask */

        default:
          return -1;
        }

    default:
      return -1;
    }
}

 int
recog_175 (rtx x1 ATTRIBUTE_UNUSED,
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
  x5 = XVECEXP (x4, 0, 4);
  if (GET_CODE (x5) != CONST_INT)
    return -1;
  operands[6] = x5;
  res = recog_174 (x1, insn, pnum_clobbers);
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
      || pattern1473 (x4) != 0
      || pattern755 (x2, 
E_V16HImode) != 0
      || pattern900 (x4) != 0)
    return -1;
  x9 = XVECEXP (x4, 0, 8);
  operands[6] = x9;
  if (!const_8_to_11_operand (operands[6], E_VOIDmode))
    return -1;
  x10 = XVECEXP (x4, 0, 9);
  operands[7] = x10;
  if (!const_8_to_11_operand (operands[7], E_VOIDmode))
    return -1;
  x11 = XVECEXP (x4, 0, 10);
  operands[8] = x11;
  if (!const_8_to_11_operand (operands[8], E_VOIDmode))
    return -1;
  x12 = XVECEXP (x4, 0, 11);
  operands[9] = x12;
  if (!const_8_to_11_operand (operands[9], E_VOIDmode))
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
#line 20780 "../../gcc/config/i386/sse.md"
(TARGET_AVX2
   && TARGET_AVX512BW && TARGET_AVX512VL
   && INTVAL (operands[2]) + 8 == INTVAL (operands[6])
   && INTVAL (operands[3]) + 8 == INTVAL (operands[7])
   && INTVAL (operands[4]) + 8 == INTVAL (operands[8])
   && INTVAL (operands[5]) + 8 == INTVAL (operands[9]))))
    return -1;
  return 8443; /* avx2_pshuflw_1_mask */
}

 int
recog_181 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12, x13, x14, x15;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  switch (GET_CODE (x4))
    {
    case REG:
    case SUBREG:
      x5 = XEXP (x3, 1);
      switch (GET_CODE (x5))
        {
        case CONST_INT:
        case CONST_DOUBLE:
        case CONST_VECTOR:
        case REG:
        case SUBREG:
        case MEM:
          operands[3] = x5;
          x6 = XEXP (x2, 2);
          if (x6 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
            return -1;
          operands[2] = x4;
          x7 = XEXP (x3, 2);
          operands[4] = x7;
          if (!register_operand (operands[4], E_QImode))
            return -1;
          x8 = XEXP (x2, 1);
          operands[1] = x8;
          switch (GET_MODE (operands[0]))
            {
            case E_V8HFmode:
              if (pattern1282 (x2, 
E_V8HFmode) != 0
                  || !(
#line 1692 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 479 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16)))
                return -1;
              return 2491; /* avx512f_movhf_mask */

            case E_V4SFmode:
              if (pattern1282 (x2, 
E_V4SFmode) != 0
                  || !
#line 1692 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F))
                return -1;
              return 2492; /* avx512f_movsf_mask */

            case E_V2DFmode:
              if (pattern1282 (x2, 
E_V2DFmode) != 0
                  || !(
#line 1692 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 480 "../../gcc/config/i386/sse.md"
(TARGET_SSE2)))
                return -1;
              return 2493; /* avx512f_movdf_mask */

            default:
              return -1;
            }

        case VEC_DUPLICATE:
          operands[1] = x4;
          x9 = XEXP (x5, 0);
          operands[2] = x9;
          x7 = XEXP (x3, 2);
          operands[3] = x7;
          if (!const_int_operand (operands[3], E_SImode))
            return -1;
          x8 = XEXP (x2, 1);
          operands[4] = x8;
          x6 = XEXP (x2, 2);
          operands[5] = x6;
          switch (GET_MODE (operands[0]))
            {
            case E_V8DFmode:
              if (pattern1283 (x2, 
E_V8DFmode, 
E_V2DFmode, 
E_QImode) != 0
                  || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 20039 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 12393 "../../gcc/config/i386/sse.md"
(TARGET_AVX512DQ && TARGET_EVEX512))))
                return -1;
              return 8387; /* avx512dq_vinsertf64x2_1_mask */

            case E_V8DImode:
              if (pattern1283 (x2, 
E_V8DImode, 
E_V2DImode, 
E_QImode) != 0
                  || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 20039 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 12394 "../../gcc/config/i386/sse.md"
(TARGET_AVX512DQ && TARGET_EVEX512))))
                return -1;
              return 8389; /* avx512dq_vinserti64x2_1_mask */

            case E_V16SFmode:
              if (pattern1283 (x2, 
E_V16SFmode, 
E_V4SFmode, 
E_HImode) != 0
                  || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 20039 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 12395 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512))))
                return -1;
              return 8391; /* avx512f_vinsertf32x4_1_mask */

            case E_V16SImode:
              if (pattern1283 (x2, 
E_V16SImode, 
E_V4SImode, 
E_HImode) != 0
                  || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 20039 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 12395 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512))))
                return -1;
              return 8393; /* avx512f_vinserti32x4_1_mask */

            default:
              return -1;
            }

        default:
          return -1;
        }

    case VEC_DUPLICATE:
      x10 = XEXP (x4, 0);
      switch (GET_CODE (x10))
        {
        case SUBREG:
        case MEM:
          operands[1] = x10;
          x6 = XEXP (x2, 2);
          if (x6 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
            return -1;
          x5 = XEXP (x3, 1);
          operands[2] = x5;
          x7 = XEXP (x3, 2);
          operands[3] = x7;
          if (!register_operand (operands[3], E_QImode))
            return -1;
          x8 = XEXP (x2, 1);
          operands[4] = x8;
          switch (GET_MODE (operands[0]))
            {
            case E_V8HFmode:
              if (pattern1284 (x2, 
E_V8HFmode, 
E_HFmode) != 0
                  || !(
#line 1721 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 1355 "../../gcc/config/i386/i386.md"
(TARGET_AVX512FP16)))
                return -1;
              return 2494; /* *avx512f_loadhf_mask */

            case E_V4SFmode:
              if (pattern1284 (x2, 
E_V4SFmode, 
E_SFmode) != 0
                  || !
#line 1721 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F))
                return -1;
              return 2495; /* *avx512f_loadsf_mask */

            case E_V2DFmode:
              if (pattern1284 (x2, 
E_V2DFmode, 
E_DFmode) != 0
                  || !
#line 1721 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F))
                return -1;
              return 2496; /* *avx512f_loaddf_mask */

            default:
              return -1;
            }

        case SQRT:
          x6 = XEXP (x2, 2);
          if (x6 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
            return -1;
          x11 = XEXP (x10, 0);
          operands[1] = x11;
          x5 = XEXP (x3, 1);
          operands[3] = x5;
          x7 = XEXP (x3, 2);
          operands[4] = x7;
          if (!register_operand (operands[4], E_QImode))
            return -1;
          x8 = XEXP (x2, 1);
          operands[2] = x8;
          switch (GET_MODE (operands[0]))
            {
            case E_V8HFmode:
              if (pattern1285 (x2, 
E_V8HFmode, 
E_HFmode) != 0
                  || !(
#line 378 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 3102 "../../gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 479 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16))))
                return -1;
              return 2948; /* *avx512fp16_vmsqrtv8hf2_mask */

            case E_V4SFmode:
              if (pattern1285 (x2, 
E_V4SFmode, 
E_SFmode) != 0
                  || !(
#line 378 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 3102 "../../gcc/config/i386/sse.md"
(TARGET_SSE)))
                return -1;
              return 2952; /* *sse_vmsqrtv4sf2_mask */

            case E_V2DFmode:
              if (pattern1285 (x2, 
E_V2DFmode, 
E_DFmode) != 0
                  || !(
#line 378 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 3102 "../../gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 480 "../../gcc/config/i386/sse.md"
(TARGET_SSE2))))
                return -1;
              return 2956; /* *sse2_vmsqrtv2df2_mask */

            default:
              return -1;
            }

        case UNSPEC:
          if (XVECLEN (x10, 0) != 1
              || XINT (x10, 1) != 55
              || GET_MODE (x10) != E_HFmode)
            return -1;
          x6 = XEXP (x2, 2);
          if (x6 != const_int_rtx[MAX_SAVED_CONST_INT + 1]
              || pattern1003 (x2, 
E_V8HFmode) != 0)
            return -1;
          x12 = XVECEXP (x10, 0, 0);
          operands[1] = x12;
          if (!nonimmediate_operand (operands[1], E_HFmode))
            return -1;
          x5 = XEXP (x3, 1);
          operands[3] = x5;
          if (!nonimm_or_0_operand (operands[3], E_V8HFmode))
            return -1;
          x7 = XEXP (x3, 2);
          operands[4] = x7;
          if (!register_operand (operands[4], E_QImode))
            return -1;
          x8 = XEXP (x2, 1);
          operands[2] = x8;
          if (!register_operand (operands[2], E_V8HFmode)
              || !(
#line 378 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 3251 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16)))
            return -1;
          return 2987; /* *avx512fp16_vmrsqrtv8hf2 */

        case FLOAT_EXTEND:
          x6 = XEXP (x2, 2);
          if (x6 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
            return -1;
          x5 = XEXP (x3, 1);
          operands[3] = x5;
          x7 = XEXP (x3, 2);
          operands[4] = x7;
          if (!register_operand (operands[4], E_QImode))
            return -1;
          x8 = XEXP (x2, 1);
          operands[2] = x8;
          x11 = XEXP (x10, 0);
          switch (GET_CODE (x11))
            {
            case VEC_SELECT:
              if (GET_MODE (x11) != E_HFmode)
                return -1;
              x13 = XEXP (x11, 1);
              if (GET_CODE (x13) != PARALLEL
                  || XVECLEN (x13, 0) != 1)
                return -1;
              x14 = XVECEXP (x13, 0, 0);
              if (x14 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
                return -1;
              x15 = XEXP (x11, 0);
              operands[1] = x15;
              if (!register_operand (operands[1], E_V8HFmode))
                return -1;
              switch (GET_MODE (operands[0]))
                {
                case E_V2DFmode:
                  if (pattern1460 (x2, 
E_V2DFmode, 
E_DFmode) != 0
                      || !(
#line 378 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 8298 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16)))
                    return -1;
                  return 4756; /* avx512fp16_vcvtsh2sd_mask */

                case E_V4SFmode:
                  if (pattern1460 (x2, 
E_V4SFmode, 
E_SFmode) != 0
                      || !(
#line 378 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 8298 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16)))
                    return -1;
                  return 4760; /* avx512fp16_vcvtsh2ss_mask */

                default:
                  return -1;
                }

            case SUBREG:
            case MEM:
              operands[1] = x11;
              if (!memory_operand (operands[1], E_HFmode))
                return -1;
              switch (GET_MODE (operands[0]))
                {
                case E_V2DFmode:
                  if (pattern1460 (x2, 
E_V2DFmode, 
E_DFmode) != 0
                      || !(
#line 378 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 8312 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16)))
                    return -1;
                  return 4764; /* avx512fp16_vcvtsh2sd_mask_mem */

                case E_V4SFmode:
                  if (pattern1460 (x2, 
E_V4SFmode, 
E_SFmode) != 0
                      || !(
#line 378 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 8312 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16)))
                    return -1;
                  return 4766; /* avx512fp16_vcvtsh2ss_mask_mem */

                default:
                  return -1;
                }

            default:
              return -1;
            }

        case FLOAT_TRUNCATE:
          x11 = XEXP (x10, 0);
          switch (GET_CODE (x11))
            {
            case VEC_SELECT:
              x13 = XEXP (x11, 1);
              if (GET_CODE (x13) != PARALLEL
                  || XVECLEN (x13, 0) != 1)
                return -1;
              x14 = XVECEXP (x13, 0, 0);
              if (x14 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
                return -1;
              x6 = XEXP (x2, 2);
              if (x6 != const_int_rtx[MAX_SAVED_CONST_INT + 1]
                  || pattern883 (x2, 
E_HFmode, 
E_V8HFmode) != 0)
                return -1;
              x15 = XEXP (x11, 0);
              operands[1] = x15;
              x5 = XEXP (x3, 1);
              operands[3] = x5;
              if (!nonimm_or_0_operand (operands[3], E_V8HFmode))
                return -1;
              x7 = XEXP (x3, 2);
              operands[4] = x7;
              if (!register_operand (operands[4], E_QImode))
                return -1;
              x8 = XEXP (x2, 1);
              operands[2] = x8;
              if (!register_operand (operands[2], E_V8HFmode))
                return -1;
              switch (GET_MODE (x11))
                {
                case E_DFmode:
                  if (!register_operand (operands[1], E_V2DFmode)
                      || !(
#line 378 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 8328 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16)))
                    return -1;
                  return 4769; /* avx512fp16_vcvtsd2sh_mask */

                case E_SFmode:
                  if (!register_operand (operands[1], E_V4SFmode)
                      || !(
#line 378 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 8328 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16)))
                    return -1;
                  return 4773; /* avx512fp16_vcvtss2sh_mask */

                default:
                  return -1;
                }

            case REG:
            case SUBREG:
            case MEM:
              x7 = XEXP (x3, 2);
              switch (GET_CODE (x7))
                {
                case REG:
                case SUBREG:
                  operands[4] = x7;
                  if (!register_operand (operands[4], E_QImode))
                    return -1;
                  x6 = XEXP (x2, 2);
                  if (x6 != const_int_rtx[MAX_SAVED_CONST_INT + 1]
                      || pattern883 (x2, 
E_HFmode, 
E_V8HFmode) != 0)
                    return -1;
                  operands[1] = x11;
                  x5 = XEXP (x3, 1);
                  operands[3] = x5;
                  if (!nonimm_or_0_operand (operands[3], E_V8HFmode))
                    return -1;
                  x8 = XEXP (x2, 1);
                  operands[2] = x8;
                  if (!register_operand (operands[2], E_V8HFmode))
                    return -1;
                  switch (GET_MODE (operands[1]))
                    {
                    case E_SFmode:
                      if (!memory_operand (operands[1], E_SFmode)
                          || !(
#line 378 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 8342 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16)))
                        return -1;
                      return 4776; /* avx512fp16_vcvtss2sh_mask_mem */

                    case E_DFmode:
                      if (!memory_operand (operands[1], E_DFmode)
                          || !(
#line 378 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 8342 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16)))
                        return -1;
                      return 4778; /* avx512fp16_vcvtsd2sh_mask_mem */

                    default:
                      return -1;
                    }

                case CONST_INT:
                  if (XWINT (x7, 0) != 1L
                      || pattern883 (x2, 
E_V2SFmode, 
E_V4SFmode) != 0
                      || pattern1370 (x2, 
E_V4SFmode, 
E_V2DFmode) != 0
                      || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 10003 "../../gcc/config/i386/sse.md"
(TARGET_SSE2)))
                    return -1;
                  return 5163; /* sse2_cvtsd2ss_mask */

                default:
                  return -1;
                }

            default:
              return -1;
            }

        default:
          return -1;
        }

    case PLUS:
      switch (pattern304 (x2))
        {
        case 0:
          if (!(
#line 378 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 2710 "../../gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 479 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16))))
            return -1;
          return 2757; /* avx512fp16_vmaddv8hf3_mask */

        case 1:
          if (!(
#line 378 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 2710 "../../gcc/config/i386/sse.md"
(TARGET_SSE)))
            return -1;
          return 2765; /* sse_vmaddv4sf3_mask */

        case 2:
          if (!(
#line 378 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 2710 "../../gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 480 "../../gcc/config/i386/sse.md"
(TARGET_SSE2))))
            return -1;
          return 2773; /* sse2_vmaddv2df3_mask */

        default:
          return -1;
        }

    case MINUS:
      switch (pattern304 (x2))
        {
        case 0:
          if (!(
#line 378 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 2710 "../../gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 479 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16))))
            return -1;
          return 2761; /* avx512fp16_vmsubv8hf3_mask */

        case 1:
          if (!(
#line 378 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 2710 "../../gcc/config/i386/sse.md"
(TARGET_SSE)))
            return -1;
          return 2769; /* sse_vmsubv4sf3_mask */

        case 2:
          if (!(
#line 378 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 2710 "../../gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 480 "../../gcc/config/i386/sse.md"
(TARGET_SSE2))))
            return -1;
          return 2777; /* sse2_vmsubv2df3_mask */

        default:
          return -1;
        }

    case MULT:
      switch (pattern304 (x2))
        {
        case 0:
          if (!(
#line 378 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 2801 "../../gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 479 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16))))
            return -1;
          return 2823; /* avx512fp16_vmmulv8hf3_mask */

        case 1:
          if (!(
#line 378 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 2801 "../../gcc/config/i386/sse.md"
(TARGET_SSE)))
            return -1;
          return 2831; /* sse_vmmulv4sf3_mask */

        case 2:
          if (!(
#line 378 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 2801 "../../gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 480 "../../gcc/config/i386/sse.md"
(TARGET_SSE2))))
            return -1;
          return 2839; /* sse2_vmmulv2df3_mask */

        default:
          return -1;
        }

    case DIV:
      switch (pattern304 (x2))
        {
        case 0:
          if (!(
#line 378 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 2801 "../../gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 479 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16))))
            return -1;
          return 2827; /* avx512fp16_vmdivv8hf3_mask */

        case 1:
          if (!(
#line 378 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 2801 "../../gcc/config/i386/sse.md"
(TARGET_SSE)))
            return -1;
          return 2835; /* sse_vmdivv4sf3_mask */

        case 2:
          if (!(
#line 378 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 2801 "../../gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 480 "../../gcc/config/i386/sse.md"
(TARGET_SSE2))))
            return -1;
          return 2843; /* sse2_vmdivv2df3_mask */

        default:
          return -1;
        }

    case UNSPEC:
      return recog_147 (x1, insn, pnum_clobbers);

    case SQRT:
      x6 = XEXP (x2, 2);
      if (x6 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
        return -1;
      x10 = XEXP (x4, 0);
      operands[1] = x10;
      x5 = XEXP (x3, 1);
      operands[3] = x5;
      x7 = XEXP (x3, 2);
      operands[4] = x7;
      if (!register_operand (operands[4], E_QImode))
        return -1;
      x8 = XEXP (x2, 1);
      operands[2] = x8;
      switch (GET_MODE (operands[0]))
        {
        case E_V8HFmode:
          if (pattern1212 (x2, 
E_V8HFmode) != 0
              || !(
#line 378 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 3083 "../../gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 479 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16))))
            return -1;
          return 2936; /* avx512fp16_vmsqrtv8hf2_mask */

        case E_V4SFmode:
          if (pattern1212 (x2, 
E_V4SFmode) != 0
              || !(
#line 378 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 3083 "../../gcc/config/i386/sse.md"
(TARGET_SSE)))
            return -1;
          return 2940; /* sse_vmsqrtv4sf2_mask */

        case E_V2DFmode:
          if (pattern1212 (x2, 
E_V2DFmode) != 0
              || !(
#line 378 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 3083 "../../gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 480 "../../gcc/config/i386/sse.md"
(TARGET_SSE2))))
            return -1;
          return 2944; /* sse2_vmsqrtv2df2_mask */

        default:
          return -1;
        }

    case SMAX:
      switch (pattern304 (x2))
        {
        case 0:
          if (!(
#line 378 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 3467 "../../gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 479 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16))))
            return -1;
          return 3128; /* *avx512fp16_vmsmaxv8hf3_mask */

        case 1:
          if (!(
#line 378 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 3467 "../../gcc/config/i386/sse.md"
(TARGET_SSE)))
            return -1;
          return 3136; /* *sse_vmsmaxv4sf3_mask */

        case 2:
          if (!(
#line 378 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 3467 "../../gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 480 "../../gcc/config/i386/sse.md"
(TARGET_SSE2))))
            return -1;
          return 3144; /* *sse2_vmsmaxv2df3_mask */

        default:
          return -1;
        }

    case SMIN:
      switch (pattern304 (x2))
        {
        case 0:
          if (!(
#line 378 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 3467 "../../gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 479 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16))))
            return -1;
          return 3132; /* *avx512fp16_vmsminv8hf3_mask */

        case 1:
          if (!(
#line 378 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 3467 "../../gcc/config/i386/sse.md"
(TARGET_SSE)))
            return -1;
          return 3140; /* *sse_vmsminv4sf3_mask */

        case 2:
          if (!(
#line 378 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 3467 "../../gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 480 "../../gcc/config/i386/sse.md"
(TARGET_SSE2))))
            return -1;
          return 3148; /* *sse2_vmsminv2df3_mask */

        default:
          return -1;
        }

    case FMA:
      return recog_146 (x1, insn, pnum_clobbers);

    case FLOAT_EXTEND:
      if (pattern305 (x4, 
1, 
E_V2SFmode, 
E_V2DFmode) != 0)
        return -1;
      x7 = XEXP (x3, 2);
      if (x7 != const_int_rtx[MAX_SAVED_CONST_INT + 1]
          || !register_operand (operands[0], E_V2DFmode)
          || GET_MODE (x2) != E_V2DFmode
          || GET_MODE (x3) != E_V2DFmode
          || pattern1370 (x2, 
E_V2DFmode, 
E_V4SFmode) != 0
          || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 10047 "../../gcc/config/i386/sse.md"
(TARGET_SSE2)))
        return -1;
      return 5168; /* sse2_cvtss2sd_mask */

    default:
      return -1;
    }
}

 int
recog_196 (rtx x1 ATTRIBUTE_UNUSED,
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
  switch (GET_CODE (operands[2]))
    {
    case REG:
    case SUBREG:
    case MEM:
    case VEC_DUPLICATE:
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
          return 3723; /* *xorv8sf3_mask */

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
          return 3729; /* *xorv4sf3_mask */

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
          return 3735; /* *xorv4df3_mask */

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
          return 3741; /* *xorv2df3_mask */

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
          return 3753; /* *xorv16sf3_mask */

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
          return 3759; /* *xorv8df3_mask */

        case E_V16SImode:
          if (pattern486 (x2, 
E_V16SImode, 
E_HImode) != 0
              || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 18731 "../../gcc/config/i386/sse.md"
(TARGET_SSE && (64 == 64 || TARGET_AVX512VL)
   && ix86_binary_operator_ok (XOR, V16SImode, operands)) && 
#line 808 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512))))
            return -1;
          return 8006; /* *xorv16si3_mask */

        case E_V8SImode:
          if (pattern486 (x2, 
E_V8SImode, 
E_QImode) != 0
              || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 18731 "../../gcc/config/i386/sse.md"
(TARGET_SSE && (32 == 64 || TARGET_AVX512VL)
   && ix86_binary_operator_ok (XOR, V8SImode, operands)) && 
#line 808 "../../gcc/config/i386/sse.md"
(TARGET_AVX))))
            return -1;
          return 8012; /* *xorv8si3_mask */

        case E_V4SImode:
          if (pattern486 (x2, 
E_V4SImode, 
E_QImode) != 0
              || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 18731 "../../gcc/config/i386/sse.md"
(TARGET_SSE && (16 == 64 || TARGET_AVX512VL)
   && ix86_binary_operator_ok (XOR, V4SImode, operands))))
            return -1;
          return 8018; /* *xorv4si3_mask */

        case E_V8DImode:
          if (pattern486 (x2, 
E_V8DImode, 
E_QImode) != 0
              || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 18731 "../../gcc/config/i386/sse.md"
(TARGET_SSE && (64 == 64 || TARGET_AVX512VL)
   && ix86_binary_operator_ok (XOR, V8DImode, operands)) && 
#line 809 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512))))
            return -1;
          return 8024; /* *xorv8di3_mask */

        case E_V4DImode:
          if (pattern486 (x2, 
E_V4DImode, 
E_QImode) != 0
              || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 18731 "../../gcc/config/i386/sse.md"
(TARGET_SSE && (32 == 64 || TARGET_AVX512VL)
   && ix86_binary_operator_ok (XOR, V4DImode, operands)) && 
#line 809 "../../gcc/config/i386/sse.md"
(TARGET_AVX))))
            return -1;
          return 8030; /* *xorv4di3_mask */

        case E_V2DImode:
          if (pattern486 (x2, 
E_V2DImode, 
E_QImode) != 0
              || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 18731 "../../gcc/config/i386/sse.md"
(TARGET_SSE && (16 == 64 || TARGET_AVX512VL)
   && ix86_binary_operator_ok (XOR, V2DImode, operands))))
            return -1;
          return 8036; /* *xorv2di3_mask */

        default:
          return -1;
        }

    case CONST_VECTOR:
      switch (GET_MODE (operands[0]))
        {
        case E_V16SImode:
          if (pattern1017 (x2, 
E_V16SImode, 
E_HImode) != 0
              || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 18358 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (64 == 64 || TARGET_AVX512VL || TARGET_EVEX512)
   && (!true
       || SImode == SImode
       || SImode == DImode)) && 
#line 569 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512))))
            return -1;
          return 7954; /* one_cmplv16si2_mask */

        case E_V8DImode:
          if (pattern1017 (x2, 
E_V8DImode, 
E_QImode) != 0
              || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 18358 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (64 == 64 || TARGET_AVX512VL || TARGET_EVEX512)
   && (!true
       || DImode == SImode
       || DImode == DImode)) && 
#line 570 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512))))
            return -1;
          return 7956; /* one_cmplv8di2_mask */

        case E_V8SImode:
          if (pattern1017 (x2, 
E_V8SImode, 
E_QImode) != 0
              || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 18358 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (32 == 64 || TARGET_AVX512VL || TARGET_EVEX512)
   && (!true
       || SImode == SImode
       || SImode == DImode)) && 
#line 573 "../../gcc/config/i386/sse.md"
(TARGET_AVX))))
            return -1;
          return 7964; /* one_cmplv8si2_mask */

        case E_V4SImode:
          if (pattern1017 (x2, 
E_V4SImode, 
E_QImode) != 0
              || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 18358 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (16 == 64 || TARGET_AVX512VL || TARGET_EVEX512)
   && (!true
       || SImode == SImode
       || SImode == DImode))))
            return -1;
          return 7966; /* one_cmplv4si2_mask */

        case E_V4DImode:
          if (pattern1017 (x2, 
E_V4DImode, 
E_QImode) != 0
              || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 18358 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (32 == 64 || TARGET_AVX512VL || TARGET_EVEX512)
   && (!true
       || DImode == SImode
       || DImode == DImode)) && 
#line 574 "../../gcc/config/i386/sse.md"
(TARGET_AVX))))
            return -1;
          return 7968; /* one_cmplv4di2_mask */

        case E_V2DImode:
          if (pattern1017 (x2, 
E_V2DImode, 
E_QImode) != 0
              || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 18358 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (16 == 64 || TARGET_AVX512VL || TARGET_EVEX512)
   && (!true
       || DImode == SImode
       || DImode == DImode))))
            return -1;
          return 7970; /* one_cmplv2di2_mask */

        default:
          return -1;
        }

    default:
      return -1;
    }
}

 int
recog_206 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  switch (pattern321 (x2))
    {
    case 0:
      if (!register_operand (operands[0], E_V32HImode)
          || GET_MODE (x2) != E_V32HImode
          || !vector_operand (operands[1], E_V32HFmode)
          || !(
#line 7617 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && 1) && 
#line 758 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 4419; /* avx512fp16_vcvtph2w_v32hi */

    case 1:
      switch (pattern642 (x2, 
E_V16SImode))
        {
        case 0:
          if (!(
#line 7617 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && 1) && 
#line 758 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return -1;
          return 4427; /* avx512fp16_vcvtph2dq_v16si */

        case 1:
          if (!
#line 8695 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512))
            return -1;
          return 4834; /* avx512f_fix_notruncv16sfv16si */

        default:
          return -1;
        }

    case 2:
      if (!register_operand (operands[0], E_V8DImode)
          || GET_MODE (x2) != E_V8DImode)
        return -1;
      switch (GET_MODE (operands[1]))
        {
        case E_V8HFmode:
          if (!vector_operand (operands[1], E_V8HFmode)
              || !(
#line 7617 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && 1) && 
#line 758 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return -1;
          return 4435; /* avx512fp16_vcvtph2qq_v8di */

        case E_V8SFmode:
          if (!nonimmediate_operand (operands[1], E_V8SFmode)
              || !(
#line 8716 "../../gcc/config/i386/sse.md"
(TARGET_AVX512DQ && 1) && 
#line 627 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return -1;
          return 4848; /* *avx512dq_cvtps2qqv8di */

        case E_V8DFmode:
          if (!vector_operand (operands[1], E_V8DFmode)
              || !(
#line 9710 "../../gcc/config/i386/sse.md"
(TARGET_AVX512DQ && 1) && 
#line 537 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return -1;
          return 5094; /* fix_notruncv8dfv8di2 */

        default:
          return -1;
        }

    case 3:
      if (!register_operand (operands[0], E_V16HImode)
          || GET_MODE (x2) != E_V16HImode
          || !vector_operand (operands[1], E_V16HFmode)
          || !(
#line 7617 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && 1) && 
#line 759 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 4443; /* avx512fp16_vcvtph2w_v16hi */

    case 4:
      switch (pattern641 (x2))
        {
        case 0:
          if (!(
#line 7617 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && 1) && 
#line 759 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 4451; /* avx512fp16_vcvtph2dq_v8si */

        case 1:
          if (!(
#line 8679 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && 1 && 1) && 
#line 666 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 4828; /* avx_fix_notruncv8sfv8si */

        case 2:
          if (!
#line 9398 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512))
            return -1;
          return 4998; /* avx512f_cvtpd2dq512 */

        default:
          return -1;
        }

    case 5:
      if (!register_operand (operands[0], E_V4DImode)
          || GET_MODE (x2) != E_V4DImode)
        return -1;
      switch (GET_MODE (operands[1]))
        {
        case E_V8HFmode:
          if (!vector_operand (operands[1], E_V8HFmode)
              || !(
#line 7617 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && 1) && 
#line 760 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 4459; /* avx512fp16_vcvtph2qq_v4di */

        case E_V4SFmode:
          if (!nonimmediate_operand (operands[1], E_V4SFmode)
              || !(
#line 8716 "../../gcc/config/i386/sse.md"
(TARGET_AVX512DQ && 1) && 
#line 627 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 4852; /* *avx512dq_cvtps2qqv4di */

        case E_V4DFmode:
          if (!vector_operand (operands[1], E_V4DFmode)
              || !(
#line 9710 "../../gcc/config/i386/sse.md"
(TARGET_AVX512DQ && 1) && 
#line 537 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 5098; /* fix_notruncv4dfv4di2 */

        default:
          return -1;
        }

    case 6:
      if (!register_operand (operands[0], E_V8HImode)
          || GET_MODE (x2) != E_V8HImode
          || !vector_operand (operands[1], E_V8HFmode)
          || !(
#line 7617 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && 1) && 
#line 760 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 4465; /* avx512fp16_vcvtph2w_v8hi */

    case 7:
      if (!register_operand (operands[0], E_V4SImode)
          || GET_MODE (x2) != E_V4SImode)
        return -1;
      switch (GET_MODE (operands[1]))
        {
        case E_V8HFmode:
          if (!vector_operand (operands[1], E_V8HFmode)
              || !(
#line 7617 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && 1) && 
#line 761 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 4469; /* avx512fp16_vcvtph2dq_v4si */

        case E_V4SFmode:
          if (!vector_operand (operands[1], E_V4SFmode)
              || !
#line 8679 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && 1 && 1))
            return -1;
          return 4832; /* sse2_fix_notruncv4sfv4si */

        case E_V4DFmode:
          if (!vector_operand (operands[1], E_V4DFmode)
              || !
#line 9408 "../../gcc/config/i386/sse.md"
(TARGET_AVX && 1
   && (!false || TARGET_AVX10_2_256)))
            return -1;
          return 5002; /* avx_cvtpd2dq256 */

        default:
          return -1;
        }

    case 8:
      if (!register_operand (operands[0], E_V2DImode)
          || GET_MODE (x2) != E_V2DImode)
        return -1;
      switch (GET_MODE (operands[1]))
        {
        case E_V8HFmode:
          if (!vector_operand (operands[1], E_V8HFmode)
              || !(
#line 7617 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && 1) && 
#line 761 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 4473; /* avx512fp16_vcvtph2qq_v2di */

        case E_V2DFmode:
          if (!vector_operand (operands[1], E_V2DFmode)
              || !(
#line 9710 "../../gcc/config/i386/sse.md"
(TARGET_AVX512DQ && 1) && 
#line 537 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 5102; /* fix_notruncv2dfv2di2 */

        default:
          return -1;
        }

    case 9:
      if (!
#line 8729 "../../gcc/config/i386/sse.md"
(TARGET_AVX512DQ && TARGET_AVX512VL))
        return -1;
      return 4856; /* *avx512dq_cvtps2qqv2di */

    default:
      return -1;
    }
}

 int
recog_220 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XVECEXP (x2, 0, 0);
  x4 = XEXP (x3, 0);
  switch (XINT (x4, 1))
    {
    case 63:
      switch (pattern912 (x2))
        {
        case 0:
          if (!(
#line 286 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 3394 "../../gcc/config/i386/sse.md"
(TARGET_SSE
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
          return 3064; /* ieee_maxv32hf3_mask_round */

        case 1:
          if (!(
#line 286 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 3394 "../../gcc/config/i386/sse.md"
(TARGET_SSE
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
          return 3072; /* ieee_maxv16hf3_mask_round */

        case 2:
          if (!(
#line 286 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 3394 "../../gcc/config/i386/sse.md"
(TARGET_SSE
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
          return 3084; /* ieee_maxv16sf3_mask_round */

        case 3:
          if (!(
#line 286 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 3394 "../../gcc/config/i386/sse.md"
(TARGET_SSE
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
          return 3092; /* ieee_maxv8sf3_mask_round */

        case 4:
          if (!(
#line 286 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 3394 "../../gcc/config/i386/sse.md"
(TARGET_SSE
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
          return 3104; /* ieee_maxv8df3_mask_round */

        case 5:
          if (!(
#line 286 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 3394 "../../gcc/config/i386/sse.md"
(TARGET_SSE
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
          return 3112; /* ieee_maxv4df3_mask_round */

        case 6:
          if (!(
#line 486 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 3486 "../../gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 479 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16))))
            return -1;
          return 3153; /* avx512fp16_ieee_vmmaxv8hf3_round */

        case 7:
          if (!(
#line 486 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 3486 "../../gcc/config/i386/sse.md"
(TARGET_SSE)))
            return -1;
          return 3161; /* sse_ieee_vmmaxv4sf3_round */

        case 8:
          if (!(
#line 486 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 3486 "../../gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 480 "../../gcc/config/i386/sse.md"
(TARGET_SSE2))))
            return -1;
          return 3169; /* sse2_ieee_vmmaxv2df3_round */

        default:
          return -1;
        }

    case 62:
      switch (pattern912 (x2))
        {
        case 0:
          if (!(
#line 286 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 3394 "../../gcc/config/i386/sse.md"
(TARGET_SSE
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
          return 3068; /* ieee_minv32hf3_mask_round */

        case 1:
          if (!(
#line 286 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 3394 "../../gcc/config/i386/sse.md"
(TARGET_SSE
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
          return 3076; /* ieee_minv16hf3_mask_round */

        case 2:
          if (!(
#line 286 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 3394 "../../gcc/config/i386/sse.md"
(TARGET_SSE
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
          return 3088; /* ieee_minv16sf3_mask_round */

        case 3:
          if (!(
#line 286 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 3394 "../../gcc/config/i386/sse.md"
(TARGET_SSE
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
          return 3096; /* ieee_minv8sf3_mask_round */

        case 4:
          if (!(
#line 286 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 3394 "../../gcc/config/i386/sse.md"
(TARGET_SSE
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
          return 3108; /* ieee_minv8df3_mask_round */

        case 5:
          if (!(
#line 286 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 3394 "../../gcc/config/i386/sse.md"
(TARGET_SSE
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
          return 3116; /* ieee_minv4df3_mask_round */

        case 6:
          if (!(
#line 486 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 3486 "../../gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 479 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16))))
            return -1;
          return 3157; /* avx512fp16_ieee_vmminv8hf3_round */

        case 7:
          if (!(
#line 486 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 3486 "../../gcc/config/i386/sse.md"
(TARGET_SSE)))
            return -1;
          return 3165; /* sse_ieee_vmminv4sf3_round */

        case 8:
          if (!(
#line 486 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 3486 "../../gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 480 "../../gcc/config/i386/sse.md"
(TARGET_SSE2))))
            return -1;
          return 3173; /* sse2_ieee_vmminv2df3_round */

        default:
          return -1;
        }

    case 192:
      x5 = XVECEXP (x4, 0, 0);
      operands[1] = x5;
      x6 = XVECEXP (x4, 0, 1);
      operands[2] = x6;
      if (!const_0_to_255_operand (operands[2], E_SImode))
        return -1;
      x7 = XEXP (x3, 1);
      operands[3] = x7;
      x8 = XEXP (x3, 2);
      operands[4] = x8;
      x9 = XVECEXP (x2, 0, 1);
      operands[5] = x9;
      if (!const48_operand (operands[5], E_SImode))
        return -1;
      switch (GET_MODE (operands[0]))
        {
        case E_V32HFmode:
          if (pattern1551 (x2, 
E_V32HFmode, 
E_SImode) != 0
              || !(
#line 286 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 4025 "../../gcc/config/i386/sse.md"
((TARGET_AVX512DQ || (VALID_AVX512FP16_REG_MODE (V32HFmode))) && ((V32HFmode == V16SFmode
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
          return 3192; /* reducepv32hf_mask_round */

        case E_V16HFmode:
          if (pattern1551 (x2, 
E_V16HFmode, 
E_HImode) != 0
              || !(
#line 286 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 4025 "../../gcc/config/i386/sse.md"
((TARGET_AVX512DQ || (VALID_AVX512FP16_REG_MODE (V16HFmode))) && ((V16HFmode == V16SFmode
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
          return 3196; /* reducepv16hf_mask_round */

        case E_V16SFmode:
          if (pattern1551 (x2, 
E_V16SFmode, 
E_HImode) != 0
              || !(
#line 286 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 4025 "../../gcc/config/i386/sse.md"
((TARGET_AVX512DQ || (VALID_AVX512FP16_REG_MODE (V16SFmode))) && ((V16SFmode == V16SFmode
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
          return 3202; /* reducepv16sf_mask_round */

        case E_V8SFmode:
          if (pattern1551 (x2, 
E_V8SFmode, 
E_QImode) != 0
              || !(
#line 286 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 4025 "../../gcc/config/i386/sse.md"
((TARGET_AVX512DQ || (VALID_AVX512FP16_REG_MODE (V8SFmode))) && ((V8SFmode == V16SFmode
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
          return 3206; /* reducepv8sf_mask_round */

        case E_V8DFmode:
          if (pattern1551 (x2, 
E_V8DFmode, 
E_QImode) != 0
              || !(
#line 286 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 4025 "../../gcc/config/i386/sse.md"
((TARGET_AVX512DQ || (VALID_AVX512FP16_REG_MODE (V8DFmode))) && ((V8DFmode == V16SFmode
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
          return 3212; /* reducepv8df_mask_round */

        case E_V4DFmode:
          if (pattern1551 (x2, 
E_V4DFmode, 
E_QImode) != 0
              || !(
#line 286 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 4025 "../../gcc/config/i386/sse.md"
((TARGET_AVX512DQ || (VALID_AVX512FP16_REG_MODE (V4DFmode))) && ((V4DFmode == V16SFmode
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
          return 3216; /* reducepv4df_mask_round */

        default:
          return -1;
        }

    case 221:
      switch (pattern914 (x2))
        {
        case 0:
          if (!(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 106 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 7305 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && ((V32HFmode == V16SFmode
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
#line 555 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))))
            return -1;
          return 4378; /* avx512bw_fmulc_v32hf_mask_round */

        case 1:
          if (!(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 106 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 7305 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && ((V16HFmode == V16SFmode
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
#line 555 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))))
            return -1;
          return 4386; /* avx512vl_fmulc_v16hf_mask_round */

        case 2:
          if (!(
#line 460 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 7509 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16)))
            return -1;
          return 4408; /* avx512fp16_fmulcsh_v8hf_round */

        default:
          return -1;
        }

    case 222:
      switch (pattern914 (x2))
        {
        case 0:
          if (!(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 106 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 7305 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && ((V32HFmode == V16SFmode
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
#line 555 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))))
            return -1;
          return 4382; /* avx512bw_fcmulc_v32hf_mask_round */

        case 1:
          if (!(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 106 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 7305 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && ((V16HFmode == V16SFmode
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
#line 555 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))))
            return -1;
          return 4390; /* avx512vl_fcmulc_v16hf_mask_round */

        case 2:
          if (!(
#line 460 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 7509 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16)))
            return -1;
          return 4412; /* avx512fp16_fcmulcsh_v8hf_round */

        default:
          return -1;
        }

    case 58:
      x5 = XVECEXP (x4, 0, 0);
      operands[1] = x5;
      x6 = XVECEXP (x4, 0, 1);
      operands[2] = x6;
      x9 = XVECEXP (x2, 0, 1);
      if (!const_4_or_8_to_11_operand (x9, E_SImode))
        return -1;
      x8 = XEXP (x3, 2);
      switch (GET_CODE (x8))
        {
        case CONST_INT:
          if (XWINT (x8, 0) != 1L)
            return -1;
          operands[3] = x9;
          switch (pattern1406 (x2))
            {
            case 0:
              if (!(
#line 444 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 13612 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 479 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16))))
                return -1;
              return 5415; /* avx512f_vmscalefv8hf_round */

            case 1:
              if (!
#line 444 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F))
                return -1;
              return 5419; /* avx512f_vmscalefv4sf_round */

            case 2:
              if (!(
#line 444 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 13612 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 480 "../../gcc/config/i386/sse.md"
(TARGET_SSE2))))
                return -1;
              return 5423; /* avx512f_vmscalefv2df_round */

            default:
              return -1;
            }

        case REG:
        case SUBREG:
          operands[4] = x8;
          x7 = XEXP (x3, 1);
          operands[3] = x7;
          operands[5] = x9;
          switch (GET_MODE (operands[0]))
            {
            case E_V32HFmode:
              if (pattern1552 (x2, 
E_V32HFmode, 
E_SImode) != 0
                  || !(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 13623 "../../gcc/config/i386/sse.md"
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
              return 5429; /* avx512bw_scalefv32hf_mask_round */

            case E_V16HFmode:
              if (pattern1552 (x2, 
E_V16HFmode, 
E_HImode) != 0
                  || !(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 13623 "../../gcc/config/i386/sse.md"
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
              return 5433; /* avx512vl_scalefv16hf_mask_round */

            case E_V16SFmode:
              if (pattern1552 (x2, 
E_V16SFmode, 
E_HImode) != 0
                  || !(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 13623 "../../gcc/config/i386/sse.md"
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
              return 5439; /* avx512f_scalefv16sf_mask_round */

            case E_V8SFmode:
              if (pattern1552 (x2, 
E_V8SFmode, 
E_QImode) != 0
                  || !(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 13623 "../../gcc/config/i386/sse.md"
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
              return 5443; /* avx512vl_scalefv8sf_mask_round */

            case E_V8DFmode:
              if (pattern1552 (x2, 
E_V8DFmode, 
E_QImode) != 0
                  || !(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 13623 "../../gcc/config/i386/sse.md"
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
              return 5449; /* avx512f_scalefv8df_mask_round */

            case E_V4DFmode:
              if (pattern1552 (x2, 
E_V4DFmode, 
E_QImode) != 0
                  || !(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 13623 "../../gcc/config/i386/sse.md"
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
              return 5453; /* avx512vl_scalefv4df_mask_round */

            default:
              return -1;
            }

        default:
          return -1;
        }

    case 165:
      x8 = XEXP (x3, 2);
      if (x8 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
        return -1;
      x5 = XVECEXP (x4, 0, 0);
      operands[1] = x5;
      x6 = XVECEXP (x4, 0, 1);
      operands[2] = x6;
      x9 = XVECEXP (x2, 0, 1);
      operands[3] = x9;
      if (!const48_operand (operands[3], E_SImode))
        return -1;
      switch (pattern1406 (x2))
        {
        case 0:
          if (!(
#line 486 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 14045 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 479 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16))))
            return -1;
          return 7066; /* avx512f_sgetexpv8hf_round */

        case 1:
          if (!
#line 486 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F))
            return -1;
          return 7070; /* avx512f_sgetexpv4sf_round */

        case 2:
          if (!(
#line 486 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 14045 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 480 "../../gcc/config/i386/sse.md"
(TARGET_SSE2))))
            return -1;
          return 7074; /* avx512f_sgetexpv2df_round */

        default:
          return -1;
        }

    case 94:
      x6 = XVECEXP (x4, 0, 1);
      if (!const_0_to_255_operand (x6, E_SImode))
        return -1;
      x9 = XVECEXP (x2, 0, 1);
      if (!const48_operand (x9, E_SImode))
        return -1;
      x8 = XEXP (x3, 2);
      switch (GET_CODE (x8))
        {
        case REG:
        case SUBREG:
          operands[4] = x8;
          x5 = XVECEXP (x4, 0, 0);
          operands[1] = x5;
          operands[2] = x6;
          x7 = XEXP (x3, 1);
          operands[3] = x7;
          operands[5] = x9;
          switch (GET_MODE (operands[0]))
            {
            case E_V32HFmode:
              if (pattern1553 (x2, 
E_V32HFmode, 
E_SImode) != 0
                  || !(
#line 286 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 14224 "../../gcc/config/i386/sse.md"
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
              return 7141; /* avx512bw_rndscalev32hf_mask_round */

            case E_V16HFmode:
              if (pattern1553 (x2, 
E_V16HFmode, 
E_HImode) != 0
                  || !(
#line 286 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 14224 "../../gcc/config/i386/sse.md"
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
              return 7145; /* avx512vl_rndscalev16hf_mask_round */

            case E_V16SFmode:
              if (pattern1553 (x2, 
E_V16SFmode, 
E_HImode) != 0
                  || !(
#line 286 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 14224 "../../gcc/config/i386/sse.md"
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
              return 7151; /* avx512f_rndscalev16sf_mask_round */

            case E_V8SFmode:
              if (pattern1553 (x2, 
E_V8SFmode, 
E_QImode) != 0
                  || !(
#line 286 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 14224 "../../gcc/config/i386/sse.md"
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
              return 7155; /* avx512vl_rndscalev8sf_mask_round */

            case E_V8DFmode:
              if (pattern1553 (x2, 
E_V8DFmode, 
E_QImode) != 0
                  || !(
#line 286 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 14224 "../../gcc/config/i386/sse.md"
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
              return 7161; /* avx512f_rndscalev8df_mask_round */

            case E_V4DFmode:
              if (pattern1553 (x2, 
E_V4DFmode, 
E_QImode) != 0
                  || !(
#line 286 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 14224 "../../gcc/config/i386/sse.md"
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
              return 7165; /* avx512vl_rndscalev4df_mask_round */

            default:
              return -1;
            }

        case CONST_INT:
          if (XWINT (x8, 0) != 1L)
            return -1;
          x5 = XVECEXP (x4, 0, 0);
          operands[2] = x5;
          operands[3] = x6;
          x7 = XEXP (x3, 1);
          operands[1] = x7;
          operands[4] = x9;
          switch (GET_MODE (operands[0]))
            {
            case E_V8HFmode:
              if (pattern1584 (x2, 
E_V8HFmode) != 0
                  || !(
#line 486 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 14239 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 479 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16))))
                return -1;
              return 7170; /* avx512f_rndscalev8hf_round */

            case E_V4SFmode:
              if (pattern1584 (x2, 
E_V4SFmode) != 0
                  || !
#line 486 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F))
                return -1;
              return 7174; /* avx512f_rndscalev4sf_round */

            case E_V2DFmode:
              if (pattern1584 (x2, 
E_V2DFmode) != 0
                  || !(
#line 486 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 14239 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 480 "../../gcc/config/i386/sse.md"
(TARGET_SSE2))))
                return -1;
              return 7178; /* avx512f_rndscalev2df_round */

            default:
              return -1;
            }

        default:
          return -1;
        }

    case 150:
      if (GET_MODE (x4) != E_V16HImode
          || !register_operand (operands[0], E_V16HImode)
          || GET_MODE (x2) != E_V16HImode
          || GET_MODE (x3) != E_V16HImode)
        return -1;
      x5 = XVECEXP (x4, 0, 0);
      operands[1] = x5;
      if (!register_operand (operands[1], E_V16SFmode))
        return -1;
      x6 = XVECEXP (x4, 0, 1);
      operands[2] = x6;
      if (!const_0_to_255_operand (operands[2], E_SImode))
        return -1;
      x7 = XEXP (x3, 1);
      operands[3] = x7;
      if (!nonimm_or_0_operand (operands[3], E_V16HImode))
        return -1;
      x8 = XEXP (x3, 2);
      operands[4] = x8;
      if (!register_operand (operands[4], E_HImode))
        return -1;
      x9 = XVECEXP (x2, 0, 1);
      operands[5] = x9;
      if (!const48_operand (operands[5], E_SImode)
          || !(
#line 286 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 29218 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512))))
        return -1;
      return 9665; /* avx512f_vcvtps2ph512_mask_round */

    case 166:
      x5 = XVECEXP (x4, 0, 0);
      operands[1] = x5;
      x6 = XVECEXP (x4, 0, 1);
      operands[2] = x6;
      if (!const_0_to_15_operand (operands[2], E_SImode))
        return -1;
      x7 = XEXP (x3, 1);
      operands[3] = x7;
      x8 = XEXP (x3, 2);
      operands[4] = x8;
      x9 = XVECEXP (x2, 0, 1);
      operands[5] = x9;
      if (!const48_operand (operands[5], E_SImode))
        return -1;
      switch (GET_MODE (operands[0]))
        {
        case E_V32HFmode:
          if (pattern1553 (x2, 
E_V32HFmode, 
E_SImode) != 0
              || !(
#line 286 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 29882 "../../gcc/config/i386/sse.md"
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
          return 10011; /* avx512bw_getmantv32hf_mask_round */

        case E_V16HFmode:
          if (pattern1553 (x2, 
E_V16HFmode, 
E_HImode) != 0
              || !(
#line 286 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 29882 "../../gcc/config/i386/sse.md"
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
          return 10015; /* avx512vl_getmantv16hf_mask_round */

        case E_V16SFmode:
          if (pattern1553 (x2, 
E_V16SFmode, 
E_HImode) != 0
              || !(
#line 286 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 29882 "../../gcc/config/i386/sse.md"
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
          return 10021; /* avx512f_getmantv16sf_mask_round */

        case E_V8SFmode:
          if (pattern1553 (x2, 
E_V8SFmode, 
E_QImode) != 0
              || !(
#line 286 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 29882 "../../gcc/config/i386/sse.md"
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
          return 10025; /* avx512vl_getmantv8sf_mask_round */

        case E_V8DFmode:
          if (pattern1553 (x2, 
E_V8DFmode, 
E_QImode) != 0
              || !(
#line 286 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 29882 "../../gcc/config/i386/sse.md"
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
          return 10031; /* avx512f_getmantv8df_mask_round */

        case E_V4DFmode:
          if (pattern1553 (x2, 
E_V4DFmode, 
E_QImode) != 0
              || !(
#line 286 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 29882 "../../gcc/config/i386/sse.md"
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
          return 10035; /* avx512vl_getmantv4df_mask_round */

        default:
          return -1;
        }

    default:
      return -1;
    }
}

 int
recog_238 (rtx x1 ATTRIBUTE_UNUSED,
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
    case E_V32HFmode:
      if (!register_operand (operands[0], E_V32HFmode)
          || GET_MODE (x3) != E_V32HFmode
          || !vector_operand (operands[1], E_V32HFmode)
          || !(
#line 4025 "../../gcc/config/i386/sse.md"
((TARGET_AVX512DQ || (VALID_AVX512FP16_REG_MODE (V32HFmode))) && 1) && 
#line 525 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_EVEX512)))
        return -1;
      return 3189; /* *reducepv32hf */

    case E_V16HFmode:
      if (!register_operand (operands[0], E_V16HFmode)
          || GET_MODE (x3) != E_V16HFmode
          || !vector_operand (operands[1], E_V16HFmode)
          || !(
#line 4025 "../../gcc/config/i386/sse.md"
((TARGET_AVX512DQ || (VALID_AVX512FP16_REG_MODE (V16HFmode))) && 1) && 
#line 526 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL)))
        return -1;
      return 3193; /* *reducepv16hf */

    case E_V8HFmode:
      if (!register_operand (operands[0], E_V8HFmode)
          || GET_MODE (x3) != E_V8HFmode
          || !vector_operand (operands[1], E_V8HFmode)
          || !(
#line 4025 "../../gcc/config/i386/sse.md"
((TARGET_AVX512DQ || (VALID_AVX512FP16_REG_MODE (V8HFmode))) && 1) && 
#line 527 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL)))
        return -1;
      return 3197; /* *reducepv8hf */

    case E_V16SFmode:
      if (!register_operand (operands[0], E_V16SFmode)
          || GET_MODE (x3) != E_V16SFmode
          || !vector_operand (operands[1], E_V16SFmode)
          || !(
#line 4025 "../../gcc/config/i386/sse.md"
((TARGET_AVX512DQ || (VALID_AVX512FP16_REG_MODE (V16SFmode))) && 1) && 
#line 528 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 3199; /* *reducepv16sf */

    case E_V8SFmode:
      if (!register_operand (operands[0], E_V8SFmode)
          || GET_MODE (x3) != E_V8SFmode
          || !vector_operand (operands[1], E_V8SFmode)
          || !(
#line 4025 "../../gcc/config/i386/sse.md"
((TARGET_AVX512DQ || (VALID_AVX512FP16_REG_MODE (V8SFmode))) && 1) && 
#line 528 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 3203; /* *reducepv8sf */

    case E_V4SFmode:
      if (!register_operand (operands[0], E_V4SFmode)
          || GET_MODE (x3) != E_V4SFmode
          || !vector_operand (operands[1], E_V4SFmode)
          || !(
#line 4025 "../../gcc/config/i386/sse.md"
((TARGET_AVX512DQ || (VALID_AVX512FP16_REG_MODE (V4SFmode))) && 1) && 
#line 528 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 3207; /* *reducepv4sf */

    case E_V8DFmode:
      if (!register_operand (operands[0], E_V8DFmode)
          || GET_MODE (x3) != E_V8DFmode
          || !vector_operand (operands[1], E_V8DFmode)
          || !(
#line 4025 "../../gcc/config/i386/sse.md"
((TARGET_AVX512DQ || (VALID_AVX512FP16_REG_MODE (V8DFmode))) && 1) && 
#line 529 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 3209; /* *reducepv8df */

    case E_V4DFmode:
      if (!register_operand (operands[0], E_V4DFmode)
          || GET_MODE (x3) != E_V4DFmode
          || !vector_operand (operands[1], E_V4DFmode)
          || !(
#line 4025 "../../gcc/config/i386/sse.md"
((TARGET_AVX512DQ || (VALID_AVX512FP16_REG_MODE (V4DFmode))) && 1) && 
#line 529 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 3213; /* *reducepv4df */

    case E_V2DFmode:
      if (!register_operand (operands[0], E_V2DFmode)
          || GET_MODE (x3) != E_V2DFmode
          || !vector_operand (operands[1], E_V2DFmode)
          || !(
#line 4025 "../../gcc/config/i386/sse.md"
((TARGET_AVX512DQ || (VALID_AVX512FP16_REG_MODE (V2DFmode))) && 1) && 
#line 529 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 3217; /* *reducepv2df */

    default:
      return -1;
    }
}

 int
recog_241 (rtx x1 ATTRIBUTE_UNUSED,
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
  operands[2] = x4;
  x5 = XVECEXP (x3, 0, 1);
  operands[1] = x5;
  switch (GET_MODE (operands[0]))
    {
    case E_V4SFmode:
      if (pattern786 (x3, 
E_V4SFmode, 
E_V4SImode) != 0
          || !
#line 28621 "../../gcc/config/i386/sse.md"
(TARGET_AVX))
        return -1;
      return 9482; /* avx_maskloadps */

    case E_V2DFmode:
      if (pattern786 (x3, 
E_V2DFmode, 
E_V2DImode) != 0
          || !
#line 28621 "../../gcc/config/i386/sse.md"
(TARGET_AVX))
        return -1;
      return 9483; /* avx_maskloadpd */

    case E_V4DImode:
      if (pattern787 (x3, 
E_V4DImode) != 0
          || !
#line 28621 "../../gcc/config/i386/sse.md"
(TARGET_AVX))
        return -1;
      return 9484; /* avx2_maskloadq256 */

    case E_V2DImode:
      if (pattern787 (x3, 
E_V2DImode) != 0
          || !
#line 28621 "../../gcc/config/i386/sse.md"
(TARGET_AVX))
        return -1;
      return 9485; /* avx2_maskloadq */

    case E_V8SFmode:
      if (pattern786 (x3, 
E_V8SFmode, 
E_V8SImode) != 0
          || !
#line 28621 "../../gcc/config/i386/sse.md"
(TARGET_AVX))
        return -1;
      return 9486; /* avx_maskloadps256 */

    case E_V4DFmode:
      if (pattern786 (x3, 
E_V4DFmode, 
E_V4DImode) != 0
          || !
#line 28621 "../../gcc/config/i386/sse.md"
(TARGET_AVX))
        return -1;
      return 9487; /* avx_maskloadpd256 */

    case E_V8SImode:
      if (pattern787 (x3, 
E_V8SImode) != 0
          || !
#line 28621 "../../gcc/config/i386/sse.md"
(TARGET_AVX))
        return -1;
      return 9488; /* avx2_maskloadd256 */

    case E_V4SImode:
      if (pattern787 (x3, 
E_V4SImode) != 0
          || !
#line 28621 "../../gcc/config/i386/sse.md"
(TARGET_AVX))
        return -1;
      return 9489; /* avx2_maskloadd */

    default:
      return -1;
    }
}

 int
recog_243 (rtx x1 ATTRIBUTE_UNUSED,
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
  switch (GET_MODE (operands[0]))
    {
    case E_V32QImode:
      if (pattern149 (x3, 
E_V32QImode) != 0
          || !(
#line 23184 "../../gcc/config/i386/sse.md"
(TARGET_SSSE3) && 
#line 753 "../../gcc/config/i386/sse.md"
(TARGET_AVX2)))
        return -1;
      return 8628; /* avx2_psignv32qi3 */

    case E_V16QImode:
      if (pattern149 (x3, 
E_V16QImode) != 0
          || !
#line 23184 "../../gcc/config/i386/sse.md"
(TARGET_SSSE3))
        return -1;
      return 8629; /* ssse3_psignv16qi3 */

    case E_V16HImode:
      if (pattern149 (x3, 
E_V16HImode) != 0
          || !(
#line 23184 "../../gcc/config/i386/sse.md"
(TARGET_SSSE3) && 
#line 754 "../../gcc/config/i386/sse.md"
(TARGET_AVX2)))
        return -1;
      return 8630; /* avx2_psignv16hi3 */

    case E_V8HImode:
      if (pattern149 (x3, 
E_V8HImode) != 0
          || !
#line 23184 "../../gcc/config/i386/sse.md"
(TARGET_SSSE3))
        return -1;
      return 8631; /* ssse3_psignv8hi3 */

    case E_V8SImode:
      if (pattern149 (x3, 
E_V8SImode) != 0
          || !(
#line 23184 "../../gcc/config/i386/sse.md"
(TARGET_SSSE3) && 
#line 755 "../../gcc/config/i386/sse.md"
(TARGET_AVX2)))
        return -1;
      return 8632; /* avx2_psignv8si3 */

    case E_V4SImode:
      if (pattern149 (x3, 
E_V4SImode) != 0
          || !
#line 23184 "../../gcc/config/i386/sse.md"
(TARGET_SSSE3))
        return -1;
      return 8633; /* ssse3_psignv4si3 */

    default:
      return -1;
    }
}

 int
recog_247 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  operands[0] = x2;
  x3 = XEXP (x1, 1);
  x4 = XVECEXP (x3, 0, 0);
  operands[1] = x4;
  x5 = XVECEXP (x3, 0, 1);
  operands[2] = x5;
  x6 = XVECEXP (x3, 0, 2);
  switch (GET_CODE (x6))
    {
    case REG:
    case SUBREG:
    case MEM:
      operands[3] = x6;
      switch (GET_MODE (operands[0]))
        {
        case E_V8SFmode:
          if (!register_operand (operands[0], E_V8SFmode)
              || GET_MODE (x3) != E_V8SFmode)
            return -1;
          if (nonimmediate_operand (operands[1], E_V8SFmode)
              && nonimmediate_operand (operands[2], E_V8SFmode)
              && nonimmediate_operand (operands[3], E_V8SFmode)
              && (
#line 6390 "../../gcc/config/i386/sse.md"
(TARGET_FMA || TARGET_FMA4) && 
#line 422 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
            return 4083; /* *fma_fmaddsub_v8sf */
          if (!vector_operand (operands[1], E_V8SFmode)
              || !vector_operand (operands[2], E_V8SFmode)
              || !vector_operand (operands[3], E_V8SFmode)
              || !(
#line 6408 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && 1 && 1) && 
#line 528 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 4101; /* *fma_fmaddsub_v8sf */

        case E_V4SFmode:
          if (!register_operand (operands[0], E_V4SFmode)
              || GET_MODE (x3) != E_V4SFmode)
            return -1;
          if (nonimmediate_operand (operands[1], E_V4SFmode)
              && nonimmediate_operand (operands[2], E_V4SFmode)
              && nonimmediate_operand (operands[3], E_V4SFmode)
              && 
#line 6390 "../../gcc/config/i386/sse.md"
(TARGET_FMA || TARGET_FMA4))
            return 4084; /* *fma_fmaddsub_v4sf */
          if (!vector_operand (operands[1], E_V4SFmode)
              || !vector_operand (operands[2], E_V4SFmode)
              || !vector_operand (operands[3], E_V4SFmode)
              || !(
#line 6408 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && 1 && 1) && 
#line 528 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 4105; /* *fma_fmaddsub_v4sf */

        case E_V4DFmode:
          if (!register_operand (operands[0], E_V4DFmode)
              || GET_MODE (x3) != E_V4DFmode)
            return -1;
          if (nonimmediate_operand (operands[1], E_V4DFmode)
              && nonimmediate_operand (operands[2], E_V4DFmode)
              && nonimmediate_operand (operands[3], E_V4DFmode)
              && (
#line 6390 "../../gcc/config/i386/sse.md"
(TARGET_FMA || TARGET_FMA4) && 
#line 423 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
            return 4085; /* *fma_fmaddsub_v4df */
          if (!vector_operand (operands[1], E_V4DFmode)
              || !vector_operand (operands[2], E_V4DFmode)
              || !vector_operand (operands[3], E_V4DFmode)
              || !(
#line 6408 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && 1 && 1) && 
#line 529 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 4111; /* *fma_fmaddsub_v4df */

        case E_V2DFmode:
          if (!register_operand (operands[0], E_V2DFmode)
              || GET_MODE (x3) != E_V2DFmode)
            return -1;
          if (nonimmediate_operand (operands[1], E_V2DFmode)
              && nonimmediate_operand (operands[2], E_V2DFmode)
              && nonimmediate_operand (operands[3], E_V2DFmode)
              && (
#line 6390 "../../gcc/config/i386/sse.md"
(TARGET_FMA || TARGET_FMA4) && 
#line 423 "../../gcc/config/i386/sse.md"
(TARGET_SSE2)))
            return 4086; /* *fma_fmaddsub_v2df */
          if (!vector_operand (operands[1], E_V2DFmode)
              || !vector_operand (operands[2], E_V2DFmode)
              || !vector_operand (operands[3], E_V2DFmode)
              || !(
#line 6408 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && 1 && 1) && 
#line 529 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 4115; /* *fma_fmaddsub_v2df */

        case E_V32HFmode:
          if (pattern666 (x3, 
E_V32HFmode) != 0
              || !(
#line 6408 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && 1 && 1) && 
#line 525 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_EVEX512)))
            return -1;
          return 4087; /* *fma_fmaddsub_v32hf */

        case E_V16HFmode:
          if (pattern666 (x3, 
E_V16HFmode) != 0
              || !(
#line 6408 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && 1 && 1) && 
#line 526 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL)))
            return -1;
          return 4091; /* *fma_fmaddsub_v16hf */

        case E_V8HFmode:
          if (pattern666 (x3, 
E_V8HFmode) != 0
              || !(
#line 6408 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && 1 && 1) && 
#line 527 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL)))
            return -1;
          return 4095; /* *fma_fmaddsub_v8hf */

        case E_V16SFmode:
          if (pattern666 (x3, 
E_V16SFmode) != 0
              || !(
#line 6408 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && 1 && 1) && 
#line 528 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return -1;
          return 4097; /* *fma_fmaddsub_v16sf */

        case E_V8DFmode:
          if (pattern666 (x3, 
E_V8DFmode) != 0
              || !(
#line 6408 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && 1 && 1) && 
#line 529 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return -1;
          return 4107; /* *fma_fmaddsub_v8df */

        default:
          return -1;
        }

    case NEG:
      x7 = XEXP (x6, 0);
      operands[3] = x7;
      switch (GET_MODE (operands[0]))
        {
        case E_V8SFmode:
          if (!register_operand (operands[0], E_V8SFmode)
              || GET_MODE (x3) != E_V8SFmode
              || GET_MODE (x6) != E_V8SFmode)
            return -1;
          if (nonimmediate_operand (operands[1], E_V8SFmode)
              && nonimmediate_operand (operands[2], E_V8SFmode)
              && nonimmediate_operand (operands[3], E_V8SFmode)
              && (
#line 6459 "../../gcc/config/i386/sse.md"
(TARGET_FMA || TARGET_FMA4) && 
#line 422 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
            return 4147; /* *fma_fmsubadd_v8sf */
          if (!vector_operand (operands[1], E_V8SFmode)
              || !vector_operand (operands[2], E_V8SFmode)
              || !vector_operand (operands[3], E_V8SFmode)
              || !(
#line 6478 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && 1 && 1) && 
#line 528 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 4165; /* *fma_fmsubadd_v8sf */

        case E_V4SFmode:
          if (!register_operand (operands[0], E_V4SFmode)
              || GET_MODE (x3) != E_V4SFmode
              || GET_MODE (x6) != E_V4SFmode)
            return -1;
          if (nonimmediate_operand (operands[1], E_V4SFmode)
              && nonimmediate_operand (operands[2], E_V4SFmode)
              && nonimmediate_operand (operands[3], E_V4SFmode)
              && 
#line 6459 "../../gcc/config/i386/sse.md"
(TARGET_FMA || TARGET_FMA4))
            return 4148; /* *fma_fmsubadd_v4sf */
          if (!vector_operand (operands[1], E_V4SFmode)
              || !vector_operand (operands[2], E_V4SFmode)
              || !vector_operand (operands[3], E_V4SFmode)
              || !(
#line 6478 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && 1 && 1) && 
#line 528 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 4169; /* *fma_fmsubadd_v4sf */

        case E_V4DFmode:
          if (!register_operand (operands[0], E_V4DFmode)
              || GET_MODE (x3) != E_V4DFmode
              || GET_MODE (x6) != E_V4DFmode)
            return -1;
          if (nonimmediate_operand (operands[1], E_V4DFmode)
              && nonimmediate_operand (operands[2], E_V4DFmode)
              && nonimmediate_operand (operands[3], E_V4DFmode)
              && (
#line 6459 "../../gcc/config/i386/sse.md"
(TARGET_FMA || TARGET_FMA4) && 
#line 423 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
            return 4149; /* *fma_fmsubadd_v4df */
          if (!vector_operand (operands[1], E_V4DFmode)
              || !vector_operand (operands[2], E_V4DFmode)
              || !vector_operand (operands[3], E_V4DFmode)
              || !(
#line 6478 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && 1 && 1) && 
#line 529 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 4175; /* *fma_fmsubadd_v4df */

        case E_V2DFmode:
          if (!register_operand (operands[0], E_V2DFmode)
              || GET_MODE (x3) != E_V2DFmode
              || GET_MODE (x6) != E_V2DFmode)
            return -1;
          if (nonimmediate_operand (operands[1], E_V2DFmode)
              && nonimmediate_operand (operands[2], E_V2DFmode)
              && nonimmediate_operand (operands[3], E_V2DFmode)
              && (
#line 6459 "../../gcc/config/i386/sse.md"
(TARGET_FMA || TARGET_FMA4) && 
#line 423 "../../gcc/config/i386/sse.md"
(TARGET_SSE2)))
            return 4150; /* *fma_fmsubadd_v2df */
          if (!vector_operand (operands[1], E_V2DFmode)
              || !vector_operand (operands[2], E_V2DFmode)
              || !vector_operand (operands[3], E_V2DFmode)
              || !(
#line 6478 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && 1 && 1) && 
#line 529 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 4179; /* *fma_fmsubadd_v2df */

        case E_V32HFmode:
          if (pattern1027 (x3, 
E_V32HFmode) != 0
              || !(
#line 6478 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && 1 && 1) && 
#line 525 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_EVEX512)))
            return -1;
          return 4151; /* *fma_fmsubadd_v32hf */

        case E_V16HFmode:
          if (pattern1027 (x3, 
E_V16HFmode) != 0
              || !(
#line 6478 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && 1 && 1) && 
#line 526 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL)))
            return -1;
          return 4155; /* *fma_fmsubadd_v16hf */

        case E_V8HFmode:
          if (pattern1027 (x3, 
E_V8HFmode) != 0
              || !(
#line 6478 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && 1 && 1) && 
#line 527 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL)))
            return -1;
          return 4159; /* *fma_fmsubadd_v8hf */

        case E_V16SFmode:
          if (pattern1027 (x3, 
E_V16SFmode) != 0
              || !(
#line 6478 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && 1 && 1) && 
#line 528 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return -1;
          return 4161; /* *fma_fmsubadd_v16sf */

        case E_V8DFmode:
          if (pattern1027 (x3, 
E_V8DFmode) != 0
              || !(
#line 6478 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && 1 && 1) && 
#line 529 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return -1;
          return 4171; /* *fma_fmsubadd_v8df */

        default:
          return -1;
        }

    default:
      return -1;
    }
}

 int
recog_249 (rtx x1 ATTRIBUTE_UNUSED,
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
  operands[1] = x4;
  x5 = XVECEXP (x3, 0, 1);
  operands[2] = x5;
  x6 = XVECEXP (x3, 0, 2);
  operands[3] = x6;
  switch (GET_CODE (operands[3]))
    {
    case REG:
    case SUBREG:
      switch (GET_MODE (operands[0]))
        {
        case E_V16SImode:
          if (pattern1029 (x3, 
E_HImode, 
E_V16SImode) != 0
              || !(
#line 29718 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 1010 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return -1;
          return 9920; /* expandv16si_mask */

        case E_V16SFmode:
          if (pattern1029 (x3, 
E_HImode, 
E_V16SFmode) != 0
              || !(
#line 29718 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 1010 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return -1;
          return 9921; /* expandv16sf_mask */

        case E_V8DImode:
          if (pattern1029 (x3, 
E_QImode, 
E_V8DImode) != 0
              || !(
#line 29718 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 1011 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return -1;
          return 9922; /* expandv8di_mask */

        case E_V8DFmode:
          if (pattern1029 (x3, 
E_QImode, 
E_V8DFmode) != 0
              || !(
#line 29718 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 1011 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return -1;
          return 9923; /* expandv8df_mask */

        case E_V8SImode:
          if (pattern1029 (x3, 
E_QImode, 
E_V8SImode) != 0
              || !(
#line 29718 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 1012 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 9924; /* expandv8si_mask */

        case E_V8SFmode:
          if (pattern1029 (x3, 
E_QImode, 
E_V8SFmode) != 0
              || !(
#line 29718 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 1012 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 9925; /* expandv8sf_mask */

        case E_V4DImode:
          if (pattern1029 (x3, 
E_QImode, 
E_V4DImode) != 0
              || !(
#line 29718 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 1013 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 9926; /* expandv4di_mask */

        case E_V4DFmode:
          if (pattern1029 (x3, 
E_QImode, 
E_V4DFmode) != 0
              || !(
#line 29718 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 1013 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 9927; /* expandv4df_mask */

        case E_V4SImode:
          if (pattern1029 (x3, 
E_QImode, 
E_V4SImode) != 0
              || !(
#line 29718 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 1014 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 9928; /* expandv4si_mask */

        case E_V4SFmode:
          if (pattern1029 (x3, 
E_QImode, 
E_V4SFmode) != 0
              || !(
#line 29718 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 1014 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 9929; /* expandv4sf_mask */

        case E_V2DImode:
          if (pattern1029 (x3, 
E_QImode, 
E_V2DImode) != 0
              || !(
#line 29718 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 1015 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 9930; /* expandv2di_mask */

        case E_V2DFmode:
          if (pattern1029 (x3, 
E_QImode, 
E_V2DFmode) != 0
              || !(
#line 29718 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 1015 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 9931; /* expandv2df_mask */

        case E_V64QImode:
          if (pattern1029 (x3, 
E_DImode, 
E_V64QImode) != 0
              || !(
#line 29732 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VBMI2) && 
#line 318 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return -1;
          return 9932; /* expandv64qi_mask */

        case E_V16QImode:
          if (pattern1029 (x3, 
E_HImode, 
E_V16QImode) != 0
              || !(
#line 29732 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VBMI2) && 
#line 318 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 9933; /* expandv16qi_mask */

        case E_V32QImode:
          if (pattern1029 (x3, 
E_SImode, 
E_V32QImode) != 0
              || !(
#line 29732 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VBMI2) && 
#line 318 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 9934; /* expandv32qi_mask */

        case E_V32HImode:
          if (pattern1029 (x3, 
E_SImode, 
E_V32HImode) != 0
              || !(
#line 29732 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VBMI2) && 
#line 319 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return -1;
          return 9935; /* expandv32hi_mask */

        case E_V16HImode:
          if (pattern1029 (x3, 
E_HImode, 
E_V16HImode) != 0
              || !(
#line 29732 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VBMI2) && 
#line 319 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 9936; /* expandv16hi_mask */

        case E_V8HImode:
          if (pattern1029 (x3, 
E_QImode, 
E_V8HImode) != 0
              || !(
#line 29732 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VBMI2) && 
#line 319 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 9937; /* expandv8hi_mask */

        default:
          return -1;
        }

    case CONST_INT:
      switch (pattern918 (x3))
        {
        case 0:
          if (!(
#line 29746 "../../gcc/config/i386/sse.md"
(ix86_pre_reload_split ()
   && (TARGET_AVX512VBMI2 || GET_MODE_SIZE (GET_MODE_INNER (V16SImode)) >= 4)) && 
#line 1017 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 9938; /* *expandv16si_mask */

        case 1:
          if (!(
#line 29746 "../../gcc/config/i386/sse.md"
(ix86_pre_reload_split ()
   && (TARGET_AVX512VBMI2 || GET_MODE_SIZE (GET_MODE_INNER (V16SFmode)) >= 4)) && 
#line 1018 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 9939; /* *expandv16sf_mask */

        case 2:
          if (!(
#line 29746 "../../gcc/config/i386/sse.md"
(ix86_pre_reload_split ()
   && (TARGET_AVX512VBMI2 || GET_MODE_SIZE (GET_MODE_INNER (V8DImode)) >= 4)) && 
#line 1019 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 9940; /* *expandv8di_mask */

        case 3:
          if (!(
#line 29746 "../../gcc/config/i386/sse.md"
(ix86_pre_reload_split ()
   && (TARGET_AVX512VBMI2 || GET_MODE_SIZE (GET_MODE_INNER (V8DFmode)) >= 4)) && 
#line 1020 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 9941; /* *expandv8df_mask */

        case 4:
          if (!(
#line 29746 "../../gcc/config/i386/sse.md"
(ix86_pre_reload_split ()
   && (TARGET_AVX512VBMI2 || GET_MODE_SIZE (GET_MODE_INNER (V8SImode)) >= 4)) && 
#line 1021 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 9942; /* *expandv8si_mask */

        case 5:
          if (!(
#line 29746 "../../gcc/config/i386/sse.md"
(ix86_pre_reload_split ()
   && (TARGET_AVX512VBMI2 || GET_MODE_SIZE (GET_MODE_INNER (V8SFmode)) >= 4)) && 
#line 1021 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 9943; /* *expandv8sf_mask */

        case 6:
          if (!(
#line 29746 "../../gcc/config/i386/sse.md"
(ix86_pre_reload_split ()
   && (TARGET_AVX512VBMI2 || GET_MODE_SIZE (GET_MODE_INNER (V4DImode)) >= 4)) && 
#line 1022 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 9944; /* *expandv4di_mask */

        case 7:
          if (!(
#line 29746 "../../gcc/config/i386/sse.md"
(ix86_pre_reload_split ()
   && (TARGET_AVX512VBMI2 || GET_MODE_SIZE (GET_MODE_INNER (V4DFmode)) >= 4)) && 
#line 1022 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 9945; /* *expandv4df_mask */

        case 8:
          if (!(
#line 29746 "../../gcc/config/i386/sse.md"
(ix86_pre_reload_split ()
   && (TARGET_AVX512VBMI2 || GET_MODE_SIZE (GET_MODE_INNER (V4SImode)) >= 4)) && 
#line 1023 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 9946; /* *expandv4si_mask */

        case 9:
          if (!(
#line 29746 "../../gcc/config/i386/sse.md"
(ix86_pre_reload_split ()
   && (TARGET_AVX512VBMI2 || GET_MODE_SIZE (GET_MODE_INNER (V4SFmode)) >= 4)) && 
#line 1023 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 9947; /* *expandv4sf_mask */

        case 10:
          if (!(
#line 29746 "../../gcc/config/i386/sse.md"
(ix86_pre_reload_split ()
   && (TARGET_AVX512VBMI2 || GET_MODE_SIZE (GET_MODE_INNER (V2DImode)) >= 4)) && 
#line 1024 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 9948; /* *expandv2di_mask */

        case 11:
          if (!(
#line 29746 "../../gcc/config/i386/sse.md"
(ix86_pre_reload_split ()
   && (TARGET_AVX512VBMI2 || GET_MODE_SIZE (GET_MODE_INNER (V2DFmode)) >= 4)) && 
#line 1024 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 9949; /* *expandv2df_mask */

        case 12:
          if (!(
#line 29746 "../../gcc/config/i386/sse.md"
(ix86_pre_reload_split ()
   && (TARGET_AVX512VBMI2 || GET_MODE_SIZE (GET_MODE_INNER (V64QImode)) >= 4)) && 
#line 1025 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return -1;
          return 9950; /* *expandv64qi_mask */

        case 13:
          if (!(
#line 29746 "../../gcc/config/i386/sse.md"
(ix86_pre_reload_split ()
   && (TARGET_AVX512VBMI2 || GET_MODE_SIZE (GET_MODE_INNER (V16QImode)) >= 4)) && 
#line 1025 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 9951; /* *expandv16qi_mask */

        case 14:
          if (!(
#line 29746 "../../gcc/config/i386/sse.md"
(ix86_pre_reload_split ()
   && (TARGET_AVX512VBMI2 || GET_MODE_SIZE (GET_MODE_INNER (V32QImode)) >= 4)) && 
#line 1025 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 9952; /* *expandv32qi_mask */

        case 15:
          if (!(
#line 29746 "../../gcc/config/i386/sse.md"
(ix86_pre_reload_split ()
   && (TARGET_AVX512VBMI2 || GET_MODE_SIZE (GET_MODE_INNER (V32HImode)) >= 4)) && 
#line 1026 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return -1;
          return 9953; /* *expandv32hi_mask */

        case 16:
          if (!(
#line 29746 "../../gcc/config/i386/sse.md"
(ix86_pre_reload_split ()
   && (TARGET_AVX512VBMI2 || GET_MODE_SIZE (GET_MODE_INNER (V16HImode)) >= 4)) && 
#line 1026 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 9954; /* *expandv16hi_mask */

        case 17:
          if (!(
#line 29746 "../../gcc/config/i386/sse.md"
(ix86_pre_reload_split ()
   && (TARGET_AVX512VBMI2 || GET_MODE_SIZE (GET_MODE_INNER (V8HImode)) >= 4)) && 
#line 1026 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 9955; /* *expandv8hi_mask */

        default:
          return -1;
        }

    default:
      return -1;
    }
}

 int
recog_256 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  switch (pattern173 (x1))
    {
    case 0:
      if (!(
#line 30475 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VBMI2) && 
#line 758 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 10242; /* vpshldv_v32hi */

    case 1:
      if (!(
#line 30475 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VBMI2) && 
#line 758 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 10243; /* vpshldv_v16si */

    case 2:
      if (!(
#line 30475 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VBMI2) && 
#line 758 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 10244; /* vpshldv_v8di */

    case 3:
      if (!(
#line 30475 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VBMI2) && 
#line 759 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 10245; /* vpshldv_v16hi */

    case 4:
      if (!(
#line 30475 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VBMI2) && 
#line 759 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 10246; /* vpshldv_v8si */

    case 5:
      if (!(
#line 30475 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VBMI2) && 
#line 760 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 10247; /* vpshldv_v4di */

    case 6:
      if (!(
#line 30475 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VBMI2) && 
#line 760 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 10248; /* vpshldv_v8hi */

    case 7:
      if (!(
#line 30475 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VBMI2) && 
#line 761 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 10249; /* vpshldv_v4si */

    case 8:
      if (!(
#line 30475 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VBMI2) && 
#line 761 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 10250; /* vpshldv_v2di */

    default:
      return -1;
    }
}

 int
recog_261 (rtx x1 ATTRIBUTE_UNUSED,
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
  operands[1] = x4;
  x5 = XVECEXP (x3, 0, 1);
  operands[2] = x5;
  x6 = XVECEXP (x3, 0, 2);
  operands[3] = x6;
  if (!const_0_to_255_operand (operands[3], E_SImode))
    return -1;
  switch (GET_MODE (operands[0]))
    {
    case E_V8SFmode:
      if (pattern151 (x3, 
E_V8SFmode) != 0
          || !(
#line 23755 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1) && 
#line 422 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
        return -1;
      return 8710; /* avx_dpps256 */

    case E_V4SFmode:
      if (pattern151 (x3, 
E_V4SFmode) != 0
          || !
#line 23755 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1))
        return -1;
      return 8711; /* sse4_1_dpps */

    case E_V4DFmode:
      if (pattern151 (x3, 
E_V4DFmode) != 0
          || !(
#line 23755 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1) && 
#line 423 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
        return -1;
      return 8712; /* avx_dppd256 */

    case E_V2DFmode:
      if (pattern151 (x3, 
E_V2DFmode) != 0
          || !(
#line 23755 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1) && 
#line 423 "../../gcc/config/i386/sse.md"
(TARGET_SSE2)))
        return -1;
      return 8713; /* sse4_1_dppd */

    default:
      return -1;
    }
}

 int
recog_265 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  switch (XINT (x2, 1))
    {
    case 51:
      return recog_248 (x1, insn, pnum_clobbers);

    case 59:
      x3 = XEXP (x1, 0);
      operands[0] = x3;
      x4 = XVECEXP (x2, 0, 0);
      operands[1] = x4;
      x5 = XVECEXP (x2, 0, 1);
      operands[2] = x5;
      x6 = XVECEXP (x2, 0, 2);
      operands[3] = x6;
      if (!cmpps_imm_operand (operands[3], E_SImode))
        return -1;
      switch (GET_MODE (operands[0]))
        {
        case E_V8SFmode:
          if (pattern60 (x2, 
E_V8SFmode) != 0
              || !(
#line 4097 "../../gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 422 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 3231; /* avx_cmpv8sf3 */

        case E_V4SFmode:
          if (pattern60 (x2, 
E_V4SFmode) != 0
              || !
#line 4097 "../../gcc/config/i386/sse.md"
(TARGET_SSE))
            return -1;
          return 3232; /* avx_cmpv4sf3 */

        case E_V4DFmode:
          if (pattern60 (x2, 
E_V4DFmode) != 0
              || !(
#line 4097 "../../gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 423 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 3233; /* avx_cmpv4df3 */

        case E_V2DFmode:
          if (pattern60 (x2, 
E_V2DFmode) != 0
              || !(
#line 4097 "../../gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 423 "../../gcc/config/i386/sse.md"
(TARGET_SSE2)))
            return -1;
          return 3234; /* avx_cmpv2df3 */

        default:
          return -1;
        }

    case 133:
      return recog_247 (x1, insn, pnum_clobbers);

    case 217:
      return recog_263 (x1, insn, pnum_clobbers);

    case 219:
      x3 = XEXP (x1, 0);
      operands[0] = x3;
      x4 = XVECEXP (x2, 0, 0);
      operands[1] = x4;
      x5 = XVECEXP (x2, 0, 1);
      operands[2] = x5;
      switch (pattern667 (x2))
        {
        case 0:
          if ((
#line 7147 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && 1 && 1) && 
#line 555 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return 4325; /* fma_fcmaddc_v32hf */
          break;

        case 1:
          if ((
#line 7147 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && 1 && 1) && 
#line 555 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return 4333; /* fma_fcmaddc_v16hf */
          break;

        case 2:
          if ((
#line 7147 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && 1 && 1) && 
#line 555 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return 4339; /* fma_fcmaddc_v8hf */
          break;

        default:
          break;
        }
      if (GET_CODE (x5) != SUBREG
          || maybe_ne (SUBREG_BYTE (x5), 0))
        return -1;
      switch (pattern593 (x2))
        {
        case 0:
          if (!(
#line 7253 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && ix86_pre_reload_split ()) && 
#line 555 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return -1;
          return 4362; /* fma_v32hf_fcmaddc_bcst */

        case 1:
          if (!(
#line 7253 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && ix86_pre_reload_split ()) && 
#line 555 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 4363; /* fma_v16hf_fcmaddc_bcst */

        case 2:
          if (!(
#line 7253 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && ix86_pre_reload_split ()) && 
#line 555 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 4364; /* fma_v8hf_fcmaddc_bcst */

        default:
          return -1;
        }

    case 218:
      switch (pattern166 (x1))
        {
        case 0:
          if (!(
#line 7212 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16) && 
#line 540 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return -1;
          return 4353; /* fma_fmaddc_v16sf_pair */

        case 1:
          if (!(
#line 7212 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16) && 
#line 540 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 4355; /* fma_fmaddc_v8sf_pair */

        case 2:
          if (!(
#line 7212 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16) && 
#line 540 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 4357; /* fma_fmaddc_v4sf_pair */

        default:
          return -1;
        }

    case 220:
      switch (pattern166 (x1))
        {
        case 0:
          if (!(
#line 7212 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16) && 
#line 540 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return -1;
          return 4354; /* fma_fcmaddc_v16sf_pair */

        case 1:
          if (!(
#line 7212 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16) && 
#line 540 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 4356; /* fma_fcmaddc_v8sf_pair */

        case 2:
          if (!(
#line 7212 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16) && 
#line 540 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 4358; /* fma_fcmaddc_v4sf_pair */

        default:
          return -1;
        }

    case 50:
      x3 = XEXP (x1, 0);
      operands[0] = x3;
      x4 = XVECEXP (x2, 0, 0);
      operands[2] = x4;
      x5 = XVECEXP (x2, 0, 1);
      operands[1] = x5;
      x6 = XVECEXP (x2, 0, 2);
      operands[3] = x6;
      if (!const_0_to_255_operand (operands[3], E_SImode))
        return -1;
      switch (GET_MODE (operands[0]))
        {
        case E_V4SImode:
          if (pattern970 (x2, 
E_V4SImode) != 0
              || !
#line 12230 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1))
            return -1;
          return 5328; /* sse4_1_insertps_v4si */

        case E_V4SFmode:
          if (pattern970 (x2, 
E_V4SFmode) != 0
              || !
#line 12230 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1))
            return -1;
          return 5329; /* sse4_1_insertps_v4sf */

        default:
          return -1;
        }

    case 167:
      return recog_255 (x1, insn, pnum_clobbers);

    case 155:
      return recog_250 (x1, insn, pnum_clobbers);

    case 47:
      return recog_246 (x1, insn, pnum_clobbers);

    case 121:
      x3 = XEXP (x1, 0);
      operands[0] = x3;
      x4 = XVECEXP (x2, 0, 0);
      operands[1] = x4;
      x5 = XVECEXP (x2, 0, 1);
      operands[2] = x5;
      x6 = XVECEXP (x2, 0, 2);
      operands[3] = x6;
      if (!const_0_to_255_mul_8_operand (operands[3], E_SImode))
        return -1;
      switch (GET_MODE (operands[0]))
        {
        case E_V4TImode:
          if (pattern149 (x2, 
E_V4TImode) != 0
              || !(
#line 23241 "../../gcc/config/i386/sse.md"
(TARGET_SSSE3) && 
#line 726 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512)))
            return -1;
          return 8640; /* avx512bw_palignrv4ti */

        case E_V2TImode:
          if (pattern149 (x2, 
E_V2TImode) != 0
              || !(
#line 23241 "../../gcc/config/i386/sse.md"
(TARGET_SSSE3) && 
#line 726 "../../gcc/config/i386/sse.md"
(TARGET_AVX2)))
            return -1;
          return 8641; /* avx2_palignrv2ti */

        case E_V1TImode:
          if (pattern149 (x2, 
E_V1TImode) != 0
              || !
#line 23241 "../../gcc/config/i386/sse.md"
(TARGET_SSSE3))
            return -1;
          return 8642; /* ssse3_palignrv1ti */

        default:
          return -1;
        }

    case 122:
      if (GET_MODE (x2) != E_V2DImode)
        return -1;
      x3 = XEXP (x1, 0);
      operands[0] = x3;
      if (!register_operand (operands[0], E_V2DImode))
        return -1;
      x4 = XVECEXP (x2, 0, 0);
      operands[1] = x4;
      if (!register_operand (operands[1], E_V2DImode))
        return -1;
      x5 = XVECEXP (x2, 0, 1);
      operands[2] = x5;
      if (!const_0_to_255_operand (operands[2], E_VOIDmode))
        return -1;
      x6 = XVECEXP (x2, 0, 2);
      operands[3] = x6;
      if (!const_0_to_255_operand (operands[3], E_VOIDmode)
          || !
#line 23435 "../../gcc/config/i386/sse.md"
(TARGET_SSE4A))
        return -1;
      return 8672; /* sse4a_extrqi */

    case 126:
      return recog_261 (x1, insn, pnum_clobbers);

    case 128:
      return recog_262 (x1, insn, pnum_clobbers);

    case 53:
      if (pattern62 (x1, 
E_V16QImode) != 0)
        return -1;
      x6 = XVECEXP (x2, 0, 2);
      operands[3] = x6;
      if (!nonimmediate_operand (operands[3], E_V16QImode)
          || !
#line 26483 "../../gcc/config/i386/sse.md"
(TARGET_XOP && !(MEM_P (operands[2]) && MEM_P (operands[3]))))
        return -1;
      return 9025; /* xop_pperm */

    case 135:
      return recog_260 (x1, insn, pnum_clobbers);

    case 143:
      if (pattern157 (x1, 
E_V2DImode) != 0)
        return -1;
      x6 = XVECEXP (x2, 0, 2);
      operands[3] = x6;
      if (!const_0_to_255_operand (operands[3], E_SImode)
          || !
#line 27196 "../../gcc/config/i386/sse.md"
(TARGET_PCLMUL))
        return -1;
      return 9084; /* pclmulqdq */

    case 152:
      if (pattern62 (x1, 
E_V4DImode) != 0)
        return -1;
      x6 = XVECEXP (x2, 0, 2);
      operands[3] = x6;
      if (!const_0_to_255_operand (operands[3], E_SImode)
          || !
#line 27653 "../../gcc/config/i386/sse.md"
(TARGET_AVX2))
        return -1;
      return 9174; /* avx2_permv2ti */

    case 146:
      x3 = XEXP (x1, 0);
      operands[0] = x3;
      x4 = XVECEXP (x2, 0, 0);
      operands[1] = x4;
      x5 = XVECEXP (x2, 0, 1);
      operands[2] = x5;
      x6 = XVECEXP (x2, 0, 2);
      operands[3] = x6;
      if (!const_0_to_255_operand (operands[3], E_SImode))
        return -1;
      switch (GET_MODE (operands[0]))
        {
        case E_V8SImode:
          if (pattern60 (x2, 
E_V8SImode) != 0
              || !
#line 28306 "../../gcc/config/i386/sse.md"
(TARGET_AVX))
            return -1;
          return 9444; /* *avx_vperm2f128v8si_full */

        case E_V8SFmode:
          if (pattern60 (x2, 
E_V8SFmode) != 0
              || !
#line 28306 "../../gcc/config/i386/sse.md"
(TARGET_AVX))
            return -1;
          return 9445; /* *avx_vperm2f128v8sf_full */

        case E_V4DFmode:
          if (pattern60 (x2, 
E_V4DFmode) != 0
              || !
#line 28306 "../../gcc/config/i386/sse.md"
(TARGET_AVX))
            return -1;
          return 9446; /* *avx_vperm2f128v4df_full */

        default:
          return -1;
        }

    case 153:
      return recog_245 (x1, insn, pnum_clobbers);

    case 169:
      return recog_252 (x1, insn, pnum_clobbers);

    case 170:
      return recog_251 (x1, insn, pnum_clobbers);

    case 171:
      return recog_249 (x1, insn, pnum_clobbers);

    case 194:
      return recog_254 (x1, insn, pnum_clobbers);

    case 186:
      x3 = XEXP (x1, 0);
      operands[0] = x3;
      x4 = XVECEXP (x2, 0, 0);
      operands[1] = x4;
      x5 = XVECEXP (x2, 0, 1);
      operands[2] = x5;
      x6 = XVECEXP (x2, 0, 2);
      operands[3] = x6;
      if (!const_0_to_255_operand (operands[3], E_SImode))
        return -1;
      switch (GET_MODE (operands[0]))
        {
        case E_V8HImode:
          if (pattern160 (x2, 
E_V8HImode, 
E_V16QImode) != 0
              || !(
#line 29924 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 686 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 10050; /* *avx512bw_dbpsadbwv8hi */

        case E_V16HImode:
          if (pattern160 (x2, 
E_V16HImode, 
E_V32QImode) != 0
              || !(
#line 29924 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 686 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 10052; /* *avx512bw_dbpsadbwv16hi */

        case E_V32HImode:
          if (pattern160 (x2, 
E_V32HImode, 
E_V64QImode) != 0
              || !(
#line 29924 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 686 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return -1;
          return 10054; /* *avx512bw_dbpsadbwv32hi */

        default:
          return -1;
        }

    case 182:
      if (pattern157 (x1, 
E_V4SImode) != 0)
        return -1;
      x6 = XVECEXP (x2, 0, 2);
      operands[3] = x6;
      if (!const_0_to_3_operand (operands[3], E_SImode)
          || !
#line 29992 "../../gcc/config/i386/sse.md"
(TARGET_SHA))
        return -1;
      return 10083; /* sha1rnds4 */

    case 185:
      if (pattern157 (x1, 
E_V4SImode) != 0)
        return -1;
      x6 = XVECEXP (x2, 0, 2);
      operands[3] = x6;
      if (!register_operand (operands[3], E_V4SImode)
          || !
#line 30027 "../../gcc/config/i386/sse.md"
(TARGET_SHA))
        return -1;
      return 10086; /* sha256rnds2 */

    case 224:
      if (pattern168 (x1) != 0
          || !
#line 30040 "../../gcc/config/i386/sse.md"
(TARGET_SM3))
        return -1;
      return 10087; /* vsm3msg1 */

    case 225:
      if (pattern168 (x1) != 0
          || !
#line 30052 "../../gcc/config/i386/sse.md"
(TARGET_SM3))
        return -1;
      return 10088; /* vsm3msg2 */

    case 241:
      if (pattern156 (x1, 
E_V4DImode) != 0)
        return -1;
      x6 = XVECEXP (x2, 0, 2);
      operands[3] = x6;
      if (!register_operand (operands[3], E_V2DImode)
          || !
#line 30100 "../../gcc/config/i386/sse.md"
(TARGET_SHA512))
        return -1;
      return 10092; /* vsha512rnds2 */

    case 195:
      switch (pattern170 (x1))
        {
        case 0:
          if (!
#line 30209 "../../gcc/config/i386/sse.md"
(TARGET_AVX512IFMA && TARGET_EVEX512))
            return -1;
          return 10105; /* vpmadd52luqv8di */

        case 1:
          if (!(
#line 30222 "../../gcc/config/i386/sse.md"
(TARGET_AVXIFMA || (TARGET_AVX512IFMA && TARGET_AVX512VL)) && 
#line 705 "../../gcc/config/i386/sse.md"
(TARGET_AVX2)))
            return -1;
          return 10107; /* vpmadd52luqv4di */

        case 2:
          if (!
#line 30222 "../../gcc/config/i386/sse.md"
(TARGET_AVXIFMA || (TARGET_AVX512IFMA && TARGET_AVX512VL)))
            return -1;
          return 10109; /* vpmadd52luqv2di */

        default:
          return -1;
        }

    case 196:
      switch (pattern170 (x1))
        {
        case 0:
          if (!
#line 30209 "../../gcc/config/i386/sse.md"
(TARGET_AVX512IFMA && TARGET_EVEX512))
            return -1;
          return 10106; /* vpmadd52huqv8di */

        case 1:
          if (!(
#line 30222 "../../gcc/config/i386/sse.md"
(TARGET_AVXIFMA || (TARGET_AVX512IFMA && TARGET_AVX512VL)) && 
#line 705 "../../gcc/config/i386/sse.md"
(TARGET_AVX2)))
            return -1;
          return 10108; /* vpmadd52huqv4di */

        case 2:
          if (!
#line 30222 "../../gcc/config/i386/sse.md"
(TARGET_AVXIFMA || (TARGET_AVX512IFMA && TARGET_AVX512VL)))
            return -1;
          return 10110; /* vpmadd52huqv2di */

        default:
          return -1;
        }

    case 198:
      switch (pattern171 (x1))
        {
        case 0:
          if (!(
#line 30346 "../../gcc/config/i386/sse.md"
(TARGET_GFNI) && 
#line 636 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 10161; /* vgf2p8affineinvqb_v64qi */

        case 1:
          if (!(
#line 30346 "../../gcc/config/i386/sse.md"
(TARGET_GFNI) && 
#line 636 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 10163; /* vgf2p8affineinvqb_v32qi */

        case 2:
          if (!
#line 30346 "../../gcc/config/i386/sse.md"
(TARGET_GFNI))
            return -1;
          return 10165; /* vgf2p8affineinvqb_v16qi */

        default:
          return -1;
        }

    case 199:
      switch (pattern171 (x1))
        {
        case 0:
          if (!(
#line 30363 "../../gcc/config/i386/sse.md"
(TARGET_GFNI) && 
#line 636 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 10167; /* vgf2p8affineqb_v64qi */

        case 1:
          if (!(
#line 30363 "../../gcc/config/i386/sse.md"
(TARGET_GFNI) && 
#line 636 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 10169; /* vgf2p8affineqb_v32qi */

        case 2:
          if (!
#line 30363 "../../gcc/config/i386/sse.md"
(TARGET_GFNI))
            return -1;
          return 10171; /* vgf2p8affineqb_v16qi */

        default:
          return -1;
        }

    case 202:
      return recog_259 (x1, insn, pnum_clobbers);

    case 201:
      return recog_257 (x1, insn, pnum_clobbers);

    case 203:
      return recog_258 (x1, insn, pnum_clobbers);

    case 204:
      return recog_256 (x1, insn, pnum_clobbers);

    case 205:
      switch (pattern174 (x1))
        {
        case 0:
          if (!
#line 30580 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VNNI && TARGET_EVEX512))
            return -1;
          return 10269; /* vpdpbusd_v16si */

        case 1:
          if (!(
#line 30591 "../../gcc/config/i386/sse.md"
(TARGET_AVXVNNI || (TARGET_AVX512VNNI && TARGET_AVX512VL)) && 
#line 669 "../../gcc/config/i386/sse.md"
(TARGET_AVX2)))
            return -1;
          return 10270; /* vpdpbusd_v8si */

        case 2:
          if (!
#line 30591 "../../gcc/config/i386/sse.md"
(TARGET_AVXVNNI || (TARGET_AVX512VNNI && TARGET_AVX512VL)))
            return -1;
          return 10271; /* vpdpbusd_v4si */

        default:
          return -1;
        }

    case 206:
      switch (pattern174 (x1))
        {
        case 0:
          if (!
#line 30649 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VNNI && TARGET_EVEX512))
            return -1;
          return 10278; /* vpdpbusds_v16si */

        case 1:
          if (!(
#line 30660 "../../gcc/config/i386/sse.md"
(TARGET_AVXVNNI || (TARGET_AVX512VNNI && TARGET_AVX512VL)) && 
#line 669 "../../gcc/config/i386/sse.md"
(TARGET_AVX2)))
            return -1;
          return 10279; /* vpdpbusds_v8si */

        case 2:
          if (!
#line 30660 "../../gcc/config/i386/sse.md"
(TARGET_AVXVNNI || (TARGET_AVX512VNNI && TARGET_AVX512VL)))
            return -1;
          return 10280; /* vpdpbusds_v4si */

        default:
          return -1;
        }

    case 207:
      switch (pattern174 (x1))
        {
        case 0:
          if (!
#line 30718 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VNNI && TARGET_EVEX512))
            return -1;
          return 10287; /* vpdpwssd_v16si */

        case 1:
          if (!(
#line 30729 "../../gcc/config/i386/sse.md"
(TARGET_AVXVNNI || (TARGET_AVX512VNNI && TARGET_AVX512VL)) && 
#line 669 "../../gcc/config/i386/sse.md"
(TARGET_AVX2)))
            return -1;
          return 10288; /* vpdpwssd_v8si */

        case 2:
          if (!
#line 30729 "../../gcc/config/i386/sse.md"
(TARGET_AVXVNNI || (TARGET_AVX512VNNI && TARGET_AVX512VL)))
            return -1;
          return 10289; /* vpdpwssd_v4si */

        default:
          return -1;
        }

    case 208:
      switch (pattern174 (x1))
        {
        case 0:
          if (!
#line 30787 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VNNI && TARGET_EVEX512))
            return -1;
          return 10296; /* vpdpwssds_v16si */

        case 1:
          if (!(
#line 30798 "../../gcc/config/i386/sse.md"
(TARGET_AVXVNNI || (TARGET_AVX512VNNI && TARGET_AVX512VL)) && 
#line 669 "../../gcc/config/i386/sse.md"
(TARGET_AVX2)))
            return -1;
          return 10297; /* vpdpwssds_v8si */

        case 2:
          if (!
#line 30798 "../../gcc/config/i386/sse.md"
(TARGET_AVXVNNI || (TARGET_AVX512VNNI && TARGET_AVX512VL)))
            return -1;
          return 10298; /* vpdpwssds_v4si */

        default:
          return -1;
        }

    case 213:
      x3 = XEXP (x1, 0);
      operands[0] = x3;
      x4 = XVECEXP (x2, 0, 0);
      operands[1] = x4;
      x5 = XVECEXP (x2, 0, 1);
      operands[2] = x5;
      x6 = XVECEXP (x2, 0, 2);
      operands[3] = x6;
      if (!const_0_to_255_operand (operands[3], E_SImode))
        return -1;
      switch (GET_MODE (operands[0]))
        {
        case E_V8DImode:
          if (pattern149 (x2, 
E_V8DImode) != 0
              || !(
#line 30911 "../../gcc/config/i386/sse.md"
(TARGET_VPCLMULQDQ) && 
#line 621 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 10317; /* vpclmulqdq_v8di */

        case E_V4DImode:
          if (pattern149 (x2, 
E_V4DImode) != 0
              || !
#line 30911 "../../gcc/config/i386/sse.md"
(TARGET_VPCLMULQDQ))
            return -1;
          return 10318; /* vpclmulqdq_v4di */

        case E_V2DImode:
          if (pattern149 (x2, 
E_V2DImode) != 0
              || !(
#line 30911 "../../gcc/config/i386/sse.md"
(TARGET_VPCLMULQDQ) && 
#line 621 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 10319; /* vpclmulqdq_v2di */

        default:
          return -1;
        }

    case 216:
      x3 = XEXP (x1, 0);
      operands[0] = x3;
      x4 = XVECEXP (x2, 0, 0);
      operands[1] = x4;
      x5 = XVECEXP (x2, 0, 1);
      operands[2] = x5;
      x6 = XVECEXP (x2, 0, 2);
      operands[3] = x6;
      switch (GET_MODE (operands[0]))
        {
        case E_V16SFmode:
          if (pattern919 (x2, 
E_V32BFmode, 
E_V16SFmode) != 0
              || !(
#line 31190 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BF16) && 
#line 540 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return -1;
          return 10347; /* avx512f_dpbf16ps_v16sf */

        case E_V8SFmode:
          if (pattern919 (x2, 
E_V16BFmode, 
E_V8SFmode) != 0
              || !(
#line 31190 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BF16) && 
#line 540 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 10349; /* avx512f_dpbf16ps_v8sf */

        case E_V4SFmode:
          if (pattern919 (x2, 
E_V8BFmode, 
E_V4SFmode) != 0
              || !(
#line 31190 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BF16) && 
#line 540 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 10351; /* avx512f_dpbf16ps_v4sf */

        default:
          return -1;
        }

    case 227:
      switch (pattern175 (x1))
        {
        case 0:
          if (!(
#line 31561 "../../gcc/config/i386/sse.md"
(TARGET_AVXVNNIINT8 || TARGET_AVX10_2_256) && 
#line 666 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 10367; /* vpdpbssd_v8si */

        case 1:
          if (!
#line 31561 "../../gcc/config/i386/sse.md"
(TARGET_AVXVNNIINT8 || TARGET_AVX10_2_256))
            return -1;
          return 10373; /* vpdpbssd_v4si */

        case 2:
          if (!
#line 31572 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_512))
            return -1;
          return 10379; /* vpdpbssd_v16si */

        default:
          return -1;
        }

    case 228:
      switch (pattern175 (x1))
        {
        case 0:
          if (!(
#line 31561 "../../gcc/config/i386/sse.md"
(TARGET_AVXVNNIINT8 || TARGET_AVX10_2_256) && 
#line 666 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 10368; /* vpdpbssds_v8si */

        case 1:
          if (!
#line 31561 "../../gcc/config/i386/sse.md"
(TARGET_AVXVNNIINT8 || TARGET_AVX10_2_256))
            return -1;
          return 10374; /* vpdpbssds_v4si */

        case 2:
          if (!
#line 31572 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_512))
            return -1;
          return 10380; /* vpdpbssds_v16si */

        default:
          return -1;
        }

    case 229:
      switch (pattern175 (x1))
        {
        case 0:
          if (!(
#line 31561 "../../gcc/config/i386/sse.md"
(TARGET_AVXVNNIINT8 || TARGET_AVX10_2_256) && 
#line 666 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 10369; /* vpdpbsud_v8si */

        case 1:
          if (!
#line 31561 "../../gcc/config/i386/sse.md"
(TARGET_AVXVNNIINT8 || TARGET_AVX10_2_256))
            return -1;
          return 10375; /* vpdpbsud_v4si */

        case 2:
          if (!
#line 31572 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_512))
            return -1;
          return 10381; /* vpdpbsud_v16si */

        default:
          return -1;
        }

    case 230:
      switch (pattern175 (x1))
        {
        case 0:
          if (!(
#line 31561 "../../gcc/config/i386/sse.md"
(TARGET_AVXVNNIINT8 || TARGET_AVX10_2_256) && 
#line 666 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 10370; /* vpdpbsuds_v8si */

        case 1:
          if (!
#line 31561 "../../gcc/config/i386/sse.md"
(TARGET_AVXVNNIINT8 || TARGET_AVX10_2_256))
            return -1;
          return 10376; /* vpdpbsuds_v4si */

        case 2:
          if (!
#line 31572 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_512))
            return -1;
          return 10382; /* vpdpbsuds_v16si */

        default:
          return -1;
        }

    case 231:
      switch (pattern175 (x1))
        {
        case 0:
          if (!(
#line 31561 "../../gcc/config/i386/sse.md"
(TARGET_AVXVNNIINT8 || TARGET_AVX10_2_256) && 
#line 666 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 10371; /* vpdpbuud_v8si */

        case 1:
          if (!
#line 31561 "../../gcc/config/i386/sse.md"
(TARGET_AVXVNNIINT8 || TARGET_AVX10_2_256))
            return -1;
          return 10377; /* vpdpbuud_v4si */

        case 2:
          if (!
#line 31572 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_512))
            return -1;
          return 10383; /* vpdpbuud_v16si */

        default:
          return -1;
        }

    case 232:
      switch (pattern175 (x1))
        {
        case 0:
          if (!(
#line 31561 "../../gcc/config/i386/sse.md"
(TARGET_AVXVNNIINT8 || TARGET_AVX10_2_256) && 
#line 666 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 10372; /* vpdpbuuds_v8si */

        case 1:
          if (!
#line 31561 "../../gcc/config/i386/sse.md"
(TARGET_AVXVNNIINT8 || TARGET_AVX10_2_256))
            return -1;
          return 10378; /* vpdpbuuds_v4si */

        case 2:
          if (!
#line 31572 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_512))
            return -1;
          return 10384; /* vpdpbuuds_v16si */

        default:
          return -1;
        }

    case 233:
      switch (pattern175 (x1))
        {
        case 0:
          if (!(
#line 31970 "../../gcc/config/i386/sse.md"
(TARGET_AVXVNNIINT16 || TARGET_AVX10_2_256) && 
#line 666 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 10521; /* vpdpwusd_v8si */

        case 1:
          if (!
#line 31970 "../../gcc/config/i386/sse.md"
(TARGET_AVXVNNIINT16 || TARGET_AVX10_2_256))
            return -1;
          return 10527; /* vpdpwusd_v4si */

        case 2:
          if (!
#line 31981 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_512))
            return -1;
          return 10533; /* vpdpwusd_v16si */

        default:
          return -1;
        }

    case 234:
      switch (pattern175 (x1))
        {
        case 0:
          if (!(
#line 31970 "../../gcc/config/i386/sse.md"
(TARGET_AVXVNNIINT16 || TARGET_AVX10_2_256) && 
#line 666 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 10522; /* vpdpwusds_v8si */

        case 1:
          if (!
#line 31970 "../../gcc/config/i386/sse.md"
(TARGET_AVXVNNIINT16 || TARGET_AVX10_2_256))
            return -1;
          return 10528; /* vpdpwusds_v4si */

        case 2:
          if (!
#line 31981 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_512))
            return -1;
          return 10534; /* vpdpwusds_v16si */

        default:
          return -1;
        }

    case 235:
      switch (pattern175 (x1))
        {
        case 0:
          if (!(
#line 31970 "../../gcc/config/i386/sse.md"
(TARGET_AVXVNNIINT16 || TARGET_AVX10_2_256) && 
#line 666 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 10523; /* vpdpwsud_v8si */

        case 1:
          if (!
#line 31970 "../../gcc/config/i386/sse.md"
(TARGET_AVXVNNIINT16 || TARGET_AVX10_2_256))
            return -1;
          return 10529; /* vpdpwsud_v4si */

        case 2:
          if (!
#line 31981 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_512))
            return -1;
          return 10535; /* vpdpwsud_v16si */

        default:
          return -1;
        }

    case 236:
      switch (pattern175 (x1))
        {
        case 0:
          if (!(
#line 31970 "../../gcc/config/i386/sse.md"
(TARGET_AVXVNNIINT16 || TARGET_AVX10_2_256) && 
#line 666 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 10524; /* vpdpwsuds_v8si */

        case 1:
          if (!
#line 31970 "../../gcc/config/i386/sse.md"
(TARGET_AVXVNNIINT16 || TARGET_AVX10_2_256))
            return -1;
          return 10530; /* vpdpwsuds_v4si */

        case 2:
          if (!
#line 31981 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_512))
            return -1;
          return 10536; /* vpdpwsuds_v16si */

        default:
          return -1;
        }

    case 237:
      switch (pattern175 (x1))
        {
        case 0:
          if (!(
#line 31970 "../../gcc/config/i386/sse.md"
(TARGET_AVXVNNIINT16 || TARGET_AVX10_2_256) && 
#line 666 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 10525; /* vpdpwuud_v8si */

        case 1:
          if (!
#line 31970 "../../gcc/config/i386/sse.md"
(TARGET_AVXVNNIINT16 || TARGET_AVX10_2_256))
            return -1;
          return 10531; /* vpdpwuud_v4si */

        case 2:
          if (!
#line 31981 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_512))
            return -1;
          return 10537; /* vpdpwuud_v16si */

        default:
          return -1;
        }

    case 238:
      switch (pattern175 (x1))
        {
        case 0:
          if (!(
#line 31970 "../../gcc/config/i386/sse.md"
(TARGET_AVXVNNIINT16 || TARGET_AVX10_2_256) && 
#line 666 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 10526; /* vpdpwuuds_v8si */

        case 1:
          if (!
#line 31970 "../../gcc/config/i386/sse.md"
(TARGET_AVXVNNIINT16 || TARGET_AVX10_2_256))
            return -1;
          return 10532; /* vpdpwuuds_v4si */

        case 2:
          if (!
#line 31981 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_512))
            return -1;
          return 10538; /* vpdpwuuds_v16si */

        default:
          return -1;
        }

    case 244:
      x3 = XEXP (x1, 0);
      operands[0] = x3;
      x4 = XVECEXP (x2, 0, 0);
      operands[1] = x4;
      x5 = XVECEXP (x2, 0, 1);
      operands[2] = x5;
      x6 = XVECEXP (x2, 0, 2);
      operands[3] = x6;
      switch (GET_MODE (operands[0]))
        {
        case E_V16SFmode:
          if (pattern169 (x2, 
E_V16SFmode) != 0
              || !(
#line 32033 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256) && 
#line 546 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_512)))
            return -1;
          return 10575; /* vdpphps_v16sf */

        case E_V8SFmode:
          if (pattern169 (x2, 
E_V8SFmode) != 0
              || !
#line 32033 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
            return -1;
          return 10576; /* vdpphps_v8sf */

        case E_V4SFmode:
          if (pattern169 (x2, 
E_V4SFmode) != 0
              || !
#line 32033 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
            return -1;
          return 10577; /* vdpphps_v4sf */

        default:
          return -1;
        }

    case 278:
      x3 = XEXP (x1, 0);
      operands[0] = x3;
      x4 = XVECEXP (x2, 0, 0);
      operands[1] = x4;
      x5 = XVECEXP (x2, 0, 1);
      operands[2] = x5;
      x6 = XVECEXP (x2, 0, 2);
      operands[3] = x6;
      if (!const_0_to_255_operand (operands[3], E_SImode))
        return -1;
      switch (GET_MODE (operands[0]))
        {
        case E_V32BFmode:
          if (pattern1030 (x2, 
E_V32BFmode) != 0
              || !(
#line 32637 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256) && 
#line 565 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_512)))
            return -1;
          return 10929; /* avx10_2_minmaxnepbf16_v32bf */

        case E_V16BFmode:
          if (pattern1030 (x2, 
E_V16BFmode) != 0
              || !
#line 32637 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
            return -1;
          return 10931; /* avx10_2_minmaxnepbf16_v16bf */

        case E_V8BFmode:
          if (pattern1030 (x2, 
E_V8BFmode) != 0
              || !
#line 32637 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
            return -1;
          return 10933; /* avx10_2_minmaxnepbf16_v8bf */

        default:
          return -1;
        }

    case 279:
      return recog_253 (x1, insn, pnum_clobbers);

    default:
      return -1;
    }
}

 int
recog_287 (rtx x1 ATTRIBUTE_UNUSED,
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
  operands[2] = x4;
  res = recog_286 (x1, insn, pnum_clobbers);
  if (res >= 0)
    return res;
  x5 = XVECEXP (x3, 0, 1);
  if (GET_CODE (x5) != CONST_INT)
    return -1;
  x6 = XVECEXP (x3, 0, 2);
  if (GET_CODE (x6) != CONST_INT)
    return -1;
  x7 = XVECEXP (x3, 0, 3);
  if (GET_CODE (x7) != CONST_INT)
    return -1;
  switch (XWINT (x4, 0))
    {
    case 0L:
      if (XWINT (x5, 0) != 1L
          || XWINT (x6, 0) != 2L
          || XWINT (x7, 0) != 3L)
        return -1;
      switch (GET_MODE (operands[0]))
        {
        case E_V4DFmode:
          if (!nonimmediate_operand (operands[0], E_V4DFmode)
              || GET_MODE (x2) != E_V4DFmode
              || !nonimmediate_operand (operands[1], E_V8DFmode)
              || !(
#line 12637 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && !(MEM_P (operands[0]) && MEM_P (operands[1]))) && 
#line 718 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return -1;
          return 5344; /* vec_extract_lo_v8df */

        case E_V4DImode:
          if (!nonimmediate_operand (operands[0], E_V4DImode)
              || GET_MODE (x2) != E_V4DImode
              || !nonimmediate_operand (operands[1], E_V8DImode)
              || !(
#line 12637 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && !(MEM_P (operands[0]) && MEM_P (operands[1]))) && 
#line 718 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return -1;
          return 5345; /* vec_extract_lo_v8di */

        case E_V4SImode:
          if (!nonimmediate_operand (operands[0], E_V4SImode)
              || GET_MODE (x2) != E_V4SImode
              || !nonimmediate_operand (operands[1], E_V8SImode)
              || !
#line 12970 "../../gcc/config/i386/sse.md"
(TARGET_AVX
   && !(MEM_P (operands[0]) && MEM_P (operands[1]))))
            return -1;
          return 5368; /* vec_extract_lo_v8si */

        case E_V4SFmode:
          if (!nonimmediate_operand (operands[0], E_V4SFmode)
              || GET_MODE (x2) != E_V4SFmode
              || !nonimmediate_operand (operands[1], E_V8SFmode)
              || !
#line 12970 "../../gcc/config/i386/sse.md"
(TARGET_AVX
   && !(MEM_P (operands[0]) && MEM_P (operands[1]))))
            return -1;
          return 5369; /* vec_extract_lo_v8sf */

        default:
          return -1;
        }

    case 4L:
      if (XWINT (x5, 0) != 5L
          || XWINT (x6, 0) != 6L
          || XWINT (x7, 0) != 7L)
        return -1;
      switch (GET_MODE (operands[0]))
        {
        case E_V4DFmode:
          if (!nonimmediate_operand (operands[0], E_V4DFmode)
              || GET_MODE (x2) != E_V4DFmode
              || !register_operand (operands[1], E_V8DFmode)
              || !(
#line 12673 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 718 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return -1;
          return 5348; /* vec_extract_hi_v8df */

        case E_V4DImode:
          if (!nonimmediate_operand (operands[0], E_V4DImode)
              || GET_MODE (x2) != E_V4DImode
              || !register_operand (operands[1], E_V8DImode)
              || !(
#line 12673 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 718 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return -1;
          return 5349; /* vec_extract_hi_v8di */

        case E_V4SImode:
          if (!nonimmediate_operand (operands[0], E_V4SImode)
              || GET_MODE (x2) != E_V4SImode
              || !register_operand (operands[1], E_V8SImode)
              || !
#line 13002 "../../gcc/config/i386/sse.md"
(TARGET_AVX))
            return -1;
          return 5372; /* vec_extract_hi_v8si */

        case E_V4SFmode:
          if (!nonimmediate_operand (operands[0], E_V4SFmode)
              || GET_MODE (x2) != E_V4SFmode
              || !register_operand (operands[1], E_V8SFmode)
              || !
#line 13002 "../../gcc/config/i386/sse.md"
(TARGET_AVX))
            return -1;
          return 5373; /* vec_extract_hi_v8sf */

        default:
          return -1;
        }

    default:
      return -1;
    }
}

 int
recog_294 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  x4 = XVECEXP (x3, 0, 4);
  if (GET_CODE (x4) != CONST_INT)
    return -1;
  operands[6] = x4;
  res = recog_293 (x1, insn, pnum_clobbers);
  if (res >= 0)
    return res;
  if (XWINT (x4, 0) != 4L)
    return -1;
  x5 = XVECEXP (x3, 0, 5);
  if (x5 != const_int_rtx[MAX_SAVED_CONST_INT + 5])
    return -1;
  x6 = XVECEXP (x3, 0, 6);
  if (x6 != const_int_rtx[MAX_SAVED_CONST_INT + 6])
    return -1;
  x7 = XVECEXP (x3, 0, 7);
  if (x7 != const_int_rtx[MAX_SAVED_CONST_INT + 7]
      || pattern1415 (x3) != 0
      || !register_operand (operands[0], E_V16HImode)
      || GET_MODE (x2) != E_V16HImode
      || !nonimmediate_operand (operands[1], E_V16HImode)
      || pattern674 (x3) != 0)
    return -1;
  x8 = XVECEXP (x3, 0, 8);
  operands[6] = x8;
  if (!const_8_to_11_operand (operands[6], E_VOIDmode))
    return -1;
  x9 = XVECEXP (x3, 0, 9);
  operands[7] = x9;
  if (!const_8_to_11_operand (operands[7], E_VOIDmode))
    return -1;
  x10 = XVECEXP (x3, 0, 10);
  operands[8] = x10;
  if (!const_8_to_11_operand (operands[8], E_VOIDmode))
    return -1;
  x11 = XVECEXP (x3, 0, 11);
  operands[9] = x11;
  if (!const_8_to_11_operand (operands[9], E_VOIDmode)
      || !
#line 20780 "../../gcc/config/i386/sse.md"
(TARGET_AVX2
   && 1 && 1
   && INTVAL (operands[2]) + 8 == INTVAL (operands[6])
   && INTVAL (operands[3]) + 8 == INTVAL (operands[7])
   && INTVAL (operands[4]) + 8 == INTVAL (operands[8])
   && INTVAL (operands[5]) + 8 == INTVAL (operands[9])))
    return -1;
  return 8442; /* avx2_pshuflw_1 */
}

 int
recog_297 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  x4 = XVECEXP (x3, 0, 0);
  operands[3] = x4;
  if (!const_int_operand (operands[3], E_VOIDmode))
    return -1;
  switch (GET_MODE (operands[0]))
    {
    case E_V4SFmode:
      if (!register_operand (operands[0], E_V4SFmode)
          || GET_MODE (x2) != E_V4SFmode)
        return -1;
      if (nonimmediate_operand (operands[1], E_V4SFmode))
        {
          if (avx_vbroadcast_operand (operands[2], E_VOIDmode)
              && 
#line 27360 "../../gcc/config/i386/sse.md"
(TARGET_AVX))
            return 9151; /* *avx_vperm_broadcast_v4sf */
          if (
#line 27497 "../../gcc/config/i386/sse.md"
(TARGET_AVX && 1
   && avx_vpermilp_parallel (operands[2], V4SFmode)))
            return 9158; /* *avx_vpermilpv4sf */
        }
      if (!register_operand (operands[1], E_V4SFmode)
          || !palignr_operand (operands[2], E_VOIDmode)
          || !
#line 28349 "../../gcc/config/i386/sse.md"
(TARGET_SSSE3))
        return -1;
      return 9456; /* *ssse3_palignrv4sf_perm */

    case E_V8SFmode:
      if (!register_operand (operands[0], E_V8SFmode)
          || GET_MODE (x2) != E_V8SFmode
          || !nonimmediate_operand (operands[1], E_V8SFmode))
        return -1;
      if (avx_vbroadcast_operand (operands[2], E_VOIDmode)
          && 
#line 27388 "../../gcc/config/i386/sse.md"
(TARGET_AVX
   && (V8SFmode != V4DFmode || !TARGET_AVX2 || operands[3] == const0_rtx)))
        return 9152; /* *avx_vperm_broadcast_v8sf */
      if (!(
#line 27497 "../../gcc/config/i386/sse.md"
(TARGET_AVX && 1
   && avx_vpermilp_parallel (operands[2], V8SFmode)) && 
#line 375 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
        return -1;
      return 9156; /* *avx_vpermilpv8sf */

    case E_V4DFmode:
      if (!register_operand (operands[0], E_V4DFmode)
          || GET_MODE (x2) != E_V4DFmode
          || !nonimmediate_operand (operands[1], E_V4DFmode))
        return -1;
      if (avx_vbroadcast_operand (operands[2], E_VOIDmode)
          && 
#line 27388 "../../gcc/config/i386/sse.md"
(TARGET_AVX
   && (V4DFmode != V4DFmode || !TARGET_AVX2 || operands[3] == const0_rtx)))
        return 9153; /* *avx_vperm_broadcast_v4df */
      if (!(
#line 27497 "../../gcc/config/i386/sse.md"
(TARGET_AVX && 1
   && avx_vpermilp_parallel (operands[2], V4DFmode)) && 
#line 376 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
        return -1;
      return 9162; /* *avx_vpermilpv4df */

    case E_V16SFmode:
      if (!register_operand (operands[0], E_V16SFmode)
          || GET_MODE (x2) != E_V16SFmode
          || !nonimmediate_operand (operands[1], E_V16SFmode)
          || !(
#line 27497 "../../gcc/config/i386/sse.md"
(TARGET_AVX && 1
   && avx_vpermilp_parallel (operands[2], V16SFmode)) && 
#line 375 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
        return -1;
      return 9154; /* *avx512f_vpermilpv16sf */

    case E_V8DFmode:
      if (!register_operand (operands[0], E_V8DFmode)
          || GET_MODE (x2) != E_V8DFmode
          || !nonimmediate_operand (operands[1], E_V8DFmode)
          || !(
#line 27497 "../../gcc/config/i386/sse.md"
(TARGET_AVX && 1
   && avx_vpermilp_parallel (operands[2], V8DFmode)) && 
#line 376 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
        return -1;
      return 9160; /* *avx512f_vpermilpv8df */

    case E_V2DFmode:
      if (!register_operand (operands[0], E_V2DFmode)
          || GET_MODE (x2) != E_V2DFmode)
        return -1;
      if (nonimmediate_operand (operands[1], E_V2DFmode)
          && (
#line 27497 "../../gcc/config/i386/sse.md"
(TARGET_AVX && 1
   && avx_vpermilp_parallel (operands[2], V2DFmode)) && 
#line 377 "../../gcc/config/i386/sse.md"
(TARGET_SSE2)))
        return 9164; /* *avx_vpermilpv2df */
      if (!register_operand (operands[1], E_V2DFmode)
          || !palignr_operand (operands[2], E_VOIDmode)
          || !(
#line 28349 "../../gcc/config/i386/sse.md"
(TARGET_SSSE3) && 
#line 343 "../../gcc/config/i386/sse.md"
(TARGET_SSE2)))
        return -1;
      return 9457; /* *ssse3_palignrv2df_perm */

    case E_V16QImode:
      if (pattern1144 (x2, 
E_V16QImode) != 0
          || !
#line 28349 "../../gcc/config/i386/sse.md"
(TARGET_SSSE3))
        return -1;
      return 9450; /* *ssse3_palignrv16qi_perm */

    case E_V8HImode:
      if (pattern1144 (x2, 
E_V8HImode) != 0
          || !
#line 28349 "../../gcc/config/i386/sse.md"
(TARGET_SSSE3))
        return -1;
      return 9451; /* *ssse3_palignrv8hi_perm */

    case E_V8HFmode:
      if (pattern1144 (x2, 
E_V8HFmode) != 0
          || !
#line 28349 "../../gcc/config/i386/sse.md"
(TARGET_SSSE3))
        return -1;
      return 9452; /* *ssse3_palignrv8hf_perm */

    case E_V8BFmode:
      if (pattern1144 (x2, 
E_V8BFmode) != 0
          || !
#line 28349 "../../gcc/config/i386/sse.md"
(TARGET_SSSE3))
        return -1;
      return 9453; /* *ssse3_palignrv8bf_perm */

    case E_V4SImode:
      if (pattern1144 (x2, 
E_V4SImode) != 0
          || !
#line 28349 "../../gcc/config/i386/sse.md"
(TARGET_SSSE3))
        return -1;
      return 9454; /* *ssse3_palignrv4si_perm */

    case E_V2DImode:
      if (pattern1144 (x2, 
E_V2DImode) != 0
          || !
#line 28349 "../../gcc/config/i386/sse.md"
(TARGET_SSSE3))
        return -1;
      return 9455; /* *ssse3_palignrv2di_perm */

    default:
      return -1;
    }
}

 int
recog_307 (rtx x1 ATTRIBUTE_UNUSED,
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
          return 5527; /* *avx512bw_vpternlogv64qi_1 */

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
          return 5554; /* *avx512vl_vpternlogv32qi_1 */

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
          return 5581; /* *avx512vl_vpternlogv16qi_1 */

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
          return 5608; /* *avx512bw_vpternlogv32hi_1 */

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
          return 5635; /* *avx512vl_vpternlogv16hi_1 */

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
          return 5662; /* *avx512vl_vpternlogv8hi_1 */

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
          return 5689; /* *avx512f_vpternlogv16si_1 */

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
          return 5716; /* *avx512vl_vpternlogv8si_1 */

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
          return 5743; /* *avx512vl_vpternlogv4si_1 */

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
          return 5770; /* *avx512f_vpternlogv8di_1 */

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
          return 5797; /* *avx512vl_vpternlogv4di_1 */

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
          return 5824; /* *avx512vl_vpternlogv2di_1 */

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
          return 5530; /* *avx512bw_vpternlogv64qi_1 */

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
          return 5557; /* *avx512vl_vpternlogv32qi_1 */

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
          return 5584; /* *avx512vl_vpternlogv16qi_1 */

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
          return 5611; /* *avx512bw_vpternlogv32hi_1 */

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
          return 5638; /* *avx512vl_vpternlogv16hi_1 */

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
          return 5665; /* *avx512vl_vpternlogv8hi_1 */

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
          return 5692; /* *avx512f_vpternlogv16si_1 */

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
          return 5719; /* *avx512vl_vpternlogv8si_1 */

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
          return 5746; /* *avx512vl_vpternlogv4si_1 */

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
          return 5773; /* *avx512f_vpternlogv8di_1 */

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
          return 5800; /* *avx512vl_vpternlogv4di_1 */

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
          return 5827; /* *avx512vl_vpternlogv2di_1 */

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
          return 5533; /* *avx512bw_vpternlogv64qi_1 */

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
          return 5560; /* *avx512vl_vpternlogv32qi_1 */

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
          return 5587; /* *avx512vl_vpternlogv16qi_1 */

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
          return 5614; /* *avx512bw_vpternlogv32hi_1 */

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
          return 5641; /* *avx512vl_vpternlogv16hi_1 */

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
          return 5668; /* *avx512vl_vpternlogv8hi_1 */

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
          return 5695; /* *avx512f_vpternlogv16si_1 */

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
          return 5722; /* *avx512vl_vpternlogv8si_1 */

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
          return 5749; /* *avx512vl_vpternlogv4si_1 */

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
          return 5776; /* *avx512f_vpternlogv8di_1 */

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
          return 5803; /* *avx512vl_vpternlogv4di_1 */

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
          return 5830; /* *avx512vl_vpternlogv2di_1 */

        case 36:
          if (!(
#line 13946 "../../gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 332 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 6817; /* *avx512bw_vpternlogv64qi_3 */

        case 37:
          if (!(
#line 13946 "../../gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 332 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 6826; /* *avx512vl_vpternlogv32qi_3 */

        case 38:
          if (!
#line 13946 "../../gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()))
            return -1;
          return 6835; /* *avx512vl_vpternlogv16qi_3 */

        case 39:
          if (!(
#line 13946 "../../gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 333 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 6844; /* *avx512bw_vpternlogv32hi_3 */

        case 40:
          if (!(
#line 13946 "../../gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 333 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 6853; /* *avx512vl_vpternlogv16hi_3 */

        case 41:
          if (!
#line 13946 "../../gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()))
            return -1;
          return 6862; /* *avx512vl_vpternlogv8hi_3 */

        case 42:
          if (!(
#line 13946 "../../gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 334 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 6871; /* *avx512f_vpternlogv16si_3 */

        case 43:
          if (!(
#line 13946 "../../gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 334 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 6880; /* *avx512vl_vpternlogv8si_3 */

        case 44:
          if (!
#line 13946 "../../gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()))
            return -1;
          return 6889; /* *avx512vl_vpternlogv4si_3 */

        case 45:
          if (!(
#line 13946 "../../gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 335 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 6898; /* *avx512f_vpternlogv8di_3 */

        case 46:
          if (!(
#line 13946 "../../gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 335 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 6907; /* *avx512vl_vpternlogv4di_3 */

        case 47:
          if (!
#line 13946 "../../gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()))
            return -1;
          return 6916; /* *avx512vl_vpternlogv2di_3 */

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
          return 6175; /* *avx512bw_vpternlogv64qi_2 */

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
          return 6202; /* *avx512vl_vpternlogv32qi_2 */

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
          return 6229; /* *avx512vl_vpternlogv16qi_2 */

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
          return 6256; /* *avx512bw_vpternlogv32hi_2 */

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
          return 6283; /* *avx512vl_vpternlogv16hi_2 */

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
          return 6310; /* *avx512vl_vpternlogv8hi_2 */

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
          return 6337; /* *avx512f_vpternlogv16si_2 */

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
          return 6364; /* *avx512vl_vpternlogv8si_2 */

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
          return 6391; /* *avx512vl_vpternlogv4si_2 */

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
          return 6418; /* *avx512f_vpternlogv8di_2 */

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
          return 6445; /* *avx512vl_vpternlogv4di_2 */

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
          return 6472; /* *avx512vl_vpternlogv2di_2 */

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
          return 6178; /* *avx512bw_vpternlogv64qi_2 */

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
          return 6205; /* *avx512vl_vpternlogv32qi_2 */

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
          return 6232; /* *avx512vl_vpternlogv16qi_2 */

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
          return 6259; /* *avx512bw_vpternlogv32hi_2 */

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
          return 6286; /* *avx512vl_vpternlogv16hi_2 */

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
          return 6313; /* *avx512vl_vpternlogv8hi_2 */

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
          return 6340; /* *avx512f_vpternlogv16si_2 */

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
          return 6367; /* *avx512vl_vpternlogv8si_2 */

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
          return 6394; /* *avx512vl_vpternlogv4si_2 */

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
          return 6421; /* *avx512f_vpternlogv8di_2 */

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
          return 6448; /* *avx512vl_vpternlogv4di_2 */

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
          return 6475; /* *avx512vl_vpternlogv2di_2 */

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
          return 6181; /* *avx512bw_vpternlogv64qi_2 */

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
          return 6208; /* *avx512vl_vpternlogv32qi_2 */

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
          return 6235; /* *avx512vl_vpternlogv16qi_2 */

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
          return 6262; /* *avx512bw_vpternlogv32hi_2 */

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
          return 6289; /* *avx512vl_vpternlogv16hi_2 */

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
          return 6316; /* *avx512vl_vpternlogv8hi_2 */

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
          return 6343; /* *avx512f_vpternlogv16si_2 */

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
          return 6370; /* *avx512vl_vpternlogv8si_2 */

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
          return 6397; /* *avx512vl_vpternlogv4si_2 */

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
          return 6424; /* *avx512f_vpternlogv8di_2 */

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
          return 6451; /* *avx512vl_vpternlogv4di_2 */

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
          return 6478; /* *avx512vl_vpternlogv2di_2 */

        default:
          return -1;
        }

    default:
      return -1;
    }
}

 int
recog_316 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12, x13, x14, x15, x16, x17;
  rtx x18, x19, x20, x21, x22, x23, x24, x25;
  rtx x26, x27, x28, x29, x30, x31, x32, x33;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  x5 = XEXP (x4, 1);
  if (GET_CODE (x5) != CONST_VECTOR
      || XVECLEN (x5, 0) != 32
      || pattern1359 (x5, 
E_V32HImode) != 0)
    return -1;
  x6 = XVECEXP (x5, 0, 8);
  if (x6 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
    return -1;
  x7 = XVECEXP (x5, 0, 9);
  if (x7 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
    return -1;
  x8 = XVECEXP (x5, 0, 10);
  if (x8 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
    return -1;
  x9 = XVECEXP (x5, 0, 11);
  if (x9 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
    return -1;
  x10 = XVECEXP (x5, 0, 12);
  if (x10 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
    return -1;
  x11 = XVECEXP (x5, 0, 13);
  if (x11 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
    return -1;
  x12 = XVECEXP (x5, 0, 14);
  if (x12 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
    return -1;
  x13 = XVECEXP (x5, 0, 15);
  if (x13 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
    return -1;
  x14 = XVECEXP (x5, 0, 16);
  if (x14 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
    return -1;
  x15 = XVECEXP (x5, 0, 17);
  if (x15 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
    return -1;
  x16 = XVECEXP (x5, 0, 18);
  if (x16 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
    return -1;
  x17 = XVECEXP (x5, 0, 19);
  if (x17 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
    return -1;
  x18 = XVECEXP (x5, 0, 20);
  if (x18 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
    return -1;
  x19 = XVECEXP (x5, 0, 21);
  if (x19 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
    return -1;
  x20 = XVECEXP (x5, 0, 22);
  if (x20 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
    return -1;
  x21 = XVECEXP (x5, 0, 23);
  if (x21 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
    return -1;
  x22 = XVECEXP (x5, 0, 24);
  if (x22 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
    return -1;
  x23 = XVECEXP (x5, 0, 25);
  if (x23 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
    return -1;
  x24 = XVECEXP (x5, 0, 26);
  if (x24 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
    return -1;
  x25 = XVECEXP (x5, 0, 27);
  if (x25 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
    return -1;
  x26 = XVECEXP (x5, 0, 28);
  if (x26 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
    return -1;
  x27 = XVECEXP (x5, 0, 29);
  if (x27 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
    return -1;
  x28 = XVECEXP (x5, 0, 30);
  if (x28 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
    return -1;
  x29 = XVECEXP (x5, 0, 31);
  if (x29 != const_int_rtx[MAX_SAVED_CONST_INT + 1]
      || !register_operand (operands[0], E_V32HImode)
      || GET_MODE (x2) != E_V32HImode
      || GET_MODE (x3) != E_V32SImode
      || pattern1512 (x4, 
E_V32SImode) != 0)
    return -1;
  x30 = XEXP (x4, 0);
  x31 = XEXP (x30, 0);
  x32 = XEXP (x31, 1);
  if (GET_MODE (x32) != E_V32SImode)
    return -1;
  x33 = XEXP (x32, 0);
  operands[2] = x33;
  if (!nonimmediate_operand (operands[2], E_V32HImode)
      || !
#line 22827 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512))
    return -1;
  return 8609; /* avx512bw_umulhrswv32hi3 */
}

 int
recog_317 (rtx x1 ATTRIBUTE_UNUSED,
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
      x3 = XEXP (x1, 0);
      operands[0] = x3;
      switch (XINT (x2, 1))
        {
        case 177:
          return recog_216 (x1, insn, pnum_clobbers);

        case 118:
          if (pnum_clobbers == NULL
              || GET_MODE (x2) != E_V4SImode
              || !register_operand (operands[0], E_V4SImode))
            return -1;
          x4 = XVECEXP (x2, 0, 0);
          operands[1] = x4;
          if (!nonimmediate_operand (operands[1], E_DImode)
              || !
#line 1878 "../../gcc/config/i386/sse.md"
(!TARGET_64BIT && TARGET_SSE2 && TARGET_INTER_UNIT_MOVES_TO_VEC))
            return -1;
          *pnum_clobbers = 1;
          return 2552; /* movdi_to_sse */

        case 119:
          x4 = XVECEXP (x2, 0, 0);
          operands[1] = x4;
          switch (GET_MODE (operands[0]))
            {
            case E_V32QImode:
              if (!register_operand (operands[0], E_V32QImode)
                  || GET_MODE (x2) != E_V32QImode
                  || !memory_operand (operands[1], E_V32QImode)
                  || !(
#line 1986 "../../gcc/config/i386/sse.md"
(TARGET_SSE3) && 
#line 601 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
                return -1;
              return 2553; /* avx_lddqu256 */

            case E_V16QImode:
              if (!register_operand (operands[0], E_V16QImode)
                  || GET_MODE (x2) != E_V16QImode
                  || !memory_operand (operands[1], E_V16QImode)
                  || !
#line 1986 "../../gcc/config/i386/sse.md"
(TARGET_SSE3))
                return -1;
              return 2554; /* sse3_lddqu */

            default:
              return -1;
            }

        case 117:
          return recog_211 (x1, insn, pnum_clobbers);

        case 54:
          return recog_214 (x1, insn, pnum_clobbers);

        case 161:
          switch (pattern320 (x2))
            {
            case 0:
              if (!(
#line 3004 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 521 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                return -1;
              return 2888; /* *rcp14v16sf */

            case 1:
              if (!(
#line 3004 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 521 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                return -1;
              return 2890; /* *rcp14v8sf */

            case 2:
              if (!(
#line 3004 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 521 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                return -1;
              return 2892; /* *rcp14v4sf */

            case 3:
              if (!(
#line 3004 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 522 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                return -1;
              return 2894; /* *rcp14v8df */

            case 4:
              if (!(
#line 3004 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 522 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                return -1;
              return 2896; /* *rcp14v4df */

            case 5:
              if (!(
#line 3004 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 522 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                return -1;
              return 2898; /* *rcp14v2df */

            default:
              return -1;
            }

        case 55:
          return recog_213 (x1, insn, pnum_clobbers);

        case 162:
          switch (pattern320 (x2))
            {
            case 0:
              if (!(
#line 3158 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 521 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                return -1;
              return 2966; /* *rsqrt14v16sf */

            case 1:
              if (!(
#line 3158 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 521 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                return -1;
              return 2968; /* *rsqrt14v8sf */

            case 2:
              if (!(
#line 3158 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 521 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                return -1;
              return 2970; /* *rsqrt14v4sf */

            case 3:
              if (!(
#line 3158 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 522 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                return -1;
              return 2972; /* *rsqrt14v8df */

            case 4:
              if (!(
#line 3158 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 522 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                return -1;
              return 2974; /* *rsqrt14v4df */

            case 5:
              if (!(
#line 3158 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 522 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                return -1;
              return 2976; /* *rsqrt14v2df */

            default:
              return -1;
            }

        case 156:
          return recog_209 (x1, insn, pnum_clobbers);

        case 46:
          return recog_206 (x1, insn, pnum_clobbers);

        case 172:
          return recog_210 (x1, insn, pnum_clobbers);

        case 173:
          return recog_212 (x1, insn, pnum_clobbers);

        case 165:
          return recog_208 (x1, insn, pnum_clobbers);

        case 127:
          x4 = XVECEXP (x2, 0, 0);
          operands[1] = x4;
          switch (GET_MODE (operands[0]))
            {
            case E_V8DImode:
              if (!register_operand (operands[0], E_V8DImode)
                  || GET_MODE (x2) != E_V8DImode
                  || !memory_operand (operands[1], E_V8DImode)
                  || !(
#line 23779 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1) && 
#line 708 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
                return -1;
              return 8714; /* avx512f_movntdqa */

            case E_V4DImode:
              if (!register_operand (operands[0], E_V4DImode)
                  || GET_MODE (x2) != E_V4DImode
                  || !memory_operand (operands[1], E_V4DImode)
                  || !(
#line 23779 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1) && 
#line 708 "../../gcc/config/i386/sse.md"
(TARGET_AVX2)))
                return -1;
              return 8715; /* avx2_movntdqa */

            case E_V2DImode:
              if (!register_operand (operands[0], E_V2DImode)
                  || GET_MODE (x2) != E_V2DImode
                  || !memory_operand (operands[1], E_V2DImode)
                  || !
#line 23779 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1))
                return -1;
              return 8716; /* sse4_1_movntdqa */

            default:
              return -1;
            }

        case 129:
          if (GET_MODE (x2) != E_V8HImode
              || !register_operand (operands[0], E_V8HImode))
            return -1;
          x4 = XVECEXP (x2, 0, 0);
          operands[1] = x4;
          if (!vector_operand (operands[1], E_V8HImode)
              || !
#line 24104 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1))
            return -1;
          return 8749; /* sse4_1_phminposuw */

        case 136:
          x4 = XVECEXP (x2, 0, 0);
          operands[1] = x4;
          switch (GET_MODE (operands[0]))
            {
            case E_V4SFmode:
              if (!register_operand (operands[0], E_V4SFmode)
                  || GET_MODE (x2) != E_V4SFmode
                  || !nonimmediate_operand (operands[1], E_V4SFmode)
                  || !
#line 26991 "../../gcc/config/i386/sse.md"
(TARGET_XOP))
                return -1;
              return 9052; /* xop_frczv4sf2 */

            case E_V2DFmode:
              if (!register_operand (operands[0], E_V2DFmode)
                  || GET_MODE (x2) != E_V2DFmode
                  || !nonimmediate_operand (operands[1], E_V2DFmode)
                  || !
#line 26991 "../../gcc/config/i386/sse.md"
(TARGET_XOP))
                return -1;
              return 9053; /* xop_frczv2df2 */

            case E_V8SFmode:
              if (!register_operand (operands[0], E_V8SFmode)
                  || GET_MODE (x2) != E_V8SFmode
                  || !nonimmediate_operand (operands[1], E_V8SFmode)
                  || !
#line 26991 "../../gcc/config/i386/sse.md"
(TARGET_XOP))
                return -1;
              return 9054; /* xop_frczv8sf2 */

            case E_V4DFmode:
              if (!register_operand (operands[0], E_V4DFmode)
                  || GET_MODE (x2) != E_V4DFmode
                  || !nonimmediate_operand (operands[1], E_V4DFmode)
                  || !
#line 26991 "../../gcc/config/i386/sse.md"
(TARGET_XOP))
                return -1;
              return 9055; /* xop_frczv4df2 */

            default:
              return -1;
            }

        case 134:
          x4 = XVECEXP (x2, 0, 0);
          switch (GET_CODE (x4))
            {
            case NE:
            case EQ:
            case GEU:
            case GTU:
            case LEU:
            case LTU:
              operands[1] = x4;
              x5 = XEXP (x4, 0);
              operands[2] = x5;
              x6 = XEXP (x4, 1);
              operands[3] = x6;
              switch (GET_MODE (operands[0]))
                {
                case E_V16QImode:
                  if (pattern1018 (x2, 
E_V16QImode) != 0
                      || !
#line 27054 "../../gcc/config/i386/sse.md"
(TARGET_XOP))
                    return -1;
                  return 9066; /* xop_maskcmp_uns2v16qi3 */

                case E_V8HImode:
                  if (pattern1018 (x2, 
E_V8HImode) != 0
                      || !
#line 27054 "../../gcc/config/i386/sse.md"
(TARGET_XOP))
                    return -1;
                  return 9067; /* xop_maskcmp_uns2v8hi3 */

                case E_V4SImode:
                  if (pattern1018 (x2, 
E_V4SImode) != 0
                      || !
#line 27054 "../../gcc/config/i386/sse.md"
(TARGET_XOP))
                    return -1;
                  return 9068; /* xop_maskcmp_uns2v4si3 */

                case E_V2DImode:
                  if (pattern1018 (x2, 
E_V2DImode) != 0
                      || !
#line 27054 "../../gcc/config/i386/sse.md"
(TARGET_XOP))
                    return -1;
                  return 9069; /* xop_maskcmp_uns2v2di3 */

                default:
                  return -1;
                }

            default:
              return -1;
            }

        case 141:
          if (GET_MODE (x2) != E_V2DImode
              || !register_operand (operands[0], E_V2DImode))
            return -1;
          x4 = XVECEXP (x2, 0, 0);
          operands[1] = x4;
          if (!vector_operand (operands[1], E_V2DImode)
              || !
#line 27168 "../../gcc/config/i386/sse.md"
(TARGET_AES))
            return -1;
          return 9082; /* aesimc */

        case 149:
          x4 = XVECEXP (x2, 0, 0);
          operands[1] = x4;
          switch (GET_MODE (operands[0]))
            {
            case E_V4SFmode:
              if (!register_operand (operands[0], E_V4SFmode)
                  || GET_MODE (x2) != E_V4SFmode
                  || !memory_operand (operands[1], E_V4HImode)
                  || !
#line 29086 "../../gcc/config/i386/sse.md"
(TARGET_F16C || TARGET_AVX512VL))
                return -1;
              return 9645; /* *vcvtph2ps_load */

            case E_V8SFmode:
              if (!register_operand (operands[0], E_V8SFmode)
                  || GET_MODE (x2) != E_V8SFmode
                  || !nonimmediate_operand (operands[1], E_V8HImode)
                  || !
#line 29096 "../../gcc/config/i386/sse.md"
((TARGET_F16C || TARGET_AVX512VL)
   && (!false || TARGET_AVX10_2_256)))
                return -1;
              return 9647; /* vcvtph2ps256 */

            case E_V16SFmode:
              if (!register_operand (operands[0], E_V16SFmode)
                  || GET_MODE (x2) != E_V16SFmode
                  || !vector_operand (operands[1], E_V16HImode)
                  || !
#line 29109 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512))
                return -1;
              return 9651; /* *avx512f_vcvtph2ps512 */

            default:
              return -1;
            }

        case 168:
          return recog_215 (x1, insn, pnum_clobbers);

        case 253:
          switch (pattern322 (x2))
            {
            case 0:
              if (!
#line 31901 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
                return -1;
              return 10499; /* vcvtneph2bf8v16hf */

            case 1:
              if (!(
#line 31901 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256) && 
#line 31822 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_512)))
                return -1;
              return 10507; /* vcvtneph2bf8v32hf */

            default:
              return -1;
            }

        case 254:
          switch (pattern322 (x2))
            {
            case 0:
              if (!
#line 31901 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
                return -1;
              return 10501; /* vcvtneph2bf8sv16hf */

            case 1:
              if (!(
#line 31901 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256) && 
#line 31822 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_512)))
                return -1;
              return 10509; /* vcvtneph2bf8sv32hf */

            default:
              return -1;
            }

        case 255:
          switch (pattern322 (x2))
            {
            case 0:
              if (!
#line 31901 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
                return -1;
              return 10503; /* vcvtneph2hf8v16hf */

            case 1:
              if (!(
#line 31901 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256) && 
#line 31822 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_512)))
                return -1;
              return 10511; /* vcvtneph2hf8v32hf */

            default:
              return -1;
            }

        case 256:
          switch (pattern322 (x2))
            {
            case 0:
              if (!
#line 31901 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
                return -1;
              return 10505; /* vcvtneph2hf8sv16hf */

            case 1:
              if (!(
#line 31901 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256) && 
#line 31822 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_512)))
                return -1;
              return 10513; /* vcvtneph2hf8sv32hf */

            default:
              return -1;
            }

        case 257:
          x4 = XVECEXP (x2, 0, 0);
          operands[1] = x4;
          switch (GET_MODE (operands[0]))
            {
            case E_V32HFmode:
              if (!register_operand (operands[0], E_V32HFmode)
                  || GET_MODE (x2) != E_V32HFmode
                  || !nonimmediate_operand (operands[1], E_V32QImode)
                  || !(
#line 31910 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256) && 
#line 562 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_512)))
                return -1;
              return 10515; /* vcvthf82phv32hf */

            case E_V16HFmode:
              if (!register_operand (operands[0], E_V16HFmode)
                  || GET_MODE (x2) != E_V16HFmode
                  || !nonimmediate_operand (operands[1], E_V16QImode)
                  || !
#line 31910 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
                return -1;
              return 10517; /* vcvthf82phv16hf */

            case E_V8HFmode:
              if (!register_operand (operands[0], E_V8HFmode)
                  || GET_MODE (x2) != E_V8HFmode
                  || !nonimmediate_operand (operands[1], E_V16QImode)
                  || !
#line 31910 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
                return -1;
              return 10519; /* vcvthf82phv8hf */

            default:
              return -1;
            }

        case 264:
          switch (pattern323 (x2, 
E_V32BFmode, 
E_V16BFmode, 
E_V8BFmode))
            {
            case 0:
              if (!(
#line 32497 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256) && 
#line 565 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_512)))
                return -1;
              return 10729; /* avx10_2_cvtnebf162ibsv32bf */

            case 1:
              if (!
#line 32497 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
                return -1;
              return 10737; /* avx10_2_cvtnebf162ibsv16bf */

            case 2:
              if (!
#line 32497 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
                return -1;
              return 10745; /* avx10_2_cvtnebf162ibsv8bf */

            default:
              return -1;
            }

        case 265:
          switch (pattern323 (x2, 
E_V32BFmode, 
E_V16BFmode, 
E_V8BFmode))
            {
            case 0:
              if (!(
#line 32497 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256) && 
#line 565 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_512)))
                return -1;
              return 10731; /* avx10_2_cvtnebf162iubsv32bf */

            case 1:
              if (!
#line 32497 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
                return -1;
              return 10739; /* avx10_2_cvtnebf162iubsv16bf */

            case 2:
              if (!
#line 32497 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
                return -1;
              return 10747; /* avx10_2_cvtnebf162iubsv8bf */

            default:
              return -1;
            }

        case 270:
          switch (pattern323 (x2, 
E_V32BFmode, 
E_V16BFmode, 
E_V8BFmode))
            {
            case 0:
              if (!(
#line 32497 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256) && 
#line 565 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_512)))
                return -1;
              return 10733; /* avx10_2_cvttnebf162ibsv32bf */

            case 1:
              if (!
#line 32497 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
                return -1;
              return 10741; /* avx10_2_cvttnebf162ibsv16bf */

            case 2:
              if (!
#line 32497 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
                return -1;
              return 10749; /* avx10_2_cvttnebf162ibsv8bf */

            default:
              return -1;
            }

        case 271:
          switch (pattern323 (x2, 
E_V32BFmode, 
E_V16BFmode, 
E_V8BFmode))
            {
            case 0:
              if (!(
#line 32497 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256) && 
#line 565 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_512)))
                return -1;
              return 10735; /* avx10_2_cvttnebf162iubsv32bf */

            case 1:
              if (!
#line 32497 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
                return -1;
              return 10743; /* avx10_2_cvttnebf162iubsv16bf */

            case 2:
              if (!
#line 32497 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
                return -1;
              return 10751; /* avx10_2_cvttnebf162iubsv8bf */

            default:
              return -1;
            }

        case 266:
          switch (pattern323 (x2, 
E_V32HFmode, 
E_V16HFmode, 
E_V8HFmode))
            {
            case 0:
              if (!(
#line 32512 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256 && 1) && 
#line 562 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_512)))
                return -1;
              return 10753; /* avx10_2_cvtph2ibsv32hf */

            case 1:
              if (!
#line 32512 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256 && 1))
                return -1;
              return 10761; /* avx10_2_cvtph2ibsv16hf */

            case 2:
              if (!
#line 32512 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256 && 1))
                return -1;
              return 10769; /* avx10_2_cvtph2ibsv8hf */

            default:
              return -1;
            }

        case 267:
          switch (pattern323 (x2, 
E_V32HFmode, 
E_V16HFmode, 
E_V8HFmode))
            {
            case 0:
              if (!(
#line 32512 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256 && 1) && 
#line 562 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_512)))
                return -1;
              return 10757; /* avx10_2_cvtph2iubsv32hf */

            case 1:
              if (!
#line 32512 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256 && 1))
                return -1;
              return 10765; /* avx10_2_cvtph2iubsv16hf */

            case 2:
              if (!
#line 32512 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256 && 1))
                return -1;
              return 10771; /* avx10_2_cvtph2iubsv8hf */

            default:
              return -1;
            }

        case 272:
          switch (pattern323 (x2, 
E_V32HFmode, 
E_V16HFmode, 
E_V8HFmode))
            {
            case 0:
              if (!(
#line 32527 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256 && 1) && 
#line 562 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_512)))
                return -1;
              return 10773; /* avx10_2_cvttph2ibsv32hf */

            case 1:
              if (!
#line 32527 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256 && 1))
                return -1;
              return 10781; /* avx10_2_cvttph2ibsv16hf */

            case 2:
              if (!
#line 32527 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256 && 1))
                return -1;
              return 10789; /* avx10_2_cvttph2ibsv8hf */

            default:
              return -1;
            }

        case 273:
          switch (pattern323 (x2, 
E_V32HFmode, 
E_V16HFmode, 
E_V8HFmode))
            {
            case 0:
              if (!(
#line 32527 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256 && 1) && 
#line 562 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_512)))
                return -1;
              return 10777; /* avx10_2_cvttph2iubsv32hf */

            case 1:
              if (!
#line 32527 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256 && 1))
                return -1;
              return 10785; /* avx10_2_cvttph2iubsv16hf */

            case 2:
              if (!
#line 32527 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256 && 1))
                return -1;
              return 10791; /* avx10_2_cvttph2iubsv8hf */

            default:
              return -1;
            }

        case 268:
          switch (pattern324 (x2))
            {
            case 0:
              if (!(
#line 32542 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256 && 1) && 
#line 546 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_512)))
                return -1;
              return 10793; /* avx10_2_cvtps2ibsv16sf */

            case 1:
              if (!
#line 32542 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256 && 1))
                return -1;
              return 10801; /* avx10_2_cvtps2ibsv8sf */

            case 2:
              if (!
#line 32542 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256 && 1))
                return -1;
              return 10809; /* avx10_2_cvtps2ibsv4sf */

            default:
              return -1;
            }

        case 269:
          switch (pattern324 (x2))
            {
            case 0:
              if (!(
#line 32542 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256 && 1) && 
#line 546 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_512)))
                return -1;
              return 10797; /* avx10_2_cvtps2iubsv16sf */

            case 1:
              if (!
#line 32542 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256 && 1))
                return -1;
              return 10805; /* avx10_2_cvtps2iubsv8sf */

            case 2:
              if (!
#line 32542 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256 && 1))
                return -1;
              return 10811; /* avx10_2_cvtps2iubsv4sf */

            default:
              return -1;
            }

        case 274:
          switch (pattern324 (x2))
            {
            case 0:
              if (!(
#line 32557 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256 && 1) && 
#line 546 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_512)))
                return -1;
              return 10813; /* avx10_2_cvttps2ibsv16sf */

            case 1:
              if (!
#line 32557 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256 && 1))
                return -1;
              return 10821; /* avx10_2_cvttps2ibsv8sf */

            case 2:
              if (!
#line 32557 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256 && 1))
                return -1;
              return 10829; /* avx10_2_cvttps2ibsv4sf */

            default:
              return -1;
            }

        case 275:
          switch (pattern324 (x2))
            {
            case 0:
              if (!(
#line 32557 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256 && 1) && 
#line 546 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_512)))
                return -1;
              return 10817; /* avx10_2_cvttps2iubsv16sf */

            case 1:
              if (!
#line 32557 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256 && 1))
                return -1;
              return 10825; /* avx10_2_cvttps2iubsv8sf */

            case 2:
              if (!
#line 32557 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256 && 1))
                return -1;
              return 10831; /* avx10_2_cvttps2iubsv4sf */

            default:
              return -1;
            }

        case 276:
          switch (pattern325 (x2))
            {
            case 0:
              if (!(
#line 32576 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256 && 1) && 
#line 386 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_512)))
                return -1;
              return 10833; /* avx10_2_vcvttps2dqsv16sf */

            case 1:
              if (!
#line 32576 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256 && 1))
                return -1;
              return 10841; /* avx10_2_vcvttps2dqsv8sf */

            case 2:
              if (!(
#line 32576 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256 && 1) && 
#line 387 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_512)))
                return -1;
              return 10853; /* avx10_2_vcvttpd2dqsv8df */

            case 3:
              if (!
#line 32576 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256 && 1))
                return -1;
              return 10849; /* avx10_2_vcvttps2dqsv4sf */

            case 4:
              if (!
#line 32576 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256 && 1))
                return -1;
              return 10861; /* avx10_2_vcvttpd2dqsv4df */

            case 5:
              if (!
#line 32576 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256 && 1))
                return -1;
              return 10869; /* avx10_2_vcvttpd2dqsv2df */

            case 6:
              if (!(
#line 32587 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256 && 1) && 
#line 451 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_512)))
                return -1;
              return 10873; /* avx10_2_vcvttpd2qqsv8df */

            case 7:
              if (!(
#line 32598 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256 && 1) && 
#line 618 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_512)))
                return -1;
              return 10893; /* avx10_2_vcvttps2qqsv8di */

            case 8:
              if (!
#line 32587 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256 && 1))
                return -1;
              return 10881; /* avx10_2_vcvttpd2qqsv4df */

            case 9:
              if (!
#line 32598 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256 && 1))
                return -1;
              return 10901; /* avx10_2_vcvttps2qqsv4di */

            case 10:
              if (!
#line 32587 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256 && 1))
                return -1;
              return 10889; /* avx10_2_vcvttpd2qqsv2df */

            case 11:
              if (!
#line 32598 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256 && 1))
                return -1;
              return 10909; /* avx10_2_vcvttps2qqsv2di */

            default:
              return -1;
            }

        case 277:
          switch (pattern325 (x2))
            {
            case 0:
              if (!(
#line 32576 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256 && 1) && 
#line 386 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_512)))
                return -1;
              return 10837; /* avx10_2_vcvttps2udqsv16sf */

            case 1:
              if (!
#line 32576 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256 && 1))
                return -1;
              return 10845; /* avx10_2_vcvttps2udqsv8sf */

            case 2:
              if (!(
#line 32576 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256 && 1) && 
#line 387 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_512)))
                return -1;
              return 10857; /* avx10_2_vcvttpd2udqsv8df */

            case 3:
              if (!
#line 32576 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256 && 1))
                return -1;
              return 10851; /* avx10_2_vcvttps2udqsv4sf */

            case 4:
              if (!
#line 32576 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256 && 1))
                return -1;
              return 10865; /* avx10_2_vcvttpd2udqsv4df */

            case 5:
              if (!
#line 32576 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256 && 1))
                return -1;
              return 10871; /* avx10_2_vcvttpd2udqsv2df */

            case 6:
              if (!(
#line 32587 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256 && 1) && 
#line 451 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_512)))
                return -1;
              return 10877; /* avx10_2_vcvttpd2uqqsv8df */

            case 7:
              if (!(
#line 32598 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256 && 1) && 
#line 618 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_512)))
                return -1;
              return 10897; /* avx10_2_vcvttps2uqqsv8di */

            case 8:
              if (!
#line 32587 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256 && 1))
                return -1;
              return 10885; /* avx10_2_vcvttpd2uqqsv4df */

            case 9:
              if (!
#line 32598 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256 && 1))
                return -1;
              return 10905; /* avx10_2_vcvttps2uqqsv4di */

            case 10:
              if (!
#line 32587 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256 && 1))
                return -1;
              return 10891; /* avx10_2_vcvttpd2uqqsv2df */

            case 11:
              if (!
#line 32598 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256 && 1))
                return -1;
              return 10911; /* avx10_2_vcvttps2uqqsv2di */

            default:
              return -1;
            }

        case 280:
          return recog_207 (x1, insn, pnum_clobbers);

        default:
          return -1;
        }

    case 2:
      return recog_266 (x1, insn, pnum_clobbers);

    case 3:
      return recog_265 (x1, insn, pnum_clobbers);

    case 4:
      return recog_264 (x1, insn, pnum_clobbers);

    default:
      return -1;
    }
}

 int
recog_322 (rtx x1 ATTRIBUTE_UNUSED,
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
    case VEC_SELECT:
      return recog_299 (x1, insn, pnum_clobbers);

    case REG:
    case SUBREG:
    case MEM:
      operands[1] = x4;
      switch (GET_MODE (operands[0]))
        {
        case E_V2DFmode:
          if (!register_operand (operands[0], E_V2DFmode)
              || GET_MODE (x3) != E_V2DFmode
              || !nonimmediate_operand (operands[1], E_DFmode))
            return -1;
          if (
#line 14886 "../../gcc/config/i386/sse.md"
(TARGET_SSE2))
            return 7215; /* vec_dupv2df */
          if (!(
#line 27778 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 298 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 9284; /* *avx512vl_vec_dup_gprv2df */

        case E_V16SFmode:
          if (!register_operand (operands[0], E_V16SFmode)
              || GET_MODE (x3) != E_V16SFmode)
            return -1;
          switch (GET_MODE (operands[1]))
            {
            case E_V4SFmode:
              if (!nonimmediate_operand (operands[1], E_V4SFmode)
                  || !(
#line 27742 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 722 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                return -1;
              return 9230; /* *avx512f_broadcastv16sf */

            case E_SFmode:
              if (!nonimmediate_operand (operands[1], E_SFmode)
                  || !(
#line 27778 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 297 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                return -1;
              return 9274; /* *avx512f_vec_dup_gprv16sf */

            case E_V8SFmode:
              if (!nonimmediate_operand (operands[1], E_V8SFmode)
                  || !(
#line 28062 "../../gcc/config/i386/sse.md"
(TARGET_AVX512DQ) && 
#line 722 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                return -1;
              return 9330; /* *avx512dq_broadcastv16sf_1 */

            default:
              return -1;
            }

        case E_V16SImode:
          if (!register_operand (operands[0], E_V16SImode)
              || GET_MODE (x3) != E_V16SImode)
            return -1;
          switch (GET_MODE (operands[1]))
            {
            case E_V4SImode:
              if (!nonimmediate_operand (operands[1], E_V4SImode)
                  || !(
#line 27742 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 722 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                return -1;
              return 9232; /* *avx512f_broadcastv16si */

            case E_SImode:
              if (!nonimmediate_operand (operands[1], E_SImode)
                  || !(
#line 27778 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 295 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                return -1;
              return 9262; /* *avx512f_vec_dup_gprv16si */

            case E_V8SImode:
              if (!nonimmediate_operand (operands[1], E_V8SImode)
                  || !(
#line 28062 "../../gcc/config/i386/sse.md"
(TARGET_AVX512DQ) && 
#line 722 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                return -1;
              return 9332; /* *avx512dq_broadcastv16si_1 */

            default:
              return -1;
            }

        case E_V8DFmode:
          if (!register_operand (operands[0], E_V8DFmode)
              || GET_MODE (x3) != E_V8DFmode)
            return -1;
          switch (GET_MODE (operands[1]))
            {
            case E_V4DFmode:
              if (!nonimmediate_operand (operands[1], E_V4DFmode)
                  || !(
#line 27754 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 718 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                return -1;
              return 9234; /* *avx512f_broadcastv8df */

            case E_DFmode:
              if (!nonimmediate_operand (operands[1], E_DFmode)
                  || !(
#line 27778 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 298 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                return -1;
              return 9280; /* *avx512f_vec_dup_gprv8df */

            case E_V2DFmode:
              if (!nonimmediate_operand (operands[1], E_V2DFmode)
                  || !(
#line 28080 "../../gcc/config/i386/sse.md"
(TARGET_AVX512DQ) && 
#line 28073 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                return -1;
              return 9336; /* *avx512dq_broadcastv8df_1 */

            default:
              return -1;
            }

        case E_V8DImode:
          if (!register_operand (operands[0], E_V8DImode)
              || GET_MODE (x3) != E_V8DImode)
            return -1;
          switch (GET_MODE (operands[1]))
            {
            case E_V4DImode:
              if (!nonimmediate_operand (operands[1], E_V4DImode)
                  || !(
#line 27754 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 718 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                return -1;
              return 9236; /* *avx512f_broadcastv8di */

            case E_DImode:
              if (!nonimmediate_operand (operands[1], E_DImode)
                  || !(
#line 27778 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 296 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                return -1;
              return 9268; /* *avx512f_vec_dup_gprv8di */

            case E_V2DImode:
              if (!nonimmediate_operand (operands[1], E_V2DImode)
                  || !(
#line 28080 "../../gcc/config/i386/sse.md"
(TARGET_AVX512DQ) && 
#line 28073 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                return -1;
              return 9334; /* *avx512dq_broadcastv8di_1 */

            default:
              return -1;
            }

        case E_V64QImode:
          if (!register_operand (operands[0], E_V64QImode)
              || GET_MODE (x3) != E_V64QImode
              || !nonimmediate_operand (operands[1], E_QImode)
              || !(
#line 27766 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 322 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return -1;
          return 9238; /* *avx512bw_vec_dup_gprv64qi */

        case E_V16QImode:
          if (!register_operand (operands[0], E_V16QImode)
              || GET_MODE (x3) != E_V16QImode
              || !nonimmediate_operand (operands[1], E_QImode))
            return -1;
          if ((
#line 27766 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 322 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return 9240; /* *avx512vl_vec_dup_gprv16qi */
          if (!
#line 27928 "../../gcc/config/i386/sse.md"
(TARGET_AVX2))
            return -1;
          return 9295; /* *vec_dupv16qi */

        case E_V32QImode:
          if (!register_operand (operands[0], E_V32QImode)
              || GET_MODE (x3) != E_V32QImode
              || !nonimmediate_operand (operands[1], E_QImode))
            return -1;
          if ((
#line 27766 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 322 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return 9242; /* *avx512vl_vec_dup_gprv32qi */
          if (!
#line 27928 "../../gcc/config/i386/sse.md"
(TARGET_AVX2))
            return -1;
          return 9294; /* *vec_dupv32qi */

        case E_V32HImode:
          if (!register_operand (operands[0], E_V32HImode)
              || GET_MODE (x3) != E_V32HImode
              || !nonimmediate_operand (operands[1], E_HImode)
              || !(
#line 27766 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 323 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return -1;
          return 9244; /* *avx512bw_vec_dup_gprv32hi */

        case E_V16HImode:
          if (!register_operand (operands[0], E_V16HImode)
              || GET_MODE (x3) != E_V16HImode
              || !nonimmediate_operand (operands[1], E_HImode))
            return -1;
          if ((
#line 27766 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 323 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return 9246; /* *avx512vl_vec_dup_gprv16hi */
          if (!
#line 27928 "../../gcc/config/i386/sse.md"
(TARGET_AVX2))
            return -1;
          return 9296; /* *vec_dupv16hi */

        case E_V8HImode:
          if (!register_operand (operands[0], E_V8HImode)
              || GET_MODE (x3) != E_V8HImode
              || !nonimmediate_operand (operands[1], E_HImode))
            return -1;
          if ((
#line 27766 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 323 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return 9248; /* *avx512vl_vec_dup_gprv8hi */
          if (!
#line 27928 "../../gcc/config/i386/sse.md"
(TARGET_AVX2))
            return -1;
          return 9297; /* *vec_dupv8hi */

        case E_V32HFmode:
          if (!register_operand (operands[0], E_V32HFmode)
              || GET_MODE (x3) != E_V32HFmode
              || !nonimmediate_operand (operands[1], E_HFmode)
              || !(
#line 27766 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 324 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return -1;
          return 9250; /* *avx512bw_vec_dup_gprv32hf */

        case E_V16HFmode:
          if (!register_operand (operands[0], E_V16HFmode)
              || GET_MODE (x3) != E_V16HFmode
              || !nonimmediate_operand (operands[1], E_HFmode))
            return -1;
          if ((
#line 27766 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 324 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return 9252; /* *avx512vl_vec_dup_gprv16hf */
          if (!
#line 27928 "../../gcc/config/i386/sse.md"
(TARGET_AVX2))
            return -1;
          return 9300; /* *vec_dupv16hf */

        case E_V8HFmode:
          if (!register_operand (operands[0], E_V8HFmode)
              || GET_MODE (x3) != E_V8HFmode
              || !nonimmediate_operand (operands[1], E_HFmode))
            return -1;
          if ((
#line 27766 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 324 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return 9254; /* *avx512fp16_vec_dup_gprv8hf */
          if (!
#line 27928 "../../gcc/config/i386/sse.md"
(TARGET_AVX2))
            return -1;
          return 9301; /* *vec_dupv8hf */

        case E_V32BFmode:
          if (!register_operand (operands[0], E_V32BFmode)
              || GET_MODE (x3) != E_V32BFmode
              || !nonimmediate_operand (operands[1], E_BFmode)
              || !(
#line 27766 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 325 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return -1;
          return 9256; /* *avx512bw_vec_dup_gprv32bf */

        case E_V16BFmode:
          if (!register_operand (operands[0], E_V16BFmode)
              || GET_MODE (x3) != E_V16BFmode
              || !nonimmediate_operand (operands[1], E_BFmode))
            return -1;
          if ((
#line 27766 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 325 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return 9258; /* *avx512vl_vec_dup_gprv16bf */
          if (!
#line 27928 "../../gcc/config/i386/sse.md"
(TARGET_AVX2))
            return -1;
          return 9302; /* *vec_dupv16bf */

        case E_V8BFmode:
          if (!register_operand (operands[0], E_V8BFmode)
              || GET_MODE (x3) != E_V8BFmode
              || !nonimmediate_operand (operands[1], E_BFmode))
            return -1;
          if ((
#line 27766 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 325 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return 9260; /* *avx512vl_vec_dup_gprv8bf */
          if (!
#line 27928 "../../gcc/config/i386/sse.md"
(TARGET_AVX2))
            return -1;
          return 9303; /* *vec_dupv8bf */

        case E_V8SImode:
          if (!register_operand (operands[0], E_V8SImode)
              || GET_MODE (x3) != E_V8SImode)
            return -1;
          switch (GET_MODE (operands[1]))
            {
            case E_SImode:
              if (!nonimmediate_operand (operands[1], E_SImode))
                return -1;
              if ((
#line 27778 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 295 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                return 9264; /* *avx512vl_vec_dup_gprv8si */
              if (
#line 27928 "../../gcc/config/i386/sse.md"
(TARGET_AVX2))
                return 9298; /* *vec_dupv8si */
              if (!
#line 27948 "../../gcc/config/i386/sse.md"
(TARGET_AVX))
                return -1;
              return 9304; /* vec_dupv8si */

            case E_V4SImode:
              if (!nonimmediate_operand (operands[1], E_V4SImode)
                  || !
#line 28049 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))
                return -1;
              return 9326; /* *avx512vl_broadcastv8si_1 */

            default:
              return -1;
            }

        case E_V4SImode:
          if (!register_operand (operands[0], E_V4SImode)
              || GET_MODE (x3) != E_V4SImode
              || !nonimmediate_operand (operands[1], E_SImode))
            return -1;
          if ((
#line 27778 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 295 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return 9266; /* *avx512vl_vec_dup_gprv4si */
          if (
#line 27825 "../../gcc/config/i386/sse.md"
(TARGET_SSE))
            return 9287; /* *vec_dupv4si */
          if (!
#line 27928 "../../gcc/config/i386/sse.md"
(TARGET_AVX2))
            return -1;
          return 9299; /* *vec_dupv4si */

        case E_V4DImode:
          if (!register_operand (operands[0], E_V4DImode)
              || GET_MODE (x3) != E_V4DImode)
            return -1;
          switch (GET_MODE (operands[1]))
            {
            case E_DImode:
              if (!nonimmediate_operand (operands[1], E_DImode))
                return -1;
              if ((
#line 27778 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 296 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                return 9270; /* *avx512vl_vec_dup_gprv4di */
              if (!
#line 27948 "../../gcc/config/i386/sse.md"
(TARGET_AVX))
                return -1;
              return 9306; /* vec_dupv4di */

            case E_V2DImode:
              if (!nonimmediate_operand (operands[1], E_V2DImode)
                  || !(
#line 28080 "../../gcc/config/i386/sse.md"
(TARGET_AVX512DQ) && 
#line 28074 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                return -1;
              return 9338; /* *avx512dq_broadcastv4di_1 */

            default:
              return -1;
            }

        case E_V2DImode:
          if (!register_operand (operands[0], E_V2DImode)
              || GET_MODE (x3) != E_V2DImode
              || !nonimmediate_operand (operands[1], E_DImode))
            return -1;
          if ((
#line 27778 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 296 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return 9272; /* *avx512vl_vec_dup_gprv2di */
          if (!
#line 27853 "../../gcc/config/i386/sse.md"
(TARGET_SSE))
            return -1;
          return 9288; /* *vec_dupv2di */

        case E_V8SFmode:
          if (!register_operand (operands[0], E_V8SFmode)
              || GET_MODE (x3) != E_V8SFmode)
            return -1;
          switch (GET_MODE (operands[1]))
            {
            case E_SFmode:
              if (!nonimmediate_operand (operands[1], E_SFmode))
                return -1;
              if ((
#line 27778 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 297 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                return 9276; /* *avx512vl_vec_dup_gprv8sf */
              if (!
#line 27948 "../../gcc/config/i386/sse.md"
(TARGET_AVX))
                return -1;
              return 9305; /* vec_dupv8sf */

            case E_V4SFmode:
              if (!nonimmediate_operand (operands[1], E_V4SFmode)
                  || !
#line 28049 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))
                return -1;
              return 9328; /* *avx512vl_broadcastv8sf_1 */

            default:
              return -1;
            }

        case E_V4SFmode:
          if (!register_operand (operands[0], E_V4SFmode)
              || GET_MODE (x3) != E_V4SFmode
              || !nonimmediate_operand (operands[1], E_SFmode))
            return -1;
          if ((
#line 27778 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 297 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return 9278; /* *avx512vl_vec_dup_gprv4sf */
          if (!
#line 27793 "../../gcc/config/i386/sse.md"
(TARGET_SSE))
            return -1;
          return 9286; /* vec_dupv4sf */

        case E_V4DFmode:
          if (!register_operand (operands[0], E_V4DFmode)
              || GET_MODE (x3) != E_V4DFmode)
            return -1;
          switch (GET_MODE (operands[1]))
            {
            case E_DFmode:
              if (!nonimmediate_operand (operands[1], E_DFmode))
                return -1;
              if ((
#line 27778 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 298 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                return 9282; /* *avx512vl_vec_dup_gprv4df */
              if (!
#line 27948 "../../gcc/config/i386/sse.md"
(TARGET_AVX))
                return -1;
              return 9307; /* vec_dupv4df */

            case E_V2DFmode:
              if (!nonimmediate_operand (operands[1], E_V2DFmode)
                  || !(
#line 28080 "../../gcc/config/i386/sse.md"
(TARGET_AVX512DQ) && 
#line 28074 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                return -1;
              return 9340; /* *avx512dq_broadcastv4df_1 */

            default:
              return -1;
            }

        default:
          return -1;
        }

    case FLOAT_EXTEND:
      if (GET_MODE (x4) != E_SFmode)
        return -1;
      x5 = XEXP (x4, 0);
      operands[1] = x5;
      switch (GET_MODE (operands[0]))
        {
        case E_V8SFmode:
          switch (pattern676 (x3, 
E_V8SFmode))
            {
            case 0:
              if (!(
#line 31622 "../../gcc/config/i386/sse.md"
(TARGET_AVXNECONVERT) && 
#line 441 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
                return -1;
              return 10421; /* vbcstnebf162ps_v8sf */

            case 1:
              if (!(
#line 31633 "../../gcc/config/i386/sse.md"
(TARGET_AVXNECONVERT) && 
#line 441 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
                return -1;
              return 10423; /* vbcstnesh2ps_v8sf */

            default:
              return -1;
            }

        case E_V4SFmode:
          switch (pattern676 (x3, 
E_V4SFmode))
            {
            case 0:
              if (!
#line 31622 "../../gcc/config/i386/sse.md"
(TARGET_AVXNECONVERT))
                return -1;
              return 10422; /* vbcstnebf162ps_v4sf */

            case 1:
              if (!
#line 31633 "../../gcc/config/i386/sse.md"
(TARGET_AVXNECONVERT))
                return -1;
              return 10424; /* vbcstnesh2ps_v4sf */

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
recog_328 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  switch (pattern29 (x1))
    {
    case 0:
      if (nonimmediate_operand (operands[1], E_V16HImode)
          && nonmemory_operand (operands[2], E_DImode)
          && (
#line 17290 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL) && 
#line 799 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW)))
        return 7642; /* *lshrv16hi3 */
      if (!register_operand (operands[1], E_V16HImode))
        return -1;
      if (nonmemory_operand (operands[2], E_DImode)
          && (
#line 17304 "../../gcc/config/i386/sse.md"
(TARGET_SSE2) && 
#line 775 "../../gcc/config/i386/sse.md"
(TARGET_AVX2)))
        return 7665; /* lshrv16hi3 */
      if (!nonimmediate_operand (operands[2], E_V16HImode)
          || !(
#line 28934 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 686 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 9597; /* avx512vl_lshrvv16hi */

    case 1:
      if (nonimmediate_operand (operands[1], E_V8HImode)
          && nonmemory_operand (operands[2], E_DImode)
          && (
#line 17290 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL) && 
#line 799 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW)))
        return 7646; /* *lshrv8hi3 */
      if (!register_operand (operands[1], E_V8HImode))
        return -1;
      if (nonmemory_operand (operands[2], E_DImode)
          && 
#line 17304 "../../gcc/config/i386/sse.md"
(TARGET_SSE2))
        return 7667; /* lshrv8hi3 */
      if (!nonimmediate_operand (operands[2], E_V8HImode)
          || !(
#line 28934 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 686 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 9593; /* avx512vl_lshrvv8hi */

    case 2:
      if (nonimmediate_operand (operands[1], E_V8SImode)
          && nonmemory_operand (operands[2], E_DImode)
          && 
#line 17290 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))
        return 7650; /* *lshrv8si3 */
      if (!register_operand (operands[1], E_V8SImode))
        return -1;
      if (nonmemory_operand (operands[2], E_DImode)
          && (
#line 17304 "../../gcc/config/i386/sse.md"
(TARGET_SSE2) && 
#line 776 "../../gcc/config/i386/sse.md"
(TARGET_AVX2)))
        return 7669; /* lshrv8si3 */
      if (!nonimmediate_operand (operands[2], E_V8SImode)
          || !
#line 28923 "../../gcc/config/i386/sse.md"
(TARGET_AVX2 && 1))
        return -1;
      return 9573; /* avx2_lshrvv8si */

    case 3:
      if (nonimmediate_operand (operands[1], E_V4SImode)
          && nonmemory_operand (operands[2], E_DImode)
          && 
#line 17290 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))
        return 7654; /* *lshrv4si3 */
      if (!register_operand (operands[1], E_V4SImode))
        return -1;
      if (nonmemory_operand (operands[2], E_DImode)
          && 
#line 17304 "../../gcc/config/i386/sse.md"
(TARGET_SSE2))
        return 7671; /* lshrv4si3 */
      if (!nonimmediate_operand (operands[2], E_V4SImode)
          || !
#line 28923 "../../gcc/config/i386/sse.md"
(TARGET_AVX2 && 1))
        return -1;
      return 9577; /* avx2_lshrvv4si */

    case 4:
      if (nonimmediate_operand (operands[1], E_V4DImode)
          && nonmemory_operand (operands[2], E_DImode)
          && 
#line 17290 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))
        return 7658; /* *lshrv4di3 */
      if (!register_operand (operands[1], E_V4DImode))
        return -1;
      if (nonmemory_operand (operands[2], E_DImode)
          && (
#line 17304 "../../gcc/config/i386/sse.md"
(TARGET_SSE2) && 
#line 777 "../../gcc/config/i386/sse.md"
(TARGET_AVX2)))
        return 7673; /* lshrv4di3 */
      if (!nonimmediate_operand (operands[2], E_V4DImode)
          || !
#line 28923 "../../gcc/config/i386/sse.md"
(TARGET_AVX2 && 1))
        return -1;
      return 9585; /* avx2_lshrvv4di */

    case 5:
      if (nonimmediate_operand (operands[1], E_V2DImode)
          && nonmemory_operand (operands[2], E_DImode)
          && 
#line 17290 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))
        return 7662; /* *lshrv2di3 */
      if (!register_operand (operands[1], E_V2DImode))
        return -1;
      if (nonmemory_operand (operands[2], E_DImode)
          && 
#line 17304 "../../gcc/config/i386/sse.md"
(TARGET_SSE2))
        return 7675; /* lshrv2di3 */
      if (!nonimmediate_operand (operands[2], E_V2DImode)
          || !
#line 28923 "../../gcc/config/i386/sse.md"
(TARGET_AVX2 && 1))
        return -1;
      return 9589; /* avx2_lshrvv2di */

    case 6:
      if (nonimmediate_operand (operands[1], E_V32HImode)
          && nonmemory_operand (operands[2], E_DImode)
          && (
#line 17378 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 785 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512)))
        return 7682; /* lshrv32hi3 */
      if (!register_operand (operands[1], E_V32HImode)
          || !nonimmediate_operand (operands[2], E_V32HImode)
          || !(
#line 28934 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 686 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 9601; /* avx512bw_lshrvv32hi */

    case 7:
      if (nonimmediate_operand (operands[1], E_V16SImode)
          && nonmemory_operand (operands[2], E_DImode)
          && (
#line 17378 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 785 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return 7686; /* lshrv16si3 */
      if (!register_operand (operands[1], E_V16SImode)
          || !nonimmediate_operand (operands[2], E_V16SImode)
          || !(
#line 28923 "../../gcc/config/i386/sse.md"
(TARGET_AVX2 && 1) && 
#line 804 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
        return -1;
      return 9569; /* avx512f_lshrvv16si */

    case 8:
      if (nonimmediate_operand (operands[1], E_V8DImode)
          && nonmemory_operand (operands[2], E_DImode)
          && (
#line 17378 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 786 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return 7690; /* lshrv8di3 */
      if (!register_operand (operands[1], E_V8DImode)
          || !nonimmediate_operand (operands[2], E_V8DImode)
          || !(
#line 28923 "../../gcc/config/i386/sse.md"
(TARGET_AVX2 && 1) && 
#line 805 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
        return -1;
      return 9581; /* avx512f_lshrvv8di */

    case 9:
      if (register_operand (operands[1], E_V1TImode)
          && const_0_to_255_not_mul_8_operand (operands[2], E_SImode)
          && 
#line 17482 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && TARGET_64BIT
   && ix86_pre_reload_split ()))
        return 7693; /* *lshrv1ti3_internal */
      if (!const_0_to_255_mul_8_operand (operands[2], E_SImode))
        return -1;
      if (nonimmediate_operand (operands[1], E_V1TImode)
          && (
#line 17597 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 730 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return 7702; /* avx512bw_lshrv1ti3 */
      if (!register_operand (operands[1], E_V1TImode)
          || !
#line 17612 "../../gcc/config/i386/sse.md"
(TARGET_SSE2))
        return -1;
      return 7706; /* sse2_lshrv1ti3 */

    case 10:
      if (!(
#line 17597 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 730 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 7698; /* avx512bw_lshrv4ti3 */

    case 11:
      if (nonimmediate_operand (operands[1], E_V2TImode)
          && (
#line 17597 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 730 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return 7700; /* avx512bw_lshrv2ti3 */
      if (!register_operand (operands[1], E_V2TImode)
          || !(
#line 17612 "../../gcc/config/i386/sse.md"
(TARGET_SSE2) && 
#line 733 "../../gcc/config/i386/sse.md"
(TARGET_AVX2)))
        return -1;
      return 7704; /* avx2_lshrv2ti3 */

    default:
      return -1;
    }
}

 int
recog_333 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7;
  int res ATTRIBUTE_UNUSED;
  switch (pattern34 (x1))
    {
    case 0:
      if (!
#line 24117 "../../gcc/config/i386/sse.md"
(TARGET_AVX2 && 1 && 1))
        return -1;
      return 8752; /* avx2_zero_extendv16qiv16hi2 */

    case 1:
      if (!
#line 24171 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512))
        return -1;
      return 8760; /* avx512bw_zero_extendv32qiv32hi2 */

    case 2:
      if (!
#line 24241 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1 && 1 && 1))
        return -1;
      return 8772; /* *sse4_1_zero_extendv8qiv8hi2_1 */

    case 3:
      if (!
#line 24366 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512))
        return -1;
      return 8784; /* *avx512f_zero_extendv16qiv16si2 */

    case 4:
      if (!
#line 24509 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512))
        return -1;
      return 8812; /* avx512f_zero_extendv16hiv16si2 */

    case 5:
      if (!
#line 24398 "../../gcc/config/i386/sse.md"
(TARGET_AVX2 && 1))
        return -1;
      return 8792; /* *avx2_zero_extendv8qiv8si2_1 */

    case 6:
      if (!
#line 24562 "../../gcc/config/i386/sse.md"
(TARGET_AVX2 && 1))
        return -1;
      return 8820; /* avx2_zero_extendv8hiv8si2 */

    case 7:
      if (!
#line 24459 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1 && 1))
        return -1;
      return 8804; /* *sse4_1_zero_extendv4qiv4si2_1 */

    case 8:
      if (!
#line 24632 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1 && 1))
        return -1;
      return 8832; /* *sse4_1_zero_extendv4hiv4si2_1 */

    case 9:
      if (!
#line 24763 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512))
        return -1;
      return 8848; /* *avx512f_zero_extendv8qiv8di2_1 */

    case 10:
      if (!
#line 24934 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512))
        return -1;
      return 8879; /* avx512f_zero_extendv8hiv8di2 */

    case 11:
      if (!
#line 25071 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512))
        return -1;
      return 8907; /* avx512f_zero_extendv8siv8di2 */

    case 12:
      if (!
#line 24821 "../../gcc/config/i386/sse.md"
(TARGET_AVX2 && 1))
        return -1;
      return 8860; /* *avx2_zero_extendv4qiv4di2_1 */

    case 13:
      if (!
#line 24964 "../../gcc/config/i386/sse.md"
(TARGET_AVX2 && 1))
        return -1;
      return 8887; /* *avx2_zero_extendv4hiv4di2_1 */

    case 14:
      if (!
#line 25122 "../../gcc/config/i386/sse.md"
(TARGET_AVX2 && 1))
        return -1;
      return 8913; /* avx2_zero_extendv4siv4di2 */

    case 15:
      if (!
#line 24883 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1 && 1))
        return -1;
      return 8872; /* *sse4_1_zero_extendv2qiv2di2_1 */

    case 16:
      if (!
#line 25022 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1 && 1))
        return -1;
      return 8899; /* *sse4_1_zero_extendv2hiv2di2_1 */

    case 17:
      if (!
#line 25188 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1 && 1))
        return -1;
      return 8923; /* *sse4_1_zero_extendv2siv2di2_1 */

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
            return 8768; /* sse4_1_zero_extendv8qiv8hi2 */
          break;

        case 1:
          if (
#line 24387 "../../gcc/config/i386/sse.md"
(TARGET_AVX2 && 1))
            return 8788; /* avx2_zero_extendv8qiv8si2 */
          break;

        case 2:
          if (
#line 24753 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512))
            return 8844; /* avx512f_zero_extendv8qiv8di2 */
          break;

        case 3:
          if (
#line 24447 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1 && 1))
            return 8800; /* sse4_1_zero_extendv4qiv4si2 */
          break;

        case 4:
          if (
#line 24620 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1 && 1))
            return 8828; /* sse4_1_zero_extendv4hiv4si2 */
          break;

        case 5:
          if (
#line 24810 "../../gcc/config/i386/sse.md"
(TARGET_AVX2 && 1))
            return 8856; /* avx2_zero_extendv4qiv4di2 */
          break;

        case 6:
          if (
#line 24953 "../../gcc/config/i386/sse.md"
(TARGET_AVX2 && 1))
            return 8883; /* avx2_zero_extendv4hiv4di2 */
          break;

        case 7:
          if (
#line 24871 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1 && 1))
            return 8868; /* sse4_1_zero_extendv2qiv2di2 */
          break;

        case 8:
          if (
#line 25010 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1 && 1))
            return 8895; /* sse4_1_zero_extendv2hiv2di2 */
          break;

        case 9:
          if (
#line 25176 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1 && 1))
            return 8919; /* sse4_1_zero_extendv2siv2di2 */
          break;

        default:
          break;
        }
      if (GET_CODE (x4) != SUBREG
          || maybe_ne (SUBREG_BYTE (x4), 0))
        return -1;
      x5 = XEXP (x4, 0);
      switch (GET_CODE (x5))
        {
        case VEC_CONCAT:
          switch (pattern679 (x2))
            {
            case 0:
              if (!
#line 24265 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1 && 1 && 1
   && ix86_pre_reload_split ()))
                return -1;
              return 8776; /* *sse4_1_zero_extendv8qiv8hi2_2 */

            case 1:
              if (!
#line 24417 "../../gcc/config/i386/sse.md"
(TARGET_AVX2 && 1
   && ix86_pre_reload_split ()))
                return -1;
              return 8796; /* *avx2_zero_extendv8qiv8si2_2 */

            case 2:
              if (!
#line 24781 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512 && ix86_pre_reload_split ()))
                return -1;
              return 8852; /* *avx512f_zero_extendv8qiv8di2_2 */

            case 3:
              if (!
#line 24651 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1 && 1
   && ix86_pre_reload_split ()))
                return -1;
              return 8836; /* *sse4_1_zero_extendv4hiv4si2_2 */

            case 4:
              if (!
#line 24981 "../../gcc/config/i386/sse.md"
(TARGET_AVX2 && 1
   && ix86_pre_reload_split ()))
                return -1;
              return 8891; /* *avx2_zero_extendv4hiv4di2_2 */

            case 5:
              if (!
#line 25206 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1 && 1
   && ix86_pre_reload_split ()))
                return -1;
              return 8927; /* *sse4_1_zero_extendv2siv2di2_2 */

            default:
              return -1;
            }

        case VEC_MERGE:
          x6 = XEXP (x5, 0);
          if (GET_CODE (x6) != VEC_DUPLICATE)
            return -1;
          if (GET_MODE (x6) == E_V4SImode)
            {
              switch (pattern1033 (x2))
                {
                case 0:
                  if (
#line 24482 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1 && 1
   && ix86_pre_reload_split ()))
                    return 8808; /* *sse4_1_zero_extendv4qiv4si2_2 */
                  break;

                case 1:
                  if (
#line 24842 "../../gcc/config/i386/sse.md"
(TARGET_AVX2 && 1
   && ix86_pre_reload_split ()))
                    return 8864; /* *avx2_zero_extendv4qiv4di2_2 */
                  break;

                case 2:
                  if (
#line 25044 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1 && 1
   && ix86_pre_reload_split ()))
                    return 8903; /* *sse4_1_zero_extendv2hiv2di2_2 */
                  break;

                default:
                  break;
                }
            }
          x7 = XEXP (x5, 2);
          if (x7 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
            return -1;
          switch (pattern1034 (x2))
            {
            case 0:
              if (!
#line 24918 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1 && ix86_pre_reload_split ()))
                return -1;
              return 8874; /* *sse4_1_zero_extendv2qiv2di2_2 */

            case 1:
              if (!
#line 24918 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1 && ix86_pre_reload_split ()))
                return -1;
              return 8875; /* *sse4_1_zero_extendv2qiv2di2_2 */

            case 2:
              if (!
#line 24918 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1 && ix86_pre_reload_split ()))
                return -1;
              return 8876; /* *sse4_1_zero_extendv2qiv2di2_2 */

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
recog_341 (rtx x1 ATTRIBUTE_UNUSED,
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
      return 2992; /* *sminv32hf3 */

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
      return 3000; /* *sminv16hf3 */

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
      return 3006; /* *sminv8hf3 */

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
      return 3012; /* *sminv16sf3 */

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
      return 3020; /* *sminv8sf3 */

    case 5:
      if (!
#line 3306 "../../gcc/config/i386/sse.md"
(TARGET_SSE
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))
   && 1
   && 1))
        return -1;
      return 3026; /* *sminv4sf3 */

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
      return 3032; /* *sminv8df3 */

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
      return 3040; /* *sminv4df3 */

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
      return 3046; /* *sminv2df3 */

    case 9:
      if (nonimmediate_operand (operands[1], E_V32QImode)
          && 
#line 17667 "../../gcc/config/i386/sse.md"
(TARGET_AVX2 && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
        return 7756; /* *avx2_sminv32qi3 */
      if (!register_operand (operands[1], E_V32QImode)
          || !(
#line 17719 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 318 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 7833; /* *sminv32qi3 */

    case 10:
      if (nonimmediate_operand (operands[1], E_V16HImode)
          && 
#line 17667 "../../gcc/config/i386/sse.md"
(TARGET_AVX2 && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
        return 7760; /* *avx2_sminv16hi3 */
      if (!register_operand (operands[1], E_V16HImode)
          || !(
#line 17719 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 319 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 7849; /* *sminv16hi3 */

    case 11:
      if (
#line 17667 "../../gcc/config/i386/sse.md"
(TARGET_AVX2 && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
        return 7764; /* *avx2_sminv8si3 */
      if (!(
#line 17708 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 501 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 7777; /* *avx512f_sminv8si3 */

    case 12:
      if (!(
#line 17708 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 501 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 7769; /* *avx512f_sminv16si3 */

    case 13:
      if (nonimmediate_operand (operands[1], E_V4SImode)
          && nonimmediate_operand (operands[2], E_V4SImode)
          && (
#line 17708 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 501 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return 7785; /* *avx512f_sminv4si3 */
      if (!vector_operand (operands[1], E_V4SImode)
          || !vector_operand (operands[2], E_V4SImode)
          || !
#line 17811 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1
   && 1
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
        return -1;
      return 7869; /* *sse4_1_sminv4si3 */

    case 14:
      if (!(
#line 17708 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 502 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 7793; /* *avx512f_sminv8di3 */

    case 15:
      if (!(
#line 17708 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 502 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 7801; /* *avx512f_sminv4di3 */

    case 16:
      if (!(
#line 17708 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 502 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 7809; /* *avx512f_sminv2di3 */

    case 17:
      if (!(
#line 17719 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 318 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 7817; /* *sminv64qi3 */

    case 18:
      if (register_operand (operands[1], E_V16QImode)
          && nonimmediate_operand (operands[2], E_V16QImode)
          && (
#line 17719 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 318 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return 7825; /* *sminv16qi3 */
      if (!vector_operand (operands[1], E_V16QImode)
          || !vector_operand (operands[2], E_V16QImode)
          || !
#line 17811 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1
   && 1
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
        return -1;
      return 7865; /* *sse4_1_sminv16qi3 */

    case 19:
      if (!(
#line 17719 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 319 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 7841; /* *sminv32hi3 */

    case 20:
      if (register_operand (operands[1], E_V8HImode)
          && nonimmediate_operand (operands[2], E_V8HImode)
          && (
#line 17719 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 319 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return 7857; /* *sminv8hi3 */
      if (!vector_operand (operands[1], E_V8HImode)
          || !vector_operand (operands[2], E_V8HImode)
          || !
#line 17830 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
        return -1;
      return 7872; /* *sminv8hi3 */

    case 21:
      if (!(
#line 32100 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256) && 
#line 565 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_512)))
        return -1;
      return 10592; /* avx10_2_sminpbf16_v32bf */

    case 22:
      if (!
#line 32100 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
        return -1;
      return 10596; /* avx10_2_sminpbf16_v16bf */

    case 23:
      if (!
#line 32100 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
        return -1;
      return 10600; /* avx10_2_sminpbf16_v8bf */

    default:
      return -1;
    }
}

 int
recog_349 (rtx x1 ATTRIBUTE_UNUSED,
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
    case E_V16SImode:
      if (!register_operand (operands[0], E_V16SImode)
          || GET_MODE (x3) != E_V16SImode
          || !nonimmediate_operand (operands[1], E_V16SImode)
          || !(
#line 29935 "../../gcc/config/i386/sse.md"
(TARGET_AVX512CD) && 
#line 501 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 10056; /* clzv16si2 */

    case E_V8SImode:
      if (!register_operand (operands[0], E_V8SImode)
          || GET_MODE (x3) != E_V8SImode
          || !nonimmediate_operand (operands[1], E_V8SImode)
          || !(
#line 29935 "../../gcc/config/i386/sse.md"
(TARGET_AVX512CD) && 
#line 501 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 10058; /* clzv8si2 */

    case E_V4SImode:
      if (!register_operand (operands[0], E_V4SImode)
          || GET_MODE (x3) != E_V4SImode
          || !nonimmediate_operand (operands[1], E_V4SImode)
          || !(
#line 29935 "../../gcc/config/i386/sse.md"
(TARGET_AVX512CD) && 
#line 501 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 10060; /* clzv4si2 */

    case E_V8DImode:
      if (!register_operand (operands[0], E_V8DImode)
          || GET_MODE (x3) != E_V8DImode
          || !nonimmediate_operand (operands[1], E_V8DImode)
          || !(
#line 29935 "../../gcc/config/i386/sse.md"
(TARGET_AVX512CD) && 
#line 502 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 10062; /* clzv8di2 */

    case E_V4DImode:
      if (!register_operand (operands[0], E_V4DImode)
          || GET_MODE (x3) != E_V4DImode
          || !nonimmediate_operand (operands[1], E_V4DImode)
          || !(
#line 29935 "../../gcc/config/i386/sse.md"
(TARGET_AVX512CD) && 
#line 502 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 10064; /* clzv4di2 */

    case E_V2DImode:
      if (!register_operand (operands[0], E_V2DImode)
          || GET_MODE (x3) != E_V2DImode
          || !nonimmediate_operand (operands[1], E_V2DImode)
          || !(
#line 29935 "../../gcc/config/i386/sse.md"
(TARGET_AVX512CD) && 
#line 502 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 10066; /* clzv2di2 */

    default:
      return -1;
    }
}

 int
recog_352 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  switch (pattern32 (x1))
    {
    case 0:
      if (!
#line 17553 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && TARGET_64BIT
   && ix86_pre_reload_split ()))
        return -1;
      return 7695; /* *rotlv1ti3_internal */

    case 1:
      if (!(
#line 17649 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 501 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 7731; /* avx512f_rolv16si */

    case 2:
      if (!(
#line 17649 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 501 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 7735; /* avx512vl_rolv8si */

    case 3:
      if (const_0_to_255_operand (operands[2], E_SImode)
          && (
#line 17649 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 501 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return 7739; /* avx512vl_rolv4si */
      if (!const_0_to_31_operand (operands[2], E_SImode)
          || !
#line 26598 "../../gcc/config/i386/sse.md"
(TARGET_XOP))
        return -1;
      return 9031; /* xop_rotlv4si3 */

    case 4:
      if (!(
#line 17649 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 502 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 7743; /* avx512f_rolv8di */

    case 5:
      if (!(
#line 17649 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 502 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 7747; /* avx512vl_rolv4di */

    case 6:
      if (const_0_to_255_operand (operands[2], E_SImode)
          && (
#line 17649 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 502 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return 7751; /* avx512vl_rolv2di */
      if (!const_0_to_63_operand (operands[2], E_SImode)
          || !
#line 26598 "../../gcc/config/i386/sse.md"
(TARGET_XOP))
        return -1;
      return 9032; /* xop_rotlv2di3 */

    case 7:
      if (!
#line 26598 "../../gcc/config/i386/sse.md"
(TARGET_XOP))
        return -1;
      return 9029; /* xop_rotlv16qi3 */

    case 8:
      if (!
#line 26598 "../../gcc/config/i386/sse.md"
(TARGET_XOP))
        return -1;
      return 9030; /* xop_rotlv8hi3 */

    case 9:
      if (!(
#line 17639 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 501 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 7707; /* avx512f_rolvv16si */

    case 10:
      if (!(
#line 17639 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 501 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 7711; /* avx512vl_rolvv8si */

    case 11:
      if (!(
#line 17639 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 501 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 7715; /* avx512vl_rolvv4si */

    case 12:
      if (!(
#line 17639 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 502 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 7719; /* avx512f_rolvv8di */

    case 13:
      if (!(
#line 17639 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 502 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 7723; /* avx512vl_rolvv4di */

    case 14:
      if (!(
#line 17639 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 502 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 7727; /* avx512vl_rolvv2di */

    default:
      return -1;
    }
}

 int
recog_361 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 1);
  x3 = XEXP (x2, 1);
  if (x3 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
    return -1;
  x4 = XVECEXP (x1, 0, 0);
  x5 = XEXP (x4, 0);
  operands[0] = x5;
  x6 = XEXP (x4, 1);
  x7 = XVECEXP (x6, 0, 0);
  operands[1] = x7;
  switch (pattern1148 (x1))
    {
    case 0:
      if (!(
#line 1408 "../../gcc/config/i386/i386.md"
(ptr_mode == SImode) && 
#line 1403 "../../gcc/config/i386/i386.md"
(word_mode == SImode)))
        return -1;
      *pnum_clobbers = 1;
      return 1861; /* stack_protect_set_1_si_si */

    case 1:
      if (!(
#line 1408 "../../gcc/config/i386/i386.md"
(ptr_mode == SImode) && 
#line 1403 "../../gcc/config/i386/i386.md"
(word_mode == DImode)))
        return -1;
      *pnum_clobbers = 1;
      return 1863; /* stack_protect_set_1_si_di */

    case 2:
      if (!(
#line 1408 "../../gcc/config/i386/i386.md"
(ptr_mode == DImode) && 
#line 1403 "../../gcc/config/i386/i386.md"
(word_mode == SImode)))
        return -1;
      *pnum_clobbers = 1;
      return 1862; /* stack_protect_set_1_di_si */

    case 3:
      if (!(
#line 1408 "../../gcc/config/i386/i386.md"
(ptr_mode == DImode) && 
#line 1403 "../../gcc/config/i386/i386.md"
(word_mode == DImode)))
        return -1;
      *pnum_clobbers = 1;
      return 1864; /* stack_protect_set_1_di_di */

    default:
      return -1;
    }
}

 int
recog_364 (rtx x1 ATTRIBUTE_UNUSED,
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
    case 105:
      if (GET_MODE (x3) != E_TImode)
        return -1;
      x4 = XVECEXP (x1, 0, 1);
      if (GET_CODE (x4) != UNSPEC
          || XVECLEN (x4, 0) != 1
          || XINT (x4, 1) != 108
          || GET_MODE (x4) != E_DImode)
        return -1;
      x5 = XVECEXP (x4, 0, 0);
      if (x5 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
        return -1;
      x6 = XEXP (x2, 0);
      operands[0] = x6;
      if (!push_operand (operands[0], E_TImode))
        return -1;
      x7 = XVECEXP (x3, 0, 0);
      operands[1] = x7;
      if (!register_operand (operands[1], E_DImode))
        return -1;
      x8 = XVECEXP (x3, 0, 1);
      operands[2] = x8;
      if (!register_operand (operands[2], E_DImode)
          || !
#line 3928 "../../gcc/config/i386/i386.md"
(TARGET_APX_PUSH2POP2 && TARGET_APX_PPX))
        return -1;
      return 163; /* push2p_di */

    case 40:
      x8 = XVECEXP (x3, 0, 1);
      if (GET_CODE (x8) != CONST_INT)
        return -1;
      x6 = XEXP (x2, 0);
      if (GET_CODE (x6) != REG
          || REGNO (x6) != 17)
        return -1;
      x7 = XVECEXP (x3, 0, 0);
      switch (GET_CODE (x7))
        {
        case REG:
        case SUBREG:
        case MEM:
          operands[1] = x7;
          if (XWINT (x8, 0) == 0L)
            {
              res = recog_362 (x1, insn, pnum_clobbers);
              if (res >= 0)
                return res;
            }
          x4 = XVECEXP (x1, 0, 1);
          if (GET_CODE (x4) != SET)
            return -1;
          x9 = XEXP (x4, 1);
          if (GET_CODE (x9) != NEG
              || GET_MODE (x6) != E_CCOmode
              || GET_MODE (x3) != E_CCOmode)
            return -1;
          operands[2] = x8;
          x10 = XEXP (x4, 0);
          operands[0] = x10;
          x11 = XEXP (x9, 0);
          if (!rtx_equal_p (x11, operands[1]))
            return -1;
          switch (GET_MODE (operands[1]))
            {
            case E_QImode:
              if (pattern1657 (x9, 
E_QImode) != 0
                  || !
#line 14543 "../../gcc/config/i386/i386.md"
(ix86_unary_operator_ok (NEG, QImode, operands)
   && mode_signbit_p (QImode, operands[2])))
                return -1;
              return 991; /* *negvqi3 */

            case E_HImode:
              if (pattern1657 (x9, 
E_HImode) != 0
                  || !
#line 14543 "../../gcc/config/i386/i386.md"
(ix86_unary_operator_ok (NEG, HImode, operands)
   && mode_signbit_p (HImode, operands[2])))
                return -1;
              return 992; /* *negvhi3 */

            case E_SImode:
              if (pattern1657 (x9, 
E_SImode) != 0
                  || !
#line 14543 "../../gcc/config/i386/i386.md"
(ix86_unary_operator_ok (NEG, SImode, operands)
   && mode_signbit_p (SImode, operands[2])))
                return -1;
              return 993; /* *negvsi3 */

            case E_DImode:
              if (pattern1657 (x9, 
E_DImode) != 0
                  || !(
#line 14543 "../../gcc/config/i386/i386.md"
(ix86_unary_operator_ok (NEG, DImode, operands)
   && mode_signbit_p (DImode, operands[2])) && 
#line 1161 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return -1;
              return 994; /* *negvdi3 */

            default:
              return -1;
            }

        case AND:
          x12 = XEXP (x7, 1);
          if (x12 != const_int_rtx[MAX_SAVED_CONST_INT + 1]
              || XWINT (x8, 0) != 0L)
            return -1;
          x4 = XVECEXP (x1, 0, 1);
          if (GET_CODE (x4) != SET
              || GET_MODE (x6) != E_CCCmode
              || GET_MODE (x3) != E_CCCmode)
            return -1;
          x13 = XEXP (x7, 0);
          operands[1] = x13;
          x10 = XEXP (x4, 0);
          operands[0] = x10;
          x9 = XEXP (x4, 1);
          switch (GET_CODE (x9))
            {
            case LSHIFTRT:
              switch (pattern1618 (x1))
                {
                case 0:
                  return 1387; /* lshrsi3_carry */

                case 1:
                  if (!
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT))
                    return -1;
                  return 1389; /* lshrdi3_carry */

                default:
                  return -1;
                }

            case ASHIFTRT:
              switch (pattern1618 (x1))
                {
                case 0:
                  return 1388; /* ashrsi3_carry */

                case 1:
                  if (!
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT))
                    return -1;
                  return 1390; /* ashrdi3_carry */

                default:
                  return -1;
                }

            default:
              return -1;
            }

        default:
          return -1;
        }

    case 98:
      if (pattern550 (x1) != 0)
        return -1;
      x7 = XVECEXP (x3, 0, 0);
      operands[1] = x7;
      x8 = XVECEXP (x3, 0, 1);
      operands[2] = x8;
      switch (GET_MODE (operands[0]))
        {
        case E_SImode:
          if (pattern1419 (x3, 
E_SImode) != 0
              || !
#line 21737 "../../gcc/config/i386/i386.md"
(TARGET_BMI))
            return -1;
          return 1566; /* bmi_bextr_si */

        case E_DImode:
          if (pattern1419 (x3, 
E_DImode) != 0
              || !(
#line 21737 "../../gcc/config/i386/i386.md"
(TARGET_BMI) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return -1;
          return 1567; /* bmi_bextr_di */

        default:
          return -1;
        }

    case 66:
      if (GET_MODE (x3) != E_XFmode)
        return -1;
      x4 = XVECEXP (x1, 0, 1);
      if (GET_CODE (x4) != CLOBBER)
        return -1;
      x6 = XEXP (x2, 0);
      operands[0] = x6;
      if (!register_operand (operands[0], E_XFmode))
        return -1;
      x7 = XVECEXP (x3, 0, 0);
      operands[2] = x7;
      if (!register_operand (operands[2], E_XFmode))
        return -1;
      x8 = XVECEXP (x3, 0, 1);
      operands[1] = x8;
      if (!register_operand (operands[1], E_XFmode))
        return -1;
      x10 = XEXP (x4, 0);
      operands[3] = x10;
      if (!scratch_operand (operands[3], E_XFmode)
          || !
#line 23986 "../../gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && flag_unsafe_math_optimizations))
        return -1;
      return 1715; /* atan2xf3 */

    case 67:
      if (pattern551 (x1) != 0
          || !
#line 24289 "../../gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && flag_unsafe_math_optimizations))
        return -1;
      return 1716; /* fyl2xxf3_i387 */

    case 68:
      if (pattern551 (x1) != 0
          || !
#line 24386 "../../gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && flag_unsafe_math_optimizations))
        return -1;
      return 1717; /* fyl2xp1xf3_i387 */

    case 84:
      if (GET_MODE (x3) != E_XFmode)
        return -1;
      x4 = XVECEXP (x1, 0, 1);
      if (GET_CODE (x4) != SET)
        return -1;
      x9 = XEXP (x4, 1);
      if (pattern813 (x9, 
E_XFmode, 
85, 
2, 
UNSPEC) != 0)
        return -1;
      x6 = XEXP (x2, 0);
      operands[0] = x6;
      if (!register_operand (operands[0], E_XFmode)
          || pattern1420 (x1) != 0
          || !
#line 24521 "../../gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && flag_unsafe_math_optimizations))
        return -1;
      return 1720; /* fscalexf4_i387 */

    case 93:
      if (GET_MODE (x3) != E_CCZmode)
        return -1;
      x4 = XVECEXP (x1, 0, 1);
      if (GET_CODE (x4) != CLOBBER)
        return -1;
      x6 = XEXP (x2, 0);
      operands[0] = x6;
      if (!flags_reg_operand (operands[0], E_CCZmode))
        return -1;
      x7 = XVECEXP (x3, 0, 0);
      operands[1] = x7;
      x8 = XVECEXP (x3, 0, 1);
      operands[2] = x8;
      x10 = XEXP (x4, 0);
      operands[3] = x10;
      switch (GET_MODE (operands[1]))
        {
        case E_SImode:
          if (!memory_operand (operands[1], E_SImode)
              || !memory_operand (operands[2], E_SImode)
              || !scratch_operand (operands[3], E_SImode)
              || !
#line 1408 "../../gcc/config/i386/i386.md"
(ptr_mode == SImode))
            return -1;
          return 1877; /* stack_protect_test_1_si */

        case E_DImode:
          if (!memory_operand (operands[1], E_DImode)
              || !memory_operand (operands[2], E_DImode)
              || !scratch_operand (operands[3], E_DImode)
              || !
#line 1408 "../../gcc/config/i386/i386.md"
(ptr_mode == DImode))
            return -1;
          return 1878; /* stack_protect_test_1_di */

        default:
          return -1;
        }

    case 63:
      if (pattern552 (x1) != 0
          || !
#line 890 "../../gcc/config/i386/mmx.md"
(TARGET_3DNOW))
        return -1;
      return 2051; /* mmx_ieee_maxv2sf3 */

    case 62:
      if (pattern552 (x1) != 0
          || !
#line 890 "../../gcc/config/i386/mmx.md"
(TARGET_3DNOW))
        return -1;
      return 2052; /* mmx_ieee_minv2sf3 */

    case 160:
      x6 = XEXP (x2, 0);
      if (GET_CODE (x6) != MEM)
        return -1;
      operands[5] = x6;
      x14 = XEXP (x6, 0);
      if (GET_CODE (x14) != UNSPEC
          || XVECLEN (x14, 0) != 4
          || XINT (x14, 1) != 154)
        return -1;
      x4 = XVECEXP (x1, 0, 1);
      if (GET_CODE (x4) != CLOBBER)
        return -1;
      x15 = XVECEXP (x14, 0, 0);
      operands[0] = x15;
      x16 = XVECEXP (x14, 0, 1);
      operands[2] = x16;
      x17 = XVECEXP (x14, 0, 2);
      operands[4] = x17;
      if (!const1248_operand (operands[4], E_SImode))
        return -1;
      x18 = XVECEXP (x14, 0, 3);
      operands[6] = x18;
      x8 = XVECEXP (x3, 0, 1);
      operands[3] = x8;
      x10 = XEXP (x4, 0);
      operands[1] = x10;
      x7 = XVECEXP (x3, 0, 0);
      if (!rtx_equal_p (x7, operands[6]))
        return -1;
      switch (GET_MODE (operands[5]))
        {
        case E_V16SImode:
          if (!vsib_mem_operator (operands[5], E_V16SImode)
              || GET_MODE (x3) != E_V16SImode)
            return -1;
          switch (GET_MODE (x14))
            {
            case E_SImode:
              switch (pattern1766 (
E_SImode))
                {
                case 0:
                  if (!(
#line 29599 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && ((((
#line 1010 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 1010 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)) && 
#line 1010 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512))))
                    return -1;
                  return 9836; /* *avx512f_scattersiv16si */

                case 1:
                  if (!(
#line 29639 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && (((
#line 1010 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 1010 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512))))
                    return -1;
                  return 9860; /* *avx512f_scatterdiv16si */

                default:
                  return -1;
                }

            case E_DImode:
              switch (pattern1766 (
E_DImode))
                {
                case 0:
                  if (!(
#line 29599 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && ((((
#line 1010 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 1010 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)) && 
#line 1010 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512))))
                    return -1;
                  return 9848; /* *avx512f_scattersiv16si */

                case 1:
                  if (!(
#line 29639 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && (((
#line 1010 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 1010 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512))))
                    return -1;
                  return 9872; /* *avx512f_scatterdiv16si */

                default:
                  return -1;
                }

            default:
              return -1;
            }

        case E_V16SFmode:
          if (!vsib_mem_operator (operands[5], E_V16SFmode)
              || GET_MODE (x3) != E_V16SFmode)
            return -1;
          switch (GET_MODE (x14))
            {
            case E_SImode:
              switch (pattern1767 (
E_SImode))
                {
                case 0:
                  if (!(
#line 29599 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && ((((
#line 1010 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 1010 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)) && 
#line 1010 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512))))
                    return -1;
                  return 9837; /* *avx512f_scattersiv16sf */

                case 1:
                  if (!(
#line 29639 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && (((
#line 1010 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 1010 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512))))
                    return -1;
                  return 9861; /* *avx512f_scatterdiv16sf */

                default:
                  return -1;
                }

            case E_DImode:
              switch (pattern1767 (
E_DImode))
                {
                case 0:
                  if (!(
#line 29599 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && ((((
#line 1010 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 1010 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)) && 
#line 1010 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512))))
                    return -1;
                  return 9849; /* *avx512f_scattersiv16sf */

                case 1:
                  if (!(
#line 29639 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && (((
#line 1010 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 1010 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512))))
                    return -1;
                  return 9873; /* *avx512f_scatterdiv16sf */

                default:
                  return -1;
                }

            default:
              return -1;
            }

        case E_V8DImode:
          switch (pattern1708 (x2, 
E_V8DImode))
            {
            case 0:
              if (!(
#line 29599 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && ((((
#line 1011 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 1011 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)) && 
#line 1011 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512))))
                return -1;
              return 9838; /* *avx512f_scattersiv8di */

            case 1:
              if (!(
#line 29639 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && (((
#line 1011 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 1011 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512))))
                return -1;
              return 9862; /* *avx512f_scatterdiv8di */

            case 2:
              if (!(
#line 29599 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && ((((
#line 1011 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 1011 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)) && 
#line 1011 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512))))
                return -1;
              return 9850; /* *avx512f_scattersiv8di */

            case 3:
              if (!(
#line 29639 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && (((
#line 1011 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 1011 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512))))
                return -1;
              return 9874; /* *avx512f_scatterdiv8di */

            default:
              return -1;
            }

        case E_V8DFmode:
          switch (pattern1708 (x2, 
E_V8DFmode))
            {
            case 0:
              if (!(
#line 29599 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && ((((
#line 1011 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 1011 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)) && 
#line 1011 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512))))
                return -1;
              return 9839; /* *avx512f_scattersiv8df */

            case 1:
              if (!(
#line 29639 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && (((
#line 1011 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 1011 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512))))
                return -1;
              return 9863; /* *avx512f_scatterdiv8df */

            case 2:
              if (!(
#line 29599 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && ((((
#line 1011 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 1011 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)) && 
#line 1011 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512))))
                return -1;
              return 9851; /* *avx512f_scattersiv8df */

            case 3:
              if (!(
#line 29639 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && (((
#line 1011 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 1011 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512))))
                return -1;
              return 9875; /* *avx512f_scatterdiv8df */

            default:
              return -1;
            }

        case E_V8SImode:
          switch (pattern1709 (x2, 
E_V8SImode))
            {
            case 0:
              switch (pattern1815 (
E_SImode))
                {
                case 0:
                  if (!(
#line 29599 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && ((((
#line 1012 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 1012 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 1012 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
                    return -1;
                  return 9840; /* *avx512f_scattersiv8si */

                case 1:
                  if (!(
#line 29639 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && (((
#line 1012 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 1012 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
                    return -1;
                  return 9864; /* *avx512f_scatterdiv8si */

                default:
                  return -1;
                }

            case 1:
              switch (pattern1815 (
E_DImode))
                {
                case 0:
                  if (!(
#line 29599 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && ((((
#line 1012 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 1012 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 1012 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
                    return -1;
                  return 9852; /* *avx512f_scattersiv8si */

                case 1:
                  if (!(
#line 29639 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && (((
#line 1012 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 1012 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
                    return -1;
                  return 9876; /* *avx512f_scatterdiv8si */

                default:
                  return -1;
                }

            default:
              return -1;
            }

        case E_V8SFmode:
          switch (pattern1709 (x2, 
E_V8SFmode))
            {
            case 0:
              switch (pattern1816 (
E_SImode))
                {
                case 0:
                  if (!(
#line 29599 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && ((((
#line 1012 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 1012 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 1012 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
                    return -1;
                  return 9841; /* *avx512f_scattersiv8sf */

                case 1:
                  if (!(
#line 29639 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && (((
#line 1012 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 1012 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
                    return -1;
                  return 9865; /* *avx512f_scatterdiv8sf */

                default:
                  return -1;
                }

            case 1:
              switch (pattern1816 (
E_DImode))
                {
                case 0:
                  if (!(
#line 29599 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && ((((
#line 1012 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 1012 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 1012 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
                    return -1;
                  return 9853; /* *avx512f_scattersiv8sf */

                case 1:
                  if (!(
#line 29639 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && (((
#line 1012 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 1012 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
                    return -1;
                  return 9877; /* *avx512f_scatterdiv8sf */

                default:
                  return -1;
                }

            default:
              return -1;
            }

        case E_V4DImode:
          switch (pattern1711 (x2, 
E_V4DImode))
            {
            case 0:
              if (!(
#line 29599 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && ((((
#line 1013 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 1013 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 1013 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
                return -1;
              return 9842; /* *avx512f_scattersiv4di */

            case 1:
              if (!(
#line 29639 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && (((
#line 1013 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 1013 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
                return -1;
              return 9866; /* *avx512f_scatterdiv4di */

            case 2:
              if (!(
#line 29599 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && ((((
#line 1013 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 1013 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 1013 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
                return -1;
              return 9854; /* *avx512f_scattersiv4di */

            case 3:
              if (!(
#line 29639 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && (((
#line 1013 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 1013 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
                return -1;
              return 9878; /* *avx512f_scatterdiv4di */

            default:
              return -1;
            }

        case E_V4DFmode:
          switch (pattern1711 (x2, 
E_V4DFmode))
            {
            case 0:
              if (!(
#line 29599 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && ((((
#line 1013 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 1013 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 1013 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
                return -1;
              return 9843; /* *avx512f_scattersiv4df */

            case 1:
              if (!(
#line 29639 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && (((
#line 1013 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 1013 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
                return -1;
              return 9867; /* *avx512f_scatterdiv4df */

            case 2:
              if (!(
#line 29599 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && ((((
#line 1013 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 1013 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 1013 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
                return -1;
              return 9855; /* *avx512f_scattersiv4df */

            case 3:
              if (!(
#line 29639 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && (((
#line 1013 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 1013 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
                return -1;
              return 9879; /* *avx512f_scatterdiv4df */

            default:
              return -1;
            }

        case E_V4SImode:
          switch (pattern1713 (x2, 
E_V4SImode))
            {
            case 0:
              if (!(
#line 29599 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && ((((
#line 1014 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 1014 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 1014 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
                return -1;
              return 9844; /* *avx512f_scattersiv4si */

            case 1:
              if (!(
#line 29639 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && (((
#line 1014 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 1014 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
                return -1;
              return 9868; /* *avx512f_scatterdiv4si */

            case 2:
              if (!(
#line 29599 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && ((((
#line 1014 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 1014 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 1014 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
                return -1;
              return 9856; /* *avx512f_scattersiv4si */

            case 3:
              if (!(
#line 29639 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && (((
#line 1014 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 1014 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
                return -1;
              return 9880; /* *avx512f_scatterdiv4si */

            default:
              return -1;
            }

        case E_V4SFmode:
          switch (pattern1713 (x2, 
E_V4SFmode))
            {
            case 0:
              if (!(
#line 29599 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && ((((
#line 1014 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 1014 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 1014 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
                return -1;
              return 9845; /* *avx512f_scattersiv4sf */

            case 1:
              if (!(
#line 29639 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && (((
#line 1014 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 1014 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
                return -1;
              return 9869; /* *avx512f_scatterdiv4sf */

            case 2:
              if (!(
#line 29599 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && ((((
#line 1014 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 1014 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 1014 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
                return -1;
              return 9857; /* *avx512f_scattersiv4sf */

            case 3:
              if (!(
#line 29639 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && (((
#line 1014 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 1014 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
                return -1;
              return 9881; /* *avx512f_scatterdiv4sf */

            default:
              return -1;
            }

        case E_V2DImode:
          switch (pattern1713 (x2, 
E_V2DImode))
            {
            case 0:
              if (!(
#line 29599 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && ((((
#line 1015 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 1015 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 1015 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
                return -1;
              return 9846; /* *avx512f_scattersiv2di */

            case 1:
              if (!(
#line 29639 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && (((
#line 1015 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 1015 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
                return -1;
              return 9870; /* *avx512f_scatterdiv2di */

            case 2:
              if (!(
#line 29599 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && ((((
#line 1015 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 1015 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 1015 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
                return -1;
              return 9858; /* *avx512f_scattersiv2di */

            case 3:
              if (!(
#line 29639 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && (((
#line 1015 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 1015 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
                return -1;
              return 9882; /* *avx512f_scatterdiv2di */

            default:
              return -1;
            }

        case E_V2DFmode:
          switch (pattern1713 (x2, 
E_V2DFmode))
            {
            case 0:
              if (!(
#line 29599 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && ((((
#line 1015 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 1015 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 1015 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
                return -1;
              return 9847; /* *avx512f_scattersiv2df */

            case 1:
              if (!(
#line 29639 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && (((
#line 1015 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 1015 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
                return -1;
              return 9871; /* *avx512f_scatterdiv2df */

            case 2:
              if (!(
#line 29599 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && ((((
#line 1015 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 1015 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 1015 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
                return -1;
              return 9859; /* *avx512f_scattersiv2df */

            case 3:
              if (!(
#line 29639 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && (((
#line 1015 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 1015 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
                return -1;
              return 9883; /* *avx512f_scatterdiv2df */

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
recog_391 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12, x13;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
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
      res = recog_390 (x1, insn, pnum_clobbers);
      if (res >= 0)
        return res;
      x5 = XVECEXP (x1, 0, 1);
      if (GET_CODE (x5) != CLOBBER)
        return -1;
      x6 = XEXP (x5, 0);
      if (GET_CODE (x6) != REG
          || REGNO (x6) != 17
          || GET_MODE (x6) != E_CCmode)
        return -1;
      switch (GET_CODE (x4))
        {
        case SUBREG:
          switch (pattern1046 (x2))
            {
            case 0:
              if (!
#line 8248 "../../gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)))
                return -1;
              return 408; /* *subqi_exthi_2_slp */

            case 1:
              if (!
#line 8248 "../../gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)))
                return -1;
              return 409; /* *subqi_extsi_2_slp */

            case 2:
              if (!(
#line 8248 "../../gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)) && 
#line 1164 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return -1;
              return 410; /* *subqi_extdi_2_slp */

            case 3:
              return 419; /* *subqi_ext2hi_0 */

            case 4:
              return 420; /* *subqi_ext2si_0 */

            case 5:
              if (!
#line 1164 "../../gcc/config/i386/i386.md"
(TARGET_64BIT))
                return -1;
              return 421; /* *subqi_ext2di_0 */

            default:
              return -1;
            }

        case CONST_INT:
          x7 = XEXP (x3, 1);
          if (GET_CODE (x7) != CLZ)
            return -1;
          x8 = XEXP (x2, 0);
          operands[0] = x8;
          x9 = XEXP (x7, 0);
          operands[1] = x9;
          switch (XWINT (x4, 0))
            {
            case 63L:
              if (pattern1431 (x3, 
E_DImode) != 0
                  || !
#line 21238 "../../gcc/config/i386/i386.md"
(!TARGET_LZCNT && TARGET_64BIT))
                return -1;
              return 1525; /* bsr_rex64_1 */

            case 31L:
              if (pattern1431 (x3, 
E_SImode) != 0
                  || !
#line 21279 "../../gcc/config/i386/i386.md"
(!TARGET_LZCNT))
                return -1;
              return 1528; /* bsr_1 */

            default:
              return -1;
            }

        default:
          return -1;
        }

    case MINUS:
      x5 = XVECEXP (x1, 0, 1);
      if (pattern351 (x5) != 0)
        return -1;
      x8 = XEXP (x2, 0);
      operands[0] = x8;
      x10 = XEXP (x4, 0);
      operands[1] = x10;
      x7 = XEXP (x3, 1);
      operands[2] = x7;
      x11 = XEXP (x4, 1);
      switch (GET_CODE (x11))
        {
        case LTU:
        case UNLT:
          operands[4] = x11;
          x12 = XEXP (x11, 1);
          if (x12 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
            return -1;
          x13 = XEXP (x11, 0);
          operands[3] = x13;
          if (!flags_reg_operand (operands[3], E_VOIDmode))
            return -1;
          switch (GET_MODE (operands[0]))
            {
            case E_QImode:
              if (pattern1627 (x3, 
E_QImode) != 0
                  || !
#line 9277 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (MINUS, QImode, operands, TARGET_APX_NDD)))
                return -1;
              return 487; /* subqi3_carry */

            case E_HImode:
              if (pattern1627 (x3, 
E_HImode) != 0
                  || !
#line 9277 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (MINUS, HImode, operands, TARGET_APX_NDD)))
                return -1;
              return 488; /* subhi3_carry */

            case E_SImode:
              if (pattern1628 (x3, 
E_SImode) != 0
                  || !
#line 9277 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (MINUS, SImode, operands, TARGET_APX_NDD)))
                return -1;
              return 489; /* subsi3_carry */

            case E_DImode:
              if (pattern1628 (x3, 
E_DImode) != 0
                  || !(
#line 9277 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (MINUS, DImode, operands, TARGET_APX_NDD)) && 
#line 1161 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return -1;
              return 490; /* subdi3_carry */

            default:
              return -1;
            }

        case EQ:
          x12 = XEXP (x11, 1);
          if (x12 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
            return -1;
          x13 = XEXP (x11, 0);
          operands[3] = x13;
          if (!int_nonimmediate_operand (operands[3], E_VOIDmode))
            return -1;
          switch (GET_MODE (operands[0]))
            {
            case E_QImode:
              if (pattern1566 (x3, 
E_QImode) != 0
                  || !
#line 10230 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (MINUS, QImode, operands, TARGET_APX_NDD)
   && ix86_pre_reload_split ()))
                return -1;
              return 570; /* *subqi3_eq */

            case E_HImode:
              if (pattern1566 (x3, 
E_HImode) != 0
                  || !
#line 10230 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (MINUS, HImode, operands, TARGET_APX_NDD)
   && ix86_pre_reload_split ()))
                return -1;
              return 571; /* *subhi3_eq */

            case E_SImode:
              if (pattern1567 (x3, 
E_SImode) != 0
                  || !
#line 10230 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (MINUS, SImode, operands, TARGET_APX_NDD)
   && ix86_pre_reload_split ()))
                return -1;
              return 572; /* *subsi3_eq */

            case E_DImode:
              if (pattern1567 (x3, 
E_DImode) != 0
                  || !(
#line 10230 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (MINUS, DImode, operands, TARGET_APX_NDD)
   && ix86_pre_reload_split ()) && 
#line 1161 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return -1;
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
recog_399 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12, x13, x14;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  x4 = XEXP (x3, 0);
  switch (GET_CODE (x4))
    {
    case REG:
    case SUBREG:
    case MEM:
      operands[1] = x4;
      res = recog_397 (x1, insn, pnum_clobbers);
      if (res >= 0)
        return res;
      if (GET_CODE (x4) != SUBREG
          || maybe_ne (SUBREG_BYTE (x4), 0))
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
          x8 = XVECEXP (x1, 0, 1);
          if (pattern227 (x8, 
E_CCmode, 
17) != 0
              || GET_MODE (x3) != E_QImode
              || GET_MODE (x4) != E_QImode)
            return -1;
          x9 = XEXP (x5, 0);
          operands[2] = x9;
          switch (pattern1621 (x2))
            {
            case 0:
              if (
#line 12768 "../../gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)))
                return 731; /* *andqi_exthi_1_slp */
              break;

            case 1:
              if (
#line 12768 "../../gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)))
                return 734; /* *andqi_extsi_1_slp */
              break;

            case 2:
              if ((
#line 12768 "../../gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)) && 
#line 1164 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return 737; /* *andqi_extdi_1_slp */
              break;

            case 3:
              return 755; /* *andqi_exthi_0 */

            case 4:
              return 758; /* *andqi_extsi_0 */

            case 5:
              if (
#line 1164 "../../gcc/config/i386/i386.md"
(TARGET_64BIT))
                return 761; /* *andqi_extdi_0 */
              break;

            default:
              break;
            }
          x10 = XEXP (x3, 1);
          if (GET_CODE (x10) != SUBREG)
            return -1;
          switch (pattern1622 (x2))
            {
            case 0:
              if (!
#line 12801 "../../gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)))
                return -1;
              return 740; /* *andqi_exthi_2_slp */

            case 1:
              if (!
#line 12801 "../../gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)))
                return -1;
              return 743; /* *andqi_extsi_2_slp */

            case 2:
              if (!(
#line 12801 "../../gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)) && 
#line 1164 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return -1;
              return 746; /* *andqi_extdi_2_slp */

            case 3:
              return 764; /* *andqi_ext2hi_0 */

            case 4:
              return 767; /* *andqi_ext2si_0 */

            case 5:
              if (!
#line 1164 "../../gcc/config/i386/i386.md"
(TARGET_64BIT))
                return -1;
              return 770; /* *andqi_ext2di_0 */

            default:
              return -1;
            }

        case ROTATE:
          if (GET_MODE (x5) != E_SImode)
            return -1;
          x9 = XEXP (x5, 0);
          if (x9 != const_int_rtx[MAX_SAVED_CONST_INT + -2])
            return -1;
          x8 = XVECEXP (x1, 0, 1);
          if (pattern406 (x8) != 0)
            return -1;
          switch (pattern1433 (x2))
            {
            case 0:
              if (!
#line 18942 "../../gcc/config/i386/i386.md"
(TARGET_USE_BT && ix86_pre_reload_split ()))
                return -1;
              return 1409; /* *btrqi_1 */

            case 1:
              if (!
#line 18942 "../../gcc/config/i386/i386.md"
(TARGET_USE_BT && ix86_pre_reload_split ()))
                return -1;
              return 1410; /* *btrhi_1 */

            default:
              return -1;
            }

        case CTZ:
          switch (pattern819 (x1, pnum_clobbers))
            {
            case 0:
              if (!
#line 21123 "../../gcc/config/i386/i386.md"
(TARGET_BMI && TARGET_64BIT))
                return -1;
              return 1518; /* *ctzsi2_zext */

            case 1:
              if (!
#line 21152 "../../gcc/config/i386/i386.md"
(TARGET_BMI && TARGET_64BIT))
                return -1;
              *pnum_clobbers = 1;
              return 1519; /* *ctzsi2_zext_falsedep */

            default:
              return -1;
            }

        case CLZ:
          if (GET_MODE (x5) != E_SImode)
            return -1;
          x10 = XEXP (x3, 1);
          if (x10 != const_int_rtx[MAX_SAVED_CONST_INT + 63])
            return -1;
          x11 = XEXP (x2, 0);
          operands[0] = x11;
          if (!register_operand (operands[0], E_DImode)
              || GET_MODE (x3) != E_DImode
              || GET_MODE (x4) != E_DImode)
            return -1;
          x9 = XEXP (x5, 0);
          operands[1] = x9;
          x8 = XVECEXP (x1, 0, 1);
          switch (pattern818 (x8, pnum_clobbers))
            {
            case 0:
              if (!nonimmediate_operand (operands[1], E_SImode)
                  || !
#line 21560 "../../gcc/config/i386/i386.md"
(TARGET_LZCNT && TARGET_64BIT))
                return -1;
              return 1540; /* *clzsi2_lzcnt_zext */

            case 1:
              switch (GET_MODE (operands[1]))
                {
                case E_SImode:
                  if (!nonimmediate_operand (operands[1], E_SImode)
                      || !
#line 21588 "../../gcc/config/i386/i386.md"
(TARGET_LZCNT))
                    return -1;
                  *pnum_clobbers = 1;
                  return 1541; /* *clzsi2_lzcnt_zext_falsedep */

                case E_DImode:
                  if (!nonimmediate_operand (operands[1], E_DImode)
                      || !(
#line 21588 "../../gcc/config/i386/i386.md"
(TARGET_LZCNT) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                    return -1;
                  *pnum_clobbers = 1;
                  return 1542; /* *clzsi2_lzcnt_zext_falsedep */

                default:
                  return -1;
                }

            default:
              return -1;
            }

        case POPCOUNT:
          switch (pattern819 (x1, pnum_clobbers))
            {
            case 0:
              if (!
#line 22241 "../../gcc/config/i386/i386.md"
(TARGET_POPCNT && TARGET_64BIT))
                return -1;
              return 1626; /* *popcountsi2_zext */

            case 1:
              if (!
#line 22275 "../../gcc/config/i386/i386.md"
(TARGET_POPCNT && TARGET_64BIT))
                return -1;
              *pnum_clobbers = 1;
              return 1627; /* *popcountsi2_zext_falsedep */

            default:
              return -1;
            }

        default:
          return -1;
        }

    case NOT:
      x11 = XEXP (x2, 0);
      operands[0] = x11;
      x5 = XEXP (x4, 0);
      switch (GET_CODE (x5))
        {
        case REG:
        case SUBREG:
          operands[1] = x5;
          res = recog_398 (x1, insn, pnum_clobbers);
          if (res >= 0)
            return res;
          if (GET_CODE (x5) != SUBREG
              || maybe_ne (SUBREG_BYTE (x5), 0)
              || GET_MODE (x5) != E_QImode)
            return -1;
          x9 = XEXP (x5, 0);
          if (GET_CODE (x9) != LSHIFTRT)
            return -1;
          x10 = XEXP (x3, 1);
          if (x10 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
            return -1;
          x8 = XVECEXP (x1, 0, 1);
          if (pattern227 (x8, 
E_CCmode, 
17) != 0)
            return -1;
          switch (pattern1527 (x3))
            {
            case 0:
              if (!
#line 19344 "../../gcc/config/i386/i386.md"
(TARGET_USE_BT && ix86_pre_reload_split ()))
                return -1;
              return 1436; /* *btsi_setncqi */

            case 1:
              if (!(
#line 19344 "../../gcc/config/i386/i386.md"
(TARGET_USE_BT && ix86_pre_reload_split ()) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return -1;
              return 1437; /* *btdi_setncqi */

            default:
              return -1;
            }

        case LSHIFTRT:
          x10 = XEXP (x3, 1);
          if (x10 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
            return -1;
          x8 = XVECEXP (x1, 0, 1);
          if (pattern227 (x8, 
E_CCmode, 
17) != 0)
            return -1;
          switch (pattern1244 (x3))
            {
            case 0:
              if (!
#line 19362 "../../gcc/config/i386/i386.md"
(TARGET_USE_BT && ix86_pre_reload_split ()))
                return -1;
              return 1438; /* *btsi_setncsi */

            case 1:
              if (!(
#line 19362 "../../gcc/config/i386/i386.md"
(TARGET_USE_BT && ix86_pre_reload_split ()) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return -1;
              return 1439; /* *btdi_setncdi */

            default:
              return -1;
            }

        case ASHIFT:
          x9 = XEXP (x5, 0);
          if (x9 != const_int_rtx[MAX_SAVED_CONST_INT + -1])
            return -1;
          x8 = XVECEXP (x1, 0, 1);
          if (pattern227 (x8, 
E_CCmode, 
17) != 0)
            return -1;
          switch (pattern1246 (x3))
            {
            case 0:
              if (!
#line 21943 "../../gcc/config/i386/i386.md"
(TARGET_BMI2))
                return -1;
              return 1590; /* *bmi2_bzhi_si3_3 */

            case 1:
              if (!(
#line 21943 "../../gcc/config/i386/i386.md"
(TARGET_BMI2) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return -1;
              return 1591; /* *bmi2_bzhi_di3_3 */

            default:
              return -1;
            }

        default:
          return -1;
        }

    case ROTATE:
      switch (pattern371 (x1, 
-2))
        {
        case 0:
          x12 = XEXP (x4, 1);
          operands[2] = x12;
          if (register_operand (operands[2], E_QImode))
            {
              switch (pattern946 (x3))
                {
                case 0:
                  if (
#line 18873 "../../gcc/config/i386/i386.md"
(TARGET_USE_BT))
                    return 1403; /* *btrsi */
                  break;

                case 1:
                  if ((
#line 18873 "../../gcc/config/i386/i386.md"
(TARGET_USE_BT) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                    return 1404; /* *btrdi */
                  break;

                default:
                  break;
                }
            }
          if (GET_CODE (x12) != SUBREG)
            return -1;
          switch (pattern1329 (x3))
            {
            case 0:
              if (!
#line 18892 "../../gcc/config/i386/i386.md"
(TARGET_USE_BT
   && (INTVAL (operands[2]) & (GET_MODE_BITSIZE (SImode)-1))
      == GET_MODE_BITSIZE (SImode)-1
   && ix86_pre_reload_split ()))
                return -1;
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
          return 1408; /* *btrdi_mask_1 */

        default:
          return -1;
        }

    case NEG:
      if (pattern345 (x1) != 0)
        return -1;
      x10 = XEXP (x3, 1);
      if (!rtx_equal_p (x10, operands[1]))
        return -1;
      switch (GET_MODE (operands[0]))
        {
        case E_SImode:
          if (pattern200 (x3, 
E_SImode) != 0
              || !
#line 21764 "../../gcc/config/i386/i386.md"
(TARGET_BMI))
            return -1;
          return 1570; /* *bmi_blsi_si */

        case E_DImode:
          if (pattern200 (x3, 
E_DImode) != 0
              || !(
#line 21764 "../../gcc/config/i386/i386.md"
(TARGET_BMI) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return -1;
          return 1571; /* *bmi_blsi_di */

        default:
          return -1;
        }

    case PLUS:
      x12 = XEXP (x4, 1);
      if (GET_CODE (x12) != CONST_INT
          || pattern338 (x1) != 0)
        return -1;
      x5 = XEXP (x4, 0);
      switch (GET_CODE (x5))
        {
        case REG:
        case SUBREG:
        case MEM:
          operands[1] = x5;
          switch (XWINT (x12, 0))
            {
            case -1L:
              switch (pattern1328 (x3))
                {
                case 0:
                  if (!
#line 21821 "../../gcc/config/i386/i386.md"
(TARGET_BMI))
                    return -1;
                  return 1578; /* *bmi_blsr_si */

                case 1:
                  if (!(
#line 21821 "../../gcc/config/i386/i386.md"
(TARGET_BMI) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                    return -1;
                  return 1579; /* *bmi_blsr_di */

                case 2:
                  if (!
#line 22136 "../../gcc/config/i386/i386.md"
(TARGET_TBM))
                    return -1;
                  return 1616; /* *tbm_tzmsk_si */

                case 3:
                  if (!(
#line 22136 "../../gcc/config/i386/i386.md"
(TARGET_TBM) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                    return -1;
                  return 1617; /* *tbm_tzmsk_di */

                default:
                  return -1;
                }

            case 1L:
              switch (pattern1328 (x3))
                {
                case 0:
                  if (!
#line 22027 "../../gcc/config/i386/i386.md"
(TARGET_TBM))
                    return -1;
                  return 1600; /* *tbm_blcfill_si */

                case 1:
                  if (!(
#line 22027 "../../gcc/config/i386/i386.md"
(TARGET_TBM) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                    return -1;
                  return 1601; /* *tbm_blcfill_di */

                case 2:
                  if (!
#line 22055 "../../gcc/config/i386/i386.md"
(TARGET_TBM))
                    return -1;
                  return 1604; /* *tbm_blcic_si */

                case 3:
                  if (!(
#line 22055 "../../gcc/config/i386/i386.md"
(TARGET_TBM) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                    return -1;
                  return 1605; /* *tbm_blcic_di */

                default:
                  return -1;
                }

            default:
              return -1;
            }

        case ASHIFT:
          x9 = XEXP (x5, 0);
          if (x9 != const_int_rtx[MAX_SAVED_CONST_INT + 1]
              || XWINT (x12, 0) != -1L)
            return -1;
          switch (pattern1246 (x3))
            {
            case 0:
              if (!
#line 21929 "../../gcc/config/i386/i386.md"
(TARGET_BMI2))
                return -1;
              return 1588; /* *bmi2_bzhi_si3_2 */

            case 1:
              if (!(
#line 21929 "../../gcc/config/i386/i386.md"
(TARGET_BMI2) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return -1;
              return 1589; /* *bmi2_bzhi_di3_2 */

            default:
              return -1;
            }

        default:
          return -1;
        }

    case ZERO_EXTEND:
      if (GET_MODE (x4) != E_DImode)
        return -1;
      x5 = XEXP (x4, 0);
      if (GET_CODE (x5) != PLUS
          || pattern693 (x5) != 0)
        return -1;
      x8 = XVECEXP (x1, 0, 1);
      if (GET_CODE (x8) != CLOBBER)
        return -1;
      x13 = XEXP (x8, 0);
      if (GET_CODE (x13) != REG
          || REGNO (x13) != 17
          || GET_MODE (x13) != E_CCmode)
        return -1;
      x11 = XEXP (x2, 0);
      operands[0] = x11;
      if (!register_operand (operands[0], E_DImode)
          || GET_MODE (x3) != E_DImode)
        return -1;
      x9 = XEXP (x5, 0);
      x14 = XEXP (x9, 1);
      operands[2] = x14;
      if (!register_operand (operands[2], E_QImode))
        return -1;
      x10 = XEXP (x3, 1);
      operands[1] = x10;
      if (!nonimmediate_operand (operands[1], E_DImode)
          || !
#line 21975 "../../gcc/config/i386/i386.md"
(TARGET_64BIT && TARGET_BMI2))
        return -1;
      return 1593; /* *bmi2_bzhi_zero_extendsidi_5 */

    default:
      return -1;
    }
}

 int
recog_411 (rtx x1 ATTRIBUTE_UNUSED,
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
          return 1514; /* ctzsi2 */

        case 1:
          if (!
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT))
            return -1;
          return 1515; /* ctzdi2 */

        default:
          return -1;
        }

    case UNSPEC:
      if (pnum_clobbers == NULL)
        return -1;
      switch (pattern704 (x1))
        {
        case 0:
          *pnum_clobbers = 1;
          return 1516; /* *ctzsi2_falsedep */

        case 1:
          if (!
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT))
            return -1;
          *pnum_clobbers = 1;
          return 1517; /* *ctzdi2_falsedep */

        default:
          return -1;
        }

    default:
      return -1;
    }
}

 int
recog_414 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8;
  int res ATTRIBUTE_UNUSED;
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
            return -1;
          switch (GET_MODE (operands[0]))
            {
            case E_SImode:
              if (!register_operand (operands[0], E_SImode)
                  || GET_MODE (x4) != E_SImode
                  || !nonimmediate_operand (operands[1], E_SImode)
                  || !
#line 22170 "../../gcc/config/i386/i386.md"
(TARGET_POPCNT))
                return -1;
              return 1620; /* popcountsi2 */

            case E_DImode:
              if (!register_operand (operands[0], E_DImode)
                  || GET_MODE (x4) != E_DImode
                  || !nonimmediate_operand (operands[1], E_DImode)
                  || !(
#line 22170 "../../gcc/config/i386/i386.md"
(TARGET_POPCNT) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return -1;
              return 1621; /* popcountdi2 */

            case E_HImode:
              if (!register_operand (operands[0], E_HImode)
                  || GET_MODE (x4) != E_HImode
                  || !nonimmediate_operand (operands[1], E_HImode)
                  || !
#line 22375 "../../gcc/config/i386/i386.md"
(TARGET_POPCNT && true))
                return -1;
              return 1633; /* popcounthi2 */

            default:
              return -1;
            }

        case UNSPEC:
          switch (pattern704 (x1))
            {
            case 0:
              if (
#line 22201 "../../gcc/config/i386/i386.md"
(TARGET_APX_NF && TARGET_POPCNT))
                return 1622; /* *popcountsi2_falsedep_nf */
              if (pnum_clobbers == NULL
                  || !
#line 22220 "../../gcc/config/i386/i386.md"
(TARGET_POPCNT))
                return -1;
              *pnum_clobbers = 1;
              return 1624; /* *popcountsi2_falsedep */

            case 1:
              if ((
#line 22201 "../../gcc/config/i386/i386.md"
(TARGET_APX_NF && TARGET_POPCNT) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return 1623; /* *popcountdi2_falsedep_nf */
              if (pnum_clobbers == NULL
                  || !(
#line 22220 "../../gcc/config/i386/i386.md"
(TARGET_POPCNT) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return -1;
              *pnum_clobbers = 1;
              return 1625; /* *popcountdi2_falsedep */

            default:
              return -1;
            }

        default:
          return -1;
        }

    case ZERO_EXTEND:
      if (GET_MODE (x5) != E_SImode)
        return -1;
      x6 = XVECEXP (x1, 0, 1);
      if (pattern227 (x6, 
E_CCmode, 
17) != 0
          || !register_operand (operands[0], E_SImode)
          || GET_MODE (x4) != E_SImode)
        return -1;
      x8 = XEXP (x5, 0);
      operands[1] = x8;
      if (!nonimmediate_operand (operands[1], E_HImode)
          || !
#line 22340 "../../gcc/config/i386/i386.md"
(TARGET_POPCNT
   && ix86_pre_reload_split ()))
        return -1;
      return 1630; /* *popcounthi2_1 */

    default:
      return -1;
    }
}

 int
recog_424 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12, x13, x14, x15, x16, x17;
  rtx x18, x19, x20;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x2) != SET)
    return -1;
  x3 = XVECEXP (x1, 0, 0);
  x4 = XEXP (x3, 0);
  operands[0] = x4;
  x5 = XEXP (x3, 1);
  switch (XVECLEN (x5, 0))
    {
    case 1:
      if (XINT (x5, 1) != 10
          || GET_MODE (x5) != E_DImode)
        return -1;
      x6 = XVECEXP (x5, 0, 0);
      if (x6 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
        return -1;
      x7 = XEXP (x2, 1);
      if (pattern813 (x7, 
E_DImode, 
10, 
1, 
UNSPEC_VOLATILE) != 0
          || pattern1173 (x1, 
E_SImode, 
10) != 0
          || !register_operand (operands[0], E_DImode))
        return -1;
      x8 = XEXP (x2, 0);
      operands[1] = x8;
      if (!register_operand (operands[1], E_DImode))
        return -1;
      x9 = XVECEXP (x1, 0, 2);
      x10 = XEXP (x9, 0);
      operands[2] = x10;
      if (!register_operand (operands[2], E_SImode)
          || !
#line 28979 "../../gcc/config/i386/i386.md"
(TARGET_64BIT))
        return -1;
      return 1894; /* rdtscp_rex64 */

    case 5:
      if (XINT (x5, 1) != 109)
        return -1;
      x7 = XEXP (x2, 1);
      if (GET_CODE (x7) != UNSPEC_VOLATILE
          || XVECLEN (x7, 0) != 1
          || XINT (x7, 1) != 109
          || pattern1173 (x1, 
E_CCZmode, 
109) != 0)
        return -1;
      x9 = XVECEXP (x1, 0, 2);
      x10 = XEXP (x9, 0);
      if (GET_CODE (x10) != REG
          || REGNO (x10) != 17
          || GET_MODE (x10) != E_CCZmode)
        return -1;
      x6 = XVECEXP (x5, 0, 0);
      operands[1] = x6;
      x11 = XVECEXP (x5, 0, 1);
      operands[2] = x11;
      x12 = XVECEXP (x5, 0, 2);
      operands[3] = x12;
      x13 = XVECEXP (x5, 0, 3);
      operands[4] = x13;
      x14 = XVECEXP (x5, 0, 4);
      operands[5] = x14;
      if (!const_int_operand (operands[5], E_SImode))
        return -1;
      x8 = XEXP (x2, 0);
      if (!rtx_equal_p (x8, operands[1]))
        return -1;
      switch (GET_MODE (operands[0]))
        {
        case E_DImode:
          if (pattern1832 (x1, 
E_DImode, 
E_SImode) != 0
              || !(
#line 486 "../../gcc/config/i386/sync.md"
(TARGET_CMPXCHG8B) && 
#line 1235 "../../gcc/config/i386/i386.md"
(!TARGET_64BIT)))
            return -1;
          return 11021; /* atomic_compare_and_swapdi_doubleword */

        case E_TImode:
          if (pattern1832 (x1, 
E_TImode, 
E_DImode) != 0
              || !(
#line 486 "../../gcc/config/i386/sync.md"
(TARGET_CMPXCHG16B) && 
#line 1236 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return -1;
          return 11022; /* atomic_compare_and_swapti_doubleword */

        default:
          return -1;
        }

    case 4:
      x7 = XEXP (x2, 1);
      if (GET_CODE (x7) != UNSPEC_VOLATILE
          || XVECLEN (x7, 0) != 1)
        return -1;
      x15 = XVECEXP (x7, 0, 0);
      if (x15 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
        return -1;
      x9 = XVECEXP (x1, 0, 2);
      if (GET_CODE (x9) != SET)
        return -1;
      x10 = XEXP (x9, 0);
      if (GET_CODE (x10) != REG
          || REGNO (x10) != 17)
        return -1;
      x6 = XVECEXP (x5, 0, 0);
      operands[1] = x6;
      x11 = XVECEXP (x5, 0, 1);
      operands[2] = x11;
      x12 = XVECEXP (x5, 0, 2);
      operands[3] = x12;
      x13 = XVECEXP (x5, 0, 3);
      operands[4] = x13;
      x8 = XEXP (x2, 0);
      if (!rtx_equal_p (x8, operands[1]))
        return -1;
      switch (XINT (x5, 1))
        {
        case 109:
          if (XINT (x7, 1) != 109)
            return -1;
          x16 = XEXP (x9, 1);
          if (pattern1172 (x16, 
E_CCZmode, 
109) != 0
              || !const_int_operand (operands[4], E_SImode)
              || GET_MODE (x10) != E_CCZmode)
            return -1;
          switch (GET_MODE (operands[0]))
            {
            case E_QImode:
              if (pattern1822 (x1, 
E_QImode) != 0
                  || !
#line 501 "../../gcc/config/i386/sync.md"
(TARGET_CMPXCHG))
                return -1;
              return 11023; /* atomic_compare_and_swapqi_1 */

            case E_HImode:
              if (pattern1822 (x1, 
E_HImode) != 0
                  || !
#line 501 "../../gcc/config/i386/sync.md"
(TARGET_CMPXCHG))
                return -1;
              return 11024; /* atomic_compare_and_swaphi_1 */

            case E_SImode:
              if (pattern1822 (x1, 
E_SImode) != 0
                  || !
#line 501 "../../gcc/config/i386/sync.md"
(TARGET_CMPXCHG))
                return -1;
              return 11025; /* atomic_compare_and_swapsi_1 */

            case E_DImode:
              if (pattern1822 (x1, 
E_DImode) != 0
                  || !(
#line 501 "../../gcc/config/i386/sync.md"
(TARGET_CMPXCHG) && 
#line 1161 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return -1;
              return 11026; /* atomic_compare_and_swapdi_1 */

            default:
              return -1;
            }

        case 112:
          if (XINT (x7, 1) != 112)
            return -1;
          x16 = XEXP (x9, 1);
          if (GET_CODE (x16) != COMPARE
              || GET_MODE (x16) != E_CCmode
              || !const_0_to_15_operand (operands[4], E_SImode)
              || GET_MODE (x10) != E_CCmode)
            return -1;
          x17 = XEXP (x16, 0);
          if (!rtx_equal_p (x17, operands[1]))
            return -1;
          x18 = XEXP (x16, 1);
          if (!rtx_equal_p (x18, operands[2]))
            return -1;
          switch (GET_MODE (operands[0]))
            {
            case E_SImode:
              if (pattern1822 (x1, 
E_SImode) != 0
                  || !
#line 1119 "../../gcc/config/i386/sync.md"
(TARGET_CMPCCXADD && TARGET_64BIT))
                return -1;
              return 11096; /* cmpccxadd_si */

            case E_DImode:
              if (pattern1822 (x1, 
E_DImode) != 0
                  || !
#line 1119 "../../gcc/config/i386/sync.md"
(TARGET_CMPCCXADD && TARGET_64BIT))
                return -1;
              return 11097; /* cmpccxadd_di */

            default:
              return -1;
            }

        default:
          return -1;
        }

    case 2:
      if (XINT (x5, 1) != 110)
        return -1;
      x7 = XEXP (x2, 1);
      if (GET_CODE (x7) != PLUS)
        return -1;
      x9 = XVECEXP (x1, 0, 2);
      if (pattern953 (x9, 
E_CCmode, 
17) != 0)
        return -1;
      x6 = XVECEXP (x5, 0, 0);
      operands[1] = x6;
      x11 = XVECEXP (x5, 0, 1);
      operands[3] = x11;
      if (!const_int_operand (operands[3], E_SImode))
        return -1;
      x19 = XEXP (x7, 1);
      operands[2] = x19;
      x20 = XEXP (x7, 0);
      if (!rtx_equal_p (x20, operands[1]))
        return -1;
      x8 = XEXP (x2, 0);
      if (!rtx_equal_p (x8, operands[1]))
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
          return 11027; /* atomic_fetch_addqi */

        case E_HImode:
          if (pattern1570 (x1, 
E_HImode) != 0
              || !
#line 703 "../../gcc/config/i386/sync.md"
(TARGET_XADD))
            return -1;
          return 11028; /* atomic_fetch_addhi */

        case E_SImode:
          if (pattern1570 (x1, 
E_SImode) != 0
              || !
#line 703 "../../gcc/config/i386/sync.md"
(TARGET_XADD))
            return -1;
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
          return 11030; /* atomic_fetch_adddi */

        default:
          return -1;
        }

    default:
      return -1;
    }
}

 int
recog_433 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  switch (GET_CODE (x2))
    {
    case UNSPEC_VOLATILE:
      if (XVECLEN (x2, 0) != 1
          || XINT (x2, 1) != 97)
        return -1;
      x3 = XVECEXP (x2, 0, 0);
      if (x3 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
        return -1;
      operands[0] = x1;
      if (!vzeroall_operation (operands[0], E_VOIDmode)
          || !
#line 27231 "../../gcc/config/i386/sse.md"
(TARGET_AVX))
        return -1;
      return 9085; /* *avx_vzeroall */

    case USE:
      operands[0] = x1;
      x4 = XEXP (x2, 0);
      operands[1] = x4;
      if (save_multiple (operands[0], E_VOIDmode))
        {
          switch (GET_MODE (operands[1]))
            {
            case E_SImode:
              if (symbol_operand (operands[1], E_SImode)
                  && (
#line 30293 "../../gcc/config/i386/sse.md"
(TARGET_SSE && TARGET_64BIT) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode)))
                return 10141; /* *save_multiplesi */
              break;

            case E_DImode:
              if (symbol_operand (operands[1], E_DImode)
                  && (
#line 30293 "../../gcc/config/i386/sse.md"
(TARGET_SSE && TARGET_64BIT) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode)))
                return 10142; /* *save_multipledi */
              break;

            default:
              break;
            }
        }
      if (!restore_multiple (operands[0], E_VOIDmode))
        return -1;
      switch (GET_MODE (operands[1]))
        {
        case E_SImode:
          if (!symbol_operand (operands[1], E_SImode)
              || !(
#line 30300 "../../gcc/config/i386/sse.md"
(TARGET_SSE && TARGET_64BIT) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode)))
            return -1;
          return 10143; /* *restore_multiplesi */

        case E_DImode:
          if (!symbol_operand (operands[1], E_DImode)
              || !(
#line 30300 "../../gcc/config/i386/sse.md"
(TARGET_SSE && TARGET_64BIT) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode)))
            return -1;
          return 10144; /* *restore_multipledi */

        default:
          return -1;
        }

    case SET:
      x5 = XEXP (x2, 1);
      if (GET_CODE (x5) != UNSPEC_VOLATILE)
        return -1;
      switch (XVECLEN (x5, 0))
        {
        case 2:
          if (pattern393 (x5, 
107) != 0)
            return -1;
          operands[2] = x1;
          if (!encodekey128_operation (operands[2], E_VOIDmode))
            return -1;
          x4 = XEXP (x2, 0);
          operands[0] = x4;
          if (!register_operand (operands[0], E_SImode))
            return -1;
          x6 = XVECEXP (x5, 0, 0);
          operands[1] = x6;
          if (!register_operand (operands[1], E_SImode)
              || !
#line 31269 "../../gcc/config/i386/sse.md"
(TARGET_KL))
            return -1;
          return 10357; /* *encodekey128u32 */

        case 3:
          if (pattern393 (x5, 
108) != 0)
            return -1;
          x7 = XVECEXP (x5, 0, 2);
          if (GET_CODE (x7) != REG
              || REGNO (x7) != 21
              || GET_MODE (x7) != E_V2DImode)
            return -1;
          operands[2] = x1;
          if (!encodekey256_operation (operands[2], E_VOIDmode))
            return -1;
          x4 = XEXP (x2, 0);
          operands[0] = x4;
          if (!register_operand (operands[0], E_SImode))
            return -1;
          x6 = XVECEXP (x5, 0, 0);
          operands[1] = x6;
          if (!register_operand (operands[1], E_SImode)
              || !
#line 31327 "../../gcc/config/i386/sse.md"
(TARGET_KL))
            return -1;
          return 10358; /* *encodekey256u32 */

        case 1:
          x4 = XEXP (x2, 0);
          if (GET_CODE (x4) != REG
              || REGNO (x4) != 17
              || GET_MODE (x4) != E_CCZmode)
            return -1;
          operands[1] = x1;
          if (!aeswidekl_operation (operands[1], E_VOIDmode)
              || GET_MODE (x5) != E_CCZmode)
            return -1;
          x6 = XVECEXP (x5, 0, 0);
          operands[0] = x6;
          if (!memory_operand (operands[0], E_BLKmode))
            return -1;
          switch (XINT (x5, 1))
            {
            case 103:
              if (!
#line 31410 "../../gcc/config/i386/sse.md"
(TARGET_WIDEKL))
                return -1;
              return 10363; /* *aesdecwide128klu8 */

            case 105:
              if (!
#line 31410 "../../gcc/config/i386/sse.md"
(TARGET_WIDEKL))
                return -1;
              return 10364; /* *aesdecwide256klu8 */

            case 104:
              if (!
#line 31410 "../../gcc/config/i386/sse.md"
(TARGET_WIDEKL))
                return -1;
              return 10365; /* *aesencwide128klu8 */

            case 106:
              if (!
#line 31410 "../../gcc/config/i386/sse.md"
(TARGET_WIDEKL))
                return -1;
              return 10366; /* *aesencwide256klu8 */

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

 rtx_insn *
split_2 (rtx x1 ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  rtx_insn *res ATTRIBUTE_UNUSED;
  switch (GET_MODE (operands[0]))
    {
    case E_DFmode:
      if (!push_operand (operands[0], E_DFmode))
        return NULL;
      x2 = XEXP (x1, 1);
      if (GET_MODE (x2) != E_DFmode
          || !fp_register_operand (operands[1], E_SFmode))
        return NULL;
      if ((
#line 5258 "../../gcc/config/i386/i386.md"
(reload_completed) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode)))
        return gen_split_64 (insn, operands);
      if (!(
#line 5258 "../../gcc/config/i386/i386.md"
(reload_completed) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode)))
        return NULL;
      return gen_split_65 (insn, operands);

    case E_XFmode:
      if (!push_operand (operands[0], E_XFmode))
        return NULL;
      x2 = XEXP (x1, 1);
      if (GET_MODE (x2) != E_XFmode)
        return NULL;
      switch (GET_MODE (operands[1]))
        {
        case E_SFmode:
          if (!fp_register_operand (operands[1], E_SFmode))
            return NULL;
          if ((
#line 5265 "../../gcc/config/i386/i386.md"
(reload_completed) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode)))
            return gen_split_66 (insn, operands);
          if (!(
#line 5265 "../../gcc/config/i386/i386.md"
(reload_completed) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode)))
            return NULL;
          return gen_split_67 (insn, operands);

        case E_DFmode:
          if (!fp_register_operand (operands[1], E_DFmode))
            return NULL;
          if ((
#line 5265 "../../gcc/config/i386/i386.md"
(reload_completed) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode)))
            return gen_split_68 (insn, operands);
          if (!(
#line 5265 "../../gcc/config/i386/i386.md"
(reload_completed) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode)))
            return NULL;
          return gen_split_69 (insn, operands);

        default:
          return NULL;
        }

    default:
      return NULL;
    }
}

 rtx_insn *
split_5 (rtx x1 ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12, x13;
  rtx_insn *res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  switch (GET_CODE (x3))
    {
    case REG:
    case SUBREG:
    case MEM:
      operands[0] = x3;
      if (pattern44 (x1, 
E_CCZmode) != 0)
        return NULL;
      x4 = XEXP (x2, 1);
      operands[1] = x4;
      switch (pattern844 ())
        {
        case 0:
          if (!((
#line 1682 "../../gcc/config/i386/i386.md"
(ix86_pre_reload_split ()) && 
#line 1235 "../../gcc/config/i386/i386.md"
(!TARGET_64BIT)) && 
#line 1684 "../../gcc/config/i386/i386.md"
( 1)))
            return NULL;
          return gen_split_1 (insn, operands);

        case 1:
          if (!((
#line 1682 "../../gcc/config/i386/i386.md"
(ix86_pre_reload_split ()) && 
#line 1236 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 1684 "../../gcc/config/i386/i386.md"
( 1)))
            return NULL;
          return gen_split_2 (insn, operands);

        default:
          return NULL;
        }

    case NEG:
      if (GET_MODE (x3) != E_QImode)
        return NULL;
      x5 = XEXP (x3, 0);
      if (GET_CODE (x5) != GEU
          || GET_MODE (x5) != E_QImode)
        return NULL;
      x6 = XEXP (x5, 0);
      if (GET_CODE (x6) != REG
          || REGNO (x6) != 17)
        return NULL;
      x7 = XEXP (x5, 1);
      if (x7 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
        return NULL;
      x4 = XEXP (x2, 1);
      if (GET_CODE (x4) != LTU
          || GET_MODE (x4) != E_QImode)
        return NULL;
      x8 = XEXP (x4, 0);
      if (GET_CODE (x8) != REG
          || REGNO (x8) != 17)
        return NULL;
      x9 = XEXP (x4, 1);
      if (x9 != const_int_rtx[MAX_SAVED_CONST_INT + 0]
          || pattern44 (x1, 
E_CCCmode) != 0)
        return NULL;
      switch (GET_MODE (x6))
        {
        case E_CCmode:
          if (GET_MODE (x8) != E_CCmode
              || !(
#line 9873 "../../gcc/config/i386/i386.md"
(ix86_pre_reload_split ()) && 
#line 9875 "../../gcc/config/i386/i386.md"
( 1)))
            return NULL;
          return gen_split_193 (insn, operands);

        case E_CCCmode:
          if (GET_MODE (x8) != E_CCCmode
              || !(
#line 9873 "../../gcc/config/i386/i386.md"
(ix86_pre_reload_split ()) && 
#line 9875 "../../gcc/config/i386/i386.md"
( 1)))
            return NULL;
          return gen_split_194 (insn, operands);

        default:
          return NULL;
        }

    case AND:
      x4 = XEXP (x2, 1);
      if (x4 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
        return NULL;
      x10 = XEXP (x1, 0);
      if (GET_CODE (x10) != REG)
        return NULL;
      x5 = XEXP (x3, 0);
      switch (GET_CODE (x5))
        {
        case REG:
        case SUBREG:
        case MEM:
          operands[0] = x5;
          if (register_operand (operands[0], E_TImode)
              && REGNO (x10) == 17
              && GET_MODE (x10) == E_CCZmode
              && GET_MODE (x2) == E_CCZmode
              && GET_MODE (x3) == E_TImode)
            {
              x11 = XEXP (x3, 1);
              operands[1] = x11;
              if (general_operand (operands[1], E_TImode)
                  && (
#line 12190 "../../gcc/config/i386/i386.md"
(TARGET_64BIT
   && ix86_pre_reload_split ()) && 
#line 12193 "../../gcc/config/i386/i386.md"
( 1)))
                return gen_split_271 (insn, operands);
            }
          operands[2] = x5;
          operands[0] = x10;
          if (!flags_reg_operand (operands[0], E_VOIDmode))
            return NULL;
          operands[1] = x2;
          if (!compare_operator (operands[1], E_VOIDmode))
            return NULL;
          x11 = XEXP (x3, 1);
          operands[3] = x11;
          if (!const_int_operand (operands[3], E_VOIDmode))
            return NULL;
          if (QIreg_operand (operands[2], E_VOIDmode)
              && 
#line 12361 "../../gcc/config/i386/i386.md"
(reload_completed
    && GET_MODE (operands[2]) != QImode
    && ((ix86_match_ccmode (insn, CCZmode)
    	 && !(INTVAL (operands[3]) & ~(255 << 8)))
	|| (ix86_match_ccmode (insn, CCNOmode)
	    && !(INTVAL (operands[3]) & ~(127 << 8))))))
            return gen_split_281 (insn, operands);
          if (!nonimmediate_operand (operands[2], E_VOIDmode)
              || !
#line 12387 "../../gcc/config/i386/i386.md"
(reload_completed
    && GET_MODE (operands[2]) != QImode
    && (!REG_P (operands[2]) || ANY_QI_REG_P (operands[2]))
    && ((ix86_match_ccmode (insn, CCZmode)
	 && !(INTVAL (operands[3]) & ~255))
	|| (ix86_match_ccmode (insn, CCNOmode)
	    && !(INTVAL (operands[3]) & ~127)))))
            return NULL;
          return gen_split_282 (insn, operands);

        case NOT:
          if (REGNO (x10) != 17
              || GET_MODE (x10) != E_CCZmode
              || GET_MODE (x2) != E_CCZmode)
            return NULL;
          switch (pattern845 (x3))
            {
            case 0:
              if (!(
#line 12320 "../../gcc/config/i386/i386.md"
(ix86_pre_reload_split ()
   && (!TARGET_BMI || !REG_P (operands[1]))) && 
#line 12323 "../../gcc/config/i386/i386.md"
( 1)))
                return NULL;
              return gen_split_275 (insn, operands);

            case 1:
              if (!(
#line 12320 "../../gcc/config/i386/i386.md"
(ix86_pre_reload_split ()
   && (!TARGET_BMI || !REG_P (operands[1]))) && 
#line 12323 "../../gcc/config/i386/i386.md"
( 1)))
                return NULL;
              return gen_split_276 (insn, operands);

            case 2:
              if (!(
#line 12320 "../../gcc/config/i386/i386.md"
(ix86_pre_reload_split ()
   && (!TARGET_BMI || !REG_P (operands[1]))) && 
#line 12323 "../../gcc/config/i386/i386.md"
( 1)))
                return NULL;
              return gen_split_277 (insn, operands);

            case 3:
              if (register_operand (operands[0], E_DImode)
                  && x86_64_szext_nonmemory_operand (operands[1], E_DImode)
                  && ((
#line 12320 "../../gcc/config/i386/i386.md"
(ix86_pre_reload_split ()
   && (!TARGET_BMI || !REG_P (operands[1]))) && 
#line 1161 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 12323 "../../gcc/config/i386/i386.md"
( 1)))
                return gen_split_278 (insn, operands);
              if (!nonimmediate_operand (operands[0], E_DImode)
                  || !nonimmediate_operand (operands[1], E_DImode)
                  || !((
#line 12338 "../../gcc/config/i386/i386.md"
(ix86_pre_reload_split ()) && 
#line 1195 "../../gcc/config/i386/i386.md"
(!TARGET_64BIT)) && 
#line 12340 "../../gcc/config/i386/i386.md"
( 1)))
                return NULL;
              return gen_split_279 (insn, operands);

            case 4:
              if (!((
#line 12338 "../../gcc/config/i386/i386.md"
(ix86_pre_reload_split ()) && 
#line 1196 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 12340 "../../gcc/config/i386/i386.md"
( 1)))
                return NULL;
              return gen_split_280 (insn, operands);

            default:
              return NULL;
            }

        default:
          return NULL;
        }

    case ZERO_EXTRACT:
      x11 = XEXP (x3, 1);
      if (GET_CODE (x11) != CONST_INT)
        return NULL;
      operands[3] = x11;
      switch (pattern281 (x1))
        {
        case 0:
          if ((
#line 12212 "../../gcc/config/i386/i386.md"
(/* Ensure that resulting mask is zero or sign extended operand.  */
   INTVAL (operands[4]) >= 0
   && ((INTVAL (operands[3]) > 0
	&& INTVAL (operands[3]) + INTVAL (operands[4]) <= 32)
       || (HImode == DImode
	   && INTVAL (operands[3]) > 32
	   && INTVAL (operands[3]) + INTVAL (operands[4]) == 64))
   && ix86_match_ccmode (insn,
			 /* If zero_extract mode precision is the same
			    as len, the SF of the zero_extract
			    comparison will be the most significant
			    extracted bit, but this could be matched
			    after splitting only for pos 0 len all bits
			    trivial extractions.  Require CCZmode.  */
			 (GET_MODE_PRECISION (HImode)
			  == INTVAL (operands[3]))
			 /* Otherwise, require CCZmode if we'd use a mask
			    with the most significant bit set and can't
			    widen it to wider mode.  *testdi_1 also
			    requires CCZmode if the mask has bit
			    31 set and all bits above it clear.  */
			 || (INTVAL (operands[3]) + INTVAL (operands[4])
			     >= 32)
			 /* We can't widen also if val is not a REG.  */
			 || (INTVAL (operands[3]) + INTVAL (operands[4])
			     == GET_MODE_PRECISION (GET_MODE (operands[2]))
			     && !register_operand (operands[2],
						   GET_MODE (operands[2])))
			 /* And we shouldn't widen if
			    TARGET_PARTIAL_REG_STALL.  */
			 || (TARGET_PARTIAL_REG_STALL
			     && (INTVAL (operands[3]) + INTVAL (operands[4])
				 >= (paradoxical_subreg_p (operands[2])
				     && (GET_MODE_CLASS
					  (GET_MODE (SUBREG_REG (operands[2])))
					 == MODE_INT)
				     ? GET_MODE_PRECISION
					 (GET_MODE (SUBREG_REG (operands[2])))
				     : GET_MODE_PRECISION
					 (GET_MODE (operands[2])))))
			 ? CCZmode : CCNOmode)) && 
#line 12254 "../../gcc/config/i386/i386.md"
( 1)))
            return gen_split_272 (insn, operands);
          break;

        case 1:
          if ((
#line 12212 "../../gcc/config/i386/i386.md"
(/* Ensure that resulting mask is zero or sign extended operand.  */
   INTVAL (operands[4]) >= 0
   && ((INTVAL (operands[3]) > 0
	&& INTVAL (operands[3]) + INTVAL (operands[4]) <= 32)
       || (SImode == DImode
	   && INTVAL (operands[3]) > 32
	   && INTVAL (operands[3]) + INTVAL (operands[4]) == 64))
   && ix86_match_ccmode (insn,
			 /* If zero_extract mode precision is the same
			    as len, the SF of the zero_extract
			    comparison will be the most significant
			    extracted bit, but this could be matched
			    after splitting only for pos 0 len all bits
			    trivial extractions.  Require CCZmode.  */
			 (GET_MODE_PRECISION (SImode)
			  == INTVAL (operands[3]))
			 /* Otherwise, require CCZmode if we'd use a mask
			    with the most significant bit set and can't
			    widen it to wider mode.  *testdi_1 also
			    requires CCZmode if the mask has bit
			    31 set and all bits above it clear.  */
			 || (INTVAL (operands[3]) + INTVAL (operands[4])
			     >= 32)
			 /* We can't widen also if val is not a REG.  */
			 || (INTVAL (operands[3]) + INTVAL (operands[4])
			     == GET_MODE_PRECISION (GET_MODE (operands[2]))
			     && !register_operand (operands[2],
						   GET_MODE (operands[2])))
			 /* And we shouldn't widen if
			    TARGET_PARTIAL_REG_STALL.  */
			 || (TARGET_PARTIAL_REG_STALL
			     && (INTVAL (operands[3]) + INTVAL (operands[4])
				 >= (paradoxical_subreg_p (operands[2])
				     && (GET_MODE_CLASS
					  (GET_MODE (SUBREG_REG (operands[2])))
					 == MODE_INT)
				     ? GET_MODE_PRECISION
					 (GET_MODE (SUBREG_REG (operands[2])))
				     : GET_MODE_PRECISION
					 (GET_MODE (operands[2])))))
			 ? CCZmode : CCNOmode)) && 
#line 12254 "../../gcc/config/i386/i386.md"
( 1)))
            return gen_split_273 (insn, operands);
          break;

        case 2:
          if (((
#line 12212 "../../gcc/config/i386/i386.md"
(/* Ensure that resulting mask is zero or sign extended operand.  */
   INTVAL (operands[4]) >= 0
   && ((INTVAL (operands[3]) > 0
	&& INTVAL (operands[3]) + INTVAL (operands[4]) <= 32)
       || (DImode == DImode
	   && INTVAL (operands[3]) > 32
	   && INTVAL (operands[3]) + INTVAL (operands[4]) == 64))
   && ix86_match_ccmode (insn,
			 /* If zero_extract mode precision is the same
			    as len, the SF of the zero_extract
			    comparison will be the most significant
			    extracted bit, but this could be matched
			    after splitting only for pos 0 len all bits
			    trivial extractions.  Require CCZmode.  */
			 (GET_MODE_PRECISION (DImode)
			  == INTVAL (operands[3]))
			 /* Otherwise, require CCZmode if we'd use a mask
			    with the most significant bit set and can't
			    widen it to wider mode.  *testdi_1 also
			    requires CCZmode if the mask has bit
			    31 set and all bits above it clear.  */
			 || (INTVAL (operands[3]) + INTVAL (operands[4])
			     >= 32)
			 /* We can't widen also if val is not a REG.  */
			 || (INTVAL (operands[3]) + INTVAL (operands[4])
			     == GET_MODE_PRECISION (GET_MODE (operands[2]))
			     && !register_operand (operands[2],
						   GET_MODE (operands[2])))
			 /* And we shouldn't widen if
			    TARGET_PARTIAL_REG_STALL.  */
			 || (TARGET_PARTIAL_REG_STALL
			     && (INTVAL (operands[3]) + INTVAL (operands[4])
				 >= (paradoxical_subreg_p (operands[2])
				     && (GET_MODE_CLASS
					  (GET_MODE (SUBREG_REG (operands[2])))
					 == MODE_INT)
				     ? GET_MODE_PRECISION
					 (GET_MODE (SUBREG_REG (operands[2])))
				     : GET_MODE_PRECISION
					 (GET_MODE (operands[2])))))
			 ? CCZmode : CCNOmode)) && 
#line 1164 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 12254 "../../gcc/config/i386/i386.md"
( 1)))
            return gen_split_274 (insn, operands);
          break;

        default:
          break;
        }
      if (XWINT (x11, 0) != 1L)
        return NULL;
      x12 = XEXP (x3, 2);
      if (GET_CODE (x12) != SUBREG
          || maybe_ne (SUBREG_BYTE (x12), 0)
          || GET_MODE (x12) != E_QImode)
        return NULL;
      x13 = XEXP (x12, 0);
      if (GET_CODE (x13) != AND
          || pattern282 (x1) != 0)
        return NULL;
      switch (pattern1454 (x3))
        {
        case 0:
          if (!(
#line 19166 "../../gcc/config/i386/i386.md"
(TARGET_USE_BT
   && (INTVAL (operands[2]) & (GET_MODE_BITSIZE (SImode)-1))
      == GET_MODE_BITSIZE (SImode)-1
   && ix86_pre_reload_split ()) && 
#line 19171 "../../gcc/config/i386/i386.md"
( 1)))
            return NULL;
          return gen_split_814 (insn, operands);

        case 1:
          if (!(
#line 19166 "../../gcc/config/i386/i386.md"
(TARGET_USE_BT
   && (INTVAL (operands[2]) & (GET_MODE_BITSIZE (SImode)-1))
      == GET_MODE_BITSIZE (SImode)-1
   && ix86_pre_reload_split ()) && 
#line 19171 "../../gcc/config/i386/i386.md"
( 1)))
            return NULL;
          return gen_split_816 (insn, operands);

        case 2:
          if (!((
#line 19166 "../../gcc/config/i386/i386.md"
(TARGET_USE_BT
   && (INTVAL (operands[2]) & (GET_MODE_BITSIZE (SImode)-1))
      == GET_MODE_BITSIZE (SImode)-1
   && ix86_pre_reload_split ()) && 
#line 1164 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 19171 "../../gcc/config/i386/i386.md"
( 1)))
            return NULL;
          return gen_split_818 (insn, operands);

        case 3:
          if (!((
#line 19166 "../../gcc/config/i386/i386.md"
(TARGET_USE_BT
   && (INTVAL (operands[2]) & (GET_MODE_BITSIZE (DImode)-1))
      == GET_MODE_BITSIZE (DImode)-1
   && ix86_pre_reload_split ()) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 19171 "../../gcc/config/i386/i386.md"
( 1)))
            return NULL;
          return gen_split_815 (insn, operands);

        case 4:
          if (!((
#line 19166 "../../gcc/config/i386/i386.md"
(TARGET_USE_BT
   && (INTVAL (operands[2]) & (GET_MODE_BITSIZE (DImode)-1))
      == GET_MODE_BITSIZE (DImode)-1
   && ix86_pre_reload_split ()) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 19171 "../../gcc/config/i386/i386.md"
( 1)))
            return NULL;
          return gen_split_817 (insn, operands);

        case 5:
          if (!((
#line 19166 "../../gcc/config/i386/i386.md"
(TARGET_USE_BT
   && (INTVAL (operands[2]) & (GET_MODE_BITSIZE (DImode)-1))
      == GET_MODE_BITSIZE (DImode)-1
   && ix86_pre_reload_split ()) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 19171 "../../gcc/config/i386/i386.md"
( 1)))
            return NULL;
          return gen_split_819 (insn, operands);

        default:
          return NULL;
        }

    default:
      return NULL;
    }
}

 rtx_insn *
split_14 (rtx x1 ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8;
  rtx_insn *res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x2) != CLOBBER)
    return NULL;
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) != REG
      || REGNO (x3) != 17
      || GET_MODE (x3) != E_CCmode)
    return NULL;
  x4 = XVECEXP (x1, 0, 0);
  x5 = XEXP (x4, 1);
  x6 = XEXP (x5, 0);
  operands[1] = x6;
  switch (GET_CODE (x5))
    {
    case SIGN_EXTRACT:
      x7 = XEXP (x5, 2);
      if (x7 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
        return NULL;
      x8 = XEXP (x4, 0);
      operands[0] = x8;
      switch (pattern1492 (x5))
        {
        case 0:
          return gen_split_20 (insn, operands);

        case 1:
          if (!
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT))
            return NULL;
          return gen_split_21 (insn, operands);

        default:
          return NULL;
        }

    case ZERO_EXTRACT:
      x8 = XEXP (x4, 0);
      if (GET_CODE (x8) == SUBREG)
        {
          switch (pattern1317 (x4))
            {
            case 0:
              if ((
#line 19324 "../../gcc/config/i386/i386.md"
(TARGET_USE_BT && ix86_pre_reload_split ()) && 
#line 19326 "../../gcc/config/i386/i386.md"
( 1)))
                return gen_split_836 (insn, operands);
              break;

            case 1:
              if (((
#line 19324 "../../gcc/config/i386/i386.md"
(TARGET_USE_BT && ix86_pre_reload_split ()) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 19326 "../../gcc/config/i386/i386.md"
( 1)))
                return gen_split_837 (insn, operands);
              break;

            default:
              break;
            }
        }
      x7 = XEXP (x5, 2);
      if (GET_CODE (x7) != SUBREG)
        return NULL;
      switch (pattern1319 (x4))
        {
        case 0:
          if (!(
#line 19405 "../../gcc/config/i386/i386.md"
(TARGET_USE_BT
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (SImode)-1))
      == GET_MODE_BITSIZE (SImode)-1
   && ix86_pre_reload_split ()) && 
#line 19410 "../../gcc/config/i386/i386.md"
( 1)))
            return NULL;
          return gen_split_844 (insn, operands);

        case 1:
          if (!((
#line 19405 "../../gcc/config/i386/i386.md"
(TARGET_USE_BT
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (DImode)-1))
      == GET_MODE_BITSIZE (DImode)-1
   && ix86_pre_reload_split ()) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 19410 "../../gcc/config/i386/i386.md"
( 1)))
            return NULL;
          return gen_split_845 (insn, operands);

        default:
          return NULL;
        }

    default:
      return NULL;
    }
}

 rtx_insn *
split_18 (rtx x1 ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10;
  rtx_insn *res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  x4 = XEXP (x3, 0);
  x5 = XEXP (x4, 0);
  switch (GET_CODE (x5))
    {
    case REG:
    case SUBREG:
      operands[1] = x5;
      if (!register_operand (operands[1], E_SImode))
        return NULL;
      x6 = XEXP (x2, 0);
      operands[0] = x6;
      if (!register_operand (operands[0], E_DImode)
          || GET_MODE (x3) != E_DImode
          || GET_MODE (x4) != E_DImode)
        return NULL;
      x7 = XEXP (x3, 1);
      operands[2] = x7;
      if (!x86_64_zext_immediate_operand (operands[2], E_DImode)
          || !
#line 12598 "../../gcc/config/i386/i386.md"
(TARGET_64BIT))
        return NULL;
      return gen_split_286 (insn, operands);

    case SIGN_EXTRACT:
    case ZERO_EXTRACT:
      operands[3] = x5;
      x8 = XEXP (x5, 1);
      if (x8 != const_int_rtx[MAX_SAVED_CONST_INT + 8])
        return NULL;
      x9 = XEXP (x5, 2);
      if (x9 != const_int_rtx[MAX_SAVED_CONST_INT + 8]
          || GET_MODE (x3) != E_QImode
          || GET_MODE (x4) != E_QImode)
        return NULL;
      x10 = XEXP (x5, 0);
      if (!int248_register_operand (x10, E_VOIDmode))
        return NULL;
      operands[2] = x10;
      switch (pattern1680 (x2))
        {
        case 0:
          if ((
#line 12768 "../../gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)) && 
#line 12772 "../../gcc/config/i386/i386.md"
( reload_completed
   && !rtx_equal_p (operands[0], operands[1]))))
            return gen_split_293 (insn, operands);
          break;

        case 1:
          if ((
#line 12768 "../../gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)) && 
#line 12772 "../../gcc/config/i386/i386.md"
( reload_completed
   && !rtx_equal_p (operands[0], operands[1]))))
            return gen_split_296 (insn, operands);
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
            return gen_split_299 (insn, operands);
          break;

        default:
          break;
        }
      operands[1] = x10;
      switch (pattern1681 (x2))
        {
        case 0:
          if (!(
#line 12801 "../../gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)) && 
#line 12803 "../../gcc/config/i386/i386.md"
( reload_completed)))
            return NULL;
          return gen_split_302 (insn, operands);

        case 1:
          if (!(
#line 12801 "../../gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)) && 
#line 12803 "../../gcc/config/i386/i386.md"
( reload_completed)))
            return NULL;
          return gen_split_305 (insn, operands);

        case 2:
          if (!((
#line 12801 "../../gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)) && 
#line 1164 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 12803 "../../gcc/config/i386/i386.md"
( reload_completed)))
            return NULL;
          return gen_split_308 (insn, operands);

        case 3:
          if (!
#line 13044 "../../gcc/config/i386/i386.md"
( reload_completed))
            return NULL;
          return gen_split_322 (insn, operands);

        case 4:
          if (!
#line 13044 "../../gcc/config/i386/i386.md"
( reload_completed))
            return NULL;
          return gen_split_325 (insn, operands);

        case 5:
          if (!(
#line 1164 "../../gcc/config/i386/i386.md"
(TARGET_64BIT) && 
#line 13044 "../../gcc/config/i386/i386.md"
( reload_completed)))
            return NULL;
          return gen_split_328 (insn, operands);

        default:
          return NULL;
        }

    case ROTATE:
      if (GET_MODE (x5) != E_SImode)
        return NULL;
      x10 = XEXP (x5, 0);
      if (x10 != const_int_rtx[MAX_SAVED_CONST_INT + -2])
        return NULL;
      switch (pattern1433 (x2))
        {
        case 0:
          if (!(
#line 18942 "../../gcc/config/i386/i386.md"
(TARGET_USE_BT && ix86_pre_reload_split ()) && 
#line 18944 "../../gcc/config/i386/i386.md"
( 1)))
            return NULL;
          return gen_split_808 (insn, operands);

        case 1:
          if (!(
#line 18942 "../../gcc/config/i386/i386.md"
(TARGET_USE_BT && ix86_pre_reload_split ()) && 
#line 18944 "../../gcc/config/i386/i386.md"
( 1)))
            return NULL;
          return gen_split_809 (insn, operands);

        default:
          return NULL;
        }

    default:
      return NULL;
    }
}

 rtx_insn *
split_25 (rtx x1 ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
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
    case REG:
    case SUBREG:
    case MEM:
      operands[1] = x5;
      res = split_15 (x1, insn);
      if (res != NULL_RTX)
        return res;
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
#line 6995 "../../gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)) && 
#line 6999 "../../gcc/config/i386/i386.md"
( reload_completed
   && !rtx_equal_p (operands[0], operands[1]))))
            return gen_split_116 (insn, operands);
          break;

        case 1:
          if ((
#line 6995 "../../gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)) && 
#line 6999 "../../gcc/config/i386/i386.md"
( reload_completed
   && !rtx_equal_p (operands[0], operands[1]))))
            return gen_split_117 (insn, operands);
          break;

        case 2:
          if (((
#line 6995 "../../gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)) && 
#line 1164 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 6999 "../../gcc/config/i386/i386.md"
( reload_completed
   && !rtx_equal_p (operands[0], operands[1]))))
            return gen_split_118 (insn, operands);
          break;

        default:
          break;
        }
      operands[1] = x7;
      switch (pattern1681 (x3))
        {
        case 0:
          if (!(
#line 7028 "../../gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)) && 
#line 7030 "../../gcc/config/i386/i386.md"
( reload_completed)))
            return NULL;
          return gen_split_119 (insn, operands);

        case 1:
          if (!(
#line 7028 "../../gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)) && 
#line 7030 "../../gcc/config/i386/i386.md"
( reload_completed)))
            return NULL;
          return gen_split_120 (insn, operands);

        case 2:
          if (!((
#line 7028 "../../gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)) && 
#line 1164 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 7030 "../../gcc/config/i386/i386.md"
( reload_completed)))
            return NULL;
          return gen_split_121 (insn, operands);

        case 3:
          if (!
#line 7483 "../../gcc/config/i386/i386.md"
( reload_completed))
            return NULL;
          return gen_split_134 (insn, operands);

        case 4:
          if (!
#line 7483 "../../gcc/config/i386/i386.md"
( reload_completed))
            return NULL;
          return gen_split_135 (insn, operands);

        case 5:
          if (!(
#line 1164 "../../gcc/config/i386/i386.md"
(TARGET_64BIT) && 
#line 7483 "../../gcc/config/i386/i386.md"
( reload_completed)))
            return NULL;
          return gen_split_136 (insn, operands);

        default:
          return NULL;
        }

    case ZERO_EXTEND:
      switch (pattern940 (x3))
        {
        case 0:
          if (!((
#line 6511 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (UNKNOWN, DImode, operands, TARGET_APX_NDD)) && 
#line 1235 "../../gcc/config/i386/i386.md"
(!TARGET_64BIT)) && 
#line 6513 "../../gcc/config/i386/i386.md"
( reload_completed)))
            return NULL;
          return gen_split_100 (insn, operands);

        case 1:
          if (!((
#line 6511 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (UNKNOWN, TImode, operands, TARGET_APX_NDD)) && 
#line 1236 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 6513 "../../gcc/config/i386/i386.md"
( reload_completed)))
            return NULL;
          return gen_split_101 (insn, operands);

        default:
          return NULL;
        }

    case PLUS:
      x8 = XEXP (x3, 0);
      operands[0] = x8;
      x6 = XEXP (x5, 0);
      switch (GET_CODE (x6))
        {
        case ASHIFT:
          switch (pattern1155 (x4))
            {
            case 0:
              if (!((
#line 6542 "../../gcc/config/i386/i386.md"
(INTVAL (operands[3]) == 4 * BITS_PER_UNIT) && 
#line 1235 "../../gcc/config/i386/i386.md"
(!TARGET_64BIT)) && 
#line 6544 "../../gcc/config/i386/i386.md"
( reload_completed)))
                return NULL;
              return gen_split_102 (insn, operands);

            case 1:
              if (!((
#line 6542 "../../gcc/config/i386/i386.md"
(INTVAL (operands[3]) == 8 * BITS_PER_UNIT) && 
#line 1236 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 6544 "../../gcc/config/i386/i386.md"
( reload_completed)))
                return NULL;
              return gen_split_105 (insn, operands);

            case 2:
              if (!((
#line 6573 "../../gcc/config/i386/i386.md"
(INTVAL (operands[3]) == 4 * BITS_PER_UNIT) && 
#line 1235 "../../gcc/config/i386/i386.md"
(!TARGET_64BIT)) && 
#line 6575 "../../gcc/config/i386/i386.md"
( reload_completed)))
                return NULL;
              return gen_split_108 (insn, operands);

            case 3:
              if (!((
#line 6573 "../../gcc/config/i386/i386.md"
(INTVAL (operands[3]) == 8 * BITS_PER_UNIT) && 
#line 1236 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 6575 "../../gcc/config/i386/i386.md"
( reload_completed)))
                return NULL;
              return gen_split_111 (insn, operands);

            default:
              return NULL;
            }

        case EQ:
          switch (pattern1158 (x4))
            {
            case 0:
              if (!(
#line 10136 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (PLUS, QImode, operands, TARGET_APX_NDD)
   && ix86_pre_reload_split ()) && 
#line 10139 "../../gcc/config/i386/i386.md"
( 1)))
                return NULL;
              return gen_split_202 (insn, operands);

            case 1:
              if (!(
#line 10136 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (PLUS, HImode, operands, TARGET_APX_NDD)
   && ix86_pre_reload_split ()) && 
#line 10139 "../../gcc/config/i386/i386.md"
( 1)))
                return NULL;
              return gen_split_203 (insn, operands);

            case 2:
              if (!(
#line 10136 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (PLUS, SImode, operands, TARGET_APX_NDD)
   && ix86_pre_reload_split ()) && 
#line 10139 "../../gcc/config/i386/i386.md"
( 1)))
                return NULL;
              return gen_split_204 (insn, operands);

            case 3:
              if (!((
#line 10136 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (PLUS, DImode, operands, TARGET_APX_NDD)
   && ix86_pre_reload_split ()) && 
#line 1161 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 10139 "../../gcc/config/i386/i386.md"
( 1)))
                return NULL;
              return gen_split_205 (insn, operands);

            default:
              return NULL;
            }

        case NE:
          switch (pattern1161 (x4))
            {
            case 0:
              if (!(
#line 10157 "../../gcc/config/i386/i386.md"
(CONST_INT_P (operands[2])
   && (QImode != DImode
       || INTVAL (operands[2]) != HOST_WIDE_INT_C (-0x80000000))
   && ix86_binary_operator_ok (PLUS, QImode, operands, TARGET_APX_NDD)
   && ix86_pre_reload_split ()) && 
#line 10163 "../../gcc/config/i386/i386.md"
( 1)))
                return NULL;
              return gen_split_206 (insn, operands);

            case 1:
              if (!(
#line 10157 "../../gcc/config/i386/i386.md"
(CONST_INT_P (operands[2])
   && (HImode != DImode
       || INTVAL (operands[2]) != HOST_WIDE_INT_C (-0x80000000))
   && ix86_binary_operator_ok (PLUS, HImode, operands, TARGET_APX_NDD)
   && ix86_pre_reload_split ()) && 
#line 10163 "../../gcc/config/i386/i386.md"
( 1)))
                return NULL;
              return gen_split_207 (insn, operands);

            case 2:
              if (!(
#line 10157 "../../gcc/config/i386/i386.md"
(CONST_INT_P (operands[2])
   && (SImode != DImode
       || INTVAL (operands[2]) != HOST_WIDE_INT_C (-0x80000000))
   && ix86_binary_operator_ok (PLUS, SImode, operands, TARGET_APX_NDD)
   && ix86_pre_reload_split ()) && 
#line 10163 "../../gcc/config/i386/i386.md"
( 1)))
                return NULL;
              return gen_split_208 (insn, operands);

            case 3:
              if (!((
#line 10157 "../../gcc/config/i386/i386.md"
(CONST_INT_P (operands[2])
   && (DImode != DImode
       || INTVAL (operands[2]) != HOST_WIDE_INT_C (-0x80000000))
   && ix86_binary_operator_ok (PLUS, DImode, operands, TARGET_APX_NDD)
   && ix86_pre_reload_split ()) && 
#line 1161 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 10163 "../../gcc/config/i386/i386.md"
( 1)))
                return NULL;
              return gen_split_209 (insn, operands);

            default:
              return NULL;
            }

        default:
          return NULL;
        }

    case IOR:
      switch (pattern1057 (x3))
        {
        case 0:
          if (!((
#line 6542 "../../gcc/config/i386/i386.md"
(INTVAL (operands[3]) == 4 * BITS_PER_UNIT) && 
#line 1235 "../../gcc/config/i386/i386.md"
(!TARGET_64BIT)) && 
#line 6544 "../../gcc/config/i386/i386.md"
( reload_completed)))
            return NULL;
          return gen_split_103 (insn, operands);

        case 1:
          if (!((
#line 6542 "../../gcc/config/i386/i386.md"
(INTVAL (operands[3]) == 8 * BITS_PER_UNIT) && 
#line 1236 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 6544 "../../gcc/config/i386/i386.md"
( reload_completed)))
            return NULL;
          return gen_split_106 (insn, operands);

        case 2:
          if (!((
#line 6573 "../../gcc/config/i386/i386.md"
(INTVAL (operands[3]) == 4 * BITS_PER_UNIT) && 
#line 1235 "../../gcc/config/i386/i386.md"
(!TARGET_64BIT)) && 
#line 6575 "../../gcc/config/i386/i386.md"
( reload_completed)))
            return NULL;
          return gen_split_109 (insn, operands);

        case 3:
          if (!((
#line 6573 "../../gcc/config/i386/i386.md"
(INTVAL (operands[3]) == 8 * BITS_PER_UNIT) && 
#line 1236 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 6575 "../../gcc/config/i386/i386.md"
( reload_completed)))
            return NULL;
          return gen_split_112 (insn, operands);

        default:
          return NULL;
        }

    case XOR:
      switch (pattern1057 (x3))
        {
        case 0:
          if (!((
#line 6542 "../../gcc/config/i386/i386.md"
(INTVAL (operands[3]) == 4 * BITS_PER_UNIT) && 
#line 1235 "../../gcc/config/i386/i386.md"
(!TARGET_64BIT)) && 
#line 6544 "../../gcc/config/i386/i386.md"
( reload_completed)))
            return NULL;
          return gen_split_104 (insn, operands);

        case 1:
          if (!((
#line 6542 "../../gcc/config/i386/i386.md"
(INTVAL (operands[3]) == 8 * BITS_PER_UNIT) && 
#line 1236 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 6544 "../../gcc/config/i386/i386.md"
( reload_completed)))
            return NULL;
          return gen_split_107 (insn, operands);

        case 2:
          if (!((
#line 6573 "../../gcc/config/i386/i386.md"
(INTVAL (operands[3]) == 4 * BITS_PER_UNIT) && 
#line 1235 "../../gcc/config/i386/i386.md"
(!TARGET_64BIT)) && 
#line 6575 "../../gcc/config/i386/i386.md"
( reload_completed)))
            return NULL;
          return gen_split_110 (insn, operands);

        case 3:
          if (!((
#line 6573 "../../gcc/config/i386/i386.md"
(INTVAL (operands[3]) == 8 * BITS_PER_UNIT) && 
#line 1236 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 6575 "../../gcc/config/i386/i386.md"
( reload_completed)))
            return NULL;
          return gen_split_113 (insn, operands);

        default:
          return NULL;
        }

    case EQ:
      x9 = XEXP (x5, 1);
      if (x9 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
        return NULL;
      switch (pattern359 (x3))
        {
        case 0:
          if (!(
#line 10183 "../../gcc/config/i386/i386.md"
(ix86_unary_operator_ok (PLUS, QImode, operands)
   && ix86_pre_reload_split ()) && 
#line 10186 "../../gcc/config/i386/i386.md"
( 1)))
            return NULL;
          return gen_split_210 (insn, operands);

        case 1:
          if (!(
#line 10183 "../../gcc/config/i386/i386.md"
(ix86_unary_operator_ok (PLUS, HImode, operands)
   && ix86_pre_reload_split ()) && 
#line 10186 "../../gcc/config/i386/i386.md"
( 1)))
            return NULL;
          return gen_split_211 (insn, operands);

        case 2:
          if (!(
#line 10183 "../../gcc/config/i386/i386.md"
(ix86_unary_operator_ok (PLUS, SImode, operands)
   && ix86_pre_reload_split ()) && 
#line 10186 "../../gcc/config/i386/i386.md"
( 1)))
            return NULL;
          return gen_split_212 (insn, operands);

        case 3:
          if (!((
#line 10183 "../../gcc/config/i386/i386.md"
(ix86_unary_operator_ok (PLUS, DImode, operands)
   && ix86_pre_reload_split ()) && 
#line 1161 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 10186 "../../gcc/config/i386/i386.md"
( 1)))
            return NULL;
          return gen_split_213 (insn, operands);

        default:
          return NULL;
        }

    case NE:
      x9 = XEXP (x5, 1);
      if (x9 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
        return NULL;
      switch (pattern359 (x3))
        {
        case 0:
          if (!(
#line 10204 "../../gcc/config/i386/i386.md"
(ix86_unary_operator_ok (PLUS, QImode, operands)
   && ix86_pre_reload_split ()) && 
#line 10207 "../../gcc/config/i386/i386.md"
( 1)))
            return NULL;
          return gen_split_214 (insn, operands);

        case 1:
          if (!(
#line 10204 "../../gcc/config/i386/i386.md"
(ix86_unary_operator_ok (PLUS, HImode, operands)
   && ix86_pre_reload_split ()) && 
#line 10207 "../../gcc/config/i386/i386.md"
( 1)))
            return NULL;
          return gen_split_215 (insn, operands);

        case 2:
          if (!(
#line 10204 "../../gcc/config/i386/i386.md"
(ix86_unary_operator_ok (PLUS, SImode, operands)
   && ix86_pre_reload_split ()) && 
#line 10207 "../../gcc/config/i386/i386.md"
( 1)))
            return NULL;
          return gen_split_216 (insn, operands);

        case 3:
          if (!((
#line 10204 "../../gcc/config/i386/i386.md"
(ix86_unary_operator_ok (PLUS, DImode, operands)
   && ix86_pre_reload_split ()) && 
#line 1161 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 10207 "../../gcc/config/i386/i386.md"
( 1)))
            return NULL;
          return gen_split_217 (insn, operands);

        default:
          return NULL;
        }

    case MINUS:
      switch (pattern944 (x3))
        {
        case 0:
          if (!(
#line 10252 "../../gcc/config/i386/i386.md"
(CONST_INT_P (operands[2])
   && (QImode != DImode
       || INTVAL (operands[2]) != HOST_WIDE_INT_C (-0x80000000))
   && ix86_binary_operator_ok (MINUS, QImode, operands, TARGET_APX_NDD)
   && ix86_pre_reload_split ()) && 
#line 10258 "../../gcc/config/i386/i386.md"
( 1)))
            return NULL;
          return gen_split_222 (insn, operands);

        case 1:
          if (!(
#line 10252 "../../gcc/config/i386/i386.md"
(CONST_INT_P (operands[2])
   && (HImode != DImode
       || INTVAL (operands[2]) != HOST_WIDE_INT_C (-0x80000000))
   && ix86_binary_operator_ok (MINUS, HImode, operands, TARGET_APX_NDD)
   && ix86_pre_reload_split ()) && 
#line 10258 "../../gcc/config/i386/i386.md"
( 1)))
            return NULL;
          return gen_split_223 (insn, operands);

        case 2:
          if (!(
#line 10252 "../../gcc/config/i386/i386.md"
(CONST_INT_P (operands[2])
   && (SImode != DImode
       || INTVAL (operands[2]) != HOST_WIDE_INT_C (-0x80000000))
   && ix86_binary_operator_ok (MINUS, SImode, operands, TARGET_APX_NDD)
   && ix86_pre_reload_split ()) && 
#line 10258 "../../gcc/config/i386/i386.md"
( 1)))
            return NULL;
          return gen_split_224 (insn, operands);

        case 3:
          if (!((
#line 10252 "../../gcc/config/i386/i386.md"
(CONST_INT_P (operands[2])
   && (DImode != DImode
       || INTVAL (operands[2]) != HOST_WIDE_INT_C (-0x80000000))
   && ix86_binary_operator_ok (MINUS, DImode, operands, TARGET_APX_NDD)
   && ix86_pre_reload_split ()) && 
#line 1161 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 10258 "../../gcc/config/i386/i386.md"
( 1)))
            return NULL;
          return gen_split_225 (insn, operands);

        case 4:
          if (!(
#line 10281 "../../gcc/config/i386/i386.md"
(CONST_INT_P (operands[2])
   && (QImode != DImode
       || INTVAL (operands[2]) != HOST_WIDE_INT_C (-0x80000000))
   && ix86_binary_operator_ok (MINUS, QImode, operands, TARGET_APX_NDD)
   && ix86_pre_reload_split ()) && 
#line 10287 "../../gcc/config/i386/i386.md"
( 1)))
            return NULL;
          return gen_split_226 (insn, operands);

        case 5:
          if (!(
#line 10281 "../../gcc/config/i386/i386.md"
(CONST_INT_P (operands[2])
   && (HImode != DImode
       || INTVAL (operands[2]) != HOST_WIDE_INT_C (-0x80000000))
   && ix86_binary_operator_ok (MINUS, HImode, operands, TARGET_APX_NDD)
   && ix86_pre_reload_split ()) && 
#line 10287 "../../gcc/config/i386/i386.md"
( 1)))
            return NULL;
          return gen_split_227 (insn, operands);

        case 6:
          if (!(
#line 10281 "../../gcc/config/i386/i386.md"
(CONST_INT_P (operands[2])
   && (SImode != DImode
       || INTVAL (operands[2]) != HOST_WIDE_INT_C (-0x80000000))
   && ix86_binary_operator_ok (MINUS, SImode, operands, TARGET_APX_NDD)
   && ix86_pre_reload_split ()) && 
#line 10287 "../../gcc/config/i386/i386.md"
( 1)))
            return NULL;
          return gen_split_228 (insn, operands);

        case 7:
          if (!((
#line 10281 "../../gcc/config/i386/i386.md"
(CONST_INT_P (operands[2])
   && (DImode != DImode
       || INTVAL (operands[2]) != HOST_WIDE_INT_C (-0x80000000))
   && ix86_binary_operator_ok (MINUS, DImode, operands, TARGET_APX_NDD)
   && ix86_pre_reload_split ()) && 
#line 1161 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 10287 "../../gcc/config/i386/i386.md"
( 1)))
            return NULL;
          return gen_split_229 (insn, operands);

        default:
          return NULL;
        }

    case UNSPEC:
      switch (pattern948 (x3))
        {
        case 0:
          if (!
#line 1408 "../../gcc/config/i386/i386.md"
(ptr_mode == SImode))
            return NULL;
          return gen_split_910 (insn, operands);

        case 1:
          if (!
#line 1408 "../../gcc/config/i386/i386.md"
(ptr_mode == DImode))
            return NULL;
          return gen_split_911 (insn, operands);

        case 2:
          if (!(
#line 23165 "../../gcc/config/i386/i386.md"
(!TARGET_64BIT && TARGET_GNU2_TLS) && 
#line 23167 "../../gcc/config/i386/i386.md"
( 1)))
            return NULL;
          return gen_split_913 (insn, operands);

        case 3:
          if (!((
#line 23224 "../../gcc/config/i386/i386.md"
(TARGET_64BIT && TARGET_GNU2_TLS) && 
#line 1408 "../../gcc/config/i386/i386.md"
(ptr_mode == SImode)) && 
#line 23226 "../../gcc/config/i386/i386.md"
( 1)))
            return NULL;
          return gen_split_914 (insn, operands);

        case 4:
          if (!((
#line 23224 "../../gcc/config/i386/i386.md"
(TARGET_64BIT && TARGET_GNU2_TLS) && 
#line 1408 "../../gcc/config/i386/i386.md"
(ptr_mode == DImode)) && 
#line 23226 "../../gcc/config/i386/i386.md"
( 1)))
            return NULL;
          return gen_split_915 (insn, operands);

        default:
          return NULL;
        }

    default:
      return NULL;
    }
}

 rtx_insn *
split_37 (rtx x1 ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8;
  rtx_insn *res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 0);
  operands[0] = x3;
  x4 = XEXP (x2, 1);
  x5 = XEXP (x4, 0);
  switch (GET_CODE (x5))
    {
    case LSHIFTRT:
      if (GET_MODE (x5) != E_SImode)
        return NULL;
      x6 = XVECEXP (x1, 0, 1);
      if (pattern227 (x6, 
E_CCmode, 
17) != 0
          || !mask_reg_operand (operands[0], E_DImode)
          || GET_MODE (x4) != E_DImode)
        return NULL;
      x7 = XEXP (x5, 0);
      operands[1] = x7;
      if (!mask_reg_operand (operands[1], E_SImode))
        return NULL;
      x8 = XEXP (x5, 1);
      operands[2] = x8;
      if (!const_0_to_31_operand (operands[2], E_VOIDmode)
          || !
#line 2320 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && reload_completed))
        return NULL;
      return gen_split_1222 (insn, operands);

    case UNSPEC:
      if (pattern350 (x1) != 0)
        return NULL;
      switch (pattern1042 (x1))
        {
        case 0:
          if (!((
#line 4436 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (HImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V16SImode)
       < GET_MODE_PRECISION (HImode))
   && ix86_pre_reload_split ()) && 
#line 308 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)) && 
#line 4442 "../../gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1334 (insn, operands);

        case 1:
          if (!((
#line 4436 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (HImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V16HFmode)
       < GET_MODE_PRECISION (HImode))
   && ix86_pre_reload_split ()) && 
#line 311 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL)) && 
#line 4442 "../../gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1355 (insn, operands);

        case 2:
          if (!((
#line 4436 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (HImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V16SFmode)
       < GET_MODE_PRECISION (HImode))
   && ix86_pre_reload_split ()) && 
#line 313 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)) && 
#line 4442 "../../gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1361 (insn, operands);

        case 3:
          if (!((
#line 4525 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW
  && (GET_MODE_NUNITS (V16QImode)
      < GET_MODE_PRECISION (HImode))
  && ix86_pre_reload_split ()) && 
#line 318 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 4530 "../../gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1397 (insn, operands);

        case 4:
          if (!((
#line 4525 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW
  && (GET_MODE_NUNITS (V16HImode)
      < GET_MODE_PRECISION (HImode))
  && ix86_pre_reload_split ()) && 
#line 319 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 4530 "../../gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1406 (insn, operands);

        case 5:
          if (!((
#line 4436 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (HImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V8SImode)
       < GET_MODE_PRECISION (HImode))
   && ix86_pre_reload_split ()) && 
#line 308 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 4442 "../../gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1337 (insn, operands);

        case 6:
          if (!((
#line 4436 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (HImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V4SImode)
       < GET_MODE_PRECISION (HImode))
   && ix86_pre_reload_split ()) && 
#line 308 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 4442 "../../gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1340 (insn, operands);

        case 7:
          if (!((
#line 4436 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (HImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V8DImode)
       < GET_MODE_PRECISION (HImode))
   && ix86_pre_reload_split ()) && 
#line 309 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)) && 
#line 4442 "../../gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1343 (insn, operands);

        case 8:
          if (!((
#line 4436 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (HImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V4DImode)
       < GET_MODE_PRECISION (HImode))
   && ix86_pre_reload_split ()) && 
#line 309 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 4442 "../../gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1346 (insn, operands);

        case 9:
          if (!((
#line 4436 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (HImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V2DImode)
       < GET_MODE_PRECISION (HImode))
   && ix86_pre_reload_split ()) && 
#line 309 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 4442 "../../gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1349 (insn, operands);

        case 10:
          if (!((
#line 4436 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (HImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V8HFmode)
       < GET_MODE_PRECISION (HImode))
   && ix86_pre_reload_split ()) && 
#line 312 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL)) && 
#line 4442 "../../gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1358 (insn, operands);

        case 11:
          if (!((
#line 4436 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (HImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V8SFmode)
       < GET_MODE_PRECISION (HImode))
   && ix86_pre_reload_split ()) && 
#line 313 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 4442 "../../gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1364 (insn, operands);

        case 12:
          if (!((
#line 4436 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (HImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V4SFmode)
       < GET_MODE_PRECISION (HImode))
   && ix86_pre_reload_split ()) && 
#line 313 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 4442 "../../gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1367 (insn, operands);

        case 13:
          if (!((
#line 4436 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (HImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V8DFmode)
       < GET_MODE_PRECISION (HImode))
   && ix86_pre_reload_split ()) && 
#line 314 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)) && 
#line 4442 "../../gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1370 (insn, operands);

        case 14:
          if (!((
#line 4436 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (HImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V4DFmode)
       < GET_MODE_PRECISION (HImode))
   && ix86_pre_reload_split ()) && 
#line 314 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 4442 "../../gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1373 (insn, operands);

        case 15:
          if (!((
#line 4436 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (HImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V2DFmode)
       < GET_MODE_PRECISION (HImode))
   && ix86_pre_reload_split ()) && 
#line 314 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 4442 "../../gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1376 (insn, operands);

        case 16:
          if (!((
#line 4525 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW
  && (GET_MODE_NUNITS (V8HImode)
      < GET_MODE_PRECISION (HImode))
  && ix86_pre_reload_split ()) && 
#line 319 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 4530 "../../gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1409 (insn, operands);

        case 17:
          if (!((
#line 4436 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (HImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V32HFmode)
       < GET_MODE_PRECISION (HImode))
   && ix86_pre_reload_split ()) && 
#line 310 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_EVEX512)) && 
#line 4442 "../../gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1352 (insn, operands);

        case 18:
          if (!((
#line 4525 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW
  && (GET_MODE_NUNITS (V32QImode)
      < GET_MODE_PRECISION (HImode))
  && ix86_pre_reload_split ()) && 
#line 318 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 4530 "../../gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1400 (insn, operands);

        case 19:
          if (!((
#line 4525 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW
  && (GET_MODE_NUNITS (V32HImode)
      < GET_MODE_PRECISION (HImode))
  && ix86_pre_reload_split ()) && 
#line 319 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)) && 
#line 4530 "../../gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1403 (insn, operands);

        case 20:
          if (!((
#line 4525 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW
  && (GET_MODE_NUNITS (V64QImode)
      < GET_MODE_PRECISION (HImode))
  && ix86_pre_reload_split ()) && 
#line 318 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)) && 
#line 4530 "../../gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1394 (insn, operands);

        case 21:
          if (!((
#line 4436 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (SImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V16SImode)
       < GET_MODE_PRECISION (SImode))
   && ix86_pre_reload_split ()) && 
#line 308 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)) && 
#line 4442 "../../gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1335 (insn, operands);

        case 22:
          if (!((
#line 4436 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (SImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V16HFmode)
       < GET_MODE_PRECISION (SImode))
   && ix86_pre_reload_split ()) && 
#line 311 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL)) && 
#line 4442 "../../gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1356 (insn, operands);

        case 23:
          if (!((
#line 4436 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (SImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V16SFmode)
       < GET_MODE_PRECISION (SImode))
   && ix86_pre_reload_split ()) && 
#line 313 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)) && 
#line 4442 "../../gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1362 (insn, operands);

        case 24:
          if (!((
#line 4525 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW
  && (GET_MODE_NUNITS (V16QImode)
      < GET_MODE_PRECISION (SImode))
  && ix86_pre_reload_split ()) && 
#line 318 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 4530 "../../gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1398 (insn, operands);

        case 25:
          if (!((
#line 4525 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW
  && (GET_MODE_NUNITS (V16HImode)
      < GET_MODE_PRECISION (SImode))
  && ix86_pre_reload_split ()) && 
#line 319 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 4530 "../../gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1407 (insn, operands);

        case 26:
          if (!((
#line 4436 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (SImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V8SImode)
       < GET_MODE_PRECISION (SImode))
   && ix86_pre_reload_split ()) && 
#line 308 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 4442 "../../gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1338 (insn, operands);

        case 27:
          if (!((
#line 4436 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (SImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V4SImode)
       < GET_MODE_PRECISION (SImode))
   && ix86_pre_reload_split ()) && 
#line 308 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 4442 "../../gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1341 (insn, operands);

        case 28:
          if (!((
#line 4436 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (SImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V8DImode)
       < GET_MODE_PRECISION (SImode))
   && ix86_pre_reload_split ()) && 
#line 309 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)) && 
#line 4442 "../../gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1344 (insn, operands);

        case 29:
          if (!((
#line 4436 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (SImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V4DImode)
       < GET_MODE_PRECISION (SImode))
   && ix86_pre_reload_split ()) && 
#line 309 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 4442 "../../gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1347 (insn, operands);

        case 30:
          if (!((
#line 4436 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (SImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V2DImode)
       < GET_MODE_PRECISION (SImode))
   && ix86_pre_reload_split ()) && 
#line 309 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 4442 "../../gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1350 (insn, operands);

        case 31:
          if (!((
#line 4436 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (SImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V8HFmode)
       < GET_MODE_PRECISION (SImode))
   && ix86_pre_reload_split ()) && 
#line 312 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL)) && 
#line 4442 "../../gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1359 (insn, operands);

        case 32:
          if (!((
#line 4436 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (SImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V8SFmode)
       < GET_MODE_PRECISION (SImode))
   && ix86_pre_reload_split ()) && 
#line 313 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 4442 "../../gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1365 (insn, operands);

        case 33:
          if (!((
#line 4436 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (SImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V4SFmode)
       < GET_MODE_PRECISION (SImode))
   && ix86_pre_reload_split ()) && 
#line 313 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 4442 "../../gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1368 (insn, operands);

        case 34:
          if (!((
#line 4436 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (SImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V8DFmode)
       < GET_MODE_PRECISION (SImode))
   && ix86_pre_reload_split ()) && 
#line 314 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)) && 
#line 4442 "../../gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1371 (insn, operands);

        case 35:
          if (!((
#line 4436 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (SImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V4DFmode)
       < GET_MODE_PRECISION (SImode))
   && ix86_pre_reload_split ()) && 
#line 314 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 4442 "../../gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1374 (insn, operands);

        case 36:
          if (!((
#line 4436 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (SImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V2DFmode)
       < GET_MODE_PRECISION (SImode))
   && ix86_pre_reload_split ()) && 
#line 314 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 4442 "../../gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1377 (insn, operands);

        case 37:
          if (!((
#line 4525 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW
  && (GET_MODE_NUNITS (V8HImode)
      < GET_MODE_PRECISION (SImode))
  && ix86_pre_reload_split ()) && 
#line 319 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 4530 "../../gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1410 (insn, operands);

        case 38:
          if (!((
#line 4436 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (SImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V32HFmode)
       < GET_MODE_PRECISION (SImode))
   && ix86_pre_reload_split ()) && 
#line 310 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_EVEX512)) && 
#line 4442 "../../gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1353 (insn, operands);

        case 39:
          if (!((
#line 4525 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW
  && (GET_MODE_NUNITS (V32QImode)
      < GET_MODE_PRECISION (SImode))
  && ix86_pre_reload_split ()) && 
#line 318 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 4530 "../../gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1401 (insn, operands);

        case 40:
          if (!((
#line 4525 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW
  && (GET_MODE_NUNITS (V32HImode)
      < GET_MODE_PRECISION (SImode))
  && ix86_pre_reload_split ()) && 
#line 319 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)) && 
#line 4530 "../../gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1404 (insn, operands);

        case 41:
          if (!((
#line 4525 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW
  && (GET_MODE_NUNITS (V64QImode)
      < GET_MODE_PRECISION (SImode))
  && ix86_pre_reload_split ()) && 
#line 318 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)) && 
#line 4530 "../../gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1395 (insn, operands);

        case 42:
          if (!((
#line 4436 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (DImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V16SImode)
       < GET_MODE_PRECISION (DImode))
   && ix86_pre_reload_split ()) && 
#line 308 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)) && 
#line 4442 "../../gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1336 (insn, operands);

        case 43:
          if (!((
#line 4436 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (DImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V16HFmode)
       < GET_MODE_PRECISION (DImode))
   && ix86_pre_reload_split ()) && 
#line 311 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL)) && 
#line 4442 "../../gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1357 (insn, operands);

        case 44:
          if (!((
#line 4436 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (DImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V16SFmode)
       < GET_MODE_PRECISION (DImode))
   && ix86_pre_reload_split ()) && 
#line 313 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)) && 
#line 4442 "../../gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1363 (insn, operands);

        case 45:
          if (!((
#line 4525 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW
  && (GET_MODE_NUNITS (V16QImode)
      < GET_MODE_PRECISION (DImode))
  && ix86_pre_reload_split ()) && 
#line 318 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 4530 "../../gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1399 (insn, operands);

        case 46:
          if (!((
#line 4525 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW
  && (GET_MODE_NUNITS (V16HImode)
      < GET_MODE_PRECISION (DImode))
  && ix86_pre_reload_split ()) && 
#line 319 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 4530 "../../gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1408 (insn, operands);

        case 47:
          if (!((
#line 4436 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (DImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V8SImode)
       < GET_MODE_PRECISION (DImode))
   && ix86_pre_reload_split ()) && 
#line 308 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 4442 "../../gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1339 (insn, operands);

        case 48:
          if (!((
#line 4436 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (DImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V4SImode)
       < GET_MODE_PRECISION (DImode))
   && ix86_pre_reload_split ()) && 
#line 308 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 4442 "../../gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1342 (insn, operands);

        case 49:
          if (!((
#line 4436 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (DImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V8DImode)
       < GET_MODE_PRECISION (DImode))
   && ix86_pre_reload_split ()) && 
#line 309 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)) && 
#line 4442 "../../gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1345 (insn, operands);

        case 50:
          if (!((
#line 4436 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (DImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V4DImode)
       < GET_MODE_PRECISION (DImode))
   && ix86_pre_reload_split ()) && 
#line 309 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 4442 "../../gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1348 (insn, operands);

        case 51:
          if (!((
#line 4436 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (DImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V2DImode)
       < GET_MODE_PRECISION (DImode))
   && ix86_pre_reload_split ()) && 
#line 309 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 4442 "../../gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1351 (insn, operands);

        case 52:
          if (!((
#line 4436 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (DImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V8HFmode)
       < GET_MODE_PRECISION (DImode))
   && ix86_pre_reload_split ()) && 
#line 312 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL)) && 
#line 4442 "../../gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1360 (insn, operands);

        case 53:
          if (!((
#line 4436 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (DImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V8SFmode)
       < GET_MODE_PRECISION (DImode))
   && ix86_pre_reload_split ()) && 
#line 313 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 4442 "../../gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1366 (insn, operands);

        case 54:
          if (!((
#line 4436 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (DImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V4SFmode)
       < GET_MODE_PRECISION (DImode))
   && ix86_pre_reload_split ()) && 
#line 313 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 4442 "../../gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1369 (insn, operands);

        case 55:
          if (!((
#line 4436 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (DImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V8DFmode)
       < GET_MODE_PRECISION (DImode))
   && ix86_pre_reload_split ()) && 
#line 314 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)) && 
#line 4442 "../../gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1372 (insn, operands);

        case 56:
          if (!((
#line 4436 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (DImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V4DFmode)
       < GET_MODE_PRECISION (DImode))
   && ix86_pre_reload_split ()) && 
#line 314 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 4442 "../../gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1375 (insn, operands);

        case 57:
          if (!((
#line 4436 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (DImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V2DFmode)
       < GET_MODE_PRECISION (DImode))
   && ix86_pre_reload_split ()) && 
#line 314 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 4442 "../../gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1378 (insn, operands);

        case 58:
          if (!((
#line 4525 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW
  && (GET_MODE_NUNITS (V8HImode)
      < GET_MODE_PRECISION (DImode))
  && ix86_pre_reload_split ()) && 
#line 319 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 4530 "../../gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1411 (insn, operands);

        case 59:
          if (!((
#line 4436 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (DImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V32HFmode)
       < GET_MODE_PRECISION (DImode))
   && ix86_pre_reload_split ()) && 
#line 310 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_EVEX512)) && 
#line 4442 "../../gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1354 (insn, operands);

        case 60:
          if (!((
#line 4525 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW
  && (GET_MODE_NUNITS (V32QImode)
      < GET_MODE_PRECISION (DImode))
  && ix86_pre_reload_split ()) && 
#line 318 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 4530 "../../gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1402 (insn, operands);

        case 61:
          if (!((
#line 4525 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW
  && (GET_MODE_NUNITS (V32HImode)
      < GET_MODE_PRECISION (DImode))
  && ix86_pre_reload_split ()) && 
#line 319 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)) && 
#line 4530 "../../gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1405 (insn, operands);

        case 62:
          if (!((
#line 4525 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW
  && (GET_MODE_NUNITS (V64QImode)
      < GET_MODE_PRECISION (DImode))
  && ix86_pre_reload_split ()) && 
#line 318 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)) && 
#line 4530 "../../gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1396 (insn, operands);

        case 63:
          if (!((
#line 4635 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW
   && ix86_pre_reload_split ()
   && (GET_MODE_NUNITS (V64QImode)
      < GET_MODE_PRECISION (HImode))
   && ix86_pre_reload_split ()) && 
#line 318 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)) && 
#line 4641 "../../gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1424 (insn, operands);

        case 64:
          if (!((
#line 4635 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW
   && ix86_pre_reload_split ()
   && (GET_MODE_NUNITS (V16QImode)
      < GET_MODE_PRECISION (HImode))
   && ix86_pre_reload_split ()) && 
#line 318 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 4641 "../../gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1427 (insn, operands);

        case 65:
          if (!((
#line 4635 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW
   && ix86_pre_reload_split ()
   && (GET_MODE_NUNITS (V16HImode)
      < GET_MODE_PRECISION (HImode))
   && ix86_pre_reload_split ()) && 
#line 319 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 4641 "../../gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1436 (insn, operands);

        case 66:
          if (!((
#line 4725 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (HImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V16SImode)
       < GET_MODE_PRECISION (HImode))
   && ix86_pre_reload_split ()) && 
#line 501 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)) && 
#line 4731 "../../gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1442 (insn, operands);

        case 67:
          if (!((
#line 4635 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW
   && ix86_pre_reload_split ()
   && (GET_MODE_NUNITS (V32QImode)
      < GET_MODE_PRECISION (HImode))
   && ix86_pre_reload_split ()) && 
#line 318 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 4641 "../../gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1430 (insn, operands);

        case 68:
          if (!((
#line 4635 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW
   && ix86_pre_reload_split ()
   && (GET_MODE_NUNITS (V32HImode)
      < GET_MODE_PRECISION (HImode))
   && ix86_pre_reload_split ()) && 
#line 319 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)) && 
#line 4641 "../../gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1433 (insn, operands);

        case 69:
          if (!((
#line 4635 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW
   && ix86_pre_reload_split ()
   && (GET_MODE_NUNITS (V8HImode)
      < GET_MODE_PRECISION (HImode))
   && ix86_pre_reload_split ()) && 
#line 319 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 4641 "../../gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1439 (insn, operands);

        case 70:
          if (!((
#line 4725 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (HImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V8SImode)
       < GET_MODE_PRECISION (HImode))
   && ix86_pre_reload_split ()) && 
#line 501 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 4731 "../../gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1443 (insn, operands);

        case 71:
          if (!((
#line 4725 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (HImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V4SImode)
       < GET_MODE_PRECISION (HImode))
   && ix86_pre_reload_split ()) && 
#line 501 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 4731 "../../gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1444 (insn, operands);

        case 72:
          if (!((
#line 4725 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (HImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V8DImode)
       < GET_MODE_PRECISION (HImode))
   && ix86_pre_reload_split ()) && 
#line 502 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)) && 
#line 4731 "../../gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1445 (insn, operands);

        case 73:
          if (!((
#line 4725 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (HImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V4DImode)
       < GET_MODE_PRECISION (HImode))
   && ix86_pre_reload_split ()) && 
#line 502 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 4731 "../../gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1446 (insn, operands);

        case 74:
          if (!((
#line 4725 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (HImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V2DImode)
       < GET_MODE_PRECISION (HImode))
   && ix86_pre_reload_split ()) && 
#line 502 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 4731 "../../gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1447 (insn, operands);

        case 75:
          if (!((
#line 4635 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW
   && ix86_pre_reload_split ()
   && (GET_MODE_NUNITS (V64QImode)
      < GET_MODE_PRECISION (SImode))
   && ix86_pre_reload_split ()) && 
#line 318 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)) && 
#line 4641 "../../gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1425 (insn, operands);

        case 76:
          if (!((
#line 4635 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW
   && ix86_pre_reload_split ()
   && (GET_MODE_NUNITS (V16QImode)
      < GET_MODE_PRECISION (SImode))
   && ix86_pre_reload_split ()) && 
#line 318 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 4641 "../../gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1428 (insn, operands);

        case 77:
          if (!((
#line 4635 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW
   && ix86_pre_reload_split ()
   && (GET_MODE_NUNITS (V16HImode)
      < GET_MODE_PRECISION (SImode))
   && ix86_pre_reload_split ()) && 
#line 319 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 4641 "../../gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1437 (insn, operands);

        case 78:
          if (!((
#line 4725 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (SImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V16SImode)
       < GET_MODE_PRECISION (SImode))
   && ix86_pre_reload_split ()) && 
#line 501 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)) && 
#line 4731 "../../gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1448 (insn, operands);

        case 79:
          if (!((
#line 4635 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW
   && ix86_pre_reload_split ()
   && (GET_MODE_NUNITS (V32QImode)
      < GET_MODE_PRECISION (SImode))
   && ix86_pre_reload_split ()) && 
#line 318 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 4641 "../../gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1431 (insn, operands);

        case 80:
          if (!((
#line 4635 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW
   && ix86_pre_reload_split ()
   && (GET_MODE_NUNITS (V32HImode)
      < GET_MODE_PRECISION (SImode))
   && ix86_pre_reload_split ()) && 
#line 319 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)) && 
#line 4641 "../../gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1434 (insn, operands);

        case 81:
          if (!((
#line 4635 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW
   && ix86_pre_reload_split ()
   && (GET_MODE_NUNITS (V8HImode)
      < GET_MODE_PRECISION (SImode))
   && ix86_pre_reload_split ()) && 
#line 319 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 4641 "../../gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1440 (insn, operands);

        case 82:
          if (!((
#line 4725 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (SImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V8SImode)
       < GET_MODE_PRECISION (SImode))
   && ix86_pre_reload_split ()) && 
#line 501 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 4731 "../../gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1449 (insn, operands);

        case 83:
          if (!((
#line 4725 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (SImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V4SImode)
       < GET_MODE_PRECISION (SImode))
   && ix86_pre_reload_split ()) && 
#line 501 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 4731 "../../gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1450 (insn, operands);

        case 84:
          if (!((
#line 4725 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (SImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V8DImode)
       < GET_MODE_PRECISION (SImode))
   && ix86_pre_reload_split ()) && 
#line 502 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)) && 
#line 4731 "../../gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1451 (insn, operands);

        case 85:
          if (!((
#line 4725 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (SImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V4DImode)
       < GET_MODE_PRECISION (SImode))
   && ix86_pre_reload_split ()) && 
#line 502 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 4731 "../../gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1452 (insn, operands);

        case 86:
          if (!((
#line 4725 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (SImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V2DImode)
       < GET_MODE_PRECISION (SImode))
   && ix86_pre_reload_split ()) && 
#line 502 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 4731 "../../gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1453 (insn, operands);

        case 87:
          if (!((
#line 4635 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW
   && ix86_pre_reload_split ()
   && (GET_MODE_NUNITS (V64QImode)
      < GET_MODE_PRECISION (DImode))
   && ix86_pre_reload_split ()) && 
#line 318 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)) && 
#line 4641 "../../gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1426 (insn, operands);

        case 88:
          if (!((
#line 4635 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW
   && ix86_pre_reload_split ()
   && (GET_MODE_NUNITS (V16QImode)
      < GET_MODE_PRECISION (DImode))
   && ix86_pre_reload_split ()) && 
#line 318 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 4641 "../../gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1429 (insn, operands);

        case 89:
          if (!((
#line 4635 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW
   && ix86_pre_reload_split ()
   && (GET_MODE_NUNITS (V16HImode)
      < GET_MODE_PRECISION (DImode))
   && ix86_pre_reload_split ()) && 
#line 319 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 4641 "../../gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1438 (insn, operands);

        case 90:
          if (!((
#line 4725 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (DImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V16SImode)
       < GET_MODE_PRECISION (DImode))
   && ix86_pre_reload_split ()) && 
#line 501 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)) && 
#line 4731 "../../gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1454 (insn, operands);

        case 91:
          if (!((
#line 4635 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW
   && ix86_pre_reload_split ()
   && (GET_MODE_NUNITS (V32QImode)
      < GET_MODE_PRECISION (DImode))
   && ix86_pre_reload_split ()) && 
#line 318 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 4641 "../../gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1432 (insn, operands);

        case 92:
          if (!((
#line 4635 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW
   && ix86_pre_reload_split ()
   && (GET_MODE_NUNITS (V32HImode)
      < GET_MODE_PRECISION (DImode))
   && ix86_pre_reload_split ()) && 
#line 319 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)) && 
#line 4641 "../../gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1435 (insn, operands);

        case 93:
          if (!((
#line 4635 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW
   && ix86_pre_reload_split ()
   && (GET_MODE_NUNITS (V8HImode)
      < GET_MODE_PRECISION (DImode))
   && ix86_pre_reload_split ()) && 
#line 319 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 4641 "../../gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1441 (insn, operands);

        case 94:
          if (!((
#line 4725 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (DImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V8SImode)
       < GET_MODE_PRECISION (DImode))
   && ix86_pre_reload_split ()) && 
#line 501 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 4731 "../../gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1455 (insn, operands);

        case 95:
          if (!((
#line 4725 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (DImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V4SImode)
       < GET_MODE_PRECISION (DImode))
   && ix86_pre_reload_split ()) && 
#line 501 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 4731 "../../gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1456 (insn, operands);

        case 96:
          if (!((
#line 4725 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (DImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V8DImode)
       < GET_MODE_PRECISION (DImode))
   && ix86_pre_reload_split ()) && 
#line 502 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)) && 
#line 4731 "../../gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1457 (insn, operands);

        case 97:
          if (!((
#line 4725 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (DImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V4DImode)
       < GET_MODE_PRECISION (DImode))
   && ix86_pre_reload_split ()) && 
#line 502 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 4731 "../../gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1458 (insn, operands);

        case 98:
          if (!((
#line 4725 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (DImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V2DImode)
       < GET_MODE_PRECISION (DImode))
   && ix86_pre_reload_split ()) && 
#line 502 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 4731 "../../gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1459 (insn, operands);

        default:
          return NULL;
        }

    default:
      return NULL;
    }
}

 rtx_insn *
split_72 (rtx x1 ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
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
          return gen_split_1975 (insn, operands);

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
          return gen_split_2002 (insn, operands);

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
          return gen_split_2029 (insn, operands);

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
          return gen_split_2056 (insn, operands);

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
          return gen_split_2083 (insn, operands);

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
          return gen_split_2110 (insn, operands);

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
          return gen_split_2137 (insn, operands);

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
          return gen_split_2164 (insn, operands);

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
          return gen_split_2191 (insn, operands);

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
          return gen_split_2218 (insn, operands);

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
          return gen_split_2245 (insn, operands);

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
          return gen_split_2272 (insn, operands);

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
          return gen_split_1978 (insn, operands);

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
          return gen_split_2005 (insn, operands);

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
          return gen_split_2032 (insn, operands);

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
          return gen_split_2059 (insn, operands);

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
          return gen_split_2086 (insn, operands);

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
          return gen_split_2113 (insn, operands);

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
          return gen_split_2140 (insn, operands);

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
          return gen_split_2167 (insn, operands);

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
          return gen_split_2194 (insn, operands);

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
          return gen_split_2221 (insn, operands);

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
          return gen_split_2248 (insn, operands);

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
          return gen_split_2275 (insn, operands);

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
          return gen_split_1981 (insn, operands);

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
          return gen_split_2008 (insn, operands);

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
          return gen_split_2035 (insn, operands);

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
          return gen_split_2062 (insn, operands);

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
          return gen_split_2089 (insn, operands);

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
          return gen_split_2116 (insn, operands);

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
          return gen_split_2143 (insn, operands);

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
          return gen_split_2170 (insn, operands);

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
          return gen_split_2197 (insn, operands);

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
          return gen_split_2224 (insn, operands);

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
          return gen_split_2251 (insn, operands);

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
          return gen_split_2278 (insn, operands);

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
          return gen_split_3055 (insn, operands);

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
          return gen_split_3064 (insn, operands);

        case 38:
          if (!(
#line 13946 "../../gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 13950 "../../gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_3073 (insn, operands);

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
          return gen_split_3082 (insn, operands);

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
          return gen_split_3091 (insn, operands);

        case 41:
          if (!(
#line 13946 "../../gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 13950 "../../gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_3100 (insn, operands);

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
          return gen_split_3109 (insn, operands);

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
          return gen_split_3118 (insn, operands);

        case 44:
          if (!(
#line 13946 "../../gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 13950 "../../gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_3127 (insn, operands);

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
          return gen_split_3136 (insn, operands);

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
          return gen_split_3145 (insn, operands);

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
          return gen_split_3154 (insn, operands);

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
          return gen_split_2623 (insn, operands);

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
          return gen_split_2650 (insn, operands);

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
          return gen_split_2677 (insn, operands);

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
          return gen_split_2704 (insn, operands);

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
          return gen_split_2731 (insn, operands);

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
          return gen_split_2758 (insn, operands);

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
          return gen_split_2785 (insn, operands);

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
          return gen_split_2812 (insn, operands);

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
          return gen_split_2839 (insn, operands);

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
          return gen_split_2866 (insn, operands);

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
          return gen_split_2893 (insn, operands);

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
          return gen_split_2920 (insn, operands);

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
          return gen_split_2626 (insn, operands);

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
          return gen_split_2653 (insn, operands);

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
          return gen_split_2680 (insn, operands);

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
          return gen_split_2707 (insn, operands);

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
          return gen_split_2734 (insn, operands);

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
          return gen_split_2761 (insn, operands);

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
          return gen_split_2788 (insn, operands);

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
          return gen_split_2815 (insn, operands);

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
          return gen_split_2842 (insn, operands);

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
          return gen_split_2869 (insn, operands);

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
          return gen_split_2896 (insn, operands);

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
          return gen_split_2923 (insn, operands);

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
        case E_V32HFmode:
          if (pattern1188 (x2, 
E_V32HFmode) != 0
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
#line 336 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)) && 
#line 13874 "../../gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_2629 (insn, operands);

        case E_V16HFmode:
          if (pattern1003 (x2, 
E_V16HFmode) != 0)
            return NULL;
          if (regmem_or_bitnot_regmem_operand (operands[1], E_V16HFmode)
              && regmem_or_bitnot_regmem_operand (operands[2], E_V16HFmode)
              && regmem_or_bitnot_regmem_operand (operands[3], E_V16HFmode))
            {
              x8 = XEXP (x2, 1);
              operands[4] = x8;
              if (regmem_or_bitnot_regmem_operand (operands[4], E_V16HFmode)
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
#line 336 "../../gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 13874 "../../gcc/config/i386/sse.md"
( 1)))
                return gen_split_2656 (insn, operands);
            }
          if (!register_operand (operands[1], E_V16HFmode)
              || !register_operand (operands[2], E_V16HFmode)
              || !nonimmediate_operand (operands[3], E_V16HFmode))
            return NULL;
          x8 = XEXP (x2, 1);
          if (rtx_equal_p (x8, operands[1])
              && 
#line 26225 "../../gcc/config/i386/sse.md"
(TARGET_XOP))
            return gen_split_3692 (insn, operands);
          if (!rtx_equal_p (x8, operands[2])
              || !
#line 26237 "../../gcc/config/i386/sse.md"
(TARGET_XOP))
            return NULL;
          return gen_split_3708 (insn, operands);

        case E_V8HFmode:
          if (pattern1003 (x2, 
E_V8HFmode) != 0)
            return NULL;
          if (regmem_or_bitnot_regmem_operand (operands[1], E_V8HFmode)
              && regmem_or_bitnot_regmem_operand (operands[2], E_V8HFmode)
              && regmem_or_bitnot_regmem_operand (operands[3], E_V8HFmode))
            {
              x8 = XEXP (x2, 1);
              operands[4] = x8;
              if (regmem_or_bitnot_regmem_operand (operands[4], E_V8HFmode)
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
                return gen_split_2683 (insn, operands);
            }
          if (!register_operand (operands[1], E_V8HFmode)
              || !register_operand (operands[2], E_V8HFmode)
              || !nonimmediate_operand (operands[3], E_V8HFmode))
            return NULL;
          x8 = XEXP (x2, 1);
          if (rtx_equal_p (x8, operands[1])
              && 
#line 26225 "../../gcc/config/i386/sse.md"
(TARGET_XOP))
            return gen_split_3693 (insn, operands);
          if (!rtx_equal_p (x8, operands[2])
              || !
#line 26237 "../../gcc/config/i386/sse.md"
(TARGET_XOP))
            return NULL;
          return gen_split_3709 (insn, operands);

        case E_V32BFmode:
          if (pattern1188 (x2, 
E_V32BFmode) != 0
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
#line 337 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)) && 
#line 13874 "../../gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_2710 (insn, operands);

        case E_V16BFmode:
          if (pattern1188 (x2, 
E_V16BFmode) != 0
              || !((
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
          return gen_split_2737 (insn, operands);

        case E_V8BFmode:
          if (pattern1188 (x2, 
E_V8BFmode) != 0
              || !(
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
          return gen_split_2764 (insn, operands);

        case E_V16SFmode:
          if (pattern1188 (x2, 
E_V16SFmode) != 0
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
#line 338 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)) && 
#line 13874 "../../gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_2791 (insn, operands);

        case E_V8SFmode:
          if (pattern1003 (x2, 
E_V8SFmode) != 0)
            return NULL;
          if (regmem_or_bitnot_regmem_operand (operands[1], E_V8SFmode)
              && regmem_or_bitnot_regmem_operand (operands[2], E_V8SFmode)
              && regmem_or_bitnot_regmem_operand (operands[3], E_V8SFmode))
            {
              x8 = XEXP (x2, 1);
              operands[4] = x8;
              if (regmem_or_bitnot_regmem_operand (operands[4], E_V8SFmode)
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
#line 338 "../../gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 13874 "../../gcc/config/i386/sse.md"
( 1)))
                return gen_split_2818 (insn, operands);
            }
          if (!register_operand (operands[1], E_V8SFmode)
              || !register_operand (operands[2], E_V8SFmode)
              || !nonimmediate_operand (operands[3], E_V8SFmode))
            return NULL;
          x8 = XEXP (x2, 1);
          if (rtx_equal_p (x8, operands[1])
              && 
#line 26225 "../../gcc/config/i386/sse.md"
(TARGET_XOP))
            return gen_split_3694 (insn, operands);
          if (!rtx_equal_p (x8, operands[2])
              || !
#line 26237 "../../gcc/config/i386/sse.md"
(TARGET_XOP))
            return NULL;
          return gen_split_3710 (insn, operands);

        case E_V4SFmode:
          if (pattern1003 (x2, 
E_V4SFmode) != 0)
            return NULL;
          if (regmem_or_bitnot_regmem_operand (operands[1], E_V4SFmode)
              && regmem_or_bitnot_regmem_operand (operands[2], E_V4SFmode)
              && regmem_or_bitnot_regmem_operand (operands[3], E_V4SFmode))
            {
              x8 = XEXP (x2, 1);
              operands[4] = x8;
              if (regmem_or_bitnot_regmem_operand (operands[4], E_V4SFmode)
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
                return gen_split_2845 (insn, operands);
            }
          if (!register_operand (operands[1], E_V4SFmode)
              || !register_operand (operands[2], E_V4SFmode)
              || !nonimmediate_operand (operands[3], E_V4SFmode))
            return NULL;
          x8 = XEXP (x2, 1);
          if (rtx_equal_p (x8, operands[1])
              && 
#line 26225 "../../gcc/config/i386/sse.md"
(TARGET_XOP))
            return gen_split_3695 (insn, operands);
          if (!rtx_equal_p (x8, operands[2])
              || !
#line 26237 "../../gcc/config/i386/sse.md"
(TARGET_XOP))
            return NULL;
          return gen_split_3711 (insn, operands);

        case E_V8DFmode:
          if (pattern1188 (x2, 
E_V8DFmode) != 0
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
#line 339 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)) && 
#line 13874 "../../gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_2872 (insn, operands);

        case E_V4DFmode:
          if (pattern1003 (x2, 
E_V4DFmode) != 0)
            return NULL;
          if (regmem_or_bitnot_regmem_operand (operands[1], E_V4DFmode)
              && regmem_or_bitnot_regmem_operand (operands[2], E_V4DFmode)
              && regmem_or_bitnot_regmem_operand (operands[3], E_V4DFmode))
            {
              x8 = XEXP (x2, 1);
              operands[4] = x8;
              if (regmem_or_bitnot_regmem_operand (operands[4], E_V4DFmode)
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
#line 339 "../../gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 13874 "../../gcc/config/i386/sse.md"
( 1)))
                return gen_split_2899 (insn, operands);
            }
          if (!register_operand (operands[1], E_V4DFmode)
              || !register_operand (operands[2], E_V4DFmode)
              || !nonimmediate_operand (operands[3], E_V4DFmode))
            return NULL;
          x8 = XEXP (x2, 1);
          if (rtx_equal_p (x8, operands[1])
              && 
#line 26225 "../../gcc/config/i386/sse.md"
(TARGET_XOP))
            return gen_split_3696 (insn, operands);
          if (!rtx_equal_p (x8, operands[2])
              || !
#line 26237 "../../gcc/config/i386/sse.md"
(TARGET_XOP))
            return NULL;
          return gen_split_3712 (insn, operands);

        case E_V2DFmode:
          if (pattern1003 (x2, 
E_V2DFmode) != 0)
            return NULL;
          if (regmem_or_bitnot_regmem_operand (operands[1], E_V2DFmode)
              && regmem_or_bitnot_regmem_operand (operands[2], E_V2DFmode)
              && regmem_or_bitnot_regmem_operand (operands[3], E_V2DFmode))
            {
              x8 = XEXP (x2, 1);
              operands[4] = x8;
              if (regmem_or_bitnot_regmem_operand (operands[4], E_V2DFmode)
                  && ((
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
                return gen_split_2926 (insn, operands);
            }
          if (!register_operand (operands[1], E_V2DFmode)
              || !register_operand (operands[2], E_V2DFmode)
              || !nonimmediate_operand (operands[3], E_V2DFmode))
            return NULL;
          x8 = XEXP (x2, 1);
          if (rtx_equal_p (x8, operands[1])
              && 
#line 26225 "../../gcc/config/i386/sse.md"
(TARGET_XOP))
            return gen_split_3697 (insn, operands);
          if (!rtx_equal_p (x8, operands[2])
              || !
#line 26237 "../../gcc/config/i386/sse.md"
(TARGET_XOP))
            return NULL;
          return gen_split_3713 (insn, operands);

        default:
          return NULL;
        }

    default:
      return NULL;
    }
}

 rtx_insn *
split_83 (rtx x1 ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  rtx_insn *res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) != PARALLEL)
    return NULL;
  x4 = XEXP (x2, 0);
  switch (GET_CODE (x4))
    {
    case VEC_CONCAT:
      x5 = XEXP (x4, 0);
      switch (GET_CODE (x5))
        {
        case MINUS:
          switch (pattern725 (x2, 
PLUS))
            {
            case 0:
              if (pattern1662 (x4, 
E_V8SFmode, 
E_V16SFmode) != 0
                  || !(
#line 3590 "../../gcc/config/i386/sse.md"
(TARGET_SSE3
   && can_create_pseudo_p ()
   && ((rtx_equal_p (operands[1], operands[3])
	&& rtx_equal_p (operands[2], operands[4]))
       || (rtx_equal_p (operands[1], operands[4])
	   && rtx_equal_p (operands[2], operands[3])))) && 
#line 422 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
                return NULL;
              return gen_split_1298 (insn, operands);

            case 1:
              if (pattern1662 (x4, 
E_V4SFmode, 
E_V8SFmode) != 0
                  || !
#line 3590 "../../gcc/config/i386/sse.md"
(TARGET_SSE3
   && can_create_pseudo_p ()
   && ((rtx_equal_p (operands[1], operands[3])
	&& rtx_equal_p (operands[2], operands[4]))
       || (rtx_equal_p (operands[1], operands[4])
	   && rtx_equal_p (operands[2], operands[3])))))
                return NULL;
              return gen_split_1299 (insn, operands);

            case 2:
              if (pattern1662 (x4, 
E_V4DFmode, 
E_V8DFmode) != 0
                  || !(
#line 3590 "../../gcc/config/i386/sse.md"
(TARGET_SSE3
   && can_create_pseudo_p ()
   && ((rtx_equal_p (operands[1], operands[3])
	&& rtx_equal_p (operands[2], operands[4]))
       || (rtx_equal_p (operands[1], operands[4])
	   && rtx_equal_p (operands[2], operands[3])))) && 
#line 423 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
                return NULL;
              return gen_split_1300 (insn, operands);

            case 3:
              if (pattern1662 (x4, 
E_V2DFmode, 
E_V4DFmode) != 0
                  || !(
#line 3590 "../../gcc/config/i386/sse.md"
(TARGET_SSE3
   && can_create_pseudo_p ()
   && ((rtx_equal_p (operands[1], operands[3])
	&& rtx_equal_p (operands[2], operands[4]))
       || (rtx_equal_p (operands[1], operands[4])
	   && rtx_equal_p (operands[2], operands[3])))) && 
#line 423 "../../gcc/config/i386/sse.md"
(TARGET_SSE2)))
                return NULL;
              return gen_split_1301 (insn, operands);

            default:
              return NULL;
            }

        case PLUS:
          switch (pattern725 (x2, 
MINUS))
            {
            case 0:
              if (pattern1663 (x4, 
E_V8SFmode, 
E_V16SFmode) != 0
                  || !(
#line 3624 "../../gcc/config/i386/sse.md"
(TARGET_SSE3
   && can_create_pseudo_p ()
   && ((rtx_equal_p (operands[1], operands[3])
	&& rtx_equal_p (operands[2], operands[4]))
       || (rtx_equal_p (operands[1], operands[4])
	   && rtx_equal_p (operands[2], operands[3])))) && 
#line 422 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
                return NULL;
              return gen_split_1302 (insn, operands);

            case 1:
              if (pattern1663 (x4, 
E_V4SFmode, 
E_V8SFmode) != 0
                  || !
#line 3624 "../../gcc/config/i386/sse.md"
(TARGET_SSE3
   && can_create_pseudo_p ()
   && ((rtx_equal_p (operands[1], operands[3])
	&& rtx_equal_p (operands[2], operands[4]))
       || (rtx_equal_p (operands[1], operands[4])
	   && rtx_equal_p (operands[2], operands[3])))))
                return NULL;
              return gen_split_1303 (insn, operands);

            case 2:
              if (pattern1663 (x4, 
E_V4DFmode, 
E_V8DFmode) != 0
                  || !(
#line 3624 "../../gcc/config/i386/sse.md"
(TARGET_SSE3
   && can_create_pseudo_p ()
   && ((rtx_equal_p (operands[1], operands[3])
	&& rtx_equal_p (operands[2], operands[4]))
       || (rtx_equal_p (operands[1], operands[4])
	   && rtx_equal_p (operands[2], operands[3])))) && 
#line 423 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
                return NULL;
              return gen_split_1304 (insn, operands);

            case 3:
              if (pattern1663 (x4, 
E_V2DFmode, 
E_V4DFmode) != 0
                  || !(
#line 3624 "../../gcc/config/i386/sse.md"
(TARGET_SSE3
   && can_create_pseudo_p ()
   && ((rtx_equal_p (operands[1], operands[3])
	&& rtx_equal_p (operands[2], operands[4]))
       || (rtx_equal_p (operands[1], operands[4])
	   && rtx_equal_p (operands[2], operands[3])))) && 
#line 423 "../../gcc/config/i386/sse.md"
(TARGET_SSE2)))
                return NULL;
              return gen_split_1305 (insn, operands);

            default:
              return NULL;
            }

        case REG:
        case SUBREG:
        case MEM:
          operands[1] = x5;
          res = split_59 (x1, insn);
          if (res != NULL_RTX)
            return res;
          if (XVECLEN (x3, 0) < 1)
            return NULL;
          operands[4] = x3;
          switch (pattern807 (x2))
            {
            case 0:
              if ((
#line 24152 "../../gcc/config/i386/sse.md"
(TARGET_AVX2) && 
#line 24154 "../../gcc/config/i386/sse.md"
( reload_completed)))
                return gen_split_3500 (insn, operands);
              break;

            case 1:
              if ((
#line 24152 "../../gcc/config/i386/sse.md"
(TARGET_AVX2) && 
#line 24154 "../../gcc/config/i386/sse.md"
( reload_completed)))
                return gen_split_3501 (insn, operands);
              break;

            case 2:
              if ((
#line 24152 "../../gcc/config/i386/sse.md"
(TARGET_AVX2) && 
#line 24154 "../../gcc/config/i386/sse.md"
( reload_completed)))
                return gen_split_3502 (insn, operands);
              break;

            case 3:
              if (((
#line 24205 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512) && 
#line 954 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)) && 
#line 24207 "../../gcc/config/i386/sse.md"
( reload_completed)))
                return gen_split_3504 (insn, operands);
              break;

            case 4:
              if (((
#line 24205 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512) && 
#line 954 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)) && 
#line 24207 "../../gcc/config/i386/sse.md"
( reload_completed)))
                return gen_split_3505 (insn, operands);
              break;

            case 5:
              if (((
#line 24205 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512) && 
#line 954 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)) && 
#line 24207 "../../gcc/config/i386/sse.md"
( reload_completed)))
                return gen_split_3506 (insn, operands);
              break;

            case 6:
              if ((
#line 24316 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1) && 
#line 24318 "../../gcc/config/i386/sse.md"
( reload_completed)))
                return gen_split_3512 (insn, operands);
              break;

            case 7:
              if ((
#line 24316 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1) && 
#line 24318 "../../gcc/config/i386/sse.md"
( reload_completed)))
                return gen_split_3513 (insn, operands);
              break;

            case 8:
              if ((
#line 24316 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1) && 
#line 24318 "../../gcc/config/i386/sse.md"
( reload_completed)))
                return gen_split_3514 (insn, operands);
              break;

            case 9:
              if (((
#line 24549 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 957 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)) && 
#line 24551 "../../gcc/config/i386/sse.md"
( reload_completed)))
                return gen_split_3524 (insn, operands);
              break;

            case 10:
              if (((
#line 24549 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 957 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)) && 
#line 24551 "../../gcc/config/i386/sse.md"
( reload_completed)))
                return gen_split_3525 (insn, operands);
              break;

            case 11:
              if (((
#line 24549 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 957 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)) && 
#line 24551 "../../gcc/config/i386/sse.md"
( reload_completed)))
                return gen_split_3526 (insn, operands);
              break;

            case 12:
              if ((
#line 24603 "../../gcc/config/i386/sse.md"
(TARGET_AVX2) && 
#line 24605 "../../gcc/config/i386/sse.md"
( reload_completed)))
                return gen_split_3528 (insn, operands);
              break;

            case 13:
              if ((
#line 24603 "../../gcc/config/i386/sse.md"
(TARGET_AVX2) && 
#line 24605 "../../gcc/config/i386/sse.md"
( reload_completed)))
                return gen_split_3529 (insn, operands);
              break;

            case 14:
              if ((
#line 24603 "../../gcc/config/i386/sse.md"
(TARGET_AVX2) && 
#line 24605 "../../gcc/config/i386/sse.md"
( reload_completed)))
                return gen_split_3530 (insn, operands);
              break;

            case 15:
              if ((
#line 24721 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1) && 
#line 24723 "../../gcc/config/i386/sse.md"
( reload_completed)))
                return gen_split_3536 (insn, operands);
              break;

            case 16:
              if ((
#line 24721 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1) && 
#line 24723 "../../gcc/config/i386/sse.md"
( reload_completed)))
                return gen_split_3537 (insn, operands);
              break;

            case 17:
              if ((
#line 24721 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1) && 
#line 24723 "../../gcc/config/i386/sse.md"
( reload_completed)))
                return gen_split_3538 (insn, operands);
              break;

            default:
              break;
            }
          operands[3] = x3;
          switch (pattern808 (x2))
            {
            case 0:
              if (!((
#line 29059 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_pre_reload_split ()) && 
#line 332 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)) && 
#line 29061 "../../gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_3759 (insn, operands);

            case 1:
              if (!((
#line 29059 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_pre_reload_split ()) && 
#line 332 "../../gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 29061 "../../gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_3760 (insn, operands);

            case 2:
              if (!(
#line 29059 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_pre_reload_split ()) && 
#line 29061 "../../gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_3761 (insn, operands);

            case 3:
              if (!((
#line 29059 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_pre_reload_split ()) && 
#line 333 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)) && 
#line 29061 "../../gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_3762 (insn, operands);

            case 4:
              if (!((
#line 29059 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_pre_reload_split ()) && 
#line 333 "../../gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 29061 "../../gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_3763 (insn, operands);

            case 5:
              if (!(
#line 29059 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_pre_reload_split ()) && 
#line 29061 "../../gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_3764 (insn, operands);

            default:
              return NULL;
            }

        case VEC_CONCAT:
          switch (pattern525 (x2))
            {
            case 0:
              if (!(
#line 25104 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512) && 
#line 25106 "../../gcc/config/i386/sse.md"
( reload_completed)))
                return NULL;
              return gen_split_3559 (insn, operands);

            case 1:
              if (!(
#line 25156 "../../gcc/config/i386/sse.md"
(TARGET_AVX2) && 
#line 25158 "../../gcc/config/i386/sse.md"
( reload_completed)))
                return NULL;
              return gen_split_3561 (insn, operands);

            case 2:
              if (!(
#line 25252 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1) && 
#line 25254 "../../gcc/config/i386/sse.md"
( reload_completed)))
                return NULL;
              return gen_split_3567 (insn, operands);

            default:
              return NULL;
            }

        default:
          return NULL;
        }

    case REG:
    case SUBREG:
    case MEM:
      operands[1] = x4;
      res = split_63 (x1, insn);
      if (res != NULL_RTX)
        return res;
      if (GET_CODE (x4) != SUBREG)
        return NULL;
      switch (pattern527 (x2))
        {
        case 0:
          if (!(
#line 15035 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512 && ix86_pre_reload_split ()) && 
#line 15037 "../../gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_3168 (insn, operands);

        case 1:
          if (!(
#line 15088 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL && TARGET_AVX512BW && ix86_pre_reload_split ()) && 
#line 15090 "../../gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_3170 (insn, operands);

        default:
          return NULL;
        }

    case UNSPEC:
      if (XVECLEN (x4, 0) != 2)
        return NULL;
      switch (pattern529 (x2))
        {
        case 0:
          if (!(
#line 15010 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512 && ix86_pre_reload_split ()) && 
#line 15012 "../../gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_3167 (insn, operands);

        case 1:
          if (!(
#line 15272 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL && TARGET_AVX512VBMI
   && ix86_pre_reload_split ()) && 
#line 15275 "../../gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_3173 (insn, operands);

        case 2:
          if (!(
#line 15067 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL && TARGET_AVX512BW && ix86_pre_reload_split ()) && 
#line 15069 "../../gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_3169 (insn, operands);

        case 3:
          if (!(
#line 15119 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512 && ix86_pre_reload_split ()) && 
#line 15121 "../../gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_3171 (insn, operands);

        case 4:
          if (!(
#line 15191 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VBMI && TARGET_EVEX512 && ix86_pre_reload_split ()) && 
#line 15193 "../../gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_3172 (insn, operands);

        case 5:
          if (!(
#line 15291 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()) && 
#line 15293 "../../gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_3174 (insn, operands);

        default:
          return NULL;
        }

    default:
      return NULL;
    }
}

 rtx_insn *
split_insns (rtx x1 ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  rtx_insn *res ATTRIBUTE_UNUSED;
  recog_data.insn = NULL;
  switch (GET_CODE (x1))
    {
    case EH_RETURN:
      if (!
#line 20853 "../../gcc/config/i386/i386.md"
(epilogue_completed))
        return NULL;
      return gen_split_869 (insn, operands);

    case PARALLEL:
    case UNSPEC:
    case UNSPEC_VOLATILE:
    case SET:
      switch (GET_CODE (x1))
        {
        case SET:
          res = split_13 (x1, insn);
          if (res != NULL_RTX)
            return res;
          break;

        case PARALLEL:
          res = split_35 (x1, insn);
          if (res != NULL_RTX)
            return res;
          break;

        default:
          break;
        }
      operands[0] = x1;
      if (tls_address_pattern (operands[0], E_VOIDmode)
          && 
#line 23235 "../../gcc/config/i386/i386.md"
(TARGET_TLS_DIRECT_SEG_REFS))
        return gen_split_916 (insn, operands);
      switch (GET_CODE (x1))
        {
        case PARALLEL:
          return split_85 (x1, insn);

        case SET:
          x2 = XEXP (x1, 1);
          switch (GET_CODE (x2))
            {
            case NEG:
              res = split_39 (x1, insn);
              if (res != NULL_RTX)
                return res;
              break;

            case IF_THEN_ELSE:
              res = split_41 (x1, insn);
              if (res != NULL_RTX)
                return res;
              break;

            case UNSPEC:
              res = split_42 (x1, insn);
              if (res != NULL_RTX)
                return res;
              break;

            case COMPARE:
              res = split_43 (x1, insn);
              if (res != NULL_RTX)
                return res;
              break;

            case NOT:
              res = split_44 (x1, insn);
              if (res != NULL_RTX)
                return res;
              break;

            case REG:
            case SUBREG:
            case MEM:
              res = split_45 (x1, insn);
              if (res != NULL_RTX)
                return res;
              break;

            case CONST_INT:
            case CONST_DOUBLE:
            case CONST_VECTOR:
              operands[1] = x2;
              x3 = XEXP (x1, 0);
              operands[0] = x3;
              switch (GET_MODE (operands[0]))
                {
                case E_V8QImode:
                  if (nonimmediate_gr_operand (operands[0], E_V8QImode)
                      && const0_operand (operands[1], E_V8QImode)
                      && 
#line 317 "../../gcc/config/i386/mmx.md"
(!TARGET_64BIT && reload_completed))
                    return gen_split_986 (insn, operands);
                  if (memory_operand (operands[0], E_V8QImode)
                      && x86_64_const_vector_operand (operands[1], E_V8QImode)
                      && (
#line 87 "../../gcc/config/i386/mmx.md"
(TARGET_64BIT) && 
#line 417 "../../gcc/config/i386/mmx.md"
( reload_completed)))
                    return gen_split_997 (insn, operands);
                  break;

                case E_V4HImode:
                  if (nonimmediate_gr_operand (operands[0], E_V4HImode)
                      && const0_operand (operands[1], E_V4HImode)
                      && 
#line 317 "../../gcc/config/i386/mmx.md"
(!TARGET_64BIT && reload_completed))
                    return gen_split_987 (insn, operands);
                  if (memory_operand (operands[0], E_V4HImode)
                      && x86_64_const_vector_operand (operands[1], E_V4HImode)
                      && (
#line 87 "../../gcc/config/i386/mmx.md"
(TARGET_64BIT) && 
#line 417 "../../gcc/config/i386/mmx.md"
( reload_completed)))
                    return gen_split_998 (insn, operands);
                  break;

                case E_V2SImode:
                  if (nonimmediate_gr_operand (operands[0], E_V2SImode)
                      && const0_operand (operands[1], E_V2SImode)
                      && 
#line 317 "../../gcc/config/i386/mmx.md"
(!TARGET_64BIT && reload_completed))
                    return gen_split_988 (insn, operands);
                  if (memory_operand (operands[0], E_V2SImode)
                      && x86_64_const_vector_operand (operands[1], E_V2SImode)
                      && (
#line 89 "../../gcc/config/i386/mmx.md"
(TARGET_64BIT) && 
#line 417 "../../gcc/config/i386/mmx.md"
( reload_completed)))
                    return gen_split_1001 (insn, operands);
                  break;

                case E_V1DImode:
                  if (nonimmediate_gr_operand (operands[0], E_V1DImode)
                      && const0_operand (operands[1], E_V1DImode)
                      && 
#line 317 "../../gcc/config/i386/mmx.md"
(!TARGET_64BIT && reload_completed))
                    return gen_split_989 (insn, operands);
                  break;

                case E_V2SFmode:
                  if (nonimmediate_gr_operand (operands[0], E_V2SFmode)
                      && const0_operand (operands[1], E_V2SFmode)
                      && 
#line 317 "../../gcc/config/i386/mmx.md"
(!TARGET_64BIT && reload_completed))
                    return gen_split_990 (insn, operands);
                  if (memory_operand (operands[0], E_V2SFmode)
                      && x86_64_const_vector_operand (operands[1], E_V2SFmode)
                      && (
#line 89 "../../gcc/config/i386/mmx.md"
(TARGET_64BIT) && 
#line 417 "../../gcc/config/i386/mmx.md"
( reload_completed)))
                    return gen_split_1002 (insn, operands);
                  break;

                case E_V4HFmode:
                  if (nonimmediate_gr_operand (operands[0], E_V4HFmode)
                      && const0_operand (operands[1], E_V4HFmode)
                      && 
#line 317 "../../gcc/config/i386/mmx.md"
(!TARGET_64BIT && reload_completed))
                    return gen_split_991 (insn, operands);
                  if (memory_operand (operands[0], E_V4HFmode)
                      && x86_64_const_vector_operand (operands[1], E_V4HFmode)
                      && (
#line 88 "../../gcc/config/i386/mmx.md"
(TARGET_64BIT) && 
#line 417 "../../gcc/config/i386/mmx.md"
( reload_completed)))
                    return gen_split_999 (insn, operands);
                  break;

                case E_V4BFmode:
                  if (nonimmediate_gr_operand (operands[0], E_V4BFmode)
                      && const0_operand (operands[1], E_V4BFmode)
                      && 
#line 317 "../../gcc/config/i386/mmx.md"
(!TARGET_64BIT && reload_completed))
                    return gen_split_992 (insn, operands);
                  if (memory_operand (operands[0], E_V4BFmode)
                      && x86_64_const_vector_operand (operands[1], E_V4BFmode)
                      && (
#line 88 "../../gcc/config/i386/mmx.md"
(TARGET_64BIT) && 
#line 417 "../../gcc/config/i386/mmx.md"
( reload_completed)))
                    return gen_split_1000 (insn, operands);
                  break;

                case E_V2QImode:
                  if (memory_operand (operands[0], E_V2QImode)
                      && x86_64_const_vector_operand (operands[1], E_V2QImode)
                      && 
#line 417 "../../gcc/config/i386/mmx.md"
( reload_completed))
                    return gen_split_993 (insn, operands);
                  break;

                case E_V4QImode:
                  if (memory_operand (operands[0], E_V4QImode)
                      && x86_64_const_vector_operand (operands[1], E_V4QImode)
                      && 
#line 417 "../../gcc/config/i386/mmx.md"
( reload_completed))
                    return gen_split_994 (insn, operands);
                  break;

                case E_V2HImode:
                  if (memory_operand (operands[0], E_V2HImode)
                      && x86_64_const_vector_operand (operands[1], E_V2HImode)
                      && 
#line 417 "../../gcc/config/i386/mmx.md"
( reload_completed))
                    return gen_split_995 (insn, operands);
                  break;

                case E_V2HFmode:
                  if (memory_operand (operands[0], E_V2HFmode)
                      && x86_64_const_vector_operand (operands[1], E_V2HFmode)
                      && 
#line 417 "../../gcc/config/i386/mmx.md"
( reload_completed))
                    return gen_split_996 (insn, operands);
                  break;

                default:
                  break;
                }
              break;

            case PLUS:
              res = split_46 (x1, insn);
              if (res != NULL_RTX)
                return res;
              break;

            case MINUS:
              res = split_47 (x1, insn);
              if (res != NULL_RTX)
                return res;
              break;

            case VEC_SELECT:
              res = split_49 (x1, insn);
              if (res != NULL_RTX)
                return res;
              break;

            case LT:
              x3 = XEXP (x1, 0);
              operands[0] = x3;
              switch (pattern232 (x2))
                {
                case 0:
                  if ((
#line 3873 "../../gcc/config/i386/mmx.md"
(TARGET_MMX_WITH_SSE && ix86_pre_reload_split ()) && 
#line 3875 "../../gcc/config/i386/mmx.md"
( 1)))
                    return gen_split_1042 (insn, operands);
                  break;

                case 1:
                  if ((
#line 3873 "../../gcc/config/i386/mmx.md"
(TARGET_MMX_WITH_SSE && ix86_pre_reload_split ()) && 
#line 3875 "../../gcc/config/i386/mmx.md"
( 1)))
                    return gen_split_1043 (insn, operands);
                  break;

                case 2:
                  if ((
#line 3962 "../../gcc/config/i386/mmx.md"
(TARGET_SSE2 && ix86_pre_reload_split ()) && 
#line 3964 "../../gcc/config/i386/mmx.md"
( 1)))
                    return gen_split_1047 (insn, operands);
                  break;

                default:
                  break;
                }
              break;

            case AND:
              res = split_50 (x1, insn);
              if (res != NULL_RTX)
                return res;
              break;

            case VEC_CONCAT:
              res = split_51 (x1, insn);
              if (res != NULL_RTX)
                return res;
              break;

            case VEC_MERGE:
              res = split_52 (x1, insn);
              if (res != NULL_RTX)
                return res;
              break;

            case ZERO_EXTEND:
              res = split_53 (x1, insn);
              if (res != NULL_RTX)
                return res;
              break;

            case IOR:
              x3 = XEXP (x1, 0);
              operands[0] = x3;
              switch (pattern234 (x2))
                {
                case 0:
                  if (
#line 2115 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && reload_completed))
                    return gen_split_1174 (insn, operands);
                  break;

                case 1:
                  if (
#line 2115 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && reload_completed))
                    return gen_split_1177 (insn, operands);
                  break;

                case 2:
                  if ((
#line 2115 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && reload_completed) && 
#line 2075 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW)))
                    return gen_split_1180 (insn, operands);
                  break;

                case 3:
                  if ((
#line 2115 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && reload_completed) && 
#line 2075 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW)))
                    return gen_split_1183 (insn, operands);
                  break;

                default:
                  break;
                }
              break;

            case XOR:
              x3 = XEXP (x1, 0);
              operands[0] = x3;
              switch (pattern234 (x2))
                {
                case 0:
                  if (
#line 2115 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && reload_completed))
                    return gen_split_1175 (insn, operands);
                  break;

                case 1:
                  if (
#line 2115 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && reload_completed))
                    return gen_split_1178 (insn, operands);
                  break;

                case 2:
                  if ((
#line 2115 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && reload_completed) && 
#line 2075 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW)))
                    return gen_split_1181 (insn, operands);
                  break;

                case 3:
                  if ((
#line 2115 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && reload_completed) && 
#line 2075 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW)))
                    return gen_split_1184 (insn, operands);
                  break;

                default:
                  break;
                }
              break;

            case ASHIFT:
              switch (pattern51 (x1))
                {
                case 0:
                  if (
#line 2279 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && reload_completed))
                    return gen_split_1206 (insn, operands);
                  break;

                case 1:
                  if (
#line 2279 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && reload_completed))
                    return gen_split_1208 (insn, operands);
                  break;

                case 2:
                  if ((
#line 2279 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && reload_completed) && 
#line 2075 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW)))
                    return gen_split_1210 (insn, operands);
                  break;

                case 3:
                  if ((
#line 2279 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && reload_completed) && 
#line 2075 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW)))
                    return gen_split_1212 (insn, operands);
                  break;

                default:
                  break;
                }
              break;

            case LSHIFTRT:
              switch (pattern51 (x1))
                {
                case 0:
                  if (
#line 2279 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && reload_completed))
                    return gen_split_1207 (insn, operands);
                  break;

                case 1:
                  if (
#line 2279 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && reload_completed))
                    return gen_split_1209 (insn, operands);
                  break;

                case 2:
                  if ((
#line 2279 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && reload_completed) && 
#line 2075 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW)))
                    return gen_split_1211 (insn, operands);
                  break;

                case 3:
                  if ((
#line 2279 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && reload_completed) && 
#line 2075 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW)))
                    return gen_split_1213 (insn, operands);
                  break;

                default:
                  break;
                }
              break;

            case SIGN_EXTEND:
              res = split_54 (x1, insn);
              if (res != NULL_RTX)
                return res;
              break;

            case SS_PLUS:
              if (pattern53 (x1) == 0
                  && 
#line 22620 "../../gcc/config/i386/sse.md"
(TARGET_SSSE3 && reload_completed
   && SSE_REGNO_P (REGNO (operands[0]))))
                return gen_split_3456 (insn, operands);
              break;

            case SS_MINUS:
              if (pattern53 (x1) == 0
                  && 
#line 22620 "../../gcc/config/i386/sse.md"
(TARGET_SSSE3 && reload_completed
   && SSE_REGNO_P (REGNO (operands[0]))))
                return gen_split_3458 (insn, operands);
              break;

            case NE:
            case EQ:
              res = split_55 (x1, insn);
              if (res != NULL_RTX)
                return res;
              break;

            default:
              break;
            }
          x3 = XEXP (x1, 0);
          operands[0] = x3;
          return split_84 (x1, insn);

        default:
          return NULL;
        }

    default:
      return NULL;
    }
}

 rtx_insn *
peephole2_6 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pmatch_len_ ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12, x13;
  rtx_insn *res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  operands[1] = x2;
  x3 = XEXP (x1, 0);
  operands[0] = x3;
  switch (GET_CODE (operands[0]))
    {
    case REG:
      switch (GET_MODE (operands[0]))
        {
        case E_QImode:
          x4 = PATTERN (peep2_next_insn (1));
          switch (pattern726 (x4, 
E_QImode))
            {
            case 0:
              if (pattern1342 (x4, 
E_QImode) != 0
                  || !
#line 3385 "../../gcc/config/i386/i386.md"
(peep2_reg_dead_p (3, operands[0])
   && optimize_insn_for_size_p ()))
                return NULL;
              *pmatch_len_ = 2;
              return gen_peephole2_15 (insn, operands);

            case 1:
              if (XVECLEN (x4, 0) != 2)
                return NULL;
              x5 = XVECEXP (x4, 0, 0);
              if (GET_CODE (x5) != SET)
                return NULL;
              x6 = XEXP (x5, 1);
              if (GET_CODE (x6) != NEG
                  || pattern1346 (x4, 
E_QImode) != 0)
                return NULL;
              *pmatch_len_ = 2;
              return gen_peephole2_155 (insn, operands);

            default:
              return NULL;
            }

        case E_HImode:
          x4 = PATTERN (peep2_next_insn (1));
          switch (pattern726 (x4, 
E_HImode))
            {
            case 0:
              if (pattern1342 (x4, 
E_HImode) != 0
                  || !
#line 3385 "../../gcc/config/i386/i386.md"
(peep2_reg_dead_p (3, operands[0])
   && optimize_insn_for_size_p ()))
                return NULL;
              *pmatch_len_ = 2;
              return gen_peephole2_16 (insn, operands);

            case 1:
              if (XVECLEN (x4, 0) != 2)
                return NULL;
              x5 = XVECEXP (x4, 0, 0);
              if (GET_CODE (x5) != SET)
                return NULL;
              x6 = XEXP (x5, 1);
              if (GET_CODE (x6) == NEG
                  && pattern1346 (x4, 
E_HImode) == 0)
                {
                  *pmatch_len_ = 2;
                  res = gen_peephole2_156 (insn, operands);
                  if (res != NULL_RTX)
                    return res;
                }
              if (peep2_current_count < 4
                  || pattern1348 (x4, 
E_HImode) != 0
                  || !
#line 26350 "../../gcc/config/i386/i386.md"
(TARGET_CMOVE
  && REGNO (operands[2]) != REGNO (operands[0])
  && REGNO (operands[2]) != REGNO (operands[1])
  && peep2_reg_dead_p (1, operands[1])
  && peep2_reg_dead_p (4, operands[2])
  && !reg_overlap_mentioned_p (operands[0], operands[3])))
                return NULL;
              *pmatch_len_ = 3;
              return gen_peephole2_203 (insn, operands);

            default:
              return NULL;
            }

        case E_SImode:
          if (!general_reg_operand (operands[0], E_SImode)
              || !general_reg_operand (operands[1], E_SImode))
            return NULL;
          if (peep2_current_count >= 2)
            {
              x4 = PATTERN (peep2_next_insn (1));
              if (pattern1065 (x4, 
E_SImode) == 0
                  && 
#line 3385 "../../gcc/config/i386/i386.md"
(peep2_reg_dead_p (3, operands[0])
   && optimize_insn_for_size_p ()))
                {
                  *pmatch_len_ = 2;
                  res = gen_peephole2_17 (insn, operands);
                  if (res != NULL_RTX)
                    return res;
                }
            }
          if (!
#line 3418 "../../gcc/config/i386/i386.md"
(optimize_size > 1
  && ((REGNO (operands[0]) == AX_REG)
      != (REGNO (operands[1]) == AX_REG))
  && optimize_insn_for_size_p ()
  && peep2_reg_dead_p (1, operands[1])))
            return NULL;
          *pmatch_len_ = 0;
          return gen_peephole2_27 (insn, operands);

        case E_DImode:
          if (!general_reg_operand (operands[0], E_DImode)
              || !general_reg_operand (operands[1], E_DImode))
            return NULL;
          if (peep2_current_count >= 2)
            {
              x4 = PATTERN (peep2_next_insn (1));
              if (pattern1065 (x4, 
E_DImode) == 0
                  && (
#line 3385 "../../gcc/config/i386/i386.md"
(peep2_reg_dead_p (3, operands[0])
   && optimize_insn_for_size_p ()) && 
#line 1161 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                {
                  *pmatch_len_ = 2;
                  res = gen_peephole2_18 (insn, operands);
                  if (res != NULL_RTX)
                    return res;
                }
            }
          if ((
#line 3418 "../../gcc/config/i386/i386.md"
(optimize_size > 1
  && ((REGNO (operands[0]) == AX_REG)
      != (REGNO (operands[1]) == AX_REG))
  && optimize_insn_for_size_p ()
  && peep2_reg_dead_p (1, operands[1])) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
            {
              *pmatch_len_ = 0;
              res = gen_peephole2_28 (insn, operands);
              if (res != NULL_RTX)
                return res;
            }
          if (peep2_current_count < 2
              || peep2_current_count < 3
              || peep2_current_count < 4)
            return NULL;
          x4 = PATTERN (peep2_next_insn (1));
          if (GET_CODE (x4) != PARALLEL
              || XVECLEN (x4, 0) != 2)
            return NULL;
          x5 = XVECEXP (x4, 0, 0);
          if (GET_CODE (x5) != SET)
            return NULL;
          x6 = XEXP (x5, 1);
          if (GET_CODE (x6) != ASHIFTRT
              || GET_MODE (x6) != E_DImode)
            return NULL;
          x7 = XEXP (x6, 1);
          if (x7 != const_int_rtx[MAX_SAVED_CONST_INT + 63]
              || pattern1344 (x4) != 0)
            return NULL;
          x8 = PATTERN (peep2_next_insn (2));
          if (GET_CODE (x8) != SET)
            return NULL;
          x9 = XEXP (x8, 0);
          operands[2] = x9;
          if (!general_reg_operand (operands[2], E_DImode))
            return NULL;
          x10 = XEXP (x8, 1);
          if (!rtx_equal_p (x10, operands[1]))
            return NULL;
          x11 = PATTERN (peep2_next_insn (3));
          if (GET_CODE (x11) != SET)
            return NULL;
          x12 = XEXP (x11, 0);
          operands[3] = x12;
          if (!general_reg_operand (operands[3], E_DImode))
            return NULL;
          x13 = XEXP (x11, 1);
          if (!rtx_equal_p (x13, operands[0])
              || !
#line 5116 "../../gcc/config/i386/i386.md"
((optimize_function_for_size_p (cfun) || TARGET_USE_CLTD)
   && REGNO (operands[2]) == AX_REG
   && REGNO (operands[3]) == DX_REG
   && peep2_reg_dead_p (4, operands[0])
   && !reg_mentioned_p (operands[0], operands[1])
   && !reg_mentioned_p (operands[2], operands[0])))
            return NULL;
          *pmatch_len_ = 3;
          return gen_peephole2_53 (insn, operands);

        default:
          return NULL;
        }

    case SUBREG:
    case MEM:
      if (peep2_current_count < 2
          || peep2_current_count < 3)
        return NULL;
      switch (GET_MODE (operands[0]))
        {
        case E_SImode:
          x4 = PATTERN (peep2_next_insn (1));
          switch (pattern959 (x4, 
E_SImode))
            {
            case 0:
              if (!(
#line 5039 "../../gcc/config/i386/i386.md"
(REGNO (operands[1]) != REGNO (operands[2])
   && INTVAL (operands[4]) == (4 * BITS_PER_UNIT - 1)
   && peep2_reg_dead_p (2, operands[1])
   && peep2_reg_dead_p (4, operands[2])
   && !reg_mentioned_p (operands[2], operands[3])) && 
#line 1235 "../../gcc/config/i386/i386.md"
(!TARGET_64BIT)))
                return NULL;
              *pmatch_len_ = 3;
              return gen_peephole2_49 (insn, operands);

            case 1:
              if (!(
#line 5057 "../../gcc/config/i386/i386.md"
(/* cltd is shorter than sarl $31, %eax */
   !optimize_function_for_size_p (cfun)
   && REGNO (operands[1]) == AX_REG
   && REGNO (operands[2]) == DX_REG
   && INTVAL (operands[4]) == (4 * BITS_PER_UNIT - 1)
   && peep2_reg_dead_p (2, operands[1])
   && peep2_reg_dead_p (3, operands[2])
   && !reg_mentioned_p (operands[2], operands[3])) && 
#line 1235 "../../gcc/config/i386/i386.md"
(!TARGET_64BIT)))
                return NULL;
              *pmatch_len_ = 2;
              return gen_peephole2_51 (insn, operands);

            default:
              return NULL;
            }

        case E_DImode:
          x4 = PATTERN (peep2_next_insn (1));
          switch (pattern959 (x4, 
E_DImode))
            {
            case 0:
              if (!(
#line 5039 "../../gcc/config/i386/i386.md"
(REGNO (operands[1]) != REGNO (operands[2])
   && INTVAL (operands[4]) == (8 * BITS_PER_UNIT - 1)
   && peep2_reg_dead_p (2, operands[1])
   && peep2_reg_dead_p (4, operands[2])
   && !reg_mentioned_p (operands[2], operands[3])) && 
#line 1236 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return NULL;
              *pmatch_len_ = 3;
              return gen_peephole2_50 (insn, operands);

            case 1:
              if (!(
#line 5057 "../../gcc/config/i386/i386.md"
(/* cltd is shorter than sarl $31, %eax */
   !optimize_function_for_size_p (cfun)
   && REGNO (operands[1]) == AX_REG
   && REGNO (operands[2]) == DX_REG
   && INTVAL (operands[4]) == (8 * BITS_PER_UNIT - 1)
   && peep2_reg_dead_p (2, operands[1])
   && peep2_reg_dead_p (3, operands[2])
   && !reg_mentioned_p (operands[2], operands[3])) && 
#line 1236 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return NULL;
              *pmatch_len_ = 2;
              return gen_peephole2_52 (insn, operands);

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
peephole2_11 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pmatch_len_ ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12, x13, x14;
  rtx_insn *res ATTRIBUTE_UNUSED;
  x2 = PATTERN (peep2_next_insn (1));
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) != IOR
      || GET_MODE (x3) != E_SImode)
    return NULL;
  x4 = XEXP (x3, 0);
  if (GET_CODE (x4) != AND
      || GET_MODE (x4) != E_SImode)
    return NULL;
  x5 = XEXP (x4, 1);
  if (GET_CODE (x5) != CONST_INT
      || XWINT (x5, 0) != -65536L)
    return NULL;
  x6 = XEXP (x3, 1);
  if (GET_CODE (x6) != LSHIFTRT
      || GET_MODE (x6) != E_SImode)
    return NULL;
  x7 = XEXP (x6, 0);
  if (GET_CODE (x7) != BSWAP
      || GET_MODE (x7) != E_SImode)
    return NULL;
  x8 = XEXP (x6, 1);
  if (x8 != const_int_rtx[MAX_SAVED_CONST_INT + 16])
    return NULL;
  x9 = XEXP (x4, 0);
  if (!rtx_equal_p (x9, operands[0]))
    return NULL;
  x10 = XEXP (x7, 0);
  if (!rtx_equal_p (x10, operands[0]))
    return NULL;
  x11 = XEXP (x2, 0);
  if (!rtx_equal_p (x11, operands[0]))
    return NULL;
  x12 = PATTERN (peep2_next_insn (2));
  if (GET_CODE (x12) != SET)
    return NULL;
  x13 = XEXP (x12, 0);
  operands[2] = x13;
  if (!general_reg_operand (operands[2], E_SImode))
    return NULL;
  x14 = XEXP (x12, 1);
  if (!rtx_equal_p (x14, operands[0])
      || !
#line 22530 "../../gcc/config/i386/i386.md"
(!(TARGET_USE_XCHGB ||
     TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun))
   && peep2_regno_dead_p (0, FLAGS_REG)
   && peep2_reg_dead_p(3, operands[0])))
    return NULL;
  *pmatch_len_ = 2;
  return gen_peephole2_192 (insn, operands);
}

 rtx_insn *
peephole2_12 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pmatch_len_ ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12, x13;
  rtx_insn *res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  operands[1] = x2;
  if (register_operand (operands[0], E_SImode))
    {
      res = peephole2_10 (x1, insn, pmatch_len_);
      if (res != NULL_RTX)
        return res;
    }
  if (peep2_current_count < 2
      || peep2_current_count < 3
      || !general_reg_operand (operands[0], E_SImode))
    return NULL;
  x3 = PATTERN (peep2_next_insn (1));
  if (GET_CODE (x3) == PARALLEL
      && XVECLEN (x3, 0) == 2)
    {
      x4 = XVECEXP (x3, 0, 0);
      if (GET_CODE (x4) == SET)
        {
          if (memory_operand (operands[1], E_SImode))
            {
              switch (pattern1195 (x3, 
E_SImode, 
E_DImode))
                {
                case 0:
                  if (
#line 8701 "../../gcc/config/i386/i386.md"
((TARGET_READ_MODIFY_WRITE || optimize_insn_for_size_p ())
   && peep2_reg_dead_p (3, operands[0])
   && !reg_overlap_mentioned_p (operands[0], operands[1])
   && !reg_overlap_mentioned_p (operands[0], operands[2])))
                    {
                      *pmatch_len_ = 2;
                      res = gen_peephole2_70 (insn, operands);
                      if (res != NULL_RTX)
                        return res;
                    }
                  break;

                case 1:
                  if (
#line 9134 "../../gcc/config/i386/i386.md"
((TARGET_READ_MODIFY_WRITE || optimize_insn_for_size_p ())
   && peep2_reg_dead_p (3, operands[0])
   && !reg_overlap_mentioned_p (operands[0], operands[1])
   && !reg_overlap_mentioned_p (operands[0], operands[2])))
                    {
                      *pmatch_len_ = 2;
                      res = gen_peephole2_86 (insn, operands);
                      if (res != NULL_RTX)
                        return res;
                    }
                  break;

                case 2:
                  if (
#line 9621 "../../gcc/config/i386/i386.md"
((TARGET_READ_MODIFY_WRITE || optimize_insn_for_size_p ())
   && peep2_reg_dead_p (3, operands[0])
   && !reg_overlap_mentioned_p (operands[0], operands[1])
   && !reg_overlap_mentioned_p (operands[0], operands[2])))
                    {
                      *pmatch_len_ = 2;
                      res = gen_peephole2_98 (insn, operands);
                      if (res != NULL_RTX)
                        return res;
                    }
                  break;

                case 3:
                  if (
#line 9987 "../../gcc/config/i386/i386.md"
((TARGET_READ_MODIFY_WRITE || optimize_insn_for_size_p ())
   && peep2_reg_dead_p (3, operands[0])
   && !reg_overlap_mentioned_p (operands[0], operands[1])
   && !reg_overlap_mentioned_p (operands[0], operands[2])))
                    {
                      *pmatch_len_ = 2;
                      res = gen_peephole2_110 (insn, operands);
                      if (res != NULL_RTX)
                        return res;
                    }
                  break;

                case 4:
                  if (
#line 8818 "../../gcc/config/i386/i386.md"
((TARGET_READ_MODIFY_WRITE || optimize_insn_for_size_p ())
   && peep2_reg_dead_p (3, operands[0])
   && !reg_overlap_mentioned_p (operands[0], operands[1])
   && !reg_overlap_mentioned_p (operands[0], operands[2])))
                    {
                      *pmatch_len_ = 2;
                      res = gen_peephole2_78 (insn, operands);
                      if (res != NULL_RTX)
                        return res;
                    }
                  break;

                case 5:
                  if (
#line 8844 "../../gcc/config/i386/i386.md"
((TARGET_READ_MODIFY_WRITE || optimize_insn_for_size_p ())
   && peep2_reg_dead_p (3, operands[0])
   && peep2_reg_dead_p (4, operands[5])
   && !reg_overlap_mentioned_p (operands[0], operands[1])
   && !reg_overlap_mentioned_p (operands[0], operands[2])
   && !reg_overlap_mentioned_p (operands[5], operands[1])))
                    {
                      *pmatch_len_ = 3;
                      res = gen_peephole2_82 (insn, operands);
                      if (res != NULL_RTX)
                        return res;
                    }
                  break;

                case 6:
                  if (
#line 9302 "../../gcc/config/i386/i386.md"
((TARGET_READ_MODIFY_WRITE || optimize_insn_for_size_p ())
   && peep2_reg_dead_p (3, operands[0])
   && !reg_overlap_mentioned_p (operands[0], operands[1])
   && !reg_overlap_mentioned_p (operands[0], operands[2])))
                    {
                      *pmatch_len_ = 2;
                      res = gen_peephole2_92 (insn, operands);
                      if (res != NULL_RTX)
                        return res;
                    }
                  break;

                case 7:
                  if (
#line 9328 "../../gcc/config/i386/i386.md"
((TARGET_READ_MODIFY_WRITE || optimize_insn_for_size_p ())
   && peep2_reg_dead_p (3, operands[0])
   && peep2_reg_dead_p (4, operands[5])
   && !reg_overlap_mentioned_p (operands[0], operands[1])
   && !reg_overlap_mentioned_p (operands[0], operands[2])
   && !reg_overlap_mentioned_p (operands[5], operands[1])))
                    {
                      *pmatch_len_ = 3;
                      res = gen_peephole2_96 (insn, operands);
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
E_SImode) == 0
              && 
#line 14286 "../../gcc/config/i386/i386.md"
(REGNO (operands[0]) != REGNO (operands[2])
   && !reg_mentioned_p (operands[0], operands[1])
   && !reg_mentioned_p (operands[2], operands[1])))
            {
              *pmatch_len_ = 3;
              res = gen_peephole2_151 (insn, operands);
              if (res != NULL_RTX)
                return res;
            }
          if (general_reg_operand (operands[1], E_SImode))
            {
              x5 = XEXP (x4, 1);
              if (GET_CODE (x5) == NEG
                  && GET_MODE (x5) == E_SImode
                  && pattern1344 (x3) == 0)
                {
                  x6 = PATTERN (peep2_next_insn (2));
                  if (GET_CODE (x6) == SET
                      && pattern1345 (x6) == 0)
                    {
                      *pmatch_len_ = 2;
                      res = gen_peephole2_157 (insn, operands);
                      if (res != NULL_RTX)
                        return res;
                    }
                }
            }
        }
    }
  if (GET_CODE (x3) != SET)
    return NULL;
  if (register_operand (operands[1], E_SImode))
    {
      res = peephole2_11 (x1, insn, pmatch_len_);
      if (res != NULL_RTX)
        return res;
    }
  if (!immediate_operand (operands[1], E_SImode))
    return NULL;
  switch (pattern960 (x3, 
E_DImode, 
E_SImode))
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
#line 1235 "../../gcc/config/i386/i386.md"
(!TARGET_64BIT)))
        return NULL;
      *pmatch_len_ = 2;
      return gen_peephole2_114 (insn, operands);

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
#line 1235 "../../gcc/config/i386/i386.md"
(!TARGET_64BIT)))
        return NULL;
      *pmatch_len_ = 2;
      return gen_peephole2_116 (insn, operands);

    case 2:
      x6 = PATTERN (peep2_next_insn (2));
      x7 = XVECEXP (x6, 0, 1);
      x8 = XEXP (x7, 0);
      if (!rtx_equal_p (x8, operands[2]))
        return NULL;
      x9 = XVECEXP (x6, 0, 0);
      x10 = XEXP (x9, 1);
      switch (GET_CODE (x10))
        {
        case SMUL_HIGHPART:
          if (pattern1778 (x10) != 0
              || !
#line 11246 "../../gcc/config/i386/i386.md"
(REGNO (operands[3]) != AX_REG
   && REGNO (operands[0]) != REGNO (operands[2])
   && REGNO (operands[0]) != REGNO (operands[3])
   && (REGNO (operands[0]) == REGNO (operands[4])
       || peep2_reg_dead_p (3, operands[0]))))
            return NULL;
          *pmatch_len_ = 2;
          return gen_peephole2_118 (insn, operands);

        case UMUL_HIGHPART:
          if (pattern1778 (x10) != 0
              || !
#line 11246 "../../gcc/config/i386/i386.md"
(REGNO (operands[3]) != AX_REG
   && REGNO (operands[0]) != REGNO (operands[2])
   && REGNO (operands[0]) != REGNO (operands[3])
   && (REGNO (operands[0]) == REGNO (operands[4])
       || peep2_reg_dead_p (3, operands[0]))))
            return NULL;
          *pmatch_len_ = 2;
          return gen_peephole2_119 (insn, operands);

        case ZERO_EXTEND:
          if (GET_MODE (x10) != E_DImode
              || !general_reg_operand (operands[4], E_DImode))
            return NULL;
          x11 = XEXP (x10, 0);
          if (GET_MODE (x11) != E_SImode)
            return NULL;
          switch (GET_CODE (x11))
            {
            case SMUL_HIGHPART:
              x12 = XEXP (x11, 0);
              if (!rtx_equal_p (x12, operands[2]))
                return NULL;
              x13 = XEXP (x11, 1);
              if (!rtx_equal_p (x13, operands[0])
                  || !
#line 11267 "../../gcc/config/i386/i386.md"
(TARGET_64BIT
   && REGNO (operands[3]) != AX_REG
   && REGNO (operands[0]) != REGNO (operands[2])
   && REGNO (operands[2]) != REGNO (operands[3])
   && REGNO (operands[0]) != REGNO (operands[3])
   && (REGNO (operands[0]) == REGNO (operands[4])
       || peep2_reg_dead_p (3, operands[0]))))
                return NULL;
              *pmatch_len_ = 2;
              return gen_peephole2_122 (insn, operands);

            case UMUL_HIGHPART:
              x12 = XEXP (x11, 0);
              if (!rtx_equal_p (x12, operands[2]))
                return NULL;
              x13 = XEXP (x11, 1);
              if (!rtx_equal_p (x13, operands[0])
                  || !
#line 11267 "../../gcc/config/i386/i386.md"
(TARGET_64BIT
   && REGNO (operands[3]) != AX_REG
   && REGNO (operands[0]) != REGNO (operands[2])
   && REGNO (operands[2]) != REGNO (operands[3])
   && REGNO (operands[0]) != REGNO (operands[3])
   && (REGNO (operands[0]) == REGNO (operands[4])
       || peep2_reg_dead_p (3, operands[0]))))
                return NULL;
              *pmatch_len_ = 2;
              return gen_peephole2_123 (insn, operands);

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
peephole2_19 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pmatch_len_ ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12, x13, x14, x15, x16, x17;
  rtx x18, x19, x20;
  rtx_insn *res ATTRIBUTE_UNUSED;
  x2 = PATTERN (peep2_next_insn (1));
  if (GET_CODE (x2) != SET)
    return NULL;
  x3 = XEXP (x2, 1);
  if (!ix86_comparison_operator (x3, E_QImode))
    return NULL;
  x4 = XEXP (x3, 0);
  if (GET_CODE (x4) != REG
      || REGNO (x4) != 17)
    return NULL;
  x5 = XEXP (x3, 1);
  if (x5 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
    return NULL;
  x6 = XEXP (x2, 0);
  switch (GET_CODE (x6))
    {
    case REG:
    case SUBREG:
      operands[1] = x6;
      if (!register_operand (operands[1], E_QImode))
        return NULL;
      operands[2] = x3;
      x7 = PATTERN (peep2_next_insn (2));
      switch (GET_CODE (x7))
        {
        case SET:
          x8 = XEXP (x7, 1);
          if (GET_CODE (x8) != ZERO_EXTEND)
            return NULL;
          x9 = XEXP (x7, 0);
          operands[3] = x9;
          if (!any_QIreg_operand (operands[3], E_VOIDmode))
            return NULL;
          x10 = XEXP (x8, 0);
          if (!rtx_equal_p (x10, operands[1])
              || !
#line 19926 "../../gcc/config/i386/i386.md"
((peep2_reg_dead_p (3, operands[1])
    || operands_match_p (operands[1], operands[3]))
   && ! reg_overlap_mentioned_p (operands[3], operands[0])
   && peep2_regno_dead_p (0, FLAGS_REG)))
            return NULL;
          *pmatch_len_ = 2;
          return gen_peephole2_169 (insn, operands);

        case PARALLEL:
          if (XVECLEN (x7, 0) != 2)
            return NULL;
          x11 = XVECEXP (x7, 0, 0);
          if (GET_CODE (x11) != SET)
            return NULL;
          x12 = XEXP (x11, 1);
          if (GET_CODE (x12) != AND
              || GET_MODE (x12) != E_SImode)
            return NULL;
          x13 = XEXP (x12, 1);
          if (GET_CODE (x13) != CONST_INT
              || XWINT (x13, 0) != 255L
              || pattern1726 (x7, 
E_SImode) != 0)
            return NULL;
          x14 = XEXP (x12, 0);
          if (!rtx_equal_p (x14, operands[3])
              || !
#line 19998 "../../gcc/config/i386/i386.md"
(REGNO (operands[1]) == REGNO (operands[3])
   && ! reg_overlap_mentioned_p (operands[3], operands[0])
   && peep2_regno_dead_p (0, FLAGS_REG)))
            return NULL;
          *pmatch_len_ = 2;
          return gen_peephole2_172 (insn, operands);

        default:
          return NULL;
        }

    case STRICT_LOW_PART:
      if (peep2_current_count < 4)
        return NULL;
      x15 = XEXP (x6, 0);
      operands[5] = x15;
      if (!register_operand (operands[5], E_QImode))
        return NULL;
      operands[6] = x3;
      x7 = PATTERN (peep2_next_insn (2));
      if (GET_CODE (x7) != SET)
        return NULL;
      x8 = XEXP (x7, 1);
      if (!ix86_comparison_operator (x8, E_QImode))
        return NULL;
      operands[2] = x8;
      x10 = XEXP (x8, 0);
      if (GET_CODE (x10) != REG
          || REGNO (x10) != 17)
        return NULL;
      x16 = XEXP (x8, 1);
      if (x16 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
        return NULL;
      x9 = XEXP (x7, 0);
      operands[1] = x9;
      if (!register_operand (operands[1], E_QImode))
        return NULL;
      x17 = PATTERN (peep2_next_insn (3));
      if (GET_CODE (x17) != SET)
        return NULL;
      x18 = XEXP (x17, 1);
      if (GET_CODE (x18) != ZERO_EXTEND)
        return NULL;
      x19 = XEXP (x17, 0);
      operands[3] = x19;
      if (!any_QIreg_operand (operands[3], E_VOIDmode))
        return NULL;
      x20 = XEXP (x18, 0);
      if (!rtx_equal_p (x20, operands[1])
          || !
#line 20071 "../../gcc/config/i386/i386.md"
((peep2_reg_dead_p (4, operands[1])
    || operands_match_p (operands[1], operands[3]))
   && ! reg_overlap_mentioned_p (operands[3], operands[0])
   && ! reg_overlap_mentioned_p (operands[3], operands[5])
   && ! reg_overlap_mentioned_p (operands[1], operands[5])
   && peep2_regno_dead_p (0, FLAGS_REG)))
        return NULL;
      *pmatch_len_ = 3;
      return gen_peephole2_175 (insn, operands);

    default:
      return NULL;
    }
}

 rtx_insn *
peephole2_23 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pmatch_len_ ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12;
  rtx_insn *res ATTRIBUTE_UNUSED;
  x2 = PATTERN (peep2_next_insn (1));
  if (pattern413 (x2, 
CALL, 
2) != 0)
    return NULL;
  x3 = XVECEXP (x2, 0, 0);
  x4 = XEXP (x3, 1);
  x5 = XEXP (x4, 0);
  if (GET_CODE (x5) != MEM
      || GET_MODE (x5) != E_QImode)
    return NULL;
  x6 = XVECEXP (x2, 0, 1);
  if (pattern1257 (x6) != 0)
    return NULL;
  x7 = XEXP (x6, 0);
  if (GET_CODE (x7) != REG
      || REGNO (x7) != 7
      || GET_MODE (x7) != E_SImode)
    return NULL;
  x8 = XEXP (x3, 0);
  operands[2] = x8;
  x9 = XEXP (x4, 1);
  operands[3] = x9;
  x10 = XEXP (x6, 1);
  x11 = XEXP (x10, 1);
  operands[4] = x11;
  if (!immediate_operand (operands[4], E_SImode))
    return NULL;
  x12 = XEXP (x5, 0);
  if (!rtx_equal_p (x12, operands[0])
      || !
#line 20476 "../../gcc/config/i386/i386.md"
(!TARGET_64BIT && SIBLING_CALL_P (peep2_next_insn (1))
   && !reg_mentioned_p (operands[0],
			CALL_INSN_FUNCTION_USAGE (peep2_next_insn (1)))))
    return NULL;
  *pmatch_len_ = 1;
  return gen_peephole2_188 (insn, operands);
}

 rtx_insn *
peephole2_25 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pmatch_len_ ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12;
  rtx_insn *res ATTRIBUTE_UNUSED;
  if (!memory_operand (operands[1], E_SImode)
      || !register_operand (operands[0], E_SImode))
    return NULL;
  x2 = PATTERN (peep2_next_insn (1));
  switch (GET_CODE (x2))
    {
    case PARALLEL:
      if (pattern842 (x2) != 0)
        return NULL;
      x3 = XVECEXP (x2, 0, 0);
      x4 = XEXP (x3, 1);
      switch (GET_CODE (x4))
        {
        case PLUS:
        case MINUS:
        case AND:
        case IOR:
        case XOR:
          if (peep2_current_count < 4)
            return NULL;
          operands[3] = x4;
          if (!plusminuslogic_operator (operands[3], E_SImode))
            return NULL;
          x5 = XVECEXP (x2, 0, 1);
          if (GET_CODE (x5) != CLOBBER)
            return NULL;
          x6 = XEXP (x5, 0);
          if (GET_CODE (x6) != REG
              || REGNO (x6) != 17
              || GET_MODE (x6) != E_CCmode)
            return NULL;
          x7 = XEXP (x4, 1);
          operands[2] = x7;
          if (!x86_64_nonmemory_operand (operands[2], E_SImode))
            return NULL;
          x8 = XEXP (x4, 0);
          if (!rtx_equal_p (x8, operands[0]))
            return NULL;
          x9 = XEXP (x3, 0);
          if (!rtx_equal_p (x9, operands[0]))
            return NULL;
          x10 = PATTERN (peep2_next_insn (3));
          if (GET_CODE (x10) != SET)
            return NULL;
          x11 = PATTERN (peep2_next_insn (2));
          x12 = XEXP (x11, 0);
          if (rtx_equal_p (x12, operands[1])
              && pattern1798 (x10) == 0
              && 
#line 27930 "../../gcc/config/i386/i386.md"
((TARGET_READ_MODIFY_WRITE || optimize_insn_for_size_p ())
   && peep2_reg_dead_p (4, operands[0])
   && !reg_overlap_mentioned_p (operands[0], operands[1])
   && !reg_overlap_mentioned_p (operands[0], operands[2])
   && (SImode != QImode
       || immediate_operand (operands[2], QImode)
       || any_QIreg_operand (operands[2], QImode))
   && ix86_match_ccmode (peep2_next_insn (3),
			 (GET_CODE (operands[3]) == PLUS
			  || GET_CODE (operands[3]) == MINUS)
			 ? CCGOCmode : CCNOmode)))
            {
              *pmatch_len_ = 3;
              res = gen_peephole2_295 (insn, operands);
              if (res != NULL_RTX)
                return res;
            }
          if (peep2_current_count < 5
              || pattern1799 (x12, 
E_SImode) != 0
              || !
#line 28128 "../../gcc/config/i386/i386.md"
((TARGET_READ_MODIFY_WRITE || optimize_insn_for_size_p ())
   && peep2_reg_dead_p (3, operands[0])
   && peep2_reg_dead_p (5, operands[4])
   && !reg_overlap_mentioned_p (operands[0], operands[1])
   && !reg_overlap_mentioned_p (operands[0], operands[2])
   && !reg_overlap_mentioned_p (operands[4], operands[1])
   && (SImode != QImode
       || immediate_operand (operands[2], QImode)
       || any_QIreg_operand (operands[2], QImode))
   && ix86_match_ccmode (peep2_next_insn (4),
			 (GET_CODE (operands[3]) == PLUS
			  || GET_CODE (operands[3]) == MINUS)
			 ? CCGOCmode : CCNOmode)))
            return NULL;
          *pmatch_len_ = 4;
          return gen_peephole2_317 (insn, operands);

        case COMPARE:
          if (pattern1258 (x2, 
E_SImode) != 0)
            return NULL;
          x11 = PATTERN (peep2_next_insn (2));
          x12 = XEXP (x11, 0);
          if (rtx_equal_p (x12, operands[1])
              && 
#line 27966 "../../gcc/config/i386/i386.md"
((TARGET_READ_MODIFY_WRITE || optimize_insn_for_size_p ())
   && peep2_reg_dead_p (3, operands[0])
   && !reg_overlap_mentioned_p (operands[0], operands[1])
   && !reg_overlap_mentioned_p (operands[0], operands[2])
   && ix86_match_ccmode (peep2_next_insn (1),
			 (GET_CODE (operands[3]) == PLUS
			  || GET_CODE (operands[3]) == MINUS)
			 ? CCGOCmode : CCNOmode)))
            {
              *pmatch_len_ = 2;
              res = gen_peephole2_299 (insn, operands);
              if (res != NULL_RTX)
                return res;
            }
          if (peep2_current_count < 4
              || pattern1800 (x12, 
E_SImode) != 0
              || !
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
			 ? CCGOCmode : CCNOmode)))
            return NULL;
          *pmatch_len_ = 3;
          return gen_peephole2_323 (insn, operands);

        default:
          return NULL;
        }

    case SET:
      if (pattern843 (x2, 
E_SImode) != 0
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
   && (SImode != QImode
       || immediate_operand (operands[2], QImode)
       || any_QIreg_operand (operands[2], QImode))))
        return NULL;
      *pmatch_len_ = 4;
      return gen_peephole2_327 (insn, operands);

    default:
      return NULL;
    }
}

 rtx_insn *
peephole2_34 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pmatch_len_ ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12, x13, x14, x15, x16, x17;
  rtx x18;
  rtx_insn *res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  operands[1] = x2;
  if (!general_operand (operands[1], E_QImode))
    return NULL;
  x3 = PATTERN (peep2_next_insn (1));
  x4 = XVECEXP (x3, 0, 1);
  if (GET_CODE (x4) != SET)
    return NULL;
  x5 = XEXP (x4, 1);
  if (GET_CODE (x5) != UNSPEC_VOLATILE
      || XVECLEN (x5, 0) != 1
      || XINT (x5, 1) != 109
      || GET_MODE (x5) != E_QImode)
    return NULL;
  x6 = XVECEXP (x5, 0, 0);
  if (x6 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
    return NULL;
  x7 = XVECEXP (x3, 0, 2);
  if (GET_CODE (x7) != SET)
    return NULL;
  x8 = XEXP (x7, 1);
  if (GET_CODE (x8) != UNSPEC_VOLATILE
      || XVECLEN (x8, 0) != 1
      || XINT (x8, 1) != 109
      || GET_MODE (x8) != E_CCZmode)
    return NULL;
  x9 = XVECEXP (x8, 0, 0);
  if (x9 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
    return NULL;
  x10 = XEXP (x7, 0);
  if (GET_CODE (x10) != REG
      || REGNO (x10) != 17
      || GET_MODE (x10) != E_CCZmode)
    return NULL;
  x11 = XVECEXP (x3, 0, 0);
  x12 = XEXP (x11, 1);
  x13 = XVECEXP (x12, 0, 0);
  operands[2] = x13;
  if (!memory_operand (operands[2], E_QImode))
    return NULL;
  x14 = XVECEXP (x12, 0, 2);
  operands[3] = x14;
  if (!register_operand (operands[3], E_QImode)
      || pattern1689 (x3) != 0)
    return NULL;
  x15 = PATTERN (peep2_next_insn (2));
  if (pattern1536 (x15) != 0)
    return NULL;
  x16 = XEXP (x15, 1);
  x17 = XEXP (x16, 0);
  operands[5] = x17;
  if (!register_operand (operands[5], E_QImode))
    return NULL;
  x18 = XEXP (x16, 1);
  operands[6] = x18;
  if (!general_operand (operands[6], E_QImode)
      || !
#line 521 "../../gcc/config/i386/sync.md"
((rtx_equal_p (operands[0], operands[5])
    && rtx_equal_p (operands[1], operands[6]))
   || (rtx_equal_p (operands[0], operands[6])
       && rtx_equal_p (operands[1], operands[5]))))
    return NULL;
  *pmatch_len_ = 2;
  return gen_peephole2_403 (insn, operands);
}

 rtx_insn *
peephole2_41 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pmatch_len_ ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12, x13, x14, x15, x16, x17;
  rtx x18, x19, x20;
  rtx_insn *res ATTRIBUTE_UNUSED;
  if (peep2_current_count < 2)
    return NULL;
  x2 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x2) != CLOBBER)
    return NULL;
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) != REG
      || REGNO (x3) != 17)
    return NULL;
  x4 = XVECEXP (x1, 0, 0);
  x5 = XEXP (x4, 0);
  operands[0] = x5;
  x6 = XEXP (x4, 1);
  x7 = XEXP (x6, 0);
  if (!rtx_equal_p (x7, operands[0]))
    return NULL;
  x8 = XEXP (x6, 1);
  switch (GET_CODE (x8))
    {
    case REG:
    case SUBREG:
      operands[1] = x8;
      if (!register_operand (operands[1], E_VOIDmode)
          || GET_MODE (x3) != E_CCmode)
        return NULL;
      x9 = PATTERN (peep2_next_insn (1));
      if (pattern413 (x9, 
PLUS, 
2) != 0)
        return NULL;
      x10 = XVECEXP (x9, 0, 1);
      if (GET_CODE (x10) != CLOBBER)
        return NULL;
      x11 = XEXP (x10, 0);
      if (GET_CODE (x11) != REG
          || REGNO (x11) != 17
          || GET_MODE (x11) != E_CCmode)
        return NULL;
      x12 = XVECEXP (x9, 0, 0);
      x13 = XEXP (x12, 1);
      x14 = XEXP (x13, 1);
      operands[2] = x14;
      if (!x86_64_immediate_operand (operands[2], E_VOIDmode))
        return NULL;
      x15 = XEXP (x13, 0);
      if (!rtx_equal_p (x15, operands[0]))
        return NULL;
      x16 = XEXP (x12, 0);
      if (!rtx_equal_p (x16, operands[0]))
        return NULL;
      switch (GET_MODE (operands[0]))
        {
        case E_SImode:
          if (!register_operand (operands[0], E_SImode)
              || GET_MODE (x6) != E_SImode
              || GET_MODE (x13) != E_SImode
              || !
#line 6442 "../../gcc/config/i386/i386.md"
(!TARGET_AVOID_LEA_FOR_ADDR || optimize_function_for_size_p (cfun)))
            return NULL;
          *pmatch_len_ = 1;
          return gen_peephole2_62 (insn, operands);

        case E_DImode:
          if (!register_operand (operands[0], E_DImode)
              || GET_MODE (x6) != E_DImode
              || GET_MODE (x13) != E_DImode
              || !(
#line 6442 "../../gcc/config/i386/i386.md"
(!TARGET_AVOID_LEA_FOR_ADDR || optimize_function_for_size_p (cfun)) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return NULL;
          *pmatch_len_ = 1;
          return gen_peephole2_63 (insn, operands);

        default:
          return NULL;
        }

    case CONST_INT:
      if (peep2_current_count < 3
          || XWINT (x8, 0) != -1L)
        return NULL;
      x9 = PATTERN (peep2_next_insn (1));
      if (pattern1256 (x9, 
-1) != 0)
        return NULL;
      x17 = PATTERN (peep2_next_insn (2));
      x18 = XEXP (x17, 1);
      x19 = XEXP (x18, 0);
      operands[1] = x19;
      if (pattern1777 (x17) != 0)
        return NULL;
      x20 = XEXP (x18, 1);
      operands[2] = x20;
      switch (GET_MODE (operands[0]))
        {
        case E_QImode:
          if (!general_reg_operand (operands[0], E_QImode)
              || GET_MODE (x6) != E_QImode
              || !
#line 8725 "../../gcc/config/i386/i386.md"
(peep2_regno_dead_p (3, FLAGS_REG)))
            return NULL;
          *pmatch_len_ = 2;
          return gen_peephole2_72 (insn, operands);

        case E_HImode:
          if (!general_reg_operand (operands[0], E_HImode)
              || GET_MODE (x6) != E_HImode
              || !
#line 8725 "../../gcc/config/i386/i386.md"
(peep2_regno_dead_p (3, FLAGS_REG)))
            return NULL;
          *pmatch_len_ = 2;
          return gen_peephole2_73 (insn, operands);

        case E_SImode:
          if (!general_reg_operand (operands[0], E_SImode)
              || GET_MODE (x6) != E_SImode
              || !
#line 8725 "../../gcc/config/i386/i386.md"
(peep2_regno_dead_p (3, FLAGS_REG)))
            return NULL;
          *pmatch_len_ = 2;
          return gen_peephole2_74 (insn, operands);

        case E_DImode:
          if (!general_reg_operand (operands[0], E_DImode)
              || GET_MODE (x6) != E_DImode
              || !(
#line 8725 "../../gcc/config/i386/i386.md"
(peep2_regno_dead_p (3, FLAGS_REG)) && 
#line 1161 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return NULL;
          *pmatch_len_ = 2;
          return gen_peephole2_75 (insn, operands);

        default:
          return NULL;
        }

    default:
      return NULL;
    }
}

 rtx_insn *
peephole2_46 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pmatch_len_ ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12, x13, x14, x15, x16, x17;
  rtx_insn *res ATTRIBUTE_UNUSED;
  if (peep2_current_count < 3)
    return NULL;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 0);
  operands[5] = x3;
  if (!flags_reg_operand (operands[5], E_VOIDmode))
    return NULL;
  x4 = XEXP (x2, 1);
  operands[0] = x4;
  x5 = XVECEXP (x1, 0, 1);
  operands[4] = x5;
  x6 = PATTERN (peep2_next_insn (1));
  if (GET_CODE (x6) != SET)
    return NULL;
  x7 = XEXP (x6, 1);
  if (!ix86_comparison_operator (x7, E_QImode))
    return NULL;
  operands[2] = x7;
  x8 = XEXP (x7, 0);
  if (GET_CODE (x8) != REG
      || REGNO (x8) != 17)
    return NULL;
  x9 = XEXP (x7, 1);
  if (x9 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
    return NULL;
  x10 = XEXP (x6, 0);
  operands[1] = x10;
  if (!register_operand (operands[1], E_QImode))
    return NULL;
  x11 = PATTERN (peep2_next_insn (2));
  switch (GET_CODE (x11))
    {
    case SET:
      x12 = XEXP (x11, 1);
      if (GET_CODE (x12) != ZERO_EXTEND)
        return NULL;
      x13 = XEXP (x11, 0);
      operands[3] = x13;
      if (!any_QIreg_operand (operands[3], E_VOIDmode))
        return NULL;
      x14 = XEXP (x12, 0);
      if (!rtx_equal_p (x14, operands[1])
          || !
#line 19946 "../../gcc/config/i386/i386.md"
((peep2_reg_dead_p (3, operands[1])
    || operands_match_p (operands[1], operands[3]))
   && ! reg_overlap_mentioned_p (operands[3], operands[0])
   && ! reg_overlap_mentioned_p (operands[3], operands[4])
   && ! reg_set_p (operands[3], operands[4])
   && peep2_regno_dead_p (0, FLAGS_REG)))
        return NULL;
      *pmatch_len_ = 2;
      return gen_peephole2_170 (insn, operands);

    case PARALLEL:
      if (XVECLEN (x11, 0) != 2)
        return NULL;
      x15 = XVECEXP (x11, 0, 0);
      if (GET_CODE (x15) != SET)
        return NULL;
      x16 = XEXP (x15, 1);
      if (GET_CODE (x16) != ZERO_EXTEND
          || pattern1726 (x11, 
E_VOIDmode) != 0)
        return NULL;
      x17 = XEXP (x16, 0);
      if (!rtx_equal_p (x17, operands[1])
          || !
#line 20018 "../../gcc/config/i386/i386.md"
((peep2_reg_dead_p (3, operands[1])
    || operands_match_p (operands[1], operands[3]))
   && ! reg_overlap_mentioned_p (operands[3], operands[0])
   && ! reg_overlap_mentioned_p (operands[3], operands[4])
   && ! reg_set_p (operands[3], operands[4])
   && peep2_regno_dead_p (0, FLAGS_REG)))
        return NULL;
      *pmatch_len_ = 2;
      return gen_peephole2_173 (insn, operands);

    default:
      return NULL;
    }
}

 rtx_insn *
peephole2_49 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pmatch_len_ ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12, x13, x14, x15, x16, x17;
  rtx x18, x19;
  rtx_insn *res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  if (GET_CODE (x2) != SET)
    return NULL;
  x3 = XEXP (x2, 1);
  switch (GET_CODE (x3))
    {
    case REG:
      res = peephole2_38 (x1, insn, pmatch_len_);
      if (res != NULL_RTX)
        return res;
      break;

    case CONST_INT:
      res = peephole2_40 (x1, insn, pmatch_len_);
      if (res != NULL_RTX)
        return res;
      break;

    case PLUS:
      res = peephole2_41 (x1, insn, pmatch_len_);
      if (res != NULL_RTX)
        return res;
      break;

    case COMPARE:
      res = peephole2_43 (x1, insn, pmatch_len_);
      if (res != NULL_RTX)
        return res;
      break;

    case MULT:
      res = peephole2_44 (x1, insn, pmatch_len_);
      if (res != NULL_RTX)
        return res;
      break;

    case ASHIFT:
      if (pattern240 (x1) == 0)
        {
          x4 = XEXP (x3, 1);
          operands[2] = x4;
          if (nonmemory_operand (operands[2], E_QImode))
            {
              switch (GET_MODE (operands[0]))
                {
                case E_DImode:
                  if (register_operand (operands[0], E_DImode)
                      && GET_MODE (x3) == E_DImode
                      && nonmemory_operand (operands[1], E_DImode)
                      && (
#line 15347 "../../gcc/config/i386/i386.md"
(TARGET_CMOVE) && 
#line 1235 "../../gcc/config/i386/i386.md"
(!TARGET_64BIT)))
                    {
                      *pmatch_len_ = 0;
                      res = gen_peephole2_159 (insn, operands);
                      if (res != NULL_RTX)
                        return res;
                    }
                  break;

                case E_TImode:
                  if (register_operand (operands[0], E_TImode)
                      && GET_MODE (x3) == E_TImode
                      && nonmemory_operand (operands[1], E_TImode)
                      && (
#line 15347 "../../gcc/config/i386/i386.md"
(TARGET_CMOVE) && 
#line 1236 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                    {
                      *pmatch_len_ = 0;
                      res = gen_peephole2_160 (insn, operands);
                      if (res != NULL_RTX)
                        return res;
                    }
                  break;

                default:
                  break;
                }
            }
        }
      break;

    case LSHIFTRT:
      switch (pattern242 (x1))
        {
        case 0:
          if ((
#line 16719 "../../gcc/config/i386/i386.md"
(TARGET_CMOVE) && 
#line 1235 "../../gcc/config/i386/i386.md"
(!TARGET_64BIT)))
            {
              *pmatch_len_ = 0;
              res = gen_peephole2_161 (insn, operands);
              if (res != NULL_RTX)
                return res;
            }
          break;

        case 1:
          if ((
#line 16719 "../../gcc/config/i386/i386.md"
(TARGET_CMOVE) && 
#line 1236 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
            {
              *pmatch_len_ = 0;
              res = gen_peephole2_163 (insn, operands);
              if (res != NULL_RTX)
                return res;
            }
          break;

        default:
          break;
        }
      break;

    case ASHIFTRT:
      switch (pattern242 (x1))
        {
        case 0:
          if ((
#line 16719 "../../gcc/config/i386/i386.md"
(TARGET_CMOVE) && 
#line 1235 "../../gcc/config/i386/i386.md"
(!TARGET_64BIT)))
            {
              *pmatch_len_ = 0;
              res = gen_peephole2_162 (insn, operands);
              if (res != NULL_RTX)
                return res;
            }
          break;

        case 1:
          if ((
#line 16719 "../../gcc/config/i386/i386.md"
(TARGET_CMOVE) && 
#line 1236 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
            {
              *pmatch_len_ = 0;
              res = gen_peephole2_164 (insn, operands);
              if (res != NULL_RTX)
                return res;
            }
          break;

        default:
          break;
        }
      break;

    case NOT:
      if (GET_MODE (x3) == E_DImode)
        {
          x5 = XEXP (x3, 0);
          if (GET_CODE (x5) == ZERO_EXTRACT
              && pattern372 (x1) == 0)
            {
              x6 = XEXP (x5, 0);
              if (rtx_equal_p (x6, operands[0]))
                {
                  x7 = XEXP (x5, 2);
                  if (rtx_equal_p (x7, operands[1])
                      && 
#line 19106 "../../gcc/config/i386/i386.md"
(TARGET_64BIT && !TARGET_USE_BT))
                    {
                      *pmatch_len_ = 0;
                      res = gen_peephole2_167 (insn, operands);
                      if (res != NULL_RTX)
                        return res;
                    }
                }
            }
        }
      break;

    case POPCOUNT:
      res = peephole2_45 (x1, insn, pmatch_len_);
      if (res != NULL_RTX)
        return res;
      break;

    default:
      break;
    }
  if (peep2_current_count >= 2)
    {
      res = peephole2_46 (x1, insn, pmatch_len_);
      if (res != NULL_RTX)
        return res;
    }
  x8 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x8) != CLOBBER)
    return NULL;
  x9 = XEXP (x8, 0);
  if (GET_CODE (x9) != REG
      || REGNO (x9) != 17
      || GET_MODE (x9) != E_CCmode)
    return NULL;
  switch (GET_CODE (x3))
    {
    case COMPARE:
    case PLUS:
    case MINUS:
    case MULT:
    case DIV:
    case MOD:
    case UDIV:
    case UMOD:
    case AND:
    case IOR:
    case XOR:
    case ASHIFT:
    case ROTATE:
    case ASHIFTRT:
    case LSHIFTRT:
    case ROTATERT:
    case SMIN:
    case SMAX:
    case UMIN:
    case UMAX:
      operands[3] = x3;
      res = peephole2_47 (x1, insn, pmatch_len_);
      if (res != NULL_RTX)
        return res;
      switch (GET_CODE (x3))
        {
        case PLUS:
        case MINUS:
        case AND:
        case IOR:
        case XOR:
          if (peep2_current_count >= 2)
            {
              res = peephole2_48 (x1, insn, pmatch_len_);
              if (res != NULL_RTX)
                return res;
            }
          if (GET_CODE (x3) != PLUS
              || pattern414 (x2) != 0)
            return NULL;
          switch (pattern1449 (x2))
            {
            case 0:
              if ((
#line 28493 "../../gcc/config/i386/i386.md"
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
                  res = gen_peephole2_355 (insn, operands);
                  if (res != NULL_RTX)
                    return res;
                }
              if ((
#line 28493 "../../gcc/config/i386/i386.md"
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
                  res = gen_peephole2_356 (insn, operands);
                  if (res != NULL_RTX)
                    return res;
                }
              if ((
#line 28505 "../../gcc/config/i386/i386.md"
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
                  res = gen_peephole2_359 (insn, operands);
                  if (res != NULL_RTX)
                    return res;
                }
              if ((
#line 28505 "../../gcc/config/i386/i386.md"
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
                  res = gen_peephole2_360 (insn, operands);
                  if (res != NULL_RTX)
                    return res;
                }
              if ((
#line 28561 "../../gcc/config/i386/i386.md"
(INTVAL (operands[0]) == GET_MODE_SIZE (word_mode)) && (((((((
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
                  res = gen_peephole2_375 (insn, operands);
                  if (res != NULL_RTX)
                    return res;
                }
              if ((
#line 28561 "../../gcc/config/i386/i386.md"
(INTVAL (operands[0]) == GET_MODE_SIZE (word_mode)) && (((((((
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
                  res = gen_peephole2_376 (insn, operands);
                  if (res != NULL_RTX)
                    return res;
                }
              if ((
#line 28573 "../../gcc/config/i386/i386.md"
(INTVAL (operands[0]) == 2*GET_MODE_SIZE (word_mode)) && ((((((((((
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
                  res = gen_peephole2_379 (insn, operands);
                  if (res != NULL_RTX)
                    return res;
                }
              if ((
#line 28573 "../../gcc/config/i386/i386.md"
(INTVAL (operands[0]) == 2*GET_MODE_SIZE (word_mode)) && ((((((((((
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
                  res = gen_peephole2_380 (insn, operands);
                  if (res != NULL_RTX)
                    return res;
                }
              if ((
#line 28583 "../../gcc/config/i386/i386.md"
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
                  res = gen_peephole2_383 (insn, operands);
                  if (res != NULL_RTX)
                    return res;
                }
              if (!(
#line 28583 "../../gcc/config/i386/i386.md"
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
              return gen_peephole2_384 (insn, operands);

            case 1:
              if ((
#line 28493 "../../gcc/config/i386/i386.md"
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
                  res = gen_peephole2_357 (insn, operands);
                  if (res != NULL_RTX)
                    return res;
                }
              if ((
#line 28493 "../../gcc/config/i386/i386.md"
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
                  res = gen_peephole2_358 (insn, operands);
                  if (res != NULL_RTX)
                    return res;
                }
              if ((
#line 28505 "../../gcc/config/i386/i386.md"
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
                  res = gen_peephole2_361 (insn, operands);
                  if (res != NULL_RTX)
                    return res;
                }
              if ((
#line 28505 "../../gcc/config/i386/i386.md"
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
                  res = gen_peephole2_362 (insn, operands);
                  if (res != NULL_RTX)
                    return res;
                }
              if ((
#line 28561 "../../gcc/config/i386/i386.md"
(INTVAL (operands[0]) == GET_MODE_SIZE (word_mode)) && (((((((
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
                  res = gen_peephole2_377 (insn, operands);
                  if (res != NULL_RTX)
                    return res;
                }
              if ((
#line 28561 "../../gcc/config/i386/i386.md"
(INTVAL (operands[0]) == GET_MODE_SIZE (word_mode)) && (((((((
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
                  res = gen_peephole2_378 (insn, operands);
                  if (res != NULL_RTX)
                    return res;
                }
              if ((
#line 28573 "../../gcc/config/i386/i386.md"
(INTVAL (operands[0]) == 2*GET_MODE_SIZE (word_mode)) && ((((((((((
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
                  res = gen_peephole2_381 (insn, operands);
                  if (res != NULL_RTX)
                    return res;
                }
              if ((
#line 28573 "../../gcc/config/i386/i386.md"
(INTVAL (operands[0]) == 2*GET_MODE_SIZE (word_mode)) && ((((((((((
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
                  res = gen_peephole2_382 (insn, operands);
                  if (res != NULL_RTX)
                    return res;
                }
              if ((
#line 28583 "../../gcc/config/i386/i386.md"
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
                  res = gen_peephole2_385 (insn, operands);
                  if (res != NULL_RTX)
                    return res;
                }
              if (!(
#line 28583 "../../gcc/config/i386/i386.md"
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
              return gen_peephole2_386 (insn, operands);

            default:
              return NULL;
            }

        case MULT:
          x10 = XEXP (x2, 0);
          operands[0] = x10;
          x5 = XEXP (x3, 0);
          operands[1] = x5;
          x4 = XEXP (x3, 1);
          operands[2] = x4;
          switch (GET_MODE (operands[0]))
            {
            case E_SImode:
              if (!register_operand (operands[0], E_SImode)
                  || GET_MODE (x3) != E_SImode)
                return NULL;
              if (const359_operand (operands[2], E_SImode))
                {
                  if (register_operand (operands[1], E_SImode))
                    {
                      *pmatch_len_ = 0;
                      res = gen_peephole2_388 (insn, operands);
                      if (res != NULL_RTX)
                        return res;
                    }
                  if (nonimmediate_operand (operands[1], E_SImode)
                      && 
#line 28626 "../../gcc/config/i386/i386.md"
(optimize_insn_for_speed_p ()
   && (!TARGET_PARTIAL_REG_STALL || SImode == SImode)))
                    {
                      *pmatch_len_ = 0;
                      res = gen_peephole2_390 (insn, operands);
                      if (res != NULL_RTX)
                        return res;
                    }
                }
              if (memory_operand (operands[1], E_SImode)
                  && immediate_operand (operands[2], E_SImode)
                  && 
#line 28642 "../../gcc/config/i386/i386.md"
(TARGET_SLOW_IMUL_IMM32_MEM && optimize_insn_for_speed_p ()
   && !satisfies_constraint_K (operands[2])))
                {
                  *pmatch_len_ = 0;
                  res = gen_peephole2_392 (insn, operands);
                  if (res != NULL_RTX)
                    return res;
                }
              if (!nonimmediate_operand (operands[1], E_SImode)
                  || !const_int_operand (operands[2], E_SImode)
                  || !
#line 28674 "../../gcc/config/i386/i386.md"
(TARGET_SLOW_IMUL_IMM8 && optimize_insn_for_speed_p ()
   && satisfies_constraint_K (operands[2])))
                return NULL;
              *pmatch_len_ = 0;
              return gen_peephole2_396 (insn, operands);

            case E_DImode:
              if (!register_operand (operands[0], E_DImode)
                  || GET_MODE (x3) != E_DImode)
                return NULL;
              if (const359_operand (operands[2], E_DImode))
                {
                  if (register_operand (operands[1], E_DImode)
                      && (
#line 28612 "../../gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL
   || DImode == SImode
   || optimize_function_for_size_p (cfun)) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                    {
                      *pmatch_len_ = 0;
                      res = gen_peephole2_389 (insn, operands);
                      if (res != NULL_RTX)
                        return res;
                    }
                  if (nonimmediate_operand (operands[1], E_DImode)
                      && (
#line 28626 "../../gcc/config/i386/i386.md"
(optimize_insn_for_speed_p ()
   && (!TARGET_PARTIAL_REG_STALL || DImode == SImode)) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                    {
                      *pmatch_len_ = 0;
                      res = gen_peephole2_391 (insn, operands);
                      if (res != NULL_RTX)
                        return res;
                    }
                }
              if (memory_operand (operands[1], E_DImode)
                  && immediate_operand (operands[2], E_DImode)
                  && (
#line 28642 "../../gcc/config/i386/i386.md"
(TARGET_SLOW_IMUL_IMM32_MEM && optimize_insn_for_speed_p ()
   && !satisfies_constraint_K (operands[2])) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                {
                  *pmatch_len_ = 0;
                  res = gen_peephole2_393 (insn, operands);
                  if (res != NULL_RTX)
                    return res;
                }
              if (!nonimmediate_operand (operands[1], E_DImode)
                  || !const_int_operand (operands[2], E_DImode)
                  || !(
#line 28674 "../../gcc/config/i386/i386.md"
(TARGET_SLOW_IMUL_IMM8 && optimize_insn_for_speed_p ()
   && satisfies_constraint_K (operands[2])) && 
#line 1164 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return NULL;
              *pmatch_len_ = 0;
              return gen_peephole2_397 (insn, operands);

            case E_HImode:
              if (pattern1351 (x3, 
E_HImode) != 0
                  || !
#line 28674 "../../gcc/config/i386/i386.md"
(TARGET_SLOW_IMUL_IMM8 && optimize_insn_for_speed_p ()
   && satisfies_constraint_K (operands[2])))
                return NULL;
              *pmatch_len_ = 0;
              return gen_peephole2_395 (insn, operands);

            default:
              return NULL;
            }

        case ASHIFT:
          if (peep2_current_count < 2)
            return NULL;
          x10 = XEXP (x2, 0);
          operands[0] = x10;
          if (!register_operand (operands[0], E_VOIDmode))
            return NULL;
          x5 = XEXP (x3, 0);
          operands[1] = x5;
          if (!register_operand (operands[1], E_VOIDmode))
            return NULL;
          x4 = XEXP (x3, 1);
          operands[2] = x4;
          if (!const_int_operand (operands[2], E_VOIDmode))
            return NULL;
          x11 = PATTERN (peep2_next_insn (1));
          if (pattern413 (x11, 
PLUS, 
2) != 0)
            return NULL;
          x12 = XVECEXP (x11, 0, 1);
          if (GET_CODE (x12) != CLOBBER)
            return NULL;
          x13 = XEXP (x12, 0);
          if (GET_CODE (x13) != REG
              || REGNO (x13) != 17
              || GET_MODE (x13) != E_CCmode)
            return NULL;
          x14 = XVECEXP (x11, 0, 0);
          x15 = XEXP (x14, 0);
          operands[3] = x15;
          if (!register_operand (operands[3], E_VOIDmode))
            return NULL;
          x16 = XEXP (x14, 1);
          x17 = XEXP (x16, 1);
          operands[4] = x17;
          if (!x86_64_general_operand (operands[4], E_VOIDmode))
            return NULL;
          x18 = XEXP (x16, 0);
          if (!rtx_equal_p (x18, operands[0]))
            return NULL;
          if ((
#line 28706 "../../gcc/config/i386/i386.md"
(IN_RANGE (INTVAL (operands[2]), 1, 3)
   /* Validate MODE for lea.  */
   && ((!TARGET_PARTIAL_REG_STALL
	&& (GET_MODE (operands[0]) == QImode
	    || GET_MODE (operands[0]) == HImode))
       || GET_MODE (operands[0]) == SImode
       || (TARGET_64BIT && GET_MODE (operands[0]) == DImode))
   && (rtx_equal_p (operands[0], operands[3])
       || peep2_reg_dead_p (2, operands[0]))
   /* We reorder load and the shift.  */
   && !reg_overlap_mentioned_p (operands[0], operands[4])) && 
#line 1403 "../../gcc/config/i386/i386.md"
(word_mode == SImode)))
            {
              *pmatch_len_ = 1;
              res = gen_peephole2_398 (insn, operands);
              if (res != NULL_RTX)
                return res;
            }
          if (!(
#line 28706 "../../gcc/config/i386/i386.md"
(IN_RANGE (INTVAL (operands[2]), 1, 3)
   /* Validate MODE for lea.  */
   && ((!TARGET_PARTIAL_REG_STALL
	&& (GET_MODE (operands[0]) == QImode
	    || GET_MODE (operands[0]) == HImode))
       || GET_MODE (operands[0]) == SImode
       || (TARGET_64BIT && GET_MODE (operands[0]) == DImode))
   && (rtx_equal_p (operands[0], operands[3])
       || peep2_reg_dead_p (2, operands[0]))
   /* We reorder load and the shift.  */
   && !reg_overlap_mentioned_p (operands[0], operands[4])) && 
#line 1403 "../../gcc/config/i386/i386.md"
(word_mode == DImode)))
            return NULL;
          *pmatch_len_ = 1;
          return gen_peephole2_399 (insn, operands);

        default:
          return NULL;
        }

    case ZERO_EXTEND:
      if (GET_MODE (x3) != E_DImode)
        return NULL;
      x5 = XEXP (x3, 0);
      if (GET_CODE (x5) != MULT
          || GET_MODE (x5) != E_SImode)
        return NULL;
      x10 = XEXP (x2, 0);
      operands[0] = x10;
      if (!register_operand (operands[0], E_DImode))
        return NULL;
      x6 = XEXP (x5, 0);
      operands[1] = x6;
      if (!memory_operand (operands[1], E_SImode))
        return NULL;
      x19 = XEXP (x5, 1);
      operands[2] = x19;
      if (!immediate_operand (operands[2], E_SImode)
          || !
#line 28655 "../../gcc/config/i386/i386.md"
(TARGET_64BIT
   && TARGET_SLOW_IMUL_IMM32_MEM && optimize_insn_for_speed_p ()
   && !satisfies_constraint_K (operands[2])))
        return NULL;
      *pmatch_len_ = 0;
      return gen_peephole2_394 (insn, operands);

    default:
      return NULL;
    }
}
