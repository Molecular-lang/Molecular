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
pattern0 (rtx x1, int *pnum_clobbers)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6;
  int res ATTRIBUTE_UNUSED;
  if (pnum_clobbers == NULL)
    return -1;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) != E_QImode)
    return -1;
  x4 = XEXP (x1, 0);
  operands[0] = x4;
  if (!register_operand (operands[0], E_TImode)
      || GET_MODE (x2) != E_TImode
      || !register_operand (operands[1], E_TImode))
    return -1;
  x5 = XEXP (x3, 0);
  operands[2] = x5;
  if (!register_operand (operands[2], E_QImode))
    return -1;
  x6 = XEXP (x3, 1);
  operands[3] = x6;
  if (!const_int_operand (operands[3], E_QImode))
    return -1;
  return 0;
}

int
pattern18 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  operands[2] = x3;
  if (!register_operand (operands[2], E_QImode))
    return -1;
  return pattern17 (x1); /* [-1, 1] */
}

int
pattern22 (rtx x1, machine_mode i1)
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
pattern32 (rtx x1)
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
  switch (GET_CODE (operands[2]))
    {
    case CONST_INT:
      switch (GET_MODE (operands[0]))
        {
        case E_V1TImode:
          return pattern30 (x3); /* [-1, 0] */

        case E_V16SImode:
          if (pattern31 (x3, 
E_V16SImode) != 0)
            return -1;
          return 1;

        case E_V8SImode:
          if (pattern31 (x3, 
E_V8SImode) != 0)
            return -1;
          return 2;

        case E_V4SImode:
          if (!register_operand (operands[0], E_V4SImode)
              || GET_MODE (x3) != E_V4SImode
              || !nonimmediate_operand (operands[1], E_V4SImode))
            return -1;
          return 3;

        case E_V8DImode:
          if (pattern31 (x3, 
E_V8DImode) != 0)
            return -1;
          return 4;

        case E_V4DImode:
          if (pattern31 (x3, 
E_V4DImode) != 0)
            return -1;
          return 5;

        case E_V2DImode:
          if (!register_operand (operands[0], E_V2DImode)
              || GET_MODE (x3) != E_V2DImode
              || !nonimmediate_operand (operands[1], E_V2DImode))
            return -1;
          return 6;

        case E_V16QImode:
          if (!register_operand (operands[0], E_V16QImode)
              || GET_MODE (x3) != E_V16QImode
              || !nonimmediate_operand (operands[1], E_V16QImode)
              || !const_0_to_7_operand (operands[2], E_SImode))
            return -1;
          return 7;

        case E_V8HImode:
          if (!register_operand (operands[0], E_V8HImode)
              || GET_MODE (x3) != E_V8HImode
              || !nonimmediate_operand (operands[1], E_V8HImode)
              || !const_0_to_15_operand (operands[2], E_SImode))
            return -1;
          return 8;

        default:
          return -1;
        }

    case REG:
    case SUBREG:
    case MEM:
      switch (GET_MODE (operands[0]))
        {
        case E_V16SImode:
          if (pattern14 (x3, 
E_V16SImode) != 0)
            return -1;
          return 9;

        case E_V8SImode:
          if (pattern14 (x3, 
E_V8SImode) != 0)
            return -1;
          return 10;

        case E_V4SImode:
          if (pattern14 (x3, 
E_V4SImode) != 0)
            return -1;
          return 11;

        case E_V8DImode:
          if (pattern14 (x3, 
E_V8DImode) != 0)
            return -1;
          return 12;

        case E_V4DImode:
          if (pattern14 (x3, 
E_V4DImode) != 0)
            return -1;
          return 13;

        case E_V2DImode:
          if (pattern14 (x3, 
E_V2DImode) != 0)
            return -1;
          return 14;

        default:
          return -1;
        }

    default:
      return -1;
    }
}

int
pattern54 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4;
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
  if (!register_operand (operands[0], i1))
    return -1;
  return 0;
}

int
pattern58 (rtx x1, int *pnum_clobbers, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4;
  int res ATTRIBUTE_UNUSED;
  if (pnum_clobbers == NULL)
    return -1;
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
  return 0;
}

int
pattern64 (rtx x1)
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
    case E_V8QImode:
      return pattern63 (x3, 
E_V8QImode); /* [-1, 0] */

    case E_V4HImode:
      if (!register_operand (operands[0], E_V4HImode)
          || GET_MODE (x3) != E_V4HImode
          || !register_operand (operands[1], E_V2SImode)
          || !register_operand (operands[2], E_V2SImode))
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern76 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  if (GET_CODE (x2) != SUBREG
      || maybe_ne (SUBREG_BYTE (x2), 0)
      || GET_MODE (x2) != E_QImode)
    return -1;
  x3 = XEXP (x2, 0);
  switch (GET_CODE (x3))
    {
    case SIGN_EXTRACT:
    case ZERO_EXTRACT:
      operands[3] = x3;
      x4 = XEXP (x3, 1);
      if (x4 != const_int_rtx[MAX_SAVED_CONST_INT + 8])
        return -1;
      x5 = XEXP (x3, 2);
      if (x5 != const_int_rtx[MAX_SAVED_CONST_INT + 8]
          || GET_MODE (x1) != E_QImode)
        return -1;
      return 0;

    default:
      return -1;
    }
}

int
pattern84 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1)
    return -1;
  return pattern83 (x1, 
i1, 
i2); /* [-1, 1] */
}

int
pattern90 (rtx x1)
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
      return 0;

    case VEC_CONCAT:
      return 1;

    default:
      return -1;
    }
}

int
pattern95 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7;
  int res ATTRIBUTE_UNUSED;
  if (GET_MODE (x1) != i1)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_CODE (x2) != VEC_SELECT
      || GET_MODE (x2) != i1)
    return -1;
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) != PARALLEL
      || XVECLEN (x3, 0) != 1)
    return -1;
  x4 = XVECEXP (x3, 0, 0);
  if (x4 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
    return -1;
  x5 = XEXP (x1, 1);
  if (GET_CODE (x5) != VEC_SELECT
      || GET_MODE (x5) != i1)
    return -1;
  x6 = XEXP (x5, 1);
  if (GET_CODE (x6) != PARALLEL
      || XVECLEN (x6, 0) != 1)
    return -1;
  x7 = XVECEXP (x6, 0, 0);
  if (x7 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
    return -1;
  return 0;
}

int
pattern106 (rtx x1, int *pnum_clobbers)
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
          if (!nonimmediate_operand (operands[1], E_QImode)
              || !x86_64_general_operand (operands[2], E_QImode))
            return -1;
          return 0;

        case E_HImode:
          if (!nonimmediate_operand (operands[1], E_HImode)
              || !x86_64_general_operand (operands[2], E_HImode))
            return -1;
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
          if (!nonimmediate_operand (operands[1], E_QImode)
              || !x86_64_general_operand (operands[2], E_QImode))
            return -1;
          return 2;

        case E_HImode:
          if (!nonimmediate_operand (operands[1], E_HImode)
              || !x86_64_general_operand (operands[2], E_HImode))
            return -1;
          return 3;

        case E_SImode:
          if (pnum_clobbers == NULL
              || !nonimmediate_operand (operands[1], E_SImode)
              || !x86_64_general_operand (operands[2], E_SImode))
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
pattern126 (rtx x1, machine_mode i1, machine_mode i2)
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
      || !nonimm_or_0_operand (operands[3], i1)
      || !register_operand (operands[4], i2))
    return -1;
  return 0;
}

int
pattern136 (rtx x1, machine_mode i1, machine_mode i2, machine_mode i3)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (!nonimmediate_operand (operands[0], i1)
      || GET_MODE (x1) != i1)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != i1
      || !register_operand (operands[1], i3)
      || !nonimm_or_0_operand (operands[2], i1)
      || !register_operand (operands[3], i2))
    return -1;
  return 0;
}

int
pattern143 (rtx x1, machine_mode i1, machine_mode i2)
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
      || !nonimm_or_0_operand (operands[2], i1)
      || !register_operand (operands[3], i2))
    return -1;
  return 0;
}

int
pattern145 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  operands[1] = x3;
  x4 = XEXP (x1, 1);
  operands[2] = x4;
  x5 = XEXP (x1, 2);
  operands[3] = x5;
  switch (GET_MODE (operands[0]))
    {
    case E_V16SImode:
      return pattern143 (x1, 
E_V16SImode, 
E_HImode); /* [-1, 0] */

    case E_V8SImode:
      if (pattern143 (x1, 
E_V8SImode, 
E_QImode) != 0)
        return -1;
      return 1;

    case E_V4SImode:
      if (pattern143 (x1, 
E_V4SImode, 
E_QImode) != 0)
        return -1;
      return 2;

    case E_V8DImode:
      if (pattern143 (x1, 
E_V8DImode, 
E_QImode) != 0)
        return -1;
      return 3;

    case E_V4DImode:
      if (pattern143 (x1, 
E_V4DImode, 
E_QImode) != 0)
        return -1;
      return 4;

    case E_V2DImode:
      if (pattern143 (x1, 
E_V2DImode, 
E_QImode) != 0)
        return -1;
      return 5;

    case E_V64QImode:
      if (pattern143 (x1, 
E_V64QImode, 
E_DImode) != 0)
        return -1;
      return 6;

    case E_V16QImode:
      if (pattern143 (x1, 
E_V16QImode, 
E_HImode) != 0)
        return -1;
      return 7;

    case E_V32QImode:
      if (pattern143 (x1, 
E_V32QImode, 
E_SImode) != 0)
        return -1;
      return 8;

    case E_V32HImode:
      if (pattern143 (x1, 
E_V32HImode, 
E_SImode) != 0)
        return -1;
      return 9;

    case E_V16HImode:
      if (pattern144 (x1, 
E_V16HImode) != 0)
        return -1;
      return 10;

    case E_V8HImode:
      if (pattern143 (x1, 
E_V8HImode, 
E_QImode) != 0)
        return -1;
      return 11;

    default:
      return -1;
    }
}

int
pattern159 (rtx x1)
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
      return pattern149 (x3, 
E_V32QImode); /* [-1, 0] */

    case E_V16QImode:
      if (pattern149 (x3, 
E_V16QImode) != 0)
        return -1;
      return 1;

    case E_V64QImode:
      if (pattern149 (x3, 
E_V64QImode) != 0)
        return -1;
      return 2;

    default:
      return -1;
    }
}

int
pattern169 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1
      || !register_operand (operands[1], i1)
      || !register_operand (operands[2], i1)
      || !nonimmediate_operand (operands[3], i1))
    return -1;
  return 0;
}

int
pattern175 (rtx x1)
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
    case E_V8SImode:
      return pattern169 (x3, 
E_V8SImode); /* [-1, 0] */

    case E_V4SImode:
      if (pattern169 (x3, 
E_V4SImode) != 0)
        return -1;
      return 1;

    case E_V16SImode:
      if (pattern169 (x3, 
E_V16SImode) != 0)
        return -1;
      return 2;

    default:
      return -1;
    }
}

int
pattern183 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  switch (XVECLEN (x2, 0))
    {
    case 2:
      x3 = XVECEXP (x2, 0, 0);
      operands[1] = x3;
      x4 = XVECEXP (x2, 0, 1);
      operands[2] = x4;
      x5 = XEXP (x1, 1);
      operands[3] = x5;
      switch (XINT (x2, 1))
        {
        case 221:
          switch (GET_MODE (operands[0]))
            {
            case E_V32HFmode:
              return pattern181 (x1, 
E_V32HFmode); /* [-1, 0] */

            case E_V16HFmode:
              if (pattern181 (x1, 
E_V16HFmode) != 0)
                return -1;
              return 1;

            case E_V8HFmode:
              if (pattern181 (x1, 
E_V8HFmode) != 0)
                return -1;
              return 2;

            default:
              return -1;
            }

        case 222:
          switch (GET_MODE (operands[0]))
            {
            case E_V32HFmode:
              if (pattern181 (x1, 
E_V32HFmode) != 0)
                return -1;
              return 3;

            case E_V16HFmode:
              if (pattern181 (x1, 
E_V16HFmode) != 0)
                return -1;
              return 4;

            case E_V8HFmode:
              if (pattern181 (x1, 
E_V8HFmode) != 0)
                return -1;
              return 5;

            default:
              return -1;
            }

        default:
          return -1;
        }

    case 3:
      x3 = XVECEXP (x2, 0, 0);
      operands[1] = x3;
      x4 = XVECEXP (x2, 0, 1);
      operands[2] = x4;
      x6 = XVECEXP (x2, 0, 2);
      operands[3] = x6;
      x5 = XEXP (x1, 1);
      operands[4] = x5;
      switch (XINT (x2, 1))
        {
        case 217:
          switch (GET_MODE (operands[0]))
            {
            case E_V32HFmode:
              if (pattern182 (x1, 
E_V32HFmode) != 0)
                return -1;
              return 6;

            case E_V16HFmode:
              if (pattern182 (x1, 
E_V16HFmode) != 0)
                return -1;
              return 7;

            case E_V8HFmode:
              if (pattern182 (x1, 
E_V8HFmode) != 0)
                return -1;
              return 8;

            default:
              return -1;
            }

        case 219:
          switch (GET_MODE (operands[0]))
            {
            case E_V32HFmode:
              if (pattern182 (x1, 
E_V32HFmode) != 0)
                return -1;
              return 9;

            case E_V16HFmode:
              if (pattern182 (x1, 
E_V16HFmode) != 0)
                return -1;
              return 10;

            case E_V8HFmode:
              if (pattern182 (x1, 
E_V8HFmode) != 0)
                return -1;
              return 11;

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
pattern198 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  x4 = XEXP (x3, 0);
  operands[1] = x4;
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
      return 0;

    case AND:
      if (GET_MODE (x5) != E_QImode)
        return -1;
      x6 = XVECEXP (x1, 0, 1);
      if (GET_CODE (x6) != CLOBBER)
        return -1;
      x7 = XEXP (x6, 0);
      if (GET_CODE (x7) != REG
          || REGNO (x7) != 17
          || GET_MODE (x7) != E_CCmode)
        return -1;
      res = pattern194 (x2);
      if (res >= 0)
        return res + 1; /* [1, 3] */
      return -1;

    case PLUS:
      if (GET_MODE (x5) != E_QImode)
        return -1;
      x6 = XVECEXP (x1, 0, 1);
      if (GET_CODE (x6) != CLOBBER)
        return -1;
      x7 = XEXP (x6, 0);
      if (GET_CODE (x7) != REG
          || REGNO (x7) != 17
          || GET_MODE (x7) != E_CCmode)
        return -1;
      res = pattern196 (x2);
      if (res >= 0)
        return res + 4; /* [4, 5] */
      return -1;

    case MINUS:
      if (GET_MODE (x5) != E_QImode)
        return -1;
      x6 = XVECEXP (x1, 0, 1);
      if (GET_CODE (x6) != CLOBBER)
        return -1;
      x7 = XEXP (x6, 0);
      if (GET_CODE (x7) != REG
          || REGNO (x7) != 17
          || GET_MODE (x7) != E_CCmode)
        return -1;
      res = pattern197 (x2);
      if (res >= 0)
        return res + 6; /* [6, 7] */
      return -1;

    default:
      return -1;
    }
}

int
pattern217 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x2) != SET)
    return -1;
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) != UMOD)
    return -1;
  x4 = XVECEXP (x1, 0, 0);
  x5 = XEXP (x4, 0);
  operands[0] = x5;
  x6 = XEXP (x4, 1);
  x7 = XEXP (x6, 0);
  operands[2] = x7;
  x8 = XEXP (x6, 1);
  operands[3] = x8;
  x9 = XEXP (x2, 0);
  operands[1] = x9;
  x10 = XEXP (x3, 0);
  if (!rtx_equal_p (x10, operands[2]))
    return -1;
  x11 = XEXP (x3, 1);
  if (!rtx_equal_p (x11, operands[3]))
    return -1;
  switch (GET_CODE (operands[3]))
    {
    case REG:
    case SUBREG:
    case MEM:
      return 0;

    case CONST_INT:
      return 1;

    default:
      return -1;
    }
}

int
pattern225 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8;
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
  x5 = XVECEXP (x1, 0, 0);
  x6 = XEXP (x5, 0);
  operands[0] = x6;
  x7 = XEXP (x5, 1);
  x8 = XEXP (x7, 0);
  operands[1] = x8;
  return pattern224 (x1); /* [-1, 1] */
}

int
pattern238 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  if (GET_CODE (x1) != VEC_SELECT)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_CODE (x2) != SUBREG
      || maybe_ne (SUBREG_BYTE (x2), 0))
    return -1;
  x3 = XEXP (x1, 1);
  if (GET_CODE (x3) != PARALLEL)
    return -1;
  return 0;
}

int
pattern244 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1)
    return -1;
  x2 = XEXP (x1, 0);
  operands[3] = x2;
  if (!register_operand (operands[3], i1))
    return -1;
  x3 = XEXP (x1, 1);
  operands[1] = x3;
  if (!register_operand (operands[1], i1))
    return -1;
  x4 = XEXP (x1, 2);
  operands[2] = x4;
  if (!register_operand (operands[2], i1))
    return -1;
  return 0;
}

int
pattern255 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  switch (GET_CODE (x1))
    {
    case ZERO_EXTEND:
      if (GET_MODE (x1) != i2)
        return -1;
      x2 = XEXP (x1, 0);
      operands[3] = x2;
      if (!nonimmediate_operand (operands[3], i1))
        return -1;
      return 0;

    case CONST_INT:
    case CONST_WIDE_INT:
      operands[3] = x1;
      if (!const_scalar_int_operand (operands[3], i2))
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern259 ()
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
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
pattern269 (rtx x1, machine_mode i1, machine_mode i2)
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
      || !register_operand (operands[2], i1))
    return -1;
  return 0;
}

int
pattern274 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != E_V4SImode)
    return -1;
  x3 = XEXP (x1, 1);
  if (XVECLEN (x3, 0) != 2
      || pattern273 (x1, 
E_V4SFmode, 
E_V2SImode, 
1) != 0)
    return -1;
  return 0;
}

int
pattern280 (rtx x1, int *pnum_clobbers)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 1);
  operands[2] = x3;
  if (!nonmemory_operand (operands[2], E_QImode))
    return -1;
  return pattern279 (x1, pnum_clobbers); /* [-1, 4] */
}

int
pattern284 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  operands[3] = x2;
  switch (GET_MODE (operands[0]))
    {
    case E_SImode:
      return pattern283 (x1, 
E_SImode); /* [-1, 0] */

    case E_DImode:
      if (pattern283 (x1, 
E_DImode) != 0)
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern290 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != i1
      || !register_operand (operands[0], i1)
      || GET_MODE (x1) != i1)
    return -1;
  x3 = XEXP (x2, 0);
  operands[1] = x3;
  if (!nonimmediate_operand (operands[1], i1))
    return -1;
  x4 = XEXP (x2, 1);
  operands[2] = x4;
  if (!const_int_operand (operands[2], E_QImode))
    return -1;
  x5 = XEXP (x1, 1);
  operands[3] = x5;
  if (!const_int_operand (operands[3], E_QImode))
    return -1;
  return 0;
}

int
pattern298 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  switch (GET_MODE (operands[0]))
    {
    case E_DImode:
      return pattern160 (x1, 
E_DImode, 
E_V64QImode); /* [-1, 0] */

    case E_SImode:
      if (!register_operand (operands[0], E_SImode)
          || GET_MODE (x1) != E_SImode)
        return -1;
      switch (GET_MODE (operands[1]))
        {
        case E_V32QImode:
          if (!register_operand (operands[1], E_V32QImode)
              || !nonimmediate_operand (operands[2], E_V32QImode))
            return -1;
          return 1;

        case E_V32HImode:
          if (!register_operand (operands[1], E_V32HImode)
              || !nonimmediate_operand (operands[2], E_V32HImode))
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
pattern312 (rtx x1, rtx_code i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12, x13, x14, x15, x16, x17;
  rtx x18, x19, x20, x21, x22, x23, x24, x25;
  rtx x26, x27, x28;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  if (GET_CODE (x4) != VEC_SELECT)
    return -1;
  x5 = XEXP (x4, 1);
  if (GET_CODE (x5) != PARALLEL)
    return -1;
  x6 = XEXP (x2, 1);
  if (GET_CODE (x6) != i1)
    return -1;
  x7 = XEXP (x6, 0);
  if (GET_CODE (x7) != VEC_SELECT)
    return -1;
  x8 = XEXP (x7, 1);
  if (GET_CODE (x8) != PARALLEL)
    return -1;
  x9 = XEXP (x4, 0);
  operands[1] = x9;
  x10 = XEXP (x7, 0);
  operands[2] = x10;
  x11 = XEXP (x1, 1);
  operands[3] = x11;
  x12 = XEXP (x1, 2);
  operands[4] = x12;
  if (!register_operand (operands[4], E_QImode))
    return -1;
  switch (XVECLEN (x5, 0))
    {
    case 8:
      x13 = XVECEXP (x5, 0, 0);
      if (x13 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
        return -1;
      x14 = XVECEXP (x5, 0, 1);
      if (x14 != const_int_rtx[MAX_SAVED_CONST_INT + 2])
        return -1;
      x15 = XVECEXP (x5, 0, 2);
      if (x15 != const_int_rtx[MAX_SAVED_CONST_INT + 4])
        return -1;
      x16 = XVECEXP (x5, 0, 3);
      if (x16 != const_int_rtx[MAX_SAVED_CONST_INT + 6])
        return -1;
      x17 = XVECEXP (x5, 0, 4);
      if (x17 != const_int_rtx[MAX_SAVED_CONST_INT + 8])
        return -1;
      x18 = XVECEXP (x5, 0, 5);
      if (x18 != const_int_rtx[MAX_SAVED_CONST_INT + 10])
        return -1;
      x19 = XVECEXP (x5, 0, 6);
      if (x19 != const_int_rtx[MAX_SAVED_CONST_INT + 12])
        return -1;
      x20 = XVECEXP (x5, 0, 7);
      if (x20 != const_int_rtx[MAX_SAVED_CONST_INT + 14]
          || XVECLEN (x8, 0) != 8)
        return -1;
      x21 = XVECEXP (x8, 0, 0);
      if (x21 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
        return -1;
      x22 = XVECEXP (x8, 0, 1);
      if (x22 != const_int_rtx[MAX_SAVED_CONST_INT + 2])
        return -1;
      x23 = XVECEXP (x8, 0, 2);
      if (x23 != const_int_rtx[MAX_SAVED_CONST_INT + 4])
        return -1;
      x24 = XVECEXP (x8, 0, 3);
      if (x24 != const_int_rtx[MAX_SAVED_CONST_INT + 6])
        return -1;
      x25 = XVECEXP (x8, 0, 4);
      if (x25 != const_int_rtx[MAX_SAVED_CONST_INT + 8])
        return -1;
      x26 = XVECEXP (x8, 0, 5);
      if (x26 != const_int_rtx[MAX_SAVED_CONST_INT + 10])
        return -1;
      x27 = XVECEXP (x8, 0, 6);
      if (x27 != const_int_rtx[MAX_SAVED_CONST_INT + 12])
        return -1;
      x28 = XVECEXP (x8, 0, 7);
      if (x28 != const_int_rtx[MAX_SAVED_CONST_INT + 14]
          || pattern311 (x1, 
E_V8DImode, 
E_V16SImode, 
E_V8SImode) != 0)
        return -1;
      return 0;

    case 4:
      x13 = XVECEXP (x5, 0, 0);
      if (x13 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
        return -1;
      x14 = XVECEXP (x5, 0, 1);
      if (x14 != const_int_rtx[MAX_SAVED_CONST_INT + 2])
        return -1;
      x15 = XVECEXP (x5, 0, 2);
      if (x15 != const_int_rtx[MAX_SAVED_CONST_INT + 4])
        return -1;
      x16 = XVECEXP (x5, 0, 3);
      if (x16 != const_int_rtx[MAX_SAVED_CONST_INT + 6]
          || XVECLEN (x8, 0) != 4)
        return -1;
      x21 = XVECEXP (x8, 0, 0);
      if (x21 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
        return -1;
      x22 = XVECEXP (x8, 0, 1);
      if (x22 != const_int_rtx[MAX_SAVED_CONST_INT + 2])
        return -1;
      x23 = XVECEXP (x8, 0, 2);
      if (x23 != const_int_rtx[MAX_SAVED_CONST_INT + 4])
        return -1;
      x24 = XVECEXP (x8, 0, 3);
      if (x24 != const_int_rtx[MAX_SAVED_CONST_INT + 6]
          || pattern311 (x1, 
E_V4DImode, 
E_V8SImode, 
E_V4SImode) != 0)
        return -1;
      return 1;

    case 2:
      x13 = XVECEXP (x5, 0, 0);
      if (x13 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
        return -1;
      x14 = XVECEXP (x5, 0, 1);
      if (x14 != const_int_rtx[MAX_SAVED_CONST_INT + 2]
          || XVECLEN (x8, 0) != 2)
        return -1;
      x21 = XVECEXP (x8, 0, 0);
      if (x21 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
        return -1;
      x22 = XVECEXP (x8, 0, 1);
      if (x22 != const_int_rtx[MAX_SAVED_CONST_INT + 2]
          || !register_operand (operands[0], E_V2DImode)
          || GET_MODE (x1) != E_V2DImode
          || GET_MODE (x2) != E_V2DImode
          || GET_MODE (x3) != E_V2DImode
          || GET_MODE (x4) != E_V2SImode
          || !vector_operand (operands[1], E_V4SImode)
          || GET_MODE (x6) != E_V2DImode
          || GET_MODE (x7) != E_V2SImode
          || !vector_operand (operands[2], E_V4SImode)
          || !nonimm_or_0_operand (operands[3], E_V2DImode))
        return -1;
      return 2;

    default:
      return -1;
    }
}

int
pattern347 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  switch (GET_MODE (operands[0]))
    {
    case E_HImode:
      return pattern346 (x1, 
E_QImode, 
E_HImode); /* [-1, 0] */

    case E_SImode:
      if (!register_operand (operands[0], E_SImode)
          || GET_MODE (x1) != E_SImode)
        return -1;
      x2 = XEXP (x1, 0);
      switch (GET_MODE (x2))
        {
        case E_QImode:
          if (!nonimmediate_operand (operands[1], E_QImode))
            return -1;
          return 1;

        case E_HImode:
          if (!nonimmediate_operand (operands[1], E_HImode))
            return -1;
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
          if (!nonimmediate_operand (operands[1], E_QImode))
            return -1;
          return 3;

        case E_HImode:
          if (!nonimmediate_operand (operands[1], E_HImode))
            return -1;
          return 4;

        case E_SImode:
          if (!nonimmediate_operand (operands[1], E_SImode))
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
pattern361 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  x4 = XEXP (x3, 0);
  x5 = XEXP (x4, 0);
  if (GET_MODE (x5) != i1
      || !memory_operand (operands[0], i1)
      || !nonmemory_operand (operands[1], i1))
    return -1;
  x6 = XVECEXP (x1, 0, 1);
  x7 = XEXP (x6, 1);
  if (GET_MODE (x7) != i1)
    return -1;
  return 0;
}

int
pattern367 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  x4 = XEXP (x3, 0);
  if (GET_CODE (x4) != REG
      || REGNO (x4) != 17)
    return -1;
  x5 = XEXP (x3, 1);
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
  x8 = XEXP (x2, 0);
  operands[0] = x8;
  switch (GET_MODE (operands[0]))
    {
    case E_HImode:
      if (!register_operand (operands[0], E_HImode)
          || !ix86_comparison_operator (operands[1], E_HImode))
        return -1;
      return 0;

    case E_SImode:
      if (!register_operand (operands[0], E_SImode)
          || !ix86_comparison_operator (operands[1], E_SImode))
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern377 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i2)
      || GET_MODE (x1) != i2)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != i2
      || !nonimmediate_operand (operands[1], i1))
    return -1;
  return 0;
}

int
pattern382 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x2) != SET)
    return -1;
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) != PLUS
      || GET_MODE (x3) != E_SImode)
    return -1;
  x4 = XEXP (x3, 0);
  if (GET_CODE (x4) != REG
      || REGNO (x4) != 7
      || GET_MODE (x4) != E_SImode)
    return -1;
  x5 = XEXP (x2, 0);
  if (GET_CODE (x5) != REG
      || REGNO (x5) != 7
      || GET_MODE (x5) != E_SImode)
    return -1;
  x6 = XVECEXP (x1, 0, 2);
  return pattern381 (x6, 
37); /* [-1, 0] */
}

int
pattern392 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12, x13, x14, x15, x16, x17;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) != E_SImode)
    return -1;
  x4 = XEXP (x3, 0);
  if (GET_CODE (x4) != UNSPEC
      || XVECLEN (x4, 0) != 3
      || XINT (x4, 1) != 21
      || GET_MODE (x4) != E_SImode)
    return -1;
  x5 = XVECEXP (x4, 0, 2);
  if (GET_CODE (x5) != REG
      || REGNO (x5) != 7
      || GET_MODE (x5) != E_SImode)
    return -1;
  x6 = XEXP (x3, 1);
  if (GET_CODE (x6) != CONST
      || GET_MODE (x6) != E_SImode)
    return -1;
  x7 = XEXP (x6, 0);
  if (GET_CODE (x7) != UNSPEC
      || XVECLEN (x7, 0) != 1
      || XINT (x7, 1) != 6
      || GET_MODE (x7) != E_SImode)
    return -1;
  x8 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x8) != CLOBBER)
    return -1;
  x9 = XVECEXP (x1, 0, 2);
  if (GET_CODE (x9) != CLOBBER)
    return -1;
  x10 = XVECEXP (x1, 0, 3);
  x11 = XEXP (x10, 0);
  if (GET_CODE (x11) != REG
      || REGNO (x11) != 17
      || GET_MODE (x11) != E_CCmode)
    return -1;
  x12 = XEXP (x2, 0);
  operands[0] = x12;
  if (!register_operand (operands[0], E_SImode))
    return -1;
  x13 = XVECEXP (x4, 0, 0);
  operands[1] = x13;
  if (!register_operand (operands[1], E_SImode))
    return -1;
  x14 = XVECEXP (x4, 0, 1);
  operands[2] = x14;
  if (!constant_call_address_operand (operands[2], E_VOIDmode))
    return -1;
  x15 = XVECEXP (x7, 0, 0);
  operands[3] = x15;
  if (!tls_symbolic_operand (operands[3], E_VOIDmode))
    return -1;
  x16 = XEXP (x8, 0);
  operands[4] = x16;
  if (!scratch_operand (operands[4], E_SImode))
    return -1;
  x17 = XEXP (x9, 0);
  operands[5] = x17;
  if (!scratch_operand (operands[5], E_SImode))
    return -1;
  return 0;
}

int
pattern415 (rtx x1, machine_mode i1, rtx_code i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4;
  int res ATTRIBUTE_UNUSED;
  if (GET_CODE (x1) != i2)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_CODE (x2) != LTU)
    return -1;
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) != REG
      || REGNO (x3) != 17
      || GET_MODE (x3) != i1)
    return -1;
  x4 = XEXP (x2, 1);
  if (x4 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
    return -1;
  return 0;
}

int
pattern423 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) != E_TImode
      || !nonimmediate_operand (operands[0], E_TImode)
      || GET_MODE (x1) != E_TImode
      || GET_MODE (x2) != E_TImode)
    return -1;
  x4 = XEXP (x3, 0);
  operands[1] = x4;
  if (!nonimmediate_operand (operands[1], E_DImode)
      || !const_int_operand (operands[2], E_QImode))
    return -1;
  x5 = XEXP (x1, 1);
  return pattern255 (x5, 
E_DImode, 
E_TImode); /* [-1, 1] */
}

int
pattern433 (rtx x1, machine_mode i1)
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
pattern441 (rtx x1, int *pnum_clobbers)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  switch (GET_CODE (x3))
    {
    case CONST_INT:
      operands[3] = x3;
      x4 = XEXP (x1, 0);
      x5 = XEXP (x4, 0);
      operands[4] = x5;
      x6 = XEXP (x4, 1);
      operands[2] = x6;
      x7 = XEXP (x2, 0);
      operands[1] = x7;
      return pattern439 (x1); /* [-1, 1] */

    case MINUS:
      if (pnum_clobbers == NULL
          || GET_MODE (x3) != E_QImode)
        return -1;
      x8 = XEXP (x3, 0);
      if (GET_CODE (x8) != CONST_INT)
        return -1;
      x4 = XEXP (x1, 0);
      x6 = XEXP (x4, 1);
      if (!nonmemory_operand (x6, E_QImode))
        return -1;
      switch (XWINT (x8, 0))
        {
        case 64L:
          if (pattern440 (x1, 
E_DImode) != 0)
            return -1;
          return 2;

        case 32L:
          if (pattern440 (x1, 
E_SImode) != 0)
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
pattern456 (rtx x1, machine_mode i1)
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
pattern462 (rtx x1)
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
    case E_V64QImode:
      return pattern455 (x1, 
E_V64QImode, 
E_DImode); /* [-1, 0] */

    case E_V32QImode:
      if (pattern455 (x1, 
E_V32QImode, 
E_SImode) != 0)
        return -1;
      return 1;

    case E_V16QImode:
      if (pattern455 (x1, 
E_V16QImode, 
E_HImode) != 0)
        return -1;
      return 2;

    default:
      return -1;
    }
}

int
pattern472 (rtx x1, machine_mode i1, machine_mode i2)
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
      || !nonimm_or_0_operand (operands[4], i1)
      || !register_operand (operands[5], i2))
    return -1;
  return 0;
}

int
pattern479 (rtx x1, machine_mode i1, machine_mode i2)
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
      || !nonimmediate_operand (operands[3], i1)
      || !register_operand (operands[4], i2))
    return -1;
  return 0;
}

int
pattern487 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 2);
  switch (GET_CODE (x2))
    {
    case REG:
    case SUBREG:
      operands[4] = x2;
      x3 = XEXP (x1, 1);
      operands[3] = x3;
      switch (GET_MODE (operands[0]))
        {
        case E_V32HFmode:
          return pattern486 (x1, 
E_V32HFmode, 
E_SImode); /* [-1, 0] */

        case E_V16HFmode:
          if (pattern486 (x1, 
E_V16HFmode, 
E_HImode) != 0)
            return -1;
          return 1;

        case E_V8HFmode:
          if (pattern486 (x1, 
E_V8HFmode, 
E_QImode) != 0)
            return -1;
          return 2;

        case E_V16SFmode:
          if (pattern486 (x1, 
E_V16SFmode, 
E_HImode) != 0)
            return -1;
          return 3;

        case E_V8SFmode:
          if (pattern486 (x1, 
E_V8SFmode, 
E_QImode) != 0)
            return -1;
          return 4;

        case E_V4SFmode:
          if (pattern486 (x1, 
E_V4SFmode, 
E_QImode) != 0)
            return -1;
          return 5;

        case E_V8DFmode:
          if (pattern486 (x1, 
E_V8DFmode, 
E_QImode) != 0)
            return -1;
          return 6;

        case E_V4DFmode:
          if (pattern486 (x1, 
E_V4DFmode, 
E_QImode) != 0)
            return -1;
          return 7;

        case E_V2DFmode:
          if (pattern486 (x1, 
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
          if (pattern127 (x1, 
E_V4SImode, 
E_QImode) != 0)
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
          if (pattern127 (x1, 
E_V64QImode, 
E_DImode) != 0)
            return -1;
          return 15;

        case E_V16QImode:
          if (pattern127 (x1, 
E_V16QImode, 
E_HImode) != 0)
            return -1;
          return 16;

        case E_V32QImode:
          if (pattern127 (x1, 
E_V32QImode, 
E_SImode) != 0)
            return -1;
          return 17;

        case E_V32HImode:
          if (pattern127 (x1, 
E_V32HImode, 
E_SImode) != 0)
            return -1;
          return 18;

        case E_V16HImode:
          if (pattern127 (x1, 
E_V16HImode, 
E_HImode) != 0)
            return -1;
          return 19;

        case E_V8HImode:
          if (pattern127 (x1, 
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
pattern519 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1)
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
pattern524 (rtx x1, machine_mode i1, machine_mode i2, machine_mode i3)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != i3)
    return -1;
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) != i1
      || !nonimmediate_operand (operands[1], i2)
      || !const0_operand (operands[2], i2)
      || !const0_operand (operands[3], i1))
    return -1;
  return 0;
}

int
pattern532 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != i1
      || !regmem_or_bitnot_regmem_operand (operands[1], i1)
      || !regmem_or_bitnot_regmem_operand (operands[2], i1)
      || !regmem_or_bitnot_regmem_operand (operands[3], i1))
    return -1;
  return 0;
}

int
pattern535 (rtx x1)
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
    case E_V64QImode:
      return pattern534 (x1, 
E_V64QImode); /* [-1, 0] */

    case E_V32QImode:
      if (pattern534 (x1, 
E_V32QImode) != 0)
        return -1;
      return 1;

    case E_V16QImode:
      if (pattern534 (x1, 
E_V16QImode) != 0)
        return -1;
      return 2;

    case E_V32HImode:
      if (pattern534 (x1, 
E_V32HImode) != 0)
        return -1;
      return 3;

    case E_V16HImode:
      if (pattern534 (x1, 
E_V16HImode) != 0)
        return -1;
      return 4;

    case E_V8HImode:
      if (pattern534 (x1, 
E_V8HImode) != 0)
        return -1;
      return 5;

    case E_V16SImode:
      if (pattern534 (x1, 
E_V16SImode) != 0)
        return -1;
      return 6;

    case E_V8SImode:
      if (pattern534 (x1, 
E_V8SImode) != 0)
        return -1;
      return 7;

    case E_V4SImode:
      if (pattern534 (x1, 
E_V4SImode) != 0)
        return -1;
      return 8;

    case E_V8DImode:
      if (pattern534 (x1, 
E_V8DImode) != 0)
        return -1;
      return 9;

    case E_V4DImode:
      if (pattern534 (x1, 
E_V4DImode) != 0)
        return -1;
      return 10;

    case E_V2DImode:
      if (pattern534 (x1, 
E_V2DImode) != 0)
        return -1;
      return 11;

    default:
      return -1;
    }
}

int
pattern544 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 1);
  x3 = XVECEXP (x2, 0, 0);
  operands[2] = x3;
  switch (GET_MODE (operands[0]))
    {
    case E_SImode:
      x4 = XVECEXP (x1, 0, 0);
      x5 = XEXP (x4, 1);
      return pattern543 (x5, 
E_SImode); /* [-1, 0] */

    case E_DImode:
      x4 = XVECEXP (x1, 0, 0);
      x5 = XEXP (x4, 1);
      if (pattern543 (x5, 
E_DImode) != 0)
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern549 (rtx x1)
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
  x7 = XVECEXP (x6, 0, 0);
  operands[1] = x7;
  if (!register_operand (operands[1], E_XFmode))
    return -1;
  return pattern548 (x6); /* [-1, 2] */
}

int
pattern555 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1
      || !nonimmediate_operand (operands[1], i1)
      || !general_operand (operands[2], i1))
    return -1;
  return 0;
}

int
pattern557 (rtx x1)
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
  return pattern556 (x4); /* [-1, 1] */
}

int
pattern563 (rtx x1, rtx_code i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) != i1)
    return -1;
  x5 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x5) != CLOBBER)
    return -1;
  x6 = XEXP (x5, 0);
  if (GET_CODE (x6) != REG
      || REGNO (x6) != 17
      || GET_MODE (x6) != E_CCmode)
    return -1;
  x7 = XEXP (x3, 0);
  x8 = XEXP (x7, 0);
  operands[1] = x8;
  x9 = XEXP (x4, 0);
  operands[2] = x9;
  switch (GET_MODE (operands[0]))
    {
    case E_DImode:
      return pattern562 (x3, 
E_SImode, 
E_DImode); /* [-1, 0] */

    case E_TImode:
      if (pattern562 (x3, 
E_DImode, 
E_TImode) != 0)
        return -1;
      return 1;

    case E_HImode:
      if (pattern562 (x3, 
E_QImode, 
E_HImode) != 0)
        return -1;
      return 2;

    default:
      return -1;
    }
}

int
pattern575 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (GET_MODE (x1) != E_BLKmode
      || !memory_operand (operands[0], E_BLKmode)
      || !register_operand (operands[1], E_SImode)
      || !register_operand (operands[2], E_SImode))
    return -1;
  return 0;
}

int
pattern580 (rtx x1)
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
  return pattern579 (x1); /* [-1, 3] */
}

int
pattern586 (rtx x1, rtx_code i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x2) != SET)
    return -1;
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) != i1)
    return -1;
  x4 = XVECEXP (x1, 0, 2);
  x5 = XEXP (x4, 0);
  if (GET_CODE (x5) != REG
      || REGNO (x5) != 17
      || GET_MODE (x5) != E_CCmode)
    return -1;
  return 0;
}

int
pattern589 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  x4 = XEXP (x3, 0);
  operands[2] = x4;
  x5 = XEXP (x3, 1);
  operands[3] = x5;
  x6 = XVECEXP (x1, 0, 1);
  x7 = XEXP (x6, 0);
  operands[1] = x7;
  x8 = XEXP (x6, 1);
  x9 = XEXP (x8, 0);
  if (!rtx_equal_p (x9, operands[2]))
    return -1;
  x10 = XEXP (x8, 1);
  if (!rtx_equal_p (x10, operands[3]))
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
pattern595 (rtx x1, machine_mode i1, machine_mode i2)
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
      || !vector_operand (operands[2], i1))
    return -1;
  return 0;
}

int
pattern602 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) != PARALLEL
      || XVECLEN (x3, 0) != 1)
    return -1;
  x4 = XVECEXP (x3, 0, 0);
  if (x4 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
    return -1;
  x5 = XEXP (x1, 1);
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
pattern609 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7;
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
      || pattern608 (x1, 
E_V8QImode, 
E_V4QImode, 
E_V4HImode) != 0)
    return -1;
  return 0;
}

int
pattern619 (rtx x1, machine_mode i1)
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
pattern624 (rtx x1, machine_mode i1)
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
pattern630 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 2);
  operands[3] = x2;
  x3 = XEXP (x1, 0);
  x4 = XVECEXP (x3, 0, 0);
  switch (GET_CODE (x4))
    {
    case REG:
    case SUBREG:
    case MEM:
      operands[1] = x4;
      switch (GET_MODE (operands[0]))
        {
        case E_V32HImode:
          return 0;

        case E_V16SImode:
          return 1;

        case E_V8DImode:
          return 2;

        case E_V16HImode:
          return 3;

        case E_V8SImode:
          return 4;

        case E_V4DImode:
          return 5;

        case E_V8HImode:
          return 6;

        case E_V4SImode:
          return 7;

        case E_V2DImode:
          return 8;

        default:
          return -1;
        }

    case VEC_SELECT:
      if (GET_MODE (x4) != E_V2SFmode)
        return -1;
      x5 = XEXP (x4, 1);
      if (GET_CODE (x5) != PARALLEL
          || XVECLEN (x5, 0) != 2)
        return -1;
      x6 = XVECEXP (x5, 0, 0);
      if (x6 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
        return -1;
      x7 = XVECEXP (x5, 0, 1);
      if (x7 != const_int_rtx[MAX_SAVED_CONST_INT + 1]
          || !register_operand (operands[0], E_V2DImode)
          || GET_MODE (x1) != E_V2DImode
          || GET_MODE (x3) != E_V2DImode)
        return -1;
      x8 = XEXP (x4, 0);
      operands[1] = x8;
      if (!nonimmediate_operand (operands[1], E_V4SFmode)
          || !nonimm_or_0_operand (operands[2], E_V2DImode)
          || !register_operand (operands[3], E_QImode))
        return -1;
      return 9;

    default:
      return -1;
    }
}

int
pattern646 (rtx x1, machine_mode i1, machine_mode i2)
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
pattern654 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  operands[1] = x4;
  x5 = XEXP (x2, 1);
  operands[2] = x5;
  x6 = XEXP (x2, 2);
  operands[3] = x6;
  x7 = XVECEXP (x1, 0, 1);
  operands[4] = x7;
  if (!const48_operand (operands[4], E_SImode))
    return -1;
  switch (GET_MODE (operands[0]))
    {
    case E_V16HImode:
      return pattern652 (x1, 
E_V16HImode, 
E_V16HFmode, 
E_HImode); /* [-1, 0] */

    case E_V32HImode:
      if (pattern652 (x1, 
E_V32HImode, 
E_V32HFmode, 
E_SImode) != 0)
        return -1;
      return 1;

    case E_V8SImode:
      res = pattern653 (x1, 
E_V8SImode);
      if (res >= 0)
        return res + 2; /* [2, 3] */
      return -1;

    case E_V16SImode:
      if (!register_operand (operands[0], E_V16SImode)
          || GET_MODE (x1) != E_V16SImode
          || GET_MODE (x2) != E_V16SImode
          || GET_MODE (x3) != E_V16SImode
          || !nonimm_or_0_operand (operands[2], E_V16SImode)
          || !register_operand (operands[3], E_HImode))
        return -1;
      switch (GET_MODE (operands[1]))
        {
        case E_V16HFmode:
          if (!register_operand (operands[1], E_V16HFmode))
            return -1;
          return 4;

        case E_V16SFmode:
          if (!register_operand (operands[1], E_V16SFmode))
            return -1;
          return 5;

        default:
          return -1;
        }

    case E_V8DImode:
      res = pattern653 (x1, 
E_V8DImode);
      if (res >= 0)
        return res + 6; /* [6, 7] */
      return -1;

    case E_V4DImode:
      if (pattern652 (x1, 
E_V4DImode, 
E_V4DFmode, 
E_QImode) != 0)
        return -1;
      return 8;

    default:
      return -1;
    }
}

int
pattern671 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
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
  if (x6 != const_int_rtx[MAX_SAVED_CONST_INT + 4])
    return -1;
  x7 = XVECEXP (x1, 0, 5);
  if (x7 != const_int_rtx[MAX_SAVED_CONST_INT + 5])
    return -1;
  x8 = XVECEXP (x1, 0, 6);
  if (x8 != const_int_rtx[MAX_SAVED_CONST_INT + 6])
    return -1;
  x9 = XVECEXP (x1, 0, 7);
  if (x9 != const_int_rtx[MAX_SAVED_CONST_INT + 7])
    return -1;
  return 0;
}

int
pattern684 (rtx x1, rtx_code i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) != REG
      || REGNO (x3) != 17
      || GET_MODE (x3) != E_CCOmode)
    return -1;
  x4 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x4) != SET)
    return -1;
  x5 = XEXP (x4, 1);
  if (GET_CODE (x5) != i1)
    return -1;
  x6 = XEXP (x2, 1);
  if (GET_MODE (x6) != E_CCOmode)
    return -1;
  x7 = XEXP (x4, 0);
  operands[0] = x7;
  return 0;
}

int
pattern691 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  x4 = XEXP (x3, 1);
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
  return pattern690 (x2); /* [-1, 3] */
}

int
pattern695 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1
      || !vector_operand (operands[1], i1)
      || !vector_operand (operands[2], i1))
    return -1;
  return 0;
}

int
pattern701 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  x4 = XEXP (x3, 1);
  switch (GET_CODE (x4))
    {
    case SUBREG:
      if (maybe_ne (SUBREG_BYTE (x4), 0)
          || GET_MODE (x4) != E_QImode)
        return -1;
      x5 = XEXP (x4, 0);
      if (GET_CODE (x5) != AND)
        return -1;
      x6 = XVECEXP (x1, 0, 1);
      if (GET_CODE (x6) != CLOBBER)
        return -1;
      x7 = XEXP (x6, 0);
      if (GET_CODE (x7) != REG
          || REGNO (x7) != 17
          || GET_MODE (x7) != E_CCmode)
        return -1;
      return pattern699 (x3); /* [-1, 1] */

    case CONST_INT:
      operands[2] = x4;
      if (!const_0_to_255_operand (operands[2], E_VOIDmode))
        return -1;
      x6 = XVECEXP (x1, 0, 1);
      if (GET_CODE (x6) != UNSPEC
          || XVECLEN (x6, 0) != 1
          || XINT (x6, 1) != 174)
        return -1;
      x8 = XVECEXP (x6, 0, 0);
      if (x8 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
        return -1;
      res = pattern700 (x3);
      if (res >= 0)
        return res + 2; /* [2, 5] */
      return -1;

    default:
      return -1;
    }
}

int
pattern714 (rtx x1, machine_mode i1, machine_mode i2)
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
      || !nonimmediate_operand (operands[1], i2)
      || !const_scalar_int_operand (operands[3], i1))
    return -1;
  return 0;
}

int
pattern722 (rtx x1, machine_mode i1, unsigned int i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) != i1)
    return -1;
  x3 = XEXP (x1, 0);
  if (GET_CODE (x3) != REG
      || REGNO (x3) != i2
      || GET_MODE (x3) != i1)
    return -1;
  return 0;
}

int
pattern726 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (peep2_current_count < 2
      || peep2_current_count < 3
      || !general_reg_operand (operands[0], i1)
      || !general_reg_operand (operands[1], i1))
    return -1;
  x2 = PATTERN (peep2_next_insn (2));
  if (GET_CODE (x2) != SET)
    return -1;
  switch (GET_CODE (x1))
    {
    case SET:
      return 0;

    case PARALLEL:
      return 1;

    default:
      return -1;
    }
}

int
pattern732 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1
      || !register_operand (operands[1], i1)
      || !register_mmxmem_operand (operands[2], i1))
    return -1;
  return 0;
}

int
pattern735 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 2);
  x3 = XEXP (x2, 0);
  operands[3] = x3;
  x4 = XEXP (x2, 1);
  operands[4] = x4;
  switch (GET_MODE (operands[0]))
    {
    case E_SFmode:
      return pattern734 (x1, 
E_SFmode); /* [-1, 0] */

    case E_DFmode:
      if (pattern734 (x1, 
E_DFmode) != 0)
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern743 (rtx x1, machine_mode i1)
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
pattern750 (rtx x1)
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
    case E_SImode:
      return pattern749 (x1, 
E_SImode); /* [-1, 0] */

    case E_DImode:
      if (pattern749 (x1, 
E_DImode) != 0)
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern762 (rtx x1, machine_mode i1)
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
pattern767 (rtx x1, machine_mode i1)
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
pattern775 (rtx x1, machine_mode i1)
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
pattern782 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i2)
      || GET_MODE (x1) != i2
      || !vector_operand (operands[1], i1)
      || !vector_operand (operands[2], i1))
    return -1;
  return 0;
}

int
pattern789 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!memory_operand (operands[0], i1)
      || GET_MODE (x1) != i1
      || !register_operand (operands[1], i1)
      || !const0_or_m1_operand (operands[2], i2))
    return -1;
  return 0;
}

int
pattern798 (rtx x1, machine_mode i1, machine_mode i2, machine_mode i3)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i3)
      || GET_MODE (x1) != i3)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != i2
      || !register_operand (operands[1], i1))
    return -1;
  x3 = XEXP (x1, 1);
  if (GET_MODE (x3) != i2
      || !vector_operand (operands[2], i1))
    return -1;
  return 0;
}

int
pattern807 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  int res ATTRIBUTE_UNUSED;
  if (!pmovzx_parallel (operands[4], E_VOIDmode))
    return -1;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) != SUBREG
      || maybe_ne (SUBREG_BYTE (x3), 0))
    return -1;
  x4 = XEXP (x3, 0);
  if (GET_CODE (x4) != VEC_CONCAT)
    return -1;
  x5 = XEXP (x4, 0);
  operands[1] = x5;
  x6 = XEXP (x4, 1);
  operands[2] = x6;
  x7 = XEXP (x2, 1);
  operands[3] = x7;
  x8 = XEXP (x1, 1);
  x9 = XVECEXP (x8, 0, 0);
  operands[5] = x9;
  if (!const_int_operand (operands[5], E_VOIDmode))
    return -1;
  switch (GET_MODE (operands[0]))
    {
    case E_V32QImode:
      if (!register_operand (operands[0], E_V32QImode)
          || GET_MODE (x1) != E_V32QImode
          || GET_MODE (x2) != E_V64QImode
          || GET_MODE (x3) != E_V32QImode
          || !const0_operand (operands[3], E_V32QImode))
        return -1;
      switch (GET_MODE (x4))
        {
        case E_V16HImode:
          if (!nonimmediate_operand (operands[1], E_V8HImode)
              || !const0_operand (operands[2], E_V8HImode))
            return -1;
          return 0;

        case E_V8SImode:
          if (!nonimmediate_operand (operands[1], E_V4SImode)
              || !const0_operand (operands[2], E_V4SImode))
            return -1;
          return 1;

        case E_V4DImode:
          if (!nonimmediate_operand (operands[1], E_V2DImode)
              || !const0_operand (operands[2], E_V2DImode))
            return -1;
          return 2;

        default:
          return -1;
        }

    case E_V64QImode:
      if (!register_operand (operands[0], E_V64QImode)
          || GET_MODE (x1) != E_V64QImode
          || GET_MODE (x2) != E_V128QImode
          || GET_MODE (x3) != E_V64QImode
          || !const0_operand (operands[3], E_V64QImode))
        return -1;
      switch (GET_MODE (x4))
        {
        case E_V32HImode:
          if (!nonimmediate_operand (operands[1], E_V16HImode)
              || !const0_operand (operands[2], E_V16HImode))
            return -1;
          return 3;

        case E_V16SImode:
          if (!nonimmediate_operand (operands[1], E_V8SImode)
              || !const0_operand (operands[2], E_V8SImode))
            return -1;
          return 4;

        case E_V8DImode:
          if (!nonimmediate_operand (operands[1], E_V4DImode)
              || !const0_operand (operands[2], E_V4DImode))
            return -1;
          return 5;

        default:
          return -1;
        }

    case E_V16QImode:
      if (!register_operand (operands[0], E_V16QImode)
          || GET_MODE (x1) != E_V16QImode
          || GET_MODE (x2) != E_V32QImode
          || GET_MODE (x3) != E_V16QImode
          || !const0_operand (operands[3], E_V16QImode))
        return -1;
      switch (GET_MODE (x4))
        {
        case E_V8HImode:
          if (!vector_operand (operands[1], E_V4HImode)
              || !const0_operand (operands[2], E_V4HImode))
            return -1;
          return 6;

        case E_V4SImode:
          if (!vector_operand (operands[1], E_V2SImode)
              || !const0_operand (operands[2], E_V2SImode))
            return -1;
          return 7;

        case E_V2DImode:
          if (!vector_operand (operands[1], E_DImode)
              || !const0_operand (operands[2], E_DImode))
            return -1;
          return 8;

        default:
          return -1;
        }

    case E_V32HImode:
      if (!register_operand (operands[0], E_V32HImode)
          || GET_MODE (x1) != E_V32HImode
          || GET_MODE (x2) != E_V64HImode
          || GET_MODE (x3) != E_V32HImode
          || !const0_operand (operands[3], E_V32HImode))
        return -1;
      switch (GET_MODE (x4))
        {
        case E_V64QImode:
          if (!nonimmediate_operand (operands[1], E_V32QImode)
              || !const0_operand (operands[2], E_V32QImode))
            return -1;
          return 9;

        case E_V16SImode:
          if (!nonimmediate_operand (operands[1], E_V8SImode)
              || !const0_operand (operands[2], E_V8SImode))
            return -1;
          return 10;

        case E_V8DImode:
          if (!nonimmediate_operand (operands[1], E_V4DImode)
              || !const0_operand (operands[2], E_V4DImode))
            return -1;
          return 11;

        default:
          return -1;
        }

    case E_V16HImode:
      if (!register_operand (operands[0], E_V16HImode)
          || GET_MODE (x1) != E_V16HImode
          || GET_MODE (x2) != E_V32HImode
          || GET_MODE (x3) != E_V16HImode
          || !const0_operand (operands[3], E_V16HImode))
        return -1;
      switch (GET_MODE (x4))
        {
        case E_V32QImode:
          if (!nonimmediate_operand (operands[1], E_V16QImode)
              || !const0_operand (operands[2], E_V16QImode))
            return -1;
          return 12;

        case E_V8SImode:
          if (!nonimmediate_operand (operands[1], E_V4SImode)
              || !const0_operand (operands[2], E_V4SImode))
            return -1;
          return 13;

        case E_V4DImode:
          if (!nonimmediate_operand (operands[1], E_V2DImode)
              || !const0_operand (operands[2], E_V2DImode))
            return -1;
          return 14;

        default:
          return -1;
        }

    case E_V8HImode:
      if (!register_operand (operands[0], E_V8HImode)
          || GET_MODE (x1) != E_V8HImode
          || GET_MODE (x2) != E_V16HImode
          || GET_MODE (x3) != E_V8HImode
          || !const0_operand (operands[3], E_V8HImode))
        return -1;
      switch (GET_MODE (x4))
        {
        case E_V16QImode:
          if (!vector_operand (operands[1], E_V8QImode)
              || !const0_operand (operands[2], E_V8QImode))
            return -1;
          return 15;

        case E_V4SImode:
          if (!vector_operand (operands[1], E_V2SImode)
              || !const0_operand (operands[2], E_V2SImode))
            return -1;
          return 16;

        case E_V2DImode:
          if (!vector_operand (operands[1], E_DImode)
              || !const0_operand (operands[2], E_DImode))
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
pattern888 (rtx x1, machine_mode i1, machine_mode i2)
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
      || !nonimm_or_0_operand (operands[2], i1)
      || !register_operand (operands[3], i2))
    return -1;
  return 0;
}

int
pattern896 (rtx x1, machine_mode i1)
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
      if (!nonimmediate_operand (operands[1], E_V8SFmode))
        return -1;
      return 2;

    default:
      return -1;
    }
}

int
pattern907 (rtx x1, int i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  if (GET_CODE (x1) != VEC_SELECT
      || GET_MODE (x1) != i2)
    return -1;
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) != PARALLEL
      || XVECLEN (x2, 0) != i1)
    return -1;
  x3 = XVECEXP (x2, 0, 0);
  if (x3 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
    return -1;
  return 0;
}

int
pattern912 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 0);
  x4 = XVECEXP (x3, 0, 0);
  operands[1] = x4;
  x5 = XVECEXP (x3, 0, 1);
  operands[2] = x5;
  x6 = XVECEXP (x1, 0, 1);
  if (!const48_operand (x6, E_SImode))
    return -1;
  x7 = XEXP (x2, 2);
  switch (GET_CODE (x7))
    {
    case REG:
    case SUBREG:
      operands[4] = x7;
      x8 = XEXP (x2, 1);
      operands[3] = x8;
      operands[5] = x6;
      switch (GET_MODE (operands[0]))
        {
        case E_V32HFmode:
          return pattern910 (x1, 
E_V32HFmode, 
E_SImode); /* [-1, 0] */

        case E_V16HFmode:
          if (pattern910 (x1, 
E_V16HFmode, 
E_HImode) != 0)
            return -1;
          return 1;

        case E_V16SFmode:
          if (pattern910 (x1, 
E_V16SFmode, 
E_HImode) != 0)
            return -1;
          return 2;

        case E_V8SFmode:
          if (pattern910 (x1, 
E_V8SFmode, 
E_QImode) != 0)
            return -1;
          return 3;

        case E_V8DFmode:
          if (pattern910 (x1, 
E_V8DFmode, 
E_QImode) != 0)
            return -1;
          return 4;

        case E_V4DFmode:
          if (pattern910 (x1, 
E_V4DFmode, 
E_QImode) != 0)
            return -1;
          return 5;

        default:
          return -1;
        }

    case CONST_INT:
      if (XWINT (x7, 0) != 1L)
        return -1;
      operands[3] = x6;
      x8 = XEXP (x2, 1);
      if (!rtx_equal_p (x8, operands[1]))
        return -1;
      switch (GET_MODE (operands[0]))
        {
        case E_V8HFmode:
          if (pattern911 (x1, 
E_V8HFmode) != 0)
            return -1;
          return 6;

        case E_V4SFmode:
          if (pattern911 (x1, 
E_V4SFmode) != 0)
            return -1;
          return 7;

        case E_V2DFmode:
          if (pattern911 (x1, 
E_V2DFmode) != 0)
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
pattern932 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != i2
      || !nonimmediate_operand (operands[1], i1))
    return -1;
  return 0;
}

int
pattern935 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1
      || !bcst_vector_operand (operands[1], i1)
      || !vector_all_ones_operand (operands[2], i1))
    return -1;
  return 0;
}

int
pattern941 (rtx x1, machine_mode i1)
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
      || !immediate_operand (operands[2], i1))
    return -1;
  return 0;
}

int
pattern948 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  operands[0] = x2;
  x3 = XEXP (x1, 1);
  x4 = XEXP (x3, 0);
  switch (XVECLEN (x4, 0))
    {
    case 1:
      if (XINT (x4, 1) != 19)
        return -1;
      x5 = XVECEXP (x4, 0, 0);
      if (x5 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
        return -1;
      return pattern946 (x3); /* [-1, 1] */

    case 4:
      if (XINT (x4, 1) != 22
          || GET_MODE (x4) != E_SImode)
        return -1;
      x6 = XVECEXP (x4, 0, 3);
      if (GET_CODE (x6) != REG
          || REGNO (x6) != 7
          || GET_MODE (x6) != E_SImode)
        return -1;
      x7 = XEXP (x3, 1);
      if (GET_CODE (x7) != CONST
          || GET_MODE (x7) != E_SImode)
        return -1;
      x8 = XEXP (x7, 0);
      if (GET_CODE (x8) != UNSPEC
          || XVECLEN (x8, 0) != 1
          || XINT (x8, 1) != 6
          || GET_MODE (x8) != E_SImode
          || !register_operand (operands[0], E_SImode)
          || GET_MODE (x3) != E_SImode)
        return -1;
      x5 = XVECEXP (x4, 0, 0);
      operands[3] = x5;
      if (!tls_modbase_operand (operands[3], E_VOIDmode))
        return -1;
      x9 = XVECEXP (x4, 0, 1);
      operands[4] = x9;
      x10 = XVECEXP (x4, 0, 2);
      operands[2] = x10;
      if (!register_operand (operands[2], E_SImode))
        return -1;
      x11 = XVECEXP (x8, 0, 0);
      operands[1] = x11;
      if (!tls_symbolic_operand (operands[1], E_VOIDmode))
        return -1;
      return 2;

    case 3:
      if (XINT (x4, 1) != 22)
        return -1;
      x10 = XVECEXP (x4, 0, 2);
      if (GET_CODE (x10) != REG
          || REGNO (x10) != 7)
        return -1;
      x7 = XEXP (x3, 1);
      if (GET_CODE (x7) != CONST)
        return -1;
      x8 = XEXP (x7, 0);
      if (GET_CODE (x8) != UNSPEC
          || XVECLEN (x8, 0) != 1
          || XINT (x8, 1) != 6)
        return -1;
      x5 = XVECEXP (x4, 0, 0);
      operands[2] = x5;
      if (!tls_modbase_operand (operands[2], E_VOIDmode))
        return -1;
      x9 = XVECEXP (x4, 0, 1);
      operands[3] = x9;
      x11 = XVECEXP (x8, 0, 0);
      operands[1] = x11;
      if (!tls_symbolic_operand (operands[1], E_VOIDmode))
        return -1;
      switch (GET_MODE (operands[0]))
        {
        case E_SImode:
          if (pattern947 (x3, 
E_SImode) != 0)
            return -1;
          return 3;

        case E_DImode:
          if (pattern947 (x3, 
E_DImode) != 0)
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
pattern978 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!nonimmediate_operand (operands[0], E_BFmode)
      || GET_MODE (x1) != E_BFmode)
    return -1;
  switch (GET_MODE (operands[1]))
    {
    case E_V32BFmode:
      if (!nonimmediate_operand (operands[1], E_V32BFmode))
        return -1;
      return 0;

    case E_V16BFmode:
      if (!nonimmediate_operand (operands[1], E_V16BFmode))
        return -1;
      return 1;

    case E_V8BFmode:
      if (!nonimmediate_operand (operands[1], E_V8BFmode))
        return -1;
      return 2;

    default:
      return -1;
    }
}

int
pattern981 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) != E_DImode)
    return -1;
  x4 = XEXP (x3, 0);
  operands[1] = x4;
  if (!nonimmediate_operand (operands[1], E_SImode))
    return -1;
  x5 = XEXP (x1, 1);
  return pattern255 (x5, 
E_SImode, 
E_DImode); /* [-1, 1] */
}

int
pattern984 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) != UNSPEC
      || XVECLEN (x2, 0) != 3
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
      return pattern983 (x2, 
E_V32QImode, 
E_SImode); /* [-1, 0] */

    case E_V16QImode:
      if (pattern983 (x2, 
E_V16QImode, 
E_HImode) != 0)
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern992 (rtx x1)
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

    case E_V16QImode:
      if (!register_operand (operands[1], E_V16QImode)
          || !const0_operand (operands[2], E_V16QImode))
        return -1;
      return 4;

    default:
      return -1;
    }
}

int
pattern1005 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 1);
  switch (GET_CODE (x3))
    {
    case REG:
    case SUBREG:
    case MEM:
      x4 = XEXP (x2, 2);
      operands[4] = x4;
      switch (GET_MODE (operands[0]))
        {
        case E_V8HFmode:
          return pattern1004 (x1, 
E_V8HFmode); /* [-1, 0] */

        case E_V4SFmode:
          if (pattern1004 (x1, 
E_V4SFmode) != 0)
            return -1;
          return 1;

        case E_V2DFmode:
          if (pattern1004 (x1, 
E_V2DFmode) != 0)
            return -1;
          return 2;

        default:
          return -1;
        }

    case CONST_INT:
    case CONST_DOUBLE:
    case CONST_VECTOR:
      operands[4] = x3;
      x5 = XEXP (x2, 0);
      x6 = XEXP (x5, 0);
      x7 = XEXP (x6, 0);
      operands[2] = x7;
      x8 = XEXP (x5, 1);
      operands[1] = x8;
      x4 = XEXP (x2, 2);
      operands[5] = x4;
      x9 = XEXP (x1, 1);
      if (!rtx_equal_p (x9, operands[1]))
        return -1;
      switch (GET_MODE (operands[0]))
        {
        case E_V8HFmode:
          return 3;

        case E_V4SFmode:
          return 4;

        case E_V2DFmode:
          return 5;

        default:
          return -1;
        }

    default:
      return -1;
    }
}

int
pattern1030 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1
      || !register_operand (operands[1], i1)
      || !bcst_vector_operand (operands[2], i1))
    return -1;
  return 0;
}

int
pattern1038 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  switch (GET_CODE (x3))
    {
    case PLUS:
      return pattern1035 (x1); /* [-1, 0] */

    case MINUS:
      if (pattern1035 (x1) != 0)
        return -1;
      return 1;

    case AND:
      if (pattern1035 (x1) != 0)
        return -1;
      return 2;

    case IOR:
      if (pattern1035 (x1) != 0)
        return -1;
      return 3;

    case XOR:
      if (pattern1035 (x1) != 0)
        return -1;
      return 4;

    case NEG:
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
              return 5;

            case E_SImode:
              if (GET_MODE (x2) != E_SImode
                  || !extract_operator (operands[2], E_SImode))
                return -1;
              return 6;

            case E_DImode:
              if (GET_MODE (x2) != E_DImode
                  || !extract_operator (operands[2], E_DImode))
                return -1;
              return 7;

            default:
              return -1;
            }

        default:
          return -1;
        }

    case ASHIFT:
      if (GET_MODE (x3) != E_QImode)
        return -1;
      res = pattern1037 (x1);
      if (res >= 0)
        return res + 8; /* [8, 10] */
      return -1;

    case LSHIFTRT:
      return 11;

    case ASHIFTRT:
      return 12;

    default:
      return -1;
    }
}

int
pattern1064 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6;
  int res ATTRIBUTE_UNUSED;
  if (GET_CODE (x1) != SET)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_CODE (x2) != ZERO_EXTRACT)
    return -1;
  x3 = XEXP (x2, 1);
  if (x3 != const_int_rtx[MAX_SAVED_CONST_INT + 8])
    return -1;
  x4 = XEXP (x2, 2);
  if (x4 != const_int_rtx[MAX_SAVED_CONST_INT + 8])
    return -1;
  x5 = XEXP (x2, 0);
  operands[2] = x5;
  if (!int248_register_operand (operands[2], E_VOIDmode))
    return -1;
  x6 = XEXP (x1, 1);
  operands[3] = x6;
  switch (GET_MODE (x2))
    {
    case E_HImode:
      if (!const_int_operand (operands[3], E_HImode))
        return -1;
      return 0;

    case E_SImode:
      if (!const_int_operand (operands[3], E_SImode))
        return -1;
      return 1;

    case E_DImode:
      if (!const_int_operand (operands[3], E_DImode))
        return -1;
      return 2;

    default:
      return -1;
    }
}

int
pattern1077 (rtx x1, int i1, int i2, int i3, int i4)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  int res ATTRIBUTE_UNUSED;
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
pattern1090 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i2)
      || GET_MODE (x1) != i2)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != i2
      || !register_operand (operands[1], i1)
      || !nonimmediate_operand (operands[2], i1))
    return -1;
  return 0;
}

int
pattern1095 (rtx x1, machine_mode i1)
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
      if (!vector_operand (operands[1], E_V4SFmode))
        return -1;
      return 1;

    case E_DFmode:
      if (!vector_operand (operands[1], E_V2DFmode))
        return -1;
      return 2;

    default:
      return -1;
    }
}

int
pattern1098 (rtx x1, machine_mode i1)
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
pattern1106 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  if (!rtx_equal_p (x2, operands[1]))
    return -1;
  switch (GET_MODE (operands[0]))
    {
    case E_V4SFmode:
      return pattern456 (x1, 
E_V4SFmode); /* [-1, 0] */

    case E_V2DFmode:
      if (pattern456 (x1, 
E_V2DFmode) != 0)
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern1114 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1
      || !vector_operand (operands[2], i1)
      || !register_operand (operands[1], i1)
      || !const_0_to_15_operand (operands[3], E_SImode))
    return -1;
  return 0;
}

int
pattern1121 (rtx x1, machine_mode i1, machine_mode i2, machine_mode i3, machine_mode i4)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (GET_MODE (x1) != i4
      || !register_operand (operands[1], i3)
      || !nonimm_or_0_operand (operands[3], i2)
      || !register_operand (operands[4], i1))
    return -1;
  return 0;
}

int
pattern1126 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) != E_V8HFmode)
    return -1;
  x5 = XEXP (x3, 2);
  if (GET_CODE (x5) != UNSPEC
      || XVECLEN (x5, 0) != 1
      || XINT (x5, 1) != 223
      || GET_MODE (x5) != E_QImode)
    return -1;
  x6 = XEXP (x2, 2);
  if (XWINT (x6, 0) != 3L
      || !register_operand (operands[0], E_V8HFmode)
      || GET_MODE (x1) != E_V8HFmode
      || GET_MODE (x2) != E_V8HFmode
      || GET_MODE (x3) != E_V8HFmode)
    return -1;
  x7 = XVECEXP (x4, 0, 0);
  operands[1] = x7;
  if (!nonimmediate_operand (operands[1], E_V8HFmode))
    return -1;
  x8 = XVECEXP (x4, 0, 1);
  operands[2] = x8;
  if (!register_operand (operands[2], E_V8HFmode))
    return -1;
  x9 = XEXP (x3, 1);
  operands[3] = x9;
  if (!nonimm_or_0_operand (operands[3], E_V8HFmode))
    return -1;
  x10 = XVECEXP (x5, 0, 0);
  operands[4] = x10;
  if (!register_operand (operands[4], E_QImode))
    return -1;
  x11 = XVECEXP (x1, 0, 1);
  operands[5] = x11;
  if (!const_4_or_8_to_11_operand (operands[5], E_SImode))
    return -1;
  x12 = XEXP (x2, 1);
  if (!rtx_equal_p (x12, operands[1]))
    return -1;
  return 0;
}

int
pattern1140 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i2)
      || GET_MODE (x1) != i2)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != i1
      || !nonimmediate_operand (operands[1], i2)
      || !const0_operand (operands[2], i1))
    return -1;
  return 0;
}

int
pattern1149 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1
      || !register_operand (operands[5], i1)
      || !immediate_operand (operands[3], i1)
      || !register_operand (operands[4], i1)
      || !register_operand (operands[1], i1))
    return -1;
  return 0;
}

int
pattern1155 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  if (GET_CODE (x4) != ZERO_EXTEND)
    return -1;
  x5 = XEXP (x2, 1);
  if (GET_CODE (x5) != ZERO_EXTEND)
    return -1;
  return pattern354 (x1); /* [-1, 3] */
}

int
pattern1160 (rtx x1, machine_mode i1)
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
pattern1170 (rtx x1)
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
  return pattern1169 (x2); /* [-1, 11] */
}

int
pattern1177 (rtx x1)
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
    case REG:
    case SUBREG:
    case MEM:
      operands[0] = x4;
      return 0;

    case STRICT_LOW_PART:
      res = pattern556 (x1);
      if (res >= 0)
        return res + 1; /* [1, 2] */
      return -1;

    default:
      return -1;
    }
}

int
pattern1185 (rtx x1, machine_mode i1)
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
      || !register_operand (operands[3], i1))
    return -1;
  return 0;
}

int
pattern1191 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) != i1)
    return -1;
  x5 = XVECEXP (x1, 0, 1);
  x6 = XEXP (x5, 1);
  if (GET_CODE (x6) != PLUS)
    return -1;
  x7 = XEXP (x2, 0);
  if (GET_MODE (x7) != E_CCCmode
      || GET_MODE (x3) != E_CCCmode)
    return -1;
  x8 = XEXP (x4, 1);
  operands[2] = x8;
  if (!memory_operand (operands[2], i1))
    return -1;
  x9 = XEXP (x4, 0);
  if (!rtx_equal_p (x9, operands[0]))
    return -1;
  x10 = XEXP (x3, 1);
  if (!rtx_equal_p (x10, operands[0]))
    return -1;
  x11 = XEXP (x6, 0);
  if (!rtx_equal_p (x11, operands[0]))
    return -1;
  x12 = XEXP (x6, 1);
  if (!rtx_equal_p (x12, operands[2]))
    return -1;
  return 0;
}

int
pattern1200 (rtx x1, int *pnum_clobbers)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6;
  int res ATTRIBUTE_UNUSED;
  if (pnum_clobbers == NULL)
    return -1;
  x2 = XEXP (x1, 1);
  operands[3] = x2;
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  operands[1] = x4;
  if (!int248_register_operand (operands[1], E_VOIDmode))
    return -1;
  x5 = XEXP (x3, 1);
  operands[2] = x5;
  if (!int248_register_operand (operands[2], E_VOIDmode))
    return -1;
  x6 = XEXP (x1, 0);
  switch (GET_MODE (x6))
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
pattern1213 (rtx x1)
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
    case MEM:
      x4 = XEXP (x2, 2);
      operands[4] = x4;
      switch (GET_MODE (operands[0]))
        {
        case E_V8HFmode:
          return 0;

        case E_V4SFmode:
          return 1;

        case E_V2DFmode:
          return 2;

        default:
          return -1;
        }

    case CONST_INT:
    case CONST_DOUBLE:
    case CONST_VECTOR:
      operands[4] = x3;
      x4 = XEXP (x2, 2);
      operands[5] = x4;
      x5 = XEXP (x1, 1);
      if (!rtx_equal_p (x5, operands[1]))
        return -1;
      switch (GET_MODE (operands[0]))
        {
        case E_V8HFmode:
          return 3;

        case E_V4SFmode:
          return 4;

        case E_V2DFmode:
          return 5;

        default:
          return -1;
        }

    default:
      return -1;
    }
}

int
pattern1227 (rtx x1)
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
          || !register_operand (operands[1], E_V16QImode)
          || !vector_operand (operands[2], E_V16QImode)
          || GET_MODE (x2) != E_V16QImode)
        return -1;
      switch (GET_MODE (x3))
        {
        case E_V4SImode:
          if (!register_operand (operands[3], E_V4SImode)
              || !const0_operand (operands[4], E_V4SImode))
            return -1;
          return 0;

        case E_V2DImode:
          if (!register_operand (operands[3], E_V2DImode)
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
          || GET_MODE (x2) != E_V32QImode)
        return -1;
      switch (GET_MODE (x3))
        {
        case E_V8SImode:
          if (!register_operand (operands[3], E_V8SImode)
              || !const0_operand (operands[4], E_V8SImode))
            return -1;
          return 2;

        case E_V4DImode:
          if (!register_operand (operands[3], E_V4DImode)
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
pattern1245 (rtx x1, machine_mode i1)
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
pattern1251 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  operands[0] = x3;
  if (!nonmemory_operand (operands[2], E_QImode))
    return -1;
  x4 = XEXP (x1, 1);
  return pattern373 (x4); /* [-1, 1] */
}

int
pattern1257 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  if (GET_CODE (x1) != SET)
    return -1;
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) != PLUS
      || GET_MODE (x2) != E_SImode)
    return -1;
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) != REG
      || REGNO (x3) != 7
      || GET_MODE (x3) != E_SImode)
    return -1;
  return 0;
}

int
pattern1262 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 2);
  switch (GET_CODE (x2))
    {
    case REG:
    case SUBREG:
      operands[1] = x2;
      x3 = XEXP (x1, 0);
      operands[0] = x3;
      x4 = XEXP (x1, 1);
      operands[3] = x4;
      switch (GET_MODE (x1))
        {
        case E_V32QImode:
          if (!vector_all_ones_operand (operands[0], E_V32QImode)
              || !const0_operand (operands[3], E_V32QImode)
              || !register_operand (operands[1], E_SImode))
            return -1;
          return 0;

        case E_V16QImode:
          if (!vector_all_ones_operand (operands[0], E_V16QImode)
              || !const0_operand (operands[3], E_V16QImode)
              || !register_operand (operands[1], E_HImode))
            return -1;
          return 1;

        default:
          return -1;
        }

    case UNSPEC:
      if (XVECLEN (x2, 0) != 3
          || XINT (x2, 1) != 59)
        return -1;
      x5 = XVECEXP (x2, 0, 2);
      if (x5 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
        return -1;
      x3 = XEXP (x1, 0);
      operands[3] = x3;
      x4 = XEXP (x1, 1);
      operands[4] = x4;
      x6 = XVECEXP (x2, 0, 0);
      operands[0] = x6;
      x7 = XVECEXP (x2, 0, 1);
      operands[1] = x7;
      switch (GET_MODE (x1))
        {
        case E_V32QImode:
          if (pattern1261 (x2, 
E_V32QImode, 
E_SImode) != 0)
            return -1;
          return 2;

        case E_V16QImode:
          if (pattern1261 (x2, 
E_V16QImode, 
E_HImode) != 0)
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
pattern1292 (rtx x1, machine_mode i1, machine_mode i2)
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
pattern1300 (rtx x1, machine_mode i1, machine_mode i2)
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
  if (GET_MODE (x3) != i2
      || !nonimmediate_operand (operands[1], i2))
    return -1;
  x4 = XEXP (x2, 2);
  return pattern1295 (x4, 
i1, 
i2); /* [-1, 0] */
}

int
pattern1307 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], E_V8HFmode)
      || GET_MODE (x1) != E_V8HFmode)
    return -1;
  x2 = XVECEXP (x1, 0, 0);
  if (GET_MODE (x2) != E_V8HFmode)
    return -1;
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) != E_V8HFmode
      || !nonimm_or_0_operand (operands[2], E_V8HFmode)
      || !register_operand (operands[3], E_QImode))
    return -1;
  switch (GET_MODE (operands[1]))
    {
    case E_V8SImode:
      if (!register_operand (operands[1], E_V8SImode))
        return -1;
      return 0;

    case E_V8DImode:
      if (!register_operand (operands[1], E_V8DImode))
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern1319 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 2);
  if (maybe_ne (SUBREG_BYTE (x3), 0)
      || GET_MODE (x3) != E_QImode)
    return -1;
  x4 = XEXP (x3, 0);
  if (GET_CODE (x4) != AND)
    return -1;
  x5 = XEXP (x1, 0);
  operands[0] = x5;
  x6 = XEXP (x4, 0);
  operands[2] = x6;
  x7 = XEXP (x4, 1);
  operands[3] = x7;
  if (!const_int_operand (operands[3], E_VOIDmode))
    return -1;
  switch (GET_MODE (operands[0]))
    {
    case E_SImode:
      return pattern1318 (x2, 
E_SImode); /* [-1, 0] */

    case E_DImode:
      if (pattern1318 (x2, 
E_DImode) != 0)
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern1328 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  switch (GET_CODE (x2))
    {
    case REG:
    case SUBREG:
    case MEM:
      if (!rtx_equal_p (x2, operands[1]))
        return -1;
      switch (GET_MODE (operands[0]))
        {
        case E_SImode:
          return pattern200 (x1, 
E_SImode); /* [-1, 0] */

        case E_DImode:
          if (pattern200 (x1, 
E_DImode) != 0)
            return -1;
          return 1;

        default:
          return -1;
        }

    case NOT:
      x3 = XEXP (x2, 0);
      if (!rtx_equal_p (x3, operands[1]))
        return -1;
      switch (GET_MODE (operands[0]))
        {
        case E_SImode:
          if (pattern1327 (x1, 
E_SImode) != 0)
            return -1;
          return 2;

        case E_DImode:
          if (pattern1327 (x1, 
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
pattern1345 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) != COMPARE
      || GET_MODE (x2) != E_CCZmode)
    return -1;
  x3 = XEXP (x2, 1);
  if (x3 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
    return -1;
  x4 = XEXP (x1, 0);
  if (GET_CODE (x4) != REG
      || REGNO (x4) != 17
      || GET_MODE (x4) != E_CCZmode)
    return -1;
  x5 = XEXP (x2, 0);
  if (!rtx_equal_p (x5, operands[1]))
    return -1;
  return 0;
}

int
pattern1354 ()
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
pattern1362 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8;
  int res ATTRIBUTE_UNUSED;
  if (!nonimmediate_operand (operands[0], E_SImode))
    return -1;
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) != E_SImode)
    return -1;
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) != E_DImode)
    return -1;
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) != E_DImode)
    return -1;
  x5 = XEXP (x4, 0);
  operands[1] = x5;
  if (!register_operand (operands[1], E_SImode))
    return -1;
  x6 = XEXP (x3, 1);
  operands[3] = x6;
  if (!const_0_to_63_operand (operands[3], E_QImode))
    return -1;
  x7 = XEXP (x1, 0);
  x8 = XEXP (x7, 0);
  if (!rtx_equal_p (x8, operands[0]))
    return -1;
  return 0;
}

int
pattern1371 (rtx x1, machine_mode i1)
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
pattern1383 (rtx x1, machine_mode i1)
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
  x3 = XEXP (x2, 2);
  return pattern1382 (x3, 
i1); /* [-1, 0] */
}

int
pattern1392 (rtx x1, machine_mode i1)
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
      || !nonimmediate_operand (operands[1], i1))
    return -1;
  x4 = XEXP (x2, 2);
  return pattern1382 (x4, 
i1); /* [-1, 0] */
}

int
pattern1401 (rtx x1, machine_mode i1, machine_mode i2)
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
pattern1407 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 1);
  operands[4] = x2;
  if (!const48_operand (operands[4], E_SImode))
    return -1;
  return pattern1406 (x1); /* [-1, 2] */
}

int
pattern1413 (rtx x1, int i1, int i2, int i3, int i4, int i5)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 3);
  if (x2 != const_int_rtx[MAX_SAVED_CONST_INT + i5])
    return -1;
  x3 = XVECEXP (x1, 0, 4);
  if (x3 != const_int_rtx[MAX_SAVED_CONST_INT + i4])
    return -1;
  x4 = XVECEXP (x1, 0, 5);
  if (x4 != const_int_rtx[MAX_SAVED_CONST_INT + i3])
    return -1;
  x5 = XVECEXP (x1, 0, 6);
  if (x5 != const_int_rtx[MAX_SAVED_CONST_INT + i2])
    return -1;
  x6 = XVECEXP (x1, 0, 7);
  if (x6 != const_int_rtx[MAX_SAVED_CONST_INT + i1])
    return -1;
  return 0;
}

int
pattern1423 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!nonimmediate_operand (operands[1], i1)
      || !general_operand (operands[2], i1)
      || !nonimmediate_operand (operands[0], i1)
      || GET_MODE (x1) != i1)
    return -1;
  return 0;
}

int
pattern1429 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 1);
  x3 = XEXP (x2, 0);
  operands[0] = x3;
  x4 = XEXP (x2, 1);
  x5 = XEXP (x4, 0);
  x6 = XEXP (x5, 0);
  if (!rtx_equal_p (x6, operands[1]))
    return -1;
  x7 = XEXP (x4, 1);
  if (!rtx_equal_p (x7, operands[1]))
    return -1;
  x8 = XVECEXP (x1, 0, 0);
  x9 = XEXP (x8, 1);
  x10 = XEXP (x9, 0);
  switch (GET_MODE (x10))
    {
    case E_SImode:
      return pattern1428 (x1, 
E_SImode); /* [-1, 0] */

    case E_DImode:
      if (pattern1428 (x1, 
E_DImode) != 0)
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern1443 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[1], i1)
      || !register_operand (operands[0], i1)
      || GET_MODE (x1) != i1)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != i1
      || !register_operand (operands[4], i1)
      || !register_operand (operands[3], i1))
    return -1;
  return 0;
}

int
pattern1449 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  operands[0] = x3;
  x4 = XEXP (x1, 0);
  switch (GET_MODE (x4))
    {
    case E_SImode:
      if (GET_MODE (x2) != E_SImode)
        return -1;
      x5 = XEXP (x2, 0);
      if (GET_MODE (x5) != E_SImode
          || !const_int_operand (operands[0], E_SImode))
        return -1;
      return 0;

    case E_DImode:
      if (GET_MODE (x2) != E_DImode)
        return -1;
      x5 = XEXP (x2, 0);
      if (GET_MODE (x5) != E_DImode
          || !const_int_operand (operands[0], E_DImode))
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern1462 (rtx x1, machine_mode i1)
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
      || !nonimmediate_operand (operands[3], i1))
    return -1;
  return 0;
}

int
pattern1472 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1
      || !vector_all_ones_operand (operands[1], i1))
    return -1;
  x2 = XEXP (x1, 2);
  return pattern1471 (x2, 
i1, 
i2); /* [-1, 0] */
}

int
pattern1477 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], E_V4DImode)
      || GET_MODE (x1) != E_V4DImode)
    return -1;
  x2 = XVECEXP (x1, 0, 0);
  if (GET_MODE (x2) != E_V4DImode)
    return -1;
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) != E_V4DImode
      || !nonimm_or_0_operand (operands[2], E_V4DImode)
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
pattern1485 (rtx x1, int i1, int i2, int i3, int i4, int i5)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 7);
  if (x2 != const_int_rtx[MAX_SAVED_CONST_INT + i5])
    return -1;
  x3 = XVECEXP (x1, 0, 8);
  if (x3 != const_int_rtx[MAX_SAVED_CONST_INT + i4])
    return -1;
  x4 = XVECEXP (x1, 0, 9);
  if (x4 != const_int_rtx[MAX_SAVED_CONST_INT + i3])
    return -1;
  x5 = XVECEXP (x1, 0, 10);
  if (x5 != const_int_rtx[MAX_SAVED_CONST_INT + i2])
    return -1;
  x6 = XVECEXP (x1, 0, 11);
  if (x6 != const_int_rtx[MAX_SAVED_CONST_INT + i1]
      || pattern1473 (x1) != 0)
    return -1;
  return 0;
}

int
pattern1495 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  switch (GET_MODE (operands[1]))
    {
    case E_SImode:
      if (!nonimmediate_operand (operands[1], E_SImode)
          || !register_operand (operands[0], E_SImode)
          || GET_MODE (x1) != E_SImode)
        return -1;
      return 0;

    case E_DImode:
      if (!nonimmediate_operand (operands[1], E_DImode)
          || !register_operand (operands[0], E_DImode)
          || GET_MODE (x1) != E_DImode)
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern1508 (rtx x1, int i1, int i2, int i3, int i4, int i5)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 7);
  if (x2 != const_int_rtx[MAX_SAVED_CONST_INT + i5])
    return -1;
  x3 = XVECEXP (x1, 0, 8);
  if (x3 != const_int_rtx[MAX_SAVED_CONST_INT + i4])
    return -1;
  x4 = XVECEXP (x1, 0, 9);
  if (x4 != const_int_rtx[MAX_SAVED_CONST_INT + i3])
    return -1;
  x5 = XVECEXP (x1, 0, 10);
  if (x5 != const_int_rtx[MAX_SAVED_CONST_INT + i2])
    return -1;
  x6 = XVECEXP (x1, 0, 11);
  if (x6 != const_int_rtx[MAX_SAVED_CONST_INT + i1]
      || pattern1415 (x1) != 0)
    return -1;
  return 0;
}

int
pattern1520 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i2)
      || GET_MODE (x1) != i2)
    return -1;
  x2 = XVECEXP (x1, 0, 0);
  if (GET_MODE (x2) != i2
      || !register_operand (operands[1], i2)
      || !register_operand (operands[2], i2)
      || !nonimmediate_operand (operands[3], i1))
    return -1;
  return 0;
}

int
pattern1530 (rtx x1, rtx_code i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12;
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
  x11 = XEXP (x3, 0);
  if (!rtx_equal_p (x11, operands[2]))
    return -1;
  x12 = XEXP (x3, 1);
  if (!rtx_equal_p (x12, operands[3]))
    return -1;
  return 0;
}

int
pattern1541 (rtx x1, machine_mode i1)
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
      || !nonimmediate_operand (operands[2], i1)
      || !nonimm_or_0_operand (operands[4], i1)
      || !register_operand (operands[1], i1))
    return -1;
  return 0;
}

int
pattern1547 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (GET_MODE (x1) != i1)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != i1
      || !register_operand (operands[1], i2)
      || !nonimm_or_0_operand (operands[2], i1))
    return -1;
  return 0;
}

int
pattern1555 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  if (GET_CODE (x2) != VEC_SELECT
      || GET_MODE (x2) != i1)
    return -1;
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) != PARALLEL
      || XVECLEN (x3, 0) != 1)
    return -1;
  x4 = XVECEXP (x3, 0, 0);
  if (x4 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
    return -1;
  x5 = XEXP (x1, 1);
  if (GET_CODE (x5) != VEC_SELECT
      || GET_MODE (x5) != i1)
    return -1;
  x6 = XEXP (x5, 1);
  if (GET_CODE (x6) != PARALLEL
      || XVECLEN (x6, 0) != 1)
    return -1;
  x7 = XVECEXP (x6, 0, 0);
  if (x7 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
    return -1;
  return 0;
}

int
pattern1566 (rtx x1, machine_mode i1)
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
      || !general_operand (operands[2], i1))
    return -1;
  return 0;
}

int
pattern1575 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 2);
  operands[3] = x2;
  x3 = XEXP (x1, 1);
  x4 = XEXP (x3, 0);
  if (!rtx_equal_p (x4, operands[2]))
    return -1;
  switch (GET_MODE (operands[0]))
    {
    case E_HImode:
      return pattern1574 (x1, 
E_HImode); /* [-1, 0] */

    case E_SImode:
      if (pattern1574 (x1, 
E_SImode) != 0)
        return -1;
      return 1;

    case E_DImode:
      if (pattern1574 (x1, 
E_DImode) != 0)
        return -1;
      return 2;

    default:
      return -1;
    }
}

int
pattern1584 (rtx x1, machine_mode i1)
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
      || !register_operand (operands[2], i1)
      || !register_operand (operands[1], i1))
    return -1;
  return 0;
}

int
pattern1591 (rtx x1, machine_mode i1, machine_mode i2)
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
      || !register_operand (operands[1], i1))
    return -1;
  x4 = XEXP (x3, 2);
  return pattern1590 (x4, 
i2, 
i1); /* [-1, 0] */
}

int
pattern1600 (rtx x1, machine_mode i1)
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
      return pattern1599 (
E_SImode); /* [-1, 1] */

    case E_DImode:
      res = pattern1599 (
E_DImode);
      if (res >= 0)
        return res + 2; /* [2, 3] */
      return -1;

    default:
      return -1;
    }
}

int
pattern1611 (rtx x1, machine_mode i1, machine_mode i2)
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
      return pattern1610 (
E_SImode); /* [-1, 1] */

    case E_DImode:
      res = pattern1610 (
E_DImode);
      if (res >= 0)
        return res + 2; /* [2, 3] */
      return -1;

    default:
      return -1;
    }
}

int
pattern1623 (rtx x1, machine_mode i1)
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
pattern1630 (rtx x1, int *pnum_clobbers)
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
  x6 = XVECEXP (x1, 0, 2);
  return pattern1571 (x6, pnum_clobbers); /* [-1, 2] */
}

int
pattern1640 (rtx x1, machine_mode i1)
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
      || !nonimm_or_0_operand (operands[3], i1))
    return -1;
  return 0;
}

int
pattern1648 (rtx x1, machine_mode i1)
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
  x5 = XEXP (x3, 2);
  if (GET_MODE (x5) != i1
      || !register_operand (operands[3], i1))
    return -1;
  return 0;
}

int
pattern1660 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) != i1)
    return -1;
  x4 = XEXP (x2, 1);
  if (GET_MODE (x4) != i1)
    return -1;
  switch (GET_MODE (operands[2]))
    {
    case E_SImode:
      return pattern1659 (x1, 
E_SImode); /* [-1, 0] */

    case E_DImode:
      if (pattern1659 (x1, 
E_DImode) != 0)
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern1671 (rtx x1, machine_mode i1, machine_mode i2)
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
      || !nonimmediate_operand (operands[2], i1)
      || !const_0_to_7_operand (operands[3], E_VOIDmode)
      || pattern1670 () != 0)
    return -1;
  return 0;
}

int
pattern1682 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  int res ATTRIBUTE_UNUSED;
  if (!nonmemory_operand (operands[2], E_QImode))
    return -1;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  operands[3] = x3;
  x4 = XEXP (x1, 0);
  x5 = XEXP (x4, 0);
  switch (GET_MODE (x5))
    {
    case E_SImode:
      if (!nonimmediate_operand (operands[1], E_SImode))
        return -1;
      return 0;

    case E_DImode:
      if (!nonimmediate_operand (operands[1], E_DImode))
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern1690 ()
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  switch (GET_MODE (operands[1]))
    {
    case E_V8HFmode:
      if (!register_operand (operands[1], E_V8HFmode)
          || !register_operand (operands[2], E_V8HFmode))
        return -1;
      return 0;

    case E_V4SFmode:
      if (!register_operand (operands[1], E_V4SFmode)
          || !register_operand (operands[2], E_V4SFmode))
        return -1;
      return 1;

    case E_V2DFmode:
      if (!register_operand (operands[1], E_V2DFmode)
          || !register_operand (operands[2], E_V2DFmode))
        return -1;
      return 2;

    default:
      return -1;
    }
}

int
pattern1702 (rtx x1, machine_mode i1, machine_mode i2)
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
      return pattern1701 (
E_SImode); /* [-1, 1] */

    case E_DImode:
      res = pattern1701 (
E_DImode);
      if (res >= 0)
        return res + 2; /* [2, 3] */
      return -1;

    default:
      return -1;
    }
}

int
pattern1712 (machine_mode i1)
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
pattern1720 (machine_mode i1)
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

    case E_V4DImode:
      if (!register_operand (operands[2], E_V4DImode))
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern1727 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  if (maybe_ne (SUBREG_BYTE (x4), 0)
      || GET_MODE (x4) != E_QImode)
    return -1;
  x5 = XEXP (x4, 0);
  switch (GET_CODE (x5))
    {
    case SIGN_EXTRACT:
    case ZERO_EXTRACT:
      operands[4] = x5;
      x6 = XEXP (x5, 1);
      if (x6 != const_int_rtx[MAX_SAVED_CONST_INT + 8])
        return -1;
      x7 = XEXP (x5, 2);
      if (x7 != const_int_rtx[MAX_SAVED_CONST_INT + 8])
        return -1;
      x8 = XEXP (x5, 0);
      operands[2] = x8;
      if (!int248_register_operand (operands[2], E_VOIDmode))
        return -1;
      x9 = XEXP (x1, 0);
      switch (GET_MODE (x9))
        {
        case E_HImode:
          if (GET_MODE (x2) != E_HImode
              || !extract_operator (operands[3], E_HImode)
              || !extract_operator (operands[4], E_HImode))
            return -1;
          return 0;

        case E_SImode:
          if (GET_MODE (x2) != E_SImode
              || !extract_operator (operands[3], E_SImode)
              || !extract_operator (operands[4], E_SImode))
            return -1;
          return 1;

        case E_DImode:
          if (GET_MODE (x2) != E_DImode
              || !extract_operator (operands[3], E_DImode)
              || !extract_operator (operands[4], E_DImode))
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
pattern1747 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (GET_MODE (x1) != i1
      || !ix86_carry_flag_operator (operands[3], i1)
      || !nonimmediate_operand (operands[1], i1)
      || !x86_64_general_operand (operands[2], i1))
    return -1;
  return 0;
}

int
pattern1754 (rtx x1, machine_mode i1, machine_mode i2)
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
      || !x86_64_sext_operand (operands[2], i1)
      || !scratch_operand (operands[0], i1))
    return -1;
  return 0;
}

int
pattern1763 (rtx x1, machine_mode i1, machine_mode i2)
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
  if (GET_MODE (x4) != i2
      || !register_operand (operands[1], i2)
      || !register_operand (operands[2], i2)
      || !register_operand (operands[3], i1))
    return -1;
  return 0;
}

int
pattern1771 (machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!vsib_address_operand (operands[2], i1))
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
pattern1778 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  if (GET_MODE (x1) != E_SImode
      || !general_reg_operand (operands[4], E_SImode))
    return -1;
  x2 = XEXP (x1, 0);
  if (!rtx_equal_p (x2, operands[2]))
    return -1;
  x3 = XEXP (x1, 1);
  if (!rtx_equal_p (x3, operands[0]))
    return -1;
  return 0;
}

int
pattern1785 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != i2
      || !nonimmediate_operand (operands[1], i1))
    return -1;
  x3 = XEXP (x2, 1);
  if (!rtx_equal_p (x3, operands[1]))
    return -1;
  return 0;
}

int
pattern1792 (rtx x1, machine_mode i1, machine_mode i2)
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
      || !x86_64_sext_operand (operands[2], i1)
      || pattern1791 (x1, 
i1, 
i2) != 0)
    return -1;
  return 0;
}

int
pattern1800 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4;
  int res ATTRIBUTE_UNUSED;
  operands[4] = x1;
  if (!register_operand (operands[4], i1))
    return -1;
  x2 = PATTERN (peep2_next_insn (3));
  if (GET_CODE (x2) != SET)
    return -1;
  x3 = XEXP (x2, 1);
  if (!rtx_equal_p (x3, operands[4]))
    return -1;
  x4 = XEXP (x2, 0);
  if (!rtx_equal_p (x4, operands[1]))
    return -1;
  return 0;
}

int
pattern1808 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  x5 = XEXP (x4, 0);
  operands[1] = x5;
  if (!nonimmediate_operand (operands[1], i1))
    return -1;
  x6 = XEXP (x3, 2);
  if (GET_MODE (x6) != i1
      || !register_operand (operands[3], i1))
    return -1;
  x7 = XEXP (x2, 1);
  if (!rtx_equal_p (x7, operands[1]))
    return -1;
  x8 = XEXP (x1, 1);
  if (!rtx_equal_p (x8, operands[1]))
    return -1;
  return 0;
}

int
pattern1818 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  switch (GET_MODE (operands[0]))
    {
    case E_V8SFmode:
      if (!nonimmediate_operand (operands[0], E_V8SFmode)
          || pattern1547 (x1, 
E_V8SFmode, 
E_V16SFmode) != 0)
        return -1;
      return 0;

    case E_V8SImode:
      if (!nonimmediate_operand (operands[0], E_V8SImode)
          || pattern1547 (x1, 
E_V8SImode, 
E_V16SImode) != 0)
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern1825 (rtx x1, machine_mode i1, machine_mode i2, machine_mode i3, machine_mode i4)
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
  if (GET_MODE (x3) != i2)
    return -1;
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) != i4
      || !register_operand (operands[1], i3))
    return -1;
  x5 = XEXP (x3, 1);
  if (GET_MODE (x5) != i4
      || !vector_operand (operands[2], i3)
      || !nonimm_or_0_operand (operands[3], i2)
      || !register_operand (operands[4], i1))
    return -1;
  return 0;
}

int
pattern1832 (rtx x1, machine_mode i1, machine_mode i2)
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
      || !register_operand (operands[3], i2)
      || !register_operand (operands[4], i2))
    return -1;
  x4 = XVECEXP (x1, 0, 1);
  x5 = XEXP (x4, 1);
  if (GET_MODE (x5) != i1)
    return -1;
  return 0;
}

int
pattern1839 (rtx x1, int i1, int i2, int i3, int i4, int i5)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 22);
  if (x2 != const_int_rtx[MAX_SAVED_CONST_INT + i5])
    return -1;
  x3 = XVECEXP (x1, 0, 23);
  if (x3 != const_int_rtx[MAX_SAVED_CONST_INT + i4])
    return -1;
  x4 = XVECEXP (x1, 0, 24);
  if (x4 != const_int_rtx[MAX_SAVED_CONST_INT + i3])
    return -1;
  x5 = XVECEXP (x1, 0, 25);
  if (x5 != const_int_rtx[MAX_SAVED_CONST_INT + i2])
    return -1;
  x6 = XVECEXP (x1, 0, 26);
  if (x6 != const_int_rtx[MAX_SAVED_CONST_INT + i1])
    return -1;
  return 0;
}

int
pattern1848 (rtx x1)
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
pattern1854 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11;
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
      || !nonimmediate_operand (operands[2], i1))
    return -1;
  x7 = XEXP (x3, 1);
  if (GET_MODE (x7) != i2
      || !ix86_carry_flag_operator (operands[4], i2))
    return -1;
  x8 = XEXP (x7, 1);
  if (GET_MODE (x8) != i2
      || !nonimmediate_operand (operands[0], i1))
    return -1;
  x9 = XVECEXP (x1, 0, 1);
  x10 = XEXP (x9, 1);
  if (GET_MODE (x10) != i1)
    return -1;
  x11 = XEXP (x10, 0);
  if (GET_MODE (x11) != i1)
    return -1;
  return 0;
}

int
pattern1861 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XVECEXP (x2, 0, 12);
  if (XWINT (x3, 0) != 14L)
    return -1;
  x4 = XVECEXP (x2, 0, 13);
  if (XWINT (x4, 0) != 30L)
    return -1;
  x5 = XVECEXP (x2, 0, 14);
  if (XWINT (x5, 0) != 15L)
    return -1;
  x6 = XVECEXP (x2, 0, 15);
  if (XWINT (x6, 0) != 31L)
    return -1;
  x7 = XEXP (x1, 0);
  x8 = XEXP (x7, 1);
  operands[2] = x8;
  return 0;
}

int
pattern1865 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 1);
  x4 = XVECEXP (x3, 0, 12);
  if (XWINT (x4, 0) != 14L)
    return -1;
  x5 = XVECEXP (x3, 0, 13);
  if (XWINT (x5, 0) != 30L)
    return -1;
  x6 = XVECEXP (x3, 0, 14);
  if (XWINT (x6, 0) != 15L)
    return -1;
  x7 = XVECEXP (x3, 0, 15);
  if (XWINT (x7, 0) != 31L)
    return -1;
  x8 = XEXP (x2, 0);
  x9 = XEXP (x8, 1);
  operands[2] = x9;
  x10 = XEXP (x1, 1);
  operands[3] = x10;
  x11 = XEXP (x1, 2);
  operands[4] = x11;
  return 0;
}

int
pattern1873 (rtx x1, machine_mode i1, machine_mode i2)
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
      || !sext_operand (operands[2], i1)
      || pattern1872 (x1, 
i1, 
i2) != 0)
    return -1;
  return 0;
}

int
pattern1880 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12, x13, x14, x15, x16, x17;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  x5 = XEXP (x4, 0);
  x6 = XEXP (x5, 0);
  operands[1] = x6;
  if (!nonimmediate_operand (operands[1], E_V8HImode))
    return -1;
  x7 = XEXP (x3, 1);
  x8 = XEXP (x7, 0);
  x9 = XEXP (x8, 0);
  operands[2] = x9;
  if (!nonimmediate_operand (operands[2], E_V8HImode))
    return -1;
  x10 = XEXP (x1, 1);
  operands[3] = x10;
  if (!register_operand (operands[3], E_V4SImode))
    return -1;
  x11 = XEXP (x2, 1);
  x12 = XEXP (x11, 0);
  x13 = XEXP (x12, 0);
  x14 = XEXP (x13, 0);
  if (!rtx_equal_p (x14, operands[1]))
    return -1;
  x15 = XEXP (x11, 1);
  x16 = XEXP (x15, 0);
  x17 = XEXP (x16, 0);
  if (!rtx_equal_p (x17, operands[2]))
    return -1;
  return 0;
}

 int
recog_5 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12;
  int res ATTRIBUTE_UNUSED;
  if (pattern55 (x1, 
E_CCFPmode) != 0)
    return -1;
  x2 = XEXP (x1, 1);
  x3 = XVECEXP (x2, 0, 0);
  if (GET_MODE (x3) != E_CCFPmode)
    return -1;
  switch (GET_CODE (x3))
    {
    case COMPARE:
      x4 = XEXP (x3, 0);
      switch (GET_CODE (x4))
        {
        case REG:
        case SUBREG:
          operands[0] = x4;
          x5 = XEXP (x3, 1);
          operands[1] = x5;
          switch (GET_MODE (operands[0]))
            {
            case E_XFmode:
              if (!register_operand (operands[0], E_XFmode)
                  || !register_operand (operands[1], E_XFmode)
                  || !
#line 2029 "../../gcc/config/i386/i386.md"
(TARGET_80387 && TARGET_CMOVE))
                return -1;
              return 49; /* *cmpiuxf_i387 */

            case E_SFmode:
              if (!register_operand (operands[0], E_SFmode)
                  || !register_ssemem_operand (operands[1], E_SFmode)
                  || !
#line 2069 "../../gcc/config/i386/i386.md"
((SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)
   || (TARGET_80387 && TARGET_CMOVE)))
                return -1;
              return 57; /* *cmpiusf */

            case E_DFmode:
              if (!register_operand (operands[0], E_DFmode)
                  || !register_ssemem_operand (operands[1], E_DFmode)
                  || !
#line 2069 "../../gcc/config/i386/i386.md"
((SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)
   || (TARGET_80387 && TARGET_CMOVE)))
                return -1;
              return 59; /* *cmpiudf */

            case E_HFmode:
              if (!register_operand (operands[0], E_HFmode)
                  || !nonimmediate_operand (operands[1], E_HFmode)
                  || !
#line 2106 "../../gcc/config/i386/i386.md"
(TARGET_AVX512FP16))
                return -1;
              return 61; /* *cmpiuhf */

            default:
              return -1;
            }

        case VEC_SELECT:
          if (pattern602 (x3) != 0)
            return -1;
          x6 = XEXP (x4, 0);
          operands[0] = x6;
          x5 = XEXP (x3, 1);
          x7 = XEXP (x5, 0);
          operands[1] = x7;
          switch (GET_MODE (x4))
            {
            case E_HFmode:
              if (!register_operand (operands[0], E_V8HFmode)
                  || GET_MODE (x5) != E_HFmode
                  || !nonimmediate_operand (operands[1], E_V8HFmode)
                  || !(
#line 4869 "../../gcc/config/i386/sse.md"
(SSE_FLOAT_MODE_P (HFmode) || HFmode == E_HFmode) && 
#line 1355 "../../gcc/config/i386/i386.md"
(TARGET_AVX512FP16)))
                return -1;
              return 3678; /* avx512fp16_ucomi */

            case E_SFmode:
              if (!register_operand (operands[0], E_V4SFmode)
                  || GET_MODE (x5) != E_SFmode
                  || !nonimmediate_operand (operands[1], E_V4SFmode)
                  || !
#line 4869 "../../gcc/config/i386/sse.md"
(SSE_FLOAT_MODE_P (SFmode) || SFmode == E_HFmode))
                return -1;
              return 3682; /* sse_ucomi */

            case E_DFmode:
              if (!register_operand (operands[0], E_V2DFmode)
                  || GET_MODE (x5) != E_DFmode
                  || !nonimmediate_operand (operands[1], E_V2DFmode)
                  || !
#line 4869 "../../gcc/config/i386/sse.md"
(SSE_FLOAT_MODE_P (DFmode) || DFmode == E_HFmode))
                return -1;
              return 3686; /* sse2_ucomi */

            default:
              return -1;
            }

        default:
          return -1;
        }

    case UNSPEC:
      switch (XVECLEN (x3, 0))
        {
        case 1:
          if (XINT (x3, 1) != 44)
            return -1;
          x8 = XVECEXP (x3, 0, 0);
          if (GET_CODE (x8) != COMPARE
              || GET_MODE (x8) != E_CCFPmode)
            return -1;
          x9 = XEXP (x8, 0);
          operands[0] = x9;
          x10 = XEXP (x8, 1);
          operands[1] = x10;
          switch (GET_MODE (operands[0]))
            {
            case E_SFmode:
              if (!register_operand (operands[0], E_SFmode)
                  || !nonimmediate_operand (operands[1], E_SFmode)
                  || !
#line 2045 "../../gcc/config/i386/i386.md"
(TARGET_AVX10_2_256))
                return -1;
              return 51; /* *cmpxusf */

            case E_DFmode:
              if (!register_operand (operands[0], E_DFmode)
                  || !nonimmediate_operand (operands[1], E_DFmode)
                  || !
#line 2045 "../../gcc/config/i386/i386.md"
(TARGET_AVX10_2_256))
                return -1;
              return 53; /* *cmpxudf */

            case E_HFmode:
              if (!register_operand (operands[0], E_HFmode)
                  || !nonimmediate_operand (operands[1], E_HFmode)
                  || !
#line 2058 "../../gcc/config/i386/i386.md"
(TARGET_AVX10_2_256))
                return -1;
              return 55; /* *cmpxuhf */

            default:
              return -1;
            }

        case 2:
          if (XINT (x3, 1) != 61
              || pattern846 (x3) != 0)
            return -1;
          x8 = XVECEXP (x3, 0, 0);
          x9 = XEXP (x8, 0);
          operands[0] = x9;
          x11 = XVECEXP (x3, 0, 1);
          x12 = XEXP (x11, 0);
          operands[1] = x12;
          switch (GET_MODE (x8))
            {
            case E_HFmode:
              if (!register_operand (operands[0], E_V8HFmode)
                  || GET_MODE (x11) != E_HFmode
                  || !nonimmediate_operand (operands[1], E_V8HFmode)
                  || !(
#line 4854 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256) && 
#line 1355 "../../gcc/config/i386/i386.md"
(TARGET_AVX512FP16)))
                return -1;
              return 3666; /* avx10_2_ucomxhf */

            case E_SFmode:
              if (!register_operand (operands[0], E_V4SFmode)
                  || GET_MODE (x11) != E_SFmode
                  || !nonimmediate_operand (operands[1], E_V4SFmode)
                  || !
#line 4854 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
                return -1;
              return 3670; /* avx10_2_ucomxsf */

            case E_DFmode:
              if (!register_operand (operands[0], E_V2DFmode)
                  || GET_MODE (x11) != E_DFmode
                  || !nonimmediate_operand (operands[1], E_V2DFmode)
                  || !
#line 4854 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
                return -1;
              return 3674; /* avx10_2_ucomxdf */

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
recog_16 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  operands[1] = x2;
  switch (GET_MODE (operands[0]))
    {
    case E_V1TImode:
      if (!push_operand (operands[0], E_V1TImode)
          || !register_operand (operands[1], E_V1TImode))
        return -1;
      if ((
#line 2175 "../../gcc/config/i386/i386.md"
(TARGET_64BIT && TARGET_STV) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode)))
        return 65; /* *pushv1ti2 */
      if (!(
#line 2175 "../../gcc/config/i386/i386.md"
(TARGET_64BIT && TARGET_STV) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode)))
        return -1;
      return 66; /* *pushv1ti2 */

    case E_DImode:
      if (push_operand (operands[0], E_DImode)
          && general_no_elim_operand (operands[1], E_DImode))
        {
          if (
#line 1195 "../../gcc/config/i386/i386.md"
(!TARGET_64BIT))
            return 67; /* *pushdi2 */
          if (
#line 2206 "../../gcc/config/i386/i386.md"
(TARGET_64BIT))
            return 69; /* *pushdi2_rex64 */
        }
      if (nonimmediate_operand (operands[0], E_DImode)
          && pop_operand (operands[1], E_DImode)
          && 
#line 1403 "../../gcc/config/i386/i386.md"
(word_mode == DImode))
        return 77; /* *popdi1 */
      if (pnum_clobbers != NULL
          && const0_operand (operands[1], E_DImode))
        {
          if (register_operand (operands[0], E_DImode)
              && (
#line 2424 "../../gcc/config/i386/i386.md"
(reload_completed) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
            {
              *pnum_clobbers = 1;
              return 85; /* *movdi_xor */
            }
          if (memory_operand (operands[0], E_DImode)
              && (
#line 2434 "../../gcc/config/i386/i386.md"
(reload_completed) && 
#line 1164 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
            {
              *pnum_clobbers = 1;
              return 88; /* *movdi_and */
            }
        }
      if (!nonimmediate_operand (operands[0], E_DImode))
        return -1;
      if (pnum_clobbers != NULL
          && constm1_operand (operands[1], E_DImode)
          && (
#line 2444 "../../gcc/config/i386/i386.md"
(reload_completed) && 
#line 1164 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
        {
          *pnum_clobbers = 1;
          return 91; /* *movdi_or */
        }
      if (!general_operand (operands[1], E_DImode)
          || !
#line 2584 "../../gcc/config/i386/i386.md"
(!(MEM_P (operands[0]) && MEM_P (operands[1]))
   && ix86_hardreg_mov_ok (operands[0], operands[1])))
        return -1;
      return 95; /* *movdi_internal */

    case E_TImode:
      if (push_operand (operands[0], E_TImode)
          && general_no_elim_operand (operands[1], E_TImode)
          && 
#line 1196 "../../gcc/config/i386/i386.md"
(TARGET_64BIT))
        return 68; /* *pushti2 */
      if (!nonimmediate_operand (operands[0], E_TImode)
          || !general_operand (operands[1], E_TImode)
          || !
#line 2500 "../../gcc/config/i386/i386.md"
((TARGET_64BIT
    && !(MEM_P (operands[0]) && MEM_P (operands[1])))
   || (TARGET_SSE
       && nonimmediate_or_sse_const_operand (operands[1], TImode)
       && (register_operand (operands[0], TImode)
	   || register_operand (operands[1], TImode)))))
        return -1;
      return 94; /* *movti_internal */

    case E_SImode:
      if (push_operand (operands[0], E_SImode))
        {
          if (nonmemory_no_elim_operand (operands[1], E_SImode)
              && 
#line 2249 "../../gcc/config/i386/i386.md"
(TARGET_64BIT))
            return 70; /* *pushsi2_rex64 */
          if (general_no_elim_operand (operands[1], E_SImode)
              && 
#line 2259 "../../gcc/config/i386/i386.md"
(!TARGET_64BIT))
            return 71; /* *pushsi2 */
        }
      if (nonimmediate_operand (operands[0], E_SImode)
          && pop_operand (operands[1], E_SImode)
          && 
#line 1403 "../../gcc/config/i386/i386.md"
(word_mode == SImode))
        return 76; /* *popsi1 */
      if (pnum_clobbers != NULL
          && const0_operand (operands[1], E_SImode))
        {
          if (register_operand (operands[0], E_SImode)
              && 
#line 2424 "../../gcc/config/i386/i386.md"
(reload_completed))
            {
              *pnum_clobbers = 1;
              return 84; /* *movsi_xor */
            }
          if (memory_operand (operands[0], E_SImode)
              && 
#line 2434 "../../gcc/config/i386/i386.md"
(reload_completed))
            {
              *pnum_clobbers = 1;
              return 87; /* *movsi_and */
            }
        }
      if (!nonimmediate_operand (operands[0], E_SImode))
        return -1;
      if (pnum_clobbers != NULL
          && constm1_operand (operands[1], E_SImode)
          && 
#line 2444 "../../gcc/config/i386/i386.md"
(reload_completed))
        {
          *pnum_clobbers = 1;
          return 90; /* *movsi_or */
        }
      if (!general_operand (operands[1], E_SImode)
          || !
#line 2824 "../../gcc/config/i386/i386.md"
(!(MEM_P (operands[0]) && MEM_P (operands[1]))
   && ix86_hardreg_mov_ok (operands[0], operands[1])))
        return -1;
      return 96; /* *movsi_internal */

    case E_QImode:
      if (push_operand (operands[0], E_QImode)
          && nonmemory_no_elim_operand (operands[1], E_QImode))
        return 72; /* *pushqi2 */
      if (!nonimmediate_operand (operands[0], E_QImode)
          || !general_operand (operands[1], E_QImode)
          || !
#line 3144 "../../gcc/config/i386/i386.md"
(!(MEM_P (operands[0]) && MEM_P (operands[1]))
   && ix86_hardreg_mov_ok (operands[0], operands[1])))
        return -1;
      return 98; /* *movqi_internal */

    case E_HImode:
      if (push_operand (operands[0], E_HImode)
          && nonmemory_no_elim_operand (operands[1], E_HImode))
        return 73; /* *pushhi2 */
      if (pnum_clobbers != NULL
          && memory_operand (operands[0], E_HImode)
          && const0_operand (operands[1], E_HImode)
          && 
#line 2434 "../../gcc/config/i386/i386.md"
(reload_completed))
        {
          *pnum_clobbers = 1;
          return 86; /* *movhi_and */
        }
      if (!nonimmediate_operand (operands[0], E_HImode))
        return -1;
      if (pnum_clobbers != NULL
          && constm1_operand (operands[1], E_HImode)
          && 
#line 2444 "../../gcc/config/i386/i386.md"
(reload_completed))
        {
          *pnum_clobbers = 1;
          return 89; /* *movhi_or */
        }
      if (!general_operand (operands[1], E_HImode)
          || !
#line 2981 "../../gcc/config/i386/i386.md"
(!(MEM_P (operands[0]) && MEM_P (operands[1]))
   && ix86_hardreg_mov_ok (operands[0], operands[1])))
        return -1;
      return 97; /* *movhi_internal */

    case E_TFmode:
      if (push_operand (operands[0], E_TFmode)
          && general_no_elim_operand (operands[1], E_TFmode)
          && 
#line 3765 "../../gcc/config/i386/i386.md"
(TARGET_64BIT || TARGET_SSE))
        return 152; /* *pushtf */
      if (!nonimmediate_operand (operands[0], E_TFmode)
          || !general_operand (operands[1], E_TFmode)
          || !
#line 4034 "../../gcc/config/i386/i386.md"
((TARGET_64BIT || TARGET_SSE)
   && !(MEM_P (operands[0]) && MEM_P (operands[1]))
   && (lra_in_progress || reload_completed
       || !CONST_DOUBLE_P (operands[1])
       || (standard_sse_constant_p (operands[1], TFmode) == 1
	   && !memory_operand (operands[0], TFmode))
       || (!TARGET_MEMORY_MISMATCH_STALL
	   && memory_operand (operands[0], TFmode)))))
        return -1;
      return 167; /* *movtf_internal */

    case E_XFmode:
      if (push_operand (operands[0], E_XFmode)
          && general_no_elim_operand (operands[1], E_XFmode))
        return 153; /* *pushxf */
      if (!nonimmediate_operand (operands[0], E_XFmode)
          || !general_operand (operands[1], E_XFmode)
          || !
#line 4094 "../../gcc/config/i386/i386.md"
(!(MEM_P (operands[0]) && MEM_P (operands[1]))
   && (lra_in_progress || reload_completed
       || !CONST_DOUBLE_P (operands[1])
       || ((optimize_function_for_size_p (cfun)
	    || (ix86_cmodel == CM_LARGE || ix86_cmodel == CM_LARGE_PIC))
	   && standard_80387_constant_p (operands[1]) > 0
	   && !memory_operand (operands[0], XFmode))
       || (!TARGET_MEMORY_MISMATCH_STALL
	   && memory_operand (operands[0], XFmode))
       || !TARGET_HARD_XF_REGS)))
        return -1;
      return 168; /* *movxf_internal */

    case E_DFmode:
      if (push_operand (operands[0], E_DFmode)
          && general_no_elim_operand (operands[1], E_DFmode))
        return 154; /* *pushdf */
      if (!nonimmediate_operand (operands[0], E_DFmode)
          || !general_operand (operands[1], E_DFmode)
          || !
#line 4166 "../../gcc/config/i386/i386.md"
(!(MEM_P (operands[0]) && MEM_P (operands[1]))
   && (lra_in_progress || reload_completed
       || !CONST_DOUBLE_P (operands[1])
       || ((optimize_function_for_size_p (cfun)
	    || (ix86_cmodel == CM_LARGE || ix86_cmodel == CM_LARGE_PIC))
	   && IS_STACK_MODE (DFmode)
	   && standard_80387_constant_p (operands[1]) > 0
	   && !memory_operand (operands[0], DFmode))
       || (TARGET_SSE2 && TARGET_SSE_MATH
	   && standard_sse_constant_p (operands[1], DFmode) == 1
	   && !memory_operand (operands[0], DFmode))
       || ((TARGET_64BIT || !TARGET_MEMORY_MISMATCH_STALL)
	   && memory_operand (operands[0], DFmode))
       || !TARGET_HARD_DF_REGS)))
        return -1;
      return 169; /* *movdf_internal */

    case E_HFmode:
      if (push_operand (operands[0], E_HFmode))
        {
          if (nonmemory_no_elim_operand (operands[1], E_HFmode)
              && 
#line 3861 "../../gcc/config/i386/i386.md"
(TARGET_64BIT))
            return 155; /* *pushhf_rex64 */
          if (general_no_elim_operand (operands[1], E_HFmode)
              && 
#line 3874 "../../gcc/config/i386/i386.md"
(!TARGET_64BIT))
            return 157; /* *pushhf */
        }
      if (!nonimmediate_operand (operands[0], E_HFmode)
          || !general_operand (operands[1], E_HFmode)
          || !
#line 4478 "../../gcc/config/i386/i386.md"
(!(MEM_P (operands[0]) && MEM_P (operands[1]))
  && (lra_in_progress
      || reload_completed
      || !CONST_DOUBLE_P (operands[1])
      || (TARGET_SSE2
	  && standard_sse_constant_p (operands[1], HFmode) == 1)
      || memory_operand (operands[0], HFmode))))
        return -1;
      return 171; /* *movhf_internal */

    case E_BFmode:
      if (push_operand (operands[0], E_BFmode))
        {
          if (nonmemory_no_elim_operand (operands[1], E_BFmode)
              && 
#line 3861 "../../gcc/config/i386/i386.md"
(TARGET_64BIT))
            return 156; /* *pushbf_rex64 */
          if (general_no_elim_operand (operands[1], E_BFmode)
              && 
#line 3874 "../../gcc/config/i386/i386.md"
(!TARGET_64BIT))
            return 158; /* *pushbf */
        }
      if (!nonimmediate_operand (operands[0], E_BFmode)
          || !general_operand (operands[1], E_BFmode)
          || !
#line 4478 "../../gcc/config/i386/i386.md"
(!(MEM_P (operands[0]) && MEM_P (operands[1]))
  && (lra_in_progress
      || reload_completed
      || !CONST_DOUBLE_P (operands[1])
      || (TARGET_SSE2
	  && standard_sse_constant_p (operands[1], BFmode) == 1)
      || memory_operand (operands[0], BFmode))))
        return -1;
      return 172; /* *movbf_internal */

    case E_SFmode:
      if (push_operand (operands[0], E_SFmode))
        {
          if (nonmemory_no_elim_operand (operands[1], E_SFmode)
              && 
#line 3949 "../../gcc/config/i386/i386.md"
(TARGET_64BIT))
            return 165; /* *pushsf_rex64 */
          if (general_no_elim_operand (operands[1], E_SFmode)
              && 
#line 3963 "../../gcc/config/i386/i386.md"
(!TARGET_64BIT))
            return 166; /* *pushsf */
        }
      if (!nonimmediate_operand (operands[0], E_SFmode)
          || !general_operand (operands[1], E_SFmode)
          || !
#line 4343 "../../gcc/config/i386/i386.md"
(!(MEM_P (operands[0]) && MEM_P (operands[1]))
   && (lra_in_progress || reload_completed
       || !CONST_DOUBLE_P (operands[1])
       || ((optimize_function_for_size_p (cfun)
	    || (ix86_cmodel == CM_LARGE || ix86_cmodel == CM_LARGE_PIC))
	   && IS_STACK_MODE (SFmode)
	   && standard_80387_constant_p (operands[1]) > 0)
       || (TARGET_SSE && TARGET_SSE_MATH
	   && standard_sse_constant_p (operands[1], SFmode) == 1)
       || memory_operand (operands[0], SFmode)
       || !TARGET_HARD_SF_REGS)))
        return -1;
      return 170; /* *movsf_internal */

    case E_V8QImode:
      if (nonimmediate_operand (operands[0], E_V8QImode)
          && nonimm_or_0_operand (operands[1], E_V8QImode)
          && 
#line 189 "../../gcc/config/i386/mmx.md"
((TARGET_MMX || TARGET_MMX_WITH_SSE)
   && !(MEM_P (operands[0]) && MEM_P (operands[1]))
   && ix86_hardreg_mov_ok (operands[0], operands[1])))
        return 2013; /* *movv8qi_internal */
      if (!memory_operand (operands[0], E_V8QImode)
          || !x86_64_const_vector_operand (operands[1], E_V8QImode)
          || !
#line 87 "../../gcc/config/i386/mmx.md"
(TARGET_64BIT))
        return -1;
      return 2029; /* *movv8qi_imm */

    case E_V4HImode:
      if (nonimmediate_operand (operands[0], E_V4HImode)
          && nonimm_or_0_operand (operands[1], E_V4HImode)
          && 
#line 189 "../../gcc/config/i386/mmx.md"
((TARGET_MMX || TARGET_MMX_WITH_SSE)
   && !(MEM_P (operands[0]) && MEM_P (operands[1]))
   && ix86_hardreg_mov_ok (operands[0], operands[1])))
        return 2014; /* *movv4hi_internal */
      if (!memory_operand (operands[0], E_V4HImode)
          || !x86_64_const_vector_operand (operands[1], E_V4HImode)
          || !
#line 87 "../../gcc/config/i386/mmx.md"
(TARGET_64BIT))
        return -1;
      return 2030; /* *movv4hi_imm */

    case E_V2SImode:
      if (nonimmediate_operand (operands[0], E_V2SImode)
          && nonimm_or_0_operand (operands[1], E_V2SImode)
          && 
#line 189 "../../gcc/config/i386/mmx.md"
((TARGET_MMX || TARGET_MMX_WITH_SSE)
   && !(MEM_P (operands[0]) && MEM_P (operands[1]))
   && ix86_hardreg_mov_ok (operands[0], operands[1])))
        return 2015; /* *movv2si_internal */
      if (!memory_operand (operands[0], E_V2SImode)
          || !x86_64_const_vector_operand (operands[1], E_V2SImode)
          || !
#line 89 "../../gcc/config/i386/mmx.md"
(TARGET_64BIT))
        return -1;
      return 2033; /* *movv2si_imm */

    case E_V1DImode:
      if (!nonimmediate_operand (operands[0], E_V1DImode)
          || !nonimm_or_0_operand (operands[1], E_V1DImode)
          || !
#line 189 "../../gcc/config/i386/mmx.md"
((TARGET_MMX || TARGET_MMX_WITH_SSE)
   && !(MEM_P (operands[0]) && MEM_P (operands[1]))
   && ix86_hardreg_mov_ok (operands[0], operands[1])))
        return -1;
      return 2016; /* *movv1di_internal */

    case E_V2SFmode:
      if (nonimmediate_operand (operands[0], E_V2SFmode)
          && nonimm_or_0_operand (operands[1], E_V2SFmode)
          && 
#line 189 "../../gcc/config/i386/mmx.md"
((TARGET_MMX || TARGET_MMX_WITH_SSE)
   && !(MEM_P (operands[0]) && MEM_P (operands[1]))
   && ix86_hardreg_mov_ok (operands[0], operands[1])))
        return 2017; /* *movv2sf_internal */
      if (!memory_operand (operands[0], E_V2SFmode)
          || !x86_64_const_vector_operand (operands[1], E_V2SFmode)
          || !
#line 89 "../../gcc/config/i386/mmx.md"
(TARGET_64BIT))
        return -1;
      return 2034; /* *movv2sf_imm */

    case E_V4HFmode:
      if (nonimmediate_operand (operands[0], E_V4HFmode)
          && nonimm_or_0_operand (operands[1], E_V4HFmode)
          && 
#line 189 "../../gcc/config/i386/mmx.md"
((TARGET_MMX || TARGET_MMX_WITH_SSE)
   && !(MEM_P (operands[0]) && MEM_P (operands[1]))
   && ix86_hardreg_mov_ok (operands[0], operands[1])))
        return 2018; /* *movv4hf_internal */
      if (!memory_operand (operands[0], E_V4HFmode)
          || !x86_64_const_vector_operand (operands[1], E_V4HFmode)
          || !
#line 88 "../../gcc/config/i386/mmx.md"
(TARGET_64BIT))
        return -1;
      return 2031; /* *movv4hf_imm */

    case E_V4BFmode:
      if (nonimmediate_operand (operands[0], E_V4BFmode)
          && nonimm_or_0_operand (operands[1], E_V4BFmode)
          && 
#line 189 "../../gcc/config/i386/mmx.md"
((TARGET_MMX || TARGET_MMX_WITH_SSE)
   && !(MEM_P (operands[0]) && MEM_P (operands[1]))
   && ix86_hardreg_mov_ok (operands[0], operands[1])))
        return 2019; /* *movv4bf_internal */
      if (!memory_operand (operands[0], E_V4BFmode)
          || !x86_64_const_vector_operand (operands[1], E_V4BFmode)
          || !
#line 88 "../../gcc/config/i386/mmx.md"
(TARGET_64BIT))
        return -1;
      return 2032; /* *movv4bf_imm */

    case E_V4QImode:
      if (nonimmediate_operand (operands[0], E_V4QImode)
          && general_operand (operands[1], E_V4QImode)
          && 
#line 344 "../../gcc/config/i386/mmx.md"
(!(MEM_P (operands[0]) && MEM_P (operands[1]))
   && ix86_hardreg_mov_ok (operands[0], operands[1])))
        return 2020; /* *movv4qi_internal */
      if (memory_operand (operands[0], E_V4QImode)
          && x86_64_const_vector_operand (operands[1], E_V4QImode))
        return 2026; /* *movv4qi_imm */
      if (!push_operand (operands[0], E_V4QImode)
          || !nonmemory_no_elim_operand (operands[1], E_V4QImode)
          || !
#line 430 "../../gcc/config/i386/mmx.md"
(TARGET_64BIT))
        return -1;
      return 2035; /* *pushv4qi2_rex64 */

    case E_V2HImode:
      if (nonimmediate_operand (operands[0], E_V2HImode)
          && general_operand (operands[1], E_V2HImode)
          && 
#line 344 "../../gcc/config/i386/mmx.md"
(!(MEM_P (operands[0]) && MEM_P (operands[1]))
   && ix86_hardreg_mov_ok (operands[0], operands[1])))
        return 2021; /* *movv2hi_internal */
      if (memory_operand (operands[0], E_V2HImode)
          && x86_64_const_vector_operand (operands[1], E_V2HImode))
        return 2027; /* *movv2hi_imm */
      if (!push_operand (operands[0], E_V2HImode)
          || !nonmemory_no_elim_operand (operands[1], E_V2HImode)
          || !
#line 430 "../../gcc/config/i386/mmx.md"
(TARGET_64BIT))
        return -1;
      return 2036; /* *pushv2hi2_rex64 */

    case E_V1SImode:
      if (nonimmediate_operand (operands[0], E_V1SImode)
          && general_operand (operands[1], E_V1SImode)
          && 
#line 344 "../../gcc/config/i386/mmx.md"
(!(MEM_P (operands[0]) && MEM_P (operands[1]))
   && ix86_hardreg_mov_ok (operands[0], operands[1])))
        return 2022; /* *movv1si_internal */
      if (!push_operand (operands[0], E_V1SImode)
          || !nonmemory_no_elim_operand (operands[1], E_V1SImode)
          || !
#line 430 "../../gcc/config/i386/mmx.md"
(TARGET_64BIT))
        return -1;
      return 2037; /* *pushv1si2_rex64 */

    case E_V2HFmode:
      if (nonimmediate_operand (operands[0], E_V2HFmode)
          && general_operand (operands[1], E_V2HFmode)
          && 
#line 344 "../../gcc/config/i386/mmx.md"
(!(MEM_P (operands[0]) && MEM_P (operands[1]))
   && ix86_hardreg_mov_ok (operands[0], operands[1])))
        return 2023; /* *movv2hf_internal */
      if (memory_operand (operands[0], E_V2HFmode)
          && x86_64_const_vector_operand (operands[1], E_V2HFmode))
        return 2028; /* *movv2hf_imm */
      if (!push_operand (operands[0], E_V2HFmode)
          || !nonmemory_no_elim_operand (operands[1], E_V2HFmode)
          || !
#line 430 "../../gcc/config/i386/mmx.md"
(TARGET_64BIT))
        return -1;
      return 2038; /* *pushv2hf2_rex64 */

    case E_V2BFmode:
      if (nonimmediate_operand (operands[0], E_V2BFmode)
          && general_operand (operands[1], E_V2BFmode)
          && 
#line 344 "../../gcc/config/i386/mmx.md"
(!(MEM_P (operands[0]) && MEM_P (operands[1]))
   && ix86_hardreg_mov_ok (operands[0], operands[1])))
        return 2024; /* *movv2bf_internal */
      if (!push_operand (operands[0], E_V2BFmode)
          || !nonmemory_no_elim_operand (operands[1], E_V2BFmode)
          || !
#line 430 "../../gcc/config/i386/mmx.md"
(TARGET_64BIT))
        return -1;
      return 2039; /* *pushv2bf2_rex64 */

    case E_V2QImode:
      if (memory_operand (operands[0], E_V2QImode)
          && x86_64_const_vector_operand (operands[1], E_V2QImode))
        return 2025; /* *movv2qi_imm */
      if (nonimmediate_operand (operands[0], E_V2QImode)
          && general_operand (operands[1], E_V2QImode)
          && 
#line 472 "../../gcc/config/i386/mmx.md"
(!(MEM_P (operands[0]) && MEM_P (operands[1]))))
        return 2040; /* *movv2qi_internal */
      if (!push_operand (operands[0], E_V2QImode)
          || !nonmemory_no_elim_operand (operands[1], E_V2QImode))
        return -1;
      return 2041; /* *pushv2qi2 */

    case E_P2QImode:
      if (!nonimmediate_operand (operands[0], E_P2QImode)
          || !nonimmediate_operand (operands[1], E_P2QImode)
          || !
#line 30945 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VP2INTERSECT
   && !(MEM_P (operands[0]) && MEM_P (operands[1]))))
        return -1;
      return 10326; /* *movp2qi_internal */

    case E_P2HImode:
      if (!nonimmediate_operand (operands[0], E_P2HImode)
          || !nonimmediate_operand (operands[1], E_P2HImode)
          || !
#line 30945 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VP2INTERSECT
   && !(MEM_P (operands[0]) && MEM_P (operands[1]))))
        return -1;
      return 10327; /* *movp2hi_internal */

    default:
      return -1;
    }
}

 int
recog_31 (rtx x1 ATTRIBUTE_UNUSED,
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
      if (register_operand (operands[0], E_SImode))
        {
          switch (pattern259 ())
            {
            case 0:
              if (
#line 5769 "../../gcc/config/i386/i386.md"
(TARGET_AVX512FP16))
                return 212; /* fix_trunchfsi2 */
              break;

            case 1:
              if (
#line 5945 "../../gcc/config/i386/i386.md"
(SSE_FLOAT_MODE_P (SFmode)
   && (!TARGET_FISTTP || TARGET_SSE_MATH)))
                return 225; /* fix_truncsfsi_sse */
              break;

            case 2:
              if (
#line 5945 "../../gcc/config/i386/i386.md"
(SSE_FLOAT_MODE_P (DFmode)
   && (!TARGET_FISTTP || TARGET_SSE_MATH)))
                return 227; /* fix_truncdfsi_sse */
              break;

            default:
              break;
            }
        }
      if (pnum_clobbers == NULL
          || !nonimmediate_operand (operands[0], E_SImode)
          || !register_operand (operands[1], E_VOIDmode))
        return -1;
      if (
#line 5975 "../../gcc/config/i386/i386.md"
(X87_FLOAT_MODE_P (GET_MODE (operands[1]))
   && TARGET_FISTTP
   && !((SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	 && (TARGET_64BIT || SImode != DImode))
	&& TARGET_SSE_MATH)))
        {
          *pnum_clobbers = 1;
          return 230; /* fix_truncsi_i387_fisttp */
        }
      if (!
#line 5993 "../../gcc/config/i386/i386.md"
(X87_FLOAT_MODE_P (GET_MODE (operands[1]))
   && !TARGET_FISTTP
   && !(SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	 && (TARGET_64BIT || SImode != DImode))
   && ix86_pre_reload_split ()))
        return -1;
      *pnum_clobbers = 1;
      return 233; /* *fix_truncsi_i387_1 */

    case E_DImode:
      if (GET_MODE (x3) != E_DImode)
        return -1;
      if (register_operand (operands[0], E_DImode))
        {
          switch (pattern259 ())
            {
            case 0:
              if ((
#line 5769 "../../gcc/config/i386/i386.md"
(TARGET_AVX512FP16) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return 214; /* fix_trunchfdi2 */
              break;

            case 1:
              if ((
#line 5945 "../../gcc/config/i386/i386.md"
(SSE_FLOAT_MODE_P (SFmode)
   && (!TARGET_FISTTP || TARGET_SSE_MATH)) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return 226; /* fix_truncsfdi_sse */
              break;

            case 2:
              if ((
#line 5945 "../../gcc/config/i386/i386.md"
(SSE_FLOAT_MODE_P (DFmode)
   && (!TARGET_FISTTP || TARGET_SSE_MATH)) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return 228; /* fix_truncdfdi_sse */
              break;

            default:
              break;
            }
        }
      if (pnum_clobbers == NULL
          || !nonimmediate_operand (operands[0], E_DImode)
          || !register_operand (operands[1], E_VOIDmode))
        return -1;
      if (
#line 5975 "../../gcc/config/i386/i386.md"
(X87_FLOAT_MODE_P (GET_MODE (operands[1]))
   && TARGET_FISTTP
   && !((SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	 && (TARGET_64BIT || DImode != DImode))
	&& TARGET_SSE_MATH)))
        {
          *pnum_clobbers = 1;
          return 231; /* fix_truncdi_i387_fisttp */
        }
      if (!
#line 5993 "../../gcc/config/i386/i386.md"
(X87_FLOAT_MODE_P (GET_MODE (operands[1]))
   && !TARGET_FISTTP
   && !(SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	 && (TARGET_64BIT || DImode != DImode))
   && ix86_pre_reload_split ()))
        return -1;
      *pnum_clobbers = 1;
      return 234; /* *fix_truncdi_i387_1 */

    case E_HImode:
      if (pattern258 (x3, pnum_clobbers, 
E_VOIDmode, 
E_HImode) != 0)
        return -1;
      if (
#line 5975 "../../gcc/config/i386/i386.md"
(X87_FLOAT_MODE_P (GET_MODE (operands[1]))
   && TARGET_FISTTP
   && !((SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	 && (TARGET_64BIT || HImode != DImode))
	&& TARGET_SSE_MATH)))
        {
          *pnum_clobbers = 1;
          return 229; /* fix_trunchi_i387_fisttp */
        }
      if (!
#line 5993 "../../gcc/config/i386/i386.md"
(X87_FLOAT_MODE_P (GET_MODE (operands[1]))
   && !TARGET_FISTTP
   && !(SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	 && (TARGET_64BIT || HImode != DImode))
   && ix86_pre_reload_split ()))
        return -1;
      *pnum_clobbers = 1;
      return 232; /* *fix_trunchi_i387_1 */

    case E_V2SImode:
      if (!register_operand (operands[0], E_V2SImode)
          || GET_MODE (x3) != E_V2SImode
          || !vector_operand (operands[1], E_V2DFmode)
          || !
#line 8932 "../../gcc/config/i386/sse.md"
(TARGET_SSE2))
        return -1;
      return 4898; /* sse2_cvttpd2pi */

    default:
      return -1;
    }
}

 int
recog_38 (rtx x1 ATTRIBUTE_UNUSED,
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
    case REG:
    case SUBREG:
    case MEM:
      operands[1] = x3;
      res = recog_35 (x1, insn, pnum_clobbers);
      if (res >= 0)
        return res;
      if (pnum_clobbers == NULL
          || GET_CODE (x3) != SUBREG
          || maybe_ne (SUBREG_BYTE (x3), 0))
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
              || GET_MODE (x3) != E_QImode)
            return -1;
          x7 = XEXP (x4, 0);
          operands[2] = x7;
          switch (pattern1265 (x1))
            {
            case 0:
              if (
#line 12768 "../../gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)))
                {
                  *pnum_clobbers = 1;
                  return 731; /* *andqi_exthi_1_slp */
                }
              break;

            case 1:
              if (
#line 12768 "../../gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)))
                {
                  *pnum_clobbers = 1;
                  return 734; /* *andqi_extsi_1_slp */
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
                  return 737; /* *andqi_extdi_1_slp */
                }
              break;

            case 3:
              *pnum_clobbers = 1;
              return 755; /* *andqi_exthi_0 */

            case 4:
              *pnum_clobbers = 1;
              return 758; /* *andqi_extsi_0 */

            case 5:
              if (
#line 1164 "../../gcc/config/i386/i386.md"
(TARGET_64BIT))
                {
                  *pnum_clobbers = 1;
                  return 761; /* *andqi_extdi_0 */
                }
              break;

            default:
              break;
            }
          x8 = XEXP (x2, 1);
          if (GET_CODE (x8) != SUBREG)
            return -1;
          switch (pattern1268 (x1))
            {
            case 0:
              if (!
#line 12801 "../../gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)))
                return -1;
              *pnum_clobbers = 1;
              return 740; /* *andqi_exthi_2_slp */

            case 1:
              if (!
#line 12801 "../../gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)))
                return -1;
              *pnum_clobbers = 1;
              return 743; /* *andqi_extsi_2_slp */

            case 2:
              if (!(
#line 12801 "../../gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)) && 
#line 1164 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return -1;
              *pnum_clobbers = 1;
              return 746; /* *andqi_extdi_2_slp */

            case 3:
              *pnum_clobbers = 1;
              return 764; /* *andqi_ext2hi_0 */

            case 4:
              *pnum_clobbers = 1;
              return 767; /* *andqi_ext2si_0 */

            case 5:
              if (!
#line 1164 "../../gcc/config/i386/i386.md"
(TARGET_64BIT))
                return -1;
              *pnum_clobbers = 1;
              return 770; /* *andqi_ext2di_0 */

            default:
              return -1;
            }

        case ROTATE:
          if (GET_MODE (x4) != E_SImode)
            return -1;
          x7 = XEXP (x4, 0);
          if (x7 != const_int_rtx[MAX_SAVED_CONST_INT + -2])
            return -1;
          x9 = XEXP (x1, 0);
          operands[0] = x9;
          x5 = XEXP (x4, 1);
          operands[2] = x5;
          if (!register_operand (operands[2], E_QImode))
            return -1;
          x8 = XEXP (x2, 1);
          operands[1] = x8;
          switch (GET_MODE (operands[0]))
            {
            case E_QImode:
              if (pattern1356 (x2, 
E_QImode) != 0
                  || !
#line 18942 "../../gcc/config/i386/i386.md"
(TARGET_USE_BT && ix86_pre_reload_split ()))
                return -1;
              *pnum_clobbers = 1;
              return 1409; /* *btrqi_1 */

            case E_HImode:
              if (pattern1356 (x2, 
E_HImode) != 0
                  || !
#line 18942 "../../gcc/config/i386/i386.md"
(TARGET_USE_BT && ix86_pre_reload_split ()))
                return -1;
              *pnum_clobbers = 1;
              return 1410; /* *btrhi_1 */

            default:
              return -1;
            }

        default:
          return -1;
        }

    case NOT:
      x9 = XEXP (x1, 0);
      operands[0] = x9;
      x4 = XEXP (x3, 0);
      operands[1] = x4;
      res = recog_36 (x1, insn, pnum_clobbers);
      if (res >= 0)
        return res;
      if (pnum_clobbers == NULL
          || !register_operand (operands[0], E_QImode)
          || GET_CODE (x4) != SUBREG
          || maybe_ne (SUBREG_BYTE (x4), 0)
          || GET_MODE (x4) != E_QImode)
        return -1;
      x7 = XEXP (x4, 0);
      if (GET_CODE (x7) != LSHIFTRT)
        return -1;
      x8 = XEXP (x2, 1);
      if (x8 != const_int_rtx[MAX_SAVED_CONST_INT + 1]
          || GET_MODE (x2) != E_QImode
          || GET_MODE (x3) != E_QImode)
        return -1;
      x10 = XEXP (x7, 0);
      operands[1] = x10;
      x11 = XEXP (x7, 1);
      operands[2] = x11;
      if (!register_operand (operands[2], E_QImode))
        return -1;
      switch (GET_MODE (x7))
        {
        case E_SImode:
          if (!register_operand (operands[1], E_SImode)
              || !
#line 19344 "../../gcc/config/i386/i386.md"
(TARGET_USE_BT && ix86_pre_reload_split ()))
            return -1;
          *pnum_clobbers = 1;
          return 1436; /* *btsi_setncqi */

        case E_DImode:
          if (!register_operand (operands[1], E_DImode)
              || !(
#line 19344 "../../gcc/config/i386/i386.md"
(TARGET_USE_BT && ix86_pre_reload_split ()) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return -1;
          *pnum_clobbers = 1;
          return 1437; /* *btdi_setncqi */

        default:
          return -1;
        }

    case UNSPEC:
      x9 = XEXP (x1, 0);
      operands[0] = x9;
      switch (XVECLEN (x3, 0))
        {
        case 3:
          x12 = XVECEXP (x3, 0, 2);
          if (GET_CODE (x12) != CONST_INT)
            return -1;
          x13 = XVECEXP (x3, 0, 0);
          operands[1] = x13;
          x14 = XVECEXP (x3, 0, 1);
          operands[2] = x14;
          switch (XINT (x3, 1))
            {
            case 59:
              operands[3] = x12;
              res = recog_37 (x1, insn, pnum_clobbers);
              if (res >= 0)
                return res;
              if (XWINT (x12, 0) != 0L)
                return -1;
              switch (pattern972 (x2))
                {
                case 0:
                  if (!(
#line 122 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 4582 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 318 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
                    return -1;
                  return 3495; /* *avx512vl_eqv16qi3_mask_1 */

                case 1:
                  if (!(
#line 122 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 4582 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 319 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
                    return -1;
                  return 3507; /* *avx512vl_eqv16hi3_mask_1 */

                case 2:
                  if (!(
#line 122 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 4671 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 501 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512))))
                    return -1;
                  return 3563; /* *avx512f_eqv16si3_mask_1 */

                case 3:
                  if (!(
#line 122 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 4582 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 319 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
                    return -1;
                  return 3511; /* *avx512vl_eqv8hi3_mask_1 */

                case 4:
                  if (!(
#line 122 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 4671 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 501 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
                    return -1;
                  return 3567; /* *avx512vl_eqv8si3_mask_1 */

                case 5:
                  if (!(
#line 122 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 4671 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 501 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
                    return -1;
                  return 3571; /* *avx512vl_eqv4si3_mask_1 */

                case 6:
                  if (!(
#line 122 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 4671 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 502 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512))))
                    return -1;
                  return 3575; /* *avx512f_eqv8di3_mask_1 */

                case 7:
                  if (!(
#line 122 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 4671 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 502 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
                    return -1;
                  return 3579; /* *avx512vl_eqv4di3_mask_1 */

                case 8:
                  if (!(
#line 122 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 4671 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 502 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
                    return -1;
                  return 3583; /* *avx512vl_eqv2di3_mask_1 */

                default:
                  return -1;
                }

            case 157:
              if (XWINT (x12, 0) == 0L)
                {
                  switch (pattern972 (x2))
                    {
                    case 0:
                      if ((
#line 122 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 4582 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 318 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
                        return 3497; /* *avx512vl_eqv16qi3_mask_1 */
                      break;

                    case 1:
                      if ((
#line 122 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 4582 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 319 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
                        return 3509; /* *avx512vl_eqv16hi3_mask_1 */
                      break;

                    case 2:
                      if ((
#line 122 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 4671 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 501 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512))))
                        return 3565; /* *avx512f_eqv16si3_mask_1 */
                      break;

                    case 3:
                      if ((
#line 122 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 4582 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 319 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
                        return 3513; /* *avx512vl_eqv8hi3_mask_1 */
                      break;

                    case 4:
                      if ((
#line 122 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 4671 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 501 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
                        return 3569; /* *avx512vl_eqv8si3_mask_1 */
                      break;

                    case 5:
                      if ((
#line 122 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 4671 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 501 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
                        return 3573; /* *avx512vl_eqv4si3_mask_1 */
                      break;

                    case 6:
                      if ((
#line 122 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 4671 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 502 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512))))
                        return 3577; /* *avx512f_eqv8di3_mask_1 */
                      break;

                    case 7:
                      if ((
#line 122 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 4671 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 502 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
                        return 3581; /* *avx512vl_eqv4di3_mask_1 */
                      break;

                    case 8:
                      if ((
#line 122 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 4671 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 502 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
                        return 3585; /* *avx512vl_eqv2di3_mask_1 */
                      break;

                    default:
                      break;
                    }
                }
              operands[3] = x12;
              if (!const_0_to_7_operand (operands[3], E_SImode))
                return -1;
              switch (pattern1071 (x2))
                {
                case 0:
                  switch (pattern740 ())
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
                      return 3517; /* avx512vl_ucmpv16qi3_mask */

                    case 1:
                      if (!(
#line 122 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 4597 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 319 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
                        return -1;
                      return 3523; /* avx512vl_ucmpv16hi3_mask */

                    case 2:
                      if (!(
#line 122 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 4686 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 501 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512))))
                        return -1;
                      return 3587; /* avx512f_ucmpv16si3_mask */

                    default:
                      return -1;
                    }

                case 1:
                  switch (pattern741 ())
                    {
                    case 0:
                      if (!(
#line 122 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 4597 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 319 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
                        return -1;
                      return 3525; /* avx512vl_ucmpv8hi3_mask */

                    case 1:
                      if (!(
#line 122 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 4686 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 501 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
                        return -1;
                      return 3589; /* avx512vl_ucmpv8si3_mask */

                    case 2:
                      if (!(
#line 122 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 4686 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 501 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
                        return -1;
                      return 3591; /* avx512vl_ucmpv4si3_mask */

                    case 3:
                      if (!(
#line 122 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 4686 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 502 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512))))
                        return -1;
                      return 3593; /* avx512f_ucmpv8di3_mask */

                    case 4:
                      if (!(
#line 122 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 4686 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 502 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
                        return -1;
                      return 3595; /* avx512vl_ucmpv4di3_mask */

                    case 5:
                      if (!(
#line 122 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 4686 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 502 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
                        return -1;
                      return 3597; /* avx512vl_ucmpv2di3_mask */

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
          x13 = XVECEXP (x3, 0, 0);
          operands[1] = x13;
          x14 = XVECEXP (x3, 0, 1);
          operands[2] = x14;
          switch (XINT (x3, 1))
            {
            case 158:
              switch (pattern742 (x2))
                {
                case 0:
                  if (!(
#line 122 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 19052 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 507 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL && TARGET_AVX512BW))))
                    return -1;
                  return 8111; /* avx512vl_testmv16qi3_mask */

                case 1:
                  if (!(
#line 122 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 19052 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 509 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL && TARGET_AVX512BW))))
                    return -1;
                  return 8115; /* avx512vl_testmv16hi3_mask */

                case 2:
                  if (!(
#line 122 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 19052 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 511 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512))))
                    return -1;
                  return 8119; /* avx512f_testmv16si3_mask */

                case 3:
                  if (!(
#line 122 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 19052 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 510 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL && TARGET_AVX512BW))))
                    return -1;
                  return 8117; /* avx512vl_testmv8hi3_mask */

                case 4:
                  if (!(
#line 122 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 19052 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 511 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
                    return -1;
                  return 8121; /* avx512vl_testmv8si3_mask */

                case 5:
                  if (!(
#line 122 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 19052 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 511 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
                    return -1;
                  return 8123; /* avx512vl_testmv4si3_mask */

                case 6:
                  if (!(
#line 122 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 19052 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 512 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512))))
                    return -1;
                  return 8125; /* avx512f_testmv8di3_mask */

                case 7:
                  if (!(
#line 122 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 19052 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 512 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
                    return -1;
                  return 8127; /* avx512vl_testmv4di3_mask */

                case 8:
                  if (!(
#line 122 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 19052 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 512 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
                    return -1;
                  return 8129; /* avx512vl_testmv2di3_mask */

                default:
                  return -1;
                }

            case 159:
              switch (pattern742 (x2))
                {
                case 0:
                  if (!(
#line 122 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 19063 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 507 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL && TARGET_AVX512BW))))
                    return -1;
                  return 8135; /* avx512vl_testnmv16qi3_mask */

                case 1:
                  if (!(
#line 122 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 19063 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 509 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL && TARGET_AVX512BW))))
                    return -1;
                  return 8139; /* avx512vl_testnmv16hi3_mask */

                case 2:
                  if (!(
#line 122 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 19063 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 511 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512))))
                    return -1;
                  return 8143; /* avx512f_testnmv16si3_mask */

                case 3:
                  if (!(
#line 122 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 19063 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 510 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL && TARGET_AVX512BW))))
                    return -1;
                  return 8141; /* avx512vl_testnmv8hi3_mask */

                case 4:
                  if (!(
#line 122 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 19063 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 511 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
                    return -1;
                  return 8145; /* avx512vl_testnmv8si3_mask */

                case 5:
                  if (!(
#line 122 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 19063 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 511 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
                    return -1;
                  return 8147; /* avx512vl_testnmv4si3_mask */

                case 6:
                  if (!(
#line 122 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 19063 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 512 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512))))
                    return -1;
                  return 8149; /* avx512f_testnmv8di3_mask */

                case 7:
                  if (!(
#line 122 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 19063 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 512 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
                    return -1;
                  return 8151; /* avx512vl_testnmv4di3_mask */

                case 8:
                  if (!(
#line 122 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 19063 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 512 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
                    return -1;
                  return 8153; /* avx512vl_testnmv2di3_mask */

                default:
                  return -1;
                }

            case 193:
              if (!const_0_to_255_operand (operands[2], E_VOIDmode))
                return -1;
              x8 = XEXP (x2, 1);
              switch (GET_CODE (x8))
                {
                case REG:
                case SUBREG:
                  operands[3] = x8;
                  switch (GET_MODE (operands[0]))
                    {
                    case E_HImode:
                      if (pattern283 (x2, 
E_HImode) != 0)
                        return -1;
                      switch (GET_MODE (operands[1]))
                        {
                        case E_V16HFmode:
                          if (!vector_operand (operands[1], E_V16HFmode)
                              || !(
#line 122 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 29854 "../../gcc/config/i386/sse.md"
(TARGET_AVX512DQ || VALID_AVX512FP16_REG_MODE(V16HFmode)) && 
#line 526 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL))))
                            return -1;
                          return 9987; /* avx512dq_fpclassv16hf_mask */

                        case E_V16SFmode:
                          if (!vector_operand (operands[1], E_V16SFmode)
                              || !(
#line 122 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 29854 "../../gcc/config/i386/sse.md"
(TARGET_AVX512DQ || VALID_AVX512FP16_REG_MODE(V16SFmode)) && 
#line 528 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512))))
                            return -1;
                          return 9991; /* avx512dq_fpclassv16sf_mask */

                        default:
                          return -1;
                        }

                    case E_QImode:
                      if (pattern283 (x2, 
E_QImode) != 0)
                        return -1;
                      switch (GET_MODE (operands[1]))
                        {
                        case E_V8HFmode:
                          if (!vector_operand (operands[1], E_V8HFmode)
                              || !(
#line 122 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 29854 "../../gcc/config/i386/sse.md"
(TARGET_AVX512DQ || VALID_AVX512FP16_REG_MODE(V8HFmode)) && 
#line 527 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL))))
                            return -1;
                          return 9989; /* avx512dq_fpclassv8hf_mask */

                        case E_V8SFmode:
                          if (!vector_operand (operands[1], E_V8SFmode)
                              || !(
#line 122 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 29854 "../../gcc/config/i386/sse.md"
(TARGET_AVX512DQ || VALID_AVX512FP16_REG_MODE(V8SFmode)) && 
#line 528 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
                            return -1;
                          return 9993; /* avx512dq_fpclassv8sf_mask */

                        case E_V4SFmode:
                          if (!vector_operand (operands[1], E_V4SFmode)
                              || !(
#line 122 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 29854 "../../gcc/config/i386/sse.md"
(TARGET_AVX512DQ || VALID_AVX512FP16_REG_MODE(V4SFmode)) && 
#line 528 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
                            return -1;
                          return 9995; /* avx512dq_fpclassv4sf_mask */

                        case E_V8DFmode:
                          if (!vector_operand (operands[1], E_V8DFmode)
                              || !(
#line 122 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 29854 "../../gcc/config/i386/sse.md"
(TARGET_AVX512DQ || VALID_AVX512FP16_REG_MODE(V8DFmode)) && 
#line 529 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512))))
                            return -1;
                          return 9997; /* avx512dq_fpclassv8df_mask */

                        case E_V4DFmode:
                          if (!vector_operand (operands[1], E_V4DFmode)
                              || !(
#line 122 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 29854 "../../gcc/config/i386/sse.md"
(TARGET_AVX512DQ || VALID_AVX512FP16_REG_MODE(V4DFmode)) && 
#line 529 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
                            return -1;
                          return 9999; /* avx512dq_fpclassv4df_mask */

                        case E_V2DFmode:
                          if (!vector_operand (operands[1], E_V2DFmode)
                              || !(
#line 122 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 29854 "../../gcc/config/i386/sse.md"
(TARGET_AVX512DQ || VALID_AVX512FP16_REG_MODE(V2DFmode)) && 
#line 529 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
                            return -1;
                          return 10001; /* avx512dq_fpclassv2df_mask */

                        default:
                          return -1;
                        }

                    default:
                      return -1;
                    }

                case CONST_INT:
                  if (XWINT (x8, 0) != 1L
                      || !register_operand (operands[0], E_QImode)
                      || GET_MODE (x2) != E_QImode
                      || GET_MODE (x3) != E_QImode)
                    return -1;
                  switch (GET_MODE (operands[1]))
                    {
                    case E_V8HFmode:
                      if (!nonimmediate_operand (operands[1], E_V8HFmode)
                          || !(
#line 29869 "../../gcc/config/i386/sse.md"
(TARGET_AVX512DQ || VALID_AVX512FP16_REG_MODE(V8HFmode)) && 
#line 479 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16)))
                        return -1;
                      return 10002; /* avx512dq_vmfpclassv8hf */

                    case E_V4SFmode:
                      if (!nonimmediate_operand (operands[1], E_V4SFmode)
                          || !
#line 29869 "../../gcc/config/i386/sse.md"
(TARGET_AVX512DQ || VALID_AVX512FP16_REG_MODE(V4SFmode)))
                        return -1;
                      return 10004; /* avx512dq_vmfpclassv4sf */

                    case E_V2DFmode:
                      if (!nonimmediate_operand (operands[1], E_V2DFmode)
                          || !(
#line 29869 "../../gcc/config/i386/sse.md"
(TARGET_AVX512DQ || VALID_AVX512FP16_REG_MODE(V2DFmode)) && 
#line 480 "../../gcc/config/i386/sse.md"
(TARGET_SSE2)))
                        return -1;
                      return 10006; /* avx512dq_vmfpclassv2df */

                    default:
                      return -1;
                    }

                default:
                  return -1;
                }

            case 214:
              if (GET_MODE (x3) != E_HImode
                  || !register_operand (operands[0], E_HImode)
                  || GET_MODE (x2) != E_HImode
                  || !register_operand (operands[1], E_V16QImode)
                  || !nonimmediate_operand (operands[2], E_V16QImode))
                return -1;
              x8 = XEXP (x2, 1);
              operands[3] = x8;
              if (!register_operand (operands[3], E_HImode)
                  || !(
#line 122 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 30921 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BITALG) && 
#line 328 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
                return -1;
              return 10323; /* avx512vl_vpshufbitqmbv16qi_mask */

            case 262:
              if (!const_0_to_255_operand (operands[2], E_VOIDmode))
                return -1;
              x8 = XEXP (x2, 1);
              operands[3] = x8;
              switch (GET_MODE (operands[0]))
                {
                case E_HImode:
                  if (pattern1072 (x2, 
E_HImode, 
E_V16BFmode) != 0
                      || !(
#line 122 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 32435 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256)))
                    return -1;
                  return 10719; /* avx10_2_fpclasspbf16_v16bf_mask */

                case E_QImode:
                  if (pattern1072 (x2, 
E_QImode, 
E_V8BFmode) != 0
                      || !(
#line 122 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 32435 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256)))
                    return -1;
                  return 10721; /* avx10_2_fpclasspbf16_v8bf_mask */

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
      if (GET_MODE (x3) != E_QImode)
        return -1;
      x4 = XEXP (x3, 0);
      if (pattern82 (x4, 
E_QImode, 
193) != 0)
        return -1;
      x15 = XEXP (x3, 1);
      if (x15 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
        return -1;
      x9 = XEXP (x1, 0);
      operands[0] = x9;
      if (!register_operand (operands[0], E_QImode)
          || GET_MODE (x2) != E_QImode)
        return -1;
      x16 = XVECEXP (x4, 0, 0);
      operands[1] = x16;
      x17 = XVECEXP (x4, 0, 1);
      operands[2] = x17;
      if (!const_0_to_255_operand (operands[2], E_VOIDmode))
        return -1;
      x8 = XEXP (x2, 1);
      operands[3] = x8;
      if (!register_operand (operands[3], E_QImode))
        return -1;
      switch (GET_MODE (operands[1]))
        {
        case E_V8HFmode:
          if (!nonimmediate_operand (operands[1], E_V8HFmode)
              || !(
#line 122 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 29869 "../../gcc/config/i386/sse.md"
(TARGET_AVX512DQ || VALID_AVX512FP16_REG_MODE(V8HFmode)) && 
#line 479 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16))))
            return -1;
          return 10003; /* avx512dq_vmfpclassv8hf_mask */

        case E_V4SFmode:
          if (!nonimmediate_operand (operands[1], E_V4SFmode)
              || !(
#line 122 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 29869 "../../gcc/config/i386/sse.md"
(TARGET_AVX512DQ || VALID_AVX512FP16_REG_MODE(V4SFmode))))
            return -1;
          return 10005; /* avx512dq_vmfpclassv4sf_mask */

        case E_V2DFmode:
          if (!nonimmediate_operand (operands[1], E_V2DFmode)
              || !(
#line 122 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 29869 "../../gcc/config/i386/sse.md"
(TARGET_AVX512DQ || VALID_AVX512FP16_REG_MODE(V2DFmode)) && 
#line 480 "../../gcc/config/i386/sse.md"
(TARGET_SSE2))))
            return -1;
          return 10007; /* avx512dq_vmfpclassv2df_mask */

        default:
          return -1;
        }

    default:
      return -1;
    }
}

 int
recog_75 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  operands[1] = x4;
  x5 = XEXP (x3, 1);
  operands[2] = x5;
  switch (GET_MODE (operands[0]))
    {
    case E_SImode:
      if (!register_operand (operands[0], E_SImode)
          || GET_MODE (x2) != E_SImode
          || GET_MODE (x3) != E_HImode
          || !nonimmediate_operand (operands[1], E_HImode)
          || !immediate_operand (operands[2], E_HImode))
        return -1;
      if (
#line 10643 "../../gcc/config/i386/i386.md"
(TARGET_APX_ZU && TARGET_APX_NF))
        return 596; /* *imulhisizu_nf */
      if (pnum_clobbers == NULL
          || !
#line 10643 "../../gcc/config/i386/i386.md"
(TARGET_APX_ZU && true))
        return -1;
      *pnum_clobbers = 1;
      return 597; /* *imulhisizu */

    case E_DImode:
      if (!register_operand (operands[0], E_DImode)
          || GET_MODE (x2) != E_DImode)
        return -1;
      switch (GET_MODE (x3))
        {
        case E_HImode:
          if (!nonimmediate_operand (operands[1], E_HImode)
              || !immediate_operand (operands[2], E_HImode))
            return -1;
          if (
#line 10643 "../../gcc/config/i386/i386.md"
(TARGET_APX_ZU && TARGET_APX_NF))
            return 598; /* *imulhidizu_nf */
          if (pnum_clobbers == NULL
              || !
#line 10643 "../../gcc/config/i386/i386.md"
(TARGET_APX_ZU && true))
            return -1;
          *pnum_clobbers = 1;
          return 599; /* *imulhidizu */

        case E_SImode:
          if (!nonimmediate_operand (operands[1], E_SImode)
              || !x86_64_general_operand (operands[2], E_SImode))
            return -1;
          if (
#line 10655 "../../gcc/config/i386/i386.md"
(TARGET_64BIT
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))
   && TARGET_APX_NF))
            return 600; /* *mulsi3_1_zext_nf */
          if (pnum_clobbers == NULL
              || !
#line 10655 "../../gcc/config/i386/i386.md"
(TARGET_64BIT
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))
   && true))
            return -1;
          *pnum_clobbers = 1;
          return 601; /* *mulsi3_1_zext */

        default:
          return -1;
        }

    default:
      return -1;
    }
}

 int
recog_77 (rtx x1 ATTRIBUTE_UNUSED,
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
    case NEG:
      if (pnum_clobbers == NULL)
        return -1;
      x4 = XEXP (x1, 0);
      if (GET_CODE (x4) != REG
          || REGNO (x4) != 17)
        return -1;
      x5 = XEXP (x3, 0);
      operands[2] = x5;
      x6 = XEXP (x2, 1);
      operands[1] = x6;
      switch (GET_MODE (x3))
        {
        case E_QImode:
          if (!general_operand (operands[2], E_QImode)
              || !nonimmediate_operand (operands[1], E_QImode)
              || !
#line 7225 "../../gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCZmode)
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
            return -1;
          *pnum_clobbers = 1;
          return 314; /* *addqi_3 */

        case E_HImode:
          if (!general_operand (operands[2], E_HImode)
              || !nonimmediate_operand (operands[1], E_HImode)
              || !
#line 7225 "../../gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCZmode)
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
            return -1;
          *pnum_clobbers = 1;
          return 315; /* *addhi_3 */

        case E_SImode:
          if (!x86_64_general_operand (operands[2], E_SImode)
              || !nonimmediate_operand (operands[1], E_SImode)
              || !
#line 7225 "../../gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCZmode)
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
            return -1;
          *pnum_clobbers = 1;
          return 316; /* *addsi_3 */

        case E_DImode:
          if (!x86_64_general_operand (operands[2], E_DImode)
              || !nonimmediate_operand (operands[1], E_DImode)
              || !(
#line 7225 "../../gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCZmode)
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 1161 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return -1;
          *pnum_clobbers = 1;
          return 317; /* *adddi_3 */

        default:
          return -1;
        }

    case REG:
    case SUBREG:
    case MEM:
      if (pnum_clobbers == NULL)
        return -1;
      operands[1] = x3;
      x4 = XEXP (x1, 0);
      if (GET_CODE (x4) != REG
          || REGNO (x4) != 17)
        return -1;
      x6 = XEXP (x2, 1);
      operands[2] = x6;
      switch (GET_MODE (operands[1]))
        {
        case E_DImode:
          if (!nonimmediate_operand (operands[1], E_DImode)
              || !x86_64_immediate_operand (operands[2], E_DImode)
              || !
#line 7326 "../../gcc/config/i386/i386.md"
(TARGET_64BIT
   && ix86_match_ccmode (insn, CCGCmode)))
            return -1;
          *pnum_clobbers = 1;
          return 319; /* *adddi_4 */

        case E_QImode:
          if (!nonimmediate_operand (operands[1], E_QImode)
              || !const_int_operand (operands[2], E_QImode)
              || !
#line 7371 "../../gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGCmode)))
            return -1;
          *pnum_clobbers = 1;
          return 320; /* *addqi_4 */

        case E_HImode:
          if (!nonimmediate_operand (operands[1], E_HImode)
              || !const_int_operand (operands[2], E_HImode)
              || !
#line 7371 "../../gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGCmode)))
            return -1;
          *pnum_clobbers = 1;
          return 321; /* *addhi_4 */

        case E_SImode:
          if (!nonimmediate_operand (operands[1], E_SImode)
              || !const_int_operand (operands[2], E_SImode)
              || !
#line 7371 "../../gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGCmode)))
            return -1;
          *pnum_clobbers = 1;
          return 322; /* *addsi_4 */

        default:
          return -1;
        }

    case PLUS:
      if (pnum_clobbers == NULL)
        return -1;
      x4 = XEXP (x1, 0);
      if (GET_CODE (x4) != REG
          || REGNO (x4) != 17)
        return -1;
      x5 = XEXP (x3, 0);
      operands[1] = x5;
      x7 = XEXP (x3, 1);
      operands[2] = x7;
      x6 = XEXP (x2, 1);
      if (x6 == const_int_rtx[MAX_SAVED_CONST_INT + 0])
        {
          switch (pattern46 (x3))
            {
            case 0:
              if (
#line 7410 "../../gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
                {
                  *pnum_clobbers = 1;
                  return 323; /* *addqi_5 */
                }
              break;

            case 1:
              if (
#line 7410 "../../gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
                {
                  *pnum_clobbers = 1;
                  return 324; /* *addhi_5 */
                }
              break;

            case 2:
              if (
#line 7410 "../../gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
                {
                  *pnum_clobbers = 1;
                  return 325; /* *addsi_5 */
                }
              break;

            case 3:
              if ((
#line 7410 "../../gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 1161 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                {
                  *pnum_clobbers = 1;
                  return 326; /* *adddi_5 */
                }
              break;

            default:
              break;
            }
        }
      if (GET_MODE (x4) != E_CCCmode
          || GET_MODE (x2) != E_CCCmode
          || !rtx_equal_p (x6, operands[2]))
        return -1;
      switch (pattern46 (x3))
        {
        case 0:
          if (!
#line 10025 "../../gcc/config/i386/i386.md"
(!(MEM_P (operands[1]) && MEM_P (operands[2]))))
            return -1;
          *pnum_clobbers = 1;
          return 543; /* *addqi3_cconly_overflow_2 */

        case 1:
          if (!
#line 10025 "../../gcc/config/i386/i386.md"
(!(MEM_P (operands[1]) && MEM_P (operands[2]))))
            return -1;
          *pnum_clobbers = 1;
          return 544; /* *addhi3_cconly_overflow_2 */

        case 2:
          if (!
#line 10025 "../../gcc/config/i386/i386.md"
(!(MEM_P (operands[1]) && MEM_P (operands[2]))))
            return -1;
          *pnum_clobbers = 1;
          return 545; /* *addsi3_cconly_overflow_2 */

        case 3:
          if (!(
#line 10025 "../../gcc/config/i386/i386.md"
(!(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 1161 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return -1;
          *pnum_clobbers = 1;
          return 546; /* *adddi3_cconly_overflow_2 */

        default:
          return -1;
        }

    case AND:
      x6 = XEXP (x2, 1);
      if (x6 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
        return -1;
      x4 = XEXP (x1, 0);
      if (GET_CODE (x4) != REG
          || REGNO (x4) != 17)
        return -1;
      x5 = XEXP (x3, 0);
      switch (GET_CODE (x5))
        {
        case REG:
        case SUBREG:
        case MEM:
          operands[0] = x5;
          x7 = XEXP (x3, 1);
          operands[1] = x7;
          switch (GET_MODE (x3))
            {
            case E_DImode:
              if (nonimmediate_operand (operands[0], E_DImode)
                  && x86_64_szext_nonmemory_operand (operands[1], E_DImode)
                  && 
#line 12071 "../../gcc/config/i386/i386.md"
(TARGET_64BIT
   && ix86_match_ccmode
	(insn,
	 /* If we are going to emit testl instead of testq, and the operands[1]
	    constant might have the SImode sign bit set, make sure the sign
	    flag isn't tested, because the instruction will set the sign flag
	    based on bit 31 rather than bit 63.  If it isn't CONST_INT,
	    conservatively assume it might have bit 31 set.  */
	 (satisfies_constraint_Z (operands[1])
	  && (!CONST_INT_P (operands[1])
	      || val_signbit_known_set_p (SImode, INTVAL (operands[1]))))
	 ? CCZmode : CCNOmode)))
                return 682; /* *testdi_1 */
              break;

            case E_QImode:
              if (nonimmediate_operand (operands[0], E_QImode)
                  && nonmemory_operand (operands[1], E_QImode))
                {
                  if (
#line 12096 "../../gcc/config/i386/i386.md"
(ix86_match_ccmode (insn,
		      CONST_INT_P (operands[1])
		      && INTVAL (operands[1]) >= 0 ? CCNOmode : CCZmode)))
                    return 683; /* *testqi_1_maybe_si */
                  if (
#line 12127 "../../gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)))
                    return 684; /* *testqi_1 */
                }
              break;

            case E_HImode:
              if (nonimmediate_operand (operands[0], E_HImode)
                  && nonmemory_operand (operands[1], E_HImode)
                  && 
#line 12127 "../../gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)))
                return 685; /* *testhi_1 */
              break;

            case E_SImode:
              if (nonimmediate_operand (operands[0], E_SImode)
                  && x86_64_szext_nonmemory_operand (operands[1], E_SImode)
                  && 
#line 12127 "../../gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)))
                return 686; /* *testsi_1 */
              break;

            default:
              break;
            }
          if (GET_CODE (x5) != SUBREG
              || maybe_ne (SUBREG_BYTE (x5), 0)
              || GET_MODE (x5) != E_QImode)
            return -1;
          x8 = XEXP (x5, 0);
          switch (GET_CODE (x8))
            {
            case SIGN_EXTRACT:
            case ZERO_EXTRACT:
              operands[2] = x8;
              x9 = XEXP (x8, 1);
              if (x9 != const_int_rtx[MAX_SAVED_CONST_INT + 8])
                return -1;
              x10 = XEXP (x8, 2);
              if (x10 != const_int_rtx[MAX_SAVED_CONST_INT + 8]
                  || GET_MODE (x3) != E_QImode)
                return -1;
              x11 = XEXP (x8, 0);
              operands[0] = x11;
              if (!int248_register_operand (operands[0], E_VOIDmode))
                return -1;
              operands[1] = x7;
              if (general_operand (operands[1], E_QImode))
                {
                  switch (GET_MODE (operands[2]))
                    {
                    case E_HImode:
                      if (extract_operator (operands[2], E_HImode)
                          && 
#line 12156 "../../gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)))
                        return 687; /* *testqi_exthi_1 */
                      break;

                    case E_SImode:
                      if (extract_operator (operands[2], E_SImode)
                          && 
#line 12156 "../../gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)))
                        return 688; /* *testqi_extsi_1 */
                      break;

                    case E_DImode:
                      if (extract_operator (operands[2], E_DImode)
                          && (
#line 12156 "../../gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)) && 
#line 1164 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                        return 689; /* *testqi_extdi_1 */
                      break;

                    default:
                      break;
                    }
                }
              if (GET_CODE (x7) != SUBREG
                  || maybe_ne (SUBREG_BYTE (x7), 0)
                  || GET_MODE (x7) != E_QImode)
                return -1;
              x12 = XEXP (x7, 0);
              switch (GET_CODE (x12))
                {
                case SIGN_EXTRACT:
                case ZERO_EXTRACT:
                  operands[3] = x12;
                  x13 = XEXP (x12, 1);
                  if (x13 != const_int_rtx[MAX_SAVED_CONST_INT + 8])
                    return -1;
                  x14 = XEXP (x12, 2);
                  if (x14 != const_int_rtx[MAX_SAVED_CONST_INT + 8])
                    return -1;
                  x15 = XEXP (x12, 0);
                  operands[1] = x15;
                  if (!int248_register_operand (operands[1], E_VOIDmode))
                    return -1;
                  switch (GET_MODE (operands[2]))
                    {
                    case E_HImode:
                      if (!extract_operator (operands[2], E_HImode)
                          || !extract_operator (operands[3], E_HImode)
                          || !
#line 12177 "../../gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)))
                        return -1;
                      return 690; /* *testqi_exthi_2 */

                    case E_SImode:
                      if (!extract_operator (operands[2], E_SImode)
                          || !extract_operator (operands[3], E_SImode)
                          || !
#line 12177 "../../gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)))
                        return -1;
                      return 691; /* *testqi_extsi_2 */

                    case E_DImode:
                      if (!extract_operator (operands[2], E_DImode)
                          || !extract_operator (operands[3], E_DImode)
                          || !(
#line 12177 "../../gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)) && 
#line 1164 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                        return -1;
                      return 692; /* *testqi_extdi_2 */

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
          x8 = XEXP (x5, 0);
          operands[1] = x8;
          x7 = XEXP (x3, 1);
          operands[2] = x7;
          switch (GET_MODE (x3))
            {
            case E_SImode:
              if (GET_MODE (x5) != E_SImode
                  || !register_operand (operands[1], E_SImode)
                  || !nonimmediate_operand (operands[2], E_SImode)
                  || !
#line 13386 "../../gcc/config/i386/i386.md"
(TARGET_BMI && ix86_match_ccmode (insn, CCNOmode)))
                return -1;
              *pnum_clobbers = 1;
              return 817; /* *andn_si_ccno */

            case E_DImode:
              if (GET_MODE (x5) != E_DImode
                  || !register_operand (operands[1], E_DImode)
                  || !nonimmediate_operand (operands[2], E_DImode)
                  || !(
#line 13386 "../../gcc/config/i386/i386.md"
(TARGET_BMI && ix86_match_ccmode (insn, CCNOmode)) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return -1;
              *pnum_clobbers = 1;
              return 818; /* *andn_di_ccno */

            default:
              return -1;
            }

        case NEG:
          if (pnum_clobbers == NULL)
            return -1;
          switch (pattern754 (x3))
            {
            case 0:
              if (!
#line 21793 "../../gcc/config/i386/i386.md"
(TARGET_BMI && ix86_match_ccmode (insn, CCNOmode)))
                return -1;
              *pnum_clobbers = 1;
              return 1574; /* *bmi_blsi_si_ccno */

            case 1:
              if (!(
#line 21793 "../../gcc/config/i386/i386.md"
(TARGET_BMI && ix86_match_ccmode (insn, CCNOmode)) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return -1;
              *pnum_clobbers = 1;
              return 1575; /* *bmi_blsi_di_ccno */

            default:
              return -1;
            }

        default:
          return -1;
        }

    case ZERO_EXTRACT:
      x7 = XEXP (x3, 1);
      if (GET_CODE (x7) != CONST_INT)
        return -1;
      operands[3] = x7;
      switch (pattern281 (x1))
        {
        case 0:
          if (
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
			 ? CCZmode : CCNOmode)))
            return 694; /* *testqi_ext_3 */
          break;

        case 1:
          if (
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
			 ? CCZmode : CCNOmode)))
            return 695; /* *testqi_ext_3 */
          break;

        case 2:
          if ((
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
(TARGET_64BIT)))
            return 696; /* *testqi_ext_3 */
          break;

        default:
          break;
        }
      if (XWINT (x7, 0) != 1L
          || pattern282 (x1) != 0)
        return -1;
      x16 = XEXP (x3, 2);
      operands[1] = x16;
      if (nonmemory_operand (operands[1], E_QImode))
        {
          switch (GET_MODE (x3))
            {
            case E_SImode:
              if (nonimmediate_operand (operands[0], E_SImode))
                return 1416; /* *btsi */
              break;

            case E_DImode:
              if (nonimmediate_operand (operands[0], E_DImode)
                  && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT))
                return 1417; /* *btdi */
              break;

            default:
              break;
            }
        }
      if (GET_CODE (x16) != SUBREG
          || maybe_ne (SUBREG_BYTE (x16), 0)
          || GET_MODE (x16) != E_QImode)
        return -1;
      x17 = XEXP (x16, 0);
      if (GET_CODE (x17) != AND)
        return -1;
      switch (pattern1454 (x3))
        {
        case 0:
          if (!
#line 19166 "../../gcc/config/i386/i386.md"
(TARGET_USE_BT
   && (INTVAL (operands[2]) & (GET_MODE_BITSIZE (SImode)-1))
      == GET_MODE_BITSIZE (SImode)-1
   && ix86_pre_reload_split ()))
            return -1;
          return 1418; /* *btsi_mask */

        case 1:
          if (!
#line 19166 "../../gcc/config/i386/i386.md"
(TARGET_USE_BT
   && (INTVAL (operands[2]) & (GET_MODE_BITSIZE (SImode)-1))
      == GET_MODE_BITSIZE (SImode)-1
   && ix86_pre_reload_split ()))
            return -1;
          return 1420; /* *btsi_mask */

        case 2:
          if (!(
#line 19166 "../../gcc/config/i386/i386.md"
(TARGET_USE_BT
   && (INTVAL (operands[2]) & (GET_MODE_BITSIZE (SImode)-1))
      == GET_MODE_BITSIZE (SImode)-1
   && ix86_pre_reload_split ()) && 
#line 1164 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return -1;
          return 1422; /* *btsi_mask */

        case 3:
          if (!(
#line 19166 "../../gcc/config/i386/i386.md"
(TARGET_USE_BT
   && (INTVAL (operands[2]) & (GET_MODE_BITSIZE (DImode)-1))
      == GET_MODE_BITSIZE (DImode)-1
   && ix86_pre_reload_split ()) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return -1;
          return 1419; /* *btdi_mask */

        case 4:
          if (!(
#line 19166 "../../gcc/config/i386/i386.md"
(TARGET_USE_BT
   && (INTVAL (operands[2]) & (GET_MODE_BITSIZE (DImode)-1))
      == GET_MODE_BITSIZE (DImode)-1
   && ix86_pre_reload_split ()) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return -1;
          return 1421; /* *btdi_mask */

        case 5:
          if (!(
#line 19166 "../../gcc/config/i386/i386.md"
(TARGET_USE_BT
   && (INTVAL (operands[2]) & (GET_MODE_BITSIZE (DImode)-1))
      == GET_MODE_BITSIZE (DImode)-1
   && ix86_pre_reload_split ()) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return -1;
          return 1423; /* *btdi_mask */

        default:
          return -1;
        }

    case IOR:
      switch (pattern47 (x1, pnum_clobbers))
        {
        case 0:
          if (!
#line 13935 "../../gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
            return -1;
          *pnum_clobbers = 1;
          return 884; /* *iorqi_3 */

        case 1:
          if (!
#line 13935 "../../gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
            return -1;
          *pnum_clobbers = 1;
          return 886; /* *iorhi_3 */

        case 2:
          if (!
#line 13935 "../../gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
            return -1;
          *pnum_clobbers = 1;
          return 888; /* *iorsi_3 */

        case 3:
          if (!(
#line 13935 "../../gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 1161 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return -1;
          *pnum_clobbers = 1;
          return 890; /* *iordi_3 */

        default:
          return -1;
        }

    case XOR:
      switch (pattern47 (x1, pnum_clobbers))
        {
        case 0:
          if (!
#line 13935 "../../gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
            return -1;
          *pnum_clobbers = 1;
          return 885; /* *xorqi_3 */

        case 1:
          if (!
#line 13935 "../../gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
            return -1;
          *pnum_clobbers = 1;
          return 887; /* *xorhi_3 */

        case 2:
          if (!
#line 13935 "../../gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
            return -1;
          *pnum_clobbers = 1;
          return 889; /* *xorsi_3 */

        case 3:
          if (!(
#line 13935 "../../gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 1161 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return -1;
          *pnum_clobbers = 1;
          return 891; /* *xordi_3 */

        default:
          return -1;
        }

    case ASHIFT:
      switch (pattern48 (x1, pnum_clobbers))
        {
        case 0:
          if (!
#line 16448 "../../gcc/config/i386/i386.md"
((optimize_function_for_size_p (cfun)
    || !TARGET_PARTIAL_FLAG_REG_STALL
    || (operands[2] == const1_rtx
	&& (TARGET_SHIFT1
	    || TARGET_DOUBLE_WITH_ADD)))
   && ix86_match_ccmode (insn, CCGOCmode)))
            return -1;
          *pnum_clobbers = 1;
          return 1115; /* *ashlqi3_cconly */

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
          *pnum_clobbers = 1;
          return 1116; /* *ashlhi3_cconly */

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
          *pnum_clobbers = 1;
          return 1117; /* *ashlsi3_cconly */

        case 3:
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
          *pnum_clobbers = 1;
          return 1118; /* *ashldi3_cconly */

        default:
          return -1;
        }

    case LSHIFTRT:
      switch (pattern48 (x1, pnum_clobbers))
        {
        case 0:
          if (!
#line 17750 "../../gcc/config/i386/i386.md"
((optimize_function_for_size_p (cfun)
    || !TARGET_PARTIAL_FLAG_REG_STALL
    || (operands[2] == const1_rtx
	&& TARGET_SHIFT1))
   && ix86_match_ccmode (insn, CCGOCmode)))
            return -1;
          *pnum_clobbers = 1;
          return 1230; /* *lshrqi3_cconly */

        case 1:
          if (!
#line 17750 "../../gcc/config/i386/i386.md"
((optimize_function_for_size_p (cfun)
    || !TARGET_PARTIAL_FLAG_REG_STALL
    || (operands[2] == const1_rtx
	&& TARGET_SHIFT1))
   && ix86_match_ccmode (insn, CCGOCmode)))
            return -1;
          *pnum_clobbers = 1;
          return 1232; /* *lshrhi3_cconly */

        case 2:
          if (!
#line 17750 "../../gcc/config/i386/i386.md"
((optimize_function_for_size_p (cfun)
    || !TARGET_PARTIAL_FLAG_REG_STALL
    || (operands[2] == const1_rtx
	&& TARGET_SHIFT1))
   && ix86_match_ccmode (insn, CCGOCmode)))
            return -1;
          *pnum_clobbers = 1;
          return 1234; /* *lshrsi3_cconly */

        case 3:
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
          *pnum_clobbers = 1;
          return 1236; /* *lshrdi3_cconly */

        default:
          return -1;
        }

    case ASHIFTRT:
      switch (pattern48 (x1, pnum_clobbers))
        {
        case 0:
          if (!
#line 17750 "../../gcc/config/i386/i386.md"
((optimize_function_for_size_p (cfun)
    || !TARGET_PARTIAL_FLAG_REG_STALL
    || (operands[2] == const1_rtx
	&& TARGET_SHIFT1))
   && ix86_match_ccmode (insn, CCGOCmode)))
            return -1;
          *pnum_clobbers = 1;
          return 1231; /* *ashrqi3_cconly */

        case 1:
          if (!
#line 17750 "../../gcc/config/i386/i386.md"
((optimize_function_for_size_p (cfun)
    || !TARGET_PARTIAL_FLAG_REG_STALL
    || (operands[2] == const1_rtx
	&& TARGET_SHIFT1))
   && ix86_match_ccmode (insn, CCGOCmode)))
            return -1;
          *pnum_clobbers = 1;
          return 1233; /* *ashrhi3_cconly */

        case 2:
          if (!
#line 17750 "../../gcc/config/i386/i386.md"
((optimize_function_for_size_p (cfun)
    || !TARGET_PARTIAL_FLAG_REG_STALL
    || (operands[2] == const1_rtx
	&& TARGET_SHIFT1))
   && ix86_match_ccmode (insn, CCGOCmode)))
            return -1;
          *pnum_clobbers = 1;
          return 1235; /* *ashrsi3_cconly */

        case 3:
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
          *pnum_clobbers = 1;
          return 1237; /* *ashrdi3_cconly */

        default:
          return -1;
        }

    default:
      return -1;
    }
}

 int
recog_112 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4;
  int res ATTRIBUTE_UNUSED;
  if (pnum_clobbers == NULL)
    return -1;
  x2 = XEXP (x1, 0);
  operands[0] = x2;
  x3 = XEXP (x1, 1);
  x4 = XEXP (x3, 0);
  operands[1] = x4;
  switch (pattern125 (x3))
    {
    case 0:
      *pnum_clobbers = 1;
      return 1514; /* ctzsi2 */

    case 1:
      if (!
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT))
        return -1;
      *pnum_clobbers = 1;
      return 1515; /* ctzdi2 */

    default:
      return -1;
    }
}

 int
recog_115 (rtx x1 ATTRIBUTE_UNUSED,
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
      operands[1] = x4;
      switch (pattern125 (x3))
        {
        case 0:
          if (
#line 22145 "../../gcc/config/i386/i386.md"
(TARGET_APX_NF && TARGET_POPCNT))
            return 1618; /* popcountsi2_nf */
          if (pnum_clobbers == NULL
              || !
#line 22170 "../../gcc/config/i386/i386.md"
(TARGET_POPCNT))
            return -1;
          *pnum_clobbers = 1;
          return 1620; /* popcountsi2 */

        case 1:
          if ((
#line 22145 "../../gcc/config/i386/i386.md"
(TARGET_APX_NF && TARGET_POPCNT) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return 1619; /* popcountdi2_nf */
          if (pnum_clobbers == NULL
              || !(
#line 22170 "../../gcc/config/i386/i386.md"
(TARGET_POPCNT) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return -1;
          *pnum_clobbers = 1;
          return 1621; /* popcountdi2 */

        default:
          return -1;
        }

    case ZERO_EXTEND:
      if (pattern109 (x3, pnum_clobbers, 
E_HImode, 
E_SImode) != 0
          || !
#line 22340 "../../gcc/config/i386/i386.md"
(TARGET_POPCNT
   && ix86_pre_reload_split ()))
        return -1;
      *pnum_clobbers = 1;
      return 1630; /* *popcounthi2_1 */

    default:
      return -1;
    }
}

 int
recog_118 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  x4 = XVECEXP (x3, 0, 0);
  switch (XWINT (x4, 0))
    {
    case 0L:
      if (nonimmediate_operand (operands[0], E_SImode)
          && GET_MODE (x2) == E_SImode)
        {
          switch (GET_MODE (operands[1]))
            {
            case E_V2SImode:
              if (nonimmediate_operand (operands[1], E_V2SImode)
                  && 
#line 5729 "../../gcc/config/i386/mmx.md"
((TARGET_MMX || TARGET_MMX_WITH_SSE)
   && !(MEM_P (operands[0]) && MEM_P (operands[1]))))
                return 2343; /* *vec_extractv2si_0 */
              break;

            case E_V4SImode:
              if (nonimmediate_operand (operands[1], E_V4SImode)
                  && 
#line 21157 "../../gcc/config/i386/sse.md"
(TARGET_SSE && !(MEM_P (operands[0]) && MEM_P (operands[1]))))
                return 8464; /* *vec_extractv4si_0 */
              break;

            default:
              break;
            }
        }
      break;

    case 1L:
      switch (GET_MODE (operands[0]))
        {
        case E_SImode:
          if (nonimmediate_operand (operands[0], E_SImode)
              && GET_MODE (x2) == E_SImode
              && nonimmediate_operand (operands[1], E_V2SImode)
              && 
#line 5786 "../../gcc/config/i386/mmx.md"
((TARGET_MMX || TARGET_MMX_WITH_SSE)
   && !(MEM_P (operands[0]) && MEM_P (operands[1]))))
            return 2346; /* *vec_extractv2si_1 */
          break;

        case E_DImode:
          if (nonimmediate_operand (operands[0], E_DImode)
              && GET_MODE (x2) == E_DImode
              && nonimmediate_operand (operands[1], E_V2DImode)
              && 
#line 21326 "../../gcc/config/i386/sse.md"
(TARGET_SSE && !(MEM_P (operands[0]) && MEM_P (operands[1]))))
            return 8473; /* *vec_extractv2di_1 */
          break;

        default:
          break;
        }
      break;

    default:
      break;
    }
  operands[2] = x4;
  switch (GET_MODE (operands[0]))
    {
    case E_SImode:
      if (GET_MODE (x2) != E_SImode)
        return -1;
      if (register_operand (operands[0], E_SImode))
        {
          switch (GET_MODE (operands[1]))
            {
            case E_V16SImode:
              if (register_operand (operands[1], E_V16SImode)
                  && const_0_to_15_operand (operands[2], E_VOIDmode)
                  && (
#line 14072 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F
   && INTVAL(operands[2]) * GET_MODE_SIZE (SImode) >= 16) && 
#line 301 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                return 7088; /* *vec_extractv16sisi_valign */
              break;

            case E_V8SImode:
              if (register_operand (operands[1], E_V8SImode)
                  && const_0_to_7_operand (operands[2], E_VOIDmode)
                  && (
#line 14072 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F
   && INTVAL(operands[2]) * GET_MODE_SIZE (SImode) >= 16) && 
#line 301 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                return 7089; /* *vec_extractv8sisi_valign */
              break;

            default:
              break;
            }
        }
      if (nonimmediate_operand (operands[0], E_SImode)
          && register_operand (operands[1], E_V4SImode)
          && const_0_to_3_operand (operands[2], E_SImode)
          && 
#line 21247 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1))
        return 8469; /* *vec_extractv4si */
      if (!register_operand (operands[0], E_SImode)
          || !memory_operand (operands[1], E_V4SImode)
          || !const_0_to_3_operand (operands[2], E_VOIDmode)
          || !
#line 21304 "../../gcc/config/i386/sse.md"
(TARGET_SSE))
        return -1;
      return 8471; /* *vec_extractv4si_mem */

    case E_DImode:
      if (!register_operand (operands[0], E_DImode)
          || GET_MODE (x2) != E_DImode)
        return -1;
      switch (GET_MODE (operands[1]))
        {
        case E_V8DImode:
          if (!register_operand (operands[1], E_V8DImode)
              || !const_0_to_7_operand (operands[2], E_VOIDmode)
              || !(
#line 14072 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F
   && INTVAL(operands[2]) * GET_MODE_SIZE (DImode) >= 16) && 
#line 302 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return -1;
          return 7090; /* *vec_extractv8didi_valign */

        case E_V4DImode:
          if (!register_operand (operands[1], E_V4DImode)
              || !const_0_to_3_operand (operands[2], E_VOIDmode)
              || !(
#line 14072 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F
   && INTVAL(operands[2]) * GET_MODE_SIZE (DImode) >= 16) && 
#line 302 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 7091; /* *vec_extractv4didi_valign */

        default:
          return -1;
        }

    default:
      return -1;
    }
}

 int
recog_123 (rtx x1 ATTRIBUTE_UNUSED,
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
      return 4560; /* unspec_avx512fp16_fix_truncv8hi2_mask */

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
      return 4565; /* unspec_avx512fp16_fix_truncv16hi2_mask */

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
      return 4573; /* unspec_avx512fp16_fix_truncv32hi2_mask */

    case E_V8SImode:
      switch (pattern994 (x2))
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
          return 4581; /* unspec_avx512fp16_fix_truncv8si2_mask */

        case 1:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 8783 "../../gcc/config/i386/sse.md"
(TARGET_AVX && TARGET_AVX512VL
  && (!false || TARGET_AVX10_2_256))))
            return -1;
          return 4886; /* unspec_fix_truncv8sfv8si2_mask */

        case 2:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 9558 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 5023; /* unspec_fix_truncv8dfv8si2_mask */

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
          return 4589; /* unspec_avx512fp16_fix_truncv16si2_mask */

        case 1:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 8763 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 4870; /* unspec_fix_truncv16sfv16si2_mask */

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
          return 4597; /* unspec_avx512fp16_fix_truncv8di2_mask */

        case 1:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 9689 "../../gcc/config/i386/sse.md"
(TARGET_AVX512DQ && 1) && 
#line 537 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512))))
            return -1;
          return 5056; /* unspec_fix_truncv8dfv8di2_mask */

        case 2:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 9732 "../../gcc/config/i386/sse.md"
(TARGET_AVX512DQ && 1) && 
#line 627 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512))))
            return -1;
          return 5116; /* unspec_fix_truncv8sfv8di2_mask */

        default:
          return -1;
        }

    case E_V4SImode:
      if (pattern773 (x2, 
E_V4SImode, 
E_QImode) != 0)
        return -1;
      switch (GET_MODE (operands[1]))
        {
        case E_V8HFmode:
          if (!register_operand (operands[1], E_V8HFmode)
              || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 7893 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL && 1)))
            return -1;
          return 4648; /* unspec_avx512fp16_fix_truncv4si2_mask */

        case E_V4SFmode:
          if (!vector_operand (operands[1], E_V4SFmode)
              || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 8803 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && TARGET_AVX512VL)))
            return -1;
          return 4891; /* unspec_fix_truncv4sfv4si2_mask */

        case E_V4DFmode:
          if (!vector_operand (operands[1], E_V4DFmode)
              || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 9648 "../../gcc/config/i386/sse.md"
(TARGET_AVX && TARGET_AVX512VL
   && (!false || TARGET_AVX10_2_256))))
            return -1;
          return 5044; /* unspec_fix_truncv4dfv4si2_mask */

        case E_V2DFmode:
          if (!vector_operand (operands[1], E_V2DFmode)
              || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 9932 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && TARGET_AVX512VL)))
            return -1;
          return 5157; /* unspec_sse2_cvttpd2dq_mask */

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
          return 4653; /* unspec_avx512fp16_fix_truncv4di2_mask */

        case 1:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 9689 "../../gcc/config/i386/sse.md"
(TARGET_AVX512DQ && 1) && 
#line 537 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
            return -1;
          return 5064; /* unspec_fix_truncv4dfv4di2_mask */

        case 2:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 9732 "../../gcc/config/i386/sse.md"
(TARGET_AVX512DQ && 1) && 
#line 627 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
            return -1;
          return 5124; /* unspec_fix_truncv4sfv4di2_mask */

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
          return 4676; /* unspec_avx512fp16_fix_truncv2di2_mask */

        case 1:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 9689 "../../gcc/config/i386/sse.md"
(TARGET_AVX512DQ && 1) && 
#line 537 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
            return -1;
          return 5071; /* unspec_fix_truncv2dfv2di2_mask */

        case 2:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 9753 "../../gcc/config/i386/sse.md"
(TARGET_AVX512DQ && TARGET_AVX512VL)))
            return -1;
          return 5139; /* unspec_avx512dq_fix_truncv2sfv2di2_mask */

        default:
          return -1;
        }

    default:
      return -1;
    }
}

 int
recog_131 (rtx x1 ATTRIBUTE_UNUSED,
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
  if (!const_0_to_15_operand (operands[2], E_SImode))
    return -1;
  x6 = XEXP (x2, 1);
  operands[3] = x6;
  x7 = XEXP (x2, 2);
  operands[4] = x7;
  switch (GET_MODE (operands[0]))
    {
    case E_V32HFmode:
      if (pattern467 (x2, 
E_V32HFmode, 
E_SImode) != 0
          || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 29882 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 525 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_EVEX512))))
        return -1;
      return 10010; /* avx512bw_getmantv32hf_mask */

    case E_V16HFmode:
      if (pattern467 (x2, 
E_V16HFmode, 
E_HImode) != 0
          || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 29882 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 526 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL))))
        return -1;
      return 10014; /* avx512vl_getmantv16hf_mask */

    case E_V8HFmode:
      if (pattern467 (x2, 
E_V8HFmode, 
E_QImode) != 0
          || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 29882 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 527 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL))))
        return -1;
      return 10017; /* avx512fp16_getmantv8hf_mask */

    case E_V16SFmode:
      if (pattern467 (x2, 
E_V16SFmode, 
E_HImode) != 0
          || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 29882 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 528 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512))))
        return -1;
      return 10020; /* avx512f_getmantv16sf_mask */

    case E_V8SFmode:
      if (pattern467 (x2, 
E_V8SFmode, 
E_QImode) != 0
          || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 29882 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 528 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
        return -1;
      return 10024; /* avx512vl_getmantv8sf_mask */

    case E_V4SFmode:
      if (pattern467 (x2, 
E_V4SFmode, 
E_QImode) != 0
          || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 29882 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 528 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
        return -1;
      return 10027; /* avx512vl_getmantv4sf_mask */

    case E_V8DFmode:
      if (pattern467 (x2, 
E_V8DFmode, 
E_QImode) != 0
          || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 29882 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 529 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512))))
        return -1;
      return 10030; /* avx512f_getmantv8df_mask */

    case E_V4DFmode:
      if (pattern467 (x2, 
E_V4DFmode, 
E_QImode) != 0
          || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 29882 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 529 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
        return -1;
      return 10034; /* avx512vl_getmantv4df_mask */

    case E_V2DFmode:
      if (pattern467 (x2, 
E_V2DFmode, 
E_QImode) != 0
          || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 29882 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 529 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
        return -1;
      return 10037; /* avx512vl_getmantv2df_mask */

    default:
      return -1;
    }
}

 int
recog_136 (rtx x1 ATTRIBUTE_UNUSED,
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
#line 30433 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VBMI2) && 
#line 758 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 10224; /* vpshrdv_v32hi_mask */

    case 1:
      if (!(
#line 30433 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VBMI2) && 
#line 758 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 10225; /* vpshrdv_v16si_mask */

    case 2:
      if (!(
#line 30433 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VBMI2) && 
#line 758 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 10226; /* vpshrdv_v8di_mask */

    case 3:
      if (!(
#line 30433 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VBMI2) && 
#line 759 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 10227; /* vpshrdv_v16hi_mask */

    case 4:
      if (!(
#line 30433 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VBMI2) && 
#line 759 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 10228; /* vpshrdv_v8si_mask */

    case 5:
      if (!(
#line 30433 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VBMI2) && 
#line 760 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 10229; /* vpshrdv_v4di_mask */

    case 6:
      if (!(
#line 30433 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VBMI2) && 
#line 760 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 10230; /* vpshrdv_v8hi_mask */

    case 7:
      if (!(
#line 30433 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VBMI2) && 
#line 761 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 10231; /* vpshrdv_v4si_mask */

    case 8:
      if (!(
#line 30433 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VBMI2) && 
#line 761 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 10232; /* vpshrdv_v2di_mask */

    case 9:
      if (!(
#line 30463 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VBMI2) && 
#line 758 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 10233; /* vpshrdv_v32hi_maskz_1 */

    case 10:
      if (!(
#line 30463 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VBMI2) && 
#line 758 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 10234; /* vpshrdv_v16si_maskz_1 */

    case 11:
      if (!(
#line 30463 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VBMI2) && 
#line 758 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 10235; /* vpshrdv_v8di_maskz_1 */

    case 12:
      if (!(
#line 30463 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VBMI2) && 
#line 759 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 10236; /* vpshrdv_v16hi_maskz_1 */

    case 13:
      if (!(
#line 30463 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VBMI2) && 
#line 759 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 10237; /* vpshrdv_v8si_maskz_1 */

    case 14:
      if (!(
#line 30463 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VBMI2) && 
#line 760 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 10238; /* vpshrdv_v4di_maskz_1 */

    case 15:
      if (!(
#line 30463 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VBMI2) && 
#line 760 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 10239; /* vpshrdv_v8hi_maskz_1 */

    case 16:
      if (!(
#line 30463 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VBMI2) && 
#line 761 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 10240; /* vpshrdv_v4si_maskz_1 */

    case 17:
      if (!(
#line 30463 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VBMI2) && 
#line 761 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 10241; /* vpshrdv_v2di_maskz_1 */

    default:
      return -1;
    }
}

 int
recog_142 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  switch (pattern478 (x2))
    {
    case 0:
      if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 30407 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VBMI2) && 
#line 758 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512))))
        return -1;
      return 10198; /* vpshld_v32hi_mask */

    case 1:
      if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 30407 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VBMI2) && 
#line 758 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512))))
        return -1;
      return 10200; /* vpshld_v16si_mask */

    case 2:
      if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 30407 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VBMI2) && 
#line 758 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512))))
        return -1;
      return 10202; /* vpshld_v8di_mask */

    case 3:
      if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 30407 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VBMI2) && 
#line 759 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
        return -1;
      return 10204; /* vpshld_v16hi_mask */

    case 4:
      if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 30407 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VBMI2) && 
#line 759 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
        return -1;
      return 10206; /* vpshld_v8si_mask */

    case 5:
      if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 30407 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VBMI2) && 
#line 760 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
        return -1;
      return 10208; /* vpshld_v4di_mask */

    case 6:
      if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 30407 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VBMI2) && 
#line 760 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
        return -1;
      return 10210; /* vpshld_v8hi_mask */

    case 7:
      if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 30407 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VBMI2) && 
#line 761 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
        return -1;
      return 10212; /* vpshld_v4si_mask */

    case 8:
      if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 30407 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VBMI2) && 
#line 761 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
        return -1;
      return 10214; /* vpshld_v2di_mask */

    default:
      return -1;
    }
}

 int
recog_149 (rtx x1 ATTRIBUTE_UNUSED,
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
  if (GET_CODE (x5) != PARALLEL)
    return -1;
  switch (XVECLEN (x5, 0))
    {
    case 1:
      x6 = XVECEXP (x5, 0, 0);
      if (x6 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
        return -1;
      x7 = XEXP (x2, 2);
      switch (GET_CODE (x7))
        {
        case CONST_INT:
          if (XWINT (x7, 0) != 1L)
            return -1;
          switch (pattern1010 (x2))
            {
            case 0:
              if (!
#line 12037 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_pre_reload_split ()))
                return -1;
              return 5300; /* *vec_setv8hi_0_1 */

            case 1:
              if (!
#line 12037 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_pre_reload_split ()))
                return -1;
              return 5301; /* *vec_setv8hf_0_1 */

            case 2:
              if (!
#line 12037 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_pre_reload_split ()))
                return -1;
              return 5302; /* *vec_setv8bf_0_1 */

            default:
              return -1;
            }

        case REG:
        case SUBREG:
          operands[3] = x7;
          x8 = XEXP (x4, 0);
          operands[1] = x8;
          x9 = XEXP (x2, 1);
          operands[2] = x9;
          switch (GET_MODE (operands[0]))
            {
            case E_V16SImode:
              if (pattern1287 (x2, 
E_V16SImode, 
E_HImode, 
E_V4SImode, 
E_SImode) != 0
                  || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 27713 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 295 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512))))
                return -1;
              return 9183; /* avx512f_vec_dupv16si_mask */

            case E_V8SImode:
              if (pattern1287 (x2, 
E_V8SImode, 
E_QImode, 
E_V4SImode, 
E_SImode) != 0
                  || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 27713 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 295 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
                return -1;
              return 9185; /* avx512vl_vec_dupv8si_mask */

            case E_V4SImode:
              if (pattern1288 (x2, 
E_V4SImode, 
E_SImode, 
E_QImode) != 0
                  || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 27713 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 295 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
                return -1;
              return 9187; /* avx512vl_vec_dupv4si_mask */

            case E_V8DImode:
              if (pattern1287 (x2, 
E_V8DImode, 
E_QImode, 
E_V2DImode, 
E_DImode) != 0
                  || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 27713 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 296 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512))))
                return -1;
              return 9189; /* avx512f_vec_dupv8di_mask */

            case E_V4DImode:
              if (pattern1287 (x2, 
E_V4DImode, 
E_QImode, 
E_V2DImode, 
E_DImode) != 0
                  || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 27713 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 296 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
                return -1;
              return 9191; /* avx512vl_vec_dupv4di_mask */

            case E_V2DImode:
              if (pattern1288 (x2, 
E_V2DImode, 
E_DImode, 
E_QImode) != 0
                  || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 27713 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 296 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
                return -1;
              return 9193; /* avx512vl_vec_dupv2di_mask */

            case E_V16SFmode:
              if (pattern1287 (x2, 
E_V16SFmode, 
E_HImode, 
E_V4SFmode, 
E_SFmode) != 0
                  || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 27713 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 297 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512))))
                return -1;
              return 9195; /* avx512f_vec_dupv16sf_mask */

            case E_V8SFmode:
              if (pattern1287 (x2, 
E_V8SFmode, 
E_QImode, 
E_V4SFmode, 
E_SFmode) != 0
                  || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 27713 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 297 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
                return -1;
              return 9197; /* avx512vl_vec_dupv8sf_mask */

            case E_V4SFmode:
              if (pattern1288 (x2, 
E_V4SFmode, 
E_SFmode, 
E_QImode) != 0
                  || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 27713 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 297 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
                return -1;
              return 9199; /* avx512vl_vec_dupv4sf_mask */

            case E_V8DFmode:
              if (pattern1287 (x2, 
E_V8DFmode, 
E_QImode, 
E_V2DFmode, 
E_DFmode) != 0
                  || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 27713 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 298 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512))))
                return -1;
              return 9201; /* avx512f_vec_dupv8df_mask */

            case E_V4DFmode:
              if (pattern1287 (x2, 
E_V4DFmode, 
E_QImode, 
E_V2DFmode, 
E_DFmode) != 0
                  || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 27713 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 298 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
                return -1;
              return 9203; /* avx512vl_vec_dupv4df_mask */

            case E_V2DFmode:
              if (pattern1288 (x2, 
E_V2DFmode, 
E_DFmode, 
E_QImode) != 0
                  || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 27713 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 298 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
                return -1;
              return 9205; /* avx512vl_vec_dupv2df_mask */

            case E_V64QImode:
              if (pattern1287 (x2, 
E_V64QImode, 
E_DImode, 
E_V16QImode, 
E_QImode) != 0
                  || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 27732 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 322 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512))))
                return -1;
              return 9207; /* avx512bw_vec_dupv64qi_mask */

            case E_V16QImode:
              if (pattern1288 (x2, 
E_V16QImode, 
E_QImode, 
E_HImode) != 0
                  || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 27732 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 322 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
                return -1;
              return 9209; /* avx512vl_vec_dupv16qi_mask */

            case E_V32QImode:
              if (pattern1287 (x2, 
E_V32QImode, 
E_SImode, 
E_V16QImode, 
E_QImode) != 0
                  || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 27732 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 322 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
                return -1;
              return 9211; /* avx512vl_vec_dupv32qi_mask */

            case E_V32HImode:
              if (pattern1287 (x2, 
E_V32HImode, 
E_SImode, 
E_V8HImode, 
E_HImode) != 0
                  || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 27732 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 323 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512))))
                return -1;
              return 9213; /* avx512bw_vec_dupv32hi_mask */

            case E_V16HImode:
              if (pattern772 (x2, 
E_HImode, 
E_V16HImode) != 0
                  || !nonimmediate_operand (operands[1], E_V8HImode)
                  || !nonimm_or_0_operand (operands[2], E_V16HImode)
                  || !register_operand (operands[3], E_HImode)
                  || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 27732 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 323 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
                return -1;
              return 9215; /* avx512vl_vec_dupv16hi_mask */

            case E_V8HImode:
              if (pattern1288 (x2, 
E_V8HImode, 
E_HImode, 
E_QImode) != 0
                  || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 27732 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 323 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
                return -1;
              return 9217; /* avx512vl_vec_dupv8hi_mask */

            case E_V32HFmode:
              if (pattern1287 (x2, 
E_V32HFmode, 
E_SImode, 
E_V8HFmode, 
E_HFmode) != 0
                  || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 27732 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 324 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512))))
                return -1;
              return 9219; /* avx512bw_vec_dupv32hf_mask */

            case E_V16HFmode:
              if (pattern1287 (x2, 
E_V16HFmode, 
E_HImode, 
E_V8HFmode, 
E_HFmode) != 0
                  || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 27732 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 324 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
                return -1;
              return 9221; /* avx512vl_vec_dupv16hf_mask */

            case E_V8HFmode:
              if (pattern1288 (x2, 
E_V8HFmode, 
E_HFmode, 
E_QImode) != 0
                  || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 27732 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 324 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
                return -1;
              return 9223; /* avx512fp16_vec_dupv8hf_mask */

            case E_V32BFmode:
              if (pattern1287 (x2, 
E_V32BFmode, 
E_SImode, 
E_V8BFmode, 
E_BFmode) != 0
                  || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 27732 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 325 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512))))
                return -1;
              return 9225; /* avx512bw_vec_dupv32bf_mask */

            case E_V16BFmode:
              if (pattern1287 (x2, 
E_V16BFmode, 
E_HImode, 
E_V8BFmode, 
E_BFmode) != 0
                  || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 27732 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 325 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
                return -1;
              return 9227; /* avx512vl_vec_dupv16bf_mask */

            case E_V8BFmode:
              if (pattern1288 (x2, 
E_V8BFmode, 
E_BFmode, 
E_QImode) != 0
                  || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 27732 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 325 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
                return -1;
              return 9229; /* avx512vl_vec_dupv8bf_mask */

            default:
              return -1;
            }

        default:
          return -1;
        }

    case 2:
      x6 = XVECEXP (x5, 0, 0);
      if (x6 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
        return -1;
      x10 = XVECEXP (x5, 0, 1);
      if (x10 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
        return -1;
      x8 = XEXP (x4, 0);
      operands[1] = x8;
      x9 = XEXP (x2, 1);
      operands[2] = x9;
      x7 = XEXP (x2, 2);
      operands[3] = x7;
      switch (GET_MODE (operands[0]))
        {
        case E_V16SImode:
          if (pattern1287 (x2, 
E_V16SImode, 
E_HImode, 
E_V4SImode, 
E_V2SImode) != 0
              || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 28038 "../../gcc/config/i386/sse.md"
(TARGET_AVX512DQ) && 
#line 28022 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512))))
            return -1;
          return 9317; /* avx512dq_broadcastv16si_mask */

        case E_V8SImode:
          if (pattern1287 (x2, 
E_V8SImode, 
E_QImode, 
E_V4SImode, 
E_V2SImode) != 0
              || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 28038 "../../gcc/config/i386/sse.md"
(TARGET_AVX512DQ) && 
#line 28022 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
            return -1;
          return 9319; /* avx512dq_broadcastv8si_mask */

        case E_V4SImode:
          if (pattern1288 (x2, 
E_V4SImode, 
E_V2SImode, 
E_QImode) != 0
              || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 28038 "../../gcc/config/i386/sse.md"
(TARGET_AVX512DQ) && 
#line 28022 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
            return -1;
          return 9321; /* avx512dq_broadcastv4si_mask */

        case E_V16SFmode:
          if (pattern1287 (x2, 
E_V16SFmode, 
E_HImode, 
E_V4SFmode, 
E_V2SFmode) != 0
              || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 28038 "../../gcc/config/i386/sse.md"
(TARGET_AVX512DQ) && 
#line 28023 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512))))
            return -1;
          return 9323; /* avx512dq_broadcastv16sf_mask */

        case E_V8SFmode:
          if (pattern1287 (x2, 
E_V8SFmode, 
E_QImode, 
E_V4SFmode, 
E_V2SFmode) != 0
              || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 28038 "../../gcc/config/i386/sse.md"
(TARGET_AVX512DQ) && 
#line 28023 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
            return -1;
          return 9325; /* avx512dq_broadcastv8sf_mask */

        default:
          return -1;
        }

    default:
      return -1;
    }
}

 int
recog_157 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4;
  int res ATTRIBUTE_UNUSED;
  switch (GET_CODE (operands[4]))
    {
    case REG:
    case SUBREG:
    case MEM:
      x2 = XEXP (x1, 1);
      switch (pattern1290 (x2))
        {
        case 0:
          if ((
#line 4118 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()) && 
#line 422 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
            return 3235; /* *avx_cmpv8sf3_1 */
          break;

        case 1:
          if (
#line 4118 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()))
            return 3236; /* *avx_cmpv4sf3_1 */
          break;

        case 2:
          if ((
#line 4118 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()) && 
#line 423 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
            return 3237; /* *avx_cmpv4df3_1 */
          break;

        case 3:
          if ((
#line 4118 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()) && 
#line 423 "../../gcc/config/i386/sse.md"
(TARGET_SSE2)))
            return 3238; /* *avx_cmpv2df3_1 */
          break;

        default:
          break;
        }
      break;

    case CONST_INT:
    case CONST_DOUBLE:
    case CONST_VECTOR:
      x2 = XEXP (x1, 1);
      x3 = XEXP (x2, 2);
      x4 = XVECEXP (x3, 0, 2);
      if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + 1])
        {
          switch (GET_MODE (operands[0]))
            {
            case E_V32HImode:
              if (pattern1472 (x2, 
E_V32HImode, 
E_SImode) == 0
                  && (
#line 17157 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && ix86_pre_reload_split ()) && 
#line 764 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512)))
                return 7631; /* *avx512_ashrv32hi3_1 */
              break;

            case E_V16HImode:
              if (pattern1472 (x2, 
E_V16HImode, 
E_HImode) == 0
                  && (
#line 17157 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && ix86_pre_reload_split ()) && 
#line 765 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL && TARGET_AVX512BW)))
                return 7632; /* *avx512_ashrv16hi3_1 */
              break;

            case E_V8HImode:
              if (pattern1472 (x2, 
E_V8HImode, 
E_QImode) == 0
                  && (
#line 17157 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && ix86_pre_reload_split ()) && 
#line 766 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL && TARGET_AVX512BW)))
                return 7633; /* *avx512_ashrv8hi3_1 */
              break;

            case E_V16SImode:
              if (pattern1472 (x2, 
E_V16SImode, 
E_HImode) == 0
                  && (
#line 17157 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && ix86_pre_reload_split ()) && 
#line 767 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                return 7634; /* *avx512_ashrv16si3_1 */
              break;

            case E_V8SImode:
              if (pattern1472 (x2, 
E_V8SImode, 
E_QImode) == 0
                  && (
#line 17157 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && ix86_pre_reload_split ()) && 
#line 767 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                return 7635; /* *avx512_ashrv8si3_1 */
              break;

            case E_V4SImode:
              if (pattern1472 (x2, 
E_V4SImode, 
E_QImode) == 0
                  && (
#line 17157 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && ix86_pre_reload_split ()) && 
#line 767 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                return 7636; /* *avx512_ashrv4si3_1 */
              break;

            case E_V8DImode:
              if (pattern1472 (x2, 
E_V8DImode, 
E_QImode) == 0
                  && (
#line 17157 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && ix86_pre_reload_split ()) && 
#line 768 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                return 7637; /* *avx512_ashrv8di3_1 */
              break;

            case E_V4DImode:
              if (pattern1472 (x2, 
E_V4DImode, 
E_QImode) == 0
                  && (
#line 17157 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && ix86_pre_reload_split ()) && 
#line 768 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                return 7638; /* *avx512_ashrv4di3_1 */
              break;

            case E_V2DImode:
              if (pattern1472 (x2, 
E_V2DImode, 
E_QImode) == 0
                  && (
#line 17157 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && ix86_pre_reload_split ()) && 
#line 768 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                return 7639; /* *avx512_ashrv2di3_1 */
              break;

            default:
              break;
            }
        }
      break;

    default:
      break;
    }
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 2);
  x4 = XVECEXP (x3, 0, 2);
  operands[5] = x4;
  switch (pattern1291 (x2))
    {
    case 0:
      if (vector_all_ones_operand (operands[1], E_V16QImode)
          && const0_operand (operands[2], E_V16QImode))
        {
          if (nonimm_or_0_operand (operands[3], E_V16QImode)
              && nonimm_or_0_operand (operands[4], E_V16QImode)
              && 
#line 17956 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()
  /* EQ is commutative.  */
   && ((INTVAL (operands[5]) == 0
	&& !(MEM_P (operands[3]) && MEM_P (operands[4])))
	  /* NLE aka GT, 3 must be register.  */
       || (INTVAL (operands[5]) == 6
	   && !MEM_P (operands[3]))
	  /* LT, 4 must be register and we swap operands.  */
       || (INTVAL (operands[5]) == 1
	   && !MEM_P (operands[4])))))
            return 7887; /* *avx2_pcmpv16qi3_1 */
          if (nonimmediate_operand (operands[3], E_V16QImode)
              && nonimmediate_operand (operands[4], E_V16QImode)
              && 
#line 18120 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()
   && (INTVAL (operands[5]) == 2 || INTVAL (operands[5]) == 5)))
            return 7909; /* *avx2_pcmpv16qi3_6 */
        }
      if (!const0_operand (operands[1], E_V16QImode)
          || !vector_all_ones_operand (operands[2], E_V16QImode)
          || !nonimmediate_operand (operands[3], E_V16QImode)
          || !nonimmediate_operand (operands[4], E_V16QImode)
          || !
#line 18146 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()
     /* NE is commutative.  */
   && (INTVAL (operands[5]) == 4
	  /* LE, 3 must be register.  */
       || INTVAL (operands[5]) == 2
	  /* NLT aka GE, 4 must be register and we swap operands.  */
       || INTVAL (operands[5]) == 5)))
        return -1;
      return 7925; /* *avx2_pcmpv16qi3_7 */

    case 1:
      if (vector_all_ones_operand (operands[1], E_V8HImode)
          && const0_operand (operands[2], E_V8HImode))
        {
          if (nonimm_or_0_operand (operands[3], E_V8HImode)
              && nonimm_or_0_operand (operands[4], E_V8HImode)
              && 
#line 17956 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()
  /* EQ is commutative.  */
   && ((INTVAL (operands[5]) == 0
	&& !(MEM_P (operands[3]) && MEM_P (operands[4])))
	  /* NLE aka GT, 3 must be register.  */
       || (INTVAL (operands[5]) == 6
	   && !MEM_P (operands[3]))
	  /* LT, 4 must be register and we swap operands.  */
       || (INTVAL (operands[5]) == 1
	   && !MEM_P (operands[4])))))
            return 7888; /* *avx2_pcmpv8hi3_1 */
          if (nonimmediate_operand (operands[3], E_V8HImode)
              && nonimmediate_operand (operands[4], E_V8HImode)
              && 
#line 18120 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()
   && (INTVAL (operands[5]) == 2 || INTVAL (operands[5]) == 5)))
            return 7911; /* *avx2_pcmpv8hi3_6 */
        }
      if (!const0_operand (operands[1], E_V8HImode)
          || !vector_all_ones_operand (operands[2], E_V8HImode)
          || !nonimmediate_operand (operands[3], E_V8HImode)
          || !nonimmediate_operand (operands[4], E_V8HImode)
          || !
#line 18146 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()
     /* NE is commutative.  */
   && (INTVAL (operands[5]) == 4
	  /* LE, 3 must be register.  */
       || INTVAL (operands[5]) == 2
	  /* NLT aka GE, 4 must be register and we swap operands.  */
       || INTVAL (operands[5]) == 5)))
        return -1;
      return 7926; /* *avx2_pcmpv8hi3_7 */

    case 2:
      if (vector_all_ones_operand (operands[1], E_V4SImode)
          && const0_operand (operands[2], E_V4SImode))
        {
          if (nonimm_or_0_operand (operands[3], E_V4SImode)
              && nonimm_or_0_operand (operands[4], E_V4SImode)
              && 
#line 17956 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()
  /* EQ is commutative.  */
   && ((INTVAL (operands[5]) == 0
	&& !(MEM_P (operands[3]) && MEM_P (operands[4])))
	  /* NLE aka GT, 3 must be register.  */
       || (INTVAL (operands[5]) == 6
	   && !MEM_P (operands[3]))
	  /* LT, 4 must be register and we swap operands.  */
       || (INTVAL (operands[5]) == 1
	   && !MEM_P (operands[4])))))
            return 7889; /* *avx2_pcmpv4si3_1 */
          if (nonimmediate_operand (operands[3], E_V4SImode)
              && nonimmediate_operand (operands[4], E_V4SImode)
              && 
#line 18120 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()
   && (INTVAL (operands[5]) == 2 || INTVAL (operands[5]) == 5)))
            return 7913; /* *avx2_pcmpv4si3_6 */
        }
      if (!const0_operand (operands[1], E_V4SImode)
          || !vector_all_ones_operand (operands[2], E_V4SImode)
          || !nonimmediate_operand (operands[3], E_V4SImode)
          || !nonimmediate_operand (operands[4], E_V4SImode)
          || !
#line 18146 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()
     /* NE is commutative.  */
   && (INTVAL (operands[5]) == 4
	  /* LE, 3 must be register.  */
       || INTVAL (operands[5]) == 2
	  /* NLT aka GE, 4 must be register and we swap operands.  */
       || INTVAL (operands[5]) == 5)))
        return -1;
      return 7927; /* *avx2_pcmpv4si3_7 */

    case 3:
      if (vector_all_ones_operand (operands[1], E_V2DImode)
          && const0_operand (operands[2], E_V2DImode))
        {
          if (nonimm_or_0_operand (operands[3], E_V2DImode)
              && nonimm_or_0_operand (operands[4], E_V2DImode)
              && 
#line 17956 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()
  /* EQ is commutative.  */
   && ((INTVAL (operands[5]) == 0
	&& !(MEM_P (operands[3]) && MEM_P (operands[4])))
	  /* NLE aka GT, 3 must be register.  */
       || (INTVAL (operands[5]) == 6
	   && !MEM_P (operands[3]))
	  /* LT, 4 must be register and we swap operands.  */
       || (INTVAL (operands[5]) == 1
	   && !MEM_P (operands[4])))))
            return 7890; /* *avx2_pcmpv2di3_1 */
          if (nonimmediate_operand (operands[3], E_V2DImode)
              && nonimmediate_operand (operands[4], E_V2DImode)
              && 
#line 18120 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()
   && (INTVAL (operands[5]) == 2 || INTVAL (operands[5]) == 5)))
            return 7915; /* *avx2_pcmpv2di3_6 */
        }
      if (!const0_operand (operands[1], E_V2DImode)
          || !vector_all_ones_operand (operands[2], E_V2DImode)
          || !nonimmediate_operand (operands[3], E_V2DImode)
          || !nonimmediate_operand (operands[4], E_V2DImode)
          || !
#line 18146 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()
     /* NE is commutative.  */
   && (INTVAL (operands[5]) == 4
	  /* LE, 3 must be register.  */
       || INTVAL (operands[5]) == 2
	  /* NLT aka GE, 4 must be register and we swap operands.  */
       || INTVAL (operands[5]) == 5)))
        return -1;
      return 7928; /* *avx2_pcmpv2di3_7 */

    case 4:
      if (vector_all_ones_operand (operands[1], E_V32QImode)
          && const0_operand (operands[2], E_V32QImode))
        {
          if (nonimm_or_0_operand (operands[3], E_V32QImode)
              && nonimm_or_0_operand (operands[4], E_V32QImode)
              && 
#line 17956 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()
  /* EQ is commutative.  */
   && ((INTVAL (operands[5]) == 0
	&& !(MEM_P (operands[3]) && MEM_P (operands[4])))
	  /* NLE aka GT, 3 must be register.  */
       || (INTVAL (operands[5]) == 6
	   && !MEM_P (operands[3]))
	  /* LT, 4 must be register and we swap operands.  */
       || (INTVAL (operands[5]) == 1
	   && !MEM_P (operands[4])))))
            return 7891; /* *avx2_pcmpv32qi3_1 */
          if (nonimmediate_operand (operands[3], E_V32QImode)
              && nonimmediate_operand (operands[4], E_V32QImode)
              && 
#line 18120 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()
   && (INTVAL (operands[5]) == 2 || INTVAL (operands[5]) == 5)))
            return 7917; /* *avx2_pcmpv32qi3_6 */
        }
      if (!const0_operand (operands[1], E_V32QImode)
          || !vector_all_ones_operand (operands[2], E_V32QImode)
          || !nonimmediate_operand (operands[3], E_V32QImode)
          || !nonimmediate_operand (operands[4], E_V32QImode)
          || !
#line 18146 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()
     /* NE is commutative.  */
   && (INTVAL (operands[5]) == 4
	  /* LE, 3 must be register.  */
       || INTVAL (operands[5]) == 2
	  /* NLT aka GE, 4 must be register and we swap operands.  */
       || INTVAL (operands[5]) == 5)))
        return -1;
      return 7929; /* *avx2_pcmpv32qi3_7 */

    case 5:
      if (vector_all_ones_operand (operands[1], E_V16HImode)
          && const0_operand (operands[2], E_V16HImode))
        {
          if (nonimm_or_0_operand (operands[3], E_V16HImode)
              && nonimm_or_0_operand (operands[4], E_V16HImode)
              && 
#line 17956 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()
  /* EQ is commutative.  */
   && ((INTVAL (operands[5]) == 0
	&& !(MEM_P (operands[3]) && MEM_P (operands[4])))
	  /* NLE aka GT, 3 must be register.  */
       || (INTVAL (operands[5]) == 6
	   && !MEM_P (operands[3]))
	  /* LT, 4 must be register and we swap operands.  */
       || (INTVAL (operands[5]) == 1
	   && !MEM_P (operands[4])))))
            return 7892; /* *avx2_pcmpv16hi3_1 */
          if (nonimmediate_operand (operands[3], E_V16HImode)
              && nonimmediate_operand (operands[4], E_V16HImode)
              && 
#line 18120 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()
   && (INTVAL (operands[5]) == 2 || INTVAL (operands[5]) == 5)))
            return 7919; /* *avx2_pcmpv16hi3_6 */
        }
      if (!const0_operand (operands[1], E_V16HImode)
          || !vector_all_ones_operand (operands[2], E_V16HImode)
          || !nonimmediate_operand (operands[3], E_V16HImode)
          || !nonimmediate_operand (operands[4], E_V16HImode)
          || !
#line 18146 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()
     /* NE is commutative.  */
   && (INTVAL (operands[5]) == 4
	  /* LE, 3 must be register.  */
       || INTVAL (operands[5]) == 2
	  /* NLT aka GE, 4 must be register and we swap operands.  */
       || INTVAL (operands[5]) == 5)))
        return -1;
      return 7930; /* *avx2_pcmpv16hi3_7 */

    case 6:
      if (vector_all_ones_operand (operands[1], E_V8SImode)
          && const0_operand (operands[2], E_V8SImode))
        {
          if (nonimm_or_0_operand (operands[3], E_V8SImode)
              && nonimm_or_0_operand (operands[4], E_V8SImode)
              && 
#line 17956 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()
  /* EQ is commutative.  */
   && ((INTVAL (operands[5]) == 0
	&& !(MEM_P (operands[3]) && MEM_P (operands[4])))
	  /* NLE aka GT, 3 must be register.  */
       || (INTVAL (operands[5]) == 6
	   && !MEM_P (operands[3]))
	  /* LT, 4 must be register and we swap operands.  */
       || (INTVAL (operands[5]) == 1
	   && !MEM_P (operands[4])))))
            return 7893; /* *avx2_pcmpv8si3_1 */
          if (nonimmediate_operand (operands[3], E_V8SImode)
              && nonimmediate_operand (operands[4], E_V8SImode)
              && 
#line 18120 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()
   && (INTVAL (operands[5]) == 2 || INTVAL (operands[5]) == 5)))
            return 7921; /* *avx2_pcmpv8si3_6 */
        }
      if (!const0_operand (operands[1], E_V8SImode)
          || !vector_all_ones_operand (operands[2], E_V8SImode)
          || !nonimmediate_operand (operands[3], E_V8SImode)
          || !nonimmediate_operand (operands[4], E_V8SImode)
          || !
#line 18146 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()
     /* NE is commutative.  */
   && (INTVAL (operands[5]) == 4
	  /* LE, 3 must be register.  */
       || INTVAL (operands[5]) == 2
	  /* NLT aka GE, 4 must be register and we swap operands.  */
       || INTVAL (operands[5]) == 5)))
        return -1;
      return 7931; /* *avx2_pcmpv8si3_7 */

    case 7:
      if (vector_all_ones_operand (operands[1], E_V4DImode)
          && const0_operand (operands[2], E_V4DImode))
        {
          if (nonimm_or_0_operand (operands[3], E_V4DImode)
              && nonimm_or_0_operand (operands[4], E_V4DImode)
              && 
#line 17956 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()
  /* EQ is commutative.  */
   && ((INTVAL (operands[5]) == 0
	&& !(MEM_P (operands[3]) && MEM_P (operands[4])))
	  /* NLE aka GT, 3 must be register.  */
       || (INTVAL (operands[5]) == 6
	   && !MEM_P (operands[3]))
	  /* LT, 4 must be register and we swap operands.  */
       || (INTVAL (operands[5]) == 1
	   && !MEM_P (operands[4])))))
            return 7894; /* *avx2_pcmpv4di3_1 */
          if (nonimmediate_operand (operands[3], E_V4DImode)
              && nonimmediate_operand (operands[4], E_V4DImode)
              && 
#line 18120 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()
   && (INTVAL (operands[5]) == 2 || INTVAL (operands[5]) == 5)))
            return 7923; /* *avx2_pcmpv4di3_6 */
        }
      if (!const0_operand (operands[1], E_V4DImode)
          || !vector_all_ones_operand (operands[2], E_V4DImode)
          || !nonimmediate_operand (operands[3], E_V4DImode)
          || !nonimmediate_operand (operands[4], E_V4DImode)
          || !
#line 18146 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()
     /* NE is commutative.  */
   && (INTVAL (operands[5]) == 4
	  /* LE, 3 must be register.  */
       || INTVAL (operands[5]) == 2
	  /* NLT aka GE, 4 must be register and we swap operands.  */
       || INTVAL (operands[5]) == 5)))
        return -1;
      return 7932; /* *avx2_pcmpv4di3_7 */

    default:
      return -1;
    }
}

 int
recog_165 (rtx x1 ATTRIBUTE_UNUSED,
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
  rtx x66, x67, x68, x69, x70;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  if (pattern899 (x4) != 0)
    return -1;
  x5 = XVECEXP (x4, 0, 32);
  if (GET_CODE (x5) != CONST_INT)
    return -1;
  x6 = XVECEXP (x4, 0, 33);
  if (GET_CODE (x6) != CONST_INT)
    return -1;
  x7 = XVECEXP (x4, 0, 34);
  if (GET_CODE (x7) != CONST_INT)
    return -1;
  x8 = XVECEXP (x4, 0, 35);
  if (GET_CODE (x8) != CONST_INT)
    return -1;
  x9 = XVECEXP (x4, 0, 36);
  if (GET_CODE (x9) != CONST_INT)
    return -1;
  x10 = XVECEXP (x4, 0, 37);
  if (GET_CODE (x10) != CONST_INT)
    return -1;
  x11 = XVECEXP (x4, 0, 38);
  if (GET_CODE (x11) != CONST_INT)
    return -1;
  x12 = XVECEXP (x4, 0, 39);
  if (GET_CODE (x12) != CONST_INT)
    return -1;
  x13 = XVECEXP (x4, 0, 40);
  if (GET_CODE (x13) != CONST_INT)
    return -1;
  x14 = XVECEXP (x4, 0, 41);
  if (GET_CODE (x14) != CONST_INT)
    return -1;
  x15 = XVECEXP (x4, 0, 42);
  if (GET_CODE (x15) != CONST_INT)
    return -1;
  x16 = XVECEXP (x4, 0, 43);
  if (GET_CODE (x16) != CONST_INT)
    return -1;
  x17 = XVECEXP (x4, 0, 44);
  if (GET_CODE (x17) != CONST_INT)
    return -1;
  x18 = XVECEXP (x4, 0, 45);
  if (GET_CODE (x18) != CONST_INT)
    return -1;
  x19 = XVECEXP (x4, 0, 46);
  if (GET_CODE (x19) != CONST_INT)
    return -1;
  x20 = XVECEXP (x4, 0, 47);
  if (GET_CODE (x20) != CONST_INT)
    return -1;
  x21 = XVECEXP (x4, 0, 48);
  if (GET_CODE (x21) != CONST_INT)
    return -1;
  x22 = XVECEXP (x4, 0, 49);
  if (GET_CODE (x22) != CONST_INT)
    return -1;
  x23 = XVECEXP (x4, 0, 50);
  if (GET_CODE (x23) != CONST_INT)
    return -1;
  x24 = XVECEXP (x4, 0, 51);
  if (GET_CODE (x24) != CONST_INT)
    return -1;
  x25 = XVECEXP (x4, 0, 52);
  if (GET_CODE (x25) != CONST_INT)
    return -1;
  x26 = XVECEXP (x4, 0, 53);
  if (GET_CODE (x26) != CONST_INT)
    return -1;
  x27 = XVECEXP (x4, 0, 54);
  if (GET_CODE (x27) != CONST_INT)
    return -1;
  x28 = XVECEXP (x4, 0, 55);
  if (GET_CODE (x28) != CONST_INT)
    return -1;
  x29 = XVECEXP (x4, 0, 56);
  if (GET_CODE (x29) != CONST_INT)
    return -1;
  x30 = XVECEXP (x4, 0, 57);
  if (GET_CODE (x30) != CONST_INT)
    return -1;
  x31 = XVECEXP (x4, 0, 58);
  if (GET_CODE (x31) != CONST_INT)
    return -1;
  x32 = XVECEXP (x4, 0, 59);
  if (GET_CODE (x32) != CONST_INT)
    return -1;
  x33 = XVECEXP (x4, 0, 60);
  if (GET_CODE (x33) != CONST_INT)
    return -1;
  x34 = XVECEXP (x4, 0, 61);
  if (GET_CODE (x34) != CONST_INT)
    return -1;
  x35 = XVECEXP (x4, 0, 62);
  if (GET_CODE (x35) != CONST_INT)
    return -1;
  x36 = XVECEXP (x4, 0, 63);
  if (GET_CODE (x36) != CONST_INT
      || pattern1215 (x2, 
E_V64QImode, 
E_V128QImode) != 0)
    return -1;
  x37 = XEXP (x2, 1);
  operands[3] = x37;
  if (!nonimm_or_0_operand (operands[3], E_V64QImode))
    return -1;
  x38 = XEXP (x2, 2);
  operands[4] = x38;
  if (!register_operand (operands[4], E_DImode))
    return -1;
  x39 = XVECEXP (x4, 0, 0);
  switch (XWINT (x39, 0))
    {
    case 8L:
      x40 = XVECEXP (x4, 0, 1);
      if (XWINT (x40, 0) != 72L)
        return -1;
      x41 = XVECEXP (x4, 0, 2);
      if (XWINT (x41, 0) != 9L)
        return -1;
      x42 = XVECEXP (x4, 0, 3);
      if (XWINT (x42, 0) != 73L)
        return -1;
      x43 = XVECEXP (x4, 0, 4);
      if (XWINT (x43, 0) != 10L)
        return -1;
      x44 = XVECEXP (x4, 0, 5);
      if (XWINT (x44, 0) != 74L)
        return -1;
      x45 = XVECEXP (x4, 0, 6);
      if (XWINT (x45, 0) != 11L)
        return -1;
      x46 = XVECEXP (x4, 0, 7);
      if (XWINT (x46, 0) != 75L)
        return -1;
      x47 = XVECEXP (x4, 0, 8);
      if (XWINT (x47, 0) != 12L)
        return -1;
      x48 = XVECEXP (x4, 0, 9);
      if (XWINT (x48, 0) != 76L)
        return -1;
      x49 = XVECEXP (x4, 0, 10);
      if (XWINT (x49, 0) != 13L)
        return -1;
      x50 = XVECEXP (x4, 0, 11);
      if (XWINT (x50, 0) != 77L)
        return -1;
      x51 = XVECEXP (x4, 0, 12);
      if (XWINT (x51, 0) != 14L)
        return -1;
      x52 = XVECEXP (x4, 0, 13);
      if (XWINT (x52, 0) != 78L)
        return -1;
      x53 = XVECEXP (x4, 0, 14);
      if (XWINT (x53, 0) != 15L)
        return -1;
      x54 = XVECEXP (x4, 0, 15);
      if (XWINT (x54, 0) != 79L)
        return -1;
      x55 = XVECEXP (x4, 0, 16);
      if (XWINT (x55, 0) != 24L)
        return -1;
      x56 = XVECEXP (x4, 0, 17);
      if (XWINT (x56, 0) != 88L)
        return -1;
      x57 = XVECEXP (x4, 0, 18);
      if (XWINT (x57, 0) != 25L)
        return -1;
      x58 = XVECEXP (x4, 0, 19);
      if (XWINT (x58, 0) != 89L)
        return -1;
      x59 = XVECEXP (x4, 0, 20);
      if (XWINT (x59, 0) != 26L)
        return -1;
      x60 = XVECEXP (x4, 0, 21);
      if (XWINT (x60, 0) != 90L)
        return -1;
      x61 = XVECEXP (x4, 0, 22);
      if (XWINT (x61, 0) != 27L)
        return -1;
      x62 = XVECEXP (x4, 0, 23);
      if (XWINT (x62, 0) != 91L)
        return -1;
      x63 = XVECEXP (x4, 0, 24);
      if (XWINT (x63, 0) != 28L)
        return -1;
      x64 = XVECEXP (x4, 0, 25);
      if (XWINT (x64, 0) != 92L)
        return -1;
      x65 = XVECEXP (x4, 0, 26);
      if (XWINT (x65, 0) != 29L)
        return -1;
      x66 = XVECEXP (x4, 0, 27);
      if (XWINT (x66, 0) != 93L)
        return -1;
      x67 = XVECEXP (x4, 0, 28);
      if (XWINT (x67, 0) != 30L)
        return -1;
      x68 = XVECEXP (x4, 0, 29);
      if (XWINT (x68, 0) != 94L)
        return -1;
      x69 = XVECEXP (x4, 0, 30);
      if (XWINT (x69, 0) != 31L)
        return -1;
      x70 = XVECEXP (x4, 0, 31);
      if (XWINT (x70, 0) != 95L
          || XWINT (x5, 0) != 40L
          || XWINT (x6, 0) != 104L
          || XWINT (x7, 0) != 41L
          || XWINT (x8, 0) != 105L
          || XWINT (x9, 0) != 42L
          || XWINT (x10, 0) != 106L
          || XWINT (x11, 0) != 43L
          || XWINT (x12, 0) != 107L
          || XWINT (x13, 0) != 44L
          || XWINT (x14, 0) != 108L
          || XWINT (x15, 0) != 45L
          || XWINT (x16, 0) != 109L
          || XWINT (x17, 0) != 46L
          || XWINT (x18, 0) != 110L
          || XWINT (x19, 0) != 47L
          || XWINT (x20, 0) != 111L
          || XWINT (x21, 0) != 56L
          || XWINT (x22, 0) != 120L
          || XWINT (x23, 0) != 57L
          || XWINT (x24, 0) != 121L
          || XWINT (x25, 0) != 58L
          || XWINT (x26, 0) != 122L
          || XWINT (x27, 0) != 59L
          || XWINT (x28, 0) != 123L
          || XWINT (x29, 0) != 60L
          || XWINT (x30, 0) != 124L
          || XWINT (x31, 0) != 61L
          || XWINT (x32, 0) != 125L
          || XWINT (x33, 0) != 62L
          || XWINT (x34, 0) != 126L
          || XWINT (x35, 0) != 63L
          || XWINT (x36, 0) != 127L
          || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 19424 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512)))
        return -1;
      return 8317; /* avx512bw_interleave_highv64qi_mask */

    case 0L:
      x40 = XVECEXP (x4, 0, 1);
      if (XWINT (x40, 0) != 64L)
        return -1;
      x41 = XVECEXP (x4, 0, 2);
      if (XWINT (x41, 0) != 1L)
        return -1;
      x42 = XVECEXP (x4, 0, 3);
      if (XWINT (x42, 0) != 65L)
        return -1;
      x43 = XVECEXP (x4, 0, 4);
      if (XWINT (x43, 0) != 2L)
        return -1;
      x44 = XVECEXP (x4, 0, 5);
      if (XWINT (x44, 0) != 66L)
        return -1;
      x45 = XVECEXP (x4, 0, 6);
      if (XWINT (x45, 0) != 3L)
        return -1;
      x46 = XVECEXP (x4, 0, 7);
      if (XWINT (x46, 0) != 67L)
        return -1;
      x47 = XVECEXP (x4, 0, 8);
      if (XWINT (x47, 0) != 4L)
        return -1;
      x48 = XVECEXP (x4, 0, 9);
      if (XWINT (x48, 0) != 68L)
        return -1;
      x49 = XVECEXP (x4, 0, 10);
      if (XWINT (x49, 0) != 5L)
        return -1;
      x50 = XVECEXP (x4, 0, 11);
      if (XWINT (x50, 0) != 69L)
        return -1;
      x51 = XVECEXP (x4, 0, 12);
      if (XWINT (x51, 0) != 6L)
        return -1;
      x52 = XVECEXP (x4, 0, 13);
      if (XWINT (x52, 0) != 70L)
        return -1;
      x53 = XVECEXP (x4, 0, 14);
      if (XWINT (x53, 0) != 7L)
        return -1;
      x54 = XVECEXP (x4, 0, 15);
      if (XWINT (x54, 0) != 71L)
        return -1;
      x55 = XVECEXP (x4, 0, 16);
      if (XWINT (x55, 0) != 16L)
        return -1;
      x56 = XVECEXP (x4, 0, 17);
      if (XWINT (x56, 0) != 80L)
        return -1;
      x57 = XVECEXP (x4, 0, 18);
      if (XWINT (x57, 0) != 17L)
        return -1;
      x58 = XVECEXP (x4, 0, 19);
      if (XWINT (x58, 0) != 81L)
        return -1;
      x59 = XVECEXP (x4, 0, 20);
      if (XWINT (x59, 0) != 18L)
        return -1;
      x60 = XVECEXP (x4, 0, 21);
      if (XWINT (x60, 0) != 82L)
        return -1;
      x61 = XVECEXP (x4, 0, 22);
      if (XWINT (x61, 0) != 19L)
        return -1;
      x62 = XVECEXP (x4, 0, 23);
      if (XWINT (x62, 0) != 83L)
        return -1;
      x63 = XVECEXP (x4, 0, 24);
      if (XWINT (x63, 0) != 20L)
        return -1;
      x64 = XVECEXP (x4, 0, 25);
      if (XWINT (x64, 0) != 84L)
        return -1;
      x65 = XVECEXP (x4, 0, 26);
      if (XWINT (x65, 0) != 21L)
        return -1;
      x66 = XVECEXP (x4, 0, 27);
      if (XWINT (x66, 0) != 85L)
        return -1;
      x67 = XVECEXP (x4, 0, 28);
      if (XWINT (x67, 0) != 22L)
        return -1;
      x68 = XVECEXP (x4, 0, 29);
      if (XWINT (x68, 0) != 86L)
        return -1;
      x69 = XVECEXP (x4, 0, 30);
      if (XWINT (x69, 0) != 23L)
        return -1;
      x70 = XVECEXP (x4, 0, 31);
      if (XWINT (x70, 0) != 87L
          || XWINT (x5, 0) != 32L
          || XWINT (x6, 0) != 96L
          || XWINT (x7, 0) != 33L
          || XWINT (x8, 0) != 97L
          || XWINT (x9, 0) != 34L
          || XWINT (x10, 0) != 98L
          || XWINT (x11, 0) != 35L
          || XWINT (x12, 0) != 99L
          || XWINT (x13, 0) != 36L
          || XWINT (x14, 0) != 100L
          || XWINT (x15, 0) != 37L
          || XWINT (x16, 0) != 101L
          || XWINT (x17, 0) != 38L
          || XWINT (x18, 0) != 102L
          || XWINT (x19, 0) != 39L
          || XWINT (x20, 0) != 103L
          || XWINT (x21, 0) != 48L
          || XWINT (x22, 0) != 112L
          || XWINT (x23, 0) != 49L
          || XWINT (x24, 0) != 113L
          || XWINT (x25, 0) != 50L
          || XWINT (x26, 0) != 114L
          || XWINT (x27, 0) != 51L
          || XWINT (x28, 0) != 115L
          || XWINT (x29, 0) != 52L
          || XWINT (x30, 0) != 116L
          || XWINT (x31, 0) != 53L
          || XWINT (x32, 0) != 117L
          || XWINT (x33, 0) != 54L
          || XWINT (x34, 0) != 118L
          || XWINT (x35, 0) != 55L
          || XWINT (x36, 0) != 119L
          || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 19520 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512)))
        return -1;
      return 8323; /* avx512bw_interleave_lowv64qi_mask */

    default:
      return -1;
    }
}

 int
recog_186 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
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
      x6 = XEXP (x2, 2);
      switch (GET_CODE (x6))
        {
        case REG:
        case SUBREG:
          operands[4] = x6;
          x7 = XEXP (x2, 1);
          operands[3] = x7;
          switch (GET_MODE (operands[0]))
            {
            case E_V32HFmode:
              if (pattern486 (x2, 
E_V32HFmode, 
E_SImode) != 0
                  || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 2750 "../../gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (MULT, V32HFmode, operands)
   && (64 == 64 || TARGET_AVX512VL) && 1) && 
#line 390 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_EVEX512))))
                return -1;
              return 2781; /* *mulv32hf3_mask */

            case E_V16HFmode:
              if (pattern486 (x2, 
E_V16HFmode, 
E_HImode) != 0
                  || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 2750 "../../gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (MULT, V16HFmode, operands)
   && (32 == 64 || TARGET_AVX512VL) && 1) && 
#line 391 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL))))
                return -1;
              return 2785; /* *mulv16hf3_mask */

            case E_V8HFmode:
              if (pattern486 (x2, 
E_V8HFmode, 
E_QImode) != 0
                  || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 2750 "../../gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (MULT, V8HFmode, operands)
   && (16 == 64 || TARGET_AVX512VL) && 1) && 
#line 392 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL))))
                return -1;
              return 2789; /* *mulv8hf3_mask */

            case E_V16SFmode:
              if (pattern486 (x2, 
E_V16SFmode, 
E_HImode) != 0
                  || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 2750 "../../gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (MULT, V16SFmode, operands)
   && (64 == 64 || TARGET_AVX512VL) && 1) && 
#line 393 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512))))
                return -1;
              return 2793; /* *mulv16sf3_mask */

            case E_V8SFmode:
              if (pattern486 (x2, 
E_V8SFmode, 
E_QImode) != 0
                  || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 2750 "../../gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (MULT, V8SFmode, operands)
   && (32 == 64 || TARGET_AVX512VL) && 1) && 
#line 393 "../../gcc/config/i386/sse.md"
(TARGET_AVX))))
                return -1;
              return 2797; /* *mulv8sf3_mask */

            case E_V4SFmode:
              if (pattern486 (x2, 
E_V4SFmode, 
E_QImode) != 0
                  || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 2750 "../../gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (MULT, V4SFmode, operands)
   && (16 == 64 || TARGET_AVX512VL) && 1)))
                return -1;
              return 2801; /* *mulv4sf3_mask */

            case E_V8DFmode:
              if (pattern486 (x2, 
E_V8DFmode, 
E_QImode) != 0
                  || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 2750 "../../gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (MULT, V8DFmode, operands)
   && (64 == 64 || TARGET_AVX512VL) && 1) && 
#line 394 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512))))
                return -1;
              return 2805; /* *mulv8df3_mask */

            case E_V4DFmode:
              if (pattern486 (x2, 
E_V4DFmode, 
E_QImode) != 0
                  || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 2750 "../../gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (MULT, V4DFmode, operands)
   && (32 == 64 || TARGET_AVX512VL) && 1) && 
#line 394 "../../gcc/config/i386/sse.md"
(TARGET_AVX))))
                return -1;
              return 2809; /* *mulv4df3_mask */

            case E_V2DFmode:
              if (pattern486 (x2, 
E_V2DFmode, 
E_QImode) != 0
                  || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 2750 "../../gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (MULT, V2DFmode, operands)
   && (16 == 64 || TARGET_AVX512VL) && 1) && 
#line 395 "../../gcc/config/i386/sse.md"
(TARGET_SSE2))))
                return -1;
              return 2813; /* *mulv2df3_mask */

            case E_V32HImode:
              if (pattern126 (x2, 
E_V32HImode, 
E_SImode) != 0
                  || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 16385 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && !(MEM_P (operands[1]) && MEM_P (operands[2]))
   && (64 == 64 || TARGET_AVX512VL) && TARGET_AVX512BW) && 
#line 653 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512))))
                return -1;
              return 7556; /* *mulv32hi3_mask */

            case E_V16HImode:
              if (pattern126 (x2, 
E_V16HImode, 
E_HImode) != 0
                  || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 16385 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && !(MEM_P (operands[1]) && MEM_P (operands[2]))
   && (32 == 64 || TARGET_AVX512VL) && TARGET_AVX512BW) && 
#line 653 "../../gcc/config/i386/sse.md"
(TARGET_AVX2))))
                return -1;
              return 7558; /* *mulv16hi3_mask */

            case E_V8HImode:
              if (pattern126 (x2, 
E_V8HImode, 
E_QImode) != 0
                  || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 16385 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && !(MEM_P (operands[1]) && MEM_P (operands[2]))
   && (16 == 64 || TARGET_AVX512VL) && TARGET_AVX512BW)))
                return -1;
              return 7560; /* *mulv8hi3_mask */

            case E_V8DImode:
              if (pattern486 (x2, 
E_V8DImode, 
E_QImode) != 0
                  || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 16839 "../../gcc/config/i386/sse.md"
(TARGET_AVX512DQ && (64 == 64 || TARGET_AVX512VL)
  && ix86_binary_operator_ok (MULT, V8DImode, operands)) && 
#line 624 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512))))
                return -1;
              return 7594; /* *avx512dq_mulv8di3_mask */

            case E_V4DImode:
              if (pattern486 (x2, 
E_V4DImode, 
E_QImode) != 0
                  || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 16839 "../../gcc/config/i386/sse.md"
(TARGET_AVX512DQ && (32 == 64 || TARGET_AVX512VL)
  && ix86_binary_operator_ok (MULT, V4DImode, operands)) && 
#line 624 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
                return -1;
              return 7596; /* *avx512dq_mulv4di3_mask */

            case E_V2DImode:
              if (pattern486 (x2, 
E_V2DImode, 
E_QImode) != 0
                  || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 16839 "../../gcc/config/i386/sse.md"
(TARGET_AVX512DQ && (16 == 64 || TARGET_AVX512VL)
  && ix86_binary_operator_ok (MULT, V2DImode, operands)) && 
#line 624 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
                return -1;
              return 7598; /* *avx512dq_mulv2di3_mask */

            case E_V16SImode:
              if (pattern486 (x2, 
E_V16SImode, 
E_HImode) != 0
                  || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 16898 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1 && ix86_binary_operator_ok (MULT, V16SImode, operands)
  && (64 == 64 || TARGET_AVX512VL)) && 
#line 672 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512))))
                return -1;
              return 7600; /* *avx512f_mulv16si3_mask */

            case E_V8SImode:
              if (pattern486 (x2, 
E_V8SImode, 
E_QImode) != 0
                  || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 16898 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1 && ix86_binary_operator_ok (MULT, V8SImode, operands)
  && (32 == 64 || TARGET_AVX512VL)) && 
#line 672 "../../gcc/config/i386/sse.md"
(TARGET_AVX2))))
                return -1;
              return 7602; /* *avx2_mulv8si3_mask */

            case E_V4SImode:
              if (pattern486 (x2, 
E_V4SImode, 
E_QImode) != 0
                  || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 16898 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1 && ix86_binary_operator_ok (MULT, V4SImode, operands)
  && (16 == 64 || TARGET_AVX512VL))))
                return -1;
              return 7604; /* *sse4_1_mulv4si3_mask */

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
              return 10607; /* avx10_2_mulnepbf16_v32bf_mask */

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
              return 10615; /* avx10_2_mulnepbf16_v16bf_mask */

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
              return 10623; /* avx10_2_mulnepbf16_v8bf_mask */

            default:
              return -1;
            }

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
              return 2821; /* avx512fp16_vmmulv8hf3 */

            case 1:
              if (!
#line 2801 "../../gcc/config/i386/sse.md"
(TARGET_SSE))
                return -1;
              return 2829; /* sse_vmmulv4sf3 */

            case 2:
              if (!(
#line 2801 "../../gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 480 "../../gcc/config/i386/sse.md"
(TARGET_SSE2)))
                return -1;
              return 2837; /* sse2_vmmulv2df3 */

            default:
              return -1;
            }

        default:
          return -1;
        }

    case ZERO_EXTEND:
      switch (pattern312 (x2, 
ZERO_EXTEND))
        {
        case 0:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 16468 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512
   && !(MEM_P (operands[1]) && MEM_P (operands[2])))))
            return -1;
          return 7574; /* *vec_widen_umult_even_v16si_mask */

        case 1:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 16504 "../../gcc/config/i386/sse.md"
(TARGET_AVX2 && TARGET_AVX512VL
   && !(MEM_P (operands[1]) && MEM_P (operands[2])))))
            return -1;
          return 7576; /* *vec_widen_umult_even_v8si_mask */

        case 2:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 16536 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && TARGET_AVX512VL
   && !(MEM_P (operands[1]) && MEM_P (operands[2])))))
            return -1;
          return 7578; /* *vec_widen_umult_even_v4si_mask */

        default:
          return -1;
        }

    case SIGN_EXTEND:
      switch (pattern312 (x2, 
SIGN_EXTEND))
        {
        case 0:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 16584 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512
   && !(MEM_P (operands[1]) && MEM_P (operands[2])))))
            return -1;
          return 7580; /* *vec_widen_smult_even_v16si_mask */

        case 1:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 16620 "../../gcc/config/i386/sse.md"
(TARGET_AVX2 && !(MEM_P (operands[1]) && MEM_P (operands[2])))))
            return -1;
          return 7582; /* *vec_widen_smult_even_v8si_mask */

        case 2:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 16652 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1 && TARGET_AVX512VL
   && !(MEM_P (operands[1]) && MEM_P (operands[2])))))
            return -1;
          return 7584; /* *sse4_1_mulv2siv2di3_mask */

        default:
          return -1;
        }

    default:
      return -1;
    }
}

 int
recog_190 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12, x13, x14, x15, x16, x17;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  switch (GET_CODE (x4))
    {
    case REG:
    case SUBREG:
      switch (pattern137 (x2))
        {
        case 0:
          if (!
#line 15135 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512))
            return -1;
          return 7238; /* avx512f_truncatev16siv16qi2_mask */

        case 1:
          if (!(
#line 15307 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL) && 
#line 15224 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW)))
            return -1;
          return 7274; /* avx512vl_truncatev16hiv16qi2_mask */

        case 2:
          if (!
#line 15135 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512))
            return -1;
          return 7241; /* avx512f_truncatev16siv16hi2_mask */

        case 3:
          if (!
#line 15135 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512))
            return -1;
          return 7244; /* avx512f_truncatev8div8si2_mask */

        case 4:
          if (!
#line 15135 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512))
            return -1;
          return 7247; /* avx512f_truncatev8div8hi2_mask */

        case 5:
          if (!
#line 15307 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))
            return -1;
          return 7271; /* avx512vl_truncatev8siv8hi2_mask */

        case 6:
          if (!
#line 15207 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512))
            return -1;
          return 7254; /* avx512bw_truncatev32hiv32qi2_mask */

        case 7:
          if (!
#line 15307 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))
            return -1;
          return 7268; /* avx512vl_truncatev4div4si2_mask */

        default:
          return -1;
        }

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
          x7 = XEXP (x2, 1);
          operands[3] = x7;
          x8 = XEXP (x2, 2);
          operands[4] = x8;
          x9 = XEXP (x6, 0);
          switch (GET_CODE (x9))
            {
            case SIGN_EXTEND:
              switch (pattern1119 (x2, 
SIGN_EXTEND))
                {
                case 0:
                  if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 16420 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && !(MEM_P (operands[1]) && MEM_P (operands[2]))
   && (64 == 64 || TARGET_AVX512VL) && TARGET_AVX512BW) && 
#line 653 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512))))
                    return -1;
                  return 7562; /* *smulv32hi3_highpart_mask */

                case 1:
                  if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 16420 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && !(MEM_P (operands[1]) && MEM_P (operands[2]))
   && (32 == 64 || TARGET_AVX512VL) && TARGET_AVX512BW) && 
#line 653 "../../gcc/config/i386/sse.md"
(TARGET_AVX2))))
                    return -1;
                  return 7566; /* *smulv16hi3_highpart_mask */

                case 2:
                  if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 16420 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && !(MEM_P (operands[1]) && MEM_P (operands[2]))
   && (16 == 64 || TARGET_AVX512VL) && TARGET_AVX512BW)))
                    return -1;
                  return 7570; /* *smulv8hi3_highpart_mask */

                default:
                  return -1;
                }

            case ZERO_EXTEND:
              switch (pattern1119 (x2, 
ZERO_EXTEND))
                {
                case 0:
                  if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 16420 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && !(MEM_P (operands[1]) && MEM_P (operands[2]))
   && (64 == 64 || TARGET_AVX512VL) && TARGET_AVX512BW) && 
#line 653 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512))))
                    return -1;
                  return 7564; /* *umulv32hi3_highpart_mask */

                case 1:
                  if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 16420 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && !(MEM_P (operands[1]) && MEM_P (operands[2]))
   && (32 == 64 || TARGET_AVX512VL) && TARGET_AVX512BW) && 
#line 653 "../../gcc/config/i386/sse.md"
(TARGET_AVX2))))
                    return -1;
                  return 7568; /* *umulv16hi3_highpart_mask */

                case 2:
                  if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 16420 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && !(MEM_P (operands[1]) && MEM_P (operands[2]))
   && (16 == 64 || TARGET_AVX512VL) && TARGET_AVX512BW)))
                    return -1;
                  return 7572; /* *umulv8hi3_highpart_mask */

                default:
                  return -1;
                }

            default:
              return -1;
            }

        case PLUS:
          if (XWINT (x5, 0) != 1L)
            return -1;
          x9 = XEXP (x6, 0);
          switch (GET_CODE (x9))
            {
            case PLUS:
              x10 = XEXP (x9, 0);
              if (GET_CODE (x10) != ZERO_EXTEND)
                return -1;
              x11 = XEXP (x9, 1);
              if (GET_CODE (x11) != ZERO_EXTEND)
                return -1;
              x12 = XEXP (x10, 0);
              operands[1] = x12;
              x13 = XEXP (x11, 0);
              operands[2] = x13;
              x14 = XEXP (x6, 1);
              operands[5] = x14;
              x7 = XEXP (x2, 1);
              operands[3] = x7;
              x8 = XEXP (x2, 2);
              operands[4] = x8;
              switch (GET_MODE (operands[0]))
                {
                case E_V64QImode:
                  if (pattern1549 (x2, 
E_DImode, 
E_V64QImode, 
E_V64HImode) != 0
                      || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 21888 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && (64 == 64 || TARGET_AVX512VL) && TARGET_AVX512BW
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 740 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512))))
                    return -1;
                  return 8491; /* *avx512bw_uavgv64qi3_mask */

                case E_V32QImode:
                  if (pattern1549 (x2, 
E_SImode, 
E_V32QImode, 
E_V32HImode) != 0
                      || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 21888 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && (32 == 64 || TARGET_AVX512VL) && TARGET_AVX512BW
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 740 "../../gcc/config/i386/sse.md"
(TARGET_AVX2))))
                    return -1;
                  return 8493; /* *avx2_uavgv32qi3_mask */

                case E_V16QImode:
                  if (pattern1549 (x2, 
E_HImode, 
E_V16QImode, 
E_V16HImode) != 0
                      || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 21888 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && (16 == 64 || TARGET_AVX512VL) && TARGET_AVX512BW
   && !(MEM_P (operands[1]) && MEM_P (operands[2])))))
                    return -1;
                  return 8495; /* *sse2_uavgv16qi3_mask */

                case E_V32HImode:
                  if (pattern1549 (x2, 
E_SImode, 
E_V32HImode, 
E_V32SImode) != 0
                      || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 21888 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && (64 == 64 || TARGET_AVX512VL) && TARGET_AVX512BW
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 741 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512))))
                    return -1;
                  return 8497; /* *avx512bw_uavgv32hi3_mask */

                case E_V16HImode:
                  if (pattern1549 (x2, 
E_HImode, 
E_V16HImode, 
E_V16SImode) != 0
                      || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 21888 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && (32 == 64 || TARGET_AVX512VL) && TARGET_AVX512BW
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 741 "../../gcc/config/i386/sse.md"
(TARGET_AVX2))))
                    return -1;
                  return 8499; /* *avx2_uavgv16hi3_mask */

                case E_V8HImode:
                  if (pattern1549 (x2, 
E_QImode, 
E_V8HImode, 
E_V8SImode) != 0
                      || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 21888 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && (16 == 64 || TARGET_AVX512VL) && TARGET_AVX512BW
   && !(MEM_P (operands[1]) && MEM_P (operands[2])))))
                    return -1;
                  return 8501; /* *sse2_uavgv8hi3_mask */

                default:
                  return -1;
                }

            case LSHIFTRT:
              x10 = XEXP (x9, 0);
              if (GET_CODE (x10) != MULT)
                return -1;
              x12 = XEXP (x10, 0);
              if (GET_CODE (x12) != SIGN_EXTEND)
                return -1;
              x15 = XEXP (x10, 1);
              if (GET_CODE (x15) != SIGN_EXTEND)
                return -1;
              x11 = XEXP (x9, 1);
              if (x11 != const_int_rtx[MAX_SAVED_CONST_INT + 14])
                return -1;
              x16 = XEXP (x12, 0);
              operands[1] = x16;
              if (nonimmediate_operand (operands[1], E_V32HImode))
                {
                  res = recog_177 (x1, insn, pnum_clobbers);
                  if (res >= 0)
                    return res;
                }
              x17 = XEXP (x15, 0);
              operands[2] = x17;
              x14 = XEXP (x6, 1);
              operands[3] = x14;
              x7 = XEXP (x2, 1);
              operands[4] = x7;
              x8 = XEXP (x2, 2);
              operands[5] = x8;
              switch (GET_MODE (operands[0]))
                {
                case E_V32HImode:
                  if (pattern1639 (x2, 
E_SImode, 
E_V32HImode, 
E_V32SImode) != 0
                      || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 22992 "../../gcc/config/i386/sse.md"
(TARGET_SSSE3 && (64 == 64 || TARGET_AVX512VL) && TARGET_AVX512BW
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 653 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512))))
                    return -1;
                  return 8614; /* *avx512bw_pmulhrswv32hi3_mask */

                case E_V16HImode:
                  if (pattern1639 (x2, 
E_HImode, 
E_V16HImode, 
E_V16SImode) != 0
                      || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 22992 "../../gcc/config/i386/sse.md"
(TARGET_SSSE3 && (32 == 64 || TARGET_AVX512VL) && TARGET_AVX512BW
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 653 "../../gcc/config/i386/sse.md"
(TARGET_AVX2))))
                    return -1;
                  return 8616; /* *avx2_pmulhrswv16hi3_mask */

                case E_V8HImode:
                  if (pattern1639 (x2, 
E_QImode, 
E_V8HImode, 
E_V8SImode) != 0
                      || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 22992 "../../gcc/config/i386/sse.md"
(TARGET_SSSE3 && (16 == 64 || TARGET_AVX512VL) && TARGET_AVX512BW
   && !(MEM_P (operands[1]) && MEM_P (operands[2])))))
                    return -1;
                  return 8618; /* *ssse3_pmulhrswv8hi3_mask */

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
recog_202 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  switch (pattern133 (x2))
    {
    case 0:
      switch (pattern891 (x2))
        {
        case 0:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 7633 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && 1) && 
#line 694 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
            return -1;
          return 4476; /* avx512fp16_vcvtw2ph_v8hi_mask */

        case 1:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 7633 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && 1) && 
#line 695 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
            return -1;
          return 4497; /* avx512fp16_vcvtdq2ph_v8si_mask */

        case 2:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 7633 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && 1) && 
#line 696 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512))))
            return -1;
          return 4513; /* avx512fp16_vcvtqq2ph_v8di_mask */

        default:
          return -1;
        }

    case 1:
      switch (pattern892 (x2))
        {
        case 0:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 7633 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && 1) && 
#line 694 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
            return -1;
          return 4481; /* avx512fp16_vcvtw2ph_v16hi_mask */

        case 1:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 7633 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && 1) && 
#line 695 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512))))
            return -1;
          return 4505; /* avx512fp16_vcvtdq2ph_v16si_mask */

        default:
          return -1;
        }

    case 2:
      if (pattern774 (x2, 
E_V32HFmode, 
E_SImode, 
E_V32HImode) != 0
          || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 7633 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && 1) && 
#line 694 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512))))
        return -1;
      return 4489; /* avx512fp16_vcvtw2ph_v32hi_mask */

    case 3:
      if (pattern774 (x2, 
E_V16SFmode, 
E_HImode, 
E_V16SImode) != 0
          || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 8637 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && (64 == 64 || TARGET_AVX512VL) && 1) && 
#line 434 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512))))
        return -1;
      return 4810; /* floatv16siv16sf2_mask */

    case 4:
      if (pattern773 (x2, 
E_V8SFmode, 
E_QImode) != 0)
        return -1;
      switch (GET_MODE (operands[1]))
        {
        case E_V8SImode:
          if (!vector_operand (operands[1], E_V8SImode)
              || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 8637 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && (32 == 64 || TARGET_AVX512VL) && 1) && 
#line 434 "../../gcc/config/i386/sse.md"
(TARGET_AVX))))
            return -1;
          return 4814; /* floatv8siv8sf2_mask */

        case E_V8DImode:
          if (!nonimmediate_operand (operands[1], E_V8DImode)
              || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 9185 "../../gcc/config/i386/sse.md"
(TARGET_AVX512DQ && 1) && 
#line 627 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512))))
            return -1;
          return 4968; /* floatv8div8sf2_mask */

        default:
          return -1;
        }

    case 5:
      if (pattern773 (x2, 
E_V4SFmode, 
E_QImode) != 0)
        return -1;
      switch (GET_MODE (operands[1]))
        {
        case E_V4SImode:
          if (!vector_operand (operands[1], E_V4SImode)
              || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 8637 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && (16 == 64 || TARGET_AVX512VL) && 1)))
            return -1;
          return 4817; /* floatv4siv4sf2_mask */

        case E_V4DImode:
          if (!nonimmediate_operand (operands[1], E_V4DImode)
              || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 9185 "../../gcc/config/i386/sse.md"
(TARGET_AVX512DQ && 1) && 
#line 627 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
            return -1;
          return 4976; /* floatv4div4sf2_mask */

        default:
          return -1;
        }

    case 6:
      switch (pattern893 (x2, 
E_V8DFmode))
        {
        case 0:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 9161 "../../gcc/config/i386/sse.md"
(TARGET_AVX && (64 == 64 || TARGET_AVX512VL)) && 
#line 468 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512))))
            return -1;
          return 4943; /* floatv8siv8df2_mask */

        case 1:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 9171 "../../gcc/config/i386/sse.md"
(TARGET_AVX512DQ && 1) && 
#line 537 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512))))
            return -1;
          return 4948; /* floatv8div8df2_mask */

        default:
          return -1;
        }

    case 7:
      switch (pattern894 (x2, 
E_V4DFmode))
        {
        case 0:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 9161 "../../gcc/config/i386/sse.md"
(TARGET_AVX && (32 == 64 || TARGET_AVX512VL))))
            return -1;
          return 4945; /* floatv4siv4df2_mask */

        case 1:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 9171 "../../gcc/config/i386/sse.md"
(TARGET_AVX512DQ && 1) && 
#line 537 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
            return -1;
          return 4956; /* floatv4div4df2_mask */

        default:
          return -1;
        }

    case 8:
      if (pattern146 (x2, 
E_V2DFmode, 
E_V2DImode, 
E_QImode) != 0
          || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 9171 "../../gcc/config/i386/sse.md"
(TARGET_AVX512DQ && 1) && 
#line 537 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
        return -1;
      return 4963; /* floatv2div2df2_mask */

    case 9:
      if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 9387 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && TARGET_AVX512VL)))
        return -1;
      return 4997; /* sse2_cvtdq2pd_mask */

    default:
      return -1;
    }
}

 int
recog_212 (rtx x1 ATTRIBUTE_UNUSED,
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
    case E_V8HImode:
      if (!register_operand (operands[0], E_V8HImode)
          || GET_MODE (x2) != E_V8HImode
          || !vector_operand (operands[1], E_V8HFmode)
          || !(
#line 7855 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && 1) && 
#line 694 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 4561; /* unspec_avx512fp16_fixuns_truncv8hi2 */

    case E_V16HImode:
      if (!register_operand (operands[0], E_V16HImode)
          || GET_MODE (x2) != E_V16HImode
          || !vector_operand (operands[1], E_V16HFmode)
          || !(
#line 7855 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && 1) && 
#line 694 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 4567; /* unspec_avx512fp16_fixuns_truncv16hi2 */

    case E_V32HImode:
      if (!register_operand (operands[0], E_V32HImode)
          || GET_MODE (x2) != E_V32HImode
          || !vector_operand (operands[1], E_V32HFmode)
          || !(
#line 7855 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && 1) && 
#line 694 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 4575; /* unspec_avx512fp16_fixuns_truncv32hi2 */

    case E_V8SImode:
      switch (pattern643 (x2, 
E_V8SImode))
        {
        case 0:
          if (!(
#line 7855 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && 1) && 
#line 695 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 4583; /* unspec_avx512fp16_fixuns_truncv8si2 */

        case 1:
          if (!
#line 9558 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512))
            return -1;
          return 5025; /* unspec_fixuns_truncv8dfv8si2 */

        case 2:
          if (!(
#line 9903 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL && 1) && 
#line 441 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 5146; /* *unspec_fixuns_truncv8sfv8si2 */

        default:
          return -1;
        }

    case E_V16SImode:
      switch (pattern642 (x2, 
E_V16SImode))
        {
        case 0:
          if (!(
#line 7855 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && 1) && 
#line 695 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return -1;
          return 4591; /* unspec_avx512fp16_fixuns_truncv16si2 */

        case 1:
          if (!
#line 8763 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512))
            return -1;
          return 4872; /* unspec_fixuns_truncv16sfv16si2 */

        default:
          return -1;
        }

    case E_V8DImode:
      switch (pattern643 (x2, 
E_V8DImode))
        {
        case 0:
          if (!(
#line 7855 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && 1) && 
#line 696 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return -1;
          return 4599; /* unspec_avx512fp16_fixuns_truncv8di2 */

        case 1:
          if (!(
#line 9689 "../../gcc/config/i386/sse.md"
(TARGET_AVX512DQ && 1) && 
#line 537 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return -1;
          return 5058; /* unspec_fixuns_truncv8dfv8di2 */

        case 2:
          if (!(
#line 9732 "../../gcc/config/i386/sse.md"
(TARGET_AVX512DQ && 1) && 
#line 627 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return -1;
          return 5118; /* unspec_fixuns_truncv8sfv8di2 */

        default:
          return -1;
        }

    case E_V4SImode:
      switch (pattern644 (x2, 
E_V4SImode))
        {
        case 0:
          if (!
#line 7893 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL && 1))
            return -1;
          return 4649; /* unspec_avx512fp16_fixuns_truncv4si2 */

        case 1:
          if (!
#line 9668 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL && TARGET_AVX512F
  && (!false || TARGET_AVX10_2_256)))
            return -1;
          return 5048; /* unspec_fixuns_truncv4dfv4si2 */

        case 2:
          if (!
#line 9903 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL && 1))
            return -1;
          return 5150; /* *unspec_fixuns_truncv4sfv4si2 */

        default:
          return -1;
        }

    case E_V4DImode:
      switch (pattern644 (x2, 
E_V4DImode))
        {
        case 0:
          if (!
#line 7893 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL && 1))
            return -1;
          return 4655; /* unspec_avx512fp16_fixuns_truncv4di2 */

        case 1:
          if (!(
#line 9689 "../../gcc/config/i386/sse.md"
(TARGET_AVX512DQ && 1) && 
#line 537 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 5066; /* unspec_fixuns_truncv4dfv4di2 */

        case 2:
          if (!(
#line 9732 "../../gcc/config/i386/sse.md"
(TARGET_AVX512DQ && 1) && 
#line 627 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 5126; /* unspec_fixuns_truncv4sfv4di2 */

        default:
          return -1;
        }

    case E_V2DImode:
      switch (pattern645 (x2))
        {
        case 0:
          if (!
#line 7943 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL))
            return -1;
          return 4677; /* unspec_avx512fp16_fixuns_truncv2di2 */

        case 1:
          if (!(
#line 9689 "../../gcc/config/i386/sse.md"
(TARGET_AVX512DQ && 1) && 
#line 537 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 5072; /* unspec_fixuns_truncv2dfv2di2 */

        case 2:
          if (!
#line 9753 "../../gcc/config/i386/sse.md"
(TARGET_AVX512DQ && TARGET_AVX512VL))
            return -1;
          return 5140; /* unspec_avx512dq_fixuns_truncv2sfv2di2 */

        default:
          return -1;
        }

    default:
      return -1;
    }
}

 int
recog_225 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12, x13, x14;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XVECEXP (x2, 0, 0);
  x4 = XEXP (x3, 2);
  if (x4 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
    return -1;
  x5 = XEXP (x3, 0);
  x6 = XEXP (x5, 0);
  switch (GET_CODE (x6))
    {
    case SQRT:
      x7 = XEXP (x6, 0);
      operands[1] = x7;
      x8 = XEXP (x3, 1);
      operands[2] = x8;
      x9 = XVECEXP (x2, 0, 1);
      operands[3] = x9;
      if (!const_4_or_8_to_11_operand (operands[3], E_SImode))
        return -1;
      switch (GET_MODE (operands[0]))
        {
        case E_V8HFmode:
          if (pattern1403 (x2, 
E_V8HFmode, 
E_HFmode) != 0
              || !(
#line 444 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 3102 "../../gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 479 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16))))
            return -1;
          return 2947; /* *avx512fp16_vmsqrtv8hf2_round */

        case E_V4SFmode:
          if (pattern1403 (x2, 
E_V4SFmode, 
E_SFmode) != 0
              || !(
#line 444 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 3102 "../../gcc/config/i386/sse.md"
(TARGET_SSE)))
            return -1;
          return 2951; /* *sse_vmsqrtv4sf2_round */

        case E_V2DFmode:
          if (pattern1403 (x2, 
E_V2DFmode, 
E_DFmode) != 0
              || !(
#line 444 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 3102 "../../gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 480 "../../gcc/config/i386/sse.md"
(TARGET_SSE2))))
            return -1;
          return 2955; /* *sse2_vmsqrtv2df2_round */

        default:
          return -1;
        }

    case FLOAT:
      switch (pattern909 (x2))
        {
        case 0:
          if (!(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 7838 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16)))
            return -1;
          return 4552; /* avx512fp16_vcvtsi2sh_round */

        case 1:
          if (!(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 7838 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT))))
            return -1;
          return 4556; /* avx512fp16_vcvtsi2shq_round */

        case 2:
          if (!(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 8517 "../../gcc/config/i386/sse.md"
(TARGET_SSE)))
            return -1;
          return 4784; /* sse_cvtsi2ss_round */

        case 3:
          if (!(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 8517 "../../gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT))))
            return -1;
          return 4786; /* sse_cvtsi2ssq_round */

        case 4:
          if (!(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 9001 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && TARGET_64BIT)))
            return -1;
          return 4903; /* sse2_cvtsi2sdq_round */

        default:
          return -1;
        }

    case UNSIGNED_FLOAT:
      switch (pattern909 (x2))
        {
        case 0:
          if (!(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 7838 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16)))
            return -1;
          return 4554; /* avx512fp16_vcvtusi2sh_round */

        case 1:
          if (!(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 7838 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT))))
            return -1;
          return 4558; /* avx512fp16_vcvtusi2shq_round */

        case 2:
          if (!(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 8613 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && (V4SFmode == V4SFmode))))
            return -1;
          return 4802; /* cvtusi2ss32_round */

        case 3:
          if (!(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 8627 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_64BIT)))
            return -1;
          return 4805; /* cvtusi2ss64_round */

        case 4:
          if (!(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 8627 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_64BIT) && 
#line 475 "../../gcc/config/i386/sse.md"
(TARGET_SSE2))))
            return -1;
          return 4807; /* cvtusi2sd64_round */

        default:
          return -1;
        }

    case FLOAT_EXTEND:
      x7 = XEXP (x6, 0);
      if (pattern907 (x7, 
1, 
E_HFmode) != 0)
        return -1;
      x10 = XEXP (x7, 0);
      operands[1] = x10;
      if (!register_operand (operands[1], E_V8HFmode))
        return -1;
      x8 = XEXP (x3, 1);
      operands[2] = x8;
      x9 = XVECEXP (x2, 0, 1);
      operands[3] = x9;
      if (!const48_operand (operands[3], E_SImode))
        return -1;
      switch (GET_MODE (operands[0]))
        {
        case E_V2DFmode:
          if (pattern1668 (x2, 
E_V2DFmode, 
E_DFmode) != 0
              || !(
#line 486 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 8298 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16)))
            return -1;
          return 4757; /* avx512fp16_vcvtsh2sd_round */

        case E_V4SFmode:
          if (pattern1668 (x2, 
E_V4SFmode, 
E_SFmode) != 0
              || !(
#line 486 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 8298 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16)))
            return -1;
          return 4761; /* avx512fp16_vcvtsh2ss_round */

        default:
          return -1;
        }

    case FLOAT_TRUNCATE:
      x9 = XVECEXP (x2, 0, 1);
      operands[3] = x9;
      if (!const_4_or_8_to_11_operand (operands[3], E_SImode))
        return -1;
      x7 = XEXP (x6, 0);
      switch (GET_CODE (x7))
        {
        case VEC_SELECT:
          x11 = XEXP (x7, 1);
          if (GET_CODE (x11) != PARALLEL
              || XVECLEN (x11, 0) != 1)
            return -1;
          x12 = XVECEXP (x11, 0, 0);
          if (x12 != const_int_rtx[MAX_SAVED_CONST_INT + 0]
              || pattern1404 (x2, 
E_HFmode, 
E_V8HFmode) != 0)
            return -1;
          x10 = XEXP (x7, 0);
          operands[1] = x10;
          x8 = XEXP (x3, 1);
          operands[2] = x8;
          if (!register_operand (operands[2], E_V8HFmode))
            return -1;
          switch (GET_MODE (x7))
            {
            case E_DFmode:
              if (!register_operand (operands[1], E_V2DFmode)
                  || !(
#line 444 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 8328 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16)))
                return -1;
              return 4768; /* avx512fp16_vcvtsd2sh_round */

            case E_SFmode:
              if (!register_operand (operands[1], E_V4SFmode)
                  || !(
#line 444 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 8328 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16)))
                return -1;
              return 4772; /* avx512fp16_vcvtss2sh_round */

            default:
              return -1;
            }

        case REG:
        case SUBREG:
        case MEM:
          operands[2] = x7;
          if (!nonimmediate_operand (operands[2], E_V2DFmode)
              || pattern1404 (x2, 
E_V2SFmode, 
E_V4SFmode) != 0)
            return -1;
          x8 = XEXP (x3, 1);
          operands[1] = x8;
          if (!register_operand (operands[1], E_V4SFmode)
              || !(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 10003 "../../gcc/config/i386/sse.md"
(TARGET_SSE2)))
            return -1;
          return 5162; /* sse2_cvtsd2ss_round */

        default:
          return -1;
        }

    case UNSPEC:
      if (XVECLEN (x6, 0) != 2
          || XINT (x6, 1) != 94)
        return -1;
      x13 = XVECEXP (x6, 0, 0);
      operands[2] = x13;
      x14 = XVECEXP (x6, 0, 1);
      operands[3] = x14;
      if (!const_0_to_255_operand (operands[3], E_SImode))
        return -1;
      x8 = XEXP (x3, 1);
      operands[1] = x8;
      x9 = XVECEXP (x2, 0, 1);
      operands[4] = x9;
      if (!const48_operand (operands[4], E_SImode))
        return -1;
      switch (GET_MODE (operands[0]))
        {
        case E_V8HFmode:
          if (pattern1583 (x2, 
E_V8HFmode, 
E_HFmode) != 0
              || !(
#line 286 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 14255 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 479 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16))))
            return -1;
          return 7181; /* *avx512f_rndscalev8hf_round */

        case E_V4SFmode:
          if (pattern1583 (x2, 
E_V4SFmode, 
E_SFmode) != 0
              || !
#line 286 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F))
            return -1;
          return 7183; /* *avx512f_rndscalev4sf_round */

        case E_V2DFmode:
          if (pattern1583 (x2, 
E_V2DFmode, 
E_DFmode) != 0
              || !(
#line 286 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 14255 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 480 "../../gcc/config/i386/sse.md"
(TARGET_SSE2))))
            return -1;
          return 7185; /* *avx512f_rndscalev2df_round */

        default:
          return -1;
        }

    default:
      return -1;
    }
}

 int
recog_227 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XVECEXP (x2, 0, 0);
  x4 = XVECEXP (x3, 0, 0);
  operands[1] = x4;
  x5 = XVECEXP (x2, 0, 1);
  operands[2] = x5;
  switch (XINT (x3, 1))
    {
    case 156:
      if (!const_4_or_8_to_11_operand (operands[2], E_SImode))
        return -1;
      switch (GET_MODE (operands[0]))
        {
        case E_V32HImode:
          if (pattern1020 (x2, 
E_V32HFmode, 
E_V32HImode) != 0
              || !(
#line 234 "../../gcc/config/i386/subst.md"
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
(TARGET_EVEX512))))
            return -1;
          return 4416; /* avx512fp16_vcvtph2uw_v32hi_round */

        case E_V16SImode:
          if (!register_operand (operands[0], E_V16SImode)
              || GET_MODE (x2) != E_V16SImode
              || GET_MODE (x3) != E_V16SImode)
            return -1;
          switch (GET_MODE (operands[1]))
            {
            case E_V16HFmode:
              if (!register_operand (operands[1], E_V16HFmode)
                  || !(
#line 234 "../../gcc/config/i386/subst.md"
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
(TARGET_EVEX512))))
                return -1;
              return 4424; /* avx512fp16_vcvtph2udq_v16si_round */

            case E_V16SFmode:
              if (!nonimmediate_operand (operands[1], E_V16SFmode)
                  || !(
#line 234 "../../gcc/config/i386/subst.md"
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
(TARGET_EVEX512))))
                return -1;
              return 4839; /* *avx512f_fixuns_notruncv16sfv16si_round */

            default:
              return -1;
            }

        case E_V8DImode:
          switch (pattern1220 (x2, 
E_V8DImode))
            {
            case 0:
              if (!(
#line 234 "../../gcc/config/i386/subst.md"
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
(TARGET_EVEX512))))
                return -1;
              return 4432; /* avx512fp16_vcvtph2uqq_v8di_round */

            case 1:
              if (!(
#line 234 "../../gcc/config/i386/subst.md"
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
(TARGET_EVEX512))))
                return -1;
              return 4859; /* *avx512dq_cvtps2uqqv8di_round */

            case 2:
              if (!(
#line 234 "../../gcc/config/i386/subst.md"
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
(TARGET_EVEX512))))
                return -1;
              return 5105; /* fixuns_notruncv8dfv8di2_round */

            default:
              return -1;
            }

        case E_V16HImode:
          if (pattern1020 (x2, 
E_V16HFmode, 
E_V16HImode) != 0
              || !(
#line 234 "../../gcc/config/i386/subst.md"
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
(TARGET_AVX512VL))))
            return -1;
          return 4440; /* avx512fp16_vcvtph2uw_v16hi_round */

        case E_V8SImode:
          switch (pattern1220 (x2, 
E_V8SImode))
            {
            case 0:
              if (!(
#line 234 "../../gcc/config/i386/subst.md"
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
(TARGET_AVX512VL))))
                return -1;
              return 4448; /* avx512fp16_vcvtph2udq_v8si_round */

            case 1:
              if (!(
#line 234 "../../gcc/config/i386/subst.md"
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
(TARGET_AVX512VL))))
                return -1;
              return 4843; /* *avx512vl_fixuns_notruncv8sfv8si_round */

            case 2:
              if (!(
#line 234 "../../gcc/config/i386/subst.md"
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
(TARGET_EVEX512))))
                return -1;
              return 5011; /* fixuns_notruncv8dfv8si2_round */

            default:
              return -1;
            }

        case E_V4DImode:
          switch (pattern1221 (x2))
            {
            case 0:
              if (!register_operand (operands[1], E_V8HFmode)
                  || !(
#line 234 "../../gcc/config/i386/subst.md"
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
(TARGET_AVX512VL))))
                return -1;
              return 4456; /* avx512fp16_vcvtph2uqq_v4di_round */

            case 1:
              if (!nonimmediate_operand (operands[1], E_V4SFmode)
                  || !(
#line 234 "../../gcc/config/i386/subst.md"
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
(TARGET_AVX512VL))))
                return -1;
              return 4863; /* *avx512dq_cvtps2uqqv4di_round */

            case 2:
              if (!nonimmediate_operand (operands[1], E_V4DFmode)
                  || !(
#line 234 "../../gcc/config/i386/subst.md"
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
(TARGET_AVX512VL))))
                return -1;
              return 5109; /* fixuns_notruncv4dfv4di2_round */

            default:
              return -1;
            }

        case E_V4SImode:
          if (!register_operand (operands[0], E_V4SImode)
              || GET_MODE (x2) != E_V4SImode
              || GET_MODE (x3) != E_V4SImode
              || !nonimmediate_operand (operands[1], E_V4DFmode)
              || !(
#line 234 "../../gcc/config/i386/subst.md"
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
(TARGET_AVX512VL))))
            return -1;
          return 5015; /* fixuns_notruncv4dfv4si2_round */

        default:
          return -1;
        }

    case 46:
      if (!const_4_or_8_to_11_operand (operands[2], E_SImode))
        return -1;
      switch (GET_MODE (operands[0]))
        {
        case E_V32HImode:
          if (pattern1020 (x2, 
E_V32HFmode, 
E_V32HImode) != 0
              || !(
#line 234 "../../gcc/config/i386/subst.md"
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
(TARGET_EVEX512))))
            return -1;
          return 4420; /* avx512fp16_vcvtph2w_v32hi_round */

        case E_V16SImode:
          switch (pattern1222 (x2))
            {
            case 0:
              if (!(
#line 234 "../../gcc/config/i386/subst.md"
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
(TARGET_EVEX512))))
                return -1;
              return 4428; /* avx512fp16_vcvtph2dq_v16si_round */

            case 1:
              if (!(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 8695 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
                return -1;
              return 4835; /* avx512f_fix_notruncv16sfv16si_round */

            default:
              return -1;
            }

        case E_V8DImode:
          if (!register_operand (operands[0], E_V8DImode)
              || GET_MODE (x2) != E_V8DImode
              || GET_MODE (x3) != E_V8DImode)
            return -1;
          switch (GET_MODE (operands[1]))
            {
            case E_V8HFmode:
              if (!register_operand (operands[1], E_V8HFmode)
                  || !(
#line 234 "../../gcc/config/i386/subst.md"
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
(TARGET_EVEX512))))
                return -1;
              return 4436; /* avx512fp16_vcvtph2qq_v8di_round */

            case E_V8SFmode:
              if (!nonimmediate_operand (operands[1], E_V8SFmode)
                  || !(
#line 234 "../../gcc/config/i386/subst.md"
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
(TARGET_EVEX512))))
                return -1;
              return 4849; /* *avx512dq_cvtps2qqv8di_round */

            case E_V8DFmode:
              if (!register_operand (operands[1], E_V8DFmode)
                  || !(
#line 234 "../../gcc/config/i386/subst.md"
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
(TARGET_EVEX512))))
                return -1;
              return 5095; /* fix_notruncv8dfv8di2_round */

            default:
              return -1;
            }

        case E_V16HImode:
          if (pattern1020 (x2, 
E_V16HFmode, 
E_V16HImode) != 0
              || !(
#line 234 "../../gcc/config/i386/subst.md"
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
(TARGET_AVX512VL))))
            return -1;
          return 4444; /* avx512fp16_vcvtph2w_v16hi_round */

        case E_V8SImode:
          switch (pattern1223 (x2))
            {
            case 0:
              if (!(
#line 234 "../../gcc/config/i386/subst.md"
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
(TARGET_AVX512VL))))
                return -1;
              return 4452; /* avx512fp16_vcvtph2dq_v8si_round */

            case 1:
              if (!(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 8679 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && 1 && ((V8SImode == V16SFmode
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
(TARGET_AVX))))
                return -1;
              return 4829; /* avx_fix_notruncv8sfv8si_round */

            case 2:
              if (!(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 9398 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
                return -1;
              return 4999; /* avx512f_cvtpd2dq512_round */

            default:
              return -1;
            }

        case E_V4DImode:
          switch (pattern1221 (x2))
            {
            case 0:
              if (!register_operand (operands[1], E_V8HFmode)
                  || !(
#line 234 "../../gcc/config/i386/subst.md"
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
(TARGET_AVX512VL))))
                return -1;
              return 4460; /* avx512fp16_vcvtph2qq_v4di_round */

            case 1:
              if (!nonimmediate_operand (operands[1], E_V4SFmode)
                  || !(
#line 234 "../../gcc/config/i386/subst.md"
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
(TARGET_AVX512VL))))
                return -1;
              return 4853; /* *avx512dq_cvtps2qqv4di_round */

            case 2:
              if (!register_operand (operands[1], E_V4DFmode)
                  || !(
#line 234 "../../gcc/config/i386/subst.md"
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
(TARGET_AVX512VL))))
                return -1;
              return 5099; /* fix_notruncv4dfv4di2_round */

            default:
              return -1;
            }

        case E_V4SImode:
          if (pattern1020 (x2, 
E_V4DFmode, 
E_V4SImode) != 0
              || !(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 9408 "../../gcc/config/i386/sse.md"
(TARGET_AVX && 1
   && (!true || TARGET_AVX10_2_256))))
            return -1;
          return 5003; /* avx_cvtpd2dq256_round */

        default:
          return -1;
        }

    case 172:
      if (!const48_operand (operands[2], E_SImode))
        return -1;
      switch (GET_MODE (operands[0]))
        {
        case E_V16HImode:
          if (pattern1020 (x2, 
E_V16HFmode, 
E_V16HImode) != 0
              || !(
#line 286 "../../gcc/config/i386/subst.md"
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
(TARGET_AVX512VL))))
            return -1;
          return 4564; /* unspec_avx512fp16_fix_truncv16hi2_round */

        case E_V32HImode:
          if (pattern1020 (x2, 
E_V32HFmode, 
E_V32HImode) != 0
              || !(
#line 286 "../../gcc/config/i386/subst.md"
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
(TARGET_EVEX512))))
            return -1;
          return 4572; /* unspec_avx512fp16_fix_truncv32hi2_round */

        case E_V8SImode:
          switch (pattern1223 (x2))
            {
            case 0:
              if (!(
#line 286 "../../gcc/config/i386/subst.md"
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
(TARGET_AVX512VL))))
                return -1;
              return 4580; /* unspec_avx512fp16_fix_truncv8si2_round */

            case 1:
              if (!(
#line 286 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 8783 "../../gcc/config/i386/sse.md"
(TARGET_AVX && 1
  && (!true || TARGET_AVX10_2_256))))
                return -1;
              return 4885; /* unspec_fix_truncv8sfv8si2_round */

            case 2:
              if (!(
#line 286 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 9558 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
                return -1;
              return 5022; /* unspec_fix_truncv8dfv8si2_round */

            default:
              return -1;
            }

        case E_V16SImode:
          switch (pattern1222 (x2))
            {
            case 0:
              if (!(
#line 286 "../../gcc/config/i386/subst.md"
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
(TARGET_EVEX512))))
                return -1;
              return 4588; /* unspec_avx512fp16_fix_truncv16si2_round */

            case 1:
              if (!(
#line 286 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 8763 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
                return -1;
              return 4869; /* unspec_fix_truncv16sfv16si2_round */

            default:
              return -1;
            }

        case E_V8DImode:
          switch (pattern1224 (x2, 
E_V8DImode))
            {
            case 0:
              if (!(
#line 286 "../../gcc/config/i386/subst.md"
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
(TARGET_EVEX512))))
                return -1;
              return 4596; /* unspec_avx512fp16_fix_truncv8di2_round */

            case 1:
              if (!(
#line 286 "../../gcc/config/i386/subst.md"
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
(TARGET_EVEX512))))
                return -1;
              return 5055; /* unspec_fix_truncv8dfv8di2_round */

            case 2:
              if (!(
#line 286 "../../gcc/config/i386/subst.md"
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
(TARGET_EVEX512))))
                return -1;
              return 5115; /* unspec_fix_truncv8sfv8di2_round */

            default:
              return -1;
            }

        case E_V4DImode:
          switch (pattern1225 (x2))
            {
            case 0:
              if (!(
#line 286 "../../gcc/config/i386/subst.md"
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
										       || V4DImode == V16HFmode))))))
                return -1;
              return 4652; /* unspec_avx512fp16_fix_truncv4di2_round */

            case 1:
              if (!(
#line 286 "../../gcc/config/i386/subst.md"
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
(TARGET_AVX512VL))))
                return -1;
              return 5063; /* unspec_fix_truncv4dfv4di2_round */

            case 2:
              if (!(
#line 286 "../../gcc/config/i386/subst.md"
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
(TARGET_AVX512VL))))
                return -1;
              return 5123; /* unspec_fix_truncv4sfv4di2_round */

            default:
              return -1;
            }

        case E_V4SImode:
          if (pattern1020 (x2, 
E_V4DFmode, 
E_V4SImode) != 0
              || !(
#line 286 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 9648 "../../gcc/config/i386/sse.md"
(TARGET_AVX && 1
   && (!true || TARGET_AVX10_2_256))))
            return -1;
          return 5043; /* unspec_fix_truncv4dfv4si2_round */

        default:
          return -1;
        }

    case 173:
      if (!const48_operand (operands[2], E_SImode))
        return -1;
      switch (GET_MODE (operands[0]))
        {
        case E_V16HImode:
          if (pattern1020 (x2, 
E_V16HFmode, 
E_V16HImode) != 0
              || !(
#line 286 "../../gcc/config/i386/subst.md"
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
(TARGET_AVX512VL))))
            return -1;
          return 4568; /* unspec_avx512fp16_fixuns_truncv16hi2_round */

        case E_V32HImode:
          if (pattern1020 (x2, 
E_V32HFmode, 
E_V32HImode) != 0
              || !(
#line 286 "../../gcc/config/i386/subst.md"
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
(TARGET_EVEX512))))
            return -1;
          return 4576; /* unspec_avx512fp16_fixuns_truncv32hi2_round */

        case E_V8SImode:
          switch (pattern1224 (x2, 
E_V8SImode))
            {
            case 0:
              if (!(
#line 286 "../../gcc/config/i386/subst.md"
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
(TARGET_AVX512VL))))
                return -1;
              return 4584; /* unspec_avx512fp16_fixuns_truncv8si2_round */

            case 1:
              if (!(
#line 286 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 9558 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
                return -1;
              return 5026; /* unspec_fixuns_truncv8dfv8si2_round */

            case 2:
              if (!(
#line 286 "../../gcc/config/i386/subst.md"
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
(TARGET_AVX))))
                return -1;
              return 5147; /* *unspec_fixuns_truncv8sfv8si2_round */

            default:
              return -1;
            }

        case E_V16SImode:
          switch (pattern1222 (x2))
            {
            case 0:
              if (!(
#line 286 "../../gcc/config/i386/subst.md"
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
(TARGET_EVEX512))))
                return -1;
              return 4592; /* unspec_avx512fp16_fixuns_truncv16si2_round */

            case 1:
              if (!(
#line 286 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 8763 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
                return -1;
              return 4873; /* unspec_fixuns_truncv16sfv16si2_round */

            default:
              return -1;
            }

        case E_V8DImode:
          switch (pattern1224 (x2, 
E_V8DImode))
            {
            case 0:
              if (!(
#line 286 "../../gcc/config/i386/subst.md"
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
(TARGET_EVEX512))))
                return -1;
              return 4600; /* unspec_avx512fp16_fixuns_truncv8di2_round */

            case 1:
              if (!(
#line 286 "../../gcc/config/i386/subst.md"
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
(TARGET_EVEX512))))
                return -1;
              return 5059; /* unspec_fixuns_truncv8dfv8di2_round */

            case 2:
              if (!(
#line 286 "../../gcc/config/i386/subst.md"
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
(TARGET_EVEX512))))
                return -1;
              return 5119; /* unspec_fixuns_truncv8sfv8di2_round */

            default:
              return -1;
            }

        case E_V4DImode:
          switch (pattern1225 (x2))
            {
            case 0:
              if (!(
#line 286 "../../gcc/config/i386/subst.md"
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
										       || V4DImode == V16HFmode))))))
                return -1;
              return 4656; /* unspec_avx512fp16_fixuns_truncv4di2_round */

            case 1:
              if (!(
#line 286 "../../gcc/config/i386/subst.md"
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
(TARGET_AVX512VL))))
                return -1;
              return 5067; /* unspec_fixuns_truncv4dfv4di2_round */

            case 2:
              if (!(
#line 286 "../../gcc/config/i386/subst.md"
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
(TARGET_AVX512VL))))
                return -1;
              return 5127; /* unspec_fixuns_truncv4sfv4di2_round */

            default:
              return -1;
            }

        case E_V4SImode:
          if (pattern1020 (x2, 
E_V4DFmode, 
E_V4SImode) != 0
              || !(
#line 286 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 9668 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL && TARGET_AVX512F
  && (!true || TARGET_AVX10_2_256))))
            return -1;
          return 5049; /* unspec_fixuns_truncv4dfv4si2_round */

        default:
          return -1;
        }

    case 165:
      if (!const48_operand (operands[2], E_SImode))
        return -1;
      switch (GET_MODE (operands[0]))
        {
        case E_V32HFmode:
          if (pattern1226 (x2, 
E_V32HFmode) != 0
              || !(
#line 286 "../../gcc/config/i386/subst.md"
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
(TARGET_AVX512FP16 && TARGET_EVEX512))))
            return -1;
          return 7035; /* avx512bw_getexpv32hf_round */

        case E_V16HFmode:
          if (pattern1226 (x2, 
E_V16HFmode) != 0
              || !(
#line 286 "../../gcc/config/i386/subst.md"
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
(TARGET_AVX512FP16 && TARGET_AVX512VL))))
            return -1;
          return 7039; /* avx512vl_getexpv16hf_round */

        case E_V16SFmode:
          if (pattern1226 (x2, 
E_V16SFmode) != 0
              || !(
#line 286 "../../gcc/config/i386/subst.md"
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
(TARGET_EVEX512))))
            return -1;
          return 7045; /* avx512f_getexpv16sf_round */

        case E_V8SFmode:
          if (pattern1226 (x2, 
E_V8SFmode) != 0
              || !(
#line 286 "../../gcc/config/i386/subst.md"
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
(TARGET_AVX512VL))))
            return -1;
          return 7049; /* avx512vl_getexpv8sf_round */

        case E_V8DFmode:
          if (pattern1226 (x2, 
E_V8DFmode) != 0
              || !(
#line 286 "../../gcc/config/i386/subst.md"
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
(TARGET_EVEX512))))
            return -1;
          return 7055; /* avx512f_getexpv8df_round */

        case E_V4DFmode:
          if (pattern1226 (x2, 
E_V4DFmode) != 0
              || !(
#line 286 "../../gcc/config/i386/subst.md"
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
(TARGET_AVX512VL))))
            return -1;
          return 7059; /* avx512vl_getexpv4df_round */

        default:
          return -1;
        }

    case 149:
      if (!const48_operand (operands[2], E_SImode))
        return -1;
      switch (GET_MODE (operands[0]))
        {
        case E_V8SFmode:
          if (pattern1020 (x2, 
E_V8HImode, 
E_V8SFmode) != 0
              || !(
#line 286 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 29096 "../../gcc/config/i386/sse.md"
((TARGET_F16C || TARGET_AVX512VL)
   && (!true || TARGET_AVX10_2_256))))
            return -1;
          return 9648; /* vcvtph2ps256_round */

        case E_V16SFmode:
          if (pattern1020 (x2, 
E_V16HImode, 
E_V16SFmode) != 0
              || !(
#line 286 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 29109 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 9652; /* *avx512f_vcvtph2ps512_round */

        default:
          return -1;
        }

    case 266:
      if (!const_4_or_8_to_11_operand (operands[2], E_SImode))
        return -1;
      switch (GET_MODE (operands[0]))
        {
        case E_V32HImode:
          if (pattern1020 (x2, 
E_V32HFmode, 
E_V32HImode) != 0
              || !(
#line 234 "../../gcc/config/i386/subst.md"
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
(TARGET_AVX10_2_512))))
            return -1;
          return 10754; /* avx10_2_cvtph2ibsv32hf_round */

        case E_V16HImode:
          if (pattern1020 (x2, 
E_V16HFmode, 
E_V16HImode) != 0
              || !(
#line 234 "../../gcc/config/i386/subst.md"
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
								       || V16HFmode == V16HFmode))))))
            return -1;
          return 10762; /* avx10_2_cvtph2ibsv16hf_round */

        default:
          return -1;
        }

    case 267:
      if (!const_4_or_8_to_11_operand (operands[2], E_SImode))
        return -1;
      switch (GET_MODE (operands[0]))
        {
        case E_V32HImode:
          if (pattern1020 (x2, 
E_V32HFmode, 
E_V32HImode) != 0
              || !(
#line 234 "../../gcc/config/i386/subst.md"
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
(TARGET_AVX10_2_512))))
            return -1;
          return 10758; /* avx10_2_cvtph2iubsv32hf_round */

        case E_V16HImode:
          if (pattern1020 (x2, 
E_V16HFmode, 
E_V16HImode) != 0
              || !(
#line 234 "../../gcc/config/i386/subst.md"
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
								       || V16HFmode == V16HFmode))))))
            return -1;
          return 10766; /* avx10_2_cvtph2iubsv16hf_round */

        default:
          return -1;
        }

    case 272:
      if (!const48_operand (operands[2], E_SImode))
        return -1;
      switch (GET_MODE (operands[0]))
        {
        case E_V32HImode:
          if (pattern1020 (x2, 
E_V32HFmode, 
E_V32HImode) != 0
              || !(
#line 286 "../../gcc/config/i386/subst.md"
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
(TARGET_AVX10_2_512))))
            return -1;
          return 10774; /* avx10_2_cvttph2ibsv32hf_round */

        case E_V16HImode:
          if (pattern1020 (x2, 
E_V16HFmode, 
E_V16HImode) != 0
              || !(
#line 286 "../../gcc/config/i386/subst.md"
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
										       || V16HFmode == V16HFmode))))))
            return -1;
          return 10782; /* avx10_2_cvttph2ibsv16hf_round */

        default:
          return -1;
        }

    case 273:
      if (!const48_operand (operands[2], E_SImode))
        return -1;
      switch (GET_MODE (operands[0]))
        {
        case E_V32HImode:
          if (pattern1020 (x2, 
E_V32HFmode, 
E_V32HImode) != 0
              || !(
#line 286 "../../gcc/config/i386/subst.md"
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
(TARGET_AVX10_2_512))))
            return -1;
          return 10778; /* avx10_2_cvttph2iubsv32hf_round */

        case E_V16HImode:
          if (pattern1020 (x2, 
E_V16HFmode, 
E_V16HImode) != 0
              || !(
#line 286 "../../gcc/config/i386/subst.md"
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
										       || V16HFmode == V16HFmode))))))
            return -1;
          return 10786; /* avx10_2_cvttph2iubsv16hf_round */

        default:
          return -1;
        }

    case 268:
      if (!const_4_or_8_to_11_operand (operands[2], E_SImode))
        return -1;
      switch (GET_MODE (operands[0]))
        {
        case E_V16SImode:
          if (pattern1020 (x2, 
E_V16SFmode, 
E_V16SImode) != 0
              || !(
#line 234 "../../gcc/config/i386/subst.md"
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
(TARGET_AVX10_2_512))))
            return -1;
          return 10794; /* avx10_2_cvtps2ibsv16sf_round */

        case E_V8SImode:
          if (pattern1020 (x2, 
E_V8SFmode, 
E_V8SImode) != 0
              || !(
#line 234 "../../gcc/config/i386/subst.md"
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
								       || V8SFmode == V16HFmode))))))
            return -1;
          return 10802; /* avx10_2_cvtps2ibsv8sf_round */

        default:
          return -1;
        }

    case 269:
      if (!const_4_or_8_to_11_operand (operands[2], E_SImode))
        return -1;
      switch (GET_MODE (operands[0]))
        {
        case E_V16SImode:
          if (pattern1020 (x2, 
E_V16SFmode, 
E_V16SImode) != 0
              || !(
#line 234 "../../gcc/config/i386/subst.md"
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
(TARGET_AVX10_2_512))))
            return -1;
          return 10798; /* avx10_2_cvtps2iubsv16sf_round */

        case E_V8SImode:
          if (pattern1020 (x2, 
E_V8SFmode, 
E_V8SImode) != 0
              || !(
#line 234 "../../gcc/config/i386/subst.md"
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
								       || V8SFmode == V16HFmode))))))
            return -1;
          return 10806; /* avx10_2_cvtps2iubsv8sf_round */

        default:
          return -1;
        }

    case 274:
      if (!const48_operand (operands[2], E_SImode))
        return -1;
      switch (GET_MODE (operands[0]))
        {
        case E_V16SImode:
          if (pattern1020 (x2, 
E_V16SFmode, 
E_V16SImode) != 0
              || !(
#line 286 "../../gcc/config/i386/subst.md"
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
(TARGET_AVX10_2_512))))
            return -1;
          return 10814; /* avx10_2_cvttps2ibsv16sf_round */

        case E_V8SImode:
          if (pattern1020 (x2, 
E_V8SFmode, 
E_V8SImode) != 0
              || !(
#line 286 "../../gcc/config/i386/subst.md"
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
										       || V8SFmode == V16HFmode))))))
            return -1;
          return 10822; /* avx10_2_cvttps2ibsv8sf_round */

        default:
          return -1;
        }

    case 275:
      if (!const48_operand (operands[2], E_SImode))
        return -1;
      switch (GET_MODE (operands[0]))
        {
        case E_V16SImode:
          if (pattern1020 (x2, 
E_V16SFmode, 
E_V16SImode) != 0
              || !(
#line 286 "../../gcc/config/i386/subst.md"
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
(TARGET_AVX10_2_512))))
            return -1;
          return 10818; /* avx10_2_cvttps2iubsv16sf_round */

        case E_V8SImode:
          if (pattern1020 (x2, 
E_V8SFmode, 
E_V8SImode) != 0
              || !(
#line 286 "../../gcc/config/i386/subst.md"
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
										       || V8SFmode == V16HFmode))))))
            return -1;
          return 10826; /* avx10_2_cvttps2iubsv8sf_round */

        default:
          return -1;
        }

    case 276:
      switch (pattern1021 (x2))
        {
        case 0:
          if (!(
#line 286 "../../gcc/config/i386/subst.md"
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
(TARGET_AVX10_2_512))))
            return -1;
          return 10834; /* avx10_2_vcvttps2dqsv16sf_round */

        case 1:
          if (!(
#line 286 "../../gcc/config/i386/subst.md"
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
										       || V8SFmode == V16HFmode))))))
            return -1;
          return 10842; /* avx10_2_vcvttps2dqsv8sf_round */

        case 2:
          if (!(
#line 286 "../../gcc/config/i386/subst.md"
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
(TARGET_AVX10_2_512))))
            return -1;
          return 10854; /* avx10_2_vcvttpd2dqsv8df_round */

        case 3:
          if (!(
#line 286 "../../gcc/config/i386/subst.md"
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
										       || V4DFmode == V16HFmode))))))
            return -1;
          return 10862; /* avx10_2_vcvttpd2dqsv4df_round */

        case 4:
          if (!(
#line 286 "../../gcc/config/i386/subst.md"
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
(TARGET_AVX10_2_512))))
            return -1;
          return 10874; /* avx10_2_vcvttpd2qqsv8df_round */

        case 5:
          if (!(
#line 286 "../../gcc/config/i386/subst.md"
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
(TARGET_AVX10_2_512))))
            return -1;
          return 10894; /* avx10_2_vcvttps2qqsv8di_round */

        case 6:
          if (!(
#line 286 "../../gcc/config/i386/subst.md"
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
										       || V4DFmode == V16HFmode))))))
            return -1;
          return 10882; /* avx10_2_vcvttpd2qqsv4df_round */

        case 7:
          if (!(
#line 286 "../../gcc/config/i386/subst.md"
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
										       || V4DImode == V16HFmode))))))
            return -1;
          return 10902; /* avx10_2_vcvttps2qqsv4di_round */

        default:
          return -1;
        }

    case 277:
      switch (pattern1021 (x2))
        {
        case 0:
          if (!(
#line 286 "../../gcc/config/i386/subst.md"
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
(TARGET_AVX10_2_512))))
            return -1;
          return 10838; /* avx10_2_vcvttps2udqsv16sf_round */

        case 1:
          if (!(
#line 286 "../../gcc/config/i386/subst.md"
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
										       || V8SFmode == V16HFmode))))))
            return -1;
          return 10846; /* avx10_2_vcvttps2udqsv8sf_round */

        case 2:
          if (!(
#line 286 "../../gcc/config/i386/subst.md"
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
(TARGET_AVX10_2_512))))
            return -1;
          return 10858; /* avx10_2_vcvttpd2udqsv8df_round */

        case 3:
          if (!(
#line 286 "../../gcc/config/i386/subst.md"
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
										       || V4DFmode == V16HFmode))))))
            return -1;
          return 10866; /* avx10_2_vcvttpd2udqsv4df_round */

        case 4:
          if (!(
#line 286 "../../gcc/config/i386/subst.md"
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
(TARGET_AVX10_2_512))))
            return -1;
          return 10878; /* avx10_2_vcvttpd2uqqsv8df_round */

        case 5:
          if (!(
#line 286 "../../gcc/config/i386/subst.md"
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
(TARGET_AVX10_2_512))))
            return -1;
          return 10898; /* avx10_2_vcvttps2uqqsv8di_round */

        case 6:
          if (!(
#line 286 "../../gcc/config/i386/subst.md"
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
										       || V4DFmode == V16HFmode))))))
            return -1;
          return 10886; /* avx10_2_vcvttpd2uqqsv4df_round */

        case 7:
          if (!(
#line 286 "../../gcc/config/i386/subst.md"
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
										       || V4DImode == V16HFmode))))))
            return -1;
          return 10906; /* avx10_2_vcvttps2uqqsv4di_round */

        default:
          return -1;
        }

    default:
      return -1;
    }
}

 int
recog_271 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  switch (XVECLEN (x3, 0))
    {
    case 1:
      x4 = XVECEXP (x3, 0, 0);
      operands[1] = x4;
      switch (XINT (x3, 1))
        {
        case 46:
          if (GET_MODE (x3) == E_V4SImode
              && pattern794 (x2, 
E_V4SImode, 
E_V4DFmode, 
E_V8SImode) == 0
              && 
#line 9430 "../../gcc/config/i386/sse.md"
(TARGET_AVX))
            return 5006; /* *avx_cvtpd2dq256_2 */
          if (GET_MODE (x3) != E_V2SImode)
            return -1;
          x5 = XEXP (x2, 1);
          if (GET_CODE (x5) != CONST_VECTOR
              || pattern510 (x5, 
E_V2SImode, 
2) != 0
              || !register_operand (operands[0], E_V4SImode)
              || GET_MODE (x2) != E_V4SImode
              || !vector_operand (operands[1], E_V2DFmode)
              || !
#line 9443 "../../gcc/config/i386/sse.md"
(TARGET_SSE2))
            return -1;
          return 5007; /* sse2_cvtpd2dq */

        case 156:
          if (pattern669 (x2) != 0
              || !
#line 9513 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))
            return -1;
          return 5018; /* fixuns_notruncv2dfv2si2 */

        case 173:
          if (pattern669 (x2) != 0
              || !
#line 9580 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))
            return -1;
          return 5037; /* *unspec_fixuns_truncv2dfv2si2 */

        case 253:
          if (GET_MODE (x3) != E_V8QImode
              || pattern794 (x2, 
E_V8QImode, 
E_V8HFmode, 
E_V16QImode) != 0
              || !
#line 31854 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
            return -1;
          return 10491; /* *vcvtneph2bf8v8hf */

        case 254:
          if (GET_MODE (x3) != E_V8QImode
              || pattern794 (x2, 
E_V8QImode, 
E_V8HFmode, 
E_V16QImode) != 0
              || !
#line 31854 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
            return -1;
          return 10492; /* *vcvtneph2bf8sv8hf */

        case 255:
          if (GET_MODE (x3) != E_V8QImode
              || pattern794 (x2, 
E_V8QImode, 
E_V8HFmode, 
E_V16QImode) != 0
              || !
#line 31854 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
            return -1;
          return 10493; /* *vcvtneph2hf8v8hf */

        case 256:
          if (GET_MODE (x3) != E_V8QImode
              || pattern794 (x2, 
E_V8QImode, 
E_V8HFmode, 
E_V16QImode) != 0
              || !
#line 31854 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
            return -1;
          return 10494; /* *vcvtneph2hf8sv8hf */

        default:
          return -1;
        }

    case 2:
      x4 = XVECEXP (x3, 0, 0);
      operands[1] = x4;
      x6 = XVECEXP (x3, 0, 1);
      operands[2] = x6;
      x5 = XEXP (x2, 1);
      operands[3] = x5;
      switch (XINT (x3, 1))
        {
        case 150:
          if (GET_MODE (x3) != E_V4HImode
              || !register_operand (operands[0], E_V8HImode)
              || GET_MODE (x2) != E_V8HImode
              || !register_operand (operands[1], E_V4SFmode)
              || !const_0_to_255_operand (operands[2], E_SImode)
              || !const0_operand (operands[3], E_V4HImode)
              || !
#line 29145 "../../gcc/config/i386/sse.md"
((TARGET_F16C || TARGET_AVX512VL) && 1))
            return -1;
          return 9655; /* *vcvtps2ph */

        case 245:
          if (pattern922 (x2) != 0
              || !
#line 31764 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
            return -1;
          return 10467; /* *vcvtbiasph2bf8v8hf */

        case 246:
          if (pattern922 (x2) != 0
              || !
#line 31764 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
            return -1;
          return 10468; /* *vcvtbiasph2bf8sv8hf */

        case 247:
          if (pattern922 (x2) != 0
              || !
#line 31764 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
            return -1;
          return 10469; /* *vcvtbiasph2hf8v8hf */

        case 248:
          if (pattern922 (x2) != 0
              || !
#line 31764 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
            return -1;
          return 10470; /* *vcvtbiasph2hf8sv8hf */

        default:
          return -1;
        }

    default:
      return -1;
    }
}

 int
recog_274 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  x4 = XVECEXP (x3, 0, 2);
  if (GET_CODE (x4) != CONST_INT)
    return -1;
  x5 = XVECEXP (x3, 0, 3);
  if (GET_CODE (x5) != CONST_INT)
    return -1;
  x6 = XVECEXP (x3, 0, 0);
  switch (XWINT (x6, 0))
    {
    case 6L:
      x7 = XVECEXP (x3, 0, 1);
      if (XWINT (x7, 0) != 7L
          || XWINT (x4, 0) != 2L
          || XWINT (x5, 0) != 3L
          || pattern1558 (x2) != 0
          || !
#line 11060 "../../gcc/config/i386/sse.md"
(TARGET_SSE && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
        return -1;
      return 5239; /* sse_movhlps */

    case 0L:
      x7 = XVECEXP (x3, 0, 1);
      switch (XWINT (x7, 0))
        {
        case 1L:
          if (XWINT (x4, 0) != 4L
              || XWINT (x5, 0) != 5L
              || pattern1558 (x2) != 0
              || !
#line 11105 "../../gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (UNKNOWN, V4SFmode, operands)))
            return -1;
          return 5240; /* sse_movlhps */

        case 4L:
          switch (XWINT (x4, 0))
            {
            case 1L:
              if (XWINT (x5, 0) != 5L
                  || pattern1316 (x2, 
E_V4SFmode, 
E_V8SFmode) != 0
                  || !
#line 11322 "../../gcc/config/i386/sse.md"
(TARGET_SSE))
                return -1;
              return 5255; /* vec_interleave_lowv4sf */

            case 2L:
              if (XWINT (x5, 0) != 6L)
                return -1;
              switch (GET_MODE (operands[0]))
                {
                case E_V4DFmode:
                  if (!register_operand (operands[0], E_V4DFmode)
                      || GET_MODE (x2) != E_V4DFmode)
                    return -1;
                  x8 = XEXP (x2, 0);
                  if (GET_MODE (x8) != E_V8DFmode)
                    return -1;
                  if (nonimmediate_operand (operands[1], E_V4DFmode))
                    {
                      x9 = XEXP (x8, 1);
                      if (rtx_equal_p (x9, operands[1])
                          && 
#line 13469 "../../gcc/config/i386/sse.md"
(TARGET_AVX && 1))
                        return 5408; /* avx_movddup256 */
                    }
                  if (!register_operand (operands[1], E_V4DFmode))
                    return -1;
                  x9 = XEXP (x8, 1);
                  operands[2] = x9;
                  if (!nonimmediate_operand (operands[2], E_V4DFmode)
                      || !
#line 13483 "../../gcc/config/i386/sse.md"
(TARGET_AVX && 1))
                    return -1;
                  return 5410; /* avx_unpcklpd256 */

                case E_V4DImode:
                  if (pattern1616 (x2, 
E_V4DImode, 
E_V8DImode) != 0
                      || !
#line 14515 "../../gcc/config/i386/sse.md"
(TARGET_AVX2 && 1))
                    return -1;
                  return 7199; /* avx2_interleave_lowv4di */

                default:
                  return -1;
                }

            default:
              return -1;
            }

        case 0L:
          if (XWINT (x4, 0) != 6L
              || XWINT (x5, 0) != 6L
              || pattern1559 (x2) != 0
              || !
#line 11412 "../../gcc/config/i386/sse.md"
(TARGET_SSE3 && 1))
            return -1;
          return 5264; /* sse3_movsldup */

        default:
          return -1;
        }

    case 2L:
      x7 = XVECEXP (x3, 0, 1);
      if (XWINT (x7, 0) != 6L
          || XWINT (x4, 0) != 3L
          || XWINT (x5, 0) != 7L
          || pattern1316 (x2, 
E_V4SFmode, 
E_V8SFmode) != 0
          || !
#line 11217 "../../gcc/config/i386/sse.md"
(TARGET_SSE && 1))
        return -1;
      return 5248; /* vec_interleave_highv4sf */

    case 1L:
      if (XWINT (x5, 0) != 7L)
        return -1;
      x7 = XVECEXP (x3, 0, 1);
      switch (XWINT (x7, 0))
        {
        case 1L:
          if (XWINT (x4, 0) != 7L
              || pattern1559 (x2) != 0
              || !
#line 11359 "../../gcc/config/i386/sse.md"
(TARGET_SSE3 && 1))
            return -1;
          return 5258; /* sse3_movshdup */

        case 5L:
          if (XWINT (x4, 0) != 3L)
            return -1;
          x8 = XEXP (x2, 0);
          x9 = XEXP (x8, 1);
          operands[2] = x9;
          switch (GET_MODE (operands[0]))
            {
            case E_V4DFmode:
              if (pattern1414 (x2, 
E_V4DFmode, 
E_V8DFmode) != 0
                  || !
#line 13339 "../../gcc/config/i386/sse.md"
(TARGET_AVX && 1))
                return -1;
              return 5400; /* avx_unpckhpd256 */

            case E_V4DImode:
              if (pattern1414 (x2, 
E_V4DImode, 
E_V8DImode) != 0
                  || !
#line 14465 "../../gcc/config/i386/sse.md"
(TARGET_AVX2 && 1))
                return -1;
              return 7193; /* avx2_interleave_highv4di */

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
recog_275 (rtx x1 ATTRIBUTE_UNUSED,
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
  x6 = XVECEXP (x5, 0, 1);
  operands[4] = x6;
  x7 = XVECEXP (x5, 0, 2);
  operands[5] = x7;
  x8 = XVECEXP (x5, 0, 3);
  operands[6] = x8;
  switch (GET_MODE (operands[0]))
    {
    case E_V4SImode:
      if (pattern1522 (x2, 
E_V4SImode, 
E_V8SImode) != 0
          || !
#line 11556 "../../gcc/config/i386/sse.md"
(TARGET_SSE))
        return -1;
      return 5271; /* sse_shufps_v4si */

    case E_V4SFmode:
      if (pattern1522 (x2, 
E_V4SFmode, 
E_V8SFmode) != 0
          || !
#line 11556 "../../gcc/config/i386/sse.md"
(TARGET_SSE))
        return -1;
      return 5272; /* sse_shufps_v4sf */

    case E_V4DFmode:
      if (pattern1414 (x2, 
E_V4DFmode, 
E_V8DFmode) != 0)
        return -1;
      if (const_0_to_1_operand (operands[3], E_VOIDmode)
          && const_4_to_5_operand (operands[4], E_VOIDmode)
          && const_2_to_3_operand (operands[5], E_VOIDmode)
          && const_6_to_7_operand (operands[6], E_VOIDmode)
          && 
#line 14398 "../../gcc/config/i386/sse.md"
(TARGET_AVX && 1))
        return 7190; /* avx_shufpd256_1 */
      if (!const_0_to_3_operand (operands[3], E_VOIDmode)
          || !const_0_to_3_operand (operands[4], E_VOIDmode)
          || !const_4_to_7_operand (operands[5], E_VOIDmode)
          || !const_4_to_7_operand (operands[6], E_VOIDmode)
          || !
#line 20179 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL
   && (INTVAL (operands[3]) & 1) == 0
   && INTVAL (operands[3]) == INTVAL (operands[4]) - 1
   && (INTVAL (operands[5]) & 1) == 0
   && INTVAL (operands[5]) == INTVAL (operands[6]) - 1))
        return -1;
      return 8412; /* *avx512dq_shuf_f64x2_1 */

    case E_V4DImode:
      if (pattern1414 (x2, 
E_V4DImode, 
E_V8DImode) != 0
          || pattern1521 () != 0
          || !
#line 20179 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL
   && (INTVAL (operands[3]) & 1) == 0
   && INTVAL (operands[3]) == INTVAL (operands[4]) - 1
   && (INTVAL (operands[5]) & 1) == 0
   && INTVAL (operands[5]) == INTVAL (operands[6]) - 1))
        return -1;
      return 8410; /* *avx512dq_shuf_i64x2_1 */

    default:
      return -1;
    }
}

 int
recog_277 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12, x13;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  if (pattern930 (x3) != 0)
    return -1;
  x4 = XVECEXP (x3, 0, 0);
  switch (XWINT (x4, 0))
    {
    case 0L:
      x5 = XVECEXP (x3, 0, 1);
      switch (XWINT (x5, 0))
        {
        case 1L:
          x6 = XVECEXP (x3, 0, 2);
          if (XWINT (x6, 0) != 2L)
            return -1;
          x7 = XVECEXP (x3, 0, 3);
          if (XWINT (x7, 0) != 3L)
            return -1;
          x8 = XVECEXP (x3, 0, 4);
          if (XWINT (x8, 0) != 8L)
            return -1;
          x9 = XVECEXP (x3, 0, 5);
          if (XWINT (x9, 0) != 9L)
            return -1;
          x10 = XVECEXP (x3, 0, 6);
          if (XWINT (x10, 0) != 10L)
            return -1;
          x11 = XVECEXP (x3, 0, 7);
          if (XWINT (x11, 0) != 11L)
            return -1;
          x12 = XEXP (x2, 0);
          x13 = XEXP (x12, 1);
          operands[2] = x13;
          switch (GET_MODE (operands[0]))
            {
            case E_V8HImode:
              if (pattern1488 (x2, 
E_V8HImode, 
E_V16HImode) != 0
                  || !
#line 11127 "../../gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (UNKNOWN, V8HImode, operands)))
                return -1;
              return 5241; /* sse_movlhps_v8hi */

            case E_V8HFmode:
              if (pattern1488 (x2, 
E_V8HFmode, 
E_V16HFmode) != 0
                  || !
#line 11127 "../../gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (UNKNOWN, V8HFmode, operands)))
                return -1;
              return 5242; /* sse_movlhps_v8hf */

            case E_V8BFmode:
              if (pattern1488 (x2, 
E_V8BFmode, 
E_V16BFmode) != 0
                  || !
#line 11127 "../../gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (UNKNOWN, V8BFmode, operands)))
                return -1;
              return 5243; /* sse_movlhps_v8bf */

            default:
              return -1;
            }

        case 8L:
          x6 = XVECEXP (x3, 0, 2);
          switch (XWINT (x6, 0))
            {
            case 1L:
              x7 = XVECEXP (x3, 0, 3);
              if (XWINT (x7, 0) != 9L)
                return -1;
              x12 = XEXP (x2, 0);
              x13 = XEXP (x12, 1);
              operands[2] = x13;
              x8 = XVECEXP (x3, 0, 4);
              switch (XWINT (x8, 0))
                {
                case 4L:
                  x9 = XVECEXP (x3, 0, 5);
                  if (XWINT (x9, 0) != 12L)
                    return -1;
                  x10 = XVECEXP (x3, 0, 6);
                  if (XWINT (x10, 0) != 5L)
                    return -1;
                  x11 = XVECEXP (x3, 0, 7);
                  if (XWINT (x11, 0) != 13L)
                    return -1;
                  switch (GET_MODE (operands[0]))
                    {
                    case E_V8SFmode:
                      if (pattern1414 (x2, 
E_V8SFmode, 
E_V16SFmode) != 0
                          || !
#line 11257 "../../gcc/config/i386/sse.md"
(TARGET_AVX && 1))
                        return -1;
                      return 5252; /* avx_unpcklps256 */

                    case E_V8SImode:
                      if (pattern1414 (x2, 
E_V8SImode, 
E_V16SImode) != 0
                          || !
#line 19779 "../../gcc/config/i386/sse.md"
(TARGET_AVX2 && 1))
                        return -1;
                      return 8370; /* avx2_interleave_lowv8si */

                    default:
                      return -1;
                    }

                case 2L:
                  x9 = XVECEXP (x3, 0, 5);
                  if (XWINT (x9, 0) != 10L)
                    return -1;
                  x10 = XVECEXP (x3, 0, 6);
                  if (XWINT (x10, 0) != 3L)
                    return -1;
                  x11 = XVECEXP (x3, 0, 7);
                  if (XWINT (x11, 0) != 11L)
                    return -1;
                  switch (GET_MODE (operands[0]))
                    {
                    case E_V8HImode:
                      if (pattern1489 (x2, 
E_V8HImode, 
E_V16HImode) != 0
                          || !
#line 19704 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && 1 && 1))
                        return -1;
                      return 8358; /* vec_interleave_lowv8hi */

                    case E_V8HFmode:
                      if (pattern1489 (x2, 
E_V8HFmode, 
E_V16HFmode) != 0
                          || !
#line 19704 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && 1 && 1))
                        return -1;
                      return 8360; /* vec_interleave_lowv8hf */

                    case E_V8BFmode:
                      if (pattern1489 (x2, 
E_V8BFmode, 
E_V16BFmode) != 0
                          || !
#line 19704 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && 1 && 1))
                        return -1;
                      return 8362; /* vec_interleave_lowv8bf */

                    default:
                      return -1;
                    }

                default:
                  return -1;
                }

            case 2L:
              x7 = XVECEXP (x3, 0, 3);
              if (XWINT (x7, 0) != 10L)
                return -1;
              x8 = XVECEXP (x3, 0, 4);
              if (XWINT (x8, 0) != 4L)
                return -1;
              x9 = XVECEXP (x3, 0, 5);
              if (XWINT (x9, 0) != 12L)
                return -1;
              x10 = XVECEXP (x3, 0, 6);
              if (XWINT (x10, 0) != 6L)
                return -1;
              x11 = XVECEXP (x3, 0, 7);
              if (XWINT (x11, 0) != 14L)
                return -1;
              switch (GET_MODE (operands[0]))
                {
                case E_V8DFmode:
                  if (!register_operand (operands[0], E_V8DFmode)
                      || GET_MODE (x2) != E_V8DFmode)
                    return -1;
                  x12 = XEXP (x2, 0);
                  if (GET_MODE (x12) != E_V16DFmode)
                    return -1;
                  if (nonimmediate_operand (operands[1], E_V8DFmode))
                    {
                      x13 = XEXP (x12, 1);
                      if (rtx_equal_p (x13, operands[1])
                          && 
#line 13438 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512))
                        return 5404; /* avx512f_movddup512 */
                    }
                  if (!register_operand (operands[1], E_V8DFmode))
                    return -1;
                  x13 = XEXP (x12, 1);
                  operands[2] = x13;
                  if (!nonimmediate_operand (operands[2], E_V8DFmode)
                      || !
#line 13454 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512))
                    return -1;
                  return 5406; /* avx512f_unpcklpd512 */

                case E_V8DImode:
                  if (pattern1616 (x2, 
E_V8DImode, 
E_V16DImode) != 0
                      || !
#line 14531 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512))
                    return -1;
                  return 7201; /* *avx512f_interleave_lowv8di */

                default:
                  return -1;
                }

            default:
              return -1;
            }

        case 0L:
          if (pattern1656 (x3) != 0
              || pattern1785 (x2, 
E_V8SFmode, 
E_V16SFmode) != 0
              || !
#line 11396 "../../gcc/config/i386/sse.md"
(TARGET_AVX && 1))
            return -1;
          return 5262; /* avx_movsldup256 */

        default:
          return -1;
        }

    case 2L:
      x5 = XVECEXP (x3, 0, 1);
      if (XWINT (x5, 0) != 10L)
        return -1;
      x6 = XVECEXP (x3, 0, 2);
      if (XWINT (x6, 0) != 3L)
        return -1;
      x7 = XVECEXP (x3, 0, 3);
      if (XWINT (x7, 0) != 11L
          || pattern1704 (x2) != 0)
        return -1;
      switch (GET_MODE (operands[0]))
        {
        case E_V8SFmode:
          if (pattern1414 (x2, 
E_V8SFmode, 
E_V16SFmode) != 0
              || !
#line 11169 "../../gcc/config/i386/sse.md"
(TARGET_AVX && 1))
            return -1;
          return 5246; /* avx_unpckhps256 */

        case E_V8SImode:
          if (pattern1414 (x2, 
E_V8SImode, 
E_V16SImode) != 0
              || !
#line 19724 "../../gcc/config/i386/sse.md"
(TARGET_AVX2 && 1))
            return -1;
          return 8364; /* avx2_interleave_highv8si */

        default:
          return -1;
        }

    case 1L:
      x6 = XVECEXP (x3, 0, 2);
      if (XWINT (x6, 0) != 3L)
        return -1;
      x8 = XVECEXP (x3, 0, 4);
      if (XWINT (x8, 0) != 5L)
        return -1;
      x10 = XVECEXP (x3, 0, 6);
      if (XWINT (x10, 0) != 7L)
        return -1;
      x5 = XVECEXP (x3, 0, 1);
      switch (XWINT (x5, 0))
        {
        case 1L:
          x7 = XVECEXP (x3, 0, 3);
          if (XWINT (x7, 0) != 3L)
            return -1;
          x9 = XVECEXP (x3, 0, 5);
          if (XWINT (x9, 0) != 5L)
            return -1;
          x11 = XVECEXP (x3, 0, 7);
          if (XWINT (x11, 0) != 7L
              || pattern1785 (x2, 
E_V8SFmode, 
E_V16SFmode) != 0
              || !
#line 11343 "../../gcc/config/i386/sse.md"
(TARGET_AVX && 1))
            return -1;
          return 5256; /* avx_movshdup256 */

        case 9L:
          x7 = XVECEXP (x3, 0, 3);
          if (XWINT (x7, 0) != 11L)
            return -1;
          x9 = XVECEXP (x3, 0, 5);
          if (XWINT (x9, 0) != 13L)
            return -1;
          x11 = XVECEXP (x3, 0, 7);
          if (XWINT (x11, 0) != 15L)
            return -1;
          x12 = XEXP (x2, 0);
          x13 = XEXP (x12, 1);
          operands[2] = x13;
          switch (GET_MODE (operands[0]))
            {
            case E_V8DFmode:
              if (pattern1414 (x2, 
E_V8DFmode, 
E_V16DFmode) != 0
                  || !
#line 13324 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512))
                return -1;
              return 5398; /* *avx512f_unpckhpd512 */

            case E_V8DImode:
              if (pattern1414 (x2, 
E_V8DImode, 
E_V16DImode) != 0
                  || !
#line 14481 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512))
                return -1;
              return 7195; /* *avx512f_interleave_highv8di */

            default:
              return -1;
            }

        default:
          return -1;
        }

    case 4L:
      x5 = XVECEXP (x3, 0, 1);
      if (XWINT (x5, 0) != 12L)
        return -1;
      x6 = XVECEXP (x3, 0, 2);
      if (XWINT (x6, 0) != 5L)
        return -1;
      x7 = XVECEXP (x3, 0, 3);
      if (XWINT (x7, 0) != 13L
          || pattern1704 (x2) != 0)
        return -1;
      switch (GET_MODE (operands[0]))
        {
        case E_V8HImode:
          if (pattern1489 (x2, 
E_V8HImode, 
E_V16HImode) != 0
              || !
#line 19636 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && 1 && 1))
            return -1;
          return 8340; /* vec_interleave_highv8hi */

        case E_V8HFmode:
          if (pattern1489 (x2, 
E_V8HFmode, 
E_V16HFmode) != 0
              || !
#line 19636 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && 1 && 1))
            return -1;
          return 8342; /* vec_interleave_highv8hf */

        case E_V8BFmode:
          if (pattern1489 (x2, 
E_V8BFmode, 
E_V16BFmode) != 0
              || !
#line 19636 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && 1 && 1))
            return -1;
          return 8344; /* vec_interleave_highv8bf */

        default:
          return -1;
        }

    default:
      return -1;
    }
}

 int
recog_286 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  x4 = XVECEXP (x3, 0, 1);
  operands[3] = x4;
  x5 = XVECEXP (x3, 0, 2);
  operands[4] = x5;
  x6 = XVECEXP (x3, 0, 3);
  operands[5] = x6;
  switch (GET_MODE (operands[0]))
    {
    case E_V4SFmode:
      if (!nonimmediate_operand (operands[0], E_V4SFmode)
          || GET_MODE (x2) != E_V4SFmode
          || pattern1490 (
E_V16SFmode) != 0
          || !(
#line 12521 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F
   && INTVAL (operands[2]) % 4 == 0
   && INTVAL (operands[2]) == INTVAL (operands[3]) - 1
   && INTVAL (operands[3]) == INTVAL (operands[4]) - 1
   && INTVAL (operands[4]) == INTVAL (operands[5]) - 1) && 
#line 722 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 5340; /* *avx512f_vextractf32x4_1 */

    case E_V4SImode:
      if (GET_MODE (x2) != E_V4SImode)
        return -1;
      if (nonimmediate_operand (operands[0], E_V4SImode)
          && pattern1490 (
E_V16SImode) == 0
          && (
#line 12521 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F
   && INTVAL (operands[2]) % 4 == 0
   && INTVAL (operands[2]) == INTVAL (operands[3]) - 1
   && INTVAL (operands[3]) == INTVAL (operands[4]) - 1
   && INTVAL (operands[4]) == INTVAL (operands[5]) - 1) && 
#line 722 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return 5341; /* *avx512f_vextracti32x4_1 */
      if (!register_operand (operands[0], E_V4SImode)
          || !vector_operand (operands[1], E_V4SImode)
          || pattern1523 () != 0
          || !
#line 20690 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && 1))
        return -1;
      return 8438; /* sse2_pshufd_1 */

    case E_V4DImode:
      if (!register_operand (operands[0], E_V4DImode)
          || GET_MODE (x2) != E_V4DImode
          || !nonimmediate_operand (operands[1], E_V4DImode)
          || pattern1523 () != 0
          || !
#line 27551 "../../gcc/config/i386/sse.md"
(TARGET_AVX2 && 1))
        return -1;
      return 9166; /* avx2_permv4di_1 */

    default:
      return -1;
    }
}

 int
recog_290 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  x4 = XVECEXP (x3, 0, 4);
  if (GET_CODE (x4) != CONST_INT)
    return -1;
  operands[6] = x4;
  res = recog_289 (x1, insn, pnum_clobbers);
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
      || !register_operand (operands[0], E_V8HImode)
      || GET_MODE (x2) != E_V8HImode
      || !vector_operand (operands[1], E_V8HImode)
      || pattern674 (x3) != 0
      || !
#line 20846 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && 1 && 1))
    return -1;
  return 8444; /* sse2_pshuflw_1 */
}

 int
recog_292 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12, x13, x14, x15, x16, x17;
  rtx x18, x19;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  if (pattern931 (x3) != 0)
    return -1;
  x4 = XVECEXP (x3, 0, 0);
  switch (XWINT (x4, 0))
    {
    case 0L:
      if (pattern1764 (x3) != 0)
        return -1;
      switch (pattern1776 (x2))
        {
        case 0:
          if (!(
#line 13025 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && !(MEM_P (operands[0]) && MEM_P (operands[1]))) && 
#line 1033 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return -1;
          return 5374; /* vec_extract_lo_v32hi */

        case 1:
          if (!(
#line 13025 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && !(MEM_P (operands[0]) && MEM_P (operands[1]))) && 
#line 1033 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return -1;
          return 5375; /* vec_extract_lo_v32hf */

        case 2:
          if (!(
#line 13025 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && !(MEM_P (operands[0]) && MEM_P (operands[1]))) && 
#line 1033 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return -1;
          return 5376; /* vec_extract_lo_v32bf */

        case 3:
          if (!
#line 13195 "../../gcc/config/i386/sse.md"
(TARGET_AVX && !(MEM_P (operands[0]) && MEM_P (operands[1]))))
            return -1;
          return 5388; /* vec_extract_lo_v32qi */

        default:
          return -1;
        }

    case 16L:
      x5 = XVECEXP (x3, 0, 1);
      if (XWINT (x5, 0) != 17L)
        return -1;
      x6 = XVECEXP (x3, 0, 2);
      if (XWINT (x6, 0) != 18L)
        return -1;
      x7 = XVECEXP (x3, 0, 3);
      if (XWINT (x7, 0) != 19L)
        return -1;
      x8 = XVECEXP (x3, 0, 4);
      if (XWINT (x8, 0) != 20L)
        return -1;
      x9 = XVECEXP (x3, 0, 5);
      if (XWINT (x9, 0) != 21L)
        return -1;
      x10 = XVECEXP (x3, 0, 6);
      if (XWINT (x10, 0) != 22L)
        return -1;
      x11 = XVECEXP (x3, 0, 7);
      if (XWINT (x11, 0) != 23L)
        return -1;
      x12 = XVECEXP (x3, 0, 8);
      if (XWINT (x12, 0) != 24L)
        return -1;
      x13 = XVECEXP (x3, 0, 9);
      if (XWINT (x13, 0) != 25L)
        return -1;
      x14 = XVECEXP (x3, 0, 10);
      if (XWINT (x14, 0) != 26L)
        return -1;
      x15 = XVECEXP (x3, 0, 11);
      if (XWINT (x15, 0) != 27L)
        return -1;
      x16 = XVECEXP (x3, 0, 12);
      if (XWINT (x16, 0) != 28L)
        return -1;
      x17 = XVECEXP (x3, 0, 13);
      if (XWINT (x17, 0) != 29L)
        return -1;
      x18 = XVECEXP (x3, 0, 14);
      if (XWINT (x18, 0) != 30L)
        return -1;
      x19 = XVECEXP (x3, 0, 15);
      if (XWINT (x19, 0) != 31L)
        return -1;
      switch (GET_MODE (operands[0]))
        {
        case E_V16HImode:
          if (!nonimmediate_operand (operands[0], E_V16HImode)
              || GET_MODE (x2) != E_V16HImode
              || !register_operand (operands[1], E_V32HImode)
              || !(
#line 13066 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 1033 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return -1;
          return 5377; /* vec_extract_hi_v32hi */

        case E_V16HFmode:
          if (!nonimmediate_operand (operands[0], E_V16HFmode)
              || GET_MODE (x2) != E_V16HFmode
              || !register_operand (operands[1], E_V32HFmode)
              || !(
#line 13066 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 1033 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return -1;
          return 5378; /* vec_extract_hi_v32hf */

        case E_V16BFmode:
          if (!nonimmediate_operand (operands[0], E_V16BFmode)
              || GET_MODE (x2) != E_V16BFmode
              || !register_operand (operands[1], E_V32BFmode)
              || !(
#line 13066 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 1033 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return -1;
          return 5379; /* vec_extract_hi_v32bf */

        case E_V16QImode:
          if (!nonimmediate_operand (operands[0], E_V16QImode)
              || GET_MODE (x2) != E_V16QImode
              || !register_operand (operands[1], E_V32QImode)
              || !
#line 13213 "../../gcc/config/i386/sse.md"
(TARGET_AVX))
            return -1;
          return 5389; /* vec_extract_hi_v32qi */

        default:
          return -1;
        }

    default:
      return -1;
    }
}

 int
recog_302 (rtx x1 ATTRIBUTE_UNUSED,
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
          return 5525; /* *avx512bw_vpternlogv64qi_1 */

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
          return 5552; /* *avx512vl_vpternlogv32qi_1 */

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
          return 5579; /* *avx512vl_vpternlogv16qi_1 */

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
          return 5606; /* *avx512bw_vpternlogv32hi_1 */

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
          return 5633; /* *avx512vl_vpternlogv16hi_1 */

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
          return 5660; /* *avx512vl_vpternlogv8hi_1 */

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
          return 5687; /* *avx512f_vpternlogv16si_1 */

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
          return 5714; /* *avx512vl_vpternlogv8si_1 */

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
          return 5741; /* *avx512vl_vpternlogv4si_1 */

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
          return 5768; /* *avx512f_vpternlogv8di_1 */

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
          return 5795; /* *avx512vl_vpternlogv4di_1 */

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
          return 5822; /* *avx512vl_vpternlogv2di_1 */

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
          return 5528; /* *avx512bw_vpternlogv64qi_1 */

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
          return 5555; /* *avx512vl_vpternlogv32qi_1 */

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
          return 5582; /* *avx512vl_vpternlogv16qi_1 */

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
          return 5609; /* *avx512bw_vpternlogv32hi_1 */

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
          return 5636; /* *avx512vl_vpternlogv16hi_1 */

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
          return 5663; /* *avx512vl_vpternlogv8hi_1 */

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
          return 5690; /* *avx512f_vpternlogv16si_1 */

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
          return 5717; /* *avx512vl_vpternlogv8si_1 */

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
          return 5744; /* *avx512vl_vpternlogv4si_1 */

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
          return 5771; /* *avx512f_vpternlogv8di_1 */

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
          return 5798; /* *avx512vl_vpternlogv4di_1 */

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
          return 5825; /* *avx512vl_vpternlogv2di_1 */

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
          return 5531; /* *avx512bw_vpternlogv64qi_1 */

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
          return 5558; /* *avx512vl_vpternlogv32qi_1 */

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
          return 5585; /* *avx512vl_vpternlogv16qi_1 */

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
          return 5612; /* *avx512bw_vpternlogv32hi_1 */

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
          return 5639; /* *avx512vl_vpternlogv16hi_1 */

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
          return 5666; /* *avx512vl_vpternlogv8hi_1 */

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
          return 5693; /* *avx512f_vpternlogv16si_1 */

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
          return 5720; /* *avx512vl_vpternlogv8si_1 */

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
          return 5747; /* *avx512vl_vpternlogv4si_1 */

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
          return 5774; /* *avx512f_vpternlogv8di_1 */

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
          return 5801; /* *avx512vl_vpternlogv4di_1 */

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
          return 5828; /* *avx512vl_vpternlogv2di_1 */

        case 36:
          if (!(
#line 13946 "../../gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 332 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 6815; /* *avx512bw_vpternlogv64qi_3 */

        case 37:
          if (!(
#line 13946 "../../gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 332 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 6824; /* *avx512vl_vpternlogv32qi_3 */

        case 38:
          if (!
#line 13946 "../../gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()))
            return -1;
          return 6833; /* *avx512vl_vpternlogv16qi_3 */

        case 39:
          if (!(
#line 13946 "../../gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 333 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 6842; /* *avx512bw_vpternlogv32hi_3 */

        case 40:
          if (!(
#line 13946 "../../gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 333 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 6851; /* *avx512vl_vpternlogv16hi_3 */

        case 41:
          if (!
#line 13946 "../../gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()))
            return -1;
          return 6860; /* *avx512vl_vpternlogv8hi_3 */

        case 42:
          if (!(
#line 13946 "../../gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 334 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 6869; /* *avx512f_vpternlogv16si_3 */

        case 43:
          if (!(
#line 13946 "../../gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 334 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 6878; /* *avx512vl_vpternlogv8si_3 */

        case 44:
          if (!
#line 13946 "../../gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()))
            return -1;
          return 6887; /* *avx512vl_vpternlogv4si_3 */

        case 45:
          if (!(
#line 13946 "../../gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 335 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 6896; /* *avx512f_vpternlogv8di_3 */

        case 46:
          if (!(
#line 13946 "../../gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 335 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 6905; /* *avx512vl_vpternlogv4di_3 */

        case 47:
          if (!
#line 13946 "../../gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()))
            return -1;
          return 6914; /* *avx512vl_vpternlogv2di_3 */

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
          return 6173; /* *avx512bw_vpternlogv64qi_2 */

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
          return 6200; /* *avx512vl_vpternlogv32qi_2 */

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
          return 6227; /* *avx512vl_vpternlogv16qi_2 */

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
          return 6254; /* *avx512bw_vpternlogv32hi_2 */

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
          return 6281; /* *avx512vl_vpternlogv16hi_2 */

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
          return 6308; /* *avx512vl_vpternlogv8hi_2 */

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
          return 6335; /* *avx512f_vpternlogv16si_2 */

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
          return 6362; /* *avx512vl_vpternlogv8si_2 */

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
          return 6389; /* *avx512vl_vpternlogv4si_2 */

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
          return 6416; /* *avx512f_vpternlogv8di_2 */

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
          return 6443; /* *avx512vl_vpternlogv4di_2 */

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
          return 6470; /* *avx512vl_vpternlogv2di_2 */

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
          return 6176; /* *avx512bw_vpternlogv64qi_2 */

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
          return 6203; /* *avx512vl_vpternlogv32qi_2 */

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
          return 6230; /* *avx512vl_vpternlogv16qi_2 */

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
          return 6257; /* *avx512bw_vpternlogv32hi_2 */

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
          return 6284; /* *avx512vl_vpternlogv16hi_2 */

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
          return 6311; /* *avx512vl_vpternlogv8hi_2 */

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
          return 6338; /* *avx512f_vpternlogv16si_2 */

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
          return 6365; /* *avx512vl_vpternlogv8si_2 */

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
          return 6392; /* *avx512vl_vpternlogv4si_2 */

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
          return 6419; /* *avx512f_vpternlogv8di_2 */

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
          return 6446; /* *avx512vl_vpternlogv4di_2 */

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
          return 6473; /* *avx512vl_vpternlogv2di_2 */

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
          return 6179; /* *avx512bw_vpternlogv64qi_2 */

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
          return 6206; /* *avx512vl_vpternlogv32qi_2 */

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
          return 6233; /* *avx512vl_vpternlogv16qi_2 */

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
          return 6260; /* *avx512bw_vpternlogv32hi_2 */

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
          return 6287; /* *avx512vl_vpternlogv16hi_2 */

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
          return 6314; /* *avx512vl_vpternlogv8hi_2 */

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
          return 6341; /* *avx512f_vpternlogv16si_2 */

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
          return 6368; /* *avx512vl_vpternlogv8si_2 */

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
          return 6395; /* *avx512vl_vpternlogv4si_2 */

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
          return 6422; /* *avx512f_vpternlogv8di_2 */

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
          return 6449; /* *avx512vl_vpternlogv4di_2 */

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
          return 6476; /* *avx512vl_vpternlogv2di_2 */

        default:
          return -1;
        }

    default:
      return -1;
    }
}

 int
recog_312 (rtx x1 ATTRIBUTE_UNUSED,
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
              return 5842; /* *avx512bw_vpternlogv32hf_1 */

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
              return 5869; /* *avx512vl_vpternlogv16hf_1 */

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
              return 5896; /* *avx512fp16_vpternlogv8hf_1 */

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
              return 5923; /* *avx512bw_vpternlogv32bf_1 */

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
              return 5950; /* *avx512vl_vpternlogv16bf_1 */

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
              return 5977; /* *avx512vl_vpternlogv8bf_1 */

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
              return 6004; /* *avx512f_vpternlogv16sf_1 */

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
              return 6031; /* *avx512vl_vpternlogv8sf_1 */

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
              return 6058; /* *avx512vl_vpternlogv4sf_1 */

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
              return 6085; /* *avx512f_vpternlogv8df_1 */

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
              return 6112; /* *avx512vl_vpternlogv4df_1 */

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
              return 6139; /* *avx512vl_vpternlogv2df_1 */

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
              return 5845; /* *avx512bw_vpternlogv32hf_1 */

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
              return 5872; /* *avx512vl_vpternlogv16hf_1 */

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
              return 5899; /* *avx512fp16_vpternlogv8hf_1 */

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
              return 5926; /* *avx512bw_vpternlogv32bf_1 */

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
              return 5953; /* *avx512vl_vpternlogv16bf_1 */

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
              return 5980; /* *avx512vl_vpternlogv8bf_1 */

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
              return 6007; /* *avx512f_vpternlogv16sf_1 */

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
              return 6034; /* *avx512vl_vpternlogv8sf_1 */

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
              return 6061; /* *avx512vl_vpternlogv4sf_1 */

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
              return 6088; /* *avx512f_vpternlogv8df_1 */

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
              return 6115; /* *avx512vl_vpternlogv4df_1 */

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
              return 6142; /* *avx512vl_vpternlogv2df_1 */

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
              return 5848; /* *avx512bw_vpternlogv32hf_1 */

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
              return 5875; /* *avx512vl_vpternlogv16hf_1 */

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
              return 5902; /* *avx512fp16_vpternlogv8hf_1 */

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
              return 5929; /* *avx512bw_vpternlogv32bf_1 */

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
              return 5956; /* *avx512vl_vpternlogv16bf_1 */

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
              return 5983; /* *avx512vl_vpternlogv8bf_1 */

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
              return 6010; /* *avx512f_vpternlogv16sf_1 */

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
              return 6037; /* *avx512vl_vpternlogv8sf_1 */

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
              return 6064; /* *avx512vl_vpternlogv4sf_1 */

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
              return 6091; /* *avx512f_vpternlogv8df_1 */

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
              return 6118; /* *avx512vl_vpternlogv4df_1 */

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
              return 6145; /* *avx512vl_vpternlogv2df_1 */

            case 36:
              if (!(
#line 13946 "../../gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 336 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
                return -1;
              return 6922; /* *avx512bw_vpternlogv32hf_3 */

            case 37:
              if (!(
#line 13946 "../../gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 336 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
                return -1;
              return 6931; /* *avx512vl_vpternlogv16hf_3 */

            case 38:
              if (!
#line 13946 "../../gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()))
                return -1;
              return 6940; /* *avx512fp16_vpternlogv8hf_3 */

            case 39:
              if (!(
#line 13946 "../../gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 337 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
                return -1;
              return 6949; /* *avx512bw_vpternlogv32bf_3 */

            case 40:
              if (!(
#line 13946 "../../gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 337 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
                return -1;
              return 6958; /* *avx512vl_vpternlogv16bf_3 */

            case 41:
              if (!
#line 13946 "../../gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()))
                return -1;
              return 6967; /* *avx512vl_vpternlogv8bf_3 */

            case 42:
              if (!(
#line 13946 "../../gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 338 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
                return -1;
              return 6976; /* *avx512f_vpternlogv16sf_3 */

            case 43:
              if (!(
#line 13946 "../../gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 338 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
                return -1;
              return 6985; /* *avx512vl_vpternlogv8sf_3 */

            case 44:
              if (!
#line 13946 "../../gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()))
                return -1;
              return 6994; /* *avx512vl_vpternlogv4sf_3 */

            case 45:
              if (!(
#line 13946 "../../gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 339 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
                return -1;
              return 7003; /* *avx512f_vpternlogv8df_3 */

            case 46:
              if (!(
#line 13946 "../../gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 339 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
                return -1;
              return 7012; /* *avx512vl_vpternlogv4df_3 */

            case 47:
              if (!(
#line 13946 "../../gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 339 "../../gcc/config/i386/sse.md"
(TARGET_SSE2)))
                return -1;
              return 7021; /* *avx512vl_vpternlogv2df_3 */

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
              return 6490; /* *avx512bw_vpternlogv32hf_2 */

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
              return 6517; /* *avx512vl_vpternlogv16hf_2 */

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
              return 6544; /* *avx512fp16_vpternlogv8hf_2 */

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
              return 6571; /* *avx512bw_vpternlogv32bf_2 */

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
              return 6598; /* *avx512vl_vpternlogv16bf_2 */

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
              return 6625; /* *avx512vl_vpternlogv8bf_2 */

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
              return 6652; /* *avx512f_vpternlogv16sf_2 */

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
              return 6679; /* *avx512vl_vpternlogv8sf_2 */

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
              return 6706; /* *avx512vl_vpternlogv4sf_2 */

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
              return 6733; /* *avx512f_vpternlogv8df_2 */

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
              return 6760; /* *avx512vl_vpternlogv4df_2 */

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
              return 6787; /* *avx512vl_vpternlogv2df_2 */

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
              return 6493; /* *avx512bw_vpternlogv32hf_2 */

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
              return 6520; /* *avx512vl_vpternlogv16hf_2 */

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
              return 6547; /* *avx512fp16_vpternlogv8hf_2 */

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
              return 6574; /* *avx512bw_vpternlogv32bf_2 */

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
              return 6601; /* *avx512vl_vpternlogv16bf_2 */

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
              return 6628; /* *avx512vl_vpternlogv8bf_2 */

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
              return 6655; /* *avx512f_vpternlogv16sf_2 */

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
              return 6682; /* *avx512vl_vpternlogv8sf_2 */

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
              return 6709; /* *avx512vl_vpternlogv4sf_2 */

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
              return 6736; /* *avx512f_vpternlogv8df_2 */

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
              return 6763; /* *avx512vl_vpternlogv4df_2 */

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
              return 6790; /* *avx512vl_vpternlogv2df_2 */

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
              return 6496; /* *avx512bw_vpternlogv32hf_2 */

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
              return 6523; /* *avx512vl_vpternlogv16hf_2 */

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
              return 6550; /* *avx512fp16_vpternlogv8hf_2 */

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
              return 6577; /* *avx512bw_vpternlogv32bf_2 */

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
              return 6604; /* *avx512vl_vpternlogv16bf_2 */

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
              return 6631; /* *avx512vl_vpternlogv8bf_2 */

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
              return 6658; /* *avx512f_vpternlogv16sf_2 */

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
              return 6685; /* *avx512vl_vpternlogv8sf_2 */

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
              return 6712; /* *avx512vl_vpternlogv4sf_2 */

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
              return 6739; /* *avx512f_vpternlogv8df_2 */

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
              return 6766; /* *avx512vl_vpternlogv4df_2 */

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
              return 6793; /* *avx512vl_vpternlogv2df_2 */

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
              return 5851; /* *avx512bw_vpternlogv32hf_1 */

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
              return 5878; /* *avx512vl_vpternlogv16hf_1 */

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
              return 5905; /* *avx512fp16_vpternlogv8hf_1 */

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
              return 5932; /* *avx512bw_vpternlogv32bf_1 */

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
              return 5959; /* *avx512vl_vpternlogv16bf_1 */

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
              return 5986; /* *avx512vl_vpternlogv8bf_1 */

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
              return 6013; /* *avx512f_vpternlogv16sf_1 */

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
              return 6040; /* *avx512vl_vpternlogv8sf_1 */

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
              return 6067; /* *avx512vl_vpternlogv4sf_1 */

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
              return 6094; /* *avx512f_vpternlogv8df_1 */

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
              return 6121; /* *avx512vl_vpternlogv4df_1 */

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
              return 6148; /* *avx512vl_vpternlogv2df_1 */

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
              return 5854; /* *avx512bw_vpternlogv32hf_1 */

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
              return 5881; /* *avx512vl_vpternlogv16hf_1 */

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
              return 5908; /* *avx512fp16_vpternlogv8hf_1 */

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
              return 5935; /* *avx512bw_vpternlogv32bf_1 */

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
              return 5962; /* *avx512vl_vpternlogv16bf_1 */

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
              return 5989; /* *avx512vl_vpternlogv8bf_1 */

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
              return 6016; /* *avx512f_vpternlogv16sf_1 */

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
              return 6043; /* *avx512vl_vpternlogv8sf_1 */

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
              return 6070; /* *avx512vl_vpternlogv4sf_1 */

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
              return 6097; /* *avx512f_vpternlogv8df_1 */

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
              return 6124; /* *avx512vl_vpternlogv4df_1 */

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
              return 6151; /* *avx512vl_vpternlogv2df_1 */

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
              return 5857; /* *avx512bw_vpternlogv32hf_1 */

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
              return 5884; /* *avx512vl_vpternlogv16hf_1 */

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
              return 5911; /* *avx512fp16_vpternlogv8hf_1 */

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
              return 5938; /* *avx512bw_vpternlogv32bf_1 */

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
              return 5965; /* *avx512vl_vpternlogv16bf_1 */

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
              return 5992; /* *avx512vl_vpternlogv8bf_1 */

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
              return 6019; /* *avx512f_vpternlogv16sf_1 */

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
              return 6046; /* *avx512vl_vpternlogv8sf_1 */

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
              return 6073; /* *avx512vl_vpternlogv4sf_1 */

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
              return 6100; /* *avx512f_vpternlogv8df_1 */

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
              return 6127; /* *avx512vl_vpternlogv4df_1 */

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
              return 6154; /* *avx512vl_vpternlogv2df_1 */

            case 36:
              if (!(
#line 13946 "../../gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 336 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
                return -1;
              return 6925; /* *avx512bw_vpternlogv32hf_3 */

            case 37:
              if (!(
#line 13946 "../../gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 336 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
                return -1;
              return 6934; /* *avx512vl_vpternlogv16hf_3 */

            case 38:
              if (!
#line 13946 "../../gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()))
                return -1;
              return 6943; /* *avx512fp16_vpternlogv8hf_3 */

            case 39:
              if (!(
#line 13946 "../../gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 337 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
                return -1;
              return 6952; /* *avx512bw_vpternlogv32bf_3 */

            case 40:
              if (!(
#line 13946 "../../gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 337 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
                return -1;
              return 6961; /* *avx512vl_vpternlogv16bf_3 */

            case 41:
              if (!
#line 13946 "../../gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()))
                return -1;
              return 6970; /* *avx512vl_vpternlogv8bf_3 */

            case 42:
              if (!(
#line 13946 "../../gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 338 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
                return -1;
              return 6979; /* *avx512f_vpternlogv16sf_3 */

            case 43:
              if (!(
#line 13946 "../../gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 338 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
                return -1;
              return 6988; /* *avx512vl_vpternlogv8sf_3 */

            case 44:
              if (!
#line 13946 "../../gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()))
                return -1;
              return 6997; /* *avx512vl_vpternlogv4sf_3 */

            case 45:
              if (!(
#line 13946 "../../gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 339 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
                return -1;
              return 7006; /* *avx512f_vpternlogv8df_3 */

            case 46:
              if (!(
#line 13946 "../../gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 339 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
                return -1;
              return 7015; /* *avx512vl_vpternlogv4df_3 */

            case 47:
              if (!(
#line 13946 "../../gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 339 "../../gcc/config/i386/sse.md"
(TARGET_SSE2)))
                return -1;
              return 7024; /* *avx512vl_vpternlogv2df_3 */

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
              return 6499; /* *avx512bw_vpternlogv32hf_2 */

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
              return 6526; /* *avx512vl_vpternlogv16hf_2 */

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
              return 6553; /* *avx512fp16_vpternlogv8hf_2 */

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
              return 6580; /* *avx512bw_vpternlogv32bf_2 */

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
              return 6607; /* *avx512vl_vpternlogv16bf_2 */

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
              return 6634; /* *avx512vl_vpternlogv8bf_2 */

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
              return 6661; /* *avx512f_vpternlogv16sf_2 */

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
              return 6688; /* *avx512vl_vpternlogv8sf_2 */

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
              return 6715; /* *avx512vl_vpternlogv4sf_2 */

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
              return 6742; /* *avx512f_vpternlogv8df_2 */

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
              return 6769; /* *avx512vl_vpternlogv4df_2 */

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
              return 6796; /* *avx512vl_vpternlogv2df_2 */

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
              return 6502; /* *avx512bw_vpternlogv32hf_2 */

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
              return 6529; /* *avx512vl_vpternlogv16hf_2 */

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
              return 6556; /* *avx512fp16_vpternlogv8hf_2 */

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
              return 6583; /* *avx512bw_vpternlogv32bf_2 */

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
              return 6610; /* *avx512vl_vpternlogv16bf_2 */

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
              return 6637; /* *avx512vl_vpternlogv8bf_2 */

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
              return 6664; /* *avx512f_vpternlogv16sf_2 */

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
              return 6691; /* *avx512vl_vpternlogv8sf_2 */

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
              return 6718; /* *avx512vl_vpternlogv4sf_2 */

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
              return 6745; /* *avx512f_vpternlogv8df_2 */

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
              return 6772; /* *avx512vl_vpternlogv4df_2 */

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
              return 6799; /* *avx512vl_vpternlogv2df_2 */

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
              return 6505; /* *avx512bw_vpternlogv32hf_2 */

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
              return 6532; /* *avx512vl_vpternlogv16hf_2 */

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
              return 6559; /* *avx512fp16_vpternlogv8hf_2 */

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
              return 6586; /* *avx512bw_vpternlogv32bf_2 */

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
              return 6613; /* *avx512vl_vpternlogv16bf_2 */

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
              return 6640; /* *avx512vl_vpternlogv8bf_2 */

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
              return 6667; /* *avx512f_vpternlogv16sf_2 */

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
              return 6694; /* *avx512vl_vpternlogv8sf_2 */

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
              return 6721; /* *avx512vl_vpternlogv4sf_2 */

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
              return 6748; /* *avx512f_vpternlogv8df_2 */

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
              return 6775; /* *avx512vl_vpternlogv4df_2 */

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
              return 6802; /* *avx512vl_vpternlogv2df_2 */

            default:
              return -1;
            }

        default:
          return -1;
        }

    case XOR:
      return recog_311 (x1, insn, pnum_clobbers);

    default:
      return -1;
    }
}

 int
recog_371 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7;
  int res ATTRIBUTE_UNUSED;
  if (pnum_clobbers == NULL)
    return -1;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) != E_SImode)
    return -1;
  x4 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x4) != USE)
    return -1;
  x5 = XEXP (x2, 0);
  operands[0] = x5;
  if (!register_operand (operands[0], E_SImode))
    return -1;
  x6 = XEXP (x3, 0);
  operands[3] = x6;
  x7 = XEXP (x4, 0);
  operands[4] = x7;
  switch (GET_MODE (operands[3]))
    {
    case E_SFmode:
      if (!nonimmediate_operand (operands[3], E_SFmode)
          || !nonimmediate_operand (operands[4], E_V4SFmode)
          || !
#line 5911 "../../gcc/config/i386/i386.md"
(!TARGET_64BIT && TARGET_SSE2 && TARGET_SSE_MATH
   && optimize_function_for_speed_p (cfun)))
        return -1;
      *pnum_clobbers = 2;
      return 223; /* *fixuns_truncsf_1 */

    case E_DFmode:
      if (!nonimmediate_operand (operands[3], E_DFmode)
          || !nonimmediate_operand (operands[4], E_V2DFmode)
          || !
#line 5911 "../../gcc/config/i386/i386.md"
(!TARGET_64BIT && TARGET_SSE2 && TARGET_SSE_MATH
   && optimize_function_for_speed_p (cfun)))
        return -1;
      *pnum_clobbers = 2;
      return 224; /* *fixuns_truncdf_1 */

    default:
      return -1;
    }
}

 int
recog_374 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6;
  int res ATTRIBUTE_UNUSED;
  if (pnum_clobbers == NULL)
    return -1;
  x2 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x2) != CLOBBER)
    return -1;
  x3 = XVECEXP (x1, 0, 0);
  x4 = XEXP (x3, 0);
  operands[0] = x4;
  x5 = XEXP (x3, 1);
  x6 = XEXP (x5, 0);
  operands[1] = x6;
  if (!nonimmediate_operand (operands[1], E_SImode))
    return -1;
  switch (pattern938 (x1))
    {
    case 0:
      if (!
#line 6297 "../../gcc/config/i386/i386.md"
(!TARGET_64BIT
   && TARGET_80387 && X87_ENABLE_FLOAT (SFmode, DImode)
   && TARGET_SSE2 && TARGET_INTER_UNIT_MOVES_TO_VEC))
        return -1;
      *pnum_clobbers = 1;
      return 261; /* floatunssisf2_i387_with_xmm */

    case 1:
      if (!
#line 6297 "../../gcc/config/i386/i386.md"
(!TARGET_64BIT
   && TARGET_80387 && X87_ENABLE_FLOAT (DFmode, DImode)
   && TARGET_SSE2 && TARGET_INTER_UNIT_MOVES_TO_VEC))
        return -1;
      *pnum_clobbers = 1;
      return 262; /* floatunssidf2_i387_with_xmm */

    case 2:
      if (!
#line 6297 "../../gcc/config/i386/i386.md"
(!TARGET_64BIT
   && TARGET_80387 && X87_ENABLE_FLOAT (XFmode, DImode)
   && TARGET_SSE2 && TARGET_INTER_UNIT_MOVES_TO_VEC))
        return -1;
      *pnum_clobbers = 1;
      return 263; /* floatunssixf2_i387_with_xmm */

    default:
      return -1;
    }
}

 int
recog_376 (rtx x1 ATTRIBUTE_UNUSED,
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
      res = recog_375 (x1, insn, pnum_clobbers);
      if (res >= 0)
        return res;
      if (GET_CODE (x4) != SUBREG
          || pattern559 (x4) != 0)
        return -1;
      x5 = XVECEXP (x1, 0, 1);
      if (GET_CODE (x5) != CLOBBER
          || pattern571 (x1) != 0)
        return -1;
      x6 = XEXP (x4, 0);
      x7 = XEXP (x6, 0);
      operands[2] = x7;
      switch (pattern1621 (x2))
        {
        case 0:
          if (
#line 6995 "../../gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)))
            return 303; /* *addqi_exthi_1_slp */
          break;

        case 1:
          if (
#line 6995 "../../gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)))
            return 304; /* *addqi_extsi_1_slp */
          break;

        case 2:
          if ((
#line 6995 "../../gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)) && 
#line 1164 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return 305; /* *addqi_extdi_1_slp */
          break;

        case 3:
          return 327; /* *addqi_exthi_0 */

        case 4:
          return 328; /* *addqi_extsi_0 */

        case 5:
          if (
#line 1164 "../../gcc/config/i386/i386.md"
(TARGET_64BIT))
            return 329; /* *addqi_extdi_0 */
          break;

        default:
          break;
        }
      x8 = XEXP (x3, 1);
      if (GET_CODE (x8) != SUBREG)
        return -1;
      switch (pattern1622 (x2))
        {
        case 0:
          if (!
#line 7028 "../../gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)))
            return -1;
          return 306; /* *addqi_exthi_2_slp */

        case 1:
          if (!
#line 7028 "../../gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)))
            return -1;
          return 307; /* *addqi_extsi_2_slp */

        case 2:
          if (!(
#line 7028 "../../gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)) && 
#line 1164 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return -1;
          return 308; /* *addqi_extdi_2_slp */

        case 3:
          return 330; /* *addqi_ext2hi_0 */

        case 4:
          return 331; /* *addqi_ext2si_0 */

        case 5:
          if (!
#line 1164 "../../gcc/config/i386/i386.md"
(TARGET_64BIT))
            return -1;
          return 332; /* *addqi_ext2di_0 */

        default:
          return -1;
        }

    case ZERO_EXTEND:
      x5 = XVECEXP (x1, 0, 1);
      if (pattern351 (x5) != 0)
        return -1;
      switch (pattern940 (x2))
        {
        case 0:
          if (!(
#line 6511 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (UNKNOWN, DImode, operands, TARGET_APX_NDD)) && 
#line 1235 "../../gcc/config/i386/i386.md"
(!TARGET_64BIT)))
            return -1;
          return 268; /* *adddi3_doubleword_zext */

        case 1:
          if (!(
#line 6511 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (UNKNOWN, TImode, operands, TARGET_APX_NDD)) && 
#line 1236 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return -1;
          return 269; /* *addti3_doubleword_zext */

        default:
          return -1;
        }

    case PLUS:
      if (pattern338 (x1) != 0)
        return -1;
      x6 = XEXP (x4, 0);
      switch (GET_CODE (x6))
        {
        case ASHIFT:
          switch (pattern1155 (x3))
            {
            case 0:
              if (!(
#line 6542 "../../gcc/config/i386/i386.md"
(INTVAL (operands[3]) == 4 * BITS_PER_UNIT) && 
#line 1235 "../../gcc/config/i386/i386.md"
(!TARGET_64BIT)))
                return -1;
              return 270; /* *adddi3_doubleword_concat */

            case 1:
              if (!(
#line 6542 "../../gcc/config/i386/i386.md"
(INTVAL (operands[3]) == 8 * BITS_PER_UNIT) && 
#line 1236 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return -1;
              return 273; /* *addti3_doubleword_concat */

            case 2:
              if (!(
#line 6573 "../../gcc/config/i386/i386.md"
(INTVAL (operands[3]) == 4 * BITS_PER_UNIT) && 
#line 1235 "../../gcc/config/i386/i386.md"
(!TARGET_64BIT)))
                return -1;
              return 276; /* *adddi3_doubleword_concat_zext */

            case 3:
              if (!(
#line 6573 "../../gcc/config/i386/i386.md"
(INTVAL (operands[3]) == 8 * BITS_PER_UNIT) && 
#line 1236 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return -1;
              return 279; /* *addti3_doubleword_concat_zext */

            default:
              return -1;
            }

        case LTU:
        case UNLT:
          operands[4] = x6;
          x9 = XEXP (x6, 1);
          if (x9 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
            return -1;
          x7 = XEXP (x6, 0);
          operands[3] = x7;
          if (!flags_reg_operand (operands[3], E_VOIDmode))
            return -1;
          x10 = XEXP (x4, 1);
          operands[1] = x10;
          x8 = XEXP (x3, 1);
          operands[2] = x8;
          switch (GET_MODE (operands[0]))
            {
            case E_QImode:
              if (pattern1623 (x3, 
E_QImode) != 0
                  || !
#line 8793 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (PLUS, QImode, operands, TARGET_APX_NDD)))
                return -1;
              return 453; /* addqi3_carry */

            case E_HImode:
              if (pattern1623 (x3, 
E_HImode) != 0
                  || !
#line 8793 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (PLUS, HImode, operands, TARGET_APX_NDD)))
                return -1;
              return 454; /* addhi3_carry */

            case E_SImode:
              if (pattern1624 (x3, 
E_SImode) != 0
                  || !
#line 8793 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (PLUS, SImode, operands, TARGET_APX_NDD)))
                return -1;
              return 455; /* addsi3_carry */

            case E_DImode:
              if (pattern1624 (x3, 
E_DImode) != 0
                  || !(
#line 8793 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (PLUS, DImode, operands, TARGET_APX_NDD)) && 
#line 1161 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return -1;
              return 456; /* adddi3_carry */

            default:
              return -1;
            }

        case EQ:
          switch (pattern1158 (x3))
            {
            case 0:
              if (!
#line 10136 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (PLUS, QImode, operands, TARGET_APX_NDD)
   && ix86_pre_reload_split ()))
                return -1;
              return 554; /* *addqi3_eq */

            case 1:
              if (!
#line 10136 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (PLUS, HImode, operands, TARGET_APX_NDD)
   && ix86_pre_reload_split ()))
                return -1;
              return 555; /* *addhi3_eq */

            case 2:
              if (!
#line 10136 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (PLUS, SImode, operands, TARGET_APX_NDD)
   && ix86_pre_reload_split ()))
                return -1;
              return 556; /* *addsi3_eq */

            case 3:
              if (!(
#line 10136 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (PLUS, DImode, operands, TARGET_APX_NDD)
   && ix86_pre_reload_split ()) && 
#line 1161 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return -1;
              return 557; /* *adddi3_eq */

            default:
              return -1;
            }

        case NE:
          switch (pattern1161 (x3))
            {
            case 0:
              if (!
#line 10157 "../../gcc/config/i386/i386.md"
(CONST_INT_P (operands[2])
   && (QImode != DImode
       || INTVAL (operands[2]) != HOST_WIDE_INT_C (-0x80000000))
   && ix86_binary_operator_ok (PLUS, QImode, operands, TARGET_APX_NDD)
   && ix86_pre_reload_split ()))
                return -1;
              return 558; /* *addqi3_ne */

            case 1:
              if (!
#line 10157 "../../gcc/config/i386/i386.md"
(CONST_INT_P (operands[2])
   && (HImode != DImode
       || INTVAL (operands[2]) != HOST_WIDE_INT_C (-0x80000000))
   && ix86_binary_operator_ok (PLUS, HImode, operands, TARGET_APX_NDD)
   && ix86_pre_reload_split ()))
                return -1;
              return 559; /* *addhi3_ne */

            case 2:
              if (!
#line 10157 "../../gcc/config/i386/i386.md"
(CONST_INT_P (operands[2])
   && (SImode != DImode
       || INTVAL (operands[2]) != HOST_WIDE_INT_C (-0x80000000))
   && ix86_binary_operator_ok (PLUS, SImode, operands, TARGET_APX_NDD)
   && ix86_pre_reload_split ()))
                return -1;
              return 560; /* *addsi3_ne */

            case 3:
              if (!(
#line 10157 "../../gcc/config/i386/i386.md"
(CONST_INT_P (operands[2])
   && (DImode != DImode
       || INTVAL (operands[2]) != HOST_WIDE_INT_C (-0x80000000))
   && ix86_binary_operator_ok (PLUS, DImode, operands, TARGET_APX_NDD)
   && ix86_pre_reload_split ()) && 
#line 1161 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return -1;
              return 561; /* *adddi3_ne */

            default:
              return -1;
            }

        default:
          return -1;
        }

    case IOR:
      switch (pattern355 (x1))
        {
        case 0:
          if (!(
#line 6542 "../../gcc/config/i386/i386.md"
(INTVAL (operands[3]) == 4 * BITS_PER_UNIT) && 
#line 1235 "../../gcc/config/i386/i386.md"
(!TARGET_64BIT)))
            return -1;
          return 271; /* *adddi3_doubleword_concat */

        case 1:
          if (!(
#line 6542 "../../gcc/config/i386/i386.md"
(INTVAL (operands[3]) == 8 * BITS_PER_UNIT) && 
#line 1236 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return -1;
          return 274; /* *addti3_doubleword_concat */

        case 2:
          if (!(
#line 6573 "../../gcc/config/i386/i386.md"
(INTVAL (operands[3]) == 4 * BITS_PER_UNIT) && 
#line 1235 "../../gcc/config/i386/i386.md"
(!TARGET_64BIT)))
            return -1;
          return 277; /* *adddi3_doubleword_concat_zext */

        case 3:
          if (!(
#line 6573 "../../gcc/config/i386/i386.md"
(INTVAL (operands[3]) == 8 * BITS_PER_UNIT) && 
#line 1236 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return -1;
          return 280; /* *addti3_doubleword_concat_zext */

        default:
          return -1;
        }

    case XOR:
      switch (pattern355 (x1))
        {
        case 0:
          if (!(
#line 6542 "../../gcc/config/i386/i386.md"
(INTVAL (operands[3]) == 4 * BITS_PER_UNIT) && 
#line 1235 "../../gcc/config/i386/i386.md"
(!TARGET_64BIT)))
            return -1;
          return 272; /* *adddi3_doubleword_concat */

        case 1:
          if (!(
#line 6542 "../../gcc/config/i386/i386.md"
(INTVAL (operands[3]) == 8 * BITS_PER_UNIT) && 
#line 1236 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return -1;
          return 275; /* *addti3_doubleword_concat */

        case 2:
          if (!(
#line 6573 "../../gcc/config/i386/i386.md"
(INTVAL (operands[3]) == 4 * BITS_PER_UNIT) && 
#line 1235 "../../gcc/config/i386/i386.md"
(!TARGET_64BIT)))
            return -1;
          return 278; /* *adddi3_doubleword_concat_zext */

        case 3:
          if (!(
#line 6573 "../../gcc/config/i386/i386.md"
(INTVAL (operands[3]) == 8 * BITS_PER_UNIT) && 
#line 1236 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return -1;
          return 281; /* *addti3_doubleword_concat_zext */

        default:
          return -1;
        }

    case LTU:
    case UNLT:
      switch (pattern356 (x1))
        {
        case 0:
          if (pattern1525 (x3, 
E_QImode) != 0
              || !
#line 8865 "../../gcc/config/i386/i386.md"
(!MEM_P (operands[0]) || rtx_equal_p (operands[0], operands[1])))
            return -1;
          return 457; /* *addqi3_carry_0 */

        case 1:
          if (pattern1525 (x3, 
E_HImode) != 0
              || !
#line 8865 "../../gcc/config/i386/i386.md"
(!MEM_P (operands[0]) || rtx_equal_p (operands[0], operands[1])))
            return -1;
          return 458; /* *addhi3_carry_0 */

        case 2:
          if (pattern1525 (x3, 
E_SImode) != 0
              || !
#line 8865 "../../gcc/config/i386/i386.md"
(!MEM_P (operands[0]) || rtx_equal_p (operands[0], operands[1])))
            return -1;
          return 459; /* *addsi3_carry_0 */

        case 3:
          if (pattern1525 (x3, 
E_DImode) != 0
              || !(
#line 8865 "../../gcc/config/i386/i386.md"
(!MEM_P (operands[0]) || rtx_equal_p (operands[0], operands[1])) && 
#line 1161 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return -1;
          return 460; /* *adddi3_carry_0 */

        default:
          return -1;
        }

    case GE:
    case GEU:
      switch (pattern356 (x1))
        {
        case 0:
          if (pattern1526 (x3, 
E_QImode) != 0
              || !
#line 8879 "../../gcc/config/i386/i386.md"
(!MEM_P (operands[0]) || rtx_equal_p (operands[0], operands[1])))
            return -1;
          return 461; /* *addqi3_carry_0r */

        case 1:
          if (pattern1526 (x3, 
E_HImode) != 0
              || !
#line 8879 "../../gcc/config/i386/i386.md"
(!MEM_P (operands[0]) || rtx_equal_p (operands[0], operands[1])))
            return -1;
          return 462; /* *addhi3_carry_0r */

        case 2:
          if (pattern1526 (x3, 
E_SImode) != 0
              || !
#line 8879 "../../gcc/config/i386/i386.md"
(!MEM_P (operands[0]) || rtx_equal_p (operands[0], operands[1])))
            return -1;
          return 463; /* *addsi3_carry_0r */

        case 3:
          if (pattern1526 (x3, 
E_DImode) != 0
              || !(
#line 8879 "../../gcc/config/i386/i386.md"
(!MEM_P (operands[0]) || rtx_equal_p (operands[0], operands[1])) && 
#line 1161 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return -1;
          return 464; /* *adddi3_carry_0r */

        default:
          return -1;
        }

    case EQ:
      switch (pattern360 (x1))
        {
        case 0:
          if (!
#line 10183 "../../gcc/config/i386/i386.md"
(ix86_unary_operator_ok (PLUS, QImode, operands)
   && ix86_pre_reload_split ()))
            return -1;
          return 562; /* *addqi3_eq_0 */

        case 1:
          if (!
#line 10183 "../../gcc/config/i386/i386.md"
(ix86_unary_operator_ok (PLUS, HImode, operands)
   && ix86_pre_reload_split ()))
            return -1;
          return 563; /* *addhi3_eq_0 */

        case 2:
          if (!
#line 10183 "../../gcc/config/i386/i386.md"
(ix86_unary_operator_ok (PLUS, SImode, operands)
   && ix86_pre_reload_split ()))
            return -1;
          return 564; /* *addsi3_eq_0 */

        case 3:
          if (!(
#line 10183 "../../gcc/config/i386/i386.md"
(ix86_unary_operator_ok (PLUS, DImode, operands)
   && ix86_pre_reload_split ()) && 
#line 1161 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return -1;
          return 565; /* *adddi3_eq_0 */

        default:
          return -1;
        }

    case NE:
      switch (pattern360 (x1))
        {
        case 0:
          if (!
#line 10204 "../../gcc/config/i386/i386.md"
(ix86_unary_operator_ok (PLUS, QImode, operands)
   && ix86_pre_reload_split ()))
            return -1;
          return 566; /* *addqi3_ne_0 */

        case 1:
          if (!
#line 10204 "../../gcc/config/i386/i386.md"
(ix86_unary_operator_ok (PLUS, HImode, operands)
   && ix86_pre_reload_split ()))
            return -1;
          return 567; /* *addhi3_ne_0 */

        case 2:
          if (!
#line 10204 "../../gcc/config/i386/i386.md"
(ix86_unary_operator_ok (PLUS, SImode, operands)
   && ix86_pre_reload_split ()))
            return -1;
          return 568; /* *addsi3_ne_0 */

        case 3:
          if (!(
#line 10204 "../../gcc/config/i386/i386.md"
(ix86_unary_operator_ok (PLUS, DImode, operands)
   && ix86_pre_reload_split ()) && 
#line 1161 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return -1;
          return 569; /* *adddi3_ne_0 */

        default:
          return -1;
        }

    case MINUS:
      x5 = XVECEXP (x1, 0, 1);
      if (pattern351 (x5) != 0)
        return -1;
      switch (pattern944 (x2))
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
          return 575; /* *subhi3_ne */

        case 2:
          if (!
#line 10252 "../../gcc/config/i386/i386.md"
(CONST_INT_P (operands[2])
   && (SImode != DImode
       || INTVAL (operands[2]) != HOST_WIDE_INT_C (-0x80000000))
   && ix86_binary_operator_ok (MINUS, SImode, operands, TARGET_APX_NDD)
   && ix86_pre_reload_split ()))
            return -1;
          return 576; /* *subsi3_ne */

        case 3:
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
          return 577; /* *subdi3_ne */

        case 4:
          if (!
#line 10281 "../../gcc/config/i386/i386.md"
(CONST_INT_P (operands[2])
   && (QImode != DImode
       || INTVAL (operands[2]) != HOST_WIDE_INT_C (-0x80000000))
   && ix86_binary_operator_ok (MINUS, QImode, operands, TARGET_APX_NDD)
   && ix86_pre_reload_split ()))
            return -1;
          return 578; /* *subqi3_eq_1 */

        case 5:
          if (!
#line 10281 "../../gcc/config/i386/i386.md"
(CONST_INT_P (operands[2])
   && (HImode != DImode
       || INTVAL (operands[2]) != HOST_WIDE_INT_C (-0x80000000))
   && ix86_binary_operator_ok (MINUS, HImode, operands, TARGET_APX_NDD)
   && ix86_pre_reload_split ()))
            return -1;
          return 579; /* *subhi3_eq_1 */

        case 6:
          if (!
#line 10281 "../../gcc/config/i386/i386.md"
(CONST_INT_P (operands[2])
   && (SImode != DImode
       || INTVAL (operands[2]) != HOST_WIDE_INT_C (-0x80000000))
   && ix86_binary_operator_ok (MINUS, SImode, operands, TARGET_APX_NDD)
   && ix86_pre_reload_split ()))
            return -1;
          return 580; /* *subsi3_eq_1 */

        case 7:
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
          return 581; /* *subdi3_eq_1 */

        default:
          return -1;
        }

    case LSHIFTRT:
      x10 = XEXP (x4, 1);
      if (x10 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
        return -1;
      x8 = XEXP (x3, 1);
      if (GET_CODE (x8) != ASHIFT)
        return -1;
      x11 = XEXP (x8, 0);
      if (GET_CODE (x11) != LTU)
        return -1;
      x12 = XEXP (x11, 0);
      if (GET_CODE (x12) != REG
          || REGNO (x12) != 17
          || GET_MODE (x12) != E_CCCmode)
        return -1;
      x13 = XEXP (x11, 1);
      if (x13 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
        return -1;
      x14 = XEXP (x8, 1);
      if (GET_CODE (x14) != CONST_INT
          || pattern345 (x1) != 0)
        return -1;
      switch (XWINT (x14, 0))
        {
        case 31L:
          if (pattern1673 (x3, 
E_SImode) != 0)
            return -1;
          return 1385; /* rcrsi2 */

        case 63L:
          if (pattern1673 (x3, 
E_DImode) != 0
              || !
#line 18754 "../../gcc/config/i386/i386.md"
(TARGET_64BIT))
            return -1;
          return 1386; /* rcrdi2 */

        default:
          return -1;
        }

    case UNSPEC:
      x5 = XVECEXP (x1, 0, 1);
      if (pattern351 (x5) != 0)
        return -1;
      switch (pattern948 (x2))
        {
        case 0:
          if (!
#line 1408 "../../gcc/config/i386/i386.md"
(ptr_mode == SImode))
            return -1;
          return 1655; /* *add_tp_si */

        case 1:
          if (!
#line 1408 "../../gcc/config/i386/i386.md"
(ptr_mode == DImode))
            return -1;
          return 1656; /* *add_tp_di */

        case 2:
          if (!
#line 23165 "../../gcc/config/i386/i386.md"
(!TARGET_64BIT && TARGET_GNU2_TLS))
            return -1;
          return 1660; /* *tls_dynamic_gnu2_combine_32 */

        case 3:
          if (!(
#line 23224 "../../gcc/config/i386/i386.md"
(TARGET_64BIT && TARGET_GNU2_TLS) && 
#line 1408 "../../gcc/config/i386/i386.md"
(ptr_mode == SImode)))
            return -1;
          return 1665; /* *tls_dynamic_gnu2_combine_64_si */

        case 4:
          if (!(
#line 23224 "../../gcc/config/i386/i386.md"
(TARGET_64BIT && TARGET_GNU2_TLS) && 
#line 1408 "../../gcc/config/i386/i386.md"
(ptr_mode == DImode)))
            return -1;
          return 1666; /* *tls_dynamic_gnu2_combine_64_di */

        default:
          return -1;
        }

    default:
      return -1;
    }
}

 int
recog_398 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  x4 = XEXP (x3, 1);
  operands[2] = x4;
  x5 = XVECEXP (x1, 0, 1);
  switch (pattern820 (x5))
    {
    case 0:
      switch (GET_MODE (operands[0]))
        {
        case E_DImode:
          if (pattern1434 (x3, 
E_DImode) != 0)
            return -1;
          if ((
#line 13312 "../../gcc/config/i386/i386.md"
(TARGET_BMI) && 
#line 1235 "../../gcc/config/i386/i386.md"
(!TARGET_64BIT)))
            return 809; /* *andndi3_doubleword_bmi */
          if ((
#line 13330 "../../gcc/config/i386/i386.md"
(!TARGET_BMI
   && ix86_pre_reload_split ()) && 
#line 1195 "../../gcc/config/i386/i386.md"
(!TARGET_64BIT)))
            return 811; /* *andndi3_doubleword */
          if (!(
#line 13346 "../../gcc/config/i386/i386.md"
(TARGET_BMI || TARGET_AVX512BW) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return -1;
          return 814; /* *andndi_1 */

        case E_TImode:
          if (pattern1434 (x3, 
E_TImode) != 0)
            return -1;
          if ((
#line 13312 "../../gcc/config/i386/i386.md"
(TARGET_BMI) && 
#line 1236 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return 810; /* *andnti3_doubleword_bmi */
          if (!(
#line 13330 "../../gcc/config/i386/i386.md"
(!TARGET_BMI
   && ix86_pre_reload_split ()) && 
#line 1196 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return -1;
          return 812; /* *andnti3_doubleword */

        case E_SImode:
          if (pattern1434 (x3, 
E_SImode) != 0
              || !
#line 13346 "../../gcc/config/i386/i386.md"
(TARGET_BMI || TARGET_AVX512BW))
            return -1;
          return 813; /* *andnsi_1 */

        case E_QImode:
          if (pattern1435 (x3, 
E_QImode) != 0
              || !
#line 13362 "../../gcc/config/i386/i386.md"
(TARGET_BMI || TARGET_AVX512BW))
            return -1;
          return 815; /* *andnqi_1 */

        case E_HImode:
          if (pattern1435 (x3, 
E_HImode) != 0
              || !
#line 13362 "../../gcc/config/i386/i386.md"
(TARGET_BMI || TARGET_AVX512BW))
            return -1;
          return 816; /* *andnhi_1 */

        case E_V4QImode:
          if (pattern1435 (x3, 
E_V4QImode) != 0)
            return -1;
          return 2265; /* *andnotv4qi3 */

        case E_V2QImode:
          if (pattern1435 (x3, 
E_V2QImode) != 0)
            return -1;
          return 2266; /* *andnotv2qi3 */

        case E_V2HImode:
          if (pattern1435 (x3, 
E_V2HImode) != 0)
            return -1;
          return 2267; /* *andnotv2hi3 */

        default:
          return -1;
        }

    case 1:
      if (pattern1435 (x3, 
E_QImode) != 0
          || !
#line 2140 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F))
        return -1;
      return 2578; /* kandnqi */

    case 2:
      if (pattern1435 (x3, 
E_HImode) != 0
          || !
#line 2140 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F))
        return -1;
      return 2579; /* kandnhi */

    case 3:
      if (pattern1435 (x3, 
E_SImode) != 0
          || !(
#line 2140 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 2075 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW)))
        return -1;
      return 2580; /* kandnsi */

    case 4:
      if (pattern1435 (x3, 
E_DImode) != 0
          || !(
#line 2140 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 2075 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW)))
        return -1;
      return 2581; /* kandndi */

    default:
      return -1;
    }
}

 int
recog_401 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  x4 = XEXP (x3, 0);
  switch (GET_CODE (x4))
    {
    case XOR:
      x5 = XEXP (x2, 0);
      operands[0] = x5;
      x6 = XEXP (x4, 0);
      operands[1] = x6;
      x7 = XEXP (x4, 1);
      operands[2] = x7;
      x8 = XVECEXP (x1, 0, 1);
      switch (pattern820 (x8))
        {
        case 0:
          switch (GET_MODE (operands[0]))
            {
            case E_HImode:
              if (pattern1330 (x3, 
E_HImode) != 0
                  || !
#line 13607 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (XOR, HImode, operands, TARGET_APX_NDD)))
                return -1;
              return 835; /* *notxorhi_1 */

            case E_SImode:
              if (pattern1331 (x3, 
E_SImode) != 0
                  || !
#line 13607 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (XOR, SImode, operands, TARGET_APX_NDD)))
                return -1;
              return 836; /* *notxorsi_1 */

            case E_DImode:
              if (pattern1331 (x3, 
E_DImode) != 0
                  || !(
#line 13607 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (XOR, DImode, operands, TARGET_APX_NDD)) && 
#line 1164 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return -1;
              return 837; /* *notxordi_1 */

            case E_QImode:
              if (pattern1330 (x3, 
E_QImode) != 0
                  || !
#line 13807 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (XOR, QImode, operands, TARGET_APX_NDD)))
                return -1;
              return 871; /* *notxorqi_1 */

            default:
              return -1;
            }

        case 1:
          if (pattern1332 (x3, 
E_QImode) != 0
              || !
#line 2178 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F))
            return -1;
          return 2582; /* kxnorqi */

        case 2:
          if (pattern1332 (x3, 
E_HImode) != 0
              || !
#line 2178 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F))
            return -1;
          return 2583; /* kxnorhi */

        case 3:
          if (pattern1332 (x3, 
E_SImode) != 0
              || !(
#line 2178 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 2075 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW)))
            return -1;
          return 2584; /* kxnorsi */

        case 4:
          if (pattern1332 (x3, 
E_DImode) != 0
              || !(
#line 2178 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 2075 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW)))
            return -1;
          return 2585; /* kxnordi */

        default:
          return -1;
        }

    case ZERO_EXTRACT:
      if (pattern372 (x1) != 0
          || GET_MODE (x3) != E_DImode)
        return -1;
      x6 = XEXP (x4, 0);
      if (!rtx_equal_p (x6, operands[0]))
        return -1;
      x9 = XEXP (x4, 2);
      if (!rtx_equal_p (x9, operands[1])
          || !
#line 19040 "../../gcc/config/i386/i386.md"
(TARGET_64BIT && (TARGET_USE_BT || reload_completed)))
        return -1;
      return 1415; /* *btcq_imm */

    case REG:
    case SUBREG:
      operands[1] = x4;
      x8 = XVECEXP (x1, 0, 1);
      if (GET_CODE (x8) != UNSPEC
          || XVECLEN (x8, 0) != 1
          || XINT (x8, 1) != 174)
        return -1;
      x10 = XVECEXP (x8, 0, 0);
      if (x10 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
        return -1;
      x5 = XEXP (x2, 0);
      operands[0] = x5;
      switch (pattern700 (x3))
        {
        case 0:
          if (!
#line 2199 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F))
            return -1;
          return 2586; /* knotqi */

        case 1:
          if (!
#line 2199 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F))
            return -1;
          return 2587; /* knothi */

        case 2:
          if (!(
#line 2199 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 2075 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW)))
            return -1;
          return 2588; /* knotsi */

        case 3:
          if (!(
#line 2199 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 2075 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW)))
            return -1;
          return 2589; /* knotdi */

        default:
          return -1;
        }

    default:
      return -1;
    }
}

 int
recog_404 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  x4 = XEXP (x3, 0);
  switch (GET_CODE (x4))
    {
    case CONST_INT:
    case REG:
    case SUBREG:
    case MEM:
      switch (pattern198 (x1))
        {
        case 0:
          x5 = XEXP (x2, 0);
          operands[0] = x5;
          switch (pattern701 (x1))
            {
            case 0:
              if ((
#line 15203 "../../gcc/config/i386/i386.md"
(((INTVAL (operands[3]) & (4 * BITS_PER_UNIT)) == 0
    || ((INTVAL (operands[3]) & (2 * 4 * BITS_PER_UNIT - 1))
	 == (2 * 4 * BITS_PER_UNIT - 1)))
   && ix86_pre_reload_split ()) && 
#line 1235 "../../gcc/config/i386/i386.md"
(!TARGET_64BIT)))
                return 1052; /* *ashldi3_doubleword_mask */
              break;

            case 1:
              if ((
#line 15203 "../../gcc/config/i386/i386.md"
(((INTVAL (operands[3]) & (8 * BITS_PER_UNIT)) == 0
    || ((INTVAL (operands[3]) & (2 * 8 * BITS_PER_UNIT - 1))
	 == (2 * 8 * BITS_PER_UNIT - 1)))
   && ix86_pre_reload_split ()) && 
#line 1236 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return 1053; /* *ashlti3_doubleword_mask */
              break;

            case 2:
              if ((
#line 2268 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 2070 "../../gcc/config/i386/sse.md"
(TARGET_AVX512DQ)))
                return 2595; /* kashiftqi */
              break;

            case 3:
              if (
#line 2268 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F))
                return 2597; /* kashifthi */
              break;

            case 4:
              if ((
#line 2268 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 2070 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW)))
                return 2599; /* kashiftsi */
              break;

            case 5:
              if ((
#line 2268 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 2070 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW)))
                return 2601; /* kashiftdi */
              break;

            default:
              break;
            }
          x6 = XEXP (x3, 1);
          operands[2] = x6;
          switch (pattern702 (x1))
            {
            case 0:
              operands[0] = x5;
              switch (GET_MODE (operands[0]))
                {
                case E_DImode:
                  if (GET_MODE (x3) == E_DImode)
                    {
                      if (register_operand (operands[0], E_DImode)
                          && reg_or_pm1_operand (operands[1], E_DImode)
                          && 
#line 1195 "../../gcc/config/i386/i386.md"
(!TARGET_64BIT))
                        return 1056; /* ashldi3_doubleword */
                      if (nonimmediate_operand (operands[0], E_DImode)
                          && nonimmediate_operand (operands[1], E_DImode)
                          && (
#line 15909 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ASHIFT, DImode, operands, TARGET_APX_NDD)
   && true) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                        return 1091; /* *ashldi3_1 */
                    }
                  break;

                case E_TImode:
                  if (register_operand (operands[0], E_TImode)
                      && GET_MODE (x3) == E_TImode
                      && reg_or_pm1_operand (operands[1], E_TImode)
                      && 
#line 1196 "../../gcc/config/i386/i386.md"
(TARGET_64BIT))
                    return 1057; /* ashlti3_doubleword */
                  break;

                case E_SImode:
                  if (nonimmediate_operand (operands[0], E_SImode)
                      && GET_MODE (x3) == E_SImode
                      && nonimmediate_operand (operands[1], E_SImode)
                      && 
#line 15909 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ASHIFT, SImode, operands, TARGET_APX_NDD)
   && true))
                    return 1089; /* *ashlsi3_1 */
                  break;

                case E_HImode:
                  if (nonimmediate_operand (operands[0], E_HImode)
                      && GET_MODE (x3) == E_HImode
                      && nonimmediate_operand (operands[1], E_HImode)
                      && 
#line 16095 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ASHIFT, HImode, operands, TARGET_APX_NDD)
   && true))
                    return 1105; /* *ashlhi3_1 */
                  break;

                case E_QImode:
                  if (nonimmediate_operand (operands[0], E_QImode)
                      && GET_MODE (x3) == E_QImode
                      && nonimmediate_operand (operands[1], E_QImode)
                      && 
#line 16154 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ASHIFT, QImode, operands, TARGET_APX_NDD)
   && true))
                    return 1107; /* *ashlqi3_1 */
                  break;

                case E_V2QImode:
                  if (register_operand (operands[0], E_V2QImode)
                      && GET_MODE (x3) == E_V2QImode
                      && register_operand (operands[1], E_V2QImode)
                      && 
#line 4007 "../../gcc/config/i386/mmx.md"
(!TARGET_PARTIAL_REG_STALL || optimize_size))
                    return 2208; /* ashlv2qi3 */
                  break;

                default:
                  break;
                }
              break;

            case 1:
              x7 = XEXP (x5, 0);
              operands[0] = x7;
              switch (pattern373 (x3))
                {
                case 0:
                  if (
#line 16233 "../../gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)))
                    return 1108; /* *ashlqi3_1_slp */
                  break;

                case 1:
                  if (
#line 16233 "../../gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)))
                    return 1109; /* *ashlhi3_1_slp */
                  break;

                default:
                  break;
                }
              break;

            default:
              break;
            }
          if (GET_CODE (x6) != SUBREG
              || maybe_ne (SUBREG_BYTE (x6), 0)
              || GET_MODE (x6) != E_QImode)
            return -1;
          x8 = XVECEXP (x1, 0, 1);
          if (pattern406 (x8) != 0)
            return -1;
          switch (pattern1437 (x2))
            {
            case 0:
              if (!
#line 17840 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ASHIFT, SImode, operands)
   && (INTVAL (operands[3]) & (4 * BITS_PER_UNIT - 1))
      == 4 * BITS_PER_UNIT - 1
   && ix86_pre_reload_split ()))
                return -1;
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
              return 1247; /* *ashldi3_mask */

            case 2:
              if (!
#line 17888 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ASHIFT, SImode, operands)
   && (INTVAL (operands[3]) & (4 * BITS_PER_UNIT - 1)) == 0
   && ix86_pre_reload_split ()))
                return -1;
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
              return 1259; /* *ashldi3_add */

            case 4:
              if (!
#line 17934 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ASHIFT, SImode, operands)
   && (INTVAL (operands[3]) & (4 * BITS_PER_UNIT - 1)) == 0
   && ix86_pre_reload_split ()))
                return -1;
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
            return 1054; /* *ashldi3_doubleword_mask_1 */
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
          return 1253; /* *ashldi3_mask_1 */

        case 2:
          if (!(
#line 15264 "../../gcc/config/i386/i386.md"
(((INTVAL (operands[3]) & (8 * BITS_PER_UNIT)) == 0
    || ((INTVAL (operands[3]) & (2 * 8 * BITS_PER_UNIT - 1))
	 == (2 * 8 * BITS_PER_UNIT - 1)))
   && ix86_pre_reload_split ()) && 
#line 1236 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return -1;
          return 1055; /* *ashlti3_doubleword_mask_1 */

        case 3:
          if (!
#line 17865 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ASHIFT, SImode, operands)
   && (INTVAL (operands[3]) & (4 * BITS_PER_UNIT - 1))
      == 4 * BITS_PER_UNIT - 1
   && ix86_pre_reload_split ()))
            return -1;
          return 1250; /* *ashlsi3_mask_1 */

        case 4:
          if (!
#line 17912 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ASHIFT, SImode, operands)
   && (INTVAL (operands[3]) & (4 * BITS_PER_UNIT - 1)) == 0
   && ix86_pre_reload_split ()))
            return -1;
          return 1262; /* *ashlsi3_add_1 */

        case 5:
          if (!(
#line 17912 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ASHIFT, DImode, operands)
   && (INTVAL (operands[3]) & (8 * BITS_PER_UNIT - 1)) == 0
   && ix86_pre_reload_split ()) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return -1;
          return 1265; /* *ashldi3_add_1 */

        case 6:
          if (!
#line 17964 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ASHIFT, SImode, operands)
   && (INTVAL (operands[3]) & (4 * BITS_PER_UNIT - 1)) == 0
   && ix86_pre_reload_split ()))
            return -1;
          return 1274; /* *ashlsi3_sub_1 */

        case 7:
          if (!(
#line 17964 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ASHIFT, DImode, operands)
   && (INTVAL (operands[3]) & (8 * BITS_PER_UNIT - 1)) == 0
   && ix86_pre_reload_split ()) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return -1;
          return 1277; /* *ashldi3_sub_1 */

        default:
          return -1;
        }

    case SIGN_EXTEND:
      switch (pattern379 (x1))
        {
        case 0:
          if (!(
#line 15365 "../../gcc/config/i386/i386.md"
(INTVAL (operands[2]) >= 4 * BITS_PER_UNIT
   && INTVAL (operands[2]) < 4 * BITS_PER_UNIT * 2) && 
#line 1235 "../../gcc/config/i386/i386.md"
(!TARGET_64BIT)))
            return -1;
          return 1058; /* *ashldi3_doubleword_highpart */

        case 1:
          if (!(
#line 15365 "../../gcc/config/i386/i386.md"
(INTVAL (operands[2]) >= 8 * BITS_PER_UNIT
   && INTVAL (operands[2]) < 8 * BITS_PER_UNIT * 2) && 
#line 1236 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return -1;
          return 1060; /* *ashlti3_doubleword_highpart */

        default:
          return -1;
        }

    case ZERO_EXTEND:
      switch (pattern379 (x1))
        {
        case 0:
          if (!(
#line 15365 "../../gcc/config/i386/i386.md"
(INTVAL (operands[2]) >= 4 * BITS_PER_UNIT
   && INTVAL (operands[2]) < 4 * BITS_PER_UNIT * 2) && 
#line 1235 "../../gcc/config/i386/i386.md"
(!TARGET_64BIT)))
            return -1;
          return 1059; /* *ashldi3_doubleword_highpart */

        case 1:
          if (!(
#line 15365 "../../gcc/config/i386/i386.md"
(INTVAL (operands[2]) >= 8 * BITS_PER_UNIT
   && INTVAL (operands[2]) < 8 * BITS_PER_UNIT * 2) && 
#line 1236 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return -1;
          return 1061; /* *ashlti3_doubleword_highpart */

        default:
          return -1;
        }

    default:
      return -1;
    }
}

 int
recog_420 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  operands[1] = x3;
  x4 = XVECEXP (x1, 0, 1);
  switch (GET_CODE (x4))
    {
    case UNSPEC:
      if (XVECLEN (x4, 0) != 1
          || XINT (x4, 1) != 37)
        return -1;
      x5 = XVECEXP (x4, 0, 0);
      if (x5 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
        return -1;
      switch (GET_MODE (operands[0]))
        {
        case E_SImode:
          if (!memory_operand (operands[0], E_SImode)
              || !(
#line 20173 "../../gcc/config/i386/i386.md"
(!TARGET_X32 && !TARGET_INDIRECT_BRANCH_REGISTER) && 
#line 1403 "../../gcc/config/i386/i386.md"
(word_mode == SImode)))
            return -1;
          return 1470; /* *sibcall_memory */

        case E_DImode:
          if (!memory_operand (operands[0], E_DImode)
              || !(
#line 20173 "../../gcc/config/i386/i386.md"
(!TARGET_X32 && !TARGET_INDIRECT_BRANCH_REGISTER) && 
#line 1403 "../../gcc/config/i386/i386.md"
(word_mode == DImode)))
            return -1;
          return 1471; /* *sibcall_memory */

        default:
          return -1;
        }

    case SET:
      x6 = XEXP (x4, 1);
      if (pattern821 (x6) != 0)
        return -1;
      x7 = XEXP (x4, 0);
      if (GET_CODE (x7) != REG
          || REGNO (x7) != 7
          || GET_MODE (x7) != E_SImode)
        return -1;
      x8 = XEXP (x6, 1);
      operands[2] = x8;
      if (!immediate_operand (operands[2], E_SImode))
        return -1;
      if (call_insn_operand (operands[0], E_SImode)
          && 
#line 20226 "../../gcc/config/i386/i386.md"
(!TARGET_64BIT && !SIBLING_CALL_P (insn)))
        return 1472; /* *call_pop */
      if (!sibcall_insn_operand (operands[0], E_SImode)
          || !
#line 20236 "../../gcc/config/i386/i386.md"
(!TARGET_64BIT && SIBLING_CALL_P (insn)))
        return -1;
      return 1473; /* *sibcall_pop */

    default:
      return -1;
    }
}

 int
recog_425 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12, x13, x14, x15, x16;
  int res ATTRIBUTE_UNUSED;
  if (pattern226 (x1) != 0)
    return -1;
  x2 = XVECEXP (x1, 0, 2);
  if (GET_CODE (x2) != SET)
    return -1;
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) != PLUS)
    return -1;
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) != CONST_INT)
    return -1;
  x5 = XVECEXP (x1, 0, 0);
  x6 = XEXP (x5, 0);
  x7 = XEXP (x6, 0);
  operands[2] = x7;
  x8 = XEXP (x5, 1);
  x9 = XEXP (x8, 0);
  operands[3] = x9;
  x10 = XVECEXP (x1, 0, 1);
  x11 = XEXP (x10, 0);
  operands[0] = x11;
  x12 = XEXP (x2, 0);
  operands[1] = x12;
  x13 = XEXP (x10, 1);
  x14 = XEXP (x13, 0);
  if (!rtx_equal_p (x14, operands[2]))
    return -1;
  x15 = XEXP (x3, 0);
  if (!rtx_equal_p (x15, operands[3]))
    return -1;
  x16 = XEXP (x13, 1);
  switch (XWINT (x16, 0))
    {
    case 8L:
      if (XWINT (x4, 0) != 8L)
        return -1;
      switch (pattern1660 (x1, 
E_DImode))
        {
        case 0:
          if (!(
#line 25475 "../../gcc/config/i386/i386.md"
(TARGET_64BIT
   && !(fixed_regs[SI_REG] || fixed_regs[DI_REG])
   && ix86_check_no_addr_space (insn)) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode)))
            return -1;
          return 1755; /* *strmovdi_rex_1 */

        case 1:
          if (!(
#line 25475 "../../gcc/config/i386/i386.md"
(TARGET_64BIT
   && !(fixed_regs[SI_REG] || fixed_regs[DI_REG])
   && ix86_check_no_addr_space (insn)) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode)))
            return -1;
          return 1756; /* *strmovdi_rex_1 */

        default:
          return -1;
        }

    case 4L:
      if (XWINT (x4, 0) != 4L)
        return -1;
      switch (pattern1660 (x1, 
E_SImode))
        {
        case 0:
          if (!(
#line 25492 "../../gcc/config/i386/i386.md"
(!(fixed_regs[SI_REG] || fixed_regs[DI_REG])
   && ix86_check_no_addr_space (insn)) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode)))
            return -1;
          return 1757; /* *strmovsi_1 */

        case 1:
          if (!(
#line 25492 "../../gcc/config/i386/i386.md"
(!(fixed_regs[SI_REG] || fixed_regs[DI_REG])
   && ix86_check_no_addr_space (insn)) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode)))
            return -1;
          return 1758; /* *strmovsi_1 */

        default:
          return -1;
        }

    case 2L:
      if (XWINT (x4, 0) != 2L)
        return -1;
      switch (pattern1660 (x1, 
E_HImode))
        {
        case 0:
          if (!(
#line 25508 "../../gcc/config/i386/i386.md"
(!(fixed_regs[SI_REG] || fixed_regs[DI_REG])
   && ix86_check_no_addr_space (insn)) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode)))
            return -1;
          return 1759; /* *strmovhi_1 */

        case 1:
          if (!(
#line 25508 "../../gcc/config/i386/i386.md"
(!(fixed_regs[SI_REG] || fixed_regs[DI_REG])
   && ix86_check_no_addr_space (insn)) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode)))
            return -1;
          return 1760; /* *strmovhi_1 */

        default:
          return -1;
        }

    case 1L:
      if (XWINT (x4, 0) != 1L)
        return -1;
      switch (pattern1660 (x1, 
E_QImode))
        {
        case 0:
          if (!(
#line 25524 "../../gcc/config/i386/i386.md"
(!(fixed_regs[SI_REG] || fixed_regs[DI_REG])
   && ix86_check_no_addr_space (insn)) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode)))
            return -1;
          return 1761; /* *strmovqi_1 */

        case 1:
          if (!(
#line 25524 "../../gcc/config/i386/i386.md"
(!(fixed_regs[SI_REG] || fixed_regs[DI_REG])
   && ix86_check_no_addr_space (insn)) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode)))
            return -1;
          return 1762; /* *strmovqi_1 */

        default:
          return -1;
        }

    default:
      return -1;
    }
}

 int
recog_431 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12, x13, x14, x15;
  int res ATTRIBUTE_UNUSED;
  if (pattern35 (x1) != 0)
    return -1;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  x4 = XEXP (x3, 1);
  x5 = XEXP (x4, 0);
  operands[5] = x5;
  x6 = XVECEXP (x1, 0, 1);
  x7 = XEXP (x6, 0);
  operands[6] = x7;
  x8 = XVECEXP (x1, 0, 2);
  x9 = XEXP (x8, 0);
  operands[3] = x9;
  if (!immediate_operand (operands[3], E_SImode))
    return -1;
  x10 = XVECEXP (x1, 0, 3);
  x11 = XEXP (x10, 0);
  operands[0] = x11;
  x12 = XVECEXP (x1, 0, 4);
  x13 = XEXP (x12, 0);
  operands[1] = x13;
  x14 = XVECEXP (x1, 0, 5);
  x15 = XEXP (x14, 0);
  operands[2] = x15;
  switch (GET_MODE (operands[4]))
    {
    case E_SImode:
      if (pattern1817 (
E_SImode) != 0
          || !(
#line 25887 "../../gcc/config/i386/i386.md"
(!(fixed_regs[CX_REG] || fixed_regs[SI_REG] || fixed_regs[DI_REG])
   && ix86_check_no_addr_space (insn)) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode)))
        return -1;
      return 1783; /* *cmpstrnqi_nz_1 */

    case E_DImode:
      if (pattern1817 (
E_DImode) != 0
          || !(
#line 25887 "../../gcc/config/i386/i386.md"
(!(fixed_regs[CX_REG] || fixed_regs[SI_REG] || fixed_regs[DI_REG])
   && ix86_check_no_addr_space (insn)) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode)))
        return -1;
      return 1784; /* *cmpstrnqi_nz_1 */

    default:
      return -1;
    }
}

 int
recog_432 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12, x13, x14, x15, x16, x17;
  rtx x18, x19;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  if (GET_CODE (x2) != UNSPEC_VOLATILE
      || XVECLEN (x2, 0) != 1)
    return -1;
  x3 = XVECEXP (x2, 0, 0);
  if (x3 != const_int_rtx[MAX_SAVED_CONST_INT + 0]
      || pattern36 (x1) != 0)
    return -1;
  x4 = XVECEXP (x1, 0, 9);
  if (GET_CODE (x4) != CLOBBER)
    return -1;
  x5 = XEXP (x4, 0);
  if (GET_CODE (x5) != REG
      || REGNO (x5) != 28
      || GET_MODE (x5) != E_DImode)
    return -1;
  x6 = XVECEXP (x1, 0, 10);
  if (GET_CODE (x6) != CLOBBER)
    return -1;
  x7 = XEXP (x6, 0);
  if (GET_CODE (x7) != REG
      || REGNO (x7) != 29
      || GET_MODE (x7) != E_DImode)
    return -1;
  x8 = XVECEXP (x1, 0, 11);
  if (GET_CODE (x8) != CLOBBER)
    return -1;
  x9 = XEXP (x8, 0);
  if (GET_CODE (x9) != REG
      || REGNO (x9) != 30
      || GET_MODE (x9) != E_DImode)
    return -1;
  x10 = XVECEXP (x1, 0, 12);
  if (GET_CODE (x10) != CLOBBER)
    return -1;
  x11 = XEXP (x10, 0);
  if (GET_CODE (x11) != REG
      || REGNO (x11) != 31
      || GET_MODE (x11) != E_DImode)
    return -1;
  x12 = XVECEXP (x1, 0, 13);
  if (GET_CODE (x12) != CLOBBER)
    return -1;
  x13 = XEXP (x12, 0);
  if (GET_CODE (x13) != REG
      || REGNO (x13) != 32
      || GET_MODE (x13) != E_DImode)
    return -1;
  x14 = XVECEXP (x1, 0, 14);
  if (GET_CODE (x14) != CLOBBER)
    return -1;
  x15 = XEXP (x14, 0);
  if (GET_CODE (x15) != REG
      || REGNO (x15) != 33
      || GET_MODE (x15) != E_DImode)
    return -1;
  x16 = XVECEXP (x1, 0, 15);
  if (GET_CODE (x16) != CLOBBER)
    return -1;
  x17 = XEXP (x16, 0);
  if (GET_CODE (x17) != REG
      || REGNO (x17) != 34
      || GET_MODE (x17) != E_DImode)
    return -1;
  x18 = XVECEXP (x1, 0, 16);
  if (GET_CODE (x18) != CLOBBER)
    return -1;
  x19 = XEXP (x18, 0);
  if (GET_CODE (x19) != REG
      || REGNO (x19) != 35
      || GET_MODE (x19) != E_DImode)
    return -1;
  switch (XINT (x2, 1))
    {
    case 90:
      if (!
#line 6868 "../../gcc/config/i386/mmx.md"
(TARGET_MMX))
        return -1;
      return 2381; /* *mmx_emms */

    case 91:
      if (!
#line 6869 "../../gcc/config/i386/mmx.md"
(TARGET_3DNOW))
        return -1;
      return 2382; /* *mmx_femms */

    default:
      return -1;
    }
}

 int
recog_434 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  if (GET_CODE (x2) != RETURN)
    return -1;
  x3 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x3) != USE)
    return -1;
  x4 = XVECEXP (x1, 0, 2);
  if (GET_CODE (x4) != SET)
    return -1;
  x5 = XEXP (x4, 1);
  if (GET_CODE (x5) != REG
      || REGNO (x5) != 38
      || pattern722 (x4, 
E_DImode, 
7) != 0)
    return -1;
  x6 = XEXP (x3, 0);
  operands[1] = x6;
  switch (GET_MODE (operands[1]))
    {
    case E_SImode:
      if (!symbol_operand (operands[1], E_SImode)
          || !(
#line 30310 "../../gcc/config/i386/sse.md"
(TARGET_SSE && TARGET_64BIT) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode)))
        return -1;
      return 10145; /* *restore_multiple_and_returnsi */

    case E_DImode:
      if (!symbol_operand (operands[1], E_DImode)
          || !(
#line 30310 "../../gcc/config/i386/sse.md"
(TARGET_SSE && TARGET_64BIT) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode)))
        return -1;
      return 10146; /* *restore_multiple_and_returndi */

    default:
      return -1;
    }
}

 int
recog (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12, x13, x14, x15, x16, x17;
  rtx x18, x19, x20, x21, x22, x23, x24, x25;
  rtx x26, x27;
  int res ATTRIBUTE_UNUSED;
  recog_data.insn = NULL;
  switch (GET_CODE (x1))
    {
    case SET:
      return recog_435 (x1, insn, pnum_clobbers);

    case PARALLEL:
      switch (XVECLEN (x1, 0))
        {
        case 2:
          res = recog_421 (x1, insn, pnum_clobbers);
          if (res >= 0)
            return res;
          break;

        case 3:
          res = recog_428 (x1, insn, pnum_clobbers);
          if (res >= 0)
            return res;
          break;

        case 4:
          res = recog_429 (x1, insn, pnum_clobbers);
          if (res >= 0)
            return res;
          break;

        case 5:
          res = recog_430 (x1, insn, pnum_clobbers);
          if (res >= 0)
            return res;
          break;

        case 6:
          res = recog_431 (x1, insn, pnum_clobbers);
          if (res >= 0)
            return res;
          break;

        case 9:
          if (pattern36 (x1) == 0)
            {
              x2 = XVECEXP (x1, 0, 0);
              switch (GET_CODE (x2))
                {
                case SET:
                  x3 = XEXP (x2, 1);
                  if (GET_CODE (x3) == UNSPEC_VOLATILE
                      && XVECLEN (x3, 0) == 1
                      && XINT (x3, 1) == 40
                      && GET_MODE (x3) == E_BLKmode)
                    {
                      x4 = XVECEXP (x3, 0, 0);
                      if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + 0])
                        {
                          x5 = XEXP (x2, 0);
                          operands[0] = x5;
                          if (memory_operand (operands[0], E_BLKmode)
                              && 
#line 29204 "../../gcc/config/i386/i386.md"
(TARGET_80387))
                            return 1921; /* fnstenv */
                        }
                    }
                  break;

                case UNSPEC_VOLATILE:
                  if (XVECLEN (x2, 0) == 1
                      && XINT (x2, 1) == 41)
                    {
                      x6 = XVECEXP (x2, 0, 0);
                      operands[0] = x6;
                      if (memory_operand (operands[0], E_BLKmode)
                          && 
#line 29222 "../../gcc/config/i386/i386.md"
(TARGET_80387))
                        return 1922; /* fldenv */
                    }
                  break;

                default:
                  break;
                }
            }
          break;

        case 17:
          res = recog_432 (x1, insn, pnum_clobbers);
          if (res >= 0)
            return res;
          break;

        default:
          break;
        }
      if (XVECLEN (x1, 0) >= 1)
        {
          res = recog_433 (x1, insn, pnum_clobbers);
          if (res >= 0)
            return res;
        }
      operands[0] = x1;
      if (XVECLEN (operands[0], 0) >= 3
          && restore_multiple (operands[0], E_VOIDmode))
        {
          res = recog_434 (x1, insn, pnum_clobbers);
          if (res >= 0)
            return res;
        }
      if (XVECLEN (operands[0], 0) < 5
          || !restore_multiple (operands[0], E_VOIDmode))
        return -1;
      x2 = XVECEXP (x1, 0, 0);
      if (GET_CODE (x2) != RETURN)
        return -1;
      x7 = XVECEXP (x1, 0, 1);
      if (GET_CODE (x7) != USE)
        return -1;
      x8 = XVECEXP (x1, 0, 2);
      if (GET_CODE (x8) != SET)
        return -1;
      x9 = XEXP (x8, 1);
      if (GET_CODE (x9) != PLUS
          || GET_MODE (x9) != E_DImode)
        return -1;
      x10 = XEXP (x9, 0);
      if (GET_CODE (x10) != REG
          || REGNO (x10) != 6
          || GET_MODE (x10) != E_DImode)
        return -1;
      x11 = XEXP (x9, 1);
      if (x11 != const_int_rtx[MAX_SAVED_CONST_INT + 8])
        return -1;
      x12 = XEXP (x8, 0);
      if (GET_CODE (x12) != REG
          || REGNO (x12) != 7
          || GET_MODE (x12) != E_DImode)
        return -1;
      x13 = XVECEXP (x1, 0, 3);
      if (GET_CODE (x13) != SET)
        return -1;
      x14 = XEXP (x13, 1);
      if (GET_CODE (x14) != MEM
          || GET_MODE (x14) != E_DImode)
        return -1;
      x15 = XEXP (x14, 0);
      if (GET_CODE (x15) != REG
          || REGNO (x15) != 6
          || GET_MODE (x15) != E_DImode)
        return -1;
      x16 = XEXP (x13, 0);
      if (GET_CODE (x16) != REG
          || REGNO (x16) != 6
          || GET_MODE (x16) != E_DImode)
        return -1;
      x17 = XVECEXP (x1, 0, 4);
      if (GET_CODE (x17) != CLOBBER)
        return -1;
      x18 = XEXP (x17, 0);
      if (GET_CODE (x18) != MEM
          || GET_MODE (x18) != E_BLKmode)
        return -1;
      x19 = XEXP (x18, 0);
      if (GET_CODE (x19) != SCRATCH)
        return -1;
      x20 = XEXP (x7, 0);
      operands[1] = x20;
      switch (GET_MODE (operands[1]))
        {
        case E_SImode:
          if (!symbol_operand (operands[1], E_SImode)
              || !(
#line 30323 "../../gcc/config/i386/sse.md"
(TARGET_SSE && TARGET_64BIT) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode)))
            return -1;
          return 10147; /* *restore_multiple_leave_returnsi */

        case E_DImode:
          if (!symbol_operand (operands[1], E_DImode)
              || !(
#line 30323 "../../gcc/config/i386/sse.md"
(TARGET_SSE && TARGET_64BIT) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode)))
            return -1;
          return 10148; /* *restore_multiple_leave_returndi */

        default:
          return -1;
        }

    case CALL:
      x21 = XEXP (x1, 0);
      if (GET_CODE (x21) != MEM
          || GET_MODE (x21) != E_QImode)
        return -1;
      x22 = XEXP (x21, 0);
      operands[0] = x22;
      x23 = XEXP (x1, 1);
      operands[1] = x23;
      if (call_insn_operand (operands[0], E_SImode)
          && (
#line 20127 "../../gcc/config/i386/i386.md"
(!SIBLING_CALL_P (insn)) && 
#line 1403 "../../gcc/config/i386/i386.md"
(word_mode == SImode)))
        return 1464; /* *call */
      if (call_insn_operand (operands[0], E_DImode)
          && (
#line 20127 "../../gcc/config/i386/i386.md"
(!SIBLING_CALL_P (insn)) && 
#line 1403 "../../gcc/config/i386/i386.md"
(word_mode == DImode)))
        return 1465; /* *call */
      switch (GET_CODE (x22))
        {
        case ZERO_EXTEND:
          if (GET_MODE (x22) == E_DImode)
            {
              x24 = XEXP (x22, 0);
              operands[0] = x24;
              if (GOT_memory_operand (operands[0], E_SImode))
                {
                  operands[1] = x23;
                  if (
#line 20136 "../../gcc/config/i386/i386.md"
(TARGET_X32))
                    return 1466; /* *call_got_x32 */
                }
            }
          break;

        case MEM:
          if (GET_MODE (x22) == E_SImode)
            {
              x24 = XEXP (x22, 0);
              if (GET_CODE (x24) == PLUS
                  && GET_MODE (x24) == E_SImode)
                {
                  x25 = XEXP (x24, 0);
                  operands[0] = x25;
                  if (register_no_elim_operand (operands[0], E_SImode))
                    {
                      x26 = XEXP (x24, 1);
                      operands[1] = x26;
                      if (GOT32_symbol_operand (operands[1], E_SImode))
                        {
                          operands[2] = x23;
                          if (
#line 20151 "../../gcc/config/i386/i386.md"
(!TARGET_MACHO
  && !TARGET_64BIT
  && !TARGET_INDIRECT_BRANCH_REGISTER
  && SIBLING_CALL_P (insn)))
                            return 1467; /* *sibcall_GOT_32 */
                        }
                    }
                }
            }
          break;

        default:
          break;
        }
      operands[0] = x22;
      operands[1] = x23;
      if (sibcall_insn_operand (operands[0], E_SImode)
          && (
#line 20165 "../../gcc/config/i386/i386.md"
(SIBLING_CALL_P (insn)) && 
#line 1403 "../../gcc/config/i386/i386.md"
(word_mode == SImode)))
        return 1468; /* *sibcall */
      if (!sibcall_insn_operand (operands[0], E_DImode)
          || !(
#line 20165 "../../gcc/config/i386/i386.md"
(SIBLING_CALL_P (insn)) && 
#line 1403 "../../gcc/config/i386/i386.md"
(word_mode == DImode)))
        return -1;
      return 1469; /* *sibcall */

    case UNSPEC_VOLATILE:
      return recog_436 (x1, insn, pnum_clobbers);

    case SIMPLE_RETURN:
      if (!
#line 20632 "../../gcc/config/i386/i386.md"
(reload_completed))
        return -1;
      return 1489; /* simple_return_internal */

    case CONST_INT:
      if (XWINT (x1, 0) != 0L)
        return -1;
      return 1495; /* nop */

    case EH_RETURN:
      return 1503; /* eh_return_internal */

    case TRAP_IF:
      x21 = XEXP (x1, 0);
      if (x21 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
        return -1;
      x23 = XEXP (x1, 1);
      if (x23 != const_int_rtx[MAX_SAVED_CONST_INT + 6])
        return -1;
      return 1879; /* trap */

    case PREFETCH:
      x23 = XEXP (x1, 1);
      if (GET_CODE (x23) != CONST_INT)
        return -1;
      x21 = XEXP (x1, 0);
      operands[0] = x21;
      if (!address_operand (operands[0], E_VOIDmode))
        return -1;
      switch (XWINT (x23, 0))
        {
        case 0L:
          x27 = XEXP (x1, 2);
          operands[1] = x27;
          if (const_int_operand (operands[1], E_SImode)
              && 
#line 28824 "../../gcc/config/i386/i386.md"
(TARGET_PREFETCH_SSE))
            return 1881; /* *prefetch_sse */
          break;

        case 2L:
          x27 = XEXP (x1, 2);
          if (x27 == const_int_rtx[MAX_SAVED_CONST_INT + 1]
              && 
#line 28881 "../../gcc/config/i386/i386.md"
(TARGET_MOVRS))
            return 1884; /* *prefetch_rst2 */
          break;

        default:
          break;
        }
      x27 = XEXP (x1, 2);
      if (x27 != const_int_rtx[MAX_SAVED_CONST_INT + 3])
        return -1;
      operands[1] = x23;
      if (!const_int_operand (operands[1], E_SImode)
          || !
#line 28845 "../../gcc/config/i386/i386.md"
(TARGET_3DNOW || TARGET_PRFCHW))
        return -1;
      return 1882; /* *prefetch_3dnow */

    default:
      return -1;
    }
}

 rtx_insn *
split_9 (rtx x1 ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  rtx_insn *res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  operands[0] = x2;
  x3 = XEXP (x1, 1);
  x4 = XEXP (x3, 0);
  operands[1] = x4;
  switch (GET_CODE (operands[1]))
    {
    case CONST_INT:
      switch (pattern582 (x3))
        {
        case 0:
          if (!
#line 18166 "../../gcc/config/i386/i386.md"
((INTVAL (operands[3]) & (GET_MODE_BITSIZE (QImode) - 1))
   == GET_MODE_BITSIZE (QImode) - 1))
            return NULL;
          return gen_split_686 (insn, operands);

        case 1:
          if (!
#line 18166 "../../gcc/config/i386/i386.md"
((INTVAL (operands[3]) & (GET_MODE_BITSIZE (HImode) - 1))
   == GET_MODE_BITSIZE (HImode) - 1))
            return NULL;
          return gen_split_688 (insn, operands);

        case 2:
          if (!
#line 18166 "../../gcc/config/i386/i386.md"
((INTVAL (operands[3]) & (GET_MODE_BITSIZE (SImode) - 1))
   == GET_MODE_BITSIZE (SImode) - 1))
            return NULL;
          return gen_split_690 (insn, operands);

        case 3:
          if (!(
#line 18166 "../../gcc/config/i386/i386.md"
((INTVAL (operands[3]) & (GET_MODE_BITSIZE (DImode) - 1))
   == GET_MODE_BITSIZE (DImode) - 1) && 
#line 1161 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return NULL;
          return gen_split_692 (insn, operands);

        case 4:
          if (!
#line 18239 "../../gcc/config/i386/i386.md"
((INTVAL (operands[3]) & (1 * BITS_PER_UNIT - 1)) == 0))
            return NULL;
          return gen_split_718 (insn, operands);

        case 5:
          if (!
#line 18239 "../../gcc/config/i386/i386.md"
((INTVAL (operands[3]) & (2 * BITS_PER_UNIT - 1)) == 0))
            return NULL;
          return gen_split_720 (insn, operands);

        case 6:
          if (!
#line 18239 "../../gcc/config/i386/i386.md"
((INTVAL (operands[3]) & (4 * BITS_PER_UNIT - 1)) == 0))
            return NULL;
          return gen_split_722 (insn, operands);

        case 7:
          if (!(
#line 18239 "../../gcc/config/i386/i386.md"
((INTVAL (operands[3]) & (8 * BITS_PER_UNIT - 1)) == 0) && 
#line 1161 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return NULL;
          return gen_split_724 (insn, operands);

        case 8:
          if (!
#line 18308 "../../gcc/config/i386/i386.md"
((INTVAL (operands[3]) & (1 * BITS_PER_UNIT - 1)) == 0))
            return NULL;
          return gen_split_750 (insn, operands);

        case 9:
          if (!
#line 18308 "../../gcc/config/i386/i386.md"
((INTVAL (operands[3]) & (2 * BITS_PER_UNIT - 1)) == 0))
            return NULL;
          return gen_split_752 (insn, operands);

        case 10:
          if (!
#line 18308 "../../gcc/config/i386/i386.md"
((INTVAL (operands[3]) & (4 * BITS_PER_UNIT - 1)) == 0))
            return NULL;
          return gen_split_754 (insn, operands);

        case 11:
          if (!(
#line 18308 "../../gcc/config/i386/i386.md"
((INTVAL (operands[3]) & (8 * BITS_PER_UNIT - 1)) == 0) && 
#line 1161 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return NULL;
          return gen_split_756 (insn, operands);

        case 12:
          if (!
#line 18201 "../../gcc/config/i386/i386.md"
((INTVAL (operands[3]) & (GET_MODE_BITSIZE (QImode) - 1))
  == GET_MODE_BITSIZE (QImode) - 1))
            return NULL;
          return gen_split_702 (insn, operands);

        case 13:
          if (!
#line 18201 "../../gcc/config/i386/i386.md"
((INTVAL (operands[3]) & (GET_MODE_BITSIZE (HImode) - 1))
  == GET_MODE_BITSIZE (HImode) - 1))
            return NULL;
          return gen_split_704 (insn, operands);

        case 14:
          if (!
#line 18201 "../../gcc/config/i386/i386.md"
((INTVAL (operands[3]) & (GET_MODE_BITSIZE (SImode) - 1))
  == GET_MODE_BITSIZE (SImode) - 1))
            return NULL;
          return gen_split_706 (insn, operands);

        case 15:
          if (!(
#line 18201 "../../gcc/config/i386/i386.md"
((INTVAL (operands[3]) & (GET_MODE_BITSIZE (DImode) - 1))
  == GET_MODE_BITSIZE (DImode) - 1) && 
#line 1161 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return NULL;
          return gen_split_708 (insn, operands);

        case 16:
          if (!
#line 18271 "../../gcc/config/i386/i386.md"
((INTVAL (operands[3]) & (1 * BITS_PER_UNIT - 1)) == 0))
            return NULL;
          return gen_split_734 (insn, operands);

        case 17:
          if (!
#line 18271 "../../gcc/config/i386/i386.md"
((INTVAL (operands[3]) & (2 * BITS_PER_UNIT - 1)) == 0))
            return NULL;
          return gen_split_736 (insn, operands);

        case 18:
          if (!
#line 18271 "../../gcc/config/i386/i386.md"
((INTVAL (operands[3]) & (4 * BITS_PER_UNIT - 1)) == 0))
            return NULL;
          return gen_split_738 (insn, operands);

        case 19:
          if (!(
#line 18271 "../../gcc/config/i386/i386.md"
((INTVAL (operands[3]) & (8 * BITS_PER_UNIT - 1)) == 0) && 
#line 1161 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return NULL;
          return gen_split_740 (insn, operands);

        case 20:
          if (!
#line 18340 "../../gcc/config/i386/i386.md"
((INTVAL (operands[3]) & (1 * BITS_PER_UNIT - 1)) == 0))
            return NULL;
          return gen_split_766 (insn, operands);

        case 21:
          if (!
#line 18340 "../../gcc/config/i386/i386.md"
((INTVAL (operands[3]) & (2 * BITS_PER_UNIT - 1)) == 0))
            return NULL;
          return gen_split_768 (insn, operands);

        case 22:
          if (!
#line 18340 "../../gcc/config/i386/i386.md"
((INTVAL (operands[3]) & (4 * BITS_PER_UNIT - 1)) == 0))
            return NULL;
          return gen_split_770 (insn, operands);

        case 23:
          if (!(
#line 18340 "../../gcc/config/i386/i386.md"
((INTVAL (operands[3]) & (8 * BITS_PER_UNIT - 1)) == 0) && 
#line 1161 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return NULL;
          return gen_split_772 (insn, operands);

        default:
          return NULL;
        }

    case REG:
    case SUBREG:
    case MEM:
      x5 = XEXP (x3, 1);
      if (GET_CODE (x5) != CONST_INT)
        return NULL;
      switch (XWINT (x5, 0))
        {
        case 32L:
          if (register_operand (operands[0], E_DImode)
              && GET_MODE (x3) == E_DImode
              && register_operand (operands[1], E_DImode)
              && (
#line 18427 "../../gcc/config/i386/i386.md"
(!TARGET_64BIT) && 
#line 18429 "../../gcc/config/i386/i386.md"
( reload_completed)))
            return gen_split_778 (insn, operands);
          break;

        case 64L:
          if (register_operand (operands[0], E_TImode)
              && GET_MODE (x3) == E_TImode
              && register_operand (operands[1], E_TImode)
              && (
#line 18445 "../../gcc/config/i386/i386.md"
(TARGET_64BIT) && 
#line 18447 "../../gcc/config/i386/i386.md"
( reload_completed)))
            return gen_split_780 (insn, operands);
          break;

        default:
          break;
        }
      operands[2] = x5;
      if (!const_int_operand (operands[2], E_QImode))
        return NULL;
      switch (pattern125 (x3))
        {
        case 0:
          if (!
#line 18536 "../../gcc/config/i386/i386.md"
(TARGET_BMI2 && reload_completed && !optimize_function_for_size_p (cfun)
   && !TARGET_APX_NDD))
            return NULL;
          return gen_split_784 (insn, operands);

        case 1:
          if (!(
#line 18536 "../../gcc/config/i386/i386.md"
(TARGET_BMI2 && reload_completed && !optimize_function_for_size_p (cfun)
   && !TARGET_APX_NDD) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return NULL;
          return gen_split_785 (insn, operands);

        default:
          return NULL;
        }

    default:
      return NULL;
    }
}

 rtx_insn *
split_11 (rtx x1 ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  rtx_insn *res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  operands[0] = x2;
  x3 = XEXP (x1, 1);
  x4 = XEXP (x3, 0);
  operands[1] = x4;
  switch (GET_CODE (operands[1]))
    {
    case CONST_INT:
      switch (pattern582 (x3))
        {
        case 0:
          if (!
#line 18166 "../../gcc/config/i386/i386.md"
((INTVAL (operands[3]) & (GET_MODE_BITSIZE (QImode) - 1))
   == GET_MODE_BITSIZE (QImode) - 1))
            return NULL;
          return gen_split_687 (insn, operands);

        case 1:
          if (!
#line 18166 "../../gcc/config/i386/i386.md"
((INTVAL (operands[3]) & (GET_MODE_BITSIZE (HImode) - 1))
   == GET_MODE_BITSIZE (HImode) - 1))
            return NULL;
          return gen_split_689 (insn, operands);

        case 2:
          if (!
#line 18166 "../../gcc/config/i386/i386.md"
((INTVAL (operands[3]) & (GET_MODE_BITSIZE (SImode) - 1))
   == GET_MODE_BITSIZE (SImode) - 1))
            return NULL;
          return gen_split_691 (insn, operands);

        case 3:
          if (!(
#line 18166 "../../gcc/config/i386/i386.md"
((INTVAL (operands[3]) & (GET_MODE_BITSIZE (DImode) - 1))
   == GET_MODE_BITSIZE (DImode) - 1) && 
#line 1161 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return NULL;
          return gen_split_693 (insn, operands);

        case 4:
          if (!
#line 18239 "../../gcc/config/i386/i386.md"
((INTVAL (operands[3]) & (1 * BITS_PER_UNIT - 1)) == 0))
            return NULL;
          return gen_split_719 (insn, operands);

        case 5:
          if (!
#line 18239 "../../gcc/config/i386/i386.md"
((INTVAL (operands[3]) & (2 * BITS_PER_UNIT - 1)) == 0))
            return NULL;
          return gen_split_721 (insn, operands);

        case 6:
          if (!
#line 18239 "../../gcc/config/i386/i386.md"
((INTVAL (operands[3]) & (4 * BITS_PER_UNIT - 1)) == 0))
            return NULL;
          return gen_split_723 (insn, operands);

        case 7:
          if (!(
#line 18239 "../../gcc/config/i386/i386.md"
((INTVAL (operands[3]) & (8 * BITS_PER_UNIT - 1)) == 0) && 
#line 1161 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return NULL;
          return gen_split_725 (insn, operands);

        case 8:
          if (!
#line 18308 "../../gcc/config/i386/i386.md"
((INTVAL (operands[3]) & (1 * BITS_PER_UNIT - 1)) == 0))
            return NULL;
          return gen_split_751 (insn, operands);

        case 9:
          if (!
#line 18308 "../../gcc/config/i386/i386.md"
((INTVAL (operands[3]) & (2 * BITS_PER_UNIT - 1)) == 0))
            return NULL;
          return gen_split_753 (insn, operands);

        case 10:
          if (!
#line 18308 "../../gcc/config/i386/i386.md"
((INTVAL (operands[3]) & (4 * BITS_PER_UNIT - 1)) == 0))
            return NULL;
          return gen_split_755 (insn, operands);

        case 11:
          if (!(
#line 18308 "../../gcc/config/i386/i386.md"
((INTVAL (operands[3]) & (8 * BITS_PER_UNIT - 1)) == 0) && 
#line 1161 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return NULL;
          return gen_split_757 (insn, operands);

        case 12:
          if (!
#line 18201 "../../gcc/config/i386/i386.md"
((INTVAL (operands[3]) & (GET_MODE_BITSIZE (QImode) - 1))
  == GET_MODE_BITSIZE (QImode) - 1))
            return NULL;
          return gen_split_703 (insn, operands);

        case 13:
          if (!
#line 18201 "../../gcc/config/i386/i386.md"
((INTVAL (operands[3]) & (GET_MODE_BITSIZE (HImode) - 1))
  == GET_MODE_BITSIZE (HImode) - 1))
            return NULL;
          return gen_split_705 (insn, operands);

        case 14:
          if (!
#line 18201 "../../gcc/config/i386/i386.md"
((INTVAL (operands[3]) & (GET_MODE_BITSIZE (SImode) - 1))
  == GET_MODE_BITSIZE (SImode) - 1))
            return NULL;
          return gen_split_707 (insn, operands);

        case 15:
          if (!(
#line 18201 "../../gcc/config/i386/i386.md"
((INTVAL (operands[3]) & (GET_MODE_BITSIZE (DImode) - 1))
  == GET_MODE_BITSIZE (DImode) - 1) && 
#line 1161 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return NULL;
          return gen_split_709 (insn, operands);

        case 16:
          if (!
#line 18271 "../../gcc/config/i386/i386.md"
((INTVAL (operands[3]) & (1 * BITS_PER_UNIT - 1)) == 0))
            return NULL;
          return gen_split_735 (insn, operands);

        case 17:
          if (!
#line 18271 "../../gcc/config/i386/i386.md"
((INTVAL (operands[3]) & (2 * BITS_PER_UNIT - 1)) == 0))
            return NULL;
          return gen_split_737 (insn, operands);

        case 18:
          if (!
#line 18271 "../../gcc/config/i386/i386.md"
((INTVAL (operands[3]) & (4 * BITS_PER_UNIT - 1)) == 0))
            return NULL;
          return gen_split_739 (insn, operands);

        case 19:
          if (!(
#line 18271 "../../gcc/config/i386/i386.md"
((INTVAL (operands[3]) & (8 * BITS_PER_UNIT - 1)) == 0) && 
#line 1161 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return NULL;
          return gen_split_741 (insn, operands);

        case 20:
          if (!
#line 18340 "../../gcc/config/i386/i386.md"
((INTVAL (operands[3]) & (1 * BITS_PER_UNIT - 1)) == 0))
            return NULL;
          return gen_split_767 (insn, operands);

        case 21:
          if (!
#line 18340 "../../gcc/config/i386/i386.md"
((INTVAL (operands[3]) & (2 * BITS_PER_UNIT - 1)) == 0))
            return NULL;
          return gen_split_769 (insn, operands);

        case 22:
          if (!
#line 18340 "../../gcc/config/i386/i386.md"
((INTVAL (operands[3]) & (4 * BITS_PER_UNIT - 1)) == 0))
            return NULL;
          return gen_split_771 (insn, operands);

        case 23:
          if (!(
#line 18340 "../../gcc/config/i386/i386.md"
((INTVAL (operands[3]) & (8 * BITS_PER_UNIT - 1)) == 0) && 
#line 1161 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return NULL;
          return gen_split_773 (insn, operands);

        default:
          return NULL;
        }

    case REG:
    case SUBREG:
      x5 = XEXP (x3, 1);
      if (GET_CODE (x5) != CONST_INT)
        return NULL;
      switch (XWINT (x5, 0))
        {
        case 32L:
          if (!register_operand (operands[0], E_DImode)
              || GET_MODE (x3) != E_DImode
              || !register_operand (operands[1], E_DImode)
              || !(
#line 18427 "../../gcc/config/i386/i386.md"
(!TARGET_64BIT) && 
#line 18429 "../../gcc/config/i386/i386.md"
( reload_completed)))
            return NULL;
          return gen_split_779 (insn, operands);

        case 64L:
          if (!register_operand (operands[0], E_TImode)
              || GET_MODE (x3) != E_TImode
              || !register_operand (operands[1], E_TImode)
              || !(
#line 18445 "../../gcc/config/i386/i386.md"
(TARGET_64BIT) && 
#line 18447 "../../gcc/config/i386/i386.md"
( reload_completed)))
            return NULL;
          return gen_split_781 (insn, operands);

        default:
          return NULL;
        }

    default:
      return NULL;
    }
}

 rtx_insn *
split_21 (rtx x1 ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
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
            return gen_split_288 (insn, operands);
          break;

        case 1:
          if ((
#line 12741 "../../gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)) && 
#line 12745 "../../gcc/config/i386/i386.md"
( reload_completed
   && !(rtx_equal_p (operands[0], operands[1])
	|| rtx_equal_p (operands[0], operands[2])))))
            return gen_split_291 (insn, operands);
          break;

        case 2:
          if (nonimmediate_operand (operands[0], E_DImode)
              && nonimmediate_operand (operands[1], E_DImode))
            {
              if (x86_64_hilo_general_operand (operands[2], E_DImode)
                  && ((
#line 13527 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (IOR, DImode, operands, TARGET_APX_NDD)) && 
#line 1235 "../../gcc/config/i386/i386.md"
(!TARGET_64BIT)) && 
#line 13529 "../../gcc/config/i386/i386.md"
( reload_completed)))
                return gen_split_387 (insn, operands);
              if (const_int_operand (operands[2], E_DImode)
                  && (
#line 13633 "../../gcc/config/i386/i386.md"
(TARGET_64BIT && TARGET_USE_BT
   && ix86_binary_operator_ok (IOR, DImode, operands)
   && IN_RANGE (exact_log2 (INTVAL (operands[2])), 31, 63)) && 
#line 13637 "../../gcc/config/i386/i386.md"
( reload_completed)))
                return gen_split_394 (insn, operands);
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
                return gen_split_422 (insn, operands);
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
                return gen_split_428 (insn, operands);
            }
          break;

        case 3:
          if (((
#line 13527 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (IOR, TImode, operands, TARGET_APX_NDD)) && 
#line 1236 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 13529 "../../gcc/config/i386/i386.md"
( reload_completed)))
            return gen_split_389 (insn, operands);
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
            return gen_split_418 (insn, operands);
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
            return gen_split_424 (insn, operands);
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
            return gen_split_420 (insn, operands);
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
            return gen_split_426 (insn, operands);
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
            return gen_split_294 (insn, operands);
          break;

        case 1:
          if ((
#line 12768 "../../gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)) && 
#line 12772 "../../gcc/config/i386/i386.md"
( reload_completed
   && !rtx_equal_p (operands[0], operands[1]))))
            return gen_split_297 (insn, operands);
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
            return gen_split_300 (insn, operands);
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
          return gen_split_303 (insn, operands);

        case 1:
          if (!(
#line 12801 "../../gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)) && 
#line 12803 "../../gcc/config/i386/i386.md"
( reload_completed)))
            return NULL;
          return gen_split_306 (insn, operands);

        case 2:
          if (!((
#line 12801 "../../gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)) && 
#line 1164 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 12803 "../../gcc/config/i386/i386.md"
( reload_completed)))
            return NULL;
          return gen_split_309 (insn, operands);

        case 3:
          if (!
#line 13044 "../../gcc/config/i386/i386.md"
( reload_completed))
            return NULL;
          return gen_split_323 (insn, operands);

        case 4:
          if (!
#line 13044 "../../gcc/config/i386/i386.md"
( reload_completed))
            return NULL;
          return gen_split_326 (insn, operands);

        case 5:
          if (!(
#line 1164 "../../gcc/config/i386/i386.md"
(TARGET_64BIT) && 
#line 13044 "../../gcc/config/i386/i386.md"
( reload_completed)))
            return NULL;
          return gen_split_329 (insn, operands);

        default:
          return NULL;
        }

    case ASHIFT:
      x8 = XEXP (x3, 0);
      operands[0] = x8;
      x6 = XEXP (x5, 0);
      switch (GET_CODE (x6))
        {
        case REG:
        case SUBREG:
        case MEM:
          x9 = XEXP (x4, 1);
          if (GET_CODE (x9) != LSHIFTRT)
            return NULL;
          switch (pattern1242 (x4))
            {
            case 0:
              if (!(
#line 15531 "../../gcc/config/i386/i386.md"
(TARGET_64BIT
   && INTVAL (operands[3]) == 64 - INTVAL (operands[2])
   && ix86_pre_reload_split ()) && 
#line 15535 "../../gcc/config/i386/i386.md"
( 1)))
                return NULL;
              return gen_split_563 (insn, operands);

            case 1:
              if (!(
#line 15763 "../../gcc/config/i386/i386.md"
(INTVAL (operands[3]) == 32 - INTVAL (operands[2])
   && ix86_pre_reload_split ()) && 
#line 15766 "../../gcc/config/i386/i386.md"
( 1)))
                return NULL;
              return gen_split_567 (insn, operands);

            case 2:
              x10 = XEXP (x9, 0);
              operands[1] = x10;
              if (nonimmediate_operand (operands[0], E_DImode))
                {
                  x11 = XEXP (x5, 1);
                  operands[2] = x11;
                  if (rtx_equal_p (x6, operands[0]))
                    {
                      x12 = XEXP (x9, 1);
                      x13 = XEXP (x12, 1);
                      if (rtx_equal_p (x13, operands[2])
                          && (
#line 15584 "../../gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_pre_reload_split ()) && 
#line 15586 "../../gcc/config/i386/i386.md"
( 1)))
                        return gen_split_564 (insn, operands);
                    }
                }
              operands[2] = x10;
              if (!register_operand (operands[0], E_DImode))
                return NULL;
              operands[1] = x6;
              if (!nonimmediate_operand (operands[1], E_DImode))
                return NULL;
              x11 = XEXP (x5, 1);
              operands[3] = x11;
              x12 = XEXP (x9, 1);
              x13 = XEXP (x12, 1);
              if (!rtx_equal_p (x13, operands[3])
                  || !(
#line 15605 "../../gcc/config/i386/i386.md"
(TARGET_APX_NDD
   && ix86_pre_reload_split ()) && 
#line 15608 "../../gcc/config/i386/i386.md"
( 1)))
                return NULL;
              return gen_split_565 (insn, operands);

            case 3:
              x10 = XEXP (x9, 0);
              operands[1] = x10;
              if (nonimmediate_operand (operands[0], E_SImode))
                {
                  x11 = XEXP (x5, 1);
                  operands[2] = x11;
                  if (rtx_equal_p (x6, operands[0]))
                    {
                      x12 = XEXP (x9, 1);
                      x13 = XEXP (x12, 1);
                      if (rtx_equal_p (x13, operands[2])
                          && (
#line 15815 "../../gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_pre_reload_split ()) && 
#line 15817 "../../gcc/config/i386/i386.md"
( 1)))
                        return gen_split_568 (insn, operands);
                    }
                }
              operands[2] = x10;
              if (!register_operand (operands[0], E_SImode))
                return NULL;
              operands[1] = x6;
              if (!nonimmediate_operand (operands[1], E_SImode))
                return NULL;
              x11 = XEXP (x5, 1);
              operands[3] = x11;
              x12 = XEXP (x9, 1);
              x13 = XEXP (x12, 1);
              if (!rtx_equal_p (x13, operands[3])
                  || !(
#line 15836 "../../gcc/config/i386/i386.md"
(TARGET_APX_NDD
   && ix86_pre_reload_split ()) && 
#line 15839 "../../gcc/config/i386/i386.md"
( 1)))
                return NULL;
              return gen_split_569 (insn, operands);

            default:
              return NULL;
            }

        case CONST_INT:
          if (XWINT (x6, 0) != 1L)
            return NULL;
          switch (pattern1058 (x4))
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
              return gen_split_796 (insn, operands);

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
              return gen_split_798 (insn, operands);

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
              return gen_split_800 (insn, operands);

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
              return gen_split_802 (insn, operands);

            default:
              return NULL;
            }

        default:
          return NULL;
        }

    case LSHIFTRT:
      x9 = XEXP (x4, 1);
      if (GET_CODE (x9) != ASHIFT)
        return NULL;
      x8 = XEXP (x3, 0);
      operands[0] = x8;
      switch (pattern1242 (x4))
        {
        case 0:
          if (!(
#line 16916 "../../gcc/config/i386/i386.md"
(TARGET_64BIT
   && INTVAL (operands[3]) == 64 - INTVAL (operands[2])
   && ix86_pre_reload_split ()) && 
#line 16920 "../../gcc/config/i386/i386.md"
( 1)))
            return NULL;
          return gen_split_610 (insn, operands);

        case 1:
          if (!(
#line 17147 "../../gcc/config/i386/i386.md"
(INTVAL (operands[3]) == 32 - INTVAL (operands[2])
   && ix86_pre_reload_split ()) && 
#line 17150 "../../gcc/config/i386/i386.md"
( 1)))
            return NULL;
          return gen_split_614 (insn, operands);

        case 2:
          x10 = XEXP (x9, 0);
          operands[1] = x10;
          if (nonimmediate_operand (operands[0], E_DImode))
            {
              x11 = XEXP (x5, 1);
              operands[2] = x11;
              x6 = XEXP (x5, 0);
              if (rtx_equal_p (x6, operands[0]))
                {
                  x12 = XEXP (x9, 1);
                  x13 = XEXP (x12, 1);
                  if (rtx_equal_p (x13, operands[2])
                      && (
#line 16969 "../../gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_pre_reload_split ()) && 
#line 16971 "../../gcc/config/i386/i386.md"
( 1)))
                    return gen_split_611 (insn, operands);
                }
            }
          operands[2] = x10;
          if (!register_operand (operands[0], E_DImode))
            return NULL;
          x6 = XEXP (x5, 0);
          operands[1] = x6;
          if (!nonimmediate_operand (operands[1], E_DImode))
            return NULL;
          x11 = XEXP (x5, 1);
          operands[3] = x11;
          x12 = XEXP (x9, 1);
          x13 = XEXP (x12, 1);
          if (!rtx_equal_p (x13, operands[2])
              || !(
#line 16990 "../../gcc/config/i386/i386.md"
(TARGET_APX_NDD
  && ix86_pre_reload_split ()) && 
#line 16993 "../../gcc/config/i386/i386.md"
( 1)))
            return NULL;
          return gen_split_612 (insn, operands);

        case 3:
          x10 = XEXP (x9, 0);
          operands[1] = x10;
          if (nonimmediate_operand (operands[0], E_SImode))
            {
              x11 = XEXP (x5, 1);
              operands[2] = x11;
              x6 = XEXP (x5, 0);
              if (rtx_equal_p (x6, operands[0]))
                {
                  x12 = XEXP (x9, 1);
                  x13 = XEXP (x12, 1);
                  if (rtx_equal_p (x13, operands[2])
                      && (
#line 17199 "../../gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_pre_reload_split ()) && 
#line 17201 "../../gcc/config/i386/i386.md"
( 1)))
                    return gen_split_615 (insn, operands);
                }
            }
          operands[2] = x10;
          if (!register_operand (operands[0], E_SImode))
            return NULL;
          x6 = XEXP (x5, 0);
          operands[1] = x6;
          if (!nonimmediate_operand (operands[1], E_SImode))
            return NULL;
          x11 = XEXP (x5, 1);
          operands[3] = x11;
          x12 = XEXP (x9, 1);
          x13 = XEXP (x12, 1);
          if (!rtx_equal_p (x13, operands[3])
              || !(
#line 17220 "../../gcc/config/i386/i386.md"
(TARGET_APX_NDD
   && ix86_pre_reload_split ()) && 
#line 17223 "../../gcc/config/i386/i386.md"
( 1)))
            return NULL;
          return gen_split_616 (insn, operands);

        default:
          return NULL;
        }

    default:
      return NULL;
    }
}

 rtx_insn *
split_33 (rtx x1 ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6;
  rtx_insn *res ATTRIBUTE_UNUSED;
  switch (pattern403 (x1))
    {
    case 0:
      if (!(
#line 18182 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATE, QImode, operands)
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (QImode)-1))
      == GET_MODE_BITSIZE (QImode)-1
   && ix86_pre_reload_split ()) && 
#line 18187 "../../gcc/config/i386/i386.md"
( 1)))
        return NULL;
      return gen_split_694 (insn, operands);

    case 1:
      if (!(
#line 18182 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATE, HImode, operands)
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (HImode)-1))
      == GET_MODE_BITSIZE (HImode)-1
   && ix86_pre_reload_split ()) && 
#line 18187 "../../gcc/config/i386/i386.md"
( 1)))
        return NULL;
      return gen_split_696 (insn, operands);

    case 2:
      if (!(
#line 18182 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATE, SImode, operands)
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (SImode)-1))
      == GET_MODE_BITSIZE (SImode)-1
   && ix86_pre_reload_split ()) && 
#line 18187 "../../gcc/config/i386/i386.md"
( 1)))
        return NULL;
      return gen_split_698 (insn, operands);

    case 3:
      if (!((
#line 18182 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATE, DImode, operands)
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (DImode)-1))
      == GET_MODE_BITSIZE (DImode)-1
   && ix86_pre_reload_split ()) && 
#line 1161 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 18187 "../../gcc/config/i386/i386.md"
( 1)))
        return NULL;
      return gen_split_700 (insn, operands);

    case 4:
      if (!(
#line 18253 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATE, QImode, operands)
   && (INTVAL (operands[3]) & (1 * BITS_PER_UNIT - 1)) == 0
   && ix86_pre_reload_split ()) && 
#line 18257 "../../gcc/config/i386/i386.md"
( 1)))
        return NULL;
      return gen_split_726 (insn, operands);

    case 5:
      if (!(
#line 18253 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATE, HImode, operands)
   && (INTVAL (operands[3]) & (2 * BITS_PER_UNIT - 1)) == 0
   && ix86_pre_reload_split ()) && 
#line 18257 "../../gcc/config/i386/i386.md"
( 1)))
        return NULL;
      return gen_split_728 (insn, operands);

    case 6:
      if (!(
#line 18253 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATE, SImode, operands)
   && (INTVAL (operands[3]) & (4 * BITS_PER_UNIT - 1)) == 0
   && ix86_pre_reload_split ()) && 
#line 18257 "../../gcc/config/i386/i386.md"
( 1)))
        return NULL;
      return gen_split_730 (insn, operands);

    case 7:
      if (!((
#line 18253 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATE, DImode, operands)
   && (INTVAL (operands[3]) & (8 * BITS_PER_UNIT - 1)) == 0
   && ix86_pre_reload_split ()) && 
#line 1161 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 18257 "../../gcc/config/i386/i386.md"
( 1)))
        return NULL;
      return gen_split_732 (insn, operands);

    case 8:
      if (!(
#line 18322 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATE, QImode, operands)
   && (INTVAL (operands[3]) & (1 * BITS_PER_UNIT - 1)) == 0
   && ix86_pre_reload_split ()) && 
#line 18326 "../../gcc/config/i386/i386.md"
( 1)))
        return NULL;
      return gen_split_758 (insn, operands);

    case 9:
      if (!(
#line 18322 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATE, HImode, operands)
   && (INTVAL (operands[3]) & (2 * BITS_PER_UNIT - 1)) == 0
   && ix86_pre_reload_split ()) && 
#line 18326 "../../gcc/config/i386/i386.md"
( 1)))
        return NULL;
      return gen_split_760 (insn, operands);

    case 10:
      if (!(
#line 18322 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATE, SImode, operands)
   && (INTVAL (operands[3]) & (4 * BITS_PER_UNIT - 1)) == 0
   && ix86_pre_reload_split ()) && 
#line 18326 "../../gcc/config/i386/i386.md"
( 1)))
        return NULL;
      return gen_split_762 (insn, operands);

    case 11:
      if (!((
#line 18322 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATE, DImode, operands)
   && (INTVAL (operands[3]) & (8 * BITS_PER_UNIT - 1)) == 0
   && ix86_pre_reload_split ()) && 
#line 1161 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 18326 "../../gcc/config/i386/i386.md"
( 1)))
        return NULL;
      return gen_split_764 (insn, operands);

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
(ix86_binary_operator_ok (ROTATE, QImode, operands)
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (QImode)-1))
      == GET_MODE_BITSIZE (QImode)-1
   && ix86_pre_reload_split ()) && 
#line 18147 "../../gcc/config/i386/i386.md"
( 1)))
            return gen_split_678 (insn, operands);
          break;

        case 1:
          if ((
#line 18142 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATE, HImode, operands)
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (HImode)-1))
      == GET_MODE_BITSIZE (HImode)-1
   && ix86_pre_reload_split ()) && 
#line 18147 "../../gcc/config/i386/i386.md"
( 1)))
            return gen_split_680 (insn, operands);
          break;

        case 2:
          if ((
#line 18142 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATE, SImode, operands)
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (SImode)-1))
      == GET_MODE_BITSIZE (SImode)-1
   && ix86_pre_reload_split ()) && 
#line 18147 "../../gcc/config/i386/i386.md"
( 1)))
            return gen_split_682 (insn, operands);
          break;

        case 3:
          if (((
#line 18142 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATE, DImode, operands)
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (DImode)-1))
      == GET_MODE_BITSIZE (DImode)-1
   && ix86_pre_reload_split ()) && 
#line 1161 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 18147 "../../gcc/config/i386/i386.md"
( 1)))
            return gen_split_684 (insn, operands);
          break;

        case 4:
          if ((
#line 18217 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATE, QImode, operands)
   && (INTVAL (operands[3]) & (1 * BITS_PER_UNIT - 1)) == 0
   && ix86_pre_reload_split ()) && 
#line 18221 "../../gcc/config/i386/i386.md"
( 1)))
            return gen_split_710 (insn, operands);
          break;

        case 5:
          if ((
#line 18217 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATE, HImode, operands)
   && (INTVAL (operands[3]) & (2 * BITS_PER_UNIT - 1)) == 0
   && ix86_pre_reload_split ()) && 
#line 18221 "../../gcc/config/i386/i386.md"
( 1)))
            return gen_split_712 (insn, operands);
          break;

        case 6:
          if ((
#line 18217 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATE, SImode, operands)
   && (INTVAL (operands[3]) & (4 * BITS_PER_UNIT - 1)) == 0
   && ix86_pre_reload_split ()) && 
#line 18221 "../../gcc/config/i386/i386.md"
( 1)))
            return gen_split_714 (insn, operands);
          break;

        case 7:
          if (((
#line 18217 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATE, DImode, operands)
   && (INTVAL (operands[3]) & (8 * BITS_PER_UNIT - 1)) == 0
   && ix86_pre_reload_split ()) && 
#line 1161 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 18221 "../../gcc/config/i386/i386.md"
( 1)))
            return gen_split_716 (insn, operands);
          break;

        case 8:
          if ((
#line 18286 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATE, QImode, operands)
   && (INTVAL (operands[3]) & (1 * BITS_PER_UNIT - 1)) == 0
   && ix86_pre_reload_split ()) && 
#line 18290 "../../gcc/config/i386/i386.md"
( 1)))
            return gen_split_742 (insn, operands);
          break;

        case 9:
          if ((
#line 18286 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATE, HImode, operands)
   && (INTVAL (operands[3]) & (2 * BITS_PER_UNIT - 1)) == 0
   && ix86_pre_reload_split ()) && 
#line 18290 "../../gcc/config/i386/i386.md"
( 1)))
            return gen_split_744 (insn, operands);
          break;

        case 10:
          if ((
#line 18286 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATE, SImode, operands)
   && (INTVAL (operands[3]) & (4 * BITS_PER_UNIT - 1)) == 0
   && ix86_pre_reload_split ()) && 
#line 18290 "../../gcc/config/i386/i386.md"
( 1)))
            return gen_split_746 (insn, operands);
          break;

        case 11:
          if (((
#line 18286 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATE, DImode, operands)
   && (INTVAL (operands[3]) & (8 * BITS_PER_UNIT - 1)) == 0
   && ix86_pre_reload_split ()) && 
#line 1161 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 18290 "../../gcc/config/i386/i386.md"
( 1)))
            return gen_split_748 (insn, operands);
          break;

        case 12:
          x5 = XEXP (x4, 1);
          operands[2] = x5;
          switch (pattern1338 (x4))
            {
            case 0:
              if (
#line 18523 "../../gcc/config/i386/i386.md"
(TARGET_BMI2 && reload_completed && !optimize_function_for_size_p (cfun)))
                return gen_split_782 (insn, operands);
              break;

            case 1:
              if ((
#line 18523 "../../gcc/config/i386/i386.md"
(TARGET_BMI2 && reload_completed && !optimize_function_for_size_p (cfun)) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return gen_split_783 (insn, operands);
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
                return gen_split_794 (insn, operands);
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
          return gen_split_790 (insn, operands);

        case 1:
          if (!(
#line 18690 "../../gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)) && 
#line 18701 "../../gcc/config/i386/i386.md"
( reload_completed
   && !(rtx_equal_p (operands[0], operands[1])))))
            return NULL;
          return gen_split_792 (insn, operands);

        default:
          return NULL;
        }

    default:
      return NULL;
    }
}

 rtx_insn *
split_43 (rtx x1 ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10;
  rtx_insn *res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  switch (GET_CODE (x3))
    {
    case AND:
      x4 = XEXP (x2, 1);
      if (x4 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
        return NULL;
      x5 = XEXP (x1, 0);
      operands[0] = x5;
      if (!flags_reg_operand (operands[0], E_VOIDmode))
        return NULL;
      operands[1] = x2;
      if (!compare_operator (operands[1], E_VOIDmode))
        return NULL;
      x6 = XEXP (x3, 0);
      operands[2] = x6;
      if (!aligned_operand (operands[2], E_HImode))
        return NULL;
      x7 = XEXP (x3, 1);
      operands[3] = x7;
      if (!const_int_operand (operands[3], E_HImode)
          || !
#line 27570 "../../gcc/config/i386/i386.md"
(! TARGET_PARTIAL_REG_STALL && reload_completed
   && ! TARGET_FAST_PREFIX
   && optimize_insn_for_speed_p ()
   /* Ensure that the operand will remain sign-extended immediate.  */
   && ix86_match_ccmode (insn, INTVAL (operands[3]) >= 0 ? CCNOmode : CCZmode)))
        return NULL;
      return gen_split_975 (insn, operands);

    case UNSPEC:
      if (XVECLEN (x3, 0) != 1
          || XINT (x3, 1) != 49
          || GET_MODE (x3) != E_SImode
          || pattern44 (x1, 
E_CCZmode) != 0)
        return NULL;
      x4 = XEXP (x2, 1);
      operands[2] = x4;
      if (!const_int_operand (operands[2], E_VOIDmode))
        return NULL;
      x8 = XVECEXP (x3, 0, 0);
      switch (GET_CODE (x8))
        {
        case EQ:
          x9 = XEXP (x8, 0);
          operands[0] = x9;
          x10 = XEXP (x8, 1);
          operands[1] = x10;
          switch (GET_MODE (x8))
            {
            case E_V32QImode:
              if (!vector_operand (operands[0], E_V32QImode)
                  || !const0_operand (operands[1], E_V32QImode)
                  || !(
#line 22400 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1 && (INTVAL (operands[2]) == (int) (0xffffffff))) && 
#line 630 "../../gcc/config/i386/sse.md"
(TARGET_AVX2)))
                return NULL;
              return gen_split_3449 (insn, operands);

            case E_V16QImode:
              if (!vector_operand (operands[0], E_V16QImode)
                  || !const0_operand (operands[1], E_V16QImode)
                  || !
#line 22400 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1 && (INTVAL (operands[2]) == (int) (0xffff))))
                return NULL;
              return gen_split_3450 (insn, operands);

            default:
              return NULL;
            }

        case VEC_MERGE:
          switch (pattern1262 (x8))
            {
            case 0:
              if (!((
#line 22416 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL && UINTVAL (operands[2]) <= 0xffffffff) && 
#line 630 "../../gcc/config/i386/sse.md"
(TARGET_AVX2)) && 
#line 22418 "../../gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_3451 (insn, operands);

            case 1:
              if (!(
#line 22416 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL && UINTVAL (operands[2]) <= 0xffff) && 
#line 22418 "../../gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_3452 (insn, operands);

            case 2:
              if (!((
#line 22439 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL && (INTVAL (operands[2]) == (int) (0xffffffff))) && 
#line 630 "../../gcc/config/i386/sse.md"
(TARGET_AVX2)) && 
#line 22441 "../../gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_3453 (insn, operands);

            case 3:
              if (!(
#line 22439 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL && (INTVAL (operands[2]) == (int) (0xffff))) && 
#line 22441 "../../gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_3454 (insn, operands);

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
split_47 (rtx x1 ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6;
  rtx_insn *res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) != VEC_SELECT)
    return NULL;
  switch (pattern90 (x1))
    {
    case 0:
      x4 = XEXP (x3, 0);
      operands[1] = x4;
      if (!register_operand (operands[1], E_V2SFmode)
          || pattern975 (x2) != 0
          || !register_operand (operands[0], E_SFmode)
          || GET_MODE (x2) != E_SFmode
          || GET_MODE (x3) != E_SFmode)
        return NULL;
      x5 = XEXP (x2, 1);
      if (GET_MODE (x5) != E_SFmode)
        return NULL;
      x6 = XEXP (x5, 0);
      if (!rtx_equal_p (x6, operands[1])
          || !(
#line 1058 "../../gcc/config/i386/mmx.md"
(TARGET_SSE3 && TARGET_MMX_WITH_SSE && ix86_partial_vec_fp_math
   && ix86_pre_reload_split ()) && 
#line 1061 "../../gcc/config/i386/mmx.md"
( 1)))
        return NULL;
      return gen_split_1019 (insn, operands);

    case 1:
      switch (pattern854 (x2))
        {
        case 0:
          if (!
#line 22620 "../../gcc/config/i386/sse.md"
(TARGET_SSSE3 && reload_completed
   && SSE_REGNO_P (REGNO (operands[0]))))
            return NULL;
          return gen_split_3457 (insn, operands);

        case 1:
          if (!
#line 22707 "../../gcc/config/i386/sse.md"
(TARGET_SSSE3 && reload_completed
   && SSE_REGNO_P (REGNO (operands[0]))))
            return NULL;
          return gen_split_3460 (insn, operands);

        default:
          return NULL;
        }

    default:
      return NULL;
    }
}

 rtx_insn *
split_48 (rtx x1 ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  rtx_insn *res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  x4 = XVECEXP (x3, 0, 0);
  if (GET_CODE (x4) != CONST_INT)
    return NULL;
  x5 = XEXP (x2, 0);
  operands[1] = x5;
  switch (XWINT (x4, 0))
    {
    case 0L:
      switch (GET_MODE (operands[0]))
        {
        case E_SFmode:
          switch (pattern976 (x2))
            {
            case 0:
              if ((
#line 1783 "../../gcc/config/i386/mmx.md"
((TARGET_MMX || TARGET_MMX_WITH_SSE)
   && !(MEM_P (operands[0]) && MEM_P (operands[1]))) && 
#line 1786 "../../gcc/config/i386/mmx.md"
( reload_completed)))
                return gen_split_1022 (insn, operands);
              break;

            case 1:
              if ((
#line 12323 "../../gcc/config/i386/sse.md"
(TARGET_SSE && !(MEM_P (operands[0]) && MEM_P (operands[1]))) && 
#line 12325 "../../gcc/config/i386/sse.md"
( reload_completed)))
                return gen_split_1546 (insn, operands);
              break;

            default:
              break;
            }
          break;

        case E_SImode:
          if (nonimmediate_operand (operands[0], E_SImode)
              && GET_MODE (x2) == E_SImode)
            {
              switch (GET_MODE (operands[1]))
                {
                case E_V2SImode:
                  if (nonimmediate_operand (operands[1], E_V2SImode)
                      && (
#line 5729 "../../gcc/config/i386/mmx.md"
((TARGET_MMX || TARGET_MMX_WITH_SSE)
   && !(MEM_P (operands[0]) && MEM_P (operands[1]))) && 
#line 5732 "../../gcc/config/i386/mmx.md"
( reload_completed)))
                    return gen_split_1108 (insn, operands);
                  break;

                case E_V4SImode:
                  if (register_operand (operands[1], E_V4SImode)
                      && 
#line 21204 "../../gcc/config/i386/sse.md"
(TARGET_SSE && reload_completed))
                    return gen_split_3380 (insn, operands);
                  break;

                default:
                  break;
                }
            }
          break;

        case E_HFmode:
          switch (pattern977 (x2))
            {
            case 0:
              if (((
#line 13232 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && !(MEM_P (operands[0]) && MEM_P (operands[1]))) && 
#line 549 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)) && 
#line 13234 "../../gcc/config/i386/sse.md"
( reload_completed)))
                return gen_split_1569 (insn, operands);
              break;

            case 1:
              if ((
#line 13232 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && !(MEM_P (operands[0]) && MEM_P (operands[1]))) && 
#line 13234 "../../gcc/config/i386/sse.md"
( reload_completed)))
                return gen_split_1570 (insn, operands);
              break;

            case 2:
              if ((
#line 13232 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && !(MEM_P (operands[0]) && MEM_P (operands[1]))) && 
#line 13234 "../../gcc/config/i386/sse.md"
( reload_completed)))
                return gen_split_1571 (insn, operands);
              break;

            default:
              break;
            }
          break;

        case E_BFmode:
          switch (pattern978 (x2))
            {
            case 0:
              if (((
#line 13232 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && !(MEM_P (operands[0]) && MEM_P (operands[1]))) && 
#line 550 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)) && 
#line 13234 "../../gcc/config/i386/sse.md"
( reload_completed)))
                return gen_split_1572 (insn, operands);
              break;

            case 1:
              if ((
#line 13232 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && !(MEM_P (operands[0]) && MEM_P (operands[1]))) && 
#line 13234 "../../gcc/config/i386/sse.md"
( reload_completed)))
                return gen_split_1573 (insn, operands);
              break;

            case 2:
              if ((
#line 13232 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && !(MEM_P (operands[0]) && MEM_P (operands[1]))) && 
#line 13234 "../../gcc/config/i386/sse.md"
( reload_completed)))
                return gen_split_1574 (insn, operands);
              break;

            default:
              break;
            }
          break;

        case E_DFmode:
          if (register_operand (operands[0], E_DFmode)
              && GET_MODE (x2) == E_DFmode
              && nonimmediate_operand (operands[1], E_V2DFmode)
              && 
#line 14670 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && reload_completed))
            return gen_split_3163 (insn, operands);
          break;

        case E_QImode:
          if (memory_operand (operands[0], E_QImode)
              && GET_MODE (x2) == E_QImode
              && register_operand (operands[1], E_V16QImode)
              && ((
#line 21064 "../../gcc/config/i386/sse.md"
(TARGET_SSE2
   && !TARGET_SSE4_1
   && (TARGET_INTER_UNIT_MOVES_FROM_VEC
       || optimize_function_for_speed_p (cfun))
   && ix86_pre_reload_split ()) && 
#line 21057 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1)) && 
#line 21070 "../../gcc/config/i386/sse.md"
( 1)))
            return gen_split_3377 (insn, operands);
          break;

        case E_HImode:
          if (memory_operand (operands[0], E_HImode)
              && GET_MODE (x2) == E_HImode
              && register_operand (operands[1], E_V8HImode)
              && (
#line 21064 "../../gcc/config/i386/sse.md"
(TARGET_SSE2
   && !TARGET_SSE4_1
   && (TARGET_INTER_UNIT_MOVES_FROM_VEC
       || optimize_function_for_speed_p (cfun))
   && ix86_pre_reload_split ()) && 
#line 21070 "../../gcc/config/i386/sse.md"
( 1)))
            return gen_split_3378 (insn, operands);
          break;

        case E_TImode:
          if (nonimmediate_operand (operands[0], E_TImode)
              && GET_MODE (x2) == E_TImode)
            {
              switch (GET_MODE (operands[1]))
                {
                case E_V4TImode:
                  if (register_operand (operands[1], E_V4TImode)
                      && (
#line 21438 "../../gcc/config/i386/sse.md"
(TARGET_AVX
   && reload_completed
   && (TARGET_AVX512VL || !EXT_REX_SSE_REG_P (operands[1]))) && 
#line 21431 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
                    return gen_split_3388 (insn, operands);
                  break;

                case E_V2TImode:
                  if (register_operand (operands[1], E_V2TImode)
                      && 
#line 21438 "../../gcc/config/i386/sse.md"
(TARGET_AVX
   && reload_completed
   && (TARGET_AVX512VL || !EXT_REX_SSE_REG_P (operands[1]))))
                    return gen_split_3389 (insn, operands);
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

    case 1L:
      switch (GET_MODE (operands[0]))
        {
        case E_SFmode:
          if (register_operand (operands[0], E_SFmode)
              && GET_MODE (x2) == E_SFmode
              && memory_operand (operands[1], E_V2SFmode)
              && 
#line 1827 "../../gcc/config/i386/mmx.md"
((TARGET_MMX || TARGET_MMX_WITH_SSE) && reload_completed))
            return gen_split_1023 (insn, operands);
          break;

        case E_SImode:
          if (register_operand (operands[0], E_SImode)
              && GET_MODE (x2) == E_SImode
              && memory_operand (operands[1], E_V2SImode)
              && 
#line 5816 "../../gcc/config/i386/mmx.md"
((TARGET_MMX || TARGET_MMX_WITH_SSE) && reload_completed))
            return gen_split_1110 (insn, operands);
          break;

        case E_DFmode:
          if (register_operand (operands[0], E_DFmode)
              && GET_MODE (x2) == E_DFmode
              && memory_operand (operands[1], E_V2DFmode)
              && 
#line 14617 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && reload_completed))
            return gen_split_3161 (insn, operands);
          break;

        default:
          break;
        }
      break;

    default:
      break;
    }
  operands[2] = x4;
  switch (GET_MODE (operands[0]))
    {
    case E_SFmode:
      if (GET_MODE (x2) != E_SFmode)
        return NULL;
      if (nonimmediate_operand (operands[0], E_SFmode)
          && register_operand (operands[1], E_V4SFmode)
          && const_0_to_3_operand (operands[2], E_SImode)
          && (
#line 12334 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1) && 
#line 12341 "../../gcc/config/i386/sse.md"
( reload_completed && SSE_REG_P (operands[0]))))
        return gen_split_1547 (insn, operands);
      if (!register_operand (operands[0], E_SFmode)
          || !memory_operand (operands[1], E_V4SFmode)
          || !const_0_to_3_operand (operands[2], E_VOIDmode)
          || !(
#line 12377 "../../gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 12379 "../../gcc/config/i386/sse.md"
( reload_completed)))
        return NULL;
      return gen_split_1548 (insn, operands);

    case E_QImode:
      if (!register_operand (operands[0], E_QImode)
          || GET_MODE (x2) != E_QImode
          || !memory_operand (operands[1], E_V16QImode)
          || !const_0_to_15_operand (operands[2], E_VOIDmode)
          || !
#line 21391 "../../gcc/config/i386/sse.md"
(TARGET_SSE && reload_completed))
        return NULL;
      return gen_split_3384 (insn, operands);

    case E_HImode:
      if (!register_operand (operands[0], E_HImode)
          || GET_MODE (x2) != E_HImode
          || !memory_operand (operands[1], E_V8HImode)
          || !const_0_to_7_operand (operands[2], E_VOIDmode)
          || !
#line 21391 "../../gcc/config/i386/sse.md"
(TARGET_SSE && reload_completed))
        return NULL;
      return gen_split_3385 (insn, operands);

    case E_SImode:
      if (!register_operand (operands[0], E_SImode)
          || GET_MODE (x2) != E_SImode
          || !memory_operand (operands[1], E_V4SImode)
          || !const_0_to_3_operand (operands[2], E_VOIDmode)
          || !
#line 21391 "../../gcc/config/i386/sse.md"
(TARGET_SSE && reload_completed))
        return NULL;
      return gen_split_3386 (insn, operands);

    default:
      return NULL;
    }
}

 rtx_insn *
split_56 (rtx x1 ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6;
  rtx_insn *res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  if (XINT (x2, 1) != 164)
    return NULL;
  x3 = XVECEXP (x2, 0, 0);
  operands[1] = x3;
  x4 = XVECEXP (x2, 0, 1);
  operands[2] = x4;
  x5 = XVECEXP (x2, 0, 2);
  operands[3] = x5;
  x6 = XVECEXP (x2, 0, 3);
  operands[4] = x6;
  if (!const_0_to_255_operand (operands[4], E_SImode))
    return NULL;
  switch (GET_MODE (operands[0]))
    {
    case E_V64QImode:
      if (pattern971 (x2, 
E_V64QImode) != 0)
        return NULL;
      if (memory_operand (operands[3], E_V64QImode)
          && (
#line 13699 "../../gcc/config/i386/sse.md"
(!reload_completed && vpternlog_redundant_operand_mask (operands[4]) == 3) && 
#line 332 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
        return gen_split_1577 (insn, operands);
      if (!nonimmediate_operand (operands[3], E_V64QImode)
          || !(
#line 13720 "../../gcc/config/i386/sse.md"
(!reload_completed && vpternlog_redundant_operand_mask (operands[4]) != 0) && 
#line 332 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
        return NULL;
      return gen_split_1601 (insn, operands);

    case E_V32QImode:
      if (pattern971 (x2, 
E_V32QImode) != 0)
        return NULL;
      if (memory_operand (operands[3], E_V32QImode)
          && (
#line 13699 "../../gcc/config/i386/sse.md"
(!reload_completed && vpternlog_redundant_operand_mask (operands[4]) == 3) && 
#line 332 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
        return gen_split_1578 (insn, operands);
      if (!nonimmediate_operand (operands[3], E_V32QImode)
          || !(
#line 13720 "../../gcc/config/i386/sse.md"
(!reload_completed && vpternlog_redundant_operand_mask (operands[4]) != 0) && 
#line 332 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
        return NULL;
      return gen_split_1602 (insn, operands);

    case E_V16QImode:
      if (pattern971 (x2, 
E_V16QImode) != 0)
        return NULL;
      if (memory_operand (operands[3], E_V16QImode)
          && 
#line 13699 "../../gcc/config/i386/sse.md"
(!reload_completed && vpternlog_redundant_operand_mask (operands[4]) == 3))
        return gen_split_1579 (insn, operands);
      if (!nonimmediate_operand (operands[3], E_V16QImode)
          || !
#line 13720 "../../gcc/config/i386/sse.md"
(!reload_completed && vpternlog_redundant_operand_mask (operands[4]) != 0))
        return NULL;
      return gen_split_1603 (insn, operands);

    case E_V32HImode:
      if (pattern971 (x2, 
E_V32HImode) != 0)
        return NULL;
      if (memory_operand (operands[3], E_V32HImode)
          && (
#line 13699 "../../gcc/config/i386/sse.md"
(!reload_completed && vpternlog_redundant_operand_mask (operands[4]) == 3) && 
#line 333 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
        return gen_split_1580 (insn, operands);
      if (!nonimmediate_operand (operands[3], E_V32HImode)
          || !(
#line 13720 "../../gcc/config/i386/sse.md"
(!reload_completed && vpternlog_redundant_operand_mask (operands[4]) != 0) && 
#line 333 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
        return NULL;
      return gen_split_1604 (insn, operands);

    case E_V16HImode:
      if (pattern971 (x2, 
E_V16HImode) != 0)
        return NULL;
      if (memory_operand (operands[3], E_V16HImode)
          && (
#line 13699 "../../gcc/config/i386/sse.md"
(!reload_completed && vpternlog_redundant_operand_mask (operands[4]) == 3) && 
#line 333 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
        return gen_split_1581 (insn, operands);
      if (!nonimmediate_operand (operands[3], E_V16HImode)
          || !(
#line 13720 "../../gcc/config/i386/sse.md"
(!reload_completed && vpternlog_redundant_operand_mask (operands[4]) != 0) && 
#line 333 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
        return NULL;
      return gen_split_1605 (insn, operands);

    case E_V8HImode:
      if (pattern971 (x2, 
E_V8HImode) != 0)
        return NULL;
      if (memory_operand (operands[3], E_V8HImode)
          && 
#line 13699 "../../gcc/config/i386/sse.md"
(!reload_completed && vpternlog_redundant_operand_mask (operands[4]) == 3))
        return gen_split_1582 (insn, operands);
      if (!nonimmediate_operand (operands[3], E_V8HImode)
          || !
#line 13720 "../../gcc/config/i386/sse.md"
(!reload_completed && vpternlog_redundant_operand_mask (operands[4]) != 0))
        return NULL;
      return gen_split_1606 (insn, operands);

    case E_V16SImode:
      if (pattern971 (x2, 
E_V16SImode) != 0)
        return NULL;
      if (memory_operand (operands[3], E_V16SImode)
          && (
#line 13699 "../../gcc/config/i386/sse.md"
(!reload_completed && vpternlog_redundant_operand_mask (operands[4]) == 3) && 
#line 334 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
        return gen_split_1583 (insn, operands);
      if (!nonimmediate_operand (operands[3], E_V16SImode)
          || !(
#line 13720 "../../gcc/config/i386/sse.md"
(!reload_completed && vpternlog_redundant_operand_mask (operands[4]) != 0) && 
#line 334 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
        return NULL;
      return gen_split_1607 (insn, operands);

    case E_V8SImode:
      if (pattern971 (x2, 
E_V8SImode) != 0)
        return NULL;
      if (memory_operand (operands[3], E_V8SImode)
          && (
#line 13699 "../../gcc/config/i386/sse.md"
(!reload_completed && vpternlog_redundant_operand_mask (operands[4]) == 3) && 
#line 334 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
        return gen_split_1584 (insn, operands);
      if (!nonimmediate_operand (operands[3], E_V8SImode)
          || !(
#line 13720 "../../gcc/config/i386/sse.md"
(!reload_completed && vpternlog_redundant_operand_mask (operands[4]) != 0) && 
#line 334 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
        return NULL;
      return gen_split_1608 (insn, operands);

    case E_V4SImode:
      if (pattern971 (x2, 
E_V4SImode) != 0)
        return NULL;
      if (memory_operand (operands[3], E_V4SImode)
          && 
#line 13699 "../../gcc/config/i386/sse.md"
(!reload_completed && vpternlog_redundant_operand_mask (operands[4]) == 3))
        return gen_split_1585 (insn, operands);
      if (!nonimmediate_operand (operands[3], E_V4SImode)
          || !
#line 13720 "../../gcc/config/i386/sse.md"
(!reload_completed && vpternlog_redundant_operand_mask (operands[4]) != 0))
        return NULL;
      return gen_split_1609 (insn, operands);

    case E_V8DImode:
      if (pattern971 (x2, 
E_V8DImode) != 0)
        return NULL;
      if (memory_operand (operands[3], E_V8DImode)
          && (
#line 13699 "../../gcc/config/i386/sse.md"
(!reload_completed && vpternlog_redundant_operand_mask (operands[4]) == 3) && 
#line 335 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
        return gen_split_1586 (insn, operands);
      if (!nonimmediate_operand (operands[3], E_V8DImode)
          || !(
#line 13720 "../../gcc/config/i386/sse.md"
(!reload_completed && vpternlog_redundant_operand_mask (operands[4]) != 0) && 
#line 335 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
        return NULL;
      return gen_split_1610 (insn, operands);

    case E_V4DImode:
      if (pattern971 (x2, 
E_V4DImode) != 0)
        return NULL;
      if (memory_operand (operands[3], E_V4DImode)
          && (
#line 13699 "../../gcc/config/i386/sse.md"
(!reload_completed && vpternlog_redundant_operand_mask (operands[4]) == 3) && 
#line 335 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
        return gen_split_1587 (insn, operands);
      if (!nonimmediate_operand (operands[3], E_V4DImode)
          || !(
#line 13720 "../../gcc/config/i386/sse.md"
(!reload_completed && vpternlog_redundant_operand_mask (operands[4]) != 0) && 
#line 335 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
        return NULL;
      return gen_split_1611 (insn, operands);

    case E_V2DImode:
      if (pattern971 (x2, 
E_V2DImode) != 0)
        return NULL;
      if (memory_operand (operands[3], E_V2DImode)
          && 
#line 13699 "../../gcc/config/i386/sse.md"
(!reload_completed && vpternlog_redundant_operand_mask (operands[4]) == 3))
        return gen_split_1588 (insn, operands);
      if (!nonimmediate_operand (operands[3], E_V2DImode)
          || !
#line 13720 "../../gcc/config/i386/sse.md"
(!reload_completed && vpternlog_redundant_operand_mask (operands[4]) != 0))
        return NULL;
      return gen_split_1612 (insn, operands);

    case E_V32HFmode:
      if (pattern971 (x2, 
E_V32HFmode) != 0)
        return NULL;
      if (memory_operand (operands[3], E_V32HFmode)
          && (
#line 13699 "../../gcc/config/i386/sse.md"
(!reload_completed && vpternlog_redundant_operand_mask (operands[4]) == 3) && 
#line 336 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
        return gen_split_1589 (insn, operands);
      if (!nonimmediate_operand (operands[3], E_V32HFmode)
          || !(
#line 13720 "../../gcc/config/i386/sse.md"
(!reload_completed && vpternlog_redundant_operand_mask (operands[4]) != 0) && 
#line 336 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
        return NULL;
      return gen_split_1613 (insn, operands);

    case E_V16HFmode:
      if (pattern971 (x2, 
E_V16HFmode) != 0)
        return NULL;
      if (memory_operand (operands[3], E_V16HFmode)
          && (
#line 13699 "../../gcc/config/i386/sse.md"
(!reload_completed && vpternlog_redundant_operand_mask (operands[4]) == 3) && 
#line 336 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
        return gen_split_1590 (insn, operands);
      if (!nonimmediate_operand (operands[3], E_V16HFmode)
          || !(
#line 13720 "../../gcc/config/i386/sse.md"
(!reload_completed && vpternlog_redundant_operand_mask (operands[4]) != 0) && 
#line 336 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
        return NULL;
      return gen_split_1614 (insn, operands);

    case E_V8HFmode:
      if (pattern971 (x2, 
E_V8HFmode) != 0)
        return NULL;
      if (memory_operand (operands[3], E_V8HFmode)
          && 
#line 13699 "../../gcc/config/i386/sse.md"
(!reload_completed && vpternlog_redundant_operand_mask (operands[4]) == 3))
        return gen_split_1591 (insn, operands);
      if (!nonimmediate_operand (operands[3], E_V8HFmode)
          || !
#line 13720 "../../gcc/config/i386/sse.md"
(!reload_completed && vpternlog_redundant_operand_mask (operands[4]) != 0))
        return NULL;
      return gen_split_1615 (insn, operands);

    case E_V32BFmode:
      if (pattern971 (x2, 
E_V32BFmode) != 0)
        return NULL;
      if (memory_operand (operands[3], E_V32BFmode)
          && (
#line 13699 "../../gcc/config/i386/sse.md"
(!reload_completed && vpternlog_redundant_operand_mask (operands[4]) == 3) && 
#line 337 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
        return gen_split_1592 (insn, operands);
      if (!nonimmediate_operand (operands[3], E_V32BFmode)
          || !(
#line 13720 "../../gcc/config/i386/sse.md"
(!reload_completed && vpternlog_redundant_operand_mask (operands[4]) != 0) && 
#line 337 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
        return NULL;
      return gen_split_1616 (insn, operands);

    case E_V16BFmode:
      if (pattern971 (x2, 
E_V16BFmode) != 0)
        return NULL;
      if (memory_operand (operands[3], E_V16BFmode)
          && (
#line 13699 "../../gcc/config/i386/sse.md"
(!reload_completed && vpternlog_redundant_operand_mask (operands[4]) == 3) && 
#line 337 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
        return gen_split_1593 (insn, operands);
      if (!nonimmediate_operand (operands[3], E_V16BFmode)
          || !(
#line 13720 "../../gcc/config/i386/sse.md"
(!reload_completed && vpternlog_redundant_operand_mask (operands[4]) != 0) && 
#line 337 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
        return NULL;
      return gen_split_1617 (insn, operands);

    case E_V8BFmode:
      if (pattern971 (x2, 
E_V8BFmode) != 0)
        return NULL;
      if (memory_operand (operands[3], E_V8BFmode)
          && 
#line 13699 "../../gcc/config/i386/sse.md"
(!reload_completed && vpternlog_redundant_operand_mask (operands[4]) == 3))
        return gen_split_1594 (insn, operands);
      if (!nonimmediate_operand (operands[3], E_V8BFmode)
          || !
#line 13720 "../../gcc/config/i386/sse.md"
(!reload_completed && vpternlog_redundant_operand_mask (operands[4]) != 0))
        return NULL;
      return gen_split_1618 (insn, operands);

    case E_V16SFmode:
      if (pattern971 (x2, 
E_V16SFmode) != 0)
        return NULL;
      if (memory_operand (operands[3], E_V16SFmode)
          && (
#line 13699 "../../gcc/config/i386/sse.md"
(!reload_completed && vpternlog_redundant_operand_mask (operands[4]) == 3) && 
#line 338 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
        return gen_split_1595 (insn, operands);
      if (!nonimmediate_operand (operands[3], E_V16SFmode)
          || !(
#line 13720 "../../gcc/config/i386/sse.md"
(!reload_completed && vpternlog_redundant_operand_mask (operands[4]) != 0) && 
#line 338 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
        return NULL;
      return gen_split_1619 (insn, operands);

    case E_V8SFmode:
      if (pattern971 (x2, 
E_V8SFmode) != 0)
        return NULL;
      if (memory_operand (operands[3], E_V8SFmode)
          && (
#line 13699 "../../gcc/config/i386/sse.md"
(!reload_completed && vpternlog_redundant_operand_mask (operands[4]) == 3) && 
#line 338 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
        return gen_split_1596 (insn, operands);
      if (!nonimmediate_operand (operands[3], E_V8SFmode)
          || !(
#line 13720 "../../gcc/config/i386/sse.md"
(!reload_completed && vpternlog_redundant_operand_mask (operands[4]) != 0) && 
#line 338 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
        return NULL;
      return gen_split_1620 (insn, operands);

    case E_V4SFmode:
      if (pattern971 (x2, 
E_V4SFmode) != 0)
        return NULL;
      if (memory_operand (operands[3], E_V4SFmode)
          && 
#line 13699 "../../gcc/config/i386/sse.md"
(!reload_completed && vpternlog_redundant_operand_mask (operands[4]) == 3))
        return gen_split_1597 (insn, operands);
      if (!nonimmediate_operand (operands[3], E_V4SFmode)
          || !
#line 13720 "../../gcc/config/i386/sse.md"
(!reload_completed && vpternlog_redundant_operand_mask (operands[4]) != 0))
        return NULL;
      return gen_split_1621 (insn, operands);

    case E_V8DFmode:
      if (pattern971 (x2, 
E_V8DFmode) != 0)
        return NULL;
      if (memory_operand (operands[3], E_V8DFmode)
          && (
#line 13699 "../../gcc/config/i386/sse.md"
(!reload_completed && vpternlog_redundant_operand_mask (operands[4]) == 3) && 
#line 339 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
        return gen_split_1598 (insn, operands);
      if (!nonimmediate_operand (operands[3], E_V8DFmode)
          || !(
#line 13720 "../../gcc/config/i386/sse.md"
(!reload_completed && vpternlog_redundant_operand_mask (operands[4]) != 0) && 
#line 339 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
        return NULL;
      return gen_split_1622 (insn, operands);

    case E_V4DFmode:
      if (pattern971 (x2, 
E_V4DFmode) != 0)
        return NULL;
      if (memory_operand (operands[3], E_V4DFmode)
          && (
#line 13699 "../../gcc/config/i386/sse.md"
(!reload_completed && vpternlog_redundant_operand_mask (operands[4]) == 3) && 
#line 339 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
        return gen_split_1599 (insn, operands);
      if (!nonimmediate_operand (operands[3], E_V4DFmode)
          || !(
#line 13720 "../../gcc/config/i386/sse.md"
(!reload_completed && vpternlog_redundant_operand_mask (operands[4]) != 0) && 
#line 339 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
        return NULL;
      return gen_split_1623 (insn, operands);

    case E_V2DFmode:
      if (pattern971 (x2, 
E_V2DFmode) != 0)
        return NULL;
      if (memory_operand (operands[3], E_V2DFmode)
          && (
#line 13699 "../../gcc/config/i386/sse.md"
(!reload_completed && vpternlog_redundant_operand_mask (operands[4]) == 3) && 
#line 339 "../../gcc/config/i386/sse.md"
(TARGET_SSE2)))
        return gen_split_1600 (insn, operands);
      if (!nonimmediate_operand (operands[3], E_V2DFmode)
          || !(
#line 13720 "../../gcc/config/i386/sse.md"
(!reload_completed && vpternlog_redundant_operand_mask (operands[4]) != 0) && 
#line 339 "../../gcc/config/i386/sse.md"
(TARGET_SSE2)))
        return NULL;
      return gen_split_1624 (insn, operands);

    default:
      return NULL;
    }
}

 rtx_insn *
split_70 (rtx x1 ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
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
          return gen_split_1991 (insn, operands);

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
          return gen_split_2018 (insn, operands);

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
          return gen_split_2045 (insn, operands);

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
          return gen_split_2072 (insn, operands);

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
          return gen_split_2099 (insn, operands);

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
          return gen_split_2126 (insn, operands);

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
          return gen_split_2153 (insn, operands);

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
          return gen_split_2180 (insn, operands);

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
          return gen_split_2207 (insn, operands);

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
          return gen_split_2234 (insn, operands);

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
          return gen_split_2261 (insn, operands);

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
          return gen_split_2288 (insn, operands);

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
          return gen_split_1994 (insn, operands);

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
          return gen_split_2021 (insn, operands);

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
          return gen_split_2048 (insn, operands);

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
          return gen_split_2075 (insn, operands);

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
          return gen_split_2102 (insn, operands);

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
          return gen_split_2129 (insn, operands);

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
          return gen_split_2156 (insn, operands);

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
          return gen_split_2183 (insn, operands);

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
          return gen_split_2210 (insn, operands);

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
          return gen_split_2237 (insn, operands);

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
          return gen_split_2264 (insn, operands);

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
          return gen_split_2291 (insn, operands);

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
          return gen_split_1997 (insn, operands);

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
          return gen_split_2024 (insn, operands);

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
          return gen_split_2051 (insn, operands);

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
          return gen_split_2078 (insn, operands);

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
          return gen_split_2105 (insn, operands);

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
          return gen_split_2132 (insn, operands);

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
          return gen_split_2159 (insn, operands);

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
          return gen_split_2186 (insn, operands);

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
          return gen_split_2213 (insn, operands);

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
          return gen_split_2240 (insn, operands);

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
          return gen_split_2267 (insn, operands);

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
          return gen_split_2294 (insn, operands);

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
          return gen_split_3059 (insn, operands);

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
          return gen_split_3068 (insn, operands);

        case 38:
          if (!(
#line 13946 "../../gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 13950 "../../gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_3077 (insn, operands);

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
          return gen_split_3086 (insn, operands);

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
          return gen_split_3095 (insn, operands);

        case 41:
          if (!(
#line 13946 "../../gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 13950 "../../gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_3104 (insn, operands);

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
          return gen_split_3113 (insn, operands);

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
          return gen_split_3122 (insn, operands);

        case 44:
          if (!(
#line 13946 "../../gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 13950 "../../gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_3131 (insn, operands);

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
          return gen_split_3140 (insn, operands);

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
          return gen_split_3149 (insn, operands);

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
          return gen_split_3158 (insn, operands);

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
          return gen_split_2639 (insn, operands);

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
          return gen_split_2666 (insn, operands);

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
          return gen_split_2693 (insn, operands);

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
          return gen_split_2720 (insn, operands);

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
          return gen_split_2747 (insn, operands);

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
          return gen_split_2774 (insn, operands);

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
          return gen_split_2801 (insn, operands);

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
          return gen_split_2828 (insn, operands);

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
          return gen_split_2855 (insn, operands);

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
          return gen_split_2882 (insn, operands);

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
          return gen_split_2909 (insn, operands);

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
          return gen_split_2936 (insn, operands);

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
          return gen_split_2642 (insn, operands);

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
          return gen_split_2669 (insn, operands);

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
          return gen_split_2696 (insn, operands);

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
          return gen_split_2723 (insn, operands);

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
          return gen_split_2750 (insn, operands);

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
          return gen_split_2777 (insn, operands);

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
          return gen_split_2804 (insn, operands);

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
          return gen_split_2831 (insn, operands);

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
          return gen_split_2858 (insn, operands);

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
          return gen_split_2885 (insn, operands);

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
          return gen_split_2912 (insn, operands);

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
          return gen_split_2939 (insn, operands);

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
          return gen_split_2645 (insn, operands);

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
          return gen_split_2672 (insn, operands);

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
          return gen_split_2699 (insn, operands);

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
          return gen_split_2726 (insn, operands);

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
          return gen_split_2753 (insn, operands);

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
          return gen_split_2780 (insn, operands);

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
          return gen_split_2807 (insn, operands);

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
          return gen_split_2834 (insn, operands);

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
          return gen_split_2861 (insn, operands);

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
          return gen_split_2888 (insn, operands);

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
          return gen_split_2915 (insn, operands);

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
          return gen_split_2942 (insn, operands);

        default:
          return NULL;
        }

    default:
      return NULL;
    }
}

 rtx_insn *
split_78 (rtx x1 ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11;
  rtx_insn *res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  switch (GET_CODE (x3))
    {
    case MINUS:
      x4 = XEXP (x2, 1);
      if (GET_CODE (x4) != PLUS)
        return NULL;
      operands[6] = x2;
      x5 = XEXP (x3, 0);
      operands[1] = x5;
      x6 = XEXP (x3, 1);
      operands[2] = x6;
      x7 = XEXP (x4, 0);
      operands[3] = x7;
      x8 = XEXP (x4, 1);
      operands[4] = x8;
      x9 = XEXP (x2, 2);
      operands[5] = x9;
      if (!const_int_operand (operands[5], E_VOIDmode))
        return NULL;
      switch (GET_MODE (operands[0]))
        {
        case E_V8SFmode:
          if (pattern1446 (x2, 
E_V8SFmode) != 0
              || !(
#line 3538 "../../gcc/config/i386/sse.md"
(TARGET_SSE3
   && can_create_pseudo_p ()
   && ((rtx_equal_p (operands[1], operands[3])
	&& rtx_equal_p (operands[2], operands[4]))
       || (rtx_equal_p (operands[1], operands[4])
	   && rtx_equal_p (operands[2], operands[3])))) && 
#line 422 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
            return NULL;
          return gen_split_1290 (insn, operands);

        case E_V4SFmode:
          if (pattern1446 (x2, 
E_V4SFmode) != 0
              || !
#line 3538 "../../gcc/config/i386/sse.md"
(TARGET_SSE3
   && can_create_pseudo_p ()
   && ((rtx_equal_p (operands[1], operands[3])
	&& rtx_equal_p (operands[2], operands[4]))
       || (rtx_equal_p (operands[1], operands[4])
	   && rtx_equal_p (operands[2], operands[3])))))
            return NULL;
          return gen_split_1291 (insn, operands);

        case E_V4DFmode:
          if (pattern1446 (x2, 
E_V4DFmode) != 0
              || !(
#line 3538 "../../gcc/config/i386/sse.md"
(TARGET_SSE3
   && can_create_pseudo_p ()
   && ((rtx_equal_p (operands[1], operands[3])
	&& rtx_equal_p (operands[2], operands[4]))
       || (rtx_equal_p (operands[1], operands[4])
	   && rtx_equal_p (operands[2], operands[3])))) && 
#line 423 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
            return NULL;
          return gen_split_1292 (insn, operands);

        case E_V2DFmode:
          if (pattern1446 (x2, 
E_V2DFmode) != 0
              || !(
#line 3538 "../../gcc/config/i386/sse.md"
(TARGET_SSE3
   && can_create_pseudo_p ()
   && ((rtx_equal_p (operands[1], operands[3])
	&& rtx_equal_p (operands[2], operands[4]))
       || (rtx_equal_p (operands[1], operands[4])
	   && rtx_equal_p (operands[2], operands[3])))) && 
#line 423 "../../gcc/config/i386/sse.md"
(TARGET_SSE2)))
            return NULL;
          return gen_split_1293 (insn, operands);

        default:
          return NULL;
        }

    case PLUS:
      x4 = XEXP (x2, 1);
      if (GET_CODE (x4) != MINUS)
        return NULL;
      operands[6] = x2;
      x5 = XEXP (x3, 0);
      operands[1] = x5;
      x6 = XEXP (x3, 1);
      operands[2] = x6;
      x7 = XEXP (x4, 0);
      operands[3] = x7;
      x8 = XEXP (x4, 1);
      operands[4] = x8;
      x9 = XEXP (x2, 2);
      operands[5] = x9;
      if (!const_int_operand (operands[5], E_VOIDmode))
        return NULL;
      switch (GET_MODE (operands[0]))
        {
        case E_V8SFmode:
          if (pattern1447 (x2, 
E_V8SFmode) != 0
              || !(
#line 3560 "../../gcc/config/i386/sse.md"
(TARGET_SSE3
   && can_create_pseudo_p ()
   && ((rtx_equal_p (operands[1], operands[3])
	&& rtx_equal_p (operands[2], operands[4]))
       || (rtx_equal_p (operands[1], operands[4])
	   && rtx_equal_p (operands[2], operands[3])))) && 
#line 422 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
            return NULL;
          return gen_split_1294 (insn, operands);

        case E_V4SFmode:
          if (pattern1447 (x2, 
E_V4SFmode) != 0
              || !
#line 3560 "../../gcc/config/i386/sse.md"
(TARGET_SSE3
   && can_create_pseudo_p ()
   && ((rtx_equal_p (operands[1], operands[3])
	&& rtx_equal_p (operands[2], operands[4]))
       || (rtx_equal_p (operands[1], operands[4])
	   && rtx_equal_p (operands[2], operands[3])))))
            return NULL;
          return gen_split_1295 (insn, operands);

        case E_V4DFmode:
          if (pattern1447 (x2, 
E_V4DFmode) != 0
              || !(
#line 3560 "../../gcc/config/i386/sse.md"
(TARGET_SSE3
   && can_create_pseudo_p ()
   && ((rtx_equal_p (operands[1], operands[3])
	&& rtx_equal_p (operands[2], operands[4]))
       || (rtx_equal_p (operands[1], operands[4])
	   && rtx_equal_p (operands[2], operands[3])))) && 
#line 423 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
            return NULL;
          return gen_split_1296 (insn, operands);

        case E_V2DFmode:
          if (pattern1447 (x2, 
E_V2DFmode) != 0
              || !(
#line 3560 "../../gcc/config/i386/sse.md"
(TARGET_SSE3
   && can_create_pseudo_p ()
   && ((rtx_equal_p (operands[1], operands[3])
	&& rtx_equal_p (operands[2], operands[4]))
       || (rtx_equal_p (operands[1], operands[4])
	   && rtx_equal_p (operands[2], operands[3])))) && 
#line 423 "../../gcc/config/i386/sse.md"
(TARGET_SSE2)))
            return NULL;
          return gen_split_1297 (insn, operands);

        default:
          return NULL;
        }

    case CONST_INT:
    case CONST_DOUBLE:
    case CONST_VECTOR:
    case REG:
    case SUBREG:
    case MEM:
      switch (GET_CODE (x3))
        {
        case REG:
        case SUBREG:
        case MEM:
          res = split_57 (x1, insn);
          if (res != NULL_RTX)
            return res;
          break;

        case CONST_INT:
        case CONST_DOUBLE:
        case CONST_VECTOR:
          switch (pattern315 (x2))
            {
            case 0:
              res = split_58 (x1, insn);
              if (res != NULL_RTX)
                return res;
              break;

            case 1:
              if (vector_all_ones_operand (operands[1], E_V16QImode)
                  && const0_operand (operands[2], E_V16QImode)
                  && (
#line 18120 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()
   && (INTVAL (operands[5]) == 2 || INTVAL (operands[5]) == 5)) && 
#line 18123 "../../gcc/config/i386/sse.md"
( 1)))
                return gen_split_3287 (insn, operands);
              if (const0_operand (operands[1], E_V16QImode)
                  && vector_all_ones_operand (operands[2], E_V16QImode)
                  && (
#line 18178 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()
     /* NE is commutative.  */
   && INTVAL (operands[5]) == 4) && 
#line 18183 "../../gcc/config/i386/sse.md"
( 1)))
                return gen_split_3310 (insn, operands);
              break;

            case 2:
              if (vector_all_ones_operand (operands[1], E_V8HImode)
                  && const0_operand (operands[2], E_V8HImode)
                  && (
#line 18120 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()
   && (INTVAL (operands[5]) == 2 || INTVAL (operands[5]) == 5)) && 
#line 18123 "../../gcc/config/i386/sse.md"
( 1)))
                return gen_split_3289 (insn, operands);
              if (const0_operand (operands[1], E_V8HImode)
                  && vector_all_ones_operand (operands[2], E_V8HImode)
                  && (
#line 18178 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()
     /* NE is commutative.  */
   && INTVAL (operands[5]) == 4) && 
#line 18183 "../../gcc/config/i386/sse.md"
( 1)))
                return gen_split_3311 (insn, operands);
              break;

            case 3:
              if (vector_all_ones_operand (operands[1], E_V4SImode)
                  && const0_operand (operands[2], E_V4SImode)
                  && (
#line 18120 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()
   && (INTVAL (operands[5]) == 2 || INTVAL (operands[5]) == 5)) && 
#line 18123 "../../gcc/config/i386/sse.md"
( 1)))
                return gen_split_3291 (insn, operands);
              if (const0_operand (operands[1], E_V4SImode)
                  && vector_all_ones_operand (operands[2], E_V4SImode)
                  && (
#line 18178 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()
     /* NE is commutative.  */
   && INTVAL (operands[5]) == 4) && 
#line 18183 "../../gcc/config/i386/sse.md"
( 1)))
                return gen_split_3312 (insn, operands);
              break;

            case 4:
              if (vector_all_ones_operand (operands[1], E_V2DImode)
                  && const0_operand (operands[2], E_V2DImode)
                  && (
#line 18120 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()
   && (INTVAL (operands[5]) == 2 || INTVAL (operands[5]) == 5)) && 
#line 18123 "../../gcc/config/i386/sse.md"
( 1)))
                return gen_split_3293 (insn, operands);
              if (const0_operand (operands[1], E_V2DImode)
                  && vector_all_ones_operand (operands[2], E_V2DImode)
                  && (
#line 18178 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()
     /* NE is commutative.  */
   && INTVAL (operands[5]) == 4) && 
#line 18183 "../../gcc/config/i386/sse.md"
( 1)))
                return gen_split_3313 (insn, operands);
              break;

            case 5:
              if (vector_all_ones_operand (operands[1], E_V32QImode)
                  && const0_operand (operands[2], E_V32QImode)
                  && (
#line 18120 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()
   && (INTVAL (operands[5]) == 2 || INTVAL (operands[5]) == 5)) && 
#line 18123 "../../gcc/config/i386/sse.md"
( 1)))
                return gen_split_3295 (insn, operands);
              if (const0_operand (operands[1], E_V32QImode)
                  && vector_all_ones_operand (operands[2], E_V32QImode)
                  && (
#line 18178 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()
     /* NE is commutative.  */
   && INTVAL (operands[5]) == 4) && 
#line 18183 "../../gcc/config/i386/sse.md"
( 1)))
                return gen_split_3314 (insn, operands);
              break;

            case 6:
              if (vector_all_ones_operand (operands[1], E_V16HImode)
                  && const0_operand (operands[2], E_V16HImode)
                  && (
#line 18120 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()
   && (INTVAL (operands[5]) == 2 || INTVAL (operands[5]) == 5)) && 
#line 18123 "../../gcc/config/i386/sse.md"
( 1)))
                return gen_split_3297 (insn, operands);
              if (const0_operand (operands[1], E_V16HImode)
                  && vector_all_ones_operand (operands[2], E_V16HImode)
                  && (
#line 18178 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()
     /* NE is commutative.  */
   && INTVAL (operands[5]) == 4) && 
#line 18183 "../../gcc/config/i386/sse.md"
( 1)))
                return gen_split_3315 (insn, operands);
              break;

            case 7:
              if (vector_all_ones_operand (operands[1], E_V8SImode)
                  && const0_operand (operands[2], E_V8SImode)
                  && (
#line 18120 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()
   && (INTVAL (operands[5]) == 2 || INTVAL (operands[5]) == 5)) && 
#line 18123 "../../gcc/config/i386/sse.md"
( 1)))
                return gen_split_3299 (insn, operands);
              if (const0_operand (operands[1], E_V8SImode)
                  && vector_all_ones_operand (operands[2], E_V8SImode)
                  && (
#line 18178 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()
     /* NE is commutative.  */
   && INTVAL (operands[5]) == 4) && 
#line 18183 "../../gcc/config/i386/sse.md"
( 1)))
                return gen_split_3316 (insn, operands);
              break;

            case 8:
              if (vector_all_ones_operand (operands[1], E_V4DImode)
                  && const0_operand (operands[2], E_V4DImode)
                  && (
#line 18120 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()
   && (INTVAL (operands[5]) == 2 || INTVAL (operands[5]) == 5)) && 
#line 18123 "../../gcc/config/i386/sse.md"
( 1)))
                return gen_split_3301 (insn, operands);
              if (const0_operand (operands[1], E_V4DImode)
                  && vector_all_ones_operand (operands[2], E_V4DImode)
                  && (
#line 18178 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()
     /* NE is commutative.  */
   && INTVAL (operands[5]) == 4) && 
#line 18183 "../../gcc/config/i386/sse.md"
( 1)))
                return gen_split_3317 (insn, operands);
              break;

            case 9:
              if (((
#line 4145 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()) && 
#line 422 "../../gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 4147 "../../gcc/config/i386/sse.md"
( 1)))
                return gen_split_1310 (insn, operands);
              break;

            case 10:
              if ((
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
	   && !MEM_P (operands[4])))) && 
#line 18006 "../../gcc/config/i386/sse.md"
( 1)))
                return gen_split_3278 (insn, operands);
              break;

            case 11:
              if ((
#line 4145 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()) && 
#line 4147 "../../gcc/config/i386/sse.md"
( 1)))
                return gen_split_1311 (insn, operands);
              break;

            case 12:
              if ((
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
	   && !MEM_P (operands[4])))) && 
#line 18006 "../../gcc/config/i386/sse.md"
( 1)))
                return gen_split_3274 (insn, operands);
              break;

            case 13:
              if (((
#line 4145 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()) && 
#line 423 "../../gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 4147 "../../gcc/config/i386/sse.md"
( 1)))
                return gen_split_1312 (insn, operands);
              break;

            case 14:
              if ((
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
	   && !MEM_P (operands[4])))) && 
#line 18006 "../../gcc/config/i386/sse.md"
( 1)))
                return gen_split_3279 (insn, operands);
              break;

            case 15:
              if (((
#line 4145 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()) && 
#line 423 "../../gcc/config/i386/sse.md"
(TARGET_SSE2)) && 
#line 4147 "../../gcc/config/i386/sse.md"
( 1)))
                return gen_split_1313 (insn, operands);
              break;

            case 16:
              if ((
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
	   && !MEM_P (operands[4])))) && 
#line 18006 "../../gcc/config/i386/sse.md"
( 1)))
                return gen_split_3275 (insn, operands);
              break;

            case 17:
              if ((
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
	   && !MEM_P (operands[4])))) && 
#line 18006 "../../gcc/config/i386/sse.md"
( 1)))
                return gen_split_3272 (insn, operands);
              break;

            case 18:
              if ((
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
	   && !MEM_P (operands[4])))) && 
#line 18006 "../../gcc/config/i386/sse.md"
( 1)))
                return gen_split_3273 (insn, operands);
              break;

            case 19:
              if ((
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
	   && !MEM_P (operands[4])))) && 
#line 18006 "../../gcc/config/i386/sse.md"
( 1)))
                return gen_split_3276 (insn, operands);
              break;

            case 20:
              if ((
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
	   && !MEM_P (operands[4])))) && 
#line 18006 "../../gcc/config/i386/sse.md"
( 1)))
                return gen_split_3277 (insn, operands);
              break;

            case 21:
              switch (GET_MODE (operands[0]))
                {
                case E_V16SImode:
                  if (register_operand (operands[0], E_V16SImode)
                      && GET_MODE (x2) == E_V16SImode
                      && register_operand (operands[1], E_HImode))
                    {
                      if (vector_all_ones_operand (operands[2], E_V16SImode)
                          && const0_operand (operands[3], E_V16SImode)
                          && ((
#line 10316 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 501 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)) && 
#line 10320 "../../gcc/config/i386/sse.md"
( !TARGET_AVX512DQ && reload_completed
   && optimize_function_for_speed_p (cfun))))
                        return gen_split_1512 (insn, operands);
                      if (const0_operand (operands[2], E_V16SImode)
                          && vector_all_ones_operand (operands[3], E_V16SImode)
                          && ((
#line 10342 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && ix86_pre_reload_split ()) && 
#line 511 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)) && 
#line 10344 "../../gcc/config/i386/sse.md"
( 1)))
                        return gen_split_1524 (insn, operands);
                    }
                  break;

                case E_V8SImode:
                  if (register_operand (operands[0], E_V8SImode)
                      && GET_MODE (x2) == E_V8SImode
                      && register_operand (operands[1], E_QImode))
                    {
                      if (vector_all_ones_operand (operands[2], E_V8SImode)
                          && const0_operand (operands[3], E_V8SImode)
                          && ((
#line 10316 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 501 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 10320 "../../gcc/config/i386/sse.md"
( !TARGET_AVX512DQ && reload_completed
   && optimize_function_for_speed_p (cfun))))
                        return gen_split_1513 (insn, operands);
                      if (const0_operand (operands[2], E_V8SImode)
                          && vector_all_ones_operand (operands[3], E_V8SImode)
                          && ((
#line 10342 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && ix86_pre_reload_split ()) && 
#line 511 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 10344 "../../gcc/config/i386/sse.md"
( 1)))
                        return gen_split_1525 (insn, operands);
                    }
                  break;

                case E_V4SImode:
                  if (register_operand (operands[0], E_V4SImode)
                      && GET_MODE (x2) == E_V4SImode
                      && register_operand (operands[1], E_QImode))
                    {
                      if (vector_all_ones_operand (operands[2], E_V4SImode)
                          && const0_operand (operands[3], E_V4SImode)
                          && ((
#line 10316 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 501 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 10320 "../../gcc/config/i386/sse.md"
( !TARGET_AVX512DQ && reload_completed
   && optimize_function_for_speed_p (cfun))))
                        return gen_split_1514 (insn, operands);
                      if (const0_operand (operands[2], E_V4SImode)
                          && vector_all_ones_operand (operands[3], E_V4SImode)
                          && ((
#line 10342 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && ix86_pre_reload_split ()) && 
#line 511 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 10344 "../../gcc/config/i386/sse.md"
( 1)))
                        return gen_split_1526 (insn, operands);
                    }
                  break;

                case E_V8DImode:
                  if (register_operand (operands[0], E_V8DImode)
                      && GET_MODE (x2) == E_V8DImode
                      && register_operand (operands[1], E_QImode))
                    {
                      if (vector_all_ones_operand (operands[2], E_V8DImode)
                          && const0_operand (operands[3], E_V8DImode)
                          && ((
#line 10316 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 502 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)) && 
#line 10320 "../../gcc/config/i386/sse.md"
( !TARGET_AVX512DQ && reload_completed
   && optimize_function_for_speed_p (cfun))))
                        return gen_split_1515 (insn, operands);
                      if (const0_operand (operands[2], E_V8DImode)
                          && vector_all_ones_operand (operands[3], E_V8DImode)
                          && ((
#line 10342 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && ix86_pre_reload_split ()) && 
#line 512 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)) && 
#line 10344 "../../gcc/config/i386/sse.md"
( 1)))
                        return gen_split_1527 (insn, operands);
                    }
                  break;

                case E_V4DImode:
                  if (register_operand (operands[0], E_V4DImode)
                      && GET_MODE (x2) == E_V4DImode
                      && register_operand (operands[1], E_QImode))
                    {
                      if (vector_all_ones_operand (operands[2], E_V4DImode)
                          && const0_operand (operands[3], E_V4DImode)
                          && ((
#line 10316 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 502 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 10320 "../../gcc/config/i386/sse.md"
( !TARGET_AVX512DQ && reload_completed
   && optimize_function_for_speed_p (cfun))))
                        return gen_split_1516 (insn, operands);
                      if (const0_operand (operands[2], E_V4DImode)
                          && vector_all_ones_operand (operands[3], E_V4DImode)
                          && ((
#line 10342 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && ix86_pre_reload_split ()) && 
#line 512 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 10344 "../../gcc/config/i386/sse.md"
( 1)))
                        return gen_split_1528 (insn, operands);
                    }
                  break;

                case E_V2DImode:
                  if (register_operand (operands[0], E_V2DImode)
                      && GET_MODE (x2) == E_V2DImode
                      && register_operand (operands[1], E_QImode))
                    {
                      if (vector_all_ones_operand (operands[2], E_V2DImode)
                          && const0_operand (operands[3], E_V2DImode)
                          && ((
#line 10316 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 502 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 10320 "../../gcc/config/i386/sse.md"
( !TARGET_AVX512DQ && reload_completed
   && optimize_function_for_speed_p (cfun))))
                        return gen_split_1517 (insn, operands);
                      if (const0_operand (operands[2], E_V2DImode)
                          && vector_all_ones_operand (operands[3], E_V2DImode)
                          && ((
#line 10342 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && ix86_pre_reload_split ()) && 
#line 512 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 10344 "../../gcc/config/i386/sse.md"
( 1)))
                        return gen_split_1529 (insn, operands);
                    }
                  break;

                case E_V64QImode:
                  if (pattern1186 (x2, 
E_DImode, 
E_V64QImode) == 0
                      && ((
#line 10342 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && ix86_pre_reload_split ()) && 
#line 505 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512)) && 
#line 10344 "../../gcc/config/i386/sse.md"
( 1)))
                    return gen_split_1518 (insn, operands);
                  break;

                case E_V32QImode:
                  if (pattern1186 (x2, 
E_SImode, 
E_V32QImode) == 0
                      && ((
#line 10342 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && ix86_pre_reload_split ()) && 
#line 506 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL && TARGET_AVX512BW)) && 
#line 10344 "../../gcc/config/i386/sse.md"
( 1)))
                    return gen_split_1519 (insn, operands);
                  break;

                case E_V16QImode:
                  if (pattern1186 (x2, 
E_HImode, 
E_V16QImode) == 0
                      && ((
#line 10342 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && ix86_pre_reload_split ()) && 
#line 507 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL && TARGET_AVX512BW)) && 
#line 10344 "../../gcc/config/i386/sse.md"
( 1)))
                    return gen_split_1520 (insn, operands);
                  break;

                case E_V32HImode:
                  if (pattern1186 (x2, 
E_SImode, 
E_V32HImode) == 0
                      && ((
#line 10342 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && ix86_pre_reload_split ()) && 
#line 508 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512)) && 
#line 10344 "../../gcc/config/i386/sse.md"
( 1)))
                    return gen_split_1521 (insn, operands);
                  break;

                case E_V16HImode:
                  if (pattern1186 (x2, 
E_HImode, 
E_V16HImode) == 0
                      && ((
#line 10342 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && ix86_pre_reload_split ()) && 
#line 509 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL && TARGET_AVX512BW)) && 
#line 10344 "../../gcc/config/i386/sse.md"
( 1)))
                    return gen_split_1522 (insn, operands);
                  break;

                case E_V8HImode:
                  if (pattern1186 (x2, 
E_QImode, 
E_V8HImode) == 0
                      && ((
#line 10342 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && ix86_pre_reload_split ()) && 
#line 510 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL && TARGET_AVX512BW)) && 
#line 10344 "../../gcc/config/i386/sse.md"
( 1)))
                    return gen_split_1523 (insn, operands);
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
          if (!((
#line 4172 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()) && 
#line 422 "../../gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 4174 "../../gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1314 (insn, operands);

        case 1:
          if (!(
#line 4172 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()) && 
#line 4174 "../../gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1315 (insn, operands);

        case 2:
          if (!((
#line 4172 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()) && 
#line 423 "../../gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 4174 "../../gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1316 (insn, operands);

        case 3:
          if (!((
#line 4172 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()) && 
#line 423 "../../gcc/config/i386/sse.md"
(TARGET_SSE2)) && 
#line 4174 "../../gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1317 (insn, operands);

        case 4:
          if (!((
#line 4193 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()) && 
#line 422 "../../gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 4195 "../../gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1318 (insn, operands);

        case 5:
          if (!(
#line 4193 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()) && 
#line 4195 "../../gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1319 (insn, operands);

        case 6:
          if (!((
#line 4193 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()) && 
#line 423 "../../gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 4195 "../../gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1320 (insn, operands);

        case 7:
          if (!((
#line 4193 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()) && 
#line 423 "../../gcc/config/i386/sse.md"
(TARGET_SSE2)) && 
#line 4195 "../../gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1321 (insn, operands);

        default:
          return NULL;
        }

    case VEC_DUPLICATE:
      x5 = XEXP (x3, 0);
      switch (GET_CODE (x5))
        {
        case VEC_SELECT:
          x10 = XEXP (x5, 1);
          if (GET_CODE (x10) != PARALLEL
              || XVECLEN (x10, 0) != 1)
            return NULL;
          x11 = XVECEXP (x10, 0, 0);
          if (x11 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
            return NULL;
          x9 = XEXP (x2, 2);
          if (x9 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
            return NULL;
          switch (pattern1010 (x2))
            {
            case 0:
              if (!(
#line 12037 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_pre_reload_split ()) && 
#line 12039 "../../gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_1530 (insn, operands);

            case 1:
              if (!(
#line 12037 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_pre_reload_split ()) && 
#line 12039 "../../gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_1531 (insn, operands);

            case 2:
              if (!(
#line 12037 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_pre_reload_split ()) && 
#line 12039 "../../gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_1532 (insn, operands);

            default:
              return NULL;
            }

        case ZERO_EXTEND:
          switch (pattern310 (x2))
            {
            case 0:
              if (!((
#line 12077 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && ix86_pre_reload_split ()) && 
#line 804 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)) && 
#line 12079 "../../gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_1533 (insn, operands);

            case 1:
              if (!(
#line 12077 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && ix86_pre_reload_split ()) && 
#line 12079 "../../gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_1534 (insn, operands);

            case 2:
              if (!(
#line 12077 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && ix86_pre_reload_split ()) && 
#line 12079 "../../gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_1535 (insn, operands);

            case 3:
              if (!((
#line 12077 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && ix86_pre_reload_split ()) && 
#line 805 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)) && 
#line 12079 "../../gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_1536 (insn, operands);

            case 4:
              if (!((
#line 12191 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_pre_reload_split ()) && 
#line 615 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)) && 
#line 12193 "../../gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_1540 (insn, operands);

            case 5:
              if (!(
#line 12077 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && ix86_pre_reload_split ()) && 
#line 12079 "../../gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_1537 (insn, operands);

            case 6:
              if (!((
#line 12191 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_pre_reload_split ()) && 
#line 615 "../../gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 12193 "../../gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_1541 (insn, operands);

            case 7:
              if (!(
#line 12077 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && ix86_pre_reload_split ()) && 
#line 12079 "../../gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_1538 (insn, operands);

            case 8:
              if (!(
#line 12191 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_pre_reload_split ()) && 
#line 12193 "../../gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_1542 (insn, operands);

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
        case LABEL_REF:
        case SYMBOL_REF:
        case HIGH:
          x4 = XEXP (x2, 1);
          switch (GET_CODE (x4))
            {
            case SUBREG:
            case MEM:
              if (!rtx_equal_p (x4, operands[0]))
                return NULL;
              x9 = XEXP (x2, 2);
              if (x9 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
                return NULL;
              operands[1] = x5;
              switch (GET_MODE (operands[0]))
                {
                case E_V4SImode:
                  if (pattern1187 (x2, 
E_SImode, 
E_V4SImode) != 0
                      || !
#line 12267 "../../gcc/config/i386/sse.md"
(TARGET_SSE && reload_completed))
                    return NULL;
                  return gen_split_1544 (insn, operands);

                case E_V4SFmode:
                  if (pattern1187 (x2, 
E_SFmode, 
E_V4SFmode) != 0
                      || !
#line 12267 "../../gcc/config/i386/sse.md"
(TARGET_SSE && reload_completed))
                    return NULL;
                  return gen_split_1545 (insn, operands);

                default:
                  return NULL;
                }

            case REG:
              operands[1] = x4;
              operands[2] = x5;
              x9 = XEXP (x2, 2);
              operands[3] = x9;
              if (!const_int_operand (operands[3], E_SImode))
                return NULL;
              switch (GET_MODE (operands[0]))
                {
                case E_V8HImode:
                  if (pattern1062 (x2, 
E_V8HImode, 
E_HImode) != 0
                      || !
#line 19949 "../../gcc/config/i386/sse.md"
(TARGET_AVX2 && reload_completed
   && INTVAL (operands[3]) > 1
   && ((unsigned) exact_log2 (INTVAL (operands[3]))
       < GET_MODE_NUNITS (V8HImode))))
                    return NULL;
                  return gen_split_3374 (insn, operands);

                case E_V8HFmode:
                  if (pattern1062 (x2, 
E_V8HFmode, 
E_HFmode) != 0
                      || !
#line 19949 "../../gcc/config/i386/sse.md"
(TARGET_AVX2 && reload_completed
   && INTVAL (operands[3]) > 1
   && ((unsigned) exact_log2 (INTVAL (operands[3]))
       < GET_MODE_NUNITS (V8HFmode))))
                    return NULL;
                  return gen_split_3375 (insn, operands);

                case E_V8BFmode:
                  if (pattern1062 (x2, 
E_V8BFmode, 
E_BFmode) != 0
                      || !
#line 19949 "../../gcc/config/i386/sse.md"
(TARGET_AVX2 && reload_completed
   && INTVAL (operands[3]) > 1
   && ((unsigned) exact_log2 (INTVAL (operands[3]))
       < GET_MODE_NUNITS (V8BFmode))))
                    return NULL;
                  return gen_split_3376 (insn, operands);

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

 rtx_insn *
peephole2_1 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pmatch_len_ ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx_insn *res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  if (GET_CODE (x2) != REG
      || REGNO (x2) != 17)
    return NULL;
  x3 = XEXP (x1, 1);
  x4 = XEXP (x3, 0);
  switch (GET_CODE (x4))
    {
    case NEG:
      if (GET_MODE (x4) != E_QImode)
        return NULL;
      x5 = XEXP (x4, 0);
      if (GET_CODE (x5) != LTU
          || GET_MODE (x5) != E_QImode)
        return NULL;
      x6 = XEXP (x5, 0);
      if (GET_CODE (x6) != REG
          || REGNO (x6) != 17
          || GET_MODE (x6) != E_CCCmode)
        return NULL;
      x7 = XEXP (x5, 1);
      if (x7 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
        return NULL;
      x8 = XEXP (x3, 1);
      if (GET_CODE (x8) != GEU
          || GET_MODE (x8) != E_QImode
          || pattern1448 (x8) != 0
          || GET_MODE (x2) != E_CCCmode
          || GET_MODE (x3) != E_CCCmode
          || !
#line 2162 "../../gcc/config/i386/i386.md"
(TARGET_SLOW_STC && !optimize_insn_for_size_p ()))
        return NULL;
      *pmatch_len_ = 0;
      return gen_peephole2_2 (insn, operands);

    case AND:
      x8 = XEXP (x3, 1);
      if (x8 != const_int_rtx[MAX_SAVED_CONST_INT + 0]
          || GET_MODE (x2) != E_CCZmode
          || GET_MODE (x3) != E_CCZmode)
        return NULL;
      x5 = XEXP (x4, 0);
      operands[0] = x5;
      x9 = XEXP (x4, 1);
      operands[1] = x9;
      if (!const_int_operand (operands[1], E_VOIDmode))
        return NULL;
      switch (GET_MODE (x4))
        {
        case E_HImode:
          if (!memory_operand (operands[0], E_HImode)
              || !
#line 12414 "../../gcc/config/i386/i386.md"
(!TARGET_PARTIAL_MEMORY_READ_STALL && !MEM_VOLATILE_P (operands[0])))
            return NULL;
          *pmatch_len_ = 0;
          return gen_peephole2_124 (insn, operands);

        case E_SImode:
          if (!memory_operand (operands[0], E_SImode)
              || !
#line 12414 "../../gcc/config/i386/i386.md"
(!TARGET_PARTIAL_MEMORY_READ_STALL && !MEM_VOLATILE_P (operands[0])))
            return NULL;
          *pmatch_len_ = 0;
          return gen_peephole2_125 (insn, operands);

        case E_DImode:
          if (!memory_operand (operands[0], E_DImode)
              || !(
#line 12414 "../../gcc/config/i386/i386.md"
(!TARGET_PARTIAL_MEMORY_READ_STALL && !MEM_VOLATILE_P (operands[0])) && 
#line 1164 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return NULL;
          *pmatch_len_ = 0;
          return gen_peephole2_126 (insn, operands);

        default:
          return NULL;
        }

    default:
      return NULL;
    }
}

 rtx_insn *
peephole2_2 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pmatch_len_ ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4;
  rtx_insn *res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  operands[0] = x2;
  x3 = XEXP (x1, 1);
  x4 = XEXP (x3, 0);
  operands[1] = x4;
  switch (GET_MODE (operands[0]))
    {
    case E_SImode:
      switch (pattern409 (x3, 
E_SImode))
        {
        case 0:
          if (!
#line 5965 "../../gcc/config/i386/i386.md"
(TARGET_AVOID_VECTOR_DECODE
   && SSE_FLOAT_MODE_P (SFmode)
   && optimize_insn_for_speed_p ()))
            return NULL;
          *pmatch_len_ = 0;
          return gen_peephole2_56 (insn, operands);

        case 1:
          if (!
#line 5965 "../../gcc/config/i386/i386.md"
(TARGET_AVOID_VECTOR_DECODE
   && SSE_FLOAT_MODE_P (DFmode)
   && optimize_insn_for_speed_p ()))
            return NULL;
          *pmatch_len_ = 0;
          return gen_peephole2_58 (insn, operands);

        default:
          return NULL;
        }

    case E_DImode:
      switch (pattern409 (x3, 
E_DImode))
        {
        case 0:
          if (!(
#line 5965 "../../gcc/config/i386/i386.md"
(TARGET_AVOID_VECTOR_DECODE
   && SSE_FLOAT_MODE_P (SFmode)
   && optimize_insn_for_speed_p ()) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return NULL;
          *pmatch_len_ = 0;
          return gen_peephole2_57 (insn, operands);

        case 1:
          if (!(
#line 5965 "../../gcc/config/i386/i386.md"
(TARGET_AVOID_VECTOR_DECODE
   && SSE_FLOAT_MODE_P (DFmode)
   && optimize_insn_for_speed_p ()) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return NULL;
          *pmatch_len_ = 0;
          return gen_peephole2_59 (insn, operands);

        default:
          return NULL;
        }

    default:
      return NULL;
    }
}

 rtx_insn *
peephole2_3 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pmatch_len_ ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10;
  rtx_insn *res ATTRIBUTE_UNUSED;
  if (peep2_current_count < 2
      || peep2_current_count < 3)
    return NULL;
  x2 = XEXP (x1, 1);
  operands[1] = x2;
  if (!bt_comparison_operator (operands[1], E_QImode))
    return NULL;
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) != REG
      || REGNO (x3) != 17
      || GET_MODE (x3) != E_CCZmode)
    return NULL;
  x4 = XEXP (x2, 1);
  if (x4 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
    return NULL;
  x5 = XEXP (x1, 0);
  operands[0] = x5;
  if (!nonimmediate_operand (operands[0], E_QImode))
    return NULL;
  x6 = PATTERN (peep2_next_insn (1));
  if (pattern1256 (x6, 
0) != 0)
    return NULL;
  x7 = PATTERN (peep2_next_insn (2));
  x8 = XEXP (x7, 1);
  x9 = XEXP (x8, 0);
  operands[2] = x9;
  if (pattern1777 (x7) != 0)
    return NULL;
  x10 = XEXP (x8, 1);
  operands[3] = x10;
  if (!
#line 19651 "../../gcc/config/i386/i386.md"
(peep2_regno_dead_p (3, FLAGS_REG)))
    return NULL;
  *pmatch_len_ = 2;
  return gen_peephole2_168 (insn, operands);
}

 rtx_insn *
peephole2_5 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pmatch_len_ ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7;
  rtx_insn *res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  switch (GET_CODE (x2))
    {
    case REG:
      if (peep2_current_count < 2)
        return NULL;
      operands[0] = x2;
      x3 = PATTERN (peep2_next_insn (1));
      if (GET_CODE (x3) != SET)
        return NULL;
      x4 = XEXP (x3, 0);
      if (GET_CODE (x4) != STRICT_LOW_PART)
        return NULL;
      x5 = XEXP (x4, 0);
      operands[1] = x5;
      x6 = XEXP (x3, 1);
      operands[2] = x6;
      switch (GET_MODE (operands[0]))
        {
        case E_SImode:
          if (!general_reg_operand (operands[0], E_SImode))
            return NULL;
          switch (pattern1341 ())
            {
            case 0:
              if (!
#line 4948 "../../gcc/config/i386/i386.md"
(REGNO (operands[0]) == REGNO (operands[1])
   && (SImode != SImode
       || !TARGET_ZERO_EXTEND_WITH_AND
       || !optimize_function_for_speed_p (cfun))))
                return NULL;
              *pmatch_len_ = 1;
              return gen_peephole2_45 (insn, operands);

            case 1:
              if (!
#line 4948 "../../gcc/config/i386/i386.md"
(REGNO (operands[0]) == REGNO (operands[1])
   && (SImode != SImode
       || !TARGET_ZERO_EXTEND_WITH_AND
       || !optimize_function_for_speed_p (cfun))))
                return NULL;
              *pmatch_len_ = 1;
              return gen_peephole2_47 (insn, operands);

            default:
              return NULL;
            }

        case E_DImode:
          if (!general_reg_operand (operands[0], E_DImode))
            return NULL;
          switch (pattern1341 ())
            {
            case 0:
              if (!(
#line 4948 "../../gcc/config/i386/i386.md"
(REGNO (operands[0]) == REGNO (operands[1])
   && (DImode != SImode
       || !TARGET_ZERO_EXTEND_WITH_AND
       || !optimize_function_for_speed_p (cfun))) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return NULL;
              *pmatch_len_ = 1;
              return gen_peephole2_46 (insn, operands);

            case 1:
              if (!(
#line 4948 "../../gcc/config/i386/i386.md"
(REGNO (operands[0]) == REGNO (operands[1])
   && (DImode != SImode
       || !TARGET_ZERO_EXTEND_WITH_AND
       || !optimize_function_for_speed_p (cfun))) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return NULL;
              *pmatch_len_ = 1;
              return gen_peephole2_48 (insn, operands);

            default:
              return NULL;
            }

        default:
          return NULL;
        }

    case SUBREG:
    case MEM:
      operands[0] = x2;
      switch (GET_MODE (operands[0]))
        {
        case E_QImode:
          if (!memory_operand (operands[0], E_QImode)
              || !
#line 27661 "../../gcc/config/i386/i386.md"
(optimize_insn_for_speed_p ()
   && ((QImode == HImode
       && TARGET_LCP_STALL)
       || (!TARGET_USE_MOV0
          && TARGET_SPLIT_LONG_MOVES
          && get_attr_length (insn) >= ix86_cur_cost ()->large_insn))
   && peep2_regno_dead_p (0, FLAGS_REG)))
            return NULL;
          *pmatch_len_ = 0;
          return gen_peephole2_256 (insn, operands);

        case E_HImode:
          if (!memory_operand (operands[0], E_HImode)
              || !
#line 27661 "../../gcc/config/i386/i386.md"
(optimize_insn_for_speed_p ()
   && ((HImode == HImode
       && TARGET_LCP_STALL)
       || (!TARGET_USE_MOV0
          && TARGET_SPLIT_LONG_MOVES
          && get_attr_length (insn) >= ix86_cur_cost ()->large_insn))
   && peep2_regno_dead_p (0, FLAGS_REG)))
            return NULL;
          *pmatch_len_ = 0;
          return gen_peephole2_257 (insn, operands);

        default:
          return NULL;
        }

    case STRICT_LOW_PART:
      x7 = XEXP (x2, 0);
      operands[0] = x7;
      switch (GET_MODE (operands[0]))
        {
        case E_QImode:
          if (!general_reg_operand (operands[0], E_QImode)
              || !
#line 28348 "../../gcc/config/i386/i386.md"
((! TARGET_USE_MOV0 || optimize_insn_for_size_p ())
   && peep2_regno_dead_p (0, FLAGS_REG)))
            return NULL;
          *pmatch_len_ = 0;
          return gen_peephole2_333 (insn, operands);

        case E_HImode:
          if (!general_reg_operand (operands[0], E_HImode)
              || !
#line 28348 "../../gcc/config/i386/i386.md"
((! TARGET_USE_MOV0 || optimize_insn_for_size_p ())
   && peep2_regno_dead_p (0, FLAGS_REG)))
            return NULL;
          *pmatch_len_ = 0;
          return gen_peephole2_334 (insn, operands);

        default:
          return NULL;
        }

    default:
      return NULL;
    }
}

 rtx_insn *
peephole2_7 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pmatch_len_ ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7;
  rtx_insn *res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  operands[1] = x2;
  x3 = XEXP (x1, 0);
  operands[0] = x3;
  switch (GET_CODE (operands[0]))
    {
    case REG:
    case SUBREG:
      if (peep2_current_count < 2
          || peep2_current_count < 3)
        return NULL;
      x4 = PATTERN (peep2_next_insn (1));
      if (GET_CODE (x4) != PARALLEL
          || pattern842 (x4) != 0)
        return NULL;
      switch (GET_MODE (operands[0]))
        {
        case E_QImode:
          if (!memory_operand (operands[1], E_QImode))
            return NULL;
          if (general_reg_operand (operands[0], E_QImode))
            {
              switch (pattern1534 (x4, 
E_QImode))
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
                      res = gen_peephole2_68 (insn, operands);
                      if (res != NULL_RTX)
                        return res;
                    }
                  break;

                case 1:
                  if (
#line 9987 "../../gcc/config/i386/i386.md"
((TARGET_READ_MODIFY_WRITE || optimize_insn_for_size_p ())
   && peep2_reg_dead_p (3, operands[0])
   && !reg_overlap_mentioned_p (operands[0], operands[1])
   && !reg_overlap_mentioned_p (operands[0], operands[2])))
                    {
                      *pmatch_len_ = 2;
                      res = gen_peephole2_108 (insn, operands);
                      if (res != NULL_RTX)
                        return res;
                    }
                  break;

                case 2:
                  if (
#line 8818 "../../gcc/config/i386/i386.md"
((TARGET_READ_MODIFY_WRITE || optimize_insn_for_size_p ())
   && peep2_reg_dead_p (3, operands[0])
   && !reg_overlap_mentioned_p (operands[0], operands[1])
   && !reg_overlap_mentioned_p (operands[0], operands[2])))
                    {
                      *pmatch_len_ = 2;
                      res = gen_peephole2_76 (insn, operands);
                      if (res != NULL_RTX)
                        return res;
                    }
                  break;

                case 3:
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
                      res = gen_peephole2_80 (insn, operands);
                      if (res != NULL_RTX)
                        return res;
                    }
                  break;

                case 4:
                  if (
#line 9302 "../../gcc/config/i386/i386.md"
((TARGET_READ_MODIFY_WRITE || optimize_insn_for_size_p ())
   && peep2_reg_dead_p (3, operands[0])
   && !reg_overlap_mentioned_p (operands[0], operands[1])
   && !reg_overlap_mentioned_p (operands[0], operands[2])))
                    {
                      *pmatch_len_ = 2;
                      res = gen_peephole2_90 (insn, operands);
                      if (res != NULL_RTX)
                        return res;
                    }
                  break;

                case 5:
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
                      res = gen_peephole2_94 (insn, operands);
                      if (res != NULL_RTX)
                        return res;
                    }
                  break;

                default:
                  break;
                }
            }
          if (!register_operand (operands[0], E_QImode))
            return NULL;
          switch (pattern1535 (x4, 
E_QImode))
            {
            case 0:
              x5 = PATTERN (peep2_next_insn (2));
              x6 = XEXP (x5, 0);
              if (rtx_equal_p (x6, operands[1])
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
                  res = gen_peephole2_297 (insn, operands);
                  if (res != NULL_RTX)
                    return res;
                }
              if (peep2_current_count < 4
                  || pattern1800 (x6, 
E_QImode) != 0
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
              return gen_peephole2_321 (insn, operands);

            case 1:
              x5 = PATTERN (peep2_next_insn (2));
              x6 = XEXP (x5, 0);
              if (rtx_equal_p (x6, operands[1]))
                {
                  x7 = PATTERN (peep2_next_insn (3));
                  if (pattern1798 (x7) == 0
                      && 
#line 28089 "../../gcc/config/i386/i386.md"
((TARGET_READ_MODIFY_WRITE || optimize_insn_for_size_p ())
   && REGNO (operands[0]) == REGNO (operands[4])
   && peep2_reg_dead_p (4, operands[0])
   && (QImode != QImode
       || immediate_operand (operands[2], SImode)
       || any_QIreg_operand (operands[2], SImode))
   && !reg_overlap_mentioned_p (operands[0], operands[1])
   && !reg_overlap_mentioned_p (operands[0], operands[2])
   && ix86_match_ccmode (peep2_next_insn (3),
			 (GET_CODE (operands[3]) == PLUS
			  || GET_CODE (operands[3]) == MINUS)
			 ? CCGOCmode : CCNOmode)))
                    {
                      *pmatch_len_ = 3;
                      res = gen_peephole2_313 (insn, operands);
                      if (res != NULL_RTX)
                        return res;
                    }
                }
              if (peep2_current_count < 5
                  || pattern1842 (x6, 
E_QImode) != 0
                  || !
#line 28166 "../../gcc/config/i386/i386.md"
((TARGET_READ_MODIFY_WRITE || optimize_insn_for_size_p ())
   && REGNO (operands[0]) == REGNO (operands[4])
   && peep2_reg_dead_p (3, operands[0])
   && peep2_reg_dead_p (5, operands[5])
   && (QImode != QImode
       || immediate_operand (operands[2], SImode)
       || any_QIreg_operand (operands[2], SImode))
   && !reg_overlap_mentioned_p (operands[0], operands[1])
   && !reg_overlap_mentioned_p (operands[0], operands[2])
   && !reg_overlap_mentioned_p (operands[5], operands[1])
   && ix86_match_ccmode (peep2_next_insn (4),
			 (GET_CODE (operands[3]) == PLUS
			  || GET_CODE (operands[3]) == MINUS)
			 ? CCGOCmode : CCNOmode)))
                return NULL;
              *pmatch_len_ = 4;
              return gen_peephole2_319 (insn, operands);

            default:
              return NULL;
            }

        case E_HImode:
          if (!memory_operand (operands[1], E_HImode))
            return NULL;
          if (general_reg_operand (operands[0], E_HImode))
            {
              switch (pattern1534 (x4, 
E_HImode))
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
                      res = gen_peephole2_69 (insn, operands);
                      if (res != NULL_RTX)
                        return res;
                    }
                  break;

                case 1:
                  if (
#line 9987 "../../gcc/config/i386/i386.md"
((TARGET_READ_MODIFY_WRITE || optimize_insn_for_size_p ())
   && peep2_reg_dead_p (3, operands[0])
   && !reg_overlap_mentioned_p (operands[0], operands[1])
   && !reg_overlap_mentioned_p (operands[0], operands[2])))
                    {
                      *pmatch_len_ = 2;
                      res = gen_peephole2_109 (insn, operands);
                      if (res != NULL_RTX)
                        return res;
                    }
                  break;

                case 2:
                  if (
#line 8818 "../../gcc/config/i386/i386.md"
((TARGET_READ_MODIFY_WRITE || optimize_insn_for_size_p ())
   && peep2_reg_dead_p (3, operands[0])
   && !reg_overlap_mentioned_p (operands[0], operands[1])
   && !reg_overlap_mentioned_p (operands[0], operands[2])))
                    {
                      *pmatch_len_ = 2;
                      res = gen_peephole2_77 (insn, operands);
                      if (res != NULL_RTX)
                        return res;
                    }
                  break;

                case 3:
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
                      res = gen_peephole2_81 (insn, operands);
                      if (res != NULL_RTX)
                        return res;
                    }
                  break;

                case 4:
                  if (
#line 9302 "../../gcc/config/i386/i386.md"
((TARGET_READ_MODIFY_WRITE || optimize_insn_for_size_p ())
   && peep2_reg_dead_p (3, operands[0])
   && !reg_overlap_mentioned_p (operands[0], operands[1])
   && !reg_overlap_mentioned_p (operands[0], operands[2])))
                    {
                      *pmatch_len_ = 2;
                      res = gen_peephole2_91 (insn, operands);
                      if (res != NULL_RTX)
                        return res;
                    }
                  break;

                case 5:
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
                      res = gen_peephole2_95 (insn, operands);
                      if (res != NULL_RTX)
                        return res;
                    }
                  break;

                default:
                  break;
                }
            }
          if (!register_operand (operands[0], E_HImode))
            return NULL;
          switch (pattern1535 (x4, 
E_HImode))
            {
            case 0:
              x5 = PATTERN (peep2_next_insn (2));
              x6 = XEXP (x5, 0);
              if (rtx_equal_p (x6, operands[1])
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
                  res = gen_peephole2_298 (insn, operands);
                  if (res != NULL_RTX)
                    return res;
                }
              if (peep2_current_count < 4
                  || pattern1800 (x6, 
E_HImode) != 0
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
              return gen_peephole2_322 (insn, operands);

            case 1:
              x5 = PATTERN (peep2_next_insn (2));
              x6 = XEXP (x5, 0);
              if (rtx_equal_p (x6, operands[1]))
                {
                  x7 = PATTERN (peep2_next_insn (3));
                  if (pattern1798 (x7) == 0
                      && 
#line 28089 "../../gcc/config/i386/i386.md"
((TARGET_READ_MODIFY_WRITE || optimize_insn_for_size_p ())
   && REGNO (operands[0]) == REGNO (operands[4])
   && peep2_reg_dead_p (4, operands[0])
   && (HImode != QImode
       || immediate_operand (operands[2], SImode)
       || any_QIreg_operand (operands[2], SImode))
   && !reg_overlap_mentioned_p (operands[0], operands[1])
   && !reg_overlap_mentioned_p (operands[0], operands[2])
   && ix86_match_ccmode (peep2_next_insn (3),
			 (GET_CODE (operands[3]) == PLUS
			  || GET_CODE (operands[3]) == MINUS)
			 ? CCGOCmode : CCNOmode)))
                    {
                      *pmatch_len_ = 3;
                      res = gen_peephole2_314 (insn, operands);
                      if (res != NULL_RTX)
                        return res;
                    }
                }
              if (peep2_current_count < 5
                  || pattern1842 (x6, 
E_HImode) != 0
                  || !
#line 28166 "../../gcc/config/i386/i386.md"
((TARGET_READ_MODIFY_WRITE || optimize_insn_for_size_p ())
   && REGNO (operands[0]) == REGNO (operands[4])
   && peep2_reg_dead_p (3, operands[0])
   && peep2_reg_dead_p (5, operands[5])
   && (HImode != QImode
       || immediate_operand (operands[2], SImode)
       || any_QIreg_operand (operands[2], SImode))
   && !reg_overlap_mentioned_p (operands[0], operands[1])
   && !reg_overlap_mentioned_p (operands[0], operands[2])
   && !reg_overlap_mentioned_p (operands[5], operands[1])
   && ix86_match_ccmode (peep2_next_insn (4),
			 (GET_CODE (operands[3]) == PLUS
			  || GET_CODE (operands[3]) == MINUS)
			 ? CCGOCmode : CCNOmode)))
                return NULL;
              *pmatch_len_ = 4;
              return gen_peephole2_320 (insn, operands);

            default:
              return NULL;
            }

        default:
          return NULL;
        }

    case MEM:
      switch (GET_MODE (operands[0]))
        {
        case E_QImode:
          if (!push_operand (operands[0], E_QImode)
              || !memory_operand (operands[1], E_QImode)
              || !
#line 27639 "../../gcc/config/i386/i386.md"
(!(TARGET_PUSH_MEMORY || optimize_insn_for_size_p ())
   && !RTX_FRAME_RELATED_P (peep2_next_insn (0))))
            return NULL;
          *pmatch_len_ = 0;
          return gen_peephole2_251 (insn, operands);

        case E_HImode:
          if (!push_operand (operands[0], E_HImode)
              || !memory_operand (operands[1], E_HImode)
              || !
#line 27639 "../../gcc/config/i386/i386.md"
(!(TARGET_PUSH_MEMORY || optimize_insn_for_size_p ())
   && !RTX_FRAME_RELATED_P (peep2_next_insn (0))))
            return NULL;
          *pmatch_len_ = 0;
          return gen_peephole2_252 (insn, operands);

        case E_SFmode:
          if (!push_operand (operands[0], E_SFmode)
              || !memory_operand (operands[1], E_SFmode)
              || !
#line 27650 "../../gcc/config/i386/i386.md"
(!(TARGET_PUSH_MEMORY || optimize_insn_for_size_p ())
   && !RTX_FRAME_RELATED_P (peep2_next_insn (0))))
            return NULL;
          *pmatch_len_ = 0;
          return gen_peephole2_255 (insn, operands);

        default:
          return NULL;
        }

    default:
      return NULL;
    }
}

 rtx_insn *
peephole2_17 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pmatch_len_ ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  rtx_insn *res ATTRIBUTE_UNUSED;
  x2 = PATTERN (peep2_next_insn (1));
  if (GET_CODE (x2) != SET)
    return NULL;
  x3 = XEXP (x2, 0);
  if (!general_reg_operand (x3, E_DImode))
    return NULL;
  operands[8] = x3;
  switch (pattern961 (x1, 
E_DImode, 
E_TImode))
    {
    case 0:
      if ((
#line 9660 "../../gcc/config/i386/i386.md"
((TARGET_READ_MODIFY_WRITE || optimize_insn_for_size_p ())
   && peep2_reg_dead_p (4, operands[0])
   && peep2_reg_dead_p (3, operands[2])
   && !reg_overlap_mentioned_p (operands[0], operands[1])
   && !reg_overlap_mentioned_p (operands[2], operands[1])
   && !reg_overlap_mentioned_p (operands[6], operands[9])
   && (rtx_equal_p (operands[6], operands[0])
       ? (rtx_equal_p (operands[7], operands[1])
	  && rtx_equal_p (operands[8], operands[2]))
       : (rtx_equal_p (operands[8], operands[0])
	  && rtx_equal_p (operands[9], operands[1])
	  && rtx_equal_p (operands[6], operands[2])))) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
        {
          *pmatch_len_ = 3;
          res = gen_peephole2_101 (insn, operands);
          if (res != NULL_RTX)
            return res;
        }
      break;

    case 1:
      if ((
#line 9715 "../../gcc/config/i386/i386.md"
((TARGET_READ_MODIFY_WRITE || optimize_insn_for_size_p ())
   && peep2_reg_dead_p (6, operands[0])
   && peep2_reg_dead_p (3, operands[2])
   && !reg_overlap_mentioned_p (operands[0], operands[1])
   && !reg_overlap_mentioned_p (operands[2], operands[1])
   && !reg_overlap_mentioned_p (operands[6], operands[9])
   && !reg_overlap_mentioned_p (operands[0], operands[10])
   && !reg_overlap_mentioned_p (operands[10], operands[1])
   && !reg_overlap_mentioned_p (operands[0], operands[11])
   && !reg_overlap_mentioned_p (operands[11], operands[1])
   && (rtx_equal_p (operands[6], operands[0])
       ? (rtx_equal_p (operands[7], operands[1])
	  && rtx_equal_p (operands[8], operands[2]))
       : (rtx_equal_p (operands[8], operands[0])
	  && rtx_equal_p (operands[9], operands[1])
	  && rtx_equal_p (operands[6], operands[2])))) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
        {
          *pmatch_len_ = 5;
          res = gen_peephole2_103 (insn, operands);
          if (res != NULL_RTX)
            return res;
        }
      break;

    default:
      break;
    }
  operands[0] = x3;
  if (pattern964 (x1, 
E_DImode) != 0
      || !(
#line 26384 "../../gcc/config/i386/i386.md"
(TARGET_CMOVE
  && REGNO (operands[2]) != REGNO (operands[0])
  && REGNO (operands[2]) != REGNO (operands[1])
  && peep2_reg_dead_p (2, operands[1])
  && peep2_reg_dead_p (4, operands[2])
  && !reg_overlap_mentioned_p (operands[0], operands[3])
  && !reg_mentioned_p (operands[2], operands[6])) && 
#line 1164 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
    return NULL;
  *pmatch_len_ = 3;
  return gen_peephole2_208 (insn, operands);
}

 rtx_insn *
peephole2_21 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pmatch_len_ ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6;
  rtx_insn *res ATTRIBUTE_UNUSED;
  x2 = PATTERN (peep2_next_insn (1));
  if (GET_CODE (x2) != SET)
    return NULL;
  x3 = XEXP (x2, 1);
  if (!binary_fp_operator (x3, E_VOIDmode))
    return NULL;
  operands[2] = x3;
  x4 = XEXP (x2, 0);
  if (!rtx_equal_p (x4, operands[0]))
    return NULL;
  x5 = XEXP (x3, 0);
  switch (GET_CODE (x5))
    {
    case REG:
      if (!rtx_equal_p (x5, operands[0]))
        return NULL;
      x6 = XEXP (x3, 1);
      operands[3] = x6;
      if (!memory_operand (operands[3], E_VOIDmode)
          || !
#line 26692 "../../gcc/config/i386/i386.md"
(REGNO (operands[0]) != REGNO (operands[1])))
        return NULL;
      *pmatch_len_ = 1;
      return gen_peephole2_211 (insn, operands);

    case SUBREG:
    case MEM:
      operands[3] = x5;
      if (!memory_operand (operands[3], E_VOIDmode))
        return NULL;
      x6 = XEXP (x3, 1);
      if (!rtx_equal_p (x6, operands[0])
          || !
#line 26714 "../../gcc/config/i386/i386.md"
(REGNO (operands[0]) != REGNO (operands[1])))
        return NULL;
      *pmatch_len_ = 1;
      return gen_peephole2_212 (insn, operands);

    default:
      return NULL;
    }
}

 rtx_insn *
peephole2_22 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pmatch_len_ ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12;
  rtx_insn *res ATTRIBUTE_UNUSED;
  if (peep2_current_count >= 3)
    {
      res = peephole2_20 (x1, insn, pmatch_len_);
      if (res != NULL_RTX)
        return res;
    }
  x2 = XEXP (x1, 0);
  operands[0] = x2;
  x3 = XEXP (x1, 1);
  operands[1] = x3;
  if (fp_register_operand (operands[1], E_VOIDmode)
      && fp_register_operand (operands[0], E_VOIDmode))
    {
      res = peephole2_21 (x1, insn, pmatch_len_);
      if (res != NULL_RTX)
        return res;
    }
  if (general_reg_operand (operands[1], E_QImode))
    {
      x4 = PATTERN (peep2_next_insn (1));
      if (pattern412 (x4, 
E_QImode) == 0
          && 
#line 27839 "../../gcc/config/i386/i386.md"
(REGNO (operands[0]) != REGNO (operands[1])
   && (QImode != QImode
       || any_QIreg_operand (operands[1], QImode))))
        {
          *pmatch_len_ = 1;
          res = gen_peephole2_279 (insn, operands);
          if (res != NULL_RTX)
            return res;
        }
    }
  if (general_reg_operand (operands[1], E_HImode))
    {
      x4 = PATTERN (peep2_next_insn (1));
      if (pattern412 (x4, 
E_HImode) == 0
          && 
#line 27839 "../../gcc/config/i386/i386.md"
(REGNO (operands[0]) != REGNO (operands[1])
   && (HImode != QImode
       || any_QIreg_operand (operands[1], QImode))))
        {
          *pmatch_len_ = 1;
          res = gen_peephole2_280 (insn, operands);
          if (res != NULL_RTX)
            return res;
        }
    }
  if (general_reg_operand (operands[1], E_DImode))
    {
      x4 = PATTERN (peep2_next_insn (1));
      if (pattern412 (x4, 
E_DImode) == 0
          && (
#line 27839 "../../gcc/config/i386/i386.md"
(REGNO (operands[0]) != REGNO (operands[1])
   && (DImode != QImode
       || any_QIreg_operand (operands[1], QImode))) && 
#line 1161 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
        {
          *pmatch_len_ = 1;
          res = gen_peephole2_282 (insn, operands);
          if (res != NULL_RTX)
            return res;
        }
    }
  if (peep2_current_count < 3
      || peep2_current_count < 4)
    return NULL;
  if (memory_operand (operands[1], E_QImode))
    {
      x4 = PATTERN (peep2_next_insn (1));
      if (pattern728 (x4, 
E_QImode) == 0)
        {
          x5 = PATTERN (peep2_next_insn (2));
          x6 = XEXP (x5, 0);
          if (rtx_equal_p (x6, operands[1]))
            {
              x7 = PATTERN (peep2_next_insn (3));
              if (pattern1798 (x7) == 0
                  && 
#line 27930 "../../gcc/config/i386/i386.md"
((TARGET_READ_MODIFY_WRITE || optimize_insn_for_size_p ())
   && peep2_reg_dead_p (4, operands[0])
   && !reg_overlap_mentioned_p (operands[0], operands[1])
   && !reg_overlap_mentioned_p (operands[0], operands[2])
   && (QImode != QImode
       || immediate_operand (operands[2], QImode)
       || any_QIreg_operand (operands[2], QImode))
   && ix86_match_ccmode (peep2_next_insn (3),
			 (GET_CODE (operands[3]) == PLUS
			  || GET_CODE (operands[3]) == MINUS)
			 ? CCGOCmode : CCNOmode)))
                {
                  *pmatch_len_ = 3;
                  res = gen_peephole2_293 (insn, operands);
                  if (res != NULL_RTX)
                    return res;
                }
            }
          if (peep2_current_count >= 5
              && pattern1799 (x6, 
E_QImode) == 0
              && 
#line 28128 "../../gcc/config/i386/i386.md"
((TARGET_READ_MODIFY_WRITE || optimize_insn_for_size_p ())
   && peep2_reg_dead_p (3, operands[0])
   && peep2_reg_dead_p (5, operands[4])
   && !reg_overlap_mentioned_p (operands[0], operands[1])
   && !reg_overlap_mentioned_p (operands[0], operands[2])
   && !reg_overlap_mentioned_p (operands[4], operands[1])
   && (QImode != QImode
       || immediate_operand (operands[2], QImode)
       || any_QIreg_operand (operands[2], QImode))
   && ix86_match_ccmode (peep2_next_insn (4),
			 (GET_CODE (operands[3]) == PLUS
			  || GET_CODE (operands[3]) == MINUS)
			 ? CCGOCmode : CCNOmode)))
            {
              *pmatch_len_ = 4;
              res = gen_peephole2_315 (insn, operands);
              if (res != NULL_RTX)
                return res;
            }
        }
    }
  if (memory_operand (operands[1], E_HImode))
    {
      x4 = PATTERN (peep2_next_insn (1));
      if (pattern728 (x4, 
E_HImode) == 0)
        {
          x5 = PATTERN (peep2_next_insn (2));
          x6 = XEXP (x5, 0);
          if (rtx_equal_p (x6, operands[1]))
            {
              x7 = PATTERN (peep2_next_insn (3));
              if (pattern1798 (x7) == 0
                  && 
#line 27930 "../../gcc/config/i386/i386.md"
((TARGET_READ_MODIFY_WRITE || optimize_insn_for_size_p ())
   && peep2_reg_dead_p (4, operands[0])
   && !reg_overlap_mentioned_p (operands[0], operands[1])
   && !reg_overlap_mentioned_p (operands[0], operands[2])
   && (HImode != QImode
       || immediate_operand (operands[2], QImode)
       || any_QIreg_operand (operands[2], QImode))
   && ix86_match_ccmode (peep2_next_insn (3),
			 (GET_CODE (operands[3]) == PLUS
			  || GET_CODE (operands[3]) == MINUS)
			 ? CCGOCmode : CCNOmode)))
                {
                  *pmatch_len_ = 3;
                  res = gen_peephole2_294 (insn, operands);
                  if (res != NULL_RTX)
                    return res;
                }
            }
          if (peep2_current_count >= 5
              && pattern1799 (x6, 
E_HImode) == 0
              && 
#line 28128 "../../gcc/config/i386/i386.md"
((TARGET_READ_MODIFY_WRITE || optimize_insn_for_size_p ())
   && peep2_reg_dead_p (3, operands[0])
   && peep2_reg_dead_p (5, operands[4])
   && !reg_overlap_mentioned_p (operands[0], operands[1])
   && !reg_overlap_mentioned_p (operands[0], operands[2])
   && !reg_overlap_mentioned_p (operands[4], operands[1])
   && (HImode != QImode
       || immediate_operand (operands[2], QImode)
       || any_QIreg_operand (operands[2], QImode))
   && ix86_match_ccmode (peep2_next_insn (4),
			 (GET_CODE (operands[3]) == PLUS
			  || GET_CODE (operands[3]) == MINUS)
			 ? CCGOCmode : CCNOmode)))
            {
              *pmatch_len_ = 4;
              res = gen_peephole2_316 (insn, operands);
              if (res != NULL_RTX)
                return res;
            }
        }
    }
  if (!memory_operand (operands[1], E_DImode)
      || !register_operand (operands[0], E_DImode))
    return NULL;
  x4 = PATTERN (peep2_next_insn (1));
  if (GET_CODE (x4) != PARALLEL
      || XVECLEN (x4, 0) != 2)
    return NULL;
  x8 = XVECEXP (x4, 0, 0);
  if (GET_CODE (x8) != SET)
    return NULL;
  x9 = XEXP (x8, 1);
  if (!plusminuslogic_operator (x9, E_DImode))
    return NULL;
  operands[3] = x9;
  x10 = XVECEXP (x4, 0, 1);
  if (GET_CODE (x10) != CLOBBER)
    return NULL;
  x11 = XEXP (x10, 0);
  if (GET_CODE (x11) != REG
      || REGNO (x11) != 17
      || GET_MODE (x11) != E_CCmode)
    return NULL;
  x12 = XEXP (x9, 1);
  operands[2] = x12;
  if (!x86_64_nonmemory_operand (operands[2], E_DImode)
      || pattern727 (x8) != 0)
    return NULL;
  x5 = PATTERN (peep2_next_insn (2));
  x6 = XEXP (x5, 0);
  if (rtx_equal_p (x6, operands[1]))
    {
      x7 = PATTERN (peep2_next_insn (3));
      if (pattern1798 (x7) == 0
          && (
#line 27930 "../../gcc/config/i386/i386.md"
((TARGET_READ_MODIFY_WRITE || optimize_insn_for_size_p ())
   && peep2_reg_dead_p (4, operands[0])
   && !reg_overlap_mentioned_p (operands[0], operands[1])
   && !reg_overlap_mentioned_p (operands[0], operands[2])
   && (DImode != QImode
       || immediate_operand (operands[2], QImode)
       || any_QIreg_operand (operands[2], QImode))
   && ix86_match_ccmode (peep2_next_insn (3),
			 (GET_CODE (operands[3]) == PLUS
			  || GET_CODE (operands[3]) == MINUS)
			 ? CCGOCmode : CCNOmode)) && 
#line 1161 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
        {
          *pmatch_len_ = 3;
          res = gen_peephole2_296 (insn, operands);
          if (res != NULL_RTX)
            return res;
        }
    }
  if (peep2_current_count < 5
      || pattern1799 (x6, 
E_DImode) != 0
      || !(
#line 28128 "../../gcc/config/i386/i386.md"
((TARGET_READ_MODIFY_WRITE || optimize_insn_for_size_p ())
   && peep2_reg_dead_p (3, operands[0])
   && peep2_reg_dead_p (5, operands[4])
   && !reg_overlap_mentioned_p (operands[0], operands[1])
   && !reg_overlap_mentioned_p (operands[0], operands[2])
   && !reg_overlap_mentioned_p (operands[4], operands[1])
   && (DImode != QImode
       || immediate_operand (operands[2], QImode)
       || any_QIreg_operand (operands[2], QImode))
   && ix86_match_ccmode (peep2_next_insn (4),
			 (GET_CODE (operands[3]) == PLUS
			  || GET_CODE (operands[3]) == MINUS)
			 ? CCGOCmode : CCNOmode)) && 
#line 1161 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
    return NULL;
  *pmatch_len_ = 4;
  return gen_peephole2_318 (insn, operands);
}

 rtx_insn *
peephole2_36 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pmatch_len_ ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11;
  rtx_insn *res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  if (XWINT (x2, 0) == -1L)
    {
      switch (GET_MODE (operands[0]))
        {
        case E_HImode:
          if (general_reg_operand (operands[0], E_HImode)
              && 
#line 28357 "../../gcc/config/i386/i386.md"
((TARGET_MOVE_M1_VIA_OR || optimize_insn_for_size_p ())
   && peep2_regno_dead_p (0, FLAGS_REG)))
            {
              *pmatch_len_ = 0;
              res = gen_peephole2_335 (insn, operands);
              if (res != NULL_RTX)
                return res;
            }
          break;

        case E_SImode:
          if (general_reg_operand (operands[0], E_SImode)
              && 
#line 28357 "../../gcc/config/i386/i386.md"
((TARGET_MOVE_M1_VIA_OR || optimize_insn_for_size_p ())
   && peep2_regno_dead_p (0, FLAGS_REG)))
            {
              *pmatch_len_ = 0;
              res = gen_peephole2_336 (insn, operands);
              if (res != NULL_RTX)
                return res;
            }
          break;

        case E_DImode:
          if (general_reg_operand (operands[0], E_DImode)
              && (
#line 28357 "../../gcc/config/i386/i386.md"
((TARGET_MOVE_M1_VIA_OR || optimize_insn_for_size_p ())
   && peep2_regno_dead_p (0, FLAGS_REG)) && 
#line 1164 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
            {
              *pmatch_len_ = 0;
              res = gen_peephole2_337 (insn, operands);
              if (res != NULL_RTX)
                return res;
            }
          break;

        default:
          break;
        }
    }
  if (peep2_current_count < 2
      || peep2_current_count < 3)
    return NULL;
  operands[2] = x2;
  x3 = PATTERN (peep2_next_insn (1));
  if (pattern600 (x3, 
2) != 0)
    return NULL;
  x4 = XVECEXP (x3, 0, 0);
  x5 = XEXP (x4, 1);
  if (XINT (x5, 1) != 110)
    return NULL;
  x6 = XVECEXP (x3, 0, 1);
  if (GET_CODE (x6) != SET)
    return NULL;
  x7 = XEXP (x6, 1);
  if (GET_CODE (x7) != PLUS
      || pattern1509 (x3) != 0
      || pattern1688 (x3) != 0)
    return NULL;
  x8 = PATTERN (peep2_next_insn (2));
  x9 = XEXP (x8, 1);
  x10 = XEXP (x9, 1);
  operands[3] = x10;
  x11 = XEXP (x9, 0);
  if (!rtx_equal_p (x11, operands[0]))
    return NULL;
  switch (GET_MODE (operands[0]))
    {
    case E_HImode:
      if (pattern1855 (x3, 
E_HImode) != 0
          || !
#line 724 "../../gcc/config/i386/sync.md"
(peep2_reg_dead_p (3, operands[0])
   && (unsigned HOST_WIDE_INT) INTVAL (operands[2])
      == -(unsigned HOST_WIDE_INT) INTVAL (operands[3])
   && !reg_overlap_mentioned_p (operands[0], operands[1])))
        return NULL;
      *pmatch_len_ = 2;
      return gen_peephole2_416 (insn, operands);

    case E_SImode:
      if (pattern1855 (x3, 
E_SImode) != 0
          || !
#line 724 "../../gcc/config/i386/sync.md"
(peep2_reg_dead_p (3, operands[0])
   && (unsigned HOST_WIDE_INT) INTVAL (operands[2])
      == -(unsigned HOST_WIDE_INT) INTVAL (operands[3])
   && !reg_overlap_mentioned_p (operands[0], operands[1])))
        return NULL;
      *pmatch_len_ = 2;
      return gen_peephole2_417 (insn, operands);

    case E_DImode:
      if (pattern1855 (x3, 
E_DImode) != 0
          || !(
#line 724 "../../gcc/config/i386/sync.md"
(peep2_reg_dead_p (3, operands[0])
   && (unsigned HOST_WIDE_INT) INTVAL (operands[2])
      == -(unsigned HOST_WIDE_INT) INTVAL (operands[3])
   && !reg_overlap_mentioned_p (operands[0], operands[1])) && 
#line 1161 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
        return NULL;
      *pmatch_len_ = 2;
      return gen_peephole2_418 (insn, operands);

    default:
      return NULL;
    }
}

 rtx_insn *
peephole2_43 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pmatch_len_ ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12, x13, x14, x15, x16, x17;
  rtx x18, x19, x20, x21, x22, x23, x24, x25;
  rtx x26, x27, x28, x29;
  rtx_insn *res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) != REG
      || REGNO (x3) != 17)
    return NULL;
  x4 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x4) != SET)
    return NULL;
  x5 = XEXP (x2, 1);
  x6 = XEXP (x5, 0);
  switch (GET_CODE (x6))
    {
    case REG:
      operands[0] = x6;
      x7 = XEXP (x4, 1);
      if (GET_CODE (x7) != MINUS
          || GET_MODE (x3) != E_CCmode
          || GET_MODE (x5) != E_CCmode)
        return NULL;
      x8 = XEXP (x5, 1);
      operands[1] = x8;
      x9 = XEXP (x7, 0);
      if (!rtx_equal_p (x9, operands[0]))
        return NULL;
      x10 = XEXP (x7, 1);
      if (!rtx_equal_p (x10, operands[1]))
        return NULL;
      x11 = XEXP (x4, 0);
      if (!rtx_equal_p (x11, operands[0]))
        return NULL;
      switch (GET_MODE (operands[0]))
        {
        case E_QImode:
          if (!general_reg_operand (operands[0], E_QImode)
              || !general_gr_operand (operands[1], E_QImode)
              || GET_MODE (x7) != E_QImode
              || !
#line 8688 "../../gcc/config/i386/i386.md"
(find_regno_note (peep2_next_insn (0), REG_UNUSED, REGNO (operands[0])) != 0))
            return NULL;
          *pmatch_len_ = 0;
          return gen_peephole2_64 (insn, operands);

        case E_HImode:
          if (!general_reg_operand (operands[0], E_HImode)
              || !general_gr_operand (operands[1], E_HImode)
              || GET_MODE (x7) != E_HImode
              || !
#line 8688 "../../gcc/config/i386/i386.md"
(find_regno_note (peep2_next_insn (0), REG_UNUSED, REGNO (operands[0])) != 0))
            return NULL;
          *pmatch_len_ = 0;
          return gen_peephole2_65 (insn, operands);

        case E_SImode:
          if (!general_reg_operand (operands[0], E_SImode)
              || !general_gr_operand (operands[1], E_SImode)
              || GET_MODE (x7) != E_SImode
              || !
#line 8688 "../../gcc/config/i386/i386.md"
(find_regno_note (peep2_next_insn (0), REG_UNUSED, REGNO (operands[0])) != 0))
            return NULL;
          *pmatch_len_ = 0;
          return gen_peephole2_66 (insn, operands);

        case E_DImode:
          if (!general_reg_operand (operands[0], E_DImode)
              || !general_gr_operand (operands[1], E_DImode)
              || GET_MODE (x7) != E_DImode
              || !(
#line 8688 "../../gcc/config/i386/i386.md"
(find_regno_note (peep2_next_insn (0), REG_UNUSED, REGNO (operands[0])) != 0) && 
#line 1161 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return NULL;
          *pmatch_len_ = 0;
          return gen_peephole2_67 (insn, operands);

        default:
          return NULL;
        }

    case ZERO_EXTEND:
      if (peep2_current_count < 2)
        return NULL;
      x12 = XEXP (x6, 0);
      if (GET_CODE (x12) != PLUS)
        return NULL;
      x13 = XEXP (x12, 0);
      if (GET_CODE (x13) != PLUS)
        return NULL;
      x14 = XEXP (x13, 0);
      switch (GET_CODE (x14))
        {
        case LTU:
        case UNLT:
          operands[4] = x14;
          x15 = XEXP (x14, 1);
          if (x15 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
            return NULL;
          x8 = XEXP (x5, 1);
          if (GET_CODE (x8) != PLUS)
            return NULL;
          x16 = XEXP (x8, 0);
          switch (GET_CODE (x16))
            {
            case LTU:
            case UNLT:
              operands[3] = x16;
              x17 = XEXP (x16, 1);
              if (x17 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
                return NULL;
              x18 = XEXP (x8, 1);
              if (GET_CODE (x18) != ZERO_EXTEND)
                return NULL;
              x7 = XEXP (x4, 1);
              if (GET_CODE (x7) != PLUS)
                return NULL;
              x9 = XEXP (x7, 0);
              if (GET_CODE (x9) != PLUS)
                return NULL;
              x19 = XEXP (x9, 0);
              switch (GET_CODE (x19))
                {
                case LTU:
                case UNLT:
                  if (!rtx_equal_p (x19, operands[4])
                      || GET_MODE (x3) != E_CCCmode
                      || GET_MODE (x5) != E_CCCmode)
                    return NULL;
                  x20 = XEXP (x14, 0);
                  operands[2] = x20;
                  if (!flags_reg_operand (operands[2], E_VOIDmode))
                    return NULL;
                  x21 = XEXP (x13, 1);
                  operands[0] = x21;
                  x22 = XEXP (x12, 1);
                  operands[1] = x22;
                  x23 = XEXP (x16, 0);
                  if (!rtx_equal_p (x23, operands[2]))
                    return NULL;
                  x24 = XEXP (x18, 0);
                  if (!rtx_equal_p (x24, operands[1]))
                    return NULL;
                  x25 = XEXP (x9, 1);
                  if (!rtx_equal_p (x25, operands[0]))
                    return NULL;
                  x10 = XEXP (x7, 1);
                  if (!rtx_equal_p (x10, operands[1]))
                    return NULL;
                  x11 = XEXP (x4, 0);
                  if (!rtx_equal_p (x11, operands[0]))
                    return NULL;
                  x26 = PATTERN (peep2_next_insn (1));
                  if (GET_CODE (x26) != SET)
                    return NULL;
                  switch (GET_MODE (x6))
                    {
                    case E_DImode:
                      switch (pattern1859 (x1, 
E_SImode, 
E_DImode))
                        {
                        case 0:
                          if (!
#line 9089 "../../gcc/config/i386/i386.md"
((TARGET_READ_MODIFY_WRITE || optimize_insn_for_size_p ())
   && peep2_reg_dead_p (2, operands[0])
   && !reg_overlap_mentioned_p (operands[0], operands[1])))
                            return NULL;
                          *pmatch_len_ = 1;
                          return gen_peephole2_84 (insn, operands);

                        case 1:
                          if (!
#line 9183 "../../gcc/config/i386/i386.md"
((TARGET_READ_MODIFY_WRITE || optimize_insn_for_size_p ())
   && peep2_reg_dead_p (4, operands[0])
   && !reg_overlap_mentioned_p (operands[0], operands[1])
   && !reg_overlap_mentioned_p (operands[0], operands[5])
   && !reg_overlap_mentioned_p (operands[5], operands[1])
   && !reg_overlap_mentioned_p (operands[0], operands[6])
   && !reg_overlap_mentioned_p (operands[6], operands[1])))
                            return NULL;
                          *pmatch_len_ = 3;
                          return gen_peephole2_88 (insn, operands);

                        default:
                          return NULL;
                        }

                    case E_TImode:
                      switch (pattern1859 (x1, 
E_DImode, 
E_TImode))
                        {
                        case 0:
                          if (!(
#line 9089 "../../gcc/config/i386/i386.md"
((TARGET_READ_MODIFY_WRITE || optimize_insn_for_size_p ())
   && peep2_reg_dead_p (2, operands[0])
   && !reg_overlap_mentioned_p (operands[0], operands[1])) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                            return NULL;
                          *pmatch_len_ = 1;
                          return gen_peephole2_85 (insn, operands);

                        case 1:
                          if (!(
#line 9183 "../../gcc/config/i386/i386.md"
((TARGET_READ_MODIFY_WRITE || optimize_insn_for_size_p ())
   && peep2_reg_dead_p (4, operands[0])
   && !reg_overlap_mentioned_p (operands[0], operands[1])
   && !reg_overlap_mentioned_p (operands[0], operands[5])
   && !reg_overlap_mentioned_p (operands[5], operands[1])
   && !reg_overlap_mentioned_p (operands[0], operands[6])
   && !reg_overlap_mentioned_p (operands[6], operands[1])) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                            return NULL;
                          *pmatch_len_ = 3;
                          return gen_peephole2_89 (insn, operands);

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

        default:
          return NULL;
        }

    case PLUS:
    case MINUS:
    case AND:
    case IOR:
    case XOR:
      if (peep2_current_count < 2)
        return NULL;
      x12 = XEXP (x6, 0);
      operands[0] = x12;
      x27 = XEXP (x6, 1);
      operands[1] = x27;
      x11 = XEXP (x4, 0);
      if (!rtx_equal_p (x11, operands[0]))
        return NULL;
      x26 = PATTERN (peep2_next_insn (1));
      if (GET_CODE (x26) != SET)
        return NULL;
      x28 = XEXP (x26, 1);
      if (!rtx_equal_p (x28, operands[0]))
        return NULL;
      x29 = XEXP (x26, 0);
      if (!rtx_equal_p (x29, operands[1]))
        return NULL;
      if (GET_CODE (x6) == PLUS)
        {
          res = peephole2_42 (x1, insn, pmatch_len_);
          if (res != NULL_RTX)
            return res;
        }
      x8 = XEXP (x5, 1);
      if (x8 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
        return NULL;
      operands[2] = x6;
      x7 = XEXP (x4, 1);
      if (!rtx_equal_p (x7, operands[2]))
        return NULL;
      switch (GET_MODE (operands[2]))
        {
        case E_QImode:
          if (!plusminuslogic_operator (operands[2], E_QImode)
              || !register_operand (operands[0], E_QImode)
              || !memory_operand (operands[1], E_QImode)
              || !
#line 28060 "../../gcc/config/i386/i386.md"
((TARGET_READ_MODIFY_WRITE || optimize_insn_for_size_p ())
   && COMMUTATIVE_ARITH_P (operands[2])
   && peep2_reg_dead_p (2, operands[0])
   && !reg_overlap_mentioned_p (operands[0], operands[1])
   && ix86_match_ccmode (peep2_next_insn (0),
			 GET_CODE (operands[2]) == PLUS
			 ? CCGOCmode : CCNOmode)))
            return NULL;
          *pmatch_len_ = 1;
          return gen_peephole2_309 (insn, operands);

        case E_HImode:
          if (!plusminuslogic_operator (operands[2], E_HImode)
              || !register_operand (operands[0], E_HImode)
              || !memory_operand (operands[1], E_HImode)
              || !
#line 28060 "../../gcc/config/i386/i386.md"
((TARGET_READ_MODIFY_WRITE || optimize_insn_for_size_p ())
   && COMMUTATIVE_ARITH_P (operands[2])
   && peep2_reg_dead_p (2, operands[0])
   && !reg_overlap_mentioned_p (operands[0], operands[1])
   && ix86_match_ccmode (peep2_next_insn (0),
			 GET_CODE (operands[2]) == PLUS
			 ? CCGOCmode : CCNOmode)))
            return NULL;
          *pmatch_len_ = 1;
          return gen_peephole2_310 (insn, operands);

        case E_SImode:
          if (!plusminuslogic_operator (operands[2], E_SImode)
              || !register_operand (operands[0], E_SImode)
              || !memory_operand (operands[1], E_SImode)
              || !
#line 28060 "../../gcc/config/i386/i386.md"
((TARGET_READ_MODIFY_WRITE || optimize_insn_for_size_p ())
   && COMMUTATIVE_ARITH_P (operands[2])
   && peep2_reg_dead_p (2, operands[0])
   && !reg_overlap_mentioned_p (operands[0], operands[1])
   && ix86_match_ccmode (peep2_next_insn (0),
			 GET_CODE (operands[2]) == PLUS
			 ? CCGOCmode : CCNOmode)))
            return NULL;
          *pmatch_len_ = 1;
          return gen_peephole2_311 (insn, operands);

        case E_DImode:
          if (!plusminuslogic_operator (operands[2], E_DImode)
              || !register_operand (operands[0], E_DImode)
              || !memory_operand (operands[1], E_DImode)
              || !(
#line 28060 "../../gcc/config/i386/i386.md"
((TARGET_READ_MODIFY_WRITE || optimize_insn_for_size_p ())
   && COMMUTATIVE_ARITH_P (operands[2])
   && peep2_reg_dead_p (2, operands[0])
   && !reg_overlap_mentioned_p (operands[0], operands[1])
   && ix86_match_ccmode (peep2_next_insn (0),
			 GET_CODE (operands[2]) == PLUS
			 ? CCGOCmode : CCNOmode)) && 
#line 1161 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return NULL;
          *pmatch_len_ = 1;
          return gen_peephole2_312 (insn, operands);

        default:
          return NULL;
        }

    default:
      return NULL;
    }
}
