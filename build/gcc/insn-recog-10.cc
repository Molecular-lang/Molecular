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
pattern9 (rtx x1, int *pnum_clobbers)
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
    case E_SFmode:
      return pattern5 (x3, 
E_SFmode); /* [-1, 0] */

    case E_DFmode:
      if (pattern5 (x3, 
E_DFmode) != 0)
        return -1;
      return 1;

    case E_HFmode:
      if (pattern5 (x3, 
E_HFmode) != 0)
        return -1;
      return 2;

    case E_TImode:
      if (pnum_clobbers == NULL
          || pattern6 (x3, 
E_TImode) != 0)
        return -1;
      return 3;

    case E_QImode:
      if (pnum_clobbers == NULL
          || pattern6 (x3, 
E_QImode) != 0)
        return -1;
      return 4;

    case E_HImode:
      if (pnum_clobbers == NULL
          || pattern6 (x3, 
E_HImode) != 0)
        return -1;
      return 5;

    case E_V8QImode:
      if (pattern7 (x3, 
E_V8QImode) != 0)
        return -1;
      return 6;

    case E_V2SImode:
      if (pattern7 (x3, 
E_V2SImode) != 0)
        return -1;
      return 7;

    case E_V4HImode:
      if (pattern8 (x3, 
E_V4HImode) != 0)
        return -1;
      return 8;

    case E_V4QImode:
      if (pattern7 (x3, 
E_V4QImode) != 0)
        return -1;
      return 9;

    case E_V2QImode:
      if (pattern7 (x3, 
E_V2QImode) != 0)
        return -1;
      return 10;

    case E_V2HImode:
      if (pattern7 (x3, 
E_V2HImode) != 0)
        return -1;
      return 11;

    default:
      return -1;
    }
}

int
pattern28 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10;
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
      x5 = XEXP (x4, 1);
      if (GET_CODE (x5) != PARALLEL)
        return -1;
      x6 = XEXP (x4, 0);
      operands[1] = x6;
      switch (XVECLEN (x5, 0))
        {
        case 4:
          x7 = XVECEXP (x5, 0, 0);
          if (x7 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
            return -1;
          x8 = XVECEXP (x5, 0, 1);
          if (x8 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
            return -1;
          x9 = XVECEXP (x5, 0, 2);
          if (x9 != const_int_rtx[MAX_SAVED_CONST_INT + 2])
            return -1;
          x10 = XVECEXP (x5, 0, 3);
          if (x10 != const_int_rtx[MAX_SAVED_CONST_INT + 3]
              || GET_MODE (x4) != E_V4HFmode
              || !register_operand (operands[1], E_V8HFmode))
            return -1;
          res = pattern27 (x3);
          if (res >= 0)
            return res + 9; /* [9, 10] */
          return -1;

        case 2:
          x7 = XVECEXP (x5, 0, 0);
          if (x7 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
            return -1;
          x8 = XVECEXP (x5, 0, 1);
          if (x8 != const_int_rtx[MAX_SAVED_CONST_INT + 1]
              || !register_operand (operands[0], E_V2DImode)
              || GET_MODE (x3) != E_V2DImode)
            return -1;
          switch (GET_MODE (x4))
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
pattern50 (rtx x1)
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
    case E_V64QImode:
      return pattern25 (x1, 
E_V64QImode); /* [-1, 0] */

    case E_V32QImode:
      if (pattern25 (x1, 
E_V32QImode) != 0)
        return -1;
      return 1;

    case E_V16QImode:
      if (pattern25 (x1, 
E_V16QImode) != 0)
        return -1;
      return 2;

    case E_V32HImode:
      if (pattern25 (x1, 
E_V32HImode) != 0)
        return -1;
      return 3;

    case E_V16HImode:
      if (pattern25 (x1, 
E_V16HImode) != 0)
        return -1;
      return 4;

    case E_V8HImode:
      if (pattern25 (x1, 
E_V8HImode) != 0)
        return -1;
      return 5;

    default:
      return -1;
    }
}

int
pattern59 (rtx x1, int *pnum_clobbers)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4;
  int res ATTRIBUTE_UNUSED;
  if (pnum_clobbers == NULL)
    return -1;
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) != E_HImode)
    return -1;
  x3 = XEXP (x1, 0);
  operands[0] = x3;
  if (!nonimmediate_operand (operands[0], E_HImode))
    return -1;
  x4 = XVECEXP (x2, 0, 0);
  operands[1] = x4;
  if (!register_operand (operands[1], E_XFmode))
    return -1;
  return 0;
}

int
pattern66 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  switch (GET_MODE (operands[0]))
    {
    case E_HImode:
      if (!register_operand (operands[0], E_HImode)
          || GET_MODE (x1) != E_HImode)
        return -1;
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

    case E_QImode:
      if (!register_operand (operands[0], E_QImode)
          || GET_MODE (x1) != E_QImode)
        return -1;
      switch (GET_MODE (operands[1]))
        {
        case E_V8HImode:
          if (!register_operand (operands[1], E_V8HImode)
              || !nonimmediate_operand (operands[2], E_V8HImode))
            return -1;
          return 3;

        case E_V8SImode:
          if (!register_operand (operands[1], E_V8SImode)
              || !nonimmediate_operand (operands[2], E_V8SImode))
            return -1;
          return 4;

        case E_V4SImode:
          if (!register_operand (operands[1], E_V4SImode)
              || !nonimmediate_operand (operands[2], E_V4SImode))
            return -1;
          return 5;

        case E_V8DImode:
          if (!register_operand (operands[1], E_V8DImode)
              || !nonimmediate_operand (operands[2], E_V8DImode))
            return -1;
          return 6;

        case E_V4DImode:
          if (!register_operand (operands[1], E_V4DImode)
              || !nonimmediate_operand (operands[2], E_V4DImode))
            return -1;
          return 7;

        case E_V2DImode:
          if (!register_operand (operands[1], E_V2DImode)
              || !nonimmediate_operand (operands[2], E_V2DImode))
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
pattern99 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  operands[1] = x3;
  x4 = XEXP (x1, 2);
  operands[2] = x4;
  if (!register_operand (operands[2], E_QImode))
    return -1;
  x5 = XEXP (x1, 1);
  if (!rtx_equal_p (x5, operands[0]))
    return -1;
  switch (GET_MODE (operands[0]))
    {
    case E_V2QImode:
      return pattern96 (x1, 
E_V2QImode); /* [-1, 0] */

    case E_V4QImode:
      res = pattern97 (x1, 
E_V4QImode);
      if (res >= 0)
        return res + 1; /* [1, 2] */
      return -1;

    case E_V8QImode:
      if (!memory_operand (operands[0], E_V8QImode)
          || GET_MODE (x1) != E_V8QImode
          || GET_MODE (x2) != E_V8QImode)
        return -1;
      res = pattern98 ();
      if (res >= 0)
        return res + 3; /* [3, 5] */
      return -1;

    case E_V4HImode:
      res = pattern97 (x1, 
E_V4HImode);
      if (res >= 0)
        return res + 6; /* [6, 7] */
      return -1;

    case E_V2HImode:
      if (pattern96 (x1, 
E_V2HImode) != 0)
        return -1;
      return 8;

    case E_V2SImode:
      if (pattern96 (x1, 
E_V2SImode) != 0)
        return -1;
      return 9;

    default:
      return -1;
    }
}

int
pattern114 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  operands[1] = x2;
  switch (GET_MODE (operands[0]))
    {
    case E_DImode:
      if (!nonimmediate_operand (operands[0], E_DImode)
          || GET_MODE (x1) != E_DImode
          || !nonimmediate_operand (operands[1], E_DImode))
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
pattern123 (rtx x1, machine_mode i1)
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
    case E_DFmode:
      if (!nonimmediate_operand (operands[1], E_V2DFmode))
        return -1;
      return 0;

    case E_SFmode:
      if (!nonimmediate_operand (operands[1], E_V4SFmode))
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern129 (rtx x1, machine_mode i1, machine_mode i2)
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
pattern140 (rtx x1, machine_mode i1, machine_mode i2)
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
      || !nonimm_or_0_operand (operands[3], i1)
      || !register_operand (operands[4], i2))
    return -1;
  return 0;
}

int
pattern144 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], E_V16HImode)
      || GET_MODE (x1) != E_V16HImode)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != E_V16HImode
      || !nonimmediate_operand (operands[1], i1)
      || !nonimm_or_0_operand (operands[2], E_V16HImode)
      || !register_operand (operands[3], E_HImode))
    return -1;
  return 0;
}

int
pattern147 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != i1
      || !memory_operand (operands[1], i2)
      || !nonimm_or_0_operand (operands[2], i1)
      || !register_operand (operands[3], E_QImode))
    return -1;
  return 0;
}

int
pattern150 (rtx x1)
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
      return pattern149 (x3, 
E_V32HFmode); /* [-1, 0] */

    case E_V16HFmode:
      if (pattern149 (x3, 
E_V16HFmode) != 0)
        return -1;
      return 1;

    case E_V8HFmode:
      if (pattern149 (x3, 
E_V8HFmode) != 0)
        return -1;
      return 2;

    case E_V16SFmode:
      if (pattern149 (x3, 
E_V16SFmode) != 0)
        return -1;
      return 3;

    case E_V8SFmode:
      if (pattern149 (x3, 
E_V8SFmode) != 0)
        return -1;
      return 4;

    case E_V4SFmode:
      if (pattern149 (x3, 
E_V4SFmode) != 0)
        return -1;
      return 5;

    case E_V8DFmode:
      if (pattern149 (x3, 
E_V8DFmode) != 0)
        return -1;
      return 6;

    case E_V4DFmode:
      if (pattern149 (x3, 
E_V4DFmode) != 0)
        return -1;
      return 7;

    case E_V2DFmode:
      if (pattern149 (x3, 
E_V2DFmode) != 0)
        return -1;
      return 8;

    default:
      return -1;
    }
}

int
pattern162 (rtx x1, machine_mode i1, machine_mode i2, machine_mode i3)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i3)
      || GET_MODE (x1) != i3
      || !register_operand (operands[1], i2)
      || !nonimmediate_operand (operands[2], i1))
    return -1;
  return 0;
}

int
pattern168 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) != E_V4SImode)
    return -1;
  x3 = XEXP (x1, 0);
  operands[0] = x3;
  return pattern167 (x2); /* [-1, 0] */
}

int
pattern173 (rtx x1)
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
    case E_V32HImode:
      return pattern169 (x3, 
E_V32HImode); /* [-1, 0] */

    case E_V16SImode:
      if (pattern169 (x3, 
E_V16SImode) != 0)
        return -1;
      return 1;

    case E_V8DImode:
      if (pattern169 (x3, 
E_V8DImode) != 0)
        return -1;
      return 2;

    case E_V16HImode:
      if (pattern169 (x3, 
E_V16HImode) != 0)
        return -1;
      return 3;

    case E_V8SImode:
      if (pattern169 (x3, 
E_V8SImode) != 0)
        return -1;
      return 4;

    case E_V4DImode:
      if (pattern169 (x3, 
E_V4DImode) != 0)
        return -1;
      return 5;

    case E_V8HImode:
      if (pattern169 (x3, 
E_V8HImode) != 0)
        return -1;
      return 6;

    case E_V4SImode:
      if (pattern169 (x3, 
E_V4SImode) != 0)
        return -1;
      return 7;

    case E_V2DImode:
      if (pattern169 (x3, 
E_V2DImode) != 0)
        return -1;
      return 8;

    default:
      return -1;
    }
}

int
pattern186 (rtx x1, machine_mode i1, machine_mode i2)
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
      || !vector_operand (operands[2], i2))
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
pattern192 ()
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  switch (GET_MODE (operands[0]))
    {
    case E_V32HFmode:
      if (!register_operand (operands[0], E_V32HFmode)
          || !ternlog_operand (operands[1], E_V32HFmode))
        return -1;
      return 0;

    case E_V16HFmode:
      if (!register_operand (operands[0], E_V16HFmode)
          || !ternlog_operand (operands[1], E_V16HFmode))
        return -1;
      return 1;

    case E_V8HFmode:
      if (!register_operand (operands[0], E_V8HFmode)
          || !ternlog_operand (operands[1], E_V8HFmode))
        return -1;
      return 2;

    case E_V32BFmode:
      if (!register_operand (operands[0], E_V32BFmode)
          || !ternlog_operand (operands[1], E_V32BFmode))
        return -1;
      return 3;

    case E_V16BFmode:
      if (!register_operand (operands[0], E_V16BFmode)
          || !ternlog_operand (operands[1], E_V16BFmode))
        return -1;
      return 4;

    case E_V8BFmode:
      if (!register_operand (operands[0], E_V8BFmode)
          || !ternlog_operand (operands[1], E_V8BFmode))
        return -1;
      return 5;

    case E_V16SFmode:
      if (!register_operand (operands[0], E_V16SFmode)
          || !ternlog_operand (operands[1], E_V16SFmode))
        return -1;
      return 6;

    case E_V8SFmode:
      if (!register_operand (operands[0], E_V8SFmode)
          || !ternlog_operand (operands[1], E_V8SFmode))
        return -1;
      return 7;

    case E_V4SFmode:
      if (!register_operand (operands[0], E_V4SFmode)
          || !ternlog_operand (operands[1], E_V4SFmode))
        return -1;
      return 8;

    case E_V8DFmode:
      if (!register_operand (operands[0], E_V8DFmode)
          || !ternlog_operand (operands[1], E_V8DFmode))
        return -1;
      return 9;

    case E_V4DFmode:
      if (!register_operand (operands[0], E_V4DFmode)
          || !ternlog_operand (operands[1], E_V4DFmode))
        return -1;
      return 10;

    case E_V2DFmode:
      if (!register_operand (operands[0], E_V2DFmode)
          || !ternlog_operand (operands[1], E_V2DFmode))
        return -1;
      return 11;

    default:
      return -1;
    }
}

int
pattern201 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10;
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
  switch (GET_CODE (x6))
    {
    case REG:
    case SUBREG:
    case MEM:
      return pattern199 (x4); /* [-1, 7] */

    case ASHIFT:
      x7 = XEXP (x4, 0);
      operands[0] = x7;
      x8 = XEXP (x6, 0);
      operands[1] = x8;
      x9 = XEXP (x6, 1);
      operands[2] = x9;
      if (!const_int_operand (operands[2], E_QImode))
        return -1;
      x10 = XEXP (x5, 1);
      operands[3] = x10;
      if (!const_int_operand (operands[3], E_QImode))
        return -1;
      switch (GET_MODE (operands[0]))
        {
        case E_DImode:
          if (pattern200 (x5, 
E_DImode) != 0)
            return -1;
          return 8;

        case E_TImode:
          if (pattern200 (x5, 
E_TImode) != 0)
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
pattern214 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1
      || !register_operand (operands[1], i1)
      || !nonimmediate_operand (operands[2], i1)
      || !scratch_operand (operands[3], i1))
    return -1;
  return 0;
}

int
pattern218 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i2)
      || GET_MODE (x1) != i2
      || !register_operand (operands[1], i2)
      || !vector_operand (operands[2], i1))
    return -1;
  return 0;
}

int
pattern221 (rtx x1)
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
  x4 = XVECEXP (x1, 0, 2);
  if (GET_CODE (x4) != CLOBBER)
    return -1;
  return pattern220 (x1); /* [-1, 1] */
}

int
pattern229 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  operands[1] = x2;
  x3 = XEXP (x1, 1);
  operands[2] = x3;
  if (!register_operand (operands[2], E_QImode))
    return -1;
  return pattern125 (x1); /* [-1, 1] */
}

int
pattern234 (rtx x1)
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
    case E_QImode:
      return pattern233 (x1, 
E_QImode); /* [-1, 0] */

    case E_HImode:
      if (pattern233 (x1, 
E_HImode) != 0)
        return -1;
      return 1;

    case E_SImode:
      if (pattern233 (x1, 
E_SImode) != 0)
        return -1;
      return 2;

    case E_DImode:
      if (pattern233 (x1, 
E_DImode) != 0)
        return -1;
      return 3;

    default:
      return -1;
    }
}

int
pattern245 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  if (GET_CODE (x1) != VEC_SELECT)
    return -1;
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) != PARALLEL
      || XVECLEN (x2, 0) != 1)
    return -1;
  x3 = XVECEXP (x2, 0, 0);
  if (x3 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
    return -1;
  return 0;
}

int
pattern250 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case E_HImode:
      x3 = XEXP (x1, 1);
      if (GET_MODE (x3) != E_HImode
          || !extract_operator (operands[3], E_HImode))
        return -1;
      return 0;

    case E_SImode:
      x3 = XEXP (x1, 1);
      if (GET_MODE (x3) != E_SImode
          || !extract_operator (operands[3], E_SImode))
        return -1;
      return 1;

    case E_DImode:
      x3 = XEXP (x1, 1);
      if (GET_MODE (x3) != E_DImode
          || !extract_operator (operands[3], E_DImode))
        return -1;
      return 2;

    default:
      return -1;
    }
}

int
pattern260 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1)
    return -1;
  return pattern259 (); /* [-1, 2] */
}

int
pattern265 (rtx x1, int *pnum_clobbers)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  switch (GET_CODE (x2))
    {
    case SUBREG:
      if (pnum_clobbers == NULL
          || maybe_ne (SUBREG_BYTE (x2), 0)
          || GET_MODE (x2) != E_QImode)
        return -1;
      x3 = XEXP (x2, 0);
      switch (GET_CODE (x3))
        {
        case AND:
          x4 = XEXP (x3, 0);
          operands[2] = x4;
          if (!int248_register_operand (operands[2], E_VOIDmode))
            return -1;
          return pattern264 (x1); /* [-1, 1] */

        case PLUS:
          x4 = XEXP (x3, 0);
          operands[2] = x4;
          if (!int_nonimmediate_operand (operands[2], E_VOIDmode))
            return -1;
          res = pattern264 (x1);
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
          res = pattern2 (x1);
          if (res >= 0)
            return res + 4; /* [4, 5] */
          return -1;

        default:
          return -1;
        }

    case CONST_INT:
      return 6;

    default:
      return -1;
    }
}

int
pattern286 (rtx x1, int *pnum_clobbers)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  if (pnum_clobbers == NULL)
    return -1;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  if (XWINT (x3, 0) != 1L)
    return -1;
  return pattern285 (x1); /* [-1, 2] */
}

int
pattern292 (rtx x1)
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
      return pattern291 (x1, 
E_DImode, 
E_SImode); /* [-1, 0] */

    case E_DImode:
      if (pattern291 (x1, 
E_TImode, 
E_DImode) != 0)
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern299 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  operands[1] = x2;
  x3 = XVECEXP (x1, 0, 1);
  operands[2] = x3;
  return pattern298 (x1); /* [-1, 2] */
}

int
pattern305 (rtx x1, int i1, machine_mode i2, machine_mode i3)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  int res ATTRIBUTE_UNUSED;
  if (GET_MODE (x1) != i3)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_CODE (x2) != VEC_SELECT
      || GET_MODE (x2) != i2)
    return -1;
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) != PARALLEL
      || XVECLEN (x3, 0) != 2)
    return -1;
  x4 = XVECEXP (x3, 0, 0);
  if (x4 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
    return -1;
  x5 = XVECEXP (x3, 0, 1);
  if (x5 != const_int_rtx[MAX_SAVED_CONST_INT + i1])
    return -1;
  return 0;
}

int
pattern313 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1)
    return -1;
  x2 = XEXP (x1, 2);
  if (GET_MODE (x2) != i2
      || !nonimmediate_operand (operands[3], i1)
      || !nonimmediate_operand (operands[4], i1))
    return -1;
  return 0;
}

int
pattern317 (rtx x1, machine_mode i1)
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
pattern324 (rtx x1)
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
          || !vector_operand (operands[1], E_V16SFmode))
        return -1;
      return 0;

    case E_V8SImode:
      if (!register_operand (operands[0], E_V8SImode)
          || GET_MODE (x1) != E_V8SImode
          || !vector_operand (operands[1], E_V8SFmode))
        return -1;
      return 1;

    case E_V4SImode:
      if (!register_operand (operands[0], E_V4SImode)
          || GET_MODE (x1) != E_V4SImode
          || !vector_operand (operands[1], E_V4SFmode))
        return -1;
      return 2;

    default:
      return -1;
    }
}

int
pattern328 (rtx x1, machine_mode i1)
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
      || !register_operand (operands[3], i1))
    return -1;
  return 0;
}

int
pattern329 (rtx x1)
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
    case E_V8HImode:
      return pattern328 (x1, 
E_V8HImode); /* [-1, 0] */

    case E_V4SImode:
      if (pattern328 (x1, 
E_V4SImode) != 0)
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern333 (rtx x1, rtx_code i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12, x13, x14, x15, x16, x17;
  rtx x18, x19, x20, x21, x22, x23, x24, x25;
  rtx x26, x27, x28, x29, x30, x31, x32, x33;
  rtx x34, x35;
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
  x9 = XEXP (x1, 1);
  if (GET_CODE (x9) != PLUS)
    return -1;
  x10 = XEXP (x9, 0);
  if (GET_CODE (x10) != i1)
    return -1;
  x11 = XEXP (x10, 0);
  if (GET_CODE (x11) != VEC_SELECT)
    return -1;
  x12 = XEXP (x11, 1);
  if (GET_CODE (x12) != PARALLEL)
    return -1;
  x13 = XEXP (x9, 1);
  if (GET_CODE (x13) != i1)
    return -1;
  x14 = XEXP (x13, 0);
  if (GET_CODE (x14) != VEC_SELECT)
    return -1;
  x15 = XEXP (x14, 1);
  if (GET_CODE (x15) != PARALLEL)
    return -1;
  x16 = XEXP (x4, 0);
  operands[1] = x16;
  x17 = XEXP (x7, 0);
  if (!rtx_equal_p (x17, operands[1]))
    return -1;
  x18 = XEXP (x11, 0);
  if (!rtx_equal_p (x18, operands[1]))
    return -1;
  x19 = XEXP (x14, 0);
  if (!rtx_equal_p (x19, operands[1]))
    return -1;
  switch (XVECLEN (x5, 0))
    {
    case 4:
      x20 = XVECEXP (x5, 0, 0);
      if (x20 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
        return -1;
      x21 = XVECEXP (x5, 0, 1);
      if (x21 != const_int_rtx[MAX_SAVED_CONST_INT + 4])
        return -1;
      x22 = XVECEXP (x5, 0, 2);
      if (x22 != const_int_rtx[MAX_SAVED_CONST_INT + 8])
        return -1;
      x23 = XVECEXP (x5, 0, 3);
      if (x23 != const_int_rtx[MAX_SAVED_CONST_INT + 12]
          || XVECLEN (x8, 0) != 4)
        return -1;
      x24 = XVECEXP (x8, 0, 0);
      if (x24 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
        return -1;
      x25 = XVECEXP (x8, 0, 1);
      if (x25 != const_int_rtx[MAX_SAVED_CONST_INT + 5])
        return -1;
      x26 = XVECEXP (x8, 0, 2);
      if (x26 != const_int_rtx[MAX_SAVED_CONST_INT + 9])
        return -1;
      x27 = XVECEXP (x8, 0, 3);
      if (x27 != const_int_rtx[MAX_SAVED_CONST_INT + 13]
          || XVECLEN (x12, 0) != 4)
        return -1;
      x28 = XVECEXP (x12, 0, 0);
      if (x28 != const_int_rtx[MAX_SAVED_CONST_INT + 2])
        return -1;
      x29 = XVECEXP (x12, 0, 1);
      if (x29 != const_int_rtx[MAX_SAVED_CONST_INT + 6])
        return -1;
      x30 = XVECEXP (x12, 0, 2);
      if (x30 != const_int_rtx[MAX_SAVED_CONST_INT + 10])
        return -1;
      x31 = XVECEXP (x12, 0, 3);
      if (x31 != const_int_rtx[MAX_SAVED_CONST_INT + 14]
          || XVECLEN (x15, 0) != 4)
        return -1;
      x32 = XVECEXP (x15, 0, 0);
      if (x32 != const_int_rtx[MAX_SAVED_CONST_INT + 3])
        return -1;
      x33 = XVECEXP (x15, 0, 1);
      if (x33 != const_int_rtx[MAX_SAVED_CONST_INT + 7])
        return -1;
      x34 = XVECEXP (x15, 0, 2);
      if (x34 != const_int_rtx[MAX_SAVED_CONST_INT + 11])
        return -1;
      x35 = XVECEXP (x15, 0, 3);
      if (x35 != const_int_rtx[MAX_SAVED_CONST_INT + 15]
          || pattern332 (x1, 
E_V4QImode, 
E_V4SImode, 
E_V16QImode) != 0)
        return -1;
      return 0;

    case 2:
      x20 = XVECEXP (x5, 0, 0);
      if (x20 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
        return -1;
      x21 = XVECEXP (x5, 0, 1);
      if (x21 != const_int_rtx[MAX_SAVED_CONST_INT + 4]
          || XVECLEN (x8, 0) != 2)
        return -1;
      x24 = XVECEXP (x8, 0, 0);
      if (x24 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
        return -1;
      x25 = XVECEXP (x8, 0, 1);
      if (x25 != const_int_rtx[MAX_SAVED_CONST_INT + 5]
          || XVECLEN (x12, 0) != 2)
        return -1;
      x28 = XVECEXP (x12, 0, 0);
      if (x28 != const_int_rtx[MAX_SAVED_CONST_INT + 2])
        return -1;
      x29 = XVECEXP (x12, 0, 1);
      if (x29 != const_int_rtx[MAX_SAVED_CONST_INT + 6]
          || XVECLEN (x15, 0) != 2)
        return -1;
      x32 = XVECEXP (x15, 0, 0);
      if (x32 != const_int_rtx[MAX_SAVED_CONST_INT + 3])
        return -1;
      x33 = XVECEXP (x15, 0, 1);
      if (x33 != const_int_rtx[MAX_SAVED_CONST_INT + 7]
          || pattern332 (x1, 
E_V2HImode, 
E_V2DImode, 
E_V8HImode) != 0)
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern372 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) != E_DImode)
    return -1;
  x5 = XEXP (x4, 1);
  if (x5 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
    return -1;
  x6 = XEXP (x2, 0);
  if (GET_CODE (x6) != ZERO_EXTRACT
      || GET_MODE (x6) != E_DImode)
    return -1;
  x7 = XEXP (x6, 1);
  if (x7 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
    return -1;
  x8 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x8) != CLOBBER)
    return -1;
  x9 = XEXP (x8, 0);
  if (GET_CODE (x9) != REG
      || REGNO (x9) != 17
      || GET_MODE (x9) != E_CCmode)
    return -1;
  x10 = XEXP (x6, 0);
  operands[0] = x10;
  if (!nonimmediate_operand (operands[0], E_DImode))
    return -1;
  x11 = XEXP (x6, 2);
  operands[1] = x11;
  if (!const_0_to_63_operand (operands[1], E_QImode))
    return -1;
  return 0;
}

int
pattern386 (rtx x1)
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
  x4 = XVECEXP (x1, 0, 0);
  x5 = XEXP (x4, 0);
  operands[0] = x5;
  x6 = XEXP (x4, 1);
  x7 = XEXP (x6, 0);
  operands[1] = x7;
  if (!register_operand (operands[1], E_DImode))
    return -1;
  x8 = XEXP (x2, 0);
  operands[2] = x8;
  if (!memory_operand (operands[2], E_DImode))
    return -1;
  x9 = XEXP (x3, 0);
  operands[3] = x9;
  if (!scratch_operand (operands[3], E_V4SImode))
    return -1;
  x10 = XVECEXP (x1, 0, 3);
  x11 = XEXP (x10, 0);
  operands[4] = x11;
  if (!scratch_operand (operands[4], E_V4SImode))
    return -1;
  return pattern385 (x6); /* [-1, 2] */
}

int
pattern399 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  operands[2] = x4;
  switch (GET_MODE (operands[0]))
    {
    case E_DImode:
      return pattern398 (x1, 
E_SImode, 
E_DImode); /* [-1, 0] */

    case E_TImode:
      if (pattern398 (x1, 
E_DImode, 
E_TImode) != 0)
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern408 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) != UNSPEC
      || XVECLEN (x3, 0) != 1
      || XINT (x3, 1) != 147)
    return -1;
  x4 = XVECEXP (x3, 0, 0);
  if (x4 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
    return -1;
  x5 = XEXP (x1, 1);
  if (GET_CODE (x5) != UNSPEC
      || XVECLEN (x5, 0) != 1
      || XINT (x5, 1) != 147)
    return -1;
  x6 = XVECEXP (x5, 0, 0);
  if (x6 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
    return -1;
  return 0;
}

int
pattern414 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) != REG
      || REGNO (x3) != 7)
    return -1;
  x4 = XEXP (x1, 0);
  if (GET_CODE (x4) != REG
      || REGNO (x4) != 7)
    return -1;
  return 0;
}

int
pattern417 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], E_HImode)
      || GET_MODE (x1) != E_HImode)
    return -1;
  x2 = XVECEXP (x1, 0, 0);
  switch (GET_MODE (x2))
    {
    case E_V16QImode:
      if (!vector_operand (operands[1], E_V16QImode)
          || !vector_operand (operands[2], E_V16QImode)
          || !const0_operand (operands[3], E_V16QImode))
        return -1;
      return 0;

    case E_V16HImode:
      if (!vector_operand (operands[1], E_V16HImode)
          || !vector_operand (operands[2], E_V16HImode)
          || !const0_operand (operands[3], E_V16HImode))
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern427 (rtx x1)
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
    case E_QImode:
      return pattern426 (x1, 
E_QImode); /* [-1, 0] */

    case E_HImode:
      if (pattern426 (x1, 
E_HImode) != 0)
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern439 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  switch (GET_MODE (operands[0]))
    {
    case E_DImode:
      if (!nonimmediate_operand (operands[0], E_DImode)
          || GET_MODE (x1) != E_DImode)
        return -1;
      x2 = XEXP (x1, 0);
      if (GET_MODE (x2) != E_DImode
          || !nonimmediate_operand (operands[4], E_DImode)
          || !const_0_to_63_operand (operands[2], E_QImode))
        return -1;
      x3 = XEXP (x1, 1);
      if (GET_MODE (x3) != E_DImode
          || !nonimmediate_operand (operands[1], E_DImode)
          || !const_0_to_63_operand (operands[3], E_QImode))
        return -1;
      return 0;

    case E_SImode:
      if (!nonimmediate_operand (operands[0], E_SImode)
          || GET_MODE (x1) != E_SImode)
        return -1;
      x2 = XEXP (x1, 0);
      if (GET_MODE (x2) != E_SImode
          || !nonimmediate_operand (operands[4], E_SImode)
          || !const_0_to_31_operand (operands[2], E_QImode))
        return -1;
      x3 = XEXP (x1, 1);
      if (GET_MODE (x3) != E_SImode
          || !nonimmediate_operand (operands[1], E_SImode)
          || !const_0_to_31_operand (operands[3], E_QImode))
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern457 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  if (!rtx_equal_p (x2, operands[1]))
    return -1;
  switch (GET_MODE (operands[0]))
    {
    case E_V8HFmode:
      return pattern456 (x1, 
E_V8HFmode); /* [-1, 0] */

    case E_V4SFmode:
      if (pattern456 (x1, 
E_V4SFmode) != 0)
        return -1;
      return 1;

    case E_V2DFmode:
      if (pattern456 (x1, 
E_V2DFmode) != 0)
        return -1;
      return 2;

    default:
      return -1;
    }
}

int
pattern467 (rtx x1, machine_mode i1, machine_mode i2)
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
      || !nonimm_or_0_operand (operands[3], i1)
      || !register_operand (operands[4], i2))
    return -1;
  return 0;
}

int
pattern471 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8;
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
    case CONST_INT:
    case CONST_DOUBLE:
    case CONST_VECTOR:
      operands[4] = x6;
      x7 = XEXP (x1, 2);
      if (GET_CODE (x7) != UNSPEC
          || XVECLEN (x7, 0) != 1
          || XINT (x7, 1) != 223)
        return -1;
      x8 = XVECEXP (x7, 0, 0);
      operands[5] = x8;
      switch (GET_MODE (operands[0]))
        {
        case E_V32HFmode:
          if (!register_operand (operands[0], E_V32HFmode)
              || GET_MODE (x1) != E_V32HFmode
              || GET_MODE (x2) != E_V32HFmode
              || !vector_operand (operands[1], E_V32HFmode)
              || !vector_operand (operands[2], E_V32HFmode)
              || !vector_operand (operands[3], E_V32HFmode)
              || !const0_operand (operands[4], E_V32HFmode)
              || GET_MODE (x7) != E_SImode
              || !register_operand (operands[5], E_HImode))
            return -1;
          return 0;

        case E_V16HFmode:
          if (pattern469 (x1, 
E_HImode, 
E_V16HFmode) != 0)
            return -1;
          return 1;

        case E_V8HFmode:
          if (pattern469 (x1, 
E_QImode, 
E_V8HFmode) != 0)
            return -1;
          return 2;

        default:
          return -1;
        }

    case REG:
    case SUBREG:
    case MEM:
      x7 = XEXP (x1, 2);
      switch (GET_CODE (x7))
        {
        case UNSPEC:
          if (XVECLEN (x7, 0) != 1
              || XINT (x7, 1) != 223)
            return -1;
          x8 = XVECEXP (x7, 0, 0);
          operands[4] = x8;
          if (!rtx_equal_p (x6, operands[1]))
            return -1;
          switch (GET_MODE (operands[0]))
            {
            case E_V32HFmode:
              if (!register_operand (operands[0], E_V32HFmode)
                  || GET_MODE (x1) != E_V32HFmode
                  || GET_MODE (x2) != E_V32HFmode
                  || !vector_operand (operands[1], E_V32HFmode)
                  || !vector_operand (operands[2], E_V32HFmode)
                  || !vector_operand (operands[3], E_V32HFmode)
                  || GET_MODE (x7) != E_SImode
                  || !register_operand (operands[4], E_HImode))
                return -1;
              return 3;

            case E_V16HFmode:
              if (pattern470 (x1, 
E_HImode, 
E_V16HFmode) != 0)
                return -1;
              return 4;

            case E_V8HFmode:
              if (pattern470 (x1, 
E_QImode, 
E_V8HFmode) != 0)
                return -1;
              return 5;

            default:
              return -1;
            }

        case CONST_INT:
          if (XWINT (x7, 0) != 3L
              || !register_operand (operands[0], E_V8HFmode)
              || GET_MODE (x1) != E_V8HFmode
              || GET_MODE (x2) != E_V8HFmode
              || !vector_operand (operands[1], E_V8HFmode)
              || !vector_operand (operands[2], E_V8HFmode)
              || !vector_operand (operands[3], E_V8HFmode)
              || !rtx_equal_p (x6, operands[2]))
            return -1;
          return 6;

        default:
          return -1;
        }

    default:
      return -1;
    }
}

int
pattern505 (rtx x1, machine_mode i1, machine_mode i2)
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
pattern514 (rtx x1, machine_mode i1)
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
pattern516 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], E_V16HFmode)
      || GET_MODE (x1) != E_V16HFmode)
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
pattern520 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], E_V16SImode)
      || GET_MODE (x1) != E_V16SImode)
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
pattern527 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12, x13, x14, x15, x16, x17;
  rtx x18, x19, x20, x21, x22;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  if (maybe_ne (SUBREG_BYTE (x2), 0))
    return -1;
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) != UNSPEC
      || XVECLEN (x3, 0) != 2
      || XINT (x3, 1) != 151)
    return -1;
  x4 = XVECEXP (x3, 0, 0);
  operands[1] = x4;
  x5 = XVECEXP (x3, 0, 1);
  operands[2] = x5;
  x6 = XEXP (x1, 1);
  switch (XVECLEN (x6, 0))
    {
    case 16:
      x7 = XVECEXP (x6, 0, 0);
      if (x7 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
        return -1;
      x8 = XVECEXP (x6, 0, 1);
      if (x8 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
        return -1;
      x9 = XVECEXP (x6, 0, 2);
      if (x9 != const_int_rtx[MAX_SAVED_CONST_INT + 2])
        return -1;
      x10 = XVECEXP (x6, 0, 3);
      if (x10 != const_int_rtx[MAX_SAVED_CONST_INT + 3])
        return -1;
      x11 = XVECEXP (x6, 0, 4);
      if (x11 != const_int_rtx[MAX_SAVED_CONST_INT + 4])
        return -1;
      x12 = XVECEXP (x6, 0, 5);
      if (x12 != const_int_rtx[MAX_SAVED_CONST_INT + 5])
        return -1;
      x13 = XVECEXP (x6, 0, 6);
      if (x13 != const_int_rtx[MAX_SAVED_CONST_INT + 6])
        return -1;
      x14 = XVECEXP (x6, 0, 7);
      if (x14 != const_int_rtx[MAX_SAVED_CONST_INT + 7])
        return -1;
      x15 = XVECEXP (x6, 0, 8);
      if (x15 != const_int_rtx[MAX_SAVED_CONST_INT + 8])
        return -1;
      x16 = XVECEXP (x6, 0, 9);
      if (x16 != const_int_rtx[MAX_SAVED_CONST_INT + 9])
        return -1;
      x17 = XVECEXP (x6, 0, 10);
      if (x17 != const_int_rtx[MAX_SAVED_CONST_INT + 10])
        return -1;
      x18 = XVECEXP (x6, 0, 11);
      if (x18 != const_int_rtx[MAX_SAVED_CONST_INT + 11])
        return -1;
      x19 = XVECEXP (x6, 0, 12);
      if (x19 != const_int_rtx[MAX_SAVED_CONST_INT + 12])
        return -1;
      x20 = XVECEXP (x6, 0, 13);
      if (x20 != const_int_rtx[MAX_SAVED_CONST_INT + 13])
        return -1;
      x21 = XVECEXP (x6, 0, 14);
      if (x21 != const_int_rtx[MAX_SAVED_CONST_INT + 14])
        return -1;
      x22 = XVECEXP (x6, 0, 15);
      if (x22 != const_int_rtx[MAX_SAVED_CONST_INT + 15]
          || pattern526 (x1, 
E_V32HImode, 
E_V32HFmode, 
E_V16HFmode) != 0)
        return -1;
      return 0;

    case 8:
      x7 = XVECEXP (x6, 0, 0);
      if (x7 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
        return -1;
      x8 = XVECEXP (x6, 0, 1);
      if (x8 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
        return -1;
      x9 = XVECEXP (x6, 0, 2);
      if (x9 != const_int_rtx[MAX_SAVED_CONST_INT + 2])
        return -1;
      x10 = XVECEXP (x6, 0, 3);
      if (x10 != const_int_rtx[MAX_SAVED_CONST_INT + 3])
        return -1;
      x11 = XVECEXP (x6, 0, 4);
      if (x11 != const_int_rtx[MAX_SAVED_CONST_INT + 4])
        return -1;
      x12 = XVECEXP (x6, 0, 5);
      if (x12 != const_int_rtx[MAX_SAVED_CONST_INT + 5])
        return -1;
      x13 = XVECEXP (x6, 0, 6);
      if (x13 != const_int_rtx[MAX_SAVED_CONST_INT + 6])
        return -1;
      x14 = XVECEXP (x6, 0, 7);
      if (x14 != const_int_rtx[MAX_SAVED_CONST_INT + 7]
          || pattern526 (x1, 
E_V16HImode, 
E_V16HFmode, 
E_V8HFmode) != 0)
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern553 (rtx x1, int i1, int i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x2) != SET)
    return -1;
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) != UNSPEC
      || XVECLEN (x3, 0) != i2
      || XINT (x3, 1) != i1
      || GET_MODE (x3) != E_CCmode)
    return -1;
  x4 = XEXP (x2, 0);
  if (GET_CODE (x4) != REG
      || REGNO (x4) != 17
      || GET_MODE (x4) != E_CCmode)
    return -1;
  x5 = XVECEXP (x1, 0, 0);
  x6 = XEXP (x5, 0);
  operands[0] = x6;
  return 0;
}

int
pattern558 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  x4 = XEXP (x3, 1);
  operands[2] = x4;
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

        case UNSPEC:
          return 1;

        default:
          return -1;
        }

    case STRICT_LOW_PART:
      res = pattern557 (x1);
      if (res >= 0)
        return res + 2; /* [2, 3] */
      return -1;

    default:
      return -1;
    }
}

int
pattern570 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  x4 = XEXP (x3, 1);
  operands[2] = x4;
  x5 = XEXP (x2, 0);
  switch (GET_CODE (x5))
    {
    case STRICT_LOW_PART:
      return pattern557 (x1); /* [-1, 1] */

    case REG:
    case SUBREG:
    case MEM:
      operands[0] = x5;
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
            case E_DImode:
              if (!nonimmediate_operand (operands[0], E_DImode)
                  || GET_MODE (x3) != E_DImode
                  || !nonimmediate_operand (operands[1], E_DImode))
                return -1;
              return 2;

            case E_TImode:
              if (pattern564 (x3, 
E_TImode) != 0)
                return -1;
              return 3;

            case E_HImode:
              if (pattern565 (x3, 
E_HImode) != 0)
                return -1;
              return 4;

            case E_SImode:
              if (pattern566 (x3) != 0)
                return -1;
              return 5;

            case E_V4QImode:
              if (pattern567 (x3, 
E_V4QImode) != 0)
                return -1;
              return 6;

            case E_V2QImode:
              if (pattern567 (x3, 
E_V2QImode) != 0)
                return -1;
              return 7;

            case E_V2HImode:
              if (pattern567 (x3, 
E_V2HImode) != 0)
                return -1;
              return 8;

            default:
              return -1;
            }

        case UNSPEC:
          res = pattern569 (x1);
          if (res >= 0)
            return res + 9; /* [9, 12] */
          return -1;

        default:
          return -1;
        }

    default:
      return -1;
    }
}

int
pattern593 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 1);
  x3 = XEXP (x2, 0);
  operands[2] = x3;
  x4 = XVECEXP (x1, 0, 2);
  operands[3] = x4;
  switch (GET_MODE (operands[0]))
    {
    case E_V32HFmode:
      return pattern592 (x1, 
E_V32HFmode, 
E_V16SFmode); /* [-1, 0] */

    case E_V16HFmode:
      if (pattern592 (x1, 
E_V16HFmode, 
E_V8SFmode) != 0)
        return -1;
      return 1;

    case E_V8HFmode:
      if (pattern592 (x1, 
E_V8HFmode, 
E_V4SFmode) != 0)
        return -1;
      return 2;

    default:
      return -1;
    }
}

int
pattern600 (rtx x1, int i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  if (GET_CODE (x1) != PARALLEL
      || XVECLEN (x1, 0) != 3)
    return -1;
  x2 = XVECEXP (x1, 0, 0);
  if (GET_CODE (x2) != SET)
    return -1;
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) != UNSPEC_VOLATILE
      || XVECLEN (x3, 0) != i1)
    return -1;
  return 0;
}

int
pattern604 (rtx x1, machine_mode i1)
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
      || !const_0_to_3_operand (operands[2], E_VOIDmode)
      || !const_int_operand (operands[3], E_VOIDmode))
    return -1;
  return 0;
}

int
pattern610 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 1);
  x4 = XVECEXP (x3, 0, 0);
  if (x4 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
    return -1;
  x5 = XVECEXP (x3, 0, 1);
  if (x5 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
    return -1;
  switch (GET_MODE (operands[0]))
    {
    case E_V2SImode:
      if (!register_operand (operands[0], E_V2SImode)
          || GET_MODE (x1) != E_V2SImode)
        return -1;
      switch (GET_MODE (x2))
        {
        case E_V2HImode:
          if (!register_operand (operands[1], E_V4HImode))
            return -1;
          return 0;

        case E_V2QImode:
          if (!register_operand (operands[1], E_V4QImode))
            return -1;
          return 1;

        default:
          return -1;
        }

    case E_V2HImode:
      if (pattern608 (x1, 
E_V4QImode, 
E_V2QImode, 
E_V2HImode) != 0)
        return -1;
      return 2;

    default:
      return -1;
    }
}

int
pattern627 (rtx x1, machine_mode i1, machine_mode i2)
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
pattern634 (rtx x1, machine_mode i1, machine_mode i2, machine_mode i3)
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
    case E_V32HImode:
      return pattern633 (x1, 
E_V32HImode, 
E_SImode, 
i1); /* [-1, 0] */

    case E_V16HImode:
      if (pattern633 (x1, 
E_V16HImode, 
E_HImode, 
i2) != 0)
        return -1;
      return 1;

    case E_V8HImode:
      if (pattern633 (x1, 
E_V8HImode, 
E_QImode, 
i3) != 0)
        return -1;
      return 2;

    default:
      return -1;
    }
}

int
pattern641 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], E_V8SImode)
      || GET_MODE (x1) != E_V8SImode)
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
pattern645 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], E_V2DImode)
      || GET_MODE (x1) != E_V2DImode)
    return -1;
  switch (GET_MODE (operands[1]))
    {
    case E_V8HFmode:
      if (!nonimmediate_operand (operands[1], E_V8HFmode))
        return -1;
      return 0;

    case E_V2DFmode:
      if (!vector_operand (operands[1], E_V2DFmode))
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
pattern653 (rtx x1, machine_mode i1)
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

    default:
      return -1;
    }
}

int
pattern660 (rtx x1)
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
      return pattern659 (x1, 
E_V32QImode); /* [-1, 0] */

    case E_V16QImode:
      if (pattern659 (x1, 
E_V16QImode) != 0)
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern668 (rtx x1, int i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (GET_CODE (x1) != VEC_SELECT
      || GET_MODE (x1) != i2)
    return -1;
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) != PARALLEL
      || XVECLEN (x2, 0) != i1)
    return -1;
  return 0;
}

int
pattern672 (rtx x1, int i1, int i2, int i3)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  if (x2 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
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
pattern680 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  x5 = XEXP (x4, 0);
  x6 = XEXP (x5, 0);
  operands[1] = x6;
  if (!memory_operand (operands[1], E_SImode))
    return -1;
  x7 = XEXP (x2, 1);
  switch (XVECLEN (x7, 0))
    {
    case 4:
      return pattern677 (x1, 
E_V16QImode, 
E_V4QImode); /* [-1, 1] */

    case 2:
      if (pattern678 (x1, 
E_V2HImode, 
E_V8HImode) != 0)
        return -1;
      return 2;

    default:
      return -1;
    }
}

int
pattern687 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  x4 = XEXP (x3, 1);
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
pattern696 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], E_V2SFmode)
      || GET_MODE (x1) != E_V2SFmode
      || !register_operand (operands[1], E_V2SFmode)
      || !nonimmediate_operand (operands[2], E_V2SFmode))
    return -1;
  return 0;
}

int
pattern703 (rtx x1)
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
  return pattern404 (x5); /* [-1, 1] */
}

int
pattern708 (rtx x1, int i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) != E_V2DImode)
    return -1;
  x4 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x4) != SET)
    return -1;
  x5 = XEXP (x4, 1);
  if (GET_CODE (x5) != UNSPEC_VOLATILE
      || XVECLEN (x5, 0) != 2
      || XINT (x5, 1) != i1
      || GET_MODE (x5) != E_CCZmode)
    return -1;
  x6 = XEXP (x4, 0);
  if (GET_CODE (x6) != REG
      || REGNO (x6) != 17
      || GET_MODE (x6) != E_CCZmode
      || !register_operand (operands[0], E_V2DImode))
    return -1;
  x7 = XVECEXP (x3, 0, 0);
  operands[1] = x7;
  if (!register_operand (operands[1], E_V2DImode))
    return -1;
  x8 = XVECEXP (x3, 0, 1);
  operands[2] = x8;
  if (!memory_operand (operands[2], E_BLKmode))
    return -1;
  x9 = XVECEXP (x5, 0, 0);
  if (!rtx_equal_p (x9, operands[1]))
    return -1;
  x10 = XVECEXP (x5, 0, 1);
  if (!rtx_equal_p (x10, operands[2]))
    return -1;
  return 0;
}

int
pattern718 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  x4 = XEXP (x3, 1);
  if (GET_MODE (x4) != i2)
    return -1;
  x5 = XEXP (x4, 0);
  if (GET_MODE (x5) != i1
      || !nonimmediate_operand (operands[0], i1))
    return -1;
  x6 = XVECEXP (x1, 0, 1);
  x7 = XEXP (x6, 1);
  if (GET_MODE (x7) != i1)
    return -1;
  return 0;
}

int
pattern725 (rtx x1, rtx_code i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) != i1)
    return -1;
  x4 = XEXP (x1, 1);
  if (XVECLEN (x4, 0) < 1)
    return -1;
  operands[5] = x4;
  if (!addsub_vs_parallel (operands[5], E_VOIDmode))
    return -1;
  operands[7] = x1;
  x5 = XEXP (x2, 0);
  x6 = XEXP (x5, 0);
  operands[1] = x6;
  x7 = XEXP (x5, 1);
  operands[2] = x7;
  x8 = XEXP (x3, 0);
  operands[3] = x8;
  x9 = XEXP (x3, 1);
  operands[4] = x9;
  x10 = XVECEXP (x4, 0, 0);
  operands[6] = x10;
  if (!const_int_operand (operands[6], E_VOIDmode))
    return -1;
  switch (GET_MODE (operands[0]))
    {
    case E_V8SFmode:
      return 0;

    case E_V4SFmode:
      return 1;

    case E_V4DFmode:
      return 2;

    case E_V2DFmode:
      return 3;

    default:
      return -1;
    }
}

int
pattern736 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1
      || !register_operand (operands[1], i1)
      || !register_operand (operands[2], i1))
    return -1;
  x2 = XVECEXP (x1, 0, 2);
  if (GET_MODE (x2) != i1)
    return -1;
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) != i1
      || !register_operand (operands[3], i1)
      || !nonmemory_operand (operands[4], i1)
      || !const0_operand (operands[5], i1))
    return -1;
  return 0;
}

int
pattern747 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || !binary_fp_operator (operands[3], i1)
      || GET_MODE (x1) != i1
      || !register_operand (operands[2], i1))
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
pattern756 (rtx x1, machine_mode i1)
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
pattern764 (rtx x1, machine_mode i1, machine_mode i2)
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
pattern769 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10;
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
      || GET_MODE (x2) != E_V8HFmode)
    return -1;
  x6 = XVECEXP (x3, 0, 0);
  operands[1] = x6;
  if (!nonimmediate_operand (operands[1], E_V8HFmode))
    return -1;
  x7 = XVECEXP (x3, 0, 1);
  operands[2] = x7;
  if (!vector_operand (operands[2], E_V8HFmode))
    return -1;
  x8 = XEXP (x2, 1);
  operands[3] = x8;
  if (!nonimm_or_0_operand (operands[3], E_V8HFmode))
    return -1;
  x9 = XVECEXP (x4, 0, 0);
  operands[4] = x9;
  if (!register_operand (operands[4], E_QImode))
    return -1;
  x10 = XEXP (x1, 1);
  if (!rtx_equal_p (x10, operands[1]))
    return -1;
  return 0;
}

int
pattern785 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i2)
      || GET_MODE (x1) != i2
      || !register_operand (operands[1], i2)
      || !nonimmediate_operand (operands[2], i1))
    return -1;
  return 0;
}

int
pattern793 (rtx x1, machine_mode i1, machine_mode i2, machine_mode i3)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i3)
      || GET_MODE (x1) != i3)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != i2
      || !vector_operand (operands[2], i1))
    return -1;
  x3 = XEXP (x1, 1);
  if (GET_MODE (x3) != i2
      || !register_operand (operands[1], i1))
    return -1;
  return 0;
}

int
pattern805 (rtx x1, machine_mode i1, machine_mode i2)
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
      || !movq_parallel (operands[3], E_VOIDmode))
    return -1;
  return 0;
}

int
pattern814 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (GET_MODE (x1) != E_SImode)
    return -1;
  x2 = XVECEXP (x1, 0, 3);
  if (GET_CODE (x2) != REG
      || REGNO (x2) != 7
      || GET_MODE (x2) != E_SImode)
    return -1;
  return 0;
}

int
pattern818 (rtx x1, int *pnum_clobbers)
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
      if (pnum_clobbers == NULL
          || XVECLEN (x1, 0) != 1
          || XINT (x1, 1) != 38)
        return -1;
      x3 = XVECEXP (x1, 0, 0);
      operands[2] = x3;
      if (!register_operand (operands[2], E_DImode))
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern824 (rtx x1, int *pnum_clobbers)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 1);
  x3 = XEXP (x2, 0);
  operands[2] = x3;
  if (!memory_operand (operands[2], E_HImode))
    return -1;
  x4 = XVECEXP (x1, 0, 2);
  x5 = XEXP (x4, 0);
  operands[3] = x5;
  if (!memory_operand (operands[3], E_HImode))
    return -1;
  switch (GET_MODE (operands[0]))
    {
    case E_DImode:
      if (pnum_clobbers == NULL
          || !nonimmediate_operand (operands[0], E_DImode))
        return -1;
      x6 = XVECEXP (x1, 0, 0);
      x7 = XEXP (x6, 1);
      if (GET_MODE (x7) != E_DImode)
        return -1;
      return 0;

    case E_HImode:
      if (!nonimmediate_operand (operands[0], E_HImode))
        return -1;
      x6 = XVECEXP (x1, 0, 0);
      x7 = XEXP (x6, 1);
      if (GET_MODE (x7) != E_HImode)
        return -1;
      return 1;

    case E_SImode:
      if (!nonimmediate_operand (operands[0], E_SImode))
        return -1;
      x6 = XVECEXP (x1, 0, 0);
      x7 = XEXP (x6, 1);
      if (GET_MODE (x7) != E_SImode)
        return -1;
      return 2;

    default:
      return -1;
    }
}

int
pattern838 (rtx x1, int i1, int i2, int i3, int i4)
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
  if (x9 != const_int_rtx[MAX_SAVED_CONST_INT + 7]
      || pattern837 (x1, 
i1, 
i2, 
i3, 
i4) != 0)
    return -1;
  return 0;
}

int
pattern849 (rtx x1, machine_mode i1)
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
pattern852 (rtx x1)
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
      return pattern851 (x1, 
E_QImode); /* [-1, 0] */

    case E_HImode:
      if (pattern851 (x1, 
E_HImode) != 0)
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern858 (rtx x1, machine_mode i1)
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
pattern862 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1
      || !register_operand (operands[2], i1)
      || !register_operand (operands[1], i1))
    return -1;
  return 0;
}

int
pattern869 ()
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  switch (GET_MODE (operands[1]))
    {
    case E_V32QImode:
      if (!register_operand (operands[1], E_V32QImode)
          || !nonimmediate_operand (operands[2], E_V32QImode))
        return -1;
      return 0;

    case E_V32HImode:
      if (!register_operand (operands[1], E_V32HImode)
          || !nonimmediate_operand (operands[2], E_V32HImode))
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern878 (rtx x1, machine_mode i1)
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
  x3 = XVECEXP (x2, 0, 0);
  switch (GET_MODE (x3))
    {
    case E_DFmode:
      if (!register_operand (operands[1], E_V2DFmode))
        return -1;
      return 0;

    case E_SFmode:
      if (!register_operand (operands[1], E_V4SFmode))
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern887 (rtx x1, machine_mode i1, machine_mode i2)
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
  operands[1] = x3;
  if (!nonimmediate_operand (operands[1], i2))
    return -1;
  x4 = XEXP (x1, 1);
  operands[2] = x4;
  if (!reg_or_0_operand (operands[2], i1))
    return -1;
  return 0;
}

int
pattern898 (rtx x1)
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
pattern906 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12, x13, x14, x15, x16, x17;
  rtx x18, x19, x20, x21, x22;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  if (maybe_ne (SUBREG_BYTE (x4), 0)
      || !register_operand (operands[3], E_QImode))
    return -1;
  x5 = XEXP (x4, 0);
  switch (GET_CODE (x5))
    {
    case VEC_CONCAT:
      if (GET_MODE (x5) != E_V2DImode)
        return -1;
      x6 = XEXP (x5, 1);
      if (x6 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
        return -1;
      x7 = XEXP (x5, 0);
      operands[1] = x7;
      if (!memory_operand (operands[1], E_DImode))
        return -1;
      x8 = XEXP (x3, 1);
      switch (XVECLEN (x8, 0))
        {
        case 8:
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
          if (x12 != const_int_rtx[MAX_SAVED_CONST_INT + 3])
            return -1;
          x13 = XVECEXP (x8, 0, 4);
          if (x13 != const_int_rtx[MAX_SAVED_CONST_INT + 4])
            return -1;
          x14 = XVECEXP (x8, 0, 5);
          if (x14 != const_int_rtx[MAX_SAVED_CONST_INT + 5])
            return -1;
          x15 = XVECEXP (x8, 0, 6);
          if (x15 != const_int_rtx[MAX_SAVED_CONST_INT + 6])
            return -1;
          x16 = XVECEXP (x8, 0, 7);
          if (x16 != const_int_rtx[MAX_SAVED_CONST_INT + 7]
              || GET_MODE (x3) != E_V8QImode
              || GET_MODE (x4) != E_V16QImode)
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
          res = pattern904 (x1, 
E_V8HImode, 
E_V4HImode);
          if (res >= 0)
            return res + 3; /* [3, 4] */
          return -1;

        case 2:
          if (pattern905 (x1, 
E_V4SImode, 
E_V2SImode) != 0)
            return -1;
          return 5;

        default:
          return -1;
        }

    case VEC_MERGE:
      if (GET_MODE (x5) != E_V4SImode)
        return -1;
      x7 = XEXP (x5, 0);
      if (GET_CODE (x7) != VEC_DUPLICATE
          || GET_MODE (x7) != E_V4SImode)
        return -1;
      x6 = XEXP (x5, 1);
      if (GET_CODE (x6) != CONST_VECTOR
          || XVECLEN (x6, 0) != 4
          || GET_MODE (x6) != E_V4SImode)
        return -1;
      x17 = XVECEXP (x6, 0, 0);
      if (x17 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
        return -1;
      x18 = XVECEXP (x6, 0, 1);
      if (x18 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
        return -1;
      x19 = XVECEXP (x6, 0, 2);
      if (x19 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
        return -1;
      x20 = XVECEXP (x6, 0, 3);
      if (x20 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
        return -1;
      x21 = XEXP (x5, 2);
      if (x21 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
        return -1;
      x22 = XEXP (x7, 0);
      operands[1] = x22;
      if (!memory_operand (operands[1], E_SImode))
        return -1;
      x8 = XEXP (x3, 1);
      switch (XVECLEN (x8, 0))
        {
        case 4:
          res = pattern904 (x1, 
E_V16QImode, 
E_V4QImode);
          if (res >= 0)
            return res + 6; /* [6, 7] */
          return -1;

        case 2:
          if (pattern905 (x1, 
E_V8HImode, 
E_V2HImode) != 0)
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
pattern955 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  if (!const_int_operand (operands[2], E_QImode))
    return -1;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  operands[3] = x3;
  switch (GET_MODE (operands[0]))
    {
    case E_DImode:
      return pattern954 (x1, 
E_SImode, 
E_DImode); /* [-1, 0] */

    case E_TImode:
      if (pattern954 (x1, 
E_DImode, 
E_TImode) != 0)
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern962 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8;
  int res ATTRIBUTE_UNUSED;
  if (GET_CODE (x1) != SET)
    return -1;
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) != IF_THEN_ELSE
      || GET_MODE (x2) != i1)
    return -1;
  x3 = XEXP (x2, 0);
  if (!ix86_comparison_operator (x3, E_VOIDmode))
    return -1;
  operands[4] = x3;
  x4 = XEXP (x3, 0);
  if (GET_CODE (x4) != REG
      || REGNO (x4) != 17)
    return -1;
  x5 = XEXP (x3, 1);
  if (x5 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
    return -1;
  x6 = XEXP (x2, 1);
  if (!rtx_equal_p (x6, operands[0]))
    return -1;
  x7 = XEXP (x2, 2);
  if (!rtx_equal_p (x7, operands[2]))
    return -1;
  x8 = XEXP (x1, 0);
  if (!rtx_equal_p (x8, operands[0]))
    return -1;
  return 0;
}

int
pattern968 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  switch (GET_MODE (operands[0]))
    {
    case E_HImode:
      if (!register_operand (operands[0], E_HImode)
          || GET_MODE (x1) != E_HImode)
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
pattern989 (rtx x1)
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
  switch (GET_MODE (operands[1]))
    {
    case E_V32HFmode:
      if (!register_operand (operands[1], E_V32HFmode)
          || !nonimmediate_operand (operands[2], E_V32HFmode)
          || !const_0_to_31_operand (operands[3], E_SImode))
        return -1;
      return 0;

    case E_V32QImode:
      if (!register_operand (operands[1], E_V32QImode)
          || !nonimmediate_operand (operands[2], E_V32QImode)
          || !const_0_to_7_operand (operands[3], E_SImode))
        return -1;
      return 1;

    case E_V32HImode:
      if (!register_operand (operands[1], E_V32HImode)
          || !nonimmediate_operand (operands[2], E_V32HImode)
          || !const_0_to_7_operand (operands[3], E_SImode))
        return -1;
      return 2;

    default:
      return -1;
    }
}

int
pattern999 (rtx x1, machine_mode i1, machine_mode i2)
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
pattern1004 (rtx x1, machine_mode i1)
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
  if (GET_MODE (x4) != i1)
    return -1;
  x5 = XEXP (x4, 0);
  if (!nonimmediate_operand (x5, i1))
    return -1;
  x6 = XEXP (x3, 1);
  if (!nonimmediate_operand (x6, i1))
    return -1;
  return 0;
}

int
pattern1016 (rtx x1, machine_mode i1, machine_mode i2)
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
      || !nonimm_or_0_operand (operands[3], i1)
      || !register_operand (operands[4], i2))
    return -1;
  return 0;
}

int
pattern1026 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1
      || !register_operand (operands[1], i1)
      || !vector_operand (operands[2], i1)
      || !register_operand (operands[3], i1))
    return -1;
  return 0;
}

int
pattern1032 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (!nonimmediate_operand (operands[0], i2)
      || GET_MODE (x1) != i2
      || !nonimmediate_operand (operands[1], i1))
    return -1;
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) != i1)
    return -1;
  return 0;
}

int
pattern1041 (rtx x1, machine_mode i1)
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
    case E_DImode:
      x5 = XVECEXP (x1, 0, 1);
      x6 = XEXP (x5, 1);
      return pattern1039 (x6); /* [-1, 0] */

    case E_HImode:
      if (!register_operand (operands[4], E_HImode))
        return -1;
      x5 = XVECEXP (x1, 0, 1);
      x6 = XEXP (x5, 1);
      if (GET_MODE (x6) != E_HImode)
        return -1;
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
      if (!register_operand (operands[4], E_SImode))
        return -1;
      x5 = XVECEXP (x1, 0, 1);
      x6 = XEXP (x5, 1);
      if (GET_MODE (x6) != E_SImode)
        return -1;
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
      if (!register_operand (operands[4], E_QImode))
        return -1;
      x5 = XVECEXP (x1, 0, 1);
      x6 = XEXP (x5, 1);
      if (GET_MODE (x6) != E_QImode)
        return -1;
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
pattern1076 (rtx x1, machine_mode i1)
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
pattern1084 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  switch (GET_MODE (x1))
    {
    case E_HImode:
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
      if (!nonimmediate_operand (operands[1], E_V64QImode)
          || !nonimmediate_operand (operands[2], E_V64QImode))
        return -1;
      return 20;

    default:
      return -1;
    }
}

int
pattern1138 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i2)
      || GET_MODE (x1) != i2
      || !register_operand (operands[1], i2)
      || !register_operand (operands[2], i2)
      || !nonimmediate_operand (operands[3], i1))
    return -1;
  return 0;
}

int
pattern1146 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 2);
  x3 = XEXP (x2, 0);
  if (!rtx_equal_p (x3, operands[1]))
    return -1;
  x4 = XEXP (x2, 1);
  x5 = XEXP (x4, 0);
  if (!rtx_equal_p (x5, operands[2]))
    return -1;
  switch (GET_MODE (operands[0]))
    {
    case E_V16QImode:
      return pattern1145 (x1, 
E_V16QImode); /* [-1, 0] */

    case E_V8HImode:
      if (pattern1145 (x1, 
E_V8HImode) != 0)
        return -1;
      return 1;

    case E_V4SImode:
      if (pattern1145 (x1, 
E_V4SImode) != 0)
        return -1;
      return 2;

    case E_V2DImode:
      if (pattern1145 (x1, 
E_V2DImode) != 0)
        return -1;
      return 3;

    default:
      return -1;
    }
}

int
pattern1158 (rtx x1)
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
      return pattern1156 (x1, 
E_QImode); /* [-1, 0] */

    case E_HImode:
      if (pattern1156 (x1, 
E_HImode) != 0)
        return -1;
      return 1;

    case E_SImode:
      if (pattern1157 (x1, 
E_SImode) != 0)
        return -1;
      return 2;

    case E_DImode:
      if (pattern1157 (x1, 
E_DImode) != 0)
        return -1;
      return 3;

    default:
      return -1;
    }
}

int
pattern1176 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
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
pattern1181 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  int res ATTRIBUTE_UNUSED;
  if (!nonmemory_operand (operands[2], E_QImode))
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_CODE (x2) != STRICT_LOW_PART)
    return -1;
  x3 = XEXP (x2, 0);
  operands[0] = x3;
  x4 = XEXP (x1, 1);
  x5 = XEXP (x4, 0);
  operands[1] = x5;
  return pattern373 (x4); /* [-1, 1] */
}

int
pattern1189 (rtx x1, machine_mode i1)
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
      || !nonimmediate_operand (operands[3], i1))
    return -1;
  return 0;
}

int
pattern1196 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12, x13, x14, x15, x16, x17;
  rtx x18, x19;
  int res ATTRIBUTE_UNUSED;
  if (GET_CODE (x1) != PARALLEL
      || XVECLEN (x1, 0) != 2)
    return -1;
  x2 = XVECEXP (x1, 0, 0);
  if (GET_CODE (x2) != SET)
    return -1;
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) != PLUS
      || GET_MODE (x3) != i1)
    return -1;
  x4 = XEXP (x3, 0);
  if (GET_CODE (x4) != PLUS
      || GET_MODE (x4) != i1)
    return -1;
  x5 = XEXP (x4, 0);
  if (GET_CODE (x5) != LTU
      || GET_MODE (x5) != i1)
    return -1;
  x6 = XEXP (x5, 0);
  if (GET_CODE (x6) != REG
      || REGNO (x6) != 17
      || GET_MODE (x6) != E_CCmode)
    return -1;
  x7 = XEXP (x5, 1);
  if (x7 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
    return -1;
  x8 = XEXP (x3, 1);
  if (x8 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
    return -1;
  x9 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x9) != CLOBBER)
    return -1;
  x10 = XEXP (x9, 0);
  if (GET_CODE (x10) != REG
      || REGNO (x10) != 17
      || GET_MODE (x10) != E_CCmode)
    return -1;
  x11 = XEXP (x4, 1);
  if (!rtx_equal_p (x11, operands[0]))
    return -1;
  x12 = XEXP (x2, 0);
  if (!rtx_equal_p (x12, operands[0]))
    return -1;
  x13 = PATTERN (peep2_next_insn (3));
  if (GET_CODE (x13) != PARALLEL
      || XVECLEN (x13, 0) != 2)
    return -1;
  x14 = XVECEXP (x13, 0, 0);
  if (GET_CODE (x14) != SET)
    return -1;
  x15 = XEXP (x14, 1);
  if (GET_CODE (x15) != NEG
      || GET_MODE (x15) != i1)
    return -1;
  x16 = XVECEXP (x13, 0, 1);
  if (GET_CODE (x16) != CLOBBER)
    return -1;
  x17 = XEXP (x16, 0);
  if (GET_CODE (x17) != REG
      || REGNO (x17) != 17
      || GET_MODE (x17) != E_CCmode)
    return -1;
  x18 = XEXP (x15, 0);
  if (!rtx_equal_p (x18, operands[0]))
    return -1;
  x19 = XEXP (x14, 0);
  if (!rtx_equal_p (x19, operands[0]))
    return -1;
  return 0;
}

int
pattern1221 (rtx x1)
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
pattern1226 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1)
    return -1;
  x2 = XVECEXP (x1, 0, 0);
  if (GET_MODE (x2) != i1
      || !register_operand (operands[1], i1))
    return -1;
  return 0;
}

int
pattern1233 (rtx x1, machine_mode i1, machine_mode i2)
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
pattern1237 (rtx x1, rtx_code i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7;
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
  if (GET_MODE (x7) != E_SImode)
    return -1;
  return 0;
}

int
pattern1242 (rtx x1)
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
      switch (GET_MODE (operands[0]))
        {
        case E_DImode:
          if (!nonimmediate_operand (operands[0], E_DImode)
              || GET_MODE (x1) != E_DImode
              || GET_MODE (x4) != E_DImode
              || !nonimmediate_operand (operands[4], E_DImode)
              || !const_0_to_63_operand (operands[2], E_QImode)
              || GET_MODE (x2) != E_DImode
              || !nonimmediate_operand (operands[1], E_DImode)
              || !const_0_to_63_operand (operands[3], E_QImode))
            return -1;
          return 0;

        case E_SImode:
          if (!nonimmediate_operand (operands[0], E_SImode)
              || GET_MODE (x1) != E_SImode
              || GET_MODE (x4) != E_SImode
              || !nonimmediate_operand (operands[4], E_SImode)
              || !const_0_to_31_operand (operands[2], E_QImode)
              || GET_MODE (x2) != E_SImode
              || !nonimmediate_operand (operands[1], E_SImode)
              || !const_0_to_31_operand (operands[3], E_QImode))
            return -1;
          return 1;

        default:
          return -1;
        }

    case MINUS:
      if (GET_MODE (x3) != E_QImode)
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
          if (pattern1241 (x1, 
E_DImode) != 0)
            return -1;
          return 2;

        case 32L:
          if (pattern1241 (x1, 
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
pattern1269 (rtx x1, machine_mode i1)
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
pattern1274 (rtx x1, machine_mode i1)
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
pattern1283 (rtx x1, machine_mode i1, machine_mode i2, machine_mode i3)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != i1
      || !register_operand (operands[1], i1))
    return -1;
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) != i1
      || !nonimmediate_operand (operands[2], i2)
      || !nonimm_or_0_operand (operands[4], i1)
      || !register_operand (operands[5], i3))
    return -1;
  return 0;
}

int
pattern1294 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != i1
      || !vector_operand (operands[2], i1))
    return -1;
  x3 = XEXP (x2, 2);
  if (GET_MODE (x3) != i1
      || !register_operand (operands[4], i2))
    return -1;
  return 0;
}

int
pattern1303 (rtx x1, int i1, int i2, int i3, int i4)
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
pattern1311 (rtx x1, machine_mode i1)
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
      || !nonimmediate_operand (operands[2], i1))
    return -1;
  return 0;
}

int
pattern1318 (rtx x1, machine_mode i1)
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
pattern1323 (rtx x1, rtx_code i1)
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
      || !const_1_to_31_operand (operands[2], E_QImode)
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
pattern1333 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  if (maybe_ne (SUBREG_BYTE (x2), 0)
      || GET_MODE (x2) != E_QImode)
    return -1;
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) != AND)
    return -1;
  return pattern699 (x1); /* [-1, 1] */
}

int
pattern1341 ()
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  switch (GET_MODE (operands[1]))
    {
    case E_QImode:
      if (!general_reg_operand (operands[1], E_QImode)
          || !nonimmediate_operand (operands[2], E_QImode))
        return -1;
      return 0;

    case E_HImode:
      if (!general_reg_operand (operands[1], E_HImode)
          || !nonimmediate_operand (operands[2], E_HImode))
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern1348 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) != REG
      || REGNO (x3) != 17)
    return -1;
  x4 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x4) != SET)
    return -1;
  x5 = XEXP (x2, 1);
  operands[5] = x5;
  x6 = XEXP (x4, 1);
  operands[6] = x6;
  x7 = XEXP (x4, 0);
  if (!rtx_equal_p (x7, operands[0]))
    return -1;
  x8 = PATTERN (peep2_next_insn (2));
  return pattern1347 (x8, 
i1); /* [-1, 0] */
}

int
pattern1358 (rtx x1, machine_mode i1)
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
pattern1366 (rtx x1, machine_mode i1, machine_mode i2)
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
      || !vector_operand (operands[3], i1)
      || !const0_operand (operands[4], i1)
      || !register_operand (operands[5], i2))
    return -1;
  return 0;
}

int
pattern1372 (machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!bcst_vector_operand (operands[2], i1)
      || !bcst_vector_operand (operands[3], i1)
      || !const0_operand (operands[4], i1)
      || !register_operand (operands[5], i2))
    return -1;
  return 0;
}

int
pattern1378 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!bcst_vector_operand (operands[2], i2)
      || GET_MODE (x1) != i2
      || !bcst_vector_operand (operands[3], i2)
      || !const0_operand (operands[4], i2)
      || !register_operand (operands[5], i1))
    return -1;
  return 0;
}

int
pattern1387 (rtx x1, machine_mode i1)
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
      || !nonimmediate_operand (operands[3], i1)
      || !const0_operand (operands[4], i1))
    return -1;
  return 0;
}

int
pattern1397 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 2);
  if (XWINT (x3, 0) != 1L
      || !const_0_to_255_operand (operands[3], E_SImode))
    return -1;
  return pattern1396 (x1); /* [-1, 2] */
}

int
pattern1402 (rtx x1, machine_mode i1)
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
      || !register_operand (operands[2], i1))
    return -1;
  return 0;
}

int
pattern1409 (rtx x1, machine_mode i1)
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
  x3 = XEXP (x2, 2);
  if (GET_MODE (x3) != i1
      || !register_operand (operands[3], i1))
    return -1;
  return 0;
}

int
pattern1417 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
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
pattern1433 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  operands[0] = x2;
  x3 = XEXP (x1, 1);
  x4 = XEXP (x3, 0);
  x5 = XEXP (x4, 0);
  x6 = XEXP (x5, 1);
  operands[2] = x6;
  if (!register_operand (operands[2], E_QImode))
    return -1;
  x7 = XEXP (x3, 1);
  operands[1] = x7;
  switch (GET_MODE (operands[0]))
    {
    case E_QImode:
      return pattern1432 (x3, 
E_QImode); /* [-1, 0] */

    case E_HImode:
      if (pattern1432 (x3, 
E_HImode) != 0)
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern1444 (rtx x1, int i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12, x13, x14, x15, x16, x17;
  rtx x18, x19, x20, x21, x22;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 2);
  x3 = XEXP (x2, 1);
  switch (GET_CODE (x3))
    {
    case PLUS:
      x4 = XEXP (x3, 0);
      if (GET_CODE (x4) != ASHIFT)
        return -1;
      x5 = XEXP (x4, 1);
      if (x5 != const_int_rtx[MAX_SAVED_CONST_INT + i1])
        return -1;
      x6 = XVECEXP (x1, 0, 3);
      if (GET_CODE (x6) != SET)
        return -1;
      x7 = XEXP (x6, 1);
      if (GET_CODE (x7) != MEM
          || GET_MODE (x7) != E_BLKmode)
        return -1;
      x8 = XEXP (x6, 0);
      if (GET_CODE (x8) != MEM
          || GET_MODE (x8) != E_BLKmode)
        return -1;
      x9 = XVECEXP (x1, 0, 0);
      x10 = XEXP (x9, 0);
      operands[2] = x10;
      x11 = XVECEXP (x1, 0, 1);
      x12 = XEXP (x11, 1);
      x13 = XEXP (x12, 0);
      x14 = XEXP (x13, 0);
      operands[5] = x14;
      x15 = XEXP (x2, 0);
      operands[1] = x15;
      x16 = XEXP (x3, 1);
      operands[4] = x16;
      x17 = XEXP (x4, 0);
      if (!rtx_equal_p (x17, operands[5]))
        return -1;
      x18 = XEXP (x7, 0);
      if (!rtx_equal_p (x18, operands[4]))
        return -1;
      x19 = XEXP (x8, 0);
      if (!rtx_equal_p (x19, operands[3]))
        return -1;
      x20 = XVECEXP (x1, 0, 4);
      x21 = XEXP (x20, 0);
      if (!rtx_equal_p (x21, operands[5]))
        return -1;
      switch (GET_MODE (operands[2]))
        {
        case E_SImode:
          return pattern1442 (x1, 
E_SImode); /* [-1, 0] */

        case E_DImode:
          if (pattern1442 (x1, 
E_DImode) != 0)
            return -1;
          return 1;

        default:
          return -1;
        }

    case CONST_INT:
      if (XWINT (x3, 0) != 0L)
        return -1;
      x15 = XEXP (x2, 0);
      if (GET_CODE (x15) != MEM
          || GET_MODE (x15) != E_BLKmode)
        return -1;
      x6 = XVECEXP (x1, 0, 3);
      if (GET_CODE (x6) != USE)
        return -1;
      x9 = XVECEXP (x1, 0, 0);
      x10 = XEXP (x9, 0);
      operands[1] = x10;
      x11 = XVECEXP (x1, 0, 1);
      x12 = XEXP (x11, 1);
      x13 = XEXP (x12, 0);
      x14 = XEXP (x13, 0);
      operands[4] = x14;
      x8 = XEXP (x6, 0);
      operands[2] = x8;
      if (!register_operand (operands[2], i2))
        return -1;
      x22 = XEXP (x15, 0);
      if (!rtx_equal_p (x22, operands[3]))
        return -1;
      x20 = XVECEXP (x1, 0, 4);
      x21 = XEXP (x20, 0);
      if (!rtx_equal_p (x21, operands[4]))
        return -1;
      switch (GET_MODE (operands[1]))
        {
        case E_SImode:
          if (pattern1443 (x12, 
E_SImode) != 0)
            return -1;
          return 2;

        case E_DImode:
          if (pattern1443 (x12, 
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
pattern1488 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (!nonimmediate_operand (operands[0], i1)
      || GET_MODE (x1) != i1)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != i2
      || !nonimmediate_operand (operands[1], i1)
      || !nonimmediate_operand (operands[2], i1))
    return -1;
  return 0;
}

int
pattern1497 (rtx x1, machine_mode i1)
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
      || !const_int_operand (operands[3], i1)
      || !register_operand (operands[1], i1))
    return -1;
  x4 = XVECEXP (x1, 0, 1);
  x5 = XEXP (x4, 1);
  if (GET_MODE (x5) != i1)
    return -1;
  return 0;
}

int
pattern1507 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (!mask_reg_operand (operands[0], i1)
      || GET_MODE (x1) != i1)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != i1
      || !mask_reg_operand (operands[1], i1)
      || !mask_reg_operand (operands[2], i1))
    return -1;
  return 0;
}

int
pattern1513 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i2)
      || GET_MODE (x1) != i2)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != i1)
    return -1;
  x3 = XEXP (x2, 0);
  return pattern1512 (x3, 
i1); /* [-1, 0] */
}

int
pattern1522 (rtx x1, machine_mode i1, machine_mode i2)
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
      || !vector_operand (operands[2], i1)
      || pattern1521 () != 0)
    return -1;
  return 0;
}

int
pattern1531 (rtx x1, rtx_code i1)
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
  x11 = XEXP (x3, 0);
  if (!rtx_equal_p (x11, operands[2]))
    return -1;
  x12 = XEXP (x3, 1);
  if (!rtx_equal_p (x12, operands[3]))
    return -1;
  return 0;
}

int
pattern1542 (rtx x1, machine_mode i1)
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
      || !nonimmediate_operand (operands[3], i1)
      || !const0_operand (operands[4], i1))
    return -1;
  return 0;
}

int
pattern1549 (rtx x1, machine_mode i1, machine_mode i2, machine_mode i3)
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
  if (GET_MODE (x3) != i3)
    return -1;
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) != i3)
    return -1;
  x5 = XEXP (x4, 0);
  if (GET_MODE (x5) != i3)
    return -1;
  x6 = XEXP (x5, 0);
  if (GET_MODE (x6) != i3
      || !vector_operand (operands[1], i2))
    return -1;
  x7 = XEXP (x5, 1);
  if (GET_MODE (x7) != i3
      || !vector_operand (operands[2], i2)
      || !const1_operand (operands[5], i3)
      || !nonimm_or_0_operand (operands[3], i2)
      || !register_operand (operands[4], i1))
    return -1;
  return 0;
}

int
pattern1563 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12, x13, x14, x15, x16;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  x4 = XEXP (x3, 0);
  x5 = XEXP (x4, 0);
  x6 = XEXP (x5, 0);
  operands[1] = x6;
  x7 = XEXP (x3, 1);
  x8 = XEXP (x7, 0);
  x9 = XEXP (x8, 0);
  if (!rtx_equal_p (x9, operands[1]))
    return -1;
  x10 = XVECEXP (x1, 0, 1);
  x11 = XEXP (x10, 1);
  x12 = XEXP (x11, 0);
  if (!rtx_equal_p (x12, operands[1]))
    return -1;
  x13 = XEXP (x4, 1);
  switch (GET_CODE (x13))
    {
    case SIGN_EXTEND:
      x14 = XEXP (x13, 0);
      operands[2] = x14;
      x15 = XEXP (x8, 1);
      if (!rtx_equal_p (x15, operands[2]))
        return -1;
      x16 = XEXP (x11, 1);
      if (!rtx_equal_p (x16, operands[2]))
        return -1;
      switch (GET_MODE (x4))
        {
        case E_HImode:
          return pattern1561 (x1, 
E_QImode, 
E_HImode); /* [-1, 0] */

        case E_SImode:
          if (pattern1561 (x1, 
E_HImode, 
E_SImode) != 0)
            return -1;
          return 1;

        case E_DImode:
          if (GET_MODE (x5) != E_DImode
              || !nonimmediate_operand (operands[1], E_SImode)
              || GET_MODE (x13) != E_DImode
              || !x86_64_sext_operand (operands[2], E_SImode)
              || pattern718 (x1, 
E_SImode, 
E_DImode) != 0)
            return -1;
          return 2;

        case E_TImode:
          if (GET_MODE (x5) != E_TImode
              || !nonimmediate_operand (operands[1], E_DImode)
              || GET_MODE (x13) != E_TImode
              || pattern718 (x1, 
E_DImode, 
E_TImode) != 0)
            return -1;
          return 3;

        case E_POImode:
          if (pattern719 (x1, 
E_TImode, 
E_POImode) != 0)
            return -1;
          return 4;

        default:
          return -1;
        }

    case CONST_INT:
    case CONST_WIDE_INT:
      operands[3] = x13;
      x15 = XEXP (x8, 1);
      operands[2] = x15;
      x16 = XEXP (x11, 1);
      if (!rtx_equal_p (x16, operands[2]))
        return -1;
      switch (GET_MODE (x4))
        {
        case E_HImode:
          if (pattern1562 (x1, 
E_QImode, 
E_HImode) != 0)
            return -1;
          return 5;

        case E_SImode:
          if (pattern1562 (x1, 
E_HImode, 
E_SImode) != 0)
            return -1;
          return 6;

        case E_DImode:
          if (pattern1562 (x1, 
E_SImode, 
E_DImode) != 0)
            return -1;
          return 7;

        case E_TImode:
          if (GET_MODE (x5) != E_TImode
              || !nonimmediate_operand (operands[1], E_DImode)
              || pattern718 (x1, 
E_DImode, 
E_TImode) != 0)
            return -1;
          return 8;

        case E_POImode:
          if (pattern720 (x1, 
E_TImode, 
E_POImode) != 0)
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
pattern1612 (machine_mode i1)
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
pattern1620 ()
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
pattern1629 (rtx x1, machine_mode i1)
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
  x5 = XVECEXP (x4, 0, 1);
  if (GET_MODE (x5) != i1)
    return -1;
  return 0;
}

int
pattern1639 (rtx x1, machine_mode i1, machine_mode i2, machine_mode i3)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8;
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
  if (GET_MODE (x5) != i3)
    return -1;
  x6 = XEXP (x5, 0);
  if (GET_MODE (x6) != i3)
    return -1;
  x7 = XEXP (x6, 0);
  if (GET_MODE (x7) != i3
      || !vector_operand (operands[1], i2))
    return -1;
  x8 = XEXP (x6, 1);
  if (GET_MODE (x8) != i3
      || !vector_operand (operands[2], i2)
      || !const1_operand (operands[3], i2)
      || !nonimm_or_0_operand (operands[4], i2)
      || !register_operand (operands[5], i1))
    return -1;
  return 0;
}

int
pattern1654 (machine_mode i1)
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
pattern1662 (rtx x1, machine_mode i1, machine_mode i2)
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
pattern1673 (rtx x1, machine_mode i1)
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
pattern1683 (rtx x1, machine_mode i1)
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
pattern1693 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  x5 = XEXP (x4, 0);
  operands[2] = x5;
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
pattern1703 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i2)
      || GET_MODE (x1) != i2
      || !vsib_mem_operator (operands[6], i1))
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
pattern1708 (rtx x1, machine_mode i1)
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
      return pattern1707 (
E_SImode); /* [-1, 1] */

    case E_DImode:
      res = pattern1707 (
E_DImode);
      if (res >= 0)
        return res + 2; /* [2, 3] */
      return -1;

    default:
      return -1;
    }
}

int
pattern1721 (rtx x1, machine_mode i1, machine_mode i2)
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
      return pattern1720 (
E_SImode); /* [-1, 1] */

    case E_DImode:
      res = pattern1720 (
E_DImode);
      if (res >= 0)
        return res + 2; /* [2, 3] */
      return -1;

    default:
      return -1;
    }
}

int
pattern1732 (rtx x1, machine_mode i1)
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
  if (GET_MODE (x5) != i1
      || !register_operand (operands[2], i1)
      || !nonimmediate_operand (operands[1], i1)
      || !register_operand (operands[3], i1)
      || !const0_operand (operands[4], i1))
    return -1;
  return 0;
}

int
pattern1739 (rtx x1, machine_mode i1, machine_mode i2)
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
      return pattern1738 (
E_SImode); /* [-1, 1] */

    case E_DImode:
      res = pattern1738 (
E_DImode);
      if (res >= 0)
        return res + 2; /* [2, 3] */
      return -1;

    default:
      return -1;
    }
}

int
pattern1750 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) != COMPARE
      || GET_MODE (x2) != E_CCZmode)
    return -1;
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) != AND
      || GET_MODE (x3) != E_QImode)
    return -1;
  x4 = XEXP (x3, 1);
  if (x4 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
    return -1;
  x5 = XEXP (x2, 1);
  if (x5 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
    return -1;
  x6 = XEXP (x1, 0);
  if (GET_CODE (x6) != REG
      || REGNO (x6) != 17
      || GET_MODE (x6) != E_CCZmode)
    return -1;
  return 0;
}

int
pattern1761 (rtx x1, machine_mode i1, machine_mode i2)
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
      || !nonimm_or_0_operand (operands[3], i1)
      || !register_operand (operands[2], i1))
    return -1;
  return 0;
}

int
pattern1770 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1
      || !vsib_mem_operator (operands[6], i2)
      || !register_operand (operands[4], i1)
      || !scratch_operand (operands[1], i1))
    return -1;
  x2 = XVECEXP (x1, 0, 1);
  x3 = XEXP (x2, 0);
  switch (GET_MODE (x3))
    {
    case E_SImode:
      return pattern1769 (
E_SImode); /* [-1, 1] */

    case E_DImode:
      res = pattern1769 (
E_DImode);
      if (res >= 0)
        return res + 2; /* [2, 3] */
      return -1;

    default:
      return -1;
    }
}

int
pattern1783 (machine_mode i1)
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
pattern1790 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1
      || !vsib_mem_operator (operands[7], i2)
      || !scratch_operand (operands[1], i1))
    return -1;
  return 0;
}

int
pattern1797 (rtx x1, int i1, int i2, int i3, int i4, int i5)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 17);
  if (x2 != const_int_rtx[MAX_SAVED_CONST_INT + i5])
    return -1;
  x3 = XVECEXP (x1, 0, 18);
  if (x3 != const_int_rtx[MAX_SAVED_CONST_INT + i4])
    return -1;
  x4 = XVECEXP (x1, 0, 19);
  if (x4 != const_int_rtx[MAX_SAVED_CONST_INT + i3])
    return -1;
  x5 = XVECEXP (x1, 0, 20);
  if (x5 != const_int_rtx[MAX_SAVED_CONST_INT + i2])
    return -1;
  x6 = XVECEXP (x1, 0, 21);
  if (x6 != const_int_rtx[MAX_SAVED_CONST_INT + i1])
    return -1;
  return 0;
}

int
pattern1807 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  x5 = XEXP (x4, 0);
  operands[2] = x5;
  if (!register_operand (operands[2], i1)
      || !nonimmediate_operand (operands[3], i1))
    return -1;
  x6 = XEXP (x2, 1);
  if (!rtx_equal_p (x6, operands[3]))
    return -1;
  x7 = XEXP (x1, 1);
  if (!rtx_equal_p (x7, operands[3]))
    return -1;
  return 0;
}

int
pattern1816 (machine_mode i1)
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
pattern1824 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[3], E_V2DImode))
    return -1;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  x5 = XVECEXP (x4, 0, 0);
  switch (XWINT (x5, 0))
    {
    case 0L:
      x6 = XVECEXP (x4, 0, 1);
      if (XWINT (x6, 0) != 2L)
        return -1;
      x7 = XEXP (x1, 1);
      x8 = XEXP (x7, 0);
      x9 = XEXP (x8, 1);
      x10 = XVECEXP (x9, 0, 0);
      if (XWINT (x10, 0) != 0L)
        return -1;
      x11 = XVECEXP (x9, 0, 1);
      if (XWINT (x11, 0) != 2L)
        return -1;
      return 0;

    case 1L:
      x6 = XVECEXP (x4, 0, 1);
      if (XWINT (x6, 0) != 3L)
        return -1;
      x7 = XEXP (x1, 1);
      x8 = XEXP (x7, 0);
      x9 = XEXP (x8, 1);
      x10 = XVECEXP (x9, 0, 0);
      if (XWINT (x10, 0) != 1L)
        return -1;
      x11 = XVECEXP (x9, 0, 1);
      if (XWINT (x11, 0) != 3L)
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern1834 (rtx x1, machine_mode i1, machine_mode i2, machine_mode i3)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != i3
      || !register_operand (operands[2], i1)
      || !vsib_mem_operator (operands[7], i2)
      || !register_operand (operands[5], i1))
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
pattern1845 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  x5 = XVECEXP (x4, 0, 0);
  operands[5] = x5;
  if (!const_0_to_1_operand (operands[5], E_SImode))
    return -1;
  x6 = XEXP (x2, 1);
  x7 = XEXP (x6, 1);
  x8 = XVECEXP (x7, 0, 0);
  operands[6] = x8;
  if (!const_0_to_1_operand (operands[6], E_SImode))
    return -1;
  x9 = XEXP (x1, 0);
  x10 = XEXP (x9, 1);
  x11 = XEXP (x10, 0);
  if (!rtx_equal_p (x11, operands[1]))
    return -1;
  x12 = XEXP (x6, 0);
  if (!rtx_equal_p (x12, operands[2]))
    return -1;
  return 0;
}

int
pattern1855 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || !const_int_operand (operands[2], i1))
    return -1;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) != i1
      || !memory_operand (operands[1], i1))
    return -1;
  x4 = XVECEXP (x1, 0, 1);
  x5 = XEXP (x4, 1);
  if (GET_MODE (x5) != i1
      || !const_int_operand (operands[3], i1))
    return -1;
  return 0;
}

int
pattern1858 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 1);
  x3 = XEXP (x2, 1);
  if (XINT (x3, 1) != 109
      || GET_MODE (x3) != i1)
    return -1;
  x4 = XVECEXP (x1, 0, 2);
  x5 = XEXP (x4, 1);
  if (GET_CODE (x5) != UNSPEC_VOLATILE
      || XVECLEN (x5, 0) != 1
      || XINT (x5, 1) != 109
      || GET_MODE (x5) != E_CCZmode)
    return -1;
  x6 = XVECEXP (x5, 0, 0);
  if (x6 != const_int_rtx[MAX_SAVED_CONST_INT + 0]
      || !memory_operand (operands[2], i1)
      || !register_operand (operands[3], i1))
    return -1;
  x7 = XEXP (x4, 0);
  if (GET_MODE (x7) != E_CCZmode)
    return -1;
  x8 = PATTERN (peep2_next_insn (2));
  x9 = XEXP (x8, 0);
  if (GET_MODE (x9) != E_CCZmode)
    return -1;
  x10 = XEXP (x8, 1);
  if (GET_MODE (x10) != E_CCZmode
      || !register_operand (operands[5], i1)
      || !general_operand (operands[6], i1))
    return -1;
  return 0;
}

int
pattern1867 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  x4 = XEXP (x3, 1);
  if (GET_MODE (x4) != i2)
    return -1;
  x5 = XEXP (x4, 0);
  if (GET_MODE (x5) != i1)
    return -1;
  x6 = XEXP (x5, 0);
  if (GET_MODE (x6) != i1
      || !ix86_carry_flag_operator (operands[5], i1)
      || !nonimmediate_operand (operands[0], i1))
    return -1;
  x7 = XVECEXP (x1, 0, 1);
  x8 = XEXP (x7, 1);
  if (GET_MODE (x8) != i1)
    return -1;
  x9 = XEXP (x8, 0);
  if (GET_MODE (x9) != i1)
    return -1;
  return 0;
}

int
pattern1876 (rtx x1, int i1, int i2, int i3, int i4)
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
pattern1883 (rtx x1, machine_mode i1, machine_mode i2, machine_mode i3)
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
  if (GET_MODE (x3) != i3)
    return -1;
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) != i2
      || !register_operand (operands[1], i1))
    return -1;
  return 0;
}

 int
recog_3 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  operands[1] = x3;
  switch (GET_MODE (operands[0]))
    {
    case E_QImode:
      if (nonimmediate_operand (operands[0], E_QImode))
        {
          if (const0_operand (operands[1], E_QImode))
            {
              if ((
#line 1563 "../../gcc/config/i386/i386.md"
(TARGET_AVX512F && ix86_match_ccmode (insn, CCZmode)) && 
#line 1555 "../../gcc/config/i386/i386.md"
(TARGET_AVX512DQ)))
                return 5; /* *cmpqi_ccz_1 */
              if (
#line 1577 "../../gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)))
                return 9; /* *cmpqi_ccno_1 */
            }
          if (general_operand (operands[1], E_QImode)
              && 
#line 1589 "../../gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCmode)))
            return 13; /* *cmpqi_1 */
        }
      break;

    case E_HImode:
      if (nonimmediate_operand (operands[0], E_HImode))
        {
          if (const0_operand (operands[1], E_HImode))
            {
              if (
#line 1563 "../../gcc/config/i386/i386.md"
(TARGET_AVX512F && ix86_match_ccmode (insn, CCZmode)))
                return 6; /* *cmphi_ccz_1 */
              if (
#line 1577 "../../gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)))
                return 10; /* *cmphi_ccno_1 */
            }
          if (general_operand (operands[1], E_HImode)
              && 
#line 1589 "../../gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCmode)))
            return 14; /* *cmphi_1 */
        }
      break;

    case E_SImode:
      if (nonimmediate_operand (operands[0], E_SImode))
        {
          if (const0_operand (operands[1], E_SImode))
            {
              if ((
#line 1563 "../../gcc/config/i386/i386.md"
(TARGET_AVX512F && ix86_match_ccmode (insn, CCZmode)) && 
#line 1556 "../../gcc/config/i386/i386.md"
(TARGET_AVX512BW)))
                return 7; /* *cmpsi_ccz_1 */
              if (
#line 1577 "../../gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)))
                return 11; /* *cmpsi_ccno_1 */
            }
          if (x86_64_general_operand (operands[1], E_SImode)
              && 
#line 1589 "../../gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCmode)))
            return 15; /* *cmpsi_1 */
        }
      break;

    case E_DImode:
      if (nonimmediate_operand (operands[0], E_DImode))
        {
          if (const0_operand (operands[1], E_DImode))
            {
              if ((
#line 1563 "../../gcc/config/i386/i386.md"
(TARGET_AVX512F && ix86_match_ccmode (insn, CCZmode)) && 
#line 1556 "../../gcc/config/i386/i386.md"
(TARGET_AVX512BW && TARGET_64BIT)))
                return 8; /* *cmpdi_ccz_1 */
              if ((
#line 1577 "../../gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)) && 
#line 1161 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return 12; /* *cmpdi_ccno_1 */
            }
          if (x86_64_general_operand (operands[1], E_DImode)
              && (
#line 1589 "../../gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCmode)) && 
#line 1161 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return 16; /* *cmpdi_1 */
        }
      break;

    default:
      break;
    }
  x4 = XEXP (x1, 0);
  switch (GET_MODE (x4))
    {
    case E_CCZmode:
      if (GET_MODE (x2) == E_CCZmode)
        {
          switch (pattern844 ())
            {
            case 0:
              if ((
#line 1682 "../../gcc/config/i386/i386.md"
(ix86_pre_reload_split ()) && 
#line 1235 "../../gcc/config/i386/i386.md"
(!TARGET_64BIT)))
                return 33; /* *cmpdi_doubleword */
              break;

            case 1:
              if ((
#line 1682 "../../gcc/config/i386/i386.md"
(ix86_pre_reload_split ()) && 
#line 1236 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return 34; /* *cmpti_doubleword */
              break;

            default:
              break;
            }
        }
      break;

    case E_CCFPmode:
      if (GET_MODE (x2) == E_CCFPmode)
        {
          switch (GET_MODE (operands[0]))
            {
            case E_XFmode:
              if (register_operand (operands[0], E_XFmode)
                  && register_operand (operands[1], E_XFmode)
                  && 
#line 2029 "../../gcc/config/i386/i386.md"
(TARGET_80387 && TARGET_CMOVE))
                return 48; /* *cmpixf_i387 */
              break;

            case E_SFmode:
              if (register_operand (operands[0], E_SFmode)
                  && register_ssemem_operand (operands[1], E_SFmode)
                  && 
#line 2069 "../../gcc/config/i386/i386.md"
((SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)
   || (TARGET_80387 && TARGET_CMOVE)))
                return 56; /* *cmpisf */
              break;

            case E_DFmode:
              if (register_operand (operands[0], E_DFmode)
                  && register_ssemem_operand (operands[1], E_DFmode)
                  && 
#line 2069 "../../gcc/config/i386/i386.md"
((SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)
   || (TARGET_80387 && TARGET_CMOVE)))
                return 58; /* *cmpidf */
              break;

            case E_HFmode:
              if (register_operand (operands[0], E_HFmode)
                  && nonimmediate_operand (operands[1], E_HFmode)
                  && 
#line 2106 "../../gcc/config/i386/i386.md"
(TARGET_AVX512FP16))
                return 60; /* *cmpihf */
              break;

            case E_BFmode:
              if (register_operand (operands[0], E_BFmode)
                  && nonimmediate_operand (operands[1], E_BFmode)
                  && 
#line 2117 "../../gcc/config/i386/i386.md"
(TARGET_AVX10_2_256))
                return 62; /* *cmpibf */
              break;

            default:
              break;
            }
        }
      break;

    default:
      break;
    }
  if (!nonimmediate_operand (operands[0], E_QImode)
      || pattern601 (x3) != 0)
    return -1;
  x5 = XEXP (x3, 0);
  operands[2] = x5;
  x6 = XEXP (x5, 1);
  if (x6 != const_int_rtx[MAX_SAVED_CONST_INT + 8])
    return -1;
  x7 = XEXP (x5, 2);
  if (x7 != const_int_rtx[MAX_SAVED_CONST_INT + 8])
    return -1;
  x8 = XEXP (x5, 0);
  operands[1] = x8;
  if (!int248_register_operand (operands[1], E_VOIDmode))
    return -1;
  switch (GET_MODE (operands[2]))
    {
    case E_HImode:
      if (!extract_operator (operands[2], E_HImode)
          || !
#line 1614 "../../gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCmode)))
        return -1;
      return 21; /* *cmpqi_exthi_1 */

    case E_SImode:
      if (!extract_operator (operands[2], E_SImode)
          || !
#line 1614 "../../gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCmode)))
        return -1;
      return 22; /* *cmpqi_extsi_1 */

    case E_DImode:
      if (!extract_operator (operands[2], E_DImode)
          || !(
#line 1614 "../../gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCmode)) && 
#line 1164 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
        return -1;
      return 23; /* *cmpqi_extdi_1 */

    default:
      return -1;
    }
}

 int
recog_17 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  operands[0] = x3;
  x4 = XEXP (x1, 1);
  operands[1] = x4;
  switch (GET_MODE (operands[0]))
    {
    case E_QImode:
      if (!register_operand (operands[0], E_QImode))
        return -1;
      if (general_operand (operands[1], E_QImode)
          && 
#line 3441 "../../gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)))
        return 111; /* *movstrictqi_1 */
      if (pnum_clobbers == NULL
          || !const0_operand (operands[1], E_QImode)
          || !
#line 3450 "../../gcc/config/i386/i386.md"
(reload_completed))
        return -1;
      *pnum_clobbers = 1;
      return 113; /* *movstrictqi_xor */

    case E_HImode:
      if (!register_operand (operands[0], E_HImode))
        return -1;
      if (general_operand (operands[1], E_HImode)
          && 
#line 3441 "../../gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)))
        return 112; /* *movstricthi_1 */
      if (pnum_clobbers == NULL
          || !const0_operand (operands[1], E_HImode)
          || !
#line 3450 "../../gcc/config/i386/i386.md"
(reload_completed))
        return -1;
      *pnum_clobbers = 1;
      return 114; /* *movstricthi_xor */

    default:
      return -1;
    }
}

 int
recog_18 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 1);
  if (x3 != const_int_rtx[MAX_SAVED_CONST_INT + 8])
    return -1;
  x4 = XEXP (x2, 2);
  if (x4 != const_int_rtx[MAX_SAVED_CONST_INT + 8])
    return -1;
  x5 = XEXP (x2, 0);
  operands[0] = x5;
  if (!int248_register_operand (operands[0], E_VOIDmode))
    return -1;
  x6 = XEXP (x1, 1);
  operands[1] = x6;
  switch (GET_MODE (x2))
    {
    case E_HImode:
      if (!general_operand (operands[1], E_HImode))
        return -1;
      return 128; /* insvhi_1 */

    case E_SImode:
      if (!general_operand (operands[1], E_SImode))
        return -1;
      return 129; /* insvsi_1 */

    case E_DImode:
      if (!general_operand (operands[1], E_DImode)
          || !
#line 1164 "../../gcc/config/i386/i386.md"
(TARGET_64BIT))
        return -1;
      return 130; /* insvdi_1 */

    default:
      return -1;
    }
}

 int
recog_19 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  switch (GET_CODE (x2))
    {
    case REG:
    case SUBREG:
    case MEM:
      operands[0] = x2;
      res = recog_16 (x1, insn, pnum_clobbers);
      if (res >= 0)
        return res;
      if (GET_CODE (x2) == MEM)
        {
          x3 = XEXP (x2, 0);
          operands[0] = x3;
          if (x86_64_movabs_operand (operands[0], E_DImode))
            {
              x4 = XEXP (x1, 1);
              operands[1] = x4;
              switch (GET_MODE (x2))
                {
                case E_QImode:
                  if (nonmemory_operand (operands[1], E_QImode)
                      && 
#line 3295 "../../gcc/config/i386/i386.md"
(TARGET_LP64 && ix86_check_movabs (insn, 0)))
                    return 99; /* *movabsqi_1 */
                  break;

                case E_HImode:
                  if (nonmemory_operand (operands[1], E_HImode)
                      && 
#line 3295 "../../gcc/config/i386/i386.md"
(TARGET_LP64 && ix86_check_movabs (insn, 0)))
                    return 100; /* *movabshi_1 */
                  break;

                case E_SImode:
                  if (nonmemory_operand (operands[1], E_SImode)
                      && 
#line 3295 "../../gcc/config/i386/i386.md"
(TARGET_LP64 && ix86_check_movabs (insn, 0)))
                    return 101; /* *movabssi_1 */
                  break;

                case E_DImode:
                  if (nonmemory_operand (operands[1], E_DImode)
                      && 
#line 3295 "../../gcc/config/i386/i386.md"
(TARGET_LP64 && ix86_check_movabs (insn, 0)))
                    return 102; /* *movabsdi_1 */
                  break;

                default:
                  break;
                }
            }
        }
      break;

    case STRICT_LOW_PART:
      res = recog_17 (x1, insn, pnum_clobbers);
      if (res >= 0)
        return res;
      break;

    case ZERO_EXTRACT:
      res = recog_18 (x1, insn, pnum_clobbers);
      if (res >= 0)
        return res;
      break;

    case PC:
      x4 = XEXP (x1, 1);
      operands[0] = x4;
      switch (GET_MODE (operands[0]))
        {
        case E_SImode:
          if (indirect_branch_operand (operands[0], E_SImode)
              && 
#line 1403 "../../gcc/config/i386/i386.md"
(word_mode == SImode))
            return 1460; /* *indirect_jump */
          break;

        case E_DImode:
          if (indirect_branch_operand (operands[0], E_DImode)
              && 
#line 1403 "../../gcc/config/i386/i386.md"
(word_mode == DImode))
            return 1461; /* *indirect_jump */
          break;

        default:
          break;
        }
      break;

    default:
      break;
    }
  x4 = XEXP (x1, 1);
  switch (GET_CODE (x4))
    {
    case MEM:
      operands[0] = x2;
      x5 = XEXP (x4, 0);
      operands[1] = x5;
      if (!x86_64_movabs_operand (operands[1], E_DImode))
        return -1;
      switch (GET_MODE (operands[0]))
        {
        case E_QImode:
          if (!register_operand (operands[0], E_QImode)
              || GET_MODE (x4) != E_QImode
              || !
#line 3319 "../../gcc/config/i386/i386.md"
(TARGET_LP64 && ix86_check_movabs (insn, 1)))
            return -1;
          return 103; /* *movabsqi_2 */

        case E_HImode:
          if (!register_operand (operands[0], E_HImode)
              || GET_MODE (x4) != E_HImode
              || !
#line 3319 "../../gcc/config/i386/i386.md"
(TARGET_LP64 && ix86_check_movabs (insn, 1)))
            return -1;
          return 104; /* *movabshi_2 */

        case E_SImode:
          if (!register_operand (operands[0], E_SImode)
              || GET_MODE (x4) != E_SImode
              || !
#line 3319 "../../gcc/config/i386/i386.md"
(TARGET_LP64 && ix86_check_movabs (insn, 1)))
            return -1;
          return 105; /* *movabssi_2 */

        case E_DImode:
          if (!register_operand (operands[0], E_DImode)
              || GET_MODE (x4) != E_DImode
              || !
#line 3319 "../../gcc/config/i386/i386.md"
(TARGET_LP64 && ix86_check_movabs (insn, 1)))
            return -1;
          return 106; /* *movabsdi_2 */

        default:
          return -1;
        }

    case SUBREG:
      if (maybe_ne (SUBREG_BYTE (x4), 0))
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
          if (x7 != const_int_rtx[MAX_SAVED_CONST_INT + 8]
              || GET_MODE (x4) != E_QImode)
            return -1;
          x8 = XEXP (x5, 0);
          operands[1] = x8;
          if (!int248_register_operand (operands[1], E_VOIDmode))
            return -1;
          switch (GET_CODE (x2))
            {
            case STRICT_LOW_PART:
              x3 = XEXP (x2, 0);
              operands[0] = x3;
              if (!register_operand (operands[0], E_QImode))
                return -1;
              switch (pattern1353 ())
                {
                case 0:
                  if (!
#line 3464 "../../gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)))
                    return -1;
                  return 115; /* *movstrictqi_exthi_1 */

                case 1:
                  if (!
#line 3464 "../../gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)))
                    return -1;
                  return 116; /* *movstrictqi_extsi_1 */

                case 2:
                  if (!(
#line 3464 "../../gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)) && 
#line 1164 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                    return -1;
                  return 117; /* *movstrictqi_extdi_1 */

                default:
                  return -1;
                }

            case REG:
            case SUBREG:
            case MEM:
              operands[0] = x2;
              if (!nonimmediate_operand (operands[0], E_QImode))
                return -1;
              switch (pattern1353 ())
                {
                case 0:
                  return 125; /* *extzvqi */

                case 1:
                  return 126; /* *extzvqi */

                case 2:
                  if (!
#line 1164 "../../gcc/config/i386/i386.md"
(TARGET_64BIT))
                    return -1;
                  return 127; /* *extzvqi */

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
          operands[1] = x5;
          if (!general_operand (operands[1], E_QImode)
              || pattern420 (x2) != 0)
            return -1;
          switch (GET_MODE (x2))
            {
            case E_HImode:
              if (GET_MODE (x4) != E_HImode)
                return -1;
              return 131; /* *insvqi_1 */

            case E_SImode:
              if (GET_MODE (x4) != E_SImode)
                return -1;
              return 132; /* *insvqi_1 */

            case E_DImode:
              if (GET_MODE (x4) != E_DImode
                  || !
#line 1164 "../../gcc/config/i386/i386.md"
(TARGET_64BIT))
                return -1;
              return 133; /* *insvqi_1 */

            default:
              return -1;
            }

        case PLUS:
          if (pattern248 (x1, pnum_clobbers) != 0)
            return -1;
          x6 = XEXP (x5, 1);
          operands[2] = x6;
          if (general_operand (operands[2], E_QImode))
            {
              switch (pattern250 (x1))
                {
                case 0:
                  *pnum_clobbers = 1;
                  return 333; /* *addqi_exthi_1 */

                case 1:
                  *pnum_clobbers = 1;
                  return 334; /* *addqi_extsi_1 */

                case 2:
                  if (
#line 1164 "../../gcc/config/i386/i386.md"
(TARGET_64BIT))
                    {
                      *pnum_clobbers = 1;
                      return 335; /* *addqi_extdi_1 */
                    }
                  break;

                default:
                  break;
                }
            }
          if (GET_CODE (x6) != SUBREG)
            return -1;
          switch (pattern1727 (x1))
            {
            case 0:
              *pnum_clobbers = 1;
              return 336; /* *addqi_exthi_2 */

            case 1:
              *pnum_clobbers = 1;
              return 338; /* *addqi_extsi_2 */

            case 2:
              if (!
#line 1164 "../../gcc/config/i386/i386.md"
(TARGET_64BIT))
                return -1;
              *pnum_clobbers = 1;
              return 340; /* *addqi_extdi_2 */

            default:
              return -1;
            }

        case MINUS:
          if (pattern248 (x1, pnum_clobbers) != 0)
            return -1;
          x6 = XEXP (x5, 1);
          if (GET_CODE (x6) == SUBREG)
            {
              switch (pattern1727 (x1))
                {
                case 0:
                  *pnum_clobbers = 1;
                  return 337; /* *subqi_exthi_2 */

                case 1:
                  *pnum_clobbers = 1;
                  return 339; /* *subqi_extsi_2 */

                case 2:
                  if (
#line 1164 "../../gcc/config/i386/i386.md"
(TARGET_64BIT))
                    {
                      *pnum_clobbers = 1;
                      return 341; /* *subqi_extdi_2 */
                    }
                  break;

                default:
                  break;
                }
            }
          operands[2] = x6;
          if (!general_operand (operands[2], E_QImode))
            return -1;
          switch (pattern250 (x1))
            {
            case 0:
              *pnum_clobbers = 1;
              return 422; /* *subqi_exthi_1 */

            case 1:
              *pnum_clobbers = 1;
              return 423; /* *subqi_extsi_1 */

            case 2:
              if (!
#line 1164 "../../gcc/config/i386/i386.md"
(TARGET_64BIT))
                return -1;
              *pnum_clobbers = 1;
              return 424; /* *subqi_extdi_1 */

            default:
              return -1;
            }

        case AND:
          if (pattern248 (x1, pnum_clobbers) != 0)
            return -1;
          x6 = XEXP (x5, 1);
          operands[2] = x6;
          if (general_operand (operands[2], E_QImode))
            {
              switch (pattern250 (x1))
                {
                case 0:
                  *pnum_clobbers = 1;
                  return 773; /* *andqi_exthi_1 */

                case 1:
                  *pnum_clobbers = 1;
                  return 776; /* *andqi_extsi_1 */

                case 2:
                  if (
#line 1164 "../../gcc/config/i386/i386.md"
(TARGET_64BIT))
                    {
                      *pnum_clobbers = 1;
                      return 779; /* *andqi_extdi_1 */
                    }
                  break;

                default:
                  break;
                }
            }
          if (GET_CODE (x6) != SUBREG)
            return -1;
          switch (pattern1727 (x1))
            {
            case 0:
              *pnum_clobbers = 1;
              return 791; /* *andqi_exthi_2 */

            case 1:
              *pnum_clobbers = 1;
              return 794; /* *andqi_extsi_2 */

            case 2:
              if (!
#line 1164 "../../gcc/config/i386/i386.md"
(TARGET_64BIT))
                return -1;
              *pnum_clobbers = 1;
              return 797; /* *andqi_extdi_2 */

            default:
              return -1;
            }

        case IOR:
          if (pattern248 (x1, pnum_clobbers) != 0)
            return -1;
          x6 = XEXP (x5, 1);
          operands[2] = x6;
          if (general_operand (operands[2], E_QImode))
            {
              switch (pattern250 (x1))
                {
                case 0:
                  *pnum_clobbers = 1;
                  return 774; /* *iorqi_exthi_1 */

                case 1:
                  *pnum_clobbers = 1;
                  return 777; /* *iorqi_extsi_1 */

                case 2:
                  if (
#line 1164 "../../gcc/config/i386/i386.md"
(TARGET_64BIT))
                    {
                      *pnum_clobbers = 1;
                      return 780; /* *iorqi_extdi_1 */
                    }
                  break;

                default:
                  break;
                }
            }
          if (GET_CODE (x6) != SUBREG)
            return -1;
          switch (pattern1727 (x1))
            {
            case 0:
              *pnum_clobbers = 1;
              return 792; /* *iorqi_exthi_2 */

            case 1:
              *pnum_clobbers = 1;
              return 795; /* *iorqi_extsi_2 */

            case 2:
              if (!
#line 1164 "../../gcc/config/i386/i386.md"
(TARGET_64BIT))
                return -1;
              *pnum_clobbers = 1;
              return 798; /* *iorqi_extdi_2 */

            default:
              return -1;
            }

        case XOR:
          if (pattern248 (x1, pnum_clobbers) != 0)
            return -1;
          x6 = XEXP (x5, 1);
          operands[2] = x6;
          if (general_operand (operands[2], E_QImode))
            {
              switch (pattern250 (x1))
                {
                case 0:
                  *pnum_clobbers = 1;
                  return 775; /* *xorqi_exthi_1 */

                case 1:
                  *pnum_clobbers = 1;
                  return 778; /* *xorqi_extsi_1 */

                case 2:
                  if (
#line 1164 "../../gcc/config/i386/i386.md"
(TARGET_64BIT))
                    {
                      *pnum_clobbers = 1;
                      return 781; /* *xorqi_extdi_1 */
                    }
                  break;

                default:
                  break;
                }
            }
          if (GET_CODE (x6) != SUBREG)
            return -1;
          switch (pattern1727 (x1))
            {
            case 0:
              *pnum_clobbers = 1;
              return 793; /* *xorqi_exthi_2 */

            case 1:
              *pnum_clobbers = 1;
              return 796; /* *xorqi_extsi_2 */

            case 2:
              if (!
#line 1164 "../../gcc/config/i386/i386.md"
(TARGET_64BIT))
                return -1;
              *pnum_clobbers = 1;
              return 799; /* *xorqi_extdi_2 */

            default:
              return -1;
            }

        case NEG:
          if (pnum_clobbers == NULL)
            return -1;
          switch (pattern249 (x1))
            {
            case 0:
              *pnum_clobbers = 1;
              return 988; /* *negqi_exthi_1 */

            case 1:
              *pnum_clobbers = 1;
              return 989; /* *negqi_extsi_1 */

            case 2:
              if (!
#line 1164 "../../gcc/config/i386/i386.md"
(TARGET_64BIT))
                return -1;
              *pnum_clobbers = 1;
              return 990; /* *negqi_extdi_1 */

            default:
              return -1;
            }

        case NOT:
          switch (pattern249 (x1))
            {
            case 0:
              return 1049; /* *one_cmplqi_exthi_1 */

            case 1:
              return 1050; /* *one_cmplqi_extsi_1 */

            case 2:
              if (!
#line 1164 "../../gcc/config/i386/i386.md"
(TARGET_64BIT))
                return -1;
              return 1051; /* *one_cmplqi_extdi_1 */

            default:
              return -1;
            }

        case ASHIFT:
          switch (pattern251 (x1, pnum_clobbers))
            {
            case 0:
              *pnum_clobbers = 1;
              return 1119; /* *ashlqi_exthi_1 */

            case 1:
              *pnum_clobbers = 1;
              return 1120; /* *ashlqi_extsi_1 */

            case 2:
              if (!
#line 1164 "../../gcc/config/i386/i386.md"
(TARGET_64BIT))
                return -1;
              *pnum_clobbers = 1;
              return 1121; /* *ashlqi_extdi_1 */

            default:
              return -1;
            }

        case LSHIFTRT:
          switch (pattern251 (x1, pnum_clobbers))
            {
            case 0:
              *pnum_clobbers = 1;
              return 1238; /* *lshrqi_exthi_1 */

            case 1:
              *pnum_clobbers = 1;
              return 1240; /* *lshrqi_extsi_1 */

            case 2:
              if (!
#line 1164 "../../gcc/config/i386/i386.md"
(TARGET_64BIT))
                return -1;
              *pnum_clobbers = 1;
              return 1242; /* *lshrqi_extdi_1 */

            default:
              return -1;
            }

        case ASHIFTRT:
          switch (pattern251 (x1, pnum_clobbers))
            {
            case 0:
              *pnum_clobbers = 1;
              return 1239; /* *ashrqi_exthi_1 */

            case 1:
              *pnum_clobbers = 1;
              return 1241; /* *ashrqi_extsi_1 */

            case 2:
              if (!
#line 1164 "../../gcc/config/i386/i386.md"
(TARGET_64BIT))
                return -1;
              *pnum_clobbers = 1;
              return 1243; /* *ashrqi_extdi_1 */

            default:
              return -1;
            }

        case SS_TRUNCATE:
          if (pattern252 (x1) != 0
              || !
#line 15412 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()))
            return -1;
          return 7295; /* *avx512vl_ss_truncatev2div2qi2_store_2 */

        case TRUNCATE:
          if (pattern252 (x1) != 0
              || !
#line 15412 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()))
            return -1;
          return 7296; /* *avx512vl_truncatev2div2qi2_store_2 */

        case US_TRUNCATE:
          if (pattern252 (x1) != 0
              || !
#line 15412 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()))
            return -1;
          return 7297; /* *avx512vl_us_truncatev2div2qi2_store_2 */

        default:
          return -1;
        }

    case REG:
      if (REGNO (x4) != 17
          || pattern55 (x1, 
E_CCCmode) != 0
          || !
#line 9883 "../../gcc/config/i386/i386.md"
(ix86_pre_reload_split ()))
        return -1;
      return 529; /* *setccc */

    case CONST_INT:
      if (pnum_clobbers == NULL
          || GET_CODE (x2) != ZERO_EXTRACT)
        return -1;
      x9 = XEXP (x2, 1);
      if (x9 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
        return -1;
      x3 = XEXP (x2, 0);
      operands[0] = x3;
      x10 = XEXP (x2, 2);
      operands[1] = x10;
      switch (XWINT (x4, 0))
        {
        case 0L:
          switch (GET_CODE (operands[1]))
            {
            case REG:
            case SUBREG:
              if (!register_operand (operands[1], E_QImode)
                  || GET_MODE (x2) != E_HImode)
                return -1;
              switch (GET_MODE (operands[0]))
                {
                case E_QImode:
                  if (!nonimmediate_operand (operands[0], E_QImode)
                      || !
#line 18963 "../../gcc/config/i386/i386.md"
(TARGET_USE_BT && ix86_pre_reload_split ()))
                    return -1;
                  *pnum_clobbers = 1;
                  return 1411; /* *btrqi_2 */

                case E_HImode:
                  if (!nonimmediate_operand (operands[0], E_HImode)
                      || !
#line 18963 "../../gcc/config/i386/i386.md"
(TARGET_USE_BT && ix86_pre_reload_split ()))
                    return -1;
                  *pnum_clobbers = 1;
                  return 1412; /* *btrhi_2 */

                default:
                  return -1;
                }

            case CONST_INT:
              if (!const_0_to_63_operand (operands[1], E_QImode)
                  || GET_MODE (x2) != E_DImode
                  || !nonimmediate_operand (operands[0], E_DImode)
                  || !
#line 19027 "../../gcc/config/i386/i386.md"
(TARGET_64BIT && (TARGET_USE_BT || reload_completed)))
                return -1;
              *pnum_clobbers = 1;
              return 1414; /* *btrq_imm */

            default:
              return -1;
            }

        case 1L:
          if (GET_MODE (x2) != E_DImode
              || !nonimmediate_operand (operands[0], E_DImode)
              || !const_0_to_63_operand (operands[1], E_QImode)
              || !
#line 19014 "../../gcc/config/i386/i386.md"
(TARGET_64BIT && (TARGET_USE_BT || reload_completed)))
            return -1;
          *pnum_clobbers = 1;
          return 1413; /* *btsq_imm */

        default:
          return -1;
        }

    case LABEL_REF:
      if (GET_CODE (x2) != PC)
        return -1;
      x5 = XEXP (x4, 0);
      operands[0] = x5;
      return 1459; /* jump */

    default:
      return -1;
    }
}

 int
recog_35 (rtx x1 ATTRIBUTE_UNUSED,
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
#line 12501 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (AND, TImode, operands, TARGET_APX_NDD)) && 
#line 1236 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return -1;
          *pnum_clobbers = 1;
          return 704; /* *andti3_doubleword */

        case E_HImode:
          x2 = XEXP (x1, 1);
          if (pattern73 (x2, 
E_HImode) != 0)
            return -1;
          if (
#line 12671 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (AND, HImode, operands, TARGET_APX_NDD)
   && TARGET_APX_NF))
            return 719; /* *andhi_1_nf */
          if (pnum_clobbers == NULL
              || !
#line 12671 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (AND, HImode, operands, TARGET_APX_NDD)
   && true))
            return -1;
          *pnum_clobbers = 1;
          return 720; /* *andhi_1 */

        case E_QImode:
          x2 = XEXP (x1, 1);
          if (pattern73 (x2, 
E_QImode) != 0)
            return -1;
          if (
#line 12709 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (AND, QImode, operands, TARGET_APX_NDD)
   && TARGET_APX_NF))
            return 723; /* *andqi_1_nf */
          if (pnum_clobbers == NULL
              || !
#line 12709 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (AND, QImode, operands, TARGET_APX_NDD)
   && true))
            return -1;
          *pnum_clobbers = 1;
          return 724; /* *andqi_1 */

        case E_V2SFmode:
          x2 = XEXP (x1, 1);
          if (pattern7 (x2, 
E_V2SFmode) != 0
              || !
#line 1357 "../../gcc/config/i386/mmx.md"
(TARGET_MMX_WITH_SSE))
            return -1;
          return 2071; /* andv2sf3 */

        case E_V2BFmode:
          x2 = XEXP (x1, 1);
          if (pattern7 (x2, 
E_V2BFmode) != 0
              || !
#line 2582 "../../gcc/config/i386/mmx.md"
(TARGET_SSE))
            return -1;
          return 2105; /* andv2bf3 */

        case E_V4BFmode:
          x2 = XEXP (x1, 1);
          if (pattern7 (x2, 
E_V4BFmode) != 0
              || !(
#line 2582 "../../gcc/config/i386/mmx.md"
(TARGET_SSE) && 
#line 2224 "../../gcc/config/i386/mmx.md"
(TARGET_MMX_WITH_SSE)))
            return -1;
          return 2108; /* andv4bf3 */

        case E_V2HFmode:
          x2 = XEXP (x1, 1);
          if (pattern7 (x2, 
E_V2HFmode) != 0
              || !
#line 2582 "../../gcc/config/i386/mmx.md"
(TARGET_SSE))
            return -1;
          return 2111; /* andv2hf3 */

        case E_V4HFmode:
          x2 = XEXP (x1, 1);
          if (pattern7 (x2, 
E_V4HFmode) != 0
              || !(
#line 2582 "../../gcc/config/i386/mmx.md"
(TARGET_SSE) && 
#line 2225 "../../gcc/config/i386/mmx.md"
(TARGET_MMX_WITH_SSE)))
            return -1;
          return 2114; /* andv4hf3 */

        case E_V8QImode:
          x2 = XEXP (x1, 1);
          if (pattern8 (x2, 
E_V8QImode) != 0
              || !
#line 4687 "../../gcc/config/i386/mmx.md"
((TARGET_MMX || TARGET_MMX_WITH_SSE)
   && ix86_binary_operator_ok (AND, V8QImode, operands)))
            return -1;
          return 2268; /* *mmx_andv8qi3 */

        case E_V4HImode:
          x2 = XEXP (x1, 1);
          if (pattern8 (x2, 
E_V4HImode) != 0
              || !
#line 4687 "../../gcc/config/i386/mmx.md"
((TARGET_MMX || TARGET_MMX_WITH_SSE)
   && ix86_binary_operator_ok (AND, V4HImode, operands)))
            return -1;
          return 2271; /* *mmx_andv4hi3 */

        case E_V2SImode:
          x2 = XEXP (x1, 1);
          if (pattern8 (x2, 
E_V2SImode) != 0
              || !
#line 4687 "../../gcc/config/i386/mmx.md"
((TARGET_MMX || TARGET_MMX_WITH_SSE)
   && ix86_binary_operator_ok (AND, V2SImode, operands)))
            return -1;
          return 2274; /* *mmx_andv2si3 */

        case E_V4QImode:
          x2 = XEXP (x1, 1);
          if (pattern74 (x2, pnum_clobbers, 
E_V4QImode) != 0
              || !
#line 4713 "../../gcc/config/i386/mmx.md"
(ix86_binary_operator_ok (AND, V4QImode, operands)))
            return -1;
          *pnum_clobbers = 1;
          return 2277; /* *andv4qi3 */

        case E_V2QImode:
          x2 = XEXP (x1, 1);
          if (pattern74 (x2, pnum_clobbers, 
E_V2QImode) != 0
              || !
#line 4713 "../../gcc/config/i386/mmx.md"
(ix86_binary_operator_ok (AND, V2QImode, operands)))
            return -1;
          *pnum_clobbers = 1;
          return 2280; /* *andv2qi3 */

        case E_V2HImode:
          x2 = XEXP (x1, 1);
          if (pattern74 (x2, pnum_clobbers, 
E_V2HImode) != 0
              || !
#line 4713 "../../gcc/config/i386/mmx.md"
(ix86_binary_operator_ok (AND, V2HImode, operands)))
            return -1;
          *pnum_clobbers = 1;
          return 2283; /* *andv2hi3 */

        case E_BFmode:
          x2 = XEXP (x1, 1);
          if (pattern7 (x2, 
E_BFmode) != 0
              || !
#line 5649 "../../gcc/config/i386/sse.md"
(TARGET_SSE))
            return -1;
          return 3778; /* andbf3 */

        case E_HFmode:
          x2 = XEXP (x1, 1);
          if (pattern7 (x2, 
E_HFmode) != 0
              || !
#line 5649 "../../gcc/config/i386/sse.md"
(TARGET_SSE))
            return -1;
          return 3781; /* andhf3 */

        case E_SFmode:
          x2 = XEXP (x1, 1);
          if (pattern7 (x2, 
E_SFmode) != 0
              || !
#line 5649 "../../gcc/config/i386/sse.md"
(TARGET_SSE))
            return -1;
          return 3784; /* andsf3 */

        case E_DFmode:
          x2 = XEXP (x1, 1);
          if (pattern7 (x2, 
E_DFmode) != 0
              || !(
#line 5649 "../../gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 1352 "../../gcc/config/i386/i386.md"
(TARGET_SSE2)))
            return -1;
          return 3787; /* anddf3 */

        case E_TFmode:
          x2 = XEXP (x1, 1);
          if (pattern25 (x2, 
E_TFmode) != 0
              || !
#line 5723 "../../gcc/config/i386/sse.md"
(TARGET_SSE && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
            return -1;
          return 3790; /* *andtf3 */

        default:
          return -1;
        }

    case 1:
      if (!
#line 12741 "../../gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)))
        return -1;
      *pnum_clobbers = 1;
      return 725; /* *andqi_1_slp */

    case 2:
      if (!
#line 12741 "../../gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)))
        return -1;
      *pnum_clobbers = 1;
      return 728; /* *andhi_1_slp */

    default:
      return -1;
    }
}

 int
recog_42 (rtx x1 ATTRIBUTE_UNUSED,
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
    case CONST_INT:
    case REG:
    case SUBREG:
    case MEM:
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
E_TImode) == 0
              && (
#line 15203 "../../gcc/config/i386/i386.md"
(((INTVAL (operands[3]) & (8 * BITS_PER_UNIT)) == 0
    || ((INTVAL (operands[3]) & (2 * 8 * BITS_PER_UNIT - 1))
	 == (2 * 8 * BITS_PER_UNIT - 1)))
   && ix86_pre_reload_split ()) && 
#line 1236 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
            {
              *pnum_clobbers = 1;
              return 1053; /* *ashlti3_doubleword_mask */
            }
          operands[2] = x4;
          switch (pattern254 (x1, pnum_clobbers))
            {
            case 0:
              switch (GET_MODE (operands[0]))
                {
                case E_TImode:
                  if (pnum_clobbers == NULL
                      || !register_operand (operands[0], E_TImode)
                      || GET_MODE (x2) != E_TImode
                      || !reg_or_pm1_operand (operands[1], E_TImode)
                      || !nonmemory_operand (operands[2], E_QImode)
                      || !
#line 1196 "../../gcc/config/i386/i386.md"
(TARGET_64BIT))
                    return -1;
                  *pnum_clobbers = 1;
                  return 1057; /* ashlti3_doubleword */

                case E_HImode:
                  if (pattern624 (x2, 
E_HImode) != 0)
                    return -1;
                  if (
#line 16095 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ASHIFT, HImode, operands, TARGET_APX_NDD)
   && TARGET_APX_NF))
                    return 1104; /* *ashlhi3_1_nf */
                  if (pnum_clobbers == NULL
                      || !
#line 16095 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ASHIFT, HImode, operands, TARGET_APX_NDD)
   && true))
                    return -1;
                  *pnum_clobbers = 1;
                  return 1105; /* *ashlhi3_1 */

                case E_QImode:
                  if (pattern624 (x2, 
E_QImode) != 0)
                    return -1;
                  if (
#line 16154 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ASHIFT, QImode, operands, TARGET_APX_NDD)
   && TARGET_APX_NF))
                    return 1106; /* *ashlqi3_1_nf */
                  if (pnum_clobbers == NULL
                      || !
#line 16154 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ASHIFT, QImode, operands, TARGET_APX_NDD)
   && true))
                    return -1;
                  *pnum_clobbers = 1;
                  return 1107; /* *ashlqi3_1 */

                case E_V4HImode:
                  if (pattern738 (x2, 
E_V4HImode, 
E_DImode) != 0
                      || !
#line 3891 "../../gcc/config/i386/mmx.md"
(TARGET_MMX || TARGET_MMX_WITH_SSE))
                    return -1;
                  return 2196; /* mmx_ashlv4hi3 */

                case E_V2SImode:
                  if (pattern738 (x2, 
E_V2SImode, 
E_DImode) != 0
                      || !
#line 3891 "../../gcc/config/i386/mmx.md"
(TARGET_MMX || TARGET_MMX_WITH_SSE))
                    return -1;
                  return 2198; /* mmx_ashlv2si3 */

                case E_V1DImode:
                  if (pattern738 (x2, 
E_V1DImode, 
E_DImode) != 0
                      || !
#line 3891 "../../gcc/config/i386/mmx.md"
(TARGET_MMX || TARGET_MMX_WITH_SSE))
                    return -1;
                  return 2200; /* mmx_ashlv1di3 */

                case E_V1SImode:
                  if (pattern738 (x2, 
E_V1SImode, 
E_DImode) != 0
                      || !
#line 3928 "../../gcc/config/i386/mmx.md"
(TARGET_SSE2))
                    return -1;
                  return 2202; /* mmx_ashlv1si3 */

                case E_V2HImode:
                  if (pattern738 (x2, 
E_V2HImode, 
E_DImode) != 0
                      || !
#line 3945 "../../gcc/config/i386/mmx.md"
(TARGET_SSE2))
                    return -1;
                  return 2204; /* ashlv2hi3 */

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
                  return 2208; /* ashlv2qi3 */

                default:
                  return -1;
                }

            case 1:
              if (!
#line 16233 "../../gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)))
                return -1;
              *pnum_clobbers = 1;
              return 1108; /* *ashlqi3_1_slp */

            case 2:
              if (!
#line 16233 "../../gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)))
                return -1;
              *pnum_clobbers = 1;
              return 1109; /* *ashlhi3_1_slp */

            default:
              return -1;
            }

        case AND:
          if (pattern0 (x1, pnum_clobbers) != 0
              || !(
#line 15264 "../../gcc/config/i386/i386.md"
(((INTVAL (operands[3]) & (8 * BITS_PER_UNIT)) == 0
    || ((INTVAL (operands[3]) & (2 * 8 * BITS_PER_UNIT - 1))
	 == (2 * 8 * BITS_PER_UNIT - 1)))
   && ix86_pre_reload_split ()) && 
#line 1236 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return -1;
          *pnum_clobbers = 1;
          return 1055; /* *ashlti3_doubleword_mask_1 */

        default:
          return -1;
        }

    case SIGN_EXTEND:
      if (pattern42 (x1, pnum_clobbers) != 0
          || !(
#line 15365 "../../gcc/config/i386/i386.md"
(INTVAL (operands[2]) >= 8 * BITS_PER_UNIT
   && INTVAL (operands[2]) < 8 * BITS_PER_UNIT * 2) && 
#line 1236 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
        return -1;
      *pnum_clobbers = 1;
      return 1060; /* *ashlti3_doubleword_highpart */

    case ZERO_EXTEND:
      if (pattern42 (x1, pnum_clobbers) != 0
          || !(
#line 15365 "../../gcc/config/i386/i386.md"
(INTVAL (operands[2]) >= 8 * BITS_PER_UNIT
   && INTVAL (operands[2]) < 8 * BITS_PER_UNIT * 2) && 
#line 1236 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
        return -1;
      *pnum_clobbers = 1;
      return 1061; /* *ashlti3_doubleword_highpart */

    default:
      return -1;
    }
}

 int
recog_50 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  switch (GET_CODE (x2))
    {
    case LTU:
      switch (pattern43 (x1))
        {
        case 0:
          if (
#line 9893 "../../gcc/config/i386/i386.md"
(ix86_pre_reload_split ()))
            return 530; /* *setcc_qi_negqi_ccc_1_cc */
          break;

        case 1:
          if (
#line 9893 "../../gcc/config/i386/i386.md"
(ix86_pre_reload_split ()))
            return 531; /* *setcc_qi_negqi_ccc_1_ccc */
          break;

        default:
          break;
        }
      break;

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
      res = recog_48 (x1, insn, pnum_clobbers);
      if (res >= 0)
        return res;
      break;

    default:
      break;
    }
  operands[1] = x2;
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) == REG
      && REGNO (x3) == 17)
    {
      res = recog_49 (x1, insn, pnum_clobbers);
      if (res >= 0)
        return res;
    }
  switch (GET_CODE (operands[1]))
    {
    case NE:
    case EQ:
    case GEU:
    case GTU:
    case LEU:
    case LTU:
      x4 = XEXP (x1, 0);
      operands[0] = x4;
      operands[2] = x3;
      x5 = XEXP (x2, 1);
      operands[3] = x5;
      switch (GET_MODE (operands[0]))
        {
        case E_V8QImode:
          if (pattern745 (
E_V8QImode) != 0
              || !
#line 4218 "../../gcc/config/i386/mmx.md"
(TARGET_XOP))
            return -1;
          return 2229; /* *xop_maskcmp_unsv8qi3 */

        case E_V4HImode:
          if (pattern745 (
E_V4HImode) != 0
              || !
#line 4218 "../../gcc/config/i386/mmx.md"
(TARGET_XOP))
            return -1;
          return 2230; /* *xop_maskcmp_unsv4hi3 */

        case E_V2SImode:
          if (pattern745 (
E_V2SImode) != 0
              || !
#line 4218 "../../gcc/config/i386/mmx.md"
(TARGET_XOP))
            return -1;
          return 2231; /* *xop_maskcmp_unsv2si3 */

        case E_V4QImode:
          if (pattern745 (
E_V4QImode) != 0
              || !
#line 4228 "../../gcc/config/i386/mmx.md"
(TARGET_XOP))
            return -1;
          return 2232; /* *xop_maskcmp_unsv4qi3 */

        case E_V2QImode:
          if (pattern745 (
E_V2QImode) != 0
              || !
#line 4228 "../../gcc/config/i386/mmx.md"
(TARGET_XOP))
            return -1;
          return 2233; /* *xop_maskcmp_unsv2qi3 */

        case E_V2HImode:
          if (pattern745 (
E_V2HImode) != 0
              || !
#line 4228 "../../gcc/config/i386/mmx.md"
(TARGET_XOP))
            return -1;
          return 2234; /* *xop_maskcmp_unsv2hi3 */

        default:
          return -1;
        }

    default:
      return -1;
    }
}

 int
recog_56 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
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
      operands[1] = x3;
      res = recog_55 (x1, insn, pnum_clobbers);
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
          if (x6 != const_int_rtx[MAX_SAVED_CONST_INT + 8])
            return -1;
          x7 = XEXP (x2, 1);
          if (pattern601 (x7) != 0)
            return -1;
          x8 = XEXP (x7, 0);
          operands[4] = x8;
          x9 = XEXP (x8, 1);
          if (x9 != const_int_rtx[MAX_SAVED_CONST_INT + 8])
            return -1;
          x10 = XEXP (x8, 2);
          if (x10 != const_int_rtx[MAX_SAVED_CONST_INT + 8]
              || GET_MODE (x2) != E_QImode)
            return -1;
          switch (pattern1267 (x1))
            {
            case 0:
              if (!
#line 8248 "../../gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)))
                return -1;
              *pnum_clobbers = 1;
              return 408; /* *subqi_exthi_2_slp */

            case 1:
              if (!
#line 8248 "../../gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)))
                return -1;
              *pnum_clobbers = 1;
              return 409; /* *subqi_extsi_2_slp */

            case 2:
              if (!(
#line 8248 "../../gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)) && 
#line 1164 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return -1;
              *pnum_clobbers = 1;
              return 410; /* *subqi_extdi_2_slp */

            case 3:
              *pnum_clobbers = 1;
              return 419; /* *subqi_ext2hi_0 */

            case 4:
              *pnum_clobbers = 1;
              return 420; /* *subqi_ext2si_0 */

            case 5:
              if (!
#line 1164 "../../gcc/config/i386/i386.md"
(TARGET_64BIT))
                return -1;
              *pnum_clobbers = 1;
              return 421; /* *subqi_ext2di_0 */

            default:
              return -1;
            }

        default:
          return -1;
        }

    case MINUS:
      if (pnum_clobbers == NULL)
        return -1;
      x11 = XEXP (x1, 0);
      operands[0] = x11;
      switch (pattern289 (x2))
        {
        case 0:
          switch (GET_MODE (operands[0]))
            {
            case E_QImode:
              if (pattern1358 (x2, 
E_QImode) != 0
                  || !
#line 9277 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (MINUS, QImode, operands, TARGET_APX_NDD)))
                return -1;
              *pnum_clobbers = 1;
              return 487; /* subqi3_carry */

            case E_HImode:
              if (pattern1358 (x2, 
E_HImode) != 0
                  || !
#line 9277 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (MINUS, HImode, operands, TARGET_APX_NDD)))
                return -1;
              *pnum_clobbers = 1;
              return 488; /* subhi3_carry */

            default:
              return -1;
            }

        case 1:
          switch (GET_MODE (operands[0]))
            {
            case E_QImode:
              if (pattern1272 (x2, 
E_QImode) != 0
                  || !
#line 10230 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (MINUS, QImode, operands, TARGET_APX_NDD)
   && ix86_pre_reload_split ()))
                return -1;
              *pnum_clobbers = 1;
              return 570; /* *subqi3_eq */

            case E_HImode:
              if (pattern1272 (x2, 
E_HImode) != 0
                  || !
#line 10230 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (MINUS, HImode, operands, TARGET_APX_NDD)
   && ix86_pre_reload_split ()))
                return -1;
              *pnum_clobbers = 1;
              return 571; /* *subhi3_eq */

            default:
              return -1;
            }

        default:
          return -1;
        }

    case VEC_SELECT:
      switch (pattern90 (x1))
        {
        case 0:
          x4 = XEXP (x3, 0);
          operands[1] = x4;
          if (pattern975 (x2) != 0)
            return -1;
          x7 = XEXP (x2, 1);
          x8 = XEXP (x7, 0);
          if (!rtx_equal_p (x8, operands[1]))
            return -1;
          switch (GET_MODE (operands[0]))
            {
            case E_SFmode:
              if (pattern1511 (x2, 
E_SFmode, 
E_V2SFmode) != 0
                  || !
#line 1058 "../../gcc/config/i386/mmx.md"
(TARGET_SSE3 && TARGET_MMX_WITH_SSE && ix86_partial_vec_fp_math
   && ix86_pre_reload_split ()))
                return -1;
              return 2061; /* *mmx_hsubv2sf3_low */

            case E_DFmode:
              if (pattern1511 (x2, 
E_DFmode, 
E_V2DFmode) != 0
                  || !
#line 3769 "../../gcc/config/i386/sse.md"
(TARGET_SSE3 && TARGET_V2DF_REDUCTION_PREFER_HADDPD))
                return -1;
              return 3184; /* *sse3_hsubv2df3_low */

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
              return 8594; /* ssse3_phsubwv4hi3 */

            case 1:
              if (!
#line 22702 "../../gcc/config/i386/sse.md"
((TARGET_MMX || TARGET_MMX_WITH_SSE) && TARGET_SSSE3))
                return -1;
              return 8601; /* ssse3_phsubdv2si3 */

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
recog_63 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) != PARALLEL)
    return -1;
  x4 = XEXP (x1, 0);
  operands[0] = x4;
  x5 = XEXP (x2, 0);
  switch (GET_CODE (x5))
    {
    case REG:
    case SUBREG:
    case MEM:
      return recog_62 (x1, insn, pnum_clobbers);

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
                  if (
#line 1691 "../../gcc/config/i386/mmx.md"
(TARGET_MMX_WITH_SSE))
                    return 2081; /* *vec_interleave_lowv2sf */
                  break;

                case 1:
                  if (
#line 4991 "../../gcc/config/i386/mmx.md"
(TARGET_MMX || TARGET_MMX_WITH_SSE))
                    return 2297; /* mmx_punpckldq */
                  break;

                case 2:
                  if (
#line 1708 "../../gcc/config/i386/mmx.md"
(TARGET_MMX_WITH_SSE))
                    return 2082; /* *vec_interleave_highv2sf */
                  break;

                case 3:
                  if (
#line 4970 "../../gcc/config/i386/mmx.md"
(TARGET_MMX || TARGET_MMX_WITH_SSE))
                    return 2296; /* mmx_punpckhdq */
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
              if (!
#line 6197 "../../gcc/config/i386/mmx.md"
(TARGET_SSE2))
                return -1;
              return 2362; /* *punpckwd */

            case 1:
              if (!
#line 6197 "../../gcc/config/i386/mmx.md"
(TARGET_SSE2))
                return -1;
              return 2363; /* *punpckwd */

            case 2:
              if (!
#line 6197 "../../gcc/config/i386/mmx.md"
(TARGET_SSE2))
                return -1;
              return 2364; /* *punpckwd */

            default:
              return -1;
            }

        case 1:
          if (!
#line 4850 "../../gcc/config/i386/mmx.md"
(TARGET_MMX || TARGET_MMX_WITH_SSE))
            return -1;
          return 2290; /* mmx_punpckhbw */

        case 2:
          if (!
#line 4890 "../../gcc/config/i386/mmx.md"
(TARGET_MMX || TARGET_MMX_WITH_SSE))
            return -1;
          return 2292; /* mmx_punpcklbw */

        case 3:
          if (!
#line 4871 "../../gcc/config/i386/mmx.md"
(TARGET_SSE2))
            return -1;
          return 2291; /* mmx_punpckhbw_low */

        case 4:
          if (!
#line 4928 "../../gcc/config/i386/mmx.md"
(TARGET_MMX || TARGET_MMX_WITH_SSE))
            return -1;
          return 2294; /* mmx_punpckhwd */

        case 5:
          if (!
#line 4911 "../../gcc/config/i386/mmx.md"
(TARGET_SSE2))
            return -1;
          return 2293; /* mmx_punpcklbw_low */

        case 6:
          if (!
#line 4949 "../../gcc/config/i386/mmx.md"
(TARGET_MMX || TARGET_MMX_WITH_SSE))
            return -1;
          return 2295; /* mmx_punpcklwd */

        default:
          return -1;
        }

    case UNSPEC:
      if (pattern272 (x2) != 0
          || !
#line 8418 "../../gcc/config/i386/sse.md"
((TARGET_MMX || TARGET_MMX_WITH_SSE) && TARGET_SSE))
        return -1;
      return 4780; /* sse_cvtps2pi */

    case FIX:
      if (pattern274 (x2) != 0
          || !
#line 8482 "../../gcc/config/i386/sse.md"
((TARGET_MMX || TARGET_MMX_WITH_SSE) && TARGET_SSE))
        return -1;
      return 4782; /* sse_cvttps2pi */

    default:
      return -1;
    }
}

 int
recog_67 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  operands[0] = x2;
  x3 = XEXP (x1, 1);
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
      x6 = XEXP (x3, 2);
      switch (GET_CODE (x6))
        {
        case REG:
        case SUBREG:
        case MEM:
        case VEC_DUPLICATE:
          operands[3] = x6;
          switch (GET_MODE (operands[0]))
            {
            case E_SFmode:
              if (!register_operand (operands[0], E_SFmode)
                  || GET_MODE (x3) != E_SFmode)
                return -1;
              if (nonimmediate_operand (operands[1], E_SFmode)
                  && nonimmediate_operand (operands[2], E_SFmode)
                  && nonimmediate_operand (operands[3], E_SFmode)
                  && 
#line 5901 "../../gcc/config/i386/sse.md"
(TARGET_FMA || TARGET_FMA4))
                return 3793; /* *fma_fmadd_sf */
              if (!bcst_vector_operand (operands[1], E_SFmode)
                  || !bcst_vector_operand (operands[2], E_SFmode)
                  || !bcst_vector_operand (operands[3], E_SFmode)
                  || !
#line 5929 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && 1 && 1))
                return -1;
              return 3810; /* *fma_fmadd_sf */

            case E_DFmode:
              if (!register_operand (operands[0], E_DFmode)
                  || GET_MODE (x3) != E_DFmode)
                return -1;
              if (nonimmediate_operand (operands[1], E_DFmode)
                  && nonimmediate_operand (operands[2], E_DFmode)
                  && nonimmediate_operand (operands[3], E_DFmode)
                  && 
#line 5901 "../../gcc/config/i386/sse.md"
(TARGET_FMA || TARGET_FMA4))
                return 3794; /* *fma_fmadd_df */
              if (!bcst_vector_operand (operands[1], E_DFmode)
                  || !bcst_vector_operand (operands[2], E_DFmode)
                  || !bcst_vector_operand (operands[3], E_DFmode)
                  || !
#line 5929 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && 1 && 1))
                return -1;
              return 3821; /* *fma_fmadd_df */

            case E_HFmode:
              if (pattern864 (x3, 
E_HFmode) != 0
                  || !(
#line 5929 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && 1 && 1) && 
#line 5917 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16)))
                return -1;
              return 3809; /* *fma_fmadd_hf */

            default:
              return -1;
            }

        case NEG:
          x7 = XEXP (x6, 0);
          operands[3] = x7;
          switch (GET_MODE (operands[0]))
            {
            case E_SFmode:
              if (!register_operand (operands[0], E_SFmode)
                  || GET_MODE (x3) != E_SFmode
                  || GET_MODE (x6) != E_SFmode)
                return -1;
              if (nonimmediate_operand (operands[1], E_SFmode)
                  && nonimmediate_operand (operands[2], E_SFmode)
                  && nonimmediate_operand (operands[3], E_SFmode)
                  && 
#line 6000 "../../gcc/config/i386/sse.md"
(TARGET_FMA || TARGET_FMA4))
                return 3862; /* *fma_fmsub_sf */
              if (!bcst_vector_operand (operands[1], E_SFmode)
                  || !bcst_vector_operand (operands[2], E_SFmode)
                  || !bcst_vector_operand (operands[3], E_SFmode)
                  || !
#line 6032 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && 1 && 1))
                return -1;
              return 3879; /* *fma_fmsub_sf */

            case E_DFmode:
              if (!register_operand (operands[0], E_DFmode)
                  || GET_MODE (x3) != E_DFmode
                  || GET_MODE (x6) != E_DFmode)
                return -1;
              if (nonimmediate_operand (operands[1], E_DFmode)
                  && nonimmediate_operand (operands[2], E_DFmode)
                  && nonimmediate_operand (operands[3], E_DFmode)
                  && 
#line 6000 "../../gcc/config/i386/sse.md"
(TARGET_FMA || TARGET_FMA4))
                return 3863; /* *fma_fmsub_df */
              if (!bcst_vector_operand (operands[1], E_DFmode)
                  || !bcst_vector_operand (operands[2], E_DFmode)
                  || !bcst_vector_operand (operands[3], E_DFmode)
                  || !
#line 6032 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && 1 && 1))
                return -1;
              return 3890; /* *fma_fmsub_df */

            case E_HFmode:
              if (pattern865 (x3, 
E_HFmode) != 0
                  || !(
#line 6032 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && 1 && 1) && 
#line 5917 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16)))
                return -1;
              return 3878; /* *fma_fmsub_hf */

            default:
              return -1;
            }

        default:
          return -1;
        }

    case NEG:
      x8 = XEXP (x5, 0);
      operands[1] = x8;
      x6 = XEXP (x3, 2);
      switch (GET_CODE (x6))
        {
        case REG:
        case SUBREG:
        case MEM:
        case VEC_DUPLICATE:
          operands[3] = x6;
          switch (GET_MODE (operands[0]))
            {
            case E_SFmode:
              if (!register_operand (operands[0], E_SFmode)
                  || GET_MODE (x3) != E_SFmode
                  || GET_MODE (x5) != E_SFmode)
                return -1;
              if (nonimmediate_operand (operands[1], E_SFmode)
                  && nonimmediate_operand (operands[2], E_SFmode)
                  && nonimmediate_operand (operands[3], E_SFmode)
                  && 
#line 6106 "../../gcc/config/i386/sse.md"
(TARGET_FMA || TARGET_FMA4))
                return 3931; /* *fma_fnmadd_sf */
              if (!bcst_vector_operand (operands[1], E_SFmode)
                  || !bcst_vector_operand (operands[2], E_SFmode)
                  || !bcst_vector_operand (operands[3], E_SFmode)
                  || !
#line 6138 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && 1 && 1))
                return -1;
              return 3948; /* *fma_fnmadd_sf */

            case E_DFmode:
              if (!register_operand (operands[0], E_DFmode)
                  || GET_MODE (x3) != E_DFmode
                  || GET_MODE (x5) != E_DFmode)
                return -1;
              if (nonimmediate_operand (operands[1], E_DFmode)
                  && nonimmediate_operand (operands[2], E_DFmode)
                  && nonimmediate_operand (operands[3], E_DFmode)
                  && 
#line 6106 "../../gcc/config/i386/sse.md"
(TARGET_FMA || TARGET_FMA4))
                return 3932; /* *fma_fnmadd_df */
              if (!bcst_vector_operand (operands[1], E_DFmode)
                  || !bcst_vector_operand (operands[2], E_DFmode)
                  || !bcst_vector_operand (operands[3], E_DFmode)
                  || !
#line 6138 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && 1 && 1))
                return -1;
              return 3959; /* *fma_fnmadd_df */

            case E_HFmode:
              if (pattern866 (x3, 
E_HFmode) != 0
                  || !(
#line 6138 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && 1 && 1) && 
#line 5917 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16)))
                return -1;
              return 3947; /* *fma_fnmadd_hf */

            default:
              return -1;
            }

        case NEG:
          x7 = XEXP (x6, 0);
          operands[3] = x7;
          switch (GET_MODE (operands[0]))
            {
            case E_SFmode:
              if (pattern867 (x3, 
E_SFmode) != 0)
                return -1;
              if (nonimmediate_operand (operands[1], E_SFmode)
                  && nonimmediate_operand (operands[2], E_SFmode)
                  && nonimmediate_operand (operands[3], E_SFmode)
                  && 
#line 6213 "../../gcc/config/i386/sse.md"
(TARGET_FMA || TARGET_FMA4))
                return 4000; /* *fma_fnmsub_sf */
              if (!bcst_vector_operand (operands[1], E_SFmode)
                  || !bcst_vector_operand (operands[2], E_SFmode)
                  || !bcst_vector_operand (operands[3], E_SFmode)
                  || !
#line 6246 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && 1 && 1))
                return -1;
              return 4031; /* *fma_fnmsub_sf */

            case E_DFmode:
              if (pattern867 (x3, 
E_DFmode) != 0)
                return -1;
              if (nonimmediate_operand (operands[1], E_DFmode)
                  && nonimmediate_operand (operands[2], E_DFmode)
                  && nonimmediate_operand (operands[3], E_DFmode)
                  && 
#line 6213 "../../gcc/config/i386/sse.md"
(TARGET_FMA || TARGET_FMA4))
                return 4002; /* *fma_fnmsub_df */
              if (!bcst_vector_operand (operands[1], E_DFmode)
                  || !bcst_vector_operand (operands[2], E_DFmode)
                  || !bcst_vector_operand (operands[3], E_DFmode)
                  || !
#line 6246 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && 1 && 1))
                return -1;
              return 4042; /* *fma_fnmsub_df */

            case E_HFmode:
              if (pattern868 (x3, 
E_HFmode) != 0
                  || !(
#line 6246 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && 1 && 1) && 
#line 5917 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16)))
                return -1;
              return 4030; /* *fma_fnmsub_hf */

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
recog_74 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) != PARALLEL
      || XVECLEN (x4, 0) != 1)
    return -1;
  x5 = XVECEXP (x4, 0, 0);
  if (GET_CODE (x5) != CONST_INT)
    return -1;
  operands[2] = x5;
  x6 = XEXP (x3, 0);
  operands[1] = x6;
  switch (GET_MODE (operands[0]))
    {
    case E_SImode:
      switch (pattern986 (x2, 
E_SImode))
        {
        case 0:
          if (
#line 5437 "../../gcc/config/i386/mmx.md"
((TARGET_MMX || TARGET_MMX_WITH_SSE)
   && (TARGET_SSE || TARGET_3DNOW_A)))
            return 2318; /* *mmx_pextrw_zext */
          break;

        case 1:
          if (
#line 6098 "../../gcc/config/i386/mmx.md"
(TARGET_SSE2))
            return 2356; /* *pextrw_zext */
          break;

        case 2:
          if (
#line 21114 "../../gcc/config/i386/sse.md"
(TARGET_SSE2))
            return 8459; /* *vec_extractv8hi_zext */
          break;

        case 3:
          if (
#line 5474 "../../gcc/config/i386/mmx.md"
(TARGET_SSE4_1 && TARGET_MMX_WITH_SSE))
            return 2322; /* *mmx_pextrb_zext */
          break;

        case 4:
          if (
#line 6130 "../../gcc/config/i386/mmx.md"
(TARGET_SSE4_1))
            return 2360; /* *pextrb_zext */
          break;

        case 5:
          if ((
#line 21114 "../../gcc/config/i386/sse.md"
(TARGET_SSE2) && 
#line 21057 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1)))
            return 8457; /* *vec_extractv16qi_zext */
          break;

        default:
          break;
        }
      break;

    case E_DImode:
      switch (pattern986 (x2, 
E_DImode))
        {
        case 0:
          if ((
#line 5437 "../../gcc/config/i386/mmx.md"
((TARGET_MMX || TARGET_MMX_WITH_SSE)
   && (TARGET_SSE || TARGET_3DNOW_A)) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return 2319; /* *mmx_pextrw_zext */
          break;

        case 1:
          if ((
#line 6098 "../../gcc/config/i386/mmx.md"
(TARGET_SSE2) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return 2357; /* *pextrw_zext */
          break;

        case 2:
          if ((
#line 21114 "../../gcc/config/i386/sse.md"
(TARGET_SSE2) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return 8460; /* *vec_extractv8hi_zext */
          break;

        case 3:
          if ((
#line 5474 "../../gcc/config/i386/mmx.md"
(TARGET_SSE4_1 && TARGET_MMX_WITH_SSE) && 
#line 1164 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return 2323; /* *mmx_pextrb_zext */
          break;

        case 4:
          if ((
#line 6130 "../../gcc/config/i386/mmx.md"
(TARGET_SSE4_1) && 
#line 1164 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return 2361; /* *pextrb_zext */
          break;

        case 5:
          if ((
#line 21114 "../../gcc/config/i386/sse.md"
(TARGET_SSE2) && (
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT) && 
#line 21057 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1))))
            return 8458; /* *vec_extractv16qi_zext */
          break;

        default:
          break;
        }
      break;

    default:
      break;
    }
  if (!register_operand (operands[0], E_DImode)
      || GET_MODE (x2) != E_DImode
      || GET_MODE (x3) != E_SImode)
    return -1;
  operands[1] = x6;
  switch (XWINT (x5, 0))
    {
    case 0L:
      switch (GET_MODE (operands[1]))
        {
        case E_V2SImode:
          if (register_operand (operands[1], E_V2SImode))
            {
              if (
#line 5749 "../../gcc/config/i386/mmx.md"
((TARGET_MMX || TARGET_MMX_WITH_SSE) && TARGET_SSE4_1))
                return 2344; /* *vec_extractv2si_0_zext_sse4 */
              if (
#line 5764 "../../gcc/config/i386/mmx.md"
((TARGET_MMX || TARGET_MMX_WITH_SSE)
   && TARGET_64BIT && TARGET_SSE2 && TARGET_INTER_UNIT_MOVES_FROM_VEC))
                return 2345; /* *vec_extractv2si_0_zext */
            }
          break;

        case E_V4SImode:
          if (register_operand (operands[1], E_V4SImode))
            {
              if (
#line 21214 "../../gcc/config/i386/sse.md"
(TARGET_64BIT && TARGET_SSE4_1))
                return 8467; /* *vec_extractv4si_0_zext_sse4 */
              if (
#line 21229 "../../gcc/config/i386/sse.md"
(TARGET_64BIT && TARGET_SSE2 && TARGET_INTER_UNIT_MOVES_FROM_VEC))
                return 8468; /* *vec_extractv4si_0_zext */
            }
          break;

        default:
          break;
        }
      break;

    case 1L:
      if (register_operand (operands[1], E_V2SImode)
          && 
#line 5826 "../../gcc/config/i386/mmx.md"
((TARGET_MMX || TARGET_MMX_WITH_SSE)
   && TARGET_64BIT && TARGET_SSE4_1))
        return 2347; /* *vec_extractv2si_1_zext */
      break;

    default:
      break;
    }
  operands[2] = x5;
  switch (GET_MODE (operands[1]))
    {
    case E_V2SImode:
      if (!memory_operand (operands[1], E_V2SImode)
          || !const_0_to_1_operand (operands[2], E_SImode)
          || !
#line 5842 "../../gcc/config/i386/mmx.md"
((TARGET_MMX || TARGET_MMX_WITH_SSE) && TARGET_64BIT))
        return -1;
      return 2348; /* *vec_extractv2si_zext_mem */

    case E_V4SImode:
      if (!const_0_to_3_operand (operands[2], E_SImode))
        return -1;
      if (register_operand (operands[1], E_V4SImode)
          && 
#line 21290 "../../gcc/config/i386/sse.md"
(TARGET_64BIT && TARGET_SSE4_1))
        return 8470; /* *vec_extractv4si_zext */
      if (!memory_operand (operands[1], E_V4SImode)
          || !
#line 21313 "../../gcc/config/i386/sse.md"
(TARGET_64BIT && TARGET_SSE))
        return -1;
      return 8472; /* *vec_extractv4si_zext_mem */

    default:
      return -1;
    }
}

 int
recog_80 (rtx x1 ATTRIBUTE_UNUSED,
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
    case MEM:
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
          x6 = XEXP (x2, 1);
          switch (GET_CODE (x6))
            {
            case CONST_INT:
            case CONST_WIDE_INT:
              operands[3] = x6;
              operands[1] = x4;
              operands[2] = x5;
              switch (GET_MODE (operands[0]))
                {
                case E_SImode:
                  if (pattern604 (x2, 
E_SImode) != 0
                      || !
#line 8039 "../../gcc/config/i386/i386.md"
((unsigned HOST_WIDE_INT) INTVAL (operands[3])
   < (HOST_WIDE_INT_1U << INTVAL (operands[2]))))
                    return -1;
                  return 376; /* *leasi_general_4 */

                case E_DImode:
                  if (GET_MODE (x2) != E_DImode
                      || GET_MODE (x3) != E_DImode)
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
                    return 378; /* *leadi_general_4 */
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
                  return 929; /* *concatsidi3_5 */

                default:
                  return -1;
                }

            case ZERO_EXTEND:
              if (GET_MODE (x6) != E_DImode
                  || !nonimmediate_operand (operands[0], E_DImode)
                  || GET_MODE (x2) != E_DImode
                  || GET_MODE (x3) != E_DImode)
                return -1;
              operands[1] = x4;
              if (!register_operand (operands[1], E_DImode))
                return -1;
              operands[2] = x5;
              if (!const_int_operand (operands[2], E_QImode))
                return -1;
              x7 = XEXP (x6, 0);
              operands[3] = x7;
              if (!nonimmediate_operand (operands[3], E_SImode)
                  || !(
#line 14060 "../../gcc/config/i386/i386.md"
(INTVAL (operands[2]) == 4 * BITS_PER_UNIT) && 
#line 1235 "../../gcc/config/i386/i386.md"
(!TARGET_64BIT)))
                return -1;
              return 893; /* *concatsidi3_1 */

            case SUBREG:
              switch (pattern438 (x2, 
LSHIFTRT))
                {
                case 0:
                  operands[2] = x5;
                  if (pattern1360 (x2) == 0)
                    {
                      if (
#line 15437 "../../gcc/config/i386/i386.md"
(TARGET_64BIT
   && INTVAL (operands[3]) == 64 - INTVAL (operands[2])
   && TARGET_APX_NF))
                        return 1066; /* x86_64_shld_1_nf */
                      if (pnum_clobbers != NULL
                          && 
#line 15437 "../../gcc/config/i386/i386.md"
(TARGET_64BIT
   && INTVAL (operands[3]) == 64 - INTVAL (operands[2])
   && true))
                        {
                          *pnum_clobbers = 1;
                          return 1067; /* x86_64_shld_1 */
                        }
                    }
                  operands[3] = x5;
                  if (pattern1361 (x2) != 0)
                    return -1;
                  if (
#line 15459 "../../gcc/config/i386/i386.md"
(TARGET_APX_NDD
   && INTVAL (operands[4]) == 64 - INTVAL (operands[3])
   && TARGET_APX_NF))
                    return 1068; /* x86_64_shld_ndd_1_nf */
                  if (pnum_clobbers == NULL
                      || !
#line 15459 "../../gcc/config/i386/i386.md"
(TARGET_APX_NDD
   && INTVAL (operands[4]) == 64 - INTVAL (operands[3])
   && true))
                    return -1;
                  *pnum_clobbers = 1;
                  return 1069; /* x86_64_shld_ndd_1 */

                case 1:
                  operands[2] = x5;
                  if (pattern1362 (x2) == 0)
                    {
                      if (
#line 15669 "../../gcc/config/i386/i386.md"
(INTVAL (operands[3]) == 32 - INTVAL (operands[2])
  && TARGET_APX_NF))
                        return 1078; /* x86_shld_1_nf */
                      if (pnum_clobbers != NULL
                          && 
#line 15669 "../../gcc/config/i386/i386.md"
(INTVAL (operands[3]) == 32 - INTVAL (operands[2])
  && true))
                        {
                          *pnum_clobbers = 1;
                          return 1079; /* x86_shld_1 */
                        }
                    }
                  operands[3] = x5;
                  if (pattern1363 (x2) != 0)
                    return -1;
                  if (
#line 15691 "../../gcc/config/i386/i386.md"
(TARGET_APX_NDD 
   && INTVAL (operands[4]) == 32 - INTVAL (operands[3])
   && TARGET_APX_NF))
                    return 1080; /* x86_shld_ndd_1_nf */
                  if (pnum_clobbers == NULL
                      || !
#line 15691 "../../gcc/config/i386/i386.md"
(TARGET_APX_NDD 
   && INTVAL (operands[4]) == 32 - INTVAL (operands[3])
   && true))
                    return -1;
                  *pnum_clobbers = 1;
                  return 1081; /* x86_shld_ndd_1 */

                default:
                  return -1;
                }

            case LSHIFTRT:
              switch (pattern441 (x2, pnum_clobbers))
                {
                case 0:
                  if (
#line 15475 "../../gcc/config/i386/i386.md"
(TARGET_64BIT && TARGET_APX_NF
   && INTVAL (operands[3]) == 64 - INTVAL (operands[2])
   && ix86_pre_reload_split ()))
                    return 1070; /* *x86_64_shld_shrd_1_nozext_nf */
                  if (pnum_clobbers == NULL
                      || !
#line 15531 "../../gcc/config/i386/i386.md"
(TARGET_64BIT
   && INTVAL (operands[3]) == 64 - INTVAL (operands[2])
   && ix86_pre_reload_split ()))
                    return -1;
                  *pnum_clobbers = 1;
                  return 1071; /* *x86_64_shld_shrd_1_nozext */

                case 1:
                  if (
#line 15707 "../../gcc/config/i386/i386.md"
(TARGET_APX_NF
   && INTVAL (operands[3]) == 32 - INTVAL (operands[2])
   && ix86_pre_reload_split ()))
                    return 1082; /* *x86_shld_shrd_1_nozext_nf */
                  if (pnum_clobbers == NULL
                      || !
#line 15763 "../../gcc/config/i386/i386.md"
(INTVAL (operands[3]) == 32 - INTVAL (operands[2])
   && ix86_pre_reload_split ()))
                    return -1;
                  *pnum_clobbers = 1;
                  return 1083; /* *x86_shld_shrd_1_nozext */

                case 2:
                  x7 = XEXP (x6, 0);
                  operands[1] = x7;
                  if (nonimmediate_operand (operands[0], E_DImode))
                    {
                      operands[2] = x5;
                      if (rtx_equal_p (x4, operands[0]))
                        {
                          x8 = XEXP (x6, 1);
                          x9 = XEXP (x8, 1);
                          if (rtx_equal_p (x9, operands[2])
                              && 
#line 15584 "../../gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_pre_reload_split ()))
                            {
                              *pnum_clobbers = 1;
                              return 1072; /* *x86_64_shld_2 */
                            }
                        }
                    }
                  operands[2] = x7;
                  if (!register_operand (operands[0], E_DImode))
                    return -1;
                  operands[1] = x4;
                  if (!nonimmediate_operand (operands[1], E_DImode))
                    return -1;
                  operands[3] = x5;
                  x8 = XEXP (x6, 1);
                  x9 = XEXP (x8, 1);
                  if (!rtx_equal_p (x9, operands[3])
                      || !
#line 15605 "../../gcc/config/i386/i386.md"
(TARGET_APX_NDD
   && ix86_pre_reload_split ()))
                    return -1;
                  *pnum_clobbers = 1;
                  return 1073; /* *x86_64_shld_ndd_2 */

                case 3:
                  x7 = XEXP (x6, 0);
                  operands[1] = x7;
                  if (nonimmediate_operand (operands[0], E_SImode))
                    {
                      operands[2] = x5;
                      if (rtx_equal_p (x4, operands[0]))
                        {
                          x8 = XEXP (x6, 1);
                          x9 = XEXP (x8, 1);
                          if (rtx_equal_p (x9, operands[2])
                              && 
#line 15815 "../../gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_pre_reload_split ()))
                            {
                              *pnum_clobbers = 1;
                              return 1084; /* *x86_shld_2 */
                            }
                        }
                    }
                  operands[2] = x7;
                  if (!register_operand (operands[0], E_SImode))
                    return -1;
                  operands[1] = x4;
                  if (!nonimmediate_operand (operands[1], E_SImode))
                    return -1;
                  operands[3] = x5;
                  x8 = XEXP (x6, 1);
                  x9 = XEXP (x8, 1);
                  if (!rtx_equal_p (x9, operands[3])
                      || !
#line 15836 "../../gcc/config/i386/i386.md"
(TARGET_APX_NDD
   && ix86_pre_reload_split ()))
                    return -1;
                  *pnum_clobbers = 1;
                  return 1085; /* *x86_shld_ndd_2 */

                default:
                  return -1;
                }

            default:
              return -1;
            }

        case AND:
          switch (pattern288 (x2, 
LSHIFTRT))
            {
            case 0:
              x6 = XEXP (x2, 1);
              x7 = XEXP (x6, 0);
              x10 = XEXP (x7, 0);
              x11 = XEXP (x10, 0);
              operands[1] = x11;
              if (nonimmediate_operand (operands[0], E_DImode))
                {
                  res = recog_78 (x1, insn, pnum_clobbers);
                  if (res >= 0)
                    return res;
                }
              operands[2] = x11;
              if (!register_operand (operands[0], E_DImode))
                return -1;
              operands[1] = x4;
              if (!nonimmediate_operand (operands[1], E_DImode))
                return -1;
              x12 = XEXP (x5, 0);
              operands[3] = x12;
              x13 = XEXP (x7, 1);
              x14 = XEXP (x13, 1);
              x15 = XEXP (x14, 0);
              if (!rtx_equal_p (x15, operands[3]))
                return -1;
              if (
#line 15422 "../../gcc/config/i386/i386.md"
(TARGET_APX_NDD && TARGET_APX_NF))
                return 1064; /* x86_64_shld_ndd_nf */
              if (pnum_clobbers == NULL
                  || !
#line 15422 "../../gcc/config/i386/i386.md"
(TARGET_APX_NDD && true))
                return -1;
              *pnum_clobbers = 1;
              return 1065; /* x86_64_shld_ndd */

            case 1:
              if (!nonimmediate_operand (operands[0], E_SImode)
                  || pattern287 (x2, 
E_SImode, 
E_DImode) != 0)
                return -1;
              x6 = XEXP (x2, 1);
              x7 = XEXP (x6, 0);
              x10 = XEXP (x7, 0);
              x11 = XEXP (x10, 0);
              operands[1] = x11;
              x12 = XEXP (x5, 0);
              operands[2] = x12;
              if (rtx_equal_p (x4, operands[0]))
                {
                  x13 = XEXP (x7, 1);
                  x14 = XEXP (x13, 1);
                  x15 = XEXP (x14, 0);
                  if (rtx_equal_p (x15, operands[2]))
                    {
                      if (
#line 15631 "../../gcc/config/i386/i386.md"
(TARGET_APX_NF))
                        return 1074; /* x86_shld_nf */
                      if (pnum_clobbers != NULL)
                        {
                          *pnum_clobbers = 1;
                          return 1075; /* x86_shld */
                        }
                    }
                }
              operands[2] = x11;
              operands[1] = x4;
              if (!nonimmediate_operand (operands[1], E_SImode))
                return -1;
              operands[3] = x12;
              x13 = XEXP (x7, 1);
              x14 = XEXP (x13, 1);
              x15 = XEXP (x14, 0);
              if (!rtx_equal_p (x15, operands[3]))
                return -1;
              if (
#line 15653 "../../gcc/config/i386/i386.md"
(TARGET_APX_NDD && TARGET_APX_NF))
                return 1076; /* x86_shld_ndd_nf */
              if (pnum_clobbers == NULL
                  || !
#line 15653 "../../gcc/config/i386/i386.md"
(TARGET_APX_NDD && true))
                return -1;
              *pnum_clobbers = 1;
              return 1077; /* x86_shld_ndd */

            default:
              return -1;
            }

        default:
          return -1;
        }

    case SIGN_EXTEND:
      switch (pattern256 (x2, 
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
          return 905; /* *concatsidi3_3 */

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
          return 935; /* *concatsidi3_6 */

        default:
          return -1;
        }

    case ZERO_EXTEND:
      switch (pattern256 (x2, 
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
          return 908; /* *concatsidi3_3 */

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
          return 938; /* *concatsidi3_6 */

        default:
          return -1;
        }

    case CONST_INT:
      switch (pattern286 (x2, pnum_clobbers))
        {
        case 0:
          x5 = XEXP (x3, 1);
          operands[2] = x5;
          if (register_operand (operands[2], E_QImode))
            {
              switch (pattern752 (x2))
                {
                case 0:
                  if (
#line 18805 "../../gcc/config/i386/i386.md"
(TARGET_USE_BT))
                    {
                      *pnum_clobbers = 1;
                      return 1391; /* *btssi */
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
                      return 1393; /* *btsdi */
                    }
                  break;

                default:
                  break;
                }
            }
          if (GET_CODE (x5) != SUBREG)
            return -1;
          switch (pattern761 (x2))
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
              *pnum_clobbers = 1;
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
          *pnum_clobbers = 1;
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
          *pnum_clobbers = 1;
          return 1401; /* *btsdi_mask_1 */

        default:
          return -1;
        }

    default:
      return -1;
    }
}

 int
recog_99 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  switch (GET_MODE (operands[0]))
    {
    case E_DImode:
      if (pnum_clobbers != NULL)
        {
          x2 = XEXP (x1, 1);
          if (pattern738 (x2, 
E_DImode, 
E_QImode) == 0
              && 
#line 1195 "../../gcc/config/i386/i386.md"
(!TARGET_64BIT))
            {
              *pnum_clobbers = 1;
              return 1131; /* ashrdi3_doubleword */
            }
        }
      x2 = XEXP (x1, 1);
      if (GET_MODE (x2) != E_DImode
          || !nonimmediate_operand (operands[1], E_DImode))
        return -1;
      if (nonimmediate_operand (operands[0], E_DImode)
          && const_int_operand (operands[2], E_QImode))
        {
          if ((
#line 17244 "../../gcc/config/i386/i386.md"
(INTVAL (operands[2]) == GET_MODE_BITSIZE (DImode)-1
   && (TARGET_USE_CLTD || optimize_function_for_size_p (cfun))
   && ix86_binary_operator_ok (ASHIFTRT, DImode, operands, TARGET_APX_NDD)
   && TARGET_APX_NF) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return 1168; /* ashrdi3_cvt_nf */
          if (pnum_clobbers != NULL
              && (
#line 17244 "../../gcc/config/i386/i386.md"
(INTVAL (operands[2]) == GET_MODE_BITSIZE (DImode)-1
   && (TARGET_USE_CLTD || optimize_function_for_size_p (cfun))
   && ix86_binary_operator_ok (ASHIFTRT, DImode, operands, TARGET_APX_NDD)
   && true) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
            {
              *pnum_clobbers = 1;
              return 1169; /* ashrdi3_cvt */
            }
        }
      if (register_operand (operands[0], E_DImode)
          && register_operand (operands[2], E_DImode)
          && (
#line 17313 "../../gcc/config/i386/i386.md"
(TARGET_BMI2) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
        return 1174; /* *bmi2_ashrdi3_1 */
      if (!nonimmediate_operand (operands[0], E_DImode)
          || !nonmemory_operand (operands[2], E_QImode))
        return -1;
      if ((
#line 17323 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ASHIFTRT, DImode, operands, TARGET_APX_NDD)
   && TARGET_APX_NF) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
        return 1177; /* *ashrdi3_1_nf */
      if (pnum_clobbers == NULL
          || !(
#line 17323 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ASHIFTRT, DImode, operands, TARGET_APX_NDD)
   && true) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
        return -1;
      *pnum_clobbers = 1;
      return 1178; /* *ashrdi3_1 */

    case E_SImode:
      x2 = XEXP (x1, 1);
      if (pattern624 (x2, 
E_SImode) != 0)
        return -1;
      if (
#line 17323 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ASHIFTRT, SImode, operands, TARGET_APX_NDD)
   && TARGET_APX_NF))
        return 1175; /* *ashrsi3_1_nf */
      if (pnum_clobbers == NULL
          || !
#line 17323 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ASHIFTRT, SImode, operands, TARGET_APX_NDD)
   && true))
        return -1;
      *pnum_clobbers = 1;
      return 1176; /* *ashrsi3_1 */

    default:
      return -1;
    }
}

 int
recog_104 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  if (GET_CODE (x2) == SUBREG
      && known_eq (SUBREG_BYTE (x2), 0))
    {
      x3 = XEXP (x2, 0);
      operands[0] = x3;
      if (register_operand (operands[0], E_QImode))
        {
          x4 = XEXP (x1, 1);
          x5 = XEXP (x4, 2);
          operands[2] = x5;
          if (register_operand (operands[2], E_QImode))
            {
              switch (GET_MODE (x2))
                {
                case E_SImode:
                  if (GET_MODE (x4) == E_SImode
                      && register_operand (operands[1], E_SImode)
                      && 
#line 19324 "../../gcc/config/i386/i386.md"
(TARGET_USE_BT && ix86_pre_reload_split ()))
                    {
                      *pnum_clobbers = 1;
                      return 1434; /* *btsi_setcqi */
                    }
                  break;

                case E_DImode:
                  if (GET_MODE (x4) == E_DImode
                      && register_operand (operands[1], E_DImode)
                      && (
#line 19324 "../../gcc/config/i386/i386.md"
(TARGET_USE_BT && ix86_pre_reload_split ()) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                    {
                      *pnum_clobbers = 1;
                      return 1435; /* *btdi_setcqi */
                    }
                  break;

                default:
                  break;
                }
            }
        }
    }
  x4 = XEXP (x1, 1);
  x5 = XEXP (x4, 2);
  if (GET_CODE (x5) != SUBREG
      || maybe_ne (SUBREG_BYTE (x5), 0)
      || GET_MODE (x5) != E_QImode)
    return -1;
  x6 = XEXP (x5, 0);
  if (GET_CODE (x6) != AND)
    return -1;
  operands[0] = x2;
  x7 = XEXP (x6, 0);
  operands[2] = x7;
  x8 = XEXP (x6, 1);
  operands[3] = x8;
  if (!const_int_operand (operands[3], E_VOIDmode))
    return -1;
  switch (GET_MODE (operands[0]))
    {
    case E_SImode:
      if (pattern1455 (x4, 
E_SImode) != 0
          || !
#line 19405 "../../gcc/config/i386/i386.md"
(TARGET_USE_BT
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (SImode)-1))
      == GET_MODE_BITSIZE (SImode)-1
   && ix86_pre_reload_split ()))
        return -1;
      *pnum_clobbers = 1;
      return 1442; /* *btsi_setcsi_mask */

    case E_DImode:
      if (pattern1455 (x4, 
E_DImode) != 0
          || !(
#line 19405 "../../gcc/config/i386/i386.md"
(TARGET_USE_BT
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (DImode)-1))
      == GET_MODE_BITSIZE (DImode)-1
   && ix86_pre_reload_split ()) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
        return -1;
      *pnum_clobbers = 1;
      return 1443; /* *btdi_setcdi_mask */

    default:
      return -1;
    }
}

 int
recog_107 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) != E_SImode)
    return -1;
  x3 = XEXP (x1, 0);
  operands[0] = x3;
  if (!register_operand (operands[0], E_SImode))
    return -1;
  x4 = XVECEXP (x2, 0, 0);
  switch (GET_CODE (x4))
    {
    case REG:
    case SUBREG:
      operands[1] = x4;
      switch (GET_MODE (operands[1]))
        {
        case E_DFmode:
          if (register_operand (operands[1], E_DFmode)
              && 
#line 25340 "../../gcc/config/i386/i386.md"
(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH))
            return 1753; /* movmsk_df */
          break;

        case E_V8QImode:
          if (register_operand (operands[1], E_V8QImode)
              && 
#line 6823 "../../gcc/config/i386/mmx.md"
((TARGET_MMX || TARGET_MMX_WITH_SSE)
   && (TARGET_SSE || TARGET_3DNOW_A)))
            return 2378; /* mmx_pmovmskb */
          break;

        case E_V8SFmode:
          if (register_operand (operands[1], E_V8SFmode)
              && (
#line 21933 "../../gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 422 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
            return 8505; /* avx_movmskps256 */
          break;

        case E_V4SFmode:
          if (register_operand (operands[1], E_V4SFmode)
              && 
#line 21933 "../../gcc/config/i386/sse.md"
(TARGET_SSE))
            return 8506; /* sse_movmskps */
          break;

        case E_V4DFmode:
          if (register_operand (operands[1], E_V4DFmode)
              && (
#line 21933 "../../gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 423 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
            return 8507; /* avx_movmskpd256 */
          break;

        case E_V2DFmode:
          if (register_operand (operands[1], E_V2DFmode)
              && (
#line 21933 "../../gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 423 "../../gcc/config/i386/sse.md"
(TARGET_SSE2)))
            return 8508; /* sse2_movmskpd */
          break;

        case E_V32QImode:
          if (register_operand (operands[1], E_V32QImode)
              && (
#line 22083 "../../gcc/config/i386/sse.md"
(TARGET_SSE2) && 
#line 630 "../../gcc/config/i386/sse.md"
(TARGET_AVX2)))
            return 8553; /* avx2_pmovmskb */
          break;

        case E_V16QImode:
          if (register_operand (operands[1], E_V16QImode)
              && 
#line 22083 "../../gcc/config/i386/sse.md"
(TARGET_SSE2))
            return 8554; /* sse2_pmovmskb */
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
        case VEC_MERGE:
          switch (pattern1093 (x4))
            {
            case 0:
              if (!(
#line 21984 "../../gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 422 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
                return -1;
              return 8521; /* *avx_movmskps256_lt_avx512 */

            case 1:
              if (!
#line 21984 "../../gcc/config/i386/sse.md"
(TARGET_SSE))
                return -1;
              return 8522; /* *sse_movmskps_lt_avx512 */

            case 2:
              if (!(
#line 21984 "../../gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 423 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
                return -1;
              return 8523; /* *avx_movmskpd256_lt_avx512 */

            case 3:
              if (!(
#line 21984 "../../gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 423 "../../gcc/config/i386/sse.md"
(TARGET_SSE2)))
                return -1;
              return 8524; /* *sse2_movmskpd_lt_avx512 */

            default:
              return -1;
            }

        case ASHIFTRT:
          switch (pattern1094 (x4))
            {
            case 0:
              if (!(
#line 22047 "../../gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 422 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
                return -1;
              return 8541; /* *avx_movmskps256_shift */

            case 1:
              if (!
#line 22047 "../../gcc/config/i386/sse.md"
(TARGET_SSE))
                return -1;
              return 8542; /* *sse_movmskps_shift */

            case 2:
              if (!(
#line 22047 "../../gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 423 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
                return -1;
              return 8543; /* *avx_movmskpd256_shift */

            case 3:
              if (!(
#line 22047 "../../gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 423 "../../gcc/config/i386/sse.md"
(TARGET_SSE2)))
                return -1;
              return 8544; /* *sse2_movmskpd_shift */

            default:
              return -1;
            }

        default:
          return -1;
        }

    case LT:
      switch (pattern763 (x4))
        {
        case 0:
          if (!(
#line 21960 "../../gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 422 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 8517; /* *avx_movmskps256_lt */

        case 1:
          if (!
#line 21960 "../../gcc/config/i386/sse.md"
(TARGET_SSE))
            return -1;
          return 8518; /* *sse_movmskps_lt */

        case 2:
          if (!(
#line 21960 "../../gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 423 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 8519; /* *avx_movmskpd256_lt */

        case 3:
          if (!(
#line 21960 "../../gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 423 "../../gcc/config/i386/sse.md"
(TARGET_SSE2)))
            return -1;
          return 8520; /* *sse2_movmskpd_lt */

        case 4:
          if (!(
#line 22212 "../../gcc/config/i386/sse.md"
(TARGET_SSE2) && 
#line 630 "../../gcc/config/i386/sse.md"
(TARGET_AVX2)))
            return -1;
          return 8559; /* *avx2_pmovmskb_lt */

        case 5:
          if (!
#line 22212 "../../gcc/config/i386/sse.md"
(TARGET_SSE2))
            return -1;
          return 8560; /* *sse2_pmovmskb_lt */

        default:
          return -1;
        }

    case VEC_MERGE:
      switch (pattern765 (x4))
        {
        case 0:
          if (!(
#line 22240 "../../gcc/config/i386/sse.md"
(TARGET_SSE2) && 
#line 630 "../../gcc/config/i386/sse.md"
(TARGET_AVX2)))
            return -1;
          return 8561; /* *avx2_pmovmskb_lt_avx512 */

        case 1:
          if (!
#line 22240 "../../gcc/config/i386/sse.md"
(TARGET_SSE2))
            return -1;
          return 8562; /* *sse2_pmovmskb_lt_avx512 */

        case 2:
          if (!
#line 22368 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_pre_reload_split ()))
            return -1;
          return 8570; /* *pmovsk_kmask_v16qi_avx512 */

        case 3:
          if (!
#line 22382 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_pre_reload_split ()))
            return -1;
          return 8571; /* *pmovsk_mask_v32qi_avx512 */

        default:
          return -1;
        }

    default:
      return -1;
    }
}

 int
recog_120 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) != PARALLEL
      || XVECLEN (x3, 0) != 1)
    return -1;
  x4 = XVECEXP (x3, 0, 0);
  if (GET_CODE (x4) != CONST_INT)
    return -1;
  x5 = XEXP (x1, 0);
  operands[0] = x5;
  x6 = XEXP (x2, 0);
  operands[1] = x6;
  res = recog_118 (x1, insn, pnum_clobbers);
  if (res >= 0)
    return res;
  if (register_operand (operands[0], E_DImode))
    {
      res = recog_119 (x1, insn, pnum_clobbers);
      if (res >= 0)
        return res;
    }
  if (!nonimmediate_operand (operands[0], E_DImode)
      || XWINT (x4, 0) != 0L
      || GET_MODE (x2) != E_DImode)
    return -1;
  operands[1] = x6;
  if (!nonimmediate_operand (operands[1], E_V2DImode))
    return -1;
  if ((
#line 21157 "../../gcc/config/i386/sse.md"
(TARGET_SSE && !(MEM_P (operands[0]) && MEM_P (operands[1]))) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
    return 8465; /* *vec_extractv2di_0 */
  if (!
#line 21171 "../../gcc/config/i386/sse.md"
(TARGET_SSE && !TARGET_64BIT
   && !(MEM_P (operands[0]) && MEM_P (operands[1]))))
    return -1;
  return 8466; /* *vec_extractv2di_0_sse */
}

 int
recog_122 (rtx x1 ATTRIBUTE_UNUSED,
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
      return 4421; /* avx512fp16_vcvtph2w_v32hi_mask */

    case 1:
      switch (pattern995 (x2))
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
          return 4429; /* avx512fp16_vcvtph2dq_v16si_mask */

        case 1:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 8695 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 4836; /* avx512f_fix_notruncv16sfv16si_mask */

        default:
          return -1;
        }

    case 2:
      if (pattern773 (x2, 
E_V8DImode, 
E_QImode) != 0)
        return -1;
      switch (GET_MODE (operands[1]))
        {
        case E_V8HFmode:
          if (!vector_operand (operands[1], E_V8HFmode)
              || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 7617 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && 1) && 
#line 758 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512))))
            return -1;
          return 4437; /* avx512fp16_vcvtph2qq_v8di_mask */

        case E_V8SFmode:
          if (!nonimmediate_operand (operands[1], E_V8SFmode)
              || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 8716 "../../gcc/config/i386/sse.md"
(TARGET_AVX512DQ && 1) && 
#line 627 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512))))
            return -1;
          return 4850; /* avx512dq_cvtps2qqv8di_mask */

        case E_V8DFmode:
          if (!vector_operand (operands[1], E_V8DFmode)
              || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 9710 "../../gcc/config/i386/sse.md"
(TARGET_AVX512DQ && 1) && 
#line 537 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512))))
            return -1;
          return 5096; /* fix_notruncv8dfv8di2_mask */

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
      return 4445; /* avx512fp16_vcvtph2w_v16hi_mask */

    case 4:
      switch (pattern994 (x2))
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
          return 4453; /* avx512fp16_vcvtph2dq_v8si_mask */

        case 1:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 8679 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && (32 == 64 || TARGET_AVX512VL) && 1) && 
#line 666 "../../gcc/config/i386/sse.md"
(TARGET_AVX))))
            return -1;
          return 4830; /* avx_fix_notruncv8sfv8si_mask */

        case 2:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 9398 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 5000; /* avx512f_cvtpd2dq512_mask */

        default:
          return -1;
        }

    case 5:
      switch (pattern1100 (x2, 
E_V4DImode))
        {
        case 0:
          if (!vector_operand (operands[1], E_V8HFmode)
              || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 7617 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && 1) && 
#line 760 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
            return -1;
          return 4461; /* avx512fp16_vcvtph2qq_v4di_mask */

        case 1:
          if (!nonimmediate_operand (operands[1], E_V4SFmode)
              || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 8716 "../../gcc/config/i386/sse.md"
(TARGET_AVX512DQ && 1) && 
#line 627 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
            return -1;
          return 4854; /* avx512dq_cvtps2qqv4di_mask */

        case 2:
          if (!vector_operand (operands[1], E_V4DFmode)
              || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 9710 "../../gcc/config/i386/sse.md"
(TARGET_AVX512DQ && 1) && 
#line 537 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
            return -1;
          return 5100; /* fix_notruncv4dfv4di2_mask */

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
      return 4466; /* avx512fp16_vcvtph2w_v8hi_mask */

    case 7:
      switch (pattern1100 (x2, 
E_V4SImode))
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
          return 4470; /* avx512fp16_vcvtph2dq_v4si_mask */

        case 1:
          if (!vector_operand (operands[1], E_V4SFmode)
              || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 8679 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && (16 == 64 || TARGET_AVX512VL) && 1)))
            return -1;
          return 4833; /* sse2_fix_notruncv4sfv4si_mask */

        case 2:
          if (!vector_operand (operands[1], E_V4DFmode)
              || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 9408 "../../gcc/config/i386/sse.md"
(TARGET_AVX && TARGET_AVX512VL
   && (!false || TARGET_AVX10_2_256))))
            return -1;
          return 5004; /* avx_cvtpd2dq256_mask */

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
          return 4474; /* avx512fp16_vcvtph2qq_v2di_mask */

        case 1:
          if (!vector_operand (operands[1], E_V2DFmode)
              || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 9710 "../../gcc/config/i386/sse.md"
(TARGET_AVX512DQ && 1) && 
#line 537 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
            return -1;
          return 5103; /* fix_notruncv2dfv2di2_mask */

        default:
          return -1;
        }

    case 9:
      if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 8729 "../../gcc/config/i386/sse.md"
(TARGET_AVX512DQ && TARGET_AVX512VL)))
        return -1;
      return 4857; /* avx512dq_cvtps2qqv2di_mask */

    default:
      return -1;
    }
}

 int
recog_127 (rtx x1 ATTRIBUTE_UNUSED,
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
    case E_V32HFmode:
      if (pattern999 (x2, 
E_V32HFmode, 
E_SImode) != 0
          || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 14031 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 525 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_EVEX512))))
        return -1;
      return 7036; /* avx512bw_getexpv32hf_mask */

    case E_V16HFmode:
      if (pattern999 (x2, 
E_V16HFmode, 
E_HImode) != 0
          || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 14031 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 526 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL))))
        return -1;
      return 7040; /* avx512vl_getexpv16hf_mask */

    case E_V8HFmode:
      if (pattern999 (x2, 
E_V8HFmode, 
E_QImode) != 0
          || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 14031 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 527 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL))))
        return -1;
      return 7043; /* avx512fp16_getexpv8hf_mask */

    case E_V16SFmode:
      if (pattern999 (x2, 
E_V16SFmode, 
E_HImode) != 0
          || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 14031 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 528 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512))))
        return -1;
      return 7046; /* avx512f_getexpv16sf_mask */

    case E_V8SFmode:
      if (pattern999 (x2, 
E_V8SFmode, 
E_QImode) != 0
          || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 14031 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 528 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
        return -1;
      return 7050; /* avx512vl_getexpv8sf_mask */

    case E_V4SFmode:
      if (pattern999 (x2, 
E_V4SFmode, 
E_QImode) != 0
          || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 14031 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 528 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
        return -1;
      return 7053; /* avx512vl_getexpv4sf_mask */

    case E_V8DFmode:
      if (pattern999 (x2, 
E_V8DFmode, 
E_QImode) != 0
          || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 14031 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 529 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512))))
        return -1;
      return 7056; /* avx512f_getexpv8df_mask */

    case E_V4DFmode:
      if (pattern999 (x2, 
E_V4DFmode, 
E_QImode) != 0
          || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 14031 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 529 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
        return -1;
      return 7060; /* avx512vl_getexpv4df_mask */

    case E_V2DFmode:
      if (pattern999 (x2, 
E_V2DFmode, 
E_QImode) != 0
          || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 14031 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 529 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
        return -1;
      return 7063; /* avx512vl_getexpv2df_mask */

    case E_V32BFmode:
      if (pattern627 (x2, 
E_V32BFmode, 
E_SImode) != 0
          || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 32405 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256) && 
#line 565 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_512))))
        return -1;
      return 10693; /* avx10_2_getexppbf16_v32bf_mask */

    case E_V16BFmode:
      if (pattern627 (x2, 
E_V16BFmode, 
E_HImode) != 0
          || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 32405 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256)))
        return -1;
      return 10695; /* avx10_2_getexppbf16_v16bf_mask */

    case E_V8BFmode:
      if (pattern627 (x2, 
E_V8BFmode, 
E_QImode) != 0
          || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 32405 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256)))
        return -1;
      return 10697; /* avx10_2_getexppbf16_v8bf_mask */

    default:
      return -1;
    }
}

 int
recog_134 (rtx x1 ATTRIBUTE_UNUSED,
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
        case E_V32HFmode:
          if (pattern472 (x2, 
E_V32HFmode, 
E_SImode) != 0
              || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 32649 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256) && 
#line 532 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_512))))
            return -1;
          return 10937; /* avx10_2_minmaxpv32hf_mask */

        case E_V16HFmode:
          if (pattern472 (x2, 
E_V16HFmode, 
E_HImode) != 0
              || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 32649 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256)))
            return -1;
          return 10941; /* avx10_2_minmaxpv16hf_mask */

        case E_V8HFmode:
          if (pattern472 (x2, 
E_V8HFmode, 
E_QImode) != 0
              || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 32649 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256)))
            return -1;
          return 10945; /* avx10_2_minmaxpv8hf_mask */

        case E_V16SFmode:
          if (pattern472 (x2, 
E_V16SFmode, 
E_HImode) != 0
              || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 32649 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256) && 
#line 533 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_512))))
            return -1;
          return 10949; /* avx10_2_minmaxpv16sf_mask */

        case E_V8SFmode:
          if (pattern472 (x2, 
E_V8SFmode, 
E_QImode) != 0
              || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 32649 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256)))
            return -1;
          return 10953; /* avx10_2_minmaxpv8sf_mask */

        case E_V4SFmode:
          if (pattern472 (x2, 
E_V4SFmode, 
E_QImode) != 0
              || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 32649 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256)))
            return -1;
          return 10957; /* avx10_2_minmaxpv4sf_mask */

        case E_V8DFmode:
          if (pattern472 (x2, 
E_V8DFmode, 
E_QImode) != 0
              || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 32649 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256) && 
#line 534 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_512))))
            return -1;
          return 10961; /* avx10_2_minmaxpv8df_mask */

        case E_V4DFmode:
          if (pattern472 (x2, 
E_V4DFmode, 
E_QImode) != 0
              || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 32649 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256)))
            return -1;
          return 10965; /* avx10_2_minmaxpv4df_mask */

        case E_V2DFmode:
          if (pattern472 (x2, 
E_V2DFmode, 
E_QImode) != 0
              || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 32649 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256)))
            return -1;
          return 10969; /* avx10_2_minmaxpv2df_mask */

        default:
          return -1;
        }

    case CONST_INT:
      if (XWINT (x7, 0) != 1L)
        return -1;
      switch (pattern457 (x2))
        {
        case 0:
          if (!(
#line 32664 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256) && 
#line 479 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16)))
            return -1;
          return 10971; /* avx10_2_minmaxsv8hf */

        case 1:
          if (!
#line 32664 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
            return -1;
          return 10975; /* avx10_2_minmaxsv4sf */

        case 2:
          if (!(
#line 32664 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256) && 
#line 480 "../../gcc/config/i386/sse.md"
(TARGET_SSE2)))
            return -1;
          return 10979; /* avx10_2_minmaxsv2df */

        default:
          return -1;
        }

    default:
      return -1;
    }
}

 int
recog_141 (rtx x1 ATTRIBUTE_UNUSED,
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
#line 30396 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VBMI2) && 
#line 758 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512))))
        return -1;
      return 10180; /* vpshrd_v32hi_mask */

    case 1:
      if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 30396 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VBMI2) && 
#line 758 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512))))
        return -1;
      return 10182; /* vpshrd_v16si_mask */

    case 2:
      if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 30396 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VBMI2) && 
#line 758 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512))))
        return -1;
      return 10184; /* vpshrd_v8di_mask */

    case 3:
      if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 30396 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VBMI2) && 
#line 759 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
        return -1;
      return 10186; /* vpshrd_v16hi_mask */

    case 4:
      if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 30396 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VBMI2) && 
#line 759 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
        return -1;
      return 10188; /* vpshrd_v8si_mask */

    case 5:
      if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 30396 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VBMI2) && 
#line 760 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
        return -1;
      return 10190; /* vpshrd_v4di_mask */

    case 6:
      if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 30396 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VBMI2) && 
#line 760 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
        return -1;
      return 10192; /* vpshrd_v8hi_mask */

    case 7:
      if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 30396 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VBMI2) && 
#line 761 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
        return -1;
      return 10194; /* vpshrd_v4si_mask */

    case 8:
      if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 30396 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VBMI2) && 
#line 761 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
        return -1;
      return 10196; /* vpshrd_v2di_mask */

    default:
      return -1;
    }
}

 int
recog_147 (rtx x1 ATTRIBUTE_UNUSED,
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
  switch (XVECLEN (x4, 0))
    {
    case 1:
      x5 = XEXP (x2, 2);
      if (x5 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
        return -1;
      x6 = XVECEXP (x4, 0, 0);
      operands[1] = x6;
      x7 = XEXP (x3, 1);
      operands[3] = x7;
      x8 = XEXP (x3, 2);
      operands[4] = x8;
      if (!register_operand (operands[4], E_QImode))
        return -1;
      x9 = XEXP (x2, 1);
      operands[2] = x9;
      switch (XINT (x4, 1))
        {
        case 54:
          if (pattern1286 (x2) != 0
              || !(
#line 378 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 2979 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16)))
            return -1;
          return 2886; /* avx512fp16_vmrcpv8hf2_mask */

        case 161:
          switch (GET_MODE (operands[0]))
            {
            case E_V4SFmode:
              if (pattern1371 (x2, 
E_V4SFmode) != 0
                  || !
#line 3035 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F))
                return -1;
              return 2902; /* srcp14v4sf_mask */

            case E_V2DFmode:
              if (pattern1371 (x2, 
E_V2DFmode) != 0
                  || !(
#line 3035 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 475 "../../gcc/config/i386/sse.md"
(TARGET_SSE2)))
                return -1;
              return 2903; /* srcp14v2df_mask */

            default:
              return -1;
            }

        case 162:
          switch (GET_MODE (operands[0]))
            {
            case E_V4SFmode:
              if (pattern1371 (x2, 
E_V4SFmode) != 0
                  || !
#line 3189 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F))
                return -1;
              return 2980; /* rsqrt14_v4sf_mask */

            case E_V2DFmode:
              if (pattern1371 (x2, 
E_V2DFmode) != 0
                  || !(
#line 3189 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 475 "../../gcc/config/i386/sse.md"
(TARGET_SSE2)))
                return -1;
              return 2981; /* rsqrt14_v2df_mask */

            default:
              return -1;
            }

        case 55:
          if (pattern1286 (x2) != 0
              || !(
#line 378 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 3237 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16)))
            return -1;
          return 2985; /* avx512fp16_vmrsqrtv8hf2_mask */

        default:
          return -1;
        }

    case 2:
      x5 = XEXP (x2, 2);
      if (GET_CODE (x5) != CONST_INT)
        return -1;
      switch (XINT (x4, 1))
        {
        case 63:
          switch (pattern768 (x2))
            {
            case 0:
              if (!(
#line 378 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 3486 "../../gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 479 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16))))
                return -1;
              return 3152; /* avx512fp16_ieee_vmmaxv8hf3_mask */

            case 1:
              if (!(
#line 378 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 3486 "../../gcc/config/i386/sse.md"
(TARGET_SSE)))
                return -1;
              return 3160; /* sse_ieee_vmmaxv4sf3_mask */

            case 2:
              if (!(
#line 378 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 3486 "../../gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 480 "../../gcc/config/i386/sse.md"
(TARGET_SSE2))))
                return -1;
              return 3168; /* sse2_ieee_vmmaxv2df3_mask */

            default:
              return -1;
            }

        case 62:
          switch (pattern768 (x2))
            {
            case 0:
              if (!(
#line 378 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 3486 "../../gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 479 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16))))
                return -1;
              return 3156; /* avx512fp16_ieee_vmminv8hf3_mask */

            case 1:
              if (!(
#line 378 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 3486 "../../gcc/config/i386/sse.md"
(TARGET_SSE)))
                return -1;
              return 3164; /* sse_ieee_vmminv4sf3_mask */

            case 2:
              if (!(
#line 378 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 3486 "../../gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 480 "../../gcc/config/i386/sse.md"
(TARGET_SSE2))))
                return -1;
              return 3172; /* sse2_ieee_vmminv2df3_mask */

            default:
              return -1;
            }

        case 221:
          if (pattern769 (x2) != 0
              || !(
#line 412 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 7509 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16)))
            return -1;
          return 4409; /* avx512fp16_fmulcsh_v8hf_mask */

        case 222:
          if (pattern769 (x2) != 0
              || !(
#line 412 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 7509 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16)))
            return -1;
          return 4413; /* avx512fp16_fcmulcsh_v8hf_mask */

        case 58:
          switch (pattern768 (x2))
            {
            case 0:
              if (!(
#line 378 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 13612 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 479 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16))))
                return -1;
              return 5416; /* avx512f_vmscalefv8hf_mask */

            case 1:
              if (!
#line 378 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F))
                return -1;
              return 5420; /* avx512f_vmscalefv4sf_mask */

            case 2:
              if (!(
#line 378 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 13612 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 480 "../../gcc/config/i386/sse.md"
(TARGET_SSE2))))
                return -1;
              return 5424; /* avx512f_vmscalefv2df_mask */

            default:
              return -1;
            }

        case 165:
          switch (pattern768 (x2))
            {
            case 0:
              if (!(
#line 378 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 14045 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 479 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16))))
                return -1;
              return 7065; /* avx512f_sgetexpv8hf_mask */

            case 1:
              if (!
#line 378 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F))
                return -1;
              return 7069; /* avx512f_sgetexpv4sf_mask */

            case 2:
              if (!(
#line 378 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 14045 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 480 "../../gcc/config/i386/sse.md"
(TARGET_SSE2))))
                return -1;
              return 7073; /* avx512f_sgetexpv2df_mask */

            default:
              return -1;
            }

        case 94:
          if (XWINT (x5, 0) != 1L)
            return -1;
          x6 = XVECEXP (x4, 0, 0);
          operands[2] = x6;
          x10 = XVECEXP (x4, 0, 1);
          operands[3] = x10;
          if (!const_0_to_255_operand (operands[3], E_SImode))
            return -1;
          x7 = XEXP (x3, 1);
          operands[4] = x7;
          x8 = XEXP (x3, 2);
          operands[5] = x8;
          if (!register_operand (operands[5], E_QImode))
            return -1;
          x9 = XEXP (x2, 1);
          operands[1] = x9;
          switch (GET_MODE (operands[0]))
            {
            case E_V8HFmode:
              if (pattern1541 (x2, 
E_V8HFmode) != 0
                  || !(
#line 378 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 14239 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 479 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16))))
                return -1;
              return 7169; /* avx512f_rndscalev8hf_mask */

            case E_V4SFmode:
              if (pattern1541 (x2, 
E_V4SFmode) != 0
                  || !
#line 378 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F))
                return -1;
              return 7173; /* avx512f_rndscalev4sf_mask */

            case E_V2DFmode:
              if (pattern1541 (x2, 
E_V2DFmode) != 0
                  || !(
#line 378 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 14239 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 480 "../../gcc/config/i386/sse.md"
(TARGET_SSE2))))
                return -1;
              return 7177; /* avx512f_rndscalev2df_mask */

            default:
              return -1;
            }

        default:
          return -1;
        }

    case 3:
      x5 = XEXP (x2, 2);
      if (GET_CODE (x5) != CONST_INT)
        return -1;
      x6 = XVECEXP (x4, 0, 0);
      operands[1] = x6;
      x10 = XVECEXP (x4, 0, 1);
      operands[2] = x10;
      x11 = XVECEXP (x4, 0, 2);
      operands[3] = x11;
      switch (XINT (x4, 1))
        {
        case 192:
          switch (pattern1109 (x2))
            {
            case 0:
              if (!(
#line 378 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 4041 "../../gcc/config/i386/sse.md"
(TARGET_AVX512DQ || (VALID_AVX512FP16_REG_MODE (V8HFmode))) && 
#line 479 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16))))
                return -1;
              return 3220; /* reducesv8hf_mask */

            case 1:
              if (!(
#line 378 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 4041 "../../gcc/config/i386/sse.md"
(TARGET_AVX512DQ || (VALID_AVX512FP16_REG_MODE (V4SFmode)))))
                return -1;
              return 3224; /* reducesv4sf_mask */

            case 2:
              if (!(
#line 378 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 4041 "../../gcc/config/i386/sse.md"
(TARGET_AVX512DQ || (VALID_AVX512FP16_REG_MODE (V2DFmode))) && 
#line 480 "../../gcc/config/i386/sse.md"
(TARGET_SSE2))))
                return -1;
              return 3228; /* reducesv2df_mask */

            default:
              return -1;
            }

        case 217:
          switch (pattern1110 (x2))
            {
            case 0:
              if (!(
#line 394 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 7474 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16)))
                return -1;
              return 4396; /* avx512fp16_fma_fmaddcsh_v8hf_maskz */

            case 1:
              if (!
#line 7494 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16))
                return -1;
              return 4403; /* avx512fp16_fmaddcsh_v8hf_mask */

            default:
              return -1;
            }

        case 219:
          switch (pattern1110 (x2))
            {
            case 0:
              if (!(
#line 394 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 7474 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16)))
                return -1;
              return 4400; /* avx512fp16_fma_fcmaddcsh_v8hf_maskz */

            case 1:
              if (!
#line 7494 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16))
                return -1;
              return 4405; /* avx512fp16_fcmaddcsh_v8hf_mask */

            default:
              return -1;
            }

        case 194:
          if (XWINT (x5, 0) != 1L
              || !const_0_to_15_operand (operands[3], E_SImode))
            return -1;
          x7 = XEXP (x3, 1);
          operands[4] = x7;
          x8 = XEXP (x3, 2);
          operands[5] = x8;
          if (!register_operand (operands[5], E_QImode))
            return -1;
          x9 = XEXP (x2, 1);
          if (!rtx_equal_p (x9, operands[1]))
            return -1;
          switch (GET_MODE (operands[0]))
            {
            case E_V4SFmode:
              if (pattern1107 (x2, 
E_V4SFmode) != 0
                  || !(
#line 378 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 29835 "../../gcc/config/i386/sse.md"
(TARGET_AVX512DQ)))
                return -1;
              return 9977; /* avx512dq_rangesv4sf_mask */

            case E_V2DFmode:
              if (pattern1107 (x2, 
E_V2DFmode) != 0
                  || !(
#line 378 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 29835 "../../gcc/config/i386/sse.md"
(TARGET_AVX512DQ) && 
#line 475 "../../gcc/config/i386/sse.md"
(TARGET_SSE2))))
                return -1;
              return 9981; /* avx512dq_rangesv2df_mask */

            default:
              return -1;
            }

        case 166:
          if (XWINT (x5, 0) != 1L
              || !const_0_to_15_operand (operands[3], E_SImode))
            return -1;
          switch (pattern1108 (x2))
            {
            case 0:
              if (!(
#line 378 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 29903 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 479 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16))))
                return -1;
              return 10039; /* avx512f_vgetmantv8hf_mask */

            case 1:
              if (!
#line 378 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F))
                return -1;
              return 10043; /* avx512f_vgetmantv4sf_mask */

            case 2:
              if (!(
#line 378 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 29903 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 480 "../../gcc/config/i386/sse.md"
(TARGET_SSE2))))
                return -1;
              return 10047; /* avx512f_vgetmantv2df_mask */

            default:
              return -1;
            }

        case 279:
          switch (pattern1109 (x2))
            {
            case 0:
              if (!(
#line 378 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 32664 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256) && 
#line 479 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16))))
                return -1;
              return 10972; /* avx10_2_minmaxsv8hf_mask */

            case 1:
              if (!(
#line 378 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 32664 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256)))
                return -1;
              return 10976; /* avx10_2_minmaxsv4sf_mask */

            case 2:
              if (!(
#line 378 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 32664 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256) && 
#line 480 "../../gcc/config/i386/sse.md"
(TARGET_SSE2))))
                return -1;
              return 10980; /* avx10_2_minmaxsv2df_mask */

            default:
              return -1;
            }

        default:
          return -1;
        }

    case 4:
      if (XINT (x4, 1) != 163)
        return -1;
      x6 = XVECEXP (x4, 0, 0);
      operands[1] = x6;
      x10 = XVECEXP (x4, 0, 1);
      operands[2] = x10;
      x11 = XVECEXP (x4, 0, 2);
      operands[3] = x11;
      x12 = XVECEXP (x4, 0, 3);
      operands[4] = x12;
      if (!const_0_to_255_operand (operands[4], E_SImode))
        return -1;
      x7 = XEXP (x3, 1);
      switch (GET_CODE (x7))
        {
        case CONST_INT:
        case CONST_DOUBLE:
        case CONST_VECTOR:
          operands[5] = x7;
          x5 = XEXP (x2, 2);
          if (x5 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
            return -1;
          x8 = XEXP (x3, 2);
          operands[6] = x8;
          if (!register_operand (operands[6], E_QImode))
            return -1;
          x9 = XEXP (x2, 1);
          if (!rtx_equal_p (x9, operands[2]))
            return -1;
          switch (GET_MODE (operands[0]))
            {
            case E_V4SFmode:
              if (pattern1633 (x2, 
E_V4SFmode, 
E_V4SImode) != 0
                  || !
#line 154 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F))
                return -1;
              return 7128; /* avx512f_sfixupimmv4sf_maskz_1 */

            case E_V2DFmode:
              if (pattern1633 (x2, 
E_V2DFmode, 
E_V2DImode) != 0
                  || !(
#line 154 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 14194 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 475 "../../gcc/config/i386/sse.md"
(TARGET_SSE2))))
                return -1;
              return 7132; /* avx512f_sfixupimmv2df_maskz_1 */

            default:
              return -1;
            }

        case REG:
        case SUBREG:
          if (!rtx_equal_p (x7, operands[2]))
            return -1;
          x8 = XEXP (x3, 2);
          if (x8 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
            return -1;
          x5 = XEXP (x2, 2);
          operands[5] = x5;
          if (!register_operand (operands[5], E_QImode))
            return -1;
          x9 = XEXP (x2, 1);
          if (!rtx_equal_p (x9, operands[1]))
            return -1;
          switch (GET_MODE (operands[0]))
            {
            case E_V4SFmode:
              if (pattern1634 (x2, 
E_V4SImode, 
E_V4SFmode) != 0
                  || !
#line 14213 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F))
                return -1;
              return 7134; /* avx512f_sfixupimmv4sf_mask */

            case E_V2DFmode:
              if (pattern1634 (x2, 
E_V2DImode, 
E_V2DFmode) != 0
                  || !(
#line 14213 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 475 "../../gcc/config/i386/sse.md"
(TARGET_SSE2)))
                return -1;
              return 7136; /* avx512f_sfixupimmv2df_mask */

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
recog_159 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  switch (GET_CODE (x3))
    {
    case CONST_INT:
    case CONST_DOUBLE:
    case CONST_VECTOR:
      operands[4] = x3;
      x4 = XEXP (x2, 2);
      switch (GET_CODE (x4))
        {
        case REG:
        case SUBREG:
          operands[5] = x4;
          switch (GET_MODE (operands[0]))
            {
            case E_V4SFmode:
              if (pattern1389 (x2, 
E_V4SFmode) != 0)
                return -1;
              if (nonimmediate_operand (operands[1], E_V4SFmode)
                  && nonimmediate_operand (operands[2], E_V4SFmode)
                  && nonimmediate_operand (operands[3], E_V4SFmode)
                  && 
#line 6213 "../../gcc/config/i386/sse.md"
(TARGET_FMA || TARGET_FMA4))
                return 4005; /* *fma_fnmsub_v4sf */
              if (!bcst_vector_operand (operands[1], E_V4SFmode)
                  || !bcst_vector_operand (operands[2], E_V4SFmode)
                  || !bcst_vector_operand (operands[3], E_V4SFmode)
                  || !(
#line 6246 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && (16 == 64 || TARGET_AVX512VL) && 1) && 
#line 5919 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                return -1;
              return 4041; /* fma_fnmsub_v4sf_maskz_1 */

            case E_V2DFmode:
              if (pattern1389 (x2, 
E_V2DFmode) != 0)
                return -1;
              if (nonimmediate_operand (operands[1], E_V2DFmode)
                  && nonimmediate_operand (operands[2], E_V2DFmode)
                  && nonimmediate_operand (operands[3], E_V2DFmode)
                  && 
#line 6213 "../../gcc/config/i386/sse.md"
(TARGET_FMA || TARGET_FMA4))
                return 4009; /* *fma_fnmsub_v2df */
              if (!bcst_vector_operand (operands[1], E_V2DFmode)
                  || !bcst_vector_operand (operands[2], E_V2DFmode)
                  || !bcst_vector_operand (operands[3], E_V2DFmode)
                  || !(
#line 6246 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && (16 == 64 || TARGET_AVX512VL) && 1) && 
#line 5921 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                return -1;
              return 4052; /* fma_fnmsub_v2df_maskz_1 */

            case E_V8SFmode:
              if (pattern1389 (x2, 
E_V8SFmode) != 0)
                return -1;
              if (nonimmediate_operand (operands[1], E_V8SFmode)
                  && nonimmediate_operand (operands[2], E_V8SFmode)
                  && nonimmediate_operand (operands[3], E_V8SFmode)
                  && 
#line 6213 "../../gcc/config/i386/sse.md"
(TARGET_FMA || TARGET_FMA4))
                return 4013; /* *fma_fnmsub_v8sf */
              if (!bcst_vector_operand (operands[1], E_V8SFmode)
                  || !bcst_vector_operand (operands[2], E_V8SFmode)
                  || !bcst_vector_operand (operands[3], E_V8SFmode)
                  || !(
#line 6246 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && (32 == 64 || TARGET_AVX512VL) && 1) && 
#line 5919 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                return -1;
              return 4037; /* fma_fnmsub_v8sf_maskz_1 */

            case E_V4DFmode:
              if (pattern1389 (x2, 
E_V4DFmode) != 0)
                return -1;
              if (nonimmediate_operand (operands[1], E_V4DFmode)
                  && nonimmediate_operand (operands[2], E_V4DFmode)
                  && nonimmediate_operand (operands[3], E_V4DFmode)
                  && 
#line 6213 "../../gcc/config/i386/sse.md"
(TARGET_FMA || TARGET_FMA4))
                return 4017; /* *fma_fnmsub_v4df */
              if (!bcst_vector_operand (operands[1], E_V4DFmode)
                  || !bcst_vector_operand (operands[2], E_V4DFmode)
                  || !bcst_vector_operand (operands[3], E_V4DFmode)
                  || !(
#line 6246 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && (32 == 64 || TARGET_AVX512VL) && 1) && 
#line 5921 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                return -1;
              return 4048; /* fma_fnmsub_v4df_maskz_1 */

            case E_V32HFmode:
              if (pattern1390 (x2, 
E_SImode, 
E_V32HFmode) != 0
                  || !(
#line 6246 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && (64 == 64 || TARGET_AVX512VL) && 1) && 
#line 5914 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_EVEX512)))
                return -1;
              return 4021; /* fma_fnmsub_v32hf_maskz_1 */

            case E_V16HFmode:
              if (pattern1390 (x2, 
E_HImode, 
E_V16HFmode) != 0
                  || !(
#line 6246 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && (32 == 64 || TARGET_AVX512VL) && 1) && 
#line 5915 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL)))
                return -1;
              return 4025; /* fma_fnmsub_v16hf_maskz_1 */

            case E_V8HFmode:
              if (pattern1390 (x2, 
E_QImode, 
E_V8HFmode) != 0
                  || !(
#line 6246 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && (16 == 64 || TARGET_AVX512VL) && 1) && 
#line 5916 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL)))
                return -1;
              return 4029; /* fma_fnmsub_v8hf_maskz_1 */

            case E_V16SFmode:
              if (pattern1390 (x2, 
E_HImode, 
E_V16SFmode) != 0
                  || !(
#line 6246 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && (64 == 64 || TARGET_AVX512VL) && 1) && 
#line 5918 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                return -1;
              return 4033; /* fma_fnmsub_v16sf_maskz_1 */

            case E_V8DFmode:
              if (pattern1390 (x2, 
E_QImode, 
E_V8DFmode) != 0
                  || !(
#line 6246 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && (64 == 64 || TARGET_AVX512VL) && 1) && 
#line 5920 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                return -1;
              return 4044; /* fma_fnmsub_v8df_maskz_1 */

            case E_V32BFmode:
              if (pattern1391 (x2, 
E_SImode, 
E_V32BFmode) != 0
                  || !(
#line 32329 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256) && 
#line 565 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_512)))
                return -1;
              return 10663; /* avx10_2_fnmsubnepbf16_v32bf_maskz_1 */

            case E_V16BFmode:
              if (pattern1391 (x2, 
E_HImode, 
E_V16BFmode) != 0
                  || !
#line 32329 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
                return -1;
              return 10665; /* avx10_2_fnmsubnepbf16_v16bf_maskz_1 */

            case E_V8BFmode:
              if (pattern1391 (x2, 
E_QImode, 
E_V8BFmode) != 0
                  || !
#line 32329 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
                return -1;
              return 10667; /* avx10_2_fnmsubnepbf16_v8bf_maskz_1 */

            default:
              return -1;
            }

        case CONST_INT:
          if (XWINT (x4, 0) != 1L)
            return -1;
          switch (GET_MODE (operands[0]))
            {
            case E_V4SFmode:
              if (pattern1392 (x2, 
E_V4SFmode) != 0
                  || !
#line 6991 "../../gcc/config/i386/sse.md"
(TARGET_FMA4))
                return -1;
              return 4319; /* *fma4i_vmfnmsub_v4sf */

            case E_V2DFmode:
              if (pattern1392 (x2, 
E_V2DFmode) != 0
                  || !(
#line 6991 "../../gcc/config/i386/sse.md"
(TARGET_FMA4) && 
#line 475 "../../gcc/config/i386/sse.md"
(TARGET_SSE2)))
                return -1;
              return 4320; /* *fma4i_vmfnmsub_v2df */

            default:
              return -1;
            }

        default:
          return -1;
        }

    case REG:
    case SUBREG:
    case MEM:
      switch (pattern637 (x2))
        {
        case 0:
          if (pattern1299 (x2, 
E_V32HFmode, 
E_SImode) != 0)
            return -1;
          if (nonimmediate_operand (operands[1], E_V32HFmode)
              && vector_operand (operands[3], E_V32HFmode)
              && rtx_equal_p (x3, operands[1])
              && (
#line 6291 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 525 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_EVEX512)))
            return 4053; /* avx512bw_fnmsub_v32hf_mask */
          if (!vector_operand (operands[1], E_V32HFmode)
              || !nonimmediate_operand (operands[3], E_V32HFmode)
              || !rtx_equal_p (x3, operands[3])
              || !(
#line 6310 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 525 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_EVEX512)))
            return -1;
          return 4068; /* avx512bw_fnmsub_v32hf_mask3 */

        case 1:
          if (pattern1299 (x2, 
E_V16HFmode, 
E_HImode) != 0)
            return -1;
          if (nonimmediate_operand (operands[1], E_V16HFmode)
              && vector_operand (operands[3], E_V16HFmode)
              && rtx_equal_p (x3, operands[1])
              && (
#line 6291 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 526 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL)))
            return 4055; /* avx512vl_fnmsub_v16hf_mask */
          if (!vector_operand (operands[1], E_V16HFmode)
              || !nonimmediate_operand (operands[3], E_V16HFmode)
              || !rtx_equal_p (x3, operands[3])
              || !(
#line 6310 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 526 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL)))
            return -1;
          return 4070; /* avx512vl_fnmsub_v16hf_mask3 */

        case 2:
          if (pattern1299 (x2, 
E_V8HFmode, 
E_QImode) != 0)
            return -1;
          if (nonimmediate_operand (operands[1], E_V8HFmode)
              && vector_operand (operands[3], E_V8HFmode)
              && rtx_equal_p (x3, operands[1])
              && (
#line 6291 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 527 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL)))
            return 4057; /* avx512fp16_fnmsub_v8hf_mask */
          if (!vector_operand (operands[1], E_V8HFmode)
              || !nonimmediate_operand (operands[3], E_V8HFmode)
              || !rtx_equal_p (x3, operands[3])
              || !(
#line 6310 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 527 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL)))
            return -1;
          return 4072; /* avx512fp16_fnmsub_v8hf_mask3 */

        case 3:
          if (pattern1299 (x2, 
E_V16SFmode, 
E_HImode) != 0)
            return -1;
          if (nonimmediate_operand (operands[1], E_V16SFmode)
              && vector_operand (operands[3], E_V16SFmode)
              && rtx_equal_p (x3, operands[1])
              && (
#line 6291 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 528 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return 4058; /* avx512f_fnmsub_v16sf_mask */
          if (!vector_operand (operands[1], E_V16SFmode)
              || !nonimmediate_operand (operands[3], E_V16SFmode)
              || !rtx_equal_p (x3, operands[3])
              || !(
#line 6310 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 528 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return -1;
          return 4073; /* avx512f_fnmsub_v16sf_mask3 */

        case 4:
          if (pattern1299 (x2, 
E_V8SFmode, 
E_QImode) != 0)
            return -1;
          if (nonimmediate_operand (operands[1], E_V8SFmode)
              && vector_operand (operands[3], E_V8SFmode)
              && rtx_equal_p (x3, operands[1])
              && (
#line 6291 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 528 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return 4060; /* avx512vl_fnmsub_v8sf_mask */
          if (!vector_operand (operands[1], E_V8SFmode)
              || !nonimmediate_operand (operands[3], E_V8SFmode)
              || !rtx_equal_p (x3, operands[3])
              || !(
#line 6310 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 528 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 4075; /* avx512vl_fnmsub_v8sf_mask3 */

        case 5:
          if (pattern1299 (x2, 
E_V4SFmode, 
E_QImode) != 0)
            return -1;
          if (nonimmediate_operand (operands[1], E_V4SFmode)
              && vector_operand (operands[3], E_V4SFmode)
              && rtx_equal_p (x3, operands[1])
              && (
#line 6291 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 528 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return 4062; /* avx512vl_fnmsub_v4sf_mask */
          if (!vector_operand (operands[1], E_V4SFmode)
              || !nonimmediate_operand (operands[3], E_V4SFmode)
              || !rtx_equal_p (x3, operands[3])
              || !(
#line 6310 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 528 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 4077; /* avx512vl_fnmsub_v4sf_mask3 */

        case 6:
          if (pattern1299 (x2, 
E_V8DFmode, 
E_QImode) != 0)
            return -1;
          if (nonimmediate_operand (operands[1], E_V8DFmode)
              && vector_operand (operands[3], E_V8DFmode)
              && rtx_equal_p (x3, operands[1])
              && (
#line 6291 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 529 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return 4063; /* avx512f_fnmsub_v8df_mask */
          if (!vector_operand (operands[1], E_V8DFmode)
              || !nonimmediate_operand (operands[3], E_V8DFmode)
              || !rtx_equal_p (x3, operands[3])
              || !(
#line 6310 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 529 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return -1;
          return 4078; /* avx512f_fnmsub_v8df_mask3 */

        case 7:
          if (pattern1299 (x2, 
E_V4DFmode, 
E_QImode) != 0)
            return -1;
          if (nonimmediate_operand (operands[1], E_V4DFmode)
              && vector_operand (operands[3], E_V4DFmode)
              && rtx_equal_p (x3, operands[1])
              && (
#line 6291 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 529 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return 4065; /* avx512vl_fnmsub_v4df_mask */
          if (!vector_operand (operands[1], E_V4DFmode)
              || !nonimmediate_operand (operands[3], E_V4DFmode)
              || !rtx_equal_p (x3, operands[3])
              || !(
#line 6310 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 529 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 4080; /* avx512vl_fnmsub_v4df_mask3 */

        case 8:
          if (pattern1299 (x2, 
E_V2DFmode, 
E_QImode) != 0)
            return -1;
          if (nonimmediate_operand (operands[1], E_V2DFmode)
              && vector_operand (operands[3], E_V2DFmode)
              && rtx_equal_p (x3, operands[1])
              && (
#line 6291 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 529 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return 4067; /* avx512vl_fnmsub_v2df_mask */
          if (!vector_operand (operands[1], E_V2DFmode)
              || !nonimmediate_operand (operands[3], E_V2DFmode)
              || !rtx_equal_p (x3, operands[3])
              || !(
#line 6310 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 529 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 4082; /* avx512vl_fnmsub_v2df_mask3 */

        case 9:
          if (pattern1300 (x2, 
E_SImode, 
E_V32BFmode) != 0)
            return -1;
          if (rtx_equal_p (x3, operands[1])
              && (
#line 32349 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256) && 
#line 565 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_512)))
            return 10668; /* avx10_2_fnmsubnepbf16_v32bf_mask */
          if (!rtx_equal_p (x3, operands[3])
              || !(
#line 32368 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256) && 
#line 565 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_512)))
            return -1;
          return 10671; /* avx10_2_fnmsubnepbf16_v32bf_mask3 */

        case 10:
          if (pattern1300 (x2, 
E_HImode, 
E_V16BFmode) != 0)
            return -1;
          if (rtx_equal_p (x3, operands[1])
              && 
#line 32349 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
            return 10669; /* avx10_2_fnmsubnepbf16_v16bf_mask */
          if (!rtx_equal_p (x3, operands[3])
              || !
#line 32368 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
            return -1;
          return 10672; /* avx10_2_fnmsubnepbf16_v16bf_mask3 */

        case 11:
          if (pattern1300 (x2, 
E_QImode, 
E_V8BFmode) != 0)
            return -1;
          if (rtx_equal_p (x3, operands[1])
              && 
#line 32349 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
            return 10670; /* avx10_2_fnmsubnepbf16_v8bf_mask */
          if (!rtx_equal_p (x3, operands[3])
              || !
#line 32368 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
            return -1;
          return 10673; /* avx10_2_fnmsubnepbf16_v8bf_mask3 */

        case 12:
          if (pattern1393 (x2, 
E_V8HFmode) != 0
              || !(
#line 6638 "../../gcc/config/i386/sse.md"
(TARGET_FMA || TARGET_AVX512F) && 
#line 479 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16)))
            return -1;
          return 4235; /* *fmai_fnmsub_v8hf */

        case 13:
          if (pattern1393 (x2, 
E_V4SFmode) != 0
              || !
#line 6638 "../../gcc/config/i386/sse.md"
(TARGET_FMA || TARGET_AVX512F))
            return -1;
          return 4237; /* *fmai_fnmsub_v4sf */

        case 14:
          if (pattern1393 (x2, 
E_V2DFmode) != 0
              || !(
#line 6638 "../../gcc/config/i386/sse.md"
(TARGET_FMA || TARGET_AVX512F) && 
#line 480 "../../gcc/config/i386/sse.md"
(TARGET_SSE2)))
            return -1;
          return 4239; /* *fmai_fnmsub_v2df */

        default:
          return -1;
        }

    default:
      return -1;
    }
}

 int
recog_167 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  x5 = XVECEXP (x4, 0, 0);
  if (GET_CODE (x5) != CONST_INT)
    return -1;
  operands[2] = x5;
  if (const_0_to_7_operand (operands[2], E_VOIDmode))
    {
      x6 = XVECEXP (x4, 0, 1);
      operands[3] = x6;
      if (const_0_to_7_operand (operands[3], E_VOIDmode))
        {
          x7 = XEXP (x2, 1);
          operands[4] = x7;
          x8 = XEXP (x2, 2);
          operands[5] = x8;
          if (register_operand (operands[5], E_QImode))
            {
              switch (GET_MODE (operands[0]))
                {
                case E_V2DFmode:
                  if (pattern1546 (x2, 
E_V2DFmode, 
E_V8DFmode) == 0
                      && (
#line 12435 "../../gcc/config/i386/sse.md"
(TARGET_AVX512DQ
   && INTVAL (operands[2]) % 2 == 0
   && INTVAL (operands[2]) == INTVAL (operands[3]) - 1
   && (!MEM_P (operands[0]) || rtx_equal_p (operands[0], operands[4]))) && 
#line 718 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                    return 5334; /* avx512dq_vextractf64x2_1_mask */
                  break;

                case E_V2DImode:
                  if (pattern1546 (x2, 
E_V2DImode, 
E_V8DImode) == 0
                      && (
#line 12435 "../../gcc/config/i386/sse.md"
(TARGET_AVX512DQ
   && INTVAL (operands[2]) % 2 == 0
   && INTVAL (operands[2]) == INTVAL (operands[3]) - 1
   && (!MEM_P (operands[0]) || rtx_equal_p (operands[0], operands[4]))) && 
#line 718 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                    return 5335; /* avx512dq_vextracti64x2_1_mask */
                  break;

                default:
                  break;
                }
            }
        }
    }
  x6 = XVECEXP (x4, 0, 1);
  if (GET_CODE (x6) != CONST_INT)
    return -1;
  x7 = XEXP (x2, 1);
  operands[2] = x7;
  x8 = XEXP (x2, 2);
  operands[3] = x8;
  if (!register_operand (operands[3], E_QImode))
    return -1;
  switch (XWINT (x5, 0))
    {
    case 0L:
      if (XWINT (x6, 0) != 1L)
        return -1;
      switch (GET_MODE (operands[0]))
        {
        case E_V2DImode:
          if (!nonimmediate_operand (operands[0], E_V2DImode)
              || pattern1547 (x2, 
E_V2DImode, 
E_V4DImode) != 0
              || !
#line 12865 "../../gcc/config/i386/sse.md"
(TARGET_AVX512DQ
   && TARGET_AVX512VL
   && (!MEM_P (operands[0]) || rtx_equal_p (operands[0], operands[2]))))
            return -1;
          return 5358; /* vec_extract_lo_v4di_mask */

        case E_V2DFmode:
          if (!nonimmediate_operand (operands[0], E_V2DFmode)
              || pattern1547 (x2, 
E_V2DFmode, 
E_V4DFmode) != 0
              || !
#line 12865 "../../gcc/config/i386/sse.md"
(TARGET_AVX512DQ
   && TARGET_AVX512VL
   && (!MEM_P (operands[0]) || rtx_equal_p (operands[0], operands[2]))))
            return -1;
          return 5359; /* vec_extract_lo_v4df_mask */

        default:
          return -1;
        }

    case 2L:
      if (XWINT (x6, 0) != 3L)
        return -1;
      switch (GET_MODE (operands[0]))
        {
        case E_V2DImode:
          if (!nonimmediate_operand (operands[0], E_V2DImode)
              || pattern1547 (x2, 
E_V2DImode, 
E_V4DImode) != 0
              || !
#line 12902 "../../gcc/config/i386/sse.md"
(TARGET_AVX512DQ
   && TARGET_AVX512VL
   && (!MEM_P (operands[0]) || rtx_equal_p (operands[0], operands[2]))))
            return -1;
          return 5362; /* vec_extract_hi_v4di_mask */

        case E_V2DFmode:
          if (!nonimmediate_operand (operands[0], E_V2DFmode)
              || pattern1547 (x2, 
E_V2DFmode, 
E_V4DFmode) != 0
              || !
#line 12902 "../../gcc/config/i386/sse.md"
(TARGET_AVX512DQ
   && TARGET_AVX512VL
   && (!MEM_P (operands[0]) || rtx_equal_p (operands[0], operands[2]))))
            return -1;
          return 5363; /* vec_extract_hi_v4df_mask */

        default:
          return -1;
        }

    default:
      return -1;
    }
}

 int
recog_174 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12, x13, x14, x15, x16, x17;
  rtx x18, x19, x20;
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
  x11 = XVECEXP (x4, 0, 8);
  operands[10] = x11;
  x12 = XVECEXP (x4, 0, 9);
  operands[11] = x12;
  x13 = XVECEXP (x4, 0, 10);
  operands[12] = x13;
  x14 = XVECEXP (x4, 0, 11);
  operands[13] = x14;
  x15 = XVECEXP (x4, 0, 12);
  operands[14] = x15;
  x16 = XVECEXP (x4, 0, 13);
  operands[15] = x16;
  x17 = XVECEXP (x4, 0, 14);
  operands[16] = x17;
  x18 = XVECEXP (x4, 0, 15);
  operands[17] = x18;
  x19 = XEXP (x2, 1);
  operands[18] = x19;
  x20 = XEXP (x2, 2);
  operands[19] = x20;
  if (!register_operand (operands[19], E_HImode))
    return -1;
  switch (GET_MODE (operands[0]))
    {
    case E_V16SFmode:
      if (!register_operand (operands[0], E_V16SFmode)
          || GET_MODE (x2) != E_V16SFmode
          || GET_MODE (x3) != E_V16SFmode
          || !register_operand (operands[1], E_V16SFmode)
          || pattern1849 () != 0
          || !nonimm_or_0_operand (operands[18], E_V16SFmode)
          || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
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
(TARGET_EVEX512))))
        return -1;
      return 8431; /* *avx512f_shuf_f32x4_1_mask_1 */

    case E_V16SImode:
      if (!register_operand (operands[0], E_V16SImode)
          || GET_MODE (x2) != E_V16SImode
          || GET_MODE (x3) != E_V16SImode
          || !nonimm_or_0_operand (operands[18], E_V16SImode))
        return -1;
      if (register_operand (operands[1], E_V16SImode)
          && pattern1849 () == 0
          && (
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
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
(TARGET_EVEX512))))
        return 8433; /* *avx512f_shuf_i32x4_1_mask_1 */
      if (!nonimmediate_operand (operands[1], E_V16SImode)
          || pattern1805 () != 0
          || !const_8_to_11_operand (operands[10], E_VOIDmode)
          || !const_8_to_11_operand (operands[11], E_VOIDmode)
          || !const_8_to_11_operand (operands[12], E_VOIDmode)
          || !const_8_to_11_operand (operands[13], E_VOIDmode)
          || !const_12_to_15_operand (operands[14], E_VOIDmode)
          || !const_12_to_15_operand (operands[15], E_VOIDmode)
          || !const_12_to_15_operand (operands[16], E_VOIDmode)
          || !const_12_to_15_operand (operands[17], E_VOIDmode)
          || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
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
   && INTVAL (operands[5]) + 12 == INTVAL (operands[17]))))
        return -1;
      return 8435; /* avx512f_pshufd_1_mask */

    default:
      return -1;
    }
}

 int
recog_184 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  switch (XVECLEN (x3, 0))
    {
    case 1:
      return recog_145 (x1, insn, pnum_clobbers);

    case 2:
      return recog_144 (x1, insn, pnum_clobbers);

    case 3:
      return recog_143 (x1, insn, pnum_clobbers);

    case 4:
      x4 = XVECEXP (x3, 0, 0);
      operands[1] = x4;
      x5 = XVECEXP (x3, 0, 1);
      operands[2] = x5;
      x6 = XVECEXP (x3, 0, 2);
      operands[3] = x6;
      x7 = XVECEXP (x3, 0, 3);
      operands[4] = x7;
      if (!const_0_to_255_operand (operands[4], E_SImode))
        return -1;
      switch (XINT (x3, 1))
        {
        case 164:
          x8 = XEXP (x2, 1);
          switch (GET_CODE (x8))
            {
            case CONST_INT:
            case CONST_DOUBLE:
            case CONST_VECTOR:
              operands[5] = x8;
              x9 = XEXP (x2, 2);
              operands[6] = x9;
              switch (GET_MODE (operands[0]))
                {
                case E_V16SImode:
                  if (pattern1457 (x2, 
E_V16SImode, 
E_HImode) != 0
                      || !(
#line 13651 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 501 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                    return -1;
                  return 5457; /* avx512f_vternlogv16si_maskz_1 */

                case E_V8SImode:
                  if (pattern1457 (x2, 
E_V8SImode, 
E_QImode) != 0
                      || !(
#line 13651 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 501 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                    return -1;
                  return 5459; /* avx512vl_vternlogv8si_maskz_1 */

                case E_V4SImode:
                  if (pattern1457 (x2, 
E_V4SImode, 
E_QImode) != 0
                      || !(
#line 13651 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 501 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                    return -1;
                  return 5461; /* avx512vl_vternlogv4si_maskz_1 */

                case E_V8DImode:
                  if (pattern1457 (x2, 
E_V8DImode, 
E_QImode) != 0
                      || !(
#line 13651 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 502 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                    return -1;
                  return 5463; /* avx512f_vternlogv8di_maskz_1 */

                case E_V4DImode:
                  if (pattern1457 (x2, 
E_V4DImode, 
E_QImode) != 0
                      || !(
#line 13651 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 502 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                    return -1;
                  return 5465; /* avx512vl_vternlogv4di_maskz_1 */

                case E_V2DImode:
                  if (pattern1457 (x2, 
E_V2DImode, 
E_QImode) != 0
                      || !(
#line 13651 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 502 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                    return -1;
                  return 5467; /* avx512vl_vternlogv2di_maskz_1 */

                default:
                  return -1;
                }

            case REG:
            case SUBREG:
              if (!rtx_equal_p (x8, operands[1]))
                return -1;
              x9 = XEXP (x2, 2);
              operands[5] = x9;
              switch (GET_MODE (operands[0]))
                {
                case E_V16SImode:
                  if (pattern1458 (x2, 
E_V16SImode, 
E_HImode) != 0
                      || !(
#line 14021 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 501 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                    return -1;
                  return 7028; /* *avx512f_vternlogv16si_mask */

                case E_V8SImode:
                  if (pattern1458 (x2, 
E_V8SImode, 
E_QImode) != 0
                      || !(
#line 14021 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 501 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                    return -1;
                  return 7029; /* *avx512vl_vternlogv8si_mask */

                case E_V4SImode:
                  if (pattern1458 (x2, 
E_V4SImode, 
E_QImode) != 0
                      || !(
#line 14021 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 501 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                    return -1;
                  return 7030; /* *avx512vl_vternlogv4si_mask */

                case E_V8DImode:
                  if (pattern1458 (x2, 
E_V8DImode, 
E_QImode) != 0
                      || !(
#line 14021 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 502 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                    return -1;
                  return 7031; /* *avx512f_vternlogv8di_mask */

                case E_V4DImode:
                  if (pattern1458 (x2, 
E_V4DImode, 
E_QImode) != 0
                      || !(
#line 14021 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 502 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                    return -1;
                  return 7032; /* *avx512vl_vternlogv4di_mask */

                case E_V2DImode:
                  if (pattern1458 (x2, 
E_V2DImode, 
E_QImode) != 0
                      || !(
#line 14021 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 502 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                    return -1;
                  return 7033; /* *avx512vl_vternlogv2di_mask */

                default:
                  return -1;
                }

            default:
              return -1;
            }

        case 163:
          x8 = XEXP (x2, 1);
          switch (GET_CODE (x8))
            {
            case CONST_INT:
            case CONST_DOUBLE:
            case CONST_VECTOR:
              operands[5] = x8;
              x9 = XEXP (x2, 2);
              operands[6] = x9;
              switch (GET_MODE (operands[0]))
                {
                case E_V16SFmode:
                  if (pattern1459 (x2, 
E_V16SFmode, 
E_V16SImode, 
E_HImode) != 0
                      || !(
#line 14146 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 521 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                    return -1;
                  return 7098; /* avx512f_fixupimmv16sf_maskz_1 */

                case E_V8SFmode:
                  if (pattern1459 (x2, 
E_V8SFmode, 
E_V8SImode, 
E_QImode) != 0
                      || !(
#line 14146 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 521 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                    return -1;
                  return 7102; /* avx512vl_fixupimmv8sf_maskz_1 */

                case E_V4SFmode:
                  if (pattern1459 (x2, 
E_V4SFmode, 
E_V4SImode, 
E_QImode) != 0
                      || !(
#line 14146 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 521 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                    return -1;
                  return 7105; /* avx512vl_fixupimmv4sf_maskz_1 */

                case E_V8DFmode:
                  if (pattern1459 (x2, 
E_V8DFmode, 
E_V8DImode, 
E_QImode) != 0
                      || !(
#line 14146 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 522 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                    return -1;
                  return 7108; /* avx512f_fixupimmv8df_maskz_1 */

                case E_V4DFmode:
                  if (pattern1459 (x2, 
E_V4DFmode, 
E_V4DImode, 
E_QImode) != 0
                      || !(
#line 14146 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 522 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                    return -1;
                  return 7112; /* avx512vl_fixupimmv4df_maskz_1 */

                case E_V2DFmode:
                  if (pattern1459 (x2, 
E_V2DFmode, 
E_V2DImode, 
E_QImode) != 0
                      || !(
#line 14146 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 522 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                    return -1;
                  return 7115; /* avx512vl_fixupimmv2df_maskz_1 */

                default:
                  return -1;
                }

            case REG:
            case SUBREG:
              x9 = XEXP (x2, 2);
              switch (GET_CODE (x9))
                {
                case REG:
                case SUBREG:
                  operands[5] = x9;
                  if (!rtx_equal_p (x8, operands[1]))
                    return -1;
                  switch (GET_MODE (operands[0]))
                    {
                    case E_V16SFmode:
                      if (pattern1515 (x2, 
E_V16SImode, 
E_V16SFmode, 
E_HImode) != 0
                          || !(
#line 14162 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 521 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                        return -1;
                      return 7116; /* avx512f_fixupimmv16sf_mask */

                    case E_V8SFmode:
                      if (pattern1515 (x2, 
E_V8SImode, 
E_V8SFmode, 
E_QImode) != 0
                          || !(
#line 14162 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 521 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                        return -1;
                      return 7118; /* avx512vl_fixupimmv8sf_mask */

                    case E_V4SFmode:
                      if (pattern1515 (x2, 
E_V4SImode, 
E_V4SFmode, 
E_QImode) != 0
                          || !(
#line 14162 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 521 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                        return -1;
                      return 7120; /* avx512vl_fixupimmv4sf_mask */

                    case E_V8DFmode:
                      if (pattern1515 (x2, 
E_V8DImode, 
E_V8DFmode, 
E_QImode) != 0
                          || !(
#line 14162 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 522 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                        return -1;
                      return 7121; /* avx512f_fixupimmv8df_mask */

                    case E_V4DFmode:
                      if (pattern1515 (x2, 
E_V4DImode, 
E_V4DFmode, 
E_QImode) != 0
                          || !(
#line 14162 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 522 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                        return -1;
                      return 7123; /* avx512vl_fixupimmv4df_mask */

                    case E_V2DFmode:
                      if (pattern1515 (x2, 
E_V2DImode, 
E_V2DFmode, 
E_QImode) != 0
                          || !(
#line 14162 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 522 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                        return -1;
                      return 7125; /* avx512vl_fixupimmv2df_mask */

                    default:
                      return -1;
                    }

                case CONST_INT:
                  if (XWINT (x9, 0) != 1L
                      || !rtx_equal_p (x8, operands[2]))
                    return -1;
                  switch (GET_MODE (operands[0]))
                    {
                    case E_V4SFmode:
                      if (pattern1516 (x2, 
E_V4SImode, 
E_V4SFmode) != 0
                          || !
#line 14194 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F))
                        return -1;
                      return 7126; /* avx512f_sfixupimmv4sf */

                    case E_V2DFmode:
                      if (pattern1516 (x2, 
E_V2DImode, 
E_V2DFmode) != 0
                          || !(
#line 14194 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 475 "../../gcc/config/i386/sse.md"
(TARGET_SSE2)))
                        return -1;
                      return 7130; /* avx512f_sfixupimmv2df */

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
}

 int
recog_188 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  switch (pattern139 (x2))
    {
    case 0:
      if (nonimmediate_operand (operands[1], E_V16HImode)
          && nonmemory_operand (operands[2], E_DImode)
          && (
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 17290 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL) && 
#line 799 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW))))
        return 7641; /* ashlv16hi3_mask */
      if (!register_operand (operands[1], E_V16HImode)
          || !nonimmediate_operand (operands[2], E_V16HImode)
          || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 28934 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 686 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
        return -1;
      return 9596; /* avx512vl_ashlvv16hi_mask */

    case 1:
      if (nonimmediate_operand (operands[1], E_V8HImode)
          && nonmemory_operand (operands[2], E_DImode)
          && (
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 17290 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL) && 
#line 799 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW))))
        return 7645; /* ashlv8hi3_mask */
      if (!register_operand (operands[1], E_V8HImode)
          || !nonimmediate_operand (operands[2], E_V8HImode)
          || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 28934 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 686 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
        return -1;
      return 9592; /* avx512vl_ashlvv8hi_mask */

    case 2:
      if (nonimmediate_operand (operands[1], E_V8SImode)
          && nonmemory_operand (operands[2], E_DImode)
          && (
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 17290 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return 7649; /* ashlv8si3_mask */
      if (!register_operand (operands[1], E_V8SImode)
          || !nonimmediate_operand (operands[2], E_V8SImode)
          || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 28923 "../../gcc/config/i386/sse.md"
(TARGET_AVX2 && (32 == 64 || TARGET_AVX512VL))))
        return -1;
      return 9572; /* avx2_ashlvv8si_mask */

    case 3:
      if (nonimmediate_operand (operands[1], E_V4SImode)
          && nonmemory_operand (operands[2], E_DImode)
          && (
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 17290 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return 7653; /* ashlv4si3_mask */
      if (!register_operand (operands[1], E_V4SImode)
          || !nonimmediate_operand (operands[2], E_V4SImode)
          || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 28923 "../../gcc/config/i386/sse.md"
(TARGET_AVX2 && (16 == 64 || TARGET_AVX512VL))))
        return -1;
      return 9576; /* avx2_ashlvv4si_mask */

    case 4:
      if (nonimmediate_operand (operands[1], E_V4DImode)
          && nonmemory_operand (operands[2], E_DImode)
          && (
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 17290 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return 7657; /* ashlv4di3_mask */
      if (!register_operand (operands[1], E_V4DImode)
          || !nonimmediate_operand (operands[2], E_V4DImode)
          || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 28923 "../../gcc/config/i386/sse.md"
(TARGET_AVX2 && (32 == 64 || TARGET_AVX512VL))))
        return -1;
      return 9584; /* avx2_ashlvv4di_mask */

    case 5:
      if (nonimmediate_operand (operands[1], E_V2DImode)
          && nonmemory_operand (operands[2], E_DImode)
          && (
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 17290 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return 7661; /* ashlv2di3_mask */
      if (!register_operand (operands[1], E_V2DImode)
          || !nonimmediate_operand (operands[2], E_V2DImode)
          || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 28923 "../../gcc/config/i386/sse.md"
(TARGET_AVX2 && (16 == 64 || TARGET_AVX512VL))))
        return -1;
      return 9588; /* avx2_ashlvv2di_mask */

    case 6:
      if (nonimmediate_operand (operands[1], E_V32HImode)
          && nonmemory_operand (operands[2], E_DImode)
          && (
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 17378 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 785 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512))))
        return 7681; /* ashlv32hi3_mask */
      if (!register_operand (operands[1], E_V32HImode)
          || !nonimmediate_operand (operands[2], E_V32HImode)
          || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 28934 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 686 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512))))
        return -1;
      return 9600; /* avx512bw_ashlvv32hi_mask */

    case 7:
      if (nonimmediate_operand (operands[1], E_V16SImode)
          && nonmemory_operand (operands[2], E_DImode)
          && (
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 17378 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 785 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512))))
        return 7685; /* ashlv16si3_mask */
      if (!register_operand (operands[1], E_V16SImode)
          || !nonimmediate_operand (operands[2], E_V16SImode)
          || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 28923 "../../gcc/config/i386/sse.md"
(TARGET_AVX2 && (64 == 64 || TARGET_AVX512VL)) && 
#line 804 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512))))
        return -1;
      return 9568; /* avx512f_ashlvv16si_mask */

    case 8:
      if (nonimmediate_operand (operands[1], E_V8DImode)
          && nonmemory_operand (operands[2], E_DImode)
          && (
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 17378 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 786 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512))))
        return 7689; /* ashlv8di3_mask */
      if (!register_operand (operands[1], E_V8DImode)
          || !nonimmediate_operand (operands[2], E_V8DImode)
          || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 28923 "../../gcc/config/i386/sse.md"
(TARGET_AVX2 && (64 == 64 || TARGET_AVX512VL)) && 
#line 805 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512))))
        return -1;
      return 9580; /* avx512f_ashlvv8di_mask */

    default:
      return -1;
    }
}

 int
recog_195 (rtx x1 ATTRIBUTE_UNUSED,
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
      return 4604; /* avx512fp16_fix_truncv8hi2_mask */

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
      return 4609; /* avx512fp16_fix_truncv16hi2_mask */

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
      return 4617; /* avx512fp16_fix_truncv32hi2_mask */

    case 3:
      if (pattern773 (x2, 
E_V8SImode, 
E_QImode) != 0)
        return -1;
      switch (GET_MODE (operands[1]))
        {
        case E_V8HFmode:
          if (!vector_operand (operands[1], E_V8HFmode)
              || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 7865 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && 1) && 
#line 695 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
            return -1;
          return 4625; /* avx512fp16_fix_truncv8si2_mask */

        case E_V8SFmode:
          if (!nonimmediate_operand (operands[1], E_V8SFmode)
              || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 8793 "../../gcc/config/i386/sse.md"
(TARGET_AVX && TARGET_AVX512VL)))
            return -1;
          return 4889; /* fix_truncv8sfv8si2_mask */

        case E_V8DFmode:
          if (!vector_operand (operands[1], E_V8DFmode)
              || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 9568 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 5031; /* fix_truncv8dfv8si2_mask */

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
          return 4633; /* avx512fp16_fix_truncv16si2_mask */

        case 1:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 8773 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 4878; /* fix_truncv16sfv16si2_mask */

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
          return 4641; /* avx512fp16_fix_truncv8di2_mask */

        case 1:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 9699 "../../gcc/config/i386/sse.md"
(TARGET_AVX512DQ && 1) && 
#line 537 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512))))
            return -1;
          return 5076; /* fix_truncv8dfv8di2_mask */

        case 2:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 9742 "../../gcc/config/i386/sse.md"
(TARGET_AVX512DQ) && 
#line 627 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512))))
            return -1;
          return 5131; /* fix_truncv8sfv8di2_mask */

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
          return 4668; /* *avx512fp16_fix_truncv4si2_load_mask */

        case E_V4SFmode:
          if (!vector_operand (operands[1], E_V4SFmode)
              || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 8823 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && TARGET_AVX512VL)))
            return -1;
          return 4893; /* fix_truncv4sfv4si2_mask */

        case E_V4DFmode:
          if (!nonimmediate_operand (operands[1], E_V4DFmode)
              || !(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 9658 "../../gcc/config/i386/sse.md"
(TARGET_AVX || (TARGET_AVX512VL && TARGET_AVX512F))))
            return -1;
          return 5047; /* fix_truncv4dfv4si2_mask */

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
          return 4672; /* *avx512fp16_fix_truncv4di2_load_mask */

        case 1:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 9699 "../../gcc/config/i386/sse.md"
(TARGET_AVX512DQ && 1) && 
#line 537 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
            return -1;
          return 5084; /* fix_truncv4dfv4di2_mask */

        case 2:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 9742 "../../gcc/config/i386/sse.md"
(TARGET_AVX512DQ) && 
#line 627 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
            return -1;
          return 5135; /* fix_truncv4sfv4di2_mask */

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
          return 4684; /* *avx512fp16_fix_truncv2di2_load_mask */

        case 1:
          if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 9699 "../../gcc/config/i386/sse.md"
(TARGET_AVX512DQ && 1) && 
#line 537 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
            return -1;
          return 5091; /* fix_truncv2dfv2di2_mask */

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
      return 4660; /* avx512fp16_fix_truncv4si2_mask */

    case 10:
      if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 7905 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL)))
        return -1;
      return 4664; /* avx512fp16_fix_truncv4di2_mask */

    case 11:
      if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 7955 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL)))
        return -1;
      return 4680; /* avx512fp16_fix_truncv2di2_mask */

    case 12:
      if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 9765 "../../gcc/config/i386/sse.md"
(TARGET_AVX512DQ && TARGET_AVX512VL)))
        return -1;
      return 5143; /* avx512dq_fix_truncv2sfv2di2_mask */

    default:
      return -1;
    }
}

 int
recog_204 (rtx x1 ATTRIBUTE_UNUSED,
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
  switch (pattern487 (x2))
    {
    case 0:
      if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 2661 "../../gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (PLUS, V32HFmode, operands)
   && (64 == 64 || TARGET_AVX512VL) && 1) && 
#line 390 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_EVEX512))))
        return -1;
      return 2679; /* *addv32hf3_mask */

    case 1:
      if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 2661 "../../gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (PLUS, V16HFmode, operands)
   && (32 == 64 || TARGET_AVX512VL) && 1) && 
#line 391 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL))))
        return -1;
      return 2687; /* *addv16hf3_mask */

    case 2:
      if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 2661 "../../gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (PLUS, V8HFmode, operands)
   && (16 == 64 || TARGET_AVX512VL) && 1) && 
#line 392 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL))))
        return -1;
      return 2695; /* *addv8hf3_mask */

    case 3:
      if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 2661 "../../gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (PLUS, V16SFmode, operands)
   && (64 == 64 || TARGET_AVX512VL) && 1) && 
#line 393 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512))))
        return -1;
      return 2703; /* *addv16sf3_mask */

    case 4:
      if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 2661 "../../gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (PLUS, V8SFmode, operands)
   && (32 == 64 || TARGET_AVX512VL) && 1) && 
#line 393 "../../gcc/config/i386/sse.md"
(TARGET_AVX))))
        return -1;
      return 2711; /* *addv8sf3_mask */

    case 5:
      if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 2661 "../../gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (PLUS, V4SFmode, operands)
   && (16 == 64 || TARGET_AVX512VL) && 1)))
        return -1;
      return 2719; /* *addv4sf3_mask */

    case 6:
      if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 2661 "../../gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (PLUS, V8DFmode, operands)
   && (64 == 64 || TARGET_AVX512VL) && 1) && 
#line 394 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512))))
        return -1;
      return 2727; /* *addv8df3_mask */

    case 7:
      if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 2661 "../../gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (PLUS, V4DFmode, operands)
   && (32 == 64 || TARGET_AVX512VL) && 1) && 
#line 394 "../../gcc/config/i386/sse.md"
(TARGET_AVX))))
        return -1;
      return 2735; /* *addv4df3_mask */

    case 8:
      if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 2661 "../../gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (PLUS, V2DFmode, operands)
   && (16 == 64 || TARGET_AVX512VL) && 1) && 
#line 395 "../../gcc/config/i386/sse.md"
(TARGET_SSE2))))
        return -1;
      return 2743; /* *addv2df3_mask */

    case 9:
      if (!(
#line 16285 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && ix86_binary_operator_ok (PLUS, V16SImode, operands)) && 
#line 501 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 7483; /* *addv16si3_mask */

    case 10:
      if (!(
#line 16285 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && ix86_binary_operator_ok (PLUS, V8SImode, operands)) && 
#line 501 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 7485; /* *addv8si3_mask */

    case 11:
      if (!(
#line 16285 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && ix86_binary_operator_ok (PLUS, V4SImode, operands)) && 
#line 501 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 7487; /* *addv4si3_mask */

    case 12:
      if (!(
#line 16285 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && ix86_binary_operator_ok (PLUS, V8DImode, operands)) && 
#line 502 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 7489; /* *addv8di3_mask */

    case 13:
      if (!(
#line 16285 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && ix86_binary_operator_ok (PLUS, V4DImode, operands)) && 
#line 502 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 7491; /* *addv4di3_mask */

    case 14:
      if (!(
#line 16285 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && ix86_binary_operator_ok (PLUS, V2DImode, operands)) && 
#line 502 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 7493; /* *addv2di3_mask */

    case 15:
      if (!(
#line 16299 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && ix86_binary_operator_ok (PLUS, V64QImode, operands)) && 
#line 318 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 7495; /* *addv64qi3_mask */

    case 16:
      if (!(
#line 16299 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && ix86_binary_operator_ok (PLUS, V16QImode, operands)) && 
#line 318 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 7497; /* *addv16qi3_mask */

    case 17:
      if (!(
#line 16299 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && ix86_binary_operator_ok (PLUS, V32QImode, operands)) && 
#line 318 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 7499; /* *addv32qi3_mask */

    case 18:
      if (!(
#line 16299 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && ix86_binary_operator_ok (PLUS, V32HImode, operands)) && 
#line 319 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 7501; /* *addv32hi3_mask */

    case 19:
      if (!(
#line 16299 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && ix86_binary_operator_ok (PLUS, V16HImode, operands)) && 
#line 319 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 7503; /* *addv16hi3_mask */

    case 20:
      if (!(
#line 16299 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && ix86_binary_operator_ok (PLUS, V8HImode, operands)) && 
#line 319 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 7505; /* *addv8hi3_mask */

    case 21:
      if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 32110 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256) && 
#line 565 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_512))))
        return -1;
      return 10603; /* avx10_2_addnepbf16_v32bf_mask */

    case 22:
      if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 32110 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256)))
        return -1;
      return 10611; /* avx10_2_addnepbf16_v16bf_mask */

    case 23:
      if (!(
#line 84 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 32110 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256)))
        return -1;
      return 10619; /* avx10_2_addnepbf16_v8bf_mask */

    case 24:
      if (!(
#line 2710 "../../gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 479 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16)))
        return -1;
      return 2755; /* avx512fp16_vmaddv8hf3 */

    case 25:
      if (!
#line 2710 "../../gcc/config/i386/sse.md"
(TARGET_SSE))
        return -1;
      return 2763; /* sse_vmaddv4sf3 */

    case 26:
      if (!(
#line 2710 "../../gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 480 "../../gcc/config/i386/sse.md"
(TARGET_SSE2)))
        return -1;
      return 2771; /* sse2_vmaddv2df3 */

    default:
      return -1;
    }
}

 int
recog_217 (rtx x1 ATTRIBUTE_UNUSED,
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
  x6 = XEXP (x5, 2);
  if (!register_operand (x6, E_QImode))
    return -1;
  x7 = XVECEXP (x2, 0, 1);
  if (!const_4_or_8_to_11_operand (x7, E_SImode))
    return -1;
  x8 = XEXP (x5, 0);
  x9 = XEXP (x8, 0);
  switch (GET_CODE (x9))
    {
    case REG:
    case SUBREG:
    case MEM:
      operands[1] = x9;
      x10 = XEXP (x8, 1);
      operands[2] = x10;
      x11 = XEXP (x8, 2);
      switch (GET_CODE (x11))
        {
        case REG:
        case SUBREG:
        case MEM:
          operands[3] = x11;
          switch (pattern1518 (x2))
            {
            case 0:
              if (pattern1666 (x2, 
E_V8HFmode) != 0)
                return -1;
              if (nonimmediate_operand (operands[1], E_V8HFmode)
                  && register_operand (operands[3], E_V8HFmode))
                {
                  x12 = XEXP (x5, 1);
                  if (rtx_equal_p (x12, operands[1]))
                    {
                      x13 = XEXP (x3, 1);
                      if (rtx_equal_p (x13, operands[1])
                          && (
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 6658 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 479 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16))))
                        return 4242; /* avx512f_vmfmadd_v8hf_mask_round */
                    }
                }
              if (!register_operand (operands[1], E_V8HFmode)
                  || !nonimmediate_operand (operands[3], E_V8HFmode))
                return -1;
              x12 = XEXP (x5, 1);
              if (!rtx_equal_p (x12, operands[3]))
                return -1;
              x13 = XEXP (x3, 1);
              if (!rtx_equal_p (x13, operands[3])
                  || !(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 6678 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 479 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16))))
                return -1;
              return 4248; /* avx512f_vmfmadd_v8hf_mask3_round */

            case 1:
              if (pattern1666 (x2, 
E_V4SFmode) != 0)
                return -1;
              if (nonimmediate_operand (operands[1], E_V4SFmode)
                  && register_operand (operands[3], E_V4SFmode))
                {
                  x12 = XEXP (x5, 1);
                  if (rtx_equal_p (x12, operands[1]))
                    {
                      x13 = XEXP (x3, 1);
                      if (rtx_equal_p (x13, operands[1])
                          && 
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F))
                        return 4244; /* avx512f_vmfmadd_v4sf_mask_round */
                    }
                }
              if (!register_operand (operands[1], E_V4SFmode)
                  || !nonimmediate_operand (operands[3], E_V4SFmode))
                return -1;
              x12 = XEXP (x5, 1);
              if (!rtx_equal_p (x12, operands[3]))
                return -1;
              x13 = XEXP (x3, 1);
              if (!rtx_equal_p (x13, operands[3])
                  || !
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F))
                return -1;
              return 4250; /* avx512f_vmfmadd_v4sf_mask3_round */

            case 2:
              if (pattern1666 (x2, 
E_V2DFmode) != 0)
                return -1;
              if (nonimmediate_operand (operands[1], E_V2DFmode)
                  && register_operand (operands[3], E_V2DFmode))
                {
                  x12 = XEXP (x5, 1);
                  if (rtx_equal_p (x12, operands[1]))
                    {
                      x13 = XEXP (x3, 1);
                      if (rtx_equal_p (x13, operands[1])
                          && (
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 6658 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 480 "../../gcc/config/i386/sse.md"
(TARGET_SSE2))))
                        return 4246; /* avx512f_vmfmadd_v2df_mask_round */
                    }
                }
              if (!register_operand (operands[1], E_V2DFmode)
                  || !nonimmediate_operand (operands[3], E_V2DFmode))
                return -1;
              x12 = XEXP (x5, 1);
              if (!rtx_equal_p (x12, operands[3]))
                return -1;
              x13 = XEXP (x3, 1);
              if (!rtx_equal_p (x13, operands[3])
                  || !(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 6678 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 480 "../../gcc/config/i386/sse.md"
(TARGET_SSE2))))
                return -1;
              return 4252; /* avx512f_vmfmadd_v2df_mask3_round */

            case 3:
              if (pattern1730 (x2, 
E_V8HFmode) != 0
                  || !(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 6710 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 479 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16))))
                return -1;
              return 4254; /* avx512f_vmfmadd_v8hf_maskz_1_round */

            case 4:
              if (pattern1730 (x2, 
E_V4SFmode) != 0
                  || !
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F))
                return -1;
              return 4256; /* avx512f_vmfmadd_v4sf_maskz_1_round */

            case 5:
              if (pattern1730 (x2, 
E_V2DFmode) != 0
                  || !(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 6710 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 480 "../../gcc/config/i386/sse.md"
(TARGET_SSE2))))
                return -1;
              return 4258; /* avx512f_vmfmadd_v2df_maskz_1_round */

            default:
              return -1;
            }

        case NEG:
          x14 = XEXP (x11, 0);
          operands[3] = x14;
          switch (pattern1518 (x2))
            {
            case 0:
              if (pattern1667 (x2, 
E_V8HFmode) != 0)
                return -1;
              if (nonimmediate_operand (operands[1], E_V8HFmode)
                  && register_operand (operands[3], E_V8HFmode))
                {
                  x12 = XEXP (x5, 1);
                  if (rtx_equal_p (x12, operands[1]))
                    {
                      x13 = XEXP (x3, 1);
                      if (rtx_equal_p (x13, operands[1])
                          && (
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 6731 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 479 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16))))
                        return 4260; /* *avx512f_vmfmsub_v8hf_mask_round */
                    }
                }
              if (!register_operand (operands[1], E_V8HFmode)
                  || !nonimmediate_operand (operands[3], E_V8HFmode))
                return -1;
              x12 = XEXP (x5, 1);
              if (!rtx_equal_p (x12, operands[3]))
                return -1;
              x13 = XEXP (x3, 1);
              if (!rtx_equal_p (x13, operands[3])
                  || !(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 6752 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 479 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16))))
                return -1;
              return 4266; /* avx512f_vmfmsub_v8hf_mask3_round */

            case 1:
              if (pattern1667 (x2, 
E_V4SFmode) != 0)
                return -1;
              if (nonimmediate_operand (operands[1], E_V4SFmode)
                  && register_operand (operands[3], E_V4SFmode))
                {
                  x12 = XEXP (x5, 1);
                  if (rtx_equal_p (x12, operands[1]))
                    {
                      x13 = XEXP (x3, 1);
                      if (rtx_equal_p (x13, operands[1])
                          && 
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F))
                        return 4262; /* *avx512f_vmfmsub_v4sf_mask_round */
                    }
                }
              if (!register_operand (operands[1], E_V4SFmode)
                  || !nonimmediate_operand (operands[3], E_V4SFmode))
                return -1;
              x12 = XEXP (x5, 1);
              if (!rtx_equal_p (x12, operands[3]))
                return -1;
              x13 = XEXP (x3, 1);
              if (!rtx_equal_p (x13, operands[3])
                  || !
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F))
                return -1;
              return 4268; /* avx512f_vmfmsub_v4sf_mask3_round */

            case 2:
              if (pattern1667 (x2, 
E_V2DFmode) != 0)
                return -1;
              if (nonimmediate_operand (operands[1], E_V2DFmode)
                  && register_operand (operands[3], E_V2DFmode))
                {
                  x12 = XEXP (x5, 1);
                  if (rtx_equal_p (x12, operands[1]))
                    {
                      x13 = XEXP (x3, 1);
                      if (rtx_equal_p (x13, operands[1])
                          && (
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 6731 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 480 "../../gcc/config/i386/sse.md"
(TARGET_SSE2))))
                        return 4264; /* *avx512f_vmfmsub_v2df_mask_round */
                    }
                }
              if (!register_operand (operands[1], E_V2DFmode)
                  || !nonimmediate_operand (operands[3], E_V2DFmode))
                return -1;
              x12 = XEXP (x5, 1);
              if (!rtx_equal_p (x12, operands[3]))
                return -1;
              x13 = XEXP (x3, 1);
              if (!rtx_equal_p (x13, operands[3])
                  || !(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 6752 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 480 "../../gcc/config/i386/sse.md"
(TARGET_SSE2))))
                return -1;
              return 4270; /* avx512f_vmfmsub_v2df_mask3_round */

            case 3:
              if (pattern1731 (x2, 
E_V8HFmode) != 0
                  || !(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 6771 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 479 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16))))
                return -1;
              return 4272; /* *avx512f_vmfmsub_v8hf_maskz_1_round */

            case 4:
              if (pattern1731 (x2, 
E_V4SFmode) != 0
                  || !
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F))
                return -1;
              return 4274; /* *avx512f_vmfmsub_v4sf_maskz_1_round */

            case 5:
              if (pattern1731 (x2, 
E_V2DFmode) != 0
                  || !(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 6771 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 480 "../../gcc/config/i386/sse.md"
(TARGET_SSE2))))
                return -1;
              return 4276; /* *avx512f_vmfmsub_v2df_maskz_1_round */

            default:
              return -1;
            }

        default:
          return -1;
        }

    case NEG:
      x11 = XEXP (x8, 2);
      switch (GET_CODE (x11))
        {
        case REG:
        case SUBREG:
        case MEM:
          operands[3] = x11;
          switch (pattern1400 (x2))
            {
            case 0:
              x10 = XEXP (x8, 1);
              operands[2] = x10;
              if (pattern1806 (x3, 
E_V8HFmode) == 0
                  && (
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 6792 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 479 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16))))
                return 4278; /* avx512f_vmfnmadd_v8hf_mask_round */
              operands[1] = x10;
              if (pattern1807 (x3, 
E_V8HFmode) != 0
                  || !(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 6813 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 479 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16))))
                return -1;
              return 4284; /* avx512f_vmfnmadd_v8hf_mask3_round */

            case 1:
              x10 = XEXP (x8, 1);
              operands[2] = x10;
              if (pattern1806 (x3, 
E_V4SFmode) == 0
                  && 
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F))
                return 4280; /* avx512f_vmfnmadd_v4sf_mask_round */
              operands[1] = x10;
              if (pattern1807 (x3, 
E_V4SFmode) != 0
                  || !
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F))
                return -1;
              return 4286; /* avx512f_vmfnmadd_v4sf_mask3_round */

            case 2:
              x10 = XEXP (x8, 1);
              operands[2] = x10;
              if (pattern1806 (x3, 
E_V2DFmode) == 0
                  && (
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 6792 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 480 "../../gcc/config/i386/sse.md"
(TARGET_SSE2))))
                return 4282; /* avx512f_vmfnmadd_v2df_mask_round */
              operands[1] = x10;
              if (pattern1807 (x3, 
E_V2DFmode) != 0
                  || !(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 6813 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 480 "../../gcc/config/i386/sse.md"
(TARGET_SSE2))))
                return -1;
              return 4288; /* avx512f_vmfnmadd_v2df_mask3_round */

            case 3:
              if (pattern1732 (x2, 
E_V8HFmode) != 0
                  || !(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 6846 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 479 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16))))
                return -1;
              return 4290; /* avx512f_vmfnmadd_v8hf_maskz_1_round */

            case 4:
              if (pattern1732 (x2, 
E_V4SFmode) != 0
                  || !
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F))
                return -1;
              return 4292; /* avx512f_vmfnmadd_v4sf_maskz_1_round */

            case 5:
              if (pattern1732 (x2, 
E_V2DFmode) != 0
                  || !(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 6846 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 480 "../../gcc/config/i386/sse.md"
(TARGET_SSE2))))
                return -1;
              return 4294; /* avx512f_vmfnmadd_v2df_maskz_1_round */

            default:
              return -1;
            }

        case NEG:
          x14 = XEXP (x11, 0);
          operands[3] = x14;
          switch (pattern1400 (x2))
            {
            case 0:
              x10 = XEXP (x8, 1);
              operands[2] = x10;
              if (pattern1808 (x3, 
E_V8HFmode) == 0
                  && (
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 6868 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 479 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16))))
                return 4296; /* *avx512f_vmfnmsub_v8hf_mask_round */
              operands[1] = x10;
              if (pattern1809 (x3, 
E_V8HFmode) != 0
                  || !(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 6890 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 479 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16))))
                return -1;
              return 4302; /* *avx512f_vmfnmsub_v8hf_mask3_round */

            case 1:
              x10 = XEXP (x8, 1);
              operands[2] = x10;
              if (pattern1808 (x3, 
E_V4SFmode) == 0
                  && 
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F))
                return 4298; /* *avx512f_vmfnmsub_v4sf_mask_round */
              operands[1] = x10;
              if (pattern1809 (x3, 
E_V4SFmode) != 0
                  || !
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F))
                return -1;
              return 4304; /* *avx512f_vmfnmsub_v4sf_mask3_round */

            case 2:
              x10 = XEXP (x8, 1);
              operands[2] = x10;
              if (pattern1808 (x3, 
E_V2DFmode) == 0
                  && (
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 6868 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 480 "../../gcc/config/i386/sse.md"
(TARGET_SSE2))))
                return 4300; /* *avx512f_vmfnmsub_v2df_mask_round */
              operands[1] = x10;
              if (pattern1809 (x3, 
E_V2DFmode) != 0
                  || !(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 6890 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 480 "../../gcc/config/i386/sse.md"
(TARGET_SSE2))))
                return -1;
              return 4306; /* *avx512f_vmfnmsub_v2df_mask3_round */

            case 3:
              if (pattern1733 (x2, 
E_V8HFmode) != 0
                  || !(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 6910 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 479 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16))))
                return -1;
              return 4308; /* *avx512f_vmfnmsub_v8hf_maskz_1_round */

            case 4:
              if (pattern1733 (x2, 
E_V4SFmode) != 0
                  || !
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F))
                return -1;
              return 4310; /* *avx512f_vmfnmsub_v4sf_maskz_1_round */

            case 5:
              if (pattern1733 (x2, 
E_V2DFmode) != 0
                  || !(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 6910 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 480 "../../gcc/config/i386/sse.md"
(TARGET_SSE2))))
                return -1;
              return 4312; /* *avx512f_vmfnmsub_v2df_maskz_1_round */

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
recog_229 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XVECEXP (x2, 0, 0);
  switch (XVECLEN (x3, 0))
    {
    case 2:
      x4 = XVECEXP (x3, 0, 0);
      operands[1] = x4;
      x5 = XVECEXP (x3, 0, 1);
      operands[2] = x5;
      x6 = XVECEXP (x2, 0, 1);
      operands[3] = x6;
      switch (XINT (x3, 1))
        {
        case 63:
          switch (pattern1133 (x2))
            {
            case 0:
              if (!(
#line 286 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 3394 "../../gcc/config/i386/sse.md"
(TARGET_SSE
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
              return 3062; /* ieee_maxv32hf3_round */

            case 1:
              if (!(
#line 286 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 3394 "../../gcc/config/i386/sse.md"
(TARGET_SSE
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
              return 3070; /* ieee_maxv16hf3_round */

            case 2:
              if (!(
#line 286 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 3394 "../../gcc/config/i386/sse.md"
(TARGET_SSE
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
              return 3082; /* ieee_maxv16sf3_round */

            case 3:
              if (!(
#line 286 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 3394 "../../gcc/config/i386/sse.md"
(TARGET_SSE
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
              return 3090; /* ieee_maxv8sf3_round */

            case 4:
              if (!(
#line 286 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 3394 "../../gcc/config/i386/sse.md"
(TARGET_SSE
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
              return 3102; /* ieee_maxv8df3_round */

            case 5:
              if (!(
#line 286 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 3394 "../../gcc/config/i386/sse.md"
(TARGET_SSE
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
              return 3110; /* ieee_maxv4df3_round */

            default:
              return -1;
            }

        case 62:
          switch (pattern1133 (x2))
            {
            case 0:
              if (!(
#line 286 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 3394 "../../gcc/config/i386/sse.md"
(TARGET_SSE
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
              return 3066; /* ieee_minv32hf3_round */

            case 1:
              if (!(
#line 286 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 3394 "../../gcc/config/i386/sse.md"
(TARGET_SSE
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
              return 3074; /* ieee_minv16hf3_round */

            case 2:
              if (!(
#line 286 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 3394 "../../gcc/config/i386/sse.md"
(TARGET_SSE
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
              return 3086; /* ieee_minv16sf3_round */

            case 3:
              if (!(
#line 286 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 3394 "../../gcc/config/i386/sse.md"
(TARGET_SSE
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
              return 3094; /* ieee_minv8sf3_round */

            case 4:
              if (!(
#line 286 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 3394 "../../gcc/config/i386/sse.md"
(TARGET_SSE
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
              return 3106; /* ieee_minv8df3_round */

            case 5:
              if (!(
#line 286 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 3394 "../../gcc/config/i386/sse.md"
(TARGET_SSE
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
              return 3114; /* ieee_minv4df3_round */

            default:
              return -1;
            }

        case 192:
          if (!const_0_to_255_operand (operands[2], E_SImode)
              || !const48_operand (operands[3], E_SImode))
            return -1;
          switch (GET_MODE (operands[0]))
            {
            case E_V32HFmode:
              if (pattern1226 (x2, 
E_V32HFmode) != 0
                  || !(
#line 286 "../../gcc/config/i386/subst.md"
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
(TARGET_AVX512FP16 && TARGET_EVEX512))))
                return -1;
              return 3190; /* *reducepv32hf_round */

            case E_V16HFmode:
              if (pattern1226 (x2, 
E_V16HFmode) != 0
                  || !(
#line 286 "../../gcc/config/i386/subst.md"
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
(TARGET_AVX512FP16 && TARGET_AVX512VL))))
                return -1;
              return 3194; /* *reducepv16hf_round */

            case E_V16SFmode:
              if (pattern1226 (x2, 
E_V16SFmode) != 0
                  || !(
#line 286 "../../gcc/config/i386/subst.md"
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
(TARGET_EVEX512))))
                return -1;
              return 3200; /* *reducepv16sf_round */

            case E_V8SFmode:
              if (pattern1226 (x2, 
E_V8SFmode) != 0
                  || !(
#line 286 "../../gcc/config/i386/subst.md"
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
(TARGET_AVX512VL))))
                return -1;
              return 3204; /* *reducepv8sf_round */

            case E_V8DFmode:
              if (pattern1226 (x2, 
E_V8DFmode) != 0
                  || !(
#line 286 "../../gcc/config/i386/subst.md"
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
(TARGET_EVEX512))))
                return -1;
              return 3210; /* *reducepv8df_round */

            case E_V4DFmode:
              if (pattern1226 (x2, 
E_V4DFmode) != 0
                  || !(
#line 286 "../../gcc/config/i386/subst.md"
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
(TARGET_AVX512VL))))
                return -1;
              return 3214; /* *reducepv4df_round */

            default:
              return -1;
            }

        case 221:
          switch (pattern1134 (x2))
            {
            case 0:
              if (!(
#line 234 "../../gcc/config/i386/subst.md"
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
(TARGET_EVEX512))))
                return -1;
              return 4377; /* avx512bw_fmulc_v32hf_round */

            case 1:
              if (!(
#line 234 "../../gcc/config/i386/subst.md"
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
(TARGET_AVX512VL))))
                return -1;
              return 4385; /* avx512vl_fmulc_v16hf_round */

            default:
              return -1;
            }

        case 222:
          switch (pattern1134 (x2))
            {
            case 0:
              if (!(
#line 234 "../../gcc/config/i386/subst.md"
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
(TARGET_EVEX512))))
                return -1;
              return 4381; /* avx512bw_fcmulc_v32hf_round */

            case 1:
              if (!(
#line 234 "../../gcc/config/i386/subst.md"
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
(TARGET_AVX512VL))))
                return -1;
              return 4389; /* avx512vl_fcmulc_v16hf_round */

            default:
              return -1;
            }

        case 58:
          if (!const_4_or_8_to_11_operand (operands[3], E_SImode))
            return -1;
          switch (GET_MODE (operands[0]))
            {
            case E_V32HFmode:
              if (pattern1311 (x2, 
E_V32HFmode) != 0
                  || !(
#line 234 "../../gcc/config/i386/subst.md"
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
(TARGET_AVX512FP16 && TARGET_EVEX512))))
                return -1;
              return 5427; /* avx512bw_scalefv32hf_round */

            case E_V16HFmode:
              if (pattern1311 (x2, 
E_V16HFmode) != 0
                  || !(
#line 234 "../../gcc/config/i386/subst.md"
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
(TARGET_AVX512FP16 && TARGET_AVX512VL))))
                return -1;
              return 5431; /* avx512vl_scalefv16hf_round */

            case E_V16SFmode:
              if (pattern1311 (x2, 
E_V16SFmode) != 0
                  || !(
#line 234 "../../gcc/config/i386/subst.md"
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
(TARGET_EVEX512))))
                return -1;
              return 5437; /* avx512f_scalefv16sf_round */

            case E_V8SFmode:
              if (pattern1311 (x2, 
E_V8SFmode) != 0
                  || !(
#line 234 "../../gcc/config/i386/subst.md"
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
(TARGET_AVX512VL))))
                return -1;
              return 5441; /* avx512vl_scalefv8sf_round */

            case E_V8DFmode:
              if (pattern1311 (x2, 
E_V8DFmode) != 0
                  || !(
#line 234 "../../gcc/config/i386/subst.md"
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
(TARGET_EVEX512))))
                return -1;
              return 5447; /* avx512f_scalefv8df_round */

            case E_V4DFmode:
              if (pattern1311 (x2, 
E_V4DFmode) != 0
                  || !(
#line 234 "../../gcc/config/i386/subst.md"
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
(TARGET_AVX512VL))))
                return -1;
              return 5451; /* avx512vl_scalefv4df_round */

            default:
              return -1;
            }

        case 94:
          if (!const_0_to_255_operand (operands[2], E_SImode))
            return -1;
          switch (pattern1219 (x2))
            {
            case 0:
              if (!(
#line 286 "../../gcc/config/i386/subst.md"
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
(TARGET_AVX512FP16 && TARGET_EVEX512))))
                return -1;
              return 7139; /* avx512bw_rndscalev32hf_round */

            case 1:
              if (!(
#line 286 "../../gcc/config/i386/subst.md"
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
(TARGET_AVX512FP16 && TARGET_AVX512VL))))
                return -1;
              return 7143; /* avx512vl_rndscalev16hf_round */

            case 2:
              if (!(
#line 286 "../../gcc/config/i386/subst.md"
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
(TARGET_EVEX512))))
                return -1;
              return 7149; /* avx512f_rndscalev16sf_round */

            case 3:
              if (!(
#line 286 "../../gcc/config/i386/subst.md"
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
(TARGET_AVX512VL))))
                return -1;
              return 7153; /* avx512vl_rndscalev8sf_round */

            case 4:
              if (!(
#line 286 "../../gcc/config/i386/subst.md"
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
(TARGET_EVEX512))))
                return -1;
              return 7159; /* avx512f_rndscalev8df_round */

            case 5:
              if (!(
#line 286 "../../gcc/config/i386/subst.md"
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
(TARGET_AVX512VL))))
                return -1;
              return 7163; /* avx512vl_rndscalev4df_round */

            default:
              return -1;
            }

        case 150:
          if (GET_MODE (x3) != E_V16HImode
              || !register_operand (operands[0], E_V16HImode)
              || GET_MODE (x2) != E_V16HImode
              || !register_operand (operands[1], E_V16SFmode)
              || !const_0_to_255_operand (operands[2], E_SImode)
              || !const48_operand (operands[3], E_SImode)
              || !(
#line 286 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 29218 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 9663; /* *avx512f_vcvtps2ph512_round */

        case 166:
          if (!const_0_to_15_operand (operands[2], E_SImode))
            return -1;
          switch (pattern1219 (x2))
            {
            case 0:
              if (!(
#line 286 "../../gcc/config/i386/subst.md"
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
(TARGET_AVX512FP16 && TARGET_EVEX512))))
                return -1;
              return 10009; /* avx512bw_getmantv32hf_round */

            case 1:
              if (!(
#line 286 "../../gcc/config/i386/subst.md"
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
(TARGET_AVX512FP16 && TARGET_AVX512VL))))
                return -1;
              return 10013; /* avx512vl_getmantv16hf_round */

            case 2:
              if (!(
#line 286 "../../gcc/config/i386/subst.md"
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
(TARGET_EVEX512))))
                return -1;
              return 10019; /* avx512f_getmantv16sf_round */

            case 3:
              if (!(
#line 286 "../../gcc/config/i386/subst.md"
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
(TARGET_AVX512VL))))
                return -1;
              return 10023; /* avx512vl_getmantv8sf_round */

            case 4:
              if (!(
#line 286 "../../gcc/config/i386/subst.md"
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
(TARGET_EVEX512))))
                return -1;
              return 10029; /* avx512f_getmantv8df_round */

            case 5:
              if (!(
#line 286 "../../gcc/config/i386/subst.md"
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
(TARGET_AVX512VL))))
                return -1;
              return 10033; /* avx512vl_getmantv4df_round */

            default:
              return -1;
            }

        default:
          return -1;
        }

    case 3:
      x4 = XVECEXP (x3, 0, 0);
      operands[1] = x4;
      x5 = XVECEXP (x3, 0, 1);
      operands[2] = x5;
      x6 = XVECEXP (x2, 0, 1);
      operands[4] = x6;
      switch (XINT (x3, 1))
        {
        case 133:
          if (!const_4_or_8_to_11_operand (operands[4], E_SImode))
            return -1;
          x7 = XVECEXP (x3, 0, 2);
          switch (GET_CODE (x7))
            {
            case REG:
            case SUBREG:
              operands[3] = x7;
              switch (GET_MODE (operands[0]))
                {
                case E_V32HFmode:
                  if (pattern1135 (x2, 
E_V32HFmode) != 0
                      || !(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 6408 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && 1 && ((V32HFmode == V16SFmode
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
                  return 4089; /* *fma_fmaddsub_v32hf_round */

                case E_V16HFmode:
                  if (pattern1135 (x2, 
E_V16HFmode) != 0
                      || !(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 6408 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && 1 && ((V16HFmode == V16SFmode
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
                  return 4093; /* *fma_fmaddsub_v16hf_round */

                case E_V16SFmode:
                  if (pattern1135 (x2, 
E_V16SFmode) != 0
                      || !(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 6408 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && 1 && ((V16SFmode == V16SFmode
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
                  return 4099; /* *fma_fmaddsub_v16sf_round */

                case E_V8SFmode:
                  if (pattern1135 (x2, 
E_V8SFmode) != 0
                      || !(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 6408 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && 1 && ((V8SFmode == V16SFmode
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
                  return 4103; /* *fma_fmaddsub_v8sf_round */

                case E_V8DFmode:
                  if (pattern1135 (x2, 
E_V8DFmode) != 0
                      || !(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 6408 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && 1 && ((V8DFmode == V16SFmode
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
                  return 4109; /* *fma_fmaddsub_v8df_round */

                case E_V4DFmode:
                  if (pattern1135 (x2, 
E_V4DFmode) != 0
                      || !(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 6408 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && 1 && ((V4DFmode == V16SFmode
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
                  return 4113; /* *fma_fmaddsub_v4df_round */

                default:
                  return -1;
                }

            case NEG:
              x8 = XEXP (x7, 0);
              operands[3] = x8;
              switch (GET_MODE (operands[0]))
                {
                case E_V32HFmode:
                  if (pattern1484 (x2, 
E_V32HFmode) != 0
                      || !(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 6478 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && 1 && ((V32HFmode == V16SFmode
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
                  return 4153; /* *fma_fmsubadd_v32hf_round */

                case E_V16HFmode:
                  if (pattern1484 (x2, 
E_V16HFmode) != 0
                      || !(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 6478 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && 1 && ((V16HFmode == V16SFmode
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
                  return 4157; /* *fma_fmsubadd_v16hf_round */

                case E_V16SFmode:
                  if (pattern1484 (x2, 
E_V16SFmode) != 0
                      || !(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 6478 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && 1 && ((V16SFmode == V16SFmode
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
                  return 4163; /* *fma_fmsubadd_v16sf_round */

                case E_V8SFmode:
                  if (pattern1484 (x2, 
E_V8SFmode) != 0
                      || !(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 6478 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && 1 && ((V8SFmode == V16SFmode
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
                  return 4167; /* *fma_fmsubadd_v8sf_round */

                case E_V8DFmode:
                  if (pattern1484 (x2, 
E_V8DFmode) != 0
                      || !(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 6478 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && 1 && ((V8DFmode == V16SFmode
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
                  return 4173; /* *fma_fmsubadd_v8df_round */

                case E_V4DFmode:
                  if (pattern1484 (x2, 
E_V4DFmode) != 0
                      || !(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 6478 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && 1 && ((V4DFmode == V16SFmode
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
                  return 4177; /* *fma_fmsubadd_v4df_round */

                default:
                  return -1;
                }

            default:
              return -1;
            }

        case 217:
          switch (pattern1136 (x2))
            {
            case 0:
              if (!(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 7147 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && 1 && ((V32HFmode == V16SFmode
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
              return 4322; /* fma_fmaddc_v32hf_round */

            case 1:
              if (!(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 7147 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && 1 && ((V16HFmode == V16SFmode
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
              return 4330; /* fma_fmaddc_v16hf_round */

            default:
              return -1;
            }

        case 219:
          switch (pattern1136 (x2))
            {
            case 0:
              if (!(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 7147 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && 1 && ((V32HFmode == V16SFmode
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
              return 4326; /* fma_fcmaddc_v32hf_round */

            case 1:
              if (!(
#line 234 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 7147 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && 1 && ((V16HFmode == V16SFmode
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
              return 4334; /* fma_fcmaddc_v16hf_round */

            default:
              return -1;
            }

        case 194:
          x7 = XVECEXP (x3, 0, 2);
          operands[3] = x7;
          if (!const_0_to_15_operand (operands[3], E_SImode)
              || !const48_operand (operands[4], E_SImode))
            return -1;
          switch (GET_MODE (operands[0]))
            {
            case E_V16SFmode:
              if (pattern1132 (x2, 
E_V16SFmode) != 0
                  || !(
#line 286 "../../gcc/config/i386/subst.md"
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
(TARGET_EVEX512))))
                return -1;
              return 9957; /* avx512dq_rangepv16sf_round */

            case E_V8SFmode:
              if (pattern1132 (x2, 
E_V8SFmode) != 0
                  || !(
#line 286 "../../gcc/config/i386/subst.md"
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
(TARGET_AVX512VL))))
                return -1;
              return 9961; /* avx512dq_rangepv8sf_round */

            case E_V8DFmode:
              if (pattern1132 (x2, 
E_V8DFmode) != 0
                  || !(
#line 286 "../../gcc/config/i386/subst.md"
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
(TARGET_EVEX512))))
                return -1;
              return 9967; /* avx512dq_rangepv8df_round */

            case E_V4DFmode:
              if (pattern1132 (x2, 
E_V4DFmode) != 0
                  || !(
#line 286 "../../gcc/config/i386/subst.md"
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
(TARGET_AVX512VL))))
                return -1;
              return 9971; /* avx512dq_rangepv4df_round */

            default:
              return -1;
            }

        case 279:
          x7 = XVECEXP (x3, 0, 2);
          operands[3] = x7;
          if (!const_0_to_255_operand (operands[3], E_SImode)
              || !const48_operand (operands[4], E_SImode))
            return -1;
          switch (GET_MODE (operands[0]))
            {
            case E_V32HFmode:
              if (pattern1132 (x2, 
E_V32HFmode) != 0
                  || !(
#line 286 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 32649 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256) && 
#line 532 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_512))))
                return -1;
              return 10936; /* avx10_2_minmaxpv32hf_round */

            case E_V16HFmode:
              if (pattern1132 (x2, 
E_V16HFmode) != 0
                  || !(
#line 286 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 32649 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256)))
                return -1;
              return 10940; /* avx10_2_minmaxpv16hf_round */

            case E_V8HFmode:
              if (pattern1132 (x2, 
E_V8HFmode) != 0
                  || !(
#line 286 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 32649 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256)))
                return -1;
              return 10944; /* avx10_2_minmaxpv8hf_round */

            case E_V16SFmode:
              if (pattern1132 (x2, 
E_V16SFmode) != 0
                  || !(
#line 286 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 32649 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256) && 
#line 533 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_512))))
                return -1;
              return 10948; /* avx10_2_minmaxpv16sf_round */

            case E_V8SFmode:
              if (pattern1132 (x2, 
E_V8SFmode) != 0
                  || !(
#line 286 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 32649 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256)))
                return -1;
              return 10952; /* avx10_2_minmaxpv8sf_round */

            case E_V4SFmode:
              if (pattern1132 (x2, 
E_V4SFmode) != 0
                  || !(
#line 286 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 32649 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256)))
                return -1;
              return 10956; /* avx10_2_minmaxpv4sf_round */

            case E_V8DFmode:
              if (pattern1132 (x2, 
E_V8DFmode) != 0
                  || !(
#line 286 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 32649 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256) && 
#line 534 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_512))))
                return -1;
              return 10960; /* avx10_2_minmaxpv8df_round */

            case E_V4DFmode:
              if (pattern1132 (x2, 
E_V4DFmode) != 0
                  || !(
#line 286 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 32649 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256)))
                return -1;
              return 10964; /* avx10_2_minmaxpv4df_round */

            case E_V2DFmode:
              if (pattern1132 (x2, 
E_V2DFmode) != 0
                  || !(
#line 286 "../../gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 32649 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256)))
                return -1;
              return 10968; /* avx10_2_minmaxpv2df_round */

            default:
              return -1;
            }

        default:
          return -1;
        }

    case 1:
      return recog_227 (x1, insn, pnum_clobbers);

    case 4:
      if (XINT (x3, 1) != 163)
        return -1;
      x4 = XVECEXP (x3, 0, 0);
      operands[1] = x4;
      x5 = XVECEXP (x3, 0, 1);
      operands[2] = x5;
      x7 = XVECEXP (x3, 0, 2);
      operands[3] = x7;
      x9 = XVECEXP (x3, 0, 3);
      operands[4] = x9;
      if (!const_0_to_255_operand (operands[4], E_SImode))
        return -1;
      x6 = XVECEXP (x2, 0, 1);
      operands[5] = x6;
      if (!const48_operand (operands[5], E_SImode))
        return -1;
      switch (GET_MODE (operands[0]))
        {
        case E_V16SFmode:
          if (pattern1520 (x2, 
E_V16SImode, 
E_V16SFmode) != 0
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
          return 7097; /* avx512f_fixupimmv16sf_round */

        case E_V8SFmode:
          if (pattern1520 (x2, 
E_V8SImode, 
E_V8SFmode) != 0
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
          return 7101; /* avx512vl_fixupimmv8sf_round */

        case E_V8DFmode:
          if (pattern1520 (x2, 
E_V8DImode, 
E_V8DFmode) != 0
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
          return 7107; /* avx512f_fixupimmv8df_round */

        case E_V4DFmode:
          if (pattern1520 (x2, 
E_V4DImode, 
E_V4DFmode) != 0
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
          return 7111; /* avx512vl_fixupimmv4df_round */

        default:
          return -1;
        }

    default:
      return -1;
    }
}

 int
recog_260 (rtx x1 ATTRIBUTE_UNUSED,
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
  if (!const_int_operand (operands[3], E_SImode))
    return -1;
  switch (GET_MODE (operands[0]))
    {
    case E_V16QImode:
      if (pattern60 (x3, 
E_V16QImode) != 0
          || !
#line 27068 "../../gcc/config/i386/sse.md"
(TARGET_XOP))
        return -1;
      return 9070; /* xop_pcom_tfv16qi3 */

    case E_V8HImode:
      if (pattern60 (x3, 
E_V8HImode) != 0
          || !
#line 27068 "../../gcc/config/i386/sse.md"
(TARGET_XOP))
        return -1;
      return 9071; /* xop_pcom_tfv8hi3 */

    case E_V4SImode:
      if (pattern60 (x3, 
E_V4SImode) != 0
          || !
#line 27068 "../../gcc/config/i386/sse.md"
(TARGET_XOP))
        return -1;
      return 9072; /* xop_pcom_tfv4si3 */

    case E_V2DImode:
      if (pattern60 (x3, 
E_V2DImode) != 0
          || !
#line 27068 "../../gcc/config/i386/sse.md"
(TARGET_XOP))
        return -1;
      return 9073; /* xop_pcom_tfv2di3 */

    default:
      return -1;
    }
}

 int
recog_264 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  operands[0] = x2;
  x3 = XEXP (x1, 1);
  switch (XINT (x3, 1))
    {
    case 164:
      x4 = XVECEXP (x3, 0, 0);
      operands[1] = x4;
      x5 = XVECEXP (x3, 0, 1);
      operands[2] = x5;
      x6 = XVECEXP (x3, 0, 2);
      operands[3] = x6;
      x7 = XVECEXP (x3, 0, 3);
      operands[4] = x7;
      if (!const_0_to_255_operand (operands[4], E_SImode))
        return -1;
      switch (GET_MODE (operands[0]))
        {
        case E_V16SImode:
          if (pattern1137 (x3, 
E_V16SImode) != 0)
            return -1;
          if ((
#line 13651 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 501 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return 5456; /* avx512f_vternlogv16si */
          if (!(
#line 13665 "../../gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
/* Disallow embeded broadcast for vector HFmode since
   it's not real AVX512FP16 instruction.  */
  && (GET_MODE_SIZE (GET_MODE_INNER (V16SImode)) >= 4
     || GET_CODE (operands[3]) != VEC_DUPLICATE)) && 
#line 334 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 5474; /* *avx512f_vternlogv16si_all */

        case E_V8SImode:
          if (pattern1137 (x3, 
E_V8SImode) != 0)
            return -1;
          if ((
#line 13651 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 501 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return 5458; /* avx512vl_vternlogv8si */
          if (!(
#line 13665 "../../gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
/* Disallow embeded broadcast for vector HFmode since
   it's not real AVX512FP16 instruction.  */
  && (GET_MODE_SIZE (GET_MODE_INNER (V8SImode)) >= 4
     || GET_CODE (operands[3]) != VEC_DUPLICATE)) && 
#line 334 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 5475; /* *avx512vl_vternlogv8si_all */

        case E_V4SImode:
          if (pattern1137 (x3, 
E_V4SImode) != 0)
            return -1;
          if ((
#line 13651 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 501 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return 5460; /* avx512vl_vternlogv4si */
          if (!
#line 13665 "../../gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
/* Disallow embeded broadcast for vector HFmode since
   it's not real AVX512FP16 instruction.  */
  && (GET_MODE_SIZE (GET_MODE_INNER (V4SImode)) >= 4
     || GET_CODE (operands[3]) != VEC_DUPLICATE)))
            return -1;
          return 5476; /* *avx512vl_vternlogv4si_all */

        case E_V8DImode:
          if (pattern1137 (x3, 
E_V8DImode) != 0)
            return -1;
          if ((
#line 13651 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 502 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return 5462; /* avx512f_vternlogv8di */
          if (!(
#line 13665 "../../gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
/* Disallow embeded broadcast for vector HFmode since
   it's not real AVX512FP16 instruction.  */
  && (GET_MODE_SIZE (GET_MODE_INNER (V8DImode)) >= 4
     || GET_CODE (operands[3]) != VEC_DUPLICATE)) && 
#line 335 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 5477; /* *avx512f_vternlogv8di_all */

        case E_V4DImode:
          if (pattern1137 (x3, 
E_V4DImode) != 0)
            return -1;
          if ((
#line 13651 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 502 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return 5464; /* avx512vl_vternlogv4di */
          if (!(
#line 13665 "../../gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
/* Disallow embeded broadcast for vector HFmode since
   it's not real AVX512FP16 instruction.  */
  && (GET_MODE_SIZE (GET_MODE_INNER (V4DImode)) >= 4
     || GET_CODE (operands[3]) != VEC_DUPLICATE)) && 
#line 335 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 5478; /* *avx512vl_vternlogv4di_all */

        case E_V2DImode:
          if (pattern1137 (x3, 
E_V2DImode) != 0)
            return -1;
          if ((
#line 13651 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 502 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return 5466; /* avx512vl_vternlogv2di */
          if (!
#line 13665 "../../gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
/* Disallow embeded broadcast for vector HFmode since
   it's not real AVX512FP16 instruction.  */
  && (GET_MODE_SIZE (GET_MODE_INNER (V2DImode)) >= 4
     || GET_CODE (operands[3]) != VEC_DUPLICATE)))
            return -1;
          return 5479; /* *avx512vl_vternlogv2di_all */

        case E_V64QImode:
          if (pattern1137 (x3, 
E_V64QImode) != 0
              || !(
#line 13665 "../../gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
/* Disallow embeded broadcast for vector HFmode since
   it's not real AVX512FP16 instruction.  */
  && (GET_MODE_SIZE (GET_MODE_INNER (V64QImode)) >= 4
     || GET_CODE (operands[3]) != VEC_DUPLICATE)) && 
#line 332 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 5468; /* *avx512bw_vternlogv64qi_all */

        case E_V32QImode:
          if (pattern1137 (x3, 
E_V32QImode) != 0
              || !(
#line 13665 "../../gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
/* Disallow embeded broadcast for vector HFmode since
   it's not real AVX512FP16 instruction.  */
  && (GET_MODE_SIZE (GET_MODE_INNER (V32QImode)) >= 4
     || GET_CODE (operands[3]) != VEC_DUPLICATE)) && 
#line 332 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 5469; /* *avx512vl_vternlogv32qi_all */

        case E_V16QImode:
          if (pattern1137 (x3, 
E_V16QImode) != 0
              || !
#line 13665 "../../gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
/* Disallow embeded broadcast for vector HFmode since
   it's not real AVX512FP16 instruction.  */
  && (GET_MODE_SIZE (GET_MODE_INNER (V16QImode)) >= 4
     || GET_CODE (operands[3]) != VEC_DUPLICATE)))
            return -1;
          return 5470; /* *avx512vl_vternlogv16qi_all */

        case E_V32HImode:
          if (pattern1137 (x3, 
E_V32HImode) != 0
              || !(
#line 13665 "../../gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
/* Disallow embeded broadcast for vector HFmode since
   it's not real AVX512FP16 instruction.  */
  && (GET_MODE_SIZE (GET_MODE_INNER (V32HImode)) >= 4
     || GET_CODE (operands[3]) != VEC_DUPLICATE)) && 
#line 333 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 5471; /* *avx512bw_vternlogv32hi_all */

        case E_V16HImode:
          if (pattern1137 (x3, 
E_V16HImode) != 0
              || !(
#line 13665 "../../gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
/* Disallow embeded broadcast for vector HFmode since
   it's not real AVX512FP16 instruction.  */
  && (GET_MODE_SIZE (GET_MODE_INNER (V16HImode)) >= 4
     || GET_CODE (operands[3]) != VEC_DUPLICATE)) && 
#line 333 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 5472; /* *avx512vl_vternlogv16hi_all */

        case E_V8HImode:
          if (pattern1137 (x3, 
E_V8HImode) != 0
              || !
#line 13665 "../../gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
/* Disallow embeded broadcast for vector HFmode since
   it's not real AVX512FP16 instruction.  */
  && (GET_MODE_SIZE (GET_MODE_INNER (V8HImode)) >= 4
     || GET_CODE (operands[3]) != VEC_DUPLICATE)))
            return -1;
          return 5473; /* *avx512vl_vternlogv8hi_all */

        case E_V32HFmode:
          if (pattern1137 (x3, 
E_V32HFmode) != 0
              || !(
#line 13665 "../../gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
/* Disallow embeded broadcast for vector HFmode since
   it's not real AVX512FP16 instruction.  */
  && (GET_MODE_SIZE (GET_MODE_INNER (V32HFmode)) >= 4
     || GET_CODE (operands[3]) != VEC_DUPLICATE)) && 
#line 336 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 5480; /* *avx512bw_vternlogv32hf_all */

        case E_V16HFmode:
          if (pattern1137 (x3, 
E_V16HFmode) != 0
              || !(
#line 13665 "../../gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
/* Disallow embeded broadcast for vector HFmode since
   it's not real AVX512FP16 instruction.  */
  && (GET_MODE_SIZE (GET_MODE_INNER (V16HFmode)) >= 4
     || GET_CODE (operands[3]) != VEC_DUPLICATE)) && 
#line 336 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 5481; /* *avx512vl_vternlogv16hf_all */

        case E_V8HFmode:
          if (pattern1137 (x3, 
E_V8HFmode) != 0
              || !
#line 13665 "../../gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
/* Disallow embeded broadcast for vector HFmode since
   it's not real AVX512FP16 instruction.  */
  && (GET_MODE_SIZE (GET_MODE_INNER (V8HFmode)) >= 4
     || GET_CODE (operands[3]) != VEC_DUPLICATE)))
            return -1;
          return 5482; /* *avx512fp16_vternlogv8hf_all */

        case E_V32BFmode:
          if (pattern1137 (x3, 
E_V32BFmode) != 0
              || !(
#line 13665 "../../gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
/* Disallow embeded broadcast for vector HFmode since
   it's not real AVX512FP16 instruction.  */
  && (GET_MODE_SIZE (GET_MODE_INNER (V32BFmode)) >= 4
     || GET_CODE (operands[3]) != VEC_DUPLICATE)) && 
#line 337 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 5483; /* *avx512bw_vternlogv32bf_all */

        case E_V16BFmode:
          if (pattern1137 (x3, 
E_V16BFmode) != 0
              || !(
#line 13665 "../../gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
/* Disallow embeded broadcast for vector HFmode since
   it's not real AVX512FP16 instruction.  */
  && (GET_MODE_SIZE (GET_MODE_INNER (V16BFmode)) >= 4
     || GET_CODE (operands[3]) != VEC_DUPLICATE)) && 
#line 337 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 5484; /* *avx512vl_vternlogv16bf_all */

        case E_V8BFmode:
          if (pattern1137 (x3, 
E_V8BFmode) != 0
              || !
#line 13665 "../../gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
/* Disallow embeded broadcast for vector HFmode since
   it's not real AVX512FP16 instruction.  */
  && (GET_MODE_SIZE (GET_MODE_INNER (V8BFmode)) >= 4
     || GET_CODE (operands[3]) != VEC_DUPLICATE)))
            return -1;
          return 5485; /* *avx512vl_vternlogv8bf_all */

        case E_V16SFmode:
          if (pattern1137 (x3, 
E_V16SFmode) != 0
              || !(
#line 13665 "../../gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
/* Disallow embeded broadcast for vector HFmode since
   it's not real AVX512FP16 instruction.  */
  && (GET_MODE_SIZE (GET_MODE_INNER (V16SFmode)) >= 4
     || GET_CODE (operands[3]) != VEC_DUPLICATE)) && 
#line 338 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 5486; /* *avx512f_vternlogv16sf_all */

        case E_V8SFmode:
          if (pattern1137 (x3, 
E_V8SFmode) != 0
              || !(
#line 13665 "../../gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
/* Disallow embeded broadcast for vector HFmode since
   it's not real AVX512FP16 instruction.  */
  && (GET_MODE_SIZE (GET_MODE_INNER (V8SFmode)) >= 4
     || GET_CODE (operands[3]) != VEC_DUPLICATE)) && 
#line 338 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 5487; /* *avx512vl_vternlogv8sf_all */

        case E_V4SFmode:
          if (pattern1137 (x3, 
E_V4SFmode) != 0
              || !
#line 13665 "../../gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
/* Disallow embeded broadcast for vector HFmode since
   it's not real AVX512FP16 instruction.  */
  && (GET_MODE_SIZE (GET_MODE_INNER (V4SFmode)) >= 4
     || GET_CODE (operands[3]) != VEC_DUPLICATE)))
            return -1;
          return 5488; /* *avx512vl_vternlogv4sf_all */

        case E_V8DFmode:
          if (pattern1137 (x3, 
E_V8DFmode) != 0
              || !(
#line 13665 "../../gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
/* Disallow embeded broadcast for vector HFmode since
   it's not real AVX512FP16 instruction.  */
  && (GET_MODE_SIZE (GET_MODE_INNER (V8DFmode)) >= 4
     || GET_CODE (operands[3]) != VEC_DUPLICATE)) && 
#line 339 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 5489; /* *avx512f_vternlogv8df_all */

        case E_V4DFmode:
          if (pattern1137 (x3, 
E_V4DFmode) != 0
              || !(
#line 13665 "../../gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
/* Disallow embeded broadcast for vector HFmode since
   it's not real AVX512FP16 instruction.  */
  && (GET_MODE_SIZE (GET_MODE_INNER (V4DFmode)) >= 4
     || GET_CODE (operands[3]) != VEC_DUPLICATE)) && 
#line 339 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 5490; /* *avx512vl_vternlogv4df_all */

        case E_V2DFmode:
          if (pattern1137 (x3, 
E_V2DFmode) != 0
              || !(
#line 13665 "../../gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
/* Disallow embeded broadcast for vector HFmode since
   it's not real AVX512FP16 instruction.  */
  && (GET_MODE_SIZE (GET_MODE_INNER (V2DFmode)) >= 4
     || GET_CODE (operands[3]) != VEC_DUPLICATE)) && 
#line 339 "../../gcc/config/i386/sse.md"
(TARGET_SSE2)))
            return -1;
          return 5491; /* *avx512vl_vternlogv2df_all */

        default:
          return -1;
        }

    case 163:
      x4 = XVECEXP (x3, 0, 0);
      operands[1] = x4;
      x5 = XVECEXP (x3, 0, 1);
      operands[2] = x5;
      x6 = XVECEXP (x3, 0, 2);
      operands[3] = x6;
      x7 = XVECEXP (x3, 0, 3);
      operands[4] = x7;
      if (!const_0_to_255_operand (operands[4], E_SImode))
        return -1;
      switch (GET_MODE (operands[0]))
        {
        case E_V16SFmode:
          if (pattern1138 (x3, 
E_V16SImode, 
E_V16SFmode) != 0
              || !(
#line 14146 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 521 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return -1;
          return 7096; /* avx512f_fixupimmv16sf */

        case E_V8SFmode:
          if (pattern1138 (x3, 
E_V8SImode, 
E_V8SFmode) != 0
              || !(
#line 14146 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 521 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 7100; /* avx512vl_fixupimmv8sf */

        case E_V4SFmode:
          if (pattern1138 (x3, 
E_V4SImode, 
E_V4SFmode) != 0
              || !(
#line 14146 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 521 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 7104; /* avx512vl_fixupimmv4sf */

        case E_V8DFmode:
          if (pattern1138 (x3, 
E_V8DImode, 
E_V8DFmode) != 0
              || !(
#line 14146 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 522 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return -1;
          return 7106; /* avx512f_fixupimmv8df */

        case E_V4DFmode:
          if (pattern1138 (x3, 
E_V4DImode, 
E_V4DFmode) != 0
              || !(
#line 14146 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 522 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 7110; /* avx512vl_fixupimmv4df */

        case E_V2DFmode:
          if (pattern1138 (x3, 
E_V2DImode, 
E_V2DFmode) != 0
              || !(
#line 14146 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 522 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 7114; /* avx512vl_fixupimmv2df */

        default:
          return -1;
        }

    case 124:
      if (GET_MODE (x3) != E_V2DImode
          || !register_operand (operands[0], E_V2DImode))
        return -1;
      x4 = XVECEXP (x3, 0, 0);
      operands[1] = x4;
      if (!register_operand (operands[1], E_V2DImode))
        return -1;
      x5 = XVECEXP (x3, 0, 1);
      operands[2] = x5;
      if (!register_operand (operands[2], E_V2DImode))
        return -1;
      x6 = XVECEXP (x3, 0, 2);
      operands[3] = x6;
      if (!const_0_to_255_operand (operands[3], E_VOIDmode))
        return -1;
      x7 = XVECEXP (x3, 0, 3);
      operands[4] = x7;
      if (!const_0_to_255_operand (operands[4], E_VOIDmode)
          || !
#line 23460 "../../gcc/config/i386/sse.md"
(TARGET_SSE4A))
        return -1;
      return 8674; /* sse4a_insertqi */

    case 145:
      x4 = XVECEXP (x3, 0, 0);
      operands[1] = x4;
      x5 = XVECEXP (x3, 0, 1);
      operands[2] = x5;
      x6 = XVECEXP (x3, 0, 2);
      operands[3] = x6;
      x7 = XVECEXP (x3, 0, 3);
      operands[4] = x7;
      if (!const_0_to_3_operand (operands[4], E_SImode))
        return -1;
      switch (GET_MODE (operands[0]))
        {
        case E_V8SFmode:
          if (pattern1139 (x3, 
E_V8SImode, 
E_V8SFmode) != 0
              || !(
#line 27085 "../../gcc/config/i386/sse.md"
(TARGET_XOP) && 
#line 422 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 9074; /* xop_vpermil2v8sf3 */

        case E_V4SFmode:
          if (pattern1139 (x3, 
E_V4SImode, 
E_V4SFmode) != 0
              || !
#line 27085 "../../gcc/config/i386/sse.md"
(TARGET_XOP))
            return -1;
          return 9075; /* xop_vpermil2v4sf3 */

        case E_V4DFmode:
          if (pattern1139 (x3, 
E_V4DImode, 
E_V4DFmode) != 0
              || !(
#line 27085 "../../gcc/config/i386/sse.md"
(TARGET_XOP) && 
#line 423 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 9076; /* xop_vpermil2v4df3 */

        case E_V2DFmode:
          if (pattern1139 (x3, 
E_V2DImode, 
E_V2DFmode) != 0
              || !(
#line 27085 "../../gcc/config/i386/sse.md"
(TARGET_XOP) && 
#line 423 "../../gcc/config/i386/sse.md"
(TARGET_SSE2)))
            return -1;
          return 9077; /* xop_vpermil2v2df3 */

        default:
          return -1;
        }

    case 153:
      if (pnum_clobbers == NULL)
        return -1;
      x5 = XVECEXP (x3, 0, 1);
      if (GET_CODE (x5) != MEM)
        return -1;
      x8 = XEXP (x5, 0);
      if (GET_CODE (x8) != UNSPEC
          || XVECLEN (x8, 0) != 3
          || XINT (x8, 1) != 154)
        return -1;
      x6 = XVECEXP (x3, 0, 2);
      if (GET_CODE (x6) != MEM
          || GET_MODE (x6) != E_BLKmode)
        return -1;
      x9 = XEXP (x6, 0);
      if (GET_CODE (x9) != SCRATCH)
        return -1;
      x10 = XVECEXP (x8, 0, 2);
      if (!const1248_operand (x10, E_SImode))
        return -1;
      x4 = XVECEXP (x3, 0, 0);
      switch (GET_CODE (x4))
        {
        case REG:
        case SUBREG:
          operands[2] = x4;
          operands[7] = x5;
          x11 = XVECEXP (x8, 0, 0);
          operands[3] = x11;
          x12 = XVECEXP (x8, 0, 1);
          operands[4] = x12;
          operands[6] = x10;
          x7 = XVECEXP (x3, 0, 3);
          operands[5] = x7;
          switch (GET_MODE (operands[0]))
            {
            case E_V2DImode:
              switch (pattern1737 (x3, 
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
                  *pnum_clobbers = 1;
                  return 9668; /* *avx2_gathersiv2di */

                case 1:
                  if (!(
#line 29355 "../../gcc/config/i386/sse.md"
(TARGET_AVX2) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode)))
                    return -1;
                  *pnum_clobbers = 1;
                  return 9700; /* *avx2_gatherdiv2di */

                case 2:
                  if (!(
#line 29292 "../../gcc/config/i386/sse.md"
(TARGET_AVX2) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode)))
                    return -1;
                  *pnum_clobbers = 1;
                  return 9676; /* *avx2_gathersiv2di */

                case 3:
                  if (!(
#line 29355 "../../gcc/config/i386/sse.md"
(TARGET_AVX2) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode)))
                    return -1;
                  *pnum_clobbers = 1;
                  return 9708; /* *avx2_gatherdiv2di */

                default:
                  return -1;
                }

            case E_V2DFmode:
              switch (pattern1737 (x3, 
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
                  *pnum_clobbers = 1;
                  return 9669; /* *avx2_gathersiv2df */

                case 1:
                  if (!(
#line 29355 "../../gcc/config/i386/sse.md"
(TARGET_AVX2) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode)))
                    return -1;
                  *pnum_clobbers = 1;
                  return 9701; /* *avx2_gatherdiv2df */

                case 2:
                  if (!(
#line 29292 "../../gcc/config/i386/sse.md"
(TARGET_AVX2) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode)))
                    return -1;
                  *pnum_clobbers = 1;
                  return 9677; /* *avx2_gathersiv2df */

                case 3:
                  if (!(
#line 29355 "../../gcc/config/i386/sse.md"
(TARGET_AVX2) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode)))
                    return -1;
                  *pnum_clobbers = 1;
                  return 9709; /* *avx2_gatherdiv2df */

                default:
                  return -1;
                }

            case E_V4DImode:
              switch (pattern1739 (x3, 
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
                  *pnum_clobbers = 1;
                  return 9670; /* *avx2_gathersiv4di */

                case 1:
                  if (!(
#line 29355 "../../gcc/config/i386/sse.md"
(TARGET_AVX2) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode)))
                    return -1;
                  *pnum_clobbers = 1;
                  return 9702; /* *avx2_gatherdiv4di */

                case 2:
                  if (!(
#line 29292 "../../gcc/config/i386/sse.md"
(TARGET_AVX2) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode)))
                    return -1;
                  *pnum_clobbers = 1;
                  return 9678; /* *avx2_gathersiv4di */

                case 3:
                  if (!(
#line 29355 "../../gcc/config/i386/sse.md"
(TARGET_AVX2) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode)))
                    return -1;
                  *pnum_clobbers = 1;
                  return 9710; /* *avx2_gatherdiv4di */

                default:
                  return -1;
                }

            case E_V4DFmode:
              switch (pattern1739 (x3, 
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
                  *pnum_clobbers = 1;
                  return 9671; /* *avx2_gathersiv4df */

                case 1:
                  if (!(
#line 29355 "../../gcc/config/i386/sse.md"
(TARGET_AVX2) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode)))
                    return -1;
                  *pnum_clobbers = 1;
                  return 9703; /* *avx2_gatherdiv4df */

                case 2:
                  if (!(
#line 29292 "../../gcc/config/i386/sse.md"
(TARGET_AVX2) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode)))
                    return -1;
                  *pnum_clobbers = 1;
                  return 9679; /* *avx2_gathersiv4df */

                case 3:
                  if (!(
#line 29355 "../../gcc/config/i386/sse.md"
(TARGET_AVX2) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode)))
                    return -1;
                  *pnum_clobbers = 1;
                  return 9711; /* *avx2_gatherdiv4df */

                default:
                  return -1;
                }

            case E_V4SImode:
              switch (pattern1737 (x3, 
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
                  *pnum_clobbers = 1;
                  return 9672; /* *avx2_gathersiv4si */

                case 1:
                  if (!(
#line 29355 "../../gcc/config/i386/sse.md"
(TARGET_AVX2) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode)))
                    return -1;
                  *pnum_clobbers = 1;
                  return 9704; /* *avx2_gatherdiv4si */

                case 2:
                  if (!(
#line 29292 "../../gcc/config/i386/sse.md"
(TARGET_AVX2) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode)))
                    return -1;
                  *pnum_clobbers = 1;
                  return 9680; /* *avx2_gathersiv4si */

                case 3:
                  if (!(
#line 29355 "../../gcc/config/i386/sse.md"
(TARGET_AVX2) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode)))
                    return -1;
                  *pnum_clobbers = 1;
                  return 9712; /* *avx2_gatherdiv4si */

                default:
                  return -1;
                }

            case E_V4SFmode:
              switch (pattern1737 (x3, 
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
                  *pnum_clobbers = 1;
                  return 9673; /* *avx2_gathersiv4sf */

                case 1:
                  if (!(
#line 29355 "../../gcc/config/i386/sse.md"
(TARGET_AVX2) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode)))
                    return -1;
                  *pnum_clobbers = 1;
                  return 9705; /* *avx2_gatherdiv4sf */

                case 2:
                  if (!(
#line 29292 "../../gcc/config/i386/sse.md"
(TARGET_AVX2) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode)))
                    return -1;
                  *pnum_clobbers = 1;
                  return 9681; /* *avx2_gathersiv4sf */

                case 3:
                  if (!(
#line 29355 "../../gcc/config/i386/sse.md"
(TARGET_AVX2) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode)))
                    return -1;
                  *pnum_clobbers = 1;
                  return 9713; /* *avx2_gatherdiv4sf */

                default:
                  return -1;
                }

            case E_V8SImode:
              if (!register_operand (operands[0], E_V8SImode)
                  || GET_MODE (x3) != E_V8SImode
                  || !vsib_mem_operator (operands[7], E_SImode))
                return -1;
              switch (GET_MODE (operands[2]))
                {
                case E_V8SImode:
                  if (!register_operand (operands[2], E_V8SImode)
                      || !register_operand (operands[4], E_V8SImode))
                    return -1;
                  switch (pattern1810 (x8, 
E_V8SImode))
                    {
                    case 0:
                      if (!(
#line 29292 "../../gcc/config/i386/sse.md"
(TARGET_AVX2) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode)))
                        return -1;
                      *pnum_clobbers = 1;
                      return 9674; /* *avx2_gathersiv8si */

                    case 1:
                      if (!(
#line 29292 "../../gcc/config/i386/sse.md"
(TARGET_AVX2) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode)))
                        return -1;
                      *pnum_clobbers = 1;
                      return 9682; /* *avx2_gathersiv8si */

                    default:
                      return -1;
                    }

                case E_V4SImode:
                  switch (pattern1811 (x8, 
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
                      *pnum_clobbers = 1;
                      return 9706; /* *avx2_gatherdiv8si */

                    case 1:
                      if (!(
#line 29355 "../../gcc/config/i386/sse.md"
(TARGET_AVX2) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode)))
                        return -1;
                      *pnum_clobbers = 1;
                      return 9714; /* *avx2_gatherdiv8si */

                    default:
                      return -1;
                    }

                default:
                  return -1;
                }

            case E_V8SFmode:
              if (!register_operand (operands[0], E_V8SFmode)
                  || GET_MODE (x3) != E_V8SFmode
                  || !vsib_mem_operator (operands[7], E_SFmode))
                return -1;
              switch (GET_MODE (operands[2]))
                {
                case E_V8SFmode:
                  switch (pattern1811 (x8, 
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
                      *pnum_clobbers = 1;
                      return 9675; /* *avx2_gathersiv8sf */

                    case 1:
                      if (!(
#line 29292 "../../gcc/config/i386/sse.md"
(TARGET_AVX2) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode)))
                        return -1;
                      *pnum_clobbers = 1;
                      return 9683; /* *avx2_gathersiv8sf */

                    default:
                      return -1;
                    }

                case E_V4SFmode:
                  switch (pattern1811 (x8, 
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
                      *pnum_clobbers = 1;
                      return 9707; /* *avx2_gatherdiv8sf */

                    case 1:
                      if (!(
#line 29355 "../../gcc/config/i386/sse.md"
(TARGET_AVX2) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode)))
                        return -1;
                      *pnum_clobbers = 1;
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
          operands[6] = x5;
          x11 = XVECEXP (x8, 0, 0);
          operands[2] = x11;
          x12 = XVECEXP (x8, 0, 1);
          operands[3] = x12;
          operands[5] = x10;
          x7 = XVECEXP (x3, 0, 3);
          operands[4] = x7;
          switch (GET_MODE (operands[0]))
            {
            case E_V2DImode:
              switch (pattern1700 (x3, 
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
                  *pnum_clobbers = 1;
                  return 9684; /* *avx2_gathersiv2di_2 */

                case 1:
                  if (!(
#line 29376 "../../gcc/config/i386/sse.md"
(TARGET_AVX2) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode)))
                    return -1;
                  *pnum_clobbers = 1;
                  return 9716; /* *avx2_gatherdiv2di_2 */

                case 2:
                  if (!(
#line 29313 "../../gcc/config/i386/sse.md"
(TARGET_AVX2) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode)))
                    return -1;
                  *pnum_clobbers = 1;
                  return 9692; /* *avx2_gathersiv2di_2 */

                case 3:
                  if (!(
#line 29376 "../../gcc/config/i386/sse.md"
(TARGET_AVX2) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode)))
                    return -1;
                  *pnum_clobbers = 1;
                  return 9724; /* *avx2_gatherdiv2di_2 */

                default:
                  return -1;
                }

            case E_V2DFmode:
              switch (pattern1700 (x3, 
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
                  *pnum_clobbers = 1;
                  return 9685; /* *avx2_gathersiv2df_2 */

                case 1:
                  if (!(
#line 29376 "../../gcc/config/i386/sse.md"
(TARGET_AVX2) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode)))
                    return -1;
                  *pnum_clobbers = 1;
                  return 9717; /* *avx2_gatherdiv2df_2 */

                case 2:
                  if (!(
#line 29313 "../../gcc/config/i386/sse.md"
(TARGET_AVX2) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode)))
                    return -1;
                  *pnum_clobbers = 1;
                  return 9693; /* *avx2_gathersiv2df_2 */

                case 3:
                  if (!(
#line 29376 "../../gcc/config/i386/sse.md"
(TARGET_AVX2) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode)))
                    return -1;
                  *pnum_clobbers = 1;
                  return 9725; /* *avx2_gatherdiv2df_2 */

                default:
                  return -1;
                }

            case E_V4DImode:
              switch (pattern1702 (x3, 
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
                  *pnum_clobbers = 1;
                  return 9686; /* *avx2_gathersiv4di_2 */

                case 1:
                  if (!(
#line 29376 "../../gcc/config/i386/sse.md"
(TARGET_AVX2) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode)))
                    return -1;
                  *pnum_clobbers = 1;
                  return 9718; /* *avx2_gatherdiv4di_2 */

                case 2:
                  if (!(
#line 29313 "../../gcc/config/i386/sse.md"
(TARGET_AVX2) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode)))
                    return -1;
                  *pnum_clobbers = 1;
                  return 9694; /* *avx2_gathersiv4di_2 */

                case 3:
                  if (!(
#line 29376 "../../gcc/config/i386/sse.md"
(TARGET_AVX2) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode)))
                    return -1;
                  *pnum_clobbers = 1;
                  return 9726; /* *avx2_gatherdiv4di_2 */

                default:
                  return -1;
                }

            case E_V4DFmode:
              switch (pattern1702 (x3, 
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
                  *pnum_clobbers = 1;
                  return 9687; /* *avx2_gathersiv4df_2 */

                case 1:
                  if (!(
#line 29376 "../../gcc/config/i386/sse.md"
(TARGET_AVX2) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode)))
                    return -1;
                  *pnum_clobbers = 1;
                  return 9719; /* *avx2_gatherdiv4df_2 */

                case 2:
                  if (!(
#line 29313 "../../gcc/config/i386/sse.md"
(TARGET_AVX2) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode)))
                    return -1;
                  *pnum_clobbers = 1;
                  return 9695; /* *avx2_gathersiv4df_2 */

                case 3:
                  if (!(
#line 29376 "../../gcc/config/i386/sse.md"
(TARGET_AVX2) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode)))
                    return -1;
                  *pnum_clobbers = 1;
                  return 9727; /* *avx2_gatherdiv4df_2 */

                default:
                  return -1;
                }

            case E_V4SImode:
              switch (pattern1700 (x3, 
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
                  *pnum_clobbers = 1;
                  return 9688; /* *avx2_gathersiv4si_2 */

                case 1:
                  if (!(
#line 29376 "../../gcc/config/i386/sse.md"
(TARGET_AVX2) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode)))
                    return -1;
                  *pnum_clobbers = 1;
                  return 9720; /* *avx2_gatherdiv4si_2 */

                case 2:
                  if (!(
#line 29313 "../../gcc/config/i386/sse.md"
(TARGET_AVX2) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode)))
                    return -1;
                  *pnum_clobbers = 1;
                  return 9696; /* *avx2_gathersiv4si_2 */

                case 3:
                  if (!(
#line 29376 "../../gcc/config/i386/sse.md"
(TARGET_AVX2) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode)))
                    return -1;
                  *pnum_clobbers = 1;
                  return 9728; /* *avx2_gatherdiv4si_2 */

                default:
                  return -1;
                }

            case E_V4SFmode:
              switch (pattern1700 (x3, 
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
                  *pnum_clobbers = 1;
                  return 9689; /* *avx2_gathersiv4sf_2 */

                case 1:
                  if (!(
#line 29376 "../../gcc/config/i386/sse.md"
(TARGET_AVX2) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode)))
                    return -1;
                  *pnum_clobbers = 1;
                  return 9721; /* *avx2_gatherdiv4sf_2 */

                case 2:
                  if (!(
#line 29313 "../../gcc/config/i386/sse.md"
(TARGET_AVX2) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode)))
                    return -1;
                  *pnum_clobbers = 1;
                  return 9697; /* *avx2_gathersiv4sf_2 */

                case 3:
                  if (!(
#line 29376 "../../gcc/config/i386/sse.md"
(TARGET_AVX2) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode)))
                    return -1;
                  *pnum_clobbers = 1;
                  return 9729; /* *avx2_gatherdiv4sf_2 */

                default:
                  return -1;
                }

            case E_V8SImode:
              switch (pattern1703 (x3, 
E_SImode, 
E_V8SImode))
                {
                case 0:
                  switch (pattern1783 (
E_SImode))
                    {
                    case 0:
                      if (!(
#line 29313 "../../gcc/config/i386/sse.md"
(TARGET_AVX2) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode)))
                        return -1;
                      *pnum_clobbers = 1;
                      return 9690; /* *avx2_gathersiv8si_2 */

                    case 1:
                      if (!(
#line 29376 "../../gcc/config/i386/sse.md"
(TARGET_AVX2) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode)))
                        return -1;
                      *pnum_clobbers = 1;
                      return 9722; /* *avx2_gatherdiv8si_2 */

                    default:
                      return -1;
                    }

                case 1:
                  switch (pattern1783 (
E_DImode))
                    {
                    case 0:
                      if (!(
#line 29313 "../../gcc/config/i386/sse.md"
(TARGET_AVX2) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode)))
                        return -1;
                      *pnum_clobbers = 1;
                      return 9698; /* *avx2_gathersiv8si_2 */

                    case 1:
                      if (!(
#line 29376 "../../gcc/config/i386/sse.md"
(TARGET_AVX2) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode)))
                        return -1;
                      *pnum_clobbers = 1;
                      return 9730; /* *avx2_gatherdiv8si_2 */

                    default:
                      return -1;
                    }

                default:
                  return -1;
                }

            case E_V8SFmode:
              switch (pattern1703 (x3, 
E_SFmode, 
E_V8SFmode))
                {
                case 0:
                  switch (pattern1784 (
E_SImode))
                    {
                    case 0:
                      if (!(
#line 29313 "../../gcc/config/i386/sse.md"
(TARGET_AVX2) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode)))
                        return -1;
                      *pnum_clobbers = 1;
                      return 9691; /* *avx2_gathersiv8sf_2 */

                    case 1:
                      if (!(
#line 29376 "../../gcc/config/i386/sse.md"
(TARGET_AVX2) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode)))
                        return -1;
                      *pnum_clobbers = 1;
                      return 9723; /* *avx2_gatherdiv8sf_2 */

                    default:
                      return -1;
                    }

                case 1:
                  switch (pattern1784 (
E_DImode))
                    {
                    case 0:
                      if (!(
#line 29313 "../../gcc/config/i386/sse.md"
(TARGET_AVX2) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode)))
                        return -1;
                      *pnum_clobbers = 1;
                      return 9699; /* *avx2_gathersiv8sf_2 */

                    case 1:
                      if (!(
#line 29376 "../../gcc/config/i386/sse.md"
(TARGET_AVX2) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode)))
                        return -1;
                      *pnum_clobbers = 1;
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

    case 226:
      if (GET_MODE (x3) != E_V4SImode
          || pattern167 (x3) != 0)
        return -1;
      x7 = XVECEXP (x3, 0, 3);
      operands[4] = x7;
      if (!const_0_to_255_operand (operands[4], E_SImode)
          || !
#line 30065 "../../gcc/config/i386/sse.md"
(TARGET_SM3))
        return -1;
      return 10089; /* vsm3rnds2 */

    default:
      return -1;
    }
}

 int
recog_308 (rtx x1 ATTRIBUTE_UNUSED,
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
      switch (GET_CODE (operands[2]))
        {
        case REG:
        case SUBREG:
        case MEM:
        case VEC_DUPLICATE:
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
              return 3708; /* *xorv16bf3 */

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
              return 3711; /* *xorv8bf3 */

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
              return 3714; /* *xorv16hf3 */

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
              return 3717; /* *xorv8hf3 */

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
              return 3722; /* *xorv8sf3 */

            case E_V4SFmode:
              if (pattern25 (x2, 
E_V4SFmode) != 0
                  || !
#line 5349 "../../gcc/config/i386/sse.md"
(TARGET_SSE && 1
   && (!false || 32 != 16)
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
                return -1;
              return 3728; /* *xorv4sf3 */

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
              return 3734; /* *xorv4df3 */

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
              return 3740; /* *xorv2df3 */

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
              return 3744; /* *xorv32bf3 */

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
              return 3747; /* *xorv32hf3 */

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
              return 3752; /* *xorv16sf3 */

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
              return 3758; /* *xorv8df3 */

            case E_V16SImode:
              if (pattern179 (x2, 
E_V16SImode) != 0
                  || !(
#line 18731 "../../gcc/config/i386/sse.md"
(TARGET_SSE && 1
   && ix86_binary_operator_ok (XOR, V16SImode, operands)) && 
#line 808 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
                return -1;
              return 8005; /* *xorv16si3 */

            case E_V8SImode:
              if (pattern179 (x2, 
E_V8SImode) != 0
                  || !(
#line 18731 "../../gcc/config/i386/sse.md"
(TARGET_SSE && 1
   && ix86_binary_operator_ok (XOR, V8SImode, operands)) && 
#line 808 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
                return -1;
              return 8011; /* *xorv8si3 */

            case E_V4SImode:
              if (pattern179 (x2, 
E_V4SImode) != 0
                  || !
#line 18731 "../../gcc/config/i386/sse.md"
(TARGET_SSE && 1
   && ix86_binary_operator_ok (XOR, V4SImode, operands)))
                return -1;
              return 8017; /* *xorv4si3 */

            case E_V8DImode:
              if (pattern179 (x2, 
E_V8DImode) != 0
                  || !(
#line 18731 "../../gcc/config/i386/sse.md"
(TARGET_SSE && 1
   && ix86_binary_operator_ok (XOR, V8DImode, operands)) && 
#line 809 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
                return -1;
              return 8023; /* *xorv8di3 */

            case E_V4DImode:
              if (pattern179 (x2, 
E_V4DImode) != 0
                  || !(
#line 18731 "../../gcc/config/i386/sse.md"
(TARGET_SSE && 1
   && ix86_binary_operator_ok (XOR, V4DImode, operands)) && 
#line 809 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
                return -1;
              return 8029; /* *xorv4di3 */

            case E_V2DImode:
              if (pattern179 (x2, 
E_V2DImode) != 0
                  || !
#line 18731 "../../gcc/config/i386/sse.md"
(TARGET_SSE && 1
   && ix86_binary_operator_ok (XOR, V2DImode, operands)))
                return -1;
              return 8035; /* *xorv2di3 */

            case E_V64QImode:
              if (pattern25 (x2, 
E_V64QImode) != 0
                  || !(
#line 18833 "../../gcc/config/i386/sse.md"
(TARGET_SSE && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 812 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
                return -1;
              return 8039; /* *xorv64qi3 */

            case E_V32QImode:
              if (pattern25 (x2, 
E_V32QImode) != 0
                  || !(
#line 18833 "../../gcc/config/i386/sse.md"
(TARGET_SSE && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 812 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
                return -1;
              return 8042; /* *xorv32qi3 */

            case E_V16QImode:
              if (pattern25 (x2, 
E_V16QImode) != 0
                  || !
#line 18833 "../../gcc/config/i386/sse.md"
(TARGET_SSE && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
                return -1;
              return 8045; /* *xorv16qi3 */

            case E_V32HImode:
              if (pattern25 (x2, 
E_V32HImode) != 0
                  || !(
#line 18833 "../../gcc/config/i386/sse.md"
(TARGET_SSE && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 813 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
                return -1;
              return 8048; /* *xorv32hi3 */

            case E_V16HImode:
              if (pattern25 (x2, 
E_V16HImode) != 0
                  || !(
#line 18833 "../../gcc/config/i386/sse.md"
(TARGET_SSE && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 813 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
                return -1;
              return 8051; /* *xorv16hi3 */

            case E_V8HImode:
              if (pattern25 (x2, 
E_V8HImode) != 0
                  || !
#line 18833 "../../gcc/config/i386/sse.md"
(TARGET_SSE && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
                return -1;
              return 8054; /* *xorv8hi3 */

            case E_V1TImode:
              if (pattern670 (x2, 
E_V1TImode) != 0
                  || !
#line 18930 "../../gcc/config/i386/sse.md"
(TARGET_SSE2))
                return -1;
              return 8057; /* xorv1ti3 */

            default:
              return -1;
            }

        case CONST_VECTOR:
          switch (GET_MODE (operands[0]))
            {
            case E_V16SImode:
              if (pattern935 (x2, 
E_V16SImode) != 0
                  || !(
#line 18358 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (64 == 64 || TARGET_AVX512VL || TARGET_EVEX512)
   && (!false
       || SImode == SImode
       || SImode == DImode)) && 
#line 569 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
                return -1;
              return 7953; /* *one_cmplv16si2 */

            case E_V8DImode:
              if (pattern935 (x2, 
E_V8DImode) != 0
                  || !(
#line 18358 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (64 == 64 || TARGET_AVX512VL || TARGET_EVEX512)
   && (!false
       || DImode == SImode
       || DImode == DImode)) && 
#line 570 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
                return -1;
              return 7955; /* *one_cmplv8di2 */

            case E_V64QImode:
              if (pattern935 (x2, 
E_V64QImode) != 0
                  || !(
#line 18358 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (64 == 64 || TARGET_AVX512VL || TARGET_EVEX512)
   && (!false
       || QImode == SImode
       || QImode == DImode)) && 
#line 571 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512)))
                return -1;
              return 7957; /* *one_cmplv64qi2 */

            case E_V32QImode:
              if (pattern935 (x2, 
E_V32QImode) != 0
                  || !(
#line 18358 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (32 == 64 || TARGET_AVX512VL || TARGET_EVEX512)
   && (!false
       || QImode == SImode
       || QImode == DImode)) && 
#line 571 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
                return -1;
              return 7958; /* *one_cmplv32qi2 */

            case E_V16QImode:
              if (pattern935 (x2, 
E_V16QImode) != 0
                  || !
#line 18358 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (16 == 64 || TARGET_AVX512VL || TARGET_EVEX512)
   && (!false
       || QImode == SImode
       || QImode == DImode)))
                return -1;
              return 7959; /* *one_cmplv16qi2 */

            case E_V32HImode:
              if (pattern935 (x2, 
E_V32HImode) != 0
                  || !(
#line 18358 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (64 == 64 || TARGET_AVX512VL || TARGET_EVEX512)
   && (!false
       || HImode == SImode
       || HImode == DImode)) && 
#line 572 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512)))
                return -1;
              return 7960; /* *one_cmplv32hi2 */

            case E_V16HImode:
              if (pattern935 (x2, 
E_V16HImode) != 0
                  || !(
#line 18358 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (32 == 64 || TARGET_AVX512VL || TARGET_EVEX512)
   && (!false
       || HImode == SImode
       || HImode == DImode)) && 
#line 572 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
                return -1;
              return 7961; /* *one_cmplv16hi2 */

            case E_V8HImode:
              if (pattern935 (x2, 
E_V8HImode) != 0
                  || !
#line 18358 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (16 == 64 || TARGET_AVX512VL || TARGET_EVEX512)
   && (!false
       || HImode == SImode
       || HImode == DImode)))
                return -1;
              return 7962; /* *one_cmplv8hi2 */

            case E_V8SImode:
              if (pattern935 (x2, 
E_V8SImode) != 0
                  || !(
#line 18358 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (32 == 64 || TARGET_AVX512VL || TARGET_EVEX512)
   && (!false
       || SImode == SImode
       || SImode == DImode)) && 
#line 573 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
                return -1;
              return 7963; /* *one_cmplv8si2 */

            case E_V4SImode:
              if (pattern935 (x2, 
E_V4SImode) != 0
                  || !
#line 18358 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (16 == 64 || TARGET_AVX512VL || TARGET_EVEX512)
   && (!false
       || SImode == SImode
       || SImode == DImode)))
                return -1;
              return 7965; /* *one_cmplv4si2 */

            case E_V4DImode:
              if (pattern935 (x2, 
E_V4DImode) != 0
                  || !(
#line 18358 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (32 == 64 || TARGET_AVX512VL || TARGET_EVEX512)
   && (!false
       || DImode == SImode
       || DImode == DImode)) && 
#line 574 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
                return -1;
              return 7967; /* *one_cmplv4di2 */

            case E_V2DImode:
              if (pattern935 (x2, 
E_V2DImode) != 0
                  || !
#line 18358 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (16 == 64 || TARGET_AVX512VL || TARGET_EVEX512)
   && (!false
       || DImode == SImode
       || DImode == DImode)))
                return -1;
              return 7969; /* *one_cmplv2di2 */

            default:
              return -1;
            }

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
              return 5518; /* *avx512bw_vpternlogv64qi_1 */

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
              return 5545; /* *avx512vl_vpternlogv32qi_1 */

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
              return 5572; /* *avx512vl_vpternlogv16qi_1 */

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
              return 5599; /* *avx512bw_vpternlogv32hi_1 */

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
              return 5626; /* *avx512vl_vpternlogv16hi_1 */

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
              return 5653; /* *avx512vl_vpternlogv8hi_1 */

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
              return 5680; /* *avx512f_vpternlogv16si_1 */

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
              return 5707; /* *avx512vl_vpternlogv8si_1 */

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
              return 5734; /* *avx512vl_vpternlogv4si_1 */

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
              return 5761; /* *avx512f_vpternlogv8di_1 */

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
              return 5788; /* *avx512vl_vpternlogv4di_1 */

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
              return 5815; /* *avx512vl_vpternlogv2di_1 */

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
              return 5521; /* *avx512bw_vpternlogv64qi_1 */

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
              return 5548; /* *avx512vl_vpternlogv32qi_1 */

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
              return 5575; /* *avx512vl_vpternlogv16qi_1 */

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
              return 5602; /* *avx512bw_vpternlogv32hi_1 */

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
              return 5629; /* *avx512vl_vpternlogv16hi_1 */

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
              return 5656; /* *avx512vl_vpternlogv8hi_1 */

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
              return 5683; /* *avx512f_vpternlogv16si_1 */

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
              return 5710; /* *avx512vl_vpternlogv8si_1 */

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
              return 5737; /* *avx512vl_vpternlogv4si_1 */

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
              return 5764; /* *avx512f_vpternlogv8di_1 */

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
              return 5791; /* *avx512vl_vpternlogv4di_1 */

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
              return 5818; /* *avx512vl_vpternlogv2di_1 */

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
              return 5524; /* *avx512bw_vpternlogv64qi_1 */

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
              return 5551; /* *avx512vl_vpternlogv32qi_1 */

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
              return 5578; /* *avx512vl_vpternlogv16qi_1 */

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
              return 5605; /* *avx512bw_vpternlogv32hi_1 */

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
              return 5632; /* *avx512vl_vpternlogv16hi_1 */

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
              return 5659; /* *avx512vl_vpternlogv8hi_1 */

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
              return 5686; /* *avx512f_vpternlogv16si_1 */

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
              return 5713; /* *avx512vl_vpternlogv8si_1 */

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
              return 5740; /* *avx512vl_vpternlogv4si_1 */

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
              return 5767; /* *avx512f_vpternlogv8di_1 */

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
              return 5794; /* *avx512vl_vpternlogv4di_1 */

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
              return 5821; /* *avx512vl_vpternlogv2di_1 */

            case 36:
              if (!(
#line 13946 "../../gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 332 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
                return -1;
              return 6814; /* *avx512bw_vpternlogv64qi_3 */

            case 37:
              if (!(
#line 13946 "../../gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 332 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
                return -1;
              return 6823; /* *avx512vl_vpternlogv32qi_3 */

            case 38:
              if (!
#line 13946 "../../gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()))
                return -1;
              return 6832; /* *avx512vl_vpternlogv16qi_3 */

            case 39:
              if (!(
#line 13946 "../../gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 333 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
                return -1;
              return 6841; /* *avx512bw_vpternlogv32hi_3 */

            case 40:
              if (!(
#line 13946 "../../gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 333 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
                return -1;
              return 6850; /* *avx512vl_vpternlogv16hi_3 */

            case 41:
              if (!
#line 13946 "../../gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()))
                return -1;
              return 6859; /* *avx512vl_vpternlogv8hi_3 */

            case 42:
              if (!(
#line 13946 "../../gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 334 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
                return -1;
              return 6868; /* *avx512f_vpternlogv16si_3 */

            case 43:
              if (!(
#line 13946 "../../gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 334 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
                return -1;
              return 6877; /* *avx512vl_vpternlogv8si_3 */

            case 44:
              if (!
#line 13946 "../../gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()))
                return -1;
              return 6886; /* *avx512vl_vpternlogv4si_3 */

            case 45:
              if (!(
#line 13946 "../../gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 335 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
                return -1;
              return 6895; /* *avx512f_vpternlogv8di_3 */

            case 46:
              if (!(
#line 13946 "../../gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 335 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
                return -1;
              return 6904; /* *avx512vl_vpternlogv4di_3 */

            case 47:
              if (!
#line 13946 "../../gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()))
                return -1;
              return 6913; /* *avx512vl_vpternlogv2di_3 */

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
              return 6166; /* *avx512bw_vpternlogv64qi_2 */

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
              return 6193; /* *avx512vl_vpternlogv32qi_2 */

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
              return 6220; /* *avx512vl_vpternlogv16qi_2 */

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
              return 6247; /* *avx512bw_vpternlogv32hi_2 */

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
              return 6274; /* *avx512vl_vpternlogv16hi_2 */

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
              return 6301; /* *avx512vl_vpternlogv8hi_2 */

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
              return 6328; /* *avx512f_vpternlogv16si_2 */

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
              return 6355; /* *avx512vl_vpternlogv8si_2 */

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
              return 6382; /* *avx512vl_vpternlogv4si_2 */

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
              return 6409; /* *avx512f_vpternlogv8di_2 */

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
              return 6436; /* *avx512vl_vpternlogv4di_2 */

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
              return 6463; /* *avx512vl_vpternlogv2di_2 */

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
              return 6169; /* *avx512bw_vpternlogv64qi_2 */

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
              return 6196; /* *avx512vl_vpternlogv32qi_2 */

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
              return 6223; /* *avx512vl_vpternlogv16qi_2 */

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
              return 6250; /* *avx512bw_vpternlogv32hi_2 */

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
              return 6277; /* *avx512vl_vpternlogv16hi_2 */

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
              return 6304; /* *avx512vl_vpternlogv8hi_2 */

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
              return 6331; /* *avx512f_vpternlogv16si_2 */

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
              return 6358; /* *avx512vl_vpternlogv8si_2 */

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
              return 6385; /* *avx512vl_vpternlogv4si_2 */

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
              return 6412; /* *avx512f_vpternlogv8di_2 */

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
              return 6439; /* *avx512vl_vpternlogv4di_2 */

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
              return 6466; /* *avx512vl_vpternlogv2di_2 */

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
              return 6172; /* *avx512bw_vpternlogv64qi_2 */

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
              return 6199; /* *avx512vl_vpternlogv32qi_2 */

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
              return 6226; /* *avx512vl_vpternlogv16qi_2 */

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
              return 6253; /* *avx512bw_vpternlogv32hi_2 */

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
              return 6280; /* *avx512vl_vpternlogv16hi_2 */

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
              return 6307; /* *avx512vl_vpternlogv8hi_2 */

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
              return 6334; /* *avx512f_vpternlogv16si_2 */

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
              return 6361; /* *avx512vl_vpternlogv8si_2 */

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
              return 6388; /* *avx512vl_vpternlogv4si_2 */

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
              return 6415; /* *avx512f_vpternlogv8di_2 */

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
              return 6442; /* *avx512vl_vpternlogv4di_2 */

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
              return 6469; /* *avx512vl_vpternlogv2di_2 */

            default:
              return -1;
            }

        default:
          return -1;
        }

    case IOR:
      return recog_307 (x1, insn, pnum_clobbers);

    case XOR:
      return recog_306 (x1, insn, pnum_clobbers);

    default:
      return -1;
    }
}

 int
recog_320 (rtx x1 ATTRIBUTE_UNUSED,
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
  rtx x66, x67, x68, x69;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) != PARALLEL)
    return -1;
  x4 = XEXP (x1, 0);
  operands[0] = x4;
  x5 = XEXP (x2, 0);
  switch (GET_CODE (x5))
    {
    case VEC_CONCAT:
      x6 = XEXP (x5, 0);
      switch (GET_CODE (x6))
        {
        case REG:
        case SUBREG:
        case MEM:
          operands[1] = x6;
          res = recog_284 (x1, insn, pnum_clobbers);
          if (res >= 0)
            return res;
          if (XVECLEN (x3, 0) < 1)
            return -1;
          operands[4] = x3;
          switch (pattern807 (x2))
            {
            case 0:
              if (
#line 24152 "../../gcc/config/i386/sse.md"
(TARGET_AVX2))
                return 8755; /* *avx2_zero_extendv16qiv16hi2_2 */
              break;

            case 1:
              if (
#line 24152 "../../gcc/config/i386/sse.md"
(TARGET_AVX2))
                return 8756; /* *avx2_zero_extendv16qiv16hi2_2 */
              break;

            case 2:
              if (
#line 24152 "../../gcc/config/i386/sse.md"
(TARGET_AVX2))
                return 8757; /* *avx2_zero_extendv16qiv16hi2_2 */
              break;

            case 3:
              if ((
#line 24205 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512) && 
#line 954 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                return 8763; /* *avx512bw_zero_extendv32qiv32hi2_2 */
              break;

            case 4:
              if ((
#line 24205 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512) && 
#line 954 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                return 8764; /* *avx512bw_zero_extendv32qiv32hi2_2 */
              break;

            case 5:
              if ((
#line 24205 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512) && 
#line 954 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                return 8765; /* *avx512bw_zero_extendv32qiv32hi2_2 */
              break;

            case 6:
              if (
#line 24316 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1))
                return 8779; /* *sse4_1_zero_extendv8qiv8hi2_4 */
              break;

            case 7:
              if (
#line 24316 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1))
                return 8780; /* *sse4_1_zero_extendv8qiv8hi2_4 */
              break;

            case 8:
              if (
#line 24316 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1))
                return 8781; /* *sse4_1_zero_extendv8qiv8hi2_4 */
              break;

            case 9:
              if ((
#line 24549 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 957 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                return 8815; /* *avx512f_zero_extendv16hiv16si2_2 */
              break;

            case 10:
              if ((
#line 24549 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 957 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                return 8816; /* *avx512f_zero_extendv16hiv16si2_2 */
              break;

            case 11:
              if ((
#line 24549 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 957 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                return 8817; /* *avx512f_zero_extendv16hiv16si2_2 */
              break;

            case 12:
              if (
#line 24603 "../../gcc/config/i386/sse.md"
(TARGET_AVX2))
                return 8823; /* *avx2_zero_extendv8hiv8si2_2 */
              break;

            case 13:
              if (
#line 24603 "../../gcc/config/i386/sse.md"
(TARGET_AVX2))
                return 8824; /* *avx2_zero_extendv8hiv8si2_2 */
              break;

            case 14:
              if (
#line 24603 "../../gcc/config/i386/sse.md"
(TARGET_AVX2))
                return 8825; /* *avx2_zero_extendv8hiv8si2_2 */
              break;

            case 15:
              if (
#line 24721 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1))
                return 8839; /* *sse4_1_zero_extendv4hiv4si2_4 */
              break;

            case 16:
              if (
#line 24721 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1))
                return 8840; /* *sse4_1_zero_extendv4hiv4si2_4 */
              break;

            case 17:
              if (
#line 24721 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1))
                return 8841; /* *sse4_1_zero_extendv4hiv4si2_4 */
              break;

            default:
              break;
            }
          operands[3] = x3;
          switch (pattern808 (x2))
            {
            case 0:
              if (!(
#line 29059 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_pre_reload_split ()) && 
#line 332 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
                return -1;
              return 9619; /* *vec_concatv64qi_0_1 */

            case 1:
              if (!(
#line 29059 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_pre_reload_split ()) && 
#line 332 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
                return -1;
              return 9620; /* *vec_concatv32qi_0_1 */

            case 2:
              if (!
#line 29059 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_pre_reload_split ()))
                return -1;
              return 9621; /* *vec_concatv16qi_0_1 */

            case 3:
              if (!(
#line 29059 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_pre_reload_split ()) && 
#line 333 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
                return -1;
              return 9622; /* *vec_concatv32hi_0_1 */

            case 4:
              if (!(
#line 29059 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_pre_reload_split ()) && 
#line 333 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
                return -1;
              return 9623; /* *vec_concatv16hi_0_1 */

            case 5:
              if (!
#line 29059 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_pre_reload_split ()))
                return -1;
              return 9624; /* *vec_concatv8hi_0_1 */

            default:
              return -1;
            }

        case SS_TRUNCATE:
          x7 = XEXP (x5, 1);
          if (GET_CODE (x7) != SS_TRUNCATE)
            return -1;
          x8 = XEXP (x6, 0);
          operands[1] = x8;
          x9 = XEXP (x7, 0);
          operands[2] = x9;
          switch (XVECLEN (x3, 0))
            {
            case 32:
              if (pattern835 (x3) != 0)
                return -1;
              x10 = XVECEXP (x3, 0, 4);
              if (GET_CODE (x10) != CONST_INT)
                return -1;
              x11 = XVECEXP (x3, 0, 5);
              if (GET_CODE (x11) != CONST_INT)
                return -1;
              x12 = XVECEXP (x3, 0, 6);
              if (GET_CODE (x12) != CONST_INT)
                return -1;
              x13 = XVECEXP (x3, 0, 7);
              if (GET_CODE (x13) != CONST_INT)
                return -1;
              x14 = XVECEXP (x3, 0, 8);
              if (GET_CODE (x14) != CONST_INT)
                return -1;
              x15 = XVECEXP (x3, 0, 9);
              if (GET_CODE (x15) != CONST_INT)
                return -1;
              x16 = XVECEXP (x3, 0, 10);
              if (GET_CODE (x16) != CONST_INT)
                return -1;
              x17 = XVECEXP (x3, 0, 11);
              if (GET_CODE (x17) != CONST_INT
                  || pattern1687 (x3, 
23, 
22, 
21, 
20, 
8) != 0)
                return -1;
              x18 = XVECEXP (x3, 0, 17);
              if (x18 != const_int_rtx[MAX_SAVED_CONST_INT + 9])
                return -1;
              x19 = XVECEXP (x3, 0, 18);
              if (x19 != const_int_rtx[MAX_SAVED_CONST_INT + 10])
                return -1;
              x20 = XVECEXP (x3, 0, 19);
              if (x20 != const_int_rtx[MAX_SAVED_CONST_INT + 11])
                return -1;
              x21 = XVECEXP (x3, 0, 20);
              if (GET_CODE (x21) != CONST_INT)
                return -1;
              x22 = XVECEXP (x3, 0, 21);
              if (GET_CODE (x22) != CONST_INT)
                return -1;
              x23 = XVECEXP (x3, 0, 22);
              if (GET_CODE (x23) != CONST_INT)
                return -1;
              x24 = XVECEXP (x3, 0, 23);
              if (GET_CODE (x24) != CONST_INT)
                return -1;
              x25 = XVECEXP (x3, 0, 24);
              if (GET_CODE (x25) != CONST_INT)
                return -1;
              x26 = XVECEXP (x3, 0, 25);
              if (GET_CODE (x26) != CONST_INT)
                return -1;
              x27 = XVECEXP (x3, 0, 26);
              if (GET_CODE (x27) != CONST_INT)
                return -1;
              x28 = XVECEXP (x3, 0, 27);
              if (GET_CODE (x28) != CONST_INT
                  || pattern1857 (x3, 
31, 
30, 
29, 
28) != 0)
                return -1;
              switch (XWINT (x10, 0))
                {
                case 4L:
                  if (XWINT (x11, 0) != 5L
                      || XWINT (x12, 0) != 6L
                      || XWINT (x13, 0) != 7L
                      || XWINT (x14, 0) != 16L
                      || XWINT (x15, 0) != 17L
                      || XWINT (x16, 0) != 18L
                      || XWINT (x17, 0) != 19L
                      || XWINT (x21, 0) != 12L
                      || XWINT (x22, 0) != 13L
                      || XWINT (x23, 0) != 14L
                      || XWINT (x24, 0) != 15L
                      || pattern1882 (x3) != 0
                      || pattern1814 (x2, 
E_V16HImode, 
E_V16QImode, 
E_V32QImode) != 0
                      || !
#line 19246 "../../gcc/config/i386/sse.md"
(TARGET_AVX2 && 1 && 1))
                    return -1;
                  return 8300; /* avx2_packsswb */

                case 16L:
                  if (XWINT (x11, 0) != 17L
                      || XWINT (x12, 0) != 18L
                      || XWINT (x13, 0) != 19L
                      || XWINT (x14, 0) != 4L
                      || XWINT (x15, 0) != 5L
                      || XWINT (x16, 0) != 6L
                      || XWINT (x17, 0) != 7L
                      || XWINT (x21, 0) != 24L
                      || XWINT (x22, 0) != 25L
                      || XWINT (x23, 0) != 26L
                      || XWINT (x24, 0) != 27L
                      || XWINT (x25, 0) != 12L
                      || XWINT (x26, 0) != 13L
                      || XWINT (x27, 0) != 14L
                      || XWINT (x28, 0) != 15L
                      || pattern1814 (x2, 
E_V16SImode, 
E_V16HImode, 
E_V32HImode) != 0
                      || !
#line 19362 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512))
                    return -1;
                  return 8308; /* avx512bw_packssdw */

                default:
                  return -1;
                }

            case 64:
              if (pattern838 (x3, 
35, 
34, 
33, 
32) != 0
                  || pattern1687 (x3, 
39, 
38, 
37, 
36, 
8) != 0
                  || pattern1797 (x3, 
13, 
12, 
11, 
10, 
9) != 0
                  || pattern1839 (x3, 
42, 
41, 
40, 
15, 
14) != 0)
                return -1;
              x28 = XVECEXP (x3, 0, 27);
              if (x28 != const_int_rtx[MAX_SAVED_CONST_INT + 43]
                  || pattern1857 (x3, 
47, 
46, 
45, 
44) != 0)
                return -1;
              x29 = XVECEXP (x3, 0, 32);
              if (x29 != const_int_rtx[MAX_SAVED_CONST_INT + 16])
                return -1;
              x30 = XVECEXP (x3, 0, 33);
              if (x30 != const_int_rtx[MAX_SAVED_CONST_INT + 17])
                return -1;
              x31 = XVECEXP (x3, 0, 34);
              if (x31 != const_int_rtx[MAX_SAVED_CONST_INT + 18])
                return -1;
              x32 = XVECEXP (x3, 0, 35);
              if (x32 != const_int_rtx[MAX_SAVED_CONST_INT + 19])
                return -1;
              x33 = XVECEXP (x3, 0, 36);
              if (x33 != const_int_rtx[MAX_SAVED_CONST_INT + 20])
                return -1;
              x34 = XVECEXP (x3, 0, 37);
              if (x34 != const_int_rtx[MAX_SAVED_CONST_INT + 21])
                return -1;
              x35 = XVECEXP (x3, 0, 38);
              if (x35 != const_int_rtx[MAX_SAVED_CONST_INT + 22])
                return -1;
              x36 = XVECEXP (x3, 0, 39);
              if (x36 != const_int_rtx[MAX_SAVED_CONST_INT + 23])
                return -1;
              x37 = XVECEXP (x3, 0, 40);
              if (x37 != const_int_rtx[MAX_SAVED_CONST_INT + 48])
                return -1;
              x38 = XVECEXP (x3, 0, 41);
              if (x38 != const_int_rtx[MAX_SAVED_CONST_INT + 49])
                return -1;
              x39 = XVECEXP (x3, 0, 42);
              if (x39 != const_int_rtx[MAX_SAVED_CONST_INT + 50])
                return -1;
              x40 = XVECEXP (x3, 0, 43);
              if (x40 != const_int_rtx[MAX_SAVED_CONST_INT + 51])
                return -1;
              x41 = XVECEXP (x3, 0, 44);
              if (x41 != const_int_rtx[MAX_SAVED_CONST_INT + 52])
                return -1;
              x42 = XVECEXP (x3, 0, 45);
              if (x42 != const_int_rtx[MAX_SAVED_CONST_INT + 53])
                return -1;
              x43 = XVECEXP (x3, 0, 46);
              if (x43 != const_int_rtx[MAX_SAVED_CONST_INT + 54])
                return -1;
              x44 = XVECEXP (x3, 0, 47);
              if (x44 != const_int_rtx[MAX_SAVED_CONST_INT + 55])
                return -1;
              x45 = XVECEXP (x3, 0, 48);
              if (x45 != const_int_rtx[MAX_SAVED_CONST_INT + 24])
                return -1;
              x46 = XVECEXP (x3, 0, 49);
              if (x46 != const_int_rtx[MAX_SAVED_CONST_INT + 25])
                return -1;
              x47 = XVECEXP (x3, 0, 50);
              if (x47 != const_int_rtx[MAX_SAVED_CONST_INT + 26])
                return -1;
              x48 = XVECEXP (x3, 0, 51);
              if (x48 != const_int_rtx[MAX_SAVED_CONST_INT + 27])
                return -1;
              x49 = XVECEXP (x3, 0, 52);
              if (x49 != const_int_rtx[MAX_SAVED_CONST_INT + 28])
                return -1;
              x50 = XVECEXP (x3, 0, 53);
              if (x50 != const_int_rtx[MAX_SAVED_CONST_INT + 29])
                return -1;
              x51 = XVECEXP (x3, 0, 54);
              if (x51 != const_int_rtx[MAX_SAVED_CONST_INT + 30])
                return -1;
              x52 = XVECEXP (x3, 0, 55);
              if (x52 != const_int_rtx[MAX_SAVED_CONST_INT + 31])
                return -1;
              x53 = XVECEXP (x3, 0, 56);
              if (x53 != const_int_rtx[MAX_SAVED_CONST_INT + 56])
                return -1;
              x54 = XVECEXP (x3, 0, 57);
              if (x54 != const_int_rtx[MAX_SAVED_CONST_INT + 57])
                return -1;
              x55 = XVECEXP (x3, 0, 58);
              if (x55 != const_int_rtx[MAX_SAVED_CONST_INT + 58])
                return -1;
              x56 = XVECEXP (x3, 0, 59);
              if (x56 != const_int_rtx[MAX_SAVED_CONST_INT + 59])
                return -1;
              x57 = XVECEXP (x3, 0, 60);
              if (x57 != const_int_rtx[MAX_SAVED_CONST_INT + 60])
                return -1;
              x58 = XVECEXP (x3, 0, 61);
              if (x58 != const_int_rtx[MAX_SAVED_CONST_INT + 61])
                return -1;
              x59 = XVECEXP (x3, 0, 62);
              if (x59 != const_int_rtx[MAX_SAVED_CONST_INT + 62])
                return -1;
              x60 = XVECEXP (x3, 0, 63);
              if (x60 != const_int_rtx[MAX_SAVED_CONST_INT + 63]
                  || pattern1814 (x2, 
E_V32HImode, 
E_V32QImode, 
E_V64QImode) != 0
                  || !
#line 19293 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512))
                return -1;
              return 8302; /* avx512bw_packsswb */

            case 16:
              if (pattern836 (x3, 
10, 
9, 
8) != 0
                  || pattern1508 (x3, 
7, 
6, 
5, 
4, 
11) != 0
                  || pattern1814 (x2, 
E_V8SImode, 
E_V8HImode, 
E_V16HImode) != 0
                  || !
#line 19332 "../../gcc/config/i386/sse.md"
(TARGET_AVX2 && 1 && 1))
                return -1;
              return 8306; /* avx2_packssdw */

            default:
              return -1;
            }

        case VEC_CONCAT:
          switch (pattern525 (x2))
            {
            case 0:
              if (!
#line 25104 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512))
                return -1;
              return 8910; /* *avx512f_zero_extendv8siv8di2_2 */

            case 1:
              if (!
#line 25156 "../../gcc/config/i386/sse.md"
(TARGET_AVX2))
                return -1;
              return 8916; /* *avx2_zero_extendv4siv4di2_2 */

            case 2:
              if (!
#line 25252 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_1))
                return -1;
              return 8930; /* *sse4_1_zero_extendv2siv2di2_4 */

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
      res = recog_298 (x1, insn, pnum_clobbers);
      if (res >= 0)
        return res;
      if (GET_CODE (x5) != SUBREG)
        return -1;
      switch (pattern527 (x2))
        {
        case 0:
          if (!
#line 15035 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512 && ix86_pre_reload_split ()))
            return -1;
          return 7233; /* *avx512bw_permvar_truncv16siv16hi_1_hf */

        case 1:
          if (!
#line 15088 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL && TARGET_AVX512BW && ix86_pre_reload_split ()))
            return -1;
          return 7235; /* *avx512f_permvar_truncv8siv8hi_1_hf */

        default:
          return -1;
        }

    case UNSPEC:
      switch (XVECLEN (x5, 0))
        {
        case 2:
          switch (pattern529 (x2))
            {
            case 0:
              if (!
#line 15010 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512 && ix86_pre_reload_split ()))
                return -1;
              return 7232; /* *avx512bw_permvar_truncv16siv16hi_1 */

            case 1:
              if (!
#line 15272 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL && TARGET_AVX512VBMI
   && ix86_pre_reload_split ()))
                return -1;
              return 7265; /* *avx512f_permvar_truncv16hiv16qi_1 */

            case 2:
              if (!
#line 15067 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL && TARGET_AVX512BW && ix86_pre_reload_split ()))
                return -1;
              return 7234; /* *avx512f_permvar_truncv8siv8hi_1 */

            case 3:
              if (!
#line 15119 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512 && ix86_pre_reload_split ()))
                return -1;
              return 7236; /* *avx512f_vpermvar_truncv8div8si_1 */

            case 4:
              if (!
#line 15191 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VBMI && TARGET_EVEX512 && ix86_pre_reload_split ()))
                return -1;
              return 7252; /* *avx512f_permvar_truncv32hiv32qi_1 */

            case 5:
              if (!
#line 15291 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()))
                return -1;
              return 7266; /* *avx512f_permvar_truncv4div4si_1 */

            default:
              return -1;
            }

        case 1:
          if (XINT (x5, 1) != 149
              || GET_MODE (x5) != E_V8SFmode
              || XVECLEN (x3, 0) != 4
              || pattern835 (x3) != 0
              || !register_operand (operands[0], E_V4SFmode)
              || GET_MODE (x2) != E_V4SFmode)
            return -1;
          x61 = XVECEXP (x5, 0, 0);
          operands[1] = x61;
          if (!register_operand (operands[1], E_V8HImode)
              || !
#line 29076 "../../gcc/config/i386/sse.md"
(TARGET_F16C || TARGET_AVX512VL))
            return -1;
          return 9643; /* vcvtph2ps */

        case 4:
          if (pnum_clobbers == NULL
              || XINT (x5, 1) != 153)
            return -1;
          x62 = XVECEXP (x5, 0, 1);
          if (GET_CODE (x62) != MEM)
            return -1;
          x63 = XEXP (x62, 0);
          if (GET_CODE (x63) != UNSPEC
              || XVECLEN (x63, 0) != 3
              || XINT (x63, 1) != 154)
            return -1;
          x64 = XVECEXP (x5, 0, 2);
          if (GET_CODE (x64) != MEM
              || GET_MODE (x64) != E_BLKmode)
            return -1;
          x65 = XEXP (x64, 0);
          if (GET_CODE (x65) != SCRATCH
              || XVECLEN (x3, 0) != 4
              || pattern835 (x3) != 0)
            return -1;
          x66 = XVECEXP (x63, 0, 1);
          if (!register_operand (x66, E_V4DImode))
            return -1;
          x67 = XVECEXP (x63, 0, 2);
          if (!const1248_operand (x67, E_SImode))
            return -1;
          x61 = XVECEXP (x5, 0, 0);
          switch (GET_CODE (x61))
            {
            case REG:
            case SUBREG:
              operands[2] = x61;
              operands[7] = x62;
              x68 = XVECEXP (x63, 0, 0);
              operands[3] = x68;
              operands[4] = x66;
              operands[6] = x67;
              x69 = XVECEXP (x5, 0, 3);
              operands[5] = x69;
              switch (GET_MODE (operands[0]))
                {
                case E_V4SImode:
                  switch (pattern1834 (x2, 
E_V4SImode, 
E_SImode, 
E_V8SImode))
                    {
                    case 0:
                      if (!(
#line 29404 "../../gcc/config/i386/sse.md"
(TARGET_AVX2) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode)))
                        return -1;
                      *pnum_clobbers = 1;
                      return 9732; /* *avx2_gatherdiv8si_3 */

                    case 1:
                      if (!(
#line 29404 "../../gcc/config/i386/sse.md"
(TARGET_AVX2) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode)))
                        return -1;
                      *pnum_clobbers = 1;
                      return 9734; /* *avx2_gatherdiv8si_3 */

                    default:
                      return -1;
                    }

                case E_V4SFmode:
                  switch (pattern1834 (x2, 
E_V4SFmode, 
E_SFmode, 
E_V8SFmode))
                    {
                    case 0:
                      if (!(
#line 29404 "../../gcc/config/i386/sse.md"
(TARGET_AVX2) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode)))
                        return -1;
                      *pnum_clobbers = 1;
                      return 9733; /* *avx2_gatherdiv8sf_3 */

                    case 1:
                      if (!(
#line 29404 "../../gcc/config/i386/sse.md"
(TARGET_AVX2) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode)))
                        return -1;
                      *pnum_clobbers = 1;
                      return 9735; /* *avx2_gatherdiv8sf_3 */

                    default:
                      return -1;
                    }

                default:
                  return -1;
                }

            case PC:
              operands[6] = x62;
              x68 = XVECEXP (x63, 0, 0);
              operands[2] = x68;
              operands[3] = x66;
              operands[5] = x67;
              x69 = XVECEXP (x5, 0, 3);
              operands[4] = x69;
              switch (GET_MODE (operands[0]))
                {
                case E_V4SImode:
                  switch (pattern1828 (x2, 
E_V4SImode, 
E_SImode, 
E_V8SImode))
                    {
                    case 0:
                      if (!(
#line 29428 "../../gcc/config/i386/sse.md"
(TARGET_AVX2) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode)))
                        return -1;
                      *pnum_clobbers = 1;
                      return 9736; /* *avx2_gatherdiv8si_4 */

                    case 1:
                      if (!(
#line 29428 "../../gcc/config/i386/sse.md"
(TARGET_AVX2) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode)))
                        return -1;
                      *pnum_clobbers = 1;
                      return 9738; /* *avx2_gatherdiv8si_4 */

                    default:
                      return -1;
                    }

                case E_V4SFmode:
                  switch (pattern1828 (x2, 
E_V4SFmode, 
E_SFmode, 
E_V8SFmode))
                    {
                    case 0:
                      if (!(
#line 29428 "../../gcc/config/i386/sse.md"
(TARGET_AVX2) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode)))
                        return -1;
                      *pnum_clobbers = 1;
                      return 9737; /* *avx2_gatherdiv8sf_4 */

                    case 1:
                      if (!(
#line 29428 "../../gcc/config/i386/sse.md"
(TARGET_AVX2) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode)))
                        return -1;
                      *pnum_clobbers = 1;
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

        default:
          return -1;
        }

    default:
      return -1;
    }
}

 int
recog_325 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  operands[0] = x2;
  x3 = XEXP (x1, 1);
  x4 = XEXP (x3, 1);
  operands[2] = x4;
  x5 = XEXP (x3, 0);
  switch (GET_CODE (x5))
    {
    case REG:
    case SUBREG:
    case MEM:
    case VEC_DUPLICATE:
      return recog_273 (x1, insn, pnum_clobbers);

    case NEG:
      x6 = XEXP (x5, 0);
      operands[1] = x6;
      x7 = XEXP (x3, 2);
      switch (GET_CODE (x7))
        {
        case REG:
        case SUBREG:
        case MEM:
        case VEC_DUPLICATE:
          operands[3] = x7;
          switch (GET_MODE (operands[0]))
            {
            case E_V4SFmode:
              if (!register_operand (operands[0], E_V4SFmode)
                  || GET_MODE (x3) != E_V4SFmode
                  || GET_MODE (x5) != E_V4SFmode)
                return -1;
              if (nonimmediate_operand (operands[1], E_V4SFmode)
                  && nonimmediate_operand (operands[2], E_V4SFmode)
                  && nonimmediate_operand (operands[3], E_V4SFmode)
                  && 
#line 6106 "../../gcc/config/i386/sse.md"
(TARGET_FMA || TARGET_FMA4))
                return 3933; /* *fma_fnmadd_v4sf */
              if (!bcst_vector_operand (operands[1], E_V4SFmode)
                  || !bcst_vector_operand (operands[2], E_V4SFmode)
                  || !bcst_vector_operand (operands[3], E_V4SFmode)
                  || !(
#line 6138 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && 1 && 1) && 
#line 5919 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                return -1;
              return 3957; /* *fma_fnmadd_v4sf */

            case E_V2DFmode:
              if (!register_operand (operands[0], E_V2DFmode)
                  || GET_MODE (x3) != E_V2DFmode
                  || GET_MODE (x5) != E_V2DFmode)
                return -1;
              if (nonimmediate_operand (operands[1], E_V2DFmode)
                  && nonimmediate_operand (operands[2], E_V2DFmode)
                  && nonimmediate_operand (operands[3], E_V2DFmode)
                  && 
#line 6106 "../../gcc/config/i386/sse.md"
(TARGET_FMA || TARGET_FMA4))
                return 3934; /* *fma_fnmadd_v2df */
              if (!bcst_vector_operand (operands[1], E_V2DFmode)
                  || !bcst_vector_operand (operands[2], E_V2DFmode)
                  || !bcst_vector_operand (operands[3], E_V2DFmode)
                  || !(
#line 6138 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && 1 && 1) && 
#line 5921 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                return -1;
              return 3968; /* *fma_fnmadd_v2df */

            case E_V8SFmode:
              if (!register_operand (operands[0], E_V8SFmode)
                  || GET_MODE (x3) != E_V8SFmode
                  || GET_MODE (x5) != E_V8SFmode)
                return -1;
              if (nonimmediate_operand (operands[1], E_V8SFmode)
                  && nonimmediate_operand (operands[2], E_V8SFmode)
                  && nonimmediate_operand (operands[3], E_V8SFmode)
                  && 
#line 6106 "../../gcc/config/i386/sse.md"
(TARGET_FMA || TARGET_FMA4))
                return 3935; /* *fma_fnmadd_v8sf */
              if (!bcst_vector_operand (operands[1], E_V8SFmode)
                  || !bcst_vector_operand (operands[2], E_V8SFmode)
                  || !bcst_vector_operand (operands[3], E_V8SFmode)
                  || !(
#line 6138 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && 1 && 1) && 
#line 5919 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                return -1;
              return 3953; /* *fma_fnmadd_v8sf */

            case E_V4DFmode:
              if (!register_operand (operands[0], E_V4DFmode)
                  || GET_MODE (x3) != E_V4DFmode
                  || GET_MODE (x5) != E_V4DFmode)
                return -1;
              if (nonimmediate_operand (operands[1], E_V4DFmode)
                  && nonimmediate_operand (operands[2], E_V4DFmode)
                  && nonimmediate_operand (operands[3], E_V4DFmode)
                  && 
#line 6106 "../../gcc/config/i386/sse.md"
(TARGET_FMA || TARGET_FMA4))
                return 3936; /* *fma_fnmadd_v4df */
              if (!bcst_vector_operand (operands[1], E_V4DFmode)
                  || !bcst_vector_operand (operands[2], E_V4DFmode)
                  || !bcst_vector_operand (operands[3], E_V4DFmode)
                  || !(
#line 6138 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && 1 && 1) && 
#line 5921 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                return -1;
              return 3964; /* *fma_fnmadd_v4df */

            case E_V32HFmode:
              if (pattern866 (x3, 
E_V32HFmode) != 0
                  || !(
#line 6138 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && 1 && 1) && 
#line 5914 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_EVEX512)))
                return -1;
              return 3937; /* *fma_fnmadd_v32hf */

            case E_V16HFmode:
              if (pattern866 (x3, 
E_V16HFmode) != 0
                  || !(
#line 6138 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && 1 && 1) && 
#line 5915 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL)))
                return -1;
              return 3941; /* *fma_fnmadd_v16hf */

            case E_V8HFmode:
              if (pattern866 (x3, 
E_V8HFmode) != 0
                  || !(
#line 6138 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && 1 && 1) && 
#line 5916 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL)))
                return -1;
              return 3945; /* *fma_fnmadd_v8hf */

            case E_V16SFmode:
              if (pattern866 (x3, 
E_V16SFmode) != 0
                  || !(
#line 6138 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && 1 && 1) && 
#line 5918 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                return -1;
              return 3949; /* *fma_fnmadd_v16sf */

            case E_V8DFmode:
              if (pattern866 (x3, 
E_V8DFmode) != 0
                  || !(
#line 6138 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && 1 && 1) && 
#line 5920 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                return -1;
              return 3960; /* *fma_fnmadd_v8df */

            case E_V32BFmode:
              if (pattern926 (x3, 
E_V32BFmode) != 0
                  || !(
#line 32198 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256) && 
#line 565 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_512)))
                return -1;
              return 10638; /* avx10_2_fnmaddnepbf16_v32bf */

            case E_V16BFmode:
              if (pattern926 (x3, 
E_V16BFmode) != 0
                  || !
#line 32198 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
                return -1;
              return 10640; /* avx10_2_fnmaddnepbf16_v16bf */

            case E_V8BFmode:
              if (pattern926 (x3, 
E_V8BFmode) != 0
                  || !
#line 32198 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
                return -1;
              return 10642; /* avx10_2_fnmaddnepbf16_v8bf */

            default:
              return -1;
            }

        case NEG:
          x8 = XEXP (x7, 0);
          operands[3] = x8;
          switch (GET_MODE (operands[0]))
            {
            case E_V4SFmode:
              if (pattern867 (x3, 
E_V4SFmode) != 0)
                return -1;
              if (nonimmediate_operand (operands[1], E_V4SFmode)
                  && nonimmediate_operand (operands[2], E_V4SFmode)
                  && nonimmediate_operand (operands[3], E_V4SFmode)
                  && 
#line 6213 "../../gcc/config/i386/sse.md"
(TARGET_FMA || TARGET_FMA4))
                return 4004; /* *fma_fnmsub_v4sf */
              if (!bcst_vector_operand (operands[1], E_V4SFmode)
                  || !bcst_vector_operand (operands[2], E_V4SFmode)
                  || !bcst_vector_operand (operands[3], E_V4SFmode)
                  || !(
#line 6246 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && 1 && 1) && 
#line 5919 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                return -1;
              return 4040; /* *fma_fnmsub_v4sf */

            case E_V2DFmode:
              if (pattern867 (x3, 
E_V2DFmode) != 0)
                return -1;
              if (nonimmediate_operand (operands[1], E_V2DFmode)
                  && nonimmediate_operand (operands[2], E_V2DFmode)
                  && nonimmediate_operand (operands[3], E_V2DFmode)
                  && 
#line 6213 "../../gcc/config/i386/sse.md"
(TARGET_FMA || TARGET_FMA4))
                return 4008; /* *fma_fnmsub_v2df */
              if (!bcst_vector_operand (operands[1], E_V2DFmode)
                  || !bcst_vector_operand (operands[2], E_V2DFmode)
                  || !bcst_vector_operand (operands[3], E_V2DFmode)
                  || !(
#line 6246 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && 1 && 1) && 
#line 5921 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                return -1;
              return 4051; /* *fma_fnmsub_v2df */

            case E_V8SFmode:
              if (pattern867 (x3, 
E_V8SFmode) != 0)
                return -1;
              if (nonimmediate_operand (operands[1], E_V8SFmode)
                  && nonimmediate_operand (operands[2], E_V8SFmode)
                  && nonimmediate_operand (operands[3], E_V8SFmode)
                  && 
#line 6213 "../../gcc/config/i386/sse.md"
(TARGET_FMA || TARGET_FMA4))
                return 4012; /* *fma_fnmsub_v8sf */
              if (!bcst_vector_operand (operands[1], E_V8SFmode)
                  || !bcst_vector_operand (operands[2], E_V8SFmode)
                  || !bcst_vector_operand (operands[3], E_V8SFmode)
                  || !(
#line 6246 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && 1 && 1) && 
#line 5919 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                return -1;
              return 4036; /* *fma_fnmsub_v8sf */

            case E_V4DFmode:
              if (pattern867 (x3, 
E_V4DFmode) != 0)
                return -1;
              if (nonimmediate_operand (operands[1], E_V4DFmode)
                  && nonimmediate_operand (operands[2], E_V4DFmode)
                  && nonimmediate_operand (operands[3], E_V4DFmode)
                  && 
#line 6213 "../../gcc/config/i386/sse.md"
(TARGET_FMA || TARGET_FMA4))
                return 4016; /* *fma_fnmsub_v4df */
              if (!bcst_vector_operand (operands[1], E_V4DFmode)
                  || !bcst_vector_operand (operands[2], E_V4DFmode)
                  || !bcst_vector_operand (operands[3], E_V4DFmode)
                  || !(
#line 6246 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && 1 && 1) && 
#line 5921 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                return -1;
              return 4047; /* *fma_fnmsub_v4df */

            case E_V32HFmode:
              if (pattern868 (x3, 
E_V32HFmode) != 0
                  || !(
#line 6246 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && 1 && 1) && 
#line 5914 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_EVEX512)))
                return -1;
              return 4020; /* *fma_fnmsub_v32hf */

            case E_V16HFmode:
              if (pattern868 (x3, 
E_V16HFmode) != 0
                  || !(
#line 6246 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && 1 && 1) && 
#line 5915 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL)))
                return -1;
              return 4024; /* *fma_fnmsub_v16hf */

            case E_V8HFmode:
              if (pattern868 (x3, 
E_V8HFmode) != 0
                  || !(
#line 6246 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && 1 && 1) && 
#line 5916 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL)))
                return -1;
              return 4028; /* *fma_fnmsub_v8hf */

            case E_V16SFmode:
              if (pattern868 (x3, 
E_V16SFmode) != 0
                  || !(
#line 6246 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && 1 && 1) && 
#line 5918 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                return -1;
              return 4032; /* *fma_fnmsub_v16sf */

            case E_V8DFmode:
              if (pattern868 (x3, 
E_V8DFmode) != 0
                  || !(
#line 6246 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && 1 && 1) && 
#line 5920 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                return -1;
              return 4043; /* *fma_fnmsub_v8df */

            case E_V32BFmode:
              if (pattern927 (x3, 
E_V32BFmode) != 0
                  || !(
#line 32329 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256) && 
#line 565 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_512)))
                return -1;
              return 10662; /* avx10_2_fnmsubnepbf16_v32bf */

            case E_V16BFmode:
              if (pattern927 (x3, 
E_V16BFmode) != 0
                  || !
#line 32329 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
                return -1;
              return 10664; /* avx10_2_fnmsubnepbf16_v16bf */

            case E_V8BFmode:
              if (pattern927 (x3, 
E_V8BFmode) != 0
                  || !
#line 32329 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
                return -1;
              return 10666; /* avx10_2_fnmsubnepbf16_v8bf */

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
recog_329 (rtx x1 ATTRIBUTE_UNUSED,
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
        return 7640; /* *ashlv16hi3 */
      if (!register_operand (operands[1], E_V16HImode))
        return -1;
      if (nonmemory_operand (operands[2], E_DImode)
          && (
#line 17304 "../../gcc/config/i386/sse.md"
(TARGET_SSE2) && 
#line 775 "../../gcc/config/i386/sse.md"
(TARGET_AVX2)))
        return 7664; /* ashlv16hi3 */
      if (!nonimmediate_operand (operands[2], E_V16HImode)
          || !(
#line 28934 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 686 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 9595; /* avx512vl_ashlvv16hi */

    case 1:
      if (nonimmediate_operand (operands[1], E_V8HImode)
          && nonmemory_operand (operands[2], E_DImode)
          && (
#line 17290 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL) && 
#line 799 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW)))
        return 7644; /* *ashlv8hi3 */
      if (!register_operand (operands[1], E_V8HImode))
        return -1;
      if (nonmemory_operand (operands[2], E_DImode)
          && 
#line 17304 "../../gcc/config/i386/sse.md"
(TARGET_SSE2))
        return 7666; /* ashlv8hi3 */
      if (!nonimmediate_operand (operands[2], E_V8HImode)
          || !(
#line 28934 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 686 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 9591; /* avx512vl_ashlvv8hi */

    case 2:
      if (nonimmediate_operand (operands[1], E_V8SImode)
          && nonmemory_operand (operands[2], E_DImode)
          && 
#line 17290 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))
        return 7648; /* *ashlv8si3 */
      if (!register_operand (operands[1], E_V8SImode))
        return -1;
      if (nonmemory_operand (operands[2], E_DImode)
          && (
#line 17304 "../../gcc/config/i386/sse.md"
(TARGET_SSE2) && 
#line 776 "../../gcc/config/i386/sse.md"
(TARGET_AVX2)))
        return 7668; /* ashlv8si3 */
      if (!nonimmediate_operand (operands[2], E_V8SImode)
          || !
#line 28923 "../../gcc/config/i386/sse.md"
(TARGET_AVX2 && 1))
        return -1;
      return 9571; /* avx2_ashlvv8si */

    case 3:
      if (nonimmediate_operand (operands[1], E_V4SImode)
          && nonmemory_operand (operands[2], E_DImode)
          && 
#line 17290 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))
        return 7652; /* *ashlv4si3 */
      if (!register_operand (operands[1], E_V4SImode))
        return -1;
      if (nonmemory_operand (operands[2], E_DImode)
          && 
#line 17304 "../../gcc/config/i386/sse.md"
(TARGET_SSE2))
        return 7670; /* ashlv4si3 */
      if (!nonimmediate_operand (operands[2], E_V4SImode)
          || !
#line 28923 "../../gcc/config/i386/sse.md"
(TARGET_AVX2 && 1))
        return -1;
      return 9575; /* avx2_ashlvv4si */

    case 4:
      if (nonimmediate_operand (operands[1], E_V4DImode)
          && nonmemory_operand (operands[2], E_DImode)
          && 
#line 17290 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))
        return 7656; /* *ashlv4di3 */
      if (!register_operand (operands[1], E_V4DImode))
        return -1;
      if (nonmemory_operand (operands[2], E_DImode)
          && (
#line 17304 "../../gcc/config/i386/sse.md"
(TARGET_SSE2) && 
#line 777 "../../gcc/config/i386/sse.md"
(TARGET_AVX2)))
        return 7672; /* ashlv4di3 */
      if (!nonimmediate_operand (operands[2], E_V4DImode)
          || !
#line 28923 "../../gcc/config/i386/sse.md"
(TARGET_AVX2 && 1))
        return -1;
      return 9583; /* avx2_ashlvv4di */

    case 5:
      if (nonimmediate_operand (operands[1], E_V2DImode)
          && nonmemory_operand (operands[2], E_DImode)
          && 
#line 17290 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL))
        return 7660; /* *ashlv2di3 */
      if (!register_operand (operands[1], E_V2DImode))
        return -1;
      if (nonmemory_operand (operands[2], E_DImode)
          && 
#line 17304 "../../gcc/config/i386/sse.md"
(TARGET_SSE2))
        return 7674; /* ashlv2di3 */
      if (!nonimmediate_operand (operands[2], E_V2DImode)
          || !
#line 28923 "../../gcc/config/i386/sse.md"
(TARGET_AVX2 && 1))
        return -1;
      return 9587; /* avx2_ashlvv2di */

    case 6:
      if (nonimmediate_operand (operands[1], E_V32HImode)
          && nonmemory_operand (operands[2], E_DImode)
          && (
#line 17378 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 785 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512)))
        return 7680; /* ashlv32hi3 */
      if (!register_operand (operands[1], E_V32HImode)
          || !nonimmediate_operand (operands[2], E_V32HImode)
          || !(
#line 28934 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 686 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 9599; /* avx512bw_ashlvv32hi */

    case 7:
      if (nonimmediate_operand (operands[1], E_V16SImode)
          && nonmemory_operand (operands[2], E_DImode)
          && (
#line 17378 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 785 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return 7684; /* ashlv16si3 */
      if (!register_operand (operands[1], E_V16SImode)
          || !nonimmediate_operand (operands[2], E_V16SImode)
          || !(
#line 28923 "../../gcc/config/i386/sse.md"
(TARGET_AVX2 && 1) && 
#line 804 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
        return -1;
      return 9567; /* avx512f_ashlvv16si */

    case 8:
      if (nonimmediate_operand (operands[1], E_V8DImode)
          && nonmemory_operand (operands[2], E_DImode)
          && (
#line 17378 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 786 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return 7688; /* ashlv8di3 */
      if (!register_operand (operands[1], E_V8DImode)
          || !nonimmediate_operand (operands[2], E_V8DImode)
          || !(
#line 28923 "../../gcc/config/i386/sse.md"
(TARGET_AVX2 && 1) && 
#line 805 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
        return -1;
      return 9579; /* avx512f_ashlvv8di */

    case 9:
      if (register_operand (operands[1], E_V1TImode)
          && const_0_to_255_not_mul_8_operand (operands[2], E_SImode)
          && 
#line 17453 "../../gcc/config/i386/sse.md"
(TARGET_SSE2 && TARGET_64BIT
   && ix86_pre_reload_split ()))
        return 7692; /* *ashlv1ti3_internal */
      if (!const_0_to_255_mul_8_operand (operands[2], E_SImode))
        return -1;
      if (nonimmediate_operand (operands[1], E_V1TImode)
          && (
#line 17597 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 730 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return 7701; /* avx512bw_ashlv1ti3 */
      if (!register_operand (operands[1], E_V1TImode)
          || !
#line 17612 "../../gcc/config/i386/sse.md"
(TARGET_SSE2))
        return -1;
      return 7705; /* sse2_ashlv1ti3 */

    case 10:
      if (!(
#line 17597 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 730 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 7697; /* avx512bw_ashlv4ti3 */

    case 11:
      if (nonimmediate_operand (operands[1], E_V2TImode)
          && (
#line 17597 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 730 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return 7699; /* avx512bw_ashlv2ti3 */
      if (!register_operand (operands[1], E_V2TImode)
          || !(
#line 17612 "../../gcc/config/i386/sse.md"
(TARGET_SSE2) && 
#line 733 "../../gcc/config/i386/sse.md"
(TARGET_AVX2)))
        return -1;
      return 7703; /* avx2_ashlv2ti3 */

    default:
      return -1;
    }
}

 int
recog_334 (rtx x1 ATTRIBUTE_UNUSED,
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
#line 30286 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VPOPCNTDQ) && 
#line 501 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 10129; /* vpopcountv16si */

    case E_V8SImode:
      if (!register_operand (operands[0], E_V8SImode)
          || GET_MODE (x3) != E_V8SImode
          || !nonimmediate_operand (operands[1], E_V8SImode)
          || !(
#line 30286 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VPOPCNTDQ) && 
#line 501 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 10131; /* vpopcountv8si */

    case E_V4SImode:
      if (!register_operand (operands[0], E_V4SImode)
          || GET_MODE (x3) != E_V4SImode
          || !nonimmediate_operand (operands[1], E_V4SImode)
          || !(
#line 30286 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VPOPCNTDQ) && 
#line 501 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 10133; /* vpopcountv4si */

    case E_V8DImode:
      if (!register_operand (operands[0], E_V8DImode)
          || GET_MODE (x3) != E_V8DImode
          || !nonimmediate_operand (operands[1], E_V8DImode)
          || !(
#line 30286 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VPOPCNTDQ) && 
#line 502 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 10135; /* vpopcountv8di */

    case E_V4DImode:
      if (!register_operand (operands[0], E_V4DImode)
          || GET_MODE (x3) != E_V4DImode
          || !nonimmediate_operand (operands[1], E_V4DImode)
          || !(
#line 30286 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VPOPCNTDQ) && 
#line 502 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 10137; /* vpopcountv4di */

    case E_V2DImode:
      if (!register_operand (operands[0], E_V2DImode)
          || GET_MODE (x3) != E_V2DImode
          || !nonimmediate_operand (operands[1], E_V2DImode)
          || !(
#line 30286 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VPOPCNTDQ) && 
#line 502 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 10139; /* vpopcountv2di */

    case E_V64QImode:
      if (!register_operand (operands[0], E_V64QImode)
          || GET_MODE (x3) != E_V64QImode
          || !nonimmediate_operand (operands[1], E_V64QImode)
          || !(
#line 30336 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BITALG) && 
#line 318 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 10149; /* vpopcountv64qi */

    case E_V16QImode:
      if (!register_operand (operands[0], E_V16QImode)
          || GET_MODE (x3) != E_V16QImode
          || !nonimmediate_operand (operands[1], E_V16QImode)
          || !(
#line 30336 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BITALG) && 
#line 318 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 10151; /* vpopcountv16qi */

    case E_V32QImode:
      if (!register_operand (operands[0], E_V32QImode)
          || GET_MODE (x3) != E_V32QImode
          || !nonimmediate_operand (operands[1], E_V32QImode)
          || !(
#line 30336 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BITALG) && 
#line 318 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 10153; /* vpopcountv32qi */

    case E_V32HImode:
      if (!register_operand (operands[0], E_V32HImode)
          || GET_MODE (x3) != E_V32HImode
          || !nonimmediate_operand (operands[1], E_V32HImode)
          || !(
#line 30336 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BITALG) && 
#line 319 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 10155; /* vpopcountv32hi */

    case E_V16HImode:
      if (!register_operand (operands[0], E_V16HImode)
          || GET_MODE (x3) != E_V16HImode
          || !nonimmediate_operand (operands[1], E_V16HImode)
          || !(
#line 30336 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BITALG) && 
#line 319 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 10157; /* vpopcountv16hi */

    case E_V8HImode:
      if (!register_operand (operands[0], E_V8HImode)
          || GET_MODE (x3) != E_V8HImode
          || !nonimmediate_operand (operands[1], E_V8HImode)
          || !(
#line 30336 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BITALG) && 
#line 319 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 10159; /* vpopcountv8hi */

    default:
      return -1;
    }
}

 int
recog_338 (rtx x1 ATTRIBUTE_UNUSED,
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
    case E_V32HFmode:
      if (!register_operand (operands[0], E_V32HFmode)
          || GET_MODE (x3) != E_V32HFmode
          || !vector_operand (operands[1], E_V32HFmode)
          || !(
#line 3065 "../../gcc/config/i386/sse.md"
(TARGET_SSE && 1 && 1) && 
#line 390 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_EVEX512)))
        return -1;
      return 2904; /* avx512fp16_sqrtv32hf2 */

    case E_V16HFmode:
      if (!register_operand (operands[0], E_V16HFmode)
          || GET_MODE (x3) != E_V16HFmode
          || !vector_operand (operands[1], E_V16HFmode)
          || !(
#line 3065 "../../gcc/config/i386/sse.md"
(TARGET_SSE && 1 && 1) && 
#line 391 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL)))
        return -1;
      return 2908; /* avx512fp16_sqrtv16hf2 */

    case E_V8HFmode:
      if (!register_operand (operands[0], E_V8HFmode)
          || GET_MODE (x3) != E_V8HFmode
          || !vector_operand (operands[1], E_V8HFmode)
          || !(
#line 3065 "../../gcc/config/i386/sse.md"
(TARGET_SSE && 1 && 1) && 
#line 392 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL)))
        return -1;
      return 2912; /* avx512fp16_sqrtv8hf2 */

    case E_V16SFmode:
      if (!register_operand (operands[0], E_V16SFmode)
          || GET_MODE (x3) != E_V16SFmode
          || !vector_operand (operands[1], E_V16SFmode)
          || !(
#line 3065 "../../gcc/config/i386/sse.md"
(TARGET_SSE && 1 && 1) && 
#line 393 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
        return -1;
      return 2914; /* avx512f_sqrtv16sf2 */

    case E_V8SFmode:
      if (!register_operand (operands[0], E_V8SFmode)
          || GET_MODE (x3) != E_V8SFmode
          || !vector_operand (operands[1], E_V8SFmode)
          || !(
#line 3065 "../../gcc/config/i386/sse.md"
(TARGET_SSE && 1 && 1) && 
#line 393 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
        return -1;
      return 2918; /* avx_sqrtv8sf2 */

    case E_V4SFmode:
      if (!register_operand (operands[0], E_V4SFmode)
          || GET_MODE (x3) != E_V4SFmode
          || !vector_operand (operands[1], E_V4SFmode)
          || !
#line 3065 "../../gcc/config/i386/sse.md"
(TARGET_SSE && 1 && 1))
        return -1;
      return 2922; /* sse_sqrtv4sf2 */

    case E_V8DFmode:
      if (!register_operand (operands[0], E_V8DFmode)
          || GET_MODE (x3) != E_V8DFmode
          || !vector_operand (operands[1], E_V8DFmode)
          || !(
#line 3065 "../../gcc/config/i386/sse.md"
(TARGET_SSE && 1 && 1) && 
#line 394 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
        return -1;
      return 2924; /* avx512f_sqrtv8df2 */

    case E_V4DFmode:
      if (!register_operand (operands[0], E_V4DFmode)
          || GET_MODE (x3) != E_V4DFmode
          || !vector_operand (operands[1], E_V4DFmode)
          || !(
#line 3065 "../../gcc/config/i386/sse.md"
(TARGET_SSE && 1 && 1) && 
#line 394 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
        return -1;
      return 2928; /* avx_sqrtv4df2 */

    case E_V2DFmode:
      if (!register_operand (operands[0], E_V2DFmode)
          || GET_MODE (x3) != E_V2DFmode
          || !vector_operand (operands[1], E_V2DFmode)
          || !(
#line 3065 "../../gcc/config/i386/sse.md"
(TARGET_SSE && 1 && 1) && 
#line 395 "../../gcc/config/i386/sse.md"
(TARGET_SSE2)))
        return -1;
      return 2932; /* sse2_sqrtv2df2 */

    case E_V32BFmode:
      if (!register_operand (operands[0], E_V32BFmode)
          || GET_MODE (x3) != E_V32BFmode
          || !nonimmediate_operand (operands[1], E_V32BFmode)
          || !(
#line 32387 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256) && 
#line 565 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_512)))
        return -1;
      return 10680; /* avx10_2_sqrtnepbf16_v32bf */

    case E_V16BFmode:
      if (!register_operand (operands[0], E_V16BFmode)
          || GET_MODE (x3) != E_V16BFmode
          || !nonimmediate_operand (operands[1], E_V16BFmode)
          || !
#line 32387 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
        return -1;
      return 10682; /* avx10_2_sqrtnepbf16_v16bf */

    case E_V8BFmode:
      if (!register_operand (operands[0], E_V8BFmode)
          || GET_MODE (x3) != E_V8BFmode
          || !nonimmediate_operand (operands[1], E_V8BFmode)
          || !
#line 32387 "../../gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
        return -1;
      return 10684; /* avx10_2_sqrtnepbf16_v8bf */

    default:
      return -1;
    }
}

 int
recog_344 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  operands[0] = x2;
  x3 = XEXP (x1, 1);
  switch (GET_CODE (x3))
    {
    case AND:
      res = recog_303 (x1, insn, pnum_clobbers);
      if (res >= 0)
        return res;
      break;

    case IOR:
      res = recog_315 (x1, insn, pnum_clobbers);
      if (res >= 0)
        return res;
      break;

    case XOR:
      res = recog_308 (x1, insn, pnum_clobbers);
      if (res >= 0)
        return res;
      break;

    case NOT:
      x4 = XEXP (x3, 0);
      if (GET_CODE (x4) == XOR)
        {
          x5 = XEXP (x4, 0);
          operands[1] = x5;
          x6 = XEXP (x4, 1);
          operands[2] = x6;
          switch (GET_MODE (operands[0]))
            {
            case E_V16SImode:
              if (pattern809 (x3, 
E_V16SImode) == 0
                  && (
#line 18990 "../../gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && (register_operand (operands[1], V16SImode)
       || register_operand (operands[2], V16SImode))) && 
#line 569 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
                return 8070; /* *xnorv16si3 */
              break;

            case E_V8DImode:
              if (pattern809 (x3, 
E_V8DImode) == 0
                  && (
#line 18990 "../../gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && (register_operand (operands[1], V8DImode)
       || register_operand (operands[2], V8DImode))) && 
#line 570 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
                return 8071; /* *xnorv8di3 */
              break;

            case E_V64QImode:
              if (pattern809 (x3, 
E_V64QImode) == 0
                  && (
#line 18990 "../../gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && (register_operand (operands[1], V64QImode)
       || register_operand (operands[2], V64QImode))) && 
#line 571 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512)))
                return 8072; /* *xnorv64qi3 */
              break;

            case E_V32QImode:
              if (pattern809 (x3, 
E_V32QImode) == 0
                  && (
#line 18990 "../../gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && (register_operand (operands[1], V32QImode)
       || register_operand (operands[2], V32QImode))) && 
#line 571 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
                return 8073; /* *xnorv32qi3 */
              break;

            case E_V16QImode:
              if (pattern809 (x3, 
E_V16QImode) == 0
                  && 
#line 18990 "../../gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && (register_operand (operands[1], V16QImode)
       || register_operand (operands[2], V16QImode))))
                return 8074; /* *xnorv16qi3 */
              break;

            case E_V32HImode:
              if (pattern809 (x3, 
E_V32HImode) == 0
                  && (
#line 18990 "../../gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && (register_operand (operands[1], V32HImode)
       || register_operand (operands[2], V32HImode))) && 
#line 572 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512)))
                return 8075; /* *xnorv32hi3 */
              break;

            case E_V16HImode:
              if (pattern809 (x3, 
E_V16HImode) == 0
                  && (
#line 18990 "../../gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && (register_operand (operands[1], V16HImode)
       || register_operand (operands[2], V16HImode))) && 
#line 572 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
                return 8076; /* *xnorv16hi3 */
              break;

            case E_V8HImode:
              if (pattern809 (x3, 
E_V8HImode) == 0
                  && 
#line 18990 "../../gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && (register_operand (operands[1], V8HImode)
       || register_operand (operands[2], V8HImode))))
                return 8077; /* *xnorv8hi3 */
              break;

            case E_V8SImode:
              if (pattern809 (x3, 
E_V8SImode) == 0
                  && (
#line 18990 "../../gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && (register_operand (operands[1], V8SImode)
       || register_operand (operands[2], V8SImode))) && 
#line 573 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
                return 8078; /* *xnorv8si3 */
              break;

            case E_V4SImode:
              if (pattern809 (x3, 
E_V4SImode) == 0
                  && 
#line 18990 "../../gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && (register_operand (operands[1], V4SImode)
       || register_operand (operands[2], V4SImode))))
                return 8079; /* *xnorv4si3 */
              break;

            case E_V4DImode:
              if (pattern809 (x3, 
E_V4DImode) == 0
                  && (
#line 18990 "../../gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && (register_operand (operands[1], V4DImode)
       || register_operand (operands[2], V4DImode))) && 
#line 574 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
                return 8080; /* *xnorv4di3 */
              break;

            case E_V2DImode:
              if (pattern809 (x3, 
E_V2DImode) == 0
                  && 
#line 18990 "../../gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && (register_operand (operands[1], V2DImode)
       || register_operand (operands[2], V2DImode))))
                return 8081; /* *xnorv2di3 */
              break;

            default:
              break;
            }
        }
      break;

    default:
      break;
    }
  operands[1] = x3;
  switch (pattern192 ())
    {
    case 0:
      if ((
#line 13747 "../../gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 336 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
        return 5504; /* *avx512bw_vpternlogv32hf_0 */
      break;

    case 1:
      if ((
#line 13747 "../../gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 336 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
        return 5505; /* *avx512vl_vpternlogv16hf_0 */
      break;

    case 2:
      if (
#line 13747 "../../gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()))
        return 5506; /* *avx512fp16_vpternlogv8hf_0 */
      break;

    case 3:
      if ((
#line 13747 "../../gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 337 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
        return 5507; /* *avx512bw_vpternlogv32bf_0 */
      break;

    case 4:
      if ((
#line 13747 "../../gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 337 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
        return 5508; /* *avx512vl_vpternlogv16bf_0 */
      break;

    case 5:
      if (
#line 13747 "../../gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()))
        return 5509; /* *avx512vl_vpternlogv8bf_0 */
      break;

    case 6:
      if ((
#line 13747 "../../gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 338 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
        return 5510; /* *avx512f_vpternlogv16sf_0 */
      break;

    case 7:
      if ((
#line 13747 "../../gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 338 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
        return 5511; /* *avx512vl_vpternlogv8sf_0 */
      break;

    case 8:
      if (
#line 13747 "../../gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()))
        return 5512; /* *avx512vl_vpternlogv4sf_0 */
      break;

    case 9:
      if ((
#line 13747 "../../gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 339 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
        return 5513; /* *avx512f_vpternlogv8df_0 */
      break;

    case 10:
      if ((
#line 13747 "../../gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 339 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
        return 5514; /* *avx512vl_vpternlogv4df_0 */
      break;

    case 11:
      if ((
#line 13747 "../../gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 339 "../../gcc/config/i386/sse.md"
(TARGET_SSE2)))
        return 5515; /* *avx512vl_vpternlogv2df_0 */
      break;

    default:
      break;
    }
  switch (GET_CODE (x3))
    {
    case AND:
      return recog_314 (x1, insn, pnum_clobbers);

    case IOR:
      return recog_313 (x1, insn, pnum_clobbers);

    case XOR:
      return recog_312 (x1, insn, pnum_clobbers);

    default:
      return -1;
    }
}

 int
recog_358 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 0);
  switch (GET_CODE (x3))
    {
    case REG:
    case SUBREG:
    case MEM:
      res = recog_356 (x1, insn, pnum_clobbers);
      if (res >= 0)
        return res;
      break;

    case STRICT_LOW_PART:
      x4 = XVECEXP (x1, 0, 1);
      if (pattern227 (x4, 
E_CCmode, 
17) == 0)
        {
          x5 = XEXP (x3, 0);
          operands[0] = x5;
          x6 = XEXP (x2, 1);
          operands[1] = x6;
          switch (GET_MODE (operands[0]))
            {
            case E_QImode:
              if (register_operand (operands[0], E_QImode)
                  && const0_operand (operands[1], E_QImode)
                  && 
#line 3450 "../../gcc/config/i386/i386.md"
(reload_completed))
                return 113; /* *movstrictqi_xor */
              break;

            case E_HImode:
              if (register_operand (operands[0], E_HImode)
                  && const0_operand (operands[1], E_HImode)
                  && 
#line 3450 "../../gcc/config/i386/i386.md"
(reload_completed))
                return 114; /* *movstricthi_xor */
              break;

            default:
              break;
            }
        }
      break;

    case PC:
      res = recog_357 (x1, insn, pnum_clobbers);
      if (res >= 0)
        return res;
      break;

    default:
      break;
    }
  x4 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x4) != CLOBBER)
    return -1;
  x7 = XEXP (x4, 0);
  if (GET_CODE (x7) != REG
      || REGNO (x7) != 17
      || GET_MODE (x7) != E_CCmode)
    return -1;
  x6 = XEXP (x2, 1);
  switch (GET_CODE (x6))
    {
    case SUBREG:
      if (maybe_ne (SUBREG_BYTE (x6), 0))
        return -1;
      switch (pattern1038 (x2))
        {
        case 0:
          x8 = XEXP (x6, 0);
          x9 = XEXP (x8, 1);
          operands[2] = x9;
          if (general_operand (operands[2], E_QImode))
            {
              switch (pattern1036 (x2))
                {
                case 0:
                  return 333; /* *addqi_exthi_1 */

                case 1:
                  return 334; /* *addqi_extsi_1 */

                case 2:
                  if (
#line 1164 "../../gcc/config/i386/i386.md"
(TARGET_64BIT))
                    return 335; /* *addqi_extdi_1 */
                  break;

                default:
                  break;
                }
            }
          if (GET_CODE (x9) != SUBREG)
            return -1;
          switch (pattern1819 (x2))
            {
            case 0:
              return 336; /* *addqi_exthi_2 */

            case 1:
              return 338; /* *addqi_extsi_2 */

            case 2:
              if (!
#line 1164 "../../gcc/config/i386/i386.md"
(TARGET_64BIT))
                return -1;
              return 340; /* *addqi_extdi_2 */

            default:
              return -1;
            }

        case 1:
          x8 = XEXP (x6, 0);
          x9 = XEXP (x8, 1);
          if (GET_CODE (x9) == SUBREG)
            {
              switch (pattern1819 (x2))
                {
                case 0:
                  return 337; /* *subqi_exthi_2 */

                case 1:
                  return 339; /* *subqi_extsi_2 */

                case 2:
                  if (
#line 1164 "../../gcc/config/i386/i386.md"
(TARGET_64BIT))
                    return 341; /* *subqi_extdi_2 */
                  break;

                default:
                  break;
                }
            }
          operands[2] = x9;
          if (!general_operand (operands[2], E_QImode))
            return -1;
          switch (pattern1036 (x2))
            {
            case 0:
              return 422; /* *subqi_exthi_1 */

            case 1:
              return 423; /* *subqi_extsi_1 */

            case 2:
              if (!
#line 1164 "../../gcc/config/i386/i386.md"
(TARGET_64BIT))
                return -1;
              return 424; /* *subqi_extdi_1 */

            default:
              return -1;
            }

        case 2:
          x8 = XEXP (x6, 0);
          x9 = XEXP (x8, 1);
          operands[2] = x9;
          if (general_operand (operands[2], E_QImode))
            {
              switch (pattern1036 (x2))
                {
                case 0:
                  return 773; /* *andqi_exthi_1 */

                case 1:
                  return 776; /* *andqi_extsi_1 */

                case 2:
                  if (
#line 1164 "../../gcc/config/i386/i386.md"
(TARGET_64BIT))
                    return 779; /* *andqi_extdi_1 */
                  break;

                default:
                  break;
                }
            }
          if (GET_CODE (x9) != SUBREG)
            return -1;
          switch (pattern1819 (x2))
            {
            case 0:
              return 791; /* *andqi_exthi_2 */

            case 1:
              return 794; /* *andqi_extsi_2 */

            case 2:
              if (!
#line 1164 "../../gcc/config/i386/i386.md"
(TARGET_64BIT))
                return -1;
              return 797; /* *andqi_extdi_2 */

            default:
              return -1;
            }

        case 3:
          x8 = XEXP (x6, 0);
          x9 = XEXP (x8, 1);
          operands[2] = x9;
          if (general_operand (operands[2], E_QImode))
            {
              switch (pattern1036 (x2))
                {
                case 0:
                  return 774; /* *iorqi_exthi_1 */

                case 1:
                  return 777; /* *iorqi_extsi_1 */

                case 2:
                  if (
#line 1164 "../../gcc/config/i386/i386.md"
(TARGET_64BIT))
                    return 780; /* *iorqi_extdi_1 */
                  break;

                default:
                  break;
                }
            }
          if (GET_CODE (x9) != SUBREG)
            return -1;
          switch (pattern1819 (x2))
            {
            case 0:
              return 792; /* *iorqi_exthi_2 */

            case 1:
              return 795; /* *iorqi_extsi_2 */

            case 2:
              if (!
#line 1164 "../../gcc/config/i386/i386.md"
(TARGET_64BIT))
                return -1;
              return 798; /* *iorqi_extdi_2 */

            default:
              return -1;
            }

        case 4:
          x8 = XEXP (x6, 0);
          x9 = XEXP (x8, 1);
          operands[2] = x9;
          if (general_operand (operands[2], E_QImode))
            {
              switch (pattern1036 (x2))
                {
                case 0:
                  return 775; /* *xorqi_exthi_1 */

                case 1:
                  return 778; /* *xorqi_extsi_1 */

                case 2:
                  if (
#line 1164 "../../gcc/config/i386/i386.md"
(TARGET_64BIT))
                    return 781; /* *xorqi_extdi_1 */
                  break;

                default:
                  break;
                }
            }
          if (GET_CODE (x9) != SUBREG)
            return -1;
          switch (pattern1819 (x2))
            {
            case 0:
              return 793; /* *xorqi_exthi_2 */

            case 1:
              return 796; /* *xorqi_extsi_2 */

            case 2:
              if (!
#line 1164 "../../gcc/config/i386/i386.md"
(TARGET_64BIT))
                return -1;
              return 799; /* *xorqi_extdi_2 */

            default:
              return -1;
            }

        case 5:
          return 988; /* *negqi_exthi_1 */

        case 6:
          return 989; /* *negqi_extsi_1 */

        case 7:
          if (!
#line 1164 "../../gcc/config/i386/i386.md"
(TARGET_64BIT))
            return -1;
          return 990; /* *negqi_extdi_1 */

        case 8:
          return 1119; /* *ashlqi_exthi_1 */

        case 9:
          return 1120; /* *ashlqi_extsi_1 */

        case 10:
          if (!
#line 1164 "../../gcc/config/i386/i386.md"
(TARGET_64BIT))
            return -1;
          return 1121; /* *ashlqi_extdi_1 */

        case 11:
          operands[0] = x3;
          switch (pattern1234 (x6))
            {
            case 0:
              if ((
#line 16757 "../../gcc/config/i386/i386.md"
(UINTVAL (operands[2]) < 4 * BITS_PER_UNIT) && 
#line 1235 "../../gcc/config/i386/i386.md"
(!TARGET_64BIT)))
                return 1138; /* lshrdi3_doubleword_lowpart */
              break;

            case 1:
              if ((
#line 16757 "../../gcc/config/i386/i386.md"
(UINTVAL (operands[2]) < 8 * BITS_PER_UNIT) && 
#line 1236 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return 1140; /* lshrti3_doubleword_lowpart */
              break;

            default:
              break;
            }
          x8 = XEXP (x6, 0);
          if (GET_MODE (x8) != E_QImode)
            return -1;
          switch (pattern1037 (x2))
            {
            case 0:
              return 1238; /* *lshrqi_exthi_1 */

            case 1:
              return 1240; /* *lshrqi_extsi_1 */

            case 2:
              if (!
#line 1164 "../../gcc/config/i386/i386.md"
(TARGET_64BIT))
                return -1;
              return 1242; /* *lshrqi_extdi_1 */

            default:
              return -1;
            }

        case 12:
          operands[0] = x3;
          switch (pattern1234 (x6))
            {
            case 0:
              if ((
#line 16757 "../../gcc/config/i386/i386.md"
(UINTVAL (operands[2]) < 4 * BITS_PER_UNIT) && 
#line 1235 "../../gcc/config/i386/i386.md"
(!TARGET_64BIT)))
                return 1139; /* ashrdi3_doubleword_lowpart */
              break;

            case 1:
              if ((
#line 16757 "../../gcc/config/i386/i386.md"
(UINTVAL (operands[2]) < 8 * BITS_PER_UNIT) && 
#line 1236 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return 1141; /* ashrti3_doubleword_lowpart */
              break;

            default:
              break;
            }
          x8 = XEXP (x6, 0);
          if (GET_MODE (x8) != E_QImode)
            return -1;
          switch (pattern1037 (x2))
            {
            case 0:
              return 1239; /* *ashrqi_exthi_1 */

            case 1:
              return 1241; /* *ashrqi_extsi_1 */

            case 2:
              if (!
#line 1164 "../../gcc/config/i386/i386.md"
(TARGET_64BIT))
                return -1;
              return 1243; /* *ashrqi_extdi_1 */

            default:
              return -1;
            }

        default:
          return -1;
        }

    case CONST_INT:
      if (GET_CODE (x3) != ZERO_EXTRACT)
        return -1;
      x10 = XEXP (x3, 1);
      if (x10 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
        return -1;
      x5 = XEXP (x3, 0);
      operands[0] = x5;
      x11 = XEXP (x3, 2);
      operands[1] = x11;
      switch (XWINT (x6, 0))
        {
        case 0L:
          switch (GET_CODE (operands[1]))
            {
            case REG:
            case SUBREG:
              if (!register_operand (operands[1], E_QImode)
                  || GET_MODE (x3) != E_HImode)
                return -1;
              switch (GET_MODE (operands[0]))
                {
                case E_QImode:
                  if (!nonimmediate_operand (operands[0], E_QImode)
                      || !
#line 18963 "../../gcc/config/i386/i386.md"
(TARGET_USE_BT && ix86_pre_reload_split ()))
                    return -1;
                  return 1411; /* *btrqi_2 */

                case E_HImode:
                  if (!nonimmediate_operand (operands[0], E_HImode)
                      || !
#line 18963 "../../gcc/config/i386/i386.md"
(TARGET_USE_BT && ix86_pre_reload_split ()))
                    return -1;
                  return 1412; /* *btrhi_2 */

                default:
                  return -1;
                }

            case CONST_INT:
              if (!const_0_to_63_operand (operands[1], E_QImode)
                  || GET_MODE (x3) != E_DImode
                  || !nonimmediate_operand (operands[0], E_DImode)
                  || !
#line 19027 "../../gcc/config/i386/i386.md"
(TARGET_64BIT && (TARGET_USE_BT || reload_completed)))
                return -1;
              return 1414; /* *btrq_imm */

            default:
              return -1;
            }

        case 1L:
          if (GET_MODE (x3) != E_DImode
              || !nonimmediate_operand (operands[0], E_DImode)
              || !const_0_to_63_operand (operands[1], E_QImode)
              || !
#line 19014 "../../gcc/config/i386/i386.md"
(TARGET_64BIT && (TARGET_USE_BT || reload_completed)))
            return -1;
          return 1413; /* *btsq_imm */

        default:
          return -1;
        }

    default:
      return -1;
    }
}

 int
recog_369 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12;
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
          switch (pattern342 (x3))
            {
            case 0:
              if (!
#line 8144 "../../gcc/config/i386/i386.md"
(TARGET_APX_NDD && true
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
                return -1;
              return 393; /* *subqi_1_zexthi */

            case 1:
              if (!
#line 8144 "../../gcc/config/i386/i386.md"
(TARGET_APX_NDD && true
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
                return -1;
              return 395; /* *subqi_1_zextsi */

            case 2:
              if (!
#line 8158 "../../gcc/config/i386/i386.md"
(TARGET_APX_NDD && true
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
                return -1;
              return 399; /* *subhi_1_zextsi */

            case 3:
              if (!
#line 8144 "../../gcc/config/i386/i386.md"
(TARGET_APX_NDD && true
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
                return -1;
              return 397; /* *subqi_1_zextdi */

            case 4:
              if (!
#line 8158 "../../gcc/config/i386/i386.md"
(TARGET_APX_NDD && true
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
                return -1;
              return 401; /* *subhi_1_zextdi */

            case 5:
              if (!
#line 8173 "../../gcc/config/i386/i386.md"
(TARGET_64BIT
   && ix86_binary_operator_ok (MINUS, SImode, operands, TARGET_APX_NDD)))
                return -1;
              return 402; /* *subsi_1_zext */

            default:
              return -1;
            }

        case LTU:
        case UNLT:
          switch (pattern1421 (x3))
            {
            case 0:
              if (!nonimmediate_operand (operands[1], E_QImode)
                  || !ix86_carry_flag_operator (operands[2], E_QImode)
                  || !
#line 9440 "../../gcc/config/i386/i386.md"
(TARGET_APX_NDD))
                return -1;
              return 505; /* *subqi3_carry_zexthi_0 */

            case 1:
              if (!nonimmediate_operand (operands[1], E_QImode)
                  || !ix86_carry_flag_operator (operands[2], E_QImode)
                  || !
#line 9440 "../../gcc/config/i386/i386.md"
(TARGET_APX_NDD))
                return -1;
              return 506; /* *subqi3_carry_zextsi_0 */

            case 2:
              if (!nonimmediate_operand (operands[1], E_HImode)
                  || !ix86_carry_flag_operator (operands[2], E_HImode)
                  || !
#line 9455 "../../gcc/config/i386/i386.md"
(TARGET_APX_NDD))
                return -1;
              return 508; /* *subhi3_carry_zextsi_0 */

            case 3:
              if (!nonimmediate_operand (operands[1], E_QImode)
                  || !ix86_carry_flag_operator (operands[2], E_QImode)
                  || !
#line 9440 "../../gcc/config/i386/i386.md"
(TARGET_APX_NDD))
                return -1;
              return 507; /* *subqi3_carry_zextdi_0 */

            case 4:
              if (!nonimmediate_operand (operands[1], E_HImode)
                  || !ix86_carry_flag_operator (operands[2], E_HImode)
                  || !
#line 9455 "../../gcc/config/i386/i386.md"
(TARGET_APX_NDD))
                return -1;
              return 509; /* *subhi3_carry_zextdi_0 */

            case 5:
              if (!nonimmediate_operand (operands[1], E_SImode)
                  || !ix86_carry_flag_operator (operands[2], E_SImode)
                  || !
#line 9470 "../../gcc/config/i386/i386.md"
(TARGET_64BIT))
                return -1;
              return 510; /* *subsi3_carry_zext_0 */

            default:
              return -1;
            }

        case GE:
        case GEU:
          switch (pattern1421 (x3))
            {
            case 0:
              if (!nonimmediate_operand (operands[1], E_QImode)
                  || !ix86_carry_flag_unset_operator (operands[2], E_QImode)
                  || !
#line 9488 "../../gcc/config/i386/i386.md"
(TARGET_APX_NDD))
                return -1;
              return 511; /* *subqi3_carry_zexthi_0r */

            case 1:
              if (!nonimmediate_operand (operands[1], E_QImode)
                  || !ix86_carry_flag_unset_operator (operands[2], E_QImode)
                  || !
#line 9488 "../../gcc/config/i386/i386.md"
(TARGET_APX_NDD))
                return -1;
              return 512; /* *subqi3_carry_zextsi_0r */

            case 2:
              if (!nonimmediate_operand (operands[1], E_HImode)
                  || !ix86_carry_flag_unset_operator (operands[2], E_HImode)
                  || !
#line 9503 "../../gcc/config/i386/i386.md"
(TARGET_APX_NDD))
                return -1;
              return 514; /* *subhi3_carry_zextsi_0r */

            case 3:
              if (!nonimmediate_operand (operands[1], E_QImode)
                  || !ix86_carry_flag_unset_operator (operands[2], E_QImode)
                  || !
#line 9488 "../../gcc/config/i386/i386.md"
(TARGET_APX_NDD))
                return -1;
              return 513; /* *subqi3_carry_zextdi_0r */

            case 4:
              if (!nonimmediate_operand (operands[1], E_HImode)
                  || !ix86_carry_flag_unset_operator (operands[2], E_HImode)
                  || !
#line 9503 "../../gcc/config/i386/i386.md"
(TARGET_APX_NDD))
                return -1;
              return 515; /* *subhi3_carry_zextdi_0r */

            case 5:
              if (!nonimmediate_operand (operands[1], E_SImode)
                  || !ix86_carry_flag_unset_operator (operands[2], E_SImode)
                  || !
#line 9518 "../../gcc/config/i386/i386.md"
(TARGET_64BIT))
                return -1;
              return 516; /* *subsi3_carry_zext_0r */

            default:
              return -1;
            }

        default:
          return -1;
        }

    case MINUS:
      x7 = XEXP (x5, 1);
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
          x10 = XEXP (x5, 0);
          operands[1] = x10;
          x6 = XEXP (x4, 1);
          operands[2] = x6;
          switch (pattern1152 (x3))
            {
            case 0:
              if (pattern1748 (x5, 
E_QImode) != 0
                  || !
#line 9380 "../../gcc/config/i386/i386.md"
(TARGET_APX_NDD
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
                return -1;
              return 499; /* *subqi3_carry_zexthi */

            case 1:
              if (pattern1748 (x5, 
E_QImode) != 0
                  || !
#line 9380 "../../gcc/config/i386/i386.md"
(TARGET_APX_NDD
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
                return -1;
              return 500; /* *subqi3_carry_zextsi */

            case 2:
              if (pattern1748 (x5, 
E_HImode) != 0
                  || !
#line 9400 "../../gcc/config/i386/i386.md"
(TARGET_APX_NDD
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
                return -1;
              return 502; /* *subhi3_carry_zextsi */

            case 3:
              if (pattern1748 (x5, 
E_QImode) != 0
                  || !
#line 9380 "../../gcc/config/i386/i386.md"
(TARGET_APX_NDD
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
                return -1;
              return 501; /* *subqi3_carry_zextdi */

            case 4:
              if (pattern1748 (x5, 
E_HImode) != 0
                  || !
#line 9400 "../../gcc/config/i386/i386.md"
(TARGET_APX_NDD
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
                return -1;
              return 503; /* *subhi3_carry_zextdi */

            case 5:
              if (pattern1748 (x5, 
E_SImode) != 0
                  || !
#line 9420 "../../gcc/config/i386/i386.md"
(TARGET_64BIT
   && ix86_binary_operator_ok (MINUS, SImode, operands, TARGET_APX_NDD)))
                return -1;
              return 504; /* *subsi3_carry_zext */

            default:
              return -1;
            }

        default:
          return -1;
        }

    case CONST_INT:
      if (!register_operand (operands[0], E_DImode)
          || GET_MODE (x3) != E_DImode
          || GET_MODE (x4) != E_SImode)
        return -1;
      x6 = XEXP (x4, 1);
      if (GET_MODE (x6) != E_SImode)
        return -1;
      switch (XWINT (x5, 0))
        {
        case 63L:
          if (GET_CODE (x6) != SUBREG
              || maybe_ne (SUBREG_BYTE (x6), 0))
            return -1;
          x11 = XEXP (x6, 0);
          if (GET_CODE (x11) != CLZ
              || GET_MODE (x11) != E_DImode)
            return -1;
          x12 = XEXP (x11, 0);
          operands[1] = x12;
          if (!nonimmediate_operand (operands[1], E_DImode)
              || !
#line 21253 "../../gcc/config/i386/i386.md"
(!TARGET_LZCNT && TARGET_64BIT))
            return -1;
          return 1526; /* bsr_rex64_1_zext */

        case 31L:
          if (GET_CODE (x6) != CLZ)
            return -1;
          x11 = XEXP (x6, 0);
          operands[1] = x11;
          if (!nonimmediate_operand (operands[1], E_SImode)
              || !
#line 21293 "../../gcc/config/i386/i386.md"
(!TARGET_LZCNT && TARGET_64BIT))
            return -1;
          return 1529; /* bsr_zext_1 */

        default:
          return -1;
        }

    default:
      return -1;
    }
}

 int
recog_378 (rtx x1 ATTRIBUTE_UNUSED,
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
  if (!rtx_equal_p (x4, operands[1]))
    return -1;
  x5 = XEXP (x2, 0);
  if (GET_MODE (x5) != E_CCCmode
      || GET_MODE (x3) != E_CCCmode)
    return -1;
  x6 = XVECEXP (x1, 0, 1);
  switch (GET_CODE (x6))
    {
    case CLOBBER:
      x7 = XEXP (x6, 0);
      operands[0] = x7;
      x8 = XEXP (x3, 0);
      switch (pattern951 (x8))
        {
        case 0:
          if (!
#line 9931 "../../gcc/config/i386/i386.md"
(!(MEM_P (operands[1]) && MEM_P (operands[2]))))
            return -1;
          return 534; /* *addqi3_cconly_overflow_1 */

        case 1:
          if (!
#line 9931 "../../gcc/config/i386/i386.md"
(!(MEM_P (operands[1]) && MEM_P (operands[2]))))
            return -1;
          return 535; /* *addhi3_cconly_overflow_1 */

        case 2:
          if (!
#line 9931 "../../gcc/config/i386/i386.md"
(!(MEM_P (operands[1]) && MEM_P (operands[2]))))
            return -1;
          return 536; /* *addsi3_cconly_overflow_1 */

        case 3:
          if (!(
#line 9931 "../../gcc/config/i386/i386.md"
(!(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 1161 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return -1;
          return 537; /* *adddi3_cconly_overflow_1 */

        default:
          return -1;
        }

    case SET:
      x7 = XEXP (x6, 0);
      operands[0] = x7;
      x9 = XEXP (x6, 1);
      switch (GET_CODE (x9))
        {
        case PLUS:
          x10 = XEXP (x9, 0);
          if (!rtx_equal_p (x10, operands[1]))
            return -1;
          x11 = XEXP (x9, 1);
          if (!rtx_equal_p (x11, operands[2]))
            return -1;
          x8 = XEXP (x3, 0);
          switch (GET_MODE (x8))
            {
            case E_QImode:
              if (pattern1423 (x9, 
E_QImode) != 0
                  || !
#line 9949 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (PLUS, QImode, operands, TARGET_APX_NDD)))
                return -1;
              return 538; /* addqi3_cc_overflow_1 */

            case E_HImode:
              if (pattern1423 (x9, 
E_HImode) != 0
                  || !
#line 9949 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (PLUS, HImode, operands, TARGET_APX_NDD)))
                return -1;
              return 539; /* addhi3_cc_overflow_1 */

            case E_SImode:
              if (pattern1424 (x9, 
E_SImode) != 0
                  || !
#line 9949 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (PLUS, SImode, operands, TARGET_APX_NDD)))
                return -1;
              return 540; /* addsi3_cc_overflow_1 */

            case E_DImode:
              if (pattern1424 (x9, 
E_DImode) != 0
                  || !(
#line 9949 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (PLUS, DImode, operands, TARGET_APX_NDD)) && 
#line 1161 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return -1;
              return 541; /* adddi3_cc_overflow_1 */

            case E_TImode:
              if (pattern1661 (x9, 
E_TImode) != 0
                  || !(
#line 10081 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (PLUS, TImode, operands, TARGET_APX_NDD)) && 
#line 1236 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return -1;
              return 553; /* *addti3_doubleword_cc_overflow_1 */

            default:
              return -1;
            }

        case ZERO_EXTEND:
          if (pattern1426 (x1, 
PLUS) != 0
              || !
#line 10007 "../../gcc/config/i386/i386.md"
(TARGET_64BIT
   && ix86_binary_operator_ok (PLUS, SImode, operands, TARGET_APX_NDD)))
            return -1;
          return 542; /* *addsi3_zext_cc_overflow_1 */

        default:
          return -1;
        }

    default:
      return -1;
    }
}

 int
recog_381 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) != REG
      || REGNO (x3) != 17)
    return -1;
  x4 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x4) != SET)
    return -1;
  x5 = XEXP (x2, 1);
  x6 = XEXP (x5, 0);
  x7 = XEXP (x6, 1);
  operands[2] = x7;
  x8 = XEXP (x4, 0);
  operands[0] = x8;
  x9 = XEXP (x4, 1);
  switch (GET_CODE (x9))
    {
    case AND:
      x10 = XEXP (x9, 0);
      if (!rtx_equal_p (x10, operands[1]))
        return -1;
      x11 = XEXP (x9, 1);
      if (!rtx_equal_p (x11, operands[2]))
        return -1;
      switch (GET_MODE (x6))
        {
        case E_DImode:
          if (!nonimmediate_operand (operands[1], E_DImode)
              || !x86_64_szext_general_operand (operands[2], E_DImode)
              || !nonimmediate_operand (operands[0], E_DImode)
              || GET_MODE (x9) != E_DImode
              || !
#line 12908 "../../gcc/config/i386/i386.md"
(TARGET_64BIT
   && ix86_match_ccmode
	(insn,
	 /* If we are going to emit andl instead of andq, and the operands[2]
	    constant might have the SImode sign bit set, make sure the sign
	    flag isn't tested, because the instruction will set the sign flag
	    based on bit 31 rather than bit 63.  If it isn't CONST_INT,
	    conservatively assume it might have bit 31 set.  */
	 (satisfies_constraint_Z (operands[2])
	  && (!CONST_INT_P (operands[2])
	      || val_signbit_known_set_p (SImode, INTVAL (operands[2]))))
	 ? CCZmode : CCNOmode)
   && ix86_binary_operator_ok (AND, DImode, operands, TARGET_APX_NDD)))
            return -1;
          return 749; /* *anddi_2 */

        case E_QImode:
          if (pattern1423 (x9, 
E_QImode) != 0)
            return -1;
          if (
#line 12959 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (AND, QImode, operands, TARGET_APX_NDD)
   && ix86_match_ccmode (insn,
			 CONST_INT_P (operands[2])
			 && INTVAL (operands[2]) >= 0 ? CCNOmode : CCZmode)))
            return 751; /* *andqi_2_maybe_si */
          if (!
#line 13001 "../../gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && ix86_binary_operator_ok (AND, QImode, operands, TARGET_APX_NDD)))
            return -1;
          return 752; /* *andqi_2 */

        case E_HImode:
          if (pattern1423 (x9, 
E_HImode) != 0
              || !
#line 13001 "../../gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && ix86_binary_operator_ok (AND, HImode, operands, TARGET_APX_NDD)))
            return -1;
          return 753; /* *andhi_2 */

        case E_SImode:
          if (pattern1424 (x9, 
E_SImode) != 0
              || !
#line 13001 "../../gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && ix86_binary_operator_ok (AND, SImode, operands, TARGET_APX_NDD)))
            return -1;
          return 754; /* *andsi_2 */

        default:
          return -1;
        }

    case ZERO_EXTEND:
      if (pattern1426 (x1, 
AND) != 0
          || !
#line 12941 "../../gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_match_ccmode (insn, CCNOmode)
   && ix86_binary_operator_ok (AND, SImode, operands, TARGET_APX_NDD)))
        return -1;
      return 750; /* *andsi_2_zext */

    default:
      return -1;
    }
}

 int
recog_386 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12, x13;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) != REG
      || REGNO (x3) != 17)
    return -1;
  x4 = XEXP (x2, 1);
  x5 = XEXP (x4, 1);
  switch (GET_CODE (x5))
    {
    case REG:
    case SUBREG:
    case MEM:
      operands[1] = x5;
      x6 = XEXP (x4, 0);
      x7 = XEXP (x6, 0);
      operands[2] = x7;
      x8 = XVECEXP (x1, 0, 1);
      switch (GET_CODE (x8))
        {
        case CLOBBER:
          x9 = XEXP (x8, 0);
          operands[0] = x9;
          switch (GET_MODE (x6))
            {
            case E_QImode:
              if (!general_operand (operands[2], E_QImode)
                  || !nonimmediate_operand (operands[1], E_QImode)
                  || !scratch_operand (operands[0], E_QImode)
                  || !
#line 7225 "../../gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCZmode)
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
                return -1;
              return 314; /* *addqi_3 */

            case E_HImode:
              if (!general_operand (operands[2], E_HImode)
                  || !nonimmediate_operand (operands[1], E_HImode)
                  || !scratch_operand (operands[0], E_HImode)
                  || !
#line 7225 "../../gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCZmode)
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
                return -1;
              return 315; /* *addhi_3 */

            case E_SImode:
              if (!x86_64_general_operand (operands[2], E_SImode)
                  || !nonimmediate_operand (operands[1], E_SImode)
                  || !scratch_operand (operands[0], E_SImode)
                  || !
#line 7225 "../../gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCZmode)
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
                return -1;
              return 316; /* *addsi_3 */

            case E_DImode:
              if (!x86_64_general_operand (operands[2], E_DImode)
                  || !nonimmediate_operand (operands[1], E_DImode)
                  || !scratch_operand (operands[0], E_DImode)
                  || !(
#line 7225 "../../gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCZmode)
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 1161 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return -1;
              return 317; /* *adddi_3 */

            default:
              return -1;
            }

        case SET:
          x10 = XEXP (x8, 1);
          if (GET_CODE (x10) != ZERO_EXTEND
              || pattern1237 (x1, 
PLUS) != 0
              || !x86_64_general_operand (operands[2], E_SImode)
              || !nonimmediate_operand (operands[1], E_SImode))
            return -1;
          x9 = XEXP (x8, 0);
          operands[0] = x9;
          if (!register_operand (operands[0], E_DImode))
            return -1;
          x11 = XEXP (x10, 0);
          x12 = XEXP (x11, 0);
          if (!rtx_equal_p (x12, operands[1]))
            return -1;
          x13 = XEXP (x11, 1);
          if (!rtx_equal_p (x13, operands[2])
              || !
#line 7274 "../../gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_match_ccmode (insn, CCZmode)
   && ix86_binary_operator_ok (PLUS, SImode, operands, TARGET_APX_NDD)))
            return -1;
          return 318; /* *addsi_3_zext */

        default:
          return -1;
        }

    case CONST_INT:
      if (XWINT (x5, 0) != 0L)
        return -1;
      x8 = XVECEXP (x1, 0, 1);
      if (GET_CODE (x8) != SET)
        return -1;
      x6 = XEXP (x4, 0);
      x7 = XEXP (x6, 0);
      operands[1] = x7;
      x9 = XEXP (x8, 0);
      operands[0] = x9;
      x10 = XEXP (x8, 1);
      switch (GET_CODE (x10))
        {
        case NEG:
          switch (pattern1238 (x1))
            {
            case 0:
              if (!
#line 14417 "../../gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && ix86_unary_operator_ok (NEG, QImode, operands, TARGET_APX_NDD)))
                return -1;
              return 975; /* *negqi_2 */

            case 1:
              if (!
#line 14417 "../../gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && ix86_unary_operator_ok (NEG, HImode, operands, TARGET_APX_NDD)))
                return -1;
              return 976; /* *neghi_2 */

            case 2:
              if (!
#line 14417 "../../gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && ix86_unary_operator_ok (NEG, SImode, operands, TARGET_APX_NDD)))
                return -1;
              return 977; /* *negsi_2 */

            case 3:
              if (!(
#line 14417 "../../gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && ix86_unary_operator_ok (NEG, DImode, operands, TARGET_APX_NDD)) && 
#line 1161 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return -1;
              return 978; /* *negdi_2 */

            default:
              return -1;
            }

        case ZERO_EXTEND:
          if (pattern1239 (x1, 
NEG) != 0
              || !
#line 14434 "../../gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_match_ccmode (insn, CCGOCmode)
   && ix86_unary_operator_ok (NEG, SImode, operands, TARGET_APX_NDD)))
            return -1;
          return 979; /* *negsi_2_zext */

        default:
          return -1;
        }

    default:
      return -1;
    }
}

 int
recog_390 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  int res ATTRIBUTE_UNUSED;
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
      res = recog_389 (x1, insn, pnum_clobbers);
      if (res >= 0)
        return res;
      if (GET_CODE (x4) != SUBREG
          || pattern817 (x4) != 0)
        return -1;
      x5 = XVECEXP (x1, 0, 1);
      if (pattern227 (x5, 
E_CCmode, 
17) != 0
          || GET_MODE (x3) != E_QImode
          || !nonimmediate_operand (operands[1], E_QImode))
        return -1;
      x6 = XEXP (x4, 0);
      x7 = XEXP (x6, 0);
      operands[2] = x7;
      if (!int248_register_operand (operands[2], E_VOIDmode))
        return -1;
      x8 = XEXP (x2, 0);
      switch (GET_CODE (x8))
        {
        case STRICT_LOW_PART:
          x9 = XEXP (x8, 0);
          operands[0] = x9;
          if (!register_operand (operands[0], E_QImode))
            return -1;
          switch (pattern1795 ())
            {
            case 0:
              if (!
#line 8215 "../../gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)))
                return -1;
              return 405; /* *subqi_exthi_1_slp */

            case 1:
              if (!
#line 8215 "../../gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)))
                return -1;
              return 406; /* *subqi_extsi_1_slp */

            case 2:
              if (!(
#line 8215 "../../gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)) && 
#line 1164 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return -1;
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
          switch (pattern1795 ())
            {
            case 0:
              return 416; /* *subqi_exthi_0 */

            case 1:
              return 417; /* *subqi_extsi_0 */

            case 2:
              if (!
#line 1164 "../../gcc/config/i386/i386.md"
(TARGET_64BIT))
                return -1;
              return 418; /* *subqi_extdi_0 */

            default:
              return -1;
            }

        default:
          return -1;
        }

    case ZERO_EXTEND:
      x5 = XVECEXP (x1, 0, 1);
      if (pattern406 (x5) != 0)
        return -1;
      switch (pattern1163 (x2))
        {
        case 0:
          if (!(
#line 8103 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (UNKNOWN, DImode, operands, TARGET_APX_NDD)) && 
#line 1235 "../../gcc/config/i386/i386.md"
(!TARGET_64BIT)))
            return -1;
          return 382; /* *subdi3_doubleword_zext */

        case 1:
          if (!(
#line 8103 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (UNKNOWN, TImode, operands, TARGET_APX_NDD)) && 
#line 1236 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return -1;
          return 383; /* *subti3_doubleword_zext */

        default:
          return -1;
        }

    case LTU:
    case UNLT:
      switch (pattern687 (x1))
        {
        case 0:
          if (pattern1564 (x3, 
E_QImode) != 0
              || !
#line 9349 "../../gcc/config/i386/i386.md"
(!MEM_P (operands[0]) || rtx_equal_p (operands[0], operands[1])))
            return -1;
          return 491; /* *subqi3_carry_0 */

        case 1:
          if (pattern1564 (x3, 
E_HImode) != 0
              || !
#line 9349 "../../gcc/config/i386/i386.md"
(!MEM_P (operands[0]) || rtx_equal_p (operands[0], operands[1])))
            return -1;
          return 492; /* *subhi3_carry_0 */

        case 2:
          if (pattern1564 (x3, 
E_SImode) != 0
              || !
#line 9349 "../../gcc/config/i386/i386.md"
(!MEM_P (operands[0]) || rtx_equal_p (operands[0], operands[1])))
            return -1;
          return 493; /* *subsi3_carry_0 */

        case 3:
          if (pattern1564 (x3, 
E_DImode) != 0
              || !(
#line 9349 "../../gcc/config/i386/i386.md"
(!MEM_P (operands[0]) || rtx_equal_p (operands[0], operands[1])) && 
#line 1161 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return -1;
          return 494; /* *subdi3_carry_0 */

        default:
          return -1;
        }

    case GE:
    case GEU:
      switch (pattern687 (x1))
        {
        case 0:
          if (pattern1565 (x3, 
E_QImode) != 0
              || !
#line 9363 "../../gcc/config/i386/i386.md"
(!MEM_P (operands[0]) || rtx_equal_p (operands[0], operands[1])))
            return -1;
          return 495; /* *subqi3_carry_0r */

        case 1:
          if (pattern1565 (x3, 
E_HImode) != 0
              || !
#line 9363 "../../gcc/config/i386/i386.md"
(!MEM_P (operands[0]) || rtx_equal_p (operands[0], operands[1])))
            return -1;
          return 496; /* *subhi3_carry_0r */

        case 2:
          if (pattern1565 (x3, 
E_SImode) != 0
              || !
#line 9363 "../../gcc/config/i386/i386.md"
(!MEM_P (operands[0]) || rtx_equal_p (operands[0], operands[1])))
            return -1;
          return 497; /* *subsi3_carry_0r */

        case 3:
          if (pattern1565 (x3, 
E_DImode) != 0
              || !(
#line 9363 "../../gcc/config/i386/i386.md"
(!MEM_P (operands[0]) || rtx_equal_p (operands[0], operands[1])) && 
#line 1161 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return -1;
          return 498; /* *subdi3_carry_0r */

        default:
          return -1;
        }

    case EQ:
      switch (pattern691 (x1))
        {
        case 0:
          if (!
#line 10307 "../../gcc/config/i386/i386.md"
(ix86_unary_operator_ok (MINUS, QImode, operands)
   && ix86_pre_reload_split ()))
            return -1;
          return 582; /* *subqi3_eq_0 */

        case 1:
          if (!
#line 10307 "../../gcc/config/i386/i386.md"
(ix86_unary_operator_ok (MINUS, HImode, operands)
   && ix86_pre_reload_split ()))
            return -1;
          return 583; /* *subhi3_eq_0 */

        case 2:
          if (!
#line 10307 "../../gcc/config/i386/i386.md"
(ix86_unary_operator_ok (MINUS, SImode, operands)
   && ix86_pre_reload_split ()))
            return -1;
          return 584; /* *subsi3_eq_0 */

        case 3:
          if (!(
#line 10307 "../../gcc/config/i386/i386.md"
(ix86_unary_operator_ok (MINUS, DImode, operands)
   && ix86_pre_reload_split ()) && 
#line 1161 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return -1;
          return 585; /* *subdi3_eq_0 */

        default:
          return -1;
        }

    case NE:
      switch (pattern691 (x1))
        {
        case 0:
          if (!
#line 10328 "../../gcc/config/i386/i386.md"
(ix86_unary_operator_ok (MINUS, QImode, operands)
   && ix86_pre_reload_split ()))
            return -1;
          return 586; /* *subqi3_ne_0 */

        case 1:
          if (!
#line 10328 "../../gcc/config/i386/i386.md"
(ix86_unary_operator_ok (MINUS, HImode, operands)
   && ix86_pre_reload_split ()))
            return -1;
          return 587; /* *subhi3_ne_0 */

        case 2:
          if (!
#line 10328 "../../gcc/config/i386/i386.md"
(ix86_unary_operator_ok (MINUS, SImode, operands)
   && ix86_pre_reload_split ()))
            return -1;
          return 588; /* *subsi3_ne_0 */

        case 3:
          if (!(
#line 10328 "../../gcc/config/i386/i386.md"
(ix86_unary_operator_ok (MINUS, DImode, operands)
   && ix86_pre_reload_split ()) && 
#line 1161 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return -1;
          return 589; /* *subdi3_ne_0 */

        default:
          return -1;
        }

    default:
      return -1;
    }
}

 int
recog_396 (rtx x1 ATTRIBUTE_UNUSED,
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
  x4 = XEXP (x3, 0);
  switch (GET_CODE (x4))
    {
    case ASHIFT:
      return recog_395 (x1, insn, pnum_clobbers);

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
            return 726; /* *iorqi_1_slp */
          break;

        case 1:
          if (
#line 12741 "../../gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)))
            return 729; /* *iorhi_1_slp */
          break;

        case 2:
          if (x86_64_hilo_general_operand (operands[2], E_DImode)
              && (
#line 13527 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (IOR, DImode, operands, TARGET_APX_NDD)) && 
#line 1235 "../../gcc/config/i386/i386.md"
(!TARGET_64BIT)))
            return 819; /* *iordi3_doubleword */
          if (x86_64_general_operand (operands[2], E_DImode)
              && (
#line 13585 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (IOR, DImode, operands, TARGET_APX_NDD)
   && true) && 
#line 1164 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return 832; /* *iordi_1 */
          if (const_int_operand (operands[2], E_DImode)
              && 
#line 13633 "../../gcc/config/i386/i386.md"
(TARGET_64BIT && TARGET_USE_BT
   && ix86_binary_operator_ok (IOR, DImode, operands)
   && IN_RANGE (exact_log2 (INTVAL (operands[2])), 31, 63)))
            return 838; /* *iordi_1_bts */
          break;

        case 3:
          if ((
#line 13527 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (IOR, TImode, operands, TARGET_APX_NDD)) && 
#line 1236 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return 821; /* *iorti3_doubleword */
          break;

        case 4:
          if (
#line 13585 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (IOR, HImode, operands, TARGET_APX_NDD)
   && true))
            return 824; /* *iorhi_1 */
          break;

        case 5:
          if (
#line 13585 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (IOR, SImode, operands, TARGET_APX_NDD)
   && true))
            return 828; /* *iorsi_1 */
          break;

        case 6:
          if (
#line 4713 "../../gcc/config/i386/mmx.md"
(ix86_binary_operator_ok (IOR, V4QImode, operands)))
            return 2278; /* *iorv4qi3 */
          break;

        case 7:
          if (
#line 4713 "../../gcc/config/i386/mmx.md"
(ix86_binary_operator_ok (IOR, V2QImode, operands)))
            return 2281; /* *iorv2qi3 */
          break;

        case 8:
          if (
#line 4713 "../../gcc/config/i386/mmx.md"
(ix86_binary_operator_ok (IOR, V2HImode, operands)))
            return 2284; /* *iorv2hi3 */
          break;

        case 9:
          if (
#line 2094 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F))
            return 2567; /* kiorqi */
          break;

        case 10:
          if (
#line 2094 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F))
            return 2570; /* kiorhi */
          break;

        case 11:
          if ((
#line 2094 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 2075 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW)))
            return 2573; /* kiorsi */
          break;

        case 12:
          if ((
#line 2094 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 2075 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW)))
            return 2576; /* kiordi */
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
                return 732; /* *iorqi_exthi_1_slp */
              break;

            case 1:
              if (
#line 12768 "../../gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)))
                return 735; /* *iorqi_extsi_1_slp */
              break;

            case 2:
              if ((
#line 12768 "../../gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)) && 
#line 1164 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return 738; /* *iorqi_extdi_1_slp */
              break;

            case 3:
              return 756; /* *iorqi_exthi_0 */

            case 4:
              return 759; /* *iorqi_extsi_0 */

            case 5:
              if (
#line 1164 "../../gcc/config/i386/i386.md"
(TARGET_64BIT))
                return 762; /* *iorqi_extdi_0 */
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
                    return 741; /* *iorqi_exthi_2_slp */
                  break;

                case 1:
                  if (
#line 12801 "../../gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)))
                    return 744; /* *iorqi_extsi_2_slp */
                  break;

                case 2:
                  if ((
#line 12801 "../../gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)) && 
#line 1164 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                    return 747; /* *iorqi_extdi_2_slp */
                  break;

                case 3:
                  return 765; /* *iorqi_ext2hi_0 */

                case 4:
                  return 768; /* *iorqi_ext2si_0 */

                case 5:
                  if (
#line 1164 "../../gcc/config/i386/i386.md"
(TARGET_64BIT))
                    return 771; /* *iorqi_ext2di_0 */
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
(ix86_binary_operator_ok (IOR, QImode, operands, TARGET_APX_NDD)
   && true))
        return -1;
      return 868; /* *iorqi_1 */

    case ZERO_EXTEND:
      if (pattern368 (x1) != 0
          || !
#line 13762 "../../gcc/config/i386/i386.md"
(TARGET_64BIT
   && ix86_binary_operator_ok (IOR, SImode, operands, TARGET_APX_NDD)))
        return -1;
      return 865; /* *iorsi_1_zext_imm */

    case LSHIFTRT:
      if (pattern338 (x1) != 0)
        return -1;
      switch (pattern1048 (x3, 
ASHIFT))
        {
        case 0:
          x8 = XEXP (x3, 1);
          x10 = XEXP (x8, 0);
          x11 = XEXP (x10, 0);
          x12 = XEXP (x11, 0);
          operands[1] = x12;
          if (nonimmediate_operand (operands[0], E_DImode))
            {
              x13 = XEXP (x4, 1);
              x14 = XEXP (x13, 0);
              operands[2] = x14;
              x6 = XEXP (x4, 0);
              if (rtx_equal_p (x6, operands[0]))
                {
                  x15 = XEXP (x10, 1);
                  x16 = XEXP (x15, 1);
                  x17 = XEXP (x16, 0);
                  if (rtx_equal_p (x17, operands[2])
                      && 
#line 16786 "../../gcc/config/i386/i386.md"
(TARGET_64BIT && true))
                    return 1143; /* x86_64_shrd */
                }
            }
          operands[2] = x12;
          if (!register_operand (operands[0], E_DImode))
            return -1;
          x6 = XEXP (x4, 0);
          operands[1] = x6;
          if (!nonimmediate_operand (operands[1], E_DImode))
            return -1;
          x13 = XEXP (x4, 1);
          x14 = XEXP (x13, 0);
          operands[3] = x14;
          x15 = XEXP (x10, 1);
          x16 = XEXP (x15, 1);
          x17 = XEXP (x16, 0);
          if (!rtx_equal_p (x17, operands[3])
              || !
#line 16807 "../../gcc/config/i386/i386.md"
(TARGET_APX_NDD && true))
            return -1;
          return 1145; /* x86_64_shrd_ndd */

        case 1:
          if (pattern1047 (x3, 
E_SImode, 
E_DImode) != 0)
            return -1;
          x8 = XEXP (x3, 1);
          x10 = XEXP (x8, 0);
          x11 = XEXP (x10, 0);
          x12 = XEXP (x11, 0);
          operands[1] = x12;
          if (nonimmediate_operand (operands[0], E_SImode))
            {
              x13 = XEXP (x4, 1);
              x14 = XEXP (x13, 0);
              operands[2] = x14;
              x6 = XEXP (x4, 0);
              if (rtx_equal_p (x6, operands[0]))
                {
                  x15 = XEXP (x10, 1);
                  x16 = XEXP (x15, 1);
                  x17 = XEXP (x16, 0);
                  if (rtx_equal_p (x17, operands[2]))
                    return 1155; /* x86_shrd */
                }
            }
          operands[2] = x12;
          if (!register_operand (operands[0], E_SImode))
            return -1;
          x6 = XEXP (x4, 0);
          operands[1] = x6;
          if (!nonimmediate_operand (operands[1], E_SImode))
            return -1;
          x13 = XEXP (x4, 1);
          x14 = XEXP (x13, 0);
          operands[3] = x14;
          x15 = XEXP (x10, 1);
          x16 = XEXP (x15, 1);
          x17 = XEXP (x16, 0);
          if (!rtx_equal_p (x17, operands[3])
              || !
#line 17038 "../../gcc/config/i386/i386.md"
(TARGET_APX_NDD && true))
            return -1;
          return 1157; /* x86_shrd_ndd */

        case 2:
          x8 = XEXP (x3, 1);
          switch (GET_CODE (x8))
            {
            case SUBREG:
              switch (pattern1240 (x3, 
ASHIFT))
                {
                case 0:
                  x13 = XEXP (x4, 1);
                  operands[2] = x13;
                  if (pattern1675 (x3) == 0
                      && 
#line 16822 "../../gcc/config/i386/i386.md"
(TARGET_64BIT
   && INTVAL (operands[3]) == 64 - INTVAL (operands[2])
   && true))
                    return 1147; /* x86_64_shrd_1 */
                  operands[3] = x13;
                  if (pattern1676 (x3) != 0
                      || !
#line 16844 "../../gcc/config/i386/i386.md"
(TARGET_APX_NDD
   && INTVAL (operands[4]) == 64 - INTVAL (operands[3])
   && true))
                    return -1;
                  return 1149; /* x86_64_shrd_ndd_1 */

                case 1:
                  x13 = XEXP (x4, 1);
                  operands[2] = x13;
                  if (pattern1677 (x3) == 0
                      && 
#line 17053 "../../gcc/config/i386/i386.md"
(INTVAL (operands[3]) == 32 - INTVAL (operands[2])
   && true))
                    return 1159; /* x86_shrd_1 */
                  operands[3] = x13;
                  if (pattern1678 (x3) != 0
                      || !
#line 17075 "../../gcc/config/i386/i386.md"
(TARGET_APX_NDD
   && (INTVAL (operands[4]) == 32 - INTVAL (operands[3]))
   && true))
                    return -1;
                  return 1161; /* x86_shrd_ndd_1 */

                default:
                  return -1;
                }

            case ASHIFT:
              switch (pattern1242 (x3))
                {
                case 0:
                  if (!
#line 16916 "../../gcc/config/i386/i386.md"
(TARGET_64BIT
   && INTVAL (operands[3]) == 64 - INTVAL (operands[2])
   && ix86_pre_reload_split ()))
                    return -1;
                  return 1151; /* *x86_64_shrd_shld_1_nozext */

                case 1:
                  if (!
#line 17147 "../../gcc/config/i386/i386.md"
(INTVAL (operands[3]) == 32 - INTVAL (operands[2])
   && ix86_pre_reload_split ()))
                    return -1;
                  return 1163; /* *x86_shrd_shld_1_nozext */

                case 2:
                  x10 = XEXP (x8, 0);
                  operands[1] = x10;
                  if (nonimmediate_operand (operands[0], E_DImode))
                    {
                      x13 = XEXP (x4, 1);
                      operands[2] = x13;
                      x6 = XEXP (x4, 0);
                      if (rtx_equal_p (x6, operands[0]))
                        {
                          x18 = XEXP (x8, 1);
                          x19 = XEXP (x18, 1);
                          if (rtx_equal_p (x19, operands[2])
                              && 
#line 16969 "../../gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_pre_reload_split ()))
                            return 1152; /* *x86_64_shrd_2 */
                        }
                    }
                  operands[2] = x10;
                  if (!register_operand (operands[0], E_DImode))
                    return -1;
                  x6 = XEXP (x4, 0);
                  operands[1] = x6;
                  if (!nonimmediate_operand (operands[1], E_DImode))
                    return -1;
                  x13 = XEXP (x4, 1);
                  operands[3] = x13;
                  x18 = XEXP (x8, 1);
                  x19 = XEXP (x18, 1);
                  if (!rtx_equal_p (x19, operands[2])
                      || !
#line 16990 "../../gcc/config/i386/i386.md"
(TARGET_APX_NDD
  && ix86_pre_reload_split ()))
                    return -1;
                  return 1153; /* *x86_64_shrd_ndd_2 */

                case 3:
                  x10 = XEXP (x8, 0);
                  operands[1] = x10;
                  if (nonimmediate_operand (operands[0], E_SImode))
                    {
                      x13 = XEXP (x4, 1);
                      operands[2] = x13;
                      x6 = XEXP (x4, 0);
                      if (rtx_equal_p (x6, operands[0]))
                        {
                          x18 = XEXP (x8, 1);
                          x19 = XEXP (x18, 1);
                          if (rtx_equal_p (x19, operands[2])
                              && 
#line 17199 "../../gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_pre_reload_split ()))
                            return 1164; /* *x86_shrd_2 */
                        }
                    }
                  operands[2] = x10;
                  if (!register_operand (operands[0], E_SImode))
                    return -1;
                  x6 = XEXP (x4, 0);
                  operands[1] = x6;
                  if (!nonimmediate_operand (operands[1], E_SImode))
                    return -1;
                  x13 = XEXP (x4, 1);
                  operands[3] = x13;
                  x18 = XEXP (x8, 1);
                  x19 = XEXP (x18, 1);
                  if (!rtx_equal_p (x19, operands[3])
                      || !
#line 17220 "../../gcc/config/i386/i386.md"
(TARGET_APX_NDD
   && ix86_pre_reload_split ()))
                    return -1;
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
      x6 = XEXP (x4, 0);
      if (GET_CODE (x6) != PLUS)
        return -1;
      x20 = XEXP (x6, 1);
      if (x20 != const_int_rtx[MAX_SAVED_CONST_INT + 1]
          || pattern338 (x1) != 0)
        return -1;
      x7 = XEXP (x6, 0);
      operands[1] = x7;
      x8 = XEXP (x3, 1);
      if (!rtx_equal_p (x8, operands[1]))
        return -1;
      switch (GET_MODE (operands[0]))
        {
        case E_SImode:
          if (!register_operand (operands[0], E_SImode)
              || GET_MODE (x3) != E_SImode
              || GET_MODE (x4) != E_SImode
              || GET_MODE (x6) != E_SImode
              || !nonimmediate_operand (operands[1], E_SImode)
              || !
#line 22041 "../../gcc/config/i386/i386.md"
(TARGET_TBM))
            return -1;
          return 1602; /* *tbm_blci_si */

        case E_DImode:
          if (!register_operand (operands[0], E_DImode)
              || GET_MODE (x3) != E_DImode
              || GET_MODE (x4) != E_DImode
              || GET_MODE (x6) != E_DImode
              || !nonimmediate_operand (operands[1], E_DImode)
              || !(
#line 22041 "../../gcc/config/i386/i386.md"
(TARGET_TBM) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return -1;
          return 1603; /* *tbm_blci_di */

        default:
          return -1;
        }

    case PLUS:
      x13 = XEXP (x4, 1);
      if (GET_CODE (x13) != CONST_INT
          || pattern345 (x1) != 0)
        return -1;
      switch (XWINT (x13, 0))
        {
        case 1L:
          switch (pattern1328 (x3))
            {
            case 0:
              if (!
#line 22081 "../../gcc/config/i386/i386.md"
(TARGET_TBM))
                return -1;
              return 1608; /* *tbm_blcs_si */

            case 1:
              if (!(
#line 22081 "../../gcc/config/i386/i386.md"
(TARGET_TBM) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return -1;
              return 1609; /* *tbm_blcs_di */

            case 2:
              if (!
#line 22122 "../../gcc/config/i386/i386.md"
(TARGET_TBM))
                return -1;
              return 1614; /* *tbm_t1mskc_si */

            case 3:
              if (!(
#line 22122 "../../gcc/config/i386/i386.md"
(TARGET_TBM) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return -1;
              return 1615; /* *tbm_t1mskc_di */

            default:
              return -1;
            }

        case -1L:
          switch (pattern1328 (x3))
            {
            case 0:
              if (!
#line 22094 "../../gcc/config/i386/i386.md"
(TARGET_TBM))
                return -1;
              return 1610; /* *tbm_blsfill_si */

            case 1:
              if (!(
#line 22094 "../../gcc/config/i386/i386.md"
(TARGET_TBM) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return -1;
              return 1611; /* *tbm_blsfill_di */

            case 2:
              if (!
#line 22108 "../../gcc/config/i386/i386.md"
(TARGET_TBM))
                return -1;
              return 1612; /* *tbm_blsic_si */

            case 3:
              if (!(
#line 22108 "../../gcc/config/i386/i386.md"
(TARGET_TBM) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return -1;
              return 1613; /* *tbm_blsic_di */

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
recog_412 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) != E_DImode)
    return -1;
  x4 = XEXP (x2, 0);
  operands[0] = x4;
  if (!register_operand (operands[0], E_DImode))
    return -1;
  x5 = XEXP (x3, 0);
  if (GET_MODE (x5) != E_SImode)
    return -1;
  switch (GET_CODE (x5))
    {
    case CTZ:
      switch (pattern937 (x1, pnum_clobbers))
        {
        case 0:
          if (!
#line 21165 "../../gcc/config/i386/i386.md"
(TARGET_64BIT))
            return -1;
          return 1520; /* *ctzsidi2_sext */

        case 1:
          if (!
#line 21204 "../../gcc/config/i386/i386.md"
(TARGET_64BIT))
            return -1;
          *pnum_clobbers = 1;
          return 1522; /* *ctzsidi2_sext_falsedep */

        default:
          return -1;
        }

    case XOR:
      x6 = XEXP (x5, 0);
      if (GET_CODE (x6) != MINUS
          || GET_MODE (x6) != E_SImode)
        return -1;
      x7 = XEXP (x6, 0);
      if (x7 != const_int_rtx[MAX_SAVED_CONST_INT + 31])
        return -1;
      x8 = XEXP (x6, 1);
      if (GET_CODE (x8) != CLZ
          || GET_MODE (x8) != E_SImode)
        return -1;
      x9 = XEXP (x5, 1);
      if (x9 != const_int_rtx[MAX_SAVED_CONST_INT + 31])
        return -1;
      x10 = XVECEXP (x1, 0, 1);
      if (pattern227 (x10, 
E_CCmode, 
17) != 0)
        return -1;
      x11 = XEXP (x8, 0);
      operands[1] = x11;
      if (!nonimmediate_operand (operands[1], E_SImode)
          || !
#line 21336 "../../gcc/config/i386/i386.md"
(!TARGET_LZCNT && TARGET_64BIT && ix86_pre_reload_split ()))
        return -1;
      return 1531; /* *bsr_2 */

    default:
      return -1;
    }
}

 int
recog_416 (rtx x1 ATTRIBUTE_UNUSED,
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
  if (GET_CODE (x4) != TRUNCATE)
    return -1;
  x5 = XEXP (x3, 1);
  if (GET_CODE (x5) != TRUNCATE)
    return -1;
  x6 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x6) != USE)
    return -1;
  x7 = XEXP (x2, 0);
  operands[0] = x7;
  x8 = XEXP (x4, 0);
  operands[1] = x8;
  x9 = XEXP (x5, 0);
  operands[2] = x9;
  x10 = XEXP (x6, 0);
  operands[3] = x10;
  if (!nonimmediate_operand (operands[3], E_V16QImode))
    return -1;
  switch (GET_MODE (operands[0]))
    {
    case E_V4SImode:
      if (pattern1334 (x3, 
E_V2DImode, 
E_V2SImode, 
E_V4SImode) != 0
          || !
#line 26497 "../../gcc/config/i386/sse.md"
(TARGET_XOP && !(MEM_P (operands[2]) && MEM_P (operands[3]))))
        return -1;
      return 9026; /* xop_pperm_pack_v2di_v4si */

    case E_V8HImode:
      if (pattern1334 (x3, 
E_V4SImode, 
E_V4HImode, 
E_V8HImode) != 0
          || !
#line 26510 "../../gcc/config/i386/sse.md"
(TARGET_XOP && !(MEM_P (operands[2]) && MEM_P (operands[3]))))
        return -1;
      return 9027; /* xop_pperm_pack_v4si_v8hi */

    case E_V16QImode:
      if (pattern1334 (x3, 
E_V8HImode, 
E_V8QImode, 
E_V16QImode) != 0
          || !
#line 26523 "../../gcc/config/i386/sse.md"
(TARGET_XOP && !(MEM_P (operands[2]) && MEM_P (operands[3]))))
        return -1;
      return 9028; /* xop_pperm_pack_v8hi_v16qi */

    default:
      return -1;
    }
}

 int
recog_422 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12, x13, x14, x15, x16, x17;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  switch (XVECLEN (x3, 0))
    {
    case 1:
      x4 = XEXP (x2, 0);
      operands[0] = x4;
      x5 = XVECEXP (x3, 0, 0);
      operands[1] = x5;
      switch (XINT (x3, 1))
        {
        case 106:
          if (pattern542 (x1) != 0)
            return -1;
          x6 = XVECEXP (x1, 0, 2);
          if (GET_CODE (x6) != UNSPEC
              || XVECLEN (x6, 0) != 1
              || XINT (x6, 1) != 108
              || GET_MODE (x6) != E_DImode)
            return -1;
          x7 = XVECEXP (x6, 0, 0);
          if (x7 != const_int_rtx[MAX_SAVED_CONST_INT + 0]
              || !register_operand (operands[0], E_DImode)
              || !pop_operand (operands[1], E_TImode))
            return -1;
          x8 = XVECEXP (x1, 0, 1);
          x9 = XEXP (x8, 0);
          operands[2] = x9;
          if (!register_operand (operands[2], E_DImode)
              || !
#line 3941 "../../gcc/config/i386/i386.md"
(TARGET_APX_PUSH2POP2 && TARGET_APX_PPX))
            return -1;
          return 164; /* pop2p_di */

        case 97:
          switch (pattern822 (x1))
            {
            case 0:
              if (!
#line 21631 "../../gcc/config/i386/i386.md"
(TARGET_BMI))
                return -1;
              return 1558; /* *tzcnt_si_falsedep */

            case 1:
              if (!((
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT) && 
#line 21631 "../../gcc/config/i386/i386.md"
(TARGET_BMI)) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return -1;
              return 1560; /* *tzcnt_di_falsedep */

            default:
              return -1;
            }

        case 96:
          switch (pattern822 (x1))
            {
            case 0:
              if (!
#line 21632 "../../gcc/config/i386/i386.md"
(TARGET_LZCNT))
                return -1;
              return 1559; /* *lzcnt_si_falsedep */

            case 1:
              if (!((
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT) && 
#line 21632 "../../gcc/config/i386/i386.md"
(TARGET_LZCNT)) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return -1;
              return 1561; /* *lzcnt_di_falsedep */

            default:
              return -1;
            }

        case 74:
          if (pattern823 (x1) != 0
              || !
#line 25097 "../../gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && (flag_fp_int_builtin_inexact || !flag_trapping_math)))
            return -1;
          return 1734; /* frndintxf2_roundeven_i387 */

        case 75:
          if (pattern823 (x1) != 0
              || !
#line 25097 "../../gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && (flag_fp_int_builtin_inexact || !flag_trapping_math)))
            return -1;
          return 1735; /* frndintxf2_floor_i387 */

        case 76:
          if (pattern823 (x1) != 0
              || !
#line 25097 "../../gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && (flag_fp_int_builtin_inexact || !flag_trapping_math)))
            return -1;
          return 1736; /* frndintxf2_ceil_i387 */

        case 77:
          if (pattern823 (x1) != 0
              || !
#line 25097 "../../gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && (flag_fp_int_builtin_inexact || !flag_trapping_math)))
            return -1;
          return 1737; /* frndintxf2_trunc_i387 */

        case 78:
          switch (pattern825 (x1, pnum_clobbers))
            {
            case 0:
              if (!
#line 25215 "../../gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && flag_unsafe_math_optimizations))
                return -1;
              *pnum_clobbers = 1;
              return 1744; /* fistdi2_floor */

            case 1:
              if (!
#line 25228 "../../gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && flag_unsafe_math_optimizations))
                return -1;
              return 1746; /* fisthi2_floor */

            case 2:
              if (!
#line 25228 "../../gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && flag_unsafe_math_optimizations))
                return -1;
              return 1748; /* fistsi2_floor */

            default:
              return -1;
            }

        case 79:
          switch (pattern825 (x1, pnum_clobbers))
            {
            case 0:
              if (!
#line 25215 "../../gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && flag_unsafe_math_optimizations))
                return -1;
              *pnum_clobbers = 1;
              return 1745; /* fistdi2_ceil */

            case 1:
              if (!
#line 25228 "../../gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && flag_unsafe_math_optimizations))
                return -1;
              return 1747; /* fisthi2_ceil */

            case 2:
              if (!
#line 25228 "../../gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && flag_unsafe_math_optimizations))
                return -1;
              return 1749; /* fistsi2_ceil */

            default:
              return -1;
            }

        case 92:
          x8 = XVECEXP (x1, 0, 1);
          if (GET_CODE (x8) != SET)
            return -1;
          x10 = XEXP (x8, 1);
          if (x10 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
            return -1;
          x6 = XVECEXP (x1, 0, 2);
          if (pattern953 (x6, 
E_CCmode, 
17) != 0)
            return -1;
          switch (pattern1148 (x1))
            {
            case 0:
              if (!(
#line 1408 "../../gcc/config/i386/i386.md"
(ptr_mode == SImode) && 
#line 1403 "../../gcc/config/i386/i386.md"
(word_mode == SImode)))
                return -1;
              return 1861; /* stack_protect_set_1_si_si */

            case 1:
              if (!(
#line 1408 "../../gcc/config/i386/i386.md"
(ptr_mode == SImode) && 
#line 1403 "../../gcc/config/i386/i386.md"
(word_mode == DImode)))
                return -1;
              return 1863; /* stack_protect_set_1_si_di */

            case 2:
              if (!(
#line 1408 "../../gcc/config/i386/i386.md"
(ptr_mode == DImode) && 
#line 1403 "../../gcc/config/i386/i386.md"
(word_mode == SImode)))
                return -1;
              return 1862; /* stack_protect_set_1_di_si */

            case 3:
              if (!(
#line 1408 "../../gcc/config/i386/i386.md"
(ptr_mode == DImode) && 
#line 1403 "../../gcc/config/i386/i386.md"
(word_mode == DImode)))
                return -1;
              return 1864; /* stack_protect_set_1_di_di */

            default:
              return -1;
            }

        case 288:
          if (GET_MODE (x3) != E_DImode)
            return -1;
          x8 = XVECEXP (x1, 0, 1);
          if (GET_CODE (x8) != CLOBBER)
            return -1;
          x6 = XVECEXP (x1, 0, 2);
          if (GET_CODE (x6) != CLOBBER
              || !nonimmediate_operand (operands[0], E_DImode)
              || !memory_operand (operands[1], E_DImode))
            return -1;
          x9 = XEXP (x8, 0);
          operands[2] = x9;
          if (!memory_operand (operands[2], E_DImode))
            return -1;
          x11 = XEXP (x6, 0);
          operands[3] = x11;
          if (!scratch_operand (operands[3], E_DFmode)
              || !
#line 196 "../../gcc/config/i386/sync.md"
(!TARGET_64BIT && (TARGET_80387 || TARGET_SSE)))
            return -1;
          return 11011; /* atomic_loaddi_fpu */

        case 289:
          if (GET_MODE (x3) != E_DImode)
            return -1;
          x8 = XVECEXP (x1, 0, 1);
          if (GET_CODE (x8) != CLOBBER)
            return -1;
          x6 = XVECEXP (x1, 0, 2);
          if (GET_CODE (x6) != CLOBBER
              || !memory_operand (operands[0], E_DImode)
              || !nonimmediate_operand (operands[1], E_DImode))
            return -1;
          x9 = XEXP (x8, 0);
          operands[2] = x9;
          if (!memory_operand (operands[2], E_DImode))
            return -1;
          x11 = XEXP (x6, 0);
          operands[3] = x11;
          if (!scratch_operand (operands[3], E_DFmode)
              || !
#line 295 "../../gcc/config/i386/sync.md"
(!TARGET_64BIT && (TARGET_80387 || TARGET_SSE)))
            return -1;
          return 11016; /* atomic_storedi_fpu */

        default:
          return -1;
        }

    case 2:
      x8 = XVECEXP (x1, 0, 1);
      if (GET_CODE (x8) != SET)
        return -1;
      x10 = XEXP (x8, 1);
      if (GET_CODE (x10) != UNSPEC
          || XVECLEN (x10, 0) != 2
          || GET_MODE (x10) != E_XFmode)
        return -1;
      x6 = XVECEXP (x1, 0, 2);
      if (GET_CODE (x6) != SET)
        return -1;
      x12 = XEXP (x6, 1);
      if (GET_CODE (x12) != UNSPEC
          || XVECLEN (x12, 0) != 2
          || XINT (x12, 1) != 90
          || GET_MODE (x12) != E_CCFPmode)
        return -1;
      x11 = XEXP (x6, 0);
      if (GET_CODE (x11) != REG
          || REGNO (x11) != 18
          || GET_MODE (x11) != E_CCFPmode)
        return -1;
      x4 = XEXP (x2, 0);
      operands[0] = x4;
      if (!register_operand (operands[0], E_XFmode)
          || GET_MODE (x3) != E_XFmode
          || pattern1420 (x1) != 0)
        return -1;
      x13 = XVECEXP (x12, 0, 0);
      if (!rtx_equal_p (x13, operands[2]))
        return -1;
      x14 = XVECEXP (x12, 0, 1);
      if (!rtx_equal_p (x14, operands[3]))
        return -1;
      switch (XINT (x3, 1))
        {
        case 86:
          if (XINT (x10, 1) != 87
              || !
#line 23734 "../../gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387))
            return -1;
          return 1709; /* fpremxf4_i387 */

        case 88:
          if (XINT (x10, 1) != 89
              || !
#line 23806 "../../gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387))
            return -1;
          return 1710; /* fprem1xf4_i387 */

        default:
          return -1;
        }

    case 4:
      if (XINT (x3, 1) != 23)
        return -1;
      x5 = XVECEXP (x3, 0, 0);
      if (GET_CODE (x5) != MEM
          || GET_MODE (x5) != E_BLKmode)
        return -1;
      x8 = XVECEXP (x1, 0, 1);
      if (GET_CODE (x8) != CLOBBER
          || pattern828 (x1) != 0)
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
          return 1787; /* *strlenqi_1 */

        case 1:
          if (!(
#line 25974 "../../gcc/config/i386/i386.md"
(!(fixed_regs[AX_REG] || fixed_regs[CX_REG] || fixed_regs[DI_REG])
   && ix86_check_no_addr_space (insn)) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode)))
            return -1;
          return 1788; /* *strlenqi_1 */

        default:
          return -1;
        }

    case 5:
      if (XINT (x3, 1) != 131)
        return -1;
      if (GET_MODE (x3) == E_SImode
          && pattern709 (x1, 
131, 
5) == 0
          && pattern1724 (x1) == 0
          && 
#line 25842 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_2
   && ix86_pre_reload_split ()))
        return 8974; /* sse4_2_pcmpestr */
      if (GET_MODE (x3) != E_CCmode
          || pattern710 (x1) != 0
          || !register_operand (operands[3], E_SImode))
        return -1;
      x15 = XVECEXP (x3, 0, 2);
      operands[4] = x15;
      if (!nonimmediate_operand (operands[4], E_V16QImode))
        return -1;
      x16 = XVECEXP (x3, 0, 3);
      operands[5] = x16;
      if (!register_operand (operands[5], E_SImode))
        return -1;
      x17 = XVECEXP (x3, 0, 4);
      operands[6] = x17;
      if (!const_0_to_255_operand (operands[6], E_SImode))
        return -1;
      x8 = XVECEXP (x1, 0, 1);
      x9 = XEXP (x8, 0);
      operands[0] = x9;
      if (!scratch_operand (operands[0], E_V16QImode))
        return -1;
      x6 = XVECEXP (x1, 0, 2);
      x11 = XEXP (x6, 0);
      operands[1] = x11;
      if (!scratch_operand (operands[1], E_SImode)
          || !
#line 25945 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_2))
        return -1;
      return 8977; /* sse4_2_pcmpestr_cconly */

    case 3:
      if (XINT (x3, 1) != 132)
        return -1;
      if (GET_MODE (x3) == E_SImode
          && pattern709 (x1, 
132, 
3) == 0
          && pattern1725 (x1) == 0
          && 
#line 25979 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_2
   && ix86_pre_reload_split ()))
        return 8978; /* sse4_2_pcmpistr */
      if (GET_MODE (x3) != E_CCmode
          || pattern710 (x1) != 0
          || !nonimmediate_operand (operands[3], E_V16QImode))
        return -1;
      x15 = XVECEXP (x3, 0, 2);
      operands[4] = x15;
      if (!const_0_to_255_operand (operands[4], E_SImode))
        return -1;
      x8 = XVECEXP (x1, 0, 1);
      x9 = XEXP (x8, 0);
      operands[0] = x9;
      if (!scratch_operand (operands[0], E_V16QImode))
        return -1;
      x6 = XVECEXP (x1, 0, 2);
      x11 = XEXP (x6, 0);
      operands[1] = x11;
      if (!scratch_operand (operands[1], E_SImode)
          || !
#line 26070 "../../gcc/config/i386/sse.md"
(TARGET_SSE4_2))
        return -1;
      return 8981; /* sse4_2_pcmpistr_cconly */

    default:
      return -1;
    }
}

 rtx_insn *
split_1 (rtx x1 ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  rtx_insn *res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  operands[0] = x2;
  switch (GET_CODE (operands[0]))
    {
    case MEM:
      switch (GET_MODE (operands[0]))
        {
        case E_V1TImode:
          if (push_operand (operands[0], E_V1TImode)
              && register_operand (operands[1], E_V1TImode))
            {
              if (((
#line 2175 "../../gcc/config/i386/i386.md"
(TARGET_64BIT && TARGET_STV) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 2177 "../../gcc/config/i386/i386.md"
( reload_completed)))
                return gen_split_3 (insn, operands);
              if (((
#line 2175 "../../gcc/config/i386/i386.md"
(TARGET_64BIT && TARGET_STV) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 2177 "../../gcc/config/i386/i386.md"
( reload_completed)))
                return gen_split_4 (insn, operands);
            }
          break;

        case E_DImode:
          if (push_operand (operands[0], E_DImode))
            {
              if (general_gr_operand (operands[1], E_DImode)
                  && (
#line 2199 "../../gcc/config/i386/i386.md"
(reload_completed) && 
#line 1195 "../../gcc/config/i386/i386.md"
(!TARGET_64BIT)))
                return gen_split_5 (insn, operands);
              if (immediate_operand (operands[1], E_DImode)
                  && 
#line 2232 "../../gcc/config/i386/i386.md"
(TARGET_64BIT && epilogue_completed
   && !symbolic_operand (operands[1], DImode)
   && !x86_64_immediate_operand (operands[1], DImode)))
                return gen_split_7 (insn, operands);
              if (sse_reg_operand (operands[1], E_DImode))
                {
                  if ((
#line 2269 "../../gcc/config/i386/i386.md"
(TARGET_SSE && reload_completed) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode)))
                    return gen_split_9 (insn, operands);
                  if ((
#line 2269 "../../gcc/config/i386/i386.md"
(TARGET_SSE && reload_completed) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode)))
                    return gen_split_12 (insn, operands);
                }
            }
          break;

        case E_TImode:
          if (push_operand (operands[0], E_TImode))
            {
              if (general_gr_operand (operands[1], E_TImode)
                  && (
#line 2199 "../../gcc/config/i386/i386.md"
(reload_completed) && 
#line 1196 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return gen_split_6 (insn, operands);
              if (sse_reg_operand (operands[1], E_TImode))
                {
                  if ((
#line 2269 "../../gcc/config/i386/i386.md"
(TARGET_SSE && reload_completed) && (((
#line 1202 "../../gcc/config/i386/i386.md"
(TARGET_64BIT) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode))))
                    return gen_split_10 (insn, operands);
                  if ((
#line 2269 "../../gcc/config/i386/i386.md"
(TARGET_SSE && reload_completed) && (((
#line 1202 "../../gcc/config/i386/i386.md"
(TARGET_64BIT) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode))))
                    return gen_split_13 (insn, operands);
                }
            }
          break;

        case E_SImode:
          if (push_operand (operands[0], E_SImode)
              && sse_reg_operand (operands[1], E_SImode))
            {
              if ((
#line 2269 "../../gcc/config/i386/i386.md"
(TARGET_SSE && reload_completed) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode)))
                return gen_split_8 (insn, operands);
              if ((
#line 2269 "../../gcc/config/i386/i386.md"
(TARGET_SSE && reload_completed) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode)))
                return gen_split_11 (insn, operands);
            }
          break;

        case E_TFmode:
          if (push_operand (operands[0], E_TFmode)
              && sse_reg_operand (operands[1], E_TFmode))
            {
              if ((
#line 3779 "../../gcc/config/i386/i386.md"
(TARGET_SSE && reload_completed) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode)))
                return gen_split_31 (insn, operands);
              if ((
#line 3779 "../../gcc/config/i386/i386.md"
(TARGET_SSE && reload_completed) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode)))
                return gen_split_32 (insn, operands);
            }
          break;

        case E_XFmode:
          if (push_operand (operands[0], E_XFmode)
              && fp_register_operand (operands[1], E_XFmode))
            {
              if ((
#line 3814 "../../gcc/config/i386/i386.md"
(reload_completed) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode)))
                return gen_split_33 (insn, operands);
              if ((
#line 3814 "../../gcc/config/i386/i386.md"
(reload_completed) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode)))
                return gen_split_34 (insn, operands);
            }
          break;

        case E_DFmode:
          if (push_operand (operands[0], E_DFmode)
              && any_fp_register_operand (operands[1], E_DFmode))
            {
              if ((
#line 3848 "../../gcc/config/i386/i386.md"
(reload_completed) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode)))
                return gen_split_35 (insn, operands);
              if ((
#line 3848 "../../gcc/config/i386/i386.md"
(reload_completed) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode)))
                return gen_split_36 (insn, operands);
            }
          break;

        case E_SFmode:
          if (push_operand (operands[0], E_SFmode))
            {
              if (any_fp_register_operand (operands[1], E_SFmode))
                {
                  if ((
#line 3979 "../../gcc/config/i386/i386.md"
(reload_completed) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode)))
                    return gen_split_37 (insn, operands);
                  if ((
#line 3979 "../../gcc/config/i386/i386.md"
(reload_completed) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode)))
                    return gen_split_40 (insn, operands);
                }
              if (memory_operand (operands[1], E_SFmode)
                  && 
#line 4002 "../../gcc/config/i386/i386.md"
(reload_completed
   && find_constant_src (insn)))
                return gen_split_43 (insn, operands);
            }
          break;

        case E_HFmode:
          if (push_operand (operands[0], E_HFmode)
              && any_fp_register_operand (operands[1], E_HFmode))
            {
              if ((
#line 3979 "../../gcc/config/i386/i386.md"
(reload_completed) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode)))
                return gen_split_38 (insn, operands);
              if ((
#line 3979 "../../gcc/config/i386/i386.md"
(reload_completed) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode)))
                return gen_split_41 (insn, operands);
            }
          break;

        case E_BFmode:
          if (push_operand (operands[0], E_BFmode)
              && any_fp_register_operand (operands[1], E_BFmode))
            {
              if ((
#line 3979 "../../gcc/config/i386/i386.md"
(reload_completed) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == SImode)))
                return gen_split_39 (insn, operands);
              if ((
#line 3979 "../../gcc/config/i386/i386.md"
(reload_completed) && 
#line 1398 "../../gcc/config/i386/i386.md"
(Pmode == DImode)))
                return gen_split_42 (insn, operands);
            }
          break;

        default:
          break;
        }
      break;

    case REG:
      switch (GET_MODE (operands[0]))
        {
        case E_TImode:
          if (sse_reg_operand (operands[0], E_TImode)
              && general_reg_operand (operands[1], E_TImode)
              && 
#line 2564 "../../gcc/config/i386/i386.md"
(TARGET_64BIT && TARGET_SSE4_1
   && reload_completed))
            return gen_split_14 (insn, operands);
          if (general_reg_operand (operands[0], E_TImode)
              && sse_reg_operand (operands[1], E_TImode)
              && (
#line 2755 "../../gcc/config/i386/i386.md"
(TARGET_SSE4_1
   && reload_completed) && 
#line 1236 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return gen_split_16 (insn, operands);
          break;

        case E_DImode:
          if (general_reg_operand (operands[0], E_DImode)
              && sse_reg_operand (operands[1], E_DImode)
              && (
#line 2755 "../../gcc/config/i386/i386.md"
(TARGET_SSE4_1
   && reload_completed) && 
#line 1235 "../../gcc/config/i386/i386.md"
(!TARGET_64BIT)))
            return gen_split_15 (insn, operands);
          break;

        default:
          break;
        }
      break;

    default:
      break;
    }
  switch (GET_MODE (operands[0]))
    {
    case E_DImode:
      if (nonimmediate_gr_operand (operands[0], E_DImode)
          && general_gr_operand (operands[1], E_DImode)
          && (
#line 2772 "../../gcc/config/i386/i386.md"
(reload_completed) && 
#line 1195 "../../gcc/config/i386/i386.md"
(!TARGET_64BIT)))
        return gen_split_17 (insn, operands);
      if (sse_reg_operand (operands[0], E_DImode)
          && general_reg_operand (operands[1], E_DImode)
          && 
#line 2779 "../../gcc/config/i386/i386.md"
(!TARGET_64BIT && TARGET_SSE4_1
   && reload_completed))
        return gen_split_19 (insn, operands);
      break;

    case E_TImode:
      if (nonimmediate_gr_operand (operands[0], E_TImode)
          && general_gr_operand (operands[1], E_TImode)
          && (
#line 2772 "../../gcc/config/i386/i386.md"
(reload_completed) && 
#line 1196 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
        return gen_split_18 (insn, operands);
      break;

    default:
      break;
    }
  if (push_operand (operands[0], E_VOIDmode)
      && general_gr_operand (operands[1], E_VOIDmode)
      && 
#line 4010 "../../gcc/config/i386/i386.md"
(reload_completed
   && (GET_MODE (operands[0]) == TFmode
       || GET_MODE (operands[0]) == XFmode
       || GET_MODE (operands[0]) == DFmode)))
    return gen_split_44 (insn, operands);
  switch (GET_MODE (operands[0]))
    {
    case E_TFmode:
      if (nonimmediate_gr_operand (operands[0], E_TFmode)
          && general_gr_operand (operands[1], E_TFmode)
          && 
#line 4083 "../../gcc/config/i386/i386.md"
(reload_completed))
        return gen_split_45 (insn, operands);
      break;

    case E_XFmode:
      if (nonimmediate_gr_operand (operands[0], E_XFmode)
          && general_gr_operand (operands[1], E_XFmode)
          && 
#line 4156 "../../gcc/config/i386/i386.md"
(reload_completed))
        return gen_split_46 (insn, operands);
      break;

    case E_DFmode:
      if (nonimmediate_gr_operand (operands[0], E_DFmode)
          && general_gr_operand (operands[1], E_DFmode)
          && 
#line 4334 "../../gcc/config/i386/i386.md"
(!TARGET_64BIT && reload_completed))
        return gen_split_47 (insn, operands);
      break;

    default:
      break;
    }
  if (any_fp_register_operand (operands[0], E_VOIDmode)
      && memory_operand (operands[1], E_VOIDmode)
      && 
#line 4602 "../../gcc/config/i386/i386.md"
(reload_completed
   && (GET_MODE (operands[0]) == TFmode
       || GET_MODE (operands[0]) == XFmode
       || GET_MODE (operands[0]) == DFmode
       || GET_MODE (operands[0]) == SFmode)
   && ix86_standard_x87sse_constant_load_p (insn, operands[0])))
    return gen_split_48 (insn, operands);
  if (fp_register_operand (operands[0], E_SFmode)
      && immediate_operand (operands[1], E_SFmode)
      && 
#line 4626 "../../gcc/config/i386/i386.md"
(reload_completed
   && (standard_80387_constant_p (operands[1]) == 8
       || standard_80387_constant_p (operands[1]) == 9)))
    return gen_split_50 (insn, operands);
  if (fp_register_operand (operands[0], E_DFmode)
      && immediate_operand (operands[1], E_DFmode)
      && 
#line 4626 "../../gcc/config/i386/i386.md"
(reload_completed
   && (standard_80387_constant_p (operands[1]) == 8
       || standard_80387_constant_p (operands[1]) == 9)))
    return gen_split_51 (insn, operands);
  if (!fp_register_operand (operands[0], E_XFmode)
      || !immediate_operand (operands[1], E_XFmode)
      || !
#line 4626 "../../gcc/config/i386/i386.md"
(reload_completed
   && (standard_80387_constant_p (operands[1]) == 8
       || standard_80387_constant_p (operands[1]) == 9)))
    return NULL;
  return gen_split_52 (insn, operands);
}

 rtx_insn *
split_10 (rtx x1 ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12, x13, x14;
  rtx_insn *res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  operands[0] = x2;
  x3 = XEXP (x1, 1);
  x4 = XEXP (x3, 0);
  operands[2] = x4;
  x5 = XEXP (x3, 1);
  switch (GET_CODE (x5))
    {
    case XOR:
      x6 = XEXP (x5, 1);
      if (GET_CODE (x6) != CONST_INT)
        return NULL;
      x7 = XEXP (x5, 0);
      switch (GET_CODE (x7))
        {
        case MINUS:
          if (GET_MODE (x7) != E_SImode)
            return NULL;
          x8 = XEXP (x7, 0);
          if (GET_CODE (x8) != CONST_INT
              || pattern1056 (x3, 
E_SImode) != 0)
            return NULL;
          x9 = XEXP (x7, 1);
          if (GET_MODE (x9) != E_SImode)
            return NULL;
          switch (XWINT (x8, 0))
            {
            case 63L:
              if (GET_CODE (x9) != SUBREG
                  || maybe_ne (SUBREG_BYTE (x9), 0))
                return NULL;
              x10 = XEXP (x9, 0);
              if (GET_CODE (x10) != CLZ
                  || GET_MODE (x10) != E_DImode
                  || XWINT (x6, 0) != 63L)
                return NULL;
              x11 = XEXP (x10, 0);
              operands[1] = x11;
              if (!nonimmediate_operand (operands[1], E_DImode)
                  || !
#line 21361 "../../gcc/config/i386/i386.md"
(!TARGET_LZCNT && TARGET_64BIT && ix86_pre_reload_split ()))
                return NULL;
              return gen_split_880 (insn, operands);

            case 31L:
              if (GET_CODE (x9) != CLZ
                  || XWINT (x6, 0) != 31L)
                return NULL;
              x10 = XEXP (x9, 0);
              operands[1] = x10;
              if (!nonimmediate_operand (operands[1], E_SImode)
                  || !
#line 21386 "../../gcc/config/i386/i386.md"
(!TARGET_LZCNT && ix86_pre_reload_split ()))
                return NULL;
              return gen_split_881 (insn, operands);

            default:
              return NULL;
            }

        case SIGN_EXTEND:
          if (pattern832 (x7, 
SUBREG, 
63, 
E_DImode) != 0)
            return NULL;
          x8 = XEXP (x7, 0);
          x12 = XEXP (x8, 1);
          if (maybe_ne (SUBREG_BYTE (x12), 0)
              || GET_MODE (x12) != E_SImode)
            return NULL;
          x13 = XEXP (x12, 0);
          if (GET_CODE (x13) != CLZ
              || GET_MODE (x13) != E_DImode
              || XWINT (x6, 0) != 63L
              || pattern1056 (x3, 
E_DImode) != 0)
            return NULL;
          x14 = XEXP (x13, 0);
          operands[1] = x14;
          if (!nonimmediate_operand (operands[1], E_DImode)
              || !
#line 21412 "../../gcc/config/i386/i386.md"
(!TARGET_LZCNT
   && TARGET_64BIT
   && ix86_pre_reload_split ()
   && ((unsigned HOST_WIDE_INT)
       trunc_int_for_mode (UINTVAL (operands[2]) - 63, SImode)
       == UINTVAL (operands[2]) - 63)))
            return NULL;
          return gen_split_882 (insn, operands);

        default:
          return NULL;
        }

    case SIGN_EXTEND:
      if (GET_MODE (x5) != E_DImode)
        return NULL;
      x7 = XEXP (x5, 0);
      if (GET_CODE (x7) != XOR
          || pattern832 (x7, 
CLZ, 
31, 
E_SImode) != 0)
        return NULL;
      x8 = XEXP (x7, 0);
      x12 = XEXP (x8, 1);
      if (GET_MODE (x12) != E_SImode)
        return NULL;
      x9 = XEXP (x7, 1);
      if (x9 != const_int_rtx[MAX_SAVED_CONST_INT + 31]
          || !register_operand (operands[0], E_DImode)
          || GET_MODE (x3) != E_DImode
          || !const_int_operand (operands[2], E_DImode))
        return NULL;
      x13 = XEXP (x12, 0);
      operands[1] = x13;
      if (!nonimmediate_operand (operands[1], E_SImode)
          || !
#line 21441 "../../gcc/config/i386/i386.md"
(!TARGET_LZCNT
   && TARGET_64BIT
   && ix86_pre_reload_split ()
   && ((unsigned HOST_WIDE_INT)
       trunc_int_for_mode (UINTVAL (operands[2]) - 31, SImode)
       == UINTVAL (operands[2]) - 31)))
        return NULL;
      return gen_split_883 (insn, operands);

    default:
      return NULL;
    }
}

 rtx_insn *
split_12 (rtx x1 ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11;
  rtx_insn *res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  switch (GET_CODE (x3))
    {
    case NE:
    case EQ:
      operands[5] = x3;
      if (bt_comparison_operator (operands[5], E_VOIDmode))
        {
          res = split_3 (x1, insn);
          if (res != NULL_RTX)
            return res;
        }
      x4 = XEXP (x3, 0);
      if (!ix86_comparison_operator (x4, E_VOIDmode))
        return NULL;
      operands[0] = x4;
      x5 = XEXP (x4, 0);
      if (GET_CODE (x5) != REG
          || REGNO (x5) != 17)
        return NULL;
      x6 = XEXP (x4, 1);
      if (x6 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
        return NULL;
      x7 = XEXP (x3, 1);
      if (x7 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
        return NULL;
      x8 = XEXP (x2, 1);
      if (GET_CODE (x8) != LABEL_REF)
        return NULL;
      x9 = XEXP (x2, 2);
      if (GET_CODE (x9) != PC)
        return NULL;
      x10 = XEXP (x1, 0);
      if (GET_CODE (x10) != PC)
        return NULL;
      x11 = XEXP (x8, 0);
      operands[1] = x11;
      switch (GET_CODE (x3))
        {
        case NE:
          return gen_split_866 (insn, operands);

        case EQ:
          return gen_split_867 (insn, operands);

        default:
          return NULL;
        }

    case GEU:
    case LTU:
      operands[1] = x3;
      if (!add_comparison_operator (operands[1], E_VOIDmode))
        return NULL;
      x4 = XEXP (x3, 0);
      if (GET_CODE (x4) != NOT)
        return NULL;
      x8 = XEXP (x2, 1);
      if (GET_CODE (x8) != LABEL_REF)
        return NULL;
      x9 = XEXP (x2, 2);
      if (GET_CODE (x9) != PC)
        return NULL;
      x10 = XEXP (x1, 0);
      if (GET_CODE (x10) != PC)
        return NULL;
      x5 = XEXP (x4, 0);
      operands[2] = x5;
      x7 = XEXP (x3, 1);
      operands[3] = x7;
      x11 = XEXP (x8, 0);
      operands[0] = x11;
      switch (GET_MODE (x4))
        {
        case E_QImode:
          if (!register_operand (operands[2], E_QImode)
              || !nonimmediate_operand (operands[3], E_QImode))
            return NULL;
          return gen_split_861 (insn, operands);

        case E_HImode:
          if (!register_operand (operands[2], E_HImode)
              || !nonimmediate_operand (operands[3], E_HImode))
            return NULL;
          return gen_split_862 (insn, operands);

        case E_SImode:
          if (!register_operand (operands[2], E_SImode)
              || !nonimmediate_operand (operands[3], E_SImode))
            return NULL;
          return gen_split_863 (insn, operands);

        case E_DImode:
          if (!register_operand (operands[2], E_DImode)
              || !nonimmediate_operand (operands[3], E_DImode)
              || !
#line 1161 "../../gcc/config/i386/i386.md"
(TARGET_64BIT))
            return NULL;
          return gen_split_864 (insn, operands);

        default:
          return NULL;
        }

    case GTU:
    case LEU:
      operands[1] = x3;
      if (!shr_comparison_operator (operands[1], E_VOIDmode))
        return NULL;
      x8 = XEXP (x2, 1);
      if (GET_CODE (x8) != LABEL_REF)
        return NULL;
      x9 = XEXP (x2, 2);
      if (GET_CODE (x9) != PC)
        return NULL;
      x10 = XEXP (x1, 0);
      if (GET_CODE (x10) != PC)
        return NULL;
      x4 = XEXP (x3, 0);
      operands[2] = x4;
      if (!register_operand (operands[2], E_DImode))
        return NULL;
      x7 = XEXP (x3, 1);
      operands[3] = x7;
      if (!const_int_operand (operands[3], E_VOIDmode))
        return NULL;
      x11 = XEXP (x8, 0);
      operands[0] = x11;
      if (!
#line 19729 "../../gcc/config/i386/i386.md"
(TARGET_64BIT
   && IN_RANGE (exact_log2 (UINTVAL (operands[3]) + 1), 32, 63)))
        return NULL;
      return gen_split_865 (insn, operands);

    default:
      return NULL;
    }
}

 rtx_insn *
split_17 (rtx x1 ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6;
  rtx_insn *res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 0);
  operands[0] = x3;
  x4 = XEXP (x2, 1);
  x5 = XEXP (x4, 0);
  if (rtx_equal_p (x5, operands[0]))
    {
      x6 = XEXP (x4, 1);
      switch (XWINT (x6, 0))
        {
        case -65536L:
          if (register_operand (operands[0], E_SImode)
              && GET_MODE (x4) == E_SImode
              && 
#line 12860 "../../gcc/config/i386/i386.md"
((TARGET_FAST_PREFIX && !TARGET_PARTIAL_REG_STALL)
    || optimize_function_for_size_p (cfun)))
            return gen_split_314 (insn, operands);
          break;

        case -256L:
          switch (GET_MODE (operands[0]))
            {
            case E_HImode:
              if (any_QIreg_operand (operands[0], E_HImode)
                  && GET_MODE (x4) == E_HImode
                  && 
#line 12870 "../../gcc/config/i386/i386.md"
((!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun))
   && reload_completed))
                return gen_split_316 (insn, operands);
              break;

            case E_SImode:
              if (any_QIreg_operand (operands[0], E_SImode)
                  && GET_MODE (x4) == E_SImode
                  && 
#line 12870 "../../gcc/config/i386/i386.md"
((!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun))
   && reload_completed))
                return gen_split_317 (insn, operands);
              break;

            default:
              break;
            }
          break;

        case -65281L:
          switch (GET_MODE (operands[0]))
            {
            case E_HImode:
              if (QIreg_operand (operands[0], E_HImode)
                  && GET_MODE (x4) == E_HImode
                  && 
#line 12880 "../../gcc/config/i386/i386.md"
((!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun))
   && reload_completed))
                return gen_split_319 (insn, operands);
              break;

            case E_SImode:
              if (QIreg_operand (operands[0], E_SImode)
                  && GET_MODE (x4) == E_SImode
                  && 
#line 12880 "../../gcc/config/i386/i386.md"
((!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun))
   && reload_completed))
                return gen_split_320 (insn, operands);
              break;

            default:
              break;
            }
          break;

        default:
          break;
        }
    }
  operands[1] = x5;
  x6 = XEXP (x4, 1);
  operands[2] = x6;
  switch (GET_MODE (operands[0]))
    {
    case E_HImode:
      if (GET_MODE (x4) != E_HImode
          || !const_int_operand (operands[2], E_HImode))
        return NULL;
      if (QIreg_operand (operands[0], E_HImode)
          && register_operand (operands[1], E_HImode)
          && 
#line 13261 "../../gcc/config/i386/i386.md"
(reload_completed
    && (!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun))
    && !(~INTVAL (operands[2]) & ~(255 << 8))
    && !(TARGET_APX_NDD && REGNO (operands[0]) != REGNO (operands[1]))))
        return gen_split_367 (insn, operands);
      if (!any_QIreg_operand (operands[0], E_HImode)
          || !general_operand (operands[1], E_HImode)
          || !
#line 13290 "../../gcc/config/i386/i386.md"
(reload_completed
    && (!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun))
    && !(~INTVAL (operands[2]) & ~255)
    && !(INTVAL (operands[2]) & 128)
    && !(TARGET_APX_NDD
	 && !rtx_equal_p (operands[0], operands[1]))))
        return NULL;
      return gen_split_370 (insn, operands);

    case E_SImode:
      if (GET_MODE (x4) != E_SImode
          || !const_int_operand (operands[2], E_SImode))
        return NULL;
      if (QIreg_operand (operands[0], E_SImode)
          && register_operand (operands[1], E_SImode)
          && 
#line 13261 "../../gcc/config/i386/i386.md"
(reload_completed
    && (!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun))
    && !(~INTVAL (operands[2]) & ~(255 << 8))
    && !(TARGET_APX_NDD && REGNO (operands[0]) != REGNO (operands[1]))))
        return gen_split_368 (insn, operands);
      if (!any_QIreg_operand (operands[0], E_SImode)
          || !general_operand (operands[1], E_SImode)
          || !
#line 13290 "../../gcc/config/i386/i386.md"
(reload_completed
    && (!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun))
    && !(~INTVAL (operands[2]) & ~255)
    && !(INTVAL (operands[2]) & 128)
    && !(TARGET_APX_NDD
	 && !rtx_equal_p (operands[0], operands[1]))))
        return NULL;
      return gen_split_371 (insn, operands);

    default:
      return NULL;
    }
}

 rtx_insn *
split_24 (rtx x1 ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12, x13, x14, x15;
  rtx_insn *res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  x4 = XEXP (x3, 0);
  switch (GET_CODE (x4))
    {
    case PLUS:
      if (pattern574 (x1, 
PLUS, 
E_CCCmode) != 0
          || GET_MODE (x3) != E_CCCmode)
        return NULL;
      x5 = XEXP (x4, 0);
      operands[1] = x5;
      x6 = XEXP (x4, 1);
      operands[2] = x6;
      x7 = XVECEXP (x1, 0, 1);
      x8 = XEXP (x7, 0);
      operands[0] = x8;
      x9 = XEXP (x3, 1);
      if (!rtx_equal_p (x9, operands[1]))
        return NULL;
      x10 = XEXP (x7, 1);
      x11 = XEXP (x10, 0);
      if (!rtx_equal_p (x11, operands[1]))
        return NULL;
      x12 = XEXP (x10, 1);
      if (!rtx_equal_p (x12, operands[2]))
        return NULL;
      switch (GET_MODE (x4))
        {
        case E_DImode:
          if (pattern1661 (x10, 
E_DImode) != 0
              || !((
#line 10081 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (PLUS, DImode, operands, TARGET_APX_NDD)) && 
#line 1235 "../../gcc/config/i386/i386.md"
(!TARGET_64BIT)) && 
#line 10083 "../../gcc/config/i386/i386.md"
( reload_completed)))
            return NULL;
          return gen_split_200 (insn, operands);

        case E_TImode:
          if (pattern1661 (x10, 
E_TImode) != 0
              || !((
#line 10081 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (PLUS, TImode, operands, TARGET_APX_NDD)) && 
#line 1236 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 10083 "../../gcc/config/i386/i386.md"
( reload_completed)))
            return NULL;
          return gen_split_201 (insn, operands);

        default:
          return NULL;
        }

    case AND:
      x9 = XEXP (x3, 1);
      if (x9 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
        return NULL;
      x13 = XEXP (x2, 0);
      if (!flags_reg_operand (x13, E_VOIDmode)
          || !compare_operator (x3, E_VOIDmode))
        return NULL;
      x5 = XEXP (x4, 0);
      switch (GET_CODE (x5))
        {
        case SUBREG:
          if (pattern816 (x1) != 0)
            return NULL;
          operands[5] = x3;
          if (GET_MODE (x4) != E_QImode)
            return NULL;
          switch (pattern584 (x1))
            {
            case 0:
              if (!(
#line 13137 "../../gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)) && 
#line 13141 "../../gcc/config/i386/i386.md"
( reload_completed
   && !(rtx_equal_p (operands[0], operands[1])))))
                return NULL;
              return gen_split_340 (insn, operands);

            case 1:
              if (!(
#line 13137 "../../gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)) && 
#line 13141 "../../gcc/config/i386/i386.md"
( reload_completed
   && !(rtx_equal_p (operands[0], operands[1])))))
                return NULL;
              return gen_split_343 (insn, operands);

            case 2:
              if (!((
#line 13137 "../../gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)) && 
#line 1164 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 13141 "../../gcc/config/i386/i386.md"
( reload_completed
   && !(rtx_equal_p (operands[0], operands[1])))))
                return NULL;
              return gen_split_346 (insn, operands);

            default:
              return NULL;
            }

        case NOT:
          if (GET_MODE (x5) != E_SImode)
            return NULL;
          x7 = XVECEXP (x1, 0, 1);
          if (GET_CODE (x7) != CLOBBER)
            return NULL;
          operands[0] = x13;
          operands[1] = x3;
          if (GET_MODE (x4) != E_SImode)
            return NULL;
          x14 = XEXP (x5, 0);
          operands[2] = x14;
          if (!general_reg_operand (operands[2], E_SImode))
            return NULL;
          x6 = XEXP (x4, 1);
          operands[3] = x6;
          if (!nonimmediate_operand (operands[3], E_SImode))
            return NULL;
          x8 = XEXP (x7, 0);
          if (!rtx_equal_p (x8, operands[2])
              || !
#line 13416 "../../gcc/config/i386/i386.md"
(reload_completed
   && optimize_insn_for_size_p () && optimize_size > 1
   && LEGACY_INT_REG_P (operands[2])
   && !REX_INT_REG_P (operands[3])
   && !reg_overlap_mentioned_p (operands[2], operands[3])))
            return NULL;
          return gen_split_378 (insn, operands);

        default:
          return NULL;
        }

    case IOR:
      switch (pattern585 (x1, 
IOR))
        {
        case 0:
          if (!(
#line 13137 "../../gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)) && 
#line 13141 "../../gcc/config/i386/i386.md"
( reload_completed
   && !(rtx_equal_p (operands[0], operands[1])))))
            return NULL;
          return gen_split_341 (insn, operands);

        case 1:
          if (!(
#line 13137 "../../gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)) && 
#line 13141 "../../gcc/config/i386/i386.md"
( reload_completed
   && !(rtx_equal_p (operands[0], operands[1])))))
            return NULL;
          return gen_split_344 (insn, operands);

        case 2:
          if (!((
#line 13137 "../../gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)) && 
#line 1164 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 13141 "../../gcc/config/i386/i386.md"
( reload_completed
   && !(rtx_equal_p (operands[0], operands[1])))))
            return NULL;
          return gen_split_347 (insn, operands);

        default:
          return NULL;
        }

    case XOR:
      switch (pattern585 (x1, 
XOR))
        {
        case 0:
          if (!(
#line 13137 "../../gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)) && 
#line 13141 "../../gcc/config/i386/i386.md"
( reload_completed
   && !(rtx_equal_p (operands[0], operands[1])))))
            return NULL;
          return gen_split_342 (insn, operands);

        case 1:
          if (!(
#line 13137 "../../gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)) && 
#line 13141 "../../gcc/config/i386/i386.md"
( reload_completed
   && !(rtx_equal_p (operands[0], operands[1])))))
            return NULL;
          return gen_split_345 (insn, operands);

        case 2:
          if (!((
#line 13137 "../../gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)) && 
#line 1164 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 13141 "../../gcc/config/i386/i386.md"
( reload_completed
   && !(rtx_equal_p (operands[0], operands[1])))))
            return NULL;
          return gen_split_348 (insn, operands);

        default:
          return NULL;
        }

    case NOT:
      x9 = XEXP (x3, 1);
      if (x9 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
        return NULL;
      x7 = XVECEXP (x1, 0, 1);
      if (GET_CODE (x7) != SET)
        return NULL;
      x13 = XEXP (x2, 0);
      operands[0] = x13;
      if (!flags_reg_operand (operands[0], E_VOIDmode))
        return NULL;
      operands[2] = x3;
      if (!compare_operator (operands[2], E_VOIDmode))
        return NULL;
      x5 = XEXP (x4, 0);
      operands[3] = x5;
      x8 = XEXP (x7, 0);
      operands[1] = x8;
      x10 = XEXP (x7, 1);
      switch (GET_CODE (x10))
        {
        case NOT:
          x11 = XEXP (x10, 0);
          if (!rtx_equal_p (x11, operands[3]))
            return NULL;
          switch (GET_MODE (x4))
            {
            case E_QImode:
              if (!nonimmediate_operand (operands[3], E_QImode)
                  || !nonimmediate_operand (operands[1], E_QImode)
                  || GET_MODE (x10) != E_QImode
                  || !
#line 15092 "../../gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)))
                return NULL;
              return gen_split_544 (insn, operands);

            case E_HImode:
              if (!nonimmediate_operand (operands[3], E_HImode)
                  || !nonimmediate_operand (operands[1], E_HImode)
                  || GET_MODE (x10) != E_HImode
                  || !
#line 15092 "../../gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)))
                return NULL;
              return gen_split_545 (insn, operands);

            case E_SImode:
              if (!nonimmediate_operand (operands[3], E_SImode)
                  || !nonimmediate_operand (operands[1], E_SImode)
                  || GET_MODE (x10) != E_SImode
                  || !
#line 15092 "../../gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)))
                return NULL;
              return gen_split_546 (insn, operands);

            case E_DImode:
              if (!nonimmediate_operand (operands[3], E_DImode)
                  || !nonimmediate_operand (operands[1], E_DImode)
                  || GET_MODE (x10) != E_DImode
                  || !(
#line 15092 "../../gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)) && 
#line 1161 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return NULL;
              return gen_split_547 (insn, operands);

            default:
              return NULL;
            }

        case ZERO_EXTEND:
          if (pattern1237 (x1, 
NOT) != 0
              || !nonimmediate_operand (operands[3], E_SImode)
              || !register_operand (operands[1], E_DImode))
            return NULL;
          x11 = XEXP (x10, 0);
          x15 = XEXP (x11, 0);
          if (!rtx_equal_p (x15, operands[3])
              || !
#line 15119 "../../gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)))
            return NULL;
          return gen_split_548 (insn, operands);

        default:
          return NULL;
        }

    case REG:
    case SUBREG:
    case MEM:
      operands[1] = x4;
      x9 = XEXP (x3, 1);
      if (x9 != const_int_rtx[MAX_SAVED_CONST_INT + 0]
          || pattern574 (x1, 
CTZ, 
E_CCCmode) != 0
          || GET_MODE (x3) != E_CCCmode)
        return NULL;
      x7 = XVECEXP (x1, 0, 1);
      x8 = XEXP (x7, 0);
      operands[0] = x8;
      x10 = XEXP (x7, 1);
      x11 = XEXP (x10, 0);
      if (!rtx_equal_p (x11, operands[1]))
        return NULL;
      switch (pattern1495 (x10))
        {
        case 0:
          if (!(
#line 21001 "../../gcc/config/i386/i386.md"
(TARGET_BMI) && 
#line 21003 "../../gcc/config/i386/i386.md"
( TARGET_AVOID_FALSE_DEP_FOR_BMI && epilogue_completed
   && optimize_function_for_speed_p (cfun)
   && !reg_mentioned_p (operands[0], operands[1]))))
            return NULL;
          return gen_split_871 (insn, operands);

        case 1:
          if (!((
#line 21001 "../../gcc/config/i386/i386.md"
(TARGET_BMI) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 21003 "../../gcc/config/i386/i386.md"
( TARGET_AVOID_FALSE_DEP_FOR_BMI && epilogue_completed
   && optimize_function_for_speed_p (cfun)
   && !reg_mentioned_p (operands[0], operands[1]))))
            return NULL;
          return gen_split_872 (insn, operands);

        default:
          return NULL;
        }

    default:
      return NULL;
    }
}

 rtx_insn *
split_28 (rtx x1 ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
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
  switch (pattern199 (x3))
    {
    case 0:
      x4 = XEXP (x3, 0);
      operands[0] = x4;
      x5 = XEXP (x3, 1);
      x6 = XEXP (x5, 1);
      if (GET_CODE (x6) == SUBREG)
        {
          switch (pattern1333 (x5))
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
                return gen_split_589 (insn, operands);
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
                return gen_split_591 (insn, operands);
              break;

            default:
              break;
            }
        }
      if (GET_MODE (x5) == E_SImode
          && nonimmediate_operand (operands[1], E_SImode))
        {
          if (register_operand (operands[0], E_SImode))
            {
              operands[2] = x6;
              if (register_operand (operands[2], E_QImode)
                  && 
#line 17435 "../../gcc/config/i386/i386.md"
(TARGET_BMI2 && reload_completed))
                return gen_split_622 (insn, operands);
            }
          if (GET_CODE (x6) == SUBREG)
            {
              switch (pattern1506 (x6))
                {
                case 0:
                  if ((
#line 17840 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (LSHIFTRT, SImode, operands)
   && (INTVAL (operands[3]) & (4 * BITS_PER_UNIT - 1))
      == 4 * BITS_PER_UNIT - 1
   && ix86_pre_reload_split ()) && 
#line 17845 "../../gcc/config/i386/i386.md"
( 1)))
                    return gen_split_639 (insn, operands);
                  break;

                case 1:
                  if ((
#line 17888 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (LSHIFTRT, SImode, operands)
   && (INTVAL (operands[3]) & (4 * BITS_PER_UNIT - 1)) == 0
   && ix86_pre_reload_split ()) && 
#line 17892 "../../gcc/config/i386/i386.md"
( 1)))
                    return gen_split_651 (insn, operands);
                  break;

                case 2:
                  if ((
#line 17934 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (LSHIFTRT, SImode, operands)
   && (INTVAL (operands[3]) & (4 * BITS_PER_UNIT - 1)) == 0
   && ix86_pre_reload_split ()) && 
#line 17938 "../../gcc/config/i386/i386.md"
( 1)))
                    return gen_split_663 (insn, operands);
                  break;

                default:
                  break;
                }
            }
        }
      operands[2] = x6;
      switch (pattern1252 (x3))
        {
        case 0:
          if (register_operand (operands[1], E_DImode)
              && nonmemory_operand (operands[2], E_QImode)
              && (
#line 16694 "../../gcc/config/i386/i386.md"
(epilogue_completed) && 
#line 1195 "../../gcc/config/i386/i386.md"
(!TARGET_64BIT)))
            return gen_split_597 (insn, operands);
          if (nonimmediate_operand (operands[1], E_DImode)
              && register_operand (operands[2], E_QImode)
              && (
#line 17435 "../../gcc/config/i386/i386.md"
(TARGET_BMI2 && reload_completed) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return gen_split_624 (insn, operands);
          break;

        case 1:
          if ((
#line 16694 "../../gcc/config/i386/i386.md"
(epilogue_completed) && 
#line 1196 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return gen_split_599 (insn, operands);
          break;

        case 2:
          if ((
#line 17638 "../../gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)) && 
#line 17649 "../../gcc/config/i386/i386.md"
( reload_completed
   && !(rtx_equal_p (operands[0], operands[1])))))
            return gen_split_628 (insn, operands);
          break;

        case 3:
          if ((
#line 17638 "../../gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)) && 
#line 17649 "../../gcc/config/i386/i386.md"
( reload_completed
   && !(rtx_equal_p (operands[0], operands[1])))))
            return gen_split_630 (insn, operands);
          break;

        default:
          break;
        }
      if (GET_MODE (x5) != E_DImode
          || !nonimmediate_operand (operands[1], E_DImode))
        return NULL;
      switch (GET_CODE (x6))
        {
        case CONST_INT:
          if (pattern1164 (x3) != 0
              || !(
#line 17361 "../../gcc/config/i386/i386.md"
(TARGET_64BIT) && 
#line 17363 "../../gcc/config/i386/i386.md"
( reload_completed)))
            return NULL;
          return gen_split_617 (insn, operands);

        case SUBREG:
          if (maybe_ne (SUBREG_BYTE (x6), 0)
              || GET_MODE (x6) != E_QImode)
            return NULL;
          operands[0] = x4;
          if (!nonimmediate_operand (operands[0], E_DImode))
            return NULL;
          x7 = XEXP (x6, 0);
          switch (pattern1165 (x7))
            {
            case 0:
              if (!((
#line 17840 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (LSHIFTRT, DImode, operands)
   && (INTVAL (operands[3]) & (8 * BITS_PER_UNIT - 1))
      == 8 * BITS_PER_UNIT - 1
   && ix86_pre_reload_split ()) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 17845 "../../gcc/config/i386/i386.md"
( 1)))
                return NULL;
              return gen_split_642 (insn, operands);

            case 1:
              if (!((
#line 17888 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (LSHIFTRT, DImode, operands)
   && (INTVAL (operands[3]) & (8 * BITS_PER_UNIT - 1)) == 0
   && ix86_pre_reload_split ()) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 17892 "../../gcc/config/i386/i386.md"
( 1)))
                return NULL;
              return gen_split_654 (insn, operands);

            case 2:
              if (!((
#line 17934 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (LSHIFTRT, DImode, operands)
   && (INTVAL (operands[3]) & (8 * BITS_PER_UNIT - 1)) == 0
   && ix86_pre_reload_split ()) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 17938 "../../gcc/config/i386/i386.md"
( 1)))
                return NULL;
              return gen_split_666 (insn, operands);

            default:
              return NULL;
            }

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
        return gen_split_593 (insn, operands);
      if (!nonimmediate_operand (operands[0], E_DImode)
          || !nonimmediate_operand (operands[1], E_DImode)
          || !((
#line 17865 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (LSHIFTRT, DImode, operands)
   && (INTVAL (operands[3]) & (8 * BITS_PER_UNIT - 1))
      == 8 * BITS_PER_UNIT - 1
   && ix86_pre_reload_split ()) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 17870 "../../gcc/config/i386/i386.md"
( 1)))
        return NULL;
      return gen_split_648 (insn, operands);

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
      return gen_split_595 (insn, operands);

    case 3:
      if (!(
#line 17865 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (LSHIFTRT, SImode, operands)
   && (INTVAL (operands[3]) & (4 * BITS_PER_UNIT - 1))
      == 4 * BITS_PER_UNIT - 1
   && ix86_pre_reload_split ()) && 
#line 17870 "../../gcc/config/i386/i386.md"
( 1)))
        return NULL;
      return gen_split_645 (insn, operands);

    case 4:
      if (!(
#line 17912 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (LSHIFTRT, SImode, operands)
   && (INTVAL (operands[3]) & (4 * BITS_PER_UNIT - 1)) == 0
   && ix86_pre_reload_split ()) && 
#line 17916 "../../gcc/config/i386/i386.md"
( 1)))
        return NULL;
      return gen_split_657 (insn, operands);

    case 5:
      if (!((
#line 17912 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (LSHIFTRT, DImode, operands)
   && (INTVAL (operands[3]) & (8 * BITS_PER_UNIT - 1)) == 0
   && ix86_pre_reload_split ()) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 17916 "../../gcc/config/i386/i386.md"
( 1)))
        return NULL;
      return gen_split_660 (insn, operands);

    case 6:
      if (!(
#line 17964 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (LSHIFTRT, SImode, operands)
   && (INTVAL (operands[3]) & (4 * BITS_PER_UNIT - 1)) == 0
   && ix86_pre_reload_split ()) && 
#line 17968 "../../gcc/config/i386/i386.md"
( 1)))
        return NULL;
      return gen_split_669 (insn, operands);

    case 7:
      if (!((
#line 17964 "../../gcc/config/i386/i386.md"
(ix86_binary_operator_ok (LSHIFTRT, DImode, operands)
   && (INTVAL (operands[3]) & (8 * BITS_PER_UNIT - 1)) == 0
   && ix86_pre_reload_split ()) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 17968 "../../gcc/config/i386/i386.md"
( 1)))
        return NULL;
      return gen_split_672 (insn, operands);

    default:
      return NULL;
    }
}

 rtx_insn *
split_39 (rtx x1 ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6;
  rtx_insn *res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  operands[0] = x2;
  x3 = XEXP (x1, 1);
  x4 = XEXP (x3, 0);
  switch (GET_CODE (x4))
    {
    case LEU:
      x5 = XEXP (x4, 0);
      operands[1] = x5;
      if (!int_nonimmediate_operand (operands[1], E_VOIDmode))
        return NULL;
      x6 = XEXP (x4, 1);
      operands[2] = x6;
      if (!const_int_operand (operands[2], E_VOIDmode))
        return NULL;
      switch (GET_MODE (operands[0]))
        {
        case E_SImode:
          if (!register_operand (operands[0], E_SImode)
              || GET_MODE (x3) != E_SImode
              || GET_MODE (x4) != E_SImode
              || !
#line 26141 "../../gcc/config/i386/i386.md"
(x86_64_immediate_operand (operands[2], VOIDmode)
   && INTVAL (operands[2]) != -1
   && INTVAL (operands[2]) != 2147483647))
            return NULL;
          return gen_split_927 (insn, operands);

        case E_DImode:
          if (!register_operand (operands[0], E_DImode)
              || GET_MODE (x3) != E_DImode
              || GET_MODE (x4) != E_DImode
              || !(
#line 26141 "../../gcc/config/i386/i386.md"
(x86_64_immediate_operand (operands[2], VOIDmode)
   && INTVAL (operands[2]) != -1
   && INTVAL (operands[2]) != 2147483647) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return NULL;
          return gen_split_928 (insn, operands);

        default:
          return NULL;
        }

    case EQ:
      switch (pattern407 (x3))
        {
        case 0:
          return gen_split_929 (insn, operands);

        case 1:
          return gen_split_930 (insn, operands);

        case 2:
          return gen_split_931 (insn, operands);

        case 3:
          if (!
#line 1161 "../../gcc/config/i386/i386.md"
(TARGET_64BIT))
            return NULL;
          return gen_split_932 (insn, operands);

        default:
          return NULL;
        }

    case NE:
      switch (pattern407 (x3))
        {
        case 0:
          return gen_split_933 (insn, operands);

        case 1:
          return gen_split_934 (insn, operands);

        case 2:
          return gen_split_935 (insn, operands);

        case 3:
          if (!
#line 1161 "../../gcc/config/i386/i386.md"
(TARGET_64BIT))
            return NULL;
          return gen_split_936 (insn, operands);

        default:
          return NULL;
        }

    default:
      return NULL;
    }
}

 rtx_insn *
split_40 (rtx x1 ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8;
  rtx_insn *res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  if (GET_CODE (x4) != REG
      || REGNO (x4) != 17)
    return NULL;
  x5 = XEXP (x3, 1);
  if (x5 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
    return NULL;
  x6 = XEXP (x1, 0);
  operands[0] = x6;
  x7 = XEXP (x2, 1);
  operands[2] = x7;
  x8 = XEXP (x2, 2);
  operands[3] = x8;
  switch (GET_MODE (operands[0]))
    {
    case E_HImode:
      if (!register_operand (operands[0], E_HImode)
          || GET_MODE (x2) != E_HImode
          || !ix86_comparison_operator (operands[1], E_VOIDmode))
        return NULL;
      if (nonimmediate_operand (operands[2], E_HImode)
          && nonimmediate_operand (operands[3], E_HImode)
          && 
#line 26234 "../../gcc/config/i386/i386.md"
(!TARGET_64BIT && TARGET_CMOVE
   && TARGET_AVOID_MEM_OPND_FOR_CMOVE
   && (MEM_P (operands[2]) || MEM_P (operands[3]))
   && can_create_pseudo_p ()
   && optimize_insn_for_speed_p ()))
        return gen_split_937 (insn, operands);
      if (!register_operand (operands[2], E_HImode)
          || !register_operand (operands[3], E_HImode)
          || !
#line 26264 "../../gcc/config/i386/i386.md"
(TARGET_CMOVE && !TARGET_PARTIAL_REG_STALL
   && reload_completed))
        return NULL;
      return gen_split_941 (insn, operands);

    case E_SImode:
      if (pattern1198 (x2, 
E_SImode) != 0
          || !
#line 26234 "../../gcc/config/i386/i386.md"
(!TARGET_64BIT && TARGET_CMOVE
   && TARGET_AVOID_MEM_OPND_FOR_CMOVE
   && (MEM_P (operands[2]) || MEM_P (operands[3]))
   && can_create_pseudo_p ()
   && optimize_insn_for_speed_p ()))
        return NULL;
      return gen_split_938 (insn, operands);

    case E_DImode:
      if (pattern1198 (x2, 
E_DImode) != 0
          || !(
#line 26234 "../../gcc/config/i386/i386.md"
(!TARGET_64BIT && TARGET_CMOVE
   && TARGET_AVOID_MEM_OPND_FOR_CMOVE
   && (MEM_P (operands[2]) || MEM_P (operands[3]))
   && can_create_pseudo_p ()
   && optimize_insn_for_speed_p ()) && 
#line 1164 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
        return NULL;
      return gen_split_939 (insn, operands);

    case E_QImode:
      if (pattern1199 (x2) != 0
          || !
#line 26264 "../../gcc/config/i386/i386.md"
(TARGET_CMOVE && !TARGET_PARTIAL_REG_STALL
   && reload_completed))
        return NULL;
      return gen_split_940 (insn, operands);

    case E_DFmode:
      if (GET_MODE (x2) != E_DFmode
          || !nonimmediate_operand (operands[2], E_DFmode)
          || !nonimmediate_operand (operands[3], E_DFmode))
        return NULL;
      if (general_reg_operand (operands[0], E_DFmode)
          && fcmov_comparison_operator (operands[1], E_VOIDmode)
          && 
#line 26480 "../../gcc/config/i386/i386.md"
(!TARGET_64BIT && reload_completed))
        return gen_split_942 (insn, operands);
      if (!register_operand (operands[0], E_DFmode)
          || !ix86_comparison_operator (operands[1], E_VOIDmode)
          || !
#line 26514 "../../gcc/config/i386/i386.md"
(!TARGET_64BIT && TARGET_80387 && TARGET_CMOVE
   && TARGET_AVOID_MEM_OPND_FOR_CMOVE
   && (MEM_P (operands[2]) || MEM_P (operands[3]))
   && can_create_pseudo_p ()
   && optimize_insn_for_speed_p ()))
        return NULL;
      return gen_split_944 (insn, operands);

    case E_SFmode:
      if (pattern1198 (x2, 
E_SFmode) != 0
          || !
#line 26514 "../../gcc/config/i386/i386.md"
(!TARGET_64BIT && TARGET_80387 && TARGET_CMOVE
   && TARGET_AVOID_MEM_OPND_FOR_CMOVE
   && (MEM_P (operands[2]) || MEM_P (operands[3]))
   && can_create_pseudo_p ()
   && optimize_insn_for_speed_p ()))
        return NULL;
      return gen_split_943 (insn, operands);

    default:
      return NULL;
    }
}

 rtx_insn *
split_44 (rtx x1 ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
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
    case REG:
      operands[1] = x4;
      if (general_reg_operand (operands[1], E_VOIDmode)
          && general_reg_operand (operands[0], E_VOIDmode)
          && 
#line 27604 "../../gcc/config/i386/i386.md"
(! TARGET_PARTIAL_REG_STALL && reload_completed
   && (GET_MODE (operands[0]) == HImode
       || (GET_MODE (operands[0]) == QImode && TARGET_PROMOTE_QImode))))
        return gen_split_977 (insn, operands);
      if (general_reg_operand (operands[1], E_V4QImode)
          && general_reg_operand (operands[0], E_V4QImode)
          && GET_MODE (x3) == E_V4QImode
          && 
#line 4557 "../../gcc/config/i386/mmx.md"
(reload_completed))
        return gen_split_1059 (insn, operands);
      if (general_reg_operand (operands[1], E_V2QImode)
          && general_reg_operand (operands[0], E_V2QImode)
          && GET_MODE (x3) == E_V2QImode
          && 
#line 4557 "../../gcc/config/i386/mmx.md"
(reload_completed))
        return gen_split_1060 (insn, operands);
      if (general_reg_operand (operands[1], E_V2HImode)
          && general_reg_operand (operands[0], E_V2HImode)
          && GET_MODE (x3) == E_V2HImode
          && 
#line 4557 "../../gcc/config/i386/mmx.md"
(reload_completed))
        return gen_split_1061 (insn, operands);
      if (sse_reg_operand (operands[1], E_V4QImode)
          && sse_reg_operand (operands[0], E_V4QImode)
          && GET_MODE (x3) == E_V4QImode
          && 
#line 4569 "../../gcc/config/i386/mmx.md"
(TARGET_SSE2 && reload_completed))
        return gen_split_1062 (insn, operands);
      if (sse_reg_operand (operands[1], E_V2QImode)
          && sse_reg_operand (operands[0], E_V2QImode)
          && GET_MODE (x3) == E_V2QImode
          && 
#line 4569 "../../gcc/config/i386/mmx.md"
(TARGET_SSE2 && reload_completed))
        return gen_split_1063 (insn, operands);
      if (sse_reg_operand (operands[1], E_V2HImode)
          && sse_reg_operand (operands[0], E_V2HImode)
          && GET_MODE (x3) == E_V2HImode
          && 
#line 4569 "../../gcc/config/i386/mmx.md"
(TARGET_SSE2 && reload_completed))
        return gen_split_1064 (insn, operands);
      if (mask_reg_operand (operands[1], E_QImode)
          && mask_reg_operand (operands[0], E_QImode)
          && GET_MODE (x3) == E_QImode
          && 
#line 2219 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && reload_completed))
        return gen_split_1201 (insn, operands);
      if (mask_reg_operand (operands[1], E_HImode)
          && mask_reg_operand (operands[0], E_HImode)
          && GET_MODE (x3) == E_HImode
          && 
#line 2219 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && reload_completed))
        return gen_split_1202 (insn, operands);
      if (mask_reg_operand (operands[1], E_SImode)
          && mask_reg_operand (operands[0], E_SImode)
          && GET_MODE (x3) == E_SImode
          && (
#line 2219 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && reload_completed) && 
#line 2075 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW)))
        return gen_split_1203 (insn, operands);
      if (!mask_reg_operand (operands[1], E_DImode)
          || !mask_reg_operand (operands[0], E_DImode)
          || GET_MODE (x3) != E_DImode
          || !(
#line 2219 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && reload_completed) && 
#line 2075 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW)))
        return NULL;
      return gen_split_1204 (insn, operands);

    case UNSPEC:
      if (XVECLEN (x4, 0) != 3)
        return NULL;
      x5 = XVECEXP (x4, 0, 0);
      operands[1] = x5;
      x6 = XVECEXP (x4, 0, 1);
      operands[2] = x6;
      x7 = XVECEXP (x4, 0, 2);
      operands[3] = x7;
      switch (XINT (x4, 1))
        {
        case 59:
          switch (GET_MODE (operands[0]))
            {
            case E_HImode:
              switch (pattern973 (x3))
                {
                case 0:
                  if (!((
#line 4469 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && ix86_pre_reload_split ()) && 
#line 308 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)) && 
#line 4471 "../../gcc/config/i386/sse.md"
( 1)))
                    return NULL;
                  return gen_split_1379 (insn, operands);

                case 1:
                  if (!((
#line 4469 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && ix86_pre_reload_split ()) && 
#line 311 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL)) && 
#line 4471 "../../gcc/config/i386/sse.md"
( 1)))
                    return NULL;
                  return gen_split_1386 (insn, operands);

                case 2:
                  if (!((
#line 4469 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && ix86_pre_reload_split ()) && 
#line 313 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)) && 
#line 4471 "../../gcc/config/i386/sse.md"
( 1)))
                    return NULL;
                  return gen_split_1388 (insn, operands);

                case 3:
                  if (!((
#line 4564 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && ix86_pre_reload_split ()) && 
#line 318 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 4566 "../../gcc/config/i386/sse.md"
( 1)))
                    return NULL;
                  return gen_split_1414 (insn, operands);

                case 4:
                  if (!((
#line 4564 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && ix86_pre_reload_split ()) && 
#line 319 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 4566 "../../gcc/config/i386/sse.md"
( 1)))
                    return NULL;
                  return gen_split_1420 (insn, operands);

                default:
                  return NULL;
                }

            case E_QImode:
              switch (pattern974 (x3))
                {
                case 0:
                  if (!((
#line 4469 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && ix86_pre_reload_split ()) && 
#line 308 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 4471 "../../gcc/config/i386/sse.md"
( 1)))
                    return NULL;
                  return gen_split_1380 (insn, operands);

                case 1:
                  if (!((
#line 4469 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && ix86_pre_reload_split ()) && 
#line 308 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 4471 "../../gcc/config/i386/sse.md"
( 1)))
                    return NULL;
                  return gen_split_1381 (insn, operands);

                case 2:
                  if (!((
#line 4469 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && ix86_pre_reload_split ()) && 
#line 309 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)) && 
#line 4471 "../../gcc/config/i386/sse.md"
( 1)))
                    return NULL;
                  return gen_split_1382 (insn, operands);

                case 3:
                  if (!((
#line 4469 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && ix86_pre_reload_split ()) && 
#line 309 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 4471 "../../gcc/config/i386/sse.md"
( 1)))
                    return NULL;
                  return gen_split_1383 (insn, operands);

                case 4:
                  if (!((
#line 4469 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && ix86_pre_reload_split ()) && 
#line 309 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 4471 "../../gcc/config/i386/sse.md"
( 1)))
                    return NULL;
                  return gen_split_1384 (insn, operands);

                case 5:
                  if (!((
#line 4469 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && ix86_pre_reload_split ()) && 
#line 312 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL)) && 
#line 4471 "../../gcc/config/i386/sse.md"
( 1)))
                    return NULL;
                  return gen_split_1387 (insn, operands);

                case 6:
                  if (!((
#line 4469 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && ix86_pre_reload_split ()) && 
#line 313 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 4471 "../../gcc/config/i386/sse.md"
( 1)))
                    return NULL;
                  return gen_split_1389 (insn, operands);

                case 7:
                  if (!((
#line 4469 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && ix86_pre_reload_split ()) && 
#line 313 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 4471 "../../gcc/config/i386/sse.md"
( 1)))
                    return NULL;
                  return gen_split_1390 (insn, operands);

                case 8:
                  if (!((
#line 4469 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && ix86_pre_reload_split ()) && 
#line 314 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)) && 
#line 4471 "../../gcc/config/i386/sse.md"
( 1)))
                    return NULL;
                  return gen_split_1391 (insn, operands);

                case 9:
                  if (!((
#line 4469 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && ix86_pre_reload_split ()) && 
#line 314 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 4471 "../../gcc/config/i386/sse.md"
( 1)))
                    return NULL;
                  return gen_split_1392 (insn, operands);

                case 10:
                  if (!((
#line 4469 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && ix86_pre_reload_split ()) && 
#line 314 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 4471 "../../gcc/config/i386/sse.md"
( 1)))
                    return NULL;
                  return gen_split_1393 (insn, operands);

                case 11:
                  if (!((
#line 4564 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && ix86_pre_reload_split ()) && 
#line 319 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 4566 "../../gcc/config/i386/sse.md"
( 1)))
                    return NULL;
                  return gen_split_1422 (insn, operands);

                default:
                  return NULL;
                }

            case E_SImode:
              switch (pattern989 (x3))
                {
                case 0:
                  if (!((
#line 4469 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && ix86_pre_reload_split ()) && 
#line 310 "../../gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_EVEX512)) && 
#line 4471 "../../gcc/config/i386/sse.md"
( 1)))
                    return NULL;
                  return gen_split_1385 (insn, operands);

                case 1:
                  if (!((
#line 4564 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && ix86_pre_reload_split ()) && 
#line 318 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 4566 "../../gcc/config/i386/sse.md"
( 1)))
                    return NULL;
                  return gen_split_1416 (insn, operands);

                case 2:
                  if (!((
#line 4564 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && ix86_pre_reload_split ()) && 
#line 319 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)) && 
#line 4566 "../../gcc/config/i386/sse.md"
( 1)))
                    return NULL;
                  return gen_split_1418 (insn, operands);

                default:
                  return NULL;
                }

            case E_DImode:
              if (pattern990 (x3) != 0
                  || !((
#line 4564 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && ix86_pre_reload_split ()) && 
#line 318 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)) && 
#line 4566 "../../gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_1412 (insn, operands);

            default:
              return NULL;
            }

        case 157:
          if (!const_0_to_7_operand (operands[3], E_SImode))
            return NULL;
          switch (GET_MODE (operands[0]))
            {
            case E_DImode:
              if (pattern1090 (x3, 
E_V64QImode, 
E_DImode) != 0
                  || !((
#line 4564 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && ix86_pre_reload_split ()) && 
#line 318 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)) && 
#line 4566 "../../gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_1413 (insn, operands);

            case E_HImode:
              switch (pattern1073 (x3))
                {
                case 0:
                  if (!((
#line 4564 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && ix86_pre_reload_split ()) && 
#line 318 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 4566 "../../gcc/config/i386/sse.md"
( 1)))
                    return NULL;
                  return gen_split_1415 (insn, operands);

                case 1:
                  if (!((
#line 4564 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && ix86_pre_reload_split ()) && 
#line 319 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 4566 "../../gcc/config/i386/sse.md"
( 1)))
                    return NULL;
                  return gen_split_1421 (insn, operands);

                case 2:
                  if (!((
#line 4762 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && ix86_pre_reload_split ()) && 
#line 501 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)) && 
#line 4764 "../../gcc/config/i386/sse.md"
( 1)))
                    return NULL;
                  return gen_split_1460 (insn, operands);

                default:
                  return NULL;
                }

            case E_SImode:
              switch (pattern1091 (x3))
                {
                case 0:
                  if (!((
#line 4564 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && ix86_pre_reload_split ()) && 
#line 318 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 4566 "../../gcc/config/i386/sse.md"
( 1)))
                    return NULL;
                  return gen_split_1417 (insn, operands);

                case 1:
                  if (!((
#line 4564 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && ix86_pre_reload_split ()) && 
#line 319 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)) && 
#line 4566 "../../gcc/config/i386/sse.md"
( 1)))
                    return NULL;
                  return gen_split_1419 (insn, operands);

                default:
                  return NULL;
                }

            case E_QImode:
              switch (pattern1074 (x3))
                {
                case 0:
                  if (!((
#line 4564 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && ix86_pre_reload_split ()) && 
#line 319 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 4566 "../../gcc/config/i386/sse.md"
( 1)))
                    return NULL;
                  return gen_split_1423 (insn, operands);

                case 1:
                  if (!((
#line 4762 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && ix86_pre_reload_split ()) && 
#line 501 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 4764 "../../gcc/config/i386/sse.md"
( 1)))
                    return NULL;
                  return gen_split_1461 (insn, operands);

                case 2:
                  if (!((
#line 4762 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && ix86_pre_reload_split ()) && 
#line 501 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 4764 "../../gcc/config/i386/sse.md"
( 1)))
                    return NULL;
                  return gen_split_1462 (insn, operands);

                case 3:
                  if (!((
#line 4762 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && ix86_pre_reload_split ()) && 
#line 502 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)) && 
#line 4764 "../../gcc/config/i386/sse.md"
( 1)))
                    return NULL;
                  return gen_split_1463 (insn, operands);

                case 4:
                  if (!((
#line 4762 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && ix86_pre_reload_split ()) && 
#line 502 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 4764 "../../gcc/config/i386/sse.md"
( 1)))
                    return NULL;
                  return gen_split_1464 (insn, operands);

                case 5:
                  if (!((
#line 4762 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && ix86_pre_reload_split ()) && 
#line 502 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 4764 "../../gcc/config/i386/sse.md"
( 1)))
                    return NULL;
                  return gen_split_1465 (insn, operands);

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
split_58 (rtx x1 ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4;
  rtx_insn *res ATTRIBUTE_UNUSED;
  switch (GET_CODE (operands[4]))
    {
    case REG:
    case SUBREG:
    case MEM:
      x2 = XEXP (x1, 1);
      switch (pattern1290 (x2))
        {
        case 0:
          if (((
#line 4118 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()) && 
#line 422 "../../gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 4120 "../../gcc/config/i386/sse.md"
( 1)))
            return gen_split_1306 (insn, operands);
          break;

        case 1:
          if ((
#line 4118 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()) && 
#line 4120 "../../gcc/config/i386/sse.md"
( 1)))
            return gen_split_1307 (insn, operands);
          break;

        case 2:
          if (((
#line 4118 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()) && 
#line 423 "../../gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 4120 "../../gcc/config/i386/sse.md"
( 1)))
            return gen_split_1308 (insn, operands);
          break;

        case 3:
          if (((
#line 4118 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()) && 
#line 423 "../../gcc/config/i386/sse.md"
(TARGET_SSE2)) && 
#line 4120 "../../gcc/config/i386/sse.md"
( 1)))
            return gen_split_1309 (insn, operands);
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
              if (pattern1532 (x2, 
E_V32HImode, 
E_SImode) == 0)
                {
                  if (vector_all_ones_operand (operands[1], E_V32HImode)
                      && ((
#line 17157 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && ix86_pre_reload_split ()) && 
#line 764 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512)) && 
#line 17159 "../../gcc/config/i386/sse.md"
( 1)))
                    return gen_split_3216 (insn, operands);
                  if (const1_operand (operands[1], E_V32HImode)
                      && (
#line 17368 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && ix86_pre_reload_split ()) && 
#line 764 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512)))
                    return gen_split_3235 (insn, operands);
                }
              break;

            case E_V16HImode:
              if (pattern1532 (x2, 
E_V16HImode, 
E_HImode) == 0)
                {
                  if (vector_all_ones_operand (operands[1], E_V16HImode)
                      && ((
#line 17157 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && ix86_pre_reload_split ()) && 
#line 765 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL && TARGET_AVX512BW)) && 
#line 17159 "../../gcc/config/i386/sse.md"
( 1)))
                    return gen_split_3217 (insn, operands);
                  if (const1_operand (operands[1], E_V16HImode)
                      && (
#line 17368 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && ix86_pre_reload_split ()) && 
#line 765 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL && TARGET_AVX512BW)))
                    return gen_split_3236 (insn, operands);
                }
              break;

            case E_V8HImode:
              if (pattern1532 (x2, 
E_V8HImode, 
E_QImode) == 0)
                {
                  if (vector_all_ones_operand (operands[1], E_V8HImode)
                      && ((
#line 17157 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && ix86_pre_reload_split ()) && 
#line 766 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL && TARGET_AVX512BW)) && 
#line 17159 "../../gcc/config/i386/sse.md"
( 1)))
                    return gen_split_3218 (insn, operands);
                  if (const1_operand (operands[1], E_V8HImode)
                      && (
#line 17368 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && ix86_pre_reload_split ()) && 
#line 766 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL && TARGET_AVX512BW)))
                    return gen_split_3237 (insn, operands);
                }
              break;

            case E_V16SImode:
              if (pattern1532 (x2, 
E_V16SImode, 
E_HImode) == 0)
                {
                  if (vector_all_ones_operand (operands[1], E_V16SImode)
                      && ((
#line 17157 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && ix86_pre_reload_split ()) && 
#line 767 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)) && 
#line 17159 "../../gcc/config/i386/sse.md"
( 1)))
                    return gen_split_3219 (insn, operands);
                  if (const1_operand (operands[1], E_V16SImode)
                      && (
#line 17368 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && ix86_pre_reload_split ()) && 
#line 767 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                    return gen_split_3238 (insn, operands);
                }
              break;

            case E_V8SImode:
              if (pattern1532 (x2, 
E_V8SImode, 
E_QImode) == 0)
                {
                  if (vector_all_ones_operand (operands[1], E_V8SImode)
                      && ((
#line 17157 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && ix86_pre_reload_split ()) && 
#line 767 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 17159 "../../gcc/config/i386/sse.md"
( 1)))
                    return gen_split_3220 (insn, operands);
                  if (const1_operand (operands[1], E_V8SImode)
                      && (
#line 17368 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && ix86_pre_reload_split ()) && 
#line 767 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                    return gen_split_3239 (insn, operands);
                }
              break;

            case E_V4SImode:
              if (pattern1532 (x2, 
E_V4SImode, 
E_QImode) == 0)
                {
                  if (vector_all_ones_operand (operands[1], E_V4SImode)
                      && ((
#line 17157 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && ix86_pre_reload_split ()) && 
#line 767 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 17159 "../../gcc/config/i386/sse.md"
( 1)))
                    return gen_split_3221 (insn, operands);
                  if (const1_operand (operands[1], E_V4SImode)
                      && (
#line 17368 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && ix86_pre_reload_split ()) && 
#line 767 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                    return gen_split_3240 (insn, operands);
                }
              break;

            case E_V8DImode:
              if (pattern1532 (x2, 
E_V8DImode, 
E_QImode) == 0)
                {
                  if (vector_all_ones_operand (operands[1], E_V8DImode)
                      && ((
#line 17157 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && ix86_pre_reload_split ()) && 
#line 768 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)) && 
#line 17159 "../../gcc/config/i386/sse.md"
( 1)))
                    return gen_split_3222 (insn, operands);
                  if (const1_operand (operands[1], E_V8DImode)
                      && (
#line 17368 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && ix86_pre_reload_split ()) && 
#line 768 "../../gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                    return gen_split_3241 (insn, operands);
                }
              break;

            case E_V4DImode:
              if (pattern1532 (x2, 
E_V4DImode, 
E_QImode) == 0)
                {
                  if (vector_all_ones_operand (operands[1], E_V4DImode)
                      && ((
#line 17157 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && ix86_pre_reload_split ()) && 
#line 768 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 17159 "../../gcc/config/i386/sse.md"
( 1)))
                    return gen_split_3223 (insn, operands);
                  if (const1_operand (operands[1], E_V4DImode)
                      && (
#line 17368 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && ix86_pre_reload_split ()) && 
#line 768 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                    return gen_split_3242 (insn, operands);
                }
              break;

            case E_V2DImode:
              if (pattern1532 (x2, 
E_V2DImode, 
E_QImode) == 0)
                {
                  if (vector_all_ones_operand (operands[1], E_V2DImode)
                      && ((
#line 17157 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && ix86_pre_reload_split ()) && 
#line 768 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 17159 "../../gcc/config/i386/sse.md"
( 1)))
                    return gen_split_3224 (insn, operands);
                  if (const1_operand (operands[1], E_V2DImode)
                      && (
#line 17368 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && ix86_pre_reload_split ()) && 
#line 768 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                    return gen_split_3243 (insn, operands);
                }
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
              && (
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
	   && !MEM_P (operands[4])))) && 
#line 17967 "../../gcc/config/i386/sse.md"
( 1)))
            return gen_split_3264 (insn, operands);
          if (nonimmediate_operand (operands[3], E_V16QImode)
              && nonimmediate_operand (operands[4], E_V16QImode)
              && (
#line 18120 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()
   && (INTVAL (operands[5]) == 2 || INTVAL (operands[5]) == 5)) && 
#line 18123 "../../gcc/config/i386/sse.md"
( 1)))
            return gen_split_3286 (insn, operands);
        }
      if (!const0_operand (operands[1], E_V16QImode)
          || !vector_all_ones_operand (operands[2], E_V16QImode)
          || !nonimmediate_operand (operands[3], E_V16QImode)
          || !nonimmediate_operand (operands[4], E_V16QImode)
          || !(
#line 18146 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()
     /* NE is commutative.  */
   && (INTVAL (operands[5]) == 4
	  /* LE, 3 must be register.  */
       || INTVAL (operands[5]) == 2
	  /* NLT aka GE, 4 must be register and we swap operands.  */
       || INTVAL (operands[5]) == 5)) && 
#line 18154 "../../gcc/config/i386/sse.md"
( 1)))
        return NULL;
      return gen_split_3302 (insn, operands);

    case 1:
      if (vector_all_ones_operand (operands[1], E_V8HImode)
          && const0_operand (operands[2], E_V8HImode))
        {
          if (nonimm_or_0_operand (operands[3], E_V8HImode)
              && nonimm_or_0_operand (operands[4], E_V8HImode)
              && (
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
	   && !MEM_P (operands[4])))) && 
#line 17967 "../../gcc/config/i386/sse.md"
( 1)))
            return gen_split_3265 (insn, operands);
          if (nonimmediate_operand (operands[3], E_V8HImode)
              && nonimmediate_operand (operands[4], E_V8HImode)
              && (
#line 18120 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()
   && (INTVAL (operands[5]) == 2 || INTVAL (operands[5]) == 5)) && 
#line 18123 "../../gcc/config/i386/sse.md"
( 1)))
            return gen_split_3288 (insn, operands);
        }
      if (!const0_operand (operands[1], E_V8HImode)
          || !vector_all_ones_operand (operands[2], E_V8HImode)
          || !nonimmediate_operand (operands[3], E_V8HImode)
          || !nonimmediate_operand (operands[4], E_V8HImode)
          || !(
#line 18146 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()
     /* NE is commutative.  */
   && (INTVAL (operands[5]) == 4
	  /* LE, 3 must be register.  */
       || INTVAL (operands[5]) == 2
	  /* NLT aka GE, 4 must be register and we swap operands.  */
       || INTVAL (operands[5]) == 5)) && 
#line 18154 "../../gcc/config/i386/sse.md"
( 1)))
        return NULL;
      return gen_split_3303 (insn, operands);

    case 2:
      if (vector_all_ones_operand (operands[1], E_V4SImode)
          && const0_operand (operands[2], E_V4SImode))
        {
          if (nonimm_or_0_operand (operands[3], E_V4SImode)
              && nonimm_or_0_operand (operands[4], E_V4SImode)
              && (
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
	   && !MEM_P (operands[4])))) && 
#line 17967 "../../gcc/config/i386/sse.md"
( 1)))
            return gen_split_3266 (insn, operands);
          if (nonimmediate_operand (operands[3], E_V4SImode)
              && nonimmediate_operand (operands[4], E_V4SImode)
              && (
#line 18120 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()
   && (INTVAL (operands[5]) == 2 || INTVAL (operands[5]) == 5)) && 
#line 18123 "../../gcc/config/i386/sse.md"
( 1)))
            return gen_split_3290 (insn, operands);
        }
      if (!const0_operand (operands[1], E_V4SImode)
          || !vector_all_ones_operand (operands[2], E_V4SImode)
          || !nonimmediate_operand (operands[3], E_V4SImode)
          || !nonimmediate_operand (operands[4], E_V4SImode)
          || !(
#line 18146 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()
     /* NE is commutative.  */
   && (INTVAL (operands[5]) == 4
	  /* LE, 3 must be register.  */
       || INTVAL (operands[5]) == 2
	  /* NLT aka GE, 4 must be register and we swap operands.  */
       || INTVAL (operands[5]) == 5)) && 
#line 18154 "../../gcc/config/i386/sse.md"
( 1)))
        return NULL;
      return gen_split_3304 (insn, operands);

    case 3:
      if (vector_all_ones_operand (operands[1], E_V2DImode)
          && const0_operand (operands[2], E_V2DImode))
        {
          if (nonimm_or_0_operand (operands[3], E_V2DImode)
              && nonimm_or_0_operand (operands[4], E_V2DImode)
              && (
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
	   && !MEM_P (operands[4])))) && 
#line 17967 "../../gcc/config/i386/sse.md"
( 1)))
            return gen_split_3267 (insn, operands);
          if (nonimmediate_operand (operands[3], E_V2DImode)
              && nonimmediate_operand (operands[4], E_V2DImode)
              && (
#line 18120 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()
   && (INTVAL (operands[5]) == 2 || INTVAL (operands[5]) == 5)) && 
#line 18123 "../../gcc/config/i386/sse.md"
( 1)))
            return gen_split_3292 (insn, operands);
        }
      if (!const0_operand (operands[1], E_V2DImode)
          || !vector_all_ones_operand (operands[2], E_V2DImode)
          || !nonimmediate_operand (operands[3], E_V2DImode)
          || !nonimmediate_operand (operands[4], E_V2DImode)
          || !(
#line 18146 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()
     /* NE is commutative.  */
   && (INTVAL (operands[5]) == 4
	  /* LE, 3 must be register.  */
       || INTVAL (operands[5]) == 2
	  /* NLT aka GE, 4 must be register and we swap operands.  */
       || INTVAL (operands[5]) == 5)) && 
#line 18154 "../../gcc/config/i386/sse.md"
( 1)))
        return NULL;
      return gen_split_3305 (insn, operands);

    case 4:
      if (vector_all_ones_operand (operands[1], E_V32QImode)
          && const0_operand (operands[2], E_V32QImode))
        {
          if (nonimm_or_0_operand (operands[3], E_V32QImode)
              && nonimm_or_0_operand (operands[4], E_V32QImode)
              && (
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
	   && !MEM_P (operands[4])))) && 
#line 17967 "../../gcc/config/i386/sse.md"
( 1)))
            return gen_split_3268 (insn, operands);
          if (nonimmediate_operand (operands[3], E_V32QImode)
              && nonimmediate_operand (operands[4], E_V32QImode)
              && (
#line 18120 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()
   && (INTVAL (operands[5]) == 2 || INTVAL (operands[5]) == 5)) && 
#line 18123 "../../gcc/config/i386/sse.md"
( 1)))
            return gen_split_3294 (insn, operands);
        }
      if (!const0_operand (operands[1], E_V32QImode)
          || !vector_all_ones_operand (operands[2], E_V32QImode)
          || !nonimmediate_operand (operands[3], E_V32QImode)
          || !nonimmediate_operand (operands[4], E_V32QImode)
          || !(
#line 18146 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()
     /* NE is commutative.  */
   && (INTVAL (operands[5]) == 4
	  /* LE, 3 must be register.  */
       || INTVAL (operands[5]) == 2
	  /* NLT aka GE, 4 must be register and we swap operands.  */
       || INTVAL (operands[5]) == 5)) && 
#line 18154 "../../gcc/config/i386/sse.md"
( 1)))
        return NULL;
      return gen_split_3306 (insn, operands);

    case 5:
      if (vector_all_ones_operand (operands[1], E_V16HImode)
          && const0_operand (operands[2], E_V16HImode))
        {
          if (nonimm_or_0_operand (operands[3], E_V16HImode)
              && nonimm_or_0_operand (operands[4], E_V16HImode)
              && (
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
	   && !MEM_P (operands[4])))) && 
#line 17967 "../../gcc/config/i386/sse.md"
( 1)))
            return gen_split_3269 (insn, operands);
          if (nonimmediate_operand (operands[3], E_V16HImode)
              && nonimmediate_operand (operands[4], E_V16HImode)
              && (
#line 18120 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()
   && (INTVAL (operands[5]) == 2 || INTVAL (operands[5]) == 5)) && 
#line 18123 "../../gcc/config/i386/sse.md"
( 1)))
            return gen_split_3296 (insn, operands);
        }
      if (!const0_operand (operands[1], E_V16HImode)
          || !vector_all_ones_operand (operands[2], E_V16HImode)
          || !nonimmediate_operand (operands[3], E_V16HImode)
          || !nonimmediate_operand (operands[4], E_V16HImode)
          || !(
#line 18146 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()
     /* NE is commutative.  */
   && (INTVAL (operands[5]) == 4
	  /* LE, 3 must be register.  */
       || INTVAL (operands[5]) == 2
	  /* NLT aka GE, 4 must be register and we swap operands.  */
       || INTVAL (operands[5]) == 5)) && 
#line 18154 "../../gcc/config/i386/sse.md"
( 1)))
        return NULL;
      return gen_split_3307 (insn, operands);

    case 6:
      if (vector_all_ones_operand (operands[1], E_V8SImode)
          && const0_operand (operands[2], E_V8SImode))
        {
          if (nonimm_or_0_operand (operands[3], E_V8SImode)
              && nonimm_or_0_operand (operands[4], E_V8SImode)
              && (
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
	   && !MEM_P (operands[4])))) && 
#line 17967 "../../gcc/config/i386/sse.md"
( 1)))
            return gen_split_3270 (insn, operands);
          if (nonimmediate_operand (operands[3], E_V8SImode)
              && nonimmediate_operand (operands[4], E_V8SImode)
              && (
#line 18120 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()
   && (INTVAL (operands[5]) == 2 || INTVAL (operands[5]) == 5)) && 
#line 18123 "../../gcc/config/i386/sse.md"
( 1)))
            return gen_split_3298 (insn, operands);
        }
      if (!const0_operand (operands[1], E_V8SImode)
          || !vector_all_ones_operand (operands[2], E_V8SImode)
          || !nonimmediate_operand (operands[3], E_V8SImode)
          || !nonimmediate_operand (operands[4], E_V8SImode)
          || !(
#line 18146 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()
     /* NE is commutative.  */
   && (INTVAL (operands[5]) == 4
	  /* LE, 3 must be register.  */
       || INTVAL (operands[5]) == 2
	  /* NLT aka GE, 4 must be register and we swap operands.  */
       || INTVAL (operands[5]) == 5)) && 
#line 18154 "../../gcc/config/i386/sse.md"
( 1)))
        return NULL;
      return gen_split_3308 (insn, operands);

    case 7:
      if (vector_all_ones_operand (operands[1], E_V4DImode)
          && const0_operand (operands[2], E_V4DImode))
        {
          if (nonimm_or_0_operand (operands[3], E_V4DImode)
              && nonimm_or_0_operand (operands[4], E_V4DImode)
              && (
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
	   && !MEM_P (operands[4])))) && 
#line 17967 "../../gcc/config/i386/sse.md"
( 1)))
            return gen_split_3271 (insn, operands);
          if (nonimmediate_operand (operands[3], E_V4DImode)
              && nonimmediate_operand (operands[4], E_V4DImode)
              && (
#line 18120 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()
   && (INTVAL (operands[5]) == 2 || INTVAL (operands[5]) == 5)) && 
#line 18123 "../../gcc/config/i386/sse.md"
( 1)))
            return gen_split_3300 (insn, operands);
        }
      if (!const0_operand (operands[1], E_V4DImode)
          || !vector_all_ones_operand (operands[2], E_V4DImode)
          || !nonimmediate_operand (operands[3], E_V4DImode)
          || !nonimmediate_operand (operands[4], E_V4DImode)
          || !(
#line 18146 "../../gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()
     /* NE is commutative.  */
   && (INTVAL (operands[5]) == 4
	  /* LE, 3 must be register.  */
       || INTVAL (operands[5]) == 2
	  /* NLT aka GE, 4 must be register and we swap operands.  */
       || INTVAL (operands[5]) == 5)) && 
#line 18154 "../../gcc/config/i386/sse.md"
( 1)))
        return NULL;
      return gen_split_3309 (insn, operands);

    default:
      return NULL;
    }
}

 rtx_insn *
split_73 (rtx x1 ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
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
              return gen_split_1650 (insn, operands);

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
              return gen_split_1677 (insn, operands);

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
              return gen_split_1704 (insn, operands);

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
              return gen_split_1731 (insn, operands);

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
              return gen_split_1758 (insn, operands);

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
              return gen_split_1785 (insn, operands);

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
              return gen_split_1812 (insn, operands);

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
              return gen_split_1839 (insn, operands);

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
              return gen_split_1866 (insn, operands);

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
              return gen_split_1893 (insn, operands);

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
              return gen_split_1920 (insn, operands);

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
              return gen_split_1947 (insn, operands);

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
              return gen_split_1653 (insn, operands);

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
              return gen_split_1680 (insn, operands);

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
              return gen_split_1707 (insn, operands);

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
              return gen_split_1734 (insn, operands);

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
              return gen_split_1761 (insn, operands);

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
              return gen_split_1788 (insn, operands);

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
              return gen_split_1815 (insn, operands);

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
              return gen_split_1842 (insn, operands);

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
              return gen_split_1869 (insn, operands);

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
              return gen_split_1896 (insn, operands);

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
              return gen_split_1923 (insn, operands);

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
              return gen_split_1950 (insn, operands);

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
              return gen_split_1656 (insn, operands);

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
              return gen_split_1683 (insn, operands);

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
              return gen_split_1710 (insn, operands);

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
              return gen_split_1737 (insn, operands);

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
              return gen_split_1764 (insn, operands);

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
              return gen_split_1791 (insn, operands);

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
              return gen_split_1818 (insn, operands);

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
              return gen_split_1845 (insn, operands);

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
              return gen_split_1872 (insn, operands);

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
              return gen_split_1899 (insn, operands);

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
              return gen_split_1926 (insn, operands);

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
              return gen_split_1953 (insn, operands);

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
              return gen_split_2946 (insn, operands);

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
              return gen_split_2955 (insn, operands);

            case 38:
              if (!(
#line 13946 "../../gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 13950 "../../gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_2964 (insn, operands);

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
              return gen_split_2973 (insn, operands);

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
              return gen_split_2982 (insn, operands);

            case 41:
              if (!(
#line 13946 "../../gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 13950 "../../gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_2991 (insn, operands);

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
              return gen_split_3000 (insn, operands);

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
              return gen_split_3009 (insn, operands);

            case 44:
              if (!(
#line 13946 "../../gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 13950 "../../gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_3018 (insn, operands);

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
              return gen_split_3027 (insn, operands);

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
              return gen_split_3036 (insn, operands);

            case 47:
              if (!(
#line 13946 "../../gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 13950 "../../gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_3045 (insn, operands);

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
              return gen_split_2298 (insn, operands);

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
              return gen_split_2325 (insn, operands);

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
              return gen_split_2352 (insn, operands);

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
              return gen_split_2379 (insn, operands);

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
              return gen_split_2406 (insn, operands);

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
              return gen_split_2433 (insn, operands);

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
              return gen_split_2460 (insn, operands);

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
              return gen_split_2487 (insn, operands);

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
              return gen_split_2514 (insn, operands);

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
              return gen_split_2541 (insn, operands);

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
              return gen_split_2568 (insn, operands);

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
              return gen_split_2595 (insn, operands);

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
              return gen_split_2301 (insn, operands);

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
              return gen_split_2328 (insn, operands);

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
              return gen_split_2355 (insn, operands);

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
              return gen_split_2382 (insn, operands);

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
              return gen_split_2409 (insn, operands);

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
              return gen_split_2436 (insn, operands);

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
              return gen_split_2463 (insn, operands);

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
              return gen_split_2490 (insn, operands);

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
              return gen_split_2517 (insn, operands);

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
              return gen_split_2544 (insn, operands);

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
              return gen_split_2571 (insn, operands);

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
              return gen_split_2598 (insn, operands);

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
              return gen_split_2304 (insn, operands);

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
              return gen_split_2331 (insn, operands);

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
              return gen_split_2358 (insn, operands);

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
              return gen_split_2385 (insn, operands);

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
              return gen_split_2412 (insn, operands);

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
              return gen_split_2439 (insn, operands);

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
              return gen_split_2466 (insn, operands);

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
              return gen_split_2493 (insn, operands);

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
              return gen_split_2520 (insn, operands);

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
              return gen_split_2547 (insn, operands);

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
              return gen_split_2574 (insn, operands);

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
              return gen_split_2601 (insn, operands);

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
              return gen_split_1659 (insn, operands);

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
              return gen_split_1686 (insn, operands);

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
              return gen_split_1713 (insn, operands);

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
              return gen_split_1740 (insn, operands);

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
              return gen_split_1767 (insn, operands);

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
              return gen_split_1794 (insn, operands);

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
              return gen_split_1821 (insn, operands);

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
              return gen_split_1848 (insn, operands);

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
              return gen_split_1875 (insn, operands);

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
              return gen_split_1902 (insn, operands);

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
              return gen_split_1929 (insn, operands);

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
              return gen_split_1956 (insn, operands);

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
              return gen_split_1662 (insn, operands);

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
              return gen_split_1689 (insn, operands);

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
              return gen_split_1716 (insn, operands);

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
              return gen_split_1743 (insn, operands);

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
              return gen_split_1770 (insn, operands);

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
              return gen_split_1797 (insn, operands);

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
              return gen_split_1824 (insn, operands);

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
              return gen_split_1851 (insn, operands);

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
              return gen_split_1878 (insn, operands);

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
              return gen_split_1905 (insn, operands);

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
              return gen_split_1932 (insn, operands);

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
              return gen_split_1959 (insn, operands);

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
              return gen_split_1665 (insn, operands);

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
              return gen_split_1692 (insn, operands);

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
              return gen_split_1719 (insn, operands);

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
              return gen_split_1746 (insn, operands);

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
              return gen_split_1773 (insn, operands);

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
              return gen_split_1800 (insn, operands);

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
              return gen_split_1827 (insn, operands);

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
              return gen_split_1854 (insn, operands);

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
              return gen_split_1881 (insn, operands);

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
              return gen_split_1908 (insn, operands);

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
              return gen_split_1935 (insn, operands);

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
              return gen_split_1962 (insn, operands);

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
              return gen_split_2949 (insn, operands);

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
              return gen_split_2958 (insn, operands);

            case 38:
              if (!(
#line 13946 "../../gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 13950 "../../gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_2967 (insn, operands);

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
              return gen_split_2976 (insn, operands);

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
              return gen_split_2985 (insn, operands);

            case 41:
              if (!(
#line 13946 "../../gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 13950 "../../gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_2994 (insn, operands);

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
              return gen_split_3003 (insn, operands);

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
              return gen_split_3012 (insn, operands);

            case 44:
              if (!(
#line 13946 "../../gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 13950 "../../gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_3021 (insn, operands);

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
              return gen_split_3030 (insn, operands);

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
              return gen_split_3039 (insn, operands);

            case 47:
              if (!(
#line 13946 "../../gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 13950 "../../gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_3048 (insn, operands);

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
              return gen_split_2307 (insn, operands);

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
              return gen_split_2334 (insn, operands);

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
              return gen_split_2361 (insn, operands);

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
              return gen_split_2388 (insn, operands);

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
              return gen_split_2415 (insn, operands);

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
              return gen_split_2442 (insn, operands);

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
              return gen_split_2469 (insn, operands);

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
              return gen_split_2496 (insn, operands);

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
              return gen_split_2523 (insn, operands);

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
              return gen_split_2550 (insn, operands);

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
              return gen_split_2577 (insn, operands);

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
              return gen_split_2604 (insn, operands);

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
              return gen_split_2310 (insn, operands);

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
              return gen_split_2337 (insn, operands);

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
              return gen_split_2364 (insn, operands);

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
              return gen_split_2391 (insn, operands);

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
              return gen_split_2418 (insn, operands);

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
              return gen_split_2445 (insn, operands);

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
              return gen_split_2472 (insn, operands);

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
              return gen_split_2499 (insn, operands);

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
              return gen_split_2526 (insn, operands);

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
              return gen_split_2553 (insn, operands);

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
              return gen_split_2580 (insn, operands);

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
              return gen_split_2607 (insn, operands);

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
              return gen_split_2313 (insn, operands);

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
              return gen_split_2340 (insn, operands);

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
              return gen_split_2367 (insn, operands);

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
              return gen_split_2394 (insn, operands);

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
              return gen_split_2421 (insn, operands);

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
              return gen_split_2448 (insn, operands);

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
              return gen_split_2475 (insn, operands);

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
              return gen_split_2502 (insn, operands);

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
              return gen_split_2529 (insn, operands);

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
              return gen_split_2556 (insn, operands);

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
              return gen_split_2583 (insn, operands);

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
              return gen_split_2610 (insn, operands);

            default:
              return NULL;
            }

        default:
          return NULL;
        }

    case XOR:
      return split_67 (x1, insn);

    case VEC_DUPLICATE:
      switch (pattern596 (x2))
        {
        case 0:
          if (!(
#line 18648 "../../gcc/config/i386/sse.md"
(64 == 64 || TARGET_AVX512VL
   || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256)) && 
#line 569 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return NULL;
          return gen_split_3350 (insn, operands);

        case 1:
          if (!(
#line 18648 "../../gcc/config/i386/sse.md"
(64 == 64 || TARGET_AVX512VL
   || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256)) && 
#line 570 "../../gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return NULL;
          return gen_split_3351 (insn, operands);

        case 2:
          if (!(
#line 18648 "../../gcc/config/i386/sse.md"
(64 == 64 || TARGET_AVX512VL
   || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256)) && 
#line 571 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512)))
            return NULL;
          return gen_split_3352 (insn, operands);

        case 3:
          if (!(
#line 18648 "../../gcc/config/i386/sse.md"
(32 == 64 || TARGET_AVX512VL
   || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256)) && 
#line 571 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
            return NULL;
          return gen_split_3353 (insn, operands);

        case 4:
          if (!
#line 18648 "../../gcc/config/i386/sse.md"
(16 == 64 || TARGET_AVX512VL
   || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256)))
            return NULL;
          return gen_split_3354 (insn, operands);

        case 5:
          if (!(
#line 18648 "../../gcc/config/i386/sse.md"
(64 == 64 || TARGET_AVX512VL
   || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256)) && 
#line 572 "../../gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512)))
            return NULL;
          return gen_split_3355 (insn, operands);

        case 6:
          if (!(
#line 18648 "../../gcc/config/i386/sse.md"
(32 == 64 || TARGET_AVX512VL
   || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256)) && 
#line 572 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
            return NULL;
          return gen_split_3356 (insn, operands);

        case 7:
          if (!
#line 18648 "../../gcc/config/i386/sse.md"
(16 == 64 || TARGET_AVX512VL
   || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256)))
            return NULL;
          return gen_split_3357 (insn, operands);

        case 8:
          if (!(
#line 18648 "../../gcc/config/i386/sse.md"
(32 == 64 || TARGET_AVX512VL
   || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256)) && 
#line 573 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
            return NULL;
          return gen_split_3358 (insn, operands);

        case 9:
          if (!
#line 18648 "../../gcc/config/i386/sse.md"
(16 == 64 || TARGET_AVX512VL
   || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256)))
            return NULL;
          return gen_split_3359 (insn, operands);

        case 10:
          if (!(
#line 18648 "../../gcc/config/i386/sse.md"
(32 == 64 || TARGET_AVX512VL
   || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256)) && 
#line 574 "../../gcc/config/i386/sse.md"
(TARGET_AVX)))
            return NULL;
          return gen_split_3360 (insn, operands);

        case 11:
          if (!
#line 18648 "../../gcc/config/i386/sse.md"
(16 == 64 || TARGET_AVX512VL
   || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256)))
            return NULL;
          return gen_split_3361 (insn, operands);

        default:
          return NULL;
        }

    default:
      return NULL;
    }
}

 rtx_insn *
peephole2_26 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pmatch_len_ ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  rtx_insn *res ATTRIBUTE_UNUSED;
  if (peep2_current_count >= 2)
    {
      res = peephole2_24 (x1, insn, pmatch_len_);
      if (res != NULL_RTX)
        return res;
    }
  x2 = XEXP (x1, 1);
  operands[1] = x2;
  if (memory_operand (operands[1], E_SImode)
      && push_operand (operands[0], E_SImode)
      && 
#line 27639 "../../gcc/config/i386/i386.md"
(!(TARGET_PUSH_MEMORY || optimize_insn_for_size_p ())
   && !RTX_FRAME_RELATED_P (peep2_next_insn (0))))
    {
      *pmatch_len_ = 0;
      res = gen_peephole2_253 (insn, operands);
      if (res != NULL_RTX)
        return res;
    }
  if (peep2_current_count < 2)
    return NULL;
  if (general_reg_operand (operands[1], E_SImode))
    {
      x3 = PATTERN (peep2_next_insn (1));
      if (pattern412 (x3, 
E_SImode) == 0
          && 
#line 27839 "../../gcc/config/i386/i386.md"
(REGNO (operands[0]) != REGNO (operands[1])
   && (SImode != QImode
       || any_QIreg_operand (operands[1], QImode))))
        {
          *pmatch_len_ = 1;
          res = gen_peephole2_281 (insn, operands);
          if (res != NULL_RTX)
            return res;
        }
    }
  if (peep2_current_count >= 3)
    {
      res = peephole2_25 (x1, insn, pmatch_len_);
      if (res != NULL_RTX)
        return res;
    }
  if (mmx_reg_operand (operands[1], E_VOIDmode)
      && mmx_reg_operand (operands[0], E_VOIDmode))
    {
      x3 = PATTERN (peep2_next_insn (1));
      if (pattern599 (x3) == 0
          && 
#line 27858 "../../gcc/config/i386/i386.md"
(REGNO (operands[0]) != REGNO (operands[1])))
        {
          *pmatch_len_ = 1;
          res = gen_peephole2_283 (insn, operands);
          if (res != NULL_RTX)
            return res;
        }
    }
  if (sse_reg_operand (operands[1], E_VOIDmode)
      && sse_reg_operand (operands[0], E_VOIDmode))
    {
      x3 = PATTERN (peep2_next_insn (1));
      if (pattern599 (x3) == 0
          && 
#line 27870 "../../gcc/config/i386/i386.md"
(REGNO (operands[0]) != REGNO (operands[1])
   /* Punt if operands[1] is %[xy]mm16+ and AVX512BW is not enabled,
      as EVEX encoded vpadd[bw], vpmullw, vpmin[su][bw] and vpmax[su][bw]
      instructions require AVX512BW and AVX512VL, but with the original
      instructions it might require just AVX512VL.
      AVX512VL is implied from TARGET_HARD_REGNO_MODE_OK.  */
   && (!EXT_REX_SSE_REGNO_P (REGNO (operands[1]))
       || TARGET_AVX512BW
       || GET_MODE_SIZE (GET_MODE_INNER (GET_MODE (operands[0]))) > 2
       || logic_operator (operands[3], VOIDmode))))
        {
          *pmatch_len_ = 1;
          res = gen_peephole2_284 (insn, operands);
          if (res != NULL_RTX)
            return res;
        }
    }
  if (peep2_current_count >= 3
      && peep2_current_count >= 4)
    {
      if (memory_operand (operands[1], E_QImode))
        {
          x3 = PATTERN (peep2_next_insn (1));
          if (pattern730 (x3, 
E_QImode) == 0
              && 
#line 27995 "../../gcc/config/i386/i386.md"
((TARGET_READ_MODIFY_WRITE || optimize_insn_for_size_p ())
   && REGNO (operands[4]) == REGNO (operands[0])
   && REGNO (operands[5]) == REGNO (operands[3])
   && peep2_reg_dead_p (4, operands[3])
   && ((REGNO (operands[0]) == REGNO (operands[3]))
       || peep2_reg_dead_p (2, operands[0]))
   && !reg_overlap_mentioned_p (operands[0], operands[1])
   && !reg_overlap_mentioned_p (operands[3], operands[1])
   && !reg_overlap_mentioned_p (operands[0], operands[2])
   && (QImode != QImode
       || immediate_operand (operands[2], QImode)
       || any_QIreg_operand (operands[2], QImode))
   && ix86_match_ccmode (peep2_next_insn (3), CCGOCmode)))
            {
              *pmatch_len_ = 3;
              res = gen_peephole2_301 (insn, operands);
              if (res != NULL_RTX)
                return res;
            }
        }
      if (memory_operand (operands[1], E_HImode))
        {
          x3 = PATTERN (peep2_next_insn (1));
          if (pattern730 (x3, 
E_HImode) == 0
              && 
#line 27995 "../../gcc/config/i386/i386.md"
((TARGET_READ_MODIFY_WRITE || optimize_insn_for_size_p ())
   && REGNO (operands[4]) == REGNO (operands[0])
   && REGNO (operands[5]) == REGNO (operands[3])
   && peep2_reg_dead_p (4, operands[3])
   && ((REGNO (operands[0]) == REGNO (operands[3]))
       || peep2_reg_dead_p (2, operands[0]))
   && !reg_overlap_mentioned_p (operands[0], operands[1])
   && !reg_overlap_mentioned_p (operands[3], operands[1])
   && !reg_overlap_mentioned_p (operands[0], operands[2])
   && (HImode != QImode
       || immediate_operand (operands[2], QImode)
       || any_QIreg_operand (operands[2], QImode))
   && ix86_match_ccmode (peep2_next_insn (3), CCGOCmode)))
            {
              *pmatch_len_ = 3;
              res = gen_peephole2_302 (insn, operands);
              if (res != NULL_RTX)
                return res;
            }
        }
      if (memory_operand (operands[1], E_SImode))
        {
          x3 = PATTERN (peep2_next_insn (1));
          if (pattern731 (x3, 
E_SImode) == 0
              && 
#line 27995 "../../gcc/config/i386/i386.md"
((TARGET_READ_MODIFY_WRITE || optimize_insn_for_size_p ())
   && REGNO (operands[4]) == REGNO (operands[0])
   && REGNO (operands[5]) == REGNO (operands[3])
   && peep2_reg_dead_p (4, operands[3])
   && ((REGNO (operands[0]) == REGNO (operands[3]))
       || peep2_reg_dead_p (2, operands[0]))
   && !reg_overlap_mentioned_p (operands[0], operands[1])
   && !reg_overlap_mentioned_p (operands[3], operands[1])
   && !reg_overlap_mentioned_p (operands[0], operands[2])
   && (SImode != QImode
       || immediate_operand (operands[2], QImode)
       || any_QIreg_operand (operands[2], QImode))
   && ix86_match_ccmode (peep2_next_insn (3), CCGOCmode)))
            {
              *pmatch_len_ = 3;
              res = gen_peephole2_303 (insn, operands);
              if (res != NULL_RTX)
                return res;
            }
        }
      if (memory_operand (operands[1], E_DImode))
        {
          x3 = PATTERN (peep2_next_insn (1));
          if (pattern731 (x3, 
E_DImode) == 0
              && (
#line 27995 "../../gcc/config/i386/i386.md"
((TARGET_READ_MODIFY_WRITE || optimize_insn_for_size_p ())
   && REGNO (operands[4]) == REGNO (operands[0])
   && REGNO (operands[5]) == REGNO (operands[3])
   && peep2_reg_dead_p (4, operands[3])
   && ((REGNO (operands[0]) == REGNO (operands[3]))
       || peep2_reg_dead_p (2, operands[0]))
   && !reg_overlap_mentioned_p (operands[0], operands[1])
   && !reg_overlap_mentioned_p (operands[3], operands[1])
   && !reg_overlap_mentioned_p (operands[0], operands[2])
   && (DImode != QImode
       || immediate_operand (operands[2], QImode)
       || any_QIreg_operand (operands[2], QImode))
   && ix86_match_ccmode (peep2_next_insn (3), CCGOCmode)) && 
#line 1161 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
            {
              *pmatch_len_ = 3;
              res = gen_peephole2_304 (insn, operands);
              if (res != NULL_RTX)
                return res;
            }
        }
    }
  if (!memory_operand (operands[1], E_VOIDmode)
      || !register_operand (operands[0], E_VOIDmode))
    return NULL;
  x3 = PATTERN (peep2_next_insn (1));
  if (GET_CODE (x3) != SET)
    return NULL;
  x4 = XEXP (x3, 0);
  operands[2] = x4;
  if (!memory_operand (operands[2], E_VOIDmode))
    return NULL;
  x5 = XEXP (x3, 1);
  if (!rtx_equal_p (x5, operands[0])
      || !
#line 28328 "../../gcc/config/i386/i386.md"
(!MEM_VOLATILE_P (operands[1])
   && !MEM_VOLATILE_P (operands[2])
   && rtx_equal_p (operands[1], operands[2])
   && !reg_overlap_mentioned_p (operands[0], operands[2])))
    return NULL;
  *pmatch_len_ = 1;
  return gen_peephole2_331 (insn, operands);
}

 rtx_insn *
peephole2_40 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pmatch_len_ ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8;
  rtx_insn *res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 1);
  if (pattern227 (x2, 
E_CCmode, 
17) != 0)
    return NULL;
  x3 = XVECEXP (x1, 0, 0);
  x4 = XEXP (x3, 1);
  switch (XWINT (x4, 0))
    {
    case 0L:
      res = peephole2_39 (x1, insn, pmatch_len_);
      if (res != NULL_RTX)
        return res;
      break;

    case 1L:
      x5 = XEXP (x3, 0);
      if (GET_CODE (x5) == ZERO_EXTRACT
          && pattern1066 (x5) == 0
          && 
#line 19057 "../../gcc/config/i386/i386.md"
(TARGET_64BIT && !TARGET_USE_BT))
        {
          *pmatch_len_ = 0;
          res = gen_peephole2_165 (insn, operands);
          if (res != NULL_RTX)
            return res;
        }
      break;

    default:
      break;
    }
  if (peep2_current_count < 2
      || peep2_current_count < 3)
    return NULL;
  x5 = XEXP (x3, 0);
  operands[0] = x5;
  x6 = PATTERN (peep2_next_insn (1));
  if (pattern413 (x6, 
UNSPEC_VOLATILE, 
3) != 0)
    return NULL;
  x7 = XVECEXP (x6, 0, 1);
  if (GET_CODE (x7) != SET)
    return NULL;
  x8 = PATTERN (peep2_next_insn (2));
  if (pattern1536 (x8) != 0)
    return NULL;
  switch (GET_MODE (operands[0]))
    {
    case E_SImode:
      if (!register_operand (operands[0], E_SImode))
        return NULL;
      operands[1] = x4;
      switch (pattern1802 (x6, 
E_SImode))
        {
        case 0:
          if (
#line 557 "../../gcc/config/i386/sync.md"
(REGNO (operands[0]) == REGNO (operands[2])))
            {
              *pmatch_len_ = 2;
              res = gen_peephole2_407 (insn, operands);
              if (res != NULL_RTX)
                return res;
            }
          break;

        case 1:
          if (
#line 557 "../../gcc/config/i386/sync.md"
(REGNO (operands[0]) == REGNO (operands[2])))
            {
              *pmatch_len_ = 2;
              res = gen_peephole2_409 (insn, operands);
              if (res != NULL_RTX)
                return res;
            }
          break;

        case 2:
          if (
#line 557 "../../gcc/config/i386/sync.md"
(REGNO (operands[0]) == REGNO (operands[2])))
            {
              *pmatch_len_ = 2;
              res = gen_peephole2_411 (insn, operands);
              if (res != NULL_RTX)
                return res;
            }
          break;

        case 3:
          if ((
#line 557 "../../gcc/config/i386/sync.md"
(REGNO (operands[0]) == REGNO (operands[2])) && 
#line 1161 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
            {
              *pmatch_len_ = 2;
              res = gen_peephole2_413 (insn, operands);
              if (res != NULL_RTX)
                return res;
            }
          break;

        default:
          break;
        }
      operands[2] = x4;
      if (pattern1758 (x6, 
E_SImode) != 0
          || !
#line 754 "../../gcc/config/i386/sync.md"
(peep2_reg_dead_p (3, operands[0])
   && (unsigned HOST_WIDE_INT) INTVAL (operands[2])
      == -(unsigned HOST_WIDE_INT) INTVAL (operands[3])
   && !reg_overlap_mentioned_p (operands[0], operands[1])))
        return NULL;
      *pmatch_len_ = 2;
      return gen_peephole2_421 (insn, operands);

    case E_DImode:
      if (!register_operand (operands[0], E_DImode))
        return NULL;
      operands[1] = x4;
      switch (pattern1802 (x6, 
E_DImode))
        {
        case 0:
          if ((
#line 557 "../../gcc/config/i386/sync.md"
(REGNO (operands[0]) == REGNO (operands[2])) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
            {
              *pmatch_len_ = 2;
              res = gen_peephole2_408 (insn, operands);
              if (res != NULL_RTX)
                return res;
            }
          break;

        case 1:
          if ((
#line 557 "../../gcc/config/i386/sync.md"
(REGNO (operands[0]) == REGNO (operands[2])) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
            {
              *pmatch_len_ = 2;
              res = gen_peephole2_410 (insn, operands);
              if (res != NULL_RTX)
                return res;
            }
          break;

        case 2:
          if ((
#line 557 "../../gcc/config/i386/sync.md"
(REGNO (operands[0]) == REGNO (operands[2])) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
            {
              *pmatch_len_ = 2;
              res = gen_peephole2_412 (insn, operands);
              if (res != NULL_RTX)
                return res;
            }
          break;

        case 3:
          if ((
#line 557 "../../gcc/config/i386/sync.md"
(REGNO (operands[0]) == REGNO (operands[2])) && 
#line 1167 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
            {
              *pmatch_len_ = 2;
              res = gen_peephole2_414 (insn, operands);
              if (res != NULL_RTX)
                return res;
            }
          break;

        default:
          break;
        }
      operands[2] = x4;
      if (pattern1758 (x6, 
E_DImode) != 0
          || !(
#line 754 "../../gcc/config/i386/sync.md"
(peep2_reg_dead_p (3, operands[0])
   && (unsigned HOST_WIDE_INT) INTVAL (operands[2])
      == -(unsigned HOST_WIDE_INT) INTVAL (operands[3])
   && !reg_overlap_mentioned_p (operands[0], operands[1])) && 
#line 1161 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
        return NULL;
      *pmatch_len_ = 2;
      return gen_peephole2_422 (insn, operands);

    case E_QImode:
      if (pattern1759 (x4, 
E_QImode) != 0
          || !
#line 754 "../../gcc/config/i386/sync.md"
(peep2_reg_dead_p (3, operands[0])
   && (unsigned HOST_WIDE_INT) INTVAL (operands[2])
      == -(unsigned HOST_WIDE_INT) INTVAL (operands[3])
   && !reg_overlap_mentioned_p (operands[0], operands[1])))
        return NULL;
      *pmatch_len_ = 2;
      return gen_peephole2_419 (insn, operands);

    case E_HImode:
      if (pattern1759 (x4, 
E_HImode) != 0
          || !
#line 754 "../../gcc/config/i386/sync.md"
(peep2_reg_dead_p (3, operands[0])
   && (unsigned HOST_WIDE_INT) INTVAL (operands[2])
      == -(unsigned HOST_WIDE_INT) INTVAL (operands[3])
   && !reg_overlap_mentioned_p (operands[0], operands[1])))
        return NULL;
      *pmatch_len_ = 2;
      return gen_peephole2_420 (insn, operands);

    default:
      return NULL;
    }
}

 rtx_insn *
peephole2_48 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pmatch_len_ ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12, x13, x14;
  rtx_insn *res ATTRIBUTE_UNUSED;
  if (peep2_current_count < 3)
    return NULL;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  operands[2] = x3;
  x4 = XEXP (x2, 0);
  operands[0] = x4;
  x5 = XEXP (x3, 1);
  operands[1] = x5;
  x6 = XEXP (x3, 0);
  if (!rtx_equal_p (x6, operands[0]))
    return NULL;
  x7 = PATTERN (peep2_next_insn (1));
  if (GET_CODE (x7) != SET)
    return NULL;
  x8 = XEXP (x7, 1);
  if (!rtx_equal_p (x8, operands[0]))
    return NULL;
  x9 = XEXP (x7, 0);
  if (!rtx_equal_p (x9, operands[1]))
    return NULL;
  x10 = PATTERN (peep2_next_insn (2));
  if (GET_CODE (x10) != SET)
    return NULL;
  x11 = XEXP (x10, 1);
  if (GET_CODE (x11) != COMPARE)
    return NULL;
  x12 = XEXP (x11, 1);
  if (x12 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
    return NULL;
  x13 = XEXP (x10, 0);
  if (GET_CODE (x13) != REG
      || REGNO (x13) != 17)
    return NULL;
  x14 = XEXP (x11, 0);
  if (!rtx_equal_p (x14, operands[0]))
    return NULL;
  switch (GET_MODE (operands[0]))
    {
    case E_QImode:
      if (!register_operand (operands[0], E_QImode)
          || !plusminuslogic_operator (operands[2], E_QImode)
          || !memory_operand (operands[1], E_QImode)
          || !
#line 28030 "../../gcc/config/i386/i386.md"
((TARGET_READ_MODIFY_WRITE || optimize_insn_for_size_p ())
   && COMMUTATIVE_ARITH_P (operands[2])
   && peep2_reg_dead_p (3, operands[0])
   && !reg_overlap_mentioned_p (operands[0], operands[1])
   && ix86_match_ccmode (peep2_next_insn (2),
			 GET_CODE (operands[2]) == PLUS
			 ? CCGOCmode : CCNOmode)))
        return NULL;
      *pmatch_len_ = 2;
      return gen_peephole2_305 (insn, operands);

    case E_HImode:
      if (!register_operand (operands[0], E_HImode)
          || !plusminuslogic_operator (operands[2], E_HImode)
          || !memory_operand (operands[1], E_HImode)
          || !
#line 28030 "../../gcc/config/i386/i386.md"
((TARGET_READ_MODIFY_WRITE || optimize_insn_for_size_p ())
   && COMMUTATIVE_ARITH_P (operands[2])
   && peep2_reg_dead_p (3, operands[0])
   && !reg_overlap_mentioned_p (operands[0], operands[1])
   && ix86_match_ccmode (peep2_next_insn (2),
			 GET_CODE (operands[2]) == PLUS
			 ? CCGOCmode : CCNOmode)))
        return NULL;
      *pmatch_len_ = 2;
      return gen_peephole2_306 (insn, operands);

    case E_SImode:
      if (!register_operand (operands[0], E_SImode)
          || !plusminuslogic_operator (operands[2], E_SImode)
          || !memory_operand (operands[1], E_SImode)
          || !
#line 28030 "../../gcc/config/i386/i386.md"
((TARGET_READ_MODIFY_WRITE || optimize_insn_for_size_p ())
   && COMMUTATIVE_ARITH_P (operands[2])
   && peep2_reg_dead_p (3, operands[0])
   && !reg_overlap_mentioned_p (operands[0], operands[1])
   && ix86_match_ccmode (peep2_next_insn (2),
			 GET_CODE (operands[2]) == PLUS
			 ? CCGOCmode : CCNOmode)))
        return NULL;
      *pmatch_len_ = 2;
      return gen_peephole2_307 (insn, operands);

    case E_DImode:
      if (!register_operand (operands[0], E_DImode)
          || !plusminuslogic_operator (operands[2], E_DImode)
          || !memory_operand (operands[1], E_DImode)
          || !(
#line 28030 "../../gcc/config/i386/i386.md"
((TARGET_READ_MODIFY_WRITE || optimize_insn_for_size_p ())
   && COMMUTATIVE_ARITH_P (operands[2])
   && peep2_reg_dead_p (3, operands[0])
   && !reg_overlap_mentioned_p (operands[0], operands[1])
   && ix86_match_ccmode (peep2_next_insn (2),
			 GET_CODE (operands[2]) == PLUS
			 ? CCGOCmode : CCNOmode)) && 
#line 1161 "../../gcc/config/i386/i386.md"
(TARGET_64BIT)))
        return NULL;
      *pmatch_len_ = 2;
      return gen_peephole2_308 (insn, operands);

    default:
      return NULL;
    }
}
