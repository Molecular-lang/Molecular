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
pattern5 (rtx x1, machine_mode i1)
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
pattern13 (rtx x1)
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
    case E_V2QImode:
      if (!memory_operand (operands[0], E_V2QImode)
          || GET_MODE (x3) != E_V2QImode
          || !register_operand (operands[1], E_V2DImode))
        return -1;
      return 0;

    case E_V4QImode:
      res = pattern11 (x3, 
E_V4QImode);
      if (res >= 0)
        return res + 1; /* [1, 2] */
      return -1;

    case E_V8QImode:
      res = pattern12 (x3);
      if (res >= 0)
        return res + 3; /* [3, 5] */
      return -1;

    case E_V4HImode:
      res = pattern11 (x3, 
E_V4HImode);
      if (res >= 0)
        return res + 6; /* [6, 7] */
      return -1;

    case E_V2HImode:
      if (!memory_operand (operands[0], E_V2HImode)
          || GET_MODE (x3) != E_V2HImode
          || !register_operand (operands[1], E_V2DImode))
        return -1;
      return 8;

    case E_V2SImode:
      if (!memory_operand (operands[0], E_V2SImode)
          || GET_MODE (x3) != E_V2SImode
          || !register_operand (operands[1], E_V2DImode))
        return -1;
      return 9;

    default:
      return -1;
    }
}

int
pattern30 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], E_V1TImode)
      || GET_MODE (x1) != E_V1TImode
      || !register_operand (operands[1], E_V1TImode)
      || !const_0_to_255_operand (operands[2], E_SImode))
    return -1;
  return 0;
}

int
pattern35 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  if (GET_CODE (x2) != SET)
    return -1;
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) != COMPARE
      || GET_MODE (x3) != E_CCmode)
    return -1;
  x4 = XEXP (x3, 0);
  if (GET_CODE (x4) != MEM
      || GET_MODE (x4) != E_BLKmode)
    return -1;
  x5 = XEXP (x3, 1);
  if (GET_CODE (x5) != MEM
      || GET_MODE (x5) != E_BLKmode)
    return -1;
  x6 = XEXP (x2, 0);
  if (GET_CODE (x6) != REG
      || REGNO (x6) != 17
      || GET_MODE (x6) != E_CCmode)
    return -1;
  x7 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x7) != USE)
    return -1;
  x8 = XVECEXP (x1, 0, 2);
  if (GET_CODE (x8) != USE)
    return -1;
  x9 = XVECEXP (x1, 0, 3);
  if (GET_CODE (x9) != CLOBBER)
    return -1;
  x10 = XVECEXP (x1, 0, 4);
  if (GET_CODE (x10) != CLOBBER)
    return -1;
  x11 = XVECEXP (x1, 0, 5);
  if (GET_CODE (x11) != CLOBBER)
    return -1;
  x12 = XEXP (x4, 0);
  operands[4] = x12;
  return 0;
}

int
pattern39 (rtx x1)
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
pattern42 (rtx x1, int *pnum_clobbers)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4;
  int res ATTRIBUTE_UNUSED;
  if (pnum_clobbers == NULL)
    return -1;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) != E_TImode)
    return -1;
  x4 = XEXP (x1, 0);
  operands[0] = x4;
  return pattern41 (x2, 
E_DImode, 
E_TImode); /* [-1, 0] */
}

int
pattern48 (rtx x1, int *pnum_clobbers)
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
  switch (GET_MODE (x5))
    {
    case E_QImode:
      if (!nonimmediate_operand (operands[1], E_QImode)
          || !const_1_to_31_operand (operands[2], E_QImode))
        return -1;
      return 0;

    case E_HImode:
      if (!nonimmediate_operand (operands[1], E_HImode)
          || !const_1_to_31_operand (operands[2], E_QImode))
        return -1;
      return 1;

    case E_SImode:
      if (!nonimmediate_operand (operands[1], E_SImode)
          || !const_1_to_31_operand (operands[2], E_QImode))
        return -1;
      return 2;

    case E_DImode:
      if (!nonimmediate_operand (operands[1], E_DImode)
          || !const_1_to_63_operand (operands[2], E_QImode))
        return -1;
      return 3;

    default:
      return -1;
    }
}

int
pattern62 (rtx x1, machine_mode i1)
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
  if (!nonimmediate_operand (operands[2], i1))
    return -1;
  return 0;
}

int
pattern70 (rtx x1, machine_mode i1)
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
pattern74 (rtx x1, int *pnum_clobbers, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (pnum_clobbers == NULL
      || !nonimmediate_operand (operands[0], i1)
      || GET_MODE (x1) != i1
      || !nonimmediate_operand (operands[1], i1)
      || !nonimmediate_or_x86_64_const_vector_operand (operands[2], i1))
    return -1;
  return 0;
}

int
pattern81 (rtx x1, int *pnum_clobbers)
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
      res = pattern71 (x1, pnum_clobbers);
      if (res >= 0)
        return res + 1; /* [1, 2] */
      return -1;

    default:
      return -1;
    }
}

int
pattern88 (rtx x1, int *pnum_clobbers)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7;
  int res ATTRIBUTE_UNUSED;
  if (pnum_clobbers == NULL)
    return -1;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  if (x4 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
    return -1;
  x5 = XEXP (x1, 0);
  operands[0] = x5;
  x6 = XEXP (x3, 0);
  operands[2] = x6;
  if (!int_nonimmediate_operand (operands[2], E_VOIDmode))
    return -1;
  x7 = XEXP (x2, 1);
  operands[1] = x7;
  switch (GET_MODE (operands[0]))
    {
    case E_QImode:
      return pattern87 (x2, 
E_QImode); /* [-1, 0] */

    case E_HImode:
      if (pattern87 (x2, 
E_HImode) != 0)
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern97 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (!memory_operand (operands[0], i1)
      || GET_MODE (x1) != i1)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != i1)
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
pattern105 (rtx x1, int *pnum_clobbers)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4;
  int res ATTRIBUTE_UNUSED;
  if (pnum_clobbers == NULL)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != E_SImode
      || !register_operand (operands[0], E_DImode)
      || GET_MODE (x1) != E_DImode)
    return -1;
  x3 = XEXP (x2, 0);
  operands[1] = x3;
  if (!register_operand (operands[1], E_SImode))
    return -1;
  x4 = XEXP (x2, 1);
  operands[2] = x4;
  if (!nonimmediate_operand (operands[2], E_SImode))
    return -1;
  return 0;
}

int
pattern111 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != E_DImode
      || GET_MODE (x1) != E_DImode)
    return -1;
  x3 = XEXP (x2, 0);
  operands[1] = x3;
  if (!nonimmediate_operand (operands[1], E_SImode))
    return -1;
  x4 = XEXP (x1, 1);
  switch (GET_CODE (x4))
    {
    case CONST_INT:
    case CONST_WIDE_INT:
    case CONST:
    case LABEL_REF:
    case SYMBOL_REF:
      return 0;

    case ASHIFT:
      if (GET_MODE (x4) != E_DImode
          || !nonimmediate_operand (operands[0], E_DImode))
        return -1;
      res = pattern37 (x4, 
E_DImode, 
E_SImode);
      if (res >= 0)
        return res + 1; /* [1, 3] */
      return -1;

    default:
      return -1;
    }
}

int
pattern122 (rtx x1)
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
      return pattern121 (x3, 
E_SImode); /* [-1, 2] */

    case E_DImode:
      res = pattern121 (x3, 
E_DImode);
      if (res >= 0)
        return res + 3; /* [3, 5] */
      return -1;

    default:
      return -1;
    }
}

int
pattern128 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i2)
      || GET_MODE (x1) != i2)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != i2
      || !nonimm_or_0_operand (operands[3], i2)
      || !register_operand (operands[4], i1))
    return -1;
  return 0;
}

int
pattern137 (rtx x1)
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
    case E_V16QImode:
      if (!nonimmediate_operand (operands[0], E_V16QImode)
          || GET_MODE (x1) != E_V16QImode
          || GET_MODE (x2) != E_V16QImode
          || !nonimm_or_0_operand (operands[2], E_V16QImode)
          || !register_operand (operands[3], E_HImode))
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
      if (pattern136 (x1, 
E_V16HImode, 
E_HImode, 
E_V16SImode) != 0)
        return -1;
      return 2;

    case E_V8SImode:
      if (pattern136 (x1, 
E_V8SImode, 
E_QImode, 
E_V8DImode) != 0)
        return -1;
      return 3;

    case E_V8HImode:
      if (!nonimmediate_operand (operands[0], E_V8HImode)
          || GET_MODE (x1) != E_V8HImode
          || GET_MODE (x2) != E_V8HImode
          || !nonimm_or_0_operand (operands[2], E_V8HImode)
          || !register_operand (operands[3], E_QImode))
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
      if (pattern136 (x1, 
E_V32QImode, 
E_SImode, 
E_V32HImode) != 0)
        return -1;
      return 6;

    case E_V4SImode:
      if (pattern136 (x1, 
E_V4SImode, 
E_QImode, 
E_V4DImode) != 0)
        return -1;
      return 7;

    default:
      return -1;
    }
}

int
pattern155 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) != i2)
    return -1;
  x3 = XEXP (x1, 0);
  operands[0] = x3;
  if (!register_operand (operands[0], i2))
    return -1;
  x4 = XVECEXP (x2, 0, 0);
  operands[1] = x4;
  if (!register_operand (operands[1], i2))
    return -1;
  x5 = XVECEXP (x2, 0, 1);
  operands[2] = x5;
  if (!register_operand (operands[2], i1))
    return -1;
  return 0;
}

int
pattern161 (rtx x1)
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
      return pattern160 (x3, 
E_V64QImode, 
E_V32HFmode); /* [-1, 0] */

    case E_V32QImode:
      if (pattern160 (x3, 
E_V32QImode, 
E_V16HFmode) != 0)
        return -1;
      return 1;

    case E_V16QImode:
      if (pattern160 (x3, 
E_V16QImode, 
E_V8HFmode) != 0)
        return -1;
      return 2;

    default:
      return -1;
    }
}

int
pattern172 (rtx x1)
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
    case E_V32HImode:
      return pattern60 (x3, 
E_V32HImode); /* [-1, 0] */

    case E_V16SImode:
      if (pattern60 (x3, 
E_V16SImode) != 0)
        return -1;
      return 1;

    case E_V8DImode:
      if (pattern60 (x3, 
E_V8DImode) != 0)
        return -1;
      return 2;

    case E_V16HImode:
      if (pattern60 (x3, 
E_V16HImode) != 0)
        return -1;
      return 3;

    case E_V8SImode:
      if (pattern60 (x3, 
E_V8SImode) != 0)
        return -1;
      return 4;

    case E_V4DImode:
      if (pattern60 (x3, 
E_V4DImode) != 0)
        return -1;
      return 5;

    case E_V8HImode:
      if (pattern60 (x3, 
E_V8HImode) != 0)
        return -1;
      return 6;

    case E_V4SImode:
      if (pattern60 (x3, 
E_V4SImode) != 0)
        return -1;
      return 7;

    case E_V2DImode:
      if (pattern60 (x3, 
E_V2DImode) != 0)
        return -1;
      return 8;

    default:
      return -1;
    }
}

int
pattern188 (rtx x1, machine_mode i1, machine_mode i2, machine_mode i3)
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
      || !nonimmediate_operand (operands[1], i3))
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
pattern193 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12, x13, x14, x15, x16, x17;
  rtx x18, x19, x20, x21, x22, x23, x24, x25;
  rtx x26, x27;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) != VEC_CONCAT)
    return -1;
  x4 = XEXP (x2, 1);
  if (GET_CODE (x4) != PARALLEL)
    return -1;
  x5 = XEXP (x1, 1);
  if (GET_CODE (x5) != VEC_SELECT)
    return -1;
  x6 = XEXP (x5, 0);
  if (GET_CODE (x6) != VEC_CONCAT)
    return -1;
  x7 = XEXP (x5, 1);
  if (GET_CODE (x7) != PARALLEL)
    return -1;
  x8 = XEXP (x3, 0);
  operands[1] = x8;
  x9 = XEXP (x3, 1);
  operands[2] = x9;
  x10 = XEXP (x6, 0);
  if (!rtx_equal_p (x10, operands[1]))
    return -1;
  x11 = XEXP (x6, 1);
  if (!rtx_equal_p (x11, operands[2]))
    return -1;
  switch (XVECLEN (x4, 0))
    {
    case 16:
      return pattern185 (x1); /* [-1, 0] */

    case 8:
      x12 = XVECEXP (x4, 0, 0);
      if (x12 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
        return -1;
      x13 = XVECEXP (x4, 0, 1);
      if (x13 != const_int_rtx[MAX_SAVED_CONST_INT + 2])
        return -1;
      x14 = XVECEXP (x4, 0, 2);
      if (x14 != const_int_rtx[MAX_SAVED_CONST_INT + 4])
        return -1;
      x15 = XVECEXP (x4, 0, 3);
      if (x15 != const_int_rtx[MAX_SAVED_CONST_INT + 6])
        return -1;
      x16 = XVECEXP (x4, 0, 4);
      if (x16 != const_int_rtx[MAX_SAVED_CONST_INT + 8])
        return -1;
      x17 = XVECEXP (x4, 0, 5);
      if (x17 != const_int_rtx[MAX_SAVED_CONST_INT + 10])
        return -1;
      x18 = XVECEXP (x4, 0, 6);
      if (x18 != const_int_rtx[MAX_SAVED_CONST_INT + 12])
        return -1;
      x19 = XVECEXP (x4, 0, 7);
      if (x19 != const_int_rtx[MAX_SAVED_CONST_INT + 14]
          || XVECLEN (x7, 0) != 8)
        return -1;
      x20 = XVECEXP (x7, 0, 0);
      if (x20 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
        return -1;
      x21 = XVECEXP (x7, 0, 1);
      if (x21 != const_int_rtx[MAX_SAVED_CONST_INT + 3])
        return -1;
      x22 = XVECEXP (x7, 0, 2);
      if (x22 != const_int_rtx[MAX_SAVED_CONST_INT + 5])
        return -1;
      x23 = XVECEXP (x7, 0, 3);
      if (x23 != const_int_rtx[MAX_SAVED_CONST_INT + 7])
        return -1;
      x24 = XVECEXP (x7, 0, 4);
      if (x24 != const_int_rtx[MAX_SAVED_CONST_INT + 9])
        return -1;
      x25 = XVECEXP (x7, 0, 5);
      if (x25 != const_int_rtx[MAX_SAVED_CONST_INT + 11])
        return -1;
      x26 = XVECEXP (x7, 0, 6);
      if (x26 != const_int_rtx[MAX_SAVED_CONST_INT + 13])
        return -1;
      x27 = XVECEXP (x7, 0, 7);
      if (x27 != const_int_rtx[MAX_SAVED_CONST_INT + 15]
          || pattern186 (x1, 
E_V16HImode, 
E_V8HImode) != 0)
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern206 (rtx x1)
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
  if (!nonimmediate_operand (operands[2], E_QImode))
    return -1;
  return pattern202 (x1); /* [-1, 3] */
}

int
pattern210 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 1);
  if (XVECLEN (x2, 0) != 1
      || XINT (x2, 1) != 110)
    return -1;
  x3 = XVECEXP (x2, 0, 0);
  if (x3 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
    return -1;
  x4 = XVECEXP (x1, 0, 0);
  x5 = XEXP (x4, 1);
  return pattern209 (x5, 
E_V2SFmode); /* [-1, 0] */
}

int
pattern216 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x2) != SET)
    return -1;
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) != MOD)
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
  switch (GET_CODE (operands[2]))
    {
    case REG:
    case SUBREG:
      return 0;

    case CONST_INT:
      return 1;

    default:
      return -1;
    }
}

int
pattern224 (rtx x1)
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
      return pattern223 (x5, 
E_SImode); /* [-1, 0] */

    case E_DImode:
      x4 = XVECEXP (x1, 0, 0);
      x5 = XEXP (x4, 1);
      if (pattern223 (x5, 
E_DImode) != 0)
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern237 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  if (GET_MODE (x1) != E_V1TImode
      || !register_operand (operands[0], E_V1TImode))
    return -1;
  x2 = XEXP (x1, 0);
  operands[1] = x2;
  if (!register_operand (operands[1], E_V1TImode))
    return -1;
  x3 = XEXP (x1, 1);
  operands[2] = x3;
  if (!const_0_to_255_operand (operands[2], E_SImode))
    return -1;
  return 0;
}

int
pattern243 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1)
    return -1;
  x2 = XEXP (x1, 0);
  operands[1] = x2;
  if (!register_operand (operands[1], i1))
    return -1;
  x3 = XEXP (x1, 1);
  operands[2] = x3;
  if (!register_operand (operands[2], i1))
    return -1;
  x4 = XEXP (x1, 2);
  operands[3] = x4;
  if (!register_operand (operands[3], i1))
    return -1;
  return 0;
}

int
pattern254 (rtx x1, int *pnum_clobbers)
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
      return 0;

    case STRICT_LOW_PART:
      if (pnum_clobbers == NULL)
        return -1;
      x3 = XEXP (x2, 0);
      operands[0] = x3;
      if (!nonmemory_operand (operands[2], E_QImode))
        return -1;
      x4 = XEXP (x1, 1);
      res = pattern39 (x4);
      if (res >= 0)
        return res + 1; /* [1, 2] */
      return -1;

    default:
      return -1;
    }
}

int
pattern261 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1)
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
pattern271 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12, x13;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  operands[1] = x3;
  x4 = XEXP (x2, 1);
  operands[2] = x4;
  x5 = XEXP (x1, 1);
  switch (XVECLEN (x5, 0))
    {
    case 2:
      x6 = XVECEXP (x5, 0, 0);
      if (GET_CODE (x6) != CONST_INT)
        return -1;
      return 0;

    case 8:
      x6 = XVECEXP (x5, 0, 0);
      if (GET_CODE (x6) != CONST_INT)
        return -1;
      x7 = XVECEXP (x5, 0, 1);
      if (GET_CODE (x7) != CONST_INT)
        return -1;
      x8 = XVECEXP (x5, 0, 2);
      if (GET_CODE (x8) != CONST_INT)
        return -1;
      x9 = XVECEXP (x5, 0, 3);
      if (GET_CODE (x9) != CONST_INT)
        return -1;
      x10 = XVECEXP (x5, 0, 4);
      if (GET_CODE (x10) != CONST_INT)
        return -1;
      x11 = XVECEXP (x5, 0, 5);
      if (GET_CODE (x11) != CONST_INT)
        return -1;
      x12 = XVECEXP (x5, 0, 6);
      if (GET_CODE (x12) != CONST_INT)
        return -1;
      x13 = XVECEXP (x5, 0, 7);
      if (GET_CODE (x13) != CONST_INT
          || !register_operand (operands[0], E_V8QImode)
          || GET_MODE (x1) != E_V8QImode
          || GET_MODE (x2) != E_V16QImode
          || !register_operand (operands[1], E_V8QImode)
          || !register_mmxmem_operand (operands[2], E_V8QImode))
        return -1;
      switch (XWINT (x6, 0))
        {
        case 4L:
          if (XWINT (x7, 0) != 12L
              || XWINT (x8, 0) != 5L
              || XWINT (x9, 0) != 13L
              || XWINT (x10, 0) != 6L
              || XWINT (x11, 0) != 14L
              || XWINT (x12, 0) != 7L
              || XWINT (x13, 0) != 15L)
            return -1;
          return 1;

        case 0L:
          if (XWINT (x7, 0) != 8L
              || XWINT (x8, 0) != 1L
              || XWINT (x9, 0) != 9L
              || XWINT (x10, 0) != 2L
              || XWINT (x11, 0) != 10L
              || XWINT (x12, 0) != 3L
              || XWINT (x13, 0) != 11L)
            return -1;
          return 2;

        default:
          return -1;
        }

    case 4:
      x6 = XVECEXP (x5, 0, 0);
      if (GET_CODE (x6) != CONST_INT)
        return -1;
      x7 = XVECEXP (x5, 0, 1);
      if (GET_CODE (x7) != CONST_INT)
        return -1;
      x8 = XVECEXP (x5, 0, 2);
      if (GET_CODE (x8) != CONST_INT)
        return -1;
      x9 = XVECEXP (x5, 0, 3);
      if (GET_CODE (x9) != CONST_INT)
        return -1;
      switch (XWINT (x6, 0))
        {
        case 2L:
          if (XWINT (x7, 0) != 6L
              || XWINT (x8, 0) != 3L
              || XWINT (x9, 0) != 7L)
            return -1;
          switch (GET_MODE (operands[0]))
            {
            case E_V4QImode:
              if (pattern269 (x1, 
E_V4QImode, 
E_V8QImode) != 0)
                return -1;
              return 3;

            case E_V4HImode:
              if (pattern270 (x1, 
E_V4HImode, 
E_V8HImode) != 0)
                return -1;
              return 4;

            default:
              return -1;
            }

        case 0L:
          if (XWINT (x7, 0) != 4L
              || XWINT (x8, 0) != 1L
              || XWINT (x9, 0) != 5L)
            return -1;
          switch (GET_MODE (operands[0]))
            {
            case E_V4QImode:
              if (pattern269 (x1, 
E_V4QImode, 
E_V8QImode) != 0)
                return -1;
              return 5;

            case E_V4HImode:
              if (pattern270 (x1, 
E_V4HImode, 
E_V8HImode) != 0)
                return -1;
              return 6;

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
pattern321 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  switch (GET_CODE (x2))
    {
    case REG:
    case SUBREG:
    case MEM:
      operands[1] = x2;
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
      if (GET_MODE (x2) != E_V2SFmode)
        return -1;
      x3 = XEXP (x2, 1);
      if (GET_CODE (x3) != PARALLEL
          || XVECLEN (x3, 0) != 2)
        return -1;
      x4 = XVECEXP (x3, 0, 0);
      if (x4 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
        return -1;
      x5 = XVECEXP (x3, 0, 1);
      if (x5 != const_int_rtx[MAX_SAVED_CONST_INT + 1]
          || !register_operand (operands[0], E_V2DImode)
          || GET_MODE (x1) != E_V2DImode)
        return -1;
      x6 = XEXP (x2, 0);
      operands[1] = x6;
      if (!nonimmediate_operand (operands[1], E_V4SFmode))
        return -1;
      return 9;

    default:
      return -1;
    }
}

int
pattern330 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  int res ATTRIBUTE_UNUSED;
  if (GET_MODE (x1) != E_V4SImode)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_CODE (x2) != SIGN_EXTEND
      || GET_MODE (x2) != E_V4SImode)
    return -1;
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) != VEC_SELECT
      || GET_MODE (x3) != E_V4HImode)
    return -1;
  x4 = XEXP (x3, 1);
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
  if (GET_CODE (x9) != SIGN_EXTEND)
    return -1;
  return 0;
}

int
pattern337 (rtx x1)
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
  operands[3] = x5;
  switch (GET_MODE (operands[0]))
    {
    case E_V4DImode:
      return pattern336 (x1, 
E_V4DImode); /* [-1, 0] */

    case E_V2DImode:
      if (pattern336 (x1, 
E_V2DImode) != 0)
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern341 (rtx x1, int *pnum_clobbers, rtx_code i1)
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
  operands[1] = x7;
  if (!register_operand (operands[1], E_DImode)
      || GET_MODE (x3) != E_DImode)
    return -1;
  return 0;
}

int
pattern346 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i2)
      || GET_MODE (x1) != i2)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != i1
      || !nonimmediate_operand (operands[1], i1))
    return -1;
  return 0;
}

int
pattern348 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!nonmemory_operand (operands[2], E_QImode))
    return -1;
  return pattern347 (x1); /* [-1, 5] */
}

int
pattern352 (rtx x1, machine_mode i1, machine_mode i2)
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
  if (GET_MODE (x4) != i1
      || !nonimmediate_operand (operands[2], i2))
    return -1;
  x5 = XEXP (x2, 1);
  if (GET_MODE (x5) != i1
      || !nonimmediate_operand (operands[4], i2)
      || !register_operand (operands[1], i1))
    return -1;
  return 0;
}

int
pattern356 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  x4 = XEXP (x3, 0);
  operands[2] = x4;
  x5 = XEXP (x4, 0);
  if (GET_CODE (x5) != REG
      || REGNO (x5) != 17)
    return -1;
  x6 = XEXP (x4, 1);
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
  x10 = XEXP (x3, 1);
  operands[1] = x10;
  switch (GET_MODE (operands[0]))
    {
    case E_QImode:
      return 0;

    case E_HImode:
      return 1;

    case E_SImode:
      return 2;

    case E_DImode:
      return 3;

    default:
      return -1;
    }
}

int
pattern365 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  x4 = XEXP (x3, 1);
  if (x4 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
    return -1;
  x5 = XEXP (x2, 0);
  if (GET_CODE (x5) != REG
      || REGNO (x5) != 17)
    return -1;
  x6 = XEXP (x3, 0);
  x7 = XEXP (x6, 0);
  operands[1] = x7;
  x8 = XEXP (x6, 1);
  operands[2] = x8;
  x9 = XVECEXP (x1, 0, 1);
  switch (GET_CODE (x9))
    {
    case SET:
      x10 = XEXP (x9, 0);
      operands[0] = x10;
      return 0;

    case CLOBBER:
      x10 = XEXP (x9, 0);
      operands[0] = x10;
      switch (GET_MODE (x6))
        {
        case E_QImode:
          if (!nonimmediate_operand (operands[1], E_QImode)
              || !const_1_to_31_operand (operands[2], E_QImode)
              || !scratch_operand (operands[0], E_QImode))
            return -1;
          return 1;

        case E_HImode:
          if (!nonimmediate_operand (operands[1], E_HImode)
              || !const_1_to_31_operand (operands[2], E_QImode)
              || !scratch_operand (operands[0], E_HImode))
            return -1;
          return 2;

        case E_SImode:
          if (!nonimmediate_operand (operands[1], E_SImode)
              || !const_1_to_31_operand (operands[2], E_QImode)
              || !scratch_operand (operands[0], E_SImode))
            return -1;
          return 3;

        case E_DImode:
          if (!nonimmediate_operand (operands[1], E_DImode)
              || !const_1_to_63_operand (operands[2], E_QImode)
              || !scratch_operand (operands[0], E_DImode))
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
pattern389 (rtx x1, machine_mode i1)
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
  if (GET_MODE (x5) != i1
      || !register_operand (operands[4], i1))
    return -1;
  return 0;
}

int
pattern398 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4;
  int res ATTRIBUTE_UNUSED;
  if (!nonimmediate_operand (operands[0], i2)
      || GET_MODE (x1) != i2)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != i2
      || !nonimmediate_operand (operands[1], i1))
    return -1;
  x3 = XEXP (x1, 1);
  if (GET_MODE (x3) != i2)
    return -1;
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) != i2
      || !nonimmediate_operand (operands[2], i1))
    return -1;
  return 0;
}

int
pattern406 (rtx x1)
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
pattern410 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7;
  int res ATTRIBUTE_UNUSED;
  if (!memory_operand (operands[3], i1))
    return -1;
  operands[0] = x1;
  if (!general_reg_operand (operands[0], i1))
    return -1;
  x2 = PATTERN (peep2_next_insn (1));
  if (GET_CODE (x2) != SET)
    return -1;
  x3 = XEXP (x2, 1);
  if (x3 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
    return -1;
  x4 = XEXP (x2, 0);
  operands[1] = x4;
  if (!memory_operand (operands[1], i1))
    return -1;
  x5 = PATTERN (peep2_next_insn (2));
  if (GET_CODE (x5) != SET)
    return -1;
  x6 = XEXP (x5, 1);
  if (x6 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
    return -1;
  x7 = XEXP (x5, 0);
  operands[2] = x7;
  if (!memory_operand (operands[2], i1))
    return -1;
  return 0;
}

int
pattern418 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i2)
      || GET_MODE (x1) != i2)
    return -1;
  x2 = XVECEXP (x1, 0, 0);
  if (GET_MODE (x2) != i1
      || !vector_operand (operands[1], i1)
      || !vector_operand (operands[2], i1)
      || !const0_operand (operands[3], i1))
    return -1;
  return 0;
}

int
pattern425 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1)
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

    case E_DImode:
      if (!nonimmediate_operand (operands[1], E_DImode))
        return -1;
      return 2;

    default:
      return -1;
    }
}

int
pattern437 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
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
  return 0;
}

int
pattern444 (rtx x1, machine_mode i1)
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
pattern450 (rtx x1, machine_mode i1)
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
  switch (GET_MODE (x3))
    {
    case E_HFmode:
      if (!register_operand (operands[1], E_V8HFmode))
        return -1;
      return 0;

    case E_SFmode:
      if (!register_operand (operands[1], E_V4SFmode))
        return -1;
      return 1;

    case E_DFmode:
      if (!register_operand (operands[1], E_V2DFmode))
        return -1;
      return 2;

    default:
      return -1;
    }
}

int
pattern459 (rtx x1, machine_mode i1, machine_mode i2)
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
      || !nonimm_or_0_operand (operands[3], i2))
    return -1;
  x3 = XEXP (x1, 2);
  if (GET_MODE (x3) != i1
      || !register_operand (operands[4], E_QImode))
    return -1;
  return 0;
}

int
pattern468 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  x3 = XVECEXP (x2, 0, 0);
  operands[1] = x3;
  x4 = XVECEXP (x2, 0, 1);
  operands[2] = x4;
  if (!const_0_to_255_operand (operands[2], E_SImode))
    return -1;
  x5 = XEXP (x1, 1);
  operands[3] = x5;
  x6 = XEXP (x1, 2);
  operands[4] = x6;
  switch (GET_MODE (operands[0]))
    {
    case E_V32BFmode:
      return pattern467 (x1, 
E_V32BFmode, 
E_SImode); /* [-1, 0] */

    case E_V16BFmode:
      if (pattern467 (x1, 
E_V16BFmode, 
E_HImode) != 0)
        return -1;
      return 1;

    case E_V8BFmode:
      if (pattern467 (x1, 
E_V8BFmode, 
E_QImode) != 0)
        return -1;
      return 2;

    default:
      return -1;
    }
}

int
pattern476 (rtx x1)
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
  if (!register_operand (x6, E_QImode))
    return -1;
  x7 = XEXP (x1, 1);
  switch (GET_CODE (x7))
    {
    case CONST_INT:
    case CONST_DOUBLE:
    case CONST_VECTOR:
      operands[4] = x7;
      operands[5] = x6;
      switch (GET_MODE (operands[0]))
        {
        case E_V8DImode:
          return pattern474 (x1, 
E_V8DImode); /* [-1, 0] */

        case E_V4DImode:
          if (pattern474 (x1, 
E_V4DImode) != 0)
            return -1;
          return 1;

        case E_V2DImode:
          if (pattern474 (x1, 
E_V2DImode) != 0)
            return -1;
          return 2;

        default:
          return -1;
        }

    case REG:
    case SUBREG:
      if (!rtx_equal_p (x7, operands[1]))
        return -1;
      operands[4] = x6;
      switch (GET_MODE (operands[0]))
        {
        case E_V8DImode:
          if (pattern475 (x1, 
E_V8DImode) != 0)
            return -1;
          return 3;

        case E_V4DImode:
          if (pattern475 (x1, 
E_V4DImode) != 0)
            return -1;
          return 4;

        case E_V2DImode:
          if (pattern475 (x1, 
E_V2DImode) != 0)
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
pattern493 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 0);
  operands[1] = x3;
  x4 = XVECEXP (x1, 0, 1);
  operands[2] = x4;
  if (!const48_operand (operands[2], E_SImode))
    return -1;
  switch (GET_MODE (operands[0]))
    {
    case E_V16HImode:
      return pattern491 (x1, 
E_V16HFmode, 
E_V16HImode); /* [-1, 0] */

    case E_V32HImode:
      if (pattern491 (x1, 
E_V32HFmode, 
E_V32HImode) != 0)
        return -1;
      return 1;

    case E_V8SImode:
      res = pattern492 (x1, 
E_V8SImode);
      if (res >= 0)
        return res + 2; /* [2, 3] */
      return -1;

    case E_V16SImode:
      if (!register_operand (operands[0], E_V16SImode)
          || GET_MODE (x1) != E_V16SImode
          || GET_MODE (x2) != E_V16SImode)
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
      res = pattern492 (x1, 
E_V8DImode);
      if (res >= 0)
        return res + 6; /* [6, 7] */
      return -1;

    case E_V4DImode:
      if (pattern491 (x1, 
E_V4DFmode, 
E_V4DImode) != 0)
        return -1;
      return 8;

    default:
      return -1;
    }
}

int
pattern506 ()
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
pattern511 (machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!const0_operand (operands[2], i1))
    return -1;
  switch (GET_MODE (operands[1]))
    {
    case E_V4DImode:
      if (!register_operand (operands[1], E_V4DImode))
        return -1;
      return 0;

    case E_V4SImode:
      if (!register_operand (operands[1], E_V4SImode))
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern517 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], E_V2DFmode)
      || GET_MODE (x1) != E_V2DFmode)
    return -1;
  switch (GET_MODE (operands[1]))
    {
    case E_V2SImode:
      if (!nonimmediate_operand (operands[1], E_V2SImode))
        return -1;
      return 0;

    case E_V2DImode:
      if (!nonimmediate_operand (operands[1], E_V2DImode))
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern521 (rtx x1, machine_mode i1)
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
      if (!nonimmediate_operand (operands[1], E_V8SFmode))
        return -1;
      return 2;

    default:
      return -1;
    }
}

int
pattern530 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != i1
      || !regmem_or_bitnot_regmem_operand (operands[1], i1)
      || !regmem_or_bitnot_regmem_operand (operands[2], i1))
    return -1;
  x3 = XEXP (x1, 1);
  if (GET_MODE (x3) != i1
      || !regmem_or_bitnot_regmem_operand (operands[3], i1)
      || !regmem_or_bitnot_regmem_operand (operands[4], i1))
    return -1;
  return 0;
}

int
pattern537 (rtx x1)
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
      return pattern536 (x1); /* [-1, 11] */

    case IOR:
      res = pattern536 (x1);
      if (res >= 0)
        return res + 12; /* [12, 23] */
      return -1;

    case XOR:
      res = pattern536 (x1);
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
        case E_V32HFmode:
          if (pattern532 (x1, 
E_V32HFmode) != 0)
            return -1;
          return 36;

        case E_V16HFmode:
          if (pattern532 (x1, 
E_V16HFmode) != 0)
            return -1;
          return 37;

        case E_V8HFmode:
          if (pattern532 (x1, 
E_V8HFmode) != 0)
            return -1;
          return 38;

        case E_V32BFmode:
          if (pattern532 (x1, 
E_V32BFmode) != 0)
            return -1;
          return 39;

        case E_V16BFmode:
          if (pattern532 (x1, 
E_V16BFmode) != 0)
            return -1;
          return 40;

        case E_V8BFmode:
          if (pattern532 (x1, 
E_V8BFmode) != 0)
            return -1;
          return 41;

        case E_V16SFmode:
          if (pattern532 (x1, 
E_V16SFmode) != 0)
            return -1;
          return 42;

        case E_V8SFmode:
          if (pattern532 (x1, 
E_V8SFmode) != 0)
            return -1;
          return 43;

        case E_V4SFmode:
          if (pattern532 (x1, 
E_V4SFmode) != 0)
            return -1;
          return 44;

        case E_V8DFmode:
          if (pattern532 (x1, 
E_V8DFmode) != 0)
            return -1;
          return 45;

        case E_V4DFmode:
          if (pattern532 (x1, 
E_V4DFmode) != 0)
            return -1;
          return 46;

        case E_V2DFmode:
          if (pattern532 (x1, 
E_V2DFmode) != 0)
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
pattern550 (rtx x1)
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
pattern551 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) != E_XFmode)
    return -1;
  x4 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x4) != CLOBBER)
    return -1;
  x5 = XEXP (x2, 0);
  operands[0] = x5;
  if (!register_operand (operands[0], E_XFmode))
    return -1;
  x6 = XVECEXP (x3, 0, 0);
  operands[1] = x6;
  if (!register_operand (operands[1], E_XFmode))
    return -1;
  x7 = XVECEXP (x3, 0, 1);
  operands[2] = x7;
  if (!register_operand (operands[2], E_XFmode))
    return -1;
  x8 = XEXP (x4, 0);
  operands[3] = x8;
  if (!scratch_operand (operands[3], E_XFmode))
    return -1;
  return 0;
}

int
pattern562 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i2)
      || GET_MODE (x1) != i2
      || pattern561 (x1, 
i1, 
i2) != 0)
    return -1;
  return 0;
}

int
pattern565 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!nonimmediate_operand (operands[0], i1)
      || GET_MODE (x1) != i1
      || !nonimmediate_operand (operands[1], i1)
      || !general_operand (operands[2], i1))
    return -1;
  return 0;
}

int
pattern571 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 1);
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) != REG
      || REGNO (x3) != 17
      || GET_MODE (x3) != E_CCmode)
    return -1;
  x4 = XVECEXP (x1, 0, 0);
  x5 = XEXP (x4, 1);
  if (GET_MODE (x5) != E_QImode)
    return -1;
  return 0;
}

int
pattern576 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (GET_MODE (x1) != E_SImode
      || !register_operand (operands[0], E_SImode)
      || !register_operand (operands[1], E_SImode)
      || !register_operand (operands[2], E_SImode))
    return -1;
  return 0;
}

int
pattern581 (rtx x1)
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
  return pattern579 (x1); /* [-1, 3] */
}

int
pattern587 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x2) != USE)
    return -1;
  x3 = XVECEXP (x1, 0, 2);
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
  x9 = XEXP (x2, 0);
  operands[2] = x9;
  switch (GET_MODE (operands[0]))
    {
    case E_HFmode:
      return pattern218 (x7, 
E_V8HFmode, 
E_HFmode); /* [-1, 0] */

    case E_SFmode:
      if (GET_MODE (x7) != E_SFmode)
        return -1;
      return 1;

    case E_DFmode:
      if (GET_MODE (x7) != E_DFmode)
        return -1;
      return 2;

    default:
      return -1;
    }
}

int
pattern594 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x2) != SUBREG
      || maybe_ne (SUBREG_BYTE (x2), 0))
    return -1;
  x3 = XVECEXP (x1, 0, 0);
  operands[1] = x3;
  return pattern593 (x1); /* [-1, 2] */
}

int
pattern597 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  if (maybe_ne (SUBREG_BYTE (x2), 0)
      || GET_MODE (x2) != E_V2DImode)
    return -1;
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) != UNSPEC
      || XVECLEN (x3, 0) != 1
      || XINT (x3, 1) != 119
      || GET_MODE (x3) != E_V16QImode)
    return -1;
  x4 = XEXP (x1, 1);
  if (GET_CODE (x4) != SUBREG
      || maybe_ne (SUBREG_BYTE (x4), 0)
      || GET_MODE (x4) != E_V2DImode)
    return -1;
  x5 = XEXP (x4, 0);
  if (GET_CODE (x5) != UNSPEC
      || XVECLEN (x5, 0) != 1
      || XINT (x5, 1) != 119
      || GET_MODE (x5) != E_V16QImode)
    return -1;
  return 0;
}

int
pattern605 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (!nonimmediate_operand (operands[0], i1)
      || GET_MODE (x1) != i1)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != i1
      || !register_operand (operands[1], i1)
      || !const_int_operand (operands[2], E_QImode)
      || !const_scalar_int_operand (operands[3], i1))
    return -1;
  return 0;
}

int
pattern611 (rtx x1, machine_mode i1)
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
pattern615 (rtx x1, machine_mode i1)
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
pattern622 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) != SUBREG
      || maybe_ne (SUBREG_BYTE (x2), 0)
      || GET_MODE (x2) != E_QImode)
    return -1;
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) != AND
      || pattern421 (x1, 
E_DImode) != 0)
    return -1;
  return 0;
}

int
pattern629 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  x3 = XVECEXP (x2, 0, 0);
  operands[1] = x3;
  x4 = XEXP (x1, 2);
  switch (GET_CODE (x4))
    {
    case REG:
    case SUBREG:
      operands[3] = x4;
      switch (GET_MODE (operands[0]))
        {
        case E_V16SFmode:
          return pattern627 (x1, 
E_V16SFmode, 
E_HImode); /* [-1, 0] */

        case E_V8SFmode:
          if (pattern627 (x1, 
E_V8SFmode, 
E_QImode) != 0)
            return -1;
          return 1;

        case E_V4SFmode:
          if (pattern627 (x1, 
E_V4SFmode, 
E_QImode) != 0)
            return -1;
          return 2;

        case E_V8DFmode:
          if (pattern627 (x1, 
E_V8DFmode, 
E_QImode) != 0)
            return -1;
          return 3;

        case E_V4DFmode:
          if (pattern627 (x1, 
E_V4DFmode, 
E_QImode) != 0)
            return -1;
          return 4;

        case E_V2DFmode:
          if (pattern627 (x1, 
E_V2DFmode, 
E_QImode) != 0)
            return -1;
          return 5;

        default:
          return -1;
        }

    case CONST_INT:
      if (XWINT (x4, 0) != 1L)
        return -1;
      switch (GET_MODE (operands[0]))
        {
        case E_V4SFmode:
          if (pattern628 (x1, 
E_V4SFmode) != 0)
            return -1;
          return 6;

        case E_V2DFmode:
          if (pattern628 (x1, 
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
pattern644 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1)
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
pattern651 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  operands[1] = x4;
  x5 = XEXP (x3, 1);
  operands[2] = x5;
  x6 = XVECEXP (x1, 0, 1);
  if (!const48_operand (x6, E_SImode))
    return -1;
  x7 = XEXP (x2, 2);
  switch (GET_CODE (x7))
    {
    case REG:
    case SUBREG:
      return pattern650 (x1); /* [-1, 5] */

    case CONST_INT:
      res = pattern648 (x1);
      if (res >= 0)
        return res + 6; /* [6, 8] */
      return -1;

    default:
      return -1;
    }
}

int
pattern658 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 1);
  operands[2] = x2;
  x3 = XVECEXP (x1, 0, 2);
  x4 = XEXP (x3, 0);
  operands[3] = x4;
  x5 = XEXP (x3, 1);
  operands[4] = x5;
  switch (GET_CODE (operands[4]))
    {
    case REG:
    case SUBREG:
    case MEM:
      switch (GET_MODE (operands[0]))
        {
        case E_V8SFmode:
          return pattern655 (x1, 
E_V8SFmode); /* [-1, 0] */

        case E_V4SFmode:
          if (pattern655 (x1, 
E_V4SFmode) != 0)
            return -1;
          return 1;

        case E_V4DFmode:
          if (pattern655 (x1, 
E_V4DFmode) != 0)
            return -1;
          return 2;

        case E_V2DFmode:
          if (pattern655 (x1, 
E_V2DFmode) != 0)
            return -1;
          return 3;

        default:
          return -1;
        }

    case CONST_INT:
    case CONST_DOUBLE:
    case CONST_VECTOR:
      switch (GET_MODE (operands[0]))
        {
        case E_V8SFmode:
          if (pattern656 (x1, 
E_V8SImode, 
E_V8SFmode) != 0)
            return -1;
          return 4;

        case E_V4SFmode:
          if (pattern656 (x1, 
E_V4SImode, 
E_V4SFmode) != 0)
            return -1;
          return 5;

        case E_V4DFmode:
          if (pattern656 (x1, 
E_V4DImode, 
E_V4DFmode) != 0)
            return -1;
          return 6;

        case E_V2DFmode:
          if (pattern656 (x1, 
E_V2DImode, 
E_V2DFmode) != 0)
            return -1;
          return 7;

        case E_V32QImode:
          if (pattern657 (x1, 
E_V32QImode) != 0)
            return -1;
          return 8;

        case E_V16QImode:
          if (pattern657 (x1, 
E_V16QImode) != 0)
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
pattern679 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12, x13, x14, x15;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) != E_V2DImode)
    return -1;
  x5 = XEXP (x4, 1);
  if (x5 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
    return -1;
  x6 = XEXP (x4, 0);
  operands[1] = x6;
  if (!memory_operand (operands[1], E_DImode))
    return -1;
  x7 = XEXP (x2, 1);
  switch (XVECLEN (x7, 0))
    {
    case 8:
      x8 = XVECEXP (x7, 0, 0);
      if (x8 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
        return -1;
      x9 = XVECEXP (x7, 0, 1);
      if (x9 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
        return -1;
      x10 = XVECEXP (x7, 0, 2);
      if (x10 != const_int_rtx[MAX_SAVED_CONST_INT + 2])
        return -1;
      x11 = XVECEXP (x7, 0, 3);
      if (x11 != const_int_rtx[MAX_SAVED_CONST_INT + 3])
        return -1;
      x12 = XVECEXP (x7, 0, 4);
      if (x12 != const_int_rtx[MAX_SAVED_CONST_INT + 4])
        return -1;
      x13 = XVECEXP (x7, 0, 5);
      if (x13 != const_int_rtx[MAX_SAVED_CONST_INT + 5])
        return -1;
      x14 = XVECEXP (x7, 0, 6);
      if (x14 != const_int_rtx[MAX_SAVED_CONST_INT + 6])
        return -1;
      x15 = XVECEXP (x7, 0, 7);
      if (x15 != const_int_rtx[MAX_SAVED_CONST_INT + 7]
          || GET_MODE (x2) != E_V8QImode
          || GET_MODE (x3) != E_V16QImode)
        return -1;
      return pattern539 (x1); /* [-1, 2] */

    case 4:
      res = pattern677 (x1, 
E_V8HImode, 
E_V4HImode);
      if (res >= 0)
        return res + 3; /* [3, 4] */
      return -1;

    case 2:
      if (pattern678 (x1, 
E_V2SImode, 
E_V4SImode) != 0)
        return -1;
      return 5;

    default:
      return -1;
    }
}

int
pattern702 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  int res ATTRIBUTE_UNUSED;
  if (!nonmemory_operand (operands[2], E_QImode))
    return -1;
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
  switch (GET_CODE (x5))
    {
    case REG:
    case SUBREG:
    case MEM:
      return 0;

    case STRICT_LOW_PART:
      return 1;

    default:
      return -1;
    }
}

int
pattern710 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) != REG
      || REGNO (x3) != 17
      || GET_MODE (x3) != E_CCmode)
    return -1;
  x4 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x4) != CLOBBER)
    return -1;
  x5 = XVECEXP (x1, 0, 2);
  if (GET_CODE (x5) != CLOBBER)
    return -1;
  x6 = XEXP (x2, 1);
  x7 = XVECEXP (x6, 0, 0);
  operands[2] = x7;
  if (!register_operand (operands[2], E_V16QImode))
    return -1;
  x8 = XVECEXP (x6, 0, 1);
  operands[3] = x8;
  return 0;
}

int
pattern715 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  operands[1] = x4;
  if (!const_int_operand (operands[2], E_QImode))
    return -1;
  x5 = XEXP (x1, 1);
  switch (GET_CODE (x5))
    {
    case ZERO_EXTEND:
      x6 = XEXP (x5, 0);
      operands[3] = x6;
      switch (GET_MODE (operands[0]))
        {
        case E_DImode:
          return pattern713 (x1, 
E_SImode, 
E_DImode); /* [-1, 0] */

        case E_TImode:
          if (pattern713 (x1, 
E_DImode, 
E_TImode) != 0)
            return -1;
          return 1;

        default:
          return -1;
        }

    case CONST_INT:
    case CONST_WIDE_INT:
      operands[3] = x5;
      switch (GET_MODE (operands[0]))
        {
        case E_DImode:
          if (pattern714 (x1, 
E_DImode, 
E_SImode) != 0)
            return -1;
          return 2;

        case E_TImode:
          if (pattern714 (x1, 
E_TImode, 
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
pattern730 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_CODE (x1) != SET)
    return -1;
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) != PLUS
      || GET_MODE (x2) != E_SImode)
    return -1;
  x3 = XEXP (x1, 0);
  operands[3] = x3;
  if (!register_operand (operands[3], E_SImode))
    return -1;
  x4 = XEXP (x2, 0);
  operands[4] = x4;
  if (!register_operand (operands[4], E_SImode))
    return -1;
  x5 = XEXP (x2, 1);
  operands[2] = x5;
  if (!nonmemory_operand (operands[2], E_SImode))
    return -1;
  x6 = PATTERN (peep2_next_insn (2));
  return pattern729 (x6, 
i1); /* [-1, 0] */
}

int
pattern740 ()
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  switch (GET_MODE (operands[1]))
    {
    case E_V16QImode:
      if (!register_operand (operands[1], E_V16QImode)
          || !nonimmediate_operand (operands[2], E_V16QImode))
        return -1;
      return 0;

    case E_V16HImode:
      if (!register_operand (operands[1], E_V16HImode)
          || !nonimmediate_operand (operands[2], E_V16HImode))
        return -1;
      return 1;

    case E_V16SImode:
      if (!register_operand (operands[1], E_V16SImode)
          || !nonimmediate_operand (operands[2], E_V16SImode))
        return -1;
      return 2;

    default:
      return -1;
    }
}

int
pattern751 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != i1
      || !register_operand (operands[1], i1))
    return -1;
  return 0;
}

int
pattern757 (rtx x1)
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
          return pattern755 (x1, 
E_SImode); /* [-1, 0] */

        case E_DImode:
          if (pattern755 (x1, 
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
          if (pattern756 (x1, 
E_SImode) != 0)
            return -1;
          return 2;

        case E_DImode:
          if (pattern756 (x1, 
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
pattern773 (rtx x1, machine_mode i1, machine_mode i2)
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
      || !register_operand (operands[3], i2))
    return -1;
  return 0;
}

int
pattern778 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  if (!rtx_equal_p (x3, operands[1]))
    return -1;
  switch (GET_MODE (operands[0]))
    {
    case E_V8HFmode:
      return pattern777 (x1, 
E_V8HFmode); /* [-1, 0] */

    case E_V4SFmode:
      if (pattern777 (x1, 
E_V4SFmode) != 0)
        return -1;
      return 1;

    case E_V2DFmode:
      if (pattern777 (x1, 
E_V2DFmode) != 0)
        return -1;
      return 2;

    default:
      return -1;
    }
}

int
pattern788 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  if (!memory_operand (operands[0], i1)
      || GET_MODE (x1) != i1
      || !register_operand (operands[1], i2))
    return -1;
  x2 = XVECEXP (x1, 0, 1);
  operands[2] = x2;
  if (!register_operand (operands[2], i1))
    return -1;
  x3 = XVECEXP (x1, 0, 2);
  if (!rtx_equal_p (x3, operands[0]))
    return -1;
  return 0;
}

int
pattern799 (machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || !sse_comparison_operator (operands[3], i1)
      || !register_operand (operands[1], i1)
      || !vector_operand (operands[2], i1))
    return -1;
  return 0;
}

int
pattern806 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 1);
  operands[2] = x3;
  x4 = XEXP (x1, 1);
  if (XVECLEN (x4, 0) < 1)
    return -1;
  operands[3] = x4;
  x5 = XVECEXP (x4, 0, 0);
  operands[4] = x5;
  if (!const_int_operand (operands[4], E_VOIDmode))
    return -1;
  switch (GET_MODE (operands[0]))
    {
    case E_V32QImode:
      return pattern802 (x1, 
E_V32QImode, 
E_V64QImode); /* [-1, 0] */

    case E_V64QImode:
      if (pattern802 (x1, 
E_V64QImode, 
E_V128QImode) != 0)
        return -1;
      return 1;

    case E_V16QImode:
      if (pattern803 (x1, 
E_V16QImode, 
E_V32QImode) != 0)
        return -1;
      return 2;

    case E_V32HImode:
      if (pattern802 (x1, 
E_V32HImode, 
E_V64HImode) != 0)
        return -1;
      return 3;

    case E_V16HImode:
      if (pattern802 (x1, 
E_V16HImode, 
E_V32HImode) != 0)
        return -1;
      return 4;

    case E_V8HImode:
      if (pattern803 (x1, 
E_V8HImode, 
E_V16HImode) != 0)
        return -1;
      return 5;

    case E_V16SImode:
      if (pattern804 (x1, 
E_V16SImode, 
E_V32SImode) != 0)
        return -1;
      return 6;

    case E_V8SImode:
      if (pattern804 (x1, 
E_V8SImode, 
E_V16SImode) != 0)
        return -1;
      return 7;

    case E_V4SImode:
      if (!register_operand (operands[0], E_V4SImode)
          || GET_MODE (x1) != E_V4SImode
          || GET_MODE (x2) != E_V8SImode
          || !const0_operand (operands[2], E_V4SImode))
        return -1;
      return 8;

    case E_V8DImode:
      if (pattern805 (x1, 
E_V8DImode, 
E_V16DImode) != 0)
        return -1;
      return 9;

    case E_V4DImode:
      if (pattern805 (x1, 
E_V4DImode, 
E_V8DImode) != 0)
        return -1;
      return 10;

    case E_V2DImode:
      if (pattern805 (x1, 
E_V2DImode, 
E_V4DImode) != 0)
        return -1;
      return 11;

    case E_V32HFmode:
      if (pattern805 (x1, 
E_V32HFmode, 
E_V64HFmode) != 0)
        return -1;
      return 12;

    case E_V16HFmode:
      if (pattern805 (x1, 
E_V16HFmode, 
E_V32HFmode) != 0)
        return -1;
      return 13;

    case E_V8HFmode:
      if (pattern805 (x1, 
E_V8HFmode, 
E_V16HFmode) != 0)
        return -1;
      return 14;

    case E_V32BFmode:
      if (pattern805 (x1, 
E_V32BFmode, 
E_V64BFmode) != 0)
        return -1;
      return 15;

    case E_V16BFmode:
      if (pattern805 (x1, 
E_V16BFmode, 
E_V32BFmode) != 0)
        return -1;
      return 16;

    case E_V8BFmode:
      if (pattern805 (x1, 
E_V8BFmode, 
E_V16BFmode) != 0)
        return -1;
      return 17;

    case E_V16SFmode:
      if (pattern805 (x1, 
E_V16SFmode, 
E_V32SFmode) != 0)
        return -1;
      return 18;

    case E_V8SFmode:
      if (pattern805 (x1, 
E_V8SFmode, 
E_V16SFmode) != 0)
        return -1;
      return 19;

    case E_V4SFmode:
      if (pattern805 (x1, 
E_V4SFmode, 
E_V8SFmode) != 0)
        return -1;
      return 20;

    case E_V8DFmode:
      if (pattern805 (x1, 
E_V8DFmode, 
E_V16DFmode) != 0)
        return -1;
      return 21;

    case E_V4DFmode:
      if (pattern805 (x1, 
E_V4DFmode, 
E_V8DFmode) != 0)
        return -1;
      return 22;

    case E_V2DFmode:
      if (pattern805 (x1, 
E_V2DFmode, 
E_V4DFmode) != 0)
        return -1;
      return 23;

    default:
      return -1;
    }
}

int
pattern847 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (GET_MODE (x1) != i1
      || !register_operand (operands[3], i1)
      || !nonmemory_operand (operands[4], i1)
      || !const0_operand (operands[5], i1))
    return -1;
  return 0;
}

int
pattern851 (rtx x1, machine_mode i1)
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
pattern855 (rtx x1, machine_mode i1, machine_mode i2)
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
pattern860 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1
      || !register_operand (operands[2], i1)
      || !register_operand (operands[1], i1)
      || !const_0_to_15_operand (operands[3], E_SImode))
    return -1;
  return 0;
}

int
pattern863 (rtx x1, machine_mode i1, machine_mode i2)
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
      || !register_operand (operands[1], i1))
    return -1;
  return 0;
}

int
pattern871 (rtx x1, machine_mode i1)
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
pattern877 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XVECEXP (x2, 0, 0);
  operands[1] = x3;
  if (!const48_operand (operands[2], E_SImode))
    return -1;
  switch (GET_MODE (operands[0]))
    {
    case E_SImode:
      return pattern876 (x1, 
E_SImode); /* [-1, 2] */

    case E_DImode:
      res = pattern876 (x1, 
E_DImode);
      if (res >= 0)
        return res + 3; /* [3, 5] */
      return -1;

    default:
      return -1;
    }
}

int
pattern883 (rtx x1, machine_mode i1, machine_mode i2)
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
  if (GET_MODE (x3) != i2)
    return -1;
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) != i1)
    return -1;
  return 0;
}

int
pattern893 (rtx x1, machine_mode i1)
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
pattern902 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != i1
      || !nonimm_or_0_operand (operands[2], i1))
    return -1;
  x3 = XEXP (x2, 0);
  switch (GET_MODE (x3))
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
pattern911 (rtx x1, machine_mode i1)
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
      || !nonimmediate_operand (operands[2], i1))
    return -1;
  return 0;
}

int
pattern917 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1
      || !nonimmediate_operand (operands[1], i1)
      || !nonimm_or_0_operand (operands[2], i1))
    return -1;
  return 0;
}

int
pattern921 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12, x13, x14, x15, x16;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) != E_V8QImode)
    return -1;
  x4 = XEXP (x2, 1);
  if (GET_CODE (x4) != VEC_SELECT
      || GET_MODE (x4) != E_V8QImode)
    return -1;
  x5 = XEXP (x4, 1);
  if (GET_CODE (x5) != PARALLEL
      || XVECLEN (x5, 0) != 8)
    return -1;
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
  if (x13 != const_int_rtx[MAX_SAVED_CONST_INT + 7]
      || !register_operand (operands[0], E_V16QImode)
      || GET_MODE (x1) != E_V16QImode
      || GET_MODE (x2) != E_V8QImode
      || !nonimmediate_operand (operands[1], E_V8HFmode))
    return -1;
  x14 = XEXP (x4, 0);
  operands[2] = x14;
  if (!nonimm_or_0_operand (operands[2], E_V16QImode))
    return -1;
  x15 = XEXP (x2, 2);
  operands[3] = x15;
  x16 = XEXP (x1, 1);
  operands[4] = x16;
  if (!const0_operand (operands[4], E_V8QImode))
    return -1;
  return 0;
}

int
pattern937 (rtx x1, int *pnum_clobbers)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  x4 = XEXP (x3, 0);
  x5 = XEXP (x4, 0);
  operands[1] = x5;
  if (!nonimmediate_operand (operands[1], E_SImode))
    return -1;
  x6 = XVECEXP (x1, 0, 1);
  return pattern818 (x6, pnum_clobbers); /* [-1, 1] */
}

int
pattern945 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != i1
      || !register_operand (operands[1], i1))
    return -1;
  return 0;
}

int
pattern952 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 0);
  if (REGNO (x3) != 17)
    return -1;
  x4 = XEXP (x2, 1);
  x5 = XEXP (x4, 0);
  x6 = XEXP (x5, 0);
  operands[1] = x6;
  x7 = XVECEXP (x1, 0, 1);
  switch (GET_CODE (x7))
    {
    case SET:
      x8 = XEXP (x7, 0);
      operands[0] = x8;
      return 0;

    case CLOBBER:
      x8 = XEXP (x7, 0);
      operands[0] = x8;
      res = pattern951 (x5);
      if (res >= 0)
        return res + 1; /* [1, 4] */
      return -1;

    default:
      return -1;
    }
}

int
pattern960 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12, x13, x14, x15, x16, x17;
  rtx x18;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  operands[2] = x2;
  if (!general_reg_operand (operands[2], i2))
    return -1;
  x3 = XEXP (x1, 1);
  operands[3] = x3;
  if (!general_reg_operand (operands[3], i2))
    return -1;
  x4 = PATTERN (peep2_next_insn (2));
  if (GET_CODE (x4) != PARALLEL)
    return -1;
  switch (XVECLEN (x4, 0))
    {
    case 2:
      x5 = XVECEXP (x4, 0, 0);
      if (GET_CODE (x5) != SET)
        return -1;
      x6 = XEXP (x5, 1);
      if (GET_CODE (x6) != MULT)
        return -1;
      x7 = XEXP (x5, 0);
      operands[4] = x7;
      x8 = XEXP (x6, 0);
      switch (GET_CODE (x8))
        {
        case ZERO_EXTEND:
          if (GET_MODE (x8) != i1)
            return -1;
          x9 = XEXP (x6, 1);
          if (GET_CODE (x9) != ZERO_EXTEND
              || GET_MODE (x9) != i1)
            return -1;
          x10 = XVECEXP (x4, 0, 1);
          if (GET_CODE (x10) != CLOBBER)
            return -1;
          x11 = XEXP (x10, 0);
          if (GET_CODE (x11) != REG
              || REGNO (x11) != 17
              || GET_MODE (x11) != E_CCmode
              || !general_reg_operand (operands[4], i1)
              || GET_MODE (x6) != i1)
            return -1;
          x12 = XEXP (x8, 0);
          if (!rtx_equal_p (x12, operands[2]))
            return -1;
          x13 = XEXP (x9, 0);
          if (!rtx_equal_p (x13, operands[0]))
            return -1;
          return 0;

        case REG:
          if (!rtx_equal_p (x8, operands[2]))
            return -1;
          x10 = XVECEXP (x4, 0, 1);
          if (GET_CODE (x10) != SET)
            return -1;
          x14 = XEXP (x10, 1);
          if (GET_CODE (x14) != UMUL_HIGHPART
              || GET_MODE (x14) != i2
              || !general_reg_operand (operands[4], i2)
              || GET_MODE (x6) != i2)
            return -1;
          x11 = XEXP (x10, 0);
          operands[5] = x11;
          if (!general_reg_operand (operands[5], i2))
            return -1;
          x9 = XEXP (x6, 1);
          if (!rtx_equal_p (x9, operands[0]))
            return -1;
          x15 = XEXP (x14, 0);
          if (!rtx_equal_p (x15, operands[2]))
            return -1;
          x16 = XEXP (x14, 1);
          if (!rtx_equal_p (x16, operands[0]))
            return -1;
          return 1;

        default:
          return -1;
        }

    case 3:
      x5 = XVECEXP (x4, 0, 0);
      if (GET_CODE (x5) != SET)
        return -1;
      x10 = XVECEXP (x4, 0, 1);
      if (GET_CODE (x10) != CLOBBER)
        return -1;
      x17 = XVECEXP (x4, 0, 2);
      if (GET_CODE (x17) != CLOBBER)
        return -1;
      x18 = XEXP (x17, 0);
      if (GET_CODE (x18) != REG
          || REGNO (x18) != 17
          || GET_MODE (x18) != E_CCmode)
        return -1;
      x7 = XEXP (x5, 0);
      operands[4] = x7;
      return 2;

    default:
      return -1;
    }
}

int
pattern985 ()
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  switch (GET_MODE (operands[1]))
    {
    case E_V8QImode:
      if (!register_operand (operands[1], E_V8QImode)
          || !const_0_to_7_operand (operands[2], E_SImode))
        return -1;
      return 0;

    case E_V4QImode:
      if (!register_operand (operands[1], E_V4QImode)
          || !const_0_to_3_operand (operands[2], E_SImode))
        return -1;
      return 1;

    case E_V16QImode:
      if (!register_operand (operands[1], E_V16QImode)
          || !const_0_to_15_operand (operands[2], E_SImode))
        return -1;
      return 2;

    default:
      return -1;
    }
}

int
pattern991 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  switch (GET_MODE (operands[0]))
    {
    case E_DImode:
      if (!register_operand (operands[0], E_DImode)
          || GET_MODE (x1) != E_DImode
          || !nonimm_or_0_operand (operands[1], E_V64QImode)
          || !nonimm_or_0_operand (operands[2], E_V64QImode))
        return -1;
      return 0;

    case E_SImode:
      if (!register_operand (operands[0], E_SImode)
          || GET_MODE (x1) != E_SImode)
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
pattern1002 (rtx x1, machine_mode i1)
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
  x3 = XVECEXP (x2, 0, 0);
  if (!register_operand (x3, i1))
    return -1;
  x4 = XVECEXP (x2, 0, 1);
  if (!register_operand (x4, i1))
    return -1;
  return 0;
}

int
pattern1013 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  operands[2] = x2;
  x3 = XEXP (x1, 2);
  x4 = XVECEXP (x3, 0, 1);
  operands[4] = x4;
  x5 = XVECEXP (x3, 0, 2);
  operands[5] = x5;
  x6 = XVECEXP (x3, 0, 0);
  switch (GET_CODE (x6))
    {
    case REG:
    case SUBREG:
    case MEM:
      return 0;

    case NOT:
      x7 = XEXP (x6, 0);
      operands[3] = x7;
      if (!const_0_to_7_operand (operands[5], E_SImode))
        return -1;
      switch (GET_MODE (operands[0]))
        {
        case E_V32QImode:
          if (pattern1012 (x1, 
E_V32QImode, 
E_SImode) != 0)
            return -1;
          return 1;

        case E_V16QImode:
          if (pattern1012 (x1, 
E_V16QImode, 
E_HImode) != 0)
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
pattern1029 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i2)
      || GET_MODE (x1) != i2
      || !nonimmediate_operand (operands[1], i2)
      || !nonimm_or_0_operand (operands[2], i2)
      || !register_operand (operands[3], i1))
    return -1;
  return 0;
}

int
pattern1039 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!nonimmediate_operand (operands[1], E_V64QImode)
      || !nonimmediate_operand (operands[2], E_V64QImode)
      || !register_operand (operands[4], E_DImode)
      || GET_MODE (x1) != E_DImode)
    return -1;
  return 0;
}

int
pattern1042 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12, x13;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  x4 = XEXP (x3, 0);
  x5 = XVECEXP (x4, 0, 0);
  operands[1] = x5;
  x6 = XVECEXP (x4, 0, 1);
  operands[2] = x6;
  x7 = XVECEXP (x4, 0, 2);
  operands[3] = x7;
  if (!const_0_to_7_operand (operands[3], E_SImode))
    return -1;
  x8 = XVECEXP (x1, 0, 1);
  x9 = XEXP (x8, 0);
  operands[4] = x9;
  x10 = XEXP (x8, 1);
  x11 = XVECEXP (x10, 0, 0);
  if (!rtx_equal_p (x11, operands[1]))
    return -1;
  x12 = XVECEXP (x10, 0, 1);
  if (!rtx_equal_p (x12, operands[2]))
    return -1;
  x13 = XVECEXP (x10, 0, 2);
  if (!rtx_equal_p (x13, operands[3]))
    return -1;
  switch (XINT (x4, 1))
    {
    case 59:
      if (XINT (x10, 1) != 59)
        return -1;
      switch (GET_MODE (operands[0]))
        {
        case E_HImode:
          return pattern1040 (x1, 
E_HImode); /* [-1, 20] */

        case E_SImode:
          res = pattern1040 (x1, 
E_SImode);
          if (res >= 0)
            return res + 21; /* [21, 41] */
          return -1;

        case E_DImode:
          res = pattern1040 (x1, 
E_DImode);
          if (res >= 0)
            return res + 42; /* [42, 62] */
          return -1;

        default:
          return -1;
        }

    case 157:
      if (XINT (x10, 1) != 157)
        return -1;
      switch (GET_MODE (operands[0]))
        {
        case E_HImode:
          res = pattern1041 (x1, 
E_HImode);
          if (res >= 0)
            return res + 63; /* [63, 74] */
          return -1;

        case E_SImode:
          res = pattern1041 (x1, 
E_SImode);
          if (res >= 0)
            return res + 75; /* [75, 86] */
          return -1;

        case E_DImode:
          res = pattern1041 (x1, 
E_DImode);
          if (res >= 0)
            return res + 87; /* [87, 98] */
          return -1;

        default:
          return -1;
        }

    default:
      return -1;
    }
}

int
pattern1059 (rtx x1, int i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  if (x4 != const_int_rtx[MAX_SAVED_CONST_INT + i1])
    return -1;
  x5 = XEXP (x1, 0);
  operands[0] = x5;
  return pattern1058 (x2); /* [-1, 3] */
}

int
pattern1062 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (!sse_reg_operand (operands[0], i1)
      || GET_MODE (x1) != i1)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != i1
      || !sse_reg_operand (operands[2], i2)
      || !sse_reg_operand (operands[1], i1))
    return -1;
  return 0;
}

int
pattern1068 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[1], i1))
    return -1;
  x2 = XVECEXP (x1, 0, 1);
  operands[2] = x2;
  if (!register_operand (operands[2], i1))
    return -1;
  x3 = XVECEXP (x1, 0, 2);
  x4 = XEXP (x3, 0);
  if (!rtx_equal_p (x4, operands[0]))
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
pattern1078 (rtx x1, machine_mode i1)
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
pattern1086 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  switch (GET_MODE (x1))
    {
    case E_DImode:
      if (!nonimmediate_operand (operands[1], E_V64QImode)
          || !nonimmediate_operand (operands[2], E_V64QImode))
        return -1;
      return 0;

    case E_HImode:
      switch (GET_MODE (operands[1]))
        {
        case E_V16QImode:
          if (!nonimmediate_operand (operands[1], E_V16QImode)
              || !nonimmediate_operand (operands[2], E_V16QImode))
            return -1;
          return 1;

        case E_V16HImode:
          if (!nonimmediate_operand (operands[1], E_V16HImode)
              || !nonimmediate_operand (operands[2], E_V16HImode))
            return -1;
          return 2;

        case E_V16SImode:
          if (!nonimmediate_operand (operands[1], E_V16SImode)
              || !nonimmediate_operand (operands[2], E_V16SImode))
            return -1;
          return 3;

        default:
          return -1;
        }

    case E_SImode:
      switch (GET_MODE (operands[1]))
        {
        case E_V32QImode:
          if (!nonimmediate_operand (operands[1], E_V32QImode)
              || !nonimmediate_operand (operands[2], E_V32QImode))
            return -1;
          return 4;

        case E_V32HImode:
          if (!nonimmediate_operand (operands[1], E_V32HImode)
              || !nonimmediate_operand (operands[2], E_V32HImode))
            return -1;
          return 5;

        default:
          return -1;
        }

    case E_QImode:
      switch (GET_MODE (operands[1]))
        {
        case E_V8HImode:
          if (!nonimmediate_operand (operands[1], E_V8HImode)
              || !nonimmediate_operand (operands[2], E_V8HImode))
            return -1;
          return 6;

        case E_V8SImode:
          if (!nonimmediate_operand (operands[1], E_V8SImode)
              || !nonimmediate_operand (operands[2], E_V8SImode))
            return -1;
          return 7;

        case E_V4SImode:
          if (!nonimmediate_operand (operands[1], E_V4SImode)
              || !nonimmediate_operand (operands[2], E_V4SImode))
            return -1;
          return 8;

        case E_V8DImode:
          if (!nonimmediate_operand (operands[1], E_V8DImode)
              || !nonimmediate_operand (operands[2], E_V8DImode))
            return -1;
          return 9;

        case E_V4DImode:
          if (!nonimmediate_operand (operands[1], E_V4DImode)
              || !nonimmediate_operand (operands[2], E_V4DImode))
            return -1;
          return 10;

        case E_V2DImode:
          if (!nonimmediate_operand (operands[1], E_V2DImode)
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
pattern1120 (rtx x1, machine_mode i1, machine_mode i2, machine_mode i3, machine_mode i4)
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
      || !register_operand (operands[1], i3))
    return -1;
  x4 = XEXP (x2, 1);
  if (GET_MODE (x4) != i4
      || !vector_operand (operands[2], i3)
      || !nonimm_or_0_operand (operands[3], i2)
      || !register_operand (operands[4], i1))
    return -1;
  return 0;
}

int
pattern1129 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 0);
  x4 = XVECEXP (x3, 0, 2);
  operands[3] = x4;
  x5 = XVECEXP (x1, 0, 1);
  if (!const_4_or_8_to_11_operand (x5, E_SImode))
    return -1;
  x6 = XEXP (x2, 1);
  switch (GET_CODE (x6))
    {
    case CONST_INT:
    case CONST_DOUBLE:
    case CONST_VECTOR:
      operands[4] = x6;
      x7 = XEXP (x2, 2);
      if (GET_CODE (x7) != UNSPEC
          || XVECLEN (x7, 0) != 1
          || XINT (x7, 1) != 223)
        return -1;
      x8 = XVECEXP (x7, 0, 0);
      operands[5] = x8;
      operands[6] = x5;
      switch (GET_MODE (operands[0]))
        {
        case E_V32HFmode:
          return pattern1127 (x1, 
E_HImode, 
E_SImode, 
E_V32HFmode); /* [-1, 0] */

        case E_V16HFmode:
          if (pattern1127 (x1, 
E_QImode, 
E_HImode, 
E_V16HFmode) != 0)
            return -1;
          return 1;

        default:
          return -1;
        }

    case REG:
    case SUBREG:
      x7 = XEXP (x2, 2);
      switch (GET_CODE (x7))
        {
        case UNSPEC:
          if (XVECLEN (x7, 0) != 1
              || XINT (x7, 1) != 223)
            return -1;
          x8 = XVECEXP (x7, 0, 0);
          operands[4] = x8;
          operands[5] = x5;
          if (!rtx_equal_p (x6, operands[1]))
            return -1;
          switch (GET_MODE (operands[0]))
            {
            case E_V32HFmode:
              if (pattern1128 (x1, 
E_HImode, 
E_SImode, 
E_V32HFmode) != 0)
                return -1;
              return 2;

            case E_V16HFmode:
              if (pattern1128 (x1, 
E_QImode, 
E_HImode, 
E_V16HFmode) != 0)
                return -1;
              return 3;

            default:
              return -1;
            }

        case CONST_INT:
          if (XWINT (x7, 0) != 3L
              || !register_operand (operands[0], E_V8HFmode)
              || GET_MODE (x1) != E_V8HFmode
              || GET_MODE (x2) != E_V8HFmode
              || GET_MODE (x3) != E_V8HFmode
              || !register_operand (operands[1], E_V8HFmode)
              || !register_operand (operands[2], E_V8HFmode)
              || !register_operand (operands[3], E_V8HFmode))
            return -1;
          operands[4] = x5;
          if (!rtx_equal_p (x6, operands[2]))
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
pattern1165 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  switch (GET_CODE (x1))
    {
    case AND:
      x2 = XEXP (x1, 0);
      operands[2] = x2;
      if (!int248_register_operand (operands[2], E_VOIDmode))
        return -1;
      x3 = XEXP (x1, 1);
      operands[3] = x3;
      if (!const_int_operand (operands[3], E_VOIDmode))
        return -1;
      return 0;

    case PLUS:
      x2 = XEXP (x1, 0);
      operands[2] = x2;
      if (!int248_register_operand (operands[2], E_VOIDmode))
        return -1;
      x3 = XEXP (x1, 1);
      operands[3] = x3;
      if (!const_int_operand (operands[3], E_VOIDmode))
        return -1;
      return 1;

    case MINUS:
      x2 = XEXP (x1, 0);
      operands[3] = x2;
      if (!const_int_operand (operands[3], E_VOIDmode))
        return -1;
      x3 = XEXP (x1, 1);
      operands[2] = x3;
      if (!int248_register_operand (operands[2], E_VOIDmode))
        return -1;
      return 2;

    default:
      return -1;
    }
}

int
pattern1184 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  switch (GET_CODE (x3))
    {
    case LABEL_REF:
      x4 = XEXP (x2, 2);
      if (GET_CODE (x4) != PC)
        return -1;
      x5 = XEXP (x1, 0);
      if (GET_CODE (x5) != PC)
        return -1;
      x6 = XEXP (x2, 0);
      operands[0] = x6;
      x7 = XEXP (x6, 0);
      operands[1] = x7;
      x8 = XEXP (x3, 0);
      operands[2] = x8;
      switch (GET_MODE (operands[1]))
        {
        case E_QImode:
          if (!register_operand (operands[1], E_QImode))
            return -1;
          return 0;

        case E_HImode:
          if (!register_operand (operands[1], E_HImode))
            return -1;
          return 1;

        case E_SImode:
          if (!register_operand (operands[1], E_SImode))
            return -1;
          return 2;

        case E_DImode:
          if (!register_operand (operands[1], E_DImode))
            return -1;
          return 3;

        default:
          return -1;
        }

    case REG:
    case SUBREG:
    case MEM:
      operands[2] = x3;
      x5 = XEXP (x1, 0);
      operands[0] = x5;
      x6 = XEXP (x2, 0);
      operands[1] = x6;
      x7 = XEXP (x6, 0);
      operands[4] = x7;
      x4 = XEXP (x2, 2);
      operands[3] = x4;
      switch (GET_MODE (operands[0]))
        {
        case E_QImode:
          if (!register_operand (operands[0], E_QImode)
              || GET_MODE (x2) != E_QImode
              || !register_operand (operands[2], E_QImode)
              || !register_operand (operands[3], E_QImode))
            return -1;
          res = pattern1182 ();
          if (res >= 0)
            return res + 4; /* [4, 7] */
          return -1;

        case E_HImode:
          res = pattern1183 (x2, 
E_HImode);
          if (res >= 0)
            return res + 8; /* [8, 11] */
          return -1;

        case E_SImode:
          res = pattern1183 (x2, 
E_SImode);
          if (res >= 0)
            return res + 12; /* [12, 15] */
          return -1;

        case E_DImode:
          res = pattern1183 (x2, 
E_DImode);
          if (res >= 0)
            return res + 16; /* [16, 19] */
          return -1;

        default:
          return -1;
        }

    default:
      return -1;
    }
}

int
pattern1215 (rtx x1, machine_mode i1, machine_mode i2)
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
  if (GET_MODE (x3) != i2
      || !register_operand (operands[1], i1))
    return -1;
  x4 = XEXP (x3, 1);
  operands[2] = x4;
  if (!nonimmediate_operand (operands[2], i1))
    return -1;
  return 0;
}

int
pattern1222 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], E_V16SImode)
      || GET_MODE (x1) != E_V16SImode)
    return -1;
  x2 = XVECEXP (x1, 0, 0);
  if (GET_MODE (x2) != E_V16SImode)
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
pattern1230 (rtx x1)
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
          || !vector_operand (operands[1], E_V16QImode)
          || !register_operand (operands[2], E_V16QImode)
          || GET_MODE (x2) != E_V16QImode
          || GET_MODE (x5) != E_V16QImode
          || !register_operand (operands[3], E_V16QImode))
        return -1;
      switch (GET_MODE (x3))
        {
        case E_V4SImode:
          if (GET_MODE (x4) != E_V4SImode
              || !vector_all_ones_operand (operands[4], E_V4SImode))
            return -1;
          return 0;

        case E_V2DImode:
          if (GET_MODE (x4) != E_V2DImode
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
          || GET_MODE (x2) != E_V32QImode
          || GET_MODE (x5) != E_V32QImode
          || !register_operand (operands[3], E_V32QImode))
        return -1;
      switch (GET_MODE (x3))
        {
        case E_V8SImode:
          if (GET_MODE (x4) != E_V8SImode
              || !vector_all_ones_operand (operands[4], E_V8SImode))
            return -1;
          return 2;

        case E_V4DImode:
          if (GET_MODE (x4) != E_V4DImode
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
pattern1253 (rtx x1, machine_mode i1)
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
pattern1259 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6;
  int res ATTRIBUTE_UNUSED;
  if (peep2_current_count < 4
      || GET_CODE (x1) != SET)
    return -1;
  x2 = XEXP (x1, 1);
  if (x2 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
    return -1;
  x3 = XEXP (x1, 0);
  operands[3] = x3;
  if (!memory_operand (operands[3], i1))
    return -1;
  x4 = PATTERN (peep2_next_insn (3));
  if (GET_CODE (x4) != SET)
    return -1;
  x5 = XEXP (x4, 1);
  if (x5 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
    return -1;
  x6 = XEXP (x4, 0);
  operands[4] = x6;
  if (!memory_operand (operands[4], i1))
    return -1;
  return 0;
}

int
pattern1270 (rtx x1, machine_mode i1)
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
pattern1275 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1
      || !nonimmediate_operand (operands[2], i1)
      || !nonimmediate_operand (operands[3], i1))
    return -1;
  return 0;
}

int
pattern1282 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != i1
      || !register_operand (operands[2], i1)
      || !nonimm_or_0_operand (operands[3], i1)
      || !register_operand (operands[1], i1))
    return -1;
  return 0;
}

int
pattern1290 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 2);
  if (GET_MODE (x2) != E_QImode)
    return -1;
  x3 = XVECEXP (x2, 0, 2);
  operands[5] = x3;
  if (!const_0_to_31_operand (operands[5], E_SImode))
    return -1;
  switch (GET_MODE (operands[0]))
    {
    case E_V8SImode:
      return pattern1289 (x1, 
E_V8SFmode, 
E_V8SImode); /* [-1, 0] */

    case E_V4SImode:
      if (pattern1289 (x1, 
E_V4SFmode, 
E_V4SImode) != 0)
        return -1;
      return 1;

    case E_V4DImode:
      if (pattern1289 (x1, 
E_V4DFmode, 
E_V4DImode) != 0)
        return -1;
      return 2;

    case E_V2DImode:
      if (pattern1289 (x1, 
E_V2DFmode, 
E_V2DImode) != 0)
        return -1;
      return 3;

    default:
      return -1;
    }
}

int
pattern1304 (rtx x1, machine_mode i1, machine_mode i2, machine_mode i3)
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
      || !register_operand (operands[1], i3)
      || !nonimm_or_0_operand (operands[2], i2)
      || !register_operand (operands[3], i1))
    return -1;
  return 0;
}

int
pattern1312 (rtx x1, machine_mode i1, machine_mode i2, machine_mode i3)
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
  if (GET_MODE (x3) != i2
      || !register_operand (operands[2], i1))
    return -1;
  x4 = XEXP (x2, 1);
  if (GET_MODE (x4) != i2
      || !register_operand (operands[1], i1))
    return -1;
  return 0;
}

int
pattern1320 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 1);
  x3 = XEXP (x2, 1);
  x4 = XEXP (x3, 0);
  operands[2] = x4;
  if (!nonimmediate_operand (operands[2], E_SImode))
    return -1;
  switch (GET_MODE (operands[0]))
    {
    case E_SImode:
      if (!memory_operand (operands[0], E_SImode))
        return -1;
      x5 = XVECEXP (x1, 0, 0);
      x6 = XEXP (x5, 1);
      if (GET_MODE (x6) != E_SImode
          || !memory_operand (operands[3], E_SImode))
        return -1;
      return 0;

    case E_DImode:
      if (!memory_operand (operands[0], E_DImode))
        return -1;
      x5 = XVECEXP (x1, 0, 0);
      x6 = XEXP (x5, 1);
      if (GET_MODE (x6) != E_DImode
          || !memory_operand (operands[3], E_DImode))
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern1332 (rtx x1, machine_mode i1)
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
pattern1340 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!mask_reg_operand (operands[0], i1)
      || GET_MODE (x1) != i1
      || !mask_reg_operand (operands[1], i1)
      || !const_int_operand (operands[2], E_VOIDmode))
    return -1;
  return 0;
}

int
pattern1346 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) != i1)
    return -1;
  x4 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x4) != CLOBBER)
    return -1;
  x5 = XEXP (x4, 0);
  if (GET_CODE (x5) != REG
      || REGNO (x5) != 17
      || GET_MODE (x5) != E_CCmode)
    return -1;
  x6 = XEXP (x3, 0);
  if (!rtx_equal_p (x6, operands[0]))
    return -1;
  x7 = XEXP (x2, 0);
  if (!rtx_equal_p (x7, operands[0]))
    return -1;
  x8 = PATTERN (peep2_next_insn (2));
  return pattern1345 (x8); /* [-1, 0] */
}

int
pattern1356 (rtx x1, machine_mode i1)
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
pattern1361 (rtx x1)
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
pattern1373 (rtx x1, machine_mode i1, machine_mode i2)
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
      || pattern1372 (
i1, 
i2) != 0)
    return -1;
  return 0;
}

int
pattern1381 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i2)
      || GET_MODE (x1) != i2)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != i2
      || !nonimmediate_operand (operands[1], i2))
    return -1;
  x3 = XEXP (x2, 2);
  return pattern1380 (x3, 
i1, 
i2); /* [-1, 0] */
}

int
pattern1391 (rtx x1, machine_mode i1, machine_mode i2)
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
  return pattern1380 (x4, 
i1, 
i2); /* [-1, 0] */
}

int
pattern1400 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  switch (GET_CODE (x4))
    {
    case REG:
    case SUBREG:
    case MEM:
      x5 = XEXP (x3, 2);
      operands[4] = x5;
      x6 = XVECEXP (x1, 0, 1);
      operands[5] = x6;
      switch (GET_MODE (operands[0]))
        {
        case E_V8HFmode:
          return pattern1399 (x1, 
E_V8HFmode); /* [-1, 0] */

        case E_V4SFmode:
          if (pattern1399 (x1, 
E_V4SFmode) != 0)
            return -1;
          return 1;

        case E_V2DFmode:
          if (pattern1399 (x1, 
E_V2DFmode) != 0)
            return -1;
          return 2;

        default:
          return -1;
        }

    case CONST_INT:
    case CONST_DOUBLE:
    case CONST_VECTOR:
      operands[4] = x4;
      x7 = XEXP (x3, 0);
      x8 = XEXP (x7, 0);
      x9 = XEXP (x8, 0);
      operands[2] = x9;
      x10 = XEXP (x7, 1);
      operands[1] = x10;
      x5 = XEXP (x3, 2);
      operands[5] = x5;
      x6 = XVECEXP (x1, 0, 1);
      operands[6] = x6;
      x11 = XEXP (x2, 1);
      if (!rtx_equal_p (x11, operands[1]))
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
pattern1424 (rtx x1, machine_mode i1)
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
pattern1430 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 1);
  x3 = XEXP (x2, 1);
  x4 = XEXP (x3, 1);
  if (!rtx_equal_p (x4, operands[2]))
    return -1;
  x5 = XEXP (x3, 0);
  switch (GET_CODE (x5))
    {
    case REG:
    case SUBREG:
    case MEM:
      if (!rtx_equal_p (x5, operands[1]))
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

    case ZERO_EXTEND:
      if (GET_MODE (x5) != E_DImode)
        return -1;
      x6 = XVECEXP (x1, 0, 0);
      x7 = XEXP (x6, 1);
      x8 = XEXP (x7, 0);
      if (GET_MODE (x8) != E_SImode
          || !nonimmediate_operand (operands[1], E_SImode)
          || !x86_64_zext_immediate_operand (operands[2], E_SImode)
          || !register_operand (operands[0], E_DImode)
          || GET_MODE (x3) != E_DImode)
        return -1;
      x9 = XEXP (x5, 0);
      if (!rtx_equal_p (x9, operands[1]))
        return -1;
      return 4;

    default:
      return -1;
    }
}

int
pattern1457 (rtx x1, machine_mode i1, machine_mode i2)
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
      || !bcst_vector_operand (operands[3], i1)
      || !const0_operand (operands[5], i1)
      || !register_operand (operands[6], i2))
    return -1;
  return 0;
}

int
pattern1467 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  switch (GET_CODE (operands[4]))
    {
    case REG:
    case SUBREG:
    case MEM:
      if (!const_0_to_31_operand (operands[5], E_SImode))
        return -1;
      switch (GET_MODE (operands[0]))
        {
        case E_V32HFmode:
          return pattern1464 (x1, 
E_V32HFmode, 
E_SImode); /* [-1, 0] */

        case E_V16HFmode:
          if (pattern1464 (x1, 
E_V16HFmode, 
E_HImode) != 0)
            return -1;
          return 1;

        case E_V8HFmode:
          if (pattern1464 (x1, 
E_V8HFmode, 
E_QImode) != 0)
            return -1;
          return 2;

        case E_V16SFmode:
          if (pattern1464 (x1, 
E_V16SFmode, 
E_HImode) != 0)
            return -1;
          return 3;

        case E_V8SFmode:
          if (pattern1464 (x1, 
E_V8SFmode, 
E_QImode) != 0)
            return -1;
          return 4;

        case E_V4SFmode:
          if (pattern1464 (x1, 
E_V4SFmode, 
E_QImode) != 0)
            return -1;
          return 5;

        case E_V8DFmode:
          if (pattern1464 (x1, 
E_V8DFmode, 
E_QImode) != 0)
            return -1;
          return 6;

        case E_V4DFmode:
          if (pattern1464 (x1, 
E_V4DFmode, 
E_QImode) != 0)
            return -1;
          return 7;

        case E_V2DFmode:
          if (pattern1464 (x1, 
E_V2DFmode, 
E_QImode) != 0)
            return -1;
          return 8;

        default:
          return -1;
        }

    case CONST_INT:
    case CONST_DOUBLE:
    case CONST_VECTOR:
      if (!const_0_to_7_operand (operands[5], E_SImode))
        return -1;
      switch (GET_MODE (operands[0]))
        {
        case E_V8SFmode:
          if (pattern1465 (x1, 
E_V8SImode, 
E_V8SFmode) != 0)
            return -1;
          return 9;

        case E_V4SFmode:
          if (pattern1465 (x1, 
E_V4SImode, 
E_V4SFmode) != 0)
            return -1;
          return 10;

        case E_V4DFmode:
          if (pattern1465 (x1, 
E_V4DImode, 
E_V4DFmode) != 0)
            return -1;
          return 11;

        case E_V2DFmode:
          if (pattern1465 (x1, 
E_V2DImode, 
E_V2DFmode) != 0)
            return -1;
          return 12;

        case E_V4SImode:
          if (pattern1466 (x1, 
E_V4SImode, 
E_QImode) != 0)
            return -1;
          return 13;

        case E_V2DImode:
          if (pattern1466 (x1, 
E_V2DImode, 
E_QImode) != 0)
            return -1;
          return 14;

        case E_V8SImode:
          if (pattern1466 (x1, 
E_V8SImode, 
E_QImode) != 0)
            return -1;
          return 15;

        case E_V4DImode:
          if (pattern1466 (x1, 
E_V4DImode, 
E_QImode) != 0)
            return -1;
          return 16;

        case E_V32QImode:
          if (pattern1466 (x1, 
E_V32QImode, 
E_SImode) != 0)
            return -1;
          return 17;

        case E_V16QImode:
          if (pattern1466 (x1, 
E_V16QImode, 
E_HImode) != 0)
            return -1;
          return 18;

        default:
          return -1;
        }

    default:
      return -1;
    }
}

int
pattern1514 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1
      || !register_operand (operands[2], i1))
    return -1;
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) != i1
      || !nonimmediate_operand (operands[3], i1))
    return -1;
  return 0;
}

int
pattern1523 ()
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
pattern1529 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1
      || !nonimmediate_operand (operands[3], i1)
      || !nonimmediate_operand (operands[4], i1))
    return -1;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  switch (GET_MODE (x3))
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
pattern1538 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7;
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
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) != i1)
    return -1;
  x5 = XEXP (x4, 0);
  if (GET_MODE (x5) != i1
      || !register_operand (operands[1], i2))
    return -1;
  x6 = XEXP (x4, 1);
  if (GET_MODE (x6) != i1
      || !register_operand (operands[2], i2))
    return -1;
  x7 = XEXP (x3, 1);
  if (GET_MODE (x7) != i1)
    return -1;
  return 0;
}

int
pattern1548 (rtx x1)
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
pattern1558 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  if (!nonimmediate_operand (operands[0], E_V4SFmode)
      || GET_MODE (x1) != E_V4SFmode)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != E_V8SFmode
      || !nonimmediate_operand (operands[1], E_V4SFmode))
    return -1;
  x3 = XEXP (x2, 1);
  operands[2] = x3;
  if (!nonimmediate_operand (operands[2], E_V4SFmode))
    return -1;
  return 0;
}

int
pattern1569 (rtx x1, machine_mode i1, machine_mode i2)
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
      || !register_operand (operands[1], i1))
    return -1;
  x4 = XEXP (x1, 1);
  if (GET_MODE (x4) != i2
      || !register_operand (operands[2], i1))
    return -1;
  return 0;
}

int
pattern1578 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[1], i2)
      || GET_MODE (x1) != i1)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != i1
      || !x86_64_dwzext_immediate_operand (operands[2], i1))
    return -1;
  return 0;
}

int
pattern1582 (rtx x1, machine_mode i1, machine_mode i2)
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
  x5 = XEXP (x4, 0);
  if (GET_MODE (x5) != i2
      || !nonimmediate_operand (operands[1], i2)
      || !nonimm_or_0_operand (operands[3], i1)
      || !register_operand (operands[2], i1))
    return -1;
  return 0;
}

int
pattern1595 (rtx x1, machine_mode i1)
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
      || !nonimmediate_operand (operands[2], i1))
    return -1;
  x5 = XEXP (x3, 2);
  if (GET_MODE (x5) != i1
      || !nonimmediate_operand (operands[3], i1)
      || !const0_operand (operands[4], i1)
      || !register_operand (operands[5], E_QImode))
    return -1;
  return 0;
}

int
pattern1607 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i2)
      || GET_MODE (x1) != i2
      || !vsib_mem_operator (operands[5], i1))
    return -1;
  switch (GET_MODE (operands[6]))
    {
    case E_HImode:
      x2 = XVECEXP (x1, 0, 2);
      x3 = XEXP (x2, 0);
      return pattern1606 (x3, 
E_V16SImode, 
E_HImode); /* [-1, 1] */

    case E_QImode:
      x2 = XVECEXP (x1, 0, 2);
      x3 = XEXP (x2, 0);
      res = pattern1606 (x3, 
E_V8DImode, 
E_QImode);
      if (res >= 0)
        return res + 2; /* [2, 3] */
      return -1;

    default:
      return -1;
    }
}

int
pattern1618 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 1);
  x3 = XEXP (x2, 1);
  x4 = XEXP (x3, 1);
  if (x4 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
    return -1;
  x5 = XEXP (x3, 0);
  if (!rtx_equal_p (x5, operands[1]))
    return -1;
  x6 = XVECEXP (x1, 0, 0);
  x7 = XEXP (x6, 1);
  x8 = XVECEXP (x7, 0, 0);
  switch (GET_MODE (x8))
    {
    case E_SImode:
      if (!nonimmediate_operand (operands[1], E_SImode)
          || !register_operand (operands[0], E_SImode)
          || GET_MODE (x3) != E_SImode)
        return -1;
      return 0;

    case E_DImode:
      if (!nonimmediate_operand (operands[1], E_DImode)
          || !register_operand (operands[0], E_DImode)
          || GET_MODE (x3) != E_DImode)
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern1634 (rtx x1, machine_mode i1, machine_mode i2)
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
      || !register_operand (operands[1], i2)
      || !register_operand (operands[2], i2)
      || !nonimmediate_operand (operands[3], i1))
    return -1;
  return 0;
}

int
pattern1643 (rtx x1, machine_mode i1, machine_mode i2)
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
  x4 = XVECEXP (x3, 0, 2);
  if (GET_MODE (x4) != i1
      || !register_operand (operands[3], i1)
      || !const0_operand (operands[4], i1)
      || !register_operand (operands[5], i2))
    return -1;
  return 0;
}

int
pattern1655 (rtx x1, machine_mode i1, machine_mode i2)
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
      return pattern1654 (
E_SImode); /* [-1, 1] */

    case E_DImode:
      res = pattern1654 (
E_DImode);
      if (res >= 0)
        return res + 2; /* [2, 3] */
      return -1;

    default:
      return -1;
    }
}

int
pattern1669 (rtx x1, machine_mode i1, machine_mode i2, machine_mode i3)
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
      || !nonimmediate_operand (operands[3], i2)
      || !const0_operand (operands[5], i1)
      || !register_operand (operands[6], i3))
    return -1;
  return 0;
}

int
pattern1681 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) != SUBREG
      || maybe_ne (SUBREG_BYTE (x3), 0)
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
      return pattern1044 (x1); /* [-1, 5] */

    default:
      return -1;
    }
}

int
pattern1692 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  x5 = XEXP (x4, 0);
  operands[1] = x5;
  x6 = XEXP (x3, 2);
  if (GET_MODE (x6) != i1
      || !nonimmediate_operand (operands[3], i1))
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
pattern1699 (machine_mode i1)
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

    case E_V2DImode:
      if (!register_operand (operands[3], E_V2DImode))
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern1706 ()
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!const_0_to_3_operand (operands[2], E_VOIDmode)
      || !const_0_to_3_operand (operands[3], E_VOIDmode)
      || !const_0_to_3_operand (operands[4], E_VOIDmode)
      || !const_0_to_3_operand (operands[5], E_VOIDmode)
      || !const_4_to_7_operand (operands[6], E_VOIDmode)
      || !const_4_to_7_operand (operands[7], E_VOIDmode)
      || !const_4_to_7_operand (operands[8], E_VOIDmode)
      || !const_4_to_7_operand (operands[9], E_VOIDmode))
    return -1;
  return 0;
}

int
pattern1717 (rtx x1, machine_mode i1, machine_mode i2)
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
      return pattern1716 (
E_SImode); /* [-1, 1] */

    case E_DImode:
      res = pattern1716 (
E_DImode);
      if (res >= 0)
        return res + 2; /* [2, 3] */
      return -1;

    default:
      return -1;
    }
}

int
pattern1729 (rtx x1, machine_mode i1)
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
      || !nonimm_or_0_operand (operands[4], i1)
      || !register_operand (operands[1], i1))
    return -1;
  return 0;
}

int
pattern1735 (machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!vsib_address_operand (operands[0], i1))
    return -1;
  switch (GET_MODE (operands[2]))
    {
    case E_V8SImode:
      if (!register_operand (operands[2], E_V8SImode)
          || !register_operand (operands[3], E_V8SFmode))
        return -1;
      return 0;

    case E_V4DImode:
      if (!register_operand (operands[2], E_V4DImode)
          || !register_operand (operands[3], E_V4SFmode))
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern1743 (machine_mode i1)
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
pattern1751 (rtx x1, machine_mode i1, machine_mode i2)
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
      || !nonimm_or_0_operand (operands[11], i1))
    return -1;
  return 0;
}

int
pattern1760 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[1], i1))
    return -1;
  switch (GET_MODE (x1))
    {
    case E_HImode:
      if (!register_operand (operands[2], E_HImode))
        return -1;
      return 0;

    case E_SImode:
      if (!register_operand (operands[2], E_SImode))
        return -1;
      return 1;

    case E_DImode:
      if (!register_operand (operands[2], E_DImode))
        return -1;
      return 2;

    default:
      return -1;
    }
}

int
pattern1769 (machine_mode i1)
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

    case E_V2DImode:
      if (!register_operand (operands[3], E_V2DImode))
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern1777 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  if (GET_CODE (x4) != REG
      || REGNO (x4) != 17
      || GET_MODE (x4) != E_CCZmode)
    return -1;
  x5 = XEXP (x3, 1);
  if (x5 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
    return -1;
  x6 = XEXP (x2, 2);
  if (GET_CODE (x6) != PC)
    return -1;
  x7 = XEXP (x1, 0);
  if (GET_CODE (x7) != PC)
    return -1;
  return 0;
}

int
pattern1787 (rtx x1, machine_mode i1, machine_mode i2)
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
      return pattern1786 (
E_SImode); /* [-1, 1] */

    case E_DImode:
      res = pattern1786 (
E_DImode);
      if (res >= 0)
        return res + 2; /* [2, 3] */
      return -1;

    default:
      return -1;
    }
}

int
pattern1798 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) != COMPARE)
    return -1;
  x3 = XEXP (x2, 1);
  if (x3 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
    return -1;
  x4 = XEXP (x1, 0);
  if (GET_CODE (x4) != REG
      || REGNO (x4) != 17)
    return -1;
  x5 = XEXP (x2, 0);
  if (!rtx_equal_p (x5, operands[0]))
    return -1;
  return 0;
}

int
pattern1805 ()
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!const_0_to_3_operand (operands[2], E_VOIDmode)
      || !const_0_to_3_operand (operands[3], E_VOIDmode)
      || !const_0_to_3_operand (operands[4], E_VOIDmode)
      || !const_0_to_3_operand (operands[5], E_VOIDmode)
      || !const_4_to_7_operand (operands[6], E_VOIDmode)
      || !const_4_to_7_operand (operands[7], E_VOIDmode)
      || !const_4_to_7_operand (operands[8], E_VOIDmode)
      || !const_4_to_7_operand (operands[9], E_VOIDmode))
    return -1;
  return 0;
}

int
pattern1813 (rtx x1, rtx_code i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12, x13, x14, x15, x16, x17;
  rtx x18, x19, x20, x21, x22, x23, x24, x25;
  rtx x26, x27, x28, x29, x30, x31, x32, x33;
  rtx x34, x35, x36, x37, x38, x39, x40, x41;
  rtx x42, x43, x44, x45, x46, x47, x48, x49;
  rtx x50, x51, x52, x53, x54, x55;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  x5 = XEXP (x4, 0);
  if (GET_CODE (x5) != VEC_SELECT
      || GET_MODE (x5) != E_V2QImode)
    return -1;
  x6 = XEXP (x5, 1);
  if (GET_CODE (x6) != PARALLEL
      || XVECLEN (x6, 0) != 2)
    return -1;
  x7 = XVECEXP (x6, 0, 0);
  if (x7 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
    return -1;
  x8 = XVECEXP (x6, 0, 1);
  if (x8 != const_int_rtx[MAX_SAVED_CONST_INT + 8])
    return -1;
  x9 = XEXP (x3, 1);
  if (GET_CODE (x9) != i1)
    return -1;
  x10 = XEXP (x9, 0);
  if (GET_CODE (x10) != VEC_SELECT
      || GET_MODE (x10) != E_V2QImode)
    return -1;
  x11 = XEXP (x10, 1);
  if (GET_CODE (x11) != PARALLEL
      || XVECLEN (x11, 0) != 2)
    return -1;
  x12 = XVECEXP (x11, 0, 0);
  if (x12 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
    return -1;
  x13 = XVECEXP (x11, 0, 1);
  if (x13 != const_int_rtx[MAX_SAVED_CONST_INT + 9])
    return -1;
  x14 = XEXP (x2, 1);
  x15 = XEXP (x14, 0);
  if (GET_CODE (x15) != i1)
    return -1;
  x16 = XEXP (x15, 0);
  if (GET_CODE (x16) != VEC_SELECT
      || GET_MODE (x16) != E_V2QImode)
    return -1;
  x17 = XEXP (x16, 1);
  if (GET_CODE (x17) != PARALLEL
      || XVECLEN (x17, 0) != 2)
    return -1;
  x18 = XVECEXP (x17, 0, 0);
  if (x18 != const_int_rtx[MAX_SAVED_CONST_INT + 2])
    return -1;
  x19 = XVECEXP (x17, 0, 1);
  if (x19 != const_int_rtx[MAX_SAVED_CONST_INT + 10])
    return -1;
  x20 = XEXP (x14, 1);
  if (GET_CODE (x20) != i1)
    return -1;
  x21 = XEXP (x20, 0);
  if (GET_CODE (x21) != VEC_SELECT
      || GET_MODE (x21) != E_V2QImode)
    return -1;
  x22 = XEXP (x21, 1);
  if (GET_CODE (x22) != PARALLEL
      || XVECLEN (x22, 0) != 2)
    return -1;
  x23 = XVECEXP (x22, 0, 0);
  if (x23 != const_int_rtx[MAX_SAVED_CONST_INT + 3])
    return -1;
  x24 = XVECEXP (x22, 0, 1);
  if (x24 != const_int_rtx[MAX_SAVED_CONST_INT + 11])
    return -1;
  x25 = XEXP (x1, 1);
  x26 = XEXP (x25, 0);
  x27 = XEXP (x26, 0);
  if (GET_CODE (x27) != i1)
    return -1;
  x28 = XEXP (x27, 0);
  if (GET_CODE (x28) != VEC_SELECT
      || GET_MODE (x28) != E_V2QImode)
    return -1;
  x29 = XEXP (x28, 1);
  if (GET_CODE (x29) != PARALLEL
      || XVECLEN (x29, 0) != 2)
    return -1;
  x30 = XVECEXP (x29, 0, 0);
  if (x30 != const_int_rtx[MAX_SAVED_CONST_INT + 4])
    return -1;
  x31 = XVECEXP (x29, 0, 1);
  if (x31 != const_int_rtx[MAX_SAVED_CONST_INT + 12])
    return -1;
  x32 = XEXP (x26, 1);
  if (GET_CODE (x32) != i1)
    return -1;
  x33 = XEXP (x32, 0);
  if (GET_CODE (x33) != VEC_SELECT
      || GET_MODE (x33) != E_V2QImode)
    return -1;
  x34 = XEXP (x33, 1);
  if (GET_CODE (x34) != PARALLEL
      || XVECLEN (x34, 0) != 2)
    return -1;
  x35 = XVECEXP (x34, 0, 0);
  if (x35 != const_int_rtx[MAX_SAVED_CONST_INT + 5])
    return -1;
  x36 = XVECEXP (x34, 0, 1);
  if (x36 != const_int_rtx[MAX_SAVED_CONST_INT + 13])
    return -1;
  x37 = XEXP (x25, 1);
  x38 = XEXP (x37, 0);
  if (GET_CODE (x38) != i1)
    return -1;
  x39 = XEXP (x38, 0);
  if (GET_CODE (x39) != VEC_SELECT
      || GET_MODE (x39) != E_V2QImode)
    return -1;
  x40 = XEXP (x39, 1);
  if (GET_CODE (x40) != PARALLEL
      || XVECLEN (x40, 0) != 2)
    return -1;
  x41 = XVECEXP (x40, 0, 0);
  if (x41 != const_int_rtx[MAX_SAVED_CONST_INT + 6])
    return -1;
  x42 = XVECEXP (x40, 0, 1);
  if (x42 != const_int_rtx[MAX_SAVED_CONST_INT + 14])
    return -1;
  x43 = XEXP (x37, 1);
  if (GET_CODE (x43) != i1)
    return -1;
  x44 = XEXP (x43, 0);
  if (GET_CODE (x44) != VEC_SELECT
      || GET_MODE (x44) != E_V2QImode)
    return -1;
  x45 = XEXP (x44, 1);
  if (GET_CODE (x45) != PARALLEL
      || XVECLEN (x45, 0) != 2)
    return -1;
  x46 = XVECEXP (x45, 0, 0);
  if (x46 != const_int_rtx[MAX_SAVED_CONST_INT + 7])
    return -1;
  x47 = XVECEXP (x45, 0, 1);
  if (x47 != const_int_rtx[MAX_SAVED_CONST_INT + 15])
    return -1;
  x48 = XEXP (x5, 0);
  operands[1] = x48;
  if (!nonimmediate_operand (operands[1], E_V16QImode))
    return -1;
  x49 = XEXP (x10, 0);
  if (!rtx_equal_p (x49, operands[1]))
    return -1;
  x50 = XEXP (x16, 0);
  if (!rtx_equal_p (x50, operands[1]))
    return -1;
  x51 = XEXP (x21, 0);
  if (!rtx_equal_p (x51, operands[1]))
    return -1;
  x52 = XEXP (x28, 0);
  if (!rtx_equal_p (x52, operands[1]))
    return -1;
  x53 = XEXP (x33, 0);
  if (!rtx_equal_p (x53, operands[1]))
    return -1;
  x54 = XEXP (x39, 0);
  if (!rtx_equal_p (x54, operands[1]))
    return -1;
  x55 = XEXP (x44, 0);
  if (!rtx_equal_p (x55, operands[1]))
    return -1;
  return 0;
}

int
pattern1868 (rtx x1, machine_mode i1, machine_mode i2)
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
      || !sext_operand (operands[2], i1)
      || pattern1867 (x1, 
i1, 
i2) != 0)
    return -1;
  return 0;
}

int
pattern1875 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11;
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
      || !ix86_carry_flag_operator (operands[4], i2)
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
pattern1885 (rtx x1)
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
recog_7 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12, x13, x14, x15, x16, x17;
  rtx x18, x19, x20, x21, x22, x23, x24, x25;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XVECEXP (x2, 0, 1);
  if (!const48_operand (x3, E_SImode))
    return -1;
  x4 = XVECEXP (x2, 0, 0);
  switch (XVECLEN (x4, 0))
    {
    case 3:
      if (XINT (x4, 1) != 59)
        return -1;
      x5 = XEXP (x1, 0);
      operands[0] = x5;
      x6 = XVECEXP (x4, 0, 0);
      operands[1] = x6;
      x7 = XVECEXP (x4, 0, 1);
      operands[2] = x7;
      x8 = XVECEXP (x4, 0, 2);
      operands[3] = x8;
      operands[4] = x3;
      switch (GET_MODE (operands[0]))
        {
        case E_HImode:
          if (!register_operand (operands[0], E_HImode)
              || GET_MODE (x2) != E_HImode
              || GET_MODE (x4) != E_HImode)
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
(TARGET_EVEX512))))
                return -1;
              return 3276; /* avx512f_cmpv16si3_round */

            case E_V16HFmode:
              if (!register_operand (operands[1], E_V16HFmode)
                  || !nonimmediate_operand (operands[2], E_V16HFmode)
                  || !const_0_to_31_operand (operands[3], E_SImode)
                  || !(
#line 286 "../../gcc/config/i386/subst.md"
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
(TARGET_AVX512FP16 && TARGET_AVX512VL))))
                return -1;
              return 3300; /* avx512vl_cmpv16hf3_round */

            case E_V16SFmode:
              if (!register_operand (operands[1], E_V16SFmode)
                  || !nonimmediate_operand (operands[2], E_V16SFmode)
                  || !const_0_to_31_operand (operands[3], E_SImode)
                  || !(
#line 286 "../../gcc/config/i386/subst.md"
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
(TARGET_EVEX512))))
                return -1;
              return 3306; /* avx512f_cmpv16sf3_round */

            default:
              return -1;
            }

        case E_QImode:
          if (!register_operand (operands[0], E_QImode)
              || GET_MODE (x2) != E_QImode
              || GET_MODE (x4) != E_QImode)
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
(TARGET_AVX512VL))))
                return -1;
              return 3280; /* avx512vl_cmpv8si3_round */

            case E_V8DImode:
              if (!register_operand (operands[1], E_V8DImode)
                  || !nonimmediate_operand (operands[2], E_V8DImode)
                  || !const_0_to_7_operand (operands[3], E_SImode)
                  || !(
#line 286 "../../gcc/config/i386/subst.md"
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
(TARGET_EVEX512))))
                return -1;
              return 3286; /* avx512f_cmpv8di3_round */

            case E_V4DImode:
              if (!register_operand (operands[1], E_V4DImode)
                  || !nonimmediate_operand (operands[2], E_V4DImode)
                  || !const_0_to_7_operand (operands[3], E_SImode)
                  || !(
#line 286 "../../gcc/config/i386/subst.md"
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
(TARGET_AVX512VL))))
                return -1;
              return 3290; /* avx512vl_cmpv4di3_round */

            case E_V8SFmode:
              if (!register_operand (operands[1], E_V8SFmode)
                  || !nonimmediate_operand (operands[2], E_V8SFmode)
                  || !const_0_to_31_operand (operands[3], E_SImode)
                  || !(
#line 286 "../../gcc/config/i386/subst.md"
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
(TARGET_AVX512VL))))
                return -1;
              return 3310; /* avx512vl_cmpv8sf3_round */

            case E_V8DFmode:
              if (!register_operand (operands[1], E_V8DFmode)
                  || !nonimmediate_operand (operands[2], E_V8DFmode)
                  || !const_0_to_31_operand (operands[3], E_SImode)
                  || !(
#line 286 "../../gcc/config/i386/subst.md"
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
(TARGET_EVEX512))))
                return -1;
              return 3316; /* avx512f_cmpv8df3_round */

            case E_V4DFmode:
              if (!register_operand (operands[1], E_V4DFmode)
                  || !nonimmediate_operand (operands[2], E_V4DFmode)
                  || !const_0_to_31_operand (operands[3], E_SImode)
                  || !(
#line 286 "../../gcc/config/i386/subst.md"
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
(TARGET_AVX512VL))))
                return -1;
              return 3320; /* avx512vl_cmpv4df3_round */

            default:
              return -1;
            }

        default:
          return -1;
        }

    case 2:
      if (XINT (x4, 1) != 61
          || GET_MODE (x4) != E_CCFPmode
          || pattern846 (x4) != 0
          || pattern44 (x1, 
E_CCFPmode) != 0)
        return -1;
      x6 = XVECEXP (x4, 0, 0);
      x9 = XEXP (x6, 0);
      operands[0] = x9;
      x7 = XVECEXP (x4, 0, 1);
      x10 = XEXP (x7, 0);
      operands[1] = x10;
      operands[2] = x3;
      switch (GET_MODE (x6))
        {
        case E_HFmode:
          if (!register_operand (operands[0], E_V8HFmode)
              || GET_MODE (x7) != E_HFmode
              || !register_operand (operands[1], E_V8HFmode)
              || !(
#line 296 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 4854 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256) && 
#line 1355 "../../gcc/config/i386/i386.md"
(TARGET_AVX512FP16))))
            return -1;
          return 3665; /* avx10_2_comxhf_round */

        case E_SFmode:
          if (!register_operand (operands[0], E_V4SFmode)
              || GET_MODE (x7) != E_SFmode
              || !register_operand (operands[1], E_V4SFmode)
              || !(
#line 296 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 4854 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256)))
            return -1;
          return 3669; /* avx10_2_comxsf_round */

        case E_DFmode:
          if (!register_operand (operands[0], E_V2DFmode)
              || GET_MODE (x7) != E_DFmode
              || !register_operand (operands[1], E_V2DFmode)
              || !(
#line 296 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 4854 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256)))
            return -1;
          return 3673; /* avx10_2_comxdf_round */

        default:
          return -1;
        }

    case 1:
      if (XINT (x4, 1) != 26
          || GET_MODE (x4) != E_CCFPmode
          || pattern44 (x1, 
E_CCFPmode) != 0)
        return -1;
      x6 = XVECEXP (x4, 0, 0);
      if (GET_MODE (x6) != E_CCFPmode)
        return -1;
      operands[2] = x3;
      switch (GET_CODE (x6))
        {
        case UNSPEC:
          if (XVECLEN (x6, 0) != 2
              || XINT (x6, 1) != 61)
            return -1;
          x11 = XVECEXP (x6, 0, 0);
          if (GET_CODE (x11) != VEC_SELECT)
            return -1;
          x12 = XEXP (x11, 1);
          if (GET_CODE (x12) != PARALLEL
              || XVECLEN (x12, 0) != 1)
            return -1;
          x13 = XVECEXP (x12, 0, 0);
          if (x13 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
            return -1;
          x14 = XVECEXP (x6, 0, 1);
          if (GET_CODE (x14) != VEC_SELECT)
            return -1;
          x15 = XEXP (x14, 1);
          if (GET_CODE (x15) != PARALLEL
              || XVECLEN (x15, 0) != 1)
            return -1;
          x16 = XVECEXP (x15, 0, 0);
          if (x16 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
            return -1;
          x17 = XEXP (x11, 0);
          operands[0] = x17;
          x18 = XEXP (x14, 0);
          operands[1] = x18;
          switch (GET_MODE (x11))
            {
            case E_HFmode:
              if (!register_operand (operands[0], E_V8HFmode)
                  || GET_MODE (x14) != E_HFmode
                  || !register_operand (operands[1], E_V8HFmode)
                  || !(
#line 296 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 4854 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256) && 
#line 1355 "../../gcc/config/i386/i386.md"
(TARGET_AVX512FP16))))
                return -1;
              return 3667; /* avx10_2_ucomxhf_round */

            case E_SFmode:
              if (!register_operand (operands[0], E_V4SFmode)
                  || GET_MODE (x14) != E_SFmode
                  || !register_operand (operands[1], E_V4SFmode)
                  || !(
#line 296 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 4854 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256)))
                return -1;
              return 3671; /* avx10_2_ucomxsf_round */

            case E_DFmode:
              if (!register_operand (operands[0], E_V2DFmode)
                  || GET_MODE (x14) != E_DFmode
                  || !register_operand (operands[1], E_V2DFmode)
                  || !(
#line 296 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 4854 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256)))
                return -1;
              return 3675; /* avx10_2_ucomxdf_round */

            default:
              return -1;
            }

        case COMPARE:
          x9 = XEXP (x6, 0);
          if (GET_CODE (x9) != VEC_SELECT)
            return -1;
          x19 = XEXP (x9, 1);
          if (GET_CODE (x19) != PARALLEL
              || XVECLEN (x19, 0) != 1)
            return -1;
          x20 = XVECEXP (x19, 0, 0);
          if (x20 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
            return -1;
          x21 = XEXP (x6, 1);
          if (GET_CODE (x21) != VEC_SELECT)
            return -1;
          x22 = XEXP (x21, 1);
          if (GET_CODE (x22) != PARALLEL
              || XVECLEN (x22, 0) != 1)
            return -1;
          x23 = XVECEXP (x22, 0, 0);
          if (x23 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
            return -1;
          x24 = XEXP (x9, 0);
          operands[0] = x24;
          x25 = XEXP (x21, 0);
          operands[1] = x25;
          switch (GET_MODE (x9))
            {
            case E_HFmode:
              if (!register_operand (operands[0], E_V8HFmode)
                  || GET_MODE (x21) != E_HFmode
                  || !register_operand (operands[1], E_V8HFmode)
                  || !(
#line 296 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 4869 "../../gcc/config/i386/sse.md"
(SSE_FLOAT_MODE_P (HFmode) || HFmode == E_HFmode) && 
#line 1355 "../../gcc/config/i386/i386.md"
(TARGET_AVX512FP16))))
                return -1;
              return 3679; /* avx512fp16_ucomi_round */

            case E_SFmode:
              if (!register_operand (operands[0], E_V4SFmode)
                  || GET_MODE (x21) != E_SFmode
                  || !register_operand (operands[1], E_V4SFmode)
                  || !(
#line 296 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 4869 "../../gcc/config/i386/sse.md"
(SSE_FLOAT_MODE_P (SFmode) || SFmode == E_HFmode)))
                return -1;
              return 3683; /* sse_ucomi_round */

            case E_DFmode:
              if (!register_operand (operands[0], E_V2DFmode)
                  || GET_MODE (x21) != E_DFmode
                  || !register_operand (operands[1], E_V2DFmode)
                  || !(
#line 296 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 4869 "../../gcc/config/i386/sse.md"
(SSE_FLOAT_MODE_P (DFmode) || DFmode == E_HFmode)))
                return -1;
              return 3687; /* sse2_ucomi_round */

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
recog_22 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
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
      return 1128; /* *lshrti3_doubleword_mask_1 */

    case 1:
      x2 = XEXP (x1, 1);
      x3 = XEXP (x2, 1);
      switch (GET_CODE (x3))
        {
        case CONST_INT:
          switch (pattern253 (x1))
            {
            case 0:
              return 137; /* *insvqi_3 */

            case 1:
              return 139; /* *insvqi_3 */

            case 2:
              if (
#line 1164 "../../gcc/config/i386/i386.md"
(TARGET_64BIT))
                return 141; /* *insvqi_3 */
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
              return 1124; /* *lshrti3_doubleword_mask */
            }
          break;

        default:
          break;
        }
      operands[2] = x3;
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
              return 1132; /* lshrti3_doubleword */

            case E_QImode:
              if (pattern624 (x2, 
E_QImode) != 0)
                return -1;
              if (
#line 17561 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (LSHIFTRT, QImode, operands, TARGET_APX_NDD)
   && TARGET_APX_NF))
                return 1212; /* *lshrqi3_1_nf */
              if (pnum_clobbers == NULL
                  || !
#line 17561 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (LSHIFTRT, QImode, operands, TARGET_APX_NDD)
   && true))
                return -1;
              *pnum_clobbers = 1;
              return 1213; /* *lshrqi3_1 */

            case E_HImode:
              if (pattern624 (x2, 
E_HImode) != 0)
                return -1;
              if (
#line 17599 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (LSHIFTRT, HImode, operands, TARGET_APX_NDD)
   && TARGET_APX_NF))
                return 1214; /* *lshrhi3_1_nf */
              if (pnum_clobbers == NULL
                  || !
#line 17599 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (LSHIFTRT, HImode, operands, TARGET_APX_NDD)
   && true))
                return -1;
              *pnum_clobbers = 1;
              return 1215; /* *lshrhi3_1 */

            case E_V4HImode:
              if (pattern738 (x2, 
E_V4HImode, 
E_DImode) != 0
                  || !
#line 3891 "../../gcc/config/i386/mmx.md"
(TARGET_MMX || TARGET_MMX_WITH_SSE))
                return -1;
              return 2197; /* mmx_lshrv4hi3 */

            case E_V2SImode:
              if (pattern738 (x2, 
E_V2SImode, 
E_DImode) != 0
                  || !
#line 3891 "../../gcc/config/i386/mmx.md"
(TARGET_MMX || TARGET_MMX_WITH_SSE))
                return -1;
              return 2199; /* mmx_lshrv2si3 */

            case E_V1DImode:
              if (pattern738 (x2, 
E_V1DImode, 
E_DImode) != 0
                  || !
#line 3891 "../../gcc/config/i386/mmx.md"
(TARGET_MMX || TARGET_MMX_WITH_SSE))
                return -1;
              return 2201; /* mmx_lshrv1di3 */

            case E_V1SImode:
              if (pattern738 (x2, 
E_V1SImode, 
E_DImode) != 0
                  || !
#line 3928 "../../gcc/config/i386/mmx.md"
(TARGET_SSE2))
                return -1;
              return 2203; /* mmx_lshrv1si3 */

            case E_V2HImode:
              if (pattern738 (x2, 
E_V2HImode, 
E_DImode) != 0
                  || !
#line 3945 "../../gcc/config/i386/mmx.md"
(TARGET_SSE2))
                return -1;
              return 2205; /* lshrv2hi3 */

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
              return 2209; /* lshrv2qi3 */

            default:
              return -1;
            }

        case 1:
          if (!
#line 17638 "../../gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)))
            return -1;
          *pnum_clobbers = 1;
          return 1216; /* *lshrqi3_1_slp */

        case 2:
          if (!
#line 17638 "../../gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)))
            return -1;
          *pnum_clobbers = 1;
          return 1218; /* *lshrhi3_1_slp */

        default:
          return -1;
        }

    default:
      return -1;
    }
}

 int
recog_27 (rtx x1 ATTRIBUTE_UNUSED,
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
    case CONST_INT:
    case CONST:
    case REG:
    case SUBREG:
    case MEM:
    case LABEL_REF:
    case SYMBOL_REF:
      operands[1] = x4;
      switch (GET_MODE (operands[0]))
        {
        case E_TImode:
          if (!nonimmediate_operand (operands[0], E_TImode)
              || GET_MODE (x3) != E_TImode
              || !nonimmediate_operand (operands[1], E_DImode)
              || !
#line 4660 "../../gcc/config/i386/i386.md"
(TARGET_64BIT))
            return -1;
          return 174; /* zero_extendditi2 */

        case E_DImode:
          if (GET_MODE (x3) != E_DImode)
            return -1;
          if (nonimmediate_operand (operands[0], E_DImode)
              && x86_64_zext_operand (operands[1], E_SImode))
            return 175; /* *zero_extendsidi2 */
          if (!register_operand (operands[0], E_DImode))
            return -1;
          switch (GET_MODE (operands[1]))
            {
            case E_QImode:
              if (!nonimmediate_operand (operands[1], E_QImode)
                  || !
#line 4812 "../../gcc/config/i386/i386.md"
(TARGET_64BIT))
                return -1;
              return 176; /* zero_extendqidi2 */

            case E_HImode:
              if (!nonimmediate_operand (operands[1], E_HImode)
                  || !
#line 4812 "../../gcc/config/i386/i386.md"
(TARGET_64BIT))
                return -1;
              return 177; /* zero_extendhidi2 */

            default:
              return -1;
            }

        case E_SImode:
          if (!register_operand (operands[0], E_SImode)
              || GET_MODE (x3) != E_SImode)
            return -1;
          switch (GET_MODE (operands[1]))
            {
            case E_QImode:
              if (!nonimmediate_operand (operands[1], E_QImode))
                return -1;
              if (pnum_clobbers != NULL
                  && 
#line 4839 "../../gcc/config/i386/i386.md"
(TARGET_ZERO_EXTEND_WITH_AND && optimize_function_for_speed_p (cfun)))
                {
                  *pnum_clobbers = 1;
                  return 178; /* zero_extendqisi2_and */
                }
              if (!
#line 4867 "../../gcc/config/i386/i386.md"
(!(TARGET_ZERO_EXTEND_WITH_AND && optimize_function_for_speed_p (cfun))))
                return -1;
              return 180; /* *zero_extendqisi2 */

            case E_HImode:
              if (!nonimmediate_operand (operands[1], E_HImode))
                return -1;
              if (pnum_clobbers != NULL
                  && 
#line 4839 "../../gcc/config/i386/i386.md"
(TARGET_ZERO_EXTEND_WITH_AND && optimize_function_for_speed_p (cfun)))
                {
                  *pnum_clobbers = 1;
                  return 179; /* zero_extendhisi2_and */
                }
              if (!
#line 4867 "../../gcc/config/i386/i386.md"
(!(TARGET_ZERO_EXTEND_WITH_AND && optimize_function_for_speed_p (cfun))))
                return -1;
              return 181; /* *zero_extendhisi2 */

            default:
              return -1;
            }

        case E_HImode:
          if (!register_operand (operands[0], E_HImode)
              || GET_MODE (x3) != E_HImode
              || !nonimmediate_operand (operands[1], E_QImode))
            return -1;
          if (pnum_clobbers != NULL
              && 
#line 4893 "../../gcc/config/i386/i386.md"
(TARGET_ZERO_EXTEND_WITH_AND && optimize_function_for_speed_p (cfun)))
            {
              *pnum_clobbers = 1;
              return 182; /* zero_extendqihi2_and */
            }
          if (!
#line 4921 "../../gcc/config/i386/i386.md"
(!(TARGET_ZERO_EXTEND_WITH_AND && optimize_function_for_speed_p (cfun))))
            return -1;
          return 183; /* *zero_extendqihi2 */

        default:
          return -1;
        }

    case SIGN_EXTEND:
      if (GET_MODE (x4) != E_SImode
          || !register_operand (operands[0], E_DImode)
          || GET_MODE (x3) != E_DImode)
        return -1;
      x5 = XEXP (x4, 0);
      operands[1] = x5;
      switch (GET_MODE (operands[1]))
        {
        case E_HImode:
          if (!nonimmediate_operand (operands[1], E_HImode)
              || !
#line 5170 "../../gcc/config/i386/i386.md"
(TARGET_64BIT))
            return -1;
          return 190; /* *extendhisi2_zext */

        case E_QImode:
          if (!nonimmediate_operand (operands[1], E_QImode)
              || !
#line 5205 "../../gcc/config/i386/i386.md"
(TARGET_64BIT))
            return -1;
          return 192; /* *extendqisi2_zext */

        default:
          return -1;
        }

    case UNSIGNED_FIX:
      if (GET_MODE (x4) != E_SImode
          || !register_operand (operands[0], E_DImode)
          || GET_MODE (x3) != E_DImode)
        return -1;
      x5 = XEXP (x4, 0);
      operands[1] = x5;
      switch (GET_MODE (operands[1]))
        {
        case E_HFmode:
          if (!nonimmediate_operand (operands[1], E_HFmode)
              || !
#line 5887 "../../gcc/config/i386/i386.md"
(TARGET_64BIT && TARGET_AVX512FP16))
            return -1;
          return 220; /* *fixuns_trunchfsi2zext */

        case E_SFmode:
          if (!nonimmediate_operand (operands[1], E_SFmode)
              || !
#line 5898 "../../gcc/config/i386/i386.md"
(TARGET_64BIT && TARGET_AVX512F && TARGET_SSE_MATH))
            return -1;
          return 221; /* *fixuns_truncsfsi2_avx512f_zext */

        case E_DFmode:
          if (!nonimmediate_operand (operands[1], E_DFmode)
              || !
#line 5898 "../../gcc/config/i386/i386.md"
(TARGET_64BIT && TARGET_AVX512F && TARGET_SSE_MATH))
            return -1;
          return 222; /* *fixuns_truncdfsi2_avx512f_zext */

        default:
          return -1;
        }

    case PLUS:
      if (GET_MODE (x4) != E_QImode
          || !register_operand (operands[0], E_HImode)
          || GET_MODE (x3) != E_HImode)
        return -1;
      x5 = XEXP (x4, 0);
      switch (GET_CODE (x5))
        {
        case REG:
        case SUBREG:
        case MEM:
          operands[1] = x5;
          if (!nonimmediate_operand (operands[1], E_QImode))
            return -1;
          x6 = XEXP (x4, 1);
          operands[2] = x6;
          if (!general_operand (operands[2], E_QImode))
            return -1;
          if (
#line 6677 "../../gcc/config/i386/i386.md"
(TARGET_APX_NDD && TARGET_APX_NF
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
            return 286; /* *addqi_1_zexthi_nf */
          if (pnum_clobbers == NULL
              || !
#line 6677 "../../gcc/config/i386/i386.md"
(TARGET_APX_NDD && true
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
            return -1;
          *pnum_clobbers = 1;
          return 287; /* *addqi_1_zexthi */

        case PLUS:
          if (pnum_clobbers == NULL
              || GET_MODE (x5) != E_QImode)
            return -1;
          x7 = XEXP (x5, 0);
          if (!ix86_carry_flag_operator (x7, E_QImode))
            return -1;
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
          if (!nonimmediate_operand (operands[1], E_QImode))
            return -1;
          x6 = XEXP (x4, 1);
          operands[2] = x6;
          if (!x86_64_general_operand (operands[2], E_QImode)
              || !
#line 8895 "../../gcc/config/i386/i386.md"
(TARGET_APX_NDD
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
            return -1;
          *pnum_clobbers = 1;
          return 465; /* *addqi3_carry_zexthi */

        case LTU:
        case UNLT:
          if (pnum_clobbers == NULL)
            return -1;
          operands[2] = x5;
          if (!ix86_carry_flag_operator (operands[2], E_QImode)
              || pattern1069 (x4) != 0
              || !
#line 8952 "../../gcc/config/i386/i386.md"
(TARGET_APX_NDD))
            return -1;
          *pnum_clobbers = 1;
          return 471; /* *addqi3_carry_zexthi_0 */

        case GE:
        case GEU:
          if (pnum_clobbers == NULL)
            return -1;
          operands[2] = x5;
          if (!ix86_carry_flag_unset_operator (operands[2], E_QImode)
              || pattern1069 (x4) != 0
              || !
#line 8997 "../../gcc/config/i386/i386.md"
(TARGET_APX_NDD))
            return -1;
          *pnum_clobbers = 1;
          return 477; /* *addqi3_carry_zexthi_0r */

        default:
          return -1;
        }

    case MINUS:
      if (GET_MODE (x4) != E_QImode
          || !register_operand (operands[0], E_HImode)
          || GET_MODE (x3) != E_HImode)
        return -1;
      x6 = XEXP (x4, 1);
      operands[2] = x6;
      x5 = XEXP (x4, 0);
      switch (GET_CODE (x5))
        {
        case REG:
        case SUBREG:
        case MEM:
          operands[1] = x5;
          if (!nonimmediate_operand (operands[1], E_QImode))
            return -1;
          switch (GET_CODE (operands[2]))
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
              if (!x86_64_general_operand (operands[2], E_QImode))
                return -1;
              if (
#line 8144 "../../gcc/config/i386/i386.md"
(TARGET_APX_NDD && TARGET_APX_NF
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
                return 392; /* *subqi_1_zexthi_nf */
              if (pnum_clobbers == NULL
                  || !
#line 8144 "../../gcc/config/i386/i386.md"
(TARGET_APX_NDD && true
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
                return -1;
              *pnum_clobbers = 1;
              return 393; /* *subqi_1_zexthi */

            case LTU:
            case UNLT:
              if (pnum_clobbers == NULL
                  || !ix86_carry_flag_operator (operands[2], E_QImode))
                return -1;
              x11 = XEXP (x6, 0);
              if (GET_CODE (x11) != REG
                  || REGNO (x11) != 17)
                return -1;
              x12 = XEXP (x6, 1);
              if (x12 != const_int_rtx[MAX_SAVED_CONST_INT + 0]
                  || !
#line 9440 "../../gcc/config/i386/i386.md"
(TARGET_APX_NDD))
                return -1;
              *pnum_clobbers = 1;
              return 505; /* *subqi3_carry_zexthi_0 */

            case GE:
            case GEU:
              if (pnum_clobbers == NULL
                  || !ix86_carry_flag_unset_operator (operands[2], E_QImode))
                return -1;
              x11 = XEXP (x6, 0);
              if (GET_CODE (x11) != REG
                  || REGNO (x11) != 17)
                return -1;
              x12 = XEXP (x6, 1);
              if (x12 != const_int_rtx[MAX_SAVED_CONST_INT + 0]
                  || !
#line 9488 "../../gcc/config/i386/i386.md"
(TARGET_APX_NDD))
                return -1;
              *pnum_clobbers = 1;
              return 511; /* *subqi3_carry_zexthi_0r */

            default:
              return -1;
            }

        case MINUS:
          if (pnum_clobbers == NULL
              || GET_MODE (x5) != E_QImode)
            return -1;
          x10 = XEXP (x5, 1);
          if (!ix86_carry_flag_operator (x10, E_QImode))
            return -1;
          operands[3] = x10;
          x13 = XEXP (x10, 0);
          if (GET_CODE (x13) != REG
              || REGNO (x13) != 17)
            return -1;
          x14 = XEXP (x10, 1);
          if (x14 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
            return -1;
          x7 = XEXP (x5, 0);
          operands[1] = x7;
          if (!nonimmediate_operand (operands[1], E_QImode)
              || !x86_64_general_operand (operands[2], E_QImode)
              || !
#line 9380 "../../gcc/config/i386/i386.md"
(TARGET_APX_NDD
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
            return -1;
          *pnum_clobbers = 1;
          return 499; /* *subqi3_carry_zexthi */

        default:
          return -1;
        }

    case AND:
      if (!register_operand (operands[0], E_HImode)
          || GET_MODE (x3) != E_HImode)
        return -1;
      x5 = XEXP (x4, 0);
      switch (GET_CODE (x5))
        {
        case REG:
        case SUBREG:
        case MEM:
          operands[1] = x5;
          if (!nonimmediate_operand (operands[1], E_QImode)
              || GET_MODE (x4) != E_QImode)
            return -1;
          x6 = XEXP (x4, 1);
          operands[2] = x6;
          if (!x86_64_general_operand (operands[2], E_QImode))
            return -1;
          if (
#line 12626 "../../gcc/config/i386/i386.md"
(TARGET_APX_NDD && TARGET_APX_NF
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
            return 708; /* *andqi_1_zexthi_nf */
          if (pnum_clobbers == NULL
              || !
#line 12626 "../../gcc/config/i386/i386.md"
(TARGET_APX_NDD && true
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
            return -1;
          *pnum_clobbers = 1;
          return 709; /* *andqi_1_zexthi */

        case UNSPEC:
          if (XVECLEN (x5, 0) != 2)
            return -1;
          x15 = XVECEXP (x5, 0, 0);
          operands[1] = x15;
          x16 = XVECEXP (x5, 0, 1);
          operands[2] = x16;
          x6 = XEXP (x4, 1);
          operands[3] = x6;
          switch (XINT (x5, 1))
            {
            case 158:
              switch (pattern1080 (x4))
                {
                case 0:
                  if (!(
#line 19091 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW
   && (2
       > GET_MODE_SIZE (DImode))) && 
#line 505 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512)))
                    return -1;
                  return 8192; /* *avx512bw_testmv64qi3_zext_mask */

                case 1:
                  if (!(
#line 19091 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW
   && (2
       > GET_MODE_SIZE (SImode))) && 
#line 506 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL && TARGET_AVX512BW)))
                    return -1;
                  return 8195; /* *avx512vl_testmv32qi3_zext_mask */

                case 2:
                  if (!(
#line 19091 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW
   && (2
       > GET_MODE_SIZE (SImode))) && 
#line 508 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512)))
                    return -1;
                  return 8201; /* *avx512bw_testmv32hi3_zext_mask */

                case 3:
                  if (!(
#line 19091 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW
   && (2
       > GET_MODE_SIZE (HImode))) && 
#line 507 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL && TARGET_AVX512BW)))
                    return -1;
                  return 8198; /* *avx512vl_testmv16qi3_zext_mask */

                case 4:
                  if (!(
#line 19091 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW
   && (2
       > GET_MODE_SIZE (HImode))) && 
#line 509 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL && TARGET_AVX512BW)))
                    return -1;
                  return 8204; /* *avx512vl_testmv16hi3_zext_mask */

                case 5:
                  if (!(
#line 19091 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW
   && (2
       > GET_MODE_SIZE (HImode))) && 
#line 511 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                    return -1;
                  return 8210; /* *avx512f_testmv16si3_zext_mask */

                case 6:
                  if (!(
#line 19091 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW
   && (2
       > GET_MODE_SIZE (QImode))) && 
#line 510 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL && TARGET_AVX512BW)))
                    return -1;
                  return 8207; /* *avx512vl_testmv8hi3_zext_mask */

                case 7:
                  if (!(
#line 19091 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW
   && (2
       > GET_MODE_SIZE (QImode))) && 
#line 511 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                    return -1;
                  return 8213; /* *avx512vl_testmv8si3_zext_mask */

                case 8:
                  if (!(
#line 19091 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW
   && (2
       > GET_MODE_SIZE (QImode))) && 
#line 511 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                    return -1;
                  return 8216; /* *avx512vl_testmv4si3_zext_mask */

                case 9:
                  if (!(
#line 19091 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW
   && (2
       > GET_MODE_SIZE (QImode))) && 
#line 512 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                    return -1;
                  return 8219; /* *avx512f_testmv8di3_zext_mask */

                case 10:
                  if (!(
#line 19091 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW
   && (2
       > GET_MODE_SIZE (QImode))) && 
#line 512 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                    return -1;
                  return 8222; /* *avx512vl_testmv4di3_zext_mask */

                case 11:
                  if (!(
#line 19091 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW
   && (2
       > GET_MODE_SIZE (QImode))) && 
#line 512 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                    return -1;
                  return 8225; /* *avx512vl_testmv2di3_zext_mask */

                default:
                  return -1;
                }

            case 159:
              switch (pattern1080 (x4))
                {
                case 0:
                  if (!(
#line 19121 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW
   && (2
       > GET_MODE_SIZE (DImode))) && 
#line 505 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512)))
                    return -1;
                  return 8264; /* *avx512bw_testnmv64qi3_zext_mask */

                case 1:
                  if (!(
#line 19121 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW
   && (2
       > GET_MODE_SIZE (SImode))) && 
#line 506 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL && TARGET_AVX512BW)))
                    return -1;
                  return 8267; /* *avx512vl_testnmv32qi3_zext_mask */

                case 2:
                  if (!(
#line 19121 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW
   && (2
       > GET_MODE_SIZE (SImode))) && 
#line 508 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512)))
                    return -1;
                  return 8273; /* *avx512bw_testnmv32hi3_zext_mask */

                case 3:
                  if (!(
#line 19121 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW
   && (2
       > GET_MODE_SIZE (HImode))) && 
#line 507 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL && TARGET_AVX512BW)))
                    return -1;
                  return 8270; /* *avx512vl_testnmv16qi3_zext_mask */

                case 4:
                  if (!(
#line 19121 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW
   && (2
       > GET_MODE_SIZE (HImode))) && 
#line 509 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL && TARGET_AVX512BW)))
                    return -1;
                  return 8276; /* *avx512vl_testnmv16hi3_zext_mask */

                case 5:
                  if (!(
#line 19121 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW
   && (2
       > GET_MODE_SIZE (HImode))) && 
#line 511 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                    return -1;
                  return 8282; /* *avx512f_testnmv16si3_zext_mask */

                case 6:
                  if (!(
#line 19121 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW
   && (2
       > GET_MODE_SIZE (QImode))) && 
#line 510 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL && TARGET_AVX512BW)))
                    return -1;
                  return 8279; /* *avx512vl_testnmv8hi3_zext_mask */

                case 7:
                  if (!(
#line 19121 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW
   && (2
       > GET_MODE_SIZE (QImode))) && 
#line 511 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                    return -1;
                  return 8285; /* *avx512vl_testnmv8si3_zext_mask */

                case 8:
                  if (!(
#line 19121 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW
   && (2
       > GET_MODE_SIZE (QImode))) && 
#line 511 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                    return -1;
                  return 8288; /* *avx512vl_testnmv4si3_zext_mask */

                case 9:
                  if (!(
#line 19121 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW
   && (2
       > GET_MODE_SIZE (QImode))) && 
#line 512 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                    return -1;
                  return 8291; /* *avx512f_testnmv8di3_zext_mask */

                case 10:
                  if (!(
#line 19121 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW
   && (2
       > GET_MODE_SIZE (QImode))) && 
#line 512 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                    return -1;
                  return 8294; /* *avx512vl_testnmv4di3_zext_mask */

                case 11:
                  if (!(
#line 19121 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW
   && (2
       > GET_MODE_SIZE (QImode))) && 
#line 512 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                    return -1;
                  return 8297; /* *avx512vl_testnmv2di3_zext_mask */

                default:
                  return -1;
                }

            default:
              return -1;
            }

        default:
          return -1;
        }

    case IOR:
      if (pattern78 (x3) != 0)
        return -1;
      if (
#line 13715 "../../gcc/config/i386/i386.md"
(TARGET_APX_NDD && TARGET_APX_NF
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
        return 843; /* *iorqi_1_zexthi_nf */
      if (pnum_clobbers == NULL
          || !
#line 13715 "../../gcc/config/i386/i386.md"
(TARGET_APX_NDD && true
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
        return -1;
      *pnum_clobbers = 1;
      return 844; /* *iorqi_1_zexthi */

    case XOR:
      if (pattern78 (x3) != 0)
        return -1;
      if (
#line 13715 "../../gcc/config/i386/i386.md"
(TARGET_APX_NDD && TARGET_APX_NF
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
        return 845; /* *xorqi_1_zexthi_nf */
      if (pnum_clobbers == NULL
          || !
#line 13715 "../../gcc/config/i386/i386.md"
(TARGET_APX_NDD && true
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
        return -1;
      *pnum_clobbers = 1;
      return 846; /* *xorqi_1_zexthi */

    case NEG:
      if (pattern79 (x3) != 0)
        return -1;
      if (
#line 14360 "../../gcc/config/i386/i386.md"
(TARGET_APX_NDD && TARGET_APX_NF))
        return 962; /* *negqi_1_zexthi_nf */
      if (pnum_clobbers == NULL
          || !
#line 14360 "../../gcc/config/i386/i386.md"
(TARGET_APX_NDD && true))
        return -1;
      *pnum_clobbers = 1;
      return 963; /* *negqi_1_zexthi */

    case NOT:
      if (pattern79 (x3) != 0
          || !
#line 15002 "../../gcc/config/i386/i386.md"
(TARGET_APX_NDD))
        return -1;
      return 1035; /* *one_cmplqi2_1_zexthi */

    case ASHIFT:
      if (pattern80 (x3) != 0)
        return -1;
      if (
#line 16008 "../../gcc/config/i386/i386.md"
(TARGET_APX_NDD && TARGET_APX_NF))
        return 1093; /* *ashlqi3_1_zexthi_nf */
      if (pnum_clobbers == NULL
          || !
#line 16008 "../../gcc/config/i386/i386.md"
(TARGET_APX_NDD && true))
        return -1;
      *pnum_clobbers = 1;
      return 1094; /* *ashlqi3_1_zexthi */

    case LSHIFTRT:
      if (pattern80 (x3) != 0)
        return -1;
      if (
#line 17455 "../../gcc/config/i386/i386.md"
(TARGET_APX_NDD && TARGET_APX_NF))
        return 1186; /* *lshrqi3_1_zexthi_nf */
      if (pnum_clobbers == NULL
          || !
#line 17455 "../../gcc/config/i386/i386.md"
(TARGET_APX_NDD && true))
        return -1;
      *pnum_clobbers = 1;
      return 1187; /* *lshrqi3_1_zexthi */

    case ASHIFTRT:
      if (pattern80 (x3) != 0)
        return -1;
      if (
#line 17455 "../../gcc/config/i386/i386.md"
(TARGET_APX_NDD && TARGET_APX_NF))
        return 1188; /* *ashrqi3_1_zexthi_nf */
      if (pnum_clobbers == NULL
          || !
#line 17455 "../../gcc/config/i386/i386.md"
(TARGET_APX_NDD && true))
        return -1;
      *pnum_clobbers = 1;
      return 1189; /* *ashrqi3_1_zexthi */

    case ROTATE:
      if (pattern80 (x3) != 0)
        return -1;
      if (
#line 18570 "../../gcc/config/i386/i386.md"
(TARGET_APX_NDD && TARGET_APX_NF))
        return 1351; /* *rotlqi3_1_zexthi_nf */
      if (pnum_clobbers == NULL
          || !
#line 18570 "../../gcc/config/i386/i386.md"
(TARGET_APX_NDD && true))
        return -1;
      *pnum_clobbers = 1;
      return 1352; /* *rotlqi3_1_zexthi */

    case ROTATERT:
      if (pattern80 (x3) != 0)
        return -1;
      if (
#line 18570 "../../gcc/config/i386/i386.md"
(TARGET_APX_NDD && TARGET_APX_NF))
        return 1353; /* *rotrqi3_1_zexthi_nf */
      if (pnum_clobbers == NULL
          || !
#line 18570 "../../gcc/config/i386/i386.md"
(TARGET_APX_NDD && true))
        return -1;
      *pnum_clobbers = 1;
      return 1354; /* *rotrqi3_1_zexthi */

    case VEC_SELECT:
      x6 = XEXP (x4, 1);
      if (GET_CODE (x6) != PARALLEL)
        return -1;
      x5 = XEXP (x4, 0);
      operands[1] = x5;
      switch (XVECLEN (x6, 0))
        {
        case 4:
          if (pattern609 (x3) != 0
              || !
#line 5011 "../../gcc/config/i386/mmx.md"
(TARGET_SSE4_1 && TARGET_MMX_WITH_SSE))
            return -1;
          return 2299; /* sse4_1_zero_extendv4qiv4hi2 */

        case 2:
          switch (pattern610 (x3))
            {
            case 0:
              if (!
#line 5043 "../../gcc/config/i386/mmx.md"
(TARGET_SSE4_1 && TARGET_MMX_WITH_SSE))
                return -1;
              return 2301; /* sse4_1_zero_extendv2hiv2si2 */

            case 1:
              if (!
#line 5075 "../../gcc/config/i386/mmx.md"
(TARGET_SSE4_1 && TARGET_MMX_WITH_SSE))
                return -1;
              return 2303; /* sse4_1_zero_extendv2qiv2si2 */

            case 2:
              if (!
#line 5101 "../../gcc/config/i386/mmx.md"
(TARGET_SSE4_1))
                return -1;
              return 2305; /* sse4_1_zero_extendv2qiv2hi2 */

            default:
              return -1;
            }

        case 1:
          if (!register_operand (operands[0], E_HImode)
              || GET_MODE (x3) != E_HImode
              || GET_MODE (x4) != E_QImode)
            return -1;
          x17 = XVECEXP (x6, 0, 0);
          operands[2] = x17;
          switch (pattern985 ())
            {
            case 0:
              if (!
#line 5474 "../../gcc/config/i386/mmx.md"
(TARGET_SSE4_1 && TARGET_MMX_WITH_SSE))
                return -1;
              return 2321; /* *mmx_pextrb_zext */

            case 1:
              if (!
#line 6130 "../../gcc/config/i386/mmx.md"
(TARGET_SSE4_1))
                return -1;
              return 2359; /* *pextrb_zext */

            case 2:
              if (!
#line 21134 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1))
                return -1;
              return 8461; /* *vec_extractv16qi_zext */

            default:
              return -1;
            }

        default:
          return -1;
        }

    case UNSPEC:
      return recog_26 (x1, insn, pnum_clobbers);

    default:
      return -1;
    }
}

 int
recog_61 (rtx x1 ATTRIBUTE_UNUSED,
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
      operands[2] = x4;
      x5 = XEXP (x3, 2);
      if (GET_CODE (x5) != CONST_INT)
        return -1;
      operands[3] = x5;
      x6 = XEXP (x3, 1);
      operands[1] = x6;
      switch (GET_MODE (operands[0]))
        {
        case E_V2SFmode:
          if (register_operand (operands[0], E_V2SFmode)
              && GET_MODE (x3) == E_V2SFmode
              && register_operand (operands[2], E_V2SFmode)
              && register_operand (operands[1], E_V2SFmode)
              && const_0_to_3_operand (operands[3], E_SImode)
              && 
#line 1297 "../../gcc/config/i386/mmx.md"
(TARGET_SSE4_1 && TARGET_MMX_WITH_SSE))
            return 2068; /* *mmx_blendps */
          break;

        case E_V4HFmode:
          if (pattern860 (x3, 
E_V4HFmode) == 0
              && 
#line 5597 "../../gcc/config/i386/mmx.md"
(TARGET_SSE4_1 && TARGET_MMX_WITH_SSE))
            return 2330; /* *mmx_pblendw64 */
          break;

        case E_V4BFmode:
          if (pattern860 (x3, 
E_V4BFmode) == 0
              && 
#line 5597 "../../gcc/config/i386/mmx.md"
(TARGET_SSE4_1 && TARGET_MMX_WITH_SSE))
            return 2331; /* *mmx_pblendw64 */
          break;

        case E_V4HImode:
          if (pattern860 (x3, 
E_V4HImode) == 0
              && 
#line 5597 "../../gcc/config/i386/mmx.md"
(TARGET_SSE4_1 && TARGET_MMX_WITH_SSE))
            return 2332; /* *mmx_pblendw64 */
          break;

        case E_V2HFmode:
          if (pattern861 (x3, 
E_V2HFmode) == 0
              && 
#line 5615 "../../gcc/config/i386/mmx.md"
(TARGET_SSE4_1))
            return 2333; /* *mmx_pblendw32 */
          break;

        case E_V2BFmode:
          if (pattern861 (x3, 
E_V2BFmode) == 0
              && 
#line 5615 "../../gcc/config/i386/mmx.md"
(TARGET_SSE4_1))
            return 2334; /* *mmx_pblendw32 */
          break;

        case E_V2HImode:
          if (pattern861 (x3, 
E_V2HImode) == 0
              && 
#line 5615 "../../gcc/config/i386/mmx.md"
(TARGET_SSE4_1))
            return 2335; /* *mmx_pblendw32 */
          break;

        default:
          break;
        }
      if (XWINT (x5, 0) != 1L)
        return -1;
      operands[1] = x6;
      switch (GET_MODE (operands[0]))
        {
        case E_V2SFmode:
          if (pattern862 (x3, 
E_V2SFmode) != 0
              || !
#line 1741 "../../gcc/config/i386/mmx.md"
(TARGET_MMX_WITH_SSE))
            return -1;
          return 2084; /* *mmx_movss_v2sf */

        case E_V2SImode:
          if (pattern862 (x3, 
E_V2SImode) != 0
              || !
#line 1741 "../../gcc/config/i386/mmx.md"
(TARGET_MMX_WITH_SSE))
            return -1;
          return 2085; /* *mmx_movss_v2si */

        default:
          return -1;
        }

    case VEC_DUPLICATE:
      x7 = XEXP (x4, 0);
      operands[2] = x7;
      x6 = XEXP (x3, 1);
      operands[1] = x6;
      x5 = XEXP (x3, 2);
      operands[3] = x5;
      if (!const_int_operand (operands[3], E_SImode))
        return -1;
      switch (GET_MODE (operands[0]))
        {
        case E_V2SImode:
          if (pattern863 (x3, 
E_V2SImode, 
E_SImode) != 0
              || !
#line 5262 "../../gcc/config/i386/mmx.md"
(TARGET_SSE4_1 && TARGET_MMX_WITH_SSE
   && ((unsigned) exact_log2 (INTVAL (operands[3]))
       < GET_MODE_NUNITS (V2SImode))))
            return -1;
          return 2310; /* *mmx_pinsrd */

        case E_V4HFmode:
          if (pattern863 (x3, 
E_V4HFmode, 
E_HFmode) != 0
              || !
#line 5292 "../../gcc/config/i386/mmx.md"
((TARGET_MMX || TARGET_MMX_WITH_SSE)
   && (TARGET_SSE || TARGET_3DNOW_A)
   && ((unsigned) exact_log2 (INTVAL (operands[3]))
       < GET_MODE_NUNITS (V4HImode))))
            return -1;
          return 2311; /* *mmx_pinsrw */

        case E_V4BFmode:
          if (pattern863 (x3, 
E_V4BFmode, 
E_BFmode) != 0
              || !
#line 5292 "../../gcc/config/i386/mmx.md"
((TARGET_MMX || TARGET_MMX_WITH_SSE)
   && (TARGET_SSE || TARGET_3DNOW_A)
   && ((unsigned) exact_log2 (INTVAL (operands[3]))
       < GET_MODE_NUNITS (V4HImode))))
            return -1;
          return 2312; /* *mmx_pinsrw */

        case E_V4HImode:
          if (pattern863 (x3, 
E_V4HImode, 
E_HImode) != 0
              || !
#line 5292 "../../gcc/config/i386/mmx.md"
((TARGET_MMX || TARGET_MMX_WITH_SSE)
   && (TARGET_SSE || TARGET_3DNOW_A)
   && ((unsigned) exact_log2 (INTVAL (operands[3]))
       < GET_MODE_NUNITS (V4HImode))))
            return -1;
          return 2313; /* *mmx_pinsrw */

        case E_V8QImode:
          if (pattern863 (x3, 
E_V8QImode, 
E_QImode) != 0
              || !
#line 5347 "../../gcc/config/i386/mmx.md"
(TARGET_SSE4_1 && TARGET_MMX_WITH_SSE
   && ((unsigned) exact_log2 (INTVAL (operands[3]))
       < GET_MODE_NUNITS (V8QImode))))
            return -1;
          return 2314; /* *mmx_pinsrb */

        case E_V2HFmode:
          if (pattern863 (x3, 
E_V2HFmode, 
E_HFmode) != 0
              || !
#line 5960 "../../gcc/config/i386/mmx.md"
(TARGET_SSE2
   && ((unsigned) exact_log2 (INTVAL (operands[3]))
       < GET_MODE_NUNITS (V2HImode))))
            return -1;
          return 2349; /* *pinsrw */

        case E_V2BFmode:
          if (pattern863 (x3, 
E_V2BFmode, 
E_BFmode) != 0
              || !
#line 5960 "../../gcc/config/i386/mmx.md"
(TARGET_SSE2
   && ((unsigned) exact_log2 (INTVAL (operands[3]))
       < GET_MODE_NUNITS (V2HImode))))
            return -1;
          return 2350; /* *pinsrw */

        case E_V2HImode:
          if (pattern863 (x3, 
E_V2HImode, 
E_HImode) != 0
              || !
#line 5960 "../../gcc/config/i386/mmx.md"
(TARGET_SSE2
   && ((unsigned) exact_log2 (INTVAL (operands[3]))
       < GET_MODE_NUNITS (V2HImode))))
            return -1;
          return 2351; /* *pinsrw */

        case E_V4QImode:
          if (pattern863 (x3, 
E_V4QImode, 
E_QImode) != 0
              || !
#line 6013 "../../gcc/config/i386/mmx.md"
(TARGET_SSE4_1
   && ((unsigned) exact_log2 (INTVAL (operands[3]))
       < GET_MODE_NUNITS (V4QImode))))
            return -1;
          return 2352; /* *pinsrb */

        default:
          return -1;
        }

    case SS_TRUNCATE:
      switch (pattern99 (x3))
        {
        case 0:
          if (!
#line 15470 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))
            return -1;
          return 7304; /* avx512vl_ss_truncatev2div2qi2_mask_store_1 */

        case 1:
          if (!
#line 15565 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))
            return -1;
          return 7331; /* avx512vl_ss_truncatev4siv4qi2_mask_store_1 */

        case 2:
          if (!
#line 15565 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))
            return -1;
          return 7334; /* avx512vl_ss_truncatev4div4qi2_mask_store_1 */

        case 3:
          if (!(
#line 15663 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL) && 
#line 15587 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW)))
            return -1;
          return 7361; /* avx512vl_ss_truncatev8hiv8qi2_mask_store_1 */

        case 4:
          if (!
#line 15663 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))
            return -1;
          return 7364; /* avx512vl_ss_truncatev8siv8qi2_mask_store_1 */

        case 5:
          if (!
#line 16179 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512))
            return -1;
          return 7456; /* avx512f_ss_truncatev8div16qi2_mask_store_1 */

        case 6:
          if (!
#line 15817 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))
            return -1;
          return 7401; /* avx512vl_ss_truncatev4siv4hi2_mask_store_1 */

        case 7:
          if (!
#line 15817 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))
            return -1;
          return 7404; /* avx512vl_ss_truncatev4div4hi2_mask_store_1 */

        case 8:
          if (!
#line 15908 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))
            return -1;
          return 7419; /* avx512vl_ss_truncatev2div2hi2_mask_store_1 */

        case 9:
          if (!
#line 16054 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))
            return -1;
          return 7438; /* avx512vl_ss_truncatev2div2si2_mask_store_1 */

        default:
          return -1;
        }

    case TRUNCATE:
      switch (pattern99 (x3))
        {
        case 0:
          if (!
#line 15470 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))
            return -1;
          return 7305; /* avx512vl_truncatev2div2qi2_mask_store_1 */

        case 1:
          if (!
#line 15565 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))
            return -1;
          return 7332; /* avx512vl_truncatev4siv4qi2_mask_store_1 */

        case 2:
          if (!
#line 15565 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))
            return -1;
          return 7335; /* avx512vl_truncatev4div4qi2_mask_store_1 */

        case 3:
          if (!(
#line 15663 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL) && 
#line 15587 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW)))
            return -1;
          return 7362; /* avx512vl_truncatev8hiv8qi2_mask_store_1 */

        case 4:
          if (!
#line 15663 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))
            return -1;
          return 7365; /* avx512vl_truncatev8siv8qi2_mask_store_1 */

        case 5:
          if (!
#line 16179 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512))
            return -1;
          return 7457; /* avx512f_truncatev8div16qi2_mask_store_1 */

        case 6:
          if (!
#line 15817 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))
            return -1;
          return 7402; /* avx512vl_truncatev4siv4hi2_mask_store_1 */

        case 7:
          if (!
#line 15817 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))
            return -1;
          return 7405; /* avx512vl_truncatev4div4hi2_mask_store_1 */

        case 8:
          if (!
#line 15908 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))
            return -1;
          return 7420; /* avx512vl_truncatev2div2hi2_mask_store_1 */

        case 9:
          if (!
#line 16054 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))
            return -1;
          return 7439; /* avx512vl_truncatev2div2si2_mask_store_1 */

        default:
          return -1;
        }

    case US_TRUNCATE:
      switch (pattern99 (x3))
        {
        case 0:
          if (!
#line 15470 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))
            return -1;
          return 7306; /* avx512vl_us_truncatev2div2qi2_mask_store_1 */

        case 1:
          if (!
#line 15565 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))
            return -1;
          return 7333; /* avx512vl_us_truncatev4siv4qi2_mask_store_1 */

        case 2:
          if (!
#line 15565 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))
            return -1;
          return 7336; /* avx512vl_us_truncatev4div4qi2_mask_store_1 */

        case 3:
          if (!(
#line 15663 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL) && 
#line 15587 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW)))
            return -1;
          return 7363; /* avx512vl_us_truncatev8hiv8qi2_mask_store_1 */

        case 4:
          if (!
#line 15663 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))
            return -1;
          return 7366; /* avx512vl_us_truncatev8siv8qi2_mask_store_1 */

        case 5:
          if (!
#line 16179 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512))
            return -1;
          return 7458; /* avx512f_us_truncatev8div16qi2_mask_store_1 */

        case 6:
          if (!
#line 15817 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))
            return -1;
          return 7403; /* avx512vl_us_truncatev4siv4hi2_mask_store_1 */

        case 7:
          if (!
#line 15817 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))
            return -1;
          return 7406; /* avx512vl_us_truncatev4div4hi2_mask_store_1 */

        case 8:
          if (!
#line 15908 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))
            return -1;
          return 7421; /* avx512vl_us_truncatev2div2hi2_mask_store_1 */

        case 9:
          if (!
#line 16054 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))
            return -1;
          return 7440; /* avx512vl_us_truncatev2div2si2_mask_store_1 */

        default:
          return -1;
        }

    default:
      return -1;
    }
}

 int
recog_73 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11;
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
      switch (GET_CODE (operands[2]))
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
          switch (pattern106 (x2, pnum_clobbers))
            {
            case 0:
              if (
#line 8144 "../../gcc/config/i386/i386.md"
(TARGET_APX_NDD && TARGET_APX_NF
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
                return 394; /* *subqi_1_zextsi_nf */
              if (pnum_clobbers == NULL
                  || !
#line 8144 "../../gcc/config/i386/i386.md"
(TARGET_APX_NDD && true
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
                return -1;
              *pnum_clobbers = 1;
              return 395; /* *subqi_1_zextsi */

            case 1:
              if (
#line 8158 "../../gcc/config/i386/i386.md"
(TARGET_APX_NDD && TARGET_APX_NF
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
                return 398; /* *subhi_1_zextsi_nf */
              if (pnum_clobbers == NULL
                  || !
#line 8158 "../../gcc/config/i386/i386.md"
(TARGET_APX_NDD && true
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
                return -1;
              *pnum_clobbers = 1;
              return 399; /* *subhi_1_zextsi */

            case 2:
              if (
#line 8144 "../../gcc/config/i386/i386.md"
(TARGET_APX_NDD && TARGET_APX_NF
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
                return 396; /* *subqi_1_zextdi_nf */
              if (pnum_clobbers == NULL
                  || !
#line 8144 "../../gcc/config/i386/i386.md"
(TARGET_APX_NDD && true
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
                return -1;
              *pnum_clobbers = 1;
              return 397; /* *subqi_1_zextdi */

            case 3:
              if (
#line 8158 "../../gcc/config/i386/i386.md"
(TARGET_APX_NDD && TARGET_APX_NF
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
                return 400; /* *subhi_1_zextdi_nf */
              if (pnum_clobbers == NULL
                  || !
#line 8158 "../../gcc/config/i386/i386.md"
(TARGET_APX_NDD && true
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
                return -1;
              *pnum_clobbers = 1;
              return 401; /* *subhi_1_zextdi */

            case 4:
              if (!
#line 8173 "../../gcc/config/i386/i386.md"
(TARGET_64BIT
   && ix86_binary_operator_ok (MINUS, SImode, operands, TARGET_APX_NDD)))
                return -1;
              *pnum_clobbers = 1;
              return 402; /* *subsi_1_zext */

            default:
              return -1;
            }

        case LTU:
        case UNLT:
          switch (pattern753 (x2, pnum_clobbers))
            {
            case 0:
              if (!nonimmediate_operand (operands[1], E_QImode)
                  || !ix86_carry_flag_operator (operands[2], E_QImode)
                  || !
#line 9440 "../../gcc/config/i386/i386.md"
(TARGET_APX_NDD))
                return -1;
              *pnum_clobbers = 1;
              return 506; /* *subqi3_carry_zextsi_0 */

            case 1:
              if (!nonimmediate_operand (operands[1], E_HImode)
                  || !ix86_carry_flag_operator (operands[2], E_HImode)
                  || !
#line 9455 "../../gcc/config/i386/i386.md"
(TARGET_APX_NDD))
                return -1;
              *pnum_clobbers = 1;
              return 508; /* *subhi3_carry_zextsi_0 */

            case 2:
              if (!nonimmediate_operand (operands[1], E_QImode)
                  || !ix86_carry_flag_operator (operands[2], E_QImode)
                  || !
#line 9440 "../../gcc/config/i386/i386.md"
(TARGET_APX_NDD))
                return -1;
              *pnum_clobbers = 1;
              return 507; /* *subqi3_carry_zextdi_0 */

            case 3:
              if (!nonimmediate_operand (operands[1], E_HImode)
                  || !ix86_carry_flag_operator (operands[2], E_HImode)
                  || !
#line 9455 "../../gcc/config/i386/i386.md"
(TARGET_APX_NDD))
                return -1;
              *pnum_clobbers = 1;
              return 509; /* *subhi3_carry_zextdi_0 */

            case 4:
              if (!nonimmediate_operand (operands[1], E_SImode)
                  || !ix86_carry_flag_operator (operands[2], E_SImode)
                  || !
#line 9470 "../../gcc/config/i386/i386.md"
(TARGET_64BIT))
                return -1;
              *pnum_clobbers = 1;
              return 510; /* *subsi3_carry_zext_0 */

            default:
              return -1;
            }

        case GE:
        case GEU:
          switch (pattern753 (x2, pnum_clobbers))
            {
            case 0:
              if (!nonimmediate_operand (operands[1], E_QImode)
                  || !ix86_carry_flag_unset_operator (operands[2], E_QImode)
                  || !
#line 9488 "../../gcc/config/i386/i386.md"
(TARGET_APX_NDD))
                return -1;
              *pnum_clobbers = 1;
              return 512; /* *subqi3_carry_zextsi_0r */

            case 1:
              if (!nonimmediate_operand (operands[1], E_HImode)
                  || !ix86_carry_flag_unset_operator (operands[2], E_HImode)
                  || !
#line 9503 "../../gcc/config/i386/i386.md"
(TARGET_APX_NDD))
                return -1;
              *pnum_clobbers = 1;
              return 514; /* *subhi3_carry_zextsi_0r */

            case 2:
              if (!nonimmediate_operand (operands[1], E_QImode)
                  || !ix86_carry_flag_unset_operator (operands[2], E_QImode)
                  || !
#line 9488 "../../gcc/config/i386/i386.md"
(TARGET_APX_NDD))
                return -1;
              *pnum_clobbers = 1;
              return 513; /* *subqi3_carry_zextdi_0r */

            case 3:
              if (!nonimmediate_operand (operands[1], E_HImode)
                  || !ix86_carry_flag_unset_operator (operands[2], E_HImode)
                  || !
#line 9503 "../../gcc/config/i386/i386.md"
(TARGET_APX_NDD))
                return -1;
              *pnum_clobbers = 1;
              return 515; /* *subhi3_carry_zextdi_0r */

            case 4:
              if (!nonimmediate_operand (operands[1], E_SImode)
                  || !ix86_carry_flag_unset_operator (operands[2], E_SImode)
                  || !
#line 9518 "../../gcc/config/i386/i386.md"
(TARGET_64BIT))
                return -1;
              *pnum_clobbers = 1;
              return 516; /* *subsi3_carry_zext_0r */

            default:
              return -1;
            }

        default:
          return -1;
        }

    case MINUS:
      if (pnum_clobbers == NULL)
        return -1;
      x6 = XEXP (x4, 1);
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
          x9 = XEXP (x4, 0);
          operands[1] = x9;
          x5 = XEXP (x3, 1);
          operands[2] = x5;
          switch (pattern276 (x2))
            {
            case 0:
              if (pattern1540 (x4, 
E_QImode) != 0
                  || !
#line 9380 "../../gcc/config/i386/i386.md"
(TARGET_APX_NDD
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
                return -1;
              *pnum_clobbers = 1;
              return 500; /* *subqi3_carry_zextsi */

            case 1:
              if (pattern1540 (x4, 
E_HImode) != 0
                  || !
#line 9400 "../../gcc/config/i386/i386.md"
(TARGET_APX_NDD
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
                return -1;
              *pnum_clobbers = 1;
              return 502; /* *subhi3_carry_zextsi */

            case 2:
              if (pattern1540 (x4, 
E_QImode) != 0
                  || !
#line 9380 "../../gcc/config/i386/i386.md"
(TARGET_APX_NDD
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
                return -1;
              *pnum_clobbers = 1;
              return 501; /* *subqi3_carry_zextdi */

            case 3:
              if (pattern1540 (x4, 
E_HImode) != 0
                  || !
#line 9400 "../../gcc/config/i386/i386.md"
(TARGET_APX_NDD
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
                return -1;
              *pnum_clobbers = 1;
              return 503; /* *subhi3_carry_zextdi */

            case 4:
              if (pattern1540 (x4, 
E_SImode) != 0
                  || !
#line 9420 "../../gcc/config/i386/i386.md"
(TARGET_64BIT
   && ix86_binary_operator_ok (MINUS, SImode, operands, TARGET_APX_NDD)))
                return -1;
              *pnum_clobbers = 1;
              return 504; /* *subsi3_carry_zext */

            default:
              return -1;
            }

        default:
          return -1;
        }

    case CONST_INT:
      if (pnum_clobbers == NULL
          || !register_operand (operands[0], E_DImode)
          || GET_MODE (x2) != E_DImode
          || GET_MODE (x3) != E_SImode)
        return -1;
      x5 = XEXP (x3, 1);
      if (GET_MODE (x5) != E_SImode)
        return -1;
      switch (XWINT (x4, 0))
        {
        case 63L:
          if (GET_CODE (x5) != SUBREG
              || maybe_ne (SUBREG_BYTE (x5), 0))
            return -1;
          x10 = XEXP (x5, 0);
          if (GET_CODE (x10) != CLZ
              || GET_MODE (x10) != E_DImode)
            return -1;
          x11 = XEXP (x10, 0);
          operands[1] = x11;
          if (!nonimmediate_operand (operands[1], E_DImode)
              || !
#line 21253 "../../gcc/config/i386/i386.md"
(!TARGET_LZCNT && TARGET_64BIT))
            return -1;
          *pnum_clobbers = 1;
          return 1526; /* bsr_rex64_1_zext */

        case 31L:
          if (GET_CODE (x5) != CLZ)
            return -1;
          x10 = XEXP (x5, 0);
          operands[1] = x10;
          if (!nonimmediate_operand (operands[1], E_SImode)
              || !
#line 21293 "../../gcc/config/i386/i386.md"
(!TARGET_LZCNT && TARGET_64BIT))
            return -1;
          *pnum_clobbers = 1;
          return 1529; /* bsr_zext_1 */

        default:
          return -1;
        }

    default:
      return -1;
    }
}

 int
recog_83 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
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
      switch (pattern435 (x2))
        {
        case 0:
          if (pnum_clobbers != NULL
              && x86_64_hilo_general_operand (operands[2], E_DImode)
              && (
#line 8069 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (MINUS, SImode, operands, TARGET_APX_NDD)) && 
#line 1235 "../../gcc/config/i386/i386.md"
(!TARGET_64BIT)))
            {
              *pnum_clobbers = 1;
              return 380; /* *subdi3_doubleword */
            }
          if (!x86_64_general_operand (operands[2], E_DImode))
            return -1;
          if ((
#line 8125 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (MINUS, DImode, operands, TARGET_APX_NDD)
  && TARGET_APX_NF) && 
#line 1161 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return 390; /* *subdi_1_nf */
          if (pnum_clobbers == NULL
              || !(
#line 8125 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (MINUS, DImode, operands, TARGET_APX_NDD)
  && true) && 
#line 1161 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return -1;
          *pnum_clobbers = 1;
          return 391; /* *subdi_1 */

        case 1:
          if (
#line 8125 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (MINUS, SImode, operands, TARGET_APX_NDD)
  && TARGET_APX_NF))
            return 388; /* *subsi_1_nf */
          if (pnum_clobbers == NULL
              || !
#line 8125 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (MINUS, SImode, operands, TARGET_APX_NDD)
  && true))
            return -1;
          *pnum_clobbers = 1;
          return 389; /* *subsi_1 */

        default:
          return -1;
        }

    case ZERO_EXTEND:
      if (pnum_clobbers == NULL
          || GET_MODE (x3) != E_DImode
          || pattern758 (x2, 
E_SImode, 
E_DImode) != 0
          || !(
#line 8103 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (UNKNOWN, DImode, operands, TARGET_APX_NDD)) && 
#line 1235 "../../gcc/config/i386/i386.md"
(!TARGET_64BIT)))
        return -1;
      *pnum_clobbers = 1;
      return 382; /* *subdi3_doubleword_zext */

    case LTU:
    case UNLT:
      switch (pattern443 (x3, pnum_clobbers))
        {
        case 0:
          if (pattern1205 (x2, 
E_SImode) != 0
              || !
#line 9349 "../../gcc/config/i386/i386.md"
(!MEM_P (operands[0]) || rtx_equal_p (operands[0], operands[1])))
            return -1;
          *pnum_clobbers = 1;
          return 493; /* *subsi3_carry_0 */

        case 1:
          if (pattern1205 (x2, 
E_DImode) != 0
              || !(
#line 9349 "../../gcc/config/i386/i386.md"
(!MEM_P (operands[0]) || rtx_equal_p (operands[0], operands[1])) && 
#line 1161 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return -1;
          *pnum_clobbers = 1;
          return 494; /* *subdi3_carry_0 */

        default:
          return -1;
        }

    case GE:
    case GEU:
      switch (pattern443 (x3, pnum_clobbers))
        {
        case 0:
          if (pattern1206 (x2, 
E_SImode) != 0
              || !
#line 9363 "../../gcc/config/i386/i386.md"
(!MEM_P (operands[0]) || rtx_equal_p (operands[0], operands[1])))
            return -1;
          *pnum_clobbers = 1;
          return 497; /* *subsi3_carry_0r */

        case 1:
          if (pattern1206 (x2, 
E_DImode) != 0
              || !(
#line 9363 "../../gcc/config/i386/i386.md"
(!MEM_P (operands[0]) || rtx_equal_p (operands[0], operands[1])) && 
#line 1161 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return -1;
          *pnum_clobbers = 1;
          return 498; /* *subdi3_carry_0r */

        default:
          return -1;
        }

    case EQ:
      switch (pattern445 (x2, pnum_clobbers))
        {
        case 0:
          if (!
#line 10307 "../../gcc/config/i386/i386.md"
(ix86_unary_operator_ok (MINUS, SImode, operands)
   && ix86_pre_reload_split ()))
            return -1;
          *pnum_clobbers = 1;
          return 584; /* *subsi3_eq_0 */

        case 1:
          if (!(
#line 10307 "../../gcc/config/i386/i386.md"
(ix86_unary_operator_ok (MINUS, DImode, operands)
   && ix86_pre_reload_split ()) && 
#line 1161 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return -1;
          *pnum_clobbers = 1;
          return 585; /* *subdi3_eq_0 */

        default:
          return -1;
        }

    case NE:
      switch (pattern445 (x2, pnum_clobbers))
        {
        case 0:
          if (!
#line 10328 "../../gcc/config/i386/i386.md"
(ix86_unary_operator_ok (MINUS, SImode, operands)
   && ix86_pre_reload_split ()))
            return -1;
          *pnum_clobbers = 1;
          return 588; /* *subsi3_ne_0 */

        case 1:
          if (!(
#line 10328 "../../gcc/config/i386/i386.md"
(ix86_unary_operator_ok (MINUS, DImode, operands)
   && ix86_pre_reload_split ()) && 
#line 1161 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return -1;
          *pnum_clobbers = 1;
          return 589; /* *subdi3_ne_0 */

        default:
          return -1;
        }

    default:
      return -1;
    }
}

 int
recog_86 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12, x13;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) != CONST_INT)
    return -1;
  x5 = XEXP (x1, 0);
  operands[0] = x5;
  switch (GET_CODE (x3))
    {
    case NE:
    case EQ:
      operands[1] = x3;
      if (bt_comparison_operator (operands[1], E_VOIDmode))
        {
          res = recog_85 (x1, insn, pnum_clobbers);
          if (res >= 0)
            return res;
        }
      if (GET_CODE (x3) != NE
          || GET_MODE (x3) != E_QImode
          || XWINT (x4, 0) != 0L)
        return -1;
      x6 = XEXP (x2, 1);
      if (GET_CODE (x6) != ZERO_EXTRACT)
        return -1;
      x7 = XEXP (x6, 1);
      if (GET_CODE (x7) != UMIN
          || GET_MODE (x7) != E_QImode)
        return -1;
      x8 = XEXP (x6, 2);
      if (x8 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
        return -1;
      x9 = XEXP (x2, 2);
      if (x9 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
        return -1;
      x10 = XEXP (x3, 0);
      operands[2] = x10;
      if (!register_operand (operands[2], E_QImode))
        return -1;
      x11 = XEXP (x6, 0);
      operands[1] = x11;
      x12 = XEXP (x7, 1);
      operands[3] = x12;
      if (!const_int_operand (operands[3], E_QImode))
        return -1;
      x13 = XEXP (x7, 0);
      if (!rtx_equal_p (x13, operands[2]))
        return -1;
      switch (GET_MODE (operands[0]))
        {
        case E_SImode:
          if (pattern871 (x2, 
E_SImode) != 0
              || !
#line 21895 "../../gcc/config/i386/i386.md"
(TARGET_BMI2 && INTVAL (operands[3]) == 4 * BITS_PER_UNIT))
            return -1;
          *pnum_clobbers = 1;
          return 1584; /* *bmi2_bzhi_si3 */

        case E_DImode:
          if (pattern871 (x2, 
E_DImode) != 0
              || !(
#line 21895 "../../gcc/config/i386/i386.md"
(TARGET_BMI2 && INTVAL (operands[3]) == 8 * BITS_PER_UNIT) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return -1;
          *pnum_clobbers = 1;
          return 1585; /* *bmi2_bzhi_di3 */

        default:
          return -1;
        }

    case LTU:
    case UNLT:
      operands[1] = x3;
      if (!ix86_carry_flag_operator (operands[1], E_VOIDmode))
        return -1;
      x10 = XEXP (x3, 0);
      if (GET_CODE (x10) != REG
          || REGNO (x10) != 17
          || XWINT (x4, 0) != 0L)
        return -1;
      x6 = XEXP (x2, 1);
      if (x6 != const_int_rtx[MAX_SAVED_CONST_INT + -1])
        return -1;
      x9 = XEXP (x2, 2);
      if (x9 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
        return -1;
      switch (pattern23 (x2))
        {
        case 0:
          *pnum_clobbers = 1;
          return 1789; /* *x86_movsicc_0_m1 */

        case 1:
          if (!
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT))
            return -1;
          *pnum_clobbers = 1;
          return 1790; /* *x86_movdicc_0_m1 */

        default:
          return -1;
        }

    default:
      return -1;
    }
}

 int
recog_87 (rtx x1 ATTRIBUTE_UNUSED,
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
      if (pnum_clobbers != NULL)
        {
          res = recog_86 (x1, insn, pnum_clobbers);
          if (res >= 0)
            return res;
        }
      operands[1] = x3;
      if (!ix86_comparison_operator (operands[1], E_VOIDmode))
        return -1;
      switch (pattern239 (x1))
        {
        case 0:
          switch (GET_MODE (operands[0]))
            {
            case E_SImode:
              if (pattern1275 (x2, 
E_SImode) != 0
                  || !
#line 26178 "../../gcc/config/i386/i386.md"
(TARGET_CMOVE && !(MEM_P (operands[2]) && MEM_P (operands[3]))))
                return -1;
              return 1798; /* *movsicc_noc */

            case E_DImode:
              if (pattern1275 (x2, 
E_DImode) != 0
                  || !(
#line 26178 "../../gcc/config/i386/i386.md"
(TARGET_CMOVE && !(MEM_P (operands[2]) && MEM_P (operands[3]))) && 
#line 1164 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return -1;
              return 1799; /* *movdicc_noc */

            default:
              return -1;
            }

        case 1:
          if (!register_operand (operands[0], E_DImode)
              || GET_MODE (x2) != E_DImode)
            return -1;
          x4 = XEXP (x2, 1);
          x5 = XEXP (x4, 0);
          operands[2] = x5;
          if (!nonimmediate_operand (operands[2], E_SImode))
            return -1;
          x6 = XEXP (x2, 2);
          x7 = XEXP (x6, 0);
          operands[3] = x7;
          if (!nonimmediate_operand (operands[3], E_SImode)
              || !
#line 26196 "../../gcc/config/i386/i386.md"
(TARGET_64BIT
   && TARGET_CMOVE && !(MEM_P (operands[2]) && MEM_P (operands[3]))))
            return -1;
          return 1800; /* *movsicc_noc_zext */

        default:
          return -1;
        }

    default:
      return -1;
    }
}

 int
recog_90 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  operands[2] = x3;
  switch (pattern435 (x2))
    {
    case 0:
      if (pnum_clobbers != NULL
          && x86_64_hilo_general_operand (operands[2], E_DImode)
          && (
#line 12501 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (AND, DImode, operands, TARGET_APX_NDD)) && 
#line 1235 "../../gcc/config/i386/i386.md"
(!TARGET_64BIT)))
        {
          *pnum_clobbers = 1;
          return 703; /* *anddi3_doubleword */
        }
      if (x86_64_szext_general_operand (operands[2], E_DImode))
        {
          if (
#line 12543 "../../gcc/config/i386/i386.md"
(TARGET_64BIT
   && ix86_binary_operator_ok (AND, DImode, operands, TARGET_APX_NDD)
   && TARGET_APX_NF))
            return 705; /* *anddi_1_nf */
          if (pnum_clobbers != NULL
              && 
#line 12543 "../../gcc/config/i386/i386.md"
(TARGET_64BIT
   && ix86_binary_operator_ok (AND, DImode, operands, TARGET_APX_NDD)
   && true))
            {
              *pnum_clobbers = 1;
              return 706; /* *anddi_1 */
            }
        }
      if (pnum_clobbers == NULL
          || !const_int_operand (operands[2], E_DImode)
          || !
#line 12576 "../../gcc/config/i386/i386.md"
(TARGET_64BIT && TARGET_USE_BT
   && ix86_binary_operator_ok (AND, DImode, operands)
   && IN_RANGE (exact_log2 (~INTVAL (operands[2])), 31, 63)))
        return -1;
      *pnum_clobbers = 1;
      return 707; /* *anddi_1_btr */

    case 1:
      if (
#line 12671 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (AND, SImode, operands, TARGET_APX_NDD)
   && TARGET_APX_NF))
        return 721; /* *andsi_1_nf */
      if (pnum_clobbers == NULL
          || !
#line 12671 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (AND, SImode, operands, TARGET_APX_NDD)
   && true))
        return -1;
      *pnum_clobbers = 1;
      return 722; /* *andsi_1 */

    default:
      return -1;
    }
}

 int
recog_93 (rtx x1 ATTRIBUTE_UNUSED,
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
      switch (pattern114 (x3))
        {
        case 0:
          if (pnum_clobbers != NULL
              && (
#line 14237 "../../gcc/config/i386/i386.md"
(ix86_unary_operator_ok (NEG, DImode, operands, TARGET_APX_NDD)) && 
#line 1235 "../../gcc/config/i386/i386.md"
(!TARGET_64BIT)))
            {
              *pnum_clobbers = 1;
              return 952; /* *negdi2_doubleword */
            }
          if ((
#line 14346 "../../gcc/config/i386/i386.md"
(ix86_unary_operator_ok (NEG, DImode, operands, TARGET_APX_NDD)
   && TARGET_APX_NF) && 
#line 1161 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return 960; /* *negdi_1_nf */
          if (pnum_clobbers == NULL
              || !(
#line 14346 "../../gcc/config/i386/i386.md"
(ix86_unary_operator_ok (NEG, DImode, operands, TARGET_APX_NDD)
   && true) && 
#line 1161 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return -1;
          *pnum_clobbers = 1;
          return 961; /* *negdi_1 */

        case 1:
          if (
#line 14346 "../../gcc/config/i386/i386.md"
(ix86_unary_operator_ok (NEG, SImode, operands, TARGET_APX_NDD)
   && TARGET_APX_NF))
            return 958; /* *negsi_1_nf */
          if (pnum_clobbers == NULL
              || !
#line 14346 "../../gcc/config/i386/i386.md"
(ix86_unary_operator_ok (NEG, SImode, operands, TARGET_APX_NDD)
   && true))
            return -1;
          *pnum_clobbers = 1;
          return 959; /* *negsi_1 */

        default:
          return -1;
        }

    case ABS:
      if (pnum_clobbers == NULL)
        return -1;
      x5 = XEXP (x4, 0);
      operands[1] = x5;
      switch (GET_MODE (operands[0]))
        {
        case E_DImode:
          if (pattern615 (x3, 
E_DImode) != 0)
            return -1;
          if ((
#line 14644 "../../gcc/config/i386/i386.md"
(TARGET_CMOVE
   && ix86_pre_reload_split ()) && 
#line 1235 "../../gcc/config/i386/i386.md"
(!TARGET_64BIT)))
            {
              *pnum_clobbers = 1;
              return 997; /* *nabsdi2_doubleword */
            }
          if (!(
#line 14715 "../../gcc/config/i386/i386.md"
(TARGET_CMOVE
   && (DImode != QImode || !TARGET_PARTIAL_REG_STALL)
   && ix86_pre_reload_split ()) && 
#line 1161 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return -1;
          *pnum_clobbers = 1;
          return 1006; /* *nabsdi2_1 */

        case E_SImode:
          if (pattern615 (x3, 
E_SImode) != 0
              || !
#line 14715 "../../gcc/config/i386/i386.md"
(TARGET_CMOVE
   && (SImode != QImode || !TARGET_PARTIAL_REG_STALL)
   && ix86_pre_reload_split ()))
            return -1;
          *pnum_clobbers = 1;
          return 1005; /* *nabssi2_1 */

        default:
          return -1;
        }

    case LTU:
    case UNLT:
      if (pnum_clobbers == NULL)
        return -1;
      operands[1] = x4;
      if (!ix86_carry_flag_operator (operands[1], E_VOIDmode))
        return -1;
      x5 = XEXP (x4, 0);
      if (GET_CODE (x5) != REG
          || REGNO (x5) != 17)
        return -1;
      x6 = XEXP (x4, 1);
      if (x6 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
        return -1;
      switch (pattern23 (x3))
        {
        case 0:
          *pnum_clobbers = 1;
          return 1795; /* *x86_movsicc_0_m1_neg */

        case 1:
          if (!
#line 1161 "../../gcc/config/i386/i386.md"
(TARGET_64BIT))
            return -1;
          *pnum_clobbers = 1;
          return 1796; /* *x86_movdicc_0_m1_neg */

        default:
          return -1;
        }

    default:
      return -1;
    }
}

 int
recog_98 (rtx x1 ATTRIBUTE_UNUSED,
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
      if (pnum_clobbers != NULL
          && GET_CODE (x4) == SUBREG
          && pattern422 (x1, 
E_DImode) == 0
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
          return 1122; /* *lshrdi3_doubleword_mask */
        }
      operands[2] = x4;
      res = recog_97 (x1, insn, pnum_clobbers);
      if (res >= 0)
        return res;
      if (pnum_clobbers != NULL)
        {
          switch (GET_CODE (x4))
            {
            case CONST_INT:
              if (XWINT (x4, 0) == 32L)
                {
                  x5 = XEXP (x1, 0);
                  if (GET_CODE (x5) == SUBREG
                      && known_eq (SUBREG_BYTE (x5), 0)
                      && GET_MODE (x5) == E_DImode)
                    {
                      x6 = XEXP (x5, 0);
                      operands[0] = x6;
                      if (register_operand (operands[0], E_SImode)
                          && GET_MODE (x2) == E_DImode
                          && nonimmediate_operand (operands[1], E_DImode)
                          && 
#line 17361 "../../gcc/config/i386/i386.md"
(TARGET_64BIT))
                        {
                          *pnum_clobbers = 1;
                          return 1179; /* *highpartdisi2 */
                        }
                    }
                }
              break;

            case SUBREG:
              switch (pattern446 (x1, 
E_SImode))
                {
                case 0:
                  if (
#line 17840 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (LSHIFTRT, SImode, operands)
   && (INTVAL (operands[3]) & (4 * BITS_PER_UNIT - 1))
      == 4 * BITS_PER_UNIT - 1
   && ix86_pre_reload_split ()))
                    {
                      *pnum_clobbers = 1;
                      return 1245; /* *lshrsi3_mask */
                    }
                  break;

                case 1:
                  if (
#line 17888 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (LSHIFTRT, SImode, operands)
   && (INTVAL (operands[3]) & (4 * BITS_PER_UNIT - 1)) == 0
   && ix86_pre_reload_split ()))
                    {
                      *pnum_clobbers = 1;
                      return 1257; /* *lshrsi3_add */
                    }
                  break;

                case 2:
                  if (
#line 17934 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (LSHIFTRT, SImode, operands)
   && (INTVAL (operands[3]) & (4 * BITS_PER_UNIT - 1)) == 0
   && ix86_pre_reload_split ()))
                    {
                      *pnum_clobbers = 1;
                      return 1269; /* *lshrsi3_sub */
                    }
                  break;

                default:
                  break;
                }
              break;

            default:
              break;
            }
        }
      operands[2] = x4;
      if (nonmemory_operand (operands[2], E_QImode))
        {
          x5 = XEXP (x1, 0);
          operands[0] = x5;
          if (nonimmediate_operand (operands[0], E_DImode)
              && GET_MODE (x2) == E_DImode
              && nonimmediate_operand (operands[1], E_DImode))
            {
              if ((
#line 17385 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (LSHIFTRT, DImode, operands, TARGET_APX_NDD)
   && TARGET_APX_NF) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return 1182; /* *lshrdi3_1_nf */
              if (pnum_clobbers != NULL
                  && (
#line 17385 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (LSHIFTRT, DImode, operands, TARGET_APX_NDD)
   && true) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                {
                  *pnum_clobbers = 1;
                  return 1183; /* *lshrdi3_1 */
                }
            }
        }
      if (pnum_clobbers == NULL
          || GET_CODE (x4) != SUBREG)
        return -1;
      switch (pattern446 (x1, 
E_DImode))
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
          *pnum_clobbers = 1;
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
          *pnum_clobbers = 1;
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
          *pnum_clobbers = 1;
          return 1272; /* *lshrdi3_sub */

        default:
          return -1;
        }

    case AND:
      if (pnum_clobbers == NULL
          || GET_MODE (x4) != E_QImode)
        return -1;
      x5 = XEXP (x1, 0);
      operands[0] = x5;
      switch (pattern115 (x2))
        {
        case 0:
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
              return 1126; /* *lshrdi3_doubleword_mask_1 */
            }
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
          *pnum_clobbers = 1;
          return 1254; /* *lshrdi3_mask_1 */

        case 1:
          if (!
#line 17865 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (LSHIFTRT, SImode, operands)
   && (INTVAL (operands[3]) & (4 * BITS_PER_UNIT - 1))
      == 4 * BITS_PER_UNIT - 1
   && ix86_pre_reload_split ()))
            return -1;
          *pnum_clobbers = 1;
          return 1251; /* *lshrsi3_mask_1 */

        default:
          return -1;
        }

    case PLUS:
      if (pnum_clobbers == NULL
          || GET_MODE (x4) != E_QImode)
        return -1;
      x5 = XEXP (x1, 0);
      operands[0] = x5;
      switch (pattern18 (x2))
        {
        case 0:
          if (!
#line 17912 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (LSHIFTRT, SImode, operands)
   && (INTVAL (operands[3]) & (4 * BITS_PER_UNIT - 1)) == 0
   && ix86_pre_reload_split ()))
            return -1;
          *pnum_clobbers = 1;
          return 1263; /* *lshrsi3_add_1 */

        case 1:
          if (!(
#line 17912 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (LSHIFTRT, DImode, operands)
   && (INTVAL (operands[3]) & (8 * BITS_PER_UNIT - 1)) == 0
   && ix86_pre_reload_split ()) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return -1;
          *pnum_clobbers = 1;
          return 1266; /* *lshrdi3_add_1 */

        default:
          return -1;
        }

    case MINUS:
      if (pnum_clobbers == NULL
          || GET_MODE (x4) != E_QImode)
        return -1;
      x5 = XEXP (x1, 0);
      operands[0] = x5;
      switch (pattern116 (x2))
        {
        case 0:
          if (!
#line 17964 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (LSHIFTRT, SImode, operands)
   && (INTVAL (operands[3]) & (4 * BITS_PER_UNIT - 1)) == 0
   && ix86_pre_reload_split ()))
            return -1;
          *pnum_clobbers = 1;
          return 1275; /* *lshrsi3_sub_1 */

        case 1:
          if (!(
#line 17964 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (LSHIFTRT, DImode, operands)
   && (INTVAL (operands[3]) & (8 * BITS_PER_UNIT - 1)) == 0
   && ix86_pre_reload_split ()) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return -1;
          *pnum_clobbers = 1;
          return 1278; /* *lshrdi3_sub_1 */

        default:
          return -1;
        }

    default:
      return -1;
    }
}

 int
recog_110 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  switch (XVECLEN (x2, 0))
    {
    case 2:
      return recog_109 (x1, insn, pnum_clobbers);

    case 1:
      return recog_108 (x1, insn, pnum_clobbers);

    case 4:
      if (pnum_clobbers == NULL)
        return -1;
      x3 = XVECEXP (x2, 0, 3);
      if (GET_CODE (x3) != REG
          || REGNO (x3) != 7
          || GET_MODE (x3) != E_SImode)
        return -1;
      x4 = XEXP (x1, 0);
      operands[0] = x4;
      if (!register_operand (operands[0], E_SImode)
          || GET_MODE (x2) != E_SImode)
        return -1;
      x5 = XVECEXP (x2, 0, 0);
      operands[1] = x5;
      x6 = XVECEXP (x2, 0, 1);
      operands[2] = x6;
      x7 = XVECEXP (x2, 0, 2);
      operands[3] = x7;
      switch (XINT (x2, 1))
        {
        case 20:
          if (!register_operand (operands[1], E_SImode)
              || !tls_symbolic_operand (operands[2], E_VOIDmode)
              || !constant_call_address_operand (operands[3], E_VOIDmode)
              || !
#line 22792 "../../gcc/config/i386/i386.md"
(!TARGET_64BIT && TARGET_GNU_TLS))
            return -1;
          *pnum_clobbers = 3;
          return 1643; /* *tls_global_dynamic_32_gnu */

        case 22:
          if (!tls_symbolic_operand (operands[1], E_VOIDmode)
              || !register_operand (operands[2], E_SImode)
              || !register_operand (operands[3], E_SImode)
              || !
#line 23147 "../../gcc/config/i386/i386.md"
(!TARGET_64BIT && TARGET_GNU2_TLS))
            return -1;
          *pnum_clobbers = 1;
          return 1659; /* *tls_dynamic_gnu2_call_32 */

        default:
          return -1;
        }

    case 3:
      x4 = XEXP (x1, 0);
      operands[0] = x4;
      switch (XINT (x2, 1))
        {
        case 21:
          if (pnum_clobbers == NULL
              || GET_MODE (x2) != E_SImode)
            return -1;
          x7 = XVECEXP (x2, 0, 2);
          if (GET_CODE (x7) != REG
              || REGNO (x7) != 7
              || GET_MODE (x7) != E_SImode
              || !register_operand (operands[0], E_SImode))
            return -1;
          x5 = XVECEXP (x2, 0, 0);
          operands[1] = x5;
          if (!register_operand (operands[1], E_SImode))
            return -1;
          x6 = XVECEXP (x2, 0, 1);
          operands[2] = x6;
          if (!constant_call_address_operand (operands[2], E_VOIDmode)
              || !
#line 22912 "../../gcc/config/i386/i386.md"
(!TARGET_64BIT && TARGET_GNU_TLS))
            return -1;
          *pnum_clobbers = 3;
          return 1647; /* *tls_local_dynamic_base_32_gnu */

        case 22:
          if (pnum_clobbers == NULL)
            return -1;
          x7 = XVECEXP (x2, 0, 2);
          if (GET_CODE (x7) != REG
              || REGNO (x7) != 7)
            return -1;
          x5 = XVECEXP (x2, 0, 0);
          operands[1] = x5;
          if (!tls_symbolic_operand (operands[1], E_VOIDmode))
            return -1;
          x6 = XVECEXP (x2, 0, 1);
          operands[2] = x6;
          switch (GET_MODE (operands[0]))
            {
            case E_SImode:
              if (pattern1208 (x2, 
E_SImode) != 0
                  || !(
#line 23207 "../../gcc/config/i386/i386.md"
(TARGET_64BIT && TARGET_GNU2_TLS) && 
#line 1408 "../../gcc/config/i386/i386.md"
(ptr_mode == SImode)))
                return -1;
              *pnum_clobbers = 1;
              return 1663; /* *tls_dynamic_gnu2_call_64_si */

            case E_DImode:
              if (pattern1208 (x2, 
E_DImode) != 0
                  || !(
#line 23207 "../../gcc/config/i386/i386.md"
(TARGET_64BIT && TARGET_GNU2_TLS) && 
#line 1408 "../../gcc/config/i386/i386.md"
(ptr_mode == DImode)))
                return -1;
              *pnum_clobbers = 1;
              return 1664; /* *tls_dynamic_gnu2_call_64_di */

            default:
              return -1;
            }

        case 59:
          x5 = XVECEXP (x2, 0, 0);
          switch (GET_CODE (x5))
            {
            case CONST_INT:
            case CONST_DOUBLE:
            case CONST_VECTOR:
            case REG:
            case SUBREG:
            case MEM:
              operands[1] = x5;
              x7 = XVECEXP (x2, 0, 2);
              if (GET_CODE (x7) != CONST_INT)
                return -1;
              operands[3] = x7;
              x6 = XVECEXP (x2, 0, 1);
              operands[2] = x6;
              switch (pattern23 (x2))
                {
                case 0:
                  switch (GET_MODE (operands[1]))
                    {
                    case E_V32HFmode:
                      if (register_operand (operands[1], E_V32HFmode)
                          && nonimmediate_operand (operands[2], E_V32HFmode)
                          && const_0_to_31_operand (operands[3], E_SImode)
                          && (
#line 4395 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 310 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_EVEX512)))
                        return 3295; /* avx512bw_cmpv32hf3 */
                      break;

                    case E_V32QImode:
                      if (register_operand (operands[1], E_V32QImode)
                          && nonimmediate_operand (operands[2], E_V32QImode)
                          && const_0_to_7_operand (operands[3], E_SImode)
                          && (
#line 4487 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 318 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                        return 3434; /* avx512vl_cmpv32qi3 */
                      break;

                    case E_V32HImode:
                      if (register_operand (operands[1], E_V32HImode)
                          && nonimmediate_operand (operands[2], E_V32HImode)
                          && const_0_to_7_operand (operands[3], E_SImode)
                          && (
#line 4487 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 319 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                        return 3436; /* avx512bw_cmpv32hi3 */
                      break;

                    case E_V32BFmode:
                      if (register_operand (operands[1], E_V32BFmode)
                          && nonimmediate_operand (operands[2], E_V32BFmode)
                          && const_0_to_31_operand (operands[3], E_VOIDmode)
                          && (
#line 32446 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256) && 
#line 565 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_512)))
                        return 10722; /* avx10_2_cmppbf16_v32bf */
                      break;

                    default:
                      break;
                    }
                  break;

                case 1:
                  if (register_operand (operands[1], E_V64QImode)
                      && nonimmediate_operand (operands[2], E_V64QImode)
                      && const_0_to_7_operand (operands[3], E_SImode)
                      && (
#line 4487 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 318 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                    return 3430; /* avx512bw_cmpv64qi3 */
                  break;

                default:
                  break;
                }
              if (XWINT (x7, 0) != 0L)
                return -1;
              operands[2] = x6;
              switch (pattern991 (x2))
                {
                case 0:
                  if (!(
#line 4582 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 318 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                    return -1;
                  return 3490; /* *avx512bw_eqv64qi3_1 */

                case 1:
                  if (!(
#line 4582 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 318 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                    return -1;
                  return 3498; /* *avx512vl_eqv32qi3_1 */

                case 2:
                  if (!(
#line 4582 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 319 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                    return -1;
                  return 3502; /* *avx512bw_eqv32hi3_1 */

                default:
                  return -1;
                }

            case US_MINUS:
              switch (pattern454 (x2))
                {
                case 0:
                  if (!(
#line 4789 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && ix86_pre_reload_split ()
  && ix86_binary_operator_ok (US_MINUS, V64QImode, operands)
  && (INTVAL (operands[4]) & 3) == 0) && 
#line 318 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                    return -1;
                  return 3640; /* *avx512bw_ucmpv64qi3_1 */

                case 1:
                  if (!(
#line 4789 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && ix86_pre_reload_split ()
  && ix86_binary_operator_ok (US_MINUS, V32QImode, operands)
  && (INTVAL (operands[4]) & 3) == 0) && 
#line 318 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                    return -1;
                  return 3644; /* *avx512vl_ucmpv32qi3_1 */

                case 2:
                  if (!(
#line 4789 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && ix86_pre_reload_split ()
  && ix86_binary_operator_ok (US_MINUS, V32HImode, operands)
  && (INTVAL (operands[4]) & 3) == 0) && 
#line 319 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                    return -1;
                  return 3646; /* *avx512bw_ucmpv32hi3_1 */

                default:
                  return -1;
                }

            default:
              return -1;
            }

        case 157:
          x5 = XVECEXP (x2, 0, 0);
          switch (GET_CODE (x5))
            {
            case CONST_INT:
            case CONST_DOUBLE:
            case CONST_VECTOR:
            case REG:
            case SUBREG:
            case MEM:
              operands[1] = x5;
              x7 = XVECEXP (x2, 0, 2);
              if (GET_CODE (x7) != CONST_INT)
                return -1;
              x6 = XVECEXP (x2, 0, 1);
              operands[2] = x6;
              if (XWINT (x7, 0) == 0L)
                {
                  switch (pattern991 (x2))
                    {
                    case 0:
                      if ((
#line 4582 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 318 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                        return 3492; /* *avx512bw_eqv64qi3_1 */
                      break;

                    case 1:
                      if ((
#line 4582 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 318 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                        return 3500; /* *avx512vl_eqv32qi3_1 */
                      break;

                    case 2:
                      if ((
#line 4582 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 319 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                        return 3504; /* *avx512bw_eqv32hi3_1 */
                      break;

                    default:
                      break;
                    }
                }
              operands[3] = x7;
              if (!const_0_to_7_operand (operands[3], E_SImode))
                return -1;
              switch (pattern298 (x2))
                {
                case 0:
                  if (!(
#line 4597 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 318 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                    return -1;
                  return 3514; /* avx512bw_ucmpv64qi3 */

                case 1:
                  if (!(
#line 4597 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 318 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                    return -1;
                  return 3518; /* avx512vl_ucmpv32qi3 */

                case 2:
                  if (!(
#line 4597 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 319 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                    return -1;
                  return 3520; /* avx512bw_ucmpv32hi3 */

                default:
                  return -1;
                }

            case US_MINUS:
              switch (pattern454 (x2))
                {
                case 0:
                  if (!(
#line 4789 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && ix86_pre_reload_split ()
  && ix86_binary_operator_ok (US_MINUS, V64QImode, operands)
  && (INTVAL (operands[4]) & 1) == 0) && 
#line 318 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                    return -1;
                  return 3641; /* *avx512bw_ucmpv64qi3_1 */

                case 1:
                  if (!(
#line 4789 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && ix86_pre_reload_split ()
  && ix86_binary_operator_ok (US_MINUS, V32QImode, operands)
  && (INTVAL (operands[4]) & 1) == 0) && 
#line 318 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                    return -1;
                  return 3645; /* *avx512vl_ucmpv32qi3_1 */

                case 2:
                  if (!(
#line 4789 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && ix86_pre_reload_split ()
  && ix86_binary_operator_ok (US_MINUS, V32HImode, operands)
  && (INTVAL (operands[4]) & 1) == 0) && 
#line 319 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                    return -1;
                  return 3647; /* *avx512bw_ucmpv32hi3_1 */

                default:
                  return -1;
                }

            default:
              return -1;
            }

        case 121:
          if (pattern301 (x2) != 0
              || !
#line 23270 "../../gcc/config/i386/sse.md"
((TARGET_MMX || TARGET_MMX_WITH_SSE) && TARGET_SSSE3))
            return -1;
          return 8643; /* ssse3_palignrdi */

        default:
          return -1;
        }

    default:
      return -1;
    }
}

 int
recog_128 (rtx x1 ATTRIBUTE_UNUSED,
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
  x6 = XEXP (x2, 1);
  operands[3] = x6;
  x7 = XEXP (x2, 2);
  operands[4] = x7;
  switch (GET_MODE (operands[0]))
    {
    case E_V8SImode:
      if (pattern1102 (x2, 
E_QImode, 
E_V8SImode) != 0
          || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 27314 "../../gcc/config/i386/sse.md"
(TARGET_AVX2 && (32 == 64 || TARGET_AVX512VL))))
        return -1;
      return 9112; /* avx2_permvarv8si_mask */

    case E_V8SFmode:
      if (pattern1103 (x2, 
E_QImode, 
E_V8SFmode, 
E_V8SImode) != 0
          || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 27314 "../../gcc/config/i386/sse.md"
(TARGET_AVX2 && (32 == 64 || TARGET_AVX512VL))))
        return -1;
      return 9114; /* avx2_permvarv8sf_mask */

    case E_V16SImode:
      if (pattern1102 (x2, 
E_HImode, 
E_V16SImode) != 0
          || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 27314 "../../gcc/config/i386/sse.md"
(TARGET_AVX2 && (64 == 64 || TARGET_AVX512VL)) && 
#line 998 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512))))
        return -1;
      return 9116; /* avx512f_permvarv16si_mask */

    case E_V16SFmode:
      if (pattern1103 (x2, 
E_HImode, 
E_V16SFmode, 
E_V16SImode) != 0
          || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 27314 "../../gcc/config/i386/sse.md"
(TARGET_AVX2 && (64 == 64 || TARGET_AVX512VL)) && 
#line 999 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512))))
        return -1;
      return 9118; /* avx512f_permvarv16sf_mask */

    case E_V8DImode:
      if (pattern1102 (x2, 
E_QImode, 
E_V8DImode) != 0
          || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 27314 "../../gcc/config/i386/sse.md"
(TARGET_AVX2 && (64 == 64 || TARGET_AVX512VL)) && 
#line 1000 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512))))
        return -1;
      return 9120; /* avx512f_permvarv8di_mask */

    case E_V8DFmode:
      if (pattern1103 (x2, 
E_QImode, 
E_V8DFmode, 
E_V8DImode) != 0
          || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 27314 "../../gcc/config/i386/sse.md"
(TARGET_AVX2 && (64 == 64 || TARGET_AVX512VL)) && 
#line 1001 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512))))
        return -1;
      return 9122; /* avx512f_permvarv8df_mask */

    case E_V4DImode:
      if (pattern1102 (x2, 
E_QImode, 
E_V4DImode) != 0
          || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 27314 "../../gcc/config/i386/sse.md"
(TARGET_AVX2 && (32 == 64 || TARGET_AVX512VL)) && 
#line 1002 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
        return -1;
      return 9124; /* avx2_permvarv4di_mask */

    case E_V4DFmode:
      if (pattern1103 (x2, 
E_QImode, 
E_V4DFmode, 
E_V4DImode) != 0
          || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 27314 "../../gcc/config/i386/sse.md"
(TARGET_AVX2 && (32 == 64 || TARGET_AVX512VL)) && 
#line 1002 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
        return -1;
      return 9126; /* avx2_permvarv4df_mask */

    case E_V64QImode:
      if (pattern1102 (x2, 
E_DImode, 
E_V64QImode) != 0
          || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 27333 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VBMI && (64 == 64 || TARGET_AVX512VL)) && 
#line 328 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512))))
        return -1;
      return 9128; /* avx512bw_permvarv64qi_mask */

    case E_V16QImode:
      if (pattern1102 (x2, 
E_HImode, 
E_V16QImode) != 0
          || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 27333 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VBMI && (16 == 64 || TARGET_AVX512VL)) && 
#line 328 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
        return -1;
      return 9130; /* avx512vl_permvarv16qi_mask */

    case E_V32QImode:
      if (pattern1102 (x2, 
E_SImode, 
E_V32QImode) != 0
          || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 27333 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VBMI && (32 == 64 || TARGET_AVX512VL)) && 
#line 328 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
        return -1;
      return 9132; /* avx512vl_permvarv32qi_mask */

    case E_V8HImode:
      if (pattern1102 (x2, 
E_QImode, 
E_V8HImode) != 0
          || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 27345 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && (16 == 64 || TARGET_AVX512VL)) && 
#line 689 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
        return -1;
      return 9134; /* avx512vl_permvarv8hi_mask */

    case E_V16HImode:
      if (pattern1102 (x2, 
E_HImode, 
E_V16HImode) != 0
          || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 27345 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && (32 == 64 || TARGET_AVX512VL)) && 
#line 689 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
        return -1;
      return 9136; /* avx512vl_permvarv16hi_mask */

    case E_V32HImode:
      if (pattern1102 (x2, 
E_SImode, 
E_V32HImode) != 0
          || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 27345 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && (64 == 64 || TARGET_AVX512VL)) && 
#line 689 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512))))
        return -1;
      return 9138; /* avx512bw_permvarv32hi_mask */

    case E_V8HFmode:
      if (pattern1103 (x2, 
E_QImode, 
E_V8HFmode, 
E_V8HImode) != 0
          || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 27345 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && (16 == 64 || TARGET_AVX512VL)) && 
#line 690 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
        return -1;
      return 9140; /* avx512fp16_permvarv8hf_mask */

    case E_V16HFmode:
      if (pattern1103 (x2, 
E_HImode, 
E_V16HFmode, 
E_V16HImode) != 0
          || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 27345 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && (32 == 64 || TARGET_AVX512VL)) && 
#line 690 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
        return -1;
      return 9142; /* avx512vl_permvarv16hf_mask */

    case E_V32HFmode:
      if (pattern1103 (x2, 
E_SImode, 
E_V32HFmode, 
E_V32HImode) != 0
          || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 27345 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && (64 == 64 || TARGET_AVX512VL)) && 
#line 690 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512))))
        return -1;
      return 9144; /* avx512bw_permvarv32hf_mask */

    case E_V8BFmode:
      if (pattern1103 (x2, 
E_QImode, 
E_V8BFmode, 
E_V8HImode) != 0
          || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 27345 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && (16 == 64 || TARGET_AVX512VL)) && 
#line 691 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
        return -1;
      return 9146; /* avx512vl_permvarv8bf_mask */

    case E_V16BFmode:
      if (pattern1103 (x2, 
E_HImode, 
E_V16BFmode, 
E_V16HImode) != 0
          || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 27345 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && (32 == 64 || TARGET_AVX512VL)) && 
#line 691 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
        return -1;
      return 9148; /* avx512vl_permvarv16bf_mask */

    case E_V32BFmode:
      if (pattern1103 (x2, 
E_SImode, 
E_V32BFmode, 
E_V32HImode) != 0
          || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 27345 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && (64 == 64 || TARGET_AVX512VL)) && 
#line 691 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512))))
        return -1;
      return 9150; /* avx512bw_permvarv32bf_mask */

    default:
      return -1;
    }
}

 int
recog_139 (rtx x1 ATTRIBUTE_UNUSED,
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
  x7 = XEXP (x2, 1);
  switch (GET_CODE (x7))
    {
    case REG:
    case SUBREG:
      if (!rtx_equal_p (x7, operands[1]))
        return -1;
      x8 = XEXP (x2, 2);
      operands[4] = x8;
      switch (GET_MODE (operands[0]))
        {
        case E_V16SFmode:
          if (pattern479 (x2, 
E_V16SFmode, 
E_HImode) != 0
              || !(
#line 32047 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256) && 
#line 546 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_512)))
            return -1;
          return 10578; /* vdpphps_v16sf_mask */

        case E_V8SFmode:
          if (pattern479 (x2, 
E_V8SFmode, 
E_QImode) != 0
              || !
#line 32047 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
            return -1;
          return 10579; /* vdpphps_v8sf_mask */

        case E_V4SFmode:
          if (pattern479 (x2, 
E_V4SFmode, 
E_QImode) != 0
              || !
#line 32047 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
            return -1;
          return 10580; /* vdpphps_v4sf_mask */

        default:
          return -1;
        }

    case CONST_INT:
    case CONST_DOUBLE:
    case CONST_VECTOR:
      operands[4] = x7;
      x8 = XEXP (x2, 2);
      operands[5] = x8;
      switch (GET_MODE (operands[0]))
        {
        case E_V16SFmode:
          if (pattern481 (x2, 
E_V16SFmode, 
E_HImode) != 0
              || !(
#line 32074 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256) && 
#line 546 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_512)))
            return -1;
          return 10581; /* vdpphps_v16sf_maskz_1 */

        case E_V8SFmode:
          if (pattern481 (x2, 
E_V8SFmode, 
E_QImode) != 0
              || !
#line 32074 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
            return -1;
          return 10582; /* vdpphps_v8sf_maskz_1 */

        case E_V4SFmode:
          if (pattern481 (x2, 
E_V4SFmode, 
E_QImode) != 0
              || !
#line 32074 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
            return -1;
          return 10583; /* vdpphps_v4sf_maskz_1 */

        default:
          return -1;
        }

    default:
      return -1;
    }
}

 int
recog_144 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  switch (XINT (x3, 1))
    {
    case 63:
      switch (pattern458 (x2))
        {
        case 0:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 3394 "../../gcc/config/i386/sse.md"
(TARGET_SSE
   && (64 == 64 || TARGET_AVX512VL)
   && 1) && 
#line 390 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_EVEX512))))
            return -1;
          return 3063; /* ieee_maxv32hf3_mask */

        case 1:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 3394 "../../gcc/config/i386/sse.md"
(TARGET_SSE
   && (32 == 64 || TARGET_AVX512VL)
   && 1) && 
#line 391 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL))))
            return -1;
          return 3071; /* ieee_maxv16hf3_mask */

        case 2:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 3394 "../../gcc/config/i386/sse.md"
(TARGET_SSE
   && (16 == 64 || TARGET_AVX512VL)
   && 1) && 
#line 392 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL))))
            return -1;
          return 3078; /* ieee_maxv8hf3_mask */

        case 3:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 3394 "../../gcc/config/i386/sse.md"
(TARGET_SSE
   && (64 == 64 || TARGET_AVX512VL)
   && 1) && 
#line 393 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512))))
            return -1;
          return 3083; /* ieee_maxv16sf3_mask */

        case 4:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 3394 "../../gcc/config/i386/sse.md"
(TARGET_SSE
   && (32 == 64 || TARGET_AVX512VL)
   && 1) && 
#line 393 "../../gcc/config/i386/sse.md"
(TARGET_AVX))))
            return -1;
          return 3091; /* ieee_maxv8sf3_mask */

        case 5:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 3394 "../../gcc/config/i386/sse.md"
(TARGET_SSE
   && (16 == 64 || TARGET_AVX512VL)
   && 1)))
            return -1;
          return 3098; /* ieee_maxv4sf3_mask */

        case 6:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 3394 "../../gcc/config/i386/sse.md"
(TARGET_SSE
   && (64 == 64 || TARGET_AVX512VL)
   && 1) && 
#line 394 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512))))
            return -1;
          return 3103; /* ieee_maxv8df3_mask */

        case 7:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 3394 "../../gcc/config/i386/sse.md"
(TARGET_SSE
   && (32 == 64 || TARGET_AVX512VL)
   && 1) && 
#line 394 "../../gcc/config/i386/sse.md"
(TARGET_AVX))))
            return -1;
          return 3111; /* ieee_maxv4df3_mask */

        case 8:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 3394 "../../gcc/config/i386/sse.md"
(TARGET_SSE
   && (16 == 64 || TARGET_AVX512VL)
   && 1) && 
#line 395 "../../gcc/config/i386/sse.md"
(TARGET_SSE2))))
            return -1;
          return 3118; /* ieee_maxv2df3_mask */

        case 9:
          if (!(
#line 3486 "../../gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 479 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16)))
            return -1;
          return 3151; /* avx512fp16_ieee_vmmaxv8hf3 */

        case 10:
          if (!
#line 3486 "../../gcc/config/i386/sse.md"
(TARGET_SSE))
            return -1;
          return 3159; /* sse_ieee_vmmaxv4sf3 */

        case 11:
          if (!(
#line 3486 "../../gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 480 "../../gcc/config/i386/sse.md"
(TARGET_SSE2)))
            return -1;
          return 3167; /* sse2_ieee_vmmaxv2df3 */

        default:
          return -1;
        }

    case 62:
      switch (pattern458 (x2))
        {
        case 0:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 3394 "../../gcc/config/i386/sse.md"
(TARGET_SSE
   && (64 == 64 || TARGET_AVX512VL)
   && 1) && 
#line 390 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_EVEX512))))
            return -1;
          return 3067; /* ieee_minv32hf3_mask */

        case 1:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 3394 "../../gcc/config/i386/sse.md"
(TARGET_SSE
   && (32 == 64 || TARGET_AVX512VL)
   && 1) && 
#line 391 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL))))
            return -1;
          return 3075; /* ieee_minv16hf3_mask */

        case 2:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 3394 "../../gcc/config/i386/sse.md"
(TARGET_SSE
   && (16 == 64 || TARGET_AVX512VL)
   && 1) && 
#line 392 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL))))
            return -1;
          return 3080; /* ieee_minv8hf3_mask */

        case 3:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 3394 "../../gcc/config/i386/sse.md"
(TARGET_SSE
   && (64 == 64 || TARGET_AVX512VL)
   && 1) && 
#line 393 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512))))
            return -1;
          return 3087; /* ieee_minv16sf3_mask */

        case 4:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 3394 "../../gcc/config/i386/sse.md"
(TARGET_SSE
   && (32 == 64 || TARGET_AVX512VL)
   && 1) && 
#line 393 "../../gcc/config/i386/sse.md"
(TARGET_AVX))))
            return -1;
          return 3095; /* ieee_minv8sf3_mask */

        case 5:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 3394 "../../gcc/config/i386/sse.md"
(TARGET_SSE
   && (16 == 64 || TARGET_AVX512VL)
   && 1)))
            return -1;
          return 3100; /* ieee_minv4sf3_mask */

        case 6:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 3394 "../../gcc/config/i386/sse.md"
(TARGET_SSE
   && (64 == 64 || TARGET_AVX512VL)
   && 1) && 
#line 394 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512))))
            return -1;
          return 3107; /* ieee_minv8df3_mask */

        case 7:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 3394 "../../gcc/config/i386/sse.md"
(TARGET_SSE
   && (32 == 64 || TARGET_AVX512VL)
   && 1) && 
#line 394 "../../gcc/config/i386/sse.md"
(TARGET_AVX))))
            return -1;
          return 3115; /* ieee_minv4df3_mask */

        case 8:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 3394 "../../gcc/config/i386/sse.md"
(TARGET_SSE
   && (16 == 64 || TARGET_AVX512VL)
   && 1) && 
#line 395 "../../gcc/config/i386/sse.md"
(TARGET_SSE2))))
            return -1;
          return 3120; /* ieee_minv2df3_mask */

        case 9:
          if (!(
#line 3486 "../../gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 479 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16)))
            return -1;
          return 3155; /* avx512fp16_ieee_vmminv8hf3 */

        case 10:
          if (!
#line 3486 "../../gcc/config/i386/sse.md"
(TARGET_SSE))
            return -1;
          return 3163; /* sse_ieee_vmminv4sf3 */

        case 11:
          if (!(
#line 3486 "../../gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 480 "../../gcc/config/i386/sse.md"
(TARGET_SSE2)))
            return -1;
          return 3171; /* sse2_ieee_vmminv2df3 */

        default:
          return -1;
        }

    case 192:
      x4 = XVECEXP (x3, 0, 0);
      operands[1] = x4;
      x5 = XVECEXP (x3, 0, 1);
      operands[2] = x5;
      if (!const_0_to_255_operand (operands[2], E_SImode))
        return -1;
      x6 = XEXP (x2, 1);
      operands[3] = x6;
      x7 = XEXP (x2, 2);
      operands[4] = x7;
      switch (GET_MODE (operands[0]))
        {
        case E_V32HFmode:
          if (pattern1210 (x2, 
E_V32HFmode, 
E_SImode) != 0
              || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 4025 "../../gcc/config/i386/sse.md"
((TARGET_AVX512DQ || (VALID_AVX512FP16_REG_MODE (V32HFmode))) && 1) && 
#line 525 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_EVEX512))))
            return -1;
          return 3191; /* reducepv32hf_mask */

        case E_V16HFmode:
          if (pattern1210 (x2, 
E_V16HFmode, 
E_HImode) != 0
              || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 4025 "../../gcc/config/i386/sse.md"
((TARGET_AVX512DQ || (VALID_AVX512FP16_REG_MODE (V16HFmode))) && 1) && 
#line 526 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL))))
            return -1;
          return 3195; /* reducepv16hf_mask */

        case E_V8HFmode:
          if (pattern1210 (x2, 
E_V8HFmode, 
E_QImode) != 0
              || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 4025 "../../gcc/config/i386/sse.md"
((TARGET_AVX512DQ || (VALID_AVX512FP16_REG_MODE (V8HFmode))) && 1) && 
#line 527 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL))))
            return -1;
          return 3198; /* reducepv8hf_mask */

        case E_V16SFmode:
          if (pattern1210 (x2, 
E_V16SFmode, 
E_HImode) != 0
              || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 4025 "../../gcc/config/i386/sse.md"
((TARGET_AVX512DQ || (VALID_AVX512FP16_REG_MODE (V16SFmode))) && 1) && 
#line 528 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512))))
            return -1;
          return 3201; /* reducepv16sf_mask */

        case E_V8SFmode:
          if (pattern1210 (x2, 
E_V8SFmode, 
E_QImode) != 0
              || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 4025 "../../gcc/config/i386/sse.md"
((TARGET_AVX512DQ || (VALID_AVX512FP16_REG_MODE (V8SFmode))) && 1) && 
#line 528 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
            return -1;
          return 3205; /* reducepv8sf_mask */

        case E_V4SFmode:
          if (pattern1210 (x2, 
E_V4SFmode, 
E_QImode) != 0
              || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 4025 "../../gcc/config/i386/sse.md"
((TARGET_AVX512DQ || (VALID_AVX512FP16_REG_MODE (V4SFmode))) && 1) && 
#line 528 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
            return -1;
          return 3208; /* reducepv4sf_mask */

        case E_V8DFmode:
          if (pattern1210 (x2, 
E_V8DFmode, 
E_QImode) != 0
              || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 4025 "../../gcc/config/i386/sse.md"
((TARGET_AVX512DQ || (VALID_AVX512FP16_REG_MODE (V8DFmode))) && 1) && 
#line 529 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512))))
            return -1;
          return 3211; /* reducepv8df_mask */

        case E_V4DFmode:
          if (pattern1210 (x2, 
E_V4DFmode, 
E_QImode) != 0
              || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 4025 "../../gcc/config/i386/sse.md"
((TARGET_AVX512DQ || (VALID_AVX512FP16_REG_MODE (V4DFmode))) && 1) && 
#line 529 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
            return -1;
          return 3215; /* reducepv4df_mask */

        case E_V2DFmode:
          if (pattern1210 (x2, 
E_V2DFmode, 
E_QImode) != 0
              || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 4025 "../../gcc/config/i386/sse.md"
((TARGET_AVX512DQ || (VALID_AVX512FP16_REG_MODE (V2DFmode))) && 1) && 
#line 529 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
            return -1;
          return 3218; /* reducepv2df_mask */

        default:
          return -1;
        }

    case 221:
      switch (pattern460 (x2))
        {
        case 0:
          if (!(
#line 106 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 7305 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && 1) && 
#line 555 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512))))
            return -1;
          return 4376; /* avx512bw_fmulc_v32hf_mask */

        case 1:
          if (!(
#line 106 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 7305 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && 1) && 
#line 555 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
            return -1;
          return 4384; /* avx512vl_fmulc_v16hf_mask */

        case 2:
          if (!(
#line 106 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 7305 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && 1) && 
#line 555 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
            return -1;
          return 4392; /* avx512fp16_fmulc_v8hf_mask */

        case 3:
          if (!
#line 7509 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16))
            return -1;
          return 4407; /* avx512fp16_fmulcsh_v8hf */

        default:
          return -1;
        }

    case 222:
      switch (pattern460 (x2))
        {
        case 0:
          if (!(
#line 106 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 7305 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && 1) && 
#line 555 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512))))
            return -1;
          return 4380; /* avx512bw_fcmulc_v32hf_mask */

        case 1:
          if (!(
#line 106 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 7305 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && 1) && 
#line 555 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
            return -1;
          return 4388; /* avx512vl_fcmulc_v16hf_mask */

        case 2:
          if (!(
#line 106 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 7305 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && 1) && 
#line 555 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
            return -1;
          return 4394; /* avx512fp16_fcmulc_v8hf_mask */

        case 3:
          if (!
#line 7509 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16))
            return -1;
          return 4411; /* avx512fp16_fcmulcsh_v8hf */

        default:
          return -1;
        }

    case 58:
      return recog_130 (x1, insn, pnum_clobbers);

    case 165:
      x7 = XEXP (x2, 2);
      if (x7 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
        return -1;
      x4 = XVECEXP (x3, 0, 0);
      operands[1] = x4;
      x5 = XVECEXP (x3, 0, 1);
      operands[2] = x5;
      switch (pattern457 (x2))
        {
        case 0:
          if (!(
#line 14045 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 479 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16)))
            return -1;
          return 7064; /* avx512f_sgetexpv8hf */

        case 1:
          if (!
#line 14045 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F))
            return -1;
          return 7068; /* avx512f_sgetexpv4sf */

        case 2:
          if (!(
#line 14045 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 480 "../../gcc/config/i386/sse.md"
(TARGET_SSE2)))
            return -1;
          return 7072; /* avx512f_sgetexpv2df */

        default:
          return -1;
        }

    case 94:
      return recog_129 (x1, insn, pnum_clobbers);

    case 188:
      x4 = XVECEXP (x3, 0, 0);
      operands[1] = x4;
      x5 = XVECEXP (x3, 0, 1);
      operands[2] = x5;
      x6 = XEXP (x2, 1);
      operands[3] = x6;
      x7 = XEXP (x2, 2);
      operands[4] = x7;
      switch (GET_MODE (operands[0]))
        {
        case E_V16SImode:
          if (pattern463 (x2, 
E_HImode, 
E_V16SImode, 
E_V32HImode) != 0
              || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 16671 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && (64 == 64 || TARGET_AVX512VL)) && 
#line 653 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512))))
            return -1;
          return 7586; /* avx512bw_pmaddwd512v32hi_mask */

        case E_V8SImode:
          if (pattern463 (x2, 
E_QImode, 
E_V8SImode, 
E_V16HImode) != 0
              || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 16671 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && (32 == 64 || TARGET_AVX512VL)) && 
#line 653 "../../gcc/config/i386/sse.md"
(TARGET_AVX2))))
            return -1;
          return 7588; /* avx512bw_pmaddwd512v16hi_mask */

        case E_V4SImode:
          if (pattern463 (x2, 
E_QImode, 
E_V4SImode, 
E_V8HImode) != 0
              || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 16671 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && (16 == 64 || TARGET_AVX512VL))))
            return -1;
          return 7590; /* avx512bw_pmaddwd512v8hi_mask */

        default:
          return -1;
        }

    case 57:
      x4 = XVECEXP (x3, 0, 0);
      operands[1] = x4;
      x5 = XVECEXP (x3, 0, 1);
      operands[2] = x5;
      x6 = XEXP (x2, 1);
      operands[3] = x6;
      x7 = XEXP (x2, 2);
      operands[4] = x7;
      switch (GET_MODE (operands[0]))
        {
        case E_V64QImode:
          if (pattern1101 (x2, 
E_DImode, 
E_V64QImode, 
E_V32HImode) != 0
              || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 19376 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && (64 == 64 || TARGET_AVX512VL) && TARGET_AVX512BW) && 
#line 633 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512))))
            return -1;
          return 8311; /* avx512bw_packuswb_mask */

        case E_V32QImode:
          if (pattern1101 (x2, 
E_SImode, 
E_V32QImode, 
E_V16HImode) != 0
              || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 19376 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && (32 == 64 || TARGET_AVX512VL) && TARGET_AVX512BW) && 
#line 633 "../../gcc/config/i386/sse.md"
(TARGET_AVX2))))
            return -1;
          return 8313; /* avx2_packuswb_mask */

        case E_V16QImode:
          if (pattern1101 (x2, 
E_HImode, 
E_V16QImode, 
E_V8HImode) != 0
              || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 19376 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && (16 == 64 || TARGET_AVX512VL) && TARGET_AVX512BW)))
            return -1;
          return 8315; /* sse2_packuswb_mask */

        case E_V32HImode:
          if (pattern1101 (x2, 
E_SImode, 
E_V32HImode, 
E_V16SImode) != 0
              || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 23841 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1 && (64 == 64 || TARGET_AVX512VL) && TARGET_AVX512BW) && 
#line 653 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512))))
            return -1;
          return 8726; /* avx512bw_packusdw_mask */

        case E_V16HImode:
          if (pattern1101 (x2, 
E_HImode, 
E_V16HImode, 
E_V8SImode) != 0
              || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 23841 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1 && (32 == 64 || TARGET_AVX512VL) && TARGET_AVX512BW) && 
#line 653 "../../gcc/config/i386/sse.md"
(TARGET_AVX2))))
            return -1;
          return 8728; /* avx2_packusdw_mask */

        case E_V8HImode:
          if (pattern1101 (x2, 
E_QImode, 
E_V8HImode, 
E_V4SImode) != 0
              || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 23841 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1 && (16 == 64 || TARGET_AVX512VL) && TARGET_AVX512BW)))
            return -1;
          return 8730; /* sse4_1_packusdw_mask */

        default:
          return -1;
        }

    case 190:
      if (pattern461 (x2) != 0
          || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 20713 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512)))
        return -1;
      return 8441; /* avx512bw_pshuflwv32hi_mask */

    case 189:
      if (pattern461 (x2) != 0
          || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 20889 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512)))
        return -1;
      return 8447; /* avx512bw_pshufhwv32hi_mask */

    case 187:
      x4 = XVECEXP (x3, 0, 0);
      operands[1] = x4;
      x5 = XVECEXP (x3, 0, 1);
      operands[2] = x5;
      x6 = XEXP (x2, 1);
      operands[3] = x6;
      x7 = XEXP (x2, 2);
      operands[4] = x7;
      switch (GET_MODE (operands[0]))
        {
        case E_V8HImode:
          if (pattern463 (x2, 
E_QImode, 
E_V8HImode, 
E_V16QImode) != 0
              || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 22792 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 686 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
            return -1;
          return 8604; /* avx512bw_pmaddubsw512v8hi_mask */

        case E_V16HImode:
          if (pattern463 (x2, 
E_HImode, 
E_V16HImode, 
E_V32QImode) != 0
              || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 22792 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 686 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
            return -1;
          return 8606; /* avx512bw_pmaddubsw512v16hi_mask */

        case E_V32HImode:
          if (pattern463 (x2, 
E_SImode, 
E_V32HImode, 
E_V64QImode) != 0
              || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 22792 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 686 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512))))
            return -1;
          return 8608; /* avx512bw_pmaddubsw512v32hi_mask */

        default:
          return -1;
        }

    case 52:
      switch (pattern462 (x2))
        {
        case 0:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 23117 "../../gcc/config/i386/sse.md"
(TARGET_SSSE3 && (64 == 64 || TARGET_AVX512VL) && TARGET_AVX512BW) && 
#line 633 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512))))
            return -1;
          return 8622; /* avx512bw_pshufbv64qi3_mask */

        case 1:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 23117 "../../gcc/config/i386/sse.md"
(TARGET_SSSE3 && (32 == 64 || TARGET_AVX512VL) && TARGET_AVX512BW) && 
#line 633 "../../gcc/config/i386/sse.md"
(TARGET_AVX2))))
            return -1;
          return 8624; /* avx2_pshufbv32qi3_mask */

        case 2:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 23117 "../../gcc/config/i386/sse.md"
(TARGET_SSSE3 && (16 == 64 || TARGET_AVX512VL) && TARGET_AVX512BW)))
            return -1;
          return 8626; /* ssse3_pshufbv16qi3_mask */

        default:
          return -1;
        }

    case 151:
      return recog_128 (x1, insn, pnum_clobbers);

    case 144:
      x4 = XVECEXP (x3, 0, 0);
      operands[1] = x4;
      x5 = XVECEXP (x3, 0, 1);
      operands[2] = x5;
      x6 = XEXP (x2, 1);
      operands[3] = x6;
      x7 = XEXP (x2, 2);
      operands[4] = x7;
      switch (GET_MODE (operands[0]))
        {
        case E_V16SFmode:
          if (pattern1104 (x2, 
E_V16SFmode, 
E_V16SImode, 
E_HImode) != 0
              || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 28121 "../../gcc/config/i386/sse.md"
(TARGET_AVX && (64 == 64 || TARGET_AVX512VL)) && 
#line 375 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512))))
            return -1;
          return 9349; /* avx512f_vpermilvarv16sf3_mask */

        case E_V8SFmode:
          if (pattern1104 (x2, 
E_V8SFmode, 
E_V8SImode, 
E_QImode) != 0
              || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 28121 "../../gcc/config/i386/sse.md"
(TARGET_AVX && (32 == 64 || TARGET_AVX512VL)) && 
#line 375 "../../gcc/config/i386/sse.md"
(TARGET_AVX))))
            return -1;
          return 9351; /* avx_vpermilvarv8sf3_mask */

        case E_V4SFmode:
          if (pattern1104 (x2, 
E_V4SFmode, 
E_V4SImode, 
E_QImode) != 0
              || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 28121 "../../gcc/config/i386/sse.md"
(TARGET_AVX && (16 == 64 || TARGET_AVX512VL))))
            return -1;
          return 9353; /* avx_vpermilvarv4sf3_mask */

        case E_V8DFmode:
          if (pattern1104 (x2, 
E_V8DFmode, 
E_V8DImode, 
E_QImode) != 0
              || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 28121 "../../gcc/config/i386/sse.md"
(TARGET_AVX && (64 == 64 || TARGET_AVX512VL)) && 
#line 376 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512))))
            return -1;
          return 9355; /* avx512f_vpermilvarv8df3_mask */

        case E_V4DFmode:
          if (pattern1104 (x2, 
E_V4DFmode, 
E_V4DImode, 
E_QImode) != 0
              || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 28121 "../../gcc/config/i386/sse.md"
(TARGET_AVX && (32 == 64 || TARGET_AVX512VL)) && 
#line 376 "../../gcc/config/i386/sse.md"
(TARGET_AVX))))
            return -1;
          return 9357; /* avx_vpermilvarv4df3_mask */

        case E_V2DFmode:
          if (pattern1104 (x2, 
E_V2DFmode, 
E_V2DImode, 
E_QImode) != 0
              || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 28121 "../../gcc/config/i386/sse.md"
(TARGET_AVX && (16 == 64 || TARGET_AVX512VL)) && 
#line 377 "../../gcc/config/i386/sse.md"
(TARGET_SSE2))))
            return -1;
          return 9359; /* avx_vpermilvarv2df3_mask */

        default:
          return -1;
        }

    case 150:
      x4 = XVECEXP (x3, 0, 0);
      operands[1] = x4;
      x5 = XVECEXP (x3, 0, 1);
      operands[2] = x5;
      if (!const_0_to_255_operand (operands[2], E_SImode))
        return -1;
      switch (GET_MODE (operands[0]))
        {
        case E_V8HImode:
          if (pattern1001 (x2, 
E_QImode, 
E_V8SFmode, 
E_V8HImode) != 0)
            return -1;
          x7 = XEXP (x2, 2);
          operands[4] = x7;
          if (register_operand (operands[0], E_V8HImode))
            {
              x6 = XEXP (x2, 1);
              operands[3] = x6;
              if (nonimm_or_0_operand (operands[3], E_V8HImode)
                  && (
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 29167 "../../gcc/config/i386/sse.md"
(TARGET_F16C || TARGET_AVX512VL)))
                return 9659; /* vcvtps2ph256_mask */
            }
          operands[3] = x7;
          if (!memory_operand (operands[0], E_V8HImode))
            return -1;
          x6 = XEXP (x2, 1);
          if (!rtx_equal_p (x6, operands[0])
              || !(
#line 96 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 29179 "../../gcc/config/i386/sse.md"
(TARGET_F16C || TARGET_AVX512VL)))
            return -1;
          return 9661; /* *vcvtps2ph256_merge_mask */

        case E_V16HImode:
          if (pattern1001 (x2, 
E_HImode, 
E_V16SFmode, 
E_V16HImode) != 0)
            return -1;
          x7 = XEXP (x2, 2);
          operands[4] = x7;
          if (register_operand (operands[0], E_V16HImode))
            {
              x6 = XEXP (x2, 1);
              operands[3] = x6;
              if (nonimm_or_0_operand (operands[3], E_V16HImode)
                  && (
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 29218 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
                return 9664; /* avx512f_vcvtps2ph512_mask */
            }
          operands[3] = x7;
          if (!memory_operand (operands[0], E_V16HImode))
            return -1;
          x6 = XEXP (x2, 1);
          if (!rtx_equal_p (x6, operands[0])
              || !(
#line 96 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 29230 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 9667; /* *avx512f_vcvtps2ph512_merge_mask */

        default:
          return -1;
        }

    case 166:
      return recog_131 (x1, insn, pnum_clobbers);

    case 197:
      x4 = XVECEXP (x3, 0, 0);
      operands[1] = x4;
      x5 = XVECEXP (x3, 0, 1);
      operands[2] = x5;
      x6 = XEXP (x2, 1);
      operands[3] = x6;
      x7 = XEXP (x2, 2);
      operands[4] = x7;
      switch (GET_MODE (operands[0]))
        {
        case E_V64QImode:
          if (pattern1105 (x2, 
E_V64QImode, 
E_DImode) != 0
              || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 30270 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VBMI) && 
#line 328 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512))))
            return -1;
          return 10124; /* vpmultishiftqbv64qi_mask */

        case E_V16QImode:
          if (pattern1105 (x2, 
E_V16QImode, 
E_HImode) != 0
              || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 30270 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VBMI) && 
#line 328 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
            return -1;
          return 10126; /* vpmultishiftqbv16qi_mask */

        case E_V32QImode:
          if (pattern1105 (x2, 
E_V32QImode, 
E_SImode) != 0
              || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 30270 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VBMI) && 
#line 328 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
            return -1;
          return 10128; /* vpmultishiftqbv32qi_mask */

        default:
          return -1;
        }

    case 200:
      switch (pattern462 (x2))
        {
        case 0:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 30379 "../../gcc/config/i386/sse.md"
(TARGET_GFNI) && 
#line 636 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512))))
            return -1;
          return 10174; /* vgf2p8mulb_v64qi_mask */

        case 1:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 30379 "../../gcc/config/i386/sse.md"
(TARGET_GFNI) && 
#line 636 "../../gcc/config/i386/sse.md"
(TARGET_AVX))))
            return -1;
          return 10176; /* vgf2p8mulb_v32qi_mask */

        case 2:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 30379 "../../gcc/config/i386/sse.md"
(TARGET_GFNI)))
            return -1;
          return 10178; /* vgf2p8mulb_v16qi_mask */

        default:
          return -1;
        }

    case 249:
      switch (pattern464 (x2))
        {
        case 0:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 31728 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256) && 
#line 562 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_512))))
            return -1;
          return 10444; /* vcvtne2ph2bf8v32hf_mask */

        case 1:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 31728 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256)))
            return -1;
          return 10452; /* vcvtne2ph2bf8v16hf_mask */

        case 2:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 31728 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256)))
            return -1;
          return 10460; /* vcvtne2ph2bf8v8hf_mask */

        default:
          return -1;
        }

    case 250:
      switch (pattern464 (x2))
        {
        case 0:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 31728 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256) && 
#line 562 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_512))))
            return -1;
          return 10446; /* vcvtne2ph2bf8sv32hf_mask */

        case 1:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 31728 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256)))
            return -1;
          return 10454; /* vcvtne2ph2bf8sv16hf_mask */

        case 2:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 31728 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256)))
            return -1;
          return 10462; /* vcvtne2ph2bf8sv8hf_mask */

        default:
          return -1;
        }

    case 251:
      switch (pattern464 (x2))
        {
        case 0:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 31728 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256) && 
#line 562 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_512))))
            return -1;
          return 10448; /* vcvtne2ph2hf8v32hf_mask */

        case 1:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 31728 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256)))
            return -1;
          return 10456; /* vcvtne2ph2hf8v16hf_mask */

        case 2:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 31728 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256)))
            return -1;
          return 10464; /* vcvtne2ph2hf8v8hf_mask */

        default:
          return -1;
        }

    case 252:
      switch (pattern464 (x2))
        {
        case 0:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 31728 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256) && 
#line 562 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_512))))
            return -1;
          return 10450; /* vcvtne2ph2hf8sv32hf_mask */

        case 1:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 31728 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256)))
            return -1;
          return 10458; /* vcvtne2ph2hf8sv16hf_mask */

        case 2:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 31728 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256)))
            return -1;
          return 10466; /* vcvtne2ph2hf8sv8hf_mask */

        default:
          return -1;
        }

    case 245:
      switch (pattern466 (x2))
        {
        case 0:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 31817 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256) && 
#line 31809 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_512))))
            return -1;
          return 10476; /* vcvtbiasph2bf8v32hf_mask */

        case 1:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 31817 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256)))
            return -1;
          return 10484; /* vcvtbiasph2bf8v16hf_mask */

        default:
          return -1;
        }

    case 246:
      switch (pattern466 (x2))
        {
        case 0:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 31817 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256) && 
#line 31809 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_512))))
            return -1;
          return 10478; /* vcvtbiasph2bf8sv32hf_mask */

        case 1:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 31817 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256)))
            return -1;
          return 10486; /* vcvtbiasph2bf8sv16hf_mask */

        default:
          return -1;
        }

    case 247:
      switch (pattern466 (x2))
        {
        case 0:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 31817 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256) && 
#line 31809 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_512))))
            return -1;
          return 10480; /* vcvtbiasph2hf8v32hf_mask */

        case 1:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 31817 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256)))
            return -1;
          return 10488; /* vcvtbiasph2hf8v16hf_mask */

        default:
          return -1;
        }

    case 248:
      switch (pattern466 (x2))
        {
        case 0:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 31817 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256) && 
#line 31809 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_512))))
            return -1;
          return 10482; /* vcvtbiasph2hf8sv32hf_mask */

        case 1:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 31817 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256)))
            return -1;
          return 10490; /* vcvtbiasph2hf8sv16hf_mask */

        default:
          return -1;
        }

    case 258:
      x4 = XVECEXP (x3, 0, 0);
      operands[1] = x4;
      x5 = XVECEXP (x3, 0, 1);
      operands[2] = x5;
      x6 = XEXP (x2, 1);
      operands[3] = x6;
      x7 = XEXP (x2, 2);
      operands[4] = x7;
      switch (GET_MODE (operands[0]))
        {
        case E_V32BFmode:
          if (pattern1105 (x2, 
E_V32BFmode, 
E_SImode) != 0
              || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 32084 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256) && 
#line 565 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_512))))
            return -1;
          return 10585; /* avx10_2_scalefpbf16_v32bf_mask */

        case E_V16BFmode:
          if (pattern1105 (x2, 
E_V16BFmode, 
E_HImode) != 0
              || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 32084 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256)))
            return -1;
          return 10587; /* avx10_2_scalefpbf16_v16bf_mask */

        case E_V8BFmode:
          if (pattern1105 (x2, 
E_V8BFmode, 
E_QImode) != 0
              || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 32084 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256)))
            return -1;
          return 10589; /* avx10_2_scalefpbf16_v8bf_mask */

        default:
          return -1;
        }

    case 259:
      switch (pattern468 (x2))
        {
        case 0:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 32425 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256) && 
#line 565 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_512))))
            return -1;
          return 10699; /* avx10_2_rndscalenepbf16_v32bf_mask */

        case 1:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 32425 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256)))
            return -1;
          return 10705; /* avx10_2_rndscalenepbf16_v16bf_mask */

        case 2:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 32425 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256)))
            return -1;
          return 10711; /* avx10_2_rndscalenepbf16_v8bf_mask */

        default:
          return -1;
        }

    case 260:
      switch (pattern468 (x2))
        {
        case 0:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 32425 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256) && 
#line 565 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_512))))
            return -1;
          return 10701; /* avx10_2_reducenepbf16_v32bf_mask */

        case 1:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 32425 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256)))
            return -1;
          return 10707; /* avx10_2_reducenepbf16_v16bf_mask */

        case 2:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 32425 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256)))
            return -1;
          return 10713; /* avx10_2_reducenepbf16_v8bf_mask */

        default:
          return -1;
        }

    case 261:
      switch (pattern468 (x2))
        {
        case 0:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 32425 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256) && 
#line 565 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_512))))
            return -1;
          return 10703; /* avx10_2_getmantpbf16_v32bf_mask */

        case 1:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 32425 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256)))
            return -1;
          return 10709; /* avx10_2_getmantpbf16_v16bf_mask */

        case 2:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 32425 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256)))
            return -1;
          return 10715; /* avx10_2_getmantpbf16_v8bf_mask */

        default:
          return -1;
        }

    default:
      return -1;
    }
}

 int
recog_171 (rtx x1 ATTRIBUTE_UNUSED,
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
  x5 = XVECEXP (x4, 0, 1);
  operands[3] = x5;
  x6 = XVECEXP (x4, 0, 2);
  operands[4] = x6;
  x7 = XVECEXP (x4, 0, 3);
  operands[5] = x7;
  x8 = XVECEXP (x4, 0, 5);
  operands[7] = x8;
  x9 = XVECEXP (x4, 0, 6);
  operands[8] = x9;
  x10 = XVECEXP (x4, 0, 7);
  operands[9] = x10;
  x11 = XEXP (x2, 1);
  operands[10] = x11;
  x12 = XEXP (x2, 2);
  operands[11] = x12;
  if (!register_operand (operands[11], E_QImode))
    return -1;
  switch (GET_MODE (operands[0]))
    {
    case E_V8DFmode:
      if (!register_operand (operands[0], E_V8DFmode)
          || GET_MODE (x2) != E_V8DFmode
          || GET_MODE (x3) != E_V8DFmode
          || !register_operand (operands[1], E_V8DFmode)
          || pattern1804 () != 0
          || !nonimm_or_0_operand (operands[10], E_V8DFmode)
          || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
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
(TARGET_EVEX512))))
        return -1;
      return 8419; /* *avx512f_shuf_f64x2_1_mask_1 */

    case E_V8DImode:
      if (!register_operand (operands[0], E_V8DImode)
          || GET_MODE (x2) != E_V8DImode
          || GET_MODE (x3) != E_V8DImode
          || !nonimm_or_0_operand (operands[10], E_V8DImode))
        return -1;
      if (register_operand (operands[1], E_V8DImode)
          && pattern1804 () == 0
          && (
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
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
(TARGET_EVEX512))))
        return 8421; /* *avx512f_shuf_i64x2_1_mask_1 */
      if (!nonimmediate_operand (operands[1], E_V8DImode)
          || pattern1805 () != 0
          || !(
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
      return 9173; /* avx512f_permv8di_1_mask */

    case E_V8SImode:
      if (pattern755 (x2, 
E_V8SImode) != 0
          || pattern1805 () != 0
          || !nonimm_or_0_operand (operands[10], E_V8SImode)
          || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 20628 "../../gcc/config/i386/sse.md"
(TARGET_AVX2
   && TARGET_AVX512VL
   && INTVAL (operands[2]) + 4 == INTVAL (operands[6])
   && INTVAL (operands[3]) + 4 == INTVAL (operands[7])
   && INTVAL (operands[4]) + 4 == INTVAL (operands[8])
   && INTVAL (operands[5]) + 4 == INTVAL (operands[9]))))
        return -1;
      return 8437; /* avx2_pshufd_1_mask */

    default:
      return -1;
    }
}

 int
recog_183 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12, x13, x14, x15, x16, x17;
  rtx x18, x19, x20, x21, x22;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  switch (GET_CODE (x4))
    {
    case SS_TRUNCATE:
      x5 = XEXP (x3, 1);
      if (GET_CODE (x5) != SS_TRUNCATE)
        return -1;
      x6 = XEXP (x4, 0);
      operands[1] = x6;
      x7 = XEXP (x5, 0);
      operands[2] = x7;
      x8 = XEXP (x2, 1);
      operands[3] = x8;
      x9 = XEXP (x2, 2);
      operands[4] = x9;
      switch (GET_MODE (operands[0]))
        {
        case E_V16QImode:
          if (pattern1120 (x2, 
E_HImode, 
E_V16QImode, 
E_V8HImode, 
E_V8QImode) != 0
              || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 19212 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && TARGET_AVX512VL && TARGET_AVX512BW)))
            return -1;
          return 8299; /* sse2_packsswb_mask */

        case E_V8HImode:
          if (pattern1120 (x2, 
E_QImode, 
E_V8HImode, 
E_V4SImode, 
E_V4HImode) != 0
              || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 19306 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && TARGET_AVX512VL && TARGET_AVX512BW)))
            return -1;
          return 8305; /* sse2_packssdw_mask */

        default:
          return -1;
        }

    case REG:
    case SUBREG:
    case MEM:
      operands[2] = x4;
      x5 = XEXP (x3, 1);
      if (GET_CODE (x5) != VEC_SELECT)
        return -1;
      x10 = XEXP (x5, 1);
      if (GET_CODE (x10) != PARALLEL)
        return -1;
      x7 = XEXP (x5, 0);
      operands[1] = x7;
      x8 = XEXP (x2, 1);
      operands[3] = x8;
      x9 = XEXP (x2, 2);
      operands[4] = x9;
      switch (XVECLEN (x10, 0))
        {
        case 8:
          x11 = XVECEXP (x10, 0, 0);
          if (x11 != const_int_rtx[MAX_SAVED_CONST_INT + 8])
            return -1;
          x12 = XVECEXP (x10, 0, 1);
          if (x12 != const_int_rtx[MAX_SAVED_CONST_INT + 9])
            return -1;
          x13 = XVECEXP (x10, 0, 2);
          if (x13 != const_int_rtx[MAX_SAVED_CONST_INT + 10]
              || pattern1413 (x10, 
15, 
14, 
13, 
12, 
11) != 0
              || !register_operand (operands[4], E_HImode))
            return -1;
          switch (GET_MODE (operands[0]))
            {
            case E_V16SFmode:
              if (pattern1517 (x2, 
E_V16SFmode, 
E_V8SFmode) != 0
                  || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 20095 "../../gcc/config/i386/sse.md"
(TARGET_AVX512DQ) && 
#line 722 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512))))
                return -1;
              return 8395; /* vec_set_lo_v16sf_mask */

            case E_V16SImode:
              if (pattern1517 (x2, 
E_V16SImode, 
E_V8SImode) != 0
                  || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 20095 "../../gcc/config/i386/sse.md"
(TARGET_AVX512DQ) && 
#line 722 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512))))
                return -1;
              return 8397; /* vec_set_lo_v16si_mask */

            default:
              return -1;
            }

        case 4:
          if (pattern1216 (x10, 
7, 
6, 
5, 
4) != 0
              || !register_operand (operands[4], E_QImode))
            return -1;
          switch (GET_MODE (operands[0]))
            {
            case E_V8DFmode:
              if (pattern1517 (x2, 
E_V8DFmode, 
E_V4DFmode) != 0
                  || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 20127 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 718 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512))))
                return -1;
              return 8403; /* vec_set_lo_v8df_mask */

            case E_V8DImode:
              if (pattern1517 (x2, 
E_V8DImode, 
E_V4DImode) != 0
                  || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 20127 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 718 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512))))
                return -1;
              return 8405; /* vec_set_lo_v8di_mask */

            case E_V8SImode:
              if (pattern1517 (x2, 
E_V8SImode, 
E_V4SImode) != 0
                  || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 28481 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
                return -1;
              return 9467; /* vec_set_lo_v8si_mask */

            case E_V8SFmode:
              if (pattern1517 (x2, 
E_V8SFmode, 
E_V4SFmode) != 0
                  || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 28481 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
                return -1;
              return 9469; /* vec_set_lo_v8sf_mask */

            default:
              return -1;
            }

        case 2:
          x11 = XVECEXP (x10, 0, 0);
          if (x11 != const_int_rtx[MAX_SAVED_CONST_INT + 2])
            return -1;
          x12 = XVECEXP (x10, 0, 1);
          if (x12 != const_int_rtx[MAX_SAVED_CONST_INT + 3]
              || !register_operand (operands[4], E_QImode))
            return -1;
          switch (GET_MODE (operands[0]))
            {
            case E_V4DImode:
              if (pattern1517 (x2, 
E_V4DImode, 
E_V2DImode) != 0
                  || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 28432 "../../gcc/config/i386/sse.md"
(TARGET_AVX && TARGET_AVX512DQ)))
                return -1;
              return 9459; /* vec_set_lo_v4di_mask */

            case E_V4DFmode:
              if (pattern1517 (x2, 
E_V4DFmode, 
E_V2DFmode) != 0
                  || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 28432 "../../gcc/config/i386/sse.md"
(TARGET_AVX && TARGET_AVX512DQ)))
                return -1;
              return 9461; /* vec_set_lo_v4df_mask */

            default:
              return -1;
            }

        default:
          return -1;
        }

    case VEC_SELECT:
      x14 = XEXP (x4, 1);
      if (GET_CODE (x14) != PARALLEL)
        return -1;
      x6 = XEXP (x4, 0);
      operands[1] = x6;
      x5 = XEXP (x3, 1);
      operands[2] = x5;
      x8 = XEXP (x2, 1);
      operands[3] = x8;
      x9 = XEXP (x2, 2);
      operands[4] = x9;
      switch (XVECLEN (x14, 0))
        {
        case 8:
          if (pattern640 (x14) != 0)
            return -1;
          x15 = XVECEXP (x14, 0, 4);
          if (x15 != const_int_rtx[MAX_SAVED_CONST_INT + 4])
            return -1;
          x16 = XVECEXP (x14, 0, 5);
          if (x16 != const_int_rtx[MAX_SAVED_CONST_INT + 5])
            return -1;
          x17 = XVECEXP (x14, 0, 6);
          if (x17 != const_int_rtx[MAX_SAVED_CONST_INT + 6])
            return -1;
          x18 = XVECEXP (x14, 0, 7);
          if (x18 != const_int_rtx[MAX_SAVED_CONST_INT + 7]
              || !register_operand (operands[4], E_HImode))
            return -1;
          switch (GET_MODE (operands[0]))
            {
            case E_V16SFmode:
              if (pattern1474 (x2, 
E_V16SFmode, 
E_V8SFmode) != 0
                  || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 20112 "../../gcc/config/i386/sse.md"
(TARGET_AVX512DQ) && 
#line 722 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512))))
                return -1;
              return 8399; /* vec_set_hi_v16sf_mask */

            case E_V16SImode:
              if (pattern1474 (x2, 
E_V16SImode, 
E_V8SImode) != 0
                  || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 20112 "../../gcc/config/i386/sse.md"
(TARGET_AVX512DQ) && 
#line 722 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512))))
                return -1;
              return 8401; /* vec_set_hi_v16si_mask */

            default:
              return -1;
            }

        case 4:
          if (pattern640 (x14) != 0
              || !register_operand (operands[4], E_QImode))
            return -1;
          switch (GET_MODE (operands[0]))
            {
            case E_V8DFmode:
              if (pattern1474 (x2, 
E_V8DFmode, 
E_V4DFmode) != 0
                  || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 20142 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 718 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512))))
                return -1;
              return 8407; /* vec_set_hi_v8df_mask */

            case E_V8DImode:
              if (pattern1474 (x2, 
E_V8DImode, 
E_V4DImode) != 0
                  || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 20142 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 718 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512))))
                return -1;
              return 8409; /* vec_set_hi_v8di_mask */

            case E_V8SImode:
              if (pattern1474 (x2, 
E_V8SImode, 
E_V4SImode) != 0
                  || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 28504 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
                return -1;
              return 9471; /* vec_set_hi_v8si_mask */

            case E_V8SFmode:
              if (pattern1474 (x2, 
E_V8SFmode, 
E_V4SFmode) != 0
                  || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 28504 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
                return -1;
              return 9473; /* vec_set_hi_v8sf_mask */

            default:
              return -1;
            }

        case 2:
          x19 = XVECEXP (x14, 0, 0);
          if (x19 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
            return -1;
          x20 = XVECEXP (x14, 0, 1);
          if (x20 != const_int_rtx[MAX_SAVED_CONST_INT + 1]
              || !register_operand (operands[4], E_QImode))
            return -1;
          switch (GET_MODE (operands[0]))
            {
            case E_V4DImode:
              if (pattern1474 (x2, 
E_V4DImode, 
E_V2DImode) != 0
                  || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 28456 "../../gcc/config/i386/sse.md"
(TARGET_AVX && TARGET_AVX512DQ)))
                return -1;
              return 9463; /* vec_set_hi_v4di_mask */

            case E_V4DFmode:
              if (pattern1474 (x2, 
E_V4DFmode, 
E_V2DFmode) != 0
                  || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 28456 "../../gcc/config/i386/sse.md"
(TARGET_AVX && TARGET_AVX512DQ)))
                return -1;
              return 9465; /* vec_set_hi_v4df_mask */

            default:
              return -1;
            }

        default:
          return -1;
        }

    case UNSPEC:
      if (XVECLEN (x4, 0) != 2
          || XINT (x4, 1) != 150
          || GET_MODE (x4) != E_V4HImode
          || !register_operand (operands[0], E_V8HImode)
          || GET_MODE (x2) != E_V8HImode
          || GET_MODE (x3) != E_V8HImode)
        return -1;
      x21 = XVECEXP (x4, 0, 0);
      operands[1] = x21;
      if (!register_operand (operands[1], E_V4SFmode))
        return -1;
      x22 = XVECEXP (x4, 0, 1);
      operands[2] = x22;
      if (!const_0_to_255_operand (operands[2], E_SImode))
        return -1;
      x5 = XEXP (x3, 1);
      operands[3] = x5;
      if (!const0_operand (operands[3], E_V4HImode))
        return -1;
      x8 = XEXP (x2, 1);
      operands[4] = x8;
      if (!nonimm_or_0_operand (operands[4], E_V8HImode))
        return -1;
      x9 = XEXP (x2, 2);
      operands[5] = x9;
      if (!register_operand (operands[5], E_QImode)
          || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 29145 "../../gcc/config/i386/sse.md"
((TARGET_F16C || TARGET_AVX512VL) && TARGET_AVX512VL)))
        return -1;
      return 9656; /* *vcvtps2ph_mask */

    case FLOAT_TRUNCATE:
      x5 = XEXP (x3, 1);
      if (GET_CODE (x5) != FLOAT_TRUNCATE)
        return -1;
      x6 = XEXP (x4, 0);
      operands[2] = x6;
      x7 = XEXP (x5, 0);
      operands[1] = x7;
      x8 = XEXP (x2, 1);
      operands[3] = x8;
      x9 = XEXP (x2, 2);
      operands[4] = x9;
      switch (GET_MODE (operands[0]))
        {
        case E_V32BFmode:
          if (pattern1122 (x2, 
E_SImode, 
E_V32BFmode, 
E_V16SFmode, 
E_V16BFmode) != 0
              || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 31009 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BF16) && 
#line 30975 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512))))
            return -1;
          return 10335; /* avx512f_cvtne2ps2bf16_v32bf_mask */

        case E_V16BFmode:
          if (pattern1122 (x2, 
E_HImode, 
E_V16BFmode, 
E_V8SFmode, 
E_V8BFmode) != 0
              || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 31009 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BF16) && 
#line 30975 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
            return -1;
          return 10337; /* avx512f_cvtne2ps2bf16_v16bf_mask */

        case E_V8BFmode:
          if (pattern1122 (x2, 
E_QImode, 
E_V8BFmode, 
E_V4SFmode, 
E_V4BFmode) != 0
              || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 31009 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BF16) && 
#line 30975 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
            return -1;
          return 10339; /* avx512f_cvtne2ps2bf16_v8bf_mask */

        case E_V32HFmode:
          if (pattern1123 (x2, 
E_SImode, 
E_V32HFmode, 
E_V16SFmode, 
E_V16HFmode) != 0
              || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 31706 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256 && 1) && 
#line 562 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_512))))
            return -1;
          return 10435; /* avx10_2_cvt2ps2phx_v32hf_mask */

        case E_V16HFmode:
          if (pattern1123 (x2, 
E_HImode, 
E_V16HFmode, 
E_V8SFmode, 
E_V8HFmode) != 0
              || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 31706 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256 && 1)))
            return -1;
          return 10439; /* avx10_2_cvt2ps2phx_v16hf_mask */

        case E_V8HFmode:
          if (pattern1123 (x2, 
E_QImode, 
E_V8HFmode, 
E_V4SFmode, 
E_V4HFmode) != 0
              || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 31706 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256 && 1)))
            return -1;
          return 10442; /* avx10_2_cvt2ps2phx_v8hf_mask */

        default:
          return -1;
        }

    default:
      return -1;
    }
}

 int
recog_189 (rtx x1 ATTRIBUTE_UNUSED,
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
      x5 = XEXP (x2, 1);
      operands[2] = x5;
      x6 = XEXP (x2, 2);
      operands[3] = x6;
      switch (GET_MODE (operands[0]))
        {
        case E_V8DFmode:
          if (pattern773 (x2, 
E_V8DFmode, 
E_QImode) != 0)
            return -1;
          switch (GET_MODE (operands[1]))
            {
            case E_V8HFmode:
              if (!vector_operand (operands[1], E_V8HFmode)
                  || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 8018 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && 1) && 
#line 1004 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512))))
                return -1;
              return 4709; /* avx512fp16_float_extend_phv8df2_mask */

            case E_V8SFmode:
              if (!vector_operand (operands[1], E_V8SFmode)
                  || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 10221 "../../gcc/config/i386/sse.md"
(TARGET_AVX && (64 == 64 || TARGET_AVX512VL) && 1) && 
#line 468 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512))))
                return -1;
              return 5185; /* avx512f_cvtps2pd512_mask */

            default:
              return -1;
            }

        case E_V16SFmode:
          if (pattern774 (x2, 
E_V16SFmode, 
E_HImode, 
E_V16HFmode) != 0
              || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 8018 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && 1) && 
#line 1004 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512))))
            return -1;
          return 4713; /* avx512fp16_float_extend_phv16sf2_mask */

        case E_V8SFmode:
          if (pattern774 (x2, 
E_V8SFmode, 
E_QImode, 
E_V8HFmode) != 0
              || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 8018 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && 1) && 
#line 1004 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
            return -1;
          return 4717; /* avx512fp16_float_extend_phv8sf2_mask */

        case E_V4DFmode:
          if (pattern773 (x2, 
E_V4DFmode, 
E_QImode) != 0)
            return -1;
          switch (GET_MODE (operands[1]))
            {
            case E_V4HFmode:
              if (!memory_operand (operands[1], E_V4HFmode)
                  || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 8057 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL)))
                return -1;
              return 4726; /* *avx512fp16_float_extend_phv4df2_load_mask */

            case E_V4SFmode:
              if (!vector_operand (operands[1], E_V4SFmode)
                  || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 10221 "../../gcc/config/i386/sse.md"
(TARGET_AVX && (32 == 64 || TARGET_AVX512VL) && 1)))
                return -1;
              return 5189; /* avx_cvtps2pd256_mask */

            default:
              return -1;
            }

        case E_V4SFmode:
          if (pattern147 (x2, 
E_V4SFmode, 
E_V4HFmode) != 0
              || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 8057 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL)))
            return -1;
          return 4728; /* *avx512fp16_float_extend_phv4sf2_load_mask */

        case E_V2DFmode:
          if (pattern773 (x2, 
E_V2DFmode, 
E_QImode) != 0)
            return -1;
          switch (GET_MODE (operands[1]))
            {
            case E_V2HFmode:
              if (!memory_operand (operands[1], E_V2HFmode)
                  || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 8096 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL)))
                return -1;
              return 4732; /* *avx512fp16_float_extend_phv2df2_load_mask */

            case E_V2SFmode:
              if (!memory_operand (operands[1], E_V2SFmode)
                  || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 10403 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && TARGET_AVX512VL)))
                return -1;
              return 5238; /* sse2_cvtps2pd_mask_1 */

            default:
              return -1;
            }

        default:
          return -1;
        }

    case VEC_SELECT:
      x7 = XEXP (x4, 1);
      if (GET_CODE (x7) != PARALLEL)
        return -1;
      switch (XVECLEN (x7, 0))
        {
        case 4:
          if (pattern640 (x7) != 0
              || GET_MODE (x4) != E_V4HFmode)
            return -1;
          x8 = XEXP (x4, 0);
          operands[1] = x8;
          if (!register_operand (operands[1], E_V8HFmode))
            return -1;
          x5 = XEXP (x2, 1);
          operands[2] = x5;
          x6 = XEXP (x2, 2);
          operands[3] = x6;
          if (!register_operand (operands[3], E_QImode))
            return -1;
          switch (GET_MODE (operands[0]))
            {
            case E_V4DFmode:
              if (pattern134 (x2, 
E_V4DFmode) != 0
                  || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 8047 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL && 1)))
                return -1;
              return 4721; /* avx512fp16_float_extend_phv4df2_mask */

            case E_V4SFmode:
              if (pattern134 (x2, 
E_V4SFmode) != 0
                  || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 8047 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL && 1)))
                return -1;
              return 4724; /* avx512fp16_float_extend_phv4sf2_mask */

            default:
              return -1;
            }

        case 2:
          x9 = XVECEXP (x7, 0, 0);
          if (x9 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
            return -1;
          x10 = XVECEXP (x7, 0, 1);
          if (x10 != const_int_rtx[MAX_SAVED_CONST_INT + 1]
              || !register_operand (operands[0], E_V2DFmode)
              || GET_MODE (x2) != E_V2DFmode
              || GET_MODE (x3) != E_V2DFmode)
            return -1;
          x6 = XEXP (x2, 2);
          switch (GET_CODE (x6))
            {
            case REG:
            case SUBREG:
              operands[3] = x6;
              if (!register_operand (operands[3], E_QImode))
                return -1;
              x8 = XEXP (x4, 0);
              operands[1] = x8;
              x5 = XEXP (x2, 1);
              operands[2] = x5;
              if (!nonimm_or_0_operand (operands[2], E_V2DFmode))
                return -1;
              switch (GET_MODE (x4))
                {
                case E_V2HFmode:
                  if (!register_operand (operands[1], E_V8HFmode)
                      || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 8086 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL)))
                    return -1;
                  return 4730; /* avx512fp16_float_extend_phv2df2_mask */

                case E_V2SFmode:
                  if (!register_operand (operands[1], E_V4SFmode)
                      || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 10389 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && TARGET_AVX512VL)))
                    return -1;
                  return 5236; /* sse2_cvtps2pd_mask */

                default:
                  return -1;
                }

            case CONST_INT:
              if (XWINT (x6, 0) != 1L
                  || GET_MODE (x4) != E_V2SFmode)
                return -1;
              x8 = XEXP (x4, 0);
              operands[2] = x8;
              if (!nonimmediate_operand (operands[2], E_V4SFmode))
                return -1;
              x5 = XEXP (x2, 1);
              operands[1] = x5;
              if (!register_operand (operands[1], E_V2DFmode)
                  || !
#line 10047 "../../gcc/config/i386/sse.md"
(TARGET_SSE2))
                return -1;
              return 5166; /* sse2_cvtss2sd */

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
recog_197 (rtx x1 ATTRIBUTE_UNUSED,
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
      return 2990; /* *smaxv32hf3_mask */

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
      return 2998; /* *smaxv16hf3_mask */

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
      return 3005; /* *smaxv8hf3_mask */

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
      return 3010; /* *smaxv16sf3_mask */

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
      return 3018; /* *smaxv8sf3_mask */

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
      return 3025; /* *smaxv4sf3_mask */

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
      return 3030; /* *smaxv8df3_mask */

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
      return 3038; /* *smaxv4df3_mask */

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
      return 3045; /* *smaxv2df3_mask */

    case 9:
      if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 17708 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 501 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512))))
        return -1;
      return 7768; /* *avx512f_smaxv16si3_mask */

    case 10:
      if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 17708 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 501 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
        return -1;
      return 7776; /* *avx512f_smaxv8si3_mask */

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
        return 7784; /* *avx512f_smaxv4si3_mask */
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
      return 7868; /* *sse4_1_smaxv4si3_mask */

    case 12:
      if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 17708 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 502 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512))))
        return -1;
      return 7792; /* *avx512f_smaxv8di3_mask */

    case 13:
      if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 17708 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 502 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
        return -1;
      return 7800; /* *avx512f_smaxv4di3_mask */

    case 14:
      if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 17708 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 502 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
        return -1;
      return 7808; /* *avx512f_smaxv2di3_mask */

    case 15:
      if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 17719 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 318 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512))))
        return -1;
      return 7816; /* smaxv64qi3_mask */

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
        return 7824; /* smaxv16qi3_mask */
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
      return 7864; /* *sse4_1_smaxv16qi3_mask */

    case 17:
      if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 17719 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 318 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
        return -1;
      return 7832; /* smaxv32qi3_mask */

    case 18:
      if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 17719 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 319 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512))))
        return -1;
      return 7840; /* smaxv32hi3_mask */

    case 19:
      if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 17719 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 319 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
        return -1;
      return 7848; /* smaxv16hi3_mask */

    case 20:
      if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 17719 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 319 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
        return -1;
      return 7856; /* smaxv8hi3_mask */

    case 21:
      if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 32100 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256) && 
#line 565 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_512))))
        return -1;
      return 10591; /* avx10_2_smaxpbf16_v32bf_mask */

    case 22:
      if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 32100 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256)))
        return -1;
      return 10595; /* avx10_2_smaxpbf16_v16bf_mask */

    case 23:
      if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 32100 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256)))
        return -1;
      return 10599; /* avx10_2_smaxpbf16_v8bf_mask */

    case 24:
      if (!(
#line 3467 "../../gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 479 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16)))
        return -1;
      return 3127; /* *avx512fp16_vmsmaxv8hf3 */

    case 25:
      if (!
#line 3467 "../../gcc/config/i386/sse.md"
(TARGET_SSE))
        return -1;
      return 3135; /* *sse_vmsmaxv4sf3 */

    case 26:
      if (!(
#line 3467 "../../gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 480 "../../gcc/config/i386/sse.md"
(TARGET_SSE2)))
        return -1;
      return 3143; /* *sse2_vmsmaxv2df3 */

    default:
      return -1;
    }
}

 int
recog_209 (rtx x1 ATTRIBUTE_UNUSED,
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
      return 4415; /* avx512fp16_vcvtph2uw_v32hi */

    case 1:
      if (!register_operand (operands[0], E_V16SImode)
          || GET_MODE (x2) != E_V16SImode)
        return -1;
      switch (GET_MODE (operands[1]))
        {
        case E_V16HFmode:
          if (!vector_operand (operands[1], E_V16HFmode)
              || !(
#line 7617 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && 1) && 
#line 758 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return -1;
          return 4423; /* avx512fp16_vcvtph2udq_v16si */

        case E_V16SFmode:
          if (!nonimmediate_operand (operands[1], E_V16SFmode)
              || !(
#line 8706 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 675 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return -1;
          return 4838; /* *avx512f_fixuns_notruncv16sfv16si */

        default:
          return -1;
        }

    case 2:
      switch (pattern775 (x2, 
E_V8DImode))
        {
        case 0:
          if (!(
#line 7617 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && 1) && 
#line 758 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return -1;
          return 4431; /* avx512fp16_vcvtph2uqq_v8di */

        case 1:
          if (!(
#line 8739 "../../gcc/config/i386/sse.md"
(TARGET_AVX512DQ && 1) && 
#line 627 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return -1;
          return 4858; /* *avx512dq_cvtps2uqqv8di */

        case 2:
          if (!(
#line 9721 "../../gcc/config/i386/sse.md"
(TARGET_AVX512DQ && 1) && 
#line 537 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return -1;
          return 5104; /* fixuns_notruncv8dfv8di2 */

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
      return 4439; /* avx512fp16_vcvtph2uw_v16hi */

    case 4:
      switch (pattern775 (x2, 
E_V8SImode))
        {
        case 0:
          if (!(
#line 7617 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && 1) && 
#line 759 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 4447; /* avx512fp16_vcvtph2udq_v8si */

        case 1:
          if (!(
#line 8706 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 675 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 4842; /* *avx512vl_fixuns_notruncv8sfv8si */

        case 2:
          if (!(
#line 9500 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 471 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return -1;
          return 5010; /* fixuns_notruncv8dfv8si2 */

        default:
          return -1;
        }

    case 5:
      switch (pattern776 (x2, 
E_V4DImode))
        {
        case 0:
          if (!(
#line 7617 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && 1) && 
#line 760 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 4455; /* avx512fp16_vcvtph2uqq_v4di */

        case 1:
          if (!(
#line 8739 "../../gcc/config/i386/sse.md"
(TARGET_AVX512DQ && 1) && 
#line 627 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 4862; /* *avx512dq_cvtps2uqqv4di */

        case 2:
          if (!(
#line 9721 "../../gcc/config/i386/sse.md"
(TARGET_AVX512DQ && 1) && 
#line 537 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 5108; /* fixuns_notruncv4dfv4di2 */

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
      return 4463; /* avx512fp16_vcvtph2uw_v8hi */

    case 7:
      switch (pattern776 (x2, 
E_V4SImode))
        {
        case 0:
          if (!(
#line 7617 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && 1) && 
#line 761 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 4467; /* avx512fp16_vcvtph2udq_v4si */

        case 1:
          if (!(
#line 8706 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 675 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 4846; /* *avx512vl_fixuns_notruncv4sfv4si */

        case 2:
          if (!(
#line 9500 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 471 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 5014; /* fixuns_notruncv4dfv4si2 */

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
          return 4471; /* avx512fp16_vcvtph2uqq_v2di */

        case E_V2DFmode:
          if (!nonimmediate_operand (operands[1], E_V2DFmode)
              || !(
#line 9721 "../../gcc/config/i386/sse.md"
(TARGET_AVX512DQ && 1) && 
#line 537 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 5112; /* fixuns_notruncv2dfv2di2 */

        default:
          return -1;
        }

    case 9:
      if (!
#line 8752 "../../gcc/config/i386/sse.md"
(TARGET_AVX512DQ && TARGET_AVX512VL))
        return -1;
      return 4866; /* *avx512dq_cvtps2uqqv2di */

    default:
      return -1;
    }
}

 int
recog_224 (rtx x1 ATTRIBUTE_UNUSED,
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
  switch (XVECLEN (x4, 0))
    {
    case 2:
      return recog_220 (x1, insn, pnum_clobbers);

    case 3:
      x5 = XVECEXP (x4, 0, 0);
      operands[1] = x5;
      x6 = XVECEXP (x4, 0, 1);
      operands[2] = x6;
      switch (XINT (x4, 1))
        {
        case 192:
          x7 = XEXP (x3, 2);
          if (x7 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
            return -1;
          x8 = XVECEXP (x4, 0, 2);
          operands[3] = x8;
          if (!const_0_to_255_operand (operands[3], E_SImode))
            return -1;
          switch (pattern1407 (x2))
            {
            case 0:
              if (!(
#line 486 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 4041 "../../gcc/config/i386/sse.md"
(TARGET_AVX512DQ || (VALID_AVX512FP16_REG_MODE (V8HFmode))) && 
#line 479 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16))))
                return -1;
              return 3221; /* reducesv8hf_round */

            case 1:
              if (!(
#line 486 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 4041 "../../gcc/config/i386/sse.md"
(TARGET_AVX512DQ || (VALID_AVX512FP16_REG_MODE (V4SFmode)))))
                return -1;
              return 3225; /* reducesv4sf_round */

            case 2:
              if (!(
#line 486 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 4041 "../../gcc/config/i386/sse.md"
(TARGET_AVX512DQ || (VALID_AVX512FP16_REG_MODE (V2DFmode))) && 
#line 480 "../../gcc/config/i386/sse.md"
(TARGET_SSE2))))
                return -1;
              return 3229; /* reducesv2df_round */

            default:
              return -1;
            }

        case 133:
          return recog_218 (x1, insn, pnum_clobbers);

        case 217:
          switch (pattern1129 (x2))
            {
            case 0:
              if (!(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 7147 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && (64 == 64 || TARGET_AVX512VL) && ((V32HFmode == V16SFmode
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
(TARGET_EVEX512))))
                return -1;
              return 4324; /* fma_fmaddc_v32hf_maskz_1_round */

            case 1:
              if (!(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 7147 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && (32 == 64 || TARGET_AVX512VL) && ((V16HFmode == V16SFmode
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
(TARGET_AVX512VL))))
                return -1;
              return 4332; /* fma_fmaddc_v16hf_maskz_1_round */

            case 2:
              if (!(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 7285 "../../gcc/config/i386/sse.md"
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
(TARGET_EVEX512))))
                return -1;
              return 4366; /* avx512bw_fmaddc_v32hf_mask_round */

            case 3:
              if (!(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 7285 "../../gcc/config/i386/sse.md"
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
(TARGET_AVX512VL))))
                return -1;
              return 4370; /* avx512vl_fmaddc_v16hf_mask_round */

            case 4:
              if (!(
#line 460 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 7474 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16)))
                return -1;
              return 4397; /* avx512fp16_fma_fmaddcsh_v8hf_round */

            default:
              return -1;
            }

        case 219:
          switch (pattern1129 (x2))
            {
            case 0:
              if (!(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 7147 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && (64 == 64 || TARGET_AVX512VL) && ((V32HFmode == V16SFmode
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
(TARGET_EVEX512))))
                return -1;
              return 4328; /* fma_fcmaddc_v32hf_maskz_1_round */

            case 1:
              if (!(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 7147 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && (32 == 64 || TARGET_AVX512VL) && ((V16HFmode == V16SFmode
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
(TARGET_AVX512VL))))
                return -1;
              return 4336; /* fma_fcmaddc_v16hf_maskz_1_round */

            case 2:
              if (!(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 7285 "../../gcc/config/i386/sse.md"
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
(TARGET_EVEX512))))
                return -1;
              return 4368; /* avx512bw_fcmaddc_v32hf_mask_round */

            case 3:
              if (!(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 7285 "../../gcc/config/i386/sse.md"
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
(TARGET_AVX512VL))))
                return -1;
              return 4372; /* avx512vl_fcmaddc_v16hf_mask_round */

            case 4:
              if (!(
#line 460 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 7474 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16)))
                return -1;
              return 4401; /* avx512fp16_fma_fcmaddcsh_v8hf_round */

            default:
              return -1;
            }

        case 194:
          x8 = XVECEXP (x4, 0, 2);
          operands[3] = x8;
          if (!const_0_to_15_operand (operands[3], E_SImode))
            return -1;
          x9 = XVECEXP (x2, 0, 1);
          if (!const48_operand (x9, E_SImode))
            return -1;
          x7 = XEXP (x3, 2);
          switch (GET_CODE (x7))
            {
            case REG:
            case SUBREG:
              operands[5] = x7;
              x10 = XEXP (x3, 1);
              operands[4] = x10;
              operands[6] = x9;
              switch (GET_MODE (operands[0]))
                {
                case E_V16SFmode:
                  if (pattern1644 (x2, 
E_V16SFmode, 
E_HImode) != 0
                      || !(
#line 286 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 29812 "../../gcc/config/i386/sse.md"
(TARGET_AVX512DQ && ((V16SFmode == V16SFmode
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
#line 521 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))))
                    return -1;
                  return 9959; /* avx512dq_rangepv16sf_mask_round */

                case E_V8SFmode:
                  if (pattern1644 (x2, 
E_V8SFmode, 
E_QImode) != 0
                      || !(
#line 286 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 29812 "../../gcc/config/i386/sse.md"
(TARGET_AVX512DQ && ((V8SFmode == V16SFmode
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
#line 521 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))))
                    return -1;
                  return 9963; /* avx512dq_rangepv8sf_mask_round */

                case E_V8DFmode:
                  if (pattern1644 (x2, 
E_V8DFmode, 
E_QImode) != 0
                      || !(
#line 286 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 29812 "../../gcc/config/i386/sse.md"
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
#line 522 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))))
                    return -1;
                  return 9969; /* avx512dq_rangepv8df_mask_round */

                case E_V4DFmode:
                  if (pattern1644 (x2, 
E_V4DFmode, 
E_QImode) != 0
                      || !(
#line 286 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 29812 "../../gcc/config/i386/sse.md"
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
#line 522 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))))
                    return -1;
                  return 9973; /* avx512dq_rangepv4df_mask_round */

                default:
                  return -1;
                }

            case CONST_INT:
              if (XWINT (x7, 0) != 1L)
                return -1;
              operands[4] = x9;
              x10 = XEXP (x3, 1);
              if (!rtx_equal_p (x10, operands[1]))
                return -1;
              switch (GET_MODE (operands[0]))
                {
                case E_V4SFmode:
                  if (pattern1405 (x2, 
E_V4SFmode) != 0
                      || !(
#line 486 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 29835 "../../gcc/config/i386/sse.md"
(TARGET_AVX512DQ)))
                    return -1;
                  return 9978; /* avx512dq_rangesv4sf_round */

                case E_V2DFmode:
                  if (pattern1405 (x2, 
E_V2DFmode) != 0
                      || !(
#line 486 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 29835 "../../gcc/config/i386/sse.md"
(TARGET_AVX512DQ) && 
#line 475 "../../gcc/config/i386/sse.md"
(TARGET_SSE2))))
                    return -1;
                  return 9982; /* avx512dq_rangesv2df_round */

                default:
                  return -1;
                }

            default:
              return -1;
            }

        case 166:
          x7 = XEXP (x3, 2);
          if (x7 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
            return -1;
          x8 = XVECEXP (x4, 0, 2);
          operands[3] = x8;
          if (!const_0_to_15_operand (operands[3], E_SImode))
            return -1;
          switch (pattern1407 (x2))
            {
            case 0:
              if (!(
#line 486 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 29903 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 479 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16))))
                return -1;
              return 10040; /* avx512f_vgetmantv8hf_round */

            case 1:
              if (!
#line 486 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F))
                return -1;
              return 10044; /* avx512f_vgetmantv4sf_round */

            case 2:
              if (!(
#line 486 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 29903 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 480 "../../gcc/config/i386/sse.md"
(TARGET_SSE2))))
                return -1;
              return 10048; /* avx512f_vgetmantv2df_round */

            default:
              return -1;
            }

        case 279:
          x8 = XVECEXP (x4, 0, 2);
          operands[3] = x8;
          if (!const_0_to_255_operand (operands[3], E_SImode))
            return -1;
          x9 = XVECEXP (x2, 0, 1);
          if (!const48_operand (x9, E_SImode))
            return -1;
          x7 = XEXP (x3, 2);
          switch (GET_CODE (x7))
            {
            case REG:
            case SUBREG:
              operands[5] = x7;
              x10 = XEXP (x3, 1);
              operands[4] = x10;
              operands[6] = x9;
              switch (GET_MODE (operands[0]))
                {
                case E_V32HFmode:
                  if (pattern1644 (x2, 
E_V32HFmode, 
E_SImode) != 0
                      || !(
#line 286 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 32649 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256) && 
#line 532 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_512)))))
                    return -1;
                  return 10938; /* avx10_2_minmaxpv32hf_mask_round */

                case E_V16HFmode:
                  if (pattern1644 (x2, 
E_V16HFmode, 
E_HImode) != 0
                      || !(
#line 286 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 32649 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))))
                    return -1;
                  return 10942; /* avx10_2_minmaxpv16hf_mask_round */

                case E_V8HFmode:
                  if (pattern1644 (x2, 
E_V8HFmode, 
E_QImode) != 0
                      || !(
#line 286 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 32649 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))))
                    return -1;
                  return 10946; /* avx10_2_minmaxpv8hf_mask_round */

                case E_V16SFmode:
                  if (pattern1644 (x2, 
E_V16SFmode, 
E_HImode) != 0
                      || !(
#line 286 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 32649 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256) && 
#line 533 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_512)))))
                    return -1;
                  return 10950; /* avx10_2_minmaxpv16sf_mask_round */

                case E_V8SFmode:
                  if (pattern1644 (x2, 
E_V8SFmode, 
E_QImode) != 0
                      || !(
#line 286 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 32649 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))))
                    return -1;
                  return 10954; /* avx10_2_minmaxpv8sf_mask_round */

                case E_V4SFmode:
                  if (pattern1644 (x2, 
E_V4SFmode, 
E_QImode) != 0
                      || !(
#line 286 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 32649 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))))
                    return -1;
                  return 10958; /* avx10_2_minmaxpv4sf_mask_round */

                case E_V8DFmode:
                  if (pattern1644 (x2, 
E_V8DFmode, 
E_QImode) != 0
                      || !(
#line 286 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 32649 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256) && 
#line 534 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_512)))))
                    return -1;
                  return 10962; /* avx10_2_minmaxpv8df_mask_round */

                case E_V4DFmode:
                  if (pattern1644 (x2, 
E_V4DFmode, 
E_QImode) != 0
                      || !(
#line 286 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 32649 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))))
                    return -1;
                  return 10966; /* avx10_2_minmaxpv4df_mask_round */

                case E_V2DFmode:
                  if (pattern1644 (x2, 
E_V2DFmode, 
E_QImode) != 0
                      || !(
#line 286 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 32649 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))))
                    return -1;
                  return 10970; /* avx10_2_minmaxpv2df_mask_round */

                default:
                  return -1;
                }

            case CONST_INT:
              if (XWINT (x7, 0) != 1L)
                return -1;
              operands[4] = x9;
              switch (pattern1406 (x2))
                {
                case 0:
                  if (!(
#line 486 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 32664 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256) && 
#line 479 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16))))
                    return -1;
                  return 10973; /* avx10_2_minmaxsv8hf_round */

                case 1:
                  if (!(
#line 486 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 32664 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256)))
                    return -1;
                  return 10977; /* avx10_2_minmaxsv4sf_round */

                case 2:
                  if (!(
#line 486 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 32664 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256) && 
#line 480 "../../gcc/config/i386/sse.md"
(TARGET_SSE2))))
                    return -1;
                  return 10981; /* avx10_2_minmaxsv2df_round */

                default:
                  return -1;
                }

            default:
              return -1;
            }

        default:
          return -1;
        }

    case 1:
      return recog_219 (x1, insn, pnum_clobbers);

    case 4:
      if (XINT (x4, 1) != 163)
        return -1;
      x5 = XVECEXP (x4, 0, 0);
      operands[1] = x5;
      x6 = XVECEXP (x4, 0, 1);
      operands[2] = x6;
      x8 = XVECEXP (x4, 0, 2);
      operands[3] = x8;
      x11 = XVECEXP (x4, 0, 3);
      operands[4] = x11;
      if (!const_0_to_255_operand (operands[4], E_SImode))
        return -1;
      x9 = XVECEXP (x2, 0, 1);
      if (!const48_operand (x9, E_SImode))
        return -1;
      x10 = XEXP (x3, 1);
      switch (GET_CODE (x10))
        {
        case CONST_INT:
        case CONST_DOUBLE:
        case CONST_VECTOR:
          operands[5] = x10;
          x7 = XEXP (x3, 2);
          operands[6] = x7;
          operands[7] = x9;
          switch (GET_MODE (operands[0]))
            {
            case E_V16SFmode:
              if (pattern1669 (x2, 
E_V16SFmode, 
E_V16SImode, 
E_HImode) != 0
                  || !(
#line 286 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 14146 "../../gcc/config/i386/sse.md"
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
#line 521 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512))))
                return -1;
              return 7099; /* avx512f_fixupimmv16sf_maskz_1_round */

            case E_V8SFmode:
              if (pattern1669 (x2, 
E_V8SFmode, 
E_V8SImode, 
E_QImode) != 0
                  || !(
#line 286 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 14146 "../../gcc/config/i386/sse.md"
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
#line 521 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
                return -1;
              return 7103; /* avx512vl_fixupimmv8sf_maskz_1_round */

            case E_V8DFmode:
              if (pattern1669 (x2, 
E_V8DFmode, 
E_V8DImode, 
E_QImode) != 0
                  || !(
#line 286 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 14146 "../../gcc/config/i386/sse.md"
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
#line 522 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512))))
                return -1;
              return 7109; /* avx512f_fixupimmv8df_maskz_1_round */

            case E_V4DFmode:
              if (pattern1669 (x2, 
E_V4DFmode, 
E_V4DImode, 
E_QImode) != 0
                  || !(
#line 286 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 14146 "../../gcc/config/i386/sse.md"
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
#line 522 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
                return -1;
              return 7113; /* avx512vl_fixupimmv4df_maskz_1_round */

            default:
              return -1;
            }

        case REG:
        case SUBREG:
          x7 = XEXP (x3, 2);
          switch (GET_CODE (x7))
            {
            case REG:
            case SUBREG:
              operands[5] = x7;
              operands[6] = x9;
              if (!rtx_equal_p (x10, operands[1]))
                return -1;
              switch (GET_MODE (operands[0]))
                {
                case E_V16SFmode:
                  if (pattern1695 (x2, 
E_V16SImode, 
E_V16SFmode, 
E_HImode) != 0
                      || !(
#line 286 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 14162 "../../gcc/config/i386/sse.md"
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
#line 521 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512))))
                    return -1;
                  return 7117; /* avx512f_fixupimmv16sf_mask_round */

                case E_V8SFmode:
                  if (pattern1695 (x2, 
E_V8SImode, 
E_V8SFmode, 
E_QImode) != 0
                      || !(
#line 286 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 14162 "../../gcc/config/i386/sse.md"
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
#line 521 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
                    return -1;
                  return 7119; /* avx512vl_fixupimmv8sf_mask_round */

                case E_V8DFmode:
                  if (pattern1695 (x2, 
E_V8DImode, 
E_V8DFmode, 
E_QImode) != 0
                      || !(
#line 286 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 14162 "../../gcc/config/i386/sse.md"
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
#line 522 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512))))
                    return -1;
                  return 7122; /* avx512f_fixupimmv8df_mask_round */

                case E_V4DFmode:
                  if (pattern1695 (x2, 
E_V4DImode, 
E_V4DFmode, 
E_QImode) != 0
                      || !(
#line 286 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 14162 "../../gcc/config/i386/sse.md"
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
#line 522 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
                    return -1;
                  return 7124; /* avx512vl_fixupimmv4df_mask_round */

                default:
                  return -1;
                }

            case CONST_INT:
              if (XWINT (x7, 0) != 1L)
                return -1;
              operands[5] = x9;
              if (!rtx_equal_p (x10, operands[2]))
                return -1;
              switch (GET_MODE (operands[0]))
                {
                case E_V4SFmode:
                  if (pattern1696 (x2, 
E_V4SImode, 
E_V4SFmode) != 0
                      || !
#line 286 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F))
                    return -1;
                  return 7127; /* avx512f_sfixupimmv4sf_round */

                case E_V2DFmode:
                  if (pattern1696 (x2, 
E_V2DImode, 
E_V2DFmode) != 0
                      || !(
#line 286 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 14194 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 475 "../../gcc/config/i386/sse.md"
(TARGET_SSE2))))
                    return -1;
                  return 7131; /* avx512f_sfixupimmv2df_round */

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
recog_231 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12, x13, x14, x15, x16, x17;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XVECEXP (x2, 0, 1);
  if (!const_4_or_8_to_11_operand (x3, E_SImode))
    return -1;
  x4 = XVECEXP (x2, 0, 0);
  x5 = XEXP (x4, 0);
  switch (GET_CODE (x5))
    {
    case VEC_MERGE:
      if (GET_MODE (x5) != E_V4HFmode)
        return -1;
      x6 = XEXP (x5, 1);
      if (GET_CODE (x6) != VEC_SELECT
          || GET_MODE (x6) != E_V4HFmode)
        return -1;
      x7 = XEXP (x6, 1);
      if (GET_CODE (x7) != PARALLEL
          || XVECLEN (x7, 0) != 4)
        return -1;
      x8 = XVECEXP (x7, 0, 0);
      if (x8 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
        return -1;
      x9 = XVECEXP (x7, 0, 1);
      if (x9 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
        return -1;
      x10 = XVECEXP (x7, 0, 2);
      if (x10 != const_int_rtx[MAX_SAVED_CONST_INT + 2])
        return -1;
      x11 = XVECEXP (x7, 0, 3);
      if (x11 != const_int_rtx[MAX_SAVED_CONST_INT + 3]
          || !register_operand (operands[0], E_V8HFmode)
          || GET_MODE (x2) != E_V8HFmode
          || GET_MODE (x4) != E_V8HFmode)
        return -1;
      x12 = XEXP (x5, 0);
      if (GET_MODE (x12) != E_V4HFmode)
        return -1;
      x13 = XEXP (x6, 0);
      operands[2] = x13;
      if (!nonimm_or_0_operand (operands[2], E_V8HFmode))
        return -1;
      x14 = XEXP (x5, 2);
      operands[3] = x14;
      if (!register_operand (operands[3], E_QImode))
        return -1;
      x15 = XEXP (x4, 1);
      operands[4] = x15;
      if (!const0_operand (operands[4], E_V4HFmode))
        return -1;
      operands[5] = x3;
      switch (GET_CODE (x12))
        {
        case FLOAT:
          x16 = XEXP (x12, 0);
          operands[1] = x16;
          if (!register_operand (operands[1], E_V4DImode)
              || !(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 7707 "../../gcc/config/i386/sse.md"
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
          return 4526; /* avx512fp16_vcvtqq2ph_v4di_mask_round_1 */

        case UNSIGNED_FLOAT:
          x16 = XEXP (x12, 0);
          operands[1] = x16;
          if (!register_operand (operands[1], E_V4DImode)
              || !(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 7707 "../../gcc/config/i386/sse.md"
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
          return 4528; /* avx512fp16_vcvtuqq2ph_v4di_mask_round_1 */

        case FLOAT_TRUNCATE:
          x16 = XEXP (x12, 0);
          operands[1] = x16;
          if (!register_operand (operands[1], E_V4DFmode)
              || !(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 8191 "../../gcc/config/i386/sse.md"
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
          return 4748; /* avx512fp16_vcvtpd2ph_v4df_mask_round_1 */

        default:
          return -1;
        }

    case FLOAT_TRUNCATE:
      x15 = XEXP (x4, 1);
      if (GET_CODE (x15) != FLOAT_TRUNCATE)
        return -1;
      x12 = XEXP (x5, 0);
      operands[2] = x12;
      x17 = XEXP (x15, 0);
      operands[1] = x17;
      operands[3] = x3;
      switch (GET_MODE (operands[0]))
        {
        case E_V32HFmode:
          if (pattern1312 (x2, 
E_V16SFmode, 
E_V16HFmode, 
E_V32HFmode) != 0
              || !(
#line 234 "../../gcc/config/i386/subst.md"
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
(TARGET_AVX10_2_512))))
            return -1;
          return 10434; /* avx10_2_cvt2ps2phx_v32hf_round */

        case E_V16HFmode:
          if (pattern1312 (x2, 
E_V8SFmode, 
E_V8HFmode, 
E_V16HFmode) != 0
              || !(
#line 234 "../../gcc/config/i386/subst.md"
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
								       || V16HFmode == V16HFmode))))))
            return -1;
          return 10438; /* avx10_2_cvt2ps2phx_v16hf_round */

        default:
          return -1;
        }

    default:
      return -1;
    }
}

 int
recog_233 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10;
  int res ATTRIBUTE_UNUSED;
  if (pnum_clobbers == NULL)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_CODE (x2) != MEM)
    return -1;
  operands[5] = x2;
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) != UNSPEC
      || XVECLEN (x3, 0) != 4
      || XINT (x3, 1) != 154)
    return -1;
  x4 = XVECEXP (x3, 0, 0);
  operands[0] = x4;
  x5 = XVECEXP (x3, 0, 1);
  operands[2] = x5;
  x6 = XVECEXP (x3, 0, 2);
  operands[4] = x6;
  if (!const1248_operand (operands[4], E_SImode))
    return -1;
  x7 = XVECEXP (x3, 0, 3);
  operands[6] = x7;
  x8 = XEXP (x1, 1);
  x9 = XVECEXP (x8, 0, 1);
  operands[3] = x9;
  x10 = XVECEXP (x8, 0, 0);
  if (!rtx_equal_p (x10, operands[6]))
    return -1;
  switch (GET_MODE (operands[5]))
    {
    case E_V16SImode:
      if (!vsib_mem_operator (operands[5], E_V16SImode)
          || GET_MODE (x8) != E_V16SImode)
        return -1;
      switch (GET_MODE (x3))
        {
        case E_SImode:
          switch (pattern1697 (
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
              *pnum_clobbers = 1;
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
              *pnum_clobbers = 1;
              return 9860; /* *avx512f_scatterdiv16si */

            default:
              return -1;
            }

        case E_DImode:
          switch (pattern1697 (
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
              *pnum_clobbers = 1;
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
              *pnum_clobbers = 1;
              return 9872; /* *avx512f_scatterdiv16si */

            default:
              return -1;
            }

        default:
          return -1;
        }

    case E_V16SFmode:
      if (!vsib_mem_operator (operands[5], E_V16SFmode)
          || GET_MODE (x8) != E_V16SFmode)
        return -1;
      switch (GET_MODE (x3))
        {
        case E_SImode:
          switch (pattern1698 (
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
              *pnum_clobbers = 1;
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
              *pnum_clobbers = 1;
              return 9861; /* *avx512f_scatterdiv16sf */

            default:
              return -1;
            }

        case E_DImode:
          switch (pattern1698 (
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
              *pnum_clobbers = 1;
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
              *pnum_clobbers = 1;
              return 9873; /* *avx512f_scatterdiv16sf */

            default:
              return -1;
            }

        default:
          return -1;
        }

    case E_V8DImode:
      switch (pattern1600 (x1, 
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
          *pnum_clobbers = 1;
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
          *pnum_clobbers = 1;
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
          *pnum_clobbers = 1;
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
          *pnum_clobbers = 1;
          return 9874; /* *avx512f_scatterdiv8di */

        default:
          return -1;
        }

    case E_V8DFmode:
      switch (pattern1600 (x1, 
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
          *pnum_clobbers = 1;
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
          *pnum_clobbers = 1;
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
          *pnum_clobbers = 1;
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
          *pnum_clobbers = 1;
          return 9875; /* *avx512f_scatterdiv8df */

        default:
          return -1;
        }

    case E_V8SImode:
      switch (pattern1601 (x1, 
E_V8SImode))
        {
        case 0:
          switch (pattern1734 (
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
              *pnum_clobbers = 1;
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
              *pnum_clobbers = 1;
              return 9864; /* *avx512f_scatterdiv8si */

            default:
              return -1;
            }

        case 1:
          switch (pattern1734 (
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
              *pnum_clobbers = 1;
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
              *pnum_clobbers = 1;
              return 9876; /* *avx512f_scatterdiv8si */

            default:
              return -1;
            }

        default:
          return -1;
        }

    case E_V8SFmode:
      switch (pattern1601 (x1, 
E_V8SFmode))
        {
        case 0:
          switch (pattern1735 (
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
              *pnum_clobbers = 1;
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
              *pnum_clobbers = 1;
              return 9865; /* *avx512f_scatterdiv8sf */

            default:
              return -1;
            }

        case 1:
          switch (pattern1735 (
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
              *pnum_clobbers = 1;
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
              *pnum_clobbers = 1;
              return 9877; /* *avx512f_scatterdiv8sf */

            default:
              return -1;
            }

        default:
          return -1;
        }

    case E_V4DImode:
      switch (pattern1603 (x1, 
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
          *pnum_clobbers = 1;
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
          *pnum_clobbers = 1;
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
          *pnum_clobbers = 1;
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
          *pnum_clobbers = 1;
          return 9878; /* *avx512f_scatterdiv4di */

        default:
          return -1;
        }

    case E_V4DFmode:
      switch (pattern1603 (x1, 
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
          *pnum_clobbers = 1;
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
          *pnum_clobbers = 1;
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
          *pnum_clobbers = 1;
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
          *pnum_clobbers = 1;
          return 9879; /* *avx512f_scatterdiv4df */

        default:
          return -1;
        }

    case E_V4SImode:
      switch (pattern1605 (x1, 
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
          *pnum_clobbers = 1;
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
          *pnum_clobbers = 1;
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
          *pnum_clobbers = 1;
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
          *pnum_clobbers = 1;
          return 9880; /* *avx512f_scatterdiv4si */

        default:
          return -1;
        }

    case E_V4SFmode:
      switch (pattern1605 (x1, 
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
          *pnum_clobbers = 1;
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
          *pnum_clobbers = 1;
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
          *pnum_clobbers = 1;
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
          *pnum_clobbers = 1;
          return 9881; /* *avx512f_scatterdiv4sf */

        default:
          return -1;
        }

    case E_V2DImode:
      switch (pattern1605 (x1, 
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
          *pnum_clobbers = 1;
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
          *pnum_clobbers = 1;
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
          *pnum_clobbers = 1;
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
          *pnum_clobbers = 1;
          return 9882; /* *avx512f_scatterdiv2di */

        default:
          return -1;
        }

    case E_V2DFmode:
      switch (pattern1605 (x1, 
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
          *pnum_clobbers = 1;
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
          *pnum_clobbers = 1;
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
          *pnum_clobbers = 1;
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
          *pnum_clobbers = 1;
          return 9883; /* *avx512f_scatterdiv2df */

        default:
          return -1;
        }

    default:
      return -1;
    }
}

 int
recog_250 (rtx x1 ATTRIBUTE_UNUSED,
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
    case CONST_VECTOR:
      switch (pattern495 (x3))
        {
        case 0:
          if (!
#line 21598 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL && TARGET_AVX512VBMI
   && ix86_pre_reload_split ()))
            return -1;
          return 8481; /* *vec_concatv16qi_permt2 */

        case 1:
          if (!
#line 21623 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL && TARGET_AVX512BW
   && ix86_pre_reload_split ()))
            return -1;
          return 8482; /* *vec_concatv8hi_permt2 */

        default:
          return -1;
        }

    case REG:
    case SUBREG:
      operands[1] = x4;
      x5 = XVECEXP (x3, 0, 1);
      operands[2] = x5;
      x6 = XVECEXP (x3, 0, 2);
      operands[3] = x6;
      switch (GET_MODE (operands[0]))
        {
        case E_V16SImode:
          if (pattern169 (x3, 
E_V16SImode) != 0
              || !(
#line 28223 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 28130 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return -1;
          return 9378; /* avx512f_vpermt2varv16si3 */

        case E_V16SFmode:
          if (pattern1028 (x3, 
E_V16SFmode, 
E_V16SImode) != 0
              || !(
#line 28223 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 28130 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return -1;
          return 9380; /* avx512f_vpermt2varv16sf3 */

        case E_V8DImode:
          if (pattern169 (x3, 
E_V8DImode) != 0
              || !(
#line 28223 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 28131 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return -1;
          return 9382; /* avx512f_vpermt2varv8di3 */

        case E_V8DFmode:
          if (pattern1028 (x3, 
E_V8DFmode, 
E_V8DImode) != 0
              || !(
#line 28223 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 28131 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return -1;
          return 9384; /* avx512f_vpermt2varv8df3 */

        case E_V8SImode:
          if (pattern169 (x3, 
E_V8SImode) != 0
              || !(
#line 28223 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 28132 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 9386; /* avx512vl_vpermt2varv8si3 */

        case E_V8SFmode:
          if (pattern1028 (x3, 
E_V8SFmode, 
E_V8SImode) != 0
              || !(
#line 28223 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 28132 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 9388; /* avx512vl_vpermt2varv8sf3 */

        case E_V4DImode:
          if (pattern169 (x3, 
E_V4DImode) != 0
              || !(
#line 28223 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 28133 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 9390; /* avx512vl_vpermt2varv4di3 */

        case E_V4DFmode:
          if (pattern1028 (x3, 
E_V4DFmode, 
E_V4DImode) != 0
              || !(
#line 28223 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 28133 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 9392; /* avx512vl_vpermt2varv4df3 */

        case E_V4SImode:
          if (pattern169 (x3, 
E_V4SImode) != 0
              || !(
#line 28223 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 28134 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 9394; /* avx512vl_vpermt2varv4si3 */

        case E_V4SFmode:
          if (pattern1028 (x3, 
E_V4SFmode, 
E_V4SImode) != 0
              || !(
#line 28223 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 28134 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 9396; /* avx512vl_vpermt2varv4sf3 */

        case E_V2DImode:
          if (pattern169 (x3, 
E_V2DImode) != 0
              || !(
#line 28223 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 28135 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 9398; /* avx512vl_vpermt2varv2di3 */

        case E_V2DFmode:
          if (pattern1028 (x3, 
E_V2DFmode, 
E_V2DImode) != 0
              || !(
#line 28223 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 28135 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 9400; /* avx512vl_vpermt2varv2df3 */

        case E_V32HImode:
          if (pattern169 (x3, 
E_V32HImode) != 0
              || !(
#line 28223 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 28136 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512)))
            return -1;
          return 9402; /* avx512bw_vpermt2varv32hi3 */

        case E_V16HImode:
          if (pattern169 (x3, 
E_V16HImode) != 0
              || !(
#line 28223 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 28137 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_AVX512VL)))
            return -1;
          return 9404; /* avx512vl_vpermt2varv16hi3 */

        case E_V8HImode:
          if (pattern169 (x3, 
E_V8HImode) != 0
              || !(
#line 28223 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 28138 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_AVX512VL)))
            return -1;
          return 9406; /* avx512vl_vpermt2varv8hi3 */

        case E_V64QImode:
          if (pattern169 (x3, 
E_V64QImode) != 0
              || !(
#line 28223 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 28139 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VBMI && TARGET_EVEX512)))
            return -1;
          return 9408; /* avx512bw_vpermt2varv64qi3 */

        case E_V32QImode:
          if (pattern169 (x3, 
E_V32QImode) != 0
              || !(
#line 28223 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 28140 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VBMI && TARGET_AVX512VL)))
            return -1;
          return 9410; /* avx512vl_vpermt2varv32qi3 */

        case E_V16QImode:
          if (pattern169 (x3, 
E_V16QImode) != 0
              || !(
#line 28223 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 28141 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VBMI && TARGET_AVX512VL)))
            return -1;
          return 9412; /* avx512vl_vpermt2varv16qi3 */

        case E_V32HFmode:
          if (pattern1028 (x3, 
E_V32HFmode, 
E_V32HImode) != 0
              || !(
#line 28238 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 558 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return -1;
          return 9414; /* avx512bw_vpermt2varv32hf3 */

        case E_V16HFmode:
          if (pattern1028 (x3, 
E_V16HFmode, 
E_V16HImode) != 0
              || !(
#line 28238 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 558 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 9416; /* avx512vl_vpermt2varv16hf3 */

        case E_V8HFmode:
          if (pattern1028 (x3, 
E_V8HFmode, 
E_V8HImode) != 0
              || !(
#line 28238 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 558 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 9418; /* avx512fp16_vpermt2varv8hf3 */

        case E_V32BFmode:
          if (pattern1028 (x3, 
E_V32BFmode, 
E_V32HImode) != 0
              || !(
#line 28238 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 559 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return -1;
          return 9420; /* avx512bw_vpermt2varv32bf3 */

        case E_V16BFmode:
          if (pattern1028 (x3, 
E_V16BFmode, 
E_V16HImode) != 0
              || !(
#line 28238 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 559 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 9422; /* avx512vl_vpermt2varv16bf3 */

        case E_V8BFmode:
          if (pattern1028 (x3, 
E_V8BFmode, 
E_V8HImode) != 0
              || !(
#line 28238 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 559 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 9424; /* avx512vl_vpermt2varv8bf3 */

        default:
          return -1;
        }

    default:
      return -1;
    }
}

 int
recog_253 (rtx x1 ATTRIBUTE_UNUSED,
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
    case E_V32HFmode:
      if (pattern149 (x3, 
E_V32HFmode) != 0
          || !(
#line 32649 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256) && 
#line 532 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_512)))
        return -1;
      return 10935; /* avx10_2_minmaxpv32hf */

    case E_V16HFmode:
      if (pattern149 (x3, 
E_V16HFmode) != 0
          || !
#line 32649 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
        return -1;
      return 10939; /* avx10_2_minmaxpv16hf */

    case E_V8HFmode:
      if (pattern149 (x3, 
E_V8HFmode) != 0
          || !
#line 32649 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
        return -1;
      return 10943; /* avx10_2_minmaxpv8hf */

    case E_V16SFmode:
      if (pattern149 (x3, 
E_V16SFmode) != 0
          || !(
#line 32649 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256) && 
#line 533 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_512)))
        return -1;
      return 10947; /* avx10_2_minmaxpv16sf */

    case E_V8SFmode:
      if (pattern149 (x3, 
E_V8SFmode) != 0
          || !
#line 32649 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
        return -1;
      return 10951; /* avx10_2_minmaxpv8sf */

    case E_V4SFmode:
      if (pattern149 (x3, 
E_V4SFmode) != 0
          || !
#line 32649 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
        return -1;
      return 10955; /* avx10_2_minmaxpv4sf */

    case E_V8DFmode:
      if (pattern149 (x3, 
E_V8DFmode) != 0
          || !(
#line 32649 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256) && 
#line 534 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_512)))
        return -1;
      return 10959; /* avx10_2_minmaxpv8df */

    case E_V4DFmode:
      if (pattern149 (x3, 
E_V4DFmode) != 0
          || !
#line 32649 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
        return -1;
      return 10963; /* avx10_2_minmaxpv4df */

    case E_V2DFmode:
      if (pattern149 (x3, 
E_V2DFmode) != 0
          || !
#line 32649 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
        return -1;
      return 10967; /* avx10_2_minmaxpv2df */

    default:
      return -1;
    }
}

 int
recog_255 (rtx x1 ATTRIBUTE_UNUSED,
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
    case E_V16SImode:
      if (pattern60 (x3, 
E_V16SImode) != 0
          || !(
#line 14056 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 501 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 7076; /* *avx512f_alignv16si */

    case E_V8SImode:
      if (pattern60 (x3, 
E_V8SImode) != 0
          || !(
#line 14056 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 501 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 7078; /* *avx512vl_alignv8si */

    case E_V4SImode:
      if (pattern60 (x3, 
E_V4SImode) != 0
          || !(
#line 14056 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 501 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 7080; /* *avx512vl_alignv4si */

    case E_V8DImode:
      if (pattern60 (x3, 
E_V8DImode) != 0
          || !(
#line 14056 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 502 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 7082; /* *avx512f_alignv8di */

    case E_V4DImode:
      if (pattern60 (x3, 
E_V4DImode) != 0
          || !(
#line 14056 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 502 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 7084; /* *avx512vl_alignv4di */

    case E_V2DImode:
      if (pattern60 (x3, 
E_V2DImode) != 0
          || !(
#line 14056 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 502 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 7086; /* *avx512vl_alignv2di */

    default:
      return -1;
    }
}

 int
recog_259 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  switch (pattern172 (x1))
    {
    case 0:
      if (!(
#line 30396 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VBMI2) && 
#line 758 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 10179; /* vpshrd_v32hi */

    case 1:
      if (!(
#line 30396 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VBMI2) && 
#line 758 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 10181; /* vpshrd_v16si */

    case 2:
      if (!(
#line 30396 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VBMI2) && 
#line 758 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 10183; /* vpshrd_v8di */

    case 3:
      if (!(
#line 30396 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VBMI2) && 
#line 759 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 10185; /* vpshrd_v16hi */

    case 4:
      if (!(
#line 30396 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VBMI2) && 
#line 759 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 10187; /* vpshrd_v8si */

    case 5:
      if (!(
#line 30396 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VBMI2) && 
#line 760 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 10189; /* vpshrd_v4di */

    case 6:
      if (!(
#line 30396 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VBMI2) && 
#line 760 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 10191; /* vpshrd_v8hi */

    case 7:
      if (!(
#line 30396 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VBMI2) && 
#line 761 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 10193; /* vpshrd_v4si */

    case 8:
      if (!(
#line 30396 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VBMI2) && 
#line 761 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 10195; /* vpshrd_v2di */

    default:
      return -1;
    }
}

 int
recog_267 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12, x13, x14, x15, x16, x17;
  rtx x18;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) != PARALLEL)
    return -1;
  x5 = XEXP (x2, 0);
  operands[2] = x5;
  x6 = XEXP (x3, 0);
  operands[1] = x6;
  switch (XVECLEN (x4, 0))
    {
    case 2:
      x7 = XVECEXP (x4, 0, 0);
      if (x7 != const_int_rtx[MAX_SAVED_CONST_INT + 2])
        return -1;
      x8 = XVECEXP (x4, 0, 1);
      if (x8 != const_int_rtx[MAX_SAVED_CONST_INT + 3])
        return -1;
      switch (GET_MODE (operands[0]))
        {
        case E_V4SFmode:
          if (!nonimmediate_operand (operands[0], E_V4SFmode)
              || GET_MODE (x2) != E_V4SFmode
              || !nonimmediate_operand (operands[2], E_V2SFmode)
              || GET_MODE (x3) != E_V2SFmode
              || !nonimmediate_operand (operands[1], E_V4SFmode)
              || !
#line 11675 "../../gcc/config/i386/sse.md"
(TARGET_SSE))
            return -1;
          return 5276; /* sse_loadlps */

        case E_V4DImode:
          if (pattern1231 (x2, 
E_V4DImode, 
E_V2DImode) != 0
              || !
#line 28432 "../../gcc/config/i386/sse.md"
(TARGET_AVX && 1))
            return -1;
          return 9458; /* vec_set_lo_v4di */

        case E_V4DFmode:
          if (pattern1231 (x2, 
E_V4DFmode, 
E_V2DFmode) != 0
              || !
#line 28432 "../../gcc/config/i386/sse.md"
(TARGET_AVX && 1))
            return -1;
          return 9460; /* vec_set_lo_v4df */

        default:
          return -1;
        }

    case 1:
      x7 = XVECEXP (x4, 0, 0);
      if (x7 != const_int_rtx[MAX_SAVED_CONST_INT + 1]
          || !nonimmediate_operand (operands[0], E_V2DFmode)
          || GET_MODE (x2) != E_V2DFmode
          || !nonimmediate_operand (operands[2], E_DFmode)
          || GET_MODE (x3) != E_DFmode
          || !nonimm_or_0_operand (operands[1], E_V2DFmode)
          || !
#line 14787 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
        return -1;
      return 7212; /* sse2_loadlpd */

    case 8:
      x7 = XVECEXP (x4, 0, 0);
      if (x7 != const_int_rtx[MAX_SAVED_CONST_INT + 8])
        return -1;
      x8 = XVECEXP (x4, 0, 1);
      if (x8 != const_int_rtx[MAX_SAVED_CONST_INT + 9])
        return -1;
      x9 = XVECEXP (x4, 0, 2);
      if (x9 != const_int_rtx[MAX_SAVED_CONST_INT + 10]
          || pattern1232 (x4, 
15, 
14, 
13, 
12, 
11) != 0)
        return -1;
      switch (GET_MODE (operands[0]))
        {
        case E_V16SFmode:
          if (pattern1231 (x2, 
E_V16SFmode, 
E_V8SFmode) != 0
              || !(
#line 20095 "../../gcc/config/i386/sse.md"
(TARGET_AVX512DQ) && 
#line 722 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return -1;
          return 8394; /* vec_set_lo_v16sf */

        case E_V16SImode:
          if (pattern1231 (x2, 
E_V16SImode, 
E_V8SImode) != 0
              || !(
#line 20095 "../../gcc/config/i386/sse.md"
(TARGET_AVX512DQ) && 
#line 722 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return -1;
          return 8396; /* vec_set_lo_v16si */

        case E_V16HImode:
          if (pattern1231 (x2, 
E_V16HImode, 
E_V8HImode) != 0
              || !
#line 28529 "../../gcc/config/i386/sse.md"
(TARGET_AVX))
            return -1;
          return 9474; /* vec_set_lo_v16hi */

        case E_V16HFmode:
          if (pattern1231 (x2, 
E_V16HFmode, 
E_V8HFmode) != 0
              || !
#line 28529 "../../gcc/config/i386/sse.md"
(TARGET_AVX))
            return -1;
          return 9475; /* vec_set_lo_v16hf */

        case E_V16BFmode:
          if (pattern1231 (x2, 
E_V16BFmode, 
E_V8BFmode) != 0
              || !
#line 28529 "../../gcc/config/i386/sse.md"
(TARGET_AVX))
            return -1;
          return 9476; /* vec_set_lo_v16bf */

        default:
          return -1;
        }

    case 4:
      x7 = XVECEXP (x4, 0, 0);
      if (x7 != const_int_rtx[MAX_SAVED_CONST_INT + 4])
        return -1;
      x8 = XVECEXP (x4, 0, 1);
      if (x8 != const_int_rtx[MAX_SAVED_CONST_INT + 5])
        return -1;
      x9 = XVECEXP (x4, 0, 2);
      if (x9 != const_int_rtx[MAX_SAVED_CONST_INT + 6])
        return -1;
      x10 = XVECEXP (x4, 0, 3);
      if (x10 != const_int_rtx[MAX_SAVED_CONST_INT + 7])
        return -1;
      switch (GET_MODE (operands[0]))
        {
        case E_V8DFmode:
          if (pattern1231 (x2, 
E_V8DFmode, 
E_V4DFmode) != 0
              || !(
#line 20127 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 718 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return -1;
          return 8402; /* vec_set_lo_v8df */

        case E_V8DImode:
          if (pattern1231 (x2, 
E_V8DImode, 
E_V4DImode) != 0
              || !(
#line 20127 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 718 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return -1;
          return 8404; /* vec_set_lo_v8di */

        case E_V8SImode:
          if (pattern1231 (x2, 
E_V8SImode, 
E_V4SImode) != 0
              || !
#line 28481 "../../gcc/config/i386/sse.md"
(TARGET_AVX))
            return -1;
          return 9466; /* vec_set_lo_v8si */

        case E_V8SFmode:
          if (pattern1231 (x2, 
E_V8SFmode, 
E_V4SFmode) != 0
              || !
#line 28481 "../../gcc/config/i386/sse.md"
(TARGET_AVX))
            return -1;
          return 9468; /* vec_set_lo_v8sf */

        default:
          return -1;
        }

    case 16:
      x7 = XVECEXP (x4, 0, 0);
      if (x7 != const_int_rtx[MAX_SAVED_CONST_INT + 16])
        return -1;
      x8 = XVECEXP (x4, 0, 1);
      if (x8 != const_int_rtx[MAX_SAVED_CONST_INT + 17])
        return -1;
      x9 = XVECEXP (x4, 0, 2);
      if (x9 != const_int_rtx[MAX_SAVED_CONST_INT + 18]
          || pattern1232 (x4, 
23, 
22, 
21, 
20, 
19) != 0)
        return -1;
      x11 = XVECEXP (x4, 0, 8);
      if (x11 != const_int_rtx[MAX_SAVED_CONST_INT + 24])
        return -1;
      x12 = XVECEXP (x4, 0, 9);
      if (x12 != const_int_rtx[MAX_SAVED_CONST_INT + 25])
        return -1;
      x13 = XVECEXP (x4, 0, 10);
      if (x13 != const_int_rtx[MAX_SAVED_CONST_INT + 26])
        return -1;
      x14 = XVECEXP (x4, 0, 11);
      if (x14 != const_int_rtx[MAX_SAVED_CONST_INT + 27])
        return -1;
      x15 = XVECEXP (x4, 0, 12);
      if (x15 != const_int_rtx[MAX_SAVED_CONST_INT + 28])
        return -1;
      x16 = XVECEXP (x4, 0, 13);
      if (x16 != const_int_rtx[MAX_SAVED_CONST_INT + 29])
        return -1;
      x17 = XVECEXP (x4, 0, 14);
      if (x17 != const_int_rtx[MAX_SAVED_CONST_INT + 30])
        return -1;
      x18 = XVECEXP (x4, 0, 15);
      if (x18 != const_int_rtx[MAX_SAVED_CONST_INT + 31]
          || pattern1231 (x2, 
E_V32QImode, 
E_V16QImode) != 0
          || !
#line 28577 "../../gcc/config/i386/sse.md"
(TARGET_AVX))
        return -1;
      return 9480; /* vec_set_lo_v32qi */

    default:
      return -1;
    }
}

 int
recog_270 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) != PARALLEL)
    return -1;
  x5 = XEXP (x3, 0);
  operands[1] = x5;
  x6 = XEXP (x2, 1);
  operands[2] = x6;
  switch (XVECLEN (x4, 0))
    {
    case 1:
      x7 = XVECEXP (x4, 0, 0);
      if (x7 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
        return -1;
      switch (GET_CODE (operands[2]))
        {
        case CONST_INT:
        case CONST_DOUBLE:
        case CONST_VECTOR:
          switch (GET_MODE (operands[0]))
            {
            case E_V2DImode:
              if (pattern1140 (x2, 
E_DImode, 
E_V2DImode) != 0
                  || !
#line 1846 "../../gcc/config/i386/sse.md"
(TARGET_SSE2))
                return -1;
              return 2548; /* *sse2_movq128_v2di */

            case E_V2DFmode:
              if (pattern1140 (x2, 
E_DFmode, 
E_V2DFmode) != 0
                  || !
#line 1846 "../../gcc/config/i386/sse.md"
(TARGET_SSE2))
                return -1;
              return 2549; /* *sse2_movq128_v2df */

            default:
              return -1;
            }

        case REG:
        case SUBREG:
        case MEM:
          if (!nonimmediate_operand (operands[2], E_DFmode)
              || pattern1141 (x2, 
E_V2DFmode, 
E_DFmode) != 0
              || !
#line 14728 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
            return -1;
          return 7211; /* sse2_loadhpd */

        default:
          return -1;
        }

    case 2:
      x7 = XVECEXP (x4, 0, 0);
      if (x7 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
        return -1;
      x8 = XVECEXP (x4, 0, 1);
      if (x8 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
        return -1;
      switch (GET_MODE (operands[0]))
        {
        case E_V4SFmode:
          if (pattern1141 (x2, 
E_V4SFmode, 
E_V2SFmode) != 0
              || !nonimmediate_operand (operands[2], E_V2SFmode)
              || !
#line 11622 "../../gcc/config/i386/sse.md"
(TARGET_SSE))
            return -1;
          return 5274; /* sse_loadhps */

        case E_V4DImode:
          if (pattern1142 (x2, 
E_V2DImode, 
E_V4DImode) != 0
              || !
#line 28456 "../../gcc/config/i386/sse.md"
(TARGET_AVX && 1))
            return -1;
          return 9462; /* vec_set_hi_v4di */

        case E_V4DFmode:
          if (pattern1142 (x2, 
E_V2DFmode, 
E_V4DFmode) != 0
              || !
#line 28456 "../../gcc/config/i386/sse.md"
(TARGET_AVX && 1))
            return -1;
          return 9464; /* vec_set_hi_v4df */

        default:
          return -1;
        }

    case 8:
      if (pattern671 (x4) != 0)
        return -1;
      switch (GET_MODE (operands[0]))
        {
        case E_V16SFmode:
          if (pattern1142 (x2, 
E_V8SFmode, 
E_V16SFmode) != 0
              || !(
#line 20112 "../../gcc/config/i386/sse.md"
(TARGET_AVX512DQ) && 
#line 722 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return -1;
          return 8398; /* vec_set_hi_v16sf */

        case E_V16SImode:
          if (pattern1142 (x2, 
E_V8SImode, 
E_V16SImode) != 0
              || !(
#line 20112 "../../gcc/config/i386/sse.md"
(TARGET_AVX512DQ) && 
#line 722 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return -1;
          return 8400; /* vec_set_hi_v16si */

        case E_V16HImode:
          if (pattern1142 (x2, 
E_V8HImode, 
E_V16HImode) != 0
              || !
#line 28551 "../../gcc/config/i386/sse.md"
(TARGET_AVX))
            return -1;
          return 9477; /* vec_set_hi_v16hi */

        case E_V16HFmode:
          if (pattern1142 (x2, 
E_V8HFmode, 
E_V16HFmode) != 0
              || !
#line 28551 "../../gcc/config/i386/sse.md"
(TARGET_AVX))
            return -1;
          return 9478; /* vec_set_hi_v16hf */

        case E_V16BFmode:
          if (pattern1142 (x2, 
E_V8BFmode, 
E_V16BFmode) != 0
              || !
#line 28551 "../../gcc/config/i386/sse.md"
(TARGET_AVX))
            return -1;
          return 9479; /* vec_set_hi_v16bf */

        default:
          return -1;
        }

    case 4:
      if (pattern672 (x4, 
3, 
2, 
1) != 0)
        return -1;
      switch (GET_MODE (operands[0]))
        {
        case E_V8DFmode:
          if (pattern1142 (x2, 
E_V4DFmode, 
E_V8DFmode) != 0
              || !(
#line 20142 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 718 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return -1;
          return 8406; /* vec_set_hi_v8df */

        case E_V8DImode:
          if (pattern1142 (x2, 
E_V4DImode, 
E_V8DImode) != 0
              || !(
#line 20142 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 718 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return -1;
          return 8408; /* vec_set_hi_v8di */

        case E_V8SImode:
          if (pattern1142 (x2, 
E_V4SImode, 
E_V8SImode) != 0
              || !
#line 28504 "../../gcc/config/i386/sse.md"
(TARGET_AVX))
            return -1;
          return 9470; /* vec_set_hi_v8si */

        case E_V8SFmode:
          if (pattern1142 (x2, 
E_V4SFmode, 
E_V8SFmode) != 0
              || !
#line 28504 "../../gcc/config/i386/sse.md"
(TARGET_AVX))
            return -1;
          return 9472; /* vec_set_hi_v8sf */

        default:
          return -1;
        }

    case 16:
      if (pattern791 (x4, 
6, 
5, 
4) != 0
          || pattern1485 (x4, 
11, 
10, 
9, 
8, 
7) != 0
          || pattern1142 (x2, 
E_V16QImode, 
E_V32QImode) != 0
          || !
#line 28603 "../../gcc/config/i386/sse.md"
(TARGET_AVX))
        return -1;
      return 9481; /* vec_set_hi_v32qi */

    default:
      return -1;
    }
}

 int
recog_273 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  operands[1] = x3;
  x4 = XEXP (x2, 2);
  switch (GET_CODE (x4))
    {
    case REG:
    case SUBREG:
    case MEM:
    case VEC_DUPLICATE:
      operands[3] = x4;
      switch (GET_MODE (operands[0]))
        {
        case E_V4SFmode:
          if (!register_operand (operands[0], E_V4SFmode)
              || GET_MODE (x2) != E_V4SFmode)
            return -1;
          if (nonimmediate_operand (operands[1], E_V4SFmode)
              && nonimmediate_operand (operands[2], E_V4SFmode)
              && nonimmediate_operand (operands[3], E_V4SFmode)
              && 
#line 5901 "../../gcc/config/i386/sse.md"
(TARGET_FMA || TARGET_FMA4))
            return 3795; /* *fma_fmadd_v4sf */
          if (!bcst_vector_operand (operands[1], E_V4SFmode)
              || !bcst_vector_operand (operands[2], E_V4SFmode)
              || !bcst_vector_operand (operands[3], E_V4SFmode)
              || !(
#line 5929 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && 1 && 1) && 
#line 5919 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 3819; /* *fma_fmadd_v4sf */

        case E_V2DFmode:
          if (!register_operand (operands[0], E_V2DFmode)
              || GET_MODE (x2) != E_V2DFmode)
            return -1;
          if (nonimmediate_operand (operands[1], E_V2DFmode)
              && nonimmediate_operand (operands[2], E_V2DFmode)
              && nonimmediate_operand (operands[3], E_V2DFmode)
              && 
#line 5901 "../../gcc/config/i386/sse.md"
(TARGET_FMA || TARGET_FMA4))
            return 3796; /* *fma_fmadd_v2df */
          if (!bcst_vector_operand (operands[1], E_V2DFmode)
              || !bcst_vector_operand (operands[2], E_V2DFmode)
              || !bcst_vector_operand (operands[3], E_V2DFmode)
              || !(
#line 5929 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && 1 && 1) && 
#line 5921 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 3830; /* *fma_fmadd_v2df */

        case E_V8SFmode:
          if (!register_operand (operands[0], E_V8SFmode)
              || GET_MODE (x2) != E_V8SFmode)
            return -1;
          if (nonimmediate_operand (operands[1], E_V8SFmode)
              && nonimmediate_operand (operands[2], E_V8SFmode)
              && nonimmediate_operand (operands[3], E_V8SFmode)
              && 
#line 5901 "../../gcc/config/i386/sse.md"
(TARGET_FMA || TARGET_FMA4))
            return 3797; /* *fma_fmadd_v8sf */
          if (!bcst_vector_operand (operands[1], E_V8SFmode)
              || !bcst_vector_operand (operands[2], E_V8SFmode)
              || !bcst_vector_operand (operands[3], E_V8SFmode)
              || !(
#line 5929 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && 1 && 1) && 
#line 5919 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 3815; /* *fma_fmadd_v8sf */

        case E_V4DFmode:
          if (!register_operand (operands[0], E_V4DFmode)
              || GET_MODE (x2) != E_V4DFmode)
            return -1;
          if (nonimmediate_operand (operands[1], E_V4DFmode)
              && nonimmediate_operand (operands[2], E_V4DFmode)
              && nonimmediate_operand (operands[3], E_V4DFmode)
              && 
#line 5901 "../../gcc/config/i386/sse.md"
(TARGET_FMA || TARGET_FMA4))
            return 3798; /* *fma_fmadd_v4df */
          if (!bcst_vector_operand (operands[1], E_V4DFmode)
              || !bcst_vector_operand (operands[2], E_V4DFmode)
              || !bcst_vector_operand (operands[3], E_V4DFmode)
              || !(
#line 5929 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && 1 && 1) && 
#line 5921 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 3826; /* *fma_fmadd_v4df */

        case E_V32HFmode:
          if (pattern864 (x2, 
E_V32HFmode) != 0
              || !(
#line 5929 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && 1 && 1) && 
#line 5914 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_EVEX512)))
            return -1;
          return 3799; /* *fma_fmadd_v32hf */

        case E_V16HFmode:
          if (pattern864 (x2, 
E_V16HFmode) != 0
              || !(
#line 5929 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && 1 && 1) && 
#line 5915 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL)))
            return -1;
          return 3803; /* *fma_fmadd_v16hf */

        case E_V8HFmode:
          if (pattern864 (x2, 
E_V8HFmode) != 0
              || !(
#line 5929 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && 1 && 1) && 
#line 5916 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL)))
            return -1;
          return 3807; /* *fma_fmadd_v8hf */

        case E_V16SFmode:
          if (pattern864 (x2, 
E_V16SFmode) != 0
              || !(
#line 5929 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && 1 && 1) && 
#line 5918 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return -1;
          return 3811; /* *fma_fmadd_v16sf */

        case E_V8DFmode:
          if (pattern864 (x2, 
E_V8DFmode) != 0
              || !(
#line 5929 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && 1 && 1) && 
#line 5920 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return -1;
          return 3822; /* *fma_fmadd_v8df */

        case E_V32BFmode:
          if (pattern924 (x2, 
E_V32BFmode) != 0
              || !(
#line 32135 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256) && 
#line 565 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_512)))
            return -1;
          return 10626; /* avx10_2_fmaddnepbf16_v32bf */

        case E_V16BFmode:
          if (pattern924 (x2, 
E_V16BFmode) != 0
              || !
#line 32135 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
            return -1;
          return 10628; /* avx10_2_fmaddnepbf16_v16bf */

        case E_V8BFmode:
          if (pattern924 (x2, 
E_V8BFmode) != 0
              || !
#line 32135 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
            return -1;
          return 10630; /* avx10_2_fmaddnepbf16_v8bf */

        default:
          return -1;
        }

    case NEG:
      x5 = XEXP (x4, 0);
      operands[3] = x5;
      switch (GET_MODE (operands[0]))
        {
        case E_V4SFmode:
          if (!register_operand (operands[0], E_V4SFmode)
              || GET_MODE (x2) != E_V4SFmode
              || GET_MODE (x4) != E_V4SFmode)
            return -1;
          if (nonimmediate_operand (operands[1], E_V4SFmode)
              && nonimmediate_operand (operands[2], E_V4SFmode)
              && nonimmediate_operand (operands[3], E_V4SFmode)
              && 
#line 6000 "../../gcc/config/i386/sse.md"
(TARGET_FMA || TARGET_FMA4))
            return 3864; /* *fma_fmsub_v4sf */
          if (!bcst_vector_operand (operands[1], E_V4SFmode)
              || !bcst_vector_operand (operands[2], E_V4SFmode)
              || !bcst_vector_operand (operands[3], E_V4SFmode)
              || !(
#line 6032 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && 1 && 1) && 
#line 5919 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 3888; /* *fma_fmsub_v4sf */

        case E_V2DFmode:
          if (!register_operand (operands[0], E_V2DFmode)
              || GET_MODE (x2) != E_V2DFmode
              || GET_MODE (x4) != E_V2DFmode)
            return -1;
          if (nonimmediate_operand (operands[1], E_V2DFmode)
              && nonimmediate_operand (operands[2], E_V2DFmode)
              && nonimmediate_operand (operands[3], E_V2DFmode)
              && 
#line 6000 "../../gcc/config/i386/sse.md"
(TARGET_FMA || TARGET_FMA4))
            return 3865; /* *fma_fmsub_v2df */
          if (!bcst_vector_operand (operands[1], E_V2DFmode)
              || !bcst_vector_operand (operands[2], E_V2DFmode)
              || !bcst_vector_operand (operands[3], E_V2DFmode)
              || !(
#line 6032 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && 1 && 1) && 
#line 5921 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 3899; /* *fma_fmsub_v2df */

        case E_V8SFmode:
          if (!register_operand (operands[0], E_V8SFmode)
              || GET_MODE (x2) != E_V8SFmode
              || GET_MODE (x4) != E_V8SFmode)
            return -1;
          if (nonimmediate_operand (operands[1], E_V8SFmode)
              && nonimmediate_operand (operands[2], E_V8SFmode)
              && nonimmediate_operand (operands[3], E_V8SFmode)
              && 
#line 6000 "../../gcc/config/i386/sse.md"
(TARGET_FMA || TARGET_FMA4))
            return 3866; /* *fma_fmsub_v8sf */
          if (!bcst_vector_operand (operands[1], E_V8SFmode)
              || !bcst_vector_operand (operands[2], E_V8SFmode)
              || !bcst_vector_operand (operands[3], E_V8SFmode)
              || !(
#line 6032 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && 1 && 1) && 
#line 5919 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 3884; /* *fma_fmsub_v8sf */

        case E_V4DFmode:
          if (!register_operand (operands[0], E_V4DFmode)
              || GET_MODE (x2) != E_V4DFmode
              || GET_MODE (x4) != E_V4DFmode)
            return -1;
          if (nonimmediate_operand (operands[1], E_V4DFmode)
              && nonimmediate_operand (operands[2], E_V4DFmode)
              && nonimmediate_operand (operands[3], E_V4DFmode)
              && 
#line 6000 "../../gcc/config/i386/sse.md"
(TARGET_FMA || TARGET_FMA4))
            return 3867; /* *fma_fmsub_v4df */
          if (!bcst_vector_operand (operands[1], E_V4DFmode)
              || !bcst_vector_operand (operands[2], E_V4DFmode)
              || !bcst_vector_operand (operands[3], E_V4DFmode)
              || !(
#line 6032 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && 1 && 1) && 
#line 5921 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 3895; /* *fma_fmsub_v4df */

        case E_V32HFmode:
          if (pattern865 (x2, 
E_V32HFmode) != 0
              || !(
#line 6032 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && 1 && 1) && 
#line 5914 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_EVEX512)))
            return -1;
          return 3868; /* *fma_fmsub_v32hf */

        case E_V16HFmode:
          if (pattern865 (x2, 
E_V16HFmode) != 0
              || !(
#line 6032 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && 1 && 1) && 
#line 5915 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL)))
            return -1;
          return 3872; /* *fma_fmsub_v16hf */

        case E_V8HFmode:
          if (pattern865 (x2, 
E_V8HFmode) != 0
              || !(
#line 6032 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && 1 && 1) && 
#line 5916 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL)))
            return -1;
          return 3876; /* *fma_fmsub_v8hf */

        case E_V16SFmode:
          if (pattern865 (x2, 
E_V16SFmode) != 0
              || !(
#line 6032 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && 1 && 1) && 
#line 5918 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return -1;
          return 3880; /* *fma_fmsub_v16sf */

        case E_V8DFmode:
          if (pattern865 (x2, 
E_V8DFmode) != 0
              || !(
#line 6032 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && 1 && 1) && 
#line 5920 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return -1;
          return 3891; /* *fma_fmsub_v8df */

        case E_V32BFmode:
          if (pattern925 (x2, 
E_V32BFmode) != 0
              || !(
#line 32263 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256) && 
#line 565 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_512)))
            return -1;
          return 10650; /* avx10_2_fmsubnepbf16_v32bf */

        case E_V16BFmode:
          if (pattern925 (x2, 
E_V16BFmode) != 0
              || !
#line 32263 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
            return -1;
          return 10652; /* avx10_2_fmsubnepbf16_v16bf */

        case E_V8BFmode:
          if (pattern925 (x2, 
E_V8BFmode) != 0
              || !
#line 32263 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
            return -1;
          return 10654; /* avx10_2_fmsubnepbf16_v8bf */

        default:
          return -1;
        }

    default:
      return -1;
    }
}

 int
recog_280 (rtx x1 ATTRIBUTE_UNUSED,
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
  x4 = XVECEXP (x3, 0, 0);
  if (GET_CODE (x4) != CONST_INT)
    return -1;
  x5 = XVECEXP (x3, 0, 1);
  if (GET_CODE (x5) == CONST_INT)
    {
      res = recog_279 (x1, insn, pnum_clobbers);
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
  x14 = XVECEXP (x3, 0, 8);
  operands[11] = x14;
  x15 = XVECEXP (x3, 0, 9);
  operands[12] = x15;
  x16 = XVECEXP (x3, 0, 10);
  operands[13] = x16;
  x17 = XVECEXP (x3, 0, 11);
  operands[14] = x17;
  x18 = XVECEXP (x3, 0, 12);
  operands[15] = x18;
  x19 = XVECEXP (x3, 0, 13);
  operands[16] = x19;
  x20 = XVECEXP (x3, 0, 14);
  operands[17] = x20;
  x21 = XVECEXP (x3, 0, 15);
  operands[18] = x21;
  switch (GET_MODE (operands[0]))
    {
    case E_V16SFmode:
      if (pattern1414 (x2, 
E_V16SFmode, 
E_V32SFmode) != 0)
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
          && 
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
       && INTVAL (operands[6]) == (INTVAL (operands[18]) - 12))))
        return 7186; /* avx512f_shufps512_1 */
      if (!const_0_to_15_operand (operands[3], E_VOIDmode)
          || pattern1850 () != 0
          || !(
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
(TARGET_EVEX512)))
        return -1;
      return 8426; /* avx512f_shuf_f32x4_1 */

    case E_V16SImode:
      if (pattern1414 (x2, 
E_V16SImode, 
E_V32SImode) != 0
          || !const_0_to_15_operand (operands[3], E_VOIDmode)
          || pattern1850 () != 0
          || !(
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
(TARGET_EVEX512)))
        return -1;
      return 8428; /* avx512f_shuf_i32x4_1 */

    default:
      return -1;
    }
}

 int
recog_285 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  x4 = XVECEXP (x3, 0, 0);
  if (GET_CODE (x4) != CONST_INT)
    return -1;
  operands[2] = x4;
  if (const_0_to_7_operand (operands[2], E_VOIDmode))
    {
      x5 = XVECEXP (x3, 0, 1);
      operands[3] = x5;
      if (const_0_to_7_operand (operands[3], E_VOIDmode))
        {
          switch (GET_MODE (operands[0]))
            {
            case E_V2DFmode:
              if (nonimmediate_operand (operands[0], E_V2DFmode)
                  && GET_MODE (x2) == E_V2DFmode
                  && register_operand (operands[1], E_V8DFmode)
                  && (
#line 12454 "../../gcc/config/i386/sse.md"
(TARGET_AVX512DQ
   && INTVAL (operands[2]) % 2 == 0
   && INTVAL (operands[2]) == INTVAL (operands[3]) - 1) && 
#line 718 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                return 5336; /* *avx512dq_vextractf64x2_1 */
              break;

            case E_V2DImode:
              if (nonimmediate_operand (operands[0], E_V2DImode)
                  && GET_MODE (x2) == E_V2DImode
                  && register_operand (operands[1], E_V8DImode)
                  && (
#line 12454 "../../gcc/config/i386/sse.md"
(TARGET_AVX512DQ
   && INTVAL (operands[2]) % 2 == 0
   && INTVAL (operands[2]) == INTVAL (operands[3]) - 1) && 
#line 718 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                return 5337; /* *avx512dq_vextracti64x2_1 */
              break;

            default:
              break;
            }
        }
    }
  x5 = XVECEXP (x3, 0, 1);
  if (GET_CODE (x5) != CONST_INT)
    return -1;
  switch (XWINT (x4, 0))
    {
    case 0L:
      if (XWINT (x5, 0) != 1L)
        return -1;
      switch (GET_MODE (operands[0]))
        {
        case E_V2DImode:
          if (!nonimmediate_operand (operands[0], E_V2DImode)
              || GET_MODE (x2) != E_V2DImode
              || !nonimmediate_operand (operands[1], E_V4DImode)
              || !
#line 12880 "../../gcc/config/i386/sse.md"
(TARGET_AVX
   && !(MEM_P (operands[0]) && MEM_P (operands[1]))))
            return -1;
          return 5360; /* vec_extract_lo_v4di */

        case E_V2DFmode:
          if (!nonimmediate_operand (operands[0], E_V2DFmode)
              || GET_MODE (x2) != E_V2DFmode
              || !nonimmediate_operand (operands[1], E_V4DFmode)
              || !
#line 12880 "../../gcc/config/i386/sse.md"
(TARGET_AVX
   && !(MEM_P (operands[0]) && MEM_P (operands[1]))))
            return -1;
          return 5361; /* vec_extract_lo_v4df */

        default:
          return -1;
        }

    case 2L:
      if (XWINT (x5, 0) != 3L)
        return -1;
      switch (GET_MODE (operands[0]))
        {
        case E_V2DImode:
          if (!nonimmediate_operand (operands[0], E_V2DImode)
              || GET_MODE (x2) != E_V2DImode
              || !register_operand (operands[1], E_V4DImode)
              || !
#line 12916 "../../gcc/config/i386/sse.md"
(TARGET_AVX))
            return -1;
          return 5364; /* vec_extract_hi_v4di */

        case E_V2DFmode:
          if (!nonimmediate_operand (operands[0], E_V2DFmode)
              || GET_MODE (x2) != E_V2DFmode
              || !register_operand (operands[1], E_V4DFmode)
              || !
#line 12916 "../../gcc/config/i386/sse.md"
(TARGET_AVX))
            return -1;
          return 5365; /* vec_extract_hi_v4df */

        default:
          return -1;
        }

    default:
      return -1;
    }
}

 int
recog_291 (rtx x1 ATTRIBUTE_UNUSED,
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
      res = recog_288 (x1, insn, pnum_clobbers);
      if (res >= 0)
        return res;
    }
  operands[2] = x4;
  res = recog_290 (x1, insn, pnum_clobbers);
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
      || !register_operand (operands[0], E_V8HImode)
      || GET_MODE (x2) != E_V8HImode
      || !vector_operand (operands[1], E_V8HImode)
      || pattern1491 (x3) != 0
      || !
#line 21003 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && 1 && 1))
    return -1;
  return 8450; /* sse2_pshufhw_1 */
}

 int
recog_293 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12, x13, x14, x15, x16, x17;
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
  x10 = XVECEXP (x3, 0, 8);
  operands[10] = x10;
  x11 = XVECEXP (x3, 0, 9);
  operands[11] = x11;
  x12 = XVECEXP (x3, 0, 10);
  operands[12] = x12;
  x13 = XVECEXP (x3, 0, 11);
  operands[13] = x13;
  x14 = XVECEXP (x3, 0, 12);
  operands[14] = x14;
  x15 = XVECEXP (x3, 0, 13);
  operands[15] = x15;
  x16 = XVECEXP (x3, 0, 14);
  operands[16] = x16;
  x17 = XVECEXP (x3, 0, 15);
  operands[17] = x17;
  switch (GET_MODE (operands[0]))
    {
    case E_V16SFmode:
      if (!register_operand (operands[0], E_V16SFmode)
          || GET_MODE (x2) != E_V16SFmode
          || !register_operand (operands[1], E_V16SFmode)
          || pattern1827 () != 0
          || !(
#line 20465 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (INTVAL (operands[2]) & 3) == 0
   && INTVAL (operands[2]) == INTVAL (operands[3]) - 1
   && INTVAL (operands[2]) == INTVAL (operands[4]) - 2
   && INTVAL (operands[2]) == INTVAL (operands[5]) - 3
   && (INTVAL (operands[6]) & 3) == 0
   && INTVAL (operands[6]) == INTVAL (operands[7]) - 1
   && INTVAL (operands[6]) == INTVAL (operands[8]) - 2
   && INTVAL (operands[6]) == INTVAL (operands[9]) - 3
   && (INTVAL (operands[10]) & 3) == 0
   && INTVAL (operands[10]) == INTVAL (operands[11]) - 1
   && INTVAL (operands[10]) == INTVAL (operands[12]) - 2
   && INTVAL (operands[10]) == INTVAL (operands[13]) - 3
   && (INTVAL (operands[14]) & 3) == 0
   && INTVAL (operands[14]) == INTVAL (operands[15]) - 1
   && INTVAL (operands[14]) == INTVAL (operands[16]) - 2
   && INTVAL (operands[14]) == INTVAL (operands[17]) - 3) && 
#line 722 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 8430; /* *avx512f_shuf_f32x4_1_1 */

    case E_V16SImode:
      if (!register_operand (operands[0], E_V16SImode)
          || GET_MODE (x2) != E_V16SImode)
        return -1;
      if (register_operand (operands[1], E_V16SImode)
          && pattern1827 () == 0
          && (
#line 20465 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (INTVAL (operands[2]) & 3) == 0
   && INTVAL (operands[2]) == INTVAL (operands[3]) - 1
   && INTVAL (operands[2]) == INTVAL (operands[4]) - 2
   && INTVAL (operands[2]) == INTVAL (operands[5]) - 3
   && (INTVAL (operands[6]) & 3) == 0
   && INTVAL (operands[6]) == INTVAL (operands[7]) - 1
   && INTVAL (operands[6]) == INTVAL (operands[8]) - 2
   && INTVAL (operands[6]) == INTVAL (operands[9]) - 3
   && (INTVAL (operands[10]) & 3) == 0
   && INTVAL (operands[10]) == INTVAL (operands[11]) - 1
   && INTVAL (operands[10]) == INTVAL (operands[12]) - 2
   && INTVAL (operands[10]) == INTVAL (operands[13]) - 3
   && (INTVAL (operands[14]) & 3) == 0
   && INTVAL (operands[14]) == INTVAL (operands[15]) - 1
   && INTVAL (operands[14]) == INTVAL (operands[16]) - 2
   && INTVAL (operands[14]) == INTVAL (operands[17]) - 3) && 
#line 722 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return 8432; /* *avx512f_shuf_i32x4_1_1 */
      if (!nonimmediate_operand (operands[1], E_V16SImode)
          || pattern1706 () != 0
          || !const_8_to_11_operand (operands[10], E_VOIDmode)
          || !const_8_to_11_operand (operands[11], E_VOIDmode)
          || !const_8_to_11_operand (operands[12], E_VOIDmode)
          || !const_8_to_11_operand (operands[13], E_VOIDmode)
          || !const_12_to_15_operand (operands[14], E_VOIDmode)
          || !const_12_to_15_operand (operands[15], E_VOIDmode)
          || !const_12_to_15_operand (operands[16], E_VOIDmode)
          || !const_12_to_15_operand (operands[17], E_VOIDmode)
          || !
#line 20547 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512
   && INTVAL (operands[2]) + 4 == INTVAL (operands[6])
   && INTVAL (operands[3]) + 4 == INTVAL (operands[7])
   && INTVAL (operands[4]) + 4 == INTVAL (operands[8])
   && INTVAL (operands[5]) + 4 == INTVAL (operands[9])
   && INTVAL (operands[2]) + 8 == INTVAL (operands[10])
   && INTVAL (operands[3]) + 8 == INTVAL (operands[11])
   && INTVAL (operands[4]) + 8 == INTVAL (operands[12])
   && INTVAL (operands[5]) + 8 == INTVAL (operands[13])
   && INTVAL (operands[2]) + 12 == INTVAL (operands[14])
   && INTVAL (operands[3]) + 12 == INTVAL (operands[15])
   && INTVAL (operands[4]) + 12 == INTVAL (operands[16])
   && INTVAL (operands[5]) + 12 == INTVAL (operands[17])))
        return -1;
      return 8434; /* avx512f_pshufd_1 */

    default:
      return -1;
    }
}

 int
recog_303 (rtx x1 ATTRIBUTE_UNUSED,
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
    case NOT:
      switch (pattern335 (x2))
        {
        case 0:
          switch (GET_MODE (operands[0]))
            {
            case E_V16BFmode:
              if (pattern613 (x2, 
E_V16BFmode) != 0
                  || !(
#line 5222 "../../gcc/config/i386/sse.md"
(TARGET_SSE && 1
   && (!false || 16 != 16)) && 
#line 427 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
                return -1;
              return 3688; /* avx512bf16_andnotv16bf3 */

            case E_V8BFmode:
              if (pattern613 (x2, 
E_V8BFmode) != 0
                  || !(
#line 5222 "../../gcc/config/i386/sse.md"
(TARGET_SSE && 1
   && (!false || 16 != 16)) && 
#line 427 "../../gcc/config/i386/sse.md"
(TARGET_SSE2)))
                return -1;
              return 3689; /* avx512bf16_andnotv8bf3 */

            case E_V16HFmode:
              if (pattern613 (x2, 
E_V16HFmode) != 0
                  || !(
#line 5222 "../../gcc/config/i386/sse.md"
(TARGET_SSE && 1
   && (!false || 16 != 16)) && 
#line 428 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
                return -1;
              return 3690; /* avx512fp16_andnotv16hf3 */

            case E_V8HFmode:
              if (pattern613 (x2, 
E_V8HFmode) != 0
                  || !(
#line 5222 "../../gcc/config/i386/sse.md"
(TARGET_SSE && 1
   && (!false || 16 != 16)) && 
#line 428 "../../gcc/config/i386/sse.md"
(TARGET_SSE2)))
                return -1;
              return 3691; /* avx512fp16_andnotv8hf3 */

            case E_V8SFmode:
              if (pattern613 (x2, 
E_V8SFmode) != 0
                  || !(
#line 5222 "../../gcc/config/i386/sse.md"
(TARGET_SSE && 1
   && (!false || 32 != 16)) && 
#line 429 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
                return -1;
              return 3692; /* avx_andnotv8sf3 */

            case E_V4SFmode:
              if (pattern613 (x2, 
E_V4SFmode) != 0
                  || !
#line 5222 "../../gcc/config/i386/sse.md"
(TARGET_SSE && 1
   && (!false || 32 != 16)))
                return -1;
              return 3694; /* sse_andnotv4sf3 */

            case E_V4DFmode:
              if (pattern613 (x2, 
E_V4DFmode) != 0
                  || !(
#line 5222 "../../gcc/config/i386/sse.md"
(TARGET_SSE && 1
   && (!false || 64 != 16)) && 
#line 430 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
                return -1;
              return 3696; /* avx_andnotv4df3 */

            case E_V2DFmode:
              if (pattern613 (x2, 
E_V2DFmode) != 0
                  || !(
#line 5222 "../../gcc/config/i386/sse.md"
(TARGET_SSE && 1
   && (!false || 64 != 16)) && 
#line 430 "../../gcc/config/i386/sse.md"
(TARGET_SSE2)))
                return -1;
              return 3698; /* sse2_andnotv2df3 */

            case E_V32BFmode:
              if (pattern739 (x2, 
E_V32BFmode) != 0
                  || !(
#line 5297 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && (!false || 16 != 16)) && 
#line 492 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                return -1;
              return 3700; /* avx512bf16_andnotv32bf3 */

            case E_V32HFmode:
              if (pattern739 (x2, 
E_V32HFmode) != 0
                  || !(
#line 5297 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && (!false || 16 != 16)) && 
#line 493 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                return -1;
              return 3701; /* avx512fp16_andnotv32hf3 */

            case E_V16SFmode:
              if (pattern739 (x2, 
E_V16SFmode) != 0
                  || !(
#line 5297 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && (!false || 32 != 16)) && 
#line 494 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                return -1;
              return 3702; /* avx512f_andnotv16sf3 */

            case E_V8DFmode:
              if (pattern739 (x2, 
E_V8DFmode) != 0
                  || !(
#line 5297 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && (!false || 64 != 16)) && 
#line 495 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                return -1;
              return 3704; /* avx512f_andnotv8df3 */

            case E_V1TImode:
              if (pattern613 (x2, 
E_V1TImode) != 0
                  || !
#line 5588 "../../gcc/config/i386/sse.md"
(TARGET_SSE))
                return -1;
              return 3777; /* *andnotv1ti3 */

            case E_V16SImode:
              if (pattern933 (x2, 
E_V16SImode) != 0
                  || !(
#line 18487 "../../gcc/config/i386/sse.md"
(TARGET_SSE
   && (register_operand (operands[1], V16SImode)
       || register_operand (operands[2], V16SImode))) && 
#line 569 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
                return -1;
              return 7983; /* *andnotv16si3 */

            case E_V8DImode:
              if (pattern933 (x2, 
E_V8DImode) != 0
                  || !(
#line 18487 "../../gcc/config/i386/sse.md"
(TARGET_SSE
   && (register_operand (operands[1], V8DImode)
       || register_operand (operands[2], V8DImode))) && 
#line 570 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
                return -1;
              return 7984; /* *andnotv8di3 */

            case E_V64QImode:
              if (pattern933 (x2, 
E_V64QImode) != 0
                  || !(
#line 18487 "../../gcc/config/i386/sse.md"
(TARGET_SSE
   && (register_operand (operands[1], V64QImode)
       || register_operand (operands[2], V64QImode))) && 
#line 571 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512)))
                return -1;
              return 7985; /* *andnotv64qi3 */

            case E_V32QImode:
              if (pattern933 (x2, 
E_V32QImode) != 0
                  || !(
#line 18487 "../../gcc/config/i386/sse.md"
(TARGET_SSE
   && (register_operand (operands[1], V32QImode)
       || register_operand (operands[2], V32QImode))) && 
#line 571 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
                return -1;
              return 7986; /* *andnotv32qi3 */

            case E_V16QImode:
              if (pattern933 (x2, 
E_V16QImode) != 0
                  || !
#line 18487 "../../gcc/config/i386/sse.md"
(TARGET_SSE
   && (register_operand (operands[1], V16QImode)
       || register_operand (operands[2], V16QImode))))
                return -1;
              return 7987; /* *andnotv16qi3 */

            case E_V32HImode:
              if (pattern933 (x2, 
E_V32HImode) != 0
                  || !(
#line 18487 "../../gcc/config/i386/sse.md"
(TARGET_SSE
   && (register_operand (operands[1], V32HImode)
       || register_operand (operands[2], V32HImode))) && 
#line 572 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512)))
                return -1;
              return 7988; /* *andnotv32hi3 */

            case E_V16HImode:
              if (pattern933 (x2, 
E_V16HImode) != 0
                  || !(
#line 18487 "../../gcc/config/i386/sse.md"
(TARGET_SSE
   && (register_operand (operands[1], V16HImode)
       || register_operand (operands[2], V16HImode))) && 
#line 572 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
                return -1;
              return 7989; /* *andnotv16hi3 */

            case E_V8HImode:
              if (pattern933 (x2, 
E_V8HImode) != 0
                  || !
#line 18487 "../../gcc/config/i386/sse.md"
(TARGET_SSE
   && (register_operand (operands[1], V8HImode)
       || register_operand (operands[2], V8HImode))))
                return -1;
              return 7990; /* *andnotv8hi3 */

            case E_V8SImode:
              if (pattern933 (x2, 
E_V8SImode) != 0
                  || !(
#line 18487 "../../gcc/config/i386/sse.md"
(TARGET_SSE
   && (register_operand (operands[1], V8SImode)
       || register_operand (operands[2], V8SImode))) && 
#line 573 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
                return -1;
              return 7991; /* *andnotv8si3 */

            case E_V4SImode:
              if (pattern933 (x2, 
E_V4SImode) != 0
                  || !
#line 18487 "../../gcc/config/i386/sse.md"
(TARGET_SSE
   && (register_operand (operands[1], V4SImode)
       || register_operand (operands[2], V4SImode))))
                return -1;
              return 7992; /* *andnotv4si3 */

            case E_V4DImode:
              if (pattern933 (x2, 
E_V4DImode) != 0
                  || !(
#line 18487 "../../gcc/config/i386/sse.md"
(TARGET_SSE
   && (register_operand (operands[1], V4DImode)
       || register_operand (operands[2], V4DImode))) && 
#line 574 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
                return -1;
              return 7993; /* *andnotv4di3 */

            case E_V2DImode:
              if (pattern933 (x2, 
E_V2DImode) != 0
                  || !
#line 18487 "../../gcc/config/i386/sse.md"
(TARGET_SSE
   && (register_operand (operands[1], V2DImode)
       || register_operand (operands[2], V2DImode))))
                return -1;
              return 7994; /* *andnotv2di3 */

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
          return 8082; /* *norv16si3 */

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
          return 8084; /* *norv8di3 */

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
          return 8086; /* *norv64qi3 */

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
          return 8088; /* *norv32qi3 */

        case 5:
          if (!
#line 19021 "../../gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && (register_operand (operands[1], V16QImode)
       || register_operand (operands[2], V16QImode))))
            return -1;
          return 8090; /* *norv16qi3 */

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
          return 8092; /* *norv32hi3 */

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
          return 8094; /* *norv16hi3 */

        case 8:
          if (!
#line 19021 "../../gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && (register_operand (operands[1], V8HImode)
       || register_operand (operands[2], V8HImode))))
            return -1;
          return 8096; /* *norv8hi3 */

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
          return 8098; /* *norv8si3 */

        case 10:
          if (!
#line 19021 "../../gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && (register_operand (operands[1], V4SImode)
       || register_operand (operands[2], V4SImode))))
            return -1;
          return 8100; /* *norv4si3 */

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
          return 8102; /* *norv4di3 */

        case 12:
          if (!
#line 19021 "../../gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && (register_operand (operands[1], V2DImode)
       || register_operand (operands[2], V2DImode))))
            return -1;
          return 8104; /* *norv2di3 */

        default:
          return -1;
        }

    case REG:
    case SUBREG:
    case MEM:
    case VEC_DUPLICATE:
      return recog_300 (x1, insn, pnum_clobbers);

    case AND:
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
              return 5516; /* *avx512bw_vpternlogv64qi_1 */

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
              return 5543; /* *avx512vl_vpternlogv32qi_1 */

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
              return 5570; /* *avx512vl_vpternlogv16qi_1 */

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
              return 5597; /* *avx512bw_vpternlogv32hi_1 */

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
              return 5624; /* *avx512vl_vpternlogv16hi_1 */

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
              return 5651; /* *avx512vl_vpternlogv8hi_1 */

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
              return 5678; /* *avx512f_vpternlogv16si_1 */

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
              return 5705; /* *avx512vl_vpternlogv8si_1 */

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
              return 5732; /* *avx512vl_vpternlogv4si_1 */

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
              return 5759; /* *avx512f_vpternlogv8di_1 */

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
              return 5786; /* *avx512vl_vpternlogv4di_1 */

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
              return 5813; /* *avx512vl_vpternlogv2di_1 */

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
              return 5519; /* *avx512bw_vpternlogv64qi_1 */

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
              return 5546; /* *avx512vl_vpternlogv32qi_1 */

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
              return 5573; /* *avx512vl_vpternlogv16qi_1 */

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
              return 5600; /* *avx512bw_vpternlogv32hi_1 */

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
              return 5627; /* *avx512vl_vpternlogv16hi_1 */

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
              return 5654; /* *avx512vl_vpternlogv8hi_1 */

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
              return 5681; /* *avx512f_vpternlogv16si_1 */

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
              return 5708; /* *avx512vl_vpternlogv8si_1 */

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
              return 5735; /* *avx512vl_vpternlogv4si_1 */

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
              return 5762; /* *avx512f_vpternlogv8di_1 */

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
              return 5789; /* *avx512vl_vpternlogv4di_1 */

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
              return 5816; /* *avx512vl_vpternlogv2di_1 */

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
              return 5522; /* *avx512bw_vpternlogv64qi_1 */

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
              return 5549; /* *avx512vl_vpternlogv32qi_1 */

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
              return 5576; /* *avx512vl_vpternlogv16qi_1 */

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
              return 5603; /* *avx512bw_vpternlogv32hi_1 */

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
              return 5630; /* *avx512vl_vpternlogv16hi_1 */

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
              return 5657; /* *avx512vl_vpternlogv8hi_1 */

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
              return 5684; /* *avx512f_vpternlogv16si_1 */

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
              return 5711; /* *avx512vl_vpternlogv8si_1 */

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
              return 5738; /* *avx512vl_vpternlogv4si_1 */

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
              return 5765; /* *avx512f_vpternlogv8di_1 */

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
              return 5792; /* *avx512vl_vpternlogv4di_1 */

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
              return 5819; /* *avx512vl_vpternlogv2di_1 */

            case 36:
              if (!(
#line 13946 "../../gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 332 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
                return -1;
              return 6812; /* *avx512bw_vpternlogv64qi_3 */

            case 37:
              if (!(
#line 13946 "../../gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 332 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
                return -1;
              return 6821; /* *avx512vl_vpternlogv32qi_3 */

            case 38:
              if (!
#line 13946 "../../gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()))
                return -1;
              return 6830; /* *avx512vl_vpternlogv16qi_3 */

            case 39:
              if (!(
#line 13946 "../../gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 333 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
                return -1;
              return 6839; /* *avx512bw_vpternlogv32hi_3 */

            case 40:
              if (!(
#line 13946 "../../gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 333 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
                return -1;
              return 6848; /* *avx512vl_vpternlogv16hi_3 */

            case 41:
              if (!
#line 13946 "../../gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()))
                return -1;
              return 6857; /* *avx512vl_vpternlogv8hi_3 */

            case 42:
              if (!(
#line 13946 "../../gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 334 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
                return -1;
              return 6866; /* *avx512f_vpternlogv16si_3 */

            case 43:
              if (!(
#line 13946 "../../gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 334 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
                return -1;
              return 6875; /* *avx512vl_vpternlogv8si_3 */

            case 44:
              if (!
#line 13946 "../../gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()))
                return -1;
              return 6884; /* *avx512vl_vpternlogv4si_3 */

            case 45:
              if (!(
#line 13946 "../../gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 335 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
                return -1;
              return 6893; /* *avx512f_vpternlogv8di_3 */

            case 46:
              if (!(
#line 13946 "../../gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 335 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
                return -1;
              return 6902; /* *avx512vl_vpternlogv4di_3 */

            case 47:
              if (!
#line 13946 "../../gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()))
                return -1;
              return 6911; /* *avx512vl_vpternlogv2di_3 */

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
              return 6164; /* *avx512bw_vpternlogv64qi_2 */

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
              return 6191; /* *avx512vl_vpternlogv32qi_2 */

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
              return 6218; /* *avx512vl_vpternlogv16qi_2 */

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
              return 6245; /* *avx512bw_vpternlogv32hi_2 */

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
              return 6272; /* *avx512vl_vpternlogv16hi_2 */

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
              return 6299; /* *avx512vl_vpternlogv8hi_2 */

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
              return 6326; /* *avx512f_vpternlogv16si_2 */

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
              return 6353; /* *avx512vl_vpternlogv8si_2 */

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
              return 6380; /* *avx512vl_vpternlogv4si_2 */

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
              return 6407; /* *avx512f_vpternlogv8di_2 */

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
              return 6434; /* *avx512vl_vpternlogv4di_2 */

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
              return 6461; /* *avx512vl_vpternlogv2di_2 */

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
              return 6167; /* *avx512bw_vpternlogv64qi_2 */

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
              return 6194; /* *avx512vl_vpternlogv32qi_2 */

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
              return 6221; /* *avx512vl_vpternlogv16qi_2 */

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
              return 6248; /* *avx512bw_vpternlogv32hi_2 */

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
              return 6275; /* *avx512vl_vpternlogv16hi_2 */

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
              return 6302; /* *avx512vl_vpternlogv8hi_2 */

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
              return 6329; /* *avx512f_vpternlogv16si_2 */

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
              return 6356; /* *avx512vl_vpternlogv8si_2 */

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
              return 6383; /* *avx512vl_vpternlogv4si_2 */

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
              return 6410; /* *avx512f_vpternlogv8di_2 */

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
              return 6437; /* *avx512vl_vpternlogv4di_2 */

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
              return 6464; /* *avx512vl_vpternlogv2di_2 */

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
              return 6170; /* *avx512bw_vpternlogv64qi_2 */

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
              return 6197; /* *avx512vl_vpternlogv32qi_2 */

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
              return 6224; /* *avx512vl_vpternlogv16qi_2 */

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
              return 6251; /* *avx512bw_vpternlogv32hi_2 */

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
              return 6278; /* *avx512vl_vpternlogv16hi_2 */

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
              return 6305; /* *avx512vl_vpternlogv8hi_2 */

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
              return 6332; /* *avx512f_vpternlogv16si_2 */

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
              return 6359; /* *avx512vl_vpternlogv8si_2 */

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
              return 6386; /* *avx512vl_vpternlogv4si_2 */

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
              return 6413; /* *avx512f_vpternlogv8di_2 */

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
              return 6440; /* *avx512vl_vpternlogv4di_2 */

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
              return 6467; /* *avx512vl_vpternlogv2di_2 */

            default:
              return -1;
            }

        default:
          return -1;
        }

    case IOR:
      return recog_302 (x1, insn, pnum_clobbers);

    case XOR:
      return recog_301 (x1, insn, pnum_clobbers);

    case GT:
      switch (pattern337 (x2))
        {
        case 0:
          if (!(
#line 17325 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_2 && ix86_pre_reload_split ()) && 
#line 705 "../../gcc/config/i386/sse.md"
(TARGET_AVX2)))
            return -1;
          return 7676; /* *avx2_lshrv4di3_1 */

        case 1:
          if (!
#line 17325 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_2 && ix86_pre_reload_split ()))
            return -1;
          return 7677; /* *avx2_lshrv2di3_1 */

        default:
          return -1;
        }

    case LT:
      x4 = XEXP (x3, 0);
      operands[1] = x4;
      x5 = XEXP (x3, 1);
      operands[2] = x5;
      x6 = XEXP (x2, 1);
      operands[3] = x6;
      switch (GET_MODE (operands[0]))
        {
        case E_V4DImode:
          if (pattern934 (x2, 
E_V4DImode) != 0
              || !(
#line 17342 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_pre_reload_split ()) && 
#line 705 "../../gcc/config/i386/sse.md"
(TARGET_AVX2)))
            return -1;
          return 7678; /* *avx2_lshrv4di3_2 */

        case E_V2DImode:
          if (pattern934 (x2, 
E_V2DImode) != 0
              || !
#line 17342 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_pre_reload_split ()))
            return -1;
          return 7679; /* *avx2_lshrv2di3_2 */

        default:
          return -1;
        }

    default:
      return -1;
    }
}

 int
recog_319 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12, x13, x14, x15, x16, x17;
  rtx x18, x19, x20, x21, x22, x23, x24, x25;
  rtx x26, x27, x28, x29, x30, x31, x32, x33;
  rtx x34, x35, x36, x37, x38, x39, x40, x41;
  rtx x42, x43, x44, x45, x46, x47;
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
(TARGET_SSE && ix86_binary_operator_ok (PLUS, V32HFmode, operands)
   && 1 && 1) && 
#line 390 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_EVEX512)))
            return -1;
          return 2677; /* *addv32hf3 */

        case 1:
          if (!(
#line 2661 "../../gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (PLUS, V16HFmode, operands)
   && 1 && 1) && 
#line 391 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL)))
            return -1;
          return 2685; /* *addv16hf3 */

        case 2:
          if (!(
#line 2661 "../../gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (PLUS, V8HFmode, operands)
   && 1 && 1) && 
#line 392 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL)))
            return -1;
          return 2693; /* *addv8hf3 */

        case 3:
          if (!(
#line 2661 "../../gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (PLUS, V16SFmode, operands)
   && 1 && 1) && 
#line 393 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 2701; /* *addv16sf3 */

        case 4:
          if (!(
#line 2661 "../../gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (PLUS, V8SFmode, operands)
   && 1 && 1) && 
#line 393 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 2709; /* *addv8sf3 */

        case 5:
          if (!
#line 2661 "../../gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (PLUS, V4SFmode, operands)
   && 1 && 1))
            return -1;
          return 2717; /* *addv4sf3 */

        case 6:
          if (!(
#line 2661 "../../gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (PLUS, V8DFmode, operands)
   && 1 && 1) && 
#line 394 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 2725; /* *addv8df3 */

        case 7:
          if (!(
#line 2661 "../../gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (PLUS, V4DFmode, operands)
   && 1 && 1) && 
#line 394 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 2733; /* *addv4df3 */

        case 8:
          if (!(
#line 2661 "../../gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (PLUS, V2DFmode, operands)
   && 1 && 1) && 
#line 395 "../../gcc/config/i386/sse.md"
(TARGET_SSE2)))
            return -1;
          return 2741; /* *addv2df3 */

        case 9:
          if (!(
#line 16267 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (PLUS, V64QImode, operands)) && 
#line 588 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512)))
            return -1;
          return 7459; /* *addv64qi3 */

        case 10:
          if (!(
#line 16267 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (PLUS, V32QImode, operands)) && 
#line 588 "../../gcc/config/i386/sse.md"
(TARGET_AVX2)))
            return -1;
          return 7461; /* *addv32qi3 */

        case 11:
          if (!
#line 16267 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (PLUS, V16QImode, operands)))
            return -1;
          return 7463; /* *addv16qi3 */

        case 12:
          if (!(
#line 16267 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (PLUS, V32HImode, operands)) && 
#line 589 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512)))
            return -1;
          return 7465; /* *addv32hi3 */

        case 13:
          if (!(
#line 16267 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (PLUS, V16HImode, operands)) && 
#line 589 "../../gcc/config/i386/sse.md"
(TARGET_AVX2)))
            return -1;
          return 7467; /* *addv16hi3 */

        case 14:
          if (!
#line 16267 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (PLUS, V8HImode, operands)))
            return -1;
          return 7469; /* *addv8hi3 */

        case 15:
          if (!(
#line 16267 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (PLUS, V16SImode, operands)) && 
#line 590 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 7471; /* *addv16si3 */

        case 16:
          if (!(
#line 16267 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (PLUS, V8SImode, operands)) && 
#line 590 "../../gcc/config/i386/sse.md"
(TARGET_AVX2)))
            return -1;
          return 7473; /* *addv8si3 */

        case 17:
          if (!
#line 16267 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (PLUS, V4SImode, operands)))
            return -1;
          return 7475; /* *addv4si3 */

        case 18:
          if (!(
#line 16267 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (PLUS, V8DImode, operands)) && 
#line 591 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 7477; /* *addv8di3 */

        case 19:
          if (!(
#line 16267 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (PLUS, V4DImode, operands)) && 
#line 591 "../../gcc/config/i386/sse.md"
(TARGET_AVX2)))
            return -1;
          return 7479; /* *addv4di3 */

        case 20:
          if (!
#line 16267 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (PLUS, V2DImode, operands)))
            return -1;
          return 7481; /* *addv2di3 */

        case 21:
          if (!(
#line 32110 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256) && 
#line 565 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_512)))
            return -1;
          return 10602; /* avx10_2_addnepbf16_v32bf */

        case 22:
          if (!
#line 32110 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
            return -1;
          return 10610; /* avx10_2_addnepbf16_v16bf */

        case 23:
          if (!
#line 32110 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
            return -1;
          return 10618; /* avx10_2_addnepbf16_v8bf */

        default:
          return -1;
        }

    case UNSPEC:
      switch (pattern183 (x3))
        {
        case 0:
          if (!(
#line 7161 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && flag_unsafe_math_optimizations
  && ix86_pre_reload_split ()) && 
#line 555 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return -1;
          return 4341; /* fma_v32hf_fadd_fmul */

        case 1:
          if (!(
#line 7161 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && flag_unsafe_math_optimizations
  && ix86_pre_reload_split ()) && 
#line 555 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 4342; /* fma_v16hf_fadd_fmul */

        case 2:
          if (!(
#line 7161 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && flag_unsafe_math_optimizations
  && ix86_pre_reload_split ()) && 
#line 555 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 4343; /* fma_v8hf_fadd_fmul */

        case 3:
          if (!(
#line 7178 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && flag_unsafe_math_optimizations
  && ix86_pre_reload_split ()) && 
#line 555 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return -1;
          return 4344; /* fma_v32hf_fadd_fcmul */

        case 4:
          if (!(
#line 7178 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && flag_unsafe_math_optimizations
  && ix86_pre_reload_split ()) && 
#line 555 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 4345; /* fma_v16hf_fadd_fcmul */

        case 5:
          if (!(
#line 7178 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && flag_unsafe_math_optimizations
  && ix86_pre_reload_split ()) && 
#line 555 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 4346; /* fma_v8hf_fadd_fcmul */

        case 6:
          if (!(
#line 7196 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && flag_unsafe_math_optimizations
  && ix86_pre_reload_split ()) && 
#line 555 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return -1;
          return 4347; /* fma_fmaddc_v32hf_fma_zero */

        case 7:
          if (!(
#line 7196 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && flag_unsafe_math_optimizations
  && ix86_pre_reload_split ()) && 
#line 555 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 4349; /* fma_fmaddc_v16hf_fma_zero */

        case 8:
          if (!(
#line 7196 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && flag_unsafe_math_optimizations
  && ix86_pre_reload_split ()) && 
#line 555 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 4351; /* fma_fmaddc_v8hf_fma_zero */

        case 9:
          if (!(
#line 7196 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && flag_unsafe_math_optimizations
  && ix86_pre_reload_split ()) && 
#line 555 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return -1;
          return 4348; /* fma_fcmaddc_v32hf_fma_zero */

        case 10:
          if (!(
#line 7196 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && flag_unsafe_math_optimizations
  && ix86_pre_reload_split ()) && 
#line 555 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 4350; /* fma_fcmaddc_v16hf_fma_zero */

        case 11:
          if (!(
#line 7196 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && flag_unsafe_math_optimizations
  && ix86_pre_reload_split ()) && 
#line 555 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 4352; /* fma_fcmaddc_v8hf_fma_zero */

        default:
          return -1;
        }

    case MULT:
      x5 = XEXP (x4, 0);
      switch (GET_CODE (x5))
        {
        case SIGN_EXTEND:
          if (pattern327 (x4) != 0)
            return -1;
          x6 = XEXP (x5, 0);
          x7 = XEXP (x6, 1);
          switch (XVECLEN (x7, 0))
            {
            case 8:
              if (pattern1314 (x4) != 0)
                return -1;
              x8 = XEXP (x3, 1);
              if (GET_CODE (x8) != MULT
                  || GET_MODE (x8) != E_V8SImode)
                return -1;
              x9 = XEXP (x8, 0);
              if (GET_CODE (x9) != SIGN_EXTEND
                  || GET_MODE (x9) != E_V8SImode)
                return -1;
              x10 = XEXP (x9, 0);
              if (GET_CODE (x10) != VEC_SELECT
                  || GET_MODE (x10) != E_V8HImode)
                return -1;
              x11 = XEXP (x10, 1);
              if (GET_CODE (x11) != PARALLEL
                  || pattern1860 (x11, 
8) != 0)
                return -1;
              x12 = XEXP (x8, 1);
              if (pattern1840 (x12, 
E_V8HImode, 
E_V8SImode) != 0)
                return -1;
              x13 = XEXP (x12, 0);
              x14 = XEXP (x13, 1);
              if (pattern1877 (x14, 
8) != 0
                  || !register_operand (operands[0], E_V8SImode)
                  || GET_MODE (x3) != E_V8SImode
                  || GET_MODE (x4) != E_V8SImode
                  || GET_MODE (x5) != E_V8SImode
                  || GET_MODE (x6) != E_V8HImode
                  || !nonimmediate_operand (operands[1], E_V16HImode))
                return -1;
              x15 = XEXP (x4, 1);
              if (GET_MODE (x15) != E_V8SImode)
                return -1;
              x16 = XEXP (x15, 0);
              if (GET_MODE (x16) != E_V8HImode
                  || !nonimmediate_operand (operands[2], E_V16HImode))
                return -1;
              x17 = XEXP (x10, 0);
              if (!rtx_equal_p (x17, operands[1]))
                return -1;
              x18 = XEXP (x13, 0);
              if (!rtx_equal_p (x18, operands[2])
                  || !
#line 16742 "../../gcc/config/i386/sse.md"
(TARGET_AVX2 && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
                return -1;
              return 7591; /* *avx2_pmaddwd */

            case 4:
              x19 = XVECEXP (x7, 0, 0);
              if (GET_CODE (x19) != CONST_INT)
                return -1;
              x20 = XVECEXP (x7, 0, 1);
              if (GET_CODE (x20) != CONST_INT)
                return -1;
              x21 = XVECEXP (x7, 0, 2);
              if (GET_CODE (x21) != CONST_INT)
                return -1;
              x22 = XVECEXP (x7, 0, 3);
              if (GET_CODE (x22) != CONST_INT)
                return -1;
              x15 = XEXP (x4, 1);
              x16 = XEXP (x15, 0);
              x23 = XEXP (x16, 1);
              if (XVECLEN (x23, 0) != 4)
                return -1;
              x24 = XVECEXP (x23, 0, 0);
              if (GET_CODE (x24) != CONST_INT)
                return -1;
              x25 = XVECEXP (x23, 0, 1);
              if (GET_CODE (x25) != CONST_INT)
                return -1;
              x26 = XVECEXP (x23, 0, 2);
              if (GET_CODE (x26) != CONST_INT)
                return -1;
              x27 = XVECEXP (x23, 0, 3);
              if (GET_CODE (x27) != CONST_INT
                  || pattern883 (x3, 
E_V4HImode, 
E_V4SImode) != 0
                  || GET_MODE (x15) != E_V4SImode
                  || GET_MODE (x16) != E_V4HImode)
                return -1;
              switch (XWINT (x19, 0))
                {
                case 0L:
                  if (XWINT (x20, 0) != 2L
                      || XWINT (x21, 0) != 4L
                      || XWINT (x22, 0) != 6L
                      || XWINT (x24, 0) != 0L
                      || XWINT (x25, 0) != 2L
                      || XWINT (x26, 0) != 4L
                      || XWINT (x27, 0) != 6L)
                    return -1;
                  x8 = XEXP (x3, 1);
                  if (pattern1780 (x8, 
E_V4HImode, 
E_V4SImode, 
SIGN_EXTEND) != 0
                      || !vector_operand (operands[1], E_V8HImode)
                      || !vector_operand (operands[2], E_V8HImode))
                    return -1;
                  x9 = XEXP (x8, 0);
                  x10 = XEXP (x9, 0);
                  x17 = XEXP (x10, 0);
                  if (!rtx_equal_p (x17, operands[1]))
                    return -1;
                  x12 = XEXP (x8, 1);
                  x13 = XEXP (x12, 0);
                  x18 = XEXP (x13, 0);
                  if (!rtx_equal_p (x18, operands[2])
                      || !
#line 16797 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
                    return -1;
                  return 7592; /* *sse2_pmaddwd */

                case 1L:
                  if (XWINT (x20, 0) != 3L
                      || XWINT (x21, 0) != 5L
                      || XWINT (x22, 0) != 7L
                      || XWINT (x24, 0) != 1L
                      || XWINT (x25, 0) != 3L
                      || XWINT (x26, 0) != 5L
                      || XWINT (x27, 0) != 7L
                      || !nonimmediate_operand (operands[1], E_V8HImode)
                      || !nonimmediate_operand (operands[2], E_V8HImode))
                    return -1;
                  x8 = XEXP (x3, 1);
                  operands[3] = x8;
                  if (!register_operand (operands[3], E_V4SImode)
                      || !
#line 26165 "../../gcc/config/i386/sse.md"
(TARGET_XOP))
                    return -1;
                  return 8990; /* xop_pmacswd */

                default:
                  return -1;
                }

            case 2:
              if (pattern1315 (x3) != 0)
                return -1;
              x15 = XEXP (x4, 1);
              if (GET_MODE (x15) != E_V2DImode)
                return -1;
              x16 = XEXP (x15, 0);
              if (GET_MODE (x16) != E_V2SImode
                  || !nonimmediate_operand (operands[2], E_V4SImode))
                return -1;
              x8 = XEXP (x3, 1);
              operands[3] = x8;
              switch (pattern1824 (x4))
                {
                case 0:
                  if (!
#line 26124 "../../gcc/config/i386/sse.md"
(TARGET_XOP))
                    return -1;
                  return 8986; /* xop_pmacsdql */

                case 1:
                  if (!
#line 26143 "../../gcc/config/i386/sse.md"
(TARGET_XOP))
                    return -1;
                  return 8988; /* xop_pmacsdqh */

                default:
                  return -1;
                }

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
              return 8982; /* xop_pmacsww */

            case 1:
              if (!
#line 26105 "../../gcc/config/i386/sse.md"
(TARGET_XOP))
                return -1;
              return 8984; /* xop_pmacsdd */

            default:
              return -1;
            }

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
          return 8584; /* avx2_phaddwv16hi3 */

        case 1:
          if (!
#line 22590 "../../gcc/config/i386/sse.md"
(TARGET_SSSE3))
            return -1;
          return 8588; /* ssse3_phaddwv8hi3 */

        case 2:
          if (!
#line 22657 "../../gcc/config/i386/sse.md"
(TARGET_AVX2))
            return -1;
          return 8596; /* avx2_phadddv8si3 */

        case 3:
          if (!
#line 22678 "../../gcc/config/i386/sse.md"
(TARGET_SSSE3))
            return -1;
          return 8598; /* ssse3_phadddv4si3 */

        default:
          return -1;
        }

    case PLUS:
      x5 = XEXP (x4, 0);
      switch (GET_CODE (x5))
        {
        case MULT:
          if (pattern330 (x5) != 0)
            return -1;
          x28 = XEXP (x5, 1);
          if (GET_MODE (x28) != E_V4SImode)
            return -1;
          x29 = XEXP (x28, 0);
          if (GET_CODE (x29) != VEC_SELECT
              || GET_MODE (x29) != E_V4HImode)
            return -1;
          x30 = XEXP (x29, 1);
          if (GET_CODE (x30) != PARALLEL
              || XVECLEN (x30, 0) != 4)
            return -1;
          x31 = XVECEXP (x30, 0, 0);
          if (x31 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
            return -1;
          x32 = XVECEXP (x30, 0, 1);
          if (x32 != const_int_rtx[MAX_SAVED_CONST_INT + 2])
            return -1;
          x33 = XVECEXP (x30, 0, 2);
          if (x33 != const_int_rtx[MAX_SAVED_CONST_INT + 4])
            return -1;
          x34 = XVECEXP (x30, 0, 3);
          if (x34 != const_int_rtx[MAX_SAVED_CONST_INT + 6])
            return -1;
          x15 = XEXP (x4, 1);
          if (GET_CODE (x15) != MULT
              || GET_MODE (x15) != E_V4SImode)
            return -1;
          x16 = XEXP (x15, 0);
          if (GET_CODE (x16) != SIGN_EXTEND
              || GET_MODE (x16) != E_V4SImode)
            return -1;
          x35 = XEXP (x16, 0);
          if (GET_CODE (x35) != VEC_SELECT
              || GET_MODE (x35) != E_V4HImode)
            return -1;
          x36 = XEXP (x35, 1);
          if (GET_CODE (x36) != PARALLEL
              || XVECLEN (x36, 0) != 4)
            return -1;
          x37 = XVECEXP (x36, 0, 0);
          if (x37 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
            return -1;
          x38 = XVECEXP (x36, 0, 1);
          if (x38 != const_int_rtx[MAX_SAVED_CONST_INT + 3])
            return -1;
          x39 = XVECEXP (x36, 0, 2);
          if (x39 != const_int_rtx[MAX_SAVED_CONST_INT + 5])
            return -1;
          x40 = XVECEXP (x36, 0, 3);
          if (x40 != const_int_rtx[MAX_SAVED_CONST_INT + 7])
            return -1;
          x41 = XEXP (x15, 1);
          if (GET_CODE (x41) != SIGN_EXTEND
              || GET_MODE (x41) != E_V4SImode)
            return -1;
          x42 = XEXP (x41, 0);
          if (GET_CODE (x42) != VEC_SELECT
              || GET_MODE (x42) != E_V4HImode)
            return -1;
          x43 = XEXP (x42, 1);
          if (GET_CODE (x43) != PARALLEL
              || XVECLEN (x43, 0) != 4)
            return -1;
          x44 = XVECEXP (x43, 0, 0);
          if (x44 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
            return -1;
          x45 = XVECEXP (x43, 0, 1);
          if (x45 != const_int_rtx[MAX_SAVED_CONST_INT + 3])
            return -1;
          x46 = XVECEXP (x43, 0, 2);
          if (x46 != const_int_rtx[MAX_SAVED_CONST_INT + 5])
            return -1;
          x47 = XVECEXP (x43, 0, 3);
          if (x47 != const_int_rtx[MAX_SAVED_CONST_INT + 7]
              || !register_operand (operands[0], E_V4SImode)
              || GET_MODE (x3) != E_V4SImode
              || GET_MODE (x4) != E_V4SImode
              || pattern1880 (x3) != 0
              || !
#line 26198 "../../gcc/config/i386/sse.md"
(TARGET_XOP))
            return -1;
          return 8992; /* xop_pmadcswd */

        case SIGN_EXTEND:
          switch (pattern333 (x3, 
SIGN_EXTEND))
            {
            case 0:
              if (!
#line 26292 "../../gcc/config/i386/sse.md"
(TARGET_XOP))
                return -1;
              return 9012; /* xop_phaddbd */

            case 1:
              if (!
#line 26388 "../../gcc/config/i386/sse.md"
(TARGET_XOP))
                return -1;
              return 9018; /* xop_phaddwq */

            default:
              return -1;
            }

        case ZERO_EXTEND:
          switch (pattern333 (x3, 
ZERO_EXTEND))
            {
            case 0:
              if (!
#line 26292 "../../gcc/config/i386/sse.md"
(TARGET_XOP))
                return -1;
              return 9013; /* xop_phaddubd */

            case 1:
              if (!
#line 26388 "../../gcc/config/i386/sse.md"
(TARGET_XOP))
                return -1;
              return 9019; /* xop_phadduwq */

            default:
              return -1;
            }

        case PLUS:
          if (GET_MODE (x5) != E_V2DImode)
            return -1;
          x15 = XEXP (x4, 1);
          if (GET_CODE (x15) != PLUS
              || GET_MODE (x15) != E_V2DImode)
            return -1;
          x8 = XEXP (x3, 1);
          if (GET_CODE (x8) != PLUS
              || GET_MODE (x8) != E_V2DImode
              || pattern1031 (x8, 
E_V2DImode, 
PLUS) != 0
              || !register_operand (operands[0], E_V2DImode)
              || GET_MODE (x3) != E_V2DImode
              || GET_MODE (x4) != E_V2DImode
              || pattern1554 (x3, 
E_V2DImode) != 0)
            return -1;
          x6 = XEXP (x5, 0);
          switch (GET_CODE (x6))
            {
            case SIGN_EXTEND:
              if (pattern1813 (x3, 
SIGN_EXTEND) != 0
                  || !
#line 26340 "../../gcc/config/i386/sse.md"
(TARGET_XOP))
                return -1;
              return 9014; /* xop_phaddbq */

            case ZERO_EXTEND:
              if (pattern1813 (x3, 
ZERO_EXTEND) != 0
                  || !
#line 26340 "../../gcc/config/i386/sse.md"
(TARGET_XOP))
                return -1;
              return 9015; /* xop_phaddubq */

            default:
              return -1;
            }

        default:
          return -1;
        }

    case SIGN_EXTEND:
      switch (pattern189 (x3, 
SIGN_EXTEND))
        {
        case 0:
          if (!
#line 26260 "../../gcc/config/i386/sse.md"
(TARGET_XOP))
            return -1;
          return 9010; /* xop_phaddbw */

        case 1:
          if (!
#line 26360 "../../gcc/config/i386/sse.md"
(TARGET_XOP))
            return -1;
          return 9016; /* xop_phaddwd */

        case 2:
          if (!
#line 26406 "../../gcc/config/i386/sse.md"
(TARGET_XOP))
            return -1;
          return 9020; /* xop_phadddq */

        default:
          return -1;
        }

    case ZERO_EXTEND:
      switch (pattern189 (x3, 
ZERO_EXTEND))
        {
        case 0:
          if (!
#line 26260 "../../gcc/config/i386/sse.md"
(TARGET_XOP))
            return -1;
          return 9011; /* xop_phaddubw */

        case 1:
          if (!
#line 26360 "../../gcc/config/i386/sse.md"
(TARGET_XOP))
            return -1;
          return 9017; /* xop_phadduwd */

        case 2:
          if (!
#line 26406 "../../gcc/config/i386/sse.md"
(TARGET_XOP))
            return -1;
          return 9021; /* xop_phaddudq */

        default:
          return -1;
        }

    default:
      return -1;
    }
}

 int
recog_324 (rtx x1 ATTRIBUTE_UNUSED,
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
    case E_V64QImode:
      if (nonimmediate_operand (operands[0], E_V64QImode)
          && nonimmediate_or_sse_const_operand (operands[1], E_V64QImode)
          && (
#line 1508 "../../gcc/config/i386/sse.md"
(TARGET_SSE
   && (register_operand (operands[0], V64QImode)
       || register_operand (operands[1], V64QImode))
   && ix86_hardreg_mov_ok (operands[0], operands[1])) && 
#line 283 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
        return 2389; /* movv64qi_internal */
      if (!register_operand (operands[0], E_V64QImode)
          || !ternlog_operand (operands[1], E_V64QImode)
          || !(
#line 13747 "../../gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 332 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
        return -1;
      return 5492; /* *avx512bw_vpternlogv64qi_0 */

    case E_V32QImode:
      if (nonimmediate_operand (operands[0], E_V32QImode)
          && nonimmediate_or_sse_const_operand (operands[1], E_V32QImode)
          && (
#line 1508 "../../gcc/config/i386/sse.md"
(TARGET_SSE
   && (register_operand (operands[0], V32QImode)
       || register_operand (operands[1], V32QImode))
   && ix86_hardreg_mov_ok (operands[0], operands[1])) && 
#line 283 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
        return 2390; /* movv32qi_internal */
      if (!register_operand (operands[0], E_V32QImode)
          || !ternlog_operand (operands[1], E_V32QImode)
          || !(
#line 13747 "../../gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 332 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
        return -1;
      return 5493; /* *avx512vl_vpternlogv32qi_0 */

    case E_V16QImode:
      if (nonimmediate_operand (operands[0], E_V16QImode)
          && nonimmediate_or_sse_const_operand (operands[1], E_V16QImode)
          && 
#line 1508 "../../gcc/config/i386/sse.md"
(TARGET_SSE
   && (register_operand (operands[0], V16QImode)
       || register_operand (operands[1], V16QImode))
   && ix86_hardreg_mov_ok (operands[0], operands[1])))
        return 2391; /* movv16qi_internal */
      if (!register_operand (operands[0], E_V16QImode)
          || !ternlog_operand (operands[1], E_V16QImode)
          || !
#line 13747 "../../gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()))
        return -1;
      return 5494; /* *avx512vl_vpternlogv16qi_0 */

    case E_V32HImode:
      if (nonimmediate_operand (operands[0], E_V32HImode)
          && nonimmediate_or_sse_const_operand (operands[1], E_V32HImode)
          && (
#line 1508 "../../gcc/config/i386/sse.md"
(TARGET_SSE
   && (register_operand (operands[0], V32HImode)
       || register_operand (operands[1], V32HImode))
   && ix86_hardreg_mov_ok (operands[0], operands[1])) && 
#line 284 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
        return 2392; /* movv32hi_internal */
      if (!register_operand (operands[0], E_V32HImode)
          || !ternlog_operand (operands[1], E_V32HImode)
          || !(
#line 13747 "../../gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 333 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
        return -1;
      return 5495; /* *avx512bw_vpternlogv32hi_0 */

    case E_V16HImode:
      if (nonimmediate_operand (operands[0], E_V16HImode)
          && nonimmediate_or_sse_const_operand (operands[1], E_V16HImode)
          && (
#line 1508 "../../gcc/config/i386/sse.md"
(TARGET_SSE
   && (register_operand (operands[0], V16HImode)
       || register_operand (operands[1], V16HImode))
   && ix86_hardreg_mov_ok (operands[0], operands[1])) && 
#line 284 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
        return 2393; /* movv16hi_internal */
      if (!register_operand (operands[0], E_V16HImode)
          || !ternlog_operand (operands[1], E_V16HImode)
          || !(
#line 13747 "../../gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 333 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
        return -1;
      return 5496; /* *avx512vl_vpternlogv16hi_0 */

    case E_V8HImode:
      if (nonimmediate_operand (operands[0], E_V8HImode)
          && nonimmediate_or_sse_const_operand (operands[1], E_V8HImode)
          && 
#line 1508 "../../gcc/config/i386/sse.md"
(TARGET_SSE
   && (register_operand (operands[0], V8HImode)
       || register_operand (operands[1], V8HImode))
   && ix86_hardreg_mov_ok (operands[0], operands[1])))
        return 2394; /* movv8hi_internal */
      if (!register_operand (operands[0], E_V8HImode)
          || !ternlog_operand (operands[1], E_V8HImode)
          || !
#line 13747 "../../gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()))
        return -1;
      return 5497; /* *avx512vl_vpternlogv8hi_0 */

    case E_V16SImode:
      if (nonimmediate_operand (operands[0], E_V16SImode)
          && nonimmediate_or_sse_const_operand (operands[1], E_V16SImode)
          && (
#line 1508 "../../gcc/config/i386/sse.md"
(TARGET_SSE
   && (register_operand (operands[0], V16SImode)
       || register_operand (operands[1], V16SImode))
   && ix86_hardreg_mov_ok (operands[0], operands[1])) && 
#line 285 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
        return 2395; /* movv16si_internal */
      if (!register_operand (operands[0], E_V16SImode)
          || !ternlog_operand (operands[1], E_V16SImode)
          || !(
#line 13747 "../../gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 334 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
        return -1;
      return 5498; /* *avx512f_vpternlogv16si_0 */

    case E_V8SImode:
      if (nonimmediate_operand (operands[0], E_V8SImode)
          && nonimmediate_or_sse_const_operand (operands[1], E_V8SImode)
          && (
#line 1508 "../../gcc/config/i386/sse.md"
(TARGET_SSE
   && (register_operand (operands[0], V8SImode)
       || register_operand (operands[1], V8SImode))
   && ix86_hardreg_mov_ok (operands[0], operands[1])) && 
#line 285 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
        return 2396; /* movv8si_internal */
      if (!register_operand (operands[0], E_V8SImode)
          || !ternlog_operand (operands[1], E_V8SImode)
          || !(
#line 13747 "../../gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 334 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
        return -1;
      return 5499; /* *avx512vl_vpternlogv8si_0 */

    case E_V4SImode:
      if (nonimmediate_operand (operands[0], E_V4SImode)
          && nonimmediate_or_sse_const_operand (operands[1], E_V4SImode)
          && 
#line 1508 "../../gcc/config/i386/sse.md"
(TARGET_SSE
   && (register_operand (operands[0], V4SImode)
       || register_operand (operands[1], V4SImode))
   && ix86_hardreg_mov_ok (operands[0], operands[1])))
        return 2397; /* movv4si_internal */
      if (!register_operand (operands[0], E_V4SImode)
          || !ternlog_operand (operands[1], E_V4SImode)
          || !
#line 13747 "../../gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()))
        return -1;
      return 5500; /* *avx512vl_vpternlogv4si_0 */

    case E_V8DImode:
      if (nonimmediate_operand (operands[0], E_V8DImode)
          && nonimmediate_or_sse_const_operand (operands[1], E_V8DImode)
          && (
#line 1508 "../../gcc/config/i386/sse.md"
(TARGET_SSE
   && (register_operand (operands[0], V8DImode)
       || register_operand (operands[1], V8DImode))
   && ix86_hardreg_mov_ok (operands[0], operands[1])) && 
#line 286 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
        return 2398; /* movv8di_internal */
      if (!register_operand (operands[0], E_V8DImode)
          || !ternlog_operand (operands[1], E_V8DImode)
          || !(
#line 13747 "../../gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 335 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
        return -1;
      return 5501; /* *avx512f_vpternlogv8di_0 */

    case E_V4DImode:
      if (nonimmediate_operand (operands[0], E_V4DImode)
          && nonimmediate_or_sse_const_operand (operands[1], E_V4DImode)
          && (
#line 1508 "../../gcc/config/i386/sse.md"
(TARGET_SSE
   && (register_operand (operands[0], V4DImode)
       || register_operand (operands[1], V4DImode))
   && ix86_hardreg_mov_ok (operands[0], operands[1])) && 
#line 286 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
        return 2399; /* movv4di_internal */
      if (!register_operand (operands[0], E_V4DImode)
          || !ternlog_operand (operands[1], E_V4DImode)
          || !(
#line 13747 "../../gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 335 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
        return -1;
      return 5502; /* *avx512vl_vpternlogv4di_0 */

    case E_V2DImode:
      if (nonimmediate_operand (operands[0], E_V2DImode)
          && nonimmediate_or_sse_const_operand (operands[1], E_V2DImode)
          && 
#line 1508 "../../gcc/config/i386/sse.md"
(TARGET_SSE
   && (register_operand (operands[0], V2DImode)
       || register_operand (operands[1], V2DImode))
   && ix86_hardreg_mov_ok (operands[0], operands[1])))
        return 2400; /* movv2di_internal */
      if (!register_operand (operands[0], E_V2DImode)
          || !ternlog_operand (operands[1], E_V2DImode)
          || !
#line 13747 "../../gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()))
        return -1;
      return 5503; /* *avx512vl_vpternlogv2di_0 */

    case E_V4TImode:
      if (!nonimmediate_operand (operands[0], E_V4TImode)
          || !nonimmediate_or_sse_const_operand (operands[1], E_V4TImode)
          || !(
#line 1508 "../../gcc/config/i386/sse.md"
(TARGET_SSE
   && (register_operand (operands[0], V4TImode)
       || register_operand (operands[1], V4TImode))
   && ix86_hardreg_mov_ok (operands[0], operands[1])) && 
#line 287 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
        return -1;
      return 2401; /* movv4ti_internal */

    case E_V2TImode:
      if (!nonimmediate_operand (operands[0], E_V2TImode)
          || !nonimmediate_or_sse_const_operand (operands[1], E_V2TImode)
          || !(
#line 1508 "../../gcc/config/i386/sse.md"
(TARGET_SSE
   && (register_operand (operands[0], V2TImode)
       || register_operand (operands[1], V2TImode))
   && ix86_hardreg_mov_ok (operands[0], operands[1])) && 
#line 287 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
        return -1;
      return 2402; /* movv2ti_internal */

    case E_V1TImode:
      if (!nonimmediate_operand (operands[0], E_V1TImode)
          || !nonimmediate_or_sse_const_operand (operands[1], E_V1TImode)
          || !
#line 1508 "../../gcc/config/i386/sse.md"
(TARGET_SSE
   && (register_operand (operands[0], V1TImode)
       || register_operand (operands[1], V1TImode))
   && ix86_hardreg_mov_ok (operands[0], operands[1])))
        return -1;
      return 2403; /* movv1ti_internal */

    case E_V32HFmode:
      if (!nonimmediate_operand (operands[0], E_V32HFmode)
          || !nonimmediate_or_sse_const_operand (operands[1], E_V32HFmode)
          || !(
#line 1508 "../../gcc/config/i386/sse.md"
(TARGET_SSE
   && (register_operand (operands[0], V32HFmode)
       || register_operand (operands[1], V32HFmode))
   && ix86_hardreg_mov_ok (operands[0], operands[1])) && 
#line 288 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
        return -1;
      return 2404; /* movv32hf_internal */

    case E_V16HFmode:
      if (!nonimmediate_operand (operands[0], E_V16HFmode)
          || !nonimmediate_or_sse_const_operand (operands[1], E_V16HFmode)
          || !(
#line 1508 "../../gcc/config/i386/sse.md"
(TARGET_SSE
   && (register_operand (operands[0], V16HFmode)
       || register_operand (operands[1], V16HFmode))
   && ix86_hardreg_mov_ok (operands[0], operands[1])) && 
#line 288 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
        return -1;
      return 2405; /* movv16hf_internal */

    case E_V8HFmode:
      if (!nonimmediate_operand (operands[0], E_V8HFmode)
          || !nonimmediate_or_sse_const_operand (operands[1], E_V8HFmode)
          || !
#line 1508 "../../gcc/config/i386/sse.md"
(TARGET_SSE
   && (register_operand (operands[0], V8HFmode)
       || register_operand (operands[1], V8HFmode))
   && ix86_hardreg_mov_ok (operands[0], operands[1])))
        return -1;
      return 2406; /* movv8hf_internal */

    case E_V32BFmode:
      if (!nonimmediate_operand (operands[0], E_V32BFmode)
          || !nonimmediate_or_sse_const_operand (operands[1], E_V32BFmode)
          || !(
#line 1508 "../../gcc/config/i386/sse.md"
(TARGET_SSE
   && (register_operand (operands[0], V32BFmode)
       || register_operand (operands[1], V32BFmode))
   && ix86_hardreg_mov_ok (operands[0], operands[1])) && 
#line 289 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
        return -1;
      return 2407; /* movv32bf_internal */

    case E_V16BFmode:
      if (!nonimmediate_operand (operands[0], E_V16BFmode)
          || !nonimmediate_or_sse_const_operand (operands[1], E_V16BFmode)
          || !(
#line 1508 "../../gcc/config/i386/sse.md"
(TARGET_SSE
   && (register_operand (operands[0], V16BFmode)
       || register_operand (operands[1], V16BFmode))
   && ix86_hardreg_mov_ok (operands[0], operands[1])) && 
#line 289 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
        return -1;
      return 2408; /* movv16bf_internal */

    case E_V8BFmode:
      if (!nonimmediate_operand (operands[0], E_V8BFmode)
          || !nonimmediate_or_sse_const_operand (operands[1], E_V8BFmode)
          || !
#line 1508 "../../gcc/config/i386/sse.md"
(TARGET_SSE
   && (register_operand (operands[0], V8BFmode)
       || register_operand (operands[1], V8BFmode))
   && ix86_hardreg_mov_ok (operands[0], operands[1])))
        return -1;
      return 2409; /* movv8bf_internal */

    case E_V16SFmode:
      if (!nonimmediate_operand (operands[0], E_V16SFmode)
          || !nonimmediate_or_sse_const_operand (operands[1], E_V16SFmode)
          || !(
#line 1508 "../../gcc/config/i386/sse.md"
(TARGET_SSE
   && (register_operand (operands[0], V16SFmode)
       || register_operand (operands[1], V16SFmode))
   && ix86_hardreg_mov_ok (operands[0], operands[1])) && 
#line 290 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
        return -1;
      return 2410; /* movv16sf_internal */

    case E_V8SFmode:
      if (!nonimmediate_operand (operands[0], E_V8SFmode)
          || !nonimmediate_or_sse_const_operand (operands[1], E_V8SFmode)
          || !(
#line 1508 "../../gcc/config/i386/sse.md"
(TARGET_SSE
   && (register_operand (operands[0], V8SFmode)
       || register_operand (operands[1], V8SFmode))
   && ix86_hardreg_mov_ok (operands[0], operands[1])) && 
#line 290 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
        return -1;
      return 2411; /* movv8sf_internal */

    case E_V4SFmode:
      if (!nonimmediate_operand (operands[0], E_V4SFmode)
          || !nonimmediate_or_sse_const_operand (operands[1], E_V4SFmode)
          || !
#line 1508 "../../gcc/config/i386/sse.md"
(TARGET_SSE
   && (register_operand (operands[0], V4SFmode)
       || register_operand (operands[1], V4SFmode))
   && ix86_hardreg_mov_ok (operands[0], operands[1])))
        return -1;
      return 2412; /* movv4sf_internal */

    case E_V8DFmode:
      if (!nonimmediate_operand (operands[0], E_V8DFmode)
          || !nonimmediate_or_sse_const_operand (operands[1], E_V8DFmode)
          || !(
#line 1508 "../../gcc/config/i386/sse.md"
(TARGET_SSE
   && (register_operand (operands[0], V8DFmode)
       || register_operand (operands[1], V8DFmode))
   && ix86_hardreg_mov_ok (operands[0], operands[1])) && 
#line 291 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
        return -1;
      return 2413; /* movv8df_internal */

    case E_V4DFmode:
      if (!nonimmediate_operand (operands[0], E_V4DFmode)
          || !nonimmediate_or_sse_const_operand (operands[1], E_V4DFmode)
          || !(
#line 1508 "../../gcc/config/i386/sse.md"
(TARGET_SSE
   && (register_operand (operands[0], V4DFmode)
       || register_operand (operands[1], V4DFmode))
   && ix86_hardreg_mov_ok (operands[0], operands[1])) && 
#line 291 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
        return -1;
      return 2414; /* movv4df_internal */

    case E_V2DFmode:
      if (!nonimmediate_operand (operands[0], E_V2DFmode)
          || !nonimmediate_or_sse_const_operand (operands[1], E_V2DFmode)
          || !
#line 1508 "../../gcc/config/i386/sse.md"
(TARGET_SSE
   && (register_operand (operands[0], V2DFmode)
       || register_operand (operands[1], V2DFmode))
   && ix86_hardreg_mov_ok (operands[0], operands[1])))
        return -1;
      return 2415; /* movv2df_internal */

    default:
      return -1;
    }
}

 int
recog_330 (rtx x1 ATTRIBUTE_UNUSED,
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
    case REG:
    case SUBREG:
    case MEM:
      operands[3] = x4;
      x5 = XEXP (x3, 1);
      operands[1] = x5;
      x6 = XEXP (x3, 2);
      operands[2] = x6;
      switch (GET_MODE (operands[0]))
        {
        case E_V32QImode:
          if (pattern812 (x3, 
E_V32QImode) != 0
              || !
#line 26211 "../../gcc/config/i386/sse.md"
(TARGET_XOP))
            return -1;
          return 8994; /* xop_pcmov_v32qi256 */

        case E_V16QImode:
          if (pattern812 (x3, 
E_V16QImode) != 0
              || !
#line 26211 "../../gcc/config/i386/sse.md"
(TARGET_XOP))
            return -1;
          return 8995; /* xop_pcmov_v16qi */

        case E_V16HImode:
          if (pattern812 (x3, 
E_V16HImode) != 0
              || !
#line 26211 "../../gcc/config/i386/sse.md"
(TARGET_XOP))
            return -1;
          return 8996; /* xop_pcmov_v16hi256 */

        case E_V8HImode:
          if (pattern812 (x3, 
E_V8HImode) != 0
              || !
#line 26211 "../../gcc/config/i386/sse.md"
(TARGET_XOP))
            return -1;
          return 8997; /* xop_pcmov_v8hi */

        case E_V8SImode:
          if (pattern812 (x3, 
E_V8SImode) != 0
              || !
#line 26211 "../../gcc/config/i386/sse.md"
(TARGET_XOP))
            return -1;
          return 8998; /* xop_pcmov_v8si256 */

        case E_V4SImode:
          if (pattern812 (x3, 
E_V4SImode) != 0
              || !
#line 26211 "../../gcc/config/i386/sse.md"
(TARGET_XOP))
            return -1;
          return 8999; /* xop_pcmov_v4si */

        case E_V4DImode:
          if (pattern812 (x3, 
E_V4DImode) != 0
              || !
#line 26211 "../../gcc/config/i386/sse.md"
(TARGET_XOP))
            return -1;
          return 9000; /* xop_pcmov_v4di256 */

        case E_V2DImode:
          if (pattern812 (x3, 
E_V2DImode) != 0
              || !
#line 26211 "../../gcc/config/i386/sse.md"
(TARGET_XOP))
            return -1;
          return 9001; /* xop_pcmov_v2di */

        case E_V2TImode:
          if (pattern812 (x3, 
E_V2TImode) != 0
              || !
#line 26211 "../../gcc/config/i386/sse.md"
(TARGET_XOP))
            return -1;
          return 9002; /* xop_pcmov_v2ti256 */

        case E_V1TImode:
          if (pattern812 (x3, 
E_V1TImode) != 0
              || !
#line 26211 "../../gcc/config/i386/sse.md"
(TARGET_XOP))
            return -1;
          return 9003; /* xop_pcmov_v1ti */

        case E_V16HFmode:
          if (pattern812 (x3, 
E_V16HFmode) != 0
              || !
#line 26211 "../../gcc/config/i386/sse.md"
(TARGET_XOP))
            return -1;
          return 9004; /* xop_pcmov_v16hf256 */

        case E_V8HFmode:
          if (pattern812 (x3, 
E_V8HFmode) != 0
              || !
#line 26211 "../../gcc/config/i386/sse.md"
(TARGET_XOP))
            return -1;
          return 9005; /* xop_pcmov_v8hf */

        case E_V8SFmode:
          if (pattern812 (x3, 
E_V8SFmode) != 0
              || !
#line 26211 "../../gcc/config/i386/sse.md"
(TARGET_XOP))
            return -1;
          return 9006; /* xop_pcmov_v8sf256 */

        case E_V4SFmode:
          if (pattern812 (x3, 
E_V4SFmode) != 0
              || !
#line 26211 "../../gcc/config/i386/sse.md"
(TARGET_XOP))
            return -1;
          return 9007; /* xop_pcmov_v4sf */

        case E_V4DFmode:
          if (pattern812 (x3, 
E_V4DFmode) != 0
              || !
#line 26211 "../../gcc/config/i386/sse.md"
(TARGET_XOP))
            return -1;
          return 9008; /* xop_pcmov_v4df256 */

        case E_V2DFmode:
          if (pattern812 (x3, 
E_V2DFmode) != 0
              || !
#line 26211 "../../gcc/config/i386/sse.md"
(TARGET_XOP))
            return -1;
          return 9009; /* xop_pcmov_v2df */

        default:
          return -1;
        }

    case GE:
      x7 = XEXP (x4, 1);
      if (x7 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
        return -1;
      x8 = XEXP (x4, 0);
      operands[2] = x8;
      x5 = XEXP (x3, 1);
      switch (GET_CODE (x5))
        {
        case ROTATE:
          x6 = XEXP (x3, 2);
          if (GET_CODE (x6) != ROTATERT)
            return -1;
          x9 = XEXP (x6, 1);
          if (GET_CODE (x9) != NEG)
            return -1;
          x10 = XEXP (x5, 0);
          operands[1] = x10;
          x11 = XEXP (x5, 1);
          if (!rtx_equal_p (x11, operands[2]))
            return -1;
          switch (pattern1146 (x3))
            {
            case 0:
              if (!
#line 26657 "../../gcc/config/i386/sse.md"
(TARGET_XOP && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
                return -1;
              return 9037; /* xop_vrotlv16qi3 */

            case 1:
              if (!
#line 26657 "../../gcc/config/i386/sse.md"
(TARGET_XOP && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
                return -1;
              return 9038; /* xop_vrotlv8hi3 */

            case 2:
              if (!
#line 26657 "../../gcc/config/i386/sse.md"
(TARGET_XOP && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
                return -1;
              return 9039; /* xop_vrotlv4si3 */

            case 3:
              if (!
#line 26657 "../../gcc/config/i386/sse.md"
(TARGET_XOP && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
                return -1;
              return 9040; /* xop_vrotlv2di3 */

            default:
              return -1;
            }

        case ASHIFT:
          x10 = XEXP (x5, 0);
          operands[1] = x10;
          x11 = XEXP (x5, 1);
          if (!rtx_equal_p (x11, operands[2]))
            return -1;
          x6 = XEXP (x3, 2);
          switch (GET_CODE (x6))
            {
            case ASHIFTRT:
              x9 = XEXP (x6, 1);
              if (GET_CODE (x9) != NEG)
                return -1;
              switch (pattern1146 (x3))
                {
                case 0:
                  if (!
#line 26894 "../../gcc/config/i386/sse.md"
(TARGET_XOP && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
                    return -1;
                  return 9041; /* xop_shav16qi3 */

                case 1:
                  if (!
#line 26894 "../../gcc/config/i386/sse.md"
(TARGET_XOP && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
                    return -1;
                  return 9042; /* xop_shav8hi3 */

                case 2:
                  if (!
#line 26894 "../../gcc/config/i386/sse.md"
(TARGET_XOP && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
                    return -1;
                  return 9043; /* xop_shav4si3 */

                case 3:
                  if (!
#line 26894 "../../gcc/config/i386/sse.md"
(TARGET_XOP && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
                    return -1;
                  return 9044; /* xop_shav2di3 */

                default:
                  return -1;
                }

            case LSHIFTRT:
              x9 = XEXP (x6, 1);
              if (GET_CODE (x9) != NEG)
                return -1;
              switch (pattern1146 (x3))
                {
                case 0:
                  if (!
#line 26913 "../../gcc/config/i386/sse.md"
(TARGET_XOP && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
                    return -1;
                  return 9045; /* xop_shlv16qi3 */

                case 1:
                  if (!
#line 26913 "../../gcc/config/i386/sse.md"
(TARGET_XOP && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
                    return -1;
                  return 9046; /* xop_shlv8hi3 */

                case 2:
                  if (!
#line 26913 "../../gcc/config/i386/sse.md"
(TARGET_XOP && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
                    return -1;
                  return 9047; /* xop_shlv4si3 */

                case 3:
                  if (!
#line 26913 "../../gcc/config/i386/sse.md"
(TARGET_XOP && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
                    return -1;
                  return 9048; /* xop_shlv2di3 */

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
recog_335 (rtx x1 ATTRIBUTE_UNUSED,
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
    case E_V64QImode:
      if (!register_operand (operands[0], E_V64QImode)
          || GET_MODE (x3) != E_V64QImode
          || !vector_operand (operands[1], E_V64QImode)
          || !(
#line 23351 "../../gcc/config/i386/sse.md"
(TARGET_SSSE3) && 
#line 23341 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512)))
        return -1;
      return 8644; /* *absv64qi2 */

    case E_V32QImode:
      if (!register_operand (operands[0], E_V32QImode)
          || GET_MODE (x3) != E_V32QImode
          || !vector_operand (operands[1], E_V32QImode)
          || !(
#line 23351 "../../gcc/config/i386/sse.md"
(TARGET_SSSE3) && 
#line 23341 "../../gcc/config/i386/sse.md"
(TARGET_AVX2)))
        return -1;
      return 8645; /* *absv32qi2 */

    case E_V16QImode:
      if (!register_operand (operands[0], E_V16QImode)
          || GET_MODE (x3) != E_V16QImode
          || !vector_operand (operands[1], E_V16QImode)
          || !
#line 23351 "../../gcc/config/i386/sse.md"
(TARGET_SSSE3))
        return -1;
      return 8646; /* *absv16qi2 */

    case E_V32HImode:
      if (!register_operand (operands[0], E_V32HImode)
          || GET_MODE (x3) != E_V32HImode
          || !vector_operand (operands[1], E_V32HImode)
          || !(
#line 23351 "../../gcc/config/i386/sse.md"
(TARGET_SSSE3) && 
#line 23342 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512)))
        return -1;
      return 8647; /* *absv32hi2 */

    case E_V16HImode:
      if (!register_operand (operands[0], E_V16HImode)
          || GET_MODE (x3) != E_V16HImode
          || !vector_operand (operands[1], E_V16HImode)
          || !(
#line 23351 "../../gcc/config/i386/sse.md"
(TARGET_SSSE3) && 
#line 23342 "../../gcc/config/i386/sse.md"
(TARGET_AVX2)))
        return -1;
      return 8648; /* *absv16hi2 */

    case E_V8HImode:
      if (!register_operand (operands[0], E_V8HImode)
          || GET_MODE (x3) != E_V8HImode
          || !vector_operand (operands[1], E_V8HImode)
          || !
#line 23351 "../../gcc/config/i386/sse.md"
(TARGET_SSSE3))
        return -1;
      return 8649; /* *absv8hi2 */

    case E_V16SImode:
      if (!register_operand (operands[0], E_V16SImode)
          || GET_MODE (x3) != E_V16SImode
          || !vector_operand (operands[1], E_V16SImode)
          || !(
#line 23351 "../../gcc/config/i386/sse.md"
(TARGET_SSSE3) && 
#line 23343 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
        return -1;
      return 8650; /* *absv16si2 */

    case E_V8SImode:
      if (!register_operand (operands[0], E_V8SImode)
          || GET_MODE (x3) != E_V8SImode
          || !vector_operand (operands[1], E_V8SImode)
          || !(
#line 23351 "../../gcc/config/i386/sse.md"
(TARGET_SSSE3) && 
#line 23343 "../../gcc/config/i386/sse.md"
(TARGET_AVX2)))
        return -1;
      return 8651; /* *absv8si2 */

    case E_V4SImode:
      if (!register_operand (operands[0], E_V4SImode)
          || GET_MODE (x3) != E_V4SImode
          || !vector_operand (operands[1], E_V4SImode)
          || !
#line 23351 "../../gcc/config/i386/sse.md"
(TARGET_SSSE3))
        return -1;
      return 8652; /* *absv4si2 */

    case E_V8DImode:
      if (!register_operand (operands[0], E_V8DImode)
          || GET_MODE (x3) != E_V8DImode
          || !vector_operand (operands[1], E_V8DImode)
          || !(
#line 23351 "../../gcc/config/i386/sse.md"
(TARGET_SSSE3) && 
#line 23344 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
        return -1;
      return 8653; /* *absv8di2 */

    case E_V4DImode:
      if (!register_operand (operands[0], E_V4DImode)
          || GET_MODE (x3) != E_V4DImode
          || !vector_operand (operands[1], E_V4DImode)
          || !(
#line 23351 "../../gcc/config/i386/sse.md"
(TARGET_SSSE3) && 
#line 23344 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 8654; /* *absv4di2 */

    case E_V2DImode:
      if (!register_operand (operands[0], E_V2DImode)
          || GET_MODE (x3) != E_V2DImode
          || !vector_operand (operands[1], E_V2DImode)
          || !(
#line 23351 "../../gcc/config/i386/sse.md"
(TARGET_SSSE3) && 
#line 23345 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 8655; /* *absv2di2 */

    default:
      return -1;
    }
}

 int
recog_339 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12, x13, x14, x15;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  operands[0] = x2;
  x3 = XEXP (x1, 1);
  x4 = XEXP (x3, 0);
  switch (GET_CODE (x4))
    {
    case REG:
    case SUBREG:
      switch (pattern49 (x3))
        {
        case 0:
          if (!
#line 14988 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512))
            return -1;
          return 7221; /* *avx512f_truncatev16siv16qi2 */

        case 1:
          if (!(
#line 15250 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL) && 
#line 15224 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW)))
            return -1;
          return 7263; /* *avx512vl_truncatev16hiv16qi2 */

        case 2:
          if (!
#line 14988 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512))
            return -1;
          return 7224; /* *avx512f_truncatev16siv16hi2 */

        case 3:
          if (!
#line 14988 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512))
            return -1;
          return 7227; /* *avx512f_truncatev8div8si2 */

        case 4:
          if (!
#line 14988 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512))
            return -1;
          return 7230; /* *avx512f_truncatev8div8hi2 */

        case 5:
          if (!
#line 15250 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))
            return -1;
          return 7260; /* *avx512vl_truncatev8siv8hi2 */

        case 6:
          if (!
#line 15161 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512))
            return -1;
          return 7250; /* avx512bw_truncatev32hiv32qi2 */

        case 7:
          if (!
#line 15250 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))
            return -1;
          return 7257; /* *avx512vl_truncatev4div4si2 */

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
          x7 = XEXP (x6, 0);
          switch (GET_CODE (x7))
            {
            case SIGN_EXTEND:
              switch (pattern811 (x3, 
SIGN_EXTEND))
                {
                case 0:
                  if (!(
#line 16420 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && !(MEM_P (operands[1]) && MEM_P (operands[2]))
   && 1 && 1) && 
#line 653 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512)))
                    return -1;
                  return 7561; /* *smulv32hi3_highpart */

                case 1:
                  if (!(
#line 16420 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && !(MEM_P (operands[1]) && MEM_P (operands[2]))
   && 1 && 1) && 
#line 653 "../../gcc/config/i386/sse.md"
(TARGET_AVX2)))
                    return -1;
                  return 7565; /* *smulv16hi3_highpart */

                case 2:
                  if (!
#line 16420 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && !(MEM_P (operands[1]) && MEM_P (operands[2]))
   && 1 && 1))
                    return -1;
                  return 7569; /* *smulv8hi3_highpart */

                default:
                  return -1;
                }

            case ZERO_EXTEND:
              switch (pattern811 (x3, 
ZERO_EXTEND))
                {
                case 0:
                  if (!(
#line 16420 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && !(MEM_P (operands[1]) && MEM_P (operands[2]))
   && 1 && 1) && 
#line 653 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512)))
                    return -1;
                  return 7563; /* *umulv32hi3_highpart */

                case 1:
                  if (!(
#line 16420 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && !(MEM_P (operands[1]) && MEM_P (operands[2]))
   && 1 && 1) && 
#line 653 "../../gcc/config/i386/sse.md"
(TARGET_AVX2)))
                    return -1;
                  return 7567; /* *umulv16hi3_highpart */

                case 2:
                  if (!
#line 16420 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && !(MEM_P (operands[1]) && MEM_P (operands[2]))
   && 1 && 1))
                    return -1;
                  return 7571; /* *umulv8hi3_highpart */

                default:
                  return -1;
                }

            default:
              return -1;
            }

        case PLUS:
          if (XWINT (x5, 0) != 1L)
            return -1;
          x7 = XEXP (x6, 0);
          switch (GET_CODE (x7))
            {
            case PLUS:
              x8 = XEXP (x7, 0);
              if (GET_CODE (x8) != ZERO_EXTEND)
                return -1;
              x9 = XEXP (x7, 1);
              if (GET_CODE (x9) != ZERO_EXTEND)
                return -1;
              x10 = XEXP (x8, 0);
              operands[1] = x10;
              x11 = XEXP (x9, 0);
              operands[2] = x11;
              x12 = XEXP (x6, 1);
              operands[3] = x12;
              switch (GET_MODE (operands[0]))
                {
                case E_V64QImode:
                  if (pattern1416 (x3, 
E_V64HImode, 
E_V64QImode) != 0
                      || !(
#line 21888 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && 1 && 1
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 740 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512)))
                    return -1;
                  return 8490; /* *avx512bw_uavgv64qi3 */

                case E_V32QImode:
                  if (pattern1416 (x3, 
E_V32HImode, 
E_V32QImode) != 0
                      || !(
#line 21888 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && 1 && 1
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 740 "../../gcc/config/i386/sse.md"
(TARGET_AVX2)))
                    return -1;
                  return 8492; /* *avx2_uavgv32qi3 */

                case E_V16QImode:
                  if (pattern1416 (x3, 
E_V16HImode, 
E_V16QImode) != 0
                      || !
#line 21888 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && 1 && 1
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
                    return -1;
                  return 8494; /* *sse2_uavgv16qi3 */

                case E_V32HImode:
                  if (pattern1416 (x3, 
E_V32SImode, 
E_V32HImode) != 0
                      || !(
#line 21888 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && 1 && 1
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 741 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512)))
                    return -1;
                  return 8496; /* *avx512bw_uavgv32hi3 */

                case E_V16HImode:
                  if (pattern1416 (x3, 
E_V16SImode, 
E_V16HImode) != 0
                      || !(
#line 21888 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && 1 && 1
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 741 "../../gcc/config/i386/sse.md"
(TARGET_AVX2)))
                    return -1;
                  return 8498; /* *avx2_uavgv16hi3 */

                case E_V8HImode:
                  if (pattern1416 (x3, 
E_V8SImode, 
E_V8HImode) != 0
                      || !
#line 21888 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && 1 && 1
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
                    return -1;
                  return 8500; /* *sse2_uavgv8hi3 */

                default:
                  return -1;
                }

            case LSHIFTRT:
              if (pattern617 (x7) != 0)
                return -1;
              x8 = XEXP (x7, 0);
              x10 = XEXP (x8, 0);
              x13 = XEXP (x10, 0);
              operands[1] = x13;
              if (nonimmediate_operand (operands[1], E_V32HImode))
                {
                  res = recog_316 (x1, insn, pnum_clobbers);
                  if (res >= 0)
                    return res;
                }
              x14 = XEXP (x8, 1);
              x15 = XEXP (x14, 0);
              operands[2] = x15;
              x12 = XEXP (x6, 1);
              operands[3] = x12;
              switch (GET_MODE (operands[0]))
                {
                case E_V32HImode:
                  if (pattern1524 (x3, 
E_V32HImode, 
E_V32SImode) != 0
                      || !(
#line 22992 "../../gcc/config/i386/sse.md"
(TARGET_SSSE3 && 1 && 1
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 653 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512)))
                    return -1;
                  return 8613; /* *avx512bw_pmulhrswv32hi3 */

                case E_V16HImode:
                  if (pattern1524 (x3, 
E_V16HImode, 
E_V16SImode) != 0
                      || !(
#line 22992 "../../gcc/config/i386/sse.md"
(TARGET_SSSE3 && 1 && 1
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 653 "../../gcc/config/i386/sse.md"
(TARGET_AVX2)))
                    return -1;
                  return 8615; /* *avx2_pmulhrswv16hi3 */

                case E_V8HImode:
                  if (pattern1524 (x3, 
E_V8HImode, 
E_V8SImode) != 0
                      || !
#line 22992 "../../gcc/config/i386/sse.md"
(TARGET_SSSE3 && 1 && 1
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
                    return -1;
                  return 8617; /* *ssse3_pmulhrswv8hi3 */

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
recog_348 (rtx x1 ATTRIBUTE_UNUSED,
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
    case E_V8HFmode:
      if (!register_operand (operands[0], E_V8HFmode)
          || GET_MODE (x3) != E_V8HFmode)
        return -1;
      switch (GET_MODE (operands[1]))
        {
        case E_V8DFmode:
          if (!vector_operand (operands[1], E_V8DFmode)
              || !(
#line 8112 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && 1) && 
#line 1004 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return -1;
          return 4733; /* avx512fp16_vcvtpd2ph_v8df */

        case E_V8SFmode:
          if (!vector_operand (operands[1], E_V8SFmode)
              || !(
#line 8112 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && 1) && 
#line 1004 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 4741; /* avx512fp16_vcvtps2ph_v8sf */

        default:
          return -1;
        }

    case E_V16HFmode:
      if (!register_operand (operands[0], E_V16HFmode)
          || GET_MODE (x3) != E_V16HFmode
          || !vector_operand (operands[1], E_V16SFmode)
          || !(
#line 8112 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && 1) && 
#line 1004 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 4737; /* avx512fp16_vcvtps2ph_v16sf */

    case E_V8SFmode:
      if (!register_operand (operands[0], E_V8SFmode)
          || GET_MODE (x3) != E_V8SFmode
          || !vector_operand (operands[1], E_V8DFmode)
          || !
#line 10086 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512))
        return -1;
      return 5171; /* *avx512f_cvtpd2ps512 */

    case E_V4SFmode:
      if (!register_operand (operands[0], E_V4SFmode)
          || GET_MODE (x3) != E_V4SFmode
          || !vector_operand (operands[1], E_V4DFmode)
          || !
#line 10096 "../../gcc/config/i386/sse.md"
(TARGET_AVX && 1
   && (!false || TARGET_AVX10_2_256)))
        return -1;
      return 5175; /* avx_cvtpd2ps256 */

    case E_V8BFmode:
      if (!register_operand (operands[0], E_V8BFmode)
          || GET_MODE (x3) != E_V8BFmode
          || !nonimmediate_operand (operands[1], E_V8SFmode))
        return -1;
      if (
#line 31129 "../../gcc/config/i386/sse.md"
(TARGET_AVXNECONVERT || (TARGET_AVX512BF16 && TARGET_AVX512VL)))
        return 10342; /* vcvtneps2bf16_v8sf */
      if (!(
#line 31167 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BF16) && 
#line 31095 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 10345; /* avx512f_cvtneps2bf16_v8sf */

    case E_V16BFmode:
      if (!register_operand (operands[0], E_V16BFmode)
          || GET_MODE (x3) != E_V16BFmode
          || !nonimmediate_operand (operands[1], E_V16SFmode)
          || !(
#line 31167 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BF16) && 
#line 31095 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 10343; /* avx512f_cvtneps2bf16_v16sf */

    default:
      return -1;
    }
}

 int
recog_353 (rtx x1 ATTRIBUTE_UNUSED,
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
  res = recog_272 (x1, insn, pnum_clobbers);
  if (res >= 0)
    return res;
  operands[1] = x3;
  operands[2] = x4;
  x5 = XEXP (x3, 1);
  operands[3] = x5;
  switch (GET_CODE (operands[1]))
    {
    case NE:
    case EQ:
    case GE:
    case GT:
    case LE:
    case LT:
      switch (GET_MODE (operands[0]))
        {
        case E_V16QImode:
          if (pattern800 (
E_V16QImode) == 0
              && 
#line 27029 "../../gcc/config/i386/sse.md"
(TARGET_XOP))
            return 9058; /* xop_maskcmpv16qi3 */
          break;

        case E_V8HImode:
          if (pattern800 (
E_V8HImode) == 0
              && 
#line 27029 "../../gcc/config/i386/sse.md"
(TARGET_XOP))
            return 9059; /* xop_maskcmpv8hi3 */
          break;

        case E_V4SImode:
          if (pattern800 (
E_V4SImode) == 0
              && 
#line 27029 "../../gcc/config/i386/sse.md"
(TARGET_XOP))
            return 9060; /* xop_maskcmpv4si3 */
          break;

        case E_V2DImode:
          if (pattern800 (
E_V2DImode) == 0
              && 
#line 27029 "../../gcc/config/i386/sse.md"
(TARGET_XOP))
            return 9061; /* xop_maskcmpv2di3 */
          break;

        default:
          break;
        }
      break;

    default:
      break;
    }
  switch (GET_CODE (operands[1]))
    {
    case NE:
    case EQ:
    case GEU:
    case GTU:
    case LEU:
    case LTU:
      switch (GET_MODE (operands[0]))
        {
        case E_V16QImode:
          if (pattern801 (
E_V16QImode) != 0
              || !
#line 27039 "../../gcc/config/i386/sse.md"
(TARGET_XOP))
            return -1;
          return 9062; /* xop_maskcmp_unsv16qi3 */

        case E_V8HImode:
          if (pattern801 (
E_V8HImode) != 0
              || !
#line 27039 "../../gcc/config/i386/sse.md"
(TARGET_XOP))
            return -1;
          return 9063; /* xop_maskcmp_unsv8hi3 */

        case E_V4SImode:
          if (pattern801 (
E_V4SImode) != 0
              || !
#line 27039 "../../gcc/config/i386/sse.md"
(TARGET_XOP))
            return -1;
          return 9064; /* xop_maskcmp_unsv4si3 */

        case E_V2DImode:
          if (pattern801 (
E_V2DImode) != 0
              || !
#line 27039 "../../gcc/config/i386/sse.md"
(TARGET_XOP))
            return -1;
          return 9065; /* xop_maskcmp_unsv2di3 */

        default:
          return -1;
        }

    default:
      return -1;
    }
}

 int
recog_359 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  switch (GET_CODE (x3))
    {
    case SIGN_EXTRACT:
      x4 = XEXP (x3, 1);
      if (XWINT (x4, 0) != 1L)
        return -1;
      x5 = XEXP (x3, 2);
      if (x5 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
        return -1;
      x6 = XEXP (x2, 0);
      operands[0] = x6;
      switch (GET_CODE (operands[1]))
        {
        case REG:
        case SUBREG:
          switch (pattern1492 (x3))
            {
            case 0:
              return 120; /* *extvsi_1_0 */

            case 1:
              if (!
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT))
                return -1;
              return 121; /* *extvdi_1_0 */

            default:
              return -1;
            }

        case LTU:
        case UNLT:
          if (pattern572 (operands[1]) != 0)
            return -1;
          switch (pattern1568 (x3))
            {
            case 0:
              return 1791; /* *x86_movsicc_0_m1_se */

            case 1:
              if (!
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT))
                return -1;
              return 1792; /* *x86_movdicc_0_m1_se */

            default:
              return -1;
            }

        default:
          return -1;
        }

    case ZERO_EXTRACT:
      x4 = XEXP (x3, 1);
      if (XWINT (x4, 0) == 1L)
        {
          x6 = XEXP (x2, 0);
          if (GET_CODE (x6) == SUBREG)
            {
              switch (pattern1317 (x2))
                {
                case 0:
                  if (
#line 19324 "../../gcc/config/i386/i386.md"
(TARGET_USE_BT && ix86_pre_reload_split ()))
                    return 1434; /* *btsi_setcqi */
                  break;

                case 1:
                  if ((
#line 19324 "../../gcc/config/i386/i386.md"
(TARGET_USE_BT && ix86_pre_reload_split ()) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                    return 1435; /* *btdi_setcqi */
                  break;

                default:
                  break;
                }
            }
          x5 = XEXP (x3, 2);
          if (GET_CODE (x5) == SUBREG)
            {
              switch (pattern1319 (x2))
                {
                case 0:
                  if (
#line 19405 "../../gcc/config/i386/i386.md"
(TARGET_USE_BT
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (SImode)-1))
      == GET_MODE_BITSIZE (SImode)-1
   && ix86_pre_reload_split ()))
                    return 1442; /* *btsi_setcsi_mask */
                  break;

                case 1:
                  if ((
#line 19405 "../../gcc/config/i386/i386.md"
(TARGET_USE_BT
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (DImode)-1))
      == GET_MODE_BITSIZE (DImode)-1
   && ix86_pre_reload_split ()) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                    return 1443; /* *btdi_setcdi_mask */
                  break;

                default:
                  break;
                }
            }
        }
      x6 = XEXP (x2, 0);
      operands[0] = x6;
      operands[2] = x4;
      if (!const_0_to_255_operand (operands[2], E_QImode))
        return -1;
      x5 = XEXP (x3, 2);
      operands[3] = x5;
      if (!const_0_to_255_operand (operands[3], E_QImode))
        return -1;
      switch (pattern404 (x3))
        {
        case 0:
          if (!
#line 22011 "../../gcc/config/i386/i386.md"
(TARGET_TBM))
            return -1;
          return 1598; /* tbm_bextri_si */

        case 1:
          if (!(
#line 22011 "../../gcc/config/i386/i386.md"
(TARGET_TBM) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return -1;
          return 1599; /* tbm_bextri_di */

        default:
          return -1;
        }

    default:
      return -1;
    }
}

 int
recog_367 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  if (pattern350 (x1) != 0)
    return -1;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 0);
  operands[0] = x3;
  switch (pattern1042 (x1))
    {
    case 0:
      if (!(
#line 4436 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (HImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V16SImode)
       < GET_MODE_PRECISION (HImode))
   && ix86_pre_reload_split ()) && 
#line 308 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 3370; /* *avx512f_cmpv16si3_zero_extendhi_2 */

    case 1:
      if (!(
#line 4436 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (HImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V16HFmode)
       < GET_MODE_PRECISION (HImode))
   && ix86_pre_reload_split ()) && 
#line 311 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL)))
        return -1;
      return 3391; /* *avx512vl_cmpv16hf3_zero_extendhi_2 */

    case 2:
      if (!(
#line 4436 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (HImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V16SFmode)
       < GET_MODE_PRECISION (HImode))
   && ix86_pre_reload_split ()) && 
#line 313 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 3397; /* *avx512f_cmpv16sf3_zero_extendhi_2 */

    case 3:
      if (!(
#line 4525 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW
  && (GET_MODE_NUNITS (V16QImode)
      < GET_MODE_PRECISION (HImode))
  && ix86_pre_reload_split ()) && 
#line 318 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 3463; /* *avx512vl_cmpv16qi3_zero_extendhi_2 */

    case 4:
      if (!(
#line 4525 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW
  && (GET_MODE_NUNITS (V16HImode)
      < GET_MODE_PRECISION (HImode))
  && ix86_pre_reload_split ()) && 
#line 319 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 3472; /* *avx512vl_cmpv16hi3_zero_extendhi_2 */

    case 5:
      if (!(
#line 4436 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (HImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V8SImode)
       < GET_MODE_PRECISION (HImode))
   && ix86_pre_reload_split ()) && 
#line 308 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 3373; /* *avx512vl_cmpv8si3_zero_extendhi_2 */

    case 6:
      if (!(
#line 4436 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (HImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V4SImode)
       < GET_MODE_PRECISION (HImode))
   && ix86_pre_reload_split ()) && 
#line 308 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 3376; /* *avx512vl_cmpv4si3_zero_extendhi_2 */

    case 7:
      if (!(
#line 4436 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (HImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V8DImode)
       < GET_MODE_PRECISION (HImode))
   && ix86_pre_reload_split ()) && 
#line 309 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 3379; /* *avx512f_cmpv8di3_zero_extendhi_2 */

    case 8:
      if (!(
#line 4436 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (HImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V4DImode)
       < GET_MODE_PRECISION (HImode))
   && ix86_pre_reload_split ()) && 
#line 309 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 3382; /* *avx512vl_cmpv4di3_zero_extendhi_2 */

    case 9:
      if (!(
#line 4436 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (HImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V2DImode)
       < GET_MODE_PRECISION (HImode))
   && ix86_pre_reload_split ()) && 
#line 309 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 3385; /* *avx512vl_cmpv2di3_zero_extendhi_2 */

    case 10:
      if (!(
#line 4436 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (HImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V8HFmode)
       < GET_MODE_PRECISION (HImode))
   && ix86_pre_reload_split ()) && 
#line 312 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL)))
        return -1;
      return 3394; /* *avx512fp16_cmpv8hf3_zero_extendhi_2 */

    case 11:
      if (!(
#line 4436 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (HImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V8SFmode)
       < GET_MODE_PRECISION (HImode))
   && ix86_pre_reload_split ()) && 
#line 313 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 3400; /* *avx512vl_cmpv8sf3_zero_extendhi_2 */

    case 12:
      if (!(
#line 4436 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (HImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V4SFmode)
       < GET_MODE_PRECISION (HImode))
   && ix86_pre_reload_split ()) && 
#line 313 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 3403; /* *avx512vl_cmpv4sf3_zero_extendhi_2 */

    case 13:
      if (!(
#line 4436 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (HImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V8DFmode)
       < GET_MODE_PRECISION (HImode))
   && ix86_pre_reload_split ()) && 
#line 314 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 3406; /* *avx512f_cmpv8df3_zero_extendhi_2 */

    case 14:
      if (!(
#line 4436 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (HImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V4DFmode)
       < GET_MODE_PRECISION (HImode))
   && ix86_pre_reload_split ()) && 
#line 314 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 3409; /* *avx512vl_cmpv4df3_zero_extendhi_2 */

    case 15:
      if (!(
#line 4436 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (HImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V2DFmode)
       < GET_MODE_PRECISION (HImode))
   && ix86_pre_reload_split ()) && 
#line 314 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 3412; /* *avx512vl_cmpv2df3_zero_extendhi_2 */

    case 16:
      if (!(
#line 4525 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW
  && (GET_MODE_NUNITS (V8HImode)
      < GET_MODE_PRECISION (HImode))
  && ix86_pre_reload_split ()) && 
#line 319 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 3475; /* *avx512vl_cmpv8hi3_zero_extendhi_2 */

    case 17:
      if (!(
#line 4436 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (HImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V32HFmode)
       < GET_MODE_PRECISION (HImode))
   && ix86_pre_reload_split ()) && 
#line 310 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_EVEX512)))
        return -1;
      return 3388; /* *avx512bw_cmpv32hf3_zero_extendhi_2 */

    case 18:
      if (!(
#line 4525 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW
  && (GET_MODE_NUNITS (V32QImode)
      < GET_MODE_PRECISION (HImode))
  && ix86_pre_reload_split ()) && 
#line 318 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 3466; /* *avx512vl_cmpv32qi3_zero_extendhi_2 */

    case 19:
      if (!(
#line 4525 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW
  && (GET_MODE_NUNITS (V32HImode)
      < GET_MODE_PRECISION (HImode))
  && ix86_pre_reload_split ()) && 
#line 319 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 3469; /* *avx512bw_cmpv32hi3_zero_extendhi_2 */

    case 20:
      if (!(
#line 4525 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW
  && (GET_MODE_NUNITS (V64QImode)
      < GET_MODE_PRECISION (HImode))
  && ix86_pre_reload_split ()) && 
#line 318 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 3460; /* *avx512bw_cmpv64qi3_zero_extendhi_2 */

    case 21:
      if (!(
#line 4436 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (SImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V16SImode)
       < GET_MODE_PRECISION (SImode))
   && ix86_pre_reload_split ()) && 
#line 308 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 3371; /* *avx512f_cmpv16si3_zero_extendsi_2 */

    case 22:
      if (!(
#line 4436 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (SImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V16HFmode)
       < GET_MODE_PRECISION (SImode))
   && ix86_pre_reload_split ()) && 
#line 311 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL)))
        return -1;
      return 3392; /* *avx512vl_cmpv16hf3_zero_extendsi_2 */

    case 23:
      if (!(
#line 4436 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (SImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V16SFmode)
       < GET_MODE_PRECISION (SImode))
   && ix86_pre_reload_split ()) && 
#line 313 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 3398; /* *avx512f_cmpv16sf3_zero_extendsi_2 */

    case 24:
      if (!(
#line 4525 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW
  && (GET_MODE_NUNITS (V16QImode)
      < GET_MODE_PRECISION (SImode))
  && ix86_pre_reload_split ()) && 
#line 318 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 3464; /* *avx512vl_cmpv16qi3_zero_extendsi_2 */

    case 25:
      if (!(
#line 4525 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW
  && (GET_MODE_NUNITS (V16HImode)
      < GET_MODE_PRECISION (SImode))
  && ix86_pre_reload_split ()) && 
#line 319 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 3473; /* *avx512vl_cmpv16hi3_zero_extendsi_2 */

    case 26:
      if (!(
#line 4436 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (SImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V8SImode)
       < GET_MODE_PRECISION (SImode))
   && ix86_pre_reload_split ()) && 
#line 308 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 3374; /* *avx512vl_cmpv8si3_zero_extendsi_2 */

    case 27:
      if (!(
#line 4436 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (SImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V4SImode)
       < GET_MODE_PRECISION (SImode))
   && ix86_pre_reload_split ()) && 
#line 308 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 3377; /* *avx512vl_cmpv4si3_zero_extendsi_2 */

    case 28:
      if (!(
#line 4436 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (SImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V8DImode)
       < GET_MODE_PRECISION (SImode))
   && ix86_pre_reload_split ()) && 
#line 309 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 3380; /* *avx512f_cmpv8di3_zero_extendsi_2 */

    case 29:
      if (!(
#line 4436 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (SImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V4DImode)
       < GET_MODE_PRECISION (SImode))
   && ix86_pre_reload_split ()) && 
#line 309 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 3383; /* *avx512vl_cmpv4di3_zero_extendsi_2 */

    case 30:
      if (!(
#line 4436 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (SImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V2DImode)
       < GET_MODE_PRECISION (SImode))
   && ix86_pre_reload_split ()) && 
#line 309 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 3386; /* *avx512vl_cmpv2di3_zero_extendsi_2 */

    case 31:
      if (!(
#line 4436 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (SImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V8HFmode)
       < GET_MODE_PRECISION (SImode))
   && ix86_pre_reload_split ()) && 
#line 312 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL)))
        return -1;
      return 3395; /* *avx512fp16_cmpv8hf3_zero_extendsi_2 */

    case 32:
      if (!(
#line 4436 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (SImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V8SFmode)
       < GET_MODE_PRECISION (SImode))
   && ix86_pre_reload_split ()) && 
#line 313 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 3401; /* *avx512vl_cmpv8sf3_zero_extendsi_2 */

    case 33:
      if (!(
#line 4436 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (SImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V4SFmode)
       < GET_MODE_PRECISION (SImode))
   && ix86_pre_reload_split ()) && 
#line 313 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 3404; /* *avx512vl_cmpv4sf3_zero_extendsi_2 */

    case 34:
      if (!(
#line 4436 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (SImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V8DFmode)
       < GET_MODE_PRECISION (SImode))
   && ix86_pre_reload_split ()) && 
#line 314 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 3407; /* *avx512f_cmpv8df3_zero_extendsi_2 */

    case 35:
      if (!(
#line 4436 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (SImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V4DFmode)
       < GET_MODE_PRECISION (SImode))
   && ix86_pre_reload_split ()) && 
#line 314 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 3410; /* *avx512vl_cmpv4df3_zero_extendsi_2 */

    case 36:
      if (!(
#line 4436 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (SImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V2DFmode)
       < GET_MODE_PRECISION (SImode))
   && ix86_pre_reload_split ()) && 
#line 314 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 3413; /* *avx512vl_cmpv2df3_zero_extendsi_2 */

    case 37:
      if (!(
#line 4525 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW
  && (GET_MODE_NUNITS (V8HImode)
      < GET_MODE_PRECISION (SImode))
  && ix86_pre_reload_split ()) && 
#line 319 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 3476; /* *avx512vl_cmpv8hi3_zero_extendsi_2 */

    case 38:
      if (!(
#line 4436 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (SImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V32HFmode)
       < GET_MODE_PRECISION (SImode))
   && ix86_pre_reload_split ()) && 
#line 310 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_EVEX512)))
        return -1;
      return 3389; /* *avx512bw_cmpv32hf3_zero_extendsi_2 */

    case 39:
      if (!(
#line 4525 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW
  && (GET_MODE_NUNITS (V32QImode)
      < GET_MODE_PRECISION (SImode))
  && ix86_pre_reload_split ()) && 
#line 318 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 3467; /* *avx512vl_cmpv32qi3_zero_extendsi_2 */

    case 40:
      if (!(
#line 4525 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW
  && (GET_MODE_NUNITS (V32HImode)
      < GET_MODE_PRECISION (SImode))
  && ix86_pre_reload_split ()) && 
#line 319 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 3470; /* *avx512bw_cmpv32hi3_zero_extendsi_2 */

    case 41:
      if (!(
#line 4525 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW
  && (GET_MODE_NUNITS (V64QImode)
      < GET_MODE_PRECISION (SImode))
  && ix86_pre_reload_split ()) && 
#line 318 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 3461; /* *avx512bw_cmpv64qi3_zero_extendsi_2 */

    case 42:
      if (!(
#line 4436 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (DImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V16SImode)
       < GET_MODE_PRECISION (DImode))
   && ix86_pre_reload_split ()) && 
#line 308 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 3372; /* *avx512f_cmpv16si3_zero_extenddi_2 */

    case 43:
      if (!(
#line 4436 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (DImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V16HFmode)
       < GET_MODE_PRECISION (DImode))
   && ix86_pre_reload_split ()) && 
#line 311 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL)))
        return -1;
      return 3393; /* *avx512vl_cmpv16hf3_zero_extenddi_2 */

    case 44:
      if (!(
#line 4436 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (DImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V16SFmode)
       < GET_MODE_PRECISION (DImode))
   && ix86_pre_reload_split ()) && 
#line 313 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 3399; /* *avx512f_cmpv16sf3_zero_extenddi_2 */

    case 45:
      if (!(
#line 4525 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW
  && (GET_MODE_NUNITS (V16QImode)
      < GET_MODE_PRECISION (DImode))
  && ix86_pre_reload_split ()) && 
#line 318 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 3465; /* *avx512vl_cmpv16qi3_zero_extenddi_2 */

    case 46:
      if (!(
#line 4525 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW
  && (GET_MODE_NUNITS (V16HImode)
      < GET_MODE_PRECISION (DImode))
  && ix86_pre_reload_split ()) && 
#line 319 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 3474; /* *avx512vl_cmpv16hi3_zero_extenddi_2 */

    case 47:
      if (!(
#line 4436 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (DImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V8SImode)
       < GET_MODE_PRECISION (DImode))
   && ix86_pre_reload_split ()) && 
#line 308 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 3375; /* *avx512vl_cmpv8si3_zero_extenddi_2 */

    case 48:
      if (!(
#line 4436 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (DImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V4SImode)
       < GET_MODE_PRECISION (DImode))
   && ix86_pre_reload_split ()) && 
#line 308 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 3378; /* *avx512vl_cmpv4si3_zero_extenddi_2 */

    case 49:
      if (!(
#line 4436 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (DImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V8DImode)
       < GET_MODE_PRECISION (DImode))
   && ix86_pre_reload_split ()) && 
#line 309 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 3381; /* *avx512f_cmpv8di3_zero_extenddi_2 */

    case 50:
      if (!(
#line 4436 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (DImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V4DImode)
       < GET_MODE_PRECISION (DImode))
   && ix86_pre_reload_split ()) && 
#line 309 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 3384; /* *avx512vl_cmpv4di3_zero_extenddi_2 */

    case 51:
      if (!(
#line 4436 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (DImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V2DImode)
       < GET_MODE_PRECISION (DImode))
   && ix86_pre_reload_split ()) && 
#line 309 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 3387; /* *avx512vl_cmpv2di3_zero_extenddi_2 */

    case 52:
      if (!(
#line 4436 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (DImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V8HFmode)
       < GET_MODE_PRECISION (DImode))
   && ix86_pre_reload_split ()) && 
#line 312 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL)))
        return -1;
      return 3396; /* *avx512fp16_cmpv8hf3_zero_extenddi_2 */

    case 53:
      if (!(
#line 4436 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (DImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V8SFmode)
       < GET_MODE_PRECISION (DImode))
   && ix86_pre_reload_split ()) && 
#line 313 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 3402; /* *avx512vl_cmpv8sf3_zero_extenddi_2 */

    case 54:
      if (!(
#line 4436 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (DImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V4SFmode)
       < GET_MODE_PRECISION (DImode))
   && ix86_pre_reload_split ()) && 
#line 313 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 3405; /* *avx512vl_cmpv4sf3_zero_extenddi_2 */

    case 55:
      if (!(
#line 4436 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (DImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V8DFmode)
       < GET_MODE_PRECISION (DImode))
   && ix86_pre_reload_split ()) && 
#line 314 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 3408; /* *avx512f_cmpv8df3_zero_extenddi_2 */

    case 56:
      if (!(
#line 4436 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (DImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V4DFmode)
       < GET_MODE_PRECISION (DImode))
   && ix86_pre_reload_split ()) && 
#line 314 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 3411; /* *avx512vl_cmpv4df3_zero_extenddi_2 */

    case 57:
      if (!(
#line 4436 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (DImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V2DFmode)
       < GET_MODE_PRECISION (DImode))
   && ix86_pre_reload_split ()) && 
#line 314 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 3414; /* *avx512vl_cmpv2df3_zero_extenddi_2 */

    case 58:
      if (!(
#line 4525 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW
  && (GET_MODE_NUNITS (V8HImode)
      < GET_MODE_PRECISION (DImode))
  && ix86_pre_reload_split ()) && 
#line 319 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 3477; /* *avx512vl_cmpv8hi3_zero_extenddi_2 */

    case 59:
      if (!(
#line 4436 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (DImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V32HFmode)
       < GET_MODE_PRECISION (DImode))
   && ix86_pre_reload_split ()) && 
#line 310 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_EVEX512)))
        return -1;
      return 3390; /* *avx512bw_cmpv32hf3_zero_extenddi_2 */

    case 60:
      if (!(
#line 4525 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW
  && (GET_MODE_NUNITS (V32QImode)
      < GET_MODE_PRECISION (DImode))
  && ix86_pre_reload_split ()) && 
#line 318 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 3468; /* *avx512vl_cmpv32qi3_zero_extenddi_2 */

    case 61:
      if (!(
#line 4525 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW
  && (GET_MODE_NUNITS (V32HImode)
      < GET_MODE_PRECISION (DImode))
  && ix86_pre_reload_split ()) && 
#line 319 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 3471; /* *avx512bw_cmpv32hi3_zero_extenddi_2 */

    case 62:
      if (!(
#line 4525 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW
  && (GET_MODE_NUNITS (V64QImode)
      < GET_MODE_PRECISION (DImode))
  && ix86_pre_reload_split ()) && 
#line 318 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 3462; /* *avx512bw_cmpv64qi3_zero_extenddi_2 */

    case 63:
      if (!(
#line 4635 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW
   && ix86_pre_reload_split ()
   && (GET_MODE_NUNITS (V64QImode)
      < GET_MODE_PRECISION (HImode))
   && ix86_pre_reload_split ()) && 
#line 318 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 3544; /* *avx512bw_ucmpv64qi3_zero_extendhi_2 */

    case 64:
      if (!(
#line 4635 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW
   && ix86_pre_reload_split ()
   && (GET_MODE_NUNITS (V16QImode)
      < GET_MODE_PRECISION (HImode))
   && ix86_pre_reload_split ()) && 
#line 318 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 3547; /* *avx512vl_ucmpv16qi3_zero_extendhi_2 */

    case 65:
      if (!(
#line 4635 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW
   && ix86_pre_reload_split ()
   && (GET_MODE_NUNITS (V16HImode)
      < GET_MODE_PRECISION (HImode))
   && ix86_pre_reload_split ()) && 
#line 319 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 3556; /* *avx512vl_ucmpv16hi3_zero_extendhi_2 */

    case 66:
      if (!(
#line 4725 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (HImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V16SImode)
       < GET_MODE_PRECISION (HImode))
   && ix86_pre_reload_split ()) && 
#line 501 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 3616; /* *avx512f_ucmpv16si3_zero_extendhi_2 */

    case 67:
      if (!(
#line 4635 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW
   && ix86_pre_reload_split ()
   && (GET_MODE_NUNITS (V32QImode)
      < GET_MODE_PRECISION (HImode))
   && ix86_pre_reload_split ()) && 
#line 318 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 3550; /* *avx512vl_ucmpv32qi3_zero_extendhi_2 */

    case 68:
      if (!(
#line 4635 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW
   && ix86_pre_reload_split ()
   && (GET_MODE_NUNITS (V32HImode)
      < GET_MODE_PRECISION (HImode))
   && ix86_pre_reload_split ()) && 
#line 319 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 3553; /* *avx512bw_ucmpv32hi3_zero_extendhi_2 */

    case 69:
      if (!(
#line 4635 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW
   && ix86_pre_reload_split ()
   && (GET_MODE_NUNITS (V8HImode)
      < GET_MODE_PRECISION (HImode))
   && ix86_pre_reload_split ()) && 
#line 319 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 3559; /* *avx512vl_ucmpv8hi3_zero_extendhi_2 */

    case 70:
      if (!(
#line 4725 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (HImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V8SImode)
       < GET_MODE_PRECISION (HImode))
   && ix86_pre_reload_split ()) && 
#line 501 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 3617; /* *avx512vl_ucmpv8si3_zero_extendhi_2 */

    case 71:
      if (!(
#line 4725 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (HImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V4SImode)
       < GET_MODE_PRECISION (HImode))
   && ix86_pre_reload_split ()) && 
#line 501 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 3618; /* *avx512vl_ucmpv4si3_zero_extendhi_2 */

    case 72:
      if (!(
#line 4725 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (HImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V8DImode)
       < GET_MODE_PRECISION (HImode))
   && ix86_pre_reload_split ()) && 
#line 502 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 3619; /* *avx512f_ucmpv8di3_zero_extendhi_2 */

    case 73:
      if (!(
#line 4725 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (HImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V4DImode)
       < GET_MODE_PRECISION (HImode))
   && ix86_pre_reload_split ()) && 
#line 502 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 3620; /* *avx512vl_ucmpv4di3_zero_extendhi_2 */

    case 74:
      if (!(
#line 4725 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (HImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V2DImode)
       < GET_MODE_PRECISION (HImode))
   && ix86_pre_reload_split ()) && 
#line 502 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 3621; /* *avx512vl_ucmpv2di3_zero_extendhi_2 */

    case 75:
      if (!(
#line 4635 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW
   && ix86_pre_reload_split ()
   && (GET_MODE_NUNITS (V64QImode)
      < GET_MODE_PRECISION (SImode))
   && ix86_pre_reload_split ()) && 
#line 318 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 3545; /* *avx512bw_ucmpv64qi3_zero_extendsi_2 */

    case 76:
      if (!(
#line 4635 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW
   && ix86_pre_reload_split ()
   && (GET_MODE_NUNITS (V16QImode)
      < GET_MODE_PRECISION (SImode))
   && ix86_pre_reload_split ()) && 
#line 318 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 3548; /* *avx512vl_ucmpv16qi3_zero_extendsi_2 */

    case 77:
      if (!(
#line 4635 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW
   && ix86_pre_reload_split ()
   && (GET_MODE_NUNITS (V16HImode)
      < GET_MODE_PRECISION (SImode))
   && ix86_pre_reload_split ()) && 
#line 319 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 3557; /* *avx512vl_ucmpv16hi3_zero_extendsi_2 */

    case 78:
      if (!(
#line 4725 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (SImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V16SImode)
       < GET_MODE_PRECISION (SImode))
   && ix86_pre_reload_split ()) && 
#line 501 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 3622; /* *avx512f_ucmpv16si3_zero_extendsi_2 */

    case 79:
      if (!(
#line 4635 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW
   && ix86_pre_reload_split ()
   && (GET_MODE_NUNITS (V32QImode)
      < GET_MODE_PRECISION (SImode))
   && ix86_pre_reload_split ()) && 
#line 318 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 3551; /* *avx512vl_ucmpv32qi3_zero_extendsi_2 */

    case 80:
      if (!(
#line 4635 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW
   && ix86_pre_reload_split ()
   && (GET_MODE_NUNITS (V32HImode)
      < GET_MODE_PRECISION (SImode))
   && ix86_pre_reload_split ()) && 
#line 319 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 3554; /* *avx512bw_ucmpv32hi3_zero_extendsi_2 */

    case 81:
      if (!(
#line 4635 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW
   && ix86_pre_reload_split ()
   && (GET_MODE_NUNITS (V8HImode)
      < GET_MODE_PRECISION (SImode))
   && ix86_pre_reload_split ()) && 
#line 319 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 3560; /* *avx512vl_ucmpv8hi3_zero_extendsi_2 */

    case 82:
      if (!(
#line 4725 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (SImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V8SImode)
       < GET_MODE_PRECISION (SImode))
   && ix86_pre_reload_split ()) && 
#line 501 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 3623; /* *avx512vl_ucmpv8si3_zero_extendsi_2 */

    case 83:
      if (!(
#line 4725 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (SImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V4SImode)
       < GET_MODE_PRECISION (SImode))
   && ix86_pre_reload_split ()) && 
#line 501 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 3624; /* *avx512vl_ucmpv4si3_zero_extendsi_2 */

    case 84:
      if (!(
#line 4725 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (SImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V8DImode)
       < GET_MODE_PRECISION (SImode))
   && ix86_pre_reload_split ()) && 
#line 502 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 3625; /* *avx512f_ucmpv8di3_zero_extendsi_2 */

    case 85:
      if (!(
#line 4725 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (SImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V4DImode)
       < GET_MODE_PRECISION (SImode))
   && ix86_pre_reload_split ()) && 
#line 502 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 3626; /* *avx512vl_ucmpv4di3_zero_extendsi_2 */

    case 86:
      if (!(
#line 4725 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (SImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V2DImode)
       < GET_MODE_PRECISION (SImode))
   && ix86_pre_reload_split ()) && 
#line 502 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 3627; /* *avx512vl_ucmpv2di3_zero_extendsi_2 */

    case 87:
      if (!(
#line 4635 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW
   && ix86_pre_reload_split ()
   && (GET_MODE_NUNITS (V64QImode)
      < GET_MODE_PRECISION (DImode))
   && ix86_pre_reload_split ()) && 
#line 318 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 3546; /* *avx512bw_ucmpv64qi3_zero_extenddi_2 */

    case 88:
      if (!(
#line 4635 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW
   && ix86_pre_reload_split ()
   && (GET_MODE_NUNITS (V16QImode)
      < GET_MODE_PRECISION (DImode))
   && ix86_pre_reload_split ()) && 
#line 318 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 3549; /* *avx512vl_ucmpv16qi3_zero_extenddi_2 */

    case 89:
      if (!(
#line 4635 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW
   && ix86_pre_reload_split ()
   && (GET_MODE_NUNITS (V16HImode)
      < GET_MODE_PRECISION (DImode))
   && ix86_pre_reload_split ()) && 
#line 319 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 3558; /* *avx512vl_ucmpv16hi3_zero_extenddi_2 */

    case 90:
      if (!(
#line 4725 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (DImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V16SImode)
       < GET_MODE_PRECISION (DImode))
   && ix86_pre_reload_split ()) && 
#line 501 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 3628; /* *avx512f_ucmpv16si3_zero_extenddi_2 */

    case 91:
      if (!(
#line 4635 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW
   && ix86_pre_reload_split ()
   && (GET_MODE_NUNITS (V32QImode)
      < GET_MODE_PRECISION (DImode))
   && ix86_pre_reload_split ()) && 
#line 318 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 3552; /* *avx512vl_ucmpv32qi3_zero_extenddi_2 */

    case 92:
      if (!(
#line 4635 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW
   && ix86_pre_reload_split ()
   && (GET_MODE_NUNITS (V32HImode)
      < GET_MODE_PRECISION (DImode))
   && ix86_pre_reload_split ()) && 
#line 319 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 3555; /* *avx512bw_ucmpv32hi3_zero_extenddi_2 */

    case 93:
      if (!(
#line 4635 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW
   && ix86_pre_reload_split ()
   && (GET_MODE_NUNITS (V8HImode)
      < GET_MODE_PRECISION (DImode))
   && ix86_pre_reload_split ()) && 
#line 319 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 3561; /* *avx512vl_ucmpv8hi3_zero_extenddi_2 */

    case 94:
      if (!(
#line 4725 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (DImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V8SImode)
       < GET_MODE_PRECISION (DImode))
   && ix86_pre_reload_split ()) && 
#line 501 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 3629; /* *avx512vl_ucmpv8si3_zero_extenddi_2 */

    case 95:
      if (!(
#line 4725 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (DImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V4SImode)
       < GET_MODE_PRECISION (DImode))
   && ix86_pre_reload_split ()) && 
#line 501 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 3630; /* *avx512vl_ucmpv4si3_zero_extenddi_2 */

    case 96:
      if (!(
#line 4725 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (DImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V8DImode)
       < GET_MODE_PRECISION (DImode))
   && ix86_pre_reload_split ()) && 
#line 502 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 3631; /* *avx512f_ucmpv8di3_zero_extenddi_2 */

    case 97:
      if (!(
#line 4725 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (DImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V4DImode)
       < GET_MODE_PRECISION (DImode))
   && ix86_pre_reload_split ()) && 
#line 502 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 3632; /* *avx512vl_ucmpv4di3_zero_extenddi_2 */

    case 98:
      if (!(
#line 4725 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (DImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V2DImode)
       < GET_MODE_PRECISION (DImode))
   && ix86_pre_reload_split ()) && 
#line 502 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 3633; /* *avx512vl_ucmpv2di3_zero_extenddi_2 */

    default:
      return -1;
    }
}

 int
recog_394 (rtx x1 ATTRIBUTE_UNUSED,
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
  x4 = XEXP (x2, 1);
  x5 = XEXP (x4, 0);
  switch (GET_CODE (x5))
    {
    case REG:
    case SUBREG:
    case MEM:
      x6 = XVECEXP (x1, 0, 1);
      switch (GET_CODE (x6))
        {
        case CLOBBER:
          x7 = XEXP (x6, 0);
          if (GET_CODE (x7) != REG
              || REGNO (x7) != 17
              || GET_MODE (x7) != E_CCmode)
            return -1;
          operands[1] = x5;
          x8 = XEXP (x4, 1);
          operands[2] = x8;
          switch (GET_MODE (operands[0]))
            {
            case E_HImode:
              if (!register_operand (operands[0], E_HImode)
                  || GET_MODE (x4) != E_HImode
                  || !nonimmediate_operand (operands[1], E_HImode)
                  || !general_operand (operands[2], E_HImode)
                  || !(
#line 10604 "../../gcc/config/i386/i386.md"
(!(MEM_P (operands[1]) && MEM_P (operands[2]))
   && true) && 
#line 1191 "../../gcc/config/i386/i386.md"
(TARGET_HIMODE_MATH)))
                return -1;
              return 591; /* *mulhi3_1 */

            case E_SImode:
              if (pattern1326 (x4, 
E_SImode) != 0
                  || !
#line 10604 "../../gcc/config/i386/i386.md"
(!(MEM_P (operands[1]) && MEM_P (operands[2]))
   && true))
                return -1;
              return 593; /* *mulsi3_1 */

            case E_DImode:
              if (pattern1326 (x4, 
E_DImode) != 0
                  || !(
#line 10604 "../../gcc/config/i386/i386.md"
(!(MEM_P (operands[1]) && MEM_P (operands[2]))
   && true) && 
#line 1192 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return -1;
              return 595; /* *muldi3_1 */

            case E_QImode:
              if (pattern209 (x4, 
E_QImode) != 0
                  || !
#line 10691 "../../gcc/config/i386/i386.md"
(TARGET_QIMODE_MATH
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))
   && true))
                return -1;
              return 603; /* *mulqi3_1 */

            default:
              return -1;
            }

        case SET:
          x9 = XEXP (x6, 1);
          if (GET_CODE (x9) != UMUL_HIGHPART)
            return -1;
          switch (pattern589 (x1))
            {
            case 0:
              if (!(
#line 10955 "../../gcc/config/i386/i386.md"
(TARGET_BMI2) && 
#line 1235 "../../gcc/config/i386/i386.md"
(!TARGET_64BIT)))
                return -1;
              return 615; /* *bmi2_umulsidi3_1 */

            case 1:
              if (!(
#line 10955 "../../gcc/config/i386/i386.md"
(TARGET_BMI2) && 
#line 1236 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return -1;
              return 616; /* *bmi2_umulditi3_1 */

            default:
              return -1;
            }

        case UNSPEC:
          if (XVECLEN (x6, 0) != 1
              || XINT (x6, 1) != 110)
            return -1;
          x10 = XVECEXP (x6, 0, 0);
          if (x10 != const_int_rtx[MAX_SAVED_CONST_INT + 0]
              || !register_operand (operands[0], E_V2SFmode)
              || GET_MODE (x4) != E_V2SFmode)
            return -1;
          operands[1] = x5;
          if (!nonimmediate_operand (operands[1], E_V2SFmode))
            return -1;
          x8 = XEXP (x4, 1);
          operands[2] = x8;
          if (!nonimmediate_operand (operands[2], E_V2SFmode)
              || !
#line 795 "../../gcc/config/i386/mmx.md"
(TARGET_3DNOW && ix86_binary_operator_ok (MULT, V2SFmode, operands)))
            return -1;
          return 2048; /* *mmx_mulv2sf3 */

        default:
          return -1;
        }

    case ZERO_EXTEND:
      switch (pattern563 (x1, 
ZERO_EXTEND))
        {
        case 0:
          if (!(
#line 10994 "../../gcc/config/i386/i386.md"
(!(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 1235 "../../gcc/config/i386/i386.md"
(!TARGET_64BIT)))
            return -1;
          return 617; /* *umulsidi3_1 */

        case 1:
          if (!(
#line 10994 "../../gcc/config/i386/i386.md"
(!(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 1236 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return -1;
          return 618; /* *umulditi3_1 */

        case 2:
          if (!
#line 11060 "../../gcc/config/i386/i386.md"
(TARGET_QIMODE_MATH
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))
   && true))
            return -1;
          return 626; /* *umulqihi3_1 */

        default:
          return -1;
        }

    case SIGN_EXTEND:
      switch (pattern563 (x1, 
SIGN_EXTEND))
        {
        case 0:
          if (!(
#line 11040 "../../gcc/config/i386/i386.md"
(!(MEM_P (operands[1]) && MEM_P (operands[2]))
   && true) && 
#line 1235 "../../gcc/config/i386/i386.md"
(!TARGET_64BIT)))
            return -1;
          return 620; /* *mulsidi3_1 */

        case 1:
          if (!(
#line 1199 "../../gcc/config/i386/i386.md"
(TARGET_64BIT) && (
#line 11040 "../../gcc/config/i386/i386.md"
(!(MEM_P (operands[1]) && MEM_P (operands[2]))
   && true) && 
#line 1236 "../../gcc/config/i386/i386.md"
(TARGET_64BIT))))
            return -1;
          return 622; /* *mulditi3_1 */

        case 2:
          if (!
#line 11060 "../../gcc/config/i386/i386.md"
(TARGET_QIMODE_MATH
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))
   && true))
            return -1;
          return 624; /* *mulqihi3_1 */

        default:
          return -1;
        }

    default:
      return -1;
    }
}

 int
recog_400 (rtx x1 ATTRIBUTE_UNUSED,
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
    case REG:
    case SUBREG:
    case MEM:
      operands[1] = x4;
      switch (pattern570 (x1))
        {
        case 0:
          if (
#line 12741 "../../gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)))
            return 727; /* *xorqi_1_slp */
          break;

        case 1:
          if (
#line 12741 "../../gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)))
            return 730; /* *xorhi_1_slp */
          break;

        case 2:
          if (x86_64_hilo_general_operand (operands[2], E_DImode)
              && (
#line 13527 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (XOR, DImode, operands, TARGET_APX_NDD)) && 
#line 1235 "../../gcc/config/i386/i386.md"
(!TARGET_64BIT)))
            return 820; /* *xordi3_doubleword */
          if (x86_64_general_operand (operands[2], E_DImode)
              && (
#line 13585 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (XOR, DImode, operands, TARGET_APX_NDD)
   && true) && 
#line 1164 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return 834; /* *xordi_1 */
          if (const_int_operand (operands[2], E_DImode)
              && 
#line 13655 "../../gcc/config/i386/i386.md"
(TARGET_64BIT && TARGET_USE_BT
   && ix86_binary_operator_ok (XOR, DImode, operands)
   && IN_RANGE (exact_log2 (INTVAL (operands[2])), 31, 63)))
            return 839; /* *xordi_1_btc */
          break;

        case 3:
          if ((
#line 13527 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (XOR, TImode, operands, TARGET_APX_NDD)) && 
#line 1236 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return 822; /* *xorti3_doubleword */
          break;

        case 4:
          if (
#line 13585 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (XOR, HImode, operands, TARGET_APX_NDD)
   && true))
            return 826; /* *xorhi_1 */
          break;

        case 5:
          if (
#line 13585 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (XOR, SImode, operands, TARGET_APX_NDD)
   && true))
            return 830; /* *xorsi_1 */
          break;

        case 6:
          if (
#line 4713 "../../gcc/config/i386/mmx.md"
(ix86_binary_operator_ok (XOR, V4QImode, operands)))
            return 2279; /* *xorv4qi3 */
          break;

        case 7:
          if (
#line 4713 "../../gcc/config/i386/mmx.md"
(ix86_binary_operator_ok (XOR, V2QImode, operands)))
            return 2282; /* *xorv2qi3 */
          break;

        case 8:
          if (
#line 4713 "../../gcc/config/i386/mmx.md"
(ix86_binary_operator_ok (XOR, V2HImode, operands)))
            return 2285; /* *xorv2hi3 */
          break;

        case 9:
          if (
#line 2094 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F))
            return 2568; /* kxorqi */
          break;

        case 10:
          if (
#line 2094 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F))
            return 2571; /* kxorhi */
          break;

        case 11:
          if ((
#line 2094 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 2075 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW)))
            return 2574; /* kxorsi */
          break;

        case 12:
          if ((
#line 2094 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 2075 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW)))
            return 2577; /* kxordi */
          break;

        default:
          break;
        }
      x5 = XVECEXP (x1, 0, 1);
      if (GET_CODE (x5) != CLOBBER
          || pattern571 (x1) != 0)
        return -1;
      if (GET_CODE (x4) == SUBREG
          && pattern559 (x4) == 0)
        {
          x6 = XEXP (x4, 0);
          x7 = XEXP (x6, 0);
          operands[2] = x7;
          switch (pattern1621 (x2))
            {
            case 0:
              if (
#line 12768 "../../gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)))
                return 733; /* *xorqi_exthi_1_slp */
              break;

            case 1:
              if (
#line 12768 "../../gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)))
                return 736; /* *xorqi_extsi_1_slp */
              break;

            case 2:
              if ((
#line 12768 "../../gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)) && 
#line 1164 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return 739; /* *xorqi_extdi_1_slp */
              break;

            case 3:
              return 757; /* *xorqi_exthi_0 */

            case 4:
              return 760; /* *xorqi_extsi_0 */

            case 5:
              if (
#line 1164 "../../gcc/config/i386/i386.md"
(TARGET_64BIT))
                return 763; /* *xorqi_extdi_0 */
              break;

            default:
              break;
            }
          x8 = XEXP (x3, 1);
          if (GET_CODE (x8) == SUBREG)
            {
              switch (pattern1622 (x2))
                {
                case 0:
                  if (
#line 12801 "../../gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)))
                    return 742; /* *xorqi_exthi_2_slp */
                  break;

                case 1:
                  if (
#line 12801 "../../gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)))
                    return 745; /* *xorqi_extsi_2_slp */
                  break;

                case 2:
                  if ((
#line 12801 "../../gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)) && 
#line 1164 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                    return 748; /* *xorqi_extdi_2_slp */
                  break;

                case 3:
                  return 766; /* *xorqi_ext2hi_0 */

                case 4:
                  return 769; /* *xorqi_ext2si_0 */

                case 5:
                  if (
#line 1164 "../../gcc/config/i386/i386.md"
(TARGET_64BIT))
                    return 772; /* *xorqi_ext2di_0 */
                  break;

                default:
                  break;
                }
            }
        }
      x9 = XEXP (x2, 0);
      operands[0] = x9;
      if (!nonimmediate_operand (operands[0], E_QImode))
        return -1;
      operands[1] = x4;
      if (!nonimmediate_operand (operands[1], E_QImode))
        return -1;
      x8 = XEXP (x3, 1);
      operands[2] = x8;
      if (!general_operand (operands[2], E_QImode)
          || !
#line 13775 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (XOR, QImode, operands, TARGET_APX_NDD)
   && true))
        return -1;
      return 870; /* *xorqi_1 */

    case AND:
      x6 = XEXP (x4, 0);
      if (GET_CODE (x6) != XOR)
        return -1;
      x5 = XVECEXP (x1, 0, 1);
      if (pattern351 (x5) != 0)
        return -1;
      switch (pattern1050 (x2))
        {
        case 0:
          if (!
#line 13684 "../../gcc/config/i386/i386.md"
(TARGET_BMI && ix86_pre_reload_split ()))
            return -1;
          return 840; /* *xor2andn */

        case 1:
          if (!
#line 13684 "../../gcc/config/i386/i386.md"
(TARGET_BMI && ix86_pre_reload_split ()))
            return -1;
          return 841; /* *xor2andn */

        case 2:
          if (!(
#line 13684 "../../gcc/config/i386/i386.md"
(TARGET_BMI && ix86_pre_reload_split ()) && 
#line 1164 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return -1;
          return 842; /* *xor2andn */

        default:
          return -1;
        }

    case ZERO_EXTEND:
      if (pattern368 (x1) != 0
          || !
#line 13762 "../../gcc/config/i386/i386.md"
(TARGET_64BIT
   && ix86_binary_operator_ok (XOR, SImode, operands, TARGET_APX_NDD)))
        return -1;
      return 866; /* *xorsi_1_zext_imm */

    case ASHIFT:
      switch (pattern371 (x1, 
1))
        {
        case 0:
          x10 = XEXP (x4, 1);
          operands[2] = x10;
          if (register_operand (operands[2], E_QImode))
            {
              switch (pattern946 (x3))
                {
                case 0:
                  if (
#line 18805 "../../gcc/config/i386/i386.md"
(TARGET_USE_BT))
                    return 1392; /* *btcsi */
                  break;

                case 1:
                  if ((
#line 18805 "../../gcc/config/i386/i386.md"
(TARGET_USE_BT) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                    return 1394; /* *btcdi */
                  break;

                default:
                  break;
                }
            }
          if (GET_CODE (x10) != SUBREG)
            return -1;
          switch (pattern1329 (x3))
            {
            case 0:
              if (!
#line 18824 "../../gcc/config/i386/i386.md"
(TARGET_USE_BT
   && (INTVAL (operands[2]) & (GET_MODE_BITSIZE (SImode)-1))
      == GET_MODE_BITSIZE (SImode)-1
   && ix86_pre_reload_split ()))
                return -1;
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
          return 1402; /* *btcdi_mask_1 */

        default:
          return -1;
        }

    case SIGN_EXTEND:
      if (GET_MODE (x4) != E_DImode)
        return -1;
      x6 = XEXP (x4, 0);
      if (GET_CODE (x6) != MINUS
          || GET_MODE (x6) != E_SImode)
        return -1;
      x7 = XEXP (x6, 0);
      if (x7 != const_int_rtx[MAX_SAVED_CONST_INT + 63])
        return -1;
      x11 = XEXP (x6, 1);
      if (GET_CODE (x11) != SUBREG
          || maybe_ne (SUBREG_BYTE (x11), 0)
          || GET_MODE (x11) != E_SImode)
        return -1;
      x12 = XEXP (x11, 0);
      if (GET_CODE (x12) != CLZ
          || GET_MODE (x12) != E_DImode)
        return -1;
      x8 = XEXP (x3, 1);
      if (x8 != const_int_rtx[MAX_SAVED_CONST_INT + 63])
        return -1;
      x5 = XVECEXP (x1, 0, 1);
      if (pattern227 (x5, 
E_CCmode, 
17) != 0)
        return -1;
      x9 = XEXP (x2, 0);
      operands[0] = x9;
      if (!register_operand (operands[0], E_DImode)
          || GET_MODE (x3) != E_DImode)
        return -1;
      x13 = XEXP (x12, 0);
      operands[1] = x13;
      if (!nonimmediate_operand (operands[1], E_DImode)
          || !
#line 21312 "../../gcc/config/i386/i386.md"
(!TARGET_LZCNT && TARGET_64BIT && ix86_pre_reload_split ()))
        return -1;
      return 1530; /* *bsr_rex64_2 */

    case PLUS:
      x10 = XEXP (x4, 1);
      if (GET_CODE (x10) != CONST_INT
          || pattern345 (x1) != 0)
        return -1;
      x8 = XEXP (x3, 1);
      if (!rtx_equal_p (x8, operands[1]))
        return -1;
      switch (XWINT (x10, 0))
        {
        case -1L:
          switch (GET_MODE (operands[0]))
            {
            case E_SImode:
              if (pattern200 (x3, 
E_SImode) != 0
                  || !
#line 21807 "../../gcc/config/i386/i386.md"
(TARGET_BMI))
                return -1;
              return 1576; /* *bmi_blsmsk_si */

            case E_DImode:
              if (pattern200 (x3, 
E_DImode) != 0
                  || !(
#line 21807 "../../gcc/config/i386/i386.md"
(TARGET_BMI) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return -1;
              return 1577; /* *bmi_blsmsk_di */

            default:
              return -1;
            }

        case 1L:
          switch (GET_MODE (operands[0]))
            {
            case E_SImode:
              if (pattern200 (x3, 
E_SImode) != 0
                  || !
#line 22068 "../../gcc/config/i386/i386.md"
(TARGET_TBM))
                return -1;
              return 1606; /* *tbm_blcmsk_si */

            case E_DImode:
              if (pattern200 (x3, 
E_DImode) != 0
                  || !(
#line 22068 "../../gcc/config/i386/i386.md"
(TARGET_TBM) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return -1;
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
recog_407 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  int res ATTRIBUTE_UNUSED;
  switch (pattern201 (x1))
    {
    case 0:
      x2 = XVECEXP (x1, 0, 0);
      x3 = XEXP (x2, 0);
      operands[0] = x3;
      x4 = XEXP (x2, 1);
      x5 = XEXP (x4, 1);
      switch (GET_CODE (x5))
        {
        case SUBREG:
          switch (pattern1333 (x4))
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
                return 1123; /* *ashrdi3_doubleword_mask */
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
                return 1125; /* *ashrti3_doubleword_mask */
              break;

            default:
              break;
            }
          break;

        case CONST_INT:
          operands[2] = x5;
          if (const_int_operand (operands[2], E_QImode)
              && nonimmediate_operand (operands[0], E_SImode)
              && GET_MODE (x4) == E_SImode
              && nonimmediate_operand (operands[1], E_SImode)
              && 
#line 17244 "../../gcc/config/i386/i386.md"
(INTVAL (operands[2]) == GET_MODE_BITSIZE (SImode)-1
   && (TARGET_USE_CLTD || optimize_function_for_size_p (cfun))
   && ix86_binary_operator_ok (ASHIFTRT, SImode, operands, TARGET_APX_NDD)
   && true))
            return 1167; /* ashrsi3_cvt */
          break;

        default:
          break;
        }
      operands[2] = x5;
      res = recog_406 (x1, insn, pnum_clobbers);
      if (res >= 0)
        return res;
      if (GET_CODE (x5) != SUBREG
          || maybe_ne (SUBREG_BYTE (x5), 0)
          || GET_MODE (x5) != E_QImode)
        return -1;
      switch (pattern1437 (x2))
        {
        case 0:
          if (!
#line 17840 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ASHIFTRT, SImode, operands)
   && (INTVAL (operands[3]) & (4 * BITS_PER_UNIT - 1))
      == 4 * BITS_PER_UNIT - 1
   && ix86_pre_reload_split ()))
            return -1;
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
          return 1249; /* *ashrdi3_mask */

        case 2:
          if (!
#line 17888 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ASHIFTRT, SImode, operands)
   && (INTVAL (operands[3]) & (4 * BITS_PER_UNIT - 1)) == 0
   && ix86_pre_reload_split ()))
            return -1;
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
          return 1261; /* *ashrdi3_add */

        case 4:
          if (!
#line 17934 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ASHIFTRT, SImode, operands)
   && (INTVAL (operands[3]) & (4 * BITS_PER_UNIT - 1)) == 0
   && ix86_pre_reload_split ()))
            return -1;
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
        return 1127; /* *ashrdi3_doubleword_mask_1 */
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
      return 1255; /* *ashrdi3_mask_1 */

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
      return 1129; /* *ashrti3_doubleword_mask_1 */

    case 3:
      if (!
#line 17865 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ASHIFTRT, SImode, operands)
   && (INTVAL (operands[3]) & (4 * BITS_PER_UNIT - 1))
      == 4 * BITS_PER_UNIT - 1
   && ix86_pre_reload_split ()))
        return -1;
      return 1252; /* *ashrsi3_mask_1 */

    case 4:
      if (!
#line 17912 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ASHIFTRT, SImode, operands)
   && (INTVAL (operands[3]) & (4 * BITS_PER_UNIT - 1)) == 0
   && ix86_pre_reload_split ()))
        return -1;
      return 1264; /* *ashrsi3_add_1 */

    case 5:
      if (!(
#line 17912 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ASHIFTRT, DImode, operands)
   && (INTVAL (operands[3]) & (8 * BITS_PER_UNIT - 1)) == 0
   && ix86_pre_reload_split ()) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
        return -1;
      return 1267; /* *ashrdi3_add_1 */

    case 6:
      if (!
#line 17964 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ASHIFTRT, SImode, operands)
   && (INTVAL (operands[3]) & (4 * BITS_PER_UNIT - 1)) == 0
   && ix86_pre_reload_split ()))
        return -1;
      return 1276; /* *ashrsi3_sub_1 */

    case 7:
      if (!(
#line 17964 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ASHIFTRT, DImode, operands)
   && (INTVAL (operands[3]) & (8 * BITS_PER_UNIT - 1)) == 0
   && ix86_pre_reload_split ()) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
        return -1;
      return 1279; /* *ashrdi3_sub_1 */

    case 8:
      if (!(
#line 17988 "../../gcc/config/i386/i386.md"
(INTVAL (operands[2]) == INTVAL (operands[3])
   && UINTVAL (operands[2]) < 4 * BITS_PER_UNIT) && 
#line 1235 "../../gcc/config/i386/i386.md"
(!TARGET_64BIT)))
        return -1;
      return 1280; /* *extenddi2_doubleword_highpart */

    case 9:
      if (!(
#line 17988 "../../gcc/config/i386/i386.md"
(INTVAL (operands[2]) == INTVAL (operands[3])
   && UINTVAL (operands[2]) < 8 * BITS_PER_UNIT) && 
#line 1236 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
        return -1;
      return 1281; /* *extendti2_doubleword_highpart */

    default:
      return -1;
    }
}

 int
recog_426 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12, x13, x14, x15, x16, x17;
  rtx x18, x19, x20;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) != E_CCOmode)
    return -1;
  x4 = XEXP (x3, 0);
  if (GET_CODE (x4) != MULT)
    return -1;
  x5 = XEXP (x4, 0);
  if (GET_CODE (x5) != ZERO_EXTEND)
    return -1;
  x6 = XEXP (x4, 1);
  if (GET_CODE (x6) != ZERO_EXTEND)
    return -1;
  x7 = XEXP (x3, 1);
  if (GET_CODE (x7) != ZERO_EXTEND)
    return -1;
  x8 = XEXP (x7, 0);
  if (GET_CODE (x8) != MULT)
    return -1;
  x9 = XEXP (x2, 0);
  if (GET_CODE (x9) != REG
      || REGNO (x9) != 17
      || GET_MODE (x9) != E_CCOmode)
    return -1;
  x10 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x10) != SET)
    return -1;
  x11 = XEXP (x10, 1);
  if (GET_CODE (x11) != MULT)
    return -1;
  x12 = XVECEXP (x1, 0, 2);
  if (GET_CODE (x12) != CLOBBER)
    return -1;
  x13 = XEXP (x5, 0);
  operands[1] = x13;
  x14 = XEXP (x6, 0);
  operands[2] = x14;
  x15 = XEXP (x10, 0);
  operands[0] = x15;
  x16 = XEXP (x12, 0);
  operands[3] = x16;
  x17 = XEXP (x8, 0);
  if (!rtx_equal_p (x17, operands[1]))
    return -1;
  x18 = XEXP (x8, 1);
  if (!rtx_equal_p (x18, operands[2]))
    return -1;
  x19 = XEXP (x11, 0);
  if (!rtx_equal_p (x19, operands[1]))
    return -1;
  x20 = XEXP (x11, 1);
  if (!rtx_equal_p (x20, operands[2]))
    return -1;
  switch (GET_MODE (x4))
    {
    case E_SImode:
      if (pattern1796 (x1, 
E_HImode, 
E_SImode) != 0
          || !
#line 10872 "../../gcc/config/i386/i386.md"
(!(MEM_P (operands[1]) && MEM_P (operands[2]))))
        return -1;
      return 610; /* *umulvhi4 */

    case E_DImode:
      if (pattern1796 (x1, 
E_SImode, 
E_DImode) != 0
          || !
#line 10872 "../../gcc/config/i386/i386.md"
(!(MEM_P (operands[1]) && MEM_P (operands[2]))))
        return -1;
      return 611; /* *umulvsi4 */

    case E_TImode:
      if (pattern1796 (x1, 
E_DImode, 
E_TImode) != 0
          || !(
#line 10872 "../../gcc/config/i386/i386.md"
(!(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 1164 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
        return -1;
      return 612; /* *umulvdi4 */

    default:
      return -1;
    }
}

 int
recog_428 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  switch (GET_CODE (x2))
    {
    case SET:
      return recog_427 (x1, insn, pnum_clobbers);

    case CALL:
      x3 = XEXP (x2, 0);
      if (GET_CODE (x3) != MEM
          || GET_MODE (x3) != E_QImode
          || pattern382 (x1) != 0)
        return -1;
      x4 = XEXP (x3, 0);
      operands[0] = x4;
      if (!memory_operand (operands[0], E_SImode))
        return -1;
      x5 = XEXP (x2, 1);
      operands[1] = x5;
      x6 = XVECEXP (x1, 0, 1);
      x7 = XEXP (x6, 1);
      x8 = XEXP (x7, 1);
      operands[2] = x8;
      if (!immediate_operand (operands[2], E_SImode)
          || !
#line 20247 "../../gcc/config/i386/i386.md"
(!TARGET_64BIT))
        return -1;
      return 1474; /* *sibcall_pop_memory */

    default:
      return -1;
    }
}

 int
recog_430 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12, x13, x14, x15, x16, x17;
  rtx x18, x19, x20, x21, x22, x23, x24, x25;
  rtx x26, x27, x28;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  if (GET_CODE (x2) != SET)
    return -1;
  x3 = XEXP (x2, 1);
  switch (GET_CODE (x3))
    {
    case CONST_INT:
      if (XWINT (x3, 0) != 0L)
        return -1;
      x4 = XVECEXP (x1, 0, 1);
      if (GET_CODE (x4) != SET)
        return -1;
      x5 = XEXP (x4, 1);
      if (GET_CODE (x5) != PLUS)
        return -1;
      x6 = XVECEXP (x1, 0, 2);
      if (GET_CODE (x6) != SET)
        return -1;
      x7 = XVECEXP (x1, 0, 4);
      if (GET_CODE (x7) != USE)
        return -1;
      x8 = XEXP (x4, 0);
      operands[0] = x8;
      x9 = XEXP (x5, 0);
      switch (GET_CODE (x9))
        {
        case ASHIFT:
          x10 = XEXP (x9, 1);
          if (GET_CODE (x10) != CONST_INT)
            return -1;
          x11 = XEXP (x5, 1);
          operands[3] = x11;
          switch (XWINT (x10, 0))
            {
            case 3L:
              switch (pattern1444 (x1, 
3, 
E_DImode))
                {
                case 0:
                  if (!(
#line 25563 "../../gcc/config/i386/i386.md"
(TARGET_64BIT
   && !(fixed_regs[CX_REG] || fixed_regs[SI_REG] || fixed_regs[DI_REG])
   && ix86_check_no_addr_space (insn)) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode)))
                    return -1;
                  return 1763; /* *rep_movdi_rex64 */

                case 1:
                  if (!(
#line 25563 "../../gcc/config/i386/i386.md"
(TARGET_64BIT
   && !(fixed_regs[CX_REG] || fixed_regs[SI_REG] || fixed_regs[DI_REG])
   && ix86_check_no_addr_space (insn)) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode)))
                    return -1;
                  return 1764; /* *rep_movdi_rex64 */

                case 2:
                  if (!(
#line 25762 "../../gcc/config/i386/i386.md"
(TARGET_64BIT
   && !(fixed_regs[AX_REG] || fixed_regs[CX_REG] || fixed_regs[DI_REG])
   && ix86_check_no_addr_space (insn)) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode)))
                    return -1;
                  return 1777; /* *rep_stosdi_rex64 */

                case 3:
                  if (!(
#line 25762 "../../gcc/config/i386/i386.md"
(TARGET_64BIT
   && !(fixed_regs[AX_REG] || fixed_regs[CX_REG] || fixed_regs[DI_REG])
   && ix86_check_no_addr_space (insn)) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode)))
                    return -1;
                  return 1778; /* *rep_stosdi_rex64 */

                default:
                  return -1;
                }

            case 2L:
              switch (pattern1444 (x1, 
2, 
E_SImode))
                {
                case 0:
                  if (!(
#line 25584 "../../gcc/config/i386/i386.md"
(!(fixed_regs[CX_REG] || fixed_regs[SI_REG] || fixed_regs[DI_REG])
   && ix86_check_no_addr_space (insn)) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode)))
                    return -1;
                  return 1765; /* *rep_movsi */

                case 1:
                  if (!(
#line 25584 "../../gcc/config/i386/i386.md"
(!(fixed_regs[CX_REG] || fixed_regs[SI_REG] || fixed_regs[DI_REG])
   && ix86_check_no_addr_space (insn)) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode)))
                    return -1;
                  return 1766; /* *rep_movsi */

                case 2:
                  if (!(
#line 25781 "../../gcc/config/i386/i386.md"
(!(fixed_regs[AX_REG] || fixed_regs[CX_REG] || fixed_regs[DI_REG])
   && ix86_check_no_addr_space (insn)) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode)))
                    return -1;
                  return 1779; /* *rep_stossi */

                case 3:
                  if (!(
#line 25781 "../../gcc/config/i386/i386.md"
(!(fixed_regs[AX_REG] || fixed_regs[CX_REG] || fixed_regs[DI_REG])
   && ix86_check_no_addr_space (insn)) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode)))
                    return -1;
                  return 1780; /* *rep_stossi */

                default:
                  return -1;
                }

            default:
              return -1;
            }

        case REG:
        case SUBREG:
          operands[3] = x9;
          x12 = XEXP (x6, 1);
          switch (GET_CODE (x12))
            {
            case PLUS:
              x13 = XVECEXP (x1, 0, 3);
              if (GET_CODE (x13) != SET)
                return -1;
              x14 = XEXP (x13, 1);
              if (GET_CODE (x14) != MEM
                  || GET_MODE (x14) != E_BLKmode)
                return -1;
              x15 = XEXP (x13, 0);
              if (GET_CODE (x15) != MEM
                  || GET_MODE (x15) != E_BLKmode)
                return -1;
              x16 = XEXP (x2, 0);
              operands[2] = x16;
              x11 = XEXP (x5, 1);
              operands[5] = x11;
              x17 = XEXP (x6, 0);
              operands[1] = x17;
              x18 = XEXP (x12, 0);
              operands[4] = x18;
              x19 = XEXP (x12, 1);
              if (!rtx_equal_p (x19, operands[5]))
                return -1;
              x20 = XEXP (x14, 0);
              if (!rtx_equal_p (x20, operands[4]))
                return -1;
              x21 = XEXP (x15, 0);
              if (!rtx_equal_p (x21, operands[3]))
                return -1;
              x22 = XEXP (x7, 0);
              if (!rtx_equal_p (x22, operands[5]))
                return -1;
              switch (GET_MODE (operands[2]))
                {
                case E_SImode:
                  if (pattern1823 (x1, 
E_SImode) != 0
                      || !(
#line 25602 "../../gcc/config/i386/i386.md"
(!(fixed_regs[CX_REG] || fixed_regs[SI_REG] || fixed_regs[DI_REG])
   && ix86_check_no_addr_space (insn)) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode)))
                    return -1;
                  return 1767; /* *rep_movqi */

                case E_DImode:
                  if (pattern1823 (x1, 
E_DImode) != 0
                      || !(
#line 25602 "../../gcc/config/i386/i386.md"
(!(fixed_regs[CX_REG] || fixed_regs[SI_REG] || fixed_regs[DI_REG])
   && ix86_check_no_addr_space (insn)) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode)))
                    return -1;
                  return 1768; /* *rep_movqi */

                default:
                  return -1;
                }

            case CONST_INT:
              if (XWINT (x12, 0) != 0L)
                return -1;
              x17 = XEXP (x6, 0);
              if (GET_CODE (x17) != MEM
                  || GET_MODE (x17) != E_BLKmode)
                return -1;
              x13 = XVECEXP (x1, 0, 3);
              if (GET_CODE (x13) != USE)
                return -1;
              x16 = XEXP (x2, 0);
              operands[1] = x16;
              x11 = XEXP (x5, 1);
              operands[4] = x11;
              x15 = XEXP (x13, 0);
              operands[2] = x15;
              if (!register_operand (operands[2], E_QImode))
                return -1;
              x23 = XEXP (x17, 0);
              if (!rtx_equal_p (x23, operands[3]))
                return -1;
              x22 = XEXP (x7, 0);
              if (!rtx_equal_p (x22, operands[4]))
                return -1;
              switch (GET_MODE (operands[1]))
                {
                case E_SImode:
                  if (pattern1775 (x5, 
E_SImode) != 0
                      || !(
#line 25798 "../../gcc/config/i386/i386.md"
(!(fixed_regs[AX_REG] || fixed_regs[CX_REG] || fixed_regs[DI_REG])
   && ix86_check_no_addr_space (insn)) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode)))
                    return -1;
                  return 1781; /* *rep_stosqi */

                case E_DImode:
                  if (pattern1775 (x5, 
E_DImode) != 0
                      || !(
#line 25798 "../../gcc/config/i386/i386.md"
(!(fixed_regs[AX_REG] || fixed_regs[CX_REG] || fixed_regs[DI_REG])
   && ix86_check_no_addr_space (insn)) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode)))
                    return -1;
                  return 1782; /* *rep_stosqi */

                default:
                  return -1;
                }

            default:
              return -1;
            }

        default:
          return -1;
        }

    case IF_THEN_ELSE:
      if (pattern228 (x1) != 0)
        return -1;
      x24 = XEXP (x3, 1);
      x25 = XEXP (x24, 0);
      x26 = XEXP (x25, 0);
      operands[4] = x26;
      x27 = XEXP (x24, 1);
      x28 = XEXP (x27, 0);
      operands[5] = x28;
      x4 = XVECEXP (x1, 0, 1);
      x8 = XEXP (x4, 0);
      operands[3] = x8;
      if (!immediate_operand (operands[3], E_SImode))
        return -1;
      x6 = XVECEXP (x1, 0, 2);
      x17 = XEXP (x6, 0);
      operands[0] = x17;
      x13 = XVECEXP (x1, 0, 3);
      x15 = XEXP (x13, 0);
      operands[1] = x15;
      x7 = XVECEXP (x1, 0, 4);
      x22 = XEXP (x7, 0);
      operands[2] = x22;
      switch (GET_MODE (operands[6]))
        {
        case E_SImode:
          if (pattern1844 (
E_SImode) != 0
              || !(
#line 25929 "../../gcc/config/i386/i386.md"
(!(fixed_regs[CX_REG] || fixed_regs[SI_REG] || fixed_regs[DI_REG])
   && ix86_check_no_addr_space (insn)) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode)))
            return -1;
          return 1785; /* *cmpstrnqi_1 */

        case E_DImode:
          if (pattern1844 (
E_DImode) != 0
              || !(
#line 25929 "../../gcc/config/i386/i386.md"
(!(fixed_regs[CX_REG] || fixed_regs[SI_REG] || fixed_regs[DI_REG])
   && ix86_check_no_addr_space (insn)) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode)))
            return -1;
          return 1786; /* *cmpstrnqi_1 */

        default:
          return -1;
        }

    default:
      return -1;
    }
}

 rtx_insn *
split_3 (rtx x1 ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11;
  rtx_insn *res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  if (GET_CODE (x4) != ZERO_EXTRACT)
    return NULL;
  x5 = XEXP (x4, 1);
  if (x5 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
    return NULL;
  x6 = XEXP (x3, 1);
  if (x6 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
    return NULL;
  x7 = XEXP (x1, 0);
  operands[0] = x7;
  x8 = XEXP (x4, 0);
  operands[1] = x8;
  x9 = XEXP (x4, 2);
  operands[2] = x9;
  if (!register_operand (operands[2], E_QImode))
    return NULL;
  x10 = XEXP (x2, 1);
  operands[3] = x10;
  x11 = XEXP (x2, 2);
  operands[4] = x11;
  switch (GET_MODE (operands[0]))
    {
    case E_HImode:
      switch (pattern1529 (x2, 
E_HImode))
        {
        case 0:
          if (!
#line 19300 "../../gcc/config/i386/i386.md"
(TARGET_USE_BT && TARGET_CMOVE
   && !(MEM_P (operands[3]) && MEM_P (operands[4]))
   && ix86_pre_reload_split ()))
            return NULL;
          return gen_split_830 (insn, operands);

        case 1:
          if (!(
#line 19300 "../../gcc/config/i386/i386.md"
(TARGET_USE_BT && TARGET_CMOVE
   && !(MEM_P (operands[3]) && MEM_P (operands[4]))
   && ix86_pre_reload_split ()) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return NULL;
          return gen_split_831 (insn, operands);

        default:
          return NULL;
        }

    case E_SImode:
      switch (pattern1529 (x2, 
E_SImode))
        {
        case 0:
          if (!
#line 19300 "../../gcc/config/i386/i386.md"
(TARGET_USE_BT && TARGET_CMOVE
   && !(MEM_P (operands[3]) && MEM_P (operands[4]))
   && ix86_pre_reload_split ()))
            return NULL;
          return gen_split_832 (insn, operands);

        case 1:
          if (!(
#line 19300 "../../gcc/config/i386/i386.md"
(TARGET_USE_BT && TARGET_CMOVE
   && !(MEM_P (operands[3]) && MEM_P (operands[4]))
   && ix86_pre_reload_split ()) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return NULL;
          return gen_split_833 (insn, operands);

        default:
          return NULL;
        }

    case E_DImode:
      switch (pattern1529 (x2, 
E_DImode))
        {
        case 0:
          if (!(
#line 19300 "../../gcc/config/i386/i386.md"
(TARGET_USE_BT && TARGET_CMOVE
   && !(MEM_P (operands[3]) && MEM_P (operands[4]))
   && ix86_pre_reload_split ()) && 
#line 1164 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return NULL;
          return gen_split_834 (insn, operands);

        case 1:
          if (!(
#line 19300 "../../gcc/config/i386/i386.md"
(TARGET_USE_BT && TARGET_CMOVE
   && !(MEM_P (operands[3]) && MEM_P (operands[4]))
   && ix86_pre_reload_split ()) && 
#line 1164 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return NULL;
          return gen_split_835 (insn, operands);

        default:
          return NULL;
        }

    default:
      return NULL;
    }
}

 rtx_insn *
split_8 (rtx x1 ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
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
          return gen_split_24 (insn, operands);

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
          return gen_split_27 (insn, operands);

        case 2:
          if (!(
#line 3748 "../../gcc/config/i386/i386.md"
(!TARGET_64BIT
   && CONST_INT_P (operands[3])
   && UINTVAL (operands[3]) == 0xffffffff00000000ll) && 
#line 3752 "../../gcc/config/i386/i386.md"
( reload_completed)))
            return NULL;
          return gen_split_30 (insn, operands);

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
          operands[1] = x6;
          x7 = XEXP (x3, 1);
          switch (GET_CODE (x7))
            {
            case CONST_INT:
            case CONST_WIDE_INT:
              operands[3] = x7;
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
                  return gen_split_161 (insn, operands);

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
                  return gen_split_163 (insn, operands);

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
                  return gen_split_165 (insn, operands);

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
                    return gen_split_167 (insn, operands);
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
                  return gen_split_468 (insn, operands);

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
                  return gen_split_471 (insn, operands);

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
                  return gen_split_432 (insn, operands);

                case 1:
                  if (!((
#line 14060 "../../gcc/config/i386/i386.md"
(INTVAL (operands[2]) == 8 * BITS_PER_UNIT) && 
#line 1236 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 14062 "../../gcc/config/i386/i386.md"
( reload_completed)))
                    return NULL;
                  return gen_split_435 (insn, operands);

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
              return gen_split_444 (insn, operands);

            case 1:
              if (!((
#line 14096 "../../gcc/config/i386/i386.md"
(INTVAL (operands[2]) == 8 * BITS_PER_UNIT) && 
#line 1236 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 14098 "../../gcc/config/i386/i386.md"
( reload_completed)))
                return NULL;
              return gen_split_450 (insn, operands);

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
              return gen_split_474 (insn, operands);

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
              return gen_split_480 (insn, operands);

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
              return gen_split_447 (insn, operands);

            case 1:
              if (!((
#line 14096 "../../gcc/config/i386/i386.md"
(INTVAL (operands[2]) == 8 * BITS_PER_UNIT) && 
#line 1236 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 14098 "../../gcc/config/i386/i386.md"
( reload_completed)))
                return NULL;
              return gen_split_453 (insn, operands);

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
              return gen_split_477 (insn, operands);

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
              return gen_split_483 (insn, operands);

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
          return gen_split_438 (insn, operands);

        case 1:
          if (!((
#line 14077 "../../gcc/config/i386/i386.md"
(INTVAL (operands[3]) == 8 * BITS_PER_UNIT) && 
#line 1236 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 14079 "../../gcc/config/i386/i386.md"
( reload_completed)))
            return NULL;
          return gen_split_441 (insn, operands);

        case 2:
          if (!((
#line 14121 "../../gcc/config/i386/i386.md"
(INTVAL (operands[3]) == 4 * BITS_PER_UNIT) && 
#line 1235 "../../gcc/config/i386/i386.md"
(!TARGET_64BIT)) && 
#line 14123 "../../gcc/config/i386/i386.md"
( reload_completed)))
            return NULL;
          return gen_split_456 (insn, operands);

        case 3:
          if (!((
#line 14121 "../../gcc/config/i386/i386.md"
(INTVAL (operands[3]) == 8 * BITS_PER_UNIT) && 
#line 1236 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 14123 "../../gcc/config/i386/i386.md"
( reload_completed)))
            return NULL;
          return gen_split_462 (insn, operands);

        case 4:
          if (!((
#line 14121 "../../gcc/config/i386/i386.md"
(INTVAL (operands[3]) == 4 * BITS_PER_UNIT) && 
#line 1235 "../../gcc/config/i386/i386.md"
(!TARGET_64BIT)) && 
#line 14123 "../../gcc/config/i386/i386.md"
( reload_completed)))
            return NULL;
          return gen_split_459 (insn, operands);

        case 5:
          if (!((
#line 14121 "../../gcc/config/i386/i386.md"
(INTVAL (operands[3]) == 8 * BITS_PER_UNIT) && 
#line 1236 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 14123 "../../gcc/config/i386/i386.md"
( reload_completed)))
            return NULL;
          return gen_split_465 (insn, operands);

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
          return gen_split_486 (insn, operands);

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
          return gen_split_489 (insn, operands);

        default:
          return NULL;
        }

    default:
      return NULL;
    }
}

 rtx_insn *
split_16 (rtx x1 ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx_insn *res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  x4 = XEXP (x3, 1);
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
      operands[2] = x4;
      x5 = XEXP (x2, 0);
      switch (GET_CODE (x5))
        {
        case REG:
        case SUBREG:
        case MEM:
          operands[0] = x5;
          switch (GET_MODE (operands[0]))
            {
            case E_DImode:
              if (pattern564 (x3, 
E_DImode) == 0
                  && ((
#line 8069 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (MINUS, SImode, operands, TARGET_APX_NDD)) && 
#line 1235 "../../gcc/config/i386/i386.md"
(!TARGET_64BIT)) && 
#line 8071 "../../gcc/config/i386/i386.md"
( reload_completed)))
                return gen_split_168 (insn, operands);
              break;

            case E_TImode:
              if (pattern564 (x3, 
E_TImode) == 0
                  && ((
#line 8069 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (MINUS, DImode, operands, TARGET_APX_NDD)) && 
#line 1236 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 8071 "../../gcc/config/i386/i386.md"
( reload_completed)))
                return gen_split_169 (insn, operands);
              break;

            default:
              break;
            }
          break;

        case STRICT_LOW_PART:
          switch (pattern1325 (x2))
            {
            case 0:
              if ((
#line 8189 "../../gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)) && 
#line 8193 "../../gcc/config/i386/i386.md"
( reload_completed
   && !(rtx_equal_p (operands[0], operands[1])))))
                return gen_split_172 (insn, operands);
              break;

            case 1:
              if ((
#line 8189 "../../gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)) && 
#line 8193 "../../gcc/config/i386/i386.md"
( reload_completed
   && !(rtx_equal_p (operands[0], operands[1])))))
                return gen_split_173 (insn, operands);
              break;

            default:
              break;
            }
          break;

        default:
          break;
        }
      if (GET_CODE (x4) != SUBREG
          || pattern817 (x4) != 0
          || GET_CODE (x5) != STRICT_LOW_PART)
        return NULL;
      x6 = XEXP (x5, 0);
      operands[0] = x6;
      if (!register_operand (operands[0], E_QImode)
          || GET_MODE (x3) != E_QImode
          || !nonimmediate_operand (operands[1], E_QImode))
        return NULL;
      x7 = XEXP (x4, 0);
      x8 = XEXP (x7, 0);
      operands[2] = x8;
      if (!int248_register_operand (operands[2], E_VOIDmode))
        return NULL;
      switch (pattern1795 ())
        {
        case 0:
          if (!(
#line 8215 "../../gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)) && 
#line 8219 "../../gcc/config/i386/i386.md"
( reload_completed
   && !rtx_equal_p (operands[0], operands[1]))))
            return NULL;
          return gen_split_174 (insn, operands);

        case 1:
          if (!(
#line 8215 "../../gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)) && 
#line 8219 "../../gcc/config/i386/i386.md"
( reload_completed
   && !rtx_equal_p (operands[0], operands[1]))))
            return NULL;
          return gen_split_175 (insn, operands);

        case 2:
          if (!((
#line 8215 "../../gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)) && 
#line 1164 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 8219 "../../gcc/config/i386/i386.md"
( reload_completed
   && !rtx_equal_p (operands[0], operands[1]))))
            return NULL;
          return gen_split_176 (insn, operands);

        default:
          return NULL;
        }

    case ZERO_EXTEND:
      switch (pattern1163 (x2))
        {
        case 0:
          if (!((
#line 8103 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (UNKNOWN, DImode, operands, TARGET_APX_NDD)) && 
#line 1235 "../../gcc/config/i386/i386.md"
(!TARGET_64BIT)) && 
#line 8105 "../../gcc/config/i386/i386.md"
( reload_completed)))
            return NULL;
          return gen_split_170 (insn, operands);

        case 1:
          if (!((
#line 8103 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (UNKNOWN, TImode, operands, TARGET_APX_NDD)) && 
#line 1236 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 8105 "../../gcc/config/i386/i386.md"
( reload_completed)))
            return NULL;
          return gen_split_171 (insn, operands);

        default:
          return NULL;
        }

    case EQ:
      x9 = XEXP (x4, 1);
      if (x9 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
        return NULL;
      switch (pattern690 (x2))
        {
        case 0:
          if (!(
#line 10307 "../../gcc/config/i386/i386.md"
(ix86_unary_operator_ok (MINUS, QImode, operands)
   && ix86_pre_reload_split ()) && 
#line 10310 "../../gcc/config/i386/i386.md"
( 1)))
            return NULL;
          return gen_split_230 (insn, operands);

        case 1:
          if (!(
#line 10307 "../../gcc/config/i386/i386.md"
(ix86_unary_operator_ok (MINUS, HImode, operands)
   && ix86_pre_reload_split ()) && 
#line 10310 "../../gcc/config/i386/i386.md"
( 1)))
            return NULL;
          return gen_split_231 (insn, operands);

        case 2:
          if (!(
#line 10307 "../../gcc/config/i386/i386.md"
(ix86_unary_operator_ok (MINUS, SImode, operands)
   && ix86_pre_reload_split ()) && 
#line 10310 "../../gcc/config/i386/i386.md"
( 1)))
            return NULL;
          return gen_split_232 (insn, operands);

        case 3:
          if (!((
#line 10307 "../../gcc/config/i386/i386.md"
(ix86_unary_operator_ok (MINUS, DImode, operands)
   && ix86_pre_reload_split ()) && 
#line 1161 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 10310 "../../gcc/config/i386/i386.md"
( 1)))
            return NULL;
          return gen_split_233 (insn, operands);

        default:
          return NULL;
        }

    case NE:
      x9 = XEXP (x4, 1);
      if (x9 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
        return NULL;
      switch (pattern690 (x2))
        {
        case 0:
          if (!(
#line 10328 "../../gcc/config/i386/i386.md"
(ix86_unary_operator_ok (MINUS, QImode, operands)
   && ix86_pre_reload_split ()) && 
#line 10331 "../../gcc/config/i386/i386.md"
( 1)))
            return NULL;
          return gen_split_234 (insn, operands);

        case 1:
          if (!(
#line 10328 "../../gcc/config/i386/i386.md"
(ix86_unary_operator_ok (MINUS, HImode, operands)
   && ix86_pre_reload_split ()) && 
#line 10331 "../../gcc/config/i386/i386.md"
( 1)))
            return NULL;
          return gen_split_235 (insn, operands);

        case 2:
          if (!(
#line 10328 "../../gcc/config/i386/i386.md"
(ix86_unary_operator_ok (MINUS, SImode, operands)
   && ix86_pre_reload_split ()) && 
#line 10331 "../../gcc/config/i386/i386.md"
( 1)))
            return NULL;
          return gen_split_236 (insn, operands);

        case 3:
          if (!((
#line 10328 "../../gcc/config/i386/i386.md"
(ix86_unary_operator_ok (MINUS, DImode, operands)
   && ix86_pre_reload_split ()) && 
#line 1161 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 10331 "../../gcc/config/i386/i386.md"
( 1)))
            return NULL;
          return gen_split_237 (insn, operands);

        default:
          return NULL;
        }

    default:
      return NULL;
    }
}

 rtx_insn *
split_26 (rtx x1 ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7;
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
      switch (pattern199 (x3))
        {
        case 0:
          x6 = XEXP (x3, 0);
          operands[0] = x6;
          x7 = XEXP (x4, 1);
          switch (GET_CODE (x7))
            {
            case REG:
            case SUBREG:
              if (GET_CODE (x7) == SUBREG)
                {
                  switch (pattern1333 (x4))
                    {
                    case 0:
                      if (((
#line 15203 "../../gcc/config/i386/i386.md"
(((INTVAL (operands[3]) & (4 * BITS_PER_UNIT)) == 0
    || ((INTVAL (operands[3]) & (2 * 4 * BITS_PER_UNIT - 1))
	 == (2 * 4 * BITS_PER_UNIT - 1)))
   && ix86_pre_reload_split ()) && 
#line 1235 "../../gcc/config/i386/i386.md"
(!TARGET_64BIT)) && 
#line 15208 "../../gcc/config/i386/i386.md"
( 1)))
                        return gen_split_552 (insn, operands);
                      break;

                    case 1:
                      if (((
#line 15203 "../../gcc/config/i386/i386.md"
(((INTVAL (operands[3]) & (8 * BITS_PER_UNIT)) == 0
    || ((INTVAL (operands[3]) & (2 * 8 * BITS_PER_UNIT - 1))
	 == (2 * 8 * BITS_PER_UNIT - 1)))
   && ix86_pre_reload_split ()) && 
#line 1236 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 15208 "../../gcc/config/i386/i386.md"
( 1)))
                        return gen_split_553 (insn, operands);
                      break;

                    default:
                      break;
                    }
                }
              operands[2] = x7;
              if (register_operand (operands[2], E_QImode)
                  && register_operand (operands[0], E_SImode)
                  && GET_MODE (x4) == E_SImode
                  && nonimmediate_operand (operands[1], E_SImode)
                  && 
#line 15988 "../../gcc/config/i386/i386.md"
(TARGET_BMI2 && reload_completed))
                return gen_split_572 (insn, operands);
              if (GET_CODE (x7) == SUBREG
                  && known_eq (SUBREG_BYTE (x7), 0)
                  && GET_MODE (x7) == E_QImode)
                {
                  switch (pattern1166 (x4, 
E_SImode))
                    {
                    case 0:
                      if ((
#line 17840 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ASHIFT, SImode, operands)
   && (INTVAL (operands[3]) & (4 * BITS_PER_UNIT - 1))
      == 4 * BITS_PER_UNIT - 1
   && ix86_pre_reload_split ()) && 
#line 17845 "../../gcc/config/i386/i386.md"
( 1)))
                        return gen_split_638 (insn, operands);
                      break;

                    case 1:
                      if ((
#line 17888 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ASHIFT, SImode, operands)
   && (INTVAL (operands[3]) & (4 * BITS_PER_UNIT - 1)) == 0
   && ix86_pre_reload_split ()) && 
#line 17892 "../../gcc/config/i386/i386.md"
( 1)))
                        return gen_split_650 (insn, operands);
                      break;

                    case 2:
                      if ((
#line 17934 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ASHIFT, SImode, operands)
   && (INTVAL (operands[3]) & (4 * BITS_PER_UNIT - 1)) == 0
   && ix86_pre_reload_split ()) && 
#line 17938 "../../gcc/config/i386/i386.md"
( 1)))
                        return gen_split_662 (insn, operands);
                      break;

                    default:
                      break;
                    }
                }
              break;

            case CONST_INT:
              operands[2] = x7;
              if (const_0_to_3_operand (operands[2], E_VOIDmode))
                {
                  switch (GET_MODE (operands[0]))
                    {
                    case E_QImode:
                      if (general_reg_operand (operands[0], E_QImode)
                          && GET_MODE (x4) == E_QImode
                          && index_reg_operand (operands[1], E_QImode)
                          && 
#line 16283 "../../gcc/config/i386/i386.md"
(reload_completed
   && REGNO (operands[0]) != REGNO (operands[1])))
                        return gen_split_577 (insn, operands);
                      break;

                    case E_HImode:
                      if (general_reg_operand (operands[0], E_HImode)
                          && GET_MODE (x4) == E_HImode
                          && index_reg_operand (operands[1], E_HImode)
                          && 
#line 16283 "../../gcc/config/i386/i386.md"
(reload_completed
   && REGNO (operands[0]) != REGNO (operands[1])))
                        return gen_split_578 (insn, operands);
                      break;

                    case E_SImode:
                      if (general_reg_operand (operands[0], E_SImode)
                          && GET_MODE (x4) == E_SImode
                          && index_reg_operand (operands[1], E_SImode)
                          && 
#line 16283 "../../gcc/config/i386/i386.md"
(reload_completed
   && REGNO (operands[0]) != REGNO (operands[1])))
                        return gen_split_579 (insn, operands);
                      break;

                    default:
                      break;
                    }
                }
              break;

            default:
              break;
            }
          operands[2] = x7;
          res = split_19 (x1, insn);
          if (res != NULL_RTX)
            return res;
          if (GET_CODE (x7) != SUBREG)
            return NULL;
          switch (pattern1167 (x3, 
E_DImode))
            {
            case 0:
              if (!((
#line 17840 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ASHIFT, DImode, operands)
   && (INTVAL (operands[3]) & (8 * BITS_PER_UNIT - 1))
      == 8 * BITS_PER_UNIT - 1
   && ix86_pre_reload_split ()) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 17845 "../../gcc/config/i386/i386.md"
( 1)))
                return NULL;
              return gen_split_641 (insn, operands);

            case 1:
              if (!((
#line 17888 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ASHIFT, DImode, operands)
   && (INTVAL (operands[3]) & (8 * BITS_PER_UNIT - 1)) == 0
   && ix86_pre_reload_split ()) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 17892 "../../gcc/config/i386/i386.md"
( 1)))
                return NULL;
              return gen_split_653 (insn, operands);

            case 2:
              if (!((
#line 17934 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ASHIFT, DImode, operands)
   && (INTVAL (operands[3]) & (8 * BITS_PER_UNIT - 1)) == 0
   && ix86_pre_reload_split ()) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 17938 "../../gcc/config/i386/i386.md"
( 1)))
                return NULL;
              return gen_split_665 (insn, operands);

            default:
              return NULL;
            }

        case 1:
          if (register_operand (operands[0], E_DImode)
              && register_operand (operands[1], E_DImode)
              && ((
#line 15264 "../../gcc/config/i386/i386.md"
(((INTVAL (operands[3]) & (4 * BITS_PER_UNIT)) == 0
    || ((INTVAL (operands[3]) & (2 * 4 * BITS_PER_UNIT - 1))
	 == (2 * 4 * BITS_PER_UNIT - 1)))
   && ix86_pre_reload_split ()) && 
#line 1235 "../../gcc/config/i386/i386.md"
(!TARGET_64BIT)) && 
#line 15269 "../../gcc/config/i386/i386.md"
( 1)))
            return gen_split_554 (insn, operands);
          if (!nonimmediate_operand (operands[0], E_DImode)
              || !nonimmediate_operand (operands[1], E_DImode)
              || !((
#line 17865 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ASHIFT, DImode, operands)
   && (INTVAL (operands[3]) & (8 * BITS_PER_UNIT - 1))
      == 8 * BITS_PER_UNIT - 1
   && ix86_pre_reload_split ()) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 17870 "../../gcc/config/i386/i386.md"
( 1)))
            return NULL;
          return gen_split_647 (insn, operands);

        case 2:
          if (!((
#line 15264 "../../gcc/config/i386/i386.md"
(((INTVAL (operands[3]) & (8 * BITS_PER_UNIT)) == 0
    || ((INTVAL (operands[3]) & (2 * 8 * BITS_PER_UNIT - 1))
	 == (2 * 8 * BITS_PER_UNIT - 1)))
   && ix86_pre_reload_split ()) && 
#line 1236 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 15269 "../../gcc/config/i386/i386.md"
( 1)))
            return NULL;
          return gen_split_555 (insn, operands);

        case 3:
          if (!(
#line 17865 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ASHIFT, SImode, operands)
   && (INTVAL (operands[3]) & (4 * BITS_PER_UNIT - 1))
      == 4 * BITS_PER_UNIT - 1
   && ix86_pre_reload_split ()) && 
#line 17870 "../../gcc/config/i386/i386.md"
( 1)))
            return NULL;
          return gen_split_644 (insn, operands);

        case 4:
          if (!(
#line 17912 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ASHIFT, SImode, operands)
   && (INTVAL (operands[3]) & (4 * BITS_PER_UNIT - 1)) == 0
   && ix86_pre_reload_split ()) && 
#line 17916 "../../gcc/config/i386/i386.md"
( 1)))
            return NULL;
          return gen_split_656 (insn, operands);

        case 5:
          if (!((
#line 17912 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ASHIFT, DImode, operands)
   && (INTVAL (operands[3]) & (8 * BITS_PER_UNIT - 1)) == 0
   && ix86_pre_reload_split ()) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 17916 "../../gcc/config/i386/i386.md"
( 1)))
            return NULL;
          return gen_split_659 (insn, operands);

        case 6:
          if (!(
#line 17964 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ASHIFT, SImode, operands)
   && (INTVAL (operands[3]) & (4 * BITS_PER_UNIT - 1)) == 0
   && ix86_pre_reload_split ()) && 
#line 17968 "../../gcc/config/i386/i386.md"
( 1)))
            return NULL;
          return gen_split_668 (insn, operands);

        case 7:
          if (!((
#line 17964 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ASHIFT, DImode, operands)
   && (INTVAL (operands[3]) & (8 * BITS_PER_UNIT - 1)) == 0
   && ix86_pre_reload_split ()) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 17968 "../../gcc/config/i386/i386.md"
( 1)))
            return NULL;
          return gen_split_671 (insn, operands);

        default:
          return NULL;
        }

    case SIGN_EXTEND:
      switch (pattern378 (x3))
        {
        case 0:
          if (!((
#line 15365 "../../gcc/config/i386/i386.md"
(INTVAL (operands[2]) >= 4 * BITS_PER_UNIT
   && INTVAL (operands[2]) < 4 * BITS_PER_UNIT * 2) && 
#line 1235 "../../gcc/config/i386/i386.md"
(!TARGET_64BIT)) && 
#line 15368 "../../gcc/config/i386/i386.md"
( reload_completed)))
            return NULL;
          return gen_split_558 (insn, operands);

        case 1:
          if (!((
#line 15365 "../../gcc/config/i386/i386.md"
(INTVAL (operands[2]) >= 8 * BITS_PER_UNIT
   && INTVAL (operands[2]) < 8 * BITS_PER_UNIT * 2) && 
#line 1236 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 15368 "../../gcc/config/i386/i386.md"
( reload_completed)))
            return NULL;
          return gen_split_560 (insn, operands);

        default:
          return NULL;
        }

    case ZERO_EXTEND:
      switch (pattern378 (x3))
        {
        case 0:
          if (!((
#line 15365 "../../gcc/config/i386/i386.md"
(INTVAL (operands[2]) >= 4 * BITS_PER_UNIT
   && INTVAL (operands[2]) < 4 * BITS_PER_UNIT * 2) && 
#line 1235 "../../gcc/config/i386/i386.md"
(!TARGET_64BIT)) && 
#line 15368 "../../gcc/config/i386/i386.md"
( reload_completed)))
            return NULL;
          return gen_split_559 (insn, operands);

        case 1:
          if (!((
#line 15365 "../../gcc/config/i386/i386.md"
(INTVAL (operands[2]) >= 8 * BITS_PER_UNIT
   && INTVAL (operands[2]) < 8 * BITS_PER_UNIT * 2) && 
#line 1236 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 15368 "../../gcc/config/i386/i386.md"
( reload_completed)))
            return NULL;
          return gen_split_561 (insn, operands);

        default:
          return NULL;
        }

    default:
      return NULL;
    }
}

 rtx_insn *
split_34 (rtx x1 ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12, x13, x14, x15, x16, x17;
  rtx x18, x19, x20, x21, x22;
  rtx_insn *res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  switch (GET_CODE (x2))
    {
    case SET:
      x3 = XEXP (x2, 1);
      switch (GET_CODE (x3))
        {
        case SIGN_EXTRACT:
        case ZERO_EXTRACT:
          x4 = XEXP (x3, 1);
          if (GET_CODE (x4) != CONST_INT)
            return NULL;
          if (XWINT (x4, 0) == 1L)
            {
              res = split_14 (x1, insn);
              if (res != NULL_RTX)
                return res;
            }
          if (XWINT (x4, 0) != 8L
              || pattern717 (x2) != 0)
            return NULL;
          x5 = XVECEXP (x1, 0, 1);
          if (pattern227 (x5, 
E_CCmode, 
17) != 0)
            return NULL;
          switch (pattern1418 (x2))
            {
            case 0:
              if (!(
#line 13228 "../../gcc/config/i386/i386.md"
(GET_MODE (operands[1]) == GET_MODE (operands[2])) && 
#line 13232 "../../gcc/config/i386/i386.md"
( reload_completed
   && !(rtx_equal_p (operands[0], operands[1])
	|| rtx_equal_p (operands[0], operands[2])))))
                return NULL;
              return gen_split_358 (insn, operands);

            case 1:
              if (!(
#line 13228 "../../gcc/config/i386/i386.md"
(GET_MODE (operands[1]) == GET_MODE (operands[2])) && 
#line 13232 "../../gcc/config/i386/i386.md"
( reload_completed
   && !(rtx_equal_p (operands[0], operands[1])
	|| rtx_equal_p (operands[0], operands[2])))))
                return NULL;
              return gen_split_361 (insn, operands);

            case 2:
              if (!((
#line 13228 "../../gcc/config/i386/i386.md"
(GET_MODE (operands[1]) == GET_MODE (operands[2])) && 
#line 1164 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 13232 "../../gcc/config/i386/i386.md"
( reload_completed
   && !(rtx_equal_p (operands[0], operands[1])
	|| rtx_equal_p (operands[0], operands[2])))))
                return NULL;
              return gen_split_364 (insn, operands);

            case 3:
              if (!(
#line 13228 "../../gcc/config/i386/i386.md"
(GET_MODE (operands[1]) == GET_MODE (operands[2])) && 
#line 13232 "../../gcc/config/i386/i386.md"
( reload_completed
   && !(rtx_equal_p (operands[0], operands[1])
	|| rtx_equal_p (operands[0], operands[2])))))
                return NULL;
              return gen_split_359 (insn, operands);

            case 4:
              if (!(
#line 13228 "../../gcc/config/i386/i386.md"
(GET_MODE (operands[1]) == GET_MODE (operands[2])) && 
#line 13232 "../../gcc/config/i386/i386.md"
( reload_completed
   && !(rtx_equal_p (operands[0], operands[1])
	|| rtx_equal_p (operands[0], operands[2])))))
                return NULL;
              return gen_split_362 (insn, operands);

            case 5:
              if (!((
#line 13228 "../../gcc/config/i386/i386.md"
(GET_MODE (operands[1]) == GET_MODE (operands[2])) && 
#line 1164 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 13232 "../../gcc/config/i386/i386.md"
( reload_completed
   && !(rtx_equal_p (operands[0], operands[1])
	|| rtx_equal_p (operands[0], operands[2])))))
                return NULL;
              return gen_split_365 (insn, operands);

            case 6:
              if (!(
#line 13228 "../../gcc/config/i386/i386.md"
(GET_MODE (operands[1]) == GET_MODE (operands[2])) && 
#line 13232 "../../gcc/config/i386/i386.md"
( reload_completed
   && !(rtx_equal_p (operands[0], operands[1])
	|| rtx_equal_p (operands[0], operands[2])))))
                return NULL;
              return gen_split_360 (insn, operands);

            case 7:
              if (!(
#line 13228 "../../gcc/config/i386/i386.md"
(GET_MODE (operands[1]) == GET_MODE (operands[2])) && 
#line 13232 "../../gcc/config/i386/i386.md"
( reload_completed
   && !(rtx_equal_p (operands[0], operands[1])
	|| rtx_equal_p (operands[0], operands[2])))))
                return NULL;
              return gen_split_363 (insn, operands);

            case 8:
              if (!((
#line 13228 "../../gcc/config/i386/i386.md"
(GET_MODE (operands[1]) == GET_MODE (operands[2])) && 
#line 1164 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 13232 "../../gcc/config/i386/i386.md"
( reload_completed
   && !(rtx_equal_p (operands[0], operands[1])
	|| rtx_equal_p (operands[0], operands[2])))))
                return NULL;
              return gen_split_366 (insn, operands);

            default:
              return NULL;
            }

        case ZERO_EXTEND:
          return split_30 (x1, insn);

        case FIX:
          x5 = XVECEXP (x1, 0, 1);
          if (pattern351 (x5) != 0)
            return NULL;
          x6 = XEXP (x2, 0);
          operands[0] = x6;
          x7 = XEXP (x3, 0);
          operands[1] = x7;
          if (!register_operand (operands[1], E_VOIDmode))
            return NULL;
          switch (pattern548 (x3))
            {
            case 0:
              if (!(
#line 5993 "../../gcc/config/i386/i386.md"
(X87_FLOAT_MODE_P (GET_MODE (operands[1]))
   && !TARGET_FISTTP
   && !(SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	 && (TARGET_64BIT || HImode != DImode))
   && ix86_pre_reload_split ()) && 
#line 5999 "../../gcc/config/i386/i386.md"
( 1)))
                return NULL;
              return gen_split_76 (insn, operands);

            case 1:
              if (!(
#line 5993 "../../gcc/config/i386/i386.md"
(X87_FLOAT_MODE_P (GET_MODE (operands[1]))
   && !TARGET_FISTTP
   && !(SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	 && (TARGET_64BIT || SImode != DImode))
   && ix86_pre_reload_split ()) && 
#line 5999 "../../gcc/config/i386/i386.md"
( 1)))
                return NULL;
              return gen_split_77 (insn, operands);

            case 2:
              if (!(
#line 5993 "../../gcc/config/i386/i386.md"
(X87_FLOAT_MODE_P (GET_MODE (operands[1]))
   && !TARGET_FISTTP
   && !(SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	 && (TARGET_64BIT || DImode != DImode))
   && ix86_pre_reload_split ()) && 
#line 5999 "../../gcc/config/i386/i386.md"
( 1)))
                return NULL;
              return gen_split_78 (insn, operands);

            default:
              return NULL;
            }

        case MULT:
          if (pattern338 (x1) != 0)
            return NULL;
          x7 = XEXP (x3, 0);
          switch (GET_CODE (x7))
            {
            case REG:
              if (!rtx_equal_p (x7, operands[0]))
                return NULL;
              x4 = XEXP (x3, 1);
              operands[1] = x4;
              switch (GET_MODE (operands[0]))
                {
                case E_SImode:
                  if (!general_reg_operand (operands[0], E_SImode)
                      || GET_MODE (x3) != E_SImode
                      || !const1248_operand (operands[1], E_SImode)
                      || !
#line 6420 "../../gcc/config/i386/i386.md"
(reload_completed))
                    return NULL;
                  return gen_split_94 (insn, operands);

                case E_DImode:
                  if (!general_reg_operand (operands[0], E_DImode)
                      || GET_MODE (x3) != E_DImode
                      || !const1248_operand (operands[1], E_DImode)
                      || !(
#line 6420 "../../gcc/config/i386/i386.md"
(reload_completed) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                    return NULL;
                  return gen_split_95 (insn, operands);

                default:
                  return NULL;
                }

            case ZERO_EXTEND:
              x4 = XEXP (x3, 1);
              if (GET_CODE (x4) != ZERO_EXTEND)
                return NULL;
              x8 = XEXP (x7, 0);
              operands[1] = x8;
              x9 = XEXP (x4, 0);
              operands[2] = x9;
              switch (GET_MODE (operands[0]))
                {
                case E_DImode:
                  if (pattern562 (x3, 
E_SImode, 
E_DImode) != 0
                      || !(
#line 11021 "../../gcc/config/i386/i386.md"
(TARGET_BMI2 && reload_completed
  && REGNO (operands[1]) == DX_REG) && 
#line 1235 "../../gcc/config/i386/i386.md"
(!TARGET_64BIT)))
                    return NULL;
                  return gen_split_238 (insn, operands);

                case E_TImode:
                  if (pattern562 (x3, 
E_DImode, 
E_TImode) != 0
                      || !(
#line 11021 "../../gcc/config/i386/i386.md"
(TARGET_BMI2 && reload_completed
  && REGNO (operands[1]) == DX_REG) && 
#line 1236 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                    return NULL;
                  return gen_split_239 (insn, operands);

                default:
                  return NULL;
                }

            default:
              return NULL;
            }

        case PLUS:
          return split_25 (x1, insn);

        case SUBREG:
          return split_23 (x1, insn);

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
          if (GET_CODE (x3) == EQ)
            {
              x7 = XEXP (x3, 0);
              switch (GET_CODE (x7))
                {
                case PLUS:
                  switch (pattern721 (x1, 
PLUS))
                    {
                    case 0:
                      if (((
#line 7713 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (PLUS, DImode, operands, TARGET_APX_NDD)) && 
#line 1235 "../../gcc/config/i386/i386.md"
(!TARGET_64BIT)) && 
#line 7715 "../../gcc/config/i386/i386.md"
( reload_completed)))
                        return gen_split_146 (insn, operands);
                      break;

                    case 1:
                      if (((
#line 7713 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (PLUS, TImode, operands, TARGET_APX_NDD)) && 
#line 1236 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 7715 "../../gcc/config/i386/i386.md"
( reload_completed)))
                        return gen_split_147 (insn, operands);
                      break;

                    case 2:
                      if (((
#line 7759 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (PLUS, DImode, operands, TARGET_APX_NDD)
   && CONST_SCALAR_INT_P (operands[2])
   && rtx_equal_p (operands[2], operands[3])) && 
#line 1235 "../../gcc/config/i386/i386.md"
(!TARGET_64BIT)) && 
#line 7763 "../../gcc/config/i386/i386.md"
( reload_completed)))
                        return gen_split_148 (insn, operands);
                      break;

                    case 3:
                      if (((
#line 7759 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (PLUS, TImode, operands, TARGET_APX_NDD)
   && CONST_SCALAR_INT_P (operands[2])
   && rtx_equal_p (operands[2], operands[3])) && 
#line 1236 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 7763 "../../gcc/config/i386/i386.md"
( reload_completed)))
                        return gen_split_149 (insn, operands);
                      break;

                    default:
                      break;
                    }
                  break;

                case MINUS:
                  switch (pattern721 (x1, 
MINUS))
                    {
                    case 0:
                      if (((
#line 8485 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (MINUS, SImode, operands, TARGET_APX_NDD)) && 
#line 1235 "../../gcc/config/i386/i386.md"
(!TARGET_64BIT)) && 
#line 8487 "../../gcc/config/i386/i386.md"
( reload_completed)))
                        return gen_split_186 (insn, operands);
                      break;

                    case 1:
                      if (((
#line 8485 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (MINUS, DImode, operands, TARGET_APX_NDD)) && 
#line 1236 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 8487 "../../gcc/config/i386/i386.md"
( reload_completed)))
                        return gen_split_187 (insn, operands);
                      break;

                    case 2:
                      if (((
#line 8529 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (MINUS, SImode, operands, TARGET_APX_NDD)
   && CONST_SCALAR_INT_P (operands[2])
   && rtx_equal_p (operands[2], operands[3])) && 
#line 1235 "../../gcc/config/i386/i386.md"
(!TARGET_64BIT)) && 
#line 8533 "../../gcc/config/i386/i386.md"
( reload_completed)))
                        return gen_split_188 (insn, operands);
                      break;

                    case 3:
                      if (((
#line 8529 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (MINUS, DImode, operands, TARGET_APX_NDD)
   && CONST_SCALAR_INT_P (operands[2])
   && rtx_equal_p (operands[2], operands[3])) && 
#line 1236 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 8533 "../../gcc/config/i386/i386.md"
( reload_completed)))
                        return gen_split_189 (insn, operands);
                      break;

                    default:
                      break;
                    }
                  break;

                case ZERO_EXTRACT:
                  switch (pattern686 (x1))
                    {
                    case 0:
                      if ((
#line 19384 "../../gcc/config/i386/i386.md"
(TARGET_USE_BT && ix86_pre_reload_split ()) && 
#line 19386 "../../gcc/config/i386/i386.md"
( 1)))
                        return gen_split_842 (insn, operands);
                      break;

                    case 1:
                      if (((
#line 19384 "../../gcc/config/i386/i386.md"
(TARGET_USE_BT && ix86_pre_reload_split ()) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 19386 "../../gcc/config/i386/i386.md"
( 1)))
                        return gen_split_843 (insn, operands);
                      break;

                    default:
                      break;
                    }
                  break;

                default:
                  break;
                }
            }
          operands[1] = x3;
          switch (pattern367 (x1))
            {
            case 0:
              if (!(
#line 19497 "../../gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL
   && TARGET_ZERO_EXTEND_WITH_AND && optimize_function_for_speed_p (cfun)) && 
#line 19500 "../../gcc/config/i386/i386.md"
( reload_completed)))
                return NULL;
              return gen_split_852 (insn, operands);

            case 1:
              if (!(
#line 19497 "../../gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL
   && TARGET_ZERO_EXTEND_WITH_AND && optimize_function_for_speed_p (cfun)) && 
#line 19500 "../../gcc/config/i386/i386.md"
( reload_completed)))
                return NULL;
              return gen_split_853 (insn, operands);

            default:
              return NULL;
            }

        case MINUS:
          x5 = XVECEXP (x1, 0, 1);
          if (pattern227 (x5, 
E_CCmode, 
17) != 0)
            return NULL;
          x7 = XEXP (x3, 0);
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
            case MEM:
            case LABEL_REF:
            case SYMBOL_REF:
            case HIGH:
              operands[1] = x7;
              res = split_16 (x1, insn);
              if (res != NULL_RTX)
                return res;
              if (GET_CODE (x7) != SUBREG)
                return NULL;
              switch (pattern1046 (x2))
                {
                case 0:
                  if (!(
#line 8248 "../../gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)) && 
#line 8250 "../../gcc/config/i386/i386.md"
( reload_completed)))
                    return NULL;
                  return gen_split_177 (insn, operands);

                case 1:
                  if (!(
#line 8248 "../../gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)) && 
#line 8250 "../../gcc/config/i386/i386.md"
( reload_completed)))
                    return NULL;
                  return gen_split_178 (insn, operands);

                case 2:
                  if (!((
#line 8248 "../../gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)) && 
#line 1164 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 8250 "../../gcc/config/i386/i386.md"
( reload_completed)))
                    return NULL;
                  return gen_split_179 (insn, operands);

                case 3:
                  if (!
#line 8339 "../../gcc/config/i386/i386.md"
( reload_completed))
                    return NULL;
                  return gen_split_180 (insn, operands);

                case 4:
                  if (!
#line 8339 "../../gcc/config/i386/i386.md"
( reload_completed))
                    return NULL;
                  return gen_split_181 (insn, operands);

                case 5:
                  if (!(
#line 1164 "../../gcc/config/i386/i386.md"
(TARGET_64BIT) && 
#line 8339 "../../gcc/config/i386/i386.md"
( reload_completed)))
                    return NULL;
                  return gen_split_182 (insn, operands);

                default:
                  return NULL;
                }

            case MINUS:
              x10 = XEXP (x7, 1);
              if (GET_CODE (x10) != EQ)
                return NULL;
              x11 = XEXP (x10, 1);
              if (x11 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
                return NULL;
              x6 = XEXP (x2, 0);
              operands[0] = x6;
              x8 = XEXP (x7, 0);
              operands[1] = x8;
              x12 = XEXP (x10, 0);
              operands[3] = x12;
              if (!int_nonimmediate_operand (operands[3], E_VOIDmode))
                return NULL;
              x4 = XEXP (x3, 1);
              operands[2] = x4;
              switch (GET_MODE (operands[0]))
                {
                case E_QImode:
                  if (pattern1566 (x3, 
E_QImode) != 0
                      || !(
#line 10230 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (MINUS, QImode, operands, TARGET_APX_NDD)
   && ix86_pre_reload_split ()) && 
#line 10233 "../../gcc/config/i386/i386.md"
( 1)))
                    return NULL;
                  return gen_split_218 (insn, operands);

                case E_HImode:
                  if (pattern1566 (x3, 
E_HImode) != 0
                      || !(
#line 10230 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (MINUS, HImode, operands, TARGET_APX_NDD)
   && ix86_pre_reload_split ()) && 
#line 10233 "../../gcc/config/i386/i386.md"
( 1)))
                    return NULL;
                  return gen_split_219 (insn, operands);

                case E_SImode:
                  if (pattern1567 (x3, 
E_SImode) != 0
                      || !(
#line 10230 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (MINUS, SImode, operands, TARGET_APX_NDD)
   && ix86_pre_reload_split ()) && 
#line 10233 "../../gcc/config/i386/i386.md"
( 1)))
                    return NULL;
                  return gen_split_220 (insn, operands);

                case E_DImode:
                  if (pattern1567 (x3, 
E_DImode) != 0
                      || !((
#line 10230 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (MINUS, DImode, operands, TARGET_APX_NDD)
   && ix86_pre_reload_split ()) && 
#line 1161 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 10233 "../../gcc/config/i386/i386.md"
( 1)))
                    return NULL;
                  return gen_split_221 (insn, operands);

                default:
                  return NULL;
                }

            default:
              return NULL;
            }

        case IF_THEN_ELSE:
          x7 = XEXP (x3, 0);
          if (!bt_comparison_operator (x7, E_VOIDmode))
            return NULL;
          x10 = XEXP (x7, 1);
          if (x10 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
            return NULL;
          switch (pattern692 (x1))
            {
            case 0:
              x8 = XEXP (x7, 0);
              operands[2] = x8;
              x4 = XEXP (x3, 1);
              if (GET_CODE (x4) != PLUS)
                return NULL;
              x13 = XEXP (x4, 1);
              if (x13 != const_int_rtx[MAX_SAVED_CONST_INT + -1])
                return NULL;
              x6 = XEXP (x2, 0);
              operands[0] = x6;
              operands[1] = x7;
              switch (pattern1575 (x3))
                {
                case 0:
                  if (!(
#line 8750 "../../gcc/config/i386/i386.md"
(TARGET_CMOVE) && 
#line 8752 "../../gcc/config/i386/i386.md"
( reload_completed)))
                    return NULL;
                  return gen_split_190 (insn, operands);

                case 1:
                  if (!(
#line 8750 "../../gcc/config/i386/i386.md"
(TARGET_CMOVE) && 
#line 8752 "../../gcc/config/i386/i386.md"
( reload_completed)))
                    return NULL;
                  return gen_split_191 (insn, operands);

                case 2:
                  if (!((
#line 8750 "../../gcc/config/i386/i386.md"
(TARGET_CMOVE) && 
#line 1164 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 8752 "../../gcc/config/i386/i386.md"
( reload_completed)))
                    return NULL;
                  return gen_split_192 (insn, operands);

                default:
                  return NULL;
                }

            case 1:
              x8 = XEXP (x7, 0);
              x14 = XEXP (x8, 1);
              if (x14 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
                return NULL;
              switch (pattern1337 (x2))
                {
                case 0:
                  x15 = XEXP (x8, 2);
                  operands[2] = x15;
                  switch (pattern1682 (x3))
                    {
                    case 0:
                      if ((
#line 19189 "../../gcc/config/i386/i386.md"
((TARGET_USE_BT || optimize_function_for_size_p (cfun))
   && (CONST_INT_P (operands[2])
       ? (INTVAL (operands[2]) < GET_MODE_BITSIZE (SImode)
	  && INTVAL (operands[2])
	       >= (optimize_function_for_size_p (cfun) ? 8 : 32))
       : !memory_operand (operands[1], SImode))
   && ix86_pre_reload_split ()) && 
#line 19197 "../../gcc/config/i386/i386.md"
( 1)))
                        return gen_split_820 (insn, operands);
                      break;

                    case 1:
                      if (((
#line 19189 "../../gcc/config/i386/i386.md"
((TARGET_USE_BT || optimize_function_for_size_p (cfun))
   && (CONST_INT_P (operands[2])
       ? (INTVAL (operands[2]) < GET_MODE_BITSIZE (DImode)
	  && INTVAL (operands[2])
	       >= (optimize_function_for_size_p (cfun) ? 8 : 32))
       : !memory_operand (operands[1], DImode))
   && ix86_pre_reload_split ()) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 19197 "../../gcc/config/i386/i386.md"
( 1)))
                        return gen_split_821 (insn, operands);
                      break;

                    default:
                      break;
                    }
                  if (GET_CODE (x15) != SUBREG)
                    return NULL;
                  switch (pattern1684 (x3))
                    {
                    case 0:
                      if (!(
#line 19265 "../../gcc/config/i386/i386.md"
((TARGET_USE_BT || optimize_function_for_size_p (cfun))
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (SImode)-1))
      == GET_MODE_BITSIZE (SImode)-1
   && ix86_pre_reload_split ()) && 
#line 19270 "../../gcc/config/i386/i386.md"
( 1)))
                        return NULL;
                      return gen_split_824 (insn, operands);

                    case 1:
                      if (!(
#line 19265 "../../gcc/config/i386/i386.md"
((TARGET_USE_BT || optimize_function_for_size_p (cfun))
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (SImode)-1))
      == GET_MODE_BITSIZE (SImode)-1
   && ix86_pre_reload_split ()) && 
#line 19270 "../../gcc/config/i386/i386.md"
( 1)))
                        return NULL;
                      return gen_split_826 (insn, operands);

                    case 2:
                      if (!((
#line 19265 "../../gcc/config/i386/i386.md"
((TARGET_USE_BT || optimize_function_for_size_p (cfun))
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (SImode)-1))
      == GET_MODE_BITSIZE (SImode)-1
   && ix86_pre_reload_split ()) && 
#line 1164 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 19270 "../../gcc/config/i386/i386.md"
( 1)))
                        return NULL;
                      return gen_split_828 (insn, operands);

                    case 3:
                      if (!((
#line 19265 "../../gcc/config/i386/i386.md"
((TARGET_USE_BT || optimize_function_for_size_p (cfun))
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (DImode)-1))
      == GET_MODE_BITSIZE (DImode)-1
   && ix86_pre_reload_split ()) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 19270 "../../gcc/config/i386/i386.md"
( 1)))
                        return NULL;
                      return gen_split_825 (insn, operands);

                    case 4:
                      if (!((
#line 19265 "../../gcc/config/i386/i386.md"
((TARGET_USE_BT || optimize_function_for_size_p (cfun))
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (DImode)-1))
      == GET_MODE_BITSIZE (DImode)-1
   && ix86_pre_reload_split ()) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 19270 "../../gcc/config/i386/i386.md"
( 1)))
                        return NULL;
                      return gen_split_827 (insn, operands);

                    case 5:
                      if (!((
#line 19265 "../../gcc/config/i386/i386.md"
((TARGET_USE_BT || optimize_function_for_size_p (cfun))
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (DImode)-1))
      == GET_MODE_BITSIZE (DImode)-1
   && ix86_pre_reload_split ()) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 19270 "../../gcc/config/i386/i386.md"
( 1)))
                        return NULL;
                      return gen_split_829 (insn, operands);

                    default:
                      return NULL;
                    }

                case 1:
                  if (!(
#line 19228 "../../gcc/config/i386/i386.md"
((TARGET_USE_BT || optimize_function_for_size_p (cfun))
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (SImode)-1))
      == GET_MODE_BITSIZE (SImode)-1
   && ix86_pre_reload_split ()) && 
#line 19233 "../../gcc/config/i386/i386.md"
( 1)))
                    return NULL;
                  return gen_split_822 (insn, operands);

                case 2:
                  if (!((
#line 19228 "../../gcc/config/i386/i386.md"
((TARGET_USE_BT || optimize_function_for_size_p (cfun))
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (DImode)-1))
      == GET_MODE_BITSIZE (DImode)-1
   && ix86_pre_reload_split ()) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 19233 "../../gcc/config/i386/i386.md"
( 1)))
                    return NULL;
                  return gen_split_823 (insn, operands);

                default:
                  return NULL;
                }

            default:
              return NULL;
            }

        case COMPARE:
          return split_24 (x1, insn);

        case AND:
          return split_22 (x1, insn);

        case IOR:
          return split_21 (x1, insn);

        case XOR:
          return split_20 (x1, insn);

        case NOT:
          x7 = XEXP (x3, 0);
          if (GET_CODE (x7) != XOR
              || pattern339 (x1) != 0)
            return NULL;
          switch (GET_MODE (operands[0]))
            {
            case E_HImode:
              if (pattern1330 (x3, 
E_HImode) != 0
                  || !(
#line 13607 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (XOR, HImode, operands, TARGET_APX_NDD)) && 
#line 13609 "../../gcc/config/i386/i386.md"
( reload_completed)))
                return NULL;
              return gen_split_391 (insn, operands);

            case E_SImode:
              if (pattern1331 (x3, 
E_SImode) != 0
                  || !(
#line 13607 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (XOR, SImode, operands, TARGET_APX_NDD)) && 
#line 13609 "../../gcc/config/i386/i386.md"
( reload_completed)))
                return NULL;
              return gen_split_392 (insn, operands);

            case E_DImode:
              if (pattern1331 (x3, 
E_DImode) != 0
                  || !((
#line 13607 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (XOR, DImode, operands, TARGET_APX_NDD)) && 
#line 1164 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 13609 "../../gcc/config/i386/i386.md"
( reload_completed)))
                return NULL;
              return gen_split_393 (insn, operands);

            case E_QImode:
              if (pattern1330 (x3, 
E_QImode) != 0
                  || !(
#line 13807 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (XOR, QImode, operands, TARGET_APX_NDD)) && 
#line 13809 "../../gcc/config/i386/i386.md"
( reload_completed)))
                return NULL;
              return gen_split_399 (insn, operands);

            default:
              return NULL;
            }

        case NEG:
          return split_27 (x1, insn);

        case ABS:
          return split_29 (x1, insn);

        case ASHIFT:
          return split_26 (x1, insn);

        case LSHIFTRT:
          return split_28 (x1, insn);

        case ASHIFTRT:
          return split_31 (x1, insn);

        case ROTATE:
          return split_33 (x1, insn);

        case ROTATERT:
          return split_32 (x1, insn);

        case CONST_INT:
          if (XWINT (x3, 0) != 0L)
            return NULL;
          x6 = XEXP (x2, 0);
          if (GET_CODE (x6) != ZERO_EXTRACT
              || GET_MODE (x6) != E_HImode)
            return NULL;
          x16 = XEXP (x6, 1);
          if (x16 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
            return NULL;
          x5 = XVECEXP (x1, 0, 1);
          if (pattern227 (x5, 
E_CCmode, 
17) != 0)
            return NULL;
          x17 = XEXP (x6, 0);
          operands[0] = x17;
          x18 = XEXP (x6, 2);
          operands[1] = x18;
          if (!register_operand (operands[1], E_QImode))
            return NULL;
          switch (GET_MODE (operands[0]))
            {
            case E_QImode:
              if (nonimmediate_operand (operands[0], E_QImode)
                  && (
#line 18963 "../../gcc/config/i386/i386.md"
(TARGET_USE_BT && ix86_pre_reload_split ()) && 
#line 18965 "../../gcc/config/i386/i386.md"
( MEM_P (operands[0]))))
                return gen_split_810 (insn, operands);
              if (!register_operand (operands[0], E_QImode)
                  || !
#line 18987 "../../gcc/config/i386/i386.md"
(TARGET_USE_BT && ix86_pre_reload_split ()))
                return NULL;
              return gen_split_812 (insn, operands);

            case E_HImode:
              if (nonimmediate_operand (operands[0], E_HImode)
                  && (
#line 18963 "../../gcc/config/i386/i386.md"
(TARGET_USE_BT && ix86_pre_reload_split ()) && 
#line 18965 "../../gcc/config/i386/i386.md"
( MEM_P (operands[0]))))
                return gen_split_811 (insn, operands);
              if (!register_operand (operands[0], E_HImode)
                  || !
#line 18987 "../../gcc/config/i386/i386.md"
(TARGET_USE_BT && ix86_pre_reload_split ()))
                return NULL;
              return gen_split_813 (insn, operands);

            default:
              return NULL;
            }

        case CTZ:
          switch (pattern405 (x1))
            {
            case 0:
              if (!
#line 21069 "../../gcc/config/i386/i386.md"
((TARGET_BMI || TARGET_CPU_P (GENERIC))
   && TARGET_AVOID_FALSE_DEP_FOR_BMI && epilogue_completed
   && optimize_function_for_speed_p (cfun)
   && !reg_mentioned_p (operands[0], operands[1])))
                return NULL;
              return gen_split_873 (insn, operands);

            case 1:
              if (!(
#line 21069 "../../gcc/config/i386/i386.md"
((TARGET_BMI || TARGET_CPU_P (GENERIC))
   && TARGET_AVOID_FALSE_DEP_FOR_BMI && epilogue_completed
   && optimize_function_for_speed_p (cfun)
   && !reg_mentioned_p (operands[0], operands[1])) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return NULL;
              return gen_split_874 (insn, operands);

            default:
              return NULL;
            }

        case SIGN_EXTEND:
          if (GET_MODE (x3) != E_DImode)
            return NULL;
          x5 = XVECEXP (x1, 0, 1);
          if (pattern351 (x5) != 0)
            return NULL;
          x6 = XEXP (x2, 0);
          operands[0] = x6;
          if (!register_operand (operands[0], E_DImode))
            return NULL;
          x7 = XEXP (x3, 0);
          if (GET_MODE (x7) != E_SImode)
            return NULL;
          switch (GET_CODE (x7))
            {
            case CTZ:
              x8 = XEXP (x7, 0);
              operands[1] = x8;
              if (!nonimmediate_operand (operands[1], E_SImode)
                  || !
#line 21175 "../../gcc/config/i386/i386.md"
((TARGET_BMI || TARGET_CPU_P (GENERIC))
   && TARGET_AVOID_FALSE_DEP_FOR_BMI && epilogue_completed
   && optimize_function_for_speed_p (cfun)
   && !reg_mentioned_p (operands[0], operands[1])))
                return NULL;
              return gen_split_876 (insn, operands);

            case XOR:
              x8 = XEXP (x7, 0);
              if (GET_CODE (x8) != MINUS
                  || GET_MODE (x8) != E_SImode)
                return NULL;
              x19 = XEXP (x8, 0);
              if (x19 != const_int_rtx[MAX_SAVED_CONST_INT + 31])
                return NULL;
              x14 = XEXP (x8, 1);
              if (GET_CODE (x14) != CLZ
                  || GET_MODE (x14) != E_SImode)
                return NULL;
              x10 = XEXP (x7, 1);
              if (x10 != const_int_rtx[MAX_SAVED_CONST_INT + 31])
                return NULL;
              x20 = XEXP (x14, 0);
              operands[1] = x20;
              if (!nonimmediate_operand (operands[1], E_SImode)
                  || !(
#line 21336 "../../gcc/config/i386/i386.md"
(!TARGET_LZCNT && TARGET_64BIT && ix86_pre_reload_split ()) && 
#line 21338 "../../gcc/config/i386/i386.md"
( 1)))
                return NULL;
              return gen_split_879 (insn, operands);

            default:
              return NULL;
            }

        case CLZ:
          switch (pattern405 (x1))
            {
            case 0:
              if (!(
#line 21507 "../../gcc/config/i386/i386.md"
(TARGET_LZCNT) && 
#line 21509 "../../gcc/config/i386/i386.md"
( TARGET_AVOID_FALSE_DEP_FOR_BMI && epilogue_completed
   && optimize_function_for_speed_p (cfun)
   && !reg_mentioned_p (operands[0], operands[1]))))
                return NULL;
              return gen_split_886 (insn, operands);

            case 1:
              if (!((
#line 21507 "../../gcc/config/i386/i386.md"
(TARGET_LZCNT) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 21509 "../../gcc/config/i386/i386.md"
( TARGET_AVOID_FALSE_DEP_FOR_BMI && epilogue_completed
   && optimize_function_for_speed_p (cfun)
   && !reg_mentioned_p (operands[0], operands[1]))))
                return NULL;
              return gen_split_887 (insn, operands);

            default:
              return NULL;
            }

        case UNSPEC:
          if (XVECLEN (x3, 0) != 1)
            return NULL;
          x5 = XVECEXP (x1, 0, 1);
          if (pattern227 (x5, 
E_CCmode, 
17) != 0)
            return NULL;
          x6 = XEXP (x2, 0);
          operands[0] = x6;
          x21 = XVECEXP (x3, 0, 0);
          operands[1] = x21;
          switch (XINT (x3, 1))
            {
            case 97:
              switch (pattern1339 (x3))
                {
                case 0:
                  if (!(
#line 21631 "../../gcc/config/i386/i386.md"
(TARGET_BMI) && 
#line 21671 "../../gcc/config/i386/i386.md"
( TARGET_AVOID_FALSE_DEP_FOR_BMI && epilogue_completed
   && optimize_function_for_speed_p (cfun)
   && !reg_mentioned_p (operands[0], operands[1]))))
                    return NULL;
                  return gen_split_894 (insn, operands);

                case 1:
                  if (!((((
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT) && 
#line 21631 "../../gcc/config/i386/i386.md"
(TARGET_BMI)) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 21631 "../../gcc/config/i386/i386.md"
(TARGET_BMI)) && 
#line 21671 "../../gcc/config/i386/i386.md"
( TARGET_AVOID_FALSE_DEP_FOR_BMI && epilogue_completed
   && optimize_function_for_speed_p (cfun)
   && !reg_mentioned_p (operands[0], operands[1]))))
                    return NULL;
                  return gen_split_896 (insn, operands);

                default:
                  return NULL;
                }

            case 96:
              switch (pattern1339 (x3))
                {
                case 0:
                  if (!(
#line 21632 "../../gcc/config/i386/i386.md"
(TARGET_LZCNT) && 
#line 21671 "../../gcc/config/i386/i386.md"
( TARGET_AVOID_FALSE_DEP_FOR_BMI && epilogue_completed
   && optimize_function_for_speed_p (cfun)
   && !reg_mentioned_p (operands[0], operands[1]))))
                    return NULL;
                  return gen_split_895 (insn, operands);

                case 1:
                  if (!((((
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT) && 
#line 21632 "../../gcc/config/i386/i386.md"
(TARGET_LZCNT)) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 21632 "../../gcc/config/i386/i386.md"
(TARGET_LZCNT)) && 
#line 21671 "../../gcc/config/i386/i386.md"
( TARGET_AVOID_FALSE_DEP_FOR_BMI && epilogue_completed
   && optimize_function_for_speed_p (cfun)
   && !reg_mentioned_p (operands[0], operands[1]))))
                    return NULL;
                  return gen_split_897 (insn, operands);

                default:
                  return NULL;
                }

            default:
              return NULL;
            }

        case POPCOUNT:
          x5 = XVECEXP (x1, 0, 1);
          if (pattern351 (x5) != 0)
            return NULL;
          x6 = XEXP (x2, 0);
          operands[0] = x6;
          x7 = XEXP (x3, 0);
          switch (GET_CODE (x7))
            {
            case REG:
            case SUBREG:
            case MEM:
              operands[1] = x7;
              switch (pattern404 (x3))
                {
                case 0:
                  if (!(
#line 22170 "../../gcc/config/i386/i386.md"
(TARGET_POPCNT) && 
#line 22178 "../../gcc/config/i386/i386.md"
( TARGET_AVOID_FALSE_DEP_FOR_BMI && epilogue_completed
   && optimize_function_for_speed_p (cfun)
   && !reg_mentioned_p (operands[0], operands[1]))))
                    return NULL;
                  return gen_split_900 (insn, operands);

                case 1:
                  if (!((
#line 22170 "../../gcc/config/i386/i386.md"
(TARGET_POPCNT) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 22178 "../../gcc/config/i386/i386.md"
( TARGET_AVOID_FALSE_DEP_FOR_BMI && epilogue_completed
   && optimize_function_for_speed_p (cfun)
   && !reg_mentioned_p (operands[0], operands[1]))))
                    return NULL;
                  return gen_split_901 (insn, operands);

                default:
                  return NULL;
                }

            case ZERO_EXTEND:
              if (pattern1176 (x3, 
E_HImode, 
E_SImode) != 0
                  || !(
#line 22340 "../../gcc/config/i386/i386.md"
(TARGET_POPCNT
   && ix86_pre_reload_split ()) && 
#line 22343 "../../gcc/config/i386/i386.md"
( 1)))
                return NULL;
              return gen_split_904 (insn, operands);

            default:
              return NULL;
            }

        default:
          return NULL;
        }

    case SIMPLE_RETURN:
      x5 = XVECEXP (x1, 0, 1);
      if (GET_CODE (x5) != USE)
        return NULL;
      x22 = XEXP (x5, 0);
      operands[0] = x22;
      if (!const_int_operand (operands[0], E_SImode)
          || !(
#line 20664 "../../gcc/config/i386/i386.md"
(reload_completed) && 
#line 20666 "../../gcc/config/i386/i386.md"
( cfun->machine->function_return_type != indirect_branch_keep)))
        return NULL;
      return gen_split_868 (insn, operands);

    default:
      return NULL;
    }
}

 rtx_insn *
split_67 (rtx x1 ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
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
          return gen_split_1668 (insn, operands);

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
          return gen_split_1695 (insn, operands);

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
          return gen_split_1722 (insn, operands);

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
          return gen_split_1749 (insn, operands);

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
          return gen_split_1776 (insn, operands);

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
          return gen_split_1803 (insn, operands);

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
          return gen_split_1830 (insn, operands);

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
          return gen_split_1857 (insn, operands);

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
          return gen_split_1884 (insn, operands);

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
          return gen_split_1911 (insn, operands);

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
          return gen_split_1938 (insn, operands);

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
          return gen_split_1965 (insn, operands);

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
          return gen_split_1671 (insn, operands);

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
          return gen_split_1698 (insn, operands);

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
          return gen_split_1725 (insn, operands);

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
          return gen_split_1752 (insn, operands);

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
          return gen_split_1779 (insn, operands);

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
          return gen_split_1806 (insn, operands);

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
          return gen_split_1833 (insn, operands);

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
          return gen_split_1860 (insn, operands);

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
          return gen_split_1887 (insn, operands);

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
          return gen_split_1914 (insn, operands);

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
          return gen_split_1941 (insn, operands);

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
          return gen_split_1968 (insn, operands);

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
          return gen_split_1674 (insn, operands);

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
          return gen_split_1701 (insn, operands);

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
          return gen_split_1728 (insn, operands);

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
          return gen_split_1755 (insn, operands);

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
          return gen_split_1782 (insn, operands);

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
          return gen_split_1809 (insn, operands);

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
          return gen_split_1836 (insn, operands);

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
          return gen_split_1863 (insn, operands);

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
          return gen_split_1890 (insn, operands);

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
          return gen_split_1917 (insn, operands);

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
          return gen_split_1944 (insn, operands);

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
          return gen_split_1971 (insn, operands);

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
          return gen_split_2952 (insn, operands);

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
          return gen_split_2961 (insn, operands);

        case 38:
          if (!(
#line 13946 "../../gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 13950 "../../gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_2970 (insn, operands);

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
          return gen_split_2979 (insn, operands);

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
          return gen_split_2988 (insn, operands);

        case 41:
          if (!(
#line 13946 "../../gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 13950 "../../gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_2997 (insn, operands);

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
          return gen_split_3006 (insn, operands);

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
          return gen_split_3015 (insn, operands);

        case 44:
          if (!(
#line 13946 "../../gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 13950 "../../gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_3024 (insn, operands);

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
          return gen_split_3033 (insn, operands);

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
          return gen_split_3042 (insn, operands);

        case 47:
          if (!(
#line 13946 "../../gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 13950 "../../gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_3051 (insn, operands);

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
          return gen_split_2316 (insn, operands);

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
          return gen_split_2343 (insn, operands);

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
          return gen_split_2370 (insn, operands);

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
          return gen_split_2397 (insn, operands);

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
          return gen_split_2424 (insn, operands);

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
          return gen_split_2451 (insn, operands);

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
          return gen_split_2478 (insn, operands);

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
          return gen_split_2505 (insn, operands);

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
          return gen_split_2532 (insn, operands);

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
          return gen_split_2559 (insn, operands);

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
          return gen_split_2586 (insn, operands);

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
          return gen_split_2613 (insn, operands);

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
          return gen_split_2319 (insn, operands);

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
          return gen_split_2346 (insn, operands);

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
          return gen_split_2373 (insn, operands);

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
          return gen_split_2400 (insn, operands);

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
          return gen_split_2427 (insn, operands);

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
          return gen_split_2454 (insn, operands);

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
          return gen_split_2481 (insn, operands);

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
          return gen_split_2508 (insn, operands);

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
          return gen_split_2535 (insn, operands);

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
          return gen_split_2562 (insn, operands);

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
          return gen_split_2589 (insn, operands);

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
          return gen_split_2616 (insn, operands);

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
          return gen_split_2322 (insn, operands);

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
          return gen_split_2349 (insn, operands);

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
          return gen_split_2376 (insn, operands);

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
          return gen_split_2403 (insn, operands);

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
          return gen_split_2430 (insn, operands);

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
          return gen_split_2457 (insn, operands);

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
          return gen_split_2484 (insn, operands);

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
          return gen_split_2511 (insn, operands);

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
          return gen_split_2538 (insn, operands);

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
          return gen_split_2565 (insn, operands);

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
          return gen_split_2592 (insn, operands);

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
          return gen_split_2619 (insn, operands);

        default:
          return NULL;
        }

    default:
      return NULL;
    }
}

 rtx_insn *
split_76 (rtx x1 ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
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
              return gen_split_1973 (insn, operands);

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
              return gen_split_2000 (insn, operands);

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
              return gen_split_2027 (insn, operands);

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
              return gen_split_2054 (insn, operands);

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
              return gen_split_2081 (insn, operands);

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
              return gen_split_2108 (insn, operands);

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
              return gen_split_2135 (insn, operands);

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
              return gen_split_2162 (insn, operands);

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
              return gen_split_2189 (insn, operands);

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
              return gen_split_2216 (insn, operands);

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
              return gen_split_2243 (insn, operands);

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
              return gen_split_2270 (insn, operands);

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
              return gen_split_1976 (insn, operands);

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
              return gen_split_2003 (insn, operands);

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
              return gen_split_2030 (insn, operands);

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
              return gen_split_2057 (insn, operands);

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
              return gen_split_2084 (insn, operands);

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
              return gen_split_2111 (insn, operands);

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
              return gen_split_2138 (insn, operands);

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
              return gen_split_2165 (insn, operands);

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
              return gen_split_2192 (insn, operands);

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
              return gen_split_2219 (insn, operands);

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
              return gen_split_2246 (insn, operands);

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
              return gen_split_2273 (insn, operands);

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
              return gen_split_1979 (insn, operands);

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
              return gen_split_2006 (insn, operands);

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
              return gen_split_2033 (insn, operands);

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
              return gen_split_2060 (insn, operands);

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
              return gen_split_2087 (insn, operands);

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
              return gen_split_2114 (insn, operands);

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
              return gen_split_2141 (insn, operands);

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
              return gen_split_2168 (insn, operands);

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
              return gen_split_2195 (insn, operands);

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
              return gen_split_2222 (insn, operands);

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
              return gen_split_2249 (insn, operands);

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
              return gen_split_2276 (insn, operands);

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
              return gen_split_3053 (insn, operands);

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
              return gen_split_3062 (insn, operands);

            case 38:
              if (!(
#line 13946 "../../gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 13950 "../../gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_3071 (insn, operands);

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
              return gen_split_3080 (insn, operands);

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
              return gen_split_3089 (insn, operands);

            case 41:
              if (!(
#line 13946 "../../gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 13950 "../../gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_3098 (insn, operands);

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
              return gen_split_3107 (insn, operands);

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
              return gen_split_3116 (insn, operands);

            case 44:
              if (!(
#line 13946 "../../gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 13950 "../../gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_3125 (insn, operands);

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
              return gen_split_3134 (insn, operands);

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
              return gen_split_3143 (insn, operands);

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
              return gen_split_3152 (insn, operands);

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
              return gen_split_2621 (insn, operands);

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
              return gen_split_2648 (insn, operands);

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
              return gen_split_2675 (insn, operands);

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
              return gen_split_2702 (insn, operands);

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
              return gen_split_2729 (insn, operands);

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
              return gen_split_2756 (insn, operands);

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
              return gen_split_2783 (insn, operands);

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
              return gen_split_2810 (insn, operands);

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
              return gen_split_2837 (insn, operands);

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
              return gen_split_2864 (insn, operands);

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
              return gen_split_2891 (insn, operands);

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
              return gen_split_2918 (insn, operands);

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
              return gen_split_2624 (insn, operands);

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
              return gen_split_2651 (insn, operands);

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
              return gen_split_2678 (insn, operands);

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
              return gen_split_2705 (insn, operands);

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
              return gen_split_2732 (insn, operands);

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
              return gen_split_2759 (insn, operands);

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
              return gen_split_2786 (insn, operands);

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
              return gen_split_2813 (insn, operands);

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
              return gen_split_2840 (insn, operands);

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
              return gen_split_2867 (insn, operands);

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
              return gen_split_2894 (insn, operands);

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
              return gen_split_2921 (insn, operands);

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
              return gen_split_2627 (insn, operands);

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
              return gen_split_2654 (insn, operands);

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
              return gen_split_2681 (insn, operands);

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
              return gen_split_2708 (insn, operands);

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
              return gen_split_2735 (insn, operands);

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
              return gen_split_2762 (insn, operands);

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
              return gen_split_2789 (insn, operands);

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
              return gen_split_2816 (insn, operands);

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
              return gen_split_2843 (insn, operands);

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
              return gen_split_2870 (insn, operands);

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
              return gen_split_2897 (insn, operands);

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
              return gen_split_2924 (insn, operands);

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
              return gen_split_1982 (insn, operands);

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
              return gen_split_2009 (insn, operands);

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
              return gen_split_2036 (insn, operands);

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
              return gen_split_2063 (insn, operands);

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
              return gen_split_2090 (insn, operands);

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
              return gen_split_2117 (insn, operands);

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
              return gen_split_2144 (insn, operands);

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
              return gen_split_2171 (insn, operands);

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
              return gen_split_2198 (insn, operands);

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
              return gen_split_2225 (insn, operands);

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
              return gen_split_2252 (insn, operands);

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
              return gen_split_2279 (insn, operands);

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
              return gen_split_1985 (insn, operands);

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
              return gen_split_2012 (insn, operands);

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
              return gen_split_2039 (insn, operands);

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
              return gen_split_2066 (insn, operands);

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
              return gen_split_2093 (insn, operands);

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
              return gen_split_2120 (insn, operands);

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
              return gen_split_2147 (insn, operands);

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
              return gen_split_2174 (insn, operands);

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
              return gen_split_2201 (insn, operands);

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
              return gen_split_2228 (insn, operands);

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
              return gen_split_2255 (insn, operands);

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
              return gen_split_2282 (insn, operands);

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
              return gen_split_1988 (insn, operands);

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
              return gen_split_2015 (insn, operands);

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
              return gen_split_2042 (insn, operands);

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
              return gen_split_2069 (insn, operands);

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
              return gen_split_2096 (insn, operands);

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
              return gen_split_2123 (insn, operands);

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
              return gen_split_2150 (insn, operands);

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
              return gen_split_2177 (insn, operands);

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
              return gen_split_2204 (insn, operands);

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
              return gen_split_2231 (insn, operands);

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
              return gen_split_2258 (insn, operands);

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
              return gen_split_2285 (insn, operands);

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
              return gen_split_3056 (insn, operands);

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
              return gen_split_3065 (insn, operands);

            case 38:
              if (!(
#line 13946 "../../gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 13950 "../../gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_3074 (insn, operands);

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
              return gen_split_3083 (insn, operands);

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
              return gen_split_3092 (insn, operands);

            case 41:
              if (!(
#line 13946 "../../gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 13950 "../../gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_3101 (insn, operands);

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
              return gen_split_3110 (insn, operands);

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
              return gen_split_3119 (insn, operands);

            case 44:
              if (!(
#line 13946 "../../gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 13950 "../../gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_3128 (insn, operands);

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
              return gen_split_3137 (insn, operands);

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
              return gen_split_3146 (insn, operands);

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
              return gen_split_3155 (insn, operands);

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
              return gen_split_2630 (insn, operands);

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
              return gen_split_2657 (insn, operands);

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
              return gen_split_2684 (insn, operands);

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
              return gen_split_2711 (insn, operands);

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
              return gen_split_2738 (insn, operands);

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
              return gen_split_2765 (insn, operands);

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
              return gen_split_2792 (insn, operands);

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
              return gen_split_2819 (insn, operands);

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
              return gen_split_2846 (insn, operands);

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
              return gen_split_2873 (insn, operands);

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
              return gen_split_2900 (insn, operands);

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
              return gen_split_2927 (insn, operands);

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
              return gen_split_2633 (insn, operands);

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
              return gen_split_2660 (insn, operands);

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
              return gen_split_2687 (insn, operands);

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
              return gen_split_2714 (insn, operands);

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
              return gen_split_2741 (insn, operands);

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
              return gen_split_2768 (insn, operands);

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
              return gen_split_2795 (insn, operands);

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
              return gen_split_2822 (insn, operands);

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
              return gen_split_2849 (insn, operands);

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
              return gen_split_2876 (insn, operands);

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
              return gen_split_2903 (insn, operands);

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
              return gen_split_2930 (insn, operands);

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
              return gen_split_2636 (insn, operands);

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
              return gen_split_2663 (insn, operands);

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
              return gen_split_2690 (insn, operands);

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
              return gen_split_2717 (insn, operands);

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
              return gen_split_2744 (insn, operands);

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
              return gen_split_2771 (insn, operands);

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
              return gen_split_2798 (insn, operands);

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
              return gen_split_2825 (insn, operands);

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
              return gen_split_2852 (insn, operands);

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
              return gen_split_2879 (insn, operands);

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
              return gen_split_2906 (insn, operands);

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
              return gen_split_2933 (insn, operands);

            default:
              return NULL;
            }

        default:
          return NULL;
        }

    case XOR:
      return split_70 (x1, insn);

    default:
      return NULL;
    }
}
