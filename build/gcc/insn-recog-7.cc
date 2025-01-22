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
pattern6 (rtx x1, machine_mode i1)
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
pattern11 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!memory_operand (operands[0], i1)
      || GET_MODE (x1) != i1)
    return -1;
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
}

int
pattern19 (rtx x1, int *pnum_clobbers)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (pnum_clobbers == NULL)
    return -1;
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) != E_QImode)
    return -1;
  return pattern18 (x1); /* [-1, 1] */
}

int
pattern23 (rtx x1)
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
pattern29 (rtx x1)
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
      return 0;

    case E_V8HImode:
      if (!register_operand (operands[0], E_V8HImode)
          || GET_MODE (x3) != E_V8HImode)
        return -1;
      return 1;

    case E_V8SImode:
      if (!register_operand (operands[0], E_V8SImode)
          || GET_MODE (x3) != E_V8SImode)
        return -1;
      return 2;

    case E_V4SImode:
      if (!register_operand (operands[0], E_V4SImode)
          || GET_MODE (x3) != E_V4SImode)
        return -1;
      return 3;

    case E_V4DImode:
      if (!register_operand (operands[0], E_V4DImode)
          || GET_MODE (x3) != E_V4DImode)
        return -1;
      return 4;

    case E_V2DImode:
      if (!register_operand (operands[0], E_V2DImode)
          || GET_MODE (x3) != E_V2DImode)
        return -1;
      return 5;

    case E_V32HImode:
      if (!register_operand (operands[0], E_V32HImode)
          || GET_MODE (x3) != E_V32HImode)
        return -1;
      return 6;

    case E_V16SImode:
      if (!register_operand (operands[0], E_V16SImode)
          || GET_MODE (x3) != E_V16SImode)
        return -1;
      return 7;

    case E_V8DImode:
      if (!register_operand (operands[0], E_V8DImode)
          || GET_MODE (x3) != E_V8DImode)
        return -1;
      return 8;

    case E_V1TImode:
      if (!register_operand (operands[0], E_V1TImode)
          || GET_MODE (x3) != E_V1TImode)
        return -1;
      return 9;

    case E_V4TImode:
      if (!register_operand (operands[0], E_V4TImode)
          || GET_MODE (x3) != E_V4TImode
          || !nonimmediate_operand (operands[1], E_V4TImode)
          || !const_0_to_255_mul_8_operand (operands[2], E_SImode))
        return -1;
      return 10;

    case E_V2TImode:
      if (!register_operand (operands[0], E_V2TImode)
          || GET_MODE (x3) != E_V2TImode
          || !const_0_to_255_mul_8_operand (operands[2], E_SImode))
        return -1;
      return 11;

    default:
      return -1;
    }
}

int
pattern47 (rtx x1, int *pnum_clobbers)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7;
  int res ATTRIBUTE_UNUSED;
  if (pnum_clobbers == NULL)
    return -1;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  if (x3 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
    return -1;
  x4 = XEXP (x1, 0);
  if (GET_CODE (x4) != REG
      || REGNO (x4) != 17)
    return -1;
  x5 = XEXP (x2, 0);
  x6 = XEXP (x5, 0);
  operands[1] = x6;
  x7 = XEXP (x5, 1);
  operands[2] = x7;
  return pattern46 (x5); /* [-1, 3] */
}

int
pattern52 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  operands[1] = x4;
  if (!register_operand (operands[1], E_V4HImode))
    return -1;
  x5 = XEXP (x3, 1);
  operands[2] = x5;
  if (!register_mmxmem_operand (operands[2], E_V4HImode))
    return -1;
  x6 = XEXP (x1, 1);
  x7 = XEXP (x6, 0);
  x8 = XEXP (x7, 0);
  if (!rtx_equal_p (x8, operands[1]))
    return -1;
  x9 = XEXP (x7, 1);
  if (!rtx_equal_p (x9, operands[2]))
    return -1;
  return 0;
}

int
pattern61 (rtx x1)
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
    case E_HFmode:
      return pattern60 (x3, 
E_HFmode); /* [-1, 0] */

    case E_SFmode:
      if (pattern60 (x3, 
E_SFmode) != 0)
        return -1;
      return 1;

    case E_DFmode:
      if (pattern60 (x3, 
E_DFmode) != 0)
        return -1;
      return 2;

    default:
      return -1;
    }
}

int
pattern68 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  switch (GET_CODE (x2))
    {
    case ASHIFT:
      if (GET_MODE (x2) != E_TImode)
        return -1;
      x3 = XEXP (x2, 0);
      if (GET_CODE (x3) != ZERO_EXTEND
          || GET_MODE (x3) != E_TImode)
        return -1;
      x4 = XEXP (x2, 1);
      if (x4 != const_int_rtx[MAX_SAVED_CONST_INT + 64]
          || !nonimmediate_operand (operands[0], E_TImode)
          || GET_MODE (x1) != E_TImode)
        return -1;
      x5 = XEXP (x1, 0);
      if (GET_MODE (x5) != E_TImode
          || !nonimmediate_operand (operands[1], E_TImode)
          || !const_scalar_int_operand (operands[3], E_TImode))
        return -1;
      x6 = XEXP (x3, 0);
      operands[2] = x6;
      if (!nonimmediate_operand (operands[2], E_DImode))
        return -1;
      return 0;

    case ZERO_EXTEND:
      x3 = XEXP (x2, 0);
      operands[2] = x3;
      switch (GET_MODE (operands[0]))
        {
        case E_TImode:
          if (!nonimmediate_operand (operands[0], E_TImode)
              || GET_MODE (x1) != E_TImode)
            return -1;
          x5 = XEXP (x1, 0);
          if (GET_MODE (x5) != E_TImode
              || !nonimmediate_operand (operands[1], E_TImode)
              || !const_scalar_int_operand (operands[3], E_TImode)
              || GET_MODE (x2) != E_TImode
              || !nonimmediate_operand (operands[2], E_DImode))
            return -1;
          return 1;

        case E_DImode:
          if (!nonimmediate_operand (operands[0], E_DImode)
              || GET_MODE (x1) != E_DImode)
            return -1;
          x5 = XEXP (x1, 0);
          if (GET_MODE (x5) != E_DImode
              || !nonimmediate_operand (operands[1], E_DImode)
              || !const_int_operand (operands[3], E_DImode)
              || GET_MODE (x2) != E_DImode
              || !nonimmediate_operand (operands[2], E_SImode))
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
pattern96 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (!memory_operand (operands[0], i1)
      || GET_MODE (x1) != i1)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != i1
      || !register_operand (operands[1], E_V2DImode))
    return -1;
  return 0;
}

int
pattern102 (rtx x1, int *pnum_clobbers)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  int res ATTRIBUTE_UNUSED;
  if (pnum_clobbers == NULL)
    return -1;
  x2 = XEXP (x1, 0);
  operands[2] = x2;
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) != REG
      || REGNO (x3) != 17)
    return -1;
  x4 = XEXP (x2, 1);
  if (x4 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
    return -1;
  x5 = XEXP (x1, 1);
  operands[1] = x5;
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
pattern109 (rtx x1, int *pnum_clobbers, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  if (pnum_clobbers == NULL)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != E_SImode
      || !register_operand (operands[0], i2)
      || GET_MODE (x1) != i2)
    return -1;
  x3 = XEXP (x2, 0);
  operands[1] = x3;
  if (!nonimmediate_operand (operands[1], i1))
    return -1;
  return 0;
}

int
pattern115 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  operands[2] = x3;
  if (!register_operand (operands[2], E_QImode))
    return -1;
  x4 = XEXP (x2, 1);
  operands[3] = x4;
  if (!const_int_operand (operands[3], E_QImode))
    return -1;
  switch (GET_MODE (operands[0]))
    {
    case E_DImode:
      if (GET_MODE (x1) != E_DImode)
        return -1;
      return 0;

    case E_SImode:
      if (!nonimmediate_operand (operands[0], E_SImode)
          || GET_MODE (x1) != E_SImode
          || !nonimmediate_operand (operands[1], E_SImode))
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern125 (rtx x1)
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
pattern134 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != i1
      || !nonimm_or_0_operand (operands[2], i1))
    return -1;
  return 0;
}

int
pattern141 (rtx x1)
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
  switch (GET_CODE (operands[2]))
    {
    case REG:
    case SUBREG:
    case MEM:
      switch (GET_MODE (operands[0]))
        {
        case E_V16SImode:
          return pattern129 (x1, 
E_V16SImode, 
E_HImode); /* [-1, 0] */

        case E_V8SImode:
          if (pattern129 (x1, 
E_V8SImode, 
E_QImode) != 0)
            return -1;
          return 1;

        case E_V4SImode:
          if (pattern129 (x1, 
E_V4SImode, 
E_QImode) != 0)
            return -1;
          return 2;

        case E_V8DImode:
          if (pattern129 (x1, 
E_V8DImode, 
E_QImode) != 0)
            return -1;
          return 3;

        case E_V4DImode:
          if (pattern129 (x1, 
E_V4DImode, 
E_QImode) != 0)
            return -1;
          return 4;

        case E_V2DImode:
          if (pattern129 (x1, 
E_V2DImode, 
E_QImode) != 0)
            return -1;
          return 5;

        default:
          return -1;
        }

    case CONST_INT:
      if (!const_0_to_255_operand (operands[2], E_SImode))
        return -1;
      switch (GET_MODE (operands[0]))
        {
        case E_V16SImode:
          if (pattern140 (x1, 
E_V16SImode, 
E_HImode) != 0)
            return -1;
          return 6;

        case E_V8SImode:
          if (pattern140 (x1, 
E_V8SImode, 
E_QImode) != 0)
            return -1;
          return 7;

        case E_V4SImode:
          if (pattern140 (x1, 
E_V4SImode, 
E_QImode) != 0)
            return -1;
          return 8;

        case E_V8DImode:
          if (pattern140 (x1, 
E_V8DImode, 
E_QImode) != 0)
            return -1;
          return 9;

        case E_V4DImode:
          if (pattern140 (x1, 
E_V4DImode, 
E_QImode) != 0)
            return -1;
          return 10;

        case E_V2DImode:
          if (pattern140 (x1, 
E_V2DImode, 
E_QImode) != 0)
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
pattern158 (rtx x1)
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
    case E_V16SImode:
      return pattern149 (x3, 
E_V16SImode); /* [-1, 0] */

    case E_V8SImode:
      if (pattern149 (x3, 
E_V8SImode) != 0)
        return -1;
      return 1;

    case E_V4SImode:
      if (pattern149 (x3, 
E_V4SImode) != 0)
        return -1;
      return 2;

    default:
      return -1;
    }
}

int
pattern167 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], E_V4SImode))
    return -1;
  x2 = XVECEXP (x1, 0, 0);
  operands[1] = x2;
  if (!register_operand (operands[1], E_V4SImode))
    return -1;
  x3 = XVECEXP (x1, 0, 1);
  operands[2] = x3;
  if (!register_operand (operands[2], E_V4SImode))
    return -1;
  x4 = XVECEXP (x1, 0, 2);
  operands[3] = x4;
  if (!vector_operand (operands[3], E_V4SImode))
    return -1;
  return 0;
}

int
pattern176 (rtx x1, machine_mode i1, machine_mode i2, machine_mode i3)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i3)
      || GET_MODE (x1) != i3)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != i1
      || !nonimmediate_operand (operands[1], i2)
      || !const0_operand (operands[2], i1))
    return -1;
  return 0;
}

int
pattern180 (rtx x1)
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
    case E_V32HFmode:
      return pattern179 (x1, 
E_V32HFmode); /* [-1, 0] */

    case E_V16HFmode:
      if (pattern179 (x1, 
E_V16HFmode) != 0)
        return -1;
      return 1;

    case E_V8HFmode:
      if (pattern179 (x1, 
E_V8HFmode) != 0)
        return -1;
      return 2;

    case E_V16SFmode:
      if (pattern179 (x1, 
E_V16SFmode) != 0)
        return -1;
      return 3;

    case E_V8SFmode:
      if (pattern179 (x1, 
E_V8SFmode) != 0)
        return -1;
      return 4;

    case E_V4SFmode:
      if (pattern179 (x1, 
E_V4SFmode) != 0)
        return -1;
      return 5;

    case E_V8DFmode:
      if (pattern179 (x1, 
E_V8DFmode) != 0)
        return -1;
      return 6;

    case E_V4DFmode:
      if (pattern179 (x1, 
E_V4DFmode) != 0)
        return -1;
      return 7;

    case E_V2DFmode:
      if (pattern179 (x1, 
E_V2DFmode) != 0)
        return -1;
      return 8;

    case E_V64QImode:
      if (pattern179 (x1, 
E_V64QImode) != 0)
        return -1;
      return 9;

    case E_V32QImode:
      if (pattern179 (x1, 
E_V32QImode) != 0)
        return -1;
      return 10;

    case E_V16QImode:
      if (pattern179 (x1, 
E_V16QImode) != 0)
        return -1;
      return 11;

    case E_V32HImode:
      if (pattern179 (x1, 
E_V32HImode) != 0)
        return -1;
      return 12;

    case E_V16HImode:
      if (pattern179 (x1, 
E_V16HImode) != 0)
        return -1;
      return 13;

    case E_V8HImode:
      if (pattern179 (x1, 
E_V8HImode) != 0)
        return -1;
      return 14;

    case E_V16SImode:
      if (pattern179 (x1, 
E_V16SImode) != 0)
        return -1;
      return 15;

    case E_V8SImode:
      if (pattern179 (x1, 
E_V8SImode) != 0)
        return -1;
      return 16;

    case E_V4SImode:
      if (pattern179 (x1, 
E_V4SImode) != 0)
        return -1;
      return 17;

    case E_V8DImode:
      if (pattern179 (x1, 
E_V8DImode) != 0)
        return -1;
      return 18;

    case E_V4DImode:
      if (pattern179 (x1, 
E_V4DImode) != 0)
        return -1;
      return 19;

    case E_V2DImode:
      if (pattern179 (x1, 
E_V2DImode) != 0)
        return -1;
      return 20;

    case E_V32BFmode:
      if (pattern14 (x1, 
E_V32BFmode) != 0)
        return -1;
      return 21;

    case E_V16BFmode:
      if (pattern14 (x1, 
E_V16BFmode) != 0)
        return -1;
      return 22;

    case E_V8BFmode:
      if (pattern14 (x1, 
E_V8BFmode) != 0)
        return -1;
      return 23;

    default:
      return -1;
    }
}

int
pattern196 (rtx x1)
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
  return pattern195 (x3); /* [-1, 1] */
}

int
pattern200 (rtx x1, machine_mode i1)
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
pattern202 (rtx x1)
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

    case E_SImode:
      if (!nonimmediate_operand (operands[0], E_SImode)
          || GET_MODE (x1) != E_SImode
          || !nonimmediate_operand (operands[1], E_SImode))
        return -1;
      return 2;

    case E_DImode:
      if (!nonimmediate_operand (operands[0], E_DImode)
          || GET_MODE (x1) != E_DImode
          || !nonimmediate_operand (operands[1], E_DImode))
        return -1;
      return 3;

    default:
      return -1;
    }
}

int
pattern212 (rtx x1)
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
  operands[1] = x7;
  x8 = XEXP (x6, 1);
  operands[2] = x8;
  switch (GET_MODE (operands[0]))
    {
    case E_DImode:
      return pattern208 (x6, 
E_DImode); /* [-1, 0] */

    case E_TImode:
      if (pattern208 (x6, 
E_TImode) != 0)
        return -1;
      return 1;

    case E_QImode:
      if (pattern208 (x6, 
E_QImode) != 0)
        return -1;
      return 2;

    case E_HImode:
      if (pattern208 (x6, 
E_HImode) != 0)
        return -1;
      return 3;

    case E_SImode:
      if (pattern208 (x6, 
E_SImode) != 0)
        return -1;
      return 4;

    default:
      return -1;
    }
}

int
pattern222 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  if (GET_CODE (x1) != CLOBBER)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_CODE (x2) != MEM
      || GET_MODE (x2) != E_BLKmode)
    return -1;
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) != SCRATCH)
    return -1;
  return 0;
}

int
pattern231 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1
      || !register_operand (operands[1], i1)
      || !const0_operand (operands[2], i1))
    return -1;
  return 0;
}

int
pattern236 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  operands[1] = x2;
  x3 = XEXP (x1, 1);
  operands[2] = x3;
  switch (GET_CODE (operands[2]))
    {
    case CONST_VECTOR:
      switch (GET_MODE (operands[0]))
        {
        case E_V32HImode:
          return pattern235 (x1, 
E_V32HImode); /* [-1, 0] */

        case E_V16SImode:
          if (pattern235 (x1, 
E_V16SImode) != 0)
            return -1;
          return 1;

        case E_V8DImode:
          if (pattern235 (x1, 
E_V8DImode) != 0)
            return -1;
          return 2;

        default:
          return -1;
        }

    case CONST_INT:
      if (!const_0_to_255_not_mul_8_operand (operands[2], E_SImode)
          || !register_operand (operands[0], E_V1TImode)
          || GET_MODE (x1) != E_V1TImode
          || !register_operand (operands[1], E_V1TImode))
        return -1;
      return 3;

    default:
      return -1;
    }
}

int
pattern253 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  if (XWINT (x3, 0) != 8L)
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
  x7 = XEXP (x4, 0);
  operands[0] = x7;
  if (!int248_register_operand (operands[0], E_VOIDmode))
    return -1;
  switch (GET_MODE (x4))
    {
    case E_HImode:
      if (GET_MODE (x2) != E_HImode
          || !register_operand (operands[1], E_HImode))
        return -1;
      return 0;

    case E_SImode:
      if (GET_MODE (x2) != E_SImode
          || !register_operand (operands[1], E_SImode))
        return -1;
      return 1;

    case E_DImode:
      if (GET_MODE (x2) != E_DImode
          || !register_operand (operands[1], E_DImode))
        return -1;
      return 2;

    default:
      return -1;
    }
}

int
pattern267 (rtx x1, machine_mode i1, machine_mode i2, machine_mode i3)
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
      || !register_mmxmem_operand (operands[2], i1))
    return -1;
  return 0;
}

int
pattern277 (rtx x1, int *pnum_clobbers)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6;
  int res ATTRIBUTE_UNUSED;
  if (pnum_clobbers == NULL)
    return -1;
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
  return pattern276 (x1); /* [-1, 4] */
}

int
pattern283 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != i1
      || !register_operand (operands[3], i1))
    return -1;
  return 0;
}

int
pattern287 (rtx x1, machine_mode i1, machine_mode i2)
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
pattern297 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  operands[1] = x2;
  x3 = XVECEXP (x1, 0, 1);
  operands[2] = x3;
  switch (GET_MODE (operands[0]))
    {
    case E_SImode:
      return pattern60 (x1, 
E_SImode); /* [-1, 0] */

    case E_DImode:
      if (pattern60 (x1, 
E_DImode) != 0)
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern302 (rtx x1)
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
          || !register_operand (operands[1], E_SImode))
        return -1;
      return 0;

    case E_DImode:
      if (!register_operand (operands[0], E_DImode)
          || GET_MODE (x1) != E_DImode
          || !register_operand (operands[1], E_DImode))
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern311 (rtx x1, machine_mode i1, machine_mode i2, machine_mode i3)
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
  if (GET_MODE (x3) != i1)
    return -1;
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) != i3
      || !nonimmediate_operand (operands[1], i2))
    return -1;
  x5 = XEXP (x2, 1);
  if (GET_MODE (x5) != i1)
    return -1;
  x6 = XEXP (x5, 0);
  if (GET_MODE (x6) != i3
      || !nonimmediate_operand (operands[2], i2)
      || !nonimm_or_0_operand (operands[3], i1))
    return -1;
  return 0;
}

int
pattern319 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  operands[1] = x2;
  switch (GET_MODE (operands[0]))
    {
    case E_V16SImode:
      if (!register_operand (operands[0], E_V16SImode)
          || GET_MODE (x1) != E_V16SImode
          || !memory_operand (operands[1], E_V16SImode))
        return -1;
      return 0;

    case E_V8SImode:
      if (!register_operand (operands[0], E_V8SImode)
          || GET_MODE (x1) != E_V8SImode
          || !memory_operand (operands[1], E_V8SImode))
        return -1;
      return 1;

    case E_V4SImode:
      if (!register_operand (operands[0], E_V4SImode)
          || GET_MODE (x1) != E_V4SImode
          || !memory_operand (operands[1], E_V4SImode))
        return -1;
      return 2;

    case E_V8DImode:
      if (!register_operand (operands[0], E_V8DImode)
          || GET_MODE (x1) != E_V8DImode
          || !memory_operand (operands[1], E_V8DImode))
        return -1;
      return 3;

    case E_V4DImode:
      if (!register_operand (operands[0], E_V4DImode)
          || GET_MODE (x1) != E_V4DImode
          || !memory_operand (operands[1], E_V4DImode))
        return -1;
      return 4;

    case E_V2DImode:
      if (!register_operand (operands[0], E_V2DImode)
          || GET_MODE (x1) != E_V2DImode
          || !memory_operand (operands[1], E_V2DImode))
        return -1;
      return 5;

    case E_V16SFmode:
      if (!register_operand (operands[0], E_V16SFmode)
          || GET_MODE (x1) != E_V16SFmode
          || !memory_operand (operands[1], E_V16SFmode))
        return -1;
      return 6;

    case E_V8SFmode:
      if (!register_operand (operands[0], E_V8SFmode)
          || GET_MODE (x1) != E_V8SFmode
          || !memory_operand (operands[1], E_V8SFmode))
        return -1;
      return 7;

    case E_V4SFmode:
      if (!register_operand (operands[0], E_V4SFmode)
          || GET_MODE (x1) != E_V4SFmode
          || !memory_operand (operands[1], E_V4SFmode))
        return -1;
      return 8;

    case E_V8DFmode:
      if (!register_operand (operands[0], E_V8DFmode)
          || GET_MODE (x1) != E_V8DFmode
          || !memory_operand (operands[1], E_V8DFmode))
        return -1;
      return 9;

    case E_V4DFmode:
      if (!register_operand (operands[0], E_V4DFmode)
          || GET_MODE (x1) != E_V4DFmode
          || !memory_operand (operands[1], E_V4DFmode))
        return -1;
      return 10;

    case E_V2DFmode:
      if (!register_operand (operands[0], E_V2DFmode)
          || GET_MODE (x1) != E_V2DFmode
          || !memory_operand (operands[1], E_V2DFmode))
        return -1;
      return 11;

    case E_V64QImode:
      if (!register_operand (operands[0], E_V64QImode)
          || GET_MODE (x1) != E_V64QImode
          || !memory_operand (operands[1], E_V64QImode))
        return -1;
      return 12;

    case E_V16QImode:
      if (!register_operand (operands[0], E_V16QImode)
          || GET_MODE (x1) != E_V16QImode
          || !memory_operand (operands[1], E_V16QImode))
        return -1;
      return 13;

    case E_V32QImode:
      if (!register_operand (operands[0], E_V32QImode)
          || GET_MODE (x1) != E_V32QImode
          || !memory_operand (operands[1], E_V32QImode))
        return -1;
      return 14;

    case E_V32HImode:
      if (!register_operand (operands[0], E_V32HImode)
          || GET_MODE (x1) != E_V32HImode
          || !memory_operand (operands[1], E_V32HImode))
        return -1;
      return 15;

    case E_V16HImode:
      if (!register_operand (operands[0], E_V16HImode)
          || GET_MODE (x1) != E_V16HImode
          || !memory_operand (operands[1], E_V16HImode))
        return -1;
      return 16;

    case E_V8HImode:
      if (!register_operand (operands[0], E_V8HImode)
          || GET_MODE (x1) != E_V8HImode
          || !memory_operand (operands[1], E_V8HImode))
        return -1;
      return 17;

    case E_V32HFmode:
      if (!register_operand (operands[0], E_V32HFmode)
          || GET_MODE (x1) != E_V32HFmode
          || !memory_operand (operands[1], E_V32HFmode))
        return -1;
      return 18;

    case E_V16HFmode:
      if (!register_operand (operands[0], E_V16HFmode)
          || GET_MODE (x1) != E_V16HFmode
          || !memory_operand (operands[1], E_V16HFmode))
        return -1;
      return 19;

    case E_V8HFmode:
      if (!register_operand (operands[0], E_V8HFmode)
          || GET_MODE (x1) != E_V8HFmode
          || !memory_operand (operands[1], E_V8HFmode))
        return -1;
      return 20;

    case E_V32BFmode:
      if (!register_operand (operands[0], E_V32BFmode)
          || GET_MODE (x1) != E_V32BFmode
          || !memory_operand (operands[1], E_V32BFmode))
        return -1;
      return 21;

    case E_V16BFmode:
      if (!register_operand (operands[0], E_V16BFmode)
          || GET_MODE (x1) != E_V16BFmode
          || !memory_operand (operands[1], E_V16BFmode))
        return -1;
      return 22;

    case E_V8BFmode:
      if (!register_operand (operands[0], E_V8BFmode)
          || GET_MODE (x1) != E_V8BFmode
          || !memory_operand (operands[1], E_V8BFmode))
        return -1;
      return 23;

    default:
      return -1;
    }
}

int
pattern358 (rtx x1, machine_mode i1)
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
pattern363 (rtx x1, rtx_code i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  x4 = XEXP (x3, 0);
  x5 = XEXP (x4, 0);
  if (XVECLEN (x5, 0) != 2
      || XINT (x5, 1) != 110)
    return -1;
  x6 = XEXP (x2, 0);
  if (GET_CODE (x6) != REG
      || REGNO (x6) != 17
      || GET_MODE (x6) != E_CCNOmode)
    return -1;
  x7 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x7) != SET)
    return -1;
  x8 = XEXP (x7, 1);
  if (GET_CODE (x8) != i1)
    return -1;
  return pattern362 (x1, 
E_CCNOmode); /* [-1, 3] */
}

int
pattern369 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != i1
      || !register_operand (operands[3], i1))
    return -1;
  return 0;
}

int
pattern373 (rtx x1)
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

    default:
      return -1;
    }
}

int
pattern381 (rtx x1, int i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (GET_CODE (x1) != UNSPEC
      || XVECLEN (x1, 0) != 1
      || XINT (x1, 1) != i1)
    return -1;
  x2 = XVECEXP (x1, 0, 0);
  if (x2 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
    return -1;
  return 0;
}

int
pattern387 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1))
    return -1;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) != i1
      || !register_operand (operands[2], i1)
      || !nonimmediate_operand (operands[3], i1)
      || !register_operand (operands[1], i1))
    return -1;
  x4 = XVECEXP (x1, 0, 1);
  x5 = XEXP (x4, 1);
  if (GET_MODE (x5) != i1)
    return -1;
  return 0;
}

int
pattern393 (rtx x1, int i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (XINT (x1, 1) != i1
      || GET_MODE (x1) != E_SImode)
    return -1;
  x2 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x2) != REG
      || REGNO (x2) != 20
      || GET_MODE (x2) != E_V2DImode)
    return -1;
  return 0;
}

int
pattern401 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  operands[1] = x3;
  x4 = XEXP (x1, 1);
  switch (GET_CODE (x4))
    {
    case ASHIFT:
      x5 = XEXP (x4, 1);
      operands[3] = x5;
      if (!const_int_operand (operands[3], E_QImode))
        return -1;
      x6 = XEXP (x4, 0);
      switch (GET_CODE (x6))
        {
        case REG:
        case SUBREG:
          operands[2] = x6;
          switch (GET_MODE (operands[0]))
            {
            case E_DImode:
              return pattern397 (x1, 
E_DImode, 
E_SImode); /* [-1, 0] */

            case E_TImode:
              if (pattern397 (x1, 
E_TImode, 
E_DImode) != 0)
                return -1;
              return 1;

            default:
              return -1;
            }

        case SIGN_EXTEND:
          res = pattern399 (x1);
          if (res >= 0)
            return res + 2; /* [2, 3] */
          return -1;

        case ZERO_EXTEND:
          res = pattern399 (x1);
          if (res >= 0)
            return res + 4; /* [4, 5] */
          return -1;

        default:
          return -1;
        }

    case CONST_INT:
    case CONST_WIDE_INT:
      operands[2] = x4;
      switch (GET_MODE (operands[0]))
        {
        case E_DImode:
          if (pattern400 (x1, 
E_DImode, 
E_SImode) != 0)
            return -1;
          return 6;

        case E_TImode:
          if (pattern400 (x1, 
E_TImode, 
E_DImode) != 0)
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
pattern420 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4;
  int res ATTRIBUTE_UNUSED;
  if (GET_CODE (x1) != ZERO_EXTRACT)
    return -1;
  x2 = XEXP (x1, 1);
  if (x2 != const_int_rtx[MAX_SAVED_CONST_INT + 8])
    return -1;
  x3 = XEXP (x1, 2);
  if (x3 != const_int_rtx[MAX_SAVED_CONST_INT + 8])
    return -1;
  x4 = XEXP (x1, 0);
  operands[0] = x4;
  if (!int248_register_operand (operands[0], E_VOIDmode))
    return -1;
  return 0;
}

int
pattern428 (rtx x1, machine_mode i1)
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
      || !register_no_SP_operand (operands[1], i1)
      || !register_operand (operands[3], i1)
      || !immediate_operand (operands[4], i1))
    return -1;
  return 0;
}

int
pattern438 (rtx x1, rtx_code i1)
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
pattern454 (rtx x1)
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
    case E_DImode:
      return pattern418 (x1, 
E_V64QImode, 
E_DImode); /* [-1, 0] */

    case E_SImode:
      res = pattern453 (x1);
      if (res >= 0)
        return res + 1; /* [1, 2] */
      return -1;

    default:
      return -1;
    }
}

int
pattern464 (rtx x1)
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
      return pattern463 (x1, 
E_DImode, 
E_V64QImode, 
E_V32HFmode); /* [-1, 0] */

    case E_V32QImode:
      if (pattern463 (x1, 
E_SImode, 
E_V32QImode, 
E_V16HFmode) != 0)
        return -1;
      return 1;

    case E_V16QImode:
      if (pattern463 (x1, 
E_HImode, 
E_V16QImode, 
E_V8HFmode) != 0)
        return -1;
      return 2;

    default:
      return -1;
    }
}

int
pattern474 (rtx x1, machine_mode i1)
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
      || !const0_operand (operands[4], i1))
    return -1;
  return 0;
}

int
pattern480 (machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[2], i1)
      || !nonimmediate_operand (operands[3], i1)
      || !const0_operand (operands[4], i1)
      || !register_operand (operands[5], i2))
    return -1;
  return 0;
}

int
pattern484 (rtx x1, machine_mode i1, machine_mode i2)
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
      || !const0_operand (operands[5], i1)
      || !register_operand (operands[4], i2))
    return -1;
  return 0;
}

int
pattern489 (rtx x1)
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
  if (!const_4_or_8_to_11_operand (operands[3], E_SImode))
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

    case E_V8HFmode:
      if (pattern488 (x1, 
E_V8HFmode) != 0)
        return -1;
      return 2;

    case E_V16SFmode:
      if (pattern488 (x1, 
E_V16SFmode) != 0)
        return -1;
      return 3;

    case E_V8SFmode:
      if (pattern488 (x1, 
E_V8SFmode) != 0)
        return -1;
      return 4;

    case E_V4SFmode:
      if (pattern488 (x1, 
E_V4SFmode) != 0)
        return -1;
      return 5;

    case E_V8DFmode:
      if (pattern488 (x1, 
E_V8DFmode) != 0)
        return -1;
      return 6;

    case E_V4DFmode:
      if (pattern488 (x1, 
E_V4DFmode) != 0)
        return -1;
      return 7;

    case E_V2DFmode:
      if (pattern488 (x1, 
E_V2DFmode) != 0)
        return -1;
      return 8;

    default:
      return -1;
    }
}

int
pattern500 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], E_V4SFmode)
      || GET_MODE (x1) != E_V4SFmode)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != E_V2SFmode)
    return -1;
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) != E_V2SFmode
      || !nonimmediate_operand (operands[1], i1)
      || !const0_operand (operands[3], E_V2SFmode)
      || !const0_operand (operands[4], E_V2SFmode))
    return -1;
  return 0;
}

int
pattern504 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4;
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
  x4 = XEXP (x2, 1);
  if (GET_MODE (x4) != i2
      || !nonimm_or_0_operand (operands[2], i1))
    return -1;
  return 0;
}

int
pattern508 (rtx x1, machine_mode i1, machine_mode i2)
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
}

int
pattern518 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1)
    return -1;
  switch (GET_MODE (operands[1]))
    {
    case E_V8SImode:
      if (!nonimmediate_operand (operands[1], E_V8SImode))
        return -1;
      return 0;

    case E_V8DImode:
      if (!nonimmediate_operand (operands[1], E_V8DImode))
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern523 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], E_V2DImode)
      || GET_MODE (x1) != E_V2DImode)
    return -1;
  switch (GET_MODE (operands[1]))
    {
    case E_V2HFmode:
      if (!memory_operand (operands[1], E_V2HFmode))
        return -1;
      return 0;

    case E_V2DFmode:
      if (!vector_operand (operands[1], E_V2DFmode))
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern529 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12, x13, x14, x15, x16, x17;
  rtx x18, x19, x20, x21, x22, x23, x24, x25;
  rtx x26, x27, x28, x29, x30, x31, x32, x33;
  rtx x34, x35, x36, x37;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  if (XINT (x2, 1) != 151)
    return -1;
  x3 = XVECEXP (x2, 0, 0);
  operands[1] = x3;
  x4 = XVECEXP (x2, 0, 1);
  operands[2] = x4;
  x5 = XEXP (x1, 1);
  switch (XVECLEN (x5, 0))
    {
    case 16:
      x6 = XVECEXP (x5, 0, 0);
      if (x6 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
        return -1;
      x7 = XVECEXP (x5, 0, 1);
      if (x7 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
        return -1;
      x8 = XVECEXP (x5, 0, 2);
      if (x8 != const_int_rtx[MAX_SAVED_CONST_INT + 2])
        return -1;
      x9 = XVECEXP (x5, 0, 3);
      if (x9 != const_int_rtx[MAX_SAVED_CONST_INT + 3])
        return -1;
      x10 = XVECEXP (x5, 0, 4);
      if (x10 != const_int_rtx[MAX_SAVED_CONST_INT + 4])
        return -1;
      x11 = XVECEXP (x5, 0, 5);
      if (x11 != const_int_rtx[MAX_SAVED_CONST_INT + 5])
        return -1;
      x12 = XVECEXP (x5, 0, 6);
      if (x12 != const_int_rtx[MAX_SAVED_CONST_INT + 6])
        return -1;
      x13 = XVECEXP (x5, 0, 7);
      if (x13 != const_int_rtx[MAX_SAVED_CONST_INT + 7])
        return -1;
      x14 = XVECEXP (x5, 0, 8);
      if (x14 != const_int_rtx[MAX_SAVED_CONST_INT + 8])
        return -1;
      x15 = XVECEXP (x5, 0, 9);
      if (x15 != const_int_rtx[MAX_SAVED_CONST_INT + 9])
        return -1;
      x16 = XVECEXP (x5, 0, 10);
      if (x16 != const_int_rtx[MAX_SAVED_CONST_INT + 10])
        return -1;
      x17 = XVECEXP (x5, 0, 11);
      if (x17 != const_int_rtx[MAX_SAVED_CONST_INT + 11])
        return -1;
      x18 = XVECEXP (x5, 0, 12);
      if (x18 != const_int_rtx[MAX_SAVED_CONST_INT + 12])
        return -1;
      x19 = XVECEXP (x5, 0, 13);
      if (x19 != const_int_rtx[MAX_SAVED_CONST_INT + 13])
        return -1;
      x20 = XVECEXP (x5, 0, 14);
      if (x20 != const_int_rtx[MAX_SAVED_CONST_INT + 14])
        return -1;
      x21 = XVECEXP (x5, 0, 15);
      if (x21 != const_int_rtx[MAX_SAVED_CONST_INT + 15])
        return -1;
      switch (GET_MODE (operands[0]))
        {
        case E_V16HImode:
          return pattern528 (x1, 
E_V32HImode, 
E_V16HImode); /* [-1, 0] */

        case E_V16QImode:
          if (pattern528 (x1, 
E_V32QImode, 
E_V16QImode) != 0)
            return -1;
          return 1;

        default:
          return -1;
        }

    case 8:
      x6 = XVECEXP (x5, 0, 0);
      if (x6 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
        return -1;
      x7 = XVECEXP (x5, 0, 1);
      if (x7 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
        return -1;
      x8 = XVECEXP (x5, 0, 2);
      if (x8 != const_int_rtx[MAX_SAVED_CONST_INT + 2])
        return -1;
      x9 = XVECEXP (x5, 0, 3);
      if (x9 != const_int_rtx[MAX_SAVED_CONST_INT + 3])
        return -1;
      x10 = XVECEXP (x5, 0, 4);
      if (x10 != const_int_rtx[MAX_SAVED_CONST_INT + 4])
        return -1;
      x11 = XVECEXP (x5, 0, 5);
      if (x11 != const_int_rtx[MAX_SAVED_CONST_INT + 5])
        return -1;
      x12 = XVECEXP (x5, 0, 6);
      if (x12 != const_int_rtx[MAX_SAVED_CONST_INT + 6])
        return -1;
      x13 = XVECEXP (x5, 0, 7);
      if (x13 != const_int_rtx[MAX_SAVED_CONST_INT + 7])
        return -1;
      switch (GET_MODE (operands[0]))
        {
        case E_V8HImode:
          if (pattern528 (x1, 
E_V16HImode, 
E_V8HImode) != 0)
            return -1;
          return 2;

        case E_V8SImode:
          if (pattern528 (x1, 
E_V16SImode, 
E_V8SImode) != 0)
            return -1;
          return 3;

        default:
          return -1;
        }

    case 32:
      x6 = XVECEXP (x5, 0, 0);
      if (x6 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
        return -1;
      x7 = XVECEXP (x5, 0, 1);
      if (x7 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
        return -1;
      x8 = XVECEXP (x5, 0, 2);
      if (x8 != const_int_rtx[MAX_SAVED_CONST_INT + 2])
        return -1;
      x9 = XVECEXP (x5, 0, 3);
      if (x9 != const_int_rtx[MAX_SAVED_CONST_INT + 3])
        return -1;
      x10 = XVECEXP (x5, 0, 4);
      if (x10 != const_int_rtx[MAX_SAVED_CONST_INT + 4])
        return -1;
      x11 = XVECEXP (x5, 0, 5);
      if (x11 != const_int_rtx[MAX_SAVED_CONST_INT + 5])
        return -1;
      x12 = XVECEXP (x5, 0, 6);
      if (x12 != const_int_rtx[MAX_SAVED_CONST_INT + 6])
        return -1;
      x13 = XVECEXP (x5, 0, 7);
      if (x13 != const_int_rtx[MAX_SAVED_CONST_INT + 7])
        return -1;
      x14 = XVECEXP (x5, 0, 8);
      if (x14 != const_int_rtx[MAX_SAVED_CONST_INT + 8])
        return -1;
      x15 = XVECEXP (x5, 0, 9);
      if (x15 != const_int_rtx[MAX_SAVED_CONST_INT + 9])
        return -1;
      x16 = XVECEXP (x5, 0, 10);
      if (x16 != const_int_rtx[MAX_SAVED_CONST_INT + 10])
        return -1;
      x17 = XVECEXP (x5, 0, 11);
      if (x17 != const_int_rtx[MAX_SAVED_CONST_INT + 11])
        return -1;
      x18 = XVECEXP (x5, 0, 12);
      if (x18 != const_int_rtx[MAX_SAVED_CONST_INT + 12])
        return -1;
      x19 = XVECEXP (x5, 0, 13);
      if (x19 != const_int_rtx[MAX_SAVED_CONST_INT + 13])
        return -1;
      x20 = XVECEXP (x5, 0, 14);
      if (x20 != const_int_rtx[MAX_SAVED_CONST_INT + 14])
        return -1;
      x21 = XVECEXP (x5, 0, 15);
      if (x21 != const_int_rtx[MAX_SAVED_CONST_INT + 15])
        return -1;
      x22 = XVECEXP (x5, 0, 16);
      if (x22 != const_int_rtx[MAX_SAVED_CONST_INT + 16])
        return -1;
      x23 = XVECEXP (x5, 0, 17);
      if (x23 != const_int_rtx[MAX_SAVED_CONST_INT + 17])
        return -1;
      x24 = XVECEXP (x5, 0, 18);
      if (x24 != const_int_rtx[MAX_SAVED_CONST_INT + 18])
        return -1;
      x25 = XVECEXP (x5, 0, 19);
      if (x25 != const_int_rtx[MAX_SAVED_CONST_INT + 19])
        return -1;
      x26 = XVECEXP (x5, 0, 20);
      if (x26 != const_int_rtx[MAX_SAVED_CONST_INT + 20])
        return -1;
      x27 = XVECEXP (x5, 0, 21);
      if (x27 != const_int_rtx[MAX_SAVED_CONST_INT + 21])
        return -1;
      x28 = XVECEXP (x5, 0, 22);
      if (x28 != const_int_rtx[MAX_SAVED_CONST_INT + 22])
        return -1;
      x29 = XVECEXP (x5, 0, 23);
      if (x29 != const_int_rtx[MAX_SAVED_CONST_INT + 23])
        return -1;
      x30 = XVECEXP (x5, 0, 24);
      if (x30 != const_int_rtx[MAX_SAVED_CONST_INT + 24])
        return -1;
      x31 = XVECEXP (x5, 0, 25);
      if (x31 != const_int_rtx[MAX_SAVED_CONST_INT + 25])
        return -1;
      x32 = XVECEXP (x5, 0, 26);
      if (x32 != const_int_rtx[MAX_SAVED_CONST_INT + 26])
        return -1;
      x33 = XVECEXP (x5, 0, 27);
      if (x33 != const_int_rtx[MAX_SAVED_CONST_INT + 27])
        return -1;
      x34 = XVECEXP (x5, 0, 28);
      if (x34 != const_int_rtx[MAX_SAVED_CONST_INT + 28])
        return -1;
      x35 = XVECEXP (x5, 0, 29);
      if (x35 != const_int_rtx[MAX_SAVED_CONST_INT + 29])
        return -1;
      x36 = XVECEXP (x5, 0, 30);
      if (x36 != const_int_rtx[MAX_SAVED_CONST_INT + 30])
        return -1;
      x37 = XVECEXP (x5, 0, 31);
      if (x37 != const_int_rtx[MAX_SAVED_CONST_INT + 31]
          || pattern528 (x1, 
E_V64QImode, 
E_V32QImode) != 0)
        return -1;
      return 4;

    case 4:
      x6 = XVECEXP (x5, 0, 0);
      if (x6 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
        return -1;
      x7 = XVECEXP (x5, 0, 1);
      if (x7 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
        return -1;
      x8 = XVECEXP (x5, 0, 2);
      if (x8 != const_int_rtx[MAX_SAVED_CONST_INT + 2])
        return -1;
      x9 = XVECEXP (x5, 0, 3);
      if (x9 != const_int_rtx[MAX_SAVED_CONST_INT + 3]
          || pattern528 (x1, 
E_V8SImode, 
E_V4SImode) != 0)
        return -1;
      return 5;

    default:
      return -1;
    }
}

int
pattern607 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  switch (GET_CODE (x2))
    {
    case CONST_INT:
    case CONST_WIDE_INT:
      operands[3] = x2;
      switch (GET_MODE (operands[0]))
        {
        case E_QImode:
          return pattern604 (x1, 
E_QImode); /* [-1, 0] */

        case E_HImode:
          if (pattern604 (x1, 
E_HImode) != 0)
            return -1;
          return 1;

        case E_TImode:
          if (pattern605 (x1, 
E_TImode) != 0)
            return -1;
          return 2;

        default:
          return -1;
        }

    case ZERO_EXTEND:
      if (pattern606 (x1, 
E_DImode, 
E_TImode) != 0)
        return -1;
      return 3;

    default:
      return -1;
    }
}

int
pattern616 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  operands[2] = x2;
  if (!const_1_to_63_operand (operands[2], E_QImode)
      || !register_operand (operands[0], E_TImode)
      || GET_MODE (x1) != E_TImode
      || !register_operand (operands[1], E_TImode))
    return -1;
  return 0;
}

int
pattern623 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) != SUBREG
      || maybe_ne (SUBREG_BYTE (x2), 0)
      || GET_MODE (x2) != E_QImode)
    return -1;
  x3 = XEXP (x2, 0);
  switch (GET_CODE (x3))
    {
    case AND:
      return pattern448 (x1); /* [-1, 1] */

    case PLUS:
      res = pattern448 (x1);
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
      if (!int248_register_operand (operands[2], E_VOIDmode))
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
pattern637 (rtx x1)
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
      if (XWINT (x2, 0) != 1L)
        return -1;
      x3 = XEXP (x1, 1);
      if (!rtx_equal_p (x3, operands[1]))
        return -1;
      switch (GET_MODE (operands[0]))
        {
        case E_V8HFmode:
          return 12;

        case E_V4SFmode:
          return 13;

        case E_V2DFmode:
          return 14;

        default:
          return -1;
        }

    default:
      return -1;
    }
}

int
pattern649 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  operands[1] = x4;
  x5 = XEXP (x3, 1);
  operands[2] = x5;
  x6 = XVECEXP (x1, 0, 1);
  if (!const_4_or_8_to_11_operand (x6, E_SImode))
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
          return pattern646 (x1, 
E_V32HFmode, 
E_SImode); /* [-1, 0] */

        case E_V16HFmode:
          if (pattern646 (x1, 
E_V16HFmode, 
E_HImode) != 0)
            return -1;
          return 1;

        case E_V8HFmode:
          if (pattern646 (x1, 
E_V8HFmode, 
E_QImode) != 0)
            return -1;
          return 2;

        case E_V16SFmode:
          if (pattern646 (x1, 
E_V16SFmode, 
E_HImode) != 0)
            return -1;
          return 3;

        case E_V8SFmode:
          if (pattern646 (x1, 
E_V8SFmode, 
E_QImode) != 0)
            return -1;
          return 4;

        case E_V4SFmode:
          if (pattern646 (x1, 
E_V4SFmode, 
E_QImode) != 0)
            return -1;
          return 5;

        case E_V8DFmode:
          if (pattern646 (x1, 
E_V8DFmode, 
E_QImode) != 0)
            return -1;
          return 6;

        case E_V4DFmode:
          if (pattern646 (x1, 
E_V4DFmode, 
E_QImode) != 0)
            return -1;
          return 7;

        case E_V2DFmode:
          if (pattern646 (x1, 
E_V2DFmode, 
E_QImode) != 0)
            return -1;
          return 8;

        default:
          return -1;
        }

    case CONST_INT:
      res = pattern648 (x1);
      if (res >= 0)
        return res + 9; /* [9, 11] */
      return -1;

    default:
      return -1;
    }
}

int
pattern667 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 2);
  operands[3] = x2;
  switch (GET_MODE (operands[0]))
    {
    case E_V32HFmode:
      return pattern666 (x1, 
E_V32HFmode); /* [-1, 0] */

    case E_V16HFmode:
      if (pattern666 (x1, 
E_V16HFmode) != 0)
        return -1;
      return 1;

    case E_V8HFmode:
      if (pattern666 (x1, 
E_V8HFmode) != 0)
        return -1;
      return 2;

    default:
      return -1;
    }
}

int
pattern676 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1)
    return -1;
  switch (GET_MODE (operands[1]))
    {
    case E_BFmode:
      if (!memory_operand (operands[1], E_BFmode))
        return -1;
      return 0;

    case E_HFmode:
      if (!memory_operand (operands[1], E_HFmode))
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern683 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  x4 = XEXP (x3, 1);
  if (x4 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
    return -1;
  x5 = XEXP (x2, 0);
  if (GET_CODE (x5) != REG
      || REGNO (x5) != 17
      || GET_MODE (x5) != E_CCZmode)
    return -1;
  x6 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x6) != CLOBBER
      || GET_MODE (x3) != E_CCZmode)
    return -1;
  return 0;
}

int
pattern689 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (!nonimmediate_operand (operands[0], i1)
      || GET_MODE (x1) != i1
      || !x86_64_general_operand (operands[1], i1))
    return -1;
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) != i1)
    return -1;
  return 0;
}

int
pattern693 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4;
  int res ATTRIBUTE_UNUSED;
  if (GET_MODE (x1) != E_SImode)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_CODE (x2) != ASHIFT
      || GET_MODE (x2) != E_SImode)
    return -1;
  x3 = XEXP (x2, 0);
  if (x3 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
    return -1;
  x4 = XEXP (x1, 1);
  if (x4 != const_int_rtx[MAX_SAVED_CONST_INT + -1])
    return -1;
  return 0;
}

int
pattern697 (rtx x1, machine_mode i1)
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
pattern704 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 1);
  if (XVECLEN (x2, 0) != 1
      || XINT (x2, 1) != 38)
    return -1;
  return pattern224 (x1); /* [-1, 1] */
}

int
pattern707 (rtx x1, int i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  x4 = XVECEXP (x3, 0, 0);
  if (x4 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
    return -1;
  x5 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x5) != SET)
    return -1;
  x6 = XEXP (x5, 1);
  if (GET_CODE (x6) != UNSPEC_VOLATILE
      || XVECLEN (x6, 0) != 1
      || XINT (x6, 1) != i1
      || GET_MODE (x6) != E_CCCmode)
    return -1;
  x7 = XVECEXP (x6, 0, 0);
  if (x7 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
    return -1;
  x8 = XEXP (x5, 0);
  if (GET_CODE (x8) != REG
      || REGNO (x8) != 17
      || GET_MODE (x8) != E_CCCmode)
    return -1;
  switch (GET_MODE (operands[0]))
    {
    case E_HImode:
      if (!register_operand (operands[0], E_HImode)
          || GET_MODE (x3) != E_HImode)
        return -1;
      return 0;

    case E_SImode:
      if (!register_operand (operands[0], E_SImode)
          || GET_MODE (x3) != E_SImode)
        return -1;
      return 1;

    case E_DImode:
      if (!register_operand (operands[0], E_DImode)
          || GET_MODE (x3) != E_DImode)
        return -1;
      return 2;

    default:
      return -1;
    }
}

int
pattern720 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  x4 = XEXP (x3, 0);
  x5 = XEXP (x4, 0);
  if (GET_MODE (x5) != i2
      || !nonimmediate_operand (operands[1], i1)
      || !const_scalar_int_operand (operands[3], i2))
    return -1;
  x6 = XEXP (x3, 1);
  if (GET_MODE (x6) != i2)
    return -1;
  x7 = XEXP (x6, 0);
  if (GET_MODE (x7) != i1
      || !x86_64_hilo_general_operand (operands[2], i1)
      || !nonimmediate_operand (operands[0], i1))
    return -1;
  x8 = XVECEXP (x1, 0, 1);
  x9 = XEXP (x8, 1);
  if (GET_MODE (x9) != i1)
    return -1;
  return 0;
}

int
pattern729 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8;
  int res ATTRIBUTE_UNUSED;
  if (GET_CODE (x1) != SET)
    return -1;
  x2 = XEXP (x1, 1);
  operands[5] = x2;
  if (!register_operand (operands[5], i1))
    return -1;
  x3 = XEXP (x1, 0);
  if (!rtx_equal_p (x3, operands[1]))
    return -1;
  x4 = PATTERN (peep2_next_insn (3));
  if (GET_CODE (x4) != SET)
    return -1;
  x5 = XEXP (x4, 1);
  if (GET_CODE (x5) != COMPARE)
    return -1;
  x6 = XEXP (x5, 1);
  if (x6 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
    return -1;
  x7 = XEXP (x4, 0);
  if (GET_CODE (x7) != REG
      || REGNO (x7) != 17)
    return -1;
  x8 = XEXP (x5, 0);
  if (!rtx_equal_p (x8, operands[5]))
    return -1;
  return 0;
}

int
pattern739 (rtx x1, machine_mode i1)
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
pattern745 (machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || !ix86_comparison_uns_operator (operands[1], i1)
      || !register_operand (operands[2], i1)
      || !register_operand (operands[3], i1))
    return -1;
  return 0;
}

int
pattern752 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  operands[1] = x2;
  switch (GET_MODE (operands[0]))
    {
    case E_SImode:
      return pattern751 (x1, 
E_SImode); /* [-1, 0] */

    case E_DImode:
      if (pattern751 (x1, 
E_DImode) != 0)
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern759 (rtx x1, machine_mode i1, machine_mode i2)
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
      || !nonimmediate_operand (operands[2], i1))
    return -1;
  return 0;
}

int
pattern768 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 2);
  if (XWINT (x2, 0) != 1L)
    return -1;
  x3 = XEXP (x1, 0);
  x4 = XEXP (x3, 0);
  x5 = XVECEXP (x4, 0, 0);
  operands[1] = x5;
  x6 = XVECEXP (x4, 0, 1);
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
      return pattern767 (x1, 
E_V8HFmode); /* [-1, 0] */

    case E_V4SFmode:
      if (pattern767 (x1, 
E_V4SFmode) != 0)
        return -1;
      return 1;

    case E_V2DFmode:
      if (pattern767 (x1, 
E_V2DFmode) != 0)
        return -1;
      return 2;

    default:
      return -1;
    }
}

int
pattern781 (rtx x1, machine_mode i1)
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
pattern787 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1
      || !register_operand (operands[2], i1)
      || !memory_operand (operands[1], i1))
    return -1;
  return 0;
}

int
pattern796 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i2)
      || GET_MODE (x1) != i2
      || !nonimmediate_operand (operands[1], i1))
    return -1;
  x2 = XEXP (x1, 1);
  if (!rtx_equal_p (x2, operands[1]))
    return -1;
  return 0;
}

int
pattern801 (machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || !ix86_comparison_uns_operator (operands[1], i1)
      || !register_operand (operands[2], i1)
      || !nonimmediate_operand (operands[3], i1))
    return -1;
  return 0;
}

int
pattern809 (rtx x1, machine_mode i1)
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
pattern815 (rtx x1, machine_mode i1)
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
pattern820 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  switch (GET_CODE (x1))
    {
    case CLOBBER:
      x2 = XEXP (x1, 0);
      if (GET_CODE (x2) != REG
          || REGNO (x2) != 17
          || GET_MODE (x2) != E_CCmode)
        return -1;
      return 0;

    case UNSPEC:
      if (XVECLEN (x1, 0) != 1
          || XINT (x1, 1) != 174)
        return -1;
      x3 = XVECEXP (x1, 0, 0);
      if (x3 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
        return -1;
      switch (GET_MODE (operands[0]))
        {
        case E_QImode:
          return 1;

        case E_HImode:
          return 2;

        case E_SImode:
          return 3;

        case E_DImode:
          return 4;

        default:
          return -1;
        }

    default:
      return -1;
    }
}

int
pattern827 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10;
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
  x9 = XEXP (x8, 0);
  operands[1] = x9;
  if (!nonimmediate_operand (operands[1], E_SImode))
    return -1;
  x10 = XVECEXP (x2, 0, 0);
  operands[2] = x10;
  if (!register_operand (operands[2], E_DImode))
    return -1;
  return 0;
}

int
pattern839 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12, x13, x14, x15, x16, x17;
  rtx x18;
  int res ATTRIBUTE_UNUSED;
  if (peep2_current_count < 4
      || peep2_current_count < 5
      || !memory_operand (operands[1], i1)
      || !register_operand (operands[0], i1))
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
  if (GET_CODE (x6) != XOR)
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
  x10 = XEXP (x6, 1);
  operands[2] = x10;
  x11 = XEXP (x6, 0);
  if (!rtx_equal_p (x11, operands[4]))
    return -1;
  x12 = PATTERN (peep2_next_insn (3));
  if (GET_CODE (x12) != SET)
    return -1;
  x13 = XEXP (x12, 0);
  if (!rtx_equal_p (x13, operands[1]))
    return -1;
  x14 = PATTERN (peep2_next_insn (4));
  if (GET_CODE (x14) != SET)
    return -1;
  x15 = XEXP (x14, 1);
  if (GET_CODE (x15) != COMPARE
      || GET_MODE (x15) != E_CCZmode)
    return -1;
  x16 = XEXP (x14, 0);
  if (GET_CODE (x16) != REG
      || REGNO (x16) != 17
      || GET_MODE (x16) != E_CCZmode)
    return -1;
  x17 = XEXP (x15, 0);
  if (!register_operand (x17, i1))
    return -1;
  x18 = XEXP (x15, 1);
  if (!nonmemory_operand (x18, i1))
    return -1;
  return 0;
}

int
pattern856 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i2)
      || GET_MODE (x1) != i2
      || pattern855 (x1, 
i1, 
i2) != 0)
    return -1;
  return 0;
}

int
pattern861 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1
      || !register_operand (operands[2], i1)
      || !register_operand (operands[1], i1)
      || !const_0_to_7_operand (operands[3], E_SImode))
    return -1;
  return 0;
}

int
pattern867 (rtx x1, machine_mode i1)
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
  x3 = XEXP (x1, 2);
  if (GET_MODE (x3) != i1)
    return -1;
  return 0;
}

int
pattern873 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  switch (GET_MODE (operands[0]))
    {
    case E_DImode:
      return pattern872 (x1, 
E_DImode, 
E_V64QImode); /* [-1, 0] */

    case E_SImode:
      if (!register_operand (operands[0], E_SImode)
          || GET_MODE (x1) != E_SImode)
        return -1;
      x2 = XEXP (x1, 0);
      if (GET_MODE (x2) != E_SImode
          || !register_operand (operands[3], E_SImode))
        return -1;
      res = pattern869 ();
      if (res >= 0)
        return res + 1; /* [1, 2] */
      return -1;

    default:
      return -1;
    }
}

int
pattern880 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1
      || !register_operand (operands[1], i1)
      || !const_int_operand (operands[2], i1))
    return -1;
  return 0;
}

int
pattern889 (rtx x1, machine_mode i1)
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
      || !register_operand (operands[2], i1))
    return -1;
  return 0;
}

int
pattern895 (rtx x1)
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
pattern905 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  x5 = XVECEXP (x4, 0, 0);
  if (x5 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
    return -1;
  x6 = XVECEXP (x4, 0, 1);
  if (x6 != const_int_rtx[MAX_SAVED_CONST_INT + 1]
      || !register_operand (operands[0], E_V2DImode)
      || GET_MODE (x1) != E_V2DImode
      || GET_MODE (x2) != E_V2DImode
      || GET_MODE (x3) != i2)
    return -1;
  x7 = XEXP (x3, 0);
  if (GET_MODE (x7) != i1
      || !nonimm_or_0_operand (operands[2], E_V2DImode))
    return -1;
  return 0;
}

int
pattern913 (rtx x1, machine_mode i1, machine_mode i2, machine_mode i3)
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
      || !nonimm_or_0_operand (operands[3], i3))
    return -1;
  x4 = XEXP (x2, 2);
  if (GET_MODE (x4) != i2
      || !register_operand (operands[4], i1))
    return -1;
  return 0;
}

int
pattern922 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != E_V8QImode
      || !register_operand (operands[0], E_V16QImode)
      || GET_MODE (x1) != E_V16QImode
      || !register_operand (operands[1], E_V16QImode)
      || !nonimmediate_operand (operands[2], E_V8HFmode)
      || !const0_operand (operands[3], E_V8QImode))
    return -1;
  return 0;
}

int
pattern924 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1
      || !nonimmediate_operand (operands[1], i1)
      || !nonimmediate_operand (operands[2], i1)
      || !nonimmediate_operand (operands[3], i1))
    return -1;
  return 0;
}

int
pattern927 (rtx x1, machine_mode i1)
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
  x3 = XEXP (x1, 2);
  if (GET_MODE (x3) != i1
      || !nonimmediate_operand (operands[3], i1))
    return -1;
  return 0;
}

int
pattern934 (rtx x1, machine_mode i1)
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
      || !const0_operand (operands[2], i1)
      || !const1_operand (operands[3], i1))
    return -1;
  return 0;
}

int
pattern940 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  operands[0] = x2;
  x3 = XEXP (x1, 1);
  x4 = XEXP (x3, 0);
  x5 = XEXP (x4, 0);
  operands[2] = x5;
  x6 = XEXP (x3, 1);
  operands[1] = x6;
  switch (GET_MODE (operands[0]))
    {
    case E_DImode:
      return pattern939 (x3, 
E_DImode, 
E_SImode); /* [-1, 0] */

    case E_TImode:
      if (pattern939 (x3, 
E_TImode, 
E_DImode) != 0)
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern947 (rtx x1, machine_mode i1)
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
  x3 = XVECEXP (x2, 0, 2);
  if (GET_MODE (x3) != i1)
    return -1;
  x4 = XEXP (x1, 1);
  if (GET_MODE (x4) != i1)
    return -1;
  x5 = XEXP (x4, 0);
  if (GET_MODE (x5) != i1)
    return -1;
  return 0;
}

int
pattern958 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  if (!immediate_operand (operands[1], i1)
      || GET_CODE (x1) != SET)
    return -1;
  x2 = XEXP (x1, 0);
  operands[2] = x2;
  if (!mask_reg_operand (operands[2], i1))
    return -1;
  x3 = XEXP (x1, 1);
  if (!rtx_equal_p (x3, operands[0]))
    return -1;
  return 0;
}

int
pattern963 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  int res ATTRIBUTE_UNUSED;
  operands[1] = x1;
  if (!general_reg_operand (operands[1], i1))
    return -1;
  x2 = PATTERN (peep2_next_insn (2));
  if (GET_CODE (x2) != PARALLEL
      || XVECLEN (x2, 0) != 2)
    return -1;
  x3 = XVECEXP (x2, 0, 0);
  if (GET_CODE (x3) != SET)
    return -1;
  x4 = XEXP (x3, 0);
  if (GET_CODE (x4) != REG
      || REGNO (x4) != 17)
    return -1;
  x5 = XVECEXP (x2, 0, 1);
  if (GET_CODE (x5) != SET)
    return -1;
  x6 = XEXP (x3, 1);
  operands[5] = x6;
  x7 = XEXP (x5, 1);
  operands[6] = x7;
  x8 = XEXP (x5, 0);
  if (!rtx_equal_p (x8, operands[0]))
    return -1;
  x9 = PATTERN (peep2_next_insn (3));
  return pattern962 (x9, 
i1); /* [-1, 0] */
}

int
pattern969 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1
      || !register_operand (operands[1], i1)
      || !register_operand (operands[2], i1)
      || !register_operand (operands[3], i1))
    return -1;
  return 0;
}

int
pattern973 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], E_HImode)
      || GET_MODE (x1) != E_HImode)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != E_HImode)
    return -1;
  switch (GET_MODE (operands[1]))
    {
    case E_V16SImode:
      if (!register_operand (operands[1], E_V16SImode)
          || !nonimmediate_operand (operands[2], E_V16SImode)
          || !const_0_to_7_operand (operands[3], E_SImode))
        return -1;
      return 0;

    case E_V16HFmode:
      if (!register_operand (operands[1], E_V16HFmode)
          || !nonimmediate_operand (operands[2], E_V16HFmode)
          || !const_0_to_31_operand (operands[3], E_SImode))
        return -1;
      return 1;

    case E_V16SFmode:
      if (!register_operand (operands[1], E_V16SFmode)
          || !nonimmediate_operand (operands[2], E_V16SFmode)
          || !const_0_to_31_operand (operands[3], E_SImode))
        return -1;
      return 2;

    case E_V16QImode:
      if (!register_operand (operands[1], E_V16QImode)
          || !nonimmediate_operand (operands[2], E_V16QImode)
          || !const_0_to_7_operand (operands[3], E_SImode))
        return -1;
      return 3;

    case E_V16HImode:
      if (!register_operand (operands[1], E_V16HImode)
          || !nonimmediate_operand (operands[2], E_V16HImode)
          || !const_0_to_7_operand (operands[3], E_SImode))
        return -1;
      return 4;

    default:
      return -1;
    }
}

int
pattern982 (rtx x1)
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
pattern994 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], E_V8SImode)
      || GET_MODE (x1) != E_V8SImode)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != E_V8SImode
      || !nonimm_or_0_operand (operands[2], E_V8SImode)
      || !register_operand (operands[3], E_QImode))
    return -1;
  switch (GET_MODE (operands[1]))
    {
    case E_V8HFmode:
      if (!vector_operand (operands[1], E_V8HFmode))
        return -1;
      return 0;

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
}

int
pattern1007 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (!nonimmediate_operand (operands[0], i1)
      || GET_MODE (x1) != i1)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != i1
      || !general_operand (operands[2], i2)
      || !nonimm_or_0_operand (operands[1], i1))
    return -1;
  return 0;
}

int
pattern1015 (rtx x1, machine_mode i1)
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
      || !vector_operand (operands[2], i1)
      || !nonimm_or_0_operand (operands[3], i1)
      || !register_operand (operands[4], E_QImode))
    return -1;
  return 0;
}

int
pattern1023 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], E_V8HFmode)
      || GET_MODE (x1) != E_V8HFmode)
    return -1;
  x2 = XVECEXP (x1, 0, 0);
  if (GET_MODE (x2) != E_V8HFmode)
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
pattern1037 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12, x13;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
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
      x13 = XEXP (x3, 1);
      operands[2] = x13;
      if (!nonmemory_operand (operands[2], E_QImode))
        return -1;
      return pattern1036 (x1); /* [-1, 2] */

    default:
      return -1;
    }
}

int
pattern1048 (rtx x1, rtx_code i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 1);
  switch (GET_CODE (x3))
    {
    case AND:
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
              || pattern1047 (x1, 
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
      return 2;

    default:
      return -1;
    }
}

int
pattern1070 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != i1
      || !register_operand (operands[4], i1))
    return -1;
  return 0;
}

int
pattern1073 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], E_HImode)
      || GET_MODE (x1) != E_HImode)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != E_HImode)
    return -1;
  return pattern740 (); /* [-1, 2] */
}

int
pattern1080 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  switch (GET_MODE (x1))
    {
    case E_DImode:
      x2 = XEXP (x1, 0);
      if (GET_MODE (x2) != E_DImode
          || !register_operand (operands[1], E_V64QImode)
          || !nonimmediate_operand (operands[2], E_V64QImode)
          || !register_operand (operands[3], E_DImode))
        return -1;
      return 0;

    case E_SImode:
      x2 = XEXP (x1, 0);
      if (GET_MODE (x2) != E_SImode
          || !register_operand (operands[3], E_SImode))
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

    case E_HImode:
      x2 = XEXP (x1, 0);
      if (GET_MODE (x2) != E_HImode
          || !register_operand (operands[3], E_HImode))
        return -1;
      switch (GET_MODE (operands[1]))
        {
        case E_V16QImode:
          if (!register_operand (operands[1], E_V16QImode)
              || !nonimmediate_operand (operands[2], E_V16QImode))
            return -1;
          return 3;

        case E_V16HImode:
          if (!register_operand (operands[1], E_V16HImode)
              || !nonimmediate_operand (operands[2], E_V16HImode))
            return -1;
          return 4;

        case E_V16SImode:
          if (!register_operand (operands[1], E_V16SImode)
              || !nonimmediate_operand (operands[2], E_V16SImode))
            return -1;
          return 5;

        default:
          return -1;
        }

    case E_QImode:
      x2 = XEXP (x1, 0);
      if (GET_MODE (x2) != E_QImode
          || !register_operand (operands[3], E_QImode))
        return -1;
      switch (GET_MODE (operands[1]))
        {
        case E_V8HImode:
          if (!register_operand (operands[1], E_V8HImode)
              || !nonimmediate_operand (operands[2], E_V8HImode))
            return -1;
          return 6;

        case E_V8SImode:
          if (!register_operand (operands[1], E_V8SImode)
              || !nonimmediate_operand (operands[2], E_V8SImode))
            return -1;
          return 7;

        case E_V4SImode:
          if (!register_operand (operands[1], E_V4SImode)
              || !nonimmediate_operand (operands[2], E_V4SImode))
            return -1;
          return 8;

        case E_V8DImode:
          if (!register_operand (operands[1], E_V8DImode)
              || !nonimmediate_operand (operands[2], E_V8DImode))
            return -1;
          return 9;

        case E_V4DImode:
          if (!register_operand (operands[1], E_V4DImode)
              || !nonimmediate_operand (operands[2], E_V4DImode))
            return -1;
          return 10;

        case E_V2DImode:
          if (!register_operand (operands[1], E_V2DImode)
              || !nonimmediate_operand (operands[2], E_V2DImode))
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
pattern1123 (rtx x1, machine_mode i1, machine_mode i2, machine_mode i3, machine_mode i4)
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
      || !vector_operand (operands[2], i3))
    return -1;
  x4 = XEXP (x2, 1);
  return pattern1121 (x4, 
i1, 
i2, 
i3, 
i4); /* [-1, 0] */
}

int
pattern1131 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 2);
  switch (GET_CODE (x4))
    {
    case REG:
    case SUBREG:
    case MEM:
      operands[3] = x4;
      x5 = XEXP (x2, 1);
      switch (GET_CODE (x5))
        {
        case CONST_INT:
        case CONST_DOUBLE:
        case CONST_VECTOR:
          operands[4] = x5;
          x6 = XEXP (x2, 2);
          operands[5] = x6;
          x7 = XVECEXP (x1, 0, 1);
          operands[6] = x7;
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

        case REG:
        case SUBREG:
        case MEM:
          res = pattern1130 (x1);
          if (res >= 0)
            return res + 6; /* [6, 14] */
          return -1;

        default:
          return -1;
        }

    case NEG:
      x8 = XEXP (x4, 0);
      operands[3] = x8;
      return 15;

    default:
      return -1;
    }
}

int
pattern1150 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  x4 = XVECEXP (x3, 0, 0);
  x5 = XEXP (x4, 0);
  operands[5] = x5;
  x6 = XVECEXP (x3, 0, 1);
  operands[2] = x6;
  if (!register_operand (operands[2], E_QImode))
    return -1;
  x7 = XVECEXP (x3, 0, 2);
  operands[3] = x7;
  x8 = XVECEXP (x3, 0, 3);
  operands[4] = x8;
  x9 = XVECEXP (x1, 0, 1);
  x10 = XEXP (x9, 0);
  operands[1] = x10;
  switch (GET_MODE (operands[0]))
    {
    case E_SImode:
      return pattern1149 (x3, 
E_SImode); /* [-1, 0] */

    case E_DImode:
      if (pattern1149 (x3, 
E_DImode) != 0)
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern1161 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7;
  int res ATTRIBUTE_UNUSED;
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
      return pattern1159 (x1, 
E_QImode); /* [-1, 0] */

    case E_HImode:
      if (pattern1159 (x1, 
E_HImode) != 0)
        return -1;
      return 1;

    case E_SImode:
      if (pattern1160 (x1, 
E_SImode) != 0)
        return -1;
      return 2;

    case E_DImode:
      if (pattern1160 (x1, 
E_DImode) != 0)
        return -1;
      return 3;

    default:
      return -1;
    }
}

int
pattern1178 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  if (maybe_ne (SUBREG_BYTE (x2), 0)
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
      x6 = XEXP (x3, 0);
      if (!int248_register_operand (x6, E_VOIDmode))
        return -1;
      return 0;

    default:
      return -1;
    }
}

int
pattern1190 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  x4 = XEXP (x3, 0);
  if (!rtx_equal_p (x4, operands[0]))
    return -1;
  x5 = XVECEXP (x1, 0, 1);
  x6 = XEXP (x5, 1);
  if (GET_CODE (x6) != MINUS)
    return -1;
  x7 = XEXP (x2, 0);
  if (GET_MODE (x7) != E_CCmode
      || GET_MODE (x3) != E_CCmode)
    return -1;
  x8 = XEXP (x3, 1);
  operands[2] = x8;
  if (!memory_operand (operands[2], i1))
    return -1;
  x9 = XEXP (x6, 0);
  if (!rtx_equal_p (x9, operands[0]))
    return -1;
  x10 = XEXP (x6, 1);
  if (!rtx_equal_p (x10, operands[2]))
    return -1;
  return 0;
}

int
pattern1199 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], E_QImode)
      || GET_MODE (x1) != E_QImode
      || !ix86_comparison_operator (operands[1], E_VOIDmode)
      || !register_operand (operands[2], E_QImode)
      || !register_operand (operands[3], E_QImode))
    return -1;
  return 0;
}

int
pattern1203 (rtx x1, machine_mode i1)
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
pattern1208 (rtx x1, machine_mode i1)
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
pattern1216 (rtx x1, int i1, int i2, int i3, int i4)
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
pattern1223 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], E_V8SImode)
      || GET_MODE (x1) != E_V8SImode)
    return -1;
  x2 = XVECEXP (x1, 0, 0);
  if (GET_MODE (x2) != E_V8SImode)
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
pattern1232 (rtx x1, int i1, int i2, int i3, int i4, int i5)
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
pattern1239 (rtx x1, rtx_code i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8;
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
      || !register_operand (operands[0], E_DImode))
    return -1;
  x8 = XEXP (x4, 0);
  if (!rtx_equal_p (x8, operands[1]))
    return -1;
  return 0;
}

int
pattern1244 (rtx x1)
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
  if (!register_operand (operands[2], E_QImode))
    return -1;
  switch (GET_MODE (operands[0]))
    {
    case E_SImode:
      return pattern1243 (x1, 
E_SImode); /* [-1, 0] */

    case E_DImode:
      if (pattern1243 (x1, 
E_DImode) != 0)
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern1252 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  switch (GET_CODE (x2))
    {
    case REG:
    case SUBREG:
      operands[0] = x2;
      switch (GET_MODE (operands[0]))
        {
        case E_DImode:
          if (!register_operand (operands[0], E_DImode))
            return -1;
          x3 = XEXP (x1, 1);
          if (GET_MODE (x3) != E_DImode)
            return -1;
          return 0;

        case E_TImode:
          x3 = XEXP (x1, 1);
          if (pattern1250 (x3, 
E_TImode) != 0)
            return -1;
          return 1;

        default:
          return -1;
        }

    case STRICT_LOW_PART:
      res = pattern1251 (x1);
      if (res >= 0)
        return res + 2; /* [2, 3] */
      return -1;

    default:
      return -1;
    }
}

int
pattern1264 ()
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
pattern1273 (rtx x1, machine_mode i1)
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
pattern1280 (rtx x1, machine_mode i1, machine_mode i2, machine_mode i3)
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
      || !nonimm_or_0_operand (operands[4], i2)
      || !register_operand (operands[5], i1))
    return -1;
  return 0;
}

int
pattern1291 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (!const_0_to_7_operand (operands[5], E_SImode))
    return -1;
  switch (GET_MODE (operands[0]))
    {
    case E_V16QImode:
      if (!register_operand (operands[0], E_V16QImode)
          || GET_MODE (x1) != E_V16QImode)
        return -1;
      x2 = XEXP (x1, 2);
      if (GET_MODE (x2) != E_HImode)
        return -1;
      return 0;

    case E_V8HImode:
      if (!register_operand (operands[0], E_V8HImode)
          || GET_MODE (x1) != E_V8HImode)
        return -1;
      x2 = XEXP (x1, 2);
      if (GET_MODE (x2) != E_QImode)
        return -1;
      return 1;

    case E_V4SImode:
      if (!register_operand (operands[0], E_V4SImode)
          || GET_MODE (x1) != E_V4SImode)
        return -1;
      x2 = XEXP (x1, 2);
      if (GET_MODE (x2) != E_QImode)
        return -1;
      return 2;

    case E_V2DImode:
      if (!register_operand (operands[0], E_V2DImode)
          || GET_MODE (x1) != E_V2DImode)
        return -1;
      x2 = XEXP (x1, 2);
      if (GET_MODE (x2) != E_QImode)
        return -1;
      return 3;

    case E_V32QImode:
      if (!register_operand (operands[0], E_V32QImode)
          || GET_MODE (x1) != E_V32QImode)
        return -1;
      x2 = XEXP (x1, 2);
      if (GET_MODE (x2) != E_SImode)
        return -1;
      return 4;

    case E_V16HImode:
      if (!register_operand (operands[0], E_V16HImode)
          || GET_MODE (x1) != E_V16HImode)
        return -1;
      x2 = XEXP (x1, 2);
      if (GET_MODE (x2) != E_HImode)
        return -1;
      return 5;

    case E_V8SImode:
      if (!register_operand (operands[0], E_V8SImode)
          || GET_MODE (x1) != E_V8SImode)
        return -1;
      x2 = XEXP (x1, 2);
      if (GET_MODE (x2) != E_QImode)
        return -1;
      return 6;

    case E_V4DImode:
      if (!register_operand (operands[0], E_V4DImode)
          || GET_MODE (x1) != E_V4DImode)
        return -1;
      x2 = XEXP (x1, 2);
      if (GET_MODE (x2) != E_QImode)
        return -1;
      return 7;

    default:
      return -1;
    }
}

int
pattern1322 (rtx x1)
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
      return pattern1321 (x3, 
E_QImode); /* [-1, 0] */

    case E_HImode:
      if (pattern1321 (x3, 
E_HImode) != 0)
        return -1;
      return 1;

    case E_SImode:
      if (pattern1321 (x3, 
E_SImode) != 0)
        return -1;
      return 2;

    case E_DImode:
      if (!nonimmediate_operand (operands[1], E_DImode)
          || !const_1_to_63_operand (operands[2], E_QImode)
          || !nonimmediate_operand (operands[0], E_DImode)
          || GET_MODE (x3) != E_DImode)
        return -1;
      return 3;

    default:
      return -1;
    }
}

int
pattern1337 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) != LABEL_REF)
    return -1;
  x4 = XEXP (x2, 2);
  if (GET_CODE (x4) != PC)
    return -1;
  x5 = XEXP (x1, 0);
  if (GET_CODE (x5) != PC)
    return -1;
  x6 = XEXP (x2, 0);
  operands[0] = x6;
  x7 = XEXP (x6, 0);
  x8 = XEXP (x7, 0);
  operands[1] = x8;
  x9 = XEXP (x7, 2);
  switch (GET_CODE (x9))
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
      if (GET_MODE (x9) != E_QImode)
        return -1;
      x10 = XEXP (x9, 0);
      operands[2] = x10;
      if (!register_operand (operands[2], E_QImode))
        return -1;
      x11 = XEXP (x9, 1);
      operands[3] = x11;
      if (!const_int_operand (operands[3], E_VOIDmode))
        return -1;
      x12 = XEXP (x3, 0);
      operands[4] = x12;
      switch (GET_MODE (x7))
        {
        case E_SImode:
          if (!register_operand (operands[1], E_SImode))
            return -1;
          return 1;

        case E_DImode:
          if (!register_operand (operands[1], E_DImode))
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
pattern1364 ()
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
pattern1369 (rtx x1, machine_mode i1, machine_mode i2)
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
      || !register_operand (operands[2], i1)
      || !nonimmediate_operand (operands[3], i1))
    return -1;
  return 0;
}

int
pattern1379 (rtx x1, machine_mode i1, machine_mode i2)
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
  x3 = XEXP (x2, 2);
  return pattern1378 (x3, 
i2, 
i1); /* [-1, 0] */
}

int
pattern1390 (rtx x1, machine_mode i1, machine_mode i2)
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
      || !bcst_vector_operand (operands[1], i2))
    return -1;
  x4 = XEXP (x2, 2);
  return pattern1378 (x4, 
i1, 
i2); /* [-1, 0] */
}

int
pattern1398 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10;
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
      || GET_MODE (x3) != E_V8HFmode
      || !register_operand (operands[1], E_V8HFmode)
      || !register_operand (operands[2], E_V8HFmode)
      || !register_operand (operands[3], E_V8HFmode))
    return -1;
  x7 = XVECEXP (x5, 0, 0);
  if (!register_operand (x7, E_QImode))
    return -1;
  x8 = XVECEXP (x1, 0, 1);
  if (!const_4_or_8_to_11_operand (x8, E_SImode))
    return -1;
  x9 = XEXP (x2, 1);
  if (!rtx_equal_p (x9, operands[2]))
    return -1;
  x10 = XEXP (x3, 1);
  switch (GET_CODE (x10))
    {
    case CONST_INT:
    case CONST_DOUBLE:
    case CONST_VECTOR:
      operands[4] = x10;
      if (!const0_operand (operands[4], E_V8HFmode))
        return -1;
      operands[5] = x7;
      operands[6] = x8;
      return 0;

    case REG:
    case SUBREG:
      if (!rtx_equal_p (x10, operands[1]))
        return -1;
      operands[4] = x7;
      operands[5] = x8;
      return 1;

    default:
      return -1;
    }
}

int
pattern1422 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  operands[2] = x1;
  if (!register_operand (operands[2], E_DImode))
    return -1;
  switch (GET_MODE (operands[1]))
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
pattern1432 (rtx x1, machine_mode i1)
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
pattern1437 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  operands[0] = x2;
  x3 = XEXP (x1, 1);
  x4 = XEXP (x3, 1);
  x5 = XEXP (x4, 0);
  switch (GET_CODE (x5))
    {
    case AND:
      return pattern1436 (x3); /* [-1, 1] */

    case PLUS:
      res = pattern1436 (x3);
      if (res >= 0)
        return res + 2; /* [2, 3] */
      return -1;

    case MINUS:
      x6 = XEXP (x5, 0);
      operands[3] = x6;
      if (!const_int_operand (operands[3], E_VOIDmode))
        return -1;
      x7 = XEXP (x5, 1);
      operands[2] = x7;
      if (!int248_register_operand (operands[2], E_VOIDmode))
        return -1;
      res = pattern195 (x3);
      if (res >= 0)
        return res + 4; /* [4, 5] */
      return -1;

    default:
      return -1;
    }
}

int
pattern1453 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!nonimmediate_operand (operands[0], i1))
    return -1;
  switch (GET_MODE (x1))
    {
    case E_HImode:
      if (!register_operand (operands[1], E_HImode))
        return -1;
      return 0;

    case E_SImode:
      if (!register_operand (operands[1], E_SImode))
        return -1;
      return 1;

    case E_DImode:
      if (!register_operand (operands[1], E_DImode))
        return -1;
      return 2;

    default:
      return -1;
    }
}

int
pattern1463 (rtx x1, machine_mode i1, machine_mode i2)
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
      || !register_operand (operands[2], i1))
    return -1;
  return 0;
}

int
pattern1470 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 2);
  x3 = XVECEXP (x2, 0, 0);
  if (maybe_ne (SUBREG_BYTE (x3), 0))
    return -1;
  x4 = XEXP (x3, 0);
  if (GET_CODE (x4) != NOT)
    return -1;
  x5 = XEXP (x4, 0);
  operands[3] = x5;
  if (!const_0_to_7_operand (operands[5], E_SImode))
    return -1;
  switch (GET_MODE (operands[0]))
    {
    case E_V4SImode:
      return pattern1468 (x1, 
E_V4SImode, 
E_V16QImode); /* [-1, 0] */

    case E_V2DImode:
      if (pattern1468 (x1, 
E_V2DImode, 
E_V16QImode) != 0)
        return -1;
      return 1;

    case E_V8SImode:
      if (pattern1468 (x1, 
E_V8SImode, 
E_V32QImode) != 0)
        return -1;
      return 2;

    case E_V4DImode:
      if (pattern1468 (x1, 
E_V4DImode, 
E_V32QImode) != 0)
        return -1;
      return 3;

    case E_V32QImode:
      if (pattern1469 (x1, 
E_V32QImode, 
E_SImode) != 0)
        return -1;
      return 4;

    case E_V16QImode:
      if (pattern1469 (x1, 
E_V16QImode, 
E_HImode) != 0)
        return -1;
      return 5;

    default:
      return -1;
    }
}

int
pattern1484 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1)
    return -1;
  x2 = XVECEXP (x1, 0, 0);
  if (GET_MODE (x2) != i1
      || !register_operand (operands[1], i1)
      || !register_operand (operands[2], i1))
    return -1;
  x3 = XVECEXP (x2, 0, 2);
  if (GET_MODE (x3) != i1
      || !register_operand (operands[3], i1))
    return -1;
  return 0;
}

int
pattern1492 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  switch (GET_MODE (operands[0]))
    {
    case E_SImode:
      if (!register_operand (operands[0], E_SImode)
          || GET_MODE (x1) != E_SImode
          || !register_operand (operands[1], E_SImode))
        return -1;
      return 0;

    case E_DImode:
      if (!register_operand (operands[0], E_DImode)
          || GET_MODE (x1) != E_DImode
          || !register_operand (operands[1], E_DImode))
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern1504 (rtx x1, rtx_code i1)
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
  operands[1] = x5;
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
  operands[0] = x10;
  return pattern1502 (x1); /* [-1, 1] */
}

int
pattern1516 (rtx x1, machine_mode i1, machine_mode i2)
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
      || !nonimmediate_operand (operands[3], i1))
    return -1;
  return 0;
}

int
pattern1524 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7;
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
  if (GET_MODE (x5) != i2)
    return -1;
  x6 = XEXP (x5, 0);
  if (GET_MODE (x6) != i2
      || !vector_operand (operands[1], i1))
    return -1;
  x7 = XEXP (x5, 1);
  if (GET_MODE (x7) != i2
      || !vector_operand (operands[2], i1)
      || !const1_operand (operands[3], i1))
    return -1;
  return 0;
}

int
pattern1537 (rtx x1, machine_mode i1)
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
      || !register_operand (operands[4], i1))
    return -1;
  return 0;
}

int
pattern1544 (rtx x1, machine_mode i1)
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
  if (GET_MODE (x4) != i1
      || !nonimmediate_operand (operands[2], i1)
      || !nonimmediate_operand (operands[1], i1)
      || !nonimmediate_operand (operands[3], i1)
      || !const0_operand (operands[4], i1))
    return -1;
  return 0;
}

int
pattern1554 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12, x13, x14, x15;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) != i1)
    return -1;
  x5 = XEXP (x3, 1);
  if (GET_MODE (x5) != i1)
    return -1;
  x6 = XEXP (x2, 1);
  x7 = XEXP (x6, 0);
  if (GET_MODE (x7) != i1)
    return -1;
  x8 = XEXP (x6, 1);
  if (GET_MODE (x8) != i1)
    return -1;
  x9 = XEXP (x1, 1);
  x10 = XEXP (x9, 0);
  x11 = XEXP (x10, 0);
  if (GET_MODE (x11) != i1)
    return -1;
  x12 = XEXP (x10, 1);
  if (GET_MODE (x12) != i1)
    return -1;
  x13 = XEXP (x9, 1);
  x14 = XEXP (x13, 0);
  if (GET_MODE (x14) != i1)
    return -1;
  x15 = XEXP (x13, 1);
  if (GET_MODE (x15) != i1)
    return -1;
  return 0;
}

int
pattern1567 (rtx x1, machine_mode i1)
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
pattern1576 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  int res ATTRIBUTE_UNUSED;
  if (!general_reg_operand (operands[0], i1))
    return -1;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) != i1
      || !register_operand (operands[2], i1)
      || !nonimmediate_operand (operands[3], i1)
      || !general_reg_operand (operands[1], i1))
    return -1;
  x4 = XVECEXP (x1, 0, 1);
  x5 = XEXP (x4, 1);
  if (GET_MODE (x5) != i1
      || !general_reg_operand (operands[4], i1)
      || !general_reg_operand (operands[5], i1))
    return -1;
  return 0;
}

int
pattern1585 (rtx x1, machine_mode i1, machine_mode i2)
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
      || !register_operand (operands[4], i2))
    return -1;
  return 0;
}

int
pattern1594 (rtx x1, machine_mode i1, machine_mode i2)
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
      || !register_operand (operands[2], i1)
      || !register_operand (operands[4], i2))
    return -1;
  return 0;
}

int
pattern1603 (rtx x1, machine_mode i1)
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
      return pattern1602 (
E_SImode); /* [-1, 1] */

    case E_DImode:
      res = pattern1602 (
E_DImode);
      if (res >= 0)
        return res + 2; /* [2, 3] */
      return -1;

    default:
      return -1;
    }
}

int
pattern1614 (machine_mode i1)
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
pattern1622 (rtx x1)
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
      return pattern1045 (x1); /* [-1, 5] */

    default:
      return -1;
    }
}

int
pattern1633 (rtx x1, machine_mode i1, machine_mode i2)
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
      || !register_operand (operands[2], i1)
      || !nonimmediate_operand (operands[3], i2)
      || !const0_operand (operands[5], i1))
    return -1;
  return 0;
}

int
pattern1644 (rtx x1, machine_mode i1, machine_mode i2)
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
      || !nonimm_or_0_operand (operands[4], i1)
      || !register_operand (operands[5], i2))
    return -1;
  return 0;
}

int
pattern1653 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i2)
      || GET_MODE (x1) != i2
      || !register_operand (operands[1], i2)
      || !register_operand (operands[7], E_QImode)
      || !vsib_mem_operator (operands[6], i1))
    return -1;
  x2 = XVECEXP (x1, 0, 2);
  x3 = XEXP (x2, 0);
  switch (GET_MODE (x3))
    {
    case E_SImode:
      return pattern1652 (
E_SImode); /* [-1, 1] */

    case E_DImode:
      res = pattern1652 (
E_DImode);
      if (res >= 0)
        return res + 2; /* [2, 3] */
      return -1;

    default:
      return -1;
    }
}

int
pattern1667 (rtx x1, machine_mode i1)
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
  x5 = XEXP (x4, 2);
  if (GET_MODE (x5) != i1)
    return -1;
  return 0;
}

int
pattern1677 (rtx x1)
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
pattern1689 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  x4 = XVECEXP (x3, 0, 3);
  operands[4] = x4;
  if (!const_int_operand (operands[4], E_SImode))
    return -1;
  x5 = XVECEXP (x3, 0, 1);
  if (!rtx_equal_p (x5, operands[0]))
    return -1;
  x6 = XEXP (x2, 0);
  if (!rtx_equal_p (x6, operands[0]))
    return -1;
  x7 = XVECEXP (x1, 0, 1);
  x8 = XEXP (x7, 0);
  if (!rtx_equal_p (x8, operands[2]))
    return -1;
  return 0;
}

int
pattern1697 (machine_mode i1)
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
          || !register_operand (operands[3], E_V16SImode))
        return -1;
      return 0;

    case E_V8DImode:
      if (!register_operand (operands[2], E_V8DImode)
          || !register_operand (operands[6], E_QImode)
          || !register_operand (operands[3], E_V8SImode))
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern1709 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4;
  int res ATTRIBUTE_UNUSED;
  if (!vsib_mem_operator (operands[5], i1)
      || !register_operand (operands[6], E_QImode))
    return -1;
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) != i1
      || !scratch_operand (operands[1], E_QImode))
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
pattern1719 (rtx x1, machine_mode i1, machine_mode i2)
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
      return pattern1718 (
E_SImode); /* [-1, 1] */

    case E_DImode:
      res = pattern1718 (
E_DImode);
      if (res >= 0)
        return res + 2; /* [2, 3] */
      return -1;

    default:
      return -1;
    }
}

int
pattern1730 (rtx x1, machine_mode i1)
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
      || !register_operand (operands[3], i1)
      || !const0_operand (operands[4], i1))
    return -1;
  return 0;
}

int
pattern1737 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1
      || !register_operand (operands[2], i1)
      || !vsib_mem_operator (operands[7], i2)
      || !register_operand (operands[5], i1))
    return -1;
  x2 = XVECEXP (x1, 0, 1);
  x3 = XEXP (x2, 0);
  switch (GET_MODE (x3))
    {
    case E_SImode:
      return pattern1736 (
E_SImode); /* [-1, 1] */

    case E_DImode:
      res = pattern1736 (
E_DImode);
      if (res >= 0)
        return res + 2; /* [2, 3] */
      return -1;

    default:
      return -1;
    }
}

int
pattern1746 (rtx x1, machine_mode i1, machine_mode i2)
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
      return pattern1745 (
E_SImode); /* [-1, 1] */

    case E_DImode:
      res = pattern1745 (
E_DImode);
      if (res >= 0)
        return res + 2; /* [2, 3] */
      return -1;

    default:
      return -1;
    }
}

int
pattern1759 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1))
    return -1;
  operands[2] = x1;
  x2 = PATTERN (peep2_next_insn (1));
  return pattern1758 (x2, 
i1); /* [-1, 0] */
}

int
pattern1766 (machine_mode i1)
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
          || !register_operand (operands[3], E_V16SImode)
          || !scratch_operand (operands[1], E_HImode))
        return -1;
      return 0;

    case E_V8DImode:
      if (pattern1765 (
E_QImode, 
E_V8SImode, 
E_V8DImode) != 0)
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern1774 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1))
    return -1;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) != i1
      || !register_operand (operands[1], i1))
    return -1;
  x4 = XVECEXP (x1, 0, 1);
  x5 = XEXP (x4, 0);
  if (GET_MODE (x5) != i1)
    return -1;
  x6 = XEXP (x4, 1);
  if (GET_MODE (x6) != i1)
    return -1;
  x7 = XEXP (x6, 0);
  if (GET_MODE (x7) != i1
      || !const_int_operand (operands[2], i1))
    return -1;
  return 0;
}

int
pattern1786 (machine_mode i1)
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

    case E_V2DImode:
      if (!register_operand (operands[4], E_V2DImode))
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern1794 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  x4 = XEXP (x3, 0);
  x5 = XEXP (x4, 0);
  if (GET_MODE (x5) != i2
      || !nonimmediate_operand (operands[1], i1)
      || !const_int_operand (operands[3], i2))
    return -1;
  x6 = XEXP (x3, 1);
  if (GET_MODE (x6) != i2)
    return -1;
  x7 = XEXP (x6, 0);
  if (GET_MODE (x7) != i1
      || !x86_64_immediate_operand (operands[2], i1)
      || !register_operand (operands[0], i1))
    return -1;
  x8 = XVECEXP (x1, 0, 1);
  x9 = XEXP (x8, 1);
  if (GET_MODE (x9) != i1)
    return -1;
  return 0;
}

int
pattern1804 ()
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
pattern1812 (rtx x1, rtx_code i1)
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
  rtx x74, x75, x76, x77, x78, x79;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  x5 = XEXP (x4, 0);
  if (GET_CODE (x5) != VEC_SELECT
      || GET_MODE (x5) != E_SFmode)
    return -1;
  x6 = XEXP (x5, 1);
  if (GET_CODE (x6) != PARALLEL
      || XVECLEN (x6, 0) != 1)
    return -1;
  x7 = XVECEXP (x6, 0, 0);
  if (x7 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
    return -1;
  x8 = XEXP (x4, 1);
  if (GET_CODE (x8) != VEC_SELECT
      || GET_MODE (x8) != E_SFmode)
    return -1;
  x9 = XEXP (x8, 1);
  if (GET_CODE (x9) != PARALLEL
      || XVECLEN (x9, 0) != 1)
    return -1;
  x10 = XVECEXP (x9, 0, 0);
  if (x10 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
    return -1;
  x11 = XEXP (x3, 1);
  if (GET_CODE (x11) != i1)
    return -1;
  x12 = XEXP (x11, 0);
  if (GET_CODE (x12) != VEC_SELECT
      || GET_MODE (x12) != E_SFmode)
    return -1;
  x13 = XEXP (x12, 1);
  if (GET_CODE (x13) != PARALLEL
      || XVECLEN (x13, 0) != 1)
    return -1;
  x14 = XVECEXP (x13, 0, 0);
  if (x14 != const_int_rtx[MAX_SAVED_CONST_INT + 2])
    return -1;
  x15 = XEXP (x11, 1);
  if (GET_CODE (x15) != VEC_SELECT
      || GET_MODE (x15) != E_SFmode)
    return -1;
  x16 = XEXP (x15, 1);
  if (GET_CODE (x16) != PARALLEL
      || XVECLEN (x16, 0) != 1)
    return -1;
  x17 = XVECEXP (x16, 0, 0);
  if (x17 != const_int_rtx[MAX_SAVED_CONST_INT + 3])
    return -1;
  x18 = XEXP (x2, 1);
  x19 = XEXP (x18, 0);
  if (GET_CODE (x19) != i1)
    return -1;
  x20 = XEXP (x19, 0);
  if (GET_CODE (x20) != VEC_SELECT
      || GET_MODE (x20) != E_SFmode)
    return -1;
  x21 = XEXP (x20, 1);
  if (GET_CODE (x21) != PARALLEL
      || XVECLEN (x21, 0) != 1)
    return -1;
  x22 = XVECEXP (x21, 0, 0);
  if (x22 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
    return -1;
  x23 = XEXP (x19, 1);
  if (GET_CODE (x23) != VEC_SELECT
      || GET_MODE (x23) != E_SFmode)
    return -1;
  x24 = XEXP (x23, 1);
  if (GET_CODE (x24) != PARALLEL
      || XVECLEN (x24, 0) != 1)
    return -1;
  x25 = XVECEXP (x24, 0, 0);
  if (x25 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
    return -1;
  x26 = XEXP (x18, 1);
  if (GET_CODE (x26) != i1)
    return -1;
  x27 = XEXP (x26, 0);
  if (GET_CODE (x27) != VEC_SELECT
      || GET_MODE (x27) != E_SFmode)
    return -1;
  x28 = XEXP (x27, 1);
  if (GET_CODE (x28) != PARALLEL
      || XVECLEN (x28, 0) != 1)
    return -1;
  x29 = XVECEXP (x28, 0, 0);
  if (x29 != const_int_rtx[MAX_SAVED_CONST_INT + 2])
    return -1;
  x30 = XEXP (x26, 1);
  if (GET_CODE (x30) != VEC_SELECT
      || GET_MODE (x30) != E_SFmode)
    return -1;
  x31 = XEXP (x30, 1);
  if (GET_CODE (x31) != PARALLEL
      || XVECLEN (x31, 0) != 1)
    return -1;
  x32 = XVECEXP (x31, 0, 0);
  if (x32 != const_int_rtx[MAX_SAVED_CONST_INT + 3])
    return -1;
  x33 = XEXP (x1, 1);
  x34 = XEXP (x33, 0);
  x35 = XEXP (x34, 0);
  if (GET_CODE (x35) != i1)
    return -1;
  x36 = XEXP (x35, 0);
  if (GET_CODE (x36) != VEC_SELECT
      || GET_MODE (x36) != E_SFmode)
    return -1;
  x37 = XEXP (x36, 1);
  if (GET_CODE (x37) != PARALLEL
      || XVECLEN (x37, 0) != 1)
    return -1;
  x38 = XVECEXP (x37, 0, 0);
  if (x38 != const_int_rtx[MAX_SAVED_CONST_INT + 4])
    return -1;
  x39 = XEXP (x35, 1);
  if (GET_CODE (x39) != VEC_SELECT
      || GET_MODE (x39) != E_SFmode)
    return -1;
  x40 = XEXP (x39, 1);
  if (GET_CODE (x40) != PARALLEL
      || XVECLEN (x40, 0) != 1)
    return -1;
  x41 = XVECEXP (x40, 0, 0);
  if (x41 != const_int_rtx[MAX_SAVED_CONST_INT + 5])
    return -1;
  x42 = XEXP (x34, 1);
  if (GET_CODE (x42) != i1)
    return -1;
  x43 = XEXP (x42, 0);
  if (GET_CODE (x43) != VEC_SELECT
      || GET_MODE (x43) != E_SFmode)
    return -1;
  x44 = XEXP (x43, 1);
  if (GET_CODE (x44) != PARALLEL
      || XVECLEN (x44, 0) != 1)
    return -1;
  x45 = XVECEXP (x44, 0, 0);
  if (x45 != const_int_rtx[MAX_SAVED_CONST_INT + 6])
    return -1;
  x46 = XEXP (x42, 1);
  if (GET_CODE (x46) != VEC_SELECT
      || GET_MODE (x46) != E_SFmode)
    return -1;
  x47 = XEXP (x46, 1);
  if (GET_CODE (x47) != PARALLEL
      || XVECLEN (x47, 0) != 1)
    return -1;
  x48 = XVECEXP (x47, 0, 0);
  if (x48 != const_int_rtx[MAX_SAVED_CONST_INT + 7])
    return -1;
  x49 = XEXP (x33, 1);
  x50 = XEXP (x49, 0);
  if (GET_CODE (x50) != i1)
    return -1;
  x51 = XEXP (x50, 0);
  if (GET_CODE (x51) != VEC_SELECT
      || GET_MODE (x51) != E_SFmode)
    return -1;
  x52 = XEXP (x51, 1);
  if (GET_CODE (x52) != PARALLEL
      || XVECLEN (x52, 0) != 1)
    return -1;
  x53 = XVECEXP (x52, 0, 0);
  if (x53 != const_int_rtx[MAX_SAVED_CONST_INT + 4])
    return -1;
  x54 = XEXP (x50, 1);
  if (GET_CODE (x54) != VEC_SELECT
      || GET_MODE (x54) != E_SFmode)
    return -1;
  x55 = XEXP (x54, 1);
  if (GET_CODE (x55) != PARALLEL
      || XVECLEN (x55, 0) != 1)
    return -1;
  x56 = XVECEXP (x55, 0, 0);
  if (x56 != const_int_rtx[MAX_SAVED_CONST_INT + 5])
    return -1;
  x57 = XEXP (x49, 1);
  if (GET_CODE (x57) != i1)
    return -1;
  x58 = XEXP (x57, 0);
  if (GET_CODE (x58) != VEC_SELECT
      || GET_MODE (x58) != E_SFmode)
    return -1;
  x59 = XEXP (x58, 1);
  if (GET_CODE (x59) != PARALLEL
      || XVECLEN (x59, 0) != 1)
    return -1;
  x60 = XVECEXP (x59, 0, 0);
  if (x60 != const_int_rtx[MAX_SAVED_CONST_INT + 6])
    return -1;
  x61 = XEXP (x57, 1);
  if (GET_CODE (x61) != VEC_SELECT
      || GET_MODE (x61) != E_SFmode)
    return -1;
  x62 = XEXP (x61, 1);
  if (GET_CODE (x62) != PARALLEL
      || XVECLEN (x62, 0) != 1)
    return -1;
  x63 = XVECEXP (x62, 0, 0);
  if (x63 != const_int_rtx[MAX_SAVED_CONST_INT + 7])
    return -1;
  x64 = XEXP (x5, 0);
  operands[1] = x64;
  if (!register_operand (operands[1], E_V8SFmode))
    return -1;
  x65 = XEXP (x20, 0);
  operands[2] = x65;
  if (!nonimmediate_operand (operands[2], E_V8SFmode))
    return -1;
  x66 = XEXP (x8, 0);
  if (!rtx_equal_p (x66, operands[1]))
    return -1;
  x67 = XEXP (x12, 0);
  if (!rtx_equal_p (x67, operands[1]))
    return -1;
  x68 = XEXP (x15, 0);
  if (!rtx_equal_p (x68, operands[1]))
    return -1;
  x69 = XEXP (x23, 0);
  if (!rtx_equal_p (x69, operands[2]))
    return -1;
  x70 = XEXP (x27, 0);
  if (!rtx_equal_p (x70, operands[2]))
    return -1;
  x71 = XEXP (x30, 0);
  if (!rtx_equal_p (x71, operands[2]))
    return -1;
  x72 = XEXP (x36, 0);
  if (!rtx_equal_p (x72, operands[1]))
    return -1;
  x73 = XEXP (x39, 0);
  if (!rtx_equal_p (x73, operands[1]))
    return -1;
  x74 = XEXP (x43, 0);
  if (!rtx_equal_p (x74, operands[1]))
    return -1;
  x75 = XEXP (x46, 0);
  if (!rtx_equal_p (x75, operands[1]))
    return -1;
  x76 = XEXP (x51, 0);
  if (!rtx_equal_p (x76, operands[2]))
    return -1;
  x77 = XEXP (x54, 0);
  if (!rtx_equal_p (x77, operands[2]))
    return -1;
  x78 = XEXP (x58, 0);
  if (!rtx_equal_p (x78, operands[2]))
    return -1;
  x79 = XEXP (x61, 0);
  if (!rtx_equal_p (x79, operands[2]))
    return -1;
  return 0;
}

 int
recog_10 (rtx x1 ATTRIBUTE_UNUSED,
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
    case E_P2QImode:
      if (!register_operand (operands[0], E_P2QImode)
          || GET_MODE (x3) != E_P2QImode)
        return -1;
      switch (GET_MODE (operands[1]))
        {
        case E_V8DImode:
          if (!register_operand (operands[1], E_V8DImode)
              || !vector_operand (operands[2], E_V8DImode)
              || !(
#line 30961 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VP2INTERSECT) && 
#line 30927 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return -1;
          return 10328; /* avx512vp2intersect_2intersectv8di */

        case E_V4DImode:
          if (!register_operand (operands[1], E_V4DImode)
              || !vector_operand (operands[2], E_V4DImode)
              || !(
#line 30961 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VP2INTERSECT) && 
#line 30928 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 10329; /* avx512vp2intersect_2intersectv4di */

        case E_V2DImode:
          if (!register_operand (operands[1], E_V2DImode)
              || !vector_operand (operands[2], E_V2DImode)
              || !(
#line 30961 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VP2INTERSECT) && 
#line 30928 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 10330; /* avx512vp2intersect_2intersectv2di */

        case E_V8SImode:
          if (!register_operand (operands[1], E_V8SImode)
              || !vector_operand (operands[2], E_V8SImode)
              || !(
#line 30961 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VP2INTERSECT) && 
#line 30929 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 10331; /* avx512vp2intersect_2intersectv8si */

        case E_V4SImode:
          if (!register_operand (operands[1], E_V4SImode)
              || !vector_operand (operands[2], E_V4SImode)
              || !(
#line 30961 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VP2INTERSECT) && 
#line 30929 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 10332; /* avx512vp2intersect_2intersectv4si */

        default:
          return -1;
        }

    case E_P2HImode:
      if (pattern733 (x3, 
E_V16SImode, 
E_P2HImode) != 0
          || !
#line 30970 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VP2INTERSECT && TARGET_EVEX512))
        return -1;
      return 10333; /* avx512vp2intersect_2intersectv16si */

    default:
      return -1;
    }
}

 int
recog_11 (rtx x1 ATTRIBUTE_UNUSED,
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
  if (!const_0_to_255_operand (operands[2], E_VOIDmode))
    return -1;
  switch (GET_MODE (operands[0]))
    {
    case E_HImode:
      switch (pattern642 (x3, 
E_HImode))
        {
        case 0:
          if (!(
#line 29854 "../../gcc/config/i386/sse.md"
(TARGET_AVX512DQ || VALID_AVX512FP16_REG_MODE(V16HFmode)) && 
#line 526 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL)))
            return -1;
          return 9986; /* avx512dq_fpclassv16hf */

        case 1:
          if (!(
#line 29854 "../../gcc/config/i386/sse.md"
(TARGET_AVX512DQ || VALID_AVX512FP16_REG_MODE(V16SFmode)) && 
#line 528 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return -1;
          return 9990; /* avx512dq_fpclassv16sf */

        default:
          return -1;
        }

    case E_QImode:
      if (!register_operand (operands[0], E_QImode)
          || GET_MODE (x3) != E_QImode)
        return -1;
      switch (GET_MODE (operands[1]))
        {
        case E_V8HFmode:
          if (!vector_operand (operands[1], E_V8HFmode)
              || !(
#line 29854 "../../gcc/config/i386/sse.md"
(TARGET_AVX512DQ || VALID_AVX512FP16_REG_MODE(V8HFmode)) && 
#line 527 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL)))
            return -1;
          return 9988; /* avx512dq_fpclassv8hf */

        case E_V8SFmode:
          if (!vector_operand (operands[1], E_V8SFmode)
              || !(
#line 29854 "../../gcc/config/i386/sse.md"
(TARGET_AVX512DQ || VALID_AVX512FP16_REG_MODE(V8SFmode)) && 
#line 528 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 9992; /* avx512dq_fpclassv8sf */

        case E_V4SFmode:
          if (!vector_operand (operands[1], E_V4SFmode)
              || !(
#line 29854 "../../gcc/config/i386/sse.md"
(TARGET_AVX512DQ || VALID_AVX512FP16_REG_MODE(V4SFmode)) && 
#line 528 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 9994; /* avx512dq_fpclassv4sf */

        case E_V8DFmode:
          if (!vector_operand (operands[1], E_V8DFmode)
              || !(
#line 29854 "../../gcc/config/i386/sse.md"
(TARGET_AVX512DQ || VALID_AVX512FP16_REG_MODE(V8DFmode)) && 
#line 529 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return -1;
          return 9996; /* avx512dq_fpclassv8df */

        case E_V4DFmode:
          if (!vector_operand (operands[1], E_V4DFmode)
              || !(
#line 29854 "../../gcc/config/i386/sse.md"
(TARGET_AVX512DQ || VALID_AVX512FP16_REG_MODE(V4DFmode)) && 
#line 529 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 9998; /* avx512dq_fpclassv4df */

        case E_V2DFmode:
          if (!vector_operand (operands[1], E_V2DFmode)
              || !(
#line 29854 "../../gcc/config/i386/sse.md"
(TARGET_AVX512DQ || VALID_AVX512FP16_REG_MODE(V2DFmode)) && 
#line 529 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 10000; /* avx512dq_fpclassv2df */

        default:
          return -1;
        }

    default:
      return -1;
    }
}

 int
recog_15 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  switch (XVECLEN (x2, 0))
    {
    case 1:
      return recog_13 (x1, insn, pnum_clobbers);

    case 2:
      return recog_14 (x1, insn, pnum_clobbers);

    case 3:
      switch (XINT (x2, 1))
        {
        case 39:
          if (pnum_clobbers == NULL
              || GET_MODE (x2) != E_CCGZmode)
            return -1;
          x3 = XVECEXP (x2, 0, 2);
          if (GET_CODE (x3) != LTU)
            return -1;
          x4 = XEXP (x3, 0);
          if (GET_CODE (x4) != REG
              || REGNO (x4) != 17
              || GET_MODE (x4) != E_CCmode)
            return -1;
          x5 = XEXP (x3, 1);
          if (x5 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
            return -1;
          x6 = XEXP (x1, 0);
          if (GET_CODE (x6) != REG
              || REGNO (x6) != 17
              || GET_MODE (x6) != E_CCGZmode)
            return -1;
          x7 = XVECEXP (x2, 0, 0);
          operands[1] = x7;
          x8 = XVECEXP (x2, 0, 1);
          operands[2] = x8;
          switch (GET_MODE (operands[1]))
            {
            case E_SImode:
              if (!register_operand (operands[1], E_SImode)
                  || !x86_64_general_operand (operands[2], E_SImode)
                  || GET_MODE (x3) != E_SImode
                  || !
#line 1235 "../../gcc/config/i386/i386.md"
(!TARGET_64BIT))
                return -1;
              *pnum_clobbers = 1;
              return 521; /* subsi3_carry_ccgz */

            case E_DImode:
              if (!register_operand (operands[1], E_DImode)
                  || !x86_64_general_operand (operands[2], E_DImode)
                  || GET_MODE (x3) != E_DImode
                  || !
#line 1236 "../../gcc/config/i386/i386.md"
(TARGET_64BIT))
                return -1;
              *pnum_clobbers = 1;
              return 522; /* subdi3_carry_ccgz */

            default:
              return -1;
            }

        case 59:
          return recog_12 (x1, insn, pnum_clobbers);

        case 48:
          if (GET_MODE (x2) != E_HFmode)
            return -1;
          x6 = XEXP (x1, 0);
          operands[0] = x6;
          if (!nonimmediate_operand (operands[0], E_HFmode))
            return -1;
          x7 = XVECEXP (x2, 0, 0);
          operands[1] = x7;
          if (!nonimmediate_operand (operands[1], E_HFmode))
            return -1;
          x8 = XVECEXP (x2, 0, 1);
          operands[2] = x8;
          if (!nonimm_or_0_operand (operands[2], E_HFmode))
            return -1;
          x3 = XVECEXP (x2, 0, 2);
          operands[3] = x3;
          if (!register_operand (operands[3], E_QImode)
              || !
#line 26412 "../../gcc/config/i386/i386.md"
(TARGET_AVX512FP16))
            return -1;
          return 1803; /* movhf_mask */

        case 51:
          x6 = XEXP (x1, 0);
          operands[0] = x6;
          x7 = XVECEXP (x2, 0, 0);
          operands[1] = x7;
          x8 = XVECEXP (x2, 0, 1);
          operands[2] = x8;
          x3 = XVECEXP (x2, 0, 2);
          switch (GET_CODE (x3))
            {
            case LT:
              switch (pattern735 (x2))
                {
                case 0:
                  if (
#line 26645 "../../gcc/config/i386/i386.md"
(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH
  && (rtx_equal_p (operands[1], operands[3])
      && rtx_equal_p (operands[2], operands[4]))
  && ix86_pre_reload_split ()))
                    return 1821; /* *ieee_maxsf3_1 */
                  if (!
#line 26666 "../../gcc/config/i386/i386.md"
(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH
  && (rtx_equal_p (operands[1], operands[4])
      && rtx_equal_p (operands[2], operands[3]))
  && ix86_pre_reload_split ()))
                    return -1;
                  return 1823; /* *ieee_minsf3_1 */

                case 1:
                  if (
#line 26645 "../../gcc/config/i386/i386.md"
(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH
  && (rtx_equal_p (operands[1], operands[3])
      && rtx_equal_p (operands[2], operands[4]))
  && ix86_pre_reload_split ()))
                    return 1822; /* *ieee_maxdf3_1 */
                  if (!
#line 26666 "../../gcc/config/i386/i386.md"
(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH
  && (rtx_equal_p (operands[1], operands[4])
      && rtx_equal_p (operands[2], operands[3]))
  && ix86_pre_reload_split ()))
                    return -1;
                  return 1824; /* *ieee_mindf3_1 */

                default:
                  return -1;
                }

            case REG:
            case SUBREG:
              operands[3] = x3;
              switch (GET_MODE (operands[0]))
                {
                case E_V2SFmode:
                  if (pattern969 (x2, 
E_V2SFmode) == 0
                      && 
#line 1317 "../../gcc/config/i386/mmx.md"
(TARGET_SSE4_1 && TARGET_MMX_WITH_SSE))
                    return 2069; /* mmx_blendvps */
                  break;

                case E_V8QImode:
                  if (pattern969 (x2, 
E_V8QImode) == 0
                      && 
#line 4314 "../../gcc/config/i386/mmx.md"
(TARGET_SSE4_1 && TARGET_MMX_WITH_SSE))
                    return 2235; /* mmx_pblendvb_v8qi */
                  break;

                case E_V4QImode:
                  if (pattern969 (x2, 
E_V4QImode) == 0
                      && 
#line 4390 "../../gcc/config/i386/mmx.md"
(TARGET_SSE4_1))
                    return 2239; /* mmx_pblendvb_v4qi */
                  break;

                case E_V2QImode:
                  if (pattern969 (x2, 
E_V2QImode) == 0
                      && 
#line 4390 "../../gcc/config/i386/mmx.md"
(TARGET_SSE4_1))
                    return 2240; /* mmx_pblendvb_v2qi */
                  break;

                case E_V2HImode:
                  if (pattern969 (x2, 
E_V2HImode) == 0
                      && 
#line 4390 "../../gcc/config/i386/mmx.md"
(TARGET_SSE4_1))
                    return 2241; /* mmx_pblendvb_v2hi */
                  break;

                case E_SFmode:
                  if (pattern969 (x2, 
E_SFmode) == 0
                      && 
#line 23544 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1))
                    return 8684; /* sse4_1_blendvss */
                  break;

                case E_DFmode:
                  if (pattern969 (x2, 
E_DFmode) == 0
                      && 
#line 23544 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1))
                    return 8685; /* sse4_1_blendvsd */
                  break;

                default:
                  break;
                }
              if (GET_CODE (x3) != SUBREG)
                return -1;
              switch (pattern848 (x2))
                {
                case 0:
                  if (!
#line 4366 "../../gcc/config/i386/mmx.md"
(TARGET_MMX_WITH_SSE && ix86_pre_reload_split ()))
                    return -1;
                  return 2237; /* *mmx_pblendvb_v8qi_2 */

                case 1:
                  if (!
#line 4366 "../../gcc/config/i386/mmx.md"
(TARGET_MMX_WITH_SSE && ix86_pre_reload_split ()))
                    return -1;
                  return 2238; /* *mmx_pblendvb_v8qi_2 */

                case 2:
                  if (!
#line 4442 "../../gcc/config/i386/mmx.md"
(TARGET_SSE2 && ix86_pre_reload_split ()))
                    return -1;
                  return 2245; /* *mmx_pblendvb_v4qi_2 */

                default:
                  return -1;
                }

            case EQ:
              switch (pattern737 (x2))
                {
                case 0:
                  if (!
#line 4338 "../../gcc/config/i386/mmx.md"
(TARGET_MMX_WITH_SSE && ix86_pre_reload_split ()))
                    return -1;
                  return 2236; /* *mmx_pblendvb_v8qi_1 */

                case 1:
                  if (!
#line 4414 "../../gcc/config/i386/mmx.md"
(TARGET_SSE2 && ix86_pre_reload_split ()))
                    return -1;
                  return 2242; /* *mmx_pblendvb_v4qi_1 */

                case 2:
                  if (!
#line 4414 "../../gcc/config/i386/mmx.md"
(TARGET_SSE2 && ix86_pre_reload_split ()))
                    return -1;
                  return 2243; /* *mmx_pblendvb_v2qi_1 */

                case 3:
                  if (!
#line 4414 "../../gcc/config/i386/mmx.md"
(TARGET_SSE2 && ix86_pre_reload_split ()))
                    return -1;
                  return 2244; /* *mmx_pblendvb_v2hi_1 */

                default:
                  return -1;
                }

            default:
              return -1;
            }

        case 50:
          x6 = XEXP (x1, 0);
          operands[0] = x6;
          x7 = XVECEXP (x2, 0, 0);
          operands[2] = x7;
          x8 = XVECEXP (x2, 0, 1);
          operands[1] = x8;
          x3 = XVECEXP (x2, 0, 2);
          operands[3] = x3;
          if (!const_0_to_255_operand (operands[3], E_SImode))
            return -1;
          switch (GET_MODE (operands[0]))
            {
            case E_V2SFmode:
              if (pattern970 (x2, 
E_V2SFmode) != 0
                  || !
#line 1261 "../../gcc/config/i386/mmx.md"
(TARGET_SSE4_1 && TARGET_MMX_WITH_SSE))
                return -1;
              return 2066; /* sse4_1_insertps_v2sf */

            case E_V2SImode:
              if (pattern970 (x2, 
E_V2SImode) != 0
                  || !
#line 1261 "../../gcc/config/i386/mmx.md"
(TARGET_SSE4_1 && TARGET_MMX_WITH_SSE))
                return -1;
              return 2067; /* sse4_1_insertps_v2si */

            default:
              return -1;
            }

        case 53:
          x6 = XEXP (x1, 0);
          operands[0] = x6;
          x7 = XVECEXP (x2, 0, 0);
          operands[1] = x7;
          x8 = XVECEXP (x2, 0, 1);
          operands[2] = x8;
          x3 = XVECEXP (x2, 0, 2);
          operands[3] = x3;
          if (!nonimmediate_operand (operands[3], E_V16QImode))
            return -1;
          switch (GET_MODE (operands[0]))
            {
            case E_V8QImode:
              if (pattern971 (x2, 
E_V8QImode) != 0
                  || !
#line 4512 "../../gcc/config/i386/mmx.md"
(TARGET_XOP && TARGET_MMX_WITH_SSE))
                return -1;
              return 2257; /* mmx_ppermv64 */

            case E_V4QImode:
              if (pattern971 (x2, 
E_V4QImode) != 0
                  || !
#line 4524 "../../gcc/config/i386/mmx.md"
(TARGET_XOP))
                return -1;
              return 2258; /* mmx_ppermv32 */

            default:
              return -1;
            }

        case 47:
          if (GET_MODE (x2) != E_V8QImode)
            return -1;
          x3 = XVECEXP (x2, 0, 2);
          if (GET_CODE (x3) != MEM
              || GET_MODE (x3) != E_V8QImode)
            return -1;
          x6 = XEXP (x1, 0);
          if (GET_CODE (x6) != MEM
              || GET_MODE (x6) != E_V8QImode)
            return -1;
          x9 = XEXP (x6, 0);
          operands[0] = x9;
          x7 = XVECEXP (x2, 0, 0);
          operands[1] = x7;
          switch (pattern1068 (x2, 
E_V8QImode))
            {
            case 0:
              if (!(
#line 6860 "../../gcc/config/i386/mmx.md"
(TARGET_SSE || TARGET_3DNOW_A) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode)))
                return -1;
              return 2379; /* *mmx_maskmovq */

            case 1:
              if (!(
#line 6860 "../../gcc/config/i386/mmx.md"
(TARGET_SSE || TARGET_3DNOW_A) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode)))
                return -1;
              return 2380; /* *mmx_maskmovq */

            default:
              return -1;
            }

        case 157:
          x6 = XEXP (x1, 0);
          operands[0] = x6;
          x7 = XVECEXP (x2, 0, 0);
          switch (GET_CODE (x7))
            {
            case CONST_INT:
            case CONST_DOUBLE:
            case CONST_VECTOR:
            case REG:
            case SUBREG:
            case MEM:
              operands[1] = x7;
              x3 = XVECEXP (x2, 0, 2);
              if (GET_CODE (x3) != CONST_INT)
                return -1;
              x8 = XVECEXP (x2, 0, 1);
              operands[2] = x8;
              if (XWINT (x3, 0) == 0L)
                {
                  switch (pattern968 (x2))
                    {
                    case 0:
                      if ((
#line 4582 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 318 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                        return 3496; /* *avx512vl_eqv16qi3_1 */
                      break;

                    case 1:
                      if ((
#line 4582 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 319 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                        return 3508; /* *avx512vl_eqv16hi3_1 */
                      break;

                    case 2:
                      if ((
#line 4671 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 501 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                        return 3564; /* *avx512f_eqv16si3_1 */
                      break;

                    case 3:
                      if ((
#line 4582 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 319 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                        return 3512; /* *avx512vl_eqv8hi3_1 */
                      break;

                    case 4:
                      if ((
#line 4671 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 501 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                        return 3568; /* *avx512vl_eqv8si3_1 */
                      break;

                    case 5:
                      if ((
#line 4671 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 501 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                        return 3572; /* *avx512vl_eqv4si3_1 */
                      break;

                    case 6:
                      if ((
#line 4671 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 502 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                        return 3576; /* *avx512f_eqv8di3_1 */
                      break;

                    case 7:
                      if ((
#line 4671 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 502 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                        return 3580; /* *avx512vl_eqv4di3_1 */
                      break;

                    case 8:
                      if ((
#line 4671 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 502 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                        return 3584; /* *avx512vl_eqv2di3_1 */
                      break;

                    default:
                      break;
                    }
                }
              operands[3] = x3;
              if (!const_0_to_7_operand (operands[3], E_SImode))
                return -1;
              switch (pattern66 (x2))
                {
                case 0:
                  if (!(
#line 4597 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 318 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                    return -1;
                  return 3516; /* avx512vl_ucmpv16qi3 */

                case 1:
                  if (!(
#line 4597 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 319 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                    return -1;
                  return 3522; /* avx512vl_ucmpv16hi3 */

                case 2:
                  if (!(
#line 4686 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 501 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                    return -1;
                  return 3586; /* avx512f_ucmpv16si3 */

                case 3:
                  if (!(
#line 4597 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 319 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                    return -1;
                  return 3524; /* avx512vl_ucmpv8hi3 */

                case 4:
                  if (!(
#line 4686 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 501 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                    return -1;
                  return 3588; /* avx512vl_ucmpv8si3 */

                case 5:
                  if (!(
#line 4686 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 501 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                    return -1;
                  return 3590; /* avx512vl_ucmpv4si3 */

                case 6:
                  if (!(
#line 4686 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 502 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                    return -1;
                  return 3592; /* avx512f_ucmpv8di3 */

                case 7:
                  if (!(
#line 4686 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 502 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                    return -1;
                  return 3594; /* avx512vl_ucmpv4di3 */

                case 8:
                  if (!(
#line 4686 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 502 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                    return -1;
                  return 3596; /* avx512vl_ucmpv2di3 */

                default:
                  return -1;
                }

            case US_MINUS:
              switch (pattern419 (x2))
                {
                case 0:
                  if (!(
#line 4789 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && ix86_pre_reload_split ()
  && ix86_binary_operator_ok (US_MINUS, V16QImode, operands)
  && (INTVAL (operands[4]) & 1) == 0) && 
#line 318 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                    return -1;
                  return 3643; /* *avx512vl_ucmpv16qi3_1 */

                case 1:
                  if (!(
#line 4789 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && ix86_pre_reload_split ()
  && ix86_binary_operator_ok (US_MINUS, V16HImode, operands)
  && (INTVAL (operands[4]) & 1) == 0) && 
#line 319 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                    return -1;
                  return 3649; /* *avx512vl_ucmpv16hi3_1 */

                case 2:
                  if (!(
#line 4789 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && ix86_pre_reload_split ()
  && ix86_binary_operator_ok (US_MINUS, V8HImode, operands)
  && (INTVAL (operands[4]) & 1) == 0) && 
#line 319 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                    return -1;
                  return 3651; /* *avx512vl_ucmpv8hi3_1 */

                default:
                  return -1;
                }

            default:
              return -1;
            }

        case 52:
          if (pattern58 (x1, pnum_clobbers, 
E_V8QImode) != 0)
            return -1;
          x8 = XVECEXP (x2, 0, 1);
          operands[2] = x8;
          if (!register_mmxmem_operand (operands[2], E_V8QImode))
            return -1;
          x3 = XVECEXP (x2, 0, 2);
          operands[4] = x3;
          if (!reg_or_const_vector_operand (operands[4], E_V4SImode)
              || !
#line 23150 "../../gcc/config/i386/sse.md"
((TARGET_MMX || TARGET_MMX_WITH_SSE) && TARGET_SSSE3))
            return -1;
          *pnum_clobbers = 1;
          return 8627; /* *ssse3_pshufbv8qi3 */

        case 132:
          if (pnum_clobbers == NULL
              || pattern247 (x1) != 0
              || !nonimmediate_operand (operands[3], E_V16QImode))
            return -1;
          x3 = XVECEXP (x2, 0, 2);
          operands[4] = x3;
          if (!const_0_to_255_operand (operands[4], E_SImode)
              || !
#line 26070 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_2))
            return -1;
          *pnum_clobbers = 2;
          return 8981; /* sse4_2_pcmpistr_cconly */

        default:
          return -1;
        }

    case 5:
      if (pnum_clobbers == NULL
          || XINT (x2, 1) != 131
          || pattern247 (x1) != 0
          || !register_operand (operands[3], E_SImode))
        return -1;
      x3 = XVECEXP (x2, 0, 2);
      operands[4] = x3;
      if (!nonimmediate_operand (operands[4], E_V16QImode))
        return -1;
      x10 = XVECEXP (x2, 0, 3);
      operands[5] = x10;
      if (!register_operand (operands[5], E_SImode))
        return -1;
      x11 = XVECEXP (x2, 0, 4);
      operands[6] = x11;
      if (!const_0_to_255_operand (operands[6], E_SImode)
          || !
#line 25945 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_2))
        return -1;
      *pnum_clobbers = 2;
      return 8977; /* sse4_2_pcmpestr_cconly */

    default:
      return -1;
    }
}

 int
recog_29 (rtx x1 ATTRIBUTE_UNUSED,
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
    case E_DFmode:
      if (GET_MODE (x3) != E_DFmode)
        return -1;
      if (nonimm_ssenomem_operand (operands[0], E_DFmode)
          && nonimmediate_operand (operands[1], E_SFmode)
          && 
#line 5295 "../../gcc/config/i386/i386.md"
(TARGET_80387 || (TARGET_SSE2 && TARGET_SSE_MATH)))
        return 200; /* *extendsfdf2 */
      if (!register_operand (operands[0], E_DFmode)
          || !nonimmediate_operand (operands[1], E_HFmode)
          || !
#line 5451 "../../gcc/config/i386/i386.md"
(TARGET_AVX512FP16))
        return -1;
      return 202; /* *extendhfdf2 */

    case E_SFmode:
      if (!register_operand (operands[0], E_SFmode)
          || GET_MODE (x3) != E_SFmode
          || !nonimmediate_operand (operands[1], E_HFmode)
          || !
#line 5451 "../../gcc/config/i386/i386.md"
(TARGET_AVX512FP16))
        return -1;
      return 201; /* *extendhfsf2 */

    case E_XFmode:
      if (!nonimmediate_operand (operands[0], E_XFmode))
        return -1;
      switch (pattern424 (x3, 
E_XFmode))
        {
        case 0:
          if (!
#line 5513 "../../gcc/config/i386/i386.md"
(TARGET_80387))
            return -1;
          return 204; /* *extendsfxf2_i387 */

        case 1:
          if (!
#line 5513 "../../gcc/config/i386/i386.md"
(TARGET_80387))
            return -1;
          return 205; /* *extenddfxf2_i387 */

        default:
          return -1;
        }

    default:
      return -1;
    }
}

 int
recog_33 (rtx x1 ATTRIBUTE_UNUSED,
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
    case REG:
    case SUBREG:
    case MEM:
      operands[1] = x4;
      switch (GET_MODE (operands[0]))
        {
        case E_SFmode:
          switch (pattern425 (x3, 
E_SFmode))
            {
            case 0:
              if (!
#line 6062 "../../gcc/config/i386/i386.md"
(TARGET_80387
   && (!(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)
       || TARGET_MIX_SSE_I387)))
                return -1;
              return 239; /* floathisf2 */

            case 1:
              if (!
#line 6092 "../../gcc/config/i386/i386.md"
((TARGET_80387 && X87_ENABLE_FLOAT (SFmode, SImode))
   || (SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)))
                return -1;
              return 244; /* *floatsisf2 */

            case 2:
              if ((
#line 6092 "../../gcc/config/i386/i386.md"
((TARGET_80387 && X87_ENABLE_FLOAT (SFmode, DImode))
   || (SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return 245; /* *floatdisf2 */
              if (!
#line 6145 "../../gcc/config/i386/i386.md"
(!TARGET_64BIT
   && TARGET_80387 && X87_ENABLE_FLOAT (SFmode, DImode)))
                return -1;
              return 252; /* *floatdisf2_i387 */

            default:
              return -1;
            }

        case E_DFmode:
          switch (pattern425 (x3, 
E_DFmode))
            {
            case 0:
              if (!
#line 6062 "../../gcc/config/i386/i386.md"
(TARGET_80387
   && (!(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)
       || TARGET_MIX_SSE_I387)))
                return -1;
              return 240; /* floathidf2 */

            case 1:
              if (!
#line 6092 "../../gcc/config/i386/i386.md"
((TARGET_80387 && X87_ENABLE_FLOAT (DFmode, SImode))
   || (SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)))
                return -1;
              return 246; /* *floatsidf2 */

            case 2:
              if ((
#line 6092 "../../gcc/config/i386/i386.md"
((TARGET_80387 && X87_ENABLE_FLOAT (DFmode, DImode))
   || (SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return 247; /* *floatdidf2 */
              if (!
#line 6145 "../../gcc/config/i386/i386.md"
(!TARGET_64BIT
   && TARGET_80387 && X87_ENABLE_FLOAT (DFmode, DImode)))
                return -1;
              return 253; /* *floatdidf2_i387 */

            default:
              return -1;
            }

        case E_XFmode:
          switch (pattern425 (x3, 
E_XFmode))
            {
            case 0:
              if (!
#line 6062 "../../gcc/config/i386/i386.md"
(TARGET_80387
   && (!(SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH)
       || TARGET_MIX_SSE_I387)))
                return -1;
              return 241; /* floathixf2 */

            case 1:
              if (!
#line 6074 "../../gcc/config/i386/i386.md"
(TARGET_80387))
                return -1;
              return 242; /* floatsixf2 */

            case 2:
              if (!
#line 6074 "../../gcc/config/i386/i386.md"
(TARGET_80387))
                return -1;
              return 243; /* floatdixf2 */

            default:
              return -1;
            }

        case E_HFmode:
          switch (pattern261 (x3, 
E_HFmode))
            {
            case 0:
              if (!
#line 6136 "../../gcc/config/i386/i386.md"
(TARGET_AVX512FP16))
                return -1;
              return 248; /* floatsihf2 */

            case 1:
              if (!(
#line 6136 "../../gcc/config/i386/i386.md"
(TARGET_AVX512FP16) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return -1;
              return 250; /* floatdihf2 */

            default:
              return -1;
            }

        default:
          return -1;
        }

    case SIGN_EXTEND:
      if (GET_MODE (x4) != E_V2SImode)
        return -1;
      x5 = XEXP (x4, 0);
      if (GET_CODE (x5) != TRUNCATE
          || GET_MODE (x5) != E_V2HImode
          || !register_operand (operands[0], E_V2SFmode)
          || GET_MODE (x3) != E_V2SFmode)
        return -1;
      x6 = XEXP (x5, 0);
      operands[1] = x6;
      if (!nonimmediate_operand (operands[1], E_V2SImode)
          || !
#line 1624 "../../gcc/config/i386/mmx.md"
(TARGET_3DNOW_A))
        return -1;
      return 2077; /* mmx_pi2fw */

    default:
      return -1;
    }
}

 int
recog_40 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  switch (GET_CODE (x3))
    {
    case REG:
    case SUBREG:
    case MEM:
      operands[1] = x3;
      x4 = XEXP (x1, 0);
      switch (GET_CODE (x4))
        {
        case REG:
        case SUBREG:
        case MEM:
          operands[0] = x4;
          switch (GET_MODE (operands[0]))
            {
            case E_TImode:
              if (pnum_clobbers == NULL
                  || !nonimmediate_operand (operands[0], E_TImode)
                  || GET_MODE (x2) != E_TImode
                  || !nonimmediate_operand (operands[1], E_TImode)
                  || !(
#line 14237 "../../gcc/config/i386/i386.md"
(ix86_unary_operator_ok (NEG, TImode, operands, TARGET_APX_NDD)) && 
#line 1236 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return -1;
              *pnum_clobbers = 1;
              return 953; /* *negti2_doubleword */

            case E_QImode:
              if (!nonimmediate_operand (operands[0], E_QImode)
                  || GET_MODE (x2) != E_QImode
                  || !nonimmediate_operand (operands[1], E_QImode))
                return -1;
              if (
#line 14346 "../../gcc/config/i386/i386.md"
(ix86_unary_operator_ok (NEG, QImode, operands, TARGET_APX_NDD)
   && TARGET_APX_NF))
                return 954; /* *negqi_1_nf */
              if (pnum_clobbers == NULL
                  || !
#line 14346 "../../gcc/config/i386/i386.md"
(ix86_unary_operator_ok (NEG, QImode, operands, TARGET_APX_NDD)
   && true))
                return -1;
              *pnum_clobbers = 1;
              return 955; /* *negqi_1 */

            case E_HImode:
              if (!nonimmediate_operand (operands[0], E_HImode)
                  || GET_MODE (x2) != E_HImode
                  || !nonimmediate_operand (operands[1], E_HImode))
                return -1;
              if (
#line 14346 "../../gcc/config/i386/i386.md"
(ix86_unary_operator_ok (NEG, HImode, operands, TARGET_APX_NDD)
   && TARGET_APX_NF))
                return 956; /* *neghi_1_nf */
              if (pnum_clobbers == NULL
                  || !
#line 14346 "../../gcc/config/i386/i386.md"
(ix86_unary_operator_ok (NEG, HImode, operands, TARGET_APX_NDD)
   && true))
                return -1;
              *pnum_clobbers = 1;
              return 957; /* *neghi_1 */

            case E_SFmode:
              if (!register_operand (operands[0], E_SFmode)
                  || GET_MODE (x2) != E_SFmode
                  || !register_operand (operands[1], E_SFmode))
                return -1;
              if (pnum_clobbers != NULL
                  && 
#line 14810 "../../gcc/config/i386/i386.md"
(TARGET_80387 && !(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)))
                {
                  *pnum_clobbers = 1;
                  return 1011; /* *negsf2_i387_1 */
                }
              if (!
#line 14932 "../../gcc/config/i386/i386.md"
(TARGET_80387 && reload_completed))
                return -1;
              return 1025; /* *negsf2_i387 */

            case E_DFmode:
              if (!register_operand (operands[0], E_DFmode)
                  || GET_MODE (x2) != E_DFmode
                  || !register_operand (operands[1], E_DFmode))
                return -1;
              if (pnum_clobbers != NULL
                  && 
#line 14810 "../../gcc/config/i386/i386.md"
(TARGET_80387 && !(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)))
                {
                  *pnum_clobbers = 1;
                  return 1013; /* *negdf2_i387_1 */
                }
              if (!
#line 14932 "../../gcc/config/i386/i386.md"
(TARGET_80387 && reload_completed))
                return -1;
              return 1027; /* *negdf2_i387 */

            case E_XFmode:
              if (!register_operand (operands[0], E_XFmode)
                  || GET_MODE (x2) != E_XFmode
                  || !register_operand (operands[1], E_XFmode))
                return -1;
              if (pnum_clobbers != NULL
                  && 
#line 14810 "../../gcc/config/i386/i386.md"
(TARGET_80387 && !(SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH)))
                {
                  *pnum_clobbers = 1;
                  return 1015; /* *negxf2_i387_1 */
                }
              if (!
#line 14932 "../../gcc/config/i386/i386.md"
(TARGET_80387 && reload_completed))
                return -1;
              return 1029; /* *negxf2_i387 */

            case E_V2QImode:
              if (pattern614 (x2, pnum_clobbers, 
E_V2QImode) != 0
                  || !
#line 3134 "../../gcc/config/i386/mmx.md"
(!TARGET_PARTIAL_REG_STALL || optimize_size || TARGET_SSE2))
                return -1;
              *pnum_clobbers = 1;
              return 2117; /* negv2qi2 */

            default:
              return -1;
            }

        case STRICT_LOW_PART:
          switch (pattern262 (x1, pnum_clobbers))
            {
            case 0:
              if (!
#line 14395 "../../gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)))
                return -1;
              *pnum_clobbers = 1;
              return 973; /* *negqi_1_slp */

            case 1:
              if (!
#line 14395 "../../gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)))
                return -1;
              *pnum_clobbers = 1;
              return 974; /* *neghi_1_slp */

            default:
              return -1;
            }

        default:
          return -1;
        }

    case ABS:
      if (pnum_clobbers == NULL)
        return -1;
      x4 = XEXP (x1, 0);
      operands[0] = x4;
      x5 = XEXP (x3, 0);
      operands[1] = x5;
      switch (GET_MODE (operands[0]))
        {
        case E_TImode:
          if (pattern615 (x2, 
E_TImode) != 0
              || !(
#line 14644 "../../gcc/config/i386/i386.md"
(TARGET_CMOVE
   && ix86_pre_reload_split ()) && 
#line 1236 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return -1;
          *pnum_clobbers = 1;
          return 998; /* *nabsti2_doubleword */

        case E_QImode:
          if (pattern615 (x2, 
E_QImode) != 0
              || !
#line 14715 "../../gcc/config/i386/i386.md"
(TARGET_CMOVE
   && (QImode != QImode || !TARGET_PARTIAL_REG_STALL)
   && ix86_pre_reload_split ()))
            return -1;
          *pnum_clobbers = 1;
          return 1003; /* *nabsqi2_1 */

        case E_HImode:
          if (pattern615 (x2, 
E_HImode) != 0
              || !
#line 14715 "../../gcc/config/i386/i386.md"
(TARGET_CMOVE
   && (HImode != QImode || !TARGET_PARTIAL_REG_STALL)
   && ix86_pre_reload_split ()))
            return -1;
          *pnum_clobbers = 1;
          return 1004; /* *nabshi2_1 */

        default:
          return -1;
        }

    case LTU:
    case UNLT:
      if (pnum_clobbers == NULL)
        return -1;
      operands[1] = x3;
      if (!ix86_carry_flag_operator (operands[1], E_VOIDmode))
        return -1;
      x5 = XEXP (x3, 0);
      if (GET_CODE (x5) != REG
          || REGNO (x5) != 17)
        return -1;
      x6 = XEXP (x3, 1);
      if (x6 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
        return -1;
      x4 = XEXP (x1, 0);
      operands[0] = x4;
      switch (pattern967 (x2))
        {
        case 0:
          *pnum_clobbers = 1;
          return 1793; /* *x86_movqicc_0_m1_neg */

        case 1:
          *pnum_clobbers = 1;
          return 1794; /* *x86_movhicc_0_m1_neg */

        default:
          return -1;
        }

    default:
      return -1;
    }
}

 int
recog_46 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == EQ)
    {
      res = recog_45 (x1, insn, pnum_clobbers);
      if (res >= 0)
        return res;
    }
  if (pnum_clobbers == NULL)
    return -1;
  operands[1] = x2;
  if (!bt_comparison_operator (operands[1], E_QImode))
    return -1;
  x3 = XEXP (x2, 1);
  if (x3 != const_int_rtx[MAX_SAVED_CONST_INT + -1]
      || !nonimmediate_operand (operands[0], E_QImode))
    return -1;
  x4 = XEXP (x2, 0);
  operands[2] = x4;
  switch (GET_MODE (operands[2]))
    {
    case E_QImode:
      if (!register_operand (operands[2], E_QImode)
          || !(
#line 2384 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 1555 "../../gcc/config/i386/i386.md"
(TARGET_AVX512DQ)))
        return -1;
      *pnum_clobbers = 1;
      return 2620; /* *kortest_cmpqi_setcc */

    case E_HImode:
      if (!register_operand (operands[2], E_HImode)
          || !
#line 2384 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW))
        return -1;
      *pnum_clobbers = 1;
      return 2621; /* *kortest_cmphi_setcc */

    case E_SImode:
      if (!register_operand (operands[2], E_SImode)
          || !
#line 2384 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW))
        return -1;
      *pnum_clobbers = 1;
      return 2622; /* *kortest_cmpsi_setcc */

    case E_DImode:
      if (!register_operand (operands[2], E_DImode)
          || !(
#line 2384 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 1556 "../../gcc/config/i386/i386.md"
(TARGET_AVX512BW && TARGET_64BIT)))
        return -1;
      *pnum_clobbers = 1;
      return 2623; /* *kortest_cmpdi_setcc */

    default:
      return -1;
    }
}

 int
recog_47 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  switch (GET_CODE (x2))
    {
    case NE:
    case EQ:
      res = recog_46 (x1, insn, pnum_clobbers);
      if (res >= 0)
        return res;
      break;

    case LT:
      switch (pattern232 (x2))
        {
        case 0:
          if (
#line 3873 "../../gcc/config/i386/mmx.md"
(TARGET_MMX_WITH_SSE && ix86_pre_reload_split ()))
            return 2194; /* *mmx_ashrv4hi3_1 */
          break;

        case 1:
          if (
#line 3873 "../../gcc/config/i386/mmx.md"
(TARGET_MMX_WITH_SSE && ix86_pre_reload_split ()))
            return 2195; /* *mmx_ashrv2si3_1 */
          break;

        case 2:
          if (
#line 3962 "../../gcc/config/i386/mmx.md"
(TARGET_SSE2 && ix86_pre_reload_split ()))
            return 2207; /* *mmx_ashrv2hi3_1 */
          break;

        default:
          break;
        }
      break;

    case GT:
      x3 = XEXP (x2, 0);
      operands[1] = x3;
      x4 = XEXP (x2, 1);
      operands[2] = x4;
      switch (GET_MODE (operands[0]))
        {
        case E_V8QImode:
          if (pattern849 (x2, 
E_V8QImode) == 0
              && 
#line 4170 "../../gcc/config/i386/mmx.md"
(TARGET_MMX || TARGET_MMX_WITH_SSE))
            return 2217; /* mmx_gtv8qi3 */
          break;

        case E_V4HImode:
          if (pattern849 (x2, 
E_V4HImode) == 0
              && 
#line 4170 "../../gcc/config/i386/mmx.md"
(TARGET_MMX || TARGET_MMX_WITH_SSE))
            return 2218; /* mmx_gtv4hi3 */
          break;

        case E_V2SImode:
          if (pattern849 (x2, 
E_V2SImode) == 0
              && 
#line 4170 "../../gcc/config/i386/mmx.md"
(TARGET_MMX || TARGET_MMX_WITH_SSE))
            return 2219; /* mmx_gtv2si3 */
          break;

        case E_V4QImode:
          if (pattern7 (x2, 
E_V4QImode) == 0
              && 
#line 4185 "../../gcc/config/i386/mmx.md"
(TARGET_SSE2))
            return 2220; /* *gtv4qi3 */
          break;

        case E_V2QImode:
          if (pattern7 (x2, 
E_V2QImode) == 0
              && 
#line 4185 "../../gcc/config/i386/mmx.md"
(TARGET_SSE2))
            return 2221; /* *gtv2qi3 */
          break;

        case E_V2HImode:
          if (pattern7 (x2, 
E_V2HImode) == 0
              && 
#line 4185 "../../gcc/config/i386/mmx.md"
(TARGET_SSE2))
            return 2222; /* *gtv2hi3 */
          break;

        default:
          break;
        }
      break;

    default:
      break;
    }
  operands[1] = x2;
  x3 = XEXP (x2, 0);
  operands[2] = x3;
  x4 = XEXP (x2, 1);
  operands[3] = x4;
  switch (GET_MODE (operands[0]))
    {
    case E_V8QImode:
      if (pattern850 (
E_V8QImode) != 0
          || !
#line 4198 "../../gcc/config/i386/mmx.md"
(TARGET_XOP))
        return -1;
      return 2223; /* *xop_maskcmpv8qi3 */

    case E_V4HImode:
      if (pattern850 (
E_V4HImode) != 0
          || !
#line 4198 "../../gcc/config/i386/mmx.md"
(TARGET_XOP))
        return -1;
      return 2224; /* *xop_maskcmpv4hi3 */

    case E_V2SImode:
      if (pattern850 (
E_V2SImode) != 0
          || !
#line 4198 "../../gcc/config/i386/mmx.md"
(TARGET_XOP))
        return -1;
      return 2225; /* *xop_maskcmpv2si3 */

    case E_V4QImode:
      if (pattern850 (
E_V4QImode) != 0
          || !
#line 4208 "../../gcc/config/i386/mmx.md"
(TARGET_XOP))
        return -1;
      return 2226; /* *xop_maskcmpv4qi3 */

    case E_V2QImode:
      if (pattern850 (
E_V2QImode) != 0
          || !
#line 4208 "../../gcc/config/i386/mmx.md"
(TARGET_XOP))
        return -1;
      return 2227; /* *xop_maskcmpv2qi3 */

    case E_V2HImode:
      if (pattern850 (
E_V2HImode) != 0
          || !
#line 4208 "../../gcc/config/i386/mmx.md"
(TARGET_XOP))
        return -1;
      return 2228; /* *xop_maskcmpv2hi3 */

    default:
      return -1;
    }
}

 int
recog_58 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  switch (GET_CODE (x2))
    {
    case PLUS:
      res = recog_53 (x1, insn, pnum_clobbers);
      if (res >= 0)
        return res;
      break;

    case MINUS:
      res = recog_56 (x1, insn, pnum_clobbers);
      if (res >= 0)
        return res;
      break;

    case MULT:
      res = recog_57 (x1, insn, pnum_clobbers);
      if (res >= 0)
        return res;
      break;

    case DIV:
      if (GET_MODE (x2) == E_HFmode)
        {
          x3 = XEXP (x1, 0);
          operands[0] = x3;
          if (register_operand (operands[0], E_HFmode))
            {
              x4 = XEXP (x2, 0);
              operands[1] = x4;
              if (nonimmediate_operand (operands[1], E_HFmode))
                {
                  x5 = XEXP (x2, 1);
                  operands[2] = x5;
                  if (nonimmediate_operand (operands[2], E_HFmode)
                      && 
#line 23304 "../../gcc/config/i386/i386.md"
(TARGET_AVX512FP16
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
                    return 1673; /* *divhf */
                }
            }
        }
      break;

    default:
      break;
    }
  operands[3] = x2;
  x3 = XEXP (x1, 0);
  operands[0] = x3;
  x4 = XEXP (x2, 0);
  switch (GET_CODE (x4))
    {
    case REG:
    case SUBREG:
    case MEM:
      operands[1] = x4;
      x5 = XEXP (x2, 1);
      switch (GET_CODE (x5))
        {
        case REG:
        case SUBREG:
        case MEM:
          operands[2] = x5;
          switch (GET_MODE (operands[0]))
            {
            case E_XFmode:
              if (!register_operand (operands[0], E_XFmode)
                  || !binary_fp_operator (operands[3], E_XFmode)
                  || !register_operand (operands[1], E_XFmode)
                  || !register_operand (operands[2], E_XFmode))
                return -1;
              if (
#line 23256 "../../gcc/config/i386/i386.md"
(TARGET_80387
   && COMMUTATIVE_ARITH_P (operands[3])))
                return 1667; /* *fop_xf_comm_i387 */
              if (!
#line 23354 "../../gcc/config/i386/i386.md"
(TARGET_80387
   && !COMMUTATIVE_ARITH_P (operands[3])))
                return -1;
              return 1676; /* *fop_xf_1_i387 */

            case E_SFmode:
              if (!register_operand (operands[0], E_SFmode)
                  || !binary_fp_operator (operands[3], E_SFmode)
                  || !nonimmediate_operand (operands[2], E_SFmode))
                return -1;
              if (nonimmediate_operand (operands[1], E_SFmode)
                  && 
#line 23270 "../../gcc/config/i386/i386.md"
(((SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)
    || (TARGET_80387 && X87_ENABLE_ARITH (SFmode)))
   && COMMUTATIVE_ARITH_P (operands[3])
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
                return 1668; /* *fop_sf_comm */
              if (!x87nonimm_ssenomem_operand (operands[1], E_SFmode)
                  || !
#line 23370 "../../gcc/config/i386/i386.md"
(((SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)
    || (TARGET_80387 && X87_ENABLE_ARITH (SFmode)))
   && !COMMUTATIVE_ARITH_P (operands[3])
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
                return -1;
              return 1677; /* *fop_sf_1 */

            case E_DFmode:
              if (!register_operand (operands[0], E_DFmode)
                  || !binary_fp_operator (operands[3], E_DFmode)
                  || !nonimmediate_operand (operands[2], E_DFmode))
                return -1;
              if (nonimmediate_operand (operands[1], E_DFmode)
                  && 
#line 23270 "../../gcc/config/i386/i386.md"
(((SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)
    || (TARGET_80387 && X87_ENABLE_ARITH (DFmode)))
   && COMMUTATIVE_ARITH_P (operands[3])
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
                return 1669; /* *fop_df_comm */
              if (!x87nonimm_ssenomem_operand (operands[1], E_DFmode)
                  || !
#line 23370 "../../gcc/config/i386/i386.md"
(((SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)
    || (TARGET_80387 && X87_ENABLE_ARITH (DFmode)))
   && !COMMUTATIVE_ARITH_P (operands[3])
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
                return -1;
              return 1678; /* *fop_df_1 */

            default:
              return -1;
            }

        case FLOAT:
          x6 = XEXP (x5, 0);
          operands[2] = x6;
          switch (GET_MODE (operands[0]))
            {
            case E_SFmode:
              switch (pattern857 (x5, 
E_SFmode))
                {
                case 0:
                  if (!
#line 23426 "../../gcc/config/i386/i386.md"
(TARGET_80387 && X87_ENABLE_FLOAT (SFmode, HImode)
   && !(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)
   && (TARGET_USE_HIMODE_FIOP
       || optimize_function_for_size_p (cfun))))
                    return -1;
                  return 1685; /* *fop_sf_3_i387 */

                case 1:
                  if (!
#line 23426 "../../gcc/config/i386/i386.md"
(TARGET_80387 && X87_ENABLE_FLOAT (SFmode, SImode)
   && !(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)
   && (TARGET_USE_SIMODE_FIOP
       || optimize_function_for_size_p (cfun))))
                    return -1;
                  return 1688; /* *fop_sf_3_i387 */

                default:
                  return -1;
                }

            case E_DFmode:
              switch (pattern857 (x5, 
E_DFmode))
                {
                case 0:
                  if (!
#line 23426 "../../gcc/config/i386/i386.md"
(TARGET_80387 && X87_ENABLE_FLOAT (DFmode, HImode)
   && !(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)
   && (TARGET_USE_HIMODE_FIOP
       || optimize_function_for_size_p (cfun))))
                    return -1;
                  return 1686; /* *fop_df_3_i387 */

                case 1:
                  if (!
#line 23426 "../../gcc/config/i386/i386.md"
(TARGET_80387 && X87_ENABLE_FLOAT (DFmode, SImode)
   && !(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)
   && (TARGET_USE_SIMODE_FIOP
       || optimize_function_for_size_p (cfun))))
                    return -1;
                  return 1689; /* *fop_df_3_i387 */

                default:
                  return -1;
                }

            case E_XFmode:
              switch (pattern857 (x5, 
E_XFmode))
                {
                case 0:
                  if (!
#line 23426 "../../gcc/config/i386/i386.md"
(TARGET_80387 && X87_ENABLE_FLOAT (XFmode, HImode)
   && !(SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH)
   && (TARGET_USE_HIMODE_FIOP
       || optimize_function_for_size_p (cfun))))
                    return -1;
                  return 1687; /* *fop_xf_3_i387 */

                case 1:
                  if (!
#line 23426 "../../gcc/config/i386/i386.md"
(TARGET_80387 && X87_ENABLE_FLOAT (XFmode, SImode)
   && !(SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH)
   && (TARGET_USE_SIMODE_FIOP
       || optimize_function_for_size_p (cfun))))
                    return -1;
                  return 1690; /* *fop_xf_3_i387 */

                default:
                  return -1;
                }

            default:
              return -1;
            }

        case FLOAT_EXTEND:
          x6 = XEXP (x5, 0);
          operands[2] = x6;
          switch (pattern746 ())
            {
            case 0:
              if (!register_operand (operands[1], E_XFmode)
                  || GET_MODE (x5) != E_XFmode)
                return -1;
              switch (GET_MODE (operands[2]))
                {
                case E_SFmode:
                  if (!nonimmediate_operand (operands[2], E_SFmode)
                      || !
#line 23482 "../../gcc/config/i386/i386.md"
(TARGET_80387))
                    return -1;
                  return 1694; /* *fop_xf_5_i387 */

                case E_DFmode:
                  if (!nonimmediate_operand (operands[2], E_DFmode)
                      || !
#line 23482 "../../gcc/config/i386/i386.md"
(TARGET_80387))
                    return -1;
                  return 1695; /* *fop_xf_5_i387 */

                default:
                  return -1;
                }

            case 1:
              if (!register_operand (operands[1], E_DFmode)
                  || GET_MODE (x5) != E_DFmode
                  || !nonimmediate_operand (operands[2], E_SFmode)
                  || !
#line 23499 "../../gcc/config/i386/i386.md"
(TARGET_80387 && X87_ENABLE_ARITH (DFmode)
   && !(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)))
                return -1;
              return 1696; /* *fop_df_5_i387 */

            default:
              return -1;
            }

        default:
          return -1;
        }

    case FLOAT:
      x7 = XEXP (x4, 0);
      operands[1] = x7;
      x5 = XEXP (x2, 1);
      operands[2] = x5;
      switch (GET_MODE (operands[0]))
        {
        case E_SFmode:
          switch (pattern747 (x4, 
E_SFmode))
            {
            case 0:
              if (!
#line 23405 "../../gcc/config/i386/i386.md"
(TARGET_80387 && X87_ENABLE_FLOAT (SFmode, HImode)
   && !(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)
   && (TARGET_USE_HIMODE_FIOP
       || optimize_function_for_size_p (cfun))))
                return -1;
              return 1679; /* *fop_sf_2_i387 */

            case 1:
              if (!
#line 23405 "../../gcc/config/i386/i386.md"
(TARGET_80387 && X87_ENABLE_FLOAT (SFmode, SImode)
   && !(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)
   && (TARGET_USE_SIMODE_FIOP
       || optimize_function_for_size_p (cfun))))
                return -1;
              return 1682; /* *fop_sf_2_i387 */

            default:
              return -1;
            }

        case E_DFmode:
          switch (pattern747 (x4, 
E_DFmode))
            {
            case 0:
              if (!
#line 23405 "../../gcc/config/i386/i386.md"
(TARGET_80387 && X87_ENABLE_FLOAT (DFmode, HImode)
   && !(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)
   && (TARGET_USE_HIMODE_FIOP
       || optimize_function_for_size_p (cfun))))
                return -1;
              return 1680; /* *fop_df_2_i387 */

            case 1:
              if (!
#line 23405 "../../gcc/config/i386/i386.md"
(TARGET_80387 && X87_ENABLE_FLOAT (DFmode, SImode)
   && !(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)
   && (TARGET_USE_SIMODE_FIOP
       || optimize_function_for_size_p (cfun))))
                return -1;
              return 1683; /* *fop_df_2_i387 */

            default:
              return -1;
            }

        case E_XFmode:
          switch (pattern747 (x4, 
E_XFmode))
            {
            case 0:
              if (!
#line 23405 "../../gcc/config/i386/i386.md"
(TARGET_80387 && X87_ENABLE_FLOAT (XFmode, HImode)
   && !(SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH)
   && (TARGET_USE_HIMODE_FIOP
       || optimize_function_for_size_p (cfun))))
                return -1;
              return 1681; /* *fop_xf_2_i387 */

            case 1:
              if (!
#line 23405 "../../gcc/config/i386/i386.md"
(TARGET_80387 && X87_ENABLE_FLOAT (XFmode, SImode)
   && !(SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH)
   && (TARGET_USE_SIMODE_FIOP
       || optimize_function_for_size_p (cfun))))
                return -1;
              return 1684; /* *fop_xf_2_i387 */

            default:
              return -1;
            }

        default:
          return -1;
        }

    case FLOAT_EXTEND:
      x7 = XEXP (x4, 0);
      operands[1] = x7;
      x5 = XEXP (x2, 1);
      switch (GET_CODE (x5))
        {
        case REG:
        case SUBREG:
          operands[2] = x5;
          switch (pattern746 ())
            {
            case 0:
              if (GET_MODE (x4) != E_XFmode
                  || !register_operand (operands[2], E_XFmode))
                return -1;
              switch (GET_MODE (operands[1]))
                {
                case E_SFmode:
                  if (!nonimmediate_operand (operands[1], E_SFmode)
                      || !
#line 23447 "../../gcc/config/i386/i386.md"
(TARGET_80387))
                    return -1;
                  return 1691; /* *fop_xf_4_i387 */

                case E_DFmode:
                  if (!nonimmediate_operand (operands[1], E_DFmode)
                      || !
#line 23447 "../../gcc/config/i386/i386.md"
(TARGET_80387))
                    return -1;
                  return 1692; /* *fop_xf_4_i387 */

                default:
                  return -1;
                }

            case 1:
              if (GET_MODE (x4) != E_DFmode
                  || !nonimmediate_operand (operands[1], E_SFmode)
                  || !register_operand (operands[2], E_DFmode)
                  || !
#line 23464 "../../gcc/config/i386/i386.md"
(TARGET_80387 && X87_ENABLE_ARITH (DFmode)
   && !(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)))
                return -1;
              return 1693; /* *fop_df_4_i387 */

            default:
              return -1;
            }

        case FLOAT_EXTEND:
          x6 = XEXP (x5, 0);
          operands[2] = x6;
          switch (pattern746 ())
            {
            case 0:
              if (GET_MODE (x4) != E_XFmode
                  || GET_MODE (x5) != E_XFmode)
                return -1;
              switch (GET_MODE (operands[1]))
                {
                case E_SFmode:
                  if (!register_operand (operands[1], E_SFmode)
                      || !nonimmediate_operand (operands[2], E_SFmode)
                      || !
#line 23518 "../../gcc/config/i386/i386.md"
(TARGET_80387))
                    return -1;
                  return 1697; /* *fop_xf_6_i387 */

                case E_DFmode:
                  if (!register_operand (operands[1], E_DFmode)
                      || !nonimmediate_operand (operands[2], E_DFmode)
                      || !
#line 23518 "../../gcc/config/i386/i386.md"
(TARGET_80387))
                    return -1;
                  return 1698; /* *fop_xf_6_i387 */

                default:
                  return -1;
                }

            case 1:
              if (pattern855 (x2, 
E_SFmode, 
E_DFmode) != 0
                  || !
#line 23536 "../../gcc/config/i386/i386.md"
(TARGET_80387 && X87_ENABLE_ARITH (DFmode)
   && !(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)))
                return -1;
              return 1699; /* *fop_df_6_i387 */

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
recog_72 (rtx x1 ATTRIBUTE_UNUSED,
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
      switch (pattern107 (x2, pnum_clobbers))
        {
        case 0:
          if (
#line 12626 "../../gcc/config/i386/i386.md"
(TARGET_APX_NDD && TARGET_APX_NF
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
            return 710; /* *andqi_1_zextsi_nf */
          if (pnum_clobbers == NULL
              || !
#line 12626 "../../gcc/config/i386/i386.md"
(TARGET_APX_NDD && true
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
            return -1;
          *pnum_clobbers = 1;
          return 711; /* *andqi_1_zextsi */

        case 1:
          if (
#line 12640 "../../gcc/config/i386/i386.md"
(TARGET_APX_NDD && TARGET_APX_NF
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
            return 714; /* *andhi_1_zextsi_nf */
          if (pnum_clobbers == NULL
              || !
#line 12640 "../../gcc/config/i386/i386.md"
(TARGET_APX_NDD && true
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
            return -1;
          *pnum_clobbers = 1;
          return 715; /* *andhi_1_zextsi */

        case 2:
          if (
#line 12626 "../../gcc/config/i386/i386.md"
(TARGET_APX_NDD && TARGET_APX_NF
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
            return 712; /* *andqi_1_zextdi_nf */
          if (pnum_clobbers == NULL
              || !
#line 12626 "../../gcc/config/i386/i386.md"
(TARGET_APX_NDD && true
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
            return -1;
          *pnum_clobbers = 1;
          return 713; /* *andqi_1_zextdi */

        case 3:
          if (
#line 12640 "../../gcc/config/i386/i386.md"
(TARGET_APX_NDD && TARGET_APX_NF
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
            return 716; /* *andhi_1_zextdi_nf */
          if (pnum_clobbers == NULL
              || !
#line 12640 "../../gcc/config/i386/i386.md"
(TARGET_APX_NDD && true
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
            return -1;
          *pnum_clobbers = 1;
          return 717; /* *andhi_1_zextdi */

        case 4:
          if (!
#line 12656 "../../gcc/config/i386/i386.md"
(TARGET_64BIT
   && ix86_binary_operator_ok (AND, SImode, operands, TARGET_APX_NDD)))
            return -1;
          *pnum_clobbers = 1;
          return 718; /* *andsi_1_zext */

        default:
          return -1;
        }

    case PLUS:
      if (pnum_clobbers == NULL
          || pattern437 (x4) != 0)
        return -1;
      x5 = XEXP (x4, 1);
      if (x5 != const_int_rtx[MAX_SAVED_CONST_INT + -1]
          || !register_operand (operands[0], E_DImode)
          || GET_MODE (x2) != E_DImode
          || GET_MODE (x3) != E_SImode)
        return -1;
      x6 = XEXP (x4, 0);
      x7 = XEXP (x6, 1);
      operands[2] = x7;
      if (!register_operand (operands[2], E_QImode))
        return -1;
      x8 = XEXP (x3, 1);
      operands[1] = x8;
      if (!nonimmediate_operand (operands[1], E_SImode)
          || !
#line 21959 "../../gcc/config/i386/i386.md"
(TARGET_64BIT && TARGET_BMI2))
        return -1;
      *pnum_clobbers = 1;
      return 1592; /* *bmi2_bzhi_zero_extendsidi_4 */

    case UNSPEC:
      if (XVECLEN (x4, 0) != 2)
        return -1;
      x9 = XVECEXP (x4, 0, 0);
      operands[1] = x9;
      x10 = XVECEXP (x4, 0, 1);
      operands[2] = x10;
      x8 = XEXP (x3, 1);
      operands[3] = x8;
      switch (XINT (x4, 1))
        {
        case 158:
          switch (GET_MODE (operands[0]))
            {
            case E_DImode:
              switch (pattern1081 (x2, 
E_DImode))
                {
                case 0:
                  if (!(
#line 19091 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW
   && (8
       > GET_MODE_SIZE (DImode))) && 
#line 19044 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512)))
                    return -1;
                  return 8190; /* *avx512bw_testmv64qi3_zext_mask */

                case 1:
                  if (!(
#line 19091 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW
   && (8
       > GET_MODE_SIZE (SImode))) && ((
#line 19044 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512) && 
#line 506 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL && TARGET_AVX512BW)) && 
#line 506 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL && TARGET_AVX512BW))))
                    return -1;
                  return 8193; /* *avx512vl_testmv32qi3_zext_mask */

                case 2:
                  if (!(
#line 19091 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW
   && (8
       > GET_MODE_SIZE (SImode))) && 
#line 19044 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512)))
                    return -1;
                  return 8199; /* *avx512bw_testmv32hi3_zext_mask */

                case 3:
                  if (!(
#line 19091 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW
   && (8
       > GET_MODE_SIZE (HImode))) && ((
#line 19044 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512) && 
#line 507 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL && TARGET_AVX512BW)) && 
#line 507 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL && TARGET_AVX512BW))))
                    return -1;
                  return 8196; /* *avx512vl_testmv16qi3_zext_mask */

                case 4:
                  if (!(
#line 19091 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW
   && (8
       > GET_MODE_SIZE (HImode))) && ((
#line 19044 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512) && 
#line 509 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL && TARGET_AVX512BW)) && 
#line 509 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL && TARGET_AVX512BW))))
                    return -1;
                  return 8202; /* *avx512vl_testmv16hi3_zext_mask */

                case 5:
                  if (!(
#line 19091 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW
   && (8
       > GET_MODE_SIZE (HImode))) && ((
#line 19044 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512) && 
#line 511 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)) && 
#line 511 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512))))
                    return -1;
                  return 8208; /* *avx512f_testmv16si3_zext_mask */

                case 6:
                  if (!(
#line 19091 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW
   && (8
       > GET_MODE_SIZE (QImode))) && ((
#line 19044 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512) && 
#line 510 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL && TARGET_AVX512BW)) && 
#line 510 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL && TARGET_AVX512BW))))
                    return -1;
                  return 8205; /* *avx512vl_testmv8hi3_zext_mask */

                case 7:
                  if (!(
#line 19091 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW
   && (8
       > GET_MODE_SIZE (QImode))) && ((
#line 19044 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512) && 
#line 511 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 511 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
                    return -1;
                  return 8211; /* *avx512vl_testmv8si3_zext_mask */

                case 8:
                  if (!(
#line 19091 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW
   && (8
       > GET_MODE_SIZE (QImode))) && ((
#line 19044 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512) && 
#line 511 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 511 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
                    return -1;
                  return 8214; /* *avx512vl_testmv4si3_zext_mask */

                case 9:
                  if (!(
#line 19091 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW
   && (8
       > GET_MODE_SIZE (QImode))) && ((
#line 19044 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512) && 
#line 512 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)) && 
#line 512 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512))))
                    return -1;
                  return 8217; /* *avx512f_testmv8di3_zext_mask */

                case 10:
                  if (!(
#line 19091 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW
   && (8
       > GET_MODE_SIZE (QImode))) && ((
#line 19044 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512) && 
#line 512 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 512 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
                    return -1;
                  return 8220; /* *avx512vl_testmv4di3_zext_mask */

                case 11:
                  if (!(
#line 19091 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW
   && (8
       > GET_MODE_SIZE (QImode))) && ((
#line 19044 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512) && 
#line 512 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 512 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
                    return -1;
                  return 8223; /* *avx512vl_testmv2di3_zext_mask */

                default:
                  return -1;
                }

            case E_SImode:
              switch (pattern1081 (x2, 
E_SImode))
                {
                case 0:
                  if (!(
#line 19091 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW
   && (4
       > GET_MODE_SIZE (DImode))) && ((
#line 19044 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 505 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512)) && 
#line 505 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512))))
                    return -1;
                  return 8191; /* *avx512bw_testmv64qi3_zext_mask */

                case 1:
                  if (!(
#line 19091 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW
   && (4
       > GET_MODE_SIZE (SImode))) && ((
#line 19044 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 506 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL && TARGET_AVX512BW)) && 
#line 506 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL && TARGET_AVX512BW))))
                    return -1;
                  return 8194; /* *avx512vl_testmv32qi3_zext_mask */

                case 2:
                  if (!(
#line 19091 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW
   && (4
       > GET_MODE_SIZE (SImode))) && ((
#line 19044 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 508 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512)) && 
#line 508 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512))))
                    return -1;
                  return 8200; /* *avx512bw_testmv32hi3_zext_mask */

                case 3:
                  if (!(
#line 19091 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW
   && (4
       > GET_MODE_SIZE (HImode))) && ((
#line 19044 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 507 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL && TARGET_AVX512BW)) && 
#line 507 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL && TARGET_AVX512BW))))
                    return -1;
                  return 8197; /* *avx512vl_testmv16qi3_zext_mask */

                case 4:
                  if (!(
#line 19091 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW
   && (4
       > GET_MODE_SIZE (HImode))) && ((
#line 19044 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 509 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL && TARGET_AVX512BW)) && 
#line 509 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL && TARGET_AVX512BW))))
                    return -1;
                  return 8203; /* *avx512vl_testmv16hi3_zext_mask */

                case 5:
                  if (!(
#line 19091 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW
   && (4
       > GET_MODE_SIZE (HImode))) && ((
#line 19044 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 511 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)) && 
#line 511 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512))))
                    return -1;
                  return 8209; /* *avx512f_testmv16si3_zext_mask */

                case 6:
                  if (!(
#line 19091 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW
   && (4
       > GET_MODE_SIZE (QImode))) && ((
#line 19044 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 510 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL && TARGET_AVX512BW)) && 
#line 510 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL && TARGET_AVX512BW))))
                    return -1;
                  return 8206; /* *avx512vl_testmv8hi3_zext_mask */

                case 7:
                  if (!(
#line 19091 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW
   && (4
       > GET_MODE_SIZE (QImode))) && ((
#line 19044 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 511 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 511 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
                    return -1;
                  return 8212; /* *avx512vl_testmv8si3_zext_mask */

                case 8:
                  if (!(
#line 19091 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW
   && (4
       > GET_MODE_SIZE (QImode))) && ((
#line 19044 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 511 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 511 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
                    return -1;
                  return 8215; /* *avx512vl_testmv4si3_zext_mask */

                case 9:
                  if (!(
#line 19091 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW
   && (4
       > GET_MODE_SIZE (QImode))) && ((
#line 19044 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 512 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)) && 
#line 512 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512))))
                    return -1;
                  return 8218; /* *avx512f_testmv8di3_zext_mask */

                case 10:
                  if (!(
#line 19091 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW
   && (4
       > GET_MODE_SIZE (QImode))) && ((
#line 19044 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 512 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 512 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
                    return -1;
                  return 8221; /* *avx512vl_testmv4di3_zext_mask */

                case 11:
                  if (!(
#line 19091 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW
   && (4
       > GET_MODE_SIZE (QImode))) && ((
#line 19044 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 512 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 512 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
                    return -1;
                  return 8224; /* *avx512vl_testmv2di3_zext_mask */

                default:
                  return -1;
                }

            default:
              return -1;
            }

        case 159:
          switch (GET_MODE (operands[0]))
            {
            case E_DImode:
              switch (pattern1081 (x2, 
E_DImode))
                {
                case 0:
                  if (!(
#line 19121 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW
   && (8
       > GET_MODE_SIZE (DImode))) && 
#line 19044 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512)))
                    return -1;
                  return 8262; /* *avx512bw_testnmv64qi3_zext_mask */

                case 1:
                  if (!(
#line 19121 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW
   && (8
       > GET_MODE_SIZE (SImode))) && ((
#line 19044 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512) && 
#line 506 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL && TARGET_AVX512BW)) && 
#line 506 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL && TARGET_AVX512BW))))
                    return -1;
                  return 8265; /* *avx512vl_testnmv32qi3_zext_mask */

                case 2:
                  if (!(
#line 19121 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW
   && (8
       > GET_MODE_SIZE (SImode))) && 
#line 19044 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512)))
                    return -1;
                  return 8271; /* *avx512bw_testnmv32hi3_zext_mask */

                case 3:
                  if (!(
#line 19121 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW
   && (8
       > GET_MODE_SIZE (HImode))) && ((
#line 19044 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512) && 
#line 507 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL && TARGET_AVX512BW)) && 
#line 507 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL && TARGET_AVX512BW))))
                    return -1;
                  return 8268; /* *avx512vl_testnmv16qi3_zext_mask */

                case 4:
                  if (!(
#line 19121 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW
   && (8
       > GET_MODE_SIZE (HImode))) && ((
#line 19044 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512) && 
#line 509 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL && TARGET_AVX512BW)) && 
#line 509 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL && TARGET_AVX512BW))))
                    return -1;
                  return 8274; /* *avx512vl_testnmv16hi3_zext_mask */

                case 5:
                  if (!(
#line 19121 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW
   && (8
       > GET_MODE_SIZE (HImode))) && ((
#line 19044 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512) && 
#line 511 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)) && 
#line 511 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512))))
                    return -1;
                  return 8280; /* *avx512f_testnmv16si3_zext_mask */

                case 6:
                  if (!(
#line 19121 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW
   && (8
       > GET_MODE_SIZE (QImode))) && ((
#line 19044 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512) && 
#line 510 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL && TARGET_AVX512BW)) && 
#line 510 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL && TARGET_AVX512BW))))
                    return -1;
                  return 8277; /* *avx512vl_testnmv8hi3_zext_mask */

                case 7:
                  if (!(
#line 19121 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW
   && (8
       > GET_MODE_SIZE (QImode))) && ((
#line 19044 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512) && 
#line 511 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 511 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
                    return -1;
                  return 8283; /* *avx512vl_testnmv8si3_zext_mask */

                case 8:
                  if (!(
#line 19121 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW
   && (8
       > GET_MODE_SIZE (QImode))) && ((
#line 19044 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512) && 
#line 511 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 511 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
                    return -1;
                  return 8286; /* *avx512vl_testnmv4si3_zext_mask */

                case 9:
                  if (!(
#line 19121 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW
   && (8
       > GET_MODE_SIZE (QImode))) && ((
#line 19044 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512) && 
#line 512 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)) && 
#line 512 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512))))
                    return -1;
                  return 8289; /* *avx512f_testnmv8di3_zext_mask */

                case 10:
                  if (!(
#line 19121 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW
   && (8
       > GET_MODE_SIZE (QImode))) && ((
#line 19044 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512) && 
#line 512 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 512 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
                    return -1;
                  return 8292; /* *avx512vl_testnmv4di3_zext_mask */

                case 11:
                  if (!(
#line 19121 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW
   && (8
       > GET_MODE_SIZE (QImode))) && ((
#line 19044 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512) && 
#line 512 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 512 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
                    return -1;
                  return 8295; /* *avx512vl_testnmv2di3_zext_mask */

                default:
                  return -1;
                }

            case E_SImode:
              switch (pattern1081 (x2, 
E_SImode))
                {
                case 0:
                  if (!(
#line 19121 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW
   && (4
       > GET_MODE_SIZE (DImode))) && ((
#line 19044 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 505 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512)) && 
#line 505 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512))))
                    return -1;
                  return 8263; /* *avx512bw_testnmv64qi3_zext_mask */

                case 1:
                  if (!(
#line 19121 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW
   && (4
       > GET_MODE_SIZE (SImode))) && ((
#line 19044 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 506 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL && TARGET_AVX512BW)) && 
#line 506 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL && TARGET_AVX512BW))))
                    return -1;
                  return 8266; /* *avx512vl_testnmv32qi3_zext_mask */

                case 2:
                  if (!(
#line 19121 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW
   && (4
       > GET_MODE_SIZE (SImode))) && ((
#line 19044 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 508 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512)) && 
#line 508 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512))))
                    return -1;
                  return 8272; /* *avx512bw_testnmv32hi3_zext_mask */

                case 3:
                  if (!(
#line 19121 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW
   && (4
       > GET_MODE_SIZE (HImode))) && ((
#line 19044 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 507 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL && TARGET_AVX512BW)) && 
#line 507 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL && TARGET_AVX512BW))))
                    return -1;
                  return 8269; /* *avx512vl_testnmv16qi3_zext_mask */

                case 4:
                  if (!(
#line 19121 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW
   && (4
       > GET_MODE_SIZE (HImode))) && ((
#line 19044 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 509 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL && TARGET_AVX512BW)) && 
#line 509 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL && TARGET_AVX512BW))))
                    return -1;
                  return 8275; /* *avx512vl_testnmv16hi3_zext_mask */

                case 5:
                  if (!(
#line 19121 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW
   && (4
       > GET_MODE_SIZE (HImode))) && ((
#line 19044 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 511 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)) && 
#line 511 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512))))
                    return -1;
                  return 8281; /* *avx512f_testnmv16si3_zext_mask */

                case 6:
                  if (!(
#line 19121 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW
   && (4
       > GET_MODE_SIZE (QImode))) && ((
#line 19044 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 510 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL && TARGET_AVX512BW)) && 
#line 510 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL && TARGET_AVX512BW))))
                    return -1;
                  return 8278; /* *avx512vl_testnmv8hi3_zext_mask */

                case 7:
                  if (!(
#line 19121 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW
   && (4
       > GET_MODE_SIZE (QImode))) && ((
#line 19044 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 511 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 511 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
                    return -1;
                  return 8284; /* *avx512vl_testnmv8si3_zext_mask */

                case 8:
                  if (!(
#line 19121 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW
   && (4
       > GET_MODE_SIZE (QImode))) && ((
#line 19044 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 511 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 511 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
                    return -1;
                  return 8287; /* *avx512vl_testnmv4si3_zext_mask */

                case 9:
                  if (!(
#line 19121 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW
   && (4
       > GET_MODE_SIZE (QImode))) && ((
#line 19044 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 512 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)) && 
#line 512 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512))))
                    return -1;
                  return 8290; /* *avx512f_testnmv8di3_zext_mask */

                case 10:
                  if (!(
#line 19121 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW
   && (4
       > GET_MODE_SIZE (QImode))) && ((
#line 19044 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 512 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 512 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
                    return -1;
                  return 8293; /* *avx512vl_testnmv4di3_zext_mask */

                case 11:
                  if (!(
#line 19121 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW
   && (4
       > GET_MODE_SIZE (QImode))) && ((
#line 19044 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 512 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 512 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
                    return -1;
                  return 8296; /* *avx512vl_testnmv2di3_zext_mask */

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
recog_94 (rtx x1 ATTRIBUTE_UNUSED,
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
  switch (GET_MODE (operands[0]))
    {
    case E_DImode:
      if (!register_operand (operands[0], E_DImode)
          || GET_MODE (x3) != E_DImode
          || !general_operand (operands[1], E_DImode))
        return -1;
      if ((
#line 14600 "../../gcc/config/i386/i386.md"
(TARGET_CMOVE
   && ix86_pre_reload_split ()) && 
#line 1235 "../../gcc/config/i386/i386.md"
(!TARGET_64BIT)))
        {
          *pnum_clobbers = 1;
          return 995; /* *absdi2_doubleword */
        }
      if (!(
#line 14687 "../../gcc/config/i386/i386.md"
(TARGET_CMOVE
   && (DImode != QImode || !TARGET_PARTIAL_REG_STALL)
   && ix86_pre_reload_split ()) && 
#line 1161 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
        return -1;
      *pnum_clobbers = 1;
      return 1002; /* *absdi2_1 */

    case E_SImode:
      if (!register_operand (operands[0], E_SImode)
          || GET_MODE (x3) != E_SImode
          || !general_operand (operands[1], E_SImode)
          || !
#line 14687 "../../gcc/config/i386/i386.md"
(TARGET_CMOVE
   && (SImode != QImode || !TARGET_PARTIAL_REG_STALL)
   && ix86_pre_reload_split ()))
        return -1;
      *pnum_clobbers = 1;
      return 1001; /* *abssi2_1 */

    default:
      return -1;
    }
}

 int
recog_95 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (register_operand (operands[2], E_SImode)
      && register_operand (operands[0], E_SImode))
    {
      x2 = XEXP (x1, 1);
      if (GET_MODE (x2) == E_SImode
          && nonimmediate_operand (operands[1], E_SImode)
          && 
#line 15900 "../../gcc/config/i386/i386.md"
(TARGET_BMI2))
        return 1086; /* *bmi2_ashlsi3_1 */
    }
  switch (GET_MODE (operands[0]))
    {
    case E_DImode:
      x2 = XEXP (x1, 1);
      if (GET_MODE (x2) != E_DImode)
        return -1;
      if (register_operand (operands[0], E_DImode))
        {
          if (pnum_clobbers != NULL
              && reg_or_pm1_operand (operands[1], E_DImode)
              && nonmemory_operand (operands[2], E_QImode)
              && 
#line 1195 "../../gcc/config/i386/i386.md"
(!TARGET_64BIT))
            {
              *pnum_clobbers = 1;
              return 1056; /* ashldi3_doubleword */
            }
          if (nonimmediate_operand (operands[1], E_DImode)
              && register_operand (operands[2], E_DImode)
              && (
#line 15900 "../../gcc/config/i386/i386.md"
(TARGET_BMI2) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return 1087; /* *bmi2_ashldi3_1 */
        }
      if (!nonimmediate_operand (operands[0], E_DImode)
          || !nonimmediate_operand (operands[1], E_DImode)
          || !nonmemory_operand (operands[2], E_QImode))
        return -1;
      if ((
#line 15909 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ASHIFT, DImode, operands, TARGET_APX_NDD)
   && TARGET_APX_NF) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
        return 1090; /* *ashldi3_1_nf */
      if (pnum_clobbers == NULL
          || !(
#line 15909 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ASHIFT, DImode, operands, TARGET_APX_NDD)
   && true) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
        return -1;
      *pnum_clobbers = 1;
      return 1091; /* *ashldi3_1 */

    case E_SImode:
      x2 = XEXP (x1, 1);
      if (pattern624 (x2, 
E_SImode) != 0)
        return -1;
      if (
#line 15909 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ASHIFT, SImode, operands, TARGET_APX_NDD)
   && TARGET_APX_NF))
        return 1088; /* *ashlsi3_1_nf */
      if (pnum_clobbers == NULL
          || !
#line 15909 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ASHIFT, SImode, operands, TARGET_APX_NDD)
   && true))
        return -1;
      *pnum_clobbers = 1;
      return 1089; /* *ashlsi3_1 */

    default:
      return -1;
    }
}

 int
recog_100 (rtx x1 ATTRIBUTE_UNUSED,
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
      switch (pattern117 (x3, pnum_clobbers))
        {
        case 0:
          x5 = XEXP (x3, 1);
          switch (GET_CODE (x5))
            {
            case REG:
            case SUBREG:
              if (pnum_clobbers != NULL
                  && pattern622 (x3) == 0
                  && (
#line 16582 "../../gcc/config/i386/i386.md"
(((INTVAL (operands[3]) & (4 * BITS_PER_UNIT)) == 0
    || ((INTVAL (operands[3]) & (2 * 4 * BITS_PER_UNIT - 1))
	 == (2 * 4 * BITS_PER_UNIT - 1)))
   && ix86_pre_reload_split ()) && 
#line 1235 "../../gcc/config/i386/i386.md"
(!TARGET_64BIT)))
                {
                  *pnum_clobbers = 1;
                  return 1123; /* *ashrdi3_doubleword_mask */
                }
              operands[2] = x5;
              if (register_operand (operands[2], E_SImode)
                  && register_operand (operands[0], E_SImode)
                  && GET_MODE (x3) == E_SImode
                  && nonimmediate_operand (operands[1], E_SImode)
                  && 
#line 17313 "../../gcc/config/i386/i386.md"
(TARGET_BMI2))
                return 1172; /* *bmi2_ashrsi3_1 */
              break;

            case CONST_INT:
              operands[2] = x5;
              if (const_int_operand (operands[2], E_QImode)
                  && nonimmediate_operand (operands[0], E_SImode)
                  && GET_MODE (x3) == E_SImode
                  && nonimmediate_operand (operands[1], E_SImode))
                {
                  if (
#line 17244 "../../gcc/config/i386/i386.md"
(INTVAL (operands[2]) == GET_MODE_BITSIZE (SImode)-1
   && (TARGET_USE_CLTD || optimize_function_for_size_p (cfun))
   && ix86_binary_operator_ok (ASHIFTRT, SImode, operands, TARGET_APX_NDD)
   && TARGET_APX_NF))
                    return 1166; /* ashrsi3_cvt_nf */
                  if (pnum_clobbers != NULL
                      && 
#line 17244 "../../gcc/config/i386/i386.md"
(INTVAL (operands[2]) == GET_MODE_BITSIZE (SImode)-1
   && (TARGET_USE_CLTD || optimize_function_for_size_p (cfun))
   && ix86_binary_operator_ok (ASHIFTRT, SImode, operands, TARGET_APX_NDD)
   && true))
                    {
                      *pnum_clobbers = 1;
                      return 1167; /* ashrsi3_cvt */
                    }
                }
              break;

            default:
              break;
            }
          operands[2] = x5;
          res = recog_99 (x1, insn, pnum_clobbers);
          if (res >= 0)
            return res;
          if (pnum_clobbers == NULL)
            return -1;
          switch (pattern623 (x3))
            {
            case 0:
              if (!
#line 17840 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ASHIFTRT, SImode, operands)
   && (INTVAL (operands[3]) & (4 * BITS_PER_UNIT - 1))
      == 4 * BITS_PER_UNIT - 1
   && ix86_pre_reload_split ()))
                return -1;
              *pnum_clobbers = 1;
              return 1246; /* *ashrsi3_mask */

            case 1:
              if (!(
#line 17840 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ASHIFTRT, DImode, operands)
   && (INTVAL (operands[3]) & (8 * BITS_PER_UNIT - 1))
      == 8 * BITS_PER_UNIT - 1
   && ix86_pre_reload_split ()) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return -1;
              *pnum_clobbers = 1;
              return 1249; /* *ashrdi3_mask */

            case 2:
              if (!
#line 17888 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ASHIFTRT, SImode, operands)
   && (INTVAL (operands[3]) & (4 * BITS_PER_UNIT - 1)) == 0
   && ix86_pre_reload_split ()))
                return -1;
              *pnum_clobbers = 1;
              return 1258; /* *ashrsi3_add */

            case 3:
              if (!(
#line 17888 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ASHIFTRT, DImode, operands)
   && (INTVAL (operands[3]) & (8 * BITS_PER_UNIT - 1)) == 0
   && ix86_pre_reload_split ()) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return -1;
              *pnum_clobbers = 1;
              return 1261; /* *ashrdi3_add */

            case 4:
              if (!
#line 17934 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ASHIFTRT, SImode, operands)
   && (INTVAL (operands[3]) & (4 * BITS_PER_UNIT - 1)) == 0
   && ix86_pre_reload_split ()))
                return -1;
              *pnum_clobbers = 1;
              return 1270; /* *ashrsi3_sub */

            case 5:
              if (!(
#line 17934 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ASHIFTRT, DImode, operands)
   && (INTVAL (operands[3]) & (8 * BITS_PER_UNIT - 1)) == 0
   && ix86_pre_reload_split ()) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return -1;
              *pnum_clobbers = 1;
              return 1273; /* *ashrdi3_sub */

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
            {
              *pnum_clobbers = 1;
              return 1127; /* *ashrdi3_doubleword_mask_1 */
            }
          if (!nonimmediate_operand (operands[0], E_DImode)
              || !nonimmediate_operand (operands[1], E_DImode)
              || !(
#line 17865 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ASHIFTRT, DImode, operands)
   && (INTVAL (operands[3]) & (8 * BITS_PER_UNIT - 1))
      == 8 * BITS_PER_UNIT - 1
   && ix86_pre_reload_split ()) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return -1;
          *pnum_clobbers = 1;
          return 1255; /* *ashrdi3_mask_1 */

        case 2:
          if (!
#line 17865 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ASHIFTRT, SImode, operands)
   && (INTVAL (operands[3]) & (4 * BITS_PER_UNIT - 1))
      == 4 * BITS_PER_UNIT - 1
   && ix86_pre_reload_split ()))
            return -1;
          *pnum_clobbers = 1;
          return 1252; /* *ashrsi3_mask_1 */

        case 3:
          if (!
#line 17912 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ASHIFTRT, SImode, operands)
   && (INTVAL (operands[3]) & (4 * BITS_PER_UNIT - 1)) == 0
   && ix86_pre_reload_split ()))
            return -1;
          *pnum_clobbers = 1;
          return 1264; /* *ashrsi3_add_1 */

        case 4:
          if (!(
#line 17912 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ASHIFTRT, DImode, operands)
   && (INTVAL (operands[3]) & (8 * BITS_PER_UNIT - 1)) == 0
   && ix86_pre_reload_split ()) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return -1;
          *pnum_clobbers = 1;
          return 1267; /* *ashrdi3_add_1 */

        case 5:
          if (!
#line 17964 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ASHIFTRT, SImode, operands)
   && (INTVAL (operands[3]) & (4 * BITS_PER_UNIT - 1)) == 0
   && ix86_pre_reload_split ()))
            return -1;
          *pnum_clobbers = 1;
          return 1276; /* *ashrsi3_sub_1 */

        case 6:
          if (!(
#line 17964 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ASHIFTRT, DImode, operands)
   && (INTVAL (operands[3]) & (8 * BITS_PER_UNIT - 1)) == 0
   && ix86_pre_reload_split ()) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return -1;
          *pnum_clobbers = 1;
          return 1279; /* *ashrdi3_sub_1 */

        default:
          return -1;
        }

    case ASHIFT:
      if (pnum_clobbers == NULL
          || pattern290 (x3, 
E_DImode) != 0
          || !(
#line 17988 "../../gcc/config/i386/i386.md"
(INTVAL (operands[2]) == INTVAL (operands[3])
   && UINTVAL (operands[2]) < 4 * BITS_PER_UNIT) && 
#line 1235 "../../gcc/config/i386/i386.md"
(!TARGET_64BIT)))
        return -1;
      *pnum_clobbers = 1;
      return 1280; /* *extenddi2_doubleword_highpart */

    default:
      return -1;
    }
}

 int
recog_111 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) != MEM
      || GET_MODE (x3) != E_QImode)
    return -1;
  x4 = XEXP (x1, 0);
  operands[0] = x4;
  x5 = XEXP (x3, 0);
  operands[1] = x5;
  x6 = XEXP (x2, 1);
  operands[2] = x6;
  if (call_insn_operand (operands[1], E_SImode)
      && (
#line 20330 "../../gcc/config/i386/i386.md"
(!SIBLING_CALL_P (insn)) && 
#line 1403 "../../gcc/config/i386/i386.md"
(word_mode == SImode)))
    return 1475; /* *call_value */
  if (call_insn_operand (operands[1], E_DImode)
      && (
#line 20330 "../../gcc/config/i386/i386.md"
(!SIBLING_CALL_P (insn)) && 
#line 1403 "../../gcc/config/i386/i386.md"
(word_mode == DImode)))
    return 1476; /* *call_value */
  switch (GET_CODE (x5))
    {
    case ZERO_EXTEND:
      if (GET_MODE (x5) == E_DImode)
        {
          x7 = XEXP (x5, 0);
          operands[1] = x7;
          if (GOT_memory_operand (operands[1], E_SImode))
            {
              operands[2] = x6;
              if (
#line 20341 "../../gcc/config/i386/i386.md"
(TARGET_X32))
                return 1477; /* *call_value_got_x32 */
            }
        }
      break;

    case MEM:
      if (GET_MODE (x5) == E_SImode)
        {
          x7 = XEXP (x5, 0);
          if (GET_CODE (x7) == PLUS
              && GET_MODE (x7) == E_SImode)
            {
              x8 = XEXP (x7, 0);
              operands[1] = x8;
              if (register_no_elim_operand (operands[1], E_SImode))
                {
                  x9 = XEXP (x7, 1);
                  operands[2] = x9;
                  if (GOT32_symbol_operand (operands[2], E_SImode))
                    {
                      operands[3] = x6;
                      if (
#line 20357 "../../gcc/config/i386/i386.md"
(!TARGET_MACHO
   && !TARGET_64BIT
   && !TARGET_INDIRECT_BRANCH_REGISTER
   && SIBLING_CALL_P (insn)))
                        return 1478; /* *sibcall_value_GOT_32 */
                    }
                }
            }
        }
      break;

    default:
      break;
    }
  operands[1] = x5;
  operands[2] = x6;
  if (sibcall_insn_operand (operands[1], E_SImode)
      && (
#line 20372 "../../gcc/config/i386/i386.md"
(SIBLING_CALL_P (insn)) && 
#line 1403 "../../gcc/config/i386/i386.md"
(word_mode == SImode)))
    return 1479; /* *sibcall_value */
  if (!sibcall_insn_operand (operands[1], E_DImode)
      || !(
#line 20372 "../../gcc/config/i386/i386.md"
(SIBLING_CALL_P (insn)) && 
#line 1403 "../../gcc/config/i386/i386.md"
(word_mode == DImode)))
    return -1;
  return 1480; /* *sibcall_value */
}

 int
recog_117 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  operands[0] = x2;
  x3 = XEXP (x1, 1);
  switch (XVECLEN (x3, 0))
    {
    case 1:
      switch (XINT (x3, 1))
        {
        case 2:
          if (pnum_clobbers == NULL)
            return -1;
          switch (pattern302 (x3))
            {
            case 0:
              if (!(
#line 27055 "../../gcc/config/i386/i386.md"
(ix86_target_stack_probe ()) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode)))
                return -1;
              *pnum_clobbers = 1;
              return 1853; /* allocate_stack_worker_probe_si */

            case 1:
              if (!(
#line 27055 "../../gcc/config/i386/i386.md"
(ix86_target_stack_probe ()) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode)))
                return -1;
              *pnum_clobbers = 1;
              return 1854; /* allocate_stack_worker_probe_di */

            default:
              return -1;
            }

        case 11:
          if (GET_MODE (x3) != E_DImode
              || !register_operand (operands[0], E_DImode))
            return -1;
          x4 = XVECEXP (x3, 0, 0);
          operands[1] = x4;
          if (!register_operand (operands[1], E_SImode)
              || !
#line 28928 "../../gcc/config/i386/i386.md"
(!TARGET_64BIT))
            return -1;
          return 1889; /* rdpmc */

        case 9:
          if (GET_MODE (x3) != E_DImode)
            return -1;
          x4 = XVECEXP (x3, 0, 0);
          if (x4 != const_int_rtx[MAX_SAVED_CONST_INT + 0]
              || !register_operand (operands[0], E_DImode)
              || !
#line 28947 "../../gcc/config/i386/i386.md"
(!TARGET_64BIT))
            return -1;
          return 1891; /* rdtsc */

        case 36:
          if (GET_MODE (x3) != E_DImode
              || !register_operand (operands[0], E_DImode))
            return -1;
          x4 = XVECEXP (x3, 0, 0);
          operands[1] = x4;
          if (!register_operand (operands[1], E_SImode)
              || !
#line 29171 "../../gcc/config/i386/i386.md"
(!TARGET_64BIT && TARGET_XSAVE))
            return -1;
          return 1919; /* xgetbv */

        case 13:
          x4 = XVECEXP (x3, 0, 0);
          if (x4 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
            return -1;
          switch (pattern23 (x3))
            {
            case 0:
              if (!(
#line 29265 "../../gcc/config/i386/i386.md"
(TARGET_LWP) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode)))
                return -1;
              return 1927; /* lwp_slwpcbsi */

            case 1:
              if (!(
#line 29265 "../../gcc/config/i386/i386.md"
(TARGET_LWP) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode)))
                return -1;
              return 1928; /* lwp_slwpcbdi */

            default:
              return -1;
            }

        case 16:
          x4 = XVECEXP (x3, 0, 0);
          if (x4 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
            return -1;
          switch (pattern23 (x3))
            {
            case 0:
              if (!
#line 29313 "../../gcc/config/i386/i386.md"
(TARGET_64BIT && TARGET_FSGSBASE))
                return -1;
              return 1933; /* rdfsbasesi */

            case 1:
              if (!(
#line 29313 "../../gcc/config/i386/i386.md"
(TARGET_64BIT && TARGET_FSGSBASE) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return -1;
              return 1935; /* rdfsbasedi */

            default:
              return -1;
            }

        case 17:
          x4 = XVECEXP (x3, 0, 0);
          if (x4 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
            return -1;
          switch (pattern23 (x3))
            {
            case 0:
              if (!
#line 29313 "../../gcc/config/i386/i386.md"
(TARGET_64BIT && TARGET_FSGSBASE))
                return -1;
              return 1934; /* rdgsbasesi */

            case 1:
              if (!(
#line 29313 "../../gcc/config/i386/i386.md"
(TARGET_64BIT && TARGET_FSGSBASE) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return -1;
              return 1936; /* rdgsbasedi */

            default:
              return -1;
            }

        case 59:
          switch (pattern302 (x3))
            {
            case 0:
              if (!
#line 29381 "../../gcc/config/i386/i386.md"
(TARGET_SHSTK || (flag_cf_protection & CF_RETURN)))
                return -1;
              return 1950; /* rdsspsi */

            case 1:
              if (!(
#line 29381 "../../gcc/config/i386/i386.md"
(TARGET_SHSTK || (flag_cf_protection & CF_RETURN)) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return -1;
              return 1951; /* rdsspdi */

            default:
              return -1;
            }

        case 57:
          x4 = XVECEXP (x3, 0, 0);
          if (x4 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
            return -1;
          switch (pattern23 (x3))
            {
            case 0:
              if (!
#line 29621 "../../gcc/config/i386/i386.md"
(!TARGET_64BIT && TARGET_RDPID))
                return -1;
              return 1976; /* rdpid */

            case 1:
              if (!
#line 29628 "../../gcc/config/i386/i386.md"
(TARGET_64BIT && TARGET_RDPID))
                return -1;
              return 1977; /* rdpid_rex64 */

            default:
              return -1;
            }

        case 85:
          if (GET_MODE (x3) != E_DImode
              || !register_operand (operands[0], E_DImode))
            return -1;
          x4 = XVECEXP (x3, 0, 0);
          operands[1] = x4;
          if (!x86_64_szext_nonmemory_operand (operands[1], E_DImode)
              || !
#line 29904 "../../gcc/config/i386/i386.md"
(TARGET_USER_MSR && TARGET_64BIT))
            return -1;
          return 2005; /* urdmsr */

        case 89:
          x4 = XVECEXP (x3, 0, 0);
          operands[1] = x4;
          switch (GET_MODE (operands[0]))
            {
            case E_SImode:
              if (!register_operand (operands[0], E_SImode)
                  || GET_MODE (x3) != E_SImode
                  || !memory_operand (operands[1], E_SImode)
                  || !
#line 29942 "../../gcc/config/i386/i386.md"
(TARGET_MOVRS && TARGET_64BIT))
                return -1;
              return 2011; /* movrssi */

            case E_DImode:
              if (!register_operand (operands[0], E_DImode)
                  || GET_MODE (x3) != E_DImode
                  || !memory_operand (operands[1], E_DImode)
                  || !
#line 29942 "../../gcc/config/i386/i386.md"
(TARGET_MOVRS && TARGET_64BIT))
                return -1;
              return 2012; /* movrsdi */

            default:
              return -1;
            }

        case 93:
          if (GET_MODE (x3) != E_SImode)
            return -1;
          x4 = XVECEXP (x3, 0, 0);
          if (x4 != const_int_rtx[MAX_SAVED_CONST_INT + 0]
              || !memory_operand (operands[0], E_SImode)
              || !
#line 22495 "../../gcc/config/i386/sse.md"
(TARGET_SSE))
            return -1;
          return 8579; /* sse_stmxcsr */

        default:
          return -1;
        }

    case 2:
      switch (XINT (x3, 1))
        {
        case 3:
          if (pnum_clobbers == NULL)
            return -1;
          x4 = XVECEXP (x3, 0, 0);
          operands[1] = x4;
          x5 = XVECEXP (x3, 0, 1);
          operands[2] = x5;
          switch (GET_MODE (operands[0]))
            {
            case E_SImode:
              if (pattern880 (x3, 
E_SImode) != 0
                  || !
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode))
                return -1;
              *pnum_clobbers = 1;
              return 1859; /* probe_stack_range_si */

            case E_DImode:
              if (pattern880 (x3, 
E_DImode) != 0
                  || !
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode))
                return -1;
              *pnum_clobbers = 1;
              return 1860; /* probe_stack_range_di */

            default:
              return -1;
            }

        case 113:
          x5 = XVECEXP (x3, 0, 1);
          if (x5 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
            return -1;
          x4 = XVECEXP (x3, 0, 0);
          switch (GET_CODE (x4))
            {
            case AND:
              switch (pattern626 (x3))
                {
                case 0:
                  if (!
#line 821 "../../gcc/config/i386/sync.md"
(TARGET_RAOINT))
                    return -1;
                  return 11039; /* rao_aandsi */

                case 1:
                  if (!(
#line 821 "../../gcc/config/i386/sync.md"
(TARGET_RAOINT) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                    return -1;
                  return 11043; /* rao_aanddi */

                default:
                  return -1;
                }

            case IOR:
              switch (pattern626 (x3))
                {
                case 0:
                  if (!
#line 821 "../../gcc/config/i386/sync.md"
(TARGET_RAOINT))
                    return -1;
                  return 11040; /* rao_aorsi */

                case 1:
                  if (!(
#line 821 "../../gcc/config/i386/sync.md"
(TARGET_RAOINT) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                    return -1;
                  return 11044; /* rao_aordi */

                default:
                  return -1;
                }

            case XOR:
              switch (pattern626 (x3))
                {
                case 0:
                  if (!
#line 821 "../../gcc/config/i386/sync.md"
(TARGET_RAOINT))
                    return -1;
                  return 11041; /* rao_axorsi */

                case 1:
                  if (!(
#line 821 "../../gcc/config/i386/sync.md"
(TARGET_RAOINT) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                    return -1;
                  return 11045; /* rao_axordi */

                default:
                  return -1;
                }

            case PLUS:
              switch (pattern626 (x3))
                {
                case 0:
                  if (!
#line 821 "../../gcc/config/i386/sync.md"
(TARGET_RAOINT))
                    return -1;
                  return 11042; /* rao_aaddsi */

                case 1:
                  if (!(
#line 821 "../../gcc/config/i386/sync.md"
(TARGET_RAOINT) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                    return -1;
                  return 11046; /* rao_aadddi */

                default:
                  return -1;
                }

            default:
              return -1;
            }

        case 111:
          if (pnum_clobbers == NULL)
            return -1;
          x5 = XVECEXP (x3, 0, 1);
          operands[2] = x5;
          if (!const_int_operand (operands[2], E_SImode))
            return -1;
          x4 = XVECEXP (x3, 0, 0);
          switch (GET_CODE (x4))
            {
            case PLUS:
              switch (pattern881 (x3))
                {
                case 0:
                  *pnum_clobbers = 1;
                  return 11049; /* atomic_addsi */

                case 1:
                  if (!
#line 1161 "../../gcc/config/i386/i386.md"
(TARGET_64BIT))
                    return -1;
                  *pnum_clobbers = 1;
                  return 11050; /* atomic_adddi */

                default:
                  return -1;
                }

            case MINUS:
              switch (pattern881 (x3))
                {
                case 0:
                  *pnum_clobbers = 1;
                  return 11053; /* atomic_subsi */

                case 1:
                  if (!
#line 1161 "../../gcc/config/i386/i386.md"
(TARGET_64BIT))
                    return -1;
                  *pnum_clobbers = 1;
                  return 11054; /* atomic_subdi */

                default:
                  return -1;
                }

            case AND:
              switch (pattern881 (x3))
                {
                case 0:
                  *pnum_clobbers = 1;
                  return 11061; /* atomic_andsi */

                case 1:
                  if (!
#line 1161 "../../gcc/config/i386/i386.md"
(TARGET_64BIT))
                    return -1;
                  *pnum_clobbers = 1;
                  return 11064; /* atomic_anddi */

                default:
                  return -1;
                }

            case IOR:
              switch (pattern881 (x3))
                {
                case 0:
                  *pnum_clobbers = 1;
                  return 11062; /* atomic_orsi */

                case 1:
                  if (!
#line 1161 "../../gcc/config/i386/i386.md"
(TARGET_64BIT))
                    return -1;
                  *pnum_clobbers = 1;
                  return 11065; /* atomic_ordi */

                default:
                  return -1;
                }

            case XOR:
              switch (pattern881 (x3))
                {
                case 0:
                  *pnum_clobbers = 1;
                  return 11063; /* atomic_xorsi */

                case 1:
                  if (!
#line 1161 "../../gcc/config/i386/i386.md"
(TARGET_64BIT))
                    return -1;
                  *pnum_clobbers = 1;
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
recog_133 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
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
      x7 = XEXP (x2, 1);
      switch (GET_CODE (x7))
        {
        case CONST_INT:
        case CONST_DOUBLE:
        case CONST_VECTOR:
          operands[4] = x7;
          x8 = XEXP (x2, 2);
          operands[5] = x8;
          switch (GET_MODE (operands[0]))
            {
            case E_V32HFmode:
              if (pattern1366 (x2, 
E_V32HFmode, 
E_SImode) != 0
                  || !(
#line 6408 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && (64 == 64 || TARGET_AVX512VL) && 1) && 
#line 525 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_EVEX512)))
                return -1;
              return 4088; /* fma_fmaddsub_v32hf_maskz_1 */

            case E_V16HFmode:
              if (pattern1366 (x2, 
E_V16HFmode, 
E_HImode) != 0
                  || !(
#line 6408 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && (32 == 64 || TARGET_AVX512VL) && 1) && 
#line 526 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL)))
                return -1;
              return 4092; /* fma_fmaddsub_v16hf_maskz_1 */

            case E_V8HFmode:
              if (pattern1366 (x2, 
E_V8HFmode, 
E_QImode) != 0
                  || !(
#line 6408 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && (16 == 64 || TARGET_AVX512VL) && 1) && 
#line 527 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL)))
                return -1;
              return 4096; /* fma_fmaddsub_v8hf_maskz_1 */

            case E_V16SFmode:
              if (pattern1366 (x2, 
E_V16SFmode, 
E_HImode) != 0
                  || !(
#line 6408 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && (64 == 64 || TARGET_AVX512VL) && 1) && 
#line 528 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                return -1;
              return 4098; /* fma_fmaddsub_v16sf_maskz_1 */

            case E_V8SFmode:
              if (pattern1366 (x2, 
E_V8SFmode, 
E_QImode) != 0
                  || !(
#line 6408 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && (32 == 64 || TARGET_AVX512VL) && 1) && 
#line 528 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                return -1;
              return 4102; /* fma_fmaddsub_v8sf_maskz_1 */

            case E_V4SFmode:
              if (pattern1366 (x2, 
E_V4SFmode, 
E_QImode) != 0
                  || !(
#line 6408 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && (16 == 64 || TARGET_AVX512VL) && 1) && 
#line 528 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                return -1;
              return 4106; /* fma_fmaddsub_v4sf_maskz_1 */

            case E_V8DFmode:
              if (pattern1366 (x2, 
E_V8DFmode, 
E_QImode) != 0
                  || !(
#line 6408 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && (64 == 64 || TARGET_AVX512VL) && 1) && 
#line 529 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                return -1;
              return 4108; /* fma_fmaddsub_v8df_maskz_1 */

            case E_V4DFmode:
              if (pattern1366 (x2, 
E_V4DFmode, 
E_QImode) != 0
                  || !(
#line 6408 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && (32 == 64 || TARGET_AVX512VL) && 1) && 
#line 529 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                return -1;
              return 4112; /* fma_fmaddsub_v4df_maskz_1 */

            case E_V2DFmode:
              if (pattern1366 (x2, 
E_V2DFmode, 
E_QImode) != 0
                  || !(
#line 6408 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && (16 == 64 || TARGET_AVX512VL) && 1) && 
#line 529 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                return -1;
              return 4116; /* fma_fmaddsub_v2df_maskz_1 */

            default:
              return -1;
            }

        case REG:
        case SUBREG:
        case MEM:
          x8 = XEXP (x2, 2);
          operands[4] = x8;
          switch (GET_MODE (operands[0]))
            {
            case E_V32HFmode:
              if (pattern1276 (x2, 
E_V32HFmode, 
E_SImode) != 0)
                return -1;
              if (register_operand (operands[1], E_V32HFmode)
                  && vector_operand (operands[3], E_V32HFmode)
                  && rtx_equal_p (x7, operands[1])
                  && (
#line 6427 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 525 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_EVEX512)))
                return 4117; /* avx512bw_fmaddsub_v32hf_mask */
              if (!nonimmediate_operand (operands[1], E_V32HFmode)
                  || !nonimmediate_operand (operands[3], E_V32HFmode)
                  || !rtx_equal_p (x7, operands[3])
                  || !(
#line 6445 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 525 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_EVEX512)))
                return -1;
              return 4132; /* avx512bw_fmaddsub_v32hf_mask3 */

            case E_V16HFmode:
              if (pattern1276 (x2, 
E_V16HFmode, 
E_HImode) != 0)
                return -1;
              if (register_operand (operands[1], E_V16HFmode)
                  && vector_operand (operands[3], E_V16HFmode)
                  && rtx_equal_p (x7, operands[1])
                  && (
#line 6427 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 526 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL)))
                return 4119; /* avx512vl_fmaddsub_v16hf_mask */
              if (!nonimmediate_operand (operands[1], E_V16HFmode)
                  || !nonimmediate_operand (operands[3], E_V16HFmode)
                  || !rtx_equal_p (x7, operands[3])
                  || !(
#line 6445 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 526 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL)))
                return -1;
              return 4134; /* avx512vl_fmaddsub_v16hf_mask3 */

            case E_V8HFmode:
              if (pattern1276 (x2, 
E_V8HFmode, 
E_QImode) != 0)
                return -1;
              if (register_operand (operands[1], E_V8HFmode)
                  && vector_operand (operands[3], E_V8HFmode)
                  && rtx_equal_p (x7, operands[1])
                  && (
#line 6427 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 527 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL)))
                return 4121; /* avx512fp16_fmaddsub_v8hf_mask */
              if (!nonimmediate_operand (operands[1], E_V8HFmode)
                  || !nonimmediate_operand (operands[3], E_V8HFmode)
                  || !rtx_equal_p (x7, operands[3])
                  || !(
#line 6445 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 527 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL)))
                return -1;
              return 4136; /* avx512fp16_fmaddsub_v8hf_mask3 */

            case E_V16SFmode:
              if (pattern1276 (x2, 
E_V16SFmode, 
E_HImode) != 0)
                return -1;
              if (register_operand (operands[1], E_V16SFmode)
                  && vector_operand (operands[3], E_V16SFmode)
                  && rtx_equal_p (x7, operands[1])
                  && (
#line 6427 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 528 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                return 4122; /* avx512f_fmaddsub_v16sf_mask */
              if (!nonimmediate_operand (operands[1], E_V16SFmode)
                  || !nonimmediate_operand (operands[3], E_V16SFmode)
                  || !rtx_equal_p (x7, operands[3])
                  || !(
#line 6445 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 528 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                return -1;
              return 4137; /* avx512f_fmaddsub_v16sf_mask3 */

            case E_V8SFmode:
              if (pattern1276 (x2, 
E_V8SFmode, 
E_QImode) != 0)
                return -1;
              if (register_operand (operands[1], E_V8SFmode)
                  && vector_operand (operands[3], E_V8SFmode)
                  && rtx_equal_p (x7, operands[1])
                  && (
#line 6427 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 528 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                return 4124; /* avx512vl_fmaddsub_v8sf_mask */
              if (!nonimmediate_operand (operands[1], E_V8SFmode)
                  || !nonimmediate_operand (operands[3], E_V8SFmode)
                  || !rtx_equal_p (x7, operands[3])
                  || !(
#line 6445 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 528 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                return -1;
              return 4139; /* avx512vl_fmaddsub_v8sf_mask3 */

            case E_V4SFmode:
              if (pattern1276 (x2, 
E_V4SFmode, 
E_QImode) != 0)
                return -1;
              if (register_operand (operands[1], E_V4SFmode)
                  && vector_operand (operands[3], E_V4SFmode)
                  && rtx_equal_p (x7, operands[1])
                  && (
#line 6427 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 528 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                return 4126; /* avx512vl_fmaddsub_v4sf_mask */
              if (!nonimmediate_operand (operands[1], E_V4SFmode)
                  || !nonimmediate_operand (operands[3], E_V4SFmode)
                  || !rtx_equal_p (x7, operands[3])
                  || !(
#line 6445 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 528 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                return -1;
              return 4141; /* avx512vl_fmaddsub_v4sf_mask3 */

            case E_V8DFmode:
              if (pattern1276 (x2, 
E_V8DFmode, 
E_QImode) != 0)
                return -1;
              if (register_operand (operands[1], E_V8DFmode)
                  && vector_operand (operands[3], E_V8DFmode)
                  && rtx_equal_p (x7, operands[1])
                  && (
#line 6427 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 529 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                return 4127; /* avx512f_fmaddsub_v8df_mask */
              if (!nonimmediate_operand (operands[1], E_V8DFmode)
                  || !nonimmediate_operand (operands[3], E_V8DFmode)
                  || !rtx_equal_p (x7, operands[3])
                  || !(
#line 6445 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 529 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                return -1;
              return 4142; /* avx512f_fmaddsub_v8df_mask3 */

            case E_V4DFmode:
              if (pattern1276 (x2, 
E_V4DFmode, 
E_QImode) != 0)
                return -1;
              if (register_operand (operands[1], E_V4DFmode)
                  && vector_operand (operands[3], E_V4DFmode)
                  && rtx_equal_p (x7, operands[1])
                  && (
#line 6427 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 529 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                return 4129; /* avx512vl_fmaddsub_v4df_mask */
              if (!nonimmediate_operand (operands[1], E_V4DFmode)
                  || !nonimmediate_operand (operands[3], E_V4DFmode)
                  || !rtx_equal_p (x7, operands[3])
                  || !(
#line 6445 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 529 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                return -1;
              return 4144; /* avx512vl_fmaddsub_v4df_mask3 */

            case E_V2DFmode:
              if (pattern1276 (x2, 
E_V2DFmode, 
E_QImode) != 0)
                return -1;
              if (register_operand (operands[1], E_V2DFmode)
                  && vector_operand (operands[3], E_V2DFmode)
                  && rtx_equal_p (x7, operands[1])
                  && (
#line 6427 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 529 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                return 4131; /* avx512vl_fmaddsub_v2df_mask */
              if (!nonimmediate_operand (operands[1], E_V2DFmode)
                  || !nonimmediate_operand (operands[3], E_V2DFmode)
                  || !rtx_equal_p (x7, operands[3])
                  || !(
#line 6445 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 529 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                return -1;
              return 4146; /* avx512vl_fmaddsub_v2df_mask3 */

            default:
              return -1;
            }

        default:
          return -1;
        }

    case NEG:
      x9 = XEXP (x6, 0);
      operands[3] = x9;
      x7 = XEXP (x2, 1);
      switch (GET_CODE (x7))
        {
        case CONST_INT:
        case CONST_DOUBLE:
        case CONST_VECTOR:
          operands[4] = x7;
          x8 = XEXP (x2, 2);
          operands[5] = x8;
          switch (GET_MODE (operands[0]))
            {
            case E_V32HFmode:
              if (pattern1367 (x2, 
E_V32HFmode, 
E_SImode) != 0
                  || !(
#line 6478 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && (64 == 64 || TARGET_AVX512VL) && 1) && 
#line 525 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_EVEX512)))
                return -1;
              return 4152; /* fma_fmsubadd_v32hf_maskz_1 */

            case E_V16HFmode:
              if (pattern1367 (x2, 
E_V16HFmode, 
E_HImode) != 0
                  || !(
#line 6478 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && (32 == 64 || TARGET_AVX512VL) && 1) && 
#line 526 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL)))
                return -1;
              return 4156; /* fma_fmsubadd_v16hf_maskz_1 */

            case E_V8HFmode:
              if (pattern1367 (x2, 
E_V8HFmode, 
E_QImode) != 0
                  || !(
#line 6478 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && (16 == 64 || TARGET_AVX512VL) && 1) && 
#line 527 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL)))
                return -1;
              return 4160; /* fma_fmsubadd_v8hf_maskz_1 */

            case E_V16SFmode:
              if (pattern1367 (x2, 
E_V16SFmode, 
E_HImode) != 0
                  || !(
#line 6478 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && (64 == 64 || TARGET_AVX512VL) && 1) && 
#line 528 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                return -1;
              return 4162; /* fma_fmsubadd_v16sf_maskz_1 */

            case E_V8SFmode:
              if (pattern1367 (x2, 
E_V8SFmode, 
E_QImode) != 0
                  || !(
#line 6478 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && (32 == 64 || TARGET_AVX512VL) && 1) && 
#line 528 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                return -1;
              return 4166; /* fma_fmsubadd_v8sf_maskz_1 */

            case E_V4SFmode:
              if (pattern1367 (x2, 
E_V4SFmode, 
E_QImode) != 0
                  || !(
#line 6478 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && (16 == 64 || TARGET_AVX512VL) && 1) && 
#line 528 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                return -1;
              return 4170; /* fma_fmsubadd_v4sf_maskz_1 */

            case E_V8DFmode:
              if (pattern1367 (x2, 
E_V8DFmode, 
E_QImode) != 0
                  || !(
#line 6478 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && (64 == 64 || TARGET_AVX512VL) && 1) && 
#line 529 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                return -1;
              return 4172; /* fma_fmsubadd_v8df_maskz_1 */

            case E_V4DFmode:
              if (pattern1367 (x2, 
E_V4DFmode, 
E_QImode) != 0
                  || !(
#line 6478 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && (32 == 64 || TARGET_AVX512VL) && 1) && 
#line 529 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                return -1;
              return 4176; /* fma_fmsubadd_v4df_maskz_1 */

            case E_V2DFmode:
              if (pattern1367 (x2, 
E_V2DFmode, 
E_QImode) != 0
                  || !(
#line 6478 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && (16 == 64 || TARGET_AVX512VL) && 1) && 
#line 529 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                return -1;
              return 4180; /* fma_fmsubadd_v2df_maskz_1 */

            default:
              return -1;
            }

        case REG:
        case SUBREG:
        case MEM:
          x8 = XEXP (x2, 2);
          operands[4] = x8;
          switch (GET_MODE (operands[0]))
            {
            case E_V32HFmode:
              if (pattern1277 (x2, 
E_V32HFmode, 
E_SImode) != 0)
                return -1;
              if (vector_operand (operands[3], E_V32HFmode)
                  && rtx_equal_p (x7, operands[1])
                  && (
#line 6498 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 525 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_EVEX512)))
                return 4181; /* avx512bw_fmsubadd_v32hf_mask */
              if (!nonimmediate_operand (operands[3], E_V32HFmode)
                  || !rtx_equal_p (x7, operands[3])
                  || !(
#line 6517 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 525 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_EVEX512)))
                return -1;
              return 4199; /* avx512bw_fmsubadd_v32hf_mask3 */

            case E_V16HFmode:
              if (pattern1277 (x2, 
E_V16HFmode, 
E_HImode) != 0)
                return -1;
              if (vector_operand (operands[3], E_V16HFmode)
                  && rtx_equal_p (x7, operands[1])
                  && (
#line 6498 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 526 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL)))
                return 4183; /* avx512vl_fmsubadd_v16hf_mask */
              if (!nonimmediate_operand (operands[3], E_V16HFmode)
                  || !rtx_equal_p (x7, operands[3])
                  || !(
#line 6517 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 526 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL)))
                return -1;
              return 4201; /* avx512vl_fmsubadd_v16hf_mask3 */

            case E_V8HFmode:
              if (pattern1277 (x2, 
E_V8HFmode, 
E_QImode) != 0)
                return -1;
              if (vector_operand (operands[3], E_V8HFmode)
                  && rtx_equal_p (x7, operands[1])
                  && (
#line 6498 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 527 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL)))
                return 4185; /* avx512fp16_fmsubadd_v8hf_mask */
              if (!nonimmediate_operand (operands[3], E_V8HFmode)
                  || !rtx_equal_p (x7, operands[3])
                  || !(
#line 6517 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 527 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL)))
                return -1;
              return 4203; /* avx512fp16_fmsubadd_v8hf_mask3 */

            case E_V16SFmode:
              if (pattern1277 (x2, 
E_V16SFmode, 
E_HImode) != 0)
                return -1;
              if (vector_operand (operands[3], E_V16SFmode)
                  && rtx_equal_p (x7, operands[1])
                  && (
#line 6498 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 528 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                return 4187; /* avx512f_fmsubadd_v16sf_mask */
              if (!nonimmediate_operand (operands[3], E_V16SFmode)
                  || !rtx_equal_p (x7, operands[3])
                  || !(
#line 6517 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 528 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                return -1;
              return 4205; /* avx512f_fmsubadd_v16sf_mask3 */

            case E_V8SFmode:
              if (pattern1277 (x2, 
E_V8SFmode, 
E_QImode) != 0)
                return -1;
              if (vector_operand (operands[3], E_V8SFmode)
                  && rtx_equal_p (x7, operands[1])
                  && (
#line 6498 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 528 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                return 4189; /* avx512vl_fmsubadd_v8sf_mask */
              if (!nonimmediate_operand (operands[3], E_V8SFmode)
                  || !rtx_equal_p (x7, operands[3])
                  || !(
#line 6517 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 528 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                return -1;
              return 4207; /* avx512vl_fmsubadd_v8sf_mask3 */

            case E_V4SFmode:
              if (pattern1277 (x2, 
E_V4SFmode, 
E_QImode) != 0)
                return -1;
              if (vector_operand (operands[3], E_V4SFmode)
                  && rtx_equal_p (x7, operands[1])
                  && (
#line 6498 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 528 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                return 4191; /* avx512vl_fmsubadd_v4sf_mask */
              if (!nonimmediate_operand (operands[3], E_V4SFmode)
                  || !rtx_equal_p (x7, operands[3])
                  || !(
#line 6517 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 528 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                return -1;
              return 4209; /* avx512vl_fmsubadd_v4sf_mask3 */

            case E_V8DFmode:
              if (pattern1277 (x2, 
E_V8DFmode, 
E_QImode) != 0)
                return -1;
              if (vector_operand (operands[3], E_V8DFmode)
                  && rtx_equal_p (x7, operands[1])
                  && (
#line 6498 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 529 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                return 4193; /* avx512f_fmsubadd_v8df_mask */
              if (!nonimmediate_operand (operands[3], E_V8DFmode)
                  || !rtx_equal_p (x7, operands[3])
                  || !(
#line 6517 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 529 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                return -1;
              return 4211; /* avx512f_fmsubadd_v8df_mask3 */

            case E_V4DFmode:
              if (pattern1277 (x2, 
E_V4DFmode, 
E_QImode) != 0)
                return -1;
              if (vector_operand (operands[3], E_V4DFmode)
                  && rtx_equal_p (x7, operands[1])
                  && (
#line 6498 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 529 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                return 4195; /* avx512vl_fmsubadd_v4df_mask */
              if (!nonimmediate_operand (operands[3], E_V4DFmode)
                  || !rtx_equal_p (x7, operands[3])
                  || !(
#line 6517 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 529 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                return -1;
              return 4213; /* avx512vl_fmsubadd_v4df_mask3 */

            case E_V2DFmode:
              if (pattern1277 (x2, 
E_V2DFmode, 
E_QImode) != 0)
                return -1;
              if (vector_operand (operands[3], E_V2DFmode)
                  && rtx_equal_p (x7, operands[1])
                  && (
#line 6498 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 529 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                return 4197; /* avx512vl_fmsubadd_v2df_mask */
              if (!nonimmediate_operand (operands[3], E_V2DFmode)
                  || !rtx_equal_p (x7, operands[3])
                  || !(
#line 6517 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 529 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                return -1;
              return 4215; /* avx512vl_fmsubadd_v2df_mask3 */

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
recog_156 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  switch (GET_CODE (x3))
    {
    case CONST_INT:
    case CONST_DOUBLE:
    case CONST_VECTOR:
    case REG:
    case SUBREG:
    case MEM:
      x4 = XEXP (x2, 2);
      switch (GET_CODE (x4))
        {
        case REG:
        case SUBREG:
          return recog_155 (x1, insn, pnum_clobbers);

        case CONST_INT:
          if (XWINT (x4, 0) == 1L)
            {
              switch (GET_MODE (operands[0]))
                {
                case E_V2DImode:
                  if (GET_MODE (x2) == E_V2DImode)
                    {
                      x5 = XEXP (x2, 0);
                      if (nonimmediate_operand (x5, E_V2DImode))
                        {
                          operands[1] = x5;
                          if (register_operand (operands[0], E_V2DImode))
                            {
                              operands[2] = x3;
                              if (const0_operand (operands[2], E_V2DImode)
                                  && 
#line 1858 "../../gcc/config/i386/sse.md"
(TARGET_SSE2))
                                return 2550; /* *sse2_movq128_v2di_1 */
                            }
                          operands[2] = x5;
                          if (nonimmediate_operand (operands[0], E_V2DImode))
                            {
                              operands[1] = x3;
                              if (nonimmediate_operand (operands[1], E_V2DImode)
                                  && 
#line 14846 "../../gcc/config/i386/sse.md"
(TARGET_SSE2))
                                return 7213; /* sse2_movsd_v2di */
                            }
                        }
                    }
                  break;

                case E_V2DFmode:
                  if (GET_MODE (x2) == E_V2DFmode)
                    {
                      x5 = XEXP (x2, 0);
                      if (nonimmediate_operand (x5, E_V2DFmode))
                        {
                          operands[1] = x5;
                          if (register_operand (operands[0], E_V2DFmode))
                            {
                              operands[2] = x3;
                              if (const0_operand (operands[2], E_V2DFmode)
                                  && 
#line 1858 "../../gcc/config/i386/sse.md"
(TARGET_SSE2))
                                return 2551; /* *sse2_movq128_v2df_1 */
                            }
                          operands[2] = x5;
                          if (nonimmediate_operand (operands[0], E_V2DFmode))
                            {
                              operands[1] = x3;
                              if (nonimmediate_operand (operands[1], E_V2DFmode)
                                  && 
#line 14846 "../../gcc/config/i386/sse.md"
(TARGET_SSE2))
                                return 7214; /* sse2_movsd_v2df */
                            }
                        }
                    }
                  break;

                case E_V4SImode:
                  if (pattern890 (x2, 
E_V4SImode) == 0
                      && 
#line 11697 "../../gcc/config/i386/sse.md"
(TARGET_SSE))
                    return 5277; /* sse_movss_v4si */
                  break;

                case E_V4SFmode:
                  if (pattern890 (x2, 
E_V4SFmode) == 0
                      && 
#line 11697 "../../gcc/config/i386/sse.md"
(TARGET_SSE))
                    return 5278; /* sse_movss_v4sf */
                  break;

                case E_V8HImode:
                  if (pattern890 (x2, 
E_V8HImode) == 0
                      && 
#line 12115 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16
  || (TARGET_AVX10_2_256 && const0_operand (operands[1], V8HImode))))
                    return 5316; /* avx512fp16_movv8hi */
                  break;

                case E_V8HFmode:
                  if (pattern890 (x2, 
E_V8HFmode) == 0
                      && 
#line 12115 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16
  || (TARGET_AVX10_2_256 && const0_operand (operands[1], V8HFmode))))
                    return 5317; /* avx512fp16_movv8hf */
                  break;

                case E_V8BFmode:
                  if (pattern890 (x2, 
E_V8BFmode) == 0
                      && 
#line 12115 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16
  || (TARGET_AVX10_2_256 && const0_operand (operands[1], V8BFmode))))
                    return 5318; /* avx512fp16_movv8bf */
                  break;

                default:
                  break;
                }
            }
          operands[3] = x4;
          x5 = XEXP (x2, 0);
          operands[2] = x5;
          operands[1] = x3;
          switch (GET_MODE (operands[0]))
            {
            case E_V8SFmode:
              if (pattern1113 (x2, 
E_V8SFmode) != 0
                  || !(
#line 23496 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1) && 
#line 422 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
                return -1;
              return 8676; /* avx_blendps256 */

            case E_V4SFmode:
              if (pattern1114 (x2, 
E_V4SFmode) != 0
                  || !
#line 23496 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1))
                return -1;
              return 8677; /* sse4_1_blendps */

            case E_V4DFmode:
              if (pattern1114 (x2, 
E_V4DFmode) != 0
                  || !(
#line 23496 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1) && 
#line 423 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
                return -1;
              return 8678; /* avx_blendpd256 */

            case E_V2DFmode:
              if (!register_operand (operands[0], E_V2DFmode)
                  || GET_MODE (x2) != E_V2DFmode
                  || !vector_operand (operands[2], E_V2DFmode)
                  || !register_operand (operands[1], E_V2DFmode)
                  || !const_0_to_3_operand (operands[3], E_SImode)
                  || !(
#line 23496 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1) && 
#line 423 "../../gcc/config/i386/sse.md"
(TARGET_SSE2)))
                return -1;
              return 8679; /* sse4_1_blendpd */

            case E_V8HImode:
              if (pattern1113 (x2, 
E_V8HImode) != 0
                  || !
#line 24001 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1))
                return -1;
              return 8741; /* sse4_1_pblendw */

            case E_V8HFmode:
              if (pattern1113 (x2, 
E_V8HFmode) != 0
                  || !
#line 24001 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1))
                return -1;
              return 8742; /* sse4_1_pblendph */

            case E_V8BFmode:
              if (pattern1113 (x2, 
E_V8BFmode) != 0
                  || !
#line 24001 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1))
                return -1;
              return 8743; /* sse4_1_pblendbf */

            case E_V16HImode:
              if (pattern1115 (x2, 
E_V16HImode) != 0
                  || !
#line 24074 "../../gcc/config/i386/sse.md"
(TARGET_AVX2))
                return -1;
              return 8744; /* *avx2_pblendw */

            case E_V16HFmode:
              if (pattern1115 (x2, 
E_V16HFmode) != 0
                  || !
#line 24074 "../../gcc/config/i386/sse.md"
(TARGET_AVX2))
                return -1;
              return 8745; /* *avx2_pblendph */

            case E_V16BFmode:
              if (pattern1115 (x2, 
E_V16BFmode) != 0
                  || !
#line 24074 "../../gcc/config/i386/sse.md"
(TARGET_AVX2))
                return -1;
              return 8746; /* *avx2_pblendbf */

            case E_V8SImode:
              if (pattern1116 (x2, 
E_V8SImode) != 0
                  || !
#line 24092 "../../gcc/config/i386/sse.md"
(TARGET_AVX2))
                return -1;
              return 8747; /* avx2_pblenddv8si */

            case E_V4SImode:
              if (pattern1116 (x2, 
E_V4SImode) != 0
                  || !
#line 24092 "../../gcc/config/i386/sse.md"
(TARGET_AVX2))
                return -1;
              return 8748; /* avx2_pblenddv4si */

            default:
              return -1;
            }

        case UNSPEC:
          if (XVECLEN (x4, 0) != 3
              || XINT (x4, 1) != 59)
            return -1;
          x5 = XEXP (x2, 0);
          operands[1] = x5;
          switch (pattern1013 (x2))
            {
            case 0:
              x6 = XVECEXP (x4, 0, 0);
              operands[3] = x6;
              switch (pattern1467 (x2))
                {
                case 0:
                  if ((
#line 3329 "../../gcc/config/i386/sse.md"
(TARGET_SSE && ix86_pre_reload_split ()
   && ((rtx_equal_p (operands[1], operands[3])
	&& rtx_equal_p (operands[2], operands[4]))
       || (rtx_equal_p (operands[1], operands[4])
	   && rtx_equal_p (operands[2], operands[3])))
   && (INTVAL (operands[5]) == 1 || INTVAL (operands[5]) == 14)) && 
#line 390 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_EVEX512)))
                    return 3048; /* *minmaxv32hf3_1 */
                  break;

                case 1:
                  if ((
#line 3329 "../../gcc/config/i386/sse.md"
(TARGET_SSE && ix86_pre_reload_split ()
   && ((rtx_equal_p (operands[1], operands[3])
	&& rtx_equal_p (operands[2], operands[4]))
       || (rtx_equal_p (operands[1], operands[4])
	   && rtx_equal_p (operands[2], operands[3])))
   && (INTVAL (operands[5]) == 1 || INTVAL (operands[5]) == 14)) && 
#line 391 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL)))
                    return 3049; /* *minmaxv16hf3_1 */
                  break;

                case 2:
                  if ((
#line 3329 "../../gcc/config/i386/sse.md"
(TARGET_SSE && ix86_pre_reload_split ()
   && ((rtx_equal_p (operands[1], operands[3])
	&& rtx_equal_p (operands[2], operands[4]))
       || (rtx_equal_p (operands[1], operands[4])
	   && rtx_equal_p (operands[2], operands[3])))
   && (INTVAL (operands[5]) == 1 || INTVAL (operands[5]) == 14)) && 
#line 392 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL)))
                    return 3050; /* *minmaxv8hf3_1 */
                  break;

                case 3:
                  if ((
#line 3329 "../../gcc/config/i386/sse.md"
(TARGET_SSE && ix86_pre_reload_split ()
   && ((rtx_equal_p (operands[1], operands[3])
	&& rtx_equal_p (operands[2], operands[4]))
       || (rtx_equal_p (operands[1], operands[4])
	   && rtx_equal_p (operands[2], operands[3])))
   && (INTVAL (operands[5]) == 1 || INTVAL (operands[5]) == 14)) && 
#line 393 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
                    return 3051; /* *minmaxv16sf3_1 */
                  break;

                case 4:
                  if ((
#line 3329 "../../gcc/config/i386/sse.md"
(TARGET_SSE && ix86_pre_reload_split ()
   && ((rtx_equal_p (operands[1], operands[3])
	&& rtx_equal_p (operands[2], operands[4]))
       || (rtx_equal_p (operands[1], operands[4])
	   && rtx_equal_p (operands[2], operands[3])))
   && (INTVAL (operands[5]) == 1 || INTVAL (operands[5]) == 14)) && 
#line 393 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
                    return 3052; /* *minmaxv8sf3_1 */
                  break;

                case 5:
                  if (
#line 3329 "../../gcc/config/i386/sse.md"
(TARGET_SSE && ix86_pre_reload_split ()
   && ((rtx_equal_p (operands[1], operands[3])
	&& rtx_equal_p (operands[2], operands[4]))
       || (rtx_equal_p (operands[1], operands[4])
	   && rtx_equal_p (operands[2], operands[3])))
   && (INTVAL (operands[5]) == 1 || INTVAL (operands[5]) == 14)))
                    return 3053; /* *minmaxv4sf3_1 */
                  break;

                case 6:
                  if ((
#line 3329 "../../gcc/config/i386/sse.md"
(TARGET_SSE && ix86_pre_reload_split ()
   && ((rtx_equal_p (operands[1], operands[3])
	&& rtx_equal_p (operands[2], operands[4]))
       || (rtx_equal_p (operands[1], operands[4])
	   && rtx_equal_p (operands[2], operands[3])))
   && (INTVAL (operands[5]) == 1 || INTVAL (operands[5]) == 14)) && 
#line 394 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
                    return 3054; /* *minmaxv8df3_1 */
                  break;

                case 7:
                  if ((
#line 3329 "../../gcc/config/i386/sse.md"
(TARGET_SSE && ix86_pre_reload_split ()
   && ((rtx_equal_p (operands[1], operands[3])
	&& rtx_equal_p (operands[2], operands[4]))
       || (rtx_equal_p (operands[1], operands[4])
	   && rtx_equal_p (operands[2], operands[3])))
   && (INTVAL (operands[5]) == 1 || INTVAL (operands[5]) == 14)) && 
#line 394 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
                    return 3055; /* *minmaxv4df3_1 */
                  break;

                case 8:
                  if ((
#line 3329 "../../gcc/config/i386/sse.md"
(TARGET_SSE && ix86_pre_reload_split ()
   && ((rtx_equal_p (operands[1], operands[3])
	&& rtx_equal_p (operands[2], operands[4]))
       || (rtx_equal_p (operands[1], operands[4])
	   && rtx_equal_p (operands[2], operands[3])))
   && (INTVAL (operands[5]) == 1 || INTVAL (operands[5]) == 14)) && 
#line 395 "../../gcc/config/i386/sse.md"
(TARGET_SSE2)))
                    return 3056; /* *minmaxv2df3_1 */
                  break;

                case 9:
                  if ((
#line 4214 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()
  /* LT or GE 0 */
  && ((INTVAL (operands[5]) == 1) || (INTVAL (operands[5]) == 5))) && 
#line 422 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
                    return 3251; /* *avx_cmpv8sf3_lt */
                  break;

                case 10:
                  if (
#line 4214 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()
  /* LT or GE 0 */
  && ((INTVAL (operands[5]) == 1) || (INTVAL (operands[5]) == 5))))
                    return 3252; /* *avx_cmpv4sf3_lt */
                  break;

                case 11:
                  if ((
#line 4214 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()
  /* LT or GE 0 */
  && ((INTVAL (operands[5]) == 1) || (INTVAL (operands[5]) == 5))) && 
#line 423 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
                    return 3253; /* *avx_cmpv4df3_lt */
                  break;

                case 12:
                  if ((
#line 4214 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()
  /* LT or GE 0 */
  && ((INTVAL (operands[5]) == 1) || (INTVAL (operands[5]) == 5))) && 
#line 423 "../../gcc/config/i386/sse.md"
(TARGET_SSE2)))
                    return 3254; /* *avx_cmpv2df3_lt */
                  break;

                case 13:
                  if (
#line 4243 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()
  /* LT or GE 0 */
  && ((INTVAL (operands[5]) == 1) || (INTVAL (operands[5]) == 5))))
                    return 3255; /* *avx_cmpv4si3_ltint */
                  break;

                case 14:
                  if (
#line 4243 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()
  /* LT or GE 0 */
  && ((INTVAL (operands[5]) == 1) || (INTVAL (operands[5]) == 5))))
                    return 3256; /* *avx_cmpv2di3_ltint */
                  break;

                case 15:
                  if ((
#line 4243 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()
  /* LT or GE 0 */
  && ((INTVAL (operands[5]) == 1) || (INTVAL (operands[5]) == 5))) && 
#line 612 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
                    return 3257; /* *avx_cmpv8si3_ltint */
                  break;

                case 16:
                  if ((
#line 4243 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()
  /* LT or GE 0 */
  && ((INTVAL (operands[5]) == 1) || (INTVAL (operands[5]) == 5))) && 
#line 612 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
                    return 3258; /* *avx_cmpv4di3_ltint */
                  break;

                case 17:
                  if ((
#line 18027 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()
  /* LT or GE 0 */
  && ((INTVAL (operands[5]) == 1 && !MEM_P (operands[2]))
      || (INTVAL (operands[5]) == 5 && !MEM_P (operands[1])))) && 
#line 630 "../../gcc/config/i386/sse.md"
(TARGET_AVX2)))
                    return 7903; /* *avx2_pcmpv32qi3_3 */
                  break;

                case 18:
                  if (
#line 18027 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()
  /* LT or GE 0 */
  && ((INTVAL (operands[5]) == 1 && !MEM_P (operands[2]))
      || (INTVAL (operands[5]) == 5 && !MEM_P (operands[1])))))
                    return 7904; /* *avx2_pcmpv16qi3_3 */
                  break;

                default:
                  break;
                }
              if (GET_CODE (x6) != SUBREG)
                return -1;
              switch (pattern1470 (x2))
                {
                case 0:
                  if (!
#line 4278 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()
  /* not LT or GE 0 */
  && ((INTVAL (operands[5]) == 1) || (INTVAL (operands[5]) == 5))))
                    return -1;
                  return 3259; /* *avx_cmpv4si3_ltint_not */

                case 1:
                  if (!
#line 4278 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()
  /* not LT or GE 0 */
  && ((INTVAL (operands[5]) == 1) || (INTVAL (operands[5]) == 5))))
                    return -1;
                  return 3260; /* *avx_cmpv2di3_ltint_not */

                case 2:
                  if (!(
#line 4278 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()
  /* not LT or GE 0 */
  && ((INTVAL (operands[5]) == 1) || (INTVAL (operands[5]) == 5))) && 
#line 612 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
                    return -1;
                  return 3261; /* *avx_cmpv8si3_ltint_not */

                case 3:
                  if (!(
#line 4278 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()
  /* not LT or GE 0 */
  && ((INTVAL (operands[5]) == 1) || (INTVAL (operands[5]) == 5))) && 
#line 612 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
                    return -1;
                  return 3262; /* *avx_cmpv4di3_ltint_not */

                case 4:
                  if (!(
#line 18056 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()
  && GET_MODE_CLASS (GET_MODE (operands[3])) == MODE_VECTOR_INT
  && GET_MODE_SIZE (GET_MODE (operands[3])) == 32
  /* LT or GE 0 */
  && ((INTVAL (operands[5]) == 1 && !MEM_P (operands[1]))
      || (INTVAL (operands[5]) == 5 && !MEM_P (operands[2])))) && 
#line 630 "../../gcc/config/i386/sse.md"
(TARGET_AVX2)))
                    return -1;
                  return 7905; /* *avx2_pcmpv32qi3_4 */

                case 5:
                  if (!
#line 18056 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()
  && GET_MODE_CLASS (GET_MODE (operands[3])) == MODE_VECTOR_INT
  && GET_MODE_SIZE (GET_MODE (operands[3])) == 16
  /* LT or GE 0 */
  && ((INTVAL (operands[5]) == 1 && !MEM_P (operands[1]))
      || (INTVAL (operands[5]) == 5 && !MEM_P (operands[2])))))
                    return -1;
                  return 7906; /* *avx2_pcmpv16qi3_4 */

                default:
                  return -1;
                }

            case 1:
              if (!(
#line 18088 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()
  /* LT or GE 0 */
  && ((INTVAL (operands[5]) == 1 && !MEM_P (operands[1]))
      || (INTVAL (operands[5]) == 5 && !MEM_P (operands[2])))) && 
#line 630 "../../gcc/config/i386/sse.md"
(TARGET_AVX2)))
                return -1;
              return 7907; /* *avx2_pcmpv32qi3_5 */

            case 2:
              if (!
#line 18088 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()
  /* LT or GE 0 */
  && ((INTVAL (operands[5]) == 1 && !MEM_P (operands[1]))
      || (INTVAL (operands[5]) == 5 && !MEM_P (operands[2])))))
                return -1;
              return 7908; /* *avx2_pcmpv16qi3_5 */

            default:
              return -1;
            }

        default:
          return -1;
        }

    case VEC_DUPLICATE:
      x5 = XEXP (x2, 0);
      operands[1] = x5;
      x7 = XEXP (x3, 0);
      operands[2] = x7;
      x4 = XEXP (x2, 2);
      operands[3] = x4;
      if (!const_int_operand (operands[3], E_SImode))
        return -1;
      switch (GET_MODE (operands[0]))
        {
        case E_V8DFmode:
          if (pattern1117 (x2, 
E_V2DFmode, 
E_V8DFmode) != 0
              || !(
#line 20039 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 12393 "../../gcc/config/i386/sse.md"
(TARGET_AVX512DQ && TARGET_EVEX512)))
            return -1;
          return 8386; /* *avx512dq_vinsertf64x2_1 */

        case E_V8DImode:
          if (pattern1117 (x2, 
E_V2DImode, 
E_V8DImode) != 0
              || !(
#line 20039 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 12394 "../../gcc/config/i386/sse.md"
(TARGET_AVX512DQ && TARGET_EVEX512)))
            return -1;
          return 8388; /* *avx512dq_vinserti64x2_1 */

        case E_V16SFmode:
          if (pattern1117 (x2, 
E_V4SFmode, 
E_V16SFmode) != 0
              || !(
#line 20039 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 12395 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return -1;
          return 8390; /* *avx512f_vinsertf32x4_1 */

        case E_V16SImode:
          if (pattern1117 (x2, 
E_V4SImode, 
E_V16SImode) != 0
              || !(
#line 20039 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 12395 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return -1;
          return 8392; /* *avx512f_vinserti32x4_1 */

        default:
          return -1;
        }

    default:
      return -1;
    }
}

 int
recog_169 (rtx x1 ATTRIBUTE_UNUSED,
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
  x5 = XVECEXP (x4, 0, 0);
  if (GET_CODE (x5) != CONST_INT)
    return -1;
  operands[2] = x5;
  res = recog_168 (x1, insn, pnum_clobbers);
  if (res >= 0)
    return res;
  x6 = XVECEXP (x4, 0, 1);
  if (GET_CODE (x6) != CONST_INT)
    return -1;
  x7 = XVECEXP (x4, 0, 2);
  if (GET_CODE (x7) != CONST_INT)
    return -1;
  x8 = XVECEXP (x4, 0, 3);
  if (GET_CODE (x8) != CONST_INT)
    return -1;
  x9 = XEXP (x2, 1);
  operands[2] = x9;
  x10 = XEXP (x2, 2);
  operands[3] = x10;
  if (!register_operand (operands[3], E_QImode))
    return -1;
  switch (XWINT (x5, 0))
    {
    case 0L:
      if (XWINT (x6, 0) != 1L
          || XWINT (x7, 0) != 2L
          || XWINT (x8, 0) != 3L)
        return -1;
      switch (GET_MODE (operands[0]))
        {
        case E_V4DFmode:
          if (!nonimmediate_operand (operands[0], E_V4DFmode)
              || pattern1547 (x2, 
E_V4DFmode, 
E_V8DFmode) != 0
              || !(
#line 12622 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!MEM_P (operands[0]) || rtx_equal_p (operands[0], operands[2]))) && 
#line 718 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return -1;
          return 5342; /* vec_extract_lo_v8df_mask */

        case E_V4DImode:
          if (!nonimmediate_operand (operands[0], E_V4DImode)
              || pattern1547 (x2, 
E_V4DImode, 
E_V8DImode) != 0
              || !(
#line 12622 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!MEM_P (operands[0]) || rtx_equal_p (operands[0], operands[2]))) && 
#line 718 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return -1;
          return 5343; /* vec_extract_lo_v8di_mask */

        case E_V4SImode:
          if (!nonimmediate_operand (operands[0], E_V4SImode)
              || pattern1547 (x2, 
E_V4SImode, 
E_V8SImode) != 0
              || !
#line 12956 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL
   && (!MEM_P (operands[0]) || rtx_equal_p (operands[0], operands[2]))))
            return -1;
          return 5366; /* vec_extract_lo_v8si_mask */

        case E_V4SFmode:
          if (!nonimmediate_operand (operands[0], E_V4SFmode)
              || pattern1547 (x2, 
E_V4SFmode, 
E_V8SFmode) != 0
              || !
#line 12956 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL
   && (!MEM_P (operands[0]) || rtx_equal_p (operands[0], operands[2]))))
            return -1;
          return 5367; /* vec_extract_lo_v8sf_mask */

        default:
          return -1;
        }

    case 4L:
      if (XWINT (x6, 0) != 5L
          || XWINT (x7, 0) != 6L
          || XWINT (x8, 0) != 7L)
        return -1;
      switch (GET_MODE (operands[0]))
        {
        case E_V4DFmode:
          if (!nonimmediate_operand (operands[0], E_V4DFmode)
              || pattern1547 (x2, 
E_V4DFmode, 
E_V8DFmode) != 0
              || !(
#line 12659 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!MEM_P (operands[0]) || rtx_equal_p (operands[0], operands[2]))) && 
#line 718 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return -1;
          return 5346; /* vec_extract_hi_v8df_mask */

        case E_V4DImode:
          if (!nonimmediate_operand (operands[0], E_V4DImode)
              || pattern1547 (x2, 
E_V4DImode, 
E_V8DImode) != 0
              || !(
#line 12659 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!MEM_P (operands[0]) || rtx_equal_p (operands[0], operands[2]))) && 
#line 718 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return -1;
          return 5347; /* vec_extract_hi_v8di_mask */

        case E_V4SImode:
          if (!register_operand (operands[0], E_V4SImode)
              || pattern1547 (x2, 
E_V4SImode, 
E_V8SImode) != 0
              || !
#line 12988 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL
   && (!MEM_P (operands[0]) || rtx_equal_p (operands[0], operands[2]))))
            return -1;
          return 5370; /* vec_extract_hi_v8si_mask */

        case E_V4SFmode:
          if (!register_operand (operands[0], E_V4SFmode)
              || pattern1547 (x2, 
E_V4SFmode, 
E_V8SFmode) != 0
              || !
#line 12988 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL
   && (!MEM_P (operands[0]) || rtx_equal_p (operands[0], operands[2]))))
            return -1;
          return 5371; /* vec_extract_hi_v8sf_mask */

        default:
          return -1;
        }

    default:
      return -1;
    }
}

 int
recog_179 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  switch (GET_CODE (x4))
    {
    case PLUS:
      switch (pattern307 (x2))
        {
        case 0:
          if (!(
#line 2684 "../../gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 479 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16)))
            return -1;
          return 2749; /* *avx512fp16_vmaddv8hf3 */

        case 1:
          if (!
#line 2684 "../../gcc/config/i386/sse.md"
(TARGET_SSE))
            return -1;
          return 2751; /* *sse_vmaddv4sf3 */

        case 2:
          if (!(
#line 2684 "../../gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 480 "../../gcc/config/i386/sse.md"
(TARGET_SSE2)))
            return -1;
          return 2753; /* *sse2_vmaddv2df3 */

        default:
          return -1;
        }

    case MINUS:
      switch (pattern307 (x2))
        {
        case 0:
          if (!(
#line 2684 "../../gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 479 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16)))
            return -1;
          return 2750; /* *avx512fp16_vmsubv8hf3 */

        case 1:
          if (!
#line 2684 "../../gcc/config/i386/sse.md"
(TARGET_SSE))
            return -1;
          return 2752; /* *sse_vmsubv4sf3 */

        case 2:
          if (!(
#line 2684 "../../gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 480 "../../gcc/config/i386/sse.md"
(TARGET_SSE2)))
            return -1;
          return 2754; /* *sse2_vmsubv2df3 */

        default:
          return -1;
        }

    case MULT:
      switch (pattern307 (x2))
        {
        case 0:
          if (!(
#line 2774 "../../gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 479 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16)))
            return -1;
          return 2815; /* *avx512fp16_vmmulv8hf3 */

        case 1:
          if (!
#line 2774 "../../gcc/config/i386/sse.md"
(TARGET_SSE))
            return -1;
          return 2817; /* *sse_vmmulv4sf3 */

        case 2:
          if (!(
#line 2774 "../../gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 480 "../../gcc/config/i386/sse.md"
(TARGET_SSE2)))
            return -1;
          return 2819; /* *sse2_vmmulv2df3 */

        default:
          return -1;
        }

    case DIV:
      switch (pattern307 (x2))
        {
        case 0:
          if (!(
#line 2774 "../../gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 479 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16)))
            return -1;
          return 2816; /* *avx512fp16_vmdivv8hf3 */

        case 1:
          if (!
#line 2774 "../../gcc/config/i386/sse.md"
(TARGET_SSE))
            return -1;
          return 2818; /* *sse_vmdivv4sf3 */

        case 2:
          if (!(
#line 2774 "../../gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 480 "../../gcc/config/i386/sse.md"
(TARGET_SSE2)))
            return -1;
          return 2820; /* *sse2_vmdivv2df3 */

        default:
          return -1;
        }

    case UNSPEC:
      x5 = XEXP (x2, 2);
      if (x5 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
        return -1;
      switch (XVECLEN (x4, 0))
        {
        case 1:
          x6 = XVECEXP (x4, 0, 0);
          operands[1] = x6;
          x7 = XEXP (x2, 1);
          operands[2] = x7;
          switch (XINT (x4, 1))
            {
            case 54:
              switch (GET_MODE (operands[0]))
                {
                case E_V4SFmode:
                  if (pattern1112 (x2, 
E_V4SFmode, 
E_SFmode) != 0
                      || !
#line 2949 "../../gcc/config/i386/sse.md"
(TARGET_SSE))
                    return -1;
                  return 2878; /* *sse_vmrcpv4sf2 */

                case E_V8HFmode:
                  if (pattern1112 (x2, 
E_V8HFmode, 
E_HFmode) != 0
                      || !
#line 2993 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16))
                    return -1;
                  return 2887; /* *avx512fp16_vmrcpv8hf2 */

                default:
                  return -1;
                }

            case 55:
              switch (GET_MODE (operands[0]))
                {
                case E_V4SFmode:
                  if (pattern1112 (x2, 
E_V4SFmode, 
E_SFmode) != 0
                      || !
#line 3220 "../../gcc/config/i386/sse.md"
(TARGET_SSE))
                    return -1;
                  return 2983; /* *sse_vmrsqrtv4sf2 */

                case E_V8HFmode:
                  if (pattern1112 (x2, 
E_V8HFmode, 
E_HFmode) != 0
                      || !
#line 3251 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16))
                    return -1;
                  return 2986; /* *avx512fp16_vmrsqrtv8hf2 */

                default:
                  return -1;
                }

            default:
              return -1;
            }

        case 2:
          switch (XINT (x4, 1))
            {
            case 63:
              switch (pattern771 (x2))
                {
                case 0:
                  if (!(
#line 3420 "../../gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 479 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16)))
                    return -1;
                  return 3121; /* *ieee_maxv8hf3 */

                case 1:
                  if (!
#line 3420 "../../gcc/config/i386/sse.md"
(TARGET_SSE))
                    return -1;
                  return 3123; /* *ieee_maxv4sf3 */

                case 2:
                  if (!(
#line 3420 "../../gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 480 "../../gcc/config/i386/sse.md"
(TARGET_SSE2)))
                    return -1;
                  return 3125; /* *ieee_maxv2df3 */

                default:
                  return -1;
                }

            case 62:
              switch (pattern771 (x2))
                {
                case 0:
                  if (!(
#line 3420 "../../gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 479 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16)))
                    return -1;
                  return 3122; /* *ieee_minv8hf3 */

                case 1:
                  if (!
#line 3420 "../../gcc/config/i386/sse.md"
(TARGET_SSE))
                    return -1;
                  return 3124; /* *ieee_minv4sf3 */

                case 2:
                  if (!(
#line 3420 "../../gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 480 "../../gcc/config/i386/sse.md"
(TARGET_SSE2)))
                    return -1;
                  return 3126; /* *ieee_minv2df3 */

                default:
                  return -1;
                }

            case 94:
              x6 = XVECEXP (x4, 0, 0);
              operands[2] = x6;
              x8 = XVECEXP (x4, 0, 1);
              operands[3] = x8;
              x7 = XEXP (x2, 1);
              operands[1] = x7;
              switch (GET_MODE (operands[0]))
                {
                case E_V8HFmode:
                  if (pattern1214 (x2, 
E_V8HFmode, 
E_HFmode) != 0)
                    return -1;
                  if (vector_operand (operands[2], E_HFmode)
                      && const_0_to_255_operand (operands[3], E_SImode)
                      && (
#line 14255 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 479 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16)))
                    return 7180; /* *avx512f_rndscalev8hf */
                  if (!nonimmediate_operand (operands[2], E_HFmode)
                      || !const_0_to_15_operand (operands[3], E_SImode)
                      || !(
#line 25609 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1) && 
#line 479 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16)))
                    return -1;
                  return 8971; /* *sse4_1_roundsh */

                case E_V4SFmode:
                  if (pattern1214 (x2, 
E_V4SFmode, 
E_SFmode) != 0)
                    return -1;
                  if (vector_operand (operands[2], E_SFmode)
                      && const_0_to_255_operand (operands[3], E_SImode)
                      && 
#line 14255 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F))
                    return 7182; /* *avx512f_rndscalev4sf */
                  if (!nonimmediate_operand (operands[2], E_SFmode)
                      || !const_0_to_15_operand (operands[3], E_SImode)
                      || !
#line 25609 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1))
                    return -1;
                  return 8972; /* *sse4_1_roundss */

                case E_V2DFmode:
                  if (pattern1214 (x2, 
E_V2DFmode, 
E_DFmode) != 0)
                    return -1;
                  if (vector_operand (operands[2], E_DFmode)
                      && const_0_to_255_operand (operands[3], E_SImode)
                      && (
#line 14255 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 480 "../../gcc/config/i386/sse.md"
(TARGET_SSE2)))
                    return 7184; /* *avx512f_rndscalev2df */
                  if (!nonimmediate_operand (operands[2], E_DFmode)
                      || !const_0_to_15_operand (operands[3], E_SImode)
                      || !(
#line 25609 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1) && 
#line 480 "../../gcc/config/i386/sse.md"
(TARGET_SSE2)))
                    return -1;
                  return 8973; /* *sse4_1_roundsd */

                default:
                  return -1;
                }

            default:
              return -1;
            }

        default:
          return -1;
        }

    case SQRT:
      x5 = XEXP (x2, 2);
      if (x5 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
        return -1;
      x9 = XEXP (x4, 0);
      operands[1] = x9;
      x7 = XEXP (x2, 1);
      operands[2] = x7;
      switch (GET_MODE (operands[0]))
        {
        case E_V8HFmode:
          if (pattern884 (x2, 
E_V8HFmode, 
E_HFmode) != 0
              || !(
#line 3102 "../../gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 479 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16)))
            return -1;
          return 2946; /* *avx512fp16_vmsqrtv8hf2 */

        case E_V4SFmode:
          if (pattern884 (x2, 
E_V4SFmode, 
E_SFmode) != 0
              || !
#line 3102 "../../gcc/config/i386/sse.md"
(TARGET_SSE))
            return -1;
          return 2950; /* *sse_vmsqrtv4sf2 */

        case E_V2DFmode:
          if (pattern884 (x2, 
E_V2DFmode, 
E_DFmode) != 0
              || !(
#line 3102 "../../gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 480 "../../gcc/config/i386/sse.md"
(TARGET_SSE2)))
            return -1;
          return 2954; /* *sse2_vmsqrtv2df2 */

        default:
          return -1;
        }

    case FLOAT:
      x5 = XEXP (x2, 2);
      if (GET_CODE (x5) != CONST_INT)
        return -1;
      x9 = XEXP (x4, 0);
      operands[2] = x9;
      x7 = XEXP (x2, 1);
      operands[1] = x7;
      switch (XWINT (x5, 0))
        {
        case 1L:
          switch (GET_MODE (operands[0]))
            {
            case E_V8HFmode:
              switch (pattern885 (x2, 
E_V8HFmode, 
E_HFmode))
                {
                case 0:
                  if (!
#line 7838 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16))
                    return -1;
                  return 4551; /* avx512fp16_vcvtsi2sh */

                case 1:
                  if (!(
#line 7838 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                    return -1;
                  return 4555; /* avx512fp16_vcvtsi2shq */

                default:
                  return -1;
                }

            case E_V4SFmode:
              switch (pattern885 (x2, 
E_V4SFmode, 
E_SFmode))
                {
                case 0:
                  if (!
#line 8517 "../../gcc/config/i386/sse.md"
(TARGET_SSE))
                    return -1;
                  return 4783; /* sse_cvtsi2ss */

                case 1:
                  if (!(
#line 8517 "../../gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                    return -1;
                  return 4785; /* sse_cvtsi2ssq */

                default:
                  return -1;
                }

            case E_V2DFmode:
              switch (pattern885 (x2, 
E_V2DFmode, 
E_DFmode))
                {
                case 0:
                  if (!
#line 8979 "../../gcc/config/i386/sse.md"
(TARGET_SSE2))
                    return -1;
                  return 4901; /* sse2_cvtsi2sd */

                case 1:
                  if (!
#line 9001 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && TARGET_64BIT))
                    return -1;
                  return 4902; /* sse2_cvtsi2sdq */

                default:
                  return -1;
                }

            default:
              return -1;
            }

        case 3L:
          if (pnum_clobbers == NULL
              || pattern772 (x2, 
E_V2SFmode, 
E_V4SFmode) != 0
              || !register_mmxmem_operand (operands[2], E_V2SImode)
              || !register_operand (operands[1], E_V4SFmode)
              || !
#line 8362 "../../gcc/config/i386/sse.md"
((TARGET_MMX || TARGET_MMX_WITH_SSE) && TARGET_SSE))
            return -1;
          *pnum_clobbers = 1;
          return 4779; /* sse_cvtpi2ps */

        default:
          return -1;
        }

    case UNSIGNED_FLOAT:
      x5 = XEXP (x2, 2);
      if (x5 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
        return -1;
      x9 = XEXP (x4, 0);
      operands[2] = x9;
      x7 = XEXP (x2, 1);
      operands[1] = x7;
      switch (GET_MODE (operands[0]))
        {
        case E_V8HFmode:
          switch (pattern885 (x2, 
E_V8HFmode, 
E_HFmode))
            {
            case 0:
              if (!
#line 7838 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16))
                return -1;
              return 4553; /* avx512fp16_vcvtusi2sh */

            case 1:
              if (!(
#line 7838 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return -1;
              return 4557; /* avx512fp16_vcvtusi2shq */

            default:
              return -1;
            }

        case E_V4SFmode:
          switch (pattern885 (x2, 
E_V4SFmode, 
E_SFmode))
            {
            case 0:
              if (!
#line 8613 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && 1))
                return -1;
              return 4801; /* cvtusi2ss32 */

            case 1:
              if (!
#line 8627 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_64BIT))
                return -1;
              return 4804; /* cvtusi2ss64 */

            default:
              return -1;
            }

        case E_V2DFmode:
          switch (pattern885 (x2, 
E_V2DFmode, 
E_DFmode))
            {
            case 0:
              if (!(
#line 8613 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 475 "../../gcc/config/i386/sse.md"
(TARGET_SSE2)))
                return -1;
              return 4803; /* cvtusi2sd32 */

            case 1:
              if (!(
#line 8627 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_64BIT) && 
#line 475 "../../gcc/config/i386/sse.md"
(TARGET_SSE2)))
                return -1;
              return 4806; /* cvtusi2sd64 */

            default:
              return -1;
            }

        default:
          return -1;
        }

    case FLOAT_EXTEND:
      x5 = XEXP (x2, 2);
      if (x5 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
        return -1;
      x9 = XEXP (x4, 0);
      switch (GET_CODE (x9))
        {
        case VEC_SELECT:
          if (GET_MODE (x9) != E_HFmode)
            return -1;
          x10 = XEXP (x9, 1);
          if (GET_CODE (x10) != PARALLEL
              || XVECLEN (x10, 0) != 1)
            return -1;
          x11 = XVECEXP (x10, 0, 0);
          if (x11 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
            return -1;
          x12 = XEXP (x9, 0);
          operands[1] = x12;
          if (!register_operand (operands[1], E_V8HFmode))
            return -1;
          x7 = XEXP (x2, 1);
          operands[2] = x7;
          switch (GET_MODE (operands[0]))
            {
            case E_V2DFmode:
              if (pattern1463 (x2, 
E_V2DFmode, 
E_DFmode) != 0
                  || !
#line 8298 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16))
                return -1;
              return 4755; /* avx512fp16_vcvtsh2sd */

            case E_V4SFmode:
              if (pattern1463 (x2, 
E_V4SFmode, 
E_SFmode) != 0
                  || !
#line 8298 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16))
                return -1;
              return 4759; /* avx512fp16_vcvtsh2ss */

            default:
              return -1;
            }

        case REG:
        case SUBREG:
        case MEM:
          switch (GET_MODE (operands[0]))
            {
            case E_V2DFmode:
              if (pattern772 (x2, 
E_DFmode, 
E_V2DFmode) != 0)
                return -1;
              x7 = XEXP (x2, 1);
              if (!register_operand (x7, E_V2DFmode))
                return -1;
              switch (GET_MODE (x9))
                {
                case E_HFmode:
                  operands[1] = x9;
                  if (!memory_operand (operands[1], E_HFmode))
                    return -1;
                  operands[2] = x7;
                  if (!
#line 8312 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16))
                    return -1;
                  return 4763; /* avx512fp16_vcvtsh2sd_mem */

                case E_SFmode:
                  operands[2] = x9;
                  if (!nonimmediate_operand (operands[2], E_SFmode))
                    return -1;
                  operands[1] = x7;
                  if (!
#line 10068 "../../gcc/config/i386/sse.md"
(TARGET_SSE2))
                    return -1;
                  return 5170; /* *sse2_vd_cvtss2sd */

                default:
                  return -1;
                }

            case E_V4SFmode:
              if (pattern772 (x2, 
E_SFmode, 
E_V4SFmode) != 0)
                return -1;
              operands[1] = x9;
              if (!memory_operand (operands[1], E_HFmode))
                return -1;
              x7 = XEXP (x2, 1);
              operands[2] = x7;
              if (!register_operand (operands[2], E_V4SFmode)
                  || !
#line 8312 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16))
                return -1;
              return 4765; /* avx512fp16_vcvtsh2ss_mem */

            default:
              return -1;
            }

        default:
          return -1;
        }

    case FLOAT_TRUNCATE:
      x5 = XEXP (x2, 2);
      if (x5 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
        return -1;
      x9 = XEXP (x4, 0);
      switch (GET_CODE (x9))
        {
        case VEC_SELECT:
          x10 = XEXP (x9, 1);
          if (GET_CODE (x10) != PARALLEL
              || XVECLEN (x10, 0) != 1)
            return -1;
          x11 = XVECEXP (x10, 0, 0);
          if (x11 != const_int_rtx[MAX_SAVED_CONST_INT + 0]
              || pattern772 (x2, 
E_HFmode, 
E_V8HFmode) != 0)
            return -1;
          x12 = XEXP (x9, 0);
          operands[1] = x12;
          x7 = XEXP (x2, 1);
          operands[2] = x7;
          if (!register_operand (operands[2], E_V8HFmode))
            return -1;
          switch (GET_MODE (x9))
            {
            case E_DFmode:
              if (!register_operand (operands[1], E_V2DFmode)
                  || !
#line 8328 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16))
                return -1;
              return 4767; /* avx512fp16_vcvtsd2sh */

            case E_SFmode:
              if (!register_operand (operands[1], E_V4SFmode)
                  || !
#line 8328 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16))
                return -1;
              return 4771; /* avx512fp16_vcvtss2sh */

            default:
              return -1;
            }

        case REG:
        case SUBREG:
        case MEM:
          switch (GET_MODE (operands[0]))
            {
            case E_V8HFmode:
              if (!register_operand (operands[0], E_V8HFmode)
                  || GET_MODE (x2) != E_V8HFmode
                  || GET_MODE (x3) != E_V8HFmode
                  || GET_MODE (x4) != E_HFmode)
                return -1;
              operands[1] = x9;
              x7 = XEXP (x2, 1);
              operands[2] = x7;
              if (!register_operand (operands[2], E_V8HFmode))
                return -1;
              switch (GET_MODE (operands[1]))
                {
                case E_SFmode:
                  if (!memory_operand (operands[1], E_SFmode)
                      || !
#line 8342 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16))
                    return -1;
                  return 4775; /* avx512fp16_vcvtss2sh_mem */

                case E_DFmode:
                  if (!memory_operand (operands[1], E_DFmode)
                      || !
#line 8342 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16))
                    return -1;
                  return 4777; /* avx512fp16_vcvtsd2sh_mem */

                default:
                  return -1;
                }

            case E_V4SFmode:
              if (!register_operand (operands[0], E_V4SFmode)
                  || GET_MODE (x2) != E_V4SFmode
                  || GET_MODE (x3) != E_V4SFmode)
                return -1;
              operands[2] = x9;
              x7 = XEXP (x2, 1);
              operands[1] = x7;
              if (!register_operand (operands[1], E_V4SFmode))
                return -1;
              switch (GET_MODE (x4))
                {
                case E_V2SFmode:
                  if (!nonimmediate_operand (operands[2], E_V2DFmode)
                      || !
#line 10003 "../../gcc/config/i386/sse.md"
(TARGET_SSE2))
                    return -1;
                  return 5161; /* sse2_cvtsd2ss */

                case E_SFmode:
                  if (!nonimmediate_operand (operands[2], E_DFmode)
                      || !
#line 10024 "../../gcc/config/i386/sse.md"
(TARGET_SSE2))
                    return -1;
                  return 5165; /* *sse2_vd_cvtsd2ss */

                default:
                  return -1;
                }

            default:
              return -1;
            }

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
    case MEM:
    case LABEL_REF:
    case SYMBOL_REF:
    case HIGH:
      return recog_148 (x1, insn, pnum_clobbers);

    case VEC_SELECT:
      return recog_149 (x1, insn, pnum_clobbers);

    case ZERO_EXTEND:
      switch (pattern310 (x2))
        {
        case 0:
          if (!(
#line 12077 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && ix86_pre_reload_split ()) && 
#line 804 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 5309; /* *vec_setv16si_0_zero_extendhi */

        case 1:
          if (!
#line 12077 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && ix86_pre_reload_split ()))
            return -1;
          return 5310; /* *vec_setv8si_0_zero_extendhi */

        case 2:
          if (!
#line 12077 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && ix86_pre_reload_split ()))
            return -1;
          return 5311; /* *vec_setv4si_0_zero_extendhi */

        case 3:
          if (!(
#line 12077 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && ix86_pre_reload_split ()) && 
#line 805 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 5312; /* *vec_setv8di_0_zero_extendhi */

        case 4:
          if (!(
#line 12191 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_pre_reload_split ()) && 
#line 615 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 5324; /* *vec_setv8di_0_zero_extendsi */

        case 5:
          if (!
#line 12077 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && ix86_pre_reload_split ()))
            return -1;
          return 5313; /* *vec_setv4di_0_zero_extendhi */

        case 6:
          if (!(
#line 12191 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_pre_reload_split ()) && 
#line 615 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 5325; /* *vec_setv4di_0_zero_extendsi */

        case 7:
          if (!
#line 12077 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && ix86_pre_reload_split ()))
            return -1;
          return 5314; /* *vec_setv2di_0_zero_extendhi */

        case 8:
          if (!
#line 12191 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_pre_reload_split ()))
            return -1;
          return 5326; /* *vec_setv2di_0_zero_extendsi */

        default:
          return -1;
        }

    default:
      return -1;
    }
}

 int
recog_198 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  switch (pattern132 (x2))
    {
    case 0:
      if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 3306 "../../gcc/config/i386/sse.md"
(TARGET_SSE
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))
   && (64 == 64 || TARGET_AVX512VL)
   && 1) && 
#line 390 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_EVEX512))))
        return -1;
      return 2994; /* *sminv32hf3_mask */

    case 1:
      if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 3306 "../../gcc/config/i386/sse.md"
(TARGET_SSE
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))
   && (32 == 64 || TARGET_AVX512VL)
   && 1) && 
#line 391 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL))))
        return -1;
      return 3002; /* *sminv16hf3_mask */

    case 2:
      if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 3306 "../../gcc/config/i386/sse.md"
(TARGET_SSE
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))
   && (16 == 64 || TARGET_AVX512VL)
   && 1) && 
#line 392 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL))))
        return -1;
      return 3007; /* *sminv8hf3_mask */

    case 3:
      if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 3306 "../../gcc/config/i386/sse.md"
(TARGET_SSE
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))
   && (64 == 64 || TARGET_AVX512VL)
   && 1) && 
#line 393 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512))))
        return -1;
      return 3014; /* *sminv16sf3_mask */

    case 4:
      if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 3306 "../../gcc/config/i386/sse.md"
(TARGET_SSE
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))
   && (32 == 64 || TARGET_AVX512VL)
   && 1) && 
#line 393 "../../gcc/config/i386/sse.md"
(TARGET_AVX))))
        return -1;
      return 3022; /* *sminv8sf3_mask */

    case 5:
      if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 3306 "../../gcc/config/i386/sse.md"
(TARGET_SSE
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))
   && (16 == 64 || TARGET_AVX512VL)
   && 1)))
        return -1;
      return 3027; /* *sminv4sf3_mask */

    case 6:
      if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 3306 "../../gcc/config/i386/sse.md"
(TARGET_SSE
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))
   && (64 == 64 || TARGET_AVX512VL)
   && 1) && 
#line 394 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512))))
        return -1;
      return 3034; /* *sminv8df3_mask */

    case 7:
      if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 3306 "../../gcc/config/i386/sse.md"
(TARGET_SSE
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))
   && (32 == 64 || TARGET_AVX512VL)
   && 1) && 
#line 394 "../../gcc/config/i386/sse.md"
(TARGET_AVX))))
        return -1;
      return 3042; /* *sminv4df3_mask */

    case 8:
      if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 3306 "../../gcc/config/i386/sse.md"
(TARGET_SSE
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))
   && (16 == 64 || TARGET_AVX512VL)
   && 1) && 
#line 395 "../../gcc/config/i386/sse.md"
(TARGET_SSE2))))
        return -1;
      return 3047; /* *sminv2df3_mask */

    case 9:
      if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 17708 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 501 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512))))
        return -1;
      return 7770; /* *avx512f_sminv16si3_mask */

    case 10:
      if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 17708 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 501 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
        return -1;
      return 7778; /* *avx512f_sminv8si3_mask */

    case 11:
      if (nonimmediate_operand (operands[1], E_V4SImode)
          && nonimmediate_operand (operands[2], E_V4SImode)
          && (
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 17708 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 501 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
        return 7786; /* *avx512f_sminv4si3_mask */
      if (!vector_operand (operands[1], E_V4SImode)
          || !vector_operand (operands[2], E_V4SImode)
          || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 17811 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1
   && (16 == 64 || TARGET_AVX512VL)
   && !(MEM_P (operands[1]) && MEM_P (operands[2])))))
        return -1;
      return 7870; /* *sse4_1_sminv4si3_mask */

    case 12:
      if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 17708 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 502 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512))))
        return -1;
      return 7794; /* *avx512f_sminv8di3_mask */

    case 13:
      if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 17708 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 502 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
        return -1;
      return 7802; /* *avx512f_sminv4di3_mask */

    case 14:
      if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 17708 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 502 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
        return -1;
      return 7810; /* *avx512f_sminv2di3_mask */

    case 15:
      if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 17719 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 318 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512))))
        return -1;
      return 7818; /* sminv64qi3_mask */

    case 16:
      if (register_operand (operands[1], E_V16QImode)
          && nonimmediate_operand (operands[2], E_V16QImode)
          && (
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 17719 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 318 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
        return 7826; /* sminv16qi3_mask */
      if (!vector_operand (operands[1], E_V16QImode)
          || !vector_operand (operands[2], E_V16QImode)
          || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 17811 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1
   && (16 == 64 || TARGET_AVX512VL)
   && !(MEM_P (operands[1]) && MEM_P (operands[2])))))
        return -1;
      return 7866; /* *sse4_1_sminv16qi3_mask */

    case 17:
      if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 17719 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 318 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
        return -1;
      return 7834; /* sminv32qi3_mask */

    case 18:
      if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 17719 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 319 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512))))
        return -1;
      return 7842; /* sminv32hi3_mask */

    case 19:
      if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 17719 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 319 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
        return -1;
      return 7850; /* sminv16hi3_mask */

    case 20:
      if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 17719 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 319 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
        return -1;
      return 7858; /* sminv8hi3_mask */

    case 21:
      if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 32100 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256) && 
#line 565 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_512))))
        return -1;
      return 10593; /* avx10_2_sminpbf16_v32bf_mask */

    case 22:
      if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 32100 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256)))
        return -1;
      return 10597; /* avx10_2_sminpbf16_v16bf_mask */

    case 23:
      if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 32100 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256)))
        return -1;
      return 10601; /* avx10_2_sminpbf16_v8bf_mask */

    case 24:
      if (!(
#line 3467 "../../gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 479 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16)))
        return -1;
      return 3131; /* *avx512fp16_vmsminv8hf3 */

    case 25:
      if (!
#line 3467 "../../gcc/config/i386/sse.md"
(TARGET_SSE))
        return -1;
      return 3139; /* *sse_vmsminv4sf3 */

    case 26:
      if (!(
#line 3467 "../../gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 480 "../../gcc/config/i386/sse.md"
(TARGET_SSE2)))
        return -1;
      return 3147; /* *sse2_vmsminv2df3 */

    default:
      return -1;
    }
}

 int
recog_210 (rtx x1 ATTRIBUTE_UNUSED,
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
      return 4559; /* unspec_avx512fp16_fix_truncv8hi2 */

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
      return 4563; /* unspec_avx512fp16_fix_truncv16hi2 */

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
      return 4571; /* unspec_avx512fp16_fix_truncv32hi2 */

    case E_V8SImode:
      switch (pattern641 (x2))
        {
        case 0:
          if (!(
#line 7855 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && 1) && 
#line 695 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 4579; /* unspec_avx512fp16_fix_truncv8si2 */

        case 1:
          if (!
#line 8783 "../../gcc/config/i386/sse.md"
(TARGET_AVX && 1
  && (!false || TARGET_AVX10_2_256)))
            return -1;
          return 4884; /* unspec_fix_truncv8sfv8si2 */

        case 2:
          if (!
#line 9558 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512))
            return -1;
          return 5021; /* unspec_fix_truncv8dfv8si2 */

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
          return 4587; /* unspec_avx512fp16_fix_truncv16si2 */

        case 1:
          if (!
#line 8763 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512))
            return -1;
          return 4868; /* unspec_fix_truncv16sfv16si2 */

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
          return 4595; /* unspec_avx512fp16_fix_truncv8di2 */

        case 1:
          if (!(
#line 9689 "../../gcc/config/i386/sse.md"
(TARGET_AVX512DQ && 1) && 
#line 537 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return -1;
          return 5054; /* unspec_fix_truncv8dfv8di2 */

        case 2:
          if (!(
#line 9732 "../../gcc/config/i386/sse.md"
(TARGET_AVX512DQ && 1) && 
#line 627 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return -1;
          return 5114; /* unspec_fix_truncv8sfv8di2 */

        default:
          return -1;
        }

    case E_V4SImode:
      if (!register_operand (operands[0], E_V4SImode)
          || GET_MODE (x2) != E_V4SImode)
        return -1;
      switch (GET_MODE (operands[1]))
        {
        case E_V8HFmode:
          if (!register_operand (operands[1], E_V8HFmode)
              || !
#line 7893 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL && 1))
            return -1;
          return 4647; /* unspec_avx512fp16_fix_truncv4si2 */

        case E_V4SFmode:
          if (!vector_operand (operands[1], E_V4SFmode)
              || !
#line 8803 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && 1))
            return -1;
          return 4890; /* unspec_fix_truncv4sfv4si2 */

        case E_V4DFmode:
          if (!vector_operand (operands[1], E_V4DFmode)
              || !
#line 9648 "../../gcc/config/i386/sse.md"
(TARGET_AVX && 1
   && (!false || TARGET_AVX10_2_256)))
            return -1;
          return 5042; /* unspec_fix_truncv4dfv4si2 */

        case E_V2DFmode:
          if (!vector_operand (operands[1], E_V2DFmode)
              || !
#line 9932 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && 1))
            return -1;
          return 5156; /* unspec_sse2_cvttpd2dq */

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
          return 4651; /* unspec_avx512fp16_fix_truncv4di2 */

        case 1:
          if (!(
#line 9689 "../../gcc/config/i386/sse.md"
(TARGET_AVX512DQ && 1) && 
#line 537 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 5062; /* unspec_fix_truncv4dfv4di2 */

        case 2:
          if (!(
#line 9732 "../../gcc/config/i386/sse.md"
(TARGET_AVX512DQ && 1) && 
#line 627 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 5122; /* unspec_fix_truncv4sfv4di2 */

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
          return 4675; /* unspec_avx512fp16_fix_truncv2di2 */

        case 1:
          if (!(
#line 9689 "../../gcc/config/i386/sse.md"
(TARGET_AVX512DQ && 1) && 
#line 537 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 5070; /* unspec_fix_truncv2dfv2di2 */

        case 2:
          if (!
#line 9753 "../../gcc/config/i386/sse.md"
(TARGET_AVX512DQ && TARGET_AVX512VL))
            return -1;
          return 5138; /* unspec_avx512dq_fix_truncv2sfv2di2 */

        default:
          return -1;
        }

    default:
      return -1;
    }
}

 int
recog_223 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XVECEXP (x2, 0, 0);
  x4 = XEXP (x3, 0);
  x5 = XEXP (x4, 1);
  operands[2] = x5;
  x6 = XVECEXP (x2, 0, 1);
  if (!const_4_or_8_to_11_operand (x6, E_SImode))
    return -1;
  x7 = XEXP (x4, 0);
  switch (GET_CODE (x7))
    {
    case REG:
    case SUBREG:
    case MEM:
      operands[1] = x7;
      switch (pattern1131 (x2))
        {
        case 0:
          if (pattern1588 (x2, 
E_V32HFmode, 
E_SImode) != 0
              || !(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 5929 "../../gcc/config/i386/sse.md"
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
          return 3802; /* fma_fmadd_v32hf_maskz_1_round */

        case 1:
          if (pattern1588 (x2, 
E_V16HFmode, 
E_HImode) != 0
              || !(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 5929 "../../gcc/config/i386/sse.md"
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
          return 3806; /* fma_fmadd_v16hf_maskz_1_round */

        case 2:
          if (pattern1588 (x2, 
E_V16SFmode, 
E_HImode) != 0
              || !(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 5929 "../../gcc/config/i386/sse.md"
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
          return 3814; /* fma_fmadd_v16sf_maskz_1_round */

        case 3:
          if (pattern1588 (x2, 
E_V8SFmode, 
E_QImode) != 0
              || !(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 5929 "../../gcc/config/i386/sse.md"
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
          return 3818; /* fma_fmadd_v8sf_maskz_1_round */

        case 4:
          if (pattern1588 (x2, 
E_V8DFmode, 
E_QImode) != 0
              || !(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 5929 "../../gcc/config/i386/sse.md"
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
          return 3825; /* fma_fmadd_v8df_maskz_1_round */

        case 5:
          if (pattern1588 (x2, 
E_V4DFmode, 
E_QImode) != 0
              || !(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 5929 "../../gcc/config/i386/sse.md"
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
          return 3829; /* fma_fmadd_v4df_maskz_1_round */

        case 6:
          if (pattern1589 (x2, 
E_V32HFmode, 
E_SImode) != 0)
            return -1;
          if (nonimmediate_operand (operands[1], E_V32HFmode)
              && register_operand (operands[3], E_V32HFmode))
            {
              x8 = XEXP (x3, 1);
              if (rtx_equal_p (x8, operands[1])
                  && (
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 5970 "../../gcc/config/i386/sse.md"
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
                return 3833; /* avx512bw_fmadd_v32hf_mask_round */
            }
          if (!register_operand (operands[1], E_V32HFmode)
              || !nonimmediate_operand (operands[3], E_V32HFmode))
            return -1;
          x8 = XEXP (x3, 1);
          if (!rtx_equal_p (x8, operands[3])
              || !(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 5987 "../../gcc/config/i386/sse.md"
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
          return 3848; /* avx512bw_fmadd_v32hf_mask3_round */

        case 7:
          if (pattern1589 (x2, 
E_V16HFmode, 
E_HImode) != 0)
            return -1;
          if (nonimmediate_operand (operands[1], E_V16HFmode)
              && register_operand (operands[3], E_V16HFmode))
            {
              x8 = XEXP (x3, 1);
              if (rtx_equal_p (x8, operands[1])
                  && (
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 5970 "../../gcc/config/i386/sse.md"
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
                return 3835; /* avx512vl_fmadd_v16hf_mask_round */
            }
          if (!register_operand (operands[1], E_V16HFmode)
              || !nonimmediate_operand (operands[3], E_V16HFmode))
            return -1;
          x8 = XEXP (x3, 1);
          if (!rtx_equal_p (x8, operands[3])
              || !(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 5987 "../../gcc/config/i386/sse.md"
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
          return 3850; /* avx512vl_fmadd_v16hf_mask3_round */

        case 8:
          if (pattern1589 (x2, 
E_V16SFmode, 
E_HImode) != 0)
            return -1;
          if (nonimmediate_operand (operands[1], E_V16SFmode)
              && register_operand (operands[3], E_V16SFmode))
            {
              x8 = XEXP (x3, 1);
              if (rtx_equal_p (x8, operands[1])
                  && (
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 5970 "../../gcc/config/i386/sse.md"
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
                return 3838; /* avx512f_fmadd_v16sf_mask_round */
            }
          if (!register_operand (operands[1], E_V16SFmode)
              || !nonimmediate_operand (operands[3], E_V16SFmode))
            return -1;
          x8 = XEXP (x3, 1);
          if (!rtx_equal_p (x8, operands[3])
              || !(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 5987 "../../gcc/config/i386/sse.md"
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
          return 3853; /* avx512f_fmadd_v16sf_mask3_round */

        case 9:
          if (pattern1589 (x2, 
E_V8SFmode, 
E_QImode) != 0)
            return -1;
          if (nonimmediate_operand (operands[1], E_V8SFmode)
              && register_operand (operands[3], E_V8SFmode))
            {
              x8 = XEXP (x3, 1);
              if (rtx_equal_p (x8, operands[1])
                  && (
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 5970 "../../gcc/config/i386/sse.md"
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
                return 3840; /* avx512vl_fmadd_v8sf_mask_round */
            }
          if (!register_operand (operands[1], E_V8SFmode)
              || !nonimmediate_operand (operands[3], E_V8SFmode))
            return -1;
          x8 = XEXP (x3, 1);
          if (!rtx_equal_p (x8, operands[3])
              || !(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 5987 "../../gcc/config/i386/sse.md"
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
          return 3855; /* avx512vl_fmadd_v8sf_mask3_round */

        case 10:
          if (pattern1589 (x2, 
E_V8DFmode, 
E_QImode) != 0)
            return -1;
          if (nonimmediate_operand (operands[1], E_V8DFmode)
              && register_operand (operands[3], E_V8DFmode))
            {
              x8 = XEXP (x3, 1);
              if (rtx_equal_p (x8, operands[1])
                  && (
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 5970 "../../gcc/config/i386/sse.md"
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
                return 3843; /* avx512f_fmadd_v8df_mask_round */
            }
          if (!register_operand (operands[1], E_V8DFmode)
              || !nonimmediate_operand (operands[3], E_V8DFmode))
            return -1;
          x8 = XEXP (x3, 1);
          if (!rtx_equal_p (x8, operands[3])
              || !(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 5987 "../../gcc/config/i386/sse.md"
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
          return 3858; /* avx512f_fmadd_v8df_mask3_round */

        case 11:
          if (pattern1589 (x2, 
E_V4DFmode, 
E_QImode) != 0)
            return -1;
          if (nonimmediate_operand (operands[1], E_V4DFmode)
              && register_operand (operands[3], E_V4DFmode))
            {
              x8 = XEXP (x3, 1);
              if (rtx_equal_p (x8, operands[1])
                  && (
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 5970 "../../gcc/config/i386/sse.md"
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
                return 3845; /* avx512vl_fmadd_v4df_mask_round */
            }
          if (!register_operand (operands[1], E_V4DFmode)
              || !nonimmediate_operand (operands[3], E_V4DFmode))
            return -1;
          x8 = XEXP (x3, 1);
          if (!rtx_equal_p (x8, operands[3])
              || !(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 5987 "../../gcc/config/i386/sse.md"
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
          return 3860; /* avx512vl_fmadd_v4df_mask3_round */

        case 12:
          if (pattern1645 (x2, 
E_V8HFmode) != 0
              || !(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 6583 "../../gcc/config/i386/sse.md"
(TARGET_FMA || TARGET_AVX512F) && 
#line 479 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16))))
            return -1;
          return 4218; /* *fmai_fmadd_v8hf */

        case 13:
          if (pattern1645 (x2, 
E_V4SFmode) != 0
              || !(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 6583 "../../gcc/config/i386/sse.md"
(TARGET_FMA || TARGET_AVX512F)))
            return -1;
          return 4220; /* *fmai_fmadd_v4sf */

        case 14:
          if (pattern1645 (x2, 
E_V2DFmode) != 0
              || !(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 6583 "../../gcc/config/i386/sse.md"
(TARGET_FMA || TARGET_AVX512F) && 
#line 480 "../../gcc/config/i386/sse.md"
(TARGET_SSE2))))
            return -1;
          return 4222; /* *fmai_fmadd_v2df */

        case 15:
          x8 = XEXP (x3, 1);
          switch (GET_CODE (x8))
            {
            case CONST_INT:
            case CONST_DOUBLE:
            case CONST_VECTOR:
              operands[4] = x8;
              x9 = XEXP (x3, 2);
              operands[5] = x9;
              operands[6] = x6;
              switch (GET_MODE (operands[0]))
                {
                case E_V32HFmode:
                  if (pattern1591 (x2, 
E_V32HFmode, 
E_SImode) != 0
                      || !(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 6032 "../../gcc/config/i386/sse.md"
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
                  return 3871; /* fma_fmsub_v32hf_maskz_1_round */

                case E_V16HFmode:
                  if (pattern1591 (x2, 
E_V16HFmode, 
E_HImode) != 0
                      || !(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 6032 "../../gcc/config/i386/sse.md"
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
                  return 3875; /* fma_fmsub_v16hf_maskz_1_round */

                case E_V16SFmode:
                  if (pattern1591 (x2, 
E_V16SFmode, 
E_HImode) != 0
                      || !(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 6032 "../../gcc/config/i386/sse.md"
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
                  return 3883; /* fma_fmsub_v16sf_maskz_1_round */

                case E_V8SFmode:
                  if (pattern1591 (x2, 
E_V8SFmode, 
E_QImode) != 0
                      || !(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 6032 "../../gcc/config/i386/sse.md"
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
                  return 3887; /* fma_fmsub_v8sf_maskz_1_round */

                case E_V8DFmode:
                  if (pattern1591 (x2, 
E_V8DFmode, 
E_QImode) != 0
                      || !(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 6032 "../../gcc/config/i386/sse.md"
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
                  return 3894; /* fma_fmsub_v8df_maskz_1_round */

                case E_V4DFmode:
                  if (pattern1591 (x2, 
E_V4DFmode, 
E_QImode) != 0
                      || !(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 6032 "../../gcc/config/i386/sse.md"
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
                  return 3898; /* fma_fmsub_v4df_maskz_1_round */

                default:
                  return -1;
                }

            case REG:
            case SUBREG:
            case MEM:
              switch (pattern1130 (x2))
                {
                case 0:
                  if (pattern1592 (x2, 
E_V32HFmode, 
E_SImode) != 0)
                    return -1;
                  if (nonimmediate_operand (operands[1], E_V32HFmode)
                      && register_operand (operands[3], E_V32HFmode)
                      && rtx_equal_p (x8, operands[1])
                      && (
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 6075 "../../gcc/config/i386/sse.md"
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
                    return 3902; /* avx512bw_fmsub_v32hf_mask_round */
                  if (!register_operand (operands[1], E_V32HFmode)
                      || !nonimmediate_operand (operands[3], E_V32HFmode)
                      || !rtx_equal_p (x8, operands[3])
                      || !(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 6093 "../../gcc/config/i386/sse.md"
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
                  return 3917; /* avx512bw_fmsub_v32hf_mask3_round */

                case 1:
                  if (pattern1592 (x2, 
E_V16HFmode, 
E_HImode) != 0)
                    return -1;
                  if (nonimmediate_operand (operands[1], E_V16HFmode)
                      && register_operand (operands[3], E_V16HFmode)
                      && rtx_equal_p (x8, operands[1])
                      && (
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 6075 "../../gcc/config/i386/sse.md"
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
                    return 3904; /* avx512vl_fmsub_v16hf_mask_round */
                  if (!register_operand (operands[1], E_V16HFmode)
                      || !nonimmediate_operand (operands[3], E_V16HFmode)
                      || !rtx_equal_p (x8, operands[3])
                      || !(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 6093 "../../gcc/config/i386/sse.md"
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
                  return 3919; /* avx512vl_fmsub_v16hf_mask3_round */

                case 2:
                  if (pattern1592 (x2, 
E_V16SFmode, 
E_HImode) != 0)
                    return -1;
                  if (nonimmediate_operand (operands[1], E_V16SFmode)
                      && register_operand (operands[3], E_V16SFmode)
                      && rtx_equal_p (x8, operands[1])
                      && (
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 6075 "../../gcc/config/i386/sse.md"
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
                    return 3907; /* avx512f_fmsub_v16sf_mask_round */
                  if (!register_operand (operands[1], E_V16SFmode)
                      || !nonimmediate_operand (operands[3], E_V16SFmode)
                      || !rtx_equal_p (x8, operands[3])
                      || !(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 6093 "../../gcc/config/i386/sse.md"
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
                  return 3922; /* avx512f_fmsub_v16sf_mask3_round */

                case 3:
                  if (pattern1592 (x2, 
E_V8SFmode, 
E_QImode) != 0)
                    return -1;
                  if (nonimmediate_operand (operands[1], E_V8SFmode)
                      && register_operand (operands[3], E_V8SFmode)
                      && rtx_equal_p (x8, operands[1])
                      && (
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 6075 "../../gcc/config/i386/sse.md"
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
                    return 3909; /* avx512vl_fmsub_v8sf_mask_round */
                  if (!register_operand (operands[1], E_V8SFmode)
                      || !nonimmediate_operand (operands[3], E_V8SFmode)
                      || !rtx_equal_p (x8, operands[3])
                      || !(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 6093 "../../gcc/config/i386/sse.md"
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
                  return 3924; /* avx512vl_fmsub_v8sf_mask3_round */

                case 4:
                  if (pattern1592 (x2, 
E_V8DFmode, 
E_QImode) != 0)
                    return -1;
                  if (nonimmediate_operand (operands[1], E_V8DFmode)
                      && register_operand (operands[3], E_V8DFmode)
                      && rtx_equal_p (x8, operands[1])
                      && (
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 6075 "../../gcc/config/i386/sse.md"
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
                    return 3912; /* avx512f_fmsub_v8df_mask_round */
                  if (!register_operand (operands[1], E_V8DFmode)
                      || !nonimmediate_operand (operands[3], E_V8DFmode)
                      || !rtx_equal_p (x8, operands[3])
                      || !(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 6093 "../../gcc/config/i386/sse.md"
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
                  return 3927; /* avx512f_fmsub_v8df_mask3_round */

                case 5:
                  if (pattern1592 (x2, 
E_V4DFmode, 
E_QImode) != 0)
                    return -1;
                  if (nonimmediate_operand (operands[1], E_V4DFmode)
                      && register_operand (operands[3], E_V4DFmode)
                      && rtx_equal_p (x8, operands[1])
                      && (
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 6075 "../../gcc/config/i386/sse.md"
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
                    return 3914; /* avx512vl_fmsub_v4df_mask_round */
                  if (!register_operand (operands[1], E_V4DFmode)
                      || !nonimmediate_operand (operands[3], E_V4DFmode)
                      || !rtx_equal_p (x8, operands[3])
                      || !(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 6093 "../../gcc/config/i386/sse.md"
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
                  return 3929; /* avx512vl_fmsub_v4df_mask3_round */

                case 6:
                  if (pattern1646 (x2, 
E_V8HFmode) != 0
                      || !(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 6601 "../../gcc/config/i386/sse.md"
(TARGET_FMA || TARGET_AVX512F) && 
#line 479 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16))))
                    return -1;
                  return 4224; /* *fmai_fmsub_v8hf */

                case 7:
                  if (pattern1646 (x2, 
E_V4SFmode) != 0
                      || !(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 6601 "../../gcc/config/i386/sse.md"
(TARGET_FMA || TARGET_AVX512F)))
                    return -1;
                  return 4226; /* *fmai_fmsub_v4sf */

                case 8:
                  if (pattern1646 (x2, 
E_V2DFmode) != 0
                      || !(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 6601 "../../gcc/config/i386/sse.md"
(TARGET_FMA || TARGET_AVX512F) && 
#line 480 "../../gcc/config/i386/sse.md"
(TARGET_SSE2))))
                    return -1;
                  return 4228; /* *fmai_fmsub_v2df */

                default:
                  return -1;
                }

            default:
              return -1;
            }

        default:
          return -1;
        }

    case NEG:
      return recog_221 (x1, insn, pnum_clobbers);

    default:
      return -1;
    }
}

 int
recog_235 (rtx x1 ATTRIBUTE_UNUSED,
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
    case E_V32HFmode:
      if (pattern781 (x3, 
E_V32HFmode) != 0
          || !(
#line 14224 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 525 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_EVEX512)))
        return -1;
      return 7138; /* avx512bw_rndscalev32hf */

    case E_V16HFmode:
      if (pattern781 (x3, 
E_V16HFmode) != 0
          || !(
#line 14224 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 526 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL)))
        return -1;
      return 7142; /* avx512vl_rndscalev16hf */

    case E_V8HFmode:
      if (pattern781 (x3, 
E_V8HFmode) != 0
          || !(
#line 14224 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 527 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL)))
        return -1;
      return 7146; /* avx512fp16_rndscalev8hf */

    case E_V16SFmode:
      if (pattern781 (x3, 
E_V16SFmode) != 0
          || !(
#line 14224 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 528 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 7148; /* avx512f_rndscalev16sf */

    case E_V8SFmode:
      if (!register_operand (operands[0], E_V8SFmode)
          || GET_MODE (x3) != E_V8SFmode)
        return -1;
      if (nonimmediate_operand (operands[1], E_V8SFmode)
          && const_0_to_255_operand (operands[2], E_SImode)
          && (
#line 14224 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 528 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return 7152; /* avx512vl_rndscalev8sf */
      if (!vector_operand (operands[1], E_V8SFmode)
          || !const_0_to_15_operand (operands[2], E_SImode)
          || !(
#line 25476 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1) && 
#line 422 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
        return -1;
      return 8964; /* avx_roundps256 */

    case E_V4SFmode:
      if (!register_operand (operands[0], E_V4SFmode)
          || GET_MODE (x3) != E_V4SFmode)
        return -1;
      if (nonimmediate_operand (operands[1], E_V4SFmode)
          && const_0_to_255_operand (operands[2], E_SImode)
          && (
#line 14224 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 528 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return 7156; /* avx512vl_rndscalev4sf */
      if (!vector_operand (operands[1], E_V4SFmode)
          || !const_0_to_15_operand (operands[2], E_SImode)
          || !
#line 25476 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1))
        return -1;
      return 8965; /* sse4_1_roundps */

    case E_V8DFmode:
      if (pattern781 (x3, 
E_V8DFmode) != 0
          || !(
#line 14224 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 529 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 7158; /* avx512f_rndscalev8df */

    case E_V4DFmode:
      if (!register_operand (operands[0], E_V4DFmode)
          || GET_MODE (x3) != E_V4DFmode)
        return -1;
      if (nonimmediate_operand (operands[1], E_V4DFmode)
          && const_0_to_255_operand (operands[2], E_SImode)
          && (
#line 14224 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 529 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return 7162; /* avx512vl_rndscalev4df */
      if (!vector_operand (operands[1], E_V4DFmode)
          || !const_0_to_15_operand (operands[2], E_SImode)
          || !(
#line 25476 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1) && 
#line 423 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
        return -1;
      return 8966; /* avx_roundpd256 */

    case E_V2DFmode:
      if (!register_operand (operands[0], E_V2DFmode)
          || GET_MODE (x3) != E_V2DFmode)
        return -1;
      if (nonimmediate_operand (operands[1], E_V2DFmode)
          && const_0_to_255_operand (operands[2], E_SImode)
          && (
#line 14224 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 529 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return 7166; /* avx512vl_rndscalev2df */
      if (!vector_operand (operands[1], E_V2DFmode)
          || !const_0_to_15_operand (operands[2], E_SImode)
          || !(
#line 25476 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1) && 
#line 423 "../../gcc/config/i386/sse.md"
(TARGET_SSE2)))
        return -1;
      return 8967; /* sse4_1_roundpd */

    default:
      return -1;
    }
}

 int
recog_236 (rtx x1 ATTRIBUTE_UNUSED,
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
    case E_V8SImode:
      if (pattern783 (x3, 
E_V8SImode) != 0
          || !
#line 27314 "../../gcc/config/i386/sse.md"
(TARGET_AVX2 && 1))
        return -1;
      return 9111; /* avx2_permvarv8si */

    case E_V8SFmode:
      if (pattern784 (x3, 
E_V8SImode, 
E_V8SFmode) != 0
          || !
#line 27314 "../../gcc/config/i386/sse.md"
(TARGET_AVX2 && 1))
        return -1;
      return 9113; /* avx2_permvarv8sf */

    case E_V16SImode:
      if (pattern783 (x3, 
E_V16SImode) != 0
          || !(
#line 27314 "../../gcc/config/i386/sse.md"
(TARGET_AVX2 && 1) && 
#line 998 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
        return -1;
      return 9115; /* avx512f_permvarv16si */

    case E_V16SFmode:
      if (pattern784 (x3, 
E_V16SImode, 
E_V16SFmode) != 0
          || !(
#line 27314 "../../gcc/config/i386/sse.md"
(TARGET_AVX2 && 1) && 
#line 999 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
        return -1;
      return 9117; /* avx512f_permvarv16sf */

    case E_V8DImode:
      if (pattern783 (x3, 
E_V8DImode) != 0
          || !(
#line 27314 "../../gcc/config/i386/sse.md"
(TARGET_AVX2 && 1) && 
#line 1000 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
        return -1;
      return 9119; /* avx512f_permvarv8di */

    case E_V8DFmode:
      if (pattern784 (x3, 
E_V8DImode, 
E_V8DFmode) != 0
          || !(
#line 27314 "../../gcc/config/i386/sse.md"
(TARGET_AVX2 && 1) && 
#line 1001 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
        return -1;
      return 9121; /* avx512f_permvarv8df */

    case E_V4DImode:
      if (pattern783 (x3, 
E_V4DImode) != 0
          || !(
#line 27314 "../../gcc/config/i386/sse.md"
(TARGET_AVX2 && 1) && 
#line 1002 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 9123; /* avx2_permvarv4di */

    case E_V4DFmode:
      if (pattern784 (x3, 
E_V4DImode, 
E_V4DFmode) != 0
          || !(
#line 27314 "../../gcc/config/i386/sse.md"
(TARGET_AVX2 && 1) && 
#line 1002 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 9125; /* avx2_permvarv4df */

    case E_V64QImode:
      if (pattern783 (x3, 
E_V64QImode) != 0
          || !(
#line 27333 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VBMI && 1) && 
#line 328 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 9127; /* avx512bw_permvarv64qi */

    case E_V16QImode:
      if (pattern783 (x3, 
E_V16QImode) != 0
          || !(
#line 27333 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VBMI && 1) && 
#line 328 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 9129; /* avx512vl_permvarv16qi */

    case E_V32QImode:
      if (pattern783 (x3, 
E_V32QImode) != 0
          || !(
#line 27333 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VBMI && 1) && 
#line 328 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 9131; /* avx512vl_permvarv32qi */

    case E_V8HImode:
      if (pattern783 (x3, 
E_V8HImode) != 0
          || !(
#line 27345 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && 1) && 
#line 689 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 9133; /* avx512vl_permvarv8hi */

    case E_V16HImode:
      if (pattern783 (x3, 
E_V16HImode) != 0
          || !(
#line 27345 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && 1) && 
#line 689 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 9135; /* avx512vl_permvarv16hi */

    case E_V32HImode:
      if (pattern783 (x3, 
E_V32HImode) != 0
          || !(
#line 27345 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && 1) && 
#line 689 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 9137; /* avx512bw_permvarv32hi */

    case E_V8HFmode:
      if (pattern784 (x3, 
E_V8HImode, 
E_V8HFmode) != 0
          || !(
#line 27345 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && 1) && 
#line 690 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 9139; /* avx512fp16_permvarv8hf */

    case E_V16HFmode:
      if (pattern784 (x3, 
E_V16HImode, 
E_V16HFmode) != 0
          || !(
#line 27345 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && 1) && 
#line 690 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 9141; /* avx512vl_permvarv16hf */

    case E_V32HFmode:
      if (pattern784 (x3, 
E_V32HImode, 
E_V32HFmode) != 0
          || !(
#line 27345 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && 1) && 
#line 690 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 9143; /* avx512bw_permvarv32hf */

    case E_V8BFmode:
      if (pattern784 (x3, 
E_V8HImode, 
E_V8BFmode) != 0
          || !(
#line 27345 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && 1) && 
#line 691 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 9145; /* avx512vl_permvarv8bf */

    case E_V16BFmode:
      if (pattern784 (x3, 
E_V16HImode, 
E_V16BFmode) != 0
          || !(
#line 27345 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && 1) && 
#line 691 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 9147; /* avx512vl_permvarv16bf */

    case E_V32BFmode:
      if (pattern784 (x3, 
E_V32HImode, 
E_V32BFmode) != 0
          || !(
#line 27345 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && 1) && 
#line 691 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 9149; /* avx512bw_permvarv32bf */

    default:
      return -1;
    }
}

 int
recog_240 (rtx x1 ATTRIBUTE_UNUSED,
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
    case E_V32HFmode:
      if (pattern60 (x3, 
E_V32HFmode) != 0
          || !(
#line 13623 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 525 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_EVEX512)))
        return -1;
      return 5426; /* avx512bw_scalefv32hf */

    case E_V16HFmode:
      if (pattern60 (x3, 
E_V16HFmode) != 0
          || !(
#line 13623 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 526 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL)))
        return -1;
      return 5430; /* avx512vl_scalefv16hf */

    case E_V8HFmode:
      if (pattern60 (x3, 
E_V8HFmode) != 0
          || !(
#line 13623 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 527 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL)))
        return -1;
      return 5434; /* avx512fp16_scalefv8hf */

    case E_V16SFmode:
      if (pattern60 (x3, 
E_V16SFmode) != 0
          || !(
#line 13623 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 528 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 5436; /* avx512f_scalefv16sf */

    case E_V8SFmode:
      if (pattern60 (x3, 
E_V8SFmode) != 0
          || !(
#line 13623 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 528 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 5440; /* avx512vl_scalefv8sf */

    case E_V4SFmode:
      if (pattern60 (x3, 
E_V4SFmode) != 0
          || !(
#line 13623 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 528 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 5444; /* avx512vl_scalefv4sf */

    case E_V8DFmode:
      if (pattern60 (x3, 
E_V8DFmode) != 0
          || !(
#line 13623 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 529 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 5446; /* avx512f_scalefv8df */

    case E_V4DFmode:
      if (pattern60 (x3, 
E_V4DFmode) != 0
          || !(
#line 13623 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 529 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 5450; /* avx512vl_scalefv4df */

    case E_V2DFmode:
      if (pattern60 (x3, 
E_V2DFmode) != 0
          || !(
#line 13623 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 529 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 5454; /* avx512vl_scalefv2df */

    default:
      return -1;
    }
}

 int
recog_244 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XVECEXP (x2, 0, 2);
  if (GET_MODE (x3) != E_V16QImode)
    return -1;
  x4 = XEXP (x1, 0);
  if (GET_CODE (x4) != MEM
      || GET_MODE (x4) != E_V16QImode)
    return -1;
  x5 = XEXP (x4, 0);
  operands[0] = x5;
  if (GET_MODE (x2) != E_V16QImode)
    return -1;
  switch (pattern1068 (x2, 
E_V16QImode))
    {
    case 0:
      if (!(
#line 22461 "../../gcc/config/i386/sse.md"
(TARGET_SSE2) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode)))
        return -1;
      return 8576; /* *sse2_maskmovdqu */

    case 1:
      if (!(
#line 22461 "../../gcc/config/i386/sse.md"
(TARGET_SSE2) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode)))
        return -1;
      return 8577; /* *sse2_maskmovdqu */

    default:
      return -1;
    }
}

 int
recog_246 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XVECEXP (x2, 0, 0);
  operands[1] = x3;
  x4 = XVECEXP (x2, 0, 2);
  switch (GET_CODE (x4))
    {
    case REG:
    case SUBREG:
    case MEM:
      switch (GET_CODE (x4))
        {
        case MEM:
          res = recog_244 (x1, insn, pnum_clobbers);
          if (res >= 0)
            return res;
          break;

        case REG:
        case SUBREG:
          operands[2] = x4;
          x5 = XEXP (x1, 0);
          operands[0] = x5;
          x6 = XVECEXP (x2, 0, 1);
          if (rtx_equal_p (x6, operands[0]))
            {
              switch (GET_MODE (operands[0]))
                {
                case E_V16SImode:
                  if (pattern916 (x2, 
E_HImode, 
E_V16SImode) == 0
                      && (
#line 28733 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 295 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                    return 9498; /* avx512f_storev16si_mask */
                  break;

                case E_V8DImode:
                  if (pattern916 (x2, 
E_QImode, 
E_V8DImode) == 0
                      && (
#line 28733 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 296 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                    return 9501; /* avx512f_storev8di_mask */
                  break;

                case E_V16SFmode:
                  if (pattern916 (x2, 
E_HImode, 
E_V16SFmode) == 0
                      && (
#line 28733 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 297 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                    return 9504; /* avx512f_storev16sf_mask */
                  break;

                case E_V8SFmode:
                  if (pattern916 (x2, 
E_QImode, 
E_V8SFmode) == 0
                      && (
#line 28733 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 297 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                    return 9505; /* avx512vl_storev8sf_mask */
                  break;

                case E_V4SFmode:
                  if (pattern916 (x2, 
E_QImode, 
E_V4SFmode) == 0
                      && (
#line 28733 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 297 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                    return 9506; /* avx512vl_storev4sf_mask */
                  break;

                case E_V8DFmode:
                  if (pattern916 (x2, 
E_QImode, 
E_V8DFmode) == 0
                      && (
#line 28733 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 298 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                    return 9507; /* avx512f_storev8df_mask */
                  break;

                case E_V4DFmode:
                  if (pattern916 (x2, 
E_QImode, 
E_V4DFmode) == 0
                      && (
#line 28733 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 298 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                    return 9508; /* avx512vl_storev4df_mask */
                  break;

                case E_V2DFmode:
                  if (pattern916 (x2, 
E_QImode, 
E_V2DFmode) == 0
                      && (
#line 28733 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 298 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                    return 9509; /* avx512vl_storev2df_mask */
                  break;

                case E_V64QImode:
                  if (pattern916 (x2, 
E_DImode, 
E_V64QImode) == 0
                      && (
#line 28762 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 322 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                    return 9510; /* avx512bw_storev64qi_mask */
                  break;

                case E_V16QImode:
                  if (pattern916 (x2, 
E_HImode, 
E_V16QImode) == 0
                      && (
#line 28762 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 322 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                    return 9511; /* avx512vl_storev16qi_mask */
                  break;

                case E_V32QImode:
                  if (pattern916 (x2, 
E_SImode, 
E_V32QImode) == 0
                      && (
#line 28762 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 322 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                    return 9512; /* avx512vl_storev32qi_mask */
                  break;

                case E_V32HImode:
                  if (pattern916 (x2, 
E_SImode, 
E_V32HImode) == 0
                      && (
#line 28762 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 323 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                    return 9513; /* avx512bw_storev32hi_mask */
                  break;

                case E_V16HImode:
                  if (pattern916 (x2, 
E_HImode, 
E_V16HImode) == 0
                      && (
#line 28762 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 323 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                    return 9514; /* avx512vl_storev16hi_mask */
                  break;

                case E_V8HImode:
                  if (pattern916 (x2, 
E_QImode, 
E_V8HImode) == 0
                      && (
#line 28762 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 323 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                    return 9515; /* avx512vl_storev8hi_mask */
                  break;

                case E_V32HFmode:
                  if (pattern916 (x2, 
E_SImode, 
E_V32HFmode) == 0
                      && (
#line 28762 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 324 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                    return 9516; /* avx512bw_storev32hf_mask */
                  break;

                case E_V16HFmode:
                  if (pattern916 (x2, 
E_HImode, 
E_V16HFmode) == 0
                      && (
#line 28762 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 324 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                    return 9517; /* avx512vl_storev16hf_mask */
                  break;

                case E_V8HFmode:
                  if (pattern916 (x2, 
E_QImode, 
E_V8HFmode) == 0
                      && (
#line 28762 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 324 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                    return 9518; /* avx512fp16_storev8hf_mask */
                  break;

                case E_V32BFmode:
                  if (pattern916 (x2, 
E_SImode, 
E_V32BFmode) == 0
                      && (
#line 28762 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 325 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                    return 9519; /* avx512bw_storev32bf_mask */
                  break;

                case E_V16BFmode:
                  if (pattern916 (x2, 
E_HImode, 
E_V16BFmode) == 0
                      && (
#line 28762 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 325 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                    return 9520; /* avx512vl_storev16bf_mask */
                  break;

                case E_V8BFmode:
                  if (pattern916 (x2, 
E_QImode, 
E_V8BFmode) == 0
                      && (
#line 28762 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 325 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                    return 9521; /* avx512vl_storev8bf_mask */
                  break;

                default:
                  break;
                }
            }
          break;

        default:
          break;
        }
      x5 = XEXP (x1, 0);
      operands[0] = x5;
      switch (GET_MODE (operands[0]))
        {
        case E_V4SFmode:
          if (pattern788 (x2, 
E_V4SFmode, 
E_V4SImode) != 0
              || !
#line 28642 "../../gcc/config/i386/sse.md"
(TARGET_AVX))
            return -1;
          return 9490; /* avx_maskstoreps */

        case E_V2DFmode:
          if (pattern788 (x2, 
E_V2DFmode, 
E_V2DImode) != 0
              || !
#line 28642 "../../gcc/config/i386/sse.md"
(TARGET_AVX))
            return -1;
          return 9491; /* avx_maskstorepd */

        case E_V4DImode:
          if (!memory_operand (operands[0], E_V4DImode)
              || GET_MODE (x2) != E_V4DImode
              || !register_operand (operands[1], E_V4DImode))
            return -1;
          x6 = XVECEXP (x2, 0, 1);
          operands[2] = x6;
          if (register_operand (operands[2], E_V4DImode)
              && rtx_equal_p (x4, operands[0])
              && 
#line 28642 "../../gcc/config/i386/sse.md"
(TARGET_AVX))
            return 9492; /* avx2_maskstoreq256 */
          operands[2] = x4;
          if (!register_operand (operands[2], E_QImode)
              || !rtx_equal_p (x6, operands[0])
              || !(
#line 28733 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 296 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 9502; /* avx512vl_storev4di_mask */

        case E_V2DImode:
          if (!memory_operand (operands[0], E_V2DImode)
              || GET_MODE (x2) != E_V2DImode
              || !register_operand (operands[1], E_V2DImode))
            return -1;
          x6 = XVECEXP (x2, 0, 1);
          operands[2] = x6;
          if (register_operand (operands[2], E_V2DImode)
              && rtx_equal_p (x4, operands[0])
              && 
#line 28642 "../../gcc/config/i386/sse.md"
(TARGET_AVX))
            return 9493; /* avx2_maskstoreq */
          operands[2] = x4;
          if (!register_operand (operands[2], E_QImode)
              || !rtx_equal_p (x6, operands[0])
              || !(
#line 28733 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 296 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 9503; /* avx512vl_storev2di_mask */

        case E_V8SFmode:
          if (pattern788 (x2, 
E_V8SFmode, 
E_V8SImode) != 0
              || !
#line 28642 "../../gcc/config/i386/sse.md"
(TARGET_AVX))
            return -1;
          return 9494; /* avx_maskstoreps256 */

        case E_V4DFmode:
          if (pattern788 (x2, 
E_V4DFmode, 
E_V4DImode) != 0
              || !
#line 28642 "../../gcc/config/i386/sse.md"
(TARGET_AVX))
            return -1;
          return 9495; /* avx_maskstorepd256 */

        case E_V8SImode:
          if (!memory_operand (operands[0], E_V8SImode)
              || GET_MODE (x2) != E_V8SImode
              || !register_operand (operands[1], E_V8SImode))
            return -1;
          x6 = XVECEXP (x2, 0, 1);
          operands[2] = x6;
          if (register_operand (operands[2], E_V8SImode)
              && rtx_equal_p (x4, operands[0])
              && 
#line 28642 "../../gcc/config/i386/sse.md"
(TARGET_AVX))
            return 9496; /* avx2_maskstored256 */
          operands[2] = x4;
          if (!register_operand (operands[2], E_QImode)
              || !rtx_equal_p (x6, operands[0])
              || !(
#line 28733 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 295 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 9499; /* avx512vl_storev8si_mask */

        case E_V4SImode:
          if (!memory_operand (operands[0], E_V4SImode)
              || GET_MODE (x2) != E_V4SImode
              || !register_operand (operands[1], E_V4SImode))
            return -1;
          x6 = XVECEXP (x2, 0, 1);
          operands[2] = x6;
          if (register_operand (operands[2], E_V4SImode)
              && rtx_equal_p (x4, operands[0])
              && 
#line 28642 "../../gcc/config/i386/sse.md"
(TARGET_AVX))
            return 9497; /* avx2_maskstored */
          operands[2] = x4;
          if (!register_operand (operands[2], E_QImode)
              || !rtx_equal_p (x6, operands[0])
              || !(
#line 28733 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 295 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 9500; /* avx512vl_storev4si_mask */

        default:
          return -1;
        }

    case CONST_INT:
    case CONST_DOUBLE:
    case CONST_VECTOR:
      operands[2] = x4;
      x5 = XEXP (x1, 0);
      operands[0] = x5;
      switch (pattern790 (x2))
        {
        case 0:
          if (!(
#line 28776 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && ix86_pre_reload_split ()) && 
#line 332 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 9522; /* *avx512bw_storev64qi_mask_1 */

        case 1:
          if (!(
#line 28776 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && ix86_pre_reload_split ()) && 
#line 332 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 9523; /* *avx512vl_storev32qi_mask_1 */

        case 2:
          if (!
#line 28776 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && ix86_pre_reload_split ()))
            return -1;
          return 9524; /* *avx512vl_storev16qi_mask_1 */

        case 3:
          if (!(
#line 28776 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && ix86_pre_reload_split ()) && 
#line 333 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 9525; /* *avx512bw_storev32hi_mask_1 */

        case 4:
          if (!(
#line 28776 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && ix86_pre_reload_split ()) && 
#line 333 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 9526; /* *avx512vl_storev16hi_mask_1 */

        case 5:
          if (!
#line 28776 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && ix86_pre_reload_split ()))
            return -1;
          return 9527; /* *avx512vl_storev8hi_mask_1 */

        case 6:
          if (!(
#line 28776 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && ix86_pre_reload_split ()) && 
#line 334 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 9528; /* *avx512f_storev16si_mask_1 */

        case 7:
          if (!(
#line 28776 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && ix86_pre_reload_split ()) && 
#line 334 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 9529; /* *avx512vl_storev8si_mask_1 */

        case 8:
          if (!
#line 28776 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && ix86_pre_reload_split ()))
            return -1;
          return 9530; /* *avx512vl_storev4si_mask_1 */

        case 9:
          if (!(
#line 28776 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && ix86_pre_reload_split ()) && 
#line 335 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 9531; /* *avx512f_storev8di_mask_1 */

        case 10:
          if (!(
#line 28776 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && ix86_pre_reload_split ()) && 
#line 335 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 9532; /* *avx512vl_storev4di_mask_1 */

        case 11:
          if (!
#line 28776 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && ix86_pre_reload_split ()))
            return -1;
          return 9533; /* *avx512vl_storev2di_mask_1 */

        case 12:
          if (!(
#line 28776 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && ix86_pre_reload_split ()) && 
#line 336 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 9534; /* *avx512bw_storev32hf_mask_1 */

        case 13:
          if (!(
#line 28776 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && ix86_pre_reload_split ()) && 
#line 336 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 9535; /* *avx512vl_storev16hf_mask_1 */

        case 14:
          if (!
#line 28776 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && ix86_pre_reload_split ()))
            return -1;
          return 9536; /* *avx512fp16_storev8hf_mask_1 */

        case 15:
          if (!(
#line 28776 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && ix86_pre_reload_split ()) && 
#line 337 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 9537; /* *avx512bw_storev32bf_mask_1 */

        case 16:
          if (!(
#line 28776 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && ix86_pre_reload_split ()) && 
#line 337 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 9538; /* *avx512vl_storev16bf_mask_1 */

        case 17:
          if (!
#line 28776 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && ix86_pre_reload_split ()))
            return -1;
          return 9539; /* *avx512vl_storev8bf_mask_1 */

        case 18:
          if (!(
#line 28776 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && ix86_pre_reload_split ()) && 
#line 338 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 9540; /* *avx512f_storev16sf_mask_1 */

        case 19:
          if (!(
#line 28776 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && ix86_pre_reload_split ()) && 
#line 338 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 9541; /* *avx512vl_storev8sf_mask_1 */

        case 20:
          if (!
#line 28776 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && ix86_pre_reload_split ()))
            return -1;
          return 9542; /* *avx512vl_storev4sf_mask_1 */

        case 21:
          if (!(
#line 28776 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && ix86_pre_reload_split ()) && 
#line 339 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 9543; /* *avx512f_storev8df_mask_1 */

        case 22:
          if (!(
#line 28776 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && ix86_pre_reload_split ()) && 
#line 339 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 9544; /* *avx512vl_storev4df_mask_1 */

        case 23:
          if (!(
#line 28776 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && ix86_pre_reload_split ()) && 
#line 339 "../../gcc/config/i386/sse.md"
(TARGET_SSE2)))
            return -1;
          return 9545; /* *avx512vl_storev2df_mask_1 */

        default:
          return -1;
        }

    default:
      return -1;
    }
}

 int
recog_252 (rtx x1 ATTRIBUTE_UNUSED,
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
  switch (GET_MODE (operands[0]))
    {
    case E_V16SImode:
      if (pattern915 (x3, 
E_HImode, 
E_V16SImode) != 0
          || !(
#line 29654 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 1010 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 9884; /* avx512f_compressv16si_mask */

    case E_V16SFmode:
      if (pattern915 (x3, 
E_HImode, 
E_V16SFmode) != 0
          || !(
#line 29654 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 1010 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 9885; /* avx512f_compressv16sf_mask */

    case E_V8DImode:
      if (pattern915 (x3, 
E_QImode, 
E_V8DImode) != 0
          || !(
#line 29654 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 1011 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 9886; /* avx512f_compressv8di_mask */

    case E_V8DFmode:
      if (pattern915 (x3, 
E_QImode, 
E_V8DFmode) != 0
          || !(
#line 29654 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 1011 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 9887; /* avx512f_compressv8df_mask */

    case E_V8SImode:
      if (pattern915 (x3, 
E_QImode, 
E_V8SImode) != 0
          || !(
#line 29654 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 1012 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 9888; /* avx512vl_compressv8si_mask */

    case E_V8SFmode:
      if (pattern915 (x3, 
E_QImode, 
E_V8SFmode) != 0
          || !(
#line 29654 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 1012 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 9889; /* avx512vl_compressv8sf_mask */

    case E_V4DImode:
      if (pattern915 (x3, 
E_QImode, 
E_V4DImode) != 0
          || !(
#line 29654 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 1013 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 9890; /* avx512vl_compressv4di_mask */

    case E_V4DFmode:
      if (pattern915 (x3, 
E_QImode, 
E_V4DFmode) != 0
          || !(
#line 29654 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 1013 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 9891; /* avx512vl_compressv4df_mask */

    case E_V4SImode:
      if (pattern915 (x3, 
E_QImode, 
E_V4SImode) != 0
          || !(
#line 29654 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 1014 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 9892; /* avx512vl_compressv4si_mask */

    case E_V4SFmode:
      if (pattern915 (x3, 
E_QImode, 
E_V4SFmode) != 0
          || !(
#line 29654 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 1014 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 9893; /* avx512vl_compressv4sf_mask */

    case E_V2DImode:
      if (pattern915 (x3, 
E_QImode, 
E_V2DImode) != 0
          || !(
#line 29654 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 1015 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 9894; /* avx512vl_compressv2di_mask */

    case E_V2DFmode:
      if (pattern915 (x3, 
E_QImode, 
E_V2DFmode) != 0
          || !(
#line 29654 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 1015 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 9895; /* avx512vl_compressv2df_mask */

    case E_V64QImode:
      if (pattern915 (x3, 
E_DImode, 
E_V64QImode) != 0
          || !(
#line 29667 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VBMI2) && 
#line 318 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 9896; /* compressv64qi_mask */

    case E_V16QImode:
      if (pattern915 (x3, 
E_HImode, 
E_V16QImode) != 0
          || !(
#line 29667 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VBMI2) && 
#line 318 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 9897; /* compressv16qi_mask */

    case E_V32QImode:
      if (pattern915 (x3, 
E_SImode, 
E_V32QImode) != 0
          || !(
#line 29667 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VBMI2) && 
#line 318 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 9898; /* compressv32qi_mask */

    case E_V32HImode:
      if (pattern915 (x3, 
E_SImode, 
E_V32HImode) != 0
          || !(
#line 29667 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VBMI2) && 
#line 319 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 9899; /* compressv32hi_mask */

    case E_V16HImode:
      if (pattern915 (x3, 
E_HImode, 
E_V16HImode) != 0
          || !(
#line 29667 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VBMI2) && 
#line 319 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 9900; /* compressv16hi_mask */

    case E_V8HImode:
      if (pattern915 (x3, 
E_QImode, 
E_V8HImode) != 0
          || !(
#line 29667 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VBMI2) && 
#line 319 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 9901; /* compressv8hi_mask */

    default:
      return -1;
    }
}

 int
recog_258 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  switch (pattern173 (x1))
    {
    case 0:
      if (!(
#line 30418 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VBMI2) && 
#line 758 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 10215; /* vpshrdv_v32hi */

    case 1:
      if (!(
#line 30418 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VBMI2) && 
#line 758 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 10216; /* vpshrdv_v16si */

    case 2:
      if (!(
#line 30418 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VBMI2) && 
#line 758 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 10217; /* vpshrdv_v8di */

    case 3:
      if (!(
#line 30418 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VBMI2) && 
#line 759 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 10218; /* vpshrdv_v16hi */

    case 4:
      if (!(
#line 30418 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VBMI2) && 
#line 759 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 10219; /* vpshrdv_v8si */

    case 5:
      if (!(
#line 30418 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VBMI2) && 
#line 760 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 10220; /* vpshrdv_v4di */

    case 6:
      if (!(
#line 30418 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VBMI2) && 
#line 760 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 10221; /* vpshrdv_v8hi */

    case 7:
      if (!(
#line 30418 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VBMI2) && 
#line 761 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 10222; /* vpshrdv_v4si */

    case 8:
      if (!(
#line 30418 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VBMI2) && 
#line 761 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 10223; /* vpshrdv_v2di */

    default:
      return -1;
    }
}

 int
recog_263 (rtx x1 ATTRIBUTE_UNUSED,
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
  switch (pattern667 (x3))
    {
    case 0:
      if ((
#line 7147 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && 1 && 1) && 
#line 555 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return 4321; /* fma_fmaddc_v32hf */
      break;

    case 1:
      if ((
#line 7147 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && 1 && 1) && 
#line 555 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return 4329; /* fma_fmaddc_v16hf */
      break;

    case 2:
      if ((
#line 7147 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && 1 && 1) && 
#line 555 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return 4337; /* fma_fmaddc_v8hf */
      break;

    default:
      break;
    }
  if (GET_CODE (x5) != SUBREG
      || maybe_ne (SUBREG_BYTE (x5), 0))
    return -1;
  switch (pattern593 (x3))
    {
    case 0:
      if (!(
#line 7226 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && ix86_pre_reload_split ()) && 
#line 555 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 4359; /* fma_v32hf_fmaddc_bcst */

    case 1:
      if (!(
#line 7226 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && ix86_pre_reload_split ()) && 
#line 555 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 4360; /* fma_v16hf_fmaddc_bcst */

    case 2:
      if (!(
#line 7226 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && ix86_pre_reload_split ()) && 
#line 555 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 4361; /* fma_v8hf_fmaddc_bcst */

    default:
      return -1;
    }
}

 int
recog_268 (rtx x1 ATTRIBUTE_UNUSED,
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
  switch (GET_CODE (x4))
    {
    case REG:
    case SUBREG:
    case MEM:
      switch (GET_MODE (operands[0]))
        {
        case E_V4SFmode:
          if (pattern795 (x2, 
E_V2SFmode, 
E_V4SFmode) == 0
              && 
#line 11832 "../../gcc/config/i386/sse.md"
(TARGET_SSE))
            return 5286; /* *vec_concatv4sf */
          break;

        case E_V8HFmode:
          if (pattern795 (x2, 
E_V4HFmode, 
E_V8HFmode) == 0
              && 
#line 11832 "../../gcc/config/i386/sse.md"
(TARGET_SSE))
            return 5287; /* *vec_concatv8hf */
          break;

        case E_V8BFmode:
          if (pattern795 (x2, 
E_V4BFmode, 
E_V8BFmode) == 0
              && 
#line 11832 "../../gcc/config/i386/sse.md"
(TARGET_SSE))
            return 5288; /* *vec_concatv8bf */
          break;

        case E_V16QImode:
          if (pattern795 (x2, 
E_V8QImode, 
E_V16QImode) == 0
              && 
#line 21572 "../../gcc/config/i386/sse.md"
(TARGET_SSE))
            return 8478; /* *vec_concatv16qi */
          break;

        case E_V8HImode:
          if (pattern795 (x2, 
E_V4HImode, 
E_V8HImode) == 0
              && 
#line 21572 "../../gcc/config/i386/sse.md"
(TARGET_SSE))
            return 8479; /* *vec_concatv8hi */
          break;

        case E_V4SImode:
          if (pattern795 (x2, 
E_V2SImode, 
E_V4SImode) == 0
              && 
#line 21572 "../../gcc/config/i386/sse.md"
(TARGET_SSE))
            return 8480; /* *vec_concatv4si */
          break;

        case E_V2DImode:
          if (pattern795 (x2, 
E_DImode, 
E_V2DImode) == 0
              && 
#line 21660 "../../gcc/config/i386/sse.md"
(TARGET_SSE))
            return 8486; /* vec_concatv2di */
          break;

        case E_V32QImode:
          if (register_operand (operands[0], E_V32QImode)
              && GET_MODE (x2) == E_V32QImode
              && rtx_equal_p (x4, operands[1]))
            {
              if (memory_operand (operands[1], E_V16QImode)
                  && 
#line 27886 "../../gcc/config/i386/sse.md"
(TARGET_AVX2))
                return 9289; /* avx2_vbroadcasti128_v32qi */
              if (nonimmediate_operand (operands[1], E_V16QImode)
                  && 
#line 28000 "../../gcc/config/i386/sse.md"
(TARGET_AVX))
                return 9308; /* avx_vbroadcastf128_v32qi */
            }
          break;

        case E_V16HImode:
          if (register_operand (operands[0], E_V16HImode)
              && GET_MODE (x2) == E_V16HImode
              && rtx_equal_p (x4, operands[1]))
            {
              if (memory_operand (operands[1], E_V8HImode)
                  && 
#line 27886 "../../gcc/config/i386/sse.md"
(TARGET_AVX2))
                return 9290; /* avx2_vbroadcasti128_v16hi */
              if (nonimmediate_operand (operands[1], E_V8HImode)
                  && 
#line 28000 "../../gcc/config/i386/sse.md"
(TARGET_AVX))
                return 9309; /* avx_vbroadcastf128_v16hi */
            }
          break;

        case E_V8SImode:
          if (register_operand (operands[0], E_V8SImode)
              && GET_MODE (x2) == E_V8SImode
              && rtx_equal_p (x4, operands[1]))
            {
              if (memory_operand (operands[1], E_V4SImode)
                  && 
#line 27886 "../../gcc/config/i386/sse.md"
(TARGET_AVX2))
                return 9291; /* avx2_vbroadcasti128_v8si */
              if (nonimmediate_operand (operands[1], E_V4SImode)
                  && 
#line 28000 "../../gcc/config/i386/sse.md"
(TARGET_AVX))
                return 9310; /* avx_vbroadcastf128_v8si */
            }
          break;

        case E_V4DImode:
          if (register_operand (operands[0], E_V4DImode)
              && GET_MODE (x2) == E_V4DImode
              && memory_operand (operands[1], E_V2DImode)
              && rtx_equal_p (x4, operands[1])
              && 
#line 27886 "../../gcc/config/i386/sse.md"
(TARGET_AVX2))
            return 9292; /* avx2_vbroadcasti128_v4di */
          break;

        case E_V8SFmode:
          if (pattern796 (x2, 
E_V4SFmode, 
E_V8SFmode) == 0
              && 
#line 28000 "../../gcc/config/i386/sse.md"
(TARGET_AVX))
            return 9312; /* avx_vbroadcastf128_v8sf */
          break;

        case E_V4DFmode:
          if (pattern796 (x2, 
E_V2DFmode, 
E_V4DFmode) == 0
              && 
#line 28000 "../../gcc/config/i386/sse.md"
(TARGET_AVX))
            return 9313; /* avx_vbroadcastf128_v4df */
          break;

        case E_V16HFmode:
          if (pattern796 (x2, 
E_V8HFmode, 
E_V16HFmode) == 0
              && 
#line 28000 "../../gcc/config/i386/sse.md"
(TARGET_AVX))
            return 9314; /* avx_vbroadcastf128_v16hf */
          break;

        case E_V16BFmode:
          if (pattern796 (x2, 
E_V8BFmode, 
E_V16BFmode) == 0
              && 
#line 28000 "../../gcc/config/i386/sse.md"
(TARGET_AVX))
            return 9315; /* avx_vbroadcastf128_v16bf */
          break;

        default:
          break;
        }
      break;

    case CONST_INT:
    case CONST_DOUBLE:
    case CONST_VECTOR:
      operands[2] = x4;
      switch (GET_MODE (operands[0]))
        {
        case E_V4SFmode:
          if (pattern923 (x2, 
E_V2SFmode, 
E_V4SFmode) == 0
              && 
#line 11848 "../../gcc/config/i386/sse.md"
(TARGET_SSE2))
            return 5289; /* *vec_concatv4sf_0 */
          break;

        case E_V8HFmode:
          if (pattern923 (x2, 
E_V4HFmode, 
E_V8HFmode) == 0
              && 
#line 11848 "../../gcc/config/i386/sse.md"
(TARGET_SSE2))
            return 5290; /* *vec_concatv8hf_0 */
          break;

        case E_V8BFmode:
          if (pattern923 (x2, 
E_V4BFmode, 
E_V8BFmode) == 0
              && 
#line 11848 "../../gcc/config/i386/sse.md"
(TARGET_SSE2))
            return 5291; /* *vec_concatv8bf_0 */
          break;

        case E_V16QImode:
          if (pattern923 (x2, 
E_V8QImode, 
E_V16QImode) == 0
              && 
#line 21643 "../../gcc/config/i386/sse.md"
(TARGET_SSE2))
            return 8483; /* *vec_concatv16qi_0 */
          break;

        case E_V8HImode:
          if (pattern923 (x2, 
E_V4HImode, 
E_V8HImode) == 0
              && 
#line 21643 "../../gcc/config/i386/sse.md"
(TARGET_SSE2))
            return 8484; /* *vec_concatv8hi_0 */
          break;

        case E_V4SImode:
          if (pattern923 (x2, 
E_V2SImode, 
E_V4SImode) == 0
              && 
#line 21643 "../../gcc/config/i386/sse.md"
(TARGET_SSE2))
            return 8485; /* *vec_concatv4si_0 */
          break;

        case E_V2DImode:
          if (pattern923 (x2, 
E_DImode, 
E_V2DImode) == 0
              && 
#line 21721 "../../gcc/config/i386/sse.md"
(TARGET_SSE2))
            return 8487; /* *vec_concatv2di_0 */
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
    case E_V2DFmode:
      if (pattern797 (x2, 
E_DFmode, 
E_V2DFmode) != 0
          || !
#line 14909 "../../gcc/config/i386/sse.md"
(TARGET_SSE && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
        return -1;
      return 7217; /* vec_concatv2df */

    case E_V32QImode:
      if (pattern797 (x2, 
E_V16QImode, 
E_V32QImode) != 0
          || !
#line 28945 "../../gcc/config/i386/sse.md"
(TARGET_AVX
   && (operands[2] == CONST0_RTX (V16QImode)
       || !MEM_P (operands[1]))))
        return -1;
      return 9603; /* avx_vec_concatv32qi */

    case E_V16HImode:
      if (pattern797 (x2, 
E_V8HImode, 
E_V16HImode) != 0
          || !
#line 28945 "../../gcc/config/i386/sse.md"
(TARGET_AVX
   && (operands[2] == CONST0_RTX (V8HImode)
       || !MEM_P (operands[1]))))
        return -1;
      return 9604; /* avx_vec_concatv16hi */

    case E_V16HFmode:
      if (pattern797 (x2, 
E_V8HFmode, 
E_V16HFmode) != 0
          || !
#line 28945 "../../gcc/config/i386/sse.md"
(TARGET_AVX
   && (operands[2] == CONST0_RTX (V8HFmode)
       || !MEM_P (operands[1]))))
        return -1;
      return 9605; /* avx_vec_concatv16hf */

    case E_V16BFmode:
      if (pattern797 (x2, 
E_V8BFmode, 
E_V16BFmode) != 0
          || !
#line 28945 "../../gcc/config/i386/sse.md"
(TARGET_AVX
   && (operands[2] == CONST0_RTX (V8BFmode)
       || !MEM_P (operands[1]))))
        return -1;
      return 9606; /* avx_vec_concatv16bf */

    case E_V8SImode:
      if (pattern797 (x2, 
E_V4SImode, 
E_V8SImode) != 0
          || !
#line 28945 "../../gcc/config/i386/sse.md"
(TARGET_AVX
   && (operands[2] == CONST0_RTX (V4SImode)
       || !MEM_P (operands[1]))))
        return -1;
      return 9607; /* avx_vec_concatv8si */

    case E_V8SFmode:
      if (pattern797 (x2, 
E_V4SFmode, 
E_V8SFmode) != 0
          || !
#line 28945 "../../gcc/config/i386/sse.md"
(TARGET_AVX
   && (operands[2] == CONST0_RTX (V4SFmode)
       || !MEM_P (operands[1]))))
        return -1;
      return 9609; /* avx_vec_concatv8sf */

    case E_V4DFmode:
      if (pattern797 (x2, 
E_V2DFmode, 
E_V4DFmode) != 0
          || !
#line 28945 "../../gcc/config/i386/sse.md"
(TARGET_AVX
   && (operands[2] == CONST0_RTX (V2DFmode)
       || !MEM_P (operands[1]))))
        return -1;
      return 9610; /* avx_vec_concatv4df */

    case E_V64QImode:
      if (pattern797 (x2, 
E_V32QImode, 
E_V64QImode) != 0
          || !(
#line 28945 "../../gcc/config/i386/sse.md"
(TARGET_AVX
   && (operands[2] == CONST0_RTX (V32QImode)
       || !MEM_P (operands[1]))) && 
#line 364 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
        return -1;
      return 9611; /* avx_vec_concatv64qi */

    case E_V32HImode:
      if (pattern797 (x2, 
E_V16HImode, 
E_V32HImode) != 0
          || !(
#line 28945 "../../gcc/config/i386/sse.md"
(TARGET_AVX
   && (operands[2] == CONST0_RTX (V16HImode)
       || !MEM_P (operands[1]))) && 
#line 365 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
        return -1;
      return 9612; /* avx_vec_concatv32hi */

    case E_V32HFmode:
      if (pattern797 (x2, 
E_V16HFmode, 
E_V32HFmode) != 0
          || !(
#line 28945 "../../gcc/config/i386/sse.md"
(TARGET_AVX
   && (operands[2] == CONST0_RTX (V16HFmode)
       || !MEM_P (operands[1]))) && 
#line 366 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
        return -1;
      return 9613; /* avx_vec_concatv32hf */

    case E_V32BFmode:
      if (pattern797 (x2, 
E_V16BFmode, 
E_V32BFmode) != 0
          || !(
#line 28945 "../../gcc/config/i386/sse.md"
(TARGET_AVX
   && (operands[2] == CONST0_RTX (V16BFmode)
       || !MEM_P (operands[1]))) && 
#line 367 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
        return -1;
      return 9614; /* avx_vec_concatv32bf */

    case E_V16SImode:
      if (pattern797 (x2, 
E_V8SImode, 
E_V16SImode) != 0
          || !(
#line 28945 "../../gcc/config/i386/sse.md"
(TARGET_AVX
   && (operands[2] == CONST0_RTX (V8SImode)
       || !MEM_P (operands[1]))) && 
#line 368 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
        return -1;
      return 9615; /* avx_vec_concatv16si */

    case E_V8DImode:
      if (pattern797 (x2, 
E_V4DImode, 
E_V8DImode) != 0
          || !(
#line 28945 "../../gcc/config/i386/sse.md"
(TARGET_AVX
   && (operands[2] == CONST0_RTX (V4DImode)
       || !MEM_P (operands[1]))) && 
#line 369 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
        return -1;
      return 9616; /* avx_vec_concatv8di */

    case E_V16SFmode:
      if (pattern797 (x2, 
E_V8SFmode, 
E_V16SFmode) != 0
          || !(
#line 28945 "../../gcc/config/i386/sse.md"
(TARGET_AVX
   && (operands[2] == CONST0_RTX (V8SFmode)
       || !MEM_P (operands[1]))) && 
#line 370 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
        return -1;
      return 9617; /* avx_vec_concatv16sf */

    case E_V8DFmode:
      if (pattern797 (x2, 
E_V4DFmode, 
E_V8DFmode) != 0
          || !(
#line 28945 "../../gcc/config/i386/sse.md"
(TARGET_AVX
   && (operands[2] == CONST0_RTX (V4DFmode)
       || !MEM_P (operands[1]))) && 
#line 371 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
        return -1;
      return 9618; /* avx_vec_concatv8df */

    default:
      return -1;
    }
}

 int
recog_272 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  operands[2] = x3;
  switch (GET_CODE (x2))
    {
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
      operands[3] = x2;
      switch (GET_MODE (operands[0]))
        {
        case E_V8SFmode:
          if (pattern799 (
E_V8SFmode) == 0)
            {
              if ((
#line 4330 "../../gcc/config/i386/sse.md"
(TARGET_SSE
   && GET_RTX_CLASS (GET_CODE (operands[3])) == RTX_COMM_COMPARE) && 
#line 422 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
                return 3265; /* *avx_maskcmpv8sf3_comm */
              if ((
#line 4347 "../../gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 422 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
                return 3269; /* avx_maskcmpv8sf3 */
            }
          break;

        case E_V4SFmode:
          if (pattern799 (
E_V4SFmode) == 0)
            {
              if (
#line 4330 "../../gcc/config/i386/sse.md"
(TARGET_SSE
   && GET_RTX_CLASS (GET_CODE (operands[3])) == RTX_COMM_COMPARE))
                return 3266; /* *sse_maskcmpv4sf3_comm */
              if (
#line 4347 "../../gcc/config/i386/sse.md"
(TARGET_SSE))
                return 3270; /* sse_maskcmpv4sf3 */
            }
          break;

        case E_V4DFmode:
          if (pattern799 (
E_V4DFmode) == 0)
            {
              if ((
#line 4330 "../../gcc/config/i386/sse.md"
(TARGET_SSE
   && GET_RTX_CLASS (GET_CODE (operands[3])) == RTX_COMM_COMPARE) && 
#line 423 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
                return 3267; /* *avx_maskcmpv4df3_comm */
              if ((
#line 4347 "../../gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 423 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
                return 3271; /* avx_maskcmpv4df3 */
            }
          break;

        case E_V2DFmode:
          if (pattern799 (
E_V2DFmode) == 0)
            {
              if ((
#line 4330 "../../gcc/config/i386/sse.md"
(TARGET_SSE
   && GET_RTX_CLASS (GET_CODE (operands[3])) == RTX_COMM_COMPARE) && 
#line 423 "../../gcc/config/i386/sse.md"
(TARGET_SSE2)))
                return 3268; /* *sse2_maskcmpv2df3_comm */
              if ((
#line 4347 "../../gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 423 "../../gcc/config/i386/sse.md"
(TARGET_SSE2)))
                return 3272; /* sse2_maskcmpv2df3 */
            }
          break;

        default:
          break;
        }
      break;

    default:
      break;
    }
  switch (GET_CODE (x2))
    {
    case LT:
      switch (GET_MODE (operands[0]))
        {
        case E_V16HImode:
          if (pattern231 (x2, 
E_V16HImode) != 0
              || !(
#line 17127 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_pre_reload_split ()) && 
#line 744 "../../gcc/config/i386/sse.md"
(TARGET_AVX2)))
            return -1;
          return 7619; /* *ashrv16hi3_1 */

        case E_V8HImode:
          if (pattern231 (x2, 
E_V8HImode) != 0
              || !
#line 17127 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_pre_reload_split ()))
            return -1;
          return 7620; /* *ashrv8hi3_1 */

        case E_V8SImode:
          if (pattern231 (x2, 
E_V8SImode) != 0
              || !(
#line 17127 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_pre_reload_split ()) && 
#line 745 "../../gcc/config/i386/sse.md"
(TARGET_AVX2)))
            return -1;
          return 7621; /* *ashrv8si3_1 */

        case E_V4SImode:
          if (pattern231 (x2, 
E_V4SImode) != 0
              || !
#line 17127 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_pre_reload_split ()))
            return -1;
          return 7622; /* *ashrv4si3_1 */

        default:
          return -1;
        }

    case EQ:
      switch (GET_MODE (operands[0]))
        {
        case E_V32QImode:
          if (pattern5 (x2, 
E_V32QImode) != 0
              || !
#line 17935 "../../gcc/config/i386/sse.md"
(TARGET_AVX2 && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
            return -1;
          return 7883; /* *avx2_eqv32qi3 */

        case E_V16HImode:
          if (pattern5 (x2, 
E_V16HImode) != 0
              || !
#line 17935 "../../gcc/config/i386/sse.md"
(TARGET_AVX2 && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
            return -1;
          return 7884; /* *avx2_eqv16hi3 */

        case E_V8SImode:
          if (pattern5 (x2, 
E_V8SImode) != 0
              || !
#line 17935 "../../gcc/config/i386/sse.md"
(TARGET_AVX2 && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
            return -1;
          return 7885; /* *avx2_eqv8si3 */

        case E_V4DImode:
          if (pattern5 (x2, 
E_V4DImode) != 0
              || !
#line 17935 "../../gcc/config/i386/sse.md"
(TARGET_AVX2 && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
            return -1;
          return 7886; /* *avx2_eqv4di3 */

        case E_V2DImode:
          if (pattern25 (x2, 
E_V2DImode) != 0
              || !
#line 18218 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1 && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
            return -1;
          return 7941; /* *sse4_1_eqv2di3 */

        case E_V16QImode:
          if (pattern25 (x2, 
E_V16QImode) != 0
              || !
#line 18235 "../../gcc/config/i386/sse.md"
(TARGET_SSE2
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
            return -1;
          return 7942; /* *sse2_eqv16qi3 */

        case E_V8HImode:
          if (pattern25 (x2, 
E_V8HImode) != 0
              || !
#line 18235 "../../gcc/config/i386/sse.md"
(TARGET_SSE2
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
            return -1;
          return 7943; /* *sse2_eqv8hi3 */

        case E_V4SImode:
          if (pattern25 (x2, 
E_V4SImode) != 0
              || !
#line 18235 "../../gcc/config/i386/sse.md"
(TARGET_SSE2
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
            return -1;
          return 7944; /* *sse2_eqv4si3 */

        default:
          return -1;
        }

    case GT:
      switch (GET_MODE (operands[0]))
        {
        case E_V2DImode:
          if (pattern670 (x2, 
E_V2DImode) != 0
              || !
#line 18251 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_2))
            return -1;
          return 7945; /* sse4_2_gtv2di3 */

        case E_V32QImode:
          if (pattern14 (x2, 
E_V32QImode) != 0
              || !
#line 18268 "../../gcc/config/i386/sse.md"
(TARGET_AVX2))
            return -1;
          return 7946; /* avx2_gtv32qi3 */

        case E_V16HImode:
          if (pattern14 (x2, 
E_V16HImode) != 0
              || !
#line 18268 "../../gcc/config/i386/sse.md"
(TARGET_AVX2))
            return -1;
          return 7947; /* avx2_gtv16hi3 */

        case E_V8SImode:
          if (pattern14 (x2, 
E_V8SImode) != 0
              || !
#line 18268 "../../gcc/config/i386/sse.md"
(TARGET_AVX2))
            return -1;
          return 7948; /* avx2_gtv8si3 */

        case E_V4DImode:
          if (pattern14 (x2, 
E_V4DImode) != 0
              || !
#line 18268 "../../gcc/config/i386/sse.md"
(TARGET_AVX2))
            return -1;
          return 7949; /* avx2_gtv4di3 */

        case E_V16QImode:
          if (pattern670 (x2, 
E_V16QImode) != 0
              || !
#line 18300 "../../gcc/config/i386/sse.md"
(TARGET_SSE2))
            return -1;
          return 7950; /* *sse2_gtv16qi3 */

        case E_V8HImode:
          if (pattern670 (x2, 
E_V8HImode) != 0
              || !
#line 18300 "../../gcc/config/i386/sse.md"
(TARGET_SSE2))
            return -1;
          return 7951; /* *sse2_gtv8hi3 */

        case E_V4SImode:
          if (pattern670 (x2, 
E_V4SImode) != 0
              || !
#line 18300 "../../gcc/config/i386/sse.md"
(TARGET_SSE2))
            return -1;
          return 7952; /* *sse2_gtv4si3 */

        default:
          return -1;
        }

    default:
      return -1;
    }
}

 int
recog_278 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12, x13;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  x4 = XVECEXP (x3, 0, 0);
  if (GET_CODE (x4) != CONST_INT)
    return -1;
  x5 = XVECEXP (x3, 0, 1);
  if (GET_CODE (x5) == CONST_INT)
    {
      res = recog_277 (x1, insn, pnum_clobbers);
      if (res >= 0)
        return res;
    }
  operands[3] = x4;
  x6 = XEXP (x2, 0);
  x7 = XEXP (x6, 1);
  operands[2] = x7;
  operands[4] = x5;
  x8 = XVECEXP (x3, 0, 2);
  operands[5] = x8;
  x9 = XVECEXP (x3, 0, 3);
  operands[6] = x9;
  x10 = XVECEXP (x3, 0, 4);
  operands[7] = x10;
  x11 = XVECEXP (x3, 0, 5);
  operands[8] = x11;
  x12 = XVECEXP (x3, 0, 6);
  operands[9] = x12;
  x13 = XVECEXP (x3, 0, 7);
  operands[10] = x13;
  switch (GET_MODE (operands[0]))
    {
    case E_V8SFmode:
      if (pattern1414 (x2, 
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
          && 
#line 11477 "../../gcc/config/i386/sse.md"
(TARGET_AVX
   && 1
   && (INTVAL (operands[3]) == (INTVAL (operands[7]) - 4)
       && INTVAL (operands[4]) == (INTVAL (operands[8]) - 4)
       && INTVAL (operands[5]) == (INTVAL (operands[9]) - 4)
       && INTVAL (operands[6]) == (INTVAL (operands[10]) - 4))))
        return 5268; /* avx_shufps256_1 */
      if (!const_0_to_7_operand (operands[3], E_VOIDmode)
          || pattern1670 () != 0
          || !
#line 20334 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL
   && (INTVAL (operands[3]) & 3) == 0
   && INTVAL (operands[3]) == INTVAL (operands[4]) - 1
   && INTVAL (operands[3]) == INTVAL (operands[5]) - 2
   && INTVAL (operands[3]) == INTVAL (operands[6]) - 3
   && (INTVAL (operands[7]) & 3) == 0
   && INTVAL (operands[7]) == INTVAL (operands[8]) - 1
   && INTVAL (operands[7]) == INTVAL (operands[9]) - 2
   && INTVAL (operands[7]) == INTVAL (operands[10]) - 3))
        return -1;
      return 8424; /* avx512vl_shuf_f32x4_1 */

    case E_V8DFmode:
      if (pattern1414 (x2, 
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
          && 
#line 14349 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512))
        return 7188; /* avx512f_shufpd512_1 */
      if (!const_0_to_7_operand (operands[3], E_VOIDmode)
          || pattern1670 () != 0
          || !(
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
(TARGET_EVEX512)))
        return -1;
      return 8414; /* avx512f_shuf_f64x2_1 */

    case E_V8DImode:
      if (pattern1671 (x2, 
E_V8DImode, 
E_V16DImode) != 0
          || !(
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
(TARGET_EVEX512)))
        return -1;
      return 8416; /* avx512f_shuf_i64x2_1 */

    case E_V8SImode:
      if (pattern1671 (x2, 
E_V8SImode, 
E_V16SImode) != 0
          || !
#line 20334 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL
   && (INTVAL (operands[3]) & 3) == 0
   && INTVAL (operands[3]) == INTVAL (operands[4]) - 1
   && INTVAL (operands[3]) == INTVAL (operands[5]) - 2
   && INTVAL (operands[3]) == INTVAL (operands[6]) - 3
   && (INTVAL (operands[7]) & 3) == 0
   && INTVAL (operands[7]) == INTVAL (operands[8]) - 1
   && INTVAL (operands[7]) == INTVAL (operands[9]) - 2
   && INTVAL (operands[7]) == INTVAL (operands[10]) - 3))
        return -1;
      return 8422; /* avx512vl_shuf_i32x4_1 */

    default:
      return -1;
    }
}

 int
recog_281 (rtx x1 ATTRIBUTE_UNUSED,
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
      x6 = XEXP (x2, 0);
      x7 = XEXP (x6, 1);
      operands[2] = x7;
      switch (XWINT (x4, 0))
        {
        case 1L:
          if (XWINT (x5, 0) == 3L)
            {
              switch (GET_MODE (operands[0]))
                {
                case E_V2DFmode:
                  if (pattern1488 (x2, 
E_V2DFmode, 
E_V4DFmode) == 0
                      && 
#line 13412 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_vec_interleave_v2df_operator_ok (operands, 1)))
                    return 5403; /* *vec_interleave_highv2df */
                  break;

                case E_V2DImode:
                  if (pattern1489 (x2, 
E_V2DImode, 
E_V4DImode) == 0
                      && 
#line 14495 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && 1))
                    return 7197; /* vec_interleave_highv2di */
                  break;

                default:
                  break;
                }
            }
          break;

        case 0L:
          if (XWINT (x5, 0) == 2L)
            {
              switch (GET_MODE (operands[0]))
                {
                case E_V2DFmode:
                  if (pattern1488 (x2, 
E_V2DFmode, 
E_V4DFmode) == 0
                      && 
#line 13555 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_vec_interleave_v2df_operator_ok (operands, 0)))
                    return 5413; /* *vec_interleave_lowv2df */
                  break;

                case E_V2DImode:
                  if (pattern1489 (x2, 
E_V2DImode, 
E_V4DImode) == 0
                      && 
#line 14545 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && 1))
                    return 7203; /* vec_interleave_lowv2di */
                  break;

                default:
                  break;
                }
            }
          break;

        default:
          break;
        }
    }
  operands[3] = x4;
  if (!const_0_to_1_operand (operands[3], E_VOIDmode))
    return -1;
  x6 = XEXP (x2, 0);
  x7 = XEXP (x6, 1);
  operands[2] = x7;
  operands[4] = x5;
  if (!const_2_to_3_operand (operands[4], E_VOIDmode))
    return -1;
  switch (GET_MODE (operands[0]))
    {
    case E_V2DImode:
      if (pattern1489 (x2, 
E_V2DImode, 
E_V4DImode) != 0
          || !
#line 14563 "../../gcc/config/i386/sse.md"
(TARGET_SSE2))
        return -1;
      return 7205; /* sse2_shufpd_v2di */

    case E_V2DFmode:
      if (pattern1489 (x2, 
E_V2DFmode, 
E_V4DFmode) != 0
          || !
#line 14563 "../../gcc/config/i386/sse.md"
(TARGET_SSE2))
        return -1;
      return 7206; /* sse2_shufpd_v2df */

    default:
      return -1;
    }
}

 int
recog_282 (rtx x1 ATTRIBUTE_UNUSED,
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
  rtx x66, x67;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  if (pattern673 (x3) != 0)
    return -1;
  x4 = XVECEXP (x3, 0, 32);
  if (GET_CODE (x4) != CONST_INT)
    return -1;
  x5 = XVECEXP (x3, 0, 33);
  if (GET_CODE (x5) != CONST_INT)
    return -1;
  x6 = XVECEXP (x3, 0, 34);
  if (GET_CODE (x6) != CONST_INT)
    return -1;
  x7 = XVECEXP (x3, 0, 35);
  if (GET_CODE (x7) != CONST_INT)
    return -1;
  x8 = XVECEXP (x3, 0, 36);
  if (GET_CODE (x8) != CONST_INT)
    return -1;
  x9 = XVECEXP (x3, 0, 37);
  if (GET_CODE (x9) != CONST_INT)
    return -1;
  x10 = XVECEXP (x3, 0, 38);
  if (GET_CODE (x10) != CONST_INT)
    return -1;
  x11 = XVECEXP (x3, 0, 39);
  if (GET_CODE (x11) != CONST_INT)
    return -1;
  x12 = XVECEXP (x3, 0, 40);
  if (GET_CODE (x12) != CONST_INT)
    return -1;
  x13 = XVECEXP (x3, 0, 41);
  if (GET_CODE (x13) != CONST_INT)
    return -1;
  x14 = XVECEXP (x3, 0, 42);
  if (GET_CODE (x14) != CONST_INT)
    return -1;
  x15 = XVECEXP (x3, 0, 43);
  if (GET_CODE (x15) != CONST_INT)
    return -1;
  x16 = XVECEXP (x3, 0, 44);
  if (GET_CODE (x16) != CONST_INT)
    return -1;
  x17 = XVECEXP (x3, 0, 45);
  if (GET_CODE (x17) != CONST_INT)
    return -1;
  x18 = XVECEXP (x3, 0, 46);
  if (GET_CODE (x18) != CONST_INT)
    return -1;
  x19 = XVECEXP (x3, 0, 47);
  if (GET_CODE (x19) != CONST_INT)
    return -1;
  x20 = XVECEXP (x3, 0, 48);
  if (GET_CODE (x20) != CONST_INT)
    return -1;
  x21 = XVECEXP (x3, 0, 49);
  if (GET_CODE (x21) != CONST_INT)
    return -1;
  x22 = XVECEXP (x3, 0, 50);
  if (GET_CODE (x22) != CONST_INT)
    return -1;
  x23 = XVECEXP (x3, 0, 51);
  if (GET_CODE (x23) != CONST_INT)
    return -1;
  x24 = XVECEXP (x3, 0, 52);
  if (GET_CODE (x24) != CONST_INT)
    return -1;
  x25 = XVECEXP (x3, 0, 53);
  if (GET_CODE (x25) != CONST_INT)
    return -1;
  x26 = XVECEXP (x3, 0, 54);
  if (GET_CODE (x26) != CONST_INT)
    return -1;
  x27 = XVECEXP (x3, 0, 55);
  if (GET_CODE (x27) != CONST_INT)
    return -1;
  x28 = XVECEXP (x3, 0, 56);
  if (GET_CODE (x28) != CONST_INT)
    return -1;
  x29 = XVECEXP (x3, 0, 57);
  if (GET_CODE (x29) != CONST_INT)
    return -1;
  x30 = XVECEXP (x3, 0, 58);
  if (GET_CODE (x30) != CONST_INT)
    return -1;
  x31 = XVECEXP (x3, 0, 59);
  if (GET_CODE (x31) != CONST_INT)
    return -1;
  x32 = XVECEXP (x3, 0, 60);
  if (GET_CODE (x32) != CONST_INT)
    return -1;
  x33 = XVECEXP (x3, 0, 61);
  if (GET_CODE (x33) != CONST_INT)
    return -1;
  x34 = XVECEXP (x3, 0, 62);
  if (GET_CODE (x34) != CONST_INT)
    return -1;
  x35 = XVECEXP (x3, 0, 63);
  if (GET_CODE (x35) != CONST_INT
      || pattern1616 (x2, 
E_V64QImode, 
E_V128QImode) != 0)
    return -1;
  x36 = XVECEXP (x3, 0, 0);
  switch (XWINT (x36, 0))
    {
    case 8L:
      x37 = XVECEXP (x3, 0, 1);
      if (XWINT (x37, 0) != 72L)
        return -1;
      x38 = XVECEXP (x3, 0, 2);
      if (XWINT (x38, 0) != 9L)
        return -1;
      x39 = XVECEXP (x3, 0, 3);
      if (XWINT (x39, 0) != 73L)
        return -1;
      x40 = XVECEXP (x3, 0, 4);
      if (XWINT (x40, 0) != 10L)
        return -1;
      x41 = XVECEXP (x3, 0, 5);
      if (XWINT (x41, 0) != 74L)
        return -1;
      x42 = XVECEXP (x3, 0, 6);
      if (XWINT (x42, 0) != 11L)
        return -1;
      x43 = XVECEXP (x3, 0, 7);
      if (XWINT (x43, 0) != 75L)
        return -1;
      x44 = XVECEXP (x3, 0, 8);
      if (XWINT (x44, 0) != 12L)
        return -1;
      x45 = XVECEXP (x3, 0, 9);
      if (XWINT (x45, 0) != 76L)
        return -1;
      x46 = XVECEXP (x3, 0, 10);
      if (XWINT (x46, 0) != 13L)
        return -1;
      x47 = XVECEXP (x3, 0, 11);
      if (XWINT (x47, 0) != 77L)
        return -1;
      x48 = XVECEXP (x3, 0, 12);
      if (XWINT (x48, 0) != 14L)
        return -1;
      x49 = XVECEXP (x3, 0, 13);
      if (XWINT (x49, 0) != 78L)
        return -1;
      x50 = XVECEXP (x3, 0, 14);
      if (XWINT (x50, 0) != 15L)
        return -1;
      x51 = XVECEXP (x3, 0, 15);
      if (XWINT (x51, 0) != 79L)
        return -1;
      x52 = XVECEXP (x3, 0, 16);
      if (XWINT (x52, 0) != 24L)
        return -1;
      x53 = XVECEXP (x3, 0, 17);
      if (XWINT (x53, 0) != 88L)
        return -1;
      x54 = XVECEXP (x3, 0, 18);
      if (XWINT (x54, 0) != 25L)
        return -1;
      x55 = XVECEXP (x3, 0, 19);
      if (XWINT (x55, 0) != 89L)
        return -1;
      x56 = XVECEXP (x3, 0, 20);
      if (XWINT (x56, 0) != 26L)
        return -1;
      x57 = XVECEXP (x3, 0, 21);
      if (XWINT (x57, 0) != 90L)
        return -1;
      x58 = XVECEXP (x3, 0, 22);
      if (XWINT (x58, 0) != 27L)
        return -1;
      x59 = XVECEXP (x3, 0, 23);
      if (XWINT (x59, 0) != 91L)
        return -1;
      x60 = XVECEXP (x3, 0, 24);
      if (XWINT (x60, 0) != 28L)
        return -1;
      x61 = XVECEXP (x3, 0, 25);
      if (XWINT (x61, 0) != 92L)
        return -1;
      x62 = XVECEXP (x3, 0, 26);
      if (XWINT (x62, 0) != 29L)
        return -1;
      x63 = XVECEXP (x3, 0, 27);
      if (XWINT (x63, 0) != 93L)
        return -1;
      x64 = XVECEXP (x3, 0, 28);
      if (XWINT (x64, 0) != 30L)
        return -1;
      x65 = XVECEXP (x3, 0, 29);
      if (XWINT (x65, 0) != 94L)
        return -1;
      x66 = XVECEXP (x3, 0, 30);
      if (XWINT (x66, 0) != 31L)
        return -1;
      x67 = XVECEXP (x3, 0, 31);
      if (XWINT (x67, 0) != 95L
          || XWINT (x4, 0) != 40L
          || XWINT (x5, 0) != 104L
          || XWINT (x6, 0) != 41L
          || XWINT (x7, 0) != 105L
          || XWINT (x8, 0) != 42L
          || XWINT (x9, 0) != 106L
          || XWINT (x10, 0) != 43L
          || XWINT (x11, 0) != 107L
          || XWINT (x12, 0) != 44L
          || XWINT (x13, 0) != 108L
          || XWINT (x14, 0) != 45L
          || XWINT (x15, 0) != 109L
          || XWINT (x16, 0) != 46L
          || XWINT (x17, 0) != 110L
          || XWINT (x18, 0) != 47L
          || XWINT (x19, 0) != 111L
          || XWINT (x20, 0) != 56L
          || XWINT (x21, 0) != 120L
          || XWINT (x22, 0) != 57L
          || XWINT (x23, 0) != 121L
          || XWINT (x24, 0) != 58L
          || XWINT (x25, 0) != 122L
          || XWINT (x26, 0) != 59L
          || XWINT (x27, 0) != 123L
          || XWINT (x28, 0) != 60L
          || XWINT (x29, 0) != 124L
          || XWINT (x30, 0) != 61L
          || XWINT (x31, 0) != 125L
          || XWINT (x32, 0) != 62L
          || XWINT (x33, 0) != 126L
          || XWINT (x34, 0) != 63L
          || XWINT (x35, 0) != 127L
          || !
#line 19424 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512))
        return -1;
      return 8316; /* avx512bw_interleave_highv64qi */

    case 0L:
      x37 = XVECEXP (x3, 0, 1);
      if (XWINT (x37, 0) != 64L)
        return -1;
      x38 = XVECEXP (x3, 0, 2);
      if (XWINT (x38, 0) != 1L)
        return -1;
      x39 = XVECEXP (x3, 0, 3);
      if (XWINT (x39, 0) != 65L)
        return -1;
      x40 = XVECEXP (x3, 0, 4);
      if (XWINT (x40, 0) != 2L)
        return -1;
      x41 = XVECEXP (x3, 0, 5);
      if (XWINT (x41, 0) != 66L)
        return -1;
      x42 = XVECEXP (x3, 0, 6);
      if (XWINT (x42, 0) != 3L)
        return -1;
      x43 = XVECEXP (x3, 0, 7);
      if (XWINT (x43, 0) != 67L)
        return -1;
      x44 = XVECEXP (x3, 0, 8);
      if (XWINT (x44, 0) != 4L)
        return -1;
      x45 = XVECEXP (x3, 0, 9);
      if (XWINT (x45, 0) != 68L)
        return -1;
      x46 = XVECEXP (x3, 0, 10);
      if (XWINT (x46, 0) != 5L)
        return -1;
      x47 = XVECEXP (x3, 0, 11);
      if (XWINT (x47, 0) != 69L)
        return -1;
      x48 = XVECEXP (x3, 0, 12);
      if (XWINT (x48, 0) != 6L)
        return -1;
      x49 = XVECEXP (x3, 0, 13);
      if (XWINT (x49, 0) != 70L)
        return -1;
      x50 = XVECEXP (x3, 0, 14);
      if (XWINT (x50, 0) != 7L)
        return -1;
      x51 = XVECEXP (x3, 0, 15);
      if (XWINT (x51, 0) != 71L)
        return -1;
      x52 = XVECEXP (x3, 0, 16);
      if (XWINT (x52, 0) != 16L)
        return -1;
      x53 = XVECEXP (x3, 0, 17);
      if (XWINT (x53, 0) != 80L)
        return -1;
      x54 = XVECEXP (x3, 0, 18);
      if (XWINT (x54, 0) != 17L)
        return -1;
      x55 = XVECEXP (x3, 0, 19);
      if (XWINT (x55, 0) != 81L)
        return -1;
      x56 = XVECEXP (x3, 0, 20);
      if (XWINT (x56, 0) != 18L)
        return -1;
      x57 = XVECEXP (x3, 0, 21);
      if (XWINT (x57, 0) != 82L)
        return -1;
      x58 = XVECEXP (x3, 0, 22);
      if (XWINT (x58, 0) != 19L)
        return -1;
      x59 = XVECEXP (x3, 0, 23);
      if (XWINT (x59, 0) != 83L)
        return -1;
      x60 = XVECEXP (x3, 0, 24);
      if (XWINT (x60, 0) != 20L)
        return -1;
      x61 = XVECEXP (x3, 0, 25);
      if (XWINT (x61, 0) != 84L)
        return -1;
      x62 = XVECEXP (x3, 0, 26);
      if (XWINT (x62, 0) != 21L)
        return -1;
      x63 = XVECEXP (x3, 0, 27);
      if (XWINT (x63, 0) != 85L)
        return -1;
      x64 = XVECEXP (x3, 0, 28);
      if (XWINT (x64, 0) != 22L)
        return -1;
      x65 = XVECEXP (x3, 0, 29);
      if (XWINT (x65, 0) != 86L)
        return -1;
      x66 = XVECEXP (x3, 0, 30);
      if (XWINT (x66, 0) != 23L)
        return -1;
      x67 = XVECEXP (x3, 0, 31);
      if (XWINT (x67, 0) != 87L
          || XWINT (x4, 0) != 32L
          || XWINT (x5, 0) != 96L
          || XWINT (x6, 0) != 33L
          || XWINT (x7, 0) != 97L
          || XWINT (x8, 0) != 34L
          || XWINT (x9, 0) != 98L
          || XWINT (x10, 0) != 35L
          || XWINT (x11, 0) != 99L
          || XWINT (x12, 0) != 36L
          || XWINT (x13, 0) != 100L
          || XWINT (x14, 0) != 37L
          || XWINT (x15, 0) != 101L
          || XWINT (x16, 0) != 38L
          || XWINT (x17, 0) != 102L
          || XWINT (x18, 0) != 39L
          || XWINT (x19, 0) != 103L
          || XWINT (x20, 0) != 48L
          || XWINT (x21, 0) != 112L
          || XWINT (x22, 0) != 49L
          || XWINT (x23, 0) != 113L
          || XWINT (x24, 0) != 50L
          || XWINT (x25, 0) != 114L
          || XWINT (x26, 0) != 51L
          || XWINT (x27, 0) != 115L
          || XWINT (x28, 0) != 52L
          || XWINT (x29, 0) != 116L
          || XWINT (x30, 0) != 53L
          || XWINT (x31, 0) != 117L
          || XWINT (x32, 0) != 54L
          || XWINT (x33, 0) != 118L
          || XWINT (x34, 0) != 55L
          || XWINT (x35, 0) != 119L
          || !
#line 19520 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512))
        return -1;
      return 8322; /* avx512bw_interleave_lowv64qi */

    default:
      return -1;
    }
}

 int
recog_301 (rtx x1 ATTRIBUTE_UNUSED,
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
          return 5534; /* *avx512bw_vpternlogv64qi_1 */

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
          return 5561; /* *avx512vl_vpternlogv32qi_1 */

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
          return 5588; /* *avx512vl_vpternlogv16qi_1 */

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
          return 5615; /* *avx512bw_vpternlogv32hi_1 */

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
          return 5642; /* *avx512vl_vpternlogv16hi_1 */

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
          return 5669; /* *avx512vl_vpternlogv8hi_1 */

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
          return 5696; /* *avx512f_vpternlogv16si_1 */

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
          return 5723; /* *avx512vl_vpternlogv8si_1 */

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
          return 5750; /* *avx512vl_vpternlogv4si_1 */

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
          return 5777; /* *avx512f_vpternlogv8di_1 */

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
          return 5804; /* *avx512vl_vpternlogv4di_1 */

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
          return 5831; /* *avx512vl_vpternlogv2di_1 */

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
          return 5537; /* *avx512bw_vpternlogv64qi_1 */

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
          return 5564; /* *avx512vl_vpternlogv32qi_1 */

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
          return 5591; /* *avx512vl_vpternlogv16qi_1 */

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
          return 5618; /* *avx512bw_vpternlogv32hi_1 */

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
          return 5645; /* *avx512vl_vpternlogv16hi_1 */

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
          return 5672; /* *avx512vl_vpternlogv8hi_1 */

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
          return 5699; /* *avx512f_vpternlogv16si_1 */

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
          return 5726; /* *avx512vl_vpternlogv8si_1 */

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
          return 5753; /* *avx512vl_vpternlogv4si_1 */

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
          return 5780; /* *avx512f_vpternlogv8di_1 */

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
          return 5807; /* *avx512vl_vpternlogv4di_1 */

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
          return 5834; /* *avx512vl_vpternlogv2di_1 */

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
          return 5540; /* *avx512bw_vpternlogv64qi_1 */

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
          return 5567; /* *avx512vl_vpternlogv32qi_1 */

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
          return 5594; /* *avx512vl_vpternlogv16qi_1 */

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
          return 5621; /* *avx512bw_vpternlogv32hi_1 */

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
          return 5648; /* *avx512vl_vpternlogv16hi_1 */

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
          return 5675; /* *avx512vl_vpternlogv8hi_1 */

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
          return 5702; /* *avx512f_vpternlogv16si_1 */

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
          return 5729; /* *avx512vl_vpternlogv8si_1 */

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
          return 5756; /* *avx512vl_vpternlogv4si_1 */

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
          return 5783; /* *avx512f_vpternlogv8di_1 */

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
          return 5810; /* *avx512vl_vpternlogv4di_1 */

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
          return 5837; /* *avx512vl_vpternlogv2di_1 */

        case 36:
          if (!(
#line 13946 "../../gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 332 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 6818; /* *avx512bw_vpternlogv64qi_3 */

        case 37:
          if (!(
#line 13946 "../../gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 332 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 6827; /* *avx512vl_vpternlogv32qi_3 */

        case 38:
          if (!
#line 13946 "../../gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()))
            return -1;
          return 6836; /* *avx512vl_vpternlogv16qi_3 */

        case 39:
          if (!(
#line 13946 "../../gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 333 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 6845; /* *avx512bw_vpternlogv32hi_3 */

        case 40:
          if (!(
#line 13946 "../../gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 333 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 6854; /* *avx512vl_vpternlogv16hi_3 */

        case 41:
          if (!
#line 13946 "../../gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()))
            return -1;
          return 6863; /* *avx512vl_vpternlogv8hi_3 */

        case 42:
          if (!(
#line 13946 "../../gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 334 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 6872; /* *avx512f_vpternlogv16si_3 */

        case 43:
          if (!(
#line 13946 "../../gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 334 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 6881; /* *avx512vl_vpternlogv8si_3 */

        case 44:
          if (!
#line 13946 "../../gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()))
            return -1;
          return 6890; /* *avx512vl_vpternlogv4si_3 */

        case 45:
          if (!(
#line 13946 "../../gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 335 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 6899; /* *avx512f_vpternlogv8di_3 */

        case 46:
          if (!(
#line 13946 "../../gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 335 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 6908; /* *avx512vl_vpternlogv4di_3 */

        case 47:
          if (!
#line 13946 "../../gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()))
            return -1;
          return 6917; /* *avx512vl_vpternlogv2di_3 */

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
          return 6182; /* *avx512bw_vpternlogv64qi_2 */

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
          return 6209; /* *avx512vl_vpternlogv32qi_2 */

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
          return 6236; /* *avx512vl_vpternlogv16qi_2 */

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
          return 6263; /* *avx512bw_vpternlogv32hi_2 */

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
          return 6290; /* *avx512vl_vpternlogv16hi_2 */

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
          return 6317; /* *avx512vl_vpternlogv8hi_2 */

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
          return 6344; /* *avx512f_vpternlogv16si_2 */

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
          return 6371; /* *avx512vl_vpternlogv8si_2 */

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
          return 6398; /* *avx512vl_vpternlogv4si_2 */

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
          return 6425; /* *avx512f_vpternlogv8di_2 */

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
          return 6452; /* *avx512vl_vpternlogv4di_2 */

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
          return 6479; /* *avx512vl_vpternlogv2di_2 */

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
          return 6185; /* *avx512bw_vpternlogv64qi_2 */

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
          return 6212; /* *avx512vl_vpternlogv32qi_2 */

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
          return 6239; /* *avx512vl_vpternlogv16qi_2 */

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
          return 6266; /* *avx512bw_vpternlogv32hi_2 */

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
          return 6293; /* *avx512vl_vpternlogv16hi_2 */

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
          return 6320; /* *avx512vl_vpternlogv8hi_2 */

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
          return 6347; /* *avx512f_vpternlogv16si_2 */

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
          return 6374; /* *avx512vl_vpternlogv8si_2 */

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
          return 6401; /* *avx512vl_vpternlogv4si_2 */

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
          return 6428; /* *avx512f_vpternlogv8di_2 */

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
          return 6455; /* *avx512vl_vpternlogv4di_2 */

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
          return 6482; /* *avx512vl_vpternlogv2di_2 */

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
          return 6188; /* *avx512bw_vpternlogv64qi_2 */

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
          return 6215; /* *avx512vl_vpternlogv32qi_2 */

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
          return 6242; /* *avx512vl_vpternlogv16qi_2 */

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
          return 6269; /* *avx512bw_vpternlogv32hi_2 */

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
          return 6296; /* *avx512vl_vpternlogv16hi_2 */

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
          return 6323; /* *avx512vl_vpternlogv8hi_2 */

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
          return 6350; /* *avx512f_vpternlogv16si_2 */

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
          return 6377; /* *avx512vl_vpternlogv8si_2 */

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
          return 6404; /* *avx512vl_vpternlogv4si_2 */

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
          return 6431; /* *avx512f_vpternlogv8di_2 */

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
          return 6458; /* *avx512vl_vpternlogv4di_2 */

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
          return 6485; /* *avx512vl_vpternlogv2di_2 */

        default:
          return -1;
        }

    default:
      return -1;
    }
}

 int
recog_311 (rtx x1 ATTRIBUTE_UNUSED,
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
          return 5860; /* *avx512bw_vpternlogv32hf_1 */

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
          return 5887; /* *avx512vl_vpternlogv16hf_1 */

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
          return 5914; /* *avx512fp16_vpternlogv8hf_1 */

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
          return 5941; /* *avx512bw_vpternlogv32bf_1 */

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
          return 5968; /* *avx512vl_vpternlogv16bf_1 */

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
          return 5995; /* *avx512vl_vpternlogv8bf_1 */

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
          return 6022; /* *avx512f_vpternlogv16sf_1 */

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
          return 6049; /* *avx512vl_vpternlogv8sf_1 */

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
          return 6076; /* *avx512vl_vpternlogv4sf_1 */

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
          return 6103; /* *avx512f_vpternlogv8df_1 */

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
          return 6130; /* *avx512vl_vpternlogv4df_1 */

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
          return 6157; /* *avx512vl_vpternlogv2df_1 */

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
          return 5863; /* *avx512bw_vpternlogv32hf_1 */

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
          return 5890; /* *avx512vl_vpternlogv16hf_1 */

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
          return 5917; /* *avx512fp16_vpternlogv8hf_1 */

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
          return 5944; /* *avx512bw_vpternlogv32bf_1 */

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
          return 5971; /* *avx512vl_vpternlogv16bf_1 */

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
          return 5998; /* *avx512vl_vpternlogv8bf_1 */

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
          return 6025; /* *avx512f_vpternlogv16sf_1 */

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
          return 6052; /* *avx512vl_vpternlogv8sf_1 */

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
          return 6079; /* *avx512vl_vpternlogv4sf_1 */

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
          return 6106; /* *avx512f_vpternlogv8df_1 */

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
          return 6133; /* *avx512vl_vpternlogv4df_1 */

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
          return 6160; /* *avx512vl_vpternlogv2df_1 */

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
          return 5866; /* *avx512bw_vpternlogv32hf_1 */

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
          return 5893; /* *avx512vl_vpternlogv16hf_1 */

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
          return 5920; /* *avx512fp16_vpternlogv8hf_1 */

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
          return 5947; /* *avx512bw_vpternlogv32bf_1 */

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
          return 5974; /* *avx512vl_vpternlogv16bf_1 */

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
          return 6001; /* *avx512vl_vpternlogv8bf_1 */

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
          return 6028; /* *avx512f_vpternlogv16sf_1 */

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
          return 6055; /* *avx512vl_vpternlogv8sf_1 */

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
          return 6082; /* *avx512vl_vpternlogv4sf_1 */

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
          return 6109; /* *avx512f_vpternlogv8df_1 */

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
          return 6136; /* *avx512vl_vpternlogv4df_1 */

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
          return 6163; /* *avx512vl_vpternlogv2df_1 */

        case 36:
          if (!(
#line 13946 "../../gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 336 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 6928; /* *avx512bw_vpternlogv32hf_3 */

        case 37:
          if (!(
#line 13946 "../../gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 336 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 6937; /* *avx512vl_vpternlogv16hf_3 */

        case 38:
          if (!
#line 13946 "../../gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()))
            return -1;
          return 6946; /* *avx512fp16_vpternlogv8hf_3 */

        case 39:
          if (!(
#line 13946 "../../gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 337 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 6955; /* *avx512bw_vpternlogv32bf_3 */

        case 40:
          if (!(
#line 13946 "../../gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 337 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 6964; /* *avx512vl_vpternlogv16bf_3 */

        case 41:
          if (!
#line 13946 "../../gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()))
            return -1;
          return 6973; /* *avx512vl_vpternlogv8bf_3 */

        case 42:
          if (!(
#line 13946 "../../gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 338 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 6982; /* *avx512f_vpternlogv16sf_3 */

        case 43:
          if (!(
#line 13946 "../../gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 338 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 6991; /* *avx512vl_vpternlogv8sf_3 */

        case 44:
          if (!
#line 13946 "../../gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()))
            return -1;
          return 7000; /* *avx512vl_vpternlogv4sf_3 */

        case 45:
          if (!(
#line 13946 "../../gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 339 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 7009; /* *avx512f_vpternlogv8df_3 */

        case 46:
          if (!(
#line 13946 "../../gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 339 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 7018; /* *avx512vl_vpternlogv4df_3 */

        case 47:
          if (!(
#line 13946 "../../gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 339 "../../gcc/config/i386/sse.md"
(TARGET_SSE2)))
            return -1;
          return 7027; /* *avx512vl_vpternlogv2df_3 */

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
          return 6508; /* *avx512bw_vpternlogv32hf_2 */

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
          return 6535; /* *avx512vl_vpternlogv16hf_2 */

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
          return 6562; /* *avx512fp16_vpternlogv8hf_2 */

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
          return 6589; /* *avx512bw_vpternlogv32bf_2 */

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
          return 6616; /* *avx512vl_vpternlogv16bf_2 */

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
          return 6643; /* *avx512vl_vpternlogv8bf_2 */

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
          return 6670; /* *avx512f_vpternlogv16sf_2 */

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
          return 6697; /* *avx512vl_vpternlogv8sf_2 */

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
          return 6724; /* *avx512vl_vpternlogv4sf_2 */

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
          return 6751; /* *avx512f_vpternlogv8df_2 */

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
          return 6778; /* *avx512vl_vpternlogv4df_2 */

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
          return 6805; /* *avx512vl_vpternlogv2df_2 */

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
          return 6511; /* *avx512bw_vpternlogv32hf_2 */

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
          return 6538; /* *avx512vl_vpternlogv16hf_2 */

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
          return 6565; /* *avx512fp16_vpternlogv8hf_2 */

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
          return 6592; /* *avx512bw_vpternlogv32bf_2 */

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
          return 6619; /* *avx512vl_vpternlogv16bf_2 */

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
          return 6646; /* *avx512vl_vpternlogv8bf_2 */

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
          return 6673; /* *avx512f_vpternlogv16sf_2 */

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
          return 6700; /* *avx512vl_vpternlogv8sf_2 */

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
          return 6727; /* *avx512vl_vpternlogv4sf_2 */

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
          return 6754; /* *avx512f_vpternlogv8df_2 */

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
          return 6781; /* *avx512vl_vpternlogv4df_2 */

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
          return 6808; /* *avx512vl_vpternlogv2df_2 */

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
          return 6514; /* *avx512bw_vpternlogv32hf_2 */

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
          return 6541; /* *avx512vl_vpternlogv16hf_2 */

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
          return 6568; /* *avx512fp16_vpternlogv8hf_2 */

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
          return 6595; /* *avx512bw_vpternlogv32bf_2 */

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
          return 6622; /* *avx512vl_vpternlogv16bf_2 */

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
          return 6649; /* *avx512vl_vpternlogv8bf_2 */

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
          return 6676; /* *avx512f_vpternlogv16sf_2 */

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
          return 6703; /* *avx512vl_vpternlogv8sf_2 */

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
          return 6730; /* *avx512vl_vpternlogv4sf_2 */

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
          return 6757; /* *avx512f_vpternlogv8df_2 */

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
          return 6784; /* *avx512vl_vpternlogv4df_2 */

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
          return 6811; /* *avx512vl_vpternlogv2df_2 */

        default:
          return -1;
        }

    default:
      return -1;
    }
}

 int
recog_326 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12, x13, x14;
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
        case E_V8DFmode:
          if (!register_operand (operands[0], E_V8DFmode)
              || GET_MODE (x3) != E_V8DFmode)
            return -1;
          switch (GET_MODE (operands[1]))
            {
            case E_V8HFmode:
              if (!vector_operand (operands[1], E_V8HFmode)
                  || !(
#line 8018 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && 1) && 
#line 1004 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                return -1;
              return 4707; /* avx512fp16_float_extend_phv8df2 */

            case E_V8SFmode:
              if (!vector_operand (operands[1], E_V8SFmode)
                  || !(
#line 10221 "../../gcc/config/i386/sse.md"
(TARGET_AVX && 1 && 1) && 
#line 468 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
                return -1;
              return 5183; /* avx512f_cvtps2pd512 */

            default:
              return -1;
            }

        case E_V16SFmode:
          if (!register_operand (operands[0], E_V16SFmode)
              || GET_MODE (x3) != E_V16SFmode
              || !vector_operand (operands[1], E_V16HFmode)
              || !(
#line 8018 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && 1) && 
#line 1004 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return -1;
          return 4711; /* avx512fp16_float_extend_phv16sf2 */

        case E_V8SFmode:
          if (!register_operand (operands[0], E_V8SFmode)
              || GET_MODE (x3) != E_V8SFmode
              || !vector_operand (operands[1], E_V8HFmode)
              || !(
#line 8018 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && 1) && 
#line 1004 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 4715; /* avx512fp16_float_extend_phv8sf2 */

        case E_V4DFmode:
          if (!register_operand (operands[0], E_V4DFmode)
              || GET_MODE (x3) != E_V4DFmode)
            return -1;
          switch (GET_MODE (operands[1]))
            {
            case E_V4HFmode:
              if (!memory_operand (operands[1], E_V4HFmode)
                  || !
#line 8057 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL))
                return -1;
              return 4725; /* *avx512fp16_float_extend_phv4df2_load */

            case E_V4SFmode:
              if (!vector_operand (operands[1], E_V4SFmode)
                  || !
#line 10221 "../../gcc/config/i386/sse.md"
(TARGET_AVX && 1 && 1))
                return -1;
              return 5187; /* avx_cvtps2pd256 */

            default:
              return -1;
            }

        case E_V4SFmode:
          if (!register_operand (operands[0], E_V4SFmode)
              || GET_MODE (x3) != E_V4SFmode
              || !memory_operand (operands[1], E_V4HFmode)
              || !
#line 8057 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL))
            return -1;
          return 4727; /* *avx512fp16_float_extend_phv4sf2_load */

        case E_V2DFmode:
          if (!register_operand (operands[0], E_V2DFmode)
              || GET_MODE (x3) != E_V2DFmode)
            return -1;
          switch (GET_MODE (operands[1]))
            {
            case E_V2HFmode:
              if (!memory_operand (operands[1], E_V2HFmode)
                  || !
#line 8096 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL))
                return -1;
              return 4731; /* *avx512fp16_float_extend_phv2df2_load */

            case E_V2SFmode:
              if (!memory_operand (operands[1], E_V2SFmode)
                  || !
#line 10403 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && 1))
                return -1;
              return 5237; /* sse2_cvtps2pd_1 */

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
      x6 = XEXP (x4, 0);
      operands[1] = x6;
      switch (XVECLEN (x5, 0))
        {
        case 4:
          x7 = XVECEXP (x5, 0, 0);
          if (GET_CODE (x7) != CONST_INT)
            return -1;
          x8 = XVECEXP (x5, 0, 1);
          if (GET_CODE (x8) != CONST_INT)
            return -1;
          x9 = XVECEXP (x5, 0, 2);
          if (GET_CODE (x9) != CONST_INT)
            return -1;
          x10 = XVECEXP (x5, 0, 3);
          if (GET_CODE (x10) != CONST_INT)
            return -1;
          switch (pattern1143 (x5))
            {
            case 0:
              if (XWINT (x9, 0) != 2L
                  || XWINT (x10, 0) != 3L)
                return -1;
              switch (GET_MODE (operands[0]))
                {
                case E_V4DFmode:
                  if (!register_operand (operands[0], E_V4DFmode)
                      || GET_MODE (x3) != E_V4DFmode)
                    return -1;
                  switch (GET_MODE (x4))
                    {
                    case E_V4HFmode:
                      if (!register_operand (operands[1], E_V8HFmode)
                          || !
#line 8047 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL && 1))
                        return -1;
                      return 4719; /* avx512fp16_float_extend_phv4df2 */

                    case E_V4SFmode:
                      if (!nonimmediate_operand (operands[1], E_V8SFmode)
                          || !
#line 10234 "../../gcc/config/i386/sse.md"
(TARGET_AVX))
                        return -1;
                      return 5191; /* *avx_cvtps2pd256_2 */

                    default:
                      return -1;
                    }

                case E_V4SFmode:
                  if (pattern608 (x3, 
E_V8HFmode, 
E_V4HFmode, 
E_V4SFmode) != 0
                      || !
#line 8047 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL && 1))
                    return -1;
                  return 4723; /* avx512fp16_float_extend_phv4sf2 */

                default:
                  return -1;
                }

            case 1:
              if (XWINT (x9, 0) != 4L
                  || XWINT (x10, 0) != 6L)
                return -1;
              switch (pattern1487 (x3))
                {
                case 0:
                  if (!
#line 31650 "../../gcc/config/i386/sse.md"
(TARGET_AVXNECONVERT))
                    return -1;
                  return 10425; /* vcvtneeph2ps_v8hf */

                case 1:
                  if (!
#line 31650 "../../gcc/config/i386/sse.md"
(TARGET_AVXNECONVERT))
                    return -1;
                  return 10426; /* vcvtneebf162ps_v8bf */

                default:
                  return -1;
                }

            case 2:
              switch (pattern1487 (x3))
                {
                case 0:
                  if (!
#line 31678 "../../gcc/config/i386/sse.md"
(TARGET_AVXNECONVERT))
                    return -1;
                  return 10429; /* vcvtneoph2ps_v8hf */

                case 1:
                  if (!
#line 31678 "../../gcc/config/i386/sse.md"
(TARGET_AVXNECONVERT))
                    return -1;
                  return 10430; /* vcvtneobf162ps_v8bf */

                default:
                  return -1;
                }

            default:
              return -1;
            }

        case 2:
          x7 = XVECEXP (x5, 0, 0);
          if (x7 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
            return -1;
          x8 = XVECEXP (x5, 0, 1);
          if (x8 != const_int_rtx[MAX_SAVED_CONST_INT + 1]
              || !register_operand (operands[0], E_V2DFmode)
              || GET_MODE (x3) != E_V2DFmode)
            return -1;
          switch (GET_MODE (x4))
            {
            case E_V2HFmode:
              if (!register_operand (operands[1], E_V8HFmode)
                  || !
#line 8086 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL))
                return -1;
              return 4729; /* avx512fp16_float_extend_phv2df2 */

            case E_V2SFmode:
              if (!register_operand (operands[1], E_V4SFmode)
                  || !
#line 10389 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && 1))
                return -1;
              return 5235; /* sse2_cvtps2pd */

            default:
              return -1;
            }

        case 8:
          x7 = XVECEXP (x5, 0, 0);
          if (GET_CODE (x7) != CONST_INT)
            return -1;
          x8 = XVECEXP (x5, 0, 1);
          if (GET_CODE (x8) != CONST_INT
              || pattern929 (x5) != 0)
            return -1;
          switch (pattern1143 (x5))
            {
            case 0:
              if (pattern1557 (x5) != 0
                  || pattern928 (x3, 
E_V16SFmode, 
E_V8SFmode, 
E_V8DFmode) != 0
                  || !
#line 10249 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512))
                return -1;
              return 5192; /* vec_unpacks_lo_v16sf */

            case 1:
              x9 = XVECEXP (x5, 0, 2);
              if (XWINT (x9, 0) != 4L)
                return -1;
              x10 = XVECEXP (x5, 0, 3);
              if (XWINT (x10, 0) != 6L)
                return -1;
              x11 = XVECEXP (x5, 0, 4);
              if (XWINT (x11, 0) != 8L)
                return -1;
              x12 = XVECEXP (x5, 0, 5);
              if (XWINT (x12, 0) != 10L)
                return -1;
              x13 = XVECEXP (x5, 0, 6);
              if (XWINT (x13, 0) != 12L)
                return -1;
              x14 = XVECEXP (x5, 0, 7);
              if (XWINT (x14, 0) != 14L)
                return -1;
              switch (pattern1753 (x3))
                {
                case 0:
                  if (!
#line 31665 "../../gcc/config/i386/sse.md"
(TARGET_AVXNECONVERT))
                    return -1;
                  return 10427; /* vcvtneeph2ps_v16hf */

                case 1:
                  if (!
#line 31665 "../../gcc/config/i386/sse.md"
(TARGET_AVXNECONVERT))
                    return -1;
                  return 10428; /* vcvtneebf162ps_v16bf */

                default:
                  return -1;
                }

            case 2:
              x11 = XVECEXP (x5, 0, 4);
              if (XWINT (x11, 0) != 9L)
                return -1;
              x12 = XVECEXP (x5, 0, 5);
              if (XWINT (x12, 0) != 11L)
                return -1;
              x13 = XVECEXP (x5, 0, 6);
              if (XWINT (x13, 0) != 13L)
                return -1;
              x14 = XVECEXP (x5, 0, 7);
              if (XWINT (x14, 0) != 15L)
                return -1;
              switch (pattern1753 (x3))
                {
                case 0:
                  if (!
#line 31693 "../../gcc/config/i386/sse.md"
(TARGET_AVXNECONVERT))
                    return -1;
                  return 10431; /* vcvtneoph2ps_v16hf */

                case 1:
                  if (!
#line 31693 "../../gcc/config/i386/sse.md"
(TARGET_AVXNECONVERT))
                    return -1;
                  return 10432; /* vcvtneobf162ps_v16bf */

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
recog_331 (rtx x1 ATTRIBUTE_UNUSED,
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
    case REG:
    case SUBREG:
    case MEM:
      operands[1] = x4;
      switch (GET_MODE (operands[0]))
        {
        case E_V8HFmode:
          switch (pattern515 (x3))
            {
            case 0:
              if (!(
#line 7633 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && 1) && 
#line 694 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                return -1;
              return 4475; /* avx512fp16_vcvtw2ph_v8hi */

            case 1:
              if (!(
#line 7633 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && 1) && 
#line 695 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                return -1;
              return 4495; /* avx512fp16_vcvtdq2ph_v8si */

            case 2:
              if (!(
#line 7633 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && 1) && 
#line 696 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                return -1;
              return 4511; /* avx512fp16_vcvtqq2ph_v8di */

            default:
              return -1;
            }

        case E_V16HFmode:
          switch (pattern516 (x3))
            {
            case 0:
              if (!(
#line 7633 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && 1) && 
#line 694 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                return -1;
              return 4479; /* avx512fp16_vcvtw2ph_v16hi */

            case 1:
              if (!(
#line 7633 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && 1) && 
#line 695 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                return -1;
              return 4503; /* avx512fp16_vcvtdq2ph_v16si */

            default:
              return -1;
            }

        case E_V32HFmode:
          if (!register_operand (operands[0], E_V32HFmode)
              || GET_MODE (x3) != E_V32HFmode
              || !vector_operand (operands[1], E_V32HImode)
              || !(
#line 7633 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && 1) && 
#line 694 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return -1;
          return 4487; /* avx512fp16_vcvtw2ph_v32hi */

        case E_V16SFmode:
          if (!register_operand (operands[0], E_V16SFmode)
              || GET_MODE (x3) != E_V16SFmode
              || !vector_operand (operands[1], E_V16SImode)
              || !(
#line 8637 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && 1 && 1) && 
#line 434 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 4808; /* floatv16siv16sf2 */

        case E_V8SFmode:
          if (!register_operand (operands[0], E_V8SFmode)
              || GET_MODE (x3) != E_V8SFmode)
            return -1;
          switch (GET_MODE (operands[1]))
            {
            case E_V8SImode:
              if (!vector_operand (operands[1], E_V8SImode)
                  || !(
#line 8637 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && 1 && 1) && 
#line 434 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
                return -1;
              return 4812; /* floatv8siv8sf2 */

            case E_V8DImode:
              if (!nonimmediate_operand (operands[1], E_V8DImode)
                  || !(
#line 9185 "../../gcc/config/i386/sse.md"
(TARGET_AVX512DQ && 1) && 
#line 627 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                return -1;
              return 4966; /* floatv8div8sf2 */

            default:
              return -1;
            }

        case E_V4SFmode:
          if (!register_operand (operands[0], E_V4SFmode)
              || GET_MODE (x3) != E_V4SFmode)
            return -1;
          switch (GET_MODE (operands[1]))
            {
            case E_V4SImode:
              if (!vector_operand (operands[1], E_V4SImode)
                  || !
#line 8637 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && 1 && 1))
                return -1;
              return 4816; /* floatv4siv4sf2 */

            case E_V4DImode:
              if (!nonimmediate_operand (operands[1], E_V4DImode)
                  || !(
#line 9185 "../../gcc/config/i386/sse.md"
(TARGET_AVX512DQ && 1) && 
#line 627 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                return -1;
              return 4974; /* floatv4div4sf2 */

            default:
              return -1;
            }

        case E_V2DFmode:
          switch (pattern517 (x3))
            {
            case 0:
              if (!
#line 8867 "../../gcc/config/i386/sse.md"
(TARGET_SSE2))
                return -1;
              return 4894; /* sse2_cvtpi2pd */

            case 1:
              if (!(
#line 9171 "../../gcc/config/i386/sse.md"
(TARGET_AVX512DQ && 1) && 
#line 537 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                return -1;
              return 4962; /* floatv2div2df2 */

            default:
              return -1;
            }

        case E_V8DFmode:
          switch (pattern518 (x3, 
E_V8DFmode))
            {
            case 0:
              if (!(
#line 9161 "../../gcc/config/i386/sse.md"
(TARGET_AVX && 1) && 
#line 468 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
                return -1;
              return 4942; /* floatv8siv8df2 */

            case 1:
              if (!(
#line 9171 "../../gcc/config/i386/sse.md"
(TARGET_AVX512DQ && 1) && 
#line 537 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                return -1;
              return 4946; /* floatv8div8df2 */

            default:
              return -1;
            }

        case E_V4DFmode:
          switch (pattern519 (x3, 
E_V4DFmode))
            {
            case 0:
              if (!
#line 9161 "../../gcc/config/i386/sse.md"
(TARGET_AVX && 1))
                return -1;
              return 4944; /* floatv4siv4df2 */

            case 1:
              if (!(
#line 9171 "../../gcc/config/i386/sse.md"
(TARGET_AVX512DQ && 1) && 
#line 537 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                return -1;
              return 4954; /* floatv4div4df2 */

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
      x6 = XEXP (x4, 0);
      operands[1] = x6;
      switch (XVECLEN (x5, 0))
        {
        case 8:
          if (pattern671 (x5) != 0
              || pattern928 (x3, 
E_V16SImode, 
E_V8SImode, 
E_V8DFmode) != 0
              || !
#line 9362 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512))
            return -1;
          return 4994; /* avx512f_cvtdq2pd512_2 */

        case 4:
          if (pattern672 (x5, 
3, 
2, 
1) != 0
              || pattern928 (x3, 
E_V8SImode, 
E_V4SImode, 
E_V4DFmode) != 0
              || !
#line 9375 "../../gcc/config/i386/sse.md"
(TARGET_AVX))
            return -1;
          return 4995; /* avx_cvtdq2pd256_2 */

        case 2:
          x7 = XVECEXP (x5, 0, 0);
          if (x7 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
            return -1;
          x8 = XVECEXP (x5, 0, 1);
          if (x8 != const_int_rtx[MAX_SAVED_CONST_INT + 1]
              || pattern928 (x3, 
E_V4SImode, 
E_V2SImode, 
E_V2DFmode) != 0
              || !
#line 9387 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && 1))
            return -1;
          return 4996; /* sse2_cvtdq2pd */

        default:
          return -1;
        }

    default:
      return -1;
    }
}

 int
recog_337 (rtx x1 ATTRIBUTE_UNUSED,
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
    case REG:
    case SUBREG:
    case MEM:
      operands[1] = x4;
      switch (GET_MODE (operands[0]))
        {
        case E_V8HFmode:
          switch (pattern515 (x3))
            {
            case 0:
              if (!(
#line 7633 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && 1) && 
#line 694 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                return -1;
              return 4477; /* avx512fp16_vcvtuw2ph_v8hi */

            case 1:
              if (!(
#line 7633 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && 1) && 
#line 695 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                return -1;
              return 4499; /* avx512fp16_vcvtudq2ph_v8si */

            case 2:
              if (!(
#line 7633 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && 1) && 
#line 696 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                return -1;
              return 4515; /* avx512fp16_vcvtuqq2ph_v8di */

            default:
              return -1;
            }

        case E_V16HFmode:
          switch (pattern516 (x3))
            {
            case 0:
              if (!(
#line 7633 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && 1) && 
#line 694 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                return -1;
              return 4483; /* avx512fp16_vcvtuw2ph_v16hi */

            case 1:
              if (!(
#line 7633 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && 1) && 
#line 695 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                return -1;
              return 4507; /* avx512fp16_vcvtudq2ph_v16si */

            default:
              return -1;
            }

        case E_V32HFmode:
          if (!register_operand (operands[0], E_V32HFmode)
              || GET_MODE (x3) != E_V32HFmode
              || !vector_operand (operands[1], E_V32HImode)
              || !(
#line 7633 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && 1) && 
#line 694 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return -1;
          return 4491; /* avx512fp16_vcvtuw2ph_v32hi */

        case E_V16SFmode:
          if (!register_operand (operands[0], E_V16SFmode)
              || GET_MODE (x3) != E_V16SFmode
              || !nonimmediate_operand (operands[1], E_V16SImode)
              || !(
#line 8650 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 540 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return -1;
          return 4818; /* *floatunsv16siv16sf2 */

        case E_V8SFmode:
          switch (pattern518 (x3, 
E_V8SFmode))
            {
            case 0:
              if (!(
#line 8650 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 540 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                return -1;
              return 4822; /* *floatunsv8siv8sf2 */

            case 1:
              if (!(
#line 9185 "../../gcc/config/i386/sse.md"
(TARGET_AVX512DQ && 1) && 
#line 627 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                return -1;
              return 4970; /* floatunsv8div8sf2 */

            default:
              return -1;
            }

        case E_V4SFmode:
          switch (pattern519 (x3, 
E_V4SFmode))
            {
            case 0:
              if (!(
#line 8650 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 540 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                return -1;
              return 4826; /* *floatunsv4siv4sf2 */

            case 1:
              if (!(
#line 9185 "../../gcc/config/i386/sse.md"
(TARGET_AVX512DQ && 1) && 
#line 627 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                return -1;
              return 4978; /* floatunsv4div4sf2 */

            default:
              return -1;
            }

        case E_V2DFmode:
          switch (pattern517 (x3))
            {
            case 0:
              if (!
#line 8887 "../../gcc/config/i386/sse.md"
(TARGET_MMX_WITH_SSE && TARGET_AVX512VL))
                return -1;
              return 4895; /* floatunsv2siv2df2 */

            case 1:
              if (!(
#line 9171 "../../gcc/config/i386/sse.md"
(TARGET_AVX512DQ && 1) && 
#line 537 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                return -1;
              return 4964; /* floatunsv2div2df2 */

            default:
              return -1;
            }

        case E_V8DFmode:
          if (!register_operand (operands[0], E_V8DFmode)
              || GET_MODE (x3) != E_V8DFmode)
            return -1;
          switch (GET_MODE (operands[1]))
            {
            case E_V8DImode:
              if (!nonimmediate_operand (operands[1], E_V8DImode)
                  || !(
#line 9171 "../../gcc/config/i386/sse.md"
(TARGET_AVX512DQ && 1) && 
#line 537 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                return -1;
              return 4950; /* floatunsv8div8df2 */

            case E_V8SImode:
              if (!nonimmediate_operand (operands[1], E_V8SImode)
                  || !(
#line 9335 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 471 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                return -1;
              return 4988; /* floatunsv8siv8df2 */

            default:
              return -1;
            }

        case E_V4DFmode:
          if (!register_operand (operands[0], E_V4DFmode)
              || GET_MODE (x3) != E_V4DFmode)
            return -1;
          switch (GET_MODE (operands[1]))
            {
            case E_V4DImode:
              if (!nonimmediate_operand (operands[1], E_V4DImode)
                  || !(
#line 9171 "../../gcc/config/i386/sse.md"
(TARGET_AVX512DQ && 1) && 
#line 537 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                return -1;
              return 4958; /* floatunsv4div4df2 */

            case E_V4SImode:
              if (!nonimmediate_operand (operands[1], E_V4SImode)
                  || !(
#line 9335 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 471 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                return -1;
              return 4990; /* floatunsv4siv4df2 */

            default:
              return -1;
            }

        default:
          return -1;
        }

    case VEC_SELECT:
      if (GET_MODE (x4) != E_V2SImode)
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
          || !register_operand (operands[0], E_V2DFmode)
          || GET_MODE (x3) != E_V2DFmode)
        return -1;
      x8 = XEXP (x4, 0);
      operands[1] = x8;
      if (!nonimmediate_operand (operands[1], E_V4SImode)
          || !
#line 9347 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))
        return -1;
      return 4992; /* *floatunsv2siv2df2 */

    default:
      return -1;
    }
}

 int
recog_345 (rtx x1 ATTRIBUTE_UNUSED,
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
        return 7758; /* *avx2_uminv32qi3 */
      if (!register_operand (operands[1], E_V32QImode)
          || !(
#line 17719 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 318 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 7837; /* *uminv32qi3 */

    case 1:
      if (nonimmediate_operand (operands[1], E_V16HImode)
          && 
#line 17667 "../../gcc/config/i386/sse.md"
(TARGET_AVX2 && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
        return 7762; /* *avx2_uminv16hi3 */
      if (!register_operand (operands[1], E_V16HImode)
          || !(
#line 17719 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 319 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 7853; /* *uminv16hi3 */

    case 2:
      if (
#line 17667 "../../gcc/config/i386/sse.md"
(TARGET_AVX2 && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
        return 7766; /* *avx2_uminv8si3 */
      if (!(
#line 17708 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 501 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 7781; /* *avx512f_uminv8si3 */

    case 3:
      if (!(
#line 17708 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 501 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 7773; /* *avx512f_uminv16si3 */

    case 4:
      if (nonimmediate_operand (operands[1], E_V4SImode)
          && nonimmediate_operand (operands[2], E_V4SImode)
          && (
#line 17708 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 501 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return 7789; /* *avx512f_uminv4si3 */
      if (!vector_operand (operands[1], E_V4SImode)
          || !vector_operand (operands[2], E_V4SImode)
          || !
#line 17895 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1
   && 1
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
        return -1;
      return 7879; /* *sse4_1_uminv4si3 */

    case 5:
      if (!(
#line 17708 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 502 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 7797; /* *avx512f_uminv8di3 */

    case 6:
      if (!(
#line 17708 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 502 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 7805; /* *avx512f_uminv4di3 */

    case 7:
      if (!(
#line 17708 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 502 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 7813; /* *avx512f_uminv2di3 */

    case 8:
      if (!(
#line 17719 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 318 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 7821; /* *uminv64qi3 */

    case 9:
      if (register_operand (operands[1], E_V16QImode)
          && nonimmediate_operand (operands[2], E_V16QImode)
          && (
#line 17719 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 318 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return 7829; /* *uminv16qi3 */
      if (!vector_operand (operands[1], E_V16QImode)
          || !vector_operand (operands[2], E_V16QImode)
          || !
#line 17914 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
        return -1;
      return 7882; /* *uminv16qi3 */

    case 10:
      if (!(
#line 17719 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 319 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 7845; /* *uminv32hi3 */

    case 11:
      if (register_operand (operands[1], E_V8HImode)
          && nonimmediate_operand (operands[2], E_V8HImode)
          && (
#line 17719 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 319 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return 7861; /* *uminv8hi3 */
      if (!vector_operand (operands[1], E_V8HImode)
          || !vector_operand (operands[2], E_V8HImode)
          || !
#line 17895 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1
   && 1
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
        return -1;
      return 7875; /* *sse4_1_uminv8hi3 */

    default:
      return -1;
    }
}

 int
recog_351 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  switch (pattern32 (x1))
    {
    case 0:
      if (!
#line 17582 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && TARGET_64BIT
   && ix86_pre_reload_split ()))
        return -1;
      return 7696; /* *rotrv1ti3_internal */

    case 1:
      if (!(
#line 17649 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 501 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 7733; /* avx512f_rorv16si */

    case 2:
      if (!(
#line 17649 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 501 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 7737; /* avx512vl_rorv8si */

    case 3:
      if (const_0_to_255_operand (operands[2], E_SImode)
          && (
#line 17649 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 501 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return 7741; /* avx512vl_rorv4si */
      if (!const_0_to_31_operand (operands[2], E_SImode)
          || !
#line 26611 "../../gcc/config/i386/sse.md"
(TARGET_XOP))
        return -1;
      return 9035; /* xop_rotrv4si3 */

    case 4:
      if (!(
#line 17649 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 502 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 7745; /* avx512f_rorv8di */

    case 5:
      if (!(
#line 17649 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 502 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 7749; /* avx512vl_rorv4di */

    case 6:
      if (const_0_to_255_operand (operands[2], E_SImode)
          && (
#line 17649 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 502 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return 7753; /* avx512vl_rorv2di */
      if (!const_0_to_63_operand (operands[2], E_SImode)
          || !
#line 26611 "../../gcc/config/i386/sse.md"
(TARGET_XOP))
        return -1;
      return 9036; /* xop_rotrv2di3 */

    case 7:
      if (!
#line 26611 "../../gcc/config/i386/sse.md"
(TARGET_XOP))
        return -1;
      return 9033; /* xop_rotrv16qi3 */

    case 8:
      if (!
#line 26611 "../../gcc/config/i386/sse.md"
(TARGET_XOP))
        return -1;
      return 9034; /* xop_rotrv8hi3 */

    case 9:
      if (!(
#line 17639 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 501 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 7709; /* avx512f_rorvv16si */

    case 10:
      if (!(
#line 17639 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 501 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 7713; /* avx512vl_rorvv8si */

    case 11:
      if (!(
#line 17639 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 501 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 7717; /* avx512vl_rorvv4si */

    case 12:
      if (!(
#line 17639 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 502 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 7721; /* avx512f_rorvv8di */

    case 13:
      if (!(
#line 17639 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 502 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 7725; /* avx512vl_rorvv4di */

    case 14:
      if (!(
#line 17639 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 502 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 7729; /* avx512vl_rorvv2di */

    default:
      return -1;
    }
}

 int
recog_356 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 0);
  operands[0] = x3;
  x4 = XVECEXP (x1, 0, 1);
  switch (GET_CODE (x4))
    {
    case CLOBBER:
      x5 = XEXP (x2, 1);
      operands[1] = x5;
      x6 = XEXP (x4, 0);
      switch (GET_CODE (x6))
        {
        case MEM:
          if (GET_MODE (x6) != E_BLKmode)
            return -1;
          x7 = XEXP (x6, 0);
          if (GET_CODE (x7) != SCRATCH)
            return -1;
          switch (GET_MODE (operands[0]))
            {
            case E_SImode:
              if (push_operand (operands[0], E_SImode)
                  && general_no_elim_operand (operands[1], E_SImode)
                  && 
#line 1403 "../../gcc/config/i386/i386.md"
(word_mode == SImode))
                return 74; /* *pushsi2_prologue */
              if (!nonimmediate_operand (operands[0], E_SImode)
                  || !pop_operand (operands[1], E_SImode)
                  || !
#line 1403 "../../gcc/config/i386/i386.md"
(word_mode == SImode))
                return -1;
              return 78; /* *popsi1_epilogue */

            case E_DImode:
              if (push_operand (operands[0], E_DImode)
                  && general_no_elim_operand (operands[1], E_DImode)
                  && 
#line 1403 "../../gcc/config/i386/i386.md"
(word_mode == DImode))
                return 75; /* *pushdi2_prologue */
              if (!nonimmediate_operand (operands[0], E_DImode)
                  || !pop_operand (operands[1], E_DImode)
                  || !
#line 1403 "../../gcc/config/i386/i386.md"
(word_mode == DImode))
                return -1;
              return 79; /* *popdi1_epilogue */

            default:
              return -1;
            }

        case REG:
          if (REGNO (x6) != 17
              || GET_MODE (x6) != E_CCmode)
            return -1;
          switch (GET_MODE (operands[0]))
            {
            case E_SImode:
              if (const0_operand (operands[1], E_SImode))
                {
                  if (register_operand (operands[0], E_SImode)
                      && 
#line 2424 "../../gcc/config/i386/i386.md"
(reload_completed))
                    return 84; /* *movsi_xor */
                  if (memory_operand (operands[0], E_SImode)
                      && 
#line 2434 "../../gcc/config/i386/i386.md"
(reload_completed))
                    return 87; /* *movsi_and */
                }
              if (!nonimmediate_operand (operands[0], E_SImode)
                  || !constm1_operand (operands[1], E_SImode)
                  || !
#line 2444 "../../gcc/config/i386/i386.md"
(reload_completed))
                return -1;
              return 90; /* *movsi_or */

            case E_DImode:
              if (const0_operand (operands[1], E_DImode))
                {
                  if (register_operand (operands[0], E_DImode)
                      && (
#line 2424 "../../gcc/config/i386/i386.md"
(reload_completed) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                    return 85; /* *movdi_xor */
                  if (memory_operand (operands[0], E_DImode)
                      && (
#line 2434 "../../gcc/config/i386/i386.md"
(reload_completed) && 
#line 1164 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                    return 88; /* *movdi_and */
                }
              if (!nonimmediate_operand (operands[0], E_DImode)
                  || !constm1_operand (operands[1], E_DImode)
                  || !(
#line 2444 "../../gcc/config/i386/i386.md"
(reload_completed) && 
#line 1164 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return -1;
              return 91; /* *movdi_or */

            case E_HImode:
              if (memory_operand (operands[0], E_HImode)
                  && const0_operand (operands[1], E_HImode)
                  && 
#line 2434 "../../gcc/config/i386/i386.md"
(reload_completed))
                return 86; /* *movhi_and */
              if (!nonimmediate_operand (operands[0], E_HImode)
                  || !constm1_operand (operands[1], E_HImode)
                  || !
#line 2444 "../../gcc/config/i386/i386.md"
(reload_completed))
                return -1;
              return 89; /* *movhi_or */

            default:
              return -1;
            }

        default:
          return -1;
        }

    case SET:
      x8 = XEXP (x4, 1);
      switch (GET_CODE (x8))
        {
        case REG:
        case SUBREG:
          if (!rtx_equal_p (x8, operands[0]))
            return -1;
          x5 = XEXP (x2, 1);
          operands[1] = x5;
          x6 = XEXP (x4, 0);
          if (!rtx_equal_p (x6, operands[1]))
            return -1;
          switch (GET_MODE (operands[0]))
            {
            case E_SImode:
              if (!register_operand (operands[0], E_SImode)
                  || !register_operand (operands[1], E_SImode))
                return -1;
              return 107; /* swapsi */

            case E_DImode:
              if (!register_operand (operands[0], E_DImode)
                  || !register_operand (operands[1], E_DImode)
                  || !
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT))
                return -1;
              return 108; /* swapdi */

            case E_QImode:
              if (!register_operand (operands[0], E_QImode)
                  || !register_operand (operands[1], E_QImode))
                return -1;
              return 109; /* *swapqi */

            case E_HImode:
              if (!register_operand (operands[0], E_HImode)
                  || !register_operand (operands[1], E_HImode))
                return -1;
              return 110; /* *swaphi */

            case E_XFmode:
              if (!register_operand (operands[0], E_XFmode)
                  || !register_operand (operands[1], E_XFmode)
                  || !
#line 4644 "../../gcc/config/i386/i386.md"
(TARGET_80387))
                return -1;
              return 173; /* *swapxf */

            default:
              return -1;
            }

        case UNSPEC:
          if (XVECLEN (x8, 0) != 1
              || XINT (x8, 1) != 72
              || GET_MODE (x8) != E_XFmode
              || !register_operand (operands[0], E_SFmode))
            return -1;
          x5 = XEXP (x2, 1);
          operands[3] = x5;
          if (!const1_operand (operands[3], E_SFmode))
            return -1;
          x6 = XEXP (x4, 0);
          operands[1] = x6;
          if (!register_operand (operands[1], E_XFmode))
            return -1;
          x9 = XVECEXP (x8, 0, 0);
          operands[2] = x9;
          if (!register_operand (operands[2], E_XFmode)
              || !
#line 23944 "../../gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && flag_unsafe_math_optimizations))
            return -1;
          return 1714; /* fptanxf4_i387 */

        default:
          return -1;
        }

    case UNSPEC:
      if (XVECLEN (x4, 0) != 1
          || XINT (x4, 1) != 108
          || GET_MODE (x4) != E_DImode)
        return -1;
      x10 = XVECEXP (x4, 0, 0);
      if (x10 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
        return -1;
      x5 = XEXP (x2, 1);
      operands[1] = x5;
      if (register_operand (operands[1], E_DImode)
          && push_operand (operands[0], E_DImode)
          && 
#line 3910 "../../gcc/config/i386/i386.md"
(TARGET_64BIT))
        return 161; /* pushp_di */
      if (!pop_operand (operands[1], E_DImode)
          || !register_operand (operands[0], E_DImode)
          || !
#line 3918 "../../gcc/config/i386/i386.md"
(TARGET_APX_PPX))
        return -1;
      return 162; /* popp_di */

    default:
      return -1;
    }
}

 int
recog_368 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10;
  int res ATTRIBUTE_UNUSED;
  if (pattern338 (x1) != 0)
    return -1;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  x4 = XEXP (x3, 0);
  x5 = XEXP (x4, 0);
  switch (GET_CODE (x5))
    {
    case REG:
    case SUBREG:
    case MEM:
      operands[1] = x5;
      x6 = XEXP (x4, 1);
      operands[2] = x6;
      switch (GET_MODE (operands[0]))
        {
        case E_HImode:
          if (!register_operand (operands[0], E_HImode)
              || GET_MODE (x3) != E_HImode
              || GET_MODE (x4) != E_QImode
              || !nonimmediate_operand (operands[1], E_QImode)
              || !general_operand (operands[2], E_QImode)
              || !
#line 6677 "../../gcc/config/i386/i386.md"
(TARGET_APX_NDD && true
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
            return -1;
          return 287; /* *addqi_1_zexthi */

        case E_SImode:
          if (!register_operand (operands[0], E_SImode)
              || GET_MODE (x3) != E_SImode)
            return -1;
          switch (GET_MODE (x4))
            {
            case E_QImode:
              if (!nonimmediate_operand (operands[1], E_QImode)
                  || !general_operand (operands[2], E_QImode)
                  || !
#line 6677 "../../gcc/config/i386/i386.md"
(TARGET_APX_NDD && true
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
                return -1;
              return 289; /* *addqi_1_zextsi */

            case E_HImode:
              if (!nonimmediate_operand (operands[1], E_HImode)
                  || !general_operand (operands[2], E_HImode)
                  || !
#line 6715 "../../gcc/config/i386/i386.md"
(TARGET_APX_NDD && true
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
                return -1;
              return 293; /* *addhi_1_zextsi */

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
                  || !general_operand (operands[2], E_QImode)
                  || !
#line 6677 "../../gcc/config/i386/i386.md"
(TARGET_APX_NDD && true
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
                return -1;
              return 291; /* *addqi_1_zextdi */

            case E_HImode:
              if (!nonimmediate_operand (operands[1], E_HImode)
                  || !general_operand (operands[2], E_HImode)
                  || !
#line 6715 "../../gcc/config/i386/i386.md"
(TARGET_APX_NDD && true
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
                return -1;
              return 295; /* *addhi_1_zextdi */

            case E_SImode:
              if (!nonimmediate_operand (operands[1], E_SImode)
                  || !x86_64_general_operand (operands[2], E_SImode)
                  || !
#line 6760 "../../gcc/config/i386/i386.md"
(TARGET_64BIT
   && ix86_binary_operator_ok (PLUS, SImode, operands, TARGET_APX_NDD)))
                return -1;
              return 296; /* addsi_1_zext */

            default:
              return -1;
            }

        default:
          return -1;
        }

    case PLUS:
      x7 = XEXP (x5, 0);
      switch (GET_CODE (x7))
        {
        case LTU:
        case UNLT:
          operands[3] = x7;
          x8 = XEXP (x7, 0);
          if (GET_CODE (x8) != REG
              || REGNO (x8) != 17)
            return -1;
          x9 = XEXP (x7, 1);
          if (x9 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
            return -1;
          x10 = XEXP (x5, 1);
          operands[1] = x10;
          x6 = XEXP (x4, 1);
          operands[2] = x6;
          switch (pattern1152 (x3))
            {
            case 0:
              if (pattern1747 (x5, 
E_QImode) != 0
                  || !
#line 8895 "../../gcc/config/i386/i386.md"
(TARGET_APX_NDD
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
                return -1;
              return 465; /* *addqi3_carry_zexthi */

            case 1:
              if (pattern1747 (x5, 
E_QImode) != 0
                  || !
#line 8895 "../../gcc/config/i386/i386.md"
(TARGET_APX_NDD
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
                return -1;
              return 466; /* *addqi3_carry_zextsi */

            case 2:
              if (pattern1747 (x5, 
E_HImode) != 0
                  || !
#line 8914 "../../gcc/config/i386/i386.md"
(TARGET_APX_NDD
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
                return -1;
              return 468; /* *addhi3_carry_zextsi */

            case 3:
              if (pattern1747 (x5, 
E_QImode) != 0
                  || !
#line 8895 "../../gcc/config/i386/i386.md"
(TARGET_APX_NDD
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
                return -1;
              return 467; /* *addqi3_carry_zextdi */

            case 4:
              if (pattern1747 (x5, 
E_HImode) != 0
                  || !
#line 8914 "../../gcc/config/i386/i386.md"
(TARGET_APX_NDD
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
                return -1;
              return 469; /* *addhi3_carry_zextdi */

            case 5:
              if (pattern1747 (x5, 
E_SImode) != 0
                  || !
#line 8933 "../../gcc/config/i386/i386.md"
(TARGET_64BIT
   && ix86_binary_operator_ok (PLUS, SImode, operands, TARGET_APX_NDD)))
                return -1;
              return 470; /* *addsi3_carry_zext */

            default:
              return -1;
            }

        default:
          return -1;
        }

    case LTU:
    case UNLT:
      switch (pattern1153 (x3))
        {
        case 0:
          if (!ix86_carry_flag_operator (operands[2], E_QImode)
              || !nonimmediate_operand (operands[1], E_QImode)
              || !
#line 8952 "../../gcc/config/i386/i386.md"
(TARGET_APX_NDD))
            return -1;
          return 471; /* *addqi3_carry_zexthi_0 */

        case 1:
          if (!ix86_carry_flag_operator (operands[2], E_QImode)
              || !nonimmediate_operand (operands[1], E_QImode)
              || !
#line 8952 "../../gcc/config/i386/i386.md"
(TARGET_APX_NDD))
            return -1;
          return 472; /* *addqi3_carry_zextsi_0 */

        case 2:
          if (!ix86_carry_flag_operator (operands[2], E_HImode)
              || !nonimmediate_operand (operands[1], E_HImode)
              || !
#line 8966 "../../gcc/config/i386/i386.md"
(TARGET_APX_NDD))
            return -1;
          return 474; /* *addhi3_carry_zextsi_0 */

        case 3:
          if (!ix86_carry_flag_operator (operands[2], E_QImode)
              || !nonimmediate_operand (operands[1], E_QImode)
              || !
#line 8952 "../../gcc/config/i386/i386.md"
(TARGET_APX_NDD))
            return -1;
          return 473; /* *addqi3_carry_zextdi_0 */

        case 4:
          if (!ix86_carry_flag_operator (operands[2], E_HImode)
              || !nonimmediate_operand (operands[1], E_HImode)
              || !
#line 8966 "../../gcc/config/i386/i386.md"
(TARGET_APX_NDD))
            return -1;
          return 475; /* *addhi3_carry_zextdi_0 */

        case 5:
          if (!ix86_carry_flag_operator (operands[2], E_SImode)
              || !nonimmediate_operand (operands[1], E_SImode)
              || !
#line 8980 "../../gcc/config/i386/i386.md"
(TARGET_64BIT))
            return -1;
          return 476; /* *addsi3_carry_zext_0 */

        default:
          return -1;
        }

    case GE:
    case GEU:
      switch (pattern1153 (x3))
        {
        case 0:
          if (!ix86_carry_flag_unset_operator (operands[2], E_QImode)
              || !nonimmediate_operand (operands[1], E_QImode)
              || !
#line 8997 "../../gcc/config/i386/i386.md"
(TARGET_APX_NDD))
            return -1;
          return 477; /* *addqi3_carry_zexthi_0r */

        case 1:
          if (!ix86_carry_flag_unset_operator (operands[2], E_QImode)
              || !nonimmediate_operand (operands[1], E_QImode)
              || !
#line 8997 "../../gcc/config/i386/i386.md"
(TARGET_APX_NDD))
            return -1;
          return 478; /* *addqi3_carry_zextsi_0r */

        case 2:
          if (!ix86_carry_flag_unset_operator (operands[2], E_HImode)
              || !nonimmediate_operand (operands[1], E_HImode)
              || !
#line 9011 "../../gcc/config/i386/i386.md"
(TARGET_APX_NDD))
            return -1;
          return 480; /* *addhi3_carry_zextsi_0r */

        case 3:
          if (!ix86_carry_flag_unset_operator (operands[2], E_QImode)
              || !nonimmediate_operand (operands[1], E_QImode)
              || !
#line 8997 "../../gcc/config/i386/i386.md"
(TARGET_APX_NDD))
            return -1;
          return 479; /* *addqi3_carry_zextdi_0r */

        case 4:
          if (!ix86_carry_flag_unset_operator (operands[2], E_HImode)
              || !nonimmediate_operand (operands[1], E_HImode)
              || !
#line 9011 "../../gcc/config/i386/i386.md"
(TARGET_APX_NDD))
            return -1;
          return 481; /* *addhi3_carry_zextdi_0r */

        case 5:
          if (!ix86_carry_flag_unset_operator (operands[2], E_SImode)
              || !nonimmediate_operand (operands[1], E_SImode)
              || !
#line 9025 "../../gcc/config/i386/i386.md"
(TARGET_64BIT))
            return -1;
          return 482; /* *addsi3_carry_zext_0r */

        default:
          return -1;
        }

    case UNSPEC:
      if (pattern1154 (x5) != 0
          || !register_operand (operands[0], E_DImode)
          || GET_MODE (x3) != E_DImode
          || GET_MODE (x4) != E_SImode)
        return -1;
      x6 = XEXP (x4, 1);
      operands[1] = x6;
      if (!register_operand (operands[1], E_SImode)
          || !
#line 23090 "../../gcc/config/i386/i386.md"
(TARGET_X32))
        return -1;
      return 1657; /* *add_tp_x32_zext */

    default:
      return -1;
    }
}

 int
recog_370 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12, x13, x14, x15;
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
      if (pattern338 (x1) != 0)
        return -1;
      switch (pattern1151 (x3))
        {
        case 0:
          if (!
#line 4839 "../../gcc/config/i386/i386.md"
(TARGET_ZERO_EXTEND_WITH_AND && optimize_function_for_speed_p (cfun)))
            return -1;
          return 178; /* zero_extendqisi2_and */

        case 1:
          if (!
#line 4839 "../../gcc/config/i386/i386.md"
(TARGET_ZERO_EXTEND_WITH_AND && optimize_function_for_speed_p (cfun)))
            return -1;
          return 179; /* zero_extendhisi2_and */

        case 2:
          if (!
#line 4893 "../../gcc/config/i386/i386.md"
(TARGET_ZERO_EXTEND_WITH_AND && optimize_function_for_speed_p (cfun)))
            return -1;
          return 182; /* zero_extendqihi2_and */

        default:
          return -1;
        }

    case PLUS:
      return recog_368 (x1, insn, pnum_clobbers);

    case MINUS:
      return recog_369 (x1, insn, pnum_clobbers);

    case MULT:
      if (pattern339 (x1) != 0)
        return -1;
      switch (GET_MODE (operands[0]))
        {
        case E_SImode:
          if (!register_operand (operands[0], E_SImode)
              || GET_MODE (x3) != E_SImode
              || GET_MODE (x4) != E_HImode
              || !nonimmediate_operand (operands[1], E_HImode)
              || !immediate_operand (operands[2], E_HImode)
              || !
#line 10643 "../../gcc/config/i386/i386.md"
(TARGET_APX_ZU && true))
            return -1;
          return 597; /* *imulhisizu */

        case E_DImode:
          if (!register_operand (operands[0], E_DImode)
              || GET_MODE (x3) != E_DImode)
            return -1;
          switch (GET_MODE (x4))
            {
            case E_HImode:
              if (!nonimmediate_operand (operands[1], E_HImode)
                  || !immediate_operand (operands[2], E_HImode)
                  || !
#line 10643 "../../gcc/config/i386/i386.md"
(TARGET_APX_ZU && true))
                return -1;
              return 599; /* *imulhidizu */

            case E_SImode:
              if (!nonimmediate_operand (operands[1], E_SImode)
                  || !x86_64_general_operand (operands[2], E_SImode)
                  || !
#line 10655 "../../gcc/config/i386/i386.md"
(TARGET_64BIT
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))
   && true))
                return -1;
              return 601; /* *mulsi3_1_zext */

            default:
              return -1;
            }

        default:
          return -1;
        }

    case DIV:
      if (pattern340 (x1, pnum_clobbers, 
MOD) != 0)
        return -1;
      x5 = XEXP (x4, 0);
      operands[2] = x5;
      if (!register_operand (operands[2], E_SImode))
        return -1;
      x6 = XEXP (x4, 1);
      operands[3] = x6;
      if (!nonimmediate_operand (operands[3], E_SImode))
        return -1;
      x7 = XVECEXP (x1, 0, 1);
      x8 = XEXP (x7, 0);
      operands[1] = x8;
      if (!register_operand (operands[1], E_SImode))
        return -1;
      x9 = XEXP (x7, 1);
      x10 = XEXP (x9, 0);
      if (!rtx_equal_p (x10, operands[2]))
        return -1;
      x11 = XEXP (x9, 1);
      if (!rtx_equal_p (x11, operands[3])
          || !
#line 11684 "../../gcc/config/i386/i386.md"
(TARGET_64BIT))
        return -1;
      *pnum_clobbers = 1;
      return 655; /* *divmodsi4_zext_1 */

    case UDIV:
      if (pattern340 (x1, pnum_clobbers, 
UMOD) != 0)
        return -1;
      x5 = XEXP (x4, 0);
      operands[2] = x5;
      if (!register_operand (operands[2], E_SImode))
        return -1;
      x6 = XEXP (x4, 1);
      operands[3] = x6;
      x7 = XVECEXP (x1, 0, 1);
      x8 = XEXP (x7, 0);
      operands[1] = x8;
      if (!register_operand (operands[1], E_SImode))
        return -1;
      x9 = XEXP (x7, 1);
      switch (pattern1619 (x9))
        {
        case 0:
          if (!
#line 11719 "../../gcc/config/i386/i386.md"
(TARGET_64BIT))
            return -1;
          *pnum_clobbers = 1;
          return 656; /* *udivmodsi4_zext_1 */

        case 1:
          if (!
#line 11741 "../../gcc/config/i386/i386.md"
(TARGET_64BIT
   && IN_RANGE (exact_log2 (UINTVAL (operands[3])), 1, 31)))
            return -1;
          *pnum_clobbers = 1;
          return 657; /* *udivmodsi4_pow2_zext_1 */

        default:
          return -1;
        }

    case MOD:
      if (pattern341 (x1, pnum_clobbers, 
DIV) != 0)
        return -1;
      x5 = XEXP (x4, 0);
      operands[2] = x5;
      if (!register_operand (operands[2], E_SImode))
        return -1;
      x6 = XEXP (x4, 1);
      operands[3] = x6;
      if (!nonimmediate_operand (operands[3], E_SImode))
        return -1;
      x7 = XVECEXP (x1, 0, 1);
      x8 = XEXP (x7, 0);
      operands[0] = x8;
      if (!register_operand (operands[0], E_SImode))
        return -1;
      x9 = XEXP (x7, 1);
      x10 = XEXP (x9, 0);
      if (!rtx_equal_p (x10, operands[2]))
        return -1;
      x11 = XEXP (x9, 1);
      if (!rtx_equal_p (x11, operands[3])
          || !
#line 11767 "../../gcc/config/i386/i386.md"
(TARGET_64BIT))
        return -1;
      *pnum_clobbers = 1;
      return 658; /* *divmodsi4_zext_2 */

    case UMOD:
      if (pattern341 (x1, pnum_clobbers, 
UDIV) != 0)
        return -1;
      x5 = XEXP (x4, 0);
      operands[2] = x5;
      if (!register_operand (operands[2], E_SImode))
        return -1;
      x6 = XEXP (x4, 1);
      operands[3] = x6;
      x7 = XVECEXP (x1, 0, 1);
      x8 = XEXP (x7, 0);
      operands[0] = x8;
      if (!register_operand (operands[0], E_SImode))
        return -1;
      x9 = XEXP (x7, 1);
      switch (pattern1619 (x9))
        {
        case 0:
          if (!
#line 11803 "../../gcc/config/i386/i386.md"
(TARGET_64BIT))
            return -1;
          *pnum_clobbers = 1;
          return 659; /* *udivmodsi4_zext_2 */

        case 1:
          if (!
#line 11825 "../../gcc/config/i386/i386.md"
(TARGET_64BIT
   && IN_RANGE (exact_log2 (UINTVAL (operands[3])), 1, 31)))
            return -1;
          *pnum_clobbers = 1;
          return 660; /* *udivmodsi4_pow2_zext_2 */

        default:
          return -1;
        }

    case AND:
      if (pattern338 (x1) != 0)
        return -1;
      x5 = XEXP (x4, 0);
      switch (GET_CODE (x5))
        {
        case REG:
        case SUBREG:
        case MEM:
          switch (pattern343 (x3))
            {
            case 0:
              if (!
#line 12626 "../../gcc/config/i386/i386.md"
(TARGET_APX_NDD && true
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
                return -1;
              return 709; /* *andqi_1_zexthi */

            case 1:
              if (!
#line 12626 "../../gcc/config/i386/i386.md"
(TARGET_APX_NDD && true
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
                return -1;
              return 711; /* *andqi_1_zextsi */

            case 2:
              if (!
#line 12640 "../../gcc/config/i386/i386.md"
(TARGET_APX_NDD && true
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
                return -1;
              return 715; /* *andhi_1_zextsi */

            case 3:
              if (!
#line 12626 "../../gcc/config/i386/i386.md"
(TARGET_APX_NDD && true
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
                return -1;
              return 713; /* *andqi_1_zextdi */

            case 4:
              if (!
#line 12640 "../../gcc/config/i386/i386.md"
(TARGET_APX_NDD && true
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
                return -1;
              return 717; /* *andhi_1_zextdi */

            case 5:
              if (!
#line 12656 "../../gcc/config/i386/i386.md"
(TARGET_64BIT
   && ix86_binary_operator_ok (AND, SImode, operands, TARGET_APX_NDD)))
                return -1;
              return 718; /* *andsi_1_zext */

            default:
              return -1;
            }

        case PLUS:
          if (pattern693 (x5) != 0
              || !register_operand (operands[0], E_DImode)
              || GET_MODE (x3) != E_DImode
              || GET_MODE (x4) != E_SImode)
            return -1;
          x12 = XEXP (x5, 0);
          x13 = XEXP (x12, 1);
          operands[2] = x13;
          if (!register_operand (operands[2], E_QImode))
            return -1;
          x6 = XEXP (x4, 1);
          operands[1] = x6;
          if (!nonimmediate_operand (operands[1], E_SImode)
              || !
#line 21959 "../../gcc/config/i386/i386.md"
(TARGET_64BIT && TARGET_BMI2))
            return -1;
          return 1592; /* *bmi2_bzhi_zero_extendsidi_4 */

        default:
          return -1;
        }

    case IOR:
      switch (pattern344 (x1))
        {
        case 0:
          if (!
#line 13715 "../../gcc/config/i386/i386.md"
(TARGET_APX_NDD && true
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
            return -1;
          return 844; /* *iorqi_1_zexthi */

        case 1:
          if (!
#line 13715 "../../gcc/config/i386/i386.md"
(TARGET_APX_NDD && true
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
            return -1;
          return 848; /* *iorqi_1_zextsi */

        case 2:
          if (!
#line 13729 "../../gcc/config/i386/i386.md"
(TARGET_APX_NDD && true
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
            return -1;
          return 856; /* *iorhi_1_zextsi */

        case 3:
          if (!
#line 13715 "../../gcc/config/i386/i386.md"
(TARGET_APX_NDD && true
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
            return -1;
          return 852; /* *iorqi_1_zextdi */

        case 4:
          if (!
#line 13729 "../../gcc/config/i386/i386.md"
(TARGET_APX_NDD && true
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
            return -1;
          return 860; /* *iorhi_1_zextdi */

        case 5:
          if (!
#line 13745 "../../gcc/config/i386/i386.md"
(TARGET_64BIT
   && ix86_binary_operator_ok (IOR, SImode, operands, TARGET_APX_NDD)))
            return -1;
          return 863; /* *iorsi_1_zext */

        default:
          return -1;
        }

    case XOR:
      switch (pattern344 (x1))
        {
        case 0:
          if (!
#line 13715 "../../gcc/config/i386/i386.md"
(TARGET_APX_NDD && true
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
            return -1;
          return 846; /* *xorqi_1_zexthi */

        case 1:
          if (!
#line 13715 "../../gcc/config/i386/i386.md"
(TARGET_APX_NDD && true
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
            return -1;
          return 850; /* *xorqi_1_zextsi */

        case 2:
          if (!
#line 13729 "../../gcc/config/i386/i386.md"
(TARGET_APX_NDD && true
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
            return -1;
          return 858; /* *xorhi_1_zextsi */

        case 3:
          if (!
#line 13715 "../../gcc/config/i386/i386.md"
(TARGET_APX_NDD && true
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
            return -1;
          return 854; /* *xorqi_1_zextdi */

        case 4:
          if (!
#line 13729 "../../gcc/config/i386/i386.md"
(TARGET_APX_NDD && true
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
            return -1;
          return 862; /* *xorhi_1_zextdi */

        case 5:
          if (!
#line 13745 "../../gcc/config/i386/i386.md"
(TARGET_64BIT
   && ix86_binary_operator_ok (XOR, SImode, operands, TARGET_APX_NDD)))
            return -1;
          return 864; /* *xorsi_1_zext */

        default:
          return -1;
        }

    case NEG:
      if (pattern345 (x1) != 0)
        return -1;
      switch (pattern347 (x3))
        {
        case 0:
          if (!
#line 14360 "../../gcc/config/i386/i386.md"
(TARGET_APX_NDD && true))
            return -1;
          return 963; /* *negqi_1_zexthi */

        case 1:
          if (!
#line 14360 "../../gcc/config/i386/i386.md"
(TARGET_APX_NDD && true))
            return -1;
          return 965; /* *negqi_1_zextsi */

        case 2:
          if (!
#line 14370 "../../gcc/config/i386/i386.md"
(TARGET_APX_NDD && true))
            return -1;
          return 969; /* *neghi_1_zextsi */

        case 3:
          if (!
#line 14360 "../../gcc/config/i386/i386.md"
(TARGET_APX_NDD && true))
            return -1;
          return 967; /* *negqi_1_zextdi */

        case 4:
          if (!
#line 14370 "../../gcc/config/i386/i386.md"
(TARGET_APX_NDD && true))
            return -1;
          return 971; /* *neghi_1_zextdi */

        case 5:
          if (!
#line 14381 "../../gcc/config/i386/i386.md"
(TARGET_64BIT
   && ix86_unary_operator_ok (NEG, SImode, operands, TARGET_APX_NDD)))
            return -1;
          return 972; /* *negsi_1_zext */

        default:
          return -1;
        }

    case ASHIFT:
      switch (pattern349 (x1))
        {
        case 0:
          if (!
#line 16008 "../../gcc/config/i386/i386.md"
(TARGET_APX_NDD && true))
            return -1;
          return 1094; /* *ashlqi3_1_zexthi */

        case 1:
          if (!
#line 16008 "../../gcc/config/i386/i386.md"
(TARGET_APX_NDD && true))
            return -1;
          return 1096; /* *ashlqi3_1_zextsi */

        case 2:
          if (!
#line 16019 "../../gcc/config/i386/i386.md"
(TARGET_APX_NDD && true))
            return -1;
          return 1100; /* *ashlhi3_1_zextsi */

        case 3:
          if (!
#line 16008 "../../gcc/config/i386/i386.md"
(TARGET_APX_NDD && true))
            return -1;
          return 1098; /* *ashlqi3_1_zextdi */

        case 4:
          if (!
#line 16019 "../../gcc/config/i386/i386.md"
(TARGET_APX_NDD && true))
            return -1;
          return 1102; /* *ashlhi3_1_zextdi */

        case 5:
          if (!
#line 16031 "../../gcc/config/i386/i386.md"
(TARGET_64BIT
   && ix86_binary_operator_ok (ASHIFT, SImode, operands, TARGET_APX_NDD)))
            return -1;
          return 1103; /* *ashlsi3_1_zext */

        default:
          return -1;
        }

    case ASHIFTRT:
      if (pattern339 (x1) != 0)
        return -1;
      switch (GET_MODE (operands[0]))
        {
        case E_DImode:
          if (!register_operand (operands[0], E_DImode)
              || GET_MODE (x3) != E_DImode)
            return -1;
          switch (GET_MODE (x4))
            {
            case E_SImode:
              if (!nonimmediate_operand (operands[1], E_SImode))
                return -1;
              if (const_int_operand (operands[2], E_QImode)
                  && 
#line 17266 "../../gcc/config/i386/i386.md"
(TARGET_64BIT && INTVAL (operands[2]) == 31
   && (TARGET_USE_CLTD || optimize_function_for_size_p (cfun))
   && ix86_binary_operator_ok (ASHIFTRT, SImode, operands, TARGET_APX_NDD)))
                return 1170; /* *ashrsi3_cvt_zext */
              if (!nonmemory_operand (operands[2], E_QImode)
                  || !
#line 17478 "../../gcc/config/i386/i386.md"
(TARGET_64BIT
   && ix86_binary_operator_ok (ASHIFTRT, SImode, operands, TARGET_APX_NDD)))
                return -1;
              return 1207; /* *ashrsi3_1_zext */

            case E_QImode:
              if (!nonimmediate_operand (operands[1], E_QImode)
                  || !nonmemory_operand (operands[2], E_QImode)
                  || !
#line 17455 "../../gcc/config/i386/i386.md"
(TARGET_APX_NDD && true))
                return -1;
              return 1197; /* *ashrqi3_1_zextdi */

            case E_HImode:
              if (!nonimmediate_operand (operands[1], E_HImode)
                  || !nonmemory_operand (operands[2], E_QImode)
                  || !
#line 17466 "../../gcc/config/i386/i386.md"
(TARGET_APX_NDD && true))
                return -1;
              return 1205; /* *ashrhi3_1_zextdi */

            default:
              return -1;
            }

        case E_HImode:
          if (!register_operand (operands[0], E_HImode)
              || GET_MODE (x3) != E_HImode
              || GET_MODE (x4) != E_QImode
              || !nonimmediate_operand (operands[1], E_QImode)
              || !nonmemory_operand (operands[2], E_QImode)
              || !
#line 17455 "../../gcc/config/i386/i386.md"
(TARGET_APX_NDD && true))
            return -1;
          return 1189; /* *ashrqi3_1_zexthi */

        case E_SImode:
          if (!register_operand (operands[0], E_SImode)
              || GET_MODE (x3) != E_SImode
              || !nonmemory_operand (operands[2], E_QImode))
            return -1;
          switch (GET_MODE (x4))
            {
            case E_QImode:
              if (!nonimmediate_operand (operands[1], E_QImode)
                  || !
#line 17455 "../../gcc/config/i386/i386.md"
(TARGET_APX_NDD && true))
                return -1;
              return 1193; /* *ashrqi3_1_zextsi */

            case E_HImode:
              if (!nonimmediate_operand (operands[1], E_HImode)
                  || !
#line 17466 "../../gcc/config/i386/i386.md"
(TARGET_APX_NDD && true))
                return -1;
              return 1201; /* *ashrhi3_1_zextsi */

            default:
              return -1;
            }

        default:
          return -1;
        }

    case LSHIFTRT:
      x14 = XEXP (x2, 0);
      operands[0] = x14;
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
          switch (pattern348 (x3))
            {
            case 0:
              if (!
#line 17455 "../../gcc/config/i386/i386.md"
(TARGET_APX_NDD && true))
                return -1;
              return 1187; /* *lshrqi3_1_zexthi */

            case 1:
              if (!
#line 17455 "../../gcc/config/i386/i386.md"
(TARGET_APX_NDD && true))
                return -1;
              return 1191; /* *lshrqi3_1_zextsi */

            case 2:
              if (!
#line 17466 "../../gcc/config/i386/i386.md"
(TARGET_APX_NDD && true))
                return -1;
              return 1199; /* *lshrhi3_1_zextsi */

            case 3:
              if (!
#line 17455 "../../gcc/config/i386/i386.md"
(TARGET_APX_NDD && true))
                return -1;
              return 1195; /* *lshrqi3_1_zextdi */

            case 4:
              if (!
#line 17466 "../../gcc/config/i386/i386.md"
(TARGET_APX_NDD && true))
                return -1;
              return 1203; /* *lshrhi3_1_zextdi */

            case 5:
              if (!
#line 17478 "../../gcc/config/i386/i386.md"
(TARGET_64BIT
   && ix86_binary_operator_ok (LSHIFTRT, SImode, operands, TARGET_APX_NDD)))
                return -1;
              return 1206; /* *lshrsi3_1_zext */

            default:
              return -1;
            }

        case UNSPEC:
          if (XVECLEN (x7, 0) != 1
              || XINT (x7, 1) != 174)
            return -1;
          x15 = XVECEXP (x7, 0, 0);
          if (x15 != const_int_rtx[MAX_SAVED_CONST_INT + 0]
              || pattern1233 (x3, 
E_SImode, 
E_DImode) != 0
              || !const_0_to_31_operand (operands[2], E_VOIDmode)
              || !
#line 2307 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW))
            return -1;
          return 2603; /* *klshrsi3_1_zext */

        default:
          return -1;
        }

    case ROTATE:
      switch (pattern349 (x1))
        {
        case 0:
          if (!
#line 18570 "../../gcc/config/i386/i386.md"
(TARGET_APX_NDD && true))
            return -1;
          return 1352; /* *rotlqi3_1_zexthi */

        case 1:
          if (!
#line 18570 "../../gcc/config/i386/i386.md"
(TARGET_APX_NDD && true))
            return -1;
          return 1356; /* *rotlqi3_1_zextsi */

        case 2:
          if (!
#line 18581 "../../gcc/config/i386/i386.md"
(TARGET_APX_NDD && true))
            return -1;
          return 1364; /* *rotlhi3_1_zextsi */

        case 3:
          if (!
#line 18570 "../../gcc/config/i386/i386.md"
(TARGET_APX_NDD && true))
            return -1;
          return 1360; /* *rotlqi3_1_zextdi */

        case 4:
          if (!
#line 18581 "../../gcc/config/i386/i386.md"
(TARGET_APX_NDD && true))
            return -1;
          return 1368; /* *rotlhi3_1_zextdi */

        case 5:
          if (!
#line 18593 "../../gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (ROTATE, SImode, operands)))
            return -1;
          return 1371; /* *rotlsi3_1_zext */

        default:
          return -1;
        }

    case ROTATERT:
      switch (pattern349 (x1))
        {
        case 0:
          if (!
#line 18570 "../../gcc/config/i386/i386.md"
(TARGET_APX_NDD && true))
            return -1;
          return 1354; /* *rotrqi3_1_zexthi */

        case 1:
          if (!
#line 18570 "../../gcc/config/i386/i386.md"
(TARGET_APX_NDD && true))
            return -1;
          return 1358; /* *rotrqi3_1_zextsi */

        case 2:
          if (!
#line 18581 "../../gcc/config/i386/i386.md"
(TARGET_APX_NDD && true))
            return -1;
          return 1366; /* *rotrhi3_1_zextsi */

        case 3:
          if (!
#line 18570 "../../gcc/config/i386/i386.md"
(TARGET_APX_NDD && true))
            return -1;
          return 1362; /* *rotrqi3_1_zextdi */

        case 4:
          if (!
#line 18581 "../../gcc/config/i386/i386.md"
(TARGET_APX_NDD && true))
            return -1;
          return 1370; /* *rotrhi3_1_zextdi */

        case 5:
          if (!
#line 18593 "../../gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (ROTATERT, SImode, operands)))
            return -1;
          return 1372; /* *rotrsi3_1_zext */

        default:
          return -1;
        }

    case CTZ:
      if (GET_MODE (x4) != E_SImode)
        return -1;
      x14 = XEXP (x2, 0);
      operands[0] = x14;
      if (!register_operand (operands[0], E_DImode)
          || GET_MODE (x3) != E_DImode)
        return -1;
      switch (pattern937 (x1, pnum_clobbers))
        {
        case 0:
          if (!
#line 21165 "../../gcc/config/i386/i386.md"
(TARGET_64BIT))
            return -1;
          return 1521; /* *ctzsidi2_uext */

        case 1:
          if (!
#line 21204 "../../gcc/config/i386/i386.md"
(TARGET_64BIT))
            return -1;
          *pnum_clobbers = 1;
          return 1523; /* *ctzsidi2_uext_falsedep */

        default:
          return -1;
        }

    case CLZ:
      if (GET_MODE (x4) != E_SImode)
        return -1;
      x14 = XEXP (x2, 0);
      operands[0] = x14;
      if (!register_operand (operands[0], E_DImode)
          || GET_MODE (x3) != E_DImode)
        return -1;
      switch (pattern554 (x1, pnum_clobbers))
        {
        case 0:
          if (!nonimmediate_operand (operands[1], E_SImode)
              || !
#line 21599 "../../gcc/config/i386/i386.md"
(TARGET_LZCNT && TARGET_64BIT))
            return -1;
          return 1543; /* *clzsi2_lzcnt_zext_2 */

        case 1:
          x7 = XVECEXP (x1, 0, 1);
          x15 = XVECEXP (x7, 0, 0);
          switch (pattern1422 (x15))
            {
            case 0:
              if (!
#line 21624 "../../gcc/config/i386/i386.md"
(TARGET_LZCNT))
                return -1;
              *pnum_clobbers = 1;
              return 1544; /* *clzsi2_lzcnt_zext_2_falsedep */

            case 1:
              if (!(
#line 21624 "../../gcc/config/i386/i386.md"
(TARGET_LZCNT) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return -1;
              *pnum_clobbers = 1;
              return 1545; /* *clzsi2_lzcnt_zext_2_falsedep */

            default:
              return -1;
            }

        default:
          return -1;
        }

    case POPCOUNT:
      x14 = XEXP (x2, 0);
      operands[0] = x14;
      switch (pattern554 (x1, pnum_clobbers))
        {
        case 0:
          switch (GET_MODE (operands[0]))
            {
            case E_DImode:
              if (pattern346 (x3, 
E_SImode, 
E_DImode) != 0
                  || !
#line 22292 "../../gcc/config/i386/i386.md"
(TARGET_POPCNT && TARGET_64BIT))
                return -1;
              return 1628; /* *popcountsi2_zext_2 */

            case E_SImode:
              if (pattern346 (x3, 
E_HImode, 
E_SImode) != 0
                  || !
#line 22358 "../../gcc/config/i386/i386.md"
(TARGET_POPCNT
   && ix86_pre_reload_split ()))
                return -1;
              return 1631; /* *popcounthi2_2 */

            default:
              return -1;
            }

        case 1:
          if (!register_operand (operands[0], E_DImode)
              || GET_MODE (x3) != E_DImode
              || GET_MODE (x4) != E_SImode
              || !nonimmediate_operand (operands[1], E_SImode))
            return -1;
          x7 = XVECEXP (x1, 0, 1);
          x15 = XVECEXP (x7, 0, 0);
          operands[2] = x15;
          if (!register_operand (operands[2], E_DImode)
              || !
#line 22323 "../../gcc/config/i386/i386.md"
(TARGET_POPCNT && TARGET_64BIT))
            return -1;
          *pnum_clobbers = 1;
          return 1629; /* *popcountsi2_zext_2_falsedep */

        default:
          return -1;
        }

    case NOT:
      if (GET_MODE (x4) != E_SImode)
        return -1;
      x7 = XVECEXP (x1, 0, 1);
      if (pattern380 (x7, 
174, 
0) != 0)
        return -1;
      x14 = XEXP (x2, 0);
      operands[0] = x14;
      if (!register_operand (operands[0], E_DImode)
          || GET_MODE (x3) != E_DImode)
        return -1;
      x5 = XEXP (x4, 0);
      operands[1] = x5;
      if (!register_operand (operands[1], E_SImode)
          || !
#line 2230 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW))
        return -1;
      return 2590; /* *knotsi_1_zext */

    case UNSPEC:
      return recog_367 (x1, insn, pnum_clobbers);

    default:
      return -1;
    }
}

 int
recog_395 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12, x13, x14, x15, x16, x17;
  rtx x18, x19, x20, x21, x22, x23, x24, x25;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 0);
  operands[0] = x3;
  x4 = XEXP (x2, 1);
  x5 = XEXP (x4, 0);
  x6 = XEXP (x5, 0);
  switch (GET_CODE (x6))
    {
    case ZERO_EXTEND:
      x7 = XEXP (x5, 1);
      if (GET_CODE (x7) != CONST_INT)
        return -1;
      x8 = XEXP (x4, 1);
      if (GET_CODE (x8) != ZERO_EXTEND)
        return -1;
      x9 = XEXP (x6, 0);
      switch (GET_CODE (x9))
        {
        case TRUNCATE:
          if (GET_MODE (x9) != E_QImode)
            return -1;
          x10 = XEXP (x9, 0);
          if (GET_CODE (x10) != MOD
              || GET_MODE (x10) != E_HImode
              || XWINT (x7, 0) != 8L)
            return -1;
          x11 = XEXP (x8, 0);
          if (GET_CODE (x11) != TRUNCATE
              || GET_MODE (x11) != E_QImode)
            return -1;
          x12 = XEXP (x11, 0);
          if (GET_CODE (x12) != DIV
              || GET_MODE (x12) != E_HImode)
            return -1;
          x13 = XVECEXP (x1, 0, 1);
          if (pattern227 (x13, 
E_CCmode, 
17) != 0
              || !register_operand (operands[0], E_HImode)
              || GET_MODE (x4) != E_HImode
              || GET_MODE (x5) != E_HImode
              || GET_MODE (x6) != E_HImode)
            return -1;
          x14 = XEXP (x10, 0);
          operands[1] = x14;
          if (!register_operand (operands[1], E_HImode))
            return -1;
          x15 = XEXP (x10, 1);
          if (GET_MODE (x15) != E_HImode
              || GET_MODE (x8) != E_HImode)
            return -1;
          x16 = XEXP (x12, 1);
          if (GET_MODE (x16) != E_HImode)
            return -1;
          x17 = XEXP (x12, 0);
          if (!rtx_equal_p (x17, operands[1]))
            return -1;
          switch (GET_CODE (x15))
            {
            case SIGN_EXTEND:
              if (GET_CODE (x16) != SIGN_EXTEND)
                return -1;
              x18 = XEXP (x15, 0);
              operands[2] = x18;
              if (!nonimmediate_operand (operands[2], E_QImode))
                return -1;
              x19 = XEXP (x16, 0);
              if (!rtx_equal_p (x19, operands[2])
                  || !
#line 12017 "../../gcc/config/i386/i386.md"
(TARGET_QIMODE_MATH
   && true))
                return -1;
              return 679; /* divmodhiqi3 */

            case ZERO_EXTEND:
              if (GET_CODE (x16) != ZERO_EXTEND)
                return -1;
              x18 = XEXP (x15, 0);
              operands[2] = x18;
              if (!nonimmediate_operand (operands[2], E_QImode))
                return -1;
              x19 = XEXP (x16, 0);
              if (!rtx_equal_p (x19, operands[2])
                  || !
#line 12017 "../../gcc/config/i386/i386.md"
(TARGET_QIMODE_MATH
   && true))
                return -1;
              return 681; /* udivmodhiqi3 */

            default:
              return -1;
            }

        case REG:
        case SUBREG:
          operands[1] = x9;
          x13 = XVECEXP (x1, 0, 1);
          if (pattern380 (x13, 
174, 
0) != 0)
            return -1;
          x11 = XEXP (x8, 0);
          operands[2] = x11;
          switch (XWINT (x7, 0))
            {
            case 8L:
              if (pattern1569 (x4, 
E_QImode, 
E_HImode) != 0
                  || !
#line 2537 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F))
                return -1;
              return 2644; /* kunpckhi */

            case 16L:
              if (pattern1569 (x4, 
E_HImode, 
E_SImode) != 0
                  || !
#line 2551 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW))
                return -1;
              return 2645; /* kunpcksi */

            case 32L:
              if (pattern1569 (x4, 
E_SImode, 
E_DImode) != 0
                  || !
#line 2563 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW))
                return -1;
              return 2646; /* kunpckdi */

            default:
              return -1;
            }

        default:
          return -1;
        }

    case REG:
    case SUBREG:
    case MEM:
      x13 = XVECEXP (x1, 0, 1);
      if (pattern227 (x13, 
E_CCmode, 
17) != 0)
        return -1;
      switch (pattern1048 (x4, 
LSHIFTRT))
        {
        case 0:
          x8 = XEXP (x4, 1);
          x11 = XEXP (x8, 0);
          x12 = XEXP (x11, 0);
          x17 = XEXP (x12, 0);
          operands[1] = x17;
          if (nonimmediate_operand (operands[0], E_DImode))
            {
              x7 = XEXP (x5, 1);
              x20 = XEXP (x7, 0);
              operands[2] = x20;
              if (rtx_equal_p (x6, operands[0]))
                {
                  x21 = XEXP (x11, 1);
                  x22 = XEXP (x21, 1);
                  x23 = XEXP (x22, 0);
                  if (rtx_equal_p (x23, operands[2])
                      && 
#line 15401 "../../gcc/config/i386/i386.md"
(TARGET_64BIT && true))
                    return 1063; /* x86_64_shld */
                }
            }
          operands[2] = x17;
          if (!register_operand (operands[0], E_DImode))
            return -1;
          operands[1] = x6;
          if (!nonimmediate_operand (operands[1], E_DImode))
            return -1;
          x7 = XEXP (x5, 1);
          x20 = XEXP (x7, 0);
          operands[3] = x20;
          x21 = XEXP (x11, 1);
          x22 = XEXP (x21, 1);
          x23 = XEXP (x22, 0);
          if (!rtx_equal_p (x23, operands[3])
              || !
#line 15422 "../../gcc/config/i386/i386.md"
(TARGET_APX_NDD && true))
            return -1;
          return 1065; /* x86_64_shld_ndd */

        case 1:
          if (!nonimmediate_operand (operands[0], E_SImode)
              || pattern1047 (x4, 
E_SImode, 
E_DImode) != 0)
            return -1;
          x8 = XEXP (x4, 1);
          x11 = XEXP (x8, 0);
          x12 = XEXP (x11, 0);
          x17 = XEXP (x12, 0);
          operands[1] = x17;
          x7 = XEXP (x5, 1);
          x20 = XEXP (x7, 0);
          operands[2] = x20;
          if (rtx_equal_p (x6, operands[0]))
            {
              x21 = XEXP (x11, 1);
              x22 = XEXP (x21, 1);
              x23 = XEXP (x22, 0);
              if (rtx_equal_p (x23, operands[2]))
                return 1075; /* x86_shld */
            }
          operands[2] = x17;
          operands[1] = x6;
          if (!nonimmediate_operand (operands[1], E_SImode))
            return -1;
          operands[3] = x20;
          x21 = XEXP (x11, 1);
          x22 = XEXP (x21, 1);
          x23 = XEXP (x22, 0);
          if (!rtx_equal_p (x23, operands[3])
              || !
#line 15653 "../../gcc/config/i386/i386.md"
(TARGET_APX_NDD && true))
            return -1;
          return 1077; /* x86_shld_ndd */

        case 2:
          x8 = XEXP (x4, 1);
          switch (GET_CODE (x8))
            {
            case SUBREG:
              switch (pattern1240 (x4, 
LSHIFTRT))
                {
                case 0:
                  x7 = XEXP (x5, 1);
                  operands[2] = x7;
                  if (pattern1675 (x4) == 0
                      && 
#line 15437 "../../gcc/config/i386/i386.md"
(TARGET_64BIT
   && INTVAL (operands[3]) == 64 - INTVAL (operands[2])
   && true))
                    return 1067; /* x86_64_shld_1 */
                  operands[3] = x7;
                  if (pattern1676 (x4) != 0
                      || !
#line 15459 "../../gcc/config/i386/i386.md"
(TARGET_APX_NDD
   && INTVAL (operands[4]) == 64 - INTVAL (operands[3])
   && true))
                    return -1;
                  return 1069; /* x86_64_shld_ndd_1 */

                case 1:
                  x7 = XEXP (x5, 1);
                  operands[2] = x7;
                  if (pattern1677 (x4) == 0
                      && 
#line 15669 "../../gcc/config/i386/i386.md"
(INTVAL (operands[3]) == 32 - INTVAL (operands[2])
  && true))
                    return 1079; /* x86_shld_1 */
                  operands[3] = x7;
                  if (pattern1678 (x4) != 0
                      || !
#line 15691 "../../gcc/config/i386/i386.md"
(TARGET_APX_NDD 
   && INTVAL (operands[4]) == 32 - INTVAL (operands[3])
   && true))
                    return -1;
                  return 1081; /* x86_shld_ndd_1 */

                default:
                  return -1;
                }

            case LSHIFTRT:
              switch (pattern1242 (x4))
                {
                case 0:
                  if (!
#line 15531 "../../gcc/config/i386/i386.md"
(TARGET_64BIT
   && INTVAL (operands[3]) == 64 - INTVAL (operands[2])
   && ix86_pre_reload_split ()))
                    return -1;
                  return 1071; /* *x86_64_shld_shrd_1_nozext */

                case 1:
                  if (!
#line 15763 "../../gcc/config/i386/i386.md"
(INTVAL (operands[3]) == 32 - INTVAL (operands[2])
   && ix86_pre_reload_split ()))
                    return -1;
                  return 1083; /* *x86_shld_shrd_1_nozext */

                case 2:
                  x11 = XEXP (x8, 0);
                  operands[1] = x11;
                  if (nonimmediate_operand (operands[0], E_DImode))
                    {
                      x7 = XEXP (x5, 1);
                      operands[2] = x7;
                      if (rtx_equal_p (x6, operands[0]))
                        {
                          x24 = XEXP (x8, 1);
                          x25 = XEXP (x24, 1);
                          if (rtx_equal_p (x25, operands[2])
                              && 
#line 15584 "../../gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_pre_reload_split ()))
                            return 1072; /* *x86_64_shld_2 */
                        }
                    }
                  operands[2] = x11;
                  if (!register_operand (operands[0], E_DImode))
                    return -1;
                  operands[1] = x6;
                  if (!nonimmediate_operand (operands[1], E_DImode))
                    return -1;
                  x7 = XEXP (x5, 1);
                  operands[3] = x7;
                  x24 = XEXP (x8, 1);
                  x25 = XEXP (x24, 1);
                  if (!rtx_equal_p (x25, operands[3])
                      || !
#line 15605 "../../gcc/config/i386/i386.md"
(TARGET_APX_NDD
   && ix86_pre_reload_split ()))
                    return -1;
                  return 1073; /* *x86_64_shld_ndd_2 */

                case 3:
                  x11 = XEXP (x8, 0);
                  operands[1] = x11;
                  if (nonimmediate_operand (operands[0], E_SImode))
                    {
                      x7 = XEXP (x5, 1);
                      operands[2] = x7;
                      if (rtx_equal_p (x6, operands[0]))
                        {
                          x24 = XEXP (x8, 1);
                          x25 = XEXP (x24, 1);
                          if (rtx_equal_p (x25, operands[2])
                              && 
#line 15815 "../../gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_pre_reload_split ()))
                            return 1084; /* *x86_shld_2 */
                        }
                    }
                  operands[2] = x11;
                  if (!register_operand (operands[0], E_SImode))
                    return -1;
                  operands[1] = x6;
                  if (!nonimmediate_operand (operands[1], E_SImode))
                    return -1;
                  x7 = XEXP (x5, 1);
                  operands[3] = x7;
                  x24 = XEXP (x8, 1);
                  x25 = XEXP (x24, 1);
                  if (!rtx_equal_p (x25, operands[3])
                      || !
#line 15836 "../../gcc/config/i386/i386.md"
(TARGET_APX_NDD
   && ix86_pre_reload_split ()))
                    return -1;
                  return 1085; /* *x86_shld_ndd_2 */

                default:
                  return -1;
                }

            default:
              return -1;
            }

        default:
          return -1;
        }

    case CONST_INT:
      if (XWINT (x6, 0) != 1L)
        return -1;
      x13 = XVECEXP (x1, 0, 1);
      if (pattern227 (x13, 
E_CCmode, 
17) != 0)
        return -1;
      switch (pattern370 (x4))
        {
        case 0:
          x7 = XEXP (x5, 1);
          operands[2] = x7;
          if (register_operand (operands[2], E_QImode))
            {
              switch (pattern946 (x4))
                {
                case 0:
                  if (
#line 18805 "../../gcc/config/i386/i386.md"
(TARGET_USE_BT))
                    return 1391; /* *btssi */
                  break;

                case 1:
                  if ((
#line 18805 "../../gcc/config/i386/i386.md"
(TARGET_USE_BT) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                    return 1393; /* *btsdi */
                  break;

                default:
                  break;
                }
            }
          if (GET_CODE (x7) != SUBREG)
            return -1;
          switch (pattern1329 (x4))
            {
            case 0:
              if (!
#line 18824 "../../gcc/config/i386/i386.md"
(TARGET_USE_BT
   && (INTVAL (operands[2]) & (GET_MODE_BITSIZE (SImode)-1))
      == GET_MODE_BITSIZE (SImode)-1
   && ix86_pre_reload_split ()))
                return -1;
              return 1395; /* *btssi_mask */

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
              return 1397; /* *btsdi_mask */

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
          return 1399; /* *btssi_mask_1 */

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
          return 1401; /* *btsdi_mask_1 */

        default:
          return -1;
        }

    default:
      return -1;
    }
}

 int
recog_406 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 0);
  switch (GET_CODE (x3))
    {
    case REG:
    case SUBREG:
    case MEM:
      operands[0] = x3;
      switch (GET_MODE (operands[0]))
        {
        case E_DImode:
          x4 = XEXP (x2, 1);
          if (GET_MODE (x4) != E_DImode)
            return -1;
          if (register_operand (operands[0], E_DImode)
              && register_operand (operands[1], E_DImode)
              && nonmemory_operand (operands[2], E_QImode)
              && 
#line 1195 "../../gcc/config/i386/i386.md"
(!TARGET_64BIT))
            return 1131; /* ashrdi3_doubleword */
          if (!nonimmediate_operand (operands[0], E_DImode)
              || !nonimmediate_operand (operands[1], E_DImode))
            return -1;
          if (const_int_operand (operands[2], E_QImode)
              && (
#line 17244 "../../gcc/config/i386/i386.md"
(INTVAL (operands[2]) == GET_MODE_BITSIZE (DImode)-1
   && (TARGET_USE_CLTD || optimize_function_for_size_p (cfun))
   && ix86_binary_operator_ok (ASHIFTRT, DImode, operands, TARGET_APX_NDD)
   && true) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return 1169; /* ashrdi3_cvt */
          if (!nonmemory_operand (operands[2], E_QImode)
              || !(
#line 17323 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ASHIFTRT, DImode, operands, TARGET_APX_NDD)
   && true) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return -1;
          return 1178; /* *ashrdi3_1 */

        case E_TImode:
          x4 = XEXP (x2, 1);
          if (pattern1250 (x4, 
E_TImode) != 0
              || !
#line 1196 "../../gcc/config/i386/i386.md"
(TARGET_64BIT))
            return -1;
          return 1133; /* ashrti3_doubleword */

        case E_SImode:
          x4 = XEXP (x2, 1);
          if (pattern1498 (x4, 
E_SImode) != 0
              || !
#line 17323 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ASHIFTRT, SImode, operands, TARGET_APX_NDD)
   && true))
            return -1;
          return 1176; /* *ashrsi3_1 */

        case E_QImode:
          x4 = XEXP (x2, 1);
          if (pattern1498 (x4, 
E_QImode) != 0
              || !
#line 17532 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ASHIFTRT, QImode, operands, TARGET_APX_NDD)
   && true))
            return -1;
          return 1209; /* *ashrqi3_1 */

        case E_HImode:
          x4 = XEXP (x2, 1);
          if (pattern1498 (x4, 
E_HImode) != 0
              || !
#line 17532 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ASHIFTRT, HImode, operands, TARGET_APX_NDD)
   && true))
            return -1;
          return 1211; /* *ashrhi3_1 */

        case E_V2QImode:
          x4 = XEXP (x2, 1);
          if (pattern1250 (x4, 
E_V2QImode) != 0
              || !
#line 4007 "../../gcc/config/i386/mmx.md"
(!TARGET_PARTIAL_REG_STALL || optimize_size))
            return -1;
          return 2210; /* ashrv2qi3 */

        default:
          return -1;
        }

    case STRICT_LOW_PART:
      switch (pattern1251 (x2))
        {
        case 0:
          if (!
#line 17638 "../../gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)))
            return -1;
          return 1217; /* *ashrqi3_1_slp */

        case 1:
          if (!
#line 17638 "../../gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)))
            return -1;
          return 1219; /* *ashrhi3_1_slp */

        default:
          return -1;
        }

    default:
      return -1;
    }
}

 int
recog_409 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 1);
  x3 = XEXP (x2, 1);
  if (pattern821 (x3) != 0)
    return -1;
  x4 = XEXP (x2, 0);
  if (GET_CODE (x4) != REG
      || REGNO (x4) != 7
      || GET_MODE (x4) != E_SImode)
    return -1;
  x5 = XVECEXP (x1, 0, 0);
  x6 = XEXP (x5, 1);
  x7 = XEXP (x6, 0);
  x8 = XEXP (x7, 0);
  operands[1] = x8;
  x9 = XEXP (x6, 1);
  operands[2] = x9;
  x10 = XEXP (x3, 1);
  operands[3] = x10;
  if (!immediate_operand (operands[3], E_SImode))
    return -1;
  if (call_insn_operand (operands[1], E_SImode)
      && 
#line 20440 "../../gcc/config/i386/i386.md"
(!TARGET_64BIT && !SIBLING_CALL_P (insn)))
    return 1483; /* *call_value_pop */
  if (!sibcall_insn_operand (operands[1], E_SImode)
      || !
#line 20451 "../../gcc/config/i386/i386.md"
(!TARGET_64BIT && SIBLING_CALL_P (insn)))
    return -1;
  return 1484; /* *sibcall_value_pop */
}

 int
recog_410 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  x4 = XEXP (x3, 0);
  if (GET_CODE (x4) != MEM
      || GET_MODE (x4) != E_QImode)
    return -1;
  x5 = XEXP (x2, 0);
  operands[0] = x5;
  x6 = XVECEXP (x1, 0, 1);
  switch (GET_CODE (x6))
    {
    case UNSPEC:
      res = recog_408 (x1, insn, pnum_clobbers);
      if (res >= 0)
        return res;
      break;

    case SET:
      res = recog_409 (x1, insn, pnum_clobbers);
      if (res >= 0)
        return res;
      break;

    default:
      break;
    }
  if (!register_operand (operands[0], E_DImode))
    return -1;
  x7 = XEXP (x4, 0);
  if (GET_CODE (x7) != PLUS
      || GET_MODE (x7) != E_DImode
      || GET_CODE (x6) != UNSPEC
      || GET_MODE (x3) != E_DImode)
    return -1;
  x8 = XEXP (x7, 0);
  if (!register_operand (x8, E_DImode))
    return -1;
  x9 = XEXP (x7, 1);
  if (!immediate_operand (x9, E_DImode)
      || GET_MODE (x6) != E_DImode)
    return -1;
  switch (XVECLEN (x6, 0))
    {
    case 2:
      if (XINT (x6, 1) != 20)
        return -1;
      x10 = XVECEXP (x6, 0, 1);
      if (GET_CODE (x10) != REG
          || REGNO (x10) != 7
          || GET_MODE (x10) != E_DImode)
        return -1;
      operands[2] = x8;
      operands[3] = x9;
      x11 = XEXP (x3, 1);
      operands[4] = x11;
      x12 = XVECEXP (x6, 0, 0);
      operands[1] = x12;
      if (!tls_symbolic_operand (operands[1], E_VOIDmode)
          || !
#line 22876 "../../gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_cmodel == CM_LARGE_PIC && !TARGET_PECOFF
   && GET_CODE (operands[3]) == CONST
   && GET_CODE (XEXP (operands[3], 0)) == UNSPEC
   && XINT (XEXP (operands[3], 0), 1) == UNSPEC_PLTOFF))
        return -1;
      return 1646; /* *tls_global_dynamic_64_largepic */

    case 1:
      if (XINT (x6, 1) != 21)
        return -1;
      x12 = XVECEXP (x6, 0, 0);
      if (GET_CODE (x12) != REG
          || REGNO (x12) != 7
          || GET_MODE (x12) != E_DImode)
        return -1;
      operands[1] = x8;
      operands[2] = x9;
      x11 = XEXP (x3, 1);
      operands[3] = x11;
      if (!
#line 22970 "../../gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_cmodel == CM_LARGE_PIC && !TARGET_PECOFF
   && GET_CODE (operands[2]) == CONST
   && GET_CODE (XEXP (operands[2], 0)) == UNSPEC
   && XINT (XEXP (operands[2], 0), 1) == UNSPEC_PLTOFF))
        return -1;
      return 1650; /* *tls_local_dynamic_base_64_largepic */

    default:
      return -1;
    }
}

 int
recog_418 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12, x13, x14, x15, x16, x17;
  rtx x18, x19, x20, x21;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  x4 = XEXP (x3, 0);
  if (GET_CODE (x4) != UNSPEC
      || XVECLEN (x4, 0) != 4
      || XINT (x4, 1) != 153)
    return -1;
  x5 = XVECEXP (x4, 0, 1);
  if (GET_CODE (x5) != MEM)
    return -1;
  x6 = XEXP (x5, 0);
  if (GET_CODE (x6) != UNSPEC
      || XVECLEN (x6, 0) != 3
      || XINT (x6, 1) != 154)
    return -1;
  x7 = XVECEXP (x4, 0, 2);
  if (GET_CODE (x7) != MEM
      || GET_MODE (x7) != E_BLKmode)
    return -1;
  x8 = XEXP (x7, 0);
  if (GET_CODE (x8) != SCRATCH)
    return -1;
  x9 = XEXP (x3, 1);
  if (GET_CODE (x9) != PARALLEL
      || XVECLEN (x9, 0) != 4)
    return -1;
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
  if (x13 != const_int_rtx[MAX_SAVED_CONST_INT + 3])
    return -1;
  x14 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x14) != CLOBBER)
    return -1;
  x15 = XEXP (x2, 0);
  operands[0] = x15;
  x16 = XVECEXP (x6, 0, 1);
  if (!register_operand (x16, E_V4DImode))
    return -1;
  x17 = XVECEXP (x6, 0, 2);
  if (!const1248_operand (x17, E_SImode))
    return -1;
  x18 = XEXP (x14, 0);
  operands[1] = x18;
  x19 = XVECEXP (x4, 0, 0);
  switch (GET_CODE (x19))
    {
    case REG:
    case SUBREG:
      operands[2] = x19;
      operands[7] = x5;
      x20 = XVECEXP (x6, 0, 0);
      operands[3] = x20;
      operands[4] = x16;
      operands[6] = x17;
      x21 = XVECEXP (x4, 0, 3);
      operands[5] = x21;
      switch (GET_MODE (operands[0]))
        {
        case E_V4SImode:
          switch (pattern1847 (x3, 
E_V8SImode, 
E_V4SImode, 
E_SImode))
            {
            case 0:
              if (!(
#line 29404 "../../gcc/config/i386/sse.md"
(TARGET_AVX2) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode)))
                return -1;
              return 9732; /* *avx2_gatherdiv8si_3 */

            case 1:
              if (!(
#line 29404 "../../gcc/config/i386/sse.md"
(TARGET_AVX2) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode)))
                return -1;
              return 9734; /* *avx2_gatherdiv8si_3 */

            default:
              return -1;
            }

        case E_V4SFmode:
          switch (pattern1847 (x3, 
E_V8SFmode, 
E_V4SFmode, 
E_SFmode))
            {
            case 0:
              if (!(
#line 29404 "../../gcc/config/i386/sse.md"
(TARGET_AVX2) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode)))
                return -1;
              return 9733; /* *avx2_gatherdiv8sf_3 */

            case 1:
              if (!(
#line 29404 "../../gcc/config/i386/sse.md"
(TARGET_AVX2) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode)))
                return -1;
              return 9735; /* *avx2_gatherdiv8sf_3 */

            default:
              return -1;
            }

        default:
          return -1;
        }

    case PC:
      operands[6] = x5;
      x20 = XVECEXP (x6, 0, 0);
      operands[2] = x20;
      operands[3] = x16;
      operands[5] = x17;
      x21 = XVECEXP (x4, 0, 3);
      operands[4] = x21;
      switch (GET_MODE (operands[0]))
        {
        case E_V4SImode:
          switch (pattern1843 (x3, 
E_V8SImode, 
E_V4SImode, 
E_SImode))
            {
            case 0:
              if (!(
#line 29428 "../../gcc/config/i386/sse.md"
(TARGET_AVX2) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode)))
                return -1;
              return 9736; /* *avx2_gatherdiv8si_4 */

            case 1:
              if (!(
#line 29428 "../../gcc/config/i386/sse.md"
(TARGET_AVX2) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode)))
                return -1;
              return 9738; /* *avx2_gatherdiv8si_4 */

            default:
              return -1;
            }

        case E_V4SFmode:
          switch (pattern1843 (x3, 
E_V8SFmode, 
E_V4SFmode, 
E_SFmode))
            {
            case 0:
              if (!(
#line 29428 "../../gcc/config/i386/sse.md"
(TARGET_AVX2) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode)))
                return -1;
              return 9737; /* *avx2_gatherdiv8sf_4 */

            case 1:
              if (!(
#line 29428 "../../gcc/config/i386/sse.md"
(TARGET_AVX2) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode)))
                return -1;
              return 9739; /* *avx2_gatherdiv8sf_4 */

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
recog_427 (rtx x1 ATTRIBUTE_UNUSED,
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
  switch (GET_CODE (x3))
    {
    case UNSPEC:
      return recog_422 (x1, insn, pnum_clobbers);

    case SIGN_EXTEND:
      x4 = XVECEXP (x1, 0, 2);
      if (GET_CODE (x4) != CLOBBER)
        return -1;
      x5 = XEXP (x2, 0);
      operands[0] = x5;
      x6 = XEXP (x3, 0);
      switch (GET_CODE (x6))
        {
        case REG:
        case SUBREG:
          operands[1] = x6;
          x7 = XVECEXP (x1, 0, 1);
          if (pattern227 (x7, 
E_CCmode, 
17) != 0)
            return -1;
          x8 = XEXP (x4, 0);
          operands[2] = x8;
          switch (GET_MODE (operands[0]))
            {
            case E_DImode:
              if (pattern1441 (x3, 
E_SImode, 
E_DImode) != 0
                  || !
#line 4985 "../../gcc/config/i386/i386.md"
(!TARGET_64BIT))
                return -1;
              return 185; /* extendsidi2_1 */

            case E_TImode:
              if (pattern1441 (x3, 
E_DImode, 
E_TImode) != 0
                  || !
#line 4993 "../../gcc/config/i386/i386.md"
(TARGET_64BIT))
                return -1;
              return 186; /* extendditi2 */

            default:
              return -1;
            }

        case CTZ:
          if (GET_MODE (x6) != E_SImode)
            return -1;
          x7 = XVECEXP (x1, 0, 1);
          if (GET_CODE (x7) != UNSPEC
              || XVECLEN (x7, 0) != 1
              || XINT (x7, 1) != 38)
            return -1;
          x8 = XEXP (x4, 0);
          if (GET_CODE (x8) != REG
              || REGNO (x8) != 17
              || GET_MODE (x8) != E_CCmode
              || !register_operand (operands[0], E_DImode)
              || GET_MODE (x3) != E_DImode)
            return -1;
          x9 = XEXP (x6, 0);
          operands[1] = x9;
          if (!nonimmediate_operand (operands[1], E_SImode))
            return -1;
          x10 = XVECEXP (x7, 0, 0);
          operands[2] = x10;
          if (!register_operand (operands[2], E_DImode)
              || !
#line 21204 "../../gcc/config/i386/i386.md"
(TARGET_64BIT))
            return -1;
          return 1522; /* *ctzsidi2_sext_falsedep */

        default:
          return -1;
        }

    case FIX:
      x7 = XVECEXP (x1, 0, 1);
      if (GET_CODE (x7) != USE)
        return -1;
      x4 = XVECEXP (x1, 0, 2);
      if (GET_CODE (x4) != USE)
        return -1;
      x5 = XEXP (x2, 0);
      operands[0] = x5;
      x6 = XEXP (x3, 0);
      operands[1] = x6;
      if (!register_operand (operands[1], E_VOIDmode))
        return -1;
      switch (pattern824 (x1, pnum_clobbers))
        {
        case 0:
          if (!
#line 6021 "../../gcc/config/i386/i386.md"
(X87_FLOAT_MODE_P (GET_MODE (operands[1]))
   && !TARGET_FISTTP
   && !(TARGET_64BIT && SSE_FLOAT_MODE_P (GET_MODE (operands[1])))))
            return -1;
          *pnum_clobbers = 1;
          return 235; /* fix_truncdi_i387 */

        case 1:
          if (!
#line 6034 "../../gcc/config/i386/i386.md"
(X87_FLOAT_MODE_P (GET_MODE (operands[1]))
   && !TARGET_FISTTP
   && !SSE_FLOAT_MODE_P (GET_MODE (operands[1]))))
            return -1;
          return 236; /* fix_trunchi_i387 */

        case 2:
          if (!
#line 6034 "../../gcc/config/i386/i386.md"
(X87_FLOAT_MODE_P (GET_MODE (operands[1]))
   && !TARGET_FISTTP
   && !SSE_FLOAT_MODE_P (GET_MODE (operands[1]))))
            return -1;
          return 237; /* fix_truncsi_i387 */

        default:
          return -1;
        }

    case UNSIGNED_FLOAT:
      x7 = XVECEXP (x1, 0, 1);
      if (GET_CODE (x7) != CLOBBER)
        return -1;
      x4 = XVECEXP (x1, 0, 2);
      if (GET_CODE (x4) != CLOBBER)
        return -1;
      switch (pattern573 (x1))
        {
        case 0:
          if (!
#line 6297 "../../gcc/config/i386/i386.md"
(!TARGET_64BIT
   && TARGET_80387 && X87_ENABLE_FLOAT (SFmode, DImode)
   && TARGET_SSE2 && TARGET_INTER_UNIT_MOVES_TO_VEC))
            return -1;
          return 261; /* floatunssisf2_i387_with_xmm */

        case 1:
          if (!
#line 6297 "../../gcc/config/i386/i386.md"
(!TARGET_64BIT
   && TARGET_80387 && X87_ENABLE_FLOAT (DFmode, DImode)
   && TARGET_SSE2 && TARGET_INTER_UNIT_MOVES_TO_VEC))
            return -1;
          return 262; /* floatunssidf2_i387_with_xmm */

        case 2:
          if (!
#line 6297 "../../gcc/config/i386/i386.md"
(!TARGET_64BIT
   && TARGET_80387 && X87_ENABLE_FLOAT (XFmode, DImode)
   && TARGET_SSE2 && TARGET_INTER_UNIT_MOVES_TO_VEC))
            return -1;
          return 263; /* floatunssixf2_i387_with_xmm */

        default:
          return -1;
        }

    case EQ:
      return recog_426 (x1, insn, pnum_clobbers);

    case SMUL_HIGHPART:
      switch (pattern215 (x1))
        {
        case 0:
          if (!
#line 1235 "../../gcc/config/i386/i386.md"
(!TARGET_64BIT))
            return -1;
          return 627; /* smulsi3_highpart */

        case 1:
          if (!
#line 1236 "../../gcc/config/i386/i386.md"
(TARGET_64BIT))
            return -1;
          return 629; /* smuldi3_highpart */

        default:
          return -1;
        }

    case UMUL_HIGHPART:
      switch (pattern215 (x1))
        {
        case 0:
          if (!
#line 1235 "../../gcc/config/i386/i386.md"
(!TARGET_64BIT))
            return -1;
          return 628; /* umulsi3_highpart */

        case 1:
          if (!
#line 1236 "../../gcc/config/i386/i386.md"
(TARGET_64BIT))
            return -1;
          return 630; /* umuldi3_highpart */

        default:
          return -1;
        }

    case ZERO_EXTEND:
      return recog_423 (x1, insn, pnum_clobbers);

    case TRUNCATE:
      x6 = XEXP (x3, 0);
      if (GET_CODE (x6) != LSHIFTRT)
        return -1;
      x9 = XEXP (x6, 0);
      if (GET_CODE (x9) != MULT)
        return -1;
      x11 = XEXP (x6, 1);
      if (GET_CODE (x11) != CONST_INT)
        return -1;
      x7 = XVECEXP (x1, 0, 1);
      if (GET_CODE (x7) != CLOBBER
          || pattern828 (x1) != 0)
        return -1;
      x12 = XEXP (x7, 0);
      operands[3] = x12;
      x13 = XEXP (x9, 0);
      switch (GET_CODE (x13))
        {
        case SIGN_EXTEND:
          switch (pattern1501 (x3, 
SIGN_EXTEND))
            {
            case 0:
              if (!
#line 11174 "../../gcc/config/i386/i386.md"
(TARGET_64BIT
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
                return -1;
              return 633; /* *smuldi3_highpart_1 */

            case 1:
              if (!
#line 11223 "../../gcc/config/i386/i386.md"
(!(MEM_P (operands[1]) && MEM_P (operands[2]))))
                return -1;
              return 637; /* *smulsi3_highpart_1 */

            default:
              return -1;
            }

        case ZERO_EXTEND:
          switch (pattern1501 (x3, 
ZERO_EXTEND))
            {
            case 0:
              if (!
#line 11174 "../../gcc/config/i386/i386.md"
(TARGET_64BIT
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
                return -1;
              return 634; /* *umuldi3_highpart_1 */

            case 1:
              if (!
#line 11223 "../../gcc/config/i386/i386.md"
(!(MEM_P (operands[1]) && MEM_P (operands[2]))))
                return -1;
              return 638; /* *umulsi3_highpart_1 */

            default:
              return -1;
            }

        default:
          return -1;
        }

    case DIV:
      switch (pattern216 (x1))
        {
        case 0:
          switch (pattern1336 (x1, pnum_clobbers))
            {
            case 0:
              *pnum_clobbers = 1;
              return 639; /* divmodsi4_1 */

            case 1:
              if (!
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT))
                return -1;
              *pnum_clobbers = 1;
              return 640; /* divmoddi4_1 */

            case 2:
              if (!
#line 1191 "../../gcc/config/i386/i386.md"
(TARGET_HIMODE_MATH))
                return -1;
              return 647; /* *divmodhi4 */

            case 3:
              return 648; /* *divmodsi4 */

            case 4:
              if (!
#line 1192 "../../gcc/config/i386/i386.md"
(TARGET_64BIT))
                return -1;
              return 649; /* *divmoddi4 */

            case 5:
              if ((
#line 11851 "../../gcc/config/i386/i386.md"
(TARGET_APX_NF) && 
#line 1191 "../../gcc/config/i386/i386.md"
(TARGET_HIMODE_MATH)))
                return 661; /* *divmodhi4_noext_nf */
              if (pnum_clobbers == NULL
                  || !
#line 1191 "../../gcc/config/i386/i386.md"
(TARGET_HIMODE_MATH))
                return -1;
              *pnum_clobbers = 1;
              return 667; /* *divmodhi4_noext */

            case 6:
              if (
#line 11851 "../../gcc/config/i386/i386.md"
(TARGET_APX_NF))
                return 663; /* *divmodsi4_noext_nf */
              if (pnum_clobbers == NULL)
                return -1;
              *pnum_clobbers = 1;
              return 669; /* *divmodsi4_noext */

            case 7:
              if ((
#line 11851 "../../gcc/config/i386/i386.md"
(TARGET_APX_NF) && 
#line 1192 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return 665; /* *divmoddi4_noext_nf */
              if (pnum_clobbers == NULL
                  || !
#line 1192 "../../gcc/config/i386/i386.md"
(TARGET_64BIT))
                return -1;
              *pnum_clobbers = 1;
              return 671; /* *divmoddi4_noext */

            default:
              return -1;
            }

        case 1:
          if (!const_int_operand (operands[2], E_SImode))
            return -1;
          x4 = XVECEXP (x1, 0, 2);
          if (pattern953 (x4, 
E_CCmode, 
17) != 0
              || pattern1496 (x1) != 0
              || !
#line 11907 "../../gcc/config/i386/i386.md"
(!optimize_function_for_size_p (cfun)))
            return -1;
          return 677; /* *divmodsi4_const */

        default:
          return -1;
        }

    case UDIV:
      switch (pattern217 (x1))
        {
        case 0:
          switch (pattern1336 (x1, pnum_clobbers))
            {
            case 0:
              *pnum_clobbers = 1;
              return 641; /* udivmodsi4_1 */

            case 1:
              if (!
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT))
                return -1;
              *pnum_clobbers = 1;
              return 642; /* udivmoddi4_1 */

            case 2:
              if (!
#line 1191 "../../gcc/config/i386/i386.md"
(TARGET_HIMODE_MATH))
                return -1;
              return 650; /* *udivmodhi4 */

            case 3:
              return 651; /* *udivmodsi4 */

            case 4:
              if (!
#line 1192 "../../gcc/config/i386/i386.md"
(TARGET_64BIT))
                return -1;
              return 652; /* *udivmoddi4 */

            case 5:
              if ((
#line 11851 "../../gcc/config/i386/i386.md"
(TARGET_APX_NF) && 
#line 1191 "../../gcc/config/i386/i386.md"
(TARGET_HIMODE_MATH)))
                return 662; /* *udivmodhi4_noext_nf */
              if (pnum_clobbers == NULL
                  || !
#line 1191 "../../gcc/config/i386/i386.md"
(TARGET_HIMODE_MATH))
                return -1;
              *pnum_clobbers = 1;
              return 668; /* *udivmodhi4_noext */

            case 6:
              if (
#line 11851 "../../gcc/config/i386/i386.md"
(TARGET_APX_NF))
                return 664; /* *udivmodsi4_noext_nf */
              if (pnum_clobbers == NULL)
                return -1;
              *pnum_clobbers = 1;
              return 670; /* *udivmodsi4_noext */

            case 7:
              if ((
#line 11851 "../../gcc/config/i386/i386.md"
(TARGET_APX_NF) && 
#line 1192 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return 666; /* *udivmoddi4_noext_nf */
              if (pnum_clobbers == NULL
                  || !
#line 1192 "../../gcc/config/i386/i386.md"
(TARGET_64BIT))
                return -1;
              *pnum_clobbers = 1;
              return 672; /* *udivmoddi4_noext */

            default:
              return -1;
            }

        case 1:
          x4 = XVECEXP (x1, 0, 2);
          if (pattern953 (x4, 
E_CCmode, 
17) != 0)
            return -1;
          switch (GET_MODE (operands[0]))
            {
            case E_SImode:
              if (pattern1497 (x1, 
E_SImode) != 0
                  || !
#line 11660 "../../gcc/config/i386/i386.md"
(IN_RANGE (exact_log2 (UINTVAL (operands[3])), 1, 31)))
                return -1;
              return 653; /* *udivmodsi4_pow2 */

            case E_DImode:
              if (pattern1497 (x1, 
E_DImode) != 0
                  || !(
#line 11660 "../../gcc/config/i386/i386.md"
(IN_RANGE (exact_log2 (UINTVAL (operands[3])), 1, 31)) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return -1;
              return 654; /* *udivmoddi4_pow2 */

            default:
              return -1;
            }

        default:
          return -1;
        }

    case ABS:
      switch (pattern219 (x1))
        {
        case 0:
          if (!
#line 14834 "../../gcc/config/i386/i386.md"
(TARGET_AVX512FP16))
            return -1;
          return 1016; /* *abshf2_1 */

        case 1:
          if (!
#line 14850 "../../gcc/config/i386/i386.md"
(TARGET_80387 || (SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)))
            return -1;
          return 1018; /* *abssf2_1 */

        case 2:
          if (!
#line 14850 "../../gcc/config/i386/i386.md"
(TARGET_80387 || (SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)))
            return -1;
          return 1020; /* *absdf2_1 */

        default:
          return -1;
        }

    case NEG:
      switch (pattern219 (x1))
        {
        case 0:
          if (!
#line 14834 "../../gcc/config/i386/i386.md"
(TARGET_AVX512FP16))
            return -1;
          return 1017; /* *neghf2_1 */

        case 1:
          if (!
#line 14850 "../../gcc/config/i386/i386.md"
(TARGET_80387 || (SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)))
            return -1;
          return 1019; /* *negsf2_1 */

        case 2:
          if (!
#line 14850 "../../gcc/config/i386/i386.md"
(TARGET_80387 || (SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)))
            return -1;
          return 1021; /* *negdf2_1 */

        default:
          return -1;
        }

    case ROTATE:
      switch (pattern221 (x1))
        {
        case 0:
          if (!
#line 1235 "../../gcc/config/i386/i386.md"
(!TARGET_64BIT))
            return -1;
          return 1332; /* ix86_rotldi3_doubleword */

        case 1:
          if (!
#line 1236 "../../gcc/config/i386/i386.md"
(TARGET_64BIT))
            return -1;
          return 1333; /* ix86_rotlti3_doubleword */

        default:
          return -1;
        }

    case ROTATERT:
      switch (pattern221 (x1))
        {
        case 0:
          if (!
#line 1235 "../../gcc/config/i386/i386.md"
(!TARGET_64BIT))
            return -1;
          return 1334; /* ix86_rotrdi3_doubleword */

        case 1:
          if (!
#line 1236 "../../gcc/config/i386/i386.md"
(TARGET_64BIT))
            return -1;
          return 1335; /* ix86_rotrti3_doubleword */

        default:
          return -1;
        }

    case CALL:
      x6 = XEXP (x3, 0);
      if (GET_CODE (x6) != MEM
          || GET_MODE (x6) != E_QImode
          || pattern382 (x1) != 0)
        return -1;
      x5 = XEXP (x2, 0);
      operands[0] = x5;
      x9 = XEXP (x6, 0);
      operands[1] = x9;
      if (!memory_operand (operands[1], E_SImode))
        return -1;
      x14 = XEXP (x3, 1);
      operands[2] = x14;
      x7 = XVECEXP (x1, 0, 1);
      x15 = XEXP (x7, 1);
      x16 = XEXP (x15, 1);
      operands[3] = x16;
      if (!immediate_operand (operands[3], E_SImode)
          || !
#line 20463 "../../gcc/config/i386/i386.md"
(!TARGET_64BIT))
        return -1;
      return 1485; /* *sibcall_value_pop_memory */

    case PLUS:
      x4 = XVECEXP (x1, 0, 2);
      if (pattern222 (x4) != 0)
        return -1;
      x6 = XEXP (x3, 0);
      if (GET_CODE (x6) == REG
          && REGNO (x6) == 6)
        {
          x14 = XEXP (x3, 1);
          if (GET_CODE (x14) == CONST_INT)
            {
              x5 = XEXP (x2, 0);
              if (GET_CODE (x5) == REG
                  && REGNO (x5) == 7)
                {
                  x7 = XVECEXP (x1, 0, 1);
                  if (pattern712 (x7, 
6, 
MEM) == 0)
                    {
                      switch (XWINT (x14, 0))
                        {
                        case 4L:
                          if (pattern1679 (x1, 
E_SImode) == 0
                              && 
#line 20869 "../../gcc/config/i386/i386.md"
(!TARGET_64BIT))
                            return 1504; /* *leave */
                          break;

                        case 8L:
                          if (pattern1679 (x1, 
E_DImode) == 0
                              && 
#line 20877 "../../gcc/config/i386/i386.md"
(TARGET_64BIT))
                            return 1505; /* *leave_rex64 */
                          break;

                        default:
                          break;
                        }
                    }
                }
            }
        }
      x7 = XVECEXP (x1, 0, 1);
      if (GET_CODE (x7) != CLOBBER)
        return -1;
      x12 = XEXP (x7, 0);
      if (GET_CODE (x12) != REG
          || REGNO (x12) != 17
          || GET_MODE (x12) != E_CCmode)
        return -1;
      x5 = XEXP (x2, 0);
      operands[0] = x5;
      operands[1] = x6;
      x14 = XEXP (x3, 1);
      operands[2] = x14;
      switch (GET_MODE (operands[0]))
        {
        case E_SImode:
          if (pattern1505 (x3, 
E_SImode) != 0
              || !
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode))
            return -1;
          return 1849; /* pro_epilogue_adjust_stack_add_si */

        case E_DImode:
          if (pattern1505 (x3, 
E_DImode) != 0
              || !
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode))
            return -1;
          return 1850; /* pro_epilogue_adjust_stack_add_di */

        default:
          return -1;
        }

    case FFS:
      if (GET_MODE (x3) != E_SImode)
        return -1;
      x7 = XVECEXP (x1, 0, 1);
      if (GET_CODE (x7) != CLOBBER)
        return -1;
      x4 = XVECEXP (x1, 0, 2);
      if (GET_CODE (x4) != CLOBBER
          || pattern711 (x1) != 0
          || !
#line 20972 "../../gcc/config/i386/i386.md"
(!TARGET_CMOVE))
        return -1;
      return 1507; /* ffssi2_no_cmove */

    case COMPARE:
      if (GET_MODE (x3) != E_CCCmode)
        return -1;
      x14 = XEXP (x3, 1);
      if (x14 != const_int_rtx[MAX_SAVED_CONST_INT + 0]
          || pattern574 (x1, 
CTZ, 
E_CCCmode) != 0)
        return -1;
      x4 = XVECEXP (x1, 0, 2);
      if (GET_CODE (x4) != UNSPEC
          || XVECLEN (x4, 0) != 1
          || XINT (x4, 1) != 38)
        return -1;
      x6 = XEXP (x3, 0);
      operands[1] = x6;
      x7 = XVECEXP (x1, 0, 1);
      x12 = XEXP (x7, 0);
      operands[0] = x12;
      x17 = XVECEXP (x4, 0, 0);
      operands[2] = x17;
      x15 = XEXP (x7, 1);
      x18 = XEXP (x15, 0);
      if (!rtx_equal_p (x18, operands[1]))
        return -1;
      switch (GET_MODE (operands[1]))
        {
        case E_SImode:
          if (pattern1658 (x15, 
E_SImode) != 0
              || !
#line 21030 "../../gcc/config/i386/i386.md"
(TARGET_BMI))
            return -1;
          return 1510; /* *tzcntsi_1_falsedep */

        case E_DImode:
          if (pattern1658 (x15, 
E_DImode) != 0
              || !(
#line 21030 "../../gcc/config/i386/i386.md"
(TARGET_BMI) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return -1;
          return 1511; /* *tzcntdi_1_falsedep */

        default:
          return -1;
        }

    case CTZ:
      switch (pattern225 (x1))
        {
        case 0:
          return 1516; /* *ctzsi2_falsedep */

        case 1:
          if (!
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT))
            return -1;
          return 1517; /* *ctzdi2_falsedep */

        default:
          return -1;
        }

    case AND:
      if (GET_MODE (x3) != E_DImode)
        return -1;
      x6 = XEXP (x3, 0);
      if (GET_CODE (x6) != SUBREG
          || maybe_ne (SUBREG_BYTE (x6), 0)
          || GET_MODE (x6) != E_DImode)
        return -1;
      x14 = XEXP (x3, 1);
      if (x14 != const_int_rtx[MAX_SAVED_CONST_INT + 63])
        return -1;
      x7 = XVECEXP (x1, 0, 1);
      if (GET_CODE (x7) != UNSPEC
          || XVECLEN (x7, 0) != 1
          || XINT (x7, 1) != 38
          || pattern828 (x1) != 0
          || !register_operand (operands[0], E_DImode))
        return -1;
      x9 = XEXP (x6, 0);
      if (GET_MODE (x9) != E_SImode)
        return -1;
      x10 = XVECEXP (x7, 0, 0);
      operands[2] = x10;
      if (!register_operand (operands[2], E_DImode))
        return -1;
      switch (GET_CODE (x9))
        {
        case CTZ:
          x13 = XEXP (x9, 0);
          operands[1] = x13;
          if (!nonimmediate_operand (operands[1], E_SImode)
              || !
#line 21152 "../../gcc/config/i386/i386.md"
(TARGET_BMI && TARGET_64BIT))
            return -1;
          return 1519; /* *ctzsi2_zext_falsedep */

        case CLZ:
          x13 = XEXP (x9, 0);
          operands[1] = x13;
          switch (GET_MODE (operands[1]))
            {
            case E_SImode:
              if (!nonimmediate_operand (operands[1], E_SImode)
                  || !
#line 21588 "../../gcc/config/i386/i386.md"
(TARGET_LZCNT))
                return -1;
              return 1541; /* *clzsi2_lzcnt_zext_falsedep */

            case E_DImode:
              if (!nonimmediate_operand (operands[1], E_DImode)
                  || !(
#line 21588 "../../gcc/config/i386/i386.md"
(TARGET_LZCNT) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return -1;
              return 1542; /* *clzsi2_lzcnt_zext_falsedep */

            default:
              return -1;
            }

        case POPCOUNT:
          x13 = XEXP (x9, 0);
          operands[1] = x13;
          if (!nonimmediate_operand (operands[1], E_SImode)
              || !
#line 22275 "../../gcc/config/i386/i386.md"
(TARGET_POPCNT && TARGET_64BIT))
            return -1;
          return 1627; /* *popcountsi2_zext_falsedep */

        default:
          return -1;
        }

    case CLZ:
      switch (pattern225 (x1))
        {
        case 0:
          if (!
#line 21545 "../../gcc/config/i386/i386.md"
(TARGET_LZCNT))
            return -1;
          return 1538; /* *clzsi2_lzcnt_falsedep */

        case 1:
          if (!(
#line 21545 "../../gcc/config/i386/i386.md"
(TARGET_LZCNT) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return -1;
          return 1539; /* *clzdi2_lzcnt_falsedep */

        default:
          return -1;
        }

    case POPCOUNT:
      switch (pattern225 (x1))
        {
        case 0:
          if (!
#line 22220 "../../gcc/config/i386/i386.md"
(TARGET_POPCNT))
            return -1;
          return 1624; /* *popcountsi2_falsedep */

        case 1:
          if (!(
#line 22220 "../../gcc/config/i386/i386.md"
(TARGET_POPCNT) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return -1;
          return 1625; /* *popcountdi2_falsedep */

        default:
          return -1;
        }

    case MEM:
      return recog_425 (x1, insn, pnum_clobbers);

    case REG:
    case SUBREG:
      operands[2] = x3;
      if (pattern226 (x1) != 0)
        return -1;
      x4 = XVECEXP (x1, 0, 2);
      if (pattern381 (x4, 
36) != 0)
        return -1;
      x5 = XEXP (x2, 0);
      x19 = XEXP (x5, 0);
      operands[1] = x19;
      x7 = XVECEXP (x1, 0, 1);
      x12 = XEXP (x7, 0);
      operands[0] = x12;
      x15 = XEXP (x7, 1);
      x18 = XEXP (x15, 0);
      if (!rtx_equal_p (x18, operands[1]))
        return -1;
      x16 = XEXP (x15, 1);
      switch (XWINT (x16, 0))
        {
        case 8L:
          switch (pattern1573 (x1, 
E_DImode))
            {
            case 0:
              if (!(
#line 25684 "../../gcc/config/i386/i386.md"
(TARGET_64BIT
   && !(fixed_regs[AX_REG] || fixed_regs[DI_REG])
   && ix86_check_no_addr_space (insn)) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode)))
                return -1;
              return 1769; /* *strsetdi_rex_1 */

            case 1:
              if (!(
#line 25684 "../../gcc/config/i386/i386.md"
(TARGET_64BIT
   && !(fixed_regs[AX_REG] || fixed_regs[DI_REG])
   && ix86_check_no_addr_space (insn)) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode)))
                return -1;
              return 1770; /* *strsetdi_rex_1 */

            default:
              return -1;
            }

        case 4L:
          switch (pattern1573 (x1, 
E_SImode))
            {
            case 0:
              if (!(
#line 25699 "../../gcc/config/i386/i386.md"
(!(fixed_regs[AX_REG] || fixed_regs[DI_REG])
   && ix86_check_no_addr_space (insn)) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode)))
                return -1;
              return 1771; /* *strsetsi_1 */

            case 1:
              if (!(
#line 25699 "../../gcc/config/i386/i386.md"
(!(fixed_regs[AX_REG] || fixed_regs[DI_REG])
   && ix86_check_no_addr_space (insn)) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode)))
                return -1;
              return 1772; /* *strsetsi_1 */

            default:
              return -1;
            }

        case 2L:
          switch (pattern1573 (x1, 
E_HImode))
            {
            case 0:
              if (!(
#line 25713 "../../gcc/config/i386/i386.md"
(!(fixed_regs[AX_REG] || fixed_regs[DI_REG])
   && ix86_check_no_addr_space (insn)) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode)))
                return -1;
              return 1773; /* *strsethi_1 */

            case 1:
              if (!(
#line 25713 "../../gcc/config/i386/i386.md"
(!(fixed_regs[AX_REG] || fixed_regs[DI_REG])
   && ix86_check_no_addr_space (insn)) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode)))
                return -1;
              return 1774; /* *strsethi_1 */

            default:
              return -1;
            }

        case 1L:
          switch (pattern1573 (x1, 
E_QImode))
            {
            case 0:
              if (!(
#line 25727 "../../gcc/config/i386/i386.md"
(!(fixed_regs[AX_REG] || fixed_regs[DI_REG])
   && ix86_check_no_addr_space (insn)) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode)))
                return -1;
              return 1775; /* *strsetqi_1 */

            case 1:
              if (!(
#line 25727 "../../gcc/config/i386/i386.md"
(!(fixed_regs[AX_REG] || fixed_regs[DI_REG])
   && ix86_check_no_addr_space (insn)) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode)))
                return -1;
              return 1776; /* *strsetqi_1 */

            default:
              return -1;
            }

        default:
          return -1;
        }

    case MINUS:
      x7 = XVECEXP (x1, 0, 1);
      if (pattern227 (x7, 
E_CCmode, 
17) != 0)
        return -1;
      x4 = XVECEXP (x1, 0, 2);
      if (pattern222 (x4) != 0)
        return -1;
      x5 = XEXP (x2, 0);
      operands[0] = x5;
      x6 = XEXP (x3, 0);
      operands[1] = x6;
      x14 = XEXP (x3, 1);
      operands[2] = x14;
      switch (GET_MODE (operands[0]))
        {
        case E_SImode:
          if (pattern568 (x3, 
E_SImode) != 0
              || !
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode))
            return -1;
          return 1851; /* pro_epilogue_adjust_stack_sub_si */

        case E_DImode:
          if (pattern568 (x3, 
E_DImode) != 0
              || !
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode))
            return -1;
          return 1852; /* pro_epilogue_adjust_stack_sub_di */

        default:
          return -1;
        }

    case UNSPEC_VOLATILE:
      return recog_424 (x1, insn, pnum_clobbers);

    default:
      return -1;
    }
}

 rtx_insn *
split_13 (rtx x1 ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx_insn *res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  switch (GET_CODE (x2))
    {
    case COMPARE:
      return split_5 (x1, insn);

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
      operands[1] = x2;
      res = split_1 (x1, insn);
      if (res != NULL_RTX)
        return res;
      switch (GET_CODE (x2))
        {
        case REG:
          if (REGNO (x2) != 17
              || pattern55 (x1, 
E_CCCmode) != 0
              || !(
#line 9883 "../../gcc/config/i386/i386.md"
(ix86_pre_reload_split ()) && 
#line 9885 "../../gcc/config/i386/i386.md"
( 1)))
            return NULL;
          return gen_split_195 (insn, operands);

        case SUBREG:
          if (maybe_ne (SUBREG_BYTE (x2), 0))
            return NULL;
          x3 = XEXP (x2, 0);
          switch (GET_CODE (x3))
            {
            case NOT:
              switch (pattern249 (x1))
                {
                case 0:
                  if (!
#line 15143 "../../gcc/config/i386/i386.md"
(reload_completed
   && !(rtx_equal_p (operands[0], operands[1]))))
                    return NULL;
                  return gen_split_549 (insn, operands);

                case 1:
                  if (!
#line 15143 "../../gcc/config/i386/i386.md"
(reload_completed
   && !(rtx_equal_p (operands[0], operands[1]))))
                    return NULL;
                  return gen_split_550 (insn, operands);

                case 2:
                  if (!(
#line 15143 "../../gcc/config/i386/i386.md"
(reload_completed
   && !(rtx_equal_p (operands[0], operands[1]))) && 
#line 1164 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                    return NULL;
                  return gen_split_551 (insn, operands);

                default:
                  return NULL;
                }

            case LSHIFTRT:
              x4 = XEXP (x1, 0);
              operands[0] = x4;
              switch (pattern292 (x2))
                {
                case 0:
                  if (!((
#line 16736 "../../gcc/config/i386/i386.md"
(TARGET_APX_NF && UINTVAL (operands[2]) < 4 * BITS_PER_UNIT) && 
#line 1235 "../../gcc/config/i386/i386.md"
(!TARGET_64BIT)) && 
#line 16738 "../../gcc/config/i386/i386.md"
( reload_completed)))
                    return NULL;
                  return gen_split_601 (insn, operands);

                case 1:
                  if (!((
#line 16736 "../../gcc/config/i386/i386.md"
(TARGET_APX_NF && UINTVAL (operands[2]) < 8 * BITS_PER_UNIT) && 
#line 1236 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 16738 "../../gcc/config/i386/i386.md"
( reload_completed)))
                    return NULL;
                  return gen_split_603 (insn, operands);

                default:
                  return NULL;
                }

            case ASHIFTRT:
              x4 = XEXP (x1, 0);
              operands[0] = x4;
              switch (pattern292 (x2))
                {
                case 0:
                  if (!((
#line 16736 "../../gcc/config/i386/i386.md"
(TARGET_APX_NF && UINTVAL (operands[2]) < 4 * BITS_PER_UNIT) && 
#line 1235 "../../gcc/config/i386/i386.md"
(!TARGET_64BIT)) && 
#line 16738 "../../gcc/config/i386/i386.md"
( reload_completed)))
                    return NULL;
                  return gen_split_602 (insn, operands);

                case 1:
                  if (!((
#line 16736 "../../gcc/config/i386/i386.md"
(TARGET_APX_NF && UINTVAL (operands[2]) < 8 * BITS_PER_UNIT) && 
#line 1236 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 16738 "../../gcc/config/i386/i386.md"
( reload_completed)))
                    return NULL;
                  return gen_split_604 (insn, operands);

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
      return split_6 (x1, insn);

    case IOR:
      return split_7 (x1, insn);

    case XOR:
      return split_8 (x1, insn);

    case FLOAT_EXTEND:
      x4 = XEXP (x1, 0);
      operands[0] = x4;
      x3 = XEXP (x2, 0);
      operands[1] = x3;
      switch (GET_CODE (operands[1]))
        {
        case SUBREG:
        case MEM:
          if (memory_operand (operands[1], E_VOIDmode)
              && any_fp_register_operand (operands[0], E_VOIDmode)
              && 
#line 4614 "../../gcc/config/i386/i386.md"
(reload_completed
   && (GET_MODE (operands[0]) == TFmode
       || GET_MODE (operands[0]) == XFmode
       || GET_MODE (operands[0]) == DFmode)
   && ix86_standard_x87sse_constant_load_p (insn, operands[0])))
            return gen_split_49 (insn, operands);
          break;

        case REG:
          res = split_2 (x1, insn);
          if (res != NULL_RTX)
            return res;
          break;

        default:
          break;
        }
      if (!nonimmediate_operand (operands[1], E_SFmode)
          || !sse_reg_operand (operands[0], E_DFmode)
          || GET_MODE (x2) != E_DFmode)
        return NULL;
      if (
#line 5339 "../../gcc/config/i386/i386.md"
(TARGET_USE_VECTOR_FP_CONVERTS
   && optimize_insn_for_speed_p ()
   && reload_completed
   && (!EXT_REX_SSE_REG_P (operands[0])
       || TARGET_AVX512VL)))
        return gen_split_70 (insn, operands);
      if (!
#line 5402 "../../gcc/config/i386/i386.md"
(!TARGET_AVX
   && TARGET_SSE_PARTIAL_REG_FP_CONVERTS_DEPENDENCY
   && epilogue_completed
   && optimize_function_for_speed_p (cfun)
   && (!REG_P (operands[1])
       || (!TARGET_AVX && REGNO (operands[0]) != REGNO (operands[1])))
   && (!EXT_REX_SSE_REG_P (operands[0])
       || TARGET_AVX512VL)))
        return NULL;
      return gen_split_71 (insn, operands);

    case ZERO_EXTEND:
      x4 = XEXP (x1, 0);
      operands[0] = x4;
      x3 = XEXP (x2, 0);
      switch (GET_CODE (x3))
        {
        case REG:
        case SUBREG:
        case MEM:
          operands[1] = x3;
          switch (GET_MODE (operands[0]))
            {
            case E_TImode:
              if (!nonimmediate_operand (operands[0], E_TImode)
                  || GET_MODE (x2) != E_TImode
                  || !nonimmediate_operand (operands[1], E_DImode)
                  || !(
#line 4660 "../../gcc/config/i386/i386.md"
(TARGET_64BIT) && 
#line 4662 "../../gcc/config/i386/i386.md"
( reload_completed)))
                return NULL;
              return gen_split_53 (insn, operands);

            case E_DImode:
              if (GET_MODE (x2) != E_DImode)
                return NULL;
              if (memory_operand (operands[0], E_DImode)
                  && memory_operand (operands[1], E_SImode)
                  && 
#line 4784 "../../gcc/config/i386/i386.md"
(reload_completed))
                return gen_split_54 (insn, operands);
              if (general_reg_operand (operands[0], E_DImode)
                  && general_reg_operand (operands[1], E_SImode)
                  && 
#line 4791 "../../gcc/config/i386/i386.md"
(!TARGET_64BIT && reload_completed
   && REGNO (operands[0]) == REGNO (operands[1])))
                return gen_split_55 (insn, operands);
              if (!nonimmediate_gr_operand (operands[0], E_DImode)
                  || !nonimmediate_operand (operands[1], E_SImode)
                  || !
#line 4799 "../../gcc/config/i386/i386.md"
(!TARGET_64BIT && reload_completed
   && !(MEM_P (operands[0]) && MEM_P (operands[1]))))
                return NULL;
              return gen_split_56 (insn, operands);

            default:
              return NULL;
            }

        case UNSPEC:
          if (XVECLEN (x3, 0) != 1
              || XINT (x3, 1) != 19
              || GET_MODE (x3) != E_SImode)
            return NULL;
          x5 = XVECEXP (x3, 0, 0);
          if (x5 != const_int_rtx[MAX_SAVED_CONST_INT + 0]
              || !register_operand (operands[0], E_DImode)
              || GET_MODE (x2) != E_DImode
              || !(
#line 23052 "../../gcc/config/i386/i386.md"
(TARGET_X32) && 
#line 23054 "../../gcc/config/i386/i386.md"
( 1)))
            return NULL;
          return gen_split_909 (insn, operands);

        default:
          return NULL;
        }

    case FLOAT_TRUNCATE:
      if (GET_MODE (x2) != E_SFmode)
        return NULL;
      x4 = XEXP (x1, 0);
      operands[0] = x4;
      if (!sse_reg_operand (operands[0], E_SFmode))
        return NULL;
      x3 = XEXP (x2, 0);
      operands[1] = x3;
      if (!nonimmediate_operand (operands[1], E_DFmode))
        return NULL;
      if (
#line 5578 "../../gcc/config/i386/i386.md"
(TARGET_USE_VECTOR_FP_CONVERTS
   && optimize_insn_for_speed_p ()
   && reload_completed
   && (!EXT_REX_SSE_REG_P (operands[0])
       || TARGET_AVX512VL)))
        return gen_split_72 (insn, operands);
      if (!
#line 5632 "../../gcc/config/i386/i386.md"
(!TARGET_AVX
   && TARGET_SSE_PARTIAL_REG_FP_CONVERTS_DEPENDENCY
   && epilogue_completed
   && optimize_function_for_speed_p (cfun)
   && (!REG_P (operands[1])
       || (!TARGET_AVX && REGNO (operands[0]) != REGNO (operands[1])))
   && (!EXT_REX_SSE_REG_P (operands[0])
       || TARGET_AVX512VL)))
        return NULL;
      return gen_split_73 (insn, operands);

    case FLOAT:
      x4 = XEXP (x1, 0);
      operands[0] = x4;
      x3 = XEXP (x2, 0);
      operands[1] = x3;
      switch (GET_MODE (operands[0]))
        {
        case E_SFmode:
          if (GET_MODE (x2) != E_SFmode)
            return NULL;
          if (sse_reg_operand (operands[0], E_SFmode)
              && nonimmediate_operand (operands[1], E_SImode))
            {
              if (
#line 6159 "../../gcc/config/i386/i386.md"
(TARGET_SSE2
   && TARGET_USE_VECTOR_CONVERTS
   && optimize_function_for_speed_p (cfun)
   && reload_completed
   && (MEM_P (operands[1]) || TARGET_INTER_UNIT_MOVES_TO_VEC)
   && (!EXT_REX_SSE_REG_P (operands[0])
       || TARGET_AVX512VL)))
                return gen_split_79 (insn, operands);
              if (
#line 6244 "../../gcc/config/i386/i386.md"
(!TARGET_AVX
   && TARGET_SSE_PARTIAL_REG_CONVERTS_DEPENDENCY
   && epilogue_completed
   && optimize_function_for_speed_p (cfun)
   && (!EXT_REX_SSE_REG_P (operands[0])
       || TARGET_AVX512VL)))
                return gen_split_87 (insn, operands);
            }
          if (register_operand (operands[0], E_SFmode)
              && register_operand (operands[1], E_DImode)
              && 
#line 6188 "../../gcc/config/i386/i386.md"
(!TARGET_64BIT && TARGET_INTER_UNIT_MOVES_TO_VEC
   && TARGET_80387 && X87_ENABLE_FLOAT (SFmode, DImode)
   && TARGET_SSE2 && optimize_function_for_speed_p (cfun)
   && can_create_pseudo_p ()))
            return gen_split_81 (insn, operands);
          if (!sse_reg_operand (operands[0], E_SFmode)
              || !nonimmediate_operand (operands[1], E_DImode)
              || !(
#line 6244 "../../gcc/config/i386/i386.md"
(!TARGET_AVX
   && TARGET_SSE_PARTIAL_REG_CONVERTS_DEPENDENCY
   && epilogue_completed
   && optimize_function_for_speed_p (cfun)
   && (!EXT_REX_SSE_REG_P (operands[0])
       || TARGET_AVX512VL)) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return NULL;
          return gen_split_88 (insn, operands);

        case E_DFmode:
          if (GET_MODE (x2) != E_DFmode)
            return NULL;
          if (sse_reg_operand (operands[0], E_DFmode)
              && nonimmediate_operand (operands[1], E_SImode))
            {
              if (
#line 6159 "../../gcc/config/i386/i386.md"
(TARGET_SSE2
   && TARGET_USE_VECTOR_CONVERTS
   && optimize_function_for_speed_p (cfun)
   && reload_completed
   && (MEM_P (operands[1]) || TARGET_INTER_UNIT_MOVES_TO_VEC)
   && (!EXT_REX_SSE_REG_P (operands[0])
       || TARGET_AVX512VL)))
                return gen_split_80 (insn, operands);
              if (
#line 6244 "../../gcc/config/i386/i386.md"
(!TARGET_AVX
   && TARGET_SSE_PARTIAL_REG_CONVERTS_DEPENDENCY
   && epilogue_completed
   && optimize_function_for_speed_p (cfun)
   && (!EXT_REX_SSE_REG_P (operands[0])
       || TARGET_AVX512VL)))
                return gen_split_89 (insn, operands);
            }
          if (register_operand (operands[0], E_DFmode)
              && register_operand (operands[1], E_DImode)
              && 
#line 6188 "../../gcc/config/i386/i386.md"
(!TARGET_64BIT && TARGET_INTER_UNIT_MOVES_TO_VEC
   && TARGET_80387 && X87_ENABLE_FLOAT (DFmode, DImode)
   && TARGET_SSE2 && optimize_function_for_speed_p (cfun)
   && can_create_pseudo_p ()))
            return gen_split_82 (insn, operands);
          if (!sse_reg_operand (operands[0], E_DFmode)
              || !nonimmediate_operand (operands[1], E_DImode)
              || !(
#line 6244 "../../gcc/config/i386/i386.md"
(!TARGET_AVX
   && TARGET_SSE_PARTIAL_REG_CONVERTS_DEPENDENCY
   && epilogue_completed
   && optimize_function_for_speed_p (cfun)
   && (!EXT_REX_SSE_REG_P (operands[0])
       || TARGET_AVX512VL)) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return NULL;
          return gen_split_90 (insn, operands);

        case E_XFmode:
          if (!register_operand (operands[0], E_XFmode)
              || GET_MODE (x2) != E_XFmode
              || !register_operand (operands[1], E_DImode)
              || !
#line 6188 "../../gcc/config/i386/i386.md"
(!TARGET_64BIT && TARGET_INTER_UNIT_MOVES_TO_VEC
   && TARGET_80387 && X87_ENABLE_FLOAT (XFmode, DImode)
   && TARGET_SSE2 && optimize_function_for_speed_p (cfun)
   && can_create_pseudo_p ()))
            return NULL;
          return gen_split_83 (insn, operands);

        default:
          return NULL;
        }

    case MULT:
      x4 = XEXP (x1, 0);
      operands[0] = x4;
      x6 = XEXP (x2, 1);
      operands[1] = x6;
      x3 = XEXP (x2, 0);
      if (!rtx_equal_p (x3, operands[0]))
        return NULL;
      switch (GET_MODE (operands[0]))
        {
        case E_SImode:
          if (!general_reg_operand (operands[0], E_SImode)
              || GET_MODE (x2) != E_SImode
              || !const1248_operand (operands[1], E_SImode)
              || !
#line 6428 "../../gcc/config/i386/i386.md"
(TARGET_APX_NF && reload_completed))
            return NULL;
          return gen_split_96 (insn, operands);

        case E_DImode:
          if (!general_reg_operand (operands[0], E_DImode)
              || GET_MODE (x2) != E_DImode
              || !const1248_operand (operands[1], E_DImode)
              || !(
#line 6428 "../../gcc/config/i386/i386.md"
(TARGET_APX_NF && reload_completed) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return NULL;
          return gen_split_97 (insn, operands);

        default:
          return NULL;
        }

    case UNSPEC:
      switch (XVECLEN (x2, 0))
        {
        case 2:
          switch (XINT (x2, 1))
            {
            case 40:
              if (GET_MODE (x2) != E_CCCmode)
                return NULL;
              x7 = XVECEXP (x2, 0, 0);
              if (GET_CODE (x7) != LTU
                  || pattern716 (x7) != 0
                  || pattern246 (x1) != 0)
                return NULL;
              x8 = XEXP (x7, 0);
              switch (GET_MODE (x8))
                {
                case E_CCmode:
                  if (!(
#line 9904 "../../gcc/config/i386/i386.md"
(ix86_pre_reload_split ()) && 
#line 9906 "../../gcc/config/i386/i386.md"
( 1)))
                    return NULL;
                  return gen_split_198 (insn, operands);

                case E_CCCmode:
                  if (!(
#line 9904 "../../gcc/config/i386/i386.md"
(ix86_pre_reload_split ()) && 
#line 9906 "../../gcc/config/i386/i386.md"
( 1)))
                    return NULL;
                  return gen_split_199 (insn, operands);

                default:
                  return NULL;
                }

            case 45:
              if (pattern296 (x2) != 0)
                return NULL;
              x4 = XEXP (x1, 0);
              operands[0] = x4;
              if (!register_operand (operands[0], E_SImode))
                return NULL;
              x9 = XVECEXP (x2, 0, 1);
              operands[2] = x9;
              if (!register_operand (operands[2], E_SImode)
                  || !(
#line 19556 "../../gcc/config/i386/i386.md"
(ix86_pre_reload_split ()) && 
#line 19558 "../../gcc/config/i386/i386.md"
( 1)))
                return NULL;
              return gen_split_856 (insn, operands);

            default:
              return NULL;
            }

        case 1:
          x4 = XEXP (x1, 0);
          operands[0] = x4;
          switch (XINT (x2, 1))
            {
            case 97:
              switch (pattern300 (x2))
                {
                case 0:
                  if (!((
#line 21649 "../../gcc/config/i386/i386.md"
(TARGET_APX_NF) && 
#line 21631 "../../gcc/config/i386/i386.md"
(TARGET_BMI)) && 
#line 21651 "../../gcc/config/i386/i386.md"
( TARGET_AVOID_FALSE_DEP_FOR_BMI && epilogue_completed
   && optimize_function_for_speed_p (cfun)
   && !reg_mentioned_p (operands[0], operands[1]))))
                    return NULL;
                  return gen_split_890 (insn, operands);

                case 1:
                  if (!((
#line 21649 "../../gcc/config/i386/i386.md"
(TARGET_APX_NF) && (((
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT) && 
#line 21631 "../../gcc/config/i386/i386.md"
(TARGET_BMI)) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 21631 "../../gcc/config/i386/i386.md"
(TARGET_BMI))) && 
#line 21651 "../../gcc/config/i386/i386.md"
( TARGET_AVOID_FALSE_DEP_FOR_BMI && epilogue_completed
   && optimize_function_for_speed_p (cfun)
   && !reg_mentioned_p (operands[0], operands[1]))))
                    return NULL;
                  return gen_split_892 (insn, operands);

                default:
                  return NULL;
                }

            case 96:
              switch (pattern300 (x2))
                {
                case 0:
                  if (!((
#line 21649 "../../gcc/config/i386/i386.md"
(TARGET_APX_NF) && 
#line 21632 "../../gcc/config/i386/i386.md"
(TARGET_LZCNT)) && 
#line 21651 "../../gcc/config/i386/i386.md"
( TARGET_AVOID_FALSE_DEP_FOR_BMI && epilogue_completed
   && optimize_function_for_speed_p (cfun)
   && !reg_mentioned_p (operands[0], operands[1]))))
                    return NULL;
                  return gen_split_891 (insn, operands);

                case 1:
                  if (!((
#line 21649 "../../gcc/config/i386/i386.md"
(TARGET_APX_NF) && (((
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT) && 
#line 21632 "../../gcc/config/i386/i386.md"
(TARGET_LZCNT)) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 21632 "../../gcc/config/i386/i386.md"
(TARGET_LZCNT))) && 
#line 21651 "../../gcc/config/i386/i386.md"
( TARGET_AVOID_FALSE_DEP_FOR_BMI && epilogue_completed
   && optimize_function_for_speed_p (cfun)
   && !reg_mentioned_p (operands[0], operands[1]))))
                    return NULL;
                  return gen_split_893 (insn, operands);

                default:
                  return NULL;
                }

            case 19:
              x7 = XVECEXP (x2, 0, 0);
              if (x7 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
                return NULL;
              switch (pattern23 (x2))
                {
                case 0:
                  if (!
#line 1408 "../../gcc/config/i386/i386.md"
(ptr_mode == SImode))
                    return NULL;
                  return gen_split_907 (insn, operands);

                case 1:
                  if (!
#line 1408 "../../gcc/config/i386/i386.md"
(ptr_mode == DImode))
                    return NULL;
                  return gen_split_908 (insn, operands);

                default:
                  return NULL;
                }

            default:
              return NULL;
            }

        default:
          return NULL;
        }

    case SIGN_EXTEND:
      x4 = XEXP (x1, 0);
      operands[0] = x4;
      x3 = XEXP (x2, 0);
      switch (GET_CODE (x3))
        {
        case AND:
          switch (pattern402 (x2))
            {
            case 0:
              return gen_split_400 (insn, operands);

            case 1:
              return gen_split_403 (insn, operands);

            case 2:
              return gen_split_409 (insn, operands);

            case 3:
              if (!
#line 1164 "../../gcc/config/i386/i386.md"
(TARGET_64BIT))
                return NULL;
              return gen_split_406 (insn, operands);

            case 4:
              if (!
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT))
                return NULL;
              return gen_split_412 (insn, operands);

            case 5:
              if (!
#line 13868 "../../gcc/config/i386/i386.md"
(TARGET_64BIT))
                return NULL;
              return gen_split_415 (insn, operands);

            default:
              return NULL;
            }

        case IOR:
          switch (pattern402 (x2))
            {
            case 0:
              return gen_split_401 (insn, operands);

            case 1:
              return gen_split_404 (insn, operands);

            case 2:
              return gen_split_410 (insn, operands);

            case 3:
              if (!
#line 1164 "../../gcc/config/i386/i386.md"
(TARGET_64BIT))
                return NULL;
              return gen_split_407 (insn, operands);

            case 4:
              if (!
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT))
                return NULL;
              return gen_split_413 (insn, operands);

            case 5:
              if (!
#line 13868 "../../gcc/config/i386/i386.md"
(TARGET_64BIT))
                return NULL;
              return gen_split_416 (insn, operands);

            default:
              return NULL;
            }

        case XOR:
          switch (pattern402 (x2))
            {
            case 0:
              return gen_split_402 (insn, operands);

            case 1:
              return gen_split_405 (insn, operands);

            case 2:
              return gen_split_411 (insn, operands);

            case 3:
              if (!
#line 1164 "../../gcc/config/i386/i386.md"
(TARGET_64BIT))
                return NULL;
              return gen_split_408 (insn, operands);

            case 4:
              if (!
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT))
                return NULL;
              return gen_split_414 (insn, operands);

            case 5:
              if (!
#line 13868 "../../gcc/config/i386/i386.md"
(TARGET_64BIT))
                return NULL;
              return gen_split_417 (insn, operands);

            default:
              return NULL;
            }

        default:
          return NULL;
        }

    case NOT:
      switch (pattern40 (x1))
        {
        case 0:
          switch (GET_MODE (operands[0]))
            {
            case E_DImode:
              if (!nonimmediate_operand (operands[0], E_DImode)
                  || GET_MODE (x2) != E_DImode
                  || !nonimmediate_operand (operands[1], E_DImode)
                  || !((
#line 14976 "../../gcc/config/i386/i386.md"
(ix86_unary_operator_ok (NOT, DImode, operands, TARGET_APX_NDD)) && 
#line 1235 "../../gcc/config/i386/i386.md"
(!TARGET_64BIT)) && 
#line 14978 "../../gcc/config/i386/i386.md"
( reload_completed)))
                return NULL;
              return gen_split_540 (insn, operands);

            case E_TImode:
              if (!nonimmediate_operand (operands[0], E_TImode)
                  || GET_MODE (x2) != E_TImode
                  || !nonimmediate_operand (operands[1], E_TImode)
                  || !((
#line 14976 "../../gcc/config/i386/i386.md"
(ix86_unary_operator_ok (NOT, TImode, operands, TARGET_APX_NDD)) && 
#line 1236 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 14978 "../../gcc/config/i386/i386.md"
( reload_completed)))
                return NULL;
              return gen_split_541 (insn, operands);

            default:
              return NULL;
            }

        case 1:
          if (!(
#line 15059 "../../gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)) && 
#line 15063 "../../gcc/config/i386/i386.md"
( reload_completed
   && !(rtx_equal_p (operands[0], operands[1])))))
            return NULL;
          return gen_split_542 (insn, operands);

        case 2:
          if (!(
#line 15059 "../../gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)) && 
#line 15063 "../../gcc/config/i386/i386.md"
( reload_completed
   && !(rtx_equal_p (operands[0], operands[1])))))
            return NULL;
          return gen_split_543 (insn, operands);

        default:
          return NULL;
        }

    case ASHIFT:
      x4 = XEXP (x1, 0);
      operands[0] = x4;
      x3 = XEXP (x2, 0);
      operands[1] = x3;
      x6 = XEXP (x2, 1);
      operands[2] = x6;
      switch (GET_CODE (operands[2]))
        {
        case REG:
        case SUBREG:
          if (!register_operand (operands[2], E_QImode))
            return NULL;
          switch (pattern125 (x2))
            {
            case 0:
              if (!
#line 15978 "../../gcc/config/i386/i386.md"
(TARGET_BMI2 && reload_completed))
                return NULL;
              return gen_split_570 (insn, operands);

            case 1:
              if (!(
#line 15978 "../../gcc/config/i386/i386.md"
(TARGET_BMI2 && reload_completed) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return NULL;
              return gen_split_571 (insn, operands);

            default:
              return NULL;
            }

        case CONST_INT:
          if (!const_0_to_3_operand (operands[2], E_VOIDmode))
            return NULL;
          switch (GET_MODE (operands[0]))
            {
            case E_QImode:
              if (!general_reg_operand (operands[0], E_QImode)
                  || GET_MODE (x2) != E_QImode
                  || !index_reg_operand (operands[1], E_QImode)
                  || !
#line 16300 "../../gcc/config/i386/i386.md"
(reload_completed
   && REGNO (operands[0]) != REGNO (operands[1])
   && !TARGET_APX_NDD))
                return NULL;
              return gen_split_581 (insn, operands);

            case E_HImode:
              if (!general_reg_operand (operands[0], E_HImode)
                  || GET_MODE (x2) != E_HImode
                  || !index_reg_operand (operands[1], E_HImode)
                  || !
#line 16300 "../../gcc/config/i386/i386.md"
(reload_completed
   && REGNO (operands[0]) != REGNO (operands[1])
   && !TARGET_APX_NDD))
                return NULL;
              return gen_split_582 (insn, operands);

            case E_SImode:
              if (!general_reg_operand (operands[0], E_SImode)
                  || GET_MODE (x2) != E_SImode
                  || !index_reg_operand (operands[1], E_SImode)
                  || !
#line 16300 "../../gcc/config/i386/i386.md"
(reload_completed
   && REGNO (operands[0]) != REGNO (operands[1])
   && !TARGET_APX_NDD))
                return NULL;
              return gen_split_583 (insn, operands);

            case E_DImode:
              if (!general_reg_operand (operands[0], E_DImode)
                  || GET_MODE (x2) != E_DImode
                  || !index_reg_operand (operands[1], E_DImode)
                  || !(
#line 16300 "../../gcc/config/i386/i386.md"
(reload_completed
   && REGNO (operands[0]) != REGNO (operands[1])
   && !TARGET_APX_NDD) && 
#line 1161 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return NULL;
              return gen_split_584 (insn, operands);

            default:
              return NULL;
            }

        default:
          return NULL;
        }

    case LSHIFTRT:
      x4 = XEXP (x1, 0);
      operands[0] = x4;
      switch (pattern229 (x2))
        {
        case 0:
          if (!
#line 17425 "../../gcc/config/i386/i386.md"
(TARGET_BMI2 && reload_completed))
            return NULL;
          return gen_split_618 (insn, operands);

        case 1:
          if (!(
#line 17425 "../../gcc/config/i386/i386.md"
(TARGET_BMI2 && reload_completed) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return NULL;
          return gen_split_620 (insn, operands);

        default:
          return NULL;
        }

    case ASHIFTRT:
      x4 = XEXP (x1, 0);
      operands[0] = x4;
      x3 = XEXP (x2, 0);
      switch (GET_CODE (x3))
        {
        case REG:
        case SUBREG:
        case MEM:
          switch (pattern229 (x2))
            {
            case 0:
              if (!
#line 17425 "../../gcc/config/i386/i386.md"
(TARGET_BMI2 && reload_completed))
                return NULL;
              return gen_split_619 (insn, operands);

            case 1:
              if (!(
#line 17425 "../../gcc/config/i386/i386.md"
(TARGET_BMI2 && reload_completed) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return NULL;
              return gen_split_621 (insn, operands);

            default:
              return NULL;
            }

        case ASHIFT:
          if (pattern290 (x2, 
E_V2DImode) != 0)
            return NULL;
          if ((
#line 18006 "../../gcc/config/i386/i386.md"
(!TARGET_64BIT && TARGET_STV && TARGET_AVX512VL
   && INTVAL (operands[2]) == INTVAL (operands[3])
   && UINTVAL (operands[2]) < 32) && 
#line 18010 "../../gcc/config/i386/i386.md"
( reload_completed)))
            return gen_split_676 (insn, operands);
          if (!(
#line 18023 "../../gcc/config/i386/i386.md"
(!TARGET_AVX512VL
   && INTVAL (operands[2]) == INTVAL (operands[3])
   && UINTVAL (operands[2]) < 32
   && ix86_pre_reload_split ()) && 
#line 18028 "../../gcc/config/i386/i386.md"
( 1)))
            return NULL;
          return gen_split_677 (insn, operands);

        default:
          return NULL;
        }

    case ROTATE:
      return split_9 (x1, insn);

    case ROTATERT:
      return split_11 (x1, insn);

    case IF_THEN_ELSE:
      return split_12 (x1, insn);

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
      switch (GET_CODE (x2))
        {
        case GEU:
        case LTU:
          res = split_4 (x1, insn);
          if (res != NULL_RTX)
            return res;
          break;

        case GTU:
        case LEU:
          operands[1] = x2;
          if (shr_comparison_operator (operands[1], E_QImode))
            {
              x4 = XEXP (x1, 0);
              operands[0] = x4;
              if (nonimmediate_operand (operands[0], E_QImode))
                {
                  x3 = XEXP (x2, 0);
                  operands[2] = x3;
                  if (register_operand (operands[2], E_DImode))
                    {
                      x6 = XEXP (x2, 1);
                      operands[3] = x6;
                      if (const_int_operand (operands[3], E_VOIDmode)
                          && 
#line 19443 "../../gcc/config/i386/i386.md"
(TARGET_64BIT
   && IN_RANGE (exact_log2 (UINTVAL (operands[3]) + 1), 32, 63)))
                        return gen_split_850 (insn, operands);
                    }
                }
            }
          break;

        case NE:
          switch (pattern230 (x1))
            {
            case 0:
              return gen_split_857 (insn, operands);

            case 1:
              return gen_split_858 (insn, operands);

            default:
              break;
            }
          break;

        case EQ:
          switch (pattern230 (x1))
            {
            case 0:
              return gen_split_859 (insn, operands);

            case 1:
              return gen_split_860 (insn, operands);

            default:
              break;
            }
          break;

        default:
          break;
        }
      operands[1] = x2;
      x3 = XEXP (x2, 0);
      if (GET_CODE (x3) != REG
          || REGNO (x3) != 17)
        return NULL;
      x6 = XEXP (x2, 1);
      if (x6 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
        return NULL;
      x4 = XEXP (x1, 0);
      operands[0] = x4;
      switch (GET_MODE (operands[0]))
        {
        case E_DImode:
          if (!register_operand (operands[0], E_DImode)
              || !ix86_comparison_operator (operands[1], E_DImode)
              || !(
#line 19481 "../../gcc/config/i386/i386.md"
(!TARGET_APX_ZU && TARGET_64BIT && !TARGET_PARTIAL_REG_STALL) && 
#line 19483 "../../gcc/config/i386/i386.md"
( reload_completed)))
            return NULL;
          return gen_split_851 (insn, operands);

        case E_HImode:
          if (!register_operand (operands[0], E_HImode)
              || !ix86_comparison_operator (operands[1], E_HImode)
              || !(
#line 19514 "../../gcc/config/i386/i386.md"
(!TARGET_APX_ZU && !TARGET_PARTIAL_REG_STALL
   && (!TARGET_ZERO_EXTEND_WITH_AND || optimize_function_for_size_p (cfun))) && 
#line 19517 "../../gcc/config/i386/i386.md"
( reload_completed)))
            return NULL;
          return gen_split_854 (insn, operands);

        case E_SImode:
          if (!register_operand (operands[0], E_SImode)
              || !ix86_comparison_operator (operands[1], E_SImode)
              || !(
#line 19514 "../../gcc/config/i386/i386.md"
(!TARGET_APX_ZU && !TARGET_PARTIAL_REG_STALL
   && (!TARGET_ZERO_EXTEND_WITH_AND || optimize_function_for_size_p (cfun))) && 
#line 19517 "../../gcc/config/i386/i386.md"
( reload_completed)))
            return NULL;
          return gen_split_855 (insn, operands);

        default:
          return NULL;
        }

    case MINUS:
      return split_10 (x1, insn);

    case CLZ:
      x4 = XEXP (x1, 0);
      operands[0] = x4;
      x3 = XEXP (x2, 0);
      operands[1] = x3;
      switch (pattern125 (x2))
        {
        case 0:
          if (!(
#line 21488 "../../gcc/config/i386/i386.md"
(TARGET_APX_NF && TARGET_LZCNT) && 
#line 21490 "../../gcc/config/i386/i386.md"
( TARGET_AVOID_FALSE_DEP_FOR_BMI && epilogue_completed
   && optimize_function_for_speed_p (cfun)
   && !reg_mentioned_p (operands[0], operands[1]))))
            return NULL;
          return gen_split_884 (insn, operands);

        case 1:
          if (!((
#line 21488 "../../gcc/config/i386/i386.md"
(TARGET_APX_NF && TARGET_LZCNT) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 21490 "../../gcc/config/i386/i386.md"
( TARGET_AVOID_FALSE_DEP_FOR_BMI && epilogue_completed
   && optimize_function_for_speed_p (cfun)
   && !reg_mentioned_p (operands[0], operands[1]))))
            return NULL;
          return gen_split_885 (insn, operands);

        default:
          return NULL;
        }

    case POPCOUNT:
      x4 = XEXP (x1, 0);
      operands[0] = x4;
      x3 = XEXP (x2, 0);
      operands[1] = x3;
      switch (pattern125 (x2))
        {
        case 0:
          if (!(
#line 22145 "../../gcc/config/i386/i386.md"
(TARGET_APX_NF && TARGET_POPCNT) && 
#line 22153 "../../gcc/config/i386/i386.md"
( TARGET_AVOID_FALSE_DEP_FOR_BMI && epilogue_completed
   && optimize_function_for_speed_p (cfun)
   && !reg_mentioned_p (operands[0], operands[1]))))
            return NULL;
          return gen_split_898 (insn, operands);

        case 1:
          if (!((
#line 22145 "../../gcc/config/i386/i386.md"
(TARGET_APX_NF && TARGET_POPCNT) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 22153 "../../gcc/config/i386/i386.md"
( TARGET_AVOID_FALSE_DEP_FOR_BMI && epilogue_completed
   && optimize_function_for_speed_p (cfun)
   && !reg_mentioned_p (operands[0], operands[1]))))
            return NULL;
          return gen_split_899 (insn, operands);

        default:
          return NULL;
        }

    default:
      return NULL;
    }
}

 rtx_insn *
split_45 (rtx x1 ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4;
  rtx_insn *res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  operands[1] = x2;
  x3 = XEXP (x1, 0);
  operands[0] = x3;
  switch (GET_MODE (operands[0]))
    {
    case E_V8QImode:
      if (nonimmediate_gr_operand (operands[0], E_V8QImode)
          && nonimmediate_gr_operand (operands[1], E_V8QImode)
          && 
#line 310 "../../gcc/config/i386/mmx.md"
(!TARGET_64BIT && reload_completed))
        return gen_split_979 (insn, operands);
      break;

    case E_V4HImode:
      if (nonimmediate_gr_operand (operands[0], E_V4HImode)
          && nonimmediate_gr_operand (operands[1], E_V4HImode)
          && 
#line 310 "../../gcc/config/i386/mmx.md"
(!TARGET_64BIT && reload_completed))
        return gen_split_980 (insn, operands);
      break;

    case E_V2SImode:
      if (nonimmediate_gr_operand (operands[0], E_V2SImode)
          && nonimmediate_gr_operand (operands[1], E_V2SImode)
          && 
#line 310 "../../gcc/config/i386/mmx.md"
(!TARGET_64BIT && reload_completed))
        return gen_split_981 (insn, operands);
      break;

    case E_V1DImode:
      if (nonimmediate_gr_operand (operands[0], E_V1DImode)
          && nonimmediate_gr_operand (operands[1], E_V1DImode)
          && 
#line 310 "../../gcc/config/i386/mmx.md"
(!TARGET_64BIT && reload_completed))
        return gen_split_982 (insn, operands);
      break;

    case E_V2SFmode:
      if (nonimmediate_gr_operand (operands[0], E_V2SFmode)
          && nonimmediate_gr_operand (operands[1], E_V2SFmode)
          && 
#line 310 "../../gcc/config/i386/mmx.md"
(!TARGET_64BIT && reload_completed))
        return gen_split_983 (insn, operands);
      break;

    case E_V4HFmode:
      if (nonimmediate_gr_operand (operands[0], E_V4HFmode)
          && nonimmediate_gr_operand (operands[1], E_V4HFmode)
          && 
#line 310 "../../gcc/config/i386/mmx.md"
(!TARGET_64BIT && reload_completed))
        return gen_split_984 (insn, operands);
      break;

    case E_V4BFmode:
      if (nonimmediate_gr_operand (operands[0], E_V4BFmode)
          && nonimmediate_gr_operand (operands[1], E_V4BFmode)
          && 
#line 310 "../../gcc/config/i386/mmx.md"
(!TARGET_64BIT && reload_completed))
        return gen_split_985 (insn, operands);
      break;

    case E_V4QImode:
      if (push_operand (operands[0], E_V4QImode)
          && sse_reg_operand (operands[1], E_V4QImode))
        {
          if ((
#line 440 "../../gcc/config/i386/mmx.md"
(TARGET_64BIT && TARGET_SSE && reload_completed) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode)))
            return gen_split_1003 (insn, operands);
          if ((
#line 440 "../../gcc/config/i386/mmx.md"
(TARGET_64BIT && TARGET_SSE && reload_completed) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode)))
            return gen_split_1008 (insn, operands);
        }
      break;

    case E_V2HImode:
      if (push_operand (operands[0], E_V2HImode)
          && sse_reg_operand (operands[1], E_V2HImode))
        {
          if ((
#line 440 "../../gcc/config/i386/mmx.md"
(TARGET_64BIT && TARGET_SSE && reload_completed) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode)))
            return gen_split_1004 (insn, operands);
          if ((
#line 440 "../../gcc/config/i386/mmx.md"
(TARGET_64BIT && TARGET_SSE && reload_completed) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode)))
            return gen_split_1009 (insn, operands);
        }
      break;

    case E_V1SImode:
      if (push_operand (operands[0], E_V1SImode)
          && sse_reg_operand (operands[1], E_V1SImode))
        {
          if ((
#line 440 "../../gcc/config/i386/mmx.md"
(TARGET_64BIT && TARGET_SSE && reload_completed) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode)))
            return gen_split_1005 (insn, operands);
          if ((
#line 440 "../../gcc/config/i386/mmx.md"
(TARGET_64BIT && TARGET_SSE && reload_completed) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode)))
            return gen_split_1010 (insn, operands);
        }
      break;

    case E_V2HFmode:
      if (push_operand (operands[0], E_V2HFmode)
          && sse_reg_operand (operands[1], E_V2HFmode))
        {
          if ((
#line 440 "../../gcc/config/i386/mmx.md"
(TARGET_64BIT && TARGET_SSE && reload_completed) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode)))
            return gen_split_1006 (insn, operands);
          if ((
#line 440 "../../gcc/config/i386/mmx.md"
(TARGET_64BIT && TARGET_SSE && reload_completed) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode)))
            return gen_split_1011 (insn, operands);
        }
      break;

    case E_V2BFmode:
      if (push_operand (operands[0], E_V2BFmode)
          && sse_reg_operand (operands[1], E_V2BFmode))
        {
          if ((
#line 440 "../../gcc/config/i386/mmx.md"
(TARGET_64BIT && TARGET_SSE && reload_completed) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode)))
            return gen_split_1007 (insn, operands);
          if ((
#line 440 "../../gcc/config/i386/mmx.md"
(TARGET_64BIT && TARGET_SSE && reload_completed) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode)))
            return gen_split_1012 (insn, operands);
        }
      break;

    case E_V2QImode:
      if (push_operand (operands[0], E_V2QImode)
          && sse_reg_operand (operands[1], E_V2QImode))
        {
          if ((
#line 614 "../../gcc/config/i386/mmx.md"
(TARGET_SSE4_1 && reload_completed) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode)))
            return gen_split_1013 (insn, operands);
          if ((
#line 614 "../../gcc/config/i386/mmx.md"
(TARGET_SSE4_1 && reload_completed) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode)))
            return gen_split_1014 (insn, operands);
        }
      break;

    case E_P2QImode:
      if (nonimmediate_operand (operands[0], E_P2QImode)
          && nonimmediate_operand (operands[1], E_P2QImode)
          && (
#line 30945 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VP2INTERSECT
   && !(MEM_P (operands[0]) && MEM_P (operands[1]))) && 
#line 30948 "../../gcc/config/i386/sse.md"
( reload_completed)))
        return gen_split_3807 (insn, operands);
      break;

    case E_P2HImode:
      if (nonimmediate_operand (operands[0], E_P2HImode)
          && nonimmediate_operand (operands[1], E_P2HImode)
          && (
#line 30945 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VP2INTERSECT
   && !(MEM_P (operands[0]) && MEM_P (operands[1]))) && 
#line 30948 "../../gcc/config/i386/sse.md"
( reload_completed)))
        return gen_split_3808 (insn, operands);
      break;

    default:
      break;
    }
  if (GET_CODE (x2) != SUBREG)
    return NULL;
  operands[0] = x3;
  switch (SUBREG_BYTE (x2))
    {
    case 8:
      if (GET_MODE (x2) != E_DFmode
          || !register_operand (operands[0], E_DFmode))
        return NULL;
      x4 = XEXP (x2, 0);
      operands[1] = x4;
      if (!register_operand (operands[1], E_V2DFmode)
          || !
#line 14639 "../../gcc/config/i386/sse.md"
(TARGET_SSE))
        return NULL;
      return gen_split_3162 (insn, operands);

    case 0:
      x4 = XEXP (x2, 0);
      switch (GET_CODE (x4))
        {
        case REG:
        case SUBREG:
          operands[1] = x4;
          switch (GET_MODE (operands[0]))
            {
            case E_DFmode:
              if (!register_operand (operands[0], E_DFmode)
                  || GET_MODE (x2) != E_DFmode
                  || !register_operand (operands[1], E_V2DFmode)
                  || !
#line 14692 "../../gcc/config/i386/sse.md"
(TARGET_SSE))
                return NULL;
              return gen_split_3164 (insn, operands);

            case E_SImode:
              if (!nonimmediate_operand (operands[0], E_SImode)
                  || GET_MODE (x2) != E_SImode
                  || !register_operand (operands[1], E_VOIDmode)
                  || !
#line 21449 "../../gcc/config/i386/sse.md"
(can_create_pseudo_p ()
   && REG_P (operands[1])
   && VECTOR_MODE_P (GET_MODE (operands[1]))
   && ((TARGET_SSE && GET_MODE_SIZE (GET_MODE (operands[1])) == 16)
       || (TARGET_AVX && GET_MODE_SIZE (GET_MODE (operands[1])) == 32)
       || (TARGET_AVX512F && TARGET_EVEX512
	   && GET_MODE_SIZE (GET_MODE (operands[1])) == 64))
   && (SImode == SImode || TARGET_64BIT || MEM_P (operands[0]))))
                return NULL;
              return gen_split_3390 (insn, operands);

            case E_DImode:
              if (!nonimmediate_operand (operands[0], E_DImode)
                  || GET_MODE (x2) != E_DImode
                  || !register_operand (operands[1], E_VOIDmode)
                  || !
#line 21449 "../../gcc/config/i386/sse.md"
(can_create_pseudo_p ()
   && REG_P (operands[1])
   && VECTOR_MODE_P (GET_MODE (operands[1]))
   && ((TARGET_SSE && GET_MODE_SIZE (GET_MODE (operands[1])) == 16)
       || (TARGET_AVX && GET_MODE_SIZE (GET_MODE (operands[1])) == 32)
       || (TARGET_AVX512F && TARGET_EVEX512
	   && GET_MODE_SIZE (GET_MODE (operands[1])) == 64))
   && (DImode == SImode || TARGET_64BIT || MEM_P (operands[0]))))
                return NULL;
              return gen_split_3391 (insn, operands);

            default:
              return NULL;
            }

        case SS_TRUNCATE:
          switch (pattern724 (x2))
            {
            case 0:
              if (!(
#line 15412 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()) && 
#line 15414 "../../gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_3176 (insn, operands);

            case 1:
              if (!(
#line 15507 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()) && 
#line 15509 "../../gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_3179 (insn, operands);

            case 2:
              if (!(
#line 15507 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()) && 
#line 15509 "../../gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_3182 (insn, operands);

            case 3:
              if (!(
#line 15858 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()) && 
#line 15860 "../../gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_3198 (insn, operands);

            case 4:
              if (!((
#line 15605 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()) && 
#line 15587 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW)) && 
#line 15607 "../../gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_3185 (insn, operands);

            case 5:
              if (!(
#line 15605 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()) && 
#line 15607 "../../gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_3188 (insn, operands);

            case 6:
              if (!(
#line 16121 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512 && ix86_pre_reload_split ()) && 
#line 16123 "../../gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_3205 (insn, operands);

            case 7:
              if (!(
#line 15767 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()) && 
#line 15769 "../../gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_3192 (insn, operands);

            case 8:
              if (!(
#line 15767 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()) && 
#line 15769 "../../gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_3195 (insn, operands);

            case 9:
              if (!(
#line 16008 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()) && 
#line 16010 "../../gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_3202 (insn, operands);

            default:
              return NULL;
            }

        case TRUNCATE:
          switch (pattern724 (x2))
            {
            case 0:
              if (!(
#line 15412 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()) && 
#line 15414 "../../gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_3177 (insn, operands);

            case 1:
              if (!(
#line 15507 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()) && 
#line 15509 "../../gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_3180 (insn, operands);

            case 2:
              if (!(
#line 15507 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()) && 
#line 15509 "../../gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_3183 (insn, operands);

            case 3:
              if (!(
#line 15858 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()) && 
#line 15860 "../../gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_3199 (insn, operands);

            case 4:
              if (!((
#line 15605 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()) && 
#line 15587 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW)) && 
#line 15607 "../../gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_3186 (insn, operands);

            case 5:
              if (!(
#line 15605 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()) && 
#line 15607 "../../gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_3189 (insn, operands);

            case 6:
              if (!(
#line 16121 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512 && ix86_pre_reload_split ()) && 
#line 16123 "../../gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_3206 (insn, operands);

            case 7:
              if (!(
#line 15767 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()) && 
#line 15769 "../../gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_3193 (insn, operands);

            case 8:
              if (!(
#line 15767 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()) && 
#line 15769 "../../gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_3196 (insn, operands);

            case 9:
              if (!(
#line 16008 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()) && 
#line 16010 "../../gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_3203 (insn, operands);

            default:
              return NULL;
            }

        case US_TRUNCATE:
          switch (pattern724 (x2))
            {
            case 0:
              if (!(
#line 15412 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()) && 
#line 15414 "../../gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_3178 (insn, operands);

            case 1:
              if (!(
#line 15507 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()) && 
#line 15509 "../../gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_3181 (insn, operands);

            case 2:
              if (!(
#line 15507 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()) && 
#line 15509 "../../gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_3184 (insn, operands);

            case 3:
              if (!(
#line 15858 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()) && 
#line 15860 "../../gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_3200 (insn, operands);

            case 4:
              if (!((
#line 15605 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()) && 
#line 15587 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW)) && 
#line 15607 "../../gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_3187 (insn, operands);

            case 5:
              if (!(
#line 15605 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()) && 
#line 15607 "../../gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_3190 (insn, operands);

            case 6:
              if (!(
#line 16121 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512 && ix86_pre_reload_split ()) && 
#line 16123 "../../gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_3207 (insn, operands);

            case 7:
              if (!(
#line 15767 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()) && 
#line 15769 "../../gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_3194 (insn, operands);

            case 8:
              if (!(
#line 15767 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()) && 
#line 15769 "../../gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_3197 (insn, operands);

            case 9:
              if (!(
#line 16008 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()) && 
#line 16010 "../../gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_3204 (insn, operands);

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
split_60 (rtx x1 ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  rtx_insn *res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  x4 = XVECEXP (x3, 0, 0);
  if (x4 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
    return NULL;
  x5 = XVECEXP (x3, 0, 1);
  if (x5 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
    return NULL;
  switch (GET_MODE (operands[0]))
    {
    case E_V2DFmode:
      if (!nonimmediate_operand (operands[0], E_V2DFmode)
          || GET_MODE (x2) != E_V2DFmode)
        return NULL;
      switch (GET_MODE (operands[1]))
        {
        case E_V8DFmode:
          if (!register_operand (operands[1], E_V8DFmode)
              || !(
#line 12471 "../../gcc/config/i386/sse.md"
(TARGET_AVX512DQ
   && reload_completed
   && (TARGET_AVX512VL
       || REG_P (operands[0])
       || !EXT_REX_SSE_REG_P (operands[1]))) && 
#line 718 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return NULL;
          return gen_split_1549 (insn, operands);

        case E_V4DFmode:
          if (!nonimmediate_operand (operands[1], E_V4DFmode)
              || !
#line 12889 "../../gcc/config/i386/sse.md"
(TARGET_AVX && !(MEM_P (operands[0]) && MEM_P (operands[1]))
   && reload_completed))
            return NULL;
          return gen_split_1558 (insn, operands);

        default:
          return NULL;
        }

    case E_V2DImode:
      if (!nonimmediate_operand (operands[0], E_V2DImode)
          || GET_MODE (x2) != E_V2DImode)
        return NULL;
      switch (GET_MODE (operands[1]))
        {
        case E_V8DImode:
          if (!register_operand (operands[1], E_V8DImode)
              || !(
#line 12471 "../../gcc/config/i386/sse.md"
(TARGET_AVX512DQ
   && reload_completed
   && (TARGET_AVX512VL
       || REG_P (operands[0])
       || !EXT_REX_SSE_REG_P (operands[1]))) && 
#line 718 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return NULL;
          return gen_split_1550 (insn, operands);

        case E_V4DImode:
          if (!nonimmediate_operand (operands[1], E_V4DImode)
              || !
#line 12889 "../../gcc/config/i386/sse.md"
(TARGET_AVX && !(MEM_P (operands[0]) && MEM_P (operands[1]))
   && reload_completed))
            return NULL;
          return gen_split_1557 (insn, operands);

        default:
          return NULL;
        }

    default:
      return NULL;
    }
}

 rtx_insn *
split_62 (rtx x1 ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7;
  rtx_insn *res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  if (pattern835 (x3) != 0)
    return NULL;
  x4 = XVECEXP (x3, 0, 4);
  if (x4 != const_int_rtx[MAX_SAVED_CONST_INT + 4])
    return NULL;
  x5 = XVECEXP (x3, 0, 5);
  if (x5 != const_int_rtx[MAX_SAVED_CONST_INT + 5])
    return NULL;
  x6 = XVECEXP (x3, 0, 6);
  if (x6 != const_int_rtx[MAX_SAVED_CONST_INT + 6])
    return NULL;
  x7 = XVECEXP (x3, 0, 7);
  if (x7 != const_int_rtx[MAX_SAVED_CONST_INT + 7])
    return NULL;
  switch (pattern1533 (x2))
    {
    case 0:
      if (!(
#line 12841 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && !(MEM_P (operands[0]) && MEM_P (operands[1]))
   && reload_completed
   && (TARGET_AVX512VL
       || REG_P (operands[0])
       || !EXT_REX_SSE_REG_P (operands[1]))) && 
#line 722 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return NULL;
      return gen_split_1555 (insn, operands);

    case 1:
      if (!(
#line 12841 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && !(MEM_P (operands[0]) && MEM_P (operands[1]))
   && reload_completed
   && (TARGET_AVX512VL
       || REG_P (operands[0])
       || !EXT_REX_SSE_REG_P (operands[1]))) && 
#line 722 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return NULL;
      return gen_split_1556 (insn, operands);

    case 2:
      if (!(
#line 13081 "../../gcc/config/i386/sse.md"
(TARGET_AVX && !(MEM_P (operands[0]) && MEM_P (operands[1]))) && 
#line 13083 "../../gcc/config/i386/sse.md"
( reload_completed)))
        return NULL;
      return gen_split_1564 (insn, operands);

    case 3:
      if (!(
#line 13081 "../../gcc/config/i386/sse.md"
(TARGET_AVX && !(MEM_P (operands[0]) && MEM_P (operands[1]))) && 
#line 13083 "../../gcc/config/i386/sse.md"
( reload_completed)))
        return NULL;
      return gen_split_1565 (insn, operands);

    case 4:
      if (!(
#line 13081 "../../gcc/config/i386/sse.md"
(TARGET_AVX && !(MEM_P (operands[0]) && MEM_P (operands[1]))) && 
#line 13083 "../../gcc/config/i386/sse.md"
( reload_completed)))
        return NULL;
      return gen_split_1566 (insn, operands);

    default:
      return NULL;
    }
}

 rtx_insn *
split_63 (rtx x1 ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  rtx_insn *res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  switch (XVECLEN (x3, 0))
    {
    case 2:
      res = split_60 (x1, insn);
      if (res != NULL_RTX)
        return res;
      break;

    case 4:
      res = split_61 (x1, insn);
      if (res != NULL_RTX)
        return res;
      break;

    case 8:
      res = split_62 (x1, insn);
      if (res != NULL_RTX)
        return res;
      break;

    case 16:
      if (pattern836 (x3, 
6, 
5, 
4) == 0
          && pattern1508 (x3, 
11, 
10, 
9, 
8, 
7) == 0)
        {
          switch (pattern1776 (x2))
            {
            case 0:
              if (((
#line 13025 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && !(MEM_P (operands[0]) && MEM_P (operands[1]))) && 
#line 1033 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)) && 
#line 13034 "../../gcc/config/i386/sse.md"
( reload_completed
   && (TARGET_AVX512VL
       || REG_P (operands[0])
       || !EXT_REX_SSE_REG_P (operands[1])))))
                return gen_split_1561 (insn, operands);
              break;

            case 1:
              if (((
#line 13025 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && !(MEM_P (operands[0]) && MEM_P (operands[1]))) && 
#line 1033 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)) && 
#line 13034 "../../gcc/config/i386/sse.md"
( reload_completed
   && (TARGET_AVX512VL
       || REG_P (operands[0])
       || !EXT_REX_SSE_REG_P (operands[1])))))
                return gen_split_1562 (insn, operands);
              break;

            case 2:
              if (((
#line 13025 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && !(MEM_P (operands[0]) && MEM_P (operands[1]))) && 
#line 1033 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)) && 
#line 13034 "../../gcc/config/i386/sse.md"
( reload_completed
   && (TARGET_AVX512VL
       || REG_P (operands[0])
       || !EXT_REX_SSE_REG_P (operands[1])))))
                return gen_split_1563 (insn, operands);
              break;

            case 3:
              if ((
#line 13195 "../../gcc/config/i386/sse.md"
(TARGET_AVX && !(MEM_P (operands[0]) && MEM_P (operands[1]))) && 
#line 13197 "../../gcc/config/i386/sse.md"
( reload_completed)))
                return gen_split_1568 (insn, operands);
              break;

            default:
              break;
            }
        }
      break;

    case 32:
      if (pattern838 (x3, 
11, 
10, 
9, 
8) == 0
          && pattern1687 (x3, 
15, 
14, 
13, 
12, 
16) == 0
          && pattern1797 (x3, 
21, 
20, 
19, 
18, 
17) == 0
          && pattern1839 (x3, 
26, 
25, 
24, 
23, 
22) == 0)
        {
          x4 = XVECEXP (x3, 0, 27);
          if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + 27]
              && pattern1857 (x3, 
31, 
30, 
29, 
28) == 0
              && nonimmediate_operand (operands[0], E_V32QImode)
              && GET_MODE (x2) == E_V32QImode
              && nonimmediate_operand (operands[1], E_V64QImode)
              && (
#line 13127 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512
   && !(MEM_P (operands[0]) && MEM_P (operands[1]))) && 
#line 13137 "../../gcc/config/i386/sse.md"
( reload_completed
   && (TARGET_AVX512VL
       || REG_P (operands[0])
       || !EXT_REX_SSE_REG_P (operands[1])))))
            return gen_split_1567 (insn, operands);
        }
      break;

    default:
      break;
    }
  if (XVECLEN (x3, 0) < 1)
    return NULL;
  operands[2] = x3;
  if (!avx_vbroadcast_operand (operands[2], E_VOIDmode))
    return NULL;
  x5 = XVECEXP (x3, 0, 0);
  operands[3] = x5;
  if (!const_int_operand (operands[3], E_VOIDmode))
    return NULL;
  switch (GET_MODE (operands[0]))
    {
    case E_V8SFmode:
      if (!register_operand (operands[0], E_V8SFmode)
          || GET_MODE (x2) != E_V8SFmode
          || !nonimmediate_operand (operands[1], E_V8SFmode)
          || !(
#line 27388 "../../gcc/config/i386/sse.md"
(TARGET_AVX
   && (V8SFmode != V4DFmode || !TARGET_AVX2 || operands[3] == const0_rtx)) && 
#line 27391 "../../gcc/config/i386/sse.md"
( reload_completed)))
        return NULL;
      return gen_split_3715 (insn, operands);

    case E_V4DFmode:
      if (!register_operand (operands[0], E_V4DFmode)
          || GET_MODE (x2) != E_V4DFmode
          || !nonimmediate_operand (operands[1], E_V4DFmode)
          || !(
#line 27388 "../../gcc/config/i386/sse.md"
(TARGET_AVX
   && (V4DFmode != V4DFmode || !TARGET_AVX2 || operands[3] == const0_rtx)) && 
#line 27391 "../../gcc/config/i386/sse.md"
( reload_completed)))
        return NULL;
      return gen_split_3716 (insn, operands);

    default:
      return NULL;
    }
}

 rtx_insn *
split_66 (rtx x1 ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7;
  rtx_insn *res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  switch (GET_CODE (x3))
    {
    case REG:
    case SUBREG:
    case MEM:
      operands[1] = x3;
      x4 = XEXP (x2, 1);
      operands[2] = x4;
      switch (GET_MODE (operands[0]))
        {
        case E_V32BFmode:
          if (pattern956 (x2, 
E_V32BFmode) != 0
              || !((
#line 5457 "../../gcc/config/i386/sse.md"
(TARGET_SSE && ix86_pre_reload_split ()) && 
#line 412 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)) && 
#line 5459 "../../gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1478 (insn, operands);

        case E_V16BFmode:
          if (pattern956 (x2, 
E_V16BFmode) != 0
              || !((
#line 5457 "../../gcc/config/i386/sse.md"
(TARGET_SSE && ix86_pre_reload_split ()) && 
#line 413 "../../gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 5459 "../../gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1479 (insn, operands);

        case E_V8BFmode:
          if (pattern956 (x2, 
E_V8BFmode) != 0
              || !((
#line 5457 "../../gcc/config/i386/sse.md"
(TARGET_SSE && ix86_pre_reload_split ()) && 
#line 413 "../../gcc/config/i386/sse.md"
(TARGET_SSE2)) && 
#line 5459 "../../gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1480 (insn, operands);

        case E_V32HFmode:
          if (pattern956 (x2, 
E_V32HFmode) != 0
              || !((
#line 5457 "../../gcc/config/i386/sse.md"
(TARGET_SSE && ix86_pre_reload_split ()) && 
#line 414 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)) && 
#line 5459 "../../gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1481 (insn, operands);

        case E_V16HFmode:
          if (pattern956 (x2, 
E_V16HFmode) != 0
              || !((
#line 5457 "../../gcc/config/i386/sse.md"
(TARGET_SSE && ix86_pre_reload_split ()) && 
#line 415 "../../gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 5459 "../../gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1482 (insn, operands);

        case E_V8HFmode:
          if (pattern956 (x2, 
E_V8HFmode) != 0
              || !((
#line 5457 "../../gcc/config/i386/sse.md"
(TARGET_SSE && ix86_pre_reload_split ()) && 
#line 415 "../../gcc/config/i386/sse.md"
(TARGET_SSE2)) && 
#line 5459 "../../gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1483 (insn, operands);

        case E_V16SFmode:
          if (pattern956 (x2, 
E_V16SFmode) != 0
              || !((
#line 5457 "../../gcc/config/i386/sse.md"
(TARGET_SSE && ix86_pre_reload_split ()) && 
#line 416 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)) && 
#line 5459 "../../gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1484 (insn, operands);

        case E_V8SFmode:
          if (pattern956 (x2, 
E_V8SFmode) != 0
              || !((
#line 5457 "../../gcc/config/i386/sse.md"
(TARGET_SSE && ix86_pre_reload_split ()) && 
#line 416 "../../gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 5459 "../../gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1485 (insn, operands);

        case E_V4SFmode:
          if (pattern956 (x2, 
E_V4SFmode) != 0
              || !(
#line 5457 "../../gcc/config/i386/sse.md"
(TARGET_SSE && ix86_pre_reload_split ()) && 
#line 5459 "../../gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1486 (insn, operands);

        case E_V8DFmode:
          if (pattern956 (x2, 
E_V8DFmode) != 0
              || !((
#line 5457 "../../gcc/config/i386/sse.md"
(TARGET_SSE && ix86_pre_reload_split ()) && 
#line 417 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)) && 
#line 5459 "../../gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1487 (insn, operands);

        case E_V4DFmode:
          if (pattern956 (x2, 
E_V4DFmode) != 0
              || !((
#line 5457 "../../gcc/config/i386/sse.md"
(TARGET_SSE && ix86_pre_reload_split ()) && 
#line 418 "../../gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 5459 "../../gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1488 (insn, operands);

        case E_V2DFmode:
          if (pattern956 (x2, 
E_V2DFmode) != 0
              || !((
#line 5457 "../../gcc/config/i386/sse.md"
(TARGET_SSE && ix86_pre_reload_split ()) && 
#line 418 "../../gcc/config/i386/sse.md"
(TARGET_SSE2)) && 
#line 5459 "../../gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1489 (insn, operands);

        default:
          return NULL;
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
              return gen_split_1649 (insn, operands);

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
              return gen_split_1676 (insn, operands);

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
              return gen_split_1703 (insn, operands);

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
              return gen_split_1730 (insn, operands);

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
              return gen_split_1757 (insn, operands);

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
              return gen_split_1784 (insn, operands);

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
              return gen_split_1811 (insn, operands);

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
              return gen_split_1838 (insn, operands);

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
              return gen_split_1865 (insn, operands);

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
              return gen_split_1892 (insn, operands);

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
              return gen_split_1919 (insn, operands);

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
              return gen_split_1946 (insn, operands);

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
              return gen_split_1652 (insn, operands);

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
              return gen_split_1679 (insn, operands);

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
              return gen_split_1706 (insn, operands);

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
              return gen_split_1733 (insn, operands);

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
              return gen_split_1760 (insn, operands);

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
              return gen_split_1787 (insn, operands);

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
              return gen_split_1814 (insn, operands);

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
              return gen_split_1841 (insn, operands);

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
              return gen_split_1868 (insn, operands);

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
              return gen_split_1895 (insn, operands);

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
              return gen_split_1922 (insn, operands);

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
              return gen_split_1949 (insn, operands);

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
              return gen_split_1655 (insn, operands);

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
              return gen_split_1682 (insn, operands);

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
              return gen_split_1709 (insn, operands);

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
              return gen_split_1736 (insn, operands);

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
              return gen_split_1763 (insn, operands);

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
              return gen_split_1790 (insn, operands);

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
              return gen_split_1817 (insn, operands);

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
              return gen_split_1844 (insn, operands);

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
              return gen_split_1871 (insn, operands);

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
              return gen_split_1898 (insn, operands);

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
              return gen_split_1925 (insn, operands);

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
              return gen_split_1952 (insn, operands);

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
              return gen_split_2945 (insn, operands);

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
              return gen_split_2954 (insn, operands);

            case 38:
              if (!(
#line 13946 "../../gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 13950 "../../gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_2963 (insn, operands);

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
              return gen_split_2972 (insn, operands);

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
              return gen_split_2981 (insn, operands);

            case 41:
              if (!(
#line 13946 "../../gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 13950 "../../gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_2990 (insn, operands);

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
              return gen_split_2999 (insn, operands);

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
              return gen_split_3008 (insn, operands);

            case 44:
              if (!(
#line 13946 "../../gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 13950 "../../gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_3017 (insn, operands);

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
              return gen_split_3026 (insn, operands);

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
              return gen_split_3035 (insn, operands);

            case 47:
              if (!(
#line 13946 "../../gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 13950 "../../gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_3044 (insn, operands);

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
              return gen_split_2297 (insn, operands);

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
              return gen_split_2324 (insn, operands);

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
              return gen_split_2351 (insn, operands);

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
              return gen_split_2378 (insn, operands);

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
              return gen_split_2405 (insn, operands);

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
              return gen_split_2432 (insn, operands);

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
              return gen_split_2459 (insn, operands);

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
              return gen_split_2486 (insn, operands);

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
              return gen_split_2513 (insn, operands);

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
              return gen_split_2540 (insn, operands);

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
              return gen_split_2567 (insn, operands);

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
              return gen_split_2594 (insn, operands);

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
              return gen_split_2300 (insn, operands);

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
              return gen_split_2327 (insn, operands);

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
              return gen_split_2354 (insn, operands);

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
              return gen_split_2381 (insn, operands);

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
              return gen_split_2408 (insn, operands);

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
              return gen_split_2435 (insn, operands);

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
              return gen_split_2462 (insn, operands);

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
              return gen_split_2489 (insn, operands);

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
              return gen_split_2516 (insn, operands);

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
              return gen_split_2543 (insn, operands);

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
              return gen_split_2570 (insn, operands);

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
              return gen_split_2597 (insn, operands);

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
              return gen_split_2303 (insn, operands);

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
              return gen_split_2330 (insn, operands);

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
              return gen_split_2357 (insn, operands);

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
              return gen_split_2384 (insn, operands);

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
              return gen_split_2411 (insn, operands);

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
              return gen_split_2438 (insn, operands);

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
              return gen_split_2465 (insn, operands);

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
              return gen_split_2492 (insn, operands);

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
              return gen_split_2519 (insn, operands);

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
              return gen_split_2546 (insn, operands);

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
              return gen_split_2573 (insn, operands);

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
              return gen_split_2600 (insn, operands);

            default:
              return NULL;
            }

        default:
          return NULL;
        }

    case IOR:
      return split_65 (x1, insn);

    case XOR:
      return split_64 (x1, insn);

    case GT:
      switch (pattern337 (x2))
        {
        case 0:
          if (!((
#line 17325 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_2 && ix86_pre_reload_split ()) && 
#line 705 "../../gcc/config/i386/sse.md"
(TARGET_AVX2)) && 
#line 17327 "../../gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_3225 (insn, operands);

        case 1:
          if (!(
#line 17325 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_2 && ix86_pre_reload_split ()) && 
#line 17327 "../../gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_3226 (insn, operands);

        default:
          return NULL;
        }

    case LT:
      x5 = XEXP (x3, 0);
      operands[1] = x5;
      x6 = XEXP (x3, 1);
      operands[2] = x6;
      x4 = XEXP (x2, 1);
      operands[3] = x4;
      switch (GET_MODE (operands[0]))
        {
        case E_V4DImode:
          if (pattern934 (x2, 
E_V4DImode) != 0)
            return NULL;
          if (((
#line 17342 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_pre_reload_split ()) && 
#line 705 "../../gcc/config/i386/sse.md"
(TARGET_AVX2)) && 
#line 17344 "../../gcc/config/i386/sse.md"
( 1)))
            return gen_split_3227 (insn, operands);
          if (!(
#line 17354 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_pre_reload_split ()) && 
#line 777 "../../gcc/config/i386/sse.md"
(TARGET_AVX2)))
            return NULL;
          return gen_split_3233 (insn, operands);

        case E_V2DImode:
          if (pattern934 (x2, 
E_V2DImode) != 0)
            return NULL;
          if ((
#line 17342 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_pre_reload_split ()) && 
#line 17344 "../../gcc/config/i386/sse.md"
( 1)))
            return gen_split_3228 (insn, operands);
          if (!
#line 17354 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_pre_reload_split ()))
            return NULL;
          return gen_split_3234 (insn, operands);

        case E_V16HImode:
          if (pattern934 (x2, 
E_V16HImode) != 0
              || !(
#line 17354 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_pre_reload_split ()) && 
#line 775 "../../gcc/config/i386/sse.md"
(TARGET_AVX2)))
            return NULL;
          return gen_split_3229 (insn, operands);

        case E_V8HImode:
          if (pattern934 (x2, 
E_V8HImode) != 0
              || !
#line 17354 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_pre_reload_split ()))
            return NULL;
          return gen_split_3230 (insn, operands);

        case E_V8SImode:
          if (pattern934 (x2, 
E_V8SImode) != 0
              || !(
#line 17354 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_pre_reload_split ()) && 
#line 776 "../../gcc/config/i386/sse.md"
(TARGET_AVX2)))
            return NULL;
          return gen_split_3231 (insn, operands);

        case E_V4SImode:
          if (pattern934 (x2, 
E_V4SImode) != 0
              || !
#line 17354 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_pre_reload_split ()))
            return NULL;
          return gen_split_3232 (insn, operands);

        default:
          return NULL;
        }

    case VEC_DUPLICATE:
      x5 = XEXP (x3, 0);
      if (GET_CODE (x5) != NOT)
        return NULL;
      x7 = XEXP (x5, 0);
      operands[1] = x7;
      x4 = XEXP (x2, 1);
      operands[2] = x4;
      switch (GET_MODE (operands[0]))
        {
        case E_V4SImode:
          if (pattern1063 (x2, 
E_V4SImode, 
E_SImode) != 0)
            return NULL;
          if (register_operand (operands[1], E_SImode)
              && 
#line 18617 "../../gcc/config/i386/sse.md"
(TARGET_SSE))
            return gen_split_3336 (insn, operands);
          if (!nonimmediate_operand (operands[1], E_SImode)
              || !
#line 18633 "../../gcc/config/i386/sse.md"
(TARGET_AVX2))
            return NULL;
          return gen_split_3346 (insn, operands);

        case E_V2DImode:
          if (pattern1063 (x2, 
E_V2DImode, 
E_DImode) != 0)
            return NULL;
          if (register_operand (operands[1], E_DImode)
              && 
#line 18617 "../../gcc/config/i386/sse.md"
(TARGET_SSE))
            return gen_split_3337 (insn, operands);
          if (!nonimmediate_operand (operands[1], E_DImode)
              || !
#line 18633 "../../gcc/config/i386/sse.md"
(TARGET_AVX2))
            return NULL;
          return gen_split_3349 (insn, operands);

        case E_V64QImode:
          if (pattern595 (x2, 
E_V64QImode, 
E_QImode) != 0
              || !(
#line 18633 "../../gcc/config/i386/sse.md"
(TARGET_AVX2) && 
#line 588 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512)))
            return NULL;
          return gen_split_3338 (insn, operands);

        case E_V32QImode:
          if (pattern595 (x2, 
E_V32QImode, 
E_QImode) != 0
              || !
#line 18633 "../../gcc/config/i386/sse.md"
(TARGET_AVX2))
            return NULL;
          return gen_split_3339 (insn, operands);

        case E_V16QImode:
          if (pattern595 (x2, 
E_V16QImode, 
E_QImode) != 0
              || !
#line 18633 "../../gcc/config/i386/sse.md"
(TARGET_AVX2))
            return NULL;
          return gen_split_3340 (insn, operands);

        case E_V32HImode:
          if (pattern595 (x2, 
E_V32HImode, 
E_HImode) != 0
              || !(
#line 18633 "../../gcc/config/i386/sse.md"
(TARGET_AVX2) && 
#line 589 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512)))
            return NULL;
          return gen_split_3341 (insn, operands);

        case E_V16HImode:
          if (pattern595 (x2, 
E_V16HImode, 
E_HImode) != 0
              || !
#line 18633 "../../gcc/config/i386/sse.md"
(TARGET_AVX2))
            return NULL;
          return gen_split_3342 (insn, operands);

        case E_V8HImode:
          if (pattern595 (x2, 
E_V8HImode, 
E_HImode) != 0
              || !
#line 18633 "../../gcc/config/i386/sse.md"
(TARGET_AVX2))
            return NULL;
          return gen_split_3343 (insn, operands);

        case E_V16SImode:
          if (pattern595 (x2, 
E_V16SImode, 
E_SImode) != 0
              || !(
#line 18633 "../../gcc/config/i386/sse.md"
(TARGET_AVX2) && 
#line 590 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return NULL;
          return gen_split_3344 (insn, operands);

        case E_V8SImode:
          if (pattern595 (x2, 
E_V8SImode, 
E_SImode) != 0
              || !
#line 18633 "../../gcc/config/i386/sse.md"
(TARGET_AVX2))
            return NULL;
          return gen_split_3345 (insn, operands);

        case E_V8DImode:
          if (pattern595 (x2, 
E_V8DImode, 
E_DImode) != 0
              || !(
#line 18633 "../../gcc/config/i386/sse.md"
(TARGET_AVX2) && 
#line 591 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return NULL;
          return gen_split_3347 (insn, operands);

        case E_V4DImode:
          if (pattern595 (x2, 
E_V4DImode, 
E_DImode) != 0
              || !
#line 18633 "../../gcc/config/i386/sse.md"
(TARGET_AVX2))
            return NULL;
          return gen_split_3348 (insn, operands);

        default:
          return NULL;
        }

    default:
      return NULL;
    }
}

 rtx_insn *
split_82 (rtx x1 ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4;
  rtx_insn *res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  switch (GET_CODE (x3))
    {
    case NOT:
      x4 = XEXP (x3, 0);
      operands[1] = x4;
      switch (GET_MODE (operands[0]))
        {
        case E_V16SImode:
          if (pattern618 (x2, 
E_V16SImode, 
E_SImode) != 0
              || !(
#line 18449 "../../gcc/config/i386/sse.md"
(64 == 64 || TARGET_AVX512VL
   || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256)) && 
#line 804 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return NULL;
          return gen_split_3330 (insn, operands);

        case E_V8SImode:
          if (pattern618 (x2, 
E_V8SImode, 
E_SImode) != 0
              || !
#line 18449 "../../gcc/config/i386/sse.md"
(32 == 64 || TARGET_AVX512VL
   || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256)))
            return NULL;
          return gen_split_3331 (insn, operands);

        case E_V4SImode:
          if (pattern618 (x2, 
E_V4SImode, 
E_SImode) != 0
              || !
#line 18449 "../../gcc/config/i386/sse.md"
(16 == 64 || TARGET_AVX512VL
   || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256)))
            return NULL;
          return gen_split_3332 (insn, operands);

        case E_V8DImode:
          if (pattern618 (x2, 
E_V8DImode, 
E_DImode) != 0
              || !(
#line 18449 "../../gcc/config/i386/sse.md"
(64 == 64 || TARGET_AVX512VL
   || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256)) && 
#line 805 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return NULL;
          return gen_split_3333 (insn, operands);

        case E_V4DImode:
          if (pattern618 (x2, 
E_V4DImode, 
E_DImode) != 0
              || !
#line 18449 "../../gcc/config/i386/sse.md"
(32 == 64 || TARGET_AVX512VL
   || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256)))
            return NULL;
          return gen_split_3334 (insn, operands);

        case E_V2DImode:
          if (pattern618 (x2, 
E_V2DImode, 
E_DImode) != 0
              || !
#line 18449 "../../gcc/config/i386/sse.md"
(16 == 64 || TARGET_AVX512VL
   || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256)))
            return NULL;
          return gen_split_3335 (insn, operands);

        default:
          return NULL;
        }

    case REG:
    case SUBREG:
      operands[1] = x3;
      switch (GET_MODE (operands[0]))
        {
        case E_V32QImode:
          if (!register_operand (operands[0], E_V32QImode)
              || GET_MODE (x2) != E_V32QImode
              || !register_operand (operands[1], E_QImode)
              || !
#line 27965 "../../gcc/config/i386/sse.md"
(TARGET_AVX2
   /* Disable this splitter if avx512vl_vec_dup_gprv*[qhs]i insn is
      available, because then we can broadcast from GPRs directly.
      For V*[QH]I modes it requires both -mavx512vl and -mavx512bw,
      for V*SI mode it requires just -mavx512vl.  */
   && !(TARGET_AVX512VL
	&& (TARGET_AVX512BW || QImode == SImode))
   && reload_completed && GENERAL_REG_P (operands[1])))
            return NULL;
          return gen_split_3718 (insn, operands);

        case E_V16QImode:
          if (!register_operand (operands[0], E_V16QImode)
              || GET_MODE (x2) != E_V16QImode
              || !register_operand (operands[1], E_QImode)
              || !
#line 27965 "../../gcc/config/i386/sse.md"
(TARGET_AVX2
   /* Disable this splitter if avx512vl_vec_dup_gprv*[qhs]i insn is
      available, because then we can broadcast from GPRs directly.
      For V*[QH]I modes it requires both -mavx512vl and -mavx512bw,
      for V*SI mode it requires just -mavx512vl.  */
   && !(TARGET_AVX512VL
	&& (TARGET_AVX512BW || QImode == SImode))
   && reload_completed && GENERAL_REG_P (operands[1])))
            return NULL;
          return gen_split_3719 (insn, operands);

        case E_V16HImode:
          if (!register_operand (operands[0], E_V16HImode)
              || GET_MODE (x2) != E_V16HImode
              || !register_operand (operands[1], E_HImode)
              || !
#line 27965 "../../gcc/config/i386/sse.md"
(TARGET_AVX2
   /* Disable this splitter if avx512vl_vec_dup_gprv*[qhs]i insn is
      available, because then we can broadcast from GPRs directly.
      For V*[QH]I modes it requires both -mavx512vl and -mavx512bw,
      for V*SI mode it requires just -mavx512vl.  */
   && !(TARGET_AVX512VL
	&& (TARGET_AVX512BW || HImode == SImode))
   && reload_completed && GENERAL_REG_P (operands[1])))
            return NULL;
          return gen_split_3720 (insn, operands);

        case E_V8HImode:
          if (!register_operand (operands[0], E_V8HImode)
              || GET_MODE (x2) != E_V8HImode
              || !register_operand (operands[1], E_HImode)
              || !
#line 27965 "../../gcc/config/i386/sse.md"
(TARGET_AVX2
   /* Disable this splitter if avx512vl_vec_dup_gprv*[qhs]i insn is
      available, because then we can broadcast from GPRs directly.
      For V*[QH]I modes it requires both -mavx512vl and -mavx512bw,
      for V*SI mode it requires just -mavx512vl.  */
   && !(TARGET_AVX512VL
	&& (TARGET_AVX512BW || HImode == SImode))
   && reload_completed && GENERAL_REG_P (operands[1])))
            return NULL;
          return gen_split_3721 (insn, operands);

        case E_V8SImode:
          if (!register_operand (operands[0], E_V8SImode)
              || GET_MODE (x2) != E_V8SImode
              || !register_operand (operands[1], E_SImode))
            return NULL;
          if (
#line 27965 "../../gcc/config/i386/sse.md"
(TARGET_AVX2
   /* Disable this splitter if avx512vl_vec_dup_gprv*[qhs]i insn is
      available, because then we can broadcast from GPRs directly.
      For V*[QH]I modes it requires both -mavx512vl and -mavx512bw,
      for V*SI mode it requires just -mavx512vl.  */
   && !(TARGET_AVX512VL
	&& (TARGET_AVX512BW || SImode == SImode))
   && reload_completed && GENERAL_REG_P (operands[1])))
            return gen_split_3722 (insn, operands);
          if (!
#line 27988 "../../gcc/config/i386/sse.md"
(TARGET_AVX && !TARGET_AVX2 && reload_completed))
            return NULL;
          return gen_split_3728 (insn, operands);

        case E_V4SImode:
          if (!register_operand (operands[0], E_V4SImode)
              || GET_MODE (x2) != E_V4SImode
              || !register_operand (operands[1], E_SImode)
              || !
#line 27965 "../../gcc/config/i386/sse.md"
(TARGET_AVX2
   /* Disable this splitter if avx512vl_vec_dup_gprv*[qhs]i insn is
      available, because then we can broadcast from GPRs directly.
      For V*[QH]I modes it requires both -mavx512vl and -mavx512bw,
      for V*SI mode it requires just -mavx512vl.  */
   && !(TARGET_AVX512VL
	&& (TARGET_AVX512BW || SImode == SImode))
   && reload_completed && GENERAL_REG_P (operands[1])))
            return NULL;
          return gen_split_3723 (insn, operands);

        case E_V16HFmode:
          if (!register_operand (operands[0], E_V16HFmode)
              || GET_MODE (x2) != E_V16HFmode
              || !register_operand (operands[1], E_HFmode)
              || !
#line 27965 "../../gcc/config/i386/sse.md"
(TARGET_AVX2
   /* Disable this splitter if avx512vl_vec_dup_gprv*[qhs]i insn is
      available, because then we can broadcast from GPRs directly.
      For V*[QH]I modes it requires both -mavx512vl and -mavx512bw,
      for V*SI mode it requires just -mavx512vl.  */
   && !(TARGET_AVX512VL
	&& (TARGET_AVX512BW || HFmode == SImode))
   && reload_completed && GENERAL_REG_P (operands[1])))
            return NULL;
          return gen_split_3724 (insn, operands);

        case E_V8HFmode:
          if (!register_operand (operands[0], E_V8HFmode)
              || GET_MODE (x2) != E_V8HFmode
              || !register_operand (operands[1], E_HFmode)
              || !
#line 27965 "../../gcc/config/i386/sse.md"
(TARGET_AVX2
   /* Disable this splitter if avx512vl_vec_dup_gprv*[qhs]i insn is
      available, because then we can broadcast from GPRs directly.
      For V*[QH]I modes it requires both -mavx512vl and -mavx512bw,
      for V*SI mode it requires just -mavx512vl.  */
   && !(TARGET_AVX512VL
	&& (TARGET_AVX512BW || HFmode == SImode))
   && reload_completed && GENERAL_REG_P (operands[1])))
            return NULL;
          return gen_split_3725 (insn, operands);

        case E_V16BFmode:
          if (!register_operand (operands[0], E_V16BFmode)
              || GET_MODE (x2) != E_V16BFmode
              || !register_operand (operands[1], E_BFmode)
              || !
#line 27965 "../../gcc/config/i386/sse.md"
(TARGET_AVX2
   /* Disable this splitter if avx512vl_vec_dup_gprv*[qhs]i insn is
      available, because then we can broadcast from GPRs directly.
      For V*[QH]I modes it requires both -mavx512vl and -mavx512bw,
      for V*SI mode it requires just -mavx512vl.  */
   && !(TARGET_AVX512VL
	&& (TARGET_AVX512BW || BFmode == SImode))
   && reload_completed && GENERAL_REG_P (operands[1])))
            return NULL;
          return gen_split_3726 (insn, operands);

        case E_V8BFmode:
          if (!register_operand (operands[0], E_V8BFmode)
              || GET_MODE (x2) != E_V8BFmode
              || !register_operand (operands[1], E_BFmode)
              || !
#line 27965 "../../gcc/config/i386/sse.md"
(TARGET_AVX2
   /* Disable this splitter if avx512vl_vec_dup_gprv*[qhs]i insn is
      available, because then we can broadcast from GPRs directly.
      For V*[QH]I modes it requires both -mavx512vl and -mavx512bw,
      for V*SI mode it requires just -mavx512vl.  */
   && !(TARGET_AVX512VL
	&& (TARGET_AVX512BW || BFmode == SImode))
   && reload_completed && GENERAL_REG_P (operands[1])))
            return NULL;
          return gen_split_3727 (insn, operands);

        case E_V8SFmode:
          if (!register_operand (operands[0], E_V8SFmode)
              || GET_MODE (x2) != E_V8SFmode
              || !register_operand (operands[1], E_SFmode)
              || !
#line 27988 "../../gcc/config/i386/sse.md"
(TARGET_AVX && !TARGET_AVX2 && reload_completed))
            return NULL;
          return gen_split_3729 (insn, operands);

        case E_V4DImode:
          if (!register_operand (operands[0], E_V4DImode)
              || GET_MODE (x2) != E_V4DImode
              || !register_operand (operands[1], E_DImode)
              || !
#line 27988 "../../gcc/config/i386/sse.md"
(TARGET_AVX && !TARGET_AVX2 && reload_completed))
            return NULL;
          return gen_split_3730 (insn, operands);

        case E_V4DFmode:
          if (!register_operand (operands[0], E_V4DFmode)
              || GET_MODE (x2) != E_V4DFmode
              || !register_operand (operands[1], E_DFmode)
              || !
#line 27988 "../../gcc/config/i386/sse.md"
(TARGET_AVX && !TARGET_AVX2 && reload_completed))
            return NULL;
          return gen_split_3731 (insn, operands);

        default:
          return NULL;
        }

    default:
      return NULL;
    }
}

 rtx_insn *
split_84 (rtx x1 ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12, x13, x14;
  rtx_insn *res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  operands[1] = x2;
  res = split_81 (x1, insn);
  if (res != NULL_RTX)
    return res;
  switch (GET_CODE (x2))
    {
    case UNSPEC:
      return split_79 (x1, insn);

    case VEC_MERGE:
      return split_78 (x1, insn);

    case VEC_SELECT:
      return split_83 (x1, insn);

    case AND:
    case IOR:
    case XOR:
    case NOT:
      return split_80 (x1, insn);

    case PLUS:
      x3 = XEXP (x2, 0);
      if (GET_CODE (x3) != UNSPEC)
        return NULL;
      switch (pattern183 (x2))
        {
        case 0:
          if (!((
#line 7161 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && flag_unsafe_math_optimizations
  && ix86_pre_reload_split ()) && 
#line 555 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)) && 
#line 7164 "../../gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1490 (insn, operands);

        case 1:
          if (!((
#line 7161 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && flag_unsafe_math_optimizations
  && ix86_pre_reload_split ()) && 
#line 555 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 7164 "../../gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1491 (insn, operands);

        case 2:
          if (!((
#line 7161 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && flag_unsafe_math_optimizations
  && ix86_pre_reload_split ()) && 
#line 555 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 7164 "../../gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1492 (insn, operands);

        case 3:
          if (!((
#line 7178 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && flag_unsafe_math_optimizations
  && ix86_pre_reload_split ()) && 
#line 555 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)) && 
#line 7181 "../../gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1493 (insn, operands);

        case 4:
          if (!((
#line 7178 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && flag_unsafe_math_optimizations
  && ix86_pre_reload_split ()) && 
#line 555 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 7181 "../../gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1494 (insn, operands);

        case 5:
          if (!((
#line 7178 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && flag_unsafe_math_optimizations
  && ix86_pre_reload_split ()) && 
#line 555 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 7181 "../../gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1495 (insn, operands);

        case 6:
          if (!((
#line 7196 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && flag_unsafe_math_optimizations
  && ix86_pre_reload_split ()) && 
#line 555 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)) && 
#line 7199 "../../gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1496 (insn, operands);

        case 7:
          if (!((
#line 7196 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && flag_unsafe_math_optimizations
  && ix86_pre_reload_split ()) && 
#line 555 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 7199 "../../gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1498 (insn, operands);

        case 8:
          if (!((
#line 7196 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && flag_unsafe_math_optimizations
  && ix86_pre_reload_split ()) && 
#line 555 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 7199 "../../gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1500 (insn, operands);

        case 9:
          if (!((
#line 7196 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && flag_unsafe_math_optimizations
  && ix86_pre_reload_split ()) && 
#line 555 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)) && 
#line 7199 "../../gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1497 (insn, operands);

        case 10:
          if (!((
#line 7196 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && flag_unsafe_math_optimizations
  && ix86_pre_reload_split ()) && 
#line 555 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 7199 "../../gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1499 (insn, operands);

        case 11:
          if (!((
#line 7196 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && flag_unsafe_math_optimizations
  && ix86_pre_reload_split ()) && 
#line 555 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 7199 "../../gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1501 (insn, operands);

        default:
          return NULL;
        }

    case VEC_CONCAT:
      x3 = XEXP (x2, 0);
      switch (GET_CODE (x3))
        {
        case ZERO_EXTEND:
          switch (pattern178 (x2))
            {
            case 0:
              if (!(
#line 12097 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && ix86_pre_reload_split ()) && 
#line 12099 "../../gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_1539 (insn, operands);

            case 1:
              if (!(
#line 12211 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_pre_reload_split ()) && 
#line 12213 "../../gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_1543 (insn, operands);

            default:
              return NULL;
            }

        case VEC_SELECT:
          if (GET_MODE (x3) != E_DFmode)
            return NULL;
          x4 = XEXP (x3, 1);
          if (GET_CODE (x4) != PARALLEL
              || XVECLEN (x4, 0) != 1)
            return NULL;
          x5 = XVECEXP (x4, 0, 0);
          if (x5 != const_int_rtx[MAX_SAVED_CONST_INT + 0]
              || !memory_operand (operands[0], E_V2DFmode)
              || GET_MODE (x2) != E_V2DFmode)
            return NULL;
          x6 = XEXP (x2, 1);
          operands[1] = x6;
          if (!register_operand (operands[1], E_DFmode))
            return NULL;
          x7 = XEXP (x3, 0);
          if (!rtx_equal_p (x7, operands[0])
              || !
#line 14751 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && reload_completed))
            return NULL;
          return gen_split_3165 (insn, operands);

        case REG:
        case SUBREG:
        case MEM:
          operands[1] = x3;
          res = split_77 (x1, insn);
          if (res != NULL_RTX)
            return res;
          if (GET_CODE (x3) != SUBREG
              || pattern597 (x2) != 0
              || !register_operand (operands[0], E_V4DImode)
              || GET_MODE (x2) != E_V4DImode)
            return NULL;
          x7 = XEXP (x3, 0);
          x8 = XVECEXP (x7, 0, 0);
          operands[1] = x8;
          if (!memory_operand (operands[1], E_V16QImode))
            return NULL;
          x6 = XEXP (x2, 1);
          x9 = XEXP (x6, 0);
          x10 = XVECEXP (x9, 0, 0);
          if (!rtx_equal_p (x10, operands[1])
              || !(
#line 27908 "../../gcc/config/i386/sse.md"
(TARGET_AVX2 && ix86_pre_reload_split ()) && 
#line 27910 "../../gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_3717 (insn, operands);

        case VEC_CONCAT:
          if (pattern408 (x2) != 0)
            return NULL;
          x7 = XEXP (x3, 0);
          operands[1] = x7;
          switch (GET_MODE (operands[0]))
            {
            case E_V16SImode:
              if (pattern1486 (x2, 
E_V8SImode, 
E_V4SImode, 
E_V16SImode) != 0
                  || !((
#line 30138 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && !(MEM_P (operands[0]) && MEM_P (operands[1]))) && 
#line 1445 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)) && 
#line 30140 "../../gcc/config/i386/sse.md"
( reload_completed)))
                return NULL;
              return gen_split_3801 (insn, operands);

            case E_V16SFmode:
              if (pattern1486 (x2, 
E_V8SFmode, 
E_V4SFmode, 
E_V16SFmode) != 0
                  || !((
#line 30138 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && !(MEM_P (operands[0]) && MEM_P (operands[1]))) && 
#line 1445 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)) && 
#line 30140 "../../gcc/config/i386/sse.md"
( reload_completed)))
                return NULL;
              return gen_split_3802 (insn, operands);

            case E_V8DFmode:
              if (pattern1486 (x2, 
E_V4DFmode, 
E_V2DFmode, 
E_V8DFmode) != 0
                  || !((
#line 30138 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && !(MEM_P (operands[0]) && MEM_P (operands[1]))) && 
#line 1445 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)) && 
#line 30140 "../../gcc/config/i386/sse.md"
( reload_completed)))
                return NULL;
              return gen_split_3803 (insn, operands);

            default:
              return NULL;
            }

        default:
          return NULL;
        }

    case EQ:
      x3 = XEXP (x2, 0);
      switch (GET_CODE (x3))
        {
        case US_MINUS:
          x7 = XEXP (x3, 0);
          operands[1] = x7;
          x4 = XEXP (x3, 1);
          operands[2] = x4;
          x6 = XEXP (x2, 1);
          operands[3] = x6;
          switch (GET_MODE (operands[0]))
            {
            case E_V32QImode:
              if (pattern957 (x2, 
E_V32QImode) != 0
                  || !(
#line 16337 "../../gcc/config/i386/sse.md"
(TARGET_SSE2
   && (V32QImode != V8HImode || TARGET_SSE4_1)
   && ix86_binary_operator_ok (US_MINUS, V32QImode, operands)) && 
#line 736 "../../gcc/config/i386/sse.md"
(TARGET_AVX2)))
                return NULL;
              return gen_split_3208 (insn, operands);

            case E_V16QImode:
              if (pattern957 (x2, 
E_V16QImode) != 0
                  || !
#line 16337 "../../gcc/config/i386/sse.md"
(TARGET_SSE2
   && (V16QImode != V8HImode || TARGET_SSE4_1)
   && ix86_binary_operator_ok (US_MINUS, V16QImode, operands)))
                return NULL;
              return gen_split_3209 (insn, operands);

            case E_V16HImode:
              if (pattern957 (x2, 
E_V16HImode) != 0
                  || !(
#line 16337 "../../gcc/config/i386/sse.md"
(TARGET_SSE2
   && (V16HImode != V8HImode || TARGET_SSE4_1)
   && ix86_binary_operator_ok (US_MINUS, V16HImode, operands)) && 
#line 737 "../../gcc/config/i386/sse.md"
(TARGET_AVX2)))
                return NULL;
              return gen_split_3210 (insn, operands);

            case E_V8HImode:
              if (pattern957 (x2, 
E_V8HImode) != 0
                  || !
#line 16337 "../../gcc/config/i386/sse.md"
(TARGET_SSE2
   && (V8HImode != V8HImode || TARGET_SSE4_1)
   && ix86_binary_operator_ok (US_MINUS, V8HImode, operands)))
                return NULL;
              return gen_split_3211 (insn, operands);

            default:
              return NULL;
            }

        case EQ:
          x7 = XEXP (x3, 0);
          if (GET_CODE (x7) != LSHIFTRT)
            return NULL;
          x11 = XEXP (x7, 0);
          operands[1] = x11;
          x12 = XEXP (x7, 1);
          operands[2] = x12;
          if (!const_int_operand (operands[2], E_SImode))
            return NULL;
          x4 = XEXP (x3, 1);
          operands[3] = x4;
          x6 = XEXP (x2, 1);
          operands[4] = x6;
          switch (GET_MODE (operands[0]))
            {
            case E_V16HImode:
              if (pattern1255 (x2, 
E_V16HImode) != 0
                  || !(
#line 17531 "../../gcc/config/i386/sse.md"
(INTVAL (operands[2]) == GET_MODE_PRECISION (HImode) - 1) && 
#line 775 "../../gcc/config/i386/sse.md"
(TARGET_AVX2)))
                return NULL;
              return gen_split_3256 (insn, operands);

            case E_V8HImode:
              if (pattern1255 (x2, 
E_V8HImode) != 0
                  || !
#line 17531 "../../gcc/config/i386/sse.md"
(INTVAL (operands[2]) == GET_MODE_PRECISION (HImode) - 1))
                return NULL;
              return gen_split_3257 (insn, operands);

            case E_V8SImode:
              if (pattern1255 (x2, 
E_V8SImode) != 0
                  || !(
#line 17531 "../../gcc/config/i386/sse.md"
(INTVAL (operands[2]) == GET_MODE_PRECISION (SImode) - 1) && 
#line 776 "../../gcc/config/i386/sse.md"
(TARGET_AVX2)))
                return NULL;
              return gen_split_3258 (insn, operands);

            case E_V4SImode:
              if (pattern1255 (x2, 
E_V4SImode) != 0
                  || !
#line 17531 "../../gcc/config/i386/sse.md"
(INTVAL (operands[2]) == GET_MODE_PRECISION (SImode) - 1))
                return NULL;
              return gen_split_3259 (insn, operands);

            case E_V4DImode:
              if (pattern1255 (x2, 
E_V4DImode) != 0
                  || !(
#line 17531 "../../gcc/config/i386/sse.md"
(INTVAL (operands[2]) == GET_MODE_PRECISION (DImode) - 1) && 
#line 777 "../../gcc/config/i386/sse.md"
(TARGET_AVX2)))
                return NULL;
              return gen_split_3260 (insn, operands);

            case E_V2DImode:
              if (pattern1255 (x2, 
E_V2DImode) != 0
                  || !
#line 17531 "../../gcc/config/i386/sse.md"
(INTVAL (operands[2]) == GET_MODE_PRECISION (DImode) - 1))
                return NULL;
              return gen_split_3261 (insn, operands);

            default:
              return NULL;
            }

        default:
          return NULL;
        }

    case LT:
      x3 = XEXP (x2, 0);
      operands[1] = x3;
      x6 = XEXP (x2, 1);
      operands[2] = x6;
      switch (GET_MODE (operands[0]))
        {
        case E_V16HImode:
          if (pattern231 (x2, 
E_V16HImode) != 0
              || !((
#line 17127 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_pre_reload_split ()) && 
#line 744 "../../gcc/config/i386/sse.md"
(TARGET_AVX2)) && 
#line 17129 "../../gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_3212 (insn, operands);

        case E_V8HImode:
          if (pattern231 (x2, 
E_V8HImode) != 0
              || !(
#line 17127 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_pre_reload_split ()) && 
#line 17129 "../../gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_3213 (insn, operands);

        case E_V8SImode:
          if (pattern231 (x2, 
E_V8SImode) != 0
              || !((
#line 17127 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_pre_reload_split ()) && 
#line 745 "../../gcc/config/i386/sse.md"
(TARGET_AVX2)) && 
#line 17129 "../../gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_3214 (insn, operands);

        case E_V4SImode:
          if (pattern231 (x2, 
E_V4SImode) != 0
              || !(
#line 17127 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_pre_reload_split ()) && 
#line 17129 "../../gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_3215 (insn, operands);

        default:
          return NULL;
        }

    case ASHIFT:
      switch (pattern236 (x2))
        {
        case 0:
          if (!(
#line 17394 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && GET_MODE_UNIT_BITSIZE (V32HImode)
   > INTVAL (XVECEXP (operands[2], 0, 0))) && 
#line 785 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512)))
            return NULL;
          return gen_split_3244 (insn, operands);

        case 1:
          if (!(
#line 17394 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && GET_MODE_UNIT_BITSIZE (V16SImode)
   > INTVAL (XVECEXP (operands[2], 0, 0))) && 
#line 785 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return NULL;
          return gen_split_3247 (insn, operands);

        case 2:
          if (!(
#line 17394 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && GET_MODE_UNIT_BITSIZE (V8DImode)
   > INTVAL (XVECEXP (operands[2], 0, 0))) && 
#line 786 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return NULL;
          return gen_split_3250 (insn, operands);

        case 3:
          if (!(
#line 17453 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && TARGET_64BIT
   && ix86_pre_reload_split ()) && 
#line 17456 "../../gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_3253 (insn, operands);

        default:
          return NULL;
        }

    case LSHIFTRT:
      switch (pattern236 (x2))
        {
        case 0:
          if (!(
#line 17394 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && GET_MODE_UNIT_BITSIZE (V32HImode)
   > INTVAL (XVECEXP (operands[2], 0, 0))) && 
#line 785 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512)))
            return NULL;
          return gen_split_3245 (insn, operands);

        case 1:
          if (!(
#line 17394 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && GET_MODE_UNIT_BITSIZE (V16SImode)
   > INTVAL (XVECEXP (operands[2], 0, 0))) && 
#line 785 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return NULL;
          return gen_split_3248 (insn, operands);

        case 2:
          if (!(
#line 17394 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && GET_MODE_UNIT_BITSIZE (V8DImode)
   > INTVAL (XVECEXP (operands[2], 0, 0))) && 
#line 786 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return NULL;
          return gen_split_3251 (insn, operands);

        case 3:
          if (!(
#line 17482 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && TARGET_64BIT
   && ix86_pre_reload_split ()) && 
#line 17485 "../../gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_3254 (insn, operands);

        default:
          return NULL;
        }

    case ASHIFTRT:
      x3 = XEXP (x2, 0);
      operands[1] = x3;
      x6 = XEXP (x2, 1);
      operands[2] = x6;
      switch (GET_CODE (operands[2]))
        {
        case CONST_VECTOR:
          switch (GET_MODE (operands[0]))
            {
            case E_V32HImode:
              if (pattern235 (x2, 
E_V32HImode) == 0
                  && (
#line 17394 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && GET_MODE_UNIT_BITSIZE (V32HImode)
   > INTVAL (XVECEXP (operands[2], 0, 0))) && 
#line 785 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512)))
                return gen_split_3246 (insn, operands);
              break;

            case E_V16SImode:
              if (pattern235 (x2, 
E_V16SImode) == 0
                  && (
#line 17394 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && GET_MODE_UNIT_BITSIZE (V16SImode)
   > INTVAL (XVECEXP (operands[2], 0, 0))) && 
#line 785 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                return gen_split_3249 (insn, operands);
              break;

            case E_V8DImode:
              if (pattern235 (x2, 
E_V8DImode) == 0
                  && (
#line 17394 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && GET_MODE_UNIT_BITSIZE (V8DImode)
   > INTVAL (XVECEXP (operands[2], 0, 0))) && 
#line 786 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                return gen_split_3252 (insn, operands);
              break;

            default:
              break;
            }
          break;

        case CONST_INT:
          if (const_0_to_255_operand (operands[2], E_SImode)
              && register_operand (operands[0], E_V1TImode)
              && GET_MODE (x2) == E_V1TImode
              && register_operand (operands[1], E_V1TImode)
              && (
#line 17512 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && TARGET_64BIT
   && ix86_pre_reload_split ()) && 
#line 17515 "../../gcc/config/i386/sse.md"
( 1)))
            return gen_split_3255 (insn, operands);
          break;

        default:
          break;
        }
      if (!nonmemory_operand (operands[2], E_DImode)
          || !register_operand (operands[0], E_V2DImode)
          || GET_MODE (x2) != E_V2DImode
          || !register_operand (operands[1], E_V2DImode)
          || !(
#line 26979 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && !TARGET_AVX512VL && ix86_pre_reload_split ()) && 
#line 26981 "../../gcc/config/i386/sse.md"
( 1)))
        return NULL;
      return gen_split_3714 (insn, operands);

    case ROTATE:
      if (pattern237 (x2) != 0
          || !(
#line 17553 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && TARGET_64BIT
   && ix86_pre_reload_split ()) && 
#line 17556 "../../gcc/config/i386/sse.md"
( 1)))
        return NULL;
      return gen_split_3262 (insn, operands);

    case ROTATERT:
      if (pattern237 (x2) != 0
          || !(
#line 17582 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && TARGET_64BIT
   && ix86_pre_reload_split ()) && 
#line 17585 "../../gcc/config/i386/sse.md"
( 1)))
        return NULL;
      return gen_split_3263 (insn, operands);

    case VEC_DUPLICATE:
      return split_82 (x1, insn);

    case SIGN_EXTEND:
      x3 = XEXP (x2, 0);
      if (pattern238 (x3) != 0)
        return NULL;
      switch (pattern681 (x2))
        {
        case 0:
          if ((
#line 24265 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1 && 1 && 1
   && ix86_pre_reload_split ()) && 
#line 24268 "../../gcc/config/i386/sse.md"
( 1)))
            return gen_split_3507 (insn, operands);
          if (!(
#line 24265 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1 && TARGET_AVX512BW && TARGET_AVX512VL
   && ix86_pre_reload_split ()) && 
#line 24268 "../../gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_3508 (insn, operands);

        case 1:
          if ((
#line 24417 "../../gcc/config/i386/sse.md"
(TARGET_AVX2 && 1
   && ix86_pre_reload_split ()) && 
#line 24420 "../../gcc/config/i386/sse.md"
( 1)))
            return gen_split_3515 (insn, operands);
          if (!(
#line 24417 "../../gcc/config/i386/sse.md"
(TARGET_AVX2 && TARGET_AVX512VL
   && ix86_pre_reload_split ()) && 
#line 24420 "../../gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_3516 (insn, operands);

        case 2:
          if (!(
#line 24781 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512 && ix86_pre_reload_split ()) && 
#line 24783 "../../gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_3539 (insn, operands);

        case 3:
          if ((
#line 24651 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1 && 1
   && ix86_pre_reload_split ()) && 
#line 24654 "../../gcc/config/i386/sse.md"
( 1)))
            return gen_split_3531 (insn, operands);
          if (!(
#line 24651 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1 && TARGET_AVX512VL
   && ix86_pre_reload_split ()) && 
#line 24654 "../../gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_3532 (insn, operands);

        case 4:
          if ((
#line 24981 "../../gcc/config/i386/sse.md"
(TARGET_AVX2 && 1
   && ix86_pre_reload_split ()) && 
#line 24984 "../../gcc/config/i386/sse.md"
( 1)))
            return gen_split_3550 (insn, operands);
          if (!(
#line 24981 "../../gcc/config/i386/sse.md"
(TARGET_AVX2 && TARGET_AVX512VL
   && ix86_pre_reload_split ()) && 
#line 24984 "../../gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_3551 (insn, operands);

        case 5:
          if ((
#line 25206 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1 && 1
   && ix86_pre_reload_split ()) && 
#line 25209 "../../gcc/config/i386/sse.md"
( 1)))
            return gen_split_3562 (insn, operands);
          if (!(
#line 25206 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1 && TARGET_AVX512VL
   && ix86_pre_reload_split ()) && 
#line 25209 "../../gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_3563 (insn, operands);

        case 6:
          if ((
#line 24482 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1 && 1
   && ix86_pre_reload_split ()) && 
#line 24485 "../../gcc/config/i386/sse.md"
( 1)))
            return gen_split_3519 (insn, operands);
          if (!(
#line 24482 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1 && TARGET_AVX512VL
   && ix86_pre_reload_split ()) && 
#line 24485 "../../gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_3520 (insn, operands);

        case 7:
          if ((
#line 24842 "../../gcc/config/i386/sse.md"
(TARGET_AVX2 && 1
   && ix86_pre_reload_split ()) && 
#line 24845 "../../gcc/config/i386/sse.md"
( 1)))
            return gen_split_3543 (insn, operands);
          if (!(
#line 24842 "../../gcc/config/i386/sse.md"
(TARGET_AVX2 && TARGET_AVX512VL
   && ix86_pre_reload_split ()) && 
#line 24845 "../../gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_3544 (insn, operands);

        case 8:
          if ((
#line 25044 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1 && 1
   && ix86_pre_reload_split ()) && 
#line 25047 "../../gcc/config/i386/sse.md"
( 1)))
            return gen_split_3554 (insn, operands);
          if (!(
#line 25044 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1 && TARGET_AVX512VL
   && ix86_pre_reload_split ()) && 
#line 25047 "../../gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_3555 (insn, operands);

        default:
          return NULL;
        }

    case ZERO_EXTEND:
      x3 = XEXP (x2, 0);
      if (pattern238 (x3) != 0)
        return NULL;
      x7 = XEXP (x3, 0);
      x11 = XEXP (x7, 0);
      switch (GET_CODE (x11))
        {
        case VEC_CONCAT:
          switch (pattern679 (x2))
            {
            case 0:
              if ((
#line 24265 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1 && 1 && 1
   && ix86_pre_reload_split ()) && 
#line 24268 "../../gcc/config/i386/sse.md"
( 1)))
                return gen_split_3509 (insn, operands);
              if (!(
#line 24265 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1 && TARGET_AVX512BW && TARGET_AVX512VL
   && ix86_pre_reload_split ()) && 
#line 24268 "../../gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_3510 (insn, operands);

            case 1:
              if ((
#line 24417 "../../gcc/config/i386/sse.md"
(TARGET_AVX2 && 1
   && ix86_pre_reload_split ()) && 
#line 24420 "../../gcc/config/i386/sse.md"
( 1)))
                return gen_split_3517 (insn, operands);
              if (!(
#line 24417 "../../gcc/config/i386/sse.md"
(TARGET_AVX2 && TARGET_AVX512VL
   && ix86_pre_reload_split ()) && 
#line 24420 "../../gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_3518 (insn, operands);

            case 2:
              if (!(
#line 24781 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512 && ix86_pre_reload_split ()) && 
#line 24783 "../../gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_3541 (insn, operands);

            case 3:
              if ((
#line 24651 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1 && 1
   && ix86_pre_reload_split ()) && 
#line 24654 "../../gcc/config/i386/sse.md"
( 1)))
                return gen_split_3533 (insn, operands);
              if (!(
#line 24651 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1 && TARGET_AVX512VL
   && ix86_pre_reload_split ()) && 
#line 24654 "../../gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_3534 (insn, operands);

            case 4:
              if ((
#line 24981 "../../gcc/config/i386/sse.md"
(TARGET_AVX2 && 1
   && ix86_pre_reload_split ()) && 
#line 24984 "../../gcc/config/i386/sse.md"
( 1)))
                return gen_split_3552 (insn, operands);
              if (!(
#line 24981 "../../gcc/config/i386/sse.md"
(TARGET_AVX2 && TARGET_AVX512VL
   && ix86_pre_reload_split ()) && 
#line 24984 "../../gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_3553 (insn, operands);

            case 5:
              if ((
#line 25206 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1 && 1
   && ix86_pre_reload_split ()) && 
#line 25209 "../../gcc/config/i386/sse.md"
( 1)))
                return gen_split_3564 (insn, operands);
              if (!(
#line 25206 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1 && TARGET_AVX512VL
   && ix86_pre_reload_split ()) && 
#line 25209 "../../gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_3565 (insn, operands);

            default:
              return NULL;
            }

        case VEC_MERGE:
          x13 = XEXP (x11, 0);
          if (GET_CODE (x13) != VEC_DUPLICATE)
            return NULL;
          if (GET_MODE (x13) == E_V4SImode)
            {
              switch (pattern1033 (x2))
                {
                case 0:
                  if ((
#line 24482 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1 && 1
   && ix86_pre_reload_split ()) && 
#line 24485 "../../gcc/config/i386/sse.md"
( 1)))
                    return gen_split_3521 (insn, operands);
                  if ((
#line 24482 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1 && TARGET_AVX512VL
   && ix86_pre_reload_split ()) && 
#line 24485 "../../gcc/config/i386/sse.md"
( 1)))
                    return gen_split_3522 (insn, operands);
                  break;

                case 1:
                  if ((
#line 24842 "../../gcc/config/i386/sse.md"
(TARGET_AVX2 && 1
   && ix86_pre_reload_split ()) && 
#line 24845 "../../gcc/config/i386/sse.md"
( 1)))
                    return gen_split_3545 (insn, operands);
                  if ((
#line 24842 "../../gcc/config/i386/sse.md"
(TARGET_AVX2 && TARGET_AVX512VL
   && ix86_pre_reload_split ()) && 
#line 24845 "../../gcc/config/i386/sse.md"
( 1)))
                    return gen_split_3546 (insn, operands);
                  break;

                case 2:
                  if ((
#line 25044 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1 && 1
   && ix86_pre_reload_split ()) && 
#line 25047 "../../gcc/config/i386/sse.md"
( 1)))
                    return gen_split_3556 (insn, operands);
                  if ((
#line 25044 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1 && TARGET_AVX512VL
   && ix86_pre_reload_split ()) && 
#line 25047 "../../gcc/config/i386/sse.md"
( 1)))
                    return gen_split_3557 (insn, operands);
                  break;

                default:
                  break;
                }
            }
          x14 = XEXP (x11, 2);
          if (x14 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
            return NULL;
          switch (pattern1034 (x2))
            {
            case 0:
              if (!(
#line 24918 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1 && ix86_pre_reload_split ()) && 
#line 24920 "../../gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_3547 (insn, operands);

            case 1:
              if (!(
#line 24918 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1 && ix86_pre_reload_split ()) && 
#line 24920 "../../gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_3548 (insn, operands);

            case 2:
              if (!(
#line 24918 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1 && ix86_pre_reload_split ()) && 
#line 24920 "../../gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_3549 (insn, operands);

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
peephole2_9 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pmatch_len_ ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12;
  rtx_insn *res ATTRIBUTE_UNUSED;
  if (peep2_current_count < 2)
    return NULL;
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) != E_DFmode)
    return NULL;
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) != PARALLEL
      || XVECLEN (x3, 0) != 1)
    return NULL;
  x4 = XVECEXP (x3, 0, 0);
  if (x4 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
    return NULL;
  x5 = XEXP (x1, 0);
  operands[0] = x5;
  if (!memory_operand (operands[0], E_DFmode))
    return NULL;
  x6 = XEXP (x2, 0);
  operands[1] = x6;
  if (!sse_reg_operand (operands[1], E_V2DFmode))
    return NULL;
  x7 = PATTERN (peep2_next_insn (1));
  if (GET_CODE (x7) != SET)
    return NULL;
  x8 = XEXP (x7, 1);
  if (GET_CODE (x8) != VEC_SELECT
      || GET_MODE (x8) != E_DFmode)
    return NULL;
  x9 = XEXP (x8, 1);
  if (GET_CODE (x9) != PARALLEL
      || XVECLEN (x9, 0) != 1)
    return NULL;
  x10 = XVECEXP (x9, 0, 0);
  if (x10 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
    return NULL;
  x11 = XEXP (x7, 0);
  operands[2] = x11;
  if (!memory_operand (operands[2], E_DFmode))
    return NULL;
  x12 = XEXP (x8, 0);
  operands[3] = x12;
  if (!sse_reg_operand (operands[3], E_V2DFmode)
      || !
#line 1977 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && TARGET_SSE_UNALIGNED_STORE_OPTIMAL
   && ix86_operands_ok_for_move_multiple (operands, false, DFmode)))
    return NULL;
  *pmatch_len_ = 1;
  return gen_peephole2_402 (insn, operands);
}

 rtx_insn *
peephole2_10 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pmatch_len_ ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12, x13, x14, x15, x16, x17;
  rtx x18, x19, x20, x21, x22, x23, x24, x25;
  rtx x26, x27, x28, x29;
  rtx_insn *res ATTRIBUTE_UNUSED;
  if (address_no_seg_operand (operands[1], E_SImode)
      && 
#line 6392 "../../gcc/config/i386/i386.md"
(ix86_hardreg_mov_ok (operands[0], operands[1])
   && peep2_regno_dead_p (0, FLAGS_REG)
   && ix86_avoid_lea_for_addr (peep2_next_insn (0), operands)))
    {
      *pmatch_len_ = 0;
      res = gen_peephole2_60 (insn, operands);
      if (res != NULL_RTX)
        return res;
    }
  if (peep2_current_count < 2
      || !memory_operand (operands[1], E_SImode))
    return NULL;
  x2 = PATTERN (peep2_next_insn (1));
  switch (GET_CODE (x2))
    {
    case CALL:
      x3 = XEXP (x2, 0);
      if (GET_CODE (x3) != MEM
          || GET_MODE (x3) != E_QImode)
        return NULL;
      x4 = XEXP (x2, 1);
      operands[3] = x4;
      x5 = XEXP (x3, 0);
      if (!rtx_equal_p (x5, operands[0])
          || !(
#line 20182 "../../gcc/config/i386/i386.md"
(!TARGET_X32
   && !TARGET_INDIRECT_BRANCH_REGISTER
   && SIBLING_CALL_P (peep2_next_insn (1))
   && !reg_mentioned_p (operands[0],
			CALL_INSN_FUNCTION_USAGE (peep2_next_insn (1)))) && 
#line 1403 "../../gcc/config/i386/i386.md"
(word_mode == SImode)))
        return NULL;
      *pmatch_len_ = 1;
      return gen_peephole2_176 (insn, operands);

    case UNSPEC_VOLATILE:
      if (pattern840 (x2) != 0)
        return NULL;
      x6 = PATTERN (peep2_next_insn (2));
      switch (GET_CODE (x6))
        {
        case CALL:
          x7 = XEXP (x6, 0);
          if (GET_CODE (x7) != MEM
              || GET_MODE (x7) != E_QImode)
            return NULL;
          x8 = XEXP (x6, 1);
          operands[3] = x8;
          x9 = XEXP (x7, 0);
          if (!rtx_equal_p (x9, operands[0])
              || !(
#line 20197 "../../gcc/config/i386/i386.md"
(!TARGET_X32
   && !TARGET_INDIRECT_BRANCH_REGISTER
   && SIBLING_CALL_P (peep2_next_insn (2))
   && !reg_mentioned_p (operands[0],
			CALL_INSN_FUNCTION_USAGE (peep2_next_insn (2)))) && 
#line 1403 "../../gcc/config/i386/i386.md"
(word_mode == SImode)))
            return NULL;
          *pmatch_len_ = 2;
          return gen_peephole2_178 (insn, operands);

        case PARALLEL:
          if (XVECLEN (x6, 0) != 2)
            return NULL;
          x10 = XVECEXP (x6, 0, 1);
          if (GET_CODE (x10) != SET)
            return NULL;
          x11 = XEXP (x10, 1);
          if (GET_CODE (x11) != PLUS
              || GET_MODE (x11) != E_SImode)
            return NULL;
          x12 = XEXP (x11, 0);
          if (GET_CODE (x12) != REG
              || REGNO (x12) != 7
              || GET_MODE (x12) != E_SImode)
            return NULL;
          x13 = XEXP (x10, 0);
          if (GET_CODE (x13) != REG
              || REGNO (x13) != 7
              || GET_MODE (x13) != E_SImode)
            return NULL;
          x14 = XEXP (x11, 1);
          operands[4] = x14;
          if (!immediate_operand (operands[4], E_SImode))
            return NULL;
          x15 = XVECEXP (x6, 0, 0);
          switch (GET_CODE (x15))
            {
            case CALL:
              x16 = XEXP (x15, 0);
              if (GET_CODE (x16) != MEM
                  || GET_MODE (x16) != E_QImode)
                return NULL;
              x17 = XEXP (x15, 1);
              operands[3] = x17;
              x18 = XEXP (x16, 0);
              if (!rtx_equal_p (x18, operands[0])
                  || !
#line 20278 "../../gcc/config/i386/i386.md"
(!TARGET_64BIT && SIBLING_CALL_P (peep2_next_insn (2))
   && !reg_mentioned_p (operands[0],
			CALL_INSN_FUNCTION_USAGE (peep2_next_insn (2)))))
                return NULL;
              *pmatch_len_ = 2;
              return gen_peephole2_181 (insn, operands);

            case SET:
              x17 = XEXP (x15, 1);
              if (GET_CODE (x17) != CALL)
                return NULL;
              x19 = XEXP (x17, 0);
              if (GET_CODE (x19) != MEM
                  || GET_MODE (x19) != E_QImode)
                return NULL;
              x16 = XEXP (x15, 0);
              operands[2] = x16;
              x20 = XEXP (x17, 1);
              operands[3] = x20;
              x21 = XEXP (x19, 0);
              if (!rtx_equal_p (x21, operands[0])
                  || !
#line 20497 "../../gcc/config/i386/i386.md"
(!TARGET_64BIT && SIBLING_CALL_P (peep2_next_insn (2))
   && !reg_mentioned_p (operands[0],
			CALL_INSN_FUNCTION_USAGE (peep2_next_insn (2)))))
                return NULL;
              *pmatch_len_ = 2;
              return gen_peephole2_189 (insn, operands);

            default:
              return NULL;
            }

        case SET:
          if (pattern1343 (x6) != 0
              || !(
#line 20408 "../../gcc/config/i386/i386.md"
(!TARGET_X32
   && !TARGET_INDIRECT_BRANCH_REGISTER
   && SIBLING_CALL_P (peep2_next_insn (2))
   && !reg_mentioned_p (operands[0],
			CALL_INSN_FUNCTION_USAGE (peep2_next_insn (2)))) && 
#line 1403 "../../gcc/config/i386/i386.md"
(word_mode == SImode)))
            return NULL;
          *pmatch_len_ = 2;
          return gen_peephole2_186 (insn, operands);

        default:
          return NULL;
        }

    case PARALLEL:
      if (XVECLEN (x2, 0) != 2)
        return NULL;
      x22 = XVECEXP (x2, 0, 0);
      if (GET_CODE (x22) != CALL)
        return NULL;
      x23 = XEXP (x22, 0);
      if (GET_CODE (x23) != MEM
          || GET_MODE (x23) != E_QImode)
        return NULL;
      x24 = XVECEXP (x2, 0, 1);
      if (pattern1257 (x24) != 0)
        return NULL;
      x25 = XEXP (x24, 0);
      if (GET_CODE (x25) != REG
          || REGNO (x25) != 7
          || GET_MODE (x25) != E_SImode)
        return NULL;
      x26 = XEXP (x22, 1);
      operands[3] = x26;
      x27 = XEXP (x24, 1);
      x28 = XEXP (x27, 1);
      operands[4] = x28;
      if (!immediate_operand (operands[4], E_SImode))
        return NULL;
      x29 = XEXP (x23, 0);
      if (!rtx_equal_p (x29, operands[0])
          || !
#line 20259 "../../gcc/config/i386/i386.md"
(!TARGET_64BIT && SIBLING_CALL_P (peep2_next_insn (1))
   && !reg_mentioned_p (operands[0],
			CALL_INSN_FUNCTION_USAGE (peep2_next_insn (1)))))
        return NULL;
      *pmatch_len_ = 1;
      return gen_peephole2_180 (insn, operands);

    case SET:
      switch (pattern841 (x2))
        {
        case 0:
          if (!(
#line 20295 "../../gcc/config/i386/i386.md"
(!TARGET_X32
   && !TARGET_INDIRECT_BRANCH_REGISTER
   && peep2_reg_dead_p (2, operands[0])) && 
#line 1403 "../../gcc/config/i386/i386.md"
(word_mode == SImode)))
            return NULL;
          *pmatch_len_ = 1;
          return gen_peephole2_182 (insn, operands);

        case 1:
          if (!(
#line 20391 "../../gcc/config/i386/i386.md"
(!TARGET_X32
   && !TARGET_INDIRECT_BRANCH_REGISTER
   && SIBLING_CALL_P (peep2_next_insn (1))
   && !reg_mentioned_p (operands[0],
			CALL_INSN_FUNCTION_USAGE (peep2_next_insn (1)))) && 
#line 1403 "../../gcc/config/i386/i386.md"
(word_mode == SImode)))
            return NULL;
          *pmatch_len_ = 1;
          return gen_peephole2_184 (insn, operands);

        default:
          return NULL;
        }

    default:
      return NULL;
    }
}

 rtx_insn *
peephole2_13 (rtx x1 ATTRIBUTE_UNUSED,
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
  if (!general_reg_operand (x3, E_SImode))
    return NULL;
  operands[8] = x3;
  switch (pattern961 (x1, 
E_SImode, 
E_DImode))
    {
    case 0:
      if (
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
	  && rtx_equal_p (operands[6], operands[2])))))
        {
          *pmatch_len_ = 3;
          res = gen_peephole2_100 (insn, operands);
          if (res != NULL_RTX)
            return res;
        }
      break;

    case 1:
      if (
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
	  && rtx_equal_p (operands[6], operands[2])))))
        {
          *pmatch_len_ = 5;
          res = gen_peephole2_102 (insn, operands);
          if (res != NULL_RTX)
            return res;
        }
      break;

    default:
      break;
    }
  operands[0] = x3;
  if (pattern964 (x1, 
E_SImode) != 0
      || !
#line 26384 "../../gcc/config/i386/i386.md"
(TARGET_CMOVE
  && REGNO (operands[2]) != REGNO (operands[0])
  && REGNO (operands[2]) != REGNO (operands[1])
  && peep2_reg_dead_p (2, operands[1])
  && peep2_reg_dead_p (4, operands[2])
  && !reg_overlap_mentioned_p (operands[0], operands[3])
  && !reg_mentioned_p (operands[2], operands[6])))
    return NULL;
  *pmatch_len_ = 3;
  return gen_peephole2_207 (insn, operands);
}

 rtx_insn *
peephole2_15 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pmatch_len_ ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx_insn *res ATTRIBUTE_UNUSED;
  if (address_no_seg_operand (operands[1], E_DImode)
      && (
#line 6392 "../../gcc/config/i386/i386.md"
(ix86_hardreg_mov_ok (operands[0], operands[1])
   && peep2_regno_dead_p (0, FLAGS_REG)
   && ix86_avoid_lea_for_addr (peep2_next_insn (0), operands)) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
    {
      *pmatch_len_ = 0;
      res = gen_peephole2_61 (insn, operands);
      if (res != NULL_RTX)
        return res;
    }
  if (peep2_current_count < 2
      || !memory_operand (operands[1], E_DImode))
    return NULL;
  x2 = PATTERN (peep2_next_insn (1));
  switch (GET_CODE (x2))
    {
    case CALL:
      x3 = XEXP (x2, 0);
      if (GET_CODE (x3) != MEM
          || GET_MODE (x3) != E_QImode)
        return NULL;
      x4 = XEXP (x2, 1);
      operands[3] = x4;
      x5 = XEXP (x3, 0);
      if (!rtx_equal_p (x5, operands[0])
          || !(
#line 20182 "../../gcc/config/i386/i386.md"
(!TARGET_X32
   && !TARGET_INDIRECT_BRANCH_REGISTER
   && SIBLING_CALL_P (peep2_next_insn (1))
   && !reg_mentioned_p (operands[0],
			CALL_INSN_FUNCTION_USAGE (peep2_next_insn (1)))) && 
#line 1403 "../../gcc/config/i386/i386.md"
(word_mode == DImode)))
        return NULL;
      *pmatch_len_ = 1;
      return gen_peephole2_177 (insn, operands);

    case UNSPEC_VOLATILE:
      if (pattern840 (x2) != 0)
        return NULL;
      x6 = PATTERN (peep2_next_insn (2));
      switch (GET_CODE (x6))
        {
        case CALL:
          x7 = XEXP (x6, 0);
          if (GET_CODE (x7) != MEM
              || GET_MODE (x7) != E_QImode)
            return NULL;
          x8 = XEXP (x6, 1);
          operands[3] = x8;
          x9 = XEXP (x7, 0);
          if (!rtx_equal_p (x9, operands[0])
              || !(
#line 20197 "../../gcc/config/i386/i386.md"
(!TARGET_X32
   && !TARGET_INDIRECT_BRANCH_REGISTER
   && SIBLING_CALL_P (peep2_next_insn (2))
   && !reg_mentioned_p (operands[0],
			CALL_INSN_FUNCTION_USAGE (peep2_next_insn (2)))) && 
#line 1403 "../../gcc/config/i386/i386.md"
(word_mode == DImode)))
            return NULL;
          *pmatch_len_ = 2;
          return gen_peephole2_179 (insn, operands);

        case SET:
          if (pattern1343 (x6) != 0
              || !(
#line 20408 "../../gcc/config/i386/i386.md"
(!TARGET_X32
   && !TARGET_INDIRECT_BRANCH_REGISTER
   && SIBLING_CALL_P (peep2_next_insn (2))
   && !reg_mentioned_p (operands[0],
			CALL_INSN_FUNCTION_USAGE (peep2_next_insn (2)))) && 
#line 1403 "../../gcc/config/i386/i386.md"
(word_mode == DImode)))
            return NULL;
          *pmatch_len_ = 2;
          return gen_peephole2_187 (insn, operands);

        default:
          return NULL;
        }

    case SET:
      switch (pattern841 (x2))
        {
        case 0:
          if (!(
#line 20295 "../../gcc/config/i386/i386.md"
(!TARGET_X32
   && !TARGET_INDIRECT_BRANCH_REGISTER
   && peep2_reg_dead_p (2, operands[0])) && 
#line 1403 "../../gcc/config/i386/i386.md"
(word_mode == DImode)))
            return NULL;
          *pmatch_len_ = 1;
          return gen_peephole2_183 (insn, operands);

        case 1:
          if (!(
#line 20391 "../../gcc/config/i386/i386.md"
(!TARGET_X32
   && !TARGET_INDIRECT_BRANCH_REGISTER
   && SIBLING_CALL_P (peep2_next_insn (1))
   && !reg_mentioned_p (operands[0],
			CALL_INSN_FUNCTION_USAGE (peep2_next_insn (1)))) && 
#line 1403 "../../gcc/config/i386/i386.md"
(word_mode == DImode)))
            return NULL;
          *pmatch_len_ = 1;
          return gen_peephole2_185 (insn, operands);

        default:
          return NULL;
        }

    default:
      return NULL;
    }
}

 rtx_insn *
peephole2_20 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pmatch_len_ ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12, x13, x14, x15, x16, x17;
  rtx x18, x19, x20, x21, x22, x23;
  rtx_insn *res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  if (!flags_reg_operand (x2, E_VOIDmode))
    return NULL;
  x3 = XEXP (x1, 1);
  operands[0] = x3;
  operands[4] = x2;
  res = peephole2_19 (x1, insn, pmatch_len_);
  if (res != NULL_RTX)
    return res;
  if (peep2_current_count < 4)
    return NULL;
  operands[6] = x2;
  x4 = PATTERN (peep2_next_insn (1));
  if (GET_CODE (x4) != PARALLEL
      || XVECLEN (x4, 0) != 2)
    return NULL;
  x5 = XVECEXP (x4, 0, 0);
  if (GET_CODE (x5) != SET)
    return NULL;
  x6 = XEXP (x5, 0);
  operands[7] = x6;
  if (!flags_reg_operand (operands[7], E_VOIDmode))
    return NULL;
  x7 = XEXP (x5, 1);
  operands[1] = x7;
  x8 = XVECEXP (x4, 0, 1);
  operands[5] = x8;
  x9 = PATTERN (peep2_next_insn (2));
  if (GET_CODE (x9) != SET)
    return NULL;
  x10 = XEXP (x9, 1);
  if (!ix86_comparison_operator (x10, E_QImode))
    return NULL;
  operands[3] = x10;
  x11 = XEXP (x10, 0);
  if (GET_CODE (x11) != REG
      || REGNO (x11) != 17)
    return NULL;
  x12 = XEXP (x10, 1);
  if (x12 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
    return NULL;
  x13 = XEXP (x9, 0);
  operands[2] = x13;
  if (!register_operand (operands[2], E_QImode))
    return NULL;
  x14 = PATTERN (peep2_next_insn (3));
  switch (GET_CODE (x14))
    {
    case SET:
      x15 = XEXP (x14, 1);
      if (GET_CODE (x15) != ZERO_EXTEND)
        return NULL;
      x16 = XEXP (x14, 0);
      operands[4] = x16;
      if (!any_QIreg_operand (operands[4], E_VOIDmode))
        return NULL;
      x17 = XEXP (x15, 0);
      if (!rtx_equal_p (x17, operands[2])
          || !
#line 19970 "../../gcc/config/i386/i386.md"
((peep2_reg_dead_p (4, operands[2])
    || operands_match_p (operands[2], operands[4]))
   && ! reg_overlap_mentioned_p (operands[4], operands[0])
   && ! reg_overlap_mentioned_p (operands[4], operands[1])
   && ! reg_overlap_mentioned_p (operands[4], operands[5])
   && ! reg_set_p (operands[4], operands[5])
   && refers_to_regno_p (FLAGS_REG, operands[1], (rtx *)NULL)
   && peep2_regno_dead_p (0, FLAGS_REG)))
        return NULL;
      *pmatch_len_ = 3;
      return gen_peephole2_171 (insn, operands);

    case PARALLEL:
      if (XVECLEN (x14, 0) != 2)
        return NULL;
      x18 = XVECEXP (x14, 0, 0);
      if (GET_CODE (x18) != SET)
        return NULL;
      x19 = XEXP (x18, 1);
      if (GET_CODE (x19) != ZERO_EXTEND)
        return NULL;
      x20 = XVECEXP (x14, 0, 1);
      if (GET_CODE (x20) != CLOBBER)
        return NULL;
      x21 = XEXP (x20, 0);
      if (GET_CODE (x21) != REG
          || REGNO (x21) != 17
          || GET_MODE (x21) != E_CCmode)
        return NULL;
      x22 = XEXP (x18, 0);
      operands[4] = x22;
      if (!any_QIreg_operand (operands[4], E_VOIDmode))
        return NULL;
      x23 = XEXP (x19, 0);
      if (!rtx_equal_p (x23, operands[2])
          || !
#line 20043 "../../gcc/config/i386/i386.md"
((peep2_reg_dead_p (4, operands[2])
    || operands_match_p (operands[2], operands[4]))
   && ! reg_overlap_mentioned_p (operands[4], operands[0])
   && ! reg_overlap_mentioned_p (operands[4], operands[1])
   && ! reg_overlap_mentioned_p (operands[4], operands[5])
   && ! reg_set_p (operands[4], operands[5])
   && refers_to_regno_p (FLAGS_REG, operands[1], (rtx *)NULL)
   && peep2_regno_dead_p (0, FLAGS_REG)))
        return NULL;
      *pmatch_len_ = 3;
      return gen_peephole2_174 (insn, operands);

    default:
      return NULL;
    }
}

 rtx_insn *
peephole2_24 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pmatch_len_ ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10;
  rtx_insn *res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  operands[1] = x2;
  if (memory_operand (operands[1], E_SImode)
      && register_operand (operands[0], E_SImode))
    {
      res = peephole2_23 (x1, insn, pmatch_len_);
      if (res != NULL_RTX)
        return res;
    }
  if (peep2_current_count < 3
      || peep2_current_count < 4
      || !general_reg_operand (operands[1], E_SImode)
      || !general_reg_operand (operands[0], E_SImode))
    return NULL;
  x3 = PATTERN (peep2_next_insn (1));
  if (GET_CODE (x3) != PARALLEL
      || XVECLEN (x3, 0) != 2)
    return NULL;
  x4 = XVECEXP (x3, 0, 0);
  if (GET_CODE (x4) != SET)
    return NULL;
  x5 = XEXP (x4, 0);
  if (GET_CODE (x5) != REG
      || REGNO (x5) != 17)
    return NULL;
  x6 = XVECEXP (x3, 0, 1);
  if (GET_CODE (x6) != SET)
    return NULL;
  x7 = XEXP (x4, 1);
  operands[5] = x7;
  x8 = XEXP (x6, 1);
  operands[6] = x8;
  x9 = XEXP (x6, 0);
  if (!rtx_equal_p (x9, operands[0]))
    return NULL;
  x10 = PATTERN (peep2_next_insn (2));
  if (GET_CODE (x10) != SET
      || pattern1347 (x10, 
E_SImode) != 0
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
  return gen_peephole2_204 (insn, operands);
}

 rtx_insn *
peephole2_27 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pmatch_len_ ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8;
  rtx_insn *res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) != E_SImode)
    return NULL;
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) != AND
      || pattern112 (x2) != 0)
    return NULL;
  x4 = XEXP (x1, 0);
  operands[0] = x4;
  if (!general_reg_operand (operands[0], E_SImode))
    return NULL;
  x5 = XEXP (x3, 0);
  if (!rtx_equal_p (x5, operands[0]))
    return NULL;
  x6 = XEXP (x2, 1);
  x7 = XEXP (x6, 0);
  x8 = XEXP (x7, 0);
  if (!rtx_equal_p (x8, operands[0])
      || !
#line 22512 "../../gcc/config/i386/i386.md"
(!(TARGET_USE_XCHGB ||
     TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun))
   && peep2_regno_dead_p (0, FLAGS_REG)))
    return NULL;
  *pmatch_len_ = 0;
  return gen_peephole2_191 (insn, operands);
}

 rtx_insn *
peephole2_28 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pmatch_len_ ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12, x13, x14, x15, x16, x17;
  rtx x18, x19, x20, x21;
  rtx_insn *res ATTRIBUTE_UNUSED;
  if (peep2_current_count < 2)
    return NULL;
  x2 = XEXP (x1, 0);
  operands[0] = x2;
  x3 = XEXP (x1, 1);
  x4 = XEXP (x3, 0);
  operands[1] = x4;
  if (!general_reg_operand (operands[1], E_QImode))
    return NULL;
  x5 = PATTERN (peep2_next_insn (1));
  if (GET_CODE (x5) != PARALLEL
      || XVECLEN (x5, 0) != 2)
    return NULL;
  x6 = XVECEXP (x5, 0, 0);
  if (GET_CODE (x6) != SET)
    return NULL;
  x7 = XVECEXP (x5, 0, 1);
  if (GET_CODE (x7) != CLOBBER)
    return NULL;
  switch (GET_MODE (operands[0]))
    {
    case E_HImode:
      if (!register_operand (operands[0], E_HImode)
          || GET_MODE (x3) != E_HImode)
        return NULL;
      x8 = XEXP (x6, 1);
      if (GET_CODE (x8) != UNSPEC
          || XVECLEN (x8, 0) != 1
          || XINT (x8, 1) != 27
          || GET_MODE (x8) != E_CCmode)
        return NULL;
      x9 = XEXP (x6, 0);
      if (GET_CODE (x9) != REG
          || REGNO (x9) != 17
          || GET_MODE (x9) != E_CCmode)
        return NULL;
      x10 = XVECEXP (x8, 0, 0);
      if (!rtx_equal_p (x10, operands[0]))
        return NULL;
      x11 = XEXP (x7, 0);
      if (!rtx_equal_p (x11, operands[0]))
        return NULL;
      *pmatch_len_ = 1;
      return gen_peephole2_193 (insn, operands);

    case E_SImode:
      if (peep2_current_count < 3
          || peep2_current_count < 4
          || !register_operand (operands[0], E_SImode)
          || GET_MODE (x3) != E_SImode)
        return NULL;
      x8 = XEXP (x6, 1);
      if (GET_CODE (x8) != POPCOUNT
          || GET_MODE (x8) != E_SImode)
        return NULL;
      x11 = XEXP (x7, 0);
      if (GET_CODE (x11) != REG
          || REGNO (x11) != 17
          || GET_MODE (x11) != E_CCmode)
        return NULL;
      x9 = XEXP (x6, 0);
      operands[2] = x9;
      if (!register_operand (operands[2], E_SImode))
        return NULL;
      x12 = XEXP (x8, 0);
      if (!rtx_equal_p (x12, operands[0]))
        return NULL;
      x13 = PATTERN (peep2_next_insn (2));
      if (GET_CODE (x13) != SET
          || pattern1750 (x13) != 0)
        return NULL;
      x14 = XEXP (x13, 1);
      x15 = XEXP (x14, 0);
      x16 = XEXP (x15, 0);
      operands[3] = x16;
      if (!register_operand (operands[3], E_QImode))
        return NULL;
      x17 = PATTERN (peep2_next_insn (3));
      if (GET_CODE (x17) != SET)
        return NULL;
      x18 = XEXP (x17, 1);
      if (GET_CODE (x18) != IF_THEN_ELSE)
        return NULL;
      x19 = XEXP (x18, 0);
      if (!bt_comparison_operator (x19, E_VOIDmode))
        return NULL;
      operands[4] = x19;
      if (pattern1864 (x17) != 0)
        return NULL;
      x20 = XEXP (x18, 1);
      x21 = XEXP (x20, 0);
      operands[5] = x21;
      if (!
#line 22692 "../../gcc/config/i386/i386.md"
(REGNO (operands[2]) == REGNO (operands[3])
   && peep2_reg_dead_p (3, operands[0])
   && peep2_reg_dead_p (3, operands[2])
   && peep2_regno_dead_p (4, FLAGS_REG)))
        return NULL;
      *pmatch_len_ = 3;
      return gen_peephole2_194 (insn, operands);

    default:
      return NULL;
    }
}

 rtx_insn *
peephole2_32 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pmatch_len_ ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6;
  rtx_insn *res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  if (REGNO (x2) != 17)
    return NULL;
  x3 = XEXP (x1, 1);
  operands[0] = x3;
  x4 = PATTERN (peep2_next_insn (1));
  if (GET_CODE (x4) != SET)
    return NULL;
  x5 = XEXP (x4, 1);
  if (x5 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
    return NULL;
  x6 = XEXP (x4, 0);
  operands[1] = x6;
  switch (GET_MODE (operands[1]))
    {
    case E_QImode:
      if (!general_reg_operand (operands[1], E_QImode)
          || !
#line 26871 "../../gcc/config/i386/i386.md"
(peep2_regno_dead_p (0, FLAGS_REG)
   && !reg_overlap_mentioned_p (operands[1], operands[0])))
        return NULL;
      *pmatch_len_ = 1;
      return gen_peephole2_213 (insn, operands);

    case E_HImode:
      if (!general_reg_operand (operands[1], E_HImode)
          || !
#line 26871 "../../gcc/config/i386/i386.md"
(peep2_regno_dead_p (0, FLAGS_REG)
   && !reg_overlap_mentioned_p (operands[1], operands[0])))
        return NULL;
      *pmatch_len_ = 1;
      return gen_peephole2_214 (insn, operands);

    case E_SImode:
      if (!general_reg_operand (operands[1], E_SImode)
          || !
#line 26871 "../../gcc/config/i386/i386.md"
(peep2_regno_dead_p (0, FLAGS_REG)
   && !reg_overlap_mentioned_p (operands[1], operands[0])))
        return NULL;
      *pmatch_len_ = 1;
      return gen_peephole2_215 (insn, operands);

    case E_DImode:
      if (!general_reg_operand (operands[1], E_DImode)
          || !(
#line 26871 "../../gcc/config/i386/i386.md"
(peep2_regno_dead_p (0, FLAGS_REG)
   && !reg_overlap_mentioned_p (operands[1], operands[0])) && 
#line 1161 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
        return NULL;
      *pmatch_len_ = 1;
      return gen_peephole2_216 (insn, operands);

    default:
      return NULL;
    }
}

 rtx_insn *
peephole2_35 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pmatch_len_ ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12;
  rtx_insn *res ATTRIBUTE_UNUSED;
  if (peep2_current_count < 3)
    return NULL;
  x2 = XEXP (x1, 0);
  operands[0] = x2;
  if (!register_operand (operands[0], E_QImode))
    return NULL;
  x3 = PATTERN (peep2_next_insn (1));
  if (pattern413 (x3, 
UNSPEC_VOLATILE, 
3) != 0)
    return NULL;
  x4 = XVECEXP (x3, 0, 0);
  x5 = XEXP (x4, 1);
  if (XVECLEN (x5, 0) == 4
      && XINT (x5, 1) == 109
      && GET_MODE (x5) == E_QImode)
    {
      res = peephole2_34 (x1, insn, pmatch_len_);
      if (res != NULL_RTX)
        return res;
    }
  if (XVECLEN (x5, 0) != 2
      || XINT (x5, 1) != 110
      || GET_MODE (x5) != E_QImode)
    return NULL;
  x6 = XEXP (x1, 1);
  operands[2] = x6;
  if (!const_int_operand (operands[2], E_QImode))
    return NULL;
  x7 = XVECEXP (x3, 0, 1);
  if (GET_CODE (x7) != SET)
    return NULL;
  x8 = XEXP (x7, 1);
  if (GET_CODE (x8) != PLUS
      || GET_MODE (x8) != E_QImode
      || pattern1509 (x3) != 0
      || !memory_operand (operands[1], E_QImode)
      || pattern1688 (x3) != 0)
    return NULL;
  x9 = PATTERN (peep2_next_insn (2));
  x10 = XEXP (x9, 1);
  x11 = XEXP (x10, 1);
  operands[3] = x11;
  if (!const_int_operand (operands[3], E_QImode))
    return NULL;
  x12 = XEXP (x10, 0);
  if (!rtx_equal_p (x12, operands[0])
      || !
#line 724 "../../gcc/config/i386/sync.md"
(peep2_reg_dead_p (3, operands[0])
   && (unsigned HOST_WIDE_INT) INTVAL (operands[2])
      == -(unsigned HOST_WIDE_INT) INTVAL (operands[3])
   && !reg_overlap_mentioned_p (operands[0], operands[1])))
    return NULL;
  *pmatch_len_ = 2;
  return gen_peephole2_415 (insn, operands);
}

 rtx_insn *
peephole2_42 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pmatch_len_ ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10;
  rtx_insn *res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 1);
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) != PLUS)
    return NULL;
  x4 = XVECEXP (x1, 0, 0);
  x5 = XEXP (x4, 0);
  if (GET_MODE (x5) != E_CCCmode)
    return NULL;
  x6 = XEXP (x4, 1);
  if (GET_MODE (x6) != E_CCCmode)
    return NULL;
  x7 = XEXP (x6, 1);
  if (!rtx_equal_p (x7, operands[0]))
    return NULL;
  x8 = XEXP (x3, 0);
  if (!rtx_equal_p (x8, operands[0]))
    return NULL;
  x9 = XEXP (x3, 1);
  if (!rtx_equal_p (x9, operands[1]))
    return NULL;
  x10 = XEXP (x6, 0);
  switch (GET_MODE (x10))
    {
    case E_QImode:
      if (!general_reg_operand (operands[0], E_QImode)
          || !memory_operand (operands[1], E_QImode)
          || GET_MODE (x3) != E_QImode
          || !
#line 9968 "../../gcc/config/i386/i386.md"
((TARGET_READ_MODIFY_WRITE || optimize_insn_for_size_p ())
   && peep2_reg_dead_p (2, operands[0])
   && !reg_overlap_mentioned_p (operands[0], operands[1])))
        return NULL;
      *pmatch_len_ = 1;
      return gen_peephole2_104 (insn, operands);

    case E_HImode:
      if (!general_reg_operand (operands[0], E_HImode)
          || !memory_operand (operands[1], E_HImode)
          || GET_MODE (x3) != E_HImode
          || !
#line 9968 "../../gcc/config/i386/i386.md"
((TARGET_READ_MODIFY_WRITE || optimize_insn_for_size_p ())
   && peep2_reg_dead_p (2, operands[0])
   && !reg_overlap_mentioned_p (operands[0], operands[1])))
        return NULL;
      *pmatch_len_ = 1;
      return gen_peephole2_105 (insn, operands);

    case E_SImode:
      if (!general_reg_operand (operands[0], E_SImode)
          || !memory_operand (operands[1], E_SImode)
          || GET_MODE (x3) != E_SImode
          || !
#line 9968 "../../gcc/config/i386/i386.md"
((TARGET_READ_MODIFY_WRITE || optimize_insn_for_size_p ())
   && peep2_reg_dead_p (2, operands[0])
   && !reg_overlap_mentioned_p (operands[0], operands[1])))
        return NULL;
      *pmatch_len_ = 1;
      return gen_peephole2_106 (insn, operands);

    case E_DImode:
      if (!general_reg_operand (operands[0], E_DImode)
          || !memory_operand (operands[1], E_DImode)
          || GET_MODE (x3) != E_DImode
          || !(
#line 9968 "../../gcc/config/i386/i386.md"
((TARGET_READ_MODIFY_WRITE || optimize_insn_for_size_p ())
   && peep2_reg_dead_p (2, operands[0])
   && !reg_overlap_mentioned_p (operands[0], operands[1])) && 
#line 1161 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
        return NULL;
      *pmatch_len_ = 1;
      return gen_peephole2_107 (insn, operands);

    default:
      return NULL;
    }
}

 rtx_insn *
peephole2_44 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pmatch_len_ ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12, x13, x14;
  rtx_insn *res ATTRIBUTE_UNUSED;
  if (peep2_current_count < 2)
    return NULL;
  x2 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x2) != SET)
    return NULL;
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) != UMUL_HIGHPART)
    return NULL;
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
    return NULL;
  x11 = XEXP (x3, 1);
  if (!rtx_equal_p (x11, operands[3]))
    return NULL;
  x12 = PATTERN (peep2_next_insn (1));
  if (GET_CODE (x12) != SET)
    return NULL;
  x13 = XEXP (x12, 0);
  operands[4] = x13;
  x14 = XEXP (x12, 1);
  operands[5] = x14;
  switch (GET_MODE (operands[0]))
    {
    case E_SImode:
      if (pattern1576 (x1, 
E_SImode) != 0
          || !(
#line 10970 "../../gcc/config/i386/i386.md"
(TARGET_BMI2
   && ((REGNO (operands[5]) == REGNO (operands[0])
        && REGNO (operands[1]) != REGNO (operands[4]))
       || (REGNO (operands[5]) == REGNO (operands[1])
	   && REGNO (operands[0]) != REGNO (operands[4])))
   && peep2_reg_dead_p (2, operands[5])) && 
#line 1235 "../../gcc/config/i386/i386.md"
(!TARGET_64BIT)))
        return NULL;
      *pmatch_len_ = 1;
      return gen_peephole2_112 (insn, operands);

    case E_DImode:
      if (pattern1576 (x1, 
E_DImode) != 0
          || !(
#line 10970 "../../gcc/config/i386/i386.md"
(TARGET_BMI2
   && ((REGNO (operands[5]) == REGNO (operands[0])
        && REGNO (operands[1]) != REGNO (operands[4]))
       || (REGNO (operands[5]) == REGNO (operands[1])
	   && REGNO (operands[0]) != REGNO (operands[4])))
   && peep2_reg_dead_p (2, operands[5])) && 
#line 1236 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
        return NULL;
      *pmatch_len_ = 1;
      return gen_peephole2_113 (insn, operands);

    default:
      return NULL;
    }
}

 rtx_insn *
peephole2_47 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pmatch_len_ ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6;
  rtx_insn *res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 0);
  operands[0] = x3;
  switch (GET_MODE (operands[0]))
    {
    case E_QImode:
      if (!arith_or_logical_operator (operands[3], E_QImode))
        return NULL;
      if (register_operand (operands[0], E_QImode))
        {
          x4 = XEXP (x2, 1);
          x5 = XEXP (x4, 1);
          operands[1] = x5;
          if (memory_operand (operands[1], E_QImode))
            {
              x6 = XEXP (x4, 0);
              if (rtx_equal_p (x6, operands[0])
                  && 
#line 27809 "../../gcc/config/i386/i386.md"
(!(TARGET_READ_MODIFY || optimize_insn_for_size_p ())))
                {
                  *pmatch_len_ = 0;
                  res = gen_peephole2_271 (insn, operands);
                  if (res != NULL_RTX)
                    return res;
                }
            }
          x6 = XEXP (x4, 0);
          operands[1] = x6;
          if (memory_operand (operands[1], E_QImode)
              && rtx_equal_p (x5, operands[0])
              && 
#line 27822 "../../gcc/config/i386/i386.md"
(!(TARGET_READ_MODIFY || optimize_insn_for_size_p ())))
            {
              *pmatch_len_ = 0;
              res = gen_peephole2_275 (insn, operands);
              if (res != NULL_RTX)
                return res;
            }
        }
      if (!memory_operand (operands[0], E_QImode))
        return NULL;
      x4 = XEXP (x2, 1);
      x5 = XEXP (x4, 1);
      operands[1] = x5;
      if (nonmemory_operand (operands[1], E_QImode))
        {
          x6 = XEXP (x4, 0);
          if (rtx_equal_p (x6, operands[0])
              && 
#line 27897 "../../gcc/config/i386/i386.md"
(!(TARGET_READ_MODIFY_WRITE || optimize_insn_for_size_p ())))
            {
              *pmatch_len_ = 0;
              res = gen_peephole2_285 (insn, operands);
              if (res != NULL_RTX)
                return res;
            }
        }
      x6 = XEXP (x4, 0);
      operands[1] = x6;
      if (!nonmemory_operand (operands[1], E_QImode)
          || !rtx_equal_p (x5, operands[0])
          || !
#line 27911 "../../gcc/config/i386/i386.md"
(!(TARGET_READ_MODIFY_WRITE || optimize_insn_for_size_p ())))
        return NULL;
      *pmatch_len_ = 0;
      return gen_peephole2_289 (insn, operands);

    case E_HImode:
      if (!arith_or_logical_operator (operands[3], E_HImode))
        return NULL;
      if (register_operand (operands[0], E_HImode))
        {
          x4 = XEXP (x2, 1);
          x5 = XEXP (x4, 1);
          operands[1] = x5;
          if (memory_operand (operands[1], E_HImode))
            {
              x6 = XEXP (x4, 0);
              if (rtx_equal_p (x6, operands[0])
                  && 
#line 27809 "../../gcc/config/i386/i386.md"
(!(TARGET_READ_MODIFY || optimize_insn_for_size_p ())))
                {
                  *pmatch_len_ = 0;
                  res = gen_peephole2_272 (insn, operands);
                  if (res != NULL_RTX)
                    return res;
                }
            }
          x6 = XEXP (x4, 0);
          operands[1] = x6;
          if (memory_operand (operands[1], E_HImode)
              && rtx_equal_p (x5, operands[0])
              && 
#line 27822 "../../gcc/config/i386/i386.md"
(!(TARGET_READ_MODIFY || optimize_insn_for_size_p ())))
            {
              *pmatch_len_ = 0;
              res = gen_peephole2_276 (insn, operands);
              if (res != NULL_RTX)
                return res;
            }
        }
      if (!memory_operand (operands[0], E_HImode))
        return NULL;
      x4 = XEXP (x2, 1);
      x5 = XEXP (x4, 1);
      operands[1] = x5;
      if (nonmemory_operand (operands[1], E_HImode))
        {
          x6 = XEXP (x4, 0);
          if (rtx_equal_p (x6, operands[0])
              && 
#line 27897 "../../gcc/config/i386/i386.md"
(!(TARGET_READ_MODIFY_WRITE || optimize_insn_for_size_p ())))
            {
              *pmatch_len_ = 0;
              res = gen_peephole2_286 (insn, operands);
              if (res != NULL_RTX)
                return res;
            }
        }
      x6 = XEXP (x4, 0);
      operands[1] = x6;
      if (!nonmemory_operand (operands[1], E_HImode)
          || !rtx_equal_p (x5, operands[0])
          || !
#line 27911 "../../gcc/config/i386/i386.md"
(!(TARGET_READ_MODIFY_WRITE || optimize_insn_for_size_p ())))
        return NULL;
      *pmatch_len_ = 0;
      return gen_peephole2_290 (insn, operands);

    case E_SImode:
      if (!arith_or_logical_operator (operands[3], E_SImode))
        return NULL;
      if (register_operand (operands[0], E_SImode))
        {
          x4 = XEXP (x2, 1);
          x5 = XEXP (x4, 1);
          operands[1] = x5;
          if (memory_operand (operands[1], E_SImode))
            {
              x6 = XEXP (x4, 0);
              if (rtx_equal_p (x6, operands[0])
                  && 
#line 27809 "../../gcc/config/i386/i386.md"
(!(TARGET_READ_MODIFY || optimize_insn_for_size_p ())))
                {
                  *pmatch_len_ = 0;
                  res = gen_peephole2_273 (insn, operands);
                  if (res != NULL_RTX)
                    return res;
                }
            }
          x6 = XEXP (x4, 0);
          operands[1] = x6;
          if (memory_operand (operands[1], E_SImode)
              && rtx_equal_p (x5, operands[0])
              && 
#line 27822 "../../gcc/config/i386/i386.md"
(!(TARGET_READ_MODIFY || optimize_insn_for_size_p ())))
            {
              *pmatch_len_ = 0;
              res = gen_peephole2_277 (insn, operands);
              if (res != NULL_RTX)
                return res;
            }
        }
      if (!memory_operand (operands[0], E_SImode))
        return NULL;
      x4 = XEXP (x2, 1);
      x5 = XEXP (x4, 1);
      operands[1] = x5;
      if (x86_64_nonmemory_operand (operands[1], E_SImode))
        {
          x6 = XEXP (x4, 0);
          if (rtx_equal_p (x6, operands[0])
              && 
#line 27897 "../../gcc/config/i386/i386.md"
(!(TARGET_READ_MODIFY_WRITE || optimize_insn_for_size_p ())))
            {
              *pmatch_len_ = 0;
              res = gen_peephole2_287 (insn, operands);
              if (res != NULL_RTX)
                return res;
            }
        }
      x6 = XEXP (x4, 0);
      operands[1] = x6;
      if (!x86_64_nonmemory_operand (operands[1], E_SImode)
          || !rtx_equal_p (x5, operands[0])
          || !
#line 27911 "../../gcc/config/i386/i386.md"
(!(TARGET_READ_MODIFY_WRITE || optimize_insn_for_size_p ())))
        return NULL;
      *pmatch_len_ = 0;
      return gen_peephole2_291 (insn, operands);

    case E_DImode:
      if (!arith_or_logical_operator (operands[3], E_DImode))
        return NULL;
      if (register_operand (operands[0], E_DImode))
        {
          x4 = XEXP (x2, 1);
          x5 = XEXP (x4, 1);
          operands[1] = x5;
          if (memory_operand (operands[1], E_DImode))
            {
              x6 = XEXP (x4, 0);
              if (rtx_equal_p (x6, operands[0])
                  && (
#line 27809 "../../gcc/config/i386/i386.md"
(!(TARGET_READ_MODIFY || optimize_insn_for_size_p ())) && 
#line 1161 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                {
                  *pmatch_len_ = 0;
                  res = gen_peephole2_274 (insn, operands);
                  if (res != NULL_RTX)
                    return res;
                }
            }
          x6 = XEXP (x4, 0);
          operands[1] = x6;
          if (memory_operand (operands[1], E_DImode)
              && rtx_equal_p (x5, operands[0])
              && (
#line 27822 "../../gcc/config/i386/i386.md"
(!(TARGET_READ_MODIFY || optimize_insn_for_size_p ())) && 
#line 1161 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
            {
              *pmatch_len_ = 0;
              res = gen_peephole2_278 (insn, operands);
              if (res != NULL_RTX)
                return res;
            }
        }
      if (!memory_operand (operands[0], E_DImode))
        return NULL;
      x4 = XEXP (x2, 1);
      x5 = XEXP (x4, 1);
      operands[1] = x5;
      if (x86_64_nonmemory_operand (operands[1], E_DImode))
        {
          x6 = XEXP (x4, 0);
          if (rtx_equal_p (x6, operands[0])
              && (
#line 27897 "../../gcc/config/i386/i386.md"
(!(TARGET_READ_MODIFY_WRITE || optimize_insn_for_size_p ())) && 
#line 1161 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
            {
              *pmatch_len_ = 0;
              res = gen_peephole2_288 (insn, operands);
              if (res != NULL_RTX)
                return res;
            }
        }
      x6 = XEXP (x4, 0);
      operands[1] = x6;
      if (!x86_64_nonmemory_operand (operands[1], E_DImode)
          || !rtx_equal_p (x5, operands[0])
          || !(
#line 27911 "../../gcc/config/i386/i386.md"
(!(TARGET_READ_MODIFY_WRITE || optimize_insn_for_size_p ())) && 
#line 1161 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
        return NULL;
      *pmatch_len_ = 0;
      return gen_peephole2_292 (insn, operands);

    default:
      return NULL;
    }
}
